/*
 * XREFs of ?StartInjectionAnimation@Test@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJPEAUIInjectionAnimationTest@456@@Z @ 0x18011E2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?StartInjectionAnimation@CompositionManipulation@Composition@UI@Windows@@QEAAJPEAVInjectionAnimation@234@@Z @ 0x180161704 (-StartInjectionAnimation@CompositionManipulation@Composition@UI@Windows@@QEAAJPEAVInjectionAnima.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::Test::StartInjectionAnimation(
        Windows::UI::Composition::Interactions::VisualInteractionSource::Test *this,
        struct IUnknown *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned int v5; // ebx
  int started; // eax
  unsigned int v7; // edx
  struct Microsoft::WRL2::ContextRuntimeClass *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 20);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 152) & 2) != 0 )
  {
    v9 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v9);
    started = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                (struct Microsoft::WRL2::ContextSession *)v2,
                a2,
                (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::InjectionAnimation::s_InterfaceType,
                &v9);
    v5 = started;
    if ( started < 0 )
    {
      v7 = 1710;
    }
    else
    {
      started = Windows::UI::Composition::CompositionManipulation::StartInjectionAnimation(
                  *((Windows::UI::Composition::CompositionManipulation **)this + 8),
                  v9);
      v5 = started;
      if ( started >= 0 )
      {
        v5 = 0;
LABEL_9:
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v9);
        goto LABEL_10;
      }
      v7 = 1714;
    }
    DoStackCaptureDirect(started, v7);
    goto LABEL_9;
  }
  v5 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_10:
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
