/*
 * XREFs of ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18009A054
 * Callers:
 *     ??$to_hstring@PEBD$0A@@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x180098680 (--$to_hstring@PEBD$0A@@winrt@@YA-AUhstring@0@AEBQEBD@Z.c)
 *     ??0error_info_fallback@impl@winrt@@QEAA@HPEAX@Z @ 0x180098758 (--0error_info_fallback@impl@winrt@@QEAA@HPEAX@Z.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z @ 0x1800988C0 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z.c)
 *     ?Release@error_info_fallback@impl@winrt@@UEAAIXZ @ 0x180099670 (-Release@error_info_fallback@impl@winrt@@UEAAIXZ.c)
 *     _winrt::to_hresult_::_1_::catch$21 @ 0x18009AB31 (_winrt--to_hresult_--_1_--catch$21.c)
 *     _winrt::to_hresult_::_1_::catch$22 @ 0x18009ABD4 (_winrt--to_hresult_--_1_--catch$22.c)
 *     _winrt::to_hresult_::_1_::catch$23 @ 0x18009AC77 (_winrt--to_hresult_--_1_--catch$23.c)
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z @ 0x1800E3710 (-MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z.c)
 * Callees:
 *     WINRT_IMPL_HeapFree @ 0x180056FAD (WINRT_IMPL_HeapFree.c)
 *     WINRT_IMPL_GetProcessHeap @ 0x180056FDD (WINRT_IMPL_GetProcessHeap.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x180098D74 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 */

void __fastcall winrt::handle_type<winrt::impl::hstring_traits>::close(volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rbx
  HANDLE ProcessHeap; // rax

  v1 = *a1;
  if ( *a1 )
  {
    if ( !(unsigned int)winrt::impl::atomic_ref_count::operator--(v1 + 6) )
    {
      ProcessHeap = WINRT_IMPL_GetProcessHeap();
      WINRT_IMPL_HeapFree(ProcessHeap, 0, (LPVOID)v1);
    }
    *a1 = 0LL;
  }
}
