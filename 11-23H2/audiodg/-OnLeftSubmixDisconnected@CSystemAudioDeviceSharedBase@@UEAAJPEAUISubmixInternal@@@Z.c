/*
 * XREFs of ?OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140059830
 * Callers:
 *     <none>
 * Callees:
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x140008FF4 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140038160 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_D @ 0x14005288C (WPP_SF_D.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::OnLeftSubmixDisconnected(
        struct _RTL_CRITICAL_SECTION *this,
        struct ISubmixInternal *a2)
{
  int v4; // r9d
  int v5; // eax
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v7 = *(_OWORD *)&this[-2].LockSemaphore;
  EtwEventActivityIdControl(4LL, &v7);
  EnterCriticalSection(this - 3);
  if ( (*(unsigned __int8 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 136LL))(a2) )
    ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *, struct ISubmixInternal *))this->DebugInfo[2].CriticalSection)(
      this,
      a2);
  v4 = LODWORD(this[1].DebugInfo) - 1;
  LODWORD(this[1].DebugInfo) = v4;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, (__int64)&WPP_f9f744bd440f3e38c4fd26e2f9fecd86_Traceguids, v4);
  }
  if ( !LODWORD(this[1].DebugInfo) )
  {
    if ( LODWORD(this->SpinCount) )
    {
      v5 = CSystemAudioDeviceSharedBase::SetGraphState((unsigned __int64)&this[-8].OwningThread, 0);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x30B,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
          (const char *)(unsigned int)v5);
    }
  }
  if ( this != (struct _RTL_CRITICAL_SECTION *)120 )
    LeaveCriticalSection(this - 3);
  EtwEventActivityIdControl(4LL, &v7);
  return 0LL;
}
