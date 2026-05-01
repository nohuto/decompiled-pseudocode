/*
 * XREFs of ?GetWindowingSettings@ViewEventArgsForWindowingSettings@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUIWindowingEnvironmentSettings@3456@@Z @ 0x1803E4700
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??1?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180041D68 (--1-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802DF344 (--0-$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wi.c)
 *     ??$_Try_emplace@V?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@$$V@?$map@V?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@std@@_N@1@$$QEAV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1803DDB50 (--$_Try_emplace@V-$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_excep.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewEventArgsForWindowingSettings::GetWindowingSettings(
        ViewEventArgsForWindowingSettings *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings **a3)
{
  __int64 *v4; // rbx
  struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *v5; // rbx
  const char *v6; // r9
  __int64 result; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *v11; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v4 = (__int64 *)((char *)this + 32);
  wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,wil::err_exception_policy>::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,wil::err_exception_policy>(
    &v10,
    (__int64)a2);
  try
  {
    v5 = *(struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings **)(*(_QWORD *)std::map<wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,wil::err_exception_policy>>::_Try_emplace<wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,wil::err_exception_policy>,>(v4, (__int64)v8, (unsigned __int64 *)&v10)
                                                                                                + 40LL);
    v11 = v5;
    if ( v5 )
    {
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *))(*(_QWORD *)v5 + 8LL))(v5);
      *a3 = v5;
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *))(*(_QWORD *)v5 + 8LL))(v5);
    }
    else
    {
      *a3 = 0LL;
    }
    wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>((__int64 *)&v11);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x490,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\ViewEventArgs.h",
                           v6);
  }
  return result;
}
