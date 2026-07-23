/*
 * XREFs of sub_1402F374C @ 0x1402F374C
 * Callers:
 *     sub_140224C34 @ 0x140224C34 (sub_140224C34.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     sub_1402EBB58 @ 0x1402EBB58 (sub_1402EBB58.c)
 *     sub_1402F3730 @ 0x1402F3730 (sub_1402F3730.c)
 *     sub_1402F391C @ 0x1402F391C (sub_1402F391C.c)
 *     sub_1402F3C40 @ 0x1402F3C40 (sub_1402F3C40.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     KeQueryTotalCycleTimeThread @ 0x140345800 (KeQueryTotalCycleTimeThread.c)
 *     sub_1405C70B4 @ 0x1405C70B4 (sub_1405C70B4.c)
 *     sub_1405C8AFC @ 0x1405C8AFC (sub_1405C8AFC.c)
 *     PsQueryTotalCycleTimeProcess @ 0x1406C73D0 (PsQueryTotalCycleTimeProcess.c)
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 *     sub_1407B6CA0 @ 0x1407B6CA0 (sub_1407B6CA0.c)
 *     sub_1407E6274 @ 0x1407E6274 (sub_1407E6274.c)
 *     sub_1409AD99C @ 0x1409AD99C (sub_1409AD99C.c)
 *     sub_1409F5F90 @ 0x1409F5F90 (sub_1409F5F90.c)
 * Callees:
 *     sub_1402F38C4 @ 0x1402F38C4 (sub_1402F38C4.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1402FFAC0 (KeCountSetBitsAffinityEx.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1402F374C(char a1)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r14
  int v3; // r15d
  _DWORD *v4; // rsi
  __int64 v5; // rbx
  int v6; // eax
  __int64 result; // rax
  __int64 v8; // r9
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r9
  __int64 v11; // r8
  int v12; // eax
  bool v13; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v8 + 20) |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  v4 = (_DWORD *)((char *)CurrentPrcb + 11704);
  if ( a1 )
  {
    v3 = 1;
    v6 = dword_140D06884 - 1;
    LODWORD(v4) = 0;
  }
  else
  {
    v5 = *(_QWORD *)(*((_QWORD *)CurrentPrcb + 1) + 184LL);
    *((_DWORD *)CurrentPrcb + 2927) = 0;
    *v4 = 2097153;
    memset((char *)CurrentPrcb + 11712, 0, 0x100uLL);
    sub_140300030((char *)CurrentPrcb + 11704, *((unsigned __int16 *)CurrentPrcb + 5853), v5 + 368);
    KeRemoveProcessorAffinityEx((char *)CurrentPrcb + 11704, *((unsigned int *)CurrentPrcb + 9));
    v6 = KeCountSetBitsAffinityEx((char *)CurrentPrcb + 11704);
  }
  if ( v6 )
  {
    sub_1402F38C4(v3, (_DWORD)v4, (unsigned int)_misaligned_access, 0, 0LL, 0LL);
    while ( *((_DWORD *)CurrentPrcb + 2912) )
      _mm_pause();
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v9 = KeGetCurrentIrql();
      if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
      {
        v10 = KeGetCurrentPrcb();
        v11 = *((_QWORD *)v10 + 4375);
        v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= v12;
        if ( v13 )
          sub_140418E4C(v10);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
