/*
 * XREFs of ?MinimizeToBoxMode@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x18038EED0
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800F76BC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800FA3AC (--1hstring@winrt@@QEAA@XZ.c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActivationMode@Shell@UI@WindowsUdk@3@PEBG@Z @ 0x18019D9F4 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActiv.c)
 *     ?StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1801A168C (-StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UndockedSearchAppExperienceManager::MinimizeToBoxMode(UndockedSearchAppExperienceManager *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  volatile signed __int32 *v8; // [rsp+48h] [rbp+10h] BYREF

  try
  {
    UndockedSearchAppExperienceManager::StartFullActivationTest((__int64)this, 3, 0);
    winrt::hstring::hstring((winrt::hstring *)&v8, L"StartLightDismiss");
    UndockedSearchAppExperienceManager::ActivateAppAsync(
      (__int64)this,
      0,
      (winrt::hstring *)&v8,
      1,
      (unsigned __int16 *)&LocaleName);
    winrt::hstring::~hstring(&v8, v2, v3, v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x430,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
                           v5);
  }
  return result;
}
