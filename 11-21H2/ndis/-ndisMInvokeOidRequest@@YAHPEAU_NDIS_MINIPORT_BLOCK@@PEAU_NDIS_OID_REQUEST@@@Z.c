/*
 * XREFs of ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0101920
 * Callers:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000A6C0 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMSendPmParametersOidForSuspend @ 0x1C00A6DAC (ndisMSendPmParametersOidForSuspend.c)
 *     ?ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z @ 0x1C00A84D0 (-ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z.c)
 *     ?ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C00A97A4 (-ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisMInvokeBlockingOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0122128 (-ndisMInvokeBlockingOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisAddWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012B414 (-ndisAddWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRemoveWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012B93C (-ndisRemoveWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C0009088 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     ?ndisIsMiniportVerified@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1C0009A64 (-ndisIsMiniportVerified@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 *     ?ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C0009A80 (-ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisOidNeedArmWatchDog@@YAEPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0009D58 (-ndisOidNeedArmWatchDog@@YAEPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z @ 0x1C0009D70 (-WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C0009D80 (-ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C000B180 (WPP_RECORDER_SF_qDq.c)
 *     WPP_RECORDER_SF_qDqd @ 0x1C000B240 (WPP_RECORDER_SF_qDqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C01010E0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

NDIS_STATUS __fastcall ndisMInvokeOidRequest(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // r13
  __int64 Oid; // r12
  NDIS_STATUS result; // eax
  NDIS_STATUS v7; // ebx
  struct _NDIS_OID_REQUEST *v8; // rsi
  _NDIS_M_DRIVER_BLOCK *v9; // rax
  struct _NDIS_OID_REQUEST *v10; // r14
  _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *value; // rcx
  NDISWATCHDOG__ *m_ptr; // r15
  int v13; // r8d
  struct NDISWATCHDOG__ *v14; // rax
  int (__fastcall *OidRequestHandler)(void *, _NDIS_OID_REQUEST *); // rbx
  struct NDISWATCHDOG__ *v16; // rsi
  UCHAR Type; // al
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rcx
  int v19; // edx
  _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  BOOLEAN v21; // al
  unsigned int v22; // eax
  __int64 v23; // rbx
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
              (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
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
              (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
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
            v13,
            0xE4u,
            (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
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
        (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
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
    v14 = WatchdogFromHandle(m_ptr);
    ndisWaitForKernelObject(v14 + 42);
    OidRequestHandler = DriverHandle->MiniportDriverCharacteristics.OidRequestHandler;
    v16 = WatchdogFromHandle(m_ptr);
    *((_DWORD *)v16 + 50) = 846677070;
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
        v19 = 35000;
        goto LABEL_15;
      }
      BaseMiniport = a1->BaseMiniport;
    }
    v19 = 35000;
    if ( !BaseMiniport )
    {
LABEL_15:
      *((_DWORD *)v16 + 51) = v19;
      *((_QWORD *)v16 + 26) = &ndisGlobalTriageBlock;
      *((_QWORD *)v16 + 27) = a1;
      *((_QWORD *)v16 + 28) = MEMORY[0xFFFFF78000000008];
      *((_QWORD *)v16 + 29) = KeGetCurrentThread();
      v22 = g_ndisWatchdogSequenceNumber;
      *((_QWORD *)v16 + 32) = OidRequestHandler;
      *((_QWORD *)v16 + 30) = Oid;
      g_ndisWatchdogSequenceNumber = v22 + 1;
      *((_DWORD *)v16 + 41) = v22 + 1;
      v23 = -10000LL * *((unsigned int *)v16 + 51);
      *((_DWORD *)v16 + 48) = 35;
      *((_DWORD *)v16 + 40) = 1;
      KeClearEvent((PRKEVENT)v16 + 7);
      KeSetTimerEx((PKTIMER)v16 + 1, (LARGE_INTEGER)v23, 0, (PKDPC)v16);
      v8 = v33;
      goto LABEL_16;
    }
    if ( (BaseMiniport->Flags & 0x100) != 0 )
    {
      v21 = 0;
      goto LABEL_14;
    }
    PhysicalDeviceObject = BaseMiniport->PhysicalDeviceObject;
    SecondsRemaining = 0;
    v21 = PoQueryWatchdogTime(PhysicalDeviceObject, &SecondsRemaining);
    if ( !v21 )
    {
      v19 = 35000;
LABEL_14:
      *((_BYTE *)v16 + 248) = v21;
      goto LABEL_15;
    }
    if ( SecondsRemaining < 3 || (v31 = 1000 * SecondsRemaining - 3000, v31 < 0xBB8) )
    {
      v31 = 3000;
    }
    else
    {
      v19 = 35000;
      if ( v31 >= 0x88B8 )
      {
LABEL_33:
        v21 = 1;
        goto LABEL_14;
      }
    }
    v19 = v31;
    goto LABEL_33;
  }
  if ( result != 259 )
  {
    v8 = v33;
    goto LABEL_26;
  }
  return result;
}
