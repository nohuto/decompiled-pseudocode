/*
 * XREFs of ?s_IsVisibilityOverrideOn@CImmersiveApp@@SA_NPEAV1@@Z @ 0x18002F520
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800746A0 (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall CImmersiveApp::s_IsVisibilityOverrideOn(struct CImmersiveApp *a1)
{
  struct IImmersiveApplicationInternal *v1; // rdi
  void (__fastcall *v2)(struct IImmersiveApplicationInternal *, __int64); // rbx
  __int64 AddressOf; // rax
  struct IImmersiveMonitor *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v1 = (struct CImmersiveApp *)((char *)a1 + 112);
  v2 = *(void (__fastcall **)(struct IImmersiveApplicationInternal *, __int64))(*((_QWORD *)a1 + 14) + 464LL);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v5);
  v2(v1, AddressOf);
  LOBYTE(v2) = CReportWindowVisibilityChange::IsReportingEnabled(
                 (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                 v5,
                 v1);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
  return (char)v2;
}
