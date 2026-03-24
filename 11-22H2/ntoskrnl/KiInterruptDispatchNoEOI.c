/*
 * XREFs of KiInterruptDispatchNoEOI @ 0x140421270
 * Callers:
 *     <none>
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140254BF0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140308C80 (KiBeginThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x14041E860 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041F680 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x140420350 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoEOI @ 0x140421270 (KiInterruptDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x140424760 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140427320 (KiDpcInterruptBypass.c)
 *     KiUpdateStibpPairing @ 0x1404607C0 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C100 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140574240 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoEOI @ 0x140421270
 * Reason: Hex-Rays returned no pseudocode for 0x140421270
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140421270: mov     rdx, rsp
 * 0000000140421273: mov     rcx, gs:8B58h
 * 000000014042127C: lea     rax, [rcx-6000h]
 * 0000000140421283: cmp     rax, rsp
 * 0000000140421286: ja      short loc_14042128D
 * 0000000140421288: cmp     rsp, rcx
 * 000000014042128B: jb      short loc_140421299
 * 000000014042128D: cmp     cs:KiBugCheckActive, 0
 * 0000000140421294: jnz     short loc_140421299
 * 0000000140421296: mov     rsp, rcx
 * 0000000140421299: sub     rsp, 20h
 * 000000014042129D: mov     [rsp+20h+var_10], rdx
 * 00000001404212A2: call    KiInterruptSubDispatchNoLock
 * 00000001404212A7: mov     rsp, [rsp+20h+var_10]
 * 00000001404212AC: mov     rcx, gs:20h
 * 00000001404212B5: cmp     byte ptr [rcx+20h], 1
 * 00000001404212B9: ja      short loc_140421335
 * 00000001404212BB: rdtsc
 * 00000001404212BD: shl     rdx, 20h
 * 00000001404212C1: or      rax, rdx
 * 00000001404212C4: sub     rax, [rcx+8180h]
 * 00000001404212CB: add     [rcx+8278h], rax
 * 00000001404212D2: add     [rcx+8180h], rax
 * 00000001404212D9: mov     r8, rax
 * 00000001404212DC: mov     rax, [rcx+8]
 * 00000001404212E0: test    byte ptr [rax+2], 72h
 * 00000001404212E4: jz      short loc_1404212F9
 * 00000001404212E6: xor     edx, edx
 * 00000001404212E8: call    KiBeginThreadAccountingPeriod
 * 00000001404212ED: mov     rcx, gs:20h
 * 00000001404212F6: inc     byte ptr [rcx+20h]
 * 00000001404212F9: mov     dl, [rcx+6]
 * 00000001404212FC: and     byte ptr [rcx+6], 0
 * 0000000140421300: cmp     byte ptr [rcx+7], 0
 * 0000000140421304: jnz     short loc_140421335
 * 0000000140421306: test    dl, dl
 * 0000000140421308: jz      short loc_140421335
 * 000000014042130A: cmp     byte ptr [rbp-57h], 2
 * 000000014042130E: jnb     short loc_14042131B
 * 0000000140421310: and     byte ptr [rcx+20h], 0
 * 0000000140421314: call    KiDpcInterruptBypass
 * 0000000140421319: jmp     short loc_140421338
 * 000000014042131B: mov     ecx, 2
 * 0000000140421320: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140421327: nop     dword ptr [rax+rax+00h]
 * 000000014042132C: mov     rcx, gs:20h
 * 0000000140421335: dec     byte ptr [rcx+20h]
 * 0000000140421338: movzx   ecx, byte ptr [rbp-57h]
 * 000000014042133C: cmp     cs:KiIrqlFlags, 0
 * 0000000140421343: jz      short loc_14042134C
 * 0000000140421345: call    KzSetIrqlUnsafe
 * 000000014042134A: jmp     short loc_140421350
 * 000000014042134C: mov     cr8, rcx
 * 0000000140421350: mov     rsi, [rbp+0D0h]
 * 0000000140421357: test    byte ptr [rbp+0F0h], 1
 * 000000014042135E: jz      loc_14042164C
 * 0000000140421364: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042136B: jz      short loc_140421370
 * 000000014042136D: stac
 * 0000000140421370: mov     rcx, gs:188h
 * 0000000140421379: test    byte ptr [rcx+0C2h], 3
 * 0000000140421380: jz      short loc_14042139D
 * 0000000140421382: mov     ecx, 1
 * 0000000140421387: mov     cr8, rcx
 * 000000014042138B: sti
 * 000000014042138C: call    KiInitiateUserApc
 * 0000000140421391: cli
 * 0000000140421392: mov     ecx, 0
 * 0000000140421397: mov     cr8, rcx
 * 000000014042139B: jmp     short loc_140421370
 * 000000014042139D: test    byte ptr gs:86Ch, 2
 * 00000001404213A6: jz      short loc_1404213AF
 * 00000001404213A8: xor     ecx, ecx
 * 00000001404213AA: call    KiUpdateStibpPairing
 * 00000001404213AF: mov     rcx, gs:188h
 * 00000001404213B8: test    dword ptr [rcx], 8000000h
 * 00000001404213BE: jz      short loc_1404213C5
 * 00000001404213C0: call    KiRestoreSetContextState
 * 00000001404213C5: mov     rcx, gs:188h
 * 00000001404213CE: test    dword ptr [rcx], 10000h
 * 00000001404213D4: jz      short loc_1404213EA
 * 00000001404213D6: test    byte ptr [rcx+2], 1
 * 00000001404213DA: jz      short loc_1404213EA
 * 00000001404213DC: call    KiCopyCounters
 * 00000001404213E1: mov     rcx, gs:188h
 * 00000001404213EA: ldmxcsr dword ptr [rbp-54h]
 * 00000001404213EE: cmp     word ptr [rbp+80h], 0
 * 00000001404213F6: jz      short loc_1404213FD
 * 00000001404213F8: call    KiRestoreDebugRegisterState
 * 00000001404213FD: mov     rcx, gs:188h
 * 0000000140421406: bt      dword ptr [rcx+74h], 16h
 * 000000014042140B: jnb     short loc_140421437
 * 000000014042140D: xor     ecx, ecx
 * 000000014042140F: rdsspq  rcx
 * 0000000140421414: mov     r8, gs:95A8h
 * 000000014042141D: add     r8, 8
 * 0000000140421421: cmp     rcx, r8
 * 0000000140421424: jnz     short loc_140421437
 * 0000000140421426: mov     rcx, gs:95A0h
 * 000000014042142F: rstorssp qword ptr [rcx]
 * 0000000140421433: saveprevssp
 * 0000000140421437: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014042143B: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014042143F: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140421443: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140421447: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014042144B: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014042144F: mov     r11, [rbp-20h]
 * 0000000140421453: mov     r10, [rbp-28h]
 * 0000000140421457: mov     r9, [rbp-30h]
 * 000000014042145B: mov     r8, [rbp-38h]
 * 000000014042145F: mov     byte ptr gs:856h, 0
 * 0000000140421468: movzx   eax, word ptr gs:86Ah
 * 0000000140421471: cmp     gs:864h, ax
 * 000000014042147A: jz      short loc_14042148E
 * 000000014042147C: mov     gs:864h, ax
 * 0000000140421485: mov     ecx, 48h ; 'H'
 * 000000014042148A: xor     edx, edx
 * 000000014042148C: wrmsr
 * 000000014042148E: btr     word ptr gs:860h, 2
 * 0000000140421499: jnb     short loc_1404214A9
 * 000000014042149B: mov     eax, 1
 * 00000001404214A0: xor     edx, edx
 * 00000001404214A2: mov     ecx, 49h ; 'I'
 * 00000001404214A7: wrmsr
 * 00000001404214A9: btr     word ptr gs:860h, 5
 * 00000001404214B4: jnb     loc_1404215F1
 * 00000001404214BA: call    loc_1404215CD
 * 00000001404214BF: add     rsp, 8
 * 00000001404214C3: call    loc_1404215D6
 * 00000001404214C8: add     rsp, 8
 * 00000001404214CC: call    loc_1404214BF
 * 00000001404214D1: add     rsp, 8
 * 00000001404214D5: call    loc_1404214C8
 * 00000001404214DA: add     rsp, 8
 * 00000001404214DE: call    loc_1404214D1
 * 00000001404214E3: add     rsp, 8
 * 00000001404214E7: call    loc_1404214DA
 * 00000001404214EC: add     rsp, 8
 * 00000001404214F0: call    loc_1404214E3
 * 00000001404214F5: add     rsp, 8
 * 00000001404214F9: call    loc_1404214EC
 * 00000001404214FE: add     rsp, 8
 * 0000000140421502: call    loc_1404214F5
 * 0000000140421507: add     rsp, 8
 * 000000014042150B: call    loc_1404214FE
 * 0000000140421510: add     rsp, 8
 * 0000000140421514: call    loc_140421507
 * 0000000140421519: add     rsp, 8
 * 000000014042151D: call    loc_140421510
 * 0000000140421522: add     rsp, 8
 * 0000000140421526: call    loc_140421519
 * 000000014042152B: add     rsp, 8
 * 000000014042152F: call    loc_140421522
 * 0000000140421534: add     rsp, 8
 * 0000000140421538: call    loc_14042152B
 * 000000014042153D: add     rsp, 8
 * 0000000140421541: call    loc_140421534
 * 0000000140421546: add     rsp, 8
 * 000000014042154A: call    loc_14042153D
 * 000000014042154F: add     rsp, 8
 * 0000000140421553: call    loc_140421546
 * 0000000140421558: add     rsp, 8
 * 000000014042155C: call    loc_14042154F
 * 0000000140421561: add     rsp, 8
 * 0000000140421565: call    loc_140421558
 * 000000014042156A: add     rsp, 8
 * 000000014042156E: call    loc_140421561
 * 0000000140421573: add     rsp, 8
 * 0000000140421577: call    loc_14042156A
 * 000000014042157C: add     rsp, 8
 * 0000000140421580: call    loc_140421573
 * 0000000140421585: add     rsp, 8
 * 0000000140421589: call    loc_14042157C
 * 000000014042158E: add     rsp, 8
 * 0000000140421592: call    loc_140421585
 * 0000000140421597: add     rsp, 8
 * 000000014042159B: call    loc_14042158E
 * 00000001404215A0: add     rsp, 8
 * 00000001404215A4: call    loc_140421597
 * 00000001404215A9: add     rsp, 8
 * 00000001404215AD: call    loc_1404215A0
 * 00000001404215B2: add     rsp, 8
 * 00000001404215B6: call    loc_1404215A9
 * 00000001404215BB: add     rsp, 8
 * 00000001404215BF: call    loc_1404215B2
 * 00000001404215C4: add     rsp, 8
 * 00000001404215C8: call    loc_1404215BB
 * 00000001404215CD: add     rsp, 8
 * 00000001404215D1: call    loc_1404215C4
 * 00000001404215D6: add     rsp, 8
 * 00000001404215DA: mov     eax, 0DADAh
 * 00000001404215DF: test    byte ptr gs:862h, 8
 * 00000001404215E8: jz      short loc_1404215F1
 * 00000001404215EA: mov     al, 20h ; ' '
 * 00000001404215EC: incsspq rax
 * 00000001404215F1: test    word ptr gs:860h, 80h
 * 00000001404215FC: jz      short loc_14042160A
 * 00000001404215FE: xor     eax, eax
 * 0000000140421600: xor     edx, edx
 * 0000000140421602: mov     ecx, 1
 * 0000000140421607: div     rcx
 * 000000014042160A: mov     rdx, [rbp-40h]
 * 000000014042160E: mov     rcx, [rbp-48h]
 * 0000000140421612: mov     rax, [rbp-50h]
 * 0000000140421616: mov     rsp, rbp
 * 0000000140421619: mov     rbp, [rbp+0D8h]
 * 0000000140421620: add     rsp, 0E8h
 * 0000000140421627: test    cs:KiKvaShadow, 1
 * 000000014042162E: jz      short loc_140421635
 * 0000000140421630: jmp     KiKernelExit
 * 0000000140421635: test    word ptr gs:860h, 100h
 * 0000000140421640: jz      short loc_140421647
 * 0000000140421642: verw    [rsp-1C8h+arg_1E0]
 * 0000000140421647: swapgs
 * 000000014042164A: iretq
 * 000000014042164C: ldmxcsr dword ptr [rbp-54h]
 * 0000000140421650: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140421654: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140421658: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014042165C: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140421660: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140421664: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140421668: mov     r11, [rbp-20h]
 * 000000014042166C: mov     r10, [rbp-28h]
 * 0000000140421670: mov     r9, [rbp-30h]
 * 0000000140421674: mov     r8, [rbp-38h]
 * 0000000140421678: mov     rdx, [rbp-40h]
 * 000000014042167C: mov     rcx, [rbp-48h]
 * 0000000140421680: mov     rax, [rbp-50h]
 * 0000000140421684: mov     rsp, rbp
 * 0000000140421687: mov     rbp, [rbp+0D8h]
 * 000000014042168E: add     rsp, 0E8h
 * 0000000140421695: iretq
 */
