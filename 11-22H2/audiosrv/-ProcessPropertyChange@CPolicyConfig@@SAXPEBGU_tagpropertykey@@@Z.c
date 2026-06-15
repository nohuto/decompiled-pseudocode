/*
 * XREFs of ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x1800360E0
 * Callers:
 *     ?OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003AE80 (-OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z @ 0x180002480 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z.c)
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x180036A20 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18004B0A0 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x1800656FC (-DisconnectHelper@CPolicyConfig@@SAXPEBG@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CPolicyConfig::ProcessPropertyChange(const unsigned __int16 *a1, struct _tagpropertykey *a2)
{
  unsigned __int64 v4; // rax
  CEndpointCharacteristics *v5; // rdi
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  __int64 v7; // rax
  volatile signed __int32 *v8; // rdi
  char *v9; // rax
  __int64 v10; // rcx
  int v11; // [rsp+30h] [rbp-88h] BYREF
  int v12; // [rsp+34h] [rbp-84h] BYREF
  CEndpointCharacteristics *v13; // [rsp+38h] [rbp-80h]
  _QWORD v14[4]; // [rsp+40h] [rbp-78h] BYREF
  GUID fmtid; // [rsp+60h] [rbp-58h]
  __int128 v16; // [rsp+80h] [rbp-38h] BYREF
  __int16 v17; // [rsp+90h] [rbp-28h]

  v14[0] = 0LL;
  v11 = 0;
  if ( ((int (__fastcall *)(struct IMMDeviceEnumerator *, const unsigned __int16 *, _QWORD *))g_DeviceEnumerator->lpVtbl->GetDevice)(
         g_DeviceEnumerator,
         a1,
         v14) >= 0
    && (*(int (__fastcall **)(_QWORD, int *))(*(_QWORD *)v14[0] + 48LL))(v14[0], &v11) >= 0
    && v11 == 1 )
  {
    v13 = 0LL;
    if ( (*(int (__fastcall **)(PVOID, const unsigned __int16 *, __int64))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                         + 24LL))(
           g_pEndpointCharacteristicsCache,
           a1,
           1LL) >= 0 )
    {
      v5 = v13;
      v6 = (struct _RTL_CRITICAL_SECTION *)((char *)v13 + 288);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)v13 + 288));
      if ( v6 )
        LeaveCriticalSection(v6);
      v7 = *((_QWORD *)v5 + 45);
      if ( v7 )
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      v14[1] = *((_QWORD *)v5 + 44);
      v8 = (volatile signed __int32 *)*((_QWORD *)v5 + 45);
      v14[2] = v8;
      v12 = 0;
      CEndpointCharacteristics::ProcessPropertyChange(v13, a2, &v12);
      if ( v12 )
        CPolicyConfig::DisconnectHelper(a1);
      if ( v8 && _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
        std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v8);
      }
    }
    if ( v13 )
      (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  fmtid = a2->fmtid;
  v4 = PKEY_AudioEndpoint_AvoidSelection - *(_QWORD *)&fmtid.Data1;
  if ( PKEY_AudioEndpoint_AvoidSelection == *(_QWORD *)&fmtid.Data1 )
    v4 = 0xEDD0A9ABD90AC8BAuLL - *(_QWORD *)fmtid.Data4;
  if ( !v4 && a2->pid == 1 )
  {
    v16 = 0LL;
    v17 = 0;
    v9 = (char *)&v16 + 1;
    v10 = 2LL;
    do
    {
      *(_WORD *)(v9 - 1) = 257;
      v9[1] = 1;
      v9 += 9;
      --v10;
    }
    while ( v10 );
    DynamicAudioEndpointManager::RefreshPublishedDefaults(g_DynamicAudioEndpointManager, (bool (*const)[9])&v16, 0);
  }
  if ( v14[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14[0] + 16LL))(v14[0]);
}
