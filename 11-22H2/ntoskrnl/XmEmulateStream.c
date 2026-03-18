/*
 * XREFs of XmEmulateStream @ 0x1403BDE80
 * Callers:
 *     XmEmulateInterrupt @ 0x1403BDDDC (XmEmulateInterrupt.c)
 * Callees:
 *     MmGetMinWsPagePriority @ 0x1402FBDA0 (MmGetMinWsPagePriority.c)
 *     xHalTimerWatchdogStop @ 0x14036DD70 (xHalTimerWatchdogStop.c)
 *     XmOpcodeEscape @ 0x140371DC0 (XmOpcodeEscape.c)
 *     XmClcOp @ 0x140371DE0 (XmClcOp.c)
 *     XmCldOp @ 0x140371DF0 (XmCldOp.c)
 *     XmCliOp @ 0x140371E00 (XmCliOp.c)
 *     XmCmcOp @ 0x140371E10 (XmCmcOp.c)
 *     XmSahfOp @ 0x140371E30 (XmSahfOp.c)
 *     XmStcOp @ 0x140371E50 (XmStcOp.c)
 *     XmStdOp @ 0x140371E60 (XmStdOp.c)
 *     XmStiOp @ 0x140371E70 (XmStiOp.c)
 *     XmBtOp @ 0x140371E80 (XmBtOp.c)
 *     XmPortImmediate @ 0x140396920 (XmPortImmediate.c)
 *     XmGroup2ByByte @ 0x140396960 (XmGroup2ByByte.c)
 *     XmLoopOp @ 0x140396A50 (XmLoopOp.c)
 *     XmRolOp @ 0x1403989A0 (XmRolOp.c)
 *     XmGroup2ByCL @ 0x140398A40 (XmGroup2ByCL.c)
 *     XmStosOp @ 0x140398F10 (XmStosOp.c)
 *     XmGroup2By1 @ 0x1403991A0 (XmGroup2By1.c)
 *     XmRorOp @ 0x140399200 (XmRorOp.c)
 *     XmAccumRegister @ 0x14039A4E0 (XmAccumRegister.c)
 *     XmMoveXxGeneral @ 0x14039B840 (XmMoveXxGeneral.c)
 *     XmAddOp @ 0x14039B8F0 (XmAddOp.c)
 *     XmGroup45General @ 0x14039C7B0 (XmGroup45General.c)
 *     XmMulOp @ 0x14039EC10 (XmMulOp.c)
 *     XmPushPopSegment @ 0x14039ECB0 (XmPushPopSegment.c)
 *     XmPopaOp @ 0x14039ECF0 (XmPopaOp.c)
 *     XmPushaOp @ 0x1403A06A0 (XmPushaOp.c)
 *     XmNotOp @ 0x1403A1A80 (XmNotOp.c)
 *     XmXorOp @ 0x1403A32C0 (XmXorOp.c)
 *     XmSegmentOffset @ 0x1403A4910 (XmSegmentOffset.c)
 *     XmFlagsRegister @ 0x1403A4F20 (XmFlagsRegister.c)
 *     XmDivOp @ 0x1403A57B0 (XmDivOp.c)
 *     XmStringOperands @ 0x1403A8E90 (XmStringOperands.c)
 *     XmMoveSegment @ 0x1403AA280 (XmMoveSegment.c)
 *     XmSubOp @ 0x1403AF820 (XmSubOp.c)
 *     XmShlOp @ 0x1403B6630 (XmShlOp.c)
 *     XmShrOp @ 0x1403B6750 (XmShrOp.c)
 *     XmIretOp @ 0x1403B8230 (XmIretOp.c)
 *     XmDecOp @ 0x1403B82A0 (XmDecOp.c)
 *     XmIncOp @ 0x1403B82C0 (XmIncOp.c)
 *     XmOrOp @ 0x1403B82E0 (XmOrOp.c)
 *     XmTestOp @ 0x1403B8300 (XmTestOp.c)
 *     XmGroup3General @ 0x1403B8320 (XmGroup3General.c)
 *     XmXchgOp @ 0x1403B83C0 (XmXchgOp.c)
 *     XmPortDX @ 0x1403B8400 (XmPortDX.c)
 *     XmOutOp @ 0x1403B8430 (XmOutOp.c)
 *     XmAccumImmediate @ 0x1403B8470 (XmAccumImmediate.c)
 *     XmCallOp @ 0x1403B84B0 (XmCallOp.c)
 *     XmRetOp @ 0x1403B8510 (XmRetOp.c)
 *     XmInOp @ 0x1403B8580 (XmInOp.c)
 *     XmMoveRegImmediate @ 0x1403B85D0 (XmMoveRegImmediate.c)
 *     XmPushOp @ 0x1403B89D0 (XmPushOp.c)
 *     XmPopOp @ 0x1403B89F0 (XmPopOp.c)
 *     XmOpcodeRegister @ 0x1403B8A20 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x1403B8A70 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x1403B8AF0 (XmGroup1Immediate.c)
 *     XmMoveGeneral @ 0x1403B8B60 (XmMoveGeneral.c)
 *     XmMovOp @ 0x1403B8F90 (XmMovOp.c)
 *     XmLongJump @ 0x1403B8FD0 (XmLongJump.c)
 *     x86BiosTranslateAddress @ 0x1403BE960 (x86BiosTranslateAddress.c)
 *     XmJxxOp @ 0x1403C03B0 (XmJxxOp.c)
 *     XmShortJump @ 0x1403C0E60 (XmShortJump.c)
 *     XmPrefixOpcode @ 0x1403C1440 (XmPrefixOpcode.c)
 *     XmJmpOp @ 0x1403C2E30 (XmJmpOp.c)
 *     longjmp @ 0x1403D7880 (longjmp.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     _setjmp @ 0x14042A810 (_setjmp.c)
 *     XmBitScanGeneral @ 0x140532C10 (XmBitScanGeneral.c)
 *     XmByteImmediate @ 0x140532C70 (XmByteImmediate.c)
 *     XmEffectiveOffset @ 0x140532CA0 (XmEffectiveOffset.c)
 *     XmGeneralBitOffset @ 0x140532D20 (XmGeneralBitOffset.c)
 *     XmGeneralRegister @ 0x140532DD0 (XmGeneralRegister.c)
 *     XmGroup7General @ 0x140532E50 (XmGroup7General.c)
 *     XmGroup8BitOffset @ 0x140532EB0 (XmGroup8BitOffset.c)
 *     XmImmediateEnter @ 0x140532F60 (XmImmediateEnter.c)
 *     XmImmediateJump @ 0x140532FB0 (XmImmediateJump.c)
 *     XmImulImmediate @ 0x140533000 (XmImulImmediate.c)
 *     XmLoadSegment @ 0x140533080 (XmLoadSegment.c)
 *     XmMoveImmediate @ 0x140533150 (XmMoveImmediate.c)
 *     XmPopGeneral @ 0x1405331A0 (XmPopGeneral.c)
 *     XmPushImmediate @ 0x1405331F0 (XmPushImmediate.c)
 *     XmSetccByte @ 0x140533230 (XmSetccByte.c)
 *     XmShiftDouble @ 0x140533270 (XmShiftDouble.c)
 *     XmXlatOpcode @ 0x1405332F0 (XmXlatOpcode.c)
 *     XmAdcOp @ 0x140533350 (XmAdcOp.c)
 *     XmCmpxchgOp @ 0x140533370 (XmCmpxchgOp.c)
 *     XmNegOp @ 0x1405333E0 (XmNegOp.c)
 *     XmSbbOp @ 0x140533410 (XmSbbOp.c)
 *     XmXaddOp @ 0x140533430 (XmXaddOp.c)
 *     XmAaaOp @ 0x140533470 (XmAaaOp.c)
 *     XmAadOp @ 0x1405334C0 (XmAadOp.c)
 *     XmAamOp @ 0x140533550 (XmAamOp.c)
 *     XmAasOp @ 0x1405335F0 (XmAasOp.c)
 *     XmDaaOp @ 0x140533650 (XmDaaOp.c)
 *     XmDasOp @ 0x1405336A0 (XmDasOp.c)
 *     XmRclOp @ 0x1405336F0 (XmRclOp.c)
 *     XmRcrOp @ 0x1405337B0 (XmRcrOp.c)
 *     XmSarOp @ 0x140533850 (XmSarOp.c)
 *     XmShldOp @ 0x140533930 (XmShldOp.c)
 *     XmShrdOp @ 0x140533A70 (XmShrdOp.c)
 *     XmLahfOp @ 0x140533BD0 (XmLahfOp.c)
 *     XmInsOp @ 0x140533C00 (XmInsOp.c)
 *     XmOutsOp @ 0x140533C90 (XmOutsOp.c)
 *     XmEnterOp @ 0x140533D20 (XmEnterOp.c)
 *     XmHltOp @ 0x140533DD0 (XmHltOp.c)
 *     XmIntOp @ 0x140533DF0 (XmIntOp.c)
 *     XmLeaveOp @ 0x140533EA0 (XmLeaveOp.c)
 *     XmCmpsOp @ 0x140533EF0 (XmCmpsOp.c)
 *     XmLodsOp @ 0x140534110 (XmLodsOp.c)
 *     XmMovsOp @ 0x140534190 (XmMovsOp.c)
 *     XmScasOp @ 0x140534220 (XmScasOp.c)
 *     XmBsfOp @ 0x1405342C0 (XmBsfOp.c)
 *     XmBsrOp @ 0x140534300 (XmBsrOp.c)
 *     XmBtcOp @ 0x140534350 (XmBtcOp.c)
 *     XmBtrOp @ 0x140534390 (XmBtrOp.c)
 *     XmBtsOp @ 0x1405343E0 (XmBtsOp.c)
 *     XmCbwOp @ 0x140534420 (XmCbwOp.c)
 *     XmCwdOp @ 0x140534460 (XmCwdOp.c)
 *     XmBoundOp @ 0x1405344B0 (XmBoundOp.c)
 *     XmBswapOp @ 0x140534560 (XmBswapOp.c)
 *     XmIllOp @ 0x140534580 (XmIllOp.c)
 *     XmRdtscOp @ 0x1405345A0 (XmRdtscOp.c)
 *     XmSmswOp @ 0x1405345D0 (XmSmswOp.c)
 *     XmImulOp @ 0x1405345F0 (XmImulOp.c)
 *     XmImulxOp @ 0x1405346A0 (XmImulxOp.c)
 *     XmJcxzOp @ 0x140534770 (XmJcxzOp.c)
 *     XmIdivOp @ 0x1405347A0 (XmIdivOp.c)
 *     XmSxxOp @ 0x1405348D0 (XmSxxOp.c)
 */

__int64 __fastcall XmEmulateStream(__int64 a1, __int16 a2, unsigned __int16 a3, __int64 a4)
{
  unsigned int v4; // edx
  unsigned int v5; // eax
  __int64 v6; // rcx

  dword_140D177D8 = *(_DWORD *)a4;
  dword_140D177DC = *(_DWORD *)(a4 + 4);
  dword_140D177E0 = *(_DWORD *)(a4 + 8);
  dword_140D177E4 = *(_DWORD *)(a4 + 12);
  dword_140D177EC = *(_DWORD *)(a4 + 16);
  dword_140D177F0 = *(_DWORD *)(a4 + 20);
  dword_140D177F4 = *(_DWORD *)(a4 + 24);
  word_140D177FE = *(_WORD *)(a4 + 28);
  word_140D177F8 = *(_WORD *)(a4 + 30);
  word_140D177FA = a2;
  dword_140D177D4 = a3;
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
