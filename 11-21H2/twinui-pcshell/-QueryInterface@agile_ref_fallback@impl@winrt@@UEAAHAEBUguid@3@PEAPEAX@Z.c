/*
 * XREFs of ?QueryInterface@agile_ref_fallback@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180343250
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::agile_ref_fallback::QueryInterface(
        winrt::impl::agile_ref_fallback *this,
        const struct winrt::guid *a2,
        void **a3)
{
  _QWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // rcx

  if ( winrt::operator==(a2, winrt::impl::guid_v<winrt::impl::IAgileReference>)
    || winrt::operator==(v3, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>)
    || winrt::operator==(v6, &winrt::impl::guid_v<winrt::impl::IAgileObject>) )
  {
    *v4 = v5;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 20), 1u);
    return 0LL;
  }
  else
  {
    *v4 = 0LL;
    return 2147500034LL;
  }
}
