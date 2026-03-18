/*
 * XREFs of DxgkReleaseAdapterStopResetSync @ 0x1C02C53D8
 * Callers:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z @ 0x1C005F2C8 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C005F440 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C0388570 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C0388704 (DpiEnableMsBddFallbackDriver.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DxgkReleaseAdapterStopResetSync(__int64 a1, int a2)
{
  __int64 v3; // rcx

  if ( a1 )
  {
    v3 = a1 + 136;
    if ( a2 )
    {
      *(_QWORD *)(v3 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v3, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v3, 0LL);
    }
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, 333LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"No hAdapter specified", 333LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
}
