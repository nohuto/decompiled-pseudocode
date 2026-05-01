/*
 * XREFs of ?Prelaunch@UndockedSearchAppExperienceManager@@UEAAJE@Z @ 0x1800FBD30
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800F76BC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800FA3AC (--1hstring@winrt@@QEAA@XZ.c)
 *     ?SetExistingEvent@@YAXPEBG@Z @ 0x18014535C (-SetExistingEvent@@YAXPEBG@Z.c)
 *     ??$UndockedSearchAppExperienceManager_PrelaunchSkipped@AEB_N@SearchAppExperienceManagerTelemetry@@SAXAEB_N@Z @ 0x18019A1A8 (--$UndockedSearchAppExperienceManager_PrelaunchSkipped@AEB_N@SearchAppExperienceManagerTelemetry.c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActivationMode@Shell@UI@WindowsUdk@3@PEBG@Z @ 0x18019D9F4 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActiv.c)
 *     ?UndockedSearchAppExperienceManager_PrelaunchRequested@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x1801A2218 (-UndockedSearchAppExperienceManager_PrelaunchRequested@SearchAppExperienceManagerTelemetry@@SAXX.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UndockedSearchAppExperienceManager::Prelaunch(UndockedSearchAppExperienceManager *this)
{
  int v2; // eax
  const char *v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  volatile signed __int32 *v10; // [rsp+40h] [rbp+8h] BYREF

  try
  {
    v2 = *((_DWORD *)this + 160);
    if ( !v2 || v2 == 12 )
    {
      SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_PrelaunchRequested();
      winrt::hstring::hstring((winrt::hstring *)&v10, L"Hidden");
      LOBYTE(v4) = 1;
      UndockedSearchAppExperienceManager::ActivateAppAsync(this, v4, &v10, 0LL, &LocaleName);
      winrt::hstring::~hstring(&v10, v5, v6, v7);
    }
    else
    {
      SetExistingEvent(L"ShellSearchReadyEvent");
      LOBYTE(v10) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 12) + 48LL))(
                      *((_QWORD *)this + 12),
                      *((_QWORD *)this + 8));
      SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_PrelaunchSkipped<bool const &>(&v10);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x325,
                           (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
                           v3);
  }
  return result;
}
