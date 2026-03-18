/*
 * XREFs of xxxSBWndProc @ 0x1C02420E0
 * Callers:
 *     ?xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01DE6E0 (-xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ConstrainWindowSIZERECT @ 0x1C0025550 (ConstrainWindowSIZERECT.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     xxxBeginPaint @ 0x1C005E22C (xxxBeginPaint.c)
 *     xxxGetScrollBarInfo @ 0x1C0064F60 (xxxGetScrollBarInfo.c)
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     xxxDefWindowProc @ 0x1C00A3F90 (xxxDefWindowProc.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00A79AC (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     zzzDestroyCaret @ 0x1C00C32AC (zzzDestroyCaret.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C00C3E78 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     xxxEndPaint @ 0x1C00C4E2C (xxxEndPaint.c)
 *     DrawThumb2 @ 0x1C00C5BBC (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C00C5CF8 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     xxxCreateCaret @ 0x1C00C6204 (xxxCreateCaret.c)
 *     ?SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z @ 0x1C00C67A0 (-SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z.c)
 *     xxxEnableScrollBar @ 0x1C00C6A60 (xxxEnableScrollBar.c)
 *     _FChildVisible @ 0x1C00F3654 (_FChildVisible.c)
 *     xxxMoveWindow @ 0x1C00FA07C (xxxMoveWindow.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     xxxValidateClassAndSize @ 0x1C015A2B0 (xxxValidateClassAndSize.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     zzzHideCaret @ 0x1C023AA44 (zzzHideCaret.c)
 *     zzzShowCaret @ 0x1C023AA6C (zzzShowCaret.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0240A10 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C0240BC8 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z @ 0x1C02413D4 (-zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z.c)
 *     DrawSize @ 0x1C0241420 (DrawSize.c)
 *     SBCtlSetup @ 0x1C024155C (SBCtlSetup.c)
 *     _SBGetParms @ 0x1C02415A4 (_SBGetParms.c)
 *     xxxDoScrollMenu @ 0x1C024162C (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C0241B74 (xxxSBTrackInit.c)
 *     _ClientToScreen @ 0x1C025A47C (_ClientToScreen.c)
 */

