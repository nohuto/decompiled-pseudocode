/*
 * XREFs of ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x180021B98
 * Callers:
 *     ?HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z @ 0x1800214B0 (-HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z.c)
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180021A40 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180041880 (-HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?HandleNewProcess@CImmersiveApp@@UEAAXPEAX@Z @ 0x1803058F0 (-HandleNewProcess@CImmersiveApp@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@@Z @ 0x18002152C (-_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x180021CA8 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800E7D10 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800EA0F8 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     WPP_SF_lDqd @ 0x180309F14 (WPP_SF_lDqd.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveApp::_SetApplicationForegroundPriority(__int64 a1, int a2)
{
  unsigned int v4; // ebx
  CApplicationManagerUtility *ApplicationWindow; // rax
  HWND v6; // rdx
  HWND v7; // r14
  char *v8; // r8
  int Error; // esi
  __int64 v10; // r8
  char *v11; // rbp
  DWORD dwProcessId; // [rsp+70h] [rbp+8h] BYREF
  char *v13; // [rsp+80h] [rbp+18h]

  v4 = 0;
  if ( !*(_BYTE *)(a1 + 800) || a2 == *(_DWORD *)(a1 + 804) )
    return;
  ApplicationWindow = (CApplicationManagerUtility *)CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 288));
  v7 = (HWND)ApplicationWindow;
  if ( !ApplicationWindow )
  {
    v8 = *(char **)(a1 + 808);
    if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CImmersiveApp::_SetProcessForegroundPriority(a1, a2, v8, 0, 0LL);
    return;
  }
  if ( !CApplicationManagerUtility::IsValidWindow(ApplicationWindow, v6) )
    return;
  if ( !GetWindowThreadProcessId(v7, &dwProcessId) )
  {
    Error = -2147024890;
LABEL_18:
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      LOBYTE(v4) = a2 == 0;
      WPP_SF_lDqd(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, v10, v4, dwProcessId, v7, Error);
    }
    return;
  }
  v11 = (char *)OpenProcess(0x200u, 0, dwProcessId);
  v13 = v11;
  if ( v11 )
  {
    Error = 0;
  }
  else
  {
    Error = ResultFromKnownLastError();
    if ( Error < 0 )
      goto LABEL_8;
  }
  CImmersiveApp::_SetProcessForegroundPriority(a1, a2, v11, dwProcessId, (__int64)v7);
LABEL_8:
  if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v11);
  if ( Error < 0 )
    goto LABEL_18;
}
