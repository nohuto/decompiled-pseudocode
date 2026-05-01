/*
 * XREFs of ?_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@@Z @ 0x18002152C
 * Callers:
 *     ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x180021B98 (-_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z.c)
 *     ?_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ @ 0x1800C6208 (-_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     McTemplateU0pqztp_EventWriteTransfer @ 0x180021608 (McTemplateU0pqztp_EventWriteTransfer.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x180021CA8 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     WPP_SF_lDqd @ 0x180309F14 (WPP_SF_lDqd.c)
 */

__int64 __fastcall CImmersiveApp::_SetProcessForegroundPriority(__int64 a1, int a2, void *a3, DWORD a4, __int64 a5)
{
  unsigned int v5; // ebx
  DWORD ProcessId; // r14d
  char v10; // di
  __int64 result; // rax
  __int64 v12; // r8
  char ApplicationWindow; // al
  int v14; // edx
  unsigned __int8 ProcessInformation; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0;
  ProcessId = a4;
  if ( !a4 )
    ProcessId = GetProcessId(a3);
  v10 = 1;
  ProcessInformation = a2 == 0;
  result = NtSetInformationProcess(a3, ProcessForegroundInformation, &ProcessInformation, 1u) | 0x10000000u;
  if ( (int)result < 0 )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      LOBYTE(v5) = a2 == 0;
      return WPP_SF_lDqd(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, v12, v5, ProcessId, a5, result);
    }
  }
  else
  {
    if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    {
      ApplicationWindow = (unsigned __int8)CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 288));
      result = McTemplateU0pqztp_EventWriteTransfer(
                 ProcessInformation,
                 v14,
                 a5,
                 ProcessId,
                 *(_QWORD *)(a1 + 584),
                 ProcessInformation,
                 ApplicationWindow);
    }
    *(_DWORD *)(a1 + 804) = a2;
    if ( a2 || a5 )
      v10 = 0;
    *(_BYTE *)(a1 + 816) = v10;
  }
  return result;
}
