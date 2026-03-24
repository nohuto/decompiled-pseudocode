/*
 * XREFs of KxExceptionDispatchOnExceptionStack @ 0x1404205D0
 * Callers:
 *     KiExceptionDispatchOnExceptionStack @ 0x140420590 (KiExceptionDispatchOnExceptionStack.c)
 * Callees:
 *     KiDispatchException @ 0x140299280 (KiDispatchException.c)
 */

/*
 * Hex-Rays decompilation failed for KxExceptionDispatchOnExceptionStack @ 0x1404205D0
 * Reason: Hex-Rays returned no pseudocode for 0x1404205D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404205D0: test    dword ptr [rbp+0F8h], 200h
 * 00000001404205DA: jz      short loc_1404205DD
 * 00000001404205DC: sti
 * 00000001404205DD: call    KiDispatchException
 * 00000001404205E2: cli
 * 00000001404205E3: mov     rsp, [rsp+arg_38]
 * 00000001404205E8: jmp     short KiExceptionDispatchOnExceptionStackContinue
 */
