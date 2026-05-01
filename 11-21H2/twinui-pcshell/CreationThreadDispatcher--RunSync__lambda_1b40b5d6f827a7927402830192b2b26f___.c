/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_1b40b5d6f827a7927402830192b2b26f___ @ 0x180380D74
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_35a08a3de09e8a01ad9cf81ad5b27ac8___::Run @ 0x180382250 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_35a08a3de09e8a01ad9cf81ad5b27ac8___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800EF12C (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     CreateAsyncCallbackWithLambda__lambda_a816ff4f620b1516925295d014d058e4___ @ 0x180380B9C (CreateAsyncCallbackWithLambda__lambda_a816ff4f620b1516925295d014d058e4___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_1b40b5d6f827a7927402830192b2b26f___(
        __int64 a1,
        __int64 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF
  __int64 v12; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((Microsoft::WRL::AgileRef *)(a1 + 48), &v10);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v12 = *a2;
    CreateAsyncCallbackWithLambda__lambda_a816ff4f620b1516925295d014d058e4_(&v11, &v12);
    if ( v11 )
    {
      v7 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v10 + 24LL))(v10);
      v4 = v7;
      if ( v7 >= 0 )
      {
LABEL_8:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
        goto LABEL_9;
      }
      v5 = (unsigned int)v7;
      v6 = 81LL;
    }
    else
    {
      v4 = -2147024882;
      v5 = 2147942414LL;
      v6 = 80LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\internal\\shell\\inc\\creationthreaddispatcher.h",
      (const char *)v5);
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x49,
    (__int64)"onecoreuap\\internal\\shell\\inc\\creationthreaddispatcher.h",
    (const char *)(unsigned int)v3);
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
  return v4;
}
