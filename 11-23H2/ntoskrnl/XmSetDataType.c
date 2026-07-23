/*
 * XREFs of XmSetDataType @ 0x1403B96C8
 * Callers:
 *     XmPortImmediate @ 0x140398680 (XmPortImmediate.c)
 *     XmGroup2ByByte @ 0x1403986C0 (XmGroup2ByByte.c)
 *     XmGroup2ByCL @ 0x140398F10 (XmGroup2ByCL.c)
 *     XmGroup2By1 @ 0x140399670 (XmGroup2By1.c)
 *     XmGroup45General @ 0x14039CC80 (XmGroup45General.c)
 *     XmSegmentOffset @ 0x1403A5250 (XmSegmentOffset.c)
 *     XmStringOperands @ 0x1403A9760 (XmStringOperands.c)
 *     XmGroup3General @ 0x1403B8B60 (XmGroup3General.c)
 *     XmPortDX @ 0x1403B8C40 (XmPortDX.c)
 *     XmAccumImmediate @ 0x1403B8CB0 (XmAccumImmediate.c)
 *     XmGroup1General @ 0x1403B92B0 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x1403B9330 (XmGroup1Immediate.c)
 *     XmMoveGeneral @ 0x1403B93A0 (XmMoveGeneral.c)
 *     XmMoveImmediate @ 0x1405335F0 (XmMoveImmediate.c)
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
