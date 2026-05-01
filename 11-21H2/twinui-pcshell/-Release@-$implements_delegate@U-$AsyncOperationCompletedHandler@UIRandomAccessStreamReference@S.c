/*
 * XREFs of ?Release@?$implements_delegate@U?$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$when_any@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@U1234@@4@YA?AU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@234@AEBU6234@0@Z@@impl@winrt@@UEAAIXZ @ 0x180036F00
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     WINRT_IMPL_CloseHandle @ 0x180189338 (WINRT_IMPL_CloseHandle.c)
 */

__int64 __fastcall _Release___implements_delegate_U__AsyncOperationCompletedHandler_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_winrt__Ushared_type__1____when_any_U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_winrt__U1234__4_YA_AU__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___234_AEBU6234_0_Z__impl_winrt__UEAAIXZ(
        _QWORD *a1)
{
  unsigned int v2; // edi
  void *v4; // rcx

  v2 = winrt::impl::atomic_ref_count::operator--(a1 + 4);
  if ( !v2 && a1 )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
    if ( a1[3] )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(a1 + 3));
    v4 = (void *)a1[1];
    if ( v4 )
    {
      WINRT_IMPL_CloseHandle(v4);
      a1[1] = 0LL;
    }
    operator delete(a1, 0x28uLL);
  }
  return v2;
}
