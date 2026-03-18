/*
 * XREFs of ?Start@TimeInterval@DripsBlockerTrackingHelper@@QEAAXXZ @ 0x1C0230426
 * Callers:
 *     ?SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x1C022FC54 (-SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z.c)
 *     ?EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z @ 0x1C03048B4 (-EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DripsBlockerTrackingHelper::TimeInterval::Start(LARGE_INTEGER *this)
{
  if ( !LOBYTE(this->LowPart) )
  {
    this[1] = KeQueryPerformanceCounter(0LL);
    LOBYTE(this->LowPart) = 1;
  }
}
