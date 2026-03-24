/*
 * XREFs of KiInterruptDispatchNoEOI @ 0x140421930
 * Callers:
 *     <none>
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140254D10 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140308DB0 (KiBeginThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x14041EF20 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041FD40 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x140420A10 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoEOI @ 0x140421930 (KiInterruptDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x140424E20 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1404279E0 (KiDpcInterruptBypass.c)
 *     KiUpdateStibpPairing @ 0x140460E20 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C060 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405741A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoEOI @ 0x140421930
 * Reason: Hex-Rays returned no pseudocode for 0x140421930
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140421930: mov     rdx, rsp
 * 0000000140421933: mov     rcx, gs:8B58h
 * 000000014042193C: lea     rax, [rcx-6000h]
 * 0000000140421943: cmp     rax, rsp
 * 0000000140421946: ja      short loc_14042194D
 * 0000000140421948: cmp     rsp, rcx
 * 000000014042194B: jb      short loc_140421959
 * 000000014042194D: cmp     cs:KiBugCheckActive, 0
 * 0000000140421954: jnz     short loc_140421959
 * 0000000140421956: mov     rsp, rcx
 * 0000000140421959: sub     rsp, 20h
 * 000000014042195D: mov     [rsp+20h+var_10], rdx
 * 0000000140421962: call    KiInterruptSubDispatchNoLock
 * 0000000140421967: mov     rsp, [rsp+20h+var_10]
 * 000000014042196C: mov     rcx, gs:20h
 * 0000000140421975: cmp     byte ptr [rcx+20h], 1
 * 0000000140421979: ja      short loc_1404219F5
 * 000000014042197B: rdtsc
 * 000000014042197D: shl     rdx, 20h
 * 0000000140421981: or      rax, rdx
 * 0000000140421984: sub     rax, [rcx+8180h]
 * 000000014042198B: add     [rcx+8278h], rax
 * 0000000140421992: add     [rcx+8180h], rax
 * 0000000140421999: mov     r8, rax
 * 000000014042199C: mov     rax, [rcx+8]
 * 00000001404219A0: test    byte ptr [rax+2], 72h
 * 00000001404219A4: jz      short loc_1404219B9
 * 00000001404219A6: xor     edx, edx
 * 00000001404219A8: call    KiBeginThreadAccountingPeriod
 * 00000001404219AD: mov     rcx, gs:20h
 * 00000001404219B6: inc     byte ptr [rcx+20h]
 * 00000001404219B9: mov     dl, [rcx+6]
 * 00000001404219BC: and     byte ptr [rcx+6], 0
 * 00000001404219C0: cmp     byte ptr [rcx+7], 0
 * 00000001404219C4: jnz     short loc_1404219F5
 * 00000001404219C6: test    dl, dl
 * 00000001404219C8: jz      short loc_1404219F5
 * 00000001404219CA: cmp     byte ptr [rbp-57h], 2
 * 00000001404219CE: jnb     short loc_1404219DB
 * 00000001404219D0: and     byte ptr [rcx+20h], 0
 * 00000001404219D4: call    KiDpcInterruptBypass
 * 00000001404219D9: jmp     short loc_1404219F8
 * 00000001404219DB: mov     ecx, 2
 * 00000001404219E0: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001404219E7: nop     dword ptr [rax+rax+00h]
 * 00000001404219EC: mov     rcx, gs:20h
 * 00000001404219F5: dec     byte ptr [rcx+20h]
 * 00000001404219F8: movzx   ecx, byte ptr [rbp-57h]
 * 00000001404219FC: cmp     cs:KiIrqlFlags, 0
 * 0000000140421A03: jz      short loc_140421A0C
 * 0000000140421A05: call    KzSetIrqlUnsafe
 * 0000000140421A0A: jmp     short loc_140421A10
 * 0000000140421A0C: mov     cr8, rcx
 * 0000000140421A10: mov     rsi, [rbp+0D0h]
 * 0000000140421A17: test    byte ptr [rbp+0F0h], 1
 * 0000000140421A1E: jz      loc_140421D0C
 * 0000000140421A24: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140421A2B: jz      short loc_140421A30
 * 0000000140421A2D: stac
 * 0000000140421A30: mov     rcx, gs:188h
 * 0000000140421A39: test    byte ptr [rcx+0C2h], 3
 * 0000000140421A40: jz      short loc_140421A5D
 * 0000000140421A42: mov     ecx, 1
 * 0000000140421A47: mov     cr8, rcx
 * 0000000140421A4B: sti
 * 0000000140421A4C: call    KiInitiateUserApc
 * 0000000140421A51: cli
 * 0000000140421A52: mov     ecx, 0
 * 0000000140421A57: mov     cr8, rcx
 * 0000000140421A5B: jmp     short loc_140421A30
 * 0000000140421A5D: test    byte ptr gs:86Ch, 2
 * 0000000140421A66: jz      short loc_140421A6F
 * 0000000140421A68: xor     ecx, ecx
 * 0000000140421A6A: call    KiUpdateStibpPairing
 * 0000000140421A6F: mov     rcx, gs:188h
 * 0000000140421A78: test    dword ptr [rcx], 8000000h
 * 0000000140421A7E: jz      short loc_140421A85
 * 0000000140421A80: call    KiRestoreSetContextState
 * 0000000140421A85: mov     rcx, gs:188h
 * 0000000140421A8E: test    dword ptr [rcx], 10000h
 * 0000000140421A94: jz      short loc_140421AAA
 * 0000000140421A96: test    byte ptr [rcx+2], 1
 * 0000000140421A9A: jz      short loc_140421AAA
 * 0000000140421A9C: call    KiCopyCounters
 * 0000000140421AA1: mov     rcx, gs:188h
 * 0000000140421AAA: ldmxcsr dword ptr [rbp-54h]
 * 0000000140421AAE: cmp     word ptr [rbp+80h], 0
 * 0000000140421AB6: jz      short loc_140421ABD
 * 0000000140421AB8: call    KiRestoreDebugRegisterState
 * 0000000140421ABD: mov     rcx, gs:188h
 * 0000000140421AC6: bt      dword ptr [rcx+74h], 16h
 * 0000000140421ACB: jnb     short loc_140421AF7
 * 0000000140421ACD: xor     ecx, ecx
 * 0000000140421ACF: rdsspq  rcx
 * 0000000140421AD4: mov     r8, gs:95A8h
 * 0000000140421ADD: add     r8, 8
 * 0000000140421AE1: cmp     rcx, r8
 * 0000000140421AE4: jnz     short loc_140421AF7
 * 0000000140421AE6: mov     rcx, gs:95A0h
 * 0000000140421AEF: rstorssp qword ptr [rcx]
 * 0000000140421AF3: saveprevssp
 * 0000000140421AF7: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140421AFB: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140421AFF: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140421B03: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140421B07: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140421B0B: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140421B0F: mov     r11, [rbp-20h]
 * 0000000140421B13: mov     r10, [rbp-28h]
 * 0000000140421B17: mov     r9, [rbp-30h]
 * 0000000140421B1B: mov     r8, [rbp-38h]
 * 0000000140421B1F: mov     byte ptr gs:856h, 0
 * 0000000140421B28: movzx   eax, word ptr gs:86Ah
 * 0000000140421B31: cmp     gs:864h, ax
 * 0000000140421B3A: jz      short loc_140421B4E
 * 0000000140421B3C: mov     gs:864h, ax
 * 0000000140421B45: mov     ecx, 48h ; 'H'
 * 0000000140421B4A: xor     edx, edx
 * 0000000140421B4C: wrmsr
 * 0000000140421B4E: btr     word ptr gs:860h, 2
 * 0000000140421B59: jnb     short loc_140421B69
 * 0000000140421B5B: mov     eax, 1
 * 0000000140421B60: xor     edx, edx
 * 0000000140421B62: mov     ecx, 49h ; 'I'
 * 0000000140421B67: wrmsr
 * 0000000140421B69: btr     word ptr gs:860h, 5
 * 0000000140421B74: jnb     loc_140421CB1
 * 0000000140421B7A: call    loc_140421C8D
 * 0000000140421B7F: add     rsp, 8
 * 0000000140421B83: call    loc_140421C96
 * 0000000140421B88: add     rsp, 8
 * 0000000140421B8C: call    loc_140421B7F
 * 0000000140421B91: add     rsp, 8
 * 0000000140421B95: call    loc_140421B88
 * 0000000140421B9A: add     rsp, 8
 * 0000000140421B9E: call    loc_140421B91
 * 0000000140421BA3: add     rsp, 8
 * 0000000140421BA7: call    loc_140421B9A
 * 0000000140421BAC: add     rsp, 8
 * 0000000140421BB0: call    loc_140421BA3
 * 0000000140421BB5: add     rsp, 8
 * 0000000140421BB9: call    loc_140421BAC
 * 0000000140421BBE: add     rsp, 8
 * 0000000140421BC2: call    loc_140421BB5
 * 0000000140421BC7: add     rsp, 8
 * 0000000140421BCB: call    loc_140421BBE
 * 0000000140421BD0: add     rsp, 8
 * 0000000140421BD4: call    loc_140421BC7
 * 0000000140421BD9: add     rsp, 8
 * 0000000140421BDD: call    loc_140421BD0
 * 0000000140421BE2: add     rsp, 8
 * 0000000140421BE6: call    loc_140421BD9
 * 0000000140421BEB: add     rsp, 8
 * 0000000140421BEF: call    loc_140421BE2
 * 0000000140421BF4: add     rsp, 8
 * 0000000140421BF8: call    loc_140421BEB
 * 0000000140421BFD: add     rsp, 8
 * 0000000140421C01: call    loc_140421BF4
 * 0000000140421C06: add     rsp, 8
 * 0000000140421C0A: call    loc_140421BFD
 * 0000000140421C0F: add     rsp, 8
 * 0000000140421C13: call    loc_140421C06
 * 0000000140421C18: add     rsp, 8
 * 0000000140421C1C: call    loc_140421C0F
 * 0000000140421C21: add     rsp, 8
 * 0000000140421C25: call    loc_140421C18
 * 0000000140421C2A: add     rsp, 8
 * 0000000140421C2E: call    loc_140421C21
 * 0000000140421C33: add     rsp, 8
 * 0000000140421C37: call    loc_140421C2A
 * 0000000140421C3C: add     rsp, 8
 * 0000000140421C40: call    loc_140421C33
 * 0000000140421C45: add     rsp, 8
 * 0000000140421C49: call    loc_140421C3C
 * 0000000140421C4E: add     rsp, 8
 * 0000000140421C52: call    loc_140421C45
 * 0000000140421C57: add     rsp, 8
 * 0000000140421C5B: call    loc_140421C4E
 * 0000000140421C60: add     rsp, 8
 * 0000000140421C64: call    loc_140421C57
 * 0000000140421C69: add     rsp, 8
 * 0000000140421C6D: call    loc_140421C60
 * 0000000140421C72: add     rsp, 8
 * 0000000140421C76: call    loc_140421C69
 * 0000000140421C7B: add     rsp, 8
 * 0000000140421C7F: call    loc_140421C72
 * 0000000140421C84: add     rsp, 8
 * 0000000140421C88: call    loc_140421C7B
 * 0000000140421C8D: add     rsp, 8
 * 0000000140421C91: call    loc_140421C84
 * 0000000140421C96: add     rsp, 8
 * 0000000140421C9A: mov     eax, 0DADAh
 * 0000000140421C9F: test    byte ptr gs:862h, 8
 * 0000000140421CA8: jz      short loc_140421CB1
 * 0000000140421CAA: mov     al, 20h ; ' '
 * 0000000140421CAC: incsspq rax
 * 0000000140421CB1: test    word ptr gs:860h, 80h
 * 0000000140421CBC: jz      short loc_140421CCA
 * 0000000140421CBE: xor     eax, eax
 * 0000000140421CC0: xor     edx, edx
 * 0000000140421CC2: mov     ecx, 1
 * 0000000140421CC7: div     rcx
 * 0000000140421CCA: mov     rdx, [rbp-40h]
 * 0000000140421CCE: mov     rcx, [rbp-48h]
 * 0000000140421CD2: mov     rax, [rbp-50h]
 * 0000000140421CD6: mov     rsp, rbp
 * 0000000140421CD9: mov     rbp, [rbp+0D8h]
 * 0000000140421CE0: add     rsp, 0E8h
 * 0000000140421CE7: test    cs:KiKvaShadow, 1
 * 0000000140421CEE: jz      short loc_140421CF5
 * 0000000140421CF0: jmp     KiKernelExit
 * 0000000140421CF5: test    word ptr gs:860h, 100h
 * 0000000140421D00: jz      short loc_140421D07
 * 0000000140421D02: verw    [rsp-1C8h+arg_1E0]
 * 0000000140421D07: swapgs
 * 0000000140421D0A: iretq
 * 0000000140421D0C: ldmxcsr dword ptr [rbp-54h]
 * 0000000140421D10: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140421D14: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140421D18: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140421D1C: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140421D20: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140421D24: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140421D28: mov     r11, [rbp-20h]
 * 0000000140421D2C: mov     r10, [rbp-28h]
 * 0000000140421D30: mov     r9, [rbp-30h]
 * 0000000140421D34: mov     r8, [rbp-38h]
 * 0000000140421D38: mov     rdx, [rbp-40h]
 * 0000000140421D3C: mov     rcx, [rbp-48h]
 * 0000000140421D40: mov     rax, [rbp-50h]
 * 0000000140421D44: mov     rsp, rbp
 * 0000000140421D47: mov     rbp, [rbp+0D8h]
 * 0000000140421D4E: add     rsp, 0E8h
 * 0000000140421D55: iretq
 */
