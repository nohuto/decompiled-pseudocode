/*
 * XREFs of ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z @ 0x1801B78E0
 * Callers:
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x180098620 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRect.c)
 * Callees:
 *     ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x18008B2AC (-HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 */

void __fastcall CScopedClipStack::PopCpuClipFromScope(CScopedClipStack *this, bool *a2)
{
  _DWORD *v4; // rbx
  unsigned int v5; // esi
  __int64 v6; // rcx
  bool v7; // al

  v4 = (_DWORD *)(*((_QWORD *)this + 114) + 112LL * (unsigned int)(*((_DWORD *)this + 234) - 1));
  v5 = v4[26];
  CShapePtr::Release((CShapePtr *)v4);
  CShapePtr::Release((CShapePtr *)(v4 + 22));
  --*((_DWORD *)this + 234);
  v6 = 88LL * (unsigned int)(*((_DWORD *)this + 6) - 1);
  --*(_DWORD *)(v6 + *(_QWORD *)this + 4);
  if ( CScopedClipStack::HasCpuClipsInScope(this) )
    v7 = v5 > *(_DWORD *)(112LL * (unsigned int)(*((_DWORD *)this + 234) - 1) + *((_QWORD *)this + 114) + 104);
  else
    v7 = v5 != 0;
  *a2 = v7;
  CScopedClipStack::PopClipBoundsFromScope(this);
}
