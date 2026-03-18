/*
 * XREFs of ?_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01B6350
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C01280D0 (xxxRealInternalGetMessage.c)
 *     ?_HandleShellHandwritingDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C01B62A4 (-_HandleShellHandwritingDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C00E4DF4 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?ShellHandwritingDelegationHandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z @ 0x1C01B5AAC (-ShellHandwritingDelegationHandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z.c)
 *     ?_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x1C01B607C (-_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 *     ?_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01B64C4 (-_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 */

struct tagQMSG *__fastcall _HandleShellHandwritingDelegatedInputWorker(
        struct tagTHREADINFO *a1,
        int a2,
        struct tagQMSG *a3)
{
  __int64 v3; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  char v9; // di
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  struct tagTHREADINFO *v14; // rdx
  char v16; // [rsp+80h] [rbp+18h] BYREF

  v3 = *(_QWORD *)a3;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v16);
  if ( (*((_DWORD *)a3 + 25) & 0x100) == 0 )
  {
    InputTraceLogging::DManip::ShellHandwritingDelegationHandleDelegatedInput(a3);
    v9 = 1;
    if ( a2 != 1 )
    {
      if ( a2 != 2 )
      {
        v7 = 16LL;
        *((_DWORD *)a3 + 25) |= 0x10u;
        goto LABEL_20;
      }
      goto LABEL_18;
    }
    v10 = *((_DWORD *)a3 + 25);
    if ( (v10 & 0x20) != 0 )
    {
      v11 = *((_QWORD *)a3 + 2);
      *((_DWORD *)a3 + 25) = v10 & 0xFFFFFF9F | 0x40;
      v12 = HMValidateHandleNoSecure(v11, 1);
      if ( !v12 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
        {
          v9 = 0;
        }
        if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_qq(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v9,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)gFullLog,
            3u,
            0x12u,
            0x10u,
            (__int64)&WPP_0bd01f6e78ca3341e624bb2278b12953_Traceguids,
            *((_QWORD *)a3 + 2),
            a3);
LABEL_18:
        _AttemptToCoalesceOrDestroyMessage(a1, a3);
        goto LABEL_20;
      }
      v13 = *((_DWORD *)a3 + 25);
      if ( (v13 & 0x200) != 0 )
      {
        *((_QWORD *)a3 + 2) = 0LL;
        *((_DWORD *)a3 + 25) = v13 & 0xFFFFFDFF;
      }
      v14 = *(struct tagTHREADINFO **)(v12 + 264);
      if ( !v14 )
        v14 = *(struct tagTHREADINFO **)(v12 + 16);
      _ShellHandwritingDelegationReassignInputMessage(a1, v14, a3);
    }
  }
LABEL_20:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v16, v7, v8);
  return (struct tagQMSG *)v3;
}
