/*
 * XREFs of ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z @ 0x180041F7C
 * Callers:
 *     ?ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETSHAPES@@PEBXI@Z @ 0x180041BBC (-ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETSHAPES@@PE.c)
 *     ?ProcessSetViewBox@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETVIEWBOX@@@Z @ 0x18023EB4C (-ProcessSetViewBox@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETVIEWBOX@@.c)
 * Callees:
 *     ??0CShapeTree@@QEAA@PEAVCComposition@@@Z @ 0x180042024 (--0CShapeTree@@QEAA@PEAVCComposition@@@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x1800471B0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x1800B1804 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

__int64 __fastcall CShapeVisual::EnsureShapeTree(CShapeVisual *this, struct CShapeTree **a2)
{
  struct CShapeTree *v2; // rax
  unsigned int v3; // ebx
  CShapeTree *v6; // rax
  unsigned int v7; // ecx
  CShapeTree *v8; // rax
  struct CContent *v9; // rdi
  int v10; // eax
  unsigned int v11; // ecx

  v2 = (struct CShapeTree *)*((_QWORD *)this + 32);
  v3 = 0;
  *a2 = 0LL;
  if ( !v2 )
  {
    v6 = (CShapeTree *)DefaultHeap::AllocClear(0xA8uLL);
    if ( !v6 || (v8 = CShapeTree::CShapeTree(v6, *((struct CComposition **)this + 2)), (v9 = v8) == 0LL) )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x59u, 0LL);
      return v3;
    }
    CMILRefCountImpl::AddReference((CShapeTree *)((char *)v8 + 8));
    v10 = CVisual::SetContent(this, v9);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x5Bu, 0LL);
      CResource::InternalRelease(v9);
      return v3;
    }
    CResource::InternalRelease(v9);
    v2 = (struct CShapeTree *)*((_QWORD *)this + 32);
  }
  *a2 = v2;
  return v3;
}
