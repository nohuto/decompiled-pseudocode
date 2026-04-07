/*
 * XREFs of ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x1800E2904
 * Callers:
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x1800E2BB4 (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
 *     ?UpdateTransition@CTetherVisual@@MEAAJXZ @ 0x1800E2C20 (-UpdateTransition@CTetherVisual@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002730C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180027DF8 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$CreateProxy@VCGeometry2dGroupProxy@@@CCompositor@@IEAAJPEAPEAVCGeometry2dGroupProxy@@@Z @ 0x180068BE8 (--$CreateProxy@VCGeometry2dGroupProxy@@@CCompositor@@IEAAJPEAPEAVCGeometry2dGroupProxy@@@Z.c)
 *     ?Create@CDrawMesh2DInstruction@@SAJPEAVCGeometry2dGroupProxy@@PEAVCBitmapSourceProxy@@PEAPEAV1@@Z @ 0x18006970A (-Create@CDrawMesh2DInstruction@@SAJPEAVCGeometry2dGroupProxy@@PEAVCBitmapSourceProxy@@PEAPEAV1@@.c)
 *     ?Update@CGeometry2dGroupProxy@@QEAAJPEBVCMeshGeometry2dProxy@@@Z @ 0x1800697EE (-Update@CGeometry2dGroupProxy@@QEAAJPEBVCMeshGeometry2dProxy@@@Z.c)
 *     ??0Mesh2D@@QEAA@PEBUtagRECT@@@Z @ 0x180069D36 (--0Mesh2D@@QEAA@PEBUtagRECT@@@Z.c)
 *     ??$CreateProxy@VCMeshGeometry2dProxy@@@CCompositor@@IEAAJPEAPEAVCMeshGeometry2dProxy@@@Z @ 0x1800A8B18 (--$CreateProxy@VCMeshGeometry2dProxy@@@CCompositor@@IEAAJPEAPEAVCMeshGeometry2dProxy@@@Z.c)
 *     ?SetConstantOpacity@CMeshGeometry2dProxy@@QEAAJH@Z @ 0x1800C87F0 (-SetConstantOpacity@CMeshGeometry2dProxy@@QEAAJH@Z.c)
 *     ?Update@CMeshGeometry2dProxy@@QEAAJPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z @ 0x1800C8820 (-Update@CMeshGeometry2dProxy@@QEAAJPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z.c)
 *     ??1Mesh2D@@QEAA@XZ @ 0x1800E1E90 (--1Mesh2D@@QEAA@XZ.c)
 *     ?GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z @ 0x1800E215C (-GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTetherVisual::UpdateInstructions(CTetherVisual *this)
{
  CBaseObject *v2; // r15
  CBaseObject **v3; // rsi
  CBaseObject *v4; // rcx
  CBaseObject **v5; // r14
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  int v8; // eax
  const struct tagRECT *v9; // rdx
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  CBaseObject *v17; // rcx
  CBaseObject *v18; // rsi
  struct MilPoint3F *v20[3]; // [rsp+50h] [rbp-59h] BYREF
  unsigned int v21; // [rsp+68h] [rbp-41h]
  struct MilPoint2D *v22; // [rsp+70h] [rbp-39h]
  unsigned int v23; // [rsp+88h] [rbp-21h]
  unsigned int *v24; // [rsp+90h] [rbp-19h]
  unsigned int v25; // [rsp+A8h] [rbp-1h]
  unsigned int *v26; // [rsp+B0h] [rbp+7h]
  unsigned int v27; // [rsp+C8h] [rbp+1Fh]
  CBaseObject *v28; // [rsp+110h] [rbp+67h] BYREF

  v2 = 0LL;
  v28 = 0LL;
  v3 = (CBaseObject **)((char *)this + 392);
  v4 = (CBaseObject *)*((_QWORD *)this + 49);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *v3 = 0LL;
  }
  v5 = (CBaseObject **)((char *)this + 376);
  v6 = (CBaseObject *)*((_QWORD *)this + 47);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *v5 = 0LL;
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 48);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 48) = 0LL;
  }
  v8 = CRenderDataVisual::ClearInstructions(this);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xD9u);
LABEL_23:
    if ( *v3 )
    {
      CBaseObject::Release(*v3);
      *v3 = 0LL;
    }
    if ( *v5 )
    {
      CBaseObject::Release(*v5);
      *v5 = 0LL;
    }
    v17 = (CBaseObject *)*((_QWORD *)this + 48);
    if ( v17 )
    {
      CBaseObject::Release(v17);
      *((_QWORD *)this + 48) = 0LL;
    }
    if ( v2 )
      CBaseObject::Release(v2);
    return v10;
  }
  if ( *((_QWORD *)this + 51) )
    return v10;
  Mesh2D::Mesh2D((Mesh2D *)v20, v9);
  CTetherVisual::GenerateMesh(this, (struct Mesh2D *)v20);
  v11 = CCompositor::CreateProxy<CMeshGeometry2dProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5), v3);
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xE0u);
LABEL_12:
    Mesh2D::~Mesh2D((Mesh2D *)v20);
    goto LABEL_23;
  }
  v12 = CMeshGeometry2dProxy::Update(*v3, v20[0], v21, v22, v23, v26, v27, v24, v25);
  v10 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0xE9u);
    goto LABEL_12;
  }
  v13 = CMeshGeometry2dProxy::SetConstantOpacity(*v3);
  v10 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0xEBu);
    goto LABEL_12;
  }
  v14 = CCompositor::CreateProxy<CGeometry2dGroupProxy>(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
          (CBaseObject **)this + 47);
  v10 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0xEDu);
    goto LABEL_12;
  }
  v15 = CGeometry2dGroupProxy::Update(*v5, *v3);
  v10 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0xEEu);
    goto LABEL_12;
  }
  v16 = CDrawMesh2DInstruction::Create(*v5, *(struct CBitmapSourceProxy **)(*((_QWORD *)this + 44) + 16LL), &v28);
  v10 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0xEFu);
    Mesh2D::~Mesh2D((Mesh2D *)v20);
    v2 = v28;
    goto LABEL_23;
  }
  v18 = v28;
  CRenderDataVisual::AddInstruction(this, v28);
  if ( v18 )
    CBaseObject::Release(v18);
  Mesh2D::~Mesh2D((Mesh2D *)v20);
  return v10;
}
