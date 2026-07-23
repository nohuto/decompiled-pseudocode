/*
 * XREFs of sub_140925A8C @ 0x140925A8C
 * Callers:
 *     sub_140925BD8 @ 0x140925BD8 (sub_140925BD8.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     sub_140925ED0 @ 0x140925ED0 (sub_140925ED0.c)
 *     sub_140AB4080 @ 0x140AB4080 (sub_140AB4080.c)
 */

__int64 __fastcall sub_140925A8C(__int64 a1, __int64 a2)
{
  __int64 v3; // r11
  __int64 result; // rax
  HANDLE v5; // rbx
  int v6; // eax
  NTSTATUS v7; // edi
  __int128 v8; // [rsp+40h] [rbp-9h] BYREF
  __int128 v9; // [rsp+50h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF
  ULONG Disposition; // [rsp+B8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp+77h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp+7Fh] BYREF

  Handle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  Disposition = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  v8 = 0LL;
  v9 = 0LL;
  sub_140AB4080(a2 + 32, &v8, &v9);
  result = sub_140925ED0(v3, &v8, 131078LL, &Handle);
  if ( (int)result >= 0 )
  {
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v5 = Handle;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v9;
    ObjectAttributes.SecurityDescriptor = *(PVOID *)(a2 + 56);
    v6 = *(_DWORD *)(a2 + 48) - 1;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Attributes = 4928;
    v7 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 9 - (v6 != 0), &Disposition);
    ZwClose(v5);
    if ( v7 >= 0 )
      ZwClose(KeyHandle);
    return (unsigned int)v7;
  }
  return result;
}
