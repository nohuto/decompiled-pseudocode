/*
 * XREFs of ?QueryInterface@?$implements_delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@V_lambda_fcf98652dc0cd937c818a0b0ee1f275d_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800FA790
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::AsyncActionCompletedHandler,_lambda_fcf98652dc0cd937c818a0b0ee1f275d_>::QueryInterface(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r9
  _QWORD *v5; // rcx
  _QWORD *v6; // rcx
  __int64 *v8; // r8
  __int64 v9; // r9

  if ( winrt::operator==(a2, winrt::impl::guid_v<winrt::Windows::Foundation::AsyncActionCompletedHandler>)
    || winrt::operator==(v2, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>)
    || winrt::operator==(v5, &winrt::impl::guid_v<winrt::impl::IAgileObject>) )
  {
    *v3 = v4;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 40), 1u);
    return 0LL;
  }
  else if ( winrt::operator==(v6, &winrt::impl::guid_v<winrt::impl::IMarshal>) )
  {
    return winrt::impl::make_marshaler(v9, v8);
  }
  else
  {
    *v8 = 0LL;
    return 2147500034LL;
  }
}
