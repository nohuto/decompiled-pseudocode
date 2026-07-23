/*
 * XREFs of sub_1403761D8 @ 0x1403761D8
 * Callers:
 *     sub_140203EE0 @ 0x140203EE0 (sub_140203EE0.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402FBE30 @ 0x1402FBE30 (sub_1402FBE30.c)
 *     sub_1403763A8 @ 0x1403763A8 (sub_1403763A8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140673A24 @ 0x140673A24 (sub_140673A24.c)
 *     PsReferenceProcessFilePointer @ 0x140673AD0 (PsReferenceProcessFilePointer.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1403761D8(__int64 a1, __int64 a2, char a3, _BYTE *a4)
{
  _BYTE *v7; // rdi
  int v8; // eax
  __int64 v9; // r15
  NTSTATUS v10; // ebx
  int v11; // eax
  _BYTE *Pool2; // rax
  _BYTE v14[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-CCh] BYREF
  PVOID Object; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE SecurityDescriptor[512]; // [rsp+40h] [rbp-C0h] BYREF

  *a4 = 0;
  v7 = 0LL;
  v8 = *(_DWORD *)(a1 + 2172);
  v9 = 0LL;
  Object = 0LL;
  v14[0] = 0;
  if ( (v8 & 1) != 0 )
    return 0;
  v10 = PsReferenceProcessFilePointer(a1, &Object);
  if ( v10 < 0 )
    goto LABEL_17;
  v15 = 512;
  v7 = SecurityDescriptor;
  v10 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( v10 < 0 )
    goto LABEL_17;
  v11 = sub_140673A24((_DWORD)Object, 132, (unsigned int)SecurityDescriptor, 512, (__int64)&v15);
  if ( v11 == -1073741789 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, v15, 538994003LL);
    v7 = Pool2;
    if ( !Pool2 )
    {
      v10 = -1073741801;
      goto LABEL_17;
    }
    v10 = RtlCreateSecurityDescriptor(Pool2, 1u);
    if ( v10 < 0 )
      goto LABEL_17;
    v11 = sub_140673A24((_DWORD)Object, 132, (_DWORD)v7, v15, (__int64)&v15);
  }
  if ( v11 < 0 )
  {
    v10 = 0;
  }
  else
  {
    if ( !v7 )
    {
      v10 = -1073739509;
      goto LABEL_17;
    }
    v10 = sub_1403763A8(a2, v7, v14);
    if ( v10 >= 0 && a3 == 1 )
      v9 = sub_1402FBE30((__int64)v7);
    if ( v14[0] != 1 )
      goto LABEL_17;
    if ( a3 == 1 )
    {
      if ( !v9 )
      {
        v10 = -1073740702;
        goto LABEL_17;
      }
    }
    else if ( a3 )
    {
      goto LABEL_17;
    }
    *a4 = 1;
  }
LABEL_17:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  if ( v7 && v7 != SecurityDescriptor )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v10;
}
