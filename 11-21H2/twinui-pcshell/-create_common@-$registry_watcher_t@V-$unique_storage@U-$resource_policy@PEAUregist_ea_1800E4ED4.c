/*
 * XREFs of ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1800E4ED4
 * Callers:
 *     ?create@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEAUHKEY__@@PEBG_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1800E4E30 (-create@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watc_ea_1800E4E30.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18008EA88 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?delete_registry_watcher_state@details@wil@@YAXPEAUregistry_watcher_state@12@@Z @ 0x1800E5334 (-delete_registry_watcher_state@details@wil@@YAXPEAUregistry_watcher_state@12@@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18015F354 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801661D4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z @ 0x180177918 (-Destroy@-$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1802DB4F4 (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create_common(
        wil::details **a1,
        _QWORD *a2,
        unsigned __int8 a3,
        __int64 a4)
{
  unsigned __int8 *v8; // rax
  unsigned __int8 *v9; // rdi
  wil::details *v10; // rcx
  HANDLE Event; // rbp
  wil::details *v12; // rsi
  int LastErrorFailHr; // eax
  unsigned int v14; // ebx
  unsigned int v15; // eax
  PTP_WAIT ThreadpoolWait; // rsi
  const char *v17; // r9
  struct _TP_WAIT *v18; // rbp
  wil::details *v19; // rsi
  __int64 v21; // r9
  __int64 v22; // rdx
  DWORD LastError; // ebx
  void *v24; // rdx
  unsigned int v25; // edx
  unsigned int v26; // eax
  DWORD v27; // ebx
  DWORD v28; // ebx
  struct wil::details::registry_watcher_state *v29; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8 = (unsigned __int8 *)operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    if ( *(_QWORD *)(a4 + 112) )
    {
      *((_QWORD *)v8 + 14) = v8 + 8;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a4 + 112) + 16LL))(*(_QWORD *)(a4 + 112));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a4 + 112) + 24LL))(*(_QWORD *)(a4 + 112));
      *(_QWORD *)(a4 + 112) = 0LL;
    }
    else
    {
      *((_QWORD *)v8 + 14) = 0LL;
    }
    *((_QWORD *)v9 + 15) = *a2;
    *a2 = 0LL;
    *((_QWORD *)v9 + 16) = 0LL;
    *((_QWORD *)v9 + 17) = 0LL;
    v9[144] = a3;
    *((_DWORD *)v9 + 37) = 1;
    *((_QWORD *)v9 + 19) = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
  {
    v14 = -2147024882;
    v21 = 2147942414LL;
    v22 = 221LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/registry.h",
      (const char *)v21);
    goto LABEL_19;
  }
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    v12 = (wil::details *)*((_QWORD *)v9 + 16);
    if ( v12 )
    {
      LastError = GetLastError();
      wil::details::CloseHandle(v12, v24);
      SetLastError(LastError);
    }
    *((_QWORD *)v9 + 16) = Event;
    goto LABEL_11;
  }
  LastErrorFailHr = wil::details::GetLastErrorFailHr(v10);
  v14 = LastErrorFailHr;
  if ( LastErrorFailHr < 0 )
  {
    v21 = (unsigned int)LastErrorFailHr;
    v22 = 222LL;
    goto LABEL_25;
  }
LABEL_11:
  v15 = RegNotifyChangeKeyValue(*((HKEY *)v9 + 15), v9[144], 0x10000005u, *((HANDLE *)v9 + 16), 1);
  if ( v15 )
  {
    v26 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0xE1,
            (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/registry.h",
            (const char *)v15);
  }
  else
  {
    ThreadpoolWait = CreateThreadpoolWait(
                       (PTP_WAIT_CALLBACK)wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::callback,
                       v9,
                       0LL);
    v18 = (struct _TP_WAIT *)*((_QWORD *)v9 + 17);
    if ( v18 )
    {
      v27 = GetLastError();
      wil::details::DestroyThreadPoolWait<0>::Destroy(v18);
      SetLastError(v27);
    }
    *((_QWORD *)v9 + 17) = ThreadpoolWait;
    if ( ThreadpoolWait )
    {
      v19 = *a1;
      if ( *a1 )
      {
        v28 = GetLastError();
        wil::details::delete_registry_watcher_state(v19, v29);
        SetLastError(v28);
      }
      *a1 = (wil::details *)v9;
      SetThreadpoolWait(*((PTP_WAIT *)v9 + 17), *((HANDLE *)v9 + 16), 0LL);
      return 0;
    }
    v26 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)0xE4,
            (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/registry.h",
            v17);
  }
  v14 = v26;
LABEL_19:
  if ( v9 )
    wil::details::registry_watcher_state::`scalar deleting destructor'((wil::details::registry_watcher_state *)v9, v25);
  return v14;
}
