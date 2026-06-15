/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x140028128
 * Callers:
 *     _CAudioProcessor::CAudioProcessor_::_1_::dtor$8 @ 0x14003444C (_CAudioProcessor--CAudioProcessor_--_1_--dtor$8.c)
 *     _CRealTimeSafeList_CConnectionNode_ATLRT::CAtlList_CConnectionNode___CConnectionNodeTraits___::CRealTimeSafeList_CConnectionNode_ATLRT::CAtlList_CConnectionNode___CConnectionNodeTraits____::_1_::dtor$0 @ 0x140034776 (_CRealTimeSafeList_CConnectionNode_ATLRT--CAtlList_CConnectionNode___CConnectionNodeTraits___--C.c)
 *     ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x140037DEC (--_E-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ??1?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAA@XZ @ 0x14003826C (--1-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits.c)
 *     ??1?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAA@XZ @ 0x14005EA50 (--1-$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAA@XZ.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x1400281A4 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 v4; // rbx
  char *v6; // rdi

  v4 = a3;
  v6 = &a1[a3 * a2];
  while ( v4-- )
  {
    v6 -= a2;
    _guard_xfg_dispatch_icall_fptr();
  }
}
