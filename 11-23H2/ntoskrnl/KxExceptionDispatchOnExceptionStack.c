/*
 * XREFs of KxExceptionDispatchOnExceptionStack @ 0x14041FFF0
 * Callers:
 *     KiExceptionDispatchOnExceptionStack @ 0x14041FFB0 (KiExceptionDispatchOnExceptionStack.c)
 * Callees:
 *     KiDispatchException @ 0x14030CF30 (KiDispatchException.c)
 */

/*
 * Hex-Rays decompilation failed for KxExceptionDispatchOnExceptionStack @ 0x14041FFF0
 * Reason: Hex-Rays returned no pseudocode for 0x14041FFF0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014041FFF0: test    dword ptr [rbp+0F8h], 200h
 * 000000014041FFFA: jz      short loc_14041FFFD
 * 000000014041FFFC: sti
 * 000000014041FFFD: call    KiDispatchException
 * 0000000140420002: cli
 * 0000000140420003: mov     rsp, [rsp+arg_38]
 * 0000000140420008: jmp     short KiExceptionDispatchOnExceptionStackContinue
 */
