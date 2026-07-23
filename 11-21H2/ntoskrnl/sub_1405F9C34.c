/*
 * XREFs of sub_1405F9C34 @ 0x1405F9C34
 * Callers:
 *     sub_1405F8ED4 @ 0x1405F8ED4 (sub_1405F8ED4.c)
 * Callees:
 *     sub_1405FA9B0 @ 0x1405FA9B0 (sub_1405FA9B0.c)
 */

__int64 __fastcall sub_1405F9C34(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v2; // ecx
  unsigned int v3; // eax
  __int64 v4; // rdx
  unsigned int v5; // edx
  int v6; // r9d
  unsigned int v7; // eax
  unsigned int v8; // r9d

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 856);
  if ( v2 )
  {
    v3 = (unsigned int)(__rdtsc() >> 4) % v2 + 1;
    v4 = 0xFFFFFFFFLL;
    if ( v3 )
      v4 = v3 - 1;
    while ( sub_1405FA9B0(v1, v4) )
    {
      v7 = v5 + 1;
      v8 = v6 + 1;
      v4 = 0LL;
      if ( v7 != *(_DWORD *)(v1 + 788) )
        v4 = v7;
      if ( v8 >= 7 )
        return (unsigned int)-1;
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v5;
}
