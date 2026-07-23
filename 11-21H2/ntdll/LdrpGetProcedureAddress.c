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

__int64 __fastcall LdrpGetProcedureAddress(unsigned __int64 BaseOfImage, const char *a2, int a3, char **a4)
{
  char *v4; // r15
  bool v9; // bl
  char *v10; // rdi
  NTSTATUS v11; // eax
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rax
  unsigned int Size; // r13d
  int v15; // r10d
  int v16; // r11d
  int v17; // r9d
  const char *v18; // rcx
  char *v19; // rdx
  unsigned __int8 v20; // al
  int v21; // ecx
  int v22; // eax
  unsigned int v24; // esi
  char *v25; // rdx
  __int64 v26; // [rsp+40h] [rbp-38h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+80h] [rbp+8h] BYREF

  v4 = 0LL;
  OutHeaders = 0LL;
  v26 = 0LL;
  v9 = 1;
  v10 = (char *)BaseOfImage;
  if ( (BaseOfImage & 3) != 0 )
  {
    v10 = (char *)(BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
    v9 = (BaseOfImage & 1) == 0;
  }
  v11 = RtlImageNtHeaderEx(1u, v10, 0LL, &OutHeaders);
  if ( OutHeaders )
  {
    Magic = OutHeaders->OptionalHeader.Magic;
    if ( Magic != 267 )
    {
      if ( Magic != 523 )
        return 3221225594LL;
      if ( !OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
        return 3221225594LL;
      VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
      if ( !(_DWORD)VirtualAddress )
        return 3221225594LL;
      Size = OutHeaders->OptionalHeader.DataDirectory[0].Size;
      if ( v9 || (unsigned int)VirtualAddress < OutHeaders->OptionalHeader.SizeOfHeaders )
      {
        v4 = &v10[VirtualAddress];
      }
      else
      {
        v4 = (char *)RtlAddressInSectionTable(OutHeaders, v10, VirtualAddress);
        if ( !v4 )
          return 3221225594LL;
      }
      goto LABEL_10;
    }
    v11 = RtlpImageDirectoryEntryToData32(v10, OutHeaders, (__int64)&v26);
    v4 = (char *)v26;
  }
  if ( v11 < 0 )
    return 3221225594LL;
  Size = (unsigned int)OutHeaders;
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
        v19 = (char *)(BaseOfImage + *(unsigned int *)(BaseOfImage + *((unsigned int *)v4 + 8) + 4LL * v17) - (_QWORD)a2);
        while ( 1 )
        {
          v20 = *v18;
          if ( *v18 != v19[(_QWORD)v18] )
            break;
          ++v18;
          if ( !v20 )
          {
            v21 = 0;
            goto LABEL_17;
          }
        }
        v21 = v20 < (unsigned int)v19[(_QWORD)v18] ? -1 : 1;
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
      v24 = *(unsigned __int16 *)(BaseOfImage + *((unsigned int *)v4 + 9) + 2LL * v17);
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
      (const void *)BaseOfImage);
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
    v25 = (char *)(BaseOfImage + *(unsigned int *)(BaseOfImage + *((unsigned int *)v4 + 7) + 4LL * (int)v24));
    *a4 = v25;
    if ( v25 < v4 || v25 >= &v4[Size] )
      return 0LL;
    else
      return 3221226029LL;
  }
}
