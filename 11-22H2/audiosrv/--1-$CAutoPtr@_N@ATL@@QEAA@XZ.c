/*
 * XREFs of ??1?$CAutoPtr@_N@ATL@@QEAA@XZ @ 0x18014A430
 * Callers:
 *     _CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71____::_1_::dtor$1 @ 0x18007AFA0 (_CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c_ea_18007AFA0.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall ATL::CAutoPtr<bool>::~CAutoPtr<bool>(void **a1)
{
  operator delete(*a1);
  *a1 = 0LL;
}
