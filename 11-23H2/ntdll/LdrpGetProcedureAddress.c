/*
 * XREFs of LdrpGetProcedureAddress @ 0x180022CD0
 * Callers:
 *     LdrpResolveProcedureAddress @ 0x180022920 (LdrpResolveProcedureAddress.c)
 *     LdrpCorInitialize @ 0x18008E254 (LdrpCorInitialize.c)
 *     LdrHotPatchNotify @ 0x1800D9440 (LdrHotPatchNotify.c)
 *     LdrpBuildImportRedirection @ 0x1800E0CC0 (LdrpBuildImportRedirection.c)
 *     LdrpApplyPatchImage @ 0x1800E0FB4 (LdrpApplyPatchImage.c)
 *     AvrfMiniLoadDll @ 0x1800E6DE8 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180024950 (RtlImageNtHeaderEx.c)
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     RtlAddressInSectionTable @ 0x18002B0F0 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall LdrpGetProcedureAddress(unsigned __int64 BaseOfImage, const char *a2, int a3, char **a4)
{
  char *v4; // rsi
  bool v9; // bl
  char *v10; // rdi
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rdx
  int v13; // eax
  char *v14; // rbx
  int v15; // r10d
  int v16; // r11d
  int v17; // r9d
  const char *v18; // rcx
  char *v19; // rdx
  unsigned __int8 v20; // al
  int v21; // ecx
  int v22; // eax
  unsigned int v24; // ebp
  char *v25; // rcx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+40h] [rbp-38h] BYREF
  unsigned int Size; // [rsp+80h] [rbp+8h]

  v4 = 0LL;
  OutHeaders = 0LL;
  v9 = 1;
  v10 = (char *)BaseOfImage;
  if ( (BaseOfImage & 3) != 0 )
  {
    v10 = (char *)(BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
    v9 = (BaseOfImage & 1) == 0;
  }
  RtlImageNtHeaderEx(1u, v10, 0LL, &OutHeaders);
  if ( !OutHeaders )
    return 3221225594LL;
  Magic = OutHeaders->OptionalHeader.Magic;
  if ( Magic != 267 )
  {
    if ( Magic == 523 && OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
    {
      VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
      if ( !(_DWORD)VirtualAddress )
      {
        v13 = -1073741822;
        goto LABEL_10;
      }
      Size = OutHeaders->OptionalHeader.DataDirectory[0].Size;
      if ( !v9 && (unsigned int)VirtualAddress >= OutHeaders->OptionalHeader.SizeOfHeaders )
      {
        v4 = (char *)RtlAddressInSectionTable(OutHeaders, v10, VirtualAddress);
        v13 = 0;
        if ( !v4 )
          v13 = -1073741811;
        goto LABEL_10;
      }
LABEL_9:
      v4 = &v10[VirtualAddress];
      v13 = 0;
      goto LABEL_10;
    }
LABEL_51:
    v13 = -1073741811;
    goto LABEL_10;
  }
  if ( !HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapReserve) )
    goto LABEL_51;
  VirtualAddress = LODWORD(OutHeaders->OptionalHeader.SizeOfHeapCommit);
  if ( !(_DWORD)VirtualAddress )
  {
    v13 = -1073741822;
    goto LABEL_10;
  }
  Size = HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapCommit);
  if ( v9 || (unsigned int)VirtualAddress < OutHeaders->OptionalHeader.SizeOfHeaders )
    goto LABEL_9;
  v4 = (char *)RtlAddressInSectionTable(OutHeaders, v10, VirtualAddress);
  v13 = 0;
  if ( !v4 )
    v13 = -1073741811;
LABEL_10:
  v14 = 0LL;
  if ( v13 >= 0 )
    v14 = v4;
  if ( !v14 )
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
    v16 = *((_DWORD *)v14 + 6) - 1;
    v17 = v16 / 2;
    if ( v16 >= 0 )
    {
      while ( 1 )
      {
        v18 = a2;
        v19 = (char *)(BaseOfImage + *(unsigned int *)(BaseOfImage + *((unsigned int *)v14 + 8) + 4LL * v17) - (_QWORD)a2);
        while ( 1 )
        {
          v20 = *v18;
          if ( *v18 != v19[(_QWORD)v18] )
            break;
          ++v18;
          if ( !v20 )
          {
            v21 = 0;
            goto LABEL_19;
          }
        }
        v21 = v20 < (unsigned int)v19[(_QWORD)v18] ? -1 : 1;
LABEL_19:
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
          goto LABEL_25;
      }
      v24 = *(unsigned __int16 *)(BaseOfImage + *((unsigned int *)v14 + 9) + 2LL * v17);
      goto LABEL_28;
    }
LABEL_25:
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
      2192,
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
  v24 = a3 - *((_DWORD *)v14 + 4);
LABEL_28:
  if ( v24 >= *((_DWORD *)v14 + 5) )
  {
    if ( a2 )
      return 3221225785LL;
    else
      return 3221225784LL;
  }
  else
  {
    v25 = (char *)(BaseOfImage + *(unsigned int *)(BaseOfImage + *((unsigned int *)v14 + 7) + 4LL * (int)v24));
    *a4 = v25;
    if ( v25 >= v14 )
      return v25 < &v14[Size] ? 0xC000022D : 0;
    else
      return 0LL;
  }
}
