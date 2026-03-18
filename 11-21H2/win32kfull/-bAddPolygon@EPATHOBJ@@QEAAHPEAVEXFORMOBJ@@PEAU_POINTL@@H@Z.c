/*
 * XREFs of ?bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z @ 0x1C02BA81C
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0032FD0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z @ 0x1C02BA894 (-bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bAddPgmToPath@@YAHAEAVEPATHOBJ@@JJJJJJ@Z @ 0x1C02BC354 (-bAddPgmToPath@@YAHAEAVEPATHOBJ@@JJJJJJ@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EPATHOBJ::bAddPolygon(EPATHOBJ *this, struct EXFORMOBJ *a2, struct _POINTL *a3)
{
  unsigned int v5; // ebx

  v5 = 0;
  if ( EPATHOBJ::bMoveTo(this, 0LL, a3) && EPATHOBJ::bPolyLineTo(this, 0LL, a3 + 1, 3u) )
    return EPATHOBJ::bCloseFigure(this) != 0;
  return v5;
}
