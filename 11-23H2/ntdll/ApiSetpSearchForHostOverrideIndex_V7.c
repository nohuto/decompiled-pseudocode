/*
 * XREFs of ApiSetpSearchForHostOverrideIndex_V7 @ 0x18009F18C
 * Callers:
 *     ApiSetResolveToHost_V7 @ 0x18009EE48 (ApiSetResolveToHost_V7.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180014950 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall ApiSetpSearchForHostOverrideIndex_V7(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        const WCHAR *a4,
        unsigned __int16 a5)
{
  unsigned int v9; // esi
  __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rcx
  SIZE_T v14; // rdx
  __int64 v15; // r14

  if ( !a3 )
    return 0xFFFFFFFFLL;
  v9 = 0;
  v10 = *(unsigned __int16 *)(a1 + 98);
  v11 = *(unsigned __int16 *)(a1 + 6);
  v12 = *(unsigned int *)(a1 + 88);
  v13 = *(unsigned int *)(a1 + 16);
  v14 = a5;
  while ( 1 )
  {
    v15 = v12 + v10 * a2 - v11;
    if ( !RtlCompareUnicodeStrings(
            a4,
            v14,
            (PCWCH)(a1 + v13 + *(unsigned int *)(v15 + a1 + 4) - v11),
            *(unsigned __int16 *)(v15 + a1 + 12),
            1u) )
      break;
    a2 = *(_DWORD *)(v15 + a1);
    ++v9;
    v12 = *(unsigned int *)(a1 + 88);
    v13 = *(unsigned int *)(a1 + 16);
    v14 = a5;
    if ( v9 >= a3 )
      return 0xFFFFFFFFLL;
  }
  return a2;
}
