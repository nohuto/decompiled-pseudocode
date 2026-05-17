/*
 * XREFs of LdrpResolveDllName @ 0x18004F58C
 * Callers:
 *     LdrpFindLoadedDllInternal @ 0x18004F834 (LdrpFindLoadedDllInternal.c)
 *     LdrpSearchPath @ 0x1800501B4 (LdrpSearchPath.c)
 *     LdrpMapDllFullPath @ 0x18005133C (LdrpMapDllFullPath.c)
 *     LdrpAppCompatRedirect @ 0x180051484 (LdrpAppCompatRedirect.c)
 * Callees:
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     LdrpGetBaseNameFromFullName @ 0x180042D7C (LdrpGetBaseNameFromFullName.c)
 *     LdrpGetNtPathFromDosPath @ 0x18004F9CC (LdrpGetNtPathFromDosPath.c)
 *     LdrpAllocateUnicodeString @ 0x18004FAEC (LdrpAllocateUnicodeString.c)
 *     LdrpGetFullPath @ 0x180050F20 (LdrpGetFullPath.c)
 *     LdrpFreeUnicodeString @ 0x180051B14 (LdrpFreeUnicodeString.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall LdrpResolveDllName(_OWORD *a1, __int64 a2, __int64 a3, _OWORD *a4, __int16 a5)
{
  __int64 v9; // rsi
  const void *v10; // rbp
  int UnicodeString; // ebx
  int NtPathFromDosPath; // eax
  _WORD *v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  void *Src[2]; // [rsp+30h] [rbp-28h] BYREF

  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrfind.c",
    1717,
    (__int64)"LdrpResolveDllName",
    3u,
    "DLL name: %wZ\n",
    a1);
  if ( (a5 & 0x200) != 0 )
  {
    *(_OWORD *)Src = *a1;
LABEL_3:
    v9 = LOWORD(Src[0]);
    v10 = Src[1];
    UnicodeString = LdrpAllocateUnicodeString(Src, LOWORD(Src[0]));
    if ( UnicodeString < 0 )
    {
      *(_WORD *)a2 = 0;
      goto LABEL_7;
    }
    memmove(Src[1], v10, v9 + 2);
    LOWORD(Src[0]) = v9;
    goto LABEL_5;
  }
  UnicodeString = LdrpGetFullPath(a1, a2);
  *(_OWORD *)Src = *(_OWORD *)a2;
  if ( UnicodeString < 0 )
    goto LABEL_7;
  if ( (a5 & 0x200) != 0 )
    goto LABEL_3;
  v14 = (_WORD *)(a2 + 16);
  if ( a2 + 16 == *(_QWORD *)(a2 + 8) )
    goto LABEL_3;
  *(_QWORD *)(a2 + 8) = v14;
  *(_WORD *)(a2 + 2) = 256;
  *v14 = 0;
LABEL_5:
  *(_WORD *)a2 = 0;
  NtPathFromDosPath = LdrpGetNtPathFromDosPath(Src, a2);
  UnicodeString = NtPathFromDosPath;
  if ( NtPathFromDosPath < 0 )
  {
    v15 = (unsigned int)(NtPathFromDosPath + 1073741809);
    if ( (unsigned int)v15 <= 0x2C && (v16 = 0x1C3000000011LL, _bittest64(&v16, v15))
      || UnicodeString == -2147483632
      || UnicodeString == -1073741661 )
    {
      UnicodeString = -1073741515;
    }
    LdrpFreeUnicodeString(Src);
  }
  else
  {
    *a4 = *(_OWORD *)Src;
    LdrpGetBaseNameFromFullName((unsigned __int16 *)Src, a3);
  }
LABEL_7:
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrfind.c",
    1813,
    (__int64)"LdrpResolveDllName",
    4u,
    "Status: 0x%08lx\n",
    UnicodeString);
  return (unsigned int)UnicodeString;
}
