/*
 * XREFs of sub_1406B5E34 @ 0x1406B5E34
 * Callers:
 *     NtSetSecurityObject @ 0x1406B57C0 (NtSetSecurityObject.c)
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1407213B0 (SeQuerySecurityDescriptorInfo.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406B5E34(__int64 a1, DWORD a2, void *a3, _QWORD *a4)
{
  void *v6; // rbx
  int v7; // esi
  void *Pool2; // rax
  int v10; // eax
  ULONG Length; // [rsp+A0h] [rbp+40h] BYREF
  DWORD SecurityInformation; // [rsp+A8h] [rbp+48h] BYREF
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+B0h] [rbp+50h] BYREF

  ObjectsSecurityDescriptor = a3;
  SecurityInformation = a2;
  Length = 0;
  if ( a3 )
  {
    SeQuerySecurityDescriptorInfo(&SecurityInformation, 0LL, &Length, &ObjectsSecurityDescriptor);
    Pool2 = (void *)ExAllocatePool2(256LL, Length, 1901290063LL);
    v6 = Pool2;
    if ( Pool2 )
    {
      v10 = SeQuerySecurityDescriptorInfo(&SecurityInformation, Pool2, &Length, &ObjectsSecurityDescriptor);
LABEL_11:
      v7 = v10;
      goto LABEL_4;
    }
    return 3221225626LL;
  }
  Length = dword_140C095A0;
  v6 = (void *)ExAllocatePool2(256LL, (unsigned int)dword_140C095A0, 1901290063LL);
  if ( !v6 )
    return 3221225626LL;
  ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)(a1 - 8);
  v7 = sub_14042A5E0(a1, 1LL);
  if ( v7 == -1073741789 )
  {
    ExFreePoolWithTag(v6, 0x7153624Fu);
    v6 = (void *)ExAllocatePool2(256LL, Length, 1901290063LL);
    if ( v6 )
    {
      v10 = sub_14042A5E0(a1, 1LL);
      goto LABEL_11;
    }
    return 3221225626LL;
  }
LABEL_4:
  if ( v7 < 0 )
    ExFreePoolWithTag(v6, 0x7153624Fu);
  else
    *a4 = v6;
  return (unsigned int)v7;
}
