/*
 * XREFs of ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x1C006BEA8
 * Callers:
 *     ?ndisQueuedCheckForHang@@YAXPEAX@Z @ 0x1C00091D0 (-ndisQueuedCheckForHang@@YAXPEAX@Z.c)
 *     ndisQueuedResetMiniport @ 0x1C006C200 (ndisQueuedResetMiniport.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0014380 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     NdisMSleep @ 0x1C0015AB0 (NdisMSleep.c)
 *     NdisMIndicateStatusEx @ 0x1C0019EA0 (NdisMIndicateStatusEx.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0069538 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     NdisMResetComplete @ 0x1C006A5D0 (NdisMResetComplete.c)
 *     McTemplateK0jqxzqq_EtwWriteTransfer @ 0x1C006C24C (McTemplateK0jqxzqq_EtwWriteTransfer.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00A95E8 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00A9BF8 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ndisMInvokeReset @ 0x1C0122530 (ndisMInvokeReset.c)
 */

void __fastcall ndisMResetMiniportInternal(__int64 a1, int a2)
{
  int v4; // edx
  bool v5; // zf
  KSPIN_LOCK *v6; // rcx
  KIRQL v7; // dl
  NDIS_STATUS v8; // edi
  KIRQL v9; // r14
  KIRQL v10; // dl
  char v11[8]; // [rsp+30h] [rbp-79h]
  KIRQL NewIrql; // [rsp+50h] [rbp-59h] BYREF
  BOOLEAN AddressingReset[15]; // [rsp+51h] [rbp-58h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+60h] [rbp-49h] BYREF

  NewIrql = 0;
  AddressingReset[0] = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x11u,
      0xDu,
      (struct _GUID *)&WPP_35d184c8b2d837816e9b9ffd1456ac53_Traceguids,
      a1,
      a2);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)a1, &NewIrql);
  if ( (*(_DWORD *)(a1 + 120) & 0x81200000) != 0
    || (*(_DWORD *)(a1 + 124) & 0x80000) != 0
    || (unsigned int)(*(_DWORD *)(a1 + 3880) - 2) <= 2 )
  {
    v10 = NewIrql;
    *(_QWORD *)(a1 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v10);
  }
  else
  {
    if ( a2 == 1 )
    {
      ++*(_WORD *)(a1 + 1784);
    }
    else if ( (unsigned int)(a2 - 2) <= 1 )
    {
      ++*(_WORD *)(a1 + 1786);
    }
    if ( (byte_1C00EE585 & 0x40) != 0 )
      McTemplateK0jqxzqq_EtwWriteTransfer(
        *(unsigned __int16 *)(a1 + 1784) + *(unsigned __int16 *)(a1 + 1786),
        v4,
        a1 + 4008,
        a1 + 4008,
        *(_DWORD *)(a1 + 4056),
        *(_QWORD *)(a1 + 4024),
        *(_QWORD *)(*(_QWORD *)(a1 + 3856) + 8LL),
        a2,
        *(_WORD *)(a1 + 1784) + *(_WORD *)(a1 + 1786));
    *(_DWORD *)(a1 + 120) |= 0x200000u;
    *(_QWORD *)(a1 + 392) = 0LL;
    ndisMSwapOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)a1, 1u);
    *(_DWORD *)(a1 + 120) |= 0x80000u;
    while ( 1 )
    {
      v5 = *(_DWORD *)(a1 + 1824) == 0;
      v6 = (KSPIN_LOCK *)(a1 + 96);
      v7 = NewIrql;
      *(_QWORD *)(a1 + 520) = 0LL;
      if ( v5 )
        break;
      KeReleaseSpinLock(v6, v7);
      NdisMSleep(0x32u);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)a1, &NewIrql);
    }
    KeReleaseSpinLock(v6, v7);
    memset(&StatusIndication, 0, sizeof(StatusIndication));
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.SourceHandle = (void *)a1;
    StatusIndication.StatusCode = 1073807364;
    StatusIndication.StatusBuffer = 0LL;
    StatusIndication.StatusBufferSize = 0;
    NdisMIndicateStatusEx((NDIS_HANDLE)a1, &StatusIndication);
    if ( (byte_1C00EE581 & 4) != 0 )
      McTemplateK0jqxd_EtwWriteTransfer();
    if ( *(_QWORD *)(a1 + 4448) )
    {
      if ( (*(_DWORD *)(a1 + 120) & 0x80u) == 0 )
        ndisWdmSetBusySync(a1, 36LL, 0LL);
      else
        ndisWdfSetBusySync(a1, 36LL, 0LL);
    }
    if ( *(_BYTE *)(a1 + 32) < 6u )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x11u,
          0xEu,
          (struct _GUID *)&WPP_35d184c8b2d837816e9b9ffd1456ac53_Traceguids);
      v9 = KfRaiseIrql(2u);
      v8 = (*(__int64 (__fastcall **)(BOOLEAN *, _QWORD))(*(_QWORD *)(a1 + 3760) + 192LL))(
             AddressingReset,
             *(_QWORD *)(a1 + 24));
      if ( v9 != 2 )
        KeLowerIrql(v9);
    }
    else
    {
      v8 = ndisMInvokeReset(a1);
    }
    if ( v8 != 259 )
      NdisMResetComplete((NDIS_HANDLE)a1, v8, AddressingReset[0]);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v11 = a2;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x11u,
        0xFu,
        (struct _GUID *)&WPP_35d184c8b2d837816e9b9ffd1456ac53_Traceguids,
        a1,
        *(_QWORD *)v11);
    }
  }
}
