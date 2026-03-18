/*
 * XREFs of ACPIRootDeviceNotifyPepDiscoverDevice @ 0x1C0002034
 * Callers:
 *     ACPIRootInitialize @ 0x1C008F8C0 (ACPIRootInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_sqqDqss @ 0x1C0002180 (WPP_RECORDER_SF_sqqDqss.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0002434 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 */

__int64 ACPIRootDeviceNotifyPepDiscoverDevice()
{
  ULONG_PTR v0; // rbx
  int v1; // edi
  int v2; // r8d
  __int64 v3; // rcx
  void *v4; // rax
  void *v5; // rdx
  _QWORD v7[2]; // [rsp+60h] [rbp+27h] BYREF
  int v8; // [rsp+70h] [rbp+37h]
  int v9; // [rsp+74h] [rbp+3Bh]
  struct _KEVENT Event; // [rsp+78h] [rbp+3Fh] BYREF

  v0 = RootDeviceExtension;
  v9 = 0;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v7[0] = 0LL;
  v9 = 0;
  v7[1] = &Event;
  v8 = -1073741823;
  v1 = AcpiNotifyPlExtDiscoverDeviceAsync(*(_QWORD *)(v0 + 760), ACPIRootDeviceDiscoverDeviceCompletion, v7);
  if ( v1 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v1 = v8;
  }
  if ( v1 >= 0 )
  {
    if ( v7[0] )
    {
      *(_QWORD *)(v0 + 944) = v7[0];
      _InterlockedOr64((volatile signed __int64 *)(v0 + 1000), 0x4000000uLL);
    }
    v3 = *(_QWORD *)(v0 + 8);
    v4 = &unk_1C006FB8B;
    v5 = &unk_1C006FB8B;
    if ( (v3 & 0x200000000000LL) != 0 )
    {
      v4 = *(void **)(v0 + 608);
      if ( (v3 & 0x400000000000LL) != 0 )
        v5 = *(void **)(v0 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sqqDqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v5,
        v2,
        30,
        (__int64)&WPP_15e34f0648cb3b62da1476f0e646a08b_Traceguids,
        (__int64)"ACPIRootDeviceNotifyPepDiscoverDevice",
        v0,
        *(_QWORD *)(v0 + 944),
        v1,
        v0,
        (__int64)v4,
        (__int64)v5);
  }
  _InterlockedOr64((volatile signed __int64 *)(v0 + 1000), 0x2000000uLL);
  return (unsigned int)v1;
}
