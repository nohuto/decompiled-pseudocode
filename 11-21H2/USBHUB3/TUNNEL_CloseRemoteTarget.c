/*
 * XREFs of TUNNEL_CloseRemoteTarget @ 0x1C00889E0
 * Callers:
 *     TUNNEL_EvtIoTargetRemoveComplete @ 0x1C00888D0 (TUNNEL_EvtIoTargetRemoveComplete.c)
 *     TUNNEL_CloseAllUsb4RemoteTargets @ 0x1C0088B88 (TUNNEL_CloseAllUsb4RemoteTargets.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C003F0A0 (WPP_RECORDER_SF_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TUNNEL_CloseRemoteTarget(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  char v5; // si
  int v6; // eax
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+28h] [rbp-20h]

  v3 = a1[1];
  if ( v3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = *(_QWORD *)(v3 + 8);
      WPP_RECORDER_SF_qqq(*(_QWORD *)(*a1 + 2520LL), a2, a3, 0x1Au, v8);
    }
    v5 = 0;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      *(_QWORD *)(v3 + 16),
      0LL);
    if ( *(_BYTE *)(v3 + 44) == 1 )
    {
      v6 = PoFxRemoveComponentRelation(*(_QWORD *)(*a1 + 2608LL), 0LL, *(_QWORD *)(v3 + 32), &GUID_NULL);
      if ( v6 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v9) = v6;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*a1 + 2520LL),
          2u,
          3u,
          0x1Bu,
          (__int64)&WPP_37c4b7d9305837c1312f85d744ccd03f_Traceguids,
          v9);
      }
      *(_BYTE *)(v3 + 44) = 0;
    }
    *(_QWORD *)(v3 + 32) = 0LL;
    if ( *(_DWORD *)(v3 + 24) != 3 )
    {
      v5 = 1;
      *(_DWORD *)(v3 + 24) = 3;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      *(_QWORD *)(v3 + 16));
    if ( v5 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1360))(
        WdfDriverGlobals,
        *(_QWORD *)(v3 + 8));
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        *(_QWORD *)(v3 + 16),
        0LL);
      v7 = *(_QWORD *)(v3 + 16);
      *(_DWORD *)(v3 + 24) = 4;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, v7);
    }
  }
}
