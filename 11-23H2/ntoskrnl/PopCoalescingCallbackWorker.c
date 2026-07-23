/*
 * XREFs of PopCoalescingCallbackWorker @ 0x140987150
 * Callers:
 *     <none>
 * Callees:
 *     PoIssueCoalescingNotification @ 0x14058DC84 (PoIssueCoalescingNotification.c)
 *     PopCoalescingSetActiveState @ 0x14058DDDC (PopCoalescingSetActiveState.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopCoalescingCallbackWorker @ 0x140987150
 * Reason: Hex-Rays returned no pseudocode for 0x140987150
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140987150: sub     rsp, 28h
 * 0000000140987154: call    PopAcquirePolicyLock
 * 0000000140987159: mov     al, cs:PopCoalescingState
 * 000000014098715F: test    al, 2
 * 0000000140987161: jnz     short loc_14098717A
 * 0000000140987163: test    al, 1
 * 0000000140987165: jz      short loc_1409871BD
 * 0000000140987167: xor     ecx, ecx
 * 0000000140987169: call    PopCoalescingSetActiveState
 * 000000014098716E: call    PopReleasePolicyLock
 * 0000000140987173: mov     edx, 2
 * 0000000140987178: jmp     short loc_1409871AF
 * 000000014098717A: test    al, 1
 * 000000014098717C: jnz     short loc_140987199
 * 000000014098717E: and     al, 0FBh
 * 0000000140987180: mov     cl, 1
 * 0000000140987182: mov     cs:PopCoalescingState, al
 * 0000000140987188: call    PopCoalescingSetActiveState
 * 000000014098718D: call    PopReleasePolicyLock
 * 0000000140987192: mov     edx, 1
 * 0000000140987197: jmp     short loc_1409871AF
 * 0000000140987199: test    al, 4
 * 000000014098719B: jz      short loc_1409871BD
 * 000000014098719D: and     al, 0FBh
 * 000000014098719F: mov     cs:PopCoalescingState, al
 * 00000001409871A5: call    PopReleasePolicyLock
 * 00000001409871AA: mov     edx, 3
 * 00000001409871AF: mov     rcx, cs:PopCoalescingRegistration
 * 00000001409871B6: call    PoIssueCoalescingNotification
 * 00000001409871BB: jmp     short loc_140987154
 * 00000001409871BD: and     al, 0F7h
 * 00000001409871BF: mov     cs:PopCoalescingState, al
 * 00000001409871C5: call    PopReleasePolicyLock
 * 00000001409871CA: add     rsp, 28h
 * 00000001409871CE: retn
 */
