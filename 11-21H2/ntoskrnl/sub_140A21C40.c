/*
 * XREFs of sub_140A21C40 @ 0x140A21C40
 * Callers:
 *     sub_1406BAEF0 @ 0x1406BAEF0 (sub_1406BAEF0.c)
 *     sub_14080AA70 @ 0x14080AA70 (sub_14080AA70.c)
 * Callees:
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x14041C260 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x14041E0A0 (ZwQueryDirectoryObject.c)
 *     sub_140A217B8 @ 0x140A217B8 (sub_140A217B8.c)
 *     sub_140A218B8 @ 0x140A218B8 (sub_140A218B8.c)
 *     sub_140A21B74 @ 0x140A21B74 (sub_140A21B74.c)
 *     sub_140A22034 @ 0x140A22034 (sub_140A22034.c)
 *     sub_140A22404 @ 0x140A22404 (sub_140A22404.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A21C40(unsigned int a1, __int64 a2, wchar_t **a3)
{
  wchar_t **v3; // r15
  wchar_t *v4; // rbx
  wchar_t **v5; // r14
  PVOID v6; // rsi
  unsigned int v7; // r13d
  __int64 v8; // r8
  __int64 v9; // r9
  wchar_t *v10; // rdi
  NTSTATUS v11; // ebx
  ULONG v12; // r15d
  __int64 i; // rdx
  NTSTATUS v14; // eax
  int v15; // r12d
  wchar_t **v16; // rbx
  bool v17; // r15
  __int64 v18; // rdx
  __int64 v19; // r9
  int v20; // eax
  unsigned int v21; // eax
  int v22; // edi
  char *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  bool v26; // cf
  int v27; // eax
  BOOLEAN RestartScan[8]; // [rsp+28h] [rbp-A9h]
  int v30; // [rsp+48h] [rbp-89h]
  int v31; // [rsp+4Ch] [rbp-85h] BYREF
  unsigned int v32; // [rsp+50h] [rbp-81h]
  ULONG Context; // [rsp+54h] [rbp-7Dh] BYREF
  unsigned int v34; // [rsp+58h] [rbp-79h] BYREF
  PVOID P; // [rsp+60h] [rbp-71h] BYREF
  wchar_t *v36; // [rsp+68h] [rbp-69h]
  wchar_t **v37; // [rsp+70h] [rbp-61h]
  HANDLE DirectoryHandle; // [rsp+78h] [rbp-59h] BYREF
  __int64 Pool2; // [rsp+80h] [rbp-51h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v42; // [rsp+C8h] [rbp-9h] BYREF
  int v43; // [rsp+D0h] [rbp-1h]
  __int128 v44; // [rsp+D8h] [rbp+7h] BYREF
  __int128 v45; // [rsp+E8h] [rbp+17h]

  v37 = a3;
  v32 = a1;
  Context = 0;
  v3 = a3;
  v4 = 0LL;
  v42 = 0LL;
  v43 = 0;
  DirectoryHandle = 0LL;
  v44 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v45 = 0LL;
  P = 0LL;
  v7 = 0;
  DestinationString = 0LL;
  v36 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v34 = 0;
  v31 = 0;
  v30 = 0;
  Pool2 = ExAllocatePool2(256LL, 106LL, 1263556947LL);
  v10 = (wchar_t *)Pool2;
  if ( !Pool2 )
  {
    v11 = -1073741801;
    goto LABEL_55;
  }
  if ( (int)sub_140A21B74(&v34, &v31, v8, v9) >= 0 )
  {
    v15 = v31;
    goto LABEL_45;
  }
  RtlInitUnicodeString(&DestinationString, L"\\Device");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v11 < 0 )
    goto LABEL_49;
  v12 = 4096;
  for ( i = 4096LL; ; i = v12 )
  {
    v5 = (wchar_t **)ExAllocatePool2(256LL, i, 1263556947LL);
    if ( !v5 )
    {
      v11 = -1073741801;
      goto LABEL_49;
    }
    Context = 0;
    v14 = ZwQueryDirectoryObject(DirectoryHandle, v5, v12, 0, 1u, &Context, 0LL);
    v11 = v14;
    if ( v14 != 261 )
      break;
    ExFreePoolWithTag(v5, 0);
    v12 += 4096;
  }
  if ( (int)(v14 + 0x80000000) >= 0 && v14 != -2147483622 )
    goto LABEL_49;
  if ( !*(_WORD *)v5 )
  {
LABEL_42:
    v11 = -1073740718;
    goto LABEL_49;
  }
  v15 = v31;
  v16 = v5 + 1;
  do
  {
    if ( !(unsigned __int8)sub_140A22404(*v16, v16[2]) )
      goto LABEL_35;
    sub_1402E1280(v10, 0x6AuLL, L"\\Device\\%s\\Partition%lu", *v16, 0LL);
    v43 = 0;
    v44 = 0LL;
    v42 = 1LL;
    v17 = 0;
    v45 = 0LL;
    if ( (int)sub_140A218B8(v10, v18, &v42, v19, &v44, 0x20u) >= 0 )
    {
      if ( BYTE8(v45) == 15 )
        goto LABEL_35;
      v17 = BYTE8(v45) == 16;
    }
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0);
      P = 0LL;
    }
    v20 = sub_140A217B8(v10, &P);
    v6 = P;
    if ( v20 >= 0 && *(_DWORD *)P == 1 )
    {
      v21 = *((_DWORD *)P + 1);
      if ( v21 )
      {
        v22 = v30;
        v23 = (char *)P + 72;
        v24 = v21;
        do
        {
          v25 = *((_QWORD *)v23 + 1) - 0x11D2F81FC12A7328LL;
          if ( *((_QWORD *)v23 + 1) == 0x11D2F81FC12A7328LL )
            v25 = *((_QWORD *)v23 + 2) - 0x3BC93EC9A0004BBALL;
          if ( !v25 )
          {
            if ( !v7 || !v22 && v17 )
            {
              v15 = *(_DWORD *)v23;
              v36 = *v16;
            }
            ++v7;
            if ( v17 )
              ++v22;
          }
          v23 += 144;
          --v24;
        }
        while ( v24 );
        v30 = v22;
        v10 = (wchar_t *)Pool2;
      }
    }
LABEL_35:
    v16 += 4;
  }
  while ( *((_WORD *)v16 - 4) );
  if ( !v7 )
    goto LABEL_42;
  if ( v7 <= 1 || v30 == 1 )
  {
    v3 = v37;
    v4 = v36;
LABEL_45:
    v26 = v32 != 0;
    v32 = -v32;
    *(_DWORD *)RestartScan = v26 ? v15 : 0;
    if ( v4 )
      v27 = sub_1402E1280(v10, 0x6AuLL, L"\\Device\\%s\\Partition%lu", v4, *(_QWORD *)RestartScan);
    else
      v27 = sub_1402E1280(v10, 0x6AuLL, L"\\Device\\Harddisk%lu\\Partition%lu", v34, *(_QWORD *)RestartScan);
    v11 = v27;
    if ( v27 >= 0 )
    {
      *v3 = v10;
      goto LABEL_51;
    }
LABEL_49:
    ExFreePoolWithTag(v10, 0);
    goto LABEL_51;
  }
  v11 = sub_140A22034(v32, v10, 0LL, 1LL);
  if ( v11 < 0 )
  {
    v11 = -1073740719;
    goto LABEL_49;
  }
  *v37 = v10;
LABEL_51:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
LABEL_55:
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  return (unsigned int)v11;
}
