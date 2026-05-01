/*
 * XREFs of ?Release@?$implements_delegate@U?$AsyncOperationCompletedHandler@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_221c2fd13a07a77425ee53efb520030b_@@@impl@winrt@@UEAAIXZ @ 0x180022DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1disconnect_aware_handler@impl@winrt@@QEAA@XZ @ 0x180023118 (--1disconnect_aware_handler@impl@winrt@@QEAA@XZ.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>,_lambda_221c2fd13a07a77425ee53efb520030b_>::Release(
        char *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::atomic_ref_count::operator--(a1 + 40);
  if ( !v2 && a1 )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
    winrt::impl::disconnect_aware_handler::~disconnect_aware_handler((winrt::impl::disconnect_aware_handler *)(a1 + 16));
    operator delete(a1, 0x30uLL);
  }
  return v2;
}
