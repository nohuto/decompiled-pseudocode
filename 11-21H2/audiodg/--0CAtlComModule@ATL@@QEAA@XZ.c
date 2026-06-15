/*
 * XREFs of ??0CAtlComModule@ATL@@QEAA@XZ @ 0x14002DDAC
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x140001340 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1400175D4 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

void *__fastcall ATL::CAtlComModule::CAtlComModule(ATL::CAtlComModule *this)
{
  ATL::_AtlComModule = 0;
  qword_1400C1360 = 0LL;
  qword_1400C1328 = (__int64)&_ImageBase;
  qword_1400C1330 = (__int64)_pobjMap_CAudioDeviceGraph;
  qword_1400C1338 = (__int64)&_pobjMapEntryLast;
  xmmword_1400C1340 = 0LL;
  xmmword_1400C1350 = 0LL;
  if ( (int)ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&xmmword_1400C1340) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  else
    ATL::_AtlComModule = 72;
  return &ATL::_AtlComModule;
}
