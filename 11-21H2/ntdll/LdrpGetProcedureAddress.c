/*
 * XREFs of LdrpGetProcedureAddress @ 0x18003BD10
 * Callers:
 *     LdrpResolveProcedureAddress @ 0x18003B748 (LdrpResolveProcedureAddress.c)
 *     LdrpCorInitialize @ 0x180072FF8 (LdrpCorInitialize.c)
 *     LdrHotPatchNotify @ 0x1800D9A20 (LdrHotPatchNotify.c)
 *     LdrpBuildImportRedirection @ 0x1800E118C (LdrpBuildImportRedirection.c)
 *     LdrpApplyPatchImage @ 0x1800E1480 (LdrpApplyPatchImage.c)
 *     AvrfMiniLoadDll @ 0x1800E6C5C (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlAddressInSectionTable @ 0x180033A60 (RtlAddressInSectionTable.c)
 *     RtlImageNtHeaderEx @ 0x18003CF10 (RtlImageNtHeaderEx.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x1800F5D80 (RtlpImageDirectoryEntryToData32.c)
 */

__int64 __fastcall LdrpGetProcedureAddress(unsigned __int64 a1, const char *a2, int a3, char **a4)
{
  char *v4; // r15
  bool v9; // bl
  unsigned __int64 v10; // rdi
  int v11; // eax
  __int16 v12; // ax
  __int64 v13; // rax
  int v14; // r13d
  int v15; // r10d
  int v16; // r11d
  int v17; // r9d
  const char *v18; // rcx
  signed __int64 v19; // rdx
  unsigned __int8 v20; // al
  int v21; // ecx
  int v22; // eax
  unsigned int v24; // esi
  char *v25; // rdx
  char *v26; // [rsp+40h] [rbp-38h] BYREF
  __int64 v27; // [rsp+80h] [rbp+8h] BYREF

  v4 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  v9 = 1;
  v10 = a1;
  if ( (a1 & 3) != 0 )
  {
    v10 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v9 = (a1 & 1) == 0;
  }
  v11 = RtlImageNtHeaderEx(1LL, v10, 0LL, &v27);
  if ( v27 )
  {
    v12 = *(_WORD *)(v27 + 24);
    if ( v12 != 267 )
    {
      if ( v12 != 523 )
        return 3221225594LL;
      if ( !*(_DWORD *)(v27 + 132) )
        return 3221225594LL;
      v13 = *(unsigned int *)(v27 + 136);
      if ( !(_DWORD)v13 )
        return 3221225594LL;
      v14 = *(_DWORD *)(v27 + 140);
      if ( v9 || (unsigned int)v13 < *(_DWORD *)(v27 + 84) )
      {
        v4 = (char *)(v10 + v13);
      }
      else
      {
        v4 = (char *)RtlAddressInSectionTable();
        if ( !v4 )
          return 3221225594LL;
      }
      goto LABEL_10;
    }
    v11 = RtlpImageDirectoryEntryToData32(v10, v9, 0, (unsigned int)&v27, v27, (__int64)&v26);
    v4 = v26;
  }
  if ( v11 < 0 )
    return 3221225594LL;
  v14 = v27;
LABEL_10:
  if ( !v4 )
    return 3221225594LL;
  if ( a2 )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
      829,
      (unsigned int)"LdrpGetProcedureAddress",
      2,
      "Locating procedure \"%s\" by name\n",
      a2);
    v15 = 0;
    v16 = *((_DWORD *)v4 + 6) - 1;
    v17 = v16 / 2;
    if ( v16 >= 0 )
    {
      while ( 1 )
      {
        v18 = a2;
        v19 = a1 + *(unsigned int *)(a1 + *((unsigned int *)v4 + 8) + 4LL * v17) - (_QWORD)a2;
        while ( 1 )
        {
          v20 = *v18;
          if ( *v18 != v18[v19] )
            break;
          ++v18;
          if ( !v20 )
          {
            v21 = 0;
            goto LABEL_17;
          }
        }
        v21 = v20 < (unsigned int)v18[v19] ? -1 : 1;
LABEL_17:
        if ( !v21 )
          break;
        v22 = v17 - 1;
        if ( v21 >= 0 )
          v22 = v16;
        v16 = v22;
        if ( v21 >= 0 )
          v15 = v17 + 1;
        v17 = (v15 + v22) / 2;
        if ( v22 < v15 )
          goto LABEL_23;
      }
      v24 = *(unsigned __int16 *)(a1 + *((unsigned int *)v4 + 9) + 2LL * v17);
      goto LABEL_26;
    }
LABEL_23:
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
      2203,
      (unsigned int)"LdrpNameToOrdinal",
      1,
      "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
      a2,
      (const void *)a1);
    return 3221225594LL;
  }
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
    847,
    (unsigned int)"LdrpGetProcedureAddress",
    2,
    "Loading procedure 0x%lx by ordinal\n",
    a3);
  if ( !a3 )
    return 3221225485LL;
  v24 = a3 - *((_DWORD *)v4 + 4);
LABEL_26:
  if ( v24 >= *((_DWORD *)v4 + 5) )
  {
    if ( a2 )
      return 3221225785LL;
    else
      return 3221225784LL;
  }
  else
  {
    v25 = (char *)(a1 + *(unsigned int *)(a1 + *((unsigned int *)v4 + 7) + 4LL * (int)v24));
    *a4 = v25;
    if ( v25 < v4 || v25 >= &v4[v14] )
      return 0LL;
    else
      return 3221226029LL;
  }
}
