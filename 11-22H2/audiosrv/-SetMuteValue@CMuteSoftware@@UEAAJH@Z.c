/*
 * XREFs of ?SetMuteValue@CMuteSoftware@@UEAAJH@Z @ 0x180111730
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x180021FA0 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x1800487E0 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800E3F20 (WPP_SF_q.c)
 *     WPP_SF_qd @ 0x1800E40B4 (WPP_SF_qd.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMuteSoftware::SetMuteValue(CMuteSoftware *this, int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // r8
  int v10; // eax
  _QWORD v13[8]; // [rsp+30h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v15; // [rsp+A0h] [rbp+8h] BYREF
  char *v16; // [rsp+B0h] [rbp+18h]

  v4 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Au,
      (__int64)&WPP_b59e46f8e1d3357e5cf7fea32cbfdd1a_Traceguids,
      this,
      a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v16 = (char *)this + 56;
  *((_DWORD *)this + 6) = a2;
  v6 = *((_QWORD *)this + 6);
  if ( v6 )
  {
    v15 = 50000LL;
    LOBYTE(v5) = a2 != 0;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v6 + 32LL))(
           v6,
           v5,
           0LL,
           1LL,
           &v15);
    v4 = v7;
    if ( v7 == -2147417848 || v7 == -2147023174 )
    {
      ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 6);
      v4 = 0;
    }
    else if ( v7 < 0 )
    {
      AudSrvTraceLoggingErrorHelper("CMuteSoftware::SetMuteValue", 856, v7);
      goto LABEL_17;
    }
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Bu,
      (__int64)&WPP_b59e46f8e1d3357e5cf7fea32cbfdd1a_Traceguids,
      this);
  }
  _InterlockedExchange((volatile __int32 *)this + 24, 1);
  v8 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 128LL))(g_AudioService);
  v13[0] = off_18017C9B0;
  v13[1] = this;
  v13[7] = v13;
  v10 = CSerialWorkQueue::QueueRecurringItem(v8, 0x3E8u, v9, (__int64)v13, (PTP_TIMER **)this + 13);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x355,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
      (const char *)(unsigned int)v10);
LABEL_17:
  if ( this != (CMuteSoftware *)-56LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  return v4;
}
