/*
 * XREFs of ?PowerSettingChanged@CAudioSrv@@UEAAK_J@Z @ 0x1800576D0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180025144 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18006A819 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x1800E9C50 (WPP_SF_D.c)
 *     ?ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z @ 0x1800EFDFC (-ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z.c)
 */

__int64 __fastcall CAudioSrv::PowerSettingChanged(CAudioSrv *this, UUID *Uuid1)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  unsigned int v6; // edi
  char v7; // si
  __int64 v9; // rax
  __int64 v10; // rcx
  _DWORD *v11; // rcx
  __int64 v12; // rcx
  int v13; // [rsp+30h] [rbp-48h] BYREF
  RPC_STATUS Status; // [rsp+34h] [rbp-44h] BYREF
  _BYTE v15[32]; // [rsp+38h] [rbp-40h] BYREF
  int *v16; // [rsp+58h] [rbp-20h]
  __int64 v17; // [rsp+60h] [rbp-18h]

  v2 = 0;
  Status = 0;
  if ( !Uuid1 )
    return 13LL;
  if ( Uuid1[1].Data1 == 4 && UuidEqual(Uuid1, &GUID_ACDC_POWER_SOURCE, &Status) )
  {
    v6 = *(_DWORD *)&Uuid1[1].Data2;
    v7 = -1;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, &WPP_621167bef4003aa6e08b5688b5cb64cc_Traceguids, v6);
    }
    if ( v6 )
    {
      if ( v6 - 1 <= 1 )
        v7 = 0;
    }
    else
    {
      v7 = 1;
    }
    if ( g_streamMonitorManager )
    {
      LOBYTE(v5) = v7;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)g_streamMonitorManager + 16LL))(g_streamMonitorManager, v5);
    }
  }
  else if ( Uuid1[1].Data1 == 4 && UuidEqual(Uuid1, &GUID_SYSTEM_AWAYMODE, &Status) )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        32LL,
        &WPP_621167bef4003aa6e08b5688b5cb64cc_Traceguids,
        *(unsigned int *)&Uuid1[1].Data2);
    }
    return CAudioSrv::ProcessAwayModeStateChange(this, *(_DWORD *)&Uuid1[1].Data2 != 0);
  }
  else
  {
    v9 = *(_QWORD *)&Uuid1->Data1 - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
    if ( *(_QWORD *)&Uuid1->Data1 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
      v9 = *(_QWORD *)Uuid1->Data4 - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
    if ( !v9 && Uuid1[1].Data1 == 4 )
    {
      EnterCriticalSection(&g_csVadList);
      memcpy_0(&v13, &Uuid1[1].Data2, Uuid1[1].Data1);
      g_bLowPowerEpoch = v13 != 0;
      v11 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                        v10,
                        _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *v11 > 4u && tlgKeywordOn((__int64)v11, 64LL) )
      {
        v13 = g_bLowPowerEpoch;
        v17 = 4LL;
        v16 = &v13;
        tlgWriteTransfer_EtwEventWriteTransfer(v12, byte_180191C29, 0LL, 0LL, 3, (__int64)v15);
      }
      LeaveCriticalSection(&g_csVadList);
    }
  }
  return v2;
}
