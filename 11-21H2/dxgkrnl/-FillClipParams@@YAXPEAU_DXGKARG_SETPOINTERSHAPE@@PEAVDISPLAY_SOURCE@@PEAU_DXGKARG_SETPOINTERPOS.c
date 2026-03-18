/*
 * XREFs of ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C01A582C
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1C01A4940 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C01B633C (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall FillClipParams(
        struct _DXGKARG_SETPOINTERSHAPE *a1,
        struct DISPLAY_SOURCE *a2,
        struct _DXGKARG_SETPOINTERPOSITION *a3,
        struct CURSOR_CLIP_PARAMS *a4)
{
  signed int v8; // esi
  int v9; // edi
  int v10; // r12d
  int v11; // r14d
  signed int Width; // edx
  UINT *p_Height; // r8
  UINT v14; // r9d
  int v15; // r8d
  int v16; // edx
  INT v17; // eax
  INT X; // ecx
  INT v19; // ecx
  int v20; // r8d
  INT Y; // r9d
  char v22; // cl
  char v23; // al
  __int128 v24; // [rsp+50h] [rbp-48h]
  UINT *v25; // [rsp+A0h] [rbp+8h]

  if ( *((_BYTE *)a2 + 704) )
  {
    v9 = *((_DWORD *)a2 + 177);
    v11 = 0;
    v8 = *((_DWORD *)a2 + 178);
    v10 = 0;
    DWORD1(v24) = 0;
    HIDWORD(v24) = v8;
  }
  else
  {
    v24 = *((_OWORD *)a2 + 43);
    v8 = HIDWORD(v24);
    v9 = *((_QWORD *)a2 + 87);
    v10 = HIDWORD(*((_QWORD *)a2 + 86));
    v11 = v24;
  }
  Width = a1->Width;
  p_Height = &a1->Height;
  if ( v9 - v11 < Width || (v14 = *p_Height, v25 = &a1->Height, HIDWORD(v24) - DWORD1(v24) < (int)*p_Height) )
  {
    v25 = &a1->Height;
    WdLogSingleEntry1(1LL, 221LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"((ClipBoxRect.right - ClipBoxRect.left) >= (LONG)(pSavedCursor->Width)) && ((ClipBoxRect.bottom - ClipBox"
                "Rect.top) >= (LONG)(pSavedCursor->Height))",
      221LL,
      0LL,
      0LL,
      0LL,
      0LL);
    Width = a1->Width;
    v14 = *v25;
  }
  *(_OWORD *)a4 = 0LL;
  *((_QWORD *)a4 + 2) = 0LL;
  *((_DWORD *)a4 + 5) = 0;
  *(_DWORD *)a4 = Width;
  *((_DWORD *)a4 + 1) = v14;
  if ( v11 && (v17 = a3->X, v17 < v11) )
  {
    *((_DWORD *)a4 + 5) = 4;
    v15 = 4;
    *(_DWORD *)a4 = Width + v17 - v11;
  }
  else
  {
    v15 = 0;
    if ( *((_DWORD *)a2 + 252) != v9 )
    {
      X = a3->X;
      if ( X + Width > v9 )
      {
        if ( v9 - X < 0 )
        {
          WdLogSingleEntry1(1LL, 241LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(ClipBoxRect.right - pPointerPos->X) >= 0",
            241LL,
            0LL,
            0LL,
            0LL,
            0LL);
          X = a3->X;
        }
        *((_DWORD *)a4 + 5) = 8;
        *(_DWORD *)a4 = v9 - X;
        v15 = 8;
      }
    }
  }
  if ( v10 && (v19 = a3->Y, v19 < v10) )
  {
    v20 = v15 | 1;
    *((_DWORD *)a4 + 1) = *v25 + v19 - v10;
    *((_DWORD *)a4 + 5) = v20;
    v16 = v20;
  }
  else
  {
    v16 = v15;
    if ( v8 != *((_DWORD *)a2 + 253) )
    {
      Y = a3->Y;
      if ( (int)(Y + *v25) > v8 )
      {
        if ( v8 - Y < 0 )
        {
          WdLogSingleEntry1(1LL, 258LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(ClipBoxRect.bottom - pPointerPos->Y) >= 0",
            258LL,
            0LL,
            0LL,
            0LL,
            0LL);
          Y = a3->Y;
          v16 = *((_DWORD *)a4 + 5);
        }
        v16 |= 2u;
        *((_DWORD *)a4 + 1) = v8 - Y;
        *((_DWORD *)a4 + 5) = v16;
      }
    }
  }
  if ( v16 )
  {
    *((_DWORD *)a4 + 2) = a1->Pitch;
    if ( (a1->Flags.Value & 1) != 0 )
    {
      if ( (v16 & 4) != 0 )
      {
        v22 = 0;
        v23 = (*(_BYTE *)a4 - LOBYTE(a1->Width)) & 7;
      }
      else
      {
        v23 = 0;
        v22 = *(_BYTE *)a4 & 7;
      }
      *((_BYTE *)a4 + 16) = v23;
      *((_BYTE *)a4 + 17) = v22;
      if ( *((_BYTE *)a4 + 16) )
      {
        if ( *((_BYTE *)a4 + 17) )
        {
          WdLogSingleEntry1(1LL, 293LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pClipParams->ExtraPixelsLeftMono == 0 || pClipParams->ExtraPixelsRightMono == 0",
            293LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      *((_DWORD *)a4 + 3) = 1;
    }
    else
    {
      *((_DWORD *)a4 + 3) = 0;
    }
  }
}
