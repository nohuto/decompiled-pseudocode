/*
 * XREFs of ?NotifyAudioDGTerminated@CMuteSoftware@@UEAAXXZ @ 0x1801110F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x1800487E0 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x1800E3F20 (WPP_SF_q.c)
 */

void __fastcall CMuteSoftware::NotifyAudioDGTerminated(CMuteSoftware *this)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Fu,
      (__int64)&WPP_b59e46f8e1d3357e5cf7fea32cbfdd1a_Traceguids,
      this);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 6);
  if ( this != (CMuteSoftware *)-56LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
}
