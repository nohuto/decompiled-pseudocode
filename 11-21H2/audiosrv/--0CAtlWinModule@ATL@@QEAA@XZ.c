/*
 * XREFs of ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x1800429AC
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x180001CF0 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180025018 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

void *__fastcall ATL::CAtlWinModule::CAtlWinModule(ATL::CAtlWinModule *this)
{
  ATL::_AtlWinModule = 72;
  qword_1801C26C8 = 0LL;
  dword_1801C26D0 = 0;
  dword_1801C26D4 = 0;
  qword_1801C26C0 = 0LL;
  xmmword_1801C2698 = 0LL;
  qword_1801C26B8 = 0LL;
  xmmword_1801C26A8 = 0LL;
  if ( (int)ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&xmmword_1801C2698) < 0 )
  {
    ATL::_AtlWinModule = 0;
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  }
  return &ATL::_AtlWinModule;
}
