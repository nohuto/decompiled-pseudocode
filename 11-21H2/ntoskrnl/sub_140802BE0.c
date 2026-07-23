/*
 * XREFs of sub_140802BE0 @ 0x140802BE0
 * Callers:
 *     sub_140802A64 @ 0x140802A64 (sub_140802A64.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     swprintf_s @ 0x1403E5D20 (swprintf_s.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     ZwOpenDirectoryObject @ 0x14041C260 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x14041E0A0 (ZwQueryDirectoryObject.c)
 *     sub_140802FBC @ 0x140802FBC (sub_140802FBC.c)
 *     sub_140803050 @ 0x140803050 (sub_140803050.c)
 *     sub_1408031CC @ 0x1408031CC (sub_1408031CC.c)
 *     sub_140803D60 @ 0x140803D60 (sub_140803D60.c)
 *     sub_140804158 @ 0x140804158 (sub_140804158.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140802BE0(int a1, _QWORD *a2)
{
  wchar_t *v2; // r14
  wchar_t **v3; // r15
  int v4; // eax
  wchar_t *v5; // r13
  NTSTATUS v6; // ebx
  PVOID PoolWithTag; // rdi
  bool v8; // r12
  ULONG v9; // esi
  SIZE_T i; // rdx
  NTSTATUS v11; // eax
  char v12; // si
  wchar_t **v13; // rbx
  unsigned __int64 v14; // rcx
  _DWORD *v15; // r13
  int v16; // eax
  _QWORD *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r12
  int v20; // eax
  bool v21; // zf
  const wchar_t *v23; // rax
  __int64 v24; // rcx
  const wchar_t *v25; // rax
  BOOLEAN RestartScan[8]; // [rsp+20h] [rbp-E0h]
  bool v27; // [rsp+40h] [rbp-C0h]
  wchar_t **v28; // [rsp+48h] [rbp-B8h]
  ULONG OpenOptions; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+54h] [rbp-ACh]
  _QWORD *v31; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t *Str1; // [rsp+60h] [rbp-A0h] BYREF
  int v33; // [rsp+68h] [rbp-98h]
  __int64 v34; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h]
  _DWORD *v36; // [rsp+80h] [rbp-80h] BYREF
  HANDLE DirectoryHandle; // [rsp+88h] [rbp-78h] BYREF
  HANDLE FileHandle; // [rsp+90h] [rbp-70h] BYREF
  void *v39; // [rsp+98h] [rbp-68h]
  _QWORD *v40; // [rsp+A0h] [rbp-60h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES v42; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+108h] [rbp+8h] BYREF
  UNICODE_STRING v44; // [rsp+118h] [rbp+18h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+128h] [rbp+28h] BYREF
  _OWORD v46[2]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v47; // [rsp+158h] [rbp+58h]

  v40 = a2;
  v36 = 0LL;
  v47 = 0LL;
  v2 = 0LL;
  FileHandle = 0LL;
  v3 = 0LL;
  memset(v46, 0, sizeof(v46));
  DirectoryHandle = 0LL;
  OpenOptions = 0;
  memset(&ObjectAttributes, 0, 44);
  P = 0LL;
  v31 = 0LL;
  DestinationString = 0LL;
  v34 = 0LL;
  memset(&v42, 0, 44);
  v39 = 0LL;
  Str1 = 0LL;
  IoStatusBlock = 0LL;
  v44 = 0LL;
  v4 = sub_140804158(a1, (unsigned int)&v31, (unsigned int)&v36, (unsigned int)&v34, (__int64)&Str1, 0LL);
  v5 = Str1;
  v6 = v4;
  if ( v4 < 0 )
    goto LABEL_42;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x58uLL, 0x4B444342u);
  if ( !PoolWithTag )
    return 3221225495LL;
  v8 = 0;
  v27 = 0;
  if ( v5 && !v31 )
  {
    v8 = v36 == 0LL;
    v27 = v36 == 0LL;
  }
  RtlInitUnicodeString(&DestinationString, L"\\Device");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v6 < 0 )
    goto LABEL_79;
  v9 = 4096;
  for ( i = 4096LL; ; i = v9 )
  {
    v3 = (wchar_t **)ExAllocatePoolWithTag(PagedPool, i, 0x4B444342u);
    if ( !v3 )
    {
      v6 = -1073741801;
      goto LABEL_79;
    }
    OpenOptions = 0;
    v11 = ZwQueryDirectoryObject(DirectoryHandle, v3, v9, 0, 1u, &OpenOptions, 0LL);
    v6 = v11;
    if ( v11 != 261 )
      break;
    ExFreePoolWithTag(v3, 0x4B444342u);
    v9 += 4096;
  }
  if ( (int)(v11 + 0x80000000) >= 0 && v11 != -2147483622 )
  {
LABEL_79:
    ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
    goto LABEL_40;
  }
  v12 = 0;
  if ( !*(_WORD *)v3 )
    goto LABEL_78;
  v13 = v3 + 1;
  v28 = v3 + 1;
  while ( 1 )
  {
    if ( !(unsigned __int8)sub_140802FBC(*v13, v13[2]) )
      goto LABEL_14;
    swprintf_s((wchar_t *)PoolWithTag, 0x2CuLL, L"\\Device\\%s\\Partition%lu", *v13, 0LL);
    if ( (int)sub_1408031CC((PCWSTR)PoolWithTag) < 0 )
      goto LABEL_14;
    if ( !v5 )
    {
      v14 = *(_QWORD *)(v34 + 4) - *(_QWORD *)((char *)v46 + 4);
      if ( !v14 )
      {
        v14 = *(_QWORD *)(v34 + 12) - *(_QWORD *)((char *)v46 + 12);
        if ( !v14 )
          v14 = *(unsigned int *)(v34 + 20) - (unsigned __int64)DWORD1(v46[1]);
      }
      if ( v14 )
      {
        ExFreePoolWithTag(P, 0x4B444342u);
        goto LABEL_14;
      }
    }
    v15 = P;
    v16 = *(_DWORD *)(v34 + 4);
    v33 = v16;
    if ( v36 )
    {
      if ( v16 == 1 )
      {
        *(_DWORD *)RestartScan = *v36;
        swprintf_s((wchar_t *)PoolWithTag, 0x2CuLL, L"\\Device\\%s\\Partition%lu", *v13, *(_QWORD *)RestartScan);
        RtlInitUnicodeString(&v44, (PCWSTR)PoolWithTag);
        v42.RootDirectory = 0LL;
        v42.ObjectName = &v44;
        v42.Length = 48;
        v42.Attributes = 576;
        *(_OWORD *)&v42.SecurityDescriptor = 0LL;
        if ( ZwOpenFile(&FileHandle, 0x80000000, &v42, &IoStatusBlock, 3u, 0) >= 0 )
        {
          ZwClose(FileHandle);
          v12 = 1;
        }
        goto LABEL_35;
      }
LABEL_58:
      if ( v16 )
        goto LABEL_35;
      goto LABEL_22;
    }
    if ( v16 != 1 )
      goto LABEL_58;
LABEL_22:
    v17 = 0LL;
    if ( !v16 )
    {
      if ( v36 )
      {
        v17 = v36;
      }
      else if ( v31 )
      {
        v17 = v31;
      }
    }
    v18 = 0LL;
    v30 = 0;
    if ( !*((_DWORD *)P + 1) )
      goto LABEL_34;
    while ( 1 )
    {
      v19 = 36 * v18;
      v20 = v15[36 * v18 + 18];
      if ( !v20 )
        goto LABEL_30;
      *(_DWORD *)RestartScan = v20;
      swprintf_s((wchar_t *)PoolWithTag, 0x2CuLL, L"\\Device\\%s\\Partition%lu", *v28, *(_QWORD *)RestartScan);
      if ( v27 )
      {
        v23 = (const wchar_t *)sub_140803D60((PCWSTR)PoolWithTag);
        v2 = (wchar_t *)v23;
        if ( v23 )
          break;
      }
LABEL_26:
      if ( v33 == 1 )
      {
        if ( !v31 )
          goto LABEL_30;
        v21 = *v31 == *(_QWORD *)&v15[v19 + 14];
      }
      else
      {
        if ( !v17 )
          goto LABEL_30;
        v24 = *v17 - *(_QWORD *)&v15[v19 + 24];
        if ( *v17 == *(_QWORD *)&v15[v19 + 24] )
          v24 = v17[1] - *(_QWORD *)&v15[v19 + 26];
        v21 = v24 == 0;
      }
      if ( v21 )
        goto LABEL_32;
LABEL_30:
      v18 = (unsigned int)(v30 + 1);
      v30 = v18;
      if ( (unsigned int)v18 >= v15[1] )
        goto LABEL_33;
    }
    if ( wcsicmp(Str1, v23) )
    {
      ExFreePoolWithTag(v2, 0x4B444342u);
      v2 = 0LL;
      goto LABEL_26;
    }
LABEL_32:
    v12 = 1;
LABEL_33:
    v8 = v27;
LABEL_34:
    v13 = v28;
LABEL_35:
    ExFreePoolWithTag(v15, 0x4B444342u);
    v5 = Str1;
    if ( !Str1 )
    {
LABEL_36:
      if ( v12 )
        goto LABEL_37;
LABEL_78:
      v6 = -1073741811;
      goto LABEL_79;
    }
    if ( v12 )
    {
      v12 = 0;
      if ( v8 )
        goto LABEL_37;
      v25 = (const wchar_t *)sub_140803D60((PCWSTR)PoolWithTag);
      v2 = (wchar_t *)v25;
      if ( v25 )
        break;
    }
LABEL_14:
    v13 += 4;
    v28 = v13;
    if ( !*((_WORD *)v13 - 4) )
      goto LABEL_36;
  }
  if ( wcsicmp(v5, v25) )
  {
    ExFreePoolWithTag(v2, 0x4B444342u);
    v2 = 0LL;
    goto LABEL_14;
  }
LABEL_37:
  if ( (int)sub_140803050((PCWSTR)PoolWithTag) >= 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
    PoolWithTag = v39;
  }
  v6 = 0;
  *v40 = PoolWithTag;
LABEL_40:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
LABEL_42:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4B444342u);
  return (unsigned int)v6;
}
