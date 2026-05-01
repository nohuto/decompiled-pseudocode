/*
 * XREFs of ?GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAUHWND__@@@Z @ 0x1800216F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@QEAA@XZ @ 0x180021860 (--1GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x18002188C (-StartActivity@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x180021CA8 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ?_ValidateApplicationState@CImmersiveApp@@AEBAJW4ValidateApplicationStateOption@1@@Z @ 0x180021D5C (-_ValidateApplicationState@CImmersiveApp@@AEBAJW4ValidateApplicationStateOption@1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007206C (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_18007206C.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x180074724 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800C6E68 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180126700 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetApplicationWindowForActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAPEAUHWND__@@XZ @ 0x1803044E4 (-GetApplicationWindowForActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAPEAUHWND__@@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveApp::GetWindowAndPrepareForActivation(__int64 a1, char a2, _QWORD *a3)
{
  int v6; // ebx
  bool IsApplicationWindowGhost; // al
  CImmersiveApp::CImmersiveWindowCollection *v8; // rcx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, _QWORD *); // rbx
  _QWORD v12[2]; // [rsp+20h] [rbp-178h] BYREF
  _QWORD v13[40]; // [rsp+30h] [rbp-168h] BYREF

  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    v13,
    "GetWindowAndPrepareForActivation");
  v13[0] = &CImmersiveAppTelemetry::GetWindowAndPrepareForActivation::`vftable';
  CImmersiveAppTelemetry::GetWindowAndPrepareForActivation::StartActivity(
    (CImmersiveAppTelemetry::GetWindowAndPrepareForActivation *)v13,
    *(const unsigned __int16 **)(a1 + 472));
  *a3 = 0LL;
  v6 = CImmersiveApp::_ValidateApplicationState(a1 - 112, 0LL);
  if ( v6 >= 0 )
  {
    if ( (a2 & 1) == 0 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 440LL))(a1) )
    {
      v6 = -2147023598;
    }
    else
    {
      IsApplicationWindowGhost = CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176));
      v8 = (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176);
      if ( IsApplicationWindowGhost )
      {
        *a3 = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow(v8);
      }
      else
      {
        if ( !CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindowForActivation(v8) )
        {
          v6 = -2147024891;
          goto LABEL_9;
        }
        CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(a1 + 176);
      }
      v12[0] = 0LL;
      v9 = *(_QWORD *)(a1 + 328);
      v10 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v9 + 136LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v12);
      v6 = v10(v9, v12);
      if ( v6 >= 0 )
        v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v12[0] + 24LL))(v12[0], a3);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v12);
    }
  }
LABEL_9:
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v13, (unsigned int)v6);
  CImmersiveAppTelemetry::GetWindowAndPrepareForActivation::~GetWindowAndPrepareForActivation((CImmersiveAppTelemetry::GetWindowAndPrepareForActivation *)v13);
  return (unsigned int)v6;
}
