/*
 * XREFs of _lambda_23023fe66ba1e99252325d41c7c7d54a_::operator() @ 0x1805B897C
 * Callers:
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z @ 0x1805BB6D0 (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x1801BDC18 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1805BCE54 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall lambda_23023fe66ba1e99252325d41c7c7d54a_::operator()(TabletModePositioner **a1, __int64 a2)
{
  TabletModePositioner *v4; // rbx
  bool v5; // bl
  int v7; // [rsp+50h] [rbp+18h] BYREF
  void *v8; // [rsp+58h] [rbp+20h] BYREF

  if ( IsSurfaceHubWithWin32VtcEnabled() )
  {
    v7 = 0;
    v8 = 0LL;
    v4 = *a1;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
    if ( (int)TabletModePositioner::InitLayoutOperationHelper(
                v4,
                &CLSID_PPIWin32VtcLayoutOperation,
                &GUID_7f4d2785_4b93_429e_9250_0e9670706fba,
                &v8) >= 0
      && (*(int (__fastcall **)(void *, __int64, __int64, int *))(*(_QWORD *)v8 + 56LL))(v8, a2, 1LL, &v7) >= 0 )
    {
      v5 = v7 != 0;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
      return v5;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  }
  return 0;
}
