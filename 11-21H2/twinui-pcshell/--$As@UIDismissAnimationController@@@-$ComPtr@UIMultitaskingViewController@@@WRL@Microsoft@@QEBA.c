/*
 * XREFs of ??$As@UIDismissAnimationController@@@?$ComPtr@UIMultitaskingViewController@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDismissAnimationController@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804A2D04
 * Callers:
 *     ?AnimateDismissView@CSnapAssistViewHost@@UEAAXPEAUISwitchItem@@@Z @ 0x1804A3940 (-AnimateDismissView@CSnapAssistViewHost@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?CurrentVirtualDesktopChanged@CSnapAssistViewHost@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z @ 0x1804A3D60 (-CurrentVirtualDesktopChanged@CSnapAssistViewHost@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1.c)
 *     ?DismissAnimationFinished@CSnapAssistViewHost@@UEAAXPEAUIUnknown@@@Z @ 0x1804A3DE0 (-DismissAnimationFinished@CSnapAssistViewHost@@UEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IMultitaskingViewController>::As<IDismissAnimationController>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a2);
  return v4(v3, &GUID_08e65fbb_4eca_43c9_8c6f_c9f5aa03ba5e, a2);
}
