/*
 * XREFs of sub_140833314 @ 0x140833314
 * Callers:
 *     sub_140B154A4 @ 0x140B154A4 (sub_140B154A4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140833314(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rcx
  __int64 result; // rax

  v1 = a1 == -1;
  v2 = a1 + 1;
  result = 1LL;
  if ( !v1 )
    return v2;
  return result;
}
