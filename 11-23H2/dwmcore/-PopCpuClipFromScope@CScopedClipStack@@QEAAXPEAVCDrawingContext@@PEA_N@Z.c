/*
 * XREFs of ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x1801DA678
 * Callers:
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x180055810 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRect.c)
 * Callees:
 *     ?clear_region@?$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkEntry@CCpuClipAntialiasSinkContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180032B90 (-clear_region@-$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V-$buffer_impl@USinkEntry.c)
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x180032C5C (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 *     ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x180076214 (-HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?pop_back@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801DA7AC (-pop_back@-$vector_facade@UCpuClipStackState@CScopedClipStack@@V-$buffer_impl@UCpuClipStackState.c)
 */

void __fastcall CScopedClipStack::PopCpuClipFromScope(
        CScopedClipStack *this,
        struct CDrawingContext *a2,
        bool *a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 *v5; // rsi
  unsigned __int64 v8; // rbp
  __int64 v9; // rbx
  bool v10; // al
  int v11; // eax

  v4 = *((_QWORD *)this + 234);
  v5 = (__int64 *)((char *)this + 8);
  v8 = *(unsigned int *)(v4 - 24);
  if ( *(_BYTE *)(v4 - 4) )
  {
    v9 = *v5;
    CCpuClipAntialiasSinkContext::FlushDrawList(
      *(CCpuClipAntialiasSinkContext **)(*v5 - 16),
      a2,
      1749801491
    * (unsigned int)((__int64)(*(_QWORD *)(*(_QWORD *)(*v5 - 16) + 24LL) - *(_QWORD *)(*(_QWORD *)(*v5 - 16) + 16LL)) >> 4)
    - 1,
      a4);
    detail::vector_facade<CCpuClipAntialiasSinkContext::SinkEntry,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)(*(_QWORD *)(v9 - 16) + 16LL),
      0x84BDA12F684BDA13uLL
    * ((*(_QWORD *)(*(_QWORD *)(v9 - 16) + 24LL) - 432LL - *(_QWORD *)(*(_QWORD *)(v9 - 16) + 16LL)) >> 4),
      1LL);
  }
  detail::vector_facade<CScopedClipStack::CpuClipStackState,detail::buffer_impl<CScopedClipStack::CpuClipStackState,10,1,detail::liberal_expansion_policy>>::pop_back((char *)this + 1864);
  --*(_QWORD *)(*v5 - 176);
  if ( CScopedClipStack::HasCpuClipsInScope(this) )
    v10 = v8 > *(_QWORD *)(*((_QWORD *)this + 234) - 24LL);
  else
    v10 = (_DWORD)v8 != 0;
  *a3 = v10;
  v11 = *((_DWORD *)this + 580);
  if ( v11 )
    *((_DWORD *)this + 580) = v11 - 1;
  --*(_QWORD *)(*v5 - 168);
}
