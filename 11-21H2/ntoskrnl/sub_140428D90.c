/*
 * XREFs of sub_140428D90 @ 0x140428D90
 * Callers:
 *     sub_140424300 @ 0x140424300 (sub_140424300.c)
 *     sub_140428A30 @ 0x140428A30 (sub_140428A30.c)
 *     sub_140428BA0 @ 0x140428BA0 (sub_140428BA0.c)
 * Callees:
 *     sub_14020C9F0 @ 0x14020C9F0 (sub_14020C9F0.c)
 *     HalRequestSoftwareInterrupt @ 0x14022BAA0 (HalRequestSoftwareInterrupt.c)
 *     sub_1402ECA00 @ 0x1402ECA00 (sub_1402ECA00.c)
 *     sub_14039D930 @ 0x14039D930 (sub_14039D930.c)
 *     sub_14039EA10 @ 0x14039EA10 (sub_14039EA10.c)
 *     sub_1403ABA40 @ 0x1403ABA40 (sub_1403ABA40.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140428D90 @ 0x140428D90 (sub_140428D90.c)
 *     sub_140459FE0 @ 0x140459FE0 (sub_140459FE0.c)
 *     sub_14045AAC0 @ 0x14045AAC0 (sub_14045AAC0.c)
 *     sub_14054CAE0 @ 0x14054CAE0 (sub_14054CAE0.c)
 *     sub_14056ADA0 @ 0x14056ADA0 (sub_14056ADA0.c)
 *     sub_140570220 @ 0x140570220 (sub_140570220.c)
 *     sub_140570350 @ 0x140570350 (sub_140570350.c)
 *     sub_140573A00 @ 0x140573A00 (sub_140573A00.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140428D90 @ 0x140428D90
 * Reason: Hex-Rays returned no pseudocode for 0x140428D90
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140428D90: push    rbp
 * 0000000140428D92: sub     rsp, 30h
 * 0000000140428D96: prefetchw byte ptr [rsi+71h]
 * 0000000140428D9A: mov     [rsp+38h+var_10], cl
 * 0000000140428D9E: cmp     byte ptr [rsi+71h], 0
 * 0000000140428DA2: jnz     loc_14042942F
 * 0000000140428DA8: mov     byte ptr [rsi+71h], 1
 * 0000000140428DAC: mov     eax, cs:dword_140D06B0C
 * 0000000140428DB2: test    eax, eax
 * 0000000140428DB4: jz      short loc_140428DBC
 * 0000000140428DB6: hreset  0
 * 0000000140428DBC: cli
 * 0000000140428DBD: rdtsc
 * 0000000140428DBF: shl     rdx, 20h
 * 0000000140428DC3: or      rax, rdx
 * 0000000140428DC6: sub     rax, [rbx+8180h]
 * 0000000140428DCD: add     [rbx+8278h], rax
 * 0000000140428DD4: add     [rbx+8180h], rax
 * 0000000140428DDB: mov     r12, rax
 * 0000000140428DDE: test    byte ptr [rbx+6], 0FFh
 * 0000000140428DE2: jz      short loc_140428DFF
 * 0000000140428DE4: and     byte ptr [rbx+6], 0
 * 0000000140428DE8: cmp     [rbx+18h], rsi
 * 0000000140428DEC: jz      short loc_140428DFF
 * 0000000140428DEE: mov     ecx, 2
 * 0000000140428DF3: call    cs:off_140015970
 * 0000000140428DFA: nop     dword ptr [rax+rax+00h]
 * 0000000140428DFF: test    byte ptr [rsi+2], 0B6h
 * 0000000140428E03: jnz     loc_1404293AD
 * 0000000140428E09: dec     byte ptr [rbx+20h]
 * 0000000140428E0C: sti
 * 0000000140428E0D: inc     dword ptr [rbx+2D3Ch]
 * 0000000140428E13: mov     rbp, cs:qword_140D068D8
 * 0000000140428E1A: cmp     cs:dword_140D06C1C, 0
 * 0000000140428E21: jz      short loc_140428E35
 * 0000000140428E23: bt      rbp, 2Ch ; ','
 * 0000000140428E28: jnb     short loc_140428E35
 * 0000000140428E2A: mov     rcx, rbx
 * 0000000140428E2D: mov     rdx, rsi
 * 0000000140428E30: call    sub_140573A00
 * 0000000140428E35: cmp     [rbx+18h], rsi
 * 0000000140428E39: jz      short loc_140428E5B
 * 0000000140428E3B: mov     ecx, [rsi+200h]
 * 0000000140428E41: mov     eax, [rbx+0ECh]
 * 0000000140428E47: xor     eax, ecx
 * 0000000140428E49: test    eax, 0FFh
 * 0000000140428E4E: jz      short loc_140428E5B
 * 0000000140428E50: mov     rcx, rbx
 * 0000000140428E53: mov     rdx, rsi
 * 0000000140428E56: call    sub_14045AAC0
 * 0000000140428E5B: mov     rdx, [rdi+250h]
 * 0000000140428E62: mov     rcx, [rdi+60h]
 * 0000000140428E66: and     rdx, 0FFFFFFFFFFFFFFFDh
 * 0000000140428E6A: mov     eax, edx
 * 0000000140428E6C: jz      short loc_140428E98
 * 0000000140428E6E: shr     rdx, 20h
 * 0000000140428E72: bt      rbp, 26h ; '&'
 * 0000000140428E77: jb      short loc_140428E90
 * 0000000140428E79: bt      rbp, 0Fh
 * 0000000140428E7E: jb      short loc_140428E95
 * 0000000140428E80: bt      ebp, 17h
 * 0000000140428E84: jnb     short loc_140428E8B
 * 0000000140428E86: xsave   byte ptr [rcx]
 * 0000000140428E89: jmp     short loc_140428E98
 * 0000000140428E8B: fxsave  dword ptr [rcx]
 * 0000000140428E8E: jmp     short loc_140428E98
 * 0000000140428E90: xsaves  byte ptr [rcx]
 * 0000000140428E93: jmp     short loc_140428E98
 * 0000000140428E95: xsaveopt byte ptr [rcx]
 * 0000000140428E98: stmxcsr dword ptr [rcx+18h]
 * 0000000140428E9C: test    eax, 100h
 * 0000000140428EA1: jz      short loc_140428EB4
 * 0000000140428EA3: cmp     cs:dword_140D06964, 0
 * 0000000140428EAA: jz      short loc_140428EB4
 * 0000000140428EAC: mov     rcx, rdi
 * 0000000140428EAF: call    sub_140570350
 * 0000000140428EB4: mov     [rdi+58h], rsp
 * 0000000140428EB8: mov     rsp, [rsi+58h]
 * 0000000140428EBC: test    cs:byte_140E01841, 1
 * 0000000140428EC3: jz      short loc_140428EF2
 * 0000000140428EC5: mov     rcx, [rsi+410h]
 * 0000000140428ECC: mov     [rbx+96A8h], rcx
 * 0000000140428ED3: rdsspq  rdx
 * 0000000140428ED8: mov     rcx, [rsi+408h]
 * 0000000140428EDF: rstorssp qword ptr [rcx]
 * 0000000140428EE3: saveprevssp
 * 0000000140428EE7: sub     rdx, 8
 * 0000000140428EEB: mov     [rdi+408h], rdx
 * 0000000140428EF2: mov     rax, [rdi+220h]
 * 0000000140428EF9: cmp     qword ptr [rax+580h], 0
 * 0000000140428F01: jz      short loc_140428F16
 * 0000000140428F03: mov     ecx, 0C0000100h
 * 0000000140428F08: rdmsr
 * 0000000140428F0A: mov     [rdi+638h], eax
 * 0000000140428F10: mov     [rdi+63Ch], edx
 * 0000000140428F16: btr     dword ptr gs:856h, 0
 * 0000000140428F20: jnb     short loc_140428F26
 * 0000000140428F22: or      byte ptr [rdi+7Fh], 2
 * 0000000140428F26: btr     dword ptr [rsi+7Fh], 1
 * 0000000140428F2B: jnb     short loc_140428F36
 * 0000000140428F2D: or      byte ptr gs:856h, 1
 * 0000000140428F36: mov     rcx, [rsi+220h]
 * 0000000140428F3D: or      cl, [rbx+6ECh]
 * 0000000140428F43: and     cl, 0C2h
 * 0000000140428F46: cmp     rcx, [rdi+220h]
 * 0000000140428F4D: jz      short loc_140428F5C
 * 0000000140428F4F: and     cl, 0C0h
 * 0000000140428F52: call    sub_14020C9F0
 * 0000000140428F57: jmp     loc_140429112
 * 0000000140428F5C: movzx   ecx, byte ptr gs:856h
 * 0000000140428F65: and     cx, 3
 * 0000000140428F69: cmp     cx, 1
 * 0000000140428F6D: jnz     loc_140429112
 * 0000000140428F73: cli
 * 0000000140428F74: movzx   eax, word ptr gs:852h
 * 0000000140428F7D: cmp     gs:864h, ax
 * 0000000140428F86: jz      short loc_140428F9A
 * 0000000140428F88: mov     gs:864h, ax
 * 0000000140428F91: mov     ecx, 48h ; 'H'
 * 0000000140428F96: xor     edx, edx
 * 0000000140428F98: wrmsr
 * 0000000140428F9A: movzx   edx, byte ptr gs:854h
 * 0000000140428FA3: test    edx, 10h
 * 0000000140428FA9: jz      short loc_140428FC2
 * 0000000140428FAB: mov     eax, 1
 * 0000000140428FB0: xor     edx, edx
 * 0000000140428FB2: mov     ecx, 49h ; 'I'
 * 0000000140428FB7: wrmsr
 * 0000000140428FB9: movzx   edx, byte ptr gs:854h
 * 0000000140428FC2: test    edx, 40h
 * 0000000140428FC8: jz      loc_140429105
 * 0000000140428FCE: call    loc_1404290E1
 * 0000000140428FD3: add     rsp, 8
 * 0000000140428FD7: call    loc_1404290EA
 * 0000000140428FDC: add     rsp, 8
 * 0000000140428FE0: call    loc_140428FD3
 * 0000000140428FE5: add     rsp, 8
 * 0000000140428FE9: call    loc_140428FDC
 * 0000000140428FEE: add     rsp, 8
 * 0000000140428FF2: call    loc_140428FE5
 * 0000000140428FF7: add     rsp, 8
 * 0000000140428FFB: call    loc_140428FEE
 * 0000000140429000: add     rsp, 8
 * 0000000140429004: call    loc_140428FF7
 * 0000000140429009: add     rsp, 8
 * 000000014042900D: call    loc_140429000
 * 0000000140429012: add     rsp, 8
 * 0000000140429016: call    loc_140429009
 * 000000014042901B: add     rsp, 8
 * 000000014042901F: call    loc_140429012
 * 0000000140429024: add     rsp, 8
 * 0000000140429028: call    loc_14042901B
 * 000000014042902D: add     rsp, 8
 * 0000000140429031: call    loc_140429024
 * 0000000140429036: add     rsp, 8
 * 000000014042903A: call    loc_14042902D
 * 000000014042903F: add     rsp, 8
 * 0000000140429043: call    loc_140429036
 * 0000000140429048: add     rsp, 8
 * 000000014042904C: call    loc_14042903F
 * 0000000140429051: add     rsp, 8
 * 0000000140429055: call    loc_140429048
 * 000000014042905A: add     rsp, 8
 * 000000014042905E: call    loc_140429051
 * 0000000140429063: add     rsp, 8
 * 0000000140429067: call    loc_14042905A
 * 000000014042906C: add     rsp, 8
 * 0000000140429070: call    loc_140429063
 * 0000000140429075: add     rsp, 8
 * 0000000140429079: call    loc_14042906C
 * 000000014042907E: add     rsp, 8
 * 0000000140429082: call    loc_140429075
 * 0000000140429087: add     rsp, 8
 * 000000014042908B: call    loc_14042907E
 * 0000000140429090: add     rsp, 8
 * 0000000140429094: call    loc_140429087
 * 0000000140429099: add     rsp, 8
 * 000000014042909D: call    loc_140429090
 * 00000001404290A2: add     rsp, 8
 * 00000001404290A6: call    loc_140429099
 * 00000001404290AB: add     rsp, 8
 * 00000001404290AF: call    loc_1404290A2
 * 00000001404290B4: add     rsp, 8
 * 00000001404290B8: call    loc_1404290AB
 * 00000001404290BD: add     rsp, 8
 * 00000001404290C1: call    loc_1404290B4
 * 00000001404290C6: add     rsp, 8
 * 00000001404290CA: call    loc_1404290BD
 * 00000001404290CF: add     rsp, 8
 * 00000001404290D3: call    loc_1404290C6
 * 00000001404290D8: add     rsp, 8
 * 00000001404290DC: call    loc_1404290CF
 * 00000001404290E1: add     rsp, 8
 * 00000001404290E5: call    loc_1404290D8
 * 00000001404290EA: add     rsp, 8
 * 00000001404290EE: mov     eax, 0DADAh
 * 00000001404290F3: test    byte ptr gs:862h, 8
 * 00000001404290FC: jz      short loc_140429105
 * 00000001404290FE: mov     al, 20h ; ' '
 * 0000000140429100: incsspq rax
 * 0000000140429105: lfence
 * 0000000140429108: or      byte ptr gs:856h, 2
 * 0000000140429111: sti
 * 0000000140429112: mov     r14, [rsi+0B8h]
 * 0000000140429119: cmp     r14, [rdi+0B8h]
 * 0000000140429120: jz      loc_1404291DD
 * 0000000140429126: movzx   ecx, byte ptr [rbx+0D1h]
 * 000000014042912D: movzx   eax, byte ptr [rbx+0D0h]
 * 0000000140429134: lock bts [r14+rax*8+178h], rcx
 * 000000014042913E: mov     rcx, [r14+28h]
 * 0000000140429142: test    cs:byte_140E01840, 1
 * 0000000140429149: jz      short loc_140429184
 * 000000014042914B: cli
 * 000000014042914C: bt      ecx, 1
 * 0000000140429150: jnb     short loc_14042915E
 * 0000000140429152: bts     rcx, 3Fh ; '?'
 * 0000000140429157: or      dword ptr [rbx+9E98h], 1
 * 000000014042915E: mov     [rbx+9E80h], rcx
 * 0000000140429165: btr     rcx, 3Fh ; '?'
 * 000000014042916A: and     dword ptr [rbx+9E98h], 0FFFFFFFDh
 * 0000000140429171: bt      dword ptr [r14+390h], 0
 * 000000014042917A: jnb     short loc_140429183
 * 000000014042917C: xor     dword ptr [rbx+9E98h], 3
 * 0000000140429183: sti
 * 0000000140429184: test    cs:dword_140D0689C, 1
 * 000000014042918E: jz      short loc_140429197
 * 0000000140429190: call    sub_14054CAE0
 * 0000000140429195: jmp     short loc_1404291BE
 * 0000000140429197: mov     cr3, rcx
 * 000000014042919A: test    cs:byte_140E01840, 1
 * 00000001404291A1: jz      short loc_1404291BE
 * 00000001404291A3: bt      ecx, 1
 * 00000001404291A7: jb      short loc_1404291BE
 * 00000001404291A9: mov     rax, cr4
 * 00000001404291AC: xor     rax, 80h
 * 00000001404291B2: mov     cr4, rax
 * 00000001404291B5: xor     rax, 80h
 * 00000001404291BB: mov     cr4, rax
 * 00000001404291BE: movzx   ecx, byte ptr [rbx+0D1h]
 * 00000001404291C5: movzx   eax, byte ptr [rbx+0D0h]
 * 00000001404291CC: mov     rdx, [rdi+0B8h]
 * 00000001404291D3: lock btr [rdx+rax*8+178h], rcx
 * 00000001404291DD: mov     rax, [rsi+28h]
 * 00000001404291E1: test    cs:byte_140E01840, 1
 * 00000001404291E8: jnz     short loc_1404291F7
 * 00000001404291EA: mov     r15, [rbx-178h]
 * 00000001404291F1: mov     [r15+4], rax
 * 00000001404291F5: jmp     short loc_1404291FE
 * 00000001404291F7: mov     [rbx+9E88h], rax
 * 00000001404291FE: mov     [rbx+28h], rax
 * 0000000140429202: test    rax, rax
 * 0000000140429205: jge     loc_140429417
 * 000000014042920B: cmp     cs:dword_140C2BD48, 0
 * 0000000140429212: jnz     loc_1404293C0
 * 0000000140429218: bt      rbp, 37h ; '7'
 * 000000014042921D: jnb     short loc_14042923F
 * 000000014042921F: mov     ecx, 1C4h
 * 0000000140429224: mov     rax, [rdi+428h]
 * 000000014042922B: mov     rdx, [rsi+428h]
 * 0000000140429232: cmp     rax, rdx
 * 0000000140429235: jz      short loc_14042923F
 * 0000000140429237: mov     eax, edx
 * 0000000140429239: shr     rdx, 20h
 * 000000014042923D: wrmsr
 * 000000014042923F: mov     rdx, [rdi+250h]
 * 0000000140429246: mov     rax, rdx
 * 0000000140429249: and     rax, 40000h
 * 000000014042924F: and     rdx, cs:qword_140D06A68
 * 0000000140429256: or      rdx, rax
 * 0000000140429259: or      rdx, [rsi+250h]
 * 0000000140429260: mov     byte ptr [rdi+71h], 0
 * 0000000140429264: mov     rcx, [rsi+60h]
 * 0000000140429268: and     rdx, 0FFFFFFFFFFFFFFFDh
 * 000000014042926C: mov     eax, edx
 * 000000014042926E: jz      short loc_14042929B
 * 0000000140429270: shr     rdx, 20h
 * 0000000140429274: bt      rbp, 29h ; ')'
 * 0000000140429279: jnb     short loc_140429281
 * 000000014042927B: test    al, 1
 * 000000014042927D: jz      short loc_140429281
 * 000000014042927F: fninit
 * 0000000140429281: bt      rbp, 26h ; '&'
 * 0000000140429286: jb      short loc_140429293
 * 0000000140429288: bt      ebp, 17h
 * 000000014042928C: jb      short loc_140429298
 * 000000014042928E: fxrstor dword ptr [rcx]
 * 0000000140429291: jmp     short loc_14042929B
 * 0000000140429293: xrstors byte ptr [rcx]
 * 0000000140429296: jmp     short loc_14042929B
 * 0000000140429298: xrstor  byte ptr [rcx]
 * 000000014042929B: ldmxcsr dword ptr [rcx+18h]
 * 000000014042929F: test    eax, 100h
 * 00000001404292A4: jz      short loc_1404292B7
 * 00000001404292A6: cmp     cs:dword_140D06964, 0
 * 00000001404292AD: jz      short loc_1404292B7
 * 00000001404292AF: mov     rcx, rsi
 * 00000001404292B2: call    sub_140570220
 * 00000001404292B7: bt      dword ptr [rsi+74h], 0Ah
 * 00000001404292BC: jb      loc_140429362
 * 00000001404292C2: mov     rax, [rsi+220h]
 * 00000001404292C9: cmp     qword ptr [rax+580h], 0
 * 00000001404292D1: mov     eax, [rsi+638h]
 * 00000001404292D7: jz      short loc_1404292E4
 * 00000001404292D9: mov     eax, [rsi+0F0h]
 * 00000001404292DF: add     eax, 2000h
 * 00000001404292E4: mov     rcx, [rbx-180h]
 * 00000001404292EB: mov     [rcx+52h], ax
 * 00000001404292EF: shr     eax, 10h
 * 00000001404292F2: mov     [rcx+54h], al
 * 00000001404292F5: mov     [rcx+57h], ah
 * 00000001404292F8: mov     eax, 53h ; 'S'
 * 00000001404292FD: mov     fs, eax
 * 00000001404292FF: mov     eax, [rsi+638h]
 * 0000000140429305: mov     edx, [rsi+63Ch]
 * 000000014042930B: mov     ecx, 0C0000100h
 * 0000000140429310: wrmsr
 * 0000000140429312: mov     eax, ds
 * 0000000140429314: mov     edx, es
 * 0000000140429316: and     eax, edx
 * 0000000140429318: mov     edx, gs
 * 000000014042931A: and     eax, edx
 * 000000014042931C: cmp     ax, 2Bh ; '+'
 * 0000000140429320: jz      short loc_140429335
 * 0000000140429322: mov     edx, 2Bh ; '+'
 * 0000000140429327: mov     ds, edx
 * 0000000140429329: mov     es, edx
 * 000000014042932B: cli
 * 000000014042932C: swapgs
 * 000000014042932F: mov     gs, edx
 * 0000000140429331: swapgs
 * 0000000140429334: sti
 * 0000000140429335: mov     rax, [rsi+0F0h]
 * 000000014042933C: mov     edx, [rsi+0F4h]
 * 0000000140429342: mov     [rbx-150h], rax
 * 0000000140429349: test    byte ptr [rsi+3], 4
 * 000000014042934D: jz      short loc_14042935B
 * 000000014042934F: mov     eax, [rsi+640h]
 * 0000000140429355: mov     edx, [rsi+644h]
 * 000000014042935B: mov     ecx, 0C0000102h
 * 0000000140429360: wrmsr
 * 0000000140429362: test    dword ptr [rbx+33BCh], 10001h
 * 000000014042936C: jnz     loc_1404293FE
 * 0000000140429372: inc     dword ptr [rsi+154h]
 * 0000000140429378: cmp     byte ptr [rsi+0C1h], 1
 * 000000014042937F: jnz     short loc_1404293A4
 * 0000000140429381: movzx   ax, [rsp+38h+var_10]
 * 0000000140429387: or      ax, [rsi+1E6h]
 * 000000014042938E: jz      short loc_1404293A4
 * 0000000140429390: mov     ecx, 1
 * 0000000140429395: call    cs:off_140015970
 * 000000014042939C: nop     dword ptr [rax+rax+00h]
 * 00000001404293A1: or      rcx, rsp
 * 00000001404293A4: setz    al
 * 00000001404293A7: add     rsp, 30h
 * 00000001404293AB: pop     rbp
 * 00000001404293AC: retn
 * 00000001404293AD: mov     rcx, rbx
 * 00000001404293B0: mov     rdx, rsi
 * 00000001404293B3: mov     r8, r12
 * 00000001404293B6: call    sub_1402ECA00
 * 00000001404293BB: jmp     loc_140428E0D
 * 00000001404293C0: test    dword ptr cs:xmmword_140D06900+4, 4
 * 00000001404293CA: jz      short loc_1404293D7
 * 00000001404293CC: mov     rcx, rdi
 * 00000001404293CF: mov     rdx, rsi
 * 00000001404293D2: call    sub_1403ABA40
 * 00000001404293D7: test    cs:dword_140C2BD48, 2
 * 00000001404293E1: jz      short loc_1404293E8
 * 00000001404293E3: call    sub_140459FE0
 * 00000001404293E8: test    cs:dword_140C2BD48, 4
 * 00000001404293F2: jz      short loc_1404293F9
 * 00000001404293F4: call    sub_14056ADA0
 * 00000001404293F9: jmp     loc_140429218
 * 00000001404293FE: xor     r9, r9; BugCheckParameter3
 * 0000000140429401: mov     [rsp+38h+BugCheckParameter4], r9; BugCheckParameter4
 * 0000000140429406: mov     r8, rsi; BugCheckParameter2
 * 0000000140429409: mov     rdx, rdi; BugCheckParameter1
 * 000000014042940C: mov     ecx, 0B8h; BugCheckCode
 * 0000000140429411: call    KeBugCheckEx
 * 0000000140429417: xor     r9, r9; BugCheckParameter3
 * 000000014042941A: mov     [rsp+38h+BugCheckParameter4], r9; BugCheckParameter4
 * 000000014042941F: mov     r8, rsi; BugCheckParameter2
 * 0000000140429422: mov     rdx, rdi; BugCheckParameter1
 * 0000000140429425: mov     ecx, 1CEh; BugCheckCode
 * 000000014042942A: call    KeBugCheckEx
 * 000000014042942F: xor     ebp, ebp
 * 0000000140429431: inc     ebp
 * 0000000140429433: test    cs:dword_140D0527C, ebp
 * 0000000140429439: jnz     short loc_140429457
 * 000000014042943B: test    cs:dword_140D0689C, 40h
 * 0000000140429445: jz      short loc_140429457
 * 0000000140429447: call    sub_14039EA10
 * 000000014042944C: test    al, al
 * 000000014042944E: jz      short loc_140429457
 * 0000000140429450: mov     ecx, ebp
 * 0000000140429452: call    sub_14039D930
 * 0000000140429457: pause
 * 0000000140429459: cmp     byte ptr [rsi+71h], 0
 * 000000014042945D: jz      loc_140428DA8
 * 0000000140429463: jmp     short loc_140429431
 */
