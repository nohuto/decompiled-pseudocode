/*
 * XREFs of MouCreateClassObject @ 0x1C000D790
 * Callers:
 *     MouseAddDevice @ 0x1C000D3F0 (MouseAddDevice.c)
 *     MouseClassFindMorePorts @ 0x1C000DD10 (MouseClassFindMorePorts.c)
 *     DriverEntry @ 0x1C00112E0 (DriverEntry.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x1C0002240 (RtlUnicodeStringPrintf.c)
 *     MouInitializeDataQueue @ 0x1C00022F0 (MouInitializeDataQueue.c)
 *     WPP_RECORDER_SF_S @ 0x1C00023A0 (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1C00029B0 (__security_check_cookie.c)
 *     MouseClassLogError @ 0x1C0004BA8 (MouseClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C0005CCC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall MouCreateClassObject(
        PDRIVER_OBJECT DriverObject,
        __int128 *a2,
        PDEVICE_OBJECT *a3,
        PWSTR *a4,
        char a5)
{
  __int64 DeviceExtension; // rdi
  int v7; // r15d
  unsigned int v8; // r12d
  __int128 *v10; // rbx
  int v11; // r13d
  unsigned __int16 v12; // ax
  const wchar_t *v13; // rdx
  int v14; // edx
  NTSTATUS v15; // esi
  __int64 v16; // rdx
  PWSTR Buffer; // rcx
  __int64 v18; // rcx
  _OWORD *v19; // rax
  __int128 v20; // xmm0
  __int64 v21; // rdx
  __int64 Pool2; // rax
  __int64 v23; // rdx
  NTSTATUS Device; // eax
  void *v26; // rcx
  void *v27; // rcx
  ULONG DeviceCharacteristics; // [rsp+20h] [rbp-60h]
  ULONG DeviceCharacteristicsa; // [rsp+20h] [rbp-60h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  PWSTR *v31; // [rsp+50h] [rbp-30h]
  PDRIVER_OBJECT DriverObjecta; // [rsp+60h] [rbp-20h]
  int v33[4]; // [rsp+68h] [rbp-18h] BYREF

  DriverObjecta = DriverObject;
  v31 = a4;
  DeviceExtension = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v7 = 0;
  DestinationString.Buffer = 0LL;
  v8 = 0;
  v10 = a2;
  v11 = 20000;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 2LL);
  }
  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  *a3 = 0LL;
  if ( !*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v12 = ::DestinationString.Length + 30;
    DestinationString.MaximumLength = ::DestinationString.Length + 30;
    if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) && a5 )
    {
      v12 = ::DestinationString.Length + 44;
      DestinationString.MaximumLength = ::DestinationString.Length + 44;
    }
    DestinationString.Buffer = (PWSTR)ExAllocatePool2(256LL, v12, 1131769677LL);
    if ( DestinationString.Buffer )
    {
      do
      {
        if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) && a5 )
          v13 = L"\\Device\\%wZLegacy%d";
        else
          v13 = L"\\Device\\%wZ%d";
        ++dword_1C000A5D8;
        v15 = RtlUnicodeStringPrintf(&DestinationString, v13, &::DestinationString);
        if ( v15 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_S(
              WPP_GLOBAL_Control->DeviceExtension,
              2,
              2,
              70,
              DeviceCharacteristics,
              (__int64)DestinationString.Buffer);
          v7 = -1073414131;
          goto LABEL_34;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v14) = 5;
          WPP_RECORDER_SF_S(
            WPP_GLOBAL_Control->DeviceExtension,
            v14,
            2,
            71,
            DeviceCharacteristics,
            (__int64)DestinationString.Buffer);
        }
        v15 = IoCreateDevice(DriverObjecta, 0x160u, &DestinationString, 0xFu, 0, 0, a3);
      }
      while ( v15 == -1073741771 );
      if ( DestinationString.MaximumLength >= (unsigned __int64)DestinationString.Length + 2 )
      {
        v16 = 0LL;
        v7 = 0;
        DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) + 1] = 0;
        Buffer = DestinationString.Buffer;
        *v31 = DestinationString.Buffer;
        goto LABEL_19;
      }
      v15 = -1073741823;
      RtlFreeUnicodeString(&DestinationString);
      *v31 = 0LL;
      goto LABEL_53;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 2LL, 2LL);
    v15 = -1073741823;
    v7 = -1073414143;
LABEL_34:
    v33[0] = DestinationString.MaximumLength;
    v11 = 20006;
    v8 = 1;
    RtlFreeUnicodeString(&DestinationString);
    *v31 = 0LL;
    goto LABEL_47;
  }
  ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  Device = IoCreateDevice(DriverObject, 0x160u, 0LL, 0xFu, 0, 0, a3);
  Buffer = DestinationString.Buffer;
  v16 = 0LL;
  v15 = Device;
  *v31 = 0LL;
LABEL_19:
  if ( v15 < 0 || !*a3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, 2, 2, 72, DeviceCharacteristics, (__int64)Buffer);
    v7 = -1073414131;
    v33[0] = DestinationString.MaximumLength;
    v11 = 20006;
    v8 = 1;
LABEL_25:
    if ( !v15 )
      goto LABEL_26;
    RtlFreeUnicodeString(&DestinationString);
    *v31 = 0LL;
    if ( !v7 )
      goto LABEL_50;
    goto LABEL_47;
  }
  (*a3)->Flags |= 4u;
  v18 = 2LL;
  DeviceExtension = (__int64)(*a3)->DeviceExtension;
  v19 = (_OWORD *)DeviceExtension;
  do
  {
    v19 += 8;
    v20 = *v10;
    v10 += 8;
    *(v19 - 8) = v20;
    *(v19 - 7) = *(v10 - 7);
    *(v19 - 6) = *(v10 - 6);
    *(v19 - 5) = *(v10 - 5);
    *(v19 - 4) = *(v10 - 4);
    *(v19 - 3) = *(v10 - 3);
    *(v19 - 2) = *(v10 - 2);
    *(v19 - 1) = *(v10 - 1);
    --v18;
  }
  while ( v18 );
  *v19 = *v10;
  v19[1] = v10[1];
  v19[2] = v10[2];
  v19[3] = v10[3];
  v19[4] = v10[4];
  v19[5] = v10[5];
  *(_QWORD *)DeviceExtension = *a3;
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 32), 0x43756F4Du, 0, 0, 0x20u);
  KeInitializeSpinLock((PKSPIN_LOCK)(DeviceExtension + 144));
  v21 = *(unsigned int *)(DeviceExtension + 136);
  *(_QWORD *)(DeviceExtension + 160) = DeviceExtension + 152;
  *(_QWORD *)(DeviceExtension + 152) = DeviceExtension + 152;
  *(_DWORD *)(DeviceExtension + 80) = 0;
  Pool2 = ExAllocatePool2(64LL, v21, 1131769677LL);
  *(_QWORD *)(DeviceExtension + 104) = Pool2;
  if ( Pool2 )
  {
    MouInitializeDataQueue(DeviceExtension, v23);
    goto LABEL_25;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      2,
      2,
      73,
      DeviceCharacteristicsa,
      (__int64)DestinationString.Buffer);
  v15 = -1073741670;
  v7 = -1073414142;
  v11 = 20020;
  RtlFreeUnicodeString(&DestinationString);
  *v31 = 0LL;
LABEL_47:
  v26 = *a3;
  if ( !*a3 )
    v26 = DriverObjecta;
  MouseClassLogError(v26, v7, v11, v15, v8, v33, 0);
LABEL_50:
  if ( DeviceExtension )
  {
    v27 = *(void **)(DeviceExtension + 104);
    if ( v27 )
    {
      ExFreePoolWithTag(v27, 0);
      *(_QWORD *)(DeviceExtension + 104) = 0LL;
    }
  }
LABEL_53:
  if ( *a3 )
  {
    IoDeleteDevice(*a3);
    *a3 = 0LL;
  }
LABEL_26:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v16) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v16, 2LL);
  }
  return (unsigned int)v15;
}
