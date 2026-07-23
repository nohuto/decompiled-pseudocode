/*
 * XREFs of sub_1406DF14C @ 0x1406DF14C
 * Callers:
 *     IoOpenDriverRegistryKey @ 0x14067A670 (IoOpenDriverRegistryKey.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     sub_1406DF254 @ 0x1406DF254 (sub_1406DF254.c)
 *     sub_140949AF8 @ 0x140949AF8 (sub_140949AF8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406DF14C(ULONG a1, void *a2, UNICODE_STRING *a3, ACCESS_MASK a4, char a5, _QWORD *a6)
{
  void *v7; // rsi
  int v10; // eax
  unsigned int v11; // edi
  void *v12; // rbx
  NTSTATUS v13; // eax
  __int64 v14; // rcx
  HANDLE v15; // rax
  int v17; // eax
  HANDLE KeyHandle; // [rsp+48h] [rbp-19h] BYREF
  void *v19; // [rsp+50h] [rbp-11h] BYREF
  void *v20; // [rsp+58h] [rbp-9h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-1h] BYREF

  KeyHandle = 0LL;
  v20 = 0LL;
  v7 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v19 = 0LL;
  v10 = sub_1406DF254(a1);
  v11 = v10;
  if ( v10 == -1073741772 )
  {
    v12 = a2;
  }
  else
  {
    v12 = v20;
    if ( v10 < 0 )
      goto LABEL_6;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = v12;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a3;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v13 = ZwOpenKey(&KeyHandle, a4, &ObjectAttributes);
  v11 = v13;
  if ( v13 == -1073741772 )
  {
    LOBYTE(v14) = a5;
    v17 = sub_140949AF8(v14, &v19);
    v7 = v19;
    v11 = v17;
    if ( v17 < 0 )
      goto LABEL_6;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = v12;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = a3;
    ObjectAttributes.SecurityDescriptor = v19;
    v13 = ZwCreateKey(&KeyHandle, a4, &ObjectAttributes, 0, 0LL, 0, 0LL);
    v11 = v13;
  }
  if ( v13 >= 0 )
  {
    v15 = KeyHandle;
    KeyHandle = 0LL;
    *a6 = v15;
  }
LABEL_6:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v12 && v12 != a2 )
    ZwClose(v12);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return v11;
}
