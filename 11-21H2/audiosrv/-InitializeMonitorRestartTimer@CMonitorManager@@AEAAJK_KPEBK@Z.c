/*
 * XREFs of ?InitializeMonitorRestartTimer@CMonitorManager@@AEAAJK_KPEBK@Z @ 0x1800442D0
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x1800443EC (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18004DA6C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x1800C9BAC (WPP_SF_q.c)
 */

__int64 __fastcall CMonitorManager::InitializeMonitorRestartTimer(
        char *pv,
        __int64 a2,
        __int64 a3,
        const unsigned int *a4)
{
  unsigned int v5; // edi
  PTP_TIMER ThreadpoolTimer; // rax
  signed int LastError; // eax
  signed int v9; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  v5 = 0;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 55LL, &WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids, pv);
  }
  v11 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(pv + 256);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  ThreadpoolTimer = CreateThreadpoolTimer(CMonitorManager::OnCheckForMonitorRestartWorker, pv, 0LL);
  *((_QWORD *)pv + 37) = ThreadpoolTimer;
  if ( ThreadpoolTimer )
  {
    *((_QWORD *)pv + 38) = 0LL;
    *((_QWORD *)pv + 40) = &dword_18017DEF0;
    *((_QWORD *)pv + 39) = 9LL;
    *((_DWORD *)pv + 82) = 18;
  }
  else
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    v5 = v9;
    if ( v9 < 0
      && WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        56LL,
        &WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
        (unsigned int)v9);
    }
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
