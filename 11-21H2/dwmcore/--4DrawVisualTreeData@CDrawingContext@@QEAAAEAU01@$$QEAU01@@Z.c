/*
 * XREFs of ??4DrawVisualTreeData@CDrawingContext@@QEAAAEAU01@$$QEAU01@@Z @ 0x180088AD0
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800884A8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawVisualTreeData::operator=(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  void **v4; // rdx
  void **v5; // rcx
  void *v6; // rax
  char **v7; // rbx
  char *v8; // rcx
  __int64 v9; // rax

  *(_BYTE *)a1 = *(_BYTE *)a2;
  *(_BYTE *)(a1 + 1) = *(_BYTE *)(a2 + 1);
  *(_BYTE *)(a1 + 2) = *(_BYTE *)(a2 + 2);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  v3 = *(_QWORD *)(a2 + 24);
  v4 = (void **)(a2 + 32);
  *(_QWORD *)(a1 + 24) = v3;
  v5 = (void **)(a1 + 32);
  if ( v5 != v4 )
  {
    v6 = *v4;
    *v4 = 0LL;
    v7 = (char **)*v5;
    *v5 = v6;
    if ( v7 )
    {
      v8 = *v7;
      v9 = (v7[1] - *v7) >> 4;
      if ( v9 )
        v7[1] -= 16 * v9;
      *v7 = 0LL;
      if ( v8 == (char *)(v7 + 3) )
        v8 = 0LL;
      DefaultHeap::Free(v8);
      operator delete(v7, 0x38uLL);
    }
  }
  return a1;
}
