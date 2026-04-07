/*
 * XREFs of ?UpdateRemotingMode@CDesktopManager@@AEAA_NXZ @ 0x180041098
 * Callers:
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180040F8C (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800493DC (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDesktopManager::UpdateRemotingMode(CDesktopManager *this)
{
  int v1; // edi
  DWORD CurrentProcessId; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // [rsp+60h] [rbp+28h] BYREF
  DWORD pSessionId; // [rsp+68h] [rbp+30h] BYREF
  int v9; // [rsp+70h] [rbp+38h] BYREF
  __int64 v10; // [rsp+78h] [rbp+40h] BYREF

  v1 = *((_DWORD *)this + 8);
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  if ( GetSystemMetrics(4096) )
  {
    v7 = 0;
    v10 = 0LL;
    CurrentProcessId = GetCurrentProcessId();
    ProcessIdToSessionId(CurrentProcessId, &pSessionId);
    if ( (unsigned __int8)WinStationQueryInformationW(0LL, pSessionId, 39LL, &v9, 4, &v7) && v9 == 5 )
    {
      if ( (unsigned __int8)WinStationGetConnectionProperty(
                              0xFFFFFFFFLL,
                              &PROPERTY_TYPE_GET_REMOTEAPP_HD_SUPPORT_LEVEL,
                              &v10) )
      {
        v5 = v10;
        if ( *(_WORD *)v10 == 1 )
        {
          if ( *(_DWORD *)(v10 + 8) == 1 || *(_DWORD *)(v10 + 8) == 2 )
          {
            *((_DWORD *)this + 8) = 5;
          }
          else if ( *(_DWORD *)(v10 + 8) == 3 )
          {
            *((_DWORD *)this + 8) = 6;
          }
          else
          {
            *((_DWORD *)this + 8) = 2;
          }
        }
        WinStationFreePropertyValue(v5);
        v10 = 0LL;
      }
      else
      {
        *((_DWORD *)this + 8) = 4;
      }
    }
    else
    {
      *((_DWORD *)this + 8) = 1;
    }
    if ( (unsigned __int8)WinStationGetConnectionProperty(
                            0xFFFFFFFFLL,
                            &PROPERTY_TYPE_GET_SCREEN_CAPTURE_PROTECT_MODE,
                            &v10) )
    {
      v6 = v10;
      if ( *(_WORD *)v10 == 1 )
        *((_DWORD *)this + 9) = *(_DWORD *)(v10 + 8);
      WinStationFreePropertyValue(v6);
    }
  }
  return *((_DWORD *)this + 8) != v1;
}
