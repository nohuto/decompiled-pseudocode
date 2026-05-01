/*
 * XREFs of ?fallback_RoOriginateLanguageException@hresult_error@winrt@@CAHHPEAX0@Z @ 0x1802D9F20
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     SetErrorInfo_0 @ 0x18018F68B (SetErrorInfo_0.c)
 *     ??0error_info_fallback@impl@winrt@@QEAA@HPEAX@Z @ 0x1802D6580 (--0error_info_fallback@impl@winrt@@QEAA@HPEAX@Z.c)
 */

__int64 __fastcall winrt::hresult_error::fallback_RoOriginateLanguageException(
        unsigned int a1,
        winrt::impl *a2,
        void *a3)
{
  winrt::impl::error_info_fallback *v5; // rax
  IErrorInfo *v6; // rbx
  IErrorInfo *v8; // [rsp+48h] [rbp+20h] BYREF

  v5 = (winrt::impl::error_info_fallback *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v6 = (IErrorInfo *)winrt::impl::error_info_fallback::error_info_fallback(
                         v5,
                         (struct winrt::impl::hstring_header *)a1,
                         a2);
  else
    v6 = 0LL;
  v8 = v6;
  SetErrorInfo_0(0, v6);
  if ( v6 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)&v8);
  return 1LL;
}
