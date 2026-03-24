/*
 * XREFs of __guard_retpoline_exit_indirect_rax @ 0x140AB83A0
 * Callers:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     __guard_retpoline_indirect_cfg_rax @ 0x140AB82A0 (__guard_retpoline_indirect_cfg_rax.c)
 * Callees:
 *     EtwTraceRetpolineExit @ 0x14062E3A0 (EtwTraceRetpolineExit.c)
 *     __guard_retpoline_exit @ 0x140AB8580 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_exit_indirect_rax @ 0x140AB83A0
 * Reason: Hex-Rays returned no pseudocode for 0x140AB83A0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140AB83A0: sub     rsp, 48h
 * 0000000140AB83A4: call    __guard_retpoline_exit
 * 0000000140AB83A9: lfence
 * 0000000140AB83AC: mov     r10, (offset xmmword_140D06910+4)
 * 0000000140AB83B6: mov     r10d, [r10]
 * 0000000140AB83B9: test    r10d, 2
 * 0000000140AB83C0: jz      short loc_140AB8403
 * 0000000140AB83C2: mov     [rsp+48h+var_28], rax
 * 0000000140AB83C7: mov     [rsp+48h+var_20], rcx
 * 0000000140AB83CC: mov     [rsp+48h+var_18], rdx
 * 0000000140AB83D1: mov     [rsp+48h+var_10], r8
 * 0000000140AB83D6: mov     [rsp+48h+var_8], r9
 * 0000000140AB83DB: mov     rcx, rax
 * 0000000140AB83DE: mov     rax, offset EtwTraceRetpolineExit
 * 0000000140AB83E8: call    rax ; EtwTraceRetpolineExit
 * 0000000140AB83EA: mov     rax, [rsp+48h+var_28]
 * 0000000140AB83EF: mov     rcx, [rsp+48h+var_20]
 * 0000000140AB83F4: mov     rdx, [rsp+48h+var_18]
 * 0000000140AB83F9: mov     r8, [rsp+48h+var_10]
 * 0000000140AB83FE: mov     r9, [rsp+48h+var_8]
 * 0000000140AB8403: add     rsp, 48h
 * 0000000140AB8407: jmp     rax
 */
