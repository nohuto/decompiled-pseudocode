/*
 * XREFs of HUBPDO_EvtDeviceUsageNotificationEx @ 0x1C001A650
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     HUBPDO_AllocateForwardProgressResources @ 0x1C001A514 (HUBPDO_AllocateForwardProgressResources.c)
 *     HUBMISC_DbgBreak @ 0x1C00302F4 (HUBMISC_DbgBreak.c)
 *     HUBBOOT_RegisterBootDevice @ 0x1C003DC88 (HUBBOOT_RegisterBootDevice.c)
 *     HUBBOOT_IsBootDeviceExternal @ 0x1C003DD84 (HUBBOOT_IsBootDeviceExternal.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     HUBREG_UpdateSqmFlags @ 0x1C0082C28 (HUBREG_UpdateSqmFlags.c)
 *     WMI_RegisterSurpriseRemovalNotificationInstance @ 0x1C00869E4 (WMI_RegisterSurpriseRemovalNotificationInstance.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceUsageNotificationEx(__int64 a1, int a2, char a3)
{
  bool v6; // r14
  __int64 v7; // rbx
  unsigned int ForwardProgressResources; // esi
  __int64 v9; // rax
  int v10; // edi
  int v11; // edi
  __int64 v12; // rax
  __int64 v13; // r10
  char IsBootDeviceExternal; // al
  int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax

  v6 = RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") >= 0;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00670F8);
  ForwardProgressResources = 0;
  v9 = *(_QWORD *)(v7 + 24);
  if ( (*(_DWORD *)(v9 + 1640) & 0x10) == 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(v9 + 1640), 0x10u);
    HUBREG_UpdateSqmFlags(*(_QWORD *)(v7 + 24));
  }
  v10 = a2 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( !v11 )
    {
      if ( !a3 )
        return ForwardProgressResources;
      goto LABEL_28;
    }
    if ( v11 != 2 )
      return ForwardProgressResources;
  }
  else
  {
    IsBootDeviceExternal = HUBBOOT_IsBootDeviceExternal(a1);
    if ( !v6 && IsBootDeviceExternal && (*(_DWORD *)(v7 + 32) & 0x20) == 0 )
      return (unsigned int)-1073741637;
  }
  if ( (*(_DWORD *)(v7 + 32) & 0x20) != 0 )
    return ForwardProgressResources;
  ForwardProgressResources = HUBPDO_AllocateForwardProgressResources(*(_QWORD **)(v7 + 24));
  if ( (ForwardProgressResources & 0x80000000) != 0 )
    return ForwardProgressResources;
  v12 = *(_QWORD *)(v7 + 24);
  v13 = *(_QWORD *)(v12 + 8);
  if ( (*(_DWORD *)(v13 + 1336) & 1) != 0 )
  {
    if ( v6 )
    {
LABEL_29:
      *(_BYTE *)(v12 + 1512) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 1280LL) = 1;
      return ForwardProgressResources;
    }
    if ( (unsigned __int8)HUBBOOT_IsBootDeviceExternal(a1) )
    {
      v15 = HUBBOOT_RegisterBootDevice(*(_QWORD *)(v7 + 24), *(_QWORD *)(v7 + 24) + 2232LL);
      v16 = *(unsigned int *)(*(_QWORD *)(v7 + 24) + 1632LL);
      if ( (v16 & 2) == 0 )
        WMI_RegisterSurpriseRemovalNotificationInstance(a1);
      if ( v15 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                  WdfDriverGlobals,
                  WdfDriverGlobals->Driver,
                  off_1C00671E8);
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v17 + 64),
            2u,
            2u,
            0x85u,
            (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids,
            v15);
        }
        HUBMISC_DbgBreak("ExRegisterBootDevice Failed", v16);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              WdfDriverGlobals->Driver,
              off_1C00671E8);
      WPP_RECORDER_SF_(*(_QWORD *)(v18 + 64), 2u, 2u, 0x86u, (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids);
    }
    _InterlockedOr((volatile signed __int32 *)(v7 + 32), 0x20u);
    _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 1336LL), 2u);
LABEL_28:
    v12 = *(_QWORD *)(v7 + 24);
    goto LABEL_29;
  }
  ForwardProgressResources = -1073741810;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v13 + 1432),
      2u,
      5u,
      0x84u,
      (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids,
      -1073741810);
  return ForwardProgressResources;
}
