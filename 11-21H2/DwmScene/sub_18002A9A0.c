/*
 * XREFs of sub_18002A9A0 @ 0x18002A9A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E30C @ 0x18005E30C (sub_18005E30C.c)
 */

__int64 __fastcall sub_18002A9A0(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    return sub_18005E30C();
  return result;
}
