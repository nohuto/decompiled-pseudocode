/*
 * XREFs of XmSetSourceValue @ 0x1403A2FA8
 * Callers:
 *     XmOutOp @ 0x1403A26C0 (XmOutOp.c)
 *     XmGroup3General @ 0x1403A2770 (XmGroup3General.c)
 *     XmMoveGeneral @ 0x1403A2980 (XmMoveGeneral.c)
 *     XmOpcodeRegister @ 0x1403A2E90 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x1403A2EE0 (XmGroup1General.c)
 *     XmPopStack @ 0x1403A2F5C (XmPopStack.c)
 *     XmStosOp @ 0x1403CC230 (XmStosOp.c)
 *     XmMoveXxGeneral @ 0x1403CFBE0 (XmMoveXxGeneral.c)
 *     XmPushPopSegment @ 0x1403D0DF0 (XmPushPopSegment.c)
 *     XmGroup45General @ 0x1403D0E30 (XmGroup45General.c)
 *     XmPushaOp @ 0x1403D0EC0 (XmPushaOp.c)
 *     XmAccumRegister @ 0x1403D2130 (XmAccumRegister.c)
 *     XmSegmentOffset @ 0x1403D7560 (XmSegmentOffset.c)
 *     XmMoveSegment @ 0x1403D88E0 (XmMoveSegment.c)
 *     XmBitScanGeneral @ 0x140534F20 (XmBitScanGeneral.c)
 *     XmFlagsRegister @ 0x140535030 (XmFlagsRegister.c)
 *     XmGeneralBitOffset @ 0x140535070 (XmGeneralBitOffset.c)
 *     XmGeneralRegister @ 0x140535110 (XmGeneralRegister.c)
 *     XmLoadSegment @ 0x1405353C0 (XmLoadSegment.c)
 *     XmShiftDouble @ 0x1405355F0 (XmShiftDouble.c)
 *     XmXlatOpcode @ 0x140535670 (XmXlatOpcode.c)
 *     XmOutsOp @ 0x140536090 (XmOutsOp.c)
 *     XmCmpsOp @ 0x1405362F0 (XmCmpsOp.c)
 *     XmLodsOp @ 0x140536510 (XmLodsOp.c)
 *     XmMovsOp @ 0x140536590 (XmMovsOp.c)
 *     XmScasOp @ 0x140536620 (XmScasOp.c)
 *     XmBoundOp @ 0x1405368B0 (XmBoundOp.c)
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
