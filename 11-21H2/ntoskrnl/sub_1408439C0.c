/*
 * XREFs of sub_1408439C0 @ 0x1408439C0
 * Callers:
 *     sub_140843940 @ 0x140843940 (sub_140843940.c)
 *     sub_140A17490 @ 0x140A17490 (sub_140A17490.c)
 * Callees:
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140843AA4 @ 0x140843AA4 (sub_140843AA4.c)
 *     sub_140843B58 @ 0x140843B58 (sub_140843B58.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1408439C0(_QWORD *a1, const WCHAR *a2, ACCESS_MASK a3, int a4)
{
  int v6; // ebx
  NTSTATUS v7; // eax
  HANDLE v9; // rax
  PVOID P[2]; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+20h] BYREF

  *a1 = 0LL;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  *(_OWORD *)P = 0LL;
  if ( !a4 )
  {
    v6 = sub_140843B58((PUNICODE_STRING)P, a2);
    if ( v6 >= 0 )
      goto LABEL_3;
LABEL_9:
    sub_1406E0C3C(1LL, (__int64)"AslRegistryGetKey");
    goto LABEL_5;
  }
  v6 = sub_140843AA4((PUNICODE_STRING)P, a2);
  if ( v6 < 0 )
    goto LABEL_9;
LABEL_3:
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)P;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
  v6 = v7;
  if ( v7 < 0 )
  {
    if ( v7 == -1073741772 )
      goto LABEL_5;
    goto LABEL_9;
  }
  v9 = KeyHandle;
  v6 = 0;
  KeyHandle = 0LL;
  *a1 = v9;
LABEL_5:
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x74705041u);
  return (unsigned int)v6;
}
