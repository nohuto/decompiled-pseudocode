/*
 * XREFs of ?shared_from_this@?$enable_shared_from_this@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA?AV?$shared_ptr@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x180210FE8
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x1802829E0 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClou_ea_1802829E0.c)
 *     ?SetRectAndCallback@CAppThumbnailWindow@@IEAAJAEBUCRect@Geometry@@PEAUIDCompThumbnail@@W4DCompThumbnailAnimation@@_N@Z @ 0x18055A948 (-SetRectAndCallback@CAppThumbnailWindow@@IEAAJAEBUCRect@Geometry@@PEAUIDCompThumbnail@@W4DCompTh.c)
 * Callees:
 *     ?_Throw_bad_weak_ptr@std@@YAXXZ @ 0x1804D45B4 (-_Throw_bad_weak_ptr@std@@YAXXZ.c)
 *     ??$_Construct_from_weak@VCAppThumbnailWindow@@@?$_Ptr_base@VCAppThumbnailWindow@@@std@@IEAA_NAEBV?$weak_ptr@VCAppThumbnailWindow@@@1@@Z @ 0x180554994 (--$_Construct_from_weak@VCAppThumbnailWindow@@@-$_Ptr_base@VCAppThumbnailWindow@@@std@@IEAA_NAEB.c)
 */

__int64 __fastcall std::enable_shared_from_this<winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler>::shared_from_this(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r10

  *a2 = 0LL;
  a2[1] = 0LL;
  if ( !(unsigned __int8)std::_Ptr_base<CAppThumbnailWindow>::_Construct_from_weak<CAppThumbnailWindow>(a2, a1) )
    std::_Throw_bad_weak_ptr();
  return v2;
}
