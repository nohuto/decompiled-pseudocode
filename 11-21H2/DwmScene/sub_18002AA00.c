/*
 * XREFs of sub_18002AA00 @ 0x18002AA00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E468 @ 0x18005E468 (sub_18005E468.c)
 */

__int64 __fastcall sub_18002AA00(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    return sub_18005E468();
  return result;
}
