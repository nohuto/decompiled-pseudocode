/*
 * XREFs of sub_18004EA38 @ 0x18004EA38
 * Callers:
 *     sub_18004D7D8 @ 0x18004D7D8 (sub_18004D7D8.c)
 * Callees:
 *     sub_18004EB48 @ 0x18004EB48 (sub_18004EB48.c)
 */

__int64 __fastcall sub_18004EA38(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_18004EB48(v2 + 32);
  return sub_18001D284(a1);
}
