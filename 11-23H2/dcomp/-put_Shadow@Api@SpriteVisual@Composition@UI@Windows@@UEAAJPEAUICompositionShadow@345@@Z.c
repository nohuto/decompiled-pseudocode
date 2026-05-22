/*
 * XREFs of ?put_Shadow@Api@SpriteVisual@Composition@UI@Windows@@UEAAJPEAUICompositionShadow@345@@Z @ 0x18017C060
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?SetShadow@SpriteVisual@Composition@UI@Windows@@QEAAXPEAVCompositionShadow@234@@Z @ 0x18017BF18 (-SetShadow@SpriteVisual@Composition@UI@Windows@@QEAAXPEAVCompositionShadow@234@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::SpriteVisual::Api::put_Shadow(
        Windows::UI::Composition::SpriteVisual::Api *this,
        struct IUnknown *a2)
{
  Windows::UI::Composition::SpriteVisual *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  unsigned int v5; // ebx
  int v6; // eax
  Microsoft::WRL2::NestableRuntimeClass *v7; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (Windows::UI::Composition::SpriteVisual::Api *)((char *)this - 320);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 37);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v6 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           (struct Microsoft::WRL2::ContextSession *)v4,
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionShadow::s_InterfaceType,
           &v9);
    v5 = v6;
    if ( v6 < 0 )
    {
      DoStackCaptureDirect(v6, 0xDCu);
      v7 = v9;
      if ( !v9 )
        goto LABEL_8;
    }
    else
    {
      Windows::UI::Composition::SpriteVisual::SetShadow(v2, v9);
      v5 = 0;
      if ( !v9 )
        goto LABEL_8;
      v7 = v9;
    }
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v7);
    goto LABEL_8;
  }
  v5 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_8:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
