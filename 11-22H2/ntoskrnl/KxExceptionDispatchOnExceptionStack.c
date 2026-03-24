/*
 * XREFs of KxExceptionDispatchOnExceptionStack @ 0x14041F5A0
 * Callers:
 *     KiExceptionDispatchOnExceptionStack @ 0x14041F560 (KiExceptionDispatchOnExceptionStack.c)
 * Callees:
 *     KiDispatchException @ 0x14030CAC0 (KiDispatchException.c)
 */

/*
 * Hex-Rays decompilation failed for KxExceptionDispatchOnExceptionStack @ 0x14041F5A0
 * Reason: Hex-Rays returned no pseudocode for 0x14041F5A0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014041F5A0: test    dword ptr [rbp+0F8h], 200h
 * 000000014041F5AA: jz      short loc_14041F5AD
 * 000000014041F5AC: sti
 * 000000014041F5AD: call    KiDispatchException
 * 000000014041F5B2: cli
 * 000000014041F5B3: mov     rsp, [rsp+arg_38]
 * 000000014041F5B8: jmp     short KiExceptionDispatchOnExceptionStackContinue
 */
