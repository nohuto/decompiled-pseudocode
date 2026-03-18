/*
 * XREFs of _anonymous_namespace_::xxxMigrateWindowPosition @ 0x1C00B1A70
 * Callers:
 *     _anonymous_namespace_::xxxMigrateWindow @ 0x1C00B28A8 (_anonymous_namespace_--xxxMigrateWindow.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C006F980 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C007BAF4 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     _anonymous_namespace_::GetPreviousMonitorInfo @ 0x1C00B02C8 (_anonymous_namespace_--GetPreviousMonitorInfo.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x1C00B2180 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x1C00B2264 (_anonymous_namespace_--xxxNormalizeRect.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1C015C47C (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEAUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x1C02371B0 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     _anonymous_namespace_::GetArrangedOptions @ 0x1C024AA70 (_anonymous_namespace_--GetArrangedOptions.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C024ADB8 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 */

__int64 __fastcall anonymous_namespace_::xxxMigrateWindowPosition(
        struct tagWND *a1,
        __int64 a2,
        struct tagRECT *a3,
        __int64 a4,
        unsigned int a5)
{
  struct tagRECT *v6; // r14
  __int64 v7; // r13
  _BYTE *PreviousMonitorInfo; // rax
  int v10; // edx
  int v11; // r8d
  struct tagRECT v13; // xmm6
  char v14; // bl
  char v15; // r15
  int v16; // edi
  int v17; // r14d
  __int64 v18; // rcx
  const char *v19; // rax
  struct tagRECT *Prop; // rax
  int v21; // edx
  int v22; // r8d
  int v23; // r9d
  _BYTE *v24; // rax
  int v25; // edx
  const struct AdvancedWindowPos::WINDOWPOSANDSTATE *v26; // r8
  int v27; // r9d
  struct tagRECT v28; // xmm0
  __int64 v29; // r8
  int v30; // [rsp+28h] [rbp-E0h]
  int v31; // [rsp+30h] [rbp-D8h]
  _DWORD v32[4]; // [rsp+78h] [rbp-90h] BYREF
  struct tagRECT v33; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v34[80]; // [rsp+98h] [rbp-70h] BYREF
  __m128i v35; // [rsp+E8h] [rbp-20h]
  __int128 v36; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v37; // [rsp+108h] [rbp+0h] BYREF
  __int128 v38; // [rsp+118h] [rbp+10h] BYREF
  __int64 v39; // [rsp+128h] [rbp+20h]
  __m128i v40; // [rsp+138h] [rbp+30h] BYREF
  _OWORD v41[3]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v42; // [rsp+178h] [rbp+70h]
  struct tagRECT v43; // [rsp+188h] [rbp+80h] BYREF
  _OWORD v44[2]; // [rsp+198h] [rbp+90h] BYREF
  __int128 v45; // [rsp+1B8h] [rbp+B0h]
  struct tagRECT v46; // [rsp+1C8h] [rbp+C0h] BYREF

  v6 = a3;
  v7 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      25,
      42,
      (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
      v6->left,
      v6->top,
      v6->right,
      v6->bottom,
      v6->right - v6->left,
      LOBYTE(v6->bottom) - v6->top);
  }
  PreviousMonitorInfo = anonymous_namespace_::GetPreviousMonitorInfo(&v40, a1, v6, a4);
  v35 = *(__m128i *)PreviousMonitorInfo;
  v36 = *((_OWORD *)PreviousMonitorInfo + 1);
  v37 = *((_OWORD *)PreviousMonitorInfo + 2);
  v38 = *((_OWORD *)PreviousMonitorInfo + 3);
  v39 = *((_QWORD *)PreviousMonitorInfo + 8);
  if ( !(unsigned __int8)_mm_cvtsi128_si32(v35) )
    return 0LL;
  v13 = *v6;
  v14 = 0;
  v15 = 0;
  v16 = 1;
  v17 = 524308;
  v43 = v13;
  if ( (dword_1C032CF64 & 1) != 0 && IsSemiMaximized(a1) )
  {
    v32[0] = 0;
    v33 = v13;
    v15 = 1;
    LOWORD(v30) = v39;
    v46 = 0LL;
    if ( (unsigned __int8)CallShell::xxxMigrateWindowHandler(v18, a4 == 0, &v38, &v37, v30, &v33, v7, &v46, v32, &a5) )
    {
      if ( v32[0] != 3 )
      {
        LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = "maximized";
          if ( v32[0] != 1 )
            v19 = "restored";
          LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_s(
            WPP_GLOBAL_Control->AttachedDevice,
            v10,
            v11,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            25,
            44,
            (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
            (__int64)v19);
        }
        Prop = (struct tagRECT *)GetProp((__int64)a1, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1u);
        if ( Prop )
        {
          v43 = *Prop;
        }
        else
        {
          LOBYTE(v21) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
          if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v21,
              v22,
              v23,
              2,
              25,
              45,
              (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids);
          }
        }
        v24 = anonymous_namespace_::GetPreviousMonitorInfo(v34, a1, &v43, a4);
        v40 = *(__m128i *)v24;
        v41[0] = *((_OWORD *)v24 + 1);
        v41[1] = *((_OWORD *)v24 + 2);
        v41[2] = *((_OWORD *)v24 + 3);
        v42 = *((_QWORD *)v24 + 8);
        if ( (unsigned __int8)_mm_cvtsi128_si32(v40) )
        {
          LOWORD(v31) = v42;
          v28 = *(struct tagRECT *)anonymous_namespace_::xxxNormalizeRect(&v33, a1, &v43, v7, v41, v31, 1);
          v43 = v28;
        }
        else
        {
          LOBYTE(v25) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
          LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v25,
              (_DWORD)v26,
              v27,
              2,
              25,
              46,
              (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids);
          v28 = v43;
        }
        *(_QWORD *)&v44[0] = 0LL;
        *((_QWORD *)&v44[0] + 1) = v32[0] | 0x5F00000000LL;
        LODWORD(v45) = a5;
        v44[1] = v28;
        AdvancedWindowPos::xxxApplyWindowPos(a1, (struct tagWND *)v44, v26);
        v29 = 2LL;
        goto LABEL_80;
      }
      LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          v11,
          (unsigned int)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
          4,
          25,
          43,
          (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids);
      }
      v17 = 13107220;
      v43 = v46;
      v14 = 1;
    }
    else
    {
      v16 = anonymous_namespace_::GetArrangedOptions(&v43, a1, &v37, (unsigned __int16)v39) | 1;
    }
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
  {
    LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v11,
        (unsigned int)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
        4,
        25,
        47,
        (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids);
    }
    *(_QWORD *)&v44[0] = v7;
    memset((char *)v44 + 8, 0, 21);
    v45 = 0LL;
    xxxMinMaximizeEx(a1, 3LL, 87LL, v44);
  }
  else
  {
    if ( !v14 )
    {
      LOWORD(v31) = v39;
      v43 = *(struct tagRECT *)anonymous_namespace_::xxxNormalizeRect(&v33, a1, &v43, v7, &v36, v31, v16);
    }
    LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v11,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        25,
        48,
        (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
        v43.left,
        v43.top,
        v43.right,
        v43.bottom,
        LOBYTE(v43.right) - LOBYTE(v43.left),
        LOBYTE(v43.bottom) - LOBYTE(v43.top));
    }
    xxxSetWindowPos(
      a1,
      0LL,
      (unsigned int)v43.left,
      (unsigned int)v43.top,
      v43.right - v43.left,
      v43.bottom - v43.top,
      v17);
  }
  if ( !v15 )
    return 1LL;
  v29 = 1LL;
LABEL_80:
  NotifyShell::ArrangementCompleted(a1, a5, v29);
  return 1LL;
}
