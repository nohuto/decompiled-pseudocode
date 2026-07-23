/*
 * XREFs of LdrpFindLoadedDllInternal @ 0x18002B09C
 * Callers:
 *     LdrpFindLoadedDll @ 0x180016374 (LdrpFindLoadedDll.c)
 * Callees:
 *     LdrpFreeUnicodeString @ 0x180011348 (LdrpFreeUnicodeString.c)
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     LdrpFindLoadedDllByName @ 0x180029C10 (LdrpFindLoadedDllByName.c)
 *     LdrpResolveDllName @ 0x18002AA44 (LdrpResolveDllName.c)
 *     LdrpSearchPath @ 0x18002E074 (LdrpSearchPath.c)
 *     NtdllpFreeStringRoutine @ 0x1800397A0 (NtdllpFreeStringRoutine.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18007D47C (LdrpFindLoadedDllByMappingFile.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpFindLoadedDllInternal(PUNICODE_STRING a1, int a2, _QWORD *a3, _DWORD *a4, int a5)
{
  int LoadedDllByName; // ebx
  int v11; // eax
  _UNICODE_STRING v12; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING String1; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+70h] [rbp-90h] BYREF
  _WORD *v15; // [rsp+78h] [rbp-88h]
  _WORD v16[128]; // [rsp+80h] [rbp-80h] BYREF

  *a3 = 0LL;
  if ( (a5 & 0x20) != 0 )
  {
    LoadedDllByName = LdrpFindLoadedDllByName(a1, 0LL, a5, (__int64)a3, a4);
  }
  else if ( (a5 & 0x200) == 0
         || (LoadedDllByName = LdrpFindLoadedDllByName(0LL, a1, a5, (__int64)a3, a4), LoadedDllByName < 0) )
  {
    v14 = 0x1000000;
    v15 = v16;
    v16[0] = 0;
    v12 = 0LL;
    if ( (a5 & 0x200) != 0 )
      v11 = LdrpResolveDllName((const void **)a1, (__int64)&v14, (__int64)&String1, &v12, a5);
    else
      v11 = LdrpSearchPath((_DWORD)a1, a2, 0, 0, (__int64)&v14, (__int64)&String1, (__int64)&v12, 0LL, 0LL);
    LoadedDllByName = v11;
    if ( v11 >= 0 )
    {
      LoadedDllByName = LdrpFindLoadedDllByName(&String1, &v12, a5, (__int64)a3, a4);
      if ( LoadedDllByName == -1073741515 )
        LoadedDllByName = LdrpFindLoadedDllByMappingFile(&v14, a3, a4);
    }
    LdrpFreeUnicodeString((__int64)&v12);
    if ( v16 != v15 )
      NtdllpFreeStringRoutine(v15);
    v14 = 0x1000000;
    v15 = v16;
    v16[0] = 0;
  }
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrfind.c",
    480,
    (__int64)"LdrpFindLoadedDllInternal",
    4u,
    "Status: 0x%08lx\n",
    LoadedDllByName);
  return (unsigned int)LoadedDllByName;
}
