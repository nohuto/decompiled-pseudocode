/*
 * XREFs of KxExceptionDispatchOnExceptionStack @ 0x14041FC60
 * Callers:
 *     KiExceptionDispatchOnExceptionStack @ 0x14041FC20 (KiExceptionDispatchOnExceptionStack.c)
 * Callees:
 *     KiDispatchException @ 0x14030CCA0 (KiDispatchException.c)
 */

/*
 * Hex-Rays decompilation failed for KxExceptionDispatchOnExceptionStack @ 0x14041FC60
 * Reason: Hex-Rays returned no pseudocode for 0x14041FC60
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014041FC60: test    dword ptr [rbp+0F8h], 200h
 * 000000014041FC6A: jz      short loc_14041FC6D
 * 000000014041FC6C: sti
 * 000000014041FC6D: call    KiDispatchException
 * 000000014041FC72: cli
 * 000000014041FC73: mov     rsp, [rsp+arg_38]
 * 000000014041FC78: jmp     short KiExceptionDispatchOnExceptionStackContinue
 */
