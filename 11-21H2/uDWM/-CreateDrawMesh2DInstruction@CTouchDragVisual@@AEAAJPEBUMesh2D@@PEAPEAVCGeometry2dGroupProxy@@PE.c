/*
 * XREFs of ?CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PEAPEAVCMeshGeometry2dProxy@@@Z @ 0x18006A0C6
 * Callers:
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x1800E70F8 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180027DF8 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$CreateProxy@VCGeometry2dGroupProxy@@@CCompositor@@IEAAJPEAPEAVCGeometry2dGroupProxy@@@Z @ 0x180068BE8 (--$CreateProxy@VCGeometry2dGroupProxy@@@CCompositor@@IEAAJPEAPEAVCGeometry2dGroupProxy@@@Z.c)
 *     ?Create@CDrawMesh2DInstruction@@SAJPEAVCGeometry2dGroupProxy@@PEAVCBitmapSourceProxy@@PEAPEAV1@@Z @ 0x18006970A (-Create@CDrawMesh2DInstruction@@SAJPEAVCGeometry2dGroupProxy@@PEAVCBitmapSourceProxy@@PEAPEAV1@@.c)
 *     ?Update@CGeometry2dGroupProxy@@QEAAJPEBVCMeshGeometry2dProxy@@@Z @ 0x1800697EE (-Update@CGeometry2dGroupProxy@@QEAAJPEBVCMeshGeometry2dProxy@@@Z.c)
 *     ??$CreateProxy@VCMeshGeometry2dProxy@@@CCompositor@@IEAAJPEAPEAVCMeshGeometry2dProxy@@@Z @ 0x1800A8B18 (--$CreateProxy@VCMeshGeometry2dProxy@@@CCompositor@@IEAAJPEAPEAVCMeshGeometry2dProxy@@@Z.c)
 *     ?SetConstantOpacity@CMeshGeometry2dProxy@@QEAAJH@Z @ 0x1800C87F0 (-SetConstantOpacity@CMeshGeometry2dProxy@@QEAAJH@Z.c)
 *     ?Update@CMeshGeometry2dProxy@@QEAAJPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z @ 0x1800C8820 (-Update@CMeshGeometry2dProxy@@QEAAJPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z.c)
 */

__int64 __fastcall CTouchDragVisual::CreateDrawMesh2DInstruction(
        CTouchDragVisual *this,
        const struct Mesh2D *a2,
        struct CGeometry2dGroupProxy **a3,
        struct CMeshGeometry2dProxy **a4)
{
  CBaseObject *v6; // rbp
  int v9; // eax
  int v10; // ebx
  int v11; // r10d
  unsigned int v12; // eax
  int v13; // edx
  CBaseObject *v14; // rcx
  CBaseObject *v15; // rdi
  CBaseObject *v17; // [rsp+50h] [rbp-28h] BYREF

  v6 = 0LL;
  v17 = 0LL;
  v9 = CCompositor::CreateProxy<CMeshGeometry2dProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5), a4);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = v9;
    v12 = 249;
    goto LABEL_13;
  }
  v10 = CMeshGeometry2dProxy::Update(
          *a4,
          *(const struct MilPoint3F **)a2,
          *((_DWORD *)a2 + 6),
          *((const struct MilPoint2D **)a2 + 4),
          *((_DWORD *)a2 + 14),
          *((const unsigned int **)a2 + 12),
          *((_DWORD *)a2 + 30),
          *((const unsigned int **)a2 + 8),
          *((_DWORD *)a2 + 22));
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 258;
    goto LABEL_13;
  }
  v10 = CMeshGeometry2dProxy::SetConstantOpacity(*a4, v13);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 260;
    goto LABEL_13;
  }
  v10 = CCompositor::CreateProxy<CGeometry2dGroupProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5), a3);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 262;
    goto LABEL_13;
  }
  v10 = CGeometry2dGroupProxy::Update(*a3, *a4);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 263;
    goto LABEL_13;
  }
  v10 = CDrawMesh2DInstruction::Create(*a3, *(struct CBitmapSourceProxy **)(*((_QWORD *)this + 49) + 16LL), &v17);
  v11 = v10;
  if ( v10 < 0 )
  {
    v6 = v17;
    v12 = 264;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, v12);
    if ( *a4 )
    {
      CBaseObject::Release(*a4);
      *a4 = 0LL;
    }
    if ( *a3 )
    {
      CBaseObject::Release(*a3);
      *a3 = 0LL;
    }
    if ( v6 )
    {
      v14 = v6;
LABEL_21:
      CBaseObject::Release(v14);
      return (unsigned int)v10;
    }
    return (unsigned int)v10;
  }
  v15 = v17;
  CRenderDataVisual::AddInstruction(this, v17);
  if ( v15 )
  {
    v14 = v15;
    goto LABEL_21;
  }
  return (unsigned int)v10;
}
