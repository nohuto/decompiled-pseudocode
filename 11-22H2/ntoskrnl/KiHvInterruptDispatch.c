/*
 * XREFs of KiHvInterruptDispatch @ 0x140425920
 * Callers:
 *     KiHvInterrupt @ 0x140424840 (KiHvInterrupt.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140254BF0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140308C80 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x140331670 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x14041E860 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041F680 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424760 (KiInitiateUserApc.c)
 *     KiHvInterruptDispatch @ 0x140425920 (KiHvInterruptDispatch.c)
 *     KiHvInterruptSubDispatch @ 0x1404261A0 (KiHvInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x140427320 (KiDpcInterruptBypass.c)
 *     KiUpdateStibpPairing @ 0x1404607C0 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C100 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140574240 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterruptDispatch @ 0x140425920
 * Reason: Hex-Rays returned no pseudocode for 0x140425920
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140425920: mov     rdx, rsp
 * 0000000140425923: mov     rcx, gs:8B58h
 * 000000014042592C: lea     rax, [rcx-6000h]
 * 0000000140425933: cmp     rax, rsp
 * 0000000140425936: ja      short loc_14042593D
 * 0000000140425938: cmp     rsp, rcx
 * 000000014042593B: jb      short loc_140425949
 * 000000014042593D: cmp     cs:KiBugCheckActive, 0
 * 0000000140425944: jnz     short loc_140425949
 * 0000000140425946: mov     rsp, rcx
 * 0000000140425949: sub     rsp, 20h
 * 000000014042594D: mov     [rsp+20h+var_10], rdx
 * 0000000140425952: call    KiHvInterruptSubDispatch
 * 0000000140425957: mov     rsp, [rsp+20h+var_10]
 * 000000014042595C: test    cs:HvlEnlightenments, 1000h
 * 0000000140425966: jz      short loc_140425970
 * 0000000140425968: mov     rcx, rsi
 * 000000014042596B: call    HalPerformEndOfInterrupt
 * 0000000140425970: cli
 * 0000000140425971: mov     rcx, gs:20h
 * 000000014042597A: cmp     byte ptr [rcx+20h], 1
 * 000000014042597E: ja      short loc_1404259FA
 * 0000000140425980: rdtsc
 * 0000000140425982: shl     rdx, 20h
 * 0000000140425986: or      rax, rdx
 * 0000000140425989: sub     rax, [rcx+8180h]
 * 0000000140425990: add     [rcx+8278h], rax
 * 0000000140425997: add     [rcx+8180h], rax
 * 000000014042599E: mov     r8, rax
 * 00000001404259A1: mov     rax, [rcx+8]
 * 00000001404259A5: test    byte ptr [rax+2], 72h
 * 00000001404259A9: jz      short loc_1404259BE
 * 00000001404259AB: xor     edx, edx
 * 00000001404259AD: call    KiBeginThreadAccountingPeriod
 * 00000001404259B2: mov     rcx, gs:20h
 * 00000001404259BB: inc     byte ptr [rcx+20h]
 * 00000001404259BE: mov     dl, [rcx+6]
 * 00000001404259C1: and     byte ptr [rcx+6], 0
 * 00000001404259C5: cmp     byte ptr [rcx+7], 0
 * 00000001404259C9: jnz     short loc_1404259FA
 * 00000001404259CB: test    dl, dl
 * 00000001404259CD: jz      short loc_1404259FA
 * 00000001404259CF: cmp     byte ptr [rbp-57h], 2
 * 00000001404259D3: jnb     short loc_1404259E0
 * 00000001404259D5: and     byte ptr [rcx+20h], 0
 * 00000001404259D9: call    KiDpcInterruptBypass
 * 00000001404259DE: jmp     short loc_1404259FD
 * 00000001404259E0: mov     ecx, 2
 * 00000001404259E5: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001404259EC: nop     dword ptr [rax+rax+00h]
 * 00000001404259F1: mov     rcx, gs:20h
 * 00000001404259FA: dec     byte ptr [rcx+20h]
 * 00000001404259FD: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140425A01: cmp     cs:KiIrqlFlags, 0
 * 0000000140425A08: jz      short loc_140425A11
 * 0000000140425A0A: call    KzSetIrqlUnsafe
 * 0000000140425A0F: jmp     short loc_140425A15
 * 0000000140425A11: mov     cr8, rcx
 * 0000000140425A15: mov     rsi, [rbp+0D0h]
 * 0000000140425A1C: cli
 * 0000000140425A1D: test    byte ptr [rbp+0F0h], 1
 * 0000000140425A24: jz      loc_140425D12
 * 0000000140425A2A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140425A31: jz      short loc_140425A36
 * 0000000140425A33: stac
 * 0000000140425A36: mov     rcx, gs:188h
 * 0000000140425A3F: test    byte ptr [rcx+0C2h], 3
 * 0000000140425A46: jz      short loc_140425A63
 * 0000000140425A48: mov     ecx, 1
 * 0000000140425A4D: mov     cr8, rcx
 * 0000000140425A51: sti
 * 0000000140425A52: call    KiInitiateUserApc
 * 0000000140425A57: cli
 * 0000000140425A58: mov     ecx, 0
 * 0000000140425A5D: mov     cr8, rcx
 * 0000000140425A61: jmp     short loc_140425A36
 * 0000000140425A63: test    byte ptr gs:86Ch, 2
 * 0000000140425A6C: jz      short loc_140425A75
 * 0000000140425A6E: xor     ecx, ecx
 * 0000000140425A70: call    KiUpdateStibpPairing
 * 0000000140425A75: mov     rcx, gs:188h
 * 0000000140425A7E: test    dword ptr [rcx], 8000000h
 * 0000000140425A84: jz      short loc_140425A8B
 * 0000000140425A86: call    KiRestoreSetContextState
 * 0000000140425A8B: mov     rcx, gs:188h
 * 0000000140425A94: test    dword ptr [rcx], 10000h
 * 0000000140425A9A: jz      short loc_140425AB0
 * 0000000140425A9C: test    byte ptr [rcx+2], 1
 * 0000000140425AA0: jz      short loc_140425AB0
 * 0000000140425AA2: call    KiCopyCounters
 * 0000000140425AA7: mov     rcx, gs:188h
 * 0000000140425AB0: ldmxcsr dword ptr [rbp-54h]
 * 0000000140425AB4: cmp     word ptr [rbp+80h], 0
 * 0000000140425ABC: jz      short loc_140425AC3
 * 0000000140425ABE: call    KiRestoreDebugRegisterState
 * 0000000140425AC3: mov     rcx, gs:188h
 * 0000000140425ACC: bt      dword ptr [rcx+74h], 16h
 * 0000000140425AD1: jnb     short loc_140425AFD
 * 0000000140425AD3: xor     ecx, ecx
 * 0000000140425AD5: rdsspq  rcx
 * 0000000140425ADA: mov     r8, gs:95A8h
 * 0000000140425AE3: add     r8, 8
 * 0000000140425AE7: cmp     rcx, r8
 * 0000000140425AEA: jnz     short loc_140425AFD
 * 0000000140425AEC: mov     rcx, gs:95A0h
 * 0000000140425AF5: rstorssp qword ptr [rcx]
 * 0000000140425AF9: saveprevssp
 * 0000000140425AFD: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140425B01: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140425B05: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140425B09: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140425B0D: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140425B11: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140425B15: mov     r11, [rbp-20h]
 * 0000000140425B19: mov     r10, [rbp-28h]
 * 0000000140425B1D: mov     r9, [rbp-30h]
 * 0000000140425B21: mov     r8, [rbp-38h]
 * 0000000140425B25: mov     byte ptr gs:856h, 0
 * 0000000140425B2E: movzx   eax, word ptr gs:86Ah
 * 0000000140425B37: cmp     gs:864h, ax
 * 0000000140425B40: jz      short loc_140425B54
 * 0000000140425B42: mov     gs:864h, ax
 * 0000000140425B4B: mov     ecx, 48h ; 'H'
 * 0000000140425B50: xor     edx, edx
 * 0000000140425B52: wrmsr
 * 0000000140425B54: btr     word ptr gs:860h, 2
 * 0000000140425B5F: jnb     short loc_140425B6F
 * 0000000140425B61: mov     eax, 1
 * 0000000140425B66: xor     edx, edx
 * 0000000140425B68: mov     ecx, 49h ; 'I'
 * 0000000140425B6D: wrmsr
 * 0000000140425B6F: btr     word ptr gs:860h, 5
 * 0000000140425B7A: jnb     loc_140425CB7
 * 0000000140425B80: call    loc_140425C93
 * 0000000140425B85: add     rsp, 8
 * 0000000140425B89: call    loc_140425C9C
 * 0000000140425B8E: add     rsp, 8
 * 0000000140425B92: call    loc_140425B85
 * 0000000140425B97: add     rsp, 8
 * 0000000140425B9B: call    loc_140425B8E
 * 0000000140425BA0: add     rsp, 8
 * 0000000140425BA4: call    loc_140425B97
 * 0000000140425BA9: add     rsp, 8
 * 0000000140425BAD: call    loc_140425BA0
 * 0000000140425BB2: add     rsp, 8
 * 0000000140425BB6: call    loc_140425BA9
 * 0000000140425BBB: add     rsp, 8
 * 0000000140425BBF: call    loc_140425BB2
 * 0000000140425BC4: add     rsp, 8
 * 0000000140425BC8: call    loc_140425BBB
 * 0000000140425BCD: add     rsp, 8
 * 0000000140425BD1: call    loc_140425BC4
 * 0000000140425BD6: add     rsp, 8
 * 0000000140425BDA: call    loc_140425BCD
 * 0000000140425BDF: add     rsp, 8
 * 0000000140425BE3: call    loc_140425BD6
 * 0000000140425BE8: add     rsp, 8
 * 0000000140425BEC: call    loc_140425BDF
 * 0000000140425BF1: add     rsp, 8
 * 0000000140425BF5: call    loc_140425BE8
 * 0000000140425BFA: add     rsp, 8
 * 0000000140425BFE: call    loc_140425BF1
 * 0000000140425C03: add     rsp, 8
 * 0000000140425C07: call    loc_140425BFA
 * 0000000140425C0C: add     rsp, 8
 * 0000000140425C10: call    loc_140425C03
 * 0000000140425C15: add     rsp, 8
 * 0000000140425C19: call    loc_140425C0C
 * 0000000140425C1E: add     rsp, 8
 * 0000000140425C22: call    loc_140425C15
 * 0000000140425C27: add     rsp, 8
 * 0000000140425C2B: call    loc_140425C1E
 * 0000000140425C30: add     rsp, 8
 * 0000000140425C34: call    loc_140425C27
 * 0000000140425C39: add     rsp, 8
 * 0000000140425C3D: call    loc_140425C30
 * 0000000140425C42: add     rsp, 8
 * 0000000140425C46: call    loc_140425C39
 * 0000000140425C4B: add     rsp, 8
 * 0000000140425C4F: call    loc_140425C42
 * 0000000140425C54: add     rsp, 8
 * 0000000140425C58: call    loc_140425C4B
 * 0000000140425C5D: add     rsp, 8
 * 0000000140425C61: call    loc_140425C54
 * 0000000140425C66: add     rsp, 8
 * 0000000140425C6A: call    loc_140425C5D
 * 0000000140425C6F: add     rsp, 8
 * 0000000140425C73: call    loc_140425C66
 * 0000000140425C78: add     rsp, 8
 * 0000000140425C7C: call    loc_140425C6F
 * 0000000140425C81: add     rsp, 8
 * 0000000140425C85: call    loc_140425C78
 * 0000000140425C8A: add     rsp, 8
 * 0000000140425C8E: call    loc_140425C81
 * 0000000140425C93: add     rsp, 8
 * 0000000140425C97: call    loc_140425C8A
 * 0000000140425C9C: add     rsp, 8
 * 0000000140425CA0: mov     eax, 0DADAh
 * 0000000140425CA5: test    byte ptr gs:862h, 8
 * 0000000140425CAE: jz      short loc_140425CB7
 * 0000000140425CB0: mov     al, 20h ; ' '
 * 0000000140425CB2: incsspq rax
 * 0000000140425CB7: test    word ptr gs:860h, 80h
 * 0000000140425CC2: jz      short loc_140425CD0
 * 0000000140425CC4: xor     eax, eax
 * 0000000140425CC6: xor     edx, edx
 * 0000000140425CC8: mov     ecx, 1
 * 0000000140425CCD: div     rcx
 * 0000000140425CD0: mov     rdx, [rbp-40h]
 * 0000000140425CD4: mov     rcx, [rbp-48h]
 * 0000000140425CD8: mov     rax, [rbp-50h]
 * 0000000140425CDC: mov     rsp, rbp
 * 0000000140425CDF: mov     rbp, [rbp+0D8h]
 * 0000000140425CE6: add     rsp, 0E8h
 * 0000000140425CED: test    cs:KiKvaShadow, 1
 * 0000000140425CF4: jz      short loc_140425CFB
 * 0000000140425CF6: jmp     KiKernelExit
 * 0000000140425CFB: test    word ptr gs:860h, 100h
 * 0000000140425D06: jz      short loc_140425D0D
 * 0000000140425D08: verw    [rsp-1C8h+arg_1E0]
 * 0000000140425D0D: swapgs
 * 0000000140425D10: iretq
 * 0000000140425D12: ldmxcsr dword ptr [rbp-54h]
 * 0000000140425D16: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140425D1A: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140425D1E: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140425D22: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140425D26: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140425D2A: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140425D2E: mov     r11, [rbp-20h]
 * 0000000140425D32: mov     r10, [rbp-28h]
 * 0000000140425D36: mov     r9, [rbp-30h]
 * 0000000140425D3A: mov     r8, [rbp-38h]
 * 0000000140425D3E: mov     rdx, [rbp-40h]
 * 0000000140425D42: mov     rcx, [rbp-48h]
 * 0000000140425D46: mov     rax, [rbp-50h]
 * 0000000140425D4A: mov     rsp, rbp
 * 0000000140425D4D: mov     rbp, [rbp+0D8h]
 * 0000000140425D54: add     rsp, 0E8h
 * 0000000140425D5B: iretq
 */
