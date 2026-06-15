/*
 * XREFs of ??1?$CAutoPtrList@VWorkItemBase@@@ATL@@QEAA@XZ @ 0x18015C2D4
 * Callers:
 *     _AudioDeviceMgr::AudioDeviceMgr_::_1_::dtor$7 @ 0x18006F708 (_AudioDeviceMgr--AudioDeviceMgr_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CAutoPtrList<WorkItemBase>::~CAutoPtrList<WorkItemBase>(__int64 a1)
{
  return ATL::CAtlList<ATL::CAutoPtr<WorkItemBase>,ATL::CAutoPtrElementTraits<WorkItemBase>>::RemoveAll(a1);
}
