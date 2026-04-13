/*
 * XREFs of ?GetRuntimeClassName@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800760D0
 * Callers:
 *     ?GetRuntimeClassName@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180076100 (-GetRuntimeClassName@TargetedContentActionInternalImpl@Internal@TargetedContent@Ser_ea_180076100.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::GetRuntimeClassName(
        Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Services.TargetedContent.Internal.TargetedContentActionInternal", 0x47u, a2);
}
