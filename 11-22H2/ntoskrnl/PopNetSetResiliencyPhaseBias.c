/*
 * XREFs of PopNetSetResiliencyPhaseBias @ 0x140996A28
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1403AD1B0 (PopNetEvaluationWorkerCallback.c)
 *     PopNetDisengageNetworkRefresh @ 0x1409967D0 (PopNetDisengageNetworkRefresh.c)
 *     PopNetEngageNetworkRefresh @ 0x14099681C (PopNetEngageNetworkRefresh.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopNetSetResiliencyPhaseBias @ 0x140996A28
 * Reason: Hex-Rays returned no pseudocode for 0x140996A28
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140996A28: push    rbx
 * 0000000140996A2A: sub     rsp, 20h
 * 0000000140996A2E: mov     bl, cl
 * 0000000140996A30: call    PopReleasePolicyLock
 * 0000000140996A35: mov     rax, cs:qword_140C6B050
 * 0000000140996A3C: test    rax, rax
 * 0000000140996A3F: jz      short loc_140996A48
 * 0000000140996A41: mov     cl, bl
 * 0000000140996A43: call    _guard_dispatch_icall
 * 0000000140996A48: call    PopAcquirePolicyLock
 * 0000000140996A4D: add     rsp, 20h
 * 0000000140996A51: pop     rbx
 * 0000000140996A52: retn
 */
