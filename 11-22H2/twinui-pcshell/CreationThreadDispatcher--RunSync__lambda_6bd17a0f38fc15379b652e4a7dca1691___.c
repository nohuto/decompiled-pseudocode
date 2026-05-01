/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_6bd17a0f38fc15379b652e4a7dca1691___ @ 0x1807883A0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4___::Run @ 0x18078A400 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x180169DF4 (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     CreateAsyncCallbackWithLambda__lambda_a3b1a5efa940eb4938a491b1a4a3cfe8___ @ 0x180788230 (CreateAsyncCallbackWithLambda__lambda_a3b1a5efa940eb4938a491b1a4a3cfe8___.c)
 *     _lambda_6bd17a0f38fc15379b652e4a7dca1691_::_lambda_6bd17a0f38fc15379b652e4a7dca1691_ @ 0x180788564 (_lambda_6bd17a0f38fc15379b652e4a7dca1691_--_lambda_6bd17a0f38fc15379b652e4a7dca1691_.c)
 *     _lambda_6bd17a0f38fc15379b652e4a7dca1691_::__lambda_6bd17a0f38fc15379b652e4a7dca1691_ @ 0x180788C34 (_lambda_6bd17a0f38fc15379b652e4a7dca1691_--__lambda_6bd17a0f38fc15379b652e4a7dca1691_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_6bd17a0f38fc15379b652e4a7dca1691___(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((Microsoft::WRL::AgileRef *)(a1 + 48), &v11);
  v4 = v3;
  if ( v3 >= 0 )
  {
    lambda_6bd17a0f38fc15379b652e4a7dca1691_::_lambda_6bd17a0f38fc15379b652e4a7dca1691_(v9, a2);
    CreateAsyncCallbackWithLambda__lambda_a3b1a5efa940eb4938a491b1a4a3cfe8_(&v12, (__int64)v9);
    lambda_6bd17a0f38fc15379b652e4a7dca1691_::__lambda_6bd17a0f38fc15379b652e4a7dca1691_(v9);
    if ( v12 )
    {
      v7 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v11 + 24LL))(v11);
      v4 = v7;
      if ( v7 >= 0 )
      {
LABEL_8:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
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
      (int)"onecoreuap\\internal\\shell\\inc\\creationthreaddispatcher.h",
      (const char *)v5);
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x49,
    (int)"onecoreuap\\internal\\shell\\inc\\creationthreaddispatcher.h",
    (const char *)(unsigned int)v3);
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
  return v4;
}
