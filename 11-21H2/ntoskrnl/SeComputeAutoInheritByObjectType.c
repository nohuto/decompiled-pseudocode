/*
 * XREFs of SeComputeAutoInheritByObjectType @ 0x1402469E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402A4A60 @ 0x1402A4A60 (sub_1402A4A60.c)
 */

ULONG __stdcall SeComputeAutoInheritByObjectType(
        PVOID ObjectType,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_DESCRIPTOR ParentSecurityDescriptor)
{
  int v4; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  sub_1402A4A60((int)ObjectType, (int)SecurityDescriptor, (int)ParentSecurityDescriptor, (int)&v4, 0);
  return v4;
}
