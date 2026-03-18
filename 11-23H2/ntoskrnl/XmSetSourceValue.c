/*
 * XREFs of XmSetSourceValue @ 0x1403B94C0
 * Callers:
 *     XmStosOp @ 0x140399200 (XmStosOp.c)
 *     XmAccumRegister @ 0x14039A7D0 (XmAccumRegister.c)
 *     XmMoveXxGeneral @ 0x14039BB30 (XmMoveXxGeneral.c)
 *     XmGroup45General @ 0x14039CAA0 (XmGroup45General.c)
 *     XmPushPopSegment @ 0x14039EFA0 (XmPushPopSegment.c)
 *     XmPushaOp @ 0x1403A0990 (XmPushaOp.c)
 *     XmSegmentOffset @ 0x1403A5070 (XmSegmentOffset.c)
 *     XmFlagsRegister @ 0x1403A5680 (XmFlagsRegister.c)
 *     XmMoveSegment @ 0x1403AA970 (XmMoveSegment.c)
 *     XmGroup3General @ 0x1403B8980 (XmGroup3General.c)
 *     XmOutOp @ 0x1403B8A90 (XmOutOp.c)
 *     XmOpcodeRegister @ 0x1403B9080 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x1403B90D0 (XmGroup1General.c)
 *     XmMoveGeneral @ 0x1403B91C0 (XmMoveGeneral.c)
 *     XmPopStack @ 0x1403B9474 (XmPopStack.c)
 *     XmBitScanGeneral @ 0x140532B60 (XmBitScanGeneral.c)
 *     XmGeneralBitOffset @ 0x140532C70 (XmGeneralBitOffset.c)
 *     XmGeneralRegister @ 0x140532D20 (XmGeneralRegister.c)
 *     XmLoadSegment @ 0x140532FD0 (XmLoadSegment.c)
 *     XmShiftDouble @ 0x1405331C0 (XmShiftDouble.c)
 *     XmXlatOpcode @ 0x140533240 (XmXlatOpcode.c)
 *     XmOutsOp @ 0x140533BE0 (XmOutsOp.c)
 *     XmCmpsOp @ 0x140533E40 (XmCmpsOp.c)
 *     XmLodsOp @ 0x140534060 (XmLodsOp.c)
 *     XmMovsOp @ 0x1405340E0 (XmMovsOp.c)
 *     XmScasOp @ 0x140534170 (XmScasOp.c)
 *     XmBoundOp @ 0x140534400 (XmBoundOp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XmSetSourceValue(__int64 a1, unsigned __int16 *a2)
{
  int v2; // eax
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 96) = a2;
  if ( v2 )
  {
    if ( v2 == 1 )
      result = *a2;
    else
      result = *(unsigned int *)a2;
  }
  else
  {
    result = *(unsigned __int8 *)a2;
  }
  *(_DWORD *)(a1 + 108) = result;
  return result;
}
