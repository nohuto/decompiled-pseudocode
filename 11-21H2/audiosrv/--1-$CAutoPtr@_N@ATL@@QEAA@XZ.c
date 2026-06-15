/*
 * XREFs of ??1?$CAutoPtr@_N@ATL@@QEAA@XZ @ 0x180144014
 * Callers:
 *     _CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_0271267fe4b1063fcc66a341b5120ffb____::_1_::dtor$1 @ 0x18014099A (_CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_0271267fe4b1063fcc_ea_18014099A.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall ATL::CAutoPtr<bool>::~CAutoPtr<bool>(void **a1)
{
  operator delete(*a1);
  *a1 = 0LL;
}
