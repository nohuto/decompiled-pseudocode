/*
 * XREFs of ??$InvokeDelegates@V_lambda_042b81dcc6f54f0383a437e9dffe2f01_@@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_042b81dcc6f54f0383a437e9dffe2f01_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x180018E94
 * Callers:
 *     ??$DoInvoke@V_lambda_042b81dcc6f54f0383a437e9dffe2f01_@@@?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_042b81dcc6f54f0383a437e9dffe2f01_@@@Z @ 0x180018D88 (--$DoInvoke@V_lambda_042b81dcc6f54f0383a437e9dffe2f01_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18009F5FC (-Remove@-$EventSource@U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Inte.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_042b81dcc6f54f0383a437e9dffe2f01_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v4; // r9
  unsigned int v5; // edi
  __int64 v6; // rbx
  signed __int32 v7; // eax
  __int64 v8; // r14
  _QWORD *v9; // rsi
  _QWORD *v10; // r15
  _QWORD *v11; // rbp
  int v12; // eax
  signed __int32 v13; // edx
  int MatchingRestrictedErrorInfo; // ebx
  unsigned int v16; // eax
  __int64 v17; // [rsp+78h] [rbp+10h] BYREF
  __int64 v18; // [rsp+88h] [rbp+20h]

  v4 = a1;
  v5 = 0;
  v6 = 0LL;
  v18 = 0LL;
  if ( a2 )
  {
    do
      v7 = *(_DWORD *)(a2 + 12);
    while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 12), v7 + 1, v7) );
    v6 = a2;
    v18 = a2;
  }
  v8 = *(_QWORD *)(v6 + 32);
  v9 = *(_QWORD **)(v6 + 16);
  if ( v9 != *(_QWORD **)(v6 + 24) )
  {
    v10 = (_QWORD *)a1[1];
    v11 = (_QWORD *)*a1;
    while ( 1 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v9 + 24LL))(*v9, *v11, *v10);
      v5 = v12;
      if ( v12 == -2147417848 || v12 == -2147023174 || v12 == -1996357631 || v12 == -2147418105 || v12 == -2147418094 )
        break;
      if ( v12 < 0 )
      {
        if ( (unsigned int)IsErrorPropagationEnabled() )
        {
          v17 = 0LL;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
          MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v5, &v17);
          if ( MatchingRestrictedErrorInfo >= 0 )
            MatchingRestrictedErrorInfo = RoReportFailedDelegate(*v9, v17);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
          v16 = 0;
          if ( MatchingRestrictedErrorInfo < 0 )
            v16 = v5;
          v5 = v16;
          v6 = v18;
          goto LABEL_14;
        }
        RoTransformError(v5, 0LL, 0LL);
        goto LABEL_21;
      }
LABEL_13:
      v8 += 8LL;
      if ( ++v9 == *(_QWORD **)(v6 + 24) )
        goto LABEL_14;
    }
    RoTransformError((unsigned int)v12, 0LL, 0LL);
    Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
      a3,
      *v9);
LABEL_21:
    v5 = 0;
    goto LABEL_13;
  }
  do
LABEL_14:
    v13 = *(_DWORD *)(v6 + 12);
  while ( v13 != 0x7FFFFFFF && v13 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 12), v13 - 1, v13) );
  if ( v13 == 1 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *))(*(_QWORD *)v18 + 24LL))(v18, 1LL, a3, v4);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v5;
}
