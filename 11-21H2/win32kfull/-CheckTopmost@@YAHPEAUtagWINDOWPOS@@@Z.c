/*
 * XREFs of ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C0081A44
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C004DF70 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0081210 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 * Callees:
 *     CalcForegroundInsertAfter @ 0x1C0085330 (CalcForegroundInsertAfter.c)
 *     GetLastTopMostWindow @ 0x1C0085494 (GetLastTopMostWindow.c)
 *     GetTopMostInsertAfter @ 0x1C01CC97C (GetTopMostInsertAfter.c)
 */

__int64 __fastcall CheckTopmost(struct tagWINDOWPOS *a1)
{
  _QWORD *v2; // rsi
  __int64 v3; // rbx
  int v4; // eax
  __int64 v6; // rax
  __int64 *v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  char v12; // al
  bool v13; // zf
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 *LastTopMostWindow; // rax
  __int64 v17; // rax
  __int64 *TopMostInsertAfter; // rax
  _QWORD *v19; // rax

  v2 = (_QWORD *)_HMObjectFromHandle(*(_QWORD *)a1);
  v3 = 0LL;
  v4 = *((_DWORD *)a1 + 8);
  if ( (v4 & 0x14) == 0
    && *((_QWORD *)a1 + 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && v2 != *(_QWORD **)(*(_QWORD *)(v2[2] + 432LL) + 120LL) )
  {
    *((_QWORD *)a1 + 1) = 0LL;
  }
  if ( (v4 & 4) != 0 )
    return 0LL;
  v6 = *((_QWORD *)a1 + 1);
  switch ( v6 )
  {
    case 1LL:
      return 2LL;
    case -2LL:
      v15 = v2[5];
      if ( (*(_BYTE *)(v15 + 24) & 8) != 0 )
      {
        LastTopMostWindow = (__int64 *)GetLastTopMostWindow(v2);
        if ( LastTopMostWindow )
          v17 = *LastTopMostWindow;
        else
          v17 = 0LL;
        *((_QWORD *)a1 + 1) = v17;
        if ( v17 != *(_QWORD *)a1 )
          return 2LL;
        v13 = (*(_WORD *)(v2[5] + 42LL) & 0x2FFF) == 669;
      }
      else
      {
        v13 = (*(_WORD *)(v15 + 42) & 0x2FFF) == 669;
      }
      if ( !v13 )
      {
        v14 = (__int64 *)v2[12];
        if ( v14 )
          v3 = *v14;
      }
      *((_QWORD *)a1 + 1) = v3;
      return 2LL;
    case -1LL:
      if ( gHardErrorHandler )
      {
        TopMostInsertAfter = (__int64 *)GetTopMostInsertAfter(v2);
        if ( TopMostInsertAfter )
          v3 = *TopMostInsertAfter;
      }
      *((_QWORD *)a1 + 1) = v3;
      return 1LL;
    case 0LL:
      if ( (*(_BYTE *)(v2[5] + 24LL) & 8) == 0 )
      {
        v7 = (__int64 *)CalcForegroundInsertAfter(v2);
        if ( v7 )
          v3 = *v7;
        *((_QWORD *)a1 + 1) = v3;
        return 0LL;
      }
      goto LABEL_9;
  }
  v8 = (__int64 *)GetLastTopMostWindow(v2);
  if ( v8 )
    v9 = *v8;
  else
    v9 = 0LL;
  v10 = *((_QWORD *)a1 + 1);
  if ( v10 == v9 )
    return 0LL;
  v11 = *(_QWORD *)(_HMObjectFromHandle(v10) + 40);
  v12 = *(_BYTE *)(v2[5] + 24LL);
  if ( (*(_BYTE *)(v11 + 24) & 8) != 0 )
  {
    if ( (v12 & 8) != 0 )
    {
LABEL_9:
      if ( gHardErrorHandler )
      {
        v19 = (_QWORD *)GetTopMostInsertAfter(v2);
        if ( v19 )
          *((_QWORD *)a1 + 1) = *v19;
      }
      return 0LL;
    }
    return 1LL;
  }
  if ( (v12 & 8) == 0 )
    return 0LL;
  return 2LL;
}
