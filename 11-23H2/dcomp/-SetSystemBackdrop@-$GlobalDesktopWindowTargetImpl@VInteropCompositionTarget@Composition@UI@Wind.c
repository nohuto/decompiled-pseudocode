/*
 * XREFs of ?SetSystemBackdrop@?$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@MEAAJPEAUICompositionBrush@345@@Z @ 0x1800157E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetSystemBackdrop@SystemBackdropHelper@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234@@Z @ 0x18001597C (-SetSystemBackdrop@SystemBackdropHelper@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234@@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008282C (-InternalUnlock@-$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Desktop::GlobalDesktopWindowTargetImpl<Windows::UI::Composition::InteropCompositionTarget>::SetSystemBackdrop(
        __int64 a1,
        struct IUnknown *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  const char *v6; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Microsoft::WRL2::ContextRuntimeClass *v8; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 240) )
  {
    v3 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           *(struct Microsoft::WRL2::ContextSession **)(a1 + 24),
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionBrushT<Windows::UI::Composition::CompositionBrush,Windows::UI::Composition::ProxyObject>::s_InterfaceType,
           &v8);
    v4 = v3;
    if ( v3 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF4,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtdesktopwindowtargetg.cpp",
        (const char *)(unsigned int)v3);
    else
      v4 = Windows::UI::Composition::SystemBackdropHelper::SetSystemBackdrop(
             *(Windows::UI::Composition::SystemBackdropHelper **)(a1 + 240),
             v8);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(&v8);
  }
  else
  {
    v4 = -2147418113;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0xEE,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtdesktopwindowtargetg.cpp",
      (const char *)0x8000FFFFLL,
      (int)"Cannot set a SystemBackdrop without first setting the Root!",
      v6);
  }
  return v4;
}
