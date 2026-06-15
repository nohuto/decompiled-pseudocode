/*
 * XREFs of ??0CAtlComModule@ATL@@QEAA@XZ @ 0x180055680
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x180001900 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180026928 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

void *__fastcall ATL::CAtlComModule::CAtlComModule(ATL::CAtlComModule *this)
{
  ATL::_AtlComModule = 0;
  qword_1801CFBE0 = 0LL;
  qword_1801CFBA8 = (__int64)&_ImageBase;
  qword_1801CFBB0 = (__int64)&_pobjMapEntryLast;
  qword_1801CFBB8 = (__int64)&_pobjMapEntryLast;
  xmmword_1801CFBC0 = 0LL;
  xmmword_1801CFBD0 = 0LL;
  if ( (int)ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&xmmword_1801CFBC0) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  else
    ATL::_AtlComModule = 72;
  return &ATL::_AtlComModule;
}
