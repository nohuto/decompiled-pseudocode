/*
 * XREFs of ?SetWindowBackgroundTreatment@Partner@Visual@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345@@Z @ 0x180015860
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?SetWindowBackgroundTreatment@Visual@Composition@UI@Windows@@QEAAXPEAVCompositionBrush@234@@Z @ 0x180015900 (-SetWindowBackgroundTreatment@Visual@Composition@UI@Windows@@QEAAXPEAVCompositionBrush@234@@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008282C (-InternalUnlock@-$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Partner::SetWindowBackgroundTreatment(
        Windows::UI::Composition::Visual::Partner *this,
        struct IUnknown *a2)
{
  Windows::UI::Composition::Visual *v2; // rdi
  Microsoft::WRL2::ContextSession *v4; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  struct Microsoft::WRL2::ContextRuntimeClass *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (Windows::UI::Composition::Visual::Partner *)((char *)this - 216);
  v4 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v8 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(&v8);
    v5 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           v4,
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionBrushT<Windows::UI::Composition::CompositionBrush,Windows::UI::Composition::ProxyObject>::s_InterfaceType,
           &v8);
    v6 = v5;
    if ( v5 < 0 )
    {
      DoStackCaptureDirect(v5, 0xC67u);
    }
    else
    {
      Windows::UI::Composition::Visual::SetWindowBackgroundTreatment(v2, v8);
      v6 = 0;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(&v8);
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
