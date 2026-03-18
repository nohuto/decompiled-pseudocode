/*
 * XREFs of InternalInvalidate3 @ 0x1C004C894
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C004B1E8 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     xxxEndPaint @ 0x1C00C4E2C (xxxEndPaint.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     DecPaintCount @ 0x1C005DF94 (DecPaintCount.c)
 *     ClearHungFlag @ 0x1C005F8F0 (ClearHungFlag.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C007A438 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 *     SetWakeBit @ 0x1C00ABE30 (SetWakeBit.c)
 *     CalcWindowRgn @ 0x1C00F4988 (CalcWindowRgn.c)
 *     IncPaintCount @ 0x1C0239B54 (IncPaintCount.c)
 *     IncPaintCountInterMoveSize @ 0x1C0239BA4 (IncPaintCountInterMoveSize.c)
 */

void __fastcall InternalInvalidate3(struct tagWND *a1, __int64 a2, int a3)
{
  int v6; // esi
  __int64 v7; // rcx
  struct tagWND *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  BOOL v11; // r14d
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rsi
  int v18; // r8d
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // eax
  unsigned int v22; // r8d
  __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // [rsp+20h] [rbp-28h]

  v6 = a3 & 1;
  if ( (a3 & 1) == 0 )
    goto LABEL_6;
  v7 = *((_QWORD *)a1 + 3);
  v8 = 0LL;
  if ( v7 )
  {
    v9 = *(_QWORD *)(v7 + 8);
    if ( v9 )
      v8 = *(struct tagWND **)(v9 + 24);
  }
  if ( a1 != v8 || !(unsigned int)IsWindowDesktopComposed(a1) )
  {
LABEL_6:
    v10 = *((_QWORD *)a1 + 5);
    v11 = *(_QWORD *)(v10 + 136) || (*(_BYTE *)(v10 + 17) & 0x10) != 0;
    if ( (a3 & 0x407) != 0 )
    {
      if ( (a3 & 2) != 0 )
        SetOrClrWF(1LL, a1, 272LL, 1LL);
      if ( !v6 )
        goto LABEL_28;
      SetOrClrWF(0LL, a1, 257LL, 1LL);
      if ( *((_QWORD *)a1 + 2) != gptiCurrent )
      {
        SetOrClrWF(1LL, a1, 288LL, 1LL);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 1) != 0 )
        {
          SetOrClrWF(1LL, a1, 1026LL, 1LL);
          gRdwFlags |= a3;
        }
      }
      if ( a2 == 1 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 1) == 0 )
        SetOrClrWF(0LL, a1, 258LL, 1LL);
      if ( (a3 & 4) != 0 )
        SetOrClrWF(1LL, a1, 258LL, 1LL);
      if ( (a3 & 0x404) != 0 )
      {
        v12 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v12 + 24) & 0x20) == 0 )
        {
          if ( (*(_BYTE *)(v12 + 19) & 0x18) == 0 && *((_QWORD *)a1 + 13) == GetDesktopWindow(a1) )
            VWPLAddBase(gpvwplHungRedraw, 0LL, a1, 0xAu, v25);
          SetOrClrWF(1LL, a1, 776LL, 1LL);
        }
      }
      if ( (a3 & 0x400) != 0 )
        SetOrClrWF(1LL, a1, 264LL, 1LL);
      v13 = *((_QWORD *)a1 + 5);
      v14 = *(_QWORD *)(v13 + 136);
      if ( v14 == 1 )
        goto LABEL_28;
      if ( a2 != 1 )
      {
        if ( v14 )
        {
          if ( (unsigned int)GreCombineRgn(v14, *(_QWORD *)(v13 + 136), a2, 2LL) )
            goto LABEL_28;
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = CreateEmptyRgnPublic();
          v15 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL);
          if ( v15 && (unsigned int)GreCombineRgn(v15, a2, 0LL, 5LL) )
          {
LABEL_28:
            if ( !v11 )
            {
              v16 = *((_QWORD *)a1 + 5);
              if ( *(_QWORD *)(v16 + 136) || (*(_BYTE *)(v16 + 17) & 0x10) != 0 )
              {
                v17 = *((_QWORD *)a1 + 2);
                if ( (a3 & 0x20000) != 0 )
                {
                  if ( v17 == W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
                    IncPaintCount(a1);
                  else
                    IncPaintCountInterMoveSize(a1);
                }
                else
                {
                  v18 = *(_DWORD *)(v17 + 600);
                  *(_DWORD *)(v17 + 600) = v18 + 1;
                  if ( !v18 )
                  {
                    EtwTraceWakePump(v17, a1, 15LL);
                    SetWakeBit(v17, 32LL);
                  }
                }
              }
            }
            return;
          }
        }
      }
LABEL_42:
      DeleteMaybeSpecialRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 1LL;
      goto LABEL_28;
    }
    if ( (a3 & 0x838) == 0 || (*(_BYTE *)(v10 + 17) & 0x20) != 0 && (a3 & 0x8000) == 0 )
      return;
    if ( (a3 & 0x10) != 0 )
      SetOrClrWF(0LL, a1, 272LL, 1LL);
    if ( (a3 & 8) == 0 )
      goto LABEL_55;
    if ( (a3 & 0x20) != 0 )
      SetOrClrWF(0LL, a1, 258LL, 1LL);
    if ( (a3 & 0x800) != 0 )
    {
      SetOrClrWF(0LL, a1, 264LL, 1LL);
      SetOrClrWF(0LL, a1, 1664LL, 1LL);
    }
    if ( (a3 & 0x820) != 0 )
      ClearHungFlag(a1);
    v19 = *((_QWORD *)a1 + 5);
    if ( !*(_QWORD *)(v19 + 136) )
      goto LABEL_55;
    if ( (*(_BYTE *)(v19 + 17) & 8) != 0 )
    {
      if ( a2 != 1 )
        goto LABEL_65;
      a2 = ghrgnInv2;
      CalcWindowRgn(a1, ghrgnInv2, 1LL);
    }
    if ( a2 == 1 )
    {
LABEL_68:
      DeleteMaybeSpecialRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 0LL;
      SetOrClrWF(0LL, a1, 258LL, 1LL);
      ClearHungFlag(a1);
LABEL_55:
      if ( v11 )
      {
        v20 = *((_QWORD *)a1 + 5);
        if ( !*(_QWORD *)(v20 + 136) && (*(_BYTE *)(v20 + 17) & 0x10) == 0 )
          DecPaintCount(a1);
      }
      return;
    }
LABEL_65:
    if ( *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) == 1LL )
    {
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = CreateEmptyRgnPublic();
      v23 = *((_QWORD *)a1 + 5);
      v24 = *(_QWORD *)(v23 + 136);
      if ( !v24 )
        goto LABEL_42;
      LOBYTE(v22) = ~*(_BYTE *)(v23 + 17);
      if ( !(unsigned int)CalcWindowRgn(a1, v24, (v22 >> 3) & 1) )
        goto LABEL_42;
    }
    v21 = GreCombineRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), a2, 4LL);
    if ( !v21 )
      goto LABEL_42;
    if ( v21 != 1 )
      goto LABEL_55;
    goto LABEL_68;
  }
}
