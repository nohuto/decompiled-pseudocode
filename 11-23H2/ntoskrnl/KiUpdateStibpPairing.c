/*
 * XREFs of KiUpdateStibpPairing @ 0x140461220
 * Callers:
 *     KiUpdateSpeculationControl @ 0x140325E50 (KiUpdateSpeculationControl.c)
 *     NtContinueEx @ 0x14041F520 (NtContinueEx.c)
 *     NtRaiseException @ 0x14041F9A0 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1404200D0 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x140420630 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x140421000 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140421440 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140421880 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140421CC0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1404220F0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140422D80 (KxIsrLinkage.c)
 *     KxStartUserThread @ 0x1404242C0 (KxStartUserThread.c)
 *     KiApcInterrupt @ 0x140424AD0 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140426370 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1404267C0 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140426EB0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1404276A0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140427DB0 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x14042A080 (NtCallEnclave.c)
 *     KiBoundFault @ 0x14042D600 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14042DD00 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14042FD00 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x1404313C0 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140431E40 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140432540 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x140433F00 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140434D40 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140435240 (KiFastFailDispatch.c)
 *     KePrepareToDispatchVirtualProcessor @ 0x140460BE0 (KePrepareToDispatchVirtualProcessor.c)
 *     KiCopyCounters @ 0x1405746E0 (KiCopyCounters.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x140435900 (KiFlushCurrentRsb.c)
 *     KiQueryProcessStibpPairingAllowed @ 0x1405742AC (KiQueryProcessStibpPairingAllowed.c)
 */

