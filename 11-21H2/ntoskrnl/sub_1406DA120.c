/*
 * XREFs of sub_1406DA120 @ 0x1406DA120
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 */

__int64 __fastcall sub_1406DA120(_DWORD *Source1, __int64 a2)
{
  _DWORD *v4; // rdx
  unsigned int v5; // ecx

  v4 = *(_DWORD **)(a2 + 16);
  v5 = Source1[1];
  if ( v5 == v4[1] && *Source1 == *v4 && RtlCompareMemory(Source1, v4, v5) == Source1[1] )
    ++*(_DWORD *)(a2 + 28);
  return 1LL;
}
