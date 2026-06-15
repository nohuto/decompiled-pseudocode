/*
 * XREFs of ??1CParseBuffer@CRegParser@ATL@@QEAA@XZ @ 0x1400902C0
 * Callers:
 *     _ATL::CRegParser::PreProcessBuffer_::_1_::dtor$0 @ 0x140092728 (_ATL--CRegParser--PreProcessBuffer_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CRegParser::CParseBuffer::~CParseBuffer(LPVOID *this)
{
  CoTaskMemFree(this[1]);
}
