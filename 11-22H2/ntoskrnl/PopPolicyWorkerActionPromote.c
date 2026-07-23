/*
 * XREFs of PopPolicyWorkerActionPromote @ 0x14098A3D0
 * Callers:
 *     PopPolicyWorkerThread @ 0x140361740 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x14032C984 (PopGetPolicyWorker.c)
 *     PopSetPowerActionState @ 0x14058F554 (PopSetPowerActionState.c)
 *     PopIssueActionRequest @ 0x140989D54 (PopIssueActionRequest.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopPolicyWorkerActionPromote @ 0x14098A3D0
 * Reason: Hex-Rays returned no pseudocode for 0x14098A3D0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014098A3D0: push    rbx
 * 000000014098A3D2: sub     rsp, 20h
 * 000000014098A3D6: call    PopAcquirePolicyLock
 * 000000014098A3DB: mov     rax, gs:188h
 * 000000014098A3E4: mov     cs:qword_140C3CFE0, rax
 * 000000014098A3EB: movzx   eax, cs:PopAction
 * 000000014098A3F2: test    al, al
 * 000000014098A3F4: jz      short loc_14098A455
 * 000000014098A3F6: mov     ebx, eax
 * 000000014098A3F8: mov     al, cs:byte_140C3CE21
 * 000000014098A3FE: test    al, al
 * 000000014098A400: jz      short loc_14098A43F
 * 000000014098A402: cmp     al, 2
 * 000000014098A404: jnz     short loc_14098A455
 * 000000014098A406: mov     r9d, cs:dword_140C3CE2C
 * 000000014098A40D: mov     cl, 1
 * 000000014098A40F: mov     r8d, dword ptr cs:qword_140C3CE24+4
 * 000000014098A416: mov     edx, dword ptr cs:qword_140C3CE24
 * 000000014098A41C: call    PopIssueActionRequest
 * 000000014098A421: test    eax, eax
 * 000000014098A423: js      short loc_14098A42F
 * 000000014098A425: not     bl
 * 000000014098A427: and     cs:PopAction, bl
 * 000000014098A42D: jmp     short loc_14098A455
 * 000000014098A42F: cmp     cs:byte_140C3CE21, 2
 * 000000014098A436: jz      short loc_14098A455
 * 000000014098A438: mov     ecx, 1
 * 000000014098A43D: jmp     short loc_14098A450
 * 000000014098A43F: test    bl, 2
 * 000000014098A442: jz      short loc_14098A455
 * 000000014098A444: mov     cl, 1
 * 000000014098A446: call    PopSetPowerActionState
 * 000000014098A44B: mov     ecx, 2
 * 000000014098A450: call    PopGetPolicyWorker
 * 000000014098A455: and     cs:qword_140C3CFE0, 0
 * 000000014098A45D: call    PopReleasePolicyLock
 * 000000014098A462: mov     rax, gs:188h
 * 000000014098A46B: cmp     dword ptr [rax+1E4h], 0
 * 000000014098A472: jz      short loc_14098A47B
 * 000000014098A474: mov     ecx, 20h ; ' '
 * 000000014098A479: int     29h; Win8: RtlFailFast(ecx)
 * 000000014098A47B: xor     eax, eax
 * 000000014098A47D: add     rsp, 20h
 * 000000014098A481: pop     rbx
 * 000000014098A482: retn
 */
