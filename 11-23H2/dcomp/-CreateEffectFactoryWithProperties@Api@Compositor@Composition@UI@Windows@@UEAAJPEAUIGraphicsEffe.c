/*
 * XREFs of ?CreateEffectFactoryWithProperties@Api@Compositor@Composition@UI@Windows@@UEAAJPEAUIGraphicsEffect@Effects@Graphics@5@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@5@PEAPEAUICompositionEffectFactory@345@@Z @ 0x180019700
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?CreateEffectFactory@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUIGraphicsEffect@Effects@Graphics@4@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@PEAPEAVCompositionEffectFactory@234@@Z @ 0x180019C84 (-CreateEffectFactory@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUIGraphicsEffect@Effects@G.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::Api::CreateEffectFactoryWithProperties(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  Microsoft::WRL2::ContextSession *v4; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v11; // [rsp+30h] [rbp+8h] BYREF

  *a4 = 0LL;
  v4 = (Microsoft::WRL2::ContextSession *)(a1 - 1080);
  Microsoft::WRL2::ContextSession::BeginApiEntry((Microsoft::WRL2::ContextSession *)(a1 - 1080));
  if ( (*((_BYTE *)v4 + 32) & 2) != 0 )
  {
    if ( a2 )
    {
      v11 = 0LL;
      v8 = Windows::UI::Composition::CompositorCommon::CreateEffectFactory(v4, a2, a3, &v11);
      v9 = v8;
      if ( v8 < 0 )
      {
        DoStackCaptureDirect(v8, 0x37Fu);
        if ( v11 )
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v11);
      }
      else
      {
        *a4 = ((unsigned __int64)v11 + 136) & -(__int64)(v11 != 0LL);
        v9 = 0;
      }
    }
    else
    {
      v9 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0x379u);
    }
  }
  else
  {
    v9 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v9;
}
