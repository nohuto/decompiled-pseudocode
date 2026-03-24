/*
 * XREFs of KiCallUserMode @ 0x140422B80
 * Callers:
 *     KeUserModeCallback @ 0x14076ED90 (KeUserModeCallback.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14041E860 (KiRestoreDebugRegisterState.c)
 *     KiCallUserMode @ 0x140422B80 (KiCallUserMode.c)
 */

/*
 * Hex-Rays decompilation failed for KiCallUserMode @ 0x140422B80
 * Reason: Hex-Rays returned no pseudocode for 0x140422B80
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140422B80: sub     rsp, 138h
 * 0000000140422B87: lea     rax, [rsp+138h+var_38]
 * 0000000140422B8F: movaps  [rsp+138h+var_108], xmm6
 * 0000000140422B94: movaps  [rsp+138h+var_F8], xmm7
 * 0000000140422B99: movaps  [rsp+138h+var_E8], xmm8
 * 0000000140422B9F: movaps  [rsp+138h+var_D8], xmm9
 * 0000000140422BA5: movaps  [rsp+138h+var_C8], xmm10
 * 0000000140422BAB: movaps  xmmword ptr [rax-80h], xmm11
 * 0000000140422BB0: movaps  xmmword ptr [rax-70h], xmm12
 * 0000000140422BB5: movaps  xmmword ptr [rax-60h], xmm13
 * 0000000140422BBA: movaps  xmmword ptr [rax-50h], xmm14
 * 0000000140422BBF: movaps  xmmword ptr [rax-40h], xmm15
 * 0000000140422BC4: mov     [rax-8], rbp
 * 0000000140422BC8: mov     rbp, rsp
 * 0000000140422BCB: mov     [rax], rbx
 * 0000000140422BCE: mov     [rax+8], rdi
 * 0000000140422BD2: mov     [rax+10h], rsi
 * 0000000140422BD6: mov     [rax+18h], r12
 * 0000000140422BDA: mov     [rax+20h], r13
 * 0000000140422BDE: mov     [rax+28h], r14
 * 0000000140422BE2: mov     [rax+30h], r15
 * 0000000140422BE6: xor     r10, r10
 * 0000000140422BE9: xor     r12, r12
 * 0000000140422BEC: xor     r13, r13
 * 0000000140422BEF: xor     r14, r14
 * 0000000140422BF2: xor     r15, r15
 * 0000000140422BF5: pxor    xmm6, xmm6
 * 0000000140422BF9: pxor    xmm7, xmm7
 * 0000000140422BFD: pxor    xmm8, xmm8
 * 0000000140422C02: pxor    xmm9, xmm9
 * 0000000140422C07: pxor    xmm10, xmm10
 * 0000000140422C0C: pxor    xmm11, xmm11
 * 0000000140422C11: pxor    xmm12, xmm12
 * 0000000140422C16: pxor    xmm13, xmm13
 * 0000000140422C1B: pxor    xmm14, xmm14
 * 0000000140422C20: pxor    xmm15, xmm15
 * 0000000140422C25: mov     [rbp+0D8h], rcx
 * 0000000140422C2C: mov     [rbp+0E0h], rdx
 * 0000000140422C33: mov     rbx, gs:188h
 * 0000000140422C3C: mov     [r8+20h], rsp
 * 0000000140422C40: mov     rsi, [rbx+90h]
 * 0000000140422C47: mov     [rbp+0D0h], rsi
 * 0000000140422C4E: cli
 * 0000000140422C4F: mov     [rbx+28h], r8
 * 0000000140422C53: mov     [rbx+38h], r9
 * 0000000140422C57: test    cs:KiKvaShadow, 1
 * 0000000140422C5E: jnz     short loc_140422C6F
 * 0000000140422C60: mov     rdi, gs:8
 * 0000000140422C69: mov     [rdi+4], r8
 * 0000000140422C6D: jmp     short loc_140422C78
 * 0000000140422C6F: mov     gs:0A008h, r8
 * 0000000140422C78: mov     ecx, cs:KeKernelStackSize
 * 0000000140422C7E: sub     r9, rcx
 * 0000000140422C81: mov     gs:1A8h, r8
 * 0000000140422C8A: mov     [rbx+30h], r9
 * 0000000140422C8E: mov     rcx, [rsp+138h+arg_20]
 * 0000000140422C96: test    rcx, rcx
 * 0000000140422C99: jz      short loc_140422CE5
 * 0000000140422C9B: mov     [rbx+418h], rcx
 * 0000000140422CA2: sub     rcx, 3000h
 * 0000000140422CA9: mov     [rbx+420h], rcx
 * 0000000140422CB0: or      qword ptr [rbx+420h], 2
 * 0000000140422CB8: mov     rcx, [rsp+138h+arg_28]
 * 0000000140422CC0: mov     [rbx+410h], rcx
 * 0000000140422CC7: mov     gs:95A8h, rcx
 * 0000000140422CD0: rdsspq  rdx
 * 0000000140422CD5: rstorssp qword ptr [rcx]
 * 0000000140422CD9: saveprevssp
 * 0000000140422CDD: sub     rdx, 8
 * 0000000140422CE1: mov     [r8+40h], rdx
 * 0000000140422CE5: lea     rsp, [r8-190h]
 * 0000000140422CEC: mov     rdi, rsp
 * 0000000140422CEF: mov     ecx, 32h ; '2'
 * 0000000140422CF4: rep movsq
 * 0000000140422CF7: xor     edi, edi
 * 0000000140422CF9: test    byte ptr [rbx+0C2h], 3
 * 0000000140422D00: jnz     loc_140422FC9
 * 0000000140422D06: test    dword ptr [rbx], 8010000h
 * 0000000140422D0C: jnz     loc_140422FC9
 * 0000000140422D12: test    byte ptr gs:86Ch, 2
 * 0000000140422D1B: jnz     loc_140422FC9
 * 0000000140422D21: lea     rbp, [rsi-110h]
 * 0000000140422D28: ldmxcsr dword ptr [rbp-54h]
 * 0000000140422D2C: xor     esi, esi
 * 0000000140422D2E: test    byte ptr [rbx+3], 3
 * 0000000140422D32: jnz     loc_140422F9E
 * 0000000140422D38: mov     r9, cs:qword_140D1F350
 * 0000000140422D3F: mov     rcx, gs:188h
 * 0000000140422D48: bt      dword ptr [rcx+74h], 16h
 * 0000000140422D4D: jnb     short loc_140422D79
 * 0000000140422D4F: xor     ecx, ecx
 * 0000000140422D51: rdsspq  rcx
 * 0000000140422D56: mov     r8, gs:95A8h
 * 0000000140422D5F: add     r8, 8
 * 0000000140422D63: cmp     rcx, r8
 * 0000000140422D66: jnz     short loc_140422D79
 * 0000000140422D68: mov     rcx, gs:95A0h
 * 0000000140422D71: rstorssp qword ptr [rcx]
 * 0000000140422D75: saveprevssp
 * 0000000140422D79: mov     byte ptr gs:856h, 0
 * 0000000140422D82: movzx   eax, word ptr gs:86Ah
 * 0000000140422D8B: cmp     gs:864h, ax
 * 0000000140422D94: jz      short loc_140422DA8
 * 0000000140422D96: mov     gs:864h, ax
 * 0000000140422D9F: mov     ecx, 48h ; 'H'
 * 0000000140422DA4: xor     edx, edx
 * 0000000140422DA6: wrmsr
 * 0000000140422DA8: btr     word ptr gs:860h, 2
 * 0000000140422DB3: jnb     short loc_140422DC3
 * 0000000140422DB5: mov     eax, 1
 * 0000000140422DBA: xor     edx, edx
 * 0000000140422DBC: mov     ecx, 49h ; 'I'
 * 0000000140422DC1: wrmsr
 * 0000000140422DC3: btr     word ptr gs:860h, 5
 * 0000000140422DCE: jnb     loc_140422F0B
 * 0000000140422DD4: call    loc_140422EE7
 * 0000000140422DD9: add     rsp, 8
 * 0000000140422DDD: call    loc_140422EF0
 * 0000000140422DE2: add     rsp, 8
 * 0000000140422DE6: call    loc_140422DD9
 * 0000000140422DEB: add     rsp, 8
 * 0000000140422DEF: call    loc_140422DE2
 * 0000000140422DF4: add     rsp, 8
 * 0000000140422DF8: call    loc_140422DEB
 * 0000000140422DFD: add     rsp, 8
 * 0000000140422E01: call    loc_140422DF4
 * 0000000140422E06: add     rsp, 8
 * 0000000140422E0A: call    loc_140422DFD
 * 0000000140422E0F: add     rsp, 8
 * 0000000140422E13: call    loc_140422E06
 * 0000000140422E18: add     rsp, 8
 * 0000000140422E1C: call    loc_140422E0F
 * 0000000140422E21: add     rsp, 8
 * 0000000140422E25: call    loc_140422E18
 * 0000000140422E2A: add     rsp, 8
 * 0000000140422E2E: call    loc_140422E21
 * 0000000140422E33: add     rsp, 8
 * 0000000140422E37: call    loc_140422E2A
 * 0000000140422E3C: add     rsp, 8
 * 0000000140422E40: call    loc_140422E33
 * 0000000140422E45: add     rsp, 8
 * 0000000140422E49: call    loc_140422E3C
 * 0000000140422E4E: add     rsp, 8
 * 0000000140422E52: call    loc_140422E45
 * 0000000140422E57: add     rsp, 8
 * 0000000140422E5B: call    loc_140422E4E
 * 0000000140422E60: add     rsp, 8
 * 0000000140422E64: call    loc_140422E57
 * 0000000140422E69: add     rsp, 8
 * 0000000140422E6D: call    loc_140422E60
 * 0000000140422E72: add     rsp, 8
 * 0000000140422E76: call    loc_140422E69
 * 0000000140422E7B: add     rsp, 8
 * 0000000140422E7F: call    loc_140422E72
 * 0000000140422E84: add     rsp, 8
 * 0000000140422E88: call    loc_140422E7B
 * 0000000140422E8D: add     rsp, 8
 * 0000000140422E91: call    loc_140422E84
 * 0000000140422E96: add     rsp, 8
 * 0000000140422E9A: call    loc_140422E8D
 * 0000000140422E9F: add     rsp, 8
 * 0000000140422EA3: call    loc_140422E96
 * 0000000140422EA8: add     rsp, 8
 * 0000000140422EAC: call    loc_140422E9F
 * 0000000140422EB1: add     rsp, 8
 * 0000000140422EB5: call    loc_140422EA8
 * 0000000140422EBA: add     rsp, 8
 * 0000000140422EBE: call    loc_140422EB1
 * 0000000140422EC3: add     rsp, 8
 * 0000000140422EC7: call    loc_140422EBA
 * 0000000140422ECC: add     rsp, 8
 * 0000000140422ED0: call    loc_140422EC3
 * 0000000140422ED5: add     rsp, 8
 * 0000000140422ED9: call    loc_140422ECC
 * 0000000140422EDE: add     rsp, 8
 * 0000000140422EE2: call    loc_140422ED5
 * 0000000140422EE7: add     rsp, 8
 * 0000000140422EEB: call    loc_140422EDE
 * 0000000140422EF0: add     rsp, 8
 * 0000000140422EF4: mov     eax, 0DADAh
 * 0000000140422EF9: test    byte ptr gs:862h, 8
 * 0000000140422F02: jz      short loc_140422F0B
 * 0000000140422F04: mov     al, 20h ; ' '
 * 0000000140422F06: incsspq rax
 * 0000000140422F0B: test    word ptr gs:860h, 80h
 * 0000000140422F16: jz      short loc_140422F24
 * 0000000140422F18: xor     eax, eax
 * 0000000140422F1A: xor     edx, edx
 * 0000000140422F1C: mov     ecx, 1
 * 0000000140422F21: div     rcx
 * 0000000140422F24: mov     rcx, r9
 * 0000000140422F27: xor     eax, eax
 * 0000000140422F29: xor     edx, edx
 * 0000000140422F2B: mov     r8, [rbp+100h]
 * 0000000140422F32: mov     r9, [rbp+0D8h]
 * 0000000140422F39: pxor    xmm0, xmm0
 * 0000000140422F3D: pxor    xmm1, xmm1
 * 0000000140422F41: pxor    xmm2, xmm2
 * 0000000140422F45: pxor    xmm3, xmm3
 * 0000000140422F49: pxor    xmm4, xmm4
 * 0000000140422F4D: pxor    xmm5, xmm5
 * 0000000140422F51: mov     r11, [rbp+0F8h]
 * 0000000140422F58: xor     ebx, ebx
 * 0000000140422F5A: test    cs:KiKvaShadow, 1
 * 0000000140422F61: jnz     KiKernelSysretExit
 * 0000000140422F67: mov     rbp, r9
 * 0000000140422F6A: mov     rsp, r8
 * 0000000140422F6D: xor     r9, r9
 * 0000000140422F70: rdsspq  r9
 * 0000000140422F75: test    r9, r9
 * 0000000140422F78: jz      short loc_140422F82
 * 0000000140422F7A: clrssbsy qword ptr [r9]
 * 0000000140422F7F: xor     r9, r9
 * 0000000140422F82: test    word ptr gs:860h, 100h
 * 0000000140422F8D: jz      short loc_140422F98
 * 0000000140422F8F: verw    word ptr gs:0A02Ah
 * 0000000140422F98: swapgs
 * 0000000140422F9B: sysret
 * 0000000140422F9E: call    KiRestoreDebugRegisterState
 * 0000000140422FA3: mov     r10, cs:qword_140D1F350
 * 0000000140422FAA: mov     r9, [rbx+0B8h]
 * 0000000140422FB1: mov     r9, [r9+3D8h]
 * 0000000140422FB8: or      r9, r9
 * 0000000140422FBB: jnz     loc_140422D3F
 * 0000000140422FC1: xchg    r9, r10
 * 0000000140422FC4: jmp     loc_140422D3F
 * 0000000140422FC9: lea     rbp, [rsp+138h+var_B8]
 * 0000000140422FD1: mov     word ptr [rbp+0F0h], 33h ; '3'
 * 0000000140422FDA: mov     rax, cs:qword_140D1F350
 * 0000000140422FE1: mov     [rbp+0E8h], rax
 * 0000000140422FE8: lea     rcx, KiSystemServiceExit
 * 0000000140422FEF: jmp     rcx
 * 0000000140422FF5: retn
 */
