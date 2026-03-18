/*
 * XREFs of UserJobCallout @ 0x1C00E2D70
 * Callers:
 *     <none>
 * Callees:
 *     ?JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z @ 0x1C0008E98 (-JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z.c)
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C009E500 (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C00A2DDC (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x1C00E2A00 (-CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00E2FC0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C00E4DF4 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1C012B370 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dq @ 0x1C01AE738 (WPP_RECORDER_AND_TRACE_SF_Dq.c)
 */

__int64 __fastcall UserJobCallout(__int64 a1)
{
  int v1; // r15d
  unsigned int v2; // esi
  struct _EJOB *v3; // r12
  struct tagPROCESSINFO *v4; // r14
  __int64 v5; // rbp
  char v6; // di
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct tagW32JOB *i; // rbx
  PDEVICE_OBJECT v11; // rcx
  int v12; // edx
  __int64 CurrentThreadWin32Thread; // rax
  struct tagPROCESSINFO *ProcessWin32Process; // rax
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  char v20; // [rsp+90h] [rbp+8h] BYREF
  char v21; // [rsp+98h] [rbp+10h] BYREF

  v1 = *(_DWORD *)(a1 + 8);
  v2 = 0;
  v3 = *(struct _EJOB **)a1;
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = 1;
  if ( v1 == 1 )
  {
    ProcessWin32Process = (struct tagPROCESSINFO *)PsGetProcessWin32Process(*(_QWORD *)(a1 + 16));
    v4 = ProcessWin32Process;
    if ( !ProcessWin32Process || !*(_QWORD *)ProcessWin32Process )
      return 0LL;
  }
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v21);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v20);
  for ( i = (struct tagW32JOB *)gpJobsList; i && *((struct _EJOB **)i + 1) != v3; i = *(struct tagW32JOB **)i )
    ;
  if ( v1 )
  {
    if ( v1 != 1 )
    {
      if ( v1 == 2 )
      {
        v11 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v6 = 0;
        }
        LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v12 = 13;
          LOBYTE(v12) = v6;
          WPP_RECORDER_AND_TRACE_SF_qq(
            WPP_GLOBAL_Control->AttachedDevice,
            v12,
            v8,
            (_DWORD)gFullLog,
            4,
            8,
            13,
            (__int64)&WPP_090d4d5f29eb3fcb74eab38ddd0f4c5f_Traceguids,
            (char)v3,
            (char)i);
        }
        if ( i )
          JobCalloutTerminate(i);
      }
      else
      {
        v11 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v6 = 0;
        }
        LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v17 = 14;
          LOBYTE(v17) = v6;
          WPP_RECORDER_AND_TRACE_SF_Dq(WPP_GLOBAL_Control->AttachedDevice, v17, v8, v9);
        }
        v2 = -1073741822;
      }
      goto LABEL_20;
    }
    if ( i )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v6 = 0;
      }
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 12;
        LOBYTE(v16) = v6;
        LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qqq(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          v8,
          (_DWORD)gFullLog,
          4,
          8,
          12,
          (__int64)&WPP_090d4d5f29eb3fcb74eab38ddd0f4c5f_Traceguids,
          (char)v3,
          (char)i,
          v5);
      }
      JobCalloutAddProcess(i, v4);
      goto LABEL_20;
    }
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v6 = 0;
    }
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = 11;
      LOBYTE(v18) = v6;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v18,
        v8,
        v9,
        4,
        8,
        11,
        (__int64)&WPP_090d4d5f29eb3fcb74eab38ddd0f4c5f_Traceguids,
        (char)v3);
    }
    goto LABEL_54;
  }
  if ( i )
  {
    if ( (_DWORD)v5 == *((_DWORD *)i + 6) )
    {
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v6 = 0;
      }
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = 10;
        LOBYTE(v19) = v6;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v19,
          v8,
          v9,
          4,
          8,
          10,
          (__int64)&WPP_090d4d5f29eb3fcb74eab38ddd0f4c5f_Traceguids);
      }
      goto LABEL_20;
    }
  }
  else
  {
    i = CreateW32Job(v3, v7, v8, v9);
    if ( !i )
    {
LABEL_54:
      v2 = -1073741823;
      goto LABEL_20;
    }
  }
  *((_DWORD *)i + 6) = v5;
  UpdateJob(i, v7, v8);
LABEL_20:
  if ( v20 )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v11, v7, v8);
    --*(_DWORD *)(CurrentThreadWin32Thread + 48);
  }
  if ( !v21 )
    UserSessionSwitchLeaveCrit(v11, v7, v8, v9);
  return v2;
}
