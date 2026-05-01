/*
 * XREFs of ?OnShellHookMessage@CShellSnapComponent@@UEAAJ_K_J@Z @ 0x18014CB00
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?DismissForTargetWindow@SnapFlyoutHost@@QEAAXPEAUHWND__@@@Z @ 0x18067A5CC (-DismissForTargetWindow@SnapFlyoutHost@@QEAAXPEAUHWND__@@@Z.c)
 *     ?OnForegroundChange@SnapFlyoutHost@@QEAAXXZ @ 0x18067BE8C (-OnForegroundChange@SnapFlyoutHost@@QEAAXXZ.c)
 */

__int64 __fastcall CShellSnapComponent::OnShellHookMessage(CShellSnapComponent *this, unsigned __int64 a2, HWND a3)
{
  RTL_SRWLOCK *v6; // rsi
  RTL_SRWLOCK *v7; // r14
  const char *v8; // r9
  _QWORD *i; // rdx
  std::_Ref_count_base *v10; // rcx
  __int64 v11; // rsi
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = (RTL_SRWLOCK *)*((_QWORD *)this + 93);
  if ( v6 )
  {
    v7 = v6 + 22;
    AcquireSRWLockShared(v6 + 22);
    for ( i = v6[3].Ptr; ; i += 2 )
    {
      if ( i == v6[4].Ptr )
      {
        v10 = 0LL;
        v11 = 0LL;
        goto LABEL_5;
      }
      if ( *(_BYTE *)(*(_QWORD *)(*i + 8LL) + 339LL) )
        break;
    }
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      v16,
      i);
    v11 = v16[0];
    v10 = (std::_Ref_count_base *)v16[1];
LABEL_5:
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
    if ( v7 )
      ReleaseSRWLockShared(v7);
    if ( v11 )
    {
      if ( a2 > 0x28 )
        goto LABEL_19;
      v13 = a2 - 18;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( !v14 || (v15 = v14 - 4) == 0 )
        {
          SnapFlyoutHost::OnForegroundChange(*((SnapFlyoutHost **)this + 93));
          return 0LL;
        }
        if ( v15 != 17 )
LABEL_19:
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x79A,
            (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
            v8);
      }
      SnapFlyoutHost::DismissForTargetWindow(*((SnapFlyoutHost **)this + 93), a3);
    }
  }
  return 0LL;
}
