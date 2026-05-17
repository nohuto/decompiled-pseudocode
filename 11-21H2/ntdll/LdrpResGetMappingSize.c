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
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // r8
  __int64 v18; // r9
  int VirtualMemory; // eax
  _DWORD *v21; // rcx
  unsigned int v22; // [rsp+30h] [rbp-98h]
  unsigned __int64 v23; // [rsp+38h] [rbp-90h]
  __int64 v24; // [rsp+40h] [rbp-88h] BYREF
  int v25; // [rsp+48h] [rbp-80h] BYREF
  const wchar_t *v26; // [rsp+50h] [rbp-78h]
  int v27; // [rsp+58h] [rbp-70h] BYREF
  const wchar_t *v28; // [rsp+60h] [rbp-68h]
  _BYTE v29[16]; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v30; // [rsp+78h] [rbp-50h]
  unsigned __int64 v31; // [rsp+D0h] [rbp+8h]

  v25 = 3670070;
  v26 = L"LdrpResGetMappingSize Enter";
  v27 = 3538996;
  v28 = L"LdrpResGetMappingSize Exit";
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
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v11 = 2147353476LL;
    LdrpTraceLoadMUIDll(&v25, *(unsigned __int8 *)v11);
  }
  else
  {
    v10 = 2147353476LL;
  }
  if ( !a1 || !a2 )
    return 3221225485LL;
  v12 = 0LL;
  v31 = 0LL;
  if ( (a3 & 0x80000) != 0 )
  {
    FileSizeFromLoadAsDataTable = *a2;
    v22 = 0;
  }
  else
  {
    if ( (a3 & 0x20000) != 0 )
      v31 = *a2;
    *a2 = 0LL;
    FileSizeFromLoadAsDataTable = 0LL;
    v23 = 0LL;
    v14 = 0;
    if ( (a3 & 0x100) != 0 )
      v14 = (a1 & 1) == 0;
    v16 = RtlImageNtHeaderEx(1, a1 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, &v24);
    if ( v16 >= 0 )
    {
      v15 = 267LL;
      if ( *(_WORD *)(v24 + 24) == 267 || (v15 = 523LL, *(_WORD *)(v24 + 24) == 523) )
      {
        v23 = *(unsigned int *)(v24 + 80);
      }
      else
      {
        v23 = 0LL;
        v16 = -1073741701;
      }
    }
    if ( v16 < 0 )
      return (unsigned int)v16;
    if ( NtCurrentPeb()->ImageBaseAddress == (void *)a1 && v14 && v23 )
    {
      FileSizeFromLoadAsDataTable = v23;
      v22 = 0;
    }
    else
    {
      if ( !a4 )
        FileSizeFromLoadAsDataTable = LdrpGetFileSizeFromLoadAsDataTable(a1, v15, v17, v18);
      if ( FileSizeFromLoadAsDataTable )
      {
        VirtualMemory = 0;
      }
      else
      {
        VirtualMemory = ZwQueryVirtualMemory(-1LL, a1 & 0xFFFFFFFFFFFFFFFCuLL, 3LL, v29, 48LL, 0LL);
        if ( VirtualMemory >= 0 )
          FileSizeFromLoadAsDataTable = v30;
      }
      v22 = VirtualMemory;
      if ( !FileSizeFromLoadAsDataTable && v23 )
      {
        FileSizeFromLoadAsDataTable = v23;
        VirtualMemory = 0;
        v22 = 0;
      }
      if ( VirtualMemory < 0 )
        goto LABEL_45;
    }
    v12 = v31;
  }
  if ( v12 && v12 < FileSizeFromLoadAsDataTable )
    v22 = -1073741793;
  else
    *a2 = FileSizeFromLoadAsDataTable;
LABEL_45:
  v21 = NtCurrentPeb()->SharedData;
  if ( v21 && *v21 )
    v9 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v9 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(&v27, *(unsigned __int8 *)v10);
  }
  return v22;
}
