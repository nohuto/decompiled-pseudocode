/*
 * XREFs of sub_1800398B4 @ 0x1800398B4
 * Callers:
 *     sub_18004C480 @ 0x18004C480 (sub_18004C480.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800398B4(__int64 a1, char a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 96) + 14472LL;
  if ( a2 != *(_BYTE *)(v2 + 60) )
  {
    *(_BYTE *)(v2 + 60) = a2;
    *(_BYTE *)(v2 + 61) = 1;
  }
}
