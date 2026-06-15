/*
 * XREFs of _lambda_306411e1888b4c6b6a6c7d2021597688_::operator() @ 0x18005D864
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_306411e1888b4c6b6a6c7d2021597688___::Run @ 0x18005C6E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_306411e1888b4c6b6a6c7d2021597688___--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001C004 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180034C90 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x180036E40 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ @ 0x18003969C (-RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ.c)
 *     ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x18005C7B8 (-RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ?IsRunningOnXbox@AtmosCheck@@AEBA_NXZ @ 0x18015C314 (-IsRunningOnXbox@AtmosCheck@@AEBA_NXZ.c)
 *     ?RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ @ 0x18015D170 (-RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ @ 0x18015D2FC (-RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_306411e1888b4c6b6a6c7d2021597688_::operator()(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  AtmosCheck *v5; // rdi
  char *v6; // rax
  char *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int ready; // eax
  int v12; // eax
  signed int LastError; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  signed int v17; // [rsp+30h] [rbp-58h] BYREF
  char *v18; // [rsp+38h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+40h] [rbp-48h] BYREF
  signed int *v20; // [rsp+60h] [rbp-28h]
  int v21; // [rsp+68h] [rbp-20h]
  int v22; // [rsp+6Ch] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v5 = *(AtmosCheck **)a1;
  AtmosCheck::RefreshPlatformLicenses(*(AtmosCheck **)a1, a2, a3, a4);
  AtmosCheck::RefreshSpatialAudioLicenseModelState(v5, 0LL);
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    AtmosCheck::RegisterAppDeploymentNotifications(v5);
    if ( *((_BYTE *)v5 + 217) )
    {
      ready = AtmosCheck::RegisterForShellReadyNotifications(v5);
      if ( ready < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1FB,
          (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)ready);
      v12 = AtmosCheck::RegisterForUserWatcherNotifications(v5);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1FF,
          (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)v12);
    }
    else
    {
      *((_BYTE *)v5 + 216) = 1;
      if ( *((_QWORD *)v5 + 13) )
      {
        v6 = (char *)OpenEventW(0x100002u, 0, L"Global\\Client_Atmos_Check_Event");
        v7 = v6;
        v18 = v6;
        if ( v6 && !WaitForSingleObject(v6, 0) )
        {
          *((_BYTE *)v5 + 99) = 1;
          LOBYTE(v8) = 1;
          AtmosCheck::PerformLicenseCheck(v5, v8, v9, v10);
        }
        else if ( !RegisterWaitForSingleObject(
                     (PHANDLE)v5 + 14,
                     *((HANDLE *)v5 + 13),
                     AtmosCheck::StaticClientAtmosCheckEventFired,
                     v5,
                     0xFFFFFFFF,
                     0x18u) )
        {
          if ( (unsigned int)dword_1801CD2B8 > 2 )
          {
            LastError = GetLastError();
            if ( LastError > 0 )
              LastError = (unsigned __int16)LastError | 0x80070000;
            v17 = LastError;
            v20 = &v17;
            v21 = 4;
            v22 = 0;
            tlgWriteTransfer_EventWriteTransfer(
              (__int64)&dword_1801CD2B8,
              (unsigned __int8 *)dword_1801990DF,
              0LL,
              0LL,
              3u,
              &v19);
          }
          *((_BYTE *)v5 + 99) = 1;
        }
        if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v7);
      }
    }
  }
  *((_WORD *)v5 + 48) = 257;
  if ( *((_BYTE *)v5 + 217) )
  {
    if ( !AtmosCheck::IsRunningOnXbox(v5) )
    {
      LOBYTE(v14) = 1;
      AtmosCheck::PerformLicenseCheck(v5, v14, v15, v16);
    }
  }
}
