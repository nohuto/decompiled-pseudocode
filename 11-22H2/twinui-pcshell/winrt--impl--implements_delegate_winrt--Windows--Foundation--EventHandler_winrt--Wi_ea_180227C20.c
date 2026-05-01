/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs___lambda_af365597022eb112c50f104cc7bcdff6___::Release @ 0x180227C20
 * Callers:
 *     <none>
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs___lambda_af365597022eb112c50f104cc7bcdff6___::_implements_delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs___lambda_af365597022eb112c50f104cc7bcdff6___ @ 0x180225954 (winrt--impl--implements_delegate_winrt--Windows--Foundation--EventHandler_winrt--Wi_ea_180225954.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs___lambda_af365597022eb112c50f104cc7bcdff6___::Release(
        volatile signed __int32 *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::atomic_ref_count::operator--(a1 + 4);
  if ( !v2 && a1 )
  {
    winrt::impl::implements_delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs___lambda_af365597022eb112c50f104cc7bcdff6___::_implements_delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs___lambda_af365597022eb112c50f104cc7bcdff6___((__int64)a1);
    operator delete((void *)a1);
  }
  return v2;
}
