/*
 * XREFs of sub_1402E4D70 @ 0x1402E4D70
 * Callers:
 *     sub_1402E4BF0 @ 0x1402E4BF0 (sub_1402E4BF0.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 * Callees:
 *     sub_1402E4DD4 @ 0x1402E4DD4 (sub_1402E4DD4.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14030F870 @ 0x14030F870 (sub_14030F870.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 */

void __fastcall sub_1402E4D70(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  LOBYTE(a2) = -1;
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
    sub_140461A66(&dword_140C52D00, a2);
  else
    sub_14030F870(&dword_140C52D00, a2);
  v3 = *(_QWORD *)(a1 + 8);
  if ( (v3 & 0x100000000LL) == 0 )
  {
    *(_QWORD *)(a1 + 8) = v3 | 0x100000000LL;
    sub_1402E4DD4(a1);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C52D00);
}
