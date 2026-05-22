/*
 * XREFs of ?CanBeginDraw@CVirtualSurface@DirectComposition@@AEAAJ_N@Z @ 0x180037138
 * Callers:
 *     ?BeginDrawWithGutters@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x180036F80 (-BeginDrawWithGutters@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEA.c)
 *     ?Scroll@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800FE370 (-Scroll@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z.c)
 * Callees:
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurface::CanBeginDraw(DirectComposition::CVirtualSurface *this, char a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r8
  _BYTE *v6; // rcx

  v4 = 0;
  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)this + 13)
                                                                                             + 24LL)
                                                                                 + 96LL));
  v5 = *((_QWORD *)this + 13);
  v6 = (_BYTE *)(v5 + 353);
  if ( *(_DWORD *)(v5 + 344) )
  {
    v4 = -2147467259;
  }
  else if ( *v6 && (!a2 || *((_DWORD *)this + 32) != 1 || *(int *)(*(_QWORD *)(v5 + 24) + 368LL) < 1) )
  {
    return (unsigned int)-2003302399;
  }
  if ( !*v6 && *((_DWORD *)this + 32) == 2 && (!a2 || *(int *)(*(_QWORD *)(v5 + 24) + 368LL) < 1) )
    return (unsigned int)-2003302399;
  return v4;
}
