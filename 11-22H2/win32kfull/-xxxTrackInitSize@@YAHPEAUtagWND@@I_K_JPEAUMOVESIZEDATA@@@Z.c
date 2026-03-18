/*
 * XREFs of ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01F19F0
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01EFC00 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C0011688 (xxxReleaseCapture.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C006D000 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     bSetDevDragRect @ 0x1C006EAD0 (bSetDevDragRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00BFCAC (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     PtInRect @ 0x1C00D0A58 (PtInRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00E5B60 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00F178C (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z @ 0x1C01EC5E0 (-xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1C01F235C (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     _ClientToScreen @ 0x1C024BB10 (_ClientToScreen.c)
 */

__int64 __fastcall xxxTrackInitSize(
        unsigned __int64 *BugCheckParameter2,
        int a2,
        unsigned __int64 a3,
        int a4,
        struct MOVESIZEDATA *a5)
{
  unsigned __int64 v6; // rbp
  char v9; // dl
  void *v10; // r9
  int v11; // edx
  int v12; // esi
  int v13; // r8d
  int v14; // r9d
  int v15; // r15d
  int v16; // r12d
  char v17; // dl
  char v18; // r8
  int v20; // eax
  int v21; // r9d
  int v22; // r10d
  char v23; // dl
  char v24; // r8
  int v25; // r8d
  unsigned __int64 v26; // rdx
  int v27; // ecx
  int v28; // eax
  int v29; // r11d
  __int64 v30; // rax
  int v31; // r9d
  char v32; // dl
  char v33; // r8
  __int64 v34; // [rsp+40h] [rbp-68h]
  int v35; // [rsp+48h] [rbp-60h]
  int v36; // [rsp+50h] [rbp-58h]
  unsigned __int64 v37; // [rsp+60h] [rbp-48h] BYREF
  __int128 v38; // [rsp+68h] [rbp-40h] BYREF

