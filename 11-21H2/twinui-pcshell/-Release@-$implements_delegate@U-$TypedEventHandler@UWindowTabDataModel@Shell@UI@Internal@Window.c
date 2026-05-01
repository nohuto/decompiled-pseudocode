/*
 * XREFs of ?Release@?$implements_delegate@U?$TypedEventHandler@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@UWindowTabDataModelTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_69f91e77421940a58b7abb1c2dc0e920_@@@impl@winrt@@UEAAIXZ @ 0x18017B7B0
 * Callers:
 *     <none>
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::WindowTabDataModel,winrt::Windows::Internal::UI::Shell::WindowTabDataModelTabsChangedEventArgs>,_lambda_69f91e77421940a58b7abb1c2dc0e920_>::Release(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 v7; // r8
  __int64 v8; // r9

  v6 = winrt::impl::atomic_ref_count::operator--(a1 + 8, a2, a3, a4);
  if ( !v6 && a1 )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock, v5, v7, v8);
    operator delete((void *)a1, 0x28uLL);
  }
  return v6;
}
