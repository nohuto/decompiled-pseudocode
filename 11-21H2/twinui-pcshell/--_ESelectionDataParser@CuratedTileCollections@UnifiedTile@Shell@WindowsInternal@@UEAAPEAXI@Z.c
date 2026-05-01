/*
 * XREFs of ??_ESelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAPEAXI@Z @ 0x1805E5710
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ @ 0x1805E5610 (--1SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ.c)
 */

_bstr_t::Data_t **__fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::`vector deleting destructor'(
        _bstr_t::Data_t **this,
        char a2)
{
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::~SelectionDataParser(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
