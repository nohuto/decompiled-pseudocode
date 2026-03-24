/*
 * XREFs of KiUpdateStibpPairing @ 0x14020D230
 * Callers:
 *     KiUpdateSpeculationControl @ 0x14020C9F0 (KiUpdateSpeculationControl.c)
 *     NtContinueEx @ 0x14041FB10 (NtContinueEx.c)
 *     NtRaiseException @ 0x14041FF90 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1404206B0 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x140420C10 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1404215E0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140421A20 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140421E60 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1404222A0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1404226D0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140423360 (KxIsrLinkage.c)
 *     KxStartUserThread @ 0x140424840 (KxStartUserThread.c)
 *     KiApcInterrupt @ 0x140425050 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140426820 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140426C70 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140427360 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140427B30 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140428220 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x14042A6B0 (NtCallEnclave.c)
 *     KiBoundFault @ 0x14042DB00 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14042E1C0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x140430000 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x140431640 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140432080 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140432780 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x140434000 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140434E40 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140435300 (KiFastFailDispatch.c)
 *     KePrepareToDispatchVirtualProcessor @ 0x14045A560 (KePrepareToDispatchVirtualProcessor.c)
 *     KiCopyCounters @ 0x140571820 (KiCopyCounters.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x1404359C0 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiUpdateStibpPairing @ 0x14020D230
 * Reason: Hex-Rays returned no pseudocode for 0x14020D230
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014020D230: mov     [rsp+arg_8], rbx
 * 000000014020D235: mov     [rsp+arg_10], rbp
 * 000000014020D23A: mov     [rsp+arg_18], rsi
 * 000000014020D23F: push    rdi
 * 000000014020D240: push    r12
 * 000000014020D242: push    r13
 * 000000014020D244: push    r14
 * 000000014020D246: push    r15
 * 000000014020D248: sub     rsp, 20h
 * 000000014020D24C: mov     rbx, gs:20h
 * 000000014020D255: xor     ebp, ebp
 * 000000014020D257: mov     r9d, 1
 * 000000014020D25D: mov     r12d, ebp
 * 000000014020D260: mov     r13d, r9d
 * 000000014020D263: test    rcx, rcx
 * 000000014020D266: jnz     short loc_14020D27B
 * 000000014020D268: mov     rax, gs:188h
 * 000000014020D271: mov     r13d, ebp
 * 000000014020D274: mov     rcx, [rax+220h]
 * 000000014020D27B: mov     esi, [rcx+87Ch]
 * 000000014020D281: mov     r11d, ebp
 * 000000014020D284: mov     r14, [rcx+9E0h]
 * 000000014020D28B: mov     eax, esi
 * 000000014020D28D: mov     rdi, [rbx+2DB0h]
 * 000000014020D294: mov     r15d, esi
 * 000000014020D297: and     eax, 400000h
 * 000000014020D29C: mov     [rsp+48h+arg_0], ebp
 * 000000014020D2A0: and     r15d, 800000h
 * 000000014020D2A7: and     esi, 0C00000h
 * 000000014020D2AD: test    r13d, r13d
 * 000000014020D2B0: jnz     loc_14020D345
 * 000000014020D2B6: mov     rax, [rbx+6D8h]
 * 000000014020D2BD: cmp     r14, rax
 * 000000014020D2C0: jz      short loc_14020D2F4
 * 000000014020D2C2: mov     eax, 20h ; ' '
 * 000000014020D2C7: lock or [rdi+6ECh], ax
 * 000000014020D2CF: mov     [rbx+6D8h], r14
 * 000000014020D2D6: mov     r12d, r9d
 * 000000014020D2D9: or      word ptr [rbx+6E0h], 4
 * 000000014020D2E1: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014020D2E8: test    al, 8
 * 000000014020D2EA: jnz     short loc_14020D2F4
 * 000000014020D2EC: or      word ptr [rbx+6E0h], 20h
 * 000000014020D2F4: movzx   eax, word ptr [rbx+6E0h]
 * 000000014020D2FB: test    al, 4
 * 000000014020D2FD: jz      short loc_14020D31E
 * 000000014020D2FF: mov     eax, r9d
 * 000000014020D302: xor     edx, edx
 * 000000014020D304: mov     ecx, 49h ; 'I'
 * 000000014020D309: wrmsr
 * 000000014020D30B: mov     ecx, 0FFFBh
 * 000000014020D310: and     [rbx+6E0h], cx
 * 000000014020D317: movzx   eax, word ptr [rbx+6E0h]
 * 000000014020D31E: test    al, 20h
 * 000000014020D320: jz      loc_14020D3E4
 * 000000014020D326: call    KiFlushCurrentRsb
 * 000000014020D32B: mov     ecx, 0FFDFh
 * 000000014020D330: mov     r11d, ebp
 * 000000014020D333: and     [rbx+6E0h], cx
 * 000000014020D33A: mov     r9d, 1
 * 000000014020D340: jmp     loc_14020D3E4
 * 000000014020D345: test    eax, eax
 * 000000014020D347: jz      loc_14020D3E4
 * 000000014020D34D: mov     rax, [rbx+6D8h]
 * 000000014020D354: test    rax, rax
 * 000000014020D357: jz      loc_14020D3E4
 * 000000014020D35D: mov     eax, r9d
 * 000000014020D360: xor     edx, edx
 * 000000014020D362: mov     ecx, 49h ; 'I'
 * 000000014020D367: wrmsr
 * 000000014020D369: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014020D370: test    al, 8
 * 000000014020D372: jz      short loc_14020D37D
 * 000000014020D374: movzx   eax, word ptr [rbx+6E0h]
 * 000000014020D37B: jmp     short loc_14020D3A3
 * 000000014020D37D: call    KiFlushCurrentRsb
 * 000000014020D382: mov     eax, 0FFBFh
 * 000000014020D387: mov     ecx, 0FFDFh
 * 000000014020D38C: and     [rbx+6D4h], ax
 * 000000014020D393: mov     r9d, 1
 * 000000014020D399: movzx   eax, word ptr [rbx+6E0h]
 * 000000014020D3A0: and     ax, cx
 * 000000014020D3A3: mov     ecx, 0FFFBh
 * 000000014020D3A8: and     ax, cx
 * 000000014020D3AB: mov     [rbx+6E0h], ax
 * 000000014020D3B2: mov     eax, 20h ; ' '
 * 000000014020D3B7: lock or [rdi+6ECh], ax
 * 000000014020D3BF: or      byte ptr [rbx+6D6h], 2
 * 000000014020D3C6: mov     eax, 0FFEFh
 * 000000014020D3CB: mov     [rbx+6D8h], r14
 * 000000014020D3D2: mov     r12d, r9d
 * 000000014020D3D5: and     [rbx+6D4h], ax
 * 000000014020D3DC: mov     r11d, r9d
 * 000000014020D3DF: mov     [rsp+48h+arg_0], r9d
 * 000000014020D3E4: mov     edx, 2
 * 000000014020D3E9: cmp     esi, 400000h
 * 000000014020D3EF: jz      short loc_14020D431
 * 000000014020D3F1: test    r15d, r15d
 * 000000014020D3F4: jnz     short loc_14020D424
 * 000000014020D3F6: mov     ecx, 0FFFFFEFFh
 * 000000014020D3FB: nop     dword ptr [rax+rax+00h]
 * 000000014020D400: movzx   eax, word ptr [rbx+6ECh]
 * 000000014020D407: movzx   r8d, ax
 * 000000014020D40B: and     r8w, cx
 * 000000014020D40F: or      r8w, dx
 * 000000014020D413: lock cmpxchg [rbx+6ECh], r8w
 * 000000014020D41D: jnz     short loc_14020D400
 * 000000014020D41F: mov     r14, rdx
 * 000000014020D422: jmp     short loc_14020D48A
 * 000000014020D424: movzx   r8d, word ptr [rbx+6ECh]
 * 000000014020D42C: mov     r14, rdx
 * 000000014020D42F: jmp     short loc_14020D48A
 * 000000014020D431: mov     edx, 0FFFFFEFDh
 * 000000014020D436: prefetchw byte ptr [rbx+6ECh]
 * 000000014020D43D: movzx   eax, word ptr [rbx+6ECh]
 * 000000014020D444: test    r13d, r13d
 * 000000014020D447: jz      short loc_14020D470
 * 000000014020D449: nop     dword ptr [rax+00000000h]
 * 000000014020D450: movzx   ecx, ax
 * 000000014020D453: and     cx, dx
 * 000000014020D456: lock cmpxchg [rbx+6ECh], cx
 * 000000014020D45F: jnz     short loc_14020D450
 * 000000014020D461: jmp     short loc_14020D481
 * 000000014020D470: movzx   ecx, ax
 * 000000014020D473: and     cx, dx
 * 000000014020D476: lock cmpxchg [rbx+6ECh], cx
 * 000000014020D47F: jnz     short loc_14020D470
 * 000000014020D481: mov     edx, 2
 * 000000014020D486: movzx   r8d, ax
 * 000000014020D48A: mov     rax, [rdi+6D8h]
 * 000000014020D491: mov     r10d, ebp
 * 000000014020D494: test    rax, rax
 * 000000014020D497: jnz     short loc_14020D4AA
 * 000000014020D499: test    r8b, 10h
 * 000000014020D49D: jz      short loc_14020D4AA
 * 000000014020D49F: mov     rax, r9
 * 000000014020D4A2: lock or [rbx+6ECh], dx
 * 000000014020D4AA: cmp     r14, rax
 * 000000014020D4AD: jz      short loc_14020D4B9
 * 000000014020D4AF: test    r8b, 8
 * 000000014020D4B3: jz      loc_14020D54B
 * 000000014020D4B9: movzx   r9d, r8w
 * 000000014020D4BD: mov     r11d, 1
 * 000000014020D4C3: and     r9w, 1
 * 000000014020D4C8: nop     dword ptr [rax+rax+00000000h]
 * 000000014020D4D0: movzx   edx, word ptr [rdi+6ECh]
 * 000000014020D4D7: test    r14, r14
 * 000000014020D4DA: mov     ecx, 11h
 * 000000014020D4DF: movzx   eax, dx
 * 000000014020D4E2: cmovz   cx, r11w
 * 000000014020D4E7: and     ax, 0FFEFh
 * 000000014020D4EB: or      cx, ax
 * 000000014020D4EE: test    r9w, r9w
 * 000000014020D4F2: jnz     short loc_14020D4F8
 * 000000014020D4F4: or      cx, 2
 * 000000014020D4F8: bt      cx, 8
 * 000000014020D4FD: jb      short loc_14020D512
 * 000000014020D4FF: cmp     cx, dx
 * 000000014020D502: jz      short loc_14020D512
 * 000000014020D504: movzx   eax, dx
 * 000000014020D507: lock cmpxchg [rdi+6ECh], cx
 * 000000014020D510: jnz     short loc_14020D4D0
 * 000000014020D512: bt      dx, 8
 * 000000014020D517: mov     r11d, [rsp+48h+arg_0]
 * 000000014020D51C: mov     ecx, 1
 * 000000014020D521: jnb     short loc_14020D527
 * 000000014020D523: mov     eax, ecx
 * 000000014020D525: jmp     short loc_14020D550
 * 000000014020D527: mov     rax, [rdi+6D8h]
 * 000000014020D52E: test    rax, rax
 * 000000014020D531: jnz     short loc_14020D550
 * 000000014020D533: test    r8b, 10h
 * 000000014020D537: jz      short loc_14020D550
 * 000000014020D539: mov     rax, rcx
 * 000000014020D53C: mov     edx, 2
 * 000000014020D541: lock or [rbx+6ECh], dx
 * 000000014020D549: jmp     short loc_14020D550
 * 000000014020D54B: mov     ecx, 1
 * 000000014020D550: mov     esi, 0FFFDh
 * 000000014020D555: cmp     rax, r14
 * 000000014020D558: jz      short loc_14020D560
 * 000000014020D55A: test    r8b, 8
 * 000000014020D55E: jz      short loc_14020D5A0
 * 000000014020D560: test    r15d, r15d
 * 000000014020D563: jnz     short loc_14020D5A0
 * 000000014020D565: cmp     rax, 1
 * 000000014020D569: jz      short loc_14020D5A0
 * 000000014020D56B: and     [rbx+6EAh], si
 * 000000014020D572: mov     r9, 20000000000h
 * 000000014020D57C: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014020D583: test    r9, rax
 * 000000014020D586: jz      short loc_14020D58F
 * 000000014020D588: and     [rbx+6E6h], si
 * 000000014020D58F: mov     r10d, ecx
 * 000000014020D592: jmp     short loc_14020D5EE
 * 000000014020D5A0: movzx   eax, word ptr [rdi+6ECh]
 * 000000014020D5A7: movzx   ecx, r8b
 * 000000014020D5AB: or      cl, al
 * 000000014020D5AD: test    cl, 1
 * 000000014020D5B0: jz      short loc_14020D5C8
 * 000000014020D5B2: movzx   ecx, ax
 * 000000014020D5B5: and     cx, 0FFEEh
 * 000000014020D5B9: or      cx, 2
 * 000000014020D5BD: lock cmpxchg [rdi+6ECh], cx
 * 000000014020D5C6: jnz     short loc_14020D5A0
 * 000000014020D5C8: or      word ptr [rbx+6EAh], 2
 * 000000014020D5D0: mov     r9, 20000000000h
 * 000000014020D5DA: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014020D5E1: test    r9, rax
 * 000000014020D5E4: jz      short loc_14020D5EE
 * 000000014020D5E6: or      word ptr [rbx+6E6h], 2
 * 000000014020D5EE: test    r12d, r12d
 * 000000014020D5F1: jz      short loc_14020D61D
 * 000000014020D5F3: nop     dword ptr [rax+00h]
 * 000000014020D5F7: nop     word ptr [rax+rax+00000000h]
 * 000000014020D600: movzx   eax, word ptr [rdi+6ECh]
 * 000000014020D607: movzx   ecx, ax
 * 000000014020D60A: and     cx, 0FFDFh
 * 000000014020D60E: or      cx, 2
 * 000000014020D612: lock cmpxchg [rdi+6ECh], cx
 * 000000014020D61B: jnz     short loc_14020D600
 * 000000014020D61D: test    r10d, r10d
 * 000000014020D620: jnz     short loc_14020D660
 * 000000014020D622: test    r15d, r15d
 * 000000014020D625: jz      short loc_14020D660
 * 000000014020D627: prefetchw byte ptr [rbx+6ECh]
 * 000000014020D62E: movzx   eax, word ptr [rbx+6ECh]
 * 000000014020D635: mov     edx, 100h
 * 000000014020D63A: nop     word ptr [rax+rax+00h]
 * 000000014020D640: movzx   ecx, ax
 * 000000014020D643: or      cx, dx
 * 000000014020D646: lock cmpxchg [rbx+6ECh], cx
 * 000000014020D64F: jnz     short loc_14020D640
 * 000000014020D651: test    al, 1
 * 000000014020D653: jz      short loc_14020D660
 * 000000014020D655: test    r13d, r13d
 * 000000014020D658: mov     eax, 1
 * 000000014020D65D: cmovnz  ebp, eax
 * 000000014020D660: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014020D667: movzx   edx, word ptr [rbx+6E6h]
 * 000000014020D66E: test    r9, rax
 * 000000014020D671: jz      short loc_14020D67A
 * 000000014020D673: movzx   edx, word ptr [rbx+6D0h]
 * 000000014020D67A: test    r14, r14
 * 000000014020D67D: jnz     short loc_14020D6DC
 * 000000014020D67F: test    r8b, 10h
 * 000000014020D683: jnz     short loc_14020D6CE
 * 000000014020D685: mov     eax, 0FFFCh
 * 000000014020D68A: and     dx, ax
 * 000000014020D68D: mov     [rbx+6D0h], dx
 * 000000014020D694: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014020D69B: test    r9, rax
 * 000000014020D69E: jz      short loc_14020D6B7
 * 000000014020D6A0: and     [rbx+6E6h], si
 * 000000014020D6A7: and     [rbx+6EAh], si
 * 000000014020D6AE: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014020D6B5: jmp     short loc_14020D702
 * 000000014020D6B7: and     [rbx+6EAh], si
 * 000000014020D6BE: mov     [rbx+6E6h], dx
 * 000000014020D6C5: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014020D6CC: jmp     short loc_14020D702
 * 000000014020D6CE: mov     eax, 0FFFEh
 * 000000014020D6D3: and     dx, ax
 * 000000014020D6D6: or      dx, 2
 * 000000014020D6DA: jmp     short loc_14020D6FB
 * 000000014020D6DC: test    dl, 3
 * 000000014020D6DF: jnz     short loc_14020D702
 * 000000014020D6E1: and     dx, si
 * 000000014020D6E4: or      dx, 1
 * 000000014020D6E8: mov     [rbx+6D0h], dx
 * 000000014020D6EF: mov     rcx, qword ptr cs:KiSpeculationFeatures
 * 000000014020D6F6: test    r9, rcx
 * 000000014020D6F9: jnz     short loc_14020D702
 * 000000014020D6FB: mov     [rbx+6E6h], dx
 * 000000014020D702: test    r11d, r11d
 * 000000014020D705: jz      short loc_14020D71A
 * 000000014020D707: mov     eax, 0FFEFh
 * 000000014020D70C: mov     [rbx+6D2h], dx
 * 000000014020D713: and     [rbx+6D4h], ax
 * 000000014020D71A: mov     rbx, [rsp+48h+arg_8]
 * 000000014020D71F: mov     eax, ebp
 * 000000014020D721: mov     rbp, [rsp+48h+arg_10]
 * 000000014020D726: mov     rsi, [rsp+48h+arg_18]
 * 000000014020D72B: add     rsp, 20h
 * 000000014020D72F: pop     r15
 * 000000014020D731: pop     r14
 * 000000014020D733: pop     r13
 * 000000014020D735: pop     r12
 * 000000014020D737: pop     rdi
 * 000000014020D738: retn
 */
