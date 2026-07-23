/*
 * XREFs of LdrpPreprocessDllName @ 0x1800196B0
 * Callers:
 *     LdrpFindLoadedDll @ 0x180016164 (LdrpFindLoadedDll.c)
 *     LdrpLoadForwardedDll @ 0x180018DF0 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDll @ 0x18001906C (LdrpLoadDll.c)
 *     LdrLoadEnclaveModule @ 0x1800D8270 (LdrLoadEnclaveModule.c)
 *     LdrpEnclaveAddDependentModule @ 0x1800D882C (LdrpEnclaveAddDependentModule.c)
 *     LdrpAddRedirectedFunction @ 0x1800E09C4 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     LdrpApplyFileNameRedirection @ 0x1800198D4 (LdrpApplyFileNameRedirection.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180019B28 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001CF30 (RtlDetermineDosPathNameType_Ustr.c)
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     LdrpGetFullPath @ 0x18002DDA0 (LdrpGetFullPath.c)
 */

__int64 __fastcall LdrpPreprocessDllName(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3, int *a4)
{
  bool v5; // zf
  int FullPath; // ebx
  char v9; // bp
  unsigned __int16 *v10; // r13
  unsigned __int64 v11; // rdx
  _WORD *i; // rcx
  unsigned __int64 v13; // rdx
  _WORD *j; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  _WORD *k; // rax
  const char *v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // [rsp+30h] [rbp-38h]
  char v23; // [rsp+88h] [rbp+20h] BYREF

  v5 = (*a4 & 0x800008) == 0;
  v23 = 0;
  FullPath = 0;
  v9 = 0;
  if ( v5 )
  {
    FullPath = LdrpApplyFileNameRedirection(a3, a1, a3, a2, &v23);
    if ( FullPath < 0 )
      goto LABEL_34;
    v9 = v23;
  }
  v10 = a1;
  if ( !*a2 )
  {
    v11 = *((_QWORD *)a1 + 1);
    for ( i = (_WORD *)(*a1 + v11 - 2); (unsigned __int64)i >= v11; --i )
    {
      if ( *i == 92 || *i == 47 )
      {
        if ( (unsigned int)RtlDetermineDosPathNameType_Ustr(a1) != 5 )
        {
          FullPath = LdrpGetFullPath(v21, a2);
          if ( FullPath >= 0 )
          {
            *a4 |= 0x600u;
            goto LABEL_13;
          }
LABEL_34:
          LODWORD(v22) = FullPath;
          LdrpLogInternal(
            (unsigned int)"minkernel\\ntdll\\ldrutil.c",
            2729,
            (unsigned int)"LdrpPreprocessDllName",
            0,
            "LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
            a1,
            v22);
          return (unsigned int)FullPath;
        }
LABEL_11:
        FullPath = LdrpAppendUnicodeStringToFilenameBuffer(a2, a1);
        goto LABEL_12;
      }
    }
    *a4 |= 0x20u;
    goto LABEL_11;
  }
  v19 = "SxS";
  if ( !v9 )
    v19 = "API set";
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrutil.c",
    2671,
    (unsigned int)"LdrpPreprocessDllName",
    2,
    "DLL %wZ was redirected to %wZ by %s\n",
    a1,
    a2,
    v19);
  v20 = *a4 | 0x200;
  *a4 = v20;
  if ( v9 )
    *a4 = v20 | 4;
  v10 = a2;
LABEL_12:
  if ( FullPath < 0 )
    goto LABEL_34;
LABEL_13:
  v13 = *((_QWORD *)v10 + 1);
  for ( j = (_WORD *)(*v10 + v13 - 2); ; --j )
  {
    if ( (unsigned __int64)j < v13 )
    {
LABEL_30:
      FullPath = LdrpAppendUnicodeStringToFilenameBuffer(a2, &LdrpDefaultExtension);
      goto LABEL_23;
    }
    if ( *j == 46 )
      break;
    if ( *j == 92 || *j == 47 )
      goto LABEL_30;
  }
  v15 = *((_QWORD *)a2 + 1);
  v16 = *a2;
  for ( k = (_WORD *)(v16 + v15 - 2); (unsigned __int64)k >= v15 && *k == 46; --k )
  {
    LOWORD(v16) = v16 - 2;
    *a2 = v16;
  }
  k[1] = 0;
LABEL_23:
  if ( FullPath < 0 )
    goto LABEL_34;
  return (unsigned int)FullPath;
}
