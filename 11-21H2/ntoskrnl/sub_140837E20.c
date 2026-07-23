/*
 * XREFs of sub_140837E20 @ 0x140837E20
 * Callers:
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     sub_1406B4108 @ 0x1406B4108 (sub_1406B4108.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14071B6EC @ 0x14071B6EC (sub_14071B6EC.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_140838DE4 @ 0x140838DE4 (sub_140838DE4.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 */

NTSTATUS __fastcall sub_140837E20(__int64 a1)
{
  NTSTATUS result; // eax
  HANDLE v2; // rdi
  NTSTATUS v3; // ebx
  NTSTATUS v4; // ebx
  _QWORD *v5; // rbx
  __int64 v6; // rax
  ULONG_PTR v7; // rcx
  ULONG_PTR v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // edi
  __int64 v15; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+80h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+28h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+30h] BYREF

  Handle = 0LL;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v17 = 0xFFFFFFFFLL;
  *(&ObjectAttributes.Length + 1) = 0;
  result = sub_140838DE4(a1, &Handle, 0LL);
  if ( result >= 0 )
  {
    v2 = Handle;
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"$&";
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    result = ZwClose(v2);
    if ( v3 >= 0 )
    {
      Handle = 0LL;
      v4 = ObReferenceObjectByHandle(KeyHandle, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, 0, &Handle, 0LL);
      result = ZwClose(KeyHandle);
      if ( v4 >= 0 )
      {
        sub_14071B6EC();
        v5 = Handle;
        v6 = *((_QWORD *)Handle + 1);
        v7 = *(_QWORD *)(v6 + 32);
        v8 = *(unsigned int *)(v6 + 40);
        if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
          v9 = sub_1406BF400(v7, v8, &v17);
        else
          v9 = sub_1407C9820(v7, v8, (unsigned int *)&v17);
        if ( v9 )
        {
          v14 = sub_1406B4108(*(_QWORD *)(v5[1] + 32LL), v9, (int)&stru_140A37ED8);
          v15 = *(_QWORD *)(v5[1] + 32LL);
          if ( (*(_BYTE *)(v15 + 140) & 1) != 0 )
            sub_1406BF450(v15, &v17);
          else
            sub_1407C97C0(v15, (unsigned int *)&v17);
          if ( v14 != -1 )
            sub_14071F300(*(_QWORD *)(v5[1] + 32LL), v14, 1);
        }
        sub_140AB4260(v11, v10, v12, v13);
        return ObfDereferenceObject(v5);
      }
    }
  }
  return result;
}
