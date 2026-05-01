/*
 * XREFs of ?MoveDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@I@Z @ 0x180601E60
 * Callers:
 *     ?MoveDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@I@Z @ 0x1802A8990 (-MoveDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@I@Z.c)
 *     ?MoveDesktop@CVirtualDesktopManager@@WBI@EAAJPEAUIVirtualDesktop@@I@Z @ 0x1802A89B0 (-MoveDesktop@CVirtualDesktopManager@@WBI@EAAJPEAUIVirtualDesktop@@I@Z.c)
 * Callees:
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180095B9C (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802CF31A (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@tip@@@tip@@YA?A_PXZ @ 0x180540D4C (--$open_and_watch_errors@V-$tip_test@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@.c)
 *     ?GetSwitcherType@CVirtualDesktopManager@@AEAA?AW4SwitcherType@VirtualDesktop@@XZ @ 0x180601C38 (-GetSwitcherType@CVirtualDesktopManager@@AEAA-AW4SwitcherType@VirtualDesktop@@XZ.c)
 */

__int64 __fastcall CVirtualDesktopManager::MoveDesktop(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2,
        unsigned int a3)
{
  __int64 v3; // r15
  char v6; // di
  __int64 v7; // rbx
  __int64 v8; // rax
  std::_Ref_count_base *v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rax
  std::_Ref_count_base *v12; // rbx
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v16; // rbx
  __int64 v17; // rax
  std::_Ref_count_base *v18; // rbx
  unsigned int v19; // ebx
  __int64 v20; // [rsp+30h] [rbp-50h] BYREF
  std::_Ref_count_base *v21; // [rsp+38h] [rbp-48h]
  _BYTE v22[8]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v23[24]; // [rsp+48h] [rbp-38h] BYREF
  int v24; // [rsp+60h] [rbp-20h]
  __int64 v25; // [rsp+70h] [rbp-10h] BYREF
  std::_Ref_count_base *v26; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  unsigned __int64 v28; // [rsp+B0h] [rbp+30h] BYREF

  v3 = a3;
  tip::open_and_watch_errors<tip::tip_test<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>>((__int64)v22);
  v6 = ((unsigned int)CVirtualDesktopManager::GetSwitcherType((__int64)this - 8) != 1) + 2;
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v20,
    &v25);
  v7 = v20;
  tip::details::test_common_data<1>::begin_update(v20 + 8);
  v8 = v7 + 188;
  if ( !v7 )
    v8 = 12LL;
  *(_BYTE *)v8 = v6;
  if ( v7 )
  {
    tip::details::test_common_data<1>::end_update(v7 + 8);
    v9 = 0LL;
    if ( v21 )
      std::_Ref_count_base::_Decref(v21);
  }
  else
  {
    v9 = v21;
  }
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  if ( *((_DWORD *)this + 49) )
  {
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &v20,
      &v25);
    v10 = v20;
    tip::details::test_common_data<1>::begin_update(v20 + 8);
    v11 = v10 + 196;
    if ( !v10 )
      v11 = 20LL;
    *(_BYTE *)v11 = 1;
    if ( v10 )
    {
      tip::details::test_common_data<1>::end_update(v10 + 8);
      v12 = 0LL;
      if ( v21 )
        std::_Ref_count_base::_Decref(v21);
    }
    else
    {
      v12 = v21;
    }
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    tip::details::test_common_data<1>::complete(v25 + 8);
    v13 = -2147019873;
    v14 = 735LL;
    goto LABEL_19;
  }
  v28 = 0LL;
  v13 = (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *, unsigned __int64 *))(**((_QWORD **)this + 12)
                                                                                        + 104LL))(
          *((_QWORD *)this + 12),
          a2,
          &v28);
  if ( v13 < 0 )
  {
    v14 = 739LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v13);
    if ( v26 )
      std::_Ref_count_base::_Decref(v26);
    if ( v24 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v23);
    return (unsigned int)v13;
  }
  if ( v28 == v3 )
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x2EA,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)0x8000FFFFLL);
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &v20,
      &v25);
    v16 = v20;
    tip::details::test_common_data<1>::begin_update(v20 + 8);
    v17 = v16 + 197;
    if ( !v16 )
      v17 = 21LL;
    *(_BYTE *)v17 = 1;
    if ( v16 )
    {
      tip::details::test_common_data<1>::end_update(v16 + 8);
      v18 = 0LL;
      if ( v21 )
        std::_Ref_count_base::_Decref(v21);
    }
    else
    {
      v18 = v21;
    }
    if ( v18 )
      std::_Ref_count_base::_Decref(v18);
    tip::details::test_common_data<1>::complete(v25 + 8);
  }
  else
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *, __int64))(**((_QWORD **)this + 12) + 112LL))(
            *((_QWORD *)this + 12),
            a2,
            v3);
    if ( v13 < 0 )
    {
      v14 = 753LL;
      goto LABEL_19;
    }
    v19 = v28;
    if ( v28 > (unsigned int)v28 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2FC,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)0x8000FFFFLL);
    v13 = (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *, _QWORD, _QWORD))(**((_QWORD **)this + 15) + 56LL))(
            *((_QWORD *)this + 15),
            a2,
            v19,
            (unsigned int)v3);
    if ( v13 < 0 )
    {
      v14 = 765LL;
      goto LABEL_19;
    }
  }
  if ( v26 )
    std::_Ref_count_base::_Decref(v26);
  if ( v24 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v23);
  return 0LL;
}
