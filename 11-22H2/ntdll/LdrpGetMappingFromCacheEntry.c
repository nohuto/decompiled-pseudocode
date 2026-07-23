/*
 * XREFs of LdrpGetMappingFromCacheEntry @ 0x1800EBE24
 * Callers:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800EBC94 (LdrpGetAlternateResourceModuleHandleEx.c)
 * Callees:
 *     RtlImageNtHeader @ 0x18002EEB0 (RtlImageNtHeader.c)
 */

char __fastcall LdrpGetMappingFromCacheEntry(unsigned int a1, unsigned __int64 a2, _QWORD *a3, _QWORD *a4)
{
  unsigned __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 SizeOfImage; // rdx
  unsigned __int64 v10; // rbx
  PIMAGE_NT_HEADERS v11; // rax
  char result; // al

  if ( !a2 )
    return 0;
  if ( !a3 )
    return 0;
  if ( a1 >= AlternateResourceModuleCount )
    return 0;
  _mm_lfence();
  v7 = (unsigned __int64)a1 << 6;
  v8 = *(_QWORD *)((char *)AlternateResourceModules + v7 + 32);
  SizeOfImage = *(_QWORD *)((char *)AlternateResourceModules + v7 + 48);
  if ( (unsigned __int64)(v8 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 0;
  v10 = v8 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( !SizeOfImage )
  {
    v11 = RtlImageNtHeader((PVOID)(v8 & 0xFFFFFFFFFFFFFFFCuLL));
    if ( !v11 || v11->OptionalHeader.Magic != 267 && v11->OptionalHeader.Magic != 523 )
      return 0;
    SizeOfImage = v11->OptionalHeader.SizeOfImage;
    if ( !v11->OptionalHeader.SizeOfImage )
      return 0;
  }
  if ( a2 < v10 || a2 >= v10 + SizeOfImage )
    return 0;
  *a3 = v8;
  result = 1;
  *a4 = SizeOfImage;
  return result;
}
