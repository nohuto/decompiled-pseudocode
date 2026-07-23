/*
 * XREFs of sub_14042A530 @ 0x14042A530
 * Callers:
 *     sub_140236890 @ 0x140236890 (sub_140236890.c)
 *     sub_14042A590 @ 0x14042A590 (sub_14042A590.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn sub_14042A530(ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x139u, 0xAuLL, 0LL, 0LL, BugCheckParameter4);
}
