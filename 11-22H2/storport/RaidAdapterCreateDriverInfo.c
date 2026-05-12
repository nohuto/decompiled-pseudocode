/*
 * XREFs of RaidAdapterCreateDriverInfo @ 0x1C00A55C8
 * Callers:
 *     RaidAdapterCreateDumpInfo @ 0x1C00A5834 (RaidAdapterCreateDumpInfo.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     RtlStringCbPrintfW @ 0x1C001A150 (RtlStringCbPrintfW.c)
 *     RaidAdapterFreeDriverInfo @ 0x1C00358D4 (RaidAdapterFreeDriverInfo.c)
 *     RtlStringCbCopyW @ 0x1C003D800 (RtlStringCbCopyW.c)
 */

__int64 __fastcall RaidAdapterCreateDriverInfo(__int64 a1, __int64 a2, struct _UNICODE_STRING **a3, _BYTE *a4)
{
  __int64 v4; // r15
  int FullDriverPath; // ebx
  __int64 v7; // rcx
  size_t v10; // rdi
  wchar_t *Pool; // rax
  wchar_t *v12; // rbp
  _QWORD *v13; // r14
  _QWORD *v14; // rdi
  struct _UNICODE_STRING *v15; // r15
  struct _UNICODE_STRING *v16; // rax
  struct _UNICODE_STRING *v17; // rdi
  wchar_t **p_Buffer; // rax
  wchar_t *v19; // rax
  __int64 v20; // r11
  wchar_t *v21; // rax
  wchar_t *v22; // r11
  __int64 v23; // rax
  int v24; // ecx
  __int128 v26; // [rsp+20h] [rbp-48h] BYREF
  struct _UNICODE_STRING *v27; // [rsp+70h] [rbp+8h] BYREF
  __int64 v28; // [rsp+78h] [rbp+10h]

  v28 = a2;
  v4 = a2;
  FullDriverPath = 0;
  *a3 = 0LL;
  *a4 = 0;
  v7 = *(_QWORD *)(a1 + 16);
  v26 = 0LL;
  RaidDriverGetName(v7, (__int64)&v26);
  v10 = (unsigned int)(unsigned __int16)v26 + 10;
  Pool = (wchar_t *)RaidAllocatePool(64LL, v10, 1145266514LL, *(_QWORD *)(a1 + 8));
  v12 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  RtlStringCbPrintfW(Pool, v10, L"%ws.sys", *((_QWORD *)&v26 + 1));
  v13 = (_QWORD *)(v4 + 56);
  v14 = *(_QWORD **)(v4 + 56);
  if ( v14 != (_QWORD *)(v4 + 56) )
  {
    while ( 1 )
    {
      v15 = (struct _UNICODE_STRING *)(v14 - 1);
      if ( !_wcsicmp((const wchar_t *)v14[3], v12) )
        break;
      v14 = (_QWORD *)*v14;
      if ( v14 == v13 )
      {
        v4 = v28;
        goto LABEL_7;
      }
    }
    *a4 = 1;
    v17 = 0LL;
    v27 = 0LL;
    *a3 = v15;
    goto LABEL_9;
  }
LABEL_7:
  v16 = (struct _UNICODE_STRING *)RaidAllocatePool(64LL, 160LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  v27 = v16;
  v17 = v16;
  if ( !v16 )
  {
    FullDriverPath = -1073741670;
LABEL_9:
    ExFreePoolWithTag(v12, 0x44436152u);
    goto LABEL_17;
  }
  p_Buffer = &v16->Buffer;
  p_Buffer[1] = (wchar_t *)p_Buffer;
  *p_Buffer = (wchar_t *)p_Buffer;
  *(_DWORD *)&v17->Length = 160;
  v17[1].Buffer = (wchar_t *)RaUnitStorageDumpControl;
  *(_QWORD *)&v17[2].Length = v12;
  v19 = (wchar_t *)RaidAllocatePool(64LL, 34LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  if ( !v19 )
    goto LABEL_16;
  RtlStringCbCopyW(v19, 0x22uLL, L"dumpstorport.sys");
  *(_QWORD *)&v17[3].Length = v20;
  v21 = (wchar_t *)RaidAllocatePool(64LL, 26LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  if ( !v21 )
    goto LABEL_16;
  RtlStringCbCopyW(v21, 0x1AuLL, L"storport.sys");
  v17[3].Buffer = v22;
  RtlInitUnicodeString(v17 + 9, L"\\SystemRoot\\System32\\Drivers\\dumpstorport.sys");
  FullDriverPath = IoQueryFullDriverPath(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL), &v17[8]);
  if ( FullDriverPath < 0 )
    FullDriverPath = 0;
  v23 = RaidAllocatePool(64LL, 208LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  if ( !v23 )
  {
LABEL_16:
    FullDriverPath = -1073741670;
LABEL_17:
    if ( v17 )
      RaidAdapterFreeDriverInfo((PVOID *)&v27);
    return (unsigned int)FullDriverPath;
  }
  *(_DWORD *)(&v17[4].MaximumLength + 1) = 208;
  v17[4].Buffer = (wchar_t *)v23;
  *(_QWORD *)&v17[7].Length = v4;
  if ( (*(_DWORD *)(a1 + 564) & 1) != 0 || (v24 = *(_DWORD *)(a1 + 4212), v24 == 10) || v24 == 1 )
    *(_DWORD *)&v17[4].Length |= 1u;
  *a3 = v17;
  return (unsigned int)FullDriverPath;
}
