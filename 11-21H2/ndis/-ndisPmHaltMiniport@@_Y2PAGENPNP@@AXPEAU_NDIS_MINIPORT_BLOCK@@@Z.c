/*
 * XREFs of ?ndisPmHaltMiniport@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0139F48
 * Callers:
 *     ?ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0014FF8 (-ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIP.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006130 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     NdisResetEvent @ 0x1C00088B0 (NdisResetEvent.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C00146B0 (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ?ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00147A8 (-ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0020D34 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x1C010BB6C (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C013A30C (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisPmHaltMiniport(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, __int64 a3)
{
  unsigned int PnPFlags; // eax
  unsigned __int64 *p_Lock; // rcx
  KIRQL v6; // dl
  unsigned int v7; // eax
  KIRQL NewIrql; // [rsp+40h] [rbp+8h] BYREF

  NewIrql = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x2Cu,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      a1);
  NdisTraceLoggingDeviceRemoved((__int64)a1, 1u, a3);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  NdisResetEvent(&a1->OpenReadyEvent);
  PnPFlags = a1->PnPFlags;
  a1->MiniportThread = 0LL;
  p_Lock = &a1->Lock;
  if ( (PnPFlags & 0x4000) != 0 )
  {
    KeReleaseSpinLock(p_Lock, NewIrql);
    ndisDereferencePackage((PVOID *)&ndisPkgs);
  }
  else
  {
    KeReleaseSpinLock(p_Lock, NewIrql);
    ndisMSetMiniportReadyForBinding(a1, 0, 2048, RunSynchronous);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    v6 = NewIrql;
    v7 = a1->Flags & 0xFFFFFFFE;
    a1->PnPFlags |= 0x4004u;
    a1->MiniportThread = 0LL;
    a1->Flags = v7 | 0x80000000;
    KeReleaseSpinLock(&a1->Lock, v6);
    ndisMCommonHaltMiniport(a1, ~(unsigned __int8)(a1->Flags >> 6) & 2 | 0x3C);
    _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 0x10u);
    ndisMDeregisterBugCheckHandler(a1);
    ndisDereferencePackage((PVOID *)&ndisPkgs);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x2Du,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        a1);
  }
}
