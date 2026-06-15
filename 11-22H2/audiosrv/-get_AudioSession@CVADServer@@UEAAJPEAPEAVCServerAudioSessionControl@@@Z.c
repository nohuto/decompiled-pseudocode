/*
 * XREFs of ?get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z @ 0x180051A40
 * Callers:
 *     AudioServerGetAudioSession @ 0x180051950 (AudioServerGetAudioSession.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x180051B5C (-HasTooManyReferences@@YA_NPEAUIUnknown@@@Z.c)
 *     ?AddClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x1800528E4 (-AddClientReference@CServerAudioSessionControl@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800DDCF8 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800DDE94 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x1800E3F20 (WPP_SF_q.c)
 */

__int64 __fastcall CVADServer::get_AudioSession(CVADServer *this, struct CServerAudioSessionControl **a2)
{
  unsigned int v2; // ebx
  CServerAudioSessionControl **v5; // rdi
  struct _RTL_CRITICAL_SECTION *v6; // rbp
  __int64 v7; // r8

  v2 = 0;
  if ( *((_DWORD *)this + 40) )
  {
    v5 = (CServerAudioSessionControl **)((char *)this + 136);
    if ( !*((_QWORD *)this + 17) )
    {
      v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
      if ( !*v5 )
      {
        LOBYTE(v7) = 1;
        v2 = (***((__int64 (__fastcall ****)(_QWORD, _QWORD, __int64, _QWORD, CServerAudioSessionControl **))this + 16))(
               *((_QWORD *)this + 16),
               *((unsigned int *)this + 10),
               v7,
               *((_QWORD *)this + 18),
               v5);
      }
      if ( v6 )
        LeaveCriticalSection(v6);
      if ( v2 )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_09ae8f41bb453bc35d3b802f4338d8f9_Traceguids, v2);
        }
        goto LABEL_12;
      }
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_09ae8f41bb453bc35d3b802f4338d8f9_Traceguids, *v5);
      }
    }
    if ( HasTooManyReferences((struct IUnknown *)(((unsigned __int64)*v5 + 8) & -(__int64)(*v5 != 0LL))) )
    {
      v2 = -2147024882;
      goto LABEL_26;
    }
    *a2 = *v5;
    CServerAudioSessionControl::AddClientReference(*v5);
LABEL_12:
    if ( (v2 & 0x80000000) == 0 )
      return v2;
LABEL_26:
    AudSrvTraceLoggingErrorHelper("CVADServer::get_AudioSession", 1277, v2);
    return v2;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_09ae8f41bb453bc35d3b802f4338d8f9_Traceguids);
  }
  return 2290679809LL;
}
