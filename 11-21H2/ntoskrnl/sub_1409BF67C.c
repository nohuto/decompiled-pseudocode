/*
 * XREFs of sub_1409BF67C @ 0x1409BF67C
 * Callers:
 *     RtlQueryAllFeatureConfigurations @ 0x1409B5E70 (RtlQueryAllFeatureConfigurations.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_1409BF67C(__int64 a1, void *a2, unsigned __int64 *a3)
{
  unsigned int v4; // ebx
  unsigned int *v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax

  v4 = 0;
  v5 = *(unsigned int **)(a1 + 8);
  if ( v5 )
  {
    v6 = *v5;
    v7 = *a3;
    *a3 = v6;
    if ( v6 <= v7 )
      memmove(a2, v5 + 1, 12LL * *v5);
    else
      return (unsigned int)-2147483643;
  }
  else
  {
    *a3 = 0LL;
  }
  return v4;
}
