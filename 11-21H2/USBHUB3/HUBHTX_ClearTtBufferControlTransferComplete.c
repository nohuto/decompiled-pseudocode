/*
 * XREFs of HUBHTX_ClearTtBufferControlTransferComplete @ 0x1C00065F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0001FC8 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002204 (WPP_RECORDER_SF_DD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBHTX_ClearTtBufferControlTransferComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  int v6; // esi
  __int64 v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+30h] [rbp-18h]

  v4 = *(_DWORD *)(a3 + 8);
  v6 = *(_DWORD *)(a4 + 28);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = *(_DWORD *)(a4 + 28);
      v10 = *(_DWORD *)(a3 + 8);
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(*(_QWORD *)(a4 + 168) + 2520LL),
        2u,
        3u,
        0x75u,
        (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids,
        v10,
        v12);
    }
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
    {
      LODWORD(v11) = v4;
      LODWORD(v9) = v6;
      LODWORD(v8) = 0;
      McTemplateK0pqqq_EtwWriteTransfer(
        a1,
        &USBHUB3_ETW_EVENT_HUB_CONTROL_TRANSFER_ERROR,
        0LL,
        *(_QWORD *)(*(_QWORD *)(a4 + 168) + 248LL),
        v8,
        v9,
        v11);
    }
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a4 + 168) + 528LL))(
    *(_QWORD *)(*(_QWORD *)(a4 + 168) + 376LL),
    *(_QWORD *)(a4 + 176));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
  ExFreePoolWithTag((PVOID)a4, 0x68334855u);
}
