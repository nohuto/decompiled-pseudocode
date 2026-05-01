/*
 * XREFs of ??4_bstr_t@@QEAAAEAV0@PEBG@Z @ 0x180739DD0
 * Callers:
 *     ??0SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ @ 0x180739ADC (--0SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??0Data_t@_bstr_t@@QEAA@PEBG@Z @ 0x1802D243C (--0Data_t@_bstr_t@@QEAA@PEBG@Z.c)
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x1802D292A (-_Free@_bstr_t@@AEAAXXZ.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x180390134 (-_com_issue_error@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
_bstr_t::Data_t **__fastcall _bstr_t::operator=(_bstr_t::Data_t **a1, const unsigned __int16 *a2)
{
  _bstr_t::Data_t *v4; // rax

  if ( !a2 || !*a1 || *(const unsigned __int16 **)*a1 != a2 )
  {
    _bstr_t::_Free(a1);
    v4 = (_bstr_t::Data_t *)operator new(0x18uLL);
    if ( v4 )
      v4 = _bstr_t::Data_t::Data_t(v4, a2);
    *a1 = v4;
    if ( !v4 )
      _com_issue_error((char *)0x8007000ELL);
  }
  return a1;
}
