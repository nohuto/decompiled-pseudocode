/*
 * XREFs of xxxSetProcessInitState @ 0x1C0099980
 * Callers:
 *     xxxInitProcessInfo @ 0x1C00C7AC8 (xxxInitProcessInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     IszzzCalcStartCursorHideSupported @ 0x1C0099B48 (IszzzCalcStartCursorHideSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxSetProcessInitState(PVOID a1, int a2)
{
  __int64 v4; // rdx
  __int64 ProcessWin32Process; // rbx
  __int64 v6; // r8
  __int64 result; // rax
  char v8; // si
  int v9; // eax
  PDEVICE_OBJECT v10; // rcx
  int v11; // edx
  void (__fastcall *v12)(__int64, __int64); // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _KEVENT *v15; // rcx

  ProcessWin32Process = PsGetProcessWin32Process(a1);
  if ( ProcessWin32Process )
  {
LABEL_7:
    v8 = 1;
    ++gdwDeferWinEvent;
    v9 = *(_DWORD *)(ProcessWin32Process + 12);
    if ( a2 )
    {
      if ( (v9 & 0x20) == 0 )
      {
        *(_DWORD *)(ProcessWin32Process + 12) = v9 | 0x20;
        gdwPUDFlags |= 0x8000000u;
        v10 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v8 = 0;
        }
        LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v11 = 10;
          LOBYTE(v11) = v8;
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v11,
            v6,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            13,
            10,
            (__int64)&WPP_ed79ecbb4a1f3750d196ff03f8980747_Traceguids,
            ProcessWin32Process);
        }
        if ( a1 == gpepCSRSS )
          LOBYTE(a2) = a2 | 0x80;
        if ( (a2 & 0x80u) == 0 )
        {
          if ( (a2 & 0x40) == 0 )
            goto LABEL_22;
          if ( (int)IszzzCalcStartCursorHideSupported(v10, v4, v6) < 0 )
            goto LABEL_22;
          v12 = (void (__fastcall *)(__int64, __int64))qword_1C029BCF0;
          if ( !qword_1C029BCF0 )
            goto LABEL_22;
          v13 = 2000LL;
          v14 = ProcessWin32Process;
        }
        else
        {
          *(_DWORD *)(ProcessWin32Process + 12) |= 2u;
          if ( (int)IszzzCalcStartCursorHideSupported(v10, v4, v6) < 0 )
            goto LABEL_22;
          v12 = (void (__fastcall *)(__int64, __int64))qword_1C029BCF0;
          if ( !qword_1C029BCF0 )
            goto LABEL_22;
          v13 = 0LL;
          v14 = 0LL;
        }
        v12(v14, v13);
      }
    }
    else if ( (v9 & 8) == 0 )
    {
      if ( (v9 & 4) != 0 )
      {
        *(_DWORD *)(ProcessWin32Process + 12) = v9 & 0xFFFFFFFB;
        if ( (int)((__int64 (*)(void))IszzzCalcStartCursorHideSupported)() >= 0 )
        {
          if ( qword_1C029BCF0 )
            qword_1C029BCF0(0LL, 0LL);
        }
      }
      *(_DWORD *)(ProcessWin32Process + 12) |= 1u;
      v15 = *(struct _KEVENT **)(ProcessWin32Process + 16);
      if ( v15 )
      {
        if ( v15 == (struct _KEVENT *)-1LL )
          goto LABEL_22;
        KeSetEvent(v15, 1, 0);
        ObfDereferenceObject(*(PVOID *)(ProcessWin32Process + 16));
      }
      *(_QWORD *)(ProcessWin32Process + 16) = -1LL;
    }
LABEL_22:
    --gdwDeferWinEvent;
    return 0LL;
  }
  if ( !qword_1C029BCD8 )
    return 3221225659LL;
  result = qword_1C029BCD8();
  if ( (int)result < 0 )
    return result;
  if ( !qword_1C029BCE0 )
    return 3221225659LL;
  result = qword_1C029BCE0(a1);
  if ( (int)result >= 0 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(a1);
    goto LABEL_7;
  }
  return result;
}
