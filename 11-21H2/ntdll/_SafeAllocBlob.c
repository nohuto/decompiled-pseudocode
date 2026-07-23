/*
 * XREFs of _SafeAllocBlob @ 0x180049CC0
 * Callers:
 *     RtlpMuiRegCreateLanguageList @ 0x180049C30 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x18006F324 (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlpMuiRegCreateLanguages @ 0x180111038 (RtlpMuiRegCreateLanguages.c)
 *     RtlpMuiRegCreateStringPool @ 0x1801110D8 (RtlpMuiRegCreateStringPool.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 */

PVOID __fastcall SafeAllocBlob(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned __int64 v6; // r10
  unsigned int v7; // edx
  unsigned __int64 v8; // rcx
  unsigned int v9; // ecx
  PVOID result; // rax

  v6 = a3 * (unsigned __int64)a2;
  if ( v6 > 0xFFFFFFFF )
    return 0LL;
  v7 = v6 + a1;
  if ( (unsigned int)v6 + a1 < a1 )
    return 0LL;
  v8 = a5 * (unsigned __int64)a4;
  if ( v8 > 0xFFFFFFFF )
    return 0LL;
  v9 = v7 + v8;
  if ( v9 < v7 )
    return 0LL;
  result = 0LL;
  if ( a6 )
    *a6 = v9;
  if ( v9 )
    return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v9);
  return result;
}
