/*
 * XREFs of ?ShowWithStart@UndockedSearchAppExperienceManager@@UEAAJE@Z @ 0x18002D9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800F76BC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800FA3AC (--1hstring@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActivationMode@Shell@UI@WindowsUdk@3@PEBG@Z @ 0x18019D9F4 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActiv.c)
 *     ?StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1801A168C (-StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UndockedSearchAppExperienceManager::ShowWithStart(UndockedSearchAppExperienceManager *this)
{
  int v2; // eax
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, SID *, GUID *, char *); // rbx
  const char *v5; // r9
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-38h]
  _DWORD v8[4]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  try
  {
    UndockedSearchAppExperienceManager::StartFullActivationTest(this, 2LL);
    v2 = 0;
    if ( !*((_QWORD *)this + 11) )
    {
      v3 = *((_QWORD *)this + 7);
      v4 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, char *))(*(_QWORD *)v3 + 24LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 88);
      v2 = v4(v3, &SID_ImmersiveLauncher, &GUID_d8d60399_a0f1_f987_5551_321fd1b49864, (char *)this + 88);
    }
    if ( v2 >= 0 )
      *(_OWORD *)((char *)this + 120) = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD))(**((_QWORD **)this + 12) + 40LL))(
                                                     *((_QWORD *)this + 12),
                                                     v8,
                                                     *((_QWORD *)this + 11));
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x371,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v2,
        v7);
    winrt::hstring::hstring((winrt::hstring *)v8, L"StartButton");
    UndockedSearchAppExperienceManager::ActivateAppAsync(this, 0LL, v8, 1LL, &LocaleName);
    winrt::hstring::~hstring((winrt::hstring *)v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x378,
                           (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
                           v5);
  }
  return result;
}
