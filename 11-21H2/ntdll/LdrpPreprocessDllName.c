/*
 * XREFs of LdrpPreprocessDllName @ 0x18004494C
 * Callers:
 *     LdrpLoadForwardedDll @ 0x180043614 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDll @ 0x180044E5C (LdrpLoadDll.c)
 *     LdrpFindLoadedDll @ 0x18004F750 (LdrpFindLoadedDll.c)
 *     LdrLoadEnclaveModule @ 0x1800D85B0 (LdrLoadEnclaveModule.c)
 *     LdrpEnclaveAddDependentModule @ 0x1800D8B6C (LdrpEnclaveAddDependentModule.c)
 *     LdrpAddRedirectedFunction @ 0x1800E0E90 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     LdrpApplyFileNameRedirection @ 0x180044B54 (LdrpApplyFileNameRedirection.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180044FE8 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180047984 (RtlDetermineDosPathNameType_Ustr.c)
 *     LdrpGetFullPath @ 0x180050F20 (LdrpGetFullPath.c)
 */

__int64 __fastcall LdrpPreprocessDllName(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3, int *a4)
{
  bool v5; // zf
  int FullPath; // edi
  char v9; // bp
  unsigned __int16 *v10; // r15
  unsigned __int64 v11; // rdx
  _WORD *i; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  _WORD *j; // rcx
  unsigned __int64 v17; // rdx
  _WORD *k; // rcx
  const char *v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // [rsp+30h] [rbp-38h]
  char v24; // [rsp+88h] [rbp+20h] BYREF

  v5 = (*a4 & 0x800008) == 0;
  v24 = 0;
  FullPath = 0;
  v9 = 0;
  if ( v5 )
  {
    FullPath = LdrpApplyFileNameRedirection(a3, a1, a3, a2, &v24);
    if ( FullPath < 0 )
      goto LABEL_33;
    v9 = v24;
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
          FullPath = LdrpGetFullPath(v22, a2);
          if ( FullPath >= 0 )
          {
            *a4 |= 0x600u;
            goto LABEL_13;
          }
LABEL_33:
          LODWORD(v23) = FullPath;
          LdrpLogInternal(
            (unsigned int)"minkernel\\ntdll\\ldrutil.c",
            2737,
            (__int64)"LdrpPreprocessDllName",
            0,
            "LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
            a1,
            v23);
          return (unsigned int)FullPath;
        }
LABEL_11:
        FullPath = LdrpAppendUnicodeStringToFilenameBuffer(a2, a1, a3, a4);
        goto LABEL_12;
      }
    }
    *a4 |= 0x20u;
    goto LABEL_11;
  }
  v20 = "SxS";
  if ( !v9 )
    v20 = "API set";
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrutil.c",
    2679,
    (__int64)"LdrpPreprocessDllName",
    2u,
    "DLL %wZ was redirected to %wZ by %s\n",
    a1,
    a2,
    v20);
  v21 = *a4 | 0x200;
  *a4 = v21;
  if ( v9 )
    *a4 = v21 | 4;
  v10 = a2;
LABEL_12:
  if ( FullPath < 0 )
    goto LABEL_33;
LABEL_13:
  v15 = *((_QWORD *)v10 + 1);
  for ( j = (_WORD *)(*v10 + v15 - 2); (unsigned __int64)j >= v15; --j )
  {
    if ( *j == 46 )
    {
      v17 = *((_QWORD *)a2 + 1);
      for ( k = (_WORD *)(*a2 + v17 - 2); (unsigned __int64)k >= v17 && *k == 46; --k )
        *a2 -= 2;
      k[1] = 0;
      return (unsigned int)FullPath;
    }
    if ( *j == 92 || *j == 47 )
      break;
  }
  FullPath = LdrpAppendUnicodeStringToFilenameBuffer(a2, &LdrpDefaultExtension, v13, v14);
  if ( FullPath < 0 )
    goto LABEL_33;
  return (unsigned int)FullPath;
}
