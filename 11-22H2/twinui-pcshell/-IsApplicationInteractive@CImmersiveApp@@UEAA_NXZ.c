/*
 * XREFs of ?IsApplicationInteractive@CImmersiveApp@@UEAA_NXZ @ 0x1800204C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180020560 (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall CImmersiveApp::IsApplicationInteractive(unsigned __int64 this)
{
  bool IsReportingEnabled; // di
  void (__fastcall *v3)(unsigned __int64, __int64); // rbx
  __int64 AddressOf; // rax
  struct IImmersiveMonitor *v6; // [rsp+30h] [rbp+8h] BYREF

  IsReportingEnabled = 0;
  v6 = 0LL;
  v3 = *(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)this + 464LL);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v6);
  v3(this, AddressOf);
  if ( (*(_BYTE *)(this + 464) & 4) != 0 )
    IsReportingEnabled = CReportWindowVisibilityChange::IsReportingEnabled(
                           (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                           v6,
                           (struct IImmersiveApplicationInternal *)(this & -(__int64)(this != 112)));
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
  return IsReportingEnabled;
}
