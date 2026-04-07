/*
 * XREFs of ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x1800E4134
 * Callers:
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x1800E43B0 (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
 *     ?UpdateTransition@CTetherVisual@@MEAAJXZ @ 0x1800E4420 (-UpdateTransition@CTetherVisual@@MEAAJXZ.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F610 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18002E490 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCGeometry2dGroupProxy@@@CCompositor@@IEAAJPEAPEAVCGeometry2dGroupProxy@@@Z @ 0x18006BCFE (--$CreateProxy@VCGeometry2dGroupProxy@@@CCompositor@@IEAAJPEAPEAVCGeometry2dGroupProxy@@@Z.c)
 *     ??$CreateProxy@VCMeshGeometry2dProxy@@@CCompositor@@IEAAJPEAPEAVCMeshGeometry2dProxy@@@Z @ 0x18006BE26 (--$CreateProxy@VCMeshGeometry2dProxy@@@CCompositor@@IEAAJPEAPEAVCMeshGeometry2dProxy@@@Z.c)
 *     ?Create@CDrawMesh2DInstruction@@SAJPEAVCGeometry2dGroupProxy@@PEAVCBitmapSourceProxy@@PEAPEAV1@@Z @ 0x18006CE96 (-Create@CDrawMesh2DInstruction@@SAJPEAVCGeometry2dGroupProxy@@PEAVCBitmapSourceProxy@@PEAPEAV1@@.c)
 *     ?Update@CGeometry2dGroupProxy@@QEAAJPEBVCMeshGeometry2dProxy@@@Z @ 0x18006CFBC (-Update@CGeometry2dGroupProxy@@QEAAJPEBVCMeshGeometry2dProxy@@@Z.c)
 *     ??0Mesh2D@@QEAA@PEBUtagRECT@@@Z @ 0x18006D614 (--0Mesh2D@@QEAA@PEBUtagRECT@@@Z.c)
 *     ??1Mesh2D@@QEAA@XZ @ 0x18006D6DA (--1Mesh2D@@QEAA@XZ.c)
 *     ?Update@CMeshGeometry2dProxy@@QEAAJHPEBUMilPoint3F@@PEBUMilPoint2D@@IPEBII@Z @ 0x1800CD05C (-Update@CMeshGeometry2dProxy@@QEAAJHPEBUMilPoint3F@@PEBUMilPoint2D@@IPEBII@Z.c)
 *     ?GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z @ 0x1800E3998 (-GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTetherVisual::UpdateInstructions(CTetherVisual *this)
{
  CBaseObject *v2; // r15
  CBaseObject **v3; // r14
  CBaseObject *v4; // rcx
  CBaseObject **v5; // rsi
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  int v8; // eax
  const struct tagRECT *v9; // rdx
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  CBaseObject *v19; // rcx
  CBaseObject *v20; // rsi
  struct MilPoint3F *v22[3]; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v23; // [rsp+58h] [rbp-21h]
  struct MilPoint2D *v24; // [rsp+60h] [rbp-19h]
  unsigned int *v25; // [rsp+80h] [rbp+7h]
  unsigned int v26; // [rsp+98h] [rbp+1Fh]
  CBaseObject *v27; // [rsp+E0h] [rbp+67h] BYREF

  v2 = 0LL;
  v27 = 0LL;
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xD8u);
LABEL_21:
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
    v19 = (CBaseObject *)*((_QWORD *)this + 48);
    if ( v19 )
    {
      CBaseObject::Release(v19);
      *((_QWORD *)this + 48) = 0LL;
    }
    if ( v2 )
      CBaseObject::Release(v2);
    return v10;
  }
  if ( *((_QWORD *)this + 51) )
    return v10;
  Mesh2D::Mesh2D((Mesh2D *)v22, v9);
  CTetherVisual::GenerateMesh(this, (struct Mesh2D *)v22);
  v11 = CCompositor::CreateProxy<CMeshGeometry2dProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6), v3);
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xDFu);
LABEL_12:
    Mesh2D::~Mesh2D((Mesh2D *)v22);
    goto LABEL_21;
  }
  v13 = CMeshGeometry2dProxy::Update(*v3, v12, v22[0], v24, v23, v25, v26);
  v10 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0xE6u);
    goto LABEL_12;
  }
  v14 = CCompositor::CreateProxy<CGeometry2dGroupProxy>(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
          (CBaseObject **)this + 47);
  v10 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0xE8u);
    goto LABEL_12;
  }
  v15 = CGeometry2dGroupProxy::Update(*v5, *v3);
  v10 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0xE9u);
    goto LABEL_12;
  }
  v16 = CDrawMesh2DInstruction::Create(*v5, *(struct CBitmapSourceProxy **)(*((_QWORD *)this + 44) + 16LL), &v27);
  v10 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0xEAu);
    Mesh2D::~Mesh2D((Mesh2D *)v22);
    v2 = v27;
    goto LABEL_21;
  }
  v20 = v27;
  CRenderDataVisual::AddInstruction(this, v27, v17, v18);
  if ( v20 )
    CBaseObject::Release(v20);
  Mesh2D::~Mesh2D((Mesh2D *)v22);
  return v10;
}
