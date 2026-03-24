/*
 * XREFs of KiUpdateStibpPairing @ 0x140460E20
 * Callers:
 *     KiUpdateSpeculationControl @ 0x140325BC0 (KiUpdateSpeculationControl.c)
 *     NtContinueEx @ 0x14041F190 (NtContinueEx.c)
 *     NtRaiseException @ 0x14041F610 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x14041FD40 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x1404202A0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x140420C70 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1404210B0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1404214F0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140421930 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140421D60 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1404229F0 (KxIsrLinkage.c)
 *     KxStartUserThread @ 0x140423F30 (KxStartUserThread.c)
 *     KiApcInterrupt @ 0x140424740 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140425FE0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140426430 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140426B20 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140427310 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140427A20 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x140429CF0 (NtCallEnclave.c)
 *     KiBoundFault @ 0x14042D200 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14042D900 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14042F900 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x140430FC0 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140431A40 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140432140 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x140433B00 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140434940 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140434E40 (KiFastFailDispatch.c)
 *     KePrepareToDispatchVirtualProcessor @ 0x1404607E0 (KePrepareToDispatchVirtualProcessor.c)
 *     KiCopyCounters @ 0x1405741A0 (KiCopyCounters.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x140435500 (KiFlushCurrentRsb.c)
 *     KiQueryProcessStibpPairingAllowed @ 0x140573D6C (KiQueryProcessStibpPairingAllowed.c)
 */

