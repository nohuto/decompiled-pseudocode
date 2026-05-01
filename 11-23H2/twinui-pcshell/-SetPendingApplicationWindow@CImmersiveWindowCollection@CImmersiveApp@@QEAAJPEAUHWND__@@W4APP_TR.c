/*
 * XREFs of ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x1803C454C
 * Callers:
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x1803C3EB0 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 * Callees:
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180020F10 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x180021218 (-_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800227B4 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_1800227B4.c)
 *     ??4?$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAAAEAV012@PEAUITaskWindow@@@Z @ 0x1800258FC (--4-$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAAAEAV012@PEAUITaskWindow@@@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180132FE0 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1SetPendingApplicationWindow@CImmersiveAppTelemetry@@QEAA@XZ @ 0x1803BF344 (--1SetPendingApplicationWindow@CImmersiveAppTelemetry@@QEAA@XZ.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x1803C40E0 (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     ?StartActivity@SetPendingApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x1803C4ACC (-StartActivity@SetPendingApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x1803C5484 (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     WPP_SF_q @ 0x1803C64DC (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::SetPendingApplicationWindow(__int64 a1, HWND a2, int a3)
{
  __int64 v6; // rbx
  unsigned int v7; // esi
  HWND v8; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v13; // [rsp+20h] [rbp-178h] BYREF
  _QWORD v14[40]; // [rsp+30h] [rbp-168h] BYREF

  v6 = *(_QWORD *)(a1 + 160);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v14,
    (__int64)"SetPendingApplicationWindow");
  v14[0] = &CImmersiveAppTelemetry::SetPendingApplicationWindow::`vftable';
  CImmersiveAppTelemetry::SetPendingApplicationWindow::StartActivity(
    (CImmersiveAppTelemetry::SetPendingApplicationWindow *)v14,
    *(const unsigned __int16 **)(v6 + 584));
  v7 = 0;
  v8 = *(HWND *)(a1 + 136);
  if ( a2 != v8 )
  {
    if ( v8 )
      CImmersiveApp::CImmersiveWindowCollection::_CleanupPendingPresentedWindow((CImmersiveApp::CImmersiveWindowCollection *)a1);
    CImmersiveApp::CImmersiveWindowCollection::_FindWindow((CImmersiveApp::CImmersiveWindowCollection *)a1, a2, &v13);
    if ( *(_BYTE *)(a1 + 200) )
    {
      *(_DWORD *)(a1 + 144) = a3;
      v9 = v13;
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v13);
      *(_QWORD *)(a1 + 136) = a2;
      Microsoft::WRL::ComPtr<ITaskWindow>::operator=((__int64 *)(a1 + 128), v10);
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v9);
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v11 + 208LL))(v11, 0LL, 2LL);
      CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility((CImmersiveApp::CImmersiveWindowCollection *)a1);
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          26LL,
          &WPP_21483cb93caf3869011edf58ac3ef240_Traceguids,
          *(_QWORD *)(a1 + 136));
    }
    else
    {
      v7 = CImmersiveApp::CImmersiveWindowCollection::SetApplicationWindow(
             (CImmersiveApp::CImmersiveWindowCollection *)a1,
             a2);
    }
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v14, v7);
  CImmersiveAppTelemetry::SetPendingApplicationWindow::~SetPendingApplicationWindow((CImmersiveAppTelemetry::SetPendingApplicationWindow *)v14);
  return v7;
}