  v6 = a3;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v9 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v9 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  v10 = &WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids;
  if ( v9 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_D(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v9,
      a3,
      (__int64)gFullLog,
      5u,
      1u,
      0x44u,
      (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
      a2);
  if ( a2 != 256 && a2 != 512 && (unsigned int)(a2 - 513) > 1 )
    return 1LL;
  LODWORD(v37) = (__int16)a4;
  HIDWORD(v37) = SHIWORD(a4);
  ClientToScreen(BugCheckParameter2, &v37, a3, v10);
  _InterlockedIncrement(&glSendMessage);
  v12 = xxxSendTransformableMessageTimeout(
          BugCheckParameter2,
          0x84u,
          0LL,
          (__int128 *)((unsigned __int16)v37 | (WORD2(v37) << 16)),
          0,
          0,
          0LL,
          1,
          0);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v11) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v13) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v13) = 0;
  }
  v15 = HIDWORD(v37);
  v16 = v37;
  if ( (_BYTE)v11 || (_BYTE)v13 )
  {
    v36 = HIDWORD(v37);
    v35 = v37;
    WPP_RECORDER_AND_TRACE_SF_ddd(WPP_GLOBAL_Control->AttachedDevice, v11, v13, v14);
  }
  switch ( a2 )
  {
    case 256:
      if ( *((_DWORD *)a5 + 44) == 9 )
        xxxSendMessage((ULONG_PTR)BugCheckParameter2);
      if ( v6 <= 0x28
        && ((_DWORD)v6 == 13 || (_DWORD)v6 == 27 || (_DWORD)v6 == 37 || (_DWORD)v6 == 38 || (unsigned int)(v6 - 39) <= 1) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (v32 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          v32 = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (v33 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          v33 = 0;
        }
        if ( v32 || v33 )
        {
          LODWORD(v34) = v6;
          WPP_RECORDER_AND_TRACE_SF_D(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v32,
            v33,
            (__int64)gFullLog,
            5u,
            1u,
            0x46u,
            (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
            v34,
            v35,
            v36);
        }
        *((_DWORD *)a5 + 50) &= ~1u;
      }
      return 1LL;
    case 512:
      if ( v6 != 1 )
      {
        v38 = *(_OWORD *)(BugCheckParameter2[5] + 88);
        if ( PtInRect(&v38, v37) && (unsigned int)(v12 - 10) <= 7 )
          xxxSendMessage((ULONG_PTR)BugCheckParameter2);
        else
          zzzSetCursor(*(struct tagCURSOR **)(gasyscur[0] + 4976LL));
        return 1LL;
      }
      goto LABEL_44;
    case 513:
      if ( !PtInRect((_DWORD *)a5 + 6, v37) )
        goto LABEL_30;
LABEL_44:
      v20 = *((_DWORD *)a5 + 44);
      if ( v20 )
      {
        if ( v20 == 9 && v12 == 2 )
        {
          xxxSendMessage((ULONG_PTR)BugCheckParameter2);
          v21 = *((_DWORD *)a5 + 30) - v16;
          v22 = *((_DWORD *)a5 + 31) - v15;
          *((_DWORD *)a5 + 42) = v21;
          *((_DWORD *)a5 + 50) &= ~1u;
          *((_DWORD *)a5 + 43) = v22;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (v23 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            v23 = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (v24 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            v24 = 0;
          }
          if ( v23 || v24 )
          {
            LODWORD(v34) = v21;
            WPP_RECORDER_AND_TRACE_SF_dd(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v23,
              v24,
              (__int64)gFullLog,
              5u,
              1u,
              0x48u,
              (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
              v34,
              v22,
              v36);
          }
        }
      }
      else if ( (unsigned int)(v12 - 10) <= 7 )
      {
        xxxSendMessage((ULONG_PTR)BugCheckParameter2);
        *((_DWORD *)a5 + 50) &= ~1u;
        v26 = 0x1C0000000uLL;
        v27 = *(_DWORD *)&aSideMove[4 * v12 + 4];
        v28 = dword_1C0320DC4[v12];
        *((_DWORD *)a5 + 46) = v28;
        *((_DWORD *)a5 + 45) = v27;
        v29 = v28 + v27;
        *((_DWORD *)a5 + 44) = v28 + v27;
        v30 = dword_1C0320E48[v28 + v27];
        v31 = *((_DWORD *)a5 + dword_1C0320E18[v29] + 30) - v16;
        *((_DWORD *)a5 + 42) = v31;
        *((_DWORD *)a5 + 43) = *((_DWORD *)a5 + v30 + 30) - v15;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v26) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v26) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (LOBYTE(v25) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          LOBYTE(v25) = 0;
        }
        if ( (_BYTE)v26 || (_BYTE)v25 )
          WPP_RECORDER_AND_TRACE_SF_ddd(WPP_GLOBAL_Control->AttachedDevice, v26, v25, v31);
      }
      return 1LL;
  }
  if ( a2 != 514 )
    return 1LL;
LABEL_30:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v17 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v17 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v18 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v18 = 0;
  }
  if ( v17 || v18 )
  {
    LODWORD(v34) = a2;
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v17,
      v18,
      (__int64)gFullLog,
      5u,
      1u,
      0x47u,
      (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
      v34,
      v35,
      v36);
  }
  bSetDevDragRect(*(Gre::Base **)(gpDispInfo + 40LL), 0LL, 0LL, 0);
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x10) != 0 )
  {
    xxxDrawDragRect(a5, 0LL, 2u);
    *(_DWORD *)(gptiCurrent + 488LL) &= ~0x10u;
  }
  *((_DWORD *)a5 + 50) &= ~1u;
  CCursorClip::ClearClip(gpCursorClip);
  xxxReleaseCapture();
  *((_DWORD *)a5 + 50) |= 8u;
  return 0LL;
}
