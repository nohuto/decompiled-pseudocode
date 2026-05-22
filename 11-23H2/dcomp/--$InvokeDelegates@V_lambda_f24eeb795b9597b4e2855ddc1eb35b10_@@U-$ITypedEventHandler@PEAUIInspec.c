/*
 * XREFs of ??$InvokeDelegates@V_lambda_f24eeb795b9597b4e2855ddc1eb35b10_@@U?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_f24eeb795b9597b4e2855ddc1eb35b10_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18002C928
 * Callers:
 *     ??$DoInvoke@V_lambda_f24eeb795b9597b4e2855ddc1eb35b10_@@@?$EventSource@U?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_f24eeb795b9597b4e2855ddc1eb35b10_@@@Z @ 0x1800A6E08 (--$DoInvoke@V_lambda_f24eeb795b9597b4e2855ddc1eb35b10_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Remove@?$EventSource@UIAsyncActionCompletedHandler@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180113158 (-Remove@-$EventSource@UIAsyncActionCompletedHandler@Foundation@Windows@@U-$InvokeModeOptions@$0-.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_f24eeb795b9597b4e2855ddc1eb35b10_,Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::UI::Composition::CompositionBatchCompletedEventArgs *>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  _QWORD *v6; // r9
  signed __int32 v7; // eax
  _QWORD *v8; // rsi
  __int64 *v9; // r14
  _QWORD *v10; // r15
  _QWORD *v11; // rbp
  int v12; // eax
  signed __int32 v13; // edx
  __int64 v15; // rax
  unsigned int v16; // ebp
  int MatchingRestrictedErrorInfo; // eax
  __int64 v18; // rcx
  __int64 v19; // [rsp+68h] [rbp+10h] BYREF
  __int64 v20; // [rsp+78h] [rbp+20h]

  v3 = 0;
  v4 = 0LL;
  v6 = a1;
  if ( a2 )
  {
    do
      v7 = *(_DWORD *)(a2 + 12);
    while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 12), v7 + 1, v7) );
    v4 = a2;
  }
  v8 = *(_QWORD **)(v4 + 16);
  v9 = *(__int64 **)(v4 + 32);
  if ( v8 != *(_QWORD **)(v4 + 24) )
  {
    v10 = (_QWORD *)a1[1];
    v11 = (_QWORD *)*a1;
    while ( 1 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v8 + 24LL))(*v8, *v11, *v10);
      v3 = v12;
      if ( v12 == -2147417848 || v12 == -2147023174 || v12 == -1996357631 || v12 == -2147418105 || v12 == -2147418094 )
        break;
      if ( v12 < 0 )
      {
        if ( (unsigned int)IsErrorPropagationEnabled() )
        {
          v15 = *v9;
          v19 = 0LL;
          v16 = v3;
          v20 = v15;
          MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v3, &v19);
          if ( MatchingRestrictedErrorInfo >= 0 )
            MatchingRestrictedErrorInfo = RoReportFailedDelegate(*v8, v19);
          v3 = 0;
          v18 = v19;
          if ( MatchingRestrictedErrorInfo < 0 )
            v3 = v16;
          if ( v19 )
          {
            v19 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
          }
          goto LABEL_14;
        }
        RoTransformError(v3, 0LL, 0LL);
        goto LABEL_21;
      }
LABEL_13:
      ++v9;
      if ( ++v8 == *(_QWORD **)(v4 + 24) )
        goto LABEL_14;
    }
    RoTransformError((unsigned int)v12, 0LL, 0LL);
    Microsoft::WRL::EventSource<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
      a3,
      *v8);
LABEL_21:
    v3 = 0;
    goto LABEL_13;
  }
  do
LABEL_14:
    v13 = *(_DWORD *)(v4 + 12);
  while ( v13 != 0x7FFFFFFF && v13 != _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 12), v13 - 1, v13) );
  if ( v13 == 1 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *))(*(_QWORD *)v4 + 24LL))(v4, 1LL, a3, v6);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
