/*
 * XREFs of RtlpNlsGetLcidIndex @ 0x180015ED8
 * Callers:
 *     RtlLcidToLocaleName @ 0x180015D90 (RtlLcidToLocaleName.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x18007AE4C (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlpGetProcessCodepagesForLocale @ 0x18010B070 (RtlpGetProcessCodepagesForLocale.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpNlsGetLcidIndex(int a1)
{
  int v1; // r9d
  int v3; // r8d
  __int64 v4; // r10
  __int64 result; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // eax

  v1 = 0;
  v3 = *(unsigned __int16 *)(pTblPtrs + 4) - 1;
  if ( v3 < 0 )
    return 0xFFFFFFFFLL;
  v4 = *(_QWORD *)(pTblPtrs + 16);
  while ( 1 )
  {
    result = (unsigned int)((v3 + v1) / 2);
    v6 = a1 - *(_DWORD *)(v4 + 8LL * (int)result);
    if ( a1 == *(_DWORD *)(v4 + 8LL * (int)result) )
      break;
    v7 = result - 1;
    if ( v6 >= 0 )
      v7 = v3;
    v8 = result + 1;
    v3 = v7;
    if ( v6 >= 0 )
      v1 = v8;
    if ( v1 > v7 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
