/*
 * XREFs of ?CreateAttachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV?$function@$$A6AXXZ@wistd@@@Z @ 0x18004D980
 * Callers:
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x18004D46C (--0CAnalogCompositorManager@@AEAA@XZ.c)
 * Callees:
 *     ?create@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x18004D6D8 (-create@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@w.c)
 *     ??1?$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ @ 0x18004DC6C (--1-$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1984 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Mirage::HolographicDriverDetectedWatcher::CreateAttachWatcher(__int64 a1, __int64 a2)
{
  int v3; // eax
  int v5; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = a2;
  if ( *(_QWORD *)(a1 + 16) )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x2C,
      (unsigned int)"onecoreuap\\internal\\sdk\\inc\\HolographicDriverDetectedWatcher.h",
      (const char *)0x8000000ELL,
      a2);
  v3 = wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
         a1 + 16,
         *(void **)a1,
         a2);
  if ( v3 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x30,
      (unsigned int)"onecoreuap\\internal\\sdk\\inc\\HolographicDriverDetectedWatcher.h",
      (const char *)(unsigned int)v3,
      v5);
  wistd::function<void (int const &)>::~function<void (int const &)>(a2);
  return 0LL;
}