unsigned __int64 __fastcall xxxSBWndProc(struct tagWND *a1, unsigned int a2, _DWORD *a3, struct tagSCROLLINFO *a4)
{
  int v4; // esi
  unsigned int v9; // r15d
  unsigned __int64 result; // rax
  _DWORD *v11; // r14
  unsigned int v12; // ecx
  unsigned int v13; // r12d
  __int64 v14; // rdx
  unsigned __int8 v15; // r11
  int v16; // r10d
  bool v17; // zf
  _DWORD *v18; // rax
  int v19; // r9d
  int v20; // r8d
  unsigned int v21; // r12d
  char v22; // r8
  unsigned int v23; // ebx
  int v24; // r9d
  __int64 v25; // rcx
  int v26; // ecx
  int v27; // eax
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // edi
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int v32; // eax
  int v33; // eax
  int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // eax
  int v39; // edi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  struct tagWND *v43; // r9
  HDC DCEx; // rsi
  HBRUSH ColorObjects; // rbx
  __int64 v46; // rdi
  HDC v47; // r12
  __int64 v48; // rax
  struct tagWND *v49; // rcx
  __int64 v50; // rax
  int v51; // edi
  __int64 v52; // r12
  __int64 v53; // rcx
  __int64 v54; // rax
  char v55; // bl
  __int64 v56; // rdi
  unsigned __int64 *v57; // r10
  unsigned __int64 v58; // r8
  __int64 v59; // r8
  int v60; // [rsp+50h] [rbp-B0h] BYREF
  int v61; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v62; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v63; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v64; // [rsp+68h] [rbp-98h]
  int v65; // [rsp+6Ch] [rbp-94h]
  int v66; // [rsp+70h] [rbp-90h]
  int v67; // [rsp+78h] [rbp-88h]
  __int128 v68; // [rsp+80h] [rbp-80h] BYREF
  __int64 v69; // [rsp+90h] [rbp-70h]
  __int128 v70; // [rsp+98h] [rbp-68h] BYREF
  __int64 v71; // [rsp+A8h] [rbp-58h]
  int v72; // [rsp+B0h] [rbp-50h]
  _QWORD v73[10]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = 0;
  v60 = a2;
  v61 = 0;
  v62 = 0LL;
  memset(v73, 0, 0x48uLL);
  v63 = 0LL;
  v69 = 0LL;
  v71 = 0LL;
  v72 = 0;
  v68 = 0LL;
  v70 = 0LL;
  if ( *((_QWORD *)a1 + 2) != gptiCurrent )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v9 = 1;
  if ( !(unsigned int)xxxValidateClassAndSize(a1, a2, (unsigned __int64)a3, (unsigned __int64)a4, 666, 1, &v63) )
    return v63;
  v11 = (_DWORD *)*((_QWORD *)a1 + 35);
  v12 = v60;
  v13 = 3;
  *(_QWORD *)v11 = a1;
  v14 = *((_QWORD *)a1 + 5);
  v15 = *(_BYTE *)(v14 + 28);
  v66 = v15;
  v16 = v15 & 0x18;
  v67 = v16;
  if ( v12 <= 0xE2 )
  {
    if ( v12 != 226 )
    {
      if ( v12 <= 0x14 )
      {
        if ( v12 != 20 )
        {
          if ( v12 != 1 )
          {
            switch ( v12 )
            {
              case 5u:
                if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) != a1 )
                  return 0LL;
                zzzDestroyCaret();
                break;
              case 7u:
                break;
              case 8u:
                zzzDestroyCaret();
                return 0LL;
              case 0xAu:
                _InterlockedAdd(&glSendMessage, 1u);
                return xxxSendTransformableMessageTimeout(
                         (unsigned __int64 *)a1,
                         0xE4u,
                         -(__int64)(a3 == 0LL) & 3,
                         0LL,
                         0,
                         0,
                         0LL,
                         1,
                         1);
              default:
                v17 = v12 == 15;
                goto LABEL_105;
            }
            SBCtlSetup((__int64)v11);
            v18 = *(_DWORD **)(*(_QWORD *)v11 + 40LL);
            if ( v11[2] )
            {
              v19 = v11[12];
              v20 = v18[24] - v18[22] - 4;
            }
            else
            {
              v20 = v11[12] - 4;
              v19 = v18[25] - v18[23];
            }
            xxxCreateCaret(*(struct tagWND **)v11, (HBRUSH)1, v20, v19 - 4);
            zzzSetSBCaretPos((struct tagSBWND *)v11);
            zzzShowCaret(*(struct tagWND **)v11);
            return 0LL;
          }
          if ( !a4 )
          {
            UserSetLastError(87LL, v14);
            return 0LL;
          }
          v21 = *((_DWORD *)a4 + 11);
          v22 = *(_BYTE *)(v14 + 31) & 0xC0;
          v23 = *((_DWORD *)a4 + 10);
          v24 = *((_DWORD *)a4 + 9);
          v25 = *((unsigned int *)a4 + 8);
          if ( v21 == 0x80000000 )
          {
            if ( v22 )
              v21 = 0;
            else
              v21 = *(_DWORD *)(v14 + 88);
          }
          if ( v23 == 0x80000000 )
          {
            if ( v22 )
              v23 = 0;
            else
              v23 = *(_DWORD *)(v14 + 92);
          }
          if ( v24 == 0x80000000 )
          {
            if ( v22 )
              v24 = 0;
            else
              v24 = *(_DWORD *)(v14 + 96) - *(_DWORD *)(v14 + 88);
          }
          if ( (_DWORD)v25 == 0x80000000 )
          {
            if ( v22 )
              v25 = 0LL;
            else
              v25 = (unsigned int)(*(_DWORD *)(v14 + 100) - *(_DWORD *)(v14 + 92));
          }
          v17 = (*(_BYTE *)(v14 + 21) & 2) == 0;
          v60 = v21 + v24;
          v61 = v23 + v25;
          if ( v17 )
          {
            *(_DWORD *)(v14 + 28) &= 0xFFCFFFFF;
            a1 = *(struct tagWND **)v11;
          }
          if ( (v15 & 0x18) == 0 )
          {
            v26 = *(_DWORD *)a4;
            a1 = *(struct tagWND **)v11;
            v27 = (unsigned __int16)*(_DWORD *)a4;
            v11[4] = v27;
            v11[7] = v27;
            v11[5] = HIWORD(v26);
            v25 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 28LL) & 1;
            v11[6] = 0;
            v11[2] = v25;
          }
          if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 28LL) & 0x8000000) != 0 )
            v11[3] = 3;
          if ( (v15 & 6) == 0 )
            return 0LL;
          if ( (v15 & 0x18) != 0 )
          {
            DpiForSystem = GetDpiForSystem(v25, v14);
            DpiDependentMetric = GetDpiDependentMetric(0LL, DpiForSystem);
            v32 = GetDpiForSystem(v31, v30);
            v33 = GetDpiDependentMetric(1LL, v32);
            if ( (v66 & 4) != 0 )
            {
              v21 = v60 - DpiDependentMetric;
              v23 = v61 - v33;
            }
            v61 = v23 + v33;
            v34 = v21 + DpiDependentMetric;
            goto LABEL_59;
          }
          if ( (v15 & 1) != 0 )
          {
            if ( (v15 & 2) != 0 )
            {
              v35 = GetDpiForSystem(v25, v14);
              v34 = v21 + GetDpiDependentMetric(0LL, v35);
LABEL_59:
              v63 = __PAIR64__(v23, v21);
              v64 = v34 - v21;
              v65 = v61 - v23;
              ConstrainWindowSIZERECT((__int64)&v63);
              xxxMoveWindow(*(struct tagWND **)v11, (unsigned int)v63, HIDWORD(v63), v64, v65, 0);
              return 0LL;
            }
            v36 = GetDpiForSystem(v25, v14);
            v21 = v60 - GetDpiDependentMetric(0LL, v36);
          }
          else if ( (v15 & 2) != 0 )
          {
            v37 = GetDpiForSystem(v25, v14);
            v61 = v23 + GetDpiDependentMetric(1LL, v37);
          }
          else
          {
            v38 = GetDpiForSystem(v25, v14);
            v23 = v61 - GetDpiDependentMetric(1LL, v38);
          }
          v34 = v60;
          goto LABEL_59;
        }
        return 1LL;
      }
      if ( v12 != 123 )
      {
        if ( v12 == 132 )
        {
          if ( (v15 & 0x10) != 0 )
            return (((unsigned __int8)~*(_BYTE *)(v14 + 26) ^ (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL) + 25LL)) >> 6) & 1 | 0x10;
          return xxxDefWindowProc(a1, v12, (unsigned __int64)a3, (unsigned __int64)a4);
        }
        if ( v12 == 135 )
          return 1LL;
        if ( v12 != 224 )
        {
          if ( v12 == 225 )
            return (int)v11[7];
          return xxxDefWindowProc(a1, v12, (unsigned __int64)a3, (unsigned __int64)a4);
        }
        v39 = (int)a4;
        DWORD1(v70) = 4100;
        HIDWORD(v71) = (_DWORD)a3;
        goto LABEL_85;
      }
      ThreadLock(*((_QWORD *)a1 + 13), (__int64 *)&v68);
      xxxDoScrollMenu(*(struct tagWND **)(*(_QWORD *)v11 + 104LL), *(struct tagWND **)v11, v11[2], (unsigned __int64)a4);
