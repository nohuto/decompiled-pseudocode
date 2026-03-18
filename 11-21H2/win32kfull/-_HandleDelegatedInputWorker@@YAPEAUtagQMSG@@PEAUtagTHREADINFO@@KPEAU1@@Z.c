/*
 * XREFs of ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C016B120
 * Callers:
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C0004798 (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     DelQEntry @ 0x1C005BE3C (DelQEntry.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0078850 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     IsPointerInputMessage @ 0x1C00AC3A0 (IsPointerInputMessage.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00F6110 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z @ 0x1C016AFAE (-HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01DBF48 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     DelegateReleasePointerMessage @ 0x1C01EA234 (DelegateReleasePointerMessage.c)
 */

struct tagQMSG *__fastcall _HandleDelegatedInputWorker(struct tagTHREADINFO *a1, unsigned int a2, struct tagQMSG *a3)
{
  __int64 v3; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  char v9; // di
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // ecx
  int v14; // edx
  __int64 v15; // r8
  __int64 v17; // [rsp+48h] [rbp-20h]
  char v18; // [rsp+80h] [rbp+18h] BYREF

  v3 = *(_QWORD *)a3;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v18);
  if ( (*((_DWORD *)a3 + 25) & 0x100) == 0 )
  {
    EtwTraceBeginDelegatedInputWorker(a3, a2);
    InputTraceLogging::DManip::HandleDelegatedInput(a3);
    v9 = 1;
    if ( a2 == 1 )
    {
      v10 = *((_DWORD *)a3 + 25);
      if ( (v10 & 0x20) != 0 )
      {
        v11 = *((_QWORD *)a3 + 2);
        *((_DWORD *)a3 + 25) = v10 & 0xFFFFFF9F | 0x40;
        v12 = HMValidateHandleNoSecure(v11, 1);
        if ( v12 )
        {
          v13 = *((_DWORD *)a3 + 25);
          if ( (v13 & 0x200) != 0 )
          {
            *((_QWORD *)a3 + 2) = 0LL;
            *((_DWORD *)a3 + 25) = v13 & 0xFFFFFDFF;
          }
          ReassignInputMessage(a1, *(struct tagTHREADINFO **)(v12 + 16), a3);
          goto LABEL_25;
        }
LABEL_9:
        if ( !IsPointerInputMessage(*((_DWORD *)a3 + 6)) || !(unsigned int)DelegateReleasePointerMessage(a1, a3) )
        {
          CleanEventMessage(a3);
          DelQEntry(*((_QWORD *)a1 + 54) + 24LL, (__int64)a3, 1);
        }
        v15 = *((_QWORD *)a1 + 54);
        if ( *(struct tagQMSG **)(v15 + 80) == a3 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
            || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            LOBYTE(v14) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v9 = 0;
          }
          if ( (_BYTE)v14 || v9 )
          {
            v17 = *(_QWORD *)(v15 + 80);
            LOBYTE(v15) = v9;
            WPP_RECORDER_AND_TRACE_SF_qq(
              WPP_GLOBAL_Control->AttachedDevice,
              v14,
              v15,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              5,
              18,
              12,
              (__int64)&WPP_2f2057662fc63cc3a929ce6289f6f23a_Traceguids,
              *((_QWORD *)a1 + 54),
              v17);
          }
          *(_QWORD *)(*((_QWORD *)a1 + 54) + 80LL) = 0LL;
        }
      }
    }
    else
    {
      if ( a2 == 2 )
        goto LABEL_9;
      *((_DWORD *)a3 + 25) |= 0x10u;
    }
LABEL_25:
    EtwTraceEndDelegatedInputWorker(a3, a2);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v18, v7, v8);
  return (struct tagQMSG *)v3;
}
