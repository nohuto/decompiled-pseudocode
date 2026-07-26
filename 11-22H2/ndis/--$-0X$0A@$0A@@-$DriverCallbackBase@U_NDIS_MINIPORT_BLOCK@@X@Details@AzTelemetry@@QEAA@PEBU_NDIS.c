/*
 * XREFs of ??$?0X$0A@$0A@@?$DriverCallbackBase@U_NDIS_MINIPORT_BLOCK@@X@Details@AzTelemetry@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0023D5C
 * Callers:
 *     ??0MiniportHaltTelemetry@AzTelemetry@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@W4_NDIS_HALT_ACTION@@@Z @ 0x1C001431C (--0MiniportHaltTelemetry@AzTelemetry@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@W4_NDIS_HALT_ACTION@@@Z.c)
 *     ??0MiniportDevicePnPEventNotify@AzTelemetry@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@@Z @ 0x1C0023D24 (--0MiniportDevicePnPEventNotify@AzTelemetry@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_E.c)
 *     ?ndisMInvokeRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006C680 (-ndisMInvokeRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0023378 (_tlgKeywordOn.c)
 */

__int64 __fastcall AzTelemetry::Details::DriverCallbackBase<_NDIS_MINIPORT_BLOCK,void>::DriverCallbackBase<_NDIS_MINIPORT_BLOCK,void>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // r9
  char v5; // al
  bool v7; // zf

  v2 = 0LL;
  *(_QWORD *)a1 = &AzTelemetry::Details::DriverCallbackBase<_NDIS_MINIPORT_BLOCK,void>::`vftable';
  v3 = a2;
  if ( (unsigned int)dword_1C00F41D8 <= 4 || (v7 = tlgKeywordOn((__int64)&dword_1C00F41D8, 512LL) == 0, v5 = 1, v7) )
    v5 = v2;
  *(_BYTE *)(a1 + 8) = v5;
  *(_QWORD *)(a1 + 32) = v2;
  *(_QWORD *)(a1 + 16) = v3;
  *(_QWORD *)(a1 + 24) = v2;
  *(_QWORD *)(a1 + 40) = v2;
  if ( v5 )
    *(LARGE_INTEGER *)(a1 + 24) = KeQueryPerformanceCounter((PLARGE_INTEGER)(a1 + 32));
  return a1;
}
