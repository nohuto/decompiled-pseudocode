/*
 * XREFs of sub_1800487B0 @ 0x1800487B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180037398 @ 0x180037398 (sub_180037398.c)
 *     sub_18008E70C @ 0x18008E70C (sub_18008E70C.c)
 */

__int64 __fastcall sub_1800487B0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  int v5; // edx

  result = *a4;
  v5 = *(_DWORD *)(*a4 + 440);
  if ( (v5 & 0x10000) != 0 && (v5 & 0x200000) != 0 )
  {
    sub_18008E70C();
    sub_180037398();
  }
  return result;
}
