/*
 * XREFs of ??1?$CAutoPtr@I@ATL@@QEAA@XZ @ 0x180024D7C
 * Callers:
 *     _CProcess::UpdateStreamCountAndProcessCategory_::_1_::dtor$1 @ 0x1800492E0 (_CProcess--UpdateStreamCountAndProcessCategory_--_1_--dtor$1.c)
 *     _CProcess::GetActiveStreamCountStatsForEndpoint_::_1_::dtor$1 @ 0x180049740 (_CProcess--GetActiveStreamCountStatsForEndpoint_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016E18 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall ATL::CAutoPtr<unsigned int>::~CAutoPtr<unsigned int>(void **a1)
{
  operator delete(*a1);
  *a1 = 0LL;
}
