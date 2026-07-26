/*
 * XREFs of ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x1C007128C
 * Callers:
 *     ?ndisQueuedCheckForHang@@YAXPEAX@Z @ 0x1C0007FF0 (-ndisQueuedCheckForHang@@YAXPEAX@Z.c)
 *     ndisQueuedResetMiniport @ 0x1C00715E0 (ndisQueuedResetMiniport.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     McTemplateK0jqxq_EtwWriteTransfer @ 0x1C0006AF8 (McTemplateK0jqxq_EtwWriteTransfer.c)
 *     NdisMIndicateStatusEx @ 0x1C001A410 (NdisMIndicateStatusEx.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0020254 (WPP_RECORDER_SF_qd_ea_1C0020254.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     NdisMSleep @ 0x1C0040E00 (NdisMSleep.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C006E914 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     NdisMResetComplete @ 0x1C006F9A0 (NdisMResetComplete.c)
 *     McTemplateK0jqxzqq_EtwWriteTransfer @ 0x1C007162C (McTemplateK0jqxzqq_EtwWriteTransfer.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00AF268 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00AF628 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ndisMInvokeReset @ 0x1C012E030 (ndisMInvokeReset.c)
 */

void __fastcall ndisMResetMiniportInternal(__int64 a1, int a2)
{
  int v4; // edx
  bool v5; // zf
  KSPIN_LOCK *v6; // rcx
  KIRQL v7; // dl
  __int64 v8; // rcx
  NDIS_STATUS v9; // edi
  KIRQL v10; // si
  KIRQL v11; // dl
  char v12[8]; // [rsp+30h] [rbp-79h]
  KIRQL NewIrql; // [rsp+50h] [rbp-59h] BYREF
  BOOLEAN AddressingReset[15]; // [rsp+51h] [rbp-58h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+60h] [rbp-49h] BYREF

  NewIrql = 0;
  AddressingReset[0] = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x11u,
      0xDu,
      (struct _GUID *)&WPP_5c8f887eaf433a39d6a8a30c25163583_Traceguids,
      a1,
      a2);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)a1, &NewIrql);
  if ( (*(_DWORD *)(a1 + 120) & 0x81200000) != 0
    || (*(_DWORD *)(a1 + 124) & 0x80000) != 0
    || (unsigned int)(*(_DWORD *)(a1 + 3880) - 2) <= 2 )
  {
    v11 = NewIrql;
    *(_QWORD *)(a1 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v11);
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
    if ( (byte_1C00F7645 & 0x40) != 0 )
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
    if ( (byte_1C00F7641 & 4) != 0 )
      McTemplateK0jqxq_EtwWriteTransfer(
        v8,
        (__int64)&CallMiniportReset,
        a1 + 4008,
        a1 + 4008,
        *(_DWORD *)(a1 + 4056),
        *(_QWORD *)(a1 + 4024),
        3);
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
          (struct _GUID *)&WPP_5c8f887eaf433a39d6a8a30c25163583_Traceguids);
      v10 = KfRaiseIrql(2u);
      v9 = (*(__int64 (__fastcall **)(BOOLEAN *, _QWORD))(*(_QWORD *)(a1 + 3760) + 192LL))(
             AddressingReset,
             *(_QWORD *)(a1 + 24));
      if ( v10 != 2 )
        KeLowerIrql(v10);
    }
    else
    {
      v9 = ndisMInvokeReset(a1);
    }
    if ( v9 != 259 )
      NdisMResetComplete((NDIS_HANDLE)a1, v9, AddressingReset[0]);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v12 = a2;
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x11u,
        0xFu,
        (struct _GUID *)&WPP_5c8f887eaf433a39d6a8a30c25163583_Traceguids,
        a1,
        *(_QWORD *)v12);
    }
  }
}
