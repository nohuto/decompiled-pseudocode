/*
 * XREFs of LogDiagCDS @ 0x1C0065CE8
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0065210 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvChangeDisplaySettings @ 0x1C00658C4 (DrvChangeDisplaySettings.c)
 * Callees:
 *     ?FillSimpleDevModeField@@YAXQEAU_devicemodeW@@PEAU_DXGK_DIAG_SIMPLE_DEVMODE@@@Z @ 0x1C0065ED4 (-FillSimpleDevModeField@@YAXQEAU_devicemodeW@@PEAU_DXGK_DIAG_SIMPLE_DEVMODE@@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00D05E0 (DrvDxgkLogCodePointPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

void __fastcall LogDiagCDS(
        __int64 a1,
        struct _devicemodeW *a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        unsigned int a10,
        unsigned int a11,
        unsigned int a12,
        __int16 a13,
        struct _devicemodeW *a14)
{
  PVOID v14; // rdi
  __int64 Pool2; // rbx
  unsigned int v20; // edx
  int v21; // edx
  int v22; // edx
  __int64 v23; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-B8h] BYREF

  v14 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x73726447) != 0x73726447
    || (v23 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(260LL, 160LL);
LABEL_3:
    if ( !Pool2 )
    {
LABEL_15:
      WdLogSingleEntry1(6LL, 160LL);
      DrvDxgkLogCodePointPacket(5LL, a10, a11, a12);
      return;
    }
    goto LABEL_4;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v23) != 1936876615 )
  {
    if ( ++v23 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_2;
  }
  Pool2 = ExAllocatePool2(260LL, 176LL);
  if ( !Pool2 )
    goto LABEL_15;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v14,
                             Pool2,
                             BackTrace) )
      goto LABEL_14;
    Pool2 += 16LL;
    goto LABEL_3;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v14,
                           Pool2,
                           BackTrace) )
  {
LABEL_14:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    goto LABEL_15;
  }
LABEL_4:
  memset((void *)Pool2, 0, 0xA0uLL);
  *(_DWORD *)(Pool2 + 40) = 0;
  *(_QWORD *)(Pool2 + 32) = 0LL;
  *(_DWORD *)Pool2 = 5;
  *(_DWORD *)(Pool2 + 4) = 160;
  *(_OWORD *)(Pool2 + 8) = 0LL;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_QWORD *)(Pool2 + 64) = a9;
  *(_DWORD *)(Pool2 + 56) = a10;
  *(_DWORD *)(Pool2 + 52) = a11;
  *(_DWORD *)(Pool2 + 60) = a12;
  v20 = (a7 != 0 ? 0x20 : 0) | (a6 != 0 ? 0x10 : 0) | (a5 != 0 ? 8 : 0) | (a4 == 0 ? 4 : 0) | (a1 != 0 ? 2 : 0) | (a14 != 0LL ? 0x1000 : 0) | *(_DWORD *)(Pool2 + 48) & 0xFFFFEF80 | (a2 != 0LL);
  v21 = (((a8 != 0 ? 0x40 : 0) | (unsigned __int16)v20) ^ (unsigned __int16)(a13 << 13)) & 0xE000 ^ ((a8 != 0 ? 0x40 : 0) | v20);
  *(_DWORD *)(Pool2 + 48) = v21;
  if ( a3 )
  {
    v22 = v21 | 0x800;
    *(_DWORD *)(Pool2 + 48) = v22;
    *(_DWORD *)(Pool2 + 48) = v22 ^ ((unsigned __int16)v22 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(a3 + 256) << 7)) & 0x780;
  }
  FillSimpleDevModeField(a2, (struct _DXGK_DIAG_SIMPLE_DEVMODE *)(Pool2 + 72));
  FillSimpleDevModeField(a14, (struct _DXGK_DIAG_SIMPLE_DEVMODE *)(Pool2 + 116));
  ((void (__fastcall *)(__int64))qword_1C0296790)(Pool2);
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    (void *)Pool2);
}
