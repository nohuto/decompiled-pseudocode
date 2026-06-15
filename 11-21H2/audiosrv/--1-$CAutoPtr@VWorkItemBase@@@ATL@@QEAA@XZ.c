/*
 * XREFs of ??1?$CAutoPtr@VWorkItemBase@@@ATL@@QEAA@XZ @ 0x18015C294
 * Callers:
 *     _AudioDeviceMgr::WorkItemThreadProc_::_1_::dtor$0 @ 0x180072690 (_AudioDeviceMgr--WorkItemThreadProc_--_1_--dtor$0.c)
 *     _AudioDeviceMgr::AddWorkItemToQueue_::_1_::dtor$1 @ 0x18015C525 (_AudioDeviceMgr--AddWorkItemToQueue_--_1_--dtor$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
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
