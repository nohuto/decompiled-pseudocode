/*
 * XREFs of sub_140579410 @ 0x140579410
 * Callers:
 *     sub_140420B30 @ 0x140420B30 (sub_140420B30.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __noreturn sub_140579410()
{
  KeBugCheckEx(
    0x133u,
    0LL,
    (unsigned int)dword_140C2AAB8,
    (unsigned int)dword_140C2AABC,
    (ULONG_PTR)&BugCheckParameter4);
}
