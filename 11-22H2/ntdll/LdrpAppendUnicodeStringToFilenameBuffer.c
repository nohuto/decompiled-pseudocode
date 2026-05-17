/*
 * XREFs of LdrpAppendUnicodeStringToFilenameBuffer @ 0x180019D38
 * Callers:
 *     LdrpPreprocessDllName @ 0x1800198C0 (LdrpPreprocessDllName.c)
 *     LdrpApplyFileNameRedirection @ 0x180019AE4 (LdrpApplyFileNameRedirection.c)
 *     LdrpLoadDependentModuleInternal @ 0x180025330 (LdrpLoadDependentModuleInternal.c)
 *     LdrpResolveDllName @ 0x18002AA44 (LdrpResolveDllName.c)
 *     LdrpMapDllRetry @ 0x180072C9C (LdrpMapDllRetry.c)
 *     LdrpBuildSystem32FileName @ 0x1800793C4 (LdrpBuildSystem32FileName.c)
 *     LdrpLoadDependentModuleW @ 0x1800E0080 (LdrpLoadDependentModuleW.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x1800397C0 (NtdllpAllocateStringRoutine.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     NtdllpReallocateStringRoutine @ 0x1800DF3BC (NtdllpReallocateStringRoutine.c)
 */

__int64 __fastcall LdrpAppendUnicodeStringToFilenameBuffer(unsigned __int16 *a1, const void **a2)
{
  unsigned int v4; // edi
  unsigned int v5; // eax
  unsigned int v6; // ecx
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int16 *v10; // rdx
  unsigned int v11; // esi
  __int64 v12; // rdi
  void *StringRoutine; // rax

  v4 = 0;
  if ( *(_WORD *)a2 )
  {
    v5 = a1[1];
    v6 = *a1 + *(unsigned __int16 *)a2 + 2;
    if ( v6 <= v5 )
    {
LABEL_3:
      memmove((void *)(*((_QWORD *)a1 + 1) + *a1), a2[1], *(unsigned __int16 *)a2);
      v7 = (unsigned __int16)(*(_WORD *)a2 + *a1);
      v8 = *((_QWORD *)a1 + 1);
      *a1 = v7;
      *(_WORD *)(v8 + 2 * (v7 >> 1)) = 0;
      return v4;
    }
    if ( v6 > 0xFFFE )
      return (unsigned int)-1073741562;
    v10 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
    v11 = (v6 + 63) & 0xFFFFFFC0;
    if ( v11 > 0xFFFE )
      v11 = 65534;
    if ( v10 == a1 + 8 )
    {
      StringRoutine = (void *)NtdllpAllocateStringRoutine(v11, v10);
      v12 = (__int64)StringRoutine;
      if ( !StringRoutine )
        return (unsigned int)-1073741801;
      if ( *a1 )
        memmove(StringRoutine, *((const void **)a1 + 1), *a1);
    }
    else
    {
      v12 = NtdllpReallocateStringRoutine(v11);
      if ( !v12 )
        return (unsigned int)-1073741801;
    }
    *((_QWORD *)a1 + 1) = v12;
    v4 = 0;
    a1[1] = v11;
    goto LABEL_3;
  }
  return v4;
}
