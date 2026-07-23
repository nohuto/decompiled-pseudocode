/*
 * XREFs of sub_140B171AC @ 0x140B171AC
 * Callers:
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140B1789C @ 0x140B1789C (sub_140B1789C.c)
 */

NTSTATUS __fastcall sub_140B171AC(__int64 a1)
{
  __int64 v1; // rbx
  NTSTATUS result; // eax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Disposition; // [rsp+80h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 176);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  Disposition = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &stru_140D3D238;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.Attributes = 576;
  result = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( result >= 0 )
  {
    ZwClose(KeyHandle);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &stru_140D3D228;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    if ( result >= 0 )
    {
      qword_140D3CA40 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20204D43u);
      if ( qword_140D3CA40 )
      {
        if ( v1 )
          LODWORD(v1) = sub_140B1789C(v1, KeyHandle, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        ExFreePoolWithTag(qword_140D3CA40, 0);
        qword_140D3CA40 = 0LL;
      }
      else
      {
        LODWORD(v1) = -1073741670;
      }
      ZwClose(KeyHandle);
      return v1;
    }
  }
  return result;
}
