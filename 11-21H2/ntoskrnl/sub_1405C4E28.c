/*
 * XREFs of sub_1405C4E28 @ 0x1405C4E28
 * Callers:
 *     sub_1405C4FB8 @ 0x1405C4FB8 (sub_1405C4FB8.c)
 *     sub_1405C5550 @ 0x1405C5550 (sub_1405C5550.c)
 *     sub_14097D7F8 @ 0x14097D7F8 (sub_14097D7F8.c)
 * Callees:
 *     sub_14026A784 @ 0x14026A784 (sub_14026A784.c)
 *     sub_140273354 @ 0x140273354 (sub_140273354.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405ADDA8 @ 0x1405ADDA8 (sub_1405ADDA8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1405C4E28(ULONG_PTR a1, char a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rbp
  unsigned __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r8
  int v10; // eax
  bool v11; // zf

  v4 = 48 * a1 - 0x220000000000LL;
  v5 = sub_1402828F0(64, 0x20uLL, 0x6C42694Du);
  v6 = (unsigned __int8)sub_1402F2700(v4);
  if ( !sub_140273354(v4) )
  {
    if ( (a2 & 1) != 0 && (*(_BYTE *)(v4 + 35) & 0x40) == 0 )
    {
      sub_14026A784(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL)), 1LL, 0LL, 1u);
      sub_1405ADDA8(v4, 1, 0, v5);
      v5 = 0LL;
      _InterlockedIncrement(&dword_140C52B14);
    }
    if ( (a2 & 2) != 0 )
      sub_1402C6EB0(a1, 2);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= v10;
        if ( v11 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
}
