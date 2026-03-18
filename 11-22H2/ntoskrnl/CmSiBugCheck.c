/*
 * XREFs of CmSiBugCheck @ 0x1406177C4
 * Callers:
 *     CmpOpenHiveFile @ 0x14068BA80 (CmpOpenHiveFile.c)
 *     CmpInitializeValueNameString @ 0x140708514 (CmpInitializeValueNameString.c)
 *     HvpAllExceptionsFatalFilter @ 0x140A1D340 (HvpAllExceptionsFatalFilter.c)
 *     HvpInpageErrorFilter @ 0x140A1D360 (HvpInpageErrorFilter.c)
 *     CmpInitializeKeyNameString @ 0x140A22004 (CmpInitializeKeyNameString.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmSiBugCheck(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x51u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
