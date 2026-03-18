/*
 * XREFs of x86BiosTranslateAddress @ 0x1403BEFC0
 * Callers:
 *     x86BiosReadMemory @ 0x140398540 (x86BiosReadMemory.c)
 *     XmGetStringAddress @ 0x1403992EC (XmGetStringAddress.c)
 *     XmGetStringAddressRange @ 0x140399364 (XmGetStringAddressRange.c)
 *     XmGetLongImmediate @ 0x140399CD8 (XmGetLongImmediate.c)
 *     HalInitializeBios @ 0x14039F060 (HalInitializeBios.c)
 *     XmInitializeEmulator @ 0x14039F408 (XmInitializeEmulator.c)
 *     x86BiosWriteMemory @ 0x1403A0900 (x86BiosWriteMemory.c)
 *     XmGetOffsetAddress @ 0x1403A50DC (XmGetOffsetAddress.c)
 *     XmEvaluateAddressSpecifier @ 0x1403B922C (XmEvaluateAddressSpecifier.c)
 *     XmGetCodeByte @ 0x1403B9414 (XmGetCodeByte.c)
 *     XmPopStack @ 0x1403B9474 (XmPopStack.c)
 *     XmPushStack @ 0x1403B9590 (XmPushStack.c)
 *     XmGetWordImmediate @ 0x1403B9670 (XmGetWordImmediate.c)
 *     XmEmulateInterrupt @ 0x1403BE43C (XmEmulateInterrupt.c)
 *     XmEmulateStream @ 0x1403BE4E0 (XmEmulateStream.c)
 *     XmIntOp @ 0x140533D40 (XmIntOp.c)
 * Callees:
 *     <none>
 */

int *__fastcall x86BiosTranslateAddress(unsigned __int16 a1, unsigned __int16 a2)
{
  unsigned int v2; // r8d
  __int64 v4; // rax
  unsigned int v5; // r8d
  char *v6; // rcx
  unsigned int v7; // r8d

  v2 = (a2 + 16 * a1) & 0xFFFFF;
  if ( v2 > 0x8FFFF && v2 - 655360 > 0x1FFFF )
    return (int *)(x86BiosIoMemory + v2);
  if ( v2 >= 0xA0000 )
  {
    v4 = x86BiosFrameBuffer;
    v6 = (char *)v2;
    if ( !x86BiosFrameBuffer )
      v4 = x86BiosIoMemory;
    return (int *)&v6[v4];
  }
  v4 = (unsigned __int16)(a2 + 16 * a1);
  v5 = HIWORD(v2);
  if ( v5 )
  {
    v7 = v5 - 1;
    if ( v7 && v7 - 1 <= 1 && (unsigned int)v4 < x86BiosTransferLength )
      return (int *)(x86BiosTransferMemory + v4);
  }
  else if ( (unsigned int)v4 <= 0x800 )
  {
    v6 = (char *)&x86BiosLowMemory;
    return (int *)&v6[v4];
  }
  x86BiosScratchMemory = 0;
  return &x86BiosScratchMemory;
}
