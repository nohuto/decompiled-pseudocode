/*
 * XREFs of LdrpGetMappingFromCacheEntry @ 0x1402F6F50
 * Callers:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1402F7080 (LdrpGetAlternateResourceModuleHandleEx.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140214B30 (RtlImageNtHeader.c)
 */

char __fastcall LdrpGetMappingFromCacheEntry(unsigned int a1, unsigned __int64 a2, _QWORD *a3, _QWORD *a4)
{
  unsigned __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 SizeOfImage; // rdx
  unsigned __int64 v10; // rbx
  char result; // al
  PIMAGE_NT_HEADERS v12; // rax
  unsigned __int16 Magic; // cx

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
    v12 = RtlImageNtHeader((PVOID)(v8 & 0xFFFFFFFFFFFFFFFCuLL));
    if ( !v12 )
      return 0;
    Magic = v12->OptionalHeader.Magic;
    if ( Magic != 267 && Magic != 523 )
      return 0;
    SizeOfImage = v12->OptionalHeader.SizeOfImage;
    if ( !v12->OptionalHeader.SizeOfImage )
      return 0;
  }
  if ( a2 < v10 || a2 >= v10 + SizeOfImage )
    return 0;
  *a3 = v8;
  result = 1;
  *a4 = SizeOfImage;
  return result;
}
