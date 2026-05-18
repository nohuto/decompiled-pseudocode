/*
 * XREFs of sub_18003DB00 @ 0x18003DB00
 * Callers:
 *     sub_180052D40 @ 0x180052D40 (sub_180052D40.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18003DB00(__int64 a1, char a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 96) + 14472LL;
  if ( a2 != *(_BYTE *)(v2 + 60) )
  {
    *(_BYTE *)(v2 + 60) = a2;
    *(_BYTE *)(v2 + 61) = 1;
  }
}
