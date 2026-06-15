/*
 * XREFs of ??0CAtlComModule@ATL@@QEAA@XZ @ 0x180042A18
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x180001C10 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180025018 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

void *__fastcall ATL::CAtlComModule::CAtlComModule(ATL::CAtlComModule *this)
{
  ATL::_AtlComModule = 0;
  qword_1801C2620 = 0LL;
  qword_1801C25E8 = (__int64)&_ImageBase;
  qword_1801C25F0 = (__int64)&_pobjMapEntryLast;
  qword_1801C25F8 = (__int64)&_pobjMapEntryLast;
  xmmword_1801C2600 = 0LL;
  xmmword_1801C2610 = 0LL;
  if ( (int)ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&xmmword_1801C2600) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  else
    ATL::_AtlComModule = 72;
  return &ATL::_AtlComModule;
}
