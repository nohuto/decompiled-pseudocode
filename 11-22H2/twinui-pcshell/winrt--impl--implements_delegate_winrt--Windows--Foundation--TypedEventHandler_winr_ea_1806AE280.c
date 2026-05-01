/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs___lambda_71950cc72dd496f648a731e978b853d5___::Release @ 0x1806AE280
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1801C7278 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs___lambda_71950cc72dd496f648a731e978b853d5___::Release(
        volatile signed __int32 *Block)
{
  unsigned int v2; // edi
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx

  v2 = winrt::impl::atomic_ref_count::operator--(Block + 10);
  if ( !v2 && Block )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
    v3 = (std::_Ref_count_base *)*((_QWORD *)Block + 4);
    if ( v3 )
      std::_Ref_count_base::_Decref(v3);
    v4 = (std::_Ref_count_base *)*((_QWORD *)Block + 2);
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
    operator delete((void *)Block);
  }
  return v2;
}
