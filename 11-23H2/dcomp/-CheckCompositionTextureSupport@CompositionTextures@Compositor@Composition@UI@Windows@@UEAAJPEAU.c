/*
 * XREFs of ?CheckCompositionTextureSupport@CompositionTextures@Compositor@Composition@UI@Windows@@UEAAJPEAUIUnknown@@PEAH@Z @ 0x1800A22A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?CheckCompositionTextureSupport@Compositor@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAH@Z @ 0x1800A2358 (-CheckCompositionTextureSupport@Compositor@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAH@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::CompositionTextures::CheckCompositionTextureSupport(
        Windows::UI::Composition::Compositor::CompositionTextures *this,
        struct IUnknown *a2,
        int *a3)
{
  Windows::UI::Composition::Compositor *v3; // rdi
  unsigned int v6; // ebx
  int v7; // ecx
  unsigned int v8; // edx
  int v9; // eax

  v3 = (Windows::UI::Composition::Compositor::CompositionTextures *)((char *)this - 1168);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1168));
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    if ( a2 )
    {
      if ( a3 )
      {
        *a3 = 0;
        v9 = Windows::UI::Composition::Compositor::CheckCompositionTextureSupport(v3, a2, a3);
        v6 = v9;
        if ( v9 >= 0 )
        {
          v6 = 0;
          goto LABEL_11;
        }
        v8 = 2247;
        v7 = v9;
      }
      else
      {
        v7 = -2147024809;
        v8 = 2239;
        v6 = -2147024809;
      }
    }
    else
    {
      v7 = -2147024809;
      v8 = 2238;
      v6 = -2147024809;
    }
    DoStackCaptureDirect(v7, v8);
    goto LABEL_11;
  }
  v6 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_11:
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v3);
  return v6;
}
