/*
 * XREFs of CmSiBugCheck @ 0x140617754
 * Callers:
 *     CmpOpenHiveFile @ 0x14068BA80 (CmpOpenHiveFile.c)
 *     CmpInitializeValueNameString @ 0x140708464 (CmpInitializeValueNameString.c)
 *     HvpAllExceptionsFatalFilter @ 0x140A1D290 (HvpAllExceptionsFatalFilter.c)
 *     HvpInpageErrorFilter @ 0x140A1D2B0 (HvpInpageErrorFilter.c)
 *     CmpInitializeKeyNameString @ 0x140A21F54 (CmpInitializeKeyNameString.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmSiBugCheck(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x51u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
