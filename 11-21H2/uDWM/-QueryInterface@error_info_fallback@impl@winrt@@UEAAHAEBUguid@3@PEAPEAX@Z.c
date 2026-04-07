/*
 * XREFs of ?QueryInterface@error_info_fallback@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800D30D0
 * Callers:
 *     ?QueryInterface@error_info_fallback@impl@winrt@@W7EAAHAEBUguid@3@PEAPEAX@Z @ 0x1800638A0 (-QueryInterface@error_info_fallback@impl@winrt@@W7EAAHAEBUguid@3@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::error_info_fallback::QueryInterface(
        winrt::impl::error_info_fallback *this,
        const struct winrt::guid *a2,
        void **a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  v3 = *(_QWORD *)a2 - winrt::impl::guid_v<winrt::impl::IRestrictedErrorInfo>;
  if ( *(_QWORD *)a2 == winrt::impl::guid_v<winrt::impl::IRestrictedErrorInfo> )
    v3 = *((_QWORD *)a2 + 1) - 0x7EB6FE93DD16BCA7LL;
  if ( !v3 )
    goto LABEL_15;
  v4 = *(_QWORD *)a2 - winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>;
  if ( *(_QWORD *)a2 == winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown> )
    v4 = *((_QWORD *)a2 + 1) - 0x46000000000000C0LL;
  if ( !v4 )
    goto LABEL_15;
  v5 = *(_QWORD *)a2 - winrt::impl::guid_v<winrt::impl::IAgileObject>;
  if ( *(_QWORD *)a2 == winrt::impl::guid_v<winrt::impl::IAgileObject> )
    v5 = *((_QWORD *)a2 + 1) + 0x6FA470359B110040LL;
  if ( v5 )
  {
    v6 = *(_QWORD *)a2 - winrt::impl::guid_v<winrt::impl::IErrorInfo>;
    if ( *(_QWORD *)a2 == winrt::impl::guid_v<winrt::impl::IErrorInfo> )
      v6 = *((_QWORD *)a2 + 1) - 0x19D12B2B0008658ELL;
    if ( v6 )
    {
      *a3 = 0LL;
      return 2147500034LL;
    }
    *a3 = this;
    _InterlockedExchangeAdd((volatile signed __int32 *)this + 8, 1u);
  }
  else
  {
LABEL_15:
    *a3 = (void *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
    _InterlockedExchangeAdd((volatile signed __int32 *)this + 8, 1u);
  }
  return 0LL;
}
