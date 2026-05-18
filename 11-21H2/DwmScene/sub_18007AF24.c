/*
 * XREFs of sub_18007AF24 @ 0x18007AF24
 * Callers:
 *     sub_18007AF8C @ 0x18007AF8C (sub_18007AF8C.c)
 * Callees:
 *     sub_18007AD28 @ 0x18007AD28 (sub_18007AD28.c)
 *     sub_1800A7958 @ 0x1800A7958 (sub_1800A7958.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007AF24(__int64 a1)
{
  __int64 v2; // rdi

  v2 = 8LL;
  do
  {
    sub_1800A7958(a1);
    a1 += 128LL;
    --v2;
  }
  while ( v2 );
  sub_18007AD28(a1, a1);
  return a1;
}
