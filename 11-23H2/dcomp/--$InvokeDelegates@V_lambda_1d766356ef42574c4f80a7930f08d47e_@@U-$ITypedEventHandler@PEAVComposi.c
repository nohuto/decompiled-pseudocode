/*
 * XREFs of ??$InvokeDelegates@V_lambda_1d766356ef42574c4f80a7930f08d47e_@@U?$ITypedEventHandler@PEAVCompositionGraphicsDevice@Composition@UI@Windows@@PEAVRenderingDeviceReplacedEventArgs@234@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_1d766356ef42574c4f80a7930f08d47e_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVCompositionGraphicsDevice@Composition@UI@Windows@@PEAVRenderingDeviceReplacedEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x1801564E4
 * Callers:
 *     ??$DoInvoke@V_lambda_1d766356ef42574c4f80a7930f08d47e_@@@?$EventSource@U?$ITypedEventHandler@PEAVCompositionGraphicsDevice@Composition@UI@Windows@@PEAVRenderingDeviceReplacedEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_1d766356ef42574c4f80a7930f08d47e_@@@Z @ 0x18015643C (--$DoInvoke@V_lambda_1d766356ef42574c4f80a7930f08d47e_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x18001C600 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F5A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Remove@?$EventSource@UIAsyncActionCompletedHandler@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180113158 (-Remove@-$EventSource@UIAsyncActionCompletedHandler@Foundation@Windows@@U-$InvokeModeOptions@$0-.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_1d766356ef42574c4f80a7930f08d47e_,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionGraphicsDevice *,Windows::UI::Composition::RenderingDeviceReplacedEventArgs *>>(
        _QWORD *a1,
        volatile int *a2,
        RTL_SRWLOCK *a3)
{
  unsigned int v4; // edi
  volatile int *v6; // rdx
  volatile int *v7; // rbx
  struct IUnknown **v8; // rsi
  volatile int **v9; // r15
  _QWORD *v10; // rbp
  _QWORD *v11; // r14
  int v12; // eax
  volatile int *v13; // rax
  unsigned int v14; // ebx
  int MatchingRestrictedErrorInfo; // eax
  __int64 v16; // rcx
  volatile int *v18[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v18[0] = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(v18, a2);
  v7 = v18[0];
  v8 = (struct IUnknown **)*((_QWORD *)v18[0] + 2);
  v9 = (volatile int **)*((_QWORD *)v18[0] + 4);
  if ( v8 == *((struct IUnknown ***)v18[0] + 3) )
    goto LABEL_22;
  v10 = (_QWORD *)a1[1];
  v11 = (_QWORD *)*a1;
  while ( 1 )
  {
    v12 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, _QWORD))(*v8)->lpVtbl[1].QueryInterface)(*v8, *v11, *v10);
    v4 = v12;
    if ( v12 == -2147417848 || v12 == -2147023174 || v12 == -1996357631 || v12 == -2147418105 || v12 == -2147418094 )
    {
      RoTransformError((unsigned int)v12, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        a3,
        *v8);
      goto LABEL_12;
    }
    if ( v12 < 0 )
      break;
LABEL_13:
    ++v9;
    if ( ++v8 == *((struct IUnknown ***)v7 + 3) )
      goto LABEL_22;
  }
  if ( !(unsigned int)IsErrorPropagationEnabled() )
  {
    RoTransformError(v4, 0LL, 0LL);
LABEL_12:
    v4 = 0;
    goto LABEL_13;
  }
  v13 = *v9;
  v19 = 0LL;
  v14 = v4;
  v18[1] = v13;
  MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v4, &v19);
  if ( MatchingRestrictedErrorInfo >= 0 )
    MatchingRestrictedErrorInfo = RoReportFailedDelegate(*v8, v19);
  v4 = 0;
  v16 = v19;
  if ( MatchingRestrictedErrorInfo < 0 )
    v4 = v14;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v7 = v18[0];
LABEL_22:
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
    (__int64)v7,
    v6);
  return v4;
}
