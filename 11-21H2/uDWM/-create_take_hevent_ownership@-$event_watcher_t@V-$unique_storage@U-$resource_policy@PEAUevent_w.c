/*
 * XREFs of ?create_take_hevent_ownership@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x180054F80
 * Callers:
 *     ?create@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x180054EBC (-create@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@w.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18004593C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ??0event_watcher_state@details@wil@@QEAA@$$QEAV?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@2@$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x180055080 (--0event_watcher_state@details@wil@@QEAA@$$QEAV-$unique_any_t@V-$event_t@V-$unique_storage@U-$re.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180094560 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180095C14 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x18009C95C (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z @ 0x18009C9B0 (-Destroy@-$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z.c)
 *     ?delete_event_watcher_state@details@wil@@YAXPEAUevent_watcher_state@12@@Z @ 0x18009E174 (-delete_event_watcher_state@details@wil@@YAXPEAUevent_watcher_state@12@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create_take_hevent_ownership(
        wil::details **a1,
        wil::details *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  PTP_WAIT ThreadpoolWait; // rsi
  const char *v9; // r9
  struct _TP_WAIT *v10; // rbp
  wil::details *v11; // rsi
  void *v12; // rdx
  unsigned int v14; // ebx
  void *v15; // rdx
  DWORD LastError; // ebx
  unsigned int v17; // edx
  DWORD v18; // ebx
  struct wil::details::event_watcher_state *v19; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  wil::details *v21; // [rsp+48h] [rbp+10h] BYREF
  __int64 v22; // [rsp+58h] [rbp+20h]

  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xE38,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      a4);
  v21 = a2;
  v6 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         136LL);
  v22 = v6;
  if ( v6 )
    v7 = wil::details::event_watcher_state::event_watcher_state(v6, &v21, a3);
  else
    v7 = 0LL;
  if ( !v7 )
  {
    v14 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE3B,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      (const char *)0x8007000ELL);
LABEL_15:
    __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
      &v21,
      v15);
    return v14;
  }
  ThreadpoolWait = CreateThreadpoolWait(
                     wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::wait_callback,
                     (PVOID)v7,
                     0LL);
  v10 = *(struct _TP_WAIT **)(v7 + 128);
  if ( v10 )
  {
    LastError = GetLastError();
    wil::details::DestroyThreadPoolWait<0>::Destroy(v10);
    SetLastError(LastError);
  }
  *(_QWORD *)(v7 + 128) = ThreadpoolWait;
  if ( !ThreadpoolWait )
  {
    v14 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)0xE3E,
            (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
            v9);
    wil::details::event_watcher_state::`scalar deleting destructor'((wil::details::event_watcher_state *)v7, v17);
    goto LABEL_15;
  }
  v11 = *a1;
  if ( *a1 )
  {
    v18 = GetLastError();
    wil::details::delete_event_watcher_state(v11, v19);
    SetLastError(v18);
  }
  *a1 = (wil::details *)v7;
  SetThreadpoolWait(*(PTP_WAIT *)(v7 + 128), *(HANDLE *)(v7 + 120), 0LL);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
    &v21,
    v12);
  return 0LL;
}
