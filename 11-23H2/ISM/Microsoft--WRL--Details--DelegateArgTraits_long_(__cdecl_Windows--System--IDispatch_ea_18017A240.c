/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::System::IDispatcherQueueHandler::_)(void)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::System::IDispatcherQueueHandler_Microsoft::WRL::FtmBase___lambda_be14e41fc69e48f10010ada4f55a452e___1_::Invoke @ 0x18017A240
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180031C78 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VMPCManagerClient@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIMPCManagerClient@MPCManager@Input@Internal@Windows@@@Z @ 0x180177454 (--$MakeAndInitialize@VMPCManagerClient@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@$$.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::System::IDispatcherQueueHandler::___void__::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::System::IDispatcherQueueHandler_Microsoft::WRL::FtmBase___lambda_be14e41fc69e48f10010ada4f55a452e___1_::Invoke(
        __int64 a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rcx
  int v4; // eax
  void *v5; // rdx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(__int64 **)(a1 + 64);
  v3 = *v2;
  *v2 = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<MPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerClient,>(v2);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1B6,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v4,
      v7);
  wil::details::SetEvent(**(wil::details ***)(a1 + 72), v5);
  return 0LL;
}
