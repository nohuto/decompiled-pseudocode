/*
 * XREFs of ?ReferenceWdi@@YA_NXZ @ 0x1C013D71C
 * Callers:
 *     NdisMRegisterWdiMiniportDriver @ 0x1C013D9D0 (NdisMRegisterWdiMiniportDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006690 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Z @ 0x1C0026D48 (WPP_RECORDER_SF_Z.c)
 *     WPP_RECORDER_SF_Zd @ 0x1C00B23F4 (WPP_RECORDER_SF_Zd.c)
 *     ?Wait@?$KWaitEventBase@U?$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ @ 0x1C0110BB8 (-Wait@-$KWaitEventBase@U-$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C01171FC (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B90 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BEC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 */

char ReferenceWdi(void)
{
  bool v0; // bl
  unsigned int v1; // eax
  NTSTATUS Driver; // eax
  KLockHolder v4; // [rsp+40h] [rbp-20h] BYREF

  v0 = 0;
  v4.m_State = Unlocked;
  v4.m_Lock = (KPushLockBase *)&g_WdiLoadLock;
  v4.m_Region.m_Entered = 0;
  while ( 1 )
  {
    KLockHolder::AcquireExclusive(&v4);
    if ( g_WdiLoadState == 3 )
      goto LABEL_6;
    v1 = g_WdiRefCount + 1;
    g_WdiRefCount = v1;
    if ( v1 == 1 )
      break;
    if ( g_WdiLoadState == 2 )
      goto LABEL_19;
    g_WdiRefCount = v1 - 1;
LABEL_6:
    KLockHolder::ReleaseExclusive(&v4);
    KWaitEventBase<wistd::integral_constant<enum _EVENT_TYPE,0>>::Wait(&g_WdiLoadInProgress);
  }
  KeClearEvent(&g_WdiLoadInProgress);
  g_WdiLoadState = 1;
  KLockHolder::ReleaseExclusive(&v4);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_834e21fbe3523c7dd35af4d888c0fe37_Traceguids,
      &DriverServiceName.Length);
  Driver = ZwLoadDriver((PUNICODE_STRING)&DriverServiceName);
  if ( Driver == -1073741554 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0xBu,
        (struct _GUID *)&WPP_834e21fbe3523c7dd35af4d888c0fe37_Traceguids);
LABEL_18:
    KLockHolder::AcquireExclusive(&v4);
    g_WdiLoadState = 2;
    KeSetEvent(&g_WdiLoadInProgress, 0, 0);
    g_WdiLoadedByNdis = v0;
    KLockHolder::ReleaseExclusive(&v4);
LABEL_19:
    KLockHolder::~KLockHolder(&v4);
    return 1;
  }
  if ( Driver >= 0 )
  {
    v0 = 1;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Z(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0xDu,
        (struct _GUID *)&WPP_834e21fbe3523c7dd35af4d888c0fe37_Traceguids,
        &DriverServiceName.Length);
    goto LABEL_18;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Zd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      1u,
      0xCu,
      (struct _GUID *)&WPP_834e21fbe3523c7dd35af4d888c0fe37_Traceguids,
      &DriverServiceName.Length,
      Driver);
  KLockHolder::AcquireExclusive(&v4);
  --g_WdiRefCount;
  g_WdiLoadState = 0;
  KeSetEvent(&g_WdiLoadInProgress, 0, 0);
  KLockHolder::ReleaseExclusive(&v4);
  KLockHolder::~KLockHolder(&v4);
  return 0;
}
