/*
 * XREFs of ?put_Geometry@Api@CompositionSpriteShape@Composition@UI@Windows@@UEAAJPEAUICompositionGeometry@345@@Z @ 0x180087B80
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?SetGeometry@CompositionSpriteShape@Composition@UI@Windows@@QEAAXPEAVCompositionGeometry@234@@Z @ 0x180087C70 (-SetGeometry@CompositionSpriteShape@Composition@UI@Windows@@QEAAXPEAVCompositionGeometry@234@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSpriteShape::Api::put_Geometry(
        Windows::UI::Composition::CompositionSpriteShape::Api *this,
        struct IUnknown *a2)
{
  struct Microsoft::WRL2::ContextSession **v2; // rbp
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  Microsoft::WRL2::NestableRuntimeClass *v8; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct Microsoft::WRL2::ContextSession **)((char *)this - 192);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 21);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( ((_BYTE)v2[4] & 2) == 0 )
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_4;
  }
  v5 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         v2[3],
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionGeometry::s_InterfaceType,
         &v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    DoStackCaptureDirect(v5, 0x276u);
    v8 = v9;
    if ( !v9 )
      goto LABEL_4;
    goto LABEL_6;
  }
  Windows::UI::Composition::CompositionSpriteShape::SetGeometry(
    (Windows::UI::Composition::CompositionSpriteShape *)v2,
    v9);
  v6 = 0;
  if ( v9 )
  {
    v8 = v9;
LABEL_6:
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v8);
  }
LABEL_4:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v6;
}
