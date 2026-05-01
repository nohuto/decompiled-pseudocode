/*
 * XREFs of ?GetArrangedState@CCommonApplicationViewArrangePositionImpl@@UEAAJPEAW4ARRANGEMENT_BASED_VIEW_STATE@@@Z @ 0x180182750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCommonApplicationViewArrangePositionImpl::GetArrangedState(
        CCommonApplicationViewArrangePositionImpl *this,
        enum ARRANGEMENT_BASED_VIEW_STATE *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 8);
  return 0LL;
}
