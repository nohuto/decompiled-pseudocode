/*
 * XREFs of ??$InvokeDelegates@V_lambda_813c1a060ca2f05baf3690d2c7f23b38_@@U?$IEventHandler@_N@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_813c1a060ca2f05baf3690d2c7f23b38_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@_N@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x180326CCC
 * Callers:
 *     ?InvokeOverlayDisplayModeEventTask@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180333F68 (-InvokeOverlayDisplayModeEventTask@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18003E118 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x18009F814 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EED70 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_813c1a060ca2f05baf3690d2c7f23b38_,Windows::Foundation::IEventHandler<bool>>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  unsigned int v5; // esi
  unsigned int v6; // edi
  __int64 v7; // r8
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 **v9; // rbp
  struct IUnknown **v10; // r14
  _BYTE *v11; // r13
  _QWORD *v12; // r15
  int v13; // eax
  int MatchingRestrictedErrorInfo; // ebx
  volatile signed __int32 *v16[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0;
  v6 = 0;
  v16[0] = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)v16, a2);
  v8 = v16[0];
  v9 = (volatile signed __int32 **)*((_QWORD *)v16[0] + 4);
  v10 = (struct IUnknown **)*((_QWORD *)v16[0] + 2);
  if ( v10 == *((struct IUnknown ***)v16[0] + 3) )
    goto LABEL_20;
  v11 = (_BYTE *)a1[1];
  v12 = (_QWORD *)*a1;
  while ( 1 )
  {
    LOBYTE(v7) = *v11;
    v13 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, __int64))(*v10)->lpVtbl[1].QueryInterface)(*v10, *v12, v7);
    v6 = v13;
    if ( v13 == -2147417848 || v13 == -2147023174 || v13 == -1996357631 || v13 == -2147418105 || v13 == -2147418094 )
    {
      RoTransformError((unsigned int)v13, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
        a3,
        *v10);
      goto LABEL_12;
    }
    if ( v13 < 0 )
      break;
LABEL_13:
    ++v9;
    if ( ++v10 == *((struct IUnknown ***)v8 + 3) )
      goto LABEL_20;
  }
  if ( !(unsigned int)IsErrorPropagationEnabled() )
  {
    RoTransformError(v6, 0LL, 0LL);
LABEL_12:
    v6 = 0;
    goto LABEL_13;
  }
  v16[1] = *v9;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
  MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v6, &v17);
  if ( MatchingRestrictedErrorInfo >= 0 )
    MatchingRestrictedErrorInfo = RoReportFailedDelegate(*v10, v17);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
  if ( MatchingRestrictedErrorInfo < 0 )
    v5 = v6;
  v6 = v5;
LABEL_20:
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(v16);
  return v6;
}
