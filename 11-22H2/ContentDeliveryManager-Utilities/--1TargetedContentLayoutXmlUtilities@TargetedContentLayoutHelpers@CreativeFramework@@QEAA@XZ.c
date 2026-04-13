/*
 * XREFs of ??1TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x1800C74F0
 * Callers:
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ExtractTargetedContentTilesInLayout_::_1_::dtor$0 @ 0x1800DCD19 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--ExtractTargetedContentTilesInL.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::~TargetedContentLayoutXmlUtilities(
        __int64 *this)
{
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(this);
}
