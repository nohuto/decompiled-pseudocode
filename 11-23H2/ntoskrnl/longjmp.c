/*
 * XREFs of longjmp @ 0x1403D80C0
 * Callers:
 *     XmGetStringAddress @ 0x1403994CC (XmGetStringAddress.c)
 *     XmGetStringAddressRange @ 0x140399544 (XmGetStringAddressRange.c)
 *     XmGetLongImmediate @ 0x140399EB8 (XmGetLongImmediate.c)
 *     XmGroup45General @ 0x14039CC80 (XmGroup45General.c)
 *     XmGetOffsetAddress @ 0x1403A52BC (XmGetOffsetAddress.c)
 *     XmDivOp @ 0x1403A60F0 (XmDivOp.c)
 *     XmOutOp @ 0x1403B8C70 (XmOutOp.c)
 *     XmInOp @ 0x1403B8DC0 (XmInOp.c)
 *     XmEvaluateAddressSpecifier @ 0x1403B940C (XmEvaluateAddressSpecifier.c)
 *     XmGetCodeByte @ 0x1403B95F4 (XmGetCodeByte.c)
 *     XmPopStack @ 0x1403B9654 (XmPopStack.c)
 *     XmPushStack @ 0x1403B9770 (XmPushStack.c)
 *     XmGetWordImmediate @ 0x1403B9850 (XmGetWordImmediate.c)
 *     XmEmulateStream @ 0x1403BE6C0 (XmEmulateStream.c)
 *     XmEffectiveOffset @ 0x140533140 (XmEffectiveOffset.c)
 *     XmGeneralRegister @ 0x140533270 (XmGeneralRegister.c)
 *     XmGroup7General @ 0x1405332F0 (XmGroup7General.c)
 *     XmLoadSegment @ 0x140533520 (XmLoadSegment.c)
 *     XmEnterOp @ 0x1405341C0 (XmEnterOp.c)
 *     XmHltOp @ 0x140534270 (XmHltOp.c)
 *     XmBoundOp @ 0x140534950 (XmBoundOp.c)
 *     XmIllOp @ 0x140534A20 (XmIllOp.c)
 *     XmIdivOp @ 0x140534C40 (XmIdivOp.c)
 *     XmEvaluateIndexSpecifier @ 0x140534E18 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     KeCheckStackAndTargetAddress @ 0x140346BD0 (KeCheckStackAndTargetAddress.c)
 *     __longjmp_internal @ 0x14041A920 (__longjmp_internal.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  KeCheckStackAndTargetAddress(Buf[5].Part[0], Buf[1].Part[0]);
  _longjmp_internal(Buf, (unsigned int)Value);
}
