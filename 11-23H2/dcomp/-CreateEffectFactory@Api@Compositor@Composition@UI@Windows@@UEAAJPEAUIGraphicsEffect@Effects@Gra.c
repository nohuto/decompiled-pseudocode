/*
 * XREFs of ?CreateEffectFactory@Api@Compositor@Composition@UI@Windows@@UEAAJPEAUIGraphicsEffect@Effects@Graphics@5@PEAPEAUICompositionEffectFactory@345@@Z @ 0x180019B90
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?CreateEffectFactory@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUIGraphicsEffect@Effects@Graphics@4@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@PEAPEAVCompositionEffectFactory@234@@Z @ 0x180019C84 (-CreateEffectFactory@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUIGraphicsEffect@Effects@G.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::Api::CreateEffectFactory(
        Windows::UI::Composition::Compositor::Api *this,
        struct Windows::Graphics::Effects::IGraphicsEffect *a2,
        struct Windows::UI::Composition::ICompositionEffectFactory **a3)
{
  Microsoft::WRL2::ContextSession *v3; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v9; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v3 = (Windows::UI::Composition::Compositor::Api *)((char *)this - 1080);
  Microsoft::WRL2::ContextSession::BeginApiEntry((Windows::UI::Composition::Compositor::Api *)((char *)this - 1080));
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    if ( a2 )
    {
      v9 = 0LL;
      v6 = Windows::UI::Composition::CompositorCommon::CreateEffectFactory(v3, a2, 0LL, &v9);
      v7 = v6;
      if ( v6 < 0 )
      {
        DoStackCaptureDirect(v6, 0x35Eu);
        if ( v9 )
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
      }
      else
      {
        *a3 = (struct Windows::UI::Composition::ICompositionEffectFactory *)(((unsigned __int64)v9 + 136) & -(__int64)(v9 != 0LL));
        v7 = 0;
      }
    }
    else
    {
      v7 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0x35Bu);
    }
  }
  else
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v7;
}
