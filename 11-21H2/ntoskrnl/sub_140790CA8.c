/*
 * XREFs of sub_140790CA8 @ 0x140790CA8
 * Callers:
 *     sub_1406EF64C @ 0x1406EF64C (sub_1406EF64C.c)
 *     sub_14078EE9C @ 0x14078EE9C (sub_14078EE9C.c)
 *     sub_140790C44 @ 0x140790C44 (sub_140790C44.c)
 *     sub_140864164 @ 0x140864164 (sub_140864164.c)
 *     sub_1409DEFB8 @ 0x1409DEFB8 (sub_1409DEFB8.c)
 *     sub_1409E9E48 @ 0x1409E9E48 (sub_1409E9E48.c)
 *     sub_1409EA280 @ 0x1409EA280 (sub_1409EA280.c)
 *     sub_1409EB7FC @ 0x1409EB7FC (sub_1409EB7FC.c)
 * Callees:
 *     sub_140794404 @ 0x140794404 (sub_140794404.c)
 *     sub_140797BD4 @ 0x140797BD4 (sub_140797BD4.c)
 *     sub_14079805C @ 0x14079805C (sub_14079805C.c)
 */

__int64 __fastcall sub_140790CA8(__int64 a1, ACCESS_MASK a2)
{
  unsigned int v3; // ebx
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+48h] [rbp+20h] BYREF

  SecurityDescriptor = 0LL;
  sub_140797BD4(a1, &SecurityDescriptor);
  v3 = sub_140794404(SecurityDescriptor, a2);
  sub_14079805C(&SecurityDescriptor);
  return v3;
}
