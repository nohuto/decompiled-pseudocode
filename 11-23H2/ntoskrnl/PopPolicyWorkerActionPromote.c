/*
 * XREFs of PopPolicyWorkerActionPromote @ 0x14098A520
 * Callers:
 *     PopPolicyWorkerThread @ 0x140361F30 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x14032CDF4 (PopGetPolicyWorker.c)
 *     PopSetPowerActionState @ 0x14058F9B4 (PopSetPowerActionState.c)
 *     PopIssueActionRequest @ 0x140989EA4 (PopIssueActionRequest.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopPolicyWorkerActionPromote @ 0x14098A520
 * Reason: Hex-Rays returned no pseudocode for 0x14098A520
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014098A520: push    rbx
 * 000000014098A522: sub     rsp, 20h
 * 000000014098A526: call    PopAcquirePolicyLock
 * 000000014098A52B: mov     rax, gs:188h
 * 000000014098A534: mov     cs:qword_140C3CF40, rax
 * 000000014098A53B: movzx   eax, cs:PopAction
 * 000000014098A542: test    al, al
 * 000000014098A544: jz      short loc_14098A5A5
 * 000000014098A546: mov     ebx, eax
 * 000000014098A548: mov     al, cs:byte_140C3CD81
 * 000000014098A54E: test    al, al
 * 000000014098A550: jz      short loc_14098A58F
 * 000000014098A552: cmp     al, 2
 * 000000014098A554: jnz     short loc_14098A5A5
 * 000000014098A556: mov     r9d, cs:dword_140C3CD8C
 * 000000014098A55D: mov     cl, 1
 * 000000014098A55F: mov     r8d, dword ptr cs:qword_140C3CD84+4
 * 000000014098A566: mov     edx, dword ptr cs:qword_140C3CD84
 * 000000014098A56C: call    PopIssueActionRequest
 * 000000014098A571: test    eax, eax
 * 000000014098A573: js      short loc_14098A57F
 * 000000014098A575: not     bl
 * 000000014098A577: and     cs:PopAction, bl
 * 000000014098A57D: jmp     short loc_14098A5A5
 * 000000014098A57F: cmp     cs:byte_140C3CD81, 2
 * 000000014098A586: jz      short loc_14098A5A5
 * 000000014098A588: mov     ecx, 1
 * 000000014098A58D: jmp     short loc_14098A5A0
 * 000000014098A58F: test    bl, 2
 * 000000014098A592: jz      short loc_14098A5A5
 * 000000014098A594: mov     cl, 1
 * 000000014098A596: call    PopSetPowerActionState
 * 000000014098A59B: mov     ecx, 2
 * 000000014098A5A0: call    PopGetPolicyWorker
 * 000000014098A5A5: and     cs:qword_140C3CF40, 0
 * 000000014098A5AD: call    PopReleasePolicyLock
 * 000000014098A5B2: mov     rax, gs:188h
 * 000000014098A5BB: cmp     dword ptr [rax+1E4h], 0
 * 000000014098A5C2: jz      short loc_14098A5CB
 * 000000014098A5C4: mov     ecx, 20h ; ' '
 * 000000014098A5C9: int     29h; Win8: RtlFailFast(ecx)
 * 000000014098A5CB: xor     eax, eax
 * 000000014098A5CD: add     rsp, 20h
 * 000000014098A5D1: pop     rbx
 * 000000014098A5D2: retn
 */
