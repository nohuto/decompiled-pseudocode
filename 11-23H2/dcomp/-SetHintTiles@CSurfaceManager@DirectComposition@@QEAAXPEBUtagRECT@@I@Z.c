/*
 * XREFs of ?SetHintTiles@CSurfaceManager@DirectComposition@@QEAAXPEBUtagRECT@@I@Z @ 0x1800F54AC
 * Callers:
 *     ?HintTiles@CDevice@DirectComposition@@UEAAJPEBUtagRECT@@I@Z @ 0x1800F1FC0 (-HintTiles@CDevice@DirectComposition@@UEAAJPEBUtagRECT@@I@Z.c)
 *     ?HintTiles@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJIPEAURectInt32@Graphics@4@@Z @ 0x180157164 (-HintTiles@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJIPEAURectInt32@Graphics@4@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CSurfaceManager::SetHintTiles(
        DirectComposition::CSurfaceManager *this,
        const struct tagRECT *a2,
        unsigned int a3)
{
  LONG *p_bottom; // r10
  _DWORD *v4; // rdx
  unsigned int i; // r9d

  p_bottom = &a2->bottom;
  *((_DWORD *)this + 44) = 0;
  v4 = (_DWORD *)((char *)this + 140);
  for ( i = 0; i < 5; ++i )
  {
    if ( i >= a3 )
    {
      *(_QWORD *)(v4 - 1) = 0LL;
    }
    else
    {
      *(v4 - 1) = *(p_bottom - 1) - *(p_bottom - 3) + 2;
      *v4 = *p_bottom - *(p_bottom - 2) + 2;
      ++*((_DWORD *)this + 44);
    }
    v4 += 2;
    p_bottom += 4;
  }
  DirectComposition::CSurfaceManager::SortHintTiles(this);
}
