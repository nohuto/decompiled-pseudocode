/*
 * XREFs of ??0CAtlStringMgr@ATL@@QEAA@PEAUIAtlMemMgr@1@@Z @ 0x1400278CC
 * Callers:
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x140002040 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ATL::CAtlStringMgr::CAtlStringMgr(ATL::CAtlStringMgr *this, struct ATL::IAtlMemMgr *a2)
{
  __int64 *result; // rax

  dword_1400CF8F0 = 2;
  ATL::g_strmgr = (__int64)&ATL::CAtlStringMgr::`vftable';
  qword_1400CF8D8 = (__int64)&ATL::g_strheap;
  qword_1400CF8E8 = 0LL;
  dword_1400CF8F8 = 0;
  result = &ATL::g_strmgr;
  qword_1400CF8E0 = (__int64)&ATL::g_strmgr;
  return result;
}
