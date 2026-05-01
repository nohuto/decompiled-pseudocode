/*
 * XREFs of ?FixDialogOwnershipForWindow@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x180063090
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@std@@QEAA@XZ @ 0x18013B8B0 (--1-$tuple@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@std@@QEAA@XZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_72db17ad2ce63b3f6d9d6af13d8729fe___ @ 0x1801D0178 (Windows--Internal--ComTaskPool--QueueTask__lambda_72db17ad2ce63b3f6d9d6af13d8729fe___.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::FixDialogOwnershipForWindow(CApplicationManager *this, HWND a2)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // eax
  int v5[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *((_QWORD *)this + 68);
  if ( v2 )
  {
    *(_QWORD *)v5 = a2;
    v6 = v2;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_72db17ad2ce63b3f6d9d6af13d8729fe___(v3, v5);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x101A,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v4,
        v5[0]);
    std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>::~tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>(v5);
  }
}
