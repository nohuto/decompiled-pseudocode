/*
 * XREFs of ?GetWindowingEnvironmentConfigById@WindowingEnvironmentManager@@UEAAJIPEAPEAUIWindowingEnvironmentConfig@@@Z @ 0x18041B5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18010A684 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4WindowingEn.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIWindowingEnvironmentConfig@@@?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIWindowingEnvironmentConfig@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801A9224 (--$query@UIWindowingEnvironmentConfig@@@-$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_e.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall WindowingEnvironmentManager::GetWindowingEnvironmentConfigById(
        RTL_SRWLOCK *this,
        int a2,
        struct IWindowingEnvironmentConfig **a3)
{
  RTL_SRWLOCK *v6; // rbx
  _QWORD *v7; // rax
  __int64 (__fastcall ***v8)(_QWORD, GUID *, _QWORD *); // rcx
  int v9; // eax
  struct IWindowingEnvironmentConfig *v10; // rcx
  const char *v11; // r9
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16[2]; // [rsp+20h] [rbp-28h] BYREF
  RTL_SRWLOCK *v17[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v19; // [rsp+50h] [rbp+8h] BYREF
  struct IWindowingEnvironmentConfig *v20; // [rsp+60h] [rbp+18h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, _QWORD *); // [rsp+68h] [rbp+20h] BYREF

  *a3 = 0LL;
  v6 = this + 3;
  AcquireSRWLockShared(this + 3);
  v17[0] = v6;
  v7 = *(_QWORD **)this[4].Ptr;
  *(_QWORD *)v16 = v7;
  try
  {
    while ( v7 != this[4].Ptr )
    {
      v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v7[5];
      v21 = v8;
      if ( v8 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v8)[1])(v8);
      wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>::query<IWindowingEnvironmentConfig>(
        &v21,
        &v20);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v21);
      v19 = 0;
      v9 = (*(__int64 (__fastcall **)(struct IWindowingEnvironmentConfig *, int *))(*(_QWORD *)v20 + 32LL))(v20, &v19);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x95,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v9,
          v16[0]);
      if ( v19 == a2 )
      {
        v10 = v20;
        if ( v20 )
        {
          *a3 = v20;
          (*(void (__fastcall **)(struct IWindowingEnvironmentConfig *))(*(_QWORD *)v10 + 8LL))(v10);
        }
        else
        {
          *a3 = 0LL;
        }
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v20);
        break;
      }
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v20);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(
        (__int64 *)v16,
        v13,
        v14,
        v15);
      v7 = *(_QWORD **)v16;
    }
    if ( *a3 )
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(v17);
      result = 0LL;
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(v17);
      result = 2147943568LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA0,
                           (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
                           v11);
  }
  return result;
}
