/*
 * XREFs of ?Register@CallOnThreadExit@@YAXV?$function@$$A6AXXZ@std@@@Z @ 0x180140A88
 * Callers:
 *     ?GetForCurrentThread@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@XZ @ 0x18013C284 (-GetForCurrentThread@InputSystemInternalClientConnection@@SA-AV-$ComPtr@VInputSystemInternalClie.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x18004E88C (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180053D00 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180095F8C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WAIT@@@Z @ 0x1800D2DF8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x1800FB9C4 (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 *     ??$_Emplace@$$V@?$list@UCallbackData@CallOnThreadExit@@V?$allocator@UCallbackData@CallOnThreadExit@@@std@@@std@@QEAAPEAU?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@1@QEAU21@@Z @ 0x1801408D0 (--$_Emplace@$$V@-$list@UCallbackData@CallOnThreadExit@@V-$allocator@UCallbackData@CallOnThreadEx.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CallOnThreadExit::Register(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdi
  HANDLE CurrentProcess; // rbx
  HANDLE CurrentThread; // rax
  const char *v8; // r9
  struct _TP_WAIT *ThreadpoolWait; // rax
  const char *v10; // r9
  struct _TP_WAIT *v11; // rcx
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = _Mtx_lock((_Mtx_t)&unk_180268D60);
  if ( v2 )
    std::_Throw_C_error(v2);
  std::list<CallOnThreadExit::CallbackData>::_Emplace<>(v3, xmmword_1802690F8);
  v5 = *(_QWORD *)(xmmword_1802690F8 + 8) + 16LL;
  if ( v5 != a1 )
  {
    std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(*(_QWORD *)(xmmword_1802690F8 + 8) + 16LL, v4);
    std::_Func_class<void,>::_Reset_move(v5, a1);
  }
  CurrentProcess = GetCurrentProcess();
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)(v5 + 64),
    0LL);
  CurrentThread = GetCurrentThread();
  if ( !DuplicateHandle(CurrentProcess, CurrentThread, CurrentProcess, (LPHANDLE)(v5 + 64), 0, 0, 2u) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x3A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\callonthreadexit\\callonthreadexit.cpp",
      v8);
  ThreadpoolWait = CreateThreadpoolWait((PTP_WAIT_CALLBACK)CallOnThreadExit::CallOnThreadExitStatic, (PVOID)v5, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_WAIT *,void (*)(_TP_WAIT *),&public: static void wil::details::DestroyThreadPoolWait<0>::Destroy(_TP_WAIT *),wistd::integral_constant<unsigned __int64,0>,_TP_WAIT *,_TP_WAIT *,0,std::nullptr_t>>::reset(
    (struct _TP_WAIT **)(v5 + 72),
    ThreadpoolWait);
  v11 = *(struct _TP_WAIT **)(v5 + 72);
  if ( !v11 )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x41,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\callonthreadexit\\callonthreadexit.cpp",
      v10);
  SetThreadpoolWait(v11, *(HANDLE *)(v5 + 64), 0LL);
  _Mtx_unlock((_Mtx_t)&unk_180268D60);
  return std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(a1, v12);
}
