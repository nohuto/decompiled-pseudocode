/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_b057d2eecf04af11f3f014dd266c7d19___ @ 0x1801EA1F4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076___::Run @ 0x1801EAAD0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_dc9a4f30738474328512289af513d076___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800EF12C (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180127040 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_1dc6729d9ad27942be7b6a7593c66a88_____lambda_1dc6729d9ad27942be7b6a7593c66a88___ @ 0x1801EA02C (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_1dc6729d9ad27942be7b6a7593c66a88_.c)
 *     _lambda_b057d2eecf04af11f3f014dd266c7d19_::_lambda_b057d2eecf04af11f3f014dd266c7d19_ @ 0x1801EA3E0 (_lambda_b057d2eecf04af11f3f014dd266c7d19_--_lambda_b057d2eecf04af11f3f014dd266c7d19_.c)
 *     _lambda_b057d2eecf04af11f3f014dd266c7d19_::__lambda_b057d2eecf04af11f3f014dd266c7d19_ @ 0x1801EA540 (_lambda_b057d2eecf04af11f3f014dd266c7d19_--__lambda_b057d2eecf04af11f3f014dd266c7d19_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_b057d2eecf04af11f3f014dd266c7d19___(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  volatile signed __int32 **CAsyncCallbackWithLambda__lambda_1dc6729d9ad27942be7b6a7593c66a88_____lambda_1dc6729d9ad27942be7b6a7593c66a88; // rax
  __int64 v6; // rbx
  volatile signed __int32 *v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  _BYTE v12[32]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  void *v14; // [rsp+60h] [rbp+20h] BYREF
  volatile signed __int32 *v15; // [rsp+70h] [rbp+30h] BYREF
  volatile signed __int32 *v16; // [rsp+78h] [rbp+38h] BYREF

  v14 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((Microsoft::WRL::AgileRef *)(a1 + 48), &v14);
  v4 = v3;
  if ( v3 >= 0 )
  {
    lambda_b057d2eecf04af11f3f014dd266c7d19_::_lambda_b057d2eecf04af11f3f014dd266c7d19_(v12, a2);
    CAsyncCallbackWithLambda__lambda_1dc6729d9ad27942be7b6a7593c66a88_____lambda_1dc6729d9ad27942be7b6a7593c66a88 = Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_1dc6729d9ad27942be7b6a7593c66a88_____lambda_1dc6729d9ad27942be7b6a7593c66a88___(&v15, (__int64)v12);
    v6 = (__int64)*CAsyncCallbackWithLambda__lambda_1dc6729d9ad27942be7b6a7593c66a88_____lambda_1dc6729d9ad27942be7b6a7593c66a88;
    v16 = *CAsyncCallbackWithLambda__lambda_1dc6729d9ad27942be7b6a7593c66a88_____lambda_1dc6729d9ad27942be7b6a7593c66a88;
    *CAsyncCallbackWithLambda__lambda_1dc6729d9ad27942be7b6a7593c66a88_____lambda_1dc6729d9ad27942be7b6a7593c66a88 = 0LL;
    v7 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release(v7);
    }
    lambda_b057d2eecf04af11f3f014dd266c7d19_::__lambda_b057d2eecf04af11f3f014dd266c7d19_(v12);
    if ( v6 )
    {
      v10 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v14 + 24LL))(v14, v6);
      v4 = v10;
      if ( v10 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
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
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
  return v4;
}
