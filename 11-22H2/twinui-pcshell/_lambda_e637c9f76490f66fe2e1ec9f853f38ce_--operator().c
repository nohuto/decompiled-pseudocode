/*
 * XREFs of _lambda_e637c9f76490f66fe2e1ec9f853f38ce_::operator() @ 0x180177AE0
 * Callers:
 *     _lambda_e637c9f76490f66fe2e1ec9f853f38ce_::_lambda_invoker_cdecl_ @ 0x180177AD0 (_lambda_e637c9f76490f66fe2e1ec9f853f38ce_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800D9200 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x1800EAB24 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180142290 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBa.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180177BB4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_e637c9f76490f66fe2e1ec9f853f38ce_::operator()(__int64 a1, __int64 a2)
{
  HANDLE CurrentThread; // rax
  HRESULT v4; // eax
  volatile int *v5; // rdx
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  void *v9; // rdx
  int v11; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v13; // [rsp+58h] [rbp+10h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = a2;
  CurrentThread = GetCurrentThread();
  v4 = SetThreadDescription(CurrentThread, L"Tab Proxy Window Factory Thread");
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2A,
      (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindowfactory.cpp",
      (const char *)(unsigned int)v4);
  v6 = RoInitialize(0LL);
  if ( v6 >= 0 )
  {
    v7 = *(_QWORD *)(a2 + 48);
    *(_QWORD *)(a2 + 48) = 0LL;
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,Microsoft::WRL::FtmBase>::Release(
        v7,
        v5);
    v8 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>((CreationThreadDispatcher **)(a2 + 48));
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x32,
        (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindowfactory.cpp",
        (const char *)(unsigned int)v8,
        v11);
    wil::details::SetEvent(*(wil::details **)(a2 + 32), v9);
    v14 = *(_QWORD *)(a2 + 40);
    CoWaitForMultipleObjects(3LL, 0xFFFFFFFFLL, 1LL, &v14, &v13);
  }
  if ( v6 >= 0 )
    RoUninitialize();
  if ( a2 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v15);
  return 0LL;
}
