/*
 * XREFs of sub_140573670 @ 0x140573670
 * Callers:
 *     sub_140A6FB80 @ 0x140A6FB80 (sub_140A6FB80.c)
 * Callees:
 *     sub_1402DA760 @ 0x1402DA760 (sub_1402DA760.c)
 *     sub_140302560 @ 0x140302560 (sub_140302560.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 */

__int64 __fastcall sub_140573670(ULONG a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  volatile signed __int32 *v5; // rax
  volatile signed __int32 *v6; // rcx

  v1 = a1;
  if ( a1 < KeQueryActiveProcessorCountEx(0xFFFFu) && !byte_140C22260 )
  {
    _mm_lfence();
    v2 = qword_140D088C0[v1];
    if ( ((*(_DWORD *)(v2 + 11656) - 2) & 0xFFFFFFFD) == 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      sub_1402DA760(v2);
      if ( (*((_DWORD *)CurrentPrcb + 2914) & 0xF) == 2 )
        return 3LL;
      if ( (*((_DWORD *)CurrentPrcb + 2914) & 0xF) != 4 )
        return 0LL;
      v5 = (volatile signed __int32 *)*((_QWORD *)CurrentPrcb + 4375);
      if ( v5 )
        _InterlockedOr(v5, 0x20000u);
      KeQueryPerformanceCounter(0LL);
      while ( CurrentPrcb != (struct _KPRCB *)qword_140C2AD88 )
        sub_140302560((__int64)CurrentPrcb, 1);
      v6 = (volatile signed __int32 *)*((_QWORD *)CurrentPrcb + 4375);
      if ( v6 )
        _InterlockedAnd(v6, 0xFFFDFFFF);
    }
  }
  return 2LL;
}
