/*
 * XREFs of MUIBugCheck @ 0x14060F524
 * Callers:
 *     NtGetMUIRegistryInfo @ 0x1407CA590 (NtGetMUIRegistryInfo.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MUIBugCheck(int a1)
{
  KeBugCheckEx(0x12Au, 2uLL, a1, 0LL, 0LL);
}
