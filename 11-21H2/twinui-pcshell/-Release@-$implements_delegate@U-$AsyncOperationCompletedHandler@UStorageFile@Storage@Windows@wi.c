/*
 * XREFs of ?Release@?$implements_delegate@U?$AsyncOperationCompletedHandler@UStorageFile@Storage@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@UStorageFile@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@4@YA@AEBU?$IAsyncOperation@UStorageFile@Storage@Windows@winrt@@@234@I@Z@@impl@winrt@@UEAAIXZ @ 0x180238840
 * Callers:
 *     <none>
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     WINRT_IMPL_CloseHandle @ 0x180189338 (WINRT_IMPL_CloseHandle.c)
 */

__int64 __fastcall _Release___implements_delegate_U__AsyncOperationCompletedHandler_UStorageFile_Storage_Windows_winrt___Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperation_UStorageFile_Storage_Windows_winrt___Foundation_Windows_winrt___impl_4_YA_AEBU__IAsyncOperation_UStorageFile_Storage_Windows_winrt___234_I_Z__impl_winrt__UEAAIXZ(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  void *v9; // rcx

  v6 = winrt::impl::atomic_ref_count::operator--(a1 + 6, a2, a3, a4);
  if ( !v6 && a1 )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock, v5, v7, v8);
    v9 = (void *)*((_QWORD *)a1 + 1);
    if ( v9 )
    {
      WINRT_IMPL_CloseHandle(v9);
      *((_QWORD *)a1 + 1) = 0LL;
    }
    operator delete((void *)a1);
  }
  return v6;
}
