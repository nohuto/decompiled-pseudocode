/*
 * XREFs of ?xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C020F498
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C020EBC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     PtiCurrentShared @ 0x1C00418E4 (PtiCurrentShared.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Feature_1133322554__private_IsEnabled@@YAHXZ @ 0x1C015AD5C (-Feature_1133322554__private_IsEnabled@@YAHXZ.c)
 *     ?IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z @ 0x1C020AA90 (-IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxWindowSizeStartingHandler@CallShell@@YAXPEAUtagWND@@H@Z @ 0x1C0237D20 (-xxxWindowSizeStartingHandler@CallShell@@YAXPEAUtagWND@@H@Z.c)
 */

void __fastcall xxxQueryShellForSizeCooperation(struct MOVESIZEDATA *a1, __int64 a2, __int64 a3, int a4)
{
  bool v5; // dl
  int v6; // r8d
  bool v7; // dl
  bool v8; // dl
  int v9; // edx
  int v10; // r8d
  int v11; // esi
  int v12; // r8d
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD v19[4]; // [rsp+50h] [rbp-28h] BYREF

  v19[2] = 0LL;
  if ( (*((_DWORD *)a1 + 50) & 2) != 0 )
  {
    v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        a4,
        4,
        1,
        11,
        (__int64)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids);
  }
  else
  {
    v6 = *((_DWORD *)a1 + 44);
    if ( (unsigned int)(v6 - 1) <= 2 || v6 == 6 )
    {
      v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v8,
          v6,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          1,
          12,
          (__int64)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids,
          *((_DWORD *)a1 + 44));
      }
      if ( IsWindowSubjectToShellSizingPolicy(*((struct tagWND **)a1 + 2)) )
      {
        v11 = *((_DWORD *)a1 + 44);
        if ( (unsigned int)Feature_1133322554__private_IsEnabled() )
        {
          v13 = *((_QWORD *)a1 + 2);
          v14 = PtiCurrentShared();
          v19[0] = *(_QWORD *)(v14 + 416);
          *(_QWORD *)(v14 + 416) = v19;
          v19[1] = v13;
          HMLockObject(v13);
          CallShell::xxxWindowSizeStartingHandler(
            *((CallShell **)a1 + 2),
            (struct tagWND *)(unsigned int)(v11 + 9),
            v15);
          ThreadUnlock1(v17, v16, v18);
        }
        else
        {
          CallShell::xxxWindowSizeStartingHandler(
            *((CallShell **)a1 + 2),
            (struct tagWND *)(unsigned int)(v11 + 9),
            v12);
        }
      }
      else
      {
        LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v9,
            v10,
            14,
            4,
            1,
            14,
            (__int64)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids,
            *((_QWORD *)a1 + 2));
        }
      }
    }
    else
    {
      v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v7,
          v6,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          1,
          13,
          (__int64)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids,
          *((_DWORD *)a1 + 44));
      }
    }
  }
}
