/*
 * XREFs of ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x140027708
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x1400020A0 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140016128 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

void *__fastcall ATL::CAtlWinModule::CAtlWinModule(ATL::CAtlWinModule *this)
{
  ATL::_AtlWinModule = 72;
  qword_1400CF4D8 = 0LL;
  dword_1400CF4E0 = 0;
  dword_1400CF4E4 = 0;
  qword_1400CF4D0 = 0LL;
  xmmword_1400CF4A8 = 0LL;
  qword_1400CF4C8 = 0LL;
  xmmword_1400CF4B8 = 0LL;
  if ( (int)ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&xmmword_1400CF4A8) < 0 )
  {
    ATL::_AtlWinModule = 0;
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  }
  return &ATL::_AtlWinModule;
}