/*
 * Hex-Rays decompilation failed for KiUpdateStibpPairing @ 0x140460E20
 * Reason: Hex-Rays returned no pseudocode for 0x140460E20
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140460E20: mov     [rsp+arg_18], rbx
 * 0000000140460E25: push    rbp
 * 0000000140460E26: push    rsi
 * 0000000140460E27: push    rdi
 * 0000000140460E28: push    r12
 * 0000000140460E2A: push    r13
 * 0000000140460E2C: push    r14
 * 0000000140460E2E: push    r15
 * 0000000140460E30: sub     rsp, 20h
 * 0000000140460E34: mov     rbx, gs:20h
 * 0000000140460E3D: xor     r13d, r13d
 * 0000000140460E40: mov     [rsp+58h+arg_0], r13d
 * 0000000140460E45: mov     r11, rcx
 * 0000000140460E48: mov     [rsp+58h+arg_8], r13d
 * 0000000140460E4D: mov     r15d, r13d
 * 0000000140460E50: lea     r14d, [r13+1]
 * 0000000140460E54: test    rcx, rcx
 * 0000000140460E57: jnz     short loc_140460E6C
 * 0000000140460E59: mov     rax, gs:188h
 * 0000000140460E62: mov     r14d, r13d
 * 0000000140460E65: mov     r11, [rax+220h]
 * 0000000140460E6C: lea     r8, [rsp+58h+arg_0]
 * 0000000140460E71: mov     rcx, r11
 * 0000000140460E74: lea     rdx, [rsp+58h+arg_8]
 * 0000000140460E79: call    KiQueryProcessStibpPairingAllowed
 * 0000000140460E7E: mov     rbp, [r11+9E0h]
 * 0000000140460E85: mov     esi, eax
 * 0000000140460E87: mov     rdi, [rbx+2DB0h]
 * 0000000140460E8E: mov     r12d, r13d
 * 0000000140460E91: mov     r9d, 2
 * 0000000140460E97: test    r14d, r14d
 * 0000000140460E9A: jnz     loc_140460F67
 * 0000000140460EA0: mov     rax, [rbx+6D8h]
 * 0000000140460EA7: lea     r8d, [r9+1Eh]
 * 0000000140460EAB: cmp     rbp, rax
 * 0000000140460EAE: jz      short loc_140460EDF
 * 0000000140460EB0: lock or [rdi+6ECh], r8w
 * 0000000140460EB9: mov     [rbx+6D8h], rbp
 * 0000000140460EC0: lea     r15d, [r9-1]
 * 0000000140460EC4: or      word ptr [rbx+6E0h], 4
 * 0000000140460ECC: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 0000000140460ED3: test    al, 8
 * 0000000140460ED5: jnz     short loc_140460EDF
 * 0000000140460ED7: or      [rbx+6E0h], r8w
 * 0000000140460EDF: movzx   eax, word ptr [rbx+6E0h]
 * 0000000140460EE6: test    al, 4
 * 0000000140460EE8: jz      short loc_140460F09
 * 0000000140460EEA: mov     eax, 1
 * 0000000140460EEF: xor     edx, edx
 * 0000000140460EF1: lea     ecx, [rax+48h]
 * 0000000140460EF4: wrmsr
 * 0000000140460EF6: mov     eax, 0FFFBh
 * 0000000140460EFB: and     [rbx+6E0h], ax
 * 0000000140460F02: movzx   eax, word ptr [rbx+6E0h]
 * 0000000140460F09: test    r8b, al
 * 0000000140460F0C: jz      short loc_140460F25
 * 0000000140460F0E: call    KiFlushCurrentRsb
 * 0000000140460F13: mov     ecx, 0FFDFh
 * 0000000140460F18: mov     r9d, 2
 * 0000000140460F1E: and     [rbx+6E0h], cx
 * 0000000140460F25: mov     r11d, 1
 * 0000000140460F2B: test    esi, esi
 * 0000000140460F2D: jnz     loc_140461009
 * 0000000140460F33: cmp     [rsp+58h+arg_0], r13d
 * 0000000140460F38: jnz     loc_140460FFC
 * 0000000140460F3E: movzx   eax, word ptr [rbx+6ECh]
 * 0000000140460F45: mov     ecx, 0FFFFFEFFh
 * 0000000140460F4A: movzx   r8d, ax
 * 0000000140460F4E: and     r8w, cx
 * 0000000140460F52: or      r8w, r9w
 * 0000000140460F56: lock cmpxchg [rbx+6ECh], r8w
 * 0000000140460F60: jnz     short loc_140460F3E
 * 0000000140460F62: jmp     loc_140461004
 * 0000000140460F67: cmp     [rsp+58h+arg_8], r13d
 * 0000000140460F6C: jz      short loc_140460F25
 * 0000000140460F6E: mov     rax, [rbx+6D8h]
 * 0000000140460F75: test    rax, rax
 * 0000000140460F78: jz      short loc_140460F25
 * 0000000140460F7A: xor     edx, edx
 * 0000000140460F7C: mov     r11d, 1
 * 0000000140460F82: mov     eax, r11d
 * 0000000140460F85: lea     ecx, [rdx+49h]
 * 0000000140460F88: wrmsr
 * 0000000140460F8A: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 0000000140460F91: test    al, 8
 * 0000000140460F93: jnz     short loc_140460FBC
 * 0000000140460F95: call    KiFlushCurrentRsb
 * 0000000140460F9A: mov     ecx, 0FFDFh
 * 0000000140460F9F: mov     r11d, 1
 * 0000000140460FA5: and     [rbx+6E0h], cx
 * 0000000140460FAC: mov     ecx, 0FFBFh
 * 0000000140460FB1: and     [rbx+6D4h], cx
 * 0000000140460FB8: lea     r9d, [r11+1]
 * 0000000140460FBC: mov     eax, 0FFFBh
 * 0000000140460FC1: mov     r8d, 20h ; ' '
 * 0000000140460FC7: and     [rbx+6E0h], ax
 * 0000000140460FCE: lock or [rdi+6ECh], r8w
 * 0000000140460FD7: mov     [rbx+6D8h], rbp
 * 0000000140460FDE: mov     eax, 0FFEFh
 * 0000000140460FE3: or      [rbx+6D6h], r9b
 * 0000000140460FEA: mov     r15d, r11d
 * 0000000140460FED: and     [rbx+6D4h], ax
 * 0000000140460FF4: mov     r12d, r11d
 * 0000000140460FF7: jmp     loc_140460F2B
 * 0000000140460FFC: movzx   r8d, word ptr [rbx+6ECh]
 * 0000000140461004: mov     rbp, r9
 * 0000000140461007: jmp     short loc_140461049
 * 0000000140461009: mov     edx, 0FFFFFEFDh
 * 000000014046100E: prefetchw byte ptr [rbx+6ECh]
 * 0000000140461015: movzx   eax, word ptr [rbx+6ECh]
 * 000000014046101C: test    r14d, r14d
 * 000000014046101F: jz      short loc_140461034
 * 0000000140461021: movzx   ecx, ax
 * 0000000140461024: and     cx, dx
 * 0000000140461027: lock cmpxchg [rbx+6ECh], cx
 * 0000000140461030: jnz     short loc_140461021
 * 0000000140461032: jmp     short loc_140461045
 * 0000000140461034: movzx   ecx, ax
 * 0000000140461037: and     cx, dx
 * 000000014046103A: lock cmpxchg [rbx+6ECh], cx
 * 0000000140461043: jnz     short loc_140461034
 * 0000000140461045: movzx   r8d, ax
 * 0000000140461049: mov     rax, [rdi+6D8h]
 * 0000000140461050: mov     r10d, r13d
 * 0000000140461053: test    rax, rax
 * 0000000140461056: jnz     short loc_14046106A
 * 0000000140461058: test    r8b, 10h
 * 000000014046105C: jz      short loc_14046106A
 * 000000014046105E: mov     rax, r11
 * 0000000140461061: lock or [rbx+6ECh], r9w
 * 000000014046106A: cmp     rbp, rax
 * 000000014046106D: jz      short loc_140461079
 * 000000014046106F: test    r8b, 8
 * 0000000140461073: jz      loc_14046113F
 * 0000000140461079: movzx   r9d, r8w
 * 000000014046107D: mov     esi, 2
 * 0000000140461082: and     r9w, r11w
 * 0000000140461086: movzx   edx, word ptr [rdi+6ECh]
 * 000000014046108D: mov     rax, rbp
 * 0000000140461090: neg     rax
 * 0000000140461093: movzx   eax, dx
 * 0000000140461096: sbb     cx, cx
 * 0000000140461099: and     ax, 0FFEFh
 * 000000014046109D: and     cx, 10h
 * 00000001404610A1: add     cx, r11w
 * 00000001404610A5: or      cx, ax
 * 00000001404610A8: test    r9w, r9w
 * 00000001404610AC: jnz     short loc_1404610B1
 * 00000001404610AE: or      cx, si
 * 00000001404610B1: bt      cx, 8
 * 00000001404610B6: jb      short loc_1404610CB
 * 00000001404610B8: cmp     cx, dx
 * 00000001404610BB: jz      short loc_1404610CB
 * 00000001404610BD: movzx   eax, dx
 * 00000001404610C0: lock cmpxchg [rdi+6ECh], cx
 * 00000001404610C9: jnz     short loc_140461086
 * 00000001404610CB: bt      dx, 8
 * 00000001404610D0: jnb     short loc_14046111D
 * 00000001404610D2: mov     rax, r11
 * 00000001404610D5: mov     rdx, rsi
 * 00000001404610D8: mov     esi, 0FFFDh
 * 00000001404610DD: cmp     rax, rbp
 * 00000001404610E0: jz      short loc_1404610E8
 * 00000001404610E2: test    r8b, 8
 * 00000001404610E6: jz      short loc_140461146
 * 00000001404610E8: cmp     [rsp+58h+arg_0], r13d
 * 00000001404610ED: jnz     short loc_140461146
 * 00000001404610EF: cmp     rax, r11
 * 00000001404610F2: jz      short loc_140461146
 * 00000001404610F4: and     [rbx+6EAh], si
 * 00000001404610FB: mov     r9, 20000000000h
 * 0000000140461105: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014046110C: test    r9, rax
 * 000000014046110F: jz      short loc_140461118
 * 0000000140461111: and     [rbx+6E6h], si
 * 0000000140461118: mov     r10d, r11d
 * 000000014046111B: jmp     short loc_140461190
 * 000000014046111D: mov     rax, [rdi+6D8h]
 * 0000000140461124: test    rax, rax
 * 0000000140461127: jnz     short loc_1404610D5
 * 0000000140461129: mov     rdx, rsi
 * 000000014046112C: test    r8b, 10h
 * 0000000140461130: jz      short loc_1404610D8
 * 0000000140461132: mov     rax, r11
 * 0000000140461135: lock or [rbx+6ECh], dx
 * 000000014046113D: jmp     short loc_1404610D8
 * 000000014046113F: mov     edx, 2
 * 0000000140461144: jmp     short loc_1404610D8
 * 0000000140461146: movzx   eax, word ptr [rdi+6ECh]
 * 000000014046114D: mov     cl, r8b
 * 0000000140461150: or      cl, al
 * 0000000140461152: test    r11b, cl
 * 0000000140461155: jz      short loc_14046116C
 * 0000000140461157: movzx   ecx, ax
 * 000000014046115A: and     cx, 0FFEEh
 * 000000014046115E: or      cx, dx
 * 0000000140461161: lock cmpxchg [rdi+6ECh], cx
 * 000000014046116A: jnz     short loc_140461146
 * 000000014046116C: or      [rbx+6EAh], dx
 * 0000000140461173: mov     r9, 20000000000h
 * 000000014046117D: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 0000000140461184: test    r9, rax
 * 0000000140461187: jz      short loc_140461190
 * 0000000140461189: or      [rbx+6E6h], dx
 * 0000000140461190: test    r15d, r15d
 * 0000000140461193: mov     edx, 6ECh
 * 0000000140461198: mov     r15d, 2
 * 000000014046119E: jz      short loc_1404611B7
 * 00000001404611A0: movzx   eax, word ptr [rdi+rdx]
 * 00000001404611A4: movzx   ecx, ax
 * 00000001404611A7: and     cx, 0FFDFh
 * 00000001404611AB: or      cx, r15w
 * 00000001404611AF: lock cmpxchg [rdi+rdx], cx
 * 00000001404611B5: jnz     short loc_1404611A0
 * 00000001404611B7: mov     edx, r13d
 * 00000001404611BA: test    r10d, r10d
 * 00000001404611BD: jnz     short loc_1404611F8
 * 00000001404611BF: cmp     [rsp+58h+arg_0], r13d
 * 00000001404611C4: jz      short loc_1404611F8
 * 00000001404611C6: prefetchw byte ptr [rbx+6ECh]
 * 00000001404611CD: movzx   eax, word ptr [rbx+6ECh]
 * 00000001404611D4: mov     r10d, 100h
 * 00000001404611DA: movzx   ecx, ax
 * 00000001404611DD: or      cx, r10w
 * 00000001404611E1: lock cmpxchg [rbx+6ECh], cx
 * 00000001404611EA: jnz     short loc_1404611DA
 * 00000001404611EC: test    r11b, al
 * 00000001404611EF: jz      short loc_1404611F8
 * 00000001404611F1: test    r14d, r14d
 * 00000001404611F4: cmovnz  edx, r11d
 * 00000001404611F8: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001404611FF: movzx   ecx, word ptr [rbx+6E6h]
 * 0000000140461206: test    r9, rax
 * 0000000140461209: jz      short loc_140461212
 * 000000014046120B: movzx   ecx, word ptr [rbx+6D0h]
 * 0000000140461212: test    rbp, rbp
 * 0000000140461215: jnz     short loc_140461266
 * 0000000140461217: test    r8b, 10h
 * 000000014046121B: jnz     short loc_140461258
 * 000000014046121D: mov     eax, 0FFFCh
 * 0000000140461222: and     cx, ax
 * 0000000140461225: mov     [rbx+6D0h], cx
 * 000000014046122C: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 0000000140461233: test    r9, rax
 * 0000000140461236: jz      short loc_140461241
 * 0000000140461238: and     [rbx+6E6h], si
 * 000000014046123F: jmp     short loc_140461248
 * 0000000140461241: mov     [rbx+6E6h], cx
 * 0000000140461248: and     [rbx+6EAh], si
 * 000000014046124F: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 0000000140461256: jmp     short loc_14046128C
 * 0000000140461258: mov     eax, 0FFFEh
 * 000000014046125D: and     cx, ax
 * 0000000140461260: or      cx, r15w
 * 0000000140461264: jmp     short loc_140461285
 * 0000000140461266: test    cl, 3
 * 0000000140461269: jnz     short loc_14046128C
 * 000000014046126B: and     cx, si
 * 000000014046126E: or      cx, r11w
 * 0000000140461272: mov     [rbx+6D0h], cx
 * 0000000140461279: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 0000000140461280: test    r9, rax
 * 0000000140461283: jnz     short loc_14046128C
 * 0000000140461285: mov     [rbx+6E6h], cx
 * 000000014046128C: test    r12d, r12d
 * 000000014046128F: jz      short loc_1404612A4
 * 0000000140461291: mov     eax, 0FFEFh
 * 0000000140461296: mov     [rbx+6D2h], cx
 * 000000014046129D: and     [rbx+6D4h], ax
 * 00000001404612A4: mov     rbx, [rsp+58h+arg_18]
 * 00000001404612A9: mov     eax, edx
 * 00000001404612AB: add     rsp, 20h
 * 00000001404612AF: pop     r15
 * 00000001404612B1: pop     r14
 * 00000001404612B3: pop     r13
 * 00000001404612B5: pop     r12
 * 00000001404612B7: pop     rdi
 * 00000001404612B8: pop     rsi
 * 00000001404612B9: pop     rbp
 * 00000001404612BA: retn
 */
