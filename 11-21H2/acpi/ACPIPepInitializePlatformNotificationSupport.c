/*
 * XREFs of ACPIPepInitializePlatformNotificationSupport @ 0x1C008FED4
 * Callers:
 *     ACPIBusIrpStartDeviceWorker @ 0x1C008F350 (ACPIBusIrpStartDeviceWorker.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C00056D8 (ACPIInitReferenceDeviceExtension.c)
 *     AMLIFreeDataBuffs @ 0x1C001C758 (AMLIFreeDataBuffs.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0090340 (ACPIAmliEvaluateDsm.c)
 */

char __fastcall ACPIPepInitializePlatformNotificationSupport(char *Context)
{
  __int64 v2; // rcx
  signed __int32 v3; // edi
  unsigned int v4; // r10d
  unsigned int v5; // r9d
  int i; // r11d
  unsigned int v7; // eax
  __int64 v8; // rcx
  NTSTATUS v9; // eax
  char v10; // dl
  int v11; // eax
  _BYTE OutputBuffer[4]; // [rsp+30h] [rbp-19h] BYREF
  signed __int32 v14; // [rsp+34h] [rbp-15h] BYREF
  __int64 v15; // [rsp+38h] [rbp-11h] BYREF
  __int128 v16; // [rsp+40h] [rbp-9h] BYREF
  _OWORD v17[3]; // [rsp+50h] [rbp+7h] BYREF

  DWORD1(v17[0]) = 0;
  OutputBuffer[0] = 0;
  *(_QWORD *)(Context + 260) = 1LL;
  *((_DWORD *)Context + 46) = 1;
  *((_QWORD *)Context + 24) = 0LL;
  *((_DWORD *)Context + 50) = 0;
  KeInitializeEvent((PRKEVENT)(Context + 208), SynchronizationEvent, 0);
  v2 = *((_QWORD *)Context + 95);
  memset(v17, 0, sizeof(v17));
  v3 = 0;
  v14 = 0;
  v15 = 0LL;
  v16 = PEP_NOTIFICATIONS_DSM_UUID;
  if ( (int)ACPIAmliEvaluateDsm(v2, (unsigned int)&v16, 0, 0, (__int64)v17, (__int64)&v15) >= 0 )
  {
    if ( *(_WORD *)(v15 + 2) == 3 )
    {
      v4 = *(_DWORD *)(v15 + 24);
      if ( v4 )
      {
        v5 = 0;
        for ( i = 0; ; i += 8 )
        {
          v7 = 4;
          if ( v4 < 4 )
            v7 = *(_DWORD *)(v15 + 24);
          if ( v5 >= v7 )
            break;
          v8 = v5++;
          v3 |= *(unsigned __int8 *)(v8 + *(_QWORD *)(v15 + 32)) << i;
        }
        v14 = v3;
      }
    }
    AMLIFreeDataBuffs(v15);
  }
  v9 = ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, OutputBuffer, 1u);
  v10 = 0;
  if ( v9 >= 0 )
    v10 = OutputBuffer[0];
  if ( _bittest(&v14, 3u) && _bittest(&v14, 4u) )
    *((_DWORD *)Context + 61) |= 2u;
  if ( _bittest(&v14, 5u) && _bittest(&v14, 6u) )
    *((_DWORD *)Context + 61) |= 1u;
  if ( _bittest(&v14, 7u) && _bittest(&v14, 8u) )
    *((_DWORD *)Context + 61) |= 4u;
  v11 = *((_DWORD *)Context + 61);
  if ( !v10 )
  {
    v11 &= 0xFFFFFFFA;
    *((_DWORD *)Context + 61) = v11;
  }
  if ( v11 )
  {
    LOBYTE(v11) = ACPIInitReferenceDeviceExtension((__int64)Context);
    if ( (_BYTE)v11 )
    {
      v11 = *((_DWORD *)Context + 61);
      Context[240] = 1;
      if ( (v11 & 1) != 0 )
      {
        PoRegisterPowerSettingCallback(
          0LL,
          &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
          ACPIPepPowerSettingChangeCallback,
          Context,
          (PVOID *)Context + 34);
        v11 = *((_DWORD *)Context + 61);
      }
      if ( (v11 & 2) != 0 )
      {
        PoRegisterPowerSettingCallback(
          0LL,
          &GUID_CONSOLE_DISPLAY_STATE,
          ACPIPepPowerSettingChangeCallback,
          Context,
          (PVOID *)Context + 35);
        PoRegisterPowerSettingCallback(
          0LL,
          &GUID_GLOBAL_USER_PRESENCE,
          ACPIPepPowerSettingChangeCallback,
          Context,
          (PVOID *)Context + 36);
        v11 = *((_DWORD *)Context + 61);
      }
      if ( (v11 & 4) != 0 )
        LOBYTE(v11) = PoRegisterPowerSettingCallback(
                        0LL,
                        &GUID_LOW_POWER_EPOCH,
                        ACPIPepPowerSettingChangeCallback,
                        Context,
                        (PVOID *)Context + 37);
    }
  }
  return v11;
}
