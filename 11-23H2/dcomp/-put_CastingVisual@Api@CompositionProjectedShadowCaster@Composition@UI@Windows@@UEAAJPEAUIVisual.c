/*
 * XREFs of ?put_CastingVisual@Api@CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z @ 0x18000D430
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?SetCastingVisual@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z @ 0x18000D650 (-SetCastingVisual@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAAJPEAVVisual@234@@.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadowCaster::Api::put_CastingVisual(
        Windows::UI::Composition::CompositionProjectedShadowCaster::Api *this,
        struct IUnknown *a2)
{
  Windows::UI::Composition::CompositionProjectedShadowCaster *v2; // rdi
  Microsoft::WRL2::ContextSession *v4; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  unsigned int v8; // edx
  struct Microsoft::WRL2::ContextRuntimeClass *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (Windows::UI::Composition::CompositionProjectedShadowCaster::Api *)((char *)this - 136);
  v4 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) == 0 )
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_6;
  }
  v9 = 0LL;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(&v9);
  v5 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         v4,
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Visual::s_InterfaceType,
         &v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    v8 = 403;
    goto LABEL_10;
  }
  v5 = Windows::UI::Composition::CompositionProjectedShadowCaster::SetCastingVisual(v2, v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    v8 = 405;
LABEL_10:
    DoStackCaptureDirect(v5, v8);
    goto LABEL_5;
  }
  v6 = 0;
LABEL_5:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(&v9);
LABEL_6:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v6;
}
