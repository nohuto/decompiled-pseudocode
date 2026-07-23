/*
 * XREFs of sub_1405AD468 @ 0x1405AD468
 * Callers:
 *     sub_140220360 @ 0x140220360 (sub_140220360.c)
 *     sub_14022FFB8 @ 0x14022FFB8 (sub_14022FFB8.c)
 *     sub_140264720 @ 0x140264720 (sub_140264720.c)
 *     sub_140267060 @ 0x140267060 (sub_140267060.c)
 *     sub_14027C784 @ 0x14027C784 (sub_14027C784.c)
 *     sub_14027CE40 @ 0x14027CE40 (sub_14027CE40.c)
 *     sub_1402BEEA0 @ 0x1402BEEA0 (sub_1402BEEA0.c)
 *     sub_1402C6AA0 @ 0x1402C6AA0 (sub_1402C6AA0.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402C8740 @ 0x1402C8740 (sub_1402C8740.c)
 *     sub_1402CB2D0 @ 0x1402CB2D0 (sub_1402CB2D0.c)
 *     sub_1402E86F0 @ 0x1402E86F0 (sub_1402E86F0.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_14033C5F0 @ 0x14033C5F0 (sub_14033C5F0.c)
 *     sub_1405C3C6C @ 0x1405C3C6C (sub_1405C3C6C.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_140273354 @ 0x140273354 (sub_140273354.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140424E70 @ 0x140424E70 (sub_140424E70.c)
 *     sub_1405ADB14 @ 0x1405ADB14 (sub_1405ADB14.c)
 */

__int64 __fastcall sub_1405AD468(ULONG_PTR BugCheckParameter2, unsigned __int64 a2)
{
  ULONG_PTR v3; // r14
  __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // r9
  int v7; // eax
  unsigned __int64 v8; // rbp
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // eax
  bool v12; // zf
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r9
  __int64 v15; // r8
  int v16; // eax
  __int64 result; // rax

  v3 = BugCheckParameter2;
  v4 = 48 * BugCheckParameter2 - 0x220000000000LL;
LABEL_2:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v6 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( *((_QWORD *)KeGetCurrentPrcb() + 4272) )
  {
    v7 = *(unsigned __int8 *)(v4 + 34) >> 6;
    if ( v7 == 3 )
    {
      a2 = 0LL;
    }
    else if ( v7 != 1 && a2 > 0x10 )
    {
      a2 = 16LL;
    }
    while ( a2 )
    {
      if ( (*(_BYTE *)(v4 + 35) & 0x40) == 0 && !sub_140273354(v4) )
      {
        v8 = sub_1402CC7C0(v3, 0LL, 0x20000000);
        if ( sub_140424E70(v8) )
          sub_1405ADB14(v8, v3);
        sub_1402BEDD0(v8, 0x11u);
      }
      v4 += 48LL;
      ++v3;
      if ( (--a2 & 0x3F) == 0 && CurrentIrql < 2u && KeShouldYieldProcessor() )
      {
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = *((_QWORD *)CurrentPrcb + 4375);
          v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
          *(_DWORD *)(v10 + 20) &= v11;
          if ( v12 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
        __writecr8(CurrentIrql);
        goto LABEL_2;
      }
    }
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v13 = KeGetCurrentIrql();
      if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
      {
        v14 = KeGetCurrentPrcb();
        v15 = *((_QWORD *)v14 + 4375);
        v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v16;
        if ( v12 )
          sub_140418E4C((__int64)v14);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
