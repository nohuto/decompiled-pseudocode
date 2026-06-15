/*
 * XREFs of ??0CAtlStringMgr@ATL@@QEAA@PEAUIAtlMemMgr@1@@Z @ 0x14002EE40
 * Callers:
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x1400013C0 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ATL::CAtlStringMgr::CAtlStringMgr(ATL::CAtlStringMgr *this, struct ATL::IAtlMemMgr *a2)
{
  __int64 *result; // rax

  dword_1400C1738 = 2;
  ATL::g_strmgr = (__int64)&ATL::CAtlStringMgr::`vftable';
  qword_1400C1720 = (__int64)&ATL::g_strheap;
  qword_1400C1730 = 0LL;
  dword_1400C1740 = 0;
  result = &ATL::g_strmgr;
  qword_1400C1728 = (__int64)&ATL::g_strmgr;
  return result;
}
