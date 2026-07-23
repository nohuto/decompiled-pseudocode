/*
 * XREFs of sub_1403AA1D0 @ 0x1403AA1D0
 * Callers:
 *     sub_1403A9E80 @ 0x1403A9E80 (sub_1403A9E80.c)
 * Callees:
 *     sub_1403AA258 @ 0x1403AA258 (sub_1403AA258.c)
 */

__int64 __fastcall sub_1403AA1D0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _DWORD *v5; // r10
  __int64 v6; // r11

  result = sub_1403AA258(17LL);
  if ( result )
  {
    v5 = (_DWORD *)a2;
    v6 = 4LL;
    do
    {
      *(_DWORD *)((char *)v5 + result - a2) = (*v5 + *(_DWORD *)((char *)v5 + a1 - a2)) / 2;
      ++v5;
      --v6;
    }
    while ( v6 );
    *(_BYTE *)(result + 16) = *(_BYTE *)(a2 + 16) | *(_BYTE *)(a1 + 16) | 1;
  }
  return result;
}
