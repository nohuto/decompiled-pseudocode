/*
 * XREFs of LdrpResGetMappingSize @ 0x18003F8A0
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180040060 (LdrpSearchResourceSection_U.c)
 *     LdrResSearchResource @ 0x180064700 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x180064E1C (LdrpResSearchResourceMappedFile.c)
 *     LdrResGetRCConfig @ 0x180067050 (LdrResGetRCConfig.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x18003A8EC (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     RtlImageNtHeaderEx @ 0x18003CF10 (RtlImageNtHeaderEx.c)
 *     ZwQueryVirtualMemory @ 0x1800A44D0 (ZwQueryVirtualMemory.c)
 *     LdrpTraceLoadMUIDll @ 0x1800EC820 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpResGetMappingSize(__int64 a1, unsigned __int64 *a2, int a3, char a4)
{
  _DWORD *SharedData; // rcx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 FileSizeFromLoadAsDataTable; // rbx
  bool v14; // r15
  NTSTATUS v15; // ecx
  NTSTATUS VirtualMemory; // eax
  _DWORD *v18; // rcx
  unsigned int v19; // [rsp+30h] [rbp-98h]
  unsigned __int64 SizeOfImage; // [rsp+38h] [rbp-90h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+40h] [rbp-88h] BYREF
  int v22; // [rsp+48h] [rbp-80h] BYREF
  const wchar_t *v23; // [rsp+50h] [rbp-78h]
  int v24; // [rsp+58h] [rbp-70h] BYREF
  const wchar_t *v25; // [rsp+60h] [rbp-68h]
  _BYTE MemoryInformation[16]; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp-50h]
  unsigned __int64 v28; // [rsp+D0h] [rbp+8h]

  v22 = 3670070;
  v23 = L"LdrpResGetMappingSize Enter";
  v24 = 3538996;
  v25 = L"LdrpResGetMappingSize Exit";
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
  {
    v8 = (__int64)NtCurrentPeb()->SharedData + 555;
    v9 = 2147353477LL;
  }
  else
  {
    v9 = 2147353477LL;
    v8 = 2147353477LL;
  }
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    v10 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v11 = 2147353476LL;
    LdrpTraceLoadMUIDll(&v22, *(unsigned __int8 *)v11);
  }
  else
  {
    v10 = 2147353476LL;
  }
  if ( !a1 || !a2 )
    return 3221225485LL;
  v12 = 0LL;
  v28 = 0LL;
  if ( (a3 & 0x80000) != 0 )
  {
    FileSizeFromLoadAsDataTable = *a2;
    v19 = 0;
  }
  else
  {
    if ( (a3 & 0x20000) != 0 )
      v28 = *a2;
    *a2 = 0LL;
    FileSizeFromLoadAsDataTable = 0LL;
    SizeOfImage = 0LL;
    v14 = 0;
    if ( (a3 & 0x100) != 0 )
      v14 = (a1 & 1) == 0;
    v15 = RtlImageNtHeaderEx(1u, (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL), 0LL, &OutHeaders);
    if ( v15 >= 0 )
    {
      if ( OutHeaders->OptionalHeader.Magic == 267 || OutHeaders->OptionalHeader.Magic == 523 )
      {
        SizeOfImage = OutHeaders->OptionalHeader.SizeOfImage;
      }
      else
      {
        SizeOfImage = 0LL;
        v15 = -1073741701;
      }
    }
    if ( v15 < 0 )
      return (unsigned int)v15;
    if ( NtCurrentPeb()->ImageBaseAddress == (void *)a1 && v14 && SizeOfImage )
    {
      FileSizeFromLoadAsDataTable = SizeOfImage;
      v19 = 0;
    }
    else
    {
      if ( !a4 )
        FileSizeFromLoadAsDataTable = LdrpGetFileSizeFromLoadAsDataTable(a1);
      if ( FileSizeFromLoadAsDataTable )
      {
        VirtualMemory = 0;
      }
      else
      {
        VirtualMemory = ZwQueryVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL),
                          MemoryRegionInformation,
                          MemoryInformation,
                          0x30uLL,
                          0LL);
        if ( VirtualMemory >= 0 )
          FileSizeFromLoadAsDataTable = v27;
      }
      v19 = VirtualMemory;
      if ( !FileSizeFromLoadAsDataTable && SizeOfImage )
      {
        FileSizeFromLoadAsDataTable = SizeOfImage;
        VirtualMemory = 0;
        v19 = 0;
      }
      if ( VirtualMemory < 0 )
        goto LABEL_45;
    }
    v12 = v28;
  }
  if ( v12 && v12 < FileSizeFromLoadAsDataTable )
    v19 = -1073741793;
  else
    *a2 = FileSizeFromLoadAsDataTable;
LABEL_45:
  v18 = NtCurrentPeb()->SharedData;
  if ( v18 && *v18 )
    v9 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v9 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(&v24, *(unsigned __int8 *)v10);
  }
  return v19;
}
