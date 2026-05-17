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

__int64 __fastcall LdrpResGetMappingSize(unsigned __int64 a1, unsigned __int64 *a2, __int64 a3, __int64 a4)
{
  int v4; // r12d
  _DWORD *SharedData; // rcx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned __int64 v11; // r14
  unsigned __int64 FileSizeFromLoadAsDataTable; // rbx
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // r8
  __int64 v16; // r9
  int VirtualMemory; // eax
  _DWORD *v18; // rcx
  __int64 v20; // rcx
  unsigned int v21; // [rsp+30h] [rbp-98h]
  unsigned __int64 v22; // [rsp+38h] [rbp-90h]
  __int64 v23; // [rsp+40h] [rbp-88h] BYREF
  int v24; // [rsp+48h] [rbp-80h] BYREF
  const wchar_t *v25; // [rsp+50h] [rbp-78h]
  int v26; // [rsp+58h] [rbp-70h] BYREF
  const wchar_t *v27; // [rsp+60h] [rbp-68h]
  _BYTE v28[16]; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v29; // [rsp+78h] [rbp-50h]
  char v30; // [rsp+E8h] [rbp+20h]

  v30 = a4;
  v4 = a3;
  v24 = 3670070;
  v25 = L"LdrpResGetMappingSize Enter";
  v26 = 3538996;
  v27 = L"LdrpResGetMappingSize Exit";
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
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v9, a2, a3, a4) )
      v20 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v20 = 2147353476LL;
    LdrpTraceLoadMUIDll(&v24, *(unsigned __int8 *)v20);
  }
  else
  {
    v10 = 2147353476LL;
  }
  if ( !a1 || !a2 )
    return 3221225485LL;
  v11 = 0LL;
  if ( (v4 & 0x20000) != 0 )
    v11 = *a2;
  *a2 = 0LL;
  FileSizeFromLoadAsDataTable = 0LL;
  v22 = 0LL;
  v14 = RtlImageNtHeaderEx(1LL, a1 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, &v23);
  if ( v14 >= 0 )
  {
    v13 = 267LL;
    if ( *(_WORD *)(v23 + 24) == 267 || (v13 = 523LL, *(_WORD *)(v23 + 24) == 523) )
    {
      v22 = *(unsigned int *)(v23 + 80);
    }
    else
    {
      v22 = 0LL;
      v14 = -1073741701;
    }
  }
  if ( v14 < 0 )
    return (unsigned int)v14;
  if ( NtCurrentPeb()->ImageBaseAddress == (void *)a1 && (v4 & 0x100) != 0 && (a1 & 1) == 0 && v22 )
  {
    FileSizeFromLoadAsDataTable = v22;
    v21 = 0;
  }
  else
  {
    if ( !v30 )
      FileSizeFromLoadAsDataTable = LdrpGetFileSizeFromLoadAsDataTable(a1);
    if ( FileSizeFromLoadAsDataTable )
    {
      VirtualMemory = 0;
    }
    else
    {
      VirtualMemory = ZwQueryVirtualMemory(-1LL, a1 & 0xFFFFFFFFFFFFFFFCuLL, 3LL, v28, 48LL, 0LL);
      if ( VirtualMemory >= 0 )
        FileSizeFromLoadAsDataTable = v29;
    }
    v21 = VirtualMemory;
    if ( !FileSizeFromLoadAsDataTable && v22 )
    {
      FileSizeFromLoadAsDataTable = v22;
      VirtualMemory = 0;
      v21 = 0;
    }
    if ( VirtualMemory < 0 )
      goto LABEL_25;
  }
  if ( v11 && v11 < FileSizeFromLoadAsDataTable )
    v21 = -1073741793;
  else
    *a2 = FileSizeFromLoadAsDataTable;
LABEL_25:
  v18 = NtCurrentPeb()->SharedData;
  if ( v18 && *v18 )
    v8 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v18, v13, v15, v16) )
      v10 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(&v26, *(unsigned __int8 *)v10);
  }
  return v21;
}
