/*
 * XREFs of PdcPoVerifyActionPolicy @ 0x140997DD0
 * Callers:
 *     <none>
 * Callees:
 *     PopVerifyPowerActionPolicy @ 0x140824A78 (PopVerifyPowerActionPolicy.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PdcPoVerifyActionPolicy @ 0x140997DD0
 * Reason: Hex-Rays returned no pseudocode for 0x140997DD0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140997DD0: push    rbx
 * 0000000140997DD2: sub     rsp, 20h
 * 0000000140997DD6: mov     rbx, rcx
 * 0000000140997DD9: call    PopAcquirePolicyLock
 * 0000000140997DDE: mov     rcx, rbx
 * 0000000140997DE1: call    PopVerifyPowerActionPolicy
 * 0000000140997DE6: call    PopReleasePolicyLock
 * 0000000140997DEB: add     rsp, 20h
 * 0000000140997DEF: pop     rbx
 * 0000000140997DF0: retn
 */
