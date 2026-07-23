/*
 * XREFs of ObQuerySecurityDescriptorInfo @ 0x1406C09EC
 * Callers:
 *     SeDefaultObjectMethod @ 0x1407291B0 (SeDefaultObjectMethod.c)
 *     WmipSecurityMethod @ 0x1407BE050 (WmipSecurityMethod.c)
 * Callees:
 *     ObpReferenceSecurityDescriptor @ 0x1406C2C34 (ObpReferenceSecurityDescriptor.c)
 *     ObpDereferenceSecurityDescriptorForObject @ 0x1406C310C (ObpDereferenceSecurityDescriptorForObject.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1406D5D70 (SeQuerySecurityDescriptorInfo.c)
 */

__int64 __fastcall ObQuerySecurityDescriptorInfo(__int64 a1, DWORD *a2, void *a3, ULONG *a4)
{
  __int64 v4; // r14
  PSECURITY_DESCRIPTOR v8; // rbp
  unsigned int v9; // ebx
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+40h] [rbp+8h] BYREF

  v4 = a1 - 48;
  ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)ObpReferenceSecurityDescriptor(a1 - 48);
  v8 = ObjectsSecurityDescriptor;
  v9 = SeQuerySecurityDescriptorInfo(a2, a3, a4, &ObjectsSecurityDescriptor);
  if ( v8 )
    ObpDereferenceSecurityDescriptorForObject(v8, v4);
  return v9;
}
