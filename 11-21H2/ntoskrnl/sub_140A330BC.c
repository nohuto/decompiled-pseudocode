/*
 * XREFs of sub_140A330BC @ 0x140A330BC
 * Callers:
 *     sub_140A32934 @ 0x140A32934 (sub_140A32934.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A330BC(unsigned int a1, __int64 a2, int a3)
{
  int v3; // eax

  if ( a2 && !*(_DWORD *)a2 )
  {
    *(_OWORD *)a2 = 0LL;
    v3 = 0x10000000;
    *(_OWORD *)(a2 + 16) = 0LL;
    if ( a3 )
      v3 = a3;
    *(_OWORD *)(a2 + 32) = 0LL;
    *(_DWORD *)a2 = 48;
    *(_DWORD *)(a2 + 8) = v3;
    *(_DWORD *)(a2 + 4) = a1;
  }
  return a1;
}
