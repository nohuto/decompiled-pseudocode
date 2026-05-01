/*
 * XREFs of ?QueryInterface@?$implements_delegate@U?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperation@_N@234@I@Z@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180631B40
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall _QueryInterface___implements_delegate_U__AsyncOperationCompletedHandler__N_Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperation__N_Foundation_Windows_winrt___impl_4_YA_A_PAEBU__IAsyncOperation__N_234_I_Z__impl_winrt__UEAAHAEBUguid_3_PEAPEAX_Z(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r9
  _QWORD *v5; // rcx
  _QWORD *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9

  if ( winrt::operator==(a2, winrt::impl::guid_v<winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>>)
    || winrt::operator==(v2, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>)
    || winrt::operator==(v5, &winrt::impl::guid_v<winrt::impl::IAgileObject>) )
  {
    *v3 = v4;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 24), 1u);
    return 0LL;
  }
  else if ( winrt::operator==(v6, &winrt::impl::guid_v<winrt::impl::IMarshal>) )
  {
    return winrt::impl::make_marshaler(v8, v7);
  }
  else
  {
    *v7 = 0LL;
    return 2147500034LL;
  }
}
