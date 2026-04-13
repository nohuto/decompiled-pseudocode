/*
 * XREFs of ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x1800991F4
 * Callers:
 *     ??$Set@PEB_W@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEB_WUDummy@Details@23@@Z @ 0x180097094 (--$Set@PEB_W@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEB_WUDummy@Details@23@@Z.c)
 *     ?PrefetchDisplayName@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@AEAAXPEBG@Z @ 0x1800C3F58 (-PrefetchDisplayName@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@W.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::WRL::Wrappers::HString::Set(HSTRING *this, const wchar_t *a2, UINT32 a3)
{
  WindowsDeleteString(*this);
  *this = 0LL;
  return WindowsCreateString(a2, a3, this);
}
