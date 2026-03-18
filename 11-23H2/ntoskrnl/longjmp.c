/*
 * XREFs of longjmp @ 0x1403D7EE0
 * Callers:
 *     XmGetStringAddress @ 0x1403992EC (XmGetStringAddress.c)
 *     XmGetStringAddressRange @ 0x140399364 (XmGetStringAddressRange.c)
 *     XmGetLongImmediate @ 0x140399CD8 (XmGetLongImmediate.c)
 *     XmGroup45General @ 0x14039CAA0 (XmGroup45General.c)
 *     XmGetOffsetAddress @ 0x1403A50DC (XmGetOffsetAddress.c)
 *     XmDivOp @ 0x1403A5F10 (XmDivOp.c)
 *     XmOutOp @ 0x1403B8A90 (XmOutOp.c)
 *     XmInOp @ 0x1403B8BE0 (XmInOp.c)
 *     XmEvaluateAddressSpecifier @ 0x1403B922C (XmEvaluateAddressSpecifier.c)
 *     XmGetCodeByte @ 0x1403B9414 (XmGetCodeByte.c)
 *     XmPopStack @ 0x1403B9474 (XmPopStack.c)
 *     XmPushStack @ 0x1403B9590 (XmPushStack.c)
 *     XmGetWordImmediate @ 0x1403B9670 (XmGetWordImmediate.c)
 *     XmEmulateStream @ 0x1403BE4E0 (XmEmulateStream.c)
 *     XmEffectiveOffset @ 0x140532BF0 (XmEffectiveOffset.c)
 *     XmGeneralRegister @ 0x140532D20 (XmGeneralRegister.c)
 *     XmGroup7General @ 0x140532DA0 (XmGroup7General.c)
 *     XmLoadSegment @ 0x140532FD0 (XmLoadSegment.c)
 *     XmEnterOp @ 0x140533C70 (XmEnterOp.c)
 *     XmHltOp @ 0x140533D20 (XmHltOp.c)
 *     XmBoundOp @ 0x140534400 (XmBoundOp.c)
 *     XmIllOp @ 0x1405344D0 (XmIllOp.c)
 *     XmIdivOp @ 0x1405346F0 (XmIdivOp.c)
 *     XmEvaluateIndexSpecifier @ 0x1405348C8 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     KeCheckStackAndTargetAddress @ 0x140346940 (KeCheckStackAndTargetAddress.c)
 *     __longjmp_internal @ 0x14041A590 (__longjmp_internal.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  KeCheckStackAndTargetAddress(Buf[5].Part[0], Buf[1].Part[0]);
  _longjmp_internal(Buf, (unsigned int)Value);
}
