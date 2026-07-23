/*
 * XREFs of sub_14099D040 @ 0x14099D040
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __noreturn sub_14099D040()
{
  if ( !byte_140C5AC3C )
    sub_1402D6B0C((__int64)&unk_140CE2050, 0x16F54A4u, 0, 0, (__int64)&qword_14000EFB0, 1);
  KeBugCheckEx(0xA0u, 0xAuLL, 3uLL, 0LL, 0LL);
}
