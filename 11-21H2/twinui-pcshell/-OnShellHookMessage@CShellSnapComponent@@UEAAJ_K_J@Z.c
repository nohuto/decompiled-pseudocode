/*
 * XREFs of ?OnShellHookMessage@CShellSnapComponent@@UEAAJ_K_J@Z @ 0x180127D20
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SAFlyout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBF38 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SAFlyout@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?DismissForTargetWindow@SnapFlyoutHost@@QEAAXPEAUHWND__@@@Z @ 0x1805AF134 (-DismissForTargetWindow@SnapFlyoutHost@@QEAAXPEAUHWND__@@@Z.c)
 *     ?OnForegroundChange@SnapFlyoutHost@@QEAAXXZ @ 0x1805AFFBC (-OnForegroundChange@SnapFlyoutHost@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CShellSnapComponent::OnShellHookMessage(CShellSnapComponent *this, __int64 a2, HWND a3, __int64 a4)
{
  RTL_SRWLOCK *v7; // rdi
  _QWORD *Ptr; // rdx
  _QWORD *v9; // r8
  const char *v11; // r9
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v13; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *v15; // [rsp+68h] [rbp+20h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SAFlyout>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SAFlyout>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    a4);
  v7 = (RTL_SRWLOCK *)*((_QWORD *)this + 102);
  if ( !v7 )
    return 0LL;
  AcquireSRWLockExclusive(v7 + 18);
  v15 = v7 + 18;
  Ptr = v7[3].Ptr;
  v9 = v7[4].Ptr;
  if ( Ptr == v9 )
    goto LABEL_3;
  while ( !*(_BYTE *)(*(_QWORD *)(*Ptr + 16LL) + 299LL) )
  {
    Ptr += 2;
    if ( Ptr == v9 )
      goto LABEL_3;
  }
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    &v12,
    Ptr);
  if ( !v12 )
  {
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
LABEL_3:
    if ( v7 != (RTL_SRWLOCK *)-144LL )
      ReleaseSRWLockExclusive(v7 + 18);
    return 0LL;
  }
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v15);
  if ( a2 == 2 )
  {
    SnapFlyoutHost::DismissForTargetWindow(*((SnapFlyoutHost **)this + 102), a3);
  }
  else
  {
    if ( a2 != 4 && a2 != 32772 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x6AE,
        (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        v11);
    SnapFlyoutHost::OnForegroundChange(*((SnapFlyoutHost **)this + 102));
  }
  return 0LL;
}
