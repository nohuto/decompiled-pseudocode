/*
 * XREFs of ??1_bstr_t@@QEAA@XZ @ 0x18031715C
 * Callers:
 *     _TaskbarLayoutPolicyManager::IsOverrideLayout_::_1_::dtor$2 @ 0x1803189AB (_TaskbarLayoutPolicyManager--IsOverrideLayout_--_1_--dtor$2.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$11 @ 0x18031C224 (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$11.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$12 @ 0x18031C230 (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$12.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$13 @ 0x18031C23C (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$13.c)
 *     _PWSLayoutParser::ParsePinnedAppNode_::_1_::dtor$5 @ 0x1803BE1F3 (_PWSLayoutParser--ParsePinnedAppNode_--_1_--dtor$5.c)
 *     _PWSLayoutParser::ParsePinnedAppNode_::_1_::dtor$6 @ 0x1803BE1FF (_PWSLayoutParser--ParsePinnedAppNode_--_1_--dtor$6.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::AddSchemaToCollection_::_1_::dtor$1 @ 0x1805E46C4 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--AddSchemaToCollection_ea_1805E46C4.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::AddSchemaToCollection_::_1_::dtor$4 @ 0x1805E46E8 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--AddSchemaToCollection_ea_1805E46E8.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ValidateLayoutFile_::_1_::dtor$6 @ 0x1805E4ADF (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--ValidateLayoutFile_--_1_--dtor$6.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$1 @ 0x1805E5577 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_1805E5577.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$2 @ 0x1805E5587 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_1805E5587.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$3 @ 0x1805E5597 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_1805E5597.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$4 @ 0x1805E55A7 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_1805E55A7.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$5 @ 0x1805E55B7 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_1805E55B7.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$6 @ 0x1805E55C7 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_1805E55C7.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$7 @ 0x1805E55D7 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_1805E55D7.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$8 @ 0x1805E55E7 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_1805E55E7.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$9 @ 0x1805E55F7 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_1805E55F7.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall _bstr_t::~_bstr_t(_bstr_t *this)
{
  _bstr_t::_Free(this);
}
