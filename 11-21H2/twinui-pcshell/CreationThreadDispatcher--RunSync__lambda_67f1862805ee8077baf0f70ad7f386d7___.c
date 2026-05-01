/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_67f1862805ee8077baf0f70ad7f386d7___ @ 0x180197CC0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7b95d5233fc5e28534c5b7f78f881cdf___::Run @ 0x1801984B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7b95d5233fc5e28534c5b7f78f881cdf___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800EF12C (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180127040 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_1da26ebb24c333f899c66de3e4e77cc5_____lambda_1da26ebb24c333f899c66de3e4e77cc5___ @ 0x180197744 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_1da26ebb24c333f899c66de3e4e77cc5_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_67f1862805ee8077baf0f70ad7f386d7___(
        __int64 a1,
        __int64 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  volatile signed __int32 **CAsyncCallbackWithLambda__lambda_1da26ebb24c333f899c66de3e4e77cc5_____lambda_1da26ebb24c333f899c66de3e4e77cc5; // rax
  __int64 v6; // rbx
  volatile signed __int32 *v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v13; // [rsp+30h] [rbp+8h] BYREF
  volatile signed __int32 *v14; // [rsp+40h] [rbp+18h] BYREF
  __int64 v15; // [rsp+48h] [rbp+20h] BYREF

  v13 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((Microsoft::WRL::AgileRef *)(a1 + 48), &v13);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v15 = *a2;
    CAsyncCallbackWithLambda__lambda_1da26ebb24c333f899c66de3e4e77cc5_____lambda_1da26ebb24c333f899c66de3e4e77cc5 = Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_1da26ebb24c333f899c66de3e4e77cc5_____lambda_1da26ebb24c333f899c66de3e4e77cc5___(&v14, &v15);
    v6 = (__int64)*CAsyncCallbackWithLambda__lambda_1da26ebb24c333f899c66de3e4e77cc5_____lambda_1da26ebb24c333f899c66de3e4e77cc5;
    v15 = (__int64)*CAsyncCallbackWithLambda__lambda_1da26ebb24c333f899c66de3e4e77cc5_____lambda_1da26ebb24c333f899c66de3e4e77cc5;
    *CAsyncCallbackWithLambda__lambda_1da26ebb24c333f899c66de3e4e77cc5_____lambda_1da26ebb24c333f899c66de3e4e77cc5 = 0LL;
    v7 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release(v7);
    }
    if ( v6 )
    {
      v10 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v13 + 24LL))(v13, v6);
      v4 = v10;
      if ( v10 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
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
      (__int64)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
      (const char *)v8);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x49,
    (__int64)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
    (const char *)(unsigned int)v3);
LABEL_11:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
  return v4;
}
