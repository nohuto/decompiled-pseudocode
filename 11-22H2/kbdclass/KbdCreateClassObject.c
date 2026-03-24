/*
 * XREFs of KbdCreateClassObject @ 0x1C000DDB0
 * Callers:
 *     KeyboardAddDevice @ 0x1C000D940 (KeyboardAddDevice.c)
 *     KeyboardClassFindMorePorts @ 0x1C000E0D0 (KeyboardClassFindMorePorts.c)
 *     DriverEntry @ 0x1C0011080 (DriverEntry.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x1C00028F0 (RtlUnicodeStringPrintf.c)
 *     KbdInitializeDataQueue @ 0x1C00029A0 (KbdInitializeDataQueue.c)
 *     WPP_RECORDER_SF_S @ 0x1C0002D60 (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1C0003010 (__security_check_cookie.c)
 *     KeyboardClassLogError @ 0x1C0005418 (KeyboardClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C000652C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall KbdCreateClassObject(
        PDRIVER_OBJECT DriverObject,
        __int128 *a2,
        PDEVICE_OBJECT *a3,
        __int64 *a4,
        char a5)
{
  __int64 DeviceExtension; // rdi
  int v7; // r13d
  unsigned int v8; // r15d
  __int128 *v10; // rbx
  int v11; // r12d
  unsigned __int16 v12; // ax
  __int64 v13; // rdx
  const wchar_t *v14; // rdx
  int v15; // edx
  NTSTATUS v16; // esi
  int v17; // r8d
  unsigned __int64 v18; // r8
  __int64 v19; // rdx
  PWSTR Buffer; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int128 v23; // xmm0
  __int64 v24; // rdx
  __int64 Pool2; // rax
  __int64 v26; // rdx
  int v27; // r8d
  NTSTATUS Device; // eax
  void *v30; // rcx
  void *v31; // rcx
  ULONG DeviceCharacteristics; // [rsp+20h] [rbp-60h]
  ULONG DeviceCharacteristicsa; // [rsp+20h] [rbp-60h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v35; // [rsp+50h] [rbp-30h]
  PDRIVER_OBJECT DriverObjecta; // [rsp+60h] [rbp-20h]
  _DWORD v37[4]; // [rsp+68h] [rbp-18h] BYREF

  DriverObjecta = DriverObject;
  v35 = a4;
  DeviceExtension = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v7 = 0;
  DestinationString.Buffer = 0LL;
  v8 = 0;
  v10 = a2;
  v11 = 10000;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 1LL);
  }
  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  *a3 = 0LL;
  if ( !*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v12 = stru_1C000A338.Length + 30;
    DestinationString.MaximumLength = stru_1C000A338.Length + 30;
    if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) && a5 )
    {
      v12 = stru_1C000A338.Length + 44;
      DestinationString.MaximumLength = stru_1C000A338.Length + 44;
    }
    DestinationString.Buffer = (PWSTR)ExAllocatePool2(256LL, v12, 1130652235LL);
    if ( DestinationString.Buffer )
    {
      do
      {
        if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) && a5 )
          v14 = L"\\Device\\%wZLegacy%d";
        else
          v14 = L"\\Device\\%wZ%d";
        ++dword_1C000A5FC;
        v16 = RtlUnicodeStringPrintf(&DestinationString, v14, &stru_1C000A338);
        if ( v16 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v15) = 2;
            WPP_RECORDER_SF_S(
              WPP_GLOBAL_Control->DeviceExtension,
              v15,
              v17,
              74,
              DeviceCharacteristics,
              (__int64)DestinationString.Buffer);
          }
          v7 = -1073414131;
          goto LABEL_34;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v15) = 5;
          WPP_RECORDER_SF_S(
            WPP_GLOBAL_Control->DeviceExtension,
            v15,
            v17,
            75,
            DeviceCharacteristics,
            (__int64)DestinationString.Buffer);
        }
        v16 = IoCreateDevice(DriverObjecta, 0x180u, &DestinationString, 0xBu, 0, 0, a3);
      }
      while ( v16 == -1073741771 );
      if ( DestinationString.MaximumLength >= (unsigned __int64)DestinationString.Length + 2 )
      {
        v18 = (unsigned __int64)DestinationString.Length >> 1;
        v19 = 0LL;
        v8 = 0;
        DestinationString.Buffer[v18 + 1] = 0;
        Buffer = DestinationString.Buffer;
        *v35 = (__int64)DestinationString.Buffer;
        goto LABEL_19;
      }
      v16 = -1073741823;
      RtlFreeUnicodeString(&DestinationString);
      *v35 = 0LL;
      goto LABEL_53;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v13, 1LL);
    }
    v16 = -1073741823;
    v7 = -1073414143;
LABEL_34:
    v37[0] = DestinationString.MaximumLength;
    v11 = 10006;
    v8 = 1;
    RtlFreeUnicodeString(&DestinationString);
    *v35 = 0LL;
    goto LABEL_47;
  }
  ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  Device = IoCreateDevice(DriverObject, 0x180u, 0LL, 0xBu, 0, 0, a3);
  Buffer = DestinationString.Buffer;
  v19 = 0LL;
  v16 = Device;
  *v35 = 0LL;
LABEL_19:
  if ( v16 < 0 || !*a3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = 2;
      WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v19, v18, 76, DeviceCharacteristics, (__int64)Buffer);
    }
    v7 = -1073414131;
    v37[0] = DestinationString.MaximumLength;
    v11 = 10006;
    v8 = 1;
LABEL_25:
    if ( !v16 )
      goto LABEL_26;
    RtlFreeUnicodeString(&DestinationString);
    *v35 = 0LL;
    if ( !v7 )
      goto LABEL_50;
    goto LABEL_47;
  }
  (*a3)->Flags |= 4u;
  v21 = 3LL;
  DeviceExtension = (__int64)(*a3)->DeviceExtension;
  v22 = DeviceExtension;
  do
  {
    v22 += 128LL;
    v23 = *v10;
    v10 += 8;
    *(_OWORD *)(v22 - 128) = v23;
    *(_OWORD *)(v22 - 112) = *(v10 - 7);
    *(_OWORD *)(v22 - 96) = *(v10 - 6);
    *(_OWORD *)(v22 - 80) = *(v10 - 5);
    *(_OWORD *)(v22 - 64) = *(v10 - 4);
    *(_OWORD *)(v22 - 48) = *(v10 - 3);
    *(_OWORD *)(v22 - 32) = *(v10 - 2);
    *(_OWORD *)(v22 - 16) = *(v10 - 1);
    --v21;
  }
  while ( v21 );
  *(_QWORD *)DeviceExtension = *a3;
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 32), 0x4364624Bu, 0, 0, 0x20u);
  KeInitializeSpinLock((PKSPIN_LOCK)(DeviceExtension + 160));
  v24 = *(unsigned int *)(DeviceExtension + 140);
  *(_QWORD *)(DeviceExtension + 176) = DeviceExtension + 168;
  *(_QWORD *)(DeviceExtension + 168) = DeviceExtension + 168;
  *(_DWORD *)(DeviceExtension + 80) = 0;
  Pool2 = ExAllocatePool2(64LL, v24, 1130652235LL);
  *(_QWORD *)(DeviceExtension + 104) = Pool2;
  if ( Pool2 )
  {
    KbdInitializeDataQueue(DeviceExtension, v26);
    goto LABEL_25;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v26) = 2;
    WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v26, v27, 77, DeviceCharacteristicsa, *v35);
  }
  v16 = -1073741670;
  v7 = -1073414142;
  v11 = 10020;
  RtlFreeUnicodeString(&DestinationString);
  *v35 = 0LL;
LABEL_47:
  v30 = *a3;
  if ( !*a3 )
    v30 = DriverObjecta;
  KeyboardClassLogError(v30, v7, v11, v16, v8, v37, 0);
LABEL_50:
  if ( DeviceExtension )
  {
    v31 = *(void **)(DeviceExtension + 104);
    if ( v31 )
    {
      ExFreePoolWithTag(v31, 0);
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
    LOBYTE(v19) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v19, 1LL);
  }
  return (unsigned int)v16;
}