/*
 * Hex-Rays decompilation failed for KiUpdateStibpPairing @ 0x140461220
 * Reason: Hex-Rays returned no pseudocode for 0x140461220
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140461220: mov     [rsp+arg_18], rbx
 * 0000000140461225: push    rbp
 * 0000000140461226: push    rsi
 * 0000000140461227: push    rdi
 * 0000000140461228: push    r12
 * 000000014046122A: push    r13
 * 000000014046122C: push    r14
 * 000000014046122E: push    r15
 * 0000000140461230: sub     rsp, 20h
 * 0000000140461234: mov     rbx, gs:20h
 * 000000014046123D: xor     r13d, r13d
 * 0000000140461240: mov     [rsp+58h+arg_0], r13d
 * 0000000140461245: mov     r11, rcx
 * 0000000140461248: mov     [rsp+58h+arg_8], r13d
 * 000000014046124D: mov     r15d, r13d
 * 0000000140461250: lea     r14d, [r13+1]
 * 0000000140461254: test    rcx, rcx
 * 0000000140461257: jnz     short loc_14046126C
 * 0000000140461259: mov     rax, gs:188h
 * 0000000140461262: mov     r14d, r13d
 * 0000000140461265: mov     r11, [rax+220h]
 * 000000014046126C: lea     r8, [rsp+58h+arg_0]
 * 0000000140461271: mov     rcx, r11
 * 0000000140461274: lea     rdx, [rsp+58h+arg_8]
 * 0000000140461279: call    KiQueryProcessStibpPairingAllowed
 * 000000014046127E: mov     rbp, [r11+9E0h]
 * 0000000140461285: mov     esi, eax
 * 0000000140461287: mov     rdi, [rbx+2DB0h]
 * 000000014046128E: mov     r12d, r13d
 * 0000000140461291: mov     r9d, 2
 * 0000000140461297: test    r14d, r14d
 * 000000014046129A: jnz     loc_140461367
 * 00000001404612A0: mov     rax, [rbx+6D8h]
 * 00000001404612A7: lea     r8d, [r9+1Eh]
 * 00000001404612AB: cmp     rbp, rax
 * 00000001404612AE: jz      short loc_1404612DF
 * 00000001404612B0: lock or [rdi+6ECh], r8w
 * 00000001404612B9: mov     [rbx+6D8h], rbp
 * 00000001404612C0: lea     r15d, [r9-1]
 * 00000001404612C4: or      word ptr [rbx+6E0h], 4
 * 00000001404612CC: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001404612D3: test    al, 8
 * 00000001404612D5: jnz     short loc_1404612DF
 * 00000001404612D7: or      [rbx+6E0h], r8w
 * 00000001404612DF: movzx   eax, word ptr [rbx+6E0h]
 * 00000001404612E6: test    al, 4
 * 00000001404612E8: jz      short loc_140461309
 * 00000001404612EA: mov     eax, 1
 * 00000001404612EF: xor     edx, edx
 * 00000001404612F1: lea     ecx, [rax+48h]
 * 00000001404612F4: wrmsr
 * 00000001404612F6: mov     eax, 0FFFBh
 * 00000001404612FB: and     [rbx+6E0h], ax
 * 0000000140461302: movzx   eax, word ptr [rbx+6E0h]
 * 0000000140461309: test    r8b, al
 * 000000014046130C: jz      short loc_140461325
 * 000000014046130E: call    KiFlushCurrentRsb
 * 0000000140461313: mov     ecx, 0FFDFh
 * 0000000140461318: mov     r9d, 2
 * 000000014046131E: and     [rbx+6E0h], cx
 * 0000000140461325: mov     r11d, 1
 * 000000014046132B: test    esi, esi
 * 000000014046132D: jnz     loc_140461409
 * 0000000140461333: cmp     [rsp+58h+arg_0], r13d
 * 0000000140461338: jnz     loc_1404613FC
 * 000000014046133E: movzx   eax, word ptr [rbx+6ECh]
 * 0000000140461345: mov     ecx, 0FFFFFEFFh
 * 000000014046134A: movzx   r8d, ax
 * 000000014046134E: and     r8w, cx
 * 0000000140461352: or      r8w, r9w
 * 0000000140461356: lock cmpxchg [rbx+6ECh], r8w
 * 0000000140461360: jnz     short loc_14046133E
 * 0000000140461362: jmp     loc_140461404
 * 0000000140461367: cmp     [rsp+58h+arg_8], r13d
 * 000000014046136C: jz      short loc_140461325
 * 000000014046136E: mov     rax, [rbx+6D8h]
 * 0000000140461375: test    rax, rax
 * 0000000140461378: jz      short loc_140461325
 * 000000014046137A: xor     edx, edx
 * 000000014046137C: mov     r11d, 1
 * 0000000140461382: mov     eax, r11d
 * 0000000140461385: lea     ecx, [rdx+49h]
 * 0000000140461388: wrmsr
 * 000000014046138A: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 0000000140461391: test    al, 8
 * 0000000140461393: jnz     short loc_1404613BC
 * 0000000140461395: call    KiFlushCurrentRsb
 * 000000014046139A: mov     ecx, 0FFDFh
 * 000000014046139F: mov     r11d, 1
 * 00000001404613A5: and     [rbx+6E0h], cx
 * 00000001404613AC: mov     ecx, 0FFBFh
 * 00000001404613B1: and     [rbx+6D4h], cx
 * 00000001404613B8: lea     r9d, [r11+1]
 * 00000001404613BC: mov     eax, 0FFFBh
 * 00000001404613C1: mov     r8d, 20h ; ' '
 * 00000001404613C7: and     [rbx+6E0h], ax
 * 00000001404613CE: lock or [rdi+6ECh], r8w
 * 00000001404613D7: mov     [rbx+6D8h], rbp
 * 00000001404613DE: mov     eax, 0FFEFh
 * 00000001404613E3: or      [rbx+6D6h], r9b
 * 00000001404613EA: mov     r15d, r11d
 * 00000001404613ED: and     [rbx+6D4h], ax
 * 00000001404613F4: mov     r12d, r11d
 * 00000001404613F7: jmp     loc_14046132B
 * 00000001404613FC: movzx   r8d, word ptr [rbx+6ECh]
 * 0000000140461404: mov     rbp, r9
 * 0000000140461407: jmp     short loc_140461449
 * 0000000140461409: mov     edx, 0FFFFFEFDh
 * 000000014046140E: prefetchw byte ptr [rbx+6ECh]
 * 0000000140461415: movzx   eax, word ptr [rbx+6ECh]
 * 000000014046141C: test    r14d, r14d
 * 000000014046141F: jz      short loc_140461434
 * 0000000140461421: movzx   ecx, ax
 * 0000000140461424: and     cx, dx
 * 0000000140461427: lock cmpxchg [rbx+6ECh], cx
 * 0000000140461430: jnz     short loc_140461421
 * 0000000140461432: jmp     short loc_140461445
 * 0000000140461434: movzx   ecx, ax
 * 0000000140461437: and     cx, dx
 * 000000014046143A: lock cmpxchg [rbx+6ECh], cx
 * 0000000140461443: jnz     short loc_140461434
 * 0000000140461445: movzx   r8d, ax
 * 0000000140461449: mov     rax, [rdi+6D8h]
 * 0000000140461450: mov     r10d, r13d
 * 0000000140461453: test    rax, rax
 * 0000000140461456: jnz     short loc_14046146A
 * 0000000140461458: test    r8b, 10h
 * 000000014046145C: jz      short loc_14046146A
 * 000000014046145E: mov     rax, r11
 * 0000000140461461: lock or [rbx+6ECh], r9w
 * 000000014046146A: cmp     rbp, rax
 * 000000014046146D: jz      short loc_140461479
 * 000000014046146F: test    r8b, 8
 * 0000000140461473: jz      loc_14046153F
 * 0000000140461479: movzx   r9d, r8w
 * 000000014046147D: mov     esi, 2
 * 0000000140461482: and     r9w, r11w
 * 0000000140461486: movzx   edx, word ptr [rdi+6ECh]
 * 000000014046148D: mov     rax, rbp
 * 0000000140461490: neg     rax
 * 0000000140461493: movzx   eax, dx
 * 0000000140461496: sbb     cx, cx
 * 0000000140461499: and     ax, 0FFEFh
 * 000000014046149D: and     cx, 10h
 * 00000001404614A1: add     cx, r11w
 * 00000001404614A5: or      cx, ax
 * 00000001404614A8: test    r9w, r9w
 * 00000001404614AC: jnz     short loc_1404614B1
 * 00000001404614AE: or      cx, si
 * 00000001404614B1: bt      cx, 8
 * 00000001404614B6: jb      short loc_1404614CB
 * 00000001404614B8: cmp     cx, dx
 * 00000001404614BB: jz      short loc_1404614CB
 * 00000001404614BD: movzx   eax, dx
 * 00000001404614C0: lock cmpxchg [rdi+6ECh], cx
 * 00000001404614C9: jnz     short loc_140461486
 * 00000001404614CB: bt      dx, 8
 * 00000001404614D0: jnb     short loc_14046151D
 * 00000001404614D2: mov     rax, r11
 * 00000001404614D5: mov     rdx, rsi
 * 00000001404614D8: mov     esi, 0FFFDh
 * 00000001404614DD: cmp     rax, rbp
 * 00000001404614E0: jz      short loc_1404614E8
 * 00000001404614E2: test    r8b, 8
 * 00000001404614E6: jz      short loc_140461546
 * 00000001404614E8: cmp     [rsp+58h+arg_0], r13d
 * 00000001404614ED: jnz     short loc_140461546
 * 00000001404614EF: cmp     rax, r11
 * 00000001404614F2: jz      short loc_140461546
 * 00000001404614F4: and     [rbx+6EAh], si
 * 00000001404614FB: mov     r9, 20000000000h
 * 0000000140461505: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014046150C: test    r9, rax
 * 000000014046150F: jz      short loc_140461518
 * 0000000140461511: and     [rbx+6E6h], si
 * 0000000140461518: mov     r10d, r11d
 * 000000014046151B: jmp     short loc_140461590
 * 000000014046151D: mov     rax, [rdi+6D8h]
 * 0000000140461524: test    rax, rax
 * 0000000140461527: jnz     short loc_1404614D5
 * 0000000140461529: mov     rdx, rsi
 * 000000014046152C: test    r8b, 10h
 * 0000000140461530: jz      short loc_1404614D8
 * 0000000140461532: mov     rax, r11
 * 0000000140461535: lock or [rbx+6ECh], dx
 * 000000014046153D: jmp     short loc_1404614D8
 * 000000014046153F: mov     edx, 2
 * 0000000140461544: jmp     short loc_1404614D8
 * 0000000140461546: movzx   eax, word ptr [rdi+6ECh]
 * 000000014046154D: mov     cl, r8b
 * 0000000140461550: or      cl, al
 * 0000000140461552: test    r11b, cl
 * 0000000140461555: jz      short loc_14046156C
 * 0000000140461557: movzx   ecx, ax
 * 000000014046155A: and     cx, 0FFEEh
 * 000000014046155E: or      cx, dx
 * 0000000140461561: lock cmpxchg [rdi+6ECh], cx
 * 000000014046156A: jnz     short loc_140461546
 * 000000014046156C: or      [rbx+6EAh], dx
 * 0000000140461573: mov     r9, 20000000000h
 * 000000014046157D: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 0000000140461584: test    r9, rax
 * 0000000140461587: jz      short loc_140461590
 * 0000000140461589: or      [rbx+6E6h], dx
 * 0000000140461590: test    r15d, r15d
 * 0000000140461593: mov     edx, 6ECh
 * 0000000140461598: mov     r15d, 2
 * 000000014046159E: jz      short loc_1404615B7
 * 00000001404615A0: movzx   eax, word ptr [rdi+rdx]
 * 00000001404615A4: movzx   ecx, ax
 * 00000001404615A7: and     cx, 0FFDFh
 * 00000001404615AB: or      cx, r15w
 * 00000001404615AF: lock cmpxchg [rdi+rdx], cx
 * 00000001404615B5: jnz     short loc_1404615A0
 * 00000001404615B7: mov     edx, r13d
 * 00000001404615BA: test    r10d, r10d
 * 00000001404615BD: jnz     short loc_1404615F8
 * 00000001404615BF: cmp     [rsp+58h+arg_0], r13d
 * 00000001404615C4: jz      short loc_1404615F8
 * 00000001404615C6: prefetchw byte ptr [rbx+6ECh]
 * 00000001404615CD: movzx   eax, word ptr [rbx+6ECh]
 * 00000001404615D4: mov     r10d, 100h
 * 00000001404615DA: movzx   ecx, ax
 * 00000001404615DD: or      cx, r10w
 * 00000001404615E1: lock cmpxchg [rbx+6ECh], cx
 * 00000001404615EA: jnz     short loc_1404615DA
 * 00000001404615EC: test    r11b, al
 * 00000001404615EF: jz      short loc_1404615F8
 * 00000001404615F1: test    r14d, r14d
 * 00000001404615F4: cmovnz  edx, r11d
 * 00000001404615F8: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001404615FF: movzx   ecx, word ptr [rbx+6E6h]
 * 0000000140461606: test    r9, rax
 * 0000000140461609: jz      short loc_140461612
 * 000000014046160B: movzx   ecx, word ptr [rbx+6D0h]
 * 0000000140461612: test    rbp, rbp
 * 0000000140461615: jnz     short loc_140461666
 * 0000000140461617: test    r8b, 10h
 * 000000014046161B: jnz     short loc_140461658
 * 000000014046161D: mov     eax, 0FFFCh
 * 0000000140461622: and     cx, ax
 * 0000000140461625: mov     [rbx+6D0h], cx
 * 000000014046162C: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 0000000140461633: test    r9, rax
 * 0000000140461636: jz      short loc_140461641
 * 0000000140461638: and     [rbx+6E6h], si
 * 000000014046163F: jmp     short loc_140461648
 * 0000000140461641: mov     [rbx+6E6h], cx
 * 0000000140461648: and     [rbx+6EAh], si
 * 000000014046164F: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 0000000140461656: jmp     short loc_14046168C
 * 0000000140461658: mov     eax, 0FFFEh
 * 000000014046165D: and     cx, ax
 * 0000000140461660: or      cx, r15w
 * 0000000140461664: jmp     short loc_140461685
 * 0000000140461666: test    cl, 3
 * 0000000140461669: jnz     short loc_14046168C
 * 000000014046166B: and     cx, si
 * 000000014046166E: or      cx, r11w
 * 0000000140461672: mov     [rbx+6D0h], cx
 * 0000000140461679: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 0000000140461680: test    r9, rax
 * 0000000140461683: jnz     short loc_14046168C
 * 0000000140461685: mov     [rbx+6E6h], cx
 * 000000014046168C: test    r12d, r12d
 * 000000014046168F: jz      short loc_1404616A4
 * 0000000140461691: mov     eax, 0FFEFh
 * 0000000140461696: mov     [rbx+6D2h], cx
 * 000000014046169D: and     [rbx+6D4h], ax
 * 00000001404616A4: mov     rbx, [rsp+58h+arg_18]
 * 00000001404616A9: mov     eax, edx
 * 00000001404616AB: add     rsp, 20h
 * 00000001404616AF: pop     r15
 * 00000001404616B1: pop     r14
 * 00000001404616B3: pop     r13
 * 00000001404616B5: pop     r12
 * 00000001404616B7: pop     rdi
 * 00000001404616B8: pop     rsi
 * 00000001404616B9: pop     rbp
 * 00000001404616BA: retn
 */
