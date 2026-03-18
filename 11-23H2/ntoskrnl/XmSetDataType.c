/*
 * XREFs of XmSetDataType @ 0x1403B94E8
 * Callers:
 *     XmPortImmediate @ 0x1403984A0 (XmPortImmediate.c)
 *     XmGroup2ByByte @ 0x1403984E0 (XmGroup2ByByte.c)
 *     XmGroup2ByCL @ 0x140398D30 (XmGroup2ByCL.c)
 *     XmGroup2By1 @ 0x140399490 (XmGroup2By1.c)
 *     XmGroup45General @ 0x14039CAA0 (XmGroup45General.c)
 *     XmSegmentOffset @ 0x1403A5070 (XmSegmentOffset.c)
 *     XmStringOperands @ 0x1403A9580 (XmStringOperands.c)
 *     XmGroup3General @ 0x1403B8980 (XmGroup3General.c)
 *     XmPortDX @ 0x1403B8A60 (XmPortDX.c)
 *     XmAccumImmediate @ 0x1403B8AD0 (XmAccumImmediate.c)
 *     XmGroup1General @ 0x1403B90D0 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x1403B9150 (XmGroup1Immediate.c)
 *     XmMoveGeneral @ 0x1403B91C0 (XmMoveGeneral.c)
 *     XmMoveImmediate @ 0x1405330A0 (XmMoveImmediate.c)
 * Callees:
 *     <none>
 */

char __fastcall XmSetDataType(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 112);
  if ( (v1 & 1) != 0 )
  {
    LOBYTE(v1) = -*(_BYTE *)(a1 + 138);
    *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  }
  else
  {
    *(_DWORD *)(a1 + 120) = 0;
  }
  return v1;
}
