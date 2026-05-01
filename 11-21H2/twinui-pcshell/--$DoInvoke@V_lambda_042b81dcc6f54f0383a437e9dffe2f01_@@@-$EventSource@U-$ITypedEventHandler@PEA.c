/*
 * XREFs of ??$DoInvoke@V_lambda_042b81dcc6f54f0383a437e9dffe2f01_@@@?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_042b81dcc6f54f0383a437e9dffe2f01_@@@Z @ 0x180018D88
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8080681b8e69ea634a2d18650f2591f3___::Run @ 0x180018B90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8080681b8e69ea634a2d18650f2591f3___--Run.c)
 * Callees:
 *     ??$InvokeDelegates@V_lambda_042b81dcc6f54f0383a437e9dffe2f01_@@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_042b81dcc6f54f0383a437e9dffe2f01_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x180018E94 (--$InvokeDelegates@V_lambda_042b81dcc6f54f0383a437e9dffe2f01_@@U-$ITypedEventHandler@PEAUIClient.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_042b81dcc6f54f0383a437e9dffe2f01_>(
        __int64 a1,
        __int128 *a2)
{
  unsigned int v4; // ebp
  volatile signed __int32 *v5; // rbx
  RTL_SRWLOCK *v6; // rdi
  signed __int32 v7; // eax
  signed __int32 v8; // edx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v5 = 0LL;
  v6 = (RTL_SRWLOCK *)(a1 + 8);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
  if ( *(_QWORD *)a1 )
  {
    v5 = *(volatile signed __int32 **)a1;
    do
      v7 = *((_DWORD *)v5 + 3);
    while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange(v5 + 3, v7 + 1, v7) );
  }
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  if ( v5 )
  {
    v10 = *a2;
    v4 = Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_042b81dcc6f54f0383a437e9dffe2f01_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>(
           &v10,
           v5,
           a1);
    do
      v8 = *((_DWORD *)v5 + 3);
    while ( v8 != 0x7FFFFFFF && v8 != _InterlockedCompareExchange(v5 + 3, v8 - 1, v8) );
    if ( v8 == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v4;
}
