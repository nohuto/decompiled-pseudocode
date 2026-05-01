/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_a17548d10af2541a2c37e0dd1a1d4086__&_ @ 0x1800690A0
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f00520507454a36d8de4c18dfc66140a___::Run @ 0x180069060 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_f00520507454a36d8de4c18d_ea_180069060.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CreateAsyncCallbackWithLambda__lambda_472a7092c1a4414452e48170d805fed1___ @ 0x180069140 (CreateAsyncCallbackWithLambda__lambda_472a7092c1a4414452e48170d805fed1___.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x180169DF4 (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_a17548d10af2541a2c37e0dd1a1d4086____(
        __int64 a1,
        __int64 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF
  __int64 v13; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((Microsoft::WRL::AgileRef *)(a1 + 48), &v11);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
      (const char *)(unsigned int)v3,
      v9);
    goto LABEL_5;
  }
  v13 = *a2;
  CreateAsyncCallbackWithLambda__lambda_472a7092c1a4414452e48170d805fed1_(&v12, &v13);
  if ( !v12 )
  {
    v4 = -2147024882;
    v7 = 2147942414LL;
    v8 = 80LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
      (const char *)v7,
      v9);
    goto LABEL_4;
  }
  v5 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v11 + 24LL))(v11);
  v4 = v5;
  if ( v5 < 0 )
  {
    v7 = (unsigned int)v5;
    v8 = 81LL;
    goto LABEL_9;
  }
LABEL_4:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
LABEL_5:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
  return v4;
}
