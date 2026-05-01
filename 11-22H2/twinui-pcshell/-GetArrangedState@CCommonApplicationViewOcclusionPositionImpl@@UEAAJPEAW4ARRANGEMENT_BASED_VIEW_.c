/*
 * XREFs of ?GetArrangedState@CCommonApplicationViewOcclusionPositionImpl@@UEAAJPEAW4ARRANGEMENT_BASED_VIEW_STATE@@@Z @ 0x1801C3830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCommonApplicationViewOcclusionPositionImpl::GetArrangedState(
        CCommonApplicationViewOcclusionPositionImpl *this,
        enum ARRANGEMENT_BASED_VIEW_STATE *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 12);
  return 0LL;
}
