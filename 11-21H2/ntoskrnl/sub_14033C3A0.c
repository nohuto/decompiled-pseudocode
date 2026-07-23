/*
 * XREFs of sub_14033C3A0 @ 0x14033C3A0
 * Callers:
 *     sub_1402710C4 @ 0x1402710C4 (sub_1402710C4.c)
 *     sub_1402C3BA0 @ 0x1402C3BA0 (sub_1402C3BA0.c)
 *     sub_140315EE0 @ 0x140315EE0 (sub_140315EE0.c)
 *     sub_140316E90 @ 0x140316E90 (sub_140316E90.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_14033B190 @ 0x14033B190 (sub_14033B190.c)
 *     sub_14033B770 @ 0x14033B770 (sub_14033B770.c)
 *     sub_14033F8E0 @ 0x14033F8E0 (sub_14033F8E0.c)
 *     sub_14033FAA4 @ 0x14033FAA4 (sub_14033FAA4.c)
 *     sub_140340078 @ 0x140340078 (sub_140340078.c)
 *     sub_1403B790C @ 0x1403B790C (sub_1403B790C.c)
 *     sub_140591E04 @ 0x140591E04 (sub_140591E04.c)
 *     sub_1405B7B38 @ 0x1405B7B38 (sub_1405B7B38.c)
 *     sub_1405B80F8 @ 0x1405B80F8 (sub_1405B80F8.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14033C3A0(unsigned __int64 *a1, int a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r8
  unsigned __int64 v4; // rax
  unsigned __int64 result; // rax

  v2 = *a1;
  v3 = 0LL;
  if ( (*a1 & 0x400) != 0 )
  {
    if ( a2 )
      v3 = 2048LL;
    v4 = v2 & 0xFFFFFFFFFFFFF7FFuLL;
  }
  else
  {
    if ( a2 )
      v3 = 8LL;
    v4 = v2 & 0xFFFFFFFFFFFFFFF7uLL;
  }
  result = v3 | v4;
  *a1 = result;
  return result;
}
