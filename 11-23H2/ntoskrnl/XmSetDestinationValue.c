/*
 * XREFs of XmSetDestinationValue @ 0x1403B9748
 * Callers:
 *     XmGroup2ByByte @ 0x1403986C0 (XmGroup2ByByte.c)
 *     XmGroup2ByCL @ 0x140398F10 (XmGroup2ByCL.c)
 *     XmGroup2By1 @ 0x140399670 (XmGroup2By1.c)
 *     XmAccumRegister @ 0x14039A9B0 (XmAccumRegister.c)
 *     XmGroup45General @ 0x14039CC80 (XmGroup45General.c)
 *     XmPushPopSegment @ 0x14039F180 (XmPushPopSegment.c)
 *     XmPopaOp @ 0x14039F1C0 (XmPopaOp.c)
 *     XmFlagsRegister @ 0x1403A5860 (XmFlagsRegister.c)
 *     XmGroup3General @ 0x1403B8B60 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x1403B8CB0 (XmAccumImmediate.c)
 *     XmOpcodeRegister @ 0x1403B9260 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x1403B92B0 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x1403B9330 (XmGroup1Immediate.c)
 *     XmGeneralBitOffset @ 0x1405331C0 (XmGeneralBitOffset.c)
 *     XmGroup7General @ 0x1405332F0 (XmGroup7General.c)
 *     XmGroup8BitOffset @ 0x140533350 (XmGroup8BitOffset.c)
 *     XmImulImmediate @ 0x1405334A0 (XmImulImmediate.c)
 *     XmLoadSegment @ 0x140533520 (XmLoadSegment.c)
 *     XmPopGeneral @ 0x140533640 (XmPopGeneral.c)
 *     XmShiftDouble @ 0x140533710 (XmShiftDouble.c)
 *     XmCmpsOp @ 0x140534390 (XmCmpsOp.c)
 *     XmScasOp @ 0x1405346C0 (XmScasOp.c)
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
