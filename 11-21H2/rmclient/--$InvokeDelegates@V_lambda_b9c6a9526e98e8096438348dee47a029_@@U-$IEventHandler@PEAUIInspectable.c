/*
 * XREFs of ??$InvokeDelegates@V_lambda_b9c6a9526e98e8096438348dee47a029_@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_b9c6a9526e98e8096438348dee47a029_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18000253C
 * Callers:
 *     ??$DoInvoke@V_lambda_b9c6a9526e98e8096438348dee47a029_@@@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_b9c6a9526e98e8096438348dee47a029_@@@Z @ 0x180002FFC (--$DoInvoke@V_lambda_b9c6a9526e98e8096438348dee47a029_@@@-$EventSource@U-$IEventHandler@PEAUIIns.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x18000270C (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180006990 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalRelease@?$ComPtr@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180008EC8 (-InternalRelease@-$ComPtr@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180015750 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Remove@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18001AF6C (-Remove@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOptio.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_b9c6a9526e98e8096438348dee47a029_,Windows::Foundation::IEventHandler<IInspectable *>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v4; // esi
  unsigned int v5; // edi
  __int64 v7; // rbx
  _QWORD *v8; // r14
  _QWORD *v9; // rbp
  _QWORD *v10; // r13
  _QWORD *v11; // r15
  int v12; // eax
  int MatchingRestrictedErrorInfo; // ebx
  bool v15; // sf
  _QWORD v16[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v16[0] = 0LL;
  v5 = 0;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(v16);
  v7 = v16[0];
  v8 = *(_QWORD **)(v16[0] + 16LL);
  v9 = *(_QWORD **)(v16[0] + 32LL);
  if ( v8 == *(_QWORD **)(v16[0] + 24LL) )
    goto LABEL_10;
  v10 = (_QWORD *)a1[1];
  v11 = (_QWORD *)*a1;
  while ( 1 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v8 + 24LL))(*v8, *v11, *v10);
    v5 = v12;
    if ( v12 == -2147417848 || v12 == -2147023174 || v12 == -1996357631 || v12 == -2147418105 || v12 == -2147418094 )
    {
      RoTransformError((unsigned int)v12, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        a3,
        *v8);
      goto LABEL_14;
    }
    if ( v12 < 0 )
      break;
LABEL_9:
    ++v9;
    if ( ++v8 == *(_QWORD **)(v7 + 24) )
      goto LABEL_10;
  }
  if ( !(unsigned int)IsErrorPropagationEnabled() )
  {
    RoTransformError(v5, 0LL, 0LL);
LABEL_14:
    v5 = 0;
    goto LABEL_9;
  }
  v16[1] = *v9;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IEventHandler<IInspectable *>>::InternalRelease(&v17);
  MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v5, &v17);
  if ( MatchingRestrictedErrorInfo >= 0 )
    MatchingRestrictedErrorInfo = RoReportFailedDelegate(*v8, v17);
  Microsoft::WRL::ComPtr<Windows::Foundation::IEventHandler<IInspectable *>>::InternalRelease(&v17);
  v15 = MatchingRestrictedErrorInfo < 0;
  v7 = v16[0];
  if ( v15 )
    v4 = v5;
  v5 = v4;
LABEL_10:
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v7);
  return v5;
}
