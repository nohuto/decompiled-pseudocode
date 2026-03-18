/*
 * XREFs of ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0081210
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C004720C (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1C0047D8C (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     SetWindowGroupBand @ 0x1C00810A4 (SetWindowGroupBand.c)
 *     ?TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z @ 0x1C0081688 (-TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z.c)
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C0081868 (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C0081A44 (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     GetLastTopMostWindow @ 0x1C0085494 (GetLastTopMostWindow.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C0107E94 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

struct tagSMWP *__fastcall ZOrderByOwner(struct tagSMWP *a1)
{
  struct tagSMWP *v1; // rdi
  int v2; // r12d
  HWND *v3; // rcx
  int v4; // eax
  int v5; // ebp
  int v6; // eax
  __int128 *v7; // rcx
  int v8; // esi
  __int64 v9; // r13
  _OWORD *v10; // rcx
  unsigned int v11; // r14d
  struct tagWND *v12; // rbx
  _QWORD *v13; // rsi
  __int64 v14; // r15
  _QWORD *LastTopMostWindow; // rax
  __int64 *v16; // rax
  __int64 v17; // rax
  int v18; // edx
  int v19; // esi
  unsigned int v20; // r8d
  __int64 v21; // rax
  struct tagWND *v22; // r15
  struct tagWND *v23; // r14
  struct tagWND *v24; // rsi
  __int64 v25; // rbx
  __int64 v26; // r10
  int v27; // r8d
  __int128 v29; // [rsp+30h] [rbp-E8h]
  __int128 v30; // [rsp+40h] [rbp-D8h]
  __int128 v31; // [rsp+50h] [rbp-C8h]
  __int128 v32; // [rsp+60h] [rbp-B8h]
  __int128 v33; // [rsp+70h] [rbp-A8h]
  __int128 v34; // [rsp+80h] [rbp-98h]
  __int128 v35; // [rsp+90h] [rbp-88h]
  __int128 v36; // [rsp+A0h] [rbp-78h]
  __int128 v37; // [rsp+B0h] [rbp-68h]
  __int128 v38; // [rsp+C0h] [rbp-58h]
  __int64 v39; // [rsp+D0h] [rbp-48h]
  HWND v40; // [rsp+130h] [rbp+18h] BYREF
  HWND v41; // [rsp+138h] [rbp+20h] BYREF

  v1 = a1;
  if ( FindValidWindowPos(a1) )
  {
    v2 = *((_DWORD *)v1 + 7);
    if ( v2 )
    {
      while ( 1 )
      {
        v3 = (HWND *)*((_QWORD *)v1 + 5);
        --v2;
        v4 = *((_DWORD *)v1 + 7);
        v5 = v4 - 1;
        if ( *v3 )
          break;
        if ( v4 != 1 )
        {
          memmove(v3, v3 + 21, 168LL * v5);
          v4 = *((_DWORD *)v1 + 7);
        }
        *((_DWORD *)v1 + 7) = v4 - 1;
LABEL_48:
        if ( !v2 )
          return v1;
      }
      v40 = v3[1];
      v6 = CheckTopmost((struct tagWINDOWPOS *)v3);
      v7 = (__int128 *)*((_QWORD *)v1 + 5);
      v8 = v6;
      v29 = *v7;
      v30 = v7[1];
      v31 = v7[2];
      v32 = v7[3];
      v33 = v7[4];
      v34 = v7[5];
      v35 = v7[6];
      v36 = v7[7];
      v37 = v7[8];
      v38 = v7[9];
      v39 = *((_QWORD *)v7 + 20);
      if ( v5 )
      {
        v9 = v5;
        memmove(v7, (char *)v7 + 168, 168LL * v5);
        v10 = (_OWORD *)(168LL * v5 + *((_QWORD *)v1 + 5));
        *v10 = v29;
        v10[1] = v30;
        v10[2] = v31;
        v10[3] = v32;
        v10[4] = v33;
        v10[5] = v34;
        v10[6] = v35;
        v10 += 8;
        *(v10 - 1) = v36;
        *v10 = v37;
        v10[1] = v38;
        *((_QWORD *)v10 + 4) = v39;
      }
      else
      {
        v9 = 0LL;
      }
      v1 = ZOrderByOwner2(v1, v5);
      if ( !v1 )
        return v1;
      if ( !v8 )
      {
LABEL_37:
        v21 = *((int *)v1 + 7);
        v22 = 0LL;
        v41 = 0LL;
        v40 = 0LL;
        if ( (int)v21 <= 0 )
          v23 = 0LL;
        else
          v23 = (struct tagWND *)_HMObjectFromHandle(*(_QWORD *)(168 * v21 + *((_QWORD *)v1 + 5) - 168));
        v24 = 0LL;
        if ( (v31 & 0x200000) != 0 )
          v24 = (struct tagWND *)_HMObjectFromHandle(*((_QWORD *)&v29 + 1));
        if ( v5 != *((_DWORD *)v1 + 7) )
        {
          v25 = 168 * v9;
          do
          {
            v26 = v25 + *((_QWORD *)v1 + 5);
            if ( *(_QWORD *)v26 == (_QWORD)v29 )
            {
              v27 = v31 ^ ((unsigned __int8)v31 ^ (unsigned __int8)*(_DWORD *)(v26 + 32)) & 4;
              *(_OWORD *)v26 = v29;
              *(_OWORD *)(v26 + 16) = v30;
              *(_OWORD *)(v26 + 32) = v31;
              *(_OWORD *)(v26 + 48) = v32;
              *(_OWORD *)(v26 + 64) = v33;
              *(_OWORD *)(v26 + 80) = v34;
              *(_OWORD *)(v26 + 96) = v35;
              *(_OWORD *)(v26 + 112) = v36;
              *(_OWORD *)(v26 + 128) = v37;
              *(_OWORD *)(v26 + 144) = v38;
              *(_QWORD *)(v26 + 160) = v39;
              *(_DWORD *)(v26 + 32) = v27;
              if ( (v27 & 0x20000) != 0 )
                *(_DWORD *)(v26 + 32) = v27 & 0xFFFDFBFF | 0x400;
            }
            ++v5;
            v25 += 168LL;
            v22 = TrackZorder((struct tagWINDOWPOS *)v26, v22, v24, v23, &v41, &v40);
          }
          while ( v5 != *((_DWORD *)v1 + 7) );
        }
        goto LABEL_48;
      }
      v11 = 0;
      v12 = (struct tagWND *)_HMObjectFromHandle(v29);
      if ( v8 == 2 )
      {
        v13 = (_QWORD *)(*((_QWORD *)v1 + 5) + 168 * v9);
        v14 = _HMObjectFromHandle(*v13);
        if ( (*(_BYTE *)(*(_QWORD *)(v14 + 40) + 24LL) & 8) != 0 && v40 == (HWND)-2LL )
        {
          LastTopMostWindow = (_QWORD *)GetLastTopMostWindow(v12);
          if ( LastTopMostWindow )
            LastTopMostWindow = (_QWORD *)*LastTopMostWindow;
          v13[1] = LastTopMostWindow;
          if ( LastTopMostWindow == (_QWORD *)*v13 )
          {
            if ( (*(_WORD *)(*(_QWORD *)(v14 + 40) + 42LL) & 0x2FFF) == 0x29D || (v16 = *(__int64 **)(v14 + 96)) == 0LL )
              v17 = 0LL;
            else
              v17 = *v16;
            v13[1] = v17;
          }
        }
      }
      else if ( v8 == 1 )
      {
        v18 = 1;
LABEL_24:
        if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)&v35 + 1) + 424LL) + 820LL) & 2) != 0
          && (unsigned int)(*(_DWORD *)(*((_QWORD *)v12 + 5) + 236LL) - 1) <= 1 )
        {
          v19 = 1;
          v11 = v18 + 1;
          v20 = 0;
        }
        else
        {
          v19 = 0;
          v20 = ((unsigned int)v31 >> 9) & 1;
        }
        if ( *(_DWORD *)(*((_QWORD *)v12 + 5) + 236LL) == 1 || v11 == 1 )
          SetTopmostEnum(v12, v18, v20);
        if ( v19
          && *(_DWORD *)(*((_QWORD *)v12 + 5) + 236LL) != v11
          && *((_QWORD *)v12 + 13) == GetDesktopWindow((__int64)v12) )
        {
          SetWindowGroupBand(v12, v11, 1);
        }
        goto LABEL_37;
      }
      v18 = 0;
      goto LABEL_24;
    }
  }
  return v1;
}
