/*
 * XREFs of ?OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x14000A150
 * Callers:
 *     <none>
 * Callees:
 *     ?SubmixInfluencesSaDeviceState@CSystemAudioDeviceSharedBase@@IEAA_NPEAUISubmixInternal@@@Z @ 0x140008CDC (-SubmixInfluencesSaDeviceState@CSystemAudioDeviceSharedBase@@IEAA_NPEAUISubmixInternal@@@Z.c)
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x140008FF4 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x14004A26C (--1TraceLoggingThreadActivityIdSetter@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_D @ 0x1400528CC (WPP_SF_D.c)
 *     WPP_SF_q @ 0x14005A1C0 (WPP_SF_q.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::OnLeftSubmixStopped(
        struct _RTL_CRITICAL_SECTION *this,
        struct ISubmixInternal *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  int v8[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(_OWORD *)v8 = *(_OWORD *)&this[-2].LockSemaphore;
  v9 = *(_OWORD *)v8;
  EtwEventActivityIdControl(4LL, &v9);
  if ( !CSystemAudioDeviceSharedBase::SubmixInfluencesSaDeviceState(
          (CSystemAudioDeviceSharedBase *)&this[-8].OwningThread,
          a2) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        29LL,
        &WPP_f9f744bd440f3e38c4fd26e2f9fecd86_Traceguids,
        a2,
        *(_QWORD *)v8,
        *(_QWORD *)&v8[2]);
    }
    goto LABEL_8;
  }
  v4 = this - 3;
  EnterCriticalSection(this - 3);
  --HIDWORD(this[1].DebugInfo);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_f9f744bd440f3e38c4fd26e2f9fecd86_Traceguids);
  }
  if ( HIDWORD(this[1].DebugInfo)
    || (v5 = CSystemAudioDeviceSharedBase::SetGraphState((unsigned __int64)&this[-8].OwningThread, 1), v6 = v5, v5 >= 0) )
  {
    if ( v4 )
      LeaveCriticalSection(v4);
LABEL_8:
    EtwEventActivityIdControl(4LL, &v9);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2E8,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
    (const char *)(unsigned int)v5,
    v8[0]);
  if ( v4 )
    LeaveCriticalSection(v4);
  TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter((TraceLoggingThreadActivityIdSetter *)v8);
  return v6;
}
