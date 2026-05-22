/*
 * XREFs of ?put_ViewBox@Api@ShapeVisual@Composition@UI@Windows@@UEAAJPEAUICompositionViewBox@345@@Z @ 0x180179450
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?SetViewBox@ShapeVisual@Composition@UI@Windows@@QEAAXPEAVCompositionViewBox@234@@Z @ 0x180179348 (-SetViewBox@ShapeVisual@Composition@UI@Windows@@QEAAXPEAVCompositionViewBox@234@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ShapeVisual::Api::put_ViewBox(
        Windows::UI::Composition::ShapeVisual::Api *this,
        struct IUnknown *a2)
{
  struct Microsoft::WRL2::ContextSession **v2; // rbp
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  int v6; // eax
  Microsoft::WRL2::NestableRuntimeClass *v7; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct Microsoft::WRL2::ContextSession **)((char *)this - 352);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 41);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( ((_BYTE)v2[4] & 2) != 0 )
  {
    v6 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           v2[3],
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionViewBox::s_InterfaceType,
           &v9);
    v5 = v6;
    if ( v6 < 0 )
    {
      DoStackCaptureDirect(v6, 0xC0u);
      v7 = v9;
      if ( !v9 )
        goto LABEL_8;
    }
    else
    {
      Windows::UI::Composition::ShapeVisual::SetViewBox((Windows::UI::Composition::ShapeVisual *)v2, v9);
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
