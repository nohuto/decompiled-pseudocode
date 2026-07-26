/*
 * XREFs of ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C010C960
 * Callers:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0009C80 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMSendPmParametersOidForSuspend @ 0x1C00AD154 (ndisMSendPmParametersOidForSuspend.c)
 *     ?ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z @ 0x1C00AE650 (-ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z.c)
 *     ?ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C00AF42C (-ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisMInvokeBlockingOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C012DBA8 (-ndisMInvokeBlockingOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisAddWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C013724C (-ndisAddWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRemoveWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01377A4 (-ndisRemoveWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C0008AF8 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     ?ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C0008D2C (-ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ??$ndisAzTelemetryOidDelivered@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C0008D80 (--$ndisAzTelemetryOidDelivered@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_O.c)
 *     ?ndisIsMiniportVerified@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1C0008DB0 (-ndisIsMiniportVerified@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 *     ?WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z @ 0x1C0009070 (-WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisOidNeedArmWatchDog@@YAEPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000907C (-ndisOidNeedArmWatchDog@@YAEPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C00090A0 (-ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z.c)
 *     WPP_RECORDER_SF_qDqd @ 0x1C00092E0 (WPP_RECORDER_SF_qDqd.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C00093A0 (WPP_RECORDER_SF_qDq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C5C0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

NDIS_STATUS __fastcall ndisMInvokeOidRequest(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // r15
  __int64 Oid; // r12
  NDIS_STATUS result; // eax
  NDIS_STATUS v7; // ebx
  struct _NDIS_OID_REQUEST *v8; // rsi
  _NDIS_M_DRIVER_BLOCK *v9; // rax
  struct _NDIS_OID_REQUEST *v10; // rbp
  _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *value; // rcx
  NDISWATCHDOG__ *m_ptr; // r13
  struct NDISWATCHDOG__ *v13; // rax
  int (__fastcall *OidRequestHandler)(void *, _NDIS_OID_REQUEST *); // rbx
  struct NDISWATCHDOG__ *v15; // rsi
  UCHAR Type; // al
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rcx
  int v18; // edx
  _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  BOOLEAN v20; // al
  unsigned int v21; // eax
  __int64 v22; // rbx
  int v23; // r8d
  _NDIS_M_DRIVER_BLOCK *v24; // rax
  _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *v25; // rcx
  int v26; // r8d
  NDIS_STATUS v27; // eax
  int v28; // edx
  int v29; // r8d
  unsigned __int16 v30; // r9
  ULONG v31; // eax
  ULONG SecondsRemaining; // [rsp+A8h] [rbp+10h] BYREF
  struct _NDIS_OID_REQUEST *v33; // [rsp+B0h] [rbp+18h] BYREF
  _NDIS_M_DRIVER_BLOCK *v34; // [rsp+B8h] [rbp+20h]

  DriverHandle = a1->DriverHandle;
  Oid = a2->DATA.QUERY_INFORMATION.Oid;
  v34 = DriverHandle;
  v33 = 0LL;
  result = ndisOidCloneForCompatibility(&a1->Header, a2, 1, &v33);
  v7 = result;
  if ( !result )
  {
    v8 = v33;
    v9 = a1->DriverHandle;
    v10 = a2;
    if ( v33 )
      v10 = v33;
    value = v9->UnhookedCharacteristics.__ptr_.__value_;
    if ( !value || value->OidRequestHandler == v9->MiniportDriverCharacteristics.OidRequestHandler )
      m_ptr = a1->PendingOidWatchdog.m_ptr;
    else
      m_ptr = a1->HookedOidWatchdog.m_ptr;
    if ( !ndisOidNeedArmWatchDog(a2, a1) || m_ptr == (NDISWATCHDOG__ *)-1LL )
    {
LABEL_16:
      ndisAzTelemetryOidDelivered<_NDIS_MINIPORT_BLOCK>((__int64)a1);
      v24 = a1->DriverHandle;
      v25 = v24->UnhookedCharacteristics.__ptr_.__value_;
      if ( !v25 || v25->OidRequestHandler == v24->MiniportDriverCharacteristics.OidRequestHandler )
      {
        if ( ndisIsMiniportVerified(DriverHandle) )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qDq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              v26,
              0xE6u,
              (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
              (char)a1,
              Oid,
              v10);
          v27 = (*((__int64 (__fastcall **)(void *, struct _NDIS_OID_REQUEST *, struct _NDIS_MINIPORT_BLOCK *, void *, int (__fastcall *)(void *, _NDIS_OID_REQUEST *)))ndisVerifierNdisDispatch
                 + 3))(
                  a1->MiniportAdapterContext,
                  v10,
                  a1,
                  a1->VerifierContext,
                  v34->MiniportDriverCharacteristics.OidRequestHandler);
          v7 = v27;
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_23;
          v30 = 231;
        }
        else
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qDq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              v26,
              0xE8u,
              (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
              (char)a1,
              Oid,
              v10);
          v27 = v34->MiniportDriverCharacteristics.OidRequestHandler(a1->MiniportAdapterContext, v10);
          v7 = v27;
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_23;
          v30 = 233;
        }
      }
      else
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qDq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            v23,
            0xE4u,
            (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
            (char)a1,
            Oid,
            v10);
        v27 = v34->MiniportDriverCharacteristics.OidRequestHandler(a1->MiniportAdapterContext, v10);
        v7 = v27;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_23;
        v30 = 229;
      }
      WPP_RECORDER_SF_qDqd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v28,
        v29,
        v30,
        (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
        (char)a1,
        Oid,
        (char)v10,
        v27);
LABEL_23:
      if ( v7 == 259 )
        return v7;
      if ( ndisOidNeedArmWatchDog(a2, a1) )
        ndisDisarmWatchdogAsync(m_ptr);
LABEL_26:
      if ( v8 )
        ndisOidFreeInternalCloneRequest((struct _NDIS_FILTER_BLOCK *)a1, v8, 1, 0LL);
      return v7;
    }
    v13 = WatchdogFromHandle(m_ptr);
    ndisWaitForKernelObject(v13 + 42);
    OidRequestHandler = DriverHandle->MiniportDriverCharacteristics.OidRequestHandler;
    v15 = WatchdogFromHandle(m_ptr);
    *((_DWORD *)v15 + 50) = 846677070;
    Type = a1->Header.Type;
    if ( a1->Header.Type == 17 )
    {
      BaseMiniport = a1;
    }
    else if ( Type == 5 )
    {
      BaseMiniport = *(_NDIS_MINIPORT_BLOCK **)&a1->Reserved4.Length;
    }
    else
    {
      if ( Type != 18 )
      {
        v18 = 35000;
        goto LABEL_15;
      }
      BaseMiniport = a1->BaseMiniport;
    }
    v18 = 35000;
    if ( !BaseMiniport )
    {
LABEL_15:
      *((_DWORD *)v15 + 51) = v18;
      *((_QWORD *)v15 + 26) = &ndisGlobalTriageBlock;
      *((_QWORD *)v15 + 27) = a1;
      *((_QWORD *)v15 + 28) = MEMORY[0xFFFFF78000000008];
      *((_QWORD *)v15 + 29) = KeGetCurrentThread();
      v21 = g_ndisWatchdogSequenceNumber;
      *((_QWORD *)v15 + 32) = OidRequestHandler;
      *((_QWORD *)v15 + 30) = Oid;
      g_ndisWatchdogSequenceNumber = v21 + 1;
      *((_DWORD *)v15 + 41) = v21 + 1;
      v22 = -10000LL * *((unsigned int *)v15 + 51);
      *((_DWORD *)v15 + 48) = 35;
      *((_DWORD *)v15 + 40) = 1;
      KeClearEvent((PRKEVENT)v15 + 7);
      KeSetTimerEx((PKTIMER)v15 + 1, (LARGE_INTEGER)v22, 0, (PKDPC)v15);
      v8 = v33;
      goto LABEL_16;
    }
    if ( (BaseMiniport->Flags & 0x100) != 0 )
    {
      v20 = 0;
      goto LABEL_14;
    }
    PhysicalDeviceObject = BaseMiniport->PhysicalDeviceObject;
    SecondsRemaining = 0;
    v20 = PoQueryWatchdogTime(PhysicalDeviceObject, &SecondsRemaining);
    if ( !v20 )
    {
      v18 = 35000;
LABEL_14:
      *((_BYTE *)v15 + 248) = v20;
      goto LABEL_15;
    }
    if ( SecondsRemaining < 3 || (v31 = 1000 * SecondsRemaining - 3000, v31 < 0xBB8) )
    {
      v31 = 3000;
    }
    else
    {
      v18 = 35000;
      if ( v31 >= 0x88B8 )
      {
LABEL_33:
        v20 = 1;
        goto LABEL_14;
      }
    }
    v18 = v31;
    goto LABEL_33;
  }
  if ( result != 259 )
  {
    v8 = v33;
    goto LABEL_26;
  }
  return result;
}
