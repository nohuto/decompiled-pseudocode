/*
 * XREFs of ?Release@?$implements_delegate@U?$TypedEventHandler@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@UDisplayMonitorInfoChangedEventArgs@2345@@Foundation@Windows@winrt@@V_lambda_ab73a47a7e52d4de79b9df50d88832e4_@@@impl@winrt@@UEAAIXZ @ 0x1801B8570
 * Callers:
 *     <none>
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection,winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs>,_lambda_ab73a47a7e52d4de79b9df50d88832e4_>::Release(
        volatile signed __int32 *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::atomic_ref_count::operator--(a1 + 8);
  if ( !v2 && a1 )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
    operator delete((void *)a1, 0x28uLL);
  }
  return v2;
}
