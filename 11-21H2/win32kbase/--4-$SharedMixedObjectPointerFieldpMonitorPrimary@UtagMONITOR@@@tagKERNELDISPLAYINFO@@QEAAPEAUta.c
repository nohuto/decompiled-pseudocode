/*
 * XREFs of ??4?$SharedMixedObjectPointerFieldpMonitorPrimary@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x1C005201C
 * Callers:
 *     DestroyMonitor @ 0x1C0050630 (DestroyMonitor.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C00C7F94 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     ??4tagKERNELDISPLAYINFO@@QEAAAEAU0@AEAU0@@Z @ 0x1C01521EC (--4tagKERNELDISPLAYINFO@@QEAAAEAU0@AEAU0@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagKERNELDISPLAYINFO::SharedMixedObjectPointerFieldpMonitorPrimary<tagMONITOR>::operator=(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // r8

  v2 = *(a1 - 12);
  if ( a2 )
    *(_QWORD *)(v2 + 8) = *(_QWORD *)(a2 + 48);
  else
    *(_QWORD *)(v2 + 8) = 0LL;
  *a1 = a2;
  return a2;
}
