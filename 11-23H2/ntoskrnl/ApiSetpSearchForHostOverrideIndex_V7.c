/*
 * XREFs of ApiSetpSearchForHostOverrideIndex_V7 @ 0x1404183C4
 * Callers:
 *     ApiSetResolveToHost_V7 @ 0x14041705C (ApiSetResolveToHost_V7.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x1406DA010 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall ApiSetpSearchForHostOverrideIndex_V7(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        const WCHAR *a4,
        unsigned __int16 a5)
{
  int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // r14

  if ( !a3 )
    return 0xFFFFFFFFLL;
  v9 = 0;
  while ( 1 )
  {
    v10 = *(unsigned __int16 *)(a1 + 6);
    v11 = *(unsigned int *)(a1 + 88) + a2 * (unsigned __int64)*(unsigned __int16 *)(a1 + 98) - v10;
    if ( !RtlCompareUnicodeStrings(
            a4,
            a5,
            (PCWCH)(a1 + *(unsigned int *)(v11 + a1 + 4) - v10 + *(unsigned int *)(a1 + 16)),
            *(unsigned __int16 *)(v11 + a1 + 12),
            1u) )
      break;
    a2 = *(_DWORD *)(v11 + a1);
    if ( ++v9 >= a3 )
      return 0xFFFFFFFFLL;
  }
  return a2;
}
