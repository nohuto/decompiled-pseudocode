/*
 * XREFs of PdcPoVerifyActionPolicy @ 0x140997C80
 * Callers:
 *     <none>
 * Callees:
 *     PopVerifyPowerActionPolicy @ 0x1408256D8 (PopVerifyPowerActionPolicy.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PdcPoVerifyActionPolicy @ 0x140997C80
 * Reason: Hex-Rays returned no pseudocode for 0x140997C80
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140997C80: push    rbx
 * 0000000140997C82: sub     rsp, 20h
 * 0000000140997C86: mov     rbx, rcx
 * 0000000140997C89: call    PopAcquirePolicyLock
 * 0000000140997C8E: mov     rcx, rbx
 * 0000000140997C91: call    PopVerifyPowerActionPolicy
 * 0000000140997C96: call    PopReleasePolicyLock
 * 0000000140997C9B: add     rsp, 20h
 * 0000000140997C9F: pop     rbx
 * 0000000140997CA0: retn
 */
