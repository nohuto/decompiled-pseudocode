/*
 * XREFs of ?DereferenceWdi@@YAXXZ @ 0x1C013D57C
 * Callers:
 *     NdisMDeregisterWdiMiniportDriver @ 0x1C013D940 (NdisMDeregisterWdiMiniportDriver.c)
 *     NdisMRegisterWdiMiniportDriver @ 0x1C013D9B0 (NdisMRegisterWdiMiniportDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Z @ 0x1C0026ED8 (WPP_RECORDER_SF_Z.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C01171BC (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B50 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BAC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 */

void DereferenceWdi(void)
{
  bool v0; // al
  KLockHolder v1; // [rsp+30h] [rbp-28h] BYREF

  v1.m_State = Unlocked;
  v1.m_Lock = (KPushLockBase *)&g_WdiLoadLock;
  v1.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v1);
  if ( !--g_WdiRefCount )
  {
    g_WdiLoadState = 3;
    KeClearEvent(&g_WdiLoadInProgress);
    v0 = g_WdiLoadedByNdis;
    g_WdiLoadedByNdis = 0;
    if ( v0 )
    {
      KLockHolder::ReleaseExclusive(&v1);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Z(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          1u,
          0xEu,
          (struct _GUID *)&WPP_834e21fbe3523c7dd35af4d888c0fe37_Traceguids,
          &DriverServiceName.Length);
      ZwUnloadDriver((PUNICODE_STRING)&DriverServiceName);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Z(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          1u,
          0xFu,
          (struct _GUID *)&WPP_834e21fbe3523c7dd35af4d888c0fe37_Traceguids,
          &DriverServiceName.Length);
      KLockHolder::AcquireExclusive(&v1);
    }
    else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x10u,
        (struct _GUID *)&WPP_834e21fbe3523c7dd35af4d888c0fe37_Traceguids);
    }
    g_WdiLoadState = 0;
    KeSetEvent(&g_WdiLoadInProgress, 0, 0);
  }
  KLockHolder::~KLockHolder(&v1);
}
