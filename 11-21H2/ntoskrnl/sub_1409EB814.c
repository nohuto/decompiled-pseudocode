/*
 * XREFs of sub_1409EB814 @ 0x1409EB814
 * Callers:
 *     sub_1406EF64C @ 0x1406EF64C (sub_1406EF64C.c)
 *     sub_140790B38 @ 0x140790B38 (sub_140790B38.c)
 *     sub_1409EBB58 @ 0x1409EBB58 (sub_1409EBB58.c)
 * Callees:
 *     sub_140722890 @ 0x140722890 (sub_140722890.c)
 *     sub_1407248C0 @ 0x1407248C0 (sub_1407248C0.c)
 *     sub_140794404 @ 0x140794404 (sub_140794404.c)
 */

__int64 __fastcall sub_1409EB814(__int64 a1)
{
  unsigned int v2; // ebx
  char v4; // [rsp+38h] [rbp+10h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp+18h] BYREF

  SecurityDescriptor = 0LL;
  v4 = 0;
  sub_1407248C0(a1, &SecurityDescriptor, &v4);
  v2 = sub_140794404(SecurityDescriptor, 0x1FFFFFu, 0LL);
  sub_140722890(SecurityDescriptor, v4, a1);
  return v2;
}
