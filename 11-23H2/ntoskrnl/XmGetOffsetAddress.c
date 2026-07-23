/*
 * XREFs of XmGetOffsetAddress @ 0x1403A52BC
 * Callers:
 *     XmGroup45General @ 0x14039CC80 (XmGroup45General.c)
 *     XmSegmentOffset @ 0x1403A5250 (XmSegmentOffset.c)
 *     XmGeneralBitOffset @ 0x1405331C0 (XmGeneralBitOffset.c)
 *     XmGroup8BitOffset @ 0x140533350 (XmGroup8BitOffset.c)
 *     XmLoadSegment @ 0x140533520 (XmLoadSegment.c)
 *     XmXlatOpcode @ 0x140533790 (XmXlatOpcode.c)
 *     XmBoundOp @ 0x140534950 (XmBoundOp.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x1403BF1A0 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403D80C0 (longjmp.c)
 */

__int64 __fastcall XmGetOffsetAddress(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  unsigned int v3; // r9d

  v2 = *(unsigned int *)(a1 + 116);
  v3 = *(unsigned __int16 *)(a1 + 2 * v2 + 68);
  if ( (unsigned int)a2 > v3 || (int)a2 + *(_DWORD *)(a1 + 120) > v3 )
    longjmp((_JBTYPE *)(a1 + 160), 14);
  return x86BiosTranslateAddress(*(unsigned __int16 *)(a1 + 2 * v2 + 56), a2);
}
