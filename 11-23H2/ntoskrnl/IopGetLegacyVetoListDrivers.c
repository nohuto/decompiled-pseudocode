/*
 * XREFs of IopGetLegacyVetoListDrivers @ 0x1406C2424
 * Callers:
 *     IoGetLegacyVetoList @ 0x1407A8AB0 (IoGetLegacyVetoList.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140229714 (RtlStringCbPrintfW.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x14041BBF0 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x14041DA70 (ZwQueryDirectoryObject.c)
 *     ObReferenceObjectByName @ 0x1406C2C80 (ObReferenceObjectByName.c)
 *     IopAppendLegacyVeto @ 0x14096C854 (IopAppendLegacyVeto.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

void __fastcall IopGetLegacyVetoListDrivers(__int64 a1)
{
  _QWORD *Pool2; // rsi
  BOOLEAN RestartScan; // r14
  NTSTATUS v4; // ecx
  ULONG v5; // r13d
  unsigned __int16 v6; // r12
  _WORD *v7; // rax
  void *v8; // rbx
  _DWORD **v9; // r15
  NTSTATUS v10; // eax
  unsigned __int16 v11; // r14
  __int64 v12; // r9
  PVOID v13; // rbx
  _DWORD *v14; // rax
  HANDLE DirectoryHandle; // [rsp+40h] [rbp-39h] BYREF
  PVOID Object; // [rsp+48h] [rbp-31h] BYREF
  __int128 v17; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v18[2]; // [rsp+60h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-9h] BYREF
  ULONG Length; // [rsp+F0h] [rbp+77h] BYREF
  ULONG Context; // [rsp+F8h] [rbp+7Fh] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  Object = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v18[1] = L"\\Driver";
  v18[0] = 1048590LL;
  Length = 0;
  Context = 0;
  DirectoryHandle = 0LL;
  Pool2 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  RestartScan = 1;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v18;
  v17 = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v4 < 0 )
  {
    **(_DWORD **)(a1 + 24) = v4;
LABEL_20:
    v8 = (void *)*((_QWORD *)&v17 + 1);
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
  LODWORD(v17) = 12320768;
  v7 = (_WORD *)ExAllocatePool2(256LL, 188LL, 1869181008LL);
  *((_QWORD *)&v17 + 1) = v7;
  v8 = v7;
  if ( !v7 )
  {
    **(_DWORD **)(a1 + 24) = -1073741670;
    goto LABEL_16;
  }
  *v7 = 0;
  v9 = (_DWORD **)(a1 + 24);
  while ( 1 )
  {
    v10 = ZwQueryDirectoryObject(DirectoryHandle, Pool2, v5, 1u, RestartScan, &Context, &Length);
    if ( v10 != -1073741789 )
      goto LABEL_6;
    v5 = Length;
    ExFreePoolWithTag(Pool2, 0);
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, v5, 1869181008LL);
    if ( !Pool2 )
      break;
    v10 = ZwQueryDirectoryObject(DirectoryHandle, Pool2, v5, 1u, RestartScan, &Context, &Length);
    v9 = (_DWORD **)(a1 + 24);
LABEL_6:
    if ( v10 < 0 )
      goto LABEL_13;
    v11 = *(_WORD *)Pool2 + 18;
    if ( v11 > v6 )
    {
      ExFreePoolWithTag(v8, 0);
      WORD1(v17) = v11;
      v6 = v11;
      *((_QWORD *)&v17 + 1) = ExAllocatePool2(256LL, v11, 1869181008LL);
      v8 = (void *)*((_QWORD *)&v17 + 1);
      if ( !*((_QWORD *)&v17 + 1) )
      {
        v14 = *v9;
        goto LABEL_34;
      }
    }
    v12 = Pool2[1];
    LOWORD(v17) = v11 - 2;
    RtlStringCbPrintfW((NTSTRSAFE_PWSTR)v8, v6, L"\\Driver\\%ws", v12);
    if ( (int)ObReferenceObjectByName(
                (unsigned int)&v17,
                576,
                0,
                0,
                (__int64)IoDriverObjectType,
                0,
                0,
                (__int64)&Object) < 0 )
    {
      v9 = (_DWORD **)(a1 + 24);
    }
    else
    {
      v13 = Object;
      if ( (*((_DWORD *)Object + 4) & 0x40) != 0 )
      {
        **(_DWORD **)(a1 + 16) = 11;
        if ( *(_QWORD *)a1 )
          IopAppendLegacyVeto(a1, Pool2);
      }
      ObfDereferenceObject(v13);
      if ( **(_DWORD **)(a1 + 16) == 11 && !*(_QWORD *)a1 )
        goto LABEL_20;
      v9 = (_DWORD **)(a1 + 24);
      if ( **(int **)(a1 + 24) < 0 )
        goto LABEL_20;
    }
    v8 = (void *)*((_QWORD *)&v17 + 1);
    v6 = WORD1(v17);
    RestartScan = 0;
  }
  v14 = *(_DWORD **)(a1 + 24);
LABEL_34:
  *v14 = -1073741670;
LABEL_13:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( Pool2 )
LABEL_16:
    ExFreePoolWithTag(Pool2, 0);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
}
