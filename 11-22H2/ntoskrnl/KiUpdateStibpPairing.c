/*
 * XREFs of KiUpdateStibpPairing @ 0x1404607C0
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1403259E0 (KiUpdateSpeculationControl.c)
 *     NtContinueEx @ 0x14041EAD0 (NtContinueEx.c)
 *     NtRaiseException @ 0x14041EF50 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x14041F680 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x14041FBE0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1404205B0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1404209F0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140420E30 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140421270 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1404216A0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140422330 (KxIsrLinkage.c)
 *     KxStartUserThread @ 0x140423870 (KxStartUserThread.c)
 *     KiApcInterrupt @ 0x140424080 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140425920 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140425D70 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140426460 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140426C50 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140427360 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x140429630 (NtCallEnclave.c)
 *     KiBoundFault @ 0x14042CC00 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14042D300 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14042F300 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x1404309C0 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140431440 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140431B40 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x140433500 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140434340 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140434840 (KiFastFailDispatch.c)
 *     KePrepareToDispatchVirtualProcessor @ 0x140460180 (KePrepareToDispatchVirtualProcessor.c)
 *     KiCopyCounters @ 0x140574240 (KiCopyCounters.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x140434F00 (KiFlushCurrentRsb.c)
 *     KiQueryProcessStibpPairingAllowed @ 0x140573E0C (KiQueryProcessStibpPairingAllowed.c)
 */

