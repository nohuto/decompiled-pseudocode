/*
 * XREFs of ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x18005A308
 * Callers:
 *     ?OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18005A160 (-OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x18004DF00 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x1800E9748 (-DisconnectHelper@CPolicyConfig@@SAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CPolicyConfig::ProcessPropertyChange(const unsigned __int16 *a1, struct _tagpropertykey *a2)
{
  int v4; // [rsp+30h] [rbp-20h] BYREF
  int v5; // [rsp+34h] [rbp-1Ch] BYREF
  CEndpointCharacteristics *v6; // [rsp+38h] [rbp-18h] BYREF
  __int64 v7; // [rsp+40h] [rbp-10h] BYREF

  v7 = 0LL;
  v4 = 0;
  if ( (*(int (__fastcall **)(LPVOID, const unsigned __int16 *, __int64 *))(*(_QWORD *)g_DeviceEnumerator + 40LL))(
         g_DeviceEnumerator,
         a1,
         &v7) >= 0
    && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 48LL))(v7, &v4) >= 0
    && v4 == 1 )
  {
    v6 = 0LL;
    if ( (*(int (__fastcall **)(PVOID, const unsigned __int16 *, __int64, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
           g_pEndpointCharacteristicsCache,
           a1,
           1LL,
           0LL,
           &v6) >= 0 )
    {
      v5 = 0;
      CEndpointCharacteristics::ProcessPropertyChange(v6, a2, &v5);
      if ( v5 )
        CPolicyConfig::DisconnectHelper(a1);
    }
    if ( v6 )
      (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
}
