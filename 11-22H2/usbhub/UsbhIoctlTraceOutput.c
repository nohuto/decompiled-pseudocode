/*
 * XREFs of UsbhIoctlTraceOutput @ 0x1C0040FD4
 * Callers:
 *     UsbhIoctlCyclePort @ 0x1C003E3F8 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C003EBD8 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C003EF0C (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetHubCapsEx @ 0x1C003F180 (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C003F448 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C003F72C (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C003F9BC (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C003FE6C (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0040194 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C00404A8 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C0040798 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C0040A78 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x1C0040D6C (UsbhIoctlResetStuckHub.c)
 * Callees:
 *     Log @ 0x1C000F210 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C002E788 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF__HEX_ @ 0x1C0041698 (WPP_RECORDER_SF__HEX_.c)
 *     log_xstr @ 0x1C00417B8 (log_xstr.c)
 */

void *__fastcall UsbhIoctlTraceOutput(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r14
  unsigned int v5; // esi
  __int64 v6; // rbp
  __int64 v7; // r10
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // r10
  __int64 v11; // rdx
  int v12; // r11d
  int v13; // ebx
  void *result; // rax
  __int128 *v15; // rax
  __int64 v16; // r10
  __int64 v17; // rcx
  int v18; // edx
  __int64 v19; // [rsp+28h] [rbp-50h]
  __int64 v20; // [rsp+30h] [rbp-48h]
  __int128 v21; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v22[16]; // [rsp+50h] [rbp-28h] BYREF

  Log(a1, 32, 1768907604, 0LL, a2);
  v3 = *(_QWORD *)(a2 + 184);
  v4 = *(_QWORD *)(a2 + 24);
  v5 = *(_DWORD *)(v3 + 8);
  v6 = *(unsigned int *)(v3 + 16);
  Log(v7, 32, 1768911921, v5, v6);
  Log(v8, 32, 1768911922, v4, v9);
  Log(v10, 32, 1768911923, *(int *)(a2 + 48), *(_QWORD *)(a2 + 56));
  v13 = *(_DWORD *)(a2 + 56);
  result = &WPP_1cc12751aa963e921be10b52612de601_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        2u,
        0xAu,
        (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids,
        v12);
      result = &WPP_1cc12751aa963e921be10b52612de601_Traceguids;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v19) = v6;
        result = (void *)WPP_RECORDER_SF_dd(
                           (__int64)WPP_GLOBAL_Control->DeviceExtension,
                           v11,
                           2u,
                           0xBu,
                           (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids,
                           v19,
                           v5);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v20) = v13;
        LODWORD(v19) = *(_DWORD *)(a2 + 48);
        result = (void *)WPP_RECORDER_SF_dd(
                           (__int64)WPP_GLOBAL_Control->DeviceExtension,
                           v11,
                           2u,
                           0xCu,
                           (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids,
                           v19,
                           v20);
      }
    }
  }
  if ( (_BYTE)v13 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v15 = (__int128 *)log_xstr(v22, (unsigned __int8)v13, v4);
      v17 = *(_QWORD *)(v16 + 64);
      v21 = *v15;
      return (void *)WPP_RECORDER_SF__HEX_(
                       v17,
                       v18,
                       2,
                       14,
                       (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids,
                       (__int64)&v21);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return (void *)WPP_RECORDER_SF_(
                       (__int64)WPP_GLOBAL_Control->DeviceExtension,
                       0,
                       2u,
                       0xDu,
                       (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids);
  }
  return result;
}
