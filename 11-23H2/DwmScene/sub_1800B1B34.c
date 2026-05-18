/*
 * XREFs of sub_1800B1B34 @ 0x1800B1B34
 * Callers:
 *     sub_180003000 @ 0x180003000 (sub_180003000.c)
 *     sub_180003190 @ 0x180003190 (sub_180003190.c)
 *     sub_180003200 @ 0x180003200 (sub_180003200.c)
 *     sub_180003270 @ 0x180003270 (sub_180003270.c)
 *     sub_1800032E0 @ 0x1800032E0 (sub_1800032E0.c)
 *     sub_180003350 @ 0x180003350 (sub_180003350.c)
 *     sub_1800033C0 @ 0x1800033C0 (sub_1800033C0.c)
 *     sub_180003430 @ 0x180003430 (sub_180003430.c)
 *     sub_1800034A0 @ 0x1800034A0 (sub_1800034A0.c)
 *     sub_180003510 @ 0x180003510 (sub_180003510.c)
 *     sub_180003580 @ 0x180003580 (sub_180003580.c)
 *     sub_1800035F0 @ 0x1800035F0 (sub_1800035F0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000C538 @ 0x18000C538 (sub_18000C538.c)
 *     sub_18000C5A0 @ 0x18000C5A0 (sub_18000C5A0.c)
 *     sub_180010F30 @ 0x180010F30 (sub_180010F30.c)
 *     sub_18001C61C @ 0x18001C61C (sub_18001C61C.c)
 *     sub_18001C6E8 @ 0x18001C6E8 (sub_18001C6E8.c)
 *     sub_18007C338 @ 0x18007C338 (sub_18007C338.c)
 *     sub_18007C3DC @ 0x18007C3DC (sub_18007C3DC.c)
 *     sub_1800AF944 @ 0x1800AF944 (sub_1800AF944.c)
 *     sub_1800AF9B4 @ 0x1800AF9B4 (sub_1800AF9B4.c)
 *     sub_1800B18CC @ 0x1800B18CC (sub_1800B18CC.c)
 *     sub_1800B18DC @ 0x1800B18DC (sub_1800B18DC.c)
 *     sub_1800B18EC @ 0x1800B18EC (sub_1800B18EC.c)
 *     sub_1800B18FC @ 0x1800B18FC (sub_1800B18FC.c)
 *     sub_1800B190C @ 0x1800B190C (sub_1800B190C.c)
 *     sub_1800B191C @ 0x1800B191C (sub_1800B191C.c)
 *     sub_1800B192C @ 0x1800B192C (sub_1800B192C.c)
 *     sub_1800B193C @ 0x1800B193C (sub_1800B193C.c)
 *     sub_1800B194C @ 0x1800B194C (sub_1800B194C.c)
 *     sub_1800B195C @ 0x1800B195C (sub_1800B195C.c)
 *     sub_1800B196C @ 0x1800B196C (sub_1800B196C.c)
 *     sub_1800B197C @ 0x1800B197C (sub_1800B197C.c)
 *     sub_1800B198C @ 0x1800B198C (sub_1800B198C.c)
 *     sub_1800B199C @ 0x1800B199C (sub_1800B199C.c)
 *     sub_1800B19AC @ 0x1800B19AC (sub_1800B19AC.c)
 *     sub_1800B19BC @ 0x1800B19BC (sub_1800B19BC.c)
 *     sub_1800B19CC @ 0x1800B19CC (sub_1800B19CC.c)
 *     sub_1800B19DC @ 0x1800B19DC (sub_1800B19DC.c)
 *     sub_1800B19EC @ 0x1800B19EC (sub_1800B19EC.c)
 *     sub_1800B19FC @ 0x1800B19FC (sub_1800B19FC.c)
 *     sub_1800B1A0C @ 0x1800B1A0C (sub_1800B1A0C.c)
 *     __alloca_probe @ 0x1800E3900 (__alloca_probe.c)
 */

/*
 * Hex-Rays decompilation failed for sub_1800B1B34 @ 0x1800B1B34
 * Reason: Hex-Rays returned no pseudocode for 0x1800B1B34
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800B1B34: mov     rax, rsp
 * 00000001800B1B37: mov     [rax+8], rbx
 * 00000001800B1B3B: mov     [rax+10h], rsi
 * 00000001800B1B3F: mov     [rax+18h], rdi
 * 00000001800B1B43: push    rbp
 * 00000001800B1B44: push    r12
 * 00000001800B1B46: push    r13
 * 00000001800B1B48: push    r14
 * 00000001800B1B4A: push    r15
 * 00000001800B1B4C: lea     rbp, [rax-9E48h]
 * 00000001800B1B53: mov     eax, 9F20h
 * 00000001800B1B58: call    __alloca_probe
 * 00000001800B1B5D: sub     rsp, rax
 * 00000001800B1B60: movaps  [rsp+9F40h+var_38+8], xmm6
 * 00000001800B1B68: movaps  [rsp+9F40h+var_48+8], xmm7
 * 00000001800B1B70: mov     rax, cs:__security_cookie
 * 00000001800B1B77: xor     rax, rsp
 * 00000001800B1B7A: mov     [rbp+9E40h+var_50], rax
 * 00000001800B1B81: mov     ebx, cs:TlsIndex
 * 00000001800B1B87: mov     rdi, gs:58h
 * 00000001800B1B90: mov     r15d, 10h
 * 00000001800B1B96: mov     rax, [rdi+rbx*8]
 * 00000001800B1B9A: or      r14d, 0FFFFFFFFh
 * 00000001800B1B9E: lea     esi, [r14+2]
 * 00000001800B1BA2: lea     r12d, [r14+0Ah]
 * 00000001800B1BA6: lea     r13, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800B1BAD: mov     eax, [r15+rax]
 * 00000001800B1BB1: cmp     cs:dword_1801D9220, eax
 * 00000001800B1BB7: jle     loc_1800B1C95
 * 00000001800B1BBD: lea     rcx, dword_1801D9220
 * 00000001800B1BC4: call    sub_18000C5A0
 * 00000001800B1BC9: cmp     cs:dword_1801D9220, r14d
 * 00000001800B1BD0: jnz     loc_1800B1C95
 * 00000001800B1BD6: call    sub_1800B18CC
 * 00000001800B1BDB: mov     qword ptr [rbp+9E40h+var_91C0], rax
 * 00000001800B1BE2: add     rax, 63E4h
 * 00000001800B1BE8: mov     qword ptr [rbp+9E40h+var_91C0+8], rax
 * 00000001800B1BEF: movups  xmm7, [rbp+9E40h+var_91C0]
 * 00000001800B1BF6: movups  [rbp+9E40h+var_6A30], xmm7
 * 00000001800B1BFD: mov     dword ptr [rbp+9E40h+var_6A20], 5
 * 00000001800B1C07: mov     dword ptr [rbp+9E40h+var_6A20+4], esi
 * 00000001800B1C0D: movups  xmm6, [rbp+9E40h+var_6A20]
 * 00000001800B1C14: call    sub_1800B1A0C
 * 00000001800B1C19: mov     r8, rax
 * 00000001800B1C1C: mov     r9d, r12d
 * 00000001800B1C1F: xor     edx, edx
 * 00000001800B1C21: lea     rcx, [rbp+9E40h+Src]; Src
 * 00000001800B1C28: call    sub_18007C338
 * 00000001800B1C2D: nop
 * 00000001800B1C2E: mov     r8, rax
 * 00000001800B1C31: mov     rdx, r13
 * 00000001800B1C34: lea     rcx, [rbp+9E40h+var_3530]
 * 00000001800B1C3B: call    sub_18001C6E8
 * 00000001800B1C40: nop
 * 00000001800B1C41: lea     r8, aPixel; "/Pixel"
 * 00000001800B1C48: mov     rdx, rax
 * 00000001800B1C4B: lea     rcx, [rbp+9E40h+var_6A10]
 * 00000001800B1C52: call    sub_18001C61C
 * 00000001800B1C57: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B1C5C: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B1C61: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B1C66: mov     rcx, rax
 * 00000001800B1C69: call    sub_18007C3DC
 * 00000001800B1C6E: nop
 * 00000001800B1C6F: lea     rcx, [rbp+9E40h+var_3530]
 * 00000001800B1C76: call    sub_180010F30
 * 00000001800B1C7B: nop
 * 00000001800B1C7C: lea     rcx, [rbp+9E40h+Src]
 * 00000001800B1C83: call    sub_180010F30
 * 00000001800B1C88: nop
 * 00000001800B1C89: lea     rcx, dword_1801D9220
 * 00000001800B1C90: call    sub_18000C538
 * 00000001800B1C95: mov     rax, [rdi+rbx*8]
 * 00000001800B1C99: mov     ecx, [r15+rax]
 * 00000001800B1C9D: cmp     cs:dword_1801D9224, ecx
 * 00000001800B1CA3: jle     loc_1800B1D7C
 * 00000001800B1CA9: lea     rcx, dword_1801D9224
 * 00000001800B1CB0: call    sub_18000C5A0
 * 00000001800B1CB5: cmp     cs:dword_1801D9224, r14d
 * 00000001800B1CBC: jnz     loc_1800B1D7C
 * 00000001800B1CC2: call    sub_1800B18EC
 * 00000001800B1CC7: mov     qword ptr [rsp+9F40h+var_9EF8+8], rax
 * 00000001800B1CCC: add     rax, 9F8h
 * 00000001800B1CD2: mov     qword ptr [rsp+9F40h+var_9EE8], rax
 * 00000001800B1CD7: movups  xmm7, [rsp+9F40h+var_9EF8+8]
 * 00000001800B1CDC: movups  [rbp+9E40h+var_8D50], xmm7
 * 00000001800B1CE3: mov     dword ptr [rbp+9E40h+var_8D40], 5
 * 00000001800B1CED: mov     dword ptr [rbp+9E40h+var_8D40+4], esi
 * 00000001800B1CF3: movups  xmm6, [rbp+9E40h+var_8D40]
 * 00000001800B1CFA: call    sub_1800B1A0C
 * 00000001800B1CFF: mov     r8, rax
 * 00000001800B1D02: mov     r9d, r12d
 * 00000001800B1D05: mov     rdx, rsi
 * 00000001800B1D08: lea     rcx, [rbp+9E40h+var_31D0]; Src
 * 00000001800B1D0F: call    sub_18007C338
 * 00000001800B1D14: nop
 * 00000001800B1D15: mov     r8, rax
 * 00000001800B1D18: mov     rdx, r13
 * 00000001800B1D1B: lea     rcx, [rbp+9E40h+var_32F0]
 * 00000001800B1D22: call    sub_18001C6E8
 * 00000001800B1D27: nop
 * 00000001800B1D28: lea     r8, aPixel; "/Pixel"
 * 00000001800B1D2F: mov     rdx, rax
 * 00000001800B1D32: lea     rcx, [rbp+9E40h+var_69B0]
 * 00000001800B1D39: call    sub_18001C61C
 * 00000001800B1D3E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B1D43: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B1D48: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B1D4D: mov     rcx, rax
 * 00000001800B1D50: call    sub_18007C3DC
 * 00000001800B1D55: nop
 * 00000001800B1D56: lea     rcx, [rbp+9E40h+var_32F0]
 * 00000001800B1D5D: call    sub_180010F30
 * 00000001800B1D62: nop
 * 00000001800B1D63: lea     rcx, [rbp+9E40h+var_31D0]
 * 00000001800B1D6A: call    sub_180010F30
 * 00000001800B1D6F: nop
 * 00000001800B1D70: lea     rcx, dword_1801D9224
 * 00000001800B1D77: call    sub_18000C538
 * 00000001800B1D7C: mov     rax, [rdi+rbx*8]
 * 00000001800B1D80: mov     eax, [r15+rax]
 * 00000001800B1D84: cmp     cs:dword_1801D9228, eax
 * 00000001800B1D8A: jle     loc_1800B1E65
 * 00000001800B1D90: lea     rcx, dword_1801D9228
 * 00000001800B1D97: call    sub_18000C5A0
 * 00000001800B1D9C: cmp     cs:dword_1801D9228, r14d
 * 00000001800B1DA3: jnz     loc_1800B1E65
 * 00000001800B1DA9: call    sub_1800B18CC
 * 00000001800B1DAE: mov     qword ptr [rsp+9F40h+var_9EE8+8], rax
 * 00000001800B1DB3: add     rax, 63E4h
 * 00000001800B1DB9: mov     qword ptr [rsp+9F40h+var_9ED8], rax
 * 00000001800B1DBE: movups  xmm7, [rsp+9F40h+var_9EE8+8]
 * 00000001800B1DC3: movups  [rbp+9E40h+var_8D30], xmm7
 * 00000001800B1DCA: mov     dword ptr [rbp+9E40h+var_8D20], 5
 * 00000001800B1DD4: mov     dword ptr [rbp+9E40h+var_8D20+4], esi
 * 00000001800B1DDA: movups  xmm6, [rbp+9E40h+var_8D20]
 * 00000001800B1DE1: call    sub_1800B1A0C
 * 00000001800B1DE6: mov     r8, rax
 * 00000001800B1DE9: mov     r9d, r12d
 * 00000001800B1DEC: mov     edx, 2
 * 00000001800B1DF1: lea     rcx, [rbp+9E40h+var_2F90]; Src
 * 00000001800B1DF8: call    sub_18007C338
 * 00000001800B1DFD: nop
 * 00000001800B1DFE: mov     r8, rax
 * 00000001800B1E01: mov     rdx, r13
 * 00000001800B1E04: lea     rcx, [rbp+9E40h+var_30B0]
 * 00000001800B1E0B: call    sub_18001C6E8
 * 00000001800B1E10: nop
 * 00000001800B1E11: lea     r8, aPixel; "/Pixel"
 * 00000001800B1E18: mov     rdx, rax
 * 00000001800B1E1B: lea     rcx, [rbp+9E40h+var_6950]
 * 00000001800B1E22: call    sub_18001C61C
 * 00000001800B1E27: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B1E2C: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B1E31: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B1E36: mov     rcx, rax
 * 00000001800B1E39: call    sub_18007C3DC
 * 00000001800B1E3E: nop
 * 00000001800B1E3F: lea     rcx, [rbp+9E40h+var_30B0]
 * 00000001800B1E46: call    sub_180010F30
 * 00000001800B1E4B: nop
 * 00000001800B1E4C: lea     rcx, [rbp+9E40h+var_2F90]
 * 00000001800B1E53: call    sub_180010F30
 * 00000001800B1E58: nop
 * 00000001800B1E59: lea     rcx, dword_1801D9228
 * 00000001800B1E60: call    sub_18000C538
 * 00000001800B1E65: mov     rax, [rdi+rbx*8]
 * 00000001800B1E69: mov     eax, [r15+rax]
 * 00000001800B1E6D: cmp     cs:dword_1801D922C, eax
 * 00000001800B1E73: jle     loc_1800B1F4E
 * 00000001800B1E79: lea     rcx, dword_1801D922C
 * 00000001800B1E80: call    sub_18000C5A0
 * 00000001800B1E85: cmp     cs:dword_1801D922C, r14d
 * 00000001800B1E8C: jnz     loc_1800B1F4E
 * 00000001800B1E92: call    sub_1800B18FC
 * 00000001800B1E97: mov     qword ptr [rsp+9F40h+var_9ED8+8], rax
 * 00000001800B1E9C: add     rax, 31A4h
 * 00000001800B1EA2: mov     [rsp+9F40h+var_9EC8], rax
 * 00000001800B1EA7: movups  xmm7, [rsp+9F40h+var_9ED8+8]
 * 00000001800B1EAC: movups  [rbp+9E40h+var_8D10], xmm7
 * 00000001800B1EB3: mov     dword ptr [rbp+9E40h+var_8D00], 5
 * 00000001800B1EBD: mov     dword ptr [rbp+9E40h+var_8D00+4], esi
 * 00000001800B1EC3: movups  xmm6, [rbp+9E40h+var_8D00]
 * 00000001800B1ECA: call    sub_1800B1A0C
 * 00000001800B1ECF: mov     r8, rax
 * 00000001800B1ED2: mov     r9d, r12d
 * 00000001800B1ED5: mov     edx, 4
 * 00000001800B1EDA: lea     rcx, [rbp+9E40h+var_2D50]; Src
 * 00000001800B1EE1: call    sub_18007C338
 * 00000001800B1EE6: nop
 * 00000001800B1EE7: mov     r8, rax
 * 00000001800B1EEA: mov     rdx, r13
 * 00000001800B1EED: lea     rcx, [rbp+9E40h+var_2E70]
 * 00000001800B1EF4: call    sub_18001C6E8
 * 00000001800B1EF9: nop
 * 00000001800B1EFA: lea     r8, aPixel; "/Pixel"
 * 00000001800B1F01: mov     rdx, rax
 * 00000001800B1F04: lea     rcx, [rbp+9E40h+var_68F0]
 * 00000001800B1F0B: call    sub_18001C61C
 * 00000001800B1F10: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B1F15: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B1F1A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B1F1F: mov     rcx, rax
 * 00000001800B1F22: call    sub_18007C3DC
 * 00000001800B1F27: nop
 * 00000001800B1F28: lea     rcx, [rbp+9E40h+var_2E70]
 * 00000001800B1F2F: call    sub_180010F30
 * 00000001800B1F34: nop
 * 00000001800B1F35: lea     rcx, [rbp+9E40h+var_2D50]
 * 00000001800B1F3C: call    sub_180010F30
 * 00000001800B1F41: nop
 * 00000001800B1F42: lea     rcx, dword_1801D922C
 * 00000001800B1F49: call    sub_18000C538
 * 00000001800B1F4E: mov     rax, [rdi+rbx*8]
 * 00000001800B1F52: mov     ecx, [r15+rax]
 * 00000001800B1F56: cmp     cs:dword_1801D9230, ecx
 * 00000001800B1F5C: jle     loc_1800B2034
 * 00000001800B1F62: lea     rcx, dword_1801D9230
 * 00000001800B1F69: call    sub_18000C5A0
 * 00000001800B1F6E: cmp     cs:dword_1801D9230, r14d
 * 00000001800B1F75: jnz     loc_1800B2034
 * 00000001800B1F7B: call    sub_1800B18EC
 * 00000001800B1F80: mov     qword ptr [rbp+9E40h+var_9EC0], rax
 * 00000001800B1F84: add     rax, 9F8h
 * 00000001800B1F8A: mov     qword ptr [rbp+9E40h+var_9EC0+8], rax
 * 00000001800B1F8E: movups  xmm7, [rbp+9E40h+var_9EC0]
 * 00000001800B1F92: movups  [rbp+9E40h+var_8CF0], xmm7
 * 00000001800B1F99: mov     dword ptr [rbp+9E40h+var_8CE0], 5
 * 00000001800B1FA3: mov     dword ptr [rbp+9E40h+var_8CE0+4], esi
 * 00000001800B1FA9: movups  xmm6, [rbp+9E40h+var_8CE0]
 * 00000001800B1FB0: call    sub_1800B1A0C
 * 00000001800B1FB5: mov     r8, rax
 * 00000001800B1FB8: mov     r9d, r12d
 * 00000001800B1FBB: mov     edx, 5
 * 00000001800B1FC0: lea     rcx, [rbp+9E40h+var_2B70]; Src
 * 00000001800B1FC7: call    sub_18007C338
 * 00000001800B1FCC: nop
 * 00000001800B1FCD: mov     r8, rax
 * 00000001800B1FD0: mov     rdx, r13
 * 00000001800B1FD3: lea     rcx, [rbp+9E40h+var_2C70]
 * 00000001800B1FDA: call    sub_18001C6E8
 * 00000001800B1FDF: nop
 * 00000001800B1FE0: lea     r8, aPixel; "/Pixel"
 * 00000001800B1FE7: mov     rdx, rax
 * 00000001800B1FEA: lea     rcx, [rbp+9E40h+var_6890]
 * 00000001800B1FF1: call    sub_18001C61C
 * 00000001800B1FF6: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B1FFB: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2000: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2005: mov     rcx, rax
 * 00000001800B2008: call    sub_18007C3DC
 * 00000001800B200D: nop
 * 00000001800B200E: lea     rcx, [rbp+9E40h+var_2C70]
 * 00000001800B2015: call    sub_180010F30
 * 00000001800B201A: nop
 * 00000001800B201B: lea     rcx, [rbp+9E40h+var_2B70]
 * 00000001800B2022: call    sub_180010F30
 * 00000001800B2027: nop
 * 00000001800B2028: lea     rcx, dword_1801D9230
 * 00000001800B202F: call    sub_18000C538
 * 00000001800B2034: mov     rax, [rdi+rbx*8]
 * 00000001800B2038: mov     eax, [r15+rax]
 * 00000001800B203C: cmp     cs:dword_1801D9234, eax
 * 00000001800B2042: jle     loc_1800B211A
 * 00000001800B2048: lea     rcx, dword_1801D9234
 * 00000001800B204F: call    sub_18000C5A0
 * 00000001800B2054: cmp     cs:dword_1801D9234, r14d
 * 00000001800B205B: jnz     loc_1800B211A
 * 00000001800B2061: call    sub_1800B18FC
 * 00000001800B2066: mov     qword ptr [rbp+9E40h+var_9EB0], rax
 * 00000001800B206A: add     rax, 31A4h
 * 00000001800B2070: mov     qword ptr [rbp+9E40h+var_9EB0+8], rax
 * 00000001800B2074: movups  xmm7, [rbp+9E40h+var_9EB0]
 * 00000001800B2078: movups  [rbp+9E40h+var_8CD0], xmm7
 * 00000001800B207F: mov     dword ptr [rbp+9E40h+var_8CC0], 5
 * 00000001800B2089: mov     dword ptr [rbp+9E40h+var_8CC0+4], esi
 * 00000001800B208F: movups  xmm6, [rbp+9E40h+var_8CC0]
 * 00000001800B2096: call    sub_1800B1A0C
 * 00000001800B209B: mov     r8, rax
 * 00000001800B209E: mov     r9d, r12d
 * 00000001800B20A1: mov     edx, 6
 * 00000001800B20A6: lea     rcx, [rbp+9E40h+var_2930]; Src
 * 00000001800B20AD: call    sub_18007C338
 * 00000001800B20B2: nop
 * 00000001800B20B3: mov     r8, rax
 * 00000001800B20B6: mov     rdx, r13
 * 00000001800B20B9: lea     rcx, [rbp+9E40h+var_2A50]
 * 00000001800B20C0: call    sub_18001C6E8
 * 00000001800B20C5: nop
 * 00000001800B20C6: lea     r8, aPixel; "/Pixel"
 * 00000001800B20CD: mov     rdx, rax
 * 00000001800B20D0: lea     rcx, [rbp+9E40h+var_6830]
 * 00000001800B20D7: call    sub_18001C61C
 * 00000001800B20DC: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B20E1: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B20E6: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B20EB: mov     rcx, rax
 * 00000001800B20EE: call    sub_18007C3DC
 * 00000001800B20F3: nop
 * 00000001800B20F4: lea     rcx, [rbp+9E40h+var_2A50]
 * 00000001800B20FB: call    sub_180010F30
 * 00000001800B2100: nop
 * 00000001800B2101: lea     rcx, [rbp+9E40h+var_2930]
 * 00000001800B2108: call    sub_180010F30
 * 00000001800B210D: nop
 * 00000001800B210E: lea     rcx, dword_1801D9234
 * 00000001800B2115: call    sub_18000C538
 * 00000001800B211A: mov     rax, [rdi+rbx*8]
 * 00000001800B211E: mov     eax, [r15+rax]
 * 00000001800B2122: cmp     cs:dword_1801D9238, eax
 * 00000001800B2128: jle     loc_1800B2200
 * 00000001800B212E: lea     rcx, dword_1801D9238
 * 00000001800B2135: call    sub_18000C5A0
 * 00000001800B213A: cmp     cs:dword_1801D9238, r14d
 * 00000001800B2141: jnz     loc_1800B2200
 * 00000001800B2147: call    sub_1800B190C
 * 00000001800B214C: mov     qword ptr [rbp+9E40h+var_9EA0], rax
 * 00000001800B2150: add     rax, 658Ch
 * 00000001800B2156: mov     qword ptr [rbp+9E40h+var_9EA0+8], rax
 * 00000001800B215A: movups  xmm7, [rbp+9E40h+var_9EA0]
 * 00000001800B215E: movups  [rbp+9E40h+var_8CB0], xmm7
 * 00000001800B2165: mov     dword ptr [rbp+9E40h+var_8CA0], 5
 * 00000001800B216F: mov     dword ptr [rbp+9E40h+var_8CA0+4], esi
 * 00000001800B2175: movups  xmm6, [rbp+9E40h+var_8CA0]
 * 00000001800B217C: call    sub_1800B1A0C
 * 00000001800B2181: mov     r8, rax
 * 00000001800B2184: mov     r9d, r12d
 * 00000001800B2187: mov     edx, 8
 * 00000001800B218C: lea     rcx, [rbp+9E40h+var_26F0]; Src
 * 00000001800B2193: call    sub_18007C338
 * 00000001800B2198: nop
 * 00000001800B2199: mov     r8, rax
 * 00000001800B219C: mov     rdx, r13
 * 00000001800B219F: lea     rcx, [rbp+9E40h+var_2810]
 * 00000001800B21A6: call    sub_18001C6E8
 * 00000001800B21AB: nop
 * 00000001800B21AC: lea     r8, aPixel; "/Pixel"
 * 00000001800B21B3: mov     rdx, rax
 * 00000001800B21B6: lea     rcx, [rbp+9E40h+var_67D0]
 * 00000001800B21BD: call    sub_18001C61C
 * 00000001800B21C2: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B21C7: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B21CC: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B21D1: mov     rcx, rax
 * 00000001800B21D4: call    sub_18007C3DC
 * 00000001800B21D9: nop
 * 00000001800B21DA: lea     rcx, [rbp+9E40h+var_2810]
 * 00000001800B21E1: call    sub_180010F30
 * 00000001800B21E6: nop
 * 00000001800B21E7: lea     rcx, [rbp+9E40h+var_26F0]
 * 00000001800B21EE: call    sub_180010F30
 * 00000001800B21F3: nop
 * 00000001800B21F4: lea     rcx, dword_1801D9238
 * 00000001800B21FB: call    sub_18000C538
 * 00000001800B2200: mov     rax, [rdi+rbx*8]
 * 00000001800B2204: mov     ecx, [r15+rax]
 * 00000001800B2208: cmp     cs:dword_1801D923C, ecx
 * 00000001800B220E: jle     loc_1800B22E4
 * 00000001800B2214: lea     rcx, dword_1801D923C
 * 00000001800B221B: call    sub_18000C5A0
 * 00000001800B2220: cmp     cs:dword_1801D923C, r14d
 * 00000001800B2227: jnz     loc_1800B22E4
 * 00000001800B222D: call    sub_1800B191C
 * 00000001800B2232: mov     qword ptr [rbp+9E40h+var_9E90], rax
 * 00000001800B2236: add     rax, 10C8h
 * 00000001800B223C: mov     qword ptr [rbp+9E40h+var_9E90+8], rax
 * 00000001800B2240: movups  xmm7, [rbp+9E40h+var_9E90]
 * 00000001800B2244: movups  [rbp+9E40h+var_8C90], xmm7
 * 00000001800B224B: mov     dword ptr [rbp+9E40h+var_8C80], 5
 * 00000001800B2255: mov     dword ptr [rbp+9E40h+var_8C80+4], esi
 * 00000001800B225B: movups  xmm6, [rbp+9E40h+var_8C80]
 * 00000001800B2262: call    sub_1800B1A0C
 * 00000001800B2267: mov     r8, rax
 * 00000001800B226A: mov     r9d, r12d
 * 00000001800B226D: mov     rdx, r12
 * 00000001800B2270: lea     rcx, [rbp+9E40h+var_24B0]; Src
 * 00000001800B2277: call    sub_18007C338
 * 00000001800B227C: nop
 * 00000001800B227D: mov     r8, rax
 * 00000001800B2280: mov     rdx, r13
 * 00000001800B2283: lea     rcx, [rbp+9E40h+var_25D0]
 * 00000001800B228A: call    sub_18001C6E8
 * 00000001800B228F: nop
 * 00000001800B2290: lea     r8, aPixel; "/Pixel"
 * 00000001800B2297: mov     rdx, rax
 * 00000001800B229A: lea     rcx, [rbp+9E40h+var_6770]
 * 00000001800B22A1: call    sub_18001C61C
 * 00000001800B22A6: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B22AB: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B22B0: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B22B5: mov     rcx, rax
 * 00000001800B22B8: call    sub_18007C3DC
 * 00000001800B22BD: nop
 * 00000001800B22BE: lea     rcx, [rbp+9E40h+var_25D0]
 * 00000001800B22C5: call    sub_180010F30
 * 00000001800B22CA: nop
 * 00000001800B22CB: lea     rcx, [rbp+9E40h+var_24B0]
 * 00000001800B22D2: call    sub_180010F30
 * 00000001800B22D7: nop
 * 00000001800B22D8: lea     rcx, dword_1801D923C
 * 00000001800B22DF: call    sub_18000C538
 * 00000001800B22E4: mov     rax, [rdi+rbx*8]
 * 00000001800B22E8: mov     eax, [r15+rax]
 * 00000001800B22EC: cmp     cs:dword_1801D9240, eax
 * 00000001800B22F2: jle     loc_1800B23CA
 * 00000001800B22F8: lea     rcx, dword_1801D9240
 * 00000001800B22FF: call    sub_18000C5A0
 * 00000001800B2304: cmp     cs:dword_1801D9240, r14d
 * 00000001800B230B: jnz     loc_1800B23CA
 * 00000001800B2311: call    sub_1800B190C
 * 00000001800B2316: mov     qword ptr [rbp+9E40h+var_9E80], rax
 * 00000001800B231A: add     rax, 658Ch
 * 00000001800B2320: mov     qword ptr [rbp+9E40h+var_9E80+8], rax
 * 00000001800B2324: movups  xmm7, [rbp+9E40h+var_9E80]
 * 00000001800B2328: movups  [rbp+9E40h+var_8C70], xmm7
 * 00000001800B232F: mov     dword ptr [rbp+9E40h+var_8C60], 5
 * 00000001800B2339: mov     dword ptr [rbp+9E40h+var_8C60+4], esi
 * 00000001800B233F: movups  xmm6, [rbp+9E40h+var_8C60]
 * 00000001800B2346: call    sub_1800B1A0C
 * 00000001800B234B: mov     r8, rax
 * 00000001800B234E: mov     r9d, r12d
 * 00000001800B2351: mov     edx, 0Ah
 * 00000001800B2356: lea     rcx, [rbp+9E40h+var_2270]; Src
 * 00000001800B235D: call    sub_18007C338
 * 00000001800B2362: nop
 * 00000001800B2363: mov     r8, rax
 * 00000001800B2366: mov     rdx, r13
 * 00000001800B2369: lea     rcx, [rbp+9E40h+var_2390]
 * 00000001800B2370: call    sub_18001C6E8
 * 00000001800B2375: nop
 * 00000001800B2376: lea     r8, aPixel; "/Pixel"
 * 00000001800B237D: mov     rdx, rax
 * 00000001800B2380: lea     rcx, [rbp+9E40h+var_6710]
 * 00000001800B2387: call    sub_18001C61C
 * 00000001800B238C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2391: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2396: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B239B: mov     rcx, rax
 * 00000001800B239E: call    sub_18007C3DC
 * 00000001800B23A3: nop
 * 00000001800B23A4: lea     rcx, [rbp+9E40h+var_2390]
 * 00000001800B23AB: call    sub_180010F30
 * 00000001800B23B0: nop
 * 00000001800B23B1: lea     rcx, [rbp+9E40h+var_2270]
 * 00000001800B23B8: call    sub_180010F30
 * 00000001800B23BD: nop
 * 00000001800B23BE: lea     rcx, dword_1801D9240
 * 00000001800B23C5: call    sub_18000C538
 * 00000001800B23CA: mov     rax, [rdi+rbx*8]
 * 00000001800B23CE: mov     eax, [r15+rax]
 * 00000001800B23D2: cmp     cs:dword_1801D9244, eax
 * 00000001800B23D8: jle     loc_1800B24B0
 * 00000001800B23DE: lea     rcx, dword_1801D9244
 * 00000001800B23E5: call    sub_18000C5A0
 * 00000001800B23EA: cmp     cs:dword_1801D9244, r14d
 * 00000001800B23F1: jnz     loc_1800B24B0
 * 00000001800B23F7: call    sub_1800B193C
 * 00000001800B23FC: mov     qword ptr [rbp+9E40h+var_9E70], rax
 * 00000001800B2400: add     rax, 65B8h
 * 00000001800B2406: mov     qword ptr [rbp+9E40h+var_9E70+8], rax
 * 00000001800B240A: movups  xmm7, [rbp+9E40h+var_9E70]
 * 00000001800B240E: movups  [rbp+9E40h+var_8C50], xmm7
 * 00000001800B2415: mov     dword ptr [rbp+9E40h+var_8C40], 5
 * 00000001800B241F: mov     dword ptr [rbp+9E40h+var_8C40+4], esi
 * 00000001800B2425: movups  xmm6, [rbp+9E40h+var_8C40]
 * 00000001800B242C: call    sub_1800B1A0C
 * 00000001800B2431: mov     r8, rax
 * 00000001800B2434: mov     r9d, r12d
 * 00000001800B2437: mov     edx, 10h
 * 00000001800B243C: lea     rcx, [rbp+9E40h+var_2030]; Src
 * 00000001800B2443: call    sub_18007C338
 * 00000001800B2448: nop
 * 00000001800B2449: mov     r8, rax
 * 00000001800B244C: mov     rdx, r13
 * 00000001800B244F: lea     rcx, [rbp+9E40h+var_2150]
 * 00000001800B2456: call    sub_18001C6E8
 * 00000001800B245B: nop
 * 00000001800B245C: lea     r8, aPixel; "/Pixel"
 * 00000001800B2463: mov     rdx, rax
 * 00000001800B2466: lea     rcx, [rbp+9E40h+var_66B0]
 * 00000001800B246D: call    sub_18001C61C
 * 00000001800B2472: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2477: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B247C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2481: mov     rcx, rax
 * 00000001800B2484: call    sub_18007C3DC
 * 00000001800B2489: nop
 * 00000001800B248A: lea     rcx, [rbp+9E40h+var_2150]
 * 00000001800B2491: call    sub_180010F30
 * 00000001800B2496: nop
 * 00000001800B2497: lea     rcx, [rbp+9E40h+var_2030]
 * 00000001800B249E: call    sub_180010F30
 * 00000001800B24A3: nop
 * 00000001800B24A4: lea     rcx, dword_1801D9244
 * 00000001800B24AB: call    sub_18000C538
 * 00000001800B24B0: mov     rax, [rdi+rbx*8]
 * 00000001800B24B4: mov     eax, [r15+rax]
 * 00000001800B24B8: cmp     cs:dword_1801D9248, eax
 * 00000001800B24BE: jle     loc_1800B2596
 * 00000001800B24C4: lea     rcx, dword_1801D9248
 * 00000001800B24CB: call    sub_18000C5A0
 * 00000001800B24D0: cmp     cs:dword_1801D9248, r14d
 * 00000001800B24D7: jnz     loc_1800B2596
 * 00000001800B24DD: call    sub_1800B193C
 * 00000001800B24E2: mov     qword ptr [rbp+9E40h+var_9E60], rax
 * 00000001800B24E6: add     rax, 65B8h
 * 00000001800B24EC: mov     qword ptr [rbp+9E40h+var_9E60+8], rax
 * 00000001800B24F0: movups  xmm7, [rbp+9E40h+var_9E60]
 * 00000001800B24F4: movups  [rbp+9E40h+var_8C30], xmm7
 * 00000001800B24FB: mov     dword ptr [rbp+9E40h+var_8C20], 5
 * 00000001800B2505: mov     dword ptr [rbp+9E40h+var_8C20+4], esi
 * 00000001800B250B: movups  xmm6, [rbp+9E40h+var_8C20]
 * 00000001800B2512: call    sub_1800B1A0C
 * 00000001800B2517: mov     r8, rax
 * 00000001800B251A: mov     r9d, r12d
 * 00000001800B251D: mov     edx, 12h
 * 00000001800B2522: lea     rcx, [rbp+9E40h+var_1DF0]; Src
 * 00000001800B2529: call    sub_18007C338
 * 00000001800B252E: nop
 * 00000001800B252F: mov     r8, rax
 * 00000001800B2532: mov     rdx, r13
 * 00000001800B2535: lea     rcx, [rbp+9E40h+var_1F10]
 * 00000001800B253C: call    sub_18001C6E8
 * 00000001800B2541: nop
 * 00000001800B2542: lea     r8, aPixel; "/Pixel"
 * 00000001800B2549: mov     rdx, rax
 * 00000001800B254C: lea     rcx, [rbp+9E40h+var_6650]
 * 00000001800B2553: call    sub_18001C61C
 * 00000001800B2558: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B255D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2562: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2567: mov     rcx, rax
 * 00000001800B256A: call    sub_18007C3DC
 * 00000001800B256F: nop
 * 00000001800B2570: lea     rcx, [rbp+9E40h+var_1F10]
 * 00000001800B2577: call    sub_180010F30
 * 00000001800B257C: nop
 * 00000001800B257D: lea     rcx, [rbp+9E40h+var_1DF0]
 * 00000001800B2584: call    sub_180010F30
 * 00000001800B2589: nop
 * 00000001800B258A: lea     rcx, dword_1801D9248
 * 00000001800B2591: call    sub_18000C538
 * 00000001800B2596: mov     rax, [rdi+rbx*8]
 * 00000001800B259A: mov     eax, [r15+rax]
 * 00000001800B259E: cmp     cs:dword_1801D924C, eax
 * 00000001800B25A4: jle     loc_1800B267C
 * 00000001800B25AA: lea     rcx, dword_1801D924C
 * 00000001800B25B1: call    sub_18000C5A0
 * 00000001800B25B6: cmp     cs:dword_1801D924C, r14d
 * 00000001800B25BD: jnz     loc_1800B267C
 * 00000001800B25C3: call    sub_1800B194C
 * 00000001800B25C8: mov     qword ptr [rbp+9E40h+var_9E50], rax
 * 00000001800B25CC: add     rax, 32F8h
 * 00000001800B25D2: mov     qword ptr [rbp+9E40h+var_9E50+8], rax
 * 00000001800B25D6: movups  xmm7, [rbp+9E40h+var_9E50]
 * 00000001800B25DA: movups  [rbp+9E40h+var_8C10], xmm7
 * 00000001800B25E1: mov     dword ptr [rbp+9E40h+var_8C00], 5
 * 00000001800B25EB: mov     dword ptr [rbp+9E40h+var_8C00+4], esi
 * 00000001800B25F1: movups  xmm6, [rbp+9E40h+var_8C00]
 * 00000001800B25F8: call    sub_1800B1A0C
 * 00000001800B25FD: mov     r8, rax
 * 00000001800B2600: mov     r9d, r12d
 * 00000001800B2603: mov     edx, 14h
 * 00000001800B2608: lea     rcx, [rbp+9E40h+var_1BB0]; Src
 * 00000001800B260F: call    sub_18007C338
 * 00000001800B2614: nop
 * 00000001800B2615: mov     r8, rax
 * 00000001800B2618: mov     rdx, r13
 * 00000001800B261B: lea     rcx, [rbp+9E40h+var_1CD0]
 * 00000001800B2622: call    sub_18001C6E8
 * 00000001800B2627: nop
 * 00000001800B2628: lea     r8, aPixel; "/Pixel"
 * 00000001800B262F: mov     rdx, rax
 * 00000001800B2632: lea     rcx, [rbp+9E40h+var_65F0]
 * 00000001800B2639: call    sub_18001C61C
 * 00000001800B263E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2643: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2648: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B264D: mov     rcx, rax
 * 00000001800B2650: call    sub_18007C3DC
 * 00000001800B2655: nop
 * 00000001800B2656: lea     rcx, [rbp+9E40h+var_1CD0]
 * 00000001800B265D: call    sub_180010F30
 * 00000001800B2662: nop
 * 00000001800B2663: lea     rcx, [rbp+9E40h+var_1BB0]
 * 00000001800B266A: call    sub_180010F30
 * 00000001800B266F: nop
 * 00000001800B2670: lea     rcx, dword_1801D924C
 * 00000001800B2677: call    sub_18000C538
 * 00000001800B267C: mov     rax, [rdi+rbx*8]
 * 00000001800B2680: mov     eax, [r15+rax]
 * 00000001800B2684: cmp     cs:dword_1801D9250, eax
 * 00000001800B268A: jle     loc_1800B2762
 * 00000001800B2690: lea     rcx, dword_1801D9250
 * 00000001800B2697: call    sub_18000C5A0
 * 00000001800B269C: cmp     cs:dword_1801D9250, r14d
 * 00000001800B26A3: jnz     loc_1800B2762
 * 00000001800B26A9: call    sub_1800B194C
 * 00000001800B26AE: mov     qword ptr [rbp+9E40h+var_9E40], rax
 * 00000001800B26B2: add     rax, 32F8h
 * 00000001800B26B8: mov     qword ptr [rbp+9E40h+var_9E40+8], rax
 * 00000001800B26BC: movups  xmm7, [rbp+9E40h+var_9E40]
 * 00000001800B26C0: movups  [rbp+9E40h+var_8BF0], xmm7
 * 00000001800B26C7: mov     dword ptr [rbp+9E40h+var_8BE0], 5
 * 00000001800B26D1: mov     dword ptr [rbp+9E40h+var_8BE0+4], esi
 * 00000001800B26D7: movups  xmm6, [rbp+9E40h+var_8BE0]
 * 00000001800B26DE: call    sub_1800B1A0C
 * 00000001800B26E3: mov     r8, rax
 * 00000001800B26E6: mov     r9d, r12d
 * 00000001800B26E9: mov     edx, 16h
 * 00000001800B26EE: lea     rcx, [rbp+9E40h+var_1970]; Src
 * 00000001800B26F5: call    sub_18007C338
 * 00000001800B26FA: nop
 * 00000001800B26FB: mov     r8, rax
 * 00000001800B26FE: mov     rdx, r13
 * 00000001800B2701: lea     rcx, [rbp+9E40h+var_1A90]
 * 00000001800B2708: call    sub_18001C6E8
 * 00000001800B270D: nop
 * 00000001800B270E: lea     r8, aPixel; "/Pixel"
 * 00000001800B2715: mov     rdx, rax
 * 00000001800B2718: lea     rcx, [rbp+9E40h+var_6590]
 * 00000001800B271F: call    sub_18001C61C
 * 00000001800B2724: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2729: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B272E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2733: mov     rcx, rax
 * 00000001800B2736: call    sub_18007C3DC
 * 00000001800B273B: nop
 * 00000001800B273C: lea     rcx, [rbp+9E40h+var_1A90]
 * 00000001800B2743: call    sub_180010F30
 * 00000001800B2748: nop
 * 00000001800B2749: lea     rcx, [rbp+9E40h+var_1970]
 * 00000001800B2750: call    sub_180010F30
 * 00000001800B2755: nop
 * 00000001800B2756: lea     rcx, dword_1801D9250
 * 00000001800B275D: call    sub_18000C538
 * 00000001800B2762: mov     rax, [rdi+rbx*8]
 * 00000001800B2766: mov     eax, [r15+rax]
 * 00000001800B276A: cmp     cs:dword_1801D9254, eax
 * 00000001800B2770: jle     loc_1800B2848
 * 00000001800B2776: lea     rcx, dword_1801D9254
 * 00000001800B277D: call    sub_18000C5A0
 * 00000001800B2782: cmp     cs:dword_1801D9254, r14d
 * 00000001800B2789: jnz     loc_1800B2848
 * 00000001800B278F: call    sub_1800B195C
 * 00000001800B2794: mov     qword ptr [rbp+9E40h+var_9E30], rax
 * 00000001800B2798: add     rax, 678Ch
 * 00000001800B279E: mov     qword ptr [rbp+9E40h+var_9E30+8], rax
 * 00000001800B27A2: movups  xmm7, [rbp+9E40h+var_9E30]
 * 00000001800B27A6: movups  [rbp+9E40h+var_8BD0], xmm7
 * 00000001800B27AD: mov     dword ptr [rbp+9E40h+var_8BC0], 5
 * 00000001800B27B7: mov     dword ptr [rbp+9E40h+var_8BC0+4], esi
 * 00000001800B27BD: movups  xmm6, [rbp+9E40h+var_8BC0]
 * 00000001800B27C4: call    sub_1800B1A0C
 * 00000001800B27C9: mov     r8, rax
 * 00000001800B27CC: mov     r9d, r12d
 * 00000001800B27CF: mov     edx, 18h
 * 00000001800B27D4: lea     rcx, [rbp+9E40h+var_1730]; Src
 * 00000001800B27DB: call    sub_18007C338
 * 00000001800B27E0: nop
 * 00000001800B27E1: mov     r8, rax
 * 00000001800B27E4: mov     rdx, r13
 * 00000001800B27E7: lea     rcx, [rbp+9E40h+var_1850]
 * 00000001800B27EE: call    sub_18001C6E8
 * 00000001800B27F3: nop
 * 00000001800B27F4: lea     r8, aPixel; "/Pixel"
 * 00000001800B27FB: mov     rdx, rax
 * 00000001800B27FE: lea     rcx, [rbp+9E40h+var_6530]
 * 00000001800B2805: call    sub_18001C61C
 * 00000001800B280A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B280F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2814: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2819: mov     rcx, rax
 * 00000001800B281C: call    sub_18007C3DC
 * 00000001800B2821: nop
 * 00000001800B2822: lea     rcx, [rbp+9E40h+var_1850]
 * 00000001800B2829: call    sub_180010F30
 * 00000001800B282E: nop
 * 00000001800B282F: lea     rcx, [rbp+9E40h+var_1730]
 * 00000001800B2836: call    sub_180010F30
 * 00000001800B283B: nop
 * 00000001800B283C: lea     rcx, dword_1801D9254
 * 00000001800B2843: call    sub_18000C538
 * 00000001800B2848: mov     rax, [rdi+rbx*8]
 * 00000001800B284C: mov     eax, [r15+rax]
 * 00000001800B2850: cmp     cs:dword_1801D9258, eax
 * 00000001800B2856: jle     loc_1800B292E
 * 00000001800B285C: lea     rcx, dword_1801D9258
 * 00000001800B2863: call    sub_18000C5A0
 * 00000001800B2868: cmp     cs:dword_1801D9258, r14d
 * 00000001800B286F: jnz     loc_1800B292E
 * 00000001800B2875: call    sub_1800B195C
 * 00000001800B287A: mov     qword ptr [rbp+9E40h+var_9E20], rax
 * 00000001800B287E: add     rax, 678Ch
 * 00000001800B2884: mov     qword ptr [rbp+9E40h+var_9E20+8], rax
 * 00000001800B2888: movups  xmm7, [rbp+9E40h+var_9E20]
 * 00000001800B288C: movups  [rbp+9E40h+var_8BB0], xmm7
 * 00000001800B2893: mov     dword ptr [rbp+9E40h+var_8BA0], 5
 * 00000001800B289D: mov     dword ptr [rbp+9E40h+var_8BA0+4], esi
 * 00000001800B28A3: movups  xmm6, [rbp+9E40h+var_8BA0]
 * 00000001800B28AA: call    sub_1800B1A0C
 * 00000001800B28AF: mov     r8, rax
 * 00000001800B28B2: mov     r9d, r12d
 * 00000001800B28B5: mov     edx, 1Ah
 * 00000001800B28BA: lea     rcx, [rbp+9E40h+var_1490]; Src
 * 00000001800B28C1: call    sub_18007C338
 * 00000001800B28C6: nop
 * 00000001800B28C7: mov     r8, rax
 * 00000001800B28CA: mov     rdx, r13
 * 00000001800B28CD: lea     rcx, [rbp+9E40h+var_15B0]
 * 00000001800B28D4: call    sub_18001C6E8
 * 00000001800B28D9: nop
 * 00000001800B28DA: lea     r8, aPixel; "/Pixel"
 * 00000001800B28E1: mov     rdx, rax
 * 00000001800B28E4: lea     rcx, [rbp+9E40h+var_64D0]
 * 00000001800B28EB: call    sub_18001C61C
 * 00000001800B28F0: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B28F5: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B28FA: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B28FF: mov     rcx, rax
 * 00000001800B2902: call    sub_18007C3DC
 * 00000001800B2907: nop
 * 00000001800B2908: lea     rcx, [rbp+9E40h+var_15B0]
 * 00000001800B290F: call    sub_180010F30
 * 00000001800B2914: nop
 * 00000001800B2915: lea     rcx, [rbp+9E40h+var_1490]
 * 00000001800B291C: call    sub_180010F30
 * 00000001800B2921: nop
 * 00000001800B2922: lea     rcx, dword_1801D9258
 * 00000001800B2929: call    sub_18000C538
 * 00000001800B292E: mov     rax, [rdi+rbx*8]
 * 00000001800B2932: mov     eax, [r15+rax]
 * 00000001800B2936: cmp     cs:dword_1801D925C, eax
 * 00000001800B293C: jle     loc_1800B2A14
 * 00000001800B2942: lea     rcx, dword_1801D925C
 * 00000001800B2949: call    sub_18000C5A0
 * 00000001800B294E: cmp     cs:dword_1801D925C, r14d
 * 00000001800B2955: jnz     loc_1800B2A14
 * 00000001800B295B: call    sub_1800B18CC
 * 00000001800B2960: mov     qword ptr [rbp+9E40h+var_9E10], rax
 * 00000001800B2964: add     rax, 63E4h
 * 00000001800B296A: mov     qword ptr [rbp+9E40h+var_9E10+8], rax
 * 00000001800B296E: movups  xmm7, [rbp+9E40h+var_9E10]
 * 00000001800B2972: movups  [rbp+9E40h+var_8B90], xmm7
 * 00000001800B2979: mov     dword ptr [rbp+9E40h+var_8B80], 5
 * 00000001800B2983: mov     dword ptr [rbp+9E40h+var_8B80+4], esi
 * 00000001800B2989: movups  xmm6, [rbp+9E40h+var_8B80]
 * 00000001800B2990: call    sub_1800B1A0C
 * 00000001800B2995: mov     r8, rax
 * 00000001800B2998: mov     r9d, r12d
 * 00000001800B299B: mov     edx, 20h ; ' '
 * 00000001800B29A0: lea     rcx, [rbp+9E40h+var_1250]; Src
 * 00000001800B29A7: call    sub_18007C338
 * 00000001800B29AC: nop
 * 00000001800B29AD: mov     r8, rax
 * 00000001800B29B0: mov     rdx, r13
 * 00000001800B29B3: lea     rcx, [rbp+9E40h+var_1370]
 * 00000001800B29BA: call    sub_18001C6E8
 * 00000001800B29BF: nop
 * 00000001800B29C0: lea     r8, aPixel; "/Pixel"
 * 00000001800B29C7: mov     rdx, rax
 * 00000001800B29CA: lea     rcx, [rbp+9E40h+var_6470]
 * 00000001800B29D1: call    sub_18001C61C
 * 00000001800B29D6: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B29DB: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B29E0: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B29E5: mov     rcx, rax
 * 00000001800B29E8: call    sub_18007C3DC
 * 00000001800B29ED: nop
 * 00000001800B29EE: lea     rcx, [rbp+9E40h+var_1370]
 * 00000001800B29F5: call    sub_180010F30
 * 00000001800B29FA: nop
 * 00000001800B29FB: lea     rcx, [rbp+9E40h+var_1250]
 * 00000001800B2A02: call    sub_180010F30
 * 00000001800B2A07: nop
 * 00000001800B2A08: lea     rcx, dword_1801D925C
 * 00000001800B2A0F: call    sub_18000C538
 * 00000001800B2A14: mov     rax, [rdi+rbx*8]
 * 00000001800B2A18: mov     eax, [r15+rax]
 * 00000001800B2A1C: cmp     cs:dword_1801D9260, eax
 * 00000001800B2A22: jle     loc_1800B2AFA
 * 00000001800B2A28: lea     rcx, dword_1801D9260
 * 00000001800B2A2F: call    sub_18000C5A0
 * 00000001800B2A34: cmp     cs:dword_1801D9260, r14d
 * 00000001800B2A3B: jnz     loc_1800B2AFA
 * 00000001800B2A41: call    sub_1800B18EC
 * 00000001800B2A46: mov     qword ptr [rbp+9E40h+var_9E00], rax
 * 00000001800B2A4A: add     rax, 9F8h
 * 00000001800B2A50: mov     qword ptr [rbp+9E40h+var_9E00+8], rax
 * 00000001800B2A54: movups  xmm7, [rbp+9E40h+var_9E00]
 * 00000001800B2A58: movups  [rbp+9E40h+var_8B70], xmm7
 * 00000001800B2A5F: mov     dword ptr [rbp+9E40h+var_8B60], 5
 * 00000001800B2A69: mov     dword ptr [rbp+9E40h+var_8B60+4], esi
 * 00000001800B2A6F: movups  xmm6, [rbp+9E40h+var_8B60]
 * 00000001800B2A76: call    sub_1800B1A0C
 * 00000001800B2A7B: mov     r8, rax
 * 00000001800B2A7E: mov     r9d, r12d
 * 00000001800B2A81: mov     edx, 21h ; '!'
 * 00000001800B2A86: lea     rcx, [rbp+9E40h+var_1010]; Src
 * 00000001800B2A8D: call    sub_18007C338
 * 00000001800B2A92: nop
 * 00000001800B2A93: mov     r8, rax
 * 00000001800B2A96: mov     rdx, r13
 * 00000001800B2A99: lea     rcx, [rbp+9E40h+var_1130]
 * 00000001800B2AA0: call    sub_18001C6E8
 * 00000001800B2AA5: nop
 * 00000001800B2AA6: lea     r8, aPixel; "/Pixel"
 * 00000001800B2AAD: mov     rdx, rax
 * 00000001800B2AB0: lea     rcx, [rbp+9E40h+var_69D0]
 * 00000001800B2AB7: call    sub_18001C61C
 * 00000001800B2ABC: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2AC1: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2AC6: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2ACB: mov     rcx, rax
 * 00000001800B2ACE: call    sub_18007C3DC
 * 00000001800B2AD3: nop
 * 00000001800B2AD4: lea     rcx, [rbp+9E40h+var_1130]
 * 00000001800B2ADB: call    sub_180010F30
 * 00000001800B2AE0: nop
 * 00000001800B2AE1: lea     rcx, [rbp+9E40h+var_1010]
 * 00000001800B2AE8: call    sub_180010F30
 * 00000001800B2AED: nop
 * 00000001800B2AEE: lea     rcx, dword_1801D9260
 * 00000001800B2AF5: call    sub_18000C538
 * 00000001800B2AFA: mov     rax, [rdi+rbx*8]
 * 00000001800B2AFE: mov     eax, [r15+rax]
 * 00000001800B2B02: cmp     cs:dword_1801D9264, eax
 * 00000001800B2B08: jle     loc_1800B2BE0
 * 00000001800B2B0E: lea     rcx, dword_1801D9264
 * 00000001800B2B15: call    sub_18000C5A0
 * 00000001800B2B1A: cmp     cs:dword_1801D9264, r14d
 * 00000001800B2B21: jnz     loc_1800B2BE0
 * 00000001800B2B27: call    sub_1800B18CC
 * 00000001800B2B2C: mov     qword ptr [rbp+9E40h+var_9DF0], rax
 * 00000001800B2B30: add     rax, 63E4h
 * 00000001800B2B36: mov     qword ptr [rbp+9E40h+var_9DF0+8], rax
 * 00000001800B2B3A: movups  xmm7, [rbp+9E40h+var_9DF0]
 * 00000001800B2B3E: movups  [rbp+9E40h+var_8B50], xmm7
 * 00000001800B2B45: mov     dword ptr [rbp+9E40h+var_8B40], 5
 * 00000001800B2B4F: mov     dword ptr [rbp+9E40h+var_8B40+4], esi
 * 00000001800B2B55: movups  xmm6, [rbp+9E40h+var_8B40]
 * 00000001800B2B5C: call    sub_1800B1A0C
 * 00000001800B2B61: mov     r8, rax
 * 00000001800B2B64: mov     r9d, r12d
 * 00000001800B2B67: mov     edx, 22h ; '"'
 * 00000001800B2B6C: lea     rcx, [rbp+9E40h+var_DD0]; Src
 * 00000001800B2B73: call    sub_18007C338
 * 00000001800B2B78: nop
 * 00000001800B2B79: mov     r8, rax
 * 00000001800B2B7C: mov     rdx, r13
 * 00000001800B2B7F: lea     rcx, [rbp+9E40h+var_EF0]
 * 00000001800B2B86: call    sub_18001C6E8
 * 00000001800B2B8B: nop
 * 00000001800B2B8C: lea     r8, aPixel; "/Pixel"
 * 00000001800B2B93: mov     rdx, rax
 * 00000001800B2B96: lea     rcx, [rbp+9E40h+var_6930]
 * 00000001800B2B9D: call    sub_18001C61C
 * 00000001800B2BA2: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2BA7: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2BAC: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2BB1: mov     rcx, rax
 * 00000001800B2BB4: call    sub_18007C3DC
 * 00000001800B2BB9: nop
 * 00000001800B2BBA: lea     rcx, [rbp+9E40h+var_EF0]
 * 00000001800B2BC1: call    sub_180010F30
 * 00000001800B2BC6: nop
 * 00000001800B2BC7: lea     rcx, [rbp+9E40h+var_DD0]
 * 00000001800B2BCE: call    sub_180010F30
 * 00000001800B2BD3: nop
 * 00000001800B2BD4: lea     rcx, dword_1801D9264
 * 00000001800B2BDB: call    sub_18000C538
 * 00000001800B2BE0: mov     rax, [rdi+rbx*8]
 * 00000001800B2BE4: mov     eax, [r15+rax]
 * 00000001800B2BE8: cmp     cs:dword_1801D9268, eax
 * 00000001800B2BEE: jle     loc_1800B2CC6
 * 00000001800B2BF4: lea     rcx, dword_1801D9268
 * 00000001800B2BFB: call    sub_18000C5A0
 * 00000001800B2C00: cmp     cs:dword_1801D9268, r14d
 * 00000001800B2C07: jnz     loc_1800B2CC6
 * 00000001800B2C0D: call    sub_1800B190C
 * 00000001800B2C12: mov     qword ptr [rbp+9E40h+var_9DE0], rax
 * 00000001800B2C16: add     rax, 658Ch
 * 00000001800B2C1C: mov     qword ptr [rbp+9E40h+var_9DE0+8], rax
 * 00000001800B2C20: movups  xmm7, [rbp+9E40h+var_9DE0]
 * 00000001800B2C24: movups  [rbp+9E40h+var_8B30], xmm7
 * 00000001800B2C2B: mov     dword ptr [rbp+9E40h+var_8B20], 5
 * 00000001800B2C35: mov     dword ptr [rbp+9E40h+var_8B20+4], esi
 * 00000001800B2C3B: movups  xmm6, [rbp+9E40h+var_8B20]
 * 00000001800B2C42: call    sub_1800B1A0C
 * 00000001800B2C47: mov     r8, rax
 * 00000001800B2C4A: mov     r9d, r12d
 * 00000001800B2C4D: mov     edx, 28h ; '('
 * 00000001800B2C52: lea     rcx, [rbp+9E40h+var_B90]; Src
 * 00000001800B2C59: call    sub_18007C338
 * 00000001800B2C5E: nop
 * 00000001800B2C5F: mov     r8, rax
 * 00000001800B2C62: mov     rdx, r13
 * 00000001800B2C65: lea     rcx, [rbp+9E40h+var_CB0]
 * 00000001800B2C6C: call    sub_18001C6E8
 * 00000001800B2C71: nop
 * 00000001800B2C72: lea     r8, aPixel; "/Pixel"
 * 00000001800B2C79: mov     rdx, rax
 * 00000001800B2C7C: lea     rcx, [rbp+9E40h+var_68B0]
 * 00000001800B2C83: call    sub_18001C61C
 * 00000001800B2C88: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2C8D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2C92: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2C97: mov     rcx, rax
 * 00000001800B2C9A: call    sub_18007C3DC
 * 00000001800B2C9F: nop
 * 00000001800B2CA0: lea     rcx, [rbp+9E40h+var_CB0]
 * 00000001800B2CA7: call    sub_180010F30
 * 00000001800B2CAC: nop
 * 00000001800B2CAD: lea     rcx, [rbp+9E40h+var_B90]
 * 00000001800B2CB4: call    sub_180010F30
 * 00000001800B2CB9: nop
 * 00000001800B2CBA: lea     rcx, dword_1801D9268
 * 00000001800B2CC1: call    sub_18000C538
 * 00000001800B2CC6: mov     rax, [rdi+rbx*8]
 * 00000001800B2CCA: mov     eax, [r15+rax]
 * 00000001800B2CCE: cmp     cs:dword_1801D926C, eax
 * 00000001800B2CD4: jle     loc_1800B2DAC
 * 00000001800B2CDA: lea     rcx, dword_1801D926C
 * 00000001800B2CE1: call    sub_18000C5A0
 * 00000001800B2CE6: cmp     cs:dword_1801D926C, r14d
 * 00000001800B2CED: jnz     loc_1800B2DAC
 * 00000001800B2CF3: call    sub_1800B191C
 * 00000001800B2CF8: mov     qword ptr [rbp+9E40h+var_9DD0], rax
 * 00000001800B2CFC: add     rax, 10C8h
 * 00000001800B2D02: mov     qword ptr [rbp+9E40h+var_9DD0+8], rax
 * 00000001800B2D06: movups  xmm7, [rbp+9E40h+var_9DD0]
 * 00000001800B2D0A: movups  [rbp+9E40h+var_8B10], xmm7
 * 00000001800B2D11: mov     dword ptr [rbp+9E40h+var_8B00], 5
 * 00000001800B2D1B: mov     dword ptr [rbp+9E40h+var_8B00+4], esi
 * 00000001800B2D21: movups  xmm6, [rbp+9E40h+var_8B00]
 * 00000001800B2D28: call    sub_1800B1A0C
 * 00000001800B2D2D: mov     r8, rax
 * 00000001800B2D30: mov     r9d, r12d
 * 00000001800B2D33: mov     edx, 29h ; ')'
 * 00000001800B2D38: lea     rcx, [rbp+9E40h+var_950]; Src
 * 00000001800B2D3F: call    sub_18007C338
 * 00000001800B2D44: nop
 * 00000001800B2D45: mov     r8, rax
 * 00000001800B2D48: mov     rdx, r13
 * 00000001800B2D4B: lea     rcx, [rbp+9E40h+var_A70]
 * 00000001800B2D52: call    sub_18001C6E8
 * 00000001800B2D57: nop
 * 00000001800B2D58: lea     r8, aPixel; "/Pixel"
 * 00000001800B2D5F: mov     rdx, rax
 * 00000001800B2D62: lea     rcx, [rbp+9E40h+var_6810]
 * 00000001800B2D69: call    sub_18001C61C
 * 00000001800B2D6E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2D73: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2D78: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2D7D: mov     rcx, rax
 * 00000001800B2D80: call    sub_18007C3DC
 * 00000001800B2D85: nop
 * 00000001800B2D86: lea     rcx, [rbp+9E40h+var_A70]
 * 00000001800B2D8D: call    sub_180010F30
 * 00000001800B2D92: nop
 * 00000001800B2D93: lea     rcx, [rbp+9E40h+var_950]
 * 00000001800B2D9A: call    sub_180010F30
 * 00000001800B2D9F: nop
 * 00000001800B2DA0: lea     rcx, dword_1801D926C
 * 00000001800B2DA7: call    sub_18000C538
 * 00000001800B2DAC: mov     rax, [rdi+rbx*8]
 * 00000001800B2DB0: mov     eax, [r15+rax]
 * 00000001800B2DB4: cmp     cs:dword_1801D9270, eax
 * 00000001800B2DBA: jle     loc_1800B2E9B
 * 00000001800B2DC0: lea     rcx, dword_1801D9270
 * 00000001800B2DC7: call    sub_18000C5A0
 * 00000001800B2DCC: cmp     cs:dword_1801D9270, r14d
 * 00000001800B2DD3: jnz     loc_1800B2E9B
 * 00000001800B2DD9: call    sub_1800B190C
 * 00000001800B2DDE: mov     qword ptr [rbp+9E40h+var_9DC0], rax
 * 00000001800B2DE5: add     rax, 658Ch
 * 00000001800B2DEB: mov     qword ptr [rbp+9E40h+var_9DC0+8], rax
 * 00000001800B2DF2: movups  xmm7, [rbp+9E40h+var_9DC0]
 * 00000001800B2DF9: movups  [rbp+9E40h+var_8AF0], xmm7
 * 00000001800B2E00: mov     dword ptr [rbp+9E40h+var_8AE0], 5
 * 00000001800B2E0A: mov     dword ptr [rbp+9E40h+var_8AE0+4], esi
 * 00000001800B2E10: movups  xmm6, [rbp+9E40h+var_8AE0]
 * 00000001800B2E17: call    sub_1800B1A0C
 * 00000001800B2E1C: mov     r8, rax
 * 00000001800B2E1F: mov     r9d, r12d
 * 00000001800B2E22: mov     edx, 2Ah ; '*'
 * 00000001800B2E27: lea     rcx, [rbp+9E40h+var_710]; Src
 * 00000001800B2E2E: call    sub_18007C338
 * 00000001800B2E33: nop
 * 00000001800B2E34: mov     r8, rax
 * 00000001800B2E37: mov     rdx, r13
 * 00000001800B2E3A: lea     rcx, [rbp+9E40h+var_830]
 * 00000001800B2E41: call    sub_18001C6E8
 * 00000001800B2E46: nop
 * 00000001800B2E47: lea     r8, aPixel; "/Pixel"
 * 00000001800B2E4E: mov     rdx, rax
 * 00000001800B2E51: lea     rcx, [rbp+9E40h+var_6790]
 * 00000001800B2E58: call    sub_18001C61C
 * 00000001800B2E5D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2E62: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2E67: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2E6C: mov     rcx, rax
 * 00000001800B2E6F: call    sub_18007C3DC
 * 00000001800B2E74: nop
 * 00000001800B2E75: lea     rcx, [rbp+9E40h+var_830]
 * 00000001800B2E7C: call    sub_180010F30
 * 00000001800B2E81: nop
 * 00000001800B2E82: lea     rcx, [rbp+9E40h+var_710]
 * 00000001800B2E89: call    sub_180010F30
 * 00000001800B2E8E: nop
 * 00000001800B2E8F: lea     rcx, dword_1801D9270
 * 00000001800B2E96: call    sub_18000C538
 * 00000001800B2E9B: mov     rax, [rdi+rbx*8]
 * 00000001800B2E9F: mov     eax, [r15+rax]
 * 00000001800B2EA3: cmp     cs:dword_1801D9274, eax
 * 00000001800B2EA9: jle     loc_1800B2F8A
 * 00000001800B2EAF: lea     rcx, dword_1801D9274
 * 00000001800B2EB6: call    sub_18000C5A0
 * 00000001800B2EBB: cmp     cs:dword_1801D9274, r14d
 * 00000001800B2EC2: jnz     loc_1800B2F8A
 * 00000001800B2EC8: call    sub_1800B193C
 * 00000001800B2ECD: mov     qword ptr [rbp+9E40h+var_9DB0], rax
 * 00000001800B2ED4: add     rax, 65B8h
 * 00000001800B2EDA: mov     qword ptr [rbp+9E40h+var_9DB0+8], rax
 * 00000001800B2EE1: movups  xmm7, [rbp+9E40h+var_9DB0]
 * 00000001800B2EE8: movups  [rbp+9E40h+var_8AD0], xmm7
 * 00000001800B2EEF: mov     dword ptr [rbp+9E40h+var_8AC0], 5
 * 00000001800B2EF9: mov     dword ptr [rbp+9E40h+var_8AC0+4], esi
 * 00000001800B2EFF: movups  xmm6, [rbp+9E40h+var_8AC0]
 * 00000001800B2F06: call    sub_1800B1A0C
 * 00000001800B2F0B: mov     r8, rax
 * 00000001800B2F0E: mov     r9d, r12d
 * 00000001800B2F11: mov     edx, 30h ; '0'
 * 00000001800B2F16: lea     rcx, [rbp+9E40h+var_4D0]; Src
 * 00000001800B2F1D: call    sub_18007C338
 * 00000001800B2F22: nop
 * 00000001800B2F23: mov     r8, rax
 * 00000001800B2F26: mov     rdx, r13
 * 00000001800B2F29: lea     rcx, [rbp+9E40h+var_5F0]
 * 00000001800B2F30: call    sub_18001C6E8
 * 00000001800B2F35: nop
 * 00000001800B2F36: lea     r8, aPixel; "/Pixel"
 * 00000001800B2F3D: mov     rdx, rax
 * 00000001800B2F40: lea     rcx, [rbp+9E40h+var_66F0]
 * 00000001800B2F47: call    sub_18001C61C
 * 00000001800B2F4C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2F51: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2F56: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2F5B: mov     rcx, rax
 * 00000001800B2F5E: call    sub_18007C3DC
 * 00000001800B2F63: nop
 * 00000001800B2F64: lea     rcx, [rbp+9E40h+var_5F0]
 * 00000001800B2F6B: call    sub_180010F30
 * 00000001800B2F70: nop
 * 00000001800B2F71: lea     rcx, [rbp+9E40h+var_4D0]
 * 00000001800B2F78: call    sub_180010F30
 * 00000001800B2F7D: nop
 * 00000001800B2F7E: lea     rcx, dword_1801D9274
 * 00000001800B2F85: call    sub_18000C538
 * 00000001800B2F8A: mov     rax, [rdi+rbx*8]
 * 00000001800B2F8E: mov     eax, [r15+rax]
 * 00000001800B2F92: cmp     cs:dword_1801D9278, eax
 * 00000001800B2F98: jle     loc_1800B3079
 * 00000001800B2F9E: lea     rcx, dword_1801D9278
 * 00000001800B2FA5: call    sub_18000C5A0
 * 00000001800B2FAA: cmp     cs:dword_1801D9278, r14d
 * 00000001800B2FB1: jnz     loc_1800B3079
 * 00000001800B2FB7: call    sub_1800B193C
 * 00000001800B2FBC: mov     qword ptr [rbp+9E40h+var_9DA0], rax
 * 00000001800B2FC3: add     rax, 65B8h
 * 00000001800B2FC9: mov     qword ptr [rbp+9E40h+var_9DA0+8], rax
 * 00000001800B2FD0: movups  xmm7, [rbp+9E40h+var_9DA0]
 * 00000001800B2FD7: movups  [rbp+9E40h+var_8AB0], xmm7
 * 00000001800B2FDE: mov     dword ptr [rbp+9E40h+var_8AA0], 5
 * 00000001800B2FE8: mov     dword ptr [rbp+9E40h+var_8AA0+4], esi
 * 00000001800B2FEE: movups  xmm6, [rbp+9E40h+var_8AA0]
 * 00000001800B2FF5: call    sub_1800B1A0C
 * 00000001800B2FFA: mov     r8, rax
 * 00000001800B2FFD: mov     r9d, r12d
 * 00000001800B3000: mov     edx, 32h ; '2'
 * 00000001800B3005: lea     rcx, [rbp+9E40h+var_290]; Src
 * 00000001800B300C: call    sub_18007C338
 * 00000001800B3011: nop
 * 00000001800B3012: mov     r8, rax
 * 00000001800B3015: mov     rdx, r13
 * 00000001800B3018: lea     rcx, [rbp+9E40h+var_3B0]
 * 00000001800B301F: call    sub_18001C6E8
 * 00000001800B3024: nop
 * 00000001800B3025: lea     r8, aPixel; "/Pixel"
 * 00000001800B302C: mov     rdx, rax
 * 00000001800B302F: lea     rcx, [rbp+9E40h+var_6670]
 * 00000001800B3036: call    sub_18001C61C
 * 00000001800B303B: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B3040: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3045: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B304A: mov     rcx, rax
 * 00000001800B304D: call    sub_18007C3DC
 * 00000001800B3052: nop
 * 00000001800B3053: lea     rcx, [rbp+9E40h+var_3B0]
 * 00000001800B305A: call    sub_180010F30
 * 00000001800B305F: nop
 * 00000001800B3060: lea     rcx, [rbp+9E40h+var_290]
 * 00000001800B3067: call    sub_180010F30
 * 00000001800B306C: nop
 * 00000001800B306D: lea     rcx, dword_1801D9278
 * 00000001800B3074: call    sub_18000C538
 * 00000001800B3079: mov     rax, [rdi+rbx*8]
 * 00000001800B307D: mov     eax, [r15+rax]
 * 00000001800B3081: cmp     cs:dword_1801D927C, eax
 * 00000001800B3087: jle     loc_1800B3168
 * 00000001800B308D: lea     rcx, dword_1801D927C
 * 00000001800B3094: call    sub_18000C5A0
 * 00000001800B3099: cmp     cs:dword_1801D927C, r14d
 * 00000001800B30A0: jnz     loc_1800B3168
 * 00000001800B30A6: call    sub_1800B195C
 * 00000001800B30AB: mov     qword ptr [rbp+9E40h+var_9D90], rax
 * 00000001800B30B2: add     rax, 678Ch
 * 00000001800B30B8: mov     qword ptr [rbp+9E40h+var_9D90+8], rax
 * 00000001800B30BF: movups  xmm7, [rbp+9E40h+var_9D90]
 * 00000001800B30C6: movups  [rbp+9E40h+var_8A90], xmm7
 * 00000001800B30CD: mov     dword ptr [rbp+9E40h+var_8A80], 5
 * 00000001800B30D7: mov     dword ptr [rbp+9E40h+var_8A80+4], esi
 * 00000001800B30DD: movups  xmm6, [rbp+9E40h+var_8A80]
 * 00000001800B30E4: call    sub_1800B1A0C
 * 00000001800B30E9: mov     r8, rax
 * 00000001800B30EC: mov     r9d, r12d
 * 00000001800B30EF: mov     edx, 38h ; '8'
 * 00000001800B30F4: lea     rcx, [rbp+9E40h+var_46D0]; Src
 * 00000001800B30FB: call    sub_18007C338
 * 00000001800B3100: nop
 * 00000001800B3101: mov     r8, rax
 * 00000001800B3104: mov     rdx, r13
 * 00000001800B3107: lea     rcx, [rbp+9E40h+var_170]
 * 00000001800B310E: call    sub_18001C6E8
 * 00000001800B3113: nop
 * 00000001800B3114: lea     r8, aPixel; "/Pixel"
 * 00000001800B311B: mov     rdx, rax
 * 00000001800B311E: lea     rcx, [rbp+9E40h+var_65D0]
 * 00000001800B3125: call    sub_18001C61C
 * 00000001800B312A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B312F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3134: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B3139: mov     rcx, rax
 * 00000001800B313C: call    sub_18007C3DC
 * 00000001800B3141: nop
 * 00000001800B3142: lea     rcx, [rbp+9E40h+var_170]
 * 00000001800B3149: call    sub_180010F30
 * 00000001800B314E: nop
 * 00000001800B314F: lea     rcx, [rbp+9E40h+var_46D0]
 * 00000001800B3156: call    sub_180010F30
 * 00000001800B315B: nop
 * 00000001800B315C: lea     rcx, dword_1801D927C
 * 00000001800B3163: call    sub_18000C538
 * 00000001800B3168: mov     rax, [rdi+rbx*8]
 * 00000001800B316C: mov     eax, [r15+rax]
 * 00000001800B3170: cmp     cs:dword_1801D9280, eax
 * 00000001800B3176: jle     loc_1800B3257
 * 00000001800B317C: lea     rcx, dword_1801D9280
 * 00000001800B3183: call    sub_18000C5A0
 * 00000001800B3188: cmp     cs:dword_1801D9280, r14d
 * 00000001800B318F: jnz     loc_1800B3257
 * 00000001800B3195: call    sub_1800B195C
 * 00000001800B319A: mov     qword ptr [rbp+9E40h+var_9D80], rax
 * 00000001800B31A1: add     rax, 678Ch
 * 00000001800B31A7: mov     qword ptr [rbp+9E40h+var_9D80+8], rax
 * 00000001800B31AE: movups  xmm7, [rbp+9E40h+var_9D80]
 * 00000001800B31B5: movups  [rbp+9E40h+var_8A70], xmm7
 * 00000001800B31BC: mov     dword ptr [rbp+9E40h+var_8A60], 5
 * 00000001800B31C6: mov     dword ptr [rbp+9E40h+var_8A60+4], esi
 * 00000001800B31CC: movups  xmm6, [rbp+9E40h+var_8A60]
 * 00000001800B31D3: call    sub_1800B1A0C
 * 00000001800B31D8: mov     r8, rax
 * 00000001800B31DB: mov     r9d, r12d
 * 00000001800B31DE: mov     edx, 3Ah ; ':'
 * 00000001800B31E3: lea     rcx, [rbp+9E40h+var_4610]; Src
 * 00000001800B31EA: call    sub_18007C338
 * 00000001800B31EF: nop
 * 00000001800B31F0: mov     r8, rax
 * 00000001800B31F3: mov     rdx, r13
 * 00000001800B31F6: lea     rcx, [rbp+9E40h+var_4670]
 * 00000001800B31FD: call    sub_18001C6E8
 * 00000001800B3202: nop
 * 00000001800B3203: lea     r8, aPixel; "/Pixel"
 * 00000001800B320A: mov     rdx, rax
 * 00000001800B320D: lea     rcx, [rbp+9E40h+var_6550]
 * 00000001800B3214: call    sub_18001C61C
 * 00000001800B3219: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B321E: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3223: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B3228: mov     rcx, rax
 * 00000001800B322B: call    sub_18007C3DC
 * 00000001800B3230: nop
 * 00000001800B3231: lea     rcx, [rbp+9E40h+var_4670]
 * 00000001800B3238: call    sub_180010F30
 * 00000001800B323D: nop
 * 00000001800B323E: lea     rcx, [rbp+9E40h+var_4610]
 * 00000001800B3245: call    sub_180010F30
 * 00000001800B324A: nop
 * 00000001800B324B: lea     rcx, dword_1801D9280
 * 00000001800B3252: call    sub_18000C538
 * 00000001800B3257: mov     rax, [rdi+rbx*8]
 * 00000001800B325B: mov     eax, [r15+rax]
 * 00000001800B325F: cmp     cs:dword_1801D9284, eax
 * 00000001800B3265: jle     loc_1800B3346
 * 00000001800B326B: lea     rcx, dword_1801D9284
 * 00000001800B3272: call    sub_18000C5A0
 * 00000001800B3277: cmp     cs:dword_1801D9284, r14d
 * 00000001800B327E: jnz     loc_1800B3346
 * 00000001800B3284: call    sub_1800B18CC
 * 00000001800B3289: mov     qword ptr [rbp+9E40h+var_9D70], rax
 * 00000001800B3290: add     rax, 63E4h
 * 00000001800B3296: mov     qword ptr [rbp+9E40h+var_9D70+8], rax
 * 00000001800B329D: movups  xmm7, [rbp+9E40h+var_9D70]
 * 00000001800B32A4: movups  [rbp+9E40h+var_8A50], xmm7
 * 00000001800B32AB: mov     dword ptr [rbp+9E40h+var_8A40], 5
 * 00000001800B32B5: mov     dword ptr [rbp+9E40h+var_8A40+4], esi
 * 00000001800B32BB: movups  xmm6, [rbp+9E40h+var_8A40]
 * 00000001800B32C2: call    sub_1800B1A0C
 * 00000001800B32C7: mov     r8, rax
 * 00000001800B32CA: mov     r9d, r12d
 * 00000001800B32CD: mov     edx, 40h ; '@'
 * 00000001800B32D2: lea     rcx, [rbp+9E40h+var_4550]; Src
 * 00000001800B32D9: call    sub_18007C338
 * 00000001800B32DE: nop
 * 00000001800B32DF: mov     r8, rax
 * 00000001800B32E2: mov     rdx, r13
 * 00000001800B32E5: lea     rcx, [rbp+9E40h+var_45B0]
 * 00000001800B32EC: call    sub_18001C6E8
 * 00000001800B32F1: nop
 * 00000001800B32F2: lea     r8, aPixel; "/Pixel"
 * 00000001800B32F9: mov     rdx, rax
 * 00000001800B32FC: lea     rcx, [rbp+9E40h+var_64B0]
 * 00000001800B3303: call    sub_18001C61C
 * 00000001800B3308: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B330D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3312: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B3317: mov     rcx, rax
 * 00000001800B331A: call    sub_18007C3DC
 * 00000001800B331F: nop
 * 00000001800B3320: lea     rcx, [rbp+9E40h+var_45B0]
 * 00000001800B3327: call    sub_180010F30
 * 00000001800B332C: nop
 * 00000001800B332D: lea     rcx, [rbp+9E40h+var_4550]
 * 00000001800B3334: call    sub_180010F30
 * 00000001800B3339: nop
 * 00000001800B333A: lea     rcx, dword_1801D9284
 * 00000001800B3341: call    sub_18000C538
 * 00000001800B3346: mov     rax, [rdi+rbx*8]
 * 00000001800B334A: mov     eax, [r15+rax]
 * 00000001800B334E: cmp     cs:dword_1801D9288, eax
 * 00000001800B3354: jle     loc_1800B3435
 * 00000001800B335A: lea     rcx, dword_1801D9288
 * 00000001800B3361: call    sub_18000C5A0
 * 00000001800B3366: cmp     cs:dword_1801D9288, r14d
 * 00000001800B336D: jnz     loc_1800B3435
 * 00000001800B3373: call    sub_1800B18CC
 * 00000001800B3378: mov     qword ptr [rbp+9E40h+var_9D60], rax
 * 00000001800B337F: add     rax, 63E4h
 * 00000001800B3385: mov     qword ptr [rbp+9E40h+var_9D60+8], rax
 * 00000001800B338C: movups  xmm7, [rbp+9E40h+var_9D60]
 * 00000001800B3393: movups  [rbp+9E40h+var_8A30], xmm7
 * 00000001800B339A: mov     dword ptr [rbp+9E40h+var_8A20], 5
 * 00000001800B33A4: mov     dword ptr [rbp+9E40h+var_8A20+4], esi
 * 00000001800B33AA: movups  xmm6, [rbp+9E40h+var_8A20]
 * 00000001800B33B1: call    sub_1800B1A0C
 * 00000001800B33B6: mov     r8, rax
 * 00000001800B33B9: mov     r9d, r12d
 * 00000001800B33BC: mov     edx, 42h ; 'B'
 * 00000001800B33C1: lea     rcx, [rbp+9E40h+var_4490]; Src
 * 00000001800B33C8: call    sub_18007C338
 * 00000001800B33CD: nop
 * 00000001800B33CE: mov     r8, rax
 * 00000001800B33D1: mov     rdx, r13
 * 00000001800B33D4: lea     rcx, [rbp+9E40h+var_44F0]
 * 00000001800B33DB: call    sub_18001C6E8
 * 00000001800B33E0: nop
 * 00000001800B33E1: lea     r8, aPixel; "/Pixel"
 * 00000001800B33E8: mov     rdx, rax
 * 00000001800B33EB: lea     rcx, [rbp+9E40h+var_69F0]
 * 00000001800B33F2: call    sub_18001C61C
 * 00000001800B33F7: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B33FC: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3401: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B3406: mov     rcx, rax
 * 00000001800B3409: call    sub_18007C3DC
 * 00000001800B340E: nop
 * 00000001800B340F: lea     rcx, [rbp+9E40h+var_44F0]
 * 00000001800B3416: call    sub_180010F30
 * 00000001800B341B: nop
 * 00000001800B341C: lea     rcx, [rbp+9E40h+var_4490]
 * 00000001800B3423: call    sub_180010F30
 * 00000001800B3428: nop
 * 00000001800B3429: lea     rcx, dword_1801D9288
 * 00000001800B3430: call    sub_18000C538
 * 00000001800B3435: mov     rax, [rdi+rbx*8]
 * 00000001800B3439: mov     eax, [r15+rax]
 * 00000001800B343D: cmp     cs:dword_1801D928C, eax
 * 00000001800B3443: jle     loc_1800B3524
 * 00000001800B3449: lea     rcx, dword_1801D928C
 * 00000001800B3450: call    sub_18000C5A0
 * 00000001800B3455: cmp     cs:dword_1801D928C, r14d
 * 00000001800B345C: jnz     loc_1800B3524
 * 00000001800B3462: call    sub_1800B190C
 * 00000001800B3467: mov     qword ptr [rbp+9E40h+var_9D50], rax
 * 00000001800B346E: add     rax, 658Ch
 * 00000001800B3474: mov     qword ptr [rbp+9E40h+var_9D50+8], rax
 * 00000001800B347B: movups  xmm7, [rbp+9E40h+var_9D50]
 * 00000001800B3482: movups  [rbp+9E40h+var_8A10], xmm7
 * 00000001800B3489: mov     dword ptr [rbp+9E40h+var_8A00], 5
 * 00000001800B3493: mov     dword ptr [rbp+9E40h+var_8A00+4], esi
 * 00000001800B3499: movups  xmm6, [rbp+9E40h+var_8A00]
 * 00000001800B34A0: call    sub_1800B1A0C
 * 00000001800B34A5: mov     r8, rax
 * 00000001800B34A8: mov     r9d, r12d
 * 00000001800B34AB: mov     edx, 48h ; 'H'
 * 00000001800B34B0: lea     rcx, [rbp+9E40h+var_43D0]; Src
 * 00000001800B34B7: call    sub_18007C338
 * 00000001800B34BC: nop
 * 00000001800B34BD: mov     r8, rax
 * 00000001800B34C0: mov     rdx, r13
 * 00000001800B34C3: lea     rcx, [rbp+9E40h+var_4430]
 * 00000001800B34CA: call    sub_18001C6E8
 * 00000001800B34CF: nop
 * 00000001800B34D0: lea     r8, aPixel; "/Pixel"
 * 00000001800B34D7: mov     rdx, rax
 * 00000001800B34DA: lea     rcx, [rbp+9E40h+var_6910]
 * 00000001800B34E1: call    sub_18001C61C
 * 00000001800B34E6: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B34EB: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B34F0: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B34F5: mov     rcx, rax
 * 00000001800B34F8: call    sub_18007C3DC
 * 00000001800B34FD: nop
 * 00000001800B34FE: lea     rcx, [rbp+9E40h+var_4430]
 * 00000001800B3505: call    sub_180010F30
 * 00000001800B350A: nop
 * 00000001800B350B: lea     rcx, [rbp+9E40h+var_43D0]
 * 00000001800B3512: call    sub_180010F30
 * 00000001800B3517: nop
 * 00000001800B3518: lea     rcx, dword_1801D928C
 * 00000001800B351F: call    sub_18000C538
 * 00000001800B3524: mov     rax, [rdi+rbx*8]
 * 00000001800B3528: mov     eax, [r15+rax]
 * 00000001800B352C: cmp     cs:dword_1801D9290, eax
 * 00000001800B3532: jle     loc_1800B3613
 * 00000001800B3538: lea     rcx, dword_1801D9290
 * 00000001800B353F: call    sub_18000C5A0
 * 00000001800B3544: cmp     cs:dword_1801D9290, r14d
 * 00000001800B354B: jnz     loc_1800B3613
 * 00000001800B3551: call    sub_1800B190C
 * 00000001800B3556: mov     qword ptr [rbp+9E40h+var_9D40], rax
 * 00000001800B355D: add     rax, 658Ch
 * 00000001800B3563: mov     qword ptr [rbp+9E40h+var_9D40+8], rax
 * 00000001800B356A: movups  xmm7, [rbp+9E40h+var_9D40]
 * 00000001800B3571: movups  [rbp+9E40h+var_89F0], xmm7
 * 00000001800B3578: mov     dword ptr [rbp+9E40h+var_89E0], 5
 * 00000001800B3582: mov     dword ptr [rbp+9E40h+var_89E0+4], esi
 * 00000001800B3588: movups  xmm6, [rbp+9E40h+var_89E0]
 * 00000001800B358F: call    sub_1800B1A0C
 * 00000001800B3594: mov     r8, rax
 * 00000001800B3597: mov     r9d, r12d
 * 00000001800B359A: mov     edx, 4Ah ; 'J'
 * 00000001800B359F: lea     rcx, [rbp+9E40h+var_4310]; Src
 * 00000001800B35A6: call    sub_18007C338
 * 00000001800B35AB: nop
 * 00000001800B35AC: mov     r8, rax
 * 00000001800B35AF: mov     rdx, r13
 * 00000001800B35B2: lea     rcx, [rbp+9E40h+var_4370]
 * 00000001800B35B9: call    sub_18001C6E8
 * 00000001800B35BE: nop
 * 00000001800B35BF: lea     r8, aPixel; "/Pixel"
 * 00000001800B35C6: mov     rdx, rax
 * 00000001800B35C9: lea     rcx, [rbp+9E40h+var_6850]
 * 00000001800B35D0: call    sub_18001C61C
 * 00000001800B35D5: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B35DA: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B35DF: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B35E4: mov     rcx, rax
 * 00000001800B35E7: call    sub_18007C3DC
 * 00000001800B35EC: nop
 * 00000001800B35ED: lea     rcx, [rbp+9E40h+var_4370]
 * 00000001800B35F4: call    sub_180010F30
 * 00000001800B35F9: nop
 * 00000001800B35FA: lea     rcx, [rbp+9E40h+var_4310]
 * 00000001800B3601: call    sub_180010F30
 * 00000001800B3606: nop
 * 00000001800B3607: lea     rcx, dword_1801D9290
 * 00000001800B360E: call    sub_18000C538
 * 00000001800B3613: mov     rax, [rdi+rbx*8]
 * 00000001800B3617: mov     eax, [r15+rax]
 * 00000001800B361B: cmp     cs:dword_1801D9294, eax
 * 00000001800B3621: jle     loc_1800B3702
 * 00000001800B3627: lea     rcx, dword_1801D9294
 * 00000001800B362E: call    sub_18000C5A0
 * 00000001800B3633: cmp     cs:dword_1801D9294, r14d
 * 00000001800B363A: jnz     loc_1800B3702
 * 00000001800B3640: call    sub_1800B193C
 * 00000001800B3645: mov     qword ptr [rbp+9E40h+var_9D30], rax
 * 00000001800B364C: add     rax, 65B8h
 * 00000001800B3652: mov     qword ptr [rbp+9E40h+var_9D30+8], rax
 * 00000001800B3659: movups  xmm7, [rbp+9E40h+var_9D30]
 * 00000001800B3660: movups  [rbp+9E40h+var_89D0], xmm7
 * 00000001800B3667: mov     dword ptr [rbp+9E40h+var_89C0], 5
 * 00000001800B3671: mov     dword ptr [rbp+9E40h+var_89C0+4], esi
 * 00000001800B3677: movups  xmm6, [rbp+9E40h+var_89C0]
 * 00000001800B367E: call    sub_1800B1A0C
 * 00000001800B3683: mov     r8, rax
 * 00000001800B3686: mov     r9d, r12d
 * 00000001800B3689: mov     edx, 50h ; 'P'
 * 00000001800B368E: lea     rcx, [rbp+9E40h+var_4250]; Src
 * 00000001800B3695: call    sub_18007C338
 * 00000001800B369A: nop
 * 00000001800B369B: mov     r8, rax
 * 00000001800B369E: mov     rdx, r13
 * 00000001800B36A1: lea     rcx, [rbp+9E40h+var_42B0]
 * 00000001800B36A8: call    sub_18001C6E8
 * 00000001800B36AD: nop
 * 00000001800B36AE: lea     r8, aPixel; "/Pixel"
 * 00000001800B36B5: mov     rdx, rax
 * 00000001800B36B8: lea     rcx, [rbp+9E40h+var_6750]
 * 00000001800B36BF: call    sub_18001C61C
 * 00000001800B36C4: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B36C9: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B36CE: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B36D3: mov     rcx, rax
 * 00000001800B36D6: call    sub_18007C3DC
 * 00000001800B36DB: nop
 * 00000001800B36DC: lea     rcx, [rbp+9E40h+var_42B0]
 * 00000001800B36E3: call    sub_180010F30
 * 00000001800B36E8: nop
 * 00000001800B36E9: lea     rcx, [rbp+9E40h+var_4250]
 * 00000001800B36F0: call    sub_180010F30
 * 00000001800B36F5: nop
 * 00000001800B36F6: lea     rcx, dword_1801D9294
 * 00000001800B36FD: call    sub_18000C538
 * 00000001800B3702: mov     rax, [rdi+rbx*8]
 * 00000001800B3706: mov     eax, [r15+rax]
 * 00000001800B370A: cmp     cs:dword_1801D9298, eax
 * 00000001800B3710: jle     loc_1800B37F1
 * 00000001800B3716: lea     rcx, dword_1801D9298
 * 00000001800B371D: call    sub_18000C5A0
 * 00000001800B3722: cmp     cs:dword_1801D9298, r14d
 * 00000001800B3729: jnz     loc_1800B37F1
 * 00000001800B372F: call    sub_1800B193C
 * 00000001800B3734: mov     qword ptr [rbp+9E40h+var_9D20], rax
 * 00000001800B373B: add     rax, 65B8h
 * 00000001800B3741: mov     qword ptr [rbp+9E40h+var_9D20+8], rax
 * 00000001800B3748: movups  xmm7, [rbp+9E40h+var_9D20]
 * 00000001800B374F: movups  [rbp+9E40h+var_89B0], xmm7
 * 00000001800B3756: mov     dword ptr [rbp+9E40h+var_89A0], 5
 * 00000001800B3760: mov     dword ptr [rbp+9E40h+var_89A0+4], esi
 * 00000001800B3766: movups  xmm6, [rbp+9E40h+var_89A0]
 * 00000001800B376D: call    sub_1800B1A0C
 * 00000001800B3772: mov     r8, rax
 * 00000001800B3775: mov     r9d, r12d
 * 00000001800B3778: mov     edx, 52h ; 'R'
 * 00000001800B377D: lea     rcx, [rbp+9E40h+var_4190]; Src
 * 00000001800B3784: call    sub_18007C338
 * 00000001800B3789: nop
 * 00000001800B378A: mov     r8, rax
 * 00000001800B378D: mov     rdx, r13
 * 00000001800B3790: lea     rcx, [rbp+9E40h+var_41F0]
 * 00000001800B3797: call    sub_18001C6E8
 * 00000001800B379C: nop
 * 00000001800B379D: lea     r8, aPixel; "/Pixel"
 * 00000001800B37A4: mov     rdx, rax
 * 00000001800B37A7: lea     rcx, [rbp+9E40h+var_6690]
 * 00000001800B37AE: call    sub_18001C61C
 * 00000001800B37B3: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B37B8: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B37BD: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B37C2: mov     rcx, rax
 * 00000001800B37C5: call    sub_18007C3DC
 * 00000001800B37CA: nop
 * 00000001800B37CB: lea     rcx, [rbp+9E40h+var_41F0]
 * 00000001800B37D2: call    sub_180010F30
 * 00000001800B37D7: nop
 * 00000001800B37D8: lea     rcx, [rbp+9E40h+var_4190]
 * 00000001800B37DF: call    sub_180010F30
 * 00000001800B37E4: nop
 * 00000001800B37E5: lea     rcx, dword_1801D9298
 * 00000001800B37EC: call    sub_18000C538
 * 00000001800B37F1: mov     rax, [rdi+rbx*8]
 * 00000001800B37F5: mov     eax, [r15+rax]
 * 00000001800B37F9: cmp     cs:dword_1801D929C, eax
 * 00000001800B37FF: jle     loc_1800B38E0
 * 00000001800B3805: lea     rcx, dword_1801D929C
 * 00000001800B380C: call    sub_18000C5A0
 * 00000001800B3811: cmp     cs:dword_1801D929C, r14d
 * 00000001800B3818: jnz     loc_1800B38E0
 * 00000001800B381E: call    sub_1800B195C
 * 00000001800B3823: mov     qword ptr [rbp+9E40h+var_9D10], rax
 * 00000001800B382A: add     rax, 678Ch
 * 00000001800B3830: mov     qword ptr [rbp+9E40h+var_9D10+8], rax
 * 00000001800B3837: movups  xmm7, [rbp+9E40h+var_9D10]
 * 00000001800B383E: movups  [rbp+9E40h+var_8990], xmm7
 * 00000001800B3845: mov     dword ptr [rbp+9E40h+var_8980], 5
 * 00000001800B384F: mov     dword ptr [rbp+9E40h+var_8980+4], esi
 * 00000001800B3855: movups  xmm6, [rbp+9E40h+var_8980]
 * 00000001800B385C: call    sub_1800B1A0C
 * 00000001800B3861: mov     r8, rax
 * 00000001800B3864: mov     r9d, r12d
 * 00000001800B3867: mov     edx, 58h ; 'X'
 * 00000001800B386C: lea     rcx, [rbp+9E40h+var_40D0]; Src
 * 00000001800B3873: call    sub_18007C338
 * 00000001800B3878: nop
 * 00000001800B3879: mov     r8, rax
 * 00000001800B387C: mov     rdx, r13
 * 00000001800B387F: lea     rcx, [rbp+9E40h+var_4130]
 * 00000001800B3886: call    sub_18001C6E8
 * 00000001800B388B: nop
 * 00000001800B388C: lea     r8, aPixel; "/Pixel"
 * 00000001800B3893: mov     rdx, rax
 * 00000001800B3896: lea     rcx, [rbp+9E40h+var_65B0]
 * 00000001800B389D: call    sub_18001C61C
 * 00000001800B38A2: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B38A7: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B38AC: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B38B1: mov     rcx, rax
 * 00000001800B38B4: call    sub_18007C3DC
 * 00000001800B38B9: nop
 * 00000001800B38BA: lea     rcx, [rbp+9E40h+var_4130]
 * 00000001800B38C1: call    sub_180010F30
 * 00000001800B38C6: nop
 * 00000001800B38C7: lea     rcx, [rbp+9E40h+var_40D0]
 * 00000001800B38CE: call    sub_180010F30
 * 00000001800B38D3: nop
 * 00000001800B38D4: lea     rcx, dword_1801D929C
 * 00000001800B38DB: call    sub_18000C538
 * 00000001800B38E0: mov     rax, [rdi+rbx*8]
 * 00000001800B38E4: mov     eax, [r15+rax]
 * 00000001800B38E8: cmp     cs:dword_1801D92A0, eax
 * 00000001800B38EE: jle     loc_1800B39CF
 * 00000001800B38F4: lea     rcx, dword_1801D92A0
 * 00000001800B38FB: call    sub_18000C5A0
 * 00000001800B3900: cmp     cs:dword_1801D92A0, r14d
 * 00000001800B3907: jnz     loc_1800B39CF
 * 00000001800B390D: call    sub_1800B195C
 * 00000001800B3912: mov     qword ptr [rbp+9E40h+var_9D00], rax
 * 00000001800B3919: add     rax, 678Ch
 * 00000001800B391F: mov     qword ptr [rbp+9E40h+var_9D00+8], rax
 * 00000001800B3926: movups  xmm7, [rbp+9E40h+var_9D00]
 * 00000001800B392D: movups  [rbp+9E40h+var_8970], xmm7
 * 00000001800B3934: mov     dword ptr [rbp+9E40h+var_8960], 5
 * 00000001800B393E: mov     dword ptr [rbp+9E40h+var_8960+4], esi
 * 00000001800B3944: movups  xmm6, [rbp+9E40h+var_8960]
 * 00000001800B394B: call    sub_1800B1A0C
 * 00000001800B3950: mov     r8, rax
 * 00000001800B3953: mov     r9d, r12d
 * 00000001800B3956: mov     edx, 5Ah ; 'Z'
 * 00000001800B395B: lea     rcx, [rbp+9E40h+var_4010]; Src
 * 00000001800B3962: call    sub_18007C338
 * 00000001800B3967: nop
 * 00000001800B3968: mov     r8, rax
 * 00000001800B396B: mov     rdx, r13
 * 00000001800B396E: lea     rcx, [rbp+9E40h+var_4070]
 * 00000001800B3975: call    sub_18001C6E8
 * 00000001800B397A: nop
 * 00000001800B397B: lea     r8, aPixel; "/Pixel"
 * 00000001800B3982: mov     rdx, rax
 * 00000001800B3985: lea     rcx, [rbp+9E40h+var_64F0]
 * 00000001800B398C: call    sub_18001C61C
 * 00000001800B3991: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B3996: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B399B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B39A0: mov     rcx, rax
 * 00000001800B39A3: call    sub_18007C3DC
 * 00000001800B39A8: nop
 * 00000001800B39A9: lea     rcx, [rbp+9E40h+var_4070]
 * 00000001800B39B0: call    sub_180010F30
 * 00000001800B39B5: nop
 * 00000001800B39B6: lea     rcx, [rbp+9E40h+var_4010]
 * 00000001800B39BD: call    sub_180010F30
 * 00000001800B39C2: nop
 * 00000001800B39C3: lea     rcx, dword_1801D92A0
 * 00000001800B39CA: call    sub_18000C538
 * 00000001800B39CF: mov     rax, [rdi+rbx*8]
 * 00000001800B39D3: mov     eax, [r15+rax]
 * 00000001800B39D7: cmp     cs:dword_1801D92A4, eax
 * 00000001800B39DD: jle     loc_1800B3ABE
 * 00000001800B39E3: lea     rcx, dword_1801D92A4
 * 00000001800B39EA: call    sub_18000C5A0
 * 00000001800B39EF: cmp     cs:dword_1801D92A4, r14d
 * 00000001800B39F6: jnz     loc_1800B3ABE
 * 00000001800B39FC: call    sub_1800B18CC
 * 00000001800B3A01: mov     qword ptr [rbp+9E40h+var_9CF0], rax
 * 00000001800B3A08: add     rax, 63E4h
 * 00000001800B3A0E: mov     qword ptr [rbp+9E40h+var_9CF0+8], rax
 * 00000001800B3A15: movups  xmm7, [rbp+9E40h+var_9CF0]
 * 00000001800B3A1C: movups  [rbp+9E40h+var_8950], xmm7
 * 00000001800B3A23: mov     dword ptr [rbp+9E40h+var_8940], 5
 * 00000001800B3A2D: mov     dword ptr [rbp+9E40h+var_8940+4], esi
 * 00000001800B3A33: movups  xmm6, [rbp+9E40h+var_8940]
 * 00000001800B3A3A: call    sub_1800B1A0C
 * 00000001800B3A3F: mov     r8, rax
 * 00000001800B3A42: mov     r9d, r12d
 * 00000001800B3A45: mov     edx, 60h ; '`'
 * 00000001800B3A4A: lea     rcx, [rbp+9E40h+var_3F50]; Src
 * 00000001800B3A51: call    sub_18007C338
 * 00000001800B3A56: nop
 * 00000001800B3A57: mov     r8, rax
 * 00000001800B3A5A: mov     rdx, r13
 * 00000001800B3A5D: lea     rcx, [rbp+9E40h+var_3FB0]
 * 00000001800B3A64: call    sub_18001C6E8
 * 00000001800B3A69: nop
 * 00000001800B3A6A: lea     r8, aPixel; "/Pixel"
 * 00000001800B3A71: mov     rdx, rax
 * 00000001800B3A74: lea     rcx, [rbp+9E40h+var_6990]
 * 00000001800B3A7B: call    sub_18001C61C
 * 00000001800B3A80: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B3A85: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3A8A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B3A8F: mov     rcx, rax
 * 00000001800B3A92: call    sub_18007C3DC
 * 00000001800B3A97: nop
 * 00000001800B3A98: lea     rcx, [rbp+9E40h+var_3FB0]
 * 00000001800B3A9F: call    sub_180010F30
 * 00000001800B3AA4: nop
 * 00000001800B3AA5: lea     rcx, [rbp+9E40h+var_3F50]
 * 00000001800B3AAC: call    sub_180010F30
 * 00000001800B3AB1: nop
 * 00000001800B3AB2: lea     rcx, dword_1801D92A4
 * 00000001800B3AB9: call    sub_18000C538
 * 00000001800B3ABE: mov     rax, [rdi+rbx*8]
 * 00000001800B3AC2: mov     eax, [r15+rax]
 * 00000001800B3AC6: cmp     cs:dword_1801D92A8, eax
 * 00000001800B3ACC: jle     loc_1800B3BAD
 * 00000001800B3AD2: lea     rcx, dword_1801D92A8
 * 00000001800B3AD9: call    sub_18000C5A0
 * 00000001800B3ADE: cmp     cs:dword_1801D92A8, r14d
 * 00000001800B3AE5: jnz     loc_1800B3BAD
 * 00000001800B3AEB: call    sub_1800B18CC
 * 00000001800B3AF0: mov     qword ptr [rbp+9E40h+var_9CE0], rax
 * 00000001800B3AF7: add     rax, 63E4h
 * 00000001800B3AFD: mov     qword ptr [rbp+9E40h+var_9CE0+8], rax
 * 00000001800B3B04: movups  xmm7, [rbp+9E40h+var_9CE0]
 * 00000001800B3B0B: movups  [rbp+9E40h+var_8930], xmm7
 * 00000001800B3B12: mov     dword ptr [rbp+9E40h+var_8920], 5
 * 00000001800B3B1C: mov     dword ptr [rbp+9E40h+var_8920+4], esi
 * 00000001800B3B22: movups  xmm6, [rbp+9E40h+var_8920]
 * 00000001800B3B29: call    sub_1800B1A0C
 * 00000001800B3B2E: mov     r8, rax
 * 00000001800B3B31: mov     r9d, r12d
 * 00000001800B3B34: mov     edx, 62h ; 'b'
 * 00000001800B3B39: lea     rcx, [rbp+9E40h+var_3E90]; Src
 * 00000001800B3B40: call    sub_18007C338
 * 00000001800B3B45: nop
 * 00000001800B3B46: mov     r8, rax
 * 00000001800B3B49: mov     rdx, r13
 * 00000001800B3B4C: lea     rcx, [rbp+9E40h+var_3EF0]
 * 00000001800B3B53: call    sub_18001C6E8
 * 00000001800B3B58: nop
 * 00000001800B3B59: lea     r8, aPixel; "/Pixel"
 * 00000001800B3B60: mov     rdx, rax
 * 00000001800B3B63: lea     rcx, [rbp+9E40h+var_6870]
 * 00000001800B3B6A: call    sub_18001C61C
 * 00000001800B3B6F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B3B74: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3B79: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B3B7E: mov     rcx, rax
 * 00000001800B3B81: call    sub_18007C3DC
 * 00000001800B3B86: nop
 * 00000001800B3B87: lea     rcx, [rbp+9E40h+var_3EF0]
 * 00000001800B3B8E: call    sub_180010F30
 * 00000001800B3B93: nop
 * 00000001800B3B94: lea     rcx, [rbp+9E40h+var_3E90]
 * 00000001800B3B9B: call    sub_180010F30
 * 00000001800B3BA0: nop
 * 00000001800B3BA1: lea     rcx, dword_1801D92A8
 * 00000001800B3BA8: call    sub_18000C538
 * 00000001800B3BAD: mov     rax, [rdi+rbx*8]
 * 00000001800B3BB1: mov     eax, [r15+rax]
 * 00000001800B3BB5: cmp     cs:dword_1801D92AC, eax
 * 00000001800B3BBB: jle     loc_1800B3C9C
 * 00000001800B3BC1: lea     rcx, dword_1801D92AC
 * 00000001800B3BC8: call    sub_18000C5A0
 * 00000001800B3BCD: cmp     cs:dword_1801D92AC, r14d
 * 00000001800B3BD4: jnz     loc_1800B3C9C
 * 00000001800B3BDA: call    sub_1800B190C
 * 00000001800B3BDF: mov     qword ptr [rbp+9E40h+var_9CD0], rax
 * 00000001800B3BE6: add     rax, 658Ch
 * 00000001800B3BEC: mov     qword ptr [rbp+9E40h+var_9CD0+8], rax
 * 00000001800B3BF3: movups  xmm7, [rbp+9E40h+var_9CD0]
 * 00000001800B3BFA: movups  [rbp+9E40h+var_8910], xmm7
 * 00000001800B3C01: mov     dword ptr [rbp+9E40h+var_8900], 5
 * 00000001800B3C0B: mov     dword ptr [rbp+9E40h+var_8900+4], esi
 * 00000001800B3C11: movups  xmm6, [rbp+9E40h+var_8900]
 * 00000001800B3C18: call    sub_1800B1A0C
 * 00000001800B3C1D: mov     r8, rax
 * 00000001800B3C20: mov     r9d, r12d
 * 00000001800B3C23: mov     edx, 68h ; 'h'
 * 00000001800B3C28: lea     rcx, [rbp+9E40h+var_3DD0]; Src
 * 00000001800B3C2F: call    sub_18007C338
 * 00000001800B3C34: nop
 * 00000001800B3C35: mov     r8, rax
 * 00000001800B3C38: mov     rdx, r13
 * 00000001800B3C3B: lea     rcx, [rbp+9E40h+var_3E30]
 * 00000001800B3C42: call    sub_18001C6E8
 * 00000001800B3C47: nop
 * 00000001800B3C48: lea     r8, aPixel; "/Pixel"
 * 00000001800B3C4F: mov     rdx, rax
 * 00000001800B3C52: lea     rcx, [rbp+9E40h+var_6730]
 * 00000001800B3C59: call    sub_18001C61C
 * 00000001800B3C5E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B3C63: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3C68: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B3C6D: mov     rcx, rax
 * 00000001800B3C70: call    sub_18007C3DC
 * 00000001800B3C75: nop
 * 00000001800B3C76: lea     rcx, [rbp+9E40h+var_3E30]
 * 00000001800B3C7D: call    sub_180010F30
 * 00000001800B3C82: nop
 * 00000001800B3C83: lea     rcx, [rbp+9E40h+var_3DD0]
 * 00000001800B3C8A: call    sub_180010F30
 * 00000001800B3C8F: nop
 * 00000001800B3C90: lea     rcx, dword_1801D92AC
 * 00000001800B3C97: call    sub_18000C538
 * 00000001800B3C9C: mov     rax, [rdi+rbx*8]
 * 00000001800B3CA0: mov     eax, [r15+rax]
 * 00000001800B3CA4: cmp     cs:dword_1801D92B0, eax
 * 00000001800B3CAA: jle     loc_1800B3D8B
 * 00000001800B3CB0: lea     rcx, dword_1801D92B0
 * 00000001800B3CB7: call    sub_18000C5A0
 * 00000001800B3CBC: cmp     cs:dword_1801D92B0, r14d
 * 00000001800B3CC3: jnz     loc_1800B3D8B
 * 00000001800B3CC9: call    sub_1800B190C
 * 00000001800B3CCE: mov     qword ptr [rbp+9E40h+var_9CC0], rax
 * 00000001800B3CD5: add     rax, 658Ch
 * 00000001800B3CDB: mov     qword ptr [rbp+9E40h+var_9CC0+8], rax
 * 00000001800B3CE2: movups  xmm7, [rbp+9E40h+var_9CC0]
 * 00000001800B3CE9: movups  [rbp+9E40h+var_88F0], xmm7
 * 00000001800B3CF0: mov     dword ptr [rbp+9E40h+var_88E0], 5
 * 00000001800B3CFA: mov     dword ptr [rbp+9E40h+var_88E0+4], esi
 * 00000001800B3D00: movups  xmm6, [rbp+9E40h+var_88E0]
 * 00000001800B3D07: call    sub_1800B1A0C
 * 00000001800B3D0C: mov     r8, rax
 * 00000001800B3D0F: mov     r9d, r12d
 * 00000001800B3D12: mov     edx, 6Ah ; 'j'
 * 00000001800B3D17: lea     rcx, [rbp+9E40h+var_3D10]; Src
 * 00000001800B3D1E: call    sub_18007C338
 * 00000001800B3D23: nop
 * 00000001800B3D24: mov     r8, rax
 * 00000001800B3D27: mov     rdx, r13
 * 00000001800B3D2A: lea     rcx, [rbp+9E40h+var_3D70]
 * 00000001800B3D31: call    sub_18001C6E8
 * 00000001800B3D36: nop
 * 00000001800B3D37: lea     r8, aPixel; "/Pixel"
 * 00000001800B3D3E: mov     rdx, rax
 * 00000001800B3D41: lea     rcx, [rbp+9E40h+var_6610]
 * 00000001800B3D48: call    sub_18001C61C
 * 00000001800B3D4D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B3D52: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3D57: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B3D5C: mov     rcx, rax
 * 00000001800B3D5F: call    sub_18007C3DC
 * 00000001800B3D64: nop
 * 00000001800B3D65: lea     rcx, [rbp+9E40h+var_3D70]
 * 00000001800B3D6C: call    sub_180010F30
 * 00000001800B3D71: nop
 * 00000001800B3D72: lea     rcx, [rbp+9E40h+var_3D10]
 * 00000001800B3D79: call    sub_180010F30
 * 00000001800B3D7E: nop
 * 00000001800B3D7F: lea     rcx, dword_1801D92B0
 * 00000001800B3D86: call    sub_18000C538
 * 00000001800B3D8B: mov     rax, [rdi+rbx*8]
 * 00000001800B3D8F: mov     eax, [r15+rax]
 * 00000001800B3D93: cmp     cs:dword_1801D92B4, eax
 * 00000001800B3D99: jle     loc_1800B3E7A
 * 00000001800B3D9F: lea     rcx, dword_1801D92B4
 * 00000001800B3DA6: call    sub_18000C5A0
 * 00000001800B3DAB: cmp     cs:dword_1801D92B4, r14d
 * 00000001800B3DB2: jnz     loc_1800B3E7A
 * 00000001800B3DB8: call    sub_1800B193C
 * 00000001800B3DBD: mov     qword ptr [rbp+9E40h+var_9CB0], rax
 * 00000001800B3DC4: add     rax, 65B8h
 * 00000001800B3DCA: mov     qword ptr [rbp+9E40h+var_9CB0+8], rax
 * 00000001800B3DD1: movups  xmm7, [rbp+9E40h+var_9CB0]
 * 00000001800B3DD8: movups  [rbp+9E40h+var_88D0], xmm7
 * 00000001800B3DDF: mov     dword ptr [rbp+9E40h+var_88C0], 5
 * 00000001800B3DE9: mov     dword ptr [rbp+9E40h+var_88C0+4], esi
 * 00000001800B3DEF: movups  xmm6, [rbp+9E40h+var_88C0]
 * 00000001800B3DF6: call    sub_1800B1A0C
 * 00000001800B3DFB: mov     r8, rax
 * 00000001800B3DFE: mov     r9d, r12d
 * 00000001800B3E01: mov     edx, 70h ; 'p'
 * 00000001800B3E06: lea     rcx, [rbp+9E40h+var_3C50]; Src
 * 00000001800B3E0D: call    sub_18007C338
 * 00000001800B3E12: nop
 * 00000001800B3E13: mov     r8, rax
 * 00000001800B3E16: mov     rdx, r13
 * 00000001800B3E19: lea     rcx, [rbp+9E40h+var_3CB0]
 * 00000001800B3E20: call    sub_18001C6E8
 * 00000001800B3E25: nop
 * 00000001800B3E26: lea     r8, aPixel; "/Pixel"
 * 00000001800B3E2D: mov     rdx, rax
 * 00000001800B3E30: lea     rcx, [rbp+9E40h+var_6490]
 * 00000001800B3E37: call    sub_18001C61C
 * 00000001800B3E3C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B3E41: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3E46: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B3E4B: mov     rcx, rax
 * 00000001800B3E4E: call    sub_18007C3DC
 * 00000001800B3E53: nop
 * 00000001800B3E54: lea     rcx, [rbp+9E40h+var_3CB0]
 * 00000001800B3E5B: call    sub_180010F30
 * 00000001800B3E60: nop
 * 00000001800B3E61: lea     rcx, [rbp+9E40h+var_3C50]
 * 00000001800B3E68: call    sub_180010F30
 * 00000001800B3E6D: nop
 * 00000001800B3E6E: lea     rcx, dword_1801D92B4
 * 00000001800B3E75: call    sub_18000C538
 * 00000001800B3E7A: mov     rax, [rdi+rbx*8]
 * 00000001800B3E7E: mov     eax, [r15+rax]
 * 00000001800B3E82: cmp     cs:dword_1801D92B8, eax
 * 00000001800B3E88: jle     loc_1800B3F69
 * 00000001800B3E8E: lea     rcx, dword_1801D92B8
 * 00000001800B3E95: call    sub_18000C5A0
 * 00000001800B3E9A: cmp     cs:dword_1801D92B8, r14d
 * 00000001800B3EA1: jnz     loc_1800B3F69
 * 00000001800B3EA7: call    sub_1800B193C
 * 00000001800B3EAC: mov     qword ptr [rbp+9E40h+var_9CA0], rax
 * 00000001800B3EB3: add     rax, 65B8h
 * 00000001800B3EB9: mov     qword ptr [rbp+9E40h+var_9CA0+8], rax
 * 00000001800B3EC0: movups  xmm7, [rbp+9E40h+var_9CA0]
 * 00000001800B3EC7: movups  [rbp+9E40h+var_88B0], xmm7
 * 00000001800B3ECE: mov     dword ptr [rbp+9E40h+var_88A0], 5
 * 00000001800B3ED8: mov     dword ptr [rbp+9E40h+var_88A0+4], esi
 * 00000001800B3EDE: movups  xmm6, [rbp+9E40h+var_88A0]
 * 00000001800B3EE5: call    sub_1800B1A0C
 * 00000001800B3EEA: mov     r8, rax
 * 00000001800B3EED: mov     r9d, r12d
 * 00000001800B3EF0: mov     edx, 72h ; 'r'
 * 00000001800B3EF5: lea     rcx, [rbp+9E40h+var_3B90]; Src
 * 00000001800B3EFC: call    sub_18007C338
 * 00000001800B3F01: nop
 * 00000001800B3F02: mov     r8, rax
 * 00000001800B3F05: mov     rdx, r13
 * 00000001800B3F08: lea     rcx, [rbp+9E40h+var_3BF0]
 * 00000001800B3F0F: call    sub_18001C6E8
 * 00000001800B3F14: nop
 * 00000001800B3F15: lea     r8, aPixel; "/Pixel"
 * 00000001800B3F1C: mov     rdx, rax
 * 00000001800B3F1F: lea     rcx, [rbp+9E40h+var_68D0]
 * 00000001800B3F26: call    sub_18001C61C
 * 00000001800B3F2B: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B3F30: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3F35: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B3F3A: mov     rcx, rax
 * 00000001800B3F3D: call    sub_18007C3DC
 * 00000001800B3F42: nop
 * 00000001800B3F43: lea     rcx, [rbp+9E40h+var_3BF0]
 * 00000001800B3F4A: call    sub_180010F30
 * 00000001800B3F4F: nop
 * 00000001800B3F50: lea     rcx, [rbp+9E40h+var_3B90]
 * 00000001800B3F57: call    sub_180010F30
 * 00000001800B3F5C: nop
 * 00000001800B3F5D: lea     rcx, dword_1801D92B8
 * 00000001800B3F64: call    sub_18000C538
 * 00000001800B3F69: mov     rax, [rdi+rbx*8]
 * 00000001800B3F6D: mov     eax, [r15+rax]
 * 00000001800B3F71: cmp     cs:dword_1801D92BC, eax
 * 00000001800B3F77: jle     loc_1800B4058
 * 00000001800B3F7D: lea     rcx, dword_1801D92BC
 * 00000001800B3F84: call    sub_18000C5A0
 * 00000001800B3F89: cmp     cs:dword_1801D92BC, r14d
 * 00000001800B3F90: jnz     loc_1800B4058
 * 00000001800B3F96: call    sub_1800B195C
 * 00000001800B3F9B: mov     qword ptr [rbp+9E40h+var_9C90], rax
 * 00000001800B3FA2: add     rax, 678Ch
 * 00000001800B3FA8: mov     qword ptr [rbp+9E40h+var_9C90+8], rax
 * 00000001800B3FAF: movups  xmm7, [rbp+9E40h+var_9C90]
 * 00000001800B3FB6: movups  [rbp+9E40h+var_8890], xmm7
 * 00000001800B3FBD: mov     dword ptr [rbp+9E40h+var_8880], 5
 * 00000001800B3FC7: mov     dword ptr [rbp+9E40h+var_8880+4], esi
 * 00000001800B3FCD: movups  xmm6, [rbp+9E40h+var_8880]
 * 00000001800B3FD4: call    sub_1800B1A0C
 * 00000001800B3FD9: mov     r8, rax
 * 00000001800B3FDC: mov     r9d, r12d
 * 00000001800B3FDF: mov     edx, 78h ; 'x'
 * 00000001800B3FE4: lea     rcx, [rbp+9E40h+var_3AD0]; Src
 * 00000001800B3FEB: call    sub_18007C338
 * 00000001800B3FF0: nop
 * 00000001800B3FF1: mov     r8, rax
 * 00000001800B3FF4: mov     rdx, r13
 * 00000001800B3FF7: lea     rcx, [rbp+9E40h+var_3B30]
 * 00000001800B3FFE: call    sub_18001C6E8
 * 00000001800B4003: nop
 * 00000001800B4004: lea     r8, aPixel; "/Pixel"
 * 00000001800B400B: mov     rdx, rax
 * 00000001800B400E: lea     rcx, [rbp+9E40h+var_66D0]
 * 00000001800B4015: call    sub_18001C61C
 * 00000001800B401A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B401F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B4024: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4029: mov     rcx, rax
 * 00000001800B402C: call    sub_18007C3DC
 * 00000001800B4031: nop
 * 00000001800B4032: lea     rcx, [rbp+9E40h+var_3B30]
 * 00000001800B4039: call    sub_180010F30
 * 00000001800B403E: nop
 * 00000001800B403F: lea     rcx, [rbp+9E40h+var_3AD0]
 * 00000001800B4046: call    sub_180010F30
 * 00000001800B404B: nop
 * 00000001800B404C: lea     rcx, dword_1801D92BC
 * 00000001800B4053: call    sub_18000C538
 * 00000001800B4058: mov     rax, [rdi+rbx*8]
 * 00000001800B405C: mov     eax, [r15+rax]
 * 00000001800B4060: cmp     cs:dword_1801D92C0, eax
 * 00000001800B4066: jle     loc_1800B4147
 * 00000001800B406C: lea     rcx, dword_1801D92C0
 * 00000001800B4073: call    sub_18000C5A0
 * 00000001800B4078: cmp     cs:dword_1801D92C0, r14d
 * 00000001800B407F: jnz     loc_1800B4147
 * 00000001800B4085: call    sub_1800B195C
 * 00000001800B408A: mov     qword ptr [rbp+9E40h+var_9C80], rax
 * 00000001800B4091: add     rax, 678Ch
 * 00000001800B4097: mov     qword ptr [rbp+9E40h+var_9C80+8], rax
 * 00000001800B409E: movups  xmm7, [rbp+9E40h+var_9C80]
 * 00000001800B40A5: movups  [rbp+9E40h+var_8870], xmm7
 * 00000001800B40AC: mov     dword ptr [rbp+9E40h+var_8860], 5
 * 00000001800B40B6: mov     dword ptr [rbp+9E40h+var_8860+4], esi
 * 00000001800B40BC: movups  xmm6, [rbp+9E40h+var_8860]
 * 00000001800B40C3: call    sub_1800B1A0C
 * 00000001800B40C8: mov     r8, rax
 * 00000001800B40CB: mov     r9d, r12d
 * 00000001800B40CE: mov     edx, 7Ah ; 'z'
 * 00000001800B40D3: lea     rcx, [rbp+9E40h+var_3A10]; Src
 * 00000001800B40DA: call    sub_18007C338
 * 00000001800B40DF: nop
 * 00000001800B40E0: mov     r8, rax
 * 00000001800B40E3: mov     rdx, r13
 * 00000001800B40E6: lea     rcx, [rbp+9E40h+var_3A70]
 * 00000001800B40ED: call    sub_18001C6E8
 * 00000001800B40F2: nop
 * 00000001800B40F3: lea     r8, aPixel; "/Pixel"
 * 00000001800B40FA: mov     rdx, rax
 * 00000001800B40FD: lea     rcx, [rbp+9E40h+var_6510]
 * 00000001800B4104: call    sub_18001C61C
 * 00000001800B4109: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B410E: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B4113: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4118: mov     rcx, rax
 * 00000001800B411B: call    sub_18007C3DC
 * 00000001800B4120: nop
 * 00000001800B4121: lea     rcx, [rbp+9E40h+var_3A70]
 * 00000001800B4128: call    sub_180010F30
 * 00000001800B412D: nop
 * 00000001800B412E: lea     rcx, [rbp+9E40h+var_3A10]
 * 00000001800B4135: call    sub_180010F30
 * 00000001800B413A: nop
 * 00000001800B413B: lea     rcx, dword_1801D92C0
 * 00000001800B4142: call    sub_18000C538
 * 00000001800B4147: mov     rax, [rdi+rbx*8]
 * 00000001800B414B: mov     eax, [r15+rax]
 * 00000001800B414F: cmp     cs:dword_1801D92C4, eax
 * 00000001800B4155: jle     loc_1800B4236
 * 00000001800B415B: lea     rcx, dword_1801D92C4
 * 00000001800B4162: call    sub_18000C5A0
 * 00000001800B4167: cmp     cs:dword_1801D92C4, r14d
 * 00000001800B416E: jnz     loc_1800B4236
 * 00000001800B4174: call    sub_1800B18CC
 * 00000001800B4179: mov     qword ptr [rbp+9E40h+var_9C70], rax
 * 00000001800B4180: add     rax, 63E4h
 * 00000001800B4186: mov     qword ptr [rbp+9E40h+var_9C70+8], rax
 * 00000001800B418D: movups  xmm7, [rbp+9E40h+var_9C70]
 * 00000001800B4194: movups  [rbp+9E40h+var_8850], xmm7
 * 00000001800B419B: mov     dword ptr [rbp+9E40h+var_8840], 5
 * 00000001800B41A5: mov     dword ptr [rbp+9E40h+var_8840+4], esi
 * 00000001800B41AB: movups  xmm6, [rbp+9E40h+var_8840]
 * 00000001800B41B2: call    sub_1800B1A0C
 * 00000001800B41B7: mov     r8, rax
 * 00000001800B41BA: mov     r9d, r12d
 * 00000001800B41BD: mov     edx, 80h
 * 00000001800B41C2: lea     rcx, [rbp+9E40h+var_3950]; Src
 * 00000001800B41C9: call    sub_18007C338
 * 00000001800B41CE: nop
 * 00000001800B41CF: mov     r8, rax
 * 00000001800B41D2: mov     rdx, r13
 * 00000001800B41D5: lea     rcx, [rbp+9E40h+var_39B0]
 * 00000001800B41DC: call    sub_18001C6E8
 * 00000001800B41E1: nop
 * 00000001800B41E2: lea     r8, aPixel; "/Pixel"
 * 00000001800B41E9: mov     rdx, rax
 * 00000001800B41EC: lea     rcx, [rbp+9E40h+var_67F0]
 * 00000001800B41F3: call    sub_18001C61C
 * 00000001800B41F8: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B41FD: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B4202: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4207: mov     rcx, rax
 * 00000001800B420A: call    sub_18007C3DC
 * 00000001800B420F: nop
 * 00000001800B4210: lea     rcx, [rbp+9E40h+var_39B0]
 * 00000001800B4217: call    sub_180010F30
 * 00000001800B421C: nop
 * 00000001800B421D: lea     rcx, [rbp+9E40h+var_3950]
 * 00000001800B4224: call    sub_180010F30
 * 00000001800B4229: nop
 * 00000001800B422A: lea     rcx, dword_1801D92C4
 * 00000001800B4231: call    sub_18000C538
 * 00000001800B4236: mov     rax, [rdi+rbx*8]
 * 00000001800B423A: mov     eax, [r15+rax]
 * 00000001800B423E: cmp     cs:dword_1801D92C8, eax
 * 00000001800B4244: jle     loc_1800B4325
 * 00000001800B424A: lea     rcx, dword_1801D92C8
 * 00000001800B4251: call    sub_18000C5A0
 * 00000001800B4256: cmp     cs:dword_1801D92C8, r14d
 * 00000001800B425D: jnz     loc_1800B4325
 * 00000001800B4263: call    sub_1800B18CC
 * 00000001800B4268: mov     qword ptr [rbp+9E40h+var_9C60], rax
 * 00000001800B426F: add     rax, 63E4h
 * 00000001800B4275: mov     qword ptr [rbp+9E40h+var_9C60+8], rax
 * 00000001800B427C: movups  xmm7, [rbp+9E40h+var_9C60]
 * 00000001800B4283: movups  [rbp+9E40h+var_8830], xmm7
 * 00000001800B428A: mov     dword ptr [rbp+9E40h+var_8820], 5
 * 00000001800B4294: mov     dword ptr [rbp+9E40h+var_8820+4], esi
 * 00000001800B429A: movups  xmm6, [rbp+9E40h+var_8820]
 * 00000001800B42A1: call    sub_1800B1A0C
 * 00000001800B42A6: mov     r8, rax
 * 00000001800B42A9: mov     r9d, r12d
 * 00000001800B42AC: mov     edx, 82h
 * 00000001800B42B1: lea     rcx, [rbp+9E40h+var_3890]; Src
 * 00000001800B42B8: call    sub_18007C338
 * 00000001800B42BD: nop
 * 00000001800B42BE: mov     r8, rax
 * 00000001800B42C1: mov     rdx, r13
 * 00000001800B42C4: lea     rcx, [rbp+9E40h+var_38F0]
 * 00000001800B42CB: call    sub_18001C6E8
 * 00000001800B42D0: nop
 * 00000001800B42D1: lea     r8, aPixel; "/Pixel"
 * 00000001800B42D8: mov     rdx, rax
 * 00000001800B42DB: lea     rcx, [rbp+9E40h+var_6570]
 * 00000001800B42E2: call    sub_18001C61C
 * 00000001800B42E7: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B42EC: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B42F1: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B42F6: mov     rcx, rax
 * 00000001800B42F9: call    sub_18007C3DC
 * 00000001800B42FE: nop
 * 00000001800B42FF: lea     rcx, [rbp+9E40h+var_38F0]
 * 00000001800B4306: call    sub_180010F30
 * 00000001800B430B: nop
 * 00000001800B430C: lea     rcx, [rbp+9E40h+var_3890]
 * 00000001800B4313: call    sub_180010F30
 * 00000001800B4318: nop
 * 00000001800B4319: lea     rcx, dword_1801D92C8
 * 00000001800B4320: call    sub_18000C538
 * 00000001800B4325: mov     rax, [rdi+rbx*8]
 * 00000001800B4329: mov     eax, [r15+rax]
 * 00000001800B432D: cmp     cs:dword_1801D92CC, eax
 * 00000001800B4333: jle     loc_1800B4414
 * 00000001800B4339: lea     rcx, dword_1801D92CC
 * 00000001800B4340: call    sub_18000C5A0
 * 00000001800B4345: cmp     cs:dword_1801D92CC, r14d
 * 00000001800B434C: jnz     loc_1800B4414
 * 00000001800B4352: call    sub_1800B190C
 * 00000001800B4357: mov     qword ptr [rbp+9E40h+var_9C50], rax
 * 00000001800B435E: add     rax, 658Ch
 * 00000001800B4364: mov     qword ptr [rbp+9E40h+var_9C50+8], rax
 * 00000001800B436B: movups  xmm7, [rbp+9E40h+var_9C50]
 * 00000001800B4372: movups  [rbp+9E40h+var_8810], xmm7
 * 00000001800B4379: mov     dword ptr [rbp+9E40h+var_8800], 5
 * 00000001800B4383: mov     dword ptr [rbp+9E40h+var_8800+4], esi
 * 00000001800B4389: movups  xmm6, [rbp+9E40h+var_8800]
 * 00000001800B4390: call    sub_1800B1A0C
 * 00000001800B4395: mov     r8, rax
 * 00000001800B4398: mov     r9d, r12d
 * 00000001800B439B: mov     edx, 88h
 * 00000001800B43A0: lea     rcx, [rbp+9E40h+var_37D0]; Src
 * 00000001800B43A7: call    sub_18007C338
 * 00000001800B43AC: nop
 * 00000001800B43AD: mov     r8, rax
 * 00000001800B43B0: mov     rdx, r13
 * 00000001800B43B3: lea     rcx, [rbp+9E40h+var_3830]
 * 00000001800B43BA: call    sub_18001C6E8
 * 00000001800B43BF: nop
 * 00000001800B43C0: lea     r8, aPixel; "/Pixel"
 * 00000001800B43C7: mov     rdx, rax
 * 00000001800B43CA: lea     rcx, [rbp+9E40h+var_67B0]
 * 00000001800B43D1: call    sub_18001C61C
 * 00000001800B43D6: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B43DB: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B43E0: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B43E5: mov     rcx, rax
 * 00000001800B43E8: call    sub_18007C3DC
 * 00000001800B43ED: nop
 * 00000001800B43EE: lea     rcx, [rbp+9E40h+var_3830]
 * 00000001800B43F5: call    sub_180010F30
 * 00000001800B43FA: nop
 * 00000001800B43FB: lea     rcx, [rbp+9E40h+var_37D0]
 * 00000001800B4402: call    sub_180010F30
 * 00000001800B4407: nop
 * 00000001800B4408: lea     rcx, dword_1801D92CC
 * 00000001800B440F: call    sub_18000C538
 * 00000001800B4414: mov     rax, [rdi+rbx*8]
 * 00000001800B4418: mov     eax, [r15+rax]
 * 00000001800B441C: cmp     cs:dword_1801D92D0, eax
 * 00000001800B4422: jle     loc_1800B4503
 * 00000001800B4428: lea     rcx, dword_1801D92D0
 * 00000001800B442F: call    sub_18000C5A0
 * 00000001800B4434: cmp     cs:dword_1801D92D0, r14d
 * 00000001800B443B: jnz     loc_1800B4503
 * 00000001800B4441: call    sub_1800B190C
 * 00000001800B4446: mov     qword ptr [rbp+9E40h+var_9C40], rax
 * 00000001800B444D: add     rax, 658Ch
 * 00000001800B4453: mov     qword ptr [rbp+9E40h+var_9C40+8], rax
 * 00000001800B445A: movups  xmm7, [rbp+9E40h+var_9C40]
 * 00000001800B4461: movups  [rbp+9E40h+var_87F0], xmm7
 * 00000001800B4468: mov     dword ptr [rbp+9E40h+var_87E0], 5
 * 00000001800B4472: mov     dword ptr [rbp+9E40h+var_87E0+4], esi
 * 00000001800B4478: movups  xmm6, [rbp+9E40h+var_87E0]
 * 00000001800B447F: call    sub_1800B1A0C
 * 00000001800B4484: mov     r8, rax
 * 00000001800B4487: mov     r9d, r12d
 * 00000001800B448A: mov     edx, 8Ah
 * 00000001800B448F: lea     rcx, [rbp+9E40h+var_3710]; Src
 * 00000001800B4496: call    sub_18007C338
 * 00000001800B449B: nop
 * 00000001800B449C: mov     r8, rax
 * 00000001800B449F: mov     rdx, r13
 * 00000001800B44A2: lea     rcx, [rbp+9E40h+var_3770]
 * 00000001800B44A9: call    sub_18001C6E8
 * 00000001800B44AE: nop
 * 00000001800B44AF: lea     r8, aPixel; "/Pixel"
 * 00000001800B44B6: mov     rdx, rax
 * 00000001800B44B9: lea     rcx, [rbp+9E40h+var_6970]
 * 00000001800B44C0: call    sub_18001C61C
 * 00000001800B44C5: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B44CA: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B44CF: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B44D4: mov     rcx, rax
 * 00000001800B44D7: call    sub_18007C3DC
 * 00000001800B44DC: nop
 * 00000001800B44DD: lea     rcx, [rbp+9E40h+var_3770]
 * 00000001800B44E4: call    sub_180010F30
 * 00000001800B44E9: nop
 * 00000001800B44EA: lea     rcx, [rbp+9E40h+var_3710]
 * 00000001800B44F1: call    sub_180010F30
 * 00000001800B44F6: nop
 * 00000001800B44F7: lea     rcx, dword_1801D92D0
 * 00000001800B44FE: call    sub_18000C538
 * 00000001800B4503: mov     rax, [rdi+rbx*8]
 * 00000001800B4507: mov     eax, [r15+rax]
 * 00000001800B450B: cmp     cs:dword_1801D92D4, eax
 * 00000001800B4511: jle     loc_1800B45F2
 * 00000001800B4517: lea     rcx, dword_1801D92D4
 * 00000001800B451E: call    sub_18000C5A0
 * 00000001800B4523: cmp     cs:dword_1801D92D4, r14d
 * 00000001800B452A: jnz     loc_1800B45F2
 * 00000001800B4530: call    sub_1800B193C
 * 00000001800B4535: mov     qword ptr [rbp+9E40h+var_9C30], rax
 * 00000001800B453C: add     rax, 65B8h
 * 00000001800B4542: mov     qword ptr [rbp+9E40h+var_9C30+8], rax
 * 00000001800B4549: movups  xmm7, [rbp+9E40h+var_9C30]
 * 00000001800B4550: movups  [rbp+9E40h+var_87D0], xmm7
 * 00000001800B4557: mov     dword ptr [rbp+9E40h+var_87C0], 5
 * 00000001800B4561: mov     dword ptr [rbp+9E40h+var_87C0+4], esi
 * 00000001800B4567: movups  xmm6, [rbp+9E40h+var_87C0]
 * 00000001800B456E: call    sub_1800B1A0C
 * 00000001800B4573: mov     r8, rax
 * 00000001800B4576: mov     r9d, r12d
 * 00000001800B4579: mov     edx, 90h
 * 00000001800B457E: lea     rcx, [rbp+9E40h+var_3650]; Src
 * 00000001800B4585: call    sub_18007C338
 * 00000001800B458A: nop
 * 00000001800B458B: mov     r8, rax
 * 00000001800B458E: mov     rdx, r13
 * 00000001800B4591: lea     rcx, [rbp+9E40h+var_36B0]
 * 00000001800B4598: call    sub_18001C6E8
 * 00000001800B459D: nop
 * 00000001800B459E: lea     r8, aPixel; "/Pixel"
 * 00000001800B45A5: mov     rdx, rax
 * 00000001800B45A8: lea     rcx, [rbp+9E40h+var_6630]
 * 00000001800B45AF: call    sub_18001C61C
 * 00000001800B45B4: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B45B9: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B45BE: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B45C3: mov     rcx, rax
 * 00000001800B45C6: call    sub_18007C3DC
 * 00000001800B45CB: nop
 * 00000001800B45CC: lea     rcx, [rbp+9E40h+var_36B0]
 * 00000001800B45D3: call    sub_180010F30
 * 00000001800B45D8: nop
 * 00000001800B45D9: lea     rcx, [rbp+9E40h+var_3650]
 * 00000001800B45E0: call    sub_180010F30
 * 00000001800B45E5: nop
 * 00000001800B45E6: lea     rcx, dword_1801D92D4
 * 00000001800B45ED: call    sub_18000C538
 * 00000001800B45F2: mov     rax, [rdi+rbx*8]
 * 00000001800B45F6: mov     eax, [r15+rax]
 * 00000001800B45FA: cmp     cs:dword_1801D92D8, eax
 * 00000001800B4600: jle     loc_1800B46E1
 * 00000001800B4606: lea     rcx, dword_1801D92D8
 * 00000001800B460D: call    sub_18000C5A0
 * 00000001800B4612: cmp     cs:dword_1801D92D8, r14d
 * 00000001800B4619: jnz     loc_1800B46E1
 * 00000001800B461F: call    sub_1800B193C
 * 00000001800B4624: mov     qword ptr [rbp+9E40h+var_9C20], rax
 * 00000001800B462B: add     rax, 65B8h
 * 00000001800B4631: mov     qword ptr [rbp+9E40h+var_9C20+8], rax
 * 00000001800B4638: movups  xmm7, [rbp+9E40h+var_9C20]
 * 00000001800B463F: movups  [rbp+9E40h+var_87B0], xmm7
 * 00000001800B4646: mov     dword ptr [rbp+9E40h+var_87A0], 5
 * 00000001800B4650: mov     dword ptr [rbp+9E40h+var_87A0+4], esi
 * 00000001800B4656: movups  xmm6, [rbp+9E40h+var_87A0]
 * 00000001800B465D: call    sub_1800B1A0C
 * 00000001800B4662: mov     r8, rax
 * 00000001800B4665: mov     r9d, r12d
 * 00000001800B4668: mov     edx, 92h
 * 00000001800B466D: lea     rcx, [rbp+9E40h+var_3590]; Src
 * 00000001800B4674: call    sub_18007C338
 * 00000001800B4679: nop
 * 00000001800B467A: mov     r8, rax
 * 00000001800B467D: mov     rdx, r13
 * 00000001800B4680: lea     rcx, [rbp+9E40h+var_35F0]
 * 00000001800B4687: call    sub_18001C6E8
 * 00000001800B468C: nop
 * 00000001800B468D: lea     r8, aPixel; "/Pixel"
 * 00000001800B4694: mov     rdx, rax
 * 00000001800B4697: lea     rcx, [rbp+9E40h+var_6450]
 * 00000001800B469E: call    sub_18001C61C
 * 00000001800B46A3: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B46A8: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B46AD: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B46B2: mov     rcx, rax
 * 00000001800B46B5: call    sub_18007C3DC
 * 00000001800B46BA: nop
 * 00000001800B46BB: lea     rcx, [rbp+9E40h+var_35F0]
 * 00000001800B46C2: call    sub_180010F30
 * 00000001800B46C7: nop
 * 00000001800B46C8: lea     rcx, [rbp+9E40h+var_3590]
 * 00000001800B46CF: call    sub_180010F30
 * 00000001800B46D4: nop
 * 00000001800B46D5: lea     rcx, dword_1801D92D8
 * 00000001800B46DC: call    sub_18000C538
 * 00000001800B46E1: mov     rax, [rdi+rbx*8]
 * 00000001800B46E5: mov     eax, [r15+rax]
 * 00000001800B46E9: cmp     cs:dword_1801D92DC, eax
 * 00000001800B46EF: jle     loc_1800B47D0
 * 00000001800B46F5: lea     rcx, dword_1801D92DC
 * 00000001800B46FC: call    sub_18000C5A0
 * 00000001800B4701: cmp     cs:dword_1801D92DC, r14d
 * 00000001800B4708: jnz     loc_1800B47D0
 * 00000001800B470E: call    sub_1800B195C
 * 00000001800B4713: mov     qword ptr [rbp+9E40h+var_9C10], rax
 * 00000001800B471A: add     rax, 678Ch
 * 00000001800B4720: mov     qword ptr [rbp+9E40h+var_9C10+8], rax
 * 00000001800B4727: movups  xmm7, [rbp+9E40h+var_9C10]
 * 00000001800B472E: movups  [rbp+9E40h+var_8790], xmm7
 * 00000001800B4735: mov     dword ptr [rbp+9E40h+var_8780], 5
 * 00000001800B473F: mov     dword ptr [rbp+9E40h+var_8780+4], esi
 * 00000001800B4745: movups  xmm6, [rbp+9E40h+var_8780]
 * 00000001800B474C: call    sub_1800B1A0C
 * 00000001800B4751: mov     r8, rax
 * 00000001800B4754: mov     r9d, r12d
 * 00000001800B4757: mov     edx, 98h
 * 00000001800B475C: lea     rcx, [rbp+9E40h+var_3470]; Src
 * 00000001800B4763: call    sub_18007C338
 * 00000001800B4768: nop
 * 00000001800B4769: mov     r8, rax
 * 00000001800B476C: mov     rdx, r13
 * 00000001800B476F: lea     rcx, [rbp+9E40h+var_34D0]
 * 00000001800B4776: call    sub_18001C6E8
 * 00000001800B477B: nop
 * 00000001800B477C: lea     r8, aPixel; "/Pixel"
 * 00000001800B4783: mov     rdx, rax
 * 00000001800B4786: lea     rcx, [rbp+9E40h+var_6430]
 * 00000001800B478D: call    sub_18001C61C
 * 00000001800B4792: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4797: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B479C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B47A1: mov     rcx, rax
 * 00000001800B47A4: call    sub_18007C3DC
 * 00000001800B47A9: nop
 * 00000001800B47AA: lea     rcx, [rbp+9E40h+var_34D0]
 * 00000001800B47B1: call    sub_180010F30
 * 00000001800B47B6: nop
 * 00000001800B47B7: lea     rcx, [rbp+9E40h+var_3470]
 * 00000001800B47BE: call    sub_180010F30
 * 00000001800B47C3: nop
 * 00000001800B47C4: lea     rcx, dword_1801D92DC
 * 00000001800B47CB: call    sub_18000C538
 * 00000001800B47D0: mov     rax, [rdi+rbx*8]
 * 00000001800B47D4: mov     eax, [r15+rax]
 * 00000001800B47D8: cmp     cs:dword_1801D92E0, eax
 * 00000001800B47DE: jle     loc_1800B48BF
 * 00000001800B47E4: lea     rcx, dword_1801D92E0
 * 00000001800B47EB: call    sub_18000C5A0
 * 00000001800B47F0: cmp     cs:dword_1801D92E0, r14d
 * 00000001800B47F7: jnz     loc_1800B48BF
 * 00000001800B47FD: call    sub_1800B195C
 * 00000001800B4802: mov     qword ptr [rbp+9E40h+var_9C00], rax
 * 00000001800B4809: add     rax, 678Ch
 * 00000001800B480F: mov     qword ptr [rbp+9E40h+var_9C00+8], rax
 * 00000001800B4816: movups  xmm7, [rbp+9E40h+var_9C00]
 * 00000001800B481D: movups  [rbp+9E40h+var_8770], xmm7
 * 00000001800B4824: mov     dword ptr [rbp+9E40h+var_8760], 5
 * 00000001800B482E: mov     dword ptr [rbp+9E40h+var_8760+4], esi
 * 00000001800B4834: movups  xmm6, [rbp+9E40h+var_8760]
 * 00000001800B483B: call    sub_1800B1A0C
 * 00000001800B4840: mov     r8, rax
 * 00000001800B4843: mov     r9d, r12d
 * 00000001800B4846: mov     edx, 9Ah
 * 00000001800B484B: lea     rcx, [rbp+9E40h+var_3350]; Src
 * 00000001800B4852: call    sub_18007C338
 * 00000001800B4857: nop
 * 00000001800B4858: mov     r8, rax
 * 00000001800B485B: mov     rdx, r13
 * 00000001800B485E: lea     rcx, [rbp+9E40h+var_33B0]
 * 00000001800B4865: call    sub_18001C6E8
 * 00000001800B486A: nop
 * 00000001800B486B: lea     r8, aPixel; "/Pixel"
 * 00000001800B4872: mov     rdx, rax
 * 00000001800B4875: lea     rcx, [rbp+9E40h+var_6410]
 * 00000001800B487C: call    sub_18001C61C
 * 00000001800B4881: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4886: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B488B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4890: mov     rcx, rax
 * 00000001800B4893: call    sub_18007C3DC
 * 00000001800B4898: nop
 * 00000001800B4899: lea     rcx, [rbp+9E40h+var_33B0]
 * 00000001800B48A0: call    sub_180010F30
 * 00000001800B48A5: nop
 * 00000001800B48A6: lea     rcx, [rbp+9E40h+var_3350]
 * 00000001800B48AD: call    sub_180010F30
 * 00000001800B48B2: nop
 * 00000001800B48B3: lea     rcx, dword_1801D92E0
 * 00000001800B48BA: call    sub_18000C538
 * 00000001800B48BF: mov     rax, [rdi+rbx*8]
 * 00000001800B48C3: mov     eax, [r15+rax]
 * 00000001800B48C7: cmp     cs:dword_1801D92E4, eax
 * 00000001800B48CD: jle     loc_1800B49AE
 * 00000001800B48D3: lea     rcx, dword_1801D92E4
 * 00000001800B48DA: call    sub_18000C5A0
 * 00000001800B48DF: cmp     cs:dword_1801D92E4, r14d
 * 00000001800B48E6: jnz     loc_1800B49AE
 * 00000001800B48EC: call    sub_1800B18CC
 * 00000001800B48F1: mov     qword ptr [rbp+9E40h+var_9BF0], rax
 * 00000001800B48F8: add     rax, 63E4h
 * 00000001800B48FE: mov     qword ptr [rbp+9E40h+var_9BF0+8], rax
 * 00000001800B4905: movups  xmm7, [rbp+9E40h+var_9BF0]
 * 00000001800B490C: movups  [rbp+9E40h+var_8750], xmm7
 * 00000001800B4913: mov     dword ptr [rbp+9E40h+var_8740], 5
 * 00000001800B491D: mov     dword ptr [rbp+9E40h+var_8740+4], esi
 * 00000001800B4923: movups  xmm6, [rbp+9E40h+var_8740]
 * 00000001800B492A: call    sub_1800B1A0C
 * 00000001800B492F: mov     r8, rax
 * 00000001800B4932: mov     r9d, r12d
 * 00000001800B4935: mov     edx, 0A0h
 * 00000001800B493A: lea     rcx, [rbp+9E40h+var_3230]; Src
 * 00000001800B4941: call    sub_18007C338
 * 00000001800B4946: nop
 * 00000001800B4947: mov     r8, rax
 * 00000001800B494A: mov     rdx, r13
 * 00000001800B494D: lea     rcx, [rbp+9E40h+var_3290]
 * 00000001800B4954: call    sub_18001C6E8
 * 00000001800B4959: nop
 * 00000001800B495A: lea     r8, aPixel; "/Pixel"
 * 00000001800B4961: mov     rdx, rax
 * 00000001800B4964: lea     rcx, [rbp+9E40h+var_63F0]
 * 00000001800B496B: call    sub_18001C61C
 * 00000001800B4970: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4975: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B497A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B497F: mov     rcx, rax
 * 00000001800B4982: call    sub_18007C3DC
 * 00000001800B4987: nop
 * 00000001800B4988: lea     rcx, [rbp+9E40h+var_3290]
 * 00000001800B498F: call    sub_180010F30
 * 00000001800B4994: nop
 * 00000001800B4995: lea     rcx, [rbp+9E40h+var_3230]
 * 00000001800B499C: call    sub_180010F30
 * 00000001800B49A1: nop
 * 00000001800B49A2: lea     rcx, dword_1801D92E4
 * 00000001800B49A9: call    sub_18000C538
 * 00000001800B49AE: mov     rax, [rdi+rbx*8]
 * 00000001800B49B2: mov     eax, [r15+rax]
 * 00000001800B49B6: cmp     cs:dword_1801D92E8, eax
 * 00000001800B49BC: jle     loc_1800B4A9D
 * 00000001800B49C2: lea     rcx, dword_1801D92E8
 * 00000001800B49C9: call    sub_18000C5A0
 * 00000001800B49CE: cmp     cs:dword_1801D92E8, r14d
 * 00000001800B49D5: jnz     loc_1800B4A9D
 * 00000001800B49DB: call    sub_1800B18CC
 * 00000001800B49E0: mov     qword ptr [rbp+9E40h+var_9BE0], rax
 * 00000001800B49E7: add     rax, 63E4h
 * 00000001800B49ED: mov     qword ptr [rbp+9E40h+var_9BE0+8], rax
 * 00000001800B49F4: movups  xmm7, [rbp+9E40h+var_9BE0]
 * 00000001800B49FB: movups  [rbp+9E40h+var_8730], xmm7
 * 00000001800B4A02: mov     dword ptr [rbp+9E40h+var_8720], 5
 * 00000001800B4A0C: mov     dword ptr [rbp+9E40h+var_8720+4], esi
 * 00000001800B4A12: movups  xmm6, [rbp+9E40h+var_8720]
 * 00000001800B4A19: call    sub_1800B1A0C
 * 00000001800B4A1E: mov     r8, rax
 * 00000001800B4A21: mov     r9d, r12d
 * 00000001800B4A24: mov     edx, 0A2h
 * 00000001800B4A29: lea     rcx, [rbp+9E40h+var_3110]; Src
 * 00000001800B4A30: call    sub_18007C338
 * 00000001800B4A35: nop
 * 00000001800B4A36: mov     r8, rax
 * 00000001800B4A39: mov     rdx, r13
 * 00000001800B4A3C: lea     rcx, [rbp+9E40h+var_3170]
 * 00000001800B4A43: call    sub_18001C6E8
 * 00000001800B4A48: nop
 * 00000001800B4A49: lea     r8, aPixel; "/Pixel"
 * 00000001800B4A50: mov     rdx, rax
 * 00000001800B4A53: lea     rcx, [rbp+9E40h+var_63D0]
 * 00000001800B4A5A: call    sub_18001C61C
 * 00000001800B4A5F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4A64: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B4A69: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4A6E: mov     rcx, rax
 * 00000001800B4A71: call    sub_18007C3DC
 * 00000001800B4A76: nop
 * 00000001800B4A77: lea     rcx, [rbp+9E40h+var_3170]
 * 00000001800B4A7E: call    sub_180010F30
 * 00000001800B4A83: nop
 * 00000001800B4A84: lea     rcx, [rbp+9E40h+var_3110]
 * 00000001800B4A8B: call    sub_180010F30
 * 00000001800B4A90: nop
 * 00000001800B4A91: lea     rcx, dword_1801D92E8
 * 00000001800B4A98: call    sub_18000C538
 * 00000001800B4A9D: mov     rax, [rdi+rbx*8]
 * 00000001800B4AA1: mov     eax, [r15+rax]
 * 00000001800B4AA5: cmp     cs:dword_1801D92EC, eax
 * 00000001800B4AAB: jle     loc_1800B4B8C
 * 00000001800B4AB1: lea     rcx, dword_1801D92EC
 * 00000001800B4AB8: call    sub_18000C5A0
 * 00000001800B4ABD: cmp     cs:dword_1801D92EC, r14d
 * 00000001800B4AC4: jnz     loc_1800B4B8C
 * 00000001800B4ACA: call    sub_1800B190C
 * 00000001800B4ACF: mov     qword ptr [rbp+9E40h+var_9BD0], rax
 * 00000001800B4AD6: add     rax, 658Ch
 * 00000001800B4ADC: mov     qword ptr [rbp+9E40h+var_9BD0+8], rax
 * 00000001800B4AE3: movups  xmm7, [rbp+9E40h+var_9BD0]
 * 00000001800B4AEA: movups  [rbp+9E40h+var_8710], xmm7
 * 00000001800B4AF1: mov     dword ptr [rbp+9E40h+var_8700], 5
 * 00000001800B4AFB: mov     dword ptr [rbp+9E40h+var_8700+4], esi
 * 00000001800B4B01: movups  xmm6, [rbp+9E40h+var_8700]
 * 00000001800B4B08: call    sub_1800B1A0C
 * 00000001800B4B0D: mov     r8, rax
 * 00000001800B4B10: mov     r9d, r12d
 * 00000001800B4B13: mov     edx, 0A8h
 * 00000001800B4B18: lea     rcx, [rbp+9E40h+var_2FF0]; Src
 * 00000001800B4B1F: call    sub_18007C338
 * 00000001800B4B24: nop
 * 00000001800B4B25: mov     r8, rax
 * 00000001800B4B28: mov     rdx, r13
 * 00000001800B4B2B: lea     rcx, [rbp+9E40h+var_3050]
 * 00000001800B4B32: call    sub_18001C6E8
 * 00000001800B4B37: nop
 * 00000001800B4B38: lea     r8, aPixel; "/Pixel"
 * 00000001800B4B3F: mov     rdx, rax
 * 00000001800B4B42: lea     rcx, [rbp+9E40h+var_63B0]
 * 00000001800B4B49: call    sub_18001C61C
 * 00000001800B4B4E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4B53: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B4B58: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4B5D: mov     rcx, rax
 * 00000001800B4B60: call    sub_18007C3DC
 * 00000001800B4B65: nop
 * 00000001800B4B66: lea     rcx, [rbp+9E40h+var_3050]
 * 00000001800B4B6D: call    sub_180010F30
 * 00000001800B4B72: nop
 * 00000001800B4B73: lea     rcx, [rbp+9E40h+var_2FF0]
 * 00000001800B4B7A: call    sub_180010F30
 * 00000001800B4B7F: nop
 * 00000001800B4B80: lea     rcx, dword_1801D92EC
 * 00000001800B4B87: call    sub_18000C538
 * 00000001800B4B8C: mov     rax, [rdi+rbx*8]
 * 00000001800B4B90: mov     eax, [r15+rax]
 * 00000001800B4B94: cmp     cs:dword_1801D92F0, eax
 * 00000001800B4B9A: jle     loc_1800B4C7B
 * 00000001800B4BA0: lea     rcx, dword_1801D92F0
 * 00000001800B4BA7: call    sub_18000C5A0
 * 00000001800B4BAC: cmp     cs:dword_1801D92F0, r14d
 * 00000001800B4BB3: jnz     loc_1800B4C7B
 * 00000001800B4BB9: call    sub_1800B190C
 * 00000001800B4BBE: mov     qword ptr [rbp+9E40h+var_9BC0], rax
 * 00000001800B4BC5: add     rax, 658Ch
 * 00000001800B4BCB: mov     qword ptr [rbp+9E40h+var_9BC0+8], rax
 * 00000001800B4BD2: movups  xmm7, [rbp+9E40h+var_9BC0]
 * 00000001800B4BD9: movups  [rbp+9E40h+var_86F0], xmm7
 * 00000001800B4BE0: mov     dword ptr [rbp+9E40h+var_86E0], 5
 * 00000001800B4BEA: mov     dword ptr [rbp+9E40h+var_86E0+4], esi
 * 00000001800B4BF0: movups  xmm6, [rbp+9E40h+var_86E0]
 * 00000001800B4BF7: call    sub_1800B1A0C
 * 00000001800B4BFC: mov     r8, rax
 * 00000001800B4BFF: mov     r9d, r12d
 * 00000001800B4C02: mov     edx, 0AAh
 * 00000001800B4C07: lea     rcx, [rbp+9E40h+var_2ED0]; Src
 * 00000001800B4C0E: call    sub_18007C338
 * 00000001800B4C13: nop
 * 00000001800B4C14: mov     r8, rax
 * 00000001800B4C17: mov     rdx, r13
 * 00000001800B4C1A: lea     rcx, [rbp+9E40h+var_2F30]
 * 00000001800B4C21: call    sub_18001C6E8
 * 00000001800B4C26: nop
 * 00000001800B4C27: lea     r8, aPixel; "/Pixel"
 * 00000001800B4C2E: mov     rdx, rax
 * 00000001800B4C31: lea     rcx, [rbp+9E40h+var_6390]
 * 00000001800B4C38: call    sub_18001C61C
 * 00000001800B4C3D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4C42: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B4C47: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4C4C: mov     rcx, rax
 * 00000001800B4C4F: call    sub_18007C3DC
 * 00000001800B4C54: nop
 * 00000001800B4C55: lea     rcx, [rbp+9E40h+var_2F30]
 * 00000001800B4C5C: call    sub_180010F30
 * 00000001800B4C61: nop
 * 00000001800B4C62: lea     rcx, [rbp+9E40h+var_2ED0]
 * 00000001800B4C69: call    sub_180010F30
 * 00000001800B4C6E: nop
 * 00000001800B4C6F: lea     rcx, dword_1801D92F0
 * 00000001800B4C76: call    sub_18000C538
 * 00000001800B4C7B: mov     rax, [rdi+rbx*8]
 * 00000001800B4C7F: mov     eax, [r15+rax]
 * 00000001800B4C83: cmp     cs:dword_1801D92F4, eax
 * 00000001800B4C89: jle     loc_1800B4D6A
 * 00000001800B4C8F: lea     rcx, dword_1801D92F4
 * 00000001800B4C96: call    sub_18000C5A0
 * 00000001800B4C9B: cmp     cs:dword_1801D92F4, r14d
 * 00000001800B4CA2: jnz     loc_1800B4D6A
 * 00000001800B4CA8: call    sub_1800B193C
 * 00000001800B4CAD: mov     qword ptr [rbp+9E40h+var_9BB0], rax
 * 00000001800B4CB4: add     rax, 65B8h
 * 00000001800B4CBA: mov     qword ptr [rbp+9E40h+var_9BB0+8], rax
 * 00000001800B4CC1: movups  xmm7, [rbp+9E40h+var_9BB0]
 * 00000001800B4CC8: movups  [rbp+9E40h+var_86D0], xmm7
 * 00000001800B4CCF: mov     dword ptr [rbp+9E40h+var_86C0], 5
 * 00000001800B4CD9: mov     dword ptr [rbp+9E40h+var_86C0+4], esi
 * 00000001800B4CDF: movups  xmm6, [rbp+9E40h+var_86C0]
 * 00000001800B4CE6: call    sub_1800B1A0C
 * 00000001800B4CEB: mov     r8, rax
 * 00000001800B4CEE: mov     r9d, r12d
 * 00000001800B4CF1: mov     edx, 0B0h
 * 00000001800B4CF6: lea     rcx, [rbp+9E40h+var_2DB0]; Src
 * 00000001800B4CFD: call    sub_18007C338
 * 00000001800B4D02: nop
 * 00000001800B4D03: mov     r8, rax
 * 00000001800B4D06: mov     rdx, r13
 * 00000001800B4D09: lea     rcx, [rbp+9E40h+var_2E10]
 * 00000001800B4D10: call    sub_18001C6E8
 * 00000001800B4D15: nop
 * 00000001800B4D16: lea     r8, aPixel; "/Pixel"
 * 00000001800B4D1D: mov     rdx, rax
 * 00000001800B4D20: lea     rcx, [rbp+9E40h+var_6370]
 * 00000001800B4D27: call    sub_18001C61C
 * 00000001800B4D2C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4D31: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B4D36: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4D3B: mov     rcx, rax
 * 00000001800B4D3E: call    sub_18007C3DC
 * 00000001800B4D43: nop
 * 00000001800B4D44: lea     rcx, [rbp+9E40h+var_2E10]
 * 00000001800B4D4B: call    sub_180010F30
 * 00000001800B4D50: nop
 * 00000001800B4D51: lea     rcx, [rbp+9E40h+var_2DB0]
 * 00000001800B4D58: call    sub_180010F30
 * 00000001800B4D5D: nop
 * 00000001800B4D5E: lea     rcx, dword_1801D92F4
 * 00000001800B4D65: call    sub_18000C538
 * 00000001800B4D6A: mov     rax, [rdi+rbx*8]
 * 00000001800B4D6E: mov     eax, [r15+rax]
 * 00000001800B4D72: cmp     cs:dword_1801D92F8, eax
 * 00000001800B4D78: jle     loc_1800B4E59
 * 00000001800B4D7E: lea     rcx, dword_1801D92F8
 * 00000001800B4D85: call    sub_18000C5A0
 * 00000001800B4D8A: cmp     cs:dword_1801D92F8, r14d
 * 00000001800B4D91: jnz     loc_1800B4E59
 * 00000001800B4D97: call    sub_1800B193C
 * 00000001800B4D9C: mov     qword ptr [rbp+9E40h+var_9BA0], rax
 * 00000001800B4DA3: add     rax, 65B8h
 * 00000001800B4DA9: mov     qword ptr [rbp+9E40h+var_9BA0+8], rax
 * 00000001800B4DB0: movups  xmm7, [rbp+9E40h+var_9BA0]
 * 00000001800B4DB7: movups  [rbp+9E40h+var_86B0], xmm7
 * 00000001800B4DBE: mov     dword ptr [rbp+9E40h+var_86A0], 5
 * 00000001800B4DC8: mov     dword ptr [rbp+9E40h+var_86A0+4], esi
 * 00000001800B4DCE: movups  xmm6, [rbp+9E40h+var_86A0]
 * 00000001800B4DD5: call    sub_1800B1A0C
 * 00000001800B4DDA: mov     r8, rax
 * 00000001800B4DDD: mov     r9d, r12d
 * 00000001800B4DE0: mov     edx, 0B2h
 * 00000001800B4DE5: lea     rcx, [rbp+9E40h+var_2C90]; Src
 * 00000001800B4DEC: call    sub_18007C338
 * 00000001800B4DF1: nop
 * 00000001800B4DF2: mov     r8, rax
 * 00000001800B4DF5: mov     rdx, r13
 * 00000001800B4DF8: lea     rcx, [rbp+9E40h+var_2CF0]
 * 00000001800B4DFF: call    sub_18001C6E8
 * 00000001800B4E04: nop
 * 00000001800B4E05: lea     r8, aPixel; "/Pixel"
 * 00000001800B4E0C: mov     rdx, rax
 * 00000001800B4E0F: lea     rcx, [rbp+9E40h+var_6350]
 * 00000001800B4E16: call    sub_18001C61C
 * 00000001800B4E1B: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4E20: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B4E25: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4E2A: mov     rcx, rax
 * 00000001800B4E2D: call    sub_18007C3DC
 * 00000001800B4E32: nop
 * 00000001800B4E33: lea     rcx, [rbp+9E40h+var_2CF0]
 * 00000001800B4E3A: call    sub_180010F30
 * 00000001800B4E3F: nop
 * 00000001800B4E40: lea     rcx, [rbp+9E40h+var_2C90]
 * 00000001800B4E47: call    sub_180010F30
 * 00000001800B4E4C: nop
 * 00000001800B4E4D: lea     rcx, dword_1801D92F8
 * 00000001800B4E54: call    sub_18000C538
 * 00000001800B4E59: mov     rax, [rdi+rbx*8]
 * 00000001800B4E5D: mov     eax, [r15+rax]
 * 00000001800B4E61: cmp     cs:dword_1801D92FC, eax
 * 00000001800B4E67: jle     loc_1800B4F48
 * 00000001800B4E6D: lea     rcx, dword_1801D92FC
 * 00000001800B4E74: call    sub_18000C5A0
 * 00000001800B4E79: cmp     cs:dword_1801D92FC, r14d
 * 00000001800B4E80: jnz     loc_1800B4F48
 * 00000001800B4E86: call    sub_1800B195C
 * 00000001800B4E8B: mov     qword ptr [rbp+9E40h+var_9B90], rax
 * 00000001800B4E92: add     rax, 678Ch
 * 00000001800B4E98: mov     qword ptr [rbp+9E40h+var_9B90+8], rax
 * 00000001800B4E9F: movups  xmm7, [rbp+9E40h+var_9B90]
 * 00000001800B4EA6: movups  [rbp+9E40h+var_8690], xmm7
 * 00000001800B4EAD: mov     dword ptr [rbp+9E40h+var_8680], 5
 * 00000001800B4EB7: mov     dword ptr [rbp+9E40h+var_8680+4], esi
 * 00000001800B4EBD: movups  xmm6, [rbp+9E40h+var_8680]
 * 00000001800B4EC4: call    sub_1800B1A0C
 * 00000001800B4EC9: mov     r8, rax
 * 00000001800B4ECC: mov     r9d, r12d
 * 00000001800B4ECF: mov     edx, 0B8h
 * 00000001800B4ED4: lea     rcx, [rbp+9E40h+var_2BD0]; Src
 * 00000001800B4EDB: call    sub_18007C338
 * 00000001800B4EE0: nop
 * 00000001800B4EE1: mov     r8, rax
 * 00000001800B4EE4: mov     rdx, r13
 * 00000001800B4EE7: lea     rcx, [rbp+9E40h+var_2C30]
 * 00000001800B4EEE: call    sub_18001C6E8
 * 00000001800B4EF3: nop
 * 00000001800B4EF4: lea     r8, aPixel; "/Pixel"
 * 00000001800B4EFB: mov     rdx, rax
 * 00000001800B4EFE: lea     rcx, [rbp+9E40h+var_6330]
 * 00000001800B4F05: call    sub_18001C61C
 * 00000001800B4F0A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4F0F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B4F14: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4F19: mov     rcx, rax
 * 00000001800B4F1C: call    sub_18007C3DC
 * 00000001800B4F21: nop
 * 00000001800B4F22: lea     rcx, [rbp+9E40h+var_2C30]
 * 00000001800B4F29: call    sub_180010F30
 * 00000001800B4F2E: nop
 * 00000001800B4F2F: lea     rcx, [rbp+9E40h+var_2BD0]
 * 00000001800B4F36: call    sub_180010F30
 * 00000001800B4F3B: nop
 * 00000001800B4F3C: lea     rcx, dword_1801D92FC
 * 00000001800B4F43: call    sub_18000C538
 * 00000001800B4F48: mov     rax, [rdi+rbx*8]
 * 00000001800B4F4C: mov     eax, [r15+rax]
 * 00000001800B4F50: cmp     cs:dword_1801D9300, eax
 * 00000001800B4F56: jle     loc_1800B5037
 * 00000001800B4F5C: lea     rcx, dword_1801D9300
 * 00000001800B4F63: call    sub_18000C5A0
 * 00000001800B4F68: cmp     cs:dword_1801D9300, r14d
 * 00000001800B4F6F: jnz     loc_1800B5037
 * 00000001800B4F75: call    sub_1800B195C
 * 00000001800B4F7A: mov     qword ptr [rbp+9E40h+var_9B80], rax
 * 00000001800B4F81: add     rax, 678Ch
 * 00000001800B4F87: mov     qword ptr [rbp+9E40h+var_9B80+8], rax
 * 00000001800B4F8E: movups  xmm7, [rbp+9E40h+var_9B80]
 * 00000001800B4F95: movups  [rbp+9E40h+var_8670], xmm7
 * 00000001800B4F9C: mov     dword ptr [rbp+9E40h+var_8660], 5
 * 00000001800B4FA6: mov     dword ptr [rbp+9E40h+var_8660+4], esi
 * 00000001800B4FAC: movups  xmm6, [rbp+9E40h+var_8660]
 * 00000001800B4FB3: call    sub_1800B1A0C
 * 00000001800B4FB8: mov     r8, rax
 * 00000001800B4FBB: mov     r9d, r12d
 * 00000001800B4FBE: mov     edx, 0BAh
 * 00000001800B4FC3: lea     rcx, [rbp+9E40h+var_2AB0]; Src
 * 00000001800B4FCA: call    sub_18007C338
 * 00000001800B4FCF: nop
 * 00000001800B4FD0: mov     r8, rax
 * 00000001800B4FD3: mov     rdx, r13
 * 00000001800B4FD6: lea     rcx, [rbp+9E40h+var_2B10]
 * 00000001800B4FDD: call    sub_18001C6E8
 * 00000001800B4FE2: nop
 * 00000001800B4FE3: lea     r8, aPixel; "/Pixel"
 * 00000001800B4FEA: mov     rdx, rax
 * 00000001800B4FED: lea     rcx, [rbp+9E40h+var_6310]
 * 00000001800B4FF4: call    sub_18001C61C
 * 00000001800B4FF9: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4FFE: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B5003: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B5008: mov     rcx, rax
 * 00000001800B500B: call    sub_18007C3DC
 * 00000001800B5010: nop
 * 00000001800B5011: lea     rcx, [rbp+9E40h+var_2B10]
 * 00000001800B5018: call    sub_180010F30
 * 00000001800B501D: nop
 * 00000001800B501E: lea     rcx, [rbp+9E40h+var_2AB0]
 * 00000001800B5025: call    sub_180010F30
 * 00000001800B502A: nop
 * 00000001800B502B: lea     rcx, dword_1801D9300
 * 00000001800B5032: call    sub_18000C538
 * 00000001800B5037: mov     rax, [rdi+rbx*8]
 * 00000001800B503B: mov     eax, [r15+rax]
 * 00000001800B503F: cmp     cs:dword_1801D9304, eax
 * 00000001800B5045: jle     loc_1800B5126
 * 00000001800B504B: lea     rcx, dword_1801D9304
 * 00000001800B5052: call    sub_18000C5A0
 * 00000001800B5057: cmp     cs:dword_1801D9304, r14d
 * 00000001800B505E: jnz     loc_1800B5126
 * 00000001800B5064: call    sub_1800B18CC
 * 00000001800B5069: mov     qword ptr [rbp+9E40h+var_9B70], rax
 * 00000001800B5070: add     rax, 63E4h
 * 00000001800B5076: mov     qword ptr [rbp+9E40h+var_9B70+8], rax
 * 00000001800B507D: movups  xmm7, [rbp+9E40h+var_9B70]
 * 00000001800B5084: movups  [rbp+9E40h+var_8650], xmm7
 * 00000001800B508B: mov     dword ptr [rbp+9E40h+var_8640], 5
 * 00000001800B5095: mov     dword ptr [rbp+9E40h+var_8640+4], esi
 * 00000001800B509B: movups  xmm6, [rbp+9E40h+var_8640]
 * 00000001800B50A2: call    sub_1800B1A0C
 * 00000001800B50A7: mov     r8, rax
 * 00000001800B50AA: mov     r9d, r12d
 * 00000001800B50AD: mov     edx, 0C0h
 * 00000001800B50B2: lea     rcx, [rbp+9E40h+var_2990]; Src
 * 00000001800B50B9: call    sub_18007C338
 * 00000001800B50BE: nop
 * 00000001800B50BF: mov     r8, rax
 * 00000001800B50C2: mov     rdx, r13
 * 00000001800B50C5: lea     rcx, [rbp+9E40h+var_29F0]
 * 00000001800B50CC: call    sub_18001C6E8
 * 00000001800B50D1: nop
 * 00000001800B50D2: lea     r8, aPixel; "/Pixel"
 * 00000001800B50D9: mov     rdx, rax
 * 00000001800B50DC: lea     rcx, [rbp+9E40h+var_62F0]
 * 00000001800B50E3: call    sub_18001C61C
 * 00000001800B50E8: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B50ED: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B50F2: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B50F7: mov     rcx, rax
 * 00000001800B50FA: call    sub_18007C3DC
 * 00000001800B50FF: nop
 * 00000001800B5100: lea     rcx, [rbp+9E40h+var_29F0]
 * 00000001800B5107: call    sub_180010F30
 * 00000001800B510C: nop
 * 00000001800B510D: lea     rcx, [rbp+9E40h+var_2990]
 * 00000001800B5114: call    sub_180010F30
 * 00000001800B5119: nop
 * 00000001800B511A: lea     rcx, dword_1801D9304
 * 00000001800B5121: call    sub_18000C538
 * 00000001800B5126: mov     rax, [rdi+rbx*8]
 * 00000001800B512A: mov     eax, [r15+rax]
 * 00000001800B512E: cmp     cs:dword_1801D9308, eax
 * 00000001800B5134: jle     loc_1800B5215
 * 00000001800B513A: lea     rcx, dword_1801D9308
 * 00000001800B5141: call    sub_18000C5A0
 * 00000001800B5146: cmp     cs:dword_1801D9308, r14d
 * 00000001800B514D: jnz     loc_1800B5215
 * 00000001800B5153: call    sub_1800B18CC
 * 00000001800B5158: mov     qword ptr [rbp+9E40h+var_9B60], rax
 * 00000001800B515F: add     rax, 63E4h
 * 00000001800B5165: mov     qword ptr [rbp+9E40h+var_9B60+8], rax
 * 00000001800B516C: movups  xmm7, [rbp+9E40h+var_9B60]
 * 00000001800B5173: movups  [rbp+9E40h+var_8630], xmm7
 * 00000001800B517A: mov     dword ptr [rbp+9E40h+var_8620], 5
 * 00000001800B5184: mov     dword ptr [rbp+9E40h+var_8620+4], esi
 * 00000001800B518A: movups  xmm6, [rbp+9E40h+var_8620]
 * 00000001800B5191: call    sub_1800B1A0C
 * 00000001800B5196: mov     r8, rax
 * 00000001800B5199: mov     r9d, r12d
 * 00000001800B519C: mov     edx, 0C2h
 * 00000001800B51A1: lea     rcx, [rbp+9E40h+var_2870]; Src
 * 00000001800B51A8: call    sub_18007C338
 * 00000001800B51AD: nop
 * 00000001800B51AE: mov     r8, rax
 * 00000001800B51B1: mov     rdx, r13
 * 00000001800B51B4: lea     rcx, [rbp+9E40h+var_28D0]
 * 00000001800B51BB: call    sub_18001C6E8
 * 00000001800B51C0: nop
 * 00000001800B51C1: lea     r8, aPixel; "/Pixel"
 * 00000001800B51C8: mov     rdx, rax
 * 00000001800B51CB: lea     rcx, [rbp+9E40h+var_62D0]
 * 00000001800B51D2: call    sub_18001C61C
 * 00000001800B51D7: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B51DC: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B51E1: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B51E6: mov     rcx, rax
 * 00000001800B51E9: call    sub_18007C3DC
 * 00000001800B51EE: nop
 * 00000001800B51EF: lea     rcx, [rbp+9E40h+var_28D0]
 * 00000001800B51F6: call    sub_180010F30
 * 00000001800B51FB: nop
 * 00000001800B51FC: lea     rcx, [rbp+9E40h+var_2870]
 * 00000001800B5203: call    sub_180010F30
 * 00000001800B5208: nop
 * 00000001800B5209: lea     rcx, dword_1801D9308
 * 00000001800B5210: call    sub_18000C538
 * 00000001800B5215: mov     rax, [rdi+rbx*8]
 * 00000001800B5219: mov     eax, [r15+rax]
 * 00000001800B521D: cmp     cs:dword_1801D930C, eax
 * 00000001800B5223: jle     loc_1800B5304
 * 00000001800B5229: lea     rcx, dword_1801D930C
 * 00000001800B5230: call    sub_18000C5A0
 * 00000001800B5235: cmp     cs:dword_1801D930C, r14d
 * 00000001800B523C: jnz     loc_1800B5304
 * 00000001800B5242: call    sub_1800B190C
 * 00000001800B5247: mov     qword ptr [rbp+9E40h+var_9B50], rax
 * 00000001800B524E: add     rax, 658Ch
 * 00000001800B5254: mov     qword ptr [rbp+9E40h+var_9B50+8], rax
 * 00000001800B525B: movups  xmm7, [rbp+9E40h+var_9B50]
 * 00000001800B5262: movups  [rbp+9E40h+var_8610], xmm7
 * 00000001800B5269: mov     dword ptr [rbp+9E40h+var_8600], 5
 * 00000001800B5273: mov     dword ptr [rbp+9E40h+var_8600+4], esi
 * 00000001800B5279: movups  xmm6, [rbp+9E40h+var_8600]
 * 00000001800B5280: call    sub_1800B1A0C
 * 00000001800B5285: mov     r8, rax
 * 00000001800B5288: mov     r9d, r12d
 * 00000001800B528B: mov     edx, 0C8h
 * 00000001800B5290: lea     rcx, [rbp+9E40h+var_2750]; Src
 * 00000001800B5297: call    sub_18007C338
 * 00000001800B529C: nop
 * 00000001800B529D: mov     r8, rax
 * 00000001800B52A0: mov     rdx, r13
 * 00000001800B52A3: lea     rcx, [rbp+9E40h+var_27B0]
 * 00000001800B52AA: call    sub_18001C6E8
 * 00000001800B52AF: nop
 * 00000001800B52B0: lea     r8, aPixel; "/Pixel"
 * 00000001800B52B7: mov     rdx, rax
 * 00000001800B52BA: lea     rcx, [rbp+9E40h+var_62B0]
 * 00000001800B52C1: call    sub_18001C61C
 * 00000001800B52C6: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B52CB: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B52D0: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B52D5: mov     rcx, rax
 * 00000001800B52D8: call    sub_18007C3DC
 * 00000001800B52DD: nop
 * 00000001800B52DE: lea     rcx, [rbp+9E40h+var_27B0]
 * 00000001800B52E5: call    sub_180010F30
 * 00000001800B52EA: nop
 * 00000001800B52EB: lea     rcx, [rbp+9E40h+var_2750]
 * 00000001800B52F2: call    sub_180010F30
 * 00000001800B52F7: nop
 * 00000001800B52F8: lea     rcx, dword_1801D930C
 * 00000001800B52FF: call    sub_18000C538
 * 00000001800B5304: mov     rax, [rdi+rbx*8]
 * 00000001800B5308: mov     eax, [r15+rax]
 * 00000001800B530C: cmp     cs:dword_1801D9310, eax
 * 00000001800B5312: jle     loc_1800B53F3
 * 00000001800B5318: lea     rcx, dword_1801D9310
 * 00000001800B531F: call    sub_18000C5A0
 * 00000001800B5324: cmp     cs:dword_1801D9310, r14d
 * 00000001800B532B: jnz     loc_1800B53F3
 * 00000001800B5331: call    sub_1800B190C
 * 00000001800B5336: mov     qword ptr [rbp+9E40h+var_9B40], rax
 * 00000001800B533D: add     rax, 658Ch
 * 00000001800B5343: mov     qword ptr [rbp+9E40h+var_9B40+8], rax
 * 00000001800B534A: movups  xmm7, [rbp+9E40h+var_9B40]
 * 00000001800B5351: movups  [rbp+9E40h+var_85F0], xmm7
 * 00000001800B5358: mov     dword ptr [rbp+9E40h+var_85E0], 5
 * 00000001800B5362: mov     dword ptr [rbp+9E40h+var_85E0+4], esi
 * 00000001800B5368: movups  xmm6, [rbp+9E40h+var_85E0]
 * 00000001800B536F: call    sub_1800B1A0C
 * 00000001800B5374: mov     r8, rax
 * 00000001800B5377: mov     r9d, r12d
 * 00000001800B537A: mov     edx, 0CAh
 * 00000001800B537F: lea     rcx, [rbp+9E40h+var_2630]; Src
 * 00000001800B5386: call    sub_18007C338
 * 00000001800B538B: nop
 * 00000001800B538C: mov     r8, rax
 * 00000001800B538F: mov     rdx, r13
 * 00000001800B5392: lea     rcx, [rbp+9E40h+var_2690]
 * 00000001800B5399: call    sub_18001C6E8
 * 00000001800B539E: nop
 * 00000001800B539F: lea     r8, aPixel; "/Pixel"
 * 00000001800B53A6: mov     rdx, rax
 * 00000001800B53A9: lea     rcx, [rbp+9E40h+var_6290]
 * 00000001800B53B0: call    sub_18001C61C
 * 00000001800B53B5: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B53BA: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B53BF: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B53C4: mov     rcx, rax
 * 00000001800B53C7: call    sub_18007C3DC
 * 00000001800B53CC: nop
 * 00000001800B53CD: lea     rcx, [rbp+9E40h+var_2690]
 * 00000001800B53D4: call    sub_180010F30
 * 00000001800B53D9: nop
 * 00000001800B53DA: lea     rcx, [rbp+9E40h+var_2630]
 * 00000001800B53E1: call    sub_180010F30
 * 00000001800B53E6: nop
 * 00000001800B53E7: lea     rcx, dword_1801D9310
 * 00000001800B53EE: call    sub_18000C538
 * 00000001800B53F3: mov     rax, [rdi+rbx*8]
 * 00000001800B53F7: mov     eax, [r15+rax]
 * 00000001800B53FB: cmp     cs:dword_1801D9314, eax
 * 00000001800B5401: jle     loc_1800B54E2
 * 00000001800B5407: lea     rcx, dword_1801D9314
 * 00000001800B540E: call    sub_18000C5A0
 * 00000001800B5413: cmp     cs:dword_1801D9314, r14d
 * 00000001800B541A: jnz     loc_1800B54E2
 * 00000001800B5420: call    sub_1800B193C
 * 00000001800B5425: mov     qword ptr [rbp+9E40h+var_9B30], rax
 * 00000001800B542C: add     rax, 65B8h
 * 00000001800B5432: mov     qword ptr [rbp+9E40h+var_9B30+8], rax
 * 00000001800B5439: movups  xmm7, [rbp+9E40h+var_9B30]
 * 00000001800B5440: movups  [rbp+9E40h+var_85D0], xmm7
 * 00000001800B5447: mov     dword ptr [rbp+9E40h+var_85C0], 5
 * 00000001800B5451: mov     dword ptr [rbp+9E40h+var_85C0+4], esi
 * 00000001800B5457: movups  xmm6, [rbp+9E40h+var_85C0]
 * 00000001800B545E: call    sub_1800B1A0C
 * 00000001800B5463: mov     r8, rax
 * 00000001800B5466: mov     r9d, r12d
 * 00000001800B5469: mov     edx, 0D0h
 * 00000001800B546E: lea     rcx, [rbp+9E40h+var_2510]; Src
 * 00000001800B5475: call    sub_18007C338
 * 00000001800B547A: nop
 * 00000001800B547B: mov     r8, rax
 * 00000001800B547E: mov     rdx, r13
 * 00000001800B5481: lea     rcx, [rbp+9E40h+var_2570]
 * 00000001800B5488: call    sub_18001C6E8
 * 00000001800B548D: nop
 * 00000001800B548E: lea     r8, aPixel; "/Pixel"
 * 00000001800B5495: mov     rdx, rax
 * 00000001800B5498: lea     rcx, [rbp+9E40h+var_6270]
 * 00000001800B549F: call    sub_18001C61C
 * 00000001800B54A4: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B54A9: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B54AE: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B54B3: mov     rcx, rax
 * 00000001800B54B6: call    sub_18007C3DC
 * 00000001800B54BB: nop
 * 00000001800B54BC: lea     rcx, [rbp+9E40h+var_2570]
 * 00000001800B54C3: call    sub_180010F30
 * 00000001800B54C8: nop
 * 00000001800B54C9: lea     rcx, [rbp+9E40h+var_2510]
 * 00000001800B54D0: call    sub_180010F30
 * 00000001800B54D5: nop
 * 00000001800B54D6: lea     rcx, dword_1801D9314
 * 00000001800B54DD: call    sub_18000C538
 * 00000001800B54E2: mov     rax, [rdi+rbx*8]
 * 00000001800B54E6: mov     eax, [r15+rax]
 * 00000001800B54EA: cmp     cs:dword_1801D9318, eax
 * 00000001800B54F0: jle     loc_1800B55D1
 * 00000001800B54F6: lea     rcx, dword_1801D9318
 * 00000001800B54FD: call    sub_18000C5A0
 * 00000001800B5502: cmp     cs:dword_1801D9318, r14d
 * 00000001800B5509: jnz     loc_1800B55D1
 * 00000001800B550F: call    sub_1800B193C
 * 00000001800B5514: mov     qword ptr [rbp+9E40h+var_9B20], rax
 * 00000001800B551B: add     rax, 65B8h
 * 00000001800B5521: mov     qword ptr [rbp+9E40h+var_9B20+8], rax
 * 00000001800B5528: movups  xmm7, [rbp+9E40h+var_9B20]
 * 00000001800B552F: movups  [rbp+9E40h+var_85B0], xmm7
 * 00000001800B5536: mov     dword ptr [rbp+9E40h+var_85A0], 5
 * 00000001800B5540: mov     dword ptr [rbp+9E40h+var_85A0+4], esi
 * 00000001800B5546: movups  xmm6, [rbp+9E40h+var_85A0]
 * 00000001800B554D: call    sub_1800B1A0C
 * 00000001800B5552: mov     r8, rax
 * 00000001800B5555: mov     r9d, r12d
 * 00000001800B5558: mov     edx, 0D2h
 * 00000001800B555D: lea     rcx, [rbp+9E40h+var_23F0]; Src
 * 00000001800B5564: call    sub_18007C338
 * 00000001800B5569: nop
 * 00000001800B556A: mov     r8, rax
 * 00000001800B556D: mov     rdx, r13
 * 00000001800B5570: lea     rcx, [rbp+9E40h+var_2450]
 * 00000001800B5577: call    sub_18001C6E8
 * 00000001800B557C: nop
 * 00000001800B557D: lea     r8, aPixel; "/Pixel"
 * 00000001800B5584: mov     rdx, rax
 * 00000001800B5587: lea     rcx, [rbp+9E40h+var_6250]
 * 00000001800B558E: call    sub_18001C61C
 * 00000001800B5593: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B5598: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B559D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B55A2: mov     rcx, rax
 * 00000001800B55A5: call    sub_18007C3DC
 * 00000001800B55AA: nop
 * 00000001800B55AB: lea     rcx, [rbp+9E40h+var_2450]
 * 00000001800B55B2: call    sub_180010F30
 * 00000001800B55B7: nop
 * 00000001800B55B8: lea     rcx, [rbp+9E40h+var_23F0]
 * 00000001800B55BF: call    sub_180010F30
 * 00000001800B55C4: nop
 * 00000001800B55C5: lea     rcx, dword_1801D9318
 * 00000001800B55CC: call    sub_18000C538
 * 00000001800B55D1: mov     rax, [rdi+rbx*8]
 * 00000001800B55D5: mov     eax, [r15+rax]
 * 00000001800B55D9: cmp     cs:dword_1801D931C, eax
 * 00000001800B55DF: jle     loc_1800B56C0
 * 00000001800B55E5: lea     rcx, dword_1801D931C
 * 00000001800B55EC: call    sub_18000C5A0
 * 00000001800B55F1: cmp     cs:dword_1801D931C, r14d
 * 00000001800B55F8: jnz     loc_1800B56C0
 * 00000001800B55FE: call    sub_1800B195C
 * 00000001800B5603: mov     qword ptr [rbp+9E40h+var_9B10], rax
 * 00000001800B560A: add     rax, 678Ch
 * 00000001800B5610: mov     qword ptr [rbp+9E40h+var_9B10+8], rax
 * 00000001800B5617: movups  xmm7, [rbp+9E40h+var_9B10]
 * 00000001800B561E: movups  [rbp+9E40h+var_8590], xmm7
 * 00000001800B5625: mov     dword ptr [rbp+9E40h+var_8580], 5
 * 00000001800B562F: mov     dword ptr [rbp+9E40h+var_8580+4], esi
 * 00000001800B5635: movups  xmm6, [rbp+9E40h+var_8580]
 * 00000001800B563C: call    sub_1800B1A0C
 * 00000001800B5641: mov     r8, rax
 * 00000001800B5644: mov     r9d, r12d
 * 00000001800B5647: mov     edx, 0D8h
 * 00000001800B564C: lea     rcx, [rbp+9E40h+var_22D0]; Src
 * 00000001800B5653: call    sub_18007C338
 * 00000001800B5658: nop
 * 00000001800B5659: mov     r8, rax
 * 00000001800B565C: mov     rdx, r13
 * 00000001800B565F: lea     rcx, [rbp+9E40h+var_2330]
 * 00000001800B5666: call    sub_18001C6E8
 * 00000001800B566B: nop
 * 00000001800B566C: lea     r8, aPixel; "/Pixel"
 * 00000001800B5673: mov     rdx, rax
 * 00000001800B5676: lea     rcx, [rbp+9E40h+var_6230]
 * 00000001800B567D: call    sub_18001C61C
 * 00000001800B5682: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B5687: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B568C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B5691: mov     rcx, rax
 * 00000001800B5694: call    sub_18007C3DC
 * 00000001800B5699: nop
 * 00000001800B569A: lea     rcx, [rbp+9E40h+var_2330]
 * 00000001800B56A1: call    sub_180010F30
 * 00000001800B56A6: nop
 * 00000001800B56A7: lea     rcx, [rbp+9E40h+var_22D0]
 * 00000001800B56AE: call    sub_180010F30
 * 00000001800B56B3: nop
 * 00000001800B56B4: lea     rcx, dword_1801D931C
 * 00000001800B56BB: call    sub_18000C538
 * 00000001800B56C0: mov     rax, [rdi+rbx*8]
 * 00000001800B56C4: mov     eax, [r15+rax]
 * 00000001800B56C8: cmp     cs:dword_1801D9320, eax
 * 00000001800B56CE: jle     loc_1800B57AF
 * 00000001800B56D4: lea     rcx, dword_1801D9320
 * 00000001800B56DB: call    sub_18000C5A0
 * 00000001800B56E0: cmp     cs:dword_1801D9320, r14d
 * 00000001800B56E7: jnz     loc_1800B57AF
 * 00000001800B56ED: call    sub_1800B195C
 * 00000001800B56F2: mov     qword ptr [rbp+9E40h+var_9B00], rax
 * 00000001800B56F9: add     rax, 678Ch
 * 00000001800B56FF: mov     qword ptr [rbp+9E40h+var_9B00+8], rax
 * 00000001800B5706: movups  xmm7, [rbp+9E40h+var_9B00]
 * 00000001800B570D: movups  [rbp+9E40h+var_8570], xmm7
 * 00000001800B5714: mov     dword ptr [rbp+9E40h+var_8560], 5
 * 00000001800B571E: mov     dword ptr [rbp+9E40h+var_8560+4], esi
 * 00000001800B5724: movups  xmm6, [rbp+9E40h+var_8560]
 * 00000001800B572B: call    sub_1800B1A0C
 * 00000001800B5730: mov     r8, rax
 * 00000001800B5733: mov     r9d, r12d
 * 00000001800B5736: mov     edx, 0DAh
 * 00000001800B573B: lea     rcx, [rbp+9E40h+var_21B0]; Src
 * 00000001800B5742: call    sub_18007C338
 * 00000001800B5747: nop
 * 00000001800B5748: mov     r8, rax
 * 00000001800B574B: mov     rdx, r13
 * 00000001800B574E: lea     rcx, [rbp+9E40h+var_2210]
 * 00000001800B5755: call    sub_18001C6E8
 * 00000001800B575A: nop
 * 00000001800B575B: lea     r8, aPixel; "/Pixel"
 * 00000001800B5762: mov     rdx, rax
 * 00000001800B5765: lea     rcx, [rbp+9E40h+var_6210]
 * 00000001800B576C: call    sub_18001C61C
 * 00000001800B5771: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B5776: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B577B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B5780: mov     rcx, rax
 * 00000001800B5783: call    sub_18007C3DC
 * 00000001800B5788: nop
 * 00000001800B5789: lea     rcx, [rbp+9E40h+var_2210]
 * 00000001800B5790: call    sub_180010F30
 * 00000001800B5795: nop
 * 00000001800B5796: lea     rcx, [rbp+9E40h+var_21B0]
 * 00000001800B579D: call    sub_180010F30
 * 00000001800B57A2: nop
 * 00000001800B57A3: lea     rcx, dword_1801D9320
 * 00000001800B57AA: call    sub_18000C538
 * 00000001800B57AF: mov     rax, [rdi+rbx*8]
 * 00000001800B57B3: mov     eax, [r15+rax]
 * 00000001800B57B7: cmp     cs:dword_1801D9324, eax
 * 00000001800B57BD: jle     loc_1800B589E
 * 00000001800B57C3: lea     rcx, dword_1801D9324
 * 00000001800B57CA: call    sub_18000C5A0
 * 00000001800B57CF: cmp     cs:dword_1801D9324, r14d
 * 00000001800B57D6: jnz     loc_1800B589E
 * 00000001800B57DC: call    sub_1800B18CC
 * 00000001800B57E1: mov     qword ptr [rbp+9E40h+var_9AF0], rax
 * 00000001800B57E8: add     rax, 63E4h
 * 00000001800B57EE: mov     qword ptr [rbp+9E40h+var_9AF0+8], rax
 * 00000001800B57F5: movups  xmm7, [rbp+9E40h+var_9AF0]
 * 00000001800B57FC: movups  [rbp+9E40h+var_8550], xmm7
 * 00000001800B5803: mov     dword ptr [rbp+9E40h+var_8540], 5
 * 00000001800B580D: mov     dword ptr [rbp+9E40h+var_8540+4], esi
 * 00000001800B5813: movups  xmm6, [rbp+9E40h+var_8540]
 * 00000001800B581A: call    sub_1800B1A0C
 * 00000001800B581F: mov     r8, rax
 * 00000001800B5822: mov     r9d, r12d
 * 00000001800B5825: mov     edx, 0E0h
 * 00000001800B582A: lea     rcx, [rbp+9E40h+var_2090]; Src
 * 00000001800B5831: call    sub_18007C338
 * 00000001800B5836: nop
 * 00000001800B5837: mov     r8, rax
 * 00000001800B583A: mov     rdx, r13
 * 00000001800B583D: lea     rcx, [rbp+9E40h+var_20F0]
 * 00000001800B5844: call    sub_18001C6E8
 * 00000001800B5849: nop
 * 00000001800B584A: lea     r8, aPixel; "/Pixel"
 * 00000001800B5851: mov     rdx, rax
 * 00000001800B5854: lea     rcx, [rbp+9E40h+var_61F0]
 * 00000001800B585B: call    sub_18001C61C
 * 00000001800B5860: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B5865: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B586A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B586F: mov     rcx, rax
 * 00000001800B5872: call    sub_18007C3DC
 * 00000001800B5877: nop
 * 00000001800B5878: lea     rcx, [rbp+9E40h+var_20F0]
 * 00000001800B587F: call    sub_180010F30
 * 00000001800B5884: nop
 * 00000001800B5885: lea     rcx, [rbp+9E40h+var_2090]
 * 00000001800B588C: call    sub_180010F30
 * 00000001800B5891: nop
 * 00000001800B5892: lea     rcx, dword_1801D9324
 * 00000001800B5899: call    sub_18000C538
 * 00000001800B589E: mov     rax, [rdi+rbx*8]
 * 00000001800B58A2: mov     eax, [r15+rax]
 * 00000001800B58A6: cmp     cs:dword_1801D9328, eax
 * 00000001800B58AC: jle     loc_1800B598D
 * 00000001800B58B2: lea     rcx, dword_1801D9328
 * 00000001800B58B9: call    sub_18000C5A0
 * 00000001800B58BE: cmp     cs:dword_1801D9328, r14d
 * 00000001800B58C5: jnz     loc_1800B598D
 * 00000001800B58CB: call    sub_1800B18CC
 * 00000001800B58D0: mov     qword ptr [rbp+9E40h+var_9AE0], rax
 * 00000001800B58D7: add     rax, 63E4h
 * 00000001800B58DD: mov     qword ptr [rbp+9E40h+var_9AE0+8], rax
 * 00000001800B58E4: movups  xmm7, [rbp+9E40h+var_9AE0]
 * 00000001800B58EB: movups  [rbp+9E40h+var_8530], xmm7
 * 00000001800B58F2: mov     dword ptr [rbp+9E40h+var_8520], 5
 * 00000001800B58FC: mov     dword ptr [rbp+9E40h+var_8520+4], esi
 * 00000001800B5902: movups  xmm6, [rbp+9E40h+var_8520]
 * 00000001800B5909: call    sub_1800B1A0C
 * 00000001800B590E: mov     r8, rax
 * 00000001800B5911: mov     r9d, r12d
 * 00000001800B5914: mov     edx, 0E2h
 * 00000001800B5919: lea     rcx, [rbp+9E40h+var_1F70]; Src
 * 00000001800B5920: call    sub_18007C338
 * 00000001800B5925: nop
 * 00000001800B5926: mov     r8, rax
 * 00000001800B5929: mov     rdx, r13
 * 00000001800B592C: lea     rcx, [rbp+9E40h+var_1FD0]
 * 00000001800B5933: call    sub_18001C6E8
 * 00000001800B5938: nop
 * 00000001800B5939: lea     r8, aPixel; "/Pixel"
 * 00000001800B5940: mov     rdx, rax
 * 00000001800B5943: lea     rcx, [rbp+9E40h+var_61D0]
 * 00000001800B594A: call    sub_18001C61C
 * 00000001800B594F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B5954: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B5959: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B595E: mov     rcx, rax
 * 00000001800B5961: call    sub_18007C3DC
 * 00000001800B5966: nop
 * 00000001800B5967: lea     rcx, [rbp+9E40h+var_1FD0]
 * 00000001800B596E: call    sub_180010F30
 * 00000001800B5973: nop
 * 00000001800B5974: lea     rcx, [rbp+9E40h+var_1F70]
 * 00000001800B597B: call    sub_180010F30
 * 00000001800B5980: nop
 * 00000001800B5981: lea     rcx, dword_1801D9328
 * 00000001800B5988: call    sub_18000C538
 * 00000001800B598D: mov     rax, [rdi+rbx*8]
 * 00000001800B5991: mov     eax, [r15+rax]
 * 00000001800B5995: cmp     cs:dword_1801D932C, eax
 * 00000001800B599B: jle     loc_1800B5A7C
 * 00000001800B59A1: lea     rcx, dword_1801D932C
 * 00000001800B59A8: call    sub_18000C5A0
 * 00000001800B59AD: cmp     cs:dword_1801D932C, r14d
 * 00000001800B59B4: jnz     loc_1800B5A7C
 * 00000001800B59BA: call    sub_1800B190C
 * 00000001800B59BF: mov     qword ptr [rbp+9E40h+var_9AD0], rax
 * 00000001800B59C6: add     rax, 658Ch
 * 00000001800B59CC: mov     qword ptr [rbp+9E40h+var_9AD0+8], rax
 * 00000001800B59D3: movups  xmm7, [rbp+9E40h+var_9AD0]
 * 00000001800B59DA: movups  [rbp+9E40h+var_8510], xmm7
 * 00000001800B59E1: mov     dword ptr [rbp+9E40h+var_8500], 5
 * 00000001800B59EB: mov     dword ptr [rbp+9E40h+var_8500+4], esi
 * 00000001800B59F1: movups  xmm6, [rbp+9E40h+var_8500]
 * 00000001800B59F8: call    sub_1800B1A0C
 * 00000001800B59FD: mov     r8, rax
 * 00000001800B5A00: mov     r9d, r12d
 * 00000001800B5A03: mov     edx, 0E8h
 * 00000001800B5A08: lea     rcx, [rbp+9E40h+var_1E50]; Src
 * 00000001800B5A0F: call    sub_18007C338
 * 00000001800B5A14: nop
 * 00000001800B5A15: mov     r8, rax
 * 00000001800B5A18: mov     rdx, r13
 * 00000001800B5A1B: lea     rcx, [rbp+9E40h+var_1EB0]
 * 00000001800B5A22: call    sub_18001C6E8
 * 00000001800B5A27: nop
 * 00000001800B5A28: lea     r8, aPixel; "/Pixel"
 * 00000001800B5A2F: mov     rdx, rax
 * 00000001800B5A32: lea     rcx, [rbp+9E40h+var_61B0]
 * 00000001800B5A39: call    sub_18001C61C
 * 00000001800B5A3E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B5A43: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B5A48: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B5A4D: mov     rcx, rax
 * 00000001800B5A50: call    sub_18007C3DC
 * 00000001800B5A55: nop
 * 00000001800B5A56: lea     rcx, [rbp+9E40h+var_1EB0]
 * 00000001800B5A5D: call    sub_180010F30
 * 00000001800B5A62: nop
 * 00000001800B5A63: lea     rcx, [rbp+9E40h+var_1E50]
 * 00000001800B5A6A: call    sub_180010F30
 * 00000001800B5A6F: nop
 * 00000001800B5A70: lea     rcx, dword_1801D932C
 * 00000001800B5A77: call    sub_18000C538
 * 00000001800B5A7C: mov     rax, [rdi+rbx*8]
 * 00000001800B5A80: mov     eax, [r15+rax]
 * 00000001800B5A84: cmp     cs:dword_1801D9330, eax
 * 00000001800B5A8A: jle     loc_1800B5B6B
 * 00000001800B5A90: lea     rcx, dword_1801D9330
 * 00000001800B5A97: call    sub_18000C5A0
 * 00000001800B5A9C: cmp     cs:dword_1801D9330, r14d
 * 00000001800B5AA3: jnz     loc_1800B5B6B
 * 00000001800B5AA9: call    sub_1800B190C
 * 00000001800B5AAE: mov     qword ptr [rbp+9E40h+var_9AC0], rax
 * 00000001800B5AB5: add     rax, 658Ch
 * 00000001800B5ABB: mov     qword ptr [rbp+9E40h+var_9AC0+8], rax
 * 00000001800B5AC2: movups  xmm7, [rbp+9E40h+var_9AC0]
 * 00000001800B5AC9: movups  [rbp+9E40h+var_84F0], xmm7
 * 00000001800B5AD0: mov     dword ptr [rbp+9E40h+var_84E0], 5
 * 00000001800B5ADA: mov     dword ptr [rbp+9E40h+var_84E0+4], esi
 * 00000001800B5AE0: movups  xmm6, [rbp+9E40h+var_84E0]
 * 00000001800B5AE7: call    sub_1800B1A0C
 * 00000001800B5AEC: mov     r8, rax
 * 00000001800B5AEF: mov     r9d, r12d
 * 00000001800B5AF2: mov     edx, 0EAh
 * 00000001800B5AF7: lea     rcx, [rbp+9E40h+var_1D30]; Src
 * 00000001800B5AFE: call    sub_18007C338
 * 00000001800B5B03: nop
 * 00000001800B5B04: mov     r8, rax
 * 00000001800B5B07: mov     rdx, r13
 * 00000001800B5B0A: lea     rcx, [rbp+9E40h+var_1D90]
 * 00000001800B5B11: call    sub_18001C6E8
 * 00000001800B5B16: nop
 * 00000001800B5B17: lea     r8, aPixel; "/Pixel"
 * 00000001800B5B1E: mov     rdx, rax
 * 00000001800B5B21: lea     rcx, [rbp+9E40h+var_6190]
 * 00000001800B5B28: call    sub_18001C61C
 * 00000001800B5B2D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B5B32: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B5B37: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B5B3C: mov     rcx, rax
 * 00000001800B5B3F: call    sub_18007C3DC
 * 00000001800B5B44: nop
 * 00000001800B5B45: lea     rcx, [rbp+9E40h+var_1D90]
 * 00000001800B5B4C: call    sub_180010F30
 * 00000001800B5B51: nop
 * 00000001800B5B52: lea     rcx, [rbp+9E40h+var_1D30]
 * 00000001800B5B59: call    sub_180010F30
 * 00000001800B5B5E: nop
 * 00000001800B5B5F: lea     rcx, dword_1801D9330
 * 00000001800B5B66: call    sub_18000C538
 * 00000001800B5B6B: mov     rax, [rdi+rbx*8]
 * 00000001800B5B6F: mov     eax, [r15+rax]
 * 00000001800B5B73: cmp     cs:dword_1801D9334, eax
 * 00000001800B5B79: jle     loc_1800B5C5A
 * 00000001800B5B7F: lea     rcx, dword_1801D9334
 * 00000001800B5B86: call    sub_18000C5A0
 * 00000001800B5B8B: cmp     cs:dword_1801D9334, r14d
 * 00000001800B5B92: jnz     loc_1800B5C5A
 * 00000001800B5B98: call    sub_1800B193C
 * 00000001800B5B9D: mov     qword ptr [rbp+9E40h+var_9AB0], rax
 * 00000001800B5BA4: add     rax, 65B8h
 * 00000001800B5BAA: mov     qword ptr [rbp+9E40h+var_9AB0+8], rax
 * 00000001800B5BB1: movups  xmm7, [rbp+9E40h+var_9AB0]
 * 00000001800B5BB8: movups  [rbp+9E40h+var_84D0], xmm7
 * 00000001800B5BBF: mov     dword ptr [rbp+9E40h+var_84C0], 5
 * 00000001800B5BC9: mov     dword ptr [rbp+9E40h+var_84C0+4], esi
 * 00000001800B5BCF: movups  xmm6, [rbp+9E40h+var_84C0]
 * 00000001800B5BD6: call    sub_1800B1A0C
 * 00000001800B5BDB: mov     r8, rax
 * 00000001800B5BDE: mov     r9d, r12d
 * 00000001800B5BE1: mov     edx, 0F0h
 * 00000001800B5BE6: lea     rcx, [rbp+9E40h+var_1C10]; Src
 * 00000001800B5BED: call    sub_18007C338
 * 00000001800B5BF2: nop
 * 00000001800B5BF3: mov     r8, rax
 * 00000001800B5BF6: mov     rdx, r13
 * 00000001800B5BF9: lea     rcx, [rbp+9E40h+var_1C70]
 * 00000001800B5C00: call    sub_18001C6E8
 * 00000001800B5C05: nop
 * 00000001800B5C06: lea     r8, aPixel; "/Pixel"
 * 00000001800B5C0D: mov     rdx, rax
 * 00000001800B5C10: lea     rcx, [rbp+9E40h+var_6170]
 * 00000001800B5C17: call    sub_18001C61C
 * 00000001800B5C1C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B5C21: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B5C26: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B5C2B: mov     rcx, rax
 * 00000001800B5C2E: call    sub_18007C3DC
 * 00000001800B5C33: nop
 * 00000001800B5C34: lea     rcx, [rbp+9E40h+var_1C70]
 * 00000001800B5C3B: call    sub_180010F30
 * 00000001800B5C40: nop
 * 00000001800B5C41: lea     rcx, [rbp+9E40h+var_1C10]
 * 00000001800B5C48: call    sub_180010F30
 * 00000001800B5C4D: nop
 * 00000001800B5C4E: lea     rcx, dword_1801D9334
 * 00000001800B5C55: call    sub_18000C538
 * 00000001800B5C5A: mov     rax, [rdi+rbx*8]
 * 00000001800B5C5E: mov     eax, [r15+rax]
 * 00000001800B5C62: cmp     cs:dword_1801D9338, eax
 * 00000001800B5C68: jle     loc_1800B5D49
 * 00000001800B5C6E: lea     rcx, dword_1801D9338
 * 00000001800B5C75: call    sub_18000C5A0
 * 00000001800B5C7A: cmp     cs:dword_1801D9338, r14d
 * 00000001800B5C81: jnz     loc_1800B5D49
 * 00000001800B5C87: call    sub_1800B193C
 * 00000001800B5C8C: mov     qword ptr [rbp+9E40h+var_9AA0], rax
 * 00000001800B5C93: add     rax, 65B8h
 * 00000001800B5C99: mov     qword ptr [rbp+9E40h+var_9AA0+8], rax
 * 00000001800B5CA0: movups  xmm7, [rbp+9E40h+var_9AA0]
 * 00000001800B5CA7: movups  [rbp+9E40h+var_84B0], xmm7
 * 00000001800B5CAE: mov     dword ptr [rbp+9E40h+var_84A0], 5
 * 00000001800B5CB8: mov     dword ptr [rbp+9E40h+var_84A0+4], esi
 * 00000001800B5CBE: movups  xmm6, [rbp+9E40h+var_84A0]
 * 00000001800B5CC5: call    sub_1800B1A0C
 * 00000001800B5CCA: mov     r8, rax
 * 00000001800B5CCD: mov     r9d, r12d
 * 00000001800B5CD0: mov     edx, 0F2h
 * 00000001800B5CD5: lea     rcx, [rbp+9E40h+var_1AF0]; Src
 * 00000001800B5CDC: call    sub_18007C338
 * 00000001800B5CE1: nop
 * 00000001800B5CE2: mov     r8, rax
 * 00000001800B5CE5: mov     rdx, r13
 * 00000001800B5CE8: lea     rcx, [rbp+9E40h+var_1B50]
 * 00000001800B5CEF: call    sub_18001C6E8
 * 00000001800B5CF4: nop
 * 00000001800B5CF5: lea     r8, aPixel; "/Pixel"
 * 00000001800B5CFC: mov     rdx, rax
 * 00000001800B5CFF: lea     rcx, [rbp+9E40h+var_6150]
 * 00000001800B5D06: call    sub_18001C61C
 * 00000001800B5D0B: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B5D10: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B5D15: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B5D1A: mov     rcx, rax
 * 00000001800B5D1D: call    sub_18007C3DC
 * 00000001800B5D22: nop
 * 00000001800B5D23: lea     rcx, [rbp+9E40h+var_1B50]
 * 00000001800B5D2A: call    sub_180010F30
 * 00000001800B5D2F: nop
 * 00000001800B5D30: lea     rcx, [rbp+9E40h+var_1AF0]
 * 00000001800B5D37: call    sub_180010F30
 * 00000001800B5D3C: nop
 * 00000001800B5D3D: lea     rcx, dword_1801D9338
 * 00000001800B5D44: call    sub_18000C538
 * 00000001800B5D49: mov     rax, [rdi+rbx*8]
 * 00000001800B5D4D: mov     eax, [r15+rax]
 * 00000001800B5D51: cmp     cs:dword_1801D933C, eax
 * 00000001800B5D57: jle     loc_1800B5E38
 * 00000001800B5D5D: lea     rcx, dword_1801D933C
 * 00000001800B5D64: call    sub_18000C5A0
 * 00000001800B5D69: cmp     cs:dword_1801D933C, r14d
 * 00000001800B5D70: jnz     loc_1800B5E38
 * 00000001800B5D76: call    sub_1800B195C
 * 00000001800B5D7B: mov     qword ptr [rbp+9E40h+var_9A90], rax
 * 00000001800B5D82: add     rax, 678Ch
 * 00000001800B5D88: mov     qword ptr [rbp+9E40h+var_9A90+8], rax
 * 00000001800B5D8F: movups  xmm7, [rbp+9E40h+var_9A90]
 * 00000001800B5D96: movups  [rbp+9E40h+var_8490], xmm7
 * 00000001800B5D9D: mov     dword ptr [rbp+9E40h+var_8480], 5
 * 00000001800B5DA7: mov     dword ptr [rbp+9E40h+var_8480+4], esi
 * 00000001800B5DAD: movups  xmm6, [rbp+9E40h+var_8480]
 * 00000001800B5DB4: call    sub_1800B1A0C
 * 00000001800B5DB9: mov     r8, rax
 * 00000001800B5DBC: mov     r9d, r12d
 * 00000001800B5DBF: mov     edx, 0F8h
 * 00000001800B5DC4: lea     rcx, [rbp+9E40h+var_19D0]; Src
 * 00000001800B5DCB: call    sub_18007C338
 * 00000001800B5DD0: nop
 * 00000001800B5DD1: mov     r8, rax
 * 00000001800B5DD4: mov     rdx, r13
 * 00000001800B5DD7: lea     rcx, [rbp+9E40h+var_1A30]
 * 00000001800B5DDE: call    sub_18001C6E8
 * 00000001800B5DE3: nop
 * 00000001800B5DE4: lea     r8, aPixel; "/Pixel"
 * 00000001800B5DEB: mov     rdx, rax
 * 00000001800B5DEE: lea     rcx, [rbp+9E40h+var_6130]
 * 00000001800B5DF5: call    sub_18001C61C
 * 00000001800B5DFA: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B5DFF: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B5E04: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B5E09: mov     rcx, rax
 * 00000001800B5E0C: call    sub_18007C3DC
 * 00000001800B5E11: nop
 * 00000001800B5E12: lea     rcx, [rbp+9E40h+var_1A30]
 * 00000001800B5E19: call    sub_180010F30
 * 00000001800B5E1E: nop
 * 00000001800B5E1F: lea     rcx, [rbp+9E40h+var_19D0]
 * 00000001800B5E26: call    sub_180010F30
 * 00000001800B5E2B: nop
 * 00000001800B5E2C: lea     rcx, dword_1801D933C
 * 00000001800B5E33: call    sub_18000C538
 * 00000001800B5E38: mov     rax, [rdi+rbx*8]
 * 00000001800B5E3C: mov     eax, [r15+rax]
 * 00000001800B5E40: cmp     cs:dword_1801D9340, eax
 * 00000001800B5E46: jle     loc_1800B5F27
 * 00000001800B5E4C: lea     rcx, dword_1801D9340
 * 00000001800B5E53: call    sub_18000C5A0
 * 00000001800B5E58: cmp     cs:dword_1801D9340, r14d
 * 00000001800B5E5F: jnz     loc_1800B5F27
 * 00000001800B5E65: call    sub_1800B195C
 * 00000001800B5E6A: mov     qword ptr [rbp+9E40h+var_9A80], rax
 * 00000001800B5E71: add     rax, 678Ch
 * 00000001800B5E77: mov     qword ptr [rbp+9E40h+var_9A80+8], rax
 * 00000001800B5E7E: movups  xmm7, [rbp+9E40h+var_9A80]
 * 00000001800B5E85: movups  [rbp+9E40h+var_8470], xmm7
 * 00000001800B5E8C: mov     dword ptr [rbp+9E40h+var_8460], 5
 * 00000001800B5E96: mov     dword ptr [rbp+9E40h+var_8460+4], esi
 * 00000001800B5E9C: movups  xmm6, [rbp+9E40h+var_8460]
 * 00000001800B5EA3: call    sub_1800B1A0C
 * 00000001800B5EA8: mov     r8, rax
 * 00000001800B5EAB: mov     r9d, r12d
 * 00000001800B5EAE: mov     edx, 0FAh
 * 00000001800B5EB3: lea     rcx, [rbp+9E40h+var_18B0]; Src
 * 00000001800B5EBA: call    sub_18007C338
 * 00000001800B5EBF: nop
 * 00000001800B5EC0: mov     r8, rax
 * 00000001800B5EC3: mov     rdx, r13
 * 00000001800B5EC6: lea     rcx, [rbp+9E40h+var_1910]
 * 00000001800B5ECD: call    sub_18001C6E8
 * 00000001800B5ED2: nop
 * 00000001800B5ED3: lea     r8, aPixel; "/Pixel"
 * 00000001800B5EDA: mov     rdx, rax
 * 00000001800B5EDD: lea     rcx, [rbp+9E40h+var_6110]
 * 00000001800B5EE4: call    sub_18001C61C
 * 00000001800B5EE9: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B5EEE: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B5EF3: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B5EF8: mov     rcx, rax
 * 00000001800B5EFB: call    sub_18007C3DC
 * 00000001800B5F00: nop
 * 00000001800B5F01: lea     rcx, [rbp+9E40h+var_1910]
 * 00000001800B5F08: call    sub_180010F30
 * 00000001800B5F0D: nop
 * 00000001800B5F0E: lea     rcx, [rbp+9E40h+var_18B0]
 * 00000001800B5F15: call    sub_180010F30
 * 00000001800B5F1A: nop
 * 00000001800B5F1B: lea     rcx, dword_1801D9340
 * 00000001800B5F22: call    sub_18000C538
 * 00000001800B5F27: mov     rax, [rdi+rbx*8]
 * 00000001800B5F2B: mov     eax, [r15+rax]
 * 00000001800B5F2F: cmp     cs:dword_1801D9344, eax
 * 00000001800B5F35: jle     loc_1800B6016
 * 00000001800B5F3B: lea     rcx, dword_1801D9344
 * 00000001800B5F42: call    sub_18000C5A0
 * 00000001800B5F47: cmp     cs:dword_1801D9344, r14d
 * 00000001800B5F4E: jnz     loc_1800B6016
 * 00000001800B5F54: call    sub_1800B19AC
 * 00000001800B5F59: mov     qword ptr [rbp+9E40h+var_9A70], rax
 * 00000001800B5F60: add     rax, 672Ch
 * 00000001800B5F66: mov     qword ptr [rbp+9E40h+var_9A70+8], rax
 * 00000001800B5F6D: movups  xmm7, [rbp+9E40h+var_9A70]
 * 00000001800B5F74: movups  [rbp+9E40h+var_8450], xmm7
 * 00000001800B5F7B: mov     dword ptr [rbp+9E40h+var_8440], 5
 * 00000001800B5F85: mov     dword ptr [rbp+9E40h+var_8440+4], esi
 * 00000001800B5F8B: movups  xmm6, [rbp+9E40h+var_8440]
 * 00000001800B5F92: call    sub_1800B1A0C
 * 00000001800B5F97: mov     r8, rax
 * 00000001800B5F9A: mov     r9d, r12d
 * 00000001800B5F9D: mov     edx, 100h
 * 00000001800B5FA2: lea     rcx, [rbp+9E40h+var_1790]; Src
 * 00000001800B5FA9: call    sub_18007C338
 * 00000001800B5FAE: nop
 * 00000001800B5FAF: mov     r8, rax
 * 00000001800B5FB2: mov     rdx, r13
 * 00000001800B5FB5: lea     rcx, [rbp+9E40h+var_17F0]
 * 00000001800B5FBC: call    sub_18001C6E8
 * 00000001800B5FC1: nop
 * 00000001800B5FC2: lea     r8, aPixel; "/Pixel"
 * 00000001800B5FC9: mov     rdx, rax
 * 00000001800B5FCC: lea     rcx, [rbp+9E40h+var_60F0]
 * 00000001800B5FD3: call    sub_18001C61C
 * 00000001800B5FD8: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B5FDD: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B5FE2: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B5FE7: mov     rcx, rax
 * 00000001800B5FEA: call    sub_18007C3DC
 * 00000001800B5FEF: nop
 * 00000001800B5FF0: lea     rcx, [rbp+9E40h+var_17F0]
 * 00000001800B5FF7: call    sub_180010F30
 * 00000001800B5FFC: nop
 * 00000001800B5FFD: lea     rcx, [rbp+9E40h+var_1790]
 * 00000001800B6004: call    sub_180010F30
 * 00000001800B6009: nop
 * 00000001800B600A: lea     rcx, dword_1801D9344
 * 00000001800B6011: call    sub_18000C538
 * 00000001800B6016: mov     rax, [rdi+rbx*8]
 * 00000001800B601A: mov     eax, [r15+rax]
 * 00000001800B601E: cmp     cs:dword_1801D9348, eax
 * 00000001800B6024: jle     loc_1800B6105
 * 00000001800B602A: lea     rcx, dword_1801D9348
 * 00000001800B6031: call    sub_18000C5A0
 * 00000001800B6036: cmp     cs:dword_1801D9348, r14d
 * 00000001800B603D: jnz     loc_1800B6105
 * 00000001800B6043: call    sub_1800B19AC
 * 00000001800B6048: mov     qword ptr [rbp+9E40h+var_9A60], rax
 * 00000001800B604F: add     rax, 672Ch
 * 00000001800B6055: mov     qword ptr [rbp+9E40h+var_9A60+8], rax
 * 00000001800B605C: movups  xmm7, [rbp+9E40h+var_9A60]
 * 00000001800B6063: movups  [rbp+9E40h+var_8430], xmm7
 * 00000001800B606A: mov     dword ptr [rbp+9E40h+var_8420], 5
 * 00000001800B6074: mov     dword ptr [rbp+9E40h+var_8420+4], esi
 * 00000001800B607A: movups  xmm6, [rbp+9E40h+var_8420]
 * 00000001800B6081: call    sub_1800B1A0C
 * 00000001800B6086: mov     r8, rax
 * 00000001800B6089: mov     r9d, r12d
 * 00000001800B608C: mov     edx, 102h
 * 00000001800B6091: lea     rcx, [rbp+9E40h+var_1610]; Src
 * 00000001800B6098: call    sub_18007C338
 * 00000001800B609D: nop
 * 00000001800B609E: mov     r8, rax
 * 00000001800B60A1: mov     rdx, r13
 * 00000001800B60A4: lea     rcx, [rbp+9E40h+var_16D0]
 * 00000001800B60AB: call    sub_18001C6E8
 * 00000001800B60B0: nop
 * 00000001800B60B1: lea     r8, aPixel; "/Pixel"
 * 00000001800B60B8: mov     rdx, rax
 * 00000001800B60BB: lea     rcx, [rbp+9E40h+var_60D0]
 * 00000001800B60C2: call    sub_18001C61C
 * 00000001800B60C7: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B60CC: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B60D1: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B60D6: mov     rcx, rax
 * 00000001800B60D9: call    sub_18007C3DC
 * 00000001800B60DE: nop
 * 00000001800B60DF: lea     rcx, [rbp+9E40h+var_16D0]
 * 00000001800B60E6: call    sub_180010F30
 * 00000001800B60EB: nop
 * 00000001800B60EC: lea     rcx, [rbp+9E40h+var_1610]
 * 00000001800B60F3: call    sub_180010F30
 * 00000001800B60F8: nop
 * 00000001800B60F9: lea     rcx, dword_1801D9348
 * 00000001800B6100: call    sub_18000C538
 * 00000001800B6105: mov     rax, [rdi+rbx*8]
 * 00000001800B6109: mov     eax, [r15+rax]
 * 00000001800B610D: cmp     cs:dword_1801D934C, eax
 * 00000001800B6113: jle     loc_1800B61F4
 * 00000001800B6119: lea     rcx, dword_1801D934C
 * 00000001800B6120: call    sub_18000C5A0
 * 00000001800B6125: cmp     cs:dword_1801D934C, r14d
 * 00000001800B612C: jnz     loc_1800B61F4
 * 00000001800B6132: call    sub_1800B19BC
 * 00000001800B6137: mov     qword ptr [rbp+9E40h+var_9A50], rax
 * 00000001800B613E: add     rax, 34E0h
 * 00000001800B6144: mov     qword ptr [rbp+9E40h+var_9A50+8], rax
 * 00000001800B614B: movups  xmm7, [rbp+9E40h+var_9A50]
 * 00000001800B6152: movups  [rbp+9E40h+var_8410], xmm7
 * 00000001800B6159: mov     dword ptr [rbp+9E40h+var_8400], 5
 * 00000001800B6163: mov     dword ptr [rbp+9E40h+var_8400+4], esi
 * 00000001800B6169: movups  xmm6, [rbp+9E40h+var_8400]
 * 00000001800B6170: call    sub_1800B1A0C
 * 00000001800B6175: mov     r8, rax
 * 00000001800B6178: mov     r9d, r12d
 * 00000001800B617B: mov     edx, 104h
 * 00000001800B6180: lea     rcx, [rbp+9E40h+var_14F0]; Src
 * 00000001800B6187: call    sub_18007C338
 * 00000001800B618C: nop
 * 00000001800B618D: mov     r8, rax
 * 00000001800B6190: mov     rdx, r13
 * 00000001800B6193: lea     rcx, [rbp+9E40h+var_1550]
 * 00000001800B619A: call    sub_18001C6E8
 * 00000001800B619F: nop
 * 00000001800B61A0: lea     r8, aPixel; "/Pixel"
 * 00000001800B61A7: mov     rdx, rax
 * 00000001800B61AA: lea     rcx, [rbp+9E40h+var_60B0]
 * 00000001800B61B1: call    sub_18001C61C
 * 00000001800B61B6: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B61BB: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B61C0: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B61C5: mov     rcx, rax
 * 00000001800B61C8: call    sub_18007C3DC
 * 00000001800B61CD: nop
 * 00000001800B61CE: lea     rcx, [rbp+9E40h+var_1550]
 * 00000001800B61D5: call    sub_180010F30
 * 00000001800B61DA: nop
 * 00000001800B61DB: lea     rcx, [rbp+9E40h+var_14F0]
 * 00000001800B61E2: call    sub_180010F30
 * 00000001800B61E7: nop
 * 00000001800B61E8: lea     rcx, dword_1801D934C
 * 00000001800B61EF: call    sub_18000C538
 * 00000001800B61F4: mov     rax, [rdi+rbx*8]
 * 00000001800B61F8: mov     eax, [r15+rax]
 * 00000001800B61FC: cmp     cs:dword_1801D9350, eax
 * 00000001800B6202: jle     loc_1800B62E3
 * 00000001800B6208: lea     rcx, dword_1801D9350
 * 00000001800B620F: call    sub_18000C5A0
 * 00000001800B6214: cmp     cs:dword_1801D9350, r14d
 * 00000001800B621B: jnz     loc_1800B62E3
 * 00000001800B6221: call    sub_1800B19BC
 * 00000001800B6226: mov     qword ptr [rbp+9E40h+var_9A40], rax
 * 00000001800B622D: add     rax, 34E0h
 * 00000001800B6233: mov     qword ptr [rbp+9E40h+var_9A40+8], rax
 * 00000001800B623A: movups  xmm7, [rbp+9E40h+var_9A40]
 * 00000001800B6241: movups  [rbp+9E40h+var_83F0], xmm7
 * 00000001800B6248: mov     dword ptr [rbp+9E40h+var_83E0], 5
 * 00000001800B6252: mov     dword ptr [rbp+9E40h+var_83E0+4], esi
 * 00000001800B6258: movups  xmm6, [rbp+9E40h+var_83E0]
 * 00000001800B625F: call    sub_1800B1A0C
 * 00000001800B6264: mov     r8, rax
 * 00000001800B6267: mov     r9d, r12d
 * 00000001800B626A: mov     edx, 106h
 * 00000001800B626F: lea     rcx, [rbp+9E40h+var_13D0]; Src
 * 00000001800B6276: call    sub_18007C338
 * 00000001800B627B: nop
 * 00000001800B627C: mov     r8, rax
 * 00000001800B627F: mov     rdx, r13
 * 00000001800B6282: lea     rcx, [rbp+9E40h+var_1430]
 * 00000001800B6289: call    sub_18001C6E8
 * 00000001800B628E: nop
 * 00000001800B628F: lea     r8, aPixel; "/Pixel"
 * 00000001800B6296: mov     rdx, rax
 * 00000001800B6299: lea     rcx, [rbp+9E40h+var_6090]
 * 00000001800B62A0: call    sub_18001C61C
 * 00000001800B62A5: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B62AA: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B62AF: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B62B4: mov     rcx, rax
 * 00000001800B62B7: call    sub_18007C3DC
 * 00000001800B62BC: nop
 * 00000001800B62BD: lea     rcx, [rbp+9E40h+var_1430]
 * 00000001800B62C4: call    sub_180010F30
 * 00000001800B62C9: nop
 * 00000001800B62CA: lea     rcx, [rbp+9E40h+var_13D0]
 * 00000001800B62D1: call    sub_180010F30
 * 00000001800B62D6: nop
 * 00000001800B62D7: lea     rcx, dword_1801D9350
 * 00000001800B62DE: call    sub_18000C538
 * 00000001800B62E3: mov     rax, [rdi+rbx*8]
 * 00000001800B62E7: mov     eax, [r15+rax]
 * 00000001800B62EB: cmp     cs:dword_1801D9354, eax
 * 00000001800B62F1: jle     loc_1800B63D2
 * 00000001800B62F7: lea     rcx, dword_1801D9354
 * 00000001800B62FE: call    sub_18000C5A0
 * 00000001800B6303: cmp     cs:dword_1801D9354, r14d
 * 00000001800B630A: jnz     loc_1800B63D2
 * 00000001800B6310: call    sub_1800B19CC
 * 00000001800B6315: mov     qword ptr [rbp+9E40h+var_9A30], rax
 * 00000001800B631C: add     rax, 68BCh
 * 00000001800B6322: mov     qword ptr [rbp+9E40h+var_9A30+8], rax
 * 00000001800B6329: movups  xmm7, [rbp+9E40h+var_9A30]
 * 00000001800B6330: movups  [rbp+9E40h+var_83D0], xmm7
 * 00000001800B6337: mov     dword ptr [rbp+9E40h+var_83C0], 5
 * 00000001800B6341: mov     dword ptr [rbp+9E40h+var_83C0+4], esi
 * 00000001800B6347: movups  xmm6, [rbp+9E40h+var_83C0]
 * 00000001800B634E: call    sub_1800B1A0C
 * 00000001800B6353: mov     r8, rax
 * 00000001800B6356: mov     r9d, r12d
 * 00000001800B6359: mov     edx, 108h
 * 00000001800B635E: lea     rcx, [rbp+9E40h+var_12B0]; Src
 * 00000001800B6365: call    sub_18007C338
 * 00000001800B636A: nop
 * 00000001800B636B: mov     r8, rax
 * 00000001800B636E: mov     rdx, r13
 * 00000001800B6371: lea     rcx, [rbp+9E40h+var_1310]
 * 00000001800B6378: call    sub_18001C6E8
 * 00000001800B637D: nop
 * 00000001800B637E: lea     r8, aPixel; "/Pixel"
 * 00000001800B6385: mov     rdx, rax
 * 00000001800B6388: lea     rcx, [rbp+9E40h+var_6070]
 * 00000001800B638F: call    sub_18001C61C
 * 00000001800B6394: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B6399: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B639E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B63A3: mov     rcx, rax
 * 00000001800B63A6: call    sub_18007C3DC
 * 00000001800B63AB: nop
 * 00000001800B63AC: lea     rcx, [rbp+9E40h+var_1310]
 * 00000001800B63B3: call    sub_180010F30
 * 00000001800B63B8: nop
 * 00000001800B63B9: lea     rcx, [rbp+9E40h+var_12B0]
 * 00000001800B63C0: call    sub_180010F30
 * 00000001800B63C5: nop
 * 00000001800B63C6: lea     rcx, dword_1801D9354
 * 00000001800B63CD: call    sub_18000C538
 * 00000001800B63D2: mov     rax, [rdi+rbx*8]
 * 00000001800B63D6: mov     eax, [r15+rax]
 * 00000001800B63DA: cmp     cs:dword_1801D9358, eax
 * 00000001800B63E0: jle     loc_1800B64C1
 * 00000001800B63E6: lea     rcx, dword_1801D9358
 * 00000001800B63ED: call    sub_18000C5A0
 * 00000001800B63F2: cmp     cs:dword_1801D9358, r14d
 * 00000001800B63F9: jnz     loc_1800B64C1
 * 00000001800B63FF: call    sub_1800B19CC
 * 00000001800B6404: mov     qword ptr [rbp+9E40h+var_9A20], rax
 * 00000001800B640B: add     rax, 68BCh
 * 00000001800B6411: mov     qword ptr [rbp+9E40h+var_9A20+8], rax
 * 00000001800B6418: movups  xmm7, [rbp+9E40h+var_9A20]
 * 00000001800B641F: movups  [rbp+9E40h+var_83B0], xmm7
 * 00000001800B6426: mov     dword ptr [rbp+9E40h+var_83A0], 5
 * 00000001800B6430: mov     dword ptr [rbp+9E40h+var_83A0+4], esi
 * 00000001800B6436: movups  xmm6, [rbp+9E40h+var_83A0]
 * 00000001800B643D: call    sub_1800B1A0C
 * 00000001800B6442: mov     r8, rax
 * 00000001800B6445: mov     r9d, r12d
 * 00000001800B6448: mov     edx, 10Ah
 * 00000001800B644D: lea     rcx, [rbp+9E40h+var_1190]; Src
 * 00000001800B6454: call    sub_18007C338
 * 00000001800B6459: nop
 * 00000001800B645A: mov     r8, rax
 * 00000001800B645D: mov     rdx, r13
 * 00000001800B6460: lea     rcx, [rbp+9E40h+var_11F0]
 * 00000001800B6467: call    sub_18001C6E8
 * 00000001800B646C: nop
 * 00000001800B646D: lea     r8, aPixel; "/Pixel"
 * 00000001800B6474: mov     rdx, rax
 * 00000001800B6477: lea     rcx, [rbp+9E40h+var_6050]
 * 00000001800B647E: call    sub_18001C61C
 * 00000001800B6483: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B6488: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B648D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B6492: mov     rcx, rax
 * 00000001800B6495: call    sub_18007C3DC
 * 00000001800B649A: nop
 * 00000001800B649B: lea     rcx, [rbp+9E40h+var_11F0]
 * 00000001800B64A2: call    sub_180010F30
 * 00000001800B64A7: nop
 * 00000001800B64A8: lea     rcx, [rbp+9E40h+var_1190]
 * 00000001800B64AF: call    sub_180010F30
 * 00000001800B64B4: nop
 * 00000001800B64B5: lea     rcx, dword_1801D9358
 * 00000001800B64BC: call    sub_18000C538
 * 00000001800B64C1: mov     rax, [rdi+rbx*8]
 * 00000001800B64C5: mov     eax, [r15+rax]
 * 00000001800B64C9: cmp     cs:dword_1801D935C, eax
 * 00000001800B64CF: jle     loc_1800B65B0
 * 00000001800B64D5: lea     rcx, dword_1801D935C
 * 00000001800B64DC: call    sub_18000C5A0
 * 00000001800B64E1: cmp     cs:dword_1801D935C, r14d
 * 00000001800B64E8: jnz     loc_1800B65B0
 * 00000001800B64EE: call    sub_1800B19DC
 * 00000001800B64F3: mov     qword ptr [rbp+9E40h+var_9A10], rax
 * 00000001800B64FA: add     rax, 6908h
 * 00000001800B6500: mov     qword ptr [rbp+9E40h+var_9A10+8], rax
 * 00000001800B6507: movups  xmm7, [rbp+9E40h+var_9A10]
 * 00000001800B650E: movups  [rbp+9E40h+var_8390], xmm7
 * 00000001800B6515: mov     dword ptr [rbp+9E40h+var_8380], 5
 * 00000001800B651F: mov     dword ptr [rbp+9E40h+var_8380+4], esi
 * 00000001800B6525: movups  xmm6, [rbp+9E40h+var_8380]
 * 00000001800B652C: call    sub_1800B1A0C
 * 00000001800B6531: mov     r8, rax
 * 00000001800B6534: mov     r9d, r12d
 * 00000001800B6537: mov     edx, 110h
 * 00000001800B653C: lea     rcx, [rbp+9E40h+var_1070]; Src
 * 00000001800B6543: call    sub_18007C338
 * 00000001800B6548: nop
 * 00000001800B6549: mov     r8, rax
 * 00000001800B654C: mov     rdx, r13
 * 00000001800B654F: lea     rcx, [rbp+9E40h+var_10D0]
 * 00000001800B6556: call    sub_18001C6E8
 * 00000001800B655B: nop
 * 00000001800B655C: lea     r8, aPixel; "/Pixel"
 * 00000001800B6563: mov     rdx, rax
 * 00000001800B6566: lea     rcx, [rbp+9E40h+var_6030]
 * 00000001800B656D: call    sub_18001C61C
 * 00000001800B6572: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B6577: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B657C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B6581: mov     rcx, rax
 * 00000001800B6584: call    sub_18007C3DC
 * 00000001800B6589: nop
 * 00000001800B658A: lea     rcx, [rbp+9E40h+var_10D0]
 * 00000001800B6591: call    sub_180010F30
 * 00000001800B6596: nop
 * 00000001800B6597: lea     rcx, [rbp+9E40h+var_1070]
 * 00000001800B659E: call    sub_180010F30
 * 00000001800B65A3: nop
 * 00000001800B65A4: lea     rcx, dword_1801D935C
 * 00000001800B65AB: call    sub_18000C538
 * 00000001800B65B0: mov     rax, [rdi+rbx*8]
 * 00000001800B65B4: mov     eax, [r15+rax]
 * 00000001800B65B8: cmp     cs:dword_1801D9360, eax
 * 00000001800B65BE: jle     loc_1800B669F
 * 00000001800B65C4: lea     rcx, dword_1801D9360
 * 00000001800B65CB: call    sub_18000C5A0
 * 00000001800B65D0: cmp     cs:dword_1801D9360, r14d
 * 00000001800B65D7: jnz     loc_1800B669F
 * 00000001800B65DD: call    sub_1800B19DC
 * 00000001800B65E2: mov     qword ptr [rbp+9E40h+var_9A00], rax
 * 00000001800B65E9: add     rax, 6908h
 * 00000001800B65EF: mov     qword ptr [rbp+9E40h+var_9A00+8], rax
 * 00000001800B65F6: movups  xmm7, [rbp+9E40h+var_9A00]
 * 00000001800B65FD: movups  [rbp+9E40h+var_8370], xmm7
 * 00000001800B6604: mov     dword ptr [rbp+9E40h+var_8360], 5
 * 00000001800B660E: mov     dword ptr [rbp+9E40h+var_8360+4], esi
 * 00000001800B6614: movups  xmm6, [rbp+9E40h+var_8360]
 * 00000001800B661B: call    sub_1800B1A0C
 * 00000001800B6620: mov     r8, rax
 * 00000001800B6623: mov     r9d, r12d
 * 00000001800B6626: mov     edx, 112h
 * 00000001800B662B: lea     rcx, [rbp+9E40h+var_F50]; Src
 * 00000001800B6632: call    sub_18007C338
 * 00000001800B6637: nop
 * 00000001800B6638: mov     r8, rax
 * 00000001800B663B: mov     rdx, r13
 * 00000001800B663E: lea     rcx, [rbp+9E40h+var_FB0]
 * 00000001800B6645: call    sub_18001C6E8
 * 00000001800B664A: nop
 * 00000001800B664B: lea     r8, aPixel; "/Pixel"
 * 00000001800B6652: mov     rdx, rax
 * 00000001800B6655: lea     rcx, [rbp+9E40h+var_6010]
 * 00000001800B665C: call    sub_18001C61C
 * 00000001800B6661: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B6666: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B666B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B6670: mov     rcx, rax
 * 00000001800B6673: call    sub_18007C3DC
 * 00000001800B6678: nop
 * 00000001800B6679: lea     rcx, [rbp+9E40h+var_FB0]
 * 00000001800B6680: call    sub_180010F30
 * 00000001800B6685: nop
 * 00000001800B6686: lea     rcx, [rbp+9E40h+var_F50]
 * 00000001800B668D: call    sub_180010F30
 * 00000001800B6692: nop
 * 00000001800B6693: lea     rcx, dword_1801D9360
 * 00000001800B669A: call    sub_18000C538
 * 00000001800B669F: mov     rax, [rdi+rbx*8]
 * 00000001800B66A3: mov     eax, [r15+rax]
 * 00000001800B66A7: cmp     cs:dword_1801D9364, eax
 * 00000001800B66AD: jle     loc_1800B678E
 * 00000001800B66B3: lea     rcx, dword_1801D9364
 * 00000001800B66BA: call    sub_18000C5A0
 * 00000001800B66BF: cmp     cs:dword_1801D9364, r14d
 * 00000001800B66C6: jnz     loc_1800B678E
 * 00000001800B66CC: call    sub_1800B19EC
 * 00000001800B66D1: mov     qword ptr [rbp+9E40h+var_99F0], rax
 * 00000001800B66D8: add     rax, 361Ch
 * 00000001800B66DE: mov     qword ptr [rbp+9E40h+var_99F0+8], rax
 * 00000001800B66E5: movups  xmm7, [rbp+9E40h+var_99F0]
 * 00000001800B66EC: movups  [rbp+9E40h+var_8350], xmm7
 * 00000001800B66F3: mov     dword ptr [rbp+9E40h+var_8340], 5
 * 00000001800B66FD: mov     dword ptr [rbp+9E40h+var_8340+4], esi
 * 00000001800B6703: movups  xmm6, [rbp+9E40h+var_8340]
 * 00000001800B670A: call    sub_1800B1A0C
 * 00000001800B670F: mov     r8, rax
 * 00000001800B6712: mov     r9d, r12d
 * 00000001800B6715: mov     edx, 114h
 * 00000001800B671A: lea     rcx, [rbp+9E40h+var_E30]; Src
 * 00000001800B6721: call    sub_18007C338
 * 00000001800B6726: nop
 * 00000001800B6727: mov     r8, rax
 * 00000001800B672A: mov     rdx, r13
 * 00000001800B672D: lea     rcx, [rbp+9E40h+var_E90]
 * 00000001800B6734: call    sub_18001C6E8
 * 00000001800B6739: nop
 * 00000001800B673A: lea     r8, aPixel; "/Pixel"
 * 00000001800B6741: mov     rdx, rax
 * 00000001800B6744: lea     rcx, [rbp+9E40h+var_5FF0]
 * 00000001800B674B: call    sub_18001C61C
 * 00000001800B6750: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B6755: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B675A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B675F: mov     rcx, rax
 * 00000001800B6762: call    sub_18007C3DC
 * 00000001800B6767: nop
 * 00000001800B6768: lea     rcx, [rbp+9E40h+var_E90]
 * 00000001800B676F: call    sub_180010F30
 * 00000001800B6774: nop
 * 00000001800B6775: lea     rcx, [rbp+9E40h+var_E30]
 * 00000001800B677C: call    sub_180010F30
 * 00000001800B6781: nop
 * 00000001800B6782: lea     rcx, dword_1801D9364
 * 00000001800B6789: call    sub_18000C538
 * 00000001800B678E: mov     rax, [rdi+rbx*8]
 * 00000001800B6792: mov     eax, [r15+rax]
 * 00000001800B6796: cmp     cs:dword_1801D9368, eax
 * 00000001800B679C: jle     loc_1800B687D
 * 00000001800B67A2: lea     rcx, dword_1801D9368
 * 00000001800B67A9: call    sub_18000C5A0
 * 00000001800B67AE: cmp     cs:dword_1801D9368, r14d
 * 00000001800B67B5: jnz     loc_1800B687D
 * 00000001800B67BB: call    sub_1800B19EC
 * 00000001800B67C0: mov     qword ptr [rbp+9E40h+var_99E0], rax
 * 00000001800B67C7: add     rax, 361Ch
 * 00000001800B67CD: mov     qword ptr [rbp+9E40h+var_99E0+8], rax
 * 00000001800B67D4: movups  xmm7, [rbp+9E40h+var_99E0]
 * 00000001800B67DB: movups  [rbp+9E40h+var_8330], xmm7
 * 00000001800B67E2: mov     dword ptr [rbp+9E40h+var_8320], 5
 * 00000001800B67EC: mov     dword ptr [rbp+9E40h+var_8320+4], esi
 * 00000001800B67F2: movups  xmm6, [rbp+9E40h+var_8320]
 * 00000001800B67F9: call    sub_1800B1A0C
 * 00000001800B67FE: mov     r8, rax
 * 00000001800B6801: mov     r9d, r12d
 * 00000001800B6804: mov     edx, 116h
 * 00000001800B6809: lea     rcx, [rbp+9E40h+var_D10]; Src
 * 00000001800B6810: call    sub_18007C338
 * 00000001800B6815: nop
 * 00000001800B6816: mov     r8, rax
 * 00000001800B6819: mov     rdx, r13
 * 00000001800B681C: lea     rcx, [rbp+9E40h+var_D70]
 * 00000001800B6823: call    sub_18001C6E8
 * 00000001800B6828: nop
 * 00000001800B6829: lea     r8, aPixel; "/Pixel"
 * 00000001800B6830: mov     rdx, rax
 * 00000001800B6833: lea     rcx, [rbp+9E40h+var_5FD0]
 * 00000001800B683A: call    sub_18001C61C
 * 00000001800B683F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B6844: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B6849: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B684E: mov     rcx, rax
 * 00000001800B6851: call    sub_18007C3DC
 * 00000001800B6856: nop
 * 00000001800B6857: lea     rcx, [rbp+9E40h+var_D70]
 * 00000001800B685E: call    sub_180010F30
 * 00000001800B6863: nop
 * 00000001800B6864: lea     rcx, [rbp+9E40h+var_D10]
 * 00000001800B686B: call    sub_180010F30
 * 00000001800B6870: nop
 * 00000001800B6871: lea     rcx, dword_1801D9368
 * 00000001800B6878: call    sub_18000C538
 * 00000001800B687D: mov     rax, [rdi+rbx*8]
 * 00000001800B6881: mov     eax, [r15+rax]
 * 00000001800B6885: cmp     cs:dword_1801D936C, eax
 * 00000001800B688B: jle     loc_1800B696C
 * 00000001800B6891: lea     rcx, dword_1801D936C
 * 00000001800B6898: call    sub_18000C5A0
 * 00000001800B689D: cmp     cs:dword_1801D936C, r14d
 * 00000001800B68A4: jnz     loc_1800B696C
 * 00000001800B68AA: call    sub_1800B19FC
 * 00000001800B68AF: mov     qword ptr [rbp+9E40h+var_99D0], rax
 * 00000001800B68B6: add     rax, 6ABCh
 * 00000001800B68BC: mov     qword ptr [rbp+9E40h+var_99D0+8], rax
 * 00000001800B68C3: movups  xmm7, [rbp+9E40h+var_99D0]
 * 00000001800B68CA: movups  [rbp+9E40h+var_8310], xmm7
 * 00000001800B68D1: mov     dword ptr [rbp+9E40h+var_8300], 5
 * 00000001800B68DB: mov     dword ptr [rbp+9E40h+var_8300+4], esi
 * 00000001800B68E1: movups  xmm6, [rbp+9E40h+var_8300]
 * 00000001800B68E8: call    sub_1800B1A0C
 * 00000001800B68ED: mov     r8, rax
 * 00000001800B68F0: mov     r9d, r12d
 * 00000001800B68F3: mov     edx, 118h
 * 00000001800B68F8: lea     rcx, [rbp+9E40h+var_BF0]; Src
 * 00000001800B68FF: call    sub_18007C338
 * 00000001800B6904: nop
 * 00000001800B6905: mov     r8, rax
 * 00000001800B6908: mov     rdx, r13
 * 00000001800B690B: lea     rcx, [rbp+9E40h+var_C50]
 * 00000001800B6912: call    sub_18001C6E8
 * 00000001800B6917: nop
 * 00000001800B6918: lea     r8, aPixel; "/Pixel"
 * 00000001800B691F: mov     rdx, rax
 * 00000001800B6922: lea     rcx, [rbp+9E40h+var_5FB0]
 * 00000001800B6929: call    sub_18001C61C
 * 00000001800B692E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B6933: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B6938: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B693D: mov     rcx, rax
 * 00000001800B6940: call    sub_18007C3DC
 * 00000001800B6945: nop
 * 00000001800B6946: lea     rcx, [rbp+9E40h+var_C50]
 * 00000001800B694D: call    sub_180010F30
 * 00000001800B6952: nop
 * 00000001800B6953: lea     rcx, [rbp+9E40h+var_BF0]
 * 00000001800B695A: call    sub_180010F30
 * 00000001800B695F: nop
 * 00000001800B6960: lea     rcx, dword_1801D936C
 * 00000001800B6967: call    sub_18000C538
 * 00000001800B696C: mov     rax, [rdi+rbx*8]
 * 00000001800B6970: mov     eax, [r15+rax]
 * 00000001800B6974: cmp     cs:dword_1801D9370, eax
 * 00000001800B697A: jle     loc_1800B6A5B
 * 00000001800B6980: lea     rcx, dword_1801D9370
 * 00000001800B6987: call    sub_18000C5A0
 * 00000001800B698C: cmp     cs:dword_1801D9370, r14d
 * 00000001800B6993: jnz     loc_1800B6A5B
 * 00000001800B6999: call    sub_1800B19FC
 * 00000001800B699E: mov     qword ptr [rbp+9E40h+var_99C0], rax
 * 00000001800B69A5: add     rax, 6ABCh
 * 00000001800B69AB: mov     qword ptr [rbp+9E40h+var_99C0+8], rax
 * 00000001800B69B2: movups  xmm7, [rbp+9E40h+var_99C0]
 * 00000001800B69B9: movups  [rbp+9E40h+var_82F0], xmm7
 * 00000001800B69C0: mov     dword ptr [rbp+9E40h+var_82E0], 5
 * 00000001800B69CA: mov     dword ptr [rbp+9E40h+var_82E0+4], esi
 * 00000001800B69D0: movups  xmm6, [rbp+9E40h+var_82E0]
 * 00000001800B69D7: call    sub_1800B1A0C
 * 00000001800B69DC: mov     r8, rax
 * 00000001800B69DF: mov     r9d, r12d
 * 00000001800B69E2: mov     edx, 11Ah
 * 00000001800B69E7: lea     rcx, [rbp+9E40h+var_AD0]; Src
 * 00000001800B69EE: call    sub_18007C338
 * 00000001800B69F3: nop
 * 00000001800B69F4: mov     r8, rax
 * 00000001800B69F7: mov     rdx, r13
 * 00000001800B69FA: lea     rcx, [rbp+9E40h+var_B30]
 * 00000001800B6A01: call    sub_18001C6E8
 * 00000001800B6A06: nop
 * 00000001800B6A07: lea     r8, aPixel; "/Pixel"
 * 00000001800B6A0E: mov     rdx, rax
 * 00000001800B6A11: lea     rcx, [rbp+9E40h+var_5F90]
 * 00000001800B6A18: call    sub_18001C61C
 * 00000001800B6A1D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B6A22: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B6A27: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B6A2C: mov     rcx, rax
 * 00000001800B6A2F: call    sub_18007C3DC
 * 00000001800B6A34: nop
 * 00000001800B6A35: lea     rcx, [rbp+9E40h+var_B30]
 * 00000001800B6A3C: call    sub_180010F30
 * 00000001800B6A41: nop
 * 00000001800B6A42: lea     rcx, [rbp+9E40h+var_AD0]
 * 00000001800B6A49: call    sub_180010F30
 * 00000001800B6A4E: nop
 * 00000001800B6A4F: lea     rcx, dword_1801D9370
 * 00000001800B6A56: call    sub_18000C538
 * 00000001800B6A5B: mov     rax, [rdi+rbx*8]
 * 00000001800B6A5F: mov     eax, [r15+rax]
 * 00000001800B6A63: cmp     cs:dword_1801D9374, eax
 * 00000001800B6A69: jle     loc_1800B6B4A
 * 00000001800B6A6F: lea     rcx, dword_1801D9374
 * 00000001800B6A76: call    sub_18000C5A0
 * 00000001800B6A7B: cmp     cs:dword_1801D9374, r14d
 * 00000001800B6A82: jnz     loc_1800B6B4A
 * 00000001800B6A88: call    sub_1800B19AC
 * 00000001800B6A8D: mov     qword ptr [rbp+9E40h+var_99B0], rax
 * 00000001800B6A94: add     rax, 672Ch
 * 00000001800B6A9A: mov     qword ptr [rbp+9E40h+var_99B0+8], rax
 * 00000001800B6AA1: movups  xmm7, [rbp+9E40h+var_99B0]
 * 00000001800B6AA8: movups  [rbp+9E40h+var_82D0], xmm7
 * 00000001800B6AAF: mov     dword ptr [rbp+9E40h+var_82C0], 5
 * 00000001800B6AB9: mov     dword ptr [rbp+9E40h+var_82C0+4], esi
 * 00000001800B6ABF: movups  xmm6, [rbp+9E40h+var_82C0]
 * 00000001800B6AC6: call    sub_1800B1A0C
 * 00000001800B6ACB: mov     r8, rax
 * 00000001800B6ACE: mov     r9d, r12d
 * 00000001800B6AD1: mov     edx, 120h
 * 00000001800B6AD6: lea     rcx, [rbp+9E40h+var_9B0]; Src
 * 00000001800B6ADD: call    sub_18007C338
 * 00000001800B6AE2: nop
 * 00000001800B6AE3: mov     r8, rax
 * 00000001800B6AE6: mov     rdx, r13
 * 00000001800B6AE9: lea     rcx, [rbp+9E40h+var_A10]
 * 00000001800B6AF0: call    sub_18001C6E8
 * 00000001800B6AF5: nop
 * 00000001800B6AF6: lea     r8, aPixel; "/Pixel"
 * 00000001800B6AFD: mov     rdx, rax
 * 00000001800B6B00: lea     rcx, [rbp+9E40h+var_5F70]
 * 00000001800B6B07: call    sub_18001C61C
 * 00000001800B6B0C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B6B11: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B6B16: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B6B1B: mov     rcx, rax
 * 00000001800B6B1E: call    sub_18007C3DC
 * 00000001800B6B23: nop
 * 00000001800B6B24: lea     rcx, [rbp+9E40h+var_A10]
 * 00000001800B6B2B: call    sub_180010F30
 * 00000001800B6B30: nop
 * 00000001800B6B31: lea     rcx, [rbp+9E40h+var_9B0]
 * 00000001800B6B38: call    sub_180010F30
 * 00000001800B6B3D: nop
 * 00000001800B6B3E: lea     rcx, dword_1801D9374
 * 00000001800B6B45: call    sub_18000C538
 * 00000001800B6B4A: mov     rax, [rdi+rbx*8]
 * 00000001800B6B4E: mov     eax, [r15+rax]
 * 00000001800B6B52: cmp     cs:dword_1801D9378, eax
 * 00000001800B6B58: jle     loc_1800B6C39
 * 00000001800B6B5E: lea     rcx, dword_1801D9378
 * 00000001800B6B65: call    sub_18000C5A0
 * 00000001800B6B6A: cmp     cs:dword_1801D9378, r14d
 * 00000001800B6B71: jnz     loc_1800B6C39
 * 00000001800B6B77: call    sub_1800B19AC
 * 00000001800B6B7C: mov     qword ptr [rbp+9E40h+var_99A0], rax
 * 00000001800B6B83: add     rax, 672Ch
 * 00000001800B6B89: mov     qword ptr [rbp+9E40h+var_99A0+8], rax
 * 00000001800B6B90: movups  xmm7, [rbp+9E40h+var_99A0]
 * 00000001800B6B97: movups  [rbp+9E40h+var_82B0], xmm7
 * 00000001800B6B9E: mov     dword ptr [rbp+9E40h+var_82A0], 5
 * 00000001800B6BA8: mov     dword ptr [rbp+9E40h+var_82A0+4], esi
 * 00000001800B6BAE: movups  xmm6, [rbp+9E40h+var_82A0]
 * 00000001800B6BB5: call    sub_1800B1A0C
 * 00000001800B6BBA: mov     r8, rax
 * 00000001800B6BBD: mov     r9d, r12d
 * 00000001800B6BC0: mov     edx, 122h
 * 00000001800B6BC5: lea     rcx, [rbp+9E40h+var_890]; Src
 * 00000001800B6BCC: call    sub_18007C338
 * 00000001800B6BD1: nop
 * 00000001800B6BD2: mov     r8, rax
 * 00000001800B6BD5: mov     rdx, r13
 * 00000001800B6BD8: lea     rcx, [rbp+9E40h+var_8F0]
 * 00000001800B6BDF: call    sub_18001C6E8
 * 00000001800B6BE4: nop
 * 00000001800B6BE5: lea     r8, aPixel; "/Pixel"
 * 00000001800B6BEC: mov     rdx, rax
 * 00000001800B6BEF: lea     rcx, [rbp+9E40h+var_5F50]
 * 00000001800B6BF6: call    sub_18001C61C
 * 00000001800B6BFB: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B6C00: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B6C05: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B6C0A: mov     rcx, rax
 * 00000001800B6C0D: call    sub_18007C3DC
 * 00000001800B6C12: nop
 * 00000001800B6C13: lea     rcx, [rbp+9E40h+var_8F0]
 * 00000001800B6C1A: call    sub_180010F30
 * 00000001800B6C1F: nop
 * 00000001800B6C20: lea     rcx, [rbp+9E40h+var_890]
 * 00000001800B6C27: call    sub_180010F30
 * 00000001800B6C2C: nop
 * 00000001800B6C2D: lea     rcx, dword_1801D9378
 * 00000001800B6C34: call    sub_18000C538
 * 00000001800B6C39: mov     rax, [rdi+rbx*8]
 * 00000001800B6C3D: mov     eax, [r15+rax]
 * 00000001800B6C41: cmp     cs:dword_1801D937C, eax
 * 00000001800B6C47: jle     loc_1800B6D28
 * 00000001800B6C4D: lea     rcx, dword_1801D937C
 * 00000001800B6C54: call    sub_18000C5A0
 * 00000001800B6C59: cmp     cs:dword_1801D937C, r14d
 * 00000001800B6C60: jnz     loc_1800B6D28
 * 00000001800B6C66: call    sub_1800B19CC
 * 00000001800B6C6B: mov     qword ptr [rbp+9E40h+var_9990], rax
 * 00000001800B6C72: add     rax, 68BCh
 * 00000001800B6C78: mov     qword ptr [rbp+9E40h+var_9990+8], rax
 * 00000001800B6C7F: movups  xmm7, [rbp+9E40h+var_9990]
 * 00000001800B6C86: movups  [rbp+9E40h+var_8290], xmm7
 * 00000001800B6C8D: mov     dword ptr [rbp+9E40h+var_8280], 5
 * 00000001800B6C97: mov     dword ptr [rbp+9E40h+var_8280+4], esi
 * 00000001800B6C9D: movups  xmm6, [rbp+9E40h+var_8280]
 * 00000001800B6CA4: call    sub_1800B1A0C
 * 00000001800B6CA9: mov     r8, rax
 * 00000001800B6CAC: mov     r9d, r12d
 * 00000001800B6CAF: mov     edx, 128h
 * 00000001800B6CB4: lea     rcx, [rbp+9E40h+var_770]; Src
 * 00000001800B6CBB: call    sub_18007C338
 * 00000001800B6CC0: nop
 * 00000001800B6CC1: mov     r8, rax
 * 00000001800B6CC4: mov     rdx, r13
 * 00000001800B6CC7: lea     rcx, [rbp+9E40h+var_7D0]
 * 00000001800B6CCE: call    sub_18001C6E8
 * 00000001800B6CD3: nop
 * 00000001800B6CD4: lea     r8, aPixel; "/Pixel"
 * 00000001800B6CDB: mov     rdx, rax
 * 00000001800B6CDE: lea     rcx, [rbp+9E40h+var_5F30]
 * 00000001800B6CE5: call    sub_18001C61C
 * 00000001800B6CEA: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B6CEF: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B6CF4: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B6CF9: mov     rcx, rax
 * 00000001800B6CFC: call    sub_18007C3DC
 * 00000001800B6D01: nop
 * 00000001800B6D02: lea     rcx, [rbp+9E40h+var_7D0]
 * 00000001800B6D09: call    sub_180010F30
 * 00000001800B6D0E: nop
 * 00000001800B6D0F: lea     rcx, [rbp+9E40h+var_770]
 * 00000001800B6D16: call    sub_180010F30
 * 00000001800B6D1B: nop
 * 00000001800B6D1C: lea     rcx, dword_1801D937C
 * 00000001800B6D23: call    sub_18000C538
 * 00000001800B6D28: mov     rax, [rdi+rbx*8]
 * 00000001800B6D2C: mov     eax, [r15+rax]
 * 00000001800B6D30: cmp     cs:dword_1801D9380, eax
 * 00000001800B6D36: jle     loc_1800B6E17
 * 00000001800B6D3C: lea     rcx, dword_1801D9380
 * 00000001800B6D43: call    sub_18000C5A0
 * 00000001800B6D48: cmp     cs:dword_1801D9380, r14d
 * 00000001800B6D4F: jnz     loc_1800B6E17
 * 00000001800B6D55: call    sub_1800B19CC
 * 00000001800B6D5A: mov     qword ptr [rbp+9E40h+var_9980], rax
 * 00000001800B6D61: add     rax, 68BCh
 * 00000001800B6D67: mov     qword ptr [rbp+9E40h+var_9980+8], rax
 * 00000001800B6D6E: movups  xmm7, [rbp+9E40h+var_9980]
 * 00000001800B6D75: movups  [rbp+9E40h+var_8270], xmm7
 * 00000001800B6D7C: mov     dword ptr [rbp+9E40h+var_8260], 5
 * 00000001800B6D86: mov     dword ptr [rbp+9E40h+var_8260+4], esi
 * 00000001800B6D8C: movups  xmm6, [rbp+9E40h+var_8260]
 * 00000001800B6D93: call    sub_1800B1A0C
 * 00000001800B6D98: mov     r8, rax
 * 00000001800B6D9B: mov     r9d, r12d
 * 00000001800B6D9E: mov     edx, 12Ah
 * 00000001800B6DA3: lea     rcx, [rbp+9E40h+var_650]; Src
 * 00000001800B6DAA: call    sub_18007C338
 * 00000001800B6DAF: nop
 * 00000001800B6DB0: mov     r8, rax
 * 00000001800B6DB3: mov     rdx, r13
 * 00000001800B6DB6: lea     rcx, [rbp+9E40h+var_6B0]
 * 00000001800B6DBD: call    sub_18001C6E8
 * 00000001800B6DC2: nop
 * 00000001800B6DC3: lea     r8, aPixel; "/Pixel"
 * 00000001800B6DCA: mov     rdx, rax
 * 00000001800B6DCD: lea     rcx, [rbp+9E40h+var_5F10]
 * 00000001800B6DD4: call    sub_18001C61C
 * 00000001800B6DD9: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B6DDE: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B6DE3: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B6DE8: mov     rcx, rax
 * 00000001800B6DEB: call    sub_18007C3DC
 * 00000001800B6DF0: nop
 * 00000001800B6DF1: lea     rcx, [rbp+9E40h+var_6B0]
 * 00000001800B6DF8: call    sub_180010F30
 * 00000001800B6DFD: nop
 * 00000001800B6DFE: lea     rcx, [rbp+9E40h+var_650]
 * 00000001800B6E05: call    sub_180010F30
 * 00000001800B6E0A: nop
 * 00000001800B6E0B: lea     rcx, dword_1801D9380
 * 00000001800B6E12: call    sub_18000C538
 * 00000001800B6E17: mov     rax, [rdi+rbx*8]
 * 00000001800B6E1B: mov     eax, [r15+rax]
 * 00000001800B6E1F: cmp     cs:dword_1801D9384, eax
 * 00000001800B6E25: jle     loc_1800B6F06
 * 00000001800B6E2B: lea     rcx, dword_1801D9384
 * 00000001800B6E32: call    sub_18000C5A0
 * 00000001800B6E37: cmp     cs:dword_1801D9384, r14d
 * 00000001800B6E3E: jnz     loc_1800B6F06
 * 00000001800B6E44: call    sub_1800B19DC
 * 00000001800B6E49: mov     qword ptr [rbp+9E40h+var_9970], rax
 * 00000001800B6E50: add     rax, 6908h
 * 00000001800B6E56: mov     qword ptr [rbp+9E40h+var_9970+8], rax
 * 00000001800B6E5D: movups  xmm7, [rbp+9E40h+var_9970]
 * 00000001800B6E64: movups  [rbp+9E40h+var_8250], xmm7
 * 00000001800B6E6B: mov     dword ptr [rbp+9E40h+var_8240], 5
 * 00000001800B6E75: mov     dword ptr [rbp+9E40h+var_8240+4], esi
 * 00000001800B6E7B: movups  xmm6, [rbp+9E40h+var_8240]
 * 00000001800B6E82: call    sub_1800B1A0C
 * 00000001800B6E87: mov     r8, rax
 * 00000001800B6E8A: mov     r9d, r12d
 * 00000001800B6E8D: mov     edx, 130h
 * 00000001800B6E92: lea     rcx, [rbp+9E40h+var_530]; Src
 * 00000001800B6E99: call    sub_18007C338
 * 00000001800B6E9E: nop
 * 00000001800B6E9F: mov     r8, rax
 * 00000001800B6EA2: mov     rdx, r13
 * 00000001800B6EA5: lea     rcx, [rbp+9E40h+var_590]
 * 00000001800B6EAC: call    sub_18001C6E8
 * 00000001800B6EB1: nop
 * 00000001800B6EB2: lea     r8, aPixel; "/Pixel"
 * 00000001800B6EB9: mov     rdx, rax
 * 00000001800B6EBC: lea     rcx, [rbp+9E40h+var_5EF0]
 * 00000001800B6EC3: call    sub_18001C61C
 * 00000001800B6EC8: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B6ECD: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B6ED2: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B6ED7: mov     rcx, rax
 * 00000001800B6EDA: call    sub_18007C3DC
 * 00000001800B6EDF: nop
 * 00000001800B6EE0: lea     rcx, [rbp+9E40h+var_590]
 * 00000001800B6EE7: call    sub_180010F30
 * 00000001800B6EEC: nop
 * 00000001800B6EED: lea     rcx, [rbp+9E40h+var_530]
 * 00000001800B6EF4: call    sub_180010F30
 * 00000001800B6EF9: nop
 * 00000001800B6EFA: lea     rcx, dword_1801D9384
 * 00000001800B6F01: call    sub_18000C538
 * 00000001800B6F06: mov     rax, [rdi+rbx*8]
 * 00000001800B6F0A: mov     eax, [r15+rax]
 * 00000001800B6F0E: cmp     cs:dword_1801D9388, eax
 * 00000001800B6F14: jle     loc_1800B6FF5
 * 00000001800B6F1A: lea     rcx, dword_1801D9388
 * 00000001800B6F21: call    sub_18000C5A0
 * 00000001800B6F26: cmp     cs:dword_1801D9388, r14d
 * 00000001800B6F2D: jnz     loc_1800B6FF5
 * 00000001800B6F33: call    sub_1800B19DC
 * 00000001800B6F38: mov     qword ptr [rbp+9E40h+var_9960], rax
 * 00000001800B6F3F: add     rax, 6908h
 * 00000001800B6F45: mov     qword ptr [rbp+9E40h+var_9960+8], rax
 * 00000001800B6F4C: movups  xmm7, [rbp+9E40h+var_9960]
 * 00000001800B6F53: movups  [rbp+9E40h+var_8230], xmm7
 * 00000001800B6F5A: mov     dword ptr [rbp+9E40h+var_8220], 5
 * 00000001800B6F64: mov     dword ptr [rbp+9E40h+var_8220+4], esi
 * 00000001800B6F6A: movups  xmm6, [rbp+9E40h+var_8220]
 * 00000001800B6F71: call    sub_1800B1A0C
 * 00000001800B6F76: mov     r8, rax
 * 00000001800B6F79: mov     r9d, r12d
 * 00000001800B6F7C: mov     edx, 132h
 * 00000001800B6F81: lea     rcx, [rbp+9E40h+var_410]; Src
 * 00000001800B6F88: call    sub_18007C338
 * 00000001800B6F8D: nop
 * 00000001800B6F8E: mov     r8, rax
 * 00000001800B6F91: mov     rdx, r13
 * 00000001800B6F94: lea     rcx, [rbp+9E40h+var_470]
 * 00000001800B6F9B: call    sub_18001C6E8
 * 00000001800B6FA0: nop
 * 00000001800B6FA1: lea     r8, aPixel; "/Pixel"
 * 00000001800B6FA8: mov     rdx, rax
 * 00000001800B6FAB: lea     rcx, [rbp+9E40h+var_5ED0]
 * 00000001800B6FB2: call    sub_18001C61C
 * 00000001800B6FB7: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B6FBC: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B6FC1: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B6FC6: mov     rcx, rax
 * 00000001800B6FC9: call    sub_18007C3DC
 * 00000001800B6FCE: nop
 * 00000001800B6FCF: lea     rcx, [rbp+9E40h+var_470]
 * 00000001800B6FD6: call    sub_180010F30
 * 00000001800B6FDB: nop
 * 00000001800B6FDC: lea     rcx, [rbp+9E40h+var_410]
 * 00000001800B6FE3: call    sub_180010F30
 * 00000001800B6FE8: nop
 * 00000001800B6FE9: lea     rcx, dword_1801D9388
 * 00000001800B6FF0: call    sub_18000C538
 * 00000001800B6FF5: mov     rax, [rdi+rbx*8]
 * 00000001800B6FF9: mov     eax, [r15+rax]
 * 00000001800B6FFD: cmp     cs:dword_1801D938C, eax
 * 00000001800B7003: jle     loc_1800B70E4
 * 00000001800B7009: lea     rcx, dword_1801D938C
 * 00000001800B7010: call    sub_18000C5A0
 * 00000001800B7015: cmp     cs:dword_1801D938C, r14d
 * 00000001800B701C: jnz     loc_1800B70E4
 * 00000001800B7022: call    sub_1800B19FC
 * 00000001800B7027: mov     qword ptr [rbp+9E40h+var_9950], rax
 * 00000001800B702E: add     rax, 6ABCh
 * 00000001800B7034: mov     qword ptr [rbp+9E40h+var_9950+8], rax
 * 00000001800B703B: movups  xmm7, [rbp+9E40h+var_9950]
 * 00000001800B7042: movups  [rbp+9E40h+var_8210], xmm7
 * 00000001800B7049: mov     dword ptr [rbp+9E40h+var_8200], 5
 * 00000001800B7053: mov     dword ptr [rbp+9E40h+var_8200+4], esi
 * 00000001800B7059: movups  xmm6, [rbp+9E40h+var_8200]
 * 00000001800B7060: call    sub_1800B1A0C
 * 00000001800B7065: mov     r8, rax
 * 00000001800B7068: mov     r9d, r12d
 * 00000001800B706B: mov     edx, 138h
 * 00000001800B7070: lea     rcx, [rbp+9E40h+var_2F0]; Src
 * 00000001800B7077: call    sub_18007C338
 * 00000001800B707C: nop
 * 00000001800B707D: mov     r8, rax
 * 00000001800B7080: mov     rdx, r13
 * 00000001800B7083: lea     rcx, [rbp+9E40h+var_350]
 * 00000001800B708A: call    sub_18001C6E8
 * 00000001800B708F: nop
 * 00000001800B7090: lea     r8, aPixel; "/Pixel"
 * 00000001800B7097: mov     rdx, rax
 * 00000001800B709A: lea     rcx, [rbp+9E40h+var_5EB0]
 * 00000001800B70A1: call    sub_18001C61C
 * 00000001800B70A6: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B70AB: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B70B0: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B70B5: mov     rcx, rax
 * 00000001800B70B8: call    sub_18007C3DC
 * 00000001800B70BD: nop
 * 00000001800B70BE: lea     rcx, [rbp+9E40h+var_350]
 * 00000001800B70C5: call    sub_180010F30
 * 00000001800B70CA: nop
 * 00000001800B70CB: lea     rcx, [rbp+9E40h+var_2F0]
 * 00000001800B70D2: call    sub_180010F30
 * 00000001800B70D7: nop
 * 00000001800B70D8: lea     rcx, dword_1801D938C
 * 00000001800B70DF: call    sub_18000C538
 * 00000001800B70E4: mov     rax, [rdi+rbx*8]
 * 00000001800B70E8: mov     eax, [r15+rax]
 * 00000001800B70EC: cmp     cs:dword_1801D9390, eax
 * 00000001800B70F2: jle     loc_1800B71D3
 * 00000001800B70F8: lea     rcx, dword_1801D9390
 * 00000001800B70FF: call    sub_18000C5A0
 * 00000001800B7104: cmp     cs:dword_1801D9390, r14d
 * 00000001800B710B: jnz     loc_1800B71D3
 * 00000001800B7111: call    sub_1800B19FC
 * 00000001800B7116: mov     qword ptr [rbp+9E40h+var_9940], rax
 * 00000001800B711D: add     rax, 6ABCh
 * 00000001800B7123: mov     qword ptr [rbp+9E40h+var_9940+8], rax
 * 00000001800B712A: movups  xmm7, [rbp+9E40h+var_9940]
 * 00000001800B7131: movups  [rbp+9E40h+var_81F0], xmm7
 * 00000001800B7138: mov     dword ptr [rbp+9E40h+var_81E0], 5
 * 00000001800B7142: mov     dword ptr [rbp+9E40h+var_81E0+4], esi
 * 00000001800B7148: movups  xmm6, [rbp+9E40h+var_81E0]
 * 00000001800B714F: call    sub_1800B1A0C
 * 00000001800B7154: mov     r8, rax
 * 00000001800B7157: mov     r9d, r12d
 * 00000001800B715A: mov     edx, 13Ah
 * 00000001800B715F: lea     rcx, [rbp+9E40h+var_1D0]; Src
 * 00000001800B7166: call    sub_18007C338
 * 00000001800B716B: nop
 * 00000001800B716C: mov     r8, rax
 * 00000001800B716F: mov     rdx, r13
 * 00000001800B7172: lea     rcx, [rbp+9E40h+var_230]
 * 00000001800B7179: call    sub_18001C6E8
 * 00000001800B717E: nop
 * 00000001800B717F: lea     r8, aPixel; "/Pixel"
 * 00000001800B7186: mov     rdx, rax
 * 00000001800B7189: lea     rcx, [rbp+9E40h+var_5E90]
 * 00000001800B7190: call    sub_18001C61C
 * 00000001800B7195: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B719A: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B719F: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B71A4: mov     rcx, rax
 * 00000001800B71A7: call    sub_18007C3DC
 * 00000001800B71AC: nop
 * 00000001800B71AD: lea     rcx, [rbp+9E40h+var_230]
 * 00000001800B71B4: call    sub_180010F30
 * 00000001800B71B9: nop
 * 00000001800B71BA: lea     rcx, [rbp+9E40h+var_1D0]
 * 00000001800B71C1: call    sub_180010F30
 * 00000001800B71C6: nop
 * 00000001800B71C7: lea     rcx, dword_1801D9390
 * 00000001800B71CE: call    sub_18000C538
 * 00000001800B71D3: mov     rax, [rdi+rbx*8]
 * 00000001800B71D7: mov     eax, [r15+rax]
 * 00000001800B71DB: cmp     cs:dword_1801D9394, eax
 * 00000001800B71E1: jle     loc_1800B72C2
 * 00000001800B71E7: lea     rcx, dword_1801D9394
 * 00000001800B71EE: call    sub_18000C5A0
 * 00000001800B71F3: cmp     cs:dword_1801D9394, r14d
 * 00000001800B71FA: jnz     loc_1800B72C2
 * 00000001800B7200: call    sub_1800B19AC
 * 00000001800B7205: mov     qword ptr [rbp+9E40h+var_9930], rax
 * 00000001800B720C: add     rax, 672Ch
 * 00000001800B7212: mov     qword ptr [rbp+9E40h+var_9930+8], rax
 * 00000001800B7219: movups  xmm7, [rbp+9E40h+var_9930]
 * 00000001800B7220: movups  [rbp+9E40h+var_81D0], xmm7
 * 00000001800B7227: mov     dword ptr [rbp+9E40h+var_81C0], 5
 * 00000001800B7231: mov     dword ptr [rbp+9E40h+var_81C0+4], esi
 * 00000001800B7237: movups  xmm6, [rbp+9E40h+var_81C0]
 * 00000001800B723E: call    sub_1800B1A0C
 * 00000001800B7243: mov     r8, rax
 * 00000001800B7246: mov     r9d, r12d
 * 00000001800B7249: mov     edx, 140h
 * 00000001800B724E: lea     rcx, [rbp+9E40h+var_B0]; Src
 * 00000001800B7255: call    sub_18007C338
 * 00000001800B725A: nop
 * 00000001800B725B: mov     r8, rax
 * 00000001800B725E: mov     rdx, r13
 * 00000001800B7261: lea     rcx, [rbp+9E40h+var_110]
 * 00000001800B7268: call    sub_18001C6E8
 * 00000001800B726D: nop
 * 00000001800B726E: lea     r8, aPixel; "/Pixel"
 * 00000001800B7275: mov     rdx, rax
 * 00000001800B7278: lea     rcx, [rbp+9E40h+var_5E70]
 * 00000001800B727F: call    sub_18001C61C
 * 00000001800B7284: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B7289: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B728E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B7293: mov     rcx, rax
 * 00000001800B7296: call    sub_18007C3DC
 * 00000001800B729B: nop
 * 00000001800B729C: lea     rcx, [rbp+9E40h+var_110]
 * 00000001800B72A3: call    sub_180010F30
 * 00000001800B72A8: nop
 * 00000001800B72A9: lea     rcx, [rbp+9E40h+var_B0]
 * 00000001800B72B0: call    sub_180010F30
 * 00000001800B72B5: nop
 * 00000001800B72B6: lea     rcx, dword_1801D9394
 * 00000001800B72BD: call    sub_18000C538
 * 00000001800B72C2: mov     rax, [rdi+rbx*8]
 * 00000001800B72C6: mov     eax, [r15+rax]
 * 00000001800B72CA: cmp     cs:dword_1801D9398, eax
 * 00000001800B72D0: jle     loc_1800B73B1
 * 00000001800B72D6: lea     rcx, dword_1801D9398
 * 00000001800B72DD: call    sub_18000C5A0
 * 00000001800B72E2: cmp     cs:dword_1801D9398, r14d
 * 00000001800B72E9: jnz     loc_1800B73B1
 * 00000001800B72EF: call    sub_1800B19AC
 * 00000001800B72F4: mov     qword ptr [rbp+9E40h+var_9920], rax
 * 00000001800B72FB: add     rax, 672Ch
 * 00000001800B7301: mov     qword ptr [rbp+9E40h+var_9920+8], rax
 * 00000001800B7308: movups  xmm7, [rbp+9E40h+var_9920]
 * 00000001800B730F: movups  [rbp+9E40h+var_81B0], xmm7
 * 00000001800B7316: mov     dword ptr [rbp+9E40h+var_81A0], 5
 * 00000001800B7320: mov     dword ptr [rbp+9E40h+var_81A0+4], esi
 * 00000001800B7326: movups  xmm6, [rbp+9E40h+var_81A0]
 * 00000001800B732D: call    sub_1800B1A0C
 * 00000001800B7332: mov     r8, rax
 * 00000001800B7335: mov     r9d, r12d
 * 00000001800B7338: mov     edx, 142h
 * 00000001800B733D: lea     rcx, [rbp+9E40h+var_4690]; Src
 * 00000001800B7344: call    sub_18007C338
 * 00000001800B7349: nop
 * 00000001800B734A: mov     r8, rax
 * 00000001800B734D: mov     rdx, r13
 * 00000001800B7350: lea     rcx, [rbp+9E40h+var_46B0]
 * 00000001800B7357: call    sub_18001C6E8
 * 00000001800B735C: nop
 * 00000001800B735D: lea     r8, aPixel; "/Pixel"
 * 00000001800B7364: mov     rdx, rax
 * 00000001800B7367: lea     rcx, [rbp+9E40h+var_5E50]
 * 00000001800B736E: call    sub_18001C61C
 * 00000001800B7373: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B7378: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B737D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B7382: mov     rcx, rax
 * 00000001800B7385: call    sub_18007C3DC
 * 00000001800B738A: nop
 * 00000001800B738B: lea     rcx, [rbp+9E40h+var_46B0]
 * 00000001800B7392: call    sub_180010F30
 * 00000001800B7397: nop
 * 00000001800B7398: lea     rcx, [rbp+9E40h+var_4690]
 * 00000001800B739F: call    sub_180010F30
 * 00000001800B73A4: nop
 * 00000001800B73A5: lea     rcx, dword_1801D9398
 * 00000001800B73AC: call    sub_18000C538
 * 00000001800B73B1: mov     rax, [rdi+rbx*8]
 * 00000001800B73B5: mov     eax, [r15+rax]
 * 00000001800B73B9: cmp     cs:dword_1801D939C, eax
 * 00000001800B73BF: jle     loc_1800B74A0
 * 00000001800B73C5: lea     rcx, dword_1801D939C
 * 00000001800B73CC: call    sub_18000C5A0
 * 00000001800B73D1: cmp     cs:dword_1801D939C, r14d
 * 00000001800B73D8: jnz     loc_1800B74A0
 * 00000001800B73DE: call    sub_1800B19CC
 * 00000001800B73E3: mov     qword ptr [rbp+9E40h+var_9910], rax
 * 00000001800B73EA: add     rax, 68BCh
 * 00000001800B73F0: mov     qword ptr [rbp+9E40h+var_9910+8], rax
 * 00000001800B73F7: movups  xmm7, [rbp+9E40h+var_9910]
 * 00000001800B73FE: movups  [rbp+9E40h+var_8190], xmm7
 * 00000001800B7405: mov     dword ptr [rbp+9E40h+var_8180], 5
 * 00000001800B740F: mov     dword ptr [rbp+9E40h+var_8180+4], esi
 * 00000001800B7415: movups  xmm6, [rbp+9E40h+var_8180]
 * 00000001800B741C: call    sub_1800B1A0C
 * 00000001800B7421: mov     r8, rax
 * 00000001800B7424: mov     r9d, r12d
 * 00000001800B7427: mov     edx, 148h
 * 00000001800B742C: lea     rcx, [rbp+9E40h+var_4630]; Src
 * 00000001800B7433: call    sub_18007C338
 * 00000001800B7438: nop
 * 00000001800B7439: mov     r8, rax
 * 00000001800B743C: mov     rdx, r13
 * 00000001800B743F: lea     rcx, [rbp+9E40h+var_4650]
 * 00000001800B7446: call    sub_18001C6E8
 * 00000001800B744B: nop
 * 00000001800B744C: lea     r8, aPixel; "/Pixel"
 * 00000001800B7453: mov     rdx, rax
 * 00000001800B7456: lea     rcx, [rbp+9E40h+var_5E30]
 * 00000001800B745D: call    sub_18001C61C
 * 00000001800B7462: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B7467: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B746C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B7471: mov     rcx, rax
 * 00000001800B7474: call    sub_18007C3DC
 * 00000001800B7479: nop
 * 00000001800B747A: lea     rcx, [rbp+9E40h+var_4650]
 * 00000001800B7481: call    sub_180010F30
 * 00000001800B7486: nop
 * 00000001800B7487: lea     rcx, [rbp+9E40h+var_4630]
 * 00000001800B748E: call    sub_180010F30
 * 00000001800B7493: nop
 * 00000001800B7494: lea     rcx, dword_1801D939C
 * 00000001800B749B: call    sub_18000C538
 * 00000001800B74A0: mov     rax, [rdi+rbx*8]
 * 00000001800B74A4: mov     eax, [r15+rax]
 * 00000001800B74A8: cmp     cs:dword_1801D93A0, eax
 * 00000001800B74AE: jle     loc_1800B758F
 * 00000001800B74B4: lea     rcx, dword_1801D93A0
 * 00000001800B74BB: call    sub_18000C5A0
 * 00000001800B74C0: cmp     cs:dword_1801D93A0, r14d
 * 00000001800B74C7: jnz     loc_1800B758F
 * 00000001800B74CD: call    sub_1800B19CC
 * 00000001800B74D2: mov     qword ptr [rbp+9E40h+var_9900], rax
 * 00000001800B74D9: add     rax, 68BCh
 * 00000001800B74DF: mov     qword ptr [rbp+9E40h+var_9900+8], rax
 * 00000001800B74E6: movups  xmm7, [rbp+9E40h+var_9900]
 * 00000001800B74ED: movups  [rbp+9E40h+var_8170], xmm7
 * 00000001800B74F4: mov     dword ptr [rbp+9E40h+var_8160], 5
 * 00000001800B74FE: mov     dword ptr [rbp+9E40h+var_8160+4], esi
 * 00000001800B7504: movups  xmm6, [rbp+9E40h+var_8160]
 * 00000001800B750B: call    sub_1800B1A0C
 * 00000001800B7510: mov     r8, rax
 * 00000001800B7513: mov     r9d, r12d
 * 00000001800B7516: mov     edx, 14Ah
 * 00000001800B751B: lea     rcx, [rbp+9E40h+var_45D0]; Src
 * 00000001800B7522: call    sub_18007C338
 * 00000001800B7527: nop
 * 00000001800B7528: mov     r8, rax
 * 00000001800B752B: mov     rdx, r13
 * 00000001800B752E: lea     rcx, [rbp+9E40h+var_45F0]
 * 00000001800B7535: call    sub_18001C6E8
 * 00000001800B753A: nop
 * 00000001800B753B: lea     r8, aPixel; "/Pixel"
 * 00000001800B7542: mov     rdx, rax
 * 00000001800B7545: lea     rcx, [rbp+9E40h+var_5E10]
 * 00000001800B754C: call    sub_18001C61C
 * 00000001800B7551: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B7556: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B755B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B7560: mov     rcx, rax
 * 00000001800B7563: call    sub_18007C3DC
 * 00000001800B7568: nop
 * 00000001800B7569: lea     rcx, [rbp+9E40h+var_45F0]
 * 00000001800B7570: call    sub_180010F30
 * 00000001800B7575: nop
 * 00000001800B7576: lea     rcx, [rbp+9E40h+var_45D0]
 * 00000001800B757D: call    sub_180010F30
 * 00000001800B7582: nop
 * 00000001800B7583: lea     rcx, dword_1801D93A0
 * 00000001800B758A: call    sub_18000C538
 * 00000001800B758F: mov     rax, [rdi+rbx*8]
 * 00000001800B7593: mov     eax, [r15+rax]
 * 00000001800B7597: cmp     cs:dword_1801D93A4, eax
 * 00000001800B759D: jle     loc_1800B767E
 * 00000001800B75A3: lea     rcx, dword_1801D93A4
 * 00000001800B75AA: call    sub_18000C5A0
 * 00000001800B75AF: cmp     cs:dword_1801D93A4, r14d
 * 00000001800B75B6: jnz     loc_1800B767E
 * 00000001800B75BC: call    sub_1800B19DC
 * 00000001800B75C1: mov     qword ptr [rbp+9E40h+var_98F0], rax
 * 00000001800B75C8: add     rax, 6908h
 * 00000001800B75CE: mov     qword ptr [rbp+9E40h+var_98F0+8], rax
 * 00000001800B75D5: movups  xmm7, [rbp+9E40h+var_98F0]
 * 00000001800B75DC: movups  [rbp+9E40h+var_8150], xmm7
 * 00000001800B75E3: mov     dword ptr [rbp+9E40h+var_8140], 5
 * 00000001800B75ED: mov     dword ptr [rbp+9E40h+var_8140+4], esi
 * 00000001800B75F3: movups  xmm6, [rbp+9E40h+var_8140]
 * 00000001800B75FA: call    sub_1800B1A0C
 * 00000001800B75FF: mov     r8, rax
 * 00000001800B7602: mov     r9d, r12d
 * 00000001800B7605: mov     edx, 150h
 * 00000001800B760A: lea     rcx, [rbp+9E40h+var_4570]; Src
 * 00000001800B7611: call    sub_18007C338
 * 00000001800B7616: nop
 * 00000001800B7617: mov     r8, rax
 * 00000001800B761A: mov     rdx, r13
 * 00000001800B761D: lea     rcx, [rbp+9E40h+var_4590]
 * 00000001800B7624: call    sub_18001C6E8
 * 00000001800B7629: nop
 * 00000001800B762A: lea     r8, aPixel; "/Pixel"
 * 00000001800B7631: mov     rdx, rax
 * 00000001800B7634: lea     rcx, [rbp+9E40h+var_5DF0]
 * 00000001800B763B: call    sub_18001C61C
 * 00000001800B7640: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B7645: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B764A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B764F: mov     rcx, rax
 * 00000001800B7652: call    sub_18007C3DC
 * 00000001800B7657: nop
 * 00000001800B7658: lea     rcx, [rbp+9E40h+var_4590]
 * 00000001800B765F: call    sub_180010F30
 * 00000001800B7664: nop
 * 00000001800B7665: lea     rcx, [rbp+9E40h+var_4570]
 * 00000001800B766C: call    sub_180010F30
 * 00000001800B7671: nop
 * 00000001800B7672: lea     rcx, dword_1801D93A4
 * 00000001800B7679: call    sub_18000C538
 * 00000001800B767E: mov     rax, [rdi+rbx*8]
 * 00000001800B7682: mov     eax, [r15+rax]
 * 00000001800B7686: cmp     cs:dword_1801D93A8, eax
 * 00000001800B768C: jle     loc_1800B776D
 * 00000001800B7692: lea     rcx, dword_1801D93A8
 * 00000001800B7699: call    sub_18000C5A0
 * 00000001800B769E: cmp     cs:dword_1801D93A8, r14d
 * 00000001800B76A5: jnz     loc_1800B776D
 * 00000001800B76AB: call    sub_1800B19DC
 * 00000001800B76B0: mov     qword ptr [rbp+9E40h+var_98E0], rax
 * 00000001800B76B7: add     rax, 6908h
 * 00000001800B76BD: mov     qword ptr [rbp+9E40h+var_98E0+8], rax
 * 00000001800B76C4: movups  xmm7, [rbp+9E40h+var_98E0]
 * 00000001800B76CB: movups  [rbp+9E40h+var_8130], xmm7
 * 00000001800B76D2: mov     dword ptr [rbp+9E40h+var_8120], 5
 * 00000001800B76DC: mov     dword ptr [rbp+9E40h+var_8120+4], esi
 * 00000001800B76E2: movups  xmm6, [rbp+9E40h+var_8120]
 * 00000001800B76E9: call    sub_1800B1A0C
 * 00000001800B76EE: mov     r8, rax
 * 00000001800B76F1: mov     r9d, r12d
 * 00000001800B76F4: mov     edx, 152h
 * 00000001800B76F9: lea     rcx, [rbp+9E40h+var_4510]; Src
 * 00000001800B7700: call    sub_18007C338
 * 00000001800B7705: nop
 * 00000001800B7706: mov     r8, rax
 * 00000001800B7709: mov     rdx, r13
 * 00000001800B770C: lea     rcx, [rbp+9E40h+var_4530]
 * 00000001800B7713: call    sub_18001C6E8
 * 00000001800B7718: nop
 * 00000001800B7719: lea     r8, aPixel; "/Pixel"
 * 00000001800B7720: mov     rdx, rax
 * 00000001800B7723: lea     rcx, [rbp+9E40h+var_5DD0]
 * 00000001800B772A: call    sub_18001C61C
 * 00000001800B772F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B7734: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B7739: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B773E: mov     rcx, rax
 * 00000001800B7741: call    sub_18007C3DC
 * 00000001800B7746: nop
 * 00000001800B7747: lea     rcx, [rbp+9E40h+var_4530]
 * 00000001800B774E: call    sub_180010F30
 * 00000001800B7753: nop
 * 00000001800B7754: lea     rcx, [rbp+9E40h+var_4510]
 * 00000001800B775B: call    sub_180010F30
 * 00000001800B7760: nop
 * 00000001800B7761: lea     rcx, dword_1801D93A8
 * 00000001800B7768: call    sub_18000C538
 * 00000001800B776D: mov     rax, [rdi+rbx*8]
 * 00000001800B7771: mov     eax, [r15+rax]
 * 00000001800B7775: cmp     cs:dword_1801D93AC, eax
 * 00000001800B777B: jle     loc_1800B785C
 * 00000001800B7781: lea     rcx, dword_1801D93AC
 * 00000001800B7788: call    sub_18000C5A0
 * 00000001800B778D: cmp     cs:dword_1801D93AC, r14d
 * 00000001800B7794: jnz     loc_1800B785C
 * 00000001800B779A: call    sub_1800B19FC
 * 00000001800B779F: mov     qword ptr [rbp+9E40h+var_98D0], rax
 * 00000001800B77A6: add     rax, 6ABCh
 * 00000001800B77AC: mov     qword ptr [rbp+9E40h+var_98D0+8], rax
 * 00000001800B77B3: movups  xmm7, [rbp+9E40h+var_98D0]
 * 00000001800B77BA: movups  [rbp+9E40h+var_8110], xmm7
 * 00000001800B77C1: mov     dword ptr [rbp+9E40h+var_8100], 5
 * 00000001800B77CB: mov     dword ptr [rbp+9E40h+var_8100+4], esi
 * 00000001800B77D1: movups  xmm6, [rbp+9E40h+var_8100]
 * 00000001800B77D8: call    sub_1800B1A0C
 * 00000001800B77DD: mov     r8, rax
 * 00000001800B77E0: mov     r9d, r12d
 * 00000001800B77E3: mov     edx, 158h
 * 00000001800B77E8: lea     rcx, [rbp+9E40h+var_44B0]; Src
 * 00000001800B77EF: call    sub_18007C338
 * 00000001800B77F4: nop
 * 00000001800B77F5: mov     r8, rax
 * 00000001800B77F8: mov     rdx, r13
 * 00000001800B77FB: lea     rcx, [rbp+9E40h+var_44D0]
 * 00000001800B7802: call    sub_18001C6E8
 * 00000001800B7807: nop
 * 00000001800B7808: lea     r8, aPixel; "/Pixel"
 * 00000001800B780F: mov     rdx, rax
 * 00000001800B7812: lea     rcx, [rbp+9E40h+var_5DB0]
 * 00000001800B7819: call    sub_18001C61C
 * 00000001800B781E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B7823: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B7828: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B782D: mov     rcx, rax
 * 00000001800B7830: call    sub_18007C3DC
 * 00000001800B7835: nop
 * 00000001800B7836: lea     rcx, [rbp+9E40h+var_44D0]
 * 00000001800B783D: call    sub_180010F30
 * 00000001800B7842: nop
 * 00000001800B7843: lea     rcx, [rbp+9E40h+var_44B0]
 * 00000001800B784A: call    sub_180010F30
 * 00000001800B784F: nop
 * 00000001800B7850: lea     rcx, dword_1801D93AC
 * 00000001800B7857: call    sub_18000C538
 * 00000001800B785C: mov     rax, [rdi+rbx*8]
 * 00000001800B7860: mov     eax, [r15+rax]
 * 00000001800B7864: cmp     cs:dword_1801D93B0, eax
 * 00000001800B786A: jle     loc_1800B794B
 * 00000001800B7870: lea     rcx, dword_1801D93B0
 * 00000001800B7877: call    sub_18000C5A0
 * 00000001800B787C: cmp     cs:dword_1801D93B0, r14d
 * 00000001800B7883: jnz     loc_1800B794B
 * 00000001800B7889: call    sub_1800B19FC
 * 00000001800B788E: mov     qword ptr [rbp+9E40h+var_98C0], rax
 * 00000001800B7895: add     rax, 6ABCh
 * 00000001800B789B: mov     qword ptr [rbp+9E40h+var_98C0+8], rax
 * 00000001800B78A2: movups  xmm7, [rbp+9E40h+var_98C0]
 * 00000001800B78A9: movups  [rbp+9E40h+var_80F0], xmm7
 * 00000001800B78B0: mov     dword ptr [rbp+9E40h+var_80E0], 5
 * 00000001800B78BA: mov     dword ptr [rbp+9E40h+var_80E0+4], esi
 * 00000001800B78C0: movups  xmm6, [rbp+9E40h+var_80E0]
 * 00000001800B78C7: call    sub_1800B1A0C
 * 00000001800B78CC: mov     r8, rax
 * 00000001800B78CF: mov     r9d, r12d
 * 00000001800B78D2: mov     edx, 15Ah
 * 00000001800B78D7: lea     rcx, [rbp+9E40h+var_4450]; Src
 * 00000001800B78DE: call    sub_18007C338
 * 00000001800B78E3: nop
 * 00000001800B78E4: mov     r8, rax
 * 00000001800B78E7: mov     rdx, r13
 * 00000001800B78EA: lea     rcx, [rbp+9E40h+var_4470]
 * 00000001800B78F1: call    sub_18001C6E8
 * 00000001800B78F6: nop
 * 00000001800B78F7: lea     r8, aPixel; "/Pixel"
 * 00000001800B78FE: mov     rdx, rax
 * 00000001800B7901: lea     rcx, [rbp+9E40h+var_5D90]
 * 00000001800B7908: call    sub_18001C61C
 * 00000001800B790D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B7912: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B7917: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B791C: mov     rcx, rax
 * 00000001800B791F: call    sub_18007C3DC
 * 00000001800B7924: nop
 * 00000001800B7925: lea     rcx, [rbp+9E40h+var_4470]
 * 00000001800B792C: call    sub_180010F30
 * 00000001800B7931: nop
 * 00000001800B7932: lea     rcx, [rbp+9E40h+var_4450]
 * 00000001800B7939: call    sub_180010F30
 * 00000001800B793E: nop
 * 00000001800B793F: lea     rcx, dword_1801D93B0
 * 00000001800B7946: call    sub_18000C538
 * 00000001800B794B: mov     rax, [rdi+rbx*8]
 * 00000001800B794F: mov     eax, [r15+rax]
 * 00000001800B7953: cmp     cs:dword_1801D93B4, eax
 * 00000001800B7959: jle     loc_1800B7A3A
 * 00000001800B795F: lea     rcx, dword_1801D93B4
 * 00000001800B7966: call    sub_18000C5A0
 * 00000001800B796B: cmp     cs:dword_1801D93B4, r14d
 * 00000001800B7972: jnz     loc_1800B7A3A
 * 00000001800B7978: call    sub_1800B19AC
 * 00000001800B797D: mov     qword ptr [rbp+9E40h+var_98B0], rax
 * 00000001800B7984: add     rax, 672Ch
 * 00000001800B798A: mov     qword ptr [rbp+9E40h+var_98B0+8], rax
 * 00000001800B7991: movups  xmm7, [rbp+9E40h+var_98B0]
 * 00000001800B7998: movups  [rbp+9E40h+var_80D0], xmm7
 * 00000001800B799F: mov     dword ptr [rbp+9E40h+var_80C0], 5
 * 00000001800B79A9: mov     dword ptr [rbp+9E40h+var_80C0+4], esi
 * 00000001800B79AF: movups  xmm6, [rbp+9E40h+var_80C0]
 * 00000001800B79B6: call    sub_1800B1A0C
 * 00000001800B79BB: mov     r8, rax
 * 00000001800B79BE: mov     r9d, r12d
 * 00000001800B79C1: mov     edx, 160h
 * 00000001800B79C6: lea     rcx, [rbp+9E40h+var_43F0]; Src
 * 00000001800B79CD: call    sub_18007C338
 * 00000001800B79D2: nop
 * 00000001800B79D3: mov     r8, rax
 * 00000001800B79D6: mov     rdx, r13
 * 00000001800B79D9: lea     rcx, [rbp+9E40h+var_4410]
 * 00000001800B79E0: call    sub_18001C6E8
 * 00000001800B79E5: nop
 * 00000001800B79E6: lea     r8, aPixel; "/Pixel"
 * 00000001800B79ED: mov     rdx, rax
 * 00000001800B79F0: lea     rcx, [rbp+9E40h+var_5D70]
 * 00000001800B79F7: call    sub_18001C61C
 * 00000001800B79FC: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B7A01: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B7A06: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B7A0B: mov     rcx, rax
 * 00000001800B7A0E: call    sub_18007C3DC
 * 00000001800B7A13: nop
 * 00000001800B7A14: lea     rcx, [rbp+9E40h+var_4410]
 * 00000001800B7A1B: call    sub_180010F30
 * 00000001800B7A20: nop
 * 00000001800B7A21: lea     rcx, [rbp+9E40h+var_43F0]
 * 00000001800B7A28: call    sub_180010F30
 * 00000001800B7A2D: nop
 * 00000001800B7A2E: lea     rcx, dword_1801D93B4
 * 00000001800B7A35: call    sub_18000C538
 * 00000001800B7A3A: mov     rax, [rdi+rbx*8]
 * 00000001800B7A3E: mov     eax, [r15+rax]
 * 00000001800B7A42: cmp     cs:dword_1801D93B8, eax
 * 00000001800B7A48: jle     loc_1800B7B29
 * 00000001800B7A4E: lea     rcx, dword_1801D93B8
 * 00000001800B7A55: call    sub_18000C5A0
 * 00000001800B7A5A: cmp     cs:dword_1801D93B8, r14d
 * 00000001800B7A61: jnz     loc_1800B7B29
 * 00000001800B7A67: call    sub_1800B19AC
 * 00000001800B7A6C: mov     qword ptr [rbp+9E40h+var_98A0], rax
 * 00000001800B7A73: add     rax, 672Ch
 * 00000001800B7A79: mov     qword ptr [rbp+9E40h+var_98A0+8], rax
 * 00000001800B7A80: movups  xmm7, [rbp+9E40h+var_98A0]
 * 00000001800B7A87: movups  [rbp+9E40h+var_80B0], xmm7
 * 00000001800B7A8E: mov     dword ptr [rbp+9E40h+var_80A0], 5
 * 00000001800B7A98: mov     dword ptr [rbp+9E40h+var_80A0+4], esi
 * 00000001800B7A9E: movups  xmm6, [rbp+9E40h+var_80A0]
 * 00000001800B7AA5: call    sub_1800B1A0C
 * 00000001800B7AAA: mov     r8, rax
 * 00000001800B7AAD: mov     r9d, r12d
 * 00000001800B7AB0: mov     edx, 162h
 * 00000001800B7AB5: lea     rcx, [rbp+9E40h+var_4390]; Src
 * 00000001800B7ABC: call    sub_18007C338
 * 00000001800B7AC1: nop
 * 00000001800B7AC2: mov     r8, rax
 * 00000001800B7AC5: mov     rdx, r13
 * 00000001800B7AC8: lea     rcx, [rbp+9E40h+var_43B0]
 * 00000001800B7ACF: call    sub_18001C6E8
 * 00000001800B7AD4: nop
 * 00000001800B7AD5: lea     r8, aPixel; "/Pixel"
 * 00000001800B7ADC: mov     rdx, rax
 * 00000001800B7ADF: lea     rcx, [rbp+9E40h+var_5D50]
 * 00000001800B7AE6: call    sub_18001C61C
 * 00000001800B7AEB: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B7AF0: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B7AF5: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B7AFA: mov     rcx, rax
 * 00000001800B7AFD: call    sub_18007C3DC
 * 00000001800B7B02: nop
 * 00000001800B7B03: lea     rcx, [rbp+9E40h+var_43B0]
 * 00000001800B7B0A: call    sub_180010F30
 * 00000001800B7B0F: nop
 * 00000001800B7B10: lea     rcx, [rbp+9E40h+var_4390]
 * 00000001800B7B17: call    sub_180010F30
 * 00000001800B7B1C: nop
 * 00000001800B7B1D: lea     rcx, dword_1801D93B8
 * 00000001800B7B24: call    sub_18000C538
 * 00000001800B7B29: mov     rax, [rdi+rbx*8]
 * 00000001800B7B2D: mov     eax, [r15+rax]
 * 00000001800B7B31: cmp     cs:dword_1801D93BC, eax
 * 00000001800B7B37: jle     loc_1800B7C18
 * 00000001800B7B3D: lea     rcx, dword_1801D93BC
 * 00000001800B7B44: call    sub_18000C5A0
 * 00000001800B7B49: cmp     cs:dword_1801D93BC, r14d
 * 00000001800B7B50: jnz     loc_1800B7C18
 * 00000001800B7B56: call    sub_1800B19CC
 * 00000001800B7B5B: mov     qword ptr [rbp+9E40h+var_9890], rax
 * 00000001800B7B62: add     rax, 68BCh
 * 00000001800B7B68: mov     qword ptr [rbp+9E40h+var_9890+8], rax
 * 00000001800B7B6F: movups  xmm7, [rbp+9E40h+var_9890]
 * 00000001800B7B76: movups  [rbp+9E40h+var_8090], xmm7
 * 00000001800B7B7D: mov     dword ptr [rbp+9E40h+var_8080], 5
 * 00000001800B7B87: mov     dword ptr [rbp+9E40h+var_8080+4], esi
 * 00000001800B7B8D: movups  xmm6, [rbp+9E40h+var_8080]
 * 00000001800B7B94: call    sub_1800B1A0C
 * 00000001800B7B99: mov     r8, rax
 * 00000001800B7B9C: mov     r9d, r12d
 * 00000001800B7B9F: mov     edx, 168h
 * 00000001800B7BA4: lea     rcx, [rbp+9E40h+var_4330]; Src
 * 00000001800B7BAB: call    sub_18007C338
 * 00000001800B7BB0: nop
 * 00000001800B7BB1: mov     r8, rax
 * 00000001800B7BB4: mov     rdx, r13
 * 00000001800B7BB7: lea     rcx, [rbp+9E40h+var_4350]
 * 00000001800B7BBE: call    sub_18001C6E8
 * 00000001800B7BC3: nop
 * 00000001800B7BC4: lea     r8, aPixel; "/Pixel"
 * 00000001800B7BCB: mov     rdx, rax
 * 00000001800B7BCE: lea     rcx, [rbp+9E40h+var_5D30]
 * 00000001800B7BD5: call    sub_18001C61C
 * 00000001800B7BDA: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B7BDF: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B7BE4: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B7BE9: mov     rcx, rax
 * 00000001800B7BEC: call    sub_18007C3DC
 * 00000001800B7BF1: nop
 * 00000001800B7BF2: lea     rcx, [rbp+9E40h+var_4350]
 * 00000001800B7BF9: call    sub_180010F30
 * 00000001800B7BFE: nop
 * 00000001800B7BFF: lea     rcx, [rbp+9E40h+var_4330]
 * 00000001800B7C06: call    sub_180010F30
 * 00000001800B7C0B: nop
 * 00000001800B7C0C: lea     rcx, dword_1801D93BC
 * 00000001800B7C13: call    sub_18000C538
 * 00000001800B7C18: mov     rax, [rdi+rbx*8]
 * 00000001800B7C1C: mov     eax, [r15+rax]
 * 00000001800B7C20: cmp     cs:dword_1801D93C0, eax
 * 00000001800B7C26: jle     loc_1800B7D07
 * 00000001800B7C2C: lea     rcx, dword_1801D93C0
 * 00000001800B7C33: call    sub_18000C5A0
 * 00000001800B7C38: cmp     cs:dword_1801D93C0, r14d
 * 00000001800B7C3F: jnz     loc_1800B7D07
 * 00000001800B7C45: call    sub_1800B19CC
 * 00000001800B7C4A: mov     qword ptr [rbp+9E40h+var_9880], rax
 * 00000001800B7C51: add     rax, 68BCh
 * 00000001800B7C57: mov     qword ptr [rbp+9E40h+var_9880+8], rax
 * 00000001800B7C5E: movups  xmm7, [rbp+9E40h+var_9880]
 * 00000001800B7C65: movups  [rbp+9E40h+var_8070], xmm7
 * 00000001800B7C6C: mov     dword ptr [rbp+9E40h+var_8060], 5
 * 00000001800B7C76: mov     dword ptr [rbp+9E40h+var_8060+4], esi
 * 00000001800B7C7C: movups  xmm6, [rbp+9E40h+var_8060]
 * 00000001800B7C83: call    sub_1800B1A0C
 * 00000001800B7C88: mov     r8, rax
 * 00000001800B7C8B: mov     r9d, r12d
 * 00000001800B7C8E: mov     edx, 16Ah
 * 00000001800B7C93: lea     rcx, [rbp+9E40h+var_42D0]; Src
 * 00000001800B7C9A: call    sub_18007C338
 * 00000001800B7C9F: nop
 * 00000001800B7CA0: mov     r8, rax
 * 00000001800B7CA3: mov     rdx, r13
 * 00000001800B7CA6: lea     rcx, [rbp+9E40h+var_42F0]
 * 00000001800B7CAD: call    sub_18001C6E8
 * 00000001800B7CB2: nop
 * 00000001800B7CB3: lea     r8, aPixel; "/Pixel"
 * 00000001800B7CBA: mov     rdx, rax
 * 00000001800B7CBD: lea     rcx, [rbp+9E40h+var_5D10]
 * 00000001800B7CC4: call    sub_18001C61C
 * 00000001800B7CC9: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B7CCE: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B7CD3: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B7CD8: mov     rcx, rax
 * 00000001800B7CDB: call    sub_18007C3DC
 * 00000001800B7CE0: nop
 * 00000001800B7CE1: lea     rcx, [rbp+9E40h+var_42F0]
 * 00000001800B7CE8: call    sub_180010F30
 * 00000001800B7CED: nop
 * 00000001800B7CEE: lea     rcx, [rbp+9E40h+var_42D0]
 * 00000001800B7CF5: call    sub_180010F30
 * 00000001800B7CFA: nop
 * 00000001800B7CFB: lea     rcx, dword_1801D93C0
 * 00000001800B7D02: call    sub_18000C538
 * 00000001800B7D07: mov     rax, [rdi+rbx*8]
 * 00000001800B7D0B: mov     eax, [r15+rax]
 * 00000001800B7D0F: cmp     cs:dword_1801D93C4, eax
 * 00000001800B7D15: jle     loc_1800B7DF6
 * 00000001800B7D1B: lea     rcx, dword_1801D93C4
 * 00000001800B7D22: call    sub_18000C5A0
 * 00000001800B7D27: cmp     cs:dword_1801D93C4, r14d
 * 00000001800B7D2E: jnz     loc_1800B7DF6
 * 00000001800B7D34: call    sub_1800B19DC
 * 00000001800B7D39: mov     qword ptr [rbp+9E40h+var_9870], rax
 * 00000001800B7D40: add     rax, 6908h
 * 00000001800B7D46: mov     qword ptr [rbp+9E40h+var_9870+8], rax
 * 00000001800B7D4D: movups  xmm7, [rbp+9E40h+var_9870]
 * 00000001800B7D54: movups  [rbp+9E40h+var_8050], xmm7
 * 00000001800B7D5B: mov     dword ptr [rbp+9E40h+var_8040], 5
 * 00000001800B7D65: mov     dword ptr [rbp+9E40h+var_8040+4], esi
 * 00000001800B7D6B: movups  xmm6, [rbp+9E40h+var_8040]
 * 00000001800B7D72: call    sub_1800B1A0C
 * 00000001800B7D77: mov     r8, rax
 * 00000001800B7D7A: mov     r9d, r12d
 * 00000001800B7D7D: mov     edx, 170h
 * 00000001800B7D82: lea     rcx, [rbp+9E40h+var_4270]; Src
 * 00000001800B7D89: call    sub_18007C338
 * 00000001800B7D8E: nop
 * 00000001800B7D8F: mov     r8, rax
 * 00000001800B7D92: mov     rdx, r13
 * 00000001800B7D95: lea     rcx, [rbp+9E40h+var_4290]
 * 00000001800B7D9C: call    sub_18001C6E8
 * 00000001800B7DA1: nop
 * 00000001800B7DA2: lea     r8, aPixel; "/Pixel"
 * 00000001800B7DA9: mov     rdx, rax
 * 00000001800B7DAC: lea     rcx, [rbp+9E40h+var_5CF0]
 * 00000001800B7DB3: call    sub_18001C61C
 * 00000001800B7DB8: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B7DBD: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B7DC2: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B7DC7: mov     rcx, rax
 * 00000001800B7DCA: call    sub_18007C3DC
 * 00000001800B7DCF: nop
 * 00000001800B7DD0: lea     rcx, [rbp+9E40h+var_4290]
 * 00000001800B7DD7: call    sub_180010F30
 * 00000001800B7DDC: nop
 * 00000001800B7DDD: lea     rcx, [rbp+9E40h+var_4270]
 * 00000001800B7DE4: call    sub_180010F30
 * 00000001800B7DE9: nop
 * 00000001800B7DEA: lea     rcx, dword_1801D93C4
 * 00000001800B7DF1: call    sub_18000C538
 * 00000001800B7DF6: mov     rax, [rdi+rbx*8]
 * 00000001800B7DFA: mov     eax, [r15+rax]
 * 00000001800B7DFE: cmp     cs:dword_1801D93C8, eax
 * 00000001800B7E04: jle     loc_1800B7EE5
 * 00000001800B7E0A: lea     rcx, dword_1801D93C8
 * 00000001800B7E11: call    sub_18000C5A0
 * 00000001800B7E16: cmp     cs:dword_1801D93C8, r14d
 * 00000001800B7E1D: jnz     loc_1800B7EE5
 * 00000001800B7E23: call    sub_1800B19DC
 * 00000001800B7E28: mov     qword ptr [rbp+9E40h+var_9860], rax
 * 00000001800B7E2F: add     rax, 6908h
 * 00000001800B7E35: mov     qword ptr [rbp+9E40h+var_9860+8], rax
 * 00000001800B7E3C: movups  xmm7, [rbp+9E40h+var_9860]
 * 00000001800B7E43: movups  [rbp+9E40h+var_8030], xmm7
 * 00000001800B7E4A: mov     dword ptr [rbp+9E40h+var_8020], 5
 * 00000001800B7E54: mov     dword ptr [rbp+9E40h+var_8020+4], esi
 * 00000001800B7E5A: movups  xmm6, [rbp+9E40h+var_8020]
 * 00000001800B7E61: call    sub_1800B1A0C
 * 00000001800B7E66: mov     r8, rax
 * 00000001800B7E69: mov     r9d, r12d
 * 00000001800B7E6C: mov     edx, 172h
 * 00000001800B7E71: lea     rcx, [rbp+9E40h+var_4210]; Src
 * 00000001800B7E78: call    sub_18007C338
 * 00000001800B7E7D: nop
 * 00000001800B7E7E: mov     r8, rax
 * 00000001800B7E81: mov     rdx, r13
 * 00000001800B7E84: lea     rcx, [rbp+9E40h+var_4230]
 * 00000001800B7E8B: call    sub_18001C6E8
 * 00000001800B7E90: nop
 * 00000001800B7E91: lea     r8, aPixel; "/Pixel"
 * 00000001800B7E98: mov     rdx, rax
 * 00000001800B7E9B: lea     rcx, [rbp+9E40h+var_5CD0]
 * 00000001800B7EA2: call    sub_18001C61C
 * 00000001800B7EA7: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B7EAC: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B7EB1: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B7EB6: mov     rcx, rax
 * 00000001800B7EB9: call    sub_18007C3DC
 * 00000001800B7EBE: nop
 * 00000001800B7EBF: lea     rcx, [rbp+9E40h+var_4230]
 * 00000001800B7EC6: call    sub_180010F30
 * 00000001800B7ECB: nop
 * 00000001800B7ECC: lea     rcx, [rbp+9E40h+var_4210]
 * 00000001800B7ED3: call    sub_180010F30
 * 00000001800B7ED8: nop
 * 00000001800B7ED9: lea     rcx, dword_1801D93C8
 * 00000001800B7EE0: call    sub_18000C538
 * 00000001800B7EE5: mov     rax, [rdi+rbx*8]
 * 00000001800B7EE9: mov     eax, [r15+rax]
 * 00000001800B7EED: cmp     cs:dword_1801D93CC, eax
 * 00000001800B7EF3: jle     loc_1800B7FD4
 * 00000001800B7EF9: lea     rcx, dword_1801D93CC
 * 00000001800B7F00: call    sub_18000C5A0
 * 00000001800B7F05: cmp     cs:dword_1801D93CC, r14d
 * 00000001800B7F0C: jnz     loc_1800B7FD4
 * 00000001800B7F12: call    sub_1800B19FC
 * 00000001800B7F17: mov     qword ptr [rbp+9E40h+var_9850], rax
 * 00000001800B7F1E: add     rax, 6ABCh
 * 00000001800B7F24: mov     qword ptr [rbp+9E40h+var_9850+8], rax
 * 00000001800B7F2B: movups  xmm7, [rbp+9E40h+var_9850]
 * 00000001800B7F32: movups  [rbp+9E40h+var_8010], xmm7
 * 00000001800B7F39: mov     dword ptr [rbp+9E40h+var_8000], 5
 * 00000001800B7F43: mov     dword ptr [rbp+9E40h+var_8000+4], esi
 * 00000001800B7F49: movups  xmm6, [rbp+9E40h+var_8000]
 * 00000001800B7F50: call    sub_1800B1A0C
 * 00000001800B7F55: mov     r8, rax
 * 00000001800B7F58: mov     r9d, r12d
 * 00000001800B7F5B: mov     edx, 178h
 * 00000001800B7F60: lea     rcx, [rbp+9E40h+var_41B0]; Src
 * 00000001800B7F67: call    sub_18007C338
 * 00000001800B7F6C: nop
 * 00000001800B7F6D: mov     r8, rax
 * 00000001800B7F70: mov     rdx, r13
 * 00000001800B7F73: lea     rcx, [rbp+9E40h+var_41D0]
 * 00000001800B7F7A: call    sub_18001C6E8
 * 00000001800B7F7F: nop
 * 00000001800B7F80: lea     r8, aPixel; "/Pixel"
 * 00000001800B7F87: mov     rdx, rax
 * 00000001800B7F8A: lea     rcx, [rbp+9E40h+var_5CB0]
 * 00000001800B7F91: call    sub_18001C61C
 * 00000001800B7F96: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B7F9B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B7FA0: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B7FA5: mov     rcx, rax
 * 00000001800B7FA8: call    sub_18007C3DC
 * 00000001800B7FAD: nop
 * 00000001800B7FAE: lea     rcx, [rbp+9E40h+var_41D0]
 * 00000001800B7FB5: call    sub_180010F30
 * 00000001800B7FBA: nop
 * 00000001800B7FBB: lea     rcx, [rbp+9E40h+var_41B0]
 * 00000001800B7FC2: call    sub_180010F30
 * 00000001800B7FC7: nop
 * 00000001800B7FC8: lea     rcx, dword_1801D93CC
 * 00000001800B7FCF: call    sub_18000C538
 * 00000001800B7FD4: mov     rax, [rdi+rbx*8]
 * 00000001800B7FD8: mov     eax, [r15+rax]
 * 00000001800B7FDC: cmp     cs:dword_1801D93D0, eax
 * 00000001800B7FE2: jle     loc_1800B80C3
 * 00000001800B7FE8: lea     rcx, dword_1801D93D0
 * 00000001800B7FEF: call    sub_18000C5A0
 * 00000001800B7FF4: cmp     cs:dword_1801D93D0, r14d
 * 00000001800B7FFB: jnz     loc_1800B80C3
 * 00000001800B8001: call    sub_1800B19FC
 * 00000001800B8006: mov     qword ptr [rbp+9E40h+var_9840], rax
 * 00000001800B800D: add     rax, 6ABCh
 * 00000001800B8013: mov     qword ptr [rbp+9E40h+var_9840+8], rax
 * 00000001800B801A: movups  xmm7, [rbp+9E40h+var_9840]
 * 00000001800B8021: movups  [rbp+9E40h+var_7FF0], xmm7
 * 00000001800B8028: mov     dword ptr [rbp+9E40h+var_7FE0], 5
 * 00000001800B8032: mov     dword ptr [rbp+9E40h+var_7FE0+4], esi
 * 00000001800B8038: movups  xmm6, [rbp+9E40h+var_7FE0]
 * 00000001800B803F: call    sub_1800B1A0C
 * 00000001800B8044: mov     r8, rax
 * 00000001800B8047: mov     r9d, r12d
 * 00000001800B804A: mov     edx, 17Ah
 * 00000001800B804F: lea     rcx, [rbp+9E40h+var_4150]; Src
 * 00000001800B8056: call    sub_18007C338
 * 00000001800B805B: nop
 * 00000001800B805C: mov     r8, rax
 * 00000001800B805F: mov     rdx, r13
 * 00000001800B8062: lea     rcx, [rbp+9E40h+var_4170]
 * 00000001800B8069: call    sub_18001C6E8
 * 00000001800B806E: nop
 * 00000001800B806F: lea     r8, aPixel; "/Pixel"
 * 00000001800B8076: mov     rdx, rax
 * 00000001800B8079: lea     rcx, [rbp+9E40h+var_5C90]
 * 00000001800B8080: call    sub_18001C61C
 * 00000001800B8085: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B808A: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B808F: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B8094: mov     rcx, rax
 * 00000001800B8097: call    sub_18007C3DC
 * 00000001800B809C: nop
 * 00000001800B809D: lea     rcx, [rbp+9E40h+var_4170]
 * 00000001800B80A4: call    sub_180010F30
 * 00000001800B80A9: nop
 * 00000001800B80AA: lea     rcx, [rbp+9E40h+var_4150]
 * 00000001800B80B1: call    sub_180010F30
 * 00000001800B80B6: nop
 * 00000001800B80B7: lea     rcx, dword_1801D93D0
 * 00000001800B80BE: call    sub_18000C538
 * 00000001800B80C3: mov     rax, [rdi+rbx*8]
 * 00000001800B80C7: mov     eax, [r15+rax]
 * 00000001800B80CB: cmp     cs:dword_1801D93D4, eax
 * 00000001800B80D1: jle     loc_1800B81B2
 * 00000001800B80D7: lea     rcx, dword_1801D93D4
 * 00000001800B80DE: call    sub_18000C5A0
 * 00000001800B80E3: cmp     cs:dword_1801D93D4, r14d
 * 00000001800B80EA: jnz     loc_1800B81B2
 * 00000001800B80F0: call    sub_1800B19AC
 * 00000001800B80F5: mov     qword ptr [rbp+9E40h+var_9830], rax
 * 00000001800B80FC: add     rax, 672Ch
 * 00000001800B8102: mov     qword ptr [rbp+9E40h+var_9830+8], rax
 * 00000001800B8109: movups  xmm7, [rbp+9E40h+var_9830]
 * 00000001800B8110: movups  [rbp+9E40h+var_7FD0], xmm7
 * 00000001800B8117: mov     dword ptr [rbp+9E40h+var_7FC0], 5
 * 00000001800B8121: mov     dword ptr [rbp+9E40h+var_7FC0+4], esi
 * 00000001800B8127: movups  xmm6, [rbp+9E40h+var_7FC0]
 * 00000001800B812E: call    sub_1800B1A0C
 * 00000001800B8133: mov     r8, rax
 * 00000001800B8136: mov     r9d, r12d
 * 00000001800B8139: mov     edx, 180h
 * 00000001800B813E: lea     rcx, [rbp+9E40h+var_40F0]; Src
 * 00000001800B8145: call    sub_18007C338
 * 00000001800B814A: nop
 * 00000001800B814B: mov     r8, rax
 * 00000001800B814E: mov     rdx, r13
 * 00000001800B8151: lea     rcx, [rbp+9E40h+var_4110]
 * 00000001800B8158: call    sub_18001C6E8
 * 00000001800B815D: nop
 * 00000001800B815E: lea     r8, aPixel; "/Pixel"
 * 00000001800B8165: mov     rdx, rax
 * 00000001800B8168: lea     rcx, [rbp+9E40h+var_5C70]
 * 00000001800B816F: call    sub_18001C61C
 * 00000001800B8174: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B8179: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B817E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B8183: mov     rcx, rax
 * 00000001800B8186: call    sub_18007C3DC
 * 00000001800B818B: nop
 * 00000001800B818C: lea     rcx, [rbp+9E40h+var_4110]
 * 00000001800B8193: call    sub_180010F30
 * 00000001800B8198: nop
 * 00000001800B8199: lea     rcx, [rbp+9E40h+var_40F0]
 * 00000001800B81A0: call    sub_180010F30
 * 00000001800B81A5: nop
 * 00000001800B81A6: lea     rcx, dword_1801D93D4
 * 00000001800B81AD: call    sub_18000C538
 * 00000001800B81B2: mov     rax, [rdi+rbx*8]
 * 00000001800B81B6: mov     eax, [r15+rax]
 * 00000001800B81BA: cmp     cs:dword_1801D93D8, eax
 * 00000001800B81C0: jle     loc_1800B82A1
 * 00000001800B81C6: lea     rcx, dword_1801D93D8
 * 00000001800B81CD: call    sub_18000C5A0
 * 00000001800B81D2: cmp     cs:dword_1801D93D8, r14d
 * 00000001800B81D9: jnz     loc_1800B82A1
 * 00000001800B81DF: call    sub_1800B19AC
 * 00000001800B81E4: mov     qword ptr [rbp+9E40h+var_9820], rax
 * 00000001800B81EB: add     rax, 672Ch
 * 00000001800B81F1: mov     qword ptr [rbp+9E40h+var_9820+8], rax
 * 00000001800B81F8: movups  xmm7, [rbp+9E40h+var_9820]
 * 00000001800B81FF: movups  [rbp+9E40h+var_7FB0], xmm7
 * 00000001800B8206: mov     dword ptr [rbp+9E40h+var_7FA0], 5
 * 00000001800B8210: mov     dword ptr [rbp+9E40h+var_7FA0+4], esi
 * 00000001800B8216: movups  xmm6, [rbp+9E40h+var_7FA0]
 * 00000001800B821D: call    sub_1800B1A0C
 * 00000001800B8222: mov     r8, rax
 * 00000001800B8225: mov     r9d, r12d
 * 00000001800B8228: mov     edx, 182h
 * 00000001800B822D: lea     rcx, [rbp+9E40h+var_4090]; Src
 * 00000001800B8234: call    sub_18007C338
 * 00000001800B8239: nop
 * 00000001800B823A: mov     r8, rax
 * 00000001800B823D: mov     rdx, r13
 * 00000001800B8240: lea     rcx, [rbp+9E40h+var_40B0]
 * 00000001800B8247: call    sub_18001C6E8
 * 00000001800B824C: nop
 * 00000001800B824D: lea     r8, aPixel; "/Pixel"
 * 00000001800B8254: mov     rdx, rax
 * 00000001800B8257: lea     rcx, [rbp+9E40h+var_5C50]
 * 00000001800B825E: call    sub_18001C61C
 * 00000001800B8263: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B8268: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B826D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B8272: mov     rcx, rax
 * 00000001800B8275: call    sub_18007C3DC
 * 00000001800B827A: nop
 * 00000001800B827B: lea     rcx, [rbp+9E40h+var_40B0]
 * 00000001800B8282: call    sub_180010F30
 * 00000001800B8287: nop
 * 00000001800B8288: lea     rcx, [rbp+9E40h+var_4090]
 * 00000001800B828F: call    sub_180010F30
 * 00000001800B8294: nop
 * 00000001800B8295: lea     rcx, dword_1801D93D8
 * 00000001800B829C: call    sub_18000C538
 * 00000001800B82A1: mov     rax, [rdi+rbx*8]
 * 00000001800B82A5: mov     eax, [r15+rax]
 * 00000001800B82A9: cmp     cs:dword_1801D93DC, eax
 * 00000001800B82AF: jle     loc_1800B8390
 * 00000001800B82B5: lea     rcx, dword_1801D93DC
 * 00000001800B82BC: call    sub_18000C5A0
 * 00000001800B82C1: cmp     cs:dword_1801D93DC, r14d
 * 00000001800B82C8: jnz     loc_1800B8390
 * 00000001800B82CE: call    sub_1800B19CC
 * 00000001800B82D3: mov     qword ptr [rbp+9E40h+var_9810], rax
 * 00000001800B82DA: add     rax, 68BCh
 * 00000001800B82E0: mov     qword ptr [rbp+9E40h+var_9810+8], rax
 * 00000001800B82E7: movups  xmm7, [rbp+9E40h+var_9810]
 * 00000001800B82EE: movups  [rbp+9E40h+var_7F90], xmm7
 * 00000001800B82F5: mov     dword ptr [rbp+9E40h+var_7F80], 5
 * 00000001800B82FF: mov     dword ptr [rbp+9E40h+var_7F80+4], esi
 * 00000001800B8305: movups  xmm6, [rbp+9E40h+var_7F80]
 * 00000001800B830C: call    sub_1800B1A0C
 * 00000001800B8311: mov     r8, rax
 * 00000001800B8314: mov     r9d, r12d
 * 00000001800B8317: mov     edx, 188h
 * 00000001800B831C: lea     rcx, [rbp+9E40h+var_4030]; Src
 * 00000001800B8323: call    sub_18007C338
 * 00000001800B8328: nop
 * 00000001800B8329: mov     r8, rax
 * 00000001800B832C: mov     rdx, r13
 * 00000001800B832F: lea     rcx, [rbp+9E40h+var_4050]
 * 00000001800B8336: call    sub_18001C6E8
 * 00000001800B833B: nop
 * 00000001800B833C: lea     r8, aPixel; "/Pixel"
 * 00000001800B8343: mov     rdx, rax
 * 00000001800B8346: lea     rcx, [rbp+9E40h+var_5C30]
 * 00000001800B834D: call    sub_18001C61C
 * 00000001800B8352: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B8357: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B835C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B8361: mov     rcx, rax
 * 00000001800B8364: call    sub_18007C3DC
 * 00000001800B8369: nop
 * 00000001800B836A: lea     rcx, [rbp+9E40h+var_4050]
 * 00000001800B8371: call    sub_180010F30
 * 00000001800B8376: nop
 * 00000001800B8377: lea     rcx, [rbp+9E40h+var_4030]
 * 00000001800B837E: call    sub_180010F30
 * 00000001800B8383: nop
 * 00000001800B8384: lea     rcx, dword_1801D93DC
 * 00000001800B838B: call    sub_18000C538
 * 00000001800B8390: mov     rax, [rdi+rbx*8]
 * 00000001800B8394: mov     eax, [r15+rax]
 * 00000001800B8398: cmp     cs:dword_1801D93E0, eax
 * 00000001800B839E: jle     loc_1800B847F
 * 00000001800B83A4: lea     rcx, dword_1801D93E0
 * 00000001800B83AB: call    sub_18000C5A0
 * 00000001800B83B0: cmp     cs:dword_1801D93E0, r14d
 * 00000001800B83B7: jnz     loc_1800B847F
 * 00000001800B83BD: call    sub_1800B19CC
 * 00000001800B83C2: mov     qword ptr [rbp+9E40h+var_9800], rax
 * 00000001800B83C9: add     rax, 68BCh
 * 00000001800B83CF: mov     qword ptr [rbp+9E40h+var_9800+8], rax
 * 00000001800B83D6: movups  xmm7, [rbp+9E40h+var_9800]
 * 00000001800B83DD: movups  [rbp+9E40h+var_7F70], xmm7
 * 00000001800B83E4: mov     dword ptr [rbp+9E40h+var_7F60], 5
 * 00000001800B83EE: mov     dword ptr [rbp+9E40h+var_7F60+4], esi
 * 00000001800B83F4: movups  xmm6, [rbp+9E40h+var_7F60]
 * 00000001800B83FB: call    sub_1800B1A0C
 * 00000001800B8400: mov     r8, rax
 * 00000001800B8403: mov     r9d, r12d
 * 00000001800B8406: mov     edx, 18Ah
 * 00000001800B840B: lea     rcx, [rbp+9E40h+var_3FD0]; Src
 * 00000001800B8412: call    sub_18007C338
 * 00000001800B8417: nop
 * 00000001800B8418: mov     r8, rax
 * 00000001800B841B: mov     rdx, r13
 * 00000001800B841E: lea     rcx, [rbp+9E40h+var_3FF0]
 * 00000001800B8425: call    sub_18001C6E8
 * 00000001800B842A: nop
 * 00000001800B842B: lea     r8, aPixel; "/Pixel"
 * 00000001800B8432: mov     rdx, rax
 * 00000001800B8435: lea     rcx, [rbp+9E40h+var_5C10]
 * 00000001800B843C: call    sub_18001C61C
 * 00000001800B8441: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B8446: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B844B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B8450: mov     rcx, rax
 * 00000001800B8453: call    sub_18007C3DC
 * 00000001800B8458: nop
 * 00000001800B8459: lea     rcx, [rbp+9E40h+var_3FF0]
 * 00000001800B8460: call    sub_180010F30
 * 00000001800B8465: nop
 * 00000001800B8466: lea     rcx, [rbp+9E40h+var_3FD0]
 * 00000001800B846D: call    sub_180010F30
 * 00000001800B8472: nop
 * 00000001800B8473: lea     rcx, dword_1801D93E0
 * 00000001800B847A: call    sub_18000C538
 * 00000001800B847F: mov     rax, [rdi+rbx*8]
 * 00000001800B8483: mov     eax, [r15+rax]
 * 00000001800B8487: cmp     cs:dword_1801D93E4, eax
 * 00000001800B848D: jle     loc_1800B856E
 * 00000001800B8493: lea     rcx, dword_1801D93E4
 * 00000001800B849A: call    sub_18000C5A0
 * 00000001800B849F: cmp     cs:dword_1801D93E4, r14d
 * 00000001800B84A6: jnz     loc_1800B856E
 * 00000001800B84AC: call    sub_1800B19DC
 * 00000001800B84B1: mov     qword ptr [rbp+9E40h+var_97F0], rax
 * 00000001800B84B8: add     rax, 6908h
 * 00000001800B84BE: mov     qword ptr [rbp+9E40h+var_97F0+8], rax
 * 00000001800B84C5: movups  xmm7, [rbp+9E40h+var_97F0]
 * 00000001800B84CC: movups  [rbp+9E40h+var_7F50], xmm7
 * 00000001800B84D3: mov     dword ptr [rbp+9E40h+var_7F40], 5
 * 00000001800B84DD: mov     dword ptr [rbp+9E40h+var_7F40+4], esi
 * 00000001800B84E3: movups  xmm6, [rbp+9E40h+var_7F40]
 * 00000001800B84EA: call    sub_1800B1A0C
 * 00000001800B84EF: mov     r8, rax
 * 00000001800B84F2: mov     r9d, r12d
 * 00000001800B84F5: mov     edx, 190h
 * 00000001800B84FA: lea     rcx, [rbp+9E40h+var_3F70]; Src
 * 00000001800B8501: call    sub_18007C338
 * 00000001800B8506: nop
 * 00000001800B8507: mov     r8, rax
 * 00000001800B850A: mov     rdx, r13
 * 00000001800B850D: lea     rcx, [rbp+9E40h+var_3F90]
 * 00000001800B8514: call    sub_18001C6E8
 * 00000001800B8519: nop
 * 00000001800B851A: lea     r8, aPixel; "/Pixel"
 * 00000001800B8521: mov     rdx, rax
 * 00000001800B8524: lea     rcx, [rbp+9E40h+var_5BF0]
 * 00000001800B852B: call    sub_18001C61C
 * 00000001800B8530: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B8535: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B853A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B853F: mov     rcx, rax
 * 00000001800B8542: call    sub_18007C3DC
 * 00000001800B8547: nop
 * 00000001800B8548: lea     rcx, [rbp+9E40h+var_3F90]
 * 00000001800B854F: call    sub_180010F30
 * 00000001800B8554: nop
 * 00000001800B8555: lea     rcx, [rbp+9E40h+var_3F70]
 * 00000001800B855C: call    sub_180010F30
 * 00000001800B8561: nop
 * 00000001800B8562: lea     rcx, dword_1801D93E4
 * 00000001800B8569: call    sub_18000C538
 * 00000001800B856E: mov     rax, [rdi+rbx*8]
 * 00000001800B8572: mov     eax, [r15+rax]
 * 00000001800B8576: cmp     cs:dword_1801D93E8, eax
 * 00000001800B857C: jle     loc_1800B865D
 * 00000001800B8582: lea     rcx, dword_1801D93E8
 * 00000001800B8589: call    sub_18000C5A0
 * 00000001800B858E: cmp     cs:dword_1801D93E8, r14d
 * 00000001800B8595: jnz     loc_1800B865D
 * 00000001800B859B: call    sub_1800B19DC
 * 00000001800B85A0: mov     qword ptr [rbp+9E40h+var_97E0], rax
 * 00000001800B85A7: add     rax, 6908h
 * 00000001800B85AD: mov     qword ptr [rbp+9E40h+var_97E0+8], rax
 * 00000001800B85B4: movups  xmm7, [rbp+9E40h+var_97E0]
 * 00000001800B85BB: movups  [rbp+9E40h+var_7F30], xmm7
 * 00000001800B85C2: mov     dword ptr [rbp+9E40h+var_7F20], 5
 * 00000001800B85CC: mov     dword ptr [rbp+9E40h+var_7F20+4], esi
 * 00000001800B85D2: movups  xmm6, [rbp+9E40h+var_7F20]
 * 00000001800B85D9: call    sub_1800B1A0C
 * 00000001800B85DE: mov     r8, rax
 * 00000001800B85E1: mov     r9d, r12d
 * 00000001800B85E4: mov     edx, 192h
 * 00000001800B85E9: lea     rcx, [rbp+9E40h+var_3F10]; Src
 * 00000001800B85F0: call    sub_18007C338
 * 00000001800B85F5: nop
 * 00000001800B85F6: mov     r8, rax
 * 00000001800B85F9: mov     rdx, r13
 * 00000001800B85FC: lea     rcx, [rbp+9E40h+var_3F30]
 * 00000001800B8603: call    sub_18001C6E8
 * 00000001800B8608: nop
 * 00000001800B8609: lea     r8, aPixel; "/Pixel"
 * 00000001800B8610: mov     rdx, rax
 * 00000001800B8613: lea     rcx, [rbp+9E40h+var_5BD0]
 * 00000001800B861A: call    sub_18001C61C
 * 00000001800B861F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B8624: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B8629: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B862E: mov     rcx, rax
 * 00000001800B8631: call    sub_18007C3DC
 * 00000001800B8636: nop
 * 00000001800B8637: lea     rcx, [rbp+9E40h+var_3F30]
 * 00000001800B863E: call    sub_180010F30
 * 00000001800B8643: nop
 * 00000001800B8644: lea     rcx, [rbp+9E40h+var_3F10]
 * 00000001800B864B: call    sub_180010F30
 * 00000001800B8650: nop
 * 00000001800B8651: lea     rcx, dword_1801D93E8
 * 00000001800B8658: call    sub_18000C538
 * 00000001800B865D: mov     rax, [rdi+rbx*8]
 * 00000001800B8661: mov     eax, [r15+rax]
 * 00000001800B8665: cmp     cs:dword_1801D93EC, eax
 * 00000001800B866B: jle     loc_1800B874C
 * 00000001800B8671: lea     rcx, dword_1801D93EC
 * 00000001800B8678: call    sub_18000C5A0
 * 00000001800B867D: cmp     cs:dword_1801D93EC, r14d
 * 00000001800B8684: jnz     loc_1800B874C
 * 00000001800B868A: call    sub_1800B19FC
 * 00000001800B868F: mov     qword ptr [rbp+9E40h+var_97D0], rax
 * 00000001800B8696: add     rax, 6ABCh
 * 00000001800B869C: mov     qword ptr [rbp+9E40h+var_97D0+8], rax
 * 00000001800B86A3: movups  xmm7, [rbp+9E40h+var_97D0]
 * 00000001800B86AA: movups  [rbp+9E40h+var_7F10], xmm7
 * 00000001800B86B1: mov     dword ptr [rbp+9E40h+var_7F00], 5
 * 00000001800B86BB: mov     dword ptr [rbp+9E40h+var_7F00+4], esi
 * 00000001800B86C1: movups  xmm6, [rbp+9E40h+var_7F00]
 * 00000001800B86C8: call    sub_1800B1A0C
 * 00000001800B86CD: mov     r8, rax
 * 00000001800B86D0: mov     r9d, r12d
 * 00000001800B86D3: mov     edx, 198h
 * 00000001800B86D8: lea     rcx, [rbp+9E40h+var_3EB0]; Src
 * 00000001800B86DF: call    sub_18007C338
 * 00000001800B86E4: nop
 * 00000001800B86E5: mov     r8, rax
 * 00000001800B86E8: mov     rdx, r13
 * 00000001800B86EB: lea     rcx, [rbp+9E40h+var_3ED0]
 * 00000001800B86F2: call    sub_18001C6E8
 * 00000001800B86F7: nop
 * 00000001800B86F8: lea     r8, aPixel; "/Pixel"
 * 00000001800B86FF: mov     rdx, rax
 * 00000001800B8702: lea     rcx, [rbp+9E40h+var_5BB0]
 * 00000001800B8709: call    sub_18001C61C
 * 00000001800B870E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B8713: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B8718: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B871D: mov     rcx, rax
 * 00000001800B8720: call    sub_18007C3DC
 * 00000001800B8725: nop
 * 00000001800B8726: lea     rcx, [rbp+9E40h+var_3ED0]
 * 00000001800B872D: call    sub_180010F30
 * 00000001800B8732: nop
 * 00000001800B8733: lea     rcx, [rbp+9E40h+var_3EB0]
 * 00000001800B873A: call    sub_180010F30
 * 00000001800B873F: nop
 * 00000001800B8740: lea     rcx, dword_1801D93EC
 * 00000001800B8747: call    sub_18000C538
 * 00000001800B874C: mov     rax, [rdi+rbx*8]
 * 00000001800B8750: mov     eax, [r15+rax]
 * 00000001800B8754: cmp     cs:dword_1801D93F0, eax
 * 00000001800B875A: jle     loc_1800B883B
 * 00000001800B8760: lea     rcx, dword_1801D93F0
 * 00000001800B8767: call    sub_18000C5A0
 * 00000001800B876C: cmp     cs:dword_1801D93F0, r14d
 * 00000001800B8773: jnz     loc_1800B883B
 * 00000001800B8779: call    sub_1800B19FC
 * 00000001800B877E: mov     qword ptr [rbp+9E40h+var_97C0], rax
 * 00000001800B8785: add     rax, 6ABCh
 * 00000001800B878B: mov     qword ptr [rbp+9E40h+var_97C0+8], rax
 * 00000001800B8792: movups  xmm7, [rbp+9E40h+var_97C0]
 * 00000001800B8799: movups  [rbp+9E40h+var_7EF0], xmm7
 * 00000001800B87A0: mov     dword ptr [rbp+9E40h+var_7EE0], 5
 * 00000001800B87AA: mov     dword ptr [rbp+9E40h+var_7EE0+4], esi
 * 00000001800B87B0: movups  xmm6, [rbp+9E40h+var_7EE0]
 * 00000001800B87B7: call    sub_1800B1A0C
 * 00000001800B87BC: mov     r8, rax
 * 00000001800B87BF: mov     r9d, r12d
 * 00000001800B87C2: mov     edx, 19Ah
 * 00000001800B87C7: lea     rcx, [rbp+9E40h+var_3E50]; Src
 * 00000001800B87CE: call    sub_18007C338
 * 00000001800B87D3: nop
 * 00000001800B87D4: mov     r8, rax
 * 00000001800B87D7: mov     rdx, r13
 * 00000001800B87DA: lea     rcx, [rbp+9E40h+var_3E70]
 * 00000001800B87E1: call    sub_18001C6E8
 * 00000001800B87E6: nop
 * 00000001800B87E7: lea     r8, aPixel; "/Pixel"
 * 00000001800B87EE: mov     rdx, rax
 * 00000001800B87F1: lea     rcx, [rbp+9E40h+var_5B90]
 * 00000001800B87F8: call    sub_18001C61C
 * 00000001800B87FD: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B8802: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B8807: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B880C: mov     rcx, rax
 * 00000001800B880F: call    sub_18007C3DC
 * 00000001800B8814: nop
 * 00000001800B8815: lea     rcx, [rbp+9E40h+var_3E70]
 * 00000001800B881C: call    sub_180010F30
 * 00000001800B8821: nop
 * 00000001800B8822: lea     rcx, [rbp+9E40h+var_3E50]
 * 00000001800B8829: call    sub_180010F30
 * 00000001800B882E: nop
 * 00000001800B882F: lea     rcx, dword_1801D93F0
 * 00000001800B8836: call    sub_18000C538
 * 00000001800B883B: mov     rax, [rdi+rbx*8]
 * 00000001800B883F: mov     eax, [r15+rax]
 * 00000001800B8843: cmp     cs:dword_1801D93F4, eax
 * 00000001800B8849: jle     loc_1800B892A
 * 00000001800B884F: lea     rcx, dword_1801D93F4
 * 00000001800B8856: call    sub_18000C5A0
 * 00000001800B885B: cmp     cs:dword_1801D93F4, r14d
 * 00000001800B8862: jnz     loc_1800B892A
 * 00000001800B8868: call    sub_1800B19AC
 * 00000001800B886D: mov     qword ptr [rbp+9E40h+var_97B0], rax
 * 00000001800B8874: add     rax, 672Ch
 * 00000001800B887A: mov     qword ptr [rbp+9E40h+var_97B0+8], rax
 * 00000001800B8881: movups  xmm7, [rbp+9E40h+var_97B0]
 * 00000001800B8888: movups  [rbp+9E40h+var_7ED0], xmm7
 * 00000001800B888F: mov     dword ptr [rbp+9E40h+var_7EC0], 5
 * 00000001800B8899: mov     dword ptr [rbp+9E40h+var_7EC0+4], esi
 * 00000001800B889F: movups  xmm6, [rbp+9E40h+var_7EC0]
 * 00000001800B88A6: call    sub_1800B1A0C
 * 00000001800B88AB: mov     r8, rax
 * 00000001800B88AE: mov     r9d, r12d
 * 00000001800B88B1: mov     edx, 1A0h
 * 00000001800B88B6: lea     rcx, [rbp+9E40h+var_3DF0]; Src
 * 00000001800B88BD: call    sub_18007C338
 * 00000001800B88C2: nop
 * 00000001800B88C3: mov     r8, rax
 * 00000001800B88C6: mov     rdx, r13
 * 00000001800B88C9: lea     rcx, [rbp+9E40h+var_3E10]
 * 00000001800B88D0: call    sub_18001C6E8
 * 00000001800B88D5: nop
 * 00000001800B88D6: lea     r8, aPixel; "/Pixel"
 * 00000001800B88DD: mov     rdx, rax
 * 00000001800B88E0: lea     rcx, [rbp+9E40h+var_5B70]
 * 00000001800B88E7: call    sub_18001C61C
 * 00000001800B88EC: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B88F1: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B88F6: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B88FB: mov     rcx, rax
 * 00000001800B88FE: call    sub_18007C3DC
 * 00000001800B8903: nop
 * 00000001800B8904: lea     rcx, [rbp+9E40h+var_3E10]
 * 00000001800B890B: call    sub_180010F30
 * 00000001800B8910: nop
 * 00000001800B8911: lea     rcx, [rbp+9E40h+var_3DF0]
 * 00000001800B8918: call    sub_180010F30
 * 00000001800B891D: nop
 * 00000001800B891E: lea     rcx, dword_1801D93F4
 * 00000001800B8925: call    sub_18000C538
 * 00000001800B892A: mov     rax, [rdi+rbx*8]
 * 00000001800B892E: mov     eax, [r15+rax]
 * 00000001800B8932: cmp     cs:dword_1801D93F8, eax
 * 00000001800B8938: jle     loc_1800B8A19
 * 00000001800B893E: lea     rcx, dword_1801D93F8
 * 00000001800B8945: call    sub_18000C5A0
 * 00000001800B894A: cmp     cs:dword_1801D93F8, r14d
 * 00000001800B8951: jnz     loc_1800B8A19
 * 00000001800B8957: call    sub_1800B19AC
 * 00000001800B895C: mov     qword ptr [rbp+9E40h+var_97A0], rax
 * 00000001800B8963: add     rax, 672Ch
 * 00000001800B8969: mov     qword ptr [rbp+9E40h+var_97A0+8], rax
 * 00000001800B8970: movups  xmm7, [rbp+9E40h+var_97A0]
 * 00000001800B8977: movups  [rbp+9E40h+var_7EB0], xmm7
 * 00000001800B897E: mov     dword ptr [rbp+9E40h+var_7EA0], 5
 * 00000001800B8988: mov     dword ptr [rbp+9E40h+var_7EA0+4], esi
 * 00000001800B898E: movups  xmm6, [rbp+9E40h+var_7EA0]
 * 00000001800B8995: call    sub_1800B1A0C
 * 00000001800B899A: mov     r8, rax
 * 00000001800B899D: mov     r9d, r12d
 * 00000001800B89A0: mov     edx, 1A2h
 * 00000001800B89A5: lea     rcx, [rbp+9E40h+var_3D90]; Src
 * 00000001800B89AC: call    sub_18007C338
 * 00000001800B89B1: nop
 * 00000001800B89B2: mov     r8, rax
 * 00000001800B89B5: mov     rdx, r13
 * 00000001800B89B8: lea     rcx, [rbp+9E40h+var_3DB0]
 * 00000001800B89BF: call    sub_18001C6E8
 * 00000001800B89C4: nop
 * 00000001800B89C5: lea     r8, aPixel; "/Pixel"
 * 00000001800B89CC: mov     rdx, rax
 * 00000001800B89CF: lea     rcx, [rbp+9E40h+var_5B50]
 * 00000001800B89D6: call    sub_18001C61C
 * 00000001800B89DB: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B89E0: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B89E5: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B89EA: mov     rcx, rax
 * 00000001800B89ED: call    sub_18007C3DC
 * 00000001800B89F2: nop
 * 00000001800B89F3: lea     rcx, [rbp+9E40h+var_3DB0]
 * 00000001800B89FA: call    sub_180010F30
 * 00000001800B89FF: nop
 * 00000001800B8A00: lea     rcx, [rbp+9E40h+var_3D90]
 * 00000001800B8A07: call    sub_180010F30
 * 00000001800B8A0C: nop
 * 00000001800B8A0D: lea     rcx, dword_1801D93F8
 * 00000001800B8A14: call    sub_18000C538
 * 00000001800B8A19: mov     rax, [rdi+rbx*8]
 * 00000001800B8A1D: mov     eax, [r15+rax]
 * 00000001800B8A21: cmp     cs:dword_1801D93FC, eax
 * 00000001800B8A27: jle     loc_1800B8B08
 * 00000001800B8A2D: lea     rcx, dword_1801D93FC
 * 00000001800B8A34: call    sub_18000C5A0
 * 00000001800B8A39: cmp     cs:dword_1801D93FC, r14d
 * 00000001800B8A40: jnz     loc_1800B8B08
 * 00000001800B8A46: call    sub_1800B19CC
 * 00000001800B8A4B: mov     qword ptr [rbp+9E40h+var_9790], rax
 * 00000001800B8A52: add     rax, 68BCh
 * 00000001800B8A58: mov     qword ptr [rbp+9E40h+var_9790+8], rax
 * 00000001800B8A5F: movups  xmm7, [rbp+9E40h+var_9790]
 * 00000001800B8A66: movups  [rbp+9E40h+var_7E90], xmm7
 * 00000001800B8A6D: mov     dword ptr [rbp+9E40h+var_7E80], 5
 * 00000001800B8A77: mov     dword ptr [rbp+9E40h+var_7E80+4], esi
 * 00000001800B8A7D: movups  xmm6, [rbp+9E40h+var_7E80]
 * 00000001800B8A84: call    sub_1800B1A0C
 * 00000001800B8A89: mov     r8, rax
 * 00000001800B8A8C: mov     r9d, r12d
 * 00000001800B8A8F: mov     edx, 1A8h
 * 00000001800B8A94: lea     rcx, [rbp+9E40h+var_3D30]; Src
 * 00000001800B8A9B: call    sub_18007C338
 * 00000001800B8AA0: nop
 * 00000001800B8AA1: mov     r8, rax
 * 00000001800B8AA4: mov     rdx, r13
 * 00000001800B8AA7: lea     rcx, [rbp+9E40h+var_3D50]
 * 00000001800B8AAE: call    sub_18001C6E8
 * 00000001800B8AB3: nop
 * 00000001800B8AB4: lea     r8, aPixel; "/Pixel"
 * 00000001800B8ABB: mov     rdx, rax
 * 00000001800B8ABE: lea     rcx, [rbp+9E40h+var_5B30]
 * 00000001800B8AC5: call    sub_18001C61C
 * 00000001800B8ACA: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B8ACF: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B8AD4: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B8AD9: mov     rcx, rax
 * 00000001800B8ADC: call    sub_18007C3DC
 * 00000001800B8AE1: nop
 * 00000001800B8AE2: lea     rcx, [rbp+9E40h+var_3D50]
 * 00000001800B8AE9: call    sub_180010F30
 * 00000001800B8AEE: nop
 * 00000001800B8AEF: lea     rcx, [rbp+9E40h+var_3D30]
 * 00000001800B8AF6: call    sub_180010F30
 * 00000001800B8AFB: nop
 * 00000001800B8AFC: lea     rcx, dword_1801D93FC
 * 00000001800B8B03: call    sub_18000C538
 * 00000001800B8B08: mov     rax, [rdi+rbx*8]
 * 00000001800B8B0C: mov     eax, [r15+rax]
 * 00000001800B8B10: cmp     cs:dword_1801D9400, eax
 * 00000001800B8B16: jle     loc_1800B8BF7
 * 00000001800B8B1C: lea     rcx, dword_1801D9400
 * 00000001800B8B23: call    sub_18000C5A0
 * 00000001800B8B28: cmp     cs:dword_1801D9400, r14d
 * 00000001800B8B2F: jnz     loc_1800B8BF7
 * 00000001800B8B35: call    sub_1800B19CC
 * 00000001800B8B3A: mov     qword ptr [rbp+9E40h+var_9780], rax
 * 00000001800B8B41: add     rax, 68BCh
 * 00000001800B8B47: mov     qword ptr [rbp+9E40h+var_9780+8], rax
 * 00000001800B8B4E: movups  xmm7, [rbp+9E40h+var_9780]
 * 00000001800B8B55: movups  [rbp+9E40h+var_7E70], xmm7
 * 00000001800B8B5C: mov     dword ptr [rbp+9E40h+var_7E60], 5
 * 00000001800B8B66: mov     dword ptr [rbp+9E40h+var_7E60+4], esi
 * 00000001800B8B6C: movups  xmm6, [rbp+9E40h+var_7E60]
 * 00000001800B8B73: call    sub_1800B1A0C
 * 00000001800B8B78: mov     r8, rax
 * 00000001800B8B7B: mov     r9d, r12d
 * 00000001800B8B7E: mov     edx, 1AAh
 * 00000001800B8B83: lea     rcx, [rbp+9E40h+var_3CD0]; Src
 * 00000001800B8B8A: call    sub_18007C338
 * 00000001800B8B8F: nop
 * 00000001800B8B90: mov     r8, rax
 * 00000001800B8B93: mov     rdx, r13
 * 00000001800B8B96: lea     rcx, [rbp+9E40h+var_3CF0]
 * 00000001800B8B9D: call    sub_18001C6E8
 * 00000001800B8BA2: nop
 * 00000001800B8BA3: lea     r8, aPixel; "/Pixel"
 * 00000001800B8BAA: mov     rdx, rax
 * 00000001800B8BAD: lea     rcx, [rbp+9E40h+var_5B10]
 * 00000001800B8BB4: call    sub_18001C61C
 * 00000001800B8BB9: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B8BBE: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B8BC3: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B8BC8: mov     rcx, rax
 * 00000001800B8BCB: call    sub_18007C3DC
 * 00000001800B8BD0: nop
 * 00000001800B8BD1: lea     rcx, [rbp+9E40h+var_3CF0]
 * 00000001800B8BD8: call    sub_180010F30
 * 00000001800B8BDD: nop
 * 00000001800B8BDE: lea     rcx, [rbp+9E40h+var_3CD0]
 * 00000001800B8BE5: call    sub_180010F30
 * 00000001800B8BEA: nop
 * 00000001800B8BEB: lea     rcx, dword_1801D9400
 * 00000001800B8BF2: call    sub_18000C538
 * 00000001800B8BF7: mov     rax, [rdi+rbx*8]
 * 00000001800B8BFB: mov     eax, [r15+rax]
 * 00000001800B8BFF: cmp     cs:dword_1801D9404, eax
 * 00000001800B8C05: jle     loc_1800B8CE6
 * 00000001800B8C0B: lea     rcx, dword_1801D9404
 * 00000001800B8C12: call    sub_18000C5A0
 * 00000001800B8C17: cmp     cs:dword_1801D9404, r14d
 * 00000001800B8C1E: jnz     loc_1800B8CE6
 * 00000001800B8C24: call    sub_1800B19DC
 * 00000001800B8C29: mov     qword ptr [rbp+9E40h+var_9770], rax
 * 00000001800B8C30: add     rax, 6908h
 * 00000001800B8C36: mov     qword ptr [rbp+9E40h+var_9770+8], rax
 * 00000001800B8C3D: movups  xmm7, [rbp+9E40h+var_9770]
 * 00000001800B8C44: movups  [rbp+9E40h+var_7E50], xmm7
 * 00000001800B8C4B: mov     dword ptr [rbp+9E40h+var_7E40], 5
 * 00000001800B8C55: mov     dword ptr [rbp+9E40h+var_7E40+4], esi
 * 00000001800B8C5B: movups  xmm6, [rbp+9E40h+var_7E40]
 * 00000001800B8C62: call    sub_1800B1A0C
 * 00000001800B8C67: mov     r8, rax
 * 00000001800B8C6A: mov     r9d, r12d
 * 00000001800B8C6D: mov     edx, 1B0h
 * 00000001800B8C72: lea     rcx, [rbp+9E40h+var_3C70]; Src
 * 00000001800B8C79: call    sub_18007C338
 * 00000001800B8C7E: nop
 * 00000001800B8C7F: mov     r8, rax
 * 00000001800B8C82: mov     rdx, r13
 * 00000001800B8C85: lea     rcx, [rbp+9E40h+var_3C90]
 * 00000001800B8C8C: call    sub_18001C6E8
 * 00000001800B8C91: nop
 * 00000001800B8C92: lea     r8, aPixel; "/Pixel"
 * 00000001800B8C99: mov     rdx, rax
 * 00000001800B8C9C: lea     rcx, [rbp+9E40h+var_5AF0]
 * 00000001800B8CA3: call    sub_18001C61C
 * 00000001800B8CA8: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B8CAD: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B8CB2: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B8CB7: mov     rcx, rax
 * 00000001800B8CBA: call    sub_18007C3DC
 * 00000001800B8CBF: nop
 * 00000001800B8CC0: lea     rcx, [rbp+9E40h+var_3C90]
 * 00000001800B8CC7: call    sub_180010F30
 * 00000001800B8CCC: nop
 * 00000001800B8CCD: lea     rcx, [rbp+9E40h+var_3C70]
 * 00000001800B8CD4: call    sub_180010F30
 * 00000001800B8CD9: nop
 * 00000001800B8CDA: lea     rcx, dword_1801D9404
 * 00000001800B8CE1: call    sub_18000C538
 * 00000001800B8CE6: mov     rax, [rdi+rbx*8]
 * 00000001800B8CEA: mov     eax, [r15+rax]
 * 00000001800B8CEE: cmp     cs:dword_1801D9408, eax
 * 00000001800B8CF4: jle     loc_1800B8DD5
 * 00000001800B8CFA: lea     rcx, dword_1801D9408
 * 00000001800B8D01: call    sub_18000C5A0
 * 00000001800B8D06: cmp     cs:dword_1801D9408, r14d
 * 00000001800B8D0D: jnz     loc_1800B8DD5
 * 00000001800B8D13: call    sub_1800B19DC
 * 00000001800B8D18: mov     qword ptr [rbp+9E40h+var_9760], rax
 * 00000001800B8D1F: add     rax, 6908h
 * 00000001800B8D25: mov     qword ptr [rbp+9E40h+var_9760+8], rax
 * 00000001800B8D2C: movups  xmm7, [rbp+9E40h+var_9760]
 * 00000001800B8D33: movups  [rbp+9E40h+var_7E30], xmm7
 * 00000001800B8D3A: mov     dword ptr [rbp+9E40h+var_7E20], 5
 * 00000001800B8D44: mov     dword ptr [rbp+9E40h+var_7E20+4], esi
 * 00000001800B8D4A: movups  xmm6, [rbp+9E40h+var_7E20]
 * 00000001800B8D51: call    sub_1800B1A0C
 * 00000001800B8D56: mov     r8, rax
 * 00000001800B8D59: mov     r9d, r12d
 * 00000001800B8D5C: mov     edx, 1B2h
 * 00000001800B8D61: lea     rcx, [rbp+9E40h+var_3C10]; Src
 * 00000001800B8D68: call    sub_18007C338
 * 00000001800B8D6D: nop
 * 00000001800B8D6E: mov     r8, rax
 * 00000001800B8D71: mov     rdx, r13
 * 00000001800B8D74: lea     rcx, [rbp+9E40h+var_3C30]
 * 00000001800B8D7B: call    sub_18001C6E8
 * 00000001800B8D80: nop
 * 00000001800B8D81: lea     r8, aPixel; "/Pixel"
 * 00000001800B8D88: mov     rdx, rax
 * 00000001800B8D8B: lea     rcx, [rbp+9E40h+var_5AD0]
 * 00000001800B8D92: call    sub_18001C61C
 * 00000001800B8D97: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B8D9C: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B8DA1: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B8DA6: mov     rcx, rax
 * 00000001800B8DA9: call    sub_18007C3DC
 * 00000001800B8DAE: nop
 * 00000001800B8DAF: lea     rcx, [rbp+9E40h+var_3C30]
 * 00000001800B8DB6: call    sub_180010F30
 * 00000001800B8DBB: nop
 * 00000001800B8DBC: lea     rcx, [rbp+9E40h+var_3C10]
 * 00000001800B8DC3: call    sub_180010F30
 * 00000001800B8DC8: nop
 * 00000001800B8DC9: lea     rcx, dword_1801D9408
 * 00000001800B8DD0: call    sub_18000C538
 * 00000001800B8DD5: mov     rax, [rdi+rbx*8]
 * 00000001800B8DD9: mov     eax, [r15+rax]
 * 00000001800B8DDD: cmp     cs:dword_1801D940C, eax
 * 00000001800B8DE3: jle     loc_1800B8EC4
 * 00000001800B8DE9: lea     rcx, dword_1801D940C
 * 00000001800B8DF0: call    sub_18000C5A0
 * 00000001800B8DF5: cmp     cs:dword_1801D940C, r14d
 * 00000001800B8DFC: jnz     loc_1800B8EC4
 * 00000001800B8E02: call    sub_1800B19FC
 * 00000001800B8E07: mov     qword ptr [rbp+9E40h+var_9750], rax
 * 00000001800B8E0E: add     rax, 6ABCh
 * 00000001800B8E14: mov     qword ptr [rbp+9E40h+var_9750+8], rax
 * 00000001800B8E1B: movups  xmm7, [rbp+9E40h+var_9750]
 * 00000001800B8E22: movups  [rbp+9E40h+var_7E10], xmm7
 * 00000001800B8E29: mov     dword ptr [rbp+9E40h+var_7E00], 5
 * 00000001800B8E33: mov     dword ptr [rbp+9E40h+var_7E00+4], esi
 * 00000001800B8E39: movups  xmm6, [rbp+9E40h+var_7E00]
 * 00000001800B8E40: call    sub_1800B1A0C
 * 00000001800B8E45: mov     r8, rax
 * 00000001800B8E48: mov     r9d, r12d
 * 00000001800B8E4B: mov     edx, 1B8h
 * 00000001800B8E50: lea     rcx, [rbp+9E40h+var_3BB0]; Src
 * 00000001800B8E57: call    sub_18007C338
 * 00000001800B8E5C: nop
 * 00000001800B8E5D: mov     r8, rax
 * 00000001800B8E60: mov     rdx, r13
 * 00000001800B8E63: lea     rcx, [rbp+9E40h+var_3BD0]
 * 00000001800B8E6A: call    sub_18001C6E8
 * 00000001800B8E6F: nop
 * 00000001800B8E70: lea     r8, aPixel; "/Pixel"
 * 00000001800B8E77: mov     rdx, rax
 * 00000001800B8E7A: lea     rcx, [rbp+9E40h+var_5AB0]
 * 00000001800B8E81: call    sub_18001C61C
 * 00000001800B8E86: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B8E8B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B8E90: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B8E95: mov     rcx, rax
 * 00000001800B8E98: call    sub_18007C3DC
 * 00000001800B8E9D: nop
 * 00000001800B8E9E: lea     rcx, [rbp+9E40h+var_3BD0]
 * 00000001800B8EA5: call    sub_180010F30
 * 00000001800B8EAA: nop
 * 00000001800B8EAB: lea     rcx, [rbp+9E40h+var_3BB0]
 * 00000001800B8EB2: call    sub_180010F30
 * 00000001800B8EB7: nop
 * 00000001800B8EB8: lea     rcx, dword_1801D940C
 * 00000001800B8EBF: call    sub_18000C538
 * 00000001800B8EC4: mov     rax, [rdi+rbx*8]
 * 00000001800B8EC8: mov     eax, [r15+rax]
 * 00000001800B8ECC: cmp     cs:dword_1801D9410, eax
 * 00000001800B8ED2: jle     loc_1800B8FB3
 * 00000001800B8ED8: lea     rcx, dword_1801D9410
 * 00000001800B8EDF: call    sub_18000C5A0
 * 00000001800B8EE4: cmp     cs:dword_1801D9410, r14d
 * 00000001800B8EEB: jnz     loc_1800B8FB3
 * 00000001800B8EF1: call    sub_1800B19FC
 * 00000001800B8EF6: mov     qword ptr [rbp+9E40h+var_9740], rax
 * 00000001800B8EFD: add     rax, 6ABCh
 * 00000001800B8F03: mov     qword ptr [rbp+9E40h+var_9740+8], rax
 * 00000001800B8F0A: movups  xmm7, [rbp+9E40h+var_9740]
 * 00000001800B8F11: movups  [rbp+9E40h+var_7DF0], xmm7
 * 00000001800B8F18: mov     dword ptr [rbp+9E40h+var_7DE0], 5
 * 00000001800B8F22: mov     dword ptr [rbp+9E40h+var_7DE0+4], esi
 * 00000001800B8F28: movups  xmm6, [rbp+9E40h+var_7DE0]
 * 00000001800B8F2F: call    sub_1800B1A0C
 * 00000001800B8F34: mov     r8, rax
 * 00000001800B8F37: mov     r9d, r12d
 * 00000001800B8F3A: mov     edx, 1BAh
 * 00000001800B8F3F: lea     rcx, [rbp+9E40h+var_3B50]; Src
 * 00000001800B8F46: call    sub_18007C338
 * 00000001800B8F4B: nop
 * 00000001800B8F4C: mov     r8, rax
 * 00000001800B8F4F: mov     rdx, r13
 * 00000001800B8F52: lea     rcx, [rbp+9E40h+var_3B70]
 * 00000001800B8F59: call    sub_18001C6E8
 * 00000001800B8F5E: nop
 * 00000001800B8F5F: lea     r8, aPixel; "/Pixel"
 * 00000001800B8F66: mov     rdx, rax
 * 00000001800B8F69: lea     rcx, [rbp+9E40h+var_5A90]
 * 00000001800B8F70: call    sub_18001C61C
 * 00000001800B8F75: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B8F7A: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B8F7F: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B8F84: mov     rcx, rax
 * 00000001800B8F87: call    sub_18007C3DC
 * 00000001800B8F8C: nop
 * 00000001800B8F8D: lea     rcx, [rbp+9E40h+var_3B70]
 * 00000001800B8F94: call    sub_180010F30
 * 00000001800B8F99: nop
 * 00000001800B8F9A: lea     rcx, [rbp+9E40h+var_3B50]
 * 00000001800B8FA1: call    sub_180010F30
 * 00000001800B8FA6: nop
 * 00000001800B8FA7: lea     rcx, dword_1801D9410
 * 00000001800B8FAE: call    sub_18000C538
 * 00000001800B8FB3: mov     rax, [rdi+rbx*8]
 * 00000001800B8FB7: mov     eax, [r15+rax]
 * 00000001800B8FBB: cmp     cs:dword_1801D9414, eax
 * 00000001800B8FC1: jle     loc_1800B90A2
 * 00000001800B8FC7: lea     rcx, dword_1801D9414
 * 00000001800B8FCE: call    sub_18000C5A0
 * 00000001800B8FD3: cmp     cs:dword_1801D9414, r14d
 * 00000001800B8FDA: jnz     loc_1800B90A2
 * 00000001800B8FE0: call    sub_1800B19AC
 * 00000001800B8FE5: mov     qword ptr [rbp+9E40h+var_9730], rax
 * 00000001800B8FEC: add     rax, 672Ch
 * 00000001800B8FF2: mov     qword ptr [rbp+9E40h+var_9730+8], rax
 * 00000001800B8FF9: movups  xmm7, [rbp+9E40h+var_9730]
 * 00000001800B9000: movups  [rbp+9E40h+var_7DD0], xmm7
 * 00000001800B9007: mov     dword ptr [rbp+9E40h+var_7DC0], 5
 * 00000001800B9011: mov     dword ptr [rbp+9E40h+var_7DC0+4], esi
 * 00000001800B9017: movups  xmm6, [rbp+9E40h+var_7DC0]
 * 00000001800B901E: call    sub_1800B1A0C
 * 00000001800B9023: mov     r8, rax
 * 00000001800B9026: mov     r9d, r12d
 * 00000001800B9029: mov     edx, 1C0h
 * 00000001800B902E: lea     rcx, [rbp+9E40h+var_3AF0]; Src
 * 00000001800B9035: call    sub_18007C338
 * 00000001800B903A: nop
 * 00000001800B903B: mov     r8, rax
 * 00000001800B903E: mov     rdx, r13
 * 00000001800B9041: lea     rcx, [rbp+9E40h+var_3B10]
 * 00000001800B9048: call    sub_18001C6E8
 * 00000001800B904D: nop
 * 00000001800B904E: lea     r8, aPixel; "/Pixel"
 * 00000001800B9055: mov     rdx, rax
 * 00000001800B9058: lea     rcx, [rbp+9E40h+var_5A70]
 * 00000001800B905F: call    sub_18001C61C
 * 00000001800B9064: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B9069: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B906E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B9073: mov     rcx, rax
 * 00000001800B9076: call    sub_18007C3DC
 * 00000001800B907B: nop
 * 00000001800B907C: lea     rcx, [rbp+9E40h+var_3B10]
 * 00000001800B9083: call    sub_180010F30
 * 00000001800B9088: nop
 * 00000001800B9089: lea     rcx, [rbp+9E40h+var_3AF0]
 * 00000001800B9090: call    sub_180010F30
 * 00000001800B9095: nop
 * 00000001800B9096: lea     rcx, dword_1801D9414
 * 00000001800B909D: call    sub_18000C538
 * 00000001800B90A2: mov     rax, [rdi+rbx*8]
 * 00000001800B90A6: mov     eax, [r15+rax]
 * 00000001800B90AA: cmp     cs:dword_1801D9418, eax
 * 00000001800B90B0: jle     loc_1800B9191
 * 00000001800B90B6: lea     rcx, dword_1801D9418
 * 00000001800B90BD: call    sub_18000C5A0
 * 00000001800B90C2: cmp     cs:dword_1801D9418, r14d
 * 00000001800B90C9: jnz     loc_1800B9191
 * 00000001800B90CF: call    sub_1800B19AC
 * 00000001800B90D4: mov     qword ptr [rbp+9E40h+var_9720], rax
 * 00000001800B90DB: add     rax, 672Ch
 * 00000001800B90E1: mov     qword ptr [rbp+9E40h+var_9720+8], rax
 * 00000001800B90E8: movups  xmm7, [rbp+9E40h+var_9720]
 * 00000001800B90EF: movups  [rbp+9E40h+var_7DB0], xmm7
 * 00000001800B90F6: mov     dword ptr [rbp+9E40h+var_7DA0], 5
 * 00000001800B9100: mov     dword ptr [rbp+9E40h+var_7DA0+4], esi
 * 00000001800B9106: movups  xmm6, [rbp+9E40h+var_7DA0]
 * 00000001800B910D: call    sub_1800B1A0C
 * 00000001800B9112: mov     r8, rax
 * 00000001800B9115: mov     r9d, r12d
 * 00000001800B9118: mov     edx, 1C2h
 * 00000001800B911D: lea     rcx, [rbp+9E40h+var_3A90]; Src
 * 00000001800B9124: call    sub_18007C338
 * 00000001800B9129: nop
 * 00000001800B912A: mov     r8, rax
 * 00000001800B912D: mov     rdx, r13
 * 00000001800B9130: lea     rcx, [rbp+9E40h+var_3AB0]
 * 00000001800B9137: call    sub_18001C6E8
 * 00000001800B913C: nop
 * 00000001800B913D: lea     r8, aPixel; "/Pixel"
 * 00000001800B9144: mov     rdx, rax
 * 00000001800B9147: lea     rcx, [rbp+9E40h+var_5A50]
 * 00000001800B914E: call    sub_18001C61C
 * 00000001800B9153: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B9158: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B915D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B9162: mov     rcx, rax
 * 00000001800B9165: call    sub_18007C3DC
 * 00000001800B916A: nop
 * 00000001800B916B: lea     rcx, [rbp+9E40h+var_3AB0]
 * 00000001800B9172: call    sub_180010F30
 * 00000001800B9177: nop
 * 00000001800B9178: lea     rcx, [rbp+9E40h+var_3A90]
 * 00000001800B917F: call    sub_180010F30
 * 00000001800B9184: nop
 * 00000001800B9185: lea     rcx, dword_1801D9418
 * 00000001800B918C: call    sub_18000C538
 * 00000001800B9191: mov     rax, [rdi+rbx*8]
 * 00000001800B9195: mov     eax, [r15+rax]
 * 00000001800B9199: cmp     cs:dword_1801D941C, eax
 * 00000001800B919F: jle     loc_1800B9280
 * 00000001800B91A5: lea     rcx, dword_1801D941C
 * 00000001800B91AC: call    sub_18000C5A0
 * 00000001800B91B1: cmp     cs:dword_1801D941C, r14d
 * 00000001800B91B8: jnz     loc_1800B9280
 * 00000001800B91BE: call    sub_1800B19CC
 * 00000001800B91C3: mov     qword ptr [rbp+9E40h+var_9710], rax
 * 00000001800B91CA: add     rax, 68BCh
 * 00000001800B91D0: mov     qword ptr [rbp+9E40h+var_9710+8], rax
 * 00000001800B91D7: movups  xmm7, [rbp+9E40h+var_9710]
 * 00000001800B91DE: movups  [rbp+9E40h+var_7D90], xmm7
 * 00000001800B91E5: mov     dword ptr [rbp+9E40h+var_7D80], 5
 * 00000001800B91EF: mov     dword ptr [rbp+9E40h+var_7D80+4], esi
 * 00000001800B91F5: movups  xmm6, [rbp+9E40h+var_7D80]
 * 00000001800B91FC: call    sub_1800B1A0C
 * 00000001800B9201: mov     r8, rax
 * 00000001800B9204: mov     r9d, r12d
 * 00000001800B9207: mov     edx, 1C8h
 * 00000001800B920C: lea     rcx, [rbp+9E40h+var_3A30]; Src
 * 00000001800B9213: call    sub_18007C338
 * 00000001800B9218: nop
 * 00000001800B9219: mov     r8, rax
 * 00000001800B921C: mov     rdx, r13
 * 00000001800B921F: lea     rcx, [rbp+9E40h+var_3A50]
 * 00000001800B9226: call    sub_18001C6E8
 * 00000001800B922B: nop
 * 00000001800B922C: lea     r8, aPixel; "/Pixel"
 * 00000001800B9233: mov     rdx, rax
 * 00000001800B9236: lea     rcx, [rbp+9E40h+var_5A30]
 * 00000001800B923D: call    sub_18001C61C
 * 00000001800B9242: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B9247: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B924C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B9251: mov     rcx, rax
 * 00000001800B9254: call    sub_18007C3DC
 * 00000001800B9259: nop
 * 00000001800B925A: lea     rcx, [rbp+9E40h+var_3A50]
 * 00000001800B9261: call    sub_180010F30
 * 00000001800B9266: nop
 * 00000001800B9267: lea     rcx, [rbp+9E40h+var_3A30]
 * 00000001800B926E: call    sub_180010F30
 * 00000001800B9273: nop
 * 00000001800B9274: lea     rcx, dword_1801D941C
 * 00000001800B927B: call    sub_18000C538
 * 00000001800B9280: mov     rax, [rdi+rbx*8]
 * 00000001800B9284: mov     eax, [r15+rax]
 * 00000001800B9288: cmp     cs:dword_1801D9420, eax
 * 00000001800B928E: jle     loc_1800B936F
 * 00000001800B9294: lea     rcx, dword_1801D9420
 * 00000001800B929B: call    sub_18000C5A0
 * 00000001800B92A0: cmp     cs:dword_1801D9420, r14d
 * 00000001800B92A7: jnz     loc_1800B936F
 * 00000001800B92AD: call    sub_1800B19CC
 * 00000001800B92B2: mov     qword ptr [rbp+9E40h+var_9700], rax
 * 00000001800B92B9: add     rax, 68BCh
 * 00000001800B92BF: mov     qword ptr [rbp+9E40h+var_9700+8], rax
 * 00000001800B92C6: movups  xmm7, [rbp+9E40h+var_9700]
 * 00000001800B92CD: movups  [rbp+9E40h+var_7D70], xmm7
 * 00000001800B92D4: mov     dword ptr [rbp+9E40h+var_7D60], 5
 * 00000001800B92DE: mov     dword ptr [rbp+9E40h+var_7D60+4], esi
 * 00000001800B92E4: movups  xmm6, [rbp+9E40h+var_7D60]
 * 00000001800B92EB: call    sub_1800B1A0C
 * 00000001800B92F0: mov     r8, rax
 * 00000001800B92F3: mov     r9d, r12d
 * 00000001800B92F6: mov     edx, 1CAh
 * 00000001800B92FB: lea     rcx, [rbp+9E40h+var_39D0]; Src
 * 00000001800B9302: call    sub_18007C338
 * 00000001800B9307: nop
 * 00000001800B9308: mov     r8, rax
 * 00000001800B930B: mov     rdx, r13
 * 00000001800B930E: lea     rcx, [rbp+9E40h+var_39F0]
 * 00000001800B9315: call    sub_18001C6E8
 * 00000001800B931A: nop
 * 00000001800B931B: lea     r8, aPixel; "/Pixel"
 * 00000001800B9322: mov     rdx, rax
 * 00000001800B9325: lea     rcx, [rbp+9E40h+var_5A10]
 * 00000001800B932C: call    sub_18001C61C
 * 00000001800B9331: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B9336: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B933B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B9340: mov     rcx, rax
 * 00000001800B9343: call    sub_18007C3DC
 * 00000001800B9348: nop
 * 00000001800B9349: lea     rcx, [rbp+9E40h+var_39F0]
 * 00000001800B9350: call    sub_180010F30
 * 00000001800B9355: nop
 * 00000001800B9356: lea     rcx, [rbp+9E40h+var_39D0]
 * 00000001800B935D: call    sub_180010F30
 * 00000001800B9362: nop
 * 00000001800B9363: lea     rcx, dword_1801D9420
 * 00000001800B936A: call    sub_18000C538
 * 00000001800B936F: mov     rax, [rdi+rbx*8]
 * 00000001800B9373: mov     eax, [r15+rax]
 * 00000001800B9377: cmp     cs:dword_1801D9424, eax
 * 00000001800B937D: jle     loc_1800B945E
 * 00000001800B9383: lea     rcx, dword_1801D9424
 * 00000001800B938A: call    sub_18000C5A0
 * 00000001800B938F: cmp     cs:dword_1801D9424, r14d
 * 00000001800B9396: jnz     loc_1800B945E
 * 00000001800B939C: call    sub_1800B19DC
 * 00000001800B93A1: mov     qword ptr [rbp+9E40h+var_96F0], rax
 * 00000001800B93A8: add     rax, 6908h
 * 00000001800B93AE: mov     qword ptr [rbp+9E40h+var_96F0+8], rax
 * 00000001800B93B5: movups  xmm7, [rbp+9E40h+var_96F0]
 * 00000001800B93BC: movups  [rbp+9E40h+var_7D50], xmm7
 * 00000001800B93C3: mov     dword ptr [rbp+9E40h+var_7D40], 5
 * 00000001800B93CD: mov     dword ptr [rbp+9E40h+var_7D40+4], esi
 * 00000001800B93D3: movups  xmm6, [rbp+9E40h+var_7D40]
 * 00000001800B93DA: call    sub_1800B1A0C
 * 00000001800B93DF: mov     r8, rax
 * 00000001800B93E2: mov     r9d, r12d
 * 00000001800B93E5: mov     edx, 1D0h
 * 00000001800B93EA: lea     rcx, [rbp+9E40h+var_3970]; Src
 * 00000001800B93F1: call    sub_18007C338
 * 00000001800B93F6: nop
 * 00000001800B93F7: mov     r8, rax
 * 00000001800B93FA: mov     rdx, r13
 * 00000001800B93FD: lea     rcx, [rbp+9E40h+var_3990]
 * 00000001800B9404: call    sub_18001C6E8
 * 00000001800B9409: nop
 * 00000001800B940A: lea     r8, aPixel; "/Pixel"
 * 00000001800B9411: mov     rdx, rax
 * 00000001800B9414: lea     rcx, [rbp+9E40h+var_59F0]
 * 00000001800B941B: call    sub_18001C61C
 * 00000001800B9420: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B9425: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B942A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B942F: mov     rcx, rax
 * 00000001800B9432: call    sub_18007C3DC
 * 00000001800B9437: nop
 * 00000001800B9438: lea     rcx, [rbp+9E40h+var_3990]
 * 00000001800B943F: call    sub_180010F30
 * 00000001800B9444: nop
 * 00000001800B9445: lea     rcx, [rbp+9E40h+var_3970]
 * 00000001800B944C: call    sub_180010F30
 * 00000001800B9451: nop
 * 00000001800B9452: lea     rcx, dword_1801D9424
 * 00000001800B9459: call    sub_18000C538
 * 00000001800B945E: mov     rax, [rdi+rbx*8]
 * 00000001800B9462: mov     eax, [r15+rax]
 * 00000001800B9466: cmp     cs:dword_1801D9428, eax
 * 00000001800B946C: jle     loc_1800B954D
 * 00000001800B9472: lea     rcx, dword_1801D9428
 * 00000001800B9479: call    sub_18000C5A0
 * 00000001800B947E: cmp     cs:dword_1801D9428, r14d
 * 00000001800B9485: jnz     loc_1800B954D
 * 00000001800B948B: call    sub_1800B19DC
 * 00000001800B9490: mov     qword ptr [rbp+9E40h+var_96E0], rax
 * 00000001800B9497: add     rax, 6908h
 * 00000001800B949D: mov     qword ptr [rbp+9E40h+var_96E0+8], rax
 * 00000001800B94A4: movups  xmm7, [rbp+9E40h+var_96E0]
 * 00000001800B94AB: movups  [rbp+9E40h+var_7D30], xmm7
 * 00000001800B94B2: mov     dword ptr [rbp+9E40h+var_7D20], 5
 * 00000001800B94BC: mov     dword ptr [rbp+9E40h+var_7D20+4], esi
 * 00000001800B94C2: movups  xmm6, [rbp+9E40h+var_7D20]
 * 00000001800B94C9: call    sub_1800B1A0C
 * 00000001800B94CE: mov     r8, rax
 * 00000001800B94D1: mov     r9d, r12d
 * 00000001800B94D4: mov     edx, 1D2h
 * 00000001800B94D9: lea     rcx, [rbp+9E40h+var_3910]; Src
 * 00000001800B94E0: call    sub_18007C338
 * 00000001800B94E5: nop
 * 00000001800B94E6: mov     r8, rax
 * 00000001800B94E9: mov     rdx, r13
 * 00000001800B94EC: lea     rcx, [rbp+9E40h+var_3930]
 * 00000001800B94F3: call    sub_18001C6E8
 * 00000001800B94F8: nop
 * 00000001800B94F9: lea     r8, aPixel; "/Pixel"
 * 00000001800B9500: mov     rdx, rax
 * 00000001800B9503: lea     rcx, [rbp+9E40h+var_59D0]
 * 00000001800B950A: call    sub_18001C61C
 * 00000001800B950F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B9514: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B9519: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B951E: mov     rcx, rax
 * 00000001800B9521: call    sub_18007C3DC
 * 00000001800B9526: nop
 * 00000001800B9527: lea     rcx, [rbp+9E40h+var_3930]
 * 00000001800B952E: call    sub_180010F30
 * 00000001800B9533: nop
 * 00000001800B9534: lea     rcx, [rbp+9E40h+var_3910]
 * 00000001800B953B: call    sub_180010F30
 * 00000001800B9540: nop
 * 00000001800B9541: lea     rcx, dword_1801D9428
 * 00000001800B9548: call    sub_18000C538
 * 00000001800B954D: mov     rax, [rdi+rbx*8]
 * 00000001800B9551: mov     eax, [r15+rax]
 * 00000001800B9555: cmp     cs:dword_1801D942C, eax
 * 00000001800B955B: jle     loc_1800B963C
 * 00000001800B9561: lea     rcx, dword_1801D942C
 * 00000001800B9568: call    sub_18000C5A0
 * 00000001800B956D: cmp     cs:dword_1801D942C, r14d
 * 00000001800B9574: jnz     loc_1800B963C
 * 00000001800B957A: call    sub_1800B19FC
 * 00000001800B957F: mov     qword ptr [rbp+9E40h+var_96D0], rax
 * 00000001800B9586: add     rax, 6ABCh
 * 00000001800B958C: mov     qword ptr [rbp+9E40h+var_96D0+8], rax
 * 00000001800B9593: movups  xmm7, [rbp+9E40h+var_96D0]
 * 00000001800B959A: movups  [rbp+9E40h+var_7D10], xmm7
 * 00000001800B95A1: mov     dword ptr [rbp+9E40h+var_7D00], 5
 * 00000001800B95AB: mov     dword ptr [rbp+9E40h+var_7D00+4], esi
 * 00000001800B95B1: movups  xmm6, [rbp+9E40h+var_7D00]
 * 00000001800B95B8: call    sub_1800B1A0C
 * 00000001800B95BD: mov     r8, rax
 * 00000001800B95C0: mov     r9d, r12d
 * 00000001800B95C3: mov     edx, 1D8h
 * 00000001800B95C8: lea     rcx, [rbp+9E40h+var_38B0]; Src
 * 00000001800B95CF: call    sub_18007C338
 * 00000001800B95D4: nop
 * 00000001800B95D5: mov     r8, rax
 * 00000001800B95D8: mov     rdx, r13
 * 00000001800B95DB: lea     rcx, [rbp+9E40h+var_38D0]
 * 00000001800B95E2: call    sub_18001C6E8
 * 00000001800B95E7: nop
 * 00000001800B95E8: lea     r8, aPixel; "/Pixel"
 * 00000001800B95EF: mov     rdx, rax
 * 00000001800B95F2: lea     rcx, [rbp+9E40h+var_59B0]
 * 00000001800B95F9: call    sub_18001C61C
 * 00000001800B95FE: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B9603: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B9608: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B960D: mov     rcx, rax
 * 00000001800B9610: call    sub_18007C3DC
 * 00000001800B9615: nop
 * 00000001800B9616: lea     rcx, [rbp+9E40h+var_38D0]
 * 00000001800B961D: call    sub_180010F30
 * 00000001800B9622: nop
 * 00000001800B9623: lea     rcx, [rbp+9E40h+var_38B0]
 * 00000001800B962A: call    sub_180010F30
 * 00000001800B962F: nop
 * 00000001800B9630: lea     rcx, dword_1801D942C
 * 00000001800B9637: call    sub_18000C538
 * 00000001800B963C: mov     rax, [rdi+rbx*8]
 * 00000001800B9640: mov     eax, [r15+rax]
 * 00000001800B9644: cmp     cs:dword_1801D9430, eax
 * 00000001800B964A: jle     loc_1800B972B
 * 00000001800B9650: lea     rcx, dword_1801D9430
 * 00000001800B9657: call    sub_18000C5A0
 * 00000001800B965C: cmp     cs:dword_1801D9430, r14d
 * 00000001800B9663: jnz     loc_1800B972B
 * 00000001800B9669: call    sub_1800B19FC
 * 00000001800B966E: mov     qword ptr [rbp+9E40h+var_96C0], rax
 * 00000001800B9675: add     rax, 6ABCh
 * 00000001800B967B: mov     qword ptr [rbp+9E40h+var_96C0+8], rax
 * 00000001800B9682: movups  xmm7, [rbp+9E40h+var_96C0]
 * 00000001800B9689: movups  [rbp+9E40h+var_7CF0], xmm7
 * 00000001800B9690: mov     dword ptr [rbp+9E40h+var_7CE0], 5
 * 00000001800B969A: mov     dword ptr [rbp+9E40h+var_7CE0+4], esi
 * 00000001800B96A0: movups  xmm6, [rbp+9E40h+var_7CE0]
 * 00000001800B96A7: call    sub_1800B1A0C
 * 00000001800B96AC: mov     r8, rax
 * 00000001800B96AF: mov     r9d, r12d
 * 00000001800B96B2: mov     edx, 1DAh
 * 00000001800B96B7: lea     rcx, [rbp+9E40h+var_3850]; Src
 * 00000001800B96BE: call    sub_18007C338
 * 00000001800B96C3: nop
 * 00000001800B96C4: mov     r8, rax
 * 00000001800B96C7: mov     rdx, r13
 * 00000001800B96CA: lea     rcx, [rbp+9E40h+var_3870]
 * 00000001800B96D1: call    sub_18001C6E8
 * 00000001800B96D6: nop
 * 00000001800B96D7: lea     r8, aPixel; "/Pixel"
 * 00000001800B96DE: mov     rdx, rax
 * 00000001800B96E1: lea     rcx, [rbp+9E40h+var_5990]
 * 00000001800B96E8: call    sub_18001C61C
 * 00000001800B96ED: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B96F2: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B96F7: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B96FC: mov     rcx, rax
 * 00000001800B96FF: call    sub_18007C3DC
 * 00000001800B9704: nop
 * 00000001800B9705: lea     rcx, [rbp+9E40h+var_3870]
 * 00000001800B970C: call    sub_180010F30
 * 00000001800B9711: nop
 * 00000001800B9712: lea     rcx, [rbp+9E40h+var_3850]
 * 00000001800B9719: call    sub_180010F30
 * 00000001800B971E: nop
 * 00000001800B971F: lea     rcx, dword_1801D9430
 * 00000001800B9726: call    sub_18000C538
 * 00000001800B972B: mov     rax, [rdi+rbx*8]
 * 00000001800B972F: mov     eax, [r15+rax]
 * 00000001800B9733: cmp     cs:dword_1801D9434, eax
 * 00000001800B9739: jle     loc_1800B981A
 * 00000001800B973F: lea     rcx, dword_1801D9434
 * 00000001800B9746: call    sub_18000C5A0
 * 00000001800B974B: cmp     cs:dword_1801D9434, r14d
 * 00000001800B9752: jnz     loc_1800B981A
 * 00000001800B9758: call    sub_1800B19AC
 * 00000001800B975D: mov     qword ptr [rbp+9E40h+var_96B0], rax
 * 00000001800B9764: add     rax, 672Ch
 * 00000001800B976A: mov     qword ptr [rbp+9E40h+var_96B0+8], rax
 * 00000001800B9771: movups  xmm7, [rbp+9E40h+var_96B0]
 * 00000001800B9778: movups  [rbp+9E40h+var_7CD0], xmm7
 * 00000001800B977F: mov     dword ptr [rbp+9E40h+var_7CC0], 5
 * 00000001800B9789: mov     dword ptr [rbp+9E40h+var_7CC0+4], esi
 * 00000001800B978F: movups  xmm6, [rbp+9E40h+var_7CC0]
 * 00000001800B9796: call    sub_1800B1A0C
 * 00000001800B979B: mov     r8, rax
 * 00000001800B979E: mov     r9d, r12d
 * 00000001800B97A1: mov     edx, 1E0h
 * 00000001800B97A6: lea     rcx, [rbp+9E40h+var_37F0]; Src
 * 00000001800B97AD: call    sub_18007C338
 * 00000001800B97B2: nop
 * 00000001800B97B3: mov     r8, rax
 * 00000001800B97B6: mov     rdx, r13
 * 00000001800B97B9: lea     rcx, [rbp+9E40h+var_3810]
 * 00000001800B97C0: call    sub_18001C6E8
 * 00000001800B97C5: nop
 * 00000001800B97C6: lea     r8, aPixel; "/Pixel"
 * 00000001800B97CD: mov     rdx, rax
 * 00000001800B97D0: lea     rcx, [rbp+9E40h+var_5970]
 * 00000001800B97D7: call    sub_18001C61C
 * 00000001800B97DC: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B97E1: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B97E6: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B97EB: mov     rcx, rax
 * 00000001800B97EE: call    sub_18007C3DC
 * 00000001800B97F3: nop
 * 00000001800B97F4: lea     rcx, [rbp+9E40h+var_3810]
 * 00000001800B97FB: call    sub_180010F30
 * 00000001800B9800: nop
 * 00000001800B9801: lea     rcx, [rbp+9E40h+var_37F0]
 * 00000001800B9808: call    sub_180010F30
 * 00000001800B980D: nop
 * 00000001800B980E: lea     rcx, dword_1801D9434
 * 00000001800B9815: call    sub_18000C538
 * 00000001800B981A: mov     rax, [rdi+rbx*8]
 * 00000001800B981E: mov     eax, [r15+rax]
 * 00000001800B9822: cmp     cs:dword_1801D9438, eax
 * 00000001800B9828: jle     loc_1800B9909
 * 00000001800B982E: lea     rcx, dword_1801D9438
 * 00000001800B9835: call    sub_18000C5A0
 * 00000001800B983A: cmp     cs:dword_1801D9438, r14d
 * 00000001800B9841: jnz     loc_1800B9909
 * 00000001800B9847: call    sub_1800B19AC
 * 00000001800B984C: mov     qword ptr [rbp+9E40h+var_96A0], rax
 * 00000001800B9853: add     rax, 672Ch
 * 00000001800B9859: mov     qword ptr [rbp+9E40h+var_96A0+8], rax
 * 00000001800B9860: movups  xmm7, [rbp+9E40h+var_96A0]
 * 00000001800B9867: movups  [rbp+9E40h+var_7CB0], xmm7
 * 00000001800B986E: mov     dword ptr [rbp+9E40h+var_7CA0], 5
 * 00000001800B9878: mov     dword ptr [rbp+9E40h+var_7CA0+4], esi
 * 00000001800B987E: movups  xmm6, [rbp+9E40h+var_7CA0]
 * 00000001800B9885: call    sub_1800B1A0C
 * 00000001800B988A: mov     r8, rax
 * 00000001800B988D: mov     r9d, r12d
 * 00000001800B9890: mov     edx, 1E2h
 * 00000001800B9895: lea     rcx, [rbp+9E40h+var_3790]; Src
 * 00000001800B989C: call    sub_18007C338
 * 00000001800B98A1: nop
 * 00000001800B98A2: mov     r8, rax
 * 00000001800B98A5: mov     rdx, r13
 * 00000001800B98A8: lea     rcx, [rbp+9E40h+var_37B0]
 * 00000001800B98AF: call    sub_18001C6E8
 * 00000001800B98B4: nop
 * 00000001800B98B5: lea     r8, aPixel; "/Pixel"
 * 00000001800B98BC: mov     rdx, rax
 * 00000001800B98BF: lea     rcx, [rbp+9E40h+var_5950]
 * 00000001800B98C6: call    sub_18001C61C
 * 00000001800B98CB: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B98D0: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B98D5: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B98DA: mov     rcx, rax
 * 00000001800B98DD: call    sub_18007C3DC
 * 00000001800B98E2: nop
 * 00000001800B98E3: lea     rcx, [rbp+9E40h+var_37B0]
 * 00000001800B98EA: call    sub_180010F30
 * 00000001800B98EF: nop
 * 00000001800B98F0: lea     rcx, [rbp+9E40h+var_3790]
 * 00000001800B98F7: call    sub_180010F30
 * 00000001800B98FC: nop
 * 00000001800B98FD: lea     rcx, dword_1801D9438
 * 00000001800B9904: call    sub_18000C538
 * 00000001800B9909: mov     rax, [rdi+rbx*8]
 * 00000001800B990D: mov     eax, [r15+rax]
 * 00000001800B9911: cmp     cs:dword_1801D943C, eax
 * 00000001800B9917: jle     loc_1800B99F8
 * 00000001800B991D: lea     rcx, dword_1801D943C
 * 00000001800B9924: call    sub_18000C5A0
 * 00000001800B9929: cmp     cs:dword_1801D943C, r14d
 * 00000001800B9930: jnz     loc_1800B99F8
 * 00000001800B9936: call    sub_1800B19CC
 * 00000001800B993B: mov     qword ptr [rbp+9E40h+var_9690], rax
 * 00000001800B9942: add     rax, 68BCh
 * 00000001800B9948: mov     qword ptr [rbp+9E40h+var_9690+8], rax
 * 00000001800B994F: movups  xmm7, [rbp+9E40h+var_9690]
 * 00000001800B9956: movups  [rbp+9E40h+var_7C90], xmm7
 * 00000001800B995D: mov     dword ptr [rbp+9E40h+var_7C80], 5
 * 00000001800B9967: mov     dword ptr [rbp+9E40h+var_7C80+4], esi
 * 00000001800B996D: movups  xmm6, [rbp+9E40h+var_7C80]
 * 00000001800B9974: call    sub_1800B1A0C
 * 00000001800B9979: mov     r8, rax
 * 00000001800B997C: mov     r9d, r12d
 * 00000001800B997F: mov     edx, 1E8h
 * 00000001800B9984: lea     rcx, [rbp+9E40h+var_3730]; Src
 * 00000001800B998B: call    sub_18007C338
 * 00000001800B9990: nop
 * 00000001800B9991: mov     r8, rax
 * 00000001800B9994: mov     rdx, r13
 * 00000001800B9997: lea     rcx, [rbp+9E40h+var_3750]
 * 00000001800B999E: call    sub_18001C6E8
 * 00000001800B99A3: nop
 * 00000001800B99A4: lea     r8, aPixel; "/Pixel"
 * 00000001800B99AB: mov     rdx, rax
 * 00000001800B99AE: lea     rcx, [rbp+9E40h+var_5930]
 * 00000001800B99B5: call    sub_18001C61C
 * 00000001800B99BA: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B99BF: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B99C4: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B99C9: mov     rcx, rax
 * 00000001800B99CC: call    sub_18007C3DC
 * 00000001800B99D1: nop
 * 00000001800B99D2: lea     rcx, [rbp+9E40h+var_3750]
 * 00000001800B99D9: call    sub_180010F30
 * 00000001800B99DE: nop
 * 00000001800B99DF: lea     rcx, [rbp+9E40h+var_3730]
 * 00000001800B99E6: call    sub_180010F30
 * 00000001800B99EB: nop
 * 00000001800B99EC: lea     rcx, dword_1801D943C
 * 00000001800B99F3: call    sub_18000C538
 * 00000001800B99F8: mov     rax, [rdi+rbx*8]
 * 00000001800B99FC: mov     eax, [r15+rax]
 * 00000001800B9A00: cmp     cs:dword_1801D9440, eax
 * 00000001800B9A06: jle     loc_1800B9AE7
 * 00000001800B9A0C: lea     rcx, dword_1801D9440
 * 00000001800B9A13: call    sub_18000C5A0
 * 00000001800B9A18: cmp     cs:dword_1801D9440, r14d
 * 00000001800B9A1F: jnz     loc_1800B9AE7
 * 00000001800B9A25: call    sub_1800B19CC
 * 00000001800B9A2A: mov     qword ptr [rbp+9E40h+var_9680], rax
 * 00000001800B9A31: add     rax, 68BCh
 * 00000001800B9A37: mov     qword ptr [rbp+9E40h+var_9680+8], rax
 * 00000001800B9A3E: movups  xmm7, [rbp+9E40h+var_9680]
 * 00000001800B9A45: movups  [rbp+9E40h+var_7C70], xmm7
 * 00000001800B9A4C: mov     dword ptr [rbp+9E40h+var_7C60], 5
 * 00000001800B9A56: mov     dword ptr [rbp+9E40h+var_7C60+4], esi
 * 00000001800B9A5C: movups  xmm6, [rbp+9E40h+var_7C60]
 * 00000001800B9A63: call    sub_1800B1A0C
 * 00000001800B9A68: mov     r8, rax
 * 00000001800B9A6B: mov     r9d, r12d
 * 00000001800B9A6E: mov     edx, 1EAh
 * 00000001800B9A73: lea     rcx, [rbp+9E40h+var_36D0]; Src
 * 00000001800B9A7A: call    sub_18007C338
 * 00000001800B9A7F: nop
 * 00000001800B9A80: mov     r8, rax
 * 00000001800B9A83: mov     rdx, r13
 * 00000001800B9A86: lea     rcx, [rbp+9E40h+var_36F0]
 * 00000001800B9A8D: call    sub_18001C6E8
 * 00000001800B9A92: nop
 * 00000001800B9A93: lea     r8, aPixel; "/Pixel"
 * 00000001800B9A9A: mov     rdx, rax
 * 00000001800B9A9D: lea     rcx, [rbp+9E40h+var_5910]
 * 00000001800B9AA4: call    sub_18001C61C
 * 00000001800B9AA9: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B9AAE: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B9AB3: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B9AB8: mov     rcx, rax
 * 00000001800B9ABB: call    sub_18007C3DC
 * 00000001800B9AC0: nop
 * 00000001800B9AC1: lea     rcx, [rbp+9E40h+var_36F0]
 * 00000001800B9AC8: call    sub_180010F30
 * 00000001800B9ACD: nop
 * 00000001800B9ACE: lea     rcx, [rbp+9E40h+var_36D0]
 * 00000001800B9AD5: call    sub_180010F30
 * 00000001800B9ADA: nop
 * 00000001800B9ADB: lea     rcx, dword_1801D9440
 * 00000001800B9AE2: call    sub_18000C538
 * 00000001800B9AE7: mov     rax, [rdi+rbx*8]
 * 00000001800B9AEB: mov     eax, [r15+rax]
 * 00000001800B9AEF: cmp     cs:dword_1801D9444, eax
 * 00000001800B9AF5: jle     loc_1800B9BD6
 * 00000001800B9AFB: lea     rcx, dword_1801D9444
 * 00000001800B9B02: call    sub_18000C5A0
 * 00000001800B9B07: cmp     cs:dword_1801D9444, r14d
 * 00000001800B9B0E: jnz     loc_1800B9BD6
 * 00000001800B9B14: call    sub_1800B19DC
 * 00000001800B9B19: mov     qword ptr [rbp+9E40h+var_9670], rax
 * 00000001800B9B20: add     rax, 6908h
 * 00000001800B9B26: mov     qword ptr [rbp+9E40h+var_9670+8], rax
 * 00000001800B9B2D: movups  xmm7, [rbp+9E40h+var_9670]
 * 00000001800B9B34: movups  [rbp+9E40h+var_7C50], xmm7
 * 00000001800B9B3B: mov     dword ptr [rbp+9E40h+var_7C40], 5
 * 00000001800B9B45: mov     dword ptr [rbp+9E40h+var_7C40+4], esi
 * 00000001800B9B4B: movups  xmm6, [rbp+9E40h+var_7C40]
 * 00000001800B9B52: call    sub_1800B1A0C
 * 00000001800B9B57: mov     r8, rax
 * 00000001800B9B5A: mov     r9d, r12d
 * 00000001800B9B5D: mov     edx, 1F0h
 * 00000001800B9B62: lea     rcx, [rbp+9E40h+var_3670]; Src
 * 00000001800B9B69: call    sub_18007C338
 * 00000001800B9B6E: nop
 * 00000001800B9B6F: mov     r8, rax
 * 00000001800B9B72: mov     rdx, r13
 * 00000001800B9B75: lea     rcx, [rbp+9E40h+var_3690]
 * 00000001800B9B7C: call    sub_18001C6E8
 * 00000001800B9B81: nop
 * 00000001800B9B82: lea     r8, aPixel; "/Pixel"
 * 00000001800B9B89: mov     rdx, rax
 * 00000001800B9B8C: lea     rcx, [rbp+9E40h+var_58F0]
 * 00000001800B9B93: call    sub_18001C61C
 * 00000001800B9B98: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B9B9D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B9BA2: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B9BA7: mov     rcx, rax
 * 00000001800B9BAA: call    sub_18007C3DC
 * 00000001800B9BAF: nop
 * 00000001800B9BB0: lea     rcx, [rbp+9E40h+var_3690]
 * 00000001800B9BB7: call    sub_180010F30
 * 00000001800B9BBC: nop
 * 00000001800B9BBD: lea     rcx, [rbp+9E40h+var_3670]
 * 00000001800B9BC4: call    sub_180010F30
 * 00000001800B9BC9: nop
 * 00000001800B9BCA: lea     rcx, dword_1801D9444
 * 00000001800B9BD1: call    sub_18000C538
 * 00000001800B9BD6: mov     rax, [rdi+rbx*8]
 * 00000001800B9BDA: mov     eax, [r15+rax]
 * 00000001800B9BDE: cmp     cs:dword_1801D9448, eax
 * 00000001800B9BE4: jle     loc_1800B9CC5
 * 00000001800B9BEA: lea     rcx, dword_1801D9448
 * 00000001800B9BF1: call    sub_18000C5A0
 * 00000001800B9BF6: cmp     cs:dword_1801D9448, r14d
 * 00000001800B9BFD: jnz     loc_1800B9CC5
 * 00000001800B9C03: call    sub_1800B19DC
 * 00000001800B9C08: mov     qword ptr [rbp+9E40h+var_9660], rax
 * 00000001800B9C0F: add     rax, 6908h
 * 00000001800B9C15: mov     qword ptr [rbp+9E40h+var_9660+8], rax
 * 00000001800B9C1C: movups  xmm7, [rbp+9E40h+var_9660]
 * 00000001800B9C23: movups  [rbp+9E40h+var_7C30], xmm7
 * 00000001800B9C2A: mov     dword ptr [rbp+9E40h+var_7C20], 5
 * 00000001800B9C34: mov     dword ptr [rbp+9E40h+var_7C20+4], esi
 * 00000001800B9C3A: movups  xmm6, [rbp+9E40h+var_7C20]
 * 00000001800B9C41: call    sub_1800B1A0C
 * 00000001800B9C46: mov     r8, rax
 * 00000001800B9C49: mov     r9d, r12d
 * 00000001800B9C4C: mov     edx, 1F2h
 * 00000001800B9C51: lea     rcx, [rbp+9E40h+var_3610]; Src
 * 00000001800B9C58: call    sub_18007C338
 * 00000001800B9C5D: nop
 * 00000001800B9C5E: mov     r8, rax
 * 00000001800B9C61: mov     rdx, r13
 * 00000001800B9C64: lea     rcx, [rbp+9E40h+var_3630]
 * 00000001800B9C6B: call    sub_18001C6E8
 * 00000001800B9C70: nop
 * 00000001800B9C71: lea     r8, aPixel; "/Pixel"
 * 00000001800B9C78: mov     rdx, rax
 * 00000001800B9C7B: lea     rcx, [rbp+9E40h+var_58D0]
 * 00000001800B9C82: call    sub_18001C61C
 * 00000001800B9C87: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B9C8C: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B9C91: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B9C96: mov     rcx, rax
 * 00000001800B9C99: call    sub_18007C3DC
 * 00000001800B9C9E: nop
 * 00000001800B9C9F: lea     rcx, [rbp+9E40h+var_3630]
 * 00000001800B9CA6: call    sub_180010F30
 * 00000001800B9CAB: nop
 * 00000001800B9CAC: lea     rcx, [rbp+9E40h+var_3610]
 * 00000001800B9CB3: call    sub_180010F30
 * 00000001800B9CB8: nop
 * 00000001800B9CB9: lea     rcx, dword_1801D9448
 * 00000001800B9CC0: call    sub_18000C538
 * 00000001800B9CC5: mov     rax, [rdi+rbx*8]
 * 00000001800B9CC9: mov     eax, [r15+rax]
 * 00000001800B9CCD: cmp     cs:dword_1801D944C, eax
 * 00000001800B9CD3: jle     loc_1800B9DB4
 * 00000001800B9CD9: lea     rcx, dword_1801D944C
 * 00000001800B9CE0: call    sub_18000C5A0
 * 00000001800B9CE5: cmp     cs:dword_1801D944C, r14d
 * 00000001800B9CEC: jnz     loc_1800B9DB4
 * 00000001800B9CF2: call    sub_1800B19FC
 * 00000001800B9CF7: mov     qword ptr [rbp+9E40h+var_9650], rax
 * 00000001800B9CFE: add     rax, 6ABCh
 * 00000001800B9D04: mov     qword ptr [rbp+9E40h+var_9650+8], rax
 * 00000001800B9D0B: movups  xmm7, [rbp+9E40h+var_9650]
 * 00000001800B9D12: movups  [rbp+9E40h+var_7C10], xmm7
 * 00000001800B9D19: mov     dword ptr [rbp+9E40h+var_7C00], 5
 * 00000001800B9D23: mov     dword ptr [rbp+9E40h+var_7C00+4], esi
 * 00000001800B9D29: movups  xmm6, [rbp+9E40h+var_7C00]
 * 00000001800B9D30: call    sub_1800B1A0C
 * 00000001800B9D35: mov     r8, rax
 * 00000001800B9D38: mov     r9d, r12d
 * 00000001800B9D3B: mov     edx, 1F8h
 * 00000001800B9D40: lea     rcx, [rbp+9E40h+var_35B0]; Src
 * 00000001800B9D47: call    sub_18007C338
 * 00000001800B9D4C: nop
 * 00000001800B9D4D: mov     r8, rax
 * 00000001800B9D50: mov     rdx, r13
 * 00000001800B9D53: lea     rcx, [rbp+9E40h+var_35D0]
 * 00000001800B9D5A: call    sub_18001C6E8
 * 00000001800B9D5F: nop
 * 00000001800B9D60: lea     r8, aPixel; "/Pixel"
 * 00000001800B9D67: mov     rdx, rax
 * 00000001800B9D6A: lea     rcx, [rbp+9E40h+var_58B0]
 * 00000001800B9D71: call    sub_18001C61C
 * 00000001800B9D76: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B9D7B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B9D80: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B9D85: mov     rcx, rax
 * 00000001800B9D88: call    sub_18007C3DC
 * 00000001800B9D8D: nop
 * 00000001800B9D8E: lea     rcx, [rbp+9E40h+var_35D0]
 * 00000001800B9D95: call    sub_180010F30
 * 00000001800B9D9A: nop
 * 00000001800B9D9B: lea     rcx, [rbp+9E40h+var_35B0]
 * 00000001800B9DA2: call    sub_180010F30
 * 00000001800B9DA7: nop
 * 00000001800B9DA8: lea     rcx, dword_1801D944C
 * 00000001800B9DAF: call    sub_18000C538
 * 00000001800B9DB4: mov     rax, [rdi+rbx*8]
 * 00000001800B9DB8: mov     eax, [r15+rax]
 * 00000001800B9DBC: cmp     cs:dword_1801D9450, eax
 * 00000001800B9DC2: jle     loc_1800B9EA3
 * 00000001800B9DC8: lea     rcx, dword_1801D9450
 * 00000001800B9DCF: call    sub_18000C5A0
 * 00000001800B9DD4: cmp     cs:dword_1801D9450, r14d
 * 00000001800B9DDB: jnz     loc_1800B9EA3
 * 00000001800B9DE1: call    sub_1800B19FC
 * 00000001800B9DE6: mov     qword ptr [rbp+9E40h+var_9640], rax
 * 00000001800B9DED: add     rax, 6ABCh
 * 00000001800B9DF3: mov     qword ptr [rbp+9E40h+var_9640+8], rax
 * 00000001800B9DFA: movups  xmm7, [rbp+9E40h+var_9640]
 * 00000001800B9E01: movups  [rbp+9E40h+var_7BF0], xmm7
 * 00000001800B9E08: mov     dword ptr [rbp+9E40h+var_7BE0], 5
 * 00000001800B9E12: mov     dword ptr [rbp+9E40h+var_7BE0+4], esi
 * 00000001800B9E18: movups  xmm6, [rbp+9E40h+var_7BE0]
 * 00000001800B9E1F: call    sub_1800B1A0C
 * 00000001800B9E24: mov     r8, rax
 * 00000001800B9E27: mov     r9d, r12d
 * 00000001800B9E2A: mov     edx, 1FAh
 * 00000001800B9E2F: lea     rcx, [rbp+9E40h+var_3550]; Src
 * 00000001800B9E36: call    sub_18007C338
 * 00000001800B9E3B: nop
 * 00000001800B9E3C: mov     r8, rax
 * 00000001800B9E3F: mov     rdx, r13
 * 00000001800B9E42: lea     rcx, [rbp+9E40h+var_3570]
 * 00000001800B9E49: call    sub_18001C6E8
 * 00000001800B9E4E: nop
 * 00000001800B9E4F: lea     r8, aPixel; "/Pixel"
 * 00000001800B9E56: mov     rdx, rax
 * 00000001800B9E59: lea     rcx, [rbp+9E40h+var_5890]
 * 00000001800B9E60: call    sub_18001C61C
 * 00000001800B9E65: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B9E6A: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B9E6F: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B9E74: mov     rcx, rax
 * 00000001800B9E77: call    sub_18007C3DC
 * 00000001800B9E7C: nop
 * 00000001800B9E7D: lea     rcx, [rbp+9E40h+var_3570]
 * 00000001800B9E84: call    sub_180010F30
 * 00000001800B9E89: nop
 * 00000001800B9E8A: lea     rcx, [rbp+9E40h+var_3550]
 * 00000001800B9E91: call    sub_180010F30
 * 00000001800B9E96: nop
 * 00000001800B9E97: lea     rcx, dword_1801D9450
 * 00000001800B9E9E: call    sub_18000C538
 * 00000001800B9EA3: mov     rax, [rdi+rbx*8]
 * 00000001800B9EA7: mov     eax, [r15+rax]
 * 00000001800B9EAB: cmp     cs:dword_1801D9454, eax
 * 00000001800B9EB1: jle     loc_1800B9F8B
 * 00000001800B9EB7: lea     rcx, dword_1801D9454
 * 00000001800B9EBE: call    sub_18000C5A0
 * 00000001800B9EC3: cmp     cs:dword_1801D9454, r14d
 * 00000001800B9ECA: jnz     loc_1800B9F8B
 * 00000001800B9ED0: call    sub_1800B18DC
 * 00000001800B9ED5: mov     qword ptr [rbp+9E40h+var_9630], rax
 * 00000001800B9EDC: add     rax, 1018h
 * 00000001800B9EE2: mov     qword ptr [rbp+9E40h+var_9630+8], rax
 * 00000001800B9EE9: movups  xmm7, [rbp+9E40h+var_9630]
 * 00000001800B9EF0: movups  [rbp+9E40h+var_7BD0], xmm7
 * 00000001800B9EF7: mov     dword ptr [rbp+9E40h+var_7BC0], esi
 * 00000001800B9EFD: mov     dword ptr [rbp+9E40h+var_7BC0+4], esi
 * 00000001800B9F03: movups  xmm6, [rbp+9E40h+var_7BC0]
 * 00000001800B9F0A: call    sub_1800B1A0C
 * 00000001800B9F0F: mov     r8, rax
 * 00000001800B9F12: mov     r9d, r12d
 * 00000001800B9F15: xor     edx, edx
 * 00000001800B9F17: lea     rcx, [rbp+9E40h+var_34F0]; Src
 * 00000001800B9F1E: call    sub_18007C338
 * 00000001800B9F23: nop
 * 00000001800B9F24: mov     r8, rax
 * 00000001800B9F27: mov     rdx, r13
 * 00000001800B9F2A: lea     rcx, [rbp+9E40h+var_3510]
 * 00000001800B9F31: call    sub_18001C6E8
 * 00000001800B9F36: nop
 * 00000001800B9F37: lea     r8, aVertex; "/Vertex"
 * 00000001800B9F3E: mov     rdx, rax
 * 00000001800B9F41: lea     rcx, [rbp+9E40h+var_5870]
 * 00000001800B9F48: call    sub_18001C61C
 * 00000001800B9F4D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B9F52: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B9F57: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B9F5C: mov     rcx, rax
 * 00000001800B9F5F: call    sub_18007C3DC
 * 00000001800B9F64: nop
 * 00000001800B9F65: lea     rcx, [rbp+9E40h+var_3510]
 * 00000001800B9F6C: call    sub_180010F30
 * 00000001800B9F71: nop
 * 00000001800B9F72: lea     rcx, [rbp+9E40h+var_34F0]
 * 00000001800B9F79: call    sub_180010F30
 * 00000001800B9F7E: nop
 * 00000001800B9F7F: lea     rcx, dword_1801D9454
 * 00000001800B9F86: call    sub_18000C538
 * 00000001800B9F8B: mov     rax, [rdi+rbx*8]
 * 00000001800B9F8F: mov     ecx, [r15+rax]
 * 00000001800B9F93: cmp     cs:dword_1801D9458, ecx
 * 00000001800B9F99: jle     loc_1800BA074
 * 00000001800B9F9F: lea     rcx, dword_1801D9458
 * 00000001800B9FA6: call    sub_18000C5A0
 * 00000001800B9FAB: cmp     cs:dword_1801D9458, r14d
 * 00000001800B9FB2: jnz     loc_1800BA074
 * 00000001800B9FB8: call    sub_1800AF944
 * 00000001800B9FBD: mov     qword ptr [rbp+9E40h+var_9620], rax
 * 00000001800B9FC4: add     rax, 584h
 * 00000001800B9FCA: mov     qword ptr [rbp+9E40h+var_9620+8], rax
 * 00000001800B9FD1: movups  xmm7, [rbp+9E40h+var_9620]
 * 00000001800B9FD8: movups  [rbp+9E40h+var_7BB0], xmm7
 * 00000001800B9FDF: mov     dword ptr [rbp+9E40h+var_7BA0], esi
 * 00000001800B9FE5: mov     dword ptr [rbp+9E40h+var_7BA0+4], esi
 * 00000001800B9FEB: movups  xmm6, [rbp+9E40h+var_7BA0]
 * 00000001800B9FF2: call    sub_1800B1A0C
 * 00000001800B9FF7: mov     r8, rax
 * 00000001800B9FFA: mov     r9d, r12d
 * 00000001800B9FFD: mov     rdx, rsi
 * 00000001800BA000: lea     rcx, [rbp+9E40h+var_3490]; Src
 * 00000001800BA007: call    sub_18007C338
 * 00000001800BA00C: nop
 * 00000001800BA00D: mov     r8, rax
 * 00000001800BA010: mov     rdx, r13
 * 00000001800BA013: lea     rcx, [rbp+9E40h+var_34B0]
 * 00000001800BA01A: call    sub_18001C6E8
 * 00000001800BA01F: nop
 * 00000001800BA020: lea     r8, aVertex; "/Vertex"
 * 00000001800BA027: mov     rdx, rax
 * 00000001800BA02A: lea     rcx, [rbp+9E40h+var_5850]
 * 00000001800BA031: call    sub_18001C61C
 * 00000001800BA036: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BA03B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BA040: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BA045: mov     rcx, rax
 * 00000001800BA048: call    sub_18007C3DC
 * 00000001800BA04D: nop
 * 00000001800BA04E: lea     rcx, [rbp+9E40h+var_34B0]
 * 00000001800BA055: call    sub_180010F30
 * 00000001800BA05A: nop
 * 00000001800BA05B: lea     rcx, [rbp+9E40h+var_3490]
 * 00000001800BA062: call    sub_180010F30
 * 00000001800BA067: nop
 * 00000001800BA068: lea     rcx, dword_1801D9458
 * 00000001800BA06F: call    sub_18000C538
 * 00000001800BA074: mov     rax, [rdi+rbx*8]
 * 00000001800BA078: mov     ecx, [r15+rax]
 * 00000001800BA07C: cmp     cs:dword_1801D945C, ecx
 * 00000001800BA082: jle     loc_1800BA15F
 * 00000001800BA088: lea     rcx, dword_1801D945C
 * 00000001800BA08F: call    sub_18000C5A0
 * 00000001800BA094: cmp     cs:dword_1801D945C, r14d
 * 00000001800BA09B: jnz     loc_1800BA15F
 * 00000001800BA0A1: call    sub_1800B18DC
 * 00000001800BA0A6: mov     qword ptr [rbp+9E40h+var_9610], rax
 * 00000001800BA0AD: add     rax, 1018h
 * 00000001800BA0B3: mov     qword ptr [rbp+9E40h+var_9610+8], rax
 * 00000001800BA0BA: movups  xmm7, [rbp+9E40h+var_9610]
 * 00000001800BA0C1: movups  [rbp+9E40h+var_7B90], xmm7
 * 00000001800BA0C8: mov     dword ptr [rbp+9E40h+var_7B80], esi
 * 00000001800BA0CE: mov     dword ptr [rbp+9E40h+var_7B80+4], esi
 * 00000001800BA0D4: movups  xmm6, [rbp+9E40h+var_7B80]
 * 00000001800BA0DB: call    sub_1800B1A0C
 * 00000001800BA0E0: mov     r8, rax
 * 00000001800BA0E3: mov     r9d, r12d
 * 00000001800BA0E6: mov     edx, 2
 * 00000001800BA0EB: lea     rcx, [rbp+9E40h+var_3430]; Src
 * 00000001800BA0F2: call    sub_18007C338
 * 00000001800BA0F7: nop
 * 00000001800BA0F8: mov     r8, rax
 * 00000001800BA0FB: mov     rdx, r13
 * 00000001800BA0FE: lea     rcx, [rbp+9E40h+var_3450]
 * 00000001800BA105: call    sub_18001C6E8
 * 00000001800BA10A: nop
 * 00000001800BA10B: lea     r8, aVertex; "/Vertex"
 * 00000001800BA112: mov     rdx, rax
 * 00000001800BA115: lea     rcx, [rbp+9E40h+var_5830]
 * 00000001800BA11C: call    sub_18001C61C
 * 00000001800BA121: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BA126: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BA12B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BA130: mov     rcx, rax
 * 00000001800BA133: call    sub_18007C3DC
 * 00000001800BA138: nop
 * 00000001800BA139: lea     rcx, [rbp+9E40h+var_3450]
 * 00000001800BA140: call    sub_180010F30
 * 00000001800BA145: nop
 * 00000001800BA146: lea     rcx, [rbp+9E40h+var_3430]
 * 00000001800BA14D: call    sub_180010F30
 * 00000001800BA152: nop
 * 00000001800BA153: lea     rcx, dword_1801D945C
 * 00000001800BA15A: call    sub_18000C538
 * 00000001800BA15F: mov     rax, [rdi+rbx*8]
 * 00000001800BA163: mov     ecx, [r15+rax]
 * 00000001800BA167: cmp     cs:dword_1801D9460, ecx
 * 00000001800BA16D: jle     loc_1800BA24A
 * 00000001800BA173: lea     rcx, dword_1801D9460
 * 00000001800BA17A: call    sub_18000C5A0
 * 00000001800BA17F: cmp     cs:dword_1801D9460, r14d
 * 00000001800BA186: jnz     loc_1800BA24A
 * 00000001800BA18C: call    sub_1800B18DC
 * 00000001800BA191: mov     qword ptr [rbp+9E40h+var_9600], rax
 * 00000001800BA198: add     rax, 1018h
 * 00000001800BA19E: mov     qword ptr [rbp+9E40h+var_9600+8], rax
 * 00000001800BA1A5: movups  xmm7, [rbp+9E40h+var_9600]
 * 00000001800BA1AC: movups  [rbp+9E40h+var_7B70], xmm7
 * 00000001800BA1B3: mov     dword ptr [rbp+9E40h+var_7B60], esi
 * 00000001800BA1B9: mov     dword ptr [rbp+9E40h+var_7B60+4], esi
 * 00000001800BA1BF: movups  xmm6, [rbp+9E40h+var_7B60]
 * 00000001800BA1C6: call    sub_1800B1A0C
 * 00000001800BA1CB: mov     r8, rax
 * 00000001800BA1CE: mov     r9d, r12d
 * 00000001800BA1D1: mov     edx, 4
 * 00000001800BA1D6: lea     rcx, [rbp+9E40h+var_33D0]; Src
 * 00000001800BA1DD: call    sub_18007C338
 * 00000001800BA1E2: nop
 * 00000001800BA1E3: mov     r8, rax
 * 00000001800BA1E6: mov     rdx, r13
 * 00000001800BA1E9: lea     rcx, [rbp+9E40h+var_33F0]
 * 00000001800BA1F0: call    sub_18001C6E8
 * 00000001800BA1F5: nop
 * 00000001800BA1F6: lea     r8, aVertex; "/Vertex"
 * 00000001800BA1FD: mov     rdx, rax
 * 00000001800BA200: lea     rcx, [rbp+9E40h+var_5810]
 * 00000001800BA207: call    sub_18001C61C
 * 00000001800BA20C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BA211: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BA216: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BA21B: mov     rcx, rax
 * 00000001800BA21E: call    sub_18007C3DC
 * 00000001800BA223: nop
 * 00000001800BA224: lea     rcx, [rbp+9E40h+var_33F0]
 * 00000001800BA22B: call    sub_180010F30
 * 00000001800BA230: nop
 * 00000001800BA231: lea     rcx, [rbp+9E40h+var_33D0]
 * 00000001800BA238: call    sub_180010F30
 * 00000001800BA23D: nop
 * 00000001800BA23E: lea     rcx, dword_1801D9460
 * 00000001800BA245: call    sub_18000C538
 * 00000001800BA24A: mov     rax, [rdi+rbx*8]
 * 00000001800BA24E: mov     ecx, [r15+rax]
 * 00000001800BA252: cmp     cs:dword_1801D9464, ecx
 * 00000001800BA258: jle     loc_1800BA335
 * 00000001800BA25E: lea     rcx, dword_1801D9464
 * 00000001800BA265: call    sub_18000C5A0
 * 00000001800BA26A: cmp     cs:dword_1801D9464, r14d
 * 00000001800BA271: jnz     loc_1800BA335
 * 00000001800BA277: call    sub_1800AF944
 * 00000001800BA27C: mov     qword ptr [rbp+9E40h+var_95F0], rax
 * 00000001800BA283: add     rax, 584h
 * 00000001800BA289: mov     qword ptr [rbp+9E40h+var_95F0+8], rax
 * 00000001800BA290: movups  xmm7, [rbp+9E40h+var_95F0]
 * 00000001800BA297: movups  [rbp+9E40h+var_7B50], xmm7
 * 00000001800BA29E: mov     dword ptr [rbp+9E40h+var_7B40], esi
 * 00000001800BA2A4: mov     dword ptr [rbp+9E40h+var_7B40+4], esi
 * 00000001800BA2AA: movups  xmm6, [rbp+9E40h+var_7B40]
 * 00000001800BA2B1: call    sub_1800B1A0C
 * 00000001800BA2B6: mov     r8, rax
 * 00000001800BA2B9: mov     r9d, r12d
 * 00000001800BA2BC: mov     edx, 5
 * 00000001800BA2C1: lea     rcx, [rbp+9E40h+var_3370]; Src
 * 00000001800BA2C8: call    sub_18007C338
 * 00000001800BA2CD: nop
 * 00000001800BA2CE: mov     r8, rax
 * 00000001800BA2D1: mov     rdx, r13
 * 00000001800BA2D4: lea     rcx, [rbp+9E40h+var_3390]
 * 00000001800BA2DB: call    sub_18001C6E8
 * 00000001800BA2E0: nop
 * 00000001800BA2E1: lea     r8, aVertex; "/Vertex"
 * 00000001800BA2E8: mov     rdx, rax
 * 00000001800BA2EB: lea     rcx, [rbp+9E40h+var_57F0]
 * 00000001800BA2F2: call    sub_18001C61C
 * 00000001800BA2F7: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BA2FC: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BA301: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BA306: mov     rcx, rax
 * 00000001800BA309: call    sub_18007C3DC
 * 00000001800BA30E: nop
 * 00000001800BA30F: lea     rcx, [rbp+9E40h+var_3390]
 * 00000001800BA316: call    sub_180010F30
 * 00000001800BA31B: nop
 * 00000001800BA31C: lea     rcx, [rbp+9E40h+var_3370]
 * 00000001800BA323: call    sub_180010F30
 * 00000001800BA328: nop
 * 00000001800BA329: lea     rcx, dword_1801D9464
 * 00000001800BA330: call    sub_18000C538
 * 00000001800BA335: mov     rax, [rdi+rbx*8]
 * 00000001800BA339: mov     ecx, [r15+rax]
 * 00000001800BA33D: cmp     cs:dword_1801D9468, ecx
 * 00000001800BA343: jle     loc_1800BA420
 * 00000001800BA349: lea     rcx, dword_1801D9468
 * 00000001800BA350: call    sub_18000C5A0
 * 00000001800BA355: cmp     cs:dword_1801D9468, r14d
 * 00000001800BA35C: jnz     loc_1800BA420
 * 00000001800BA362: call    sub_1800B18DC
 * 00000001800BA367: mov     qword ptr [rbp+9E40h+var_95E0], rax
 * 00000001800BA36E: add     rax, 1018h
 * 00000001800BA374: mov     qword ptr [rbp+9E40h+var_95E0+8], rax
 * 00000001800BA37B: movups  xmm7, [rbp+9E40h+var_95E0]
 * 00000001800BA382: movups  [rbp+9E40h+var_7B30], xmm7
 * 00000001800BA389: mov     dword ptr [rbp+9E40h+var_7B20], esi
 * 00000001800BA38F: mov     dword ptr [rbp+9E40h+var_7B20+4], esi
 * 00000001800BA395: movups  xmm6, [rbp+9E40h+var_7B20]
 * 00000001800BA39C: call    sub_1800B1A0C
 * 00000001800BA3A1: mov     r8, rax
 * 00000001800BA3A4: mov     r9d, r12d
 * 00000001800BA3A7: mov     edx, 6
 * 00000001800BA3AC: lea     rcx, [rbp+9E40h+var_3310]; Src
 * 00000001800BA3B3: call    sub_18007C338
 * 00000001800BA3B8: nop
 * 00000001800BA3B9: mov     r8, rax
 * 00000001800BA3BC: mov     rdx, r13
 * 00000001800BA3BF: lea     rcx, [rbp+9E40h+var_3330]
 * 00000001800BA3C6: call    sub_18001C6E8
 * 00000001800BA3CB: nop
 * 00000001800BA3CC: lea     r8, aVertex; "/Vertex"
 * 00000001800BA3D3: mov     rdx, rax
 * 00000001800BA3D6: lea     rcx, [rbp+9E40h+var_57D0]
 * 00000001800BA3DD: call    sub_18001C61C
 * 00000001800BA3E2: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BA3E7: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BA3EC: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BA3F1: mov     rcx, rax
 * 00000001800BA3F4: call    sub_18007C3DC
 * 00000001800BA3F9: nop
 * 00000001800BA3FA: lea     rcx, [rbp+9E40h+var_3330]
 * 00000001800BA401: call    sub_180010F30
 * 00000001800BA406: nop
 * 00000001800BA407: lea     rcx, [rbp+9E40h+var_3310]
 * 00000001800BA40E: call    sub_180010F30
 * 00000001800BA413: nop
 * 00000001800BA414: lea     rcx, dword_1801D9468
 * 00000001800BA41B: call    sub_18000C538
 * 00000001800BA420: mov     rax, [rdi+rbx*8]
 * 00000001800BA424: mov     ecx, [r15+rax]
 * 00000001800BA428: cmp     cs:dword_1801D946C, ecx
 * 00000001800BA42E: jle     loc_1800BA50B
 * 00000001800BA434: lea     rcx, dword_1801D946C
 * 00000001800BA43B: call    sub_18000C5A0
 * 00000001800BA440: cmp     cs:dword_1801D946C, r14d
 * 00000001800BA447: jnz     loc_1800BA50B
 * 00000001800BA44D: call    sub_1800B18DC
 * 00000001800BA452: mov     qword ptr [rbp+9E40h+var_95D0], rax
 * 00000001800BA459: add     rax, 1018h
 * 00000001800BA45F: mov     qword ptr [rbp+9E40h+var_95D0+8], rax
 * 00000001800BA466: movups  xmm7, [rbp+9E40h+var_95D0]
 * 00000001800BA46D: movups  [rbp+9E40h+var_7B10], xmm7
 * 00000001800BA474: mov     dword ptr [rbp+9E40h+var_7B00], esi
 * 00000001800BA47A: mov     dword ptr [rbp+9E40h+var_7B00+4], esi
 * 00000001800BA480: movups  xmm6, [rbp+9E40h+var_7B00]
 * 00000001800BA487: call    sub_1800B1A0C
 * 00000001800BA48C: mov     r8, rax
 * 00000001800BA48F: mov     r9d, r12d
 * 00000001800BA492: mov     edx, 8
 * 00000001800BA497: lea     rcx, [rbp+9E40h+var_32B0]; Src
 * 00000001800BA49E: call    sub_18007C338
 * 00000001800BA4A3: nop
 * 00000001800BA4A4: mov     r8, rax
 * 00000001800BA4A7: mov     rdx, r13
 * 00000001800BA4AA: lea     rcx, [rbp+9E40h+var_32D0]
 * 00000001800BA4B1: call    sub_18001C6E8
 * 00000001800BA4B6: nop
 * 00000001800BA4B7: lea     r8, aVertex; "/Vertex"
 * 00000001800BA4BE: mov     rdx, rax
 * 00000001800BA4C1: lea     rcx, [rbp+9E40h+var_57B0]
 * 00000001800BA4C8: call    sub_18001C61C
 * 00000001800BA4CD: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BA4D2: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BA4D7: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BA4DC: mov     rcx, rax
 * 00000001800BA4DF: call    sub_18007C3DC
 * 00000001800BA4E4: nop
 * 00000001800BA4E5: lea     rcx, [rbp+9E40h+var_32D0]
 * 00000001800BA4EC: call    sub_180010F30
 * 00000001800BA4F1: nop
 * 00000001800BA4F2: lea     rcx, [rbp+9E40h+var_32B0]
 * 00000001800BA4F9: call    sub_180010F30
 * 00000001800BA4FE: nop
 * 00000001800BA4FF: lea     rcx, dword_1801D946C
 * 00000001800BA506: call    sub_18000C538
 * 00000001800BA50B: mov     rax, [rdi+rbx*8]
 * 00000001800BA50F: mov     ecx, [r15+rax]
 * 00000001800BA513: cmp     cs:dword_1801D9470, ecx
 * 00000001800BA519: jle     loc_1800BA5F4
 * 00000001800BA51F: lea     rcx, dword_1801D9470
 * 00000001800BA526: call    sub_18000C5A0
 * 00000001800BA52B: cmp     cs:dword_1801D9470, r14d
 * 00000001800BA532: jnz     loc_1800BA5F4
 * 00000001800BA538: call    sub_1800B192C
 * 00000001800BA53D: mov     qword ptr [rbp+9E40h+var_95C0], rax
 * 00000001800BA544: add     rax, 70Ch
 * 00000001800BA54A: mov     qword ptr [rbp+9E40h+var_95C0+8], rax
 * 00000001800BA551: movups  xmm7, [rbp+9E40h+var_95C0]
 * 00000001800BA558: movups  [rbp+9E40h+var_7AF0], xmm7
 * 00000001800BA55F: mov     dword ptr [rbp+9E40h+var_7AE0], esi
 * 00000001800BA565: mov     dword ptr [rbp+9E40h+var_7AE0+4], esi
 * 00000001800BA56B: movups  xmm6, [rbp+9E40h+var_7AE0]
 * 00000001800BA572: call    sub_1800B1A0C
 * 00000001800BA577: mov     r8, rax
 * 00000001800BA57A: mov     r9d, r12d
 * 00000001800BA57D: mov     rdx, r12
 * 00000001800BA580: lea     rcx, [rbp+9E40h+var_3250]; Src
 * 00000001800BA587: call    sub_18007C338
 * 00000001800BA58C: nop
 * 00000001800BA58D: mov     r8, rax
 * 00000001800BA590: mov     rdx, r13
 * 00000001800BA593: lea     rcx, [rbp+9E40h+var_3270]
 * 00000001800BA59A: call    sub_18001C6E8
 * 00000001800BA59F: nop
 * 00000001800BA5A0: lea     r8, aVertex; "/Vertex"
 * 00000001800BA5A7: mov     rdx, rax
 * 00000001800BA5AA: lea     rcx, [rbp+9E40h+var_5790]
 * 00000001800BA5B1: call    sub_18001C61C
 * 00000001800BA5B6: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BA5BB: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BA5C0: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BA5C5: mov     rcx, rax
 * 00000001800BA5C8: call    sub_18007C3DC
 * 00000001800BA5CD: nop
 * 00000001800BA5CE: lea     rcx, [rbp+9E40h+var_3270]
 * 00000001800BA5D5: call    sub_180010F30
 * 00000001800BA5DA: nop
 * 00000001800BA5DB: lea     rcx, [rbp+9E40h+var_3250]
 * 00000001800BA5E2: call    sub_180010F30
 * 00000001800BA5E7: nop
 * 00000001800BA5E8: lea     rcx, dword_1801D9470
 * 00000001800BA5EF: call    sub_18000C538
 * 00000001800BA5F4: mov     rax, [rdi+rbx*8]
 * 00000001800BA5F8: mov     ecx, [r15+rax]
 * 00000001800BA5FC: cmp     cs:dword_1801D9474, ecx
 * 00000001800BA602: jle     loc_1800BA6DF
 * 00000001800BA608: lea     rcx, dword_1801D9474
 * 00000001800BA60F: call    sub_18000C5A0
 * 00000001800BA614: cmp     cs:dword_1801D9474, r14d
 * 00000001800BA61B: jnz     loc_1800BA6DF
 * 00000001800BA621: call    sub_1800B18DC
 * 00000001800BA626: mov     qword ptr [rbp+9E40h+var_95B0], rax
 * 00000001800BA62D: add     rax, 1018h
 * 00000001800BA633: mov     qword ptr [rbp+9E40h+var_95B0+8], rax
 * 00000001800BA63A: movups  xmm7, [rbp+9E40h+var_95B0]
 * 00000001800BA641: movups  [rbp+9E40h+var_7AD0], xmm7
 * 00000001800BA648: mov     dword ptr [rbp+9E40h+var_7AC0], esi
 * 00000001800BA64E: mov     dword ptr [rbp+9E40h+var_7AC0+4], esi
 * 00000001800BA654: movups  xmm6, [rbp+9E40h+var_7AC0]
 * 00000001800BA65B: call    sub_1800B1A0C
 * 00000001800BA660: mov     r8, rax
 * 00000001800BA663: mov     r9d, r12d
 * 00000001800BA666: mov     edx, 0Ah
 * 00000001800BA66B: lea     rcx, [rbp+9E40h+var_31F0]; Src
 * 00000001800BA672: call    sub_18007C338
 * 00000001800BA677: nop
 * 00000001800BA678: mov     r8, rax
 * 00000001800BA67B: mov     rdx, r13
 * 00000001800BA67E: lea     rcx, [rbp+9E40h+var_3210]
 * 00000001800BA685: call    sub_18001C6E8
 * 00000001800BA68A: nop
 * 00000001800BA68B: lea     r8, aVertex; "/Vertex"
 * 00000001800BA692: mov     rdx, rax
 * 00000001800BA695: lea     rcx, [rbp+9E40h+var_5770]
 * 00000001800BA69C: call    sub_18001C61C
 * 00000001800BA6A1: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BA6A6: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BA6AB: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BA6B0: mov     rcx, rax
 * 00000001800BA6B3: call    sub_18007C3DC
 * 00000001800BA6B8: nop
 * 00000001800BA6B9: lea     rcx, [rbp+9E40h+var_3210]
 * 00000001800BA6C0: call    sub_180010F30
 * 00000001800BA6C5: nop
 * 00000001800BA6C6: lea     rcx, [rbp+9E40h+var_31F0]
 * 00000001800BA6CD: call    sub_180010F30
 * 00000001800BA6D2: nop
 * 00000001800BA6D3: lea     rcx, dword_1801D9474
 * 00000001800BA6DA: call    sub_18000C538
 * 00000001800BA6DF: mov     rax, [rdi+rbx*8]
 * 00000001800BA6E3: mov     ecx, [r15+rax]
 * 00000001800BA6E7: cmp     cs:dword_1801D9478, ecx
 * 00000001800BA6ED: jle     loc_1800BA7CA
 * 00000001800BA6F3: lea     rcx, dword_1801D9478
 * 00000001800BA6FA: call    sub_18000C5A0
 * 00000001800BA6FF: cmp     cs:dword_1801D9478, r14d
 * 00000001800BA706: jnz     loc_1800BA7CA
 * 00000001800BA70C: call    sub_1800B18DC
 * 00000001800BA711: mov     qword ptr [rbp+9E40h+var_95A0], rax
 * 00000001800BA718: add     rax, 1018h
 * 00000001800BA71E: mov     qword ptr [rbp+9E40h+var_95A0+8], rax
 * 00000001800BA725: movups  xmm7, [rbp+9E40h+var_95A0]
 * 00000001800BA72C: movups  [rbp+9E40h+var_7AB0], xmm7
 * 00000001800BA733: mov     dword ptr [rbp+9E40h+var_7AA0], esi
 * 00000001800BA739: mov     dword ptr [rbp+9E40h+var_7AA0+4], esi
 * 00000001800BA73F: movups  xmm6, [rbp+9E40h+var_7AA0]
 * 00000001800BA746: call    sub_1800B1A0C
 * 00000001800BA74B: mov     r8, rax
 * 00000001800BA74E: mov     r9d, r12d
 * 00000001800BA751: mov     edx, 10h
 * 00000001800BA756: lea     rcx, [rbp+9E40h+var_3190]; Src
 * 00000001800BA75D: call    sub_18007C338
 * 00000001800BA762: nop
 * 00000001800BA763: mov     r8, rax
 * 00000001800BA766: mov     rdx, r13
 * 00000001800BA769: lea     rcx, [rbp+9E40h+var_31B0]
 * 00000001800BA770: call    sub_18001C6E8
 * 00000001800BA775: nop
 * 00000001800BA776: lea     r8, aVertex; "/Vertex"
 * 00000001800BA77D: mov     rdx, rax
 * 00000001800BA780: lea     rcx, [rbp+9E40h+var_5750]
 * 00000001800BA787: call    sub_18001C61C
 * 00000001800BA78C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BA791: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BA796: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BA79B: mov     rcx, rax
 * 00000001800BA79E: call    sub_18007C3DC
 * 00000001800BA7A3: nop
 * 00000001800BA7A4: lea     rcx, [rbp+9E40h+var_31B0]
 * 00000001800BA7AB: call    sub_180010F30
 * 00000001800BA7B0: nop
 * 00000001800BA7B1: lea     rcx, [rbp+9E40h+var_3190]
 * 00000001800BA7B8: call    sub_180010F30
 * 00000001800BA7BD: nop
 * 00000001800BA7BE: lea     rcx, dword_1801D9478
 * 00000001800BA7C5: call    sub_18000C538
 * 00000001800BA7CA: mov     rax, [rdi+rbx*8]
 * 00000001800BA7CE: mov     ecx, [r15+rax]
 * 00000001800BA7D2: cmp     cs:dword_1801D947C, ecx
 * 00000001800BA7D8: jle     loc_1800BA8B5
 * 00000001800BA7DE: lea     rcx, dword_1801D947C
 * 00000001800BA7E5: call    sub_18000C5A0
 * 00000001800BA7EA: cmp     cs:dword_1801D947C, r14d
 * 00000001800BA7F1: jnz     loc_1800BA8B5
 * 00000001800BA7F7: call    sub_1800B18DC
 * 00000001800BA7FC: mov     qword ptr [rbp+9E40h+var_9590], rax
 * 00000001800BA803: add     rax, 1018h
 * 00000001800BA809: mov     qword ptr [rbp+9E40h+var_9590+8], rax
 * 00000001800BA810: movups  xmm7, [rbp+9E40h+var_9590]
 * 00000001800BA817: movups  [rbp+9E40h+var_7A90], xmm7
 * 00000001800BA81E: mov     dword ptr [rbp+9E40h+var_7A80], esi
 * 00000001800BA824: mov     dword ptr [rbp+9E40h+var_7A80+4], esi
 * 00000001800BA82A: movups  xmm6, [rbp+9E40h+var_7A80]
 * 00000001800BA831: call    sub_1800B1A0C
 * 00000001800BA836: mov     r8, rax
 * 00000001800BA839: mov     r9d, r12d
 * 00000001800BA83C: mov     edx, 12h
 * 00000001800BA841: lea     rcx, [rbp+9E40h+var_3130]; Src
 * 00000001800BA848: call    sub_18007C338
 * 00000001800BA84D: nop
 * 00000001800BA84E: mov     r8, rax
 * 00000001800BA851: mov     rdx, r13
 * 00000001800BA854: lea     rcx, [rbp+9E40h+var_3150]
 * 00000001800BA85B: call    sub_18001C6E8
 * 00000001800BA860: nop
 * 00000001800BA861: lea     r8, aVertex; "/Vertex"
 * 00000001800BA868: mov     rdx, rax
 * 00000001800BA86B: lea     rcx, [rbp+9E40h+var_5730]
 * 00000001800BA872: call    sub_18001C61C
 * 00000001800BA877: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BA87C: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BA881: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BA886: mov     rcx, rax
 * 00000001800BA889: call    sub_18007C3DC
 * 00000001800BA88E: nop
 * 00000001800BA88F: lea     rcx, [rbp+9E40h+var_3150]
 * 00000001800BA896: call    sub_180010F30
 * 00000001800BA89B: nop
 * 00000001800BA89C: lea     rcx, [rbp+9E40h+var_3130]
 * 00000001800BA8A3: call    sub_180010F30
 * 00000001800BA8A8: nop
 * 00000001800BA8A9: lea     rcx, dword_1801D947C
 * 00000001800BA8B0: call    sub_18000C538
 * 00000001800BA8B5: mov     rax, [rdi+rbx*8]
 * 00000001800BA8B9: mov     ecx, [r15+rax]
 * 00000001800BA8BD: cmp     cs:dword_1801D9480, ecx
 * 00000001800BA8C3: jle     loc_1800BA9A0
 * 00000001800BA8C9: lea     rcx, dword_1801D9480
 * 00000001800BA8D0: call    sub_18000C5A0
 * 00000001800BA8D5: cmp     cs:dword_1801D9480, r14d
 * 00000001800BA8DC: jnz     loc_1800BA9A0
 * 00000001800BA8E2: call    sub_1800B18DC
 * 00000001800BA8E7: mov     qword ptr [rbp+9E40h+var_9580], rax
 * 00000001800BA8EE: add     rax, 1018h
 * 00000001800BA8F4: mov     qword ptr [rbp+9E40h+var_9580+8], rax
 * 00000001800BA8FB: movups  xmm7, [rbp+9E40h+var_9580]
 * 00000001800BA902: movups  [rbp+9E40h+var_7A70], xmm7
 * 00000001800BA909: mov     dword ptr [rbp+9E40h+var_7A60], esi
 * 00000001800BA90F: mov     dword ptr [rbp+9E40h+var_7A60+4], esi
 * 00000001800BA915: movups  xmm6, [rbp+9E40h+var_7A60]
 * 00000001800BA91C: call    sub_1800B1A0C
 * 00000001800BA921: mov     r8, rax
 * 00000001800BA924: mov     r9d, r12d
 * 00000001800BA927: mov     edx, 14h
 * 00000001800BA92C: lea     rcx, [rbp+9E40h+var_30D0]; Src
 * 00000001800BA933: call    sub_18007C338
 * 00000001800BA938: nop
 * 00000001800BA939: mov     r8, rax
 * 00000001800BA93C: mov     rdx, r13
 * 00000001800BA93F: lea     rcx, [rbp+9E40h+var_30F0]
 * 00000001800BA946: call    sub_18001C6E8
 * 00000001800BA94B: nop
 * 00000001800BA94C: lea     r8, aVertex; "/Vertex"
 * 00000001800BA953: mov     rdx, rax
 * 00000001800BA956: lea     rcx, [rbp+9E40h+var_5710]
 * 00000001800BA95D: call    sub_18001C61C
 * 00000001800BA962: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BA967: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BA96C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BA971: mov     rcx, rax
 * 00000001800BA974: call    sub_18007C3DC
 * 00000001800BA979: nop
 * 00000001800BA97A: lea     rcx, [rbp+9E40h+var_30F0]
 * 00000001800BA981: call    sub_180010F30
 * 00000001800BA986: nop
 * 00000001800BA987: lea     rcx, [rbp+9E40h+var_30D0]
 * 00000001800BA98E: call    sub_180010F30
 * 00000001800BA993: nop
 * 00000001800BA994: lea     rcx, dword_1801D9480
 * 00000001800BA99B: call    sub_18000C538
 * 00000001800BA9A0: mov     rax, [rdi+rbx*8]
 * 00000001800BA9A4: mov     ecx, [r15+rax]
 * 00000001800BA9A8: cmp     cs:dword_1801D9484, ecx
 * 00000001800BA9AE: jle     loc_1800BAA8B
 * 00000001800BA9B4: lea     rcx, dword_1801D9484
 * 00000001800BA9BB: call    sub_18000C5A0
 * 00000001800BA9C0: cmp     cs:dword_1801D9484, r14d
 * 00000001800BA9C7: jnz     loc_1800BAA8B
 * 00000001800BA9CD: call    sub_1800B18DC
 * 00000001800BA9D2: mov     qword ptr [rbp+9E40h+var_9570], rax
 * 00000001800BA9D9: add     rax, 1018h
 * 00000001800BA9DF: mov     qword ptr [rbp+9E40h+var_9570+8], rax
 * 00000001800BA9E6: movups  xmm7, [rbp+9E40h+var_9570]
 * 00000001800BA9ED: movups  [rbp+9E40h+var_7A50], xmm7
 * 00000001800BA9F4: mov     dword ptr [rbp+9E40h+var_7A40], esi
 * 00000001800BA9FA: mov     dword ptr [rbp+9E40h+var_7A40+4], esi
 * 00000001800BAA00: movups  xmm6, [rbp+9E40h+var_7A40]
 * 00000001800BAA07: call    sub_1800B1A0C
 * 00000001800BAA0C: mov     r8, rax
 * 00000001800BAA0F: mov     r9d, r12d
 * 00000001800BAA12: mov     edx, 16h
 * 00000001800BAA17: lea     rcx, [rbp+9E40h+var_3070]; Src
 * 00000001800BAA1E: call    sub_18007C338
 * 00000001800BAA23: nop
 * 00000001800BAA24: mov     r8, rax
 * 00000001800BAA27: mov     rdx, r13
 * 00000001800BAA2A: lea     rcx, [rbp+9E40h+var_3090]
 * 00000001800BAA31: call    sub_18001C6E8
 * 00000001800BAA36: nop
 * 00000001800BAA37: lea     r8, aVertex; "/Vertex"
 * 00000001800BAA3E: mov     rdx, rax
 * 00000001800BAA41: lea     rcx, [rbp+9E40h+var_56F0]
 * 00000001800BAA48: call    sub_18001C61C
 * 00000001800BAA4D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BAA52: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BAA57: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BAA5C: mov     rcx, rax
 * 00000001800BAA5F: call    sub_18007C3DC
 * 00000001800BAA64: nop
 * 00000001800BAA65: lea     rcx, [rbp+9E40h+var_3090]
 * 00000001800BAA6C: call    sub_180010F30
 * 00000001800BAA71: nop
 * 00000001800BAA72: lea     rcx, [rbp+9E40h+var_3070]
 * 00000001800BAA79: call    sub_180010F30
 * 00000001800BAA7E: nop
 * 00000001800BAA7F: lea     rcx, dword_1801D9484
 * 00000001800BAA86: call    sub_18000C538
 * 00000001800BAA8B: mov     rax, [rdi+rbx*8]
 * 00000001800BAA8F: mov     ecx, [r15+rax]
 * 00000001800BAA93: cmp     cs:dword_1801D9488, ecx
 * 00000001800BAA99: jle     loc_1800BAB76
 * 00000001800BAA9F: lea     rcx, dword_1801D9488
 * 00000001800BAAA6: call    sub_18000C5A0
 * 00000001800BAAAB: cmp     cs:dword_1801D9488, r14d
 * 00000001800BAAB2: jnz     loc_1800BAB76
 * 00000001800BAAB8: call    sub_1800B18DC
 * 00000001800BAABD: mov     qword ptr [rbp+9E40h+var_9560], rax
 * 00000001800BAAC4: add     rax, 1018h
 * 00000001800BAACA: mov     qword ptr [rbp+9E40h+var_9560+8], rax
 * 00000001800BAAD1: movups  xmm7, [rbp+9E40h+var_9560]
 * 00000001800BAAD8: movups  [rbp+9E40h+var_7A30], xmm7
 * 00000001800BAADF: mov     dword ptr [rbp+9E40h+var_7A20], esi
 * 00000001800BAAE5: mov     dword ptr [rbp+9E40h+var_7A20+4], esi
 * 00000001800BAAEB: movups  xmm6, [rbp+9E40h+var_7A20]
 * 00000001800BAAF2: call    sub_1800B1A0C
 * 00000001800BAAF7: mov     r8, rax
 * 00000001800BAAFA: mov     r9d, r12d
 * 00000001800BAAFD: mov     edx, 18h
 * 00000001800BAB02: lea     rcx, [rbp+9E40h+var_3010]; Src
 * 00000001800BAB09: call    sub_18007C338
 * 00000001800BAB0E: nop
 * 00000001800BAB0F: mov     r8, rax
 * 00000001800BAB12: mov     rdx, r13
 * 00000001800BAB15: lea     rcx, [rbp+9E40h+var_3030]
 * 00000001800BAB1C: call    sub_18001C6E8
 * 00000001800BAB21: nop
 * 00000001800BAB22: lea     r8, aVertex; "/Vertex"
 * 00000001800BAB29: mov     rdx, rax
 * 00000001800BAB2C: lea     rcx, [rbp+9E40h+var_56D0]
 * 00000001800BAB33: call    sub_18001C61C
 * 00000001800BAB38: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BAB3D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BAB42: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BAB47: mov     rcx, rax
 * 00000001800BAB4A: call    sub_18007C3DC
 * 00000001800BAB4F: nop
 * 00000001800BAB50: lea     rcx, [rbp+9E40h+var_3030]
 * 00000001800BAB57: call    sub_180010F30
 * 00000001800BAB5C: nop
 * 00000001800BAB5D: lea     rcx, [rbp+9E40h+var_3010]
 * 00000001800BAB64: call    sub_180010F30
 * 00000001800BAB69: nop
 * 00000001800BAB6A: lea     rcx, dword_1801D9488
 * 00000001800BAB71: call    sub_18000C538
 * 00000001800BAB76: mov     rax, [rdi+rbx*8]
 * 00000001800BAB7A: mov     ecx, [r15+rax]
 * 00000001800BAB7E: cmp     cs:dword_1801D948C, ecx
 * 00000001800BAB84: jle     loc_1800BAC61
 * 00000001800BAB8A: lea     rcx, dword_1801D948C
 * 00000001800BAB91: call    sub_18000C5A0
 * 00000001800BAB96: cmp     cs:dword_1801D948C, r14d
 * 00000001800BAB9D: jnz     loc_1800BAC61
 * 00000001800BABA3: call    sub_1800B18DC
 * 00000001800BABA8: mov     qword ptr [rbp+9E40h+var_9550], rax
 * 00000001800BABAF: add     rax, 1018h
 * 00000001800BABB5: mov     qword ptr [rbp+9E40h+var_9550+8], rax
 * 00000001800BABBC: movups  xmm7, [rbp+9E40h+var_9550]
 * 00000001800BABC3: movups  [rbp+9E40h+var_7A10], xmm7
 * 00000001800BABCA: mov     dword ptr [rbp+9E40h+var_7A00], esi
 * 00000001800BABD0: mov     dword ptr [rbp+9E40h+var_7A00+4], esi
 * 00000001800BABD6: movups  xmm6, [rbp+9E40h+var_7A00]
 * 00000001800BABDD: call    sub_1800B1A0C
 * 00000001800BABE2: mov     r8, rax
 * 00000001800BABE5: mov     r9d, r12d
 * 00000001800BABE8: mov     edx, 1Ah
 * 00000001800BABED: lea     rcx, [rbp+9E40h+var_2FB0]; Src
 * 00000001800BABF4: call    sub_18007C338
 * 00000001800BABF9: nop
 * 00000001800BABFA: mov     r8, rax
 * 00000001800BABFD: mov     rdx, r13
 * 00000001800BAC00: lea     rcx, [rbp+9E40h+var_2FD0]
 * 00000001800BAC07: call    sub_18001C6E8
 * 00000001800BAC0C: nop
 * 00000001800BAC0D: lea     r8, aVertex; "/Vertex"
 * 00000001800BAC14: mov     rdx, rax
 * 00000001800BAC17: lea     rcx, [rbp+9E40h+var_56B0]
 * 00000001800BAC1E: call    sub_18001C61C
 * 00000001800BAC23: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BAC28: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BAC2D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BAC32: mov     rcx, rax
 * 00000001800BAC35: call    sub_18007C3DC
 * 00000001800BAC3A: nop
 * 00000001800BAC3B: lea     rcx, [rbp+9E40h+var_2FD0]
 * 00000001800BAC42: call    sub_180010F30
 * 00000001800BAC47: nop
 * 00000001800BAC48: lea     rcx, [rbp+9E40h+var_2FB0]
 * 00000001800BAC4F: call    sub_180010F30
 * 00000001800BAC54: nop
 * 00000001800BAC55: lea     rcx, dword_1801D948C
 * 00000001800BAC5C: call    sub_18000C538
 * 00000001800BAC61: mov     rax, [rdi+rbx*8]
 * 00000001800BAC65: mov     ecx, [r15+rax]
 * 00000001800BAC69: cmp     cs:dword_1801D9490, ecx
 * 00000001800BAC6F: jle     loc_1800BAD4C
 * 00000001800BAC75: lea     rcx, dword_1801D9490
 * 00000001800BAC7C: call    sub_18000C5A0
 * 00000001800BAC81: cmp     cs:dword_1801D9490, r14d
 * 00000001800BAC88: jnz     loc_1800BAD4C
 * 00000001800BAC8E: call    sub_1800B196C
 * 00000001800BAC93: mov     qword ptr [rbp+9E40h+var_9540], rax
 * 00000001800BAC9A: add     rax, 1A18h
 * 00000001800BACA0: mov     qword ptr [rbp+9E40h+var_9540+8], rax
 * 00000001800BACA7: movups  xmm7, [rbp+9E40h+var_9540]
 * 00000001800BACAE: movups  [rbp+9E40h+var_79F0], xmm7
 * 00000001800BACB5: mov     dword ptr [rbp+9E40h+var_79E0], esi
 * 00000001800BACBB: mov     dword ptr [rbp+9E40h+var_79E0+4], esi
 * 00000001800BACC1: movups  xmm6, [rbp+9E40h+var_79E0]
 * 00000001800BACC8: call    sub_1800B1A0C
 * 00000001800BACCD: mov     r8, rax
 * 00000001800BACD0: mov     r9d, r12d
 * 00000001800BACD3: mov     edx, 20h ; ' '
 * 00000001800BACD8: lea     rcx, [rbp+9E40h+var_2F50]; Src
 * 00000001800BACDF: call    sub_18007C338
 * 00000001800BACE4: nop
 * 00000001800BACE5: mov     r8, rax
 * 00000001800BACE8: mov     rdx, r13
 * 00000001800BACEB: lea     rcx, [rbp+9E40h+var_2F70]
 * 00000001800BACF2: call    sub_18001C6E8
 * 00000001800BACF7: nop
 * 00000001800BACF8: lea     r8, aVertex; "/Vertex"
 * 00000001800BACFF: mov     rdx, rax
 * 00000001800BAD02: lea     rcx, [rbp+9E40h+var_5690]
 * 00000001800BAD09: call    sub_18001C61C
 * 00000001800BAD0E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BAD13: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BAD18: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BAD1D: mov     rcx, rax
 * 00000001800BAD20: call    sub_18007C3DC
 * 00000001800BAD25: nop
 * 00000001800BAD26: lea     rcx, [rbp+9E40h+var_2F70]
 * 00000001800BAD2D: call    sub_180010F30
 * 00000001800BAD32: nop
 * 00000001800BAD33: lea     rcx, [rbp+9E40h+var_2F50]
 * 00000001800BAD3A: call    sub_180010F30
 * 00000001800BAD3F: nop
 * 00000001800BAD40: lea     rcx, dword_1801D9490
 * 00000001800BAD47: call    sub_18000C538
 * 00000001800BAD4C: mov     rax, [rdi+rbx*8]
 * 00000001800BAD50: mov     ecx, [r15+rax]
 * 00000001800BAD54: cmp     cs:dword_1801D9494, ecx
 * 00000001800BAD5A: jle     loc_1800BAE37
 * 00000001800BAD60: lea     rcx, dword_1801D9494
 * 00000001800BAD67: call    sub_18000C5A0
 * 00000001800BAD6C: cmp     cs:dword_1801D9494, r14d
 * 00000001800BAD73: jnz     loc_1800BAE37
 * 00000001800BAD79: call    sub_1800AF9B4
 * 00000001800BAD7E: mov     qword ptr [rbp+9E40h+var_9530], rax
 * 00000001800BAD85: add     rax, 9A8h
 * 00000001800BAD8B: mov     qword ptr [rbp+9E40h+var_9530+8], rax
 * 00000001800BAD92: movups  xmm7, [rbp+9E40h+var_9530]
 * 00000001800BAD99: movups  [rbp+9E40h+var_79D0], xmm7
 * 00000001800BADA0: mov     dword ptr [rbp+9E40h+var_79C0], esi
 * 00000001800BADA6: mov     dword ptr [rbp+9E40h+var_79C0+4], esi
 * 00000001800BADAC: movups  xmm6, [rbp+9E40h+var_79C0]
 * 00000001800BADB3: call    sub_1800B1A0C
 * 00000001800BADB8: mov     r8, rax
 * 00000001800BADBB: mov     r9d, r12d
 * 00000001800BADBE: mov     edx, 21h ; '!'
 * 00000001800BADC3: lea     rcx, [rbp+9E40h+var_2EF0]; Src
 * 00000001800BADCA: call    sub_18007C338
 * 00000001800BADCF: nop
 * 00000001800BADD0: mov     r8, rax
 * 00000001800BADD3: mov     rdx, r13
 * 00000001800BADD6: lea     rcx, [rbp+9E40h+var_2F10]
 * 00000001800BADDD: call    sub_18001C6E8
 * 00000001800BADE2: nop
 * 00000001800BADE3: lea     r8, aVertex; "/Vertex"
 * 00000001800BADEA: mov     rdx, rax
 * 00000001800BADED: lea     rcx, [rbp+9E40h+var_5670]
 * 00000001800BADF4: call    sub_18001C61C
 * 00000001800BADF9: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BADFE: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BAE03: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BAE08: mov     rcx, rax
 * 00000001800BAE0B: call    sub_18007C3DC
 * 00000001800BAE10: nop
 * 00000001800BAE11: lea     rcx, [rbp+9E40h+var_2F10]
 * 00000001800BAE18: call    sub_180010F30
 * 00000001800BAE1D: nop
 * 00000001800BAE1E: lea     rcx, [rbp+9E40h+var_2EF0]
 * 00000001800BAE25: call    sub_180010F30
 * 00000001800BAE2A: nop
 * 00000001800BAE2B: lea     rcx, dword_1801D9494
 * 00000001800BAE32: call    sub_18000C538
 * 00000001800BAE37: mov     rax, [rdi+rbx*8]
 * 00000001800BAE3B: mov     ecx, [r15+rax]
 * 00000001800BAE3F: cmp     cs:dword_1801D9498, ecx
 * 00000001800BAE45: jle     loc_1800BAF22
 * 00000001800BAE4B: lea     rcx, dword_1801D9498
 * 00000001800BAE52: call    sub_18000C5A0
 * 00000001800BAE57: cmp     cs:dword_1801D9498, r14d
 * 00000001800BAE5E: jnz     loc_1800BAF22
 * 00000001800BAE64: call    sub_1800B196C
 * 00000001800BAE69: mov     qword ptr [rbp+9E40h+var_9520], rax
 * 00000001800BAE70: add     rax, 1A18h
 * 00000001800BAE76: mov     qword ptr [rbp+9E40h+var_9520+8], rax
 * 00000001800BAE7D: movups  xmm7, [rbp+9E40h+var_9520]
 * 00000001800BAE84: movups  [rbp+9E40h+var_79B0], xmm7
 * 00000001800BAE8B: mov     dword ptr [rbp+9E40h+var_79A0], esi
 * 00000001800BAE91: mov     dword ptr [rbp+9E40h+var_79A0+4], esi
 * 00000001800BAE97: movups  xmm6, [rbp+9E40h+var_79A0]
 * 00000001800BAE9E: call    sub_1800B1A0C
 * 00000001800BAEA3: mov     r8, rax
 * 00000001800BAEA6: mov     r9d, r12d
 * 00000001800BAEA9: mov     edx, 22h ; '"'
 * 00000001800BAEAE: lea     rcx, [rbp+9E40h+var_2E90]; Src
 * 00000001800BAEB5: call    sub_18007C338
 * 00000001800BAEBA: nop
 * 00000001800BAEBB: mov     r8, rax
 * 00000001800BAEBE: mov     rdx, r13
 * 00000001800BAEC1: lea     rcx, [rbp+9E40h+var_2EB0]
 * 00000001800BAEC8: call    sub_18001C6E8
 * 00000001800BAECD: nop
 * 00000001800BAECE: lea     r8, aVertex; "/Vertex"
 * 00000001800BAED5: mov     rdx, rax
 * 00000001800BAED8: lea     rcx, [rbp+9E40h+var_5650]
 * 00000001800BAEDF: call    sub_18001C61C
 * 00000001800BAEE4: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BAEE9: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BAEEE: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BAEF3: mov     rcx, rax
 * 00000001800BAEF6: call    sub_18007C3DC
 * 00000001800BAEFB: nop
 * 00000001800BAEFC: lea     rcx, [rbp+9E40h+var_2EB0]
 * 00000001800BAF03: call    sub_180010F30
 * 00000001800BAF08: nop
 * 00000001800BAF09: lea     rcx, [rbp+9E40h+var_2E90]
 * 00000001800BAF10: call    sub_180010F30
 * 00000001800BAF15: nop
 * 00000001800BAF16: lea     rcx, dword_1801D9498
 * 00000001800BAF1D: call    sub_18000C538
 * 00000001800BAF22: mov     rax, [rdi+rbx*8]
 * 00000001800BAF26: mov     ecx, [r15+rax]
 * 00000001800BAF2A: cmp     cs:dword_1801D949C, ecx
 * 00000001800BAF30: jle     loc_1800BB00D
 * 00000001800BAF36: lea     rcx, dword_1801D949C
 * 00000001800BAF3D: call    sub_18000C5A0
 * 00000001800BAF42: cmp     cs:dword_1801D949C, r14d
 * 00000001800BAF49: jnz     loc_1800BB00D
 * 00000001800BAF4F: call    sub_1800B196C
 * 00000001800BAF54: mov     qword ptr [rbp+9E40h+var_9510], rax
 * 00000001800BAF5B: add     rax, 1A18h
 * 00000001800BAF61: mov     qword ptr [rbp+9E40h+var_9510+8], rax
 * 00000001800BAF68: movups  xmm7, [rbp+9E40h+var_9510]
 * 00000001800BAF6F: movups  [rbp+9E40h+var_7990], xmm7
 * 00000001800BAF76: mov     dword ptr [rbp+9E40h+var_7980], esi
 * 00000001800BAF7C: mov     dword ptr [rbp+9E40h+var_7980+4], esi
 * 00000001800BAF82: movups  xmm6, [rbp+9E40h+var_7980]
 * 00000001800BAF89: call    sub_1800B1A0C
 * 00000001800BAF8E: mov     r8, rax
 * 00000001800BAF91: mov     r9d, r12d
 * 00000001800BAF94: mov     edx, 28h ; '('
 * 00000001800BAF99: lea     rcx, [rbp+9E40h+var_2E30]; Src
 * 00000001800BAFA0: call    sub_18007C338
 * 00000001800BAFA5: nop
 * 00000001800BAFA6: mov     r8, rax
 * 00000001800BAFA9: mov     rdx, r13
 * 00000001800BAFAC: lea     rcx, [rbp+9E40h+var_2E50]
 * 00000001800BAFB3: call    sub_18001C6E8
 * 00000001800BAFB8: nop
 * 00000001800BAFB9: lea     r8, aVertex; "/Vertex"
 * 00000001800BAFC0: mov     rdx, rax
 * 00000001800BAFC3: lea     rcx, [rbp+9E40h+var_5630]
 * 00000001800BAFCA: call    sub_18001C61C
 * 00000001800BAFCF: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BAFD4: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BAFD9: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BAFDE: mov     rcx, rax
 * 00000001800BAFE1: call    sub_18007C3DC
 * 00000001800BAFE6: nop
 * 00000001800BAFE7: lea     rcx, [rbp+9E40h+var_2E50]
 * 00000001800BAFEE: call    sub_180010F30
 * 00000001800BAFF3: nop
 * 00000001800BAFF4: lea     rcx, [rbp+9E40h+var_2E30]
 * 00000001800BAFFB: call    sub_180010F30
 * 00000001800BB000: nop
 * 00000001800BB001: lea     rcx, dword_1801D949C
 * 00000001800BB008: call    sub_18000C538
 * 00000001800BB00D: mov     rax, [rdi+rbx*8]
 * 00000001800BB011: mov     ecx, [r15+rax]
 * 00000001800BB015: cmp     cs:dword_1801D94A0, ecx
 * 00000001800BB01B: jle     loc_1800BB0F8
 * 00000001800BB021: lea     rcx, dword_1801D94A0
 * 00000001800BB028: call    sub_18000C5A0
 * 00000001800BB02D: cmp     cs:dword_1801D94A0, r14d
 * 00000001800BB034: jnz     loc_1800BB0F8
 * 00000001800BB03A: call    sub_1800B197C
 * 00000001800BB03F: mov     qword ptr [rbp+9E40h+var_9500], rax
 * 00000001800BB046: add     rax, 0B3Ch
 * 00000001800BB04C: mov     qword ptr [rbp+9E40h+var_9500+8], rax
 * 00000001800BB053: movups  xmm7, [rbp+9E40h+var_9500]
 * 00000001800BB05A: movups  [rbp+9E40h+var_7970], xmm7
 * 00000001800BB061: mov     dword ptr [rbp+9E40h+var_7960], esi
 * 00000001800BB067: mov     dword ptr [rbp+9E40h+var_7960+4], esi
 * 00000001800BB06D: movups  xmm6, [rbp+9E40h+var_7960]
 * 00000001800BB074: call    sub_1800B1A0C
 * 00000001800BB079: mov     r8, rax
 * 00000001800BB07C: mov     r9d, r12d
 * 00000001800BB07F: mov     edx, 29h ; ')'
 * 00000001800BB084: lea     rcx, [rbp+9E40h+var_2DD0]; Src
 * 00000001800BB08B: call    sub_18007C338
 * 00000001800BB090: nop
 * 00000001800BB091: mov     r8, rax
 * 00000001800BB094: mov     rdx, r13
 * 00000001800BB097: lea     rcx, [rbp+9E40h+var_2DF0]
 * 00000001800BB09E: call    sub_18001C6E8
 * 00000001800BB0A3: nop
 * 00000001800BB0A4: lea     r8, aVertex; "/Vertex"
 * 00000001800BB0AB: mov     rdx, rax
 * 00000001800BB0AE: lea     rcx, [rbp+9E40h+var_5610]
 * 00000001800BB0B5: call    sub_18001C61C
 * 00000001800BB0BA: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BB0BF: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BB0C4: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BB0C9: mov     rcx, rax
 * 00000001800BB0CC: call    sub_18007C3DC
 * 00000001800BB0D1: nop
 * 00000001800BB0D2: lea     rcx, [rbp+9E40h+var_2DF0]
 * 00000001800BB0D9: call    sub_180010F30
 * 00000001800BB0DE: nop
 * 00000001800BB0DF: lea     rcx, [rbp+9E40h+var_2DD0]
 * 00000001800BB0E6: call    sub_180010F30
 * 00000001800BB0EB: nop
 * 00000001800BB0EC: lea     rcx, dword_1801D94A0
 * 00000001800BB0F3: call    sub_18000C538
 * 00000001800BB0F8: mov     rax, [rdi+rbx*8]
 * 00000001800BB0FC: mov     ecx, [r15+rax]
 * 00000001800BB100: cmp     cs:dword_1801D94A4, ecx
 * 00000001800BB106: jle     loc_1800BB1E3
 * 00000001800BB10C: lea     rcx, dword_1801D94A4
 * 00000001800BB113: call    sub_18000C5A0
 * 00000001800BB118: cmp     cs:dword_1801D94A4, r14d
 * 00000001800BB11F: jnz     loc_1800BB1E3
 * 00000001800BB125: call    sub_1800B196C
 * 00000001800BB12A: mov     qword ptr [rbp+9E40h+var_94F0], rax
 * 00000001800BB131: add     rax, 1A18h
 * 00000001800BB137: mov     qword ptr [rbp+9E40h+var_94F0+8], rax
 * 00000001800BB13E: movups  xmm7, [rbp+9E40h+var_94F0]
 * 00000001800BB145: movups  [rbp+9E40h+var_7950], xmm7
 * 00000001800BB14C: mov     dword ptr [rbp+9E40h+var_7940], esi
 * 00000001800BB152: mov     dword ptr [rbp+9E40h+var_7940+4], esi
 * 00000001800BB158: movups  xmm6, [rbp+9E40h+var_7940]
 * 00000001800BB15F: call    sub_1800B1A0C
 * 00000001800BB164: mov     r8, rax
 * 00000001800BB167: mov     r9d, r12d
 * 00000001800BB16A: mov     edx, 2Ah ; '*'
 * 00000001800BB16F: lea     rcx, [rbp+9E40h+var_2D70]; Src
 * 00000001800BB176: call    sub_18007C338
 * 00000001800BB17B: nop
 * 00000001800BB17C: mov     r8, rax
 * 00000001800BB17F: mov     rdx, r13
 * 00000001800BB182: lea     rcx, [rbp+9E40h+var_2D90]
 * 00000001800BB189: call    sub_18001C6E8
 * 00000001800BB18E: nop
 * 00000001800BB18F: lea     r8, aVertex; "/Vertex"
 * 00000001800BB196: mov     rdx, rax
 * 00000001800BB199: lea     rcx, [rbp+9E40h+var_55F0]
 * 00000001800BB1A0: call    sub_18001C61C
 * 00000001800BB1A5: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BB1AA: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BB1AF: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BB1B4: mov     rcx, rax
 * 00000001800BB1B7: call    sub_18007C3DC
 * 00000001800BB1BC: nop
 * 00000001800BB1BD: lea     rcx, [rbp+9E40h+var_2D90]
 * 00000001800BB1C4: call    sub_180010F30
 * 00000001800BB1C9: nop
 * 00000001800BB1CA: lea     rcx, [rbp+9E40h+var_2D70]
 * 00000001800BB1D1: call    sub_180010F30
 * 00000001800BB1D6: nop
 * 00000001800BB1D7: lea     rcx, dword_1801D94A4
 * 00000001800BB1DE: call    sub_18000C538
 * 00000001800BB1E3: mov     rax, [rdi+rbx*8]
 * 00000001800BB1E7: mov     ecx, [r15+rax]
 * 00000001800BB1EB: cmp     cs:dword_1801D94A8, ecx
 * 00000001800BB1F1: jle     loc_1800BB2CE
 * 00000001800BB1F7: lea     rcx, dword_1801D94A8
 * 00000001800BB1FE: call    sub_18000C5A0
 * 00000001800BB203: cmp     cs:dword_1801D94A8, r14d
 * 00000001800BB20A: jnz     loc_1800BB2CE
 * 00000001800BB210: call    sub_1800B196C
 * 00000001800BB215: mov     qword ptr [rbp+9E40h+var_94E0], rax
 * 00000001800BB21C: add     rax, 1A18h
 * 00000001800BB222: mov     qword ptr [rbp+9E40h+var_94E0+8], rax
 * 00000001800BB229: movups  xmm7, [rbp+9E40h+var_94E0]
 * 00000001800BB230: movups  [rbp+9E40h+var_7930], xmm7
 * 00000001800BB237: mov     dword ptr [rbp+9E40h+var_7920], esi
 * 00000001800BB23D: mov     dword ptr [rbp+9E40h+var_7920+4], esi
 * 00000001800BB243: movups  xmm6, [rbp+9E40h+var_7920]
 * 00000001800BB24A: call    sub_1800B1A0C
 * 00000001800BB24F: mov     r8, rax
 * 00000001800BB252: mov     r9d, r12d
 * 00000001800BB255: mov     edx, 30h ; '0'
 * 00000001800BB25A: lea     rcx, [rbp+9E40h+var_2D10]; Src
 * 00000001800BB261: call    sub_18007C338
 * 00000001800BB266: nop
 * 00000001800BB267: mov     r8, rax
 * 00000001800BB26A: mov     rdx, r13
 * 00000001800BB26D: lea     rcx, [rbp+9E40h+var_2D30]
 * 00000001800BB274: call    sub_18001C6E8
 * 00000001800BB279: nop
 * 00000001800BB27A: lea     r8, aVertex; "/Vertex"
 * 00000001800BB281: mov     rdx, rax
 * 00000001800BB284: lea     rcx, [rbp+9E40h+var_55D0]
 * 00000001800BB28B: call    sub_18001C61C
 * 00000001800BB290: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BB295: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BB29A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BB29F: mov     rcx, rax
 * 00000001800BB2A2: call    sub_18007C3DC
 * 00000001800BB2A7: nop
 * 00000001800BB2A8: lea     rcx, [rbp+9E40h+var_2D30]
 * 00000001800BB2AF: call    sub_180010F30
 * 00000001800BB2B4: nop
 * 00000001800BB2B5: lea     rcx, [rbp+9E40h+var_2D10]
 * 00000001800BB2BC: call    sub_180010F30
 * 00000001800BB2C1: nop
 * 00000001800BB2C2: lea     rcx, dword_1801D94A8
 * 00000001800BB2C9: call    sub_18000C538
 * 00000001800BB2CE: mov     rax, [rdi+rbx*8]
 * 00000001800BB2D2: mov     ecx, [r15+rax]
 * 00000001800BB2D6: cmp     cs:dword_1801D94AC, ecx
 * 00000001800BB2DC: jle     loc_1800BB3B9
 * 00000001800BB2E2: lea     rcx, dword_1801D94AC
 * 00000001800BB2E9: call    sub_18000C5A0
 * 00000001800BB2EE: cmp     cs:dword_1801D94AC, r14d
 * 00000001800BB2F5: jnz     loc_1800BB3B9
 * 00000001800BB2FB: call    sub_1800B196C
 * 00000001800BB300: mov     qword ptr [rbp+9E40h+var_94D0], rax
 * 00000001800BB307: add     rax, 1A18h
 * 00000001800BB30D: mov     qword ptr [rbp+9E40h+var_94D0+8], rax
 * 00000001800BB314: movups  xmm7, [rbp+9E40h+var_94D0]
 * 00000001800BB31B: movups  [rbp+9E40h+var_7910], xmm7
 * 00000001800BB322: mov     dword ptr [rbp+9E40h+var_7900], esi
 * 00000001800BB328: mov     dword ptr [rbp+9E40h+var_7900+4], esi
 * 00000001800BB32E: movups  xmm6, [rbp+9E40h+var_7900]
 * 00000001800BB335: call    sub_1800B1A0C
 * 00000001800BB33A: mov     r8, rax
 * 00000001800BB33D: mov     r9d, r12d
 * 00000001800BB340: mov     edx, 32h ; '2'
 * 00000001800BB345: lea     rcx, [rbp+9E40h+var_2CB0]; Src
 * 00000001800BB34C: call    sub_18007C338
 * 00000001800BB351: nop
 * 00000001800BB352: mov     r8, rax
 * 00000001800BB355: mov     rdx, r13
 * 00000001800BB358: lea     rcx, [rbp+9E40h+var_2CD0]
 * 00000001800BB35F: call    sub_18001C6E8
 * 00000001800BB364: nop
 * 00000001800BB365: lea     r8, aVertex; "/Vertex"
 * 00000001800BB36C: mov     rdx, rax
 * 00000001800BB36F: lea     rcx, [rbp+9E40h+var_55B0]
 * 00000001800BB376: call    sub_18001C61C
 * 00000001800BB37B: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BB380: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BB385: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BB38A: mov     rcx, rax
 * 00000001800BB38D: call    sub_18007C3DC
 * 00000001800BB392: nop
 * 00000001800BB393: lea     rcx, [rbp+9E40h+var_2CD0]
 * 00000001800BB39A: call    sub_180010F30
 * 00000001800BB39F: nop
 * 00000001800BB3A0: lea     rcx, [rbp+9E40h+var_2CB0]
 * 00000001800BB3A7: call    sub_180010F30
 * 00000001800BB3AC: nop
 * 00000001800BB3AD: lea     rcx, dword_1801D94AC
 * 00000001800BB3B4: call    sub_18000C538
 * 00000001800BB3B9: mov     rax, [rdi+rbx*8]
 * 00000001800BB3BD: mov     ecx, [r15+rax]
 * 00000001800BB3C1: cmp     cs:dword_1801D94B0, ecx
 * 00000001800BB3C7: jle     loc_1800BB4A4
 * 00000001800BB3CD: lea     rcx, dword_1801D94B0
 * 00000001800BB3D4: call    sub_18000C5A0
 * 00000001800BB3D9: cmp     cs:dword_1801D94B0, r14d
 * 00000001800BB3E0: jnz     loc_1800BB4A4
 * 00000001800BB3E6: call    sub_1800B196C
 * 00000001800BB3EB: mov     qword ptr [rbp+9E40h+var_94C0], rax
 * 00000001800BB3F2: add     rax, 1A18h
 * 00000001800BB3F8: mov     qword ptr [rbp+9E40h+var_94C0+8], rax
 * 00000001800BB3FF: movups  xmm7, [rbp+9E40h+var_94C0]
 * 00000001800BB406: movups  [rbp+9E40h+var_78F0], xmm7
 * 00000001800BB40D: mov     dword ptr [rbp+9E40h+var_78E0], esi
 * 00000001800BB413: mov     dword ptr [rbp+9E40h+var_78E0+4], esi
 * 00000001800BB419: movups  xmm6, [rbp+9E40h+var_78E0]
 * 00000001800BB420: call    sub_1800B1A0C
 * 00000001800BB425: mov     r8, rax
 * 00000001800BB428: mov     r9d, r12d
 * 00000001800BB42B: mov     edx, 38h ; '8'
 * 00000001800BB430: lea     rcx, [rbp+9E40h+var_2C50]; Src
 * 00000001800BB437: call    sub_18007C338
 * 00000001800BB43C: nop
 * 00000001800BB43D: mov     r8, rax
 * 00000001800BB440: mov     rdx, r13
 * 00000001800BB443: lea     rcx, [rbp+9E40h+var_1670]
 * 00000001800BB44A: call    sub_18001C6E8
 * 00000001800BB44F: nop
 * 00000001800BB450: lea     r8, aVertex; "/Vertex"
 * 00000001800BB457: mov     rdx, rax
 * 00000001800BB45A: lea     rcx, [rbp+9E40h+var_5590]
 * 00000001800BB461: call    sub_18001C61C
 * 00000001800BB466: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BB46B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BB470: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BB475: mov     rcx, rax
 * 00000001800BB478: call    sub_18007C3DC
 * 00000001800BB47D: nop
 * 00000001800BB47E: lea     rcx, [rbp+9E40h+var_1670]
 * 00000001800BB485: call    sub_180010F30
 * 00000001800BB48A: nop
 * 00000001800BB48B: lea     rcx, [rbp+9E40h+var_2C50]
 * 00000001800BB492: call    sub_180010F30
 * 00000001800BB497: nop
 * 00000001800BB498: lea     rcx, dword_1801D94B0
 * 00000001800BB49F: call    sub_18000C538
 * 00000001800BB4A4: mov     rax, [rdi+rbx*8]
 * 00000001800BB4A8: mov     ecx, [r15+rax]
 * 00000001800BB4AC: cmp     cs:dword_1801D94B4, ecx
 * 00000001800BB4B2: jle     loc_1800BB58F
 * 00000001800BB4B8: lea     rcx, dword_1801D94B4
 * 00000001800BB4BF: call    sub_18000C5A0
 * 00000001800BB4C4: cmp     cs:dword_1801D94B4, r14d
 * 00000001800BB4CB: jnz     loc_1800BB58F
 * 00000001800BB4D1: call    sub_1800B196C
 * 00000001800BB4D6: mov     qword ptr [rbp+9E40h+var_94B0], rax
 * 00000001800BB4DD: add     rax, 1A18h
 * 00000001800BB4E3: mov     qword ptr [rbp+9E40h+var_94B0+8], rax
 * 00000001800BB4EA: movups  xmm7, [rbp+9E40h+var_94B0]
 * 00000001800BB4F1: movups  [rbp+9E40h+var_78D0], xmm7
 * 00000001800BB4F8: mov     dword ptr [rbp+9E40h+var_78C0], esi
 * 00000001800BB4FE: mov     dword ptr [rbp+9E40h+var_78C0+4], esi
 * 00000001800BB504: movups  xmm6, [rbp+9E40h+var_78C0]
 * 00000001800BB50B: call    sub_1800B1A0C
 * 00000001800BB510: mov     r8, rax
 * 00000001800BB513: mov     r9d, r12d
 * 00000001800BB516: mov     edx, 3Ah ; ':'
 * 00000001800BB51B: lea     rcx, [rbp+9E40h+var_2BF0]; Src
 * 00000001800BB522: call    sub_18007C338
 * 00000001800BB527: nop
 * 00000001800BB528: mov     r8, rax
 * 00000001800BB52B: mov     rdx, r13
 * 00000001800BB52E: lea     rcx, [rbp+9E40h+var_2C10]
 * 00000001800BB535: call    sub_18001C6E8
 * 00000001800BB53A: nop
 * 00000001800BB53B: lea     r8, aVertex; "/Vertex"
 * 00000001800BB542: mov     rdx, rax
 * 00000001800BB545: lea     rcx, [rbp+9E40h+var_5550]
 * 00000001800BB54C: call    sub_18001C61C
 * 00000001800BB551: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BB556: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BB55B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BB560: mov     rcx, rax
 * 00000001800BB563: call    sub_18007C3DC
 * 00000001800BB568: nop
 * 00000001800BB569: lea     rcx, [rbp+9E40h+var_2C10]
 * 00000001800BB570: call    sub_180010F30
 * 00000001800BB575: nop
 * 00000001800BB576: lea     rcx, [rbp+9E40h+var_2BF0]
 * 00000001800BB57D: call    sub_180010F30
 * 00000001800BB582: nop
 * 00000001800BB583: lea     rcx, dword_1801D94B4
 * 00000001800BB58A: call    sub_18000C538
 * 00000001800BB58F: mov     rax, [rdi+rbx*8]
 * 00000001800BB593: mov     ecx, [r15+rax]
 * 00000001800BB597: cmp     cs:dword_1801D94B8, ecx
 * 00000001800BB59D: jle     loc_1800BB67A
 * 00000001800BB5A3: lea     rcx, dword_1801D94B8
 * 00000001800BB5AA: call    sub_18000C5A0
 * 00000001800BB5AF: cmp     cs:dword_1801D94B8, r14d
 * 00000001800BB5B6: jnz     loc_1800BB67A
 * 00000001800BB5BC: call    sub_1800B198C
 * 00000001800BB5C1: mov     qword ptr [rbp+9E40h+var_94A0], rax
 * 00000001800BB5C8: add     rax, 1050h
 * 00000001800BB5CE: mov     qword ptr [rbp+9E40h+var_94A0+8], rax
 * 00000001800BB5D5: movups  xmm7, [rbp+9E40h+var_94A0]
 * 00000001800BB5DC: movups  [rbp+9E40h+var_78B0], xmm7
 * 00000001800BB5E3: mov     dword ptr [rbp+9E40h+var_78A0], esi
 * 00000001800BB5E9: mov     dword ptr [rbp+9E40h+var_78A0+4], esi
 * 00000001800BB5EF: movups  xmm6, [rbp+9E40h+var_78A0]
 * 00000001800BB5F6: call    sub_1800B1A0C
 * 00000001800BB5FB: mov     r8, rax
 * 00000001800BB5FE: mov     r9d, r12d
 * 00000001800BB601: mov     edx, 40h ; '@'
 * 00000001800BB606: lea     rcx, [rbp+9E40h+var_2B90]; Src
 * 00000001800BB60D: call    sub_18007C338
 * 00000001800BB612: nop
 * 00000001800BB613: mov     r8, rax
 * 00000001800BB616: mov     rdx, r13
 * 00000001800BB619: lea     rcx, [rbp+9E40h+var_2BB0]
 * 00000001800BB620: call    sub_18001C6E8
 * 00000001800BB625: nop
 * 00000001800BB626: lea     r8, aVertex; "/Vertex"
 * 00000001800BB62D: mov     rdx, rax
 * 00000001800BB630: lea     rcx, [rbp+9E40h+var_5530]
 * 00000001800BB637: call    sub_18001C61C
 * 00000001800BB63C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BB641: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BB646: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BB64B: mov     rcx, rax
 * 00000001800BB64E: call    sub_18007C3DC
 * 00000001800BB653: nop
 * 00000001800BB654: lea     rcx, [rbp+9E40h+var_2BB0]
 * 00000001800BB65B: call    sub_180010F30
 * 00000001800BB660: nop
 * 00000001800BB661: lea     rcx, [rbp+9E40h+var_2B90]
 * 00000001800BB668: call    sub_180010F30
 * 00000001800BB66D: nop
 * 00000001800BB66E: lea     rcx, dword_1801D94B8
 * 00000001800BB675: call    sub_18000C538
 * 00000001800BB67A: mov     rax, [rdi+rbx*8]
 * 00000001800BB67E: mov     ecx, [r15+rax]
 * 00000001800BB682: cmp     cs:dword_1801D94BC, ecx
 * 00000001800BB688: jle     loc_1800BB765
 * 00000001800BB68E: lea     rcx, dword_1801D94BC
 * 00000001800BB695: call    sub_18000C5A0
 * 00000001800BB69A: cmp     cs:dword_1801D94BC, r14d
 * 00000001800BB6A1: jnz     loc_1800BB765
 * 00000001800BB6A7: call    sub_1800B198C
 * 00000001800BB6AC: mov     qword ptr [rbp+9E40h+var_9490], rax
 * 00000001800BB6B3: add     rax, 1050h
 * 00000001800BB6B9: mov     qword ptr [rbp+9E40h+var_9490+8], rax
 * 00000001800BB6C0: movups  xmm7, [rbp+9E40h+var_9490]
 * 00000001800BB6C7: movups  [rbp+9E40h+var_7890], xmm7
 * 00000001800BB6CE: mov     dword ptr [rbp+9E40h+var_7880], esi
 * 00000001800BB6D4: mov     dword ptr [rbp+9E40h+var_7880+4], esi
 * 00000001800BB6DA: movups  xmm6, [rbp+9E40h+var_7880]
 * 00000001800BB6E1: call    sub_1800B1A0C
 * 00000001800BB6E6: mov     r8, rax
 * 00000001800BB6E9: mov     r9d, r12d
 * 00000001800BB6EC: mov     edx, 42h ; 'B'
 * 00000001800BB6F1: lea     rcx, [rbp+9E40h+var_2B30]; Src
 * 00000001800BB6F8: call    sub_18007C338
 * 00000001800BB6FD: nop
 * 00000001800BB6FE: mov     r8, rax
 * 00000001800BB701: mov     rdx, r13
 * 00000001800BB704: lea     rcx, [rbp+9E40h+var_2B50]
 * 00000001800BB70B: call    sub_18001C6E8
 * 00000001800BB710: nop
 * 00000001800BB711: lea     r8, aVertex; "/Vertex"
 * 00000001800BB718: mov     rdx, rax
 * 00000001800BB71B: lea     rcx, [rbp+9E40h+var_5510]
 * 00000001800BB722: call    sub_18001C61C
 * 00000001800BB727: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BB72C: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BB731: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BB736: mov     rcx, rax
 * 00000001800BB739: call    sub_18007C3DC
 * 00000001800BB73E: nop
 * 00000001800BB73F: lea     rcx, [rbp+9E40h+var_2B50]
 * 00000001800BB746: call    sub_180010F30
 * 00000001800BB74B: nop
 * 00000001800BB74C: lea     rcx, [rbp+9E40h+var_2B30]
 * 00000001800BB753: call    sub_180010F30
 * 00000001800BB758: nop
 * 00000001800BB759: lea     rcx, dword_1801D94BC
 * 00000001800BB760: call    sub_18000C538
 * 00000001800BB765: mov     rax, [rdi+rbx*8]
 * 00000001800BB769: mov     ecx, [r15+rax]
 * 00000001800BB76D: cmp     cs:dword_1801D94C0, ecx
 * 00000001800BB773: jle     loc_1800BB850
 * 00000001800BB779: lea     rcx, dword_1801D94C0
 * 00000001800BB780: call    sub_18000C5A0
 * 00000001800BB785: cmp     cs:dword_1801D94C0, r14d
 * 00000001800BB78C: jnz     loc_1800BB850
 * 00000001800BB792: call    sub_1800B198C
 * 00000001800BB797: mov     qword ptr [rbp+9E40h+var_9480], rax
 * 00000001800BB79E: add     rax, 1050h
 * 00000001800BB7A4: mov     qword ptr [rbp+9E40h+var_9480+8], rax
 * 00000001800BB7AB: movups  xmm7, [rbp+9E40h+var_9480]
 * 00000001800BB7B2: movups  [rbp+9E40h+var_7870], xmm7
 * 00000001800BB7B9: mov     dword ptr [rbp+9E40h+var_7860], esi
 * 00000001800BB7BF: mov     dword ptr [rbp+9E40h+var_7860+4], esi
 * 00000001800BB7C5: movups  xmm6, [rbp+9E40h+var_7860]
 * 00000001800BB7CC: call    sub_1800B1A0C
 * 00000001800BB7D1: mov     r8, rax
 * 00000001800BB7D4: mov     r9d, r12d
 * 00000001800BB7D7: mov     edx, 48h ; 'H'
 * 00000001800BB7DC: lea     rcx, [rbp+9E40h+var_2AD0]; Src
 * 00000001800BB7E3: call    sub_18007C338
 * 00000001800BB7E8: nop
 * 00000001800BB7E9: mov     r8, rax
 * 00000001800BB7EC: mov     rdx, r13
 * 00000001800BB7EF: lea     rcx, [rbp+9E40h+var_2AF0]
 * 00000001800BB7F6: call    sub_18001C6E8
 * 00000001800BB7FB: nop
 * 00000001800BB7FC: lea     r8, aVertex; "/Vertex"
 * 00000001800BB803: mov     rdx, rax
 * 00000001800BB806: lea     rcx, [rbp+9E40h+var_54F0]
 * 00000001800BB80D: call    sub_18001C61C
 * 00000001800BB812: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BB817: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BB81C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BB821: mov     rcx, rax
 * 00000001800BB824: call    sub_18007C3DC
 * 00000001800BB829: nop
 * 00000001800BB82A: lea     rcx, [rbp+9E40h+var_2AF0]
 * 00000001800BB831: call    sub_180010F30
 * 00000001800BB836: nop
 * 00000001800BB837: lea     rcx, [rbp+9E40h+var_2AD0]
 * 00000001800BB83E: call    sub_180010F30
 * 00000001800BB843: nop
 * 00000001800BB844: lea     rcx, dword_1801D94C0
 * 00000001800BB84B: call    sub_18000C538
 * 00000001800BB850: mov     rax, [rdi+rbx*8]
 * 00000001800BB854: mov     ecx, [r15+rax]
 * 00000001800BB858: cmp     cs:dword_1801D94C4, ecx
 * 00000001800BB85E: jle     loc_1800BB93B
 * 00000001800BB864: lea     rcx, dword_1801D94C4
 * 00000001800BB86B: call    sub_18000C5A0
 * 00000001800BB870: cmp     cs:dword_1801D94C4, r14d
 * 00000001800BB877: jnz     loc_1800BB93B
 * 00000001800BB87D: call    sub_1800B198C
 * 00000001800BB882: mov     qword ptr [rbp+9E40h+var_9470], rax
 * 00000001800BB889: add     rax, 1050h
 * 00000001800BB88F: mov     qword ptr [rbp+9E40h+var_9470+8], rax
 * 00000001800BB896: movups  xmm7, [rbp+9E40h+var_9470]
 * 00000001800BB89D: movups  [rbp+9E40h+var_7850], xmm7
 * 00000001800BB8A4: mov     dword ptr [rbp+9E40h+var_7840], esi
 * 00000001800BB8AA: mov     dword ptr [rbp+9E40h+var_7840+4], esi
 * 00000001800BB8B0: movups  xmm6, [rbp+9E40h+var_7840]
 * 00000001800BB8B7: call    sub_1800B1A0C
 * 00000001800BB8BC: mov     r8, rax
 * 00000001800BB8BF: mov     r9d, r12d
 * 00000001800BB8C2: mov     edx, 4Ah ; 'J'
 * 00000001800BB8C7: lea     rcx, [rbp+9E40h+var_2A70]; Src
 * 00000001800BB8CE: call    sub_18007C338
 * 00000001800BB8D3: nop
 * 00000001800BB8D4: mov     r8, rax
 * 00000001800BB8D7: mov     rdx, r13
 * 00000001800BB8DA: lea     rcx, [rbp+9E40h+var_2A90]
 * 00000001800BB8E1: call    sub_18001C6E8
 * 00000001800BB8E6: nop
 * 00000001800BB8E7: lea     r8, aVertex; "/Vertex"
 * 00000001800BB8EE: mov     rdx, rax
 * 00000001800BB8F1: lea     rcx, [rbp+9E40h+var_54D0]
 * 00000001800BB8F8: call    sub_18001C61C
 * 00000001800BB8FD: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BB902: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BB907: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BB90C: mov     rcx, rax
 * 00000001800BB90F: call    sub_18007C3DC
 * 00000001800BB914: nop
 * 00000001800BB915: lea     rcx, [rbp+9E40h+var_2A90]
 * 00000001800BB91C: call    sub_180010F30
 * 00000001800BB921: nop
 * 00000001800BB922: lea     rcx, [rbp+9E40h+var_2A70]
 * 00000001800BB929: call    sub_180010F30
 * 00000001800BB92E: nop
 * 00000001800BB92F: lea     rcx, dword_1801D94C4
 * 00000001800BB936: call    sub_18000C538
 * 00000001800BB93B: mov     rax, [rdi+rbx*8]
 * 00000001800BB93F: mov     ecx, [r15+rax]
 * 00000001800BB943: cmp     cs:dword_1801D94C8, ecx
 * 00000001800BB949: jle     loc_1800BBA26
 * 00000001800BB94F: lea     rcx, dword_1801D94C8
 * 00000001800BB956: call    sub_18000C5A0
 * 00000001800BB95B: cmp     cs:dword_1801D94C8, r14d
 * 00000001800BB962: jnz     loc_1800BBA26
 * 00000001800BB968: call    sub_1800B198C
 * 00000001800BB96D: mov     qword ptr [rbp+9E40h+var_9460], rax
 * 00000001800BB974: add     rax, 1050h
 * 00000001800BB97A: mov     qword ptr [rbp+9E40h+var_9460+8], rax
 * 00000001800BB981: movups  xmm7, [rbp+9E40h+var_9460]
 * 00000001800BB988: movups  [rbp+9E40h+var_7830], xmm7
 * 00000001800BB98F: mov     dword ptr [rbp+9E40h+var_7820], esi
 * 00000001800BB995: mov     dword ptr [rbp+9E40h+var_7820+4], esi
 * 00000001800BB99B: movups  xmm6, [rbp+9E40h+var_7820]
 * 00000001800BB9A2: call    sub_1800B1A0C
 * 00000001800BB9A7: mov     r8, rax
 * 00000001800BB9AA: mov     r9d, r12d
 * 00000001800BB9AD: mov     edx, 50h ; 'P'
 * 00000001800BB9B2: lea     rcx, [rbp+9E40h+var_2A10]; Src
 * 00000001800BB9B9: call    sub_18007C338
 * 00000001800BB9BE: nop
 * 00000001800BB9BF: mov     r8, rax
 * 00000001800BB9C2: mov     rdx, r13
 * 00000001800BB9C5: lea     rcx, [rbp+9E40h+var_2A30]
 * 00000001800BB9CC: call    sub_18001C6E8
 * 00000001800BB9D1: nop
 * 00000001800BB9D2: lea     r8, aVertex; "/Vertex"
 * 00000001800BB9D9: mov     rdx, rax
 * 00000001800BB9DC: lea     rcx, [rbp+9E40h+var_54B0]
 * 00000001800BB9E3: call    sub_18001C61C
 * 00000001800BB9E8: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BB9ED: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BB9F2: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BB9F7: mov     rcx, rax
 * 00000001800BB9FA: call    sub_18007C3DC
 * 00000001800BB9FF: nop
 * 00000001800BBA00: lea     rcx, [rbp+9E40h+var_2A30]
 * 00000001800BBA07: call    sub_180010F30
 * 00000001800BBA0C: nop
 * 00000001800BBA0D: lea     rcx, [rbp+9E40h+var_2A10]
 * 00000001800BBA14: call    sub_180010F30
 * 00000001800BBA19: nop
 * 00000001800BBA1A: lea     rcx, dword_1801D94C8
 * 00000001800BBA21: call    sub_18000C538
 * 00000001800BBA26: mov     rax, [rdi+rbx*8]
 * 00000001800BBA2A: mov     ecx, [r15+rax]
 * 00000001800BBA2E: cmp     cs:dword_1801D94CC, ecx
 * 00000001800BBA34: jle     loc_1800BBB11
 * 00000001800BBA3A: lea     rcx, dword_1801D94CC
 * 00000001800BBA41: call    sub_18000C5A0
 * 00000001800BBA46: cmp     cs:dword_1801D94CC, r14d
 * 00000001800BBA4D: jnz     loc_1800BBB11
 * 00000001800BBA53: call    sub_1800B198C
 * 00000001800BBA58: mov     qword ptr [rbp+9E40h+var_9450], rax
 * 00000001800BBA5F: add     rax, 1050h
 * 00000001800BBA65: mov     qword ptr [rbp+9E40h+var_9450+8], rax
 * 00000001800BBA6C: movups  xmm7, [rbp+9E40h+var_9450]
 * 00000001800BBA73: movups  [rbp+9E40h+var_7810], xmm7
 * 00000001800BBA7A: mov     dword ptr [rbp+9E40h+var_7800], esi
 * 00000001800BBA80: mov     dword ptr [rbp+9E40h+var_7800+4], esi
 * 00000001800BBA86: movups  xmm6, [rbp+9E40h+var_7800]
 * 00000001800BBA8D: call    sub_1800B1A0C
 * 00000001800BBA92: mov     r8, rax
 * 00000001800BBA95: mov     r9d, r12d
 * 00000001800BBA98: mov     edx, 52h ; 'R'
 * 00000001800BBA9D: lea     rcx, [rbp+9E40h+var_29B0]; Src
 * 00000001800BBAA4: call    sub_18007C338
 * 00000001800BBAA9: nop
 * 00000001800BBAAA: mov     r8, rax
 * 00000001800BBAAD: mov     rdx, r13
 * 00000001800BBAB0: lea     rcx, [rbp+9E40h+var_29D0]
 * 00000001800BBAB7: call    sub_18001C6E8
 * 00000001800BBABC: nop
 * 00000001800BBABD: lea     r8, aVertex; "/Vertex"
 * 00000001800BBAC4: mov     rdx, rax
 * 00000001800BBAC7: lea     rcx, [rbp+9E40h+var_5490]
 * 00000001800BBACE: call    sub_18001C61C
 * 00000001800BBAD3: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BBAD8: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BBADD: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BBAE2: mov     rcx, rax
 * 00000001800BBAE5: call    sub_18007C3DC
 * 00000001800BBAEA: nop
 * 00000001800BBAEB: lea     rcx, [rbp+9E40h+var_29D0]
 * 00000001800BBAF2: call    sub_180010F30
 * 00000001800BBAF7: nop
 * 00000001800BBAF8: lea     rcx, [rbp+9E40h+var_29B0]
 * 00000001800BBAFF: call    sub_180010F30
 * 00000001800BBB04: nop
 * 00000001800BBB05: lea     rcx, dword_1801D94CC
 * 00000001800BBB0C: call    sub_18000C538
 * 00000001800BBB11: mov     rax, [rdi+rbx*8]
 * 00000001800BBB15: mov     ecx, [r15+rax]
 * 00000001800BBB19: cmp     cs:dword_1801D94D0, ecx
 * 00000001800BBB1F: jle     loc_1800BBBFC
 * 00000001800BBB25: lea     rcx, dword_1801D94D0
 * 00000001800BBB2C: call    sub_18000C5A0
 * 00000001800BBB31: cmp     cs:dword_1801D94D0, r14d
 * 00000001800BBB38: jnz     loc_1800BBBFC
 * 00000001800BBB3E: call    sub_1800B198C
 * 00000001800BBB43: mov     qword ptr [rbp+9E40h+var_9440], rax
 * 00000001800BBB4A: add     rax, 1050h
 * 00000001800BBB50: mov     qword ptr [rbp+9E40h+var_9440+8], rax
 * 00000001800BBB57: movups  xmm7, [rbp+9E40h+var_9440]
 * 00000001800BBB5E: movups  [rbp+9E40h+var_77F0], xmm7
 * 00000001800BBB65: mov     dword ptr [rbp+9E40h+var_77E0], esi
 * 00000001800BBB6B: mov     dword ptr [rbp+9E40h+var_77E0+4], esi
 * 00000001800BBB71: movups  xmm6, [rbp+9E40h+var_77E0]
 * 00000001800BBB78: call    sub_1800B1A0C
 * 00000001800BBB7D: mov     r8, rax
 * 00000001800BBB80: mov     r9d, r12d
 * 00000001800BBB83: mov     edx, 58h ; 'X'
 * 00000001800BBB88: lea     rcx, [rbp+9E40h+var_2950]; Src
 * 00000001800BBB8F: call    sub_18007C338
 * 00000001800BBB94: nop
 * 00000001800BBB95: mov     r8, rax
 * 00000001800BBB98: mov     rdx, r13
 * 00000001800BBB9B: lea     rcx, [rbp+9E40h+var_2970]
 * 00000001800BBBA2: call    sub_18001C6E8
 * 00000001800BBBA7: nop
 * 00000001800BBBA8: lea     r8, aVertex; "/Vertex"
 * 00000001800BBBAF: mov     rdx, rax
 * 00000001800BBBB2: lea     rcx, [rbp+9E40h+var_5470]
 * 00000001800BBBB9: call    sub_18001C61C
 * 00000001800BBBBE: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BBBC3: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BBBC8: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BBBCD: mov     rcx, rax
 * 00000001800BBBD0: call    sub_18007C3DC
 * 00000001800BBBD5: nop
 * 00000001800BBBD6: lea     rcx, [rbp+9E40h+var_2970]
 * 00000001800BBBDD: call    sub_180010F30
 * 00000001800BBBE2: nop
 * 00000001800BBBE3: lea     rcx, [rbp+9E40h+var_2950]
 * 00000001800BBBEA: call    sub_180010F30
 * 00000001800BBBEF: nop
 * 00000001800BBBF0: lea     rcx, dword_1801D94D0
 * 00000001800BBBF7: call    sub_18000C538
 * 00000001800BBBFC: mov     rax, [rdi+rbx*8]
 * 00000001800BBC00: mov     ecx, [r15+rax]
 * 00000001800BBC04: cmp     cs:dword_1801D94D4, ecx
 * 00000001800BBC0A: jle     loc_1800BBCE7
 * 00000001800BBC10: lea     rcx, dword_1801D94D4
 * 00000001800BBC17: call    sub_18000C5A0
 * 00000001800BBC1C: cmp     cs:dword_1801D94D4, r14d
 * 00000001800BBC23: jnz     loc_1800BBCE7
 * 00000001800BBC29: call    sub_1800B198C
 * 00000001800BBC2E: mov     qword ptr [rbp+9E40h+var_9430], rax
 * 00000001800BBC35: add     rax, 1050h
 * 00000001800BBC3B: mov     qword ptr [rbp+9E40h+var_9430+8], rax
 * 00000001800BBC42: movups  xmm7, [rbp+9E40h+var_9430]
 * 00000001800BBC49: movups  [rbp+9E40h+var_77D0], xmm7
 * 00000001800BBC50: mov     dword ptr [rbp+9E40h+var_77C0], esi
 * 00000001800BBC56: mov     dword ptr [rbp+9E40h+var_77C0+4], esi
 * 00000001800BBC5C: movups  xmm6, [rbp+9E40h+var_77C0]
 * 00000001800BBC63: call    sub_1800B1A0C
 * 00000001800BBC68: mov     r8, rax
 * 00000001800BBC6B: mov     r9d, r12d
 * 00000001800BBC6E: mov     edx, 5Ah ; 'Z'
 * 00000001800BBC73: lea     rcx, [rbp+9E40h+var_28F0]; Src
 * 00000001800BBC7A: call    sub_18007C338
 * 00000001800BBC7F: nop
 * 00000001800BBC80: mov     r8, rax
 * 00000001800BBC83: mov     rdx, r13
 * 00000001800BBC86: lea     rcx, [rbp+9E40h+var_2910]
 * 00000001800BBC8D: call    sub_18001C6E8
 * 00000001800BBC92: nop
 * 00000001800BBC93: lea     r8, aVertex; "/Vertex"
 * 00000001800BBC9A: mov     rdx, rax
 * 00000001800BBC9D: lea     rcx, [rbp+9E40h+var_5450]
 * 00000001800BBCA4: call    sub_18001C61C
 * 00000001800BBCA9: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BBCAE: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BBCB3: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BBCB8: mov     rcx, rax
 * 00000001800BBCBB: call    sub_18007C3DC
 * 00000001800BBCC0: nop
 * 00000001800BBCC1: lea     rcx, [rbp+9E40h+var_2910]
 * 00000001800BBCC8: call    sub_180010F30
 * 00000001800BBCCD: nop
 * 00000001800BBCCE: lea     rcx, [rbp+9E40h+var_28F0]
 * 00000001800BBCD5: call    sub_180010F30
 * 00000001800BBCDA: nop
 * 00000001800BBCDB: lea     rcx, dword_1801D94D4
 * 00000001800BBCE2: call    sub_18000C538
 * 00000001800BBCE7: mov     rax, [rdi+rbx*8]
 * 00000001800BBCEB: mov     ecx, [r15+rax]
 * 00000001800BBCEF: cmp     cs:dword_1801D94D8, ecx
 * 00000001800BBCF5: jle     loc_1800BBDD2
 * 00000001800BBCFB: lea     rcx, dword_1801D94D8
 * 00000001800BBD02: call    sub_18000C5A0
 * 00000001800BBD07: cmp     cs:dword_1801D94D8, r14d
 * 00000001800BBD0E: jnz     loc_1800BBDD2
 * 00000001800BBD14: call    sub_1800B199C
 * 00000001800BBD19: mov     qword ptr [rbp+9E40h+var_9420], rax
 * 00000001800BBD20: add     rax, 1A50h
 * 00000001800BBD26: mov     qword ptr [rbp+9E40h+var_9420+8], rax
 * 00000001800BBD2D: movups  xmm7, [rbp+9E40h+var_9420]
 * 00000001800BBD34: movups  [rbp+9E40h+var_77B0], xmm7
 * 00000001800BBD3B: mov     dword ptr [rbp+9E40h+var_77A0], esi
 * 00000001800BBD41: mov     dword ptr [rbp+9E40h+var_77A0+4], esi
 * 00000001800BBD47: movups  xmm6, [rbp+9E40h+var_77A0]
 * 00000001800BBD4E: call    sub_1800B1A0C
 * 00000001800BBD53: mov     r8, rax
 * 00000001800BBD56: mov     r9d, r12d
 * 00000001800BBD59: mov     edx, 60h ; '`'
 * 00000001800BBD5E: lea     rcx, [rbp+9E40h+var_2890]; Src
 * 00000001800BBD65: call    sub_18007C338
 * 00000001800BBD6A: nop
 * 00000001800BBD6B: mov     r8, rax
 * 00000001800BBD6E: mov     rdx, r13
 * 00000001800BBD71: lea     rcx, [rbp+9E40h+var_28B0]
 * 00000001800BBD78: call    sub_18001C6E8
 * 00000001800BBD7D: nop
 * 00000001800BBD7E: lea     r8, aVertex; "/Vertex"
 * 00000001800BBD85: mov     rdx, rax
 * 00000001800BBD88: lea     rcx, [rbp+9E40h+var_5430]
 * 00000001800BBD8F: call    sub_18001C61C
 * 00000001800BBD94: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BBD99: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BBD9E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BBDA3: mov     rcx, rax
 * 00000001800BBDA6: call    sub_18007C3DC
 * 00000001800BBDAB: nop
 * 00000001800BBDAC: lea     rcx, [rbp+9E40h+var_28B0]
 * 00000001800BBDB3: call    sub_180010F30
 * 00000001800BBDB8: nop
 * 00000001800BBDB9: lea     rcx, [rbp+9E40h+var_2890]
 * 00000001800BBDC0: call    sub_180010F30
 * 00000001800BBDC5: nop
 * 00000001800BBDC6: lea     rcx, dword_1801D94D8
 * 00000001800BBDCD: call    sub_18000C538
 * 00000001800BBDD2: mov     rax, [rdi+rbx*8]
 * 00000001800BBDD6: mov     ecx, [r15+rax]
 * 00000001800BBDDA: cmp     cs:dword_1801D94DC, ecx
 * 00000001800BBDE0: jle     loc_1800BBEBD
 * 00000001800BBDE6: lea     rcx, dword_1801D94DC
 * 00000001800BBDED: call    sub_18000C5A0
 * 00000001800BBDF2: cmp     cs:dword_1801D94DC, r14d
 * 00000001800BBDF9: jnz     loc_1800BBEBD
 * 00000001800BBDFF: call    sub_1800B199C
 * 00000001800BBE04: mov     qword ptr [rbp+9E40h+var_9410], rax
 * 00000001800BBE0B: add     rax, 1A50h
 * 00000001800BBE11: mov     qword ptr [rbp+9E40h+var_9410+8], rax
 * 00000001800BBE18: movups  xmm7, [rbp+9E40h+var_9410]
 * 00000001800BBE1F: movups  [rbp+9E40h+var_7790], xmm7
 * 00000001800BBE26: mov     dword ptr [rbp+9E40h+var_7780], esi
 * 00000001800BBE2C: mov     dword ptr [rbp+9E40h+var_7780+4], esi
 * 00000001800BBE32: movups  xmm6, [rbp+9E40h+var_7780]
 * 00000001800BBE39: call    sub_1800B1A0C
 * 00000001800BBE3E: mov     r8, rax
 * 00000001800BBE41: mov     r9d, r12d
 * 00000001800BBE44: mov     edx, 62h ; 'b'
 * 00000001800BBE49: lea     rcx, [rbp+9E40h+var_2830]; Src
 * 00000001800BBE50: call    sub_18007C338
 * 00000001800BBE55: nop
 * 00000001800BBE56: mov     r8, rax
 * 00000001800BBE59: mov     rdx, r13
 * 00000001800BBE5C: lea     rcx, [rbp+9E40h+var_2850]
 * 00000001800BBE63: call    sub_18001C6E8
 * 00000001800BBE68: nop
 * 00000001800BBE69: lea     r8, aVertex; "/Vertex"
 * 00000001800BBE70: mov     rdx, rax
 * 00000001800BBE73: lea     rcx, [rbp+9E40h+var_5410]
 * 00000001800BBE7A: call    sub_18001C61C
 * 00000001800BBE7F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BBE84: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BBE89: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BBE8E: mov     rcx, rax
 * 00000001800BBE91: call    sub_18007C3DC
 * 00000001800BBE96: nop
 * 00000001800BBE97: lea     rcx, [rbp+9E40h+var_2850]
 * 00000001800BBE9E: call    sub_180010F30
 * 00000001800BBEA3: nop
 * 00000001800BBEA4: lea     rcx, [rbp+9E40h+var_2830]
 * 00000001800BBEAB: call    sub_180010F30
 * 00000001800BBEB0: nop
 * 00000001800BBEB1: lea     rcx, dword_1801D94DC
 * 00000001800BBEB8: call    sub_18000C538
 * 00000001800BBEBD: mov     rax, [rdi+rbx*8]
 * 00000001800BBEC1: mov     ecx, [r15+rax]
 * 00000001800BBEC5: cmp     cs:dword_1801D94E0, ecx
 * 00000001800BBECB: jle     loc_1800BBFA8
 * 00000001800BBED1: lea     rcx, dword_1801D94E0
 * 00000001800BBED8: call    sub_18000C5A0
 * 00000001800BBEDD: cmp     cs:dword_1801D94E0, r14d
 * 00000001800BBEE4: jnz     loc_1800BBFA8
 * 00000001800BBEEA: call    sub_1800B199C
 * 00000001800BBEEF: mov     qword ptr [rbp+9E40h+var_9400], rax
 * 00000001800BBEF6: add     rax, 1A50h
 * 00000001800BBEFC: mov     qword ptr [rbp+9E40h+var_9400+8], rax
 * 00000001800BBF03: movups  xmm7, [rbp+9E40h+var_9400]
 * 00000001800BBF0A: movups  [rbp+9E40h+var_7770], xmm7
 * 00000001800BBF11: mov     dword ptr [rbp+9E40h+var_7760], esi
 * 00000001800BBF17: mov     dword ptr [rbp+9E40h+var_7760+4], esi
 * 00000001800BBF1D: movups  xmm6, [rbp+9E40h+var_7760]
 * 00000001800BBF24: call    sub_1800B1A0C
 * 00000001800BBF29: mov     r8, rax
 * 00000001800BBF2C: mov     r9d, r12d
 * 00000001800BBF2F: mov     edx, 68h ; 'h'
 * 00000001800BBF34: lea     rcx, [rbp+9E40h+var_27D0]; Src
 * 00000001800BBF3B: call    sub_18007C338
 * 00000001800BBF40: nop
 * 00000001800BBF41: mov     r8, rax
 * 00000001800BBF44: mov     rdx, r13
 * 00000001800BBF47: lea     rcx, [rbp+9E40h+var_27F0]
 * 00000001800BBF4E: call    sub_18001C6E8
 * 00000001800BBF53: nop
 * 00000001800BBF54: lea     r8, aVertex; "/Vertex"
 * 00000001800BBF5B: mov     rdx, rax
 * 00000001800BBF5E: lea     rcx, [rbp+9E40h+var_53F0]
 * 00000001800BBF65: call    sub_18001C61C
 * 00000001800BBF6A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BBF6F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BBF74: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BBF79: mov     rcx, rax
 * 00000001800BBF7C: call    sub_18007C3DC
 * 00000001800BBF81: nop
 * 00000001800BBF82: lea     rcx, [rbp+9E40h+var_27F0]
 * 00000001800BBF89: call    sub_180010F30
 * 00000001800BBF8E: nop
 * 00000001800BBF8F: lea     rcx, [rbp+9E40h+var_27D0]
 * 00000001800BBF96: call    sub_180010F30
 * 00000001800BBF9B: nop
 * 00000001800BBF9C: lea     rcx, dword_1801D94E0
 * 00000001800BBFA3: call    sub_18000C538
 * 00000001800BBFA8: mov     rax, [rdi+rbx*8]
 * 00000001800BBFAC: mov     ecx, [r15+rax]
 * 00000001800BBFB0: cmp     cs:dword_1801D94E4, ecx
 * 00000001800BBFB6: jle     loc_1800BC093
 * 00000001800BBFBC: lea     rcx, dword_1801D94E4
 * 00000001800BBFC3: call    sub_18000C5A0
 * 00000001800BBFC8: cmp     cs:dword_1801D94E4, r14d
 * 00000001800BBFCF: jnz     loc_1800BC093
 * 00000001800BBFD5: call    sub_1800B199C
 * 00000001800BBFDA: mov     qword ptr [rbp+9E40h+var_93F0], rax
 * 00000001800BBFE1: add     rax, 1A50h
 * 00000001800BBFE7: mov     qword ptr [rbp+9E40h+var_93F0+8], rax
 * 00000001800BBFEE: movups  xmm7, [rbp+9E40h+var_93F0]
 * 00000001800BBFF5: movups  [rbp+9E40h+var_7750], xmm7
 * 00000001800BBFFC: mov     dword ptr [rbp+9E40h+var_7740], esi
 * 00000001800BC002: mov     dword ptr [rbp+9E40h+var_7740+4], esi
 * 00000001800BC008: movups  xmm6, [rbp+9E40h+var_7740]
 * 00000001800BC00F: call    sub_1800B1A0C
 * 00000001800BC014: mov     r8, rax
 * 00000001800BC017: mov     r9d, r12d
 * 00000001800BC01A: mov     edx, 6Ah ; 'j'
 * 00000001800BC01F: lea     rcx, [rbp+9E40h+var_2770]; Src
 * 00000001800BC026: call    sub_18007C338
 * 00000001800BC02B: nop
 * 00000001800BC02C: mov     r8, rax
 * 00000001800BC02F: mov     rdx, r13
 * 00000001800BC032: lea     rcx, [rbp+9E40h+var_2790]
 * 00000001800BC039: call    sub_18001C6E8
 * 00000001800BC03E: nop
 * 00000001800BC03F: lea     r8, aVertex; "/Vertex"
 * 00000001800BC046: mov     rdx, rax
 * 00000001800BC049: lea     rcx, [rbp+9E40h+var_53D0]
 * 00000001800BC050: call    sub_18001C61C
 * 00000001800BC055: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BC05A: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BC05F: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BC064: mov     rcx, rax
 * 00000001800BC067: call    sub_18007C3DC
 * 00000001800BC06C: nop
 * 00000001800BC06D: lea     rcx, [rbp+9E40h+var_2790]
 * 00000001800BC074: call    sub_180010F30
 * 00000001800BC079: nop
 * 00000001800BC07A: lea     rcx, [rbp+9E40h+var_2770]
 * 00000001800BC081: call    sub_180010F30
 * 00000001800BC086: nop
 * 00000001800BC087: lea     rcx, dword_1801D94E4
 * 00000001800BC08E: call    sub_18000C538
 * 00000001800BC093: mov     rax, [rdi+rbx*8]
 * 00000001800BC097: mov     ecx, [r15+rax]
 * 00000001800BC09B: cmp     cs:dword_1801D94E8, ecx
 * 00000001800BC0A1: jle     loc_1800BC17E
 * 00000001800BC0A7: lea     rcx, dword_1801D94E8
 * 00000001800BC0AE: call    sub_18000C5A0
 * 00000001800BC0B3: cmp     cs:dword_1801D94E8, r14d
 * 00000001800BC0BA: jnz     loc_1800BC17E
 * 00000001800BC0C0: call    sub_1800B199C
 * 00000001800BC0C5: mov     qword ptr [rbp+9E40h+var_93E0], rax
 * 00000001800BC0CC: add     rax, 1A50h
 * 00000001800BC0D2: mov     qword ptr [rbp+9E40h+var_93E0+8], rax
 * 00000001800BC0D9: movups  xmm7, [rbp+9E40h+var_93E0]
 * 00000001800BC0E0: movups  [rbp+9E40h+var_7730], xmm7
 * 00000001800BC0E7: mov     dword ptr [rbp+9E40h+var_7720], esi
 * 00000001800BC0ED: mov     dword ptr [rbp+9E40h+var_7720+4], esi
 * 00000001800BC0F3: movups  xmm6, [rbp+9E40h+var_7720]
 * 00000001800BC0FA: call    sub_1800B1A0C
 * 00000001800BC0FF: mov     r8, rax
 * 00000001800BC102: mov     r9d, r12d
 * 00000001800BC105: mov     edx, 70h ; 'p'
 * 00000001800BC10A: lea     rcx, [rbp+9E40h+var_2710]; Src
 * 00000001800BC111: call    sub_18007C338
 * 00000001800BC116: nop
 * 00000001800BC117: mov     r8, rax
 * 00000001800BC11A: mov     rdx, r13
 * 00000001800BC11D: lea     rcx, [rbp+9E40h+var_2730]
 * 00000001800BC124: call    sub_18001C6E8
 * 00000001800BC129: nop
 * 00000001800BC12A: lea     r8, aVertex; "/Vertex"
 * 00000001800BC131: mov     rdx, rax
 * 00000001800BC134: lea     rcx, [rbp+9E40h+var_53B0]
 * 00000001800BC13B: call    sub_18001C61C
 * 00000001800BC140: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BC145: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BC14A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BC14F: mov     rcx, rax
 * 00000001800BC152: call    sub_18007C3DC
 * 00000001800BC157: nop
 * 00000001800BC158: lea     rcx, [rbp+9E40h+var_2730]
 * 00000001800BC15F: call    sub_180010F30
 * 00000001800BC164: nop
 * 00000001800BC165: lea     rcx, [rbp+9E40h+var_2710]
 * 00000001800BC16C: call    sub_180010F30
 * 00000001800BC171: nop
 * 00000001800BC172: lea     rcx, dword_1801D94E8
 * 00000001800BC179: call    sub_18000C538
 * 00000001800BC17E: mov     rax, [rdi+rbx*8]
 * 00000001800BC182: mov     ecx, [r15+rax]
 * 00000001800BC186: cmp     cs:dword_1801D94EC, ecx
 * 00000001800BC18C: jle     loc_1800BC269
 * 00000001800BC192: lea     rcx, dword_1801D94EC
 * 00000001800BC199: call    sub_18000C5A0
 * 00000001800BC19E: cmp     cs:dword_1801D94EC, r14d
 * 00000001800BC1A5: jnz     loc_1800BC269
 * 00000001800BC1AB: call    sub_1800B199C
 * 00000001800BC1B0: mov     qword ptr [rbp+9E40h+var_93D0], rax
 * 00000001800BC1B7: add     rax, 1A50h
 * 00000001800BC1BD: mov     qword ptr [rbp+9E40h+var_93D0+8], rax
 * 00000001800BC1C4: movups  xmm7, [rbp+9E40h+var_93D0]
 * 00000001800BC1CB: movups  [rbp+9E40h+var_7710], xmm7
 * 00000001800BC1D2: mov     dword ptr [rbp+9E40h+var_7700], esi
 * 00000001800BC1D8: mov     dword ptr [rbp+9E40h+var_7700+4], esi
 * 00000001800BC1DE: movups  xmm6, [rbp+9E40h+var_7700]
 * 00000001800BC1E5: call    sub_1800B1A0C
 * 00000001800BC1EA: mov     r8, rax
 * 00000001800BC1ED: mov     r9d, r12d
 * 00000001800BC1F0: mov     edx, 72h ; 'r'
 * 00000001800BC1F5: lea     rcx, [rbp+9E40h+var_26B0]; Src
 * 00000001800BC1FC: call    sub_18007C338
 * 00000001800BC201: nop
 * 00000001800BC202: mov     r8, rax
 * 00000001800BC205: mov     rdx, r13
 * 00000001800BC208: lea     rcx, [rbp+9E40h+var_26D0]
 * 00000001800BC20F: call    sub_18001C6E8
 * 00000001800BC214: nop
 * 00000001800BC215: lea     r8, aVertex; "/Vertex"
 * 00000001800BC21C: mov     rdx, rax
 * 00000001800BC21F: lea     rcx, [rbp+9E40h+var_5390]
 * 00000001800BC226: call    sub_18001C61C
 * 00000001800BC22B: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BC230: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BC235: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BC23A: mov     rcx, rax
 * 00000001800BC23D: call    sub_18007C3DC
 * 00000001800BC242: nop
 * 00000001800BC243: lea     rcx, [rbp+9E40h+var_26D0]
 * 00000001800BC24A: call    sub_180010F30
 * 00000001800BC24F: nop
 * 00000001800BC250: lea     rcx, [rbp+9E40h+var_26B0]
 * 00000001800BC257: call    sub_180010F30
 * 00000001800BC25C: nop
 * 00000001800BC25D: lea     rcx, dword_1801D94EC
 * 00000001800BC264: call    sub_18000C538
 * 00000001800BC269: mov     rax, [rdi+rbx*8]
 * 00000001800BC26D: mov     ecx, [r15+rax]
 * 00000001800BC271: cmp     cs:dword_1801D94F0, ecx
 * 00000001800BC277: jle     loc_1800BC354
 * 00000001800BC27D: lea     rcx, dword_1801D94F0
 * 00000001800BC284: call    sub_18000C5A0
 * 00000001800BC289: cmp     cs:dword_1801D94F0, r14d
 * 00000001800BC290: jnz     loc_1800BC354
 * 00000001800BC296: call    sub_1800B199C
 * 00000001800BC29B: mov     qword ptr [rbp+9E40h+var_93C0], rax
 * 00000001800BC2A2: add     rax, 1A50h
 * 00000001800BC2A8: mov     qword ptr [rbp+9E40h+var_93C0+8], rax
 * 00000001800BC2AF: movups  xmm7, [rbp+9E40h+var_93C0]
 * 00000001800BC2B6: movups  [rbp+9E40h+var_76F0], xmm7
 * 00000001800BC2BD: mov     dword ptr [rbp+9E40h+var_76E0], esi
 * 00000001800BC2C3: mov     dword ptr [rbp+9E40h+var_76E0+4], esi
 * 00000001800BC2C9: movups  xmm6, [rbp+9E40h+var_76E0]
 * 00000001800BC2D0: call    sub_1800B1A0C
 * 00000001800BC2D5: mov     r8, rax
 * 00000001800BC2D8: mov     r9d, r12d
 * 00000001800BC2DB: mov     edx, 78h ; 'x'
 * 00000001800BC2E0: lea     rcx, [rbp+9E40h+var_2650]; Src
 * 00000001800BC2E7: call    sub_18007C338
 * 00000001800BC2EC: nop
 * 00000001800BC2ED: mov     r8, rax
 * 00000001800BC2F0: mov     rdx, r13
 * 00000001800BC2F3: lea     rcx, [rbp+9E40h+var_2670]
 * 00000001800BC2FA: call    sub_18001C6E8
 * 00000001800BC2FF: nop
 * 00000001800BC300: lea     r8, aVertex; "/Vertex"
 * 00000001800BC307: mov     rdx, rax
 * 00000001800BC30A: lea     rcx, [rbp+9E40h+var_5370]
 * 00000001800BC311: call    sub_18001C61C
 * 00000001800BC316: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BC31B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BC320: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BC325: mov     rcx, rax
 * 00000001800BC328: call    sub_18007C3DC
 * 00000001800BC32D: nop
 * 00000001800BC32E: lea     rcx, [rbp+9E40h+var_2670]
 * 00000001800BC335: call    sub_180010F30
 * 00000001800BC33A: nop
 * 00000001800BC33B: lea     rcx, [rbp+9E40h+var_2650]
 * 00000001800BC342: call    sub_180010F30
 * 00000001800BC347: nop
 * 00000001800BC348: lea     rcx, dword_1801D94F0
 * 00000001800BC34F: call    sub_18000C538
 * 00000001800BC354: mov     rax, [rdi+rbx*8]
 * 00000001800BC358: mov     ecx, [r15+rax]
 * 00000001800BC35C: cmp     cs:dword_1801D94F4, ecx
 * 00000001800BC362: jle     loc_1800BC43F
 * 00000001800BC368: lea     rcx, dword_1801D94F4
 * 00000001800BC36F: call    sub_18000C5A0
 * 00000001800BC374: cmp     cs:dword_1801D94F4, r14d
 * 00000001800BC37B: jnz     loc_1800BC43F
 * 00000001800BC381: call    sub_1800B199C
 * 00000001800BC386: mov     qword ptr [rbp+9E40h+var_93B0], rax
 * 00000001800BC38D: add     rax, 1A50h
 * 00000001800BC393: mov     qword ptr [rbp+9E40h+var_93B0+8], rax
 * 00000001800BC39A: movups  xmm7, [rbp+9E40h+var_93B0]
 * 00000001800BC3A1: movups  [rbp+9E40h+var_76D0], xmm7
 * 00000001800BC3A8: mov     dword ptr [rbp+9E40h+var_76C0], esi
 * 00000001800BC3AE: mov     dword ptr [rbp+9E40h+var_76C0+4], esi
 * 00000001800BC3B4: movups  xmm6, [rbp+9E40h+var_76C0]
 * 00000001800BC3BB: call    sub_1800B1A0C
 * 00000001800BC3C0: mov     r8, rax
 * 00000001800BC3C3: mov     r9d, r12d
 * 00000001800BC3C6: mov     edx, 7Ah ; 'z'
 * 00000001800BC3CB: lea     rcx, [rbp+9E40h+var_25F0]; Src
 * 00000001800BC3D2: call    sub_18007C338
 * 00000001800BC3D7: nop
 * 00000001800BC3D8: mov     r8, rax
 * 00000001800BC3DB: mov     rdx, r13
 * 00000001800BC3DE: lea     rcx, [rbp+9E40h+var_2610]
 * 00000001800BC3E5: call    sub_18001C6E8
 * 00000001800BC3EA: nop
 * 00000001800BC3EB: lea     r8, aVertex; "/Vertex"
 * 00000001800BC3F2: mov     rdx, rax
 * 00000001800BC3F5: lea     rcx, [rbp+9E40h+var_5350]
 * 00000001800BC3FC: call    sub_18001C61C
 * 00000001800BC401: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BC406: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BC40B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BC410: mov     rcx, rax
 * 00000001800BC413: call    sub_18007C3DC
 * 00000001800BC418: nop
 * 00000001800BC419: lea     rcx, [rbp+9E40h+var_2610]
 * 00000001800BC420: call    sub_180010F30
 * 00000001800BC425: nop
 * 00000001800BC426: lea     rcx, [rbp+9E40h+var_25F0]
 * 00000001800BC42D: call    sub_180010F30
 * 00000001800BC432: nop
 * 00000001800BC433: lea     rcx, dword_1801D94F4
 * 00000001800BC43A: call    sub_18000C538
 * 00000001800BC43F: mov     rax, [rdi+rbx*8]
 * 00000001800BC443: mov     ecx, [r15+rax]
 * 00000001800BC447: cmp     cs:dword_1801D94F8, ecx
 * 00000001800BC44D: jle     loc_1800BC52A
 * 00000001800BC453: lea     rcx, dword_1801D94F8
 * 00000001800BC45A: call    sub_18000C5A0
 * 00000001800BC45F: cmp     cs:dword_1801D94F8, r14d
 * 00000001800BC466: jnz     loc_1800BC52A
 * 00000001800BC46C: call    sub_1800B198C
 * 00000001800BC471: mov     qword ptr [rbp+9E40h+var_93A0], rax
 * 00000001800BC478: add     rax, 1050h
 * 00000001800BC47E: mov     qword ptr [rbp+9E40h+var_93A0+8], rax
 * 00000001800BC485: movups  xmm7, [rbp+9E40h+var_93A0]
 * 00000001800BC48C: movups  [rbp+9E40h+var_76B0], xmm7
 * 00000001800BC493: mov     dword ptr [rbp+9E40h+var_76A0], esi
 * 00000001800BC499: mov     dword ptr [rbp+9E40h+var_76A0+4], esi
 * 00000001800BC49F: movups  xmm6, [rbp+9E40h+var_76A0]
 * 00000001800BC4A6: call    sub_1800B1A0C
 * 00000001800BC4AB: mov     r8, rax
 * 00000001800BC4AE: mov     r9d, r12d
 * 00000001800BC4B1: mov     edx, 80h
 * 00000001800BC4B6: lea     rcx, [rbp+9E40h+var_2590]; Src
 * 00000001800BC4BD: call    sub_18007C338
 * 00000001800BC4C2: nop
 * 00000001800BC4C3: mov     r8, rax
 * 00000001800BC4C6: mov     rdx, r13
 * 00000001800BC4C9: lea     rcx, [rbp+9E40h+var_25B0]
 * 00000001800BC4D0: call    sub_18001C6E8
 * 00000001800BC4D5: nop
 * 00000001800BC4D6: lea     r8, aVertex; "/Vertex"
 * 00000001800BC4DD: mov     rdx, rax
 * 00000001800BC4E0: lea     rcx, [rbp+9E40h+var_5330]
 * 00000001800BC4E7: call    sub_18001C61C
 * 00000001800BC4EC: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BC4F1: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BC4F6: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BC4FB: mov     rcx, rax
 * 00000001800BC4FE: call    sub_18007C3DC
 * 00000001800BC503: nop
 * 00000001800BC504: lea     rcx, [rbp+9E40h+var_25B0]
 * 00000001800BC50B: call    sub_180010F30
 * 00000001800BC510: nop
 * 00000001800BC511: lea     rcx, [rbp+9E40h+var_2590]
 * 00000001800BC518: call    sub_180010F30
 * 00000001800BC51D: nop
 * 00000001800BC51E: lea     rcx, dword_1801D94F8
 * 00000001800BC525: call    sub_18000C538
 * 00000001800BC52A: mov     rax, [rdi+rbx*8]
 * 00000001800BC52E: mov     ecx, [r15+rax]
 * 00000001800BC532: cmp     cs:dword_1801D94FC, ecx
 * 00000001800BC538: jle     loc_1800BC615
 * 00000001800BC53E: lea     rcx, dword_1801D94FC
 * 00000001800BC545: call    sub_18000C5A0
 * 00000001800BC54A: cmp     cs:dword_1801D94FC, r14d
 * 00000001800BC551: jnz     loc_1800BC615
 * 00000001800BC557: call    sub_1800B198C
 * 00000001800BC55C: mov     qword ptr [rbp+9E40h+var_9390], rax
 * 00000001800BC563: add     rax, 1050h
 * 00000001800BC569: mov     qword ptr [rbp+9E40h+var_9390+8], rax
 * 00000001800BC570: movups  xmm7, [rbp+9E40h+var_9390]
 * 00000001800BC577: movups  [rbp+9E40h+var_7690], xmm7
 * 00000001800BC57E: mov     dword ptr [rbp+9E40h+var_7680], esi
 * 00000001800BC584: mov     dword ptr [rbp+9E40h+var_7680+4], esi
 * 00000001800BC58A: movups  xmm6, [rbp+9E40h+var_7680]
 * 00000001800BC591: call    sub_1800B1A0C
 * 00000001800BC596: mov     r8, rax
 * 00000001800BC599: mov     r9d, r12d
 * 00000001800BC59C: mov     edx, 82h
 * 00000001800BC5A1: lea     rcx, [rbp+9E40h+var_2530]; Src
 * 00000001800BC5A8: call    sub_18007C338
 * 00000001800BC5AD: nop
 * 00000001800BC5AE: mov     r8, rax
 * 00000001800BC5B1: mov     rdx, r13
 * 00000001800BC5B4: lea     rcx, [rbp+9E40h+var_2550]
 * 00000001800BC5BB: call    sub_18001C6E8
 * 00000001800BC5C0: nop
 * 00000001800BC5C1: lea     r8, aVertex; "/Vertex"
 * 00000001800BC5C8: mov     rdx, rax
 * 00000001800BC5CB: lea     rcx, [rbp+9E40h+var_5310]
 * 00000001800BC5D2: call    sub_18001C61C
 * 00000001800BC5D7: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BC5DC: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BC5E1: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BC5E6: mov     rcx, rax
 * 00000001800BC5E9: call    sub_18007C3DC
 * 00000001800BC5EE: nop
 * 00000001800BC5EF: lea     rcx, [rbp+9E40h+var_2550]
 * 00000001800BC5F6: call    sub_180010F30
 * 00000001800BC5FB: nop
 * 00000001800BC5FC: lea     rcx, [rbp+9E40h+var_2530]
 * 00000001800BC603: call    sub_180010F30
 * 00000001800BC608: nop
 * 00000001800BC609: lea     rcx, dword_1801D94FC
 * 00000001800BC610: call    sub_18000C538
 * 00000001800BC615: mov     rax, [rdi+rbx*8]
 * 00000001800BC619: mov     ecx, [r15+rax]
 * 00000001800BC61D: cmp     cs:dword_1801D9500, ecx
 * 00000001800BC623: jle     loc_1800BC700
 * 00000001800BC629: lea     rcx, dword_1801D9500
 * 00000001800BC630: call    sub_18000C5A0
 * 00000001800BC635: cmp     cs:dword_1801D9500, r14d
 * 00000001800BC63C: jnz     loc_1800BC700
 * 00000001800BC642: call    sub_1800B198C
 * 00000001800BC647: mov     qword ptr [rbp+9E40h+var_9380], rax
 * 00000001800BC64E: add     rax, 1050h
 * 00000001800BC654: mov     qword ptr [rbp+9E40h+var_9380+8], rax
 * 00000001800BC65B: movups  xmm7, [rbp+9E40h+var_9380]
 * 00000001800BC662: movups  [rbp+9E40h+var_7670], xmm7
 * 00000001800BC669: mov     dword ptr [rbp+9E40h+var_7660], esi
 * 00000001800BC66F: mov     dword ptr [rbp+9E40h+var_7660+4], esi
 * 00000001800BC675: movups  xmm6, [rbp+9E40h+var_7660]
 * 00000001800BC67C: call    sub_1800B1A0C
 * 00000001800BC681: mov     r8, rax
 * 00000001800BC684: mov     r9d, r12d
 * 00000001800BC687: mov     edx, 88h
 * 00000001800BC68C: lea     rcx, [rbp+9E40h+var_24D0]; Src
 * 00000001800BC693: call    sub_18007C338
 * 00000001800BC698: nop
 * 00000001800BC699: mov     r8, rax
 * 00000001800BC69C: mov     rdx, r13
 * 00000001800BC69F: lea     rcx, [rbp+9E40h+var_24F0]
 * 00000001800BC6A6: call    sub_18001C6E8
 * 00000001800BC6AB: nop
 * 00000001800BC6AC: lea     r8, aVertex; "/Vertex"
 * 00000001800BC6B3: mov     rdx, rax
 * 00000001800BC6B6: lea     rcx, [rbp+9E40h+var_52F0]
 * 00000001800BC6BD: call    sub_18001C61C
 * 00000001800BC6C2: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BC6C7: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BC6CC: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BC6D1: mov     rcx, rax
 * 00000001800BC6D4: call    sub_18007C3DC
 * 00000001800BC6D9: nop
 * 00000001800BC6DA: lea     rcx, [rbp+9E40h+var_24F0]
 * 00000001800BC6E1: call    sub_180010F30
 * 00000001800BC6E6: nop
 * 00000001800BC6E7: lea     rcx, [rbp+9E40h+var_24D0]
 * 00000001800BC6EE: call    sub_180010F30
 * 00000001800BC6F3: nop
 * 00000001800BC6F4: lea     rcx, dword_1801D9500
 * 00000001800BC6FB: call    sub_18000C538
 * 00000001800BC700: mov     rax, [rdi+rbx*8]
 * 00000001800BC704: mov     ecx, [r15+rax]
 * 00000001800BC708: cmp     cs:dword_1801D9504, ecx
 * 00000001800BC70E: jle     loc_1800BC7EB
 * 00000001800BC714: lea     rcx, dword_1801D9504
 * 00000001800BC71B: call    sub_18000C5A0
 * 00000001800BC720: cmp     cs:dword_1801D9504, r14d
 * 00000001800BC727: jnz     loc_1800BC7EB
 * 00000001800BC72D: call    sub_1800B198C
 * 00000001800BC732: mov     qword ptr [rbp+9E40h+var_9370], rax
 * 00000001800BC739: add     rax, 1050h
 * 00000001800BC73F: mov     qword ptr [rbp+9E40h+var_9370+8], rax
 * 00000001800BC746: movups  xmm7, [rbp+9E40h+var_9370]
 * 00000001800BC74D: movups  [rbp+9E40h+var_7650], xmm7
 * 00000001800BC754: mov     dword ptr [rbp+9E40h+var_7640], esi
 * 00000001800BC75A: mov     dword ptr [rbp+9E40h+var_7640+4], esi
 * 00000001800BC760: movups  xmm6, [rbp+9E40h+var_7640]
 * 00000001800BC767: call    sub_1800B1A0C
 * 00000001800BC76C: mov     r8, rax
 * 00000001800BC76F: mov     r9d, r12d
 * 00000001800BC772: mov     edx, 8Ah
 * 00000001800BC777: lea     rcx, [rbp+9E40h+var_2470]; Src
 * 00000001800BC77E: call    sub_18007C338
 * 00000001800BC783: nop
 * 00000001800BC784: mov     r8, rax
 * 00000001800BC787: mov     rdx, r13
 * 00000001800BC78A: lea     rcx, [rbp+9E40h+var_2490]
 * 00000001800BC791: call    sub_18001C6E8
 * 00000001800BC796: nop
 * 00000001800BC797: lea     r8, aVertex; "/Vertex"
 * 00000001800BC79E: mov     rdx, rax
 * 00000001800BC7A1: lea     rcx, [rbp+9E40h+var_52D0]
 * 00000001800BC7A8: call    sub_18001C61C
 * 00000001800BC7AD: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BC7B2: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BC7B7: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BC7BC: mov     rcx, rax
 * 00000001800BC7BF: call    sub_18007C3DC
 * 00000001800BC7C4: nop
 * 00000001800BC7C5: lea     rcx, [rbp+9E40h+var_2490]
 * 00000001800BC7CC: call    sub_180010F30
 * 00000001800BC7D1: nop
 * 00000001800BC7D2: lea     rcx, [rbp+9E40h+var_2470]
 * 00000001800BC7D9: call    sub_180010F30
 * 00000001800BC7DE: nop
 * 00000001800BC7DF: lea     rcx, dword_1801D9504
 * 00000001800BC7E6: call    sub_18000C538
 * 00000001800BC7EB: mov     rax, [rdi+rbx*8]
 * 00000001800BC7EF: mov     ecx, [r15+rax]
 * 00000001800BC7F3: cmp     cs:dword_1801D9508, ecx
 * 00000001800BC7F9: jle     loc_1800BC8D6
 * 00000001800BC7FF: lea     rcx, dword_1801D9508
 * 00000001800BC806: call    sub_18000C5A0
 * 00000001800BC80B: cmp     cs:dword_1801D9508, r14d
 * 00000001800BC812: jnz     loc_1800BC8D6
 * 00000001800BC818: call    sub_1800B198C
 * 00000001800BC81D: mov     qword ptr [rbp+9E40h+var_9360], rax
 * 00000001800BC824: add     rax, 1050h
 * 00000001800BC82A: mov     qword ptr [rbp+9E40h+var_9360+8], rax
 * 00000001800BC831: movups  xmm7, [rbp+9E40h+var_9360]
 * 00000001800BC838: movups  [rbp+9E40h+var_7630], xmm7
 * 00000001800BC83F: mov     dword ptr [rbp+9E40h+var_7620], esi
 * 00000001800BC845: mov     dword ptr [rbp+9E40h+var_7620+4], esi
 * 00000001800BC84B: movups  xmm6, [rbp+9E40h+var_7620]
 * 00000001800BC852: call    sub_1800B1A0C
 * 00000001800BC857: mov     r8, rax
 * 00000001800BC85A: mov     r9d, r12d
 * 00000001800BC85D: mov     edx, 90h
 * 00000001800BC862: lea     rcx, [rbp+9E40h+var_2410]; Src
 * 00000001800BC869: call    sub_18007C338
 * 00000001800BC86E: nop
 * 00000001800BC86F: mov     r8, rax
 * 00000001800BC872: mov     rdx, r13
 * 00000001800BC875: lea     rcx, [rbp+9E40h+var_2430]
 * 00000001800BC87C: call    sub_18001C6E8
 * 00000001800BC881: nop
 * 00000001800BC882: lea     r8, aVertex; "/Vertex"
 * 00000001800BC889: mov     rdx, rax
 * 00000001800BC88C: lea     rcx, [rbp+9E40h+var_52B0]
 * 00000001800BC893: call    sub_18001C61C
 * 00000001800BC898: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BC89D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BC8A2: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BC8A7: mov     rcx, rax
 * 00000001800BC8AA: call    sub_18007C3DC
 * 00000001800BC8AF: nop
 * 00000001800BC8B0: lea     rcx, [rbp+9E40h+var_2430]
 * 00000001800BC8B7: call    sub_180010F30
 * 00000001800BC8BC: nop
 * 00000001800BC8BD: lea     rcx, [rbp+9E40h+var_2410]
 * 00000001800BC8C4: call    sub_180010F30
 * 00000001800BC8C9: nop
 * 00000001800BC8CA: lea     rcx, dword_1801D9508
 * 00000001800BC8D1: call    sub_18000C538
 * 00000001800BC8D6: mov     rax, [rdi+rbx*8]
 * 00000001800BC8DA: mov     ecx, [r15+rax]
 * 00000001800BC8DE: cmp     cs:dword_1801D950C, ecx
 * 00000001800BC8E4: jle     loc_1800BC9C1
 * 00000001800BC8EA: lea     rcx, dword_1801D950C
 * 00000001800BC8F1: call    sub_18000C5A0
 * 00000001800BC8F6: cmp     cs:dword_1801D950C, r14d
 * 00000001800BC8FD: jnz     loc_1800BC9C1
 * 00000001800BC903: call    sub_1800B198C
 * 00000001800BC908: mov     qword ptr [rbp+9E40h+var_9350], rax
 * 00000001800BC90F: add     rax, 1050h
 * 00000001800BC915: mov     qword ptr [rbp+9E40h+var_9350+8], rax
 * 00000001800BC91C: movups  xmm7, [rbp+9E40h+var_9350]
 * 00000001800BC923: movups  [rbp+9E40h+var_7610], xmm7
 * 00000001800BC92A: mov     dword ptr [rbp+9E40h+var_7600], esi
 * 00000001800BC930: mov     dword ptr [rbp+9E40h+var_7600+4], esi
 * 00000001800BC936: movups  xmm6, [rbp+9E40h+var_7600]
 * 00000001800BC93D: call    sub_1800B1A0C
 * 00000001800BC942: mov     r8, rax
 * 00000001800BC945: mov     r9d, r12d
 * 00000001800BC948: mov     edx, 92h
 * 00000001800BC94D: lea     rcx, [rbp+9E40h+var_23B0]; Src
 * 00000001800BC954: call    sub_18007C338
 * 00000001800BC959: nop
 * 00000001800BC95A: mov     r8, rax
 * 00000001800BC95D: mov     rdx, r13
 * 00000001800BC960: lea     rcx, [rbp+9E40h+var_23D0]
 * 00000001800BC967: call    sub_18001C6E8
 * 00000001800BC96C: nop
 * 00000001800BC96D: lea     r8, aVertex; "/Vertex"
 * 00000001800BC974: mov     rdx, rax
 * 00000001800BC977: lea     rcx, [rbp+9E40h+var_5290]
 * 00000001800BC97E: call    sub_18001C61C
 * 00000001800BC983: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BC988: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BC98D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BC992: mov     rcx, rax
 * 00000001800BC995: call    sub_18007C3DC
 * 00000001800BC99A: nop
 * 00000001800BC99B: lea     rcx, [rbp+9E40h+var_23D0]
 * 00000001800BC9A2: call    sub_180010F30
 * 00000001800BC9A7: nop
 * 00000001800BC9A8: lea     rcx, [rbp+9E40h+var_23B0]
 * 00000001800BC9AF: call    sub_180010F30
 * 00000001800BC9B4: nop
 * 00000001800BC9B5: lea     rcx, dword_1801D950C
 * 00000001800BC9BC: call    sub_18000C538
 * 00000001800BC9C1: mov     rax, [rdi+rbx*8]
 * 00000001800BC9C5: mov     ecx, [r15+rax]
 * 00000001800BC9C9: cmp     cs:dword_1801D9510, ecx
 * 00000001800BC9CF: jle     loc_1800BCAAC
 * 00000001800BC9D5: lea     rcx, dword_1801D9510
 * 00000001800BC9DC: call    sub_18000C5A0
 * 00000001800BC9E1: cmp     cs:dword_1801D9510, r14d
 * 00000001800BC9E8: jnz     loc_1800BCAAC
 * 00000001800BC9EE: call    sub_1800B198C
 * 00000001800BC9F3: mov     qword ptr [rbp+9E40h+var_9340], rax
 * 00000001800BC9FA: add     rax, 1050h
 * 00000001800BCA00: mov     qword ptr [rbp+9E40h+var_9340+8], rax
 * 00000001800BCA07: movups  xmm7, [rbp+9E40h+var_9340]
 * 00000001800BCA0E: movups  [rbp+9E40h+var_75F0], xmm7
 * 00000001800BCA15: mov     dword ptr [rbp+9E40h+var_75E0], esi
 * 00000001800BCA1B: mov     dword ptr [rbp+9E40h+var_75E0+4], esi
 * 00000001800BCA21: movups  xmm6, [rbp+9E40h+var_75E0]
 * 00000001800BCA28: call    sub_1800B1A0C
 * 00000001800BCA2D: mov     r8, rax
 * 00000001800BCA30: mov     r9d, r12d
 * 00000001800BCA33: mov     edx, 98h
 * 00000001800BCA38: lea     rcx, [rbp+9E40h+var_2350]; Src
 * 00000001800BCA3F: call    sub_18007C338
 * 00000001800BCA44: nop
 * 00000001800BCA45: mov     r8, rax
 * 00000001800BCA48: mov     rdx, r13
 * 00000001800BCA4B: lea     rcx, [rbp+9E40h+var_2370]
 * 00000001800BCA52: call    sub_18001C6E8
 * 00000001800BCA57: nop
 * 00000001800BCA58: lea     r8, aVertex; "/Vertex"
 * 00000001800BCA5F: mov     rdx, rax
 * 00000001800BCA62: lea     rcx, [rbp+9E40h+var_5270]
 * 00000001800BCA69: call    sub_18001C61C
 * 00000001800BCA6E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BCA73: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BCA78: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BCA7D: mov     rcx, rax
 * 00000001800BCA80: call    sub_18007C3DC
 * 00000001800BCA85: nop
 * 00000001800BCA86: lea     rcx, [rbp+9E40h+var_2370]
 * 00000001800BCA8D: call    sub_180010F30
 * 00000001800BCA92: nop
 * 00000001800BCA93: lea     rcx, [rbp+9E40h+var_2350]
 * 00000001800BCA9A: call    sub_180010F30
 * 00000001800BCA9F: nop
 * 00000001800BCAA0: lea     rcx, dword_1801D9510
 * 00000001800BCAA7: call    sub_18000C538
 * 00000001800BCAAC: mov     rax, [rdi+rbx*8]
 * 00000001800BCAB0: mov     ecx, [r15+rax]
 * 00000001800BCAB4: cmp     cs:dword_1801D9514, ecx
 * 00000001800BCABA: jle     loc_1800BCB97
 * 00000001800BCAC0: lea     rcx, dword_1801D9514
 * 00000001800BCAC7: call    sub_18000C5A0
 * 00000001800BCACC: cmp     cs:dword_1801D9514, r14d
 * 00000001800BCAD3: jnz     loc_1800BCB97
 * 00000001800BCAD9: call    sub_1800B198C
 * 00000001800BCADE: mov     qword ptr [rbp+9E40h+var_9330], rax
 * 00000001800BCAE5: add     rax, 1050h
 * 00000001800BCAEB: mov     qword ptr [rbp+9E40h+var_9330+8], rax
 * 00000001800BCAF2: movups  xmm7, [rbp+9E40h+var_9330]
 * 00000001800BCAF9: movups  [rbp+9E40h+var_75D0], xmm7
 * 00000001800BCB00: mov     dword ptr [rbp+9E40h+var_75C0], esi
 * 00000001800BCB06: mov     dword ptr [rbp+9E40h+var_75C0+4], esi
 * 00000001800BCB0C: movups  xmm6, [rbp+9E40h+var_75C0]
 * 00000001800BCB13: call    sub_1800B1A0C
 * 00000001800BCB18: mov     r8, rax
 * 00000001800BCB1B: mov     r9d, r12d
 * 00000001800BCB1E: mov     edx, 9Ah
 * 00000001800BCB23: lea     rcx, [rbp+9E40h+var_22F0]; Src
 * 00000001800BCB2A: call    sub_18007C338
 * 00000001800BCB2F: nop
 * 00000001800BCB30: mov     r8, rax
 * 00000001800BCB33: mov     rdx, r13
 * 00000001800BCB36: lea     rcx, [rbp+9E40h+var_2310]
 * 00000001800BCB3D: call    sub_18001C6E8
 * 00000001800BCB42: nop
 * 00000001800BCB43: lea     r8, aVertex; "/Vertex"
 * 00000001800BCB4A: mov     rdx, rax
 * 00000001800BCB4D: lea     rcx, [rbp+9E40h+var_5250]
 * 00000001800BCB54: call    sub_18001C61C
 * 00000001800BCB59: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BCB5E: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BCB63: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BCB68: mov     rcx, rax
 * 00000001800BCB6B: call    sub_18007C3DC
 * 00000001800BCB70: nop
 * 00000001800BCB71: lea     rcx, [rbp+9E40h+var_2310]
 * 00000001800BCB78: call    sub_180010F30
 * 00000001800BCB7D: nop
 * 00000001800BCB7E: lea     rcx, [rbp+9E40h+var_22F0]
 * 00000001800BCB85: call    sub_180010F30
 * 00000001800BCB8A: nop
 * 00000001800BCB8B: lea     rcx, dword_1801D9514
 * 00000001800BCB92: call    sub_18000C538
 * 00000001800BCB97: mov     rax, [rdi+rbx*8]
 * 00000001800BCB9B: mov     ecx, [r15+rax]
 * 00000001800BCB9F: cmp     cs:dword_1801D9518, ecx
 * 00000001800BCBA5: jle     loc_1800BCC82
 * 00000001800BCBAB: lea     rcx, dword_1801D9518
 * 00000001800BCBB2: call    sub_18000C5A0
 * 00000001800BCBB7: cmp     cs:dword_1801D9518, r14d
 * 00000001800BCBBE: jnz     loc_1800BCC82
 * 00000001800BCBC4: call    sub_1800B199C
 * 00000001800BCBC9: mov     qword ptr [rbp+9E40h+var_9320], rax
 * 00000001800BCBD0: add     rax, 1A50h
 * 00000001800BCBD6: mov     qword ptr [rbp+9E40h+var_9320+8], rax
 * 00000001800BCBDD: movups  xmm7, [rbp+9E40h+var_9320]
 * 00000001800BCBE4: movups  [rbp+9E40h+var_75B0], xmm7
 * 00000001800BCBEB: mov     dword ptr [rbp+9E40h+var_75A0], esi
 * 00000001800BCBF1: mov     dword ptr [rbp+9E40h+var_75A0+4], esi
 * 00000001800BCBF7: movups  xmm6, [rbp+9E40h+var_75A0]
 * 00000001800BCBFE: call    sub_1800B1A0C
 * 00000001800BCC03: mov     r8, rax
 * 00000001800BCC06: mov     r9d, r12d
 * 00000001800BCC09: mov     edx, 0A0h
 * 00000001800BCC0E: lea     rcx, [rbp+9E40h+var_2290]; Src
 * 00000001800BCC15: call    sub_18007C338
 * 00000001800BCC1A: nop
 * 00000001800BCC1B: mov     r8, rax
 * 00000001800BCC1E: mov     rdx, r13
 * 00000001800BCC21: lea     rcx, [rbp+9E40h+var_22B0]
 * 00000001800BCC28: call    sub_18001C6E8
 * 00000001800BCC2D: nop
 * 00000001800BCC2E: lea     r8, aVertex; "/Vertex"
 * 00000001800BCC35: mov     rdx, rax
 * 00000001800BCC38: lea     rcx, [rbp+9E40h+var_5230]
 * 00000001800BCC3F: call    sub_18001C61C
 * 00000001800BCC44: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BCC49: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BCC4E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BCC53: mov     rcx, rax
 * 00000001800BCC56: call    sub_18007C3DC
 * 00000001800BCC5B: nop
 * 00000001800BCC5C: lea     rcx, [rbp+9E40h+var_22B0]
 * 00000001800BCC63: call    sub_180010F30
 * 00000001800BCC68: nop
 * 00000001800BCC69: lea     rcx, [rbp+9E40h+var_2290]
 * 00000001800BCC70: call    sub_180010F30
 * 00000001800BCC75: nop
 * 00000001800BCC76: lea     rcx, dword_1801D9518
 * 00000001800BCC7D: call    sub_18000C538
 * 00000001800BCC82: mov     rax, [rdi+rbx*8]
 * 00000001800BCC86: mov     ecx, [r15+rax]
 * 00000001800BCC8A: cmp     cs:dword_1801D951C, ecx
 * 00000001800BCC90: jle     loc_1800BCD6D
 * 00000001800BCC96: lea     rcx, dword_1801D951C
 * 00000001800BCC9D: call    sub_18000C5A0
 * 00000001800BCCA2: cmp     cs:dword_1801D951C, r14d
 * 00000001800BCCA9: jnz     loc_1800BCD6D
 * 00000001800BCCAF: call    sub_1800B199C
 * 00000001800BCCB4: mov     qword ptr [rbp+9E40h+var_9310], rax
 * 00000001800BCCBB: add     rax, 1A50h
 * 00000001800BCCC1: mov     qword ptr [rbp+9E40h+var_9310+8], rax
 * 00000001800BCCC8: movups  xmm7, [rbp+9E40h+var_9310]
 * 00000001800BCCCF: movups  [rbp+9E40h+var_7590], xmm7
 * 00000001800BCCD6: mov     dword ptr [rbp+9E40h+var_7580], esi
 * 00000001800BCCDC: mov     dword ptr [rbp+9E40h+var_7580+4], esi
 * 00000001800BCCE2: movups  xmm6, [rbp+9E40h+var_7580]
 * 00000001800BCCE9: call    sub_1800B1A0C
 * 00000001800BCCEE: mov     r8, rax
 * 00000001800BCCF1: mov     r9d, r12d
 * 00000001800BCCF4: mov     edx, 0A2h
 * 00000001800BCCF9: lea     rcx, [rbp+9E40h+var_2230]; Src
 * 00000001800BCD00: call    sub_18007C338
 * 00000001800BCD05: nop
 * 00000001800BCD06: mov     r8, rax
 * 00000001800BCD09: mov     rdx, r13
 * 00000001800BCD0C: lea     rcx, [rbp+9E40h+var_2250]
 * 00000001800BCD13: call    sub_18001C6E8
 * 00000001800BCD18: nop
 * 00000001800BCD19: lea     r8, aVertex; "/Vertex"
 * 00000001800BCD20: mov     rdx, rax
 * 00000001800BCD23: lea     rcx, [rbp+9E40h+var_5210]
 * 00000001800BCD2A: call    sub_18001C61C
 * 00000001800BCD2F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BCD34: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BCD39: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BCD3E: mov     rcx, rax
 * 00000001800BCD41: call    sub_18007C3DC
 * 00000001800BCD46: nop
 * 00000001800BCD47: lea     rcx, [rbp+9E40h+var_2250]
 * 00000001800BCD4E: call    sub_180010F30
 * 00000001800BCD53: nop
 * 00000001800BCD54: lea     rcx, [rbp+9E40h+var_2230]
 * 00000001800BCD5B: call    sub_180010F30
 * 00000001800BCD60: nop
 * 00000001800BCD61: lea     rcx, dword_1801D951C
 * 00000001800BCD68: call    sub_18000C538
 * 00000001800BCD6D: mov     rax, [rdi+rbx*8]
 * 00000001800BCD71: mov     ecx, [r15+rax]
 * 00000001800BCD75: cmp     cs:dword_1801D9520, ecx
 * 00000001800BCD7B: jle     loc_1800BCE58
 * 00000001800BCD81: lea     rcx, dword_1801D9520
 * 00000001800BCD88: call    sub_18000C5A0
 * 00000001800BCD8D: cmp     cs:dword_1801D9520, r14d
 * 00000001800BCD94: jnz     loc_1800BCE58
 * 00000001800BCD9A: call    sub_1800B199C
 * 00000001800BCD9F: mov     qword ptr [rbp+9E40h+var_9300], rax
 * 00000001800BCDA6: add     rax, 1A50h
 * 00000001800BCDAC: mov     qword ptr [rbp+9E40h+var_9300+8], rax
 * 00000001800BCDB3: movups  xmm7, [rbp+9E40h+var_9300]
 * 00000001800BCDBA: movups  [rbp+9E40h+var_7570], xmm7
 * 00000001800BCDC1: mov     dword ptr [rbp+9E40h+var_7560], esi
 * 00000001800BCDC7: mov     dword ptr [rbp+9E40h+var_7560+4], esi
 * 00000001800BCDCD: movups  xmm6, [rbp+9E40h+var_7560]
 * 00000001800BCDD4: call    sub_1800B1A0C
 * 00000001800BCDD9: mov     r8, rax
 * 00000001800BCDDC: mov     r9d, r12d
 * 00000001800BCDDF: mov     edx, 0A8h
 * 00000001800BCDE4: lea     rcx, [rbp+9E40h+var_21D0]; Src
 * 00000001800BCDEB: call    sub_18007C338
 * 00000001800BCDF0: nop
 * 00000001800BCDF1: mov     r8, rax
 * 00000001800BCDF4: mov     rdx, r13
 * 00000001800BCDF7: lea     rcx, [rbp+9E40h+var_21F0]
 * 00000001800BCDFE: call    sub_18001C6E8
 * 00000001800BCE03: nop
 * 00000001800BCE04: lea     r8, aVertex; "/Vertex"
 * 00000001800BCE0B: mov     rdx, rax
 * 00000001800BCE0E: lea     rcx, [rbp+9E40h+var_51F0]
 * 00000001800BCE15: call    sub_18001C61C
 * 00000001800BCE1A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BCE1F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BCE24: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BCE29: mov     rcx, rax
 * 00000001800BCE2C: call    sub_18007C3DC
 * 00000001800BCE31: nop
 * 00000001800BCE32: lea     rcx, [rbp+9E40h+var_21F0]
 * 00000001800BCE39: call    sub_180010F30
 * 00000001800BCE3E: nop
 * 00000001800BCE3F: lea     rcx, [rbp+9E40h+var_21D0]
 * 00000001800BCE46: call    sub_180010F30
 * 00000001800BCE4B: nop
 * 00000001800BCE4C: lea     rcx, dword_1801D9520
 * 00000001800BCE53: call    sub_18000C538
 * 00000001800BCE58: mov     rax, [rdi+rbx*8]
 * 00000001800BCE5C: mov     ecx, [r15+rax]
 * 00000001800BCE60: cmp     cs:dword_1801D9524, ecx
 * 00000001800BCE66: jle     loc_1800BCF43
 * 00000001800BCE6C: lea     rcx, dword_1801D9524
 * 00000001800BCE73: call    sub_18000C5A0
 * 00000001800BCE78: cmp     cs:dword_1801D9524, r14d
 * 00000001800BCE7F: jnz     loc_1800BCF43
 * 00000001800BCE85: call    sub_1800B199C
 * 00000001800BCE8A: mov     qword ptr [rbp+9E40h+var_92F0], rax
 * 00000001800BCE91: add     rax, 1A50h
 * 00000001800BCE97: mov     qword ptr [rbp+9E40h+var_92F0+8], rax
 * 00000001800BCE9E: movups  xmm7, [rbp+9E40h+var_92F0]
 * 00000001800BCEA5: movups  [rbp+9E40h+var_7550], xmm7
 * 00000001800BCEAC: mov     dword ptr [rbp+9E40h+var_7540], esi
 * 00000001800BCEB2: mov     dword ptr [rbp+9E40h+var_7540+4], esi
 * 00000001800BCEB8: movups  xmm6, [rbp+9E40h+var_7540]
 * 00000001800BCEBF: call    sub_1800B1A0C
 * 00000001800BCEC4: mov     r8, rax
 * 00000001800BCEC7: mov     r9d, r12d
 * 00000001800BCECA: mov     edx, 0AAh
 * 00000001800BCECF: lea     rcx, [rbp+9E40h+var_2170]; Src
 * 00000001800BCED6: call    sub_18007C338
 * 00000001800BCEDB: nop
 * 00000001800BCEDC: mov     r8, rax
 * 00000001800BCEDF: mov     rdx, r13
 * 00000001800BCEE2: lea     rcx, [rbp+9E40h+var_2190]
 * 00000001800BCEE9: call    sub_18001C6E8
 * 00000001800BCEEE: nop
 * 00000001800BCEEF: lea     r8, aVertex; "/Vertex"
 * 00000001800BCEF6: mov     rdx, rax
 * 00000001800BCEF9: lea     rcx, [rbp+9E40h+var_51D0]
 * 00000001800BCF00: call    sub_18001C61C
 * 00000001800BCF05: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BCF0A: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BCF0F: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BCF14: mov     rcx, rax
 * 00000001800BCF17: call    sub_18007C3DC
 * 00000001800BCF1C: nop
 * 00000001800BCF1D: lea     rcx, [rbp+9E40h+var_2190]
 * 00000001800BCF24: call    sub_180010F30
 * 00000001800BCF29: nop
 * 00000001800BCF2A: lea     rcx, [rbp+9E40h+var_2170]
 * 00000001800BCF31: call    sub_180010F30
 * 00000001800BCF36: nop
 * 00000001800BCF37: lea     rcx, dword_1801D9524
 * 00000001800BCF3E: call    sub_18000C538
 * 00000001800BCF43: mov     rax, [rdi+rbx*8]
 * 00000001800BCF47: mov     ecx, [r15+rax]
 * 00000001800BCF4B: cmp     cs:dword_1801D9528, ecx
 * 00000001800BCF51: jle     loc_1800BD02E
 * 00000001800BCF57: lea     rcx, dword_1801D9528
 * 00000001800BCF5E: call    sub_18000C5A0
 * 00000001800BCF63: cmp     cs:dword_1801D9528, r14d
 * 00000001800BCF6A: jnz     loc_1800BD02E
 * 00000001800BCF70: call    sub_1800B199C
 * 00000001800BCF75: mov     qword ptr [rbp+9E40h+var_92E0], rax
 * 00000001800BCF7C: add     rax, 1A50h
 * 00000001800BCF82: mov     qword ptr [rbp+9E40h+var_92E0+8], rax
 * 00000001800BCF89: movups  xmm7, [rbp+9E40h+var_92E0]
 * 00000001800BCF90: movups  [rbp+9E40h+var_7530], xmm7
 * 00000001800BCF97: mov     dword ptr [rbp+9E40h+var_7520], esi
 * 00000001800BCF9D: mov     dword ptr [rbp+9E40h+var_7520+4], esi
 * 00000001800BCFA3: movups  xmm6, [rbp+9E40h+var_7520]
 * 00000001800BCFAA: call    sub_1800B1A0C
 * 00000001800BCFAF: mov     r8, rax
 * 00000001800BCFB2: mov     r9d, r12d
 * 00000001800BCFB5: mov     edx, 0B0h
 * 00000001800BCFBA: lea     rcx, [rbp+9E40h+var_2110]; Src
 * 00000001800BCFC1: call    sub_18007C338
 * 00000001800BCFC6: nop
 * 00000001800BCFC7: mov     r8, rax
 * 00000001800BCFCA: mov     rdx, r13
 * 00000001800BCFCD: lea     rcx, [rbp+9E40h+var_2130]
 * 00000001800BCFD4: call    sub_18001C6E8
 * 00000001800BCFD9: nop
 * 00000001800BCFDA: lea     r8, aVertex; "/Vertex"
 * 00000001800BCFE1: mov     rdx, rax
 * 00000001800BCFE4: lea     rcx, [rbp+9E40h+var_51B0]
 * 00000001800BCFEB: call    sub_18001C61C
 * 00000001800BCFF0: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BCFF5: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BCFFA: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BCFFF: mov     rcx, rax
 * 00000001800BD002: call    sub_18007C3DC
 * 00000001800BD007: nop
 * 00000001800BD008: lea     rcx, [rbp+9E40h+var_2130]
 * 00000001800BD00F: call    sub_180010F30
 * 00000001800BD014: nop
 * 00000001800BD015: lea     rcx, [rbp+9E40h+var_2110]
 * 00000001800BD01C: call    sub_180010F30
 * 00000001800BD021: nop
 * 00000001800BD022: lea     rcx, dword_1801D9528
 * 00000001800BD029: call    sub_18000C538
 * 00000001800BD02E: mov     rax, [rdi+rbx*8]
 * 00000001800BD032: mov     ecx, [r15+rax]
 * 00000001800BD036: cmp     cs:dword_1801D952C, ecx
 * 00000001800BD03C: jle     loc_1800BD119
 * 00000001800BD042: lea     rcx, dword_1801D952C
 * 00000001800BD049: call    sub_18000C5A0
 * 00000001800BD04E: cmp     cs:dword_1801D952C, r14d
 * 00000001800BD055: jnz     loc_1800BD119
 * 00000001800BD05B: call    sub_1800B199C
 * 00000001800BD060: mov     qword ptr [rbp+9E40h+var_92D0], rax
 * 00000001800BD067: add     rax, 1A50h
 * 00000001800BD06D: mov     qword ptr [rbp+9E40h+var_92D0+8], rax
 * 00000001800BD074: movups  xmm7, [rbp+9E40h+var_92D0]
 * 00000001800BD07B: movups  [rbp+9E40h+var_7510], xmm7
 * 00000001800BD082: mov     dword ptr [rbp+9E40h+var_7500], esi
 * 00000001800BD088: mov     dword ptr [rbp+9E40h+var_7500+4], esi
 * 00000001800BD08E: movups  xmm6, [rbp+9E40h+var_7500]
 * 00000001800BD095: call    sub_1800B1A0C
 * 00000001800BD09A: mov     r8, rax
 * 00000001800BD09D: mov     r9d, r12d
 * 00000001800BD0A0: mov     edx, 0B2h
 * 00000001800BD0A5: lea     rcx, [rbp+9E40h+var_20B0]; Src
 * 00000001800BD0AC: call    sub_18007C338
 * 00000001800BD0B1: nop
 * 00000001800BD0B2: mov     r8, rax
 * 00000001800BD0B5: mov     rdx, r13
 * 00000001800BD0B8: lea     rcx, [rbp+9E40h+var_20D0]
 * 00000001800BD0BF: call    sub_18001C6E8
 * 00000001800BD0C4: nop
 * 00000001800BD0C5: lea     r8, aVertex; "/Vertex"
 * 00000001800BD0CC: mov     rdx, rax
 * 00000001800BD0CF: lea     rcx, [rbp+9E40h+var_5190]
 * 00000001800BD0D6: call    sub_18001C61C
 * 00000001800BD0DB: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BD0E0: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BD0E5: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BD0EA: mov     rcx, rax
 * 00000001800BD0ED: call    sub_18007C3DC
 * 00000001800BD0F2: nop
 * 00000001800BD0F3: lea     rcx, [rbp+9E40h+var_20D0]
 * 00000001800BD0FA: call    sub_180010F30
 * 00000001800BD0FF: nop
 * 00000001800BD100: lea     rcx, [rbp+9E40h+var_20B0]
 * 00000001800BD107: call    sub_180010F30
 * 00000001800BD10C: nop
 * 00000001800BD10D: lea     rcx, dword_1801D952C
 * 00000001800BD114: call    sub_18000C538
 * 00000001800BD119: mov     rax, [rdi+rbx*8]
 * 00000001800BD11D: mov     ecx, [r15+rax]
 * 00000001800BD121: cmp     cs:dword_1801D9530, ecx
 * 00000001800BD127: jle     loc_1800BD204
 * 00000001800BD12D: lea     rcx, dword_1801D9530
 * 00000001800BD134: call    sub_18000C5A0
 * 00000001800BD139: cmp     cs:dword_1801D9530, r14d
 * 00000001800BD140: jnz     loc_1800BD204
 * 00000001800BD146: call    sub_1800B199C
 * 00000001800BD14B: mov     qword ptr [rbp+9E40h+var_92C0], rax
 * 00000001800BD152: add     rax, 1A50h
 * 00000001800BD158: mov     qword ptr [rbp+9E40h+var_92C0+8], rax
 * 00000001800BD15F: movups  xmm7, [rbp+9E40h+var_92C0]
 * 00000001800BD166: movups  [rbp+9E40h+var_74F0], xmm7
 * 00000001800BD16D: mov     dword ptr [rbp+9E40h+var_74E0], esi
 * 00000001800BD173: mov     dword ptr [rbp+9E40h+var_74E0+4], esi
 * 00000001800BD179: movups  xmm6, [rbp+9E40h+var_74E0]
 * 00000001800BD180: call    sub_1800B1A0C
 * 00000001800BD185: mov     r8, rax
 * 00000001800BD188: mov     r9d, r12d
 * 00000001800BD18B: mov     edx, 0B8h
 * 00000001800BD190: lea     rcx, [rbp+9E40h+var_2050]; Src
 * 00000001800BD197: call    sub_18007C338
 * 00000001800BD19C: nop
 * 00000001800BD19D: mov     r8, rax
 * 00000001800BD1A0: mov     rdx, r13
 * 00000001800BD1A3: lea     rcx, [rbp+9E40h+var_2070]
 * 00000001800BD1AA: call    sub_18001C6E8
 * 00000001800BD1AF: nop
 * 00000001800BD1B0: lea     r8, aVertex; "/Vertex"
 * 00000001800BD1B7: mov     rdx, rax
 * 00000001800BD1BA: lea     rcx, [rbp+9E40h+var_5170]
 * 00000001800BD1C1: call    sub_18001C61C
 * 00000001800BD1C6: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BD1CB: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BD1D0: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BD1D5: mov     rcx, rax
 * 00000001800BD1D8: call    sub_18007C3DC
 * 00000001800BD1DD: nop
 * 00000001800BD1DE: lea     rcx, [rbp+9E40h+var_2070]
 * 00000001800BD1E5: call    sub_180010F30
 * 00000001800BD1EA: nop
 * 00000001800BD1EB: lea     rcx, [rbp+9E40h+var_2050]
 * 00000001800BD1F2: call    sub_180010F30
 * 00000001800BD1F7: nop
 * 00000001800BD1F8: lea     rcx, dword_1801D9530
 * 00000001800BD1FF: call    sub_18000C538
 * 00000001800BD204: mov     rax, [rdi+rbx*8]
 * 00000001800BD208: mov     ecx, [r15+rax]
 * 00000001800BD20C: cmp     cs:dword_1801D9534, ecx
 * 00000001800BD212: jle     loc_1800BD2EF
 * 00000001800BD218: lea     rcx, dword_1801D9534
 * 00000001800BD21F: call    sub_18000C5A0
 * 00000001800BD224: cmp     cs:dword_1801D9534, r14d
 * 00000001800BD22B: jnz     loc_1800BD2EF
 * 00000001800BD231: call    sub_1800B199C
 * 00000001800BD236: mov     qword ptr [rbp+9E40h+var_92B0], rax
 * 00000001800BD23D: add     rax, 1A50h
 * 00000001800BD243: mov     qword ptr [rbp+9E40h+var_92B0+8], rax
 * 00000001800BD24A: movups  xmm7, [rbp+9E40h+var_92B0]
 * 00000001800BD251: movups  [rbp+9E40h+var_74D0], xmm7
 * 00000001800BD258: mov     dword ptr [rbp+9E40h+var_74C0], esi
 * 00000001800BD25E: mov     dword ptr [rbp+9E40h+var_74C0+4], esi
 * 00000001800BD264: movups  xmm6, [rbp+9E40h+var_74C0]
 * 00000001800BD26B: call    sub_1800B1A0C
 * 00000001800BD270: mov     r8, rax
 * 00000001800BD273: mov     r9d, r12d
 * 00000001800BD276: mov     edx, 0BAh
 * 00000001800BD27B: lea     rcx, [rbp+9E40h+var_1FF0]; Src
 * 00000001800BD282: call    sub_18007C338
 * 00000001800BD287: nop
 * 00000001800BD288: mov     r8, rax
 * 00000001800BD28B: mov     rdx, r13
 * 00000001800BD28E: lea     rcx, [rbp+9E40h+var_2010]
 * 00000001800BD295: call    sub_18001C6E8
 * 00000001800BD29A: nop
 * 00000001800BD29B: lea     r8, aVertex; "/Vertex"
 * 00000001800BD2A2: mov     rdx, rax
 * 00000001800BD2A5: lea     rcx, [rbp+9E40h+var_5150]
 * 00000001800BD2AC: call    sub_18001C61C
 * 00000001800BD2B1: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BD2B6: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BD2BB: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BD2C0: mov     rcx, rax
 * 00000001800BD2C3: call    sub_18007C3DC
 * 00000001800BD2C8: nop
 * 00000001800BD2C9: lea     rcx, [rbp+9E40h+var_2010]
 * 00000001800BD2D0: call    sub_180010F30
 * 00000001800BD2D5: nop
 * 00000001800BD2D6: lea     rcx, [rbp+9E40h+var_1FF0]
 * 00000001800BD2DD: call    sub_180010F30
 * 00000001800BD2E2: nop
 * 00000001800BD2E3: lea     rcx, dword_1801D9534
 * 00000001800BD2EA: call    sub_18000C538
 * 00000001800BD2EF: mov     rax, [rdi+rbx*8]
 * 00000001800BD2F3: mov     ecx, [r15+rax]
 * 00000001800BD2F7: cmp     cs:dword_1801D9538, ecx
 * 00000001800BD2FD: jle     loc_1800BD3DA
 * 00000001800BD303: lea     rcx, dword_1801D9538
 * 00000001800BD30A: call    sub_18000C5A0
 * 00000001800BD30F: cmp     cs:dword_1801D9538, r14d
 * 00000001800BD316: jnz     loc_1800BD3DA
 * 00000001800BD31C: call    sub_1800B198C
 * 00000001800BD321: mov     qword ptr [rbp+9E40h+var_92A0], rax
 * 00000001800BD328: add     rax, 1050h
 * 00000001800BD32E: mov     qword ptr [rbp+9E40h+var_92A0+8], rax
 * 00000001800BD335: movups  xmm7, [rbp+9E40h+var_92A0]
 * 00000001800BD33C: movups  [rbp+9E40h+var_74B0], xmm7
 * 00000001800BD343: mov     dword ptr [rbp+9E40h+var_74A0], esi
 * 00000001800BD349: mov     dword ptr [rbp+9E40h+var_74A0+4], esi
 * 00000001800BD34F: movups  xmm6, [rbp+9E40h+var_74A0]
 * 00000001800BD356: call    sub_1800B1A0C
 * 00000001800BD35B: mov     r8, rax
 * 00000001800BD35E: mov     r9d, r12d
 * 00000001800BD361: mov     edx, 0C0h
 * 00000001800BD366: lea     rcx, [rbp+9E40h+var_1F90]; Src
 * 00000001800BD36D: call    sub_18007C338
 * 00000001800BD372: nop
 * 00000001800BD373: mov     r8, rax
 * 00000001800BD376: mov     rdx, r13
 * 00000001800BD379: lea     rcx, [rbp+9E40h+var_1FB0]
 * 00000001800BD380: call    sub_18001C6E8
 * 00000001800BD385: nop
 * 00000001800BD386: lea     r8, aVertex; "/Vertex"
 * 00000001800BD38D: mov     rdx, rax
 * 00000001800BD390: lea     rcx, [rbp+9E40h+var_5130]
 * 00000001800BD397: call    sub_18001C61C
 * 00000001800BD39C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BD3A1: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BD3A6: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BD3AB: mov     rcx, rax
 * 00000001800BD3AE: call    sub_18007C3DC
 * 00000001800BD3B3: nop
 * 00000001800BD3B4: lea     rcx, [rbp+9E40h+var_1FB0]
 * 00000001800BD3BB: call    sub_180010F30
 * 00000001800BD3C0: nop
 * 00000001800BD3C1: lea     rcx, [rbp+9E40h+var_1F90]
 * 00000001800BD3C8: call    sub_180010F30
 * 00000001800BD3CD: nop
 * 00000001800BD3CE: lea     rcx, dword_1801D9538
 * 00000001800BD3D5: call    sub_18000C538
 * 00000001800BD3DA: mov     rax, [rdi+rbx*8]
 * 00000001800BD3DE: mov     ecx, [r15+rax]
 * 00000001800BD3E2: cmp     cs:dword_1801D953C, ecx
 * 00000001800BD3E8: jle     loc_1800BD4C5
 * 00000001800BD3EE: lea     rcx, dword_1801D953C
 * 00000001800BD3F5: call    sub_18000C5A0
 * 00000001800BD3FA: cmp     cs:dword_1801D953C, r14d
 * 00000001800BD401: jnz     loc_1800BD4C5
 * 00000001800BD407: call    sub_1800B198C
 * 00000001800BD40C: mov     qword ptr [rbp+9E40h+var_9290], rax
 * 00000001800BD413: add     rax, 1050h
 * 00000001800BD419: mov     qword ptr [rbp+9E40h+var_9290+8], rax
 * 00000001800BD420: movups  xmm7, [rbp+9E40h+var_9290]
 * 00000001800BD427: movups  [rbp+9E40h+var_7490], xmm7
 * 00000001800BD42E: mov     dword ptr [rbp+9E40h+var_7480], esi
 * 00000001800BD434: mov     dword ptr [rbp+9E40h+var_7480+4], esi
 * 00000001800BD43A: movups  xmm6, [rbp+9E40h+var_7480]
 * 00000001800BD441: call    sub_1800B1A0C
 * 00000001800BD446: mov     r8, rax
 * 00000001800BD449: mov     r9d, r12d
 * 00000001800BD44C: mov     edx, 0C2h
 * 00000001800BD451: lea     rcx, [rbp+9E40h+var_1F30]; Src
 * 00000001800BD458: call    sub_18007C338
 * 00000001800BD45D: nop
 * 00000001800BD45E: mov     r8, rax
 * 00000001800BD461: mov     rdx, r13
 * 00000001800BD464: lea     rcx, [rbp+9E40h+var_1F50]
 * 00000001800BD46B: call    sub_18001C6E8
 * 00000001800BD470: nop
 * 00000001800BD471: lea     r8, aVertex; "/Vertex"
 * 00000001800BD478: mov     rdx, rax
 * 00000001800BD47B: lea     rcx, [rbp+9E40h+var_5110]
 * 00000001800BD482: call    sub_18001C61C
 * 00000001800BD487: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BD48C: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BD491: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BD496: mov     rcx, rax
 * 00000001800BD499: call    sub_18007C3DC
 * 00000001800BD49E: nop
 * 00000001800BD49F: lea     rcx, [rbp+9E40h+var_1F50]
 * 00000001800BD4A6: call    sub_180010F30
 * 00000001800BD4AB: nop
 * 00000001800BD4AC: lea     rcx, [rbp+9E40h+var_1F30]
 * 00000001800BD4B3: call    sub_180010F30
 * 00000001800BD4B8: nop
 * 00000001800BD4B9: lea     rcx, dword_1801D953C
 * 00000001800BD4C0: call    sub_18000C538
 * 00000001800BD4C5: mov     rax, [rdi+rbx*8]
 * 00000001800BD4C9: mov     ecx, [r15+rax]
 * 00000001800BD4CD: cmp     cs:dword_1801D9540, ecx
 * 00000001800BD4D3: jle     loc_1800BD5B0
 * 00000001800BD4D9: lea     rcx, dword_1801D9540
 * 00000001800BD4E0: call    sub_18000C5A0
 * 00000001800BD4E5: cmp     cs:dword_1801D9540, r14d
 * 00000001800BD4EC: jnz     loc_1800BD5B0
 * 00000001800BD4F2: call    sub_1800B198C
 * 00000001800BD4F7: mov     qword ptr [rbp+9E40h+var_9280], rax
 * 00000001800BD4FE: add     rax, 1050h
 * 00000001800BD504: mov     qword ptr [rbp+9E40h+var_9280+8], rax
 * 00000001800BD50B: movups  xmm7, [rbp+9E40h+var_9280]
 * 00000001800BD512: movups  [rbp+9E40h+var_7470], xmm7
 * 00000001800BD519: mov     dword ptr [rbp+9E40h+var_7460], esi
 * 00000001800BD51F: mov     dword ptr [rbp+9E40h+var_7460+4], esi
 * 00000001800BD525: movups  xmm6, [rbp+9E40h+var_7460]
 * 00000001800BD52C: call    sub_1800B1A0C
 * 00000001800BD531: mov     r8, rax
 * 00000001800BD534: mov     r9d, r12d
 * 00000001800BD537: mov     edx, 0C8h
 * 00000001800BD53C: lea     rcx, [rbp+9E40h+var_1ED0]; Src
 * 00000001800BD543: call    sub_18007C338
 * 00000001800BD548: nop
 * 00000001800BD549: mov     r8, rax
 * 00000001800BD54C: mov     rdx, r13
 * 00000001800BD54F: lea     rcx, [rbp+9E40h+var_1EF0]
 * 00000001800BD556: call    sub_18001C6E8
 * 00000001800BD55B: nop
 * 00000001800BD55C: lea     r8, aVertex; "/Vertex"
 * 00000001800BD563: mov     rdx, rax
 * 00000001800BD566: lea     rcx, [rbp+9E40h+var_50F0]
 * 00000001800BD56D: call    sub_18001C61C
 * 00000001800BD572: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BD577: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BD57C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BD581: mov     rcx, rax
 * 00000001800BD584: call    sub_18007C3DC
 * 00000001800BD589: nop
 * 00000001800BD58A: lea     rcx, [rbp+9E40h+var_1EF0]
 * 00000001800BD591: call    sub_180010F30
 * 00000001800BD596: nop
 * 00000001800BD597: lea     rcx, [rbp+9E40h+var_1ED0]
 * 00000001800BD59E: call    sub_180010F30
 * 00000001800BD5A3: nop
 * 00000001800BD5A4: lea     rcx, dword_1801D9540
 * 00000001800BD5AB: call    sub_18000C538
 * 00000001800BD5B0: mov     rax, [rdi+rbx*8]
 * 00000001800BD5B4: mov     ecx, [r15+rax]
 * 00000001800BD5B8: cmp     cs:dword_1801D9544, ecx
 * 00000001800BD5BE: jle     loc_1800BD69B
 * 00000001800BD5C4: lea     rcx, dword_1801D9544
 * 00000001800BD5CB: call    sub_18000C5A0
 * 00000001800BD5D0: cmp     cs:dword_1801D9544, r14d
 * 00000001800BD5D7: jnz     loc_1800BD69B
 * 00000001800BD5DD: call    sub_1800B198C
 * 00000001800BD5E2: mov     qword ptr [rbp+9E40h+var_9270], rax
 * 00000001800BD5E9: add     rax, 1050h
 * 00000001800BD5EF: mov     qword ptr [rbp+9E40h+var_9270+8], rax
 * 00000001800BD5F6: movups  xmm7, [rbp+9E40h+var_9270]
 * 00000001800BD5FD: movups  [rbp+9E40h+var_7450], xmm7
 * 00000001800BD604: mov     dword ptr [rbp+9E40h+var_7440], esi
 * 00000001800BD60A: mov     dword ptr [rbp+9E40h+var_7440+4], esi
 * 00000001800BD610: movups  xmm6, [rbp+9E40h+var_7440]
 * 00000001800BD617: call    sub_1800B1A0C
 * 00000001800BD61C: mov     r8, rax
 * 00000001800BD61F: mov     r9d, r12d
 * 00000001800BD622: mov     edx, 0CAh
 * 00000001800BD627: lea     rcx, [rbp+9E40h+var_1E70]; Src
 * 00000001800BD62E: call    sub_18007C338
 * 00000001800BD633: nop
 * 00000001800BD634: mov     r8, rax
 * 00000001800BD637: mov     rdx, r13
 * 00000001800BD63A: lea     rcx, [rbp+9E40h+var_1E90]
 * 00000001800BD641: call    sub_18001C6E8
 * 00000001800BD646: nop
 * 00000001800BD647: lea     r8, aVertex; "/Vertex"
 * 00000001800BD64E: mov     rdx, rax
 * 00000001800BD651: lea     rcx, [rbp+9E40h+var_50D0]
 * 00000001800BD658: call    sub_18001C61C
 * 00000001800BD65D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BD662: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BD667: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BD66C: mov     rcx, rax
 * 00000001800BD66F: call    sub_18007C3DC
 * 00000001800BD674: nop
 * 00000001800BD675: lea     rcx, [rbp+9E40h+var_1E90]
 * 00000001800BD67C: call    sub_180010F30
 * 00000001800BD681: nop
 * 00000001800BD682: lea     rcx, [rbp+9E40h+var_1E70]
 * 00000001800BD689: call    sub_180010F30
 * 00000001800BD68E: nop
 * 00000001800BD68F: lea     rcx, dword_1801D9544
 * 00000001800BD696: call    sub_18000C538
 * 00000001800BD69B: mov     rax, [rdi+rbx*8]
 * 00000001800BD69F: mov     ecx, [r15+rax]
 * 00000001800BD6A3: cmp     cs:dword_1801D9548, ecx
 * 00000001800BD6A9: jle     loc_1800BD786
 * 00000001800BD6AF: lea     rcx, dword_1801D9548
 * 00000001800BD6B6: call    sub_18000C5A0
 * 00000001800BD6BB: cmp     cs:dword_1801D9548, r14d
 * 00000001800BD6C2: jnz     loc_1800BD786
 * 00000001800BD6C8: call    sub_1800B198C
 * 00000001800BD6CD: mov     qword ptr [rbp+9E40h+var_9260], rax
 * 00000001800BD6D4: add     rax, 1050h
 * 00000001800BD6DA: mov     qword ptr [rbp+9E40h+var_9260+8], rax
 * 00000001800BD6E1: movups  xmm7, [rbp+9E40h+var_9260]
 * 00000001800BD6E8: movups  [rbp+9E40h+var_7430], xmm7
 * 00000001800BD6EF: mov     dword ptr [rbp+9E40h+var_7420], esi
 * 00000001800BD6F5: mov     dword ptr [rbp+9E40h+var_7420+4], esi
 * 00000001800BD6FB: movups  xmm6, [rbp+9E40h+var_7420]
 * 00000001800BD702: call    sub_1800B1A0C
 * 00000001800BD707: mov     r8, rax
 * 00000001800BD70A: mov     r9d, r12d
 * 00000001800BD70D: mov     edx, 0D0h
 * 00000001800BD712: lea     rcx, [rbp+9E40h+var_1E10]; Src
 * 00000001800BD719: call    sub_18007C338
 * 00000001800BD71E: nop
 * 00000001800BD71F: mov     r8, rax
 * 00000001800BD722: mov     rdx, r13
 * 00000001800BD725: lea     rcx, [rbp+9E40h+var_1E30]
 * 00000001800BD72C: call    sub_18001C6E8
 * 00000001800BD731: nop
 * 00000001800BD732: lea     r8, aVertex; "/Vertex"
 * 00000001800BD739: mov     rdx, rax
 * 00000001800BD73C: lea     rcx, [rbp+9E40h+var_50B0]
 * 00000001800BD743: call    sub_18001C61C
 * 00000001800BD748: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BD74D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BD752: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BD757: mov     rcx, rax
 * 00000001800BD75A: call    sub_18007C3DC
 * 00000001800BD75F: nop
 * 00000001800BD760: lea     rcx, [rbp+9E40h+var_1E30]
 * 00000001800BD767: call    sub_180010F30
 * 00000001800BD76C: nop
 * 00000001800BD76D: lea     rcx, [rbp+9E40h+var_1E10]
 * 00000001800BD774: call    sub_180010F30
 * 00000001800BD779: nop
 * 00000001800BD77A: lea     rcx, dword_1801D9548
 * 00000001800BD781: call    sub_18000C538
 * 00000001800BD786: mov     rax, [rdi+rbx*8]
 * 00000001800BD78A: mov     ecx, [r15+rax]
 * 00000001800BD78E: cmp     cs:dword_1801D954C, ecx
 * 00000001800BD794: jle     loc_1800BD871
 * 00000001800BD79A: lea     rcx, dword_1801D954C
 * 00000001800BD7A1: call    sub_18000C5A0
 * 00000001800BD7A6: cmp     cs:dword_1801D954C, r14d
 * 00000001800BD7AD: jnz     loc_1800BD871
 * 00000001800BD7B3: call    sub_1800B198C
 * 00000001800BD7B8: mov     qword ptr [rbp+9E40h+var_9250], rax
 * 00000001800BD7BF: add     rax, 1050h
 * 00000001800BD7C5: mov     qword ptr [rbp+9E40h+var_9250+8], rax
 * 00000001800BD7CC: movups  xmm7, [rbp+9E40h+var_9250]
 * 00000001800BD7D3: movups  [rbp+9E40h+var_7410], xmm7
 * 00000001800BD7DA: mov     dword ptr [rbp+9E40h+var_7400], esi
 * 00000001800BD7E0: mov     dword ptr [rbp+9E40h+var_7400+4], esi
 * 00000001800BD7E6: movups  xmm6, [rbp+9E40h+var_7400]
 * 00000001800BD7ED: call    sub_1800B1A0C
 * 00000001800BD7F2: mov     r8, rax
 * 00000001800BD7F5: mov     r9d, r12d
 * 00000001800BD7F8: mov     edx, 0D2h
 * 00000001800BD7FD: lea     rcx, [rbp+9E40h+var_1DB0]; Src
 * 00000001800BD804: call    sub_18007C338
 * 00000001800BD809: nop
 * 00000001800BD80A: mov     r8, rax
 * 00000001800BD80D: mov     rdx, r13
 * 00000001800BD810: lea     rcx, [rbp+9E40h+var_1DD0]
 * 00000001800BD817: call    sub_18001C6E8
 * 00000001800BD81C: nop
 * 00000001800BD81D: lea     r8, aVertex; "/Vertex"
 * 00000001800BD824: mov     rdx, rax
 * 00000001800BD827: lea     rcx, [rbp+9E40h+var_5090]
 * 00000001800BD82E: call    sub_18001C61C
 * 00000001800BD833: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BD838: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BD83D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BD842: mov     rcx, rax
 * 00000001800BD845: call    sub_18007C3DC
 * 00000001800BD84A: nop
 * 00000001800BD84B: lea     rcx, [rbp+9E40h+var_1DD0]
 * 00000001800BD852: call    sub_180010F30
 * 00000001800BD857: nop
 * 00000001800BD858: lea     rcx, [rbp+9E40h+var_1DB0]
 * 00000001800BD85F: call    sub_180010F30
 * 00000001800BD864: nop
 * 00000001800BD865: lea     rcx, dword_1801D954C
 * 00000001800BD86C: call    sub_18000C538
 * 00000001800BD871: mov     rax, [rdi+rbx*8]
 * 00000001800BD875: mov     ecx, [r15+rax]
 * 00000001800BD879: cmp     cs:dword_1801D9550, ecx
 * 00000001800BD87F: jle     loc_1800BD95C
 * 00000001800BD885: lea     rcx, dword_1801D9550
 * 00000001800BD88C: call    sub_18000C5A0
 * 00000001800BD891: cmp     cs:dword_1801D9550, r14d
 * 00000001800BD898: jnz     loc_1800BD95C
 * 00000001800BD89E: call    sub_1800B198C
 * 00000001800BD8A3: mov     qword ptr [rbp+9E40h+var_9240], rax
 * 00000001800BD8AA: add     rax, 1050h
 * 00000001800BD8B0: mov     qword ptr [rbp+9E40h+var_9240+8], rax
 * 00000001800BD8B7: movups  xmm7, [rbp+9E40h+var_9240]
 * 00000001800BD8BE: movups  [rbp+9E40h+var_73F0], xmm7
 * 00000001800BD8C5: mov     dword ptr [rbp+9E40h+var_73E0], esi
 * 00000001800BD8CB: mov     dword ptr [rbp+9E40h+var_73E0+4], esi
 * 00000001800BD8D1: movups  xmm6, [rbp+9E40h+var_73E0]
 * 00000001800BD8D8: call    sub_1800B1A0C
 * 00000001800BD8DD: mov     r8, rax
 * 00000001800BD8E0: mov     r9d, r12d
 * 00000001800BD8E3: mov     edx, 0D8h
 * 00000001800BD8E8: lea     rcx, [rbp+9E40h+var_1D50]; Src
 * 00000001800BD8EF: call    sub_18007C338
 * 00000001800BD8F4: nop
 * 00000001800BD8F5: mov     r8, rax
 * 00000001800BD8F8: mov     rdx, r13
 * 00000001800BD8FB: lea     rcx, [rbp+9E40h+var_1D70]
 * 00000001800BD902: call    sub_18001C6E8
 * 00000001800BD907: nop
 * 00000001800BD908: lea     r8, aVertex; "/Vertex"
 * 00000001800BD90F: mov     rdx, rax
 * 00000001800BD912: lea     rcx, [rbp+9E40h+var_5070]
 * 00000001800BD919: call    sub_18001C61C
 * 00000001800BD91E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BD923: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BD928: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BD92D: mov     rcx, rax
 * 00000001800BD930: call    sub_18007C3DC
 * 00000001800BD935: nop
 * 00000001800BD936: lea     rcx, [rbp+9E40h+var_1D70]
 * 00000001800BD93D: call    sub_180010F30
 * 00000001800BD942: nop
 * 00000001800BD943: lea     rcx, [rbp+9E40h+var_1D50]
 * 00000001800BD94A: call    sub_180010F30
 * 00000001800BD94F: nop
 * 00000001800BD950: lea     rcx, dword_1801D9550
 * 00000001800BD957: call    sub_18000C538
 * 00000001800BD95C: mov     rax, [rdi+rbx*8]
 * 00000001800BD960: mov     ecx, [r15+rax]
 * 00000001800BD964: cmp     cs:dword_1801D9554, ecx
 * 00000001800BD96A: jle     loc_1800BDA47
 * 00000001800BD970: lea     rcx, dword_1801D9554
 * 00000001800BD977: call    sub_18000C5A0
 * 00000001800BD97C: cmp     cs:dword_1801D9554, r14d
 * 00000001800BD983: jnz     loc_1800BDA47
 * 00000001800BD989: call    sub_1800B198C
 * 00000001800BD98E: mov     qword ptr [rbp+9E40h+var_9230], rax
 * 00000001800BD995: add     rax, 1050h
 * 00000001800BD99B: mov     qword ptr [rbp+9E40h+var_9230+8], rax
 * 00000001800BD9A2: movups  xmm7, [rbp+9E40h+var_9230]
 * 00000001800BD9A9: movups  [rbp+9E40h+var_73D0], xmm7
 * 00000001800BD9B0: mov     dword ptr [rbp+9E40h+var_73C0], esi
 * 00000001800BD9B6: mov     dword ptr [rbp+9E40h+var_73C0+4], esi
 * 00000001800BD9BC: movups  xmm6, [rbp+9E40h+var_73C0]
 * 00000001800BD9C3: call    sub_1800B1A0C
 * 00000001800BD9C8: mov     r8, rax
 * 00000001800BD9CB: mov     r9d, r12d
 * 00000001800BD9CE: mov     edx, 0DAh
 * 00000001800BD9D3: lea     rcx, [rbp+9E40h+var_1CF0]; Src
 * 00000001800BD9DA: call    sub_18007C338
 * 00000001800BD9DF: nop
 * 00000001800BD9E0: mov     r8, rax
 * 00000001800BD9E3: mov     rdx, r13
 * 00000001800BD9E6: lea     rcx, [rbp+9E40h+var_1D10]
 * 00000001800BD9ED: call    sub_18001C6E8
 * 00000001800BD9F2: nop
 * 00000001800BD9F3: lea     r8, aVertex; "/Vertex"
 * 00000001800BD9FA: mov     rdx, rax
 * 00000001800BD9FD: lea     rcx, [rbp+9E40h+var_5050]
 * 00000001800BDA04: call    sub_18001C61C
 * 00000001800BDA09: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BDA0E: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BDA13: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BDA18: mov     rcx, rax
 * 00000001800BDA1B: call    sub_18007C3DC
 * 00000001800BDA20: nop
 * 00000001800BDA21: lea     rcx, [rbp+9E40h+var_1D10]
 * 00000001800BDA28: call    sub_180010F30
 * 00000001800BDA2D: nop
 * 00000001800BDA2E: lea     rcx, [rbp+9E40h+var_1CF0]
 * 00000001800BDA35: call    sub_180010F30
 * 00000001800BDA3A: nop
 * 00000001800BDA3B: lea     rcx, dword_1801D9554
 * 00000001800BDA42: call    sub_18000C538
 * 00000001800BDA47: mov     rax, [rdi+rbx*8]
 * 00000001800BDA4B: mov     ecx, [r15+rax]
 * 00000001800BDA4F: cmp     cs:dword_1801D9558, ecx
 * 00000001800BDA55: jle     loc_1800BDB32
 * 00000001800BDA5B: lea     rcx, dword_1801D9558
 * 00000001800BDA62: call    sub_18000C5A0
 * 00000001800BDA67: cmp     cs:dword_1801D9558, r14d
 * 00000001800BDA6E: jnz     loc_1800BDB32
 * 00000001800BDA74: call    sub_1800B199C
 * 00000001800BDA79: mov     qword ptr [rbp+9E40h+var_9220], rax
 * 00000001800BDA80: add     rax, 1A50h
 * 00000001800BDA86: mov     qword ptr [rbp+9E40h+var_9220+8], rax
 * 00000001800BDA8D: movups  xmm7, [rbp+9E40h+var_9220]
 * 00000001800BDA94: movups  [rbp+9E40h+var_73B0], xmm7
 * 00000001800BDA9B: mov     dword ptr [rbp+9E40h+var_73A0], esi
 * 00000001800BDAA1: mov     dword ptr [rbp+9E40h+var_73A0+4], esi
 * 00000001800BDAA7: movups  xmm6, [rbp+9E40h+var_73A0]
 * 00000001800BDAAE: call    sub_1800B1A0C
 * 00000001800BDAB3: mov     r8, rax
 * 00000001800BDAB6: mov     r9d, r12d
 * 00000001800BDAB9: mov     edx, 0E0h
 * 00000001800BDABE: lea     rcx, [rbp+9E40h+var_1C90]; Src
 * 00000001800BDAC5: call    sub_18007C338
 * 00000001800BDACA: nop
 * 00000001800BDACB: mov     r8, rax
 * 00000001800BDACE: mov     rdx, r13
 * 00000001800BDAD1: lea     rcx, [rbp+9E40h+var_1CB0]
 * 00000001800BDAD8: call    sub_18001C6E8
 * 00000001800BDADD: nop
 * 00000001800BDADE: lea     r8, aVertex; "/Vertex"
 * 00000001800BDAE5: mov     rdx, rax
 * 00000001800BDAE8: lea     rcx, [rbp+9E40h+var_5030]
 * 00000001800BDAEF: call    sub_18001C61C
 * 00000001800BDAF4: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BDAF9: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BDAFE: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BDB03: mov     rcx, rax
 * 00000001800BDB06: call    sub_18007C3DC
 * 00000001800BDB0B: nop
 * 00000001800BDB0C: lea     rcx, [rbp+9E40h+var_1CB0]
 * 00000001800BDB13: call    sub_180010F30
 * 00000001800BDB18: nop
 * 00000001800BDB19: lea     rcx, [rbp+9E40h+var_1C90]
 * 00000001800BDB20: call    sub_180010F30
 * 00000001800BDB25: nop
 * 00000001800BDB26: lea     rcx, dword_1801D9558
 * 00000001800BDB2D: call    sub_18000C538
 * 00000001800BDB32: mov     rax, [rdi+rbx*8]
 * 00000001800BDB36: mov     ecx, [r15+rax]
 * 00000001800BDB3A: cmp     cs:dword_1801D955C, ecx
 * 00000001800BDB40: jle     loc_1800BDC1D
 * 00000001800BDB46: lea     rcx, dword_1801D955C
 * 00000001800BDB4D: call    sub_18000C5A0
 * 00000001800BDB52: cmp     cs:dword_1801D955C, r14d
 * 00000001800BDB59: jnz     loc_1800BDC1D
 * 00000001800BDB5F: call    sub_1800B199C
 * 00000001800BDB64: mov     qword ptr [rbp+9E40h+var_9210], rax
 * 00000001800BDB6B: add     rax, 1A50h
 * 00000001800BDB71: mov     qword ptr [rbp+9E40h+var_9210+8], rax
 * 00000001800BDB78: movups  xmm7, [rbp+9E40h+var_9210]
 * 00000001800BDB7F: movups  [rbp+9E40h+var_7390], xmm7
 * 00000001800BDB86: mov     dword ptr [rbp+9E40h+var_7380], esi
 * 00000001800BDB8C: mov     dword ptr [rbp+9E40h+var_7380+4], esi
 * 00000001800BDB92: movups  xmm6, [rbp+9E40h+var_7380]
 * 00000001800BDB99: call    sub_1800B1A0C
 * 00000001800BDB9E: mov     r8, rax
 * 00000001800BDBA1: mov     r9d, r12d
 * 00000001800BDBA4: mov     edx, 0E2h
 * 00000001800BDBA9: lea     rcx, [rbp+9E40h+var_1C30]; Src
 * 00000001800BDBB0: call    sub_18007C338
 * 00000001800BDBB5: nop
 * 00000001800BDBB6: mov     r8, rax
 * 00000001800BDBB9: mov     rdx, r13
 * 00000001800BDBBC: lea     rcx, [rbp+9E40h+var_1C50]
 * 00000001800BDBC3: call    sub_18001C6E8
 * 00000001800BDBC8: nop
 * 00000001800BDBC9: lea     r8, aVertex; "/Vertex"
 * 00000001800BDBD0: mov     rdx, rax
 * 00000001800BDBD3: lea     rcx, [rbp+9E40h+var_5010]
 * 00000001800BDBDA: call    sub_18001C61C
 * 00000001800BDBDF: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BDBE4: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BDBE9: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BDBEE: mov     rcx, rax
 * 00000001800BDBF1: call    sub_18007C3DC
 * 00000001800BDBF6: nop
 * 00000001800BDBF7: lea     rcx, [rbp+9E40h+var_1C50]
 * 00000001800BDBFE: call    sub_180010F30
 * 00000001800BDC03: nop
 * 00000001800BDC04: lea     rcx, [rbp+9E40h+var_1C30]
 * 00000001800BDC0B: call    sub_180010F30
 * 00000001800BDC10: nop
 * 00000001800BDC11: lea     rcx, dword_1801D955C
 * 00000001800BDC18: call    sub_18000C538
 * 00000001800BDC1D: mov     rax, [rdi+rbx*8]
 * 00000001800BDC21: mov     ecx, [r15+rax]
 * 00000001800BDC25: cmp     cs:dword_1801D9560, ecx
 * 00000001800BDC2B: jle     loc_1800BDD08
 * 00000001800BDC31: lea     rcx, dword_1801D9560
 * 00000001800BDC38: call    sub_18000C5A0
 * 00000001800BDC3D: cmp     cs:dword_1801D9560, r14d
 * 00000001800BDC44: jnz     loc_1800BDD08
 * 00000001800BDC4A: call    sub_1800B199C
 * 00000001800BDC4F: mov     qword ptr [rbp+9E40h+var_9200], rax
 * 00000001800BDC56: add     rax, 1A50h
 * 00000001800BDC5C: mov     qword ptr [rbp+9E40h+var_9200+8], rax
 * 00000001800BDC63: movups  xmm7, [rbp+9E40h+var_9200]
 * 00000001800BDC6A: movups  [rbp+9E40h+var_7370], xmm7
 * 00000001800BDC71: mov     dword ptr [rbp+9E40h+var_7360], esi
 * 00000001800BDC77: mov     dword ptr [rbp+9E40h+var_7360+4], esi
 * 00000001800BDC7D: movups  xmm6, [rbp+9E40h+var_7360]
 * 00000001800BDC84: call    sub_1800B1A0C
 * 00000001800BDC89: mov     r8, rax
 * 00000001800BDC8C: mov     r9d, r12d
 * 00000001800BDC8F: mov     edx, 0E8h
 * 00000001800BDC94: lea     rcx, [rbp+9E40h+var_1BD0]; Src
 * 00000001800BDC9B: call    sub_18007C338
 * 00000001800BDCA0: nop
 * 00000001800BDCA1: mov     r8, rax
 * 00000001800BDCA4: mov     rdx, r13
 * 00000001800BDCA7: lea     rcx, [rbp+9E40h+var_1BF0]
 * 00000001800BDCAE: call    sub_18001C6E8
 * 00000001800BDCB3: nop
 * 00000001800BDCB4: lea     r8, aVertex; "/Vertex"
 * 00000001800BDCBB: mov     rdx, rax
 * 00000001800BDCBE: lea     rcx, [rbp+9E40h+var_4FF0]
 * 00000001800BDCC5: call    sub_18001C61C
 * 00000001800BDCCA: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BDCCF: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BDCD4: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BDCD9: mov     rcx, rax
 * 00000001800BDCDC: call    sub_18007C3DC
 * 00000001800BDCE1: nop
 * 00000001800BDCE2: lea     rcx, [rbp+9E40h+var_1BF0]
 * 00000001800BDCE9: call    sub_180010F30
 * 00000001800BDCEE: nop
 * 00000001800BDCEF: lea     rcx, [rbp+9E40h+var_1BD0]
 * 00000001800BDCF6: call    sub_180010F30
 * 00000001800BDCFB: nop
 * 00000001800BDCFC: lea     rcx, dword_1801D9560
 * 00000001800BDD03: call    sub_18000C538
 * 00000001800BDD08: mov     rax, [rdi+rbx*8]
 * 00000001800BDD0C: mov     ecx, [r15+rax]
 * 00000001800BDD10: cmp     cs:dword_1801D9564, ecx
 * 00000001800BDD16: jle     loc_1800BDDF3
 * 00000001800BDD1C: lea     rcx, dword_1801D9564
 * 00000001800BDD23: call    sub_18000C5A0
 * 00000001800BDD28: cmp     cs:dword_1801D9564, r14d
 * 00000001800BDD2F: jnz     loc_1800BDDF3
 * 00000001800BDD35: call    sub_1800B199C
 * 00000001800BDD3A: mov     qword ptr [rbp+9E40h+var_91F0], rax
 * 00000001800BDD41: add     rax, 1A50h
 * 00000001800BDD47: mov     qword ptr [rbp+9E40h+var_91F0+8], rax
 * 00000001800BDD4E: movups  xmm7, [rbp+9E40h+var_91F0]
 * 00000001800BDD55: movups  [rbp+9E40h+var_7350], xmm7
 * 00000001800BDD5C: mov     dword ptr [rbp+9E40h+var_7340], esi
 * 00000001800BDD62: mov     dword ptr [rbp+9E40h+var_7340+4], esi
 * 00000001800BDD68: movups  xmm6, [rbp+9E40h+var_7340]
 * 00000001800BDD6F: call    sub_1800B1A0C
 * 00000001800BDD74: mov     r8, rax
 * 00000001800BDD77: mov     r9d, r12d
 * 00000001800BDD7A: mov     edx, 0EAh
 * 00000001800BDD7F: lea     rcx, [rbp+9E40h+var_1B70]; Src
 * 00000001800BDD86: call    sub_18007C338
 * 00000001800BDD8B: nop
 * 00000001800BDD8C: mov     r8, rax
 * 00000001800BDD8F: mov     rdx, r13
 * 00000001800BDD92: lea     rcx, [rbp+9E40h+var_1B90]
 * 00000001800BDD99: call    sub_18001C6E8
 * 00000001800BDD9E: nop
 * 00000001800BDD9F: lea     r8, aVertex; "/Vertex"
 * 00000001800BDDA6: mov     rdx, rax
 * 00000001800BDDA9: lea     rcx, [rbp+9E40h+var_4FD0]
 * 00000001800BDDB0: call    sub_18001C61C
 * 00000001800BDDB5: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BDDBA: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BDDBF: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BDDC4: mov     rcx, rax
 * 00000001800BDDC7: call    sub_18007C3DC
 * 00000001800BDDCC: nop
 * 00000001800BDDCD: lea     rcx, [rbp+9E40h+var_1B90]
 * 00000001800BDDD4: call    sub_180010F30
 * 00000001800BDDD9: nop
 * 00000001800BDDDA: lea     rcx, [rbp+9E40h+var_1B70]
 * 00000001800BDDE1: call    sub_180010F30
 * 00000001800BDDE6: nop
 * 00000001800BDDE7: lea     rcx, dword_1801D9564
 * 00000001800BDDEE: call    sub_18000C538
 * 00000001800BDDF3: mov     rax, [rdi+rbx*8]
 * 00000001800BDDF7: mov     ecx, [r15+rax]
 * 00000001800BDDFB: cmp     cs:dword_1801D9568, ecx
 * 00000001800BDE01: jle     loc_1800BDEDE
 * 00000001800BDE07: lea     rcx, dword_1801D9568
 * 00000001800BDE0E: call    sub_18000C5A0
 * 00000001800BDE13: cmp     cs:dword_1801D9568, r14d
 * 00000001800BDE1A: jnz     loc_1800BDEDE
 * 00000001800BDE20: call    sub_1800B199C
 * 00000001800BDE25: mov     qword ptr [rbp+9E40h+var_91E0], rax
 * 00000001800BDE2C: add     rax, 1A50h
 * 00000001800BDE32: mov     qword ptr [rbp+9E40h+var_91E0+8], rax
 * 00000001800BDE39: movups  xmm7, [rbp+9E40h+var_91E0]
 * 00000001800BDE40: movups  [rbp+9E40h+var_7330], xmm7
 * 00000001800BDE47: mov     dword ptr [rbp+9E40h+var_7320], esi
 * 00000001800BDE4D: mov     dword ptr [rbp+9E40h+var_7320+4], esi
 * 00000001800BDE53: movups  xmm6, [rbp+9E40h+var_7320]
 * 00000001800BDE5A: call    sub_1800B1A0C
 * 00000001800BDE5F: mov     r8, rax
 * 00000001800BDE62: mov     r9d, r12d
 * 00000001800BDE65: mov     edx, 0F0h
 * 00000001800BDE6A: lea     rcx, [rbp+9E40h+var_1B10]; Src
 * 00000001800BDE71: call    sub_18007C338
 * 00000001800BDE76: nop
 * 00000001800BDE77: mov     r8, rax
 * 00000001800BDE7A: mov     rdx, r13
 * 00000001800BDE7D: lea     rcx, [rbp+9E40h+var_1B30]
 * 00000001800BDE84: call    sub_18001C6E8
 * 00000001800BDE89: nop
 * 00000001800BDE8A: lea     r8, aVertex; "/Vertex"
 * 00000001800BDE91: mov     rdx, rax
 * 00000001800BDE94: lea     rcx, [rbp+9E40h+var_4FB0]
 * 00000001800BDE9B: call    sub_18001C61C
 * 00000001800BDEA0: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BDEA5: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BDEAA: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BDEAF: mov     rcx, rax
 * 00000001800BDEB2: call    sub_18007C3DC
 * 00000001800BDEB7: nop
 * 00000001800BDEB8: lea     rcx, [rbp+9E40h+var_1B30]
 * 00000001800BDEBF: call    sub_180010F30
 * 00000001800BDEC4: nop
 * 00000001800BDEC5: lea     rcx, [rbp+9E40h+var_1B10]
 * 00000001800BDECC: call    sub_180010F30
 * 00000001800BDED1: nop
 * 00000001800BDED2: lea     rcx, dword_1801D9568
 * 00000001800BDED9: call    sub_18000C538
 * 00000001800BDEDE: mov     rax, [rdi+rbx*8]
 * 00000001800BDEE2: mov     ecx, [r15+rax]
 * 00000001800BDEE6: cmp     cs:dword_1801D956C, ecx
 * 00000001800BDEEC: jle     loc_1800BDFC9
 * 00000001800BDEF2: lea     rcx, dword_1801D956C
 * 00000001800BDEF9: call    sub_18000C5A0
 * 00000001800BDEFE: cmp     cs:dword_1801D956C, r14d
 * 00000001800BDF05: jnz     loc_1800BDFC9
 * 00000001800BDF0B: call    sub_1800B199C
 * 00000001800BDF10: mov     qword ptr [rbp+9E40h+var_91D0], rax
 * 00000001800BDF17: add     rax, 1A50h
 * 00000001800BDF1D: mov     qword ptr [rbp+9E40h+var_91D0+8], rax
 * 00000001800BDF24: movups  xmm7, [rbp+9E40h+var_91D0]
 * 00000001800BDF2B: movups  [rbp+9E40h+var_7310], xmm7
 * 00000001800BDF32: mov     dword ptr [rbp+9E40h+var_7300], esi
 * 00000001800BDF38: mov     dword ptr [rbp+9E40h+var_7300+4], esi
 * 00000001800BDF3E: movups  xmm6, [rbp+9E40h+var_7300]
 * 00000001800BDF45: call    sub_1800B1A0C
 * 00000001800BDF4A: mov     r8, rax
 * 00000001800BDF4D: mov     r9d, r12d
 * 00000001800BDF50: mov     edx, 0F2h
 * 00000001800BDF55: lea     rcx, [rbp+9E40h+var_1AB0]; Src
 * 00000001800BDF5C: call    sub_18007C338
 * 00000001800BDF61: nop
 * 00000001800BDF62: mov     r8, rax
 * 00000001800BDF65: mov     rdx, r13
 * 00000001800BDF68: lea     rcx, [rbp+9E40h+var_1AD0]
 * 00000001800BDF6F: call    sub_18001C6E8
 * 00000001800BDF74: nop
 * 00000001800BDF75: lea     r8, aVertex; "/Vertex"
 * 00000001800BDF7C: mov     rdx, rax
 * 00000001800BDF7F: lea     rcx, [rbp+9E40h+var_4F90]
 * 00000001800BDF86: call    sub_18001C61C
 * 00000001800BDF8B: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BDF90: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BDF95: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BDF9A: mov     rcx, rax
 * 00000001800BDF9D: call    sub_18007C3DC
 * 00000001800BDFA2: nop
 * 00000001800BDFA3: lea     rcx, [rbp+9E40h+var_1AD0]
 * 00000001800BDFAA: call    sub_180010F30
 * 00000001800BDFAF: nop
 * 00000001800BDFB0: lea     rcx, [rbp+9E40h+var_1AB0]
 * 00000001800BDFB7: call    sub_180010F30
 * 00000001800BDFBC: nop
 * 00000001800BDFBD: lea     rcx, dword_1801D956C
 * 00000001800BDFC4: call    sub_18000C538
 * 00000001800BDFC9: mov     rax, [rdi+rbx*8]
 * 00000001800BDFCD: mov     ecx, [r15+rax]
 * 00000001800BDFD1: cmp     cs:dword_1801D9570, ecx
 * 00000001800BDFD7: jle     loc_1800BE0B4
 * 00000001800BDFDD: lea     rcx, dword_1801D9570
 * 00000001800BDFE4: call    sub_18000C5A0
 * 00000001800BDFE9: cmp     cs:dword_1801D9570, r14d
 * 00000001800BDFF0: jnz     loc_1800BE0B4
 * 00000001800BDFF6: call    sub_1800B199C
 * 00000001800BDFFB: mov     qword ptr [rbp+9E40h+var_8F90], rax
 * 00000001800BE002: add     rax, 1A50h
 * 00000001800BE008: mov     qword ptr [rbp+9E40h+var_8F90+8], rax
 * 00000001800BE00F: movups  xmm7, [rbp+9E40h+var_8F90]
 * 00000001800BE016: movups  [rbp+9E40h+var_72F0], xmm7
 * 00000001800BE01D: mov     dword ptr [rbp+9E40h+var_72E0], esi
 * 00000001800BE023: mov     dword ptr [rbp+9E40h+var_72E0+4], esi
 * 00000001800BE029: movups  xmm6, [rbp+9E40h+var_72E0]
 * 00000001800BE030: call    sub_1800B1A0C
 * 00000001800BE035: mov     r8, rax
 * 00000001800BE038: mov     r9d, r12d
 * 00000001800BE03B: mov     edx, 0F8h
 * 00000001800BE040: lea     rcx, [rbp+9E40h+var_1A50]; Src
 * 00000001800BE047: call    sub_18007C338
 * 00000001800BE04C: nop
 * 00000001800BE04D: mov     r8, rax
 * 00000001800BE050: mov     rdx, r13
 * 00000001800BE053: lea     rcx, [rbp+9E40h+var_1A70]
 * 00000001800BE05A: call    sub_18001C6E8
 * 00000001800BE05F: nop
 * 00000001800BE060: lea     r8, aVertex; "/Vertex"
 * 00000001800BE067: mov     rdx, rax
 * 00000001800BE06A: lea     rcx, [rbp+9E40h+var_4F70]
 * 00000001800BE071: call    sub_18001C61C
 * 00000001800BE076: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BE07B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BE080: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BE085: mov     rcx, rax
 * 00000001800BE088: call    sub_18007C3DC
 * 00000001800BE08D: nop
 * 00000001800BE08E: lea     rcx, [rbp+9E40h+var_1A70]
 * 00000001800BE095: call    sub_180010F30
 * 00000001800BE09A: nop
 * 00000001800BE09B: lea     rcx, [rbp+9E40h+var_1A50]
 * 00000001800BE0A2: call    sub_180010F30
 * 00000001800BE0A7: nop
 * 00000001800BE0A8: lea     rcx, dword_1801D9570
 * 00000001800BE0AF: call    sub_18000C538
 * 00000001800BE0B4: mov     rax, [rdi+rbx*8]
 * 00000001800BE0B8: mov     ecx, [r15+rax]
 * 00000001800BE0BC: cmp     cs:dword_1801D9574, ecx
 * 00000001800BE0C2: jle     loc_1800BE19F
 * 00000001800BE0C8: lea     rcx, dword_1801D9574
 * 00000001800BE0CF: call    sub_18000C5A0
 * 00000001800BE0D4: cmp     cs:dword_1801D9574, r14d
 * 00000001800BE0DB: jnz     loc_1800BE19F
 * 00000001800BE0E1: call    sub_1800B199C
 * 00000001800BE0E6: mov     qword ptr [rbp+9E40h+var_91B0], rax
 * 00000001800BE0ED: add     rax, 1A50h
 * 00000001800BE0F3: mov     qword ptr [rbp+9E40h+var_91B0+8], rax
 * 00000001800BE0FA: movups  xmm7, [rbp+9E40h+var_91B0]
 * 00000001800BE101: movups  [rbp+9E40h+var_72D0], xmm7
 * 00000001800BE108: mov     dword ptr [rbp+9E40h+var_72C0], esi
 * 00000001800BE10E: mov     dword ptr [rbp+9E40h+var_72C0+4], esi
 * 00000001800BE114: movups  xmm6, [rbp+9E40h+var_72C0]
 * 00000001800BE11B: call    sub_1800B1A0C
 * 00000001800BE120: mov     r8, rax
 * 00000001800BE123: mov     r9d, r12d
 * 00000001800BE126: mov     edx, 0FAh
 * 00000001800BE12B: lea     rcx, [rbp+9E40h+var_19F0]; Src
 * 00000001800BE132: call    sub_18007C338
 * 00000001800BE137: nop
 * 00000001800BE138: mov     r8, rax
 * 00000001800BE13B: mov     rdx, r13
 * 00000001800BE13E: lea     rcx, [rbp+9E40h+var_1A10]
 * 00000001800BE145: call    sub_18001C6E8
 * 00000001800BE14A: nop
 * 00000001800BE14B: lea     r8, aVertex; "/Vertex"
 * 00000001800BE152: mov     rdx, rax
 * 00000001800BE155: lea     rcx, [rbp+9E40h+var_4F50]
 * 00000001800BE15C: call    sub_18001C61C
 * 00000001800BE161: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BE166: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BE16B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BE170: mov     rcx, rax
 * 00000001800BE173: call    sub_18007C3DC
 * 00000001800BE178: nop
 * 00000001800BE179: lea     rcx, [rbp+9E40h+var_1A10]
 * 00000001800BE180: call    sub_180010F30
 * 00000001800BE185: nop
 * 00000001800BE186: lea     rcx, [rbp+9E40h+var_19F0]
 * 00000001800BE18D: call    sub_180010F30
 * 00000001800BE192: nop
 * 00000001800BE193: lea     rcx, dword_1801D9574
 * 00000001800BE19A: call    sub_18000C538
 * 00000001800BE19F: mov     rax, [rdi+rbx*8]
 * 00000001800BE1A3: mov     ecx, [r15+rax]
 * 00000001800BE1A7: cmp     cs:dword_1801D9578, ecx
 * 00000001800BE1AD: jle     loc_1800BE28A
 * 00000001800BE1B3: lea     rcx, dword_1801D9578
 * 00000001800BE1BA: call    sub_18000C5A0
 * 00000001800BE1BF: cmp     cs:dword_1801D9578, r14d
 * 00000001800BE1C6: jnz     loc_1800BE28A
 * 00000001800BE1CC: call    sub_1800B18DC
 * 00000001800BE1D1: mov     qword ptr [rbp+9E40h+var_91A0], rax
 * 00000001800BE1D8: add     rax, 1018h
 * 00000001800BE1DE: mov     qword ptr [rbp+9E40h+var_91A0+8], rax
 * 00000001800BE1E5: movups  xmm7, [rbp+9E40h+var_91A0]
 * 00000001800BE1EC: movups  [rbp+9E40h+var_72B0], xmm7
 * 00000001800BE1F3: mov     dword ptr [rbp+9E40h+var_72A0], esi
 * 00000001800BE1F9: mov     dword ptr [rbp+9E40h+var_72A0+4], esi
 * 00000001800BE1FF: movups  xmm6, [rbp+9E40h+var_72A0]
 * 00000001800BE206: call    sub_1800B1A0C
 * 00000001800BE20B: mov     r8, rax
 * 00000001800BE20E: mov     r9d, r12d
 * 00000001800BE211: mov     edx, 100h
 * 00000001800BE216: lea     rcx, [rbp+9E40h+var_1990]; Src
 * 00000001800BE21D: call    sub_18007C338
 * 00000001800BE222: nop
 * 00000001800BE223: mov     r8, rax
 * 00000001800BE226: mov     rdx, r13
 * 00000001800BE229: lea     rcx, [rbp+9E40h+var_19B0]
 * 00000001800BE230: call    sub_18001C6E8
 * 00000001800BE235: nop
 * 00000001800BE236: lea     r8, aVertex; "/Vertex"
 * 00000001800BE23D: mov     rdx, rax
 * 00000001800BE240: lea     rcx, [rbp+9E40h+var_4F30]
 * 00000001800BE247: call    sub_18001C61C
 * 00000001800BE24C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BE251: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BE256: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BE25B: mov     rcx, rax
 * 00000001800BE25E: call    sub_18007C3DC
 * 00000001800BE263: nop
 * 00000001800BE264: lea     rcx, [rbp+9E40h+var_19B0]
 * 00000001800BE26B: call    sub_180010F30
 * 00000001800BE270: nop
 * 00000001800BE271: lea     rcx, [rbp+9E40h+var_1990]
 * 00000001800BE278: call    sub_180010F30
 * 00000001800BE27D: nop
 * 00000001800BE27E: lea     rcx, dword_1801D9578
 * 00000001800BE285: call    sub_18000C538
 * 00000001800BE28A: mov     rax, [rdi+rbx*8]
 * 00000001800BE28E: mov     ecx, [r15+rax]
 * 00000001800BE292: cmp     cs:dword_1801D957C, ecx
 * 00000001800BE298: jle     loc_1800BE375
 * 00000001800BE29E: lea     rcx, dword_1801D957C
 * 00000001800BE2A5: call    sub_18000C5A0
 * 00000001800BE2AA: cmp     cs:dword_1801D957C, r14d
 * 00000001800BE2B1: jnz     loc_1800BE375
 * 00000001800BE2B7: call    sub_1800B18DC
 * 00000001800BE2BC: mov     qword ptr [rbp+9E40h+var_9190], rax
 * 00000001800BE2C3: add     rax, 1018h
 * 00000001800BE2C9: mov     qword ptr [rbp+9E40h+var_9190+8], rax
 * 00000001800BE2D0: movups  xmm7, [rbp+9E40h+var_9190]
 * 00000001800BE2D7: movups  [rbp+9E40h+var_7290], xmm7
 * 00000001800BE2DE: mov     dword ptr [rbp+9E40h+var_7280], esi
 * 00000001800BE2E4: mov     dword ptr [rbp+9E40h+var_7280+4], esi
 * 00000001800BE2EA: movups  xmm6, [rbp+9E40h+var_7280]
 * 00000001800BE2F1: call    sub_1800B1A0C
 * 00000001800BE2F6: mov     r8, rax
 * 00000001800BE2F9: mov     r9d, r12d
 * 00000001800BE2FC: mov     edx, 102h
 * 00000001800BE301: lea     rcx, [rbp+9E40h+var_1930]; Src
 * 00000001800BE308: call    sub_18007C338
 * 00000001800BE30D: nop
 * 00000001800BE30E: mov     r8, rax
 * 00000001800BE311: mov     rdx, r13
 * 00000001800BE314: lea     rcx, [rbp+9E40h+var_1950]
 * 00000001800BE31B: call    sub_18001C6E8
 * 00000001800BE320: nop
 * 00000001800BE321: lea     r8, aVertex; "/Vertex"
 * 00000001800BE328: mov     rdx, rax
 * 00000001800BE32B: lea     rcx, [rbp+9E40h+var_4F10]
 * 00000001800BE332: call    sub_18001C61C
 * 00000001800BE337: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BE33C: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BE341: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BE346: mov     rcx, rax
 * 00000001800BE349: call    sub_18007C3DC
 * 00000001800BE34E: nop
 * 00000001800BE34F: lea     rcx, [rbp+9E40h+var_1950]
 * 00000001800BE356: call    sub_180010F30
 * 00000001800BE35B: nop
 * 00000001800BE35C: lea     rcx, [rbp+9E40h+var_1930]
 * 00000001800BE363: call    sub_180010F30
 * 00000001800BE368: nop
 * 00000001800BE369: lea     rcx, dword_1801D957C
 * 00000001800BE370: call    sub_18000C538
 * 00000001800BE375: mov     rax, [rdi+rbx*8]
 * 00000001800BE379: mov     ecx, [r15+rax]
 * 00000001800BE37D: cmp     cs:dword_1801D9580, ecx
 * 00000001800BE383: jle     loc_1800BE460
 * 00000001800BE389: lea     rcx, dword_1801D9580
 * 00000001800BE390: call    sub_18000C5A0
 * 00000001800BE395: cmp     cs:dword_1801D9580, r14d
 * 00000001800BE39C: jnz     loc_1800BE460
 * 00000001800BE3A2: call    sub_1800B18DC
 * 00000001800BE3A7: mov     qword ptr [rbp+9E40h+var_9180], rax
 * 00000001800BE3AE: add     rax, 1018h
 * 00000001800BE3B4: mov     qword ptr [rbp+9E40h+var_9180+8], rax
 * 00000001800BE3BB: movups  xmm7, [rbp+9E40h+var_9180]
 * 00000001800BE3C2: movups  [rbp+9E40h+var_7270], xmm7
 * 00000001800BE3C9: mov     dword ptr [rbp+9E40h+var_7260], esi
 * 00000001800BE3CF: mov     dword ptr [rbp+9E40h+var_7260+4], esi
 * 00000001800BE3D5: movups  xmm6, [rbp+9E40h+var_7260]
 * 00000001800BE3DC: call    sub_1800B1A0C
 * 00000001800BE3E1: mov     r8, rax
 * 00000001800BE3E4: mov     r9d, r12d
 * 00000001800BE3E7: mov     edx, 104h
 * 00000001800BE3EC: lea     rcx, [rbp+9E40h+var_18D0]; Src
 * 00000001800BE3F3: call    sub_18007C338
 * 00000001800BE3F8: nop
 * 00000001800BE3F9: mov     r8, rax
 * 00000001800BE3FC: mov     rdx, r13
 * 00000001800BE3FF: lea     rcx, [rbp+9E40h+var_18F0]
 * 00000001800BE406: call    sub_18001C6E8
 * 00000001800BE40B: nop
 * 00000001800BE40C: lea     r8, aVertex; "/Vertex"
 * 00000001800BE413: mov     rdx, rax
 * 00000001800BE416: lea     rcx, [rbp+9E40h+var_4EF0]
 * 00000001800BE41D: call    sub_18001C61C
 * 00000001800BE422: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BE427: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BE42C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BE431: mov     rcx, rax
 * 00000001800BE434: call    sub_18007C3DC
 * 00000001800BE439: nop
 * 00000001800BE43A: lea     rcx, [rbp+9E40h+var_18F0]
 * 00000001800BE441: call    sub_180010F30
 * 00000001800BE446: nop
 * 00000001800BE447: lea     rcx, [rbp+9E40h+var_18D0]
 * 00000001800BE44E: call    sub_180010F30
 * 00000001800BE453: nop
 * 00000001800BE454: lea     rcx, dword_1801D9580
 * 00000001800BE45B: call    sub_18000C538
 * 00000001800BE460: mov     rax, [rdi+rbx*8]
 * 00000001800BE464: mov     ecx, [r15+rax]
 * 00000001800BE468: cmp     cs:dword_1801D9584, ecx
 * 00000001800BE46E: jle     loc_1800BE54B
 * 00000001800BE474: lea     rcx, dword_1801D9584
 * 00000001800BE47B: call    sub_18000C5A0
 * 00000001800BE480: cmp     cs:dword_1801D9584, r14d
 * 00000001800BE487: jnz     loc_1800BE54B
 * 00000001800BE48D: call    sub_1800B18DC
 * 00000001800BE492: mov     qword ptr [rbp+9E40h+var_9170], rax
 * 00000001800BE499: add     rax, 1018h
 * 00000001800BE49F: mov     qword ptr [rbp+9E40h+var_9170+8], rax
 * 00000001800BE4A6: movups  xmm7, [rbp+9E40h+var_9170]
 * 00000001800BE4AD: movups  [rbp+9E40h+var_7250], xmm7
 * 00000001800BE4B4: mov     dword ptr [rbp+9E40h+var_7240], esi
 * 00000001800BE4BA: mov     dword ptr [rbp+9E40h+var_7240+4], esi
 * 00000001800BE4C0: movups  xmm6, [rbp+9E40h+var_7240]
 * 00000001800BE4C7: call    sub_1800B1A0C
 * 00000001800BE4CC: mov     r8, rax
 * 00000001800BE4CF: mov     r9d, r12d
 * 00000001800BE4D2: mov     edx, 106h
 * 00000001800BE4D7: lea     rcx, [rbp+9E40h+var_1870]; Src
 * 00000001800BE4DE: call    sub_18007C338
 * 00000001800BE4E3: nop
 * 00000001800BE4E4: mov     r8, rax
 * 00000001800BE4E7: mov     rdx, r13
 * 00000001800BE4EA: lea     rcx, [rbp+9E40h+var_1890]
 * 00000001800BE4F1: call    sub_18001C6E8
 * 00000001800BE4F6: nop
 * 00000001800BE4F7: lea     r8, aVertex; "/Vertex"
 * 00000001800BE4FE: mov     rdx, rax
 * 00000001800BE501: lea     rcx, [rbp+9E40h+var_4ED0]
 * 00000001800BE508: call    sub_18001C61C
 * 00000001800BE50D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BE512: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BE517: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BE51C: mov     rcx, rax
 * 00000001800BE51F: call    sub_18007C3DC
 * 00000001800BE524: nop
 * 00000001800BE525: lea     rcx, [rbp+9E40h+var_1890]
 * 00000001800BE52C: call    sub_180010F30
 * 00000001800BE531: nop
 * 00000001800BE532: lea     rcx, [rbp+9E40h+var_1870]
 * 00000001800BE539: call    sub_180010F30
 * 00000001800BE53E: nop
 * 00000001800BE53F: lea     rcx, dword_1801D9584
 * 00000001800BE546: call    sub_18000C538
 * 00000001800BE54B: mov     rax, [rdi+rbx*8]
 * 00000001800BE54F: mov     ecx, [r15+rax]
 * 00000001800BE553: cmp     cs:dword_1801D9588, ecx
 * 00000001800BE559: jle     loc_1800BE636
 * 00000001800BE55F: lea     rcx, dword_1801D9588
 * 00000001800BE566: call    sub_18000C5A0
 * 00000001800BE56B: cmp     cs:dword_1801D9588, r14d
 * 00000001800BE572: jnz     loc_1800BE636
 * 00000001800BE578: call    sub_1800B18DC
 * 00000001800BE57D: mov     qword ptr [rbp+9E40h+var_9160], rax
 * 00000001800BE584: add     rax, 1018h
 * 00000001800BE58A: mov     qword ptr [rbp+9E40h+var_9160+8], rax
 * 00000001800BE591: movups  xmm7, [rbp+9E40h+var_9160]
 * 00000001800BE598: movups  [rbp+9E40h+var_7230], xmm7
 * 00000001800BE59F: mov     dword ptr [rbp+9E40h+var_7220], esi
 * 00000001800BE5A5: mov     dword ptr [rbp+9E40h+var_7220+4], esi
 * 00000001800BE5AB: movups  xmm6, [rbp+9E40h+var_7220]
 * 00000001800BE5B2: call    sub_1800B1A0C
 * 00000001800BE5B7: mov     r8, rax
 * 00000001800BE5BA: mov     r9d, r12d
 * 00000001800BE5BD: mov     edx, 108h
 * 00000001800BE5C2: lea     rcx, [rbp+9E40h+var_1810]; Src
 * 00000001800BE5C9: call    sub_18007C338
 * 00000001800BE5CE: nop
 * 00000001800BE5CF: mov     r8, rax
 * 00000001800BE5D2: mov     rdx, r13
 * 00000001800BE5D5: lea     rcx, [rbp+9E40h+var_1830]
 * 00000001800BE5DC: call    sub_18001C6E8
 * 00000001800BE5E1: nop
 * 00000001800BE5E2: lea     r8, aVertex; "/Vertex"
 * 00000001800BE5E9: mov     rdx, rax
 * 00000001800BE5EC: lea     rcx, [rbp+9E40h+var_4EB0]
 * 00000001800BE5F3: call    sub_18001C61C
 * 00000001800BE5F8: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BE5FD: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BE602: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BE607: mov     rcx, rax
 * 00000001800BE60A: call    sub_18007C3DC
 * 00000001800BE60F: nop
 * 00000001800BE610: lea     rcx, [rbp+9E40h+var_1830]
 * 00000001800BE617: call    sub_180010F30
 * 00000001800BE61C: nop
 * 00000001800BE61D: lea     rcx, [rbp+9E40h+var_1810]
 * 00000001800BE624: call    sub_180010F30
 * 00000001800BE629: nop
 * 00000001800BE62A: lea     rcx, dword_1801D9588
 * 00000001800BE631: call    sub_18000C538
 * 00000001800BE636: mov     rax, [rdi+rbx*8]
 * 00000001800BE63A: mov     ecx, [r15+rax]
 * 00000001800BE63E: cmp     cs:dword_1801D958C, ecx
 * 00000001800BE644: jle     loc_1800BE721
 * 00000001800BE64A: lea     rcx, dword_1801D958C
 * 00000001800BE651: call    sub_18000C5A0
 * 00000001800BE656: cmp     cs:dword_1801D958C, r14d
 * 00000001800BE65D: jnz     loc_1800BE721
 * 00000001800BE663: call    sub_1800B18DC
 * 00000001800BE668: mov     qword ptr [rbp+9E40h+var_9150], rax
 * 00000001800BE66F: add     rax, 1018h
 * 00000001800BE675: mov     qword ptr [rbp+9E40h+var_9150+8], rax
 * 00000001800BE67C: movups  xmm7, [rbp+9E40h+var_9150]
 * 00000001800BE683: movups  [rbp+9E40h+var_7210], xmm7
 * 00000001800BE68A: mov     dword ptr [rbp+9E40h+var_7200], esi
 * 00000001800BE690: mov     dword ptr [rbp+9E40h+var_7200+4], esi
 * 00000001800BE696: movups  xmm6, [rbp+9E40h+var_7200]
 * 00000001800BE69D: call    sub_1800B1A0C
 * 00000001800BE6A2: mov     r8, rax
 * 00000001800BE6A5: mov     r9d, r12d
 * 00000001800BE6A8: mov     edx, 10Ah
 * 00000001800BE6AD: lea     rcx, [rbp+9E40h+var_17B0]; Src
 * 00000001800BE6B4: call    sub_18007C338
 * 00000001800BE6B9: nop
 * 00000001800BE6BA: mov     r8, rax
 * 00000001800BE6BD: mov     rdx, r13
 * 00000001800BE6C0: lea     rcx, [rbp+9E40h+var_17D0]
 * 00000001800BE6C7: call    sub_18001C6E8
 * 00000001800BE6CC: nop
 * 00000001800BE6CD: lea     r8, aVertex; "/Vertex"
 * 00000001800BE6D4: mov     rdx, rax
 * 00000001800BE6D7: lea     rcx, [rbp+9E40h+var_4E90]
 * 00000001800BE6DE: call    sub_18001C61C
 * 00000001800BE6E3: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BE6E8: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BE6ED: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BE6F2: mov     rcx, rax
 * 00000001800BE6F5: call    sub_18007C3DC
 * 00000001800BE6FA: nop
 * 00000001800BE6FB: lea     rcx, [rbp+9E40h+var_17D0]
 * 00000001800BE702: call    sub_180010F30
 * 00000001800BE707: nop
 * 00000001800BE708: lea     rcx, [rbp+9E40h+var_17B0]
 * 00000001800BE70F: call    sub_180010F30
 * 00000001800BE714: nop
 * 00000001800BE715: lea     rcx, dword_1801D958C
 * 00000001800BE71C: call    sub_18000C538
 * 00000001800BE721: mov     rax, [rdi+rbx*8]
 * 00000001800BE725: mov     ecx, [r15+rax]
 * 00000001800BE729: cmp     cs:dword_1801D9590, ecx
 * 00000001800BE72F: jle     loc_1800BE80C
 * 00000001800BE735: lea     rcx, dword_1801D9590
 * 00000001800BE73C: call    sub_18000C5A0
 * 00000001800BE741: cmp     cs:dword_1801D9590, r14d
 * 00000001800BE748: jnz     loc_1800BE80C
 * 00000001800BE74E: call    sub_1800B18DC
 * 00000001800BE753: mov     qword ptr [rbp+9E40h+var_9140], rax
 * 00000001800BE75A: add     rax, 1018h
 * 00000001800BE760: mov     qword ptr [rbp+9E40h+var_9140+8], rax
 * 00000001800BE767: movups  xmm7, [rbp+9E40h+var_9140]
 * 00000001800BE76E: movups  [rbp+9E40h+var_71F0], xmm7
 * 00000001800BE775: mov     dword ptr [rbp+9E40h+var_71E0], esi
 * 00000001800BE77B: mov     dword ptr [rbp+9E40h+var_71E0+4], esi
 * 00000001800BE781: movups  xmm6, [rbp+9E40h+var_71E0]
 * 00000001800BE788: call    sub_1800B1A0C
 * 00000001800BE78D: mov     r8, rax
 * 00000001800BE790: mov     r9d, r12d
 * 00000001800BE793: mov     edx, 110h
 * 00000001800BE798: lea     rcx, [rbp+9E40h+var_1750]; Src
 * 00000001800BE79F: call    sub_18007C338
 * 00000001800BE7A4: nop
 * 00000001800BE7A5: mov     r8, rax
 * 00000001800BE7A8: mov     rdx, r13
 * 00000001800BE7AB: lea     rcx, [rbp+9E40h+var_1770]
 * 00000001800BE7B2: call    sub_18001C6E8
 * 00000001800BE7B7: nop
 * 00000001800BE7B8: lea     r8, aVertex; "/Vertex"
 * 00000001800BE7BF: mov     rdx, rax
 * 00000001800BE7C2: lea     rcx, [rbp+9E40h+var_4E70]
 * 00000001800BE7C9: call    sub_18001C61C
 * 00000001800BE7CE: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BE7D3: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BE7D8: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BE7DD: mov     rcx, rax
 * 00000001800BE7E0: call    sub_18007C3DC
 * 00000001800BE7E5: nop
 * 00000001800BE7E6: lea     rcx, [rbp+9E40h+var_1770]
 * 00000001800BE7ED: call    sub_180010F30
 * 00000001800BE7F2: nop
 * 00000001800BE7F3: lea     rcx, [rbp+9E40h+var_1750]
 * 00000001800BE7FA: call    sub_180010F30
 * 00000001800BE7FF: nop
 * 00000001800BE800: lea     rcx, dword_1801D9590
 * 00000001800BE807: call    sub_18000C538
 * 00000001800BE80C: mov     rax, [rdi+rbx*8]
 * 00000001800BE810: mov     ecx, [r15+rax]
 * 00000001800BE814: cmp     cs:dword_1801D9594, ecx
 * 00000001800BE81A: jle     loc_1800BE8F7
 * 00000001800BE820: lea     rcx, dword_1801D9594
 * 00000001800BE827: call    sub_18000C5A0
 * 00000001800BE82C: cmp     cs:dword_1801D9594, r14d
 * 00000001800BE833: jnz     loc_1800BE8F7
 * 00000001800BE839: call    sub_1800B18DC
 * 00000001800BE83E: mov     qword ptr [rbp+9E40h+var_9130], rax
 * 00000001800BE845: add     rax, 1018h
 * 00000001800BE84B: mov     qword ptr [rbp+9E40h+var_9130+8], rax
 * 00000001800BE852: movups  xmm7, [rbp+9E40h+var_9130]
 * 00000001800BE859: movups  [rbp+9E40h+var_71D0], xmm7
 * 00000001800BE860: mov     dword ptr [rbp+9E40h+var_71C0], esi
 * 00000001800BE866: mov     dword ptr [rbp+9E40h+var_71C0+4], esi
 * 00000001800BE86C: movups  xmm6, [rbp+9E40h+var_71C0]
 * 00000001800BE873: call    sub_1800B1A0C
 * 00000001800BE878: mov     r8, rax
 * 00000001800BE87B: mov     r9d, r12d
 * 00000001800BE87E: mov     edx, 112h
 * 00000001800BE883: lea     rcx, [rbp+9E40h+var_16F0]; Src
 * 00000001800BE88A: call    sub_18007C338
 * 00000001800BE88F: nop
 * 00000001800BE890: mov     r8, rax
 * 00000001800BE893: mov     rdx, r13
 * 00000001800BE896: lea     rcx, [rbp+9E40h+var_1710]
 * 00000001800BE89D: call    sub_18001C6E8
 * 00000001800BE8A2: nop
 * 00000001800BE8A3: lea     r8, aVertex; "/Vertex"
 * 00000001800BE8AA: mov     rdx, rax
 * 00000001800BE8AD: lea     rcx, [rbp+9E40h+var_4E50]
 * 00000001800BE8B4: call    sub_18001C61C
 * 00000001800BE8B9: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BE8BE: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BE8C3: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BE8C8: mov     rcx, rax
 * 00000001800BE8CB: call    sub_18007C3DC
 * 00000001800BE8D0: nop
 * 00000001800BE8D1: lea     rcx, [rbp+9E40h+var_1710]
 * 00000001800BE8D8: call    sub_180010F30
 * 00000001800BE8DD: nop
 * 00000001800BE8DE: lea     rcx, [rbp+9E40h+var_16F0]
 * 00000001800BE8E5: call    sub_180010F30
 * 00000001800BE8EA: nop
 * 00000001800BE8EB: lea     rcx, dword_1801D9594
 * 00000001800BE8F2: call    sub_18000C538
 * 00000001800BE8F7: mov     rax, [rdi+rbx*8]
 * 00000001800BE8FB: mov     ecx, [r15+rax]
 * 00000001800BE8FF: cmp     cs:dword_1801D9598, ecx
 * 00000001800BE905: jle     loc_1800BE9E2
 * 00000001800BE90B: lea     rcx, dword_1801D9598
 * 00000001800BE912: call    sub_18000C5A0
 * 00000001800BE917: cmp     cs:dword_1801D9598, r14d
 * 00000001800BE91E: jnz     loc_1800BE9E2
 * 00000001800BE924: call    sub_1800B18DC
 * 00000001800BE929: mov     qword ptr [rbp+9E40h+var_9120], rax
 * 00000001800BE930: add     rax, 1018h
 * 00000001800BE936: mov     qword ptr [rbp+9E40h+var_9120+8], rax
 * 00000001800BE93D: movups  xmm7, [rbp+9E40h+var_9120]
 * 00000001800BE944: movups  [rbp+9E40h+var_71B0], xmm7
 * 00000001800BE94B: mov     dword ptr [rbp+9E40h+var_71A0], esi
 * 00000001800BE951: mov     dword ptr [rbp+9E40h+var_71A0+4], esi
 * 00000001800BE957: movups  xmm6, [rbp+9E40h+var_71A0]
 * 00000001800BE95E: call    sub_1800B1A0C
 * 00000001800BE963: mov     r8, rax
 * 00000001800BE966: mov     r9d, r12d
 * 00000001800BE969: mov     edx, 114h
 * 00000001800BE96E: lea     rcx, [rbp+9E40h+var_1690]; Src
 * 00000001800BE975: call    sub_18007C338
 * 00000001800BE97A: nop
 * 00000001800BE97B: mov     r8, rax
 * 00000001800BE97E: mov     rdx, r13
 * 00000001800BE981: lea     rcx, [rbp+9E40h+var_16B0]
 * 00000001800BE988: call    sub_18001C6E8
 * 00000001800BE98D: nop
 * 00000001800BE98E: lea     r8, aVertex; "/Vertex"
 * 00000001800BE995: mov     rdx, rax
 * 00000001800BE998: lea     rcx, [rbp+9E40h+var_4E30]
 * 00000001800BE99F: call    sub_18001C61C
 * 00000001800BE9A4: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BE9A9: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BE9AE: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BE9B3: mov     rcx, rax
 * 00000001800BE9B6: call    sub_18007C3DC
 * 00000001800BE9BB: nop
 * 00000001800BE9BC: lea     rcx, [rbp+9E40h+var_16B0]
 * 00000001800BE9C3: call    sub_180010F30
 * 00000001800BE9C8: nop
 * 00000001800BE9C9: lea     rcx, [rbp+9E40h+var_1690]
 * 00000001800BE9D0: call    sub_180010F30
 * 00000001800BE9D5: nop
 * 00000001800BE9D6: lea     rcx, dword_1801D9598
 * 00000001800BE9DD: call    sub_18000C538
 * 00000001800BE9E2: mov     rax, [rdi+rbx*8]
 * 00000001800BE9E6: mov     ecx, [r15+rax]
 * 00000001800BE9EA: cmp     cs:dword_1801D959C, ecx
 * 00000001800BE9F0: jle     loc_1800BEACD
 * 00000001800BE9F6: lea     rcx, dword_1801D959C
 * 00000001800BE9FD: call    sub_18000C5A0
 * 00000001800BEA02: cmp     cs:dword_1801D959C, r14d
 * 00000001800BEA09: jnz     loc_1800BEACD
 * 00000001800BEA0F: call    sub_1800B18DC
 * 00000001800BEA14: mov     qword ptr [rbp+9E40h+var_9110], rax
 * 00000001800BEA1B: add     rax, 1018h
 * 00000001800BEA21: mov     qword ptr [rbp+9E40h+var_9110+8], rax
 * 00000001800BEA28: movups  xmm7, [rbp+9E40h+var_9110]
 * 00000001800BEA2F: movups  [rbp+9E40h+var_7190], xmm7
 * 00000001800BEA36: mov     dword ptr [rbp+9E40h+var_7180], esi
 * 00000001800BEA3C: mov     dword ptr [rbp+9E40h+var_7180+4], esi
 * 00000001800BEA42: movups  xmm6, [rbp+9E40h+var_7180]
 * 00000001800BEA49: call    sub_1800B1A0C
 * 00000001800BEA4E: mov     r8, rax
 * 00000001800BEA51: mov     r9d, r12d
 * 00000001800BEA54: mov     edx, 116h
 * 00000001800BEA59: lea     rcx, [rbp+9E40h+var_1630]; Src
 * 00000001800BEA60: call    sub_18007C338
 * 00000001800BEA65: nop
 * 00000001800BEA66: mov     r8, rax
 * 00000001800BEA69: mov     rdx, r13
 * 00000001800BEA6C: lea     rcx, [rbp+9E40h+var_1650]
 * 00000001800BEA73: call    sub_18001C6E8
 * 00000001800BEA78: nop
 * 00000001800BEA79: lea     r8, aVertex; "/Vertex"
 * 00000001800BEA80: mov     rdx, rax
 * 00000001800BEA83: lea     rcx, [rbp+9E40h+var_5570]
 * 00000001800BEA8A: call    sub_18001C61C
 * 00000001800BEA8F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BEA94: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BEA99: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BEA9E: mov     rcx, rax
 * 00000001800BEAA1: call    sub_18007C3DC
 * 00000001800BEAA6: nop
 * 00000001800BEAA7: lea     rcx, [rbp+9E40h+var_1650]
 * 00000001800BEAAE: call    sub_180010F30
 * 00000001800BEAB3: nop
 * 00000001800BEAB4: lea     rcx, [rbp+9E40h+var_1630]
 * 00000001800BEABB: call    sub_180010F30
 * 00000001800BEAC0: nop
 * 00000001800BEAC1: lea     rcx, dword_1801D959C
 * 00000001800BEAC8: call    sub_18000C538
 * 00000001800BEACD: mov     rax, [rdi+rbx*8]
 * 00000001800BEAD1: mov     ecx, [r15+rax]
 * 00000001800BEAD5: cmp     cs:dword_1801D95A0, ecx
 * 00000001800BEADB: jle     loc_1800BEBB8
 * 00000001800BEAE1: lea     rcx, dword_1801D95A0
 * 00000001800BEAE8: call    sub_18000C5A0
 * 00000001800BEAED: cmp     cs:dword_1801D95A0, r14d
 * 00000001800BEAF4: jnz     loc_1800BEBB8
 * 00000001800BEAFA: call    sub_1800B18DC
 * 00000001800BEAFF: mov     qword ptr [rbp+9E40h+var_9100], rax
 * 00000001800BEB06: add     rax, 1018h
 * 00000001800BEB0C: mov     qword ptr [rbp+9E40h+var_9100+8], rax
 * 00000001800BEB13: movups  xmm7, [rbp+9E40h+var_9100]
 * 00000001800BEB1A: movups  [rbp+9E40h+var_7170], xmm7
 * 00000001800BEB21: mov     dword ptr [rbp+9E40h+var_7160], esi
 * 00000001800BEB27: mov     dword ptr [rbp+9E40h+var_7160+4], esi
 * 00000001800BEB2D: movups  xmm6, [rbp+9E40h+var_7160]
 * 00000001800BEB34: call    sub_1800B1A0C
 * 00000001800BEB39: mov     r8, rax
 * 00000001800BEB3C: mov     r9d, r12d
 * 00000001800BEB3F: mov     edx, 118h
 * 00000001800BEB44: lea     rcx, [rbp+9E40h+var_15D0]; Src
 * 00000001800BEB4B: call    sub_18007C338
 * 00000001800BEB50: nop
 * 00000001800BEB51: mov     r8, rax
 * 00000001800BEB54: mov     rdx, r13
 * 00000001800BEB57: lea     rcx, [rbp+9E40h+var_15F0]
 * 00000001800BEB5E: call    sub_18001C6E8
 * 00000001800BEB63: nop
 * 00000001800BEB64: lea     r8, aVertex; "/Vertex"
 * 00000001800BEB6B: mov     rdx, rax
 * 00000001800BEB6E: lea     rcx, [rbp+9E40h+var_4E10]
 * 00000001800BEB75: call    sub_18001C61C
 * 00000001800BEB7A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BEB7F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BEB84: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BEB89: mov     rcx, rax
 * 00000001800BEB8C: call    sub_18007C3DC
 * 00000001800BEB91: nop
 * 00000001800BEB92: lea     rcx, [rbp+9E40h+var_15F0]
 * 00000001800BEB99: call    sub_180010F30
 * 00000001800BEB9E: nop
 * 00000001800BEB9F: lea     rcx, [rbp+9E40h+var_15D0]
 * 00000001800BEBA6: call    sub_180010F30
 * 00000001800BEBAB: nop
 * 00000001800BEBAC: lea     rcx, dword_1801D95A0
 * 00000001800BEBB3: call    sub_18000C538
 * 00000001800BEBB8: mov     rax, [rdi+rbx*8]
 * 00000001800BEBBC: mov     ecx, [r15+rax]
 * 00000001800BEBC0: cmp     cs:dword_1801D95A4, ecx
 * 00000001800BEBC6: jle     loc_1800BECA3
 * 00000001800BEBCC: lea     rcx, dword_1801D95A4
 * 00000001800BEBD3: call    sub_18000C5A0
 * 00000001800BEBD8: cmp     cs:dword_1801D95A4, r14d
 * 00000001800BEBDF: jnz     loc_1800BECA3
 * 00000001800BEBE5: call    sub_1800B18DC
 * 00000001800BEBEA: mov     qword ptr [rbp+9E40h+var_90F0], rax
 * 00000001800BEBF1: add     rax, 1018h
 * 00000001800BEBF7: mov     qword ptr [rbp+9E40h+var_90F0+8], rax
 * 00000001800BEBFE: movups  xmm7, [rbp+9E40h+var_90F0]
 * 00000001800BEC05: movups  [rbp+9E40h+var_7150], xmm7
 * 00000001800BEC0C: mov     dword ptr [rbp+9E40h+var_7140], esi
 * 00000001800BEC12: mov     dword ptr [rbp+9E40h+var_7140+4], esi
 * 00000001800BEC18: movups  xmm6, [rbp+9E40h+var_7140]
 * 00000001800BEC1F: call    sub_1800B1A0C
 * 00000001800BEC24: mov     r8, rax
 * 00000001800BEC27: mov     r9d, r12d
 * 00000001800BEC2A: mov     edx, 11Ah
 * 00000001800BEC2F: lea     rcx, [rbp+9E40h+var_1570]; Src
 * 00000001800BEC36: call    sub_18007C338
 * 00000001800BEC3B: nop
 * 00000001800BEC3C: mov     r8, rax
 * 00000001800BEC3F: mov     rdx, r13
 * 00000001800BEC42: lea     rcx, [rbp+9E40h+var_1590]
 * 00000001800BEC49: call    sub_18001C6E8
 * 00000001800BEC4E: nop
 * 00000001800BEC4F: lea     r8, aVertex; "/Vertex"
 * 00000001800BEC56: mov     rdx, rax
 * 00000001800BEC59: lea     rcx, [rbp+9E40h+var_4DF0]
 * 00000001800BEC60: call    sub_18001C61C
 * 00000001800BEC65: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BEC6A: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BEC6F: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BEC74: mov     rcx, rax
 * 00000001800BEC77: call    sub_18007C3DC
 * 00000001800BEC7C: nop
 * 00000001800BEC7D: lea     rcx, [rbp+9E40h+var_1590]
 * 00000001800BEC84: call    sub_180010F30
 * 00000001800BEC89: nop
 * 00000001800BEC8A: lea     rcx, [rbp+9E40h+var_1570]
 * 00000001800BEC91: call    sub_180010F30
 * 00000001800BEC96: nop
 * 00000001800BEC97: lea     rcx, dword_1801D95A4
 * 00000001800BEC9E: call    sub_18000C538
 * 00000001800BECA3: mov     rax, [rdi+rbx*8]
 * 00000001800BECA7: mov     ecx, [r15+rax]
 * 00000001800BECAB: cmp     cs:dword_1801D95A8, ecx
 * 00000001800BECB1: jle     loc_1800BED8E
 * 00000001800BECB7: lea     rcx, dword_1801D95A8
 * 00000001800BECBE: call    sub_18000C5A0
 * 00000001800BECC3: cmp     cs:dword_1801D95A8, r14d
 * 00000001800BECCA: jnz     loc_1800BED8E
 * 00000001800BECD0: call    sub_1800B196C
 * 00000001800BECD5: mov     qword ptr [rbp+9E40h+var_90E0], rax
 * 00000001800BECDC: add     rax, 1A18h
 * 00000001800BECE2: mov     qword ptr [rbp+9E40h+var_90E0+8], rax
 * 00000001800BECE9: movups  xmm7, [rbp+9E40h+var_90E0]
 * 00000001800BECF0: movups  [rbp+9E40h+var_7130], xmm7
 * 00000001800BECF7: mov     dword ptr [rbp+9E40h+var_7120], esi
 * 00000001800BECFD: mov     dword ptr [rbp+9E40h+var_7120+4], esi
 * 00000001800BED03: movups  xmm6, [rbp+9E40h+var_7120]
 * 00000001800BED0A: call    sub_1800B1A0C
 * 00000001800BED0F: mov     r8, rax
 * 00000001800BED12: mov     r9d, r12d
 * 00000001800BED15: mov     edx, 120h
 * 00000001800BED1A: lea     rcx, [rbp+9E40h+var_1510]; Src
 * 00000001800BED21: call    sub_18007C338
 * 00000001800BED26: nop
 * 00000001800BED27: mov     r8, rax
 * 00000001800BED2A: mov     rdx, r13
 * 00000001800BED2D: lea     rcx, [rbp+9E40h+var_1530]
 * 00000001800BED34: call    sub_18001C6E8
 * 00000001800BED39: nop
 * 00000001800BED3A: lea     r8, aVertex; "/Vertex"
 * 00000001800BED41: mov     rdx, rax
 * 00000001800BED44: lea     rcx, [rbp+9E40h+var_4DD0]
 * 00000001800BED4B: call    sub_18001C61C
 * 00000001800BED50: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BED55: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BED5A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BED5F: mov     rcx, rax
 * 00000001800BED62: call    sub_18007C3DC
 * 00000001800BED67: nop
 * 00000001800BED68: lea     rcx, [rbp+9E40h+var_1530]
 * 00000001800BED6F: call    sub_180010F30
 * 00000001800BED74: nop
 * 00000001800BED75: lea     rcx, [rbp+9E40h+var_1510]
 * 00000001800BED7C: call    sub_180010F30
 * 00000001800BED81: nop
 * 00000001800BED82: lea     rcx, dword_1801D95A8
 * 00000001800BED89: call    sub_18000C538
 * 00000001800BED8E: mov     rax, [rdi+rbx*8]
 * 00000001800BED92: mov     ecx, [r15+rax]
 * 00000001800BED96: cmp     cs:dword_1801D95AC, ecx
 * 00000001800BED9C: jle     loc_1800BEE79
 * 00000001800BEDA2: lea     rcx, dword_1801D95AC
 * 00000001800BEDA9: call    sub_18000C5A0
 * 00000001800BEDAE: cmp     cs:dword_1801D95AC, r14d
 * 00000001800BEDB5: jnz     loc_1800BEE79
 * 00000001800BEDBB: call    sub_1800B196C
 * 00000001800BEDC0: mov     qword ptr [rbp+9E40h+var_90D0], rax
 * 00000001800BEDC7: add     rax, 1A18h
 * 00000001800BEDCD: mov     qword ptr [rbp+9E40h+var_90D0+8], rax
 * 00000001800BEDD4: movups  xmm7, [rbp+9E40h+var_90D0]
 * 00000001800BEDDB: movups  [rbp+9E40h+var_7110], xmm7
 * 00000001800BEDE2: mov     dword ptr [rbp+9E40h+var_7100], esi
 * 00000001800BEDE8: mov     dword ptr [rbp+9E40h+var_7100+4], esi
 * 00000001800BEDEE: movups  xmm6, [rbp+9E40h+var_7100]
 * 00000001800BEDF5: call    sub_1800B1A0C
 * 00000001800BEDFA: mov     r8, rax
 * 00000001800BEDFD: mov     r9d, r12d
 * 00000001800BEE00: mov     edx, 122h
 * 00000001800BEE05: lea     rcx, [rbp+9E40h+var_14B0]; Src
 * 00000001800BEE0C: call    sub_18007C338
 * 00000001800BEE11: nop
 * 00000001800BEE12: mov     r8, rax
 * 00000001800BEE15: mov     rdx, r13
 * 00000001800BEE18: lea     rcx, [rbp+9E40h+var_14D0]
 * 00000001800BEE1F: call    sub_18001C6E8
 * 00000001800BEE24: nop
 * 00000001800BEE25: lea     r8, aVertex; "/Vertex"
 * 00000001800BEE2C: mov     rdx, rax
 * 00000001800BEE2F: lea     rcx, [rbp+9E40h+var_4DB0]
 * 00000001800BEE36: call    sub_18001C61C
 * 00000001800BEE3B: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BEE40: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BEE45: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BEE4A: mov     rcx, rax
 * 00000001800BEE4D: call    sub_18007C3DC
 * 00000001800BEE52: nop
 * 00000001800BEE53: lea     rcx, [rbp+9E40h+var_14D0]
 * 00000001800BEE5A: call    sub_180010F30
 * 00000001800BEE5F: nop
 * 00000001800BEE60: lea     rcx, [rbp+9E40h+var_14B0]
 * 00000001800BEE67: call    sub_180010F30
 * 00000001800BEE6C: nop
 * 00000001800BEE6D: lea     rcx, dword_1801D95AC
 * 00000001800BEE74: call    sub_18000C538
 * 00000001800BEE79: mov     rax, [rdi+rbx*8]
 * 00000001800BEE7D: mov     ecx, [r15+rax]
 * 00000001800BEE81: cmp     cs:dword_1801D95B0, ecx
 * 00000001800BEE87: jle     loc_1800BEF64
 * 00000001800BEE8D: lea     rcx, dword_1801D95B0
 * 00000001800BEE94: call    sub_18000C5A0
 * 00000001800BEE99: cmp     cs:dword_1801D95B0, r14d
 * 00000001800BEEA0: jnz     loc_1800BEF64
 * 00000001800BEEA6: call    sub_1800B196C
 * 00000001800BEEAB: mov     qword ptr [rbp+9E40h+var_90C0], rax
 * 00000001800BEEB2: add     rax, 1A18h
 * 00000001800BEEB8: mov     qword ptr [rbp+9E40h+var_90C0+8], rax
 * 00000001800BEEBF: movups  xmm7, [rbp+9E40h+var_90C0]
 * 00000001800BEEC6: movups  [rbp+9E40h+var_70F0], xmm7
 * 00000001800BEECD: mov     dword ptr [rbp+9E40h+var_70E0], esi
 * 00000001800BEED3: mov     dword ptr [rbp+9E40h+var_70E0+4], esi
 * 00000001800BEED9: movups  xmm6, [rbp+9E40h+var_70E0]
 * 00000001800BEEE0: call    sub_1800B1A0C
 * 00000001800BEEE5: mov     r8, rax
 * 00000001800BEEE8: mov     r9d, r12d
 * 00000001800BEEEB: mov     edx, 128h
 * 00000001800BEEF0: lea     rcx, [rbp+9E40h+var_1450]; Src
 * 00000001800BEEF7: call    sub_18007C338
 * 00000001800BEEFC: nop
 * 00000001800BEEFD: mov     r8, rax
 * 00000001800BEF00: mov     rdx, r13
 * 00000001800BEF03: lea     rcx, [rbp+9E40h+var_1470]
 * 00000001800BEF0A: call    sub_18001C6E8
 * 00000001800BEF0F: nop
 * 00000001800BEF10: lea     r8, aVertex; "/Vertex"
 * 00000001800BEF17: mov     rdx, rax
 * 00000001800BEF1A: lea     rcx, [rbp+9E40h+var_4D90]
 * 00000001800BEF21: call    sub_18001C61C
 * 00000001800BEF26: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BEF2B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BEF30: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BEF35: mov     rcx, rax
 * 00000001800BEF38: call    sub_18007C3DC
 * 00000001800BEF3D: nop
 * 00000001800BEF3E: lea     rcx, [rbp+9E40h+var_1470]
 * 00000001800BEF45: call    sub_180010F30
 * 00000001800BEF4A: nop
 * 00000001800BEF4B: lea     rcx, [rbp+9E40h+var_1450]
 * 00000001800BEF52: call    sub_180010F30
 * 00000001800BEF57: nop
 * 00000001800BEF58: lea     rcx, dword_1801D95B0
 * 00000001800BEF5F: call    sub_18000C538
 * 00000001800BEF64: mov     rax, [rdi+rbx*8]
 * 00000001800BEF68: mov     ecx, [r15+rax]
 * 00000001800BEF6C: cmp     cs:dword_1801D95B4, ecx
 * 00000001800BEF72: jle     loc_1800BF04F
 * 00000001800BEF78: lea     rcx, dword_1801D95B4
 * 00000001800BEF7F: call    sub_18000C5A0
 * 00000001800BEF84: cmp     cs:dword_1801D95B4, r14d
 * 00000001800BEF8B: jnz     loc_1800BF04F
 * 00000001800BEF91: call    sub_1800B196C
 * 00000001800BEF96: mov     qword ptr [rbp+9E40h+var_90B0], rax
 * 00000001800BEF9D: add     rax, 1A18h
 * 00000001800BEFA3: mov     qword ptr [rbp+9E40h+var_90B0+8], rax
 * 00000001800BEFAA: movups  xmm7, [rbp+9E40h+var_90B0]
 * 00000001800BEFB1: movups  [rbp+9E40h+var_70D0], xmm7
 * 00000001800BEFB8: mov     dword ptr [rbp+9E40h+var_70C0], esi
 * 00000001800BEFBE: mov     dword ptr [rbp+9E40h+var_70C0+4], esi
 * 00000001800BEFC4: movups  xmm6, [rbp+9E40h+var_70C0]
 * 00000001800BEFCB: call    sub_1800B1A0C
 * 00000001800BEFD0: mov     r8, rax
 * 00000001800BEFD3: mov     r9d, r12d
 * 00000001800BEFD6: mov     edx, 12Ah
 * 00000001800BEFDB: lea     rcx, [rbp+9E40h+var_13F0]; Src
 * 00000001800BEFE2: call    sub_18007C338
 * 00000001800BEFE7: nop
 * 00000001800BEFE8: mov     r8, rax
 * 00000001800BEFEB: mov     rdx, r13
 * 00000001800BEFEE: lea     rcx, [rbp+9E40h+var_1410]
 * 00000001800BEFF5: call    sub_18001C6E8
 * 00000001800BEFFA: nop
 * 00000001800BEFFB: lea     r8, aVertex; "/Vertex"
 * 00000001800BF002: mov     rdx, rax
 * 00000001800BF005: lea     rcx, [rbp+9E40h+var_4D70]
 * 00000001800BF00C: call    sub_18001C61C
 * 00000001800BF011: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BF016: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BF01B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BF020: mov     rcx, rax
 * 00000001800BF023: call    sub_18007C3DC
 * 00000001800BF028: nop
 * 00000001800BF029: lea     rcx, [rbp+9E40h+var_1410]
 * 00000001800BF030: call    sub_180010F30
 * 00000001800BF035: nop
 * 00000001800BF036: lea     rcx, [rbp+9E40h+var_13F0]
 * 00000001800BF03D: call    sub_180010F30
 * 00000001800BF042: nop
 * 00000001800BF043: lea     rcx, dword_1801D95B4
 * 00000001800BF04A: call    sub_18000C538
 * 00000001800BF04F: mov     rax, [rdi+rbx*8]
 * 00000001800BF053: mov     ecx, [r15+rax]
 * 00000001800BF057: cmp     cs:dword_1801D95B8, ecx
 * 00000001800BF05D: jle     loc_1800BF13A
 * 00000001800BF063: lea     rcx, dword_1801D95B8
 * 00000001800BF06A: call    sub_18000C5A0
 * 00000001800BF06F: cmp     cs:dword_1801D95B8, r14d
 * 00000001800BF076: jnz     loc_1800BF13A
 * 00000001800BF07C: call    sub_1800B196C
 * 00000001800BF081: mov     qword ptr [rbp+9E40h+var_90A0], rax
 * 00000001800BF088: add     rax, 1A18h
 * 00000001800BF08E: mov     qword ptr [rbp+9E40h+var_90A0+8], rax
 * 00000001800BF095: movups  xmm7, [rbp+9E40h+var_90A0]
 * 00000001800BF09C: movups  [rbp+9E40h+var_70B0], xmm7
 * 00000001800BF0A3: mov     dword ptr [rbp+9E40h+var_70A0], esi
 * 00000001800BF0A9: mov     dword ptr [rbp+9E40h+var_70A0+4], esi
 * 00000001800BF0AF: movups  xmm6, [rbp+9E40h+var_70A0]
 * 00000001800BF0B6: call    sub_1800B1A0C
 * 00000001800BF0BB: mov     r8, rax
 * 00000001800BF0BE: mov     r9d, r12d
 * 00000001800BF0C1: mov     edx, 130h
 * 00000001800BF0C6: lea     rcx, [rbp+9E40h+var_1390]; Src
 * 00000001800BF0CD: call    sub_18007C338
 * 00000001800BF0D2: nop
 * 00000001800BF0D3: mov     r8, rax
 * 00000001800BF0D6: mov     rdx, r13
 * 00000001800BF0D9: lea     rcx, [rbp+9E40h+var_13B0]
 * 00000001800BF0E0: call    sub_18001C6E8
 * 00000001800BF0E5: nop
 * 00000001800BF0E6: lea     r8, aVertex; "/Vertex"
 * 00000001800BF0ED: mov     rdx, rax
 * 00000001800BF0F0: lea     rcx, [rbp+9E40h+var_4D50]
 * 00000001800BF0F7: call    sub_18001C61C
 * 00000001800BF0FC: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BF101: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BF106: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BF10B: mov     rcx, rax
 * 00000001800BF10E: call    sub_18007C3DC
 * 00000001800BF113: nop
 * 00000001800BF114: lea     rcx, [rbp+9E40h+var_13B0]
 * 00000001800BF11B: call    sub_180010F30
 * 00000001800BF120: nop
 * 00000001800BF121: lea     rcx, [rbp+9E40h+var_1390]
 * 00000001800BF128: call    sub_180010F30
 * 00000001800BF12D: nop
 * 00000001800BF12E: lea     rcx, dword_1801D95B8
 * 00000001800BF135: call    sub_18000C538
 * 00000001800BF13A: mov     rax, [rdi+rbx*8]
 * 00000001800BF13E: mov     ecx, [r15+rax]
 * 00000001800BF142: cmp     cs:dword_1801D95BC, ecx
 * 00000001800BF148: jle     loc_1800BF225
 * 00000001800BF14E: lea     rcx, dword_1801D95BC
 * 00000001800BF155: call    sub_18000C5A0
 * 00000001800BF15A: cmp     cs:dword_1801D95BC, r14d
 * 00000001800BF161: jnz     loc_1800BF225
 * 00000001800BF167: call    sub_1800B196C
 * 00000001800BF16C: mov     qword ptr [rbp+9E40h+var_9090], rax
 * 00000001800BF173: add     rax, 1A18h
 * 00000001800BF179: mov     qword ptr [rbp+9E40h+var_9090+8], rax
 * 00000001800BF180: movups  xmm7, [rbp+9E40h+var_9090]
 * 00000001800BF187: movups  [rbp+9E40h+var_7090], xmm7
 * 00000001800BF18E: mov     dword ptr [rbp+9E40h+var_7080], esi
 * 00000001800BF194: mov     dword ptr [rbp+9E40h+var_7080+4], esi
 * 00000001800BF19A: movups  xmm6, [rbp+9E40h+var_7080]
 * 00000001800BF1A1: call    sub_1800B1A0C
 * 00000001800BF1A6: mov     r8, rax
 * 00000001800BF1A9: mov     r9d, r12d
 * 00000001800BF1AC: mov     edx, 132h
 * 00000001800BF1B1: lea     rcx, [rbp+9E40h+var_1330]; Src
 * 00000001800BF1B8: call    sub_18007C338
 * 00000001800BF1BD: nop
 * 00000001800BF1BE: mov     r8, rax
 * 00000001800BF1C1: mov     rdx, r13
 * 00000001800BF1C4: lea     rcx, [rbp+9E40h+var_1350]
 * 00000001800BF1CB: call    sub_18001C6E8
 * 00000001800BF1D0: nop
 * 00000001800BF1D1: lea     r8, aVertex; "/Vertex"
 * 00000001800BF1D8: mov     rdx, rax
 * 00000001800BF1DB: lea     rcx, [rbp+9E40h+var_4D30]
 * 00000001800BF1E2: call    sub_18001C61C
 * 00000001800BF1E7: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BF1EC: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BF1F1: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BF1F6: mov     rcx, rax
 * 00000001800BF1F9: call    sub_18007C3DC
 * 00000001800BF1FE: nop
 * 00000001800BF1FF: lea     rcx, [rbp+9E40h+var_1350]
 * 00000001800BF206: call    sub_180010F30
 * 00000001800BF20B: nop
 * 00000001800BF20C: lea     rcx, [rbp+9E40h+var_1330]
 * 00000001800BF213: call    sub_180010F30
 * 00000001800BF218: nop
 * 00000001800BF219: lea     rcx, dword_1801D95BC
 * 00000001800BF220: call    sub_18000C538
 * 00000001800BF225: mov     rax, [rdi+rbx*8]
 * 00000001800BF229: mov     ecx, [r15+rax]
 * 00000001800BF22D: cmp     cs:dword_1801D95C0, ecx
 * 00000001800BF233: jle     loc_1800BF310
 * 00000001800BF239: lea     rcx, dword_1801D95C0
 * 00000001800BF240: call    sub_18000C5A0
 * 00000001800BF245: cmp     cs:dword_1801D95C0, r14d
 * 00000001800BF24C: jnz     loc_1800BF310
 * 00000001800BF252: call    sub_1800B196C
 * 00000001800BF257: mov     qword ptr [rbp+9E40h+var_9080], rax
 * 00000001800BF25E: add     rax, 1A18h
 * 00000001800BF264: mov     qword ptr [rbp+9E40h+var_9080+8], rax
 * 00000001800BF26B: movups  xmm7, [rbp+9E40h+var_9080]
 * 00000001800BF272: movups  [rbp+9E40h+var_7070], xmm7
 * 00000001800BF279: mov     dword ptr [rbp+9E40h+var_7060], esi
 * 00000001800BF27F: mov     dword ptr [rbp+9E40h+var_7060+4], esi
 * 00000001800BF285: movups  xmm6, [rbp+9E40h+var_7060]
 * 00000001800BF28C: call    sub_1800B1A0C
 * 00000001800BF291: mov     r8, rax
 * 00000001800BF294: mov     r9d, r12d
 * 00000001800BF297: mov     edx, 138h
 * 00000001800BF29C: lea     rcx, [rbp+9E40h+var_12D0]; Src
 * 00000001800BF2A3: call    sub_18007C338
 * 00000001800BF2A8: nop
 * 00000001800BF2A9: mov     r8, rax
 * 00000001800BF2AC: mov     rdx, r13
 * 00000001800BF2AF: lea     rcx, [rbp+9E40h+var_12F0]
 * 00000001800BF2B6: call    sub_18001C6E8
 * 00000001800BF2BB: nop
 * 00000001800BF2BC: lea     r8, aVertex; "/Vertex"
 * 00000001800BF2C3: mov     rdx, rax
 * 00000001800BF2C6: lea     rcx, [rbp+9E40h+var_4D10]
 * 00000001800BF2CD: call    sub_18001C61C
 * 00000001800BF2D2: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BF2D7: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BF2DC: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BF2E1: mov     rcx, rax
 * 00000001800BF2E4: call    sub_18007C3DC
 * 00000001800BF2E9: nop
 * 00000001800BF2EA: lea     rcx, [rbp+9E40h+var_12F0]
 * 00000001800BF2F1: call    sub_180010F30
 * 00000001800BF2F6: nop
 * 00000001800BF2F7: lea     rcx, [rbp+9E40h+var_12D0]
 * 00000001800BF2FE: call    sub_180010F30
 * 00000001800BF303: nop
 * 00000001800BF304: lea     rcx, dword_1801D95C0
 * 00000001800BF30B: call    sub_18000C538
 * 00000001800BF310: mov     rax, [rdi+rbx*8]
 * 00000001800BF314: mov     ecx, [r15+rax]
 * 00000001800BF318: cmp     cs:dword_1801D95C4, ecx
 * 00000001800BF31E: jle     loc_1800BF3FB
 * 00000001800BF324: lea     rcx, dword_1801D95C4
 * 00000001800BF32B: call    sub_18000C5A0
 * 00000001800BF330: cmp     cs:dword_1801D95C4, r14d
 * 00000001800BF337: jnz     loc_1800BF3FB
 * 00000001800BF33D: call    sub_1800B196C
 * 00000001800BF342: mov     qword ptr [rbp+9E40h+var_9070], rax
 * 00000001800BF349: add     rax, 1A18h
 * 00000001800BF34F: mov     qword ptr [rbp+9E40h+var_9070+8], rax
 * 00000001800BF356: movups  xmm7, [rbp+9E40h+var_9070]
 * 00000001800BF35D: movups  [rbp+9E40h+var_7050], xmm7
 * 00000001800BF364: mov     dword ptr [rbp+9E40h+var_7040], esi
 * 00000001800BF36A: mov     dword ptr [rbp+9E40h+var_7040+4], esi
 * 00000001800BF370: movups  xmm6, [rbp+9E40h+var_7040]
 * 00000001800BF377: call    sub_1800B1A0C
 * 00000001800BF37C: mov     r8, rax
 * 00000001800BF37F: mov     r9d, r12d
 * 00000001800BF382: mov     edx, 13Ah
 * 00000001800BF387: lea     rcx, [rbp+9E40h+var_1270]; Src
 * 00000001800BF38E: call    sub_18007C338
 * 00000001800BF393: nop
 * 00000001800BF394: mov     r8, rax
 * 00000001800BF397: mov     rdx, r13
 * 00000001800BF39A: lea     rcx, [rbp+9E40h+var_1290]
 * 00000001800BF3A1: call    sub_18001C6E8
 * 00000001800BF3A6: nop
 * 00000001800BF3A7: lea     r8, aVertex; "/Vertex"
 * 00000001800BF3AE: mov     rdx, rax
 * 00000001800BF3B1: lea     rcx, [rbp+9E40h+var_4CF0]
 * 00000001800BF3B8: call    sub_18001C61C
 * 00000001800BF3BD: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BF3C2: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BF3C7: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BF3CC: mov     rcx, rax
 * 00000001800BF3CF: call    sub_18007C3DC
 * 00000001800BF3D4: nop
 * 00000001800BF3D5: lea     rcx, [rbp+9E40h+var_1290]
 * 00000001800BF3DC: call    sub_180010F30
 * 00000001800BF3E1: nop
 * 00000001800BF3E2: lea     rcx, [rbp+9E40h+var_1270]
 * 00000001800BF3E9: call    sub_180010F30
 * 00000001800BF3EE: nop
 * 00000001800BF3EF: lea     rcx, dword_1801D95C4
 * 00000001800BF3F6: call    sub_18000C538
 * 00000001800BF3FB: mov     rax, [rdi+rbx*8]
 * 00000001800BF3FF: mov     ecx, [r15+rax]
 * 00000001800BF403: cmp     cs:dword_1801D95C8, ecx
 * 00000001800BF409: jle     loc_1800BF4E6
 * 00000001800BF40F: lea     rcx, dword_1801D95C8
 * 00000001800BF416: call    sub_18000C5A0
 * 00000001800BF41B: cmp     cs:dword_1801D95C8, r14d
 * 00000001800BF422: jnz     loc_1800BF4E6
 * 00000001800BF428: call    sub_1800B198C
 * 00000001800BF42D: mov     qword ptr [rbp+9E40h+var_9060], rax
 * 00000001800BF434: add     rax, 1050h
 * 00000001800BF43A: mov     qword ptr [rbp+9E40h+var_9060+8], rax
 * 00000001800BF441: movups  xmm7, [rbp+9E40h+var_9060]
 * 00000001800BF448: movups  [rbp+9E40h+var_7030], xmm7
 * 00000001800BF44F: mov     dword ptr [rbp+9E40h+var_7020], esi
 * 00000001800BF455: mov     dword ptr [rbp+9E40h+var_7020+4], esi
 * 00000001800BF45B: movups  xmm6, [rbp+9E40h+var_7020]
 * 00000001800BF462: call    sub_1800B1A0C
 * 00000001800BF467: mov     r8, rax
 * 00000001800BF46A: mov     r9d, r12d
 * 00000001800BF46D: mov     edx, 140h
 * 00000001800BF472: lea     rcx, [rbp+9E40h+var_1210]; Src
 * 00000001800BF479: call    sub_18007C338
 * 00000001800BF47E: nop
 * 00000001800BF47F: mov     r8, rax
 * 00000001800BF482: mov     rdx, r13
 * 00000001800BF485: lea     rcx, [rbp+9E40h+var_1230]
 * 00000001800BF48C: call    sub_18001C6E8
 * 00000001800BF491: nop
 * 00000001800BF492: lea     r8, aVertex; "/Vertex"
 * 00000001800BF499: mov     rdx, rax
 * 00000001800BF49C: lea     rcx, [rbp+9E40h+var_4CD0]
 * 00000001800BF4A3: call    sub_18001C61C
 * 00000001800BF4A8: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BF4AD: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BF4B2: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BF4B7: mov     rcx, rax
 * 00000001800BF4BA: call    sub_18007C3DC
 * 00000001800BF4BF: nop
 * 00000001800BF4C0: lea     rcx, [rbp+9E40h+var_1230]
 * 00000001800BF4C7: call    sub_180010F30
 * 00000001800BF4CC: nop
 * 00000001800BF4CD: lea     rcx, [rbp+9E40h+var_1210]
 * 00000001800BF4D4: call    sub_180010F30
 * 00000001800BF4D9: nop
 * 00000001800BF4DA: lea     rcx, dword_1801D95C8
 * 00000001800BF4E1: call    sub_18000C538
 * 00000001800BF4E6: mov     rax, [rdi+rbx*8]
 * 00000001800BF4EA: mov     ecx, [r15+rax]
 * 00000001800BF4EE: cmp     cs:dword_1801D95CC, ecx
 * 00000001800BF4F4: jle     loc_1800BF5D1
 * 00000001800BF4FA: lea     rcx, dword_1801D95CC
 * 00000001800BF501: call    sub_18000C5A0
 * 00000001800BF506: cmp     cs:dword_1801D95CC, r14d
 * 00000001800BF50D: jnz     loc_1800BF5D1
 * 00000001800BF513: call    sub_1800B198C
 * 00000001800BF518: mov     qword ptr [rbp+9E40h+var_9050], rax
 * 00000001800BF51F: add     rax, 1050h
 * 00000001800BF525: mov     qword ptr [rbp+9E40h+var_9050+8], rax
 * 00000001800BF52C: movups  xmm7, [rbp+9E40h+var_9050]
 * 00000001800BF533: movups  [rbp+9E40h+var_7010], xmm7
 * 00000001800BF53A: mov     dword ptr [rbp+9E40h+var_7000], esi
 * 00000001800BF540: mov     dword ptr [rbp+9E40h+var_7000+4], esi
 * 00000001800BF546: movups  xmm6, [rbp+9E40h+var_7000]
 * 00000001800BF54D: call    sub_1800B1A0C
 * 00000001800BF552: mov     r8, rax
 * 00000001800BF555: mov     r9d, r12d
 * 00000001800BF558: mov     edx, 142h
 * 00000001800BF55D: lea     rcx, [rbp+9E40h+var_11B0]; Src
 * 00000001800BF564: call    sub_18007C338
 * 00000001800BF569: nop
 * 00000001800BF56A: mov     r8, rax
 * 00000001800BF56D: mov     rdx, r13
 * 00000001800BF570: lea     rcx, [rbp+9E40h+var_11D0]
 * 00000001800BF577: call    sub_18001C6E8
 * 00000001800BF57C: nop
 * 00000001800BF57D: lea     r8, aVertex; "/Vertex"
 * 00000001800BF584: mov     rdx, rax
 * 00000001800BF587: lea     rcx, [rbp+9E40h+var_4CB0]
 * 00000001800BF58E: call    sub_18001C61C
 * 00000001800BF593: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BF598: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BF59D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BF5A2: mov     rcx, rax
 * 00000001800BF5A5: call    sub_18007C3DC
 * 00000001800BF5AA: nop
 * 00000001800BF5AB: lea     rcx, [rbp+9E40h+var_11D0]
 * 00000001800BF5B2: call    sub_180010F30
 * 00000001800BF5B7: nop
 * 00000001800BF5B8: lea     rcx, [rbp+9E40h+var_11B0]
 * 00000001800BF5BF: call    sub_180010F30
 * 00000001800BF5C4: nop
 * 00000001800BF5C5: lea     rcx, dword_1801D95CC
 * 00000001800BF5CC: call    sub_18000C538
 * 00000001800BF5D1: mov     rax, [rdi+rbx*8]
 * 00000001800BF5D5: mov     ecx, [r15+rax]
 * 00000001800BF5D9: cmp     cs:dword_1801D95D0, ecx
 * 00000001800BF5DF: jle     loc_1800BF6BC
 * 00000001800BF5E5: lea     rcx, dword_1801D95D0
 * 00000001800BF5EC: call    sub_18000C5A0
 * 00000001800BF5F1: cmp     cs:dword_1801D95D0, r14d
 * 00000001800BF5F8: jnz     loc_1800BF6BC
 * 00000001800BF5FE: call    sub_1800B198C
 * 00000001800BF603: mov     qword ptr [rbp+9E40h+var_9040], rax
 * 00000001800BF60A: add     rax, 1050h
 * 00000001800BF610: mov     qword ptr [rbp+9E40h+var_9040+8], rax
 * 00000001800BF617: movups  xmm7, [rbp+9E40h+var_9040]
 * 00000001800BF61E: movups  [rbp+9E40h+var_6FF0], xmm7
 * 00000001800BF625: mov     dword ptr [rbp+9E40h+var_6FE0], esi
 * 00000001800BF62B: mov     dword ptr [rbp+9E40h+var_6FE0+4], esi
 * 00000001800BF631: movups  xmm6, [rbp+9E40h+var_6FE0]
 * 00000001800BF638: call    sub_1800B1A0C
 * 00000001800BF63D: mov     r8, rax
 * 00000001800BF640: mov     r9d, r12d
 * 00000001800BF643: mov     edx, 148h
 * 00000001800BF648: lea     rcx, [rbp+9E40h+var_1150]; Src
 * 00000001800BF64F: call    sub_18007C338
 * 00000001800BF654: nop
 * 00000001800BF655: mov     r8, rax
 * 00000001800BF658: mov     rdx, r13
 * 00000001800BF65B: lea     rcx, [rbp+9E40h+var_1170]
 * 00000001800BF662: call    sub_18001C6E8
 * 00000001800BF667: nop
 * 00000001800BF668: lea     r8, aVertex; "/Vertex"
 * 00000001800BF66F: mov     rdx, rax
 * 00000001800BF672: lea     rcx, [rbp+9E40h+var_4C90]
 * 00000001800BF679: call    sub_18001C61C
 * 00000001800BF67E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BF683: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BF688: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BF68D: mov     rcx, rax
 * 00000001800BF690: call    sub_18007C3DC
 * 00000001800BF695: nop
 * 00000001800BF696: lea     rcx, [rbp+9E40h+var_1170]
 * 00000001800BF69D: call    sub_180010F30
 * 00000001800BF6A2: nop
 * 00000001800BF6A3: lea     rcx, [rbp+9E40h+var_1150]
 * 00000001800BF6AA: call    sub_180010F30
 * 00000001800BF6AF: nop
 * 00000001800BF6B0: lea     rcx, dword_1801D95D0
 * 00000001800BF6B7: call    sub_18000C538
 * 00000001800BF6BC: mov     rax, [rdi+rbx*8]
 * 00000001800BF6C0: mov     ecx, [r15+rax]
 * 00000001800BF6C4: cmp     cs:dword_1801D95D4, ecx
 * 00000001800BF6CA: jle     loc_1800BF7A7
 * 00000001800BF6D0: lea     rcx, dword_1801D95D4
 * 00000001800BF6D7: call    sub_18000C5A0
 * 00000001800BF6DC: cmp     cs:dword_1801D95D4, r14d
 * 00000001800BF6E3: jnz     loc_1800BF7A7
 * 00000001800BF6E9: call    sub_1800B198C
 * 00000001800BF6EE: mov     qword ptr [rbp+9E40h+var_9030], rax
 * 00000001800BF6F5: add     rax, 1050h
 * 00000001800BF6FB: mov     qword ptr [rbp+9E40h+var_9030+8], rax
 * 00000001800BF702: movups  xmm7, [rbp+9E40h+var_9030]
 * 00000001800BF709: movups  [rbp+9E40h+var_6FD0], xmm7
 * 00000001800BF710: mov     dword ptr [rbp+9E40h+var_6FC0], esi
 * 00000001800BF716: mov     dword ptr [rbp+9E40h+var_6FC0+4], esi
 * 00000001800BF71C: movups  xmm6, [rbp+9E40h+var_6FC0]
 * 00000001800BF723: call    sub_1800B1A0C
 * 00000001800BF728: mov     r8, rax
 * 00000001800BF72B: mov     r9d, r12d
 * 00000001800BF72E: mov     edx, 14Ah
 * 00000001800BF733: lea     rcx, [rbp+9E40h+var_10F0]; Src
 * 00000001800BF73A: call    sub_18007C338
 * 00000001800BF73F: nop
 * 00000001800BF740: mov     r8, rax
 * 00000001800BF743: mov     rdx, r13
 * 00000001800BF746: lea     rcx, [rbp+9E40h+var_1110]
 * 00000001800BF74D: call    sub_18001C6E8
 * 00000001800BF752: nop
 * 00000001800BF753: lea     r8, aVertex; "/Vertex"
 * 00000001800BF75A: mov     rdx, rax
 * 00000001800BF75D: lea     rcx, [rbp+9E40h+var_4C70]
 * 00000001800BF764: call    sub_18001C61C
 * 00000001800BF769: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BF76E: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BF773: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BF778: mov     rcx, rax
 * 00000001800BF77B: call    sub_18007C3DC
 * 00000001800BF780: nop
 * 00000001800BF781: lea     rcx, [rbp+9E40h+var_1110]
 * 00000001800BF788: call    sub_180010F30
 * 00000001800BF78D: nop
 * 00000001800BF78E: lea     rcx, [rbp+9E40h+var_10F0]
 * 00000001800BF795: call    sub_180010F30
 * 00000001800BF79A: nop
 * 00000001800BF79B: lea     rcx, dword_1801D95D4
 * 00000001800BF7A2: call    sub_18000C538
 * 00000001800BF7A7: mov     rax, [rdi+rbx*8]
 * 00000001800BF7AB: mov     ecx, [r15+rax]
 * 00000001800BF7AF: cmp     cs:dword_1801D95D8, ecx
 * 00000001800BF7B5: jle     loc_1800BF892
 * 00000001800BF7BB: lea     rcx, dword_1801D95D8
 * 00000001800BF7C2: call    sub_18000C5A0
 * 00000001800BF7C7: cmp     cs:dword_1801D95D8, r14d
 * 00000001800BF7CE: jnz     loc_1800BF892
 * 00000001800BF7D4: call    sub_1800B198C
 * 00000001800BF7D9: mov     qword ptr [rbp+9E40h+var_9020], rax
 * 00000001800BF7E0: add     rax, 1050h
 * 00000001800BF7E6: mov     qword ptr [rbp+9E40h+var_9020+8], rax
 * 00000001800BF7ED: movups  xmm7, [rbp+9E40h+var_9020]
 * 00000001800BF7F4: movups  [rbp+9E40h+var_6FB0], xmm7
 * 00000001800BF7FB: mov     dword ptr [rbp+9E40h+var_6FA0], esi
 * 00000001800BF801: mov     dword ptr [rbp+9E40h+var_6FA0+4], esi
 * 00000001800BF807: movups  xmm6, [rbp+9E40h+var_6FA0]
 * 00000001800BF80E: call    sub_1800B1A0C
 * 00000001800BF813: mov     r8, rax
 * 00000001800BF816: mov     r9d, r12d
 * 00000001800BF819: mov     edx, 150h
 * 00000001800BF81E: lea     rcx, [rbp+9E40h+var_1090]; Src
 * 00000001800BF825: call    sub_18007C338
 * 00000001800BF82A: nop
 * 00000001800BF82B: mov     r8, rax
 * 00000001800BF82E: mov     rdx, r13
 * 00000001800BF831: lea     rcx, [rbp+9E40h+var_10B0]
 * 00000001800BF838: call    sub_18001C6E8
 * 00000001800BF83D: nop
 * 00000001800BF83E: lea     r8, aVertex; "/Vertex"
 * 00000001800BF845: mov     rdx, rax
 * 00000001800BF848: lea     rcx, [rbp+9E40h+var_4C50]
 * 00000001800BF84F: call    sub_18001C61C
 * 00000001800BF854: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BF859: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BF85E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BF863: mov     rcx, rax
 * 00000001800BF866: call    sub_18007C3DC
 * 00000001800BF86B: nop
 * 00000001800BF86C: lea     rcx, [rbp+9E40h+var_10B0]
 * 00000001800BF873: call    sub_180010F30
 * 00000001800BF878: nop
 * 00000001800BF879: lea     rcx, [rbp+9E40h+var_1090]
 * 00000001800BF880: call    sub_180010F30
 * 00000001800BF885: nop
 * 00000001800BF886: lea     rcx, dword_1801D95D8
 * 00000001800BF88D: call    sub_18000C538
 * 00000001800BF892: mov     rax, [rdi+rbx*8]
 * 00000001800BF896: mov     ecx, [r15+rax]
 * 00000001800BF89A: cmp     cs:dword_1801D95DC, ecx
 * 00000001800BF8A0: jle     loc_1800BF97D
 * 00000001800BF8A6: lea     rcx, dword_1801D95DC
 * 00000001800BF8AD: call    sub_18000C5A0
 * 00000001800BF8B2: cmp     cs:dword_1801D95DC, r14d
 * 00000001800BF8B9: jnz     loc_1800BF97D
 * 00000001800BF8BF: call    sub_1800B198C
 * 00000001800BF8C4: mov     qword ptr [rbp+9E40h+var_9010], rax
 * 00000001800BF8CB: add     rax, 1050h
 * 00000001800BF8D1: mov     qword ptr [rbp+9E40h+var_9010+8], rax
 * 00000001800BF8D8: movups  xmm7, [rbp+9E40h+var_9010]
 * 00000001800BF8DF: movups  [rbp+9E40h+var_6F90], xmm7
 * 00000001800BF8E6: mov     dword ptr [rbp+9E40h+var_6F80], esi
 * 00000001800BF8EC: mov     dword ptr [rbp+9E40h+var_6F80+4], esi
 * 00000001800BF8F2: movups  xmm6, [rbp+9E40h+var_6F80]
 * 00000001800BF8F9: call    sub_1800B1A0C
 * 00000001800BF8FE: mov     r8, rax
 * 00000001800BF901: mov     r9d, r12d
 * 00000001800BF904: mov     edx, 152h
 * 00000001800BF909: lea     rcx, [rbp+9E40h+var_1030]; Src
 * 00000001800BF910: call    sub_18007C338
 * 00000001800BF915: nop
 * 00000001800BF916: mov     r8, rax
 * 00000001800BF919: mov     rdx, r13
 * 00000001800BF91C: lea     rcx, [rbp+9E40h+var_1050]
 * 00000001800BF923: call    sub_18001C6E8
 * 00000001800BF928: nop
 * 00000001800BF929: lea     r8, aVertex; "/Vertex"
 * 00000001800BF930: mov     rdx, rax
 * 00000001800BF933: lea     rcx, [rbp+9E40h+var_4C30]
 * 00000001800BF93A: call    sub_18001C61C
 * 00000001800BF93F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BF944: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BF949: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BF94E: mov     rcx, rax
 * 00000001800BF951: call    sub_18007C3DC
 * 00000001800BF956: nop
 * 00000001800BF957: lea     rcx, [rbp+9E40h+var_1050]
 * 00000001800BF95E: call    sub_180010F30
 * 00000001800BF963: nop
 * 00000001800BF964: lea     rcx, [rbp+9E40h+var_1030]
 * 00000001800BF96B: call    sub_180010F30
 * 00000001800BF970: nop
 * 00000001800BF971: lea     rcx, dword_1801D95DC
 * 00000001800BF978: call    sub_18000C538
 * 00000001800BF97D: mov     rax, [rdi+rbx*8]
 * 00000001800BF981: mov     ecx, [r15+rax]
 * 00000001800BF985: cmp     cs:dword_1801D95E0, ecx
 * 00000001800BF98B: jle     loc_1800BFA68
 * 00000001800BF991: lea     rcx, dword_1801D95E0
 * 00000001800BF998: call    sub_18000C5A0
 * 00000001800BF99D: cmp     cs:dword_1801D95E0, r14d
 * 00000001800BF9A4: jnz     loc_1800BFA68
 * 00000001800BF9AA: call    sub_1800B198C
 * 00000001800BF9AF: mov     qword ptr [rbp+9E40h+var_9000], rax
 * 00000001800BF9B6: add     rax, 1050h
 * 00000001800BF9BC: mov     qword ptr [rbp+9E40h+var_9000+8], rax
 * 00000001800BF9C3: movups  xmm7, [rbp+9E40h+var_9000]
 * 00000001800BF9CA: movups  [rbp+9E40h+var_6F70], xmm7
 * 00000001800BF9D1: mov     dword ptr [rbp+9E40h+var_6F60], esi
 * 00000001800BF9D7: mov     dword ptr [rbp+9E40h+var_6F60+4], esi
 * 00000001800BF9DD: movups  xmm6, [rbp+9E40h+var_6F60]
 * 00000001800BF9E4: call    sub_1800B1A0C
 * 00000001800BF9E9: mov     r8, rax
 * 00000001800BF9EC: mov     r9d, r12d
 * 00000001800BF9EF: mov     edx, 158h
 * 00000001800BF9F4: lea     rcx, [rbp+9E40h+var_FD0]; Src
 * 00000001800BF9FB: call    sub_18007C338
 * 00000001800BFA00: nop
 * 00000001800BFA01: mov     r8, rax
 * 00000001800BFA04: mov     rdx, r13
 * 00000001800BFA07: lea     rcx, [rbp+9E40h+var_FF0]
 * 00000001800BFA0E: call    sub_18001C6E8
 * 00000001800BFA13: nop
 * 00000001800BFA14: lea     r8, aVertex; "/Vertex"
 * 00000001800BFA1B: mov     rdx, rax
 * 00000001800BFA1E: lea     rcx, [rbp+9E40h+var_4C10]
 * 00000001800BFA25: call    sub_18001C61C
 * 00000001800BFA2A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BFA2F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BFA34: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BFA39: mov     rcx, rax
 * 00000001800BFA3C: call    sub_18007C3DC
 * 00000001800BFA41: nop
 * 00000001800BFA42: lea     rcx, [rbp+9E40h+var_FF0]
 * 00000001800BFA49: call    sub_180010F30
 * 00000001800BFA4E: nop
 * 00000001800BFA4F: lea     rcx, [rbp+9E40h+var_FD0]
 * 00000001800BFA56: call    sub_180010F30
 * 00000001800BFA5B: nop
 * 00000001800BFA5C: lea     rcx, dword_1801D95E0
 * 00000001800BFA63: call    sub_18000C538
 * 00000001800BFA68: mov     rax, [rdi+rbx*8]
 * 00000001800BFA6C: mov     ecx, [r15+rax]
 * 00000001800BFA70: cmp     cs:dword_1801D95E4, ecx
 * 00000001800BFA76: jle     loc_1800BFB53
 * 00000001800BFA7C: lea     rcx, dword_1801D95E4
 * 00000001800BFA83: call    sub_18000C5A0
 * 00000001800BFA88: cmp     cs:dword_1801D95E4, r14d
 * 00000001800BFA8F: jnz     loc_1800BFB53
 * 00000001800BFA95: call    sub_1800B198C
 * 00000001800BFA9A: mov     qword ptr [rbp+9E40h+var_8FF0], rax
 * 00000001800BFAA1: add     rax, 1050h
 * 00000001800BFAA7: mov     qword ptr [rbp+9E40h+var_8FF0+8], rax
 * 00000001800BFAAE: movups  xmm7, [rbp+9E40h+var_8FF0]
 * 00000001800BFAB5: movups  [rbp+9E40h+var_6F50], xmm7
 * 00000001800BFABC: mov     dword ptr [rbp+9E40h+var_6F40], esi
 * 00000001800BFAC2: mov     dword ptr [rbp+9E40h+var_6F40+4], esi
 * 00000001800BFAC8: movups  xmm6, [rbp+9E40h+var_6F40]
 * 00000001800BFACF: call    sub_1800B1A0C
 * 00000001800BFAD4: mov     r8, rax
 * 00000001800BFAD7: mov     r9d, r12d
 * 00000001800BFADA: mov     edx, 15Ah
 * 00000001800BFADF: lea     rcx, [rbp+9E40h+var_F70]; Src
 * 00000001800BFAE6: call    sub_18007C338
 * 00000001800BFAEB: nop
 * 00000001800BFAEC: mov     r8, rax
 * 00000001800BFAEF: mov     rdx, r13
 * 00000001800BFAF2: lea     rcx, [rbp+9E40h+var_F90]
 * 00000001800BFAF9: call    sub_18001C6E8
 * 00000001800BFAFE: nop
 * 00000001800BFAFF: lea     r8, aVertex; "/Vertex"
 * 00000001800BFB06: mov     rdx, rax
 * 00000001800BFB09: lea     rcx, [rbp+9E40h+var_4BF0]
 * 00000001800BFB10: call    sub_18001C61C
 * 00000001800BFB15: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BFB1A: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BFB1F: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BFB24: mov     rcx, rax
 * 00000001800BFB27: call    sub_18007C3DC
 * 00000001800BFB2C: nop
 * 00000001800BFB2D: lea     rcx, [rbp+9E40h+var_F90]
 * 00000001800BFB34: call    sub_180010F30
 * 00000001800BFB39: nop
 * 00000001800BFB3A: lea     rcx, [rbp+9E40h+var_F70]
 * 00000001800BFB41: call    sub_180010F30
 * 00000001800BFB46: nop
 * 00000001800BFB47: lea     rcx, dword_1801D95E4
 * 00000001800BFB4E: call    sub_18000C538
 * 00000001800BFB53: mov     rax, [rdi+rbx*8]
 * 00000001800BFB57: mov     ecx, [r15+rax]
 * 00000001800BFB5B: cmp     cs:dword_1801D95E8, ecx
 * 00000001800BFB61: jle     loc_1800BFC3E
 * 00000001800BFB67: lea     rcx, dword_1801D95E8
 * 00000001800BFB6E: call    sub_18000C5A0
 * 00000001800BFB73: cmp     cs:dword_1801D95E8, r14d
 * 00000001800BFB7A: jnz     loc_1800BFC3E
 * 00000001800BFB80: call    sub_1800B199C
 * 00000001800BFB85: mov     qword ptr [rbp+9E40h+var_8FE0], rax
 * 00000001800BFB8C: add     rax, 1A50h
 * 00000001800BFB92: mov     qword ptr [rbp+9E40h+var_8FE0+8], rax
 * 00000001800BFB99: movups  xmm7, [rbp+9E40h+var_8FE0]
 * 00000001800BFBA0: movups  [rbp+9E40h+var_6F30], xmm7
 * 00000001800BFBA7: mov     dword ptr [rbp+9E40h+var_6F20], esi
 * 00000001800BFBAD: mov     dword ptr [rbp+9E40h+var_6F20+4], esi
 * 00000001800BFBB3: movups  xmm6, [rbp+9E40h+var_6F20]
 * 00000001800BFBBA: call    sub_1800B1A0C
 * 00000001800BFBBF: mov     r8, rax
 * 00000001800BFBC2: mov     r9d, r12d
 * 00000001800BFBC5: mov     edx, 160h
 * 00000001800BFBCA: lea     rcx, [rbp+9E40h+var_F10]; Src
 * 00000001800BFBD1: call    sub_18007C338
 * 00000001800BFBD6: nop
 * 00000001800BFBD7: mov     r8, rax
 * 00000001800BFBDA: mov     rdx, r13
 * 00000001800BFBDD: lea     rcx, [rbp+9E40h+var_F30]
 * 00000001800BFBE4: call    sub_18001C6E8
 * 00000001800BFBE9: nop
 * 00000001800BFBEA: lea     r8, aVertex; "/Vertex"
 * 00000001800BFBF1: mov     rdx, rax
 * 00000001800BFBF4: lea     rcx, [rbp+9E40h+var_4BD0]
 * 00000001800BFBFB: call    sub_18001C61C
 * 00000001800BFC00: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BFC05: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BFC0A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BFC0F: mov     rcx, rax
 * 00000001800BFC12: call    sub_18007C3DC
 * 00000001800BFC17: nop
 * 00000001800BFC18: lea     rcx, [rbp+9E40h+var_F30]
 * 00000001800BFC1F: call    sub_180010F30
 * 00000001800BFC24: nop
 * 00000001800BFC25: lea     rcx, [rbp+9E40h+var_F10]
 * 00000001800BFC2C: call    sub_180010F30
 * 00000001800BFC31: nop
 * 00000001800BFC32: lea     rcx, dword_1801D95E8
 * 00000001800BFC39: call    sub_18000C538
 * 00000001800BFC3E: mov     rax, [rdi+rbx*8]
 * 00000001800BFC42: mov     ecx, [r15+rax]
 * 00000001800BFC46: cmp     cs:dword_1801D95EC, ecx
 * 00000001800BFC4C: jle     loc_1800BFD29
 * 00000001800BFC52: lea     rcx, dword_1801D95EC
 * 00000001800BFC59: call    sub_18000C5A0
 * 00000001800BFC5E: cmp     cs:dword_1801D95EC, r14d
 * 00000001800BFC65: jnz     loc_1800BFD29
 * 00000001800BFC6B: call    sub_1800B199C
 * 00000001800BFC70: mov     qword ptr [rbp+9E40h+var_8FD0], rax
 * 00000001800BFC77: add     rax, 1A50h
 * 00000001800BFC7D: mov     qword ptr [rbp+9E40h+var_8FD0+8], rax
 * 00000001800BFC84: movups  xmm7, [rbp+9E40h+var_8FD0]
 * 00000001800BFC8B: movups  [rbp+9E40h+var_6F10], xmm7
 * 00000001800BFC92: mov     dword ptr [rbp+9E40h+var_6F00], esi
 * 00000001800BFC98: mov     dword ptr [rbp+9E40h+var_6F00+4], esi
 * 00000001800BFC9E: movups  xmm6, [rbp+9E40h+var_6F00]
 * 00000001800BFCA5: call    sub_1800B1A0C
 * 00000001800BFCAA: mov     r8, rax
 * 00000001800BFCAD: mov     r9d, r12d
 * 00000001800BFCB0: mov     edx, 162h
 * 00000001800BFCB5: lea     rcx, [rbp+9E40h+var_EB0]; Src
 * 00000001800BFCBC: call    sub_18007C338
 * 00000001800BFCC1: nop
 * 00000001800BFCC2: mov     r8, rax
 * 00000001800BFCC5: mov     rdx, r13
 * 00000001800BFCC8: lea     rcx, [rbp+9E40h+var_ED0]
 * 00000001800BFCCF: call    sub_18001C6E8
 * 00000001800BFCD4: nop
 * 00000001800BFCD5: lea     r8, aVertex; "/Vertex"
 * 00000001800BFCDC: mov     rdx, rax
 * 00000001800BFCDF: lea     rcx, [rbp+9E40h+var_4BB0]
 * 00000001800BFCE6: call    sub_18001C61C
 * 00000001800BFCEB: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BFCF0: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BFCF5: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BFCFA: mov     rcx, rax
 * 00000001800BFCFD: call    sub_18007C3DC
 * 00000001800BFD02: nop
 * 00000001800BFD03: lea     rcx, [rbp+9E40h+var_ED0]
 * 00000001800BFD0A: call    sub_180010F30
 * 00000001800BFD0F: nop
 * 00000001800BFD10: lea     rcx, [rbp+9E40h+var_EB0]
 * 00000001800BFD17: call    sub_180010F30
 * 00000001800BFD1C: nop
 * 00000001800BFD1D: lea     rcx, dword_1801D95EC
 * 00000001800BFD24: call    sub_18000C538
 * 00000001800BFD29: mov     rax, [rdi+rbx*8]
 * 00000001800BFD2D: mov     ecx, [r15+rax]
 * 00000001800BFD31: cmp     cs:dword_1801D95F0, ecx
 * 00000001800BFD37: jle     loc_1800BFE14
 * 00000001800BFD3D: lea     rcx, dword_1801D95F0
 * 00000001800BFD44: call    sub_18000C5A0
 * 00000001800BFD49: cmp     cs:dword_1801D95F0, r14d
 * 00000001800BFD50: jnz     loc_1800BFE14
 * 00000001800BFD56: call    sub_1800B199C
 * 00000001800BFD5B: mov     qword ptr [rbp+9E40h+var_8FC0], rax
 * 00000001800BFD62: add     rax, 1A50h
 * 00000001800BFD68: mov     qword ptr [rbp+9E40h+var_8FC0+8], rax
 * 00000001800BFD6F: movups  xmm7, [rbp+9E40h+var_8FC0]
 * 00000001800BFD76: movups  [rbp+9E40h+var_6EF0], xmm7
 * 00000001800BFD7D: mov     dword ptr [rbp+9E40h+var_6EE0], esi
 * 00000001800BFD83: mov     dword ptr [rbp+9E40h+var_6EE0+4], esi
 * 00000001800BFD89: movups  xmm6, [rbp+9E40h+var_6EE0]
 * 00000001800BFD90: call    sub_1800B1A0C
 * 00000001800BFD95: mov     r8, rax
 * 00000001800BFD98: mov     r9d, r12d
 * 00000001800BFD9B: mov     edx, 168h
 * 00000001800BFDA0: lea     rcx, [rbp+9E40h+var_E50]; Src
 * 00000001800BFDA7: call    sub_18007C338
 * 00000001800BFDAC: nop
 * 00000001800BFDAD: mov     r8, rax
 * 00000001800BFDB0: mov     rdx, r13
 * 00000001800BFDB3: lea     rcx, [rbp+9E40h+var_E70]
 * 00000001800BFDBA: call    sub_18001C6E8
 * 00000001800BFDBF: nop
 * 00000001800BFDC0: lea     r8, aVertex; "/Vertex"
 * 00000001800BFDC7: mov     rdx, rax
 * 00000001800BFDCA: lea     rcx, [rbp+9E40h+var_4B90]
 * 00000001800BFDD1: call    sub_18001C61C
 * 00000001800BFDD6: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BFDDB: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BFDE0: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BFDE5: mov     rcx, rax
 * 00000001800BFDE8: call    sub_18007C3DC
 * 00000001800BFDED: nop
 * 00000001800BFDEE: lea     rcx, [rbp+9E40h+var_E70]
 * 00000001800BFDF5: call    sub_180010F30
 * 00000001800BFDFA: nop
 * 00000001800BFDFB: lea     rcx, [rbp+9E40h+var_E50]
 * 00000001800BFE02: call    sub_180010F30
 * 00000001800BFE07: nop
 * 00000001800BFE08: lea     rcx, dword_1801D95F0
 * 00000001800BFE0F: call    sub_18000C538
 * 00000001800BFE14: mov     rax, [rdi+rbx*8]
 * 00000001800BFE18: mov     ecx, [r15+rax]
 * 00000001800BFE1C: cmp     cs:dword_1801D95F4, ecx
 * 00000001800BFE22: jle     loc_1800BFEFF
 * 00000001800BFE28: lea     rcx, dword_1801D95F4
 * 00000001800BFE2F: call    sub_18000C5A0
 * 00000001800BFE34: cmp     cs:dword_1801D95F4, r14d
 * 00000001800BFE3B: jnz     loc_1800BFEFF
 * 00000001800BFE41: call    sub_1800B199C
 * 00000001800BFE46: mov     qword ptr [rbp+9E40h+var_8FB0], rax
 * 00000001800BFE4D: add     rax, 1A50h
 * 00000001800BFE53: mov     qword ptr [rbp+9E40h+var_8FB0+8], rax
 * 00000001800BFE5A: movups  xmm7, [rbp+9E40h+var_8FB0]
 * 00000001800BFE61: movups  [rbp+9E40h+var_6ED0], xmm7
 * 00000001800BFE68: mov     dword ptr [rbp+9E40h+var_6EC0], esi
 * 00000001800BFE6E: mov     dword ptr [rbp+9E40h+var_6EC0+4], esi
 * 00000001800BFE74: movups  xmm6, [rbp+9E40h+var_6EC0]
 * 00000001800BFE7B: call    sub_1800B1A0C
 * 00000001800BFE80: mov     r8, rax
 * 00000001800BFE83: mov     r9d, r12d
 * 00000001800BFE86: mov     edx, 16Ah
 * 00000001800BFE8B: lea     rcx, [rbp+9E40h+var_DF0]; Src
 * 00000001800BFE92: call    sub_18007C338
 * 00000001800BFE97: nop
 * 00000001800BFE98: mov     r8, rax
 * 00000001800BFE9B: mov     rdx, r13
 * 00000001800BFE9E: lea     rcx, [rbp+9E40h+var_E10]
 * 00000001800BFEA5: call    sub_18001C6E8
 * 00000001800BFEAA: nop
 * 00000001800BFEAB: lea     r8, aVertex; "/Vertex"
 * 00000001800BFEB2: mov     rdx, rax
 * 00000001800BFEB5: lea     rcx, [rbp+9E40h+var_4B70]
 * 00000001800BFEBC: call    sub_18001C61C
 * 00000001800BFEC1: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BFEC6: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BFECB: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BFED0: mov     rcx, rax
 * 00000001800BFED3: call    sub_18007C3DC
 * 00000001800BFED8: nop
 * 00000001800BFED9: lea     rcx, [rbp+9E40h+var_E10]
 * 00000001800BFEE0: call    sub_180010F30
 * 00000001800BFEE5: nop
 * 00000001800BFEE6: lea     rcx, [rbp+9E40h+var_DF0]
 * 00000001800BFEED: call    sub_180010F30
 * 00000001800BFEF2: nop
 * 00000001800BFEF3: lea     rcx, dword_1801D95F4
 * 00000001800BFEFA: call    sub_18000C538
 * 00000001800BFEFF: mov     rax, [rdi+rbx*8]
 * 00000001800BFF03: mov     ecx, [r15+rax]
 * 00000001800BFF07: cmp     cs:dword_1801D95F8, ecx
 * 00000001800BFF0D: jle     loc_1800BFFEA
 * 00000001800BFF13: lea     rcx, dword_1801D95F8
 * 00000001800BFF1A: call    sub_18000C5A0
 * 00000001800BFF1F: cmp     cs:dword_1801D95F8, r14d
 * 00000001800BFF26: jnz     loc_1800BFFEA
 * 00000001800BFF2C: call    sub_1800B199C
 * 00000001800BFF31: mov     qword ptr [rbp+9E40h+var_8FA0], rax
 * 00000001800BFF38: add     rax, 1A50h
 * 00000001800BFF3E: mov     qword ptr [rbp+9E40h+var_8FA0+8], rax
 * 00000001800BFF45: movups  xmm7, [rbp+9E40h+var_8FA0]
 * 00000001800BFF4C: movups  [rbp+9E40h+var_6EB0], xmm7
 * 00000001800BFF53: mov     dword ptr [rbp+9E40h+var_6EA0], esi
 * 00000001800BFF59: mov     dword ptr [rbp+9E40h+var_6EA0+4], esi
 * 00000001800BFF5F: movups  xmm6, [rbp+9E40h+var_6EA0]
 * 00000001800BFF66: call    sub_1800B1A0C
 * 00000001800BFF6B: mov     r8, rax
 * 00000001800BFF6E: mov     r9d, r12d
 * 00000001800BFF71: mov     edx, 170h
 * 00000001800BFF76: lea     rcx, [rbp+9E40h+var_D90]; Src
 * 00000001800BFF7D: call    sub_18007C338
 * 00000001800BFF82: nop
 * 00000001800BFF83: mov     r8, rax
 * 00000001800BFF86: mov     rdx, r13
 * 00000001800BFF89: lea     rcx, [rbp+9E40h+var_DB0]
 * 00000001800BFF90: call    sub_18001C6E8
 * 00000001800BFF95: nop
 * 00000001800BFF96: lea     r8, aVertex; "/Vertex"
 * 00000001800BFF9D: mov     rdx, rax
 * 00000001800BFFA0: lea     rcx, [rbp+9E40h+var_4B50]
 * 00000001800BFFA7: call    sub_18001C61C
 * 00000001800BFFAC: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800BFFB1: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800BFFB6: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800BFFBB: mov     rcx, rax
 * 00000001800BFFBE: call    sub_18007C3DC
 * 00000001800BFFC3: nop
 * 00000001800BFFC4: lea     rcx, [rbp+9E40h+var_DB0]
 * 00000001800BFFCB: call    sub_180010F30
 * 00000001800BFFD0: nop
 * 00000001800BFFD1: lea     rcx, [rbp+9E40h+var_D90]
 * 00000001800BFFD8: call    sub_180010F30
 * 00000001800BFFDD: nop
 * 00000001800BFFDE: lea     rcx, dword_1801D95F8
 * 00000001800BFFE5: call    sub_18000C538
 * 00000001800BFFEA: mov     rax, [rdi+rbx*8]
 * 00000001800BFFEE: mov     ecx, [r15+rax]
 * 00000001800BFFF2: cmp     cs:dword_1801D95FC, ecx
 * 00000001800BFFF8: jle     loc_1800C00D5
 * 00000001800BFFFE: lea     rcx, dword_1801D95FC
 * 00000001800C0005: call    sub_18000C5A0
 * 00000001800C000A: cmp     cs:dword_1801D95FC, r14d
 * 00000001800C0011: jnz     loc_1800C00D5
 * 00000001800C0017: call    sub_1800B199C
 * 00000001800C001C: mov     qword ptr [rbp+9E40h+var_8D60], rax
 * 00000001800C0023: add     rax, 1A50h
 * 00000001800C0029: mov     qword ptr [rbp+9E40h+var_8D60+8], rax
 * 00000001800C0030: movups  xmm7, [rbp+9E40h+var_8D60]
 * 00000001800C0037: movups  [rbp+9E40h+var_6E90], xmm7
 * 00000001800C003E: mov     dword ptr [rbp+9E40h+var_6E80], esi
 * 00000001800C0044: mov     dword ptr [rbp+9E40h+var_6E80+4], esi
 * 00000001800C004A: movups  xmm6, [rbp+9E40h+var_6E80]
 * 00000001800C0051: call    sub_1800B1A0C
 * 00000001800C0056: mov     r8, rax
 * 00000001800C0059: mov     r9d, r12d
 * 00000001800C005C: mov     edx, 172h
 * 00000001800C0061: lea     rcx, [rbp+9E40h+var_D30]; Src
 * 00000001800C0068: call    sub_18007C338
 * 00000001800C006D: nop
 * 00000001800C006E: mov     r8, rax
 * 00000001800C0071: mov     rdx, r13
 * 00000001800C0074: lea     rcx, [rbp+9E40h+var_D50]
 * 00000001800C007B: call    sub_18001C6E8
 * 00000001800C0080: nop
 * 00000001800C0081: lea     r8, aVertex; "/Vertex"
 * 00000001800C0088: mov     rdx, rax
 * 00000001800C008B: lea     rcx, [rbp+9E40h+var_4B30]
 * 00000001800C0092: call    sub_18001C61C
 * 00000001800C0097: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C009C: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C00A1: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C00A6: mov     rcx, rax
 * 00000001800C00A9: call    sub_18007C3DC
 * 00000001800C00AE: nop
 * 00000001800C00AF: lea     rcx, [rbp+9E40h+var_D50]
 * 00000001800C00B6: call    sub_180010F30
 * 00000001800C00BB: nop
 * 00000001800C00BC: lea     rcx, [rbp+9E40h+var_D30]
 * 00000001800C00C3: call    sub_180010F30
 * 00000001800C00C8: nop
 * 00000001800C00C9: lea     rcx, dword_1801D95FC
 * 00000001800C00D0: call    sub_18000C538
 * 00000001800C00D5: mov     rax, [rdi+rbx*8]
 * 00000001800C00D9: mov     ecx, [r15+rax]
 * 00000001800C00DD: cmp     cs:dword_1801D9600, ecx
 * 00000001800C00E3: jle     loc_1800C01C0
 * 00000001800C00E9: lea     rcx, dword_1801D9600
 * 00000001800C00F0: call    sub_18000C5A0
 * 00000001800C00F5: cmp     cs:dword_1801D9600, r14d
 * 00000001800C00FC: jnz     loc_1800C01C0
 * 00000001800C0102: call    sub_1800B199C
 * 00000001800C0107: mov     qword ptr [rbp+9E40h+var_8F80], rax
 * 00000001800C010E: add     rax, 1A50h
 * 00000001800C0114: mov     qword ptr [rbp+9E40h+var_8F80+8], rax
 * 00000001800C011B: movups  xmm7, [rbp+9E40h+var_8F80]
 * 00000001800C0122: movups  [rbp+9E40h+var_6E70], xmm7
 * 00000001800C0129: mov     dword ptr [rbp+9E40h+var_6E60], esi
 * 00000001800C012F: mov     dword ptr [rbp+9E40h+var_6E60+4], esi
 * 00000001800C0135: movups  xmm6, [rbp+9E40h+var_6E60]
 * 00000001800C013C: call    sub_1800B1A0C
 * 00000001800C0141: mov     r8, rax
 * 00000001800C0144: mov     r9d, r12d
 * 00000001800C0147: mov     edx, 178h
 * 00000001800C014C: lea     rcx, [rbp+9E40h+var_CD0]; Src
 * 00000001800C0153: call    sub_18007C338
 * 00000001800C0158: nop
 * 00000001800C0159: mov     r8, rax
 * 00000001800C015C: mov     rdx, r13
 * 00000001800C015F: lea     rcx, [rbp+9E40h+var_CF0]
 * 00000001800C0166: call    sub_18001C6E8
 * 00000001800C016B: nop
 * 00000001800C016C: lea     r8, aVertex; "/Vertex"
 * 00000001800C0173: mov     rdx, rax
 * 00000001800C0176: lea     rcx, [rbp+9E40h+var_4B10]
 * 00000001800C017D: call    sub_18001C61C
 * 00000001800C0182: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C0187: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C018C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C0191: mov     rcx, rax
 * 00000001800C0194: call    sub_18007C3DC
 * 00000001800C0199: nop
 * 00000001800C019A: lea     rcx, [rbp+9E40h+var_CF0]
 * 00000001800C01A1: call    sub_180010F30
 * 00000001800C01A6: nop
 * 00000001800C01A7: lea     rcx, [rbp+9E40h+var_CD0]
 * 00000001800C01AE: call    sub_180010F30
 * 00000001800C01B3: nop
 * 00000001800C01B4: lea     rcx, dword_1801D9600
 * 00000001800C01BB: call    sub_18000C538
 * 00000001800C01C0: mov     rax, [rdi+rbx*8]
 * 00000001800C01C4: mov     ecx, [r15+rax]
 * 00000001800C01C8: cmp     cs:dword_1801D9604, ecx
 * 00000001800C01CE: jle     loc_1800C02AB
 * 00000001800C01D4: lea     rcx, dword_1801D9604
 * 00000001800C01DB: call    sub_18000C5A0
 * 00000001800C01E0: cmp     cs:dword_1801D9604, r14d
 * 00000001800C01E7: jnz     loc_1800C02AB
 * 00000001800C01ED: call    sub_1800B199C
 * 00000001800C01F2: mov     qword ptr [rbp+9E40h+var_8F70], rax
 * 00000001800C01F9: add     rax, 1A50h
 * 00000001800C01FF: mov     qword ptr [rbp+9E40h+var_8F70+8], rax
 * 00000001800C0206: movups  xmm7, [rbp+9E40h+var_8F70]
 * 00000001800C020D: movups  [rbp+9E40h+var_6E50], xmm7
 * 00000001800C0214: mov     dword ptr [rbp+9E40h+var_6E40], esi
 * 00000001800C021A: mov     dword ptr [rbp+9E40h+var_6E40+4], esi
 * 00000001800C0220: movups  xmm6, [rbp+9E40h+var_6E40]
 * 00000001800C0227: call    sub_1800B1A0C
 * 00000001800C022C: mov     r8, rax
 * 00000001800C022F: mov     r9d, r12d
 * 00000001800C0232: mov     edx, 17Ah
 * 00000001800C0237: lea     rcx, [rbp+9E40h+var_C70]; Src
 * 00000001800C023E: call    sub_18007C338
 * 00000001800C0243: nop
 * 00000001800C0244: mov     r8, rax
 * 00000001800C0247: mov     rdx, r13
 * 00000001800C024A: lea     rcx, [rbp+9E40h+var_C90]
 * 00000001800C0251: call    sub_18001C6E8
 * 00000001800C0256: nop
 * 00000001800C0257: lea     r8, aVertex; "/Vertex"
 * 00000001800C025E: mov     rdx, rax
 * 00000001800C0261: lea     rcx, [rbp+9E40h+var_4AF0]
 * 00000001800C0268: call    sub_18001C61C
 * 00000001800C026D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C0272: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C0277: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C027C: mov     rcx, rax
 * 00000001800C027F: call    sub_18007C3DC
 * 00000001800C0284: nop
 * 00000001800C0285: lea     rcx, [rbp+9E40h+var_C90]
 * 00000001800C028C: call    sub_180010F30
 * 00000001800C0291: nop
 * 00000001800C0292: lea     rcx, [rbp+9E40h+var_C70]
 * 00000001800C0299: call    sub_180010F30
 * 00000001800C029E: nop
 * 00000001800C029F: lea     rcx, dword_1801D9604
 * 00000001800C02A6: call    sub_18000C538
 * 00000001800C02AB: mov     rax, [rdi+rbx*8]
 * 00000001800C02AF: mov     ecx, [r15+rax]
 * 00000001800C02B3: cmp     cs:dword_1801D9608, ecx
 * 00000001800C02B9: jle     loc_1800C0396
 * 00000001800C02BF: lea     rcx, dword_1801D9608
 * 00000001800C02C6: call    sub_18000C5A0
 * 00000001800C02CB: cmp     cs:dword_1801D9608, r14d
 * 00000001800C02D2: jnz     loc_1800C0396
 * 00000001800C02D8: call    sub_1800B198C
 * 00000001800C02DD: mov     qword ptr [rbp+9E40h+var_8F60], rax
 * 00000001800C02E4: add     rax, 1050h
 * 00000001800C02EA: mov     qword ptr [rbp+9E40h+var_8F60+8], rax
 * 00000001800C02F1: movups  xmm7, [rbp+9E40h+var_8F60]
 * 00000001800C02F8: movups  [rbp+9E40h+var_6E30], xmm7
 * 00000001800C02FF: mov     dword ptr [rbp+9E40h+var_6E20], esi
 * 00000001800C0305: mov     dword ptr [rbp+9E40h+var_6E20+4], esi
 * 00000001800C030B: movups  xmm6, [rbp+9E40h+var_6E20]
 * 00000001800C0312: call    sub_1800B1A0C
 * 00000001800C0317: mov     r8, rax
 * 00000001800C031A: mov     r9d, r12d
 * 00000001800C031D: mov     edx, 180h
 * 00000001800C0322: lea     rcx, [rbp+9E40h+var_C10]; Src
 * 00000001800C0329: call    sub_18007C338
 * 00000001800C032E: nop
 * 00000001800C032F: mov     r8, rax
 * 00000001800C0332: mov     rdx, r13
 * 00000001800C0335: lea     rcx, [rbp+9E40h+var_C30]
 * 00000001800C033C: call    sub_18001C6E8
 * 00000001800C0341: nop
 * 00000001800C0342: lea     r8, aVertex; "/Vertex"
 * 00000001800C0349: mov     rdx, rax
 * 00000001800C034C: lea     rcx, [rbp+9E40h+var_4AD0]
 * 00000001800C0353: call    sub_18001C61C
 * 00000001800C0358: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C035D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C0362: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C0367: mov     rcx, rax
 * 00000001800C036A: call    sub_18007C3DC
 * 00000001800C036F: nop
 * 00000001800C0370: lea     rcx, [rbp+9E40h+var_C30]
 * 00000001800C0377: call    sub_180010F30
 * 00000001800C037C: nop
 * 00000001800C037D: lea     rcx, [rbp+9E40h+var_C10]
 * 00000001800C0384: call    sub_180010F30
 * 00000001800C0389: nop
 * 00000001800C038A: lea     rcx, dword_1801D9608
 * 00000001800C0391: call    sub_18000C538
 * 00000001800C0396: mov     rax, [rdi+rbx*8]
 * 00000001800C039A: mov     ecx, [r15+rax]
 * 00000001800C039E: cmp     cs:dword_1801D960C, ecx
 * 00000001800C03A4: jle     loc_1800C0481
 * 00000001800C03AA: lea     rcx, dword_1801D960C
 * 00000001800C03B1: call    sub_18000C5A0
 * 00000001800C03B6: cmp     cs:dword_1801D960C, r14d
 * 00000001800C03BD: jnz     loc_1800C0481
 * 00000001800C03C3: call    sub_1800B198C
 * 00000001800C03C8: mov     qword ptr [rbp+9E40h+var_8F50], rax
 * 00000001800C03CF: add     rax, 1050h
 * 00000001800C03D5: mov     qword ptr [rbp+9E40h+var_8F50+8], rax
 * 00000001800C03DC: movups  xmm7, [rbp+9E40h+var_8F50]
 * 00000001800C03E3: movups  [rbp+9E40h+var_6E10], xmm7
 * 00000001800C03EA: mov     dword ptr [rbp+9E40h+var_6E00], esi
 * 00000001800C03F0: mov     dword ptr [rbp+9E40h+var_6E00+4], esi
 * 00000001800C03F6: movups  xmm6, [rbp+9E40h+var_6E00]
 * 00000001800C03FD: call    sub_1800B1A0C
 * 00000001800C0402: mov     r8, rax
 * 00000001800C0405: mov     r9d, r12d
 * 00000001800C0408: mov     edx, 182h
 * 00000001800C040D: lea     rcx, [rbp+9E40h+var_BB0]; Src
 * 00000001800C0414: call    sub_18007C338
 * 00000001800C0419: nop
 * 00000001800C041A: mov     r8, rax
 * 00000001800C041D: mov     rdx, r13
 * 00000001800C0420: lea     rcx, [rbp+9E40h+var_BD0]
 * 00000001800C0427: call    sub_18001C6E8
 * 00000001800C042C: nop
 * 00000001800C042D: lea     r8, aVertex; "/Vertex"
 * 00000001800C0434: mov     rdx, rax
 * 00000001800C0437: lea     rcx, [rbp+9E40h+var_4AB0]
 * 00000001800C043E: call    sub_18001C61C
 * 00000001800C0443: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C0448: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C044D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C0452: mov     rcx, rax
 * 00000001800C0455: call    sub_18007C3DC
 * 00000001800C045A: nop
 * 00000001800C045B: lea     rcx, [rbp+9E40h+var_BD0]
 * 00000001800C0462: call    sub_180010F30
 * 00000001800C0467: nop
 * 00000001800C0468: lea     rcx, [rbp+9E40h+var_BB0]
 * 00000001800C046F: call    sub_180010F30
 * 00000001800C0474: nop
 * 00000001800C0475: lea     rcx, dword_1801D960C
 * 00000001800C047C: call    sub_18000C538
 * 00000001800C0481: mov     rax, [rdi+rbx*8]
 * 00000001800C0485: mov     ecx, [r15+rax]
 * 00000001800C0489: cmp     cs:dword_1801D9610, ecx
 * 00000001800C048F: jle     loc_1800C056C
 * 00000001800C0495: lea     rcx, dword_1801D9610
 * 00000001800C049C: call    sub_18000C5A0
 * 00000001800C04A1: cmp     cs:dword_1801D9610, r14d
 * 00000001800C04A8: jnz     loc_1800C056C
 * 00000001800C04AE: call    sub_1800B198C
 * 00000001800C04B3: mov     qword ptr [rbp+9E40h+var_8F40], rax
 * 00000001800C04BA: add     rax, 1050h
 * 00000001800C04C0: mov     qword ptr [rbp+9E40h+var_8F40+8], rax
 * 00000001800C04C7: movups  xmm7, [rbp+9E40h+var_8F40]
 * 00000001800C04CE: movups  [rbp+9E40h+var_6DF0], xmm7
 * 00000001800C04D5: mov     dword ptr [rbp+9E40h+var_6DE0], esi
 * 00000001800C04DB: mov     dword ptr [rbp+9E40h+var_6DE0+4], esi
 * 00000001800C04E1: movups  xmm6, [rbp+9E40h+var_6DE0]
 * 00000001800C04E8: call    sub_1800B1A0C
 * 00000001800C04ED: mov     r8, rax
 * 00000001800C04F0: mov     r9d, r12d
 * 00000001800C04F3: mov     edx, 188h
 * 00000001800C04F8: lea     rcx, [rbp+9E40h+var_B50]; Src
 * 00000001800C04FF: call    sub_18007C338
 * 00000001800C0504: nop
 * 00000001800C0505: mov     r8, rax
 * 00000001800C0508: mov     rdx, r13
 * 00000001800C050B: lea     rcx, [rbp+9E40h+var_B70]
 * 00000001800C0512: call    sub_18001C6E8
 * 00000001800C0517: nop
 * 00000001800C0518: lea     r8, aVertex; "/Vertex"
 * 00000001800C051F: mov     rdx, rax
 * 00000001800C0522: lea     rcx, [rbp+9E40h+var_4A90]
 * 00000001800C0529: call    sub_18001C61C
 * 00000001800C052E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C0533: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C0538: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C053D: mov     rcx, rax
 * 00000001800C0540: call    sub_18007C3DC
 * 00000001800C0545: nop
 * 00000001800C0546: lea     rcx, [rbp+9E40h+var_B70]
 * 00000001800C054D: call    sub_180010F30
 * 00000001800C0552: nop
 * 00000001800C0553: lea     rcx, [rbp+9E40h+var_B50]
 * 00000001800C055A: call    sub_180010F30
 * 00000001800C055F: nop
 * 00000001800C0560: lea     rcx, dword_1801D9610
 * 00000001800C0567: call    sub_18000C538
 * 00000001800C056C: mov     rax, [rdi+rbx*8]
 * 00000001800C0570: mov     ecx, [r15+rax]
 * 00000001800C0574: cmp     cs:dword_1801D9614, ecx
 * 00000001800C057A: jle     loc_1800C0657
 * 00000001800C0580: lea     rcx, dword_1801D9614
 * 00000001800C0587: call    sub_18000C5A0
 * 00000001800C058C: cmp     cs:dword_1801D9614, r14d
 * 00000001800C0593: jnz     loc_1800C0657
 * 00000001800C0599: call    sub_1800B198C
 * 00000001800C059E: mov     qword ptr [rbp+9E40h+var_8F30], rax
 * 00000001800C05A5: add     rax, 1050h
 * 00000001800C05AB: mov     qword ptr [rbp+9E40h+var_8F30+8], rax
 * 00000001800C05B2: movups  xmm7, [rbp+9E40h+var_8F30]
 * 00000001800C05B9: movups  [rbp+9E40h+var_6DD0], xmm7
 * 00000001800C05C0: mov     dword ptr [rbp+9E40h+var_6DC0], esi
 * 00000001800C05C6: mov     dword ptr [rbp+9E40h+var_6DC0+4], esi
 * 00000001800C05CC: movups  xmm6, [rbp+9E40h+var_6DC0]
 * 00000001800C05D3: call    sub_1800B1A0C
 * 00000001800C05D8: mov     r8, rax
 * 00000001800C05DB: mov     r9d, r12d
 * 00000001800C05DE: mov     edx, 18Ah
 * 00000001800C05E3: lea     rcx, [rbp+9E40h+var_AF0]; Src
 * 00000001800C05EA: call    sub_18007C338
 * 00000001800C05EF: nop
 * 00000001800C05F0: mov     r8, rax
 * 00000001800C05F3: mov     rdx, r13
 * 00000001800C05F6: lea     rcx, [rbp+9E40h+var_B10]
 * 00000001800C05FD: call    sub_18001C6E8
 * 00000001800C0602: nop
 * 00000001800C0603: lea     r8, aVertex; "/Vertex"
 * 00000001800C060A: mov     rdx, rax
 * 00000001800C060D: lea     rcx, [rbp+9E40h+var_4A70]
 * 00000001800C0614: call    sub_18001C61C
 * 00000001800C0619: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C061E: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C0623: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C0628: mov     rcx, rax
 * 00000001800C062B: call    sub_18007C3DC
 * 00000001800C0630: nop
 * 00000001800C0631: lea     rcx, [rbp+9E40h+var_B10]
 * 00000001800C0638: call    sub_180010F30
 * 00000001800C063D: nop
 * 00000001800C063E: lea     rcx, [rbp+9E40h+var_AF0]
 * 00000001800C0645: call    sub_180010F30
 * 00000001800C064A: nop
 * 00000001800C064B: lea     rcx, dword_1801D9614
 * 00000001800C0652: call    sub_18000C538
 * 00000001800C0657: mov     rax, [rdi+rbx*8]
 * 00000001800C065B: mov     ecx, [r15+rax]
 * 00000001800C065F: cmp     cs:dword_1801D9618, ecx
 * 00000001800C0665: jle     loc_1800C0742
 * 00000001800C066B: lea     rcx, dword_1801D9618
 * 00000001800C0672: call    sub_18000C5A0
 * 00000001800C0677: cmp     cs:dword_1801D9618, r14d
 * 00000001800C067E: jnz     loc_1800C0742
 * 00000001800C0684: call    sub_1800B198C
 * 00000001800C0689: mov     qword ptr [rbp+9E40h+var_8F20], rax
 * 00000001800C0690: add     rax, 1050h
 * 00000001800C0696: mov     qword ptr [rbp+9E40h+var_8F20+8], rax
 * 00000001800C069D: movups  xmm7, [rbp+9E40h+var_8F20]
 * 00000001800C06A4: movups  [rbp+9E40h+var_6DB0], xmm7
 * 00000001800C06AB: mov     dword ptr [rbp+9E40h+var_6DA0], esi
 * 00000001800C06B1: mov     dword ptr [rbp+9E40h+var_6DA0+4], esi
 * 00000001800C06B7: movups  xmm6, [rbp+9E40h+var_6DA0]
 * 00000001800C06BE: call    sub_1800B1A0C
 * 00000001800C06C3: mov     r8, rax
 * 00000001800C06C6: mov     r9d, r12d
 * 00000001800C06C9: mov     edx, 190h
 * 00000001800C06CE: lea     rcx, [rbp+9E40h+var_A90]; Src
 * 00000001800C06D5: call    sub_18007C338
 * 00000001800C06DA: nop
 * 00000001800C06DB: mov     r8, rax
 * 00000001800C06DE: mov     rdx, r13
 * 00000001800C06E1: lea     rcx, [rbp+9E40h+var_AB0]
 * 00000001800C06E8: call    sub_18001C6E8
 * 00000001800C06ED: nop
 * 00000001800C06EE: lea     r8, aVertex; "/Vertex"
 * 00000001800C06F5: mov     rdx, rax
 * 00000001800C06F8: lea     rcx, [rbp+9E40h+var_4A50]
 * 00000001800C06FF: call    sub_18001C61C
 * 00000001800C0704: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C0709: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C070E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C0713: mov     rcx, rax
 * 00000001800C0716: call    sub_18007C3DC
 * 00000001800C071B: nop
 * 00000001800C071C: lea     rcx, [rbp+9E40h+var_AB0]
 * 00000001800C0723: call    sub_180010F30
 * 00000001800C0728: nop
 * 00000001800C0729: lea     rcx, [rbp+9E40h+var_A90]
 * 00000001800C0730: call    sub_180010F30
 * 00000001800C0735: nop
 * 00000001800C0736: lea     rcx, dword_1801D9618
 * 00000001800C073D: call    sub_18000C538
 * 00000001800C0742: mov     rax, [rdi+rbx*8]
 * 00000001800C0746: mov     ecx, [r15+rax]
 * 00000001800C074A: cmp     cs:dword_1801D961C, ecx
 * 00000001800C0750: jle     loc_1800C082D
 * 00000001800C0756: lea     rcx, dword_1801D961C
 * 00000001800C075D: call    sub_18000C5A0
 * 00000001800C0762: cmp     cs:dword_1801D961C, r14d
 * 00000001800C0769: jnz     loc_1800C082D
 * 00000001800C076F: call    sub_1800B198C
 * 00000001800C0774: mov     qword ptr [rbp+9E40h+var_8F10], rax
 * 00000001800C077B: add     rax, 1050h
 * 00000001800C0781: mov     qword ptr [rbp+9E40h+var_8F10+8], rax
 * 00000001800C0788: movups  xmm7, [rbp+9E40h+var_8F10]
 * 00000001800C078F: movups  [rbp+9E40h+var_6D90], xmm7
 * 00000001800C0796: mov     dword ptr [rbp+9E40h+var_6D80], esi
 * 00000001800C079C: mov     dword ptr [rbp+9E40h+var_6D80+4], esi
 * 00000001800C07A2: movups  xmm6, [rbp+9E40h+var_6D80]
 * 00000001800C07A9: call    sub_1800B1A0C
 * 00000001800C07AE: mov     r8, rax
 * 00000001800C07B1: mov     r9d, r12d
 * 00000001800C07B4: mov     edx, 192h
 * 00000001800C07B9: lea     rcx, [rbp+9E40h+var_A30]; Src
 * 00000001800C07C0: call    sub_18007C338
 * 00000001800C07C5: nop
 * 00000001800C07C6: mov     r8, rax
 * 00000001800C07C9: mov     rdx, r13
 * 00000001800C07CC: lea     rcx, [rbp+9E40h+var_A50]
 * 00000001800C07D3: call    sub_18001C6E8
 * 00000001800C07D8: nop
 * 00000001800C07D9: lea     r8, aVertex; "/Vertex"
 * 00000001800C07E0: mov     rdx, rax
 * 00000001800C07E3: lea     rcx, [rbp+9E40h+var_4A30]
 * 00000001800C07EA: call    sub_18001C61C
 * 00000001800C07EF: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C07F4: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C07F9: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C07FE: mov     rcx, rax
 * 00000001800C0801: call    sub_18007C3DC
 * 00000001800C0806: nop
 * 00000001800C0807: lea     rcx, [rbp+9E40h+var_A50]
 * 00000001800C080E: call    sub_180010F30
 * 00000001800C0813: nop
 * 00000001800C0814: lea     rcx, [rbp+9E40h+var_A30]
 * 00000001800C081B: call    sub_180010F30
 * 00000001800C0820: nop
 * 00000001800C0821: lea     rcx, dword_1801D961C
 * 00000001800C0828: call    sub_18000C538
 * 00000001800C082D: mov     rax, [rdi+rbx*8]
 * 00000001800C0831: mov     ecx, [r15+rax]
 * 00000001800C0835: cmp     cs:dword_1801D9620, ecx
 * 00000001800C083B: jle     loc_1800C0918
 * 00000001800C0841: lea     rcx, dword_1801D9620
 * 00000001800C0848: call    sub_18000C5A0
 * 00000001800C084D: cmp     cs:dword_1801D9620, r14d
 * 00000001800C0854: jnz     loc_1800C0918
 * 00000001800C085A: call    sub_1800B198C
 * 00000001800C085F: mov     qword ptr [rbp+9E40h+var_8F00], rax
 * 00000001800C0866: add     rax, 1050h
 * 00000001800C086C: mov     qword ptr [rbp+9E40h+var_8F00+8], rax
 * 00000001800C0873: movups  xmm7, [rbp+9E40h+var_8F00]
 * 00000001800C087A: movups  [rbp+9E40h+var_6D70], xmm7
 * 00000001800C0881: mov     dword ptr [rbp+9E40h+var_6D60], esi
 * 00000001800C0887: mov     dword ptr [rbp+9E40h+var_6D60+4], esi
 * 00000001800C088D: movups  xmm6, [rbp+9E40h+var_6D60]
 * 00000001800C0894: call    sub_1800B1A0C
 * 00000001800C0899: mov     r8, rax
 * 00000001800C089C: mov     r9d, r12d
 * 00000001800C089F: mov     edx, 198h
 * 00000001800C08A4: lea     rcx, [rbp+9E40h+var_9D0]; Src
 * 00000001800C08AB: call    sub_18007C338
 * 00000001800C08B0: nop
 * 00000001800C08B1: mov     r8, rax
 * 00000001800C08B4: mov     rdx, r13
 * 00000001800C08B7: lea     rcx, [rbp+9E40h+var_9F0]
 * 00000001800C08BE: call    sub_18001C6E8
 * 00000001800C08C3: nop
 * 00000001800C08C4: lea     r8, aVertex; "/Vertex"
 * 00000001800C08CB: mov     rdx, rax
 * 00000001800C08CE: lea     rcx, [rbp+9E40h+var_4A10]
 * 00000001800C08D5: call    sub_18001C61C
 * 00000001800C08DA: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C08DF: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C08E4: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C08E9: mov     rcx, rax
 * 00000001800C08EC: call    sub_18007C3DC
 * 00000001800C08F1: nop
 * 00000001800C08F2: lea     rcx, [rbp+9E40h+var_9F0]
 * 00000001800C08F9: call    sub_180010F30
 * 00000001800C08FE: nop
 * 00000001800C08FF: lea     rcx, [rbp+9E40h+var_9D0]
 * 00000001800C0906: call    sub_180010F30
 * 00000001800C090B: nop
 * 00000001800C090C: lea     rcx, dword_1801D9620
 * 00000001800C0913: call    sub_18000C538
 * 00000001800C0918: mov     rax, [rdi+rbx*8]
 * 00000001800C091C: mov     ecx, [r15+rax]
 * 00000001800C0920: cmp     cs:dword_1801D9624, ecx
 * 00000001800C0926: jle     loc_1800C0A03
 * 00000001800C092C: lea     rcx, dword_1801D9624
 * 00000001800C0933: call    sub_18000C5A0
 * 00000001800C0938: cmp     cs:dword_1801D9624, r14d
 * 00000001800C093F: jnz     loc_1800C0A03
 * 00000001800C0945: call    sub_1800B198C
 * 00000001800C094A: mov     qword ptr [rbp+9E40h+var_8EF0], rax
 * 00000001800C0951: add     rax, 1050h
 * 00000001800C0957: mov     qword ptr [rbp+9E40h+var_8EF0+8], rax
 * 00000001800C095E: movups  xmm7, [rbp+9E40h+var_8EF0]
 * 00000001800C0965: movups  [rbp+9E40h+var_6D50], xmm7
 * 00000001800C096C: mov     dword ptr [rbp+9E40h+var_6D40], esi
 * 00000001800C0972: mov     dword ptr [rbp+9E40h+var_6D40+4], esi
 * 00000001800C0978: movups  xmm6, [rbp+9E40h+var_6D40]
 * 00000001800C097F: call    sub_1800B1A0C
 * 00000001800C0984: mov     r8, rax
 * 00000001800C0987: mov     r9d, r12d
 * 00000001800C098A: mov     edx, 19Ah
 * 00000001800C098F: lea     rcx, [rbp+9E40h+var_970]; Src
 * 00000001800C0996: call    sub_18007C338
 * 00000001800C099B: nop
 * 00000001800C099C: mov     r8, rax
 * 00000001800C099F: mov     rdx, r13
 * 00000001800C09A2: lea     rcx, [rbp+9E40h+var_990]
 * 00000001800C09A9: call    sub_18001C6E8
 * 00000001800C09AE: nop
 * 00000001800C09AF: lea     r8, aVertex; "/Vertex"
 * 00000001800C09B6: mov     rdx, rax
 * 00000001800C09B9: lea     rcx, [rbp+9E40h+var_49F0]
 * 00000001800C09C0: call    sub_18001C61C
 * 00000001800C09C5: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C09CA: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C09CF: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C09D4: mov     rcx, rax
 * 00000001800C09D7: call    sub_18007C3DC
 * 00000001800C09DC: nop
 * 00000001800C09DD: lea     rcx, [rbp+9E40h+var_990]
 * 00000001800C09E4: call    sub_180010F30
 * 00000001800C09E9: nop
 * 00000001800C09EA: lea     rcx, [rbp+9E40h+var_970]
 * 00000001800C09F1: call    sub_180010F30
 * 00000001800C09F6: nop
 * 00000001800C09F7: lea     rcx, dword_1801D9624
 * 00000001800C09FE: call    sub_18000C538
 * 00000001800C0A03: mov     rax, [rdi+rbx*8]
 * 00000001800C0A07: mov     ecx, [r15+rax]
 * 00000001800C0A0B: cmp     cs:dword_1801D9628, ecx
 * 00000001800C0A11: jle     loc_1800C0AEE
 * 00000001800C0A17: lea     rcx, dword_1801D9628
 * 00000001800C0A1E: call    sub_18000C5A0
 * 00000001800C0A23: cmp     cs:dword_1801D9628, r14d
 * 00000001800C0A2A: jnz     loc_1800C0AEE
 * 00000001800C0A30: call    sub_1800B199C
 * 00000001800C0A35: mov     qword ptr [rbp+9E40h+var_8EE0], rax
 * 00000001800C0A3C: add     rax, 1A50h
 * 00000001800C0A42: mov     qword ptr [rbp+9E40h+var_8EE0+8], rax
 * 00000001800C0A49: movups  xmm7, [rbp+9E40h+var_8EE0]
 * 00000001800C0A50: movups  [rbp+9E40h+var_6D30], xmm7
 * 00000001800C0A57: mov     dword ptr [rbp+9E40h+var_6D20], esi
 * 00000001800C0A5D: mov     dword ptr [rbp+9E40h+var_6D20+4], esi
 * 00000001800C0A63: movups  xmm6, [rbp+9E40h+var_6D20]
 * 00000001800C0A6A: call    sub_1800B1A0C
 * 00000001800C0A6F: mov     r8, rax
 * 00000001800C0A72: mov     r9d, r12d
 * 00000001800C0A75: mov     edx, 1A0h
 * 00000001800C0A7A: lea     rcx, [rbp+9E40h+var_910]; Src
 * 00000001800C0A81: call    sub_18007C338
 * 00000001800C0A86: nop
 * 00000001800C0A87: mov     r8, rax
 * 00000001800C0A8A: mov     rdx, r13
 * 00000001800C0A8D: lea     rcx, [rbp+9E40h+var_930]
 * 00000001800C0A94: call    sub_18001C6E8
 * 00000001800C0A99: nop
 * 00000001800C0A9A: lea     r8, aVertex; "/Vertex"
 * 00000001800C0AA1: mov     rdx, rax
 * 00000001800C0AA4: lea     rcx, [rbp+9E40h+var_49D0]
 * 00000001800C0AAB: call    sub_18001C61C
 * 00000001800C0AB0: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C0AB5: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C0ABA: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C0ABF: mov     rcx, rax
 * 00000001800C0AC2: call    sub_18007C3DC
 * 00000001800C0AC7: nop
 * 00000001800C0AC8: lea     rcx, [rbp+9E40h+var_930]
 * 00000001800C0ACF: call    sub_180010F30
 * 00000001800C0AD4: nop
 * 00000001800C0AD5: lea     rcx, [rbp+9E40h+var_910]
 * 00000001800C0ADC: call    sub_180010F30
 * 00000001800C0AE1: nop
 * 00000001800C0AE2: lea     rcx, dword_1801D9628
 * 00000001800C0AE9: call    sub_18000C538
 * 00000001800C0AEE: mov     rax, [rdi+rbx*8]
 * 00000001800C0AF2: mov     ecx, [r15+rax]
 * 00000001800C0AF6: cmp     cs:dword_1801D962C, ecx
 * 00000001800C0AFC: jle     loc_1800C0BD9
 * 00000001800C0B02: lea     rcx, dword_1801D962C
 * 00000001800C0B09: call    sub_18000C5A0
 * 00000001800C0B0E: cmp     cs:dword_1801D962C, r14d
 * 00000001800C0B15: jnz     loc_1800C0BD9
 * 00000001800C0B1B: call    sub_1800B199C
 * 00000001800C0B20: mov     qword ptr [rbp+9E40h+var_8ED0], rax
 * 00000001800C0B27: add     rax, 1A50h
 * 00000001800C0B2D: mov     qword ptr [rbp+9E40h+var_8ED0+8], rax
 * 00000001800C0B34: movups  xmm7, [rbp+9E40h+var_8ED0]
 * 00000001800C0B3B: movups  [rbp+9E40h+var_6D10], xmm7
 * 00000001800C0B42: mov     dword ptr [rbp+9E40h+var_6D00], esi
 * 00000001800C0B48: mov     dword ptr [rbp+9E40h+var_6D00+4], esi
 * 00000001800C0B4E: movups  xmm6, [rbp+9E40h+var_6D00]
 * 00000001800C0B55: call    sub_1800B1A0C
 * 00000001800C0B5A: mov     r8, rax
 * 00000001800C0B5D: mov     r9d, r12d
 * 00000001800C0B60: mov     edx, 1A2h
 * 00000001800C0B65: lea     rcx, [rbp+9E40h+var_8B0]; Src
 * 00000001800C0B6C: call    sub_18007C338
 * 00000001800C0B71: nop
 * 00000001800C0B72: mov     r8, rax
 * 00000001800C0B75: mov     rdx, r13
 * 00000001800C0B78: lea     rcx, [rbp+9E40h+var_8D0]
 * 00000001800C0B7F: call    sub_18001C6E8
 * 00000001800C0B84: nop
 * 00000001800C0B85: lea     r8, aVertex; "/Vertex"
 * 00000001800C0B8C: mov     rdx, rax
 * 00000001800C0B8F: lea     rcx, [rbp+9E40h+var_49B0]
 * 00000001800C0B96: call    sub_18001C61C
 * 00000001800C0B9B: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C0BA0: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C0BA5: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C0BAA: mov     rcx, rax
 * 00000001800C0BAD: call    sub_18007C3DC
 * 00000001800C0BB2: nop
 * 00000001800C0BB3: lea     rcx, [rbp+9E40h+var_8D0]
 * 00000001800C0BBA: call    sub_180010F30
 * 00000001800C0BBF: nop
 * 00000001800C0BC0: lea     rcx, [rbp+9E40h+var_8B0]
 * 00000001800C0BC7: call    sub_180010F30
 * 00000001800C0BCC: nop
 * 00000001800C0BCD: lea     rcx, dword_1801D962C
 * 00000001800C0BD4: call    sub_18000C538
 * 00000001800C0BD9: mov     rax, [rdi+rbx*8]
 * 00000001800C0BDD: mov     ecx, [r15+rax]
 * 00000001800C0BE1: cmp     cs:dword_1801D9630, ecx
 * 00000001800C0BE7: jle     loc_1800C0CC4
 * 00000001800C0BED: lea     rcx, dword_1801D9630
 * 00000001800C0BF4: call    sub_18000C5A0
 * 00000001800C0BF9: cmp     cs:dword_1801D9630, r14d
 * 00000001800C0C00: jnz     loc_1800C0CC4
 * 00000001800C0C06: call    sub_1800B199C
 * 00000001800C0C0B: mov     qword ptr [rbp+9E40h+var_8EC0], rax
 * 00000001800C0C12: add     rax, 1A50h
 * 00000001800C0C18: mov     qword ptr [rbp+9E40h+var_8EC0+8], rax
 * 00000001800C0C1F: movups  xmm7, [rbp+9E40h+var_8EC0]
 * 00000001800C0C26: movups  [rbp+9E40h+var_6CF0], xmm7
 * 00000001800C0C2D: mov     dword ptr [rbp+9E40h+var_6CE0], esi
 * 00000001800C0C33: mov     dword ptr [rbp+9E40h+var_6CE0+4], esi
 * 00000001800C0C39: movups  xmm6, [rbp+9E40h+var_6CE0]
 * 00000001800C0C40: call    sub_1800B1A0C
 * 00000001800C0C45: mov     r8, rax
 * 00000001800C0C48: mov     r9d, r12d
 * 00000001800C0C4B: mov     edx, 1A8h
 * 00000001800C0C50: lea     rcx, [rbp+9E40h+var_850]; Src
 * 00000001800C0C57: call    sub_18007C338
 * 00000001800C0C5C: nop
 * 00000001800C0C5D: mov     r8, rax
 * 00000001800C0C60: mov     rdx, r13
 * 00000001800C0C63: lea     rcx, [rbp+9E40h+var_870]
 * 00000001800C0C6A: call    sub_18001C6E8
 * 00000001800C0C6F: nop
 * 00000001800C0C70: lea     r8, aVertex; "/Vertex"
 * 00000001800C0C77: mov     rdx, rax
 * 00000001800C0C7A: lea     rcx, [rbp+9E40h+var_4990]
 * 00000001800C0C81: call    sub_18001C61C
 * 00000001800C0C86: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C0C8B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C0C90: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C0C95: mov     rcx, rax
 * 00000001800C0C98: call    sub_18007C3DC
 * 00000001800C0C9D: nop
 * 00000001800C0C9E: lea     rcx, [rbp+9E40h+var_870]
 * 00000001800C0CA5: call    sub_180010F30
 * 00000001800C0CAA: nop
 * 00000001800C0CAB: lea     rcx, [rbp+9E40h+var_850]
 * 00000001800C0CB2: call    sub_180010F30
 * 00000001800C0CB7: nop
 * 00000001800C0CB8: lea     rcx, dword_1801D9630
 * 00000001800C0CBF: call    sub_18000C538
 * 00000001800C0CC4: mov     rax, [rdi+rbx*8]
 * 00000001800C0CC8: mov     ecx, [r15+rax]
 * 00000001800C0CCC: cmp     cs:dword_1801D9634, ecx
 * 00000001800C0CD2: jle     loc_1800C0DAF
 * 00000001800C0CD8: lea     rcx, dword_1801D9634
 * 00000001800C0CDF: call    sub_18000C5A0
 * 00000001800C0CE4: cmp     cs:dword_1801D9634, r14d
 * 00000001800C0CEB: jnz     loc_1800C0DAF
 * 00000001800C0CF1: call    sub_1800B199C
 * 00000001800C0CF6: mov     qword ptr [rbp+9E40h+var_8EB0], rax
 * 00000001800C0CFD: add     rax, 1A50h
 * 00000001800C0D03: mov     qword ptr [rbp+9E40h+var_8EB0+8], rax
 * 00000001800C0D0A: movups  xmm7, [rbp+9E40h+var_8EB0]
 * 00000001800C0D11: movups  [rbp+9E40h+var_6CD0], xmm7
 * 00000001800C0D18: mov     dword ptr [rbp+9E40h+var_6CC0], esi
 * 00000001800C0D1E: mov     dword ptr [rbp+9E40h+var_6CC0+4], esi
 * 00000001800C0D24: movups  xmm6, [rbp+9E40h+var_6CC0]
 * 00000001800C0D2B: call    sub_1800B1A0C
 * 00000001800C0D30: mov     r8, rax
 * 00000001800C0D33: mov     r9d, r12d
 * 00000001800C0D36: mov     edx, 1AAh
 * 00000001800C0D3B: lea     rcx, [rbp+9E40h+var_7F0]; Src
 * 00000001800C0D42: call    sub_18007C338
 * 00000001800C0D47: nop
 * 00000001800C0D48: mov     r8, rax
 * 00000001800C0D4B: mov     rdx, r13
 * 00000001800C0D4E: lea     rcx, [rbp+9E40h+var_810]
 * 00000001800C0D55: call    sub_18001C6E8
 * 00000001800C0D5A: nop
 * 00000001800C0D5B: lea     r8, aVertex; "/Vertex"
 * 00000001800C0D62: mov     rdx, rax
 * 00000001800C0D65: lea     rcx, [rbp+9E40h+var_4970]
 * 00000001800C0D6C: call    sub_18001C61C
 * 00000001800C0D71: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C0D76: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C0D7B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C0D80: mov     rcx, rax
 * 00000001800C0D83: call    sub_18007C3DC
 * 00000001800C0D88: nop
 * 00000001800C0D89: lea     rcx, [rbp+9E40h+var_810]
 * 00000001800C0D90: call    sub_180010F30
 * 00000001800C0D95: nop
 * 00000001800C0D96: lea     rcx, [rbp+9E40h+var_7F0]
 * 00000001800C0D9D: call    sub_180010F30
 * 00000001800C0DA2: nop
 * 00000001800C0DA3: lea     rcx, dword_1801D9634
 * 00000001800C0DAA: call    sub_18000C538
 * 00000001800C0DAF: mov     rax, [rdi+rbx*8]
 * 00000001800C0DB3: mov     ecx, [r15+rax]
 * 00000001800C0DB7: cmp     cs:dword_1801D9638, ecx
 * 00000001800C0DBD: jle     loc_1800C0E9A
 * 00000001800C0DC3: lea     rcx, dword_1801D9638
 * 00000001800C0DCA: call    sub_18000C5A0
 * 00000001800C0DCF: cmp     cs:dword_1801D9638, r14d
 * 00000001800C0DD6: jnz     loc_1800C0E9A
 * 00000001800C0DDC: call    sub_1800B199C
 * 00000001800C0DE1: mov     qword ptr [rbp+9E40h+var_8EA0], rax
 * 00000001800C0DE8: add     rax, 1A50h
 * 00000001800C0DEE: mov     qword ptr [rbp+9E40h+var_8EA0+8], rax
 * 00000001800C0DF5: movups  xmm7, [rbp+9E40h+var_8EA0]
 * 00000001800C0DFC: movups  [rbp+9E40h+var_6CB0], xmm7
 * 00000001800C0E03: mov     dword ptr [rbp+9E40h+var_6CA0], esi
 * 00000001800C0E09: mov     dword ptr [rbp+9E40h+var_6CA0+4], esi
 * 00000001800C0E0F: movups  xmm6, [rbp+9E40h+var_6CA0]
 * 00000001800C0E16: call    sub_1800B1A0C
 * 00000001800C0E1B: mov     r8, rax
 * 00000001800C0E1E: mov     r9d, r12d
 * 00000001800C0E21: mov     edx, 1B0h
 * 00000001800C0E26: lea     rcx, [rbp+9E40h+var_790]; Src
 * 00000001800C0E2D: call    sub_18007C338
 * 00000001800C0E32: nop
 * 00000001800C0E33: mov     r8, rax
 * 00000001800C0E36: mov     rdx, r13
 * 00000001800C0E39: lea     rcx, [rbp+9E40h+var_7B0]
 * 00000001800C0E40: call    sub_18001C6E8
 * 00000001800C0E45: nop
 * 00000001800C0E46: lea     r8, aVertex; "/Vertex"
 * 00000001800C0E4D: mov     rdx, rax
 * 00000001800C0E50: lea     rcx, [rbp+9E40h+var_4950]
 * 00000001800C0E57: call    sub_18001C61C
 * 00000001800C0E5C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C0E61: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C0E66: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C0E6B: mov     rcx, rax
 * 00000001800C0E6E: call    sub_18007C3DC
 * 00000001800C0E73: nop
 * 00000001800C0E74: lea     rcx, [rbp+9E40h+var_7B0]
 * 00000001800C0E7B: call    sub_180010F30
 * 00000001800C0E80: nop
 * 00000001800C0E81: lea     rcx, [rbp+9E40h+var_790]
 * 00000001800C0E88: call    sub_180010F30
 * 00000001800C0E8D: nop
 * 00000001800C0E8E: lea     rcx, dword_1801D9638
 * 00000001800C0E95: call    sub_18000C538
 * 00000001800C0E9A: mov     rax, [rdi+rbx*8]
 * 00000001800C0E9E: mov     ecx, [r15+rax]
 * 00000001800C0EA2: cmp     cs:dword_1801D963C, ecx
 * 00000001800C0EA8: jle     loc_1800C0F85
 * 00000001800C0EAE: lea     rcx, dword_1801D963C
 * 00000001800C0EB5: call    sub_18000C5A0
 * 00000001800C0EBA: cmp     cs:dword_1801D963C, r14d
 * 00000001800C0EC1: jnz     loc_1800C0F85
 * 00000001800C0EC7: call    sub_1800B199C
 * 00000001800C0ECC: mov     qword ptr [rbp+9E40h+var_8E90], rax
 * 00000001800C0ED3: add     rax, 1A50h
 * 00000001800C0ED9: mov     qword ptr [rbp+9E40h+var_8E90+8], rax
 * 00000001800C0EE0: movups  xmm7, [rbp+9E40h+var_8E90]
 * 00000001800C0EE7: movups  [rbp+9E40h+var_6C90], xmm7
 * 00000001800C0EEE: mov     dword ptr [rbp+9E40h+var_6C80], esi
 * 00000001800C0EF4: mov     dword ptr [rbp+9E40h+var_6C80+4], esi
 * 00000001800C0EFA: movups  xmm6, [rbp+9E40h+var_6C80]
 * 00000001800C0F01: call    sub_1800B1A0C
 * 00000001800C0F06: mov     r8, rax
 * 00000001800C0F09: mov     r9d, r12d
 * 00000001800C0F0C: mov     edx, 1B2h
 * 00000001800C0F11: lea     rcx, [rbp+9E40h+var_730]; Src
 * 00000001800C0F18: call    sub_18007C338
 * 00000001800C0F1D: nop
 * 00000001800C0F1E: mov     r8, rax
 * 00000001800C0F21: mov     rdx, r13
 * 00000001800C0F24: lea     rcx, [rbp+9E40h+var_750]
 * 00000001800C0F2B: call    sub_18001C6E8
 * 00000001800C0F30: nop
 * 00000001800C0F31: lea     r8, aVertex; "/Vertex"
 * 00000001800C0F38: mov     rdx, rax
 * 00000001800C0F3B: lea     rcx, [rbp+9E40h+var_4930]
 * 00000001800C0F42: call    sub_18001C61C
 * 00000001800C0F47: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C0F4C: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C0F51: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C0F56: mov     rcx, rax
 * 00000001800C0F59: call    sub_18007C3DC
 * 00000001800C0F5E: nop
 * 00000001800C0F5F: lea     rcx, [rbp+9E40h+var_750]
 * 00000001800C0F66: call    sub_180010F30
 * 00000001800C0F6B: nop
 * 00000001800C0F6C: lea     rcx, [rbp+9E40h+var_730]
 * 00000001800C0F73: call    sub_180010F30
 * 00000001800C0F78: nop
 * 00000001800C0F79: lea     rcx, dword_1801D963C
 * 00000001800C0F80: call    sub_18000C538
 * 00000001800C0F85: mov     rax, [rdi+rbx*8]
 * 00000001800C0F89: mov     ecx, [r15+rax]
 * 00000001800C0F8D: cmp     cs:dword_1801D9640, ecx
 * 00000001800C0F93: jle     loc_1800C1070
 * 00000001800C0F99: lea     rcx, dword_1801D9640
 * 00000001800C0FA0: call    sub_18000C5A0
 * 00000001800C0FA5: cmp     cs:dword_1801D9640, r14d
 * 00000001800C0FAC: jnz     loc_1800C1070
 * 00000001800C0FB2: call    sub_1800B199C
 * 00000001800C0FB7: mov     qword ptr [rbp+9E40h+var_8E80], rax
 * 00000001800C0FBE: add     rax, 1A50h
 * 00000001800C0FC4: mov     qword ptr [rbp+9E40h+var_8E80+8], rax
 * 00000001800C0FCB: movups  xmm7, [rbp+9E40h+var_8E80]
 * 00000001800C0FD2: movups  [rbp+9E40h+var_6C70], xmm7
 * 00000001800C0FD9: mov     dword ptr [rbp+9E40h+var_6C60], esi
 * 00000001800C0FDF: mov     dword ptr [rbp+9E40h+var_6C60+4], esi
 * 00000001800C0FE5: movups  xmm6, [rbp+9E40h+var_6C60]
 * 00000001800C0FEC: call    sub_1800B1A0C
 * 00000001800C0FF1: mov     r8, rax
 * 00000001800C0FF4: mov     r9d, r12d
 * 00000001800C0FF7: mov     edx, 1B8h
 * 00000001800C0FFC: lea     rcx, [rbp+9E40h+var_6D0]; Src
 * 00000001800C1003: call    sub_18007C338
 * 00000001800C1008: nop
 * 00000001800C1009: mov     r8, rax
 * 00000001800C100C: mov     rdx, r13
 * 00000001800C100F: lea     rcx, [rbp+9E40h+var_6F0]
 * 00000001800C1016: call    sub_18001C6E8
 * 00000001800C101B: nop
 * 00000001800C101C: lea     r8, aVertex; "/Vertex"
 * 00000001800C1023: mov     rdx, rax
 * 00000001800C1026: lea     rcx, [rbp+9E40h+var_4910]
 * 00000001800C102D: call    sub_18001C61C
 * 00000001800C1032: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C1037: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C103C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C1041: mov     rcx, rax
 * 00000001800C1044: call    sub_18007C3DC
 * 00000001800C1049: nop
 * 00000001800C104A: lea     rcx, [rbp+9E40h+var_6F0]
 * 00000001800C1051: call    sub_180010F30
 * 00000001800C1056: nop
 * 00000001800C1057: lea     rcx, [rbp+9E40h+var_6D0]
 * 00000001800C105E: call    sub_180010F30
 * 00000001800C1063: nop
 * 00000001800C1064: lea     rcx, dword_1801D9640
 * 00000001800C106B: call    sub_18000C538
 * 00000001800C1070: mov     rax, [rdi+rbx*8]
 * 00000001800C1074: mov     ecx, [r15+rax]
 * 00000001800C1078: cmp     cs:dword_1801D9644, ecx
 * 00000001800C107E: jle     loc_1800C115B
 * 00000001800C1084: lea     rcx, dword_1801D9644
 * 00000001800C108B: call    sub_18000C5A0
 * 00000001800C1090: cmp     cs:dword_1801D9644, r14d
 * 00000001800C1097: jnz     loc_1800C115B
 * 00000001800C109D: call    sub_1800B199C
 * 00000001800C10A2: mov     qword ptr [rbp+9E40h+var_8E70], rax
 * 00000001800C10A9: add     rax, 1A50h
 * 00000001800C10AF: mov     qword ptr [rbp+9E40h+var_8E70+8], rax
 * 00000001800C10B6: movups  xmm7, [rbp+9E40h+var_8E70]
 * 00000001800C10BD: movups  [rbp+9E40h+var_6C50], xmm7
 * 00000001800C10C4: mov     dword ptr [rbp+9E40h+var_6C40], esi
 * 00000001800C10CA: mov     dword ptr [rbp+9E40h+var_6C40+4], esi
 * 00000001800C10D0: movups  xmm6, [rbp+9E40h+var_6C40]
 * 00000001800C10D7: call    sub_1800B1A0C
 * 00000001800C10DC: mov     r8, rax
 * 00000001800C10DF: mov     r9d, r12d
 * 00000001800C10E2: mov     edx, 1BAh
 * 00000001800C10E7: lea     rcx, [rbp+9E40h+var_670]; Src
 * 00000001800C10EE: call    sub_18007C338
 * 00000001800C10F3: nop
 * 00000001800C10F4: mov     r8, rax
 * 00000001800C10F7: mov     rdx, r13
 * 00000001800C10FA: lea     rcx, [rbp+9E40h+var_690]
 * 00000001800C1101: call    sub_18001C6E8
 * 00000001800C1106: nop
 * 00000001800C1107: lea     r8, aVertex; "/Vertex"
 * 00000001800C110E: mov     rdx, rax
 * 00000001800C1111: lea     rcx, [rbp+9E40h+var_48F0]
 * 00000001800C1118: call    sub_18001C61C
 * 00000001800C111D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C1122: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C1127: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C112C: mov     rcx, rax
 * 00000001800C112F: call    sub_18007C3DC
 * 00000001800C1134: nop
 * 00000001800C1135: lea     rcx, [rbp+9E40h+var_690]
 * 00000001800C113C: call    sub_180010F30
 * 00000001800C1141: nop
 * 00000001800C1142: lea     rcx, [rbp+9E40h+var_670]
 * 00000001800C1149: call    sub_180010F30
 * 00000001800C114E: nop
 * 00000001800C114F: lea     rcx, dword_1801D9644
 * 00000001800C1156: call    sub_18000C538
 * 00000001800C115B: mov     rax, [rdi+rbx*8]
 * 00000001800C115F: mov     ecx, [r15+rax]
 * 00000001800C1163: cmp     cs:dword_1801D9648, ecx
 * 00000001800C1169: jle     loc_1800C1246
 * 00000001800C116F: lea     rcx, dword_1801D9648
 * 00000001800C1176: call    sub_18000C5A0
 * 00000001800C117B: cmp     cs:dword_1801D9648, r14d
 * 00000001800C1182: jnz     loc_1800C1246
 * 00000001800C1188: call    sub_1800B198C
 * 00000001800C118D: mov     qword ptr [rbp+9E40h+var_8E60], rax
 * 00000001800C1194: add     rax, 1050h
 * 00000001800C119A: mov     qword ptr [rbp+9E40h+var_8E60+8], rax
 * 00000001800C11A1: movups  xmm7, [rbp+9E40h+var_8E60]
 * 00000001800C11A8: movups  [rbp+9E40h+var_6C30], xmm7
 * 00000001800C11AF: mov     dword ptr [rbp+9E40h+var_6C20], esi
 * 00000001800C11B5: mov     dword ptr [rbp+9E40h+var_6C20+4], esi
 * 00000001800C11BB: movups  xmm6, [rbp+9E40h+var_6C20]
 * 00000001800C11C2: call    sub_1800B1A0C
 * 00000001800C11C7: mov     r8, rax
 * 00000001800C11CA: mov     r9d, r12d
 * 00000001800C11CD: mov     edx, 1C0h
 * 00000001800C11D2: lea     rcx, [rbp+9E40h+var_610]; Src
 * 00000001800C11D9: call    sub_18007C338
 * 00000001800C11DE: nop
 * 00000001800C11DF: mov     r8, rax
 * 00000001800C11E2: mov     rdx, r13
 * 00000001800C11E5: lea     rcx, [rbp+9E40h+var_630]
 * 00000001800C11EC: call    sub_18001C6E8
 * 00000001800C11F1: nop
 * 00000001800C11F2: lea     r8, aVertex; "/Vertex"
 * 00000001800C11F9: mov     rdx, rax
 * 00000001800C11FC: lea     rcx, [rbp+9E40h+var_48D0]
 * 00000001800C1203: call    sub_18001C61C
 * 00000001800C1208: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C120D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C1212: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C1217: mov     rcx, rax
 * 00000001800C121A: call    sub_18007C3DC
 * 00000001800C121F: nop
 * 00000001800C1220: lea     rcx, [rbp+9E40h+var_630]
 * 00000001800C1227: call    sub_180010F30
 * 00000001800C122C: nop
 * 00000001800C122D: lea     rcx, [rbp+9E40h+var_610]
 * 00000001800C1234: call    sub_180010F30
 * 00000001800C1239: nop
 * 00000001800C123A: lea     rcx, dword_1801D9648
 * 00000001800C1241: call    sub_18000C538
 * 00000001800C1246: mov     rax, [rdi+rbx*8]
 * 00000001800C124A: mov     ecx, [r15+rax]
 * 00000001800C124E: cmp     cs:dword_1801D964C, ecx
 * 00000001800C1254: jle     loc_1800C1331
 * 00000001800C125A: lea     rcx, dword_1801D964C
 * 00000001800C1261: call    sub_18000C5A0
 * 00000001800C1266: cmp     cs:dword_1801D964C, r14d
 * 00000001800C126D: jnz     loc_1800C1331
 * 00000001800C1273: call    sub_1800B198C
 * 00000001800C1278: mov     qword ptr [rbp+9E40h+var_8E50], rax
 * 00000001800C127F: add     rax, 1050h
 * 00000001800C1285: mov     qword ptr [rbp+9E40h+var_8E50+8], rax
 * 00000001800C128C: movups  xmm7, [rbp+9E40h+var_8E50]
 * 00000001800C1293: movups  [rbp+9E40h+var_6C10], xmm7
 * 00000001800C129A: mov     dword ptr [rbp+9E40h+var_6C00], esi
 * 00000001800C12A0: mov     dword ptr [rbp+9E40h+var_6C00+4], esi
 * 00000001800C12A6: movups  xmm6, [rbp+9E40h+var_6C00]
 * 00000001800C12AD: call    sub_1800B1A0C
 * 00000001800C12B2: mov     r8, rax
 * 00000001800C12B5: mov     r9d, r12d
 * 00000001800C12B8: mov     edx, 1C2h
 * 00000001800C12BD: lea     rcx, [rbp+9E40h+var_5B0]; Src
 * 00000001800C12C4: call    sub_18007C338
 * 00000001800C12C9: nop
 * 00000001800C12CA: mov     r8, rax
 * 00000001800C12CD: mov     rdx, r13
 * 00000001800C12D0: lea     rcx, [rbp+9E40h+var_5D0]
 * 00000001800C12D7: call    sub_18001C6E8
 * 00000001800C12DC: nop
 * 00000001800C12DD: lea     r8, aVertex; "/Vertex"
 * 00000001800C12E4: mov     rdx, rax
 * 00000001800C12E7: lea     rcx, [rbp+9E40h+var_48B0]
 * 00000001800C12EE: call    sub_18001C61C
 * 00000001800C12F3: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C12F8: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C12FD: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C1302: mov     rcx, rax
 * 00000001800C1305: call    sub_18007C3DC
 * 00000001800C130A: nop
 * 00000001800C130B: lea     rcx, [rbp+9E40h+var_5D0]
 * 00000001800C1312: call    sub_180010F30
 * 00000001800C1317: nop
 * 00000001800C1318: lea     rcx, [rbp+9E40h+var_5B0]
 * 00000001800C131F: call    sub_180010F30
 * 00000001800C1324: nop
 * 00000001800C1325: lea     rcx, dword_1801D964C
 * 00000001800C132C: call    sub_18000C538
 * 00000001800C1331: mov     rax, [rdi+rbx*8]
 * 00000001800C1335: mov     ecx, [r15+rax]
 * 00000001800C1339: cmp     cs:dword_1801D9650, ecx
 * 00000001800C133F: jle     loc_1800C141C
 * 00000001800C1345: lea     rcx, dword_1801D9650
 * 00000001800C134C: call    sub_18000C5A0
 * 00000001800C1351: cmp     cs:dword_1801D9650, r14d
 * 00000001800C1358: jnz     loc_1800C141C
 * 00000001800C135E: call    sub_1800B198C
 * 00000001800C1363: mov     qword ptr [rbp+9E40h+var_8E40], rax
 * 00000001800C136A: add     rax, 1050h
 * 00000001800C1370: mov     qword ptr [rbp+9E40h+var_8E40+8], rax
 * 00000001800C1377: movups  xmm7, [rbp+9E40h+var_8E40]
 * 00000001800C137E: movups  [rbp+9E40h+var_6BF0], xmm7
 * 00000001800C1385: mov     dword ptr [rbp+9E40h+var_6BE0], esi
 * 00000001800C138B: mov     dword ptr [rbp+9E40h+var_6BE0+4], esi
 * 00000001800C1391: movups  xmm6, [rbp+9E40h+var_6BE0]
 * 00000001800C1398: call    sub_1800B1A0C
 * 00000001800C139D: mov     r8, rax
 * 00000001800C13A0: mov     r9d, r12d
 * 00000001800C13A3: mov     edx, 1C8h
 * 00000001800C13A8: lea     rcx, [rbp+9E40h+var_550]; Src
 * 00000001800C13AF: call    sub_18007C338
 * 00000001800C13B4: nop
 * 00000001800C13B5: mov     r8, rax
 * 00000001800C13B8: mov     rdx, r13
 * 00000001800C13BB: lea     rcx, [rbp+9E40h+var_570]
 * 00000001800C13C2: call    sub_18001C6E8
 * 00000001800C13C7: nop
 * 00000001800C13C8: lea     r8, aVertex; "/Vertex"
 * 00000001800C13CF: mov     rdx, rax
 * 00000001800C13D2: lea     rcx, [rbp+9E40h+var_4890]
 * 00000001800C13D9: call    sub_18001C61C
 * 00000001800C13DE: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C13E3: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C13E8: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C13ED: mov     rcx, rax
 * 00000001800C13F0: call    sub_18007C3DC
 * 00000001800C13F5: nop
 * 00000001800C13F6: lea     rcx, [rbp+9E40h+var_570]
 * 00000001800C13FD: call    sub_180010F30
 * 00000001800C1402: nop
 * 00000001800C1403: lea     rcx, [rbp+9E40h+var_550]
 * 00000001800C140A: call    sub_180010F30
 * 00000001800C140F: nop
 * 00000001800C1410: lea     rcx, dword_1801D9650
 * 00000001800C1417: call    sub_18000C538
 * 00000001800C141C: mov     rax, [rdi+rbx*8]
 * 00000001800C1420: mov     ecx, [r15+rax]
 * 00000001800C1424: cmp     cs:dword_1801D9654, ecx
 * 00000001800C142A: jle     loc_1800C1507
 * 00000001800C1430: lea     rcx, dword_1801D9654
 * 00000001800C1437: call    sub_18000C5A0
 * 00000001800C143C: cmp     cs:dword_1801D9654, r14d
 * 00000001800C1443: jnz     loc_1800C1507
 * 00000001800C1449: call    sub_1800B198C
 * 00000001800C144E: mov     qword ptr [rbp+9E40h+var_8E30], rax
 * 00000001800C1455: add     rax, 1050h
 * 00000001800C145B: mov     qword ptr [rbp+9E40h+var_8E30+8], rax
 * 00000001800C1462: movups  xmm7, [rbp+9E40h+var_8E30]
 * 00000001800C1469: movups  [rbp+9E40h+var_6BD0], xmm7
 * 00000001800C1470: mov     dword ptr [rbp+9E40h+var_6BC0], esi
 * 00000001800C1476: mov     dword ptr [rbp+9E40h+var_6BC0+4], esi
 * 00000001800C147C: movups  xmm6, [rbp+9E40h+var_6BC0]
 * 00000001800C1483: call    sub_1800B1A0C
 * 00000001800C1488: mov     r8, rax
 * 00000001800C148B: mov     r9d, r12d
 * 00000001800C148E: mov     edx, 1CAh
 * 00000001800C1493: lea     rcx, [rbp+9E40h+var_4F0]; Src
 * 00000001800C149A: call    sub_18007C338
 * 00000001800C149F: nop
 * 00000001800C14A0: mov     r8, rax
 * 00000001800C14A3: mov     rdx, r13
 * 00000001800C14A6: lea     rcx, [rbp+9E40h+var_510]
 * 00000001800C14AD: call    sub_18001C6E8
 * 00000001800C14B2: nop
 * 00000001800C14B3: lea     r8, aVertex; "/Vertex"
 * 00000001800C14BA: mov     rdx, rax
 * 00000001800C14BD: lea     rcx, [rbp+9E40h+var_4870]
 * 00000001800C14C4: call    sub_18001C61C
 * 00000001800C14C9: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C14CE: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C14D3: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C14D8: mov     rcx, rax
 * 00000001800C14DB: call    sub_18007C3DC
 * 00000001800C14E0: nop
 * 00000001800C14E1: lea     rcx, [rbp+9E40h+var_510]
 * 00000001800C14E8: call    sub_180010F30
 * 00000001800C14ED: nop
 * 00000001800C14EE: lea     rcx, [rbp+9E40h+var_4F0]
 * 00000001800C14F5: call    sub_180010F30
 * 00000001800C14FA: nop
 * 00000001800C14FB: lea     rcx, dword_1801D9654
 * 00000001800C1502: call    sub_18000C538
 * 00000001800C1507: mov     rax, [rdi+rbx*8]
 * 00000001800C150B: mov     ecx, [r15+rax]
 * 00000001800C150F: cmp     cs:dword_1801D9658, ecx
 * 00000001800C1515: jle     loc_1800C15F2
 * 00000001800C151B: lea     rcx, dword_1801D9658
 * 00000001800C1522: call    sub_18000C5A0
 * 00000001800C1527: cmp     cs:dword_1801D9658, r14d
 * 00000001800C152E: jnz     loc_1800C15F2
 * 00000001800C1534: call    sub_1800B198C
 * 00000001800C1539: mov     qword ptr [rbp+9E40h+var_8E20], rax
 * 00000001800C1540: add     rax, 1050h
 * 00000001800C1546: mov     qword ptr [rbp+9E40h+var_8E20+8], rax
 * 00000001800C154D: movups  xmm7, [rbp+9E40h+var_8E20]
 * 00000001800C1554: movups  [rbp+9E40h+var_6BB0], xmm7
 * 00000001800C155B: mov     dword ptr [rbp+9E40h+var_6BA0], esi
 * 00000001800C1561: mov     dword ptr [rbp+9E40h+var_6BA0+4], esi
 * 00000001800C1567: movups  xmm6, [rbp+9E40h+var_6BA0]
 * 00000001800C156E: call    sub_1800B1A0C
 * 00000001800C1573: mov     r8, rax
 * 00000001800C1576: mov     r9d, r12d
 * 00000001800C1579: mov     edx, 1D0h
 * 00000001800C157E: lea     rcx, [rbp+9E40h+var_490]; Src
 * 00000001800C1585: call    sub_18007C338
 * 00000001800C158A: nop
 * 00000001800C158B: mov     r8, rax
 * 00000001800C158E: mov     rdx, r13
 * 00000001800C1591: lea     rcx, [rbp+9E40h+var_4B0]
 * 00000001800C1598: call    sub_18001C6E8
 * 00000001800C159D: nop
 * 00000001800C159E: lea     r8, aVertex; "/Vertex"
 * 00000001800C15A5: mov     rdx, rax
 * 00000001800C15A8: lea     rcx, [rbp+9E40h+var_4850]
 * 00000001800C15AF: call    sub_18001C61C
 * 00000001800C15B4: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C15B9: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C15BE: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C15C3: mov     rcx, rax
 * 00000001800C15C6: call    sub_18007C3DC
 * 00000001800C15CB: nop
 * 00000001800C15CC: lea     rcx, [rbp+9E40h+var_4B0]
 * 00000001800C15D3: call    sub_180010F30
 * 00000001800C15D8: nop
 * 00000001800C15D9: lea     rcx, [rbp+9E40h+var_490]
 * 00000001800C15E0: call    sub_180010F30
 * 00000001800C15E5: nop
 * 00000001800C15E6: lea     rcx, dword_1801D9658
 * 00000001800C15ED: call    sub_18000C538
 * 00000001800C15F2: mov     rax, [rdi+rbx*8]
 * 00000001800C15F6: mov     ecx, [r15+rax]
 * 00000001800C15FA: cmp     cs:dword_1801D965C, ecx
 * 00000001800C1600: jle     loc_1800C16DD
 * 00000001800C1606: lea     rcx, dword_1801D965C
 * 00000001800C160D: call    sub_18000C5A0
 * 00000001800C1612: cmp     cs:dword_1801D965C, r14d
 * 00000001800C1619: jnz     loc_1800C16DD
 * 00000001800C161F: call    sub_1800B198C
 * 00000001800C1624: mov     qword ptr [rbp+9E40h+var_8E10], rax
 * 00000001800C162B: add     rax, 1050h
 * 00000001800C1631: mov     qword ptr [rbp+9E40h+var_8E10+8], rax
 * 00000001800C1638: movups  xmm7, [rbp+9E40h+var_8E10]
 * 00000001800C163F: movups  [rbp+9E40h+var_6B90], xmm7
 * 00000001800C1646: mov     dword ptr [rbp+9E40h+var_6B80], esi
 * 00000001800C164C: mov     dword ptr [rbp+9E40h+var_6B80+4], esi
 * 00000001800C1652: movups  xmm6, [rbp+9E40h+var_6B80]
 * 00000001800C1659: call    sub_1800B1A0C
 * 00000001800C165E: mov     r8, rax
 * 00000001800C1661: mov     r9d, r12d
 * 00000001800C1664: mov     edx, 1D2h
 * 00000001800C1669: lea     rcx, [rbp+9E40h+var_430]; Src
 * 00000001800C1670: call    sub_18007C338
 * 00000001800C1675: nop
 * 00000001800C1676: mov     r8, rax
 * 00000001800C1679: mov     rdx, r13
 * 00000001800C167C: lea     rcx, [rbp+9E40h+var_450]
 * 00000001800C1683: call    sub_18001C6E8
 * 00000001800C1688: nop
 * 00000001800C1689: lea     r8, aVertex; "/Vertex"
 * 00000001800C1690: mov     rdx, rax
 * 00000001800C1693: lea     rcx, [rbp+9E40h+var_4830]
 * 00000001800C169A: call    sub_18001C61C
 * 00000001800C169F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C16A4: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C16A9: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C16AE: mov     rcx, rax
 * 00000001800C16B1: call    sub_18007C3DC
 * 00000001800C16B6: nop
 * 00000001800C16B7: lea     rcx, [rbp+9E40h+var_450]
 * 00000001800C16BE: call    sub_180010F30
 * 00000001800C16C3: nop
 * 00000001800C16C4: lea     rcx, [rbp+9E40h+var_430]
 * 00000001800C16CB: call    sub_180010F30
 * 00000001800C16D0: nop
 * 00000001800C16D1: lea     rcx, dword_1801D965C
 * 00000001800C16D8: call    sub_18000C538
 * 00000001800C16DD: mov     rax, [rdi+rbx*8]
 * 00000001800C16E1: mov     ecx, [r15+rax]
 * 00000001800C16E5: cmp     cs:dword_1801D9660, ecx
 * 00000001800C16EB: jle     loc_1800C17C8
 * 00000001800C16F1: lea     rcx, dword_1801D9660
 * 00000001800C16F8: call    sub_18000C5A0
 * 00000001800C16FD: cmp     cs:dword_1801D9660, r14d
 * 00000001800C1704: jnz     loc_1800C17C8
 * 00000001800C170A: call    sub_1800B198C
 * 00000001800C170F: mov     qword ptr [rbp+9E40h+var_8E00], rax
 * 00000001800C1716: add     rax, 1050h
 * 00000001800C171C: mov     qword ptr [rbp+9E40h+var_8E00+8], rax
 * 00000001800C1723: movups  xmm7, [rbp+9E40h+var_8E00]
 * 00000001800C172A: movups  [rbp+9E40h+var_6B70], xmm7
 * 00000001800C1731: mov     dword ptr [rbp+9E40h+var_6B60], esi
 * 00000001800C1737: mov     dword ptr [rbp+9E40h+var_6B60+4], esi
 * 00000001800C173D: movups  xmm6, [rbp+9E40h+var_6B60]
 * 00000001800C1744: call    sub_1800B1A0C
 * 00000001800C1749: mov     r8, rax
 * 00000001800C174C: mov     r9d, r12d
 * 00000001800C174F: mov     edx, 1D8h
 * 00000001800C1754: lea     rcx, [rbp+9E40h+var_3D0]; Src
 * 00000001800C175B: call    sub_18007C338
 * 00000001800C1760: nop
 * 00000001800C1761: mov     r8, rax
 * 00000001800C1764: mov     rdx, r13
 * 00000001800C1767: lea     rcx, [rbp+9E40h+var_3F0]
 * 00000001800C176E: call    sub_18001C6E8
 * 00000001800C1773: nop
 * 00000001800C1774: lea     r8, aVertex; "/Vertex"
 * 00000001800C177B: mov     rdx, rax
 * 00000001800C177E: lea     rcx, [rbp+9E40h+var_4810]
 * 00000001800C1785: call    sub_18001C61C
 * 00000001800C178A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C178F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C1794: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C1799: mov     rcx, rax
 * 00000001800C179C: call    sub_18007C3DC
 * 00000001800C17A1: nop
 * 00000001800C17A2: lea     rcx, [rbp+9E40h+var_3F0]
 * 00000001800C17A9: call    sub_180010F30
 * 00000001800C17AE: nop
 * 00000001800C17AF: lea     rcx, [rbp+9E40h+var_3D0]
 * 00000001800C17B6: call    sub_180010F30
 * 00000001800C17BB: nop
 * 00000001800C17BC: lea     rcx, dword_1801D9660
 * 00000001800C17C3: call    sub_18000C538
 * 00000001800C17C8: mov     rax, [rdi+rbx*8]
 * 00000001800C17CC: mov     ecx, [r15+rax]
 * 00000001800C17D0: cmp     cs:dword_1801D9664, ecx
 * 00000001800C17D6: jle     loc_1800C18B3
 * 00000001800C17DC: lea     rcx, dword_1801D9664
 * 00000001800C17E3: call    sub_18000C5A0
 * 00000001800C17E8: cmp     cs:dword_1801D9664, r14d
 * 00000001800C17EF: jnz     loc_1800C18B3
 * 00000001800C17F5: call    sub_1800B198C
 * 00000001800C17FA: mov     qword ptr [rbp+9E40h+var_8DF0], rax
 * 00000001800C1801: add     rax, 1050h
 * 00000001800C1807: mov     qword ptr [rbp+9E40h+var_8DF0+8], rax
 * 00000001800C180E: movups  xmm7, [rbp+9E40h+var_8DF0]
 * 00000001800C1815: movups  [rbp+9E40h+var_6B50], xmm7
 * 00000001800C181C: mov     dword ptr [rbp+9E40h+var_6B40], esi
 * 00000001800C1822: mov     dword ptr [rbp+9E40h+var_6B40+4], esi
 * 00000001800C1828: movups  xmm6, [rbp+9E40h+var_6B40]
 * 00000001800C182F: call    sub_1800B1A0C
 * 00000001800C1834: mov     r8, rax
 * 00000001800C1837: mov     r9d, r12d
 * 00000001800C183A: mov     edx, 1DAh
 * 00000001800C183F: lea     rcx, [rbp+9E40h+var_370]; Src
 * 00000001800C1846: call    sub_18007C338
 * 00000001800C184B: nop
 * 00000001800C184C: mov     r8, rax
 * 00000001800C184F: mov     rdx, r13
 * 00000001800C1852: lea     rcx, [rbp+9E40h+var_390]
 * 00000001800C1859: call    sub_18001C6E8
 * 00000001800C185E: nop
 * 00000001800C185F: lea     r8, aVertex; "/Vertex"
 * 00000001800C1866: mov     rdx, rax
 * 00000001800C1869: lea     rcx, [rbp+9E40h+var_47F0]
 * 00000001800C1870: call    sub_18001C61C
 * 00000001800C1875: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C187A: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C187F: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C1884: mov     rcx, rax
 * 00000001800C1887: call    sub_18007C3DC
 * 00000001800C188C: nop
 * 00000001800C188D: lea     rcx, [rbp+9E40h+var_390]
 * 00000001800C1894: call    sub_180010F30
 * 00000001800C1899: nop
 * 00000001800C189A: lea     rcx, [rbp+9E40h+var_370]
 * 00000001800C18A1: call    sub_180010F30
 * 00000001800C18A6: nop
 * 00000001800C18A7: lea     rcx, dword_1801D9664
 * 00000001800C18AE: call    sub_18000C538
 * 00000001800C18B3: mov     rax, [rdi+rbx*8]
 * 00000001800C18B7: mov     ecx, [r15+rax]
 * 00000001800C18BB: cmp     cs:dword_1801D9668, ecx
 * 00000001800C18C1: jle     loc_1800C199E
 * 00000001800C18C7: lea     rcx, dword_1801D9668
 * 00000001800C18CE: call    sub_18000C5A0
 * 00000001800C18D3: cmp     cs:dword_1801D9668, r14d
 * 00000001800C18DA: jnz     loc_1800C199E
 * 00000001800C18E0: call    sub_1800B199C
 * 00000001800C18E5: mov     qword ptr [rbp+9E40h+var_8DE0], rax
 * 00000001800C18EC: add     rax, 1A50h
 * 00000001800C18F2: mov     qword ptr [rbp+9E40h+var_8DE0+8], rax
 * 00000001800C18F9: movups  xmm7, [rbp+9E40h+var_8DE0]
 * 00000001800C1900: movups  [rbp+9E40h+var_6B30], xmm7
 * 00000001800C1907: mov     dword ptr [rbp+9E40h+var_6B20], esi
 * 00000001800C190D: mov     dword ptr [rbp+9E40h+var_6B20+4], esi
 * 00000001800C1913: movups  xmm6, [rbp+9E40h+var_6B20]
 * 00000001800C191A: call    sub_1800B1A0C
 * 00000001800C191F: mov     r8, rax
 * 00000001800C1922: mov     r9d, r12d
 * 00000001800C1925: mov     edx, 1E0h
 * 00000001800C192A: lea     rcx, [rbp+9E40h+var_310]; Src
 * 00000001800C1931: call    sub_18007C338
 * 00000001800C1936: nop
 * 00000001800C1937: mov     r8, rax
 * 00000001800C193A: mov     rdx, r13
 * 00000001800C193D: lea     rcx, [rbp+9E40h+var_330]
 * 00000001800C1944: call    sub_18001C6E8
 * 00000001800C1949: nop
 * 00000001800C194A: lea     r8, aVertex; "/Vertex"
 * 00000001800C1951: mov     rdx, rax
 * 00000001800C1954: lea     rcx, [rbp+9E40h+var_47D0]
 * 00000001800C195B: call    sub_18001C61C
 * 00000001800C1960: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C1965: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C196A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C196F: mov     rcx, rax
 * 00000001800C1972: call    sub_18007C3DC
 * 00000001800C1977: nop
 * 00000001800C1978: lea     rcx, [rbp+9E40h+var_330]
 * 00000001800C197F: call    sub_180010F30
 * 00000001800C1984: nop
 * 00000001800C1985: lea     rcx, [rbp+9E40h+var_310]
 * 00000001800C198C: call    sub_180010F30
 * 00000001800C1991: nop
 * 00000001800C1992: lea     rcx, dword_1801D9668
 * 00000001800C1999: call    sub_18000C538
 * 00000001800C199E: mov     rax, [rdi+rbx*8]
 * 00000001800C19A2: mov     ecx, [r15+rax]
 * 00000001800C19A6: cmp     cs:dword_1801D966C, ecx
 * 00000001800C19AC: jle     loc_1800C1A89
 * 00000001800C19B2: lea     rcx, dword_1801D966C
 * 00000001800C19B9: call    sub_18000C5A0
 * 00000001800C19BE: cmp     cs:dword_1801D966C, r14d
 * 00000001800C19C5: jnz     loc_1800C1A89
 * 00000001800C19CB: call    sub_1800B199C
 * 00000001800C19D0: mov     qword ptr [rbp+9E40h+var_8DD0], rax
 * 00000001800C19D7: add     rax, 1A50h
 * 00000001800C19DD: mov     qword ptr [rbp+9E40h+var_8DD0+8], rax
 * 00000001800C19E4: movups  xmm7, [rbp+9E40h+var_8DD0]
 * 00000001800C19EB: movups  [rbp+9E40h+var_6B10], xmm7
 * 00000001800C19F2: mov     dword ptr [rbp+9E40h+var_6B00], esi
 * 00000001800C19F8: mov     dword ptr [rbp+9E40h+var_6B00+4], esi
 * 00000001800C19FE: movups  xmm6, [rbp+9E40h+var_6B00]
 * 00000001800C1A05: call    sub_1800B1A0C
 * 00000001800C1A0A: mov     r8, rax
 * 00000001800C1A0D: mov     r9d, r12d
 * 00000001800C1A10: mov     edx, 1E2h
 * 00000001800C1A15: lea     rcx, [rbp+9E40h+var_2B0]; Src
 * 00000001800C1A1C: call    sub_18007C338
 * 00000001800C1A21: nop
 * 00000001800C1A22: mov     r8, rax
 * 00000001800C1A25: mov     rdx, r13
 * 00000001800C1A28: lea     rcx, [rbp+9E40h+var_2D0]
 * 00000001800C1A2F: call    sub_18001C6E8
 * 00000001800C1A34: nop
 * 00000001800C1A35: lea     r8, aVertex; "/Vertex"
 * 00000001800C1A3C: mov     rdx, rax
 * 00000001800C1A3F: lea     rcx, [rbp+9E40h+var_47B0]
 * 00000001800C1A46: call    sub_18001C61C
 * 00000001800C1A4B: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C1A50: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C1A55: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C1A5A: mov     rcx, rax
 * 00000001800C1A5D: call    sub_18007C3DC
 * 00000001800C1A62: nop
 * 00000001800C1A63: lea     rcx, [rbp+9E40h+var_2D0]
 * 00000001800C1A6A: call    sub_180010F30
 * 00000001800C1A6F: nop
 * 00000001800C1A70: lea     rcx, [rbp+9E40h+var_2B0]
 * 00000001800C1A77: call    sub_180010F30
 * 00000001800C1A7C: nop
 * 00000001800C1A7D: lea     rcx, dword_1801D966C
 * 00000001800C1A84: call    sub_18000C538
 * 00000001800C1A89: mov     rax, [rdi+rbx*8]
 * 00000001800C1A8D: mov     ecx, [r15+rax]
 * 00000001800C1A91: cmp     cs:dword_1801D9670, ecx
 * 00000001800C1A97: jle     loc_1800C1B74
 * 00000001800C1A9D: lea     rcx, dword_1801D9670
 * 00000001800C1AA4: call    sub_18000C5A0
 * 00000001800C1AA9: cmp     cs:dword_1801D9670, r14d
 * 00000001800C1AB0: jnz     loc_1800C1B74
 * 00000001800C1AB6: call    sub_1800B199C
 * 00000001800C1ABB: mov     qword ptr [rbp+9E40h+var_8DC0], rax
 * 00000001800C1AC2: add     rax, 1A50h
 * 00000001800C1AC8: mov     qword ptr [rbp+9E40h+var_8DC0+8], rax
 * 00000001800C1ACF: movups  xmm7, [rbp+9E40h+var_8DC0]
 * 00000001800C1AD6: movups  [rbp+9E40h+var_6AF0], xmm7
 * 00000001800C1ADD: mov     dword ptr [rbp+9E40h+var_6AE0], esi
 * 00000001800C1AE3: mov     dword ptr [rbp+9E40h+var_6AE0+4], esi
 * 00000001800C1AE9: movups  xmm6, [rbp+9E40h+var_6AE0]
 * 00000001800C1AF0: call    sub_1800B1A0C
 * 00000001800C1AF5: mov     r8, rax
 * 00000001800C1AF8: mov     r9d, r12d
 * 00000001800C1AFB: mov     edx, 1E8h
 * 00000001800C1B00: lea     rcx, [rbp+9E40h+var_250]; Src
 * 00000001800C1B07: call    sub_18007C338
 * 00000001800C1B0C: nop
 * 00000001800C1B0D: mov     r8, rax
 * 00000001800C1B10: mov     rdx, r13
 * 00000001800C1B13: lea     rcx, [rbp+9E40h+var_270]
 * 00000001800C1B1A: call    sub_18001C6E8
 * 00000001800C1B1F: nop
 * 00000001800C1B20: lea     r8, aVertex; "/Vertex"
 * 00000001800C1B27: mov     rdx, rax
 * 00000001800C1B2A: lea     rcx, [rbp+9E40h+var_4790]
 * 00000001800C1B31: call    sub_18001C61C
 * 00000001800C1B36: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C1B3B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C1B40: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C1B45: mov     rcx, rax
 * 00000001800C1B48: call    sub_18007C3DC
 * 00000001800C1B4D: nop
 * 00000001800C1B4E: lea     rcx, [rbp+9E40h+var_270]
 * 00000001800C1B55: call    sub_180010F30
 * 00000001800C1B5A: nop
 * 00000001800C1B5B: lea     rcx, [rbp+9E40h+var_250]
 * 00000001800C1B62: call    sub_180010F30
 * 00000001800C1B67: nop
 * 00000001800C1B68: lea     rcx, dword_1801D9670
 * 00000001800C1B6F: call    sub_18000C538
 * 00000001800C1B74: mov     rax, [rdi+rbx*8]
 * 00000001800C1B78: mov     ecx, [r15+rax]
 * 00000001800C1B7C: cmp     cs:dword_1801D9674, ecx
 * 00000001800C1B82: jle     loc_1800C1C5F
 * 00000001800C1B88: lea     rcx, dword_1801D9674
 * 00000001800C1B8F: call    sub_18000C5A0
 * 00000001800C1B94: cmp     cs:dword_1801D9674, r14d
 * 00000001800C1B9B: jnz     loc_1800C1C5F
 * 00000001800C1BA1: call    sub_1800B199C
 * 00000001800C1BA6: mov     qword ptr [rbp+9E40h+var_8DB0], rax
 * 00000001800C1BAD: add     rax, 1A50h
 * 00000001800C1BB3: mov     qword ptr [rbp+9E40h+var_8DB0+8], rax
 * 00000001800C1BBA: movups  xmm7, [rbp+9E40h+var_8DB0]
 * 00000001800C1BC1: movups  [rbp+9E40h+var_6AD0], xmm7
 * 00000001800C1BC8: mov     dword ptr [rbp+9E40h+var_6AC0], esi
 * 00000001800C1BCE: mov     dword ptr [rbp+9E40h+var_6AC0+4], esi
 * 00000001800C1BD4: movups  xmm6, [rbp+9E40h+var_6AC0]
 * 00000001800C1BDB: call    sub_1800B1A0C
 * 00000001800C1BE0: mov     r8, rax
 * 00000001800C1BE3: mov     r9d, r12d
 * 00000001800C1BE6: mov     edx, 1EAh
 * 00000001800C1BEB: lea     rcx, [rbp+9E40h+var_1F0]; Src
 * 00000001800C1BF2: call    sub_18007C338
 * 00000001800C1BF7: nop
 * 00000001800C1BF8: mov     r8, rax
 * 00000001800C1BFB: mov     rdx, r13
 * 00000001800C1BFE: lea     rcx, [rbp+9E40h+var_210]
 * 00000001800C1C05: call    sub_18001C6E8
 * 00000001800C1C0A: nop
 * 00000001800C1C0B: lea     r8, aVertex; "/Vertex"
 * 00000001800C1C12: mov     rdx, rax
 * 00000001800C1C15: lea     rcx, [rbp+9E40h+var_4770]
 * 00000001800C1C1C: call    sub_18001C61C
 * 00000001800C1C21: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C1C26: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C1C2B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C1C30: mov     rcx, rax
 * 00000001800C1C33: call    sub_18007C3DC
 * 00000001800C1C38: nop
 * 00000001800C1C39: lea     rcx, [rbp+9E40h+var_210]
 * 00000001800C1C40: call    sub_180010F30
 * 00000001800C1C45: nop
 * 00000001800C1C46: lea     rcx, [rbp+9E40h+var_1F0]
 * 00000001800C1C4D: call    sub_180010F30
 * 00000001800C1C52: nop
 * 00000001800C1C53: lea     rcx, dword_1801D9674
 * 00000001800C1C5A: call    sub_18000C538
 * 00000001800C1C5F: mov     rax, [rdi+rbx*8]
 * 00000001800C1C63: mov     ecx, [r15+rax]
 * 00000001800C1C67: cmp     cs:dword_1801D9678, ecx
 * 00000001800C1C6D: jle     loc_1800C1D4A
 * 00000001800C1C73: lea     rcx, dword_1801D9678
 * 00000001800C1C7A: call    sub_18000C5A0
 * 00000001800C1C7F: cmp     cs:dword_1801D9678, r14d
 * 00000001800C1C86: jnz     loc_1800C1D4A
 * 00000001800C1C8C: call    sub_1800B199C
 * 00000001800C1C91: mov     qword ptr [rbp+9E40h+var_8DA0], rax
 * 00000001800C1C98: add     rax, 1A50h
 * 00000001800C1C9E: mov     qword ptr [rbp+9E40h+var_8DA0+8], rax
 * 00000001800C1CA5: movups  xmm7, [rbp+9E40h+var_8DA0]
 * 00000001800C1CAC: movups  [rbp+9E40h+var_6AB0], xmm7
 * 00000001800C1CB3: mov     dword ptr [rbp+9E40h+var_6AA0], esi
 * 00000001800C1CB9: mov     dword ptr [rbp+9E40h+var_6AA0+4], esi
 * 00000001800C1CBF: movups  xmm6, [rbp+9E40h+var_6AA0]
 * 00000001800C1CC6: call    sub_1800B1A0C
 * 00000001800C1CCB: mov     r8, rax
 * 00000001800C1CCE: mov     r9d, r12d
 * 00000001800C1CD1: mov     edx, 1F0h
 * 00000001800C1CD6: lea     rcx, [rbp+9E40h+var_190]; Src
 * 00000001800C1CDD: call    sub_18007C338
 * 00000001800C1CE2: nop
 * 00000001800C1CE3: mov     r8, rax
 * 00000001800C1CE6: mov     rdx, r13
 * 00000001800C1CE9: lea     rcx, [rbp+9E40h+var_1B0]
 * 00000001800C1CF0: call    sub_18001C6E8
 * 00000001800C1CF5: nop
 * 00000001800C1CF6: lea     r8, aVertex; "/Vertex"
 * 00000001800C1CFD: mov     rdx, rax
 * 00000001800C1D00: lea     rcx, [rbp+9E40h+var_4750]
 * 00000001800C1D07: call    sub_18001C61C
 * 00000001800C1D0C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C1D11: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C1D16: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C1D1B: mov     rcx, rax
 * 00000001800C1D1E: call    sub_18007C3DC
 * 00000001800C1D23: nop
 * 00000001800C1D24: lea     rcx, [rbp+9E40h+var_1B0]
 * 00000001800C1D2B: call    sub_180010F30
 * 00000001800C1D30: nop
 * 00000001800C1D31: lea     rcx, [rbp+9E40h+var_190]
 * 00000001800C1D38: call    sub_180010F30
 * 00000001800C1D3D: nop
 * 00000001800C1D3E: lea     rcx, dword_1801D9678
 * 00000001800C1D45: call    sub_18000C538
 * 00000001800C1D4A: mov     rax, [rdi+rbx*8]
 * 00000001800C1D4E: mov     ecx, [r15+rax]
 * 00000001800C1D52: cmp     cs:dword_1801D967C, ecx
 * 00000001800C1D58: jle     loc_1800C1E35
 * 00000001800C1D5E: lea     rcx, dword_1801D967C
 * 00000001800C1D65: call    sub_18000C5A0
 * 00000001800C1D6A: cmp     cs:dword_1801D967C, r14d
 * 00000001800C1D71: jnz     loc_1800C1E35
 * 00000001800C1D77: call    sub_1800B199C
 * 00000001800C1D7C: mov     qword ptr [rbp+9E40h+var_8D90], rax
 * 00000001800C1D83: add     rax, 1A50h
 * 00000001800C1D89: mov     qword ptr [rbp+9E40h+var_8D90+8], rax
 * 00000001800C1D90: movups  xmm7, [rbp+9E40h+var_8D90]
 * 00000001800C1D97: movups  [rbp+9E40h+var_6A90], xmm7
 * 00000001800C1D9E: mov     dword ptr [rbp+9E40h+var_6A80], esi
 * 00000001800C1DA4: mov     dword ptr [rbp+9E40h+var_6A80+4], esi
 * 00000001800C1DAA: movups  xmm6, [rbp+9E40h+var_6A80]
 * 00000001800C1DB1: call    sub_1800B1A0C
 * 00000001800C1DB6: mov     r8, rax
 * 00000001800C1DB9: mov     r9d, r12d
 * 00000001800C1DBC: mov     edx, 1F2h
 * 00000001800C1DC1: lea     rcx, [rbp+9E40h+var_130]; Src
 * 00000001800C1DC8: call    sub_18007C338
 * 00000001800C1DCD: nop
 * 00000001800C1DCE: mov     r8, rax
 * 00000001800C1DD1: mov     rdx, r13
 * 00000001800C1DD4: lea     rcx, [rbp+9E40h+var_150]
 * 00000001800C1DDB: call    sub_18001C6E8
 * 00000001800C1DE0: nop
 * 00000001800C1DE1: lea     r8, aVertex; "/Vertex"
 * 00000001800C1DE8: mov     rdx, rax
 * 00000001800C1DEB: lea     rcx, [rbp+9E40h+var_4730]
 * 00000001800C1DF2: call    sub_18001C61C
 * 00000001800C1DF7: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C1DFC: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C1E01: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C1E06: mov     rcx, rax
 * 00000001800C1E09: call    sub_18007C3DC
 * 00000001800C1E0E: nop
 * 00000001800C1E0F: lea     rcx, [rbp+9E40h+var_150]
 * 00000001800C1E16: call    sub_180010F30
 * 00000001800C1E1B: nop
 * 00000001800C1E1C: lea     rcx, [rbp+9E40h+var_130]
 * 00000001800C1E23: call    sub_180010F30
 * 00000001800C1E28: nop
 * 00000001800C1E29: lea     rcx, dword_1801D967C
 * 00000001800C1E30: call    sub_18000C538
 * 00000001800C1E35: mov     rax, [rdi+rbx*8]
 * 00000001800C1E39: mov     ecx, [r15+rax]
 * 00000001800C1E3D: cmp     cs:dword_1801D9680, ecx
 * 00000001800C1E43: jle     loc_1800C1F20
 * 00000001800C1E49: lea     rcx, dword_1801D9680
 * 00000001800C1E50: call    sub_18000C5A0
 * 00000001800C1E55: cmp     cs:dword_1801D9680, r14d
 * 00000001800C1E5C: jnz     loc_1800C1F20
 * 00000001800C1E62: call    sub_1800B199C
 * 00000001800C1E67: mov     qword ptr [rbp+9E40h+var_8D80], rax
 * 00000001800C1E6E: add     rax, 1A50h
 * 00000001800C1E74: mov     qword ptr [rbp+9E40h+var_8D80+8], rax
 * 00000001800C1E7B: movups  xmm7, [rbp+9E40h+var_8D80]
 * 00000001800C1E82: movups  [rbp+9E40h+var_6A70], xmm7
 * 00000001800C1E89: mov     dword ptr [rbp+9E40h+var_6A60], esi
 * 00000001800C1E8F: mov     dword ptr [rbp+9E40h+var_6A60+4], esi
 * 00000001800C1E95: movups  xmm6, [rbp+9E40h+var_6A60]
 * 00000001800C1E9C: call    sub_1800B1A0C
 * 00000001800C1EA1: mov     r8, rax
 * 00000001800C1EA4: mov     r9d, r12d
 * 00000001800C1EA7: mov     edx, 1F8h
 * 00000001800C1EAC: lea     rcx, [rbp+9E40h+var_D0]; Src
 * 00000001800C1EB3: call    sub_18007C338
 * 00000001800C1EB8: nop
 * 00000001800C1EB9: mov     r8, rax
 * 00000001800C1EBC: mov     rdx, r13
 * 00000001800C1EBF: lea     rcx, [rbp+9E40h+var_F0]
 * 00000001800C1EC6: call    sub_18001C6E8
 * 00000001800C1ECB: nop
 * 00000001800C1ECC: lea     r8, aVertex; "/Vertex"
 * 00000001800C1ED3: mov     rdx, rax
 * 00000001800C1ED6: lea     rcx, [rbp+9E40h+var_4710]
 * 00000001800C1EDD: call    sub_18001C61C
 * 00000001800C1EE2: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C1EE7: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C1EEC: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C1EF1: mov     rcx, rax
 * 00000001800C1EF4: call    sub_18007C3DC
 * 00000001800C1EF9: nop
 * 00000001800C1EFA: lea     rcx, [rbp+9E40h+var_F0]
 * 00000001800C1F01: call    sub_180010F30
 * 00000001800C1F06: nop
 * 00000001800C1F07: lea     rcx, [rbp+9E40h+var_D0]
 * 00000001800C1F0E: call    sub_180010F30
 * 00000001800C1F13: nop
 * 00000001800C1F14: lea     rcx, dword_1801D9680
 * 00000001800C1F1B: call    sub_18000C538
 * 00000001800C1F20: mov     rax, [rdi+rbx*8]
 * 00000001800C1F24: mov     ecx, [r15+rax]
 * 00000001800C1F28: cmp     cs:dword_1801D9684, ecx
 * 00000001800C1F2E: jle     loc_1800C200B
 * 00000001800C1F34: lea     rcx, dword_1801D9684
 * 00000001800C1F3B: call    sub_18000C5A0
 * 00000001800C1F40: cmp     cs:dword_1801D9684, r14d
 * 00000001800C1F47: jnz     loc_1800C200B
 * 00000001800C1F4D: call    sub_1800B199C
 * 00000001800C1F52: mov     qword ptr [rbp+9E40h+var_8D70], rax
 * 00000001800C1F59: add     rax, 1A50h
 * 00000001800C1F5F: mov     qword ptr [rbp+9E40h+var_8D70+8], rax
 * 00000001800C1F66: movups  xmm7, [rbp+9E40h+var_8D70]
 * 00000001800C1F6D: movups  [rbp+9E40h+var_6A50], xmm7
 * 00000001800C1F74: mov     dword ptr [rbp+9E40h+var_6A40], esi
 * 00000001800C1F7A: mov     dword ptr [rbp+9E40h+var_6A40+4], esi
 * 00000001800C1F80: movups  xmm6, [rbp+9E40h+var_6A40]
 * 00000001800C1F87: call    sub_1800B1A0C
 * 00000001800C1F8C: mov     r8, rax
 * 00000001800C1F8F: mov     r9d, r12d
 * 00000001800C1F92: mov     edx, 1FAh
 * 00000001800C1F97: lea     rcx, [rbp+9E40h+var_70]; Src
 * 00000001800C1F9E: call    sub_18007C338
 * 00000001800C1FA3: nop
 * 00000001800C1FA4: mov     r8, rax
 * 00000001800C1FA7: mov     rdx, r13
 * 00000001800C1FAA: lea     rcx, [rbp+9E40h+var_90]
 * 00000001800C1FB1: call    sub_18001C6E8
 * 00000001800C1FB6: nop
 * 00000001800C1FB7: lea     r8, aVertex; "/Vertex"
 * 00000001800C1FBE: mov     rdx, rax
 * 00000001800C1FC1: lea     rcx, [rbp+9E40h+var_46F0]
 * 00000001800C1FC8: call    sub_18001C61C
 * 00000001800C1FCD: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800C1FD2: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800C1FD7: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800C1FDC: mov     rcx, rax
 * 00000001800C1FDF: call    sub_18007C3DC
 * 00000001800C1FE4: nop
 * 00000001800C1FE5: lea     rcx, [rbp+9E40h+var_90]
 * 00000001800C1FEC: call    sub_180010F30
 * 00000001800C1FF1: nop
 * 00000001800C1FF2: lea     rcx, [rbp+9E40h+var_70]
 * 00000001800C1FF9: call    sub_180010F30
 * 00000001800C1FFE: nop
 * 00000001800C1FFF: lea     rcx, dword_1801D9684
 * 00000001800C2006: call    sub_18000C538
 * 00000001800C200B: xor     eax, eax
 * 00000001800C200D: mov     rcx, [rbp+9E40h+var_50]
 * 00000001800C2014: xor     rcx, rsp; StackCookie
 * 00000001800C2017: call    __security_check_cookie
 * 00000001800C201C: lea     r11, [rsp+9F40h+var_20]
 * 00000001800C2024: mov     rbx, [r11+30h]
 * 00000001800C2028: mov     rsi, [r11+38h]
 * 00000001800C202C: mov     rdi, [r11+40h]
 * 00000001800C2030: movaps  xmm6, xmmword ptr [r11-10h]
 * 00000001800C2035: movaps  xmm7, xmmword ptr [r11-20h]
 * 00000001800C203A: mov     rsp, r11
 * 00000001800C203D: pop     r15
 * 00000001800C203F: pop     r14
 * 00000001800C2041: pop     r13
 * 00000001800C2043: pop     r12
 * 00000001800C2045: pop     rbp
 * 00000001800C2046: retn
 */
