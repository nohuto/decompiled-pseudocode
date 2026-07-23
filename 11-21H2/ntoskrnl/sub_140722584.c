/*
 * XREFs of sub_140722584 @ 0x140722584
 * Callers:
 *     sub_1406BB860 @ 0x1406BB860 (sub_1406BB860.c)
 *     sub_140725080 @ 0x140725080 (sub_140725080.c)
 * Callees:
 *     SeQuerySecurityDescriptorInfo @ 0x1407213B0 (SeQuerySecurityDescriptorInfo.c)
 *     sub_1407228BC @ 0x1407228BC (sub_1407228BC.c)
 *     sub_140722910 @ 0x140722910 (sub_140722910.c)
 */

__int64 __fastcall sub_140722584(__int64 a1, DWORD *a2, void *a3, ULONG *a4)
{
  __int64 v4; // r14
  PSECURITY_DESCRIPTOR v8; // rbp
  unsigned int v9; // ebx
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+40h] [rbp+8h] BYREF

  v4 = a1 - 48;
  ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)sub_140722910(a1 - 48);
  v8 = ObjectsSecurityDescriptor;
  v9 = SeQuerySecurityDescriptorInfo(a2, a3, a4, &ObjectsSecurityDescriptor);
  if ( v8 )
    sub_1407228BC(v8, v4);
  return v9;
}
