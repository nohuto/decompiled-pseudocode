/*
 * XREFs of PopCoalescingCallbackWorker @ 0x140987000
 * Callers:
 *     <none>
 * Callees:
 *     PoIssueCoalescingNotification @ 0x14058D824 (PoIssueCoalescingNotification.c)
 *     PopCoalescingSetActiveState @ 0x14058D97C (PopCoalescingSetActiveState.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopCoalescingCallbackWorker @ 0x140987000
 * Reason: Hex-Rays returned no pseudocode for 0x140987000
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140987000: sub     rsp, 28h
 * 0000000140987004: call    PopAcquirePolicyLock
 * 0000000140987009: mov     al, cs:PopCoalescingState
 * 000000014098700F: test    al, 2
 * 0000000140987011: jnz     short loc_14098702A
 * 0000000140987013: test    al, 1
 * 0000000140987015: jz      short loc_14098706D
 * 0000000140987017: xor     ecx, ecx
 * 0000000140987019: call    PopCoalescingSetActiveState
 * 000000014098701E: call    PopReleasePolicyLock
 * 0000000140987023: mov     edx, 2
 * 0000000140987028: jmp     short loc_14098705F
 * 000000014098702A: test    al, 1
 * 000000014098702C: jnz     short loc_140987049
 * 000000014098702E: and     al, 0FBh
 * 0000000140987030: mov     cl, 1
 * 0000000140987032: mov     cs:PopCoalescingState, al
 * 0000000140987038: call    PopCoalescingSetActiveState
 * 000000014098703D: call    PopReleasePolicyLock
 * 0000000140987042: mov     edx, 1
 * 0000000140987047: jmp     short loc_14098705F
 * 0000000140987049: test    al, 4
 * 000000014098704B: jz      short loc_14098706D
 * 000000014098704D: and     al, 0FBh
 * 000000014098704F: mov     cs:PopCoalescingState, al
 * 0000000140987055: call    PopReleasePolicyLock
 * 000000014098705A: mov     edx, 3
 * 000000014098705F: mov     rcx, cs:PopCoalescingRegistration
 * 0000000140987066: call    PoIssueCoalescingNotification
 * 000000014098706B: jmp     short loc_140987004
 * 000000014098706D: and     al, 0F7h
 * 000000014098706F: mov     cs:PopCoalescingState, al
 * 0000000140987075: call    PopReleasePolicyLock
 * 000000014098707A: add     rsp, 28h
 * 000000014098707E: retn
 */
