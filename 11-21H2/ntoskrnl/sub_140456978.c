/*
 * XREFs of sub_140456978 @ 0x140456978
 * Callers:
 *     sub_1404568E6 @ 0x1404568E6 (sub_1404568E6.c)
 *     sub_140505560 @ 0x140505560 (sub_140505560.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140456978(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 148);
  result = 2LL;
  if ( v1 != 2 )
  {
    result = 0xFFFFFFFFLL;
    if ( v1 == 3 )
      return 3LL;
  }
  return result;
}
