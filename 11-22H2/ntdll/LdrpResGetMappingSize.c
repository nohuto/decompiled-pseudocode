/*
 * XREFs of LdrpResGetMappingSize @ 0x180022810
 * Callers:
 *     LdrResSearchResource @ 0x180005220 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x18000555C (LdrpResSearchResourceMappedFile.c)
 *     LdrResGetRCConfig @ 0x1800077D0 (LdrResGetRCConfig.c)
 *     LdrpSearchResourceSection_U @ 0x180027340 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180024AA0 (RtlImageNtHeaderEx.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x1800270A0 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     ZwQueryVirtualMemory @ 0x18009F250 (ZwQueryVirtualMemory.c)
 *     LdrpTraceLoadMUIDll @ 0x1800EC0E8 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpResGetMappingSize(unsigned __int64 a1, unsigned __int64 *a2, int a3, char a4)
{
  _DWORD *SharedData; // rcx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned __int64 v11; // r14
  unsigned __int64 FileSizeFromLoadAsDataTable; // rbx
  NTSTATUS v13; // ecx
  NTSTATUS VirtualMemory; // eax
  _DWORD *v15; // rcx
  __int64 v17; // rcx
  unsigned int v18; // [rsp+30h] [rbp-98h]
  unsigned __int64 SizeOfImage; // [rsp+38h] [rbp-90h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+40h] [rbp-88h] BYREF
  int v21; // [rsp+48h] [rbp-80h] BYREF
  const wchar_t *v22; // [rsp+50h] [rbp-78h]
  int v23; // [rsp+58h] [rbp-70h] BYREF
  const wchar_t *v24; // [rsp+60h] [rbp-68h]
  _BYTE MemoryInformation[16]; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v26; // [rsp+78h] [rbp-50h]

  v21 = 3670070;
  v22 = L"LdrpResGetMappingSize Enter";
  v23 = 3538996;
  v24 = L"LdrpResGetMappingSize Exit";
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
  {
    v9 = (__int64)NtCurrentPeb()->SharedData + 555;
    v8 = 2147353477LL;
  }
  else
  {
    v8 = 2147353477LL;
    v9 = 2147353477LL;
  }
  if ( (*(_BYTE *)v9 & 1) != 0 )
  {
    v10 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v17 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v17 = 2147353476LL;
    LdrpTraceLoadMUIDll(&v21, *(unsigned __int8 *)v17);
  }
  else
  {
    v10 = 2147353476LL;
  }
  if ( !a1 || !a2 )
    return 3221225485LL;
  v11 = 0LL;
  if ( (a3 & 0x20000) != 0 )
    v11 = *a2;
  *a2 = 0LL;
  FileSizeFromLoadAsDataTable = 0LL;
  SizeOfImage = 0LL;
  v13 = RtlImageNtHeaderEx(1u, (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL), 0LL, &OutHeaders);
  if ( v13 >= 0 )
  {
    if ( OutHeaders->OptionalHeader.Magic == 267 || OutHeaders->OptionalHeader.Magic == 523 )
    {
      SizeOfImage = OutHeaders->OptionalHeader.SizeOfImage;
    }
    else
    {
      SizeOfImage = 0LL;
      v13 = -1073741701;
    }
  }
  if ( v13 < 0 )
    return (unsigned int)v13;
  if ( NtCurrentPeb()->ImageBaseAddress == (void *)a1 && (a3 & 0x100) != 0 && (a1 & 1) == 0 && SizeOfImage )
  {
    FileSizeFromLoadAsDataTable = SizeOfImage;
    v18 = 0;
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
        FileSizeFromLoadAsDataTable = v26;
    }
    v18 = VirtualMemory;
    if ( !FileSizeFromLoadAsDataTable && SizeOfImage )
    {
      FileSizeFromLoadAsDataTable = SizeOfImage;
      VirtualMemory = 0;
      v18 = 0;
    }
    if ( VirtualMemory < 0 )
      goto LABEL_25;
  }
  if ( v11 && v11 < FileSizeFromLoadAsDataTable )
    v18 = -1073741793;
  else
    *a2 = FileSizeFromLoadAsDataTable;
LABEL_25:
  v15 = NtCurrentPeb()->SharedData;
  if ( v15 && *v15 )
    v8 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(&v23, *(unsigned __int8 *)v10);
  }
  return v18;
}
