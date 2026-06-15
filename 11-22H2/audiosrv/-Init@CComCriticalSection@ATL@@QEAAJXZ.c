/*
 * XREFs of ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180026928
 * Callers:
 *     ??0CComAutoCriticalSection@ATL@@QEAA@XZ @ 0x1800268E8 (--0CComAutoCriticalSection@ATL@@QEAA@XZ.c)
 *     ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x180055518 (--0CAtlBaseModule@ATL@@QEAA@XZ.c)
 *     ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x1800555C0 (--0CAtlWinModule@ATL@@QEAA@XZ.c)
 *     ??0CAtlComModule@ATL@@QEAA@XZ @ 0x180055680 (--0CAtlComModule@ATL@@QEAA@XZ.c)
 *     ??0?$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ @ 0x18005868C (--0-$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComCriticalSection::Init(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return 0LL;
}
