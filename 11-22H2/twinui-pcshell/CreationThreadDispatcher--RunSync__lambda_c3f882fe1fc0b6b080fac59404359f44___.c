/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_c3f882fe1fc0b6b080fac59404359f44___ @ 0x180169BCC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_12e85c284fa8103b2dd64ec0811286a1___::Run @ 0x180169AA0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_12e85c284fa8103b2dd64ec0811286a1___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreateAsyncCallbackWithLambda__lambda_d26a2e546f8ac9cdcd5c14dc0e8aed0a___ @ 0x180169C6C (CreateAsyncCallbackWithLambda__lambda_d26a2e546f8ac9cdcd5c14dc0e8aed0a___.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x180169DF4 (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_c3f882fe1fc0b6b080fac59404359f44___(
        __int64 a1,
        __int64 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v7; // r9
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF
  __int64 v12; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((Microsoft::WRL::AgileRef *)(a1 + 48), &v10);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49,
      (int)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
      (const char *)(unsigned int)v3);
    goto LABEL_5;
  }
  v12 = *a2;
  CreateAsyncCallbackWithLambda__lambda_d26a2e546f8ac9cdcd5c14dc0e8aed0a_(&v11, &v12);
  if ( !v11 )
  {
    v4 = -2147024882;
    v7 = 2147942414LL;
    v8 = 80LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
      (const char *)v7);
    goto LABEL_4;
  }
  v5 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v10 + 24LL))(v10);
  v4 = v5;
  if ( v5 < 0 )
  {
    v7 = (unsigned int)v5;
    v8 = 81LL;
    goto LABEL_9;
  }
LABEL_4:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
LABEL_5:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
  return v4;
}
