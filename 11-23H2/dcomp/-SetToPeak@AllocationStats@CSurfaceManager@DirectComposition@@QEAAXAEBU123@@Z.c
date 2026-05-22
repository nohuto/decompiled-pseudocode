/*
 * XREFs of ?SetToPeak@AllocationStats@CSurfaceManager@DirectComposition@@QEAAXAEBU123@@Z @ 0x180034440
 * Callers:
 *     ?RecordSurfaceUseChange@CSurfaceManager@DirectComposition@@QEAAXPEBVCAtlasSurface@2@_K1@Z @ 0x180034354 (-RecordSurfaceUseChange@CSurfaceManager@DirectComposition@@QEAAXPEBVCAtlasSurface@2@_K1@Z.c)
 *     ?OnBeforeSynchronizationStateUpdated@CAtlasSurface@DirectComposition@@EEAAXW4State@CCompositorSynchronizedObject@2@@Z @ 0x180035840 (-OnBeforeSynchronizationStateUpdated@CAtlasSurface@DirectComposition@@EEAAXW4State@CCompositorSy.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CSurfaceManager::AllocationStats::SetToPeak(
        DirectComposition::CSurfaceManager::AllocationStats *this,
        const struct DirectComposition::CSurfaceManager::AllocationStats *a2)
{
  unsigned __int64 v2; // rax

  if ( *((_QWORD *)this + 3) < *((_QWORD *)a2 + 3) )
  {
    *(_QWORD *)this = *(_QWORD *)a2;
    *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
    *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
    *((_QWORD *)this + 3) = *((_QWORD *)a2 + 3);
  }
  v2 = *((_QWORD *)a2 + 2) - *((_QWORD *)a2 + 3);
  if ( *((_QWORD *)this + 4) < v2 )
    *((_QWORD *)this + 4) = v2;
}
