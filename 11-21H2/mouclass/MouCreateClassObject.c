/*
 * XREFs of MouCreateClassObject @ 0x1C000CA40
 * Callers:
 *     MouseClassFindMorePorts @ 0x1C000C3B0 (MouseClassFindMorePorts.c)
 *     MouseAddDevice @ 0x1C000C590 (MouseAddDevice.c)
 *     DriverEntry @ 0x1C000F2D0 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C00026A0 (WPP_RECORDER_SF_S.c)
 *     MouInitializeDataQueue @ 0x1C0002830 (MouInitializeDataQueue.c)
 *     RtlUnicodeStringPrintf @ 0x1C00028E0 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C0002D60 (__security_check_cookie.c)
 *     MouseClassLogError @ 0x1C0004D88 (MouseClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C00059CC (WPP_RECORDER_SF_.c)
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
  NTSTATUS v14; // esi
  __int64 v15; // rdx
  const wchar_t *Buffer; // rcx
  __int64 v17; // rcx
  _OWORD *v18; // rax
  __int128 v19; // xmm0
  __int64 v20; // rdx
  __int64 Pool2; // rax
  __int64 v22; // rdx
  NTSTATUS Device; // eax
  void *v25; // rcx
  void *v26; // rcx
  ULONG DeviceCharacteristics; // [rsp+20h] [rbp-60h]
  ULONG DeviceCharacteristicsa; // [rsp+20h] [rbp-60h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  PWSTR *v30; // [rsp+50h] [rbp-30h]
  PDRIVER_OBJECT DriverObjecta; // [rsp+60h] [rbp-20h]
  int v32[4]; // [rsp+68h] [rbp-18h] BYREF

  DriverObjecta = DriverObject;
  v30 = a4;
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
    v12 = stru_1C0009310.Length + 30;
    DestinationString.MaximumLength = stru_1C0009310.Length + 30;
    if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) && a5 )
    {
      v12 = stru_1C0009310.Length + 44;
      DestinationString.MaximumLength = stru_1C0009310.Length + 44;
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
        ++dword_1C00095D8;
        v14 = RtlUnicodeStringPrintf(&DestinationString, v13, &stru_1C0009310);
        if ( v14 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_S(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              2u,
              0x46u,
              DeviceCharacteristics,
              DestinationString.Buffer);
          v7 = -1073414131;
          goto LABEL_34;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_S(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x47u,
            DeviceCharacteristics,
            DestinationString.Buffer);
        v14 = IoCreateDevice(DriverObjecta, 0x160u, &DestinationString, 0xFu, 0, 0, a3);
      }
      while ( v14 == -1073741771 );
      if ( DestinationString.MaximumLength >= (unsigned __int64)DestinationString.Length + 2 )
      {
        v15 = 0LL;
        v7 = 0;
        DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) + 1] = 0;
        Buffer = DestinationString.Buffer;
        *v30 = DestinationString.Buffer;
        goto LABEL_19;
      }
      v14 = -1073741823;
      RtlFreeUnicodeString(&DestinationString);
      *v30 = 0LL;
      goto LABEL_53;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 2LL, 2LL);
    v14 = -1073741823;
    v7 = -1073414143;
LABEL_34:
    v32[0] = DestinationString.MaximumLength;
    v11 = 20006;
    v8 = 1;
    RtlFreeUnicodeString(&DestinationString);
    *v30 = 0LL;
    goto LABEL_47;
  }
  ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  Device = IoCreateDevice(DriverObject, 0x160u, 0LL, 0xFu, 0, 0, a3);
  Buffer = DestinationString.Buffer;
  v15 = 0LL;
  v14 = Device;
  *v30 = 0LL;
LABEL_19:
  if ( v14 < 0 || !*a3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, 2u, 0x48u, DeviceCharacteristics, Buffer);
    v7 = -1073414131;
    v32[0] = DestinationString.MaximumLength;
    v11 = 20006;
    v8 = 1;
LABEL_25:
    if ( !v14 )
      goto LABEL_26;
    RtlFreeUnicodeString(&DestinationString);
    *v30 = 0LL;
    if ( !v7 )
      goto LABEL_50;
    goto LABEL_47;
  }
  (*a3)->Flags |= 4u;
  v17 = 2LL;
  DeviceExtension = (__int64)(*a3)->DeviceExtension;
  v18 = (_OWORD *)DeviceExtension;
  do
  {
    v18 += 8;
    v19 = *v10;
    v10 += 8;
    *(v18 - 8) = v19;
    *(v18 - 7) = *(v10 - 7);
    *(v18 - 6) = *(v10 - 6);
    *(v18 - 5) = *(v10 - 5);
    *(v18 - 4) = *(v10 - 4);
    *(v18 - 3) = *(v10 - 3);
    *(v18 - 2) = *(v10 - 2);
    *(v18 - 1) = *(v10 - 1);
    --v17;
  }
  while ( v17 );
  *v18 = *v10;
  v18[1] = v10[1];
  v18[2] = v10[2];
  v18[3] = v10[3];
  v18[4] = v10[4];
  v18[5] = v10[5];
  *(_QWORD *)DeviceExtension = *a3;
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 32), 0x43756F4Du, 0, 0, 0x20u);
  KeInitializeSpinLock((PKSPIN_LOCK)(DeviceExtension + 144));
  v20 = *(unsigned int *)(DeviceExtension + 136);
  *(_QWORD *)(DeviceExtension + 160) = DeviceExtension + 152;
  *(_QWORD *)(DeviceExtension + 152) = DeviceExtension + 152;
  *(_DWORD *)(DeviceExtension + 80) = 0;
  Pool2 = ExAllocatePool2(64LL, v20, 1131769677LL);
  *(_QWORD *)(DeviceExtension + 104) = Pool2;
  if ( Pool2 )
  {
    MouInitializeDataQueue(DeviceExtension, v22);
    goto LABEL_25;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_S(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      2u,
      0x49u,
      DeviceCharacteristicsa,
      DestinationString.Buffer);
  v14 = -1073741670;
  v7 = -1073414142;
  v11 = 20020;
  RtlFreeUnicodeString(&DestinationString);
  *v30 = 0LL;
LABEL_47:
  v25 = *a3;
  if ( !*a3 )
    v25 = DriverObjecta;
  MouseClassLogError(v25, v7, v11, v14, v8, v32, 0);
LABEL_50:
  if ( DeviceExtension )
  {
    v26 = *(void **)(DeviceExtension + 104);
    if ( v26 )
    {
      ExFreePoolWithTag(v26, 0);
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
    LOBYTE(v15) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v15, 2LL);
  }
  return (unsigned int)v14;
}
