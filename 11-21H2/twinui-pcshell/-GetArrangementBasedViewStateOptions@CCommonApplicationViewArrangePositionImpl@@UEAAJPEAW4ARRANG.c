/*
 * XREFs of ?GetArrangementBasedViewStateOptions@CCommonApplicationViewArrangePositionImpl@@UEAAJPEAW4ARRANGEMENT_BASED_VIEW_STATE_OPTIONS@@@Z @ 0x180182770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCommonApplicationViewArrangePositionImpl::GetArrangementBasedViewStateOptions(
        CCommonApplicationViewArrangePositionImpl *this,
        enum ARRANGEMENT_BASED_VIEW_STATE_OPTIONS *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 10);
  return 0LL;
}
