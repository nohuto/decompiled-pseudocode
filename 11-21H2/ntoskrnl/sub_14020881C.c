/*
 * XREFs of sub_14020881C @ 0x14020881C
 * Callers:
 *     sub_140679ADC @ 0x140679ADC (sub_140679ADC.c)
 *     sub_140679BEC @ 0x140679BEC (sub_140679BEC.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14020881C(HANDLE *a1, void *a2, void *a3, __int64 a4)
{
  NTSTATUS v7; // esi
  int v8; // r15d
  __int64 Pool2; // rax
  HANDLE *v10; // rbx
  HANDLE *v11; // r14
  HANDLE **v12; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF

  v7 = 0;
  v8 = a4;
  memset(&ObjectAttributes, 0, 44);
  Pool2 = ExAllocatePool2(256LL, 40LL, 1667526736LL, a4);
  v10 = (HANDLE *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  *(_DWORD *)(Pool2 + 32) = v8;
  v11 = (HANDLE *)(Pool2 + 16);
  if ( v8 < 0 )
  {
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_140A37C28;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwOpenKey(v11, 0x20019u, &ObjectAttributes);
    if ( v7 >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_140A37C28;
      ObjectAttributes.RootDirectory = a3;
      ObjectAttributes.Attributes = 512;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v7 = ZwOpenKey(v10 + 3, 0xF003Fu, &ObjectAttributes);
      if ( v7 >= 0 )
      {
        *((_DWORD *)v10 + 8) |= 0x40000000u;
        goto LABEL_4;
      }
      ZwClose(*v11);
    }
    ExFreePoolWithTag(v10, 0);
    return (unsigned int)v7;
  }
  *v11 = a2;
  *(_QWORD *)(Pool2 + 24) = a3;
LABEL_4:
  v12 = (HANDLE **)a1[1];
  if ( *v12 != a1 )
    __fastfail(3u);
  *v10 = a1;
  v10[1] = v12;
  *v12 = v10;
  a1[1] = v10;
  return (unsigned int)v7;
}
