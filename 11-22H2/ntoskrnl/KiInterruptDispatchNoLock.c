/*
 * XREFs of KiInterruptDispatchNoLock @ 0x1404209F0
 * Callers:
 *     <none>
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140254BF0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140308C80 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x140331670 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x14041E860 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041F680 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x140420350 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoLock @ 0x1404209F0 (KiInterruptDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x140424760 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140427320 (KiDpcInterruptBypass.c)
 *     KiUpdateStibpPairing @ 0x1404607C0 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C100 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140574240 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLock @ 0x1404209F0
 * Reason: Hex-Rays returned no pseudocode for 0x1404209F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404209F0: mov     rdx, rsp
 * 00000001404209F3: mov     rcx, gs:8B58h
 * 00000001404209FC: lea     rax, [rcx-6000h]
 * 0000000140420A03: cmp     rax, rsp
 * 0000000140420A06: ja      short loc_140420A0D
 * 0000000140420A08: cmp     rsp, rcx
 * 0000000140420A0B: jb      short loc_140420A19
 * 0000000140420A0D: cmp     cs:KiBugCheckActive, 0
 * 0000000140420A14: jnz     short loc_140420A19
 * 0000000140420A16: mov     rsp, rcx
 * 0000000140420A19: sub     rsp, 20h
 * 0000000140420A1D: mov     [rsp+20h+var_10], rdx
 * 0000000140420A22: call    KiInterruptSubDispatchNoLock
 * 0000000140420A27: mov     rsp, [rsp+20h+var_10]
 * 0000000140420A2C: mov     rcx, rsi
 * 0000000140420A2F: call    HalPerformEndOfInterrupt
 * 0000000140420A34: mov     rcx, gs:20h
 * 0000000140420A3D: cmp     byte ptr [rcx+20h], 1
 * 0000000140420A41: ja      short loc_140420ABD
 * 0000000140420A43: rdtsc
 * 0000000140420A45: shl     rdx, 20h
 * 0000000140420A49: or      rax, rdx
 * 0000000140420A4C: sub     rax, [rcx+8180h]
 * 0000000140420A53: add     [rcx+8278h], rax
 * 0000000140420A5A: add     [rcx+8180h], rax
 * 0000000140420A61: mov     r8, rax
 * 0000000140420A64: mov     rax, [rcx+8]
 * 0000000140420A68: test    byte ptr [rax+2], 72h
 * 0000000140420A6C: jz      short loc_140420A81
 * 0000000140420A6E: xor     edx, edx
 * 0000000140420A70: call    KiBeginThreadAccountingPeriod
 * 0000000140420A75: mov     rcx, gs:20h
 * 0000000140420A7E: inc     byte ptr [rcx+20h]
 * 0000000140420A81: mov     dl, [rcx+6]
 * 0000000140420A84: and     byte ptr [rcx+6], 0
 * 0000000140420A88: cmp     byte ptr [rcx+7], 0
 * 0000000140420A8C: jnz     short loc_140420ABD
 * 0000000140420A8E: test    dl, dl
 * 0000000140420A90: jz      short loc_140420ABD
 * 0000000140420A92: cmp     byte ptr [rbp-57h], 2
 * 0000000140420A96: jnb     short loc_140420AA3
 * 0000000140420A98: and     byte ptr [rcx+20h], 0
 * 0000000140420A9C: call    KiDpcInterruptBypass
 * 0000000140420AA1: jmp     short loc_140420AC0
 * 0000000140420AA3: mov     ecx, 2
 * 0000000140420AA8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140420AAF: nop     dword ptr [rax+rax+00h]
 * 0000000140420AB4: mov     rcx, gs:20h
 * 0000000140420ABD: dec     byte ptr [rcx+20h]
 * 0000000140420AC0: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140420AC4: cmp     cs:KiIrqlFlags, 0
 * 0000000140420ACB: jz      short loc_140420AD4
 * 0000000140420ACD: call    KzSetIrqlUnsafe
 * 0000000140420AD2: jmp     short loc_140420AD8
 * 0000000140420AD4: mov     cr8, rcx
 * 0000000140420AD8: mov     rsi, [rbp+0D0h]
 * 0000000140420ADF: test    byte ptr [rbp+0F0h], 1
 * 0000000140420AE6: jz      loc_140420DD4
 * 0000000140420AEC: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140420AF3: jz      short loc_140420AF8
 * 0000000140420AF5: stac
 * 0000000140420AF8: mov     rcx, gs:188h
 * 0000000140420B01: test    byte ptr [rcx+0C2h], 3
 * 0000000140420B08: jz      short loc_140420B25
 * 0000000140420B0A: mov     ecx, 1
 * 0000000140420B0F: mov     cr8, rcx
 * 0000000140420B13: sti
 * 0000000140420B14: call    KiInitiateUserApc
 * 0000000140420B19: cli
 * 0000000140420B1A: mov     ecx, 0
 * 0000000140420B1F: mov     cr8, rcx
 * 0000000140420B23: jmp     short loc_140420AF8
 * 0000000140420B25: test    byte ptr gs:86Ch, 2
 * 0000000140420B2E: jz      short loc_140420B37
 * 0000000140420B30: xor     ecx, ecx
 * 0000000140420B32: call    KiUpdateStibpPairing
 * 0000000140420B37: mov     rcx, gs:188h
 * 0000000140420B40: test    dword ptr [rcx], 8000000h
 * 0000000140420B46: jz      short loc_140420B4D
 * 0000000140420B48: call    KiRestoreSetContextState
 * 0000000140420B4D: mov     rcx, gs:188h
 * 0000000140420B56: test    dword ptr [rcx], 10000h
 * 0000000140420B5C: jz      short loc_140420B72
 * 0000000140420B5E: test    byte ptr [rcx+2], 1
 * 0000000140420B62: jz      short loc_140420B72
 * 0000000140420B64: call    KiCopyCounters
 * 0000000140420B69: mov     rcx, gs:188h
 * 0000000140420B72: ldmxcsr dword ptr [rbp-54h]
 * 0000000140420B76: cmp     word ptr [rbp+80h], 0
 * 0000000140420B7E: jz      short loc_140420B85
 * 0000000140420B80: call    KiRestoreDebugRegisterState
 * 0000000140420B85: mov     rcx, gs:188h
 * 0000000140420B8E: bt      dword ptr [rcx+74h], 16h
 * 0000000140420B93: jnb     short loc_140420BBF
 * 0000000140420B95: xor     ecx, ecx
 * 0000000140420B97: rdsspq  rcx
 * 0000000140420B9C: mov     r8, gs:95A8h
 * 0000000140420BA5: add     r8, 8
 * 0000000140420BA9: cmp     rcx, r8
 * 0000000140420BAC: jnz     short loc_140420BBF
 * 0000000140420BAE: mov     rcx, gs:95A0h
 * 0000000140420BB7: rstorssp qword ptr [rcx]
 * 0000000140420BBB: saveprevssp
 * 0000000140420BBF: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140420BC3: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140420BC7: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140420BCB: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140420BCF: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140420BD3: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140420BD7: mov     r11, [rbp-20h]
 * 0000000140420BDB: mov     r10, [rbp-28h]
 * 0000000140420BDF: mov     r9, [rbp-30h]
 * 0000000140420BE3: mov     r8, [rbp-38h]
 * 0000000140420BE7: mov     byte ptr gs:856h, 0
 * 0000000140420BF0: movzx   eax, word ptr gs:86Ah
 * 0000000140420BF9: cmp     gs:864h, ax
 * 0000000140420C02: jz      short loc_140420C16
 * 0000000140420C04: mov     gs:864h, ax
 * 0000000140420C0D: mov     ecx, 48h ; 'H'
 * 0000000140420C12: xor     edx, edx
 * 0000000140420C14: wrmsr
 * 0000000140420C16: btr     word ptr gs:860h, 2
 * 0000000140420C21: jnb     short loc_140420C31
 * 0000000140420C23: mov     eax, 1
 * 0000000140420C28: xor     edx, edx
 * 0000000140420C2A: mov     ecx, 49h ; 'I'
 * 0000000140420C2F: wrmsr
 * 0000000140420C31: btr     word ptr gs:860h, 5
 * 0000000140420C3C: jnb     loc_140420D79
 * 0000000140420C42: call    loc_140420D55
 * 0000000140420C47: add     rsp, 8
 * 0000000140420C4B: call    loc_140420D5E
 * 0000000140420C50: add     rsp, 8
 * 0000000140420C54: call    loc_140420C47
 * 0000000140420C59: add     rsp, 8
 * 0000000140420C5D: call    loc_140420C50
 * 0000000140420C62: add     rsp, 8
 * 0000000140420C66: call    loc_140420C59
 * 0000000140420C6B: add     rsp, 8
 * 0000000140420C6F: call    loc_140420C62
 * 0000000140420C74: add     rsp, 8
 * 0000000140420C78: call    loc_140420C6B
 * 0000000140420C7D: add     rsp, 8
 * 0000000140420C81: call    loc_140420C74
 * 0000000140420C86: add     rsp, 8
 * 0000000140420C8A: call    loc_140420C7D
 * 0000000140420C8F: add     rsp, 8
 * 0000000140420C93: call    loc_140420C86
 * 0000000140420C98: add     rsp, 8
 * 0000000140420C9C: call    loc_140420C8F
 * 0000000140420CA1: add     rsp, 8
 * 0000000140420CA5: call    loc_140420C98
 * 0000000140420CAA: add     rsp, 8
 * 0000000140420CAE: call    loc_140420CA1
 * 0000000140420CB3: add     rsp, 8
 * 0000000140420CB7: call    loc_140420CAA
 * 0000000140420CBC: add     rsp, 8
 * 0000000140420CC0: call    loc_140420CB3
 * 0000000140420CC5: add     rsp, 8
 * 0000000140420CC9: call    loc_140420CBC
 * 0000000140420CCE: add     rsp, 8
 * 0000000140420CD2: call    loc_140420CC5
 * 0000000140420CD7: add     rsp, 8
 * 0000000140420CDB: call    loc_140420CCE
 * 0000000140420CE0: add     rsp, 8
 * 0000000140420CE4: call    loc_140420CD7
 * 0000000140420CE9: add     rsp, 8
 * 0000000140420CED: call    loc_140420CE0
 * 0000000140420CF2: add     rsp, 8
 * 0000000140420CF6: call    loc_140420CE9
 * 0000000140420CFB: add     rsp, 8
 * 0000000140420CFF: call    loc_140420CF2
 * 0000000140420D04: add     rsp, 8
 * 0000000140420D08: call    loc_140420CFB
 * 0000000140420D0D: add     rsp, 8
 * 0000000140420D11: call    loc_140420D04
 * 0000000140420D16: add     rsp, 8
 * 0000000140420D1A: call    loc_140420D0D
 * 0000000140420D1F: add     rsp, 8
 * 0000000140420D23: call    loc_140420D16
 * 0000000140420D28: add     rsp, 8
 * 0000000140420D2C: call    loc_140420D1F
 * 0000000140420D31: add     rsp, 8
 * 0000000140420D35: call    loc_140420D28
 * 0000000140420D3A: add     rsp, 8
 * 0000000140420D3E: call    loc_140420D31
 * 0000000140420D43: add     rsp, 8
 * 0000000140420D47: call    loc_140420D3A
 * 0000000140420D4C: add     rsp, 8
 * 0000000140420D50: call    loc_140420D43
 * 0000000140420D55: add     rsp, 8
 * 0000000140420D59: call    loc_140420D4C
 * 0000000140420D5E: add     rsp, 8
 * 0000000140420D62: mov     eax, 0DADAh
 * 0000000140420D67: test    byte ptr gs:862h, 8
 * 0000000140420D70: jz      short loc_140420D79
 * 0000000140420D72: mov     al, 20h ; ' '
 * 0000000140420D74: incsspq rax
 * 0000000140420D79: test    word ptr gs:860h, 80h
 * 0000000140420D84: jz      short loc_140420D92
 * 0000000140420D86: xor     eax, eax
 * 0000000140420D88: xor     edx, edx
 * 0000000140420D8A: mov     ecx, 1
 * 0000000140420D8F: div     rcx
 * 0000000140420D92: mov     rdx, [rbp-40h]
 * 0000000140420D96: mov     rcx, [rbp-48h]
 * 0000000140420D9A: mov     rax, [rbp-50h]
 * 0000000140420D9E: mov     rsp, rbp
 * 0000000140420DA1: mov     rbp, [rbp+0D8h]
 * 0000000140420DA8: add     rsp, 0E8h
 * 0000000140420DAF: test    cs:KiKvaShadow, 1
 * 0000000140420DB6: jz      short loc_140420DBD
 * 0000000140420DB8: jmp     KiKernelExit
 * 0000000140420DBD: test    word ptr gs:860h, 100h
 * 0000000140420DC8: jz      short loc_140420DCF
 * 0000000140420DCA: verw    [rsp-1C8h+arg_1E0]
 * 0000000140420DCF: swapgs
 * 0000000140420DD2: iretq
 * 0000000140420DD4: ldmxcsr dword ptr [rbp-54h]
 * 0000000140420DD8: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140420DDC: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140420DE0: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140420DE4: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140420DE8: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140420DEC: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140420DF0: mov     r11, [rbp-20h]
 * 0000000140420DF4: mov     r10, [rbp-28h]
 * 0000000140420DF8: mov     r9, [rbp-30h]
 * 0000000140420DFC: mov     r8, [rbp-38h]
 * 0000000140420E00: mov     rdx, [rbp-40h]
 * 0000000140420E04: mov     rcx, [rbp-48h]
 * 0000000140420E08: mov     rax, [rbp-50h]
 * 0000000140420E0C: mov     rsp, rbp
 * 0000000140420E0F: mov     rbp, [rbp+0D8h]
 * 0000000140420E16: add     rsp, 0E8h
 * 0000000140420E1D: iretq
 */
