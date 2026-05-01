/*
 * XREFs of ?create_take_hevent_ownership@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x180166CBC
 * Callers:
 *     ?create@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJ$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x180166C20 (-create@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@w.c)
 * Callees:
 *     ??0?$function@$$A6AXXZ@wistd@@QEAA@$$QEAV01@@Z @ 0x1800A67A0 (--0-$function@$$A6AXXZ@wistd@@QEAA@$$QEAV01@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WAIT@@@Z @ 0x1800A6C08 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1801851E4 (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1801917C4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create_take_hevent_ownership(
        wil::details::event_watcher_state **a1,
        wil::details *a2,
        __int64 a3,
        const char *a4)
{
  wil::details *v5; // rbx
  void *v7; // rax
  void *v8; // rsi
  wil::details *v9; // rdi
  struct _TP_WAIT *ThreadpoolWait; // rax
  const char *v11; // r9
  wil::details::event_watcher_state *v12; // rbp
  void *v13; // rdx
  void *v15; // rdx
  unsigned int v16; // edi
  unsigned int v17; // edx
  void *v18; // rdx
  DWORD LastError; // edi
  unsigned int v20; // edx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = a2;
  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xE4C,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      a4);
  v7 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    wistd::function<void (void)>::function<void (void)>((__int64)v7, a3);
    *((_QWORD *)v8 + 15) = v5;
    v5 = 0LL;
    *((_QWORD *)v8 + 16) = 0LL;
    v9 = 0LL;
  }
  else
  {
    v8 = 0LL;
    v9 = v5;
  }
  if ( v8 )
  {
    ThreadpoolWait = CreateThreadpoolWait(
                       wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::wait_callback,
                       v8,
                       0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_WAIT *,void (*)(_TP_WAIT *),&public: static void wil::details::DestroyThreadPoolWait<0>::Destroy(_TP_WAIT *),wistd::integral_constant<unsigned __int64,0>,_TP_WAIT *,_TP_WAIT *,0,std::nullptr_t>>::reset(
      (struct _TP_WAIT **)v8 + 16,
      ThreadpoolWait);
    if ( *((_QWORD *)v8 + 16) )
    {
      v12 = *a1;
      if ( *a1 )
      {
        LastError = GetLastError();
        wil::details::event_watcher_state::`scalar deleting destructor'(v12, v20);
        SetLastError(LastError);
      }
      *a1 = (wil::details::event_watcher_state *)v8;
      SetThreadpoolWait(*((PTP_WAIT *)v8 + 16), *((HANDLE *)v8 + 15), 0LL);
      if ( v5 )
        wil::details::CloseHandle(v5, v13);
      return 0LL;
    }
    else
    {
      v16 = wil::details::in1diag3::Return_GetLastError(
              retaddr,
              (void *)0xE52,
              (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
              v11);
      wil::details::event_watcher_state::`scalar deleting destructor'((wil::details::event_watcher_state *)v8, v17);
      if ( v5 )
        wil::details::CloseHandle(v5, v18);
      return v16;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE4F,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      (const char *)0x8007000ELL);
    if ( v9 )
      wil::details::CloseHandle(v5, v15);
    return 2147942414LL;
  }
}
