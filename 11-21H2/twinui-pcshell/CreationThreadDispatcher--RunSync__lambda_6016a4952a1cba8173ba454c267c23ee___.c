/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_6016a4952a1cba8173ba454c267c23ee___ @ 0x1805B27C8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_00240b7ecf0f21591ff2c0aa4694bf15___::Run @ 0x1805B29E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_00240b7ecf0f21591ff2c0aa4694bf15___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800EF12C (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     CreateAsyncCallbackWithLambda__lambda_45988871592e666b02aafc01b6a03f08___ @ 0x1805B25EC (CreateAsyncCallbackWithLambda__lambda_45988871592e666b02aafc01b6a03f08___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_6016a4952a1cba8173ba454c267c23ee___(
        __int64 a1,
        __int64 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v10; // [rsp+40h] [rbp+20h] BYREF
  void *v11; // [rsp+50h] [rbp+30h] BYREF
  __int64 v12; // [rsp+58h] [rbp+38h] BYREF

  v11 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((Microsoft::WRL::AgileRef *)(a1 + 48), &v11);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v10 = *a2;
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v10);
    CreateAsyncCallbackWithLambda__lambda_45988871592e666b02aafc01b6a03f08_(&v12, &v10);
    if ( v10 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
    if ( v12 )
    {
      v7 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v11 + 24LL))(v11);
      v4 = v7;
      if ( v7 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
        goto LABEL_11;
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
      (__int64)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
      (const char *)v5);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x49,
    (__int64)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
    (const char *)(unsigned int)v3);
LABEL_11:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
  return v4;
}
