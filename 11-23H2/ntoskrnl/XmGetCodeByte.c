/*
 * XREFs of XmGetCodeByte @ 0x1403B9414
 * Callers:
 *     XmPortImmediate @ 0x1403984A0 (XmPortImmediate.c)
 *     XmGroup2ByByte @ 0x1403984E0 (XmGroup2ByByte.c)
 *     XmEvaluateAddressSpecifier @ 0x1403B922C (XmEvaluateAddressSpecifier.c)
 *     XmGetImmediateSourceValue @ 0x1403B9514 (XmGetImmediateSourceValue.c)
 *     XmShortJump @ 0x1403C14C0 (XmShortJump.c)
 *     XmGroup8BitOffset @ 0x140532E00 (XmGroup8BitOffset.c)
 *     XmImmediateEnter @ 0x140532EB0 (XmImmediateEnter.c)
 *     XmShiftDouble @ 0x1405331C0 (XmShiftDouble.c)
 *     XmEvaluateIndexSpecifier @ 0x1405348C8 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x1403BEFC0 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403D7EE0 (longjmp.c)
 */

char __fastcall XmGetCodeByte(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(unsigned int *)(a1 + 20);
  if ( (unsigned int)v1 > *(unsigned __int16 *)(a1 + 70) )
    longjmp((_JBTYPE *)(a1 + 160), 14);
  ++*(_WORD *)(a1 + 20);
  return *(_BYTE *)x86BiosTranslateAddress(*(unsigned __int16 *)(a1 + 58), v1);
}
