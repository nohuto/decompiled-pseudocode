/*
 * XREFs of ?HandleSameDockTargetSameMonitorMove@@YAHPEAUMOVESIZEDATA@@KH@Z @ 0x1C020A514
 * Callers:
 *     ?xxxSizeOrMoveRect@@YAHPEAUMOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C020F75C (-xxxSizeOrMoveRect@@YAHPEAUMOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x1C020AAD8 (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?MoveRect@@YAHPEAUMOVESIZEDATA@@KW4MOVERECT_STYLE@@@Z @ 0x1C020AB64 (-MoveRect@@YAHPEAUMOVESIZEDATA@@KW4MOVERECT_STYLE@@@Z.c)
 */

__int64 __fastcall HandleSameDockTargetSameMonitorMove(struct MOVESIZEDATA *a1, __int64 a2, unsigned int a3)
{
  int v5; // ecx
  unsigned int v6; // esi
  int v7; // eax
  __int64 v8; // r8
  int v10; // ecx
  int v11; // eax

  v5 = *((_DWORD *)a1 + 60);
  v6 = a2;
  if ( (unsigned int)(v5 - 1) <= 1 )
  {
    v7 = *((_DWORD *)a1 + 50);
    if ( (v7 & 0x300) == 0 )
    {
      if ( (v7 & 0x2000000) == 0 )
      {
        v8 = *((unsigned int *)a1 + 61);
        return MoveRect(a1, a2, v8);
      }
      return a3;
    }
  }
  if ( !v5 )
  {
    v10 = *((_DWORD *)a1 + 50);
    v11 = v10 & 0x38000;
    if ( (v10 & 0x300) == 0x300 && (v11 == 0x20000 || v11 == 163840) )
    {
      if ( (v10 & 0x2000000) == 0 )
      {
LABEL_11:
        v8 = 3LL;
        a2 = v6;
        return MoveRect(a1, a2, v8);
      }
      return a3;
    }
    if ( (v10 & 0x300) != 0 && ((v11 - 0x20000) & 0xFFFF7FFF) == 0 )
    {
      *((_DWORD *)a1 + 50) = v10 | 0x300;
      MakeArrangedStateObservable(a1);
      if ( (*((_DWORD *)a1 + 50) & 0x2000000) == 0 )
        goto LABEL_11;
      return a3;
    }
  }
  return (*((_DWORD *)a1 + 50) & 0x2000000) != 0 ? a3 : 0;
}
