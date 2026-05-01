/*
 * XREFs of ?IsTargetAppWindow@CopilotHotkeyManager@@SA_NPEAUHWND__@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18027154C
 * Callers:
 *     ?EnumWindowsCallback@CopilotHotkeyManager@@SAHPEAUHWND__@@_J@Z @ 0x180261C10 (-EnumWindowsCallback@CopilotHotkeyManager@@SAHPEAUHWND__@@_J@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?TryGetAppUserModelForProcess@CopilotHotkeyManager@@SA?AV?$optional@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@K@Z @ 0x1802738DC (-TryGetAppUserModelForProcess@CopilotHotkeyManager@@SA-AV-$optional@V-$basic_string@GU-$char_tra.c)
 *     ??1?$optional@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@XZ @ 0x1806E1B24 (--1-$optional@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CopilotHotkeyManager::IsTargetAppWindow(HWND a1, _QWORD *a2)
{
  bool v3; // di
  char *v4; // rcx
  char *v5; // rax
  signed __int64 v6; // rcx
  int v7; // edx
  int v8; // r8d
  DWORD dwProcessId; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v11[4]; // [rsp+28h] [rbp-40h] BYREF
  char v12; // [rsp+48h] [rbp-20h]
  _QWORD *v13; // [rsp+50h] [rbp-18h]

  v13 = a2;
  v3 = 0;
  dwProcessId = 0;
  if ( GetWindowThreadProcessId(a1, &dwProcessId) )
  {
    CopilotHotkeyManager::TryGetAppUserModelForProcess(v11, dwProcessId);
    if ( v12 )
    {
      v4 = (char *)a2;
      if ( a2[3] >= 8uLL )
        v4 = (char *)*a2;
      v5 = (char *)v11;
      if ( v11[3] >= 8uLL )
        v5 = (char *)v11[0];
      v6 = v4 - v5;
      do
      {
        v7 = *(unsigned __int16 *)&v5[v6];
        v8 = *(unsigned __int16 *)v5 - v7;
        if ( v8 )
          break;
        v5 += 2;
      }
      while ( v7 );
      v3 = v8 == 0;
    }
    std::optional<std::wstring>::~optional<std::wstring>(v11);
  }
  std::wstring::_Tidy_deallocate((__int64)a2);
  return v3;
}
