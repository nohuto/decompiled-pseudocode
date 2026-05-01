/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_0ccf2911bb3556e965c79eb60c053427___ @ 0x1801B6334
 * Callers:
 *     _lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_::operator() @ 0x1801B6B30 (_lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800EF12C (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180127040 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_5aee2b6cb60dad32042c7fd4933dc390_____lambda_5aee2b6cb60dad32042c7fd4933dc390___ @ 0x1801B6174 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_5aee2b6cb60dad32042c7fd4933dc390_.c)
 *     _lambda_0ccf2911bb3556e965c79eb60c053427_::_lambda_0ccf2911bb3556e965c79eb60c053427_ @ 0x1801B64E4 (_lambda_0ccf2911bb3556e965c79eb60c053427_--_lambda_0ccf2911bb3556e965c79eb60c053427_.c)
 *     _lambda_0ccf2911bb3556e965c79eb60c053427_::__lambda_0ccf2911bb3556e965c79eb60c053427_ @ 0x1801B6774 (_lambda_0ccf2911bb3556e965c79eb60c053427_--__lambda_0ccf2911bb3556e965c79eb60c053427_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_0ccf2911bb3556e965c79eb60c053427___(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  volatile signed __int32 **CAsyncCallbackWithLambda__lambda_5aee2b6cb60dad32042c7fd4933dc390_____lambda_5aee2b6cb60dad32042c7fd4933dc390; // rax
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
    lambda_0ccf2911bb3556e965c79eb60c053427_::_lambda_0ccf2911bb3556e965c79eb60c053427_(v15, a2);
    CAsyncCallbackWithLambda__lambda_5aee2b6cb60dad32042c7fd4933dc390_____lambda_5aee2b6cb60dad32042c7fd4933dc390 = Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_5aee2b6cb60dad32042c7fd4933dc390_____lambda_5aee2b6cb60dad32042c7fd4933dc390___(&v13, (__int64)v15);
    v6 = (__int64)*CAsyncCallbackWithLambda__lambda_5aee2b6cb60dad32042c7fd4933dc390_____lambda_5aee2b6cb60dad32042c7fd4933dc390;
    v14 = *CAsyncCallbackWithLambda__lambda_5aee2b6cb60dad32042c7fd4933dc390_____lambda_5aee2b6cb60dad32042c7fd4933dc390;
    *CAsyncCallbackWithLambda__lambda_5aee2b6cb60dad32042c7fd4933dc390_____lambda_5aee2b6cb60dad32042c7fd4933dc390 = 0LL;
    v7 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release(v7);
    }
    lambda_0ccf2911bb3556e965c79eb60c053427_::__lambda_0ccf2911bb3556e965c79eb60c053427_(v15);
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
      (__int64)"onecoreuap\\internal\\shell\\inc\\creationthreaddispatcher.h",
      (const char *)v8);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x49,
    (__int64)"onecoreuap\\internal\\shell\\inc\\creationthreaddispatcher.h",
    (const char *)(unsigned int)v3);
LABEL_11:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
  return v4;
}
