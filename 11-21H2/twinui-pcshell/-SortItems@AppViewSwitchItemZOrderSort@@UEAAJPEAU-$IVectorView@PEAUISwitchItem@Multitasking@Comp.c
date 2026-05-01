/*
 * XREFs of ?SortItems@AppViewSwitchItemZOrderSort@@UEAAJPEAU?$IVectorView@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@PEAPEAU2345@@Z @ 0x1800515C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??$_Try_emplace@AEBQEAUHWND__@@$$V@?$map@PEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBQEAUHWND__@@@Z @ 0x180022AA8 (--$_Try_emplace@AEBQEAUHWND__@@$$V@-$map@PEAUHWND__@@V-$com_ptr_t@UISwitchItem@Multitasking@Comp.c)
 *     ??0?$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@1234@Upermission@01234@@Z @ 0x18002CEC8 (--0-$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$DefaultEqualityPre.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x180051930 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUHWND__@@V-$com_ptr_t@UISwitchItem@Multitas.c)
 *     ?GetApplicationViewForItemData@AppViewDataSourceHelpers@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX@Z @ 0x180051A60 (-GetApplicationViewForItemData@AppViewDataSourceHelpers@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1801093CC (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall AppViewSwitchItemZOrderSort::SortItems(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 size_of; // rax
  __int64 v6; // rax
  int v7; // eax
  unsigned int i; // ebx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  struct IInspectable *v13; // rdx
  void **v14; // r9
  int ApplicationViewForItemData; // eax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rbx
  int v21; // esi
  void *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // eax
  __int64 *v29; // [rsp+20h] [rbp-78h] BYREF
  __int128 v30; // [rsp+28h] [rbp-70h] BYREF
  AppViewDataSourceHelpers *v31; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v32; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v33[24]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v34; // [rsp+60h] [rbp-38h] BYREF
  _BYTE v35[8]; // [rsp+68h] [rbp-30h] BYREF
  _BYTE v36[40]; // [rsp+70h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  _QWORD *v38; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v39; // [rsp+B8h] [rbp+20h]

  v38 = a3;
  *a3 = 0LL;
  v30 = 0LL;
  size_of = std::_Get_size_of_n<48>(1LL);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)v6 = v6;
  *(_QWORD *)(v6 + 8) = v6;
  *(_QWORD *)(v6 + 16) = v6;
  *(_WORD *)(v6 + 24) = 257;
  *(_QWORD *)&v30 = v6;
  v7 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*a2 + 56))(a2, &v32);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x20,
      (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitemzordersort.cpp",
      (const char *)(unsigned int)v7,
      (int)v29);
  for ( i = 0; ; ++i )
  {
    v39 = i;
    if ( i >= v32 )
      break;
    v9 = *a2;
    v29 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 **))(v9 + 48))(a2, i, &v29);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x26,
        (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitemzordersort.cpp",
        (const char *)(unsigned int)v10,
        (int)v29);
    v31 = 0LL;
    v11 = *v29;
    v31 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64 *, AppViewDataSourceHelpers **))(v11 + 96))(v29, &v31);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x29,
        (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitemzordersort.cpp",
        (const char *)(unsigned int)v12,
        (int)v29);
    *(_QWORD *)v33 = 0LL;
    ApplicationViewForItemData = AppViewDataSourceHelpers::GetApplicationViewForItemData(
                                   v31,
                                   v13,
                                   (const struct _GUID *)v33,
                                   v14);
    if ( ApplicationViewForItemData < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2C,
        (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitemzordersort.cpp",
        (const char *)(unsigned int)ApplicationViewForItemData,
        (int)v29);
    v16 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)v33 + 72LL))(*(_QWORD *)v33, v35);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2F,
        (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitemzordersort.cpp",
        (const char *)(unsigned int)v16,
        (int)v29);
    v17 = *(_QWORD *)std::map<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>::_Try_emplace<HWND__ * const &,>(
                       (__int64 *)&v30,
                       (__int64)v36);
    v18 = (__int64)v29;
    v19 = *(_QWORD *)(v17 + 40);
    *(_QWORD *)(v17 + 40) = v29;
    if ( v18 )
      (*(void (__fastcall **)(__int64 *))(*v29 + 8))(v29);
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)v33);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v31);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v29);
  }
  v20 = 0LL;
  v38 = 0LL;
  v21 = 0;
  v22 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v22
    && (v23 = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>>::Vector<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>>((__int64)v22)) != 0 )
  {
    v20 = v23;
    v38 = (_QWORD *)v23;
  }
  else
  {
    v21 = -2147024882;
  }
  if ( v21 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x37,
      (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitemzordersort.cpp",
      (const char *)(unsigned int)v21,
      (int)v29);
  *(_OWORD *)&v33[8] = 0LL;
  v24 = std::_Get_size_of_n<48>(1LL);
  v25 = std::_Allocate<16,std::_Default_allocate_traits,0>(v24);
  *(_QWORD *)v25 = v25;
  *(_QWORD *)(v25 + 8) = v25;
  *(_QWORD *)(v25 + 16) = v25;
  *(_WORD *)(v25 + 24) = 257;
  *(_QWORD *)&v33[8] = v30;
  *(_QWORD *)&v30 = v25;
  v26 = *(_QWORD *)&v33[16];
  *(_QWORD *)&v33[16] = *((_QWORD *)&v30 + 1);
  *((_QWORD *)&v30 + 1) = v26;
  v34 = v20;
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
  EnumWindows((WNDENUMPROC)lambda_6bb0be43239fa1f3b88f409e9e19d731_::_lambda_invoker_cdecl_, (LPARAM)&v33[8]);
  v27 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v20 + 64LL))(v20, a3);
  if ( v27 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x56,
      (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitemzordersort.cpp",
      (const char *)(unsigned int)v27,
      (int)v29);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v34);
  std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>,void *>>>(
    &v33[8],
    &v33[8],
    *(_QWORD *)(*(_QWORD *)&v33[8] + 8LL));
  std::_Deallocate<16,0>(*(_QWORD *)&v33[8], 48LL);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v38);
  std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>,void *>>>(
    &v30,
    &v30,
    *(_QWORD *)(v30 + 8));
  std::_Deallocate<16,0>(v30, 48LL);
  return 0LL;
}
