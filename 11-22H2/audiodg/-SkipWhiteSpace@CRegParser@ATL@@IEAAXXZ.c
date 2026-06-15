/*
 * XREFs of ?SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ @ 0x140093F70
 * Callers:
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x140090CF8 (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
 *     ?NextToken@CRegParser@ATL@@IEAAJPEAG@Z @ 0x1400922C4 (-NextToken@CRegParser@ATL@@IEAAJPEAG@Z.c)
 *     ?RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z @ 0x1400932A4 (-RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z.c)
 *     ?SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z @ 0x140093ED4 (-SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CRegParser::SkipWhiteSpace(LPCWSTR *this)
{
  while ( **this == 9 || **this == 10 || **this == 13 || **this == 32 )
    *this = CharNextW(*this);
}
