/*
 * XREFs of sub_14038719C @ 0x14038719C
 * Callers:
 *     sub_140277580 @ 0x140277580 (sub_140277580.c)
 * Callees:
 *     sub_140268654 @ 0x140268654 (sub_140268654.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1403872A4 @ 0x1403872A4 (sub_1403872A4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14038719C(__int64 a1, __int64 a2, unsigned int a3, char a4, __int64 a5)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v9; // rsi
  __int64 v10; // rbp
  int v11; // eax
  __int64 v12; // rbp
  __int64 result; // rax
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // edx
  bool v18; // zf

  CurrentIrql = KeGetCurrentIrql();
  v9 = a2 & ~(qword_14001C780[a3] - 1);
  v10 = 24512LL * *((unsigned int *)sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((48 * v9) >> 4)) + 2);
  v11 = 160;
  v12 = *(_QWORD *)(a1 + 16) + v10;
  if ( CurrentIrql < 2u && (a4 & 8) == 0 && (KeGetPcr()[36].Unused0[2] & 0x10001) == 0 )
    v11 = 224;
  result = sub_1403872A4(a1, v9, a3, 1LL, v11, a5);
  if ( result )
  {
    sub_140268654(v12, result, a3, a3 + 1, 0LL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v14 = KeGetCurrentIrql();
        if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v16 = *((_QWORD *)CurrentPrcb + 4375);
          v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
          *(_DWORD *)(v16 + 20) &= v17;
          if ( v18 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    return 1LL;
  }
  return result;
}
