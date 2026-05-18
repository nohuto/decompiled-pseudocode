/*
 * XREFs of sub_18005A610 @ 0x18005A610
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E30C @ 0x18005E30C (sub_18005E30C.c)
 */

__int64 __fastcall sub_18005A610(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    return sub_18005E30C();
  return result;
}
