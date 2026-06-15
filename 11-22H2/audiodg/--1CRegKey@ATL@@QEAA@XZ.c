/*
 * XREFs of ??1CRegKey@ATL@@QEAA@XZ @ 0x1400902D8
 * Callers:
 *     _ATL::CRegParser::RegisterSubkeys_::_1_::dtor$0 @ 0x140093C40 (_ATL--CRegParser--RegisterSubkeys_--_1_--dtor$0.c)
 *     _ATL::CRegParser::RegisterSubkeys_::_1_::dtor$1 @ 0x140093C4C (_ATL--CRegParser--RegisterSubkeys_--_1_--dtor$1.c)
 *     _ATL::CRegParser::RegisterSubkeys_::_1_::dtor$2 @ 0x140093C58 (_ATL--CRegParser--RegisterSubkeys_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CRegKey::~CRegKey(ATL::CRegKey *this)
{
  ATL::CRegKey::Close(this);
}
