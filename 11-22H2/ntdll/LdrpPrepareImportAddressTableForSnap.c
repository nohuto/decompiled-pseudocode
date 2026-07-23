/*
 * XREFs of LdrpPrepareImportAddressTableForSnap @ 0x18002B440
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x180024BA8 (LdrpMapAndSnapDependency.c)
 *     AVrfpSnapDllImports @ 0x1800E5800 (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x1800E5AB8 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180021B9C (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180024AA0 (RtlImageNtHeaderEx.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x18002BA28 (LdrImageDirectoryEntryToLoadConfig.c)
 *     ZwProtectVirtualMemory @ 0x18009F7F0 (ZwProtectVirtualMemory.c)
 */

NTSTATUS __fastcall LdrpPrepareImportAddressTableForSnap(__int64 a1)
{
  __int64 v1; // rsi
  ULONG_PTR *v2; // rdi
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  bool v6; // zf
  __int64 Config; // rax
  PIMAGE_NT_HEADERS v8; // rcx
  _QWORD *v9; // rax
  void *v10; // rcx
  NTSTATUS result; // eax
  char *v12; // rcx
  char *v13; // rdx
  unsigned int VirtualAddress; // r10d
  unsigned int *v15; // rdx
  unsigned int v16; // r8d
  unsigned int v17; // r9d
  ULONG_PTR v18; // rax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+60h] [rbp+30h] BYREF
  __int64 v20; // [rsp+68h] [rbp+38h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp+40h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp+48h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v2 = (ULONG_PTR *)(a1 + 120);
  v4 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(v1 + 48), 1, 0xCu, (unsigned int *)(a1 + 120), &v20);
  v5 = v20;
  if ( v4 < 0 )
    v5 = 0LL;
  v6 = (*(_DWORD *)(a1 + 32) & 0x800000) == 0;
  v20 = v5;
  *(_QWORD *)(a1 + 112) = v5;
  if ( !v6 )
    return 0;
  RtlImageNtHeaderEx(3u, *(PVOID *)(v1 + 48), 0LL, &OutHeaders);
  Config = LdrImageDirectoryEntryToLoadConfig(*(PVOID *)(v1 + 48));
  if ( !Config || *(_DWORD *)Config < 0x94u )
    goto LABEL_10;
  v8 = OutHeaders;
  if ( (OutHeaders->OptionalHeader.DllCharacteristics & 0x4000) != 0 && (*(_DWORD *)(Config + 144) & 0x100) != 0 )
  {
    v9 = *(_QWORD **)(Config + 112);
    *(_QWORD *)(a1 + 160) = v9;
    if ( v9 )
    {
      *(_QWORD *)(a1 + 152) = *v9;
LABEL_10:
      v8 = OutHeaders;
    }
  }
  if ( !*(_QWORD *)(a1 + 112) )
  {
    VirtualAddress = v8->OptionalHeader.DataDirectory[1].VirtualAddress;
    v15 = (unsigned int *)((char *)&v8->OptionalHeader.Magic + v8->FileHeader.SizeOfOptionalHeader);
    if ( VirtualAddress )
    {
      v16 = 0;
      if ( v8->FileHeader.NumberOfSections )
      {
        while ( 1 )
        {
          v17 = v15[3];
          if ( VirtualAddress >= v17 && VirtualAddress < v17 + v15[4] )
            break;
          ++v16;
          v15 += 10;
          if ( v16 >= v8->FileHeader.NumberOfSections )
            goto LABEL_12;
        }
        *(_QWORD *)(a1 + 112) = *(_QWORD *)(v1 + 48) + v17;
        v18 = v15[2];
        *v2 = v18;
        if ( !v18 )
          *v2 = v15[4];
      }
    }
  }
LABEL_12:
  v10 = *(void **)(a1 + 112);
  if ( v10 && *v2 )
  {
    RegionSize = *v2;
    BaseAddress = v10;
    result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, (PULONG)(a1 + 144));
    if ( result < 0 )
      return result;
    v12 = (char *)BaseAddress;
    v13 = (char *)BaseAddress + RegionSize;
    do
    {
      *(_QWORD *)v12 = *(_QWORD *)v12;
      v12 += 4096;
    }
    while ( v12 < v13 );
  }
  return 0;
}
