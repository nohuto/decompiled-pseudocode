/*
 * XREFs of XmGetWordImmediate @ 0x1403B9670
 * Callers:
 *     XmSegmentOffset @ 0x1403A5070 (XmSegmentOffset.c)
 *     XmRetOp @ 0x1403B8B70 (XmRetOp.c)
 *     XmEvaluateAddressSpecifier @ 0x1403B922C (XmEvaluateAddressSpecifier.c)
 *     XmGetImmediateSourceValue @ 0x1403B9514 (XmGetImmediateSourceValue.c)
 *     XmLongJump @ 0x1403B9630 (XmLongJump.c)
 *     XmImmediateEnter @ 0x140532EB0 (XmImmediateEnter.c)
 *     XmImmediateJump @ 0x140532F00 (XmImmediateJump.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x1403BEFC0 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403D7EE0 (longjmp.c)
 */

__int64 __fastcall XmGetWordImmediate(__int64 a1)
{
  int v1; // r8d

  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 + 1 > (unsigned int)*(unsigned __int16 *)(a1 + 70) )
    longjmp((_JBTYPE *)(a1 + 160), 14);
  *(_WORD *)(a1 + 20) += 2;
  return *(unsigned __int16 *)x86BiosTranslateAddress(*(unsigned __int16 *)(a1 + 58), (unsigned __int16)v1);
}
