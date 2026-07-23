/*
 * XREFs of sub_1406E2FE8 @ 0x1406E2FE8
 * Callers:
 *     sub_1406E2EEC @ 0x1406E2EEC (sub_1406E2EEC.c)
 * Callees:
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     sub_1406E2FC8 @ 0x1406E2FC8 (sub_1406E2FC8.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 */

__int64 __fastcall sub_1406E2FE8(UNICODE_STRING *a1, __int64 a2, __int64 a3)
{
  NTSTATUS v5; // ebx
  NTSTATUS v6; // eax
  NTSTATUS v8; // eax
  void **v9; // rsi
  NTSTATUS v10; // eax
  void *v11; // rax
  __int128 v12; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *v14; // [rsp+90h] [rbp+30h] BYREF

  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  v14 = 0LL;
  *(_OWORD *)(a3 + 32) = 0LL;
  *(_QWORD *)(a3 + 48) = a2;
  *(_QWORD *)(a3 + 40) = a1;
  v12 = 0LL;
  v5 = sub_14078014C(*(_QWORD *)&qword_140D00AC0, 4LL, &v14);
  if ( v5 < 0 )
    goto LABEL_17;
  LODWORD(v12) = 3145774;
  *((_QWORD *)&v12 + 1) = L"Control\\DeviceMigration";
  ObjectAttributes.RootDirectory = v14;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v12;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_QWORD *)a3 = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey((PHANDLE)a3, 0x20019u, &ObjectAttributes);
  v5 = v6;
  if ( v6 != -1073741772 )
  {
    if ( v6 >= 0 )
    {
      LODWORD(v12) = 1048590;
      *((_QWORD *)&v12 + 1) = L"Devices";
      ObjectAttributes.RootDirectory = *(HANDLE *)a3;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v12;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      *(_QWORD *)(a3 + 8) = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v8 = ZwOpenKey((PHANDLE)(a3 + 8), 0x20019u, &ObjectAttributes);
      v5 = v8;
      if ( v8 == -1073741772 )
      {
        *(_QWORD *)(a3 + 8) = 0LL;
      }
      else if ( v8 < 0 )
      {
        goto LABEL_17;
      }
      LODWORD(v12) = 1048590;
      *((_QWORD *)&v12 + 1) = L"Classes";
      v9 = (void **)(a3 + 16);
      ObjectAttributes.RootDirectory = *(HANDLE *)a3;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v12;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      *(_QWORD *)(a3 + 16) = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v10 = ZwOpenKey((PHANDLE)(a3 + 16), 0x20019u, &ObjectAttributes);
      v5 = v10;
      if ( v10 == -1073741772 )
      {
        v5 = 0;
        *v9 = 0LL;
      }
      else if ( v10 < 0 )
      {
        goto LABEL_17;
      }
      v11 = *v9;
      if ( !*v9 )
        return (unsigned int)v5;
      if ( a1 )
      {
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        *(_QWORD *)(a3 + 24) = 0LL;
        ObjectAttributes.RootDirectory = v11;
        ObjectAttributes.ObjectName = a1;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v5 = ZwOpenKey((PHANDLE)(a3 + 24), 0x20019u, &ObjectAttributes);
        if ( v5 == -1073741772 )
        {
          v5 = 0;
          *(_QWORD *)(a3 + 24) = 0LL;
          return (unsigned int)v5;
        }
      }
      if ( v5 >= 0 )
        return (unsigned int)v5;
    }
LABEL_17:
    sub_1406E2FC8(a3);
    return (unsigned int)v5;
  }
  return 0;
}
