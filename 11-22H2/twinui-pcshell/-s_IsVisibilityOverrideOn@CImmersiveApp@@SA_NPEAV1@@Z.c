/*
 * XREFs of ?s_IsVisibilityOverrideOn@CImmersiveApp@@SA_NPEAV1@@Z @ 0x180020430
 * Callers:
 *     <none>
 * Callees:
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180020560 (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall CImmersiveApp::s_IsVisibilityOverrideOn(struct CImmersiveApp *a1)
{
  unsigned __int64 v2; // rdi
  void (__fastcall *v3)(unsigned __int64, __int64); // rbx
  __int64 AddressOf; // rax
  struct IImmersiveMonitor *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = (unsigned __int64)a1 + 112;
  v3 = *(void (__fastcall **)(unsigned __int64, __int64))(*((_QWORD *)a1 + 14) + 464LL);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v6);
  v3(v2, AddressOf);
  LOBYTE(v3) = CReportWindowVisibilityChange::IsReportingEnabled(
                 (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                 v6,
                 (struct IImmersiveApplicationInternal *)(v2 & -(__int64)(a1 != 0LL)));
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
  return (char)v3;
}
