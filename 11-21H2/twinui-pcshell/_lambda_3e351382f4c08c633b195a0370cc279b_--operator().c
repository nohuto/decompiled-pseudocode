/*
 * XREFs of _lambda_3e351382f4c08c633b195a0370cc279b_::operator() @ 0x180062800
 * Callers:
 *     _lambda_3e351382f4c08c633b195a0370cc279b_::_lambda_invoker_cdecl_ @ 0x180062660 (_lambda_3e351382f4c08c633b195a0370cc279b_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18001B0D0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800628A4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x1800EE798 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICreationThreadDispatcher@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EEEC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICreationThreadD.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_3e351382f4c08c633b195a0370cc279b_::operator()(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax
  void *v6; // rdx
  int v8; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = a2;
  v3 = RoInitialize(0LL);
  if ( v3 >= 0 )
  {
    v4 = *(_QWORD *)(a2 + 48);
    *(_QWORD *)(a2 + 48) = 0LL;
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICreationThreadDispatcher,Microsoft::WRL::FtmBase>::Release();
    v5 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>(a2 + 48);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x32,
        (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindowfactory.cpp",
        (const char *)(unsigned int)v5,
        v8);
    wil::details::SetEvent(*(wil::details **)(a2 + 32), v6);
    v11 = *(_QWORD *)(a2 + 40);
    CoWaitForMultipleObjects(3LL, 0xFFFFFFFFLL, 1LL, &v11, &v10);
  }
  if ( v3 >= 0 )
    RoUninitialize();
  if ( a2 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v12);
  return 0LL;
}
