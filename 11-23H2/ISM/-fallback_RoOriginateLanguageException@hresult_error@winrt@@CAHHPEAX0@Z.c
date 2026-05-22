/*
 * XREFs of ?fallback_RoOriginateLanguageException@hresult_error@winrt@@CAHHPEAX0@Z @ 0x18009A350
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B4FC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057604 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     SetErrorInfo_0 @ 0x180058191 (SetErrorInfo_0.c)
 *     ??0error_info_fallback@impl@winrt@@QEAA@HPEAX@Z @ 0x180098758 (--0error_info_fallback@impl@winrt@@QEAA@HPEAX@Z.c)
 */

__int64 __fastcall winrt::hresult_error::fallback_RoOriginateLanguageException(
        int a1,
        struct winrt::impl::hstring_header *a2,
        void *a3)
{
  winrt::impl::error_info_fallback *v5; // rax
  IErrorInfo *v6; // rbx
  IErrorInfo *v8; // [rsp+48h] [rbp+20h] BYREF

  v5 = (winrt::impl::error_info_fallback *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v6 = (IErrorInfo *)winrt::impl::error_info_fallback::error_info_fallback(v5, a1, a2);
  else
    v6 = 0LL;
  v8 = v6;
  SetErrorInfo_0(0, v6);
  if ( v6 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v8);
  return 1LL;
}
