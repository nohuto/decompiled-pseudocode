/*
 * XREFs of ?IsUnspecifiedFrequency@@YA_NAEBU_D3DDDI_RATIONAL@@@Z @ 0x1C00169A8
 * Callers:
 *     BmlCompareTargetModesWithConstraint @ 0x1C01762D4 (BmlCompareTargetModesWithConstraint.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1C017793C (BmlDoesTargetModeObeyConstraint.c)
 *     BmlCompareTargetModeWithVirtualRefreshRate @ 0x1C03BD26C (BmlCompareTargetModeWithVirtualRefreshRate.c)
 *     ?_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x1C03BFD20 (-_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsUnspecifiedFrequency(const struct _D3DDDI_RATIONAL *a1)
{
  return *a1 == 0xFFFFFFFEFFFFFFFEuLL || a1->Numerator == -1 && a1->Denominator == -1;
}
