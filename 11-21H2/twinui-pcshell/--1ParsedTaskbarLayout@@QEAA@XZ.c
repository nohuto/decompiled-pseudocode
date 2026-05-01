/*
 * XREFs of ??1ParsedTaskbarLayout@@QEAA@XZ @ 0x18031B32C
 * Callers:
 *     _TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode_::_1_::dtor$3 @ 0x18031C734 (_TaskbarLayoutParser--ParseTaskbarLayoutCollectionNode_--_1_--dtor$3.c)
 *     _TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode_::_1_::dtor$4 @ 0x18031C77C (_TaskbarLayoutParser--ParseTaskbarLayoutCollectionNode_--_1_--dtor$4.c)
 * Callees:
 *     ??1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ @ 0x18031B354 (--1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ.c)
 */

void __fastcall ParsedTaskbarLayout::~ParsedTaskbarLayout(ParsedTaskbarLayout *this)
{
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((ParsedTaskbarLayout *)((char *)this + 32));
  CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)this);
}
