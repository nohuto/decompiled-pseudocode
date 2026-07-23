/*
 * XREFs of HvpAllExceptionsFatalFilter @ 0x140A1D540
 * Callers:
 *     HvpViewMapMigrateCOWData @ 0x140885204 (HvpViewMapMigrateCOWData.c)
 * Callees:
 *     CmSiBugCheck @ 0x140617CA4 (CmSiBugCheck.c)
 */

void __fastcall __noreturn HvpAllExceptionsFatalFilter(ULONG_PTR *a1)
{
  CmSiBugCheck(0x21uLL, *(int *)*a1, *a1, a1[1]);
}
