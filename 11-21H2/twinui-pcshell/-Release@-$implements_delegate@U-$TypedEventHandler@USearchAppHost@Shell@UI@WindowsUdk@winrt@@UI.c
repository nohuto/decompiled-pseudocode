/*
 * XREFs of ?Release@?$implements_delegate@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@V_lambda_ea1c8442aa00b161fccf4dbbf1910f23_@@@impl@winrt@@UEAAIXZ @ 0x1801A4090
 * Callers:
 *     <none>
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1?$implements_delegate@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@Foundation@Windows@winrt@@V_lambda_dfc53eb855280adfc513fa31c55f1c7f_@@@impl@winrt@@QEAA@XZ @ 0x1801A3CDC (--1-$implements_delegate@U-$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchA.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>,_lambda_ea1c8442aa00b161fccf4dbbf1910f23_>::Release(
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
    winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs>,_lambda_dfc53eb855280adfc513fa31c55f1c7f_>::~implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs>,_lambda_dfc53eb855280adfc513fa31c55f1c7f_>(
      (__int64)a1,
      v5,
      v7,
      v8);
    operator delete((void *)a1);
  }
  return v6;
}
