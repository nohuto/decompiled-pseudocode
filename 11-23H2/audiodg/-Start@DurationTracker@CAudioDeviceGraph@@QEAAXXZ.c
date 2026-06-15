/*
 * XREFs of ?Start@DurationTracker@CAudioDeviceGraph@@QEAAXXZ @ 0x140008258
 * Callers:
 *     ?Resume@CAudioDeviceGraph@@UEAAJXZ @ 0x1400083E0 (-Resume@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x14001E010 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioDeviceGraph::DurationTracker::Start(LARGE_INTEGER *this)
{
  if ( !LOBYTE(this->LowPart) )
  {
    QueryPerformanceCounter(this + 2);
    LOBYTE(this->LowPart) = 1;
  }
}
