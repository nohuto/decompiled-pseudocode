/*
 * XREFs of sub_140697A7C @ 0x140697A7C
 * Callers:
 *     sub_140697824 @ 0x140697824 (sub_140697824.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     sub_140A2D248 @ 0x140A2D248 (sub_140A2D248.c)
 */

__int64 __fastcall sub_140697A7C(int a1, void *a2)
{
  NTSTATUS v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  _DWORD v8[2]; // [rsp+40h] [rbp-40h] BYREF
  const wchar_t *v9; // [rsp+48h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp+18h] BYREF

  v8[1] = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = a2;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v9 = L"Filters";
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v8;
  v8[0] = 1048590;
  ObjectAttributes.Attributes = 576;
  v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v4 = v3;
  if ( v3 == -1073741772 )
  {
    v4 = 0;
  }
  else if ( v3 >= 0 )
  {
    if ( *(_QWORD *)&qword_140D00AC0 && (v6 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL)) != 0 )
      v7 = *(_QWORD *)(v6 + 8);
    else
      v7 = 0LL;
    v4 = sub_140A2D248((_DWORD)KeyHandle, 0, a1, (unsigned int)L"Filters", 0, v7, 0);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v4;
}
