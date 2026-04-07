/*
 * XREFs of ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x1800E70F8
 * Callers:
 *     ?ValidateVisual@CTouchDragVisual@@UEAAJXZ @ 0x1800E7280 (-ValidateVisual@CTouchDragVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002730C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0Mesh2D@@QEAA@PEBUtagRECT@@@Z @ 0x180069D36 (--0Mesh2D@@QEAA@PEBUtagRECT@@@Z.c)
 *     ?CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PEAPEAVCMeshGeometry2dProxy@@@Z @ 0x18006A0C6 (-CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PE.c)
 *     ??1Mesh2D@@QEAA@XZ @ 0x1800E1E90 (--1Mesh2D@@QEAA@XZ.c)
 *     ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UMilPoint3F@@$0A@@@PEAV?$DynArray@UMilPoint2D@@$0A@@@PEAV?$DynArray@I$0A@@@PEAV?$DynArray@K$0A@@@@Z @ 0x1800E7580 (-TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEB.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTouchDragVisual::UpdateVisual(CTouchDragVisual *this)
{
  struct CMeshGeometry2dProxy **v2; // r14
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  int v5; // eax
  const struct tagRECT *v6; // rdx
  unsigned int v7; // ebx
  const struct tagRECT *v8; // rdx
  int v9; // ecx
  int v10; // eax
  int DrawMesh2DInstruction; // eax
  _BYTE v13[32]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v14[32]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v15[32]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v16[48]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v17[144]; // [rsp+D8h] [rbp-30h] BYREF

  v2 = (struct CMeshGeometry2dProxy **)((char *)this + 440);
  v3 = (CBaseObject *)*((_QWORD *)this + 55);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *v2 = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 54);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 54) = 0LL;
  }
  v5 = CRenderDataVisual::ClearInstructions(this);
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( *((_DWORD *)this + 96) > 1u )
    {
      Mesh2D::Mesh2D((Mesh2D *)v13, v6);
      Mesh2D::Mesh2D((Mesh2D *)v17, v8);
      v10 = CTouchDragVisualHelper::TriangulatePathGeometry(
              v9,
              (int)this + 360,
              (int)this + 400,
              (unsigned int)v13,
              (__int64)v14,
              (__int64)v15,
              (__int64)v16);
      v7 = v10;
      if ( v10 >= 0 )
      {
        DrawMesh2DInstruction = CTouchDragVisual::CreateDrawMesh2DInstruction(
                                  this,
                                  (const struct Mesh2D *)v13,
                                  (struct CGeometry2dGroupProxy **)this + 54,
                                  v2);
        v7 = DrawMesh2DInstruction;
        if ( DrawMesh2DInstruction < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, DrawMesh2DInstruction, 0xE7u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xE4u);
      }
      Mesh2D::~Mesh2D((Mesh2D *)v17);
      Mesh2D::~Mesh2D((Mesh2D *)v13);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xD4u);
  }
  return v7;
}
