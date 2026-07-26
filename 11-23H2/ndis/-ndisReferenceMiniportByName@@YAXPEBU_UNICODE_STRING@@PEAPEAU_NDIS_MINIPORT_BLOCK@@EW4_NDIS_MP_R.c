/*
 * XREFs of ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C014B910
 * Callers:
 *     ?ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_INSTANCE@@KPEAK@Z @ 0x1C0026170 (-ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_IN.c)
 *     NdisEnumerateFilterModules @ 0x1C0067140 (NdisEnumerateFilterModules.c)
 *     ?ndisIMDeleteIfStackEntry@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006AA88 (-ndisIMDeleteIfStackEntry@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C008D894 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x1C008E358 (-ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KP.c)
 *     ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x1C008EFD0 (-ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_D.c)
 *     ndisHandleBindNotification @ 0x1C012EAE0 (ndisHandleBindNotification.c)
 *     ndisHandleLegacyBindIoctl @ 0x1C012EC4C (ndisHandleLegacyBindIoctl.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00030D0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00113A8 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisEqualUnicodeStringDispatchLevel@@YA_NPEBU_UNICODE_STRING@@0@Z @ 0x1C0026D84 (-ndisEqualUnicodeStringDispatchLevel@@YA_NPEBU_UNICODE_STRING@@0@Z.c)
 *     WPP_RECORDER_SF_Z @ 0x1C0026ED8 (WPP_RECORDER_SF_Z.c)
 */

void __fastcall ndisReferenceMiniportByName(
        const struct _UNICODE_STRING *a1,
        struct _NDIS_MINIPORT_BLOCK **a2,
        char a3,
        unsigned __int8 a4)
{
  unsigned int Number; // r14d
  KIRQL v9; // al
  struct _NDIS_M_DRIVER_BLOCK *v10; // rdi
  KIRQL v11; // r15
  struct _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  int v13; // eax
  _NDIS_BIND_PATHS *BindPaths; // rdx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF

  DestinationString = 0LL;
  Number = 1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xAu,
      (struct _GUID *)&WPP_3046af50312d39676cde585a7c547f92_Traceguids,
      &a1->Length);
  *a2 = 0LL;
  DestinationString.Length = a1->Length;
  DestinationString.MaximumLength = DestinationString.Length + 2;
  DestinationString.Buffer = (wchar_t *)ExAllocatePool2(
                                          66LL,
                                          (unsigned __int16)(DestinationString.Length + 2),
                                          1953711182);
  if ( DestinationString.Buffer )
  {
    RtlUpcaseUnicodeString(&DestinationString, a1, 0);
    v9 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v10 = ndisMiniDriverList;
    v11 = v9;
    if ( !ndisMiniDriverList )
      goto LABEL_16;
    while ( 1 )
    {
      KeAcquireSpinLockAtDpcLevel(&v10->Ref.SpinLock);
      MiniportQueue = v10->MiniportQueue;
      if ( !MiniportQueue )
        goto LABEL_15;
      while ( 1 )
      {
        v13 = MiniportQueue->PnPFlags & 0x2000000;
        if ( a3 )
          break;
        if ( !v13 )
        {
          BindPaths = MiniportQueue->BindPaths;
          if ( BindPaths )
          {
            if ( BindPaths->Number >= Number
              && ndisEqualUnicodeStringDispatchLevel(&DestinationString, BindPaths->Paths) )
            {
              if ( *a2 )
              {
                ndisDereferenceMiniport(*a2, a4);
                *a2 = 0LL;
              }
              Number = MiniportQueue->BindPaths->Number;
              if ( ndisReferenceMiniport(MiniportQueue, a4) )
                goto LABEL_14;
              goto LABEL_15;
            }
          }
        }
LABEL_19:
        MiniportQueue = MiniportQueue->NextMiniport;
        if ( !MiniportQueue )
          goto LABEL_15;
      }
      if ( v13 || !ndisEqualUnicodeStringDispatchLevel(&DestinationString, &MiniportQueue->MiniportName) )
        goto LABEL_19;
      if ( ndisReferenceMiniport(MiniportQueue, a4) )
LABEL_14:
        *a2 = MiniportQueue;
LABEL_15:
      KeReleaseSpinLockFromDpcLevel(&v10->Ref.SpinLock);
      v10 = v10->NextDriver;
      if ( !v10 )
      {
LABEL_16:
        KeReleaseSpinLock(&ndisMiniDriverListLock, v11);
        ExFreePoolWithTag(DestinationString.Buffer, 0);
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xDu,
            0xBu,
            (struct _GUID *)&WPP_3046af50312d39676cde585a7c547f92_Traceguids,
            *a2);
        return;
      }
    }
  }
}
