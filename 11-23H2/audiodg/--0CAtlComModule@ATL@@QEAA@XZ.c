/*
 * XREFs of ??0CAtlComModule@ATL@@QEAA@XZ @ 0x140027684
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x140001FC0 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140016128 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

void *__fastcall ATL::CAtlComModule::CAtlComModule(ATL::CAtlComModule *this)
{
  ATL::_AtlComModule = 0;
  qword_1400CF430 = 0LL;
  qword_1400CF3F8 = (__int64)&_ImageBase;
  qword_1400CF400 = (__int64)_pobjMap_CStreamInstance;
  qword_1400CF408 = (__int64)&_pobjMapEntryLast;
  xmmword_1400CF410 = 0LL;
  xmmword_1400CF420 = 0LL;
  if ( (int)ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&xmmword_1400CF410) >= 0 )
    ATL::_AtlComModule = 72;
  else
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  return &ATL::_AtlComModule;
}
