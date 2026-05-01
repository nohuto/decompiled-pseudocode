/*
 * XREFs of ??1WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAA@XZ @ 0x18016B144
 * Callers:
 *     ?OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z @ 0x18009AFE0 (-OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z.c)
 *     ?UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIActivationRequestedEventArgs@WindowManagement@ApplicationModel@56@@Z @ 0x18009D834 (-UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLife.c)
 *     ?UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18016A870 (-UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@.c)
 *     _UwpWindowEventDispatcher::OnShellHookMessage_::_1_::dtor$2 @ 0x1802B7A30 (_UwpWindowEventDispatcher--OnShellHookMessage_--_1_--dtor$2.c)
 *     _UwpWindowEventDispatcher::UwpWindowActivationRequested_::_1_::dtor$14 @ 0x1802B7D59 (_UwpWindowEventDispatcher--UwpWindowActivationRequested_--_1_--dtor$14.c)
 *     _UwpWindowEventDispatcher::UwpWindowAdded_::_1_::dtor$7 @ 0x1802C4969 (_UwpWindowEventDispatcher--UwpWindowAdded_--_1_--dtor$7.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall UwpWindowEventDispatcher::WindowIdChangedEventHelper::~WindowIdChangedEventHelper(
        UwpWindowEventDispatcher::WindowIdChangedEventHelper *this)
{
  std::_Ref_count_base *v2; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)this )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x16E,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)0x8000000DLL);
  if ( *((_BYTE *)this + 28) )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x16F,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)0x8000000DLL);
  if ( *((_BYTE *)this + 36) )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x170,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)0x8000000DLL);
  if ( *((_BYTE *)this + 44) )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x171,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)0x8000000DLL);
  if ( *((_BYTE *)this + 52) )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x172,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)0x8000000DLL);
  if ( *((_BYTE *)this + 60) )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x173,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)0x8000000DLL);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 2);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
