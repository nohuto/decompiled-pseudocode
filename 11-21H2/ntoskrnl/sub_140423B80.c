/*
 * XREFs of sub_140423B80 @ 0x140423B80
 * Callers:
 *     KeUserModeCallback @ 0x1407A3EC0 (KeUserModeCallback.c)
 * Callees:
 *     sub_14041F8A0 @ 0x14041F8A0 (sub_14041F8A0.c)
 *     sub_140423B80 @ 0x140423B80 (sub_140423B80.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140423B80 @ 0x140423B80
 * Reason: Hex-Rays returned no pseudocode for 0x140423B80
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140423B80: sub     rsp, 138h
 * 0000000140423B87: lea     rax, [rsp+138h+var_38]
 * 0000000140423B8F: movaps  [rsp+138h+var_108], xmm6
 * 0000000140423B94: movaps  [rsp+138h+var_F8], xmm7
 * 0000000140423B99: movaps  [rsp+138h+var_E8], xmm8
 * 0000000140423B9F: movaps  [rsp+138h+var_D8], xmm9
 * 0000000140423BA5: movaps  [rsp+138h+var_C8], xmm10
 * 0000000140423BAB: movaps  xmmword ptr [rax-80h], xmm11
 * 0000000140423BB0: movaps  xmmword ptr [rax-70h], xmm12
 * 0000000140423BB5: movaps  xmmword ptr [rax-60h], xmm13
 * 0000000140423BBA: movaps  xmmword ptr [rax-50h], xmm14
 * 0000000140423BBF: movaps  xmmword ptr [rax-40h], xmm15
 * 0000000140423BC4: mov     [rax-8], rbp
 * 0000000140423BC8: mov     rbp, rsp
 * 0000000140423BCB: mov     [rax], rbx
 * 0000000140423BCE: mov     [rax+8], rdi
 * 0000000140423BD2: mov     [rax+10h], rsi
 * 0000000140423BD6: mov     [rax+18h], r12
 * 0000000140423BDA: mov     [rax+20h], r13
 * 0000000140423BDE: mov     [rax+28h], r14
 * 0000000140423BE2: mov     [rax+30h], r15
 * 0000000140423BE6: xor     r10, r10
 * 0000000140423BE9: xor     r12, r12
 * 0000000140423BEC: xor     r13, r13
 * 0000000140423BEF: xor     r14, r14
 * 0000000140423BF2: xor     r15, r15
 * 0000000140423BF5: pxor    xmm6, xmm6
 * 0000000140423BF9: pxor    xmm7, xmm7
 * 0000000140423BFD: pxor    xmm8, xmm8
 * 0000000140423C02: pxor    xmm9, xmm9
 * 0000000140423C07: pxor    xmm10, xmm10
 * 0000000140423C0C: pxor    xmm11, xmm11
 * 0000000140423C11: pxor    xmm12, xmm12
 * 0000000140423C16: pxor    xmm13, xmm13
 * 0000000140423C1B: pxor    xmm14, xmm14
 * 0000000140423C20: pxor    xmm15, xmm15
 * 0000000140423C25: mov     [rbp+0D8h], rcx
 * 0000000140423C2C: mov     [rbp+0E0h], rdx
 * 0000000140423C33: mov     rbx, gs:188h
 * 0000000140423C3C: mov     [r8+20h], rsp
 * 0000000140423C40: mov     rsi, [rbx+90h]
 * 0000000140423C47: mov     [rbp+0D0h], rsi
 * 0000000140423C4E: cli
 * 0000000140423C4F: mov     [rbx+28h], r8
 * 0000000140423C53: mov     [rbx+38h], r9
 * 0000000140423C57: test    cs:byte_140E01840, 1
 * 0000000140423C5E: jnz     short loc_140423C6F
 * 0000000140423C60: mov     rdi, gs:8
 * 0000000140423C69: mov     [rdi+4], r8
 * 0000000140423C6D: jmp     short loc_140423C78
 * 0000000140423C6F: mov     gs:0A008h, r8
 * 0000000140423C78: mov     ecx, cs:dword_140D05050
 * 0000000140423C7E: sub     r9, rcx
 * 0000000140423C81: mov     gs:1A8h, r8
 * 0000000140423C8A: mov     [rbx+30h], r9
 * 0000000140423C8E: mov     rcx, [rsp+138h+arg_20]
 * 0000000140423C96: test    rcx, rcx
 * 0000000140423C99: jz      short loc_140423CE5
 * 0000000140423C9B: mov     [rbx+418h], rcx
 * 0000000140423CA2: sub     rcx, 3000h
 * 0000000140423CA9: mov     [rbx+420h], rcx
 * 0000000140423CB0: or      qword ptr [rbx+420h], 2
 * 0000000140423CB8: mov     rcx, [rsp+138h+arg_28]
 * 0000000140423CC0: mov     [rbx+410h], rcx
 * 0000000140423CC7: mov     gs:9828h, rcx
 * 0000000140423CD0: rdsspq  rdx
 * 0000000140423CD5: rstorssp qword ptr [rcx]
 * 0000000140423CD9: saveprevssp
 * 0000000140423CDD: sub     rdx, 8
 * 0000000140423CE1: mov     [r8+40h], rdx
 * 0000000140423CE5: lea     rsp, [r8-190h]
 * 0000000140423CEC: mov     rdi, rsp
 * 0000000140423CEF: mov     ecx, 32h ; '2'
 * 0000000140423CF4: rep movsq
 * 0000000140423CF7: xor     edi, edi
 * 0000000140423CF9: test    byte ptr [rbx+0C2h], 3
 * 0000000140423D00: jnz     loc_140423FC9
 * 0000000140423D06: test    dword ptr [rbx], 8010000h
 * 0000000140423D0C: jnz     loc_140423FC9
 * 0000000140423D12: test    byte ptr gs:86Ch, 2
 * 0000000140423D1B: jnz     loc_140423FC9
 * 0000000140423D21: lea     rbp, [rsi-110h]
 * 0000000140423D28: ldmxcsr dword ptr [rbp-54h]
 * 0000000140423D2C: xor     esi, esi
 * 0000000140423D2E: test    byte ptr [rbx+3], 3
 * 0000000140423D32: jnz     loc_140423F9E
 * 0000000140423D38: mov     r9, cs:qword_140D07190
 * 0000000140423D3F: mov     rcx, gs:188h
 * 0000000140423D48: bt      dword ptr [rcx+74h], 16h
 * 0000000140423D4D: jnb     short loc_140423D79
 * 0000000140423D4F: xor     ecx, ecx
 * 0000000140423D51: rdsspq  rcx
 * 0000000140423D56: mov     r8, gs:9828h
 * 0000000140423D5F: add     r8, 8
 * 0000000140423D63: cmp     rcx, r8
 * 0000000140423D66: jnz     short loc_140423D79
 * 0000000140423D68: mov     rcx, gs:9820h
 * 0000000140423D71: rstorssp qword ptr [rcx]
 * 0000000140423D75: saveprevssp
 * 0000000140423D79: mov     byte ptr gs:856h, 0
 * 0000000140423D82: movzx   eax, word ptr gs:86Ah
 * 0000000140423D8B: cmp     gs:864h, ax
 * 0000000140423D94: jz      short loc_140423DA8
 * 0000000140423D96: mov     gs:864h, ax
 * 0000000140423D9F: mov     ecx, 48h ; 'H'
 * 0000000140423DA4: xor     edx, edx
 * 0000000140423DA6: wrmsr
 * 0000000140423DA8: btr     word ptr gs:860h, 2
 * 0000000140423DB3: jnb     short loc_140423DC3
 * 0000000140423DB5: mov     eax, 1
 * 0000000140423DBA: xor     edx, edx
 * 0000000140423DBC: mov     ecx, 49h ; 'I'
 * 0000000140423DC1: wrmsr
 * 0000000140423DC3: btr     word ptr gs:860h, 5
 * 0000000140423DCE: jnb     loc_140423F0B
 * 0000000140423DD4: call    loc_140423EE7
 * 0000000140423DD9: add     rsp, 8
 * 0000000140423DDD: call    loc_140423EF0
 * 0000000140423DE2: add     rsp, 8
 * 0000000140423DE6: call    loc_140423DD9
 * 0000000140423DEB: add     rsp, 8
 * 0000000140423DEF: call    loc_140423DE2
 * 0000000140423DF4: add     rsp, 8
 * 0000000140423DF8: call    loc_140423DEB
 * 0000000140423DFD: add     rsp, 8
 * 0000000140423E01: call    loc_140423DF4
 * 0000000140423E06: add     rsp, 8
 * 0000000140423E0A: call    loc_140423DFD
 * 0000000140423E0F: add     rsp, 8
 * 0000000140423E13: call    loc_140423E06
 * 0000000140423E18: add     rsp, 8
 * 0000000140423E1C: call    loc_140423E0F
 * 0000000140423E21: add     rsp, 8
 * 0000000140423E25: call    loc_140423E18
 * 0000000140423E2A: add     rsp, 8
 * 0000000140423E2E: call    loc_140423E21
 * 0000000140423E33: add     rsp, 8
 * 0000000140423E37: call    loc_140423E2A
 * 0000000140423E3C: add     rsp, 8
 * 0000000140423E40: call    loc_140423E33
 * 0000000140423E45: add     rsp, 8
 * 0000000140423E49: call    loc_140423E3C
 * 0000000140423E4E: add     rsp, 8
 * 0000000140423E52: call    loc_140423E45
 * 0000000140423E57: add     rsp, 8
 * 0000000140423E5B: call    loc_140423E4E
 * 0000000140423E60: add     rsp, 8
 * 0000000140423E64: call    loc_140423E57
 * 0000000140423E69: add     rsp, 8
 * 0000000140423E6D: call    loc_140423E60
 * 0000000140423E72: add     rsp, 8
 * 0000000140423E76: call    loc_140423E69
 * 0000000140423E7B: add     rsp, 8
 * 0000000140423E7F: call    loc_140423E72
 * 0000000140423E84: add     rsp, 8
 * 0000000140423E88: call    loc_140423E7B
 * 0000000140423E8D: add     rsp, 8
 * 0000000140423E91: call    loc_140423E84
 * 0000000140423E96: add     rsp, 8
 * 0000000140423E9A: call    loc_140423E8D
 * 0000000140423E9F: add     rsp, 8
 * 0000000140423EA3: call    loc_140423E96
 * 0000000140423EA8: add     rsp, 8
 * 0000000140423EAC: call    loc_140423E9F
 * 0000000140423EB1: add     rsp, 8
 * 0000000140423EB5: call    loc_140423EA8
 * 0000000140423EBA: add     rsp, 8
 * 0000000140423EBE: call    loc_140423EB1
 * 0000000140423EC3: add     rsp, 8
 * 0000000140423EC7: call    loc_140423EBA
 * 0000000140423ECC: add     rsp, 8
 * 0000000140423ED0: call    loc_140423EC3
 * 0000000140423ED5: add     rsp, 8
 * 0000000140423ED9: call    loc_140423ECC
 * 0000000140423EDE: add     rsp, 8
 * 0000000140423EE2: call    loc_140423ED5
 * 0000000140423EE7: add     rsp, 8
 * 0000000140423EEB: call    loc_140423EDE
 * 0000000140423EF0: add     rsp, 8
 * 0000000140423EF4: mov     eax, 0DADAh
 * 0000000140423EF9: test    byte ptr gs:862h, 8
 * 0000000140423F02: jz      short loc_140423F0B
 * 0000000140423F04: mov     al, 20h ; ' '
 * 0000000140423F06: incsspq rax
 * 0000000140423F0B: test    word ptr gs:860h, 80h
 * 0000000140423F16: jz      short loc_140423F24
 * 0000000140423F18: xor     eax, eax
 * 0000000140423F1A: xor     edx, edx
 * 0000000140423F1C: mov     ecx, 1
 * 0000000140423F21: div     rcx
 * 0000000140423F24: mov     rcx, r9
 * 0000000140423F27: xor     eax, eax
 * 0000000140423F29: xor     edx, edx
 * 0000000140423F2B: mov     r8, [rbp+100h]
 * 0000000140423F32: mov     r9, [rbp+0D8h]
 * 0000000140423F39: pxor    xmm0, xmm0
 * 0000000140423F3D: pxor    xmm1, xmm1
 * 0000000140423F41: pxor    xmm2, xmm2
 * 0000000140423F45: pxor    xmm3, xmm3
 * 0000000140423F49: pxor    xmm4, xmm4
 * 0000000140423F4D: pxor    xmm5, xmm5
 * 0000000140423F51: mov     r11, [rbp+0F8h]
 * 0000000140423F58: xor     ebx, ebx
 * 0000000140423F5A: test    cs:byte_140E01840, 1
 * 0000000140423F61: jnz     sub_140AB6DC0
 * 0000000140423F67: mov     rbp, r9
 * 0000000140423F6A: mov     rsp, r8
 * 0000000140423F6D: xor     r9d, r9d
 * 0000000140423F70: rdsspq  r9
 * 0000000140423F75: test    r9, r9
 * 0000000140423F78: jz      short loc_140423F82
 * 0000000140423F7A: clrssbsy qword ptr [r9]
 * 0000000140423F7F: xor     r9d, r9d
 * 0000000140423F82: test    word ptr gs:860h, 100h
 * 0000000140423F8D: jz      short loc_140423F98
 * 0000000140423F8F: verw    word ptr gs:0A02Ah
 * 0000000140423F98: swapgs
 * 0000000140423F9B: sysret
 * 0000000140423F9E: call    sub_14041F8A0
 * 0000000140423FA3: mov     r10, cs:qword_140D07190
 * 0000000140423FAA: mov     r9, [rbx+0B8h]
 * 0000000140423FB1: mov     r9, [r9+3D8h]
 * 0000000140423FB8: or      r9, r9
 * 0000000140423FBB: jnz     loc_140423D3F
 * 0000000140423FC1: xchg    r9, r10
 * 0000000140423FC4: jmp     loc_140423D3F
 * 0000000140423FC9: lea     rbp, [rsp+138h+var_B8]
 * 0000000140423FD1: mov     word ptr [rbp+0F0h], 33h ; '3'
 * 0000000140423FDA: mov     rax, cs:qword_140D07190
 * 0000000140423FE1: mov     [rbp+0E8h], rax
 * 0000000140423FE8: lea     rcx, loc_1404344E0
 * 0000000140423FEF: jmp     rcx
 * 0000000140423FF5: retn
 */
