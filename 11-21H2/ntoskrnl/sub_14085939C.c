/*
 * XREFs of sub_14085939C @ 0x14085939C
 * Callers:
 *     sub_1406E8024 @ 0x1406E8024 (sub_1406E8024.c)
 *     sub_140A084B0 @ 0x140A084B0 (sub_140A084B0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     sub_14075A30C @ 0x14075A30C (sub_14075A30C.c)
 *     sub_140A084FC @ 0x140A084FC (sub_140A084FC.c)
 */

NTSTATUS __fastcall sub_14085939C(int a1, int a2, void *a3, __int64 a4, int a5, int a6, HANDLE *KeyHandle)
{
  int v7; // ebx
  NTSTATUS result; // eax
  NTSTATUS v9; // eax
  void *v10; // [rsp+40h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp+7h] BYREF

  v7 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  v10 = 0LL;
  if ( a5 )
    return a6 != 0 ? -1073741822 : -1073741772;
  if ( (a1 & 0xFFFFFFFB) != 0 )
  {
    if ( a1 == 2 && !a2 )
      return sub_140A084FC(a3, KeyHandle);
    return a6 != 0 ? -1073741822 : -1073741772;
  }
  result = sub_14075A30C(1, (volatile signed __int64 *)&v10);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Data");
    ObjectAttributes.RootDirectory = v10;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ZwCreateKey(KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
    if ( v9 < 0 )
      return v9;
    return v7;
  }
  return result;
}
