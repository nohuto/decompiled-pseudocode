/*
 * XREFs of KiFastFailDispatch @ 0x140434840
 * Callers:
 *     KiBoundFault @ 0x14042CC00 (KiBoundFault.c)
 *     KiControlProtectionFault @ 0x140431B40 (KiControlProtectionFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x140432280 (KiRaiseSecurityCheckFailure.c)
 * Callees:
 *     KiDispatchException @ 0x14030CAC0 (KiDispatchException.c)
 *     KiRestoreDebugRegisterState @ 0x14041E860 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041F680 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424760 (KiInitiateUserApc.c)
 *     KiBugCheckDispatch @ 0x1404342C0 (KiBugCheckDispatch.c)
 *     KiFastFailDispatch @ 0x140434840 (KiFastFailDispatch.c)
 *     KiUpdateStibpPairing @ 0x1404607C0 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x140574240 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiFastFailDispatch @ 0x140434840
 * Reason: Hex-Rays returned no pseudocode for 0x140434840
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140434840: sub     rsp, 1D8h
 * 0000000140434847: lea     rax, [rsp+1D8h+var_D8]
 * 000000014043484F: movaps  [rsp+1D8h+var_1A8], xmm6
 * 0000000140434854: movaps  [rsp+1D8h+var_198], xmm7
 * 0000000140434859: movaps  [rsp+1D8h+var_188], xmm8
 * 000000014043485F: movaps  [rsp+1D8h+var_178], xmm9
 * 0000000140434865: movaps  [rsp+1D8h+var_168], xmm10
 * 000000014043486B: movaps  xmmword ptr [rax-80h], xmm11
 * 0000000140434870: movaps  xmmword ptr [rax-70h], xmm12
 * 0000000140434875: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014043487A: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014043487F: movaps  xmmword ptr [rax-40h], xmm15
 * 0000000140434884: mov     [rax], rbx
 * 0000000140434887: mov     [rax+8], rdi
 * 000000014043488B: mov     [rax+10h], rsi
 * 000000014043488F: mov     [rax+18h], r12
 * 0000000140434893: mov     [rax+20h], r13
 * 0000000140434897: mov     [rax+28h], r14
 * 000000014043489B: mov     [rax+30h], r15
 * 000000014043489F: lea     rax, [rsp+1D8h+ExceptionRecord]
 * 00000001404348A7: mov     [rax], ecx
 * 00000001404348A9: xor     ecx, ecx
 * 00000001404348AB: mov     dword ptr [rax+4], 1
 * 00000001404348B2: mov     [rax+8], rcx
 * 00000001404348B6: mov     [rax+10h], r8
 * 00000001404348BA: mov     [rax+18h], edx
 * 00000001404348BD: mov     [rax+20h], r9
 * 00000001404348C1: mov     [rax+28h], r10
 * 00000001404348C5: mov     [rax+30h], r11
 * 00000001404348C9: mov     r9b, [rbp+0F0h]
 * 00000001404348D0: and     r9b, 1
 * 00000001404348D4: cmp     r9b, 0
 * 00000001404348D8: jnz     short loc_1404348F2
 * 00000001404348DA: mov     rdx, [rax+20h]
 * 00000001404348DE: xor     r10, r10
 * 00000001404348E1: mov     r9, rax
 * 00000001404348E4: lea     r8, [rbp-80h]
 * 00000001404348E8: mov     ecx, 139h
 * 00000001404348ED: call    KiBugCheckDispatch
 * 00000001404348F2: mov     [rsp+1D8h+var_1B8], 0; char
 * 00000001404348F7: lea     r8, [rbp-80h]
 * 00000001404348FB: mov     rdx, rsp
 * 00000001404348FE: mov     rcx, rax; ExceptionRecord
 * 0000000140434901: call    KiDispatchException
 * 0000000140434906: lea     rcx, [rsp+1D8h+var_D8]
 * 000000014043490E: movaps  xmm6, [rsp+1D8h+var_1A8]
 * 0000000140434913: movaps  xmm7, [rsp+1D8h+var_198]
 * 0000000140434918: movaps  xmm8, [rsp+1D8h+var_188]
 * 000000014043491E: movaps  xmm9, [rsp+1D8h+var_178]
 * 0000000140434924: movaps  xmm10, [rsp+1D8h+var_168]
 * 000000014043492A: movaps  xmm11, xmmword ptr [rcx-80h]
 * 000000014043492F: movaps  xmm12, xmmword ptr [rcx-70h]
 * 0000000140434934: movaps  xmm13, xmmword ptr [rcx-60h]
 * 0000000140434939: movaps  xmm14, xmmword ptr [rcx-50h]
 * 000000014043493E: movaps  xmm15, xmmword ptr [rcx-40h]
 * 0000000140434943: mov     rbx, [rcx]
 * 0000000140434946: mov     rdi, [rcx+8]
 * 000000014043494A: mov     rsi, [rcx+10h]
 * 000000014043494E: mov     r12, [rcx+18h]
 * 0000000140434952: mov     r13, [rcx+20h]
 * 0000000140434956: mov     r14, [rcx+28h]
 * 000000014043495A: mov     r15, [rcx+30h]
 * 000000014043495E: cli
 * 000000014043495F: xor     ecx, ecx
 * 0000000140434961: rdsspq  rcx
 * 0000000140434966: test    rcx, rcx
 * 0000000140434969: jz      short loc_140434975
 * 000000014043496B: mov     ecx, 1
 * 0000000140434970: incsspq rcx
 * 0000000140434975: test    byte ptr [rbp+0F0h], 1
 * 000000014043497C: jz      loc_140434C6A
 * 0000000140434982: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140434989: jz      short loc_14043498E
 * 000000014043498B: stac
 * 000000014043498E: mov     rcx, gs:188h
 * 0000000140434997: test    byte ptr [rcx+0C2h], 3
 * 000000014043499E: jz      short loc_1404349BB
 * 00000001404349A0: mov     ecx, 1
 * 00000001404349A5: mov     cr8, rcx
 * 00000001404349A9: sti
 * 00000001404349AA: call    KiInitiateUserApc
 * 00000001404349AF: cli
 * 00000001404349B0: mov     ecx, 0
 * 00000001404349B5: mov     cr8, rcx
 * 00000001404349B9: jmp     short loc_14043498E
 * 00000001404349BB: test    byte ptr gs:86Ch, 2
 * 00000001404349C4: jz      short loc_1404349CD
 * 00000001404349C6: xor     ecx, ecx
 * 00000001404349C8: call    KiUpdateStibpPairing
 * 00000001404349CD: mov     rcx, gs:188h
 * 00000001404349D6: test    dword ptr [rcx], 8000000h
 * 00000001404349DC: jz      short loc_1404349E3
 * 00000001404349DE: call    KiRestoreSetContextState
 * 00000001404349E3: mov     rcx, gs:188h
 * 00000001404349EC: test    dword ptr [rcx], 10000h
 * 00000001404349F2: jz      short loc_140434A08
 * 00000001404349F4: test    byte ptr [rcx+2], 1
 * 00000001404349F8: jz      short loc_140434A08
 * 00000001404349FA: call    KiCopyCounters
 * 00000001404349FF: mov     rcx, gs:188h
 * 0000000140434A08: ldmxcsr dword ptr [rbp-54h]
 * 0000000140434A0C: cmp     word ptr [rbp+80h], 0
 * 0000000140434A14: jz      short loc_140434A1B
 * 0000000140434A16: call    KiRestoreDebugRegisterState
 * 0000000140434A1B: mov     rcx, gs:188h
 * 0000000140434A24: bt      dword ptr [rcx+74h], 16h
 * 0000000140434A29: jnb     short loc_140434A55
 * 0000000140434A2B: xor     ecx, ecx
 * 0000000140434A2D: rdsspq  rcx
 * 0000000140434A32: mov     r8, gs:95A8h
 * 0000000140434A3B: add     r8, 8
 * 0000000140434A3F: cmp     rcx, r8
 * 0000000140434A42: jnz     short loc_140434A55
 * 0000000140434A44: mov     rcx, gs:95A0h
 * 0000000140434A4D: rstorssp qword ptr [rcx]
 * 0000000140434A51: saveprevssp
 * 0000000140434A55: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140434A59: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140434A5D: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140434A61: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140434A65: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140434A69: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140434A6D: mov     r11, [rbp-20h]
 * 0000000140434A71: mov     r10, [rbp-28h]
 * 0000000140434A75: mov     r9, [rbp-30h]
 * 0000000140434A79: mov     r8, [rbp-38h]
 * 0000000140434A7D: mov     byte ptr gs:856h, 0
 * 0000000140434A86: movzx   eax, word ptr gs:86Ah
 * 0000000140434A8F: cmp     gs:864h, ax
 * 0000000140434A98: jz      short loc_140434AAC
 * 0000000140434A9A: mov     gs:864h, ax
 * 0000000140434AA3: mov     ecx, 48h ; 'H'
 * 0000000140434AA8: xor     edx, edx
 * 0000000140434AAA: wrmsr
 * 0000000140434AAC: btr     word ptr gs:860h, 2
 * 0000000140434AB7: jnb     short loc_140434AC7
 * 0000000140434AB9: mov     eax, 1
 * 0000000140434ABE: xor     edx, edx
 * 0000000140434AC0: mov     ecx, 49h ; 'I'
 * 0000000140434AC5: wrmsr
 * 0000000140434AC7: btr     word ptr gs:860h, 5
 * 0000000140434AD2: jnb     loc_140434C0F
 * 0000000140434AD8: call    loc_140434BEB
 * 0000000140434ADD: add     rsp, 8
 * 0000000140434AE1: call    loc_140434BF4
 * 0000000140434AE6: add     rsp, 8
 * 0000000140434AEA: call    loc_140434ADD
 * 0000000140434AEF: add     rsp, 8
 * 0000000140434AF3: call    loc_140434AE6
 * 0000000140434AF8: add     rsp, 8
 * 0000000140434AFC: call    loc_140434AEF
 * 0000000140434B01: add     rsp, 8
 * 0000000140434B05: call    loc_140434AF8
 * 0000000140434B0A: add     rsp, 8
 * 0000000140434B0E: call    loc_140434B01
 * 0000000140434B13: add     rsp, 8
 * 0000000140434B17: call    loc_140434B0A
 * 0000000140434B1C: add     rsp, 8
 * 0000000140434B20: call    loc_140434B13
 * 0000000140434B25: add     rsp, 8
 * 0000000140434B29: call    loc_140434B1C
 * 0000000140434B2E: add     rsp, 8
 * 0000000140434B32: call    loc_140434B25
 * 0000000140434B37: add     rsp, 8
 * 0000000140434B3B: call    loc_140434B2E
 * 0000000140434B40: add     rsp, 8
 * 0000000140434B44: call    loc_140434B37
 * 0000000140434B49: add     rsp, 8
 * 0000000140434B4D: call    loc_140434B40
 * 0000000140434B52: add     rsp, 8
 * 0000000140434B56: call    loc_140434B49
 * 0000000140434B5B: add     rsp, 8
 * 0000000140434B5F: call    loc_140434B52
 * 0000000140434B64: add     rsp, 8
 * 0000000140434B68: call    loc_140434B5B
 * 0000000140434B6D: add     rsp, 8
 * 0000000140434B71: call    loc_140434B64
 * 0000000140434B76: add     rsp, 8
 * 0000000140434B7A: call    loc_140434B6D
 * 0000000140434B7F: add     rsp, 8
 * 0000000140434B83: call    loc_140434B76
 * 0000000140434B88: add     rsp, 8
 * 0000000140434B8C: call    loc_140434B7F
 * 0000000140434B91: add     rsp, 8
 * 0000000140434B95: call    loc_140434B88
 * 0000000140434B9A: add     rsp, 8
 * 0000000140434B9E: call    loc_140434B91
 * 0000000140434BA3: add     rsp, 8
 * 0000000140434BA7: call    loc_140434B9A
 * 0000000140434BAC: add     rsp, 8
 * 0000000140434BB0: call    loc_140434BA3
 * 0000000140434BB5: add     rsp, 8
 * 0000000140434BB9: call    loc_140434BAC
 * 0000000140434BBE: add     rsp, 8
 * 0000000140434BC2: call    loc_140434BB5
 * 0000000140434BC7: add     rsp, 8
 * 0000000140434BCB: call    loc_140434BBE
 * 0000000140434BD0: add     rsp, 8
 * 0000000140434BD4: call    loc_140434BC7
 * 0000000140434BD9: add     rsp, 8
 * 0000000140434BDD: call    loc_140434BD0
 * 0000000140434BE2: add     rsp, 8
 * 0000000140434BE6: call    loc_140434BD9
 * 0000000140434BEB: add     rsp, 8
 * 0000000140434BEF: call    loc_140434BE2
 * 0000000140434BF4: add     rsp, 8
 * 0000000140434BF8: mov     eax, 0DADAh
 * 0000000140434BFD: test    byte ptr gs:862h, 8
 * 0000000140434C06: jz      short loc_140434C0F
 * 0000000140434C08: mov     al, 20h ; ' '
 * 0000000140434C0A: incsspq rax
 * 0000000140434C0F: test    word ptr gs:860h, 80h
 * 0000000140434C1A: jz      short loc_140434C28
 * 0000000140434C1C: xor     eax, eax
 * 0000000140434C1E: xor     edx, edx
 * 0000000140434C20: mov     ecx, 1
 * 0000000140434C25: div     rcx
 * 0000000140434C28: mov     rdx, [rbp-40h]
 * 0000000140434C2C: mov     rcx, [rbp-48h]
 * 0000000140434C30: mov     rax, [rbp-50h]
 * 0000000140434C34: mov     rsp, rbp
 * 0000000140434C37: mov     rbp, [rbp+0D8h]
 * 0000000140434C3E: add     rsp, 0E8h
 * 0000000140434C45: test    cs:KiKvaShadow, 1
 * 0000000140434C4C: jz      short loc_140434C53
 * 0000000140434C4E: jmp     KiKernelExit
 * 0000000140434C53: test    word ptr gs:860h, 100h
 * 0000000140434C5E: jz      short loc_140434C65
 * 0000000140434C60: verw    [rsp-1E8h+arg_200]
 * 0000000140434C65: swapgs
 * 0000000140434C68: iretq
 * 0000000140434C6A: ldmxcsr dword ptr [rbp-54h]
 * 0000000140434C6E: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140434C72: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140434C76: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140434C7A: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140434C7E: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140434C82: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140434C86: mov     r11, [rbp-20h]
 * 0000000140434C8A: mov     r10, [rbp-28h]
 * 0000000140434C8E: mov     r9, [rbp-30h]
 * 0000000140434C92: mov     r8, [rbp-38h]
 * 0000000140434C96: mov     rdx, [rbp-40h]
 * 0000000140434C9A: mov     rcx, [rbp-48h]
 * 0000000140434C9E: mov     rax, [rbp-50h]
 * 0000000140434CA2: mov     rsp, rbp
 * 0000000140434CA5: mov     rbp, [rbp+0D8h]
 * 0000000140434CAC: add     rsp, 0E8h
 * 0000000140434CB3: iretq
 */
