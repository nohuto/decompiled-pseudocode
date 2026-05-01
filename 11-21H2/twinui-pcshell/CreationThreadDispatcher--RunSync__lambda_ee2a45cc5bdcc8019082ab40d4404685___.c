/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_ee2a45cc5bdcc8019082ab40d4404685___ @ 0x1804872CC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1ec5a9652c39672d7f6d58af325930b6___::Run @ 0x1804882E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1ec5a9652c39672d7f6d58af325930b6___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800EF12C (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180127040 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_a6b2c74624c587a8a571852b2ac6dbee_____lambda_a6b2c74624c587a8a571852b2ac6dbee___ @ 0x180486E60 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_a6b2c74624c587a8a571852b2ac6dbee_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_ee2a45cc5bdcc8019082ab40d4404685___(
        __int64 a1,
        __int128 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  volatile signed __int32 **CAsyncCallbackWithLambda__lambda_a6b2c74624c587a8a571852b2ac6dbee_____lambda_a6b2c74624c587a8a571852b2ac6dbee; // rax
  __int64 v6; // rbx
  volatile signed __int32 *v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  __int128 v12; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  void *v15; // [rsp+60h] [rbp+20h] BYREF
  volatile signed __int32 *v16; // [rsp+70h] [rbp+30h] BYREF
  volatile signed __int32 *v17; // [rsp+78h] [rbp+38h] BYREF

  v15 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((Microsoft::WRL::AgileRef *)(a1 + 48), &v15);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v12 = *a2;
    v13 = *((_QWORD *)a2 + 2);
    CAsyncCallbackWithLambda__lambda_a6b2c74624c587a8a571852b2ac6dbee_____lambda_a6b2c74624c587a8a571852b2ac6dbee = Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_a6b2c74624c587a8a571852b2ac6dbee_____lambda_a6b2c74624c587a8a571852b2ac6dbee___(&v16, (__int64)&v12);
    v6 = (__int64)*CAsyncCallbackWithLambda__lambda_a6b2c74624c587a8a571852b2ac6dbee_____lambda_a6b2c74624c587a8a571852b2ac6dbee;
    v17 = *CAsyncCallbackWithLambda__lambda_a6b2c74624c587a8a571852b2ac6dbee_____lambda_a6b2c74624c587a8a571852b2ac6dbee;
    *CAsyncCallbackWithLambda__lambda_a6b2c74624c587a8a571852b2ac6dbee_____lambda_a6b2c74624c587a8a571852b2ac6dbee = 0LL;
    v7 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release(v7);
    }
    if ( v6 )
    {
      v10 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v15 + 24LL))(v15, v6);
      v4 = v10;
      if ( v10 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
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
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
  return v4;
}
