/*
 * XREFs of ?QueryInterface@error_info_fallback@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1802D7D60
 * Callers:
 *     ?QueryInterface@error_info_fallback@impl@winrt@@W7EAAHAEBUguid@3@PEAPEAX@Z @ 0x1801EADC0 (-QueryInterface@error_info_fallback@impl@winrt@@W7EAAHAEBUguid@3@PEAPEAX@Z.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::error_info_fallback::QueryInterface(
        winrt::impl::error_info_fallback *this,
        const struct winrt::guid *a2,
        void **a3)
{
  _QWORD *v3; // rcx
  __int64 *v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  _QWORD *v8; // r8

  if ( winrt::operator==(a2, winrt::impl::guid_v<winrt::impl::IRestrictedErrorInfo>)
    || winrt::operator==(v3, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>)
    || winrt::operator==(v6, &winrt::impl::guid_v<winrt::impl::IAgileObject>) )
  {
    *v4 = (v5 + 8) & -(__int64)(v5 != 0);
  }
  else
  {
    if ( !winrt::operator==(v7, winrt::impl::guid_v<winrt::impl::IErrorInfo>) )
    {
      *v8 = 0LL;
      return 2147500034LL;
    }
    *v8 = v5;
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 32), 1u);
  return 0LL;
}
