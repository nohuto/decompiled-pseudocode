/*
 * XREFs of ?put_Effect@Api@LayerVisual@Composition@UI@Windows@@UEAAJPEAUICompositionEffectBrush@345@@Z @ 0x180093D60
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?SetEffect@LayerVisual@Composition@UI@Windows@@QEAAJPEAVCompositionEffectBrush@234@@Z @ 0x180086560 (-SetEffect@LayerVisual@Composition@UI@Windows@@QEAAJPEAVCompositionEffectBrush@234@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::LayerVisual::Api::put_Effect(
        Windows::UI::Composition::LayerVisual::Api *this,
        struct IUnknown *a2)
{
  Windows::UI::Composition::LayerVisual *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  Microsoft::WRL2::NestableRuntimeClass *v9; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = (Windows::UI::Composition::LayerVisual::Api *)((char *)this - 312);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 36);
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
  v5 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         (struct Microsoft::WRL2::ContextSession *)v4,
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionEffectBrushT<Windows::UI::Composition::CompositionEffectBrush,Windows::UI::Composition::CompositionBrush>::s_InterfaceType,
         &v10);
  v6 = v5;
  if ( v5 < 0 )
  {
    DoStackCaptureDirect(v5, 0xDEu);
    v9 = v10;
    if ( !v10 )
      goto LABEL_6;
    goto LABEL_8;
  }
  v7 = Windows::UI::Composition::LayerVisual::SetEffect(v2, v10);
  v6 = v7;
  if ( v7 < 0 )
    DoStackCaptureDirect(v7, 0xE0u);
  else
    v6 = 0;
  if ( v10 )
  {
    v9 = v10;
LABEL_8:
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
  }
LABEL_6:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v6;
}
