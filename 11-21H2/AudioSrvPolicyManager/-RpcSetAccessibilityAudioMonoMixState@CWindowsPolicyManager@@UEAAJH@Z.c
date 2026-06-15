/*
 * XREFs of ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x18000C880
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000C5FC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x18000C630 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionIdAreAccessibilityAudioSettingsInitialized@@YA_NK@Z @ 0x18002E4D0 (-TsSessionIdAreAccessibilityAudioSettingsInitialized@@YA_NK@Z.c)
 *     ?TsSessionIdGetAccessibilityAudioMonoMixState@@YA_NK@Z @ 0x18002ECF0 (-TsSessionIdGetAccessibilityAudioMonoMixState@@YA_NK@Z.c)
 *     ?TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z @ 0x18002F0DC (-TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWindowsPolicyManager::RpcSetAccessibilityAudioMonoMixState(CWindowsPolicyManager *this, int a2)
{
  int Process; // eax
  unsigned int v3; // ebx
  HKEY v5; // rbx
  DWORD v6; // eax
  DWORD v7; // esi
  bool v8; // di
  unsigned int v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  int v14; // r14d
  struct _RTL_CRITICAL_SECTION *v15; // rdi
  struct TSSession *v16; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int Data; // [rsp+98h] [rbp+38h] BYREF
  HKEY phkResult; // [rsp+A0h] [rbp+40h] BYREF
  HKEY hKey; // [rsp+A8h] [rbp+48h] BYREF

  Data = a2;
  phkResult = 0LL;
  Process = CWindowsPolicyManager::RpcGetProcess(this, 0LL, (struct IAudioProcess **)&phkResult);
  v3 = Process;
  if ( Process >= 0 )
  {
    v5 = phkResult;
    v6 = (*(__int64 (__fastcall **)(HKEY))(*(_QWORD *)phkResult + 48LL))(phkResult);
    v7 = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(HKEY))(*(_QWORD *)v5 + 16LL))(v5);
      return 0LL;
    }
    if ( !TsSessionIdAreAccessibilityAudioSettingsInitialized(v6) )
      TsSessionIdInitAccessibilityAudioSettings(v7, 0);
    v8 = Data != 0;
    if ( TsSessionIdGetAccessibilityAudioMonoMixState(v7) != v8 )
    {
      v9 = RpcImpersonateClient(0LL);
      if ( v9 )
      {
        v10 = wil::details::in1diag3::Return_Win32(
                retaddr,
                607LL,
                (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
                (const char *)v9);
        (*(void (__fastcall **)(HKEY))(*(_QWORD *)v5 + 16LL))(v5);
        return v10;
      }
      phkResult = 0LL;
      v11 = RegOpenCurrentUser(0xF003Fu, &phkResult);
      if ( v11 )
      {
        v10 = wil::details::in1diag3::Return_Win32(
                retaddr,
                612LL,
                (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
                (const char *)v11);
        if ( phkResult )
          RegCloseKey(phkResult);
LABEL_28:
        RpcRevertToSelf();
        (*(void (__fastcall **)(HKEY))(*(_QWORD *)v5 + 16LL))(v5);
        return v10;
      }
      hKey = 0LL;
      v12 = RegCreateKeyExW(phkResult, L"Software\\Microsoft\\Multimedia\\Audio", 0, 0LL, 0, 0xF003Fu, 0LL, &hKey, 0LL);
      if ( v12 )
      {
        v10 = wil::details::in1diag3::Return_Win32(
                retaddr,
                615LL,
                (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
                (const char *)v12);
        if ( hKey )
          RegCloseKey(hKey);
        if ( phkResult )
          RegCloseKey(phkResult);
        goto LABEL_28;
      }
      v13 = RegSetValueExW(hKey, L"AccessibilityMonoMixState", 0, 4u, (const BYTE *)&Data, 4u);
      if ( v13 )
      {
        v10 = wil::details::in1diag3::Return_Win32(
                retaddr,
                617LL,
                (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
                (const char *)v13);
        if ( hKey )
          RegCloseKey(hKey);
        if ( phkResult )
          RegCloseKey(phkResult);
        goto LABEL_28;
      }
      v14 = Data;
      v15 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
      if ( (int)TsSessionFromSessionId(v7, 1, &v16) >= 0 && *((_DWORD *)v16 + 268) )
        *((_DWORD *)v16 + 269) = v14;
      if ( v15 )
        LeaveCriticalSection(v15);
      if ( hKey )
        RegCloseKey(hKey);
      if ( phkResult )
        RegCloseKey(phkResult);
      RpcRevertToSelf();
    }
    (*(void (__fastcall **)(HKEY))(*(_QWORD *)v5 + 16LL))(v5);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x24E,
    (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
    (const char *)(unsigned int)Process);
  if ( phkResult )
    (*(void (__fastcall **)(HKEY))(*(_QWORD *)phkResult + 16LL))(phkResult);
  return v3;
}
