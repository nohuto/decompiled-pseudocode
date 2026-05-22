/*
 * XREFs of ?put_SystemBackdrop@SystemOnly@CompositionTarget@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345@@Z @ 0x180197390
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008282C (-InternalUnlock@-$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionTarget::SystemOnly::put_SystemBackdrop(
        Windows::UI::Composition::CompositionTarget::SystemOnly *this,
        struct IUnknown *a2)
{
  char *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v5; // rdx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  struct Microsoft::WRL2::ContextRuntimeClass *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this - 160;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 17);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v2[32] & 2) != 0 )
  {
    v10 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(
      (volatile signed __int32 **)&v10,
      v5);
    v7 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           (struct Microsoft::WRL2::ContextSession *)v4,
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionBrushT<Windows::UI::Composition::CompositionBrush,Windows::UI::Composition::ProxyObject>::s_InterfaceType,
           &v10);
    v6 = v7;
    if ( v7 < 0 || (v7 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 288LL))(v2), v6 = v7, v7 < 0) )
      DoStackCaptureDirect(v7, 0x11Du);
    else
      v6 = 0;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(
      (volatile signed __int32 **)&v10,
      v8);
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v6;
}
