/*
 * XREFs of sub_14029B9A0 @ 0x14029B9A0
 * Callers:
 *     sub_14042D380 @ 0x14042D380 (sub_14042D380.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14029B950 @ 0x14029B950 (sub_14029B950.c)
 *     sub_1402DA448 @ 0x1402DA448 (sub_1402DA448.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403B49A0 (KeInterlockedClearProcessorAffinityEx.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403C1A20 (KeInterlockedSetProcessorAffinityEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1404359C0 @ 0x1404359C0 (sub_1404359C0.c)
 *     HalHandleNMI @ 0x14050A180 (HalHandleNMI.c)
 */

/*
 * Hex-Rays decompilation failed for sub_14029B9A0 @ 0x14029B9A0
 * Reason: Hex-Rays returned no pseudocode for 0x14029B9A0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014029B9A0: mov     rax, rsp
 * 000000014029B9A3: mov     [rax+8], rbx
 * 000000014029B9A7: mov     [rax+10h], rbp
 * 000000014029B9AB: mov     [rax+18h], rsi
 * 000000014029B9AF: mov     [rax+20h], rdi
 * 000000014029B9B3: push    r12
 * 000000014029B9B5: push    r14
 * 000000014029B9B7: push    r15
 * 000000014029B9B9: sub     rsp, 20h
 * 000000014029B9BD: mov     rax, cs:off_140C01FC8
 * 000000014029B9C4: mov     r14, rcx
 * 000000014029B9C7: xor     ecx, ecx
 * 000000014029B9C9: mov     rbp, rdx
 * 000000014029B9CC: call    sub_14042A5E0
 * 000000014029B9D1: mov     rax, qword ptr cs:xmmword_140D06920
 * 000000014029B9D8: bt      rax, 29h ; ')'
 * 000000014029B9DD: jb      short loc_14029BA18
 * 000000014029B9DF: lfence
 * 000000014029B9E2: mov     rdx, rbp
 * 000000014029B9E5: mov     rcx, r14
 * 000000014029B9E8: call    sub_14029B950
 * 000000014029B9ED: xor     r15d, r15d
 * 000000014029B9F0: test    al, al
 * 000000014029B9F2: jz      loc_1404A3E50
 * 000000014029B9F8: mov     rbx, [rsp+38h+arg_0]
 * 000000014029B9FD: mov     rbp, [rsp+38h+arg_8]
 * 000000014029BA02: mov     rsi, [rsp+38h+arg_10]
 * 000000014029BA07: mov     rdi, [rsp+38h+arg_18]
 * 000000014029BA0C: add     rsp, 20h
 * 000000014029BA10: pop     r15
 * 000000014029BA12: pop     r14
 * 000000014029BA14: pop     r12
 * 000000014029BA16: retn
 * 000000014029BA18: call    sub_1404359C0
 * 000000014029BA1D: jmp     short loc_14029B9DF
 * 00000001404A3E50: mov     rax, gs:20h
 * 00000001404A3E59: lea     rcx, asc_140C0CC00; "  "
 * 00000001404A3E60: mov     esi, [rax+24h]
 * 00000001404A3E63: mov     edx, esi
 * 00000001404A3E65: call    KeInterlockedSetProcessorAffinityEx
 * 00000001404A3E6A: test    eax, eax
 * 00000001404A3E6C: jnz     loc_14029B9F8
 * 00000001404A3E72: mov     rax, cs:off_140C01FC8
 * 00000001404A3E79: mov     r12d, 1
 * 00000001404A3E7F: mov     ecx, r12d
 * 00000001404A3E82: call    sub_14042A5E0
 * 00000001404A3E87: mov     rbx, cs:qword_140C2BD30
 * 00000001404A3E8E: mov     dil, r15b
 * 00000001404A3E91: test    rbx, rbx
 * 00000001404A3E94: jz      short loc_1404A3EB6
 * 00000001404A3E96: mov     rax, [rbx+8]
 * 00000001404A3E9A: mov     dl, dil
 * 00000001404A3E9D: mov     rcx, [rbx+10h]
 * 00000001404A3EA1: call    sub_14042A5E0
 * 00000001404A3EA6: mov     rbx, [rbx]
 * 00000001404A3EA9: or      dil, al
 * 00000001404A3EAC: test    rbx, rbx
 * 00000001404A3EAF: jnz     short loc_1404A3E96
 * 00000001404A3EB1: test    dil, dil
 * 00000001404A3EB4: jnz     short loc_1404A3EF0
 * 00000001404A3EB6: lea     rcx, qword_140D31440
 * 00000001404A3EBD: call    sub_1402DA448
 * 00000001404A3EC2: test    al, al
 * 00000001404A3EC4: jz      short loc_1404A3F04
 * 00000001404A3EC6: xor     eax, eax
 * 00000001404A3EC8: lock cmpxchg cs:dword_140C31E20, r12d
 * 00000001404A3ED1: xor     ecx, ecx
 * 00000001404A3ED3: call    HalHandleNMI
 * 00000001404A3ED8: mov     eax, r12d
 * 00000001404A3EDB: lock cmpxchg cs:dword_140C31E20, r15d
 * 00000001404A3EE4: lea     rcx, qword_140D31440; SpinLock
 * 00000001404A3EEB: call    KeReleaseSpinLockFromDpcLevel
 * 00000001404A3EF0: mov     edx, esi
 * 00000001404A3EF2: lea     rcx, asc_140C0CC00; "  "
 * 00000001404A3EF9: call    KeInterlockedClearProcessorAffinityEx
 * 00000001404A3EFE: nop
 * 00000001404A3EFF: jmp     loc_14029B9F8
 * 00000001404A3F04: mov     rdx, rbp
 * 00000001404A3F07: mov     rcx, r14
 * 00000001404A3F0A: call    sub_14029B950
 * 00000001404A3F0F: mov     rax, cs:qword_140D31440
 * 00000001404A3F16: test    rax, rax
 * 00000001404A3F19: jnz     short loc_1404A3F04
 * 00000001404A3F1B: jmp     short loc_1404A3EB6
 */
