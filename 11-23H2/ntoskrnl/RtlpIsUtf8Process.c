/*
 * XREFs of RtlpIsUtf8Process @ 0x1406DA560
 * Callers:
 *     RtlUpperChar @ 0x1406D8510 (RtlUpperChar.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x1406D9DB0 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUnicodeToMultiByteN @ 0x1406D9F10 (RtlUnicodeToMultiByteN.c)
 *     RtlUpperString @ 0x1406DA0F0 (RtlUpperString.c)
 *     RtlAnsiCharToUnicodeChar @ 0x1406DA430 (RtlAnsiCharToUnicodeChar.c)
 *     RtlIsNameLegalDOS8Dot3 @ 0x140755480 (RtlIsNameLegalDOS8Dot3.c)
 *     RtlpDidUnicodeToOemWork @ 0x140755B88 (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x140755C40 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUnicodeToMultiByteSize @ 0x140758960 (RtlUnicodeToMultiByteSize.c)
 *     RtlMultiByteToUnicodeSize @ 0x140773EF0 (RtlMultiByteToUnicodeSize.c)
 *     RtlpGetCodePageData @ 0x140773FE4 (RtlpGetCodePageData.c)
 *     RtlGenerate8dot3Name @ 0x1407B95C0 (RtlGenerate8dot3Name.c)
 *     CompareNamesCaseSensitive @ 0x1409BA8D8 (CompareNamesCaseSensitive.c)
 *     ComputeNameLength @ 0x1409BAA84 (ComputeNameLength.c)
 *     RtlIsValidOemCharacter @ 0x1409BF3B0 (RtlIsValidOemCharacter.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 */

char RtlpIsUtf8Process()
{
  _WORD *CurrentServerSiloGlobals; // rax
  char v1; // dl
  unsigned __int64 v2; // rcx
  char result; // al
  signed __int32 v4[8]; // [rsp+0h] [rbp-38h] BYREF
  char v5; // [rsp+20h] [rbp-18h]

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  _InterlockedOr(v4, 0);
  if ( CurrentServerSiloGlobals[532] != 0xFDE9 && CurrentServerSiloGlobals[564] != 0xFDE9 )
  {
    v5 = 0;
    v2 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[24];
    if ( !v2 )
      return v5;
    if ( v1 )
    {
      if ( *(_WORD *)(v2 + 846) == 0xFDE9 )
      {
        result = 1;
        goto LABEL_8;
      }
    }
    else if ( *(_WORD *)(v2 + 844) == 0xFDE9 )
    {
      result = 1;
      goto LABEL_8;
    }
    result = 0;
LABEL_8:
    v5 = result;
    return result;
  }
  return 1;
}
