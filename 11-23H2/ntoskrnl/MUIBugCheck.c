/*
 * XREFs of MUIBugCheck @ 0x14060FA74
 * Callers:
 *     NtGetMUIRegistryInfo @ 0x1407CA860 (NtGetMUIRegistryInfo.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MUIBugCheck(int a1)
{
  KeBugCheckEx(0x12Au, 2uLL, a1, 0LL, 0LL);
}
