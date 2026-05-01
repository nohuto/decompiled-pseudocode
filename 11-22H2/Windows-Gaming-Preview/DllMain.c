/*
 * XREFs of DllMain @ 0x180009DEC
 * Callers:
 *     dllmain_dispatch @ 0x18004B31C (dllmain_dispatch.c)
 * Callees:
 *     ??1?$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ @ 0x1800102C0 (--1-$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004B4D0 (__security_check_cookie.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  Windows::Gaming::Preview::GamesEnumeration::SystemDefaults *v3; // rax
  __int64 v4; // rax
  Windows::Gaming::Preview::GamesEnumeration::KglDefaults *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  REGHANDLE v9; // rcx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      ProviderId = (GUID)*((_OWORD *)off_180064008 - 1);
      if ( RegHandle )
        __fastfail(5u);
      xmmword_180064028 = 0LL;
      if ( !EventRegister(&ProviderId, (PENABLECALLBACK)tlgEnableCallback, &dword_180064000, &RegHandle) )
        EventSetInformation(
          RegHandle,
          2LL,
          off_180064008,
          *(unsigned __int16 *)off_180064008,
          *(_QWORD *)&ProviderId.Data1,
          *(_QWORD *)ProviderId.Data4);
    }
  }
  else
  {
    v3 = Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_instance;
    Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_instance = 0LL;
    *(_QWORD *)&ProviderId.Data1 = v3;
    v4 = qword_180064FF8;
    qword_180064FF8 = 0LL;
    *(_QWORD *)ProviderId.Data4 = v4;
    std::shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::~shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>(
      &ProviderId,
      fdwReason,
      lpvReserved);
    v5 = Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_instance;
    Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_instance = 0LL;
    *(_QWORD *)&ProviderId.Data1 = v5;
    v6 = qword_180064FE8;
    qword_180064FE8 = 0LL;
    *(_QWORD *)ProviderId.Data4 = v6;
    std::shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::~shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>(
      &ProviderId,
      v7,
      v8);
    v9 = RegHandle;
    RegHandle = 0LL;
    dword_180064000 = 0;
    EventUnregister(v9);
  }
  return 1;
}
