/*
 * XREFs of ?RmpUtilCheckStopLockTracking@@YAXK@Z @ 0x18001203C
 * Callers:
 *     ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x18004FBF0 (-RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpUtilCheckStopLockTracking(int a1)
{
  if ( a1 )
    CempLockTrackerClearForThread(HampLockTrackerId);
}
