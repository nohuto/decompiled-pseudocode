/*
 * XREFs of PopNetSetResiliencyPhaseBias @ 0x140996B78
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1403ADA20 (PopNetEvaluationWorkerCallback.c)
 *     PopNetDisengageNetworkRefresh @ 0x140996920 (PopNetDisengageNetworkRefresh.c)
 *     PopNetEngageNetworkRefresh @ 0x14099696C (PopNetEngageNetworkRefresh.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopNetSetResiliencyPhaseBias @ 0x140996B78
 * Reason: Hex-Rays returned no pseudocode for 0x140996B78
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140996B78: push    rbx
 * 0000000140996B7A: sub     rsp, 20h
 * 0000000140996B7E: mov     bl, cl
 * 0000000140996B80: call    PopReleasePolicyLock
 * 0000000140996B85: mov     rax, cs:qword_140C6AF60
 * 0000000140996B8C: test    rax, rax
 * 0000000140996B8F: jz      short loc_140996B98
 * 0000000140996B91: mov     cl, bl
 * 0000000140996B93: call    _guard_dispatch_icall
 * 0000000140996B98: call    PopAcquirePolicyLock
 * 0000000140996B9D: add     rsp, 20h
 * 0000000140996BA1: pop     rbx
 * 0000000140996BA2: retn
 */
