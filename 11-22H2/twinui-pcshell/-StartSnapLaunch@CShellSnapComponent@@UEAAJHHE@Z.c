/*
 * XREFs of ?StartSnapLaunch@CShellSnapComponent@@UEAAJHHE@Z @ 0x180222160
 * Callers:
 *     <none>
 * Callees:
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x1800863BC (-complete_without_lock@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?start@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x1800864D4 (-start@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800D2424 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800D246C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??$_Try_emplace@AEBH$$V@?$_Hash@V?$_Umap_traits@HIV?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHI@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBHI@std@@PEAX@std@@_N@1@AEBH@Z @ 0x180220684 (--$_Try_emplace@AEBH$$V@-$_Hash@V-$_Umap_traits@HIV-$_Uhash_compare@HU-$hash@H@std@@U-$equal_to@.c)
 *     ??$emplace@U?$pair@HV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@@?$_Hash@V?$_Umap_traits@HV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@V?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@HV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@1@@Z @ 0x180220A24 (--$emplace@U-$pair@HV-$tip_test@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@.c)
 *     ??$make_pair@AEAHAEAV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@YA?AU?$pair@HV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@0@AEAHAEAV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@Z @ 0x180220D34 (--$make_pair@AEAHAEAV-$tip_test@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18022185C (--1-$com_ptr_t@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@Uerr_returncode_policy@w.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180221970 (--1-$test_data_control@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@1@XZ @ 0x180221A44 (--C-$tip_test@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_data.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180223214 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@AEBAAEAV.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@HURect@Foundation@Windows@@V?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@std@@@std@@@1@AEBH@Z @ 0x18065EAA0 (--$find@X@-$_Hash@V-$_Umap_traits@HURect@Foundation@Windows@@V-$_Uhash_compare@HU-$hash@H@std@@U.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CShellSnapComponent::StartSnapLaunch(CShellSnapComponent *this, int a2, int a3, char a4)
{
  _QWORD *v6; // rax
  __int64 v7; // rdx
  int v8; // esi
  float v9; // xmm6_4
  int v10; // edi
  int v11; // ebx
  _DWORD *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  const char *v18; // r9
  __int64 result; // rax
  unsigned __int8 v20[8]; // [rsp+20h] [rbp-78h] BYREF
  void *v21; // [rsp+28h] [rbp-70h] BYREF
  int v22; // [rsp+30h] [rbp-68h] BYREF
  float *v23; // [rsp+38h] [rbp-60h] BYREF
  void *v24; // [rsp+40h] [rbp-58h] BYREF
  __int128 v25; // [rsp+48h] [rbp-50h] BYREF
  _BYTE v26[24]; // [rsp+58h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v22 = a2;
  *(_DWORD *)v20 = a3;
  v21 = 0LL;
  v6 = (_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>::ensure_data(&v21);
  tip2::details::shared_data<0,0,0>::start(*v6 + 8LL, &v25);
  *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>::operator->(
                (__int64)&v21,
                (__int64 *)&v23)
           + 265) = a4 != 0;
  tip2::test_data_control<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>(
    (void **)&v23,
    v7);
  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)this + 174, (RTL_SRWLOCK **)&v25);
  std::_Hash<std::_Umap_traits<int,Windows::Foundation::Rect,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>,std::allocator<std::pair<int const,Windows::Foundation::Rect>>,0>>::find<void>(
    (char *)this + 1408,
    &v23,
    &v22);
  try
  {
    if ( v23 == *((float **)this + 177) )
    {
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>::operator->(
                    (__int64)&v21,
                    (__int64 *)&v23)
               + 264) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>(
        (void **)&v23,
        v17);
      if ( v21 )
        tip2::details::shared_data<0,0,0>::complete_without_lock((__int64)v21 + 8);
    }
    else
    {
      v8 = (int)(float)(v23[6] + v23[8]);
      v9 = v23[5];
      v10 = (int)(float)(v9 + v23[7]);
      v11 = (int)v23[6];
      v12 = (_DWORD *)*tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>::operator->(
                         (__int64)&v21,
                         (__int64 *)&v23);
      v12[67] = (int)v9;
      v12[68] = v11;
      v12[69] = v10;
      v12[70] = v8;
      tip2::test_data_control<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>(
        (void **)&v23,
        v13);
      v14 = std::make_pair<int &,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>> &>(
              (__int64)&v23,
              &v22,
              (__int64)&v21);
      std::_Hash<std::_Umap_traits<int,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>,std::allocator<std::pair<int const,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>>>,0>>::emplace<std::pair<int,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>>>(
        (float *)this + 368,
        (__int64)v26,
        v14);
      wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>,wil::err_returncode_policy>(&v24);
      *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>::operator->(
                     (__int64)&v21,
                     (__int64 *)&v23)
                + 320) = *(_DWORD *)v20;
      tip2::test_data_control<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>(
        (void **)&v23,
        v15);
      v16 = std::_Hash<std::_Umap_traits<int,unsigned int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>,std::allocator<std::pair<int const,unsigned int>>,0>>::_Try_emplace<int const &,>(
              (float *)this + 384,
              (__int64)v26,
              v20);
      ++*(_DWORD *)(*(_QWORD *)v16 + 20LL);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v25);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>,wil::err_returncode_policy>(&v21);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3C6,
                           (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                           v18);
  }
  return result;
}
