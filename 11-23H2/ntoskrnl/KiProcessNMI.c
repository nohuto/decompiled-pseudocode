/*
 * XREFs of KiProcessNMI @ 0x14020EA60
 * Callers:
 *     KxNmiInterrupt @ 0x14042CA00 (KxNmiInterrupt.c)
 * Callees:
 *     KxTryToAcquireSpinLock @ 0x14020D8E4 (KxTryToAcquireSpinLock.c)
 *     KiCheckForFreezeExecution @ 0x14020EA10 (KiCheckForFreezeExecution.c)
 *     KxReleaseSpinLock @ 0x140250500 (KxReleaseSpinLock.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403418E0 (KeInterlockedClearProcessorAffinityEx.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x140348BA0 (KeInterlockedSetProcessorAffinityEx.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     KiFlushCurrentRsb @ 0x140435500 (KiFlushCurrentRsb.c)
 *     HalHandleNMI @ 0x1405062D0 (HalHandleNMI.c)
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
 * 000000014020EAB2: jz      loc_1404734D0
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
 * 00000001404734D0: mov     rax, gs:20h
 * 00000001404734D9: lea     rcx, KiNmiInProgress; "  "
 * 00000001404734E0: mov     esi, [rax+24h]
 * 00000001404734E3: mov     edx, esi
 * 00000001404734E5: call    KeInterlockedSetProcessorAffinityEx
 * 00000001404734EA: test    eax, eax
 * 00000001404734EC: jnz     loc_14020EAB8
 * 00000001404734F2: mov     rax, cs:off_140C01D88
 * 00000001404734F9: mov     r12d, 1
 * 00000001404734FF: mov     ecx, r12d
 * 0000000140473502: call    _guard_dispatch_icall
 * 0000000140473507: mov     rbx, cs:KiNmiCallbackListHead
 * 000000014047350E: mov     dil, r15b
 * 0000000140473511: test    rbx, rbx
 * 0000000140473514: jz      short loc_140473536
 * 0000000140473516: mov     rax, [rbx+8]
 * 000000014047351A: mov     dl, dil
 * 000000014047351D: mov     rcx, [rbx+10h]
 * 0000000140473521: call    _guard_dispatch_icall
 * 0000000140473526: mov     rbx, [rbx]
 * 0000000140473529: or      dil, al
 * 000000014047352C: test    rbx, rbx
 * 000000014047352F: jnz     short loc_140473516
 * 0000000140473531: test    dil, dil
 * 0000000140473534: jnz     short loc_140473570
 * 0000000140473536: lea     rcx, KiNMILock
 * 000000014047353D: call    KxTryToAcquireSpinLock
 * 0000000140473542: test    al, al
 * 0000000140473544: jz      short loc_140473584
 * 0000000140473546: xor     eax, eax
 * 0000000140473548: lock cmpxchg cs:KiBugCheckActive, r12d
 * 0000000140473551: xor     ecx, ecx
 * 0000000140473553: call    HalHandleNMI
 * 0000000140473558: mov     eax, r12d
 * 000000014047355B: lock cmpxchg cs:KiBugCheckActive, r15d
 * 0000000140473564: lea     rcx, KiNMILock
 * 000000014047356B: call    KxReleaseSpinLock
 * 0000000140473570: mov     edx, esi
 * 0000000140473572: lea     rcx, KiNmiInProgress; "  "
 * 0000000140473579: call    KeInterlockedClearProcessorAffinityEx
 * 000000014047357E: nop
 * 000000014047357F: jmp     loc_14020EAB8
 * 0000000140473584: mov     rdx, rbp
 * 0000000140473587: mov     rcx, r14
 * 000000014047358A: call    KiCheckForFreezeExecution
 * 000000014047358F: mov     rax, cs:KiNMILock
 * 0000000140473596: test    rax, rax
 * 0000000140473599: jnz     short loc_140473584
 * 000000014047359B: jmp     short loc_140473536
 */
