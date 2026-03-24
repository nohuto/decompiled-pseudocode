/*
 * XREFs of KiInterruptDispatchNoLock @ 0x1404210B0
 * Callers:
 *     <none>
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140254D10 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140308DB0 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x140331810 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x14041EF20 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041FD40 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x140420A10 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoLock @ 0x1404210B0 (KiInterruptDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x140424E20 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1404279E0 (KiDpcInterruptBypass.c)
 *     KiUpdateStibpPairing @ 0x140460E20 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C060 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405741A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLock @ 0x1404210B0
 * Reason: Hex-Rays returned no pseudocode for 0x1404210B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404210B0: mov     rdx, rsp
 * 00000001404210B3: mov     rcx, gs:8B58h
 * 00000001404210BC: lea     rax, [rcx-6000h]
 * 00000001404210C3: cmp     rax, rsp
 * 00000001404210C6: ja      short loc_1404210CD
 * 00000001404210C8: cmp     rsp, rcx
 * 00000001404210CB: jb      short loc_1404210D9
 * 00000001404210CD: cmp     cs:KiBugCheckActive, 0
 * 00000001404210D4: jnz     short loc_1404210D9
 * 00000001404210D6: mov     rsp, rcx
 * 00000001404210D9: sub     rsp, 20h
 * 00000001404210DD: mov     [rsp+20h+var_10], rdx
 * 00000001404210E2: call    KiInterruptSubDispatchNoLock
 * 00000001404210E7: mov     rsp, [rsp+20h+var_10]
 * 00000001404210EC: mov     rcx, rsi
 * 00000001404210EF: call    HalPerformEndOfInterrupt
 * 00000001404210F4: mov     rcx, gs:20h
 * 00000001404210FD: cmp     byte ptr [rcx+20h], 1
 * 0000000140421101: ja      short loc_14042117D
 * 0000000140421103: rdtsc
 * 0000000140421105: shl     rdx, 20h
 * 0000000140421109: or      rax, rdx
 * 000000014042110C: sub     rax, [rcx+8180h]
 * 0000000140421113: add     [rcx+8278h], rax
 * 000000014042111A: add     [rcx+8180h], rax
 * 0000000140421121: mov     r8, rax
 * 0000000140421124: mov     rax, [rcx+8]
 * 0000000140421128: test    byte ptr [rax+2], 72h
 * 000000014042112C: jz      short loc_140421141
 * 000000014042112E: xor     edx, edx
 * 0000000140421130: call    KiBeginThreadAccountingPeriod
 * 0000000140421135: mov     rcx, gs:20h
 * 000000014042113E: inc     byte ptr [rcx+20h]
 * 0000000140421141: mov     dl, [rcx+6]
 * 0000000140421144: and     byte ptr [rcx+6], 0
 * 0000000140421148: cmp     byte ptr [rcx+7], 0
 * 000000014042114C: jnz     short loc_14042117D
 * 000000014042114E: test    dl, dl
 * 0000000140421150: jz      short loc_14042117D
 * 0000000140421152: cmp     byte ptr [rbp-57h], 2
 * 0000000140421156: jnb     short loc_140421163
 * 0000000140421158: and     byte ptr [rcx+20h], 0
 * 000000014042115C: call    KiDpcInterruptBypass
 * 0000000140421161: jmp     short loc_140421180
 * 0000000140421163: mov     ecx, 2
 * 0000000140421168: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014042116F: nop     dword ptr [rax+rax+00h]
 * 0000000140421174: mov     rcx, gs:20h
 * 000000014042117D: dec     byte ptr [rcx+20h]
 * 0000000140421180: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140421184: cmp     cs:KiIrqlFlags, 0
 * 000000014042118B: jz      short loc_140421194
 * 000000014042118D: call    KzSetIrqlUnsafe
 * 0000000140421192: jmp     short loc_140421198
 * 0000000140421194: mov     cr8, rcx
 * 0000000140421198: mov     rsi, [rbp+0D0h]
 * 000000014042119F: test    byte ptr [rbp+0F0h], 1
 * 00000001404211A6: jz      loc_140421494
 * 00000001404211AC: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404211B3: jz      short loc_1404211B8
 * 00000001404211B5: stac
 * 00000001404211B8: mov     rcx, gs:188h
 * 00000001404211C1: test    byte ptr [rcx+0C2h], 3
 * 00000001404211C8: jz      short loc_1404211E5
 * 00000001404211CA: mov     ecx, 1
 * 00000001404211CF: mov     cr8, rcx
 * 00000001404211D3: sti
 * 00000001404211D4: call    KiInitiateUserApc
 * 00000001404211D9: cli
 * 00000001404211DA: mov     ecx, 0
 * 00000001404211DF: mov     cr8, rcx
 * 00000001404211E3: jmp     short loc_1404211B8
 * 00000001404211E5: test    byte ptr gs:86Ch, 2
 * 00000001404211EE: jz      short loc_1404211F7
 * 00000001404211F0: xor     ecx, ecx
 * 00000001404211F2: call    KiUpdateStibpPairing
 * 00000001404211F7: mov     rcx, gs:188h
 * 0000000140421200: test    dword ptr [rcx], 8000000h
 * 0000000140421206: jz      short loc_14042120D
 * 0000000140421208: call    KiRestoreSetContextState
 * 000000014042120D: mov     rcx, gs:188h
 * 0000000140421216: test    dword ptr [rcx], 10000h
 * 000000014042121C: jz      short loc_140421232
 * 000000014042121E: test    byte ptr [rcx+2], 1
 * 0000000140421222: jz      short loc_140421232
 * 0000000140421224: call    KiCopyCounters
 * 0000000140421229: mov     rcx, gs:188h
 * 0000000140421232: ldmxcsr dword ptr [rbp-54h]
 * 0000000140421236: cmp     word ptr [rbp+80h], 0
 * 000000014042123E: jz      short loc_140421245
 * 0000000140421240: call    KiRestoreDebugRegisterState
 * 0000000140421245: mov     rcx, gs:188h
 * 000000014042124E: bt      dword ptr [rcx+74h], 16h
 * 0000000140421253: jnb     short loc_14042127F
 * 0000000140421255: xor     ecx, ecx
 * 0000000140421257: rdsspq  rcx
 * 000000014042125C: mov     r8, gs:95A8h
 * 0000000140421265: add     r8, 8
 * 0000000140421269: cmp     rcx, r8
 * 000000014042126C: jnz     short loc_14042127F
 * 000000014042126E: mov     rcx, gs:95A0h
 * 0000000140421277: rstorssp qword ptr [rcx]
 * 000000014042127B: saveprevssp
 * 000000014042127F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140421283: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140421287: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014042128B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014042128F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140421293: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140421297: mov     r11, [rbp-20h]
 * 000000014042129B: mov     r10, [rbp-28h]
 * 000000014042129F: mov     r9, [rbp-30h]
 * 00000001404212A3: mov     r8, [rbp-38h]
 * 00000001404212A7: mov     byte ptr gs:856h, 0
 * 00000001404212B0: movzx   eax, word ptr gs:86Ah
 * 00000001404212B9: cmp     gs:864h, ax
 * 00000001404212C2: jz      short loc_1404212D6
 * 00000001404212C4: mov     gs:864h, ax
 * 00000001404212CD: mov     ecx, 48h ; 'H'
 * 00000001404212D2: xor     edx, edx
 * 00000001404212D4: wrmsr
 * 00000001404212D6: btr     word ptr gs:860h, 2
 * 00000001404212E1: jnb     short loc_1404212F1
 * 00000001404212E3: mov     eax, 1
 * 00000001404212E8: xor     edx, edx
 * 00000001404212EA: mov     ecx, 49h ; 'I'
 * 00000001404212EF: wrmsr
 * 00000001404212F1: btr     word ptr gs:860h, 5
 * 00000001404212FC: jnb     loc_140421439
 * 0000000140421302: call    loc_140421415
 * 0000000140421307: add     rsp, 8
 * 000000014042130B: call    loc_14042141E
 * 0000000140421310: add     rsp, 8
 * 0000000140421314: call    loc_140421307
 * 0000000140421319: add     rsp, 8
 * 000000014042131D: call    loc_140421310
 * 0000000140421322: add     rsp, 8
 * 0000000140421326: call    loc_140421319
 * 000000014042132B: add     rsp, 8
 * 000000014042132F: call    loc_140421322
 * 0000000140421334: add     rsp, 8
 * 0000000140421338: call    loc_14042132B
 * 000000014042133D: add     rsp, 8
 * 0000000140421341: call    loc_140421334
 * 0000000140421346: add     rsp, 8
 * 000000014042134A: call    loc_14042133D
 * 000000014042134F: add     rsp, 8
 * 0000000140421353: call    loc_140421346
 * 0000000140421358: add     rsp, 8
 * 000000014042135C: call    loc_14042134F
 * 0000000140421361: add     rsp, 8
 * 0000000140421365: call    loc_140421358
 * 000000014042136A: add     rsp, 8
 * 000000014042136E: call    loc_140421361
 * 0000000140421373: add     rsp, 8
 * 0000000140421377: call    loc_14042136A
 * 000000014042137C: add     rsp, 8
 * 0000000140421380: call    loc_140421373
 * 0000000140421385: add     rsp, 8
 * 0000000140421389: call    loc_14042137C
 * 000000014042138E: add     rsp, 8
 * 0000000140421392: call    loc_140421385
 * 0000000140421397: add     rsp, 8
 * 000000014042139B: call    loc_14042138E
 * 00000001404213A0: add     rsp, 8
 * 00000001404213A4: call    loc_140421397
 * 00000001404213A9: add     rsp, 8
 * 00000001404213AD: call    loc_1404213A0
 * 00000001404213B2: add     rsp, 8
 * 00000001404213B6: call    loc_1404213A9
 * 00000001404213BB: add     rsp, 8
 * 00000001404213BF: call    loc_1404213B2
 * 00000001404213C4: add     rsp, 8
 * 00000001404213C8: call    loc_1404213BB
 * 00000001404213CD: add     rsp, 8
 * 00000001404213D1: call    loc_1404213C4
 * 00000001404213D6: add     rsp, 8
 * 00000001404213DA: call    loc_1404213CD
 * 00000001404213DF: add     rsp, 8
 * 00000001404213E3: call    loc_1404213D6
 * 00000001404213E8: add     rsp, 8
 * 00000001404213EC: call    loc_1404213DF
 * 00000001404213F1: add     rsp, 8
 * 00000001404213F5: call    loc_1404213E8
 * 00000001404213FA: add     rsp, 8
 * 00000001404213FE: call    loc_1404213F1
 * 0000000140421403: add     rsp, 8
 * 0000000140421407: call    loc_1404213FA
 * 000000014042140C: add     rsp, 8
 * 0000000140421410: call    loc_140421403
 * 0000000140421415: add     rsp, 8
 * 0000000140421419: call    loc_14042140C
 * 000000014042141E: add     rsp, 8
 * 0000000140421422: mov     eax, 0DADAh
 * 0000000140421427: test    byte ptr gs:862h, 8
 * 0000000140421430: jz      short loc_140421439
 * 0000000140421432: mov     al, 20h ; ' '
 * 0000000140421434: incsspq rax
 * 0000000140421439: test    word ptr gs:860h, 80h
 * 0000000140421444: jz      short loc_140421452
 * 0000000140421446: xor     eax, eax
 * 0000000140421448: xor     edx, edx
 * 000000014042144A: mov     ecx, 1
 * 000000014042144F: div     rcx
 * 0000000140421452: mov     rdx, [rbp-40h]
 * 0000000140421456: mov     rcx, [rbp-48h]
 * 000000014042145A: mov     rax, [rbp-50h]
 * 000000014042145E: mov     rsp, rbp
 * 0000000140421461: mov     rbp, [rbp+0D8h]
 * 0000000140421468: add     rsp, 0E8h
 * 000000014042146F: test    cs:KiKvaShadow, 1
 * 0000000140421476: jz      short loc_14042147D
 * 0000000140421478: jmp     KiKernelExit
 * 000000014042147D: test    word ptr gs:860h, 100h
 * 0000000140421488: jz      short loc_14042148F
 * 000000014042148A: verw    [rsp-1C8h+arg_1E0]
 * 000000014042148F: swapgs
 * 0000000140421492: iretq
 * 0000000140421494: ldmxcsr dword ptr [rbp-54h]
 * 0000000140421498: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014042149C: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404214A0: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404214A4: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404214A8: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404214AC: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404214B0: mov     r11, [rbp-20h]
 * 00000001404214B4: mov     r10, [rbp-28h]
 * 00000001404214B8: mov     r9, [rbp-30h]
 * 00000001404214BC: mov     r8, [rbp-38h]
 * 00000001404214C0: mov     rdx, [rbp-40h]
 * 00000001404214C4: mov     rcx, [rbp-48h]
 * 00000001404214C8: mov     rax, [rbp-50h]
 * 00000001404214CC: mov     rsp, rbp
 * 00000001404214CF: mov     rbp, [rbp+0D8h]
 * 00000001404214D6: add     rsp, 0E8h
 * 00000001404214DD: iretq
 */
