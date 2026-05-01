/*
 * XREFs of ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x180026FAC
 * Callers:
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180020860 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z @ 0x18006CD50 (-HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z.c)
 *     ?HandleNewProcess@CImmersiveApp@@UEAAXPEAX@Z @ 0x1803C1D90 (-HandleNewProcess@CImmersiveApp@@UEAAXPEAX@Z.c)
 *     ?HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x1803C1E80 (-HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windo.c)
 * Callees:
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800119A0 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x180028808 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ?_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@@Z @ 0x180042930 (-_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 *     WPP_SF_lDqd @ 0x1803C6468 (WPP_SF_lDqd.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveApp::_SetApplicationForegroundPriority(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebx
  CApplicationManagerUtility *ApplicationWindow; // rax
  HWND v6; // rdx
  HWND v7; // r14
  __int64 v8; // r8
  __int64 v9; // r8
  char *v10; // rbp
  int Error; // edi
  __int64 v12; // [rsp+20h] [rbp-48h]
  DWORD dwProcessId; // [rsp+70h] [rbp+8h] BYREF
  char *v14; // [rsp+88h] [rbp+20h]

  v4 = 0;
  if ( !*(_BYTE *)(a1 + 800) || a2 == *(_DWORD *)(a1 + 804) )
    return;
  ApplicationWindow = (CApplicationManagerUtility *)CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 288));
  v7 = (HWND)ApplicationWindow;
  if ( !ApplicationWindow )
  {
    v8 = *(_QWORD *)(a1 + 808);
    if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CImmersiveApp::_SetProcessForegroundPriority(a1, a2, v8);
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
      LODWORD(v12) = dwProcessId;
      WPP_SF_lDqd(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, v9, v4, v12, v7, Error);
    }
    return;
  }
  v10 = (char *)OpenProcess(0x200u, 0, dwProcessId);
  v14 = v10;
  if ( v10 )
  {
    Error = 0;
  }
  else
  {
    Error = ResultFromKnownLastError();
    if ( Error < 0 )
      goto LABEL_12;
  }
  HIDWORD(v12) = HIDWORD(v7);
  CImmersiveApp::_SetProcessForegroundPriority(a1, a2, v10);
LABEL_12:
  if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v10);
  if ( Error < 0 )
    goto LABEL_18;
}
