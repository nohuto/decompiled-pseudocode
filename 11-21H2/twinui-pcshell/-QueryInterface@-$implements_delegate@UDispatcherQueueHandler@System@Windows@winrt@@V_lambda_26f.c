/*
 * XREFs of ?QueryInterface@?$implements_delegate@UDispatcherQueueHandler@System@Windows@winrt@@V_lambda_26f44cd4480ca991a21fc760d40b2af7_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18003DFA0
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::System::DispatcherQueueHandler,_lambda_26f44cd4480ca991a21fc760d40b2af7_>::QueryInterface(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r9

  if ( (unsigned __int8)winrt::operator==(
                          a2,
                          &winrt::impl::guid_v<winrt::Windows::System::DispatcherQueueHandler>,
                          a3,
                          a1)
    || (unsigned __int8)winrt::operator==(v3, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>, v4, v5)
    || (unsigned __int8)winrt::operator==(v6, &winrt::impl::guid_v<winrt::impl::IAgileObject>, v4, v5) )
  {
    *v4 = v5;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 16), 1u);
    return 0LL;
  }
  else if ( (unsigned __int8)winrt::operator==(v7, &winrt::impl::guid_v<winrt::impl::IMarshal>, v4, v5) )
  {
    return winrt::impl::make_marshaler(v10, v9);
  }
  else
  {
    *v9 = 0LL;
    return 2147500034LL;
  }
}
