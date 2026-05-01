/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::PackageCatalog_winrt::Windows::ApplicationModel::PackageUninstallingEventArgs___lambda_b77cff33db7c166167279fbdb5843ce7___::Release @ 0x1800DA340
 * Callers:
 *     <none>
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::PackageCatalog_winrt::Windows::ApplicationModel::PackageUninstallingEventArgs___lambda_b77cff33db7c166167279fbdb5843ce7___::Release(
        volatile signed __int32 *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::atomic_ref_count::operator--(a1 + 4);
  if ( !v2 && a1 )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
    operator delete((void *)a1, 0x18uLL);
  }
  return v2;
}
