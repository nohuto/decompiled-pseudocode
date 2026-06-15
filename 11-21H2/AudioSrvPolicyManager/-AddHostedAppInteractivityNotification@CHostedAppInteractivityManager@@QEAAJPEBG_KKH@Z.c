/*
 * XREFs of ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x180025F90
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x1800260D0 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z.c)
 *     ?HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z @ 0x180027960 (-HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800095B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x1800263A8 (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedA.c)
 *     ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z @ 0x180026864 (-QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z.c)
 *     ?RemoveCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAXPEAVCHostedAppInteractivity@@@Z @ 0x1800269E4 (-RemoveCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAXPEAVCHostedAppInter.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CHostedAppInteractivityManager::AddHostedAppInteractivityNotification(
        CHostedAppInteractivityManager *this,
        const unsigned __int16 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5)
{
  CHostedAppInteractivityManager *v8; // rcx
  int CumulativeHostedAppInteractivity; // edi
  struct CHostedAppInteractivity *v10; // rsi
  CHostedAppInteractivityManager *v11; // rcx
  int v12; // ebx
  BOOL v13; // edx
  struct CHostedAppInteractivity *v15; // [rsp+70h] [rbp+8h] BYREF

  v15 = 0LL;
  EnterCriticalSection(&CriticalSection);
  CumulativeHostedAppInteractivity = CHostedAppInteractivityManager::GetCumulativeHostedAppInteractivity(
                                       v8,
                                       a2,
                                       a3,
                                       a4,
                                       &v15);
  if ( CumulativeHostedAppInteractivity < 0 )
    goto LABEL_11;
  v10 = v15;
  v11 = (CHostedAppInteractivityManager *)*((unsigned int *)v15 + 3);
  if ( a5 )
  {
    v12 = (_DWORD)v11 + 1;
LABEL_6:
    *((_DWORD *)v15 + 3) = v12;
    goto LABEL_7;
  }
  v12 = *((_DWORD *)v15 + 3);
  if ( (_DWORD)v11 )
  {
    v12 = (_DWORD)v11 - 1;
    goto LABEL_6;
  }
LABEL_7:
  v13 = v12 != 0;
  if ( ((_DWORD)v11 != 0) == v13
    || (CumulativeHostedAppInteractivity = CHostedAppInteractivityManager::QueueHostedAppInteractivityChangedWorkItem(
                                             v11,
                                             a2,
                                             a3,
                                             a4,
                                             v13),
        CumulativeHostedAppInteractivity >= 0) )
  {
    if ( !v12 )
      CHostedAppInteractivityManager::RemoveCumulativeHostedAppInteractivity(v11, v10);
    goto LABEL_16;
  }
LABEL_11:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x10u,
      &WPP_1c004e7844a83aef02453228989ecd61_Traceguids,
      CumulativeHostedAppInteractivity);
  }
  AudPolicyLogError(
    "CHostedAppInteractivityManager::AddHostedAppInteractivityNotification",
    411,
    CumulativeHostedAppInteractivity);
LABEL_16:
  LeaveCriticalSection(&CriticalSection);
  return (unsigned int)CumulativeHostedAppInteractivity;
}
