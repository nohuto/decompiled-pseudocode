/*
 * XREFs of sub_14024AC78 @ 0x14024AC78
 * Callers:
 *     sub_140702AF8 @ 0x140702AF8 (sub_140702AF8.c)
 * Callees:
 *     sub_14024AE10 @ 0x14024AE10 (sub_14024AE10.c)
 *     sub_1402F38C4 @ 0x1402F38C4 (sub_1402F38C4.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1402FFAC0 (KeCountSetBitsAffinityEx.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall sub_14024AC78(__int64 a1)
{
  void *result; // rax
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbp
  int v5; // ebx
  __int64 v6; // r9
  unsigned __int8 v7; // al
  struct _KPRCB *v8; // r9
  __int64 v9; // r8
  int v10; // eax
  bool v11; // zf
  _DWORD v12[68]; // [rsp+30h] [rbp-138h] BYREF

  result = memset(&v12[2], 0, 0x100uLL);
  if ( *(_BYTE *)(a1 + 912) == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v6 + 20) |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v12[0] = 2097153;
    memset(&v12[1], 0, 0x104uLL);
    sub_140300030(v12, 32LL, a1 + 368);
    KeRemoveProcessorAffinityEx(v12, *((unsigned int *)CurrentPrcb + 9));
    v5 = KeCountSetBitsAffinityEx(v12);
    sub_14024AE10(0LL, 0LL, 0LL, 0LL);
    if ( v5 )
    {
      sub_1402F38C4(0, (unsigned int)v12, (unsigned int)sub_14024AE10, 1, 0LL, 0LL);
      while ( *((_DWORD *)CurrentPrcb + 2912) )
        _mm_pause();
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v7 = KeGetCurrentIrql();
        if ( v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
        {
          v8 = KeGetCurrentPrcb();
          v9 = *((_QWORD *)v8 + 4375);
          v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
          *(_DWORD *)(v9 + 20) &= v10;
          if ( v11 )
            sub_140418E4C(v8);
        }
      }
    }
    result = (void *)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
