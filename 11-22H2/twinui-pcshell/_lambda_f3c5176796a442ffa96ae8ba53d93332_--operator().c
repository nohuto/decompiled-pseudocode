/*
 * XREFs of _lambda_f3c5176796a442ffa96ae8ba53d93332_::operator() @ 0x18008EBD8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f3c5176796a442ffa96ae8ba53d93332___::Run @ 0x18008EBB0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_f3c5176796a442ffa96ae8ba53d93332___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x18008EB60 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4WindowingEnvironmentType@@V-$com_ptr_t@U.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall lambda_f3c5176796a442ffa96ae8ba53d93332_::operator()(__int64 *a1)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  int v5; // eax
  __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  unsigned int i; // edi
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  unsigned int j; // ebx
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 *v24; // [rsp+20h] [rbp-38h] BYREF
  __int64 v25; // [rsp+28h] [rbp-30h] BYREF
  __int64 v26[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v28; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v29; // [rsp+68h] [rbp+10h] BYREF
  __int64 *v30; // [rsp+70h] [rbp+18h] BYREF
  __int64 *v31; // [rsp+78h] [rbp+20h] BYREF

  v24 = 0LL;
  v2 = *(__int64 **)(*a1 + 184);
  v3 = *v2;
  v24 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v3 + 64))(v2, &v24);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x102,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
      (const char *)(unsigned int)v4,
      (int)v24);
  v5 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v24 + 56))(v24, &v28);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x105,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
      (const char *)(unsigned int)v5,
      (int)v24);
  v26[0] = 0LL;
  v6 = *(__int64 **)(*a1 + 192);
  v7 = *v6;
  v26[0] = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v7 + 48))(v6, v26);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x108,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
      (const char *)(unsigned int)v8,
      (int)v24);
  for ( i = 0; i < v28; ++i )
  {
    v30 = 0LL;
    v14 = *v24;
    v30 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 **))(v14 + 48))(v24, i, &v30);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x10D,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v15,
        (int)v24);
    v31 = 0LL;
    v16 = *v30;
    v31 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v16 + 48))(v30, &v31);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x110,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v17,
        (int)v24);
    v18 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v31 + 56))(v31, &v29);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x113,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v18,
        (int)v24);
    for ( j = 0; j < v29; ++j )
    {
      v25 = 0LL;
      v20 = *v31;
      v25 = 0LL;
      v21 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v20 + 48))(v31, j, &v25);
      if ( v21 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x118,
          (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v21,
          (int)v24);
      v22 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v30 + 104))(v30, v25);
      if ( v22 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x119,
          (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v22,
          (int)v24);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
    }
    v23 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*a1 + 184) + 88LL))(*(_QWORD *)(*a1 + 184), v30);
    if ( v23 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x11C,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v23,
        (int)v24);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v31);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v30);
  }
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26[0] + 56LL))(v26[0]);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x11F,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
      (const char *)(unsigned int)v10,
      (int)v24);
  v11 = *a1;
  v12 = *(_QWORD *)(*a1 + 168);
  std::_Tree_val<std::_Tree_simple_types<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>,void *>>>(
    *a1 + 168,
    *a1 + 168,
    *(__int64 **)(v12 + 8));
  *(_QWORD *)(v12 + 8) = v12;
  *(_QWORD *)v12 = v12;
  *(_QWORD *)(v12 + 16) = v12;
  *(_QWORD *)(v11 + 176) = 0LL;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v26);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
  return 0LL;
}
