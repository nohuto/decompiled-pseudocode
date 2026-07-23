/*
 * XREFs of XmEmulateStream @ 0x1403BE6C0
 * Callers:
 *     XmEmulateInterrupt @ 0x1403BE61C (XmEmulateInterrupt.c)
 * Callees:
 *     MmGetMinWsPagePriority @ 0x1402FC030 (MmGetMinWsPagePriority.c)
 *     xHalTimerWatchdogStop @ 0x14036E560 (xHalTimerWatchdogStop.c)
 *     XmOpcodeEscape @ 0x1403725B0 (XmOpcodeEscape.c)
 *     XmClcOp @ 0x1403725D0 (XmClcOp.c)
 *     XmCldOp @ 0x1403725E0 (XmCldOp.c)
 *     XmCliOp @ 0x1403725F0 (XmCliOp.c)
 *     XmCmcOp @ 0x140372600 (XmCmcOp.c)
 *     XmSahfOp @ 0x140372620 (XmSahfOp.c)
 *     XmStcOp @ 0x140372640 (XmStcOp.c)
 *     XmStdOp @ 0x140372650 (XmStdOp.c)
 *     XmStiOp @ 0x140372660 (XmStiOp.c)
 *     XmBtOp @ 0x140372670 (XmBtOp.c)
 *     XmPortImmediate @ 0x140398680 (XmPortImmediate.c)
 *     XmGroup2ByByte @ 0x1403986C0 (XmGroup2ByByte.c)
 *     XmLoopOp @ 0x1403987B0 (XmLoopOp.c)
 *     XmRolOp @ 0x140398E70 (XmRolOp.c)
 *     XmGroup2ByCL @ 0x140398F10 (XmGroup2ByCL.c)
 *     XmStosOp @ 0x1403993E0 (XmStosOp.c)
 *     XmGroup2By1 @ 0x140399670 (XmGroup2By1.c)
 *     XmRorOp @ 0x1403996D0 (XmRorOp.c)
 *     XmAccumRegister @ 0x14039A9B0 (XmAccumRegister.c)
 *     XmMoveXxGeneral @ 0x14039BD10 (XmMoveXxGeneral.c)
 *     XmAddOp @ 0x14039BDC0 (XmAddOp.c)
 *     XmGroup45General @ 0x14039CC80 (XmGroup45General.c)
 *     XmMulOp @ 0x14039F0E0 (XmMulOp.c)
 *     XmPushPopSegment @ 0x14039F180 (XmPushPopSegment.c)
 *     XmPopaOp @ 0x14039F1C0 (XmPopaOp.c)
 *     XmPushaOp @ 0x1403A0B70 (XmPushaOp.c)
 *     XmNotOp @ 0x1403A2420 (XmNotOp.c)
 *     XmXorOp @ 0x1403A3C00 (XmXorOp.c)
 *     XmSegmentOffset @ 0x1403A5250 (XmSegmentOffset.c)
 *     XmFlagsRegister @ 0x1403A5860 (XmFlagsRegister.c)
 *     XmDivOp @ 0x1403A60F0 (XmDivOp.c)
 *     XmStringOperands @ 0x1403A9760 (XmStringOperands.c)
 *     XmMoveSegment @ 0x1403AAB50 (XmMoveSegment.c)
 *     XmSubOp @ 0x1403B0090 (XmSubOp.c)
 *     XmShlOp @ 0x1403B6E70 (XmShlOp.c)
 *     XmShrOp @ 0x1403B6F90 (XmShrOp.c)
 *     XmIretOp @ 0x1403B8A70 (XmIretOp.c)
 *     XmDecOp @ 0x1403B8AE0 (XmDecOp.c)
 *     XmIncOp @ 0x1403B8B00 (XmIncOp.c)
 *     XmOrOp @ 0x1403B8B20 (XmOrOp.c)
 *     XmTestOp @ 0x1403B8B40 (XmTestOp.c)
 *     XmGroup3General @ 0x1403B8B60 (XmGroup3General.c)
 *     XmXchgOp @ 0x1403B8C00 (XmXchgOp.c)
 *     XmPortDX @ 0x1403B8C40 (XmPortDX.c)
 *     XmOutOp @ 0x1403B8C70 (XmOutOp.c)
 *     XmAccumImmediate @ 0x1403B8CB0 (XmAccumImmediate.c)
 *     XmCallOp @ 0x1403B8CF0 (XmCallOp.c)
 *     XmRetOp @ 0x1403B8D50 (XmRetOp.c)
 *     XmInOp @ 0x1403B8DC0 (XmInOp.c)
 *     XmMoveRegImmediate @ 0x1403B8E10 (XmMoveRegImmediate.c)
 *     XmPushOp @ 0x1403B9210 (XmPushOp.c)
 *     XmPopOp @ 0x1403B9230 (XmPopOp.c)
 *     XmOpcodeRegister @ 0x1403B9260 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x1403B92B0 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x1403B9330 (XmGroup1Immediate.c)
 *     XmMoveGeneral @ 0x1403B93A0 (XmMoveGeneral.c)
 *     XmMovOp @ 0x1403B97D0 (XmMovOp.c)
 *     XmLongJump @ 0x1403B9810 (XmLongJump.c)
 *     x86BiosTranslateAddress @ 0x1403BF1A0 (x86BiosTranslateAddress.c)
 *     XmJxxOp @ 0x1403C0BF0 (XmJxxOp.c)
 *     XmShortJump @ 0x1403C16A0 (XmShortJump.c)
 *     XmPrefixOpcode @ 0x1403C1C80 (XmPrefixOpcode.c)
 *     XmJmpOp @ 0x1403C3670 (XmJmpOp.c)
 *     longjmp @ 0x1403D80C0 (longjmp.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     _setjmp @ 0x14042B260 (_setjmp.c)
 *     XmBitScanGeneral @ 0x1405330B0 (XmBitScanGeneral.c)
 *     XmByteImmediate @ 0x140533110 (XmByteImmediate.c)
 *     XmEffectiveOffset @ 0x140533140 (XmEffectiveOffset.c)
 *     XmGeneralBitOffset @ 0x1405331C0 (XmGeneralBitOffset.c)
 *     XmGeneralRegister @ 0x140533270 (XmGeneralRegister.c)
 *     XmGroup7General @ 0x1405332F0 (XmGroup7General.c)
 *     XmGroup8BitOffset @ 0x140533350 (XmGroup8BitOffset.c)
 *     XmImmediateEnter @ 0x140533400 (XmImmediateEnter.c)
 *     XmImmediateJump @ 0x140533450 (XmImmediateJump.c)
 *     XmImulImmediate @ 0x1405334A0 (XmImulImmediate.c)
 *     XmLoadSegment @ 0x140533520 (XmLoadSegment.c)
 *     XmMoveImmediate @ 0x1405335F0 (XmMoveImmediate.c)
 *     XmPopGeneral @ 0x140533640 (XmPopGeneral.c)
 *     XmPushImmediate @ 0x140533690 (XmPushImmediate.c)
 *     XmSetccByte @ 0x1405336D0 (XmSetccByte.c)
 *     XmShiftDouble @ 0x140533710 (XmShiftDouble.c)
 *     XmXlatOpcode @ 0x140533790 (XmXlatOpcode.c)
 *     XmAdcOp @ 0x1405337F0 (XmAdcOp.c)
 *     XmCmpxchgOp @ 0x140533810 (XmCmpxchgOp.c)
 *     XmNegOp @ 0x140533880 (XmNegOp.c)
 *     XmSbbOp @ 0x1405338B0 (XmSbbOp.c)
 *     XmXaddOp @ 0x1405338D0 (XmXaddOp.c)
 *     XmAaaOp @ 0x140533910 (XmAaaOp.c)
 *     XmAadOp @ 0x140533960 (XmAadOp.c)
 *     XmAamOp @ 0x1405339F0 (XmAamOp.c)
 *     XmAasOp @ 0x140533A90 (XmAasOp.c)
 *     XmDaaOp @ 0x140533AF0 (XmDaaOp.c)
 *     XmDasOp @ 0x140533B40 (XmDasOp.c)
 *     XmRclOp @ 0x140533B90 (XmRclOp.c)
 *     XmRcrOp @ 0x140533C50 (XmRcrOp.c)
 *     XmSarOp @ 0x140533CF0 (XmSarOp.c)
 *     XmShldOp @ 0x140533DD0 (XmShldOp.c)
 *     XmShrdOp @ 0x140533F10 (XmShrdOp.c)
 *     XmLahfOp @ 0x140534070 (XmLahfOp.c)
 *     XmInsOp @ 0x1405340A0 (XmInsOp.c)
 *     XmOutsOp @ 0x140534130 (XmOutsOp.c)
 *     XmEnterOp @ 0x1405341C0 (XmEnterOp.c)
 *     XmHltOp @ 0x140534270 (XmHltOp.c)
 *     XmIntOp @ 0x140534290 (XmIntOp.c)
 *     XmLeaveOp @ 0x140534340 (XmLeaveOp.c)
 *     XmCmpsOp @ 0x140534390 (XmCmpsOp.c)
 *     XmLodsOp @ 0x1405345B0 (XmLodsOp.c)
 *     XmMovsOp @ 0x140534630 (XmMovsOp.c)
 *     XmScasOp @ 0x1405346C0 (XmScasOp.c)
 *     XmBsfOp @ 0x140534760 (XmBsfOp.c)
 *     XmBsrOp @ 0x1405347A0 (XmBsrOp.c)
 *     XmBtcOp @ 0x1405347F0 (XmBtcOp.c)
 *     XmBtrOp @ 0x140534830 (XmBtrOp.c)
 *     XmBtsOp @ 0x140534880 (XmBtsOp.c)
 *     XmCbwOp @ 0x1405348C0 (XmCbwOp.c)
 *     XmCwdOp @ 0x140534900 (XmCwdOp.c)
 *     XmBoundOp @ 0x140534950 (XmBoundOp.c)
 *     XmBswapOp @ 0x140534A00 (XmBswapOp.c)
 *     XmIllOp @ 0x140534A20 (XmIllOp.c)
 *     XmRdtscOp @ 0x140534A40 (XmRdtscOp.c)
 *     XmSmswOp @ 0x140534A70 (XmSmswOp.c)
 *     XmImulOp @ 0x140534A90 (XmImulOp.c)
 *     XmImulxOp @ 0x140534B40 (XmImulxOp.c)
 *     XmJcxzOp @ 0x140534C10 (XmJcxzOp.c)
 *     XmIdivOp @ 0x140534C40 (XmIdivOp.c)
 *     XmSxxOp @ 0x140534D70 (XmSxxOp.c)
 */

