/*
 * XREFs of ?RegisterKeyboardHook@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x180775A6C
 * Callers:
 *     ?Show@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@W4VIRTUAL_DESKTOP_SWITCHER_INVOKE_DETAILS@@@Z @ 0x180775F00 (-Show@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@W4VIRTUAL_DESKTOP_SWITCHER_INVOKE_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$com_weak_query_failfast@PEAVVirtualDesktopSwitcherHost@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@$$QEAPEAVVirtualDesktopSwitcherHost@@@Z @ 0x180770938 (--$com_weak_query_failfast@PEAVVirtualDesktopSwitcherHost@@@wil@@YA-AV-$com_ptr_t@UIWeakReferenc.c)
 *     ??0VirtualDesktopSwitcherHook@@QEAA@V?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@@Z @ 0x1807716DC (--0VirtualDesktopSwitcherHook@@QEAA@V-$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall VirtualDesktopSwitcherHost::RegisterKeyboardHook(VirtualDesktopSwitcherHost *this)
{
  _QWORD *v2; // rbx
  void *v3; // rax
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v5; // r8
  const char *v6; // r9
  __int64 v7; // rbx
  __int64 *v8; // rax
  void *v9; // rdi
  std::_Ref_count_base *v10; // rcx
  void *v11; // rcx
  std::_Ref_count_base *v12; // rcx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF
  void *v15; // [rsp+50h] [rbp+18h]

  v13 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))this;
  v2 = wil::com_weak_query_failfast<VirtualDesktopSwitcherHost *>(&v14, &v13);
  v3 = operator new(1uLL);
  v15 = v3;
  v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v2;
  *v2 = 0LL;
  v13 = v4;
  v7 = VirtualDesktopSwitcherHook::VirtualDesktopSwitcherHook((__int64)v3, (__int64 *)&v13, v5, v6);
  v8 = (__int64 *)((char *)this + 520);
  if ( (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)this + 520) == &v13 )
  {
    if ( v7 )
    {
      if ( VirtualDesktopSwitcherHook::s_vdsHookData )
      {
        VirtualDesktopSwitcherHook::s_vdsHookData = 0LL;
        v12 = qword_18098F2A0;
        qword_18098F2A0 = 0LL;
        if ( v12 )
          std::_Ref_count_base::_Decref(v12);
      }
      v11 = (void *)v7;
      goto LABEL_12;
    }
  }
  else
  {
    v9 = (void *)*v8;
    *v8 = v7;
    if ( v9 )
    {
      if ( VirtualDesktopSwitcherHook::s_vdsHookData )
      {
        VirtualDesktopSwitcherHook::s_vdsHookData = 0LL;
        v10 = qword_18098F2A0;
        qword_18098F2A0 = 0LL;
        if ( v10 )
          std::_Ref_count_base::_Decref(v10);
      }
      v11 = v9;
LABEL_12:
      operator delete(v11);
    }
  }
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v14);
}