/*
 * Hex-Rays decompilation failed for KiUpdateStibpPairing @ 0x1404607C0
 * Reason: Hex-Rays returned no pseudocode for 0x1404607C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404607C0: mov     [rsp+arg_18], rbx
 * 00000001404607C5: push    rbp
 * 00000001404607C6: push    rsi
 * 00000001404607C7: push    rdi
 * 00000001404607C8: push    r12
 * 00000001404607CA: push    r13
 * 00000001404607CC: push    r14
 * 00000001404607CE: push    r15
 * 00000001404607D0: sub     rsp, 20h
 * 00000001404607D4: mov     rbx, gs:20h
 * 00000001404607DD: xor     r13d, r13d
 * 00000001404607E0: mov     [rsp+58h+arg_0], r13d
 * 00000001404607E5: mov     r11, rcx
 * 00000001404607E8: mov     [rsp+58h+arg_8], r13d
 * 00000001404607ED: mov     r15d, r13d
 * 00000001404607F0: lea     r14d, [r13+1]
 * 00000001404607F4: test    rcx, rcx
 * 00000001404607F7: jnz     short loc_14046080C
 * 00000001404607F9: mov     rax, gs:188h
 * 0000000140460802: mov     r14d, r13d
 * 0000000140460805: mov     r11, [rax+220h]
 * 000000014046080C: lea     r8, [rsp+58h+arg_0]
 * 0000000140460811: mov     rcx, r11
 * 0000000140460814: lea     rdx, [rsp+58h+arg_8]
 * 0000000140460819: call    KiQueryProcessStibpPairingAllowed
 * 000000014046081E: mov     rbp, [r11+9E0h]
 * 0000000140460825: mov     esi, eax
 * 0000000140460827: mov     rdi, [rbx+2DB0h]
 * 000000014046082E: mov     r12d, r13d
 * 0000000140460831: mov     r9d, 2
 * 0000000140460837: test    r14d, r14d
 * 000000014046083A: jnz     loc_140460907
 * 0000000140460840: mov     rax, [rbx+6D8h]
 * 0000000140460847: lea     r8d, [r9+1Eh]
 * 000000014046084B: cmp     rbp, rax
 * 000000014046084E: jz      short loc_14046087F
 * 0000000140460850: lock or [rdi+6ECh], r8w
 * 0000000140460859: mov     [rbx+6D8h], rbp
 * 0000000140460860: lea     r15d, [r9-1]
 * 0000000140460864: or      word ptr [rbx+6E0h], 4
 * 000000014046086C: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 0000000140460873: test    al, 8
 * 0000000140460875: jnz     short loc_14046087F
 * 0000000140460877: or      [rbx+6E0h], r8w
 * 000000014046087F: movzx   eax, word ptr [rbx+6E0h]
 * 0000000140460886: test    al, 4
 * 0000000140460888: jz      short loc_1404608A9
 * 000000014046088A: mov     eax, 1
 * 000000014046088F: xor     edx, edx
 * 0000000140460891: lea     ecx, [rax+48h]
 * 0000000140460894: wrmsr
 * 0000000140460896: mov     eax, 0FFFBh
 * 000000014046089B: and     [rbx+6E0h], ax
 * 00000001404608A2: movzx   eax, word ptr [rbx+6E0h]
 * 00000001404608A9: test    r8b, al
 * 00000001404608AC: jz      short loc_1404608C5
 * 00000001404608AE: call    KiFlushCurrentRsb
 * 00000001404608B3: mov     ecx, 0FFDFh
 * 00000001404608B8: mov     r9d, 2
 * 00000001404608BE: and     [rbx+6E0h], cx
 * 00000001404608C5: mov     r11d, 1
 * 00000001404608CB: test    esi, esi
 * 00000001404608CD: jnz     loc_1404609A9
 * 00000001404608D3: cmp     [rsp+58h+arg_0], r13d
 * 00000001404608D8: jnz     loc_14046099C
 * 00000001404608DE: movzx   eax, word ptr [rbx+6ECh]
 * 00000001404608E5: mov     ecx, 0FFFFFEFFh
 * 00000001404608EA: movzx   r8d, ax
 * 00000001404608EE: and     r8w, cx
 * 00000001404608F2: or      r8w, r9w
 * 00000001404608F6: lock cmpxchg [rbx+6ECh], r8w
 * 0000000140460900: jnz     short loc_1404608DE
 * 0000000140460902: jmp     loc_1404609A4
 * 0000000140460907: cmp     [rsp+58h+arg_8], r13d
 * 000000014046090C: jz      short loc_1404608C5
 * 000000014046090E: mov     rax, [rbx+6D8h]
 * 0000000140460915: test    rax, rax
 * 0000000140460918: jz      short loc_1404608C5
 * 000000014046091A: xor     edx, edx
 * 000000014046091C: mov     r11d, 1
 * 0000000140460922: mov     eax, r11d
 * 0000000140460925: lea     ecx, [rdx+49h]
 * 0000000140460928: wrmsr
 * 000000014046092A: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 0000000140460931: test    al, 8
 * 0000000140460933: jnz     short loc_14046095C
 * 0000000140460935: call    KiFlushCurrentRsb
 * 000000014046093A: mov     ecx, 0FFDFh
 * 000000014046093F: mov     r11d, 1
 * 0000000140460945: and     [rbx+6E0h], cx
 * 000000014046094C: mov     ecx, 0FFBFh
 * 0000000140460951: and     [rbx+6D4h], cx
 * 0000000140460958: lea     r9d, [r11+1]
 * 000000014046095C: mov     eax, 0FFFBh
 * 0000000140460961: mov     r8d, 20h ; ' '
 * 0000000140460967: and     [rbx+6E0h], ax
 * 000000014046096E: lock or [rdi+6ECh], r8w
 * 0000000140460977: mov     [rbx+6D8h], rbp
 * 000000014046097E: mov     eax, 0FFEFh
 * 0000000140460983: or      [rbx+6D6h], r9b
 * 000000014046098A: mov     r15d, r11d
 * 000000014046098D: and     [rbx+6D4h], ax
 * 0000000140460994: mov     r12d, r11d
 * 0000000140460997: jmp     loc_1404608CB
 * 000000014046099C: movzx   r8d, word ptr [rbx+6ECh]
 * 00000001404609A4: mov     rbp, r9
 * 00000001404609A7: jmp     short loc_1404609E9
 * 00000001404609A9: mov     edx, 0FFFFFEFDh
 * 00000001404609AE: prefetchw byte ptr [rbx+6ECh]
 * 00000001404609B5: movzx   eax, word ptr [rbx+6ECh]
 * 00000001404609BC: test    r14d, r14d
 * 00000001404609BF: jz      short loc_1404609D4
 * 00000001404609C1: movzx   ecx, ax
 * 00000001404609C4: and     cx, dx
 * 00000001404609C7: lock cmpxchg [rbx+6ECh], cx
 * 00000001404609D0: jnz     short loc_1404609C1
 * 00000001404609D2: jmp     short loc_1404609E5
 * 00000001404609D4: movzx   ecx, ax
 * 00000001404609D7: and     cx, dx
 * 00000001404609DA: lock cmpxchg [rbx+6ECh], cx
 * 00000001404609E3: jnz     short loc_1404609D4
 * 00000001404609E5: movzx   r8d, ax
 * 00000001404609E9: mov     rax, [rdi+6D8h]
 * 00000001404609F0: mov     r10d, r13d
 * 00000001404609F3: test    rax, rax
 * 00000001404609F6: jnz     short loc_140460A0A
 * 00000001404609F8: test    r8b, 10h
 * 00000001404609FC: jz      short loc_140460A0A
 * 00000001404609FE: mov     rax, r11
 * 0000000140460A01: lock or [rbx+6ECh], r9w
 * 0000000140460A0A: cmp     rbp, rax
 * 0000000140460A0D: jz      short loc_140460A19
 * 0000000140460A0F: test    r8b, 8
 * 0000000140460A13: jz      loc_140460ADF
 * 0000000140460A19: movzx   r9d, r8w
 * 0000000140460A1D: mov     esi, 2
 * 0000000140460A22: and     r9w, r11w
 * 0000000140460A26: movzx   edx, word ptr [rdi+6ECh]
 * 0000000140460A2D: mov     rax, rbp
 * 0000000140460A30: neg     rax
 * 0000000140460A33: movzx   eax, dx
 * 0000000140460A36: sbb     cx, cx
 * 0000000140460A39: and     ax, 0FFEFh
 * 0000000140460A3D: and     cx, 10h
 * 0000000140460A41: add     cx, r11w
 * 0000000140460A45: or      cx, ax
 * 0000000140460A48: test    r9w, r9w
 * 0000000140460A4C: jnz     short loc_140460A51
 * 0000000140460A4E: or      cx, si
 * 0000000140460A51: bt      cx, 8
 * 0000000140460A56: jb      short loc_140460A6B
 * 0000000140460A58: cmp     cx, dx
 * 0000000140460A5B: jz      short loc_140460A6B
 * 0000000140460A5D: movzx   eax, dx
 * 0000000140460A60: lock cmpxchg [rdi+6ECh], cx
 * 0000000140460A69: jnz     short loc_140460A26
 * 0000000140460A6B: bt      dx, 8
 * 0000000140460A70: jnb     short loc_140460ABD
 * 0000000140460A72: mov     rax, r11
 * 0000000140460A75: mov     rdx, rsi
 * 0000000140460A78: mov     esi, 0FFFDh
 * 0000000140460A7D: cmp     rax, rbp
 * 0000000140460A80: jz      short loc_140460A88
 * 0000000140460A82: test    r8b, 8
 * 0000000140460A86: jz      short loc_140460AE6
 * 0000000140460A88: cmp     [rsp+58h+arg_0], r13d
 * 0000000140460A8D: jnz     short loc_140460AE6
 * 0000000140460A8F: cmp     rax, r11
 * 0000000140460A92: jz      short loc_140460AE6
 * 0000000140460A94: and     [rbx+6EAh], si
 * 0000000140460A9B: mov     r9, 20000000000h
 * 0000000140460AA5: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 0000000140460AAC: test    r9, rax
 * 0000000140460AAF: jz      short loc_140460AB8
 * 0000000140460AB1: and     [rbx+6E6h], si
 * 0000000140460AB8: mov     r10d, r11d
 * 0000000140460ABB: jmp     short loc_140460B30
 * 0000000140460ABD: mov     rax, [rdi+6D8h]
 * 0000000140460AC4: test    rax, rax
 * 0000000140460AC7: jnz     short loc_140460A75
 * 0000000140460AC9: mov     rdx, rsi
 * 0000000140460ACC: test    r8b, 10h
 * 0000000140460AD0: jz      short loc_140460A78
 * 0000000140460AD2: mov     rax, r11
 * 0000000140460AD5: lock or [rbx+6ECh], dx
 * 0000000140460ADD: jmp     short loc_140460A78
 * 0000000140460ADF: mov     edx, 2
 * 0000000140460AE4: jmp     short loc_140460A78
 * 0000000140460AE6: movzx   eax, word ptr [rdi+6ECh]
 * 0000000140460AED: mov     cl, r8b
 * 0000000140460AF0: or      cl, al
 * 0000000140460AF2: test    r11b, cl
 * 0000000140460AF5: jz      short loc_140460B0C
 * 0000000140460AF7: movzx   ecx, ax
 * 0000000140460AFA: and     cx, 0FFEEh
 * 0000000140460AFE: or      cx, dx
 * 0000000140460B01: lock cmpxchg [rdi+6ECh], cx
 * 0000000140460B0A: jnz     short loc_140460AE6
 * 0000000140460B0C: or      [rbx+6EAh], dx
 * 0000000140460B13: mov     r9, 20000000000h
 * 0000000140460B1D: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 0000000140460B24: test    r9, rax
 * 0000000140460B27: jz      short loc_140460B30
 * 0000000140460B29: or      [rbx+6E6h], dx
 * 0000000140460B30: test    r15d, r15d
 * 0000000140460B33: mov     edx, 6ECh
 * 0000000140460B38: mov     r15d, 2
 * 0000000140460B3E: jz      short loc_140460B57
 * 0000000140460B40: movzx   eax, word ptr [rdi+rdx]
 * 0000000140460B44: movzx   ecx, ax
 * 0000000140460B47: and     cx, 0FFDFh
 * 0000000140460B4B: or      cx, r15w
 * 0000000140460B4F: lock cmpxchg [rdi+rdx], cx
 * 0000000140460B55: jnz     short loc_140460B40
 * 0000000140460B57: mov     edx, r13d
 * 0000000140460B5A: test    r10d, r10d
 * 0000000140460B5D: jnz     short loc_140460B98
 * 0000000140460B5F: cmp     [rsp+58h+arg_0], r13d
 * 0000000140460B64: jz      short loc_140460B98
 * 0000000140460B66: prefetchw byte ptr [rbx+6ECh]
 * 0000000140460B6D: movzx   eax, word ptr [rbx+6ECh]
 * 0000000140460B74: mov     r10d, 100h
 * 0000000140460B7A: movzx   ecx, ax
 * 0000000140460B7D: or      cx, r10w
 * 0000000140460B81: lock cmpxchg [rbx+6ECh], cx
 * 0000000140460B8A: jnz     short loc_140460B7A
 * 0000000140460B8C: test    r11b, al
 * 0000000140460B8F: jz      short loc_140460B98
 * 0000000140460B91: test    r14d, r14d
 * 0000000140460B94: cmovnz  edx, r11d
 * 0000000140460B98: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 0000000140460B9F: movzx   ecx, word ptr [rbx+6E6h]
 * 0000000140460BA6: test    r9, rax
 * 0000000140460BA9: jz      short loc_140460BB2
 * 0000000140460BAB: movzx   ecx, word ptr [rbx+6D0h]
 * 0000000140460BB2: test    rbp, rbp
 * 0000000140460BB5: jnz     short loc_140460C06
 * 0000000140460BB7: test    r8b, 10h
 * 0000000140460BBB: jnz     short loc_140460BF8
 * 0000000140460BBD: mov     eax, 0FFFCh
 * 0000000140460BC2: and     cx, ax
 * 0000000140460BC5: mov     [rbx+6D0h], cx
 * 0000000140460BCC: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 0000000140460BD3: test    r9, rax
 * 0000000140460BD6: jz      short loc_140460BE1
 * 0000000140460BD8: and     [rbx+6E6h], si
 * 0000000140460BDF: jmp     short loc_140460BE8
 * 0000000140460BE1: mov     [rbx+6E6h], cx
 * 0000000140460BE8: and     [rbx+6EAh], si
 * 0000000140460BEF: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 0000000140460BF6: jmp     short loc_140460C2C
 * 0000000140460BF8: mov     eax, 0FFFEh
 * 0000000140460BFD: and     cx, ax
 * 0000000140460C00: or      cx, r15w
 * 0000000140460C04: jmp     short loc_140460C25
 * 0000000140460C06: test    cl, 3
 * 0000000140460C09: jnz     short loc_140460C2C
 * 0000000140460C0B: and     cx, si
 * 0000000140460C0E: or      cx, r11w
 * 0000000140460C12: mov     [rbx+6D0h], cx
 * 0000000140460C19: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 0000000140460C20: test    r9, rax
 * 0000000140460C23: jnz     short loc_140460C2C
 * 0000000140460C25: mov     [rbx+6E6h], cx
 * 0000000140460C2C: test    r12d, r12d
 * 0000000140460C2F: jz      short loc_140460C44
 * 0000000140460C31: mov     eax, 0FFEFh
 * 0000000140460C36: mov     [rbx+6D2h], cx
 * 0000000140460C3D: and     [rbx+6D4h], ax
 * 0000000140460C44: mov     rbx, [rsp+58h+arg_18]
 * 0000000140460C49: mov     eax, edx
 * 0000000140460C4B: add     rsp, 20h
 * 0000000140460C4F: pop     r15
 * 0000000140460C51: pop     r14
 * 0000000140460C53: pop     r13
 * 0000000140460C55: pop     r12
 * 0000000140460C57: pop     rdi
 * 0000000140460C58: pop     rsi
 * 0000000140460C59: pop     rbp
 * 0000000140460C5A: retn
 */
