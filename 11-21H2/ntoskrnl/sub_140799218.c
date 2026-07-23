/*
 * XREFs of sub_140799218 @ 0x140799218
 * Callers:
 *     sub_140762AEC @ 0x140762AEC (sub_140762AEC.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x14041C260 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x14041E0A0 (ZwQueryDirectoryObject.c)
 *     ObReferenceObjectByName @ 0x14071EEC0 (ObReferenceObjectByName.c)
 *     sub_140957EC8 @ 0x140957EC8 (sub_140957EC8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_140799218(__int64 a1)
{
  _QWORD *Pool2; // rsi
  BOOLEAN RestartScan; // r13
  NTSTATUS v4; // ecx
  ULONG v5; // r12d
  unsigned __int16 v6; // r14
  _WORD *v7; // rax
  void *v8; // rbx
  NTSTATUS v9; // eax
  unsigned __int16 v10; // r15
  __int64 v11; // r9
  PVOID v12; // rbx
  PVOID Object; // [rsp+40h] [rbp-39h] BYREF
  __int128 v14; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v15[2]; // [rsp+58h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-11h] BYREF
  ULONG Length; // [rsp+E8h] [rbp+6Fh] BYREF
  ULONG Context; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE DirectoryHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  Object = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v15[1] = L"\\Driver";
  v15[0] = 1048590LL;
  Length = 0;
  Context = 0;
  DirectoryHandle = 0LL;
  Pool2 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  RestartScan = 1;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v15;
  v14 = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v4 < 0 )
  {
    **(_DWORD **)(a1 + 24) = v4;
LABEL_20:
    v8 = (void *)*((_QWORD *)&v14 + 1);
    goto LABEL_13;
  }
  v5 = 202;
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 202LL, 1869181008LL);
  if ( !Pool2 )
  {
    **(_DWORD **)(a1 + 24) = -1073741670;
    goto LABEL_20;
  }
  v6 = 188;
  LODWORD(v14) = 12320768;
  v7 = (_WORD *)ExAllocatePool2(256LL, 188LL, 1869181008LL);
  *((_QWORD *)&v14 + 1) = v7;
  v8 = v7;
  if ( !v7 )
  {
    **(_DWORD **)(a1 + 24) = -1073741670;
LABEL_16:
    ExFreePoolWithTag(Pool2, 0);
    goto LABEL_17;
  }
  *v7 = 0;
  while ( 1 )
  {
    v9 = ZwQueryDirectoryObject(DirectoryHandle, Pool2, v5, 1u, RestartScan, &Context, &Length);
    if ( v9 == -1073741789 )
    {
      v5 = Length;
      ExFreePoolWithTag(Pool2, 0);
      Pool2 = (_QWORD *)ExAllocatePool2(256LL, v5, 1869181008LL);
      if ( !Pool2 )
        break;
      v9 = ZwQueryDirectoryObject(DirectoryHandle, Pool2, v5, 1u, RestartScan, &Context, &Length);
    }
    RestartScan = 0;
    if ( v9 < 0 )
      goto LABEL_13;
    v10 = *(_WORD *)Pool2 + 18;
    if ( v10 > v6 )
    {
      ExFreePoolWithTag(v8, 0);
      WORD1(v14) = v10;
      v6 = v10;
      *((_QWORD *)&v14 + 1) = ExAllocatePool2(256LL, v10, 1869181008LL);
      v8 = (void *)*((_QWORD *)&v14 + 1);
      if ( !*((_QWORD *)&v14 + 1) )
        break;
    }
    v11 = Pool2[1];
    LOWORD(v14) = v10 - 2;
    sub_1402E1280((wchar_t *)v8, v6, L"\\Driver\\%ws", v11);
    if ( (int)ObReferenceObjectByName(
                (__int64)&v14,
                576LL,
                0LL,
                0,
                (__int64)IoDriverObjectType,
                0,
                0LL,
                (__int64 *)&Object) >= 0 )
    {
      v12 = Object;
      if ( (*((_DWORD *)Object + 4) & 0x40) != 0 )
      {
        **(_DWORD **)(a1 + 16) = 11;
        if ( *(_QWORD *)a1 )
          sub_140957EC8(a1, Pool2);
      }
      ObfDereferenceObject(v12);
      if ( **(_DWORD **)(a1 + 16) == 11 && !*(_QWORD *)a1 )
        goto LABEL_20;
      if ( **(int **)(a1 + 24) < 0 )
        goto LABEL_20;
    }
    v8 = (void *)*((_QWORD *)&v14 + 1);
    v6 = WORD1(v14);
  }
  **(_DWORD **)(a1 + 24) = -1073741670;
LABEL_13:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( Pool2 )
    goto LABEL_16;
LABEL_17:
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
}
