/*
 * XREFs of sub_140426C70 @ 0x140426C70
 * Callers:
 *     sub_140425B20 @ 0x140425B20 (sub_140425B20.c)
 *     sub_140425E60 @ 0x140425E60 (sub_140425E60.c)
 *     sub_1404261A0 @ 0x1404261A0 (sub_1404261A0.c)
 *     sub_1404264E0 @ 0x1404264E0 (sub_1404264E0.c)
 * Callees:
 *     sub_14020D230 @ 0x14020D230 (sub_14020D230.c)
 *     HalRequestSoftwareInterrupt @ 0x14022BAA0 (HalRequestSoftwareInterrupt.c)
 *     sub_1402ECA00 @ 0x1402ECA00 (sub_1402ECA00.c)
 *     sub_14041F8A0 @ 0x14041F8A0 (sub_14041F8A0.c)
 *     sub_1404206B0 @ 0x1404206B0 (sub_1404206B0.c)
 *     sub_140425700 @ 0x140425700 (sub_140425700.c)
 *     sub_140426C70 @ 0x140426C70 (sub_140426C70.c)
 *     sub_140427200 @ 0x140427200 (sub_140427200.c)
 *     sub_1404281E0 @ 0x1404281E0 (sub_1404281E0.c)
 *     sub_140569E70 @ 0x140569E70 (sub_140569E70.c)
 *     sub_140571820 @ 0x140571820 (sub_140571820.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140426C70 @ 0x140426C70
 * Reason: Hex-Rays returned no pseudocode for 0x140426C70
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140426C70: mov     rdx, rsp
 * 0000000140426C73: mov     rcx, gs:8B58h
 * 0000000140426C7C: lea     rax, [rcx-6000h]
 * 0000000140426C83: cmp     rax, rsp
 * 0000000140426C86: ja      short loc_140426C8D
 * 0000000140426C88: cmp     rsp, rcx
 * 0000000140426C8B: jb      short loc_140426C99
 * 0000000140426C8D: cmp     cs:dword_140C31E20, 0
 * 0000000140426C94: jnz     short loc_140426C99
 * 0000000140426C96: mov     rsp, rcx
 * 0000000140426C99: sub     rsp, 20h
 * 0000000140426C9D: mov     [rsp+20h+var_10], rdx
 * 0000000140426CA2: call    sub_140427200
 * 0000000140426CA7: mov     rsp, [rsp+20h+var_10]
 * 0000000140426CAC: cli
 * 0000000140426CAD: mov     rcx, gs:20h
 * 0000000140426CB6: cmp     byte ptr [rcx+20h], 1
 * 0000000140426CBA: ja      short loc_140426D36
 * 0000000140426CBC: rdtsc
 * 0000000140426CBE: shl     rdx, 20h
 * 0000000140426CC2: or      rax, rdx
 * 0000000140426CC5: sub     rax, [rcx+8180h]
 * 0000000140426CCC: add     [rcx+8278h], rax
 * 0000000140426CD3: add     [rcx+8180h], rax
 * 0000000140426CDA: mov     r8, rax
 * 0000000140426CDD: mov     rax, [rcx+8]
 * 0000000140426CE1: test    byte ptr [rax+2], 72h
 * 0000000140426CE5: jz      short loc_140426CFA
 * 0000000140426CE7: xor     edx, edx
 * 0000000140426CE9: call    sub_1402ECA00
 * 0000000140426CEE: mov     rcx, gs:20h
 * 0000000140426CF7: inc     byte ptr [rcx+20h]
 * 0000000140426CFA: mov     dl, [rcx+6]
 * 0000000140426CFD: and     byte ptr [rcx+6], 0
 * 0000000140426D01: cmp     byte ptr [rcx+7], 0
 * 0000000140426D05: jnz     short loc_140426D36
 * 0000000140426D07: test    dl, dl
 * 0000000140426D09: jz      short loc_140426D36
 * 0000000140426D0B: cmp     byte ptr [rbp-57h], 2
 * 0000000140426D0F: jnb     short loc_140426D1C
 * 0000000140426D11: and     byte ptr [rcx+20h], 0
 * 0000000140426D15: call    sub_1404281E0
 * 0000000140426D1A: jmp     short loc_140426D39
 * 0000000140426D1C: mov     ecx, 2
 * 0000000140426D21: call    cs:off_140015970
 * 0000000140426D28: nop     dword ptr [rax+rax+00h]
 * 0000000140426D2D: mov     rcx, gs:20h
 * 0000000140426D36: dec     byte ptr [rcx+20h]
 * 0000000140426D39: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140426D3D: cmp     cs:dword_140D06B08, 0
 * 0000000140426D44: jz      short loc_140426D4D
 * 0000000140426D46: call    sub_140569E70
 * 0000000140426D4B: jmp     short loc_140426D51
 * 0000000140426D4D: mov     cr8, rcx
 * 0000000140426D51: mov     rsi, [rbp+0D0h]
 * 0000000140426D58: cli
 * 0000000140426D59: test    byte ptr [rbp+0F0h], 1
 * 0000000140426D60: jz      loc_14042704E
 * 0000000140426D66: test    byte ptr cs:dword_140D069F0, 0FFh
 * 0000000140426D6D: jz      short loc_140426D72
 * 0000000140426D6F: stac
 * 0000000140426D72: mov     rcx, gs:188h
 * 0000000140426D7B: test    byte ptr [rcx+0C2h], 3
 * 0000000140426D82: jz      short loc_140426D9F
 * 0000000140426D84: mov     ecx, 1
 * 0000000140426D89: mov     cr8, rcx
 * 0000000140426D8D: sti
 * 0000000140426D8E: call    sub_140425700
 * 0000000140426D93: cli
 * 0000000140426D94: mov     ecx, 0
 * 0000000140426D99: mov     cr8, rcx
 * 0000000140426D9D: jmp     short loc_140426D72
 * 0000000140426D9F: test    byte ptr gs:86Ch, 2
 * 0000000140426DA8: jz      short loc_140426DB1
 * 0000000140426DAA: xor     ecx, ecx
 * 0000000140426DAC: call    sub_14020D230
 * 0000000140426DB1: mov     rcx, gs:188h
 * 0000000140426DBA: test    dword ptr [rcx], 8000000h
 * 0000000140426DC0: jz      short loc_140426DC7
 * 0000000140426DC2: call    sub_1404206B0
 * 0000000140426DC7: mov     rcx, gs:188h
 * 0000000140426DD0: test    dword ptr [rcx], 10000h
 * 0000000140426DD6: jz      short loc_140426DEC
 * 0000000140426DD8: test    byte ptr [rcx+2], 1
 * 0000000140426DDC: jz      short loc_140426DEC
 * 0000000140426DDE: call    sub_140571820
 * 0000000140426DE3: mov     rcx, gs:188h
 * 0000000140426DEC: ldmxcsr dword ptr [rbp-54h]
 * 0000000140426DF0: cmp     word ptr [rbp+80h], 0
 * 0000000140426DF8: jz      short loc_140426DFF
 * 0000000140426DFA: call    sub_14041F8A0
 * 0000000140426DFF: mov     rcx, gs:188h
 * 0000000140426E08: bt      dword ptr [rcx+74h], 16h
 * 0000000140426E0D: jnb     short loc_140426E39
 * 0000000140426E0F: xor     ecx, ecx
 * 0000000140426E11: rdsspq  rcx
 * 0000000140426E16: mov     r8, gs:9828h
 * 0000000140426E1F: add     r8, 8
 * 0000000140426E23: cmp     rcx, r8
 * 0000000140426E26: jnz     short loc_140426E39
 * 0000000140426E28: mov     rcx, gs:9820h
 * 0000000140426E31: rstorssp qword ptr [rcx]
 * 0000000140426E35: saveprevssp
 * 0000000140426E39: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140426E3D: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140426E41: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140426E45: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140426E49: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140426E4D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140426E51: mov     r11, [rbp-20h]
 * 0000000140426E55: mov     r10, [rbp-28h]
 * 0000000140426E59: mov     r9, [rbp-30h]
 * 0000000140426E5D: mov     r8, [rbp-38h]
 * 0000000140426E61: mov     byte ptr gs:856h, 0
 * 0000000140426E6A: movzx   eax, word ptr gs:86Ah
 * 0000000140426E73: cmp     gs:864h, ax
 * 0000000140426E7C: jz      short loc_140426E90
 * 0000000140426E7E: mov     gs:864h, ax
 * 0000000140426E87: mov     ecx, 48h ; 'H'
 * 0000000140426E8C: xor     edx, edx
 * 0000000140426E8E: wrmsr
 * 0000000140426E90: btr     word ptr gs:860h, 2
 * 0000000140426E9B: jnb     short loc_140426EAB
 * 0000000140426E9D: mov     eax, 1
 * 0000000140426EA2: xor     edx, edx
 * 0000000140426EA4: mov     ecx, 49h ; 'I'
 * 0000000140426EA9: wrmsr
 * 0000000140426EAB: btr     word ptr gs:860h, 5
 * 0000000140426EB6: jnb     loc_140426FF3
 * 0000000140426EBC: call    loc_140426FCF
 * 0000000140426EC1: add     rsp, 8
 * 0000000140426EC5: call    loc_140426FD8
 * 0000000140426ECA: add     rsp, 8
 * 0000000140426ECE: call    loc_140426EC1
 * 0000000140426ED3: add     rsp, 8
 * 0000000140426ED7: call    loc_140426ECA
 * 0000000140426EDC: add     rsp, 8
 * 0000000140426EE0: call    loc_140426ED3
 * 0000000140426EE5: add     rsp, 8
 * 0000000140426EE9: call    loc_140426EDC
 * 0000000140426EEE: add     rsp, 8
 * 0000000140426EF2: call    loc_140426EE5
 * 0000000140426EF7: add     rsp, 8
 * 0000000140426EFB: call    loc_140426EEE
 * 0000000140426F00: add     rsp, 8
 * 0000000140426F04: call    loc_140426EF7
 * 0000000140426F09: add     rsp, 8
 * 0000000140426F0D: call    loc_140426F00
 * 0000000140426F12: add     rsp, 8
 * 0000000140426F16: call    loc_140426F09
 * 0000000140426F1B: add     rsp, 8
 * 0000000140426F1F: call    loc_140426F12
 * 0000000140426F24: add     rsp, 8
 * 0000000140426F28: call    loc_140426F1B
 * 0000000140426F2D: add     rsp, 8
 * 0000000140426F31: call    loc_140426F24
 * 0000000140426F36: add     rsp, 8
 * 0000000140426F3A: call    loc_140426F2D
 * 0000000140426F3F: add     rsp, 8
 * 0000000140426F43: call    loc_140426F36
 * 0000000140426F48: add     rsp, 8
 * 0000000140426F4C: call    loc_140426F3F
 * 0000000140426F51: add     rsp, 8
 * 0000000140426F55: call    loc_140426F48
 * 0000000140426F5A: add     rsp, 8
 * 0000000140426F5E: call    loc_140426F51
 * 0000000140426F63: add     rsp, 8
 * 0000000140426F67: call    loc_140426F5A
 * 0000000140426F6C: add     rsp, 8
 * 0000000140426F70: call    loc_140426F63
 * 0000000140426F75: add     rsp, 8
 * 0000000140426F79: call    loc_140426F6C
 * 0000000140426F7E: add     rsp, 8
 * 0000000140426F82: call    loc_140426F75
 * 0000000140426F87: add     rsp, 8
 * 0000000140426F8B: call    loc_140426F7E
 * 0000000140426F90: add     rsp, 8
 * 0000000140426F94: call    loc_140426F87
 * 0000000140426F99: add     rsp, 8
 * 0000000140426F9D: call    loc_140426F90
 * 0000000140426FA2: add     rsp, 8
 * 0000000140426FA6: call    loc_140426F99
 * 0000000140426FAB: add     rsp, 8
 * 0000000140426FAF: call    loc_140426FA2
 * 0000000140426FB4: add     rsp, 8
 * 0000000140426FB8: call    loc_140426FAB
 * 0000000140426FBD: add     rsp, 8
 * 0000000140426FC1: call    loc_140426FB4
 * 0000000140426FC6: add     rsp, 8
 * 0000000140426FCA: call    loc_140426FBD
 * 0000000140426FCF: add     rsp, 8
 * 0000000140426FD3: call    loc_140426FC6
 * 0000000140426FD8: add     rsp, 8
 * 0000000140426FDC: mov     eax, 0DADAh
 * 0000000140426FE1: test    byte ptr gs:862h, 8
 * 0000000140426FEA: jz      short loc_140426FF3
 * 0000000140426FEC: mov     al, 20h ; ' '
 * 0000000140426FEE: incsspq rax
 * 0000000140426FF3: test    word ptr gs:860h, 80h
 * 0000000140426FFE: jz      short loc_14042700C
 * 0000000140427000: xor     eax, eax
 * 0000000140427002: xor     edx, edx
 * 0000000140427004: mov     ecx, 1
 * 0000000140427009: div     rcx
 * 000000014042700C: mov     rdx, [rbp-40h]
 * 0000000140427010: mov     rcx, [rbp-48h]
 * 0000000140427014: mov     rax, [rbp-50h]
 * 0000000140427018: mov     rsp, rbp
 * 000000014042701B: mov     rbp, [rbp+0D8h]
 * 0000000140427022: add     rsp, 0E8h
 * 0000000140427029: test    cs:byte_140E01840, 1
 * 0000000140427030: jz      short loc_140427037
 * 0000000140427032: jmp     sub_140AB6B80
 * 0000000140427037: test    word ptr gs:860h, 100h
 * 0000000140427042: jz      short loc_140427049
 * 0000000140427044: verw    [rsp-1C8h+arg_1E0]
 * 0000000140427049: swapgs
 * 000000014042704C: iretq
 * 000000014042704E: ldmxcsr dword ptr [rbp-54h]
 * 0000000140427052: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140427056: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014042705A: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014042705E: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140427062: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140427066: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014042706A: mov     r11, [rbp-20h]
 * 000000014042706E: mov     r10, [rbp-28h]
 * 0000000140427072: mov     r9, [rbp-30h]
 * 0000000140427076: mov     r8, [rbp-38h]
 * 000000014042707A: mov     rdx, [rbp-40h]
 * 000000014042707E: mov     rcx, [rbp-48h]
 * 0000000140427082: mov     rax, [rbp-50h]
 * 0000000140427086: mov     rsp, rbp
 * 0000000140427089: mov     rbp, [rbp+0D8h]
 * 0000000140427090: add     rsp, 0E8h
 * 0000000140427097: iretq
 */
