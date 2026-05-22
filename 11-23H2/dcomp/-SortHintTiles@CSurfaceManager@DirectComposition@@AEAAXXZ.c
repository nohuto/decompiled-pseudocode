/*
 * XREFs of ?SortHintTiles@CSurfaceManager@DirectComposition@@AEAAXXZ @ 0x1800F6844
 * Callers:
 *     ?SetHintTiles@CSurfaceManager@DirectComposition@@QEAAXPEBUtagRECT@@I@Z @ 0x1800F54AC (-SetHintTiles@CSurfaceManager@DirectComposition@@QEAAXPEBUtagRECT@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CSurfaceManager::SortHintTiles(DirectComposition::CSurfaceManager *this)
{
  char *v1; // r9
  _DWORD *v2; // r8
  unsigned int v3; // eax
  unsigned int i; // r10d
  _DWORD *v5; // rdx
  unsigned int v6; // r8d
  __int64 v7; // r11
  __int64 v8; // r10
  char *v9; // rdx
  __int64 v10; // rax

  v1 = (char *)this + 136;
  v2 = (_DWORD *)((char *)this + 136);
  v3 = 5;
  for ( i = 0; i < 5; ++i )
  {
    v5 = v2 + 1;
    if ( *v2 && *v5 )
      goto LABEL_7;
    if ( v3 == 5 )
      goto LABEL_9;
    if ( *v2 && *v5 )
    {
LABEL_7:
      if ( v3 == 5 )
        goto LABEL_10;
      *((_QWORD *)this + v3 + 17) = *(_QWORD *)v2;
      *v2 = 0;
      *v5 = 0;
LABEL_9:
      v3 = i;
    }
LABEL_10:
    v2 += 2;
  }
  v6 = 1;
  v7 = 5LL;
  do
  {
    if ( *(_DWORD *)v1 && *((_DWORD *)v1 + 1) && v6 < 5 )
    {
      v8 = 5 - v6;
      v9 = (char *)this + 8 * v6 + 136;
      do
      {
        if ( *(_DWORD *)v9 && *((_DWORD *)v9 + 1) && *((_DWORD *)v1 + 1) > *((_DWORD *)v9 + 1) )
        {
          v10 = *(_QWORD *)v1;
          *(_QWORD *)v1 = *(_QWORD *)v9;
          *(_QWORD *)v9 = v10;
        }
        v9 += 8;
        --v8;
      }
      while ( v8 );
    }
    ++v6;
    v1 += 8;
    --v7;
  }
  while ( v7 );
}
