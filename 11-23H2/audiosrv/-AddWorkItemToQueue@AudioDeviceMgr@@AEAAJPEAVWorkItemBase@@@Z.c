/*
 * XREFs of ?AddWorkItemToQueue@AudioDeviceMgr@@AEAAJPEAVWorkItemBase@@@Z @ 0x18000209C
 * Callers:
 *     ?OnDeviceRemoved@AudioDeviceMgr@@UEAAJPEBG@Z @ 0x1800019D0 (-OnDeviceRemoved@AudioDeviceMgr@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?NewNode@?$CAtlList@V?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VReacquireResourceWorkItem@@@2@@ATL@@AEAAPEAVCNode@12@AEAV?$CAutoPtr@VReacquireResourceWorkItem@@@2@PEAV312@1@Z @ 0x180002154 (-NewNode@-$CAtlList@V-$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VReac.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioDeviceMgr::AddWorkItemToQueue(AudioDeviceMgr *this, struct WorkItemBase *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // rax
  __int64 *v6; // rcx
  struct WorkItemBase *v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v8 = a2;
  v5 = ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::NewNode(
         (char *)this + 120,
         &v8,
         *((_QWORD *)this + 16));
  v6 = (__int64 *)*((_QWORD *)this + 16);
  if ( v6 )
    *v6 = v5;
  else
    *((_QWORD *)this + 15) = v5;
  *((_QWORD *)this + 16) = v5;
  SetEvent(*((HANDLE *)this + 26));
  if ( v8 )
    (*(void (__fastcall **)(struct WorkItemBase *, __int64))(*(_QWORD *)v8 + 8LL))(v8, 1LL);
  LeaveCriticalSection(v4);
  return 0LL;
}
