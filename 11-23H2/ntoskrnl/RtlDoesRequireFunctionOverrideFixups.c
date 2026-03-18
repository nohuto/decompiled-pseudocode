/*
 * XREFs of RtlDoesRequireFunctionOverrideFixups @ 0x14067BD68
 * Callers:
 *     MiPageHasRelocations @ 0x1406B130C (MiPageHasRelocations.c)
 *     MiInitializePrivateFixupBitmap @ 0x140705530 (MiInitializePrivateFixupBitmap.c)
 *     MiRelocateImagePfn @ 0x1407442C0 (MiRelocateImagePfn.c)
 *     MiPerformFixups @ 0x14079D900 (MiPerformFixups.c)
 * Callees:
 *     ?RtlpGetFunctionOverrideIndex@@YAPEBU_RTL_FUNCTION_OVERRIDE_INDEX@@PEBU_RTL_FUNCTION_OVERRIDE_INFORMATION@@K@Z @ 0x14067BB28 (-RtlpGetFunctionOverrideIndex@@YAPEBU_RTL_FUNCTION_OVERRIDE_INDEX@@PEBU_RTL_FUNCTION_OVERRIDE_IN.c)
 */

bool __fastcall RtlDoesRequireFunctionOverrideFixups(
        const struct _RTL_FUNCTION_OVERRIDE_INFORMATION *a1,
        unsigned int a2)
{
  return RtlpGetFunctionOverrideIndex(a1, a2) != 0LL;
}
