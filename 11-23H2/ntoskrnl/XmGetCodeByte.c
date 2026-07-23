/*
 * XREFs of XmGetCodeByte @ 0x1403B95F4
 * Callers:
 *     XmPortImmediate @ 0x140398680 (XmPortImmediate.c)
 *     XmGroup2ByByte @ 0x1403986C0 (XmGroup2ByByte.c)
 *     XmEvaluateAddressSpecifier @ 0x1403B940C (XmEvaluateAddressSpecifier.c)
 *     XmGetImmediateSourceValue @ 0x1403B96F4 (XmGetImmediateSourceValue.c)
 *     XmShortJump @ 0x1403C16A0 (XmShortJump.c)
 *     XmGroup8BitOffset @ 0x140533350 (XmGroup8BitOffset.c)
 *     XmImmediateEnter @ 0x140533400 (XmImmediateEnter.c)
 *     XmShiftDouble @ 0x140533710 (XmShiftDouble.c)
 *     XmEvaluateIndexSpecifier @ 0x140534E18 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x1403BF1A0 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403D80C0 (longjmp.c)
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
