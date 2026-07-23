/*
 * XREFs of KiProcessNMI @ 0x14020EA60
 * Callers:
 *     KxNmiInterrupt @ 0x14042CE00 (KxNmiInterrupt.c)
 * Callees:
 *     KxTryToAcquireSpinLock @ 0x14020D8E4 (KxTryToAcquireSpinLock.c)
 *     KiCheckForFreezeExecution @ 0x14020EA10 (KiCheckForFreezeExecution.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x140341B70 (KeInterlockedClearProcessorAffinityEx.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x140348E30 (KeInterlockedSetProcessorAffinityEx.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     KiFlushCurrentRsb @ 0x140435900 (KiFlushCurrentRsb.c)
 *     HalHandleNMI @ 0x140506820 (HalHandleNMI.c)
 */

/*
 * Hex-Rays decompilation failed for KiProcessNMI @ 0x14020EA60
 * Reason: Hex-Rays returned no pseudocode for 0x14020EA60
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014020EA60: mov     rax, rsp
 * 000000014020EA63: mov     [rax+8], rbx
 * 000000014020EA67: mov     [rax+10h], rbp
 * 000000014020EA6B: mov     [rax+18h], rsi
 * 000000014020EA6F: mov     [rax+20h], rdi
 * 000000014020EA73: push    r12
 * 000000014020EA75: push    r14
 * 000000014020EA77: push    r15
 * 000000014020EA79: sub     rsp, 20h
 * 000000014020EA7D: mov     rax, cs:off_140C01D88
 * 000000014020EA84: mov     r14, rcx
 * 000000014020EA87: xor     ecx, ecx
 * 000000014020EA89: mov     rbp, rdx
 * 000000014020EA8C: call    _guard_dispatch_icall
 * 000000014020EA91: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014020EA98: bt      rax, 29h ; ')'
 * 000000014020EA9D: jb      short loc_14020EAD8
 * 000000014020EA9F: lfence
 * 000000014020EAA2: mov     rdx, rbp
 * 000000014020EAA5: mov     rcx, r14
 * 000000014020EAA8: call    KiCheckForFreezeExecution
 * 000000014020EAAD: xor     r15d, r15d
 * 000000014020EAB0: test    al, al
 * 000000014020EAB2: jz      loc_1404738D0
 * 000000014020EAB8: mov     rbx, [rsp+38h+arg_0]
 * 000000014020EABD: mov     rbp, [rsp+38h+arg_8]
 * 000000014020EAC2: mov     rsi, [rsp+38h+arg_10]
 * 000000014020EAC7: mov     rdi, [rsp+38h+arg_18]
 * 000000014020EACC: add     rsp, 20h
 * 000000014020EAD0: pop     r15
 * 000000014020EAD2: pop     r14
 * 000000014020EAD4: pop     r12
 * 000000014020EAD6: retn
 * 000000014020EAD8: call    KiFlushCurrentRsb
 * 000000014020EADD: jmp     short loc_14020EA9F
 * 00000001404738D0: mov     rax, gs:20h
 * 00000001404738D9: lea     rcx, KiNmiInProgress; "  "
 * 00000001404738E0: mov     esi, [rax+24h]
 * 00000001404738E3: mov     edx, esi
 * 00000001404738E5: call    KeInterlockedSetProcessorAffinityEx
 * 00000001404738EA: test    eax, eax
 * 00000001404738EC: jnz     loc_14020EAB8
 * 00000001404738F2: mov     rax, cs:off_140C01D88
 * 00000001404738F9: mov     r12d, 1
 * 00000001404738FF: mov     ecx, r12d
 * 0000000140473902: call    _guard_dispatch_icall
 * 0000000140473907: mov     rbx, cs:KiNmiCallbackListHead
 * 000000014047390E: mov     dil, r15b
 * 0000000140473911: test    rbx, rbx
 * 0000000140473914: jz      short loc_140473936
 * 0000000140473916: mov     rax, [rbx+8]
 * 000000014047391A: mov     dl, dil
 * 000000014047391D: mov     rcx, [rbx+10h]
 * 0000000140473921: call    _guard_dispatch_icall
 * 0000000140473926: mov     rbx, [rbx]
 * 0000000140473929: or      dil, al
 * 000000014047392C: test    rbx, rbx
 * 000000014047392F: jnz     short loc_140473916
 * 0000000140473931: test    dil, dil
 * 0000000140473934: jnz     short loc_140473970
 * 0000000140473936: lea     rcx, KiNMILock
 * 000000014047393D: call    KxTryToAcquireSpinLock
 * 0000000140473942: test    al, al
 * 0000000140473944: jz      short loc_140473984
 * 0000000140473946: xor     eax, eax
 * 0000000140473948: lock cmpxchg cs:KiBugCheckActive, r12d
 * 0000000140473951: xor     ecx, ecx
 * 0000000140473953: call    HalHandleNMI
 * 0000000140473958: mov     eax, r12d
 * 000000014047395B: lock cmpxchg cs:KiBugCheckActive, r15d
 * 0000000140473964: lea     rcx, KiNMILock
 * 000000014047396B: call    KxReleaseSpinLock
 * 0000000140473970: mov     edx, esi
 * 0000000140473972: lea     rcx, KiNmiInProgress; "  "
 * 0000000140473979: call    KeInterlockedClearProcessorAffinityEx
 * 000000014047397E: nop
 * 000000014047397F: jmp     loc_14020EAB8
 * 0000000140473984: mov     rdx, rbp
 * 0000000140473987: mov     rcx, r14
 * 000000014047398A: call    KiCheckForFreezeExecution
 * 000000014047398F: mov     rax, cs:KiNMILock
 * 0000000140473996: test    rax, rax
 * 0000000140473999: jnz     short loc_140473984
 * 000000014047399B: jmp     short loc_140473936
 */
