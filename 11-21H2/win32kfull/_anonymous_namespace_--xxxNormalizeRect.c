/*
 * XREFs of _anonymous_namespace_::xxxNormalizeRect @ 0x1C00B2264
 * Callers:
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x1C00B1A70 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x1C024B6D4 (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1C024BDB4 (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x1C004CE04 (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     GetMonitorWorkRectForWindow @ 0x1C0062244 (GetMonitorWorkRectForWindow.c)
 *     GetMonitorRectForWindow @ 0x1C0063604 (GetMonitorRectForWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C007BAF4 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C009BC14 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x1C00B2180 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     _anonymous_namespace_::IsFullscreenRect @ 0x1C00B2774 (_anonymous_namespace_--IsFullscreenRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddd @ 0x1C00B27A0 (WPP_RECORDER_AND_TRACE_SF_qdddddd.c)
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z @ 0x1C00B29D0 (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z @ 0x1C00B2A40 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddddd @ 0x1C01214F8 (WPP_RECORDER_AND_TRACE_SF_ddddddd.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01E0A3C (xxxAppAdjustDpiCandidateRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x1C024BFF0 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 */

__int64 __fastcall anonymous_namespace_::xxxNormalizeRect(
        __int64 a1,
        const struct tagWND *a2,
        _DWORD *a3,
        __int64 a4,
        _DWORD *a5,
        unsigned __int16 a6,
        char a7)
{
  __int64 v7; // r15
  _DWORD *v8; // r14
  const struct tagWND *v9; // r13
  char v11; // bp
  int v12; // edi
  __int128 v13; // xmm6
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int v17; // ecx
  unsigned __int16 v18; // ax
  unsigned int v19; // ecx
  INT v20; // edi
  _OWORD *v21; // rax
  __int64 v22; // kr00_8
  int v23; // r9d
  int v24; // r10d
  int v25; // r9d
  int v26; // r14d
  int v27; // ebx
  int v28; // edi
  int v29; // r11d
  int v30; // r8d
  __m128i *MonitorWorkRectForWindow; // rax
  int v32; // r8d
  int v33; // edx
  __m128i v34; // xmm6
  int v35; // r14d
  _UNKNOWN **v36; // r8
  int v37; // r15d
  int v38; // ebx
  int v39; // r13d
  int v40; // ecx
  int v41; // edi
  int v42; // edx
  int v43; // r8d
  int v45; // r14d
  int v46; // ebx
  int v48; // ecx
  int v49; // r12d
  int v50; // edi
  int v51; // r15d
  int WindowBordersWithDpiAwareness; // r10d
  int v53; // edx
  int v54; // r8d
  int v55; // ebx
  int v56; // edi
  int v57; // r9d
  char v58; // dl
  int v59; // r15d
  int v60; // r12d
  int v61; // edx
  int v62; // r8d
  INT v63; // eax
  INT v64; // ecx
  int v65; // edx
  int v66; // r8d
  const char *v67; // rax
  char v68; // dl
  char v69; // dl
  char v70; // dl
  char v71; // al
  int v72; // edx
  int v73; // eax
  int v74; // [rsp+20h] [rbp-D8h]
  int v75; // [rsp+28h] [rbp-D0h]
  int v76; // [rsp+38h] [rbp-C0h]
  __int64 v77; // [rsp+40h] [rbp-B8h]
  __int64 v78; // [rsp+48h] [rbp-B0h]
  __int64 v79; // [rsp+50h] [rbp-A8h]
  __int64 v80; // [rsp+58h] [rbp-A0h]
  __int64 v81; // [rsp+60h] [rbp-98h]
  __int64 v82; // [rsp+68h] [rbp-90h]
  int v83; // [rsp+70h] [rbp-88h]
  int v84; // [rsp+80h] [rbp-78h]
  int v85; // [rsp+84h] [rbp-74h]
  int v86; // [rsp+88h] [rbp-70h]
  __int128 v87; // [rsp+90h] [rbp-68h] BYREF
  _BYTE v88[32]; // [rsp+A0h] [rbp-58h] BYREF
  const struct tagWND *v89; // [rsp+108h] [rbp+10h]
  int v91; // [rsp+130h] [rbp+38h]

  v89 = a2;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v11 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = a3[1];
    v83 = a3[3] - v12;
    LODWORD(v82) = a3[2] - *a3;
    LODWORD(v81) = a3[3];
    LODWORD(v80) = a3[2];
    LODWORD(v79) = v12;
    v77 = *(_QWORD *)v9;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qdddddd(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, (_DWORD)a3, v8[3] - v12, 4);
  }
  v13 = *(_OWORD *)GetMonitorRectForWindow((__int64)&v87, v7, v9);
  v87 = v13;
  if ( !(unsigned __int8)anonymous_namespace_::IsFullscreenRect(v8, a5) )
  {
    *(_OWORD *)a1 = *(_OWORD *)v8;
    v15 = *((_QWORD *)v9 + 5);
    v17 = *(_DWORD *)(v15 + 288);
    v18 = *(_WORD *)(v15 + 286);
    v19 = v17 >> 8;
    if ( v18 )
      a6 = v18;
    v20 = *(unsigned __int16 *)(*(_QWORD *)(v7 + 40) + 60LL);
    if ( (v19 & 0x1FF) == 0 && (_WORD)v20 != a6 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
        || (v58 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v58 = 0;
      }
      if ( v58 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_dd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v58,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
          4u,
          0x19u,
          0xCu,
          (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids);
      v59 = *(_DWORD *)(a1 + 8) - *(_DWORD *)a1;
      v60 = *(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 4);
      if ( (a7 & 1) != 0 && (unsigned int)xxxAppAdjustDpiCandidateRect(v89, (unsigned __int16)v20, a1, a1) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
          || (LOBYTE(v61) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v61) = 0;
        }
        if ( (_BYTE)v61 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v62) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_dddd(
            WPP_GLOBAL_Control->AttachedDevice,
            v61,
            v62,
            *(_DWORD *)(a1 + 8) - *(_DWORD *)a1,
            4,
            v75,
            13,
            v76,
            v59,
            v60,
            *(_BYTE *)(a1 + 8) - *(_BYTE *)a1,
            *(_BYTE *)(a1 + 12) - *(_BYTE *)(a1 + 4));
        }
      }
      else
      {
        v63 = EngMulDiv(*(_DWORD *)(a1 + 8) - *(_DWORD *)a1, v20, a6);
        v64 = *(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 4);
        *(_DWORD *)(a1 + 8) = *(_DWORD *)a1 + v63;
        *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 4) + EngMulDiv(v64, v20, a6);
        LOBYTE(v65) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v65 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v67 = "app didn't respond to WM_GETDPISCALEDSIZE";
          if ( (a7 & 1) == 0 )
            v67 = "caller didnt use SendDpiScaledSize";
          LOBYTE(v66) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_s(
            WPP_GLOBAL_Control->AttachedDevice,
            v65,
            v66,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            25,
            14,
            (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
            (__int64)v67);
        }
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
          || (v68 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v68 = 0;
        }
        if ( v68 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v77) = v59;
          WPP_RECORDER_AND_TRACE_SF_dd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v68,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
            4u,
            0x19u,
            0xFu,
            (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
            v77,
            v60,
            v79,
            v80,
            v81,
            v82,
            v83);
        }
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
          || (v69 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v69 = 0;
        }
        if ( v69 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v78) = *(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 4);
          LODWORD(v77) = *(_DWORD *)(a1 + 8) - *(_DWORD *)a1;
          WPP_RECORDER_AND_TRACE_SF_dd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v69,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
            4u,
            0x19u,
            0x10u,
            (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
            v77,
            v78);
        }
      }
      v7 = a4;
    }
    v21 = (_OWORD *)WindowMargins::ReduceRect(v88, v89, a1);
    v22 = v87;
    v23 = HIDWORD(v87);
    v24 = DWORD2(v87) - v87;
    *(_OWORD *)a1 = *v21;
    v25 = v23 - HIDWORD(v22);
    v26 = a5[1];
    v27 = v22 - *a5;
    v28 = HIDWORD(v22) - v26;
    v29 = a5[2] - *a5;
    v30 = a5[3] - v26;
    if ( v24 != v29 || v25 != v30 )
    {
      v27 += ((*(_DWORD *)a1 - *a5) * (v24 - v29) + v29 / 2) / v29;
      v28 += ((v25 - v30) * (*(_DWORD *)(a1 + 4) - v26) + v30 / 2) / v30;
    }
    if ( v27 || v28 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
        || (v70 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v70 = 0;
      }
      if ( v70 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v78) = v28;
        LODWORD(v77) = v27;
        WPP_RECORDER_AND_TRACE_SF_dd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v70,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
          4u,
          0x19u,
          0x11u,
          (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
          v77,
          v78);
      }
      *(_DWORD *)a1 += v27;
      *(_DWORD *)(a1 + 8) += v27;
      *(_DWORD *)(a1 + 12) += v28;
      *(_DWORD *)(a1 + 4) += v28;
    }
    MonitorWorkRectForWindow = (__m128i *)GetMonitorWorkRectForWindow((__int64)v88, v7, v89);
    v33 = *(_DWORD *)(a1 + 8);
    v34 = *MonitorWorkRectForWindow;
    v35 = _mm_cvtsi128_si32(_mm_srli_si128(*MonitorWorkRectForWindow, 8));
    v84 = v35;
    if ( v33 > v35 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
        || (v71 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v71 = 0;
      }
      if ( v71 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v72 = 18;
        LOBYTE(v72) = v71;
        LOBYTE(v32) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v72,
          v32,
          (unsigned int)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
          4,
          25,
          18,
          (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids);
        v33 = *(_DWORD *)(a1 + 8);
      }
      *(_DWORD *)a1 += v35 - v33;
      v33 = v35;
      *(_DWORD *)(a1 + 8) = v35;
    }
    LODWORD(v36) = *(_DWORD *)a1;
    v37 = _mm_cvtsi128_si32(v34);
    v85 = v37;
    if ( *(_DWORD *)a1 < v37 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
        || (LOBYTE(v33) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v33) = 0;
      }
      if ( (_BYTE)v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v33,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (unsigned int)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
          4,
          25,
          19,
          (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids);
        LODWORD(v36) = *(_DWORD *)a1;
      }
      *(_DWORD *)(a1 + 8) += v37 - (_DWORD)v36;
      v33 = *(_DWORD *)(a1 + 8);
      *(_DWORD *)a1 = v37;
    }
    v38 = *(_DWORD *)(a1 + 12);
    v39 = _mm_cvtsi128_si32(_mm_srli_si128(v34, 12));
    if ( v38 > v39 )
    {
      LOBYTE(v33) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v36) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v33,
          (_DWORD)v36,
          (unsigned int)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
          4,
          25,
          20,
          (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids);
        v38 = *(_DWORD *)(a1 + 12);
      }
      v33 = *(_DWORD *)(a1 + 8);
      v73 = v39 - v38;
      v38 = v39;
      *(_DWORD *)(a1 + 4) += v73;
      *(_DWORD *)(a1 + 12) = v39;
    }
    v40 = *(_DWORD *)(a1 + 4);
    v41 = _mm_cvtsi128_si32(_mm_srli_si128(v34, 4));
    v86 = v41;
    if ( v40 < v41 )
    {
      LOBYTE(v33) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      v36 = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v36) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v33,
          (_DWORD)v36,
          (_DWORD)WPP_GLOBAL_Control,
          4,
          25,
          21,
          (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids);
        v40 = *(_DWORD *)(a1 + 4);
      }
      v33 = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 12) += v41 - v40;
      v38 = *(_DWORD *)(a1 + 12);
      *(_DWORD *)(a1 + 4) = v41;
    }
    if ( (*(_BYTE *)(*((_QWORD *)v89 + 5) + 30LL) & 4) == 0 )
      goto LABEL_21;
    if ( v33 > v35 )
    {
      LOBYTE(v33) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v36) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v33,
          (_DWORD)v36,
          (unsigned int)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
          4,
          25,
          22,
          (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids);
      }
      v38 = *(_DWORD *)(a1 + 12);
      *(_DWORD *)(a1 + 8) = v35;
    }
    if ( v38 > v39 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
        || (LOBYTE(v33) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v33) = 0;
      }
      if ( (_BYTE)v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v36) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v33,
          (_DWORD)v36,
          (unsigned int)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
          4,
          25,
          23,
          (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids);
      }
      *(_DWORD *)(a1 + 12) = v39;
      v38 = v39;
    }
    v45 = *(_DWORD *)(a1 + 8) - *(_DWORD *)a1;
    v46 = v38 - *(_DWORD *)(a1 + 4);
    v48 = a7 & 0x10;
    v49 = a7 & 4;
    v50 = a7 & 8;
    v91 = v48;
    v51 = a7 & 2;
    if ( v51 )
    {
      *(_DWORD *)a1 = v85;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
        || (LOBYTE(v33) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v33) = 0;
      }
      if ( (_BYTE)v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v36) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v33,
          (_DWORD)v36,
          (unsigned int)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
          4,
          25,
          24,
          (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids);
      }
      if ( !v50 )
      {
        *(_DWORD *)(a1 + 8) = v45 + *(_DWORD *)a1;
LABEL_167:
        v48 = v91;
LABEL_33:
        v41 = v86;
        if ( v49 )
        {
          *(_DWORD *)(a1 + 4) = v86;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
            || (LOBYTE(v33) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v33) = 0;
          }
          if ( (_BYTE)v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v36) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v33,
              (_DWORD)v36,
              (unsigned int)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
              4,
              25,
              26,
              (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids);
          }
          if ( !v91 )
          {
            *(_DWORD *)(a1 + 12) = v46 + *(_DWORD *)(a1 + 4);
            goto LABEL_35;
          }
        }
        else if ( !v48 )
        {
LABEL_35:
          v37 = v85;
          v35 = v84;
LABEL_21:
          *(_OWORD *)a1 = *(_OWORD *)WindowMargins::ExtendRect(v88, v89, a1);
          if ( (*(_BYTE *)(*((_QWORD *)v89 + 5) + 30LL) & 4) != 0
            && *(_DWORD *)a1 <= v37
            && *(_DWORD *)(a1 + 4) <= v41
            && *(_DWORD *)(a1 + 8) >= v35
            && *(_DWORD *)(a1 + 12) >= v39 )
          {
            LOBYTE(v42) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            if ( (_BYTE)v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v43) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v42,
                v43,
                (unsigned int)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
                4,
                25,
                28,
                (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids);
            }
            *(__m128i *)a1 = v34;
            ++*(_DWORD *)a1;
            --*(_DWORD *)(a1 + 8);
            ++*(_DWORD *)(a1 + 4);
            --*(_DWORD *)(a1 + 12);
          }
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            v11 = 0;
          }
          if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v82) = *(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 4);
            LODWORD(v81) = *(_DWORD *)(a1 + 8) - *(_DWORD *)a1;
            LODWORD(v80) = *(_DWORD *)(a1 + 12);
            LODWORD(v79) = *(_DWORD *)(a1 + 8);
            LODWORD(v78) = *(_DWORD *)(a1 + 4);
            LODWORD(v77) = *(_DWORD *)a1;
            WPP_RECORDER_AND_TRACE_SF_dddddd(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v11,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
              4u,
              0x19u,
              0x1Du,
              (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
              v77,
              v78,
              v79,
              v80,
              v81,
              v82);
          }
          return a1;
        }
        *(_DWORD *)(a1 + 12) = v39;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
          || (LOBYTE(v33) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v33) = 0;
        }
        if ( (_BYTE)v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v36) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v33,
            (_DWORD)v36,
            (unsigned int)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
            4,
            25,
            27,
            (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids);
        }
        if ( !v49 )
          *(_DWORD *)(a1 + 4) = *(_DWORD *)(a1 + 12) - v46;
        goto LABEL_35;
      }
    }
    else if ( !v50 )
    {
      goto LABEL_33;
    }
    *(_DWORD *)(a1 + 8) = v84;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
      || (LOBYTE(v33) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v33) = 0;
    }
    if ( (_BYTE)v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v36) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v33,
        (_DWORD)v36,
        0,
        4,
        25,
        25,
        (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids);
    }
    if ( !v51 )
      *(_DWORD *)a1 = *(_DWORD *)(a1 + 8) - v45;
    goto LABEL_167;
  }
  *(_OWORD *)a1 = v13;
  WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(v9, v14, 0, 0);
  v53 = *(_DWORD *)a1 - WindowBordersWithDpiAwareness;
  v54 = *(_DWORD *)(a1 + 4) - WindowBordersWithDpiAwareness;
  v55 = WindowBordersWithDpiAwareness + *(_DWORD *)(a1 + 8);
  v56 = WindowBordersWithDpiAwareness + *(_DWORD *)(a1 + 12);
  *(_DWORD *)a1 = v53;
  *(_DWORD *)(a1 + 12) = v56;
  *(_DWORD *)(a1 + 8) = v55;
  *(_DWORD *)(a1 + 4) = v54;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v11 = 0;
  }
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v57 = v56 - v54;
    LOBYTE(v54) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    LOBYTE(v53) = v11;
    WPP_RECORDER_AND_TRACE_SF_ddddddd(WPP_GLOBAL_Control->AttachedDevice, v53, v54, v57, v74);
  }
  return a1;
}
