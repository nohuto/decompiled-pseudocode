/*
 * XREFs of ??$InvokeDelegates@V_lambda_235ffb6b1ffc6a4928642e92ab1f25a5_@@UIAsyncActionCompletedHandler@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_235ffb6b1ffc6a4928642e92ab1f25a5_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@UIAsyncActionCompletedHandler@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18001C520
 * Callers:
 *     ??$DoInvoke@V_lambda_235ffb6b1ffc6a4928642e92ab1f25a5_@@@?$EventSource@UIAsyncActionCompletedHandler@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_235ffb6b1ffc6a4928642e92ab1f25a5_@@@Z @ 0x18001C434 (--$DoInvoke@V_lambda_235ffb6b1ffc6a4928642e92ab1f25a5_@@@-$EventSource@UIAsyncActionCompletedHan.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x18001C600 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F5A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Remove@?$EventSource@UIAsyncActionCompletedHandler@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180113158 (-Remove@-$EventSource@UIAsyncActionCompletedHandler@Foundation@Windows@@U-$InvokeModeOptions@$0-.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_235ffb6b1ffc6a4928642e92ab1f25a5_,Windows::Foundation::IAsyncActionCompletedHandler>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v4; // edi
  __int64 v6; // rbx
  _QWORD *v7; // rsi
  __int64 *v8; // r15
  unsigned int *v9; // rbp
  _QWORD *v10; // r14
  int v11; // eax
  __int64 v13; // rax
  unsigned int v14; // ebx
  int MatchingRestrictedErrorInfo; // eax
  __int64 v16; // rcx
  _QWORD v17[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v17[0] = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(v17);
  v6 = v17[0];
  v7 = *(_QWORD **)(v17[0] + 16LL);
  v8 = *(__int64 **)(v17[0] + 32LL);
  if ( v7 == *(_QWORD **)(v17[0] + 24LL) )
    goto LABEL_10;
  v9 = (unsigned int *)a1[1];
  v10 = (_QWORD *)*a1;
  while ( 1 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v7 + 24LL))(*v7, *v10, *v9);
    v4 = v11;
    if ( v11 == -2147417848 || v11 == -2147023174 || v11 == -1996357631 || v11 == -2147418105 || v11 == -2147418094 )
    {
      RoTransformError((unsigned int)v11, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        a3,
        *v7);
      goto LABEL_14;
    }
    if ( v11 < 0 )
      break;
LABEL_9:
    ++v8;
    if ( ++v7 == *(_QWORD **)(v6 + 24) )
      goto LABEL_10;
  }
  if ( !(unsigned int)IsErrorPropagationEnabled() )
  {
    RoTransformError(v4, 0LL, 0LL);
LABEL_14:
    v4 = 0;
    goto LABEL_9;
  }
  v13 = *v8;
  v18 = 0LL;
  v14 = v4;
  v17[1] = v13;
  MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v4, &v18);
  if ( MatchingRestrictedErrorInfo >= 0 )
    MatchingRestrictedErrorInfo = RoReportFailedDelegate(*v7, v18);
  v4 = 0;
  v16 = v18;
  if ( MatchingRestrictedErrorInfo < 0 )
    v4 = v14;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v6 = v17[0];
LABEL_10:
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6);
  return v4;
}
