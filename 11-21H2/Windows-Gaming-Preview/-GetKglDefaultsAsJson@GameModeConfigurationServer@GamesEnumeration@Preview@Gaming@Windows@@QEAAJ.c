/*
 * XREFs of ?GetKglDefaultsAsJson@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18003E6B0
 * Callers:
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002E854 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ @ 0x180010110 (--1-$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180013ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@_N@Z @ 0x18003FCA4 (-GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEA.c)
 *     ?CheckKGLForGameFromGameConfig@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUGameConfig@ExecutionModel@@KPEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1800429BC (-CheckKGLForGameFromGameConfig@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUGam.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetKglDefaultsAsJson(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this,
        HSTRING *a2)
{
  __int64 FirstGameConfig; // rbp
  Windows::Gaming::Preview::GamesEnumeration::KglDefaults *v5; // rbx
  int v6; // edi
  unsigned int v7; // r8d
  Windows::Gaming::Preview::GamesEnumeration::KglDefaults *v8; // rsi
  Windows::Gaming::Preview::GamesEnumeration::KglDefaults *v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  Windows::Gaming::Preview::GamesEnumeration::KglDefaults *v13[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  WindowsDeleteString(*a2);
  *a2 = 0LL;
  FirstGameConfig = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(
                      this,
                      0LL);
  *(_OWORD *)v13 = 0LL;
  EnterCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_initializeLock);
  v5 = Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_instance;
  if ( Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_instance )
  {
    v9 = (Windows::Gaming::Preview::GamesEnumeration::KglDefaults *)qword_180062FC0;
    if ( qword_180062FC0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(qword_180062FC0 + 8));
      v9 = (Windows::Gaming::Preview::GamesEnumeration::KglDefaults *)qword_180062FC0;
      v5 = Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_instance;
    }
    v14[0] = 0LL;
    v8 = v5;
    v13[0] = v5;
    v14[1] = 0LL;
    v13[1] = v9;
    std::shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::~shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>((__int64)v14);
    LeaveCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_initializeLock);
    v6 = 0;
  }
  else
  {
    v6 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
      (const char *)0x8000FFFFLL);
    LeaveCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_initializeLock);
    v8 = v13[0];
  }
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      210LL,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)v6);
  if ( v5
    && (v10 = Windows::Gaming::Preview::GamesEnumeration::KglDefaults::CheckKGLForGameFromGameConfig(
                v8,
                *(struct ExecutionModel::GameConfig **)(FirstGameConfig + 16),
                v7,
                (struct Microsoft::WRL::Wrappers::HString *)a2),
        v11 = v10,
        v10 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD5,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)v10);
  }
  else
  {
    v11 = 0;
  }
  std::shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::~shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>((__int64)v13);
  return v11;
}
