/*
 * XREFs of ?CreateInjectionAnimation@Test@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIInjectionAnimationTest@345@@Z @ 0x180125E70
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$MakeAndInitialize2@VInjectionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInjectionAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180120EDC (--$MakeAndInitialize2@VInjectionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Deta.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Test::CreateInjectionAnimation(
        struct _RTL_CRITICAL_SECTION *this,
        struct Windows::UI::Composition::IInjectionAnimationTest **a2)
{
  struct Windows::UI::Composition::Compositor *v2; // rdi
  unsigned int v4; // ebx
  int v5; // eax
  Windows::UI::Composition::CompositionAnimation *v6; // rax
  Windows::UI::Composition::CompositionAnimation *v8; // [rsp+30h] [rbp+8h] BYREF
  struct Windows::UI::Composition::Compositor *v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = (struct Windows::UI::Composition::Compositor *)&this[-9];
  Microsoft::WRL2::ContextSession::BeginApiEntry(this - 9);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v8 = 0LL;
    v9 = v2;
    v5 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InjectionAnimation,Windows::UI::Composition::InjectionAnimation,Windows::UI::Composition::Compositor *>(
           &v8,
           &v9);
    v4 = v5;
    if ( v5 < 0 )
    {
      DoStackCaptureDirect(v5, 0x1E92u);
    }
    else
    {
      v6 = v8;
      v8 = 0LL;
      *a2 = (struct Windows::UI::Composition::IInjectionAnimationTest *)(((unsigned __int64)v6 + 344) & -(__int64)(v6 != 0LL));
      v4 = 0;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v8);
  }
  else
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v2);
  return v4;
}
