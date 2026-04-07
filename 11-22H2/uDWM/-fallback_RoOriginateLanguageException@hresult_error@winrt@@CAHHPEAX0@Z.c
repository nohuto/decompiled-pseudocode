/*
 * XREFs of ?fallback_RoOriginateLanguageException@hresult_error@winrt@@CAHHPEAX0@Z @ 0x1800D87D0
 * Callers:
 *     <none>
 * Callees:
 *     SetErrorInfo_0 @ 0x18005E63D (SetErrorInfo_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009E730 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??0error_info_fallback@impl@winrt@@QEAA@HPEAX@Z @ 0x1800D6928 (--0error_info_fallback@impl@winrt@@QEAA@HPEAX@Z.c)
 */

__int64 __fastcall winrt::hresult_error::fallback_RoOriginateLanguageException(
        DWORD a1,
        struct winrt::impl::hstring_header *a2,
        void *a3)
{
  winrt::impl::error_info_fallback *v5; // rax
  IErrorInfo *v6; // rbx
  IErrorInfo *v8; // [rsp+48h] [rbp+20h] BYREF

  v5 = (winrt::impl::error_info_fallback *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64, void *))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                             WPF::g_pProcessHeap,
                                             40LL,
                                             a3);
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
