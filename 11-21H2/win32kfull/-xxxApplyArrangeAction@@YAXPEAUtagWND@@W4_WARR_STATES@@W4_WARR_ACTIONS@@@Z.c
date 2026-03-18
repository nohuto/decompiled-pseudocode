/*
 * XREFs of ?xxxApplyArrangeAction@@YAXPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@@Z @ 0x1C020BB18
 * Callers:
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C020BEC4 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x1C00CA760 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     xxxSysCommand @ 0x1C011BA1C (xxxSysCommand.c)
 *     WPP_RECORDER_AND_TRACE_SF_sq @ 0x1C0210374 (WPP_RECORDER_AND_TRACE_SF_sq.c)
 *     ?xxxMigrateWindowToMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@K@Z @ 0x1C024BD78 (-xxxMigrateWindowToMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@K@Z.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1C024BDB4 (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 */

void __fastcall xxxApplyArrangeAction(struct tagWND *a1, int a2, int a3)
{
  int v3; // ebx
  int v4; // eax
  unsigned int v6; // esi
  __int64 v7; // rdx
  const char *v8; // r9
  __int64 v9; // rax
  unsigned int v10; // r9d
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8

  v3 = a3;
  v4 = a2;
  v6 = 2;
  if ( !a3 )
  {
    if ( (unsigned int)(a2 - 1) <= 2 )
      v6 = 6;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      LOBYTE(a2) = 0;
    }
    else
    {
      a2 = 1;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_sq(WPP_GLOBAL_Control->AttachedDevice, a2, a3, (_DWORD)WPP_GLOBAL_Control);
    }
    v14 = v6;
    v13 = 3LL;
    goto LABEL_58;
  }
  v7 = 1LL;
  switch ( a3 )
  {
    case 1:
      v12 = 0;
      if ( (unsigned int)(v4 - 1) <= 2 )
        v12 = 4;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        LOBYTE(v7) = 0;
      }
      if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_sq(WPP_GLOBAL_Control->AttachedDevice, v7, a3, (_DWORD)WPP_GLOBAL_Control);
      }
      v13 = 6LL;
      v14 = v12 | gdwPUDFlags & 0x10000u;
LABEL_58:
      xxxMinMaximize((__int64)a1, v13, v14);
      return;
    case 2:
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        LOBYTE(v7) = 0;
      }
      if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v7,
          a3,
          (_DWORD)WPP_GLOBAL_Control,
          4,
          25,
          41,
          (__int64)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids,
          *(_QWORD *)a1);
      }
      xxxSysCommand(a1, 61730, 0LL);
      break;
    case 3:
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        LOBYTE(v7) = 0;
      }
      if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v7,
          a3,
          (_DWORD)WPP_GLOBAL_Control,
          4,
          25,
          42,
          (__int64)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids,
          *(_QWORD *)a1);
      }
      AdvancedWindowPos::xxxVerticalMaximize(a1, (struct tagWND *)v7);
      break;
    default:
      if ( (unsigned int)(a3 - 6) <= 1 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          LOBYTE(v7) = 0;
        }
        if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v8 = "Right";
          if ( a3 != 6 )
            v8 = "Left";
          LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_sq(WPP_GLOBAL_Control->AttachedDevice, v7, a3, (_DWORD)v8);
        }
        v9 = ValidateHmonitor(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL), v7);
        if ( v3 == 6 )
        {
          v11 = *(_QWORD *)(v9 + 96);
          if ( v11 == gpDispInfo + 144LL )
            v11 = *(_QWORD *)(gpDispInfo + 144LL);
        }
        else
        {
          v11 = *(_QWORD *)(v9 + 104);
          if ( v11 == gpDispInfo + 144LL )
            v11 = *(_QWORD *)(gpDispInfo + 152LL);
        }
        AdvancedWindowPos::xxxMigrateWindowToMonitor(a1, (struct tagWND *)(v11 - 96), 0LL, v10);
      }
      break;
  }
}