LABEL_72:
      ThreadUnlock1(v41, v40, v42);
      return 0LL;
    }
    v39 = 0;
LABEL_84:
    *((_QWORD *)&v70 + 1) = __PAIR64__((unsigned int)a4, (unsigned int)a3);
    DWORD1(v70) = 4097;
LABEL_85:
    a4 = (struct tagSCROLLINFO *)&v70;
    LODWORD(v70) = 28;
    goto LABEL_86;
  }
  if ( v12 > 0xEB )
  {
    switch ( v12 )
    {
      case 0x100u:
        if ( a3 == (_DWORD *)33 )
        {
          v9 = 2;
        }
        else if ( a3 == (_DWORD *)34 )
        {
          v9 = 3;
        }
        else if ( a3 == (_DWORD *)35 )
        {
          v9 = 7;
        }
        else if ( a3 == (_DWORD *)36 )
        {
          v9 = 6;
        }
        else
        {
          if ( (unsigned __int64)a3 <= 0x24 )
            return 0LL;
          if ( (unsigned __int64)a3 <= 0x26 )
          {
            v9 = 0;
          }
          else if ( (unsigned __int64)a3 > 0x28 )
          {
            return 0LL;
          }
        }
        v59 = v9;
        break;
      case 0x101u:
        if ( (unsigned __int64)a3 - 33 > 7 )
          return 0LL;
        v59 = 8LL;
        break;
      case 0x201u:
        goto LABEL_118;
      case 0x203u:
        v52 = 61488LL;
        if ( (v15 & 0x18) == 0 )
        {
LABEL_118:
          if ( (v15 & 0x18) == 0 )
          {
            if ( (*(_BYTE *)(v14 + 30) & 1) != 0 )
            {
              xxxSetFocus(a1, v14, 256LL);
              a1 = *(struct tagWND **)v11;
            }
            zzzHideCaret(a1);
            SBCtlSetup((__int64)v11);
            LOBYTE(v4) = (_GetKeyState(16LL) & 0x8000u) != 0LL;
            xxxSBTrackInit(*(struct tagWND **)v11, (unsigned __int64)a4, 0, v4);
            return 0LL;
          }
          v52 = 61440LL;
        }
        LODWORD(v62) = (__int16)a4;
        HIDWORD(v62) = SWORD1(a4);
        ClientToScreen(a1, &v62);
        v53 = *((_QWORD *)a1 + 13);
        v54 = *(_QWORD *)(v53 + 40);
        v55 = *(_BYTE *)(v54 + 26);
        v56 = *(unsigned __int8 *)(v54 + 25);
        ThreadLock(v53, (__int64 *)&v68);
        v57 = *(unsigned __int64 **)(*(_QWORD *)v11 + 104LL);
        _InterlockedAdd(&glSendMessage, 1u);
        LOBYTE(v58) = ~v55;
        xxxSendTransformableMessageTimeout(
          v57,
          0x112u,
          v52 | ((((v56 ^ v58) >> 6) & 1) + 7),
          (unsigned __int16)v62 | (WORD2(v62) << 16),
          0,
          0,
          0LL,
          1,
          1);
        goto LABEL_72;
      default:
        v17 = v12 == 792;
LABEL_105:
        if ( !v17 )
          return xxxDefWindowProc(a1, v12, (unsigned __int64)a3, (unsigned __int64)a4);
        v47 = (HDC)a3;
        if ( !a3 )
        {
          v48 = xxxBeginPaint(a1, (__int64)v73);
          v16 = v67;
          v47 = (HDC)v48;
        }
        if ( v16 )
        {
          v49 = *(struct tagWND **)v11;
          v50 = *(_QWORD *)(*(_QWORD *)v11 + 40LL);
          v51 = *(_BYTE *)(v50 + 30) & 4;
          if ( (*(_BYTE *)(v50 + 30) & 4) == 0 )
          {
            SetOrClrWF(1, *(struct tagWND **)v11, 0xE04u, 1);
            v49 = *(struct tagWND **)v11;
          }
          DrawSize((__int64)v49, v47, 0, 0);
          if ( !v51 )
            SetOrClrWF(0, *(struct tagWND **)v11, 0xE04u, 1);
        }
        else
        {
          SBCtlSetup((__int64)v11);
          xxxDrawSB2(*(struct tagWND **)v11, (struct tagSBCALC *)(v11 + 4), v47, v11[2], v11[3]);
        }
        if ( !a3 )
          xxxEndPaint(*(struct tagWND **)v11, v73);
        return 0LL;
    }
    xxxDoScroll(a1, *((struct tagWND **)a1 + 13), v59, 0LL, v11[2]);
    return 0LL;
  }
  switch ( v12 )
  {
    case 0xEBu:
      LODWORD(result) = xxxGetScrollBarInfo((unsigned __int64 *)a1, -4, (__int64)a4);
      return (int)result;
    case 0xE3u:
      *a3 = v11[4];
      *(_DWORD *)a4 = v11[5];
      return *((unsigned __int16 *)v11 + 8) | ((unsigned __int64)*((unsigned __int16 *)v11 + 10) << 16);
    case 0xE4u:
      LODWORD(result) = xxxEnableSBCtlArrows(a1, (int)a3);
      return (int)result;
    case 0xE6u:
      v39 = 1;
      goto LABEL_84;
  }
  if ( v12 != 233 )
  {
    if ( v12 != 234 )
      return xxxDefWindowProc(a1, v12, (unsigned __int64)a3, (unsigned __int64)a4);
    LODWORD(result) = SBGetParms((__int64)a1, 2, v11 + 4, a4);
    return (int)result;
  }
  v39 = (int)a3;
