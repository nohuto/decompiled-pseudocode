/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::UI::Xaml::Media::RenderedEventArgs___lambda_08870fe2eff2466db8789d1669c06935___::Release @ 0x180448220
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x180033140 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::UI::Xaml::Media::RenderedEventArgs___lambda_08870fe2eff2466db8789d1669c06935___::Release(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 v7; // r8
  __int64 v8; // r9

  v6 = winrt::impl::atomic_ref_count::operator--(a1 + 4, a2, a3, a4);
  if ( !v6 && a1 )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock, v5, v7, v8);
    Platform::WeakReference::InternalRelease((Platform::WeakReference *)(a1 + 2));
    operator delete((void *)a1);
  }
  return v6;
}
