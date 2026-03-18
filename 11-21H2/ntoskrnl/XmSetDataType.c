/*
 * XREFs of XmSetDataType @ 0x1403A346C
 * Callers:
 *     XmPortDX @ 0x1403A2720 (XmPortDX.c)
 *     XmGroup3General @ 0x1403A2770 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x1403A2810 (XmAccumImmediate.c)
 *     XmMoveGeneral @ 0x1403A2980 (XmMoveGeneral.c)
 *     XmGroup1General @ 0x1403A2EE0 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x1403A2FD0 (XmGroup1Immediate.c)
 *     XmGroup2By1 @ 0x1403CC4C0 (XmGroup2By1.c)
 *     XmGroup2ByByte @ 0x1403CCF30 (XmGroup2ByByte.c)
 *     XmGroup2ByCL @ 0x1403D0D90 (XmGroup2ByCL.c)
 *     XmGroup45General @ 0x1403D0E30 (XmGroup45General.c)
 *     XmSegmentOffset @ 0x1403D7560 (XmSegmentOffset.c)
 *     XmStringOperands @ 0x1403D81F0 (XmStringOperands.c)
 *     XmMoveImmediate @ 0x140535490 (XmMoveImmediate.c)
 *     XmPortImmediate @ 0x140535530 (XmPortImmediate.c)
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
