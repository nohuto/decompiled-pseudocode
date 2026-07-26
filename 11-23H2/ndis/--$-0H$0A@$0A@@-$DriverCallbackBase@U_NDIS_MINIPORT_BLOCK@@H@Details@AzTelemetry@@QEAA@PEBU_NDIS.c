/*
 * XREFs of ??$?0H$0A@$0A@@?$DriverCallbackBase@U_NDIS_MINIPORT_BLOCK@@H@Details@AzTelemetry@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@AEBH@Z @ 0x1C00699B8
 * Callers:
 *     ?ndisMInvokeStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C00340F0 (-ndisMInvokeStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisMInvokeAddDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006C354 (-ndisMInvokeAddDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInvokeFilterResourceRequirements@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C006C538 (-ndisMInvokeFilterResourceRequirements@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0023508 (_tlgKeywordOn.c)
 */

__int64 __fastcall AzTelemetry::Details::DriverCallbackBase<_NDIS_MINIPORT_BLOCK,int>::DriverCallbackBase<_NDIS_MINIPORT_BLOCK,int>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // r9
  bool v6; // zf
  char v7; // al

  *(_QWORD *)(a1 + 8) = a3;
  v3 = 0LL;
  *(_QWORD *)a1 = &AzTelemetry::Details::DriverCallbackBase<_NDIS_MINIPORT_BLOCK,int>::`vftable';
  v4 = a2;
  if ( (unsigned int)dword_1C00F41D8 <= 4 || (v6 = tlgKeywordOn((__int64)&dword_1C00F41D8, 512LL) == 0, v7 = 1, v6) )
    v7 = v3;
  *(_BYTE *)(a1 + 16) = v7;
  *(_QWORD *)(a1 + 40) = v3;
  *(_QWORD *)(a1 + 24) = v4;
  *(_QWORD *)(a1 + 32) = v3;
  *(_QWORD *)(a1 + 48) = v3;
  if ( v7 )
    *(LARGE_INTEGER *)(a1 + 32) = KeQueryPerformanceCounter((PLARGE_INTEGER)(a1 + 40));
  return a1;
}
