/*
 * XREFs of ?RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180021F00
 * Callers:
 *     PbmRegisterAppClosureNotification @ 0x180028BC0 (PbmRegisterAppClosureNotification.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800095B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180021DB0 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::RegisterAppClosureNotificationClient(
        CApplicationManager *this,
        struct CProcess *a2)
{
  CApplicationManager *v3; // rbx
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  int v5; // ebx

  v3 = g_ApplicationManager;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v5 = CApplicationManager::Register(v3, a2);
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids, v5);
    }
    AudPolicyLogError("CApplicationManager::RegisterAppClosureNotificationClient", 592, v5);
  }
  else
  {
    *((_DWORD *)a2 + 114) = 1;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return (unsigned int)v5;
}
