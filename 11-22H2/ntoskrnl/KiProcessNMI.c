/*
 * XREFs of KiProcessNMI @ 0x14020EA80
 * Callers:
 *     KxNmiInterrupt @ 0x14042C400 (KxNmiInterrupt.c)
 * Callees:
 *     KxTryToAcquireSpinLock @ 0x14020D904 (KxTryToAcquireSpinLock.c)
 *     KiCheckForFreezeExecution @ 0x14020EA30 (KiCheckForFreezeExecution.c)
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403413F0 (KeInterlockedClearProcessorAffinityEx.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403486B0 (KeInterlockedSetProcessorAffinityEx.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     KiFlushCurrentRsb @ 0x140434F00 (KiFlushCurrentRsb.c)
 *     HalHandleNMI @ 0x1405063E0 (HalHandleNMI.c)
 */

/*
 * Hex-Rays decompilation failed for KiProcessNMI @ 0x14020EA80
 * Reason: Hex-Rays returned no pseudocode for 0x14020EA80
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014020EA80: mov     rax, rsp
 * 000000014020EA83: mov     [rax+8], rbx
 * 000000014020EA87: mov     [rax+10h], rbp
 * 000000014020EA8B: mov     [rax+18h], rsi
 * 000000014020EA8F: mov     [rax+20h], rdi
 * 000000014020EA93: push    r12
 * 000000014020EA95: push    r14
 * 000000014020EA97: push    r15
 * 000000014020EA99: sub     rsp, 20h
 * 000000014020EA9D: mov     rax, cs:off_140C01D88
 * 000000014020EAA4: mov     r14, rcx
 * 000000014020EAA7: xor     ecx, ecx
 * 000000014020EAA9: mov     rbp, rdx
 * 000000014020EAAC: call    _guard_dispatch_icall
 * 000000014020EAB1: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014020EAB8: bt      rax, 29h ; ')'
 * 000000014020EABD: jb      short loc_14020EAF8
 * 000000014020EABF: lfence
 * 000000014020EAC2: mov     rdx, rbp
 * 000000014020EAC5: mov     rcx, r14
 * 000000014020EAC8: call    KiCheckForFreezeExecution
 * 000000014020EACD: xor     r15d, r15d
 * 000000014020EAD0: test    al, al
 * 000000014020EAD2: jz      loc_140473410
 * 000000014020EAD8: mov     rbx, [rsp+38h+arg_0]
 * 000000014020EADD: mov     rbp, [rsp+38h+arg_8]
 * 000000014020EAE2: mov     rsi, [rsp+38h+arg_10]
 * 000000014020EAE7: mov     rdi, [rsp+38h+arg_18]
 * 000000014020EAEC: add     rsp, 20h
 * 000000014020EAF0: pop     r15
 * 000000014020EAF2: pop     r14
 * 000000014020EAF4: pop     r12
 * 000000014020EAF6: retn
 * 000000014020EAF8: call    KiFlushCurrentRsb
 * 000000014020EAFD: jmp     short loc_14020EABF
 * 0000000140473410: mov     rax, gs:20h
 * 0000000140473419: lea     rcx, KiNmiInProgress; "  "
 * 0000000140473420: mov     esi, [rax+24h]
 * 0000000140473423: mov     edx, esi
 * 0000000140473425: call    KeInterlockedSetProcessorAffinityEx
 * 000000014047342A: test    eax, eax
 * 000000014047342C: jnz     loc_14020EAD8
 * 0000000140473432: mov     rax, cs:off_140C01D88
 * 0000000140473439: mov     r12d, 1
 * 000000014047343F: mov     ecx, r12d
 * 0000000140473442: call    _guard_dispatch_icall
 * 0000000140473447: mov     rbx, cs:KiNmiCallbackListHead
 * 000000014047344E: mov     dil, r15b
 * 0000000140473451: test    rbx, rbx
 * 0000000140473454: jz      short loc_140473476
 * 0000000140473456: mov     rax, [rbx+8]
 * 000000014047345A: mov     dl, dil
 * 000000014047345D: mov     rcx, [rbx+10h]
 * 0000000140473461: call    _guard_dispatch_icall
 * 0000000140473466: mov     rbx, [rbx]
 * 0000000140473469: or      dil, al
 * 000000014047346C: test    rbx, rbx
 * 000000014047346F: jnz     short loc_140473456
 * 0000000140473471: test    dil, dil
 * 0000000140473474: jnz     short loc_1404734B0
 * 0000000140473476: lea     rcx, KiNMILock
 * 000000014047347D: call    KxTryToAcquireSpinLock
 * 0000000140473482: test    al, al
 * 0000000140473484: jz      short loc_1404734C4
 * 0000000140473486: xor     eax, eax
 * 0000000140473488: lock cmpxchg cs:KiBugCheckActive, r12d
 * 0000000140473491: xor     ecx, ecx
 * 0000000140473493: call    HalHandleNMI
 * 0000000140473498: mov     eax, r12d
 * 000000014047349B: lock cmpxchg cs:KiBugCheckActive, r15d
 * 00000001404734A4: lea     rcx, KiNMILock
 * 00000001404734AB: call    KxReleaseSpinLock
 * 00000001404734B0: mov     edx, esi
 * 00000001404734B2: lea     rcx, KiNmiInProgress; "  "
 * 00000001404734B9: call    KeInterlockedClearProcessorAffinityEx
 * 00000001404734BE: nop
 * 00000001404734BF: jmp     loc_14020EAD8
 * 00000001404734C4: mov     rdx, rbp
 * 00000001404734C7: mov     rcx, r14
 * 00000001404734CA: call    KiCheckForFreezeExecution
 * 00000001404734CF: mov     rax, cs:KiNMILock
 * 00000001404734D6: test    rax, rax
 * 00000001404734D9: jnz     short loc_1404734C4
 * 00000001404734DB: jmp     short loc_140473476
 */
