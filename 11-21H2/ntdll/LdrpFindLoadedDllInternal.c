/*
 * XREFs of LdrpFindLoadedDllInternal @ 0x18004F834
 * Callers:
 *     LdrpFindLoadedDll @ 0x18004F750 (LdrpFindLoadedDll.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     LdrpFindLoadedDllByName @ 0x180041240 (LdrpFindLoadedDllByName.c)
 *     LdrpResolveDllName @ 0x18004F58C (LdrpResolveDllName.c)
 *     LdrpSearchPath @ 0x1800501B4 (LdrpSearchPath.c)
 *     LdrpFreeUnicodeString @ 0x180051B14 (LdrpFreeUnicodeString.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x180053C60 (LdrpFindLoadedDllByMappingFile.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpFindLoadedDllInternal(unsigned __int16 *a1, int a2, _QWORD *a3, _DWORD *a4, unsigned int a5)
{
  int LoadedDllByName; // ebx
  int v11; // eax
  __int128 v12; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v13[8]; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+70h] [rbp-90h] BYREF
  _WORD *v15; // [rsp+78h] [rbp-88h]
  _WORD v16[128]; // [rsp+80h] [rbp-80h] BYREF

  *a3 = 0LL;
  if ( (a5 & 0x20) != 0 )
  {
    LoadedDllByName = LdrpFindLoadedDllByName(a1, 0LL, a5, (__int64)a3, a4);
  }
  else if ( (a5 & 0x200) == 0
         || (LoadedDllByName = LdrpFindLoadedDllByName(0LL, (__int64)a1, a5, (__int64)a3, a4), LoadedDllByName < 0) )
  {
    v14 = 0x1000000;
    v15 = v16;
    v16[0] = 0;
    v12 = 0LL;
    if ( (a5 & 0x200) != 0 )
      v11 = LdrpResolveDllName(a1, (__int64)&v14, (__int64)v13, &v12, a5);
    else
      v11 = LdrpSearchPath((_DWORD)a1, a2, 0, 0, (__int64)&v14, (__int64)v13, (__int64)&v12, 0LL, 0LL);
    LoadedDllByName = v11;
    if ( v11 >= 0 )
    {
      LoadedDllByName = LdrpFindLoadedDllByName(v13, (__int64)&v12, a5, (__int64)a3, a4);
      if ( LoadedDllByName == -1073741515 )
        LoadedDllByName = LdrpFindLoadedDllByMappingFile(&v14, a3, a4);
    }
    LdrpFreeUnicodeString(&v12);
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
