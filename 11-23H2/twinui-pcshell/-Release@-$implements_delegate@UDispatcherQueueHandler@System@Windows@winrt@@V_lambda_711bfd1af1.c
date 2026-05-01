/*
 * XREFs of ?Release@?$implements_delegate@UDispatcherQueueHandler@System@Windows@winrt@@V_lambda_711bfd1af15e27d1f27b55343e53885b_@@@impl@winrt@@UEAAIXZ @ 0x1807003A0
 * Callers:
 *     <none>
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::System::DispatcherQueueHandler,_lambda_711bfd1af15e27d1f27b55343e53885b_>::Release(
        volatile signed __int32 *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::atomic_ref_count::operator--(a1 + 4);
  if ( !v2 && a1 )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
    operator delete((void *)a1);
  }
  return v2;
}
