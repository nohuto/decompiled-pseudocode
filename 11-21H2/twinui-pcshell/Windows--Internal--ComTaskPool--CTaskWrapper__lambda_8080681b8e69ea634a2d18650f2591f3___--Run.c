/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8080681b8e69ea634a2d18650f2591f3___::Run @ 0x180018B90
 * Callers:
 *     <none>
 * Callees:
 *     ??$DoInvoke@V_lambda_042b81dcc6f54f0383a437e9dffe2f01_@@@?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_042b81dcc6f54f0383a437e9dffe2f01_@@@Z @ 0x180018D88 (--$DoInvoke@V_lambda_042b81dcc6f54f0383a437e9dffe2f01_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeOrThrow@VClientWindowReadyForPresentationEventArgs@@AEB_N@wil@@YA?AV?$ComPtr@VClientWindowReadyForPresentationEventArgs@@@WRL@Microsoft@@AEB_N@Z @ 0x1801A90F0 (--$MakeOrThrow@VClientWindowReadyForPresentationEventArgs@@AEB_N@wil@@YA-AV-$ComPtr@VClientWindo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8080681b8e69ea634a2d18650f2591f3___::Run(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  int v5[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v6; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  wil::MakeOrThrow<ClientWindowReadyForPresentationEventArgs,bool const &>(&v8, a1 + 32);
  v2 = *(_QWORD *)(a1 + 16) + 152LL;
  v10 = v8;
  v9 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v5 = &v9;
  v6 = &v10;
  result = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_042b81dcc6f54f0383a437e9dffe2f01_>(
             v2,
             v5);
  if ( (int)result < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA43,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)result,
      v5[0]);
  v4 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
