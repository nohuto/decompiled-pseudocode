/*
 * XREFs of _lambda_37b02de6af5cc70082ddb03b5db08654_::operator() @ 0x180108738
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_37b02de6af5cc70082ddb03b5db08654___::Run @ 0x180108710 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_37b02de6af5cc70082ddb03b5db08654___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??$_Find_lower_bound@W4WindowingEnvironmentType@@@?$_Tree@V?$_Tmap_traits@W4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@U?$less@W4WindowingEnvironmentType@@@std@@V?$allocator@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBW4WindowingEnvironmentType@@@Z @ 0x18009988C (--$_Find_lower_bound@W4WindowingEnvironmentType@@@-$_Tree@V-$_Tmap_traits@W4WindowingEnvironment.c)
 *     ??0?$com_ptr_t@UIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Z @ 0x18010A520 (--0-$com_ptr_t@UIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18010A5A0 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4WindowingEnvironmentType@@V-$com_ptr_t.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18010A684 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4WindowingEn.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall lambda_37b02de6af5cc70082ddb03b5db08654_::operator()(int **a1)
{
  __int64 v2; // r10
  _DWORD *v3; // r11
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  int *v8; // r9
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  unsigned int i; // edi
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v27; // [rsp+20h] [rbp-48h] BYREF
  __int64 v28; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v29[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v30; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v32; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v33; // [rsp+78h] [rbp+10h] BYREF
  __int64 v34; // [rsp+80h] [rbp+18h] BYREF
  __int64 v35; // [rsp+88h] [rbp+20h] BYREF

  std::_Tree<std::_Tmap_traits<enum WindowingEnvironmentType,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>,std::less<enum WindowingEnvironmentType>,std::allocator<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>>,0>>::_Find_lower_bound<enum WindowingEnvironmentType>(
    (__int64 *)*a1 + 21,
    (__int64)v29,
    a1[1]);
  v4 = v30;
  if ( *(_BYTE *)(v30 + 25) || *v3 < *(_DWORD *)(v30 + 32) )
    v4 = *(_QWORD *)(v2 + 168);
  v5 = *(_QWORD *)(v4 + 40);
  v28 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5) )
  {
    v8 = *a1;
    v32 = v4;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(
      &v32,
      v6,
      v7,
      v8);
    v10 = std::_Tree_val<std::_Tree_simple_types<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>>>::_Extract(
            v9 + 168,
            v4);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(v10 + 40));
    std::_Deallocate<16,0>(v10, 48LL);
    v35 = 0LL;
    v11 = (__int64 *)*((_QWORD *)*a1 + 24);
    v12 = *v11;
    v35 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v12 + 48))(v11, &v35);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xB6,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v13,
        v27);
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5);
    wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowingEnvironment::IWindowingEnvironmentModel,wil::err_exception_policy>::com_ptr_t<Windows::Internal::ApplicationModel::WindowingEnvironment::IWindowingEnvironmentModel,wil::err_exception_policy>(
      &v27,
      v14);
    v15 = v27;
    if ( !v27 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xB9,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)0x8000FFFFLL,
        0);
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v27 + 64LL))(v27, 0LL);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xBB,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v16,
        v27);
    v33 = 0LL;
    v17 = *(_QWORD *)v15;
    v33 = 0LL;
    v18 = (*(__int64 (__fastcall **)(__int64, __int64 **))(v17 + 48))(v15, &v33);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xBE,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v18,
        v27);
    v19 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v33 + 56))(v33, &v32);
    if ( v19 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC1,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v19,
        v27);
    for ( i = 0; i < (unsigned int)v32; ++i )
    {
      v34 = 0LL;
      v21 = *v33;
      v34 = 0LL;
      v22 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v21 + 48))(v33, i, &v34);
      if ( v22 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xC6,
          (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v22,
          v27);
      v23 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 104LL))(v15, v34);
      if ( v23 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xC7,
          (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v23,
          v27);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v34);
    }
    v24 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)*a1 + 23) + 88LL))(*((_QWORD *)*a1 + 23), v15);
    if ( v24 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xCA,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v24,
        v27);
    v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 56LL))(v35);
    if ( v25 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xCC,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v25,
        v27);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v33);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v27);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v35);
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v28);
  return 0LL;
}
