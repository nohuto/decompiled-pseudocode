/*
 * XREFs of _lambda_ef8eb52c9e6883c3173b82c9be862a9c_::operator() @ 0x1800304F8
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_ef8eb52c9e6883c3173b82c9be862a9c__Windows::Internal::CNoResult_::Run @ 0x180035C80 (Windows--Internal--COperationLambdaVar_0__lambda_ef8eb52c9e6883c3173b82c9be862a9c__Windows--Inte.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetGameLaunchInfoOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJAEBVHString@Wrappers@WRL@Microsoft@@0@Z @ 0x18003E828 (-SetGameLaunchInfoOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Wind.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_ef8eb52c9e6883c3173b82c9be862a9c_::operator()(_QWORD *a1, HSTRING a2)
{
  HSTRING v3; // rbp
  HSTRING v4; // r14
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 v6; // rax
  Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *v7; // rcx
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // esi
  __int64 v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HSTRING v14; // [rsp+50h] [rbp+8h] BYREF
  HSTRING v15; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+60h] [rbp+18h]

  v15 = a2;
  v3 = (HSTRING)a1[2];
  WindowsDeleteString(0LL);
  v14 = v3;
  v4 = (HSTRING)a1[3];
  WindowsDeleteString(0LL);
  v15 = v4;
  v5 = (struct _RTL_CRITICAL_SECTION *)(*a1 + 168LL);
  EnterCriticalSection(v5);
  v16 = v5;
  v6 = *a1;
  v7 = *(Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer **)(*a1 + 272LL);
  v8 = 0;
  if ( !v7 || !*(_QWORD *)(v6 + 280) )
  {
    v10 = -2147024891;
    v11 = 2147942405LL;
    goto LABEL_8;
  }
  v9 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::SetGameLaunchInfoOnGameConfigs(
         v7,
         (const struct Microsoft::WRL::Wrappers::HString *)&v14,
         (const struct Microsoft::WRL::Wrappers::HString *)&v15);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = (unsigned int)v9;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x603,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v11);
    if ( v5 )
      LeaveCriticalSection(v5);
    v8 = v10;
    goto LABEL_11;
  }
  if ( v5 )
    LeaveCriticalSection(v5);
LABEL_11:
  WindowsDeleteString(v4);
  WindowsDeleteString(v3);
  return v8;
}
