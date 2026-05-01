/*
 * XREFs of _lambda_029abab5a5354574d9f4afbbc91035ea_::operator() @ 0x1804E5BEC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_029abab5a5354574d9f4afbbc91035ea___::Run @ 0x1804EC140 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_029abab5a5354574d9f4afbbc91035ea___--Run.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800E15F0 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800E1628 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x180142034 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$InvokeDelegates@V_lambda_042b81dcc6f54f0383a437e9dffe2f01_@@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_042b81dcc6f54f0383a437e9dffe2f01_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x1804E2F1C (--$InvokeDelegates@V_lambda_042b81dcc6f54f0383a437e9dffe2f01_@@U-$ITypedEventHandler@PEAUIClient.c)
 *     ??$MakeOrThrow@VClientWindowReadyForPresentationEventArgs@@AEB_N@wil@@YA?AV?$ComPtr@VClientWindowReadyForPresentationEventArgs@@@WRL@Microsoft@@AEB_N@Z @ 0x1804E373C (--$MakeOrThrow@VClientWindowReadyForPresentationEventArgs@@AEB_N@wil@@YA-AV-$ComPtr@VClientWindo.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_029abab5a5354574d9f4afbbc91035ea_::operator()(char *a1)
{
  __int64 v2; // rdi
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v7[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  volatile signed __int32 *v9; // [rsp+60h] [rbp+20h] BYREF
  __int64 v10; // [rsp+68h] [rbp+28h] BYREF
  RTL_SRWLOCK *v11; // [rsp+70h] [rbp+30h] BYREF
  __int64 v12; // [rsp+78h] [rbp+38h] BYREF

  wil::MakeOrThrow<ClientWindowReadyForPresentationEventArgs,bool const &>(&v10, a1 + 16);
  v2 = *(_QWORD *)a1;
  v6 = v10;
  v12 = *((_QWORD *)a1 + 1);
  v3 = 0;
  v9 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v11, (RTL_SRWLOCK *)(v2 + 160));
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
    (__int64 *)&v9,
    (volatile int *)(v2 + 152));
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v11);
  if ( v9 )
  {
    v7[0] = &v12;
    v7[1] = &v6;
    v3 = Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_042b81dcc6f54f0383a437e9dffe2f01_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>(
           v7,
           v9,
           (RTL_SRWLOCK *)(v2 + 152));
  }
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v9);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA52,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v3,
      v6);
  v4 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return 0LL;
}
