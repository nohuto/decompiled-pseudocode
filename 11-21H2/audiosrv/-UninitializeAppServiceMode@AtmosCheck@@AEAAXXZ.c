/*
 * XREFs of ?UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ @ 0x180156B70
 * Callers:
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x180057E7C (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x180058604 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x1801569F4 (-Uninitialize@AtmosCheck@@QEAAXXZ.c)
 * Callees:
 *     ?UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x180041B68 (-UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x1801538D0 (-CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AtmosCheck::UninitializeAppServiceMode(char *pv)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(pv + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(pv + 56));
  if ( pv[218] )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)pv + 28) + 56LL))(*((_QWORD *)pv + 28), pv + 8);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA5F,
        (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)v3);
    pv[218] = 0;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  AtmosCheck::CancelLicenseRefreshTimer((AtmosCheck *)pv);
  EnterCriticalSection(v2);
  if ( !pv[696] )
    AtmosCheck::UpdateLicenseRefreshTimer((AtmosCheck *)pv);
  if ( v2 )
    LeaveCriticalSection(v2);
}
