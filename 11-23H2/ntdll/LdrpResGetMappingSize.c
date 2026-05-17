/*
 * XREFs of LdrpResGetMappingSize @ 0x180022630
 * Callers:
 *     LdrResSearchResource @ 0x180005220 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x180005938 (LdrpResSearchResourceMappedFile.c)
 *     LdrResGetRCConfig @ 0x180007BB0 (LdrResGetRCConfig.c)
 *     LdrpSearchResourceSection_U @ 0x180027170 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180024950 (RtlImageNtHeaderEx.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180026F50 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     ZwQueryVirtualMemory @ 0x1800A1310 (ZwQueryVirtualMemory.c)
 *     LdrpTraceLoadMUIDll @ 0x1800ED41C (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpResGetMappingSize(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  unsigned __int64 *v5; // r12
  _DWORD *SharedData; // rcx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 FileSizeFromLoadAsDataTable; // rbx
  bool v14; // r15
  int v15; // ecx
  int VirtualMemory; // eax
  _DWORD *v18; // rcx
  unsigned int v19; // [rsp+30h] [rbp-98h]
  unsigned __int64 v20; // [rsp+38h] [rbp-90h]
  __int64 v21; // [rsp+40h] [rbp-88h] BYREF
  int v22; // [rsp+48h] [rbp-80h] BYREF
  const wchar_t *v23; // [rsp+50h] [rbp-78h]
  int v24; // [rsp+58h] [rbp-70h] BYREF
  const wchar_t *v25; // [rsp+60h] [rbp-68h]
  _BYTE v26[16]; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp-50h]
  unsigned __int64 v28; // [rsp+D0h] [rbp+8h]
  char v29; // [rsp+E8h] [rbp+20h]

  v29 = a4;
  v4 = a3;
  v5 = (unsigned __int64 *)a2;
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
    if ( (unsigned int)RtlGetCurrentServiceSessionId(1LL, a2, a3, a4) )
      v11 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v11 = 2147353476LL;
    LdrpTraceLoadMUIDll(&v22, *(unsigned __int8 *)v11);
  }
  else
  {
    v10 = 2147353476LL;
  }
  if ( !a1 || !v5 )
    return 3221225485LL;
  v12 = 0LL;
  v28 = 0LL;
  if ( (v4 & 0x80000) != 0 )
  {
    FileSizeFromLoadAsDataTable = *v5;
    v19 = 0;
  }
  else
  {
    if ( (v4 & 0x20000) != 0 )
      v28 = *v5;
    *v5 = 0LL;
    FileSizeFromLoadAsDataTable = 0LL;
    v20 = 0LL;
    v14 = 0;
    if ( (v4 & 0x100) != 0 )
      v14 = (a1 & 1) == 0;
    v15 = RtlImageNtHeaderEx(1LL, a1 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, &v21);
    if ( v15 >= 0 )
    {
      a2 = 267LL;
      if ( *(_WORD *)(v21 + 24) == 267 || (a2 = 523LL, *(_WORD *)(v21 + 24) == 523) )
      {
        v20 = *(unsigned int *)(v21 + 80);
      }
      else
      {
        v20 = 0LL;
        v15 = -1073741701;
      }
    }
    if ( v15 < 0 )
      return (unsigned int)v15;
    if ( NtCurrentPeb()->ImageBaseAddress == (void *)a1 && v14 && v20 )
    {
      FileSizeFromLoadAsDataTable = v20;
      v19 = 0;
    }
    else
    {
      if ( !v29 )
        FileSizeFromLoadAsDataTable = LdrpGetFileSizeFromLoadAsDataTable(a1);
      if ( FileSizeFromLoadAsDataTable )
      {
        VirtualMemory = 0;
      }
      else
      {
        VirtualMemory = ZwQueryVirtualMemory(-1LL, a1 & 0xFFFFFFFFFFFFFFFCuLL, 3LL, v26, 48LL, 0LL);
        if ( VirtualMemory >= 0 )
          FileSizeFromLoadAsDataTable = v27;
      }
      v19 = VirtualMemory;
      if ( !FileSizeFromLoadAsDataTable && v20 )
      {
        FileSizeFromLoadAsDataTable = v20;
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
    *v5 = FileSizeFromLoadAsDataTable;
LABEL_45:
  v18 = NtCurrentPeb()->SharedData;
  if ( v18 && *v18 )
    v9 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v9 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v18, a2, a3, a4) )
      v10 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(&v24, *(unsigned __int8 *)v10);
  }
  return v19;
}
