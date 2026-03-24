/*
 * XREFs of KiUpdateSpeculationControl @ 0x1403259E0
 * Callers:
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x140381E90 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     SwapContext @ 0x140427D00 (SwapContext.c)
 * Callees:
 *     KiIsSrsoMitigationEnabled @ 0x1404102C4 (KiIsSrsoMitigationEnabled.c)
 *     KiFlushCurrentRsb @ 0x140434F00 (KiFlushCurrentRsb.c)
 *     KiSynchronizeStibpPairing @ 0x140460396 (KiSynchronizeStibpPairing.c)
 *     KiUpdateSpecCtrlEnhancedIBRS @ 0x1404605C8 (KiUpdateSpecCtrlEnhancedIBRS.c)
 *     KiUpdateStibpPairing @ 0x1404607C0 (KiUpdateStibpPairing.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     PsGetProcessSecurityDomain @ 0x1405A4158 (PsGetProcessSecurityDomain.c)
 */

/*
 * Hex-Rays decompilation failed for KiUpdateSpeculationControl @ 0x1403259E0
 * Reason: Hex-Rays returned no pseudocode for 0x1403259E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403259E0: push    rbx
 * 00000001403259E2: push    r13
 * 00000001403259E4: sub     rsp, 78h
 * 00000001403259E8: movups  xmm0, cs:KiSpeculationFeatures
 * 00000001403259EF: mov     rax, 1000000000h
 * 00000001403259F9: mov     rbx, gs:20h
 * 0000000140325A02: movsd   xmm1, cs:qword_140D1EAF0
 * 0000000140325A0A: mov     r13, rcx
 * 0000000140325A0D: movups  [rsp+88h+var_58], xmm0
 * 0000000140325A12: movsd   [rsp+88h+var_48], xmm1
 * 0000000140325A18: test    qword ptr [rsp+88h+var_58], rax
 * 0000000140325A1D: jz      loc_1403262B3
 * 0000000140325A23: mov     [rsp+88h+var_20], rdi
 * 0000000140325A28: cli
 * 0000000140325A29: movzx   eax, word ptr [rbx+6E0h]
 * 0000000140325A30: mov     ecx, 0FFEFh
 * 0000000140325A35: and     ax, cx
 * 0000000140325A38: mov     ecx, 0FFBFh
 * 0000000140325A3D: and     ax, cx
 * 0000000140325A40: mov     ecx, 0FFFDh
 * 0000000140325A45: and     ax, cx
 * 0000000140325A48: mov     ecx, 0FFFBh
 * 0000000140325A4D: and     ax, cx
 * 0000000140325A50: mov     ecx, 0FFF7h
 * 0000000140325A55: and     ax, cx
 * 0000000140325A58: mov     ecx, 0FDFFh
 * 0000000140325A5D: and     ax, cx
 * 0000000140325A60: mov     ecx, 0FFDFh
 * 0000000140325A65: and     ax, cx
 * 0000000140325A68: mov     rcx, r13
 * 0000000140325A6B: mov     [rbx+6E0h], ax
 * 0000000140325A72: call    PsGetProcessSecurityDomain
 * 0000000140325A77: mov     rdi, rax
 * 0000000140325A7A: mov     edx, 100h
 * 0000000140325A7F: mov     eax, [r13+87Ch]
 * 0000000140325A86: and     eax, 400000h
 * 0000000140325A8B: mov     [rsp+88h+arg_10], eax
 * 0000000140325A92: mov     eax, 1
 * 0000000140325A97: cmovz   rdi, rax
 * 0000000140325A9B: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 0000000140325AA2: bt      rax, 33h ; '3'
 * 0000000140325AA7: mov     [rsp+88h+var_60], rdi
 * 0000000140325AAC: jnb     short loc_140325AC8
 * 0000000140325AAE: test    rdi, rdi
 * 0000000140325AB1: jnz     short loc_140325AC1
 * 0000000140325AB3: mov     eax, 0FEFFh
 * 0000000140325AB8: and     [rbx+6E0h], ax
 * 0000000140325ABF: jmp     short loc_140325AC8
 * 0000000140325AC1: or      [rbx+6E0h], dx
 * 0000000140325AC8: test    byte ptr [rsp+88h+var_58], 1
 * 0000000140325ACD: jz      short loc_140325B27
 * 0000000140325ACF: mov     rdx, r13
 * 0000000140325AD2: mov     rcx, rbx
 * 0000000140325AD5: call    KiUpdateSpecCtrlEnhancedIBRS
 * 0000000140325ADA: mov     rcx, gs:20h
 * 0000000140325AE3: mov     r8, [rcx+88B8h]
 * 0000000140325AEA: test    r8, r8
 * 0000000140325AED: jz      short loc_140325B18
 * 0000000140325AEF: prefetchw byte ptr [r8]
 * 0000000140325AF3: mov     eax, [r8]
 * 0000000140325AF6: nop     word ptr [rax+rax+00000000h]
 * 0000000140325B00: mov     edx, eax
 * 0000000140325B02: btr     edx, 15h
 * 0000000140325B06: lock cmpxchg [r8], edx
 * 0000000140325B0B: jnz     short loc_140325B00
 * 0000000140325B0D: bt      eax, 15h
 * 0000000140325B11: jnb     short loc_140325B18
 * 0000000140325B13: call    KiRemoveSystemWorkPriorityKick
 * 0000000140325B18: sti
 * 0000000140325B19: mov     rdi, [rsp+88h+var_20]
 * 0000000140325B1E: add     rsp, 78h
 * 0000000140325B22: pop     r13
 * 0000000140325B24: pop     rbx
 * 0000000140325B25: retn
 * 0000000140325B27: mov     r8, qword ptr [rsp+88h+var_58]
 * 0000000140325B2C: movzx   r10d, word ptr [rbx+6E4h]
 * 0000000140325B34: mov     [rsp+88h+arg_0], rbp
 * 0000000140325B3C: mov     [rsp+88h+var_18], rsi
 * 0000000140325B41: mov     [rsp+88h+var_28], r12
 * 0000000140325B46: xor     r12b, r12b
 * 0000000140325B49: bt      r8, 29h ; ')'
 * 0000000140325B4E: mov     [rsp+88h+var_30], r14
 * 0000000140325B53: mov     [rsp+88h+var_38], r15
 * 0000000140325B58: mov     [rsp+88h+arg_8], r12b
 * 0000000140325B60: jnb     short loc_140325B91
 * 0000000140325B62: movzx   eax, byte ptr [rbx+6D6h]
 * 0000000140325B69: test    al, 2
 * 0000000140325B6B: jnz     short loc_140325B91
 * 0000000140325B6D: test    al, 1
 * 0000000140325B6F: jz      short loc_140325B91
 * 0000000140325B71: movzx   r12d, byte ptr [rbx+6D4h]
 * 0000000140325B79: movzx   r10d, word ptr [rbx+6D2h]
 * 0000000140325B81: shr     r12b, 4
 * 0000000140325B85: and     r12b, 1
 * 0000000140325B89: mov     [rsp+88h+arg_8], 1
 * 0000000140325B91: xor     eax, eax
 * 0000000140325B93: bt      r8, 26h ; '&'
 * 0000000140325B98: jnb     short loc_140325BAD
 * 0000000140325B9A: cmp     cs:KiSsbdMsr, 48h ; 'H'
 * 0000000140325BA1: jnz     short loc_140325BAD
 * 0000000140325BA3: or      r10w, 4
 * 0000000140325BA8: lea     ecx, [rax+4]
 * 0000000140325BAB: jmp     short loc_140325BB0
 * 0000000140325BAD: movzx   ecx, ax
 * 0000000140325BB0: mov     edx, 6EAh
 * 0000000140325BB5: mov     ebp, 6E6h
 * 0000000140325BBA: lea     rsi, [rbx+rdx]
 * 0000000140325BBE: mov     eax, 6D0h
 * 0000000140325BC3: lea     r14, [rbx+rax]
 * 0000000140325BC7: mov     r9, rbx
 * 0000000140325BCA: mov     r15, rbx
 * 0000000140325BCD: mov     r11, rbx
 * 0000000140325BD0: mov     [rbx+rbp], cx
 * 0000000140325BD4: movzx   edx, cx
 * 0000000140325BD7: mov     [rsi], cx
 * 0000000140325BDA: mov     r9d, 80h
 * 0000000140325BE0: mov     [r14], cx
 * 0000000140325BE4: bt      r8, 0Dh
 * 0000000140325BE9: jnb     short loc_140325C01
 * 0000000140325BEB: movzx   eax, cx
 * 0000000140325BEE: or      ax, r9w
 * 0000000140325BF2: or      dx, r9w
 * 0000000140325BF6: mov     [rbx+rbp], ax
 * 0000000140325BFA: mov     [r14], dx
 * 0000000140325BFE: movzx   ecx, ax
 * 0000000140325C01: bt      r8, 2Bh ; '+'
 * 0000000140325C06: jnb     short loc_140325C19
 * 0000000140325C08: or      cx, 2
 * 0000000140325C0C: or      dx, 2
 * 0000000140325C10: mov     [r15+rbp], cx
 * 0000000140325C15: mov     [r14], dx
 * 0000000140325C19: bt      r8, 36h ; '6'
 * 0000000140325C1E: mov     eax, 400h
 * 0000000140325C23: jnb     short loc_140325C34
 * 0000000140325C25: or      cx, ax
 * 0000000140325C28: or      dx, ax
 * 0000000140325C2B: mov     [r15+rbp], cx
 * 0000000140325C30: mov     [r14], dx
 * 0000000140325C34: mov     eax, [r13+87Ch]
 * 0000000140325C3B: mov     r9, qword ptr [rsp+88h+var_58]
 * 0000000140325C40: and     eax, 800000h
 * 0000000140325C45: mov     rcx, [rbx+6D8h]
 * 0000000140325C4C: mov     r11, r9
 * 0000000140325C4F: mov     [rsp+88h+arg_18], eax
 * 0000000140325C56: movzx   r8d, r9b
 * 0000000140325C5A: mov     rax, 2000000000h
 * 0000000140325C64: mov     [rsp+88h+var_68], rcx
 * 0000000140325C69: and     r11, rax
 * 0000000140325C6C: jnz     loc_140325E78
 * 0000000140325C72: test    rdi, rdi
 * 0000000140325C75: jnz     loc_140325D14
 * 0000000140325C7B: test    r9b, 2
 * 0000000140325C7F: jz      short loc_140325C99
 * 0000000140325C81: test    r9b, 40h
 * 0000000140325C85: jz      short loc_140325CFA
 * 0000000140325C87: or      word ptr [r14], 2
 * 0000000140325C8C: bt      r9, 29h ; ')'
 * 0000000140325C91: jb      short loc_140325C99
 * 0000000140325C93: or      word ptr [r15+rbp], 2
 * 0000000140325C99: mov     eax, 0FFFBh
 * 0000000140325C9E: and     [rbx+6D2h], ax
 * 0000000140325CA5: movzx   eax, r8b
 * 0000000140325CA9: and     al, 42h
 * 0000000140325CAB: cmp     al, 42h ; 'B'
 * 0000000140325CAD: jnz     loc_140325EA9
 * 0000000140325CB3: bt      r9, 20h ; ' '
 * 0000000140325CB8: jb      short loc_140325CCB
 * 0000000140325CBA: test    dword ptr [r13+9D0h], 40000000h
 * 0000000140325CC5: jz      loc_140325EA9
 * 0000000140325CCB: or      word ptr [rsi], 2
 * 0000000140325CCF: mov     rdx, 20000000000h
 * 0000000140325CD9: test    rdx, r9
 * 0000000140325CDC: jz      loc_140325EB3
 * 0000000140325CE2: cmp     r13, cs:PsInitialSystemProcess
 * 0000000140325CE9: jz      loc_140325EB3
 * 0000000140325CEF: or      word ptr [r15+rbp], 2
 * 0000000140325CF5: jmp     loc_140325EB3
 * 0000000140325CFA: test    r8b, 10h
 * 0000000140325CFE: jz      short loc_140325C99
 * 0000000140325D00: or      word ptr [r14], 1
 * 0000000140325D05: bt      r9, 29h ; ')'
 * 0000000140325D0A: jb      short loc_140325C99
 * 0000000140325D0C: or      word ptr [r15+rbp], 1
 * 0000000140325D12: jmp     short loc_140325C99
 * 0000000140325D14: mov     rax, r9
 * 0000000140325D17: mov     rcx, 300000008000h
 * 0000000140325D21: and     rax, rcx
 * 0000000140325D24: cmp     rax, 8000h
 * 0000000140325D2A: jz      loc_140325E01
 * 0000000140325D30: lea     rcx, [rsp+88h+var_58]
 * 0000000140325D35: call    KiIsSrsoMitigationEnabled
 * 0000000140325D3A: test    eax, eax
 * 0000000140325D3C: jnz     loc_140325E01
 * 0000000140325D42: test    r8b, 10h
 * 0000000140325D46: jz      short loc_140325D71
 * 0000000140325D48: or      word ptr [r14], 1
 * 0000000140325D4D: bt      r9, 29h ; ')'
 * 0000000140325D52: jb      short loc_140325D5A
 * 0000000140325D54: or      word ptr [r15+rbp], 1
 * 0000000140325D5A: test    r8b, 20h
 * 0000000140325D5E: jnz     loc_140325E5C
 * 0000000140325D64: or      word ptr [rbx+6E0h], 2
 * 0000000140325D6C: jmp     loc_140325E5C
 * 0000000140325D71: movzx   eax, r8b
 * 0000000140325D75: and     al, 42h
 * 0000000140325D77: cmp     al, 42h ; 'B'
 * 0000000140325D79: mov     rax, 20000000000h
 * 0000000140325D83: jnz     short loc_140325D95
 * 0000000140325D85: or      word ptr [r14], 2
 * 0000000140325D8A: test    rax, r9
 * 0000000140325D8D: jnz     short loc_140325D9A
 * 0000000140325D8F: or      word ptr [r15+rbp], 2
 * 0000000140325D95: test    rax, r9
 * 0000000140325D98: jz      short loc_140325DDC
 * 0000000140325D9A: movzx   eax, word ptr [rbx+6E0h]
 * 0000000140325DA1: or      ax, 10h
 * 0000000140325DA5: mov     [rbx+6E0h], ax
 * 0000000140325DAC: test    r8b, 20h
 * 0000000140325DB0: jnz     short loc_140325DC2
 * 0000000140325DB2: or      ax, 2
 * 0000000140325DB6: mov     [rbx+6E0h], ax
 * 0000000140325DBD: jmp     loc_140325E5C
 * 0000000140325DC2: test    r8b, 8
 * 0000000140325DC6: jnz     loc_140325E5C
 * 0000000140325DCC: or      ax, 40h
 * 0000000140325DD0: mov     [rbx+6E0h], ax
 * 0000000140325DD7: jmp     loc_140325E5C
 * 0000000140325DDC: movzx   eax, word ptr [rbx+6E0h]
 * 0000000140325DE3: or      ax, 8
 * 0000000140325DE7: mov     [rbx+6E0h], ax
 * 0000000140325DEE: test    r8b, 8
 * 0000000140325DF2: jnz     short loc_140325E5C
 * 0000000140325DF4: or      ax, 2
 * 0000000140325DF8: mov     [rbx+6E0h], ax
 * 0000000140325DFF: jmp     short loc_140325E5C
 * 0000000140325E01: movzx   eax, word ptr [rbx+6E0h]
 * 0000000140325E08: or      ax, 8
 * 0000000140325E0C: mov     [rbx+6E0h], ax
 * 0000000140325E13: test    r8b, 8
 * 0000000140325E17: jnz     short loc_140325E24
 * 0000000140325E19: or      ax, 2
 * 0000000140325E1D: mov     [rbx+6E0h], ax
 * 0000000140325E24: test    r8b, 2
 * 0000000140325E28: jz      short loc_140325E5C
 * 0000000140325E2A: test    r8b, 40h
 * 0000000140325E2E: jz      short loc_140325E44
 * 0000000140325E30: or      word ptr [r14], 2
 * 0000000140325E35: bt      r9, 29h ; ')'
 * 0000000140325E3A: jb      short loc_140325E5C
 * 0000000140325E3C: or      word ptr [r15+rbp], 2
 * 0000000140325E42: jmp     short loc_140325E5C
 * 0000000140325E44: test    r8b, 10h
 * 0000000140325E48: jz      short loc_140325E5C
 * 0000000140325E4A: or      word ptr [r14], 1
 * 0000000140325E4F: bt      r9, 29h ; ')'
 * 0000000140325E54: jb      short loc_140325E5C
 * 0000000140325E56: or      word ptr [r15+rbp], 1
 * 0000000140325E5C: test    byte ptr [rbx+6E2h], 30h
 * 0000000140325E63: mov     rcx, [rsp+88h+var_68]
 * 0000000140325E68: jz      short loc_140325E81
 * 0000000140325E6A: mov     eax, 200h
 * 0000000140325E6F: or      [rbx+6E0h], ax
 * 0000000140325E76: jmp     short loc_140325E81
 * 0000000140325E78: test    rdi, rdi
 * 0000000140325E7B: jz      loc_140325C99
 * 0000000140325E81: bt      r9, 27h ; '''
 * 0000000140325E86: jnb     loc_140325C99
 * 0000000140325E8C: or      word ptr [r14], 4
 * 0000000140325E91: or      word ptr [rbx+6D2h], 4
 * 0000000140325E99: or      word ptr [r15+rbp], 4
 * 0000000140325E9F: or      r10w, 4
 * 0000000140325EA4: jmp     loc_140325CA5
 * 0000000140325EA9: mov     rdx, 20000000000h
 * 0000000140325EB3: bt      r9, 2Bh ; '+'
 * 0000000140325EB8: jnb     short loc_140325EBE
 * 0000000140325EBA: or      word ptr [rsi], 2
 * 0000000140325EBE: bt      r9, 27h ; '''
 * 0000000140325EC3: jnb     short loc_140325ED6
 * 0000000140325EC5: test    dword ptr [r13+9D4h], 2000h
 * 0000000140325ED0: jz      short loc_140325ED6
 * 0000000140325ED2: or      word ptr [rsi], 4
 * 0000000140325ED6: bt      r9, 36h ; '6'
 * 0000000140325EDB: jnb     short loc_140325EE5
 * 0000000140325EDD: mov     eax, 400h
 * 0000000140325EE2: or      [rsi], ax
 * 0000000140325EE5: test    rcx, rcx
 * 0000000140325EE8: jz      loc_140325FAE
 * 0000000140325EEE: cmp     rcx, rdi
 * 0000000140325EF1: jz      loc_140325FAE
 * 0000000140325EF7: cmp     rcx, [r13+9E8h]
 * 0000000140325EFE: jz      loc_140325FAE
 * 0000000140325F04: test    r10b, 1
 * 0000000140325F08: jz      short loc_140325F72
 * 0000000140325F0A: bt      r9, 38h ; '8'
 * 0000000140325F0F: jb      short loc_140325F47
 * 0000000140325F11: test    r8b, 2
 * 0000000140325F15: jnz     short loc_140325F1E
 * 0000000140325F17: and     r10w, 4
 * 0000000140325F1C: jmp     short loc_140325F47
 * 0000000140325F1E: movzx   eax, word ptr [rbx+6ECh]
 * 0000000140325F25: mov     r9, qword ptr [rsp+88h+var_58]
 * 0000000140325F2A: test    al, 4
 * 0000000140325F2C: jnz     short loc_140325F41
 * 0000000140325F2E: test    rdx, r9
 * 0000000140325F31: jz      short loc_140325F5A
 * 0000000140325F33: test    byte ptr [rbx+6D6h], 1
 * 0000000140325F3A: jnz     short loc_140325F5A
 * 0000000140325F3C: and     r10w, 4
 * 0000000140325F41: movzx   r8d, byte ptr [rsp+88h+var_58]
 * 0000000140325F47: test    r10b, 1
 * 0000000140325F4B: jnz     short loc_140325F8B
 * 0000000140325F4D: mov     r12b, 1
 * 0000000140325F50: mov     [rsp+88h+arg_8], r12b
 * 0000000140325F58: jmp     short loc_140325FAE
 * 0000000140325F5A: movzx   r8d, byte ptr [rsp+88h+var_58]
 * 0000000140325F60: test    r8b, 40h
 * 0000000140325F64: jz      short loc_140325F47
 * 0000000140325F66: and     r10w, 4
 * 0000000140325F6B: or      r10w, 2
 * 0000000140325F70: jmp     short loc_140325F47
 * 0000000140325F72: test    r11, r11
 * 0000000140325F75: jnz     short loc_140325F8B
 * 0000000140325F77: test    r8b, 10h
 * 0000000140325F7B: jnz     short loc_140325F8B
 * 0000000140325F7D: test    rdx, r9
 * 0000000140325F80: jz      short loc_140325FAE
 * 0000000140325F82: test    byte ptr [rbx+6D6h], 2
 * 0000000140325F89: jnz     short loc_140325FAE
 * 0000000140325F8B: movzx   eax, word ptr [rbx+6E0h]
 * 0000000140325F92: or      ax, 4
 * 0000000140325F96: mov     [rbx+6E0h], ax
 * 0000000140325F9D: test    r8b, 8
 * 0000000140325FA1: jnz     short loc_140325FAE
 * 0000000140325FA3: or      ax, 20h
 * 0000000140325FA7: mov     [rbx+6E0h], ax
 * 0000000140325FAE: mov     rax, r9
 * 0000000140325FB1: mov     edx, 80h
 * 0000000140325FB6: and     eax, 2000h
 * 0000000140325FBB: movzx   ecx, r10w
 * 0000000140325FBF: or      cx, dx
 * 0000000140325FC2: mov     rdx, 80000000000h
 * 0000000140325FCC: test    rax, rax
 * 0000000140325FCF: mov     rax, r9
 * 0000000140325FD2: cmovz   cx, r10w
 * 0000000140325FD7: and     rax, rdx
 * 0000000140325FDA: movzx   edx, cx
 * 0000000140325FDD: or      dx, 2
 * 0000000140325FE1: test    rax, rax
 * 0000000140325FE4: mov     rax, 40000000000000h
 * 0000000140325FEE: cmovz   dx, cx
 * 0000000140325FF2: and     r9, rax
 * 0000000140325FF5: movzx   edi, dx
 * 0000000140325FF8: mov     eax, 400h
 * 0000000140325FFD: or      di, ax
 * 0000000140326000: test    r9, r9
 * 0000000140326003: cmovz   di, dx
 * 0000000140326007: test    r12b, r12b
 * 000000014032600A: jz      short loc_140326061
 * 000000014032600C: mov     eax, 1
 * 0000000140326011: xor     edx, edx
 * 0000000140326013: mov     ecx, 49h ; 'I'
 * 0000000140326018: wrmsr
 * 000000014032601A: test    r8b, 8
 * 000000014032601E: jnz     short loc_140326025
 * 0000000140326020: call    KiFlushCurrentRsb
 * 0000000140326025: movzx   eax, word ptr [rbx+6E0h]
 * 000000014032602C: mov     ecx, 0FFFBh
 * 0000000140326031: and     ax, cx
 * 0000000140326034: mov     qword ptr [rbx+6D8h], 0
 * 000000014032603F: mov     ecx, 0FFDFh
 * 0000000140326044: mov     [rbx+6D2h], di
 * 000000014032604B: and     ax, cx
 * 000000014032604E: mov     [rbx+6E0h], ax
 * 0000000140326055: mov     eax, 0FFAFh
 * 000000014032605A: and     [rbx+6D4h], ax
 * 0000000140326061: movzx   eax, word ptr [rbx+6ECh]
 * 0000000140326068: movzx   edx, di
 * 000000014032606B: test    al, 4
 * 000000014032606D: jz      loc_140326214
 * 0000000140326073: mov     rcx, [rsp+88h+var_60]
 * 0000000140326078: mov     r8d, 2
 * 000000014032607E: mov     r9, 20000000000h
 * 0000000140326088: mov     rax, [rbx+2DB0h]
 * 000000014032608F: cmp     [rsp+88h+var_68], rcx
 * 0000000140326094: jz      short loc_1403260A6
 * 0000000140326096: lock or [rbx+6ECh], r8w
 * 000000014032609F: mov     rsi, qword ptr [rsp+88h+var_58]
 * 00000001403260A4: jmp     short loc_1403260DD
 * 00000001403260A6: movzx   eax, word ptr [rax+6ECh]
 * 00000001403260AD: test    al, 1
 * 00000001403260AF: jnz     short loc_1403260C6
 * 00000001403260B1: or      [rsi], r8w
 * 00000001403260B5: mov     rsi, qword ptr [rsp+88h+var_58]
 * 00000001403260BA: test    r9, rsi
 * 00000001403260BD: jz      short loc_1403260DD
 * 00000001403260BF: or      [r15+rbp], r8w
 * 00000001403260C4: jmp     short loc_1403260DD
 * 00000001403260C6: mov     eax, 0FFFDh
 * 00000001403260CB: and     [rsi], ax
 * 00000001403260CE: mov     rsi, qword ptr [rsp+88h+var_58]
 * 00000001403260D3: test    r9, rsi
 * 00000001403260D6: jz      short loc_1403260DD
 * 00000001403260D8: and     [r15+rbp], ax
 * 00000001403260DD: test    rcx, rcx
 * 00000001403260E0: jnz     loc_140326166
 * 00000001403260E6: mov     rcx, r13
 * 00000001403260E9: call    KiUpdateStibpPairing
 * 00000001403260EE: movzx   ecx, word ptr [rbx+6D2h]
 * 00000001403260F5: mov     r12d, eax
 * 00000001403260F8: movzx   r8d, word ptr [r14]
 * 00000001403260FC: mov     eax, 0FFFCh
 * 0000000140326101: and     cx, ax
 * 0000000140326104: and     r8w, 3
 * 0000000140326109: or      cx, r8w
 * 000000014032610D: movzx   edx, di
 * 0000000140326110: and     dx, ax
 * 0000000140326113: mov     [rbx+6D2h], cx
 * 000000014032611A: bt      rsi, 29h ; ')'
 * 000000014032611F: jnb     short loc_140326130
 * 0000000140326121: test    byte ptr [rbx+6D6h], 1
 * 0000000140326128: jz      short loc_140326130
 * 000000014032612A: neg     r8w
 * 000000014032612E: jmp     short loc_140326139
 * 0000000140326130: movzx   eax, byte ptr [r15+rbp]
 * 0000000140326135: and     al, 3
 * 0000000140326137: neg     al
 * 0000000140326139: sbb     ax, ax
 * 000000014032613C: mov     r8b, 1
 * 000000014032613F: and     ax, 2
 * 0000000140326143: or      dx, ax
 * 0000000140326146: cmp     [rsp+88h+arg_10], 0
 * 000000014032614E: jnz     loc_140326220
 * 0000000140326154: mov     eax, 2
 * 0000000140326159: lock or [rbx+6ECh], ax
 * 0000000140326161: jmp     loc_140326220
 * 0000000140326166: cmp     [rsp+88h+arg_18], 0
 * 000000014032616E: jz      loc_140326214
 * 0000000140326174: prefetchw byte ptr [rbx+6ECh]
 * 000000014032617B: movzx   eax, word ptr [rbx+6ECh]
 * 0000000140326182: mov     edx, 100h
 * 0000000140326187: nop     word ptr [rax+rax+00000000h]
 * 0000000140326190: movzx   ecx, ax
 * 0000000140326193: or      cx, dx
 * 0000000140326196: lock cmpxchg [rbx+6ECh], cx
 * 000000014032619F: jnz     short loc_140326190
 * 00000001403261A1: movzx   ecx, ax
 * 00000001403261A4: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001403261AB: and     ecx, 1
 * 00000001403261AE: test    r9, rax
 * 00000001403261B1: jz      short loc_1403261E7
 * 00000001403261B3: movzx   eax, word ptr [r14]
 * 00000001403261B7: test    al, 3
 * 00000001403261B9: jnz     short loc_1403261C3
 * 00000001403261BB: or      ax, r8w
 * 00000001403261BF: mov     [r14], ax
 * 00000001403261C3: movzx   eax, word ptr [rbx+6D2h]
 * 00000001403261CA: test    al, 3
 * 00000001403261CC: jnz     short loc_1403261D9
 * 00000001403261CE: or      ax, r8w
 * 00000001403261D2: mov     [rbx+6D2h], ax
 * 00000001403261D9: test    byte ptr [rbx+6D6h], 1
 * 00000001403261E0: movzx   edx, di
 * 00000001403261E3: jz      short loc_140326206
 * 00000001403261E5: jmp     short loc_1403261FC
 * 00000001403261E7: movzx   eax, word ptr [r15+rbp]
 * 00000001403261EC: test    al, 3
 * 00000001403261EE: jnz     short loc_1403261F9
 * 00000001403261F0: or      ax, r8w
 * 00000001403261F4: mov     [r15+rbp], ax
 * 00000001403261F9: movzx   edx, di
 * 00000001403261FC: test    dil, 3
 * 0000000140326200: jnz     short loc_140326206
 * 0000000140326202: or      dx, r8w
 * 0000000140326206: lock or [rbx+6ECh], r8w
 * 000000014032620F: mov     r12d, ecx
 * 0000000140326212: jmp     short loc_140326217
 * 0000000140326214: xor     r12d, r12d
 * 0000000140326217: movzx   r8d, [rsp+88h+arg_8]
 * 0000000140326220: mov     r15, [rsp+88h+var_38]
 * 0000000140326225: mov     r14, [rsp+88h+var_30]
 * 000000014032622A: mov     rsi, [rsp+88h+var_18]
 * 000000014032622F: mov     rbp, [rsp+88h+arg_0]
 * 0000000140326237: cmp     dx, [rbx+6E4h]
 * 000000014032623E: jz      short loc_140326257
 * 0000000140326240: mov     [rbx+6E4h], dx
 * 0000000140326247: mov     ecx, 48h ; 'H'
 * 000000014032624C: movzx   edx, dx
 * 000000014032624F: mov     eax, edx
 * 0000000140326251: shr     rdx, 20h
 * 0000000140326255: wrmsr
 * 0000000140326257: nop
 * 0000000140326258: test    r8b, r8b
 * 000000014032625B: jz      short loc_140326264
 * 000000014032625D: or      byte ptr [rbx+6D6h], 2
 * 0000000140326264: lfence
 * 0000000140326267: mov     rcx, gs:20h
 * 0000000140326270: mov     r8, [rcx+88B8h]
 * 0000000140326277: test    r8, r8
 * 000000014032627A: jz      short loc_14032629B
 * 000000014032627C: prefetchw byte ptr [r8]
 * 0000000140326280: mov     eax, [r8]
 * 0000000140326283: mov     edx, eax
 * 0000000140326285: btr     edx, 15h
 * 0000000140326289: lock cmpxchg [r8], edx
 * 000000014032628E: jnz     short loc_140326283
 * 0000000140326290: bt      eax, 15h
 * 0000000140326294: jnb     short loc_14032629B
 * 0000000140326296: call    KiRemoveSystemWorkPriorityKick
 * 000000014032629B: sti
 * 000000014032629C: test    r12d, r12d
 * 000000014032629F: mov     r12, [rsp+88h+var_28]
 * 00000001403262A4: jz      short loc_1403262AE
 * 00000001403262A6: mov     rcx, rbx
 * 00000001403262A9: call    KiSynchronizeStibpPairing
 * 00000001403262AE: mov     rdi, [rsp+88h+var_20]
 * 00000001403262B3: add     rsp, 78h
 * 00000001403262B7: pop     r13
 * 00000001403262B9: pop     rbx
 * 00000001403262BA: retn
 */
