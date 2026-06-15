/*
 * XREFs of ?OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z @ 0x180020EBC
 * Callers:
 *     PbmSwitchSoftNonInteractiveAppsToHardNonInteractive @ 0x180029260 (PbmSwitchSoftNonInteractiveAppsToHardNonInteractive.c)
 * Callees:
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180020FAC (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::OnSoftNonInteractiveAppsSwitchToHardNonInteractive(
        CApplicationManager *this,
        int a2)
{
  CApplicationManager *v3; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rdx

  v3 = g_ApplicationManager;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x36u, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids, a2);
  }
  v5 = (_QWORD *)*((_QWORD *)v3 + 9);
  while ( v5 )
  {
    v6 = v5[2];
    v5 = (_QWORD *)*v5;
    if ( *(_DWORD *)(v6 + 212) == a2 && *(_DWORD *)(v6 + 652) && *(_QWORD *)(v6 + 600) )
      CApplicationManager::ProcessInteractivityNotification(v3, *(_QWORD *)(v6 + 24), *(_QWORD *)(v6 + 696), 1LL, a2);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
