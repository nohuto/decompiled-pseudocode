/*
 * XREFs of sub_14020B710 @ 0x14020B710
 * Callers:
 *     sub_14068D6C4 @ 0x14068D6C4 (sub_14068D6C4.c)
 * Callees:
 *     ZwCreateSection @ 0x14041C0A0 (ZwCreateSection.c)
 */

NTSTATUS __fastcall sub_14020B710(HANDLE *a1, ACCESS_MASK a2, ULONG a3, __int64 a4, void *a5)
{
  OBJECT_ATTRIBUTES v6; // [rsp+40h] [rbp-38h] BYREF

  *(_QWORD *)&v6.Length = 48LL;
  v6.RootDirectory = 0LL;
  v6.ObjectName = 0LL;
  *(_QWORD *)&v6.Attributes = 512LL;
  *(_OWORD *)&v6.SecurityDescriptor = 0LL;
  return ZwCreateSection(a1, a2, &v6, 0LL, a3, 0x4000000u, a5);
}
