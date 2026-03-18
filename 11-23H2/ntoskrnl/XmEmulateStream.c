/*
 * XREFs of XmEmulateStream @ 0x1403BE4E0
 * Callers:
 *     XmEmulateInterrupt @ 0x1403BE43C (XmEmulateInterrupt.c)
 * Callees:
 *     MmGetMinWsPagePriority @ 0x1402FBDA0 (MmGetMinWsPagePriority.c)
 *     xHalTimerWatchdogStop @ 0x14036E3C0 (xHalTimerWatchdogStop.c)
 *     XmOpcodeEscape @ 0x140372410 (XmOpcodeEscape.c)
 *     XmClcOp @ 0x140372430 (XmClcOp.c)
 *     XmCldOp @ 0x140372440 (XmCldOp.c)
 *     XmCliOp @ 0x140372450 (XmCliOp.c)
 *     XmCmcOp @ 0x140372460 (XmCmcOp.c)
 *     XmSahfOp @ 0x140372480 (XmSahfOp.c)
 *     XmStcOp @ 0x1403724A0 (XmStcOp.c)
 *     XmStdOp @ 0x1403724B0 (XmStdOp.c)
 *     XmStiOp @ 0x1403724C0 (XmStiOp.c)
 *     XmBtOp @ 0x1403724D0 (XmBtOp.c)
 *     XmPortImmediate @ 0x1403984A0 (XmPortImmediate.c)
 *     XmGroup2ByByte @ 0x1403984E0 (XmGroup2ByByte.c)
 *     XmLoopOp @ 0x1403985D0 (XmLoopOp.c)
 *     XmRolOp @ 0x140398C90 (XmRolOp.c)
 *     XmGroup2ByCL @ 0x140398D30 (XmGroup2ByCL.c)
 *     XmStosOp @ 0x140399200 (XmStosOp.c)
 *     XmGroup2By1 @ 0x140399490 (XmGroup2By1.c)
 *     XmRorOp @ 0x1403994F0 (XmRorOp.c)
 *     XmAccumRegister @ 0x14039A7D0 (XmAccumRegister.c)
 *     XmMoveXxGeneral @ 0x14039BB30 (XmMoveXxGeneral.c)
 *     XmAddOp @ 0x14039BBE0 (XmAddOp.c)
 *     XmGroup45General @ 0x14039CAA0 (XmGroup45General.c)
 *     XmMulOp @ 0x14039EF00 (XmMulOp.c)
 *     XmPushPopSegment @ 0x14039EFA0 (XmPushPopSegment.c)
 *     XmPopaOp @ 0x14039EFE0 (XmPopaOp.c)
 *     XmPushaOp @ 0x1403A0990 (XmPushaOp.c)
 *     XmNotOp @ 0x1403A2240 (XmNotOp.c)
 *     XmXorOp @ 0x1403A3A20 (XmXorOp.c)
 *     XmSegmentOffset @ 0x1403A5070 (XmSegmentOffset.c)
 *     XmFlagsRegister @ 0x1403A5680 (XmFlagsRegister.c)
 *     XmDivOp @ 0x1403A5F10 (XmDivOp.c)
 *     XmStringOperands @ 0x1403A9580 (XmStringOperands.c)
 *     XmMoveSegment @ 0x1403AA970 (XmMoveSegment.c)
 *     XmSubOp @ 0x1403AFEB0 (XmSubOp.c)
 *     XmShlOp @ 0x1403B6C90 (XmShlOp.c)
 *     XmShrOp @ 0x1403B6DB0 (XmShrOp.c)
 *     XmIretOp @ 0x1403B8890 (XmIretOp.c)
 *     XmDecOp @ 0x1403B8900 (XmDecOp.c)
 *     XmIncOp @ 0x1403B8920 (XmIncOp.c)
 *     XmOrOp @ 0x1403B8940 (XmOrOp.c)
 *     XmTestOp @ 0x1403B8960 (XmTestOp.c)
 *     XmGroup3General @ 0x1403B8980 (XmGroup3General.c)
 *     XmXchgOp @ 0x1403B8A20 (XmXchgOp.c)
 *     XmPortDX @ 0x1403B8A60 (XmPortDX.c)
 *     XmOutOp @ 0x1403B8A90 (XmOutOp.c)
 *     XmAccumImmediate @ 0x1403B8AD0 (XmAccumImmediate.c)
 *     XmCallOp @ 0x1403B8B10 (XmCallOp.c)
 *     XmRetOp @ 0x1403B8B70 (XmRetOp.c)
 *     XmInOp @ 0x1403B8BE0 (XmInOp.c)
 *     XmMoveRegImmediate @ 0x1403B8C30 (XmMoveRegImmediate.c)
 *     XmPushOp @ 0x1403B9030 (XmPushOp.c)
 *     XmPopOp @ 0x1403B9050 (XmPopOp.c)
 *     XmOpcodeRegister @ 0x1403B9080 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x1403B90D0 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x1403B9150 (XmGroup1Immediate.c)
 *     XmMoveGeneral @ 0x1403B91C0 (XmMoveGeneral.c)
 *     XmMovOp @ 0x1403B95F0 (XmMovOp.c)
 *     XmLongJump @ 0x1403B9630 (XmLongJump.c)
 *     x86BiosTranslateAddress @ 0x1403BEFC0 (x86BiosTranslateAddress.c)
 *     XmJxxOp @ 0x1403C0A10 (XmJxxOp.c)
 *     XmShortJump @ 0x1403C14C0 (XmShortJump.c)
 *     XmPrefixOpcode @ 0x1403C1AA0 (XmPrefixOpcode.c)
 *     XmJmpOp @ 0x1403C3490 (XmJmpOp.c)
 *     longjmp @ 0x1403D7EE0 (longjmp.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     _setjmp @ 0x14042AED0 (_setjmp.c)
 *     XmBitScanGeneral @ 0x140532B60 (XmBitScanGeneral.c)
 *     XmByteImmediate @ 0x140532BC0 (XmByteImmediate.c)
 *     XmEffectiveOffset @ 0x140532BF0 (XmEffectiveOffset.c)
 *     XmGeneralBitOffset @ 0x140532C70 (XmGeneralBitOffset.c)
 *     XmGeneralRegister @ 0x140532D20 (XmGeneralRegister.c)
 *     XmGroup7General @ 0x140532DA0 (XmGroup7General.c)
 *     XmGroup8BitOffset @ 0x140532E00 (XmGroup8BitOffset.c)
 *     XmImmediateEnter @ 0x140532EB0 (XmImmediateEnter.c)
 *     XmImmediateJump @ 0x140532F00 (XmImmediateJump.c)
 *     XmImulImmediate @ 0x140532F50 (XmImulImmediate.c)
 *     XmLoadSegment @ 0x140532FD0 (XmLoadSegment.c)
 *     XmMoveImmediate @ 0x1405330A0 (XmMoveImmediate.c)
 *     XmPopGeneral @ 0x1405330F0 (XmPopGeneral.c)
 *     XmPushImmediate @ 0x140533140 (XmPushImmediate.c)
 *     XmSetccByte @ 0x140533180 (XmSetccByte.c)
 *     XmShiftDouble @ 0x1405331C0 (XmShiftDouble.c)
 *     XmXlatOpcode @ 0x140533240 (XmXlatOpcode.c)
 *     XmAdcOp @ 0x1405332A0 (XmAdcOp.c)
 *     XmCmpxchgOp @ 0x1405332C0 (XmCmpxchgOp.c)
 *     XmNegOp @ 0x140533330 (XmNegOp.c)
 *     XmSbbOp @ 0x140533360 (XmSbbOp.c)
 *     XmXaddOp @ 0x140533380 (XmXaddOp.c)
 *     XmAaaOp @ 0x1405333C0 (XmAaaOp.c)
 *     XmAadOp @ 0x140533410 (XmAadOp.c)
 *     XmAamOp @ 0x1405334A0 (XmAamOp.c)
 *     XmAasOp @ 0x140533540 (XmAasOp.c)
 *     XmDaaOp @ 0x1405335A0 (XmDaaOp.c)
 *     XmDasOp @ 0x1405335F0 (XmDasOp.c)
 *     XmRclOp @ 0x140533640 (XmRclOp.c)
 *     XmRcrOp @ 0x140533700 (XmRcrOp.c)
 *     XmSarOp @ 0x1405337A0 (XmSarOp.c)
 *     XmShldOp @ 0x140533880 (XmShldOp.c)
 *     XmShrdOp @ 0x1405339C0 (XmShrdOp.c)
 *     XmLahfOp @ 0x140533B20 (XmLahfOp.c)
 *     XmInsOp @ 0x140533B50 (XmInsOp.c)
 *     XmOutsOp @ 0x140533BE0 (XmOutsOp.c)
 *     XmEnterOp @ 0x140533C70 (XmEnterOp.c)
 *     XmHltOp @ 0x140533D20 (XmHltOp.c)
 *     XmIntOp @ 0x140533D40 (XmIntOp.c)
 *     XmLeaveOp @ 0x140533DF0 (XmLeaveOp.c)
 *     XmCmpsOp @ 0x140533E40 (XmCmpsOp.c)
 *     XmLodsOp @ 0x140534060 (XmLodsOp.c)
 *     XmMovsOp @ 0x1405340E0 (XmMovsOp.c)
 *     XmScasOp @ 0x140534170 (XmScasOp.c)
 *     XmBsfOp @ 0x140534210 (XmBsfOp.c)
 *     XmBsrOp @ 0x140534250 (XmBsrOp.c)
 *     XmBtcOp @ 0x1405342A0 (XmBtcOp.c)
 *     XmBtrOp @ 0x1405342E0 (XmBtrOp.c)
 *     XmBtsOp @ 0x140534330 (XmBtsOp.c)
 *     XmCbwOp @ 0x140534370 (XmCbwOp.c)
 *     XmCwdOp @ 0x1405343B0 (XmCwdOp.c)
 *     XmBoundOp @ 0x140534400 (XmBoundOp.c)
 *     XmBswapOp @ 0x1405344B0 (XmBswapOp.c)
 *     XmIllOp @ 0x1405344D0 (XmIllOp.c)
 *     XmRdtscOp @ 0x1405344F0 (XmRdtscOp.c)
 *     XmSmswOp @ 0x140534520 (XmSmswOp.c)
 *     XmImulOp @ 0x140534540 (XmImulOp.c)
 *     XmImulxOp @ 0x1405345F0 (XmImulxOp.c)
 *     XmJcxzOp @ 0x1405346C0 (XmJcxzOp.c)
 *     XmIdivOp @ 0x1405346F0 (XmIdivOp.c)
 *     XmSxxOp @ 0x140534820 (XmSxxOp.c)
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
