/*
 * XREFs of ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z @ 0x1800A4344
 * Callers:
 *     ?ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETSHAPES@@PEBXI@Z @ 0x1800A427C (-ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETSHAPES@@PE.c)
 *     ?ProcessSetViewBox@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETVIEWBOX@@@Z @ 0x1802513AC (-ProcessSetViewBox@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETVIEWBOX@@.c)
 * Callees:
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180072578 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x180074924 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18007FBD0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CShapeTree@@QEAA@PEAVCComposition@@@Z @ 0x1800A43E8 (--0CShapeTree@@QEAA@PEAVCComposition@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x1800B3520 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CShapeVisual::EnsureShapeTree(struct CComposition **this, struct CShapeTree **a2)
{
  unsigned int v2; // ebx
  CShapeTree *v5; // rax
  __int64 v6; // rcx
  CShapeTree *v7; // rax
  struct CContent *v8; // rdi
  int v9; // eax
  __int64 v10; // rcx

  v2 = 0;
  *a2 = 0LL;
  if ( !this[32] )
  {
    v5 = (CShapeTree *)DefaultHeap::AllocClear(0xA8uLL);
    if ( !v5 || (v7 = CShapeTree::CShapeTree(v5, this[2]), (v8 = v7) == 0LL) )
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x59u, 0LL);
      return v2;
    }
    CMILRefCountImpl::AddReference((CShapeTree *)((char *)v7 + 8));
    v9 = CVisual::SetContent(this, v8);
    v2 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x5Bu, 0LL);
      CResource::InternalRelease(v8);
      return v2;
    }
    CResource::InternalRelease(v8);
  }
  *a2 = this[32];
  return v2;
}
