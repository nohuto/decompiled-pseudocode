/*
 * XREFs of ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18005A554
 * Callers:
 *     ??0CMonitorManager@@QEAA@XZ @ 0x18005A44C (--0CMonitorManager@@QEAA@XZ.c)
 *     ??0CMonitor@@QEAA@W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_N@Z @ 0x18012B76C (--0CMonitor@@QEAA@W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_N@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE7C4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall ATL::CCriticalSection::CCriticalSection(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return this;
}
