/*
 * XREFs of KiInterruptDispatchNoLockNoEtw @ 0x140421880
 * Callers:
 *     <none>
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140254DD0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140309040 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x140331AA0 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x14041F2B0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1404200D0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x140420EF0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140421880 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInitiateUserApc @ 0x1404251B0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140427D70 (KiDpcInterruptBypass.c)
 *     KiUpdateStibpPairing @ 0x140461220 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C720 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405746E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLockNoEtw @ 0x140421880
 * Reason: Hex-Rays returned no pseudocode for 0x140421880
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140421880: mov     rdx, rsp
 * 0000000140421883: mov     rcx, gs:8B58h
 * 000000014042188C: lea     rax, [rcx-6000h]
 * 0000000140421893: cmp     rax, rsp
 * 0000000140421896: ja      short loc_14042189D
 * 0000000140421898: cmp     rsp, rcx
 * 000000014042189B: jb      short loc_1404218A9
 * 000000014042189D: cmp     cs:KiBugCheckActive, 0
 * 00000001404218A4: jnz     short loc_1404218A9
 * 00000001404218A6: mov     rsp, rcx
 * 00000001404218A9: sub     rsp, 20h
 * 00000001404218AD: mov     [rsp+20h+var_10], rdx
 * 00000001404218B2: call    KiInterruptSubDispatchNoLockNoEtw
 * 00000001404218B7: mov     rsp, [rsp+20h+var_10]
 * 00000001404218BC: mov     rcx, rsi
 * 00000001404218BF: call    HalPerformEndOfInterrupt
 * 00000001404218C4: mov     rcx, gs:20h
 * 00000001404218CD: cmp     byte ptr [rcx+20h], 1
 * 00000001404218D1: ja      short loc_14042194D
 * 00000001404218D3: rdtsc
 * 00000001404218D5: shl     rdx, 20h
 * 00000001404218D9: or      rax, rdx
 * 00000001404218DC: sub     rax, [rcx+8180h]
 * 00000001404218E3: add     [rcx+8278h], rax
 * 00000001404218EA: add     [rcx+8180h], rax
 * 00000001404218F1: mov     r8, rax
 * 00000001404218F4: mov     rax, [rcx+8]
 * 00000001404218F8: test    byte ptr [rax+2], 72h
 * 00000001404218FC: jz      short loc_140421911
 * 00000001404218FE: xor     edx, edx
 * 0000000140421900: call    KiBeginThreadAccountingPeriod
 * 0000000140421905: mov     rcx, gs:20h
 * 000000014042190E: inc     byte ptr [rcx+20h]
 * 0000000140421911: mov     dl, [rcx+6]
 * 0000000140421914: and     byte ptr [rcx+6], 0
 * 0000000140421918: cmp     byte ptr [rcx+7], 0
 * 000000014042191C: jnz     short loc_14042194D
 * 000000014042191E: test    dl, dl
 * 0000000140421920: jz      short loc_14042194D
 * 0000000140421922: cmp     byte ptr [rbp-57h], 2
 * 0000000140421926: jnb     short loc_140421933
 * 0000000140421928: and     byte ptr [rcx+20h], 0
 * 000000014042192C: call    KiDpcInterruptBypass
 * 0000000140421931: jmp     short loc_140421950
 * 0000000140421933: mov     ecx, 2
 * 0000000140421938: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014042193F: nop     dword ptr [rax+rax+00h]
 * 0000000140421944: mov     rcx, gs:20h
 * 000000014042194D: dec     byte ptr [rcx+20h]
 * 0000000140421950: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140421954: cmp     cs:KiIrqlFlags, 0
 * 000000014042195B: jz      short loc_140421964
 * 000000014042195D: call    KzSetIrqlUnsafe
 * 0000000140421962: jmp     short loc_140421968
 * 0000000140421964: mov     cr8, rcx
 * 0000000140421968: mov     rsi, [rbp+0D0h]
 * 000000014042196F: test    byte ptr [rbp+0F0h], 1
 * 0000000140421976: jz      loc_140421C64
 * 000000014042197C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140421983: jz      short loc_140421988
 * 0000000140421985: stac
 * 0000000140421988: mov     rcx, gs:188h
 * 0000000140421991: test    byte ptr [rcx+0C2h], 3
 * 0000000140421998: jz      short loc_1404219B5
 * 000000014042199A: mov     ecx, 1
 * 000000014042199F: mov     cr8, rcx
 * 00000001404219A3: sti
 * 00000001404219A4: call    KiInitiateUserApc
 * 00000001404219A9: cli
 * 00000001404219AA: mov     ecx, 0
 * 00000001404219AF: mov     cr8, rcx
 * 00000001404219B3: jmp     short loc_140421988
 * 00000001404219B5: test    byte ptr gs:86Ch, 2
 * 00000001404219BE: jz      short loc_1404219C7
 * 00000001404219C0: xor     ecx, ecx
 * 00000001404219C2: call    KiUpdateStibpPairing
 * 00000001404219C7: mov     rcx, gs:188h
 * 00000001404219D0: test    dword ptr [rcx], 8000000h
 * 00000001404219D6: jz      short loc_1404219DD
 * 00000001404219D8: call    KiRestoreSetContextState
 * 00000001404219DD: mov     rcx, gs:188h
 * 00000001404219E6: test    dword ptr [rcx], 10000h
 * 00000001404219EC: jz      short loc_140421A02
 * 00000001404219EE: test    byte ptr [rcx+2], 1
 * 00000001404219F2: jz      short loc_140421A02
 * 00000001404219F4: call    KiCopyCounters
 * 00000001404219F9: mov     rcx, gs:188h
 * 0000000140421A02: ldmxcsr dword ptr [rbp-54h]
 * 0000000140421A06: cmp     word ptr [rbp+80h], 0
 * 0000000140421A0E: jz      short loc_140421A15
 * 0000000140421A10: call    KiRestoreDebugRegisterState
 * 0000000140421A15: mov     rcx, gs:188h
 * 0000000140421A1E: bt      dword ptr [rcx+74h], 16h
 * 0000000140421A23: jnb     short loc_140421A4F
 * 0000000140421A25: xor     ecx, ecx
 * 0000000140421A27: rdsspq  rcx
 * 0000000140421A2C: mov     r8, gs:95A8h
 * 0000000140421A35: add     r8, 8
 * 0000000140421A39: cmp     rcx, r8
 * 0000000140421A3C: jnz     short loc_140421A4F
 * 0000000140421A3E: mov     rcx, gs:95A0h
 * 0000000140421A47: rstorssp qword ptr [rcx]
 * 0000000140421A4B: saveprevssp
 * 0000000140421A4F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140421A53: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140421A57: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140421A5B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140421A5F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140421A63: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140421A67: mov     r11, [rbp-20h]
 * 0000000140421A6B: mov     r10, [rbp-28h]
 * 0000000140421A6F: mov     r9, [rbp-30h]
 * 0000000140421A73: mov     r8, [rbp-38h]
 * 0000000140421A77: mov     byte ptr gs:856h, 0
 * 0000000140421A80: movzx   eax, word ptr gs:86Ah
 * 0000000140421A89: cmp     gs:864h, ax
 * 0000000140421A92: jz      short loc_140421AA6
 * 0000000140421A94: mov     gs:864h, ax
 * 0000000140421A9D: mov     ecx, 48h ; 'H'
 * 0000000140421AA2: xor     edx, edx
 * 0000000140421AA4: wrmsr
 * 0000000140421AA6: btr     word ptr gs:860h, 2
 * 0000000140421AB1: jnb     short loc_140421AC1
 * 0000000140421AB3: mov     eax, 1
 * 0000000140421AB8: xor     edx, edx
 * 0000000140421ABA: mov     ecx, 49h ; 'I'
 * 0000000140421ABF: wrmsr
 * 0000000140421AC1: btr     word ptr gs:860h, 5
 * 0000000140421ACC: jnb     loc_140421C09
 * 0000000140421AD2: call    loc_140421BE5
 * 0000000140421AD7: add     rsp, 8
 * 0000000140421ADB: call    loc_140421BEE
 * 0000000140421AE0: add     rsp, 8
 * 0000000140421AE4: call    loc_140421AD7
 * 0000000140421AE9: add     rsp, 8
 * 0000000140421AED: call    loc_140421AE0
 * 0000000140421AF2: add     rsp, 8
 * 0000000140421AF6: call    loc_140421AE9
 * 0000000140421AFB: add     rsp, 8
 * 0000000140421AFF: call    loc_140421AF2
 * 0000000140421B04: add     rsp, 8
 * 0000000140421B08: call    loc_140421AFB
 * 0000000140421B0D: add     rsp, 8
 * 0000000140421B11: call    loc_140421B04
 * 0000000140421B16: add     rsp, 8
 * 0000000140421B1A: call    loc_140421B0D
 * 0000000140421B1F: add     rsp, 8
 * 0000000140421B23: call    loc_140421B16
 * 0000000140421B28: add     rsp, 8
 * 0000000140421B2C: call    loc_140421B1F
 * 0000000140421B31: add     rsp, 8
 * 0000000140421B35: call    loc_140421B28
 * 0000000140421B3A: add     rsp, 8
 * 0000000140421B3E: call    loc_140421B31
 * 0000000140421B43: add     rsp, 8
 * 0000000140421B47: call    loc_140421B3A
 * 0000000140421B4C: add     rsp, 8
 * 0000000140421B50: call    loc_140421B43
 * 0000000140421B55: add     rsp, 8
 * 0000000140421B59: call    loc_140421B4C
 * 0000000140421B5E: add     rsp, 8
 * 0000000140421B62: call    loc_140421B55
 * 0000000140421B67: add     rsp, 8
 * 0000000140421B6B: call    loc_140421B5E
 * 0000000140421B70: add     rsp, 8
 * 0000000140421B74: call    loc_140421B67
 * 0000000140421B79: add     rsp, 8
 * 0000000140421B7D: call    loc_140421B70
 * 0000000140421B82: add     rsp, 8
 * 0000000140421B86: call    loc_140421B79
 * 0000000140421B8B: add     rsp, 8
 * 0000000140421B8F: call    loc_140421B82
 * 0000000140421B94: add     rsp, 8
 * 0000000140421B98: call    loc_140421B8B
 * 0000000140421B9D: add     rsp, 8
 * 0000000140421BA1: call    loc_140421B94
 * 0000000140421BA6: add     rsp, 8
 * 0000000140421BAA: call    loc_140421B9D
 * 0000000140421BAF: add     rsp, 8
 * 0000000140421BB3: call    loc_140421BA6
 * 0000000140421BB8: add     rsp, 8
 * 0000000140421BBC: call    loc_140421BAF
 * 0000000140421BC1: add     rsp, 8
 * 0000000140421BC5: call    loc_140421BB8
 * 0000000140421BCA: add     rsp, 8
 * 0000000140421BCE: call    loc_140421BC1
 * 0000000140421BD3: add     rsp, 8
 * 0000000140421BD7: call    loc_140421BCA
 * 0000000140421BDC: add     rsp, 8
 * 0000000140421BE0: call    loc_140421BD3
 * 0000000140421BE5: add     rsp, 8
 * 0000000140421BE9: call    loc_140421BDC
 * 0000000140421BEE: add     rsp, 8
 * 0000000140421BF2: mov     eax, 0DADAh
 * 0000000140421BF7: test    byte ptr gs:862h, 8
 * 0000000140421C00: jz      short loc_140421C09
 * 0000000140421C02: mov     al, 20h ; ' '
 * 0000000140421C04: incsspq rax
 * 0000000140421C09: test    word ptr gs:860h, 80h
 * 0000000140421C14: jz      short loc_140421C22
 * 0000000140421C16: xor     eax, eax
 * 0000000140421C18: xor     edx, edx
 * 0000000140421C1A: mov     ecx, 1
 * 0000000140421C1F: div     rcx
 * 0000000140421C22: mov     rdx, [rbp-40h]
 * 0000000140421C26: mov     rcx, [rbp-48h]
 * 0000000140421C2A: mov     rax, [rbp-50h]
 * 0000000140421C2E: mov     rsp, rbp
 * 0000000140421C31: mov     rbp, [rbp+0D8h]
 * 0000000140421C38: add     rsp, 0E8h
 * 0000000140421C3F: test    cs:KiKvaShadow, 1
 * 0000000140421C46: jz      short loc_140421C4D
 * 0000000140421C48: jmp     KiKernelExit
 * 0000000140421C4D: test    word ptr gs:860h, 100h
 * 0000000140421C58: jz      short loc_140421C5F
 * 0000000140421C5A: verw    [rsp-1C8h+arg_1E0]
 * 0000000140421C5F: swapgs
 * 0000000140421C62: iretq
 * 0000000140421C64: ldmxcsr dword ptr [rbp-54h]
 * 0000000140421C68: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140421C6C: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140421C70: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140421C74: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140421C78: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140421C7C: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140421C80: mov     r11, [rbp-20h]
 * 0000000140421C84: mov     r10, [rbp-28h]
 * 0000000140421C88: mov     r9, [rbp-30h]
 * 0000000140421C8C: mov     r8, [rbp-38h]
 * 0000000140421C90: mov     rdx, [rbp-40h]
 * 0000000140421C94: mov     rcx, [rbp-48h]
 * 0000000140421C98: mov     rax, [rbp-50h]
 * 0000000140421C9C: mov     rsp, rbp
 * 0000000140421C9F: mov     rbp, [rbp+0D8h]
 * 0000000140421CA6: add     rsp, 0E8h
 * 0000000140421CAD: iretq
 */
