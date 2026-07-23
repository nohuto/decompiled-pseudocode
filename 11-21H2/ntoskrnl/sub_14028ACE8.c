/*
 * XREFs of sub_14028ACE8 @ 0x14028ACE8
 * Callers:
 *     sub_14067231C @ 0x14067231C (sub_14067231C.c)
 *     sub_1406FE720 @ 0x1406FE720 (sub_1406FE720.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall sub_14028ACE8(__int64 a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  signed __int64 result; // rax

  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  result = v1 - 1;
  if ( v2 )
  {
    if ( result )
      __fastfail(0xEu);
    *(_BYTE *)(a1 + 48) = 1;
  }
  return result;
}
