/*
 * XREFs of ??$InvokeDelegates@V_lambda_992899f37bde9c4ccf5aeca340241f6d_@@U?$ITypedEventHandler@PEAUIObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@23456@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_992899f37bde9c4ccf5aeca340241f6d_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@23456@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x1803BE3CC
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x180044DC0 (-Run@-$CTaskWrapper@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x1800E3010 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x180142034 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1803C36BC (-Remove@-$EventSource@U-$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@W.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_992899f37bde9c4ccf5aeca340241f6d_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithVisibility *,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs *>>(
        _QWORD *a1,
        volatile int *a2,
        __int64 a3)
{
  unsigned int v5; // edi
  volatile int *v6; // rbx
  volatile int **v7; // r15
  _QWORD *v8; // rsi
  _QWORD *v9; // rbp
  _QWORD *v10; // r14
  int v11; // eax
  unsigned int v12; // ebx
  int MatchingRestrictedErrorInfo; // eax
  volatile int *v15[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0;
  v15[0] = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(v15, a2);
  v6 = v15[0];
  v7 = (volatile int **)*((_QWORD *)v15[0] + 4);
  v8 = (_QWORD *)*((_QWORD *)v15[0] + 2);
  if ( v8 == *((_QWORD **)v15[0] + 3) )
    goto LABEL_20;
  v9 = (_QWORD *)a1[1];
  v10 = (_QWORD *)*a1;
  while ( 1 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v8 + 24LL))(*v8, *v10, *v9);
    v5 = v11;
    if ( v11 == -2147417848 || v11 == -2147023174 || v11 == -1996357631 || v11 == -2147418105 || v11 == -2147418094 )
    {
      RoTransformError((unsigned int)v11, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
        a3,
        *v8);
      goto LABEL_12;
    }
    if ( v11 < 0 )
      break;
LABEL_13:
    ++v7;
    if ( ++v8 == *((_QWORD **)v6 + 3) )
      goto LABEL_20;
  }
  if ( !(unsigned int)IsErrorPropagationEnabled() )
  {
    RoTransformError(v5, 0LL, 0LL);
LABEL_12:
    v5 = 0;
    goto LABEL_13;
  }
  v12 = v5;
  v15[1] = *v7;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
  MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v5, &v16);
  if ( MatchingRestrictedErrorInfo >= 0 )
    MatchingRestrictedErrorInfo = RoReportFailedDelegate(*v8, v16);
  v5 = 0;
  if ( MatchingRestrictedErrorInfo < 0 )
    v5 = v12;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
LABEL_20:
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(v15);
  return v5;
}
