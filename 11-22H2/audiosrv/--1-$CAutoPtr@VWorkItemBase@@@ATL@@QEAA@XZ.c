/*
 * XREFs of ??1?$CAutoPtr@VWorkItemBase@@@ATL@@QEAA@XZ @ 0x1801634E4
 * Callers:
 *     _AudioDeviceMgr::OnDeviceStateChanged_::_1_::dtor$5 @ 0x1800780D0 (_AudioDeviceMgr--OnDeviceStateChanged_--_1_--dtor$5.c)
 *     _AudioDeviceMgr::AddWorkItemToQueue_::_1_::dtor$1 @ 0x1800780E2 (_AudioDeviceMgr--AddWorkItemToQueue_--_1_--dtor$1.c)
 *     _AudioDeviceMgr::WorkItemThreadProc_::_1_::dtor$0 @ 0x18007D3E0 (_AudioDeviceMgr--WorkItemThreadProc_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CAutoPtr<WorkItemBase>::~CAutoPtr<WorkItemBase>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 8LL))(v2, 1LL);
  *a1 = 0LL;
  return result;
}
