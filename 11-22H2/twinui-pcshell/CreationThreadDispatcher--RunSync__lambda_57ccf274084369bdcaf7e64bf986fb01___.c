/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_57ccf274084369bdcaf7e64bf986fb01___ @ 0x180216968
 * Callers:
 *     _lambda_52bfc6edea7729ed62f4f356328b854f_::operator() @ 0x1802173FC (_lambda_52bfc6edea7729ed62f4f356328b854f_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18013FF60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x180169DF4 (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_bb0c2f0ed47fbf1d2251f1c7eebd5067_____lambda_bb0c2f0ed47fbf1d2251f1c7eebd5067___ @ 0x1802167A8 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_bb0c2f0ed47fbf1d2251f1c7eebd5067_.c)
 *     _lambda_57ccf274084369bdcaf7e64bf986fb01_::_lambda_57ccf274084369bdcaf7e64bf986fb01_ @ 0x180216CC4 (_lambda_57ccf274084369bdcaf7e64bf986fb01_--_lambda_57ccf274084369bdcaf7e64bf986fb01_.c)
 *     _lambda_57ccf274084369bdcaf7e64bf986fb01_::__lambda_57ccf274084369bdcaf7e64bf986fb01_ @ 0x180217040 (_lambda_57ccf274084369bdcaf7e64bf986fb01_--__lambda_57ccf274084369bdcaf7e64bf986fb01_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_57ccf274084369bdcaf7e64bf986fb01___(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  volatile signed __int32 **CAsyncCallbackWithLambda__lambda_bb0c2f0ed47fbf1d2251f1c7eebd5067_____lambda_bb0c2f0ed47fbf1d2251f1c7eebd5067; // rax
  __int64 v6; // rbx
  volatile signed __int32 *v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  void *v12; // [rsp+20h] [rbp-39h] BYREF
  volatile signed __int32 *v13; // [rsp+28h] [rbp-31h] BYREF
  volatile signed __int32 *v14; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v15[96]; // [rsp+40h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v12 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((Microsoft::WRL::AgileRef *)(a1 + 48), &v12);
  v4 = v3;
  if ( v3 >= 0 )
  {
    lambda_57ccf274084369bdcaf7e64bf986fb01_::_lambda_57ccf274084369bdcaf7e64bf986fb01_(v15, a2);
    CAsyncCallbackWithLambda__lambda_bb0c2f0ed47fbf1d2251f1c7eebd5067_____lambda_bb0c2f0ed47fbf1d2251f1c7eebd5067 = Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_bb0c2f0ed47fbf1d2251f1c7eebd5067_____lambda_bb0c2f0ed47fbf1d2251f1c7eebd5067___(&v13, (__int64)v15);
    v6 = (__int64)*CAsyncCallbackWithLambda__lambda_bb0c2f0ed47fbf1d2251f1c7eebd5067_____lambda_bb0c2f0ed47fbf1d2251f1c7eebd5067;
    v14 = *CAsyncCallbackWithLambda__lambda_bb0c2f0ed47fbf1d2251f1c7eebd5067_____lambda_bb0c2f0ed47fbf1d2251f1c7eebd5067;
    *CAsyncCallbackWithLambda__lambda_bb0c2f0ed47fbf1d2251f1c7eebd5067_____lambda_bb0c2f0ed47fbf1d2251f1c7eebd5067 = 0LL;
    v7 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release(v7);
    }
    lambda_57ccf274084369bdcaf7e64bf986fb01_::__lambda_57ccf274084369bdcaf7e64bf986fb01_(v15);
    if ( v6 )
    {
      v10 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v12 + 24LL))(v12, v6);
      v4 = v10;
      if ( v10 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
        goto LABEL_11;
      }
      v8 = (unsigned int)v10;
      v9 = 81LL;
    }
    else
    {
      v4 = -2147024882;
      v8 = 2147942414LL;
      v9 = 80LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\internal\\shell\\inc\\creationthreaddispatcher.h",
      (const char *)v8);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x49,
    (int)"onecoreuap\\internal\\shell\\inc\\creationthreaddispatcher.h",
    (const char *)(unsigned int)v3);
LABEL_11:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
  return v4;
}
