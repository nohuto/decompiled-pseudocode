/*
 * XREFs of ?put_Geometry@Api@CompositionGeometricClip@Composition@UI@Windows@@UEAAJPEAUICompositionGeometry@345@@Z @ 0x1801725B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?SetGeometry@CompositionGeometricClip@Composition@UI@Windows@@QEAAXPEAVCompositionGeometry@234@@Z @ 0x180087C14 (-SetGeometry@CompositionGeometricClip@Composition@UI@Windows@@QEAAXPEAVCompositionGeometry@234@@.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionGeometricClip::Api::put_Geometry(
        Windows::UI::Composition::CompositionGeometricClip::Api *this,
        struct IUnknown *a2)
{
  struct Microsoft::WRL2::ContextSession **v2; // rbp
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  int v6; // eax
  Microsoft::WRL2::NestableRuntimeClass *v7; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct Microsoft::WRL2::ContextSession **)((char *)this - 168);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 18);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( ((_BYTE)v2[4] & 2) != 0 )
  {
    v6 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           v2[3],
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionGeometry::s_InterfaceType,
           &v9);
    v5 = v6;
    if ( v6 < 0 )
    {
      DoStackCaptureDirect(v6, 0x8Au);
      v7 = v9;
      if ( !v9 )
        goto LABEL_8;
    }
    else
    {
      Windows::UI::Composition::CompositionGeometricClip::SetGeometry(
        (Windows::UI::Composition::CompositionGeometricClip *)v2,
        v9);
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
