/*
 * XREFs of sub_14045A748 @ 0x14045A748
 * Callers:
 *     sub_14020C9F0 @ 0x14020C9F0 (sub_14020C9F0.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     sub_1402F38C4 @ 0x1402F38C4 (sub_1402F38C4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14045A748(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v3; // r9
  __int64 v4; // rbx
  unsigned __int8 v5; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v7; // r8
  int v8; // eax
  bool v9; // zf
  __int64 result; // rax
  _DWORD v11[68]; // [rsp+30h] [rbp-138h] BYREF

  memset(&v11[2], 0, 0x100uLL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v3 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v3 + 20) |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  v4 = *(_QWORD *)(a1 + 11696);
  v11[0] = 2097153;
  memset(&v11[1], 0, 0x104uLL);
  KeAddProcessorAffinityEx((unsigned __int16 *)v11, *(_DWORD *)(v4 + 36));
  sub_1402F38C4(0, (int)v11, (__int64)qword_140571440, 0LL, 0LL, 0LL);
  while ( *(_DWORD *)(a1 + 11648) )
    _mm_pause();
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v5 = KeGetCurrentIrql();
      if ( v5 <= 0xFu && CurrentIrql <= 0xFu && v5 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = *((_QWORD *)CurrentPrcb + 4375);
        v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
        *(_DWORD *)(v7 + 20) &= v8;
        if ( v9 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
