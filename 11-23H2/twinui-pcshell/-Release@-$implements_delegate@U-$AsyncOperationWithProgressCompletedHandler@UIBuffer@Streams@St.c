/*
 * XREFs of ?Release@?$implements_delegate@U?$AsyncOperationWithProgressCompletedHandler@UIBuffer@Streams@Storage@Windows@winrt@@I@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperationWithProgress@UIBuffer@Streams@Storage@Windows@winrt@@I@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperationWithProgress@UIBuffer@Streams@Storage@Windows@winrt@@I@234@I@Z@@impl@winrt@@UEAAIXZ @ 0x180632060
 * Callers:
 *     <none>
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     WINRT_IMPL_CloseHandle @ 0x1801C7938 (WINRT_IMPL_CloseHandle.c)
 */

__int64 __fastcall _Release___implements_delegate_U__AsyncOperationWithProgressCompletedHandler_UIBuffer_Streams_Storage_Windows_winrt__I_Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperationWithProgress_UIBuffer_Streams_Storage_Windows_winrt__I_Foundation_Windows_winrt___impl_4_YA_A_PAEBU__IAsyncOperationWithProgress_UIBuffer_Streams_Storage_Windows_winrt__I_234_I_Z__impl_winrt__UEAAIXZ(
        volatile signed __int32 *a1)
{
  unsigned int v2; // edi
  void *v3; // rcx

  v2 = winrt::impl::atomic_ref_count::operator--(a1 + 6);
  if ( !v2 && a1 )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
    v3 = (void *)*((_QWORD *)a1 + 1);
    if ( v3 )
    {
      WINRT_IMPL_CloseHandle(v3);
      *((_QWORD *)a1 + 1) = 0LL;
    }
    operator delete((void *)a1);
  }
  return v2;
}
