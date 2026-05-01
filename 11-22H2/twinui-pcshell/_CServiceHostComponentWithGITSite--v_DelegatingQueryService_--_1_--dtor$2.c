/*
 * XREFs of _CServiceHostComponentWithGITSite::v_DelegatingQueryService_::_1_::dtor$2 @ 0x180641179
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompareToItemData@@QEAA@XZ @ 0x1800C8F40 (--1CompareToItemData@@QEAA@XZ.c)
 */

void __fastcall CServiceHostComponentWithGITSite::v_DelegatingQueryService_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 80) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 80) &= ~2u;
    CompareToItemData::~CompareToItemData((CompareToItemData *)(a2 + 32));
  }
}
