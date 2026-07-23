/*
 * XREFs of KiInterruptDispatch @ 0x140421000
 * Callers:
 *     <none>
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140254DD0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140309040 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x140331AA0 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x14041F2B0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1404200D0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatch @ 0x140420C50 (KiInterruptSubDispatch.c)
 *     KiInterruptDispatch @ 0x140421000 (KiInterruptDispatch.c)
 *     KiInitiateUserApc @ 0x1404251B0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140427D70 (KiDpcInterruptBypass.c)
 *     KiUpdateStibpPairing @ 0x140461220 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C720 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405746E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatch @ 0x140421000
 * Reason: Hex-Rays returned no pseudocode for 0x140421000
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140421000: mov     rdx, rsp
 * 0000000140421003: mov     rcx, gs:8B58h
 * 000000014042100C: lea     rax, [rcx-6000h]
 * 0000000140421013: cmp     rax, rsp
 * 0000000140421016: ja      short loc_14042101D
 * 0000000140421018: cmp     rsp, rcx
 * 000000014042101B: jb      short loc_140421029
 * 000000014042101D: cmp     cs:KiBugCheckActive, 0
 * 0000000140421024: jnz     short loc_140421029
 * 0000000140421026: mov     rsp, rcx
 * 0000000140421029: sub     rsp, 20h
 * 000000014042102D: mov     [rsp+20h+var_10], rdx
 * 0000000140421032: call    KiInterruptSubDispatch
 * 0000000140421037: mov     rsp, [rsp+20h+var_10]
 * 000000014042103C: mov     rcx, rsi
 * 000000014042103F: call    HalPerformEndOfInterrupt
 * 0000000140421044: mov     rcx, gs:20h
 * 000000014042104D: cmp     byte ptr [rcx+20h], 1
 * 0000000140421051: ja      short loc_1404210CD
 * 0000000140421053: rdtsc
 * 0000000140421055: shl     rdx, 20h
 * 0000000140421059: or      rax, rdx
 * 000000014042105C: sub     rax, [rcx+8180h]
 * 0000000140421063: add     [rcx+8278h], rax
 * 000000014042106A: add     [rcx+8180h], rax
 * 0000000140421071: mov     r8, rax
 * 0000000140421074: mov     rax, [rcx+8]
 * 0000000140421078: test    byte ptr [rax+2], 72h
 * 000000014042107C: jz      short loc_140421091
 * 000000014042107E: xor     edx, edx
 * 0000000140421080: call    KiBeginThreadAccountingPeriod
 * 0000000140421085: mov     rcx, gs:20h
 * 000000014042108E: inc     byte ptr [rcx+20h]
 * 0000000140421091: mov     dl, [rcx+6]
 * 0000000140421094: and     byte ptr [rcx+6], 0
 * 0000000140421098: cmp     byte ptr [rcx+7], 0
 * 000000014042109C: jnz     short loc_1404210CD
 * 000000014042109E: test    dl, dl
 * 00000001404210A0: jz      short loc_1404210CD
 * 00000001404210A2: cmp     byte ptr [rbp-57h], 2
 * 00000001404210A6: jnb     short loc_1404210B3
 * 00000001404210A8: and     byte ptr [rcx+20h], 0
 * 00000001404210AC: call    KiDpcInterruptBypass
 * 00000001404210B1: jmp     short loc_1404210D0
 * 00000001404210B3: mov     ecx, 2
 * 00000001404210B8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001404210BF: nop     dword ptr [rax+rax+00h]
 * 00000001404210C4: mov     rcx, gs:20h
 * 00000001404210CD: dec     byte ptr [rcx+20h]
 * 00000001404210D0: movzx   ecx, byte ptr [rbp-57h]
 * 00000001404210D4: cmp     cs:KiIrqlFlags, 0
 * 00000001404210DB: jz      short loc_1404210E4
 * 00000001404210DD: call    KzSetIrqlUnsafe
 * 00000001404210E2: jmp     short loc_1404210E8
 * 00000001404210E4: mov     cr8, rcx
 * 00000001404210E8: mov     rsi, [rbp+0D0h]
 * 00000001404210EF: test    byte ptr [rbp+0F0h], 1
 * 00000001404210F6: jz      loc_1404213E4
 * 00000001404210FC: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140421103: jz      short loc_140421108
 * 0000000140421105: stac
 * 0000000140421108: mov     rcx, gs:188h
 * 0000000140421111: test    byte ptr [rcx+0C2h], 3
 * 0000000140421118: jz      short loc_140421135
 * 000000014042111A: mov     ecx, 1
 * 000000014042111F: mov     cr8, rcx
 * 0000000140421123: sti
 * 0000000140421124: call    KiInitiateUserApc
 * 0000000140421129: cli
 * 000000014042112A: mov     ecx, 0
 * 000000014042112F: mov     cr8, rcx
 * 0000000140421133: jmp     short loc_140421108
 * 0000000140421135: test    byte ptr gs:86Ch, 2
 * 000000014042113E: jz      short loc_140421147
 * 0000000140421140: xor     ecx, ecx
 * 0000000140421142: call    KiUpdateStibpPairing
 * 0000000140421147: mov     rcx, gs:188h
 * 0000000140421150: test    dword ptr [rcx], 8000000h
 * 0000000140421156: jz      short loc_14042115D
 * 0000000140421158: call    KiRestoreSetContextState
 * 000000014042115D: mov     rcx, gs:188h
 * 0000000140421166: test    dword ptr [rcx], 10000h
 * 000000014042116C: jz      short loc_140421182
 * 000000014042116E: test    byte ptr [rcx+2], 1
 * 0000000140421172: jz      short loc_140421182
 * 0000000140421174: call    KiCopyCounters
 * 0000000140421179: mov     rcx, gs:188h
 * 0000000140421182: ldmxcsr dword ptr [rbp-54h]
 * 0000000140421186: cmp     word ptr [rbp+80h], 0
 * 000000014042118E: jz      short loc_140421195
 * 0000000140421190: call    KiRestoreDebugRegisterState
 * 0000000140421195: mov     rcx, gs:188h
 * 000000014042119E: bt      dword ptr [rcx+74h], 16h
 * 00000001404211A3: jnb     short loc_1404211CF
 * 00000001404211A5: xor     ecx, ecx
 * 00000001404211A7: rdsspq  rcx
 * 00000001404211AC: mov     r8, gs:95A8h
 * 00000001404211B5: add     r8, 8
 * 00000001404211B9: cmp     rcx, r8
 * 00000001404211BC: jnz     short loc_1404211CF
 * 00000001404211BE: mov     rcx, gs:95A0h
 * 00000001404211C7: rstorssp qword ptr [rcx]
 * 00000001404211CB: saveprevssp
 * 00000001404211CF: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404211D3: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404211D7: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404211DB: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404211DF: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404211E3: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404211E7: mov     r11, [rbp-20h]
 * 00000001404211EB: mov     r10, [rbp-28h]
 * 00000001404211EF: mov     r9, [rbp-30h]
 * 00000001404211F3: mov     r8, [rbp-38h]
 * 00000001404211F7: mov     byte ptr gs:856h, 0
 * 0000000140421200: movzx   eax, word ptr gs:86Ah
 * 0000000140421209: cmp     gs:864h, ax
 * 0000000140421212: jz      short loc_140421226
 * 0000000140421214: mov     gs:864h, ax
 * 000000014042121D: mov     ecx, 48h ; 'H'
 * 0000000140421222: xor     edx, edx
 * 0000000140421224: wrmsr
 * 0000000140421226: btr     word ptr gs:860h, 2
 * 0000000140421231: jnb     short loc_140421241
 * 0000000140421233: mov     eax, 1
 * 0000000140421238: xor     edx, edx
 * 000000014042123A: mov     ecx, 49h ; 'I'
 * 000000014042123F: wrmsr
 * 0000000140421241: btr     word ptr gs:860h, 5
 * 000000014042124C: jnb     loc_140421389
 * 0000000140421252: call    loc_140421365
 * 0000000140421257: add     rsp, 8
 * 000000014042125B: call    loc_14042136E
 * 0000000140421260: add     rsp, 8
 * 0000000140421264: call    loc_140421257
 * 0000000140421269: add     rsp, 8
 * 000000014042126D: call    loc_140421260
 * 0000000140421272: add     rsp, 8
 * 0000000140421276: call    loc_140421269
 * 000000014042127B: add     rsp, 8
 * 000000014042127F: call    loc_140421272
 * 0000000140421284: add     rsp, 8
 * 0000000140421288: call    loc_14042127B
 * 000000014042128D: add     rsp, 8
 * 0000000140421291: call    loc_140421284
 * 0000000140421296: add     rsp, 8
 * 000000014042129A: call    loc_14042128D
 * 000000014042129F: add     rsp, 8
 * 00000001404212A3: call    loc_140421296
 * 00000001404212A8: add     rsp, 8
 * 00000001404212AC: call    loc_14042129F
 * 00000001404212B1: add     rsp, 8
 * 00000001404212B5: call    loc_1404212A8
 * 00000001404212BA: add     rsp, 8
 * 00000001404212BE: call    loc_1404212B1
 * 00000001404212C3: add     rsp, 8
 * 00000001404212C7: call    loc_1404212BA
 * 00000001404212CC: add     rsp, 8
 * 00000001404212D0: call    loc_1404212C3
 * 00000001404212D5: add     rsp, 8
 * 00000001404212D9: call    loc_1404212CC
 * 00000001404212DE: add     rsp, 8
 * 00000001404212E2: call    loc_1404212D5
 * 00000001404212E7: add     rsp, 8
 * 00000001404212EB: call    loc_1404212DE
 * 00000001404212F0: add     rsp, 8
 * 00000001404212F4: call    loc_1404212E7
 * 00000001404212F9: add     rsp, 8
 * 00000001404212FD: call    loc_1404212F0
 * 0000000140421302: add     rsp, 8
 * 0000000140421306: call    loc_1404212F9
 * 000000014042130B: add     rsp, 8
 * 000000014042130F: call    loc_140421302
 * 0000000140421314: add     rsp, 8
 * 0000000140421318: call    loc_14042130B
 * 000000014042131D: add     rsp, 8
 * 0000000140421321: call    loc_140421314
 * 0000000140421326: add     rsp, 8
 * 000000014042132A: call    loc_14042131D
 * 000000014042132F: add     rsp, 8
 * 0000000140421333: call    loc_140421326
 * 0000000140421338: add     rsp, 8
 * 000000014042133C: call    loc_14042132F
 * 0000000140421341: add     rsp, 8
 * 0000000140421345: call    loc_140421338
 * 000000014042134A: add     rsp, 8
 * 000000014042134E: call    loc_140421341
 * 0000000140421353: add     rsp, 8
 * 0000000140421357: call    loc_14042134A
 * 000000014042135C: add     rsp, 8
 * 0000000140421360: call    loc_140421353
 * 0000000140421365: add     rsp, 8
 * 0000000140421369: call    loc_14042135C
 * 000000014042136E: add     rsp, 8
 * 0000000140421372: mov     eax, 0DADAh
 * 0000000140421377: test    byte ptr gs:862h, 8
 * 0000000140421380: jz      short loc_140421389
 * 0000000140421382: mov     al, 20h ; ' '
 * 0000000140421384: incsspq rax
 * 0000000140421389: test    word ptr gs:860h, 80h
 * 0000000140421394: jz      short loc_1404213A2
 * 0000000140421396: xor     eax, eax
 * 0000000140421398: xor     edx, edx
 * 000000014042139A: mov     ecx, 1
 * 000000014042139F: div     rcx
 * 00000001404213A2: mov     rdx, [rbp-40h]
 * 00000001404213A6: mov     rcx, [rbp-48h]
 * 00000001404213AA: mov     rax, [rbp-50h]
 * 00000001404213AE: mov     rsp, rbp
 * 00000001404213B1: mov     rbp, [rbp+0D8h]
 * 00000001404213B8: add     rsp, 0E8h
 * 00000001404213BF: test    cs:KiKvaShadow, 1
 * 00000001404213C6: jz      short loc_1404213CD
 * 00000001404213C8: jmp     KiKernelExit
 * 00000001404213CD: test    word ptr gs:860h, 100h
 * 00000001404213D8: jz      short loc_1404213DF
 * 00000001404213DA: verw    [rsp-1C8h+arg_1E0]
 * 00000001404213DF: swapgs
 * 00000001404213E2: iretq
 * 00000001404213E4: ldmxcsr dword ptr [rbp-54h]
 * 00000001404213E8: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404213EC: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404213F0: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404213F4: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404213F8: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404213FC: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140421400: mov     r11, [rbp-20h]
 * 0000000140421404: mov     r10, [rbp-28h]
 * 0000000140421408: mov     r9, [rbp-30h]
 * 000000014042140C: mov     r8, [rbp-38h]
 * 0000000140421410: mov     rdx, [rbp-40h]
 * 0000000140421414: mov     rcx, [rbp-48h]
 * 0000000140421418: mov     rax, [rbp-50h]
 * 000000014042141C: mov     rsp, rbp
 * 000000014042141F: mov     rbp, [rbp+0D8h]
 * 0000000140421426: add     rsp, 0E8h
 * 000000014042142D: iretq
 */
