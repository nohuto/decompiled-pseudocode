/*
 * XREFs of ?EnsureRealization@CCompositionSurface@DirectComposition@@AEAAJXZ @ 0x180013438
 * Callers:
 *     ?GetCompositionSurfaceProxy@CCompositionSurface@DirectComposition@@UEAAJPEAPEAUIUnknown@@@Z @ 0x180013400 (-GetCompositionSurfaceProxy@CCompositionSurface@DirectComposition@@UEAAJPEAPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Create@CTexturedRectanglePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@2@PEBU5@W4DCOMPOSITION_EDGE_FLAGS@@34_NPEAPEAV12@@Z @ 0x180013578 (-Create@CTexturedRectanglePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_.c)
 *     ?LinkPrimitive@CPrimitiveGroup@DirectComposition@@UEAAJPEAUIDCompositionPrimitivePartner@@H@Z @ 0x18003BAC0 (-LinkPrimitive@CPrimitiveGroup@DirectComposition@@UEAAJPEAUIDCompositionPrimitivePartner@@H@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ReleaseInterface@VCPrimitiveGroup@DirectComposition@@@@YAXAEAPEAVCPrimitiveGroup@DirectComposition@@@Z @ 0x1800EAA80 (--$ReleaseInterface@VCPrimitiveGroup@DirectComposition@@@@YAXAEAPEAVCPrimitiveGroup@DirectCompos.c)
 *     ??$ReleaseInterface@VCTexturedRectanglePrimitive@DirectComposition@@@@YAXAEAPEAVCTexturedRectanglePrimitive@DirectComposition@@@Z @ 0x1800EAAD4 (--$ReleaseInterface@VCTexturedRectanglePrimitive@DirectComposition@@@@YAXAEAPEAVCTexturedRectang.c)
 */

__int64 __fastcall DirectComposition::CCompositionSurface::EnsureRealization(
        DirectComposition::CCompositionSurface *this)
{
  int v1; // esi
  DirectComposition::CPrimitiveGroup **v2; // rdi
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  _DWORD v9[4]; // [rsp+60h] [rbp-38h] BYREF
  __int128 v10; // [rsp+70h] [rbp-28h] BYREF
  int v11; // [rsp+80h] [rbp-18h]
  int v12; // [rsp+84h] [rbp-14h]

  v1 = 0;
  v2 = (DirectComposition::CPrimitiveGroup **)((char *)this + 64);
  if ( !*((_QWORD *)this + 8) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 24LL;
    v1 = (*(__int64 (__fastcall **)(__int64, DirectComposition::CPrimitiveGroup **))(*(_QWORD *)v4 + 96LL))(v4, v2);
    if ( v1 < 0 )
      goto LABEL_6;
    v5 = *((_QWORD *)this + 5);
    v9[0] = 0;
    v6 = *(_QWORD *)(v5 + 44);
    v9[1] = 0;
    v11 = 0;
    v12 = 0;
    v10 = _xmm;
    *(float *)&v9[2] = (float)(int)v6;
    v7 = *(_QWORD *)(*((_QWORD *)this + 4) + 24LL);
    *(float *)&v9[3] = (float)SHIDWORD(v6);
    v1 = DirectComposition::CTexturedRectanglePrimitive::Create(v7, v9, &v10);
    if ( v1 < 0 )
    {
LABEL_6:
      ReleaseInterface<DirectComposition::CTexturedRectanglePrimitive>((char *)this + 72);
      ReleaseInterface<DirectComposition::CPrimitiveGroup>(v2);
    }
    else
    {
      DirectComposition::CPrimitiveGroup::LinkPrimitive(*v2, *((struct IDCompositionPrimitivePartner **)this + 9), 1);
    }
  }
  return (unsigned int)v1;
}
