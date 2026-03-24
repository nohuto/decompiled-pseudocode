/*
 * XREFs of KiUpdateSpeculationControl @ 0x140325BC0
 * Callers:
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x140381840 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     SwapContext @ 0x1404283C0 (SwapContext.c)
 * Callees:
 *     KiIsSrsoMitigationEnabled @ 0x140410B34 (KiIsSrsoMitigationEnabled.c)
 *     KiFlushCurrentRsb @ 0x140435500 (KiFlushCurrentRsb.c)
 *     KiSynchronizeStibpPairing @ 0x1404609F6 (KiSynchronizeStibpPairing.c)
 *     KiUpdateSpecCtrlEnhancedIBRS @ 0x140460C28 (KiUpdateSpecCtrlEnhancedIBRS.c)
 *     KiUpdateStibpPairing @ 0x140460E20 (KiUpdateStibpPairing.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     PsGetProcessSecurityDomain @ 0x1405A40C8 (PsGetProcessSecurityDomain.c)
 */

/*
 * Hex-Rays decompilation failed for KiUpdateSpeculationControl @ 0x140325BC0
 * Reason: Hex-Rays returned no pseudocode for 0x140325BC0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140325BC0: push    rbx
 * 0000000140325BC2: push    r13
 * 0000000140325BC4: sub     rsp, 78h
 * 0000000140325BC8: movups  xmm0, cs:KiSpeculationFeatures
 * 0000000140325BCF: mov     rax, 1000000000h
 * 0000000140325BD9: mov     rbx, gs:20h
 * 0000000140325BE2: movsd   xmm1, cs:qword_140D1EAF0
 * 0000000140325BEA: mov     r13, rcx
 * 0000000140325BED: movups  [rsp+88h+var_58], xmm0
 * 0000000140325BF2: movsd   [rsp+88h+var_48], xmm1
 * 0000000140325BF8: test    qword ptr [rsp+88h+var_58], rax
 * 0000000140325BFD: jz      loc_140326493
 * 0000000140325C03: mov     [rsp+88h+var_20], rdi
 * 0000000140325C08: cli
 * 0000000140325C09: movzx   eax, word ptr [rbx+6E0h]
 * 0000000140325C10: mov     ecx, 0FFEFh
 * 0000000140325C15: and     ax, cx
 * 0000000140325C18: mov     ecx, 0FFBFh
 * 0000000140325C1D: and     ax, cx
 * 0000000140325C20: mov     ecx, 0FFFDh
 * 0000000140325C25: and     ax, cx
 * 0000000140325C28: mov     ecx, 0FFFBh
 * 0000000140325C2D: and     ax, cx
 * 0000000140325C30: mov     ecx, 0FFF7h
 * 0000000140325C35: and     ax, cx
 * 0000000140325C38: mov     ecx, 0FDFFh
 * 0000000140325C3D: and     ax, cx
 * 0000000140325C40: mov     ecx, 0FFDFh
 * 0000000140325C45: and     ax, cx
 * 0000000140325C48: mov     rcx, r13
 * 0000000140325C4B: mov     [rbx+6E0h], ax
 * 0000000140325C52: call    PsGetProcessSecurityDomain
 * 0000000140325C57: mov     rdi, rax
 * 0000000140325C5A: mov     edx, 100h
 * 0000000140325C5F: mov     eax, [r13+87Ch]
 * 0000000140325C66: and     eax, 400000h
 * 0000000140325C6B: mov     [rsp+88h+arg_10], eax
 * 0000000140325C72: mov     eax, 1
 * 0000000140325C77: cmovz   rdi, rax
 * 0000000140325C7B: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 0000000140325C82: bt      rax, 33h ; '3'
 * 0000000140325C87: mov     [rsp+88h+var_60], rdi
 * 0000000140325C8C: jnb     short loc_140325CA8
 * 0000000140325C8E: test    rdi, rdi
 * 0000000140325C91: jnz     short loc_140325CA1
 * 0000000140325C93: mov     eax, 0FEFFh
 * 0000000140325C98: and     [rbx+6E0h], ax
 * 0000000140325C9F: jmp     short loc_140325CA8
 * 0000000140325CA1: or      [rbx+6E0h], dx
 * 0000000140325CA8: test    byte ptr [rsp+88h+var_58], 1
 * 0000000140325CAD: jz      short loc_140325D07
 * 0000000140325CAF: mov     rdx, r13
 * 0000000140325CB2: mov     rcx, rbx
 * 0000000140325CB5: call    KiUpdateSpecCtrlEnhancedIBRS
 * 0000000140325CBA: mov     rcx, gs:20h
 * 0000000140325CC3: mov     r8, [rcx+88B8h]
 * 0000000140325CCA: test    r8, r8
 * 0000000140325CCD: jz      short loc_140325CF8
 * 0000000140325CCF: prefetchw byte ptr [r8]
 * 0000000140325CD3: mov     eax, [r8]
 * 0000000140325CD6: nop     word ptr [rax+rax+00000000h]
 * 0000000140325CE0: mov     edx, eax
 * 0000000140325CE2: btr     edx, 15h
 * 0000000140325CE6: lock cmpxchg [r8], edx
 * 0000000140325CEB: jnz     short loc_140325CE0
 * 0000000140325CED: bt      eax, 15h
 * 0000000140325CF1: jnb     short loc_140325CF8
 * 0000000140325CF3: call    KiRemoveSystemWorkPriorityKick
 * 0000000140325CF8: sti
 * 0000000140325CF9: mov     rdi, [rsp+88h+var_20]
 * 0000000140325CFE: add     rsp, 78h
 * 0000000140325D02: pop     r13
 * 0000000140325D04: pop     rbx
 * 0000000140325D05: retn
 * 0000000140325D07: mov     r8, qword ptr [rsp+88h+var_58]
 * 0000000140325D0C: movzx   r10d, word ptr [rbx+6E4h]
 * 0000000140325D14: mov     [rsp+88h+arg_0], rbp
 * 0000000140325D1C: mov     [rsp+88h+var_18], rsi
 * 0000000140325D21: mov     [rsp+88h+var_28], r12
 * 0000000140325D26: xor     r12b, r12b
 * 0000000140325D29: bt      r8, 29h ; ')'
 * 0000000140325D2E: mov     [rsp+88h+var_30], r14
 * 0000000140325D33: mov     [rsp+88h+var_38], r15
 * 0000000140325D38: mov     [rsp+88h+arg_8], r12b
 * 0000000140325D40: jnb     short loc_140325D71
 * 0000000140325D42: movzx   eax, byte ptr [rbx+6D6h]
 * 0000000140325D49: test    al, 2
 * 0000000140325D4B: jnz     short loc_140325D71
 * 0000000140325D4D: test    al, 1
 * 0000000140325D4F: jz      short loc_140325D71
 * 0000000140325D51: movzx   r12d, byte ptr [rbx+6D4h]
 * 0000000140325D59: movzx   r10d, word ptr [rbx+6D2h]
 * 0000000140325D61: shr     r12b, 4
 * 0000000140325D65: and     r12b, 1
 * 0000000140325D69: mov     [rsp+88h+arg_8], 1
 * 0000000140325D71: xor     eax, eax
 * 0000000140325D73: bt      r8, 26h ; '&'
 * 0000000140325D78: jnb     short loc_140325D8D
 * 0000000140325D7A: cmp     cs:KiSsbdMsr, 48h ; 'H'
 * 0000000140325D81: jnz     short loc_140325D8D
 * 0000000140325D83: or      r10w, 4
 * 0000000140325D88: lea     ecx, [rax+4]
 * 0000000140325D8B: jmp     short loc_140325D90
 * 0000000140325D8D: movzx   ecx, ax
 * 0000000140325D90: mov     edx, 6EAh
 * 0000000140325D95: mov     ebp, 6E6h
 * 0000000140325D9A: lea     rsi, [rbx+rdx]
 * 0000000140325D9E: mov     eax, 6D0h
 * 0000000140325DA3: lea     r14, [rbx+rax]
 * 0000000140325DA7: mov     r9, rbx
 * 0000000140325DAA: mov     r15, rbx
 * 0000000140325DAD: mov     r11, rbx
 * 0000000140325DB0: mov     [rbx+rbp], cx
 * 0000000140325DB4: movzx   edx, cx
 * 0000000140325DB7: mov     [rsi], cx
 * 0000000140325DBA: mov     r9d, 80h
 * 0000000140325DC0: mov     [r14], cx
 * 0000000140325DC4: bt      r8, 0Dh
 * 0000000140325DC9: jnb     short loc_140325DE1
 * 0000000140325DCB: movzx   eax, cx
 * 0000000140325DCE: or      ax, r9w
 * 0000000140325DD2: or      dx, r9w
 * 0000000140325DD6: mov     [rbx+rbp], ax
 * 0000000140325DDA: mov     [r14], dx
 * 0000000140325DDE: movzx   ecx, ax
 * 0000000140325DE1: bt      r8, 2Bh ; '+'
 * 0000000140325DE6: jnb     short loc_140325DF9
 * 0000000140325DE8: or      cx, 2
 * 0000000140325DEC: or      dx, 2
 * 0000000140325DF0: mov     [r15+rbp], cx
 * 0000000140325DF5: mov     [r14], dx
 * 0000000140325DF9: bt      r8, 36h ; '6'
 * 0000000140325DFE: mov     eax, 400h
 * 0000000140325E03: jnb     short loc_140325E14
 * 0000000140325E05: or      cx, ax
 * 0000000140325E08: or      dx, ax
 * 0000000140325E0B: mov     [r15+rbp], cx
 * 0000000140325E10: mov     [r14], dx
 * 0000000140325E14: mov     eax, [r13+87Ch]
 * 0000000140325E1B: mov     r9, qword ptr [rsp+88h+var_58]
 * 0000000140325E20: and     eax, 800000h
 * 0000000140325E25: mov     rcx, [rbx+6D8h]
 * 0000000140325E2C: mov     r11, r9
 * 0000000140325E2F: mov     [rsp+88h+arg_18], eax
 * 0000000140325E36: movzx   r8d, r9b
 * 0000000140325E3A: mov     rax, 2000000000h
 * 0000000140325E44: mov     [rsp+88h+var_68], rcx
 * 0000000140325E49: and     r11, rax
 * 0000000140325E4C: jnz     loc_140326058
 * 0000000140325E52: test    rdi, rdi
 * 0000000140325E55: jnz     loc_140325EF4
 * 0000000140325E5B: test    r9b, 2
 * 0000000140325E5F: jz      short loc_140325E79
 * 0000000140325E61: test    r9b, 40h
 * 0000000140325E65: jz      short loc_140325EDA
 * 0000000140325E67: or      word ptr [r14], 2
 * 0000000140325E6C: bt      r9, 29h ; ')'
 * 0000000140325E71: jb      short loc_140325E79
 * 0000000140325E73: or      word ptr [r15+rbp], 2
 * 0000000140325E79: mov     eax, 0FFFBh
 * 0000000140325E7E: and     [rbx+6D2h], ax
 * 0000000140325E85: movzx   eax, r8b
 * 0000000140325E89: and     al, 42h
 * 0000000140325E8B: cmp     al, 42h ; 'B'
 * 0000000140325E8D: jnz     loc_140326089
 * 0000000140325E93: bt      r9, 20h ; ' '
 * 0000000140325E98: jb      short loc_140325EAB
 * 0000000140325E9A: test    dword ptr [r13+9D0h], 40000000h
 * 0000000140325EA5: jz      loc_140326089
 * 0000000140325EAB: or      word ptr [rsi], 2
 * 0000000140325EAF: mov     rdx, 20000000000h
 * 0000000140325EB9: test    rdx, r9
 * 0000000140325EBC: jz      loc_140326093
 * 0000000140325EC2: cmp     r13, cs:PsInitialSystemProcess
 * 0000000140325EC9: jz      loc_140326093
 * 0000000140325ECF: or      word ptr [r15+rbp], 2
 * 0000000140325ED5: jmp     loc_140326093
 * 0000000140325EDA: test    r8b, 10h
 * 0000000140325EDE: jz      short loc_140325E79
 * 0000000140325EE0: or      word ptr [r14], 1
 * 0000000140325EE5: bt      r9, 29h ; ')'
 * 0000000140325EEA: jb      short loc_140325E79
 * 0000000140325EEC: or      word ptr [r15+rbp], 1
 * 0000000140325EF2: jmp     short loc_140325E79
 * 0000000140325EF4: mov     rax, r9
 * 0000000140325EF7: mov     rcx, 300000008000h
 * 0000000140325F01: and     rax, rcx
 * 0000000140325F04: cmp     rax, 8000h
 * 0000000140325F0A: jz      loc_140325FE1
 * 0000000140325F10: lea     rcx, [rsp+88h+var_58]
 * 0000000140325F15: call    KiIsSrsoMitigationEnabled
 * 0000000140325F1A: test    eax, eax
 * 0000000140325F1C: jnz     loc_140325FE1
 * 0000000140325F22: test    r8b, 10h
 * 0000000140325F26: jz      short loc_140325F51
 * 0000000140325F28: or      word ptr [r14], 1
 * 0000000140325F2D: bt      r9, 29h ; ')'
 * 0000000140325F32: jb      short loc_140325F3A
 * 0000000140325F34: or      word ptr [r15+rbp], 1
 * 0000000140325F3A: test    r8b, 20h
 * 0000000140325F3E: jnz     loc_14032603C
 * 0000000140325F44: or      word ptr [rbx+6E0h], 2
 * 0000000140325F4C: jmp     loc_14032603C
 * 0000000140325F51: movzx   eax, r8b
 * 0000000140325F55: and     al, 42h
 * 0000000140325F57: cmp     al, 42h ; 'B'
 * 0000000140325F59: mov     rax, 20000000000h
 * 0000000140325F63: jnz     short loc_140325F75
 * 0000000140325F65: or      word ptr [r14], 2
 * 0000000140325F6A: test    rax, r9
 * 0000000140325F6D: jnz     short loc_140325F7A
 * 0000000140325F6F: or      word ptr [r15+rbp], 2
 * 0000000140325F75: test    rax, r9
 * 0000000140325F78: jz      short loc_140325FBC
 * 0000000140325F7A: movzx   eax, word ptr [rbx+6E0h]
 * 0000000140325F81: or      ax, 10h
 * 0000000140325F85: mov     [rbx+6E0h], ax
 * 0000000140325F8C: test    r8b, 20h
 * 0000000140325F90: jnz     short loc_140325FA2
 * 0000000140325F92: or      ax, 2
 * 0000000140325F96: mov     [rbx+6E0h], ax
 * 0000000140325F9D: jmp     loc_14032603C
 * 0000000140325FA2: test    r8b, 8
 * 0000000140325FA6: jnz     loc_14032603C
 * 0000000140325FAC: or      ax, 40h
 * 0000000140325FB0: mov     [rbx+6E0h], ax
 * 0000000140325FB7: jmp     loc_14032603C
 * 0000000140325FBC: movzx   eax, word ptr [rbx+6E0h]
 * 0000000140325FC3: or      ax, 8
 * 0000000140325FC7: mov     [rbx+6E0h], ax
 * 0000000140325FCE: test    r8b, 8
 * 0000000140325FD2: jnz     short loc_14032603C
 * 0000000140325FD4: or      ax, 2
 * 0000000140325FD8: mov     [rbx+6E0h], ax
 * 0000000140325FDF: jmp     short loc_14032603C
 * 0000000140325FE1: movzx   eax, word ptr [rbx+6E0h]
 * 0000000140325FE8: or      ax, 8
 * 0000000140325FEC: mov     [rbx+6E0h], ax
 * 0000000140325FF3: test    r8b, 8
 * 0000000140325FF7: jnz     short loc_140326004
 * 0000000140325FF9: or      ax, 2
 * 0000000140325FFD: mov     [rbx+6E0h], ax
 * 0000000140326004: test    r8b, 2
 * 0000000140326008: jz      short loc_14032603C
 * 000000014032600A: test    r8b, 40h
 * 000000014032600E: jz      short loc_140326024
 * 0000000140326010: or      word ptr [r14], 2
 * 0000000140326015: bt      r9, 29h ; ')'
 * 000000014032601A: jb      short loc_14032603C
 * 000000014032601C: or      word ptr [r15+rbp], 2
 * 0000000140326022: jmp     short loc_14032603C
 * 0000000140326024: test    r8b, 10h
 * 0000000140326028: jz      short loc_14032603C
 * 000000014032602A: or      word ptr [r14], 1
 * 000000014032602F: bt      r9, 29h ; ')'
 * 0000000140326034: jb      short loc_14032603C
 * 0000000140326036: or      word ptr [r15+rbp], 1
 * 000000014032603C: test    byte ptr [rbx+6E2h], 30h
 * 0000000140326043: mov     rcx, [rsp+88h+var_68]
 * 0000000140326048: jz      short loc_140326061
 * 000000014032604A: mov     eax, 200h
 * 000000014032604F: or      [rbx+6E0h], ax
 * 0000000140326056: jmp     short loc_140326061
 * 0000000140326058: test    rdi, rdi
 * 000000014032605B: jz      loc_140325E79
 * 0000000140326061: bt      r9, 27h ; '''
 * 0000000140326066: jnb     loc_140325E79
 * 000000014032606C: or      word ptr [r14], 4
 * 0000000140326071: or      word ptr [rbx+6D2h], 4
 * 0000000140326079: or      word ptr [r15+rbp], 4
 * 000000014032607F: or      r10w, 4
 * 0000000140326084: jmp     loc_140325E85
 * 0000000140326089: mov     rdx, 20000000000h
 * 0000000140326093: bt      r9, 2Bh ; '+'
 * 0000000140326098: jnb     short loc_14032609E
 * 000000014032609A: or      word ptr [rsi], 2
 * 000000014032609E: bt      r9, 27h ; '''
 * 00000001403260A3: jnb     short loc_1403260B6
 * 00000001403260A5: test    dword ptr [r13+9D4h], 2000h
 * 00000001403260B0: jz      short loc_1403260B6
 * 00000001403260B2: or      word ptr [rsi], 4
 * 00000001403260B6: bt      r9, 36h ; '6'
 * 00000001403260BB: jnb     short loc_1403260C5
 * 00000001403260BD: mov     eax, 400h
 * 00000001403260C2: or      [rsi], ax
 * 00000001403260C5: test    rcx, rcx
 * 00000001403260C8: jz      loc_14032618E
 * 00000001403260CE: cmp     rcx, rdi
 * 00000001403260D1: jz      loc_14032618E
 * 00000001403260D7: cmp     rcx, [r13+9E8h]
 * 00000001403260DE: jz      loc_14032618E
 * 00000001403260E4: test    r10b, 1
 * 00000001403260E8: jz      short loc_140326152
 * 00000001403260EA: bt      r9, 38h ; '8'
 * 00000001403260EF: jb      short loc_140326127
 * 00000001403260F1: test    r8b, 2
 * 00000001403260F5: jnz     short loc_1403260FE
 * 00000001403260F7: and     r10w, 4
 * 00000001403260FC: jmp     short loc_140326127
 * 00000001403260FE: movzx   eax, word ptr [rbx+6ECh]
 * 0000000140326105: mov     r9, qword ptr [rsp+88h+var_58]
 * 000000014032610A: test    al, 4
 * 000000014032610C: jnz     short loc_140326121
 * 000000014032610E: test    rdx, r9
 * 0000000140326111: jz      short loc_14032613A
 * 0000000140326113: test    byte ptr [rbx+6D6h], 1
 * 000000014032611A: jnz     short loc_14032613A
 * 000000014032611C: and     r10w, 4
 * 0000000140326121: movzx   r8d, byte ptr [rsp+88h+var_58]
 * 0000000140326127: test    r10b, 1
 * 000000014032612B: jnz     short loc_14032616B
 * 000000014032612D: mov     r12b, 1
 * 0000000140326130: mov     [rsp+88h+arg_8], r12b
 * 0000000140326138: jmp     short loc_14032618E
 * 000000014032613A: movzx   r8d, byte ptr [rsp+88h+var_58]
 * 0000000140326140: test    r8b, 40h
 * 0000000140326144: jz      short loc_140326127
 * 0000000140326146: and     r10w, 4
 * 000000014032614B: or      r10w, 2
 * 0000000140326150: jmp     short loc_140326127
 * 0000000140326152: test    r11, r11
 * 0000000140326155: jnz     short loc_14032616B
 * 0000000140326157: test    r8b, 10h
 * 000000014032615B: jnz     short loc_14032616B
 * 000000014032615D: test    rdx, r9
 * 0000000140326160: jz      short loc_14032618E
 * 0000000140326162: test    byte ptr [rbx+6D6h], 2
 * 0000000140326169: jnz     short loc_14032618E
 * 000000014032616B: movzx   eax, word ptr [rbx+6E0h]
 * 0000000140326172: or      ax, 4
 * 0000000140326176: mov     [rbx+6E0h], ax
 * 000000014032617D: test    r8b, 8
 * 0000000140326181: jnz     short loc_14032618E
 * 0000000140326183: or      ax, 20h
 * 0000000140326187: mov     [rbx+6E0h], ax
 * 000000014032618E: mov     rax, r9
 * 0000000140326191: mov     edx, 80h
 * 0000000140326196: and     eax, 2000h
 * 000000014032619B: movzx   ecx, r10w
 * 000000014032619F: or      cx, dx
 * 00000001403261A2: mov     rdx, 80000000000h
 * 00000001403261AC: test    rax, rax
 * 00000001403261AF: mov     rax, r9
 * 00000001403261B2: cmovz   cx, r10w
 * 00000001403261B7: and     rax, rdx
 * 00000001403261BA: movzx   edx, cx
 * 00000001403261BD: or      dx, 2
 * 00000001403261C1: test    rax, rax
 * 00000001403261C4: mov     rax, 40000000000000h
 * 00000001403261CE: cmovz   dx, cx
 * 00000001403261D2: and     r9, rax
 * 00000001403261D5: movzx   edi, dx
 * 00000001403261D8: mov     eax, 400h
 * 00000001403261DD: or      di, ax
 * 00000001403261E0: test    r9, r9
 * 00000001403261E3: cmovz   di, dx
 * 00000001403261E7: test    r12b, r12b
 * 00000001403261EA: jz      short loc_140326241
 * 00000001403261EC: mov     eax, 1
 * 00000001403261F1: xor     edx, edx
 * 00000001403261F3: mov     ecx, 49h ; 'I'
 * 00000001403261F8: wrmsr
 * 00000001403261FA: test    r8b, 8
 * 00000001403261FE: jnz     short loc_140326205
 * 0000000140326200: call    KiFlushCurrentRsb
 * 0000000140326205: movzx   eax, word ptr [rbx+6E0h]
 * 000000014032620C: mov     ecx, 0FFFBh
 * 0000000140326211: and     ax, cx
 * 0000000140326214: mov     qword ptr [rbx+6D8h], 0
 * 000000014032621F: mov     ecx, 0FFDFh
 * 0000000140326224: mov     [rbx+6D2h], di
 * 000000014032622B: and     ax, cx
 * 000000014032622E: mov     [rbx+6E0h], ax
 * 0000000140326235: mov     eax, 0FFAFh
 * 000000014032623A: and     [rbx+6D4h], ax
 * 0000000140326241: movzx   eax, word ptr [rbx+6ECh]
 * 0000000140326248: movzx   edx, di
 * 000000014032624B: test    al, 4
 * 000000014032624D: jz      loc_1403263F4
 * 0000000140326253: mov     rcx, [rsp+88h+var_60]
 * 0000000140326258: mov     r8d, 2
 * 000000014032625E: mov     r9, 20000000000h
 * 0000000140326268: mov     rax, [rbx+2DB0h]
 * 000000014032626F: cmp     [rsp+88h+var_68], rcx
 * 0000000140326274: jz      short loc_140326286
 * 0000000140326276: lock or [rbx+6ECh], r8w
 * 000000014032627F: mov     rsi, qword ptr [rsp+88h+var_58]
 * 0000000140326284: jmp     short loc_1403262BD
 * 0000000140326286: movzx   eax, word ptr [rax+6ECh]
 * 000000014032628D: test    al, 1
 * 000000014032628F: jnz     short loc_1403262A6
 * 0000000140326291: or      [rsi], r8w
 * 0000000140326295: mov     rsi, qword ptr [rsp+88h+var_58]
 * 000000014032629A: test    r9, rsi
 * 000000014032629D: jz      short loc_1403262BD
 * 000000014032629F: or      [r15+rbp], r8w
 * 00000001403262A4: jmp     short loc_1403262BD
 * 00000001403262A6: mov     eax, 0FFFDh
 * 00000001403262AB: and     [rsi], ax
 * 00000001403262AE: mov     rsi, qword ptr [rsp+88h+var_58]
 * 00000001403262B3: test    r9, rsi
 * 00000001403262B6: jz      short loc_1403262BD
 * 00000001403262B8: and     [r15+rbp], ax
 * 00000001403262BD: test    rcx, rcx
 * 00000001403262C0: jnz     loc_140326346
 * 00000001403262C6: mov     rcx, r13
 * 00000001403262C9: call    KiUpdateStibpPairing
 * 00000001403262CE: movzx   ecx, word ptr [rbx+6D2h]
 * 00000001403262D5: mov     r12d, eax
 * 00000001403262D8: movzx   r8d, word ptr [r14]
 * 00000001403262DC: mov     eax, 0FFFCh
 * 00000001403262E1: and     cx, ax
 * 00000001403262E4: and     r8w, 3
 * 00000001403262E9: or      cx, r8w
 * 00000001403262ED: movzx   edx, di
 * 00000001403262F0: and     dx, ax
 * 00000001403262F3: mov     [rbx+6D2h], cx
 * 00000001403262FA: bt      rsi, 29h ; ')'
 * 00000001403262FF: jnb     short loc_140326310
 * 0000000140326301: test    byte ptr [rbx+6D6h], 1
 * 0000000140326308: jz      short loc_140326310
 * 000000014032630A: neg     r8w
 * 000000014032630E: jmp     short loc_140326319
 * 0000000140326310: movzx   eax, byte ptr [r15+rbp]
 * 0000000140326315: and     al, 3
 * 0000000140326317: neg     al
 * 0000000140326319: sbb     ax, ax
 * 000000014032631C: mov     r8b, 1
 * 000000014032631F: and     ax, 2
 * 0000000140326323: or      dx, ax
 * 0000000140326326: cmp     [rsp+88h+arg_10], 0
 * 000000014032632E: jnz     loc_140326400
 * 0000000140326334: mov     eax, 2
 * 0000000140326339: lock or [rbx+6ECh], ax
 * 0000000140326341: jmp     loc_140326400
 * 0000000140326346: cmp     [rsp+88h+arg_18], 0
 * 000000014032634E: jz      loc_1403263F4
 * 0000000140326354: prefetchw byte ptr [rbx+6ECh]
 * 000000014032635B: movzx   eax, word ptr [rbx+6ECh]
 * 0000000140326362: mov     edx, 100h
 * 0000000140326367: nop     word ptr [rax+rax+00000000h]
 * 0000000140326370: movzx   ecx, ax
 * 0000000140326373: or      cx, dx
 * 0000000140326376: lock cmpxchg [rbx+6ECh], cx
 * 000000014032637F: jnz     short loc_140326370
 * 0000000140326381: movzx   ecx, ax
 * 0000000140326384: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014032638B: and     ecx, 1
 * 000000014032638E: test    r9, rax
 * 0000000140326391: jz      short loc_1403263C7
 * 0000000140326393: movzx   eax, word ptr [r14]
 * 0000000140326397: test    al, 3
 * 0000000140326399: jnz     short loc_1403263A3
 * 000000014032639B: or      ax, r8w
 * 000000014032639F: mov     [r14], ax
 * 00000001403263A3: movzx   eax, word ptr [rbx+6D2h]
 * 00000001403263AA: test    al, 3
 * 00000001403263AC: jnz     short loc_1403263B9
 * 00000001403263AE: or      ax, r8w
 * 00000001403263B2: mov     [rbx+6D2h], ax
 * 00000001403263B9: test    byte ptr [rbx+6D6h], 1
 * 00000001403263C0: movzx   edx, di
 * 00000001403263C3: jz      short loc_1403263E6
 * 00000001403263C5: jmp     short loc_1403263DC
 * 00000001403263C7: movzx   eax, word ptr [r15+rbp]
 * 00000001403263CC: test    al, 3
 * 00000001403263CE: jnz     short loc_1403263D9
 * 00000001403263D0: or      ax, r8w
 * 00000001403263D4: mov     [r15+rbp], ax
 * 00000001403263D9: movzx   edx, di
 * 00000001403263DC: test    dil, 3
 * 00000001403263E0: jnz     short loc_1403263E6
 * 00000001403263E2: or      dx, r8w
 * 00000001403263E6: lock or [rbx+6ECh], r8w
 * 00000001403263EF: mov     r12d, ecx
 * 00000001403263F2: jmp     short loc_1403263F7
 * 00000001403263F4: xor     r12d, r12d
 * 00000001403263F7: movzx   r8d, [rsp+88h+arg_8]
 * 0000000140326400: mov     r15, [rsp+88h+var_38]
 * 0000000140326405: mov     r14, [rsp+88h+var_30]
 * 000000014032640A: mov     rsi, [rsp+88h+var_18]
 * 000000014032640F: mov     rbp, [rsp+88h+arg_0]
 * 0000000140326417: cmp     dx, [rbx+6E4h]
 * 000000014032641E: jz      short loc_140326437
 * 0000000140326420: mov     [rbx+6E4h], dx
 * 0000000140326427: mov     ecx, 48h ; 'H'
 * 000000014032642C: movzx   edx, dx
 * 000000014032642F: mov     eax, edx
 * 0000000140326431: shr     rdx, 20h
 * 0000000140326435: wrmsr
 * 0000000140326437: nop
 * 0000000140326438: test    r8b, r8b
 * 000000014032643B: jz      short loc_140326444
 * 000000014032643D: or      byte ptr [rbx+6D6h], 2
 * 0000000140326444: lfence
 * 0000000140326447: mov     rcx, gs:20h
 * 0000000140326450: mov     r8, [rcx+88B8h]
 * 0000000140326457: test    r8, r8
 * 000000014032645A: jz      short loc_14032647B
 * 000000014032645C: prefetchw byte ptr [r8]
 * 0000000140326460: mov     eax, [r8]
 * 0000000140326463: mov     edx, eax
 * 0000000140326465: btr     edx, 15h
 * 0000000140326469: lock cmpxchg [r8], edx
 * 000000014032646E: jnz     short loc_140326463
 * 0000000140326470: bt      eax, 15h
 * 0000000140326474: jnb     short loc_14032647B
 * 0000000140326476: call    KiRemoveSystemWorkPriorityKick
 * 000000014032647B: sti
 * 000000014032647C: test    r12d, r12d
 * 000000014032647F: mov     r12, [rsp+88h+var_28]
 * 0000000140326484: jz      short loc_14032648E
 * 0000000140326486: mov     rcx, rbx
 * 0000000140326489: call    KiSynchronizeStibpPairing
 * 000000014032648E: mov     rdi, [rsp+88h+var_20]
 * 0000000140326493: add     rsp, 78h
 * 0000000140326497: pop     r13
 * 0000000140326499: pop     rbx
 * 000000014032649A: retn
 */
