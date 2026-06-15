/*
 * XREFs of ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180014940
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x180002040 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 *     ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x1800148B4 (--0CAtlBaseModule@ATL@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComCriticalSection::Init(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return 0LL;
}
