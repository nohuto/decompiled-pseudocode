/*
 * XREFs of ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18050EFD4
 * Callers:
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1802DAD90 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x180514850 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 * Callees:
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x180098A8C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@XZ @ 0x1800A8D90 (--1-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ca8ece6d0ba6e230db3589fff51d060c___ @ 0x180205970 (Windows--Internal--ComTaskPool--QueueTask__lambda_ca8ece6d0ba6e230db3589fff51d060c___.c)
 *     _lambda_ca8ece6d0ba6e230db3589fff51d060c_::_lambda_ca8ece6d0ba6e230db3589fff51d060c_ @ 0x1802065C4 (_lambda_ca8ece6d0ba6e230db3589fff51d060c_--_lambda_ca8ece6d0ba6e230db3589fff51d060c_.c)
 *     ?GetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18020A408 (-GetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAA-AV-$basic_string@GU-$char_traits@G@st.c)
 *     ?complete@?$tip_test@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@tip@@QEAAXXZ @ 0x18020C3B4 (-complete@-$tip_test@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@tip@@QEAAXXZ.c)
 *     ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x1805132A0 (-IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ.c)
 *     ?close@?$test_data_control@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@tip@@QEAAXXZ @ 0x18051CC14 (-close@-$test_data_control@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@tip@@QEAAXXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@details@tip@@@std@@XZ @ 0x18051CD38 (-ensure_data@-$tip_test@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@tip@@AEBAAEAV-$sh.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::CreateModalExperienceAsync(struct _RTL_CRITICAL_SECTION *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 *p_OwningThread; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  TouchKeyboardExperienceManager *v19; // [rsp+20h] [rbp-60h] BYREF
  std::_Ref_count_base *v20; // [rsp+28h] [rbp-58h]
  struct _RTL_CRITICAL_SECTION v21; // [rsp+30h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  if ( !TouchKeyboardExperienceManager::IsSessionShuttingDown() )
  {
    TouchKeyboardExperienceManager::GetCurrentInputAppId(this, &v21);
    if ( v21.OwningThread )
    {
      if ( !BYTE1(this[25].RecursionCount) )
      {
        v19 = (TouchKeyboardExperienceManager *)this;
        v15 = lambda_ca8ece6d0ba6e230db3589fff51d060c_::_lambda_ca8ece6d0ba6e230db3589fff51d060c_(
                &v21.SpinCount,
                (__int64)&v21,
                &v19);
        v10 = Windows::Internal::ComTaskPool::QueueTask__lambda_ca8ece6d0ba6e230db3589fff51d060c___(
                v17,
                v16,
                this[24].RecursionCount,
                (__int64)v15);
        wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(&v21.SpinCount, v18);
        if ( v10 >= 0 )
          v10 = 0;
        else
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x102A,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v10);
        goto LABEL_29;
      }
      p_OwningThread = (__int64 *)&this[54].OwningThread;
      v11 = tip::tip_test<KeyboardHostingTipTests::_tip_InputAppActivationTest>::ensure_data(&this[54].OwningThread);
      v12 = *(_QWORD *)(v11 + 8);
      if ( v12 )
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      v19 = *(TouchKeyboardExperienceManager **)v11;
      v20 = *(std::_Ref_count_base **)(v11 + 8);
      tip::details::test_common_data<0>::begin_update((__int64)v19 + 8);
      v13 = (__int64)v19 + 200;
      if ( !v19 )
        v13 = 24LL;
      *(_BYTE *)v13 = 1;
      tip::test_data_control<KeyboardHostingTipTests::_tip_InputAppActivationTest>::close(&v19);
      if ( v20 )
        std::_Ref_count_base::_Decref(v20);
      v10 = -2147023756;
    }
    else
    {
      p_OwningThread = (__int64 *)&this[54].OwningThread;
      v7 = tip::tip_test<KeyboardHostingTipTests::_tip_InputAppActivationTest>::ensure_data(&this[54].OwningThread);
      v8 = *(_QWORD *)(v7 + 8);
      if ( v8 )
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      v19 = *(TouchKeyboardExperienceManager **)v7;
      v20 = *(std::_Ref_count_base **)(v7 + 8);
      tip::details::test_common_data<0>::begin_update((__int64)v19 + 8);
      v9 = (__int64)v19 + 184;
      if ( !v19 )
        v9 = 8LL;
      *(_BYTE *)v9 = 1;
      tip::test_data_control<KeyboardHostingTipTests::_tip_InputAppActivationTest>::close(&v19);
      if ( v20 )
        std::_Ref_count_base::_Decref(v20);
      v10 = -2147418113;
    }
    tip::tip_test<_tip_LoadCustomVDWallpaperWithGesturePerfTest>::complete(p_OwningThread);
LABEL_29:
    wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(&v21, v14);
    return (unsigned int)v10;
  }
  v2 = tip::tip_test<KeyboardHostingTipTests::_tip_InputAppActivationTest>::ensure_data(&this[54].OwningThread);
  v3 = *(_QWORD *)(v2 + 8);
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  v19 = *(TouchKeyboardExperienceManager **)v2;
  v20 = *(std::_Ref_count_base **)(v2 + 8);
  tip::details::test_common_data<0>::begin_update((__int64)v19 + 8);
  v4 = (__int64)v19 + 193;
  if ( !v19 )
    v4 = 17LL;
  *(_BYTE *)v4 = 1;
  tip::test_data_control<KeyboardHostingTipTests::_tip_InputAppActivationTest>::close(&v19);
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
  tip::tip_test<_tip_LoadCustomVDWallpaperWithGesturePerfTest>::complete((__int64 *)&this[54].OwningThread);
  return 2147943041LL;
}
