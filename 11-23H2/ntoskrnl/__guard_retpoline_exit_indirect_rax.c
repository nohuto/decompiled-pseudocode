/*
 * XREFs of __guard_retpoline_exit_indirect_rax @ 0x140AF93A0
 * Callers:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     __guard_retpoline_indirect_cfg_rax @ 0x140AF92A0 (__guard_retpoline_indirect_cfg_rax.c)
 * Callees:
 *     EtwTraceRetpolineExit @ 0x1405FD9B0 (EtwTraceRetpolineExit.c)
 *     __guard_retpoline_exit @ 0x140AF9580 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_exit_indirect_rax @ 0x140AF93A0
 * Reason: Hex-Rays returned no pseudocode for 0x140AF93A0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140AF93A0: sub     rsp, 48h
 * 0000000140AF93A4: call    __guard_retpoline_exit
 * 0000000140AF93A9: lfence
 * 0000000140AF93AC: mov     r10, (offset xmmword_140D1EAD0+4)
 * 0000000140AF93B6: mov     r10d, [r10]
 * 0000000140AF93B9: test    r10d, 2
 * 0000000140AF93C0: jz      short loc_140AF9403
 * 0000000140AF93C2: mov     [rsp+48h+var_28], rax
 * 0000000140AF93C7: mov     [rsp+48h+var_20], rcx
 * 0000000140AF93CC: mov     [rsp+48h+var_18], rdx
 * 0000000140AF93D1: mov     [rsp+48h+var_10], r8
 * 0000000140AF93D6: mov     [rsp+48h+var_8], r9
 * 0000000140AF93DB: mov     rcx, rax
 * 0000000140AF93DE: mov     rax, offset EtwTraceRetpolineExit
 * 0000000140AF93E8: call    rax ; EtwTraceRetpolineExit
 * 0000000140AF93EA: mov     rax, [rsp+48h+var_28]
 * 0000000140AF93EF: mov     rcx, [rsp+48h+var_20]
 * 0000000140AF93F4: mov     rdx, [rsp+48h+var_18]
 * 0000000140AF93F9: mov     r8, [rsp+48h+var_10]
 * 0000000140AF93FE: mov     r9, [rsp+48h+var_8]
 * 0000000140AF9403: add     rsp, 48h
 * 0000000140AF9407: jmp     rax
 */
