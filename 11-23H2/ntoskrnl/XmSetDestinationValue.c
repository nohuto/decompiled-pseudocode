/*
 * XREFs of XmSetDestinationValue @ 0x1403B9568
 * Callers:
 *     XmGroup2ByByte @ 0x1403984E0 (XmGroup2ByByte.c)
 *     XmGroup2ByCL @ 0x140398D30 (XmGroup2ByCL.c)
 *     XmGroup2By1 @ 0x140399490 (XmGroup2By1.c)
 *     XmAccumRegister @ 0x14039A7D0 (XmAccumRegister.c)
 *     XmGroup45General @ 0x14039CAA0 (XmGroup45General.c)
 *     XmPushPopSegment @ 0x14039EFA0 (XmPushPopSegment.c)
 *     XmPopaOp @ 0x14039EFE0 (XmPopaOp.c)
 *     XmFlagsRegister @ 0x1403A5680 (XmFlagsRegister.c)
 *     XmGroup3General @ 0x1403B8980 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x1403B8AD0 (XmAccumImmediate.c)
 *     XmOpcodeRegister @ 0x1403B9080 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x1403B90D0 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x1403B9150 (XmGroup1Immediate.c)
 *     XmGeneralBitOffset @ 0x140532C70 (XmGeneralBitOffset.c)
 *     XmGroup7General @ 0x140532DA0 (XmGroup7General.c)
 *     XmGroup8BitOffset @ 0x140532E00 (XmGroup8BitOffset.c)
 *     XmImulImmediate @ 0x140532F50 (XmImulImmediate.c)
 *     XmLoadSegment @ 0x140532FD0 (XmLoadSegment.c)
 *     XmPopGeneral @ 0x1405330F0 (XmPopGeneral.c)
 *     XmShiftDouble @ 0x1405331C0 (XmShiftDouble.c)
 *     XmCmpsOp @ 0x140533E40 (XmCmpsOp.c)
 *     XmScasOp @ 0x140534170 (XmScasOp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XmSetDestinationValue(__int64 a1, unsigned __int16 *a2)
{
  int v2; // eax
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 88) = a2;
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
  *(_DWORD *)(a1 + 104) = result;
  return result;
}
