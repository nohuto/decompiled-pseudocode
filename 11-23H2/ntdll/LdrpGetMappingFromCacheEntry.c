/*
 * XREFs of LdrpGetMappingFromCacheEntry @ 0x1800ED158
 * Callers:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800ECFCC (LdrpGetAlternateResourceModuleHandleEx.c)
 * Callees:
 *     RtlImageNtHeader @ 0x18002ECE0 (RtlImageNtHeader.c)
 */

char __fastcall LdrpGetMappingFromCacheEntry(unsigned int a1, unsigned __int64 a2, _QWORD *a3, _QWORD *a4)
{
  unsigned __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  char result; // al

  if ( !a2 )
    return 0;
  if ( !a3 )
    return 0;
  if ( a1 >= AlternateResourceModuleCount )
    return 0;
  _mm_lfence();
  v7 = (unsigned __int64)a1 << 6;
  v8 = *(_QWORD *)(v7 + AlternateResourceModules + 32);
  v9 = *(_QWORD *)(v7 + AlternateResourceModules + 48);
  if ( (unsigned __int64)(v8 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 0;
  v10 = v8 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( !v9 )
  {
    v11 = RtlImageNtHeader(v8 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( !v11 || *(_WORD *)(v11 + 24) != 267 && *(_WORD *)(v11 + 24) != 523 )
      return 0;
    v9 = *(unsigned int *)(v11 + 80);
    if ( !*(_DWORD *)(v11 + 80) )
      return 0;
  }
  if ( a2 < v10 || a2 >= v10 + v9 )
    return 0;
  *a3 = v8;
  result = 1;
  *a4 = v9;
  return result;
}
