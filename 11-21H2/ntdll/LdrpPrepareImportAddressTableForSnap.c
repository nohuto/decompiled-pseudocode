/*
 * XREFs of LdrpPrepareImportAddressTableForSnap @ 0x180034354
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x18003D014 (LdrpMapAndSnapDependency.c)
 *     AVrfpSnapDllImports @ 0x1800E6998 (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x1800E6C5C (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180034A60 (LdrImageDirectoryEntryToLoadConfig.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x18003C720 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x18003CF10 (RtlImageNtHeaderEx.c)
 *     ZwProtectVirtualMemory @ 0x1800A4A70 (ZwProtectVirtualMemory.c)
 */

NTSTATUS __fastcall LdrpPrepareImportAddressTableForSnap(__int64 a1)
{
  __int64 v1; // rsi
  ULONG_PTR *v2; // rdi
  int v4; // eax
  __int64 v5; // rcx
  bool v6; // zf
  __int64 Config; // rax
  PIMAGE_NT_HEADERS v8; // rdx
  _QWORD *v9; // rax
  char *v10; // rcx
  NTSTATUS result; // eax
  char *v12; // rcx
  char *v13; // rdx
  unsigned int VirtualAddress; // r10d
  unsigned int *v15; // r8
  unsigned int NumberOfSections; // r11d
  unsigned int v17; // r9d
  unsigned int v18; // edx
  ULONG_PTR v19; // rax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+60h] [rbp+30h] BYREF
  __int64 v21; // [rsp+68h] [rbp+38h] BYREF
  char *v22; // [rsp+70h] [rbp+40h] BYREF
  ULONG_PTR v23; // [rsp+78h] [rbp+48h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v2 = (ULONG_PTR *)(a1 + 120);
  v4 = RtlpImageDirectoryEntryToDataEx(*(PVOID *)(v1 + 48), (PIMAGE_NT_HEADERS)&v21);
  v5 = v21;
  if ( v4 < 0 )
    v5 = 0LL;
  v6 = (*(_DWORD *)(a1 + 32) & 0x800000) == 0;
  v21 = v5;
  *(_QWORD *)(a1 + 112) = v5;
  if ( !v6 )
    return 0;
  RtlImageNtHeaderEx(3u, *(PVOID *)(v1 + 48), 0LL, &OutHeaders);
  Config = LdrImageDirectoryEntryToLoadConfig(*(_QWORD *)(v1 + 48));
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
  v10 = *(char **)(a1 + 112);
  if ( v10 )
    goto LABEL_30;
  VirtualAddress = v8->OptionalHeader.DataDirectory[1].VirtualAddress;
  v15 = (unsigned int *)((char *)&v8->OptionalHeader.Magic + v8->FileHeader.SizeOfOptionalHeader);
  if ( VirtualAddress )
  {
    NumberOfSections = v8->FileHeader.NumberOfSections;
    v17 = 0;
    if ( v8->FileHeader.NumberOfSections )
    {
      while ( 1 )
      {
        v18 = v15[3];
        if ( VirtualAddress >= v18 && VirtualAddress < v18 + v15[4] )
          break;
        ++v17;
        v15 += 10;
        if ( v17 >= NumberOfSections )
          return 0;
      }
      v10 = (char *)(*(_QWORD *)(v1 + 48) + v18);
      *(_QWORD *)(a1 + 112) = v10;
      v19 = v15[2];
      *v2 = v19;
      if ( !v19 )
        *v2 = v15[4];
      if ( v10 )
      {
LABEL_30:
        if ( *v2 )
        {
          v23 = *v2;
          v22 = v10;
          result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&v22, &v23, 4u, (PULONG)(a1 + 144));
          if ( result < 0 )
            return result;
          v12 = v22;
          v13 = &v22[v23];
          do
          {
            *(_QWORD *)v12 = *(_QWORD *)v12;
            v12 += 4096;
          }
          while ( v12 < v13 );
        }
      }
    }
  }
  return 0;
}
