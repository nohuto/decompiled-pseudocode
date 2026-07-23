/*
 * XREFs of XmSetSourceValue @ 0x1403B96A0
 * Callers:
 *     XmStosOp @ 0x1403993E0 (XmStosOp.c)
 *     XmAccumRegister @ 0x14039A9B0 (XmAccumRegister.c)
 *     XmMoveXxGeneral @ 0x14039BD10 (XmMoveXxGeneral.c)
 *     XmGroup45General @ 0x14039CC80 (XmGroup45General.c)
 *     XmPushPopSegment @ 0x14039F180 (XmPushPopSegment.c)
 *     XmPushaOp @ 0x1403A0B70 (XmPushaOp.c)
 *     XmSegmentOffset @ 0x1403A5250 (XmSegmentOffset.c)
 *     XmFlagsRegister @ 0x1403A5860 (XmFlagsRegister.c)
 *     XmMoveSegment @ 0x1403AAB50 (XmMoveSegment.c)
 *     XmGroup3General @ 0x1403B8B60 (XmGroup3General.c)
 *     XmOutOp @ 0x1403B8C70 (XmOutOp.c)
 *     XmOpcodeRegister @ 0x1403B9260 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x1403B92B0 (XmGroup1General.c)
 *     XmMoveGeneral @ 0x1403B93A0 (XmMoveGeneral.c)
 *     XmPopStack @ 0x1403B9654 (XmPopStack.c)
 *     XmBitScanGeneral @ 0x1405330B0 (XmBitScanGeneral.c)
 *     XmGeneralBitOffset @ 0x1405331C0 (XmGeneralBitOffset.c)
 *     XmGeneralRegister @ 0x140533270 (XmGeneralRegister.c)
 *     XmLoadSegment @ 0x140533520 (XmLoadSegment.c)
 *     XmShiftDouble @ 0x140533710 (XmShiftDouble.c)
 *     XmXlatOpcode @ 0x140533790 (XmXlatOpcode.c)
 *     XmOutsOp @ 0x140534130 (XmOutsOp.c)
 *     XmCmpsOp @ 0x140534390 (XmCmpsOp.c)
 *     XmLodsOp @ 0x1405345B0 (XmLodsOp.c)
 *     XmMovsOp @ 0x140534630 (XmMovsOp.c)
 *     XmScasOp @ 0x1405346C0 (XmScasOp.c)
 *     XmBoundOp @ 0x140534950 (XmBoundOp.c)
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
