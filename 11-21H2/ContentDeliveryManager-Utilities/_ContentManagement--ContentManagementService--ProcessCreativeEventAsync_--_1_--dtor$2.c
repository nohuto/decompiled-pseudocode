/*
 * XREFs of _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$2 @ 0x1800EFE87
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  return Windows::Internal::MoveOnCopy<Windows::Internal::String>::~MoveOnCopy<Windows::Internal::String>((HSTRING *)(a2 + 120));
}
