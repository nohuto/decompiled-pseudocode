/*
 * XREFs of ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x180133668
 * Callers:
 *     ?create@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXPEAUHKEY__@@PEBG_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1801335B0 (-create@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watc_ea_1801335B0.c)
 * Callees:
 *     ??0registry_watcher_state@details@wil@@QEAA@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1800A6B10 (--0registry_watcher_state@details@wil@@QEAA@$$QEAV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUregistry_watcher_state@23@@Z @ 0x1800A6BD4 (-reset@-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WAIT@@@Z @ 0x1800A6C08 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800A6D50 (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800BD1C8 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1801917C4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180393038 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_exception_policy>::create_common(
        wil::details::registry_watcher_state **a1,
        _QWORD *a2,
        char a3,
        __int64 a4)
{
  void *v8; // rax
  __int64 v9; // rbx
  wil::details *v10; // rcx
  HANDLE Event; // rbp
  wil::details *v12; // rsi
  signed int LastErrorFailHr; // eax
  unsigned int v14; // edi
  unsigned int v15; // eax
  struct _TP_WAIT *ThreadpoolWait; // rax
  const char *v17; // r9
  __int64 v19; // r9
  __int64 v20; // rdx
  DWORD LastError; // edi
  void *v22; // rdx
  int v23; // eax
  BOOL fAsynchronous; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8 = operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
    v9 = wil::details::registry_watcher_state::registry_watcher_state((__int64)v8, a2, a3, a4);
  else
    v9 = 0LL;
  if ( !v9 )
  {
    v14 = -2147024882;
    v19 = 2147942414LL;
    v20 = 3266LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\registry.h",
      (const char *)v19);
    goto LABEL_13;
  }
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    v12 = *(wil::details **)(v9 + 128);
    if ( v12 )
    {
      LastError = GetLastError();
      wil::details::CloseHandle(v12, v22);
      SetLastError(LastError);
    }
    *(_QWORD *)(v9 + 128) = Event;
    goto LABEL_9;
  }
  LastErrorFailHr = wil::details::GetLastErrorFailHr(v10);
  v14 = LastErrorFailHr;
  if ( LastErrorFailHr < 0 )
  {
    v19 = (unsigned int)LastErrorFailHr;
    v20 = 3267LL;
    goto LABEL_18;
  }
LABEL_9:
  v15 = RegNotifyChangeKeyValue(
          *(HKEY *)(v9 + 120),
          *(unsigned __int8 *)(v9 + 144),
          0x10000005u,
          *(HANDLE *)(v9 + 128),
          1);
  if ( v15 )
  {
    v23 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0xCC9,
            (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\registry.h",
            (const char *)v15,
            fAsynchronous);
  }
  else
  {
    ThreadpoolWait = CreateThreadpoolWait(
                       wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_exception_policy>::callback,
                       (PVOID)v9,
                       0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_WAIT *,void (*)(_TP_WAIT *),&public: static void wil::details::DestroyThreadPoolWait<0>::Destroy(_TP_WAIT *),wistd::integral_constant<unsigned __int64,0>,_TP_WAIT *,_TP_WAIT *,0,std::nullptr_t>>::reset(
      (struct _TP_WAIT **)(v9 + 136),
      ThreadpoolWait);
    if ( *(_QWORD *)(v9 + 136) )
    {
      wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::reset(
        a1,
        (wil::details::registry_watcher_state *)v9);
      SetThreadpoolWait(*((PTP_WAIT *)*a1 + 17), *((HANDLE *)*a1 + 16), 0LL);
      return 0;
    }
    v23 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)0xCCC,
            (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\registry.h",
            v17);
  }
  v14 = v23;
LABEL_13:
  if ( v9 )
    wil::details::registry_watcher_state::`scalar deleting destructor'((wil::details::registry_watcher_state *)v9);
  return v14;
}
