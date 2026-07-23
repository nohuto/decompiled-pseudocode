/*
 * XREFs of KiUpdateSpeculationControl @ 0x140325E50
 * Callers:
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1403819E0 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     SwapContext @ 0x140428750 (SwapContext.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KiIsSrsoMitigationEnabled @ 0x140410D94 (KiIsSrsoMitigationEnabled.c)
 *     KiFlushCurrentRsb @ 0x140435900 (KiFlushCurrentRsb.c)
 *     KiSynchronizeStibpPairing @ 0x140460DF6 (KiSynchronizeStibpPairing.c)
 *     KiUpdateSpecCtrlEnhancedIBRS @ 0x140461028 (KiUpdateSpecCtrlEnhancedIBRS.c)
 *     KiUpdateStibpPairing @ 0x140461220 (KiUpdateStibpPairing.c)
 *     PsGetProcessSecurityDomain @ 0x1405A4638 (PsGetProcessSecurityDomain.c)
 */

/*
 * Hex-Rays decompilation failed for KiUpdateSpeculationControl @ 0x140325E50
 * Reason: Hex-Rays returned no pseudocode for 0x140325E50
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140325E50: push    rbx
 * 0000000140325E52: push    r13
 * 0000000140325E54: sub     rsp, 78h
 * 0000000140325E58: movups  xmm0, cs:KiSpeculationFeatures
 * 0000000140325E5F: mov     rax, 1000000000h
 * 0000000140325E69: mov     rbx, gs:20h
 * 0000000140325E72: movsd   xmm1, cs:qword_140D1EAF0
 * 0000000140325E7A: mov     r13, rcx
 * 0000000140325E7D: movups  [rsp+88h+var_58], xmm0
 * 0000000140325E82: movsd   [rsp+88h+var_48], xmm1
 * 0000000140325E88: test    qword ptr [rsp+88h+var_58], rax
 * 0000000140325E8D: jz      loc_140326723
 * 0000000140325E93: mov     [rsp+88h+var_20], rdi
 * 0000000140325E98: cli
 * 0000000140325E99: movzx   eax, word ptr [rbx+6E0h]
 * 0000000140325EA0: mov     ecx, 0FFEFh
 * 0000000140325EA5: and     ax, cx
 * 0000000140325EA8: mov     ecx, 0FFBFh
 * 0000000140325EAD: and     ax, cx
 * 0000000140325EB0: mov     ecx, 0FFFDh
 * 0000000140325EB5: and     ax, cx
 * 0000000140325EB8: mov     ecx, 0FFFBh
 * 0000000140325EBD: and     ax, cx
 * 0000000140325EC0: mov     ecx, 0FFF7h
 * 0000000140325EC5: and     ax, cx
 * 0000000140325EC8: mov     ecx, 0FDFFh
 * 0000000140325ECD: and     ax, cx
 * 0000000140325ED0: mov     ecx, 0FFDFh
 * 0000000140325ED5: and     ax, cx
 * 0000000140325ED8: mov     rcx, r13
 * 0000000140325EDB: mov     [rbx+6E0h], ax
 * 0000000140325EE2: call    PsGetProcessSecurityDomain
 * 0000000140325EE7: mov     rdi, rax
 * 0000000140325EEA: mov     edx, 100h
 * 0000000140325EEF: mov     eax, [r13+87Ch]
 * 0000000140325EF6: and     eax, 400000h
 * 0000000140325EFB: mov     [rsp+88h+arg_10], eax
 * 0000000140325F02: mov     eax, 1
 * 0000000140325F07: cmovz   rdi, rax
 * 0000000140325F0B: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 0000000140325F12: bt      rax, 33h ; '3'
 * 0000000140325F17: mov     [rsp+88h+var_60], rdi
 * 0000000140325F1C: jnb     short loc_140325F38
 * 0000000140325F1E: test    rdi, rdi
 * 0000000140325F21: jnz     short loc_140325F31
 * 0000000140325F23: mov     eax, 0FEFFh
 * 0000000140325F28: and     [rbx+6E0h], ax
 * 0000000140325F2F: jmp     short loc_140325F38
 * 0000000140325F31: or      [rbx+6E0h], dx
 * 0000000140325F38: test    byte ptr [rsp+88h+var_58], 1
 * 0000000140325F3D: jz      short loc_140325F97
 * 0000000140325F3F: mov     rdx, r13
 * 0000000140325F42: mov     rcx, rbx
 * 0000000140325F45: call    KiUpdateSpecCtrlEnhancedIBRS
 * 0000000140325F4A: mov     rcx, gs:20h
 * 0000000140325F53: mov     r8, [rcx+88B8h]
 * 0000000140325F5A: test    r8, r8
 * 0000000140325F5D: jz      short loc_140325F88
 * 0000000140325F5F: prefetchw byte ptr [r8]
 * 0000000140325F63: mov     eax, [r8]
 * 0000000140325F66: nop     word ptr [rax+rax+00000000h]
 * 0000000140325F70: mov     edx, eax
 * 0000000140325F72: btr     edx, 15h
 * 0000000140325F76: lock cmpxchg [r8], edx
 * 0000000140325F7B: jnz     short loc_140325F70
 * 0000000140325F7D: bt      eax, 15h
 * 0000000140325F81: jnb     short loc_140325F88
 * 0000000140325F83: call    KiRemoveSystemWorkPriorityKick
 * 0000000140325F88: sti
 * 0000000140325F89: mov     rdi, [rsp+88h+var_20]
 * 0000000140325F8E: add     rsp, 78h
 * 0000000140325F92: pop     r13
 * 0000000140325F94: pop     rbx
 * 0000000140325F95: retn
 * 0000000140325F97: mov     r8, qword ptr [rsp+88h+var_58]
 * 0000000140325F9C: movzx   r10d, word ptr [rbx+6E4h]
 * 0000000140325FA4: mov     [rsp+88h+arg_0], rbp
 * 0000000140325FAC: mov     [rsp+88h+var_18], rsi
 * 0000000140325FB1: mov     [rsp+88h+var_28], r12
 * 0000000140325FB6: xor     r12b, r12b
 * 0000000140325FB9: bt      r8, 29h ; ')'
 * 0000000140325FBE: mov     [rsp+88h+var_30], r14
 * 0000000140325FC3: mov     [rsp+88h+var_38], r15
 * 0000000140325FC8: mov     [rsp+88h+arg_8], r12b
 * 0000000140325FD0: jnb     short loc_140326001
 * 0000000140325FD2: movzx   eax, byte ptr [rbx+6D6h]
 * 0000000140325FD9: test    al, 2
 * 0000000140325FDB: jnz     short loc_140326001
 * 0000000140325FDD: test    al, 1
 * 0000000140325FDF: jz      short loc_140326001
 * 0000000140325FE1: movzx   r12d, byte ptr [rbx+6D4h]
 * 0000000140325FE9: movzx   r10d, word ptr [rbx+6D2h]
 * 0000000140325FF1: shr     r12b, 4
 * 0000000140325FF5: and     r12b, 1
 * 0000000140325FF9: mov     [rsp+88h+arg_8], 1
 * 0000000140326001: xor     eax, eax
 * 0000000140326003: bt      r8, 26h ; '&'
 * 0000000140326008: jnb     short loc_14032601D
 * 000000014032600A: cmp     cs:KiSsbdMsr, 48h ; 'H'
 * 0000000140326011: jnz     short loc_14032601D
 * 0000000140326013: or      r10w, 4
 * 0000000140326018: lea     ecx, [rax+4]
 * 000000014032601B: jmp     short loc_140326020
 * 000000014032601D: movzx   ecx, ax
 * 0000000140326020: mov     edx, 6EAh
 * 0000000140326025: mov     ebp, 6E6h
 * 000000014032602A: lea     rsi, [rbx+rdx]
 * 000000014032602E: mov     eax, 6D0h
 * 0000000140326033: lea     r14, [rbx+rax]
 * 0000000140326037: mov     r9, rbx
 * 000000014032603A: mov     r15, rbx
 * 000000014032603D: mov     r11, rbx
 * 0000000140326040: mov     [rbx+rbp], cx
 * 0000000140326044: movzx   edx, cx
 * 0000000140326047: mov     [rsi], cx
 * 000000014032604A: mov     r9d, 80h
 * 0000000140326050: mov     [r14], cx
 * 0000000140326054: bt      r8, 0Dh
 * 0000000140326059: jnb     short loc_140326071
 * 000000014032605B: movzx   eax, cx
 * 000000014032605E: or      ax, r9w
 * 0000000140326062: or      dx, r9w
 * 0000000140326066: mov     [rbx+rbp], ax
 * 000000014032606A: mov     [r14], dx
 * 000000014032606E: movzx   ecx, ax
 * 0000000140326071: bt      r8, 2Bh ; '+'
 * 0000000140326076: jnb     short loc_140326089
 * 0000000140326078: or      cx, 2
 * 000000014032607C: or      dx, 2
 * 0000000140326080: mov     [r15+rbp], cx
 * 0000000140326085: mov     [r14], dx
 * 0000000140326089: bt      r8, 36h ; '6'
 * 000000014032608E: mov     eax, 400h
 * 0000000140326093: jnb     short loc_1403260A4
 * 0000000140326095: or      cx, ax
 * 0000000140326098: or      dx, ax
 * 000000014032609B: mov     [r15+rbp], cx
 * 00000001403260A0: mov     [r14], dx
 * 00000001403260A4: mov     eax, [r13+87Ch]
 * 00000001403260AB: mov     r9, qword ptr [rsp+88h+var_58]
 * 00000001403260B0: and     eax, 800000h
 * 00000001403260B5: mov     rcx, [rbx+6D8h]
 * 00000001403260BC: mov     r11, r9
 * 00000001403260BF: mov     [rsp+88h+arg_18], eax
 * 00000001403260C6: movzx   r8d, r9b
 * 00000001403260CA: mov     rax, 2000000000h
 * 00000001403260D4: mov     [rsp+88h+var_68], rcx
 * 00000001403260D9: and     r11, rax
 * 00000001403260DC: jnz     loc_1403262E8
 * 00000001403260E2: test    rdi, rdi
 * 00000001403260E5: jnz     loc_140326184
 * 00000001403260EB: test    r9b, 2
 * 00000001403260EF: jz      short loc_140326109
 * 00000001403260F1: test    r9b, 40h
 * 00000001403260F5: jz      short loc_14032616A
 * 00000001403260F7: or      word ptr [r14], 2
 * 00000001403260FC: bt      r9, 29h ; ')'
 * 0000000140326101: jb      short loc_140326109
 * 0000000140326103: or      word ptr [r15+rbp], 2
 * 0000000140326109: mov     eax, 0FFFBh
 * 000000014032610E: and     [rbx+6D2h], ax
 * 0000000140326115: movzx   eax, r8b
 * 0000000140326119: and     al, 42h
 * 000000014032611B: cmp     al, 42h ; 'B'
 * 000000014032611D: jnz     loc_140326319
 * 0000000140326123: bt      r9, 20h ; ' '
 * 0000000140326128: jb      short loc_14032613B
 * 000000014032612A: test    dword ptr [r13+9D0h], 40000000h
 * 0000000140326135: jz      loc_140326319
 * 000000014032613B: or      word ptr [rsi], 2
 * 000000014032613F: mov     rdx, 20000000000h
 * 0000000140326149: test    rdx, r9
 * 000000014032614C: jz      loc_140326323
 * 0000000140326152: cmp     r13, cs:PsInitialSystemProcess
 * 0000000140326159: jz      loc_140326323
 * 000000014032615F: or      word ptr [r15+rbp], 2
 * 0000000140326165: jmp     loc_140326323
 * 000000014032616A: test    r8b, 10h
 * 000000014032616E: jz      short loc_140326109
 * 0000000140326170: or      word ptr [r14], 1
 * 0000000140326175: bt      r9, 29h ; ')'
 * 000000014032617A: jb      short loc_140326109
 * 000000014032617C: or      word ptr [r15+rbp], 1
 * 0000000140326182: jmp     short loc_140326109
 * 0000000140326184: mov     rax, r9
 * 0000000140326187: mov     rcx, 300000008000h
 * 0000000140326191: and     rax, rcx
 * 0000000140326194: cmp     rax, 8000h
 * 000000014032619A: jz      loc_140326271
 * 00000001403261A0: lea     rcx, [rsp+88h+var_58]
 * 00000001403261A5: call    KiIsSrsoMitigationEnabled
 * 00000001403261AA: test    eax, eax
 * 00000001403261AC: jnz     loc_140326271
 * 00000001403261B2: test    r8b, 10h
 * 00000001403261B6: jz      short loc_1403261E1
 * 00000001403261B8: or      word ptr [r14], 1
 * 00000001403261BD: bt      r9, 29h ; ')'
 * 00000001403261C2: jb      short loc_1403261CA
 * 00000001403261C4: or      word ptr [r15+rbp], 1
 * 00000001403261CA: test    r8b, 20h
 * 00000001403261CE: jnz     loc_1403262CC
 * 00000001403261D4: or      word ptr [rbx+6E0h], 2
 * 00000001403261DC: jmp     loc_1403262CC
 * 00000001403261E1: movzx   eax, r8b
 * 00000001403261E5: and     al, 42h
 * 00000001403261E7: cmp     al, 42h ; 'B'
 * 00000001403261E9: mov     rax, 20000000000h
 * 00000001403261F3: jnz     short loc_140326205
 * 00000001403261F5: or      word ptr [r14], 2
 * 00000001403261FA: test    rax, r9
 * 00000001403261FD: jnz     short loc_14032620A
 * 00000001403261FF: or      word ptr [r15+rbp], 2
 * 0000000140326205: test    rax, r9
 * 0000000140326208: jz      short loc_14032624C
 * 000000014032620A: movzx   eax, word ptr [rbx+6E0h]
 * 0000000140326211: or      ax, 10h
 * 0000000140326215: mov     [rbx+6E0h], ax
 * 000000014032621C: test    r8b, 20h
 * 0000000140326220: jnz     short loc_140326232
 * 0000000140326222: or      ax, 2
 * 0000000140326226: mov     [rbx+6E0h], ax
 * 000000014032622D: jmp     loc_1403262CC
 * 0000000140326232: test    r8b, 8
 * 0000000140326236: jnz     loc_1403262CC
 * 000000014032623C: or      ax, 40h
 * 0000000140326240: mov     [rbx+6E0h], ax
 * 0000000140326247: jmp     loc_1403262CC
 * 000000014032624C: movzx   eax, word ptr [rbx+6E0h]
 * 0000000140326253: or      ax, 8
 * 0000000140326257: mov     [rbx+6E0h], ax
 * 000000014032625E: test    r8b, 8
 * 0000000140326262: jnz     short loc_1403262CC
 * 0000000140326264: or      ax, 2
 * 0000000140326268: mov     [rbx+6E0h], ax
 * 000000014032626F: jmp     short loc_1403262CC
 * 0000000140326271: movzx   eax, word ptr [rbx+6E0h]
 * 0000000140326278: or      ax, 8
 * 000000014032627C: mov     [rbx+6E0h], ax
 * 0000000140326283: test    r8b, 8
 * 0000000140326287: jnz     short loc_140326294
 * 0000000140326289: or      ax, 2
 * 000000014032628D: mov     [rbx+6E0h], ax
 * 0000000140326294: test    r8b, 2
 * 0000000140326298: jz      short loc_1403262CC
 * 000000014032629A: test    r8b, 40h
 * 000000014032629E: jz      short loc_1403262B4
 * 00000001403262A0: or      word ptr [r14], 2
 * 00000001403262A5: bt      r9, 29h ; ')'
 * 00000001403262AA: jb      short loc_1403262CC
 * 00000001403262AC: or      word ptr [r15+rbp], 2
 * 00000001403262B2: jmp     short loc_1403262CC
 * 00000001403262B4: test    r8b, 10h
 * 00000001403262B8: jz      short loc_1403262CC
 * 00000001403262BA: or      word ptr [r14], 1
 * 00000001403262BF: bt      r9, 29h ; ')'
 * 00000001403262C4: jb      short loc_1403262CC
 * 00000001403262C6: or      word ptr [r15+rbp], 1
 * 00000001403262CC: test    byte ptr [rbx+6E2h], 30h
 * 00000001403262D3: mov     rcx, [rsp+88h+var_68]
 * 00000001403262D8: jz      short loc_1403262F1
 * 00000001403262DA: mov     eax, 200h
 * 00000001403262DF: or      [rbx+6E0h], ax
 * 00000001403262E6: jmp     short loc_1403262F1
 * 00000001403262E8: test    rdi, rdi
 * 00000001403262EB: jz      loc_140326109
 * 00000001403262F1: bt      r9, 27h ; '''
 * 00000001403262F6: jnb     loc_140326109
 * 00000001403262FC: or      word ptr [r14], 4
 * 0000000140326301: or      word ptr [rbx+6D2h], 4
 * 0000000140326309: or      word ptr [r15+rbp], 4
 * 000000014032630F: or      r10w, 4
 * 0000000140326314: jmp     loc_140326115
 * 0000000140326319: mov     rdx, 20000000000h
 * 0000000140326323: bt      r9, 2Bh ; '+'
 * 0000000140326328: jnb     short loc_14032632E
 * 000000014032632A: or      word ptr [rsi], 2
 * 000000014032632E: bt      r9, 27h ; '''
 * 0000000140326333: jnb     short loc_140326346
 * 0000000140326335: test    dword ptr [r13+9D4h], 2000h
 * 0000000140326340: jz      short loc_140326346
 * 0000000140326342: or      word ptr [rsi], 4
 * 0000000140326346: bt      r9, 36h ; '6'
 * 000000014032634B: jnb     short loc_140326355
 * 000000014032634D: mov     eax, 400h
 * 0000000140326352: or      [rsi], ax
 * 0000000140326355: test    rcx, rcx
 * 0000000140326358: jz      loc_14032641E
 * 000000014032635E: cmp     rcx, rdi
 * 0000000140326361: jz      loc_14032641E
 * 0000000140326367: cmp     rcx, [r13+9E8h]
 * 000000014032636E: jz      loc_14032641E
 * 0000000140326374: test    r10b, 1
 * 0000000140326378: jz      short loc_1403263E2
 * 000000014032637A: bt      r9, 38h ; '8'
 * 000000014032637F: jb      short loc_1403263B7
 * 0000000140326381: test    r8b, 2
 * 0000000140326385: jnz     short loc_14032638E
 * 0000000140326387: and     r10w, 4
 * 000000014032638C: jmp     short loc_1403263B7
 * 000000014032638E: movzx   eax, word ptr [rbx+6ECh]
 * 0000000140326395: mov     r9, qword ptr [rsp+88h+var_58]
 * 000000014032639A: test    al, 4
 * 000000014032639C: jnz     short loc_1403263B1
 * 000000014032639E: test    rdx, r9
 * 00000001403263A1: jz      short loc_1403263CA
 * 00000001403263A3: test    byte ptr [rbx+6D6h], 1
 * 00000001403263AA: jnz     short loc_1403263CA
 * 00000001403263AC: and     r10w, 4
 * 00000001403263B1: movzx   r8d, byte ptr [rsp+88h+var_58]
 * 00000001403263B7: test    r10b, 1
 * 00000001403263BB: jnz     short loc_1403263FB
 * 00000001403263BD: mov     r12b, 1
 * 00000001403263C0: mov     [rsp+88h+arg_8], r12b
 * 00000001403263C8: jmp     short loc_14032641E
 * 00000001403263CA: movzx   r8d, byte ptr [rsp+88h+var_58]
 * 00000001403263D0: test    r8b, 40h
 * 00000001403263D4: jz      short loc_1403263B7
 * 00000001403263D6: and     r10w, 4
 * 00000001403263DB: or      r10w, 2
 * 00000001403263E0: jmp     short loc_1403263B7
 * 00000001403263E2: test    r11, r11
 * 00000001403263E5: jnz     short loc_1403263FB
 * 00000001403263E7: test    r8b, 10h
 * 00000001403263EB: jnz     short loc_1403263FB
 * 00000001403263ED: test    rdx, r9
 * 00000001403263F0: jz      short loc_14032641E
 * 00000001403263F2: test    byte ptr [rbx+6D6h], 2
 * 00000001403263F9: jnz     short loc_14032641E
 * 00000001403263FB: movzx   eax, word ptr [rbx+6E0h]
 * 0000000140326402: or      ax, 4
 * 0000000140326406: mov     [rbx+6E0h], ax
 * 000000014032640D: test    r8b, 8
 * 0000000140326411: jnz     short loc_14032641E
 * 0000000140326413: or      ax, 20h
 * 0000000140326417: mov     [rbx+6E0h], ax
 * 000000014032641E: mov     rax, r9
 * 0000000140326421: mov     edx, 80h
 * 0000000140326426: and     eax, 2000h
 * 000000014032642B: movzx   ecx, r10w
 * 000000014032642F: or      cx, dx
 * 0000000140326432: mov     rdx, 80000000000h
 * 000000014032643C: test    rax, rax
 * 000000014032643F: mov     rax, r9
 * 0000000140326442: cmovz   cx, r10w
 * 0000000140326447: and     rax, rdx
 * 000000014032644A: movzx   edx, cx
 * 000000014032644D: or      dx, 2
 * 0000000140326451: test    rax, rax
 * 0000000140326454: mov     rax, 40000000000000h
 * 000000014032645E: cmovz   dx, cx
 * 0000000140326462: and     r9, rax
 * 0000000140326465: movzx   edi, dx
 * 0000000140326468: mov     eax, 400h
 * 000000014032646D: or      di, ax
 * 0000000140326470: test    r9, r9
 * 0000000140326473: cmovz   di, dx
 * 0000000140326477: test    r12b, r12b
 * 000000014032647A: jz      short loc_1403264D1
 * 000000014032647C: mov     eax, 1
 * 0000000140326481: xor     edx, edx
 * 0000000140326483: mov     ecx, 49h ; 'I'
 * 0000000140326488: wrmsr
 * 000000014032648A: test    r8b, 8
 * 000000014032648E: jnz     short loc_140326495
 * 0000000140326490: call    KiFlushCurrentRsb
 * 0000000140326495: movzx   eax, word ptr [rbx+6E0h]
 * 000000014032649C: mov     ecx, 0FFFBh
 * 00000001403264A1: and     ax, cx
 * 00000001403264A4: mov     qword ptr [rbx+6D8h], 0
 * 00000001403264AF: mov     ecx, 0FFDFh
 * 00000001403264B4: mov     [rbx+6D2h], di
 * 00000001403264BB: and     ax, cx
 * 00000001403264BE: mov     [rbx+6E0h], ax
 * 00000001403264C5: mov     eax, 0FFAFh
 * 00000001403264CA: and     [rbx+6D4h], ax
 * 00000001403264D1: movzx   eax, word ptr [rbx+6ECh]
 * 00000001403264D8: movzx   edx, di
 * 00000001403264DB: test    al, 4
 * 00000001403264DD: jz      loc_140326684
 * 00000001403264E3: mov     rcx, [rsp+88h+var_60]
 * 00000001403264E8: mov     r8d, 2
 * 00000001403264EE: mov     r9, 20000000000h
 * 00000001403264F8: mov     rax, [rbx+2DB0h]
 * 00000001403264FF: cmp     [rsp+88h+var_68], rcx
 * 0000000140326504: jz      short loc_140326516
 * 0000000140326506: lock or [rbx+6ECh], r8w
 * 000000014032650F: mov     rsi, qword ptr [rsp+88h+var_58]
 * 0000000140326514: jmp     short loc_14032654D
 * 0000000140326516: movzx   eax, word ptr [rax+6ECh]
 * 000000014032651D: test    al, 1
 * 000000014032651F: jnz     short loc_140326536
 * 0000000140326521: or      [rsi], r8w
 * 0000000140326525: mov     rsi, qword ptr [rsp+88h+var_58]
 * 000000014032652A: test    r9, rsi
 * 000000014032652D: jz      short loc_14032654D
 * 000000014032652F: or      [r15+rbp], r8w
 * 0000000140326534: jmp     short loc_14032654D
 * 0000000140326536: mov     eax, 0FFFDh
 * 000000014032653B: and     [rsi], ax
 * 000000014032653E: mov     rsi, qword ptr [rsp+88h+var_58]
 * 0000000140326543: test    r9, rsi
 * 0000000140326546: jz      short loc_14032654D
 * 0000000140326548: and     [r15+rbp], ax
 * 000000014032654D: test    rcx, rcx
 * 0000000140326550: jnz     loc_1403265D6
 * 0000000140326556: mov     rcx, r13
 * 0000000140326559: call    KiUpdateStibpPairing
 * 000000014032655E: movzx   ecx, word ptr [rbx+6D2h]
 * 0000000140326565: mov     r12d, eax
 * 0000000140326568: movzx   r8d, word ptr [r14]
 * 000000014032656C: mov     eax, 0FFFCh
 * 0000000140326571: and     cx, ax
 * 0000000140326574: and     r8w, 3
 * 0000000140326579: or      cx, r8w
 * 000000014032657D: movzx   edx, di
 * 0000000140326580: and     dx, ax
 * 0000000140326583: mov     [rbx+6D2h], cx
 * 000000014032658A: bt      rsi, 29h ; ')'
 * 000000014032658F: jnb     short loc_1403265A0
 * 0000000140326591: test    byte ptr [rbx+6D6h], 1
 * 0000000140326598: jz      short loc_1403265A0
 * 000000014032659A: neg     r8w
 * 000000014032659E: jmp     short loc_1403265A9
 * 00000001403265A0: movzx   eax, byte ptr [r15+rbp]
 * 00000001403265A5: and     al, 3
 * 00000001403265A7: neg     al
 * 00000001403265A9: sbb     ax, ax
 * 00000001403265AC: mov     r8b, 1
 * 00000001403265AF: and     ax, 2
 * 00000001403265B3: or      dx, ax
 * 00000001403265B6: cmp     [rsp+88h+arg_10], 0
 * 00000001403265BE: jnz     loc_140326690
 * 00000001403265C4: mov     eax, 2
 * 00000001403265C9: lock or [rbx+6ECh], ax
 * 00000001403265D1: jmp     loc_140326690
 * 00000001403265D6: cmp     [rsp+88h+arg_18], 0
 * 00000001403265DE: jz      loc_140326684
 * 00000001403265E4: prefetchw byte ptr [rbx+6ECh]
 * 00000001403265EB: movzx   eax, word ptr [rbx+6ECh]
 * 00000001403265F2: mov     edx, 100h
 * 00000001403265F7: nop     word ptr [rax+rax+00000000h]
 * 0000000140326600: movzx   ecx, ax
 * 0000000140326603: or      cx, dx
 * 0000000140326606: lock cmpxchg [rbx+6ECh], cx
 * 000000014032660F: jnz     short loc_140326600
 * 0000000140326611: movzx   ecx, ax
 * 0000000140326614: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014032661B: and     ecx, 1
 * 000000014032661E: test    r9, rax
 * 0000000140326621: jz      short loc_140326657
 * 0000000140326623: movzx   eax, word ptr [r14]
 * 0000000140326627: test    al, 3
 * 0000000140326629: jnz     short loc_140326633
 * 000000014032662B: or      ax, r8w
 * 000000014032662F: mov     [r14], ax
 * 0000000140326633: movzx   eax, word ptr [rbx+6D2h]
 * 000000014032663A: test    al, 3
 * 000000014032663C: jnz     short loc_140326649
 * 000000014032663E: or      ax, r8w
 * 0000000140326642: mov     [rbx+6D2h], ax
 * 0000000140326649: test    byte ptr [rbx+6D6h], 1
 * 0000000140326650: movzx   edx, di
 * 0000000140326653: jz      short loc_140326676
 * 0000000140326655: jmp     short loc_14032666C
 * 0000000140326657: movzx   eax, word ptr [r15+rbp]
 * 000000014032665C: test    al, 3
 * 000000014032665E: jnz     short loc_140326669
 * 0000000140326660: or      ax, r8w
 * 0000000140326664: mov     [r15+rbp], ax
 * 0000000140326669: movzx   edx, di
 * 000000014032666C: test    dil, 3
 * 0000000140326670: jnz     short loc_140326676
 * 0000000140326672: or      dx, r8w
 * 0000000140326676: lock or [rbx+6ECh], r8w
 * 000000014032667F: mov     r12d, ecx
 * 0000000140326682: jmp     short loc_140326687
 * 0000000140326684: xor     r12d, r12d
 * 0000000140326687: movzx   r8d, [rsp+88h+arg_8]
 * 0000000140326690: mov     r15, [rsp+88h+var_38]
 * 0000000140326695: mov     r14, [rsp+88h+var_30]
 * 000000014032669A: mov     rsi, [rsp+88h+var_18]
 * 000000014032669F: mov     rbp, [rsp+88h+arg_0]
 * 00000001403266A7: cmp     dx, [rbx+6E4h]
 * 00000001403266AE: jz      short loc_1403266C7
 * 00000001403266B0: mov     [rbx+6E4h], dx
 * 00000001403266B7: mov     ecx, 48h ; 'H'
 * 00000001403266BC: movzx   edx, dx
 * 00000001403266BF: mov     eax, edx
 * 00000001403266C1: shr     rdx, 20h
 * 00000001403266C5: wrmsr
 * 00000001403266C7: nop
 * 00000001403266C8: test    r8b, r8b
 * 00000001403266CB: jz      short loc_1403266D4
 * 00000001403266CD: or      byte ptr [rbx+6D6h], 2
 * 00000001403266D4: lfence
 * 00000001403266D7: mov     rcx, gs:20h
 * 00000001403266E0: mov     r8, [rcx+88B8h]
 * 00000001403266E7: test    r8, r8
 * 00000001403266EA: jz      short loc_14032670B
 * 00000001403266EC: prefetchw byte ptr [r8]
 * 00000001403266F0: mov     eax, [r8]
 * 00000001403266F3: mov     edx, eax
 * 00000001403266F5: btr     edx, 15h
 * 00000001403266F9: lock cmpxchg [r8], edx
 * 00000001403266FE: jnz     short loc_1403266F3
 * 0000000140326700: bt      eax, 15h
 * 0000000140326704: jnb     short loc_14032670B
 * 0000000140326706: call    KiRemoveSystemWorkPriorityKick
 * 000000014032670B: sti
 * 000000014032670C: test    r12d, r12d
 * 000000014032670F: mov     r12, [rsp+88h+var_28]
 * 0000000140326714: jz      short loc_14032671E
 * 0000000140326716: mov     rcx, rbx
 * 0000000140326719: call    KiSynchronizeStibpPairing
 * 000000014032671E: mov     rdi, [rsp+88h+var_20]
 * 0000000140326723: add     rsp, 78h
 * 0000000140326727: pop     r13
 * 0000000140326729: pop     rbx
 * 000000014032672A: retn
 */
