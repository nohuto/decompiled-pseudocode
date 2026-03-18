/*
 * XREFs of SpbCheckPwnd @ 0x1C0004DF4
 * Callers:
 *     zzzLockWindowUpdate2 @ 0x1C00DBFA8 (zzzLockWindowUpdate2.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C010ADC8 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z @ 0x1C00053D0 (-IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z.c)
 *     SpbCheckRect @ 0x1C00DC7C0 (SpbCheckRect.c)
 *     FreeSpb @ 0x1C00DCA08 (FreeSpb.c)
 */

__int64 __fastcall SpbCheckPwnd(struct tagWND *a1)
{
  struct tagSPB *v2; // rdi
  __int64 result; // rax
  struct tagSPB *v4; // rsi
  struct tagWND *i; // rbx

  while ( 1 )
  {
    v2 = *(struct tagSPB **)(gpDispInfo + 32LL);
    if ( !v2 )
      break;
    while ( 1 )
    {
      v4 = *(struct tagSPB **)v2;
      for ( i = (struct tagWND *)*((_QWORD *)v2 + 1); i; i = (struct tagWND *)*((_QWORD *)i + 13) )
      {
        if ( a1 == i )
          FreeSpb(v2);
      }
      if ( !IsSpbPresentOrNull(v4) )
        break;
      v2 = v4;
      if ( !v4 )
        goto LABEL_2;
    }
  }
LABEL_2:
  result = gpDispInfo;
  if ( *(_QWORD *)(gpDispInfo + 32LL) )
    return SpbCheckRect(a1, (struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL), 0);
  return result;
}
