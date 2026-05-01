/*
 * XREFs of ??0hresult_not_implemented@winrt@@QEAA@XZ @ 0x180421B78
 * Callers:
 *     ?IsSupported@?$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@@impl@winrt@@UEAAHPEA_N@Z @ 0x1805784C0 (-IsSupported@-$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabEx.c)
 *     ?ActivateInstance@?$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1805B3A00 (-ActivateInstance@-$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell.c)
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@@Z @ 0x1803531C8 (--0hresult_error@winrt@@QEAA@Uhresult@1@@Z.c)
 */

winrt::hresult_not_implemented *__fastcall winrt::hresult_not_implemented::hresult_not_implemented(
        winrt::hresult_not_implemented *this)
{
  winrt::hresult_error::hresult_error((__int64)this, 0x80004001);
  return this;
}
