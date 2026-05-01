/*
 * XREFs of ??1SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ @ 0x180739D60
 * Callers:
 *     ??_ESelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAPEAXI@Z @ 0x180739E60 (--_ESelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x1802D292A (-_Free@_bstr_t@@AEAAXXZ.c)
 */

void __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::~SelectionDataParser(
        _bstr_t::Data_t **this)
{
  _bstr_t::_Free(this + 10);
  _bstr_t::_Free(this + 9);
  _bstr_t::_Free(this + 8);
  _bstr_t::_Free(this + 7);
  _bstr_t::_Free(this + 6);
  _bstr_t::_Free(this + 5);
  _bstr_t::_Free(this + 4);
  _bstr_t::_Free(this + 3);
  _bstr_t::_Free(this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
