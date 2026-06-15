/*
 * XREFs of ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x14002DCDC
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x140001420 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1400175D4 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

void *__fastcall ATL::CAtlWinModule::CAtlWinModule(ATL::CAtlWinModule *this)
{
  ATL::_AtlWinModule = 72;
  qword_1400C1408 = 0LL;
  dword_1400C1410 = 0;
  dword_1400C1414 = 0;
  qword_1400C1400 = 0LL;
  xmmword_1400C13D8 = 0LL;
  qword_1400C13F8 = 0LL;
  xmmword_1400C13E8 = 0LL;
  if ( (int)ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&xmmword_1400C13D8) < 0 )
  {
    ATL::_AtlWinModule = 0;
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  }
  return &ATL::_AtlWinModule;
}
