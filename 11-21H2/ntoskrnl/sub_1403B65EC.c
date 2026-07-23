/*
 * XREFs of sub_1403B65EC @ 0x1403B65EC
 * Callers:
 *     sub_1408357A0 @ 0x1408357A0 (sub_1408357A0.c)
 *     sub_1409F8350 @ 0x1409F8350 (sub_1409F8350.c)
 *     sub_140A52E00 @ 0x140A52E00 (sub_140A52E00.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     sub_140232788 @ 0x140232788 (sub_140232788.c)
 *     sub_14029394C @ 0x14029394C (sub_14029394C.c)
 *     sub_1402D6254 @ 0x1402D6254 (sub_1402D6254.c)
 *     sub_1402D62A8 @ 0x1402D62A8 (sub_1402D62A8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140A47CE8 @ 0x140A47CE8 (sub_140A47CE8.c)
 *     sub_140A526FC @ 0x140A526FC (sub_140A526FC.c)
 */

void __fastcall sub_1403B65EC(__int64 *a1, __int64 *a2, int a3, int a4, int a5, int a6, unsigned __int8 a7)
{
  int v7; // r14d
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int8 CurrentIrql; // bl
  __int64 v15; // r9
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v18; // r8
  int v19; // eax
  bool v20; // zf

  v7 = dword_140D01460;
  if ( a3 == 2 )
  {
    v12 = *a1;
    if ( v12 > *a2 )
    {
      v13 = sub_14029394C(v12 - *a2, 0x989680uLL, qword_140D069F8);
      sub_140A47CE8(v13);
    }
  }
  if ( byte_140C5AE3C )
  {
    qword_140C245D0 = *a1;
    qword_140C245D8 = *a2;
    sub_140A526FC((_DWORD)a1, (_DWORD)a2, a3, a4, a5, v7, a7);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v15 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v15 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    sub_140232788(qword_140C158D8, 0LL, 0, 0LL);
    sub_1402D6254(16);
    sub_1402D62A8();
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v18 = *((_QWORD *)CurrentPrcb + 4375);
          v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
          *(_DWORD *)(v18 + 20) &= v19;
          if ( v20 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
}
