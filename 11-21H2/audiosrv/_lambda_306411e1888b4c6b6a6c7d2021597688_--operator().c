/*
 * XREFs of _lambda_306411e1888b4c6b6a6c7d2021597688_::operator() @ 0x180058044
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_306411e1888b4c6b6a6c7d2021597688___::Run @ 0x180057BC0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_306411e1888b4c6b6a6c7d2021597688___--Run.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18003FB14 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18004053C (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180040818 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?IsRunningOnXbox@AtmosCheck@@AEBA_NXZ @ 0x180041A94 (-IsRunningOnXbox@AtmosCheck@@AEBA_NXZ.c)
 *     ?RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ @ 0x180041C20 (-RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ.c)
 *     ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x180058158 (-RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x180058604 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ @ 0x180156110 (-RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ @ 0x180156294 (-RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_306411e1888b4c6b6a6c7d2021597688_::operator()(__int64 a1)
{
  AtmosCheck *v2; // rdi
  HANDLE v3; // rax
  int ready; // eax
  int v5; // eax
  signed int LastError; // eax
  ULONG v7; // [rsp+20h] [rbp-68h]
  signed int v8; // [rsp+30h] [rbp-58h] BYREF
  void *v9; // [rsp+38h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+40h] [rbp-48h] BYREF
  signed int *v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v2 = *(AtmosCheck **)a1;
  AtmosCheck::RefreshPlatformLicenses(*(AtmosCheck **)a1);
  AtmosCheck::RefreshSpatialAudioLicenseModelState(v2, 0LL);
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    AtmosCheck::RegisterAppDeploymentNotifications(v2);
    if ( *((_BYTE *)v2 + 217) )
    {
      ready = AtmosCheck::RegisterForShellReadyNotifications(v2);
      if ( ready < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1FB,
          (unsigned int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)ready,
          v7);
      v5 = AtmosCheck::RegisterForUserWatcherNotifications(v2);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1FF,
          (unsigned int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)v5,
          v7);
    }
    else
    {
      *((_BYTE *)v2 + 216) = 1;
      if ( *((_QWORD *)v2 + 13) )
      {
        v3 = OpenEventW(0x100002u, 0, L"Global\\Client_Atmos_Check_Event");
        v9 = v3;
        if ( v3 && !WaitForSingleObject(v3, 0) )
        {
          *((_BYTE *)v2 + 99) = 1;
          AtmosCheck::PerformLicenseCheck(v2, 1);
        }
        else if ( !RegisterWaitForSingleObject(
                     (PHANDLE)v2 + 14,
                     *((HANDLE *)v2 + 13),
                     AtmosCheck::StaticClientAtmosCheckEventFired,
                     v2,
                     0xFFFFFFFF,
                     0x18u) )
        {
          if ( (unsigned int)dword_1801C02B0 > 2 )
          {
            LastError = GetLastError();
            if ( LastError > 0 )
              LastError = (unsigned __int16)LastError | 0x80070000;
            v8 = LastError;
            v11 = &v8;
            v12 = 4;
            v13 = 0;
            tlgWriteTransfer_EventWriteTransfer(
              (__int64)&dword_1801C02B0,
              (unsigned __int8 *)dword_18018F9EC,
              0LL,
              0LL,
              3u,
              &v10);
          }
          *((_BYTE *)v2 + 99) = 1;
        }
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v9);
      }
    }
  }
  *((_WORD *)v2 + 48) = 257;
  if ( *((_BYTE *)v2 + 217) )
  {
    if ( !AtmosCheck::IsRunningOnXbox(v2) )
      AtmosCheck::PerformLicenseCheck(v2, 1);
  }
}
