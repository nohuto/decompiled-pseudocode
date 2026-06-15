/*
 * XREFs of ??1?$CAutoPtr@I@ATL@@QEAA@XZ @ 0x180024B8C
 * Callers:
 *     _CProcess::UpdateStreamCountAndProcessCategory_::_1_::dtor$1 @ 0x180047E50 (_CProcess--UpdateStreamCountAndProcessCategory_--_1_--dtor$1.c)
 *     _CProcess::GetActiveStreamCountStatsForEndpoint_::_1_::dtor$1 @ 0x1800482B0 (_CProcess--GetActiveStreamCountStatsForEndpoint_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016C28 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall ATL::CAutoPtr<unsigned int>::~CAutoPtr<unsigned int>(void **a1)
{
  operator delete(*a1);
  *a1 = 0LL;
}
