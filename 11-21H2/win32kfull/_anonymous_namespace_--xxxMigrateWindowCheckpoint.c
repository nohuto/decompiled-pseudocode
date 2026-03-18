/*
 * XREFs of _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x1C024B6D4
 * Callers:
 *     _anonymous_namespace_::xxxMigrateWindow @ 0x1C00B28A8 (_anonymous_namespace_--xxxMigrateWindow.c)
 *     ?MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C024AC80 (-MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _anonymous_namespace_::GetPreviousMonitorInfo @ 0x1C00B02C8 (_anonymous_namespace_--GetPreviousMonitorInfo.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x1C00B2180 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x1C00B2264 (_anonymous_namespace_--xxxNormalizeRect.c)
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z @ 0x1C00B29D0 (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEAUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x1C02371B0 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     _anonymous_namespace_::GetArrangedOptions @ 0x1C024AA70 (_anonymous_namespace_--GetArrangedOptions.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x1C024BFF0 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 */

__int64 __fastcall anonymous_namespace_::xxxMigrateWindowCheckpoint(
        const struct tagWND *a1,
        __m128i *a2,
        __int64 a3,
        struct tagRECT *a4,
        __int64 a5,
        char a6,
        int *a7)
{
  __int64 v7; // rbx
  unsigned int v11; // r14d
  char v12; // si
  char v13; // r15
  LONG bottom; // r10d
  LONG top; // ebx
  LONG right; // r9d
  _BYTE *PreviousMonitorInfo; // rax
  __m128i *v18; // rax
  __m128i v19; // xmm6
  __int64 v20; // r15
  __int64 v21; // rcx
  char v22; // r11
  __m128i *v23; // r15
  _BYTE *v24; // rax
  int v25; // r8d
  int v26; // r9d
  __int32 v27; // ecx
  unsigned int v28; // ecx
  int v29; // r8d
  unsigned __int64 v30; // rdx
  void *v31; // rdx
  void *v32; // rdx
  char ArrangedOptions; // al
  __m128i v34; // xmm6
  __m128i v35; // xmm0
  int v37; // [rsp+28h] [rbp-D8h]
  int v38; // [rsp+38h] [rbp-C8h]
  __int64 v39; // [rsp+40h] [rbp-C0h]
  LONG left; // [rsp+40h] [rbp-C0h]
  __int64 v41; // [rsp+48h] [rbp-B8h]
  __int64 v42; // [rsp+50h] [rbp-B0h]
  __int64 v43; // [rsp+58h] [rbp-A8h]
  __int64 v44; // [rsp+60h] [rbp-A0h]
  int v45; // [rsp+60h] [rbp-A0h]
  __int64 v46; // [rsp+68h] [rbp-98h]
  __int64 v47; // [rsp+70h] [rbp-90h] BYREF
  __int64 v48; // [rsp+78h] [rbp-88h] BYREF
  __int64 v49; // [rsp+80h] [rbp-80h]
  int *v50; // [rsp+88h] [rbp-78h]
  _BYTE v51[80]; // [rsp+90h] [rbp-70h] BYREF
  __m128i v52; // [rsp+E0h] [rbp-20h]
  __int128 v53; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v54; // [rsp+100h] [rbp+0h] BYREF
  __int128 v55; // [rsp+110h] [rbp+10h] BYREF
  __int64 v56; // [rsp+120h] [rbp+20h]
  __m128i v57; // [rsp+130h] [rbp+30h] BYREF
  __m128i v58; // [rsp+140h] [rbp+40h] BYREF

  v7 = a5;
  v49 = a5;
  v50 = a7;
  v11 = 0;
  v48 = a3;
  v12 = 1;
  v13 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    bottom = a4->bottom;
    top = a4->top;
    right = a4->right;
    v45 = right - a4->left;
    left = a4->left;
    LODWORD(v47) = 36;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v13,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      0x19u,
      0x24u,
      (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
      left,
      top,
      right,
      bottom,
      v45,
      bottom - top,
      v47);
    v7 = v49;
  }
  a2[3].m128i_i32[0] &= ~0x20u;
  PreviousMonitorInfo = anonymous_namespace_::GetPreviousMonitorInfo(v51, a1, a4, v7);
  v52 = *(__m128i *)PreviousMonitorInfo;
  v53 = *((_OWORD *)PreviousMonitorInfo + 1);
  v54 = *((_OWORD *)PreviousMonitorInfo + 2);
  v55 = *((_OWORD *)PreviousMonitorInfo + 3);
  v56 = *((_QWORD *)PreviousMonitorInfo + 8);
  if ( (unsigned __int8)_mm_cvtsi128_si32(v52) )
  {
    v18 = (__m128i *)anonymous_namespace_::xxxNormalizeRect((__int64)&v58, a1, a4, v48, &v53, v56, 0);
    v19 = *v18;
    v20 = v18->m128i_i64[0];
    v58 = *v18;
    v21 = v58.m128i_i64[0] - a2->m128i_i64[0];
    if ( v58.m128i_i64[0] == a2->m128i_i64[0] )
      v21 = v58.m128i_i64[1] - a2->m128i_i64[1];
    if ( v21 )
    {
      v22 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v46) = v58.m128i_i32[3] - HIDWORD(v20);
        LODWORD(v44) = v58.m128i_i32[2] - v20;
        LODWORD(v43) = v58.m128i_i32[3];
        LODWORD(v42) = v58.m128i_i32[2];
        LODWORD(v41) = HIDWORD(v20);
        LODWORD(v39) = v20;
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v22,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
          4u,
          0x19u,
          0x25u,
          (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
          v39,
          v41,
          v42,
          v43,
          v44,
          v46);
      }
      v7 = v49;
      v11 = 2;
      *a2 = v19;
    }
    else
    {
      v7 = v49;
    }
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 && (a2[3].m128i_i32[0] & 0x18) != 0 )
  {
    v23 = a2 + 1;
    v24 = anonymous_namespace_::GetPreviousMonitorInfo(v51, a1, (struct tagRECT *)&a2[1], v7);
    v52 = *(__m128i *)v24;
    v53 = *((_OWORD *)v24 + 1);
    v54 = *((_OWORD *)v24 + 2);
    v55 = *((_OWORD *)v24 + 3);
    v56 = *((_QWORD *)v24 + 8);
    if ( (unsigned __int8)_mm_cvtsi128_si32(v52) )
    {
      LODWORD(v47) = 0;
      v57 = 0LL;
      if ( (a6 & 1) == 0
        || (v58 = *v23,
            !CallShell::xxxMigrateWindowHandler(
               a1,
               2,
               (__int64 *)&v55,
               (__int64 *)&v54,
               v56,
               &v58,
               v48,
               &v57,
               (int *)&v47,
               v50)) )
      {
LABEL_59:
        ArrangedOptions = anonymous_namespace_::GetArrangedOptions((__m128i *)a2[1].m128i_i32, a1, &v54);
        v34 = *(__m128i *)anonymous_namespace_::xxxNormalizeRect(
                            (__int64)&v58,
                            a1,
                            (__m128i *)a2[1].m128i_i32,
                            v48,
                            &v53,
                            v56,
                            ArrangedOptions);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v12 = 0;
        }
        if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v35 = _mm_srli_si128(v34, 8);
          LODWORD(v46) = v35.m128i_i32[1] - v34.m128i_i32[1];
          LODWORD(v44) = _mm_cvtsi128_si32(v35) - v34.m128i_i32[0];
          LODWORD(v43) = v35.m128i_i32[1];
          LODWORD(v42) = _mm_cvtsi128_si32(v35);
          LODWORD(v41) = v34.m128i_i32[1];
          LODWORD(v39) = v34.m128i_i32[0];
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v12,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
            4u,
            0x19u,
            0x29u,
            (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
            v39,
            v41,
            v42,
            v43,
            v44,
            v46);
        }
        *v23 = v34;
        v11 |= 4u;
        return v11;
      }
      v11 |= 8u;
      if ( (_DWORD)v47 )
      {
        if ( (_DWORD)v47 != 1 )
        {
          if ( (_DWORD)v47 == 3 )
          {
            v27 = a2[3].m128i_i32[0];
            if ( (_DWORD)v55 == v57.m128i_i32[0] )
            {
              v28 = v27 & 0xFFFFFFE7 | 8;
            }
            else if ( DWORD2(v55) == v57.m128i_i32[2] )
            {
              v28 = v27 & 0xFFFFFFE7 | 0x10;
            }
            else
            {
              v28 = v27 | 0x18;
            }
            a2[3].m128i_i32[0] = v28;
            PhysicalToLogicalDPIRect(&v57, &v57, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), &v48);
            v11 |= 4u;
            v57 = *(__m128i *)WindowMargins::ExtendRect(&v58, a1, &v57);
            *v23 = v57;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
              || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
            {
              v12 = 0;
            }
            if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v30 = HIDWORD(v57.m128i_i64[0]);
              LOBYTE(v30) = v12;
              LOBYTE(v29) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_dddd(
                WPP_GLOBAL_Control->AttachedDevice,
                v30,
                v29,
                v57.m128i_i32[3],
                4,
                v37,
                38,
                v38,
                v57.m128i_i8[0],
                v57.m128i_i8[4],
                v57.m128i_i8[8],
                v57.m128i_i8[12]);
            }
            return v11;
          }
          goto LABEL_59;
        }
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v12 = 0;
        }
        if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v31 = &WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids;
          LOBYTE(v31) = v12;
          LOBYTE(v25) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v31,
            v25,
            v26,
            4,
            25,
            39,
            (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids);
        }
        a2[3].m128i_i32[0] = a2[3].m128i_i32[0] & 0xFFFFFFE5 | 2;
      }
      else
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v12 = 0;
        }
        if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v32 = &WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids;
          LOBYTE(v32) = v12;
          LOBYTE(v25) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v32,
            v25,
            v26,
            4,
            25,
            40,
            (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids);
        }
        a2[3].m128i_i32[0] &= 0xFFFFFFE5;
      }
    }
  }
  return v11;
}
