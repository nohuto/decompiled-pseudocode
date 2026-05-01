/*
 * XREFs of ?UpdateGamepadIntervalValues@GamingOverlayExperienceManager@@AEAAXXZ @ 0x1800A4208
 * Callers:
 *     ?RegisterGameBarRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ @ 0x1800A42E8 (-RegisterGameBarRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_929f6f6853200033fcbdc69f2b2582a9___::Run @ 0x180406890 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_929f6f6853200033fcbdc69f2b2582a9___--Run.c)
 * Callees:
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1801DBA20 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

void __fastcall GamingOverlayExperienceManager::UpdateGamepadIntervalValues(GamingOverlayExperienceManager *this)
{
  unsigned int ValueW; // eax
  unsigned int v3; // eax
  unsigned int v4; // [rsp+20h] [rbp-28h]
  unsigned int v5; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  pvData = 500;
  pcbData = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\GameBar",
             L"GamepadShortPressIntervalMs",
             0x10u,
             0LL,
             &pvData,
             &pcbData);
  if ( ValueW != 2 && ValueW )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      (void *)0x10D9,
      (unsigned int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)ValueW,
      v4);
  *((_QWORD *)this + 39) = pvData;
  pvData = 350;
  pcbData = 4;
  v3 = RegGetValueW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\GameBar",
         L"GamepadDoublePressIntervalMs",
         0x10u,
         0LL,
         &pvData,
         &pcbData);
  if ( v3 != 2 && v3 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      (void *)0x10EC,
      (unsigned int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)v3,
      v5);
  *((_QWORD *)this + 40) = pvData;
}
