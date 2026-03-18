/*
 * XREFs of ?IsProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NPEAU_EPROCESS@@@Z @ 0x1C00E5DC4
 * Callers:
 *     GreIsProcessSystemCritical @ 0x1C00E26AC (GreIsProcessSystemCritical.c)
 *     zzzCalcStartCursorHide @ 0x1C00E5F30 (zzzCalcStartCursorHide.c)
 * Callees:
 *     <none>
 */

bool __fastcall UmfdHostLifeTimeManager::IsProcessUmfdHost(struct _EPROCESS *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  bool v4; // bl

  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 32) + 23520LL;
  KeEnterCriticalRegion();
  GreAcquirePushLockShared(v2);
  v4 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v3) + 32) + 23496LL) == (_QWORD)a1;
  if ( v2 )
  {
    GreReleasePushLockShared(v2);
    KeLeaveCriticalRegion();
  }
  return v4;
}
