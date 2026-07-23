/*
 * XREFs of sub_14020C9F0 @ 0x14020C9F0
 * Callers:
 *     sub_1403D5E00 @ 0x1403D5E00 (sub_1403D5E00.c)
 *     sub_140428D90 @ 0x140428D90 (sub_140428D90.c)
 * Callees:
 *     sub_14020D230 @ 0x14020D230 (sub_14020D230.c)
 *     sub_140418B80 @ 0x140418B80 (sub_140418B80.c)
 *     sub_140418D5C @ 0x140418D5C (sub_140418D5C.c)
 *     sub_1404359C0 @ 0x1404359C0 (sub_1404359C0.c)
 *     sub_14045A748 @ 0x14045A748 (sub_14045A748.c)
 *     sub_14045A8C6 @ 0x14045A8C6 (sub_14045A8C6.c)
 */

/*
 * Hex-Rays decompilation failed for sub_14020C9F0 @ 0x14020C9F0
 * Reason: Hex-Rays returned no pseudocode for 0x14020C9F0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014020C9F0: push    rbx
 * 000000014020C9F2: push    r13
 * 000000014020C9F4: sub     rsp, 88h
 * 000000014020C9FB: movups  xmm0, cs:xmmword_140D06920
 * 000000014020CA02: mov     rbx, gs:20h
 * 000000014020CA0B: mov     r13, rcx
 * 000000014020CA0E: movsd   xmm1, cs:qword_140D06930
 * 000000014020CA16: movups  [rsp+98h+var_58], xmm0
 * 000000014020CA1B: mov     r10, qword ptr [rsp+98h+var_58]
 * 000000014020CA20: bt      r10, 24h ; '$'
 * 000000014020CA25: movsd   [rsp+98h+var_48], xmm1
 * 000000014020CA2B: jnb     loc_14020D21D
 * 000000014020CA31: cli
 * 000000014020CA32: movzx   eax, word ptr [rbx+6E0h]
 * 000000014020CA39: mov     ecx, 0FFEFh
 * 000000014020CA3E: and     ax, cx
 * 000000014020CA41: mov     ecx, 0FFBFh
 * 000000014020CA46: and     ax, cx
 * 000000014020CA49: mov     ecx, 0FFFDh
 * 000000014020CA4E: and     ax, cx
 * 000000014020CA51: mov     ecx, 0FFFBh
 * 000000014020CA56: and     ax, cx
 * 000000014020CA59: mov     ecx, 0FFF7h
 * 000000014020CA5E: and     ax, cx
 * 000000014020CA61: mov     ecx, 0FDFFh
 * 000000014020CA66: and     ax, cx
 * 000000014020CA69: mov     ecx, 0FFDFh
 * 000000014020CA6E: and     ax, cx
 * 000000014020CA71: mov     [rbx+6E0h], ax
 * 000000014020CA78: test    r10b, 1
 * 000000014020CA7C: jz      short loc_14020CA96
 * 000000014020CA7E: mov     rdx, r13
 * 000000014020CA81: mov     rcx, rbx
 * 000000014020CA84: call    sub_14045A8C6
 * 000000014020CA89: sti
 * 000000014020CA8A: add     rsp, 88h
 * 000000014020CA91: pop     r13
 * 000000014020CA93: pop     rbx
 * 000000014020CA94: retn
 * 000000014020CA96: movzx   r9d, word ptr [rbx+6E4h]
 * 000000014020CA9E: mov     rax, 20000000000h
 * 000000014020CAA8: mov     [rsp+98h+arg_0], rbp
 * 000000014020CAB0: mov     [rsp+98h+var_18], rsi
 * 000000014020CAB8: mov     [rsp+98h+var_20], rdi
 * 000000014020CABD: mov     [rsp+98h+var_28], r12
 * 000000014020CAC2: xor     r12b, r12b
 * 000000014020CAC5: mov     [rsp+98h+var_30], r14
 * 000000014020CACA: mov     r14, r10
 * 000000014020CACD: mov     [rsp+98h+var_38], r15
 * 000000014020CAD2: mov     [rsp+98h+arg_8], r12b
 * 000000014020CADA: and     r14, rax
 * 000000014020CADD: jz      short loc_14020CB0E
 * 000000014020CADF: movzx   eax, byte ptr [rbx+6D6h]
 * 000000014020CAE6: test    al, 2
 * 000000014020CAE8: jnz     short loc_14020CB0E
 * 000000014020CAEA: test    al, 1
 * 000000014020CAEC: jz      short loc_14020CB0E
 * 000000014020CAEE: movzx   r12d, byte ptr [rbx+6D4h]
 * 000000014020CAF6: movzx   r9d, word ptr [rbx+6D2h]
 * 000000014020CAFE: shr     r12b, 4
 * 000000014020CB02: and     r12b, 1
 * 000000014020CB06: mov     [rsp+98h+arg_8], 1
 * 000000014020CB0E: xor     eax, eax
 * 000000014020CB10: bt      r10, 26h ; '&'
 * 000000014020CB15: jnb     short loc_14020CB2A
 * 000000014020CB17: cmp     cs:dword_140C09828, 48h ; 'H'
 * 000000014020CB1E: jnz     short loc_14020CB2A
 * 000000014020CB20: or      r9w, 4
 * 000000014020CB25: mov     eax, 4
 * 000000014020CB2A: mov     [rbx+6E6h], ax
 * 000000014020CB31: mov     rdi, rbx
 * 000000014020CB34: mov     [rbx+6EAh], ax
 * 000000014020CB3B: mov     r15, rbx
 * 000000014020CB3E: mov     [rbx+6D0h], ax
 * 000000014020CB45: mov     rbp, rbx
 * 000000014020CB48: mov     rax, r10
 * 000000014020CB4B: mov     ecx, 80h
 * 000000014020CB50: and     eax, 2000h
 * 000000014020CB55: mov     [rsp+98h+var_60], rax
 * 000000014020CB5A: jz      short loc_14020CB6A
 * 000000014020CB5C: or      [rbx+6E6h], cx
 * 000000014020CB63: or      [rbx+6D0h], cx
 * 000000014020CB6A: mov     rcx, 80000000000h
 * 000000014020CB74: mov     rax, r10
 * 000000014020CB77: and     rax, rcx
 * 000000014020CB7A: mov     [rsp+98h+var_68], rax
 * 000000014020CB7F: jz      short loc_14020CB91
 * 000000014020CB81: or      word ptr [rdi+6E6h], 2
 * 000000014020CB89: or      word ptr [rbp+6D0h], 2
 * 000000014020CB91: mov     rax, 40000000000000h
 * 000000014020CB9B: mov     ecx, 400h
 * 000000014020CBA0: and     r10, rax
 * 000000014020CBA3: jz      short loc_14020CBB3
 * 000000014020CBA5: or      [rdi+6E6h], cx
 * 000000014020CBAC: or      [rbp+6D0h], cx
 * 000000014020CBB3: mov     eax, [r13+87Ch]
 * 000000014020CBBA: mov     r8d, eax
 * 000000014020CBBD: mov     r11, qword ptr [rsp+98h+var_58]
 * 000000014020CBC2: and     eax, 800000h
 * 000000014020CBC7: mov     rcx, [r13+9E0h]
 * 000000014020CBCE: and     r8d, 400000h
 * 000000014020CBD5: mov     rdx, [rbx+6D8h]
 * 000000014020CBDC: test    r8d, r8d
 * 000000014020CBDF: mov     [rsp+98h+arg_18], eax
 * 000000014020CBE6: mov     rsi, r11
 * 000000014020CBE9: mov     eax, 1
 * 000000014020CBEE: mov     [rsp+98h+arg_10], r8d
 * 000000014020CBF6: cmovz   rcx, rax
 * 000000014020CBFA: mov     [rsp+98h+var_70], rdx
 * 000000014020CBFF: mov     rax, 2000000000h
 * 000000014020CC09: mov     [rsp+98h+var_78], rcx
 * 000000014020CC0E: movzx   r8d, r11b
 * 000000014020CC12: and     rsi, rax
 * 000000014020CC15: jnz     loc_14020CE98
 * 000000014020CC1B: test    rcx, rcx
 * 000000014020CC1E: jnz     loc_14020CD38
 * 000000014020CC24: test    r11b, 2
 * 000000014020CC28: jz      short loc_14020CC49
 * 000000014020CC2A: test    r11b, 40h
 * 000000014020CC2E: jz      loc_14020CD10
 * 000000014020CC34: or      word ptr [rbp+6D0h], 2
 * 000000014020CC3C: test    r14, r14
 * 000000014020CC3F: jnz     short loc_14020CC49
 * 000000014020CC41: or      word ptr [rdi+6E6h], 2
 * 000000014020CC49: mov     eax, 0FFFBh
 * 000000014020CC4E: and     [rbx+6D2h], ax
 * 000000014020CC55: movzx   eax, r8b
 * 000000014020CC59: and     al, 42h
 * 000000014020CC5B: cmp     al, 42h ; 'B'
 * 000000014020CC5D: jnz     short loc_14020CC92
 * 000000014020CC5F: bt      r11, 20h ; ' '
 * 000000014020CC64: jb      short loc_14020CC73
 * 000000014020CC66: test    dword ptr [r13+9D0h], 40000000h
 * 000000014020CC71: jz      short loc_14020CC92
 * 000000014020CC73: or      word ptr [r15+6EAh], 2
 * 000000014020CC7C: test    r14, r14
 * 000000014020CC7F: jz      short loc_14020CC92
 * 000000014020CC81: cmp     r13, cs:PsInitialSystemProcess
 * 000000014020CC88: jz      short loc_14020CC92
 * 000000014020CC8A: or      word ptr [rdi+6E6h], 2
 * 000000014020CC92: cmp     [rsp+98h+var_68], 0
 * 000000014020CC98: jz      short loc_14020CCA3
 * 000000014020CC9A: or      word ptr [r15+6EAh], 2
 * 000000014020CCA3: bt      r11, 27h ; '''
 * 000000014020CCA8: jnb     short loc_14020CCC0
 * 000000014020CCAA: test    dword ptr [r13+9D4h], 2000h
 * 000000014020CCB5: jz      short loc_14020CCC0
 * 000000014020CCB7: or      word ptr [r15+6EAh], 4
 * 000000014020CCC0: mov     r11d, 400h
 * 000000014020CCC6: test    r10, r10
 * 000000014020CCC9: jz      short loc_14020CCD3
 * 000000014020CCCB: or      [r15+6EAh], r11w
 * 000000014020CCD3: test    rdx, rdx
 * 000000014020CCD6: jz      loc_14020CF59
 * 000000014020CCDC: cmp     rdx, rcx
 * 000000014020CCDF: jz      loc_14020CF59
 * 000000014020CCE5: cmp     rdx, [r13+9E8h]
 * 000000014020CCEC: jz      loc_14020CF59
 * 000000014020CCF2: test    r9b, 1
 * 000000014020CCF6: jz      loc_14020CF1D
 * 000000014020CCFC: test    r8b, 2
 * 000000014020CD00: jnz     loc_14020CECE
 * 000000014020CD06: and     r9w, 4
 * 000000014020CD0B: jmp     loc_14020CEF2
 * 000000014020CD10: test    r8b, 10h
 * 000000014020CD14: jz      loc_14020CC49
 * 000000014020CD1A: or      word ptr [rbp+6D0h], 1
 * 000000014020CD22: test    r14, r14
 * 000000014020CD25: jnz     loc_14020CC49
 * 000000014020CD2B: or      word ptr [rdi+6E6h], 1
 * 000000014020CD33: jmp     loc_14020CC49
 * 000000014020CD38: lea     rcx, [rsp+98h+var_58]
 * 000000014020CD3D: call    sub_140418B80
 * 000000014020CD42: test    eax, eax
 * 000000014020CD44: jnz     loc_14020CE16
 * 000000014020CD4A: lea     rcx, [rsp+98h+var_58]
 * 000000014020CD4F: call    sub_140418D5C
 * 000000014020CD54: test    eax, eax
 * 000000014020CD56: jnz     loc_14020CE16
 * 000000014020CD5C: test    r8b, 10h
 * 000000014020CD60: jz      short loc_14020CD8E
 * 000000014020CD62: or      word ptr [rbp+6D0h], 1
 * 000000014020CD6A: test    r14, r14
 * 000000014020CD6D: jnz     short loc_14020CD77
 * 000000014020CD6F: or      word ptr [rdi+6E6h], 1
 * 000000014020CD77: test    r8b, 20h
 * 000000014020CD7B: jnz     loc_14020CE77
 * 000000014020CD81: or      word ptr [rbx+6E0h], 2
 * 000000014020CD89: jmp     loc_14020CE77
 * 000000014020CD8E: movzx   eax, r8b
 * 000000014020CD92: and     al, 42h
 * 000000014020CD94: cmp     al, 42h ; 'B'
 * 000000014020CD96: jnz     short loc_14020CDD9
 * 000000014020CD98: or      word ptr [rbp+6D0h], 2
 * 000000014020CDA0: test    r14, r14
 * 000000014020CDA3: jnz     short loc_14020CDD9
 * 000000014020CDA5: or      word ptr [rdi+6E6h], 2
 * 000000014020CDAD: movzx   eax, word ptr [rbx+6E0h]
 * 000000014020CDB4: or      ax, 8
 * 000000014020CDB8: mov     [rbx+6E0h], ax
 * 000000014020CDBF: test    r8b, 8
 * 000000014020CDC3: jnz     loc_14020CE77
 * 000000014020CDC9: or      ax, 2
 * 000000014020CDCD: mov     [rbx+6E0h], ax
 * 000000014020CDD4: jmp     loc_14020CE77
 * 000000014020CDD9: movzx   eax, word ptr [rbx+6E0h]
 * 000000014020CDE0: test    r14, r14
 * 000000014020CDE3: jz      short loc_14020CDB4
 * 000000014020CDE5: or      ax, 10h
 * 000000014020CDE9: mov     [rbx+6E0h], ax
 * 000000014020CDF0: test    r8b, 20h
 * 000000014020CDF4: jnz     short loc_14020CE03
 * 000000014020CDF6: or      ax, 2
 * 000000014020CDFA: mov     [rbx+6E0h], ax
 * 000000014020CE01: jmp     short loc_14020CE77
 * 000000014020CE03: test    r8b, 8
 * 000000014020CE07: jnz     short loc_14020CE77
 * 000000014020CE09: or      ax, 40h
 * 000000014020CE0D: mov     [rbx+6E0h], ax
 * 000000014020CE14: jmp     short loc_14020CE77
 * 000000014020CE16: movzx   eax, word ptr [rbx+6E0h]
 * 000000014020CE1D: or      ax, 8
 * 000000014020CE21: mov     [rbx+6E0h], ax
 * 000000014020CE28: test    r8b, 8
 * 000000014020CE2C: jnz     short loc_14020CE39
 * 000000014020CE2E: or      ax, 2
 * 000000014020CE32: mov     [rbx+6E0h], ax
 * 000000014020CE39: test    r8b, 2
 * 000000014020CE3D: jz      short loc_14020CE77
 * 000000014020CE3F: test    r8b, 40h
 * 000000014020CE43: jz      short loc_14020CE5C
 * 000000014020CE45: or      word ptr [rbp+6D0h], 2
 * 000000014020CE4D: test    r14, r14
 * 000000014020CE50: jnz     short loc_14020CE77
 * 000000014020CE52: or      word ptr [rdi+6E6h], 2
 * 000000014020CE5A: jmp     short loc_14020CE77
 * 000000014020CE5C: test    r8b, 10h
 * 000000014020CE60: jz      short loc_14020CE77
 * 000000014020CE62: or      word ptr [rbp+6D0h], 1
 * 000000014020CE6A: test    r14, r14
 * 000000014020CE6D: jnz     short loc_14020CE77
 * 000000014020CE6F: or      word ptr [rdi+6E6h], 1
 * 000000014020CE77: test    byte ptr [rbx+6E2h], 30h
 * 000000014020CE7E: mov     rcx, [rsp+98h+var_78]
 * 000000014020CE83: mov     rdx, [rsp+98h+var_70]
 * 000000014020CE88: jz      short loc_14020CEA1
 * 000000014020CE8A: mov     eax, 200h
 * 000000014020CE8F: or      [rbx+6E0h], ax
 * 000000014020CE96: jmp     short loc_14020CEA1
 * 000000014020CE98: test    rcx, rcx
 * 000000014020CE9B: jz      loc_14020CC49
 * 000000014020CEA1: bt      r11, 27h ; '''
 * 000000014020CEA6: jnb     loc_14020CC49
 * 000000014020CEAC: or      word ptr [rbp+6D0h], 4
 * 000000014020CEB4: or      word ptr [rbx+6D2h], 4
 * 000000014020CEBC: or      word ptr [rdi+6E6h], 4
 * 000000014020CEC4: or      r9w, 4
 * 000000014020CEC9: jmp     loc_14020CC55
 * 000000014020CECE: movzx   eax, word ptr [rbx+6ECh]
 * 000000014020CED5: test    al, 4
 * 000000014020CED7: jnz     short loc_14020CEEC
 * 000000014020CED9: test    r14, r14
 * 000000014020CEDC: jz      short loc_14020CF05
 * 000000014020CEDE: test    byte ptr [rbx+6D6h], 1
 * 000000014020CEE5: jnz     short loc_14020CF05
 * 000000014020CEE7: and     r9w, 4
 * 000000014020CEEC: movzx   r8d, byte ptr [rsp+98h+var_58]
 * 000000014020CEF2: test    r9b, 1
 * 000000014020CEF6: jnz     short loc_14020CF36
 * 000000014020CEF8: mov     r12b, 1
 * 000000014020CEFB: mov     [rsp+98h+arg_8], r12b
 * 000000014020CF03: jmp     short loc_14020CF59
 * 000000014020CF05: movzx   r8d, byte ptr [rsp+98h+var_58]
 * 000000014020CF0B: test    r8b, 40h
 * 000000014020CF0F: jz      short loc_14020CEF2
 * 000000014020CF11: and     r9w, 4
 * 000000014020CF16: or      r9w, 2
 * 000000014020CF1B: jmp     short loc_14020CEF2
 * 000000014020CF1D: test    rsi, rsi
 * 000000014020CF20: jnz     short loc_14020CF36
 * 000000014020CF22: test    r8b, 10h
 * 000000014020CF26: jnz     short loc_14020CF36
 * 000000014020CF28: test    r14, r14
 * 000000014020CF2B: jz      short loc_14020CF59
 * 000000014020CF2D: test    byte ptr [rbx+6D6h], 2
 * 000000014020CF34: jnz     short loc_14020CF59
 * 000000014020CF36: movzx   eax, word ptr [rbx+6E0h]
 * 000000014020CF3D: or      ax, 4
 * 000000014020CF41: mov     [rbx+6E0h], ax
 * 000000014020CF48: test    r8b, 8
 * 000000014020CF4C: jnz     short loc_14020CF59
 * 000000014020CF4E: or      ax, 20h
 * 000000014020CF52: mov     [rbx+6E0h], ax
 * 000000014020CF59: mov     ecx, 80h
 * 000000014020CF5E: movzx   eax, r9w
 * 000000014020CF62: or      ax, cx
 * 000000014020CF65: cmp     [rsp+98h+var_60], 0
 * 000000014020CF6B: cmovz   ax, r9w
 * 000000014020CF70: movzx   ecx, ax
 * 000000014020CF73: or      cx, 2
 * 000000014020CF77: cmp     [rsp+98h+var_68], 0
 * 000000014020CF7D: cmovz   cx, ax
 * 000000014020CF81: movzx   esi, cx
 * 000000014020CF84: or      si, r11w
 * 000000014020CF88: test    r10, r10
 * 000000014020CF8B: cmovz   si, cx
 * 000000014020CF8F: test    r12b, r12b
 * 000000014020CF92: jz      short loc_14020CFE9
 * 000000014020CF94: mov     eax, 1
 * 000000014020CF99: xor     edx, edx
 * 000000014020CF9B: mov     ecx, 49h ; 'I'
 * 000000014020CFA0: wrmsr
 * 000000014020CFA2: test    r8b, 8
 * 000000014020CFA6: jnz     short loc_14020CFAD
 * 000000014020CFA8: call    sub_1404359C0
 * 000000014020CFAD: movzx   eax, word ptr [rbx+6E0h]
 * 000000014020CFB4: mov     ecx, 0FFFBh
 * 000000014020CFB9: and     ax, cx
 * 000000014020CFBC: mov     qword ptr [rbx+6D8h], 0
 * 000000014020CFC7: mov     ecx, 0FFDFh
 * 000000014020CFCC: mov     [rbx+6D2h], si
 * 000000014020CFD3: and     ax, cx
 * 000000014020CFD6: mov     [rbx+6E0h], ax
 * 000000014020CFDD: mov     eax, 0FFAFh
 * 000000014020CFE2: and     [rbx+6D4h], ax
 * 000000014020CFE9: movzx   eax, word ptr [rbx+6ECh]
 * 000000014020CFF0: movzx   edx, si
 * 000000014020CFF3: test    al, 4
 * 000000014020CFF5: jz      loc_14020D1B0
 * 000000014020CFFB: mov     rdx, [rsp+98h+var_78]
 * 000000014020D000: mov     r12d, 2
 * 000000014020D006: mov     rax, [rbx+2DB0h]
 * 000000014020D00D: cmp     [rsp+98h+var_70], rdx
 * 000000014020D012: jz      short loc_14020D01F
 * 000000014020D014: lock or [rbx+6ECh], r12w
 * 000000014020D01D: jmp     short loc_14020D069
 * 000000014020D01F: movzx   eax, word ptr [rax+6ECh]
 * 000000014020D026: movzx   ecx, word ptr [r15+6EAh]
 * 000000014020D02E: test    al, 1
 * 000000014020D030: jnz     short loc_14020D04D
 * 000000014020D032: or      cx, r12w
 * 000000014020D036: mov     [r15+6EAh], cx
 * 000000014020D03E: test    r14, r14
 * 000000014020D041: jz      short loc_14020D069
 * 000000014020D043: or      [rdi+6E6h], r12w
 * 000000014020D04B: jmp     short loc_14020D069
 * 000000014020D04D: mov     eax, 0FFFDh
 * 000000014020D052: and     cx, ax
 * 000000014020D055: mov     [r15+6EAh], cx
 * 000000014020D05D: test    r14, r14
 * 000000014020D060: jz      short loc_14020D069
 * 000000014020D062: and     [rdi+6E6h], ax
 * 000000014020D069: test    rdx, rdx
 * 000000014020D06C: jnz     loc_14020D0F5
 * 000000014020D072: mov     rcx, r13
 * 000000014020D075: call    sub_14020D230
 * 000000014020D07A: movzx   ecx, word ptr [rbx+6D2h]
 * 000000014020D081: mov     r10d, 0FFFCh
 * 000000014020D087: movzx   r8d, word ptr [rbp+6D0h]
 * 000000014020D08F: and     cx, r10w
 * 000000014020D093: and     r8w, 3
 * 000000014020D098: movzx   edx, si
 * 000000014020D09B: or      cx, r8w
 * 000000014020D09F: and     dx, r10w
 * 000000014020D0A3: mov     [rbx+6D2h], cx
 * 000000014020D0AA: mov     r9d, eax
 * 000000014020D0AD: test    r14, r14
 * 000000014020D0B0: jz      short loc_14020D0C1
 * 000000014020D0B2: test    byte ptr [rbx+6D6h], 1
 * 000000014020D0B9: jz      short loc_14020D0C1
 * 000000014020D0BB: neg     r8w
 * 000000014020D0BF: jmp     short loc_14020D0CC
 * 000000014020D0C1: movzx   eax, byte ptr [rdi+6E6h]
 * 000000014020D0C8: and     al, 3
 * 000000014020D0CA: neg     al
 * 000000014020D0CC: sbb     ax, ax
 * 000000014020D0CF: mov     r8b, 1
 * 000000014020D0D2: and     ax, r12w
 * 000000014020D0D6: or      dx, ax
 * 000000014020D0D9: cmp     [rsp+98h+arg_10], 0
 * 000000014020D0E1: jnz     loc_14020D1BC
 * 000000014020D0E7: lock or [rbx+6ECh], r12w
 * 000000014020D0F0: jmp     loc_14020D1BC
 * 000000014020D0F5: cmp     [rsp+98h+arg_18], 0
 * 000000014020D0FD: movzx   edx, si
 * 000000014020D100: jz      loc_14020D1B0
 * 000000014020D106: mov     edx, 100h
 * 000000014020D10B: prefetchw byte ptr [rbx+6ECh]
 * 000000014020D112: movzx   eax, word ptr [rbx+6ECh]
 * 000000014020D119: nop     dword ptr [rax+00000000h]
 * 000000014020D120: movzx   ecx, ax
 * 000000014020D123: or      cx, dx
 * 000000014020D126: lock cmpxchg [rbx+6ECh], cx
 * 000000014020D12F: jnz     short loc_14020D120
 * 000000014020D131: movzx   ecx, ax
 * 000000014020D134: mov     rax, qword ptr cs:xmmword_140D06920
 * 000000014020D13B: and     ecx, 1
 * 000000014020D13E: bt      rax, 29h ; ')'
 * 000000014020D143: jnb     short loc_14020D17F
 * 000000014020D145: movzx   eax, word ptr [rbp+6D0h]
 * 000000014020D14C: test    al, 3
 * 000000014020D14E: jnz     short loc_14020D15B
 * 000000014020D150: or      ax, r12w
 * 000000014020D154: mov     [rbp+6D0h], ax
 * 000000014020D15B: movzx   eax, word ptr [rbx+6D2h]
 * 000000014020D162: test    al, 3
 * 000000014020D164: jnz     short loc_14020D171
 * 000000014020D166: or      ax, r12w
 * 000000014020D16A: mov     [rbx+6D2h], ax
 * 000000014020D171: test    byte ptr [rbx+6D6h], 1
 * 000000014020D178: movzx   edx, si
 * 000000014020D17B: jz      short loc_14020D1A2
 * 000000014020D17D: jmp     short loc_14020D198
 * 000000014020D17F: movzx   eax, word ptr [rdi+6E6h]
 * 000000014020D186: test    al, 3
 * 000000014020D188: jnz     short loc_14020D195
 * 000000014020D18A: or      ax, r12w
 * 000000014020D18E: mov     [rdi+6E6h], ax
 * 000000014020D195: movzx   edx, si
 * 000000014020D198: test    sil, 3
 * 000000014020D19C: jnz     short loc_14020D1A2
 * 000000014020D19E: or      dx, r12w
 * 000000014020D1A2: lock or [rbx+6ECh], r12w
 * 000000014020D1AB: mov     r9d, ecx
 * 000000014020D1AE: jmp     short loc_14020D1B3
 * 000000014020D1B0: xor     r9d, r9d
 * 000000014020D1B3: movzx   r8d, [rsp+98h+arg_8]
 * 000000014020D1BC: mov     r15, [rsp+98h+var_38]
 * 000000014020D1C1: mov     r14, [rsp+98h+var_30]
 * 000000014020D1C6: mov     r12, [rsp+98h+var_28]
 * 000000014020D1CB: mov     rdi, [rsp+98h+var_20]
 * 000000014020D1D0: mov     rsi, [rsp+98h+var_18]
 * 000000014020D1D8: mov     rbp, [rsp+98h+arg_0]
 * 000000014020D1E0: cmp     dx, [rbx+6E4h]
 * 000000014020D1E7: jz      short loc_14020D200
 * 000000014020D1E9: mov     [rbx+6E4h], dx
 * 000000014020D1F0: mov     ecx, 48h ; 'H'
 * 000000014020D1F5: movzx   edx, dx
 * 000000014020D1F8: mov     eax, edx
 * 000000014020D1FA: shr     rdx, 20h
 * 000000014020D1FE: wrmsr
 * 000000014020D200: test    r8b, r8b
 * 000000014020D203: jz      short loc_14020D20C
 * 000000014020D205: or      byte ptr [rbx+6D6h], 2
 * 000000014020D20C: lfence
 * 000000014020D20F: sti
 * 000000014020D210: test    r9d, r9d
 * 000000014020D213: jz      short loc_14020D21D
 * 000000014020D215: mov     rcx, rbx
 * 000000014020D218: call    sub_14045A748
 * 000000014020D21D: add     rsp, 88h
 * 000000014020D224: pop     r13
 * 000000014020D226: pop     rbx
 * 000000014020D227: retn
 */
