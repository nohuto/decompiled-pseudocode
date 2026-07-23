/*
 * XREFs of sub_140B4DE9C @ 0x140B4DE9C
 * Callers:
 *     sub_140B17304 @ 0x140B17304 (sub_140B17304.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140B4DC48 @ 0x140B4DC48 (sub_140B4DC48.c)
 */

void __fastcall sub_140B4DE9C(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // esi
  unsigned int v3; // r14d
  unsigned int v4; // r15d
  char *PoolWithTag; // rax
  __int64 v6; // rdx
  char *v7; // rbx
  const void *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // edi
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  int v13; // [rsp+A0h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+38h] BYREF

  v1 = *(_QWORD *)(a1 + 240);
  KeyHandle = (HANDLE)-1LL;
  memset(&ObjectAttributes, 0, 44);
  v2 = *(unsigned __int16 *)(v1 + 2752);
  v3 = *(unsigned __int16 *)(v1 + 2768);
  v4 = *(unsigned __int16 *)(v1 + 2784);
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v3 + v4 + v2 + 8, 0x20204D43u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    v8 = *(const void **)(v1 + 2760);
    v13 = 0;
    sub_140B4DC48((__int64)PoolWithTag, v6, &v13, v8, v2);
    sub_140B4DC48((__int64)v7, v9, &v13, *(const void **)(v1 + 2776), v3);
    sub_140B4DC48((__int64)v7, v10, &v13, *(const void **)(v1 + 2792), v4);
    v11 = v13;
    *(_WORD *)&v7[v13] = 0;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &stru_140D3CD08;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
      ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_140B57D60, 0, 7u, v7, v11 + 2);
    ExFreePoolWithTag(v7, 0);
  }
  if ( KeyHandle != (HANDLE)-1LL )
    ZwClose(KeyHandle);
}
