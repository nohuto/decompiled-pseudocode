/*
 * XREFs of _SafeReallocBlob @ 0x180116218
 * Callers:
 *     RtlpMuiRegResizeLanguageConfigList @ 0x1801140A4 (RtlpMuiRegResizeLanguageConfigList.c)
 *     RtlpMuiRegResizeLanguageList @ 0x180114108 (RtlpMuiRegResizeLanguageList.c)
 *     RtlpMuiRegResizeLanguages @ 0x180114170 (RtlpMuiRegResizeLanguages.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall SafeReallocBlob(
        void *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7)
{
  unsigned __int64 v7; // r8
  unsigned int v8; // eax

  if ( !a1 )
    return 0LL;
  v7 = a4 * (unsigned __int64)a3;
  if ( v7 > 0xFFFFFFFF )
    return 0LL;
  v8 = v7 + a2;
  if ( (unsigned int)v7 + a2 < a2 )
    return 0LL;
  if ( a7 )
    *a7 = v8;
  return RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a1, v8);
}