__int64 __fastcall XmEmulateStream(__int64 a1, __int16 a2, unsigned __int16 a3, __int64 a4)
{
  unsigned int v4; // edx
  unsigned int v5; // eax
  __int64 v6; // rcx

  dword_140D17718 = *(_DWORD *)a4;
  dword_140D1771C = *(_DWORD *)(a4 + 4);
  dword_140D17720 = *(_DWORD *)(a4 + 8);
  dword_140D17724 = *(_DWORD *)(a4 + 12);
  dword_140D1772C = *(_DWORD *)(a4 + 16);
  dword_140D17730 = *(_DWORD *)(a4 + 20);
  dword_140D17734 = *(_DWORD *)(a4 + 24);
  word_140D1773E = *(_WORD *)(a4 + 28);
  word_140D17738 = *(_WORD *)(a4 + 30);
  word_140D1773A = a2;
  dword_140D17714 = a3;
  v4 = setjmp(Buf);
  for ( XmStatus = v4; !XmStatus; v4 = XmStatus )
  {
    *((_DWORD *)&XmContext + 29) = 3;
    *((_QWORD *)&XmContext + 17) = 0LL;
    XmContext = XmOpcodeControlTable1;
    do
    {
      v5 = *((_DWORD *)&XmContext + 5);
      if ( v5 > *((unsigned __int16 *)&XmContext + 35) )
        longjmp((_JBTYPE *)&XmContext + 10, 14);
      *((_WORD *)&XmContext + 10) = v5 + 1;
      v6 = *(unsigned __int8 *)x86BiosTranslateAddress(*((unsigned __int16 *)&XmContext + 29), (unsigned __int16)v5);
      *((_DWORD *)&XmContext + 28) = v6;
      LOWORD(v6) = *(_WORD *)(XmContext + 2 * v6);
      *((_WORD *)&XmContext + 40) = v6;
      *((_DWORD *)&XmContext + 31) = (unsigned __int8)v6;
    }
    while ( !((unsigned int (__fastcall *)(void *))XmOperandDecodeTable[*((unsigned __int8 *)&XmContext + 81)])(&XmContext) );
    ((void (__fastcall *)(void *))XmOpcodeFunctionTable[*((unsigned int *)&XmContext + 31)])(&XmContext);
  }
  *(_DWORD *)a4 = *((_DWORD *)&XmContext + 6);
  *(_DWORD *)(a4 + 4) = *((_DWORD *)&XmContext + 7);
  *(_DWORD *)(a4 + 8) = *((_DWORD *)&XmContext + 8);
  *(_DWORD *)(a4 + 12) = *((_DWORD *)&XmContext + 9);
  *(_DWORD *)(a4 + 16) = *((_DWORD *)&XmContext + 11);
  *(_DWORD *)(a4 + 20) = *((_DWORD *)&XmContext + 12);
  *(_DWORD *)(a4 + 24) = *((_DWORD *)&XmContext + 13);
  return v4;
}
