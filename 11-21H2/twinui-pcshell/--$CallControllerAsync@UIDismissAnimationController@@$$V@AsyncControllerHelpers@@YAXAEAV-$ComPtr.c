/*
 * XREFs of ??$CallControllerAsync@UIDismissAnimationController@@$$V@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UIDismissAnimationController@@@WRL@Microsoft@@P8IDismissAnimationController@@EAAXXZ@Z @ 0x1804A2DBC
 * Callers:
 *     ?AnimateDismissView@CSnapAssistViewHost@@UEAAXPEAUISwitchItem@@@Z @ 0x1804A3940 (-AnimateDismissView@CSnapAssistViewHost@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?CurrentVirtualDesktopChanged@CSnapAssistViewHost@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z @ 0x1804A3D60 (-CurrentVirtualDesktopChanged@CSnapAssistViewHost@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1.c)
 *     ?DismissAnimationFinished@CSnapAssistViewHost@@UEAAXPEAUIUnknown@@@Z @ 0x1804A3DE0 (-DismissAnimationFinished@CSnapAssistViewHost@@UEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$QueueTask@V_lambda_aa91cdbb300619209848d1d014bee82b_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_aa91cdbb300619209848d1d014bee82b_@@@Z @ 0x1804A2EC4 (--$QueueTask@V_lambda_aa91cdbb300619209848d1d014bee82b_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 *     ?GetControllerApartment@AsyncControllerHelpers@@YA?AW4TaskApartment@Internal@Windows@@PEAUIUnknown@@@Z @ 0x1804A3180 (-GetControllerApartment@AsyncControllerHelpers@@YA-AW4TaskApartment@Internal@Windows@@PEAUIUnkno.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AsyncControllerHelpers::CallControllerAsync<IDismissAnimationController,>(__int64 *a1)
{
  unsigned int ControllerApartment; // edi
  __int64 v3; // rcx
  __int64 (__fastcall *v4)(__int64); // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h] BYREF

  if ( *a1 )
  {
    ControllerApartment = AsyncControllerHelpers::GetControllerApartment();
    v4 =  IDismissAnimationController::`vcall'{24,{flat}};
    v3 = *a1;
    v5 = v3;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    Windows::Internal::ComTaskPool::QueueTask<_lambda_aa91cdbb300619209848d1d014bee82b_>(ControllerApartment, &v4);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
  }
}
