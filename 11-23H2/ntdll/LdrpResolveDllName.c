/*
 * XREFs of LdrpResolveDllName @ 0x18002A874
 * Callers:
 *     LdrpMapDllFullPath @ 0x180011480 (LdrpMapDllFullPath.c)
 *     LdrpAppCompatRedirect @ 0x1800115C8 (LdrpAppCompatRedirect.c)
 *     LdrpFindLoadedDllInternal @ 0x18002AECC (LdrpFindLoadedDllInternal.c)
 *     LdrpSearchPath @ 0x18002DEA4 (LdrpSearchPath.c)
 * Callees:
 *     LdrpFreeUnicodeString @ 0x180011138 (LdrpFreeUnicodeString.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180019B28 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     LdrpGetBaseNameFromFullName @ 0x180029F48 (LdrpGetBaseNameFromFullName.c)
 *     LdrpGetNtPathFromDosPath @ 0x18002B124 (LdrpGetNtPathFromDosPath.c)
 *     LdrpAllocateUnicodeString @ 0x18002B200 (LdrpAllocateUnicodeString.c)
 *     LdrpGetFullPath @ 0x18002DDA0 (LdrpGetFullPath.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall LdrpResolveDllName(const void **a1, __int64 a2, __int64 a3, _OWORD *a4, int a5)
{
  __int64 v6; // r14
  bool v9; // si
  int FullPath; // ebx
  _WORD *v11; // rax
  bool v12; // zf
  __int64 v13; // r14
  const void *v14; // r15
  int appended; // eax
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  void *Src[2]; // [rsp+30h] [rbp-38h] BYREF

  v6 = a3;
  v9 = 0;
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrfind.c",
    1721,
    (__int64)"LdrpResolveDllName",
    3u,
    "DLL name: %wZ\n",
    a1);
  if ( (a5 & 0x200) != 0 )
  {
    *(_OWORD *)Src = *(_OWORD *)a1;
  }
  else
  {
    FullPath = LdrpGetFullPath(a1, a2);
    if ( FullPath < 0 )
      goto LABEL_15;
    v11 = (_WORD *)(a2 + 16);
    v12 = a2 + 16 == *(_QWORD *)(a2 + 8);
    *(_OWORD *)Src = *(_OWORD *)a2;
    v9 = !v12;
    if ( !v12 )
    {
      *(_QWORD *)(a2 + 8) = v11;
      *(_WORD *)(a2 + 2) = 256;
      *v11 = 0;
      goto LABEL_6;
    }
  }
  v13 = LOWORD(Src[0]);
  v14 = Src[1];
  FullPath = LdrpAllocateUnicodeString(Src, LOWORD(Src[0]));
  if ( FullPath < 0 )
    goto LABEL_15;
  v9 = 1;
  memmove(Src[1], v14, v13 + 2);
  LOWORD(Src[0]) = v13;
  v6 = a3;
LABEL_6:
  *(_WORD *)a2 = 0;
  if ( (a5 & 0x10000000) != 0 )
    appended = LdrpAppendUnicodeStringToFilenameBuffer((unsigned __int16 *)a2, a1);
  else
    appended = LdrpGetNtPathFromDosPath(Src, a2);
  FullPath = appended;
  if ( appended >= 0 )
  {
    *a4 = *(_OWORD *)Src;
    LdrpGetBaseNameFromFullName((__int64)Src, v6);
    goto LABEL_10;
  }
  v17 = (unsigned int)(appended + 1073741809);
  if ( (unsigned int)v17 <= 0x2C && (v18 = 0x1C3000000011LL, _bittest64(&v18, v17))
    || FullPath == -2147483632
    || FullPath == -1073741661 )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1837,
      (__int64)"LdrpResolveDllName",
      2u,
      "Original status: 0x%08lx\n",
      FullPath);
    FullPath = -1073741515;
  }
LABEL_15:
  if ( v9 )
    LdrpFreeUnicodeString((__int64)Src);
LABEL_10:
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrfind.c",
    1858,
    (__int64)"LdrpResolveDllName",
    4u,
    "Status: 0x%08lx\n",
    FullPath);
  return (unsigned int)FullPath;
}
