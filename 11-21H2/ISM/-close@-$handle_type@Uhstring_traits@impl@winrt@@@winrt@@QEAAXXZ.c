/*
 * XREFs of ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180082F9C
 * Callers:
 *     ??$to_hstring@PEBD$0A@@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x180081408 (--$to_hstring@PEBD$0A@@winrt@@YA-AUhstring@0@AEBQEBD@Z.c)
 *     ??0error_info_fallback@impl@winrt@@QEAA@HPEAX@Z @ 0x1800814E0 (--0error_info_fallback@impl@winrt@@QEAA@HPEAX@Z.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z @ 0x180081648 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z.c)
 *     ?Release@error_info_fallback@impl@winrt@@UEAAIXZ @ 0x1800824D0 (-Release@error_info_fallback@impl@winrt@@UEAAIXZ.c)
 *     _winrt::to_hresult_::_1_::catch$21 @ 0x180083A81 (_winrt--to_hresult_--_1_--catch$21.c)
 *     _winrt::to_hresult_::_1_::catch$22 @ 0x180083B29 (_winrt--to_hresult_--_1_--catch$22.c)
 *     _winrt::to_hresult_::_1_::catch$23 @ 0x180083BD1 (_winrt--to_hresult_--_1_--catch$23.c)
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z @ 0x1800CA080 (-MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z.c)
 * Callees:
 *     WINRT_IMPL_HeapFree @ 0x18004B1B1 (WINRT_IMPL_HeapFree.c)
 *     WINRT_IMPL_GetProcessHeap @ 0x18004B1E1 (WINRT_IMPL_GetProcessHeap.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x180081AD0 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 */

void __fastcall winrt::handle_type<winrt::impl::hstring_traits>::close(
        volatile signed __int32 **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  volatile signed __int32 *v4; // rbx
  HANDLE ProcessHeap; // rax

  v4 = *a1;
  if ( *a1 )
  {
    if ( !(unsigned int)winrt::impl::atomic_ref_count::operator--(v4 + 6, a2, a3, a4) )
    {
      ProcessHeap = WINRT_IMPL_GetProcessHeap();
      WINRT_IMPL_HeapFree(ProcessHeap, 0, (LPVOID)v4);
    }
    *a1 = 0LL;
  }
}
