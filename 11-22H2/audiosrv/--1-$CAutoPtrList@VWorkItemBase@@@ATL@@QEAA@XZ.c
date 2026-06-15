/*
 * XREFs of ??1?$CAutoPtrList@VWorkItemBase@@@ATL@@QEAA@XZ @ 0x180163524
 * Callers:
 *     _AudioDeviceMgr::AudioDeviceMgr_::_1_::dtor$7 @ 0x18007CF63 (_AudioDeviceMgr--AudioDeviceMgr_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAutoPtrList<WorkItemBase>::~CAutoPtrList<WorkItemBase>(__int64 a1)
{
  ATL::CAtlList<ATL::CAutoPtr<WorkItemBase>,ATL::CAutoPtrElementTraits<WorkItemBase>>::RemoveAll(a1);
}