LABEL_86:
  v60 = 1;
  if ( (unsigned int)SBSetParms((struct tagSBDATA *)(v11 + 4), a4, &v60, &v61) )
    xxxWindowEvent(0x800Eu, *(struct tagWND **)v11, -4, 0, 1);
  if ( v39 )
  {
    zzzHideCaret(*(struct tagWND **)v11);
    SBCtlSetup((__int64)v11);
    zzzSetSBCaretPos((struct tagSBWND *)v11);
    if ( (unsigned int)FChildVisible(*(_QWORD *)v11) )
    {
      if ( v60 || (*((_DWORD *)a4 + 1) & 8) == 0 )
        v13 = 0;
      xxxEnableScrollBar(v43, 2u, v13);
      DCEx = (HDC)_GetDCEx(*(_QWORD *)v11, 0LL, 65537LL);
      ColorObjects = (HBRUSH)xxxGetColorObjects(*(struct tagWND **)v11, (unsigned __int64)DCEx);
      v46 = GreSelectBrush(DCEx, ColorObjects);
      DrawThumb2(*(_QWORD *)v11, v11 + 4, DCEx, ColorObjects, v11[2], v11[3]);
      GreSelectBrush(DCEx, v46);
      _ReleaseDC(DCEx);
      v43 = *(struct tagWND **)v11;
    }
    zzzShowCaret(v43);
  }
  return v61;
}
