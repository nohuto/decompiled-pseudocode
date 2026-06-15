/*
 * XREFs of ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x1800555C0
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x1800018D0 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180026928 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

void *__fastcall ATL::CAtlWinModule::CAtlWinModule(ATL::CAtlWinModule *this)
{
  ATL::_AtlWinModule = 72;
  qword_1801CFB88 = 0LL;
  dword_1801CFB90 = 0;
  dword_1801CFB94 = 0;
  qword_1801CFB80 = 0LL;
  xmmword_1801CFB58 = 0LL;
  qword_1801CFB78 = 0LL;
  xmmword_1801CFB68 = 0LL;
  if ( (int)ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&xmmword_1801CFB58) < 0 )
  {
    ATL::_AtlWinModule = 0;
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  }
  return &ATL::_AtlWinModule;
}
