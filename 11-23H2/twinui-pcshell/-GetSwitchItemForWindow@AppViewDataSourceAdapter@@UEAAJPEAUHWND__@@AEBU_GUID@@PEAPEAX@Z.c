/*
 * XREFs of ?GetSwitchItemForWindow@AppViewDataSourceAdapter@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x18078E790
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@Z @ 0x180082848 (--0-$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUhstring@winrt@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801E8DE0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUhstring@win.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppViewDataSourceAdapter::GetSwitchItemForWindow(
        AppViewDataSourceAdapter *this,
        HWND a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v7; // rbx
  struct IApplicationView *v8; // rdx
  int v9; // eax
  const char *v10; // r9
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  ApplicationViewHelpers *v17; // [rsp+40h] [rbp+8h] BYREF
  __int64 v18; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v7 = **((_QWORD **)this - 4);
  v18 = v7;
  try
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(v7 + 25) )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xF8,
          (int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
          (const char *)0x8002802BLL,
          v15);
      wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>::com_ptr_t<IApplicationView,wil::err_returncode_policy>(
        &v17,
        *(_QWORD *)(v7 + 32));
      if ( a2 == (HWND)ApplicationViewHelpers::GetWindowForView(
                         (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v17,
                         v8) )
        break;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v17);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,winrt::hstring>>>,std::_Iterator_base0>::operator++(
        &v18,
        v12,
        v13,
        v14);
      v7 = v18;
    }
    v9 = (***(__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))(v7 + 40))(*(_QWORD *)(v7 + 40), a3, a4);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1815,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v9,
        v15);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v17);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xFA,
                           (int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
                           v10);
  }
  return result;
}
