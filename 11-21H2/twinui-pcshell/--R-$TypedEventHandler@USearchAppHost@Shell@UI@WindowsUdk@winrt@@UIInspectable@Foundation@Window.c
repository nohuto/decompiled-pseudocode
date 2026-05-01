/*
 * XREFs of ??R?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@QEBAXAEBUSearchAppHost@Shell@UI@WindowsUdk@3@AEBUIInspectable@123@@Z @ 0x1801A3D60
 * Callers:
 *     ??$invoke@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@USearchAppHost@implementation@Shell@UI@WindowsUdk@4@$$T@impl@winrt@@YA_NAEBU?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@1@AEBUSearchAppHost@implementation@Shell@UI@WindowsUdk@1@AEB$$T@Z @ 0x1801A39B0 (--$invoke@U-$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundatio.c)
 *     ?Invoke@?$delegate@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@V_lambda_ea1c8442aa00b161fccf4dbbf1910f23_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x1801A3DD0 (-Invoke@-$delegate@U-$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>::operator()(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // eax

  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, *a2, *a3);
  winrt::check_hresult(v3);
}
