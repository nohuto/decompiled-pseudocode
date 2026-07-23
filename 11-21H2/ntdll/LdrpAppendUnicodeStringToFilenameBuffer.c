/*
 * XREFs of LdrpAppendUnicodeStringToFilenameBuffer @ 0x180044FE8
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x18003D8F0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpPreprocessDllName @ 0x18004494C (LdrpPreprocessDllName.c)
 *     LdrpApplyFileNameRedirection @ 0x180044B54 (LdrpApplyFileNameRedirection.c)
 *     LdrpBuildSystem32FileName @ 0x1800731B8 (LdrpBuildSystem32FileName.c)
 *     LdrpLoadDependentModuleW @ 0x1800E1870 (LdrpLoadDependentModuleW.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180025C10 (NtdllpAllocateStringRoutine.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     NtdllpReallocateStringRoutine @ 0x1800E0AA4 (NtdllpReallocateStringRoutine.c)
 */

__int64 __fastcall LdrpAppendUnicodeStringToFilenameBuffer(unsigned __int16 *a1, unsigned __int16 *a2)
{
  int v3; // ecx
  unsigned int v5; // edi
  int v6; // edx
  unsigned int v7; // esi
  unsigned int v9; // esi
  __int64 v10; // rdi
  PVOID StringRoutine; // rax

  v3 = *a2;
  v5 = 0;
  if ( (_WORD)v3 )
  {
    v6 = *a1;
    v7 = v6 + v3 + 2;
    if ( v7 <= a1[1] )
    {
LABEL_3:
      v5 = 0;
      memmove((void *)(*((_QWORD *)a1 + 1) + (unsigned __int16)v6), *((const void **)a2 + 1), (unsigned __int16)v3);
      *a1 += *a2;
      *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1)) = 0;
      return v5;
    }
    if ( v7 > 0xFFFE )
      return (unsigned int)-1073741562;
    v9 = (v7 + 63) & 0xFFFFFFC0;
    if ( v9 > 0xFFFE )
      v9 = 65534;
    if ( *((unsigned __int16 **)a1 + 1) == a1 + 8 )
    {
      StringRoutine = NtdllpAllocateStringRoutine(v9);
      v10 = (__int64)StringRoutine;
      if ( !StringRoutine )
        return (unsigned int)-1073741801;
      if ( *a1 )
        memmove(StringRoutine, *((const void **)a1 + 1), *a1);
    }
    else
    {
      v10 = NtdllpReallocateStringRoutine(v9);
      if ( !v10 )
        return (unsigned int)-1073741801;
    }
    LOWORD(v6) = *a1;
    *((_QWORD *)a1 + 1) = v10;
    a1[1] = v9;
    LOWORD(v3) = *a2;
    goto LABEL_3;
  }
  return v5;
}
