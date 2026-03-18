/*
 * XREFs of ?IsDirtyCollectionEnabled@SubTreeContext@CPreComputeContext@@QEBA_NXZ @ 0x1800EB8C4
 * Callers:
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x18003B418 (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x1800454B8 (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPreComputeContext::SubTreeContext::IsDirtyCollectionEnabled(CPreComputeContext::SubTreeContext *this)
{
  char v1; // dl

  v1 = 0;
  if ( !*((_DWORD *)this + 111) )
    return *(_BYTE *)(*((_QWORD *)this + 53) + 4420LL) == 0;
  return v1;
}
