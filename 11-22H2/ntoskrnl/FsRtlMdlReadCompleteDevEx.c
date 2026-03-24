/*
 * XREFs of FsRtlMdlReadCompleteDevEx @ 0x140AFB010
 * Callers:
 *     KiDecodeMcaFault @ 0x1403E3090 (KiDecodeMcaFault.c)
 *     sub_1403F1310 @ 0x1403F1310 (sub_1403F1310.c)
 *     FsRtlUninitializeSmallMcb @ 0x140B14540 (FsRtlUninitializeSmallMcb.c)
 * Callees:
 *     sub_1403F152C @ 0x1403F152C (sub_1403F152C.c)
 *     sub_1403F160C @ 0x1403F160C (sub_1403F160C.c)
 *     sub_1403F2540 @ 0x1403F2540 (sub_1403F2540.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     sub_140B0E7A8 @ 0x140B0E7A8 (sub_140B0E7A8.c)
 *     sub_140B10838 @ 0x140B10838 (sub_140B10838.c)
 *     sub_140B12020 @ 0x140B12020 (sub_140B12020.c)
 *     $$ba @ 0x140B12898 ($$ba.c)
 *     sub_140B12A74 @ 0x140B12A74 (sub_140B12A74.c)
 *     sub_140B130E0 @ 0x140B130E0 (sub_140B130E0.c)
 *     KiGetGdtIdt @ 0x140B143D0 (KiGetGdtIdt.c)
 *     KiGetLdtr @ 0x140B143E0 (KiGetLdtr.c)
 *     KiGetSs @ 0x140B143F0 (KiGetSs.c)
 *     KiGetTr @ 0x140B14400 (KiGetTr.c)
 *     KiErrata361Present @ 0x140B14410 (KiErrata361Present.c)
 *     KiErrataSkx55Present @ 0x140B14430 (KiErrataSkx55Present.c)
 *     KiErrata704Present @ 0x140B14440 (KiErrata704Present.c)
 *     SdbpCheckDll @ 0x140B144F0 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x140B147A0 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x140B147B0 (KeGuardCheckICall.c)
 *     RtlInitMinimalBarrier @ 0x140B1491C (RtlInitMinimalBarrier.c)
 *     sub_140B19070 @ 0x140B19070 (sub_140B19070.c)
 */

/*
 * Hex-Rays decompilation failed for FsRtlMdlReadCompleteDevEx @ 0x140AFB010
 * Reason: Hex-Rays returned no pseudocode for 0x140AFB010
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140AFB010: mov     [rsp-8+arg_0], rcx
 * 0000000140AFB015: push    rbp
 * 0000000140AFB016: push    rbx
 * 0000000140AFB017: push    rsi
 * 0000000140AFB018: push    rdi
 * 0000000140AFB019: push    r12
 * 0000000140AFB01B: push    r13
 * 0000000140AFB01D: push    r14
 * 0000000140AFB01F: push    r15
 * 0000000140AFB021: lea     rbp, [rsp-0A38h]
 * 0000000140AFB029: sub     rsp, 0B38h
 * 0000000140AFB030: mov     eax, [rcx+990h]
 * 0000000140AFB036: xor     r9d, r9d
 * 0000000140AFB039: mov     r13, rcx
 * 0000000140AFB03C: mov     edi, 0FFFFFFF8h
 * 0000000140AFB041: mov     ecx, 110000h
 * 0000000140AFB046: mov     esi, 0FFFFFFFFh
 * 0000000140AFB04B: and     eax, ecx
 * 0000000140AFB04D: mov     r11d, 12Fh
 * 0000000140AFB053: lea     r10d, [r9+1]
 * 0000000140AFB057: cmp     eax, ecx
 * 0000000140AFB059: jz      loc_140AFB10F
 * 0000000140AFB05F: mov     rdx, [r13+8E0h]
 * 0000000140AFB066: lea     ecx, [r11+1]
 * 0000000140AFB06A: mov     rax, rdx
 * 0000000140AFB06D: lea     r8d, [r9+26h]
 * 0000000140AFB071: mov     [rax], r9
 * 0000000140AFB074: add     ecx, edi
 * 0000000140AFB076: add     rax, 8
 * 0000000140AFB07A: sub     r8, r10
 * 0000000140AFB07D: jnz     short loc_140AFB071
 * 0000000140AFB07F: test    ecx, ecx
 * 0000000140AFB081: jz      short loc_140AFB08D
 * 0000000140AFB083: mov     [rax], r9b
 * 0000000140AFB086: add     rax, r10
 * 0000000140AFB089: add     ecx, esi
 * 0000000140AFB08B: jnz     short loc_140AFB083
 * 0000000140AFB08D: movups  xmm0, xmmword ptr [r13+848h]
 * 0000000140AFB095: lea     rax, [r13+878h]
 * 0000000140AFB09C: mov     rcx, rax
 * 0000000140AFB09F: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140AFB0A4: shr     rcx, 10h
 * 0000000140AFB0A8: movups  xmm1, xmmword ptr [r13+858h]
 * 0000000140AFB0B0: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140AFB0B5: movups  xmm0, xmmword ptr [r13+868h]
 * 0000000140AFB0BD: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140AFB0C5: mov     [rbp+212h], rdx
 * 0000000140AFB0CC: mov     word ptr [rbp+0A70h+var_860], r11w
 * 0000000140AFB0D4: mov     [rdx+10h], ax
 * 0000000140AFB0D8: shr     rax, 20h
 * 0000000140AFB0DC: mov     [rdx+16h], cx
 * 0000000140AFB0E0: mov     [rdx+18h], eax
 * 0000000140AFB0E3: cli
 * 0000000140AFB0E4: xor     eax, eax
 * 0000000140AFB0E6: cmp     [r13+990h], eax
 * 0000000140AFB0ED: jge     short loc_140AFB0F5
 * 0000000140AFB0EF: mov     dr7, rax
 * 0000000140AFB0F2: sti
 * 0000000140AFB0F3: jmp     short loc_140AFB111
 * 0000000140AFB0F5: sidt    fword ptr [rbp+0A70h+var_730]
 * 0000000140AFB0FC: lidt    fword ptr [rbp+0A70h+var_860]
 * 0000000140AFB103: mov     dr7, rax
 * 0000000140AFB106: lidt    fword ptr [rbp+0A70h+var_730]
 * 0000000140AFB10D: jmp     short loc_140AFB0F2
 * 0000000140AFB10F: xor     eax, eax
 * 0000000140AFB111: test    dword ptr [r13+994h], 100h
 * 0000000140AFB11C: mov     [rbp+0A70h+var_A78], rax
 * 0000000140AFB120: jz      short loc_140AFB137
 * 0000000140AFB122: lea     rcx, [rbp+0A78h]
 * 0000000140AFB129: mov     rax, [rcx]
 * 0000000140AFB12C: mov     [rbp+0A70h+var_A78], rax
 * 0000000140AFB130: xor     eax, eax
 * 0000000140AFB132: mov     [rcx], rax
 * 0000000140AFB135: jmp     short loc_140AFB139
 * 0000000140AFB137: xor     eax, eax
 * 0000000140AFB139: mov     r12d, 20h ; ' '
 * 0000000140AFB13F: mov     [r13+828h], eax
 * 0000000140AFB146: test    dword ptr [r13+990h], 40000000h
 * 0000000140AFB151: mov     rbx, 7010008004002001h
 * 0000000140AFB15B: lea     r15d, [r12-1Ch]
 * 0000000140AFB160: jz      short loc_140AFB171
 * 0000000140AFB162: xor     eax, eax
 * 0000000140AFB164: cmp     [r13+0A78h], rax
 * 0000000140AFB16B: jnz     loc_140AFB55B
 * 0000000140AFB171: mov     r14, [r13+7B8h]
 * 0000000140AFB178: lea     rbx, [r13+798h]
 * 0000000140AFB17F: mov     [rbp+0A70h+arg_8], r14
 * 0000000140AFB186: lea     rdx, [rbp+0A70h+var_110]
 * 0000000140AFB18D: mov     rcx, rbx
 * 0000000140AFB190: mov     r8d, r12d
 * 0000000140AFB193: mov     r9, r15
 * 0000000140AFB196: mov     rax, [rcx]
 * 0000000140AFB199: add     r8d, edi
 * 0000000140AFB19C: mov     [rdx], rax
 * 0000000140AFB19F: add     rcx, 8
 * 0000000140AFB1A3: add     rdx, 8
 * 0000000140AFB1A7: sub     r9, r10
 * 0000000140AFB1AA: jnz     short loc_140AFB196
 * 0000000140AFB1AC: xor     eax, eax
 * 0000000140AFB1AE: test    r8d, r8d
 * 0000000140AFB1B1: jz      short loc_140AFB1C4
 * 0000000140AFB1B3: mov     al, [rcx]
 * 0000000140AFB1B5: add     rcx, r10
 * 0000000140AFB1B8: mov     [rdx], al
 * 0000000140AFB1BA: add     rdx, r10
 * 0000000140AFB1BD: add     r8d, esi
 * 0000000140AFB1C0: jnz     short loc_140AFB1B3
 * 0000000140AFB1C2: xor     eax, eax
 * 0000000140AFB1C4: mov     [r13+7B8h], rax
 * 0000000140AFB1CB: mov     ecx, r12d
 * 0000000140AFB1CE: mov     [r13+828h], eax
 * 0000000140AFB1D5: mov     rdx, r15
 * 0000000140AFB1D8: mov     rax, rbx
 * 0000000140AFB1DB: xor     r8d, r8d
 * 0000000140AFB1DE: mov     [rax], r8
 * 0000000140AFB1E1: add     ecx, edi
 * 0000000140AFB1E3: add     rax, 8
 * 0000000140AFB1E7: sub     rdx, r10
 * 0000000140AFB1EA: jnz     short loc_140AFB1DE
 * 0000000140AFB1EC: test    ecx, ecx
 * 0000000140AFB1EE: jz      short loc_140AFB1FA
 * 0000000140AFB1F0: mov     [rax], r8b
 * 0000000140AFB1F3: add     rax, r10
 * 0000000140AFB1F6: add     ecx, esi
 * 0000000140AFB1F8: jnz     short loc_140AFB1F0
 * 0000000140AFB1FA: mov     r10d, [r13+7E4h]
 * 0000000140AFB201: mov     r9, r13
 * 0000000140AFB204: add     [r13+828h], r10d
 * 0000000140AFB20B: mov     rax, r13
 * 0000000140AFB20E: mov     r11d, [r13+814h]
 * 0000000140AFB215: mov     rsi, [r13+818h]
 * 0000000140AFB21C: lea     rcx, [r10+r13]
 * 0000000140AFB220: cmp     r13, rcx
 * 0000000140AFB223: jnb     short loc_140AFB235
 * 0000000140AFB225: mov     edx, 40h ; '@'
 * 0000000140AFB22A: prefetchnta byte ptr [rax]
 * 0000000140AFB22D: add     rax, rdx
 * 0000000140AFB230: cmp     rax, rcx
 * 0000000140AFB233: jb      short loc_140AFB22A
 * 0000000140AFB235: mov     edi, r10d
 * 0000000140AFB238: mov     r8, rsi
 * 0000000140AFB23B: shr     edi, 7
 * 0000000140AFB23E: mov     edx, 1
 * 0000000140AFB243: test    edi, edi
 * 0000000140AFB245: jz      short loc_140AFB2B8
 * 0000000140AFB247: mov     ebx, 0FFFFFFFFh
 * 0000000140AFB24C: mov     r14, 7010008004002001h
 * 0000000140AFB256: mov     eax, 8
 * 0000000140AFB25B: xor     r8, [r9]
 * 0000000140AFB25E: mov     ecx, r11d
 * 0000000140AFB261: rol     r8, cl
 * 0000000140AFB264: xor     r8, [r9+8]
 * 0000000140AFB268: add     r9, 10h
 * 0000000140AFB26C: rol     r8, cl
 * 0000000140AFB26F: sub     rax, rdx
 * 0000000140AFB272: jnz     short loc_140AFB25B
 * 0000000140AFB274: mov     rcx, r9
 * 0000000140AFB277: sub     rcx, r13
 * 0000000140AFB27A: xor     rcx, rsi
 * 0000000140AFB27D: mov     rax, rcx
 * 0000000140AFB280: rol     rax, 11h
 * 0000000140AFB284: xor     rcx, rax
 * 0000000140AFB287: mov     rax, r14
 * 0000000140AFB28A: mul     rcx
 * 0000000140AFB28D: xor     eax, edx
 * 0000000140AFB28F: mov     [rbp+0A70h+var_3E8], rdx
 * 0000000140AFB296: xor     r11d, eax
 * 0000000140AFB299: mov     edx, 1
 * 0000000140AFB29E: and     r11d, 3Fh
 * 0000000140AFB2A2: cmovz   r11d, edx
 * 0000000140AFB2A6: add     edi, ebx
 * 0000000140AFB2A8: jnz     short loc_140AFB256
 * 0000000140AFB2AA: mov     r14, [rbp+0A70h+arg_8]
 * 0000000140AFB2B1: lea     rbx, [r13+798h]
 * 0000000140AFB2B8: and     r10d, 7Fh
 * 0000000140AFB2BC: cmp     r10d, 8
 * 0000000140AFB2C0: jb      short loc_140AFB2DF
 * 0000000140AFB2C2: mov     eax, r10d
 * 0000000140AFB2C5: shr     rax, 3
 * 0000000140AFB2C9: xor     r8, [r9]
 * 0000000140AFB2CC: mov     ecx, r11d
 * 0000000140AFB2CF: rol     r8, cl
 * 0000000140AFB2D2: add     r9, 8
 * 0000000140AFB2D6: add     r10d, 0FFFFFFF8h
 * 0000000140AFB2DA: sub     rax, rdx
 * 0000000140AFB2DD: jnz     short loc_140AFB2C9
 * 0000000140AFB2DF: mov     esi, 0FFFFFFFFh
 * 0000000140AFB2E4: test    r10d, r10d
 * 0000000140AFB2E7: jz      short loc_140AFB2FE
 * 0000000140AFB2E9: movzx   eax, byte ptr [r9]
 * 0000000140AFB2ED: mov     ecx, r11d
 * 0000000140AFB2F0: xor     r8, rax
 * 0000000140AFB2F3: add     r9, rdx
 * 0000000140AFB2F6: rol     r8, cl
 * 0000000140AFB2F9: add     r10d, esi
 * 0000000140AFB2FC: jnz     short loc_140AFB2E9
 * 0000000140AFB2FE: mov     edx, r12d
 * 0000000140AFB301: mov     [r13+7B8h], r14
 * 0000000140AFB308: mov     r12d, 1
 * 0000000140AFB30E: lea     rcx, [rbp+0A70h+var_110]
 * 0000000140AFB315: mov     r9, r15
 * 0000000140AFB318: mov     rax, [rcx]
 * 0000000140AFB31B: add     edx, 0FFFFFFF8h
 * 0000000140AFB31E: mov     [rbx], rax
 * 0000000140AFB321: add     rcx, 8
 * 0000000140AFB325: add     rbx, 8
 * 0000000140AFB329: sub     r9, r12
 * 0000000140AFB32C: jnz     short loc_140AFB318
 * 0000000140AFB32E: test    edx, edx
 * 0000000140AFB330: jz      short loc_140AFB340
 * 0000000140AFB332: mov     al, [rcx]
 * 0000000140AFB334: add     rcx, r12
 * 0000000140AFB337: mov     [rbx], al
 * 0000000140AFB339: add     rbx, r12
 * 0000000140AFB33C: add     edx, esi
 * 0000000140AFB33E: jnz     short loc_140AFB332
 * 0000000140AFB340: cmp     [r13+7B8h], r8
 * 0000000140AFB347: jz      short loc_140AFB3C8
 * 0000000140AFB349: mov     rax, [r13+588h]
 * 0000000140AFB350: mov     ecx, [r13+7E4h]
 * 0000000140AFB357: mov     [rax], r13
 * 0000000140AFB35A: mov     [rax+10h], ecx
 * 0000000140AFB35D: xor     eax, eax
 * 0000000140AFB35F: mov     rcx, [r13+7B8h]
 * 0000000140AFB366: cmp     [r13+8F8h], eax
 * 0000000140AFB36D: jnz     short loc_140AFB3C8
 * 0000000140AFB36F: mov     rax, [r13+588h]
 * 0000000140AFB376: xor     rcx, r8
 * 0000000140AFB379: mov     [rax+18h], rcx
 * 0000000140AFB37D: xor     eax, eax
 * 0000000140AFB37F: cmp     [r13+8F8h], eax
 * 0000000140AFB386: jnz     short loc_140AFB3C8
 * 0000000140AFB388: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFB392: xor     edx, edx
 * 0000000140AFB394: add     rax, r13
 * 0000000140AFB397: mov     rcx, r13
 * 0000000140AFB39A: mov     [r13+900h], rax
 * 0000000140AFB3A1: xor     eax, eax
 * 0000000140AFB3A3: mov     [r13+908h], rax
 * 0000000140AFB3AA: mov     qword ptr [r13+910h], 101h
 * 0000000140AFB3B5: mov     [r13+918h], r8
 * 0000000140AFB3BC: mov     [r13+8F8h], r12d
 * 0000000140AFB3C3: call    $$ba
 * 0000000140AFB3C8: mov     rbx, 7010008004002001h
 * 0000000140AFB3D2: mov     eax, [r13+990h]
 * 0000000140AFB3D9: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFB3E0: or      eax, r15d
 * 0000000140AFB3E3: mov     r8, 0ABCC77118461CEFDh
 * 0000000140AFB3ED: mov     [r13+990h], eax
 * 0000000140AFB3F4: mov     r14d, 2
 * 0000000140AFB3FA: add     [r13+834h], r12d
 * 0000000140AFB401: test    al, 8
 * 0000000140AFB403: jz      loc_140AFB7FC
 * 0000000140AFB409: bt      eax, 17h
 * 0000000140AFB40D: jb      loc_140AFB7FC
 * 0000000140AFB413: mov     eax, [r13+994h]
 * 0000000140AFB41A: mov     r10, [r13+0A70h]
 * 0000000140AFB421: mov     esi, [r13+7E4h]
 * 0000000140AFB428: mov     r11, [r13+9F8h]
 * 0000000140AFB42F: mov     r15d, [r13+808h]
 * 0000000140AFB436: mov     [rbp+0A70h+arg_8], r10
 * 0000000140AFB43D: and     eax, r12d
 * 0000000140AFB440: jz      short loc_140AFB449
 * 0000000140AFB442: mov     r11, [r13+5D0h]
 * 0000000140AFB449: mov     rax, [r13+2C8h]
 * 0000000140AFB450: mov     r12, [r13+160h]
 * 0000000140AFB457: mov     [rbp+0A70h+var_A80], rax
 * 0000000140AFB45B: mov     rax, [r13+340h]
 * 0000000140AFB462: mov     [rbp+0A70h+var_AC0], rax
 * 0000000140AFB466: mov     [rbp+0A70h+var_A28], r12
 * 0000000140AFB46A: rdtsc
 * 0000000140AFB46C: shl     rdx, 20h
 * 0000000140AFB470: or      rax, rdx
 * 0000000140AFB473: mov     rcx, rax
 * 0000000140AFB476: ror     rax, 3
 * 0000000140AFB47A: xor     rcx, rax
 * 0000000140AFB47D: mov     rax, rbx
 * 0000000140AFB480: mul     rcx
 * 0000000140AFB483: mov     rcx, rdx
 * 0000000140AFB486: mov     [rbp+0A70h+var_3A0], rdx
 * 0000000140AFB48D: xor     rcx, rax
 * 0000000140AFB490: mov     rax, r8
 * 0000000140AFB493: mul     rcx
 * 0000000140AFB496: mov     r8, rdi
 * 0000000140AFB499: shr     rdx, 1Ah
 * 0000000140AFB49D: imul    rax, rdx, 5F5E100h
 * 0000000140AFB4A4: sub     rcx, rax
 * 0000000140AFB4A7: sub     r8, rcx
 * 0000000140AFB4AA: mov     [rbp+0A70h+var_9A8], r8
 * 0000000140AFB4B1: mov     r9d, [r13+990h]
 * 0000000140AFB4B8: bt      r9d, 1Ah
 * 0000000140AFB4BD: jnb     loc_140AFB566
 * 0000000140AFB4C3: rdtsc
 * 0000000140AFB4C5: shl     rdx, 20h
 * 0000000140AFB4C9: mov     r13, 0CCCCCCCCCCCCCCCDh
 * 0000000140AFB4D3: or      rax, rdx
 * 0000000140AFB4D6: mov     rcx, rax
 * 0000000140AFB4D9: ror     rax, 3
 * 0000000140AFB4DD: xor     rcx, rax
 * 0000000140AFB4E0: mov     rax, rbx
 * 0000000140AFB4E3: mul     rcx
 * 0000000140AFB4E6: mov     rcx, rdx
 * 0000000140AFB4E9: mov     [rbp+0A70h+var_398], rdx
 * 0000000140AFB4F0: xor     rcx, rax
 * 0000000140AFB4F3: mov     rax, r13
 * 0000000140AFB4F6: mul     rcx
 * 0000000140AFB4F9: shr     rdx, 3
 * 0000000140AFB4FD: lea     rax, [rdx+rdx*4]
 * 0000000140AFB501: add     rax, rax
 * 0000000140AFB504: sub     rcx, rax
 * 0000000140AFB507: cmp     rcx, r14
 * 0000000140AFB50A: jnb     short loc_140AFB566
 * 0000000140AFB50C: rdtsc
 * 0000000140AFB50E: shl     rdx, 20h
 * 0000000140AFB512: or      rax, rdx
 * 0000000140AFB515: mov     rcx, rax
 * 0000000140AFB518: ror     rax, 3
 * 0000000140AFB51C: xor     rcx, rax
 * 0000000140AFB51F: mov     rax, rbx
 * 0000000140AFB522: mul     rcx
 * 0000000140AFB525: mov     rcx, rdx
 * 0000000140AFB528: mov     [rbp+0A70h+var_390], rdx
 * 0000000140AFB52F: xor     rcx, rax
 * 0000000140AFB532: mov     rax, r13
 * 0000000140AFB535: mul     rcx
 * 0000000140AFB538: shr     rdx, 3
 * 0000000140AFB53C: lea     rax, [rdx+rdx*4]
 * 0000000140AFB540: mov     edx, 1
 * 0000000140AFB545: add     rax, rax
 * 0000000140AFB548: sub     rcx, rax
 * 0000000140AFB54B: add     rcx, rdx
 * 0000000140AFB54E: imul    rcx, r8
 * 0000000140AFB552: mov     [rbp+0A70h+var_9A8], rcx
 * 0000000140AFB559: jmp     short loc_140AFB56B
 * 0000000140AFB55B: mov     r12d, 1
 * 0000000140AFB561: jmp     loc_140AFB3D2
 * 0000000140AFB566: mov     edx, 1
 * 0000000140AFB56B: xor     eax, eax
 * 0000000140AFB56D: mov     ebx, eax
 * 0000000140AFB56F: mov     r14d, eax
 * 0000000140AFB572: lea     ecx, [rax+2]
 * 0000000140AFB575: test    cl, r9b
 * 0000000140AFB578: cmovz   esi, r15d
 * 0000000140AFB57C: test    r9b, r9b
 * 0000000140AFB57F: js      short loc_140AFB589
 * 0000000140AFB581: mov     r13d, eax
 * 0000000140AFB584: jmp     loc_140AFB66B
 * 0000000140AFB589: mov     r13d, edx
 * 0000000140AFB58C: rdtsc
 * 0000000140AFB58E: shl     rdx, 20h
 * 0000000140AFB592: mov     r12d, 1
 * 0000000140AFB598: or      rax, rdx
 * 0000000140AFB59B: mov     rcx, rax
 * 0000000140AFB59E: ror     rax, 3
 * 0000000140AFB5A2: xor     rcx, rax
 * 0000000140AFB5A5: mov     rax, 7010008004002001h
 * 0000000140AFB5AF: mul     rcx
 * 0000000140AFB5B2: mov     ecx, 154h
 * 0000000140AFB5B7: mov     rbx, rdx
 * 0000000140AFB5BA: mov     [rbp+0A70h+var_388], rdx
 * 0000000140AFB5C1: mov     rdx, [rbp+0A70h+arg_0]
 * 0000000140AFB5C8: xor     rbx, rax
 * 0000000140AFB5CB: mov     r14, rbx
 * 0000000140AFB5CE: mov     r8, rbx
 * 0000000140AFB5D1: xor     r14, rdx
 * 0000000140AFB5D4: lea     rax, [rdx+0A98h]
 * 0000000140AFB5DB: xor     [rax], r8
 * 0000000140AFB5DE: lea     rax, [rax-8]
 * 0000000140AFB5E2: ror     r8, cl
 * 0000000140AFB5E5: sub     ecx, r12d
 * 0000000140AFB5E8: jnz     short loc_140AFB5DB
 * 0000000140AFB5EA: lea     r9, [r15-0AA0h]
 * 0000000140AFB5F1: mov     r12, r15
 * 0000000140AFB5F4: shr     r9, 3
 * 0000000140AFB5F8: test    r9d, r9d
 * 0000000140AFB5FB: jz      short loc_140AFB63B
 * 0000000140AFB5FD: movsxd  r10, r9d
 * 0000000140AFB600: lea     edi, [rcx+1]
 * 0000000140AFB603: add     r10, 153h
 * 0000000140AFB60A: lea     r10, [rdx+r10*8]
 * 0000000140AFB60E: mov     rdx, [r10]
 * 0000000140AFB611: lea     rax, [r14+r14]
 * 0000000140AFB615: mov     ecx, r9d
 * 0000000140AFB618: lea     r10, [r10-8]
 * 0000000140AFB61C: ror     rdx, cl
 * 0000000140AFB61F: mov     r14, rdx
 * 0000000140AFB622: xor     r14, rax
 * 0000000140AFB625: sub     r9d, edi
 * 0000000140AFB628: jnz     short loc_140AFB60E
 * 0000000140AFB62A: mov     r10, [rbp+0A70h+arg_8]
 * 0000000140AFB631: mov     r12, r15
 * 0000000140AFB634: mov     rdx, [rbp+0A70h+arg_0]
 * 0000000140AFB63B: mov     ecx, esi
 * 0000000140AFB63D: add     rdx, r12
 * 0000000140AFB640: sub     ecx, r15d
 * 0000000140AFB643: shr     ecx, 3
 * 0000000140AFB646: test    ecx, ecx
 * 0000000140AFB648: jz      short loc_140AFB667
 * 0000000140AFB64A: lea     rdx, [rdx+rcx*8]
 * 0000000140AFB64E: mov     r9d, 1
 * 0000000140AFB654: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140AFB658: xor     [rdx], r8
 * 0000000140AFB65B: lea     rdx, [rdx-8]
 * 0000000140AFB65F: ror     r8, cl
 * 0000000140AFB662: sub     ecx, r9d
 * 0000000140AFB665: jnz     short loc_140AFB658
 * 0000000140AFB667: mov     r12, [rbp+0A70h+var_A28]
 * 0000000140AFB66B: test    r10, r10
 * 0000000140AFB66E: jz      short loc_140AFB693
 * 0000000140AFB670: mov     rcx, [rbp+0A70h+arg_0]
 * 0000000140AFB677: lea     r8, [rbp+0A70h+var_9A8]
 * 0000000140AFB67E: mov     rax, [rbp+0A70h+var_AC0]
 * 0000000140AFB682: mov     r9, r12
 * 0000000140AFB685: mov     edx, esi
 * 0000000140AFB687: mov     [rsp+0B70h+BugCheckParameter4], r10
 * 0000000140AFB68C: call    KeGuardDispatchICall
 * 0000000140AFB691: jmp     short loc_140AFB6CB
 * 0000000140AFB693: xor     edx, edx
 * 0000000140AFB695: test    r11, r11
 * 0000000140AFB698: jnz     short loc_140AFB6AD
 * 0000000140AFB69A: lea     r8, [rbp+0A70h+var_9A8]
 * 0000000140AFB6A1: xor     ecx, ecx
 * 0000000140AFB6A3: mov     rax, r12
 * 0000000140AFB6A6: call    KeGuardDispatchICall
 * 0000000140AFB6AB: jmp     short loc_140AFB6CB
 * 0000000140AFB6AD: lea     rax, [rbp+0A70h+var_9A8]
 * 0000000140AFB6B4: xor     r9d, r9d
 * 0000000140AFB6B7: mov     [rsp+0B70h+BugCheckParameter4], rax
 * 0000000140AFB6BC: xor     r8d, r8d
 * 0000000140AFB6BF: mov     rax, [rbp+0A70h+var_A80]
 * 0000000140AFB6C3: mov     rcx, r11
 * 0000000140AFB6C6: call    KeGuardDispatchICall
 * 0000000140AFB6CB: xor     eax, eax
 * 0000000140AFB6CD: test    r13d, r13d
 * 0000000140AFB6D0: mov     r13, [rbp+0A70h+arg_0]
 * 0000000140AFB6D7: lea     r12d, [rax+1]
 * 0000000140AFB6DB: jz      loc_140AFBBDF
 * 0000000140AFB6E1: mov     r8, rbx
 * 0000000140AFB6E4: lea     rax, [r13+0A98h]
 * 0000000140AFB6EB: xor     r8, r13
 * 0000000140AFB6EE: mov     ecx, 154h
 * 0000000140AFB6F3: xor     [rax], rbx
 * 0000000140AFB6F6: lea     rax, [rax-8]
 * 0000000140AFB6FA: ror     rbx, cl
 * 0000000140AFB6FD: sub     ecx, r12d
 * 0000000140AFB700: jnz     short loc_140AFB6F3
 * 0000000140AFB702: lea     r9, [r15-0AA0h]
 * 0000000140AFB709: mov     r11, r15
 * 0000000140AFB70C: shr     r9, 3
 * 0000000140AFB710: test    r9d, r9d
 * 0000000140AFB713: jz      short loc_140AFB742
 * 0000000140AFB715: movsxd  rax, r9d
 * 0000000140AFB718: lea     r10, [r13+0A98h]
 * 0000000140AFB71F: lea     r10, [r10+rax*8]
 * 0000000140AFB723: mov     rdx, [r10]
 * 0000000140AFB726: lea     rax, [r8+r8]
 * 0000000140AFB72A: mov     ecx, r9d
 * 0000000140AFB72D: lea     r10, [r10-8]
 * 0000000140AFB731: ror     rdx, cl
 * 0000000140AFB734: mov     r8, rdx
 * 0000000140AFB737: xor     r8, rax
 * 0000000140AFB73A: sub     r9d, r12d
 * 0000000140AFB73D: jnz     short loc_140AFB723
 * 0000000140AFB73F: mov     r11, r15
 * 0000000140AFB742: sub     esi, r15d
 * 0000000140AFB745: lea     rcx, [r11+r13]
 * 0000000140AFB749: shr     esi, 3
 * 0000000140AFB74C: test    esi, esi
 * 0000000140AFB74E: jz      short loc_140AFB76A
 * 0000000140AFB750: mov     eax, esi
 * 0000000140AFB752: dec     rax
 * 0000000140AFB755: lea     rdx, [rcx+rax*8]
 * 0000000140AFB759: xor     [rdx], rbx
 * 0000000140AFB75C: mov     ecx, esi
 * 0000000140AFB75E: ror     rbx, cl
 * 0000000140AFB761: lea     rdx, [rdx-8]
 * 0000000140AFB765: sub     esi, r12d
 * 0000000140AFB768: jnz     short loc_140AFB759
 * 0000000140AFB76A: cmp     r8, r14
 * 0000000140AFB76D: jz      loc_140AFB7F6
 * 0000000140AFB773: mov     rax, [r13+588h]
 * 0000000140AFB77A: mov     ecx, [r13+7E4h]
 * 0000000140AFB781: mov     [rax], r13
 * 0000000140AFB784: mov     [rax+10h], ecx
 * 0000000140AFB787: xor     eax, eax
 * 0000000140AFB789: cmp     [r13+8F8h], eax
 * 0000000140AFB790: jnz     loc_140AFBBDF
 * 0000000140AFB796: mov     rax, [r13+588h]
 * 0000000140AFB79D: mov     rcx, r8
 * 0000000140AFB7A0: xor     rcx, r14
 * 0000000140AFB7A3: mov     [rax+18h], rcx
 * 0000000140AFB7A7: xor     eax, eax
 * 0000000140AFB7A9: cmp     [r13+8F8h], eax
 * 0000000140AFB7B0: jnz     loc_140AFBBDF
 * 0000000140AFB7B6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFB7C0: xor     edx, edx
 * 0000000140AFB7C2: add     rax, r13
 * 0000000140AFB7C5: mov     rcx, r13
 * 0000000140AFB7C8: mov     [r13+900h], rax
 * 0000000140AFB7CF: xor     eax, eax
 * 0000000140AFB7D1: mov     [r13+908h], rax
 * 0000000140AFB7D8: mov     qword ptr [r13+910h], 10Eh
 * 0000000140AFB7E3: mov     [r13+918h], r8
 * 0000000140AFB7EA: mov     [r13+8F8h], r12d
 * 0000000140AFB7F1: call    $$ba
 * 0000000140AFB7F6: mov     r15d, 4
 * 0000000140AFB7FC: xor     eax, eax
 * 0000000140AFB7FE: mov     esi, [r13+0C4h]
 * 0000000140AFB805: lea     rcx, [r13+628h]
 * 0000000140AFB80C: mov     [r13+0C4h], eax
 * 0000000140AFB813: mov     r9, r13
 * 0000000140AFB816: add     dword ptr [r13+828h], 628h
 * 0000000140AFB821: mov     rax, r13
 * 0000000140AFB824: mov     r10d, [r13+814h]
 * 0000000140AFB82B: mov     r11, [r13+818h]
 * 0000000140AFB832: mov     dword ptr [rbp+0A70h+arg_8], esi
 * 0000000140AFB838: cmp     r13, rcx
 * 0000000140AFB83B: jnb     short loc_140AFB84D
 * 0000000140AFB83D: mov     edx, 40h ; '@'
 * 0000000140AFB842: prefetchnta byte ptr [rax]
 * 0000000140AFB845: add     rax, rdx
 * 0000000140AFB848: cmp     rax, rcx
 * 0000000140AFB84B: jb      short loc_140AFB842
 * 0000000140AFB84D: mov     r8, r11
 * 0000000140AFB850: mov     ebx, 0Ch
 * 0000000140AFB855: mov     rsi, 7010008004002001h
 * 0000000140AFB85F: mov     r14d, 0FFFFFFFFh
 * 0000000140AFB865: mov     eax, 8
 * 0000000140AFB86A: xor     r8, [r9]
 * 0000000140AFB86D: mov     ecx, r10d
 * 0000000140AFB870: rol     r8, cl
 * 0000000140AFB873: xor     r8, [r9+8]
 * 0000000140AFB877: add     r9, 10h
 * 0000000140AFB87B: rol     r8, cl
 * 0000000140AFB87E: sub     rax, r12
 * 0000000140AFB881: jnz     short loc_140AFB86A
 * 0000000140AFB883: mov     rcx, r9
 * 0000000140AFB886: sub     rcx, r13
 * 0000000140AFB889: xor     rcx, r11
 * 0000000140AFB88C: mov     rax, rcx
 * 0000000140AFB88F: rol     rax, 11h
 * 0000000140AFB893: xor     rcx, rax
 * 0000000140AFB896: mov     rax, rsi
 * 0000000140AFB899: mul     rcx
 * 0000000140AFB89C: xor     r10d, eax
 * 0000000140AFB89F: mov     [rbp+0A70h+var_380], rdx
 * 0000000140AFB8A6: xor     r10d, edx
 * 0000000140AFB8A9: and     r10d, 3Fh
 * 0000000140AFB8AD: cmovz   r10d, r12d
 * 0000000140AFB8B1: add     ebx, r14d
 * 0000000140AFB8B4: jnz     short loc_140AFB865
 * 0000000140AFB8B6: mov     esi, dword ptr [rbp+0A70h+arg_8]
 * 0000000140AFB8BC: lea     eax, [rbx+5]
 * 0000000140AFB8BF: mov     [rbp+0A70h+var_A28], rax
 * 0000000140AFB8C3: lea     edx, [rbx+28h]
 * 0000000140AFB8C6: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFB8CD: xor     r8, [r9]
 * 0000000140AFB8D0: mov     ecx, r10d
 * 0000000140AFB8D3: rol     r8, cl
 * 0000000140AFB8D6: add     r9, 8
 * 0000000140AFB8DA: add     edx, 0FFFFFFF8h
 * 0000000140AFB8DD: sub     rax, r12
 * 0000000140AFB8E0: jnz     short loc_140AFB8CD
 * 0000000140AFB8E2: test    edx, edx
 * 0000000140AFB8E4: jz      short loc_140AFB8FB
 * 0000000140AFB8E6: movzx   eax, byte ptr [r9]
 * 0000000140AFB8EA: mov     ecx, r10d
 * 0000000140AFB8ED: xor     r8, rax
 * 0000000140AFB8F0: add     r9, r12
 * 0000000140AFB8F3: rol     r8, cl
 * 0000000140AFB8F6: add     edx, r14d
 * 0000000140AFB8F9: jnz     short loc_140AFB8E6
 * 0000000140AFB8FB: mov     [r13+0C4h], esi
 * 0000000140AFB902: cmp     [r13+0A20h], r8
 * 0000000140AFB909: jz      loc_140AFB991
 * 0000000140AFB90F: mov     rax, [r13+588h]
 * 0000000140AFB916: mov     ecx, [r13+7E4h]
 * 0000000140AFB91D: mov     [rax], r13
 * 0000000140AFB920: mov     [rax+10h], ecx
 * 0000000140AFB923: xor     ecx, ecx
 * 0000000140AFB925: mov     rax, [r13+0A20h]
 * 0000000140AFB92C: cmp     [r13+8F8h], ecx
 * 0000000140AFB933: jnz     short loc_140AFB991
 * 0000000140AFB935: mov     rcx, r8
 * 0000000140AFB938: xor     rcx, rax
 * 0000000140AFB93B: mov     rax, [r13+588h]
 * 0000000140AFB942: mov     [rax+18h], rcx
 * 0000000140AFB946: xor     eax, eax
 * 0000000140AFB948: cmp     [r13+8F8h], eax
 * 0000000140AFB94F: jnz     short loc_140AFB991
 * 0000000140AFB951: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFB95B: xor     edx, edx
 * 0000000140AFB95D: add     rax, r13
 * 0000000140AFB960: mov     rcx, r13
 * 0000000140AFB963: mov     [r13+900h], rax
 * 0000000140AFB96A: xor     eax, eax
 * 0000000140AFB96C: mov     [r13+908h], rax
 * 0000000140AFB973: mov     qword ptr [r13+910h], 109h
 * 0000000140AFB97E: mov     [r13+918h], r8
 * 0000000140AFB985: mov     [r13+8F8h], r12d
 * 0000000140AFB98C: call    $$ba
 * 0000000140AFB991: xor     edx, edx
 * 0000000140AFB993: mov     rcx, r13
 * 0000000140AFB996: call    $$ba
 * 0000000140AFB99B: mov     ecx, [r13+970h]
 * 0000000140AFB9A2: xor     eax, eax
 * 0000000140AFB9A4: mov     [rsp+0B70h+var_B10], r13
 * 0000000140AFB9A9: mov     rsi, r13
 * 0000000140AFB9AC: mov     [rbp+0A70h+var_A68], eax
 * 0000000140AFB9AF: mov     [rbp+0A70h+var_AE0], eax
 * 0000000140AFB9B2: cmp     ecx, r14d
 * 0000000140AFB9B5: jz      short loc_140AFBA0E
 * 0000000140AFB9B7: mov     rax, [r13+278h]
 * 0000000140AFB9BE: call    KeGuardDispatchICall
 * 0000000140AFB9C3: mov     rbx, rax
 * 0000000140AFB9C6: test    rax, rax
 * 0000000140AFB9C9: jnz     short loc_140AFB9E1
 * 0000000140AFB9CB: mov     rax, [r13+280h]
 * 0000000140AFB9D2: xor     ecx, ecx
 * 0000000140AFB9D4: call    KeGuardDispatchICall
 * 0000000140AFB9D9: mov     rbx, rax
 * 0000000140AFB9DC: test    rax, rax
 * 0000000140AFB9DF: jz      short loc_140AFBA0E
 * 0000000140AFB9E1: mov     rax, [r13+290h]
 * 0000000140AFB9E8: lea     rdx, [rbp+0A70h+var_680]
 * 0000000140AFB9EF: mov     rcx, rbx
 * 0000000140AFB9F2: call    KeGuardDispatchICall
 * 0000000140AFB9F7: test    eax, eax
 * 0000000140AFB9F9: jns     loc_140AFBBEA
 * 0000000140AFB9FF: mov     rax, [r13+288h]
 * 0000000140AFBA06: mov     rcx, rbx
 * 0000000140AFBA09: call    KeGuardDispatchICall
 * 0000000140AFBA0E: mov     eax, [r13+994h]
 * 0000000140AFBA15: test    al, 8
 * 0000000140AFBA17: jz      loc_140AFBB36
 * 0000000140AFBA1D: bt      eax, 0Ch
 * 0000000140AFBA21: jb      loc_140AFBB36
 * 0000000140AFBA27: rdtsc
 * 0000000140AFBA29: shl     rdx, 20h
 * 0000000140AFBA2D: mov     rbx, 7010008004002001h
 * 0000000140AFBA37: or      rax, rdx
 * 0000000140AFBA3A: mov     rcx, rax
 * 0000000140AFBA3D: ror     rax, 3
 * 0000000140AFBA41: xor     rcx, rax
 * 0000000140AFBA44: mov     rax, rbx
 * 0000000140AFBA47: mul     rcx
 * 0000000140AFBA4A: mov     [rbp+0A70h+var_378], rdx
 * 0000000140AFBA51: xor     dl, al
 * 0000000140AFBA53: test    dl, 3
 * 0000000140AFBA56: jnz     loc_140AFBB36
 * 0000000140AFBA5C: mov     rax, [r13+0F0h]
 * 0000000140AFBA63: mov     ecx, 40h ; '@'
 * 0000000140AFBA68: mov     r8d, [r13+810h]
 * 0000000140AFBA6F: mov     rdx, [r13+770h]
 * 0000000140AFBA76: call    KeGuardDispatchICall
 * 0000000140AFBA7B: mov     r15, rax
 * 0000000140AFBA7E: xor     eax, eax
 * 0000000140AFBA80: test    r15, r15
 * 0000000140AFBA83: jz      loc_140AFBB38
 * 0000000140AFBA89: mov     rax, [r13+1A8h]
 * 0000000140AFBA90: mov     rcx, r15
 * 0000000140AFBA93: movzx   edx, word ptr [r13+778h]
 * 0000000140AFBA9B: call    KeGuardDispatchICall
 * 0000000140AFBAA0: mov     rcx, [r13+6F0h]
 * 0000000140AFBAA7: mov     rax, [r13+510h]
 * 0000000140AFBAAE: mov     r14d, [rcx+rax]
 * 0000000140AFBAB2: test    r14d, r14d
 * 0000000140AFBAB5: jz      short loc_140AFBAE2
 * 0000000140AFBAB7: rdtsc
 * 0000000140AFBAB9: shl     rdx, 20h
 * 0000000140AFBABD: or      rax, rdx
 * 0000000140AFBAC0: mov     rcx, rax
 * 0000000140AFBAC3: ror     rax, 3
 * 0000000140AFBAC7: xor     rcx, rax
 * 0000000140AFBACA: mov     rax, rbx
 * 0000000140AFBACD: mul     rcx
 * 0000000140AFBAD0: mov     [rbp+0A70h+var_370], rdx
 * 0000000140AFBAD7: xor     rax, rdx
 * 0000000140AFBADA: xor     edx, edx
 * 0000000140AFBADC: div     r14
 * 0000000140AFBADF: mov     r14, rdx
 * 0000000140AFBAE2: mov     rax, [r13+3B0h]
 * 0000000140AFBAE9: xor     ecx, ecx
 * 0000000140AFBAEB: call    KeGuardDispatchICall
 * 0000000140AFBAF0: mov     rbx, rax
 * 0000000140AFBAF3: test    rax, rax
 * 0000000140AFBAF6: jz      short loc_140AFBB21
 * 0000000140AFBAF8: mov     r12d, 0FFFFFFFFh
 * 0000000140AFBAFE: mov     rcx, rbx
 * 0000000140AFBB01: test    r14d, r14d
 * 0000000140AFBB04: jz      loc_140AFBC5E
 * 0000000140AFBB0A: mov     rax, [r13+3B0h]
 * 0000000140AFBB11: add     r14d, r12d
 * 0000000140AFBB14: call    KeGuardDispatchICall
 * 0000000140AFBB19: mov     rbx, rax
 * 0000000140AFBB1C: test    rax, rax
 * 0000000140AFBB1F: jnz     short loc_140AFBAFE
 * 0000000140AFBB21: mov     rax, [r13+0F8h]
 * 0000000140AFBB28: mov     rcx, r15
 * 0000000140AFBB2B: call    KeGuardDispatchICall
 * 0000000140AFBB30: mov     r14d, 0FFFFFFFFh
 * 0000000140AFBB36: xor     eax, eax
 * 0000000140AFBB38: mov     r11d, 1
 * 0000000140AFBB3E: mov     [rbp+0A70h+var_A68], eax
 * 0000000140AFBB41: mov     [rbp+0A70h+var_9F0], rax
 * 0000000140AFBB48: mov     ecx, 4
 * 0000000140AFBB4D: lea     rax, [rbp+0A70h+var_9E8]
 * 0000000140AFBB54: xor     edx, edx
 * 0000000140AFBB56: mov     [rax], dl
 * 0000000140AFBB58: add     rax, r11
 * 0000000140AFBB5B: add     ecx, r14d
 * 0000000140AFBB5E: jnz     short loc_140AFBB56
 * 0000000140AFBB60: mov     ecx, [r13+820h]
 * 0000000140AFBB67: lea     r12, [r13+82Ch]
 * 0000000140AFBB6E: mov     eax, [r12]
 * 0000000140AFBB72: mov     edx, 6
 * 0000000140AFBB77: mov     r14d, 8000h
 * 0000000140AFBB7D: mov     [rbp+0A70h+var_A4C], ecx
 * 0000000140AFBB80: mov     [rbp+0A70h+var_AB8], r12
 * 0000000140AFBB84: cmp     [r13+828h], eax
 * 0000000140AFBB8B: jge     loc_140B07256
 * 0000000140AFBB91: mov     rbx, [rbp+0A70h+var_360]
 * 0000000140AFBB98: mov     r14, [rbp+0A70h+var_358]
 * 0000000140AFBB9F: mov     r15d, [rbp+0A70h+var_810]
 * 0000000140AFBBA6: mov     r10d, [rbp+0A70h+var_794]
 * 0000000140AFBBAD: mov     [rbp+0A70h+var_A80], rbx
 * 0000000140AFBBB1: mov     [rbp+0A70h+var_AC0], r14
 * 0000000140AFBBB5: mov     [rbp+0A70h+var_AD0], r15d
 * 0000000140AFBBB9: mov     [rbp+0A70h+var_A50], r10d
 * 0000000140AFBBBD: mov     eax, [rsi+990h]
 * 0000000140AFBBC3: mov     r8d, 110000h
 * 0000000140AFBBC9: and     eax, r8d
 * 0000000140AFBBCC: cmp     eax, r8d
 * 0000000140AFBBCF: jz      loc_140AFBDAD
 * 0000000140AFBBD5: xor     eax, eax
 * 0000000140AFBBD7: mov     dr7, rax
 * 0000000140AFBBDA: jmp     loc_140AFBDAF
 * 0000000140AFBBDF: mov     r15d, 4
 * 0000000140AFBBE5: jmp     loc_140AFB7FE
 * 0000000140AFBBEA: mov     [r13+980h], rbx
 * 0000000140AFBBF1: mov     rax, [r13+2B8h]
 * 0000000140AFBBF8: call    KeGuardDispatchICall
 * 0000000140AFBBFD: mov     rbx, rax
 * 0000000140AFBC00: mov     rax, [r13+2D8h]
 * 0000000140AFBC07: mov     rcx, rbx
 * 0000000140AFBC0A: call    KeGuardDispatchICall
 * 0000000140AFBC0F: mov     rdx, rax
 * 0000000140AFBC12: test    rax, rax
 * 0000000140AFBC15: jnz     short loc_140AFBC1C
 * 0000000140AFBC17: mov     ecx, r15d
 * 0000000140AFBC1A: jmp     short loc_140AFBC2F
 * 0000000140AFBC1C: mov     rax, [r13+2E8h]
 * 0000000140AFBC23: mov     rcx, rbx
 * 0000000140AFBC26: call    KeGuardDispatchICall
 * 0000000140AFBC2B: xor     eax, eax
 * 0000000140AFBC2D: mov     ecx, eax
 * 0000000140AFBC2F: mov     eax, [r13+994h]
 * 0000000140AFBC36: mov     r11d, 1
 * 0000000140AFBC3C: and     eax, 0FFFFFFFBh
 * 0000000140AFBC3F: mov     [rbp+0A70h+var_AE0], r11d
 * 0000000140AFBC43: or      eax, ecx
 * 0000000140AFBC45: mov     [r13+994h], eax
 * 0000000140AFBC4C: add     dword ptr [r13+828h], 10000h
 * 0000000140AFBC57: xor     eax, eax
 * 0000000140AFBC59: jmp     loc_140AFBB41
 * 0000000140AFBC5E: mov     rax, [r13+3A0h]
 * 0000000140AFBC65: call    KeGuardDispatchICall
 * 0000000140AFBC6A: xor     r14d, r14d
 * 0000000140AFBC6D: mov     rcx, rbx
 * 0000000140AFBC70: test    eax, eax
 * 0000000140AFBC72: jns     short loc_140AFBC85
 * 0000000140AFBC74: mov     rax, [r13+3B8h]
 * 0000000140AFBC7B: call    KeGuardDispatchICall
 * 0000000140AFBC80: jmp     loc_140AFBB21
 * 0000000140AFBC85: mov     rax, [r13+438h]
 * 0000000140AFBC8C: lea     rdx, [rbp+0A70h+var_680]
 * 0000000140AFBC93: call    KeGuardDispatchICall
 * 0000000140AFBC98: mov     rax, [r13+1C8h]
 * 0000000140AFBC9F: xor     r9d, r9d
 * 0000000140AFBCA2: xor     r8d, r8d
 * 0000000140AFBCA5: mov     [rsp+0B70h+BugCheckParameter4], r14
 * 0000000140AFBCAA: mov     rdx, r15
 * 0000000140AFBCAD: mov     rcx, rbx
 * 0000000140AFBCB0: call    KeGuardDispatchICall
 * 0000000140AFBCB5: rdtsc
 * 0000000140AFBCB7: shl     rdx, 20h
 * 0000000140AFBCBB: or      rax, rdx
 * 0000000140AFBCBE: mov     rcx, rax
 * 0000000140AFBCC1: ror     rax, 3
 * 0000000140AFBCC5: xor     rcx, rax
 * 0000000140AFBCC8: mov     rax, 7010008004002001h
 * 0000000140AFBCD2: mul     rcx
 * 0000000140AFBCD5: mov     rcx, r15
 * 0000000140AFBCD8: mov     rbx, rdx
 * 0000000140AFBCDB: mov     [rbp+0A70h+var_368], rdx
 * 0000000140AFBCE2: xor     rbx, rax
 * 0000000140AFBCE5: mov     rax, [r13+1C0h]
 * 0000000140AFBCEC: call    KeGuardDispatchICall
 * 0000000140AFBCF1: mov     ecx, eax
 * 0000000140AFBCF3: xor     edx, edx
 * 0000000140AFBCF5: mov     rax, rbx
 * 0000000140AFBCF8: div     rcx
 * 0000000140AFBCFB: mov     rbx, rdx
 * 0000000140AFBCFE: cli
 * 0000000140AFBCFF: sti
 * 0000000140AFBD00: mov     rax, [r13+1A0h]
 * 0000000140AFBD07: lea     rcx, [rbp+0A70h+var_690]
 * 0000000140AFBD0E: xor     edx, edx
 * 0000000140AFBD10: call    KeGuardDispatchICall
 * 0000000140AFBD15: mov     rax, [r13+1B0h]
 * 0000000140AFBD1C: lea     rcx, [rbp+0A70h+var_228]
 * 0000000140AFBD23: mov     rdx, r15
 * 0000000140AFBD26: call    KeGuardDispatchICall
 * 0000000140AFBD2B: jmp     short loc_140AFBD34
 * 0000000140AFBD2D: test    ebx, ebx
 * 0000000140AFBD2F: jz      short loc_140AFBD54
 * 0000000140AFBD31: add     ebx, r12d
 * 0000000140AFBD34: mov     rax, [r13+1B8h]
 * 0000000140AFBD3B: lea     rdx, [rbp+0A70h+var_228]
 * 0000000140AFBD42: lea     rcx, [rbp+0A70h+var_9E0]
 * 0000000140AFBD49: call    KeGuardDispatchICall
 * 0000000140AFBD4E: test    eax, eax
 * 0000000140AFBD50: jns     short loc_140AFBD2D
 * 0000000140AFBD52: jmp     short loc_140AFBD6D
 * 0000000140AFBD54: mov     rax, [r13+1A0h]
 * 0000000140AFBD5B: lea     rcx, [rbp+0A70h+var_690]
 * 0000000140AFBD62: mov     edx, [rbp+0A70h+var_9E0]
 * 0000000140AFBD68: call    KeGuardDispatchICall
 * 0000000140AFBD6D: mov     rax, [r13+1D0h]
 * 0000000140AFBD74: lea     rdx, [rbp+0A70h+var_248]
 * 0000000140AFBD7B: lea     rcx, [rbp+0A70h+var_690]
 * 0000000140AFBD82: call    KeGuardDispatchICall
 * 0000000140AFBD87: mov     rax, [r13+0F8h]
 * 0000000140AFBD8E: mov     rcx, r15
 * 0000000140AFBD91: call    KeGuardDispatchICall
 * 0000000140AFBD96: mov     r11d, 1
 * 0000000140AFBD9C: xor     eax, eax
 * 0000000140AFBD9E: mov     [rbp+0A70h+var_A68], r11d
 * 0000000140AFBDA2: mov     r14d, 0FFFFFFFFh
 * 0000000140AFBDA8: jmp     loc_140AFBB41
 * 0000000140AFBDAD: xor     eax, eax
 * 0000000140AFBDAF: cmp     ecx, [rsi+80Ch]
 * 0000000140AFBDB5: jnz     short loc_140AFBDF9
 * 0000000140AFBDB7: add     [rsi+830h], r11d
 * 0000000140AFBDBE: mov     ecx, eax
 * 0000000140AFBDC0: cmp     dword ptr [rsi+958h], 0Bh
 * 0000000140AFBDC7: mov     [rbp+0A70h+var_A4C], eax
 * 0000000140AFBDCA: jnz     short loc_140AFBDF9
 * 0000000140AFBDCC: mov     eax, [rsi+990h]
 * 0000000140AFBDD2: test    r11b, al
 * 0000000140AFBDD5: jnz     short loc_140AFBDF9
 * 0000000140AFBDD7: mov     r8d, 0FFFFFFFFh
 * 0000000140AFBDDD: cmp     [rsi+970h], r8d
 * 0000000140AFBDE4: jnz     short loc_140AFBDF0
 * 0000000140AFBDE6: xor     eax, eax
 * 0000000140AFBDE8: mov     [rsi+970h], eax
 * 0000000140AFBDEE: jmp     short loc_140AFBDF9
 * 0000000140AFBDF0: or      eax, r11d
 * 0000000140AFBDF3: mov     [rsi+990h], eax
 * 0000000140AFBDF9: mov     rax, [rsi+0A78h]
 * 0000000140AFBE00: xor     r9d, r9d
 * 0000000140AFBE03: test    rax, rax
 * 0000000140AFBE06: mov     r8, rsi
 * 0000000140AFBE09: cmovnz  r8, rax
 * 0000000140AFBE0D: xor     eax, eax
 * 0000000140AFBE0F: mov     r13d, [r8+808h]
 * 0000000140AFBE16: add     r13, r8
 * 0000000140AFBE19: mov     [rsp+0B70h+var_B20], r13
 * 0000000140AFBE1E: cmp     dword ptr [rbp+0A70h+var_9F0], eax
 * 0000000140AFBE24: jz      short loc_140AFBE44
 * 0000000140AFBE26: cmp     dword ptr [rbp+0A70h+var_9F0+4], ecx
 * 0000000140AFBE2C: ja      short loc_140AFBE44
 * 0000000140AFBE2E: mov     r13d, [rbp+0A70h+var_9E8]
 * 0000000140AFBE35: mov     r9d, dword ptr [rbp+0A70h+var_9F0+4]
 * 0000000140AFBE3C: add     r13, r8
 * 0000000140AFBE3F: mov     [rsp+0B70h+var_B20], r13
 * 0000000140AFBE44: cmp     r9d, ecx
 * 0000000140AFBE47: jz      loc_140AFBF64
 * 0000000140AFBE4D: mov     r10d, ecx
 * 0000000140AFBE50: mov     r12d, 2
 * 0000000140AFBE56: sub     r10d, r9d
 * 0000000140AFBE59: mov     r15, 0AAAAAAAAAAAAAAABh
 * 0000000140AFBE63: mov     r9d, ecx
 * 0000000140AFBE66: mov     ecx, [r13+0]
 * 0000000140AFBE6A: cmp     ecx, 1Ch
 * 0000000140AFBE6D: jg      short loc_140AFBEC1
 * 0000000140AFBE6F: jz      short loc_140AFBEBA
 * 0000000140AFBE71: sub     ecx, 1
 * 0000000140AFBE74: jz      short loc_140AFBEDC
 * 0000000140AFBE76: sub     ecx, edx
 * 0000000140AFBE78: jz      short loc_140AFBEA8
 * 0000000140AFBE7A: sub     ecx, 1
 * 0000000140AFBE7D: jz      short loc_140AFBE98
 * 0000000140AFBE7F: sub     ecx, r12d
 * 0000000140AFBE82: jz      short loc_140AFBE89
 * 0000000140AFBE84: cmp     ecx, r12d
 * 0000000140AFBE87: jmp     short loc_140AFBED3
 * 0000000140AFBE89: mov     eax, [r13+1Ch]
 * 0000000140AFBE8D: add     eax, 3
 * 0000000140AFBE90: shl     eax, 4
 * 0000000140AFBE93: jmp     loc_140AFBF4B
 * 0000000140AFBE98: movzx   eax, word ptr [r13+20h]
 * 0000000140AFBE9D: add     eax, 37h ; '7'
 * 0000000140AFBEA0: and     eax, 0FFFFFFF8h
 * 0000000140AFBEA3: jmp     loc_140AFBF4B
 * 0000000140AFBEA8: mov     eax, [r13+18h]
 * 0000000140AFBEAC: add     eax, r12d
 * 0000000140AFBEAF: lea     eax, [rax+rax*2]
 * 0000000140AFBEB2: shl     eax, 3
 * 0000000140AFBEB5: jmp     loc_140AFBF4B
 * 0000000140AFBEBA: movzx   eax, word ptr [r13+28h]
 * 0000000140AFBEBF: jmp     short loc_140AFBE9D
 * 0000000140AFBEC1: sub     ecx, 1Eh
 * 0000000140AFBEC4: jz      short loc_140AFBF1B
 * 0000000140AFBEC6: sub     ecx, 3
 * 0000000140AFBEC9: jz      short loc_140AFBEF3
 * 0000000140AFBECB: sub     ecx, 1
 * 0000000140AFBECE: jz      short loc_140AFBEF3
 * 0000000140AFBED0: cmp     ecx, 9
 * 0000000140AFBED3: jz      short loc_140AFBEDC
 * 0000000140AFBED5: mov     eax, 30h ; '0'
 * 0000000140AFBEDA: jmp     short loc_140AFBF4B
 * 0000000140AFBEDC: mov     ecx, [r13+10h]
 * 0000000140AFBEE0: mov     rax, r15
 * 0000000140AFBEE3: mul     rcx
 * 0000000140AFBEE6: shr     rdx, 3
 * 0000000140AFBEEA: lea     eax, ds:30h[rdx*4]
 * 0000000140AFBEF1: jmp     short loc_140AFBF46
 * 0000000140AFBEF3: mov     ecx, [r13+20h]
 * 0000000140AFBEF7: mov     edx, [r13+28h]
 * 0000000140AFBEFB: and     ecx, 0FFFh
 * 0000000140AFBF01: add     rdx, 0FFFh
 * 0000000140AFBF08: add     rdx, rcx
 * 0000000140AFBF0B: shr     rdx, 0Ch
 * 0000000140AFBF0F: lea     eax, [rdx+rdx*4]
 * 0000000140AFBF12: lea     eax, ds:30h[rax*4]
 * 0000000140AFBF19: jmp     short loc_140AFBF46
 * 0000000140AFBF1B: mov     eax, [r13+24h]
 * 0000000140AFBF1F: lea     ecx, [rax-1]
 * 0000000140AFBF22: neg     eax
 * 0000000140AFBF24: sbb     eax, eax
 * 0000000140AFBF26: and     ecx, eax
 * 0000000140AFBF28: mov     rax, r15
 * 0000000140AFBF2B: mul     rcx
 * 0000000140AFBF2E: movzx   eax, word ptr [r13+28h]
 * 0000000140AFBF33: shr     rdx, 3
 * 0000000140AFBF37: add     edx, 7
 * 0000000140AFBF3A: and     edx, 0FFFFFFF8h
 * 0000000140AFBF3D: add     eax, r12d
 * 0000000140AFBF40: lea     eax, [rax+rax*2]
 * 0000000140AFBF43: lea     eax, [rdx+rax*8]
 * 0000000140AFBF46: mov     edx, 6
 * 0000000140AFBF4B: add     r13, rax
 * 0000000140AFBF4E: sub     r10, r11
 * 0000000140AFBF51: jnz     loc_140AFBE66
 * 0000000140AFBF57: mov     r12, [rbp+0A70h+var_AB8]
 * 0000000140AFBF5B: mov     r15d, [rbp+0A70h+var_AD0]
 * 0000000140AFBF5F: mov     [rsp+0B70h+var_B20], r13
 * 0000000140AFBF64: mov     eax, r13d
 * 0000000140AFBF67: mov     dword ptr [rbp+0A70h+var_9F0], r11d
 * 0000000140AFBF6E: sub     eax, r8d
 * 0000000140AFBF71: mov     dword ptr [rbp+0A70h+var_9F0+4], r9d
 * 0000000140AFBF78: mov     [rbp+0A70h+var_9E8], eax
 * 0000000140AFBF7E: mov     r10d, [r13+0]
 * 0000000140AFBF82: mov     dword ptr [rbp+0A70h+arg_8], r10d
 * 0000000140AFBF89: cmp     r10d, 1Dh
 * 0000000140AFBF8D: jg      loc_140B01D49
 * 0000000140AFBF93: jz      loc_140B01910
 * 0000000140AFBF99: cmp     r10d, 0Dh
 * 0000000140AFBF9D: jg      loc_140AFD826
 * 0000000140AFBFA3: jz      loc_140B014A2
 * 0000000140AFBFA9: xor     eax, eax
 * 0000000140AFBFAB: mov     ecx, r10d
 * 0000000140AFBFAE: test    r10d, r10d
 * 0000000140AFBFB1: jz      loc_140AFD608
 * 0000000140AFBFB7: sub     ecx, 1
 * 0000000140AFBFBA: jz      short loc_140AFBFFB
 * 0000000140AFBFBC: sub     ecx, 3
 * 0000000140AFBFBF: jz      loc_140AFD0A7
 * 0000000140AFBFC5: sub     ecx, 1
 * 0000000140AFBFC8: jz      loc_140AFCD70
 * 0000000140AFBFCE: lea     r14d, [rax+2]
 * 0000000140AFBFD2: sub     ecx, r14d
 * 0000000140AFBFD5: jz      loc_140AFCC05
 * 0000000140AFBFDB: sub     ecx, 1
 * 0000000140AFBFDE: jz      loc_140AFC7AA
 * 0000000140AFBFE4: sub     ecx, r14d
 * 0000000140AFBFE7: jz      loc_140AFC437
 * 0000000140AFBFED: sub     ecx, 1
 * 0000000140AFBFF0: jz      short loc_140AFC041
 * 0000000140AFBFF2: cmp     ecx, 1
 * 0000000140AFBFF5: jnz     loc_140B040E7
 * 0000000140AFBFFB: mov     ebx, 0Ch
 * 0000000140AFC000: cmp     r10d, ebx
 * 0000000140AFC003: jnz     loc_140B06468
 * 0000000140AFC009: cmp     [rsi+980h], rax
 * 0000000140AFC010: jz      short loc_140AFC04A
 * 0000000140AFC012: mov     r8d, [rsi+824h]
 * 0000000140AFC019: mov     edx, [rsi+994h]
 * 0000000140AFC01F: test    r8d, r8d
 * 0000000140AFC022: jnz     loc_140AFD340
 * 0000000140AFC028: lea     ecx, ds:0[rdx*8]
 * 0000000140AFC02F: xor     ecx, edx
 * 0000000140AFC031: and     ecx, 20h
 * 0000000140AFC034: xor     ecx, edx
 * 0000000140AFC036: mov     [rsi+994h], ecx
 * 0000000140AFC03C: jmp     loc_140AFD351
 * 0000000140AFC041: cmp     [rsi+980h], rax
 * 0000000140AFC048: jnz     short loc_140AFC05B
 * 0000000140AFC04A: mov     [rsi+824h], eax
 * 0000000140AFC050: mov     r12d, 1
 * 0000000140AFC056: jmp     loc_140AFC14A
 * 0000000140AFC05B: cmp     [rsi+824h], eax
 * 0000000140AFC061: jnz     loc_140AFC1A9
 * 0000000140AFC067: mov     eax, [rsi+994h]
 * 0000000140AFC06D: lea     ecx, ds:0[rax*8]
 * 0000000140AFC074: xor     ecx, eax
 * 0000000140AFC076: and     ecx, 20h
 * 0000000140AFC079: xor     ecx, eax
 * 0000000140AFC07B: mov     [rsi+994h], ecx
 * 0000000140AFC081: test    cl, 4
 * 0000000140AFC084: jz      loc_140AFC1C5
 * 0000000140AFC08A: mov     ecx, [r13+8]
 * 0000000140AFC08E: xor     eax, eax
 * 0000000140AFC090: mov     r14d, [r13+10h]
 * 0000000140AFC094: and     ecx, 0FFFh
 * 0000000140AFC09A: mov     rbx, [r13+8]
 * 0000000140AFC09E: add     r14, 0FFFh
 * 0000000140AFC0A5: add     r14, rcx
 * 0000000140AFC0A8: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140AFC0AF: shr     r14, 0Ch
 * 0000000140AFC0B3: lea     r12d, [rax+1]
 * 0000000140AFC0B7: test    r14, r14
 * 0000000140AFC0BA: jz      loc_140AFC14A
 * 0000000140AFC0C0: xor     edi, edi
 * 0000000140AFC0C2: mov     rax, [rsi+2B0h]
 * 0000000140AFC0C9: mov     rcx, rbx
 * 0000000140AFC0CC: sub     r14, r12
 * 0000000140AFC0CF: call    KeGuardDispatchICall
 * 0000000140AFC0D4: test    al, al
 * 0000000140AFC0D6: jz      short loc_140AFC12B
 * 0000000140AFC0D8: cmp     [rsi+8F8h], edi
 * 0000000140AFC0DE: jnz     short loc_140AFC12B
 * 0000000140AFC0E0: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFC0EA: xor     edx, edx
 * 0000000140AFC0EC: add     rax, rsi
 * 0000000140AFC0EF: mov     rcx, rsi
 * 0000000140AFC0F2: mov     [rsi+900h], rax
 * 0000000140AFC0F9: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFC103: add     rax, r13
 * 0000000140AFC106: mov     [rsi+908h], rax
 * 0000000140AFC10D: movsxd  rax, dword ptr [r13+0]
 * 0000000140AFC111: mov     [rsi+910h], rax
 * 0000000140AFC118: mov     [rsi+918h], rbx
 * 0000000140AFC11F: mov     [rsi+8F8h], r12d
 * 0000000140AFC126: call    $$ba
 * 0000000140AFC12B: add     dword ptr [rsi+828h], 100h
 * 0000000140AFC135: add     rbx, 1000h
 * 0000000140AFC13C: test    r14, r14
 * 0000000140AFC13F: jnz     short loc_140AFC0C2
 * 0000000140AFC141: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFC148: xor     eax, eax
 * 0000000140AFC14A: mov     r14d, 8000h
 * 0000000140AFC150: mov     ecx, [rbp+0A70h+var_A4C]
 * 0000000140AFC153: cmp     [rsi+824h], eax
 * 0000000140AFC159: jz      short loc_140AFC162
 * 0000000140AFC15B: mov     edx, 0FFFFFFFFh
 * 0000000140AFC160: add     ecx, edx
 * 0000000140AFC162: add     ecx, r12d
 * 0000000140AFC165: mov     [rbp+0A70h+var_A4C], ecx
 * 0000000140AFC168: cmp     [rsi+8F8h], eax
 * 0000000140AFC16E: jnz     loc_140B0725E
 * 0000000140AFC174: lea     r12, [rsi+82Ch]
 * 0000000140AFC17B: mov     eax, [r12]
 * 0000000140AFC17F: mov     [rbp+0A70h+var_AB8], r12
 * 0000000140AFC183: cmp     [rsi+828h], eax
 * 0000000140AFC189: jge     loc_140B07256
 * 0000000140AFC18F: mov     rbx, [rbp+0A70h+var_A80]
 * 0000000140AFC193: mov     edx, 6
 * 0000000140AFC198: mov     r14, [rbp+0A70h+var_AC0]
 * 0000000140AFC19C: mov     r15d, [rbp+0A70h+var_AD0]
 * 0000000140AFC1A0: lea     r11d, [rdx-5]
 * 0000000140AFC1A4: jmp     loc_140AFBBBD
 * 0000000140AFC1A9: mov     ecx, [rsi+994h]
 * 0000000140AFC1AF: mov     eax, ecx
 * 0000000140AFC1B1: shr     eax, 3
 * 0000000140AFC1B4: xor     eax, ecx
 * 0000000140AFC1B6: test    al, 4
 * 0000000140AFC1B8: jz      loc_140AFC081
 * 0000000140AFC1BE: xor     eax, eax
 * 0000000140AFC1C0: jmp     loc_140AFC04A
 * 0000000140AFC1C5: mov     r14, [r13+8]
 * 0000000140AFC1C9: mov     r8d, [r13+10h]
 * 0000000140AFC1CD: mov     r9, r14
 * 0000000140AFC1D0: add     [rsi+828h], r8d
 * 0000000140AFC1D7: mov     rax, r14
 * 0000000140AFC1DA: mov     r10d, [rsi+814h]
 * 0000000140AFC1E1: mov     r15, [rsi+818h]
 * 0000000140AFC1E8: lea     rcx, [r14+r8]
 * 0000000140AFC1EC: cmp     r14, rcx
 * 0000000140AFC1EF: jnb     short loc_140AFC201
 * 0000000140AFC1F1: mov     edx, 40h ; '@'
 * 0000000140AFC1F6: prefetchnta byte ptr [rax]
 * 0000000140AFC1F9: add     rax, rdx
 * 0000000140AFC1FC: cmp     rax, rcx
 * 0000000140AFC1FF: jb      short loc_140AFC1F6
 * 0000000140AFC201: mov     r11d, r8d
 * 0000000140AFC204: mov     rbx, r15
 * 0000000140AFC207: shr     r11d, 7
 * 0000000140AFC20B: mov     r12d, 1
 * 0000000140AFC211: test    r11d, r11d
 * 0000000140AFC214: jz      short loc_140AFC284
 * 0000000140AFC216: mov     rdi, 7010008004002001h
 * 0000000140AFC220: mov     eax, 8
 * 0000000140AFC225: xor     rbx, [r9]
 * 0000000140AFC228: mov     ecx, r10d
 * 0000000140AFC22B: rol     rbx, cl
 * 0000000140AFC22E: xor     rbx, [r9+8]
 * 0000000140AFC232: add     r9, 10h
 * 0000000140AFC236: rol     rbx, cl
 * 0000000140AFC239: sub     rax, r12
 * 0000000140AFC23C: jnz     short loc_140AFC225
 * 0000000140AFC23E: mov     rcx, r9
 * 0000000140AFC241: sub     rcx, r14
 * 0000000140AFC244: xor     rcx, r15
 * 0000000140AFC247: mov     rax, rcx
 * 0000000140AFC24A: rol     rax, 11h
 * 0000000140AFC24E: xor     rcx, rax
 * 0000000140AFC251: mov     rax, rdi
 * 0000000140AFC254: mul     rcx
 * 0000000140AFC257: xor     r10d, eax
 * 0000000140AFC25A: mov     [rbp+0A70h+var_350], rdx
 * 0000000140AFC261: xor     r10d, edx
 * 0000000140AFC264: mov     edx, 0FFFFFFFFh
 * 0000000140AFC269: and     r10d, 3Fh
 * 0000000140AFC26D: cmovz   r10d, r12d
 * 0000000140AFC271: add     r11d, edx
 * 0000000140AFC274: jnz     short loc_140AFC220
 * 0000000140AFC276: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFC27B: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFC282: jmp     short loc_140AFC289
 * 0000000140AFC284: mov     edx, 0FFFFFFFFh
 * 0000000140AFC289: and     r8d, 7Fh
 * 0000000140AFC28D: cmp     r8d, 8
 * 0000000140AFC291: jb      short loc_140AFC2B0
 * 0000000140AFC293: mov     eax, r8d
 * 0000000140AFC296: shr     rax, 3
 * 0000000140AFC29A: xor     rbx, [r9]
 * 0000000140AFC29D: mov     ecx, r10d
 * 0000000140AFC2A0: rol     rbx, cl
 * 0000000140AFC2A3: add     r9, 8
 * 0000000140AFC2A7: add     r8d, 0FFFFFFF8h
 * 0000000140AFC2AB: sub     rax, r12
 * 0000000140AFC2AE: jnz     short loc_140AFC29A
 * 0000000140AFC2B0: test    r8d, r8d
 * 0000000140AFC2B3: jz      short loc_140AFC2CA
 * 0000000140AFC2B5: movzx   eax, byte ptr [r9]
 * 0000000140AFC2B9: mov     ecx, r10d
 * 0000000140AFC2BC: xor     rbx, rax
 * 0000000140AFC2BF: add     r9, r12
 * 0000000140AFC2C2: rol     rbx, cl
 * 0000000140AFC2C5: add     r8d, edx
 * 0000000140AFC2C8: jnz     short loc_140AFC2B5
 * 0000000140AFC2CA: mov     rax, rbx
 * 0000000140AFC2CD: jmp     short loc_140AFC2D1
 * 0000000140AFC2CF: xor     ebx, eax
 * 0000000140AFC2D1: shr     rax, 1Fh
 * 0000000140AFC2D5: test    rax, rax
 * 0000000140AFC2D8: jnz     short loc_140AFC2CF
 * 0000000140AFC2DA: mov     edx, [r13+14h]
 * 0000000140AFC2DE: btr     ebx, 1Fh
 * 0000000140AFC2E2: cmp     ebx, edx
 * 0000000140AFC2E4: jz      loc_140AFC148
 * 0000000140AFC2EA: mov     ecx, [r13+10h]
 * 0000000140AFC2EE: mov     r8, [r13+8]
 * 0000000140AFC2F2: test    rcx, rcx
 * 0000000140AFC2F5: jz      loc_140AFC3AF
 * 0000000140AFC2FB: mov     eax, [rsi+994h]
 * 0000000140AFC301: mov     r9d, 40h ; '@'
 * 0000000140AFC307: test    r9b, al
 * 0000000140AFC30A: jz      loc_140AFC3AF
 * 0000000140AFC310: mov     r12, cr8
 * 0000000140AFC314: lea     eax, [r9-3Eh]
 * 0000000140AFC318: mov     cr8, rax
 * 0000000140AFC31C: mov     r14, r8
 * 0000000140AFC31F: lea     rax, [rcx-1]
 * 0000000140AFC323: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140AFC32A: add     rax, r8
 * 0000000140AFC32D: or      rax, 0FFFh
 * 0000000140AFC333: mov     [rbp+0A70h+arg_8], rax
 * 0000000140AFC33A: lea     r13, [r14-1]
 * 0000000140AFC33E: movzx   r15d, r12b
 * 0000000140AFC342: mov     rax, [rsi+468h]
 * 0000000140AFC349: xor     edx, edx
 * 0000000140AFC34B: mov     rcx, r14
 * 0000000140AFC34E: call    KeGuardDispatchICall
 * 0000000140AFC353: cmp     eax, 0C000022Dh
 * 0000000140AFC358: jnz     short loc_140AFC37E
 * 0000000140AFC35A: mov     eax, 1
 * 0000000140AFC35F: cmp     r12b, al
 * 0000000140AFC362: ja      short loc_140AFC382
 * 0000000140AFC364: movzx   r15d, r12b
 * 0000000140AFC368: mov     cr8, r15
 * 0000000140AFC36C: mov     al, [r14]
 * 0000000140AFC36F: mov     rax, cr8
 * 0000000140AFC373: mov     eax, 2
 * 0000000140AFC378: mov     cr8, rax
 * 0000000140AFC37C: jmp     short loc_140AFC342
 * 0000000140AFC37E: test    eax, eax
 * 0000000140AFC380: js      short loc_140AFC3A2
 * 0000000140AFC382: mov     r8d, 1000h
 * 0000000140AFC388: add     r14, r8
 * 0000000140AFC38B: add     r13, r8
 * 0000000140AFC38E: cmp     r13, [rbp+0A70h+arg_8]
 * 0000000140AFC395: jnz     short loc_140AFC33E
 * 0000000140AFC397: mov     cr8, r15
 * 0000000140AFC39B: xor     eax, eax
 * 0000000140AFC39D: jmp     loc_140AFC050
 * 0000000140AFC3A2: mov     cr8, r15
 * 0000000140AFC3A6: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140AFC3AB: mov     edx, [r13+14h]
 * 0000000140AFC3AF: xor     eax, eax
 * 0000000140AFC3B1: cmp     [rsi+8F8h], eax
 * 0000000140AFC3B7: jnz     loc_140AFC050
 * 0000000140AFC3BD: mov     ecx, ebx
 * 0000000140AFC3BF: mov     eax, edx
 * 0000000140AFC3C1: xor     rcx, rax
 * 0000000140AFC3C4: mov     rax, [rsi+588h]
 * 0000000140AFC3CB: mov     [rax+18h], rcx
 * 0000000140AFC3CF: mov     rcx, [r13+8]
 * 0000000140AFC3D3: mov     r12d, 1
 * 0000000140AFC3D9: xor     eax, eax
 * 0000000140AFC3DB: cmp     [rsi+8F8h], eax
 * 0000000140AFC3E1: jnz     loc_140AFC14A
 * 0000000140AFC3E7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFC3F1: add     rax, rsi
 * 0000000140AFC3F4: mov     [rsi+900h], rax
 * 0000000140AFC3FB: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFC405: add     rax, r13
 * 0000000140AFC408: mov     [rsi+908h], rax
 * 0000000140AFC40F: movsxd  rax, dword ptr [r13+0]
 * 0000000140AFC413: mov     [rsi+910h], rax
 * 0000000140AFC41A: mov     [rsi+918h], rcx
 * 0000000140AFC421: xor     edx, edx
 * 0000000140AFC423: mov     rcx, rsi
 * 0000000140AFC426: mov     [rsi+8F8h], r12d
 * 0000000140AFC42D: call    $$ba
 * 0000000140AFC432: jmp     loc_140AFC148
 * 0000000140AFC437: cmp     [r13+18h], eax
 * 0000000140AFC43B: jz      short loc_140AFC493
 * 0000000140AFC43D: cmp     [rsi+980h], rax
 * 0000000140AFC444: jz      short loc_140AFC484
 * 0000000140AFC446: mov     ecx, [rsi+994h]
 * 0000000140AFC44C: test    cl, 4
 * 0000000140AFC44F: jnz     short loc_140AFC484
 * 0000000140AFC451: lea     rax, [rsi+824h]
 * 0000000140AFC458: xor     r8d, r8d
 * 0000000140AFC45B: mov     edx, [rax]
 * 0000000140AFC45D: test    edx, edx
 * 0000000140AFC45F: jnz     short loc_140AFC477
 * 0000000140AFC461: lea     eax, ds:0[rcx*8]
 * 0000000140AFC468: xor     eax, ecx
 * 0000000140AFC46A: and     eax, 20h
 * 0000000140AFC46D: xor     eax, ecx
 * 0000000140AFC46F: mov     [rsi+994h], eax
 * 0000000140AFC475: jmp     short loc_140AFC499
 * 0000000140AFC477: test    cl, 20h
 * 0000000140AFC47A: jz      short loc_140AFC499
 * 0000000140AFC47C: mov     r14d, r8d
 * 0000000140AFC47F: jmp     loc_140AFC7A2
 * 0000000140AFC484: mov     r14d, eax
 * 0000000140AFC487: lea     rax, [rsi+824h]
 * 0000000140AFC48E: jmp     loc_140AFC7A2
 * 0000000140AFC493: mov     edx, [rsi+824h]
 * 0000000140AFC499: mov     r14d, edx
 * 0000000140AFC49C: lea     rcx, [r13+30h]
 * 0000000140AFC4A0: mov     edx, [r13+1Ch]
 * 0000000140AFC4A4: lea     rax, [rsi+824h]
 * 0000000140AFC4AB: shl     r14, 4
 * 0000000140AFC4AF: add     r14, rcx
 * 0000000140AFC4B2: shl     rdx, 4
 * 0000000140AFC4B6: add     rdx, rcx
 * 0000000140AFC4B9: mov     [rsp+0B70h+var_B08], rax
 * 0000000140AFC4BE: mov     [rbp+0A70h+arg_8], rdx
 * 0000000140AFC4C5: mov     [rsp+0B70h+var_B18], r14
 * 0000000140AFC4CA: xor     eax, eax
 * 0000000140AFC4CC: cmp     [r14], eax
 * 0000000140AFC4CF: jl      loc_140AFC757
 * 0000000140AFC4D5: mov     rdi, [r14+8]
 * 0000000140AFC4D9: mov     r8d, [r14+4]
 * 0000000140AFC4DD: mov     r9, rdi
 * 0000000140AFC4E0: add     [rsi+828h], r8d
 * 0000000140AFC4E7: mov     rax, rdi
 * 0000000140AFC4EA: mov     r11d, [rsi+814h]
 * 0000000140AFC4F1: mov     r12d, r8d
 * 0000000140AFC4F4: mov     r15, [rsi+818h]
 * 0000000140AFC4FB: lea     rcx, [rdi+r8]
 * 0000000140AFC4FF: cmp     rdi, rcx
 * 0000000140AFC502: jnb     short loc_140AFC515
 * 0000000140AFC504: mov     r10d, 40h ; '@'
 * 0000000140AFC50A: prefetchnta byte ptr [rax]
 * 0000000140AFC50D: add     rax, r10
 * 0000000140AFC510: cmp     rax, rcx
 * 0000000140AFC513: jb      short loc_140AFC50A
 * 0000000140AFC515: mov     r10d, r8d
 * 0000000140AFC518: mov     rbx, r15
 * 0000000140AFC51B: shr     r10d, 7
 * 0000000140AFC51F: test    r10d, r10d
 * 0000000140AFC522: jz      short loc_140AFC59D
 * 0000000140AFC524: mov     esi, 1
 * 0000000140AFC529: mov     r12d, 0FFFFFFFFh
 * 0000000140AFC52F: mov     r14, 7010008004002001h
 * 0000000140AFC539: mov     eax, 8
 * 0000000140AFC53E: xor     rbx, [r9]
 * 0000000140AFC541: mov     ecx, r11d
 * 0000000140AFC544: rol     rbx, cl
 * 0000000140AFC547: xor     rbx, [r9+8]
 * 0000000140AFC54B: add     r9, 10h
 * 0000000140AFC54F: rol     rbx, cl
 * 0000000140AFC552: sub     rax, rsi
 * 0000000140AFC555: jnz     short loc_140AFC53E
 * 0000000140AFC557: mov     rcx, r9
 * 0000000140AFC55A: sub     rcx, rdi
 * 0000000140AFC55D: xor     rcx, r15
 * 0000000140AFC560: mov     rax, rcx
 * 0000000140AFC563: rol     rax, 11h
 * 0000000140AFC567: xor     rcx, rax
 * 0000000140AFC56A: mov     rax, r14
 * 0000000140AFC56D: mul     rcx
 * 0000000140AFC570: xor     eax, edx
 * 0000000140AFC572: mov     [rbp+0A70h+var_348], rdx
 * 0000000140AFC579: xor     r11d, eax
 * 0000000140AFC57C: and     r11d, 3Fh
 * 0000000140AFC580: cmovz   r11d, esi
 * 0000000140AFC584: add     r10d, r12d
 * 0000000140AFC587: jnz     short loc_140AFC539
 * 0000000140AFC589: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFC58E: mov     r12, r8
 * 0000000140AFC591: mov     r14, [rsp+0B70h+var_B18]
 * 0000000140AFC596: mov     rdx, [rbp+0A70h+arg_8]
 * 0000000140AFC59D: and     r8d, 7Fh
 * 0000000140AFC5A1: mov     r10d, 1
 * 0000000140AFC5A7: cmp     r8d, 8
 * 0000000140AFC5AB: jb      short loc_140AFC5CA
 * 0000000140AFC5AD: mov     eax, r8d
 * 0000000140AFC5B0: shr     rax, 3
 * 0000000140AFC5B4: xor     rbx, [r9]
 * 0000000140AFC5B7: mov     ecx, r11d
 * 0000000140AFC5BA: rol     rbx, cl
 * 0000000140AFC5BD: add     r9, 8
 * 0000000140AFC5C1: add     r8d, 0FFFFFFF8h
 * 0000000140AFC5C5: sub     rax, r10
 * 0000000140AFC5C8: jnz     short loc_140AFC5B4
 * 0000000140AFC5CA: test    r8d, r8d
 * 0000000140AFC5CD: jz      short loc_140AFC5EE
 * 0000000140AFC5CF: mov     esi, 0FFFFFFFFh
 * 0000000140AFC5D4: movzx   eax, byte ptr [r9]
 * 0000000140AFC5D8: mov     ecx, r11d
 * 0000000140AFC5DB: xor     rbx, rax
 * 0000000140AFC5DE: add     r9, r10
 * 0000000140AFC5E1: rol     rbx, cl
 * 0000000140AFC5E4: add     r8d, esi
 * 0000000140AFC5E7: jnz     short loc_140AFC5D4
 * 0000000140AFC5E9: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFC5EE: mov     rax, rbx
 * 0000000140AFC5F1: jmp     short loc_140AFC5F5
 * 0000000140AFC5F3: xor     ebx, eax
 * 0000000140AFC5F5: shr     rax, 1Fh
 * 0000000140AFC5F9: test    rax, rax
 * 0000000140AFC5FC: jnz     short loc_140AFC5F3
 * 0000000140AFC5FE: mov     ecx, [r14]
 * 0000000140AFC601: btr     ebx, 1Fh
 * 0000000140AFC605: mov     eax, ecx
 * 0000000140AFC607: btr     eax, 1Fh
 * 0000000140AFC60B: cmp     ebx, eax
 * 0000000140AFC60D: jz      loc_140AFC753
 * 0000000140AFC613: test    r12, r12
 * 0000000140AFC616: jz      loc_140AFC6D3
 * 0000000140AFC61C: mov     eax, [rsi+994h]
 * 0000000140AFC622: mov     edx, 40h ; '@'
 * 0000000140AFC627: test    dl, al
 * 0000000140AFC629: jz      loc_140AFC6D3
 * 0000000140AFC62F: mov     r13, cr8
 * 0000000140AFC633: lea     eax, [rdx-3Eh]
 * 0000000140AFC636: mov     cr8, rax
 * 0000000140AFC63A: mov     r15, rdi
 * 0000000140AFC63D: lea     rax, [r12-1]
 * 0000000140AFC642: and     r15, 0FFFFFFFFFFFFF000h
 * 0000000140AFC649: add     rax, rdi
 * 0000000140AFC64C: or      rax, 0FFFh
 * 0000000140AFC652: mov     [rbp+0A70h+var_AE8], rax
 * 0000000140AFC656: lea     rax, [r15-1]
 * 0000000140AFC65A: mov     [rsp+0B70h+var_B18], rax
 * 0000000140AFC65F: movzx   r12d, r13b
 * 0000000140AFC663: mov     rax, [rsi+468h]
 * 0000000140AFC66A: xor     edx, edx
 * 0000000140AFC66C: mov     rcx, r15
 * 0000000140AFC66F: call    KeGuardDispatchICall
 * 0000000140AFC674: cmp     eax, 0C000022Dh
 * 0000000140AFC679: jnz     short loc_140AFC69F
 * 0000000140AFC67B: mov     eax, 1
 * 0000000140AFC680: cmp     r13b, al
 * 0000000140AFC683: ja      short loc_140AFC6A3
 * 0000000140AFC685: movzx   r12d, r13b
 * 0000000140AFC689: mov     cr8, r12
 * 0000000140AFC68D: mov     al, [r15]
 * 0000000140AFC690: mov     rax, cr8
 * 0000000140AFC694: mov     eax, 2
 * 0000000140AFC699: mov     cr8, rax
 * 0000000140AFC69D: jmp     short loc_140AFC663
 * 0000000140AFC69F: test    eax, eax
 * 0000000140AFC6A1: js      short loc_140AFC6C7
 * 0000000140AFC6A3: mov     rax, [rsp+0B70h+var_B18]
 * 0000000140AFC6A8: mov     ecx, 1000h
 * 0000000140AFC6AD: add     rax, rcx
 * 0000000140AFC6B0: add     r15, rcx
 * 0000000140AFC6B3: mov     [rsp+0B70h+var_B18], rax
 * 0000000140AFC6B8: cmp     rax, [rbp+0A70h+var_AE8]
 * 0000000140AFC6BC: jnz     short loc_140AFC65F
 * 0000000140AFC6BE: mov     cr8, r12
 * 0000000140AFC6C2: jmp     loc_140AFC74C
 * 0000000140AFC6C7: mov     cr8, r12
 * 0000000140AFC6CB: mov     ecx, [r14]
 * 0000000140AFC6CE: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140AFC6D3: mov     eax, ecx
 * 0000000140AFC6D5: xor     ecx, ecx
 * 0000000140AFC6D7: btr     eax, 1Fh
 * 0000000140AFC6DB: cmp     [rsi+8F8h], ecx
 * 0000000140AFC6E1: jnz     short loc_140AFC74C
 * 0000000140AFC6E3: mov     ecx, ebx
 * 0000000140AFC6E5: xor     rcx, rax
 * 0000000140AFC6E8: mov     rax, [rsi+588h]
 * 0000000140AFC6EF: mov     [rax+18h], rcx
 * 0000000140AFC6F3: xor     eax, eax
 * 0000000140AFC6F5: cmp     [rsi+8F8h], eax
 * 0000000140AFC6FB: jnz     short loc_140AFC74C
 * 0000000140AFC6FD: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFC707: xor     edx, edx
 * 0000000140AFC709: add     rax, rsi
 * 0000000140AFC70C: mov     rcx, rsi
 * 0000000140AFC70F: mov     [rsi+900h], rax
 * 0000000140AFC716: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFC720: add     rax, r13
 * 0000000140AFC723: mov     [rsi+908h], rax
 * 0000000140AFC72A: movsxd  rax, dword ptr [r13+0]
 * 0000000140AFC72E: mov     [rsi+910h], rax
 * 0000000140AFC735: mov     eax, 1
 * 0000000140AFC73A: mov     [rsi+918h], rdi
 * 0000000140AFC741: mov     [rsi+8F8h], eax
 * 0000000140AFC747: call    $$ba
 * 0000000140AFC74C: mov     rdx, [rbp+0A70h+arg_8]
 * 0000000140AFC753: mov     r12, [rbp+0A70h+var_AB8]
 * 0000000140AFC757: add     r14, 10h
 * 0000000140AFC75B: mov     [rsp+0B70h+var_B18], r14
 * 0000000140AFC760: cmp     r14, rdx
 * 0000000140AFC763: jnb     short loc_140AFC77D
 * 0000000140AFC765: mov     eax, [r12]
 * 0000000140AFC769: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140AFC76E: cmp     [rsi+828h], eax
 * 0000000140AFC774: jl      loc_140AFC4CA
 * 0000000140AFC77A: cmp     r14, rdx
 * 0000000140AFC77D: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFC784: jnz     short loc_140AFC78D
 * 0000000140AFC786: xor     eax, eax
 * 0000000140AFC788: mov     r14d, eax
 * 0000000140AFC78B: jmp     short loc_140AFC79D
 * 0000000140AFC78D: mov     rax, [rsp+0B70h+var_B20]
 * 0000000140AFC792: add     rax, 30h ; '0'
 * 0000000140AFC796: sub     r14, rax
 * 0000000140AFC799: sar     r14, 4
 * 0000000140AFC79D: mov     rax, [rsp+0B70h+var_B08]
 * 0000000140AFC7A2: mov     [rax], r14d
 * 0000000140AFC7A5: jmp     loc_140AFC39B
 * 0000000140AFC7AA: mov     rbx, [r13+18h]
 * 0000000140AFC7AE: mov     r14, 0B3B74BDEE4453415h
 * 0000000140AFC7B8: mov     rcx, [rsi+6F8h]
 * 0000000140AFC7BF: mov     r15, 0A3A03F5891C8B4E8h
 * 0000000140AFC7C9: mov     rax, [rsi+728h]
 * 0000000140AFC7D0: add     rcx, rbx
 * 0000000140AFC7D3: movzx   edx, word ptr [r13+22h]
 * 0000000140AFC7D8: cmp     [rcx+rax], dx
 * 0000000140AFC7DC: jz      short loc_140AFC82C
 * 0000000140AFC7DE: xor     eax, eax
 * 0000000140AFC7E0: cmp     [rsi+8F8h], eax
 * 0000000140AFC7E6: jnz     short loc_140AFC82C
 * 0000000140AFC7E8: lea     rax, [rsi+r15]
 * 0000000140AFC7EC: xor     edx, edx
 * 0000000140AFC7EE: mov     [rsi+900h], rax
 * 0000000140AFC7F5: mov     rcx, rsi
 * 0000000140AFC7F8: lea     rax, [r14+r13]
 * 0000000140AFC7FC: mov     [rsi+908h], rax
 * 0000000140AFC803: movsxd  rax, dword ptr [r13+0]
 * 0000000140AFC807: mov     [rsi+910h], rax
 * 0000000140AFC80E: mov     [rsi+918h], rbx
 * 0000000140AFC815: mov     [rsi+8F8h], r11d
 * 0000000140AFC81C: call    $$ba
 * 0000000140AFC821: movzx   edx, word ptr [r13+22h]
 * 0000000140AFC826: mov     r11d, 1
 * 0000000140AFC82C: test    [rsi+730h], dx
 * 0000000140AFC833: jnz     short loc_140AFC887
 * 0000000140AFC835: mov     rcx, [rsi+700h]
 * 0000000140AFC83C: add     rcx, rbx
 * 0000000140AFC83F: cmp     [rcx], rcx
 * 0000000140AFC842: jz      short loc_140AFC887
 * 0000000140AFC844: xor     eax, eax
 * 0000000140AFC846: cmp     [rsi+8F8h], eax
 * 0000000140AFC84C: jnz     short loc_140AFC887
 * 0000000140AFC84E: lea     rax, [rsi+r15]
 * 0000000140AFC852: xor     edx, edx
 * 0000000140AFC854: mov     [rsi+900h], rax
 * 0000000140AFC85B: mov     rcx, rsi
 * 0000000140AFC85E: lea     rax, [r14+r13]
 * 0000000140AFC862: mov     [rsi+908h], rax
 * 0000000140AFC869: movsxd  rax, dword ptr [r13+0]
 * 0000000140AFC86D: mov     [rsi+910h], rax
 * 0000000140AFC874: mov     [rsi+918h], rbx
 * 0000000140AFC87B: mov     [rsi+8F8h], r11d
 * 0000000140AFC882: call    $$ba
 * 0000000140AFC887: mov     r14, [r13+8]
 * 0000000140AFC88B: mov     r8d, [r13+10h]
 * 0000000140AFC88F: mov     r9, r14
 * 0000000140AFC892: add     [rsi+828h], r8d
 * 0000000140AFC899: mov     rax, r14
 * 0000000140AFC89C: mov     r10d, [rsi+814h]
 * 0000000140AFC8A3: mov     r15, [rsi+818h]
 * 0000000140AFC8AA: lea     rcx, [r14+r8]
 * 0000000140AFC8AE: cmp     r14, rcx
 * 0000000140AFC8B1: jnb     short loc_140AFC8C3
 * 0000000140AFC8B3: mov     edx, 40h ; '@'
 * 0000000140AFC8B8: prefetchnta byte ptr [rax]
 * 0000000140AFC8BB: add     rax, rdx
 * 0000000140AFC8BE: cmp     rax, rcx
 * 0000000140AFC8C1: jb      short loc_140AFC8B8
 * 0000000140AFC8C3: mov     r11d, r8d
 * 0000000140AFC8C6: mov     rbx, r15
 * 0000000140AFC8C9: shr     r11d, 7
 * 0000000140AFC8CD: mov     edx, 1
 * 0000000140AFC8D2: mov     r12d, 0FFFFFFFFh
 * 0000000140AFC8D8: test    r11d, r11d
 * 0000000140AFC8DB: jz      short loc_140AFC949
 * 0000000140AFC8DD: mov     rdi, 7010008004002001h
 * 0000000140AFC8E7: mov     eax, 8
 * 0000000140AFC8EC: xor     rbx, [r9]
 * 0000000140AFC8EF: mov     ecx, r10d
 * 0000000140AFC8F2: rol     rbx, cl
 * 0000000140AFC8F5: xor     rbx, [r9+8]
 * 0000000140AFC8F9: add     r9, 10h
 * 0000000140AFC8FD: rol     rbx, cl
 * 0000000140AFC900: sub     rax, rdx
 * 0000000140AFC903: jnz     short loc_140AFC8EC
 * 0000000140AFC905: mov     rcx, r9
 * 0000000140AFC908: sub     rcx, r14
 * 0000000140AFC90B: xor     rcx, r15
 * 0000000140AFC90E: mov     rax, rcx
 * 0000000140AFC911: rol     rax, 11h
 * 0000000140AFC915: xor     rcx, rax
 * 0000000140AFC918: mov     rax, rdi
 * 0000000140AFC91B: mul     rcx
 * 0000000140AFC91E: xor     r10d, edx
 * 0000000140AFC921: mov     [rbp+0A70h+var_340], rdx
 * 0000000140AFC928: xor     r10d, eax
 * 0000000140AFC92B: mov     edx, 1
 * 0000000140AFC930: and     r10d, 3Fh
 * 0000000140AFC934: cmovz   r10d, edx
 * 0000000140AFC938: add     r11d, r12d
 * 0000000140AFC93B: jnz     short loc_140AFC8E7
 * 0000000140AFC93D: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFC942: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFC949: and     r8d, 7Fh
 * 0000000140AFC94D: cmp     r8d, 8
 * 0000000140AFC951: jb      short loc_140AFC970
 * 0000000140AFC953: mov     eax, r8d
 * 0000000140AFC956: shr     rax, 3
 * 0000000140AFC95A: xor     rbx, [r9]
 * 0000000140AFC95D: mov     ecx, r10d
 * 0000000140AFC960: rol     rbx, cl
 * 0000000140AFC963: add     r9, 8
 * 0000000140AFC967: add     r8d, 0FFFFFFF8h
 * 0000000140AFC96B: sub     rax, rdx
 * 0000000140AFC96E: jnz     short loc_140AFC95A
 * 0000000140AFC970: test    r8d, r8d
 * 0000000140AFC973: jz      short loc_140AFC98A
 * 0000000140AFC975: movzx   eax, byte ptr [r9]
 * 0000000140AFC979: mov     ecx, r10d
 * 0000000140AFC97C: xor     rbx, rax
 * 0000000140AFC97F: add     r9, rdx
 * 0000000140AFC982: rol     rbx, cl
 * 0000000140AFC985: add     r8d, r12d
 * 0000000140AFC988: jnz     short loc_140AFC975
 * 0000000140AFC98A: mov     rax, rbx
 * 0000000140AFC98D: jmp     short loc_140AFC991
 * 0000000140AFC98F: xor     ebx, eax
 * 0000000140AFC991: shr     rax, 1Fh
 * 0000000140AFC995: test    rax, rax
 * 0000000140AFC998: jnz     short loc_140AFC98F
 * 0000000140AFC99A: btr     ebx, 1Fh
 * 0000000140AFC99E: mov     r12d, eax
 * 0000000140AFC9A1: cmp     ebx, [r13+14h]
 * 0000000140AFC9A5: jz      loc_140AFCA8C
 * 0000000140AFC9AB: cmp     [r13+0], eax
 * 0000000140AFC9AF: jnz     short loc_140AFC9B9
 * 0000000140AFC9B1: cmp     [r13+18h], eax
 * 0000000140AFC9B5: cmovnz  r12d, edx
 * 0000000140AFC9B9: mov     ecx, [r13+10h]
 * 0000000140AFC9BD: mov     rdx, [r13+8]
 * 0000000140AFC9C1: test    rcx, rcx
 * 0000000140AFC9C4: jz      loc_140AFCB7B
 * 0000000140AFC9CA: mov     eax, [rsi+994h]
 * 0000000140AFC9D0: mov     r8d, 40h ; '@'
 * 0000000140AFC9D6: test    r8b, al
 * 0000000140AFC9D9: jz      loc_140AFCB7B
 * 0000000140AFC9DF: mov     r13, cr8
 * 0000000140AFC9E3: lea     eax, [r8-3Eh]
 * 0000000140AFC9E7: mov     cr8, rax
 * 0000000140AFC9EB: mov     r14, rdx
 * 0000000140AFC9EE: lea     rax, [rcx-1]
 * 0000000140AFC9F2: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140AFC9F9: add     rax, rdx
 * 0000000140AFC9FC: or      rax, 0FFFh
 * 0000000140AFCA02: mov     [rsp+0B70h+var_B18], rax
 * 0000000140AFCA07: lea     rax, [r14-1]
 * 0000000140AFCA0B: mov     [rbp+0A70h+arg_8], rax
 * 0000000140AFCA12: movzx   r15d, r13b
 * 0000000140AFCA16: mov     rax, [rsi+468h]
 * 0000000140AFCA1D: xor     edx, edx
 * 0000000140AFCA1F: mov     rcx, r14
 * 0000000140AFCA22: call    KeGuardDispatchICall
 * 0000000140AFCA27: cmp     eax, 0C000022Dh
 * 0000000140AFCA2C: jnz     short loc_140AFCA5B
 * 0000000140AFCA2E: test    r12d, r12d
 * 0000000140AFCA31: jnz     loc_140AFCB72
 * 0000000140AFCA37: lea     eax, [r12+1]
 * 0000000140AFCA3C: cmp     r13b, al
 * 0000000140AFCA3F: ja      short loc_140AFCA63
 * 0000000140AFCA41: movzx   r15d, r13b
 * 0000000140AFCA45: mov     cr8, r15
 * 0000000140AFCA49: mov     al, [r14]
 * 0000000140AFCA4C: mov     rax, cr8
 * 0000000140AFCA50: lea     eax, [r12+2]
 * 0000000140AFCA55: mov     cr8, rax
 * 0000000140AFCA59: jmp     short loc_140AFCA16
 * 0000000140AFCA5B: test    eax, eax
 * 0000000140AFCA5D: js      loc_140AFCB72
 * 0000000140AFCA63: mov     rax, [rbp+0A70h+arg_8]
 * 0000000140AFCA6A: mov     ecx, 1000h
 * 0000000140AFCA6F: add     rax, rcx
 * 0000000140AFCA72: add     r14, rcx
 * 0000000140AFCA75: mov     [rbp+0A70h+arg_8], rax
 * 0000000140AFCA7C: cmp     rax, [rsp+0B70h+var_B18]
 * 0000000140AFCA81: jnz     short loc_140AFCA12
 * 0000000140AFCA83: mov     cr8, r15
 * 0000000140AFCA87: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140AFCA8C: mov     r15, 0B3B74BDEE4453415h
 * 0000000140AFCA96: mov     r12d, 1
 * 0000000140AFCA9C: mov     rbx, 0A3A03F5891C8B4E8h
 * 0000000140AFCAA6: lea     rax, [r13+30h]
 * 0000000140AFCAAA: xor     r9d, r9d
 * 0000000140AFCAAD: mov     [rbp+0A70h+var_7B8], rax
 * 0000000140AFCAB4: lea     rcx, [rbp+0A70h+var_7C0]
 * 0000000140AFCABB: movzx   eax, word ptr [r13+20h]
 * 0000000140AFCAC0: xor     r8d, r8d
 * 0000000140AFCAC3: mov     [rbp+0A70h+var_7C0], ax
 * 0000000140AFCACA: xor     edx, edx
 * 0000000140AFCACC: mov     [rbp+0A70h+var_7BE], ax
 * 0000000140AFCAD3: lea     rax, [rbp+0A70h+var_8B8]
 * 0000000140AFCADA: mov     [rsp+0B70h+var_B38], rax
 * 0000000140AFCADF: xor     eax, eax
 * 0000000140AFCAE1: mov     [rsp+0B70h+var_B40], rax
 * 0000000140AFCAE6: mov     byte ptr [rsp+0B70h+var_B48], al
 * 0000000140AFCAEA: mov     rax, [rsi+500h]
 * 0000000140AFCAF1: mov     [rsp+0B70h+BugCheckParameter4], rax
 * 0000000140AFCAF6: mov     rax, [rsi+1E8h]
 * 0000000140AFCAFD: call    KeGuardDispatchICall
 * 0000000140AFCB02: test    eax, eax
 * 0000000140AFCB04: js      loc_140AFC148
 * 0000000140AFCB0A: mov     rcx, [rbp+0A70h+var_8B8]
 * 0000000140AFCB11: cmp     rcx, [r13+18h]
 * 0000000140AFCB15: jz      short loc_140AFCB61
 * 0000000140AFCB17: xor     eax, eax
 * 0000000140AFCB19: cmp     [rsi+8F8h], eax
 * 0000000140AFCB1F: jnz     short loc_140AFCB61
 * 0000000140AFCB21: lea     rax, [rsi+rbx]
 * 0000000140AFCB25: xor     edx, edx
 * 0000000140AFCB27: mov     [rsi+900h], rax
 * 0000000140AFCB2E: lea     rax, [r15+r13]
 * 0000000140AFCB32: mov     [rsi+908h], rax
 * 0000000140AFCB39: movsxd  rax, dword ptr [r13+0]
 * 0000000140AFCB3D: mov     [rsi+910h], rax
 * 0000000140AFCB44: mov     [rsi+918h], rcx
 * 0000000140AFCB4B: mov     rcx, rsi
 * 0000000140AFCB4E: mov     [rsi+8F8h], r12d
 * 0000000140AFCB55: call    $$ba
 * 0000000140AFCB5A: mov     rcx, [rbp+0A70h+var_8B8]
 * 0000000140AFCB61: mov     rax, [rsi+1E0h]
 * 0000000140AFCB68: call    KeGuardDispatchICall
 * 0000000140AFCB6D: jmp     loc_140AFC148
 * 0000000140AFCB72: mov     cr8, r15
 * 0000000140AFCB76: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140AFCB7B: mov     eax, [r13+14h]
 * 0000000140AFCB7F: xor     ecx, ecx
 * 0000000140AFCB81: mov     r15, 0B3B74BDEE4453415h
 * 0000000140AFCB8B: lea     r12d, [rcx+1]
 * 0000000140AFCB8F: cmp     [rsi+8F8h], ecx
 * 0000000140AFCB95: jnz     loc_140AFCA9C
 * 0000000140AFCB9B: mov     ecx, ebx
 * 0000000140AFCB9D: mov     rbx, 0A3A03F5891C8B4E8h
 * 0000000140AFCBA7: xor     rcx, rax
 * 0000000140AFCBAA: mov     rax, [rsi+588h]
 * 0000000140AFCBB1: mov     [rax+18h], rcx
 * 0000000140AFCBB5: xor     eax, eax
 * 0000000140AFCBB7: mov     rcx, [r13+8]
 * 0000000140AFCBBB: cmp     [rsi+8F8h], eax
 * 0000000140AFCBC1: jnz     loc_140AFCAA6
 * 0000000140AFCBC7: lea     rax, [rsi+rbx]
 * 0000000140AFCBCB: xor     edx, edx
 * 0000000140AFCBCD: mov     [rsi+900h], rax
 * 0000000140AFCBD4: lea     rax, [r15+r13]
 * 0000000140AFCBD8: mov     [rsi+908h], rax
 * 0000000140AFCBDF: movsxd  rax, dword ptr [r13+0]
 * 0000000140AFCBE3: mov     [rsi+910h], rax
 * 0000000140AFCBEA: mov     [rsi+918h], rcx
 * 0000000140AFCBF1: mov     rcx, rsi
 * 0000000140AFCBF4: mov     [rsi+8F8h], r12d
 * 0000000140AFCBFB: call    $$ba
 * 0000000140AFCC00: jmp     loc_140AFCAA6
 * 0000000140AFCC05: mov     rax, [rsi+1A0h]
 * 0000000140AFCC0C: lea     rcx, [rbp+0A70h+var_310]
 * 0000000140AFCC13: mov     edx, [r13+1Ch]
 * 0000000140AFCC17: call    KeGuardDispatchICall
 * 0000000140AFCC1C: mov     rax, [rsi+1D0h]
 * 0000000140AFCC23: lea     rdx, [rbp+0A70h+var_300]
 * 0000000140AFCC2A: lea     rcx, [rbp+0A70h+var_310]
 * 0000000140AFCC31: call    KeGuardDispatchICall
 * 0000000140AFCC36: xor     eax, eax
 * 0000000140AFCC38: mov     ebx, eax
 * 0000000140AFCC3A: lea     r12d, [rax+1]
 * 0000000140AFCC3E: cmp     [r13+18h], eax
 * 0000000140AFCC42: jbe     loc_140AFCD4B
 * 0000000140AFCC48: xor     edi, edi
 * 0000000140AFCC4A: mov     eax, ebx
 * 0000000140AFCC4C: lea     r8, [rax+rax*2]
 * 0000000140AFCC50: mov     r9d, [r13+r8*8+40h]
 * 0000000140AFCC55: test    [rsi+87Bh], r14b
 * 0000000140AFCC5C: jz      short loc_140AFCC81
 * 0000000140AFCC5E: mov     eax, 0C0000082h
 * 0000000140AFCC63: cmp     r9d, eax
 * 0000000140AFCC66: jnz     short loc_140AFCC81
 * 0000000140AFCC68: mov     eax, gs:1A4h
 * 0000000140AFCC70: cmp     eax, [rsi+8F0h]
 * 0000000140AFCC76: jnz     short loc_140AFCC81
 * 0000000140AFCC78: mov     rdx, [rsi+8E8h]
 * 0000000140AFCC7F: jmp     short loc_140AFCC8D
 * 0000000140AFCC81: mov     ecx, r9d
 * 0000000140AFCC84: rdmsr
 * 0000000140AFCC86: shl     rdx, 20h
 * 0000000140AFCC8A: or      rdx, rax
 * 0000000140AFCC8D: mov     rcx, [r13+r8*8+30h]
 * 0000000140AFCC92: mov     r8, [r13+r8*8+38h]
 * 0000000140AFCC97: and     rdx, rcx
 * 0000000140AFCC9A: cmp     rdx, r8
 * 0000000140AFCC9D: jz      short loc_140AFCD19
 * 0000000140AFCC9F: mov     ecx, [r13+1Ch]
 * 0000000140AFCCA3: shl     rcx, 20h
 * 0000000140AFCCA7: or      rcx, r9
 * 0000000140AFCCAA: cmp     [rsi+8F8h], edi
 * 0000000140AFCCB0: jnz     loc_140AFCD37
 * 0000000140AFCCB6: mov     rax, [rsi+588h]
 * 0000000140AFCCBD: xor     r8, rdx
 * 0000000140AFCCC0: mov     [rax+18h], r8
 * 0000000140AFCCC4: cmp     [rsi+8F8h], edi
 * 0000000140AFCCCA: jnz     short loc_140AFCD37
 * 0000000140AFCCCC: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFCCD6: xor     edx, edx
 * 0000000140AFCCD8: add     rax, rsi
 * 0000000140AFCCDB: mov     [rsi+900h], rax
 * 0000000140AFCCE2: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFCCEC: add     rax, r13
 * 0000000140AFCCEF: mov     [rsi+908h], rax
 * 0000000140AFCCF6: movsxd  rax, dword ptr [r13+0]
 * 0000000140AFCCFA: mov     [rsi+910h], rax
 * 0000000140AFCD01: mov     [rsi+918h], rcx
 * 0000000140AFCD08: mov     rcx, rsi
 * 0000000140AFCD0B: mov     [rsi+8F8h], r12d
 * 0000000140AFCD12: call    $$ba
 * 0000000140AFCD17: jmp     short loc_140AFCD37
 * 0000000140AFCD19: test    dword ptr [rsi+994h], 200h
 * 0000000140AFCD23: jz      short loc_140AFCD37
 * 0000000140AFCD25: cmp     rcx, 0FFFFFFFFFFFFFFFFh
 * 0000000140AFCD29: jnz     short loc_140AFCD37
 * 0000000140AFCD2B: mov     rax, rdx
 * 0000000140AFCD2E: mov     ecx, r9d
 * 0000000140AFCD31: shr     rdx, 20h
 * 0000000140AFCD35: wrmsr
 * 0000000140AFCD37: add     ebx, r12d
 * 0000000140AFCD3A: cmp     ebx, [r13+18h]
 * 0000000140AFCD3E: jb      loc_140AFCC4A
 * 0000000140AFCD44: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFCD4B: mov     rax, [rsi+198h]
 * 0000000140AFCD52: lea     rcx, [rbp+0A70h+var_300]
 * 0000000140AFCD59: call    KeGuardDispatchICall
 * 0000000140AFCD5E: mov     eax, [r13+18h]
 * 0000000140AFCD62: shl     eax, 0Fh
 * 0000000140AFCD65: add     [rsi+828h], eax
 * 0000000140AFCD6B: jmp     loc_140AFC148
 * 0000000140AFCD70: mov     ecx, [rsi+830h]
 * 0000000140AFCD76: mov     r12d, 1
 * 0000000140AFCD7C: test    r12b, cl
 * 0000000140AFCD7F: jz      loc_140AFC14A
 * 0000000140AFCD85: bt      dword ptr [rsi+990h], 1Eh
 * 0000000140AFCD8D: jb      short loc_140AFCDA5
 * 0000000140AFCD8F: mov     r14d, eax
 * 0000000140AFCD92: and     ecx, 3
 * 0000000140AFCD95: cmp     cl, 3
 * 0000000140AFCD98: setz    r14b
 * 0000000140AFCD9C: mov     dword ptr [rbp+0A70h+arg_8], r14d
 * 0000000140AFCDA3: jmp     short loc_140AFCDF9
 * 0000000140AFCDA5: rdtsc
 * 0000000140AFCDA7: shl     rdx, 20h
 * 0000000140AFCDAB: or      rax, rdx
 * 0000000140AFCDAE: mov     rcx, rax
 * 0000000140AFCDB1: ror     rax, 3
 * 0000000140AFCDB5: xor     rcx, rax
 * 0000000140AFCDB8: mov     rax, 7010008004002001h
 * 0000000140AFCDC2: mul     rcx
 * 0000000140AFCDC5: mov     rcx, rdx
 * 0000000140AFCDC8: mov     [rbp+0A70h+var_338], rdx
 * 0000000140AFCDCF: xor     rcx, rax
 * 0000000140AFCDD2: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140AFCDDC: mul     rcx
 * 0000000140AFCDDF: shr     rdx, 1
 * 0000000140AFCDE2: lea     rax, [rdx+rdx*2]
 * 0000000140AFCDE6: cmp     rcx, rax
 * 0000000140AFCDE9: mov     eax, 0
 * 0000000140AFCDEE: setz    al
 * 0000000140AFCDF1: mov     dword ptr [rbp+0A70h+arg_8], eax
 * 0000000140AFCDF7: xor     eax, eax
 * 0000000140AFCDF9: mov     rbx, [rsi+540h]
 * 0000000140AFCE00: mov     r15d, eax
 * 0000000140AFCE03: mov     dword ptr [rbp+0A70h+var_AD8], eax
 * 0000000140AFCE06: mov     rax, [rsi+178h]
 * 0000000140AFCE0D: call    KeGuardDispatchICall
 * 0000000140AFCE12: bt      dword ptr [rsi+990h], 1Eh
 * 0000000140AFCE1A: jb      short loc_140AFCE2F
 * 0000000140AFCE1C: mov     ecx, [rsi+950h]
 * 0000000140AFCE22: cmp     ecx, 7
 * 0000000140AFCE25: jnb     short loc_140AFCE2F
 * 0000000140AFCE27: mov     r14d, r12d
 * 0000000140AFCE2A: shl     r14b, cl
 * 0000000140AFCE2D: jmp     short loc_140AFCE47
 * 0000000140AFCE2F: mov     rax, [rsi+128h]
 * 0000000140AFCE36: xor     edx, edx
 * 0000000140AFCE38: mov     rcx, [rsi+0A00h]
 * 0000000140AFCE3F: call    KeGuardDispatchICall
 * 0000000140AFCE44: mov     r14b, 80h
 * 0000000140AFCE47: mov     rax, [rsi+138h]
 * 0000000140AFCE4E: xor     edx, edx
 * 0000000140AFCE50: mov     rcx, rbx
 * 0000000140AFCE53: call    KeGuardDispatchICall
 * 0000000140AFCE58: mov     r8, [rsi+518h]
 * 0000000140AFCE5F: mov     rdx, [r8]
 * 0000000140AFCE62: cmp     rdx, r8
 * 0000000140AFCE65: jz      short loc_140AFCE8C
 * 0000000140AFCE67: mov     rax, [rsi+6C0h]
 * 0000000140AFCE6E: mov     rcx, rdx
 * 0000000140AFCE71: sub     rcx, [rsi+6D8h]
 * 0000000140AFCE78: lock or [rcx+rax], r14b
 * 0000000140AFCE7D: mov     rdx, [rdx]
 * 0000000140AFCE80: add     r15d, r12d
 * 0000000140AFCE83: cmp     rdx, r8
 * 0000000140AFCE86: jnz     short loc_140AFCE67
 * 0000000140AFCE88: mov     dword ptr [rbp+0A70h+var_AD8], r15d
 * 0000000140AFCE8C: mov     rax, [rsi+548h]
 * 0000000140AFCE93: mov     r15d, 4
 * 0000000140AFCE99: mov     edi, dword ptr [rbp+0A70h+arg_8]
 * 0000000140AFCE9F: mov     r13, [rax]
 * 0000000140AFCEA2: mov     rax, [rsi+738h]
 * 0000000140AFCEA9: mov     ebx, [rax+r13]
 * 0000000140AFCEAD: mov     [rsp+0B70h+var_B18], rbx
 * 0000000140AFCEB2: mov     rax, [rsi+100h]
 * 0000000140AFCEB9: mov     rdx, r15
 * 0000000140AFCEBC: mov     rcx, r13
 * 0000000140AFCEBF: call    KeGuardDispatchICall
 * 0000000140AFCEC4: mov     r12, rax
 * 0000000140AFCEC7: test    rax, rax
 * 0000000140AFCECA: jz      loc_140AFD040
 * 0000000140AFCED0: mov     rax, [rsi+108h]
 * 0000000140AFCED7: mov     rcx, r12
 * 0000000140AFCEDA: call    KeGuardDispatchICall
 * 0000000140AFCEDF: mov     rbx, rax
 * 0000000140AFCEE2: mov     al, [rax]
 * 0000000140AFCEE4: and     al, 7Fh
 * 0000000140AFCEE6: cmp     al, 3
 * 0000000140AFCEE8: jnz     loc_140AFCF82
 * 0000000140AFCEEE: mov     r8, [rsi+6C0h]
 * 0000000140AFCEF5: mov     rdx, r8
 * 0000000140AFCEF8: test    [rbx+r8], r14b
 * 0000000140AFCEFC: jnz     short loc_140AFCF74
 * 0000000140AFCEFE: mov     rax, [rsi+6C8h]
 * 0000000140AFCF05: mov     ecx, [rbx+rax]
 * 0000000140AFCF08: test    [rsi+6E0h], ecx
 * 0000000140AFCF0E: jz      short loc_140AFCF74
 * 0000000140AFCF10: xor     eax, eax
 * 0000000140AFCF12: cmp     [rsi+8F8h], eax
 * 0000000140AFCF18: jnz     short loc_140AFCF74
 * 0000000140AFCF1A: mov     rcx, [rsp+0B70h+var_B20]
 * 0000000140AFCF1F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFCF29: add     rax, rsi
 * 0000000140AFCF2C: xor     edx, edx
 * 0000000140AFCF2E: mov     [rsi+900h], rax
 * 0000000140AFCF35: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFCF3F: add     rax, rcx
 * 0000000140AFCF42: mov     [rsi+908h], rax
 * 0000000140AFCF49: movsxd  rax, dword ptr [rcx]
 * 0000000140AFCF4C: mov     rcx, rsi
 * 0000000140AFCF4F: mov     [rsi+910h], rax
 * 0000000140AFCF56: mov     eax, 1
 * 0000000140AFCF5B: mov     [rsi+918h], rbx
 * 0000000140AFCF62: mov     [rsi+8F8h], eax
 * 0000000140AFCF68: call    $$ba
 * 0000000140AFCF6D: mov     rdx, [rsi+6C0h]
 * 0000000140AFCF74: mov     al, r14b
 * 0000000140AFCF77: not     al
 * 0000000140AFCF79: lock and [rbx+rdx], al
 * 0000000140AFCF7D: jmp     loc_140AFD029
 * 0000000140AFCF82: cmp     al, 6
 * 0000000140AFCF84: jnz     short loc_140AFCFC8
 * 0000000140AFCF86: test    edi, edi
 * 0000000140AFCF88: jz      loc_140AFD029
 * 0000000140AFCF8E: mov     rcx, [rsi+688h]
 * 0000000140AFCF95: mov     rax, [rbx+rcx+20h]
 * 0000000140AFCF9A: cmp     rax, [rsi+320h]
 * 0000000140AFCFA1: jz      short loc_140AFCFAC
 * 0000000140AFCFA3: cmp     rax, [rsi+328h]
 * 0000000140AFCFAA: jnz     short loc_140AFCFCC
 * 0000000140AFCFAC: mov     rax, [rsi+330h]
 * 0000000140AFCFB3: cmp     [rbx+rcx+30h], rax
 * 0000000140AFCFB8: jnz     short loc_140AFCFCC
 * 0000000140AFCFBA: mov     rax, [rsi+338h]
 * 0000000140AFCFC1: cmp     [rbx+rcx+28h], rax
 * 0000000140AFCFC6: jmp     short loc_140AFCFCA
 * 0000000140AFCFC8: test    al, al
 * 0000000140AFCFCA: jz      short loc_140AFD029
 * 0000000140AFCFCC: xor     eax, eax
 * 0000000140AFCFCE: cmp     [rsi+8F8h], eax
 * 0000000140AFCFD4: jnz     short loc_140AFD029
 * 0000000140AFCFD6: mov     rcx, [rsp+0B70h+var_B20]
 * 0000000140AFCFDB: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFCFE5: add     rax, rsi
 * 0000000140AFCFE8: xor     edx, edx
 * 0000000140AFCFEA: mov     [rsi+900h], rax
 * 0000000140AFCFF1: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFCFFB: add     rax, rcx
 * 0000000140AFCFFE: mov     [rsi+908h], rax
 * 0000000140AFD005: movsxd  rax, dword ptr [rcx]
 * 0000000140AFD008: mov     rcx, rsi
 * 0000000140AFD00B: mov     [rsi+910h], rax
 * 0000000140AFD012: mov     eax, 1
 * 0000000140AFD017: mov     [rsi+918h], rbx
 * 0000000140AFD01E: mov     [rsi+8F8h], eax
 * 0000000140AFD024: call    $$ba
 * 0000000140AFD029: mov     rax, [rsi+120h]
 * 0000000140AFD030: mov     rdx, r12
 * 0000000140AFD033: mov     rcx, r13
 * 0000000140AFD036: call    KeGuardDispatchICall
 * 0000000140AFD03B: mov     rbx, [rsp+0B70h+var_B18]
 * 0000000140AFD040: add     r15, 4
 * 0000000140AFD044: cmp     r15, rbx
 * 0000000140AFD047: jb      loc_140AFCEB2
 * 0000000140AFD04D: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFD054: cmp     r14b, 80h
 * 0000000140AFD058: jnz     short loc_140AFD06F
 * 0000000140AFD05A: mov     rax, [rsi+130h]
 * 0000000140AFD061: xor     edx, edx
 * 0000000140AFD063: mov     rcx, [rsi+0A00h]
 * 0000000140AFD06A: call    KeGuardDispatchICall
 * 0000000140AFD06F: mov     rcx, [rsi+540h]
 * 0000000140AFD076: xor     edx, edx
 * 0000000140AFD078: mov     rax, [rsi+140h]
 * 0000000140AFD07F: call    KeGuardDispatchICall
 * 0000000140AFD084: mov     rax, [rsi+180h]
 * 0000000140AFD08B: call    KeGuardDispatchICall
 * 0000000140AFD090: mov     eax, dword ptr [rbp+0A70h+var_AD8]
 * 0000000140AFD093: shr     rbx, 2
 * 0000000140AFD097: add     eax, ebx
 * 0000000140AFD099: shl     eax, 8
 * 0000000140AFD09C: add     [rsi+828h], eax
 * 0000000140AFD0A2: jmp     loc_140AFC39B
 * 0000000140AFD0A7: mov     eax, [rsi+830h]
 * 0000000140AFD0AD: mov     r12d, 1
 * 0000000140AFD0B3: test    r12b, al
 * 0000000140AFD0B6: jnz     loc_140AFC148
 * 0000000140AFD0BC: mov     rbx, [rsi+540h]
 * 0000000140AFD0C3: xor     eax, eax
 * 0000000140AFD0C5: mov     r13d, eax
 * 0000000140AFD0C8: mov     dword ptr [rbp+0A70h+var_AD8], eax
 * 0000000140AFD0CB: mov     rax, [rsi+178h]
 * 0000000140AFD0D2: call    KeGuardDispatchICall
 * 0000000140AFD0D7: test    dword ptr [rsi+990h], 40000000h
 * 0000000140AFD0E1: jnz     short loc_140AFD0F6
 * 0000000140AFD0E3: mov     ecx, [rsi+950h]
 * 0000000140AFD0E9: cmp     ecx, 7
 * 0000000140AFD0EC: jnb     short loc_140AFD0F6
 * 0000000140AFD0EE: mov     r14d, r12d
 * 0000000140AFD0F1: shl     r14b, cl
 * 0000000140AFD0F4: jmp     short loc_140AFD10E
 * 0000000140AFD0F6: mov     rax, [rsi+128h]
 * 0000000140AFD0FD: xor     edx, edx
 * 0000000140AFD0FF: mov     rcx, [rsi+0A00h]
 * 0000000140AFD106: call    KeGuardDispatchICall
 * 0000000140AFD10B: mov     r14b, 80h
 * 0000000140AFD10E: mov     rax, [rsi+138h]
 * 0000000140AFD115: xor     edx, edx
 * 0000000140AFD117: mov     rcx, rbx
 * 0000000140AFD11A: mov     dword ptr [rbp+0A70h+arg_8], r14d
 * 0000000140AFD121: call    KeGuardDispatchICall
 * 0000000140AFD126: mov     r12, [rsi+518h]
 * 0000000140AFD12D: mov     r15, [r12]
 * 0000000140AFD131: cmp     r15, r12
 * 0000000140AFD134: jz      loc_140AFD1F2
 * 0000000140AFD13A: mov     rdi, [rsp+0B70h+var_B20]
 * 0000000140AFD13F: mov     rbx, r15
 * 0000000140AFD142: sub     rbx, [rsi+6D8h]
 * 0000000140AFD149: cmp     r14b, 80h
 * 0000000140AFD14D: jz      short loc_140AFD1CC
 * 0000000140AFD14F: mov     rax, [rsi+6C0h]
 * 0000000140AFD156: test    [rbx+rax], r14b
 * 0000000140AFD15A: jz      short loc_140AFD1CC
 * 0000000140AFD15C: mov     rax, [rsi+6C8h]
 * 0000000140AFD163: mov     ecx, [rbx+rax]
 * 0000000140AFD166: test    [rsi+6E0h], ecx
 * 0000000140AFD16C: jz      short loc_140AFD1CC
 * 0000000140AFD16E: xor     eax, eax
 * 0000000140AFD170: cmp     [rsi+8F8h], eax
 * 0000000140AFD176: jnz     short loc_140AFD1CC
 * 0000000140AFD178: mov     ecx, 1
 * 0000000140AFD17D: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFD187: add     rax, rsi
 * 0000000140AFD18A: xor     edx, edx
 * 0000000140AFD18C: mov     [rsi+900h], rax
 * 0000000140AFD193: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFD19D: add     rax, rdi
 * 0000000140AFD1A0: mov     [rsi+908h], rax
 * 0000000140AFD1A7: movsxd  rax, dword ptr [rdi]
 * 0000000140AFD1AA: mov     [rsi+910h], rax
 * 0000000140AFD1B1: mov     rax, rbx
 * 0000000140AFD1B4: or      rax, rcx
 * 0000000140AFD1B7: mov     [rsi+918h], rax
 * 0000000140AFD1BE: mov     [rsi+8F8h], ecx
 * 0000000140AFD1C4: mov     rcx, rsi
 * 0000000140AFD1C7: call    $$ba
 * 0000000140AFD1CC: mov     rax, [rsi+6C0h]
 * 0000000140AFD1D3: lock or [rbx+rax], r14b
 * 0000000140AFD1D8: mov     r15, [r15]
 * 0000000140AFD1DB: inc     r13d
 * 0000000140AFD1DE: cmp     r15, r12
 * 0000000140AFD1E1: jnz     loc_140AFD13F
 * 0000000140AFD1E7: mov     dword ptr [rbp+0A70h+var_AD8], r13d
 * 0000000140AFD1EB: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFD1F2: mov     rcx, [rsi+4F8h]
 * 0000000140AFD1F9: mov     rax, cr8
 * 0000000140AFD1FD: mov     [rsp+0B70h+var_B18], rax
 * 0000000140AFD202: mov     eax, 0Ch
 * 0000000140AFD207: mov     cr8, rax
 * 0000000140AFD20B: mov     rax, [rsi+148h]
 * 0000000140AFD212: lea     rdx, [rbp+0A70h+var_170]
 * 0000000140AFD219: call    KeGuardDispatchICall
 * 0000000140AFD21E: mov     r13, [rsi+4F0h]
 * 0000000140AFD225: mov     r15, [r13+0]
 * 0000000140AFD229: cmp     r15, r13
 * 0000000140AFD22C: jz      loc_140AFD2E0
 * 0000000140AFD232: mov     rdi, [rsp+0B70h+var_B20]
 * 0000000140AFD237: mov     r12b, r14b
 * 0000000140AFD23A: movzx   edx, r14b
 * 0000000140AFD23E: not     r12b
 * 0000000140AFD241: mov     dword ptr [rbp+0A70h+var_AC8], edx
 * 0000000140AFD244: xor     r14d, r14d
 * 0000000140AFD247: mov     rcx, [rsi+6C0h]
 * 0000000140AFD24E: mov     rbx, r15
 * 0000000140AFD251: sub     rbx, [rsi+6B8h]
 * 0000000140AFD258: movsx   eax, byte ptr [rbx+rcx]
 * 0000000140AFD25C: test    edx, eax
 * 0000000140AFD25E: jnz     short loc_140AFD2C1
 * 0000000140AFD260: cmp     [rsi+8F8h], r14d
 * 0000000140AFD267: jnz     short loc_140AFD2C1
 * 0000000140AFD269: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFD273: xor     edx, edx
 * 0000000140AFD275: add     rax, rsi
 * 0000000140AFD278: mov     rcx, rsi
 * 0000000140AFD27B: mov     [rsi+900h], rax
 * 0000000140AFD282: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFD28C: add     rax, rdi
 * 0000000140AFD28F: mov     [rsi+908h], rax
 * 0000000140AFD296: movsxd  rax, dword ptr [rdi]
 * 0000000140AFD299: mov     [rsi+910h], rax
 * 0000000140AFD2A0: mov     eax, 1
 * 0000000140AFD2A5: mov     [rsi+918h], rbx
 * 0000000140AFD2AC: mov     [rsi+8F8h], eax
 * 0000000140AFD2B2: call    $$ba
 * 0000000140AFD2B7: mov     rcx, [rsi+6C0h]
 * 0000000140AFD2BE: mov     edx, dword ptr [rbp+0A70h+var_AC8]
 * 0000000140AFD2C1: lock and [rbx+rcx], r12b
 * 0000000140AFD2C6: mov     r15, [r15]
 * 0000000140AFD2C9: cmp     r15, r13
 * 0000000140AFD2CC: jnz     loc_140AFD247
 * 0000000140AFD2D2: mov     r14d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140AFD2D9: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFD2E0: mov     rax, [rsi+188h]
 * 0000000140AFD2E7: lea     rcx, [rbp+0A70h+var_170]
 * 0000000140AFD2EE: call    KeGuardDispatchICall
 * 0000000140AFD2F3: movzx   eax, byte ptr [rsp+0B70h+var_B18]
 * 0000000140AFD2F8: mov     cr8, rax
 * 0000000140AFD2FC: cmp     r14b, 80h
 * 0000000140AFD300: jnz     short loc_140AFD317
 * 0000000140AFD302: mov     rax, [rsi+130h]
 * 0000000140AFD309: xor     edx, edx
 * 0000000140AFD30B: mov     rcx, [rsi+0A00h]
 * 0000000140AFD312: call    KeGuardDispatchICall
 * 0000000140AFD317: mov     rcx, [rsi+540h]
 * 0000000140AFD31E: xor     edx, edx
 * 0000000140AFD320: mov     rax, [rsi+140h]
 * 0000000140AFD327: call    KeGuardDispatchICall
 * 0000000140AFD32C: mov     rax, [rsi+180h]
 * 0000000140AFD333: call    KeGuardDispatchICall
 * 0000000140AFD338: mov     eax, dword ptr [rbp+0A70h+var_AD8]
 * 0000000140AFD33B: jmp     loc_140AFD099
 * 0000000140AFD340: mov     eax, edx
 * 0000000140AFD342: mov     ecx, edx
 * 0000000140AFD344: shr     eax, 3
 * 0000000140AFD347: xor     eax, edx
 * 0000000140AFD349: test    al, 4
 * 0000000140AFD34B: jnz     loc_140AFC1BE
 * 0000000140AFD351: test    cl, 4
 * 0000000140AFD354: jz      loc_140B06468
 * 0000000140AFD35A: mov     r15, [r13+20h]
 * 0000000140AFD35E: mov     eax, [r13+28h]
 * 0000000140AFD362: test    r15, r15
 * 0000000140AFD365: jz      short loc_140AFD376
 * 0000000140AFD367: sub     eax, r8d
 * 0000000140AFD36A: lea     ecx, [r8+r15]
 * 0000000140AFD36E: mov     ebx, eax
 * 0000000140AFD370: lea     r14, [r15+r8]
 * 0000000140AFD374: jmp     short loc_140AFD382
 * 0000000140AFD376: mov     ecx, [r13+8]
 * 0000000140AFD37A: mov     ebx, [r13+10h]
 * 0000000140AFD37E: mov     r14, [r13+8]
 * 0000000140AFD382: add     rbx, 0FFFh
 * 0000000140AFD389: and     ecx, 0FFFh
 * 0000000140AFD38F: add     rbx, rcx
 * 0000000140AFD392: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140AFD399: shr     rbx, 0Ch
 * 0000000140AFD39D: xor     eax, eax
 * 0000000140AFD39F: test    rbx, rbx
 * 0000000140AFD3A2: jz      loc_140AFD457
 * 0000000140AFD3A8: mov     rax, [rsi+2B0h]
 * 0000000140AFD3AF: mov     rcx, r14
 * 0000000140AFD3B2: sub     rbx, r11
 * 0000000140AFD3B5: call    KeGuardDispatchICall
 * 0000000140AFD3BA: test    al, al
 * 0000000140AFD3BC: jz      short loc_140AFD417
 * 0000000140AFD3BE: xor     eax, eax
 * 0000000140AFD3C0: cmp     [rsi+8F8h], eax
 * 0000000140AFD3C6: jnz     short loc_140AFD417
 * 0000000140AFD3C8: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFD3D2: xor     edx, edx
 * 0000000140AFD3D4: add     rax, rsi
 * 0000000140AFD3D7: mov     rcx, rsi
 * 0000000140AFD3DA: mov     [rsi+900h], rax
 * 0000000140AFD3E1: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFD3EB: add     rax, r13
 * 0000000140AFD3EE: mov     [rsi+908h], rax
 * 0000000140AFD3F5: movsxd  rax, dword ptr [r13+0]
 * 0000000140AFD3F9: mov     [rsi+910h], rax
 * 0000000140AFD400: mov     eax, 1
 * 0000000140AFD405: mov     [rsi+918h], r14
 * 0000000140AFD40C: mov     [rsi+8F8h], eax
 * 0000000140AFD412: call    $$ba
 * 0000000140AFD417: mov     eax, [rsi+828h]
 * 0000000140AFD41D: mov     r8d, 1000h
 * 0000000140AFD423: add     eax, 100h
 * 0000000140AFD428: add     r14, r8
 * 0000000140AFD42B: mov     [rsi+828h], eax
 * 0000000140AFD431: test    r15, r15
 * 0000000140AFD434: jz      short loc_140AFD443
 * 0000000140AFD436: add     [rsi+824h], r8d
 * 0000000140AFD43D: cmp     eax, [r12]
 * 0000000140AFD441: jge     short loc_140AFD453
 * 0000000140AFD443: xor     eax, eax
 * 0000000140AFD445: test    rbx, rbx
 * 0000000140AFD448: jz      short loc_140AFD457
 * 0000000140AFD44A: lea     r11d, [rax+1]
 * 0000000140AFD44E: jmp     loc_140AFD3A8
 * 0000000140AFD453: xor     eax, eax
 * 0000000140AFD455: jmp     short loc_140AFD45C
 * 0000000140AFD457: test    r15, r15
 * 0000000140AFD45A: jz      short loc_140AFD467
 * 0000000140AFD45C: test    rbx, rbx
 * 0000000140AFD45F: jnz     short loc_140AFD467
 * 0000000140AFD461: mov     [rsi+824h], eax
 * 0000000140AFD467: cmp     [rsi+824h], eax
 * 0000000140AFD46D: jnz     loc_140AFC39B
 * 0000000140AFD473: mov     rcx, [rsi+538h]
 * 0000000140AFD47A: mov     r15, cr8
 * 0000000140AFD47E: mov     eax, 0Fh
 * 0000000140AFD483: mov     cr8, rax
 * 0000000140AFD487: mov     rax, [rsi+150h]
 * 0000000140AFD48E: call    KeGuardDispatchICall
 * 0000000140AFD493: mov     rax, [rsi+618h]
 * 0000000140AFD49A: mov     r14, [rsp+0B70h+var_B20]
 * 0000000140AFD49F: mov     rcx, [rax]
 * 0000000140AFD4A2: mov     eax, [rcx]
 * 0000000140AFD4A4: lea     rbx, [rcx+10h]
 * 0000000140AFD4A8: mov     r12b, [rcx+0Ch]
 * 0000000140AFD4AC: lea     rcx, [rax+rax*2]
 * 0000000140AFD4B0: lea     r13, [rbx+rcx*8]
 * 0000000140AFD4B4: mov     r8d, 18h
 * 0000000140AFD4BA: lea     r9, [r14+18h]
 * 0000000140AFD4BE: mov     r10, rbx
 * 0000000140AFD4C1: mov     rcx, [r10]
 * 0000000140AFD4C4: add     r10, 8
 * 0000000140AFD4C8: mov     rax, [r9]
 * 0000000140AFD4CB: add     r9, 8
 * 0000000140AFD4CF: cmp     rcx, rax
 * 0000000140AFD4D2: jnz     short loc_140AFD508
 * 0000000140AFD4D4: add     r8d, 0FFFFFFF8h
 * 0000000140AFD4D8: cmp     r8d, 8
 * 0000000140AFD4DC: jnb     short loc_140AFD4C1
 * 0000000140AFD4DE: test    r8d, r8d
 * 0000000140AFD4E1: jz      short loc_140AFD511
 * 0000000140AFD4E3: mov     r11d, 1
 * 0000000140AFD4E9: movzx   edx, byte ptr [r10]
 * 0000000140AFD4ED: add     r10, r11
 * 0000000140AFD4F0: movzx   eax, byte ptr [r9]
 * 0000000140AFD4F4: add     r9, r11
 * 0000000140AFD4F7: cmp     rdx, rax
 * 0000000140AFD4FA: jnz     short loc_140AFD508
 * 0000000140AFD4FC: mov     eax, 0FFFFFFFFh
 * 0000000140AFD501: add     r8d, eax
 * 0000000140AFD504: jz      short loc_140AFD511
 * 0000000140AFD506: jmp     short loc_140AFD4E9
 * 0000000140AFD508: add     rbx, 18h
 * 0000000140AFD50C: cmp     rbx, r13
 * 0000000140AFD50F: jb      short loc_140AFD4B4
 * 0000000140AFD511: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFD516: mov     rcx, [rsi+538h]
 * 0000000140AFD51D: mov     rax, [rsi+190h]
 * 0000000140AFD524: call    KeGuardDispatchICall
 * 0000000140AFD529: movzx   eax, r15b
 * 0000000140AFD52D: mov     cr8, rax
 * 0000000140AFD531: xor     eax, eax
 * 0000000140AFD533: test    r12b, r12b
 * 0000000140AFD536: lea     r12d, [rax+1]
 * 0000000140AFD53A: jz      short loc_140AFD5B0
 * 0000000140AFD53C: mov     eax, [rsi+994h]
 * 0000000140AFD542: lea     ecx, [r12+0Fh]
 * 0000000140AFD547: test    cl, al
 * 0000000140AFD549: jz      short loc_140AFD5A4
 * 0000000140AFD54B: xor     eax, eax
 * 0000000140AFD54D: cmp     [rsi+8F8h], eax
 * 0000000140AFD553: jnz     short loc_140AFD5A4
 * 0000000140AFD555: mov     rcx, [rsp+0B70h+var_B20]
 * 0000000140AFD55A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFD564: add     rax, rsi
 * 0000000140AFD567: xor     edx, edx
 * 0000000140AFD569: mov     [rsi+900h], rax
 * 0000000140AFD570: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFD57A: add     rax, rcx
 * 0000000140AFD57D: mov     [rsi+908h], rax
 * 0000000140AFD584: movsxd  rax, dword ptr [rcx]
 * 0000000140AFD587: mov     rcx, rsi
 * 0000000140AFD58A: mov     [rsi+910h], rax
 * 0000000140AFD591: mov     [rsi+918h], r12
 * 0000000140AFD598: mov     [rsi+8F8h], r12d
 * 0000000140AFD59F: call    $$ba
 * 0000000140AFD5A4: xor     eax, eax
 * 0000000140AFD5A6: cmp     [r14+18h], r12
 * 0000000140AFD5AA: jz      loc_140AFC14A
 * 0000000140AFD5B0: cmp     rbx, r13
 * 0000000140AFD5B3: jnz     loc_140AFC148
 * 0000000140AFD5B9: cmp     [rsi+8F8h], eax
 * 0000000140AFD5BF: jnz     loc_140AFC148
 * 0000000140AFD5C5: mov     rcx, [rsp+0B70h+var_B20]
 * 0000000140AFD5CA: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFD5D4: add     rax, rsi
 * 0000000140AFD5D7: mov     [rsi+900h], rax
 * 0000000140AFD5DE: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFD5E8: add     rax, rcx
 * 0000000140AFD5EB: mov     [rsi+908h], rax
 * 0000000140AFD5F2: movsxd  rax, dword ptr [rcx]
 * 0000000140AFD5F5: mov     [rsi+910h], rax
 * 0000000140AFD5FC: mov     [rsi+918h], rbx
 * 0000000140AFD603: jmp     loc_140AFC421
 * 0000000140AFD608: mov     r14, [r13+8]
 * 0000000140AFD60C: mov     r8d, [r13+10h]
 * 0000000140AFD610: mov     r9, r14
 * 0000000140AFD613: add     [rsi+828h], r8d
 * 0000000140AFD61A: mov     rax, r14
 * 0000000140AFD61D: mov     r10d, [rsi+814h]
 * 0000000140AFD624: mov     r15, [rsi+818h]
 * 0000000140AFD62B: lea     rcx, [r14+r8]
 * 0000000140AFD62F: cmp     r14, rcx
 * 0000000140AFD632: jnb     short loc_140AFD644
 * 0000000140AFD634: mov     edx, 40h ; '@'
 * 0000000140AFD639: prefetchnta byte ptr [rax]
 * 0000000140AFD63C: add     rax, rdx
 * 0000000140AFD63F: cmp     rax, rcx
 * 0000000140AFD642: jb      short loc_140AFD639
 * 0000000140AFD644: mov     r11d, r8d
 * 0000000140AFD647: mov     rbx, r15
 * 0000000140AFD64A: shr     r11d, 7
 * 0000000140AFD64E: mov     edx, 1
 * 0000000140AFD653: mov     r12d, 0FFFFFFFFh
 * 0000000140AFD659: test    r11d, r11d
 * 0000000140AFD65C: jz      short loc_140AFD6CA
 * 0000000140AFD65E: mov     rdi, 7010008004002001h
 * 0000000140AFD668: mov     eax, 8
 * 0000000140AFD66D: xor     rbx, [r9]
 * 0000000140AFD670: mov     ecx, r10d
 * 0000000140AFD673: rol     rbx, cl
 * 0000000140AFD676: xor     rbx, [r9+8]
 * 0000000140AFD67A: add     r9, 10h
 * 0000000140AFD67E: rol     rbx, cl
 * 0000000140AFD681: sub     rax, rdx
 * 0000000140AFD684: jnz     short loc_140AFD66D
 * 0000000140AFD686: mov     rcx, r9
 * 0000000140AFD689: sub     rcx, r14
 * 0000000140AFD68C: xor     rcx, r15
 * 0000000140AFD68F: mov     rax, rcx
 * 0000000140AFD692: rol     rax, 11h
 * 0000000140AFD696: xor     rcx, rax
 * 0000000140AFD699: mov     rax, rdi
 * 0000000140AFD69C: mul     rcx
 * 0000000140AFD69F: xor     r10d, edx
 * 0000000140AFD6A2: mov     [rbp+0A70h+var_330], rdx
 * 0000000140AFD6A9: xor     r10d, eax
 * 0000000140AFD6AC: mov     edx, 1
 * 0000000140AFD6B1: and     r10d, 3Fh
 * 0000000140AFD6B5: cmovz   r10d, edx
 * 0000000140AFD6B9: add     r11d, r12d
 * 0000000140AFD6BC: jnz     short loc_140AFD668
 * 0000000140AFD6BE: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFD6C3: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFD6CA: and     r8d, 7Fh
 * 0000000140AFD6CE: cmp     r8d, 8
 * 0000000140AFD6D2: jb      short loc_140AFD6F1
 * 0000000140AFD6D4: mov     eax, r8d
 * 0000000140AFD6D7: shr     rax, 3
 * 0000000140AFD6DB: xor     rbx, [r9]
 * 0000000140AFD6DE: mov     ecx, r10d
 * 0000000140AFD6E1: rol     rbx, cl
 * 0000000140AFD6E4: add     r9, 8
 * 0000000140AFD6E8: add     r8d, 0FFFFFFF8h
 * 0000000140AFD6EC: sub     rax, rdx
 * 0000000140AFD6EF: jnz     short loc_140AFD6DB
 * 0000000140AFD6F1: test    r8d, r8d
 * 0000000140AFD6F4: jz      short loc_140AFD70B
 * 0000000140AFD6F6: movzx   eax, byte ptr [r9]
 * 0000000140AFD6FA: mov     ecx, r10d
 * 0000000140AFD6FD: xor     rbx, rax
 * 0000000140AFD700: add     r9, rdx
 * 0000000140AFD703: rol     rbx, cl
 * 0000000140AFD706: add     r8d, r12d
 * 0000000140AFD709: jnz     short loc_140AFD6F6
 * 0000000140AFD70B: mov     rax, rbx
 * 0000000140AFD70E: jmp     short loc_140AFD712
 * 0000000140AFD710: xor     ebx, eax
 * 0000000140AFD712: shr     rax, 1Fh
 * 0000000140AFD716: test    rax, rax
 * 0000000140AFD719: jnz     short loc_140AFD710
 * 0000000140AFD71B: btr     ebx, 1Fh
 * 0000000140AFD71F: mov     r12d, eax
 * 0000000140AFD722: cmp     ebx, [r13+14h]
 * 0000000140AFD726: jz      loc_140AFC050
 * 0000000140AFD72C: cmp     [r13+0], eax
 * 0000000140AFD730: jnz     short loc_140AFD73A
 * 0000000140AFD732: cmp     [r13+18h], eax
 * 0000000140AFD736: cmovnz  r12d, edx
 * 0000000140AFD73A: mov     ecx, [r13+10h]
 * 0000000140AFD73E: mov     rdx, [r13+8]
 * 0000000140AFD742: test    rcx, rcx
 * 0000000140AFD745: jz      loc_140AFD80B
 * 0000000140AFD74B: mov     eax, [rsi+994h]
 * 0000000140AFD751: mov     r8d, 40h ; '@'
 * 0000000140AFD757: test    r8b, al
 * 0000000140AFD75A: jz      loc_140AFD80B
 * 0000000140AFD760: mov     r13, cr8
 * 0000000140AFD764: lea     eax, [r8-3Eh]
 * 0000000140AFD768: mov     cr8, rax
 * 0000000140AFD76C: mov     r14, rdx
 * 0000000140AFD76F: lea     rax, [rcx-1]
 * 0000000140AFD773: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140AFD77A: add     rax, rdx
 * 0000000140AFD77D: or      rax, 0FFFh
 * 0000000140AFD783: mov     [rsp+0B70h+var_B18], rax
 * 0000000140AFD788: lea     rax, [r14-1]
 * 0000000140AFD78C: mov     [rbp+0A70h+arg_8], rax
 * 0000000140AFD793: movzx   r15d, r13b
 * 0000000140AFD797: mov     rax, [rsi+468h]
 * 0000000140AFD79E: xor     edx, edx
 * 0000000140AFD7A0: mov     rcx, r14
 * 0000000140AFD7A3: call    KeGuardDispatchICall
 * 0000000140AFD7A8: cmp     eax, 0C000022Dh
 * 0000000140AFD7AD: jnz     short loc_140AFD7D8
 * 0000000140AFD7AF: test    r12d, r12d
 * 0000000140AFD7B2: jnz     short loc_140AFD802
 * 0000000140AFD7B4: lea     eax, [r12+1]
 * 0000000140AFD7B9: cmp     r13b, al
 * 0000000140AFD7BC: ja      short loc_140AFD7DC
 * 0000000140AFD7BE: movzx   r15d, r13b
 * 0000000140AFD7C2: mov     cr8, r15
 * 0000000140AFD7C6: mov     al, [r14]
 * 0000000140AFD7C9: mov     rax, cr8
 * 0000000140AFD7CD: lea     eax, [r12+2]
 * 0000000140AFD7D2: mov     cr8, rax
 * 0000000140AFD7D6: jmp     short loc_140AFD797
 * 0000000140AFD7D8: test    eax, eax
 * 0000000140AFD7DA: js      short loc_140AFD802
 * 0000000140AFD7DC: mov     rax, [rbp+0A70h+arg_8]
 * 0000000140AFD7E3: mov     r8d, 1000h
 * 0000000140AFD7E9: add     rax, r8
 * 0000000140AFD7EC: add     r14, r8
 * 0000000140AFD7EF: mov     [rbp+0A70h+arg_8], rax
 * 0000000140AFD7F6: cmp     rax, [rsp+0B70h+var_B18]
 * 0000000140AFD7FB: jnz     short loc_140AFD793
 * 0000000140AFD7FD: jmp     loc_140AFC397
 * 0000000140AFD802: mov     cr8, r15
 * 0000000140AFD806: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140AFD80B: mov     eax, [r13+14h]
 * 0000000140AFD80F: xor     ecx, ecx
 * 0000000140AFD811: cmp     [rsi+8F8h], ecx
 * 0000000140AFD817: jnz     loc_140AFC39B
 * 0000000140AFD81D: mov     ecx, eax
 * 0000000140AFD81F: mov     eax, ebx
 * 0000000140AFD821: jmp     loc_140AFC3C1
 * 0000000140AFD826: mov     ecx, r10d
 * 0000000140AFD829: sub     ecx, 0Eh
 * 0000000140AFD82C: jz      loc_140B01446
 * 0000000140AFD832: sub     ecx, 1
 * 0000000140AFD835: jz      loc_140B012E3
 * 0000000140AFD83B: sub     ecx, edx
 * 0000000140AFD83D: jz      loc_140B0124D
 * 0000000140AFD843: sub     ecx, 3
 * 0000000140AFD846: jz      loc_140AFEB30
 * 0000000140AFD84C: sub     ecx, 1
 * 0000000140AFD84F: jz      loc_140AFE6F1
 * 0000000140AFD855: sub     ecx, 1
 * 0000000140AFD858: jz      loc_140AFE4D0
 * 0000000140AFD85E: sub     ecx, 1
 * 0000000140AFD861: jz      loc_140AFE20F
 * 0000000140AFD867: cmp     ecx, 1
 * 0000000140AFD86A: jnz     loc_140B040E1
 * 0000000140AFD870: mov     r8d, [r13+10h]
 * 0000000140AFD874: test    r8d, r8d
 * 0000000140AFD877: jnz     loc_140AFDDC8
 * 0000000140AFD87D: lea     rax, [r13+30h]
 * 0000000140AFD881: xor     r9d, r9d
 * 0000000140AFD884: mov     [rbp+0A70h+var_7E8], rax
 * 0000000140AFD88B: lea     rcx, [rbp+0A70h+var_7F0]
 * 0000000140AFD892: movzx   eax, word ptr [r13+28h]
 * 0000000140AFD897: xor     r8d, r8d
 * 0000000140AFD89A: mov     [rbp+0A70h+var_7F0], ax
 * 0000000140AFD8A1: xor     edx, edx
 * 0000000140AFD8A3: mov     [rbp+0A70h+var_7EE], ax
 * 0000000140AFD8AA: lea     rax, [rbp+0A70h+var_A20]
 * 0000000140AFD8AE: mov     [rsp+0B70h+var_B38], rax
 * 0000000140AFD8B3: xor     eax, eax
 * 0000000140AFD8B5: mov     [rsp+0B70h+var_B40], rax
 * 0000000140AFD8BA: mov     byte ptr [rsp+0B70h+var_B48], al
 * 0000000140AFD8BE: mov     rax, [rsi+508h]
 * 0000000140AFD8C5: mov     [rsp+0B70h+BugCheckParameter4], rax
 * 0000000140AFD8CA: mov     rax, [rsi+1E8h]
 * 0000000140AFD8D1: call    KeGuardDispatchICall
 * 0000000140AFD8D6: test    eax, eax
 * 0000000140AFD8D8: js      loc_140AFC39B
 * 0000000140AFD8DE: mov     rax, [rbp+0A70h+var_A20]
 * 0000000140AFD8E2: mov     ecx, [rax+10h]
 * 0000000140AFD8E5: mov     eax, 10h
 * 0000000140AFD8EA: test    al, cl
 * 0000000140AFD8EC: jnz     short loc_140AFD903
 * 0000000140AFD8EE: mov     rcx, [rbp+0A70h+var_A20]
 * 0000000140AFD8F2: mov     rax, [rsi+1E0h]
 * 0000000140AFD8F9: call    KeGuardDispatchICall
 * 0000000140AFD8FE: jmp     loc_140AFC39B
 * 0000000140AFD903: mov     rcx, [rsi+1E8h]
 * 0000000140AFD90A: lea     rdx, [rbp+0A70h+var_158]
 * 0000000140AFD911: mov     rax, [rsi+200h]
 * 0000000140AFD918: call    KeGuardDispatchICall
 * 0000000140AFD91D: mov     rcx, [rbp+0A70h+var_150]
 * 0000000140AFD924: test    rcx, rcx
 * 0000000140AFD927: jz      short loc_140AFD949
 * 0000000140AFD929: mov     rax, [rsi+1F8h]
 * 0000000140AFD930: mov     rbx, rcx
 * 0000000140AFD933: mov     [rbp+0A70h+var_A80], rcx
 * 0000000140AFD937: call    KeGuardDispatchICall
 * 0000000140AFD93C: test    rax, rax
 * 0000000140AFD93F: jz      short loc_140AFD949
 * 0000000140AFD941: mov     r15d, [rax+50h]
 * 0000000140AFD945: mov     [rbp+0A70h+var_AD0], r15d
 * 0000000140AFD949: mov     rcx, [r13+18h]
 * 0000000140AFD94D: lea     rdx, [rbp+0A70h+var_140]
 * 0000000140AFD954: mov     rax, [rsi+200h]
 * 0000000140AFD95B: call    KeGuardDispatchICall
 * 0000000140AFD960: mov     rcx, [rbp+0A70h+var_138]
 * 0000000140AFD967: test    rcx, rcx
 * 0000000140AFD96A: jz      short loc_140AFD98E
 * 0000000140AFD96C: mov     rax, [rsi+1F8h]
 * 0000000140AFD973: mov     r14, rcx
 * 0000000140AFD976: mov     [rbp+0A70h+var_AC0], rcx
 * 0000000140AFD97A: call    KeGuardDispatchICall
 * 0000000140AFD97F: test    rax, rax
 * 0000000140AFD982: jz      short loc_140AFD98E
 * 0000000140AFD984: mov     r10d, [rax+50h]
 * 0000000140AFD988: mov     [rbp+0A70h+var_A50], r10d
 * 0000000140AFD98C: jmp     short loc_140AFD992
 * 0000000140AFD98E: mov     r10d, [rbp+0A70h+var_A50]
 * 0000000140AFD992: bt      dword ptr [rsi+990h], 1Eh
 * 0000000140AFD99A: jb      short loc_140AFD9B0
 * 0000000140AFD99C: mov     rax, [rbp+0A70h+var_A20]
 * 0000000140AFD9A0: add     rax, 70h ; 'p'
 * 0000000140AFD9A4: mov     [r13+8], rax
 * 0000000140AFD9A8: mov     dword ptr [r13+10h], 0E0h
 * 0000000140AFD9B0: mov     rcx, [rbp+0A70h+var_A20]
 * 0000000140AFD9B4: xor     eax, eax
 * 0000000140AFD9B6: mov     r12d, r15d
 * 0000000140AFD9B9: mov     dl, al
 * 0000000140AFD9BB: mov     [rbp+0A70h+arg_8], r12
 * 0000000140AFD9C2: movzx   eax, dl
 * 0000000140AFD9C5: mov     r9, [rcx+rax*8+70h]
 * 0000000140AFD9CA: test    r15d, r15d
 * 0000000140AFD9CD: jz      short loc_140AFD9E0
 * 0000000140AFD9CF: lea     rax, [rbx-1]
 * 0000000140AFD9D3: add     rax, r12
 * 0000000140AFD9D6: cmp     r9, rbx
 * 0000000140AFD9D9: jb      short loc_140AFD9E0
 * 0000000140AFD9DB: cmp     r9, rax
 * 0000000140AFD9DE: jbe     short loc_140AFDA05
 * 0000000140AFD9E0: mov     eax, r10d
 * 0000000140AFD9E3: test    r10d, r10d
 * 0000000140AFD9E6: jz      loc_140AFDD4D
 * 0000000140AFD9EC: lea     r8, [r14-1]
 * 0000000140AFD9F0: add     r8, rax
 * 0000000140AFD9F3: cmp     r9, r14
 * 0000000140AFD9F6: jb      loc_140AFDD4D
 * 0000000140AFD9FC: cmp     r9, r8
 * 0000000140AFD9FF: ja      loc_140AFDD4D
 * 0000000140AFDA05: add     dl, 1
 * 0000000140AFDA08: cmp     dl, 1Ch
 * 0000000140AFDA0B: jb      short loc_140AFD9C2
 * 0000000140AFDA0D: bt      dword ptr [rsi+990h], 1Eh
 * 0000000140AFDA15: jb      loc_140AFD8F2
 * 0000000140AFDA1B: mov     r14, [r13+8]
 * 0000000140AFDA1F: mov     r9d, [r13+10h]
 * 0000000140AFDA23: mov     r10, r14
 * 0000000140AFDA26: add     [rsi+828h], r9d
 * 0000000140AFDA2D: mov     rax, r14
 * 0000000140AFDA30: mov     r11d, [rsi+814h]
 * 0000000140AFDA37: mov     r15, [rsi+818h]
 * 0000000140AFDA3E: lea     rcx, [r14+r9]
 * 0000000140AFDA42: cmp     r14, rcx
 * 0000000140AFDA45: jnb     short loc_140AFDA57
 * 0000000140AFDA47: mov     edx, 40h ; '@'
 * 0000000140AFDA4C: prefetchnta byte ptr [rax]
 * 0000000140AFDA4F: add     rax, rdx
 * 0000000140AFDA52: cmp     rax, rcx
 * 0000000140AFDA55: jb      short loc_140AFDA4C
 * 0000000140AFDA57: mov     ebx, r9d
 * 0000000140AFDA5A: mov     r8, r15
 * 0000000140AFDA5D: shr     ebx, 7
 * 0000000140AFDA60: mov     edx, 1
 * 0000000140AFDA65: test    ebx, ebx
 * 0000000140AFDA67: jz      short loc_140AFDAE0
 * 0000000140AFDA69: mov     edi, 0FFFFFFFFh
 * 0000000140AFDA6E: mov     r12, 7010008004002001h
 * 0000000140AFDA78: mov     eax, 8
 * 0000000140AFDA7D: xor     r8, [r10]
 * 0000000140AFDA80: mov     ecx, r11d
 * 0000000140AFDA83: rol     r8, cl
 * 0000000140AFDA86: xor     r8, [r10+8]
 * 0000000140AFDA8A: add     r10, 10h
 * 0000000140AFDA8E: rol     r8, cl
 * 0000000140AFDA91: sub     rax, rdx
 * 0000000140AFDA94: jnz     short loc_140AFDA7D
 * 0000000140AFDA96: mov     rcx, r10
 * 0000000140AFDA99: sub     rcx, r14
 * 0000000140AFDA9C: xor     rcx, r15
 * 0000000140AFDA9F: mov     rax, rcx
 * 0000000140AFDAA2: rol     rax, 11h
 * 0000000140AFDAA6: xor     rcx, rax
 * 0000000140AFDAA9: mov     rax, r12
 * 0000000140AFDAAC: mul     rcx
 * 0000000140AFDAAF: xor     r11d, edx
 * 0000000140AFDAB2: mov     [rbp+0A70h+var_328], rdx
 * 0000000140AFDAB9: xor     r11d, eax
 * 0000000140AFDABC: mov     edx, 1
 * 0000000140AFDAC1: and     r11d, 3Fh
 * 0000000140AFDAC5: cmovz   r11d, edx
 * 0000000140AFDAC9: add     ebx, edi
 * 0000000140AFDACB: jnz     short loc_140AFDA78
 * 0000000140AFDACD: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFDAD2: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFDAD9: mov     r12, [rbp+0A70h+arg_8]
 * 0000000140AFDAE0: and     r9d, 7Fh
 * 0000000140AFDAE4: cmp     r9d, 8
 * 0000000140AFDAE8: jb      short loc_140AFDB07
 * 0000000140AFDAEA: mov     eax, r9d
 * 0000000140AFDAED: shr     rax, 3
 * 0000000140AFDAF1: xor     r8, [r10]
 * 0000000140AFDAF4: mov     ecx, r11d
 * 0000000140AFDAF7: rol     r8, cl
 * 0000000140AFDAFA: add     r10, 8
 * 0000000140AFDAFE: add     r9d, 0FFFFFFF8h
 * 0000000140AFDB02: sub     rax, rdx
 * 0000000140AFDB05: jnz     short loc_140AFDAF1
 * 0000000140AFDB07: test    r9d, r9d
 * 0000000140AFDB0A: jz      short loc_140AFDB2B
 * 0000000140AFDB0C: mov     esi, 0FFFFFFFFh
 * 0000000140AFDB11: movzx   eax, byte ptr [r10]
 * 0000000140AFDB15: mov     ecx, r11d
 * 0000000140AFDB18: xor     r8, rax
 * 0000000140AFDB1B: add     r10, rdx
 * 0000000140AFDB1E: rol     r8, cl
 * 0000000140AFDB21: add     r9d, esi
 * 0000000140AFDB24: jnz     short loc_140AFDB11
 * 0000000140AFDB26: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFDB2B: mov     rax, r8
 * 0000000140AFDB2E: jmp     short loc_140AFDB33
 * 0000000140AFDB30: xor     r8d, eax
 * 0000000140AFDB33: shr     rax, 1Fh
 * 0000000140AFDB37: test    rax, rax
 * 0000000140AFDB3A: jnz     short loc_140AFDB30
 * 0000000140AFDB3C: btr     r8d, 1Fh
 * 0000000140AFDB41: mov     [r13+14h], r8d
 * 0000000140AFDB45: mov     rax, [rbp+0A70h+var_A20]
 * 0000000140AFDB49: mov     r14, [rax+50h]
 * 0000000140AFDB4D: xor     eax, eax
 * 0000000140AFDB4F: mov     r10d, eax
 * 0000000140AFDB52: test    r14, r14
 * 0000000140AFDB55: jz      short loc_140AFDBC8
 * 0000000140AFDB57: mov     r10d, [r14]
 * 0000000140AFDB5A: mov     dl, al
 * 0000000140AFDB5C: lea     r9d, [r10-8]
 * 0000000140AFDB60: shr     r9d, 3
 * 0000000140AFDB64: test    r9d, r9d
 * 0000000140AFDB67: jz      short loc_140AFDBC8
 * 0000000140AFDB69: mov     r11, [rbp+0A70h+var_A80]
 * 0000000140AFDB6D: mov     rbx, [rbp+0A70h+var_AC0]
 * 0000000140AFDB71: mov     r15d, [rbp+0A70h+var_A50]
 * 0000000140AFDB75: movzx   eax, dl
 * 0000000140AFDB78: mov     rcx, [r14+rax*8+8]
 * 0000000140AFDB7D: test    rcx, rcx
 * 0000000140AFDB80: jz      short loc_140AFDBBD
 * 0000000140AFDB82: test    r12, r12
 * 0000000140AFDB85: jz      short loc_140AFDB98
 * 0000000140AFDB87: lea     rax, [r11-1]
 * 0000000140AFDB8B: add     rax, r12
 * 0000000140AFDB8E: cmp     rcx, r11
 * 0000000140AFDB91: jb      short loc_140AFDB98
 * 0000000140AFDB93: cmp     rcx, rax
 * 0000000140AFDB96: jbe     short loc_140AFDBBD
 * 0000000140AFDB98: mov     rax, r15
 * 0000000140AFDB9B: test    r15d, r15d
 * 0000000140AFDB9E: jz      loc_140AFDC82
 * 0000000140AFDBA4: lea     r8, [rbx-1]
 * 0000000140AFDBA8: add     r8, rax
 * 0000000140AFDBAB: cmp     rcx, rbx
 * 0000000140AFDBAE: jb      loc_140AFDC82
 * 0000000140AFDBB4: cmp     rcx, r8
 * 0000000140AFDBB7: ja      loc_140AFDC82
 * 0000000140AFDBBD: add     dl, 1
 * 0000000140AFDBC0: movzx   eax, dl
 * 0000000140AFDBC3: cmp     eax, r9d
 * 0000000140AFDBC6: jb      short loc_140AFDB75
 * 0000000140AFDBC8: add     [rsi+828h], r10d
 * 0000000140AFDBCF: mov     r9, r14
 * 0000000140AFDBD2: mov     r11d, [rsi+814h]
 * 0000000140AFDBD9: mov     rax, r14
 * 0000000140AFDBDC: mov     r15, [rsi+818h]
 * 0000000140AFDBE3: mov     ecx, r10d
 * 0000000140AFDBE6: add     rcx, r14
 * 0000000140AFDBE9: cmp     r14, rcx
 * 0000000140AFDBEC: jnb     short loc_140AFDBFE
 * 0000000140AFDBEE: mov     edx, 40h ; '@'
 * 0000000140AFDBF3: prefetchnta byte ptr [rax]
 * 0000000140AFDBF6: add     rax, rdx
 * 0000000140AFDBF9: cmp     rax, rcx
 * 0000000140AFDBFC: jb      short loc_140AFDBF3
 * 0000000140AFDBFE: mov     ebx, r10d
 * 0000000140AFDC01: mov     r8, r15
 * 0000000140AFDC04: shr     ebx, 7
 * 0000000140AFDC07: mov     r12d, 1
 * 0000000140AFDC0D: test    ebx, ebx
 * 0000000140AFDC0F: jz      loc_140AFDCE8
 * 0000000140AFDC15: mov     rdi, 7010008004002001h
 * 0000000140AFDC1F: mov     eax, 8
 * 0000000140AFDC24: xor     r8, [r9]
 * 0000000140AFDC27: mov     ecx, r11d
 * 0000000140AFDC2A: rol     r8, cl
 * 0000000140AFDC2D: xor     r8, [r9+8]
 * 0000000140AFDC31: add     r9, 10h
 * 0000000140AFDC35: rol     r8, cl
 * 0000000140AFDC38: sub     rax, r12
 * 0000000140AFDC3B: jnz     short loc_140AFDC24
 * 0000000140AFDC3D: mov     rcx, r9
 * 0000000140AFDC40: sub     rcx, r14
 * 0000000140AFDC43: xor     rcx, r15
 * 0000000140AFDC46: mov     rax, rcx
 * 0000000140AFDC49: rol     rax, 11h
 * 0000000140AFDC4D: xor     rcx, rax
 * 0000000140AFDC50: mov     rax, rdi
 * 0000000140AFDC53: mul     rcx
 * 0000000140AFDC56: xor     r11d, edx
 * 0000000140AFDC59: mov     [rbp+0A70h+var_320], rdx
 * 0000000140AFDC60: xor     r11d, eax
 * 0000000140AFDC63: mov     edx, 0FFFFFFFFh
 * 0000000140AFDC68: and     r11d, 3Fh
 * 0000000140AFDC6C: cmovz   r11d, r12d
 * 0000000140AFDC70: add     ebx, edx
 * 0000000140AFDC72: jnz     short loc_140AFDC1F
 * 0000000140AFDC74: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFDC79: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFDC80: jmp     short loc_140AFDCED
 * 0000000140AFDC82: mov     [r13+20h], rcx
 * 0000000140AFDC86: mov     rax, [rsi+588h]
 * 0000000140AFDC8D: mov     [rax], r13
 * 0000000140AFDC90: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140AFDC97: xor     eax, eax
 * 0000000140AFDC99: lea     r12d, [rax+1]
 * 0000000140AFDC9D: cmp     [rsi+8F8h], eax
 * 0000000140AFDCA3: jnz     loc_140AFC14A
 * 0000000140AFDCA9: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFDCB3: add     rax, rsi
 * 0000000140AFDCB6: mov     [rsi+900h], rax
 * 0000000140AFDCBD: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFDCC7: add     rax, r13
 * 0000000140AFDCCA: mov     [rsi+908h], rax
 * 0000000140AFDCD1: movsxd  rax, dword ptr [r13+0]
 * 0000000140AFDCD5: mov     [rsi+910h], rax
 * 0000000140AFDCDC: mov     [rsi+918h], r14
 * 0000000140AFDCE3: jmp     loc_140AFC421
 * 0000000140AFDCE8: mov     edx, 0FFFFFFFFh
 * 0000000140AFDCED: and     r10d, 7Fh
 * 0000000140AFDCF1: cmp     r10d, 8
 * 0000000140AFDCF5: jb      short loc_140AFDD14
 * 0000000140AFDCF7: mov     eax, r10d
 * 0000000140AFDCFA: shr     rax, 3
 * 0000000140AFDCFE: xor     r8, [r9]
 * 0000000140AFDD01: mov     ecx, r11d
 * 0000000140AFDD04: rol     r8, cl
 * 0000000140AFDD07: add     r9, 8
 * 0000000140AFDD0B: add     r10d, 0FFFFFFF8h
 * 0000000140AFDD0F: sub     rax, r12
 * 0000000140AFDD12: jnz     short loc_140AFDCFE
 * 0000000140AFDD14: test    r10d, r10d
 * 0000000140AFDD17: jz      short loc_140AFDD2E
 * 0000000140AFDD19: movzx   eax, byte ptr [r9]
 * 0000000140AFDD1D: mov     ecx, r11d
 * 0000000140AFDD20: xor     r8, rax
 * 0000000140AFDD23: add     r9, r12
 * 0000000140AFDD26: rol     r8, cl
 * 0000000140AFDD29: add     r10d, edx
 * 0000000140AFDD2C: jnz     short loc_140AFDD19
 * 0000000140AFDD2E: mov     rax, r8
 * 0000000140AFDD31: jmp     short loc_140AFDD36
 * 0000000140AFDD33: xor     r8d, eax
 * 0000000140AFDD36: shr     rax, 1Fh
 * 0000000140AFDD3A: test    rax, rax
 * 0000000140AFDD3D: jnz     short loc_140AFDD33
 * 0000000140AFDD3F: btr     r8d, 1Fh
 * 0000000140AFDD44: mov     [r13+2Ch], r8d
 * 0000000140AFDD48: jmp     loc_140AFC148
 * 0000000140AFDD4D: bt      dword ptr [rsi+990h], 1Eh
 * 0000000140AFDD55: mov     r12d, 1
 * 0000000140AFDD5B: jnb     short loc_140AFDDAA
 * 0000000140AFDD5D: mov     rcx, [rsi+0A80h]
 * 0000000140AFDD64: lea     edx, [r12+2Fh]
 * 0000000140AFDD69: lea     r8d, [r12+5]
 * 0000000140AFDD6E: mov     rax, [r13+0]
 * 0000000140AFDD72: add     edx, 0FFFFFFF8h
 * 0000000140AFDD75: mov     [rcx], rax
 * 0000000140AFDD78: add     r13, 8
 * 0000000140AFDD7C: add     rcx, 8
 * 0000000140AFDD80: sub     r8, r12
 * 0000000140AFDD83: jnz     short loc_140AFDD6E
 * 0000000140AFDD85: test    edx, edx
 * 0000000140AFDD87: jz      short loc_140AFDDA3
 * 0000000140AFDD89: mov     esi, 0FFFFFFFFh
 * 0000000140AFDD8E: mov     al, [r13+0]
 * 0000000140AFDD92: add     r13, r12
 * 0000000140AFDD95: mov     [rcx], al
 * 0000000140AFDD97: add     rcx, r12
 * 0000000140AFDD9A: add     edx, esi
 * 0000000140AFDD9C: jnz     short loc_140AFDD8E
 * 0000000140AFDD9E: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFDDA3: mov     r13, [rsi+0A80h]
 * 0000000140AFDDAA: mov     [r13+20h], r9
 * 0000000140AFDDAE: mov     rax, [rsi+588h]
 * 0000000140AFDDB5: mov     [rax], r13
 * 0000000140AFDDB8: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140AFDDBF: mov     rcx, [r13+8]
 * 0000000140AFDDC3: jmp     loc_140AFC3D9
 * 0000000140AFDDC8: mov     r14, [r13+8]
 * 0000000140AFDDCC: add     [rsi+828h], r8d
 * 0000000140AFDDD3: mov     r9, r14
 * 0000000140AFDDD6: mov     r10d, [rsi+814h]
 * 0000000140AFDDDD: mov     rax, r14
 * 0000000140AFDDE0: mov     r15, [rsi+818h]
 * 0000000140AFDDE7: lea     rcx, [r14+r8]
 * 0000000140AFDDEB: cmp     r14, rcx
 * 0000000140AFDDEE: jnb     short loc_140AFDE00
 * 0000000140AFDDF0: mov     edx, 40h ; '@'
 * 0000000140AFDDF5: prefetchnta byte ptr [rax]
 * 0000000140AFDDF8: add     rax, rdx
 * 0000000140AFDDFB: cmp     rax, rcx
 * 0000000140AFDDFE: jb      short loc_140AFDDF5
 * 0000000140AFDE00: mov     r11d, r8d
 * 0000000140AFDE03: mov     rbx, r15
 * 0000000140AFDE06: shr     r11d, 7
 * 0000000140AFDE0A: mov     edx, 1
 * 0000000140AFDE0F: mov     r12d, 0FFFFFFFFh
 * 0000000140AFDE15: test    r11d, r11d
 * 0000000140AFDE18: jz      short loc_140AFDE86
 * 0000000140AFDE1A: mov     rdi, 7010008004002001h
 * 0000000140AFDE24: mov     eax, 8
 * 0000000140AFDE29: xor     rbx, [r9]
 * 0000000140AFDE2C: mov     ecx, r10d
 * 0000000140AFDE2F: rol     rbx, cl
 * 0000000140AFDE32: xor     rbx, [r9+8]
 * 0000000140AFDE36: add     r9, 10h
 * 0000000140AFDE3A: rol     rbx, cl
 * 0000000140AFDE3D: sub     rax, rdx
 * 0000000140AFDE40: jnz     short loc_140AFDE29
 * 0000000140AFDE42: mov     rcx, r9
 * 0000000140AFDE45: sub     rcx, r14
 * 0000000140AFDE48: xor     rcx, r15
 * 0000000140AFDE4B: mov     rax, rcx
 * 0000000140AFDE4E: rol     rax, 11h
 * 0000000140AFDE52: xor     rcx, rax
 * 0000000140AFDE55: mov     rax, rdi
 * 0000000140AFDE58: mul     rcx
 * 0000000140AFDE5B: xor     r10d, edx
 * 0000000140AFDE5E: mov     [rbp+0A70h+var_318], rdx
 * 0000000140AFDE65: xor     r10d, eax
 * 0000000140AFDE68: mov     edx, 1
 * 0000000140AFDE6D: and     r10d, 3Fh
 * 0000000140AFDE71: cmovz   r10d, edx
 * 0000000140AFDE75: add     r11d, r12d
 * 0000000140AFDE78: jnz     short loc_140AFDE24
 * 0000000140AFDE7A: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFDE7F: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFDE86: and     r8d, 7Fh
 * 0000000140AFDE8A: cmp     r8d, 8
 * 0000000140AFDE8E: jb      short loc_140AFDEAD
 * 0000000140AFDE90: mov     eax, r8d
 * 0000000140AFDE93: shr     rax, 3
 * 0000000140AFDE97: xor     rbx, [r9]
 * 0000000140AFDE9A: mov     ecx, r10d
 * 0000000140AFDE9D: rol     rbx, cl
 * 0000000140AFDEA0: add     r9, 8
 * 0000000140AFDEA4: add     r8d, 0FFFFFFF8h
 * 0000000140AFDEA8: sub     rax, rdx
 * 0000000140AFDEAB: jnz     short loc_140AFDE97
 * 0000000140AFDEAD: test    r8d, r8d
 * 0000000140AFDEB0: jz      short loc_140AFDEC7
 * 0000000140AFDEB2: movzx   eax, byte ptr [r9]
 * 0000000140AFDEB6: mov     ecx, r10d
 * 0000000140AFDEB9: xor     rbx, rax
 * 0000000140AFDEBC: add     r9, rdx
 * 0000000140AFDEBF: rol     rbx, cl
 * 0000000140AFDEC2: add     r8d, r12d
 * 0000000140AFDEC5: jnz     short loc_140AFDEB2
 * 0000000140AFDEC7: mov     rax, rbx
 * 0000000140AFDECA: jmp     short loc_140AFDECE
 * 0000000140AFDECC: xor     ebx, eax
 * 0000000140AFDECE: shr     rax, 1Fh
 * 0000000140AFDED2: test    rax, rax
 * 0000000140AFDED5: jnz     short loc_140AFDECC
 * 0000000140AFDED7: btr     ebx, 1Fh
 * 0000000140AFDEDB: mov     r12d, eax
 * 0000000140AFDEDE: cmp     ebx, [r13+14h]
 * 0000000140AFDEE2: jz      loc_140AFDFC9
 * 0000000140AFDEE8: cmp     [r13+0], eax
 * 0000000140AFDEEC: jnz     short loc_140AFDEF6
 * 0000000140AFDEEE: cmp     [r13+18h], eax
 * 0000000140AFDEF2: cmovnz  r12d, edx
 * 0000000140AFDEF6: mov     ecx, [r13+10h]
 * 0000000140AFDEFA: mov     rdx, [r13+8]
 * 0000000140AFDEFE: test    rcx, rcx
 * 0000000140AFDF01: jz      loc_140AFE0AC
 * 0000000140AFDF07: mov     eax, [rsi+994h]
 * 0000000140AFDF0D: mov     r8d, 40h ; '@'
 * 0000000140AFDF13: test    r8b, al
 * 0000000140AFDF16: jz      loc_140AFE0AC
 * 0000000140AFDF1C: mov     r13, cr8
 * 0000000140AFDF20: lea     eax, [r8-3Eh]
 * 0000000140AFDF24: mov     cr8, rax
 * 0000000140AFDF28: mov     r14, rdx
 * 0000000140AFDF2B: lea     rax, [rcx-1]
 * 0000000140AFDF2F: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140AFDF36: add     rax, rdx
 * 0000000140AFDF39: or      rax, 0FFFh
 * 0000000140AFDF3F: mov     [rsp+0B70h+var_B18], rax
 * 0000000140AFDF44: lea     rax, [r14-1]
 * 0000000140AFDF48: mov     [rbp+0A70h+arg_8], rax
 * 0000000140AFDF4F: movzx   r15d, r13b
 * 0000000140AFDF53: mov     rax, [rsi+468h]
 * 0000000140AFDF5A: xor     edx, edx
 * 0000000140AFDF5C: mov     rcx, r14
 * 0000000140AFDF5F: call    KeGuardDispatchICall
 * 0000000140AFDF64: cmp     eax, 0C000022Dh
 * 0000000140AFDF69: jnz     short loc_140AFDF98
 * 0000000140AFDF6B: test    r12d, r12d
 * 0000000140AFDF6E: jnz     loc_140AFE0A3
 * 0000000140AFDF74: lea     eax, [r12+1]
 * 0000000140AFDF79: cmp     r13b, al
 * 0000000140AFDF7C: ja      short loc_140AFDFA0
 * 0000000140AFDF7E: movzx   r15d, r13b
 * 0000000140AFDF82: mov     cr8, r15
 * 0000000140AFDF86: mov     al, [r14]
 * 0000000140AFDF89: mov     rax, cr8
 * 0000000140AFDF8D: lea     eax, [r12+2]
 * 0000000140AFDF92: mov     cr8, rax
 * 0000000140AFDF96: jmp     short loc_140AFDF53
 * 0000000140AFDF98: test    eax, eax
 * 0000000140AFDF9A: js      loc_140AFE0A3
 * 0000000140AFDFA0: mov     rax, [rbp+0A70h+arg_8]
 * 0000000140AFDFA7: mov     ecx, 1000h
 * 0000000140AFDFAC: add     rax, rcx
 * 0000000140AFDFAF: add     r14, rcx
 * 0000000140AFDFB2: mov     [rbp+0A70h+arg_8], rax
 * 0000000140AFDFB9: cmp     rax, [rsp+0B70h+var_B18]
 * 0000000140AFDFBE: jnz     short loc_140AFDF4F
 * 0000000140AFDFC0: mov     cr8, r15
 * 0000000140AFDFC4: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140AFDFC9: mov     r12d, 1
 * 0000000140AFDFCF: mov     rax, [r13+8]
 * 0000000140AFDFD3: sub     rax, 70h ; 'p'
 * 0000000140AFDFD7: mov     [rbp+0A70h+var_A20], rax
 * 0000000140AFDFDB: mov     r15, [rax+50h]
 * 0000000140AFDFDF: xor     eax, eax
 * 0000000140AFDFE1: mov     r9d, eax
 * 0000000140AFDFE4: test    r15, r15
 * 0000000140AFDFE7: jz      short loc_140AFDFEC
 * 0000000140AFDFE9: mov     r9d, [r15]
 * 0000000140AFDFEC: add     [rsi+828h], r9d
 * 0000000140AFDFF3: mov     r10, r15
 * 0000000140AFDFF6: mov     r11d, [rsi+814h]
 * 0000000140AFDFFD: mov     rax, r15
 * 0000000140AFE000: mov     r14, [rsi+818h]
 * 0000000140AFE007: mov     ecx, r9d
 * 0000000140AFE00A: add     rcx, r15
 * 0000000140AFE00D: cmp     r15, rcx
 * 0000000140AFE010: jnb     short loc_140AFE022
 * 0000000140AFE012: mov     edx, 40h ; '@'
 * 0000000140AFE017: prefetchnta byte ptr [rax]
 * 0000000140AFE01A: add     rax, rdx
 * 0000000140AFE01D: cmp     rax, rcx
 * 0000000140AFE020: jb      short loc_140AFE017
 * 0000000140AFE022: mov     ebx, r9d
 * 0000000140AFE025: mov     r8, r14
 * 0000000140AFE028: shr     ebx, 7
 * 0000000140AFE02B: test    ebx, ebx
 * 0000000140AFE02D: jz      loc_140AFE136
 * 0000000140AFE033: mov     rdi, 7010008004002001h
 * 0000000140AFE03D: mov     eax, 8
 * 0000000140AFE042: xor     r8, [r10]
 * 0000000140AFE045: mov     ecx, r11d
 * 0000000140AFE048: rol     r8, cl
 * 0000000140AFE04B: xor     r8, [r10+8]
 * 0000000140AFE04F: add     r10, 10h
 * 0000000140AFE053: rol     r8, cl
 * 0000000140AFE056: sub     rax, r12
 * 0000000140AFE059: jnz     short loc_140AFE042
 * 0000000140AFE05B: mov     rcx, r10
 * 0000000140AFE05E: sub     rcx, r15
 * 0000000140AFE061: xor     rcx, r14
 * 0000000140AFE064: mov     rax, rcx
 * 0000000140AFE067: rol     rax, 11h
 * 0000000140AFE06B: xor     rcx, rax
 * 0000000140AFE06E: mov     rax, rdi
 * 0000000140AFE071: mul     rcx
 * 0000000140AFE074: xor     r11d, edx
 * 0000000140AFE077: mov     [rbp+0A70h+var_238], rdx
 * 0000000140AFE07E: xor     r11d, eax
 * 0000000140AFE081: mov     edx, 0FFFFFFFFh
 * 0000000140AFE086: and     r11d, 3Fh
 * 0000000140AFE08A: cmovz   r11d, r12d
 * 0000000140AFE08E: add     ebx, edx
 * 0000000140AFE090: jnz     short loc_140AFE03D
 * 0000000140AFE092: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFE097: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFE09E: jmp     loc_140AFE13B
 * 0000000140AFE0A3: mov     cr8, r15
 * 0000000140AFE0A7: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140AFE0AC: mov     eax, [r13+14h]
 * 0000000140AFE0B0: xor     ecx, ecx
 * 0000000140AFE0B2: cmp     [rsi+8F8h], ecx
 * 0000000140AFE0B8: jnz     loc_140AFDFC9
 * 0000000140AFE0BE: mov     ecx, eax
 * 0000000140AFE0C0: mov     eax, ebx
 * 0000000140AFE0C2: xor     rcx, rax
 * 0000000140AFE0C5: mov     rax, [rsi+588h]
 * 0000000140AFE0CC: mov     [rax+18h], rcx
 * 0000000140AFE0D0: xor     eax, eax
 * 0000000140AFE0D2: mov     rcx, [r13+8]
 * 0000000140AFE0D6: lea     r12d, [rax+1]
 * 0000000140AFE0DA: cmp     [rsi+8F8h], eax
 * 0000000140AFE0E0: jnz     loc_140AFDFCF
 * 0000000140AFE0E6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFE0F0: xor     edx, edx
 * 0000000140AFE0F2: add     rax, rsi
 * 0000000140AFE0F5: mov     [rsi+900h], rax
 * 0000000140AFE0FC: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFE106: add     rax, r13
 * 0000000140AFE109: mov     [rsi+908h], rax
 * 0000000140AFE110: movsxd  rax, dword ptr [r13+0]
 * 0000000140AFE114: mov     [rsi+910h], rax
 * 0000000140AFE11B: mov     [rsi+918h], rcx
 * 0000000140AFE122: mov     rcx, rsi
 * 0000000140AFE125: mov     [rsi+8F8h], r12d
 * 0000000140AFE12C: call    $$ba
 * 0000000140AFE131: jmp     loc_140AFDFCF
 * 0000000140AFE136: mov     edx, 0FFFFFFFFh
 * 0000000140AFE13B: and     r9d, 7Fh
 * 0000000140AFE13F: cmp     r9d, 8
 * 0000000140AFE143: jb      short loc_140AFE162
 * 0000000140AFE145: mov     eax, r9d
 * 0000000140AFE148: shr     rax, 3
 * 0000000140AFE14C: xor     r8, [r10]
 * 0000000140AFE14F: mov     ecx, r11d
 * 0000000140AFE152: rol     r8, cl
 * 0000000140AFE155: add     r10, 8
 * 0000000140AFE159: add     r9d, 0FFFFFFF8h
 * 0000000140AFE15D: sub     rax, r12
 * 0000000140AFE160: jnz     short loc_140AFE14C
 * 0000000140AFE162: test    r9d, r9d
 * 0000000140AFE165: jz      short loc_140AFE17C
 * 0000000140AFE167: movzx   eax, byte ptr [r10]
 * 0000000140AFE16B: mov     ecx, r11d
 * 0000000140AFE16E: xor     r8, rax
 * 0000000140AFE171: add     r10, r12
 * 0000000140AFE174: rol     r8, cl
 * 0000000140AFE177: add     r9d, edx
 * 0000000140AFE17A: jnz     short loc_140AFE167
 * 0000000140AFE17C: mov     rax, r8
 * 0000000140AFE17F: shr     rax, 1Fh
 * 0000000140AFE183: xor     ecx, ecx
 * 0000000140AFE185: jmp     short loc_140AFE18E
 * 0000000140AFE187: xor     r8d, eax
 * 0000000140AFE18A: shr     rax, 1Fh
 * 0000000140AFE18E: test    rax, rax
 * 0000000140AFE191: jnz     short loc_140AFE187
 * 0000000140AFE193: mov     eax, [r13+2Ch]
 * 0000000140AFE197: btr     r8d, 1Fh
 * 0000000140AFE19C: cmp     r8d, eax
 * 0000000140AFE19F: jz      loc_140AFC148
 * 0000000140AFE1A5: cmp     [rsi+8F8h], ecx
 * 0000000140AFE1AB: jnz     loc_140AFC148
 * 0000000140AFE1B1: mov     ecx, r8d
 * 0000000140AFE1B4: xor     rcx, rax
 * 0000000140AFE1B7: mov     rax, [rsi+588h]
 * 0000000140AFE1BE: mov     [rax+18h], rcx
 * 0000000140AFE1C2: xor     eax, eax
 * 0000000140AFE1C4: cmp     [rsi+8F8h], eax
 * 0000000140AFE1CA: jnz     loc_140AFC14A
 * 0000000140AFE1D0: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFE1DA: add     rax, rsi
 * 0000000140AFE1DD: mov     [rsi+900h], rax
 * 0000000140AFE1E4: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFE1EE: add     rax, r13
 * 0000000140AFE1F1: mov     [rsi+908h], rax
 * 0000000140AFE1F8: movsxd  rax, dword ptr [r13+0]
 * 0000000140AFE1FC: mov     [rsi+910h], rax
 * 0000000140AFE203: mov     [rsi+918h], r15
 * 0000000140AFE20A: jmp     loc_140AFC421
 * 0000000140AFE20F: mov     eax, [rsi+830h]
 * 0000000140AFE215: mov     r12d, 1
 * 0000000140AFE21B: test    r12b, al
 * 0000000140AFE21E: jz      loc_140AFC148
 * 0000000140AFE224: mov     r14, [rsi+5A0h]
 * 0000000140AFE22B: xor     eax, eax
 * 0000000140AFE22D: mov     r13, [rsi+5A8h]
 * 0000000140AFE234: mov     rbx, [rsi+540h]
 * 0000000140AFE23B: mov     [rsp+0B70h+var_B00], eax
 * 0000000140AFE23F: mov     rax, [rsi+178h]
 * 0000000140AFE246: mov     [rbp+0A70h+var_AE8], r14
 * 0000000140AFE24A: mov     [rsp+0B70h+var_B18], r13
 * 0000000140AFE24F: call    KeGuardDispatchICall
 * 0000000140AFE254: test    dword ptr [rsi+990h], 40000000h
 * 0000000140AFE25E: jnz     short loc_140AFE273
 * 0000000140AFE260: mov     ecx, [rsi+950h]
 * 0000000140AFE266: cmp     ecx, 7
 * 0000000140AFE269: jnb     short loc_140AFE273
 * 0000000140AFE26B: mov     r15d, r12d
 * 0000000140AFE26E: shl     r15b, cl
 * 0000000140AFE271: jmp     short loc_140AFE28B
 * 0000000140AFE273: mov     rax, [rsi+128h]
 * 0000000140AFE27A: xor     edx, edx
 * 0000000140AFE27C: mov     rcx, [rsi+0A00h]
 * 0000000140AFE283: call    KeGuardDispatchICall
 * 0000000140AFE288: mov     r15b, 80h
 * 0000000140AFE28B: mov     rax, [rsi+138h]
 * 0000000140AFE292: xor     edx, edx
 * 0000000140AFE294: mov     rcx, rbx
 * 0000000140AFE297: mov     dword ptr [rbp+0A70h+var_AD8], r15d
 * 0000000140AFE29B: call    KeGuardDispatchICall
 * 0000000140AFE2A0: mov     rax, [rsi+138h]
 * 0000000140AFE2A7: xor     edx, edx
 * 0000000140AFE2A9: mov     rcx, r14
 * 0000000140AFE2AC: call    KeGuardDispatchICall
 * 0000000140AFE2B1: mov     r9, [rsi+598h]
 * 0000000140AFE2B8: xor     eax, eax
 * 0000000140AFE2BA: mov     r10d, eax
 * 0000000140AFE2BD: mov     [rsp+0B70h+var_B08], rax
 * 0000000140AFE2C2: mov     r8, [r9]
 * 0000000140AFE2C5: cmp     r8, r9
 * 0000000140AFE2C8: jz      short loc_140AFE31D
 * 0000000140AFE2CA: lea     rdx, [r8-18h]
 * 0000000140AFE2CE: cmp     rdx, r13
 * 0000000140AFE2D1: jz      short loc_140AFE309
 * 0000000140AFE2D3: mov     rax, [rsi+740h]
 * 0000000140AFE2DA: mov     rdx, [rdx+rax]
 * 0000000140AFE2DE: mov     rax, [rsi+6C8h]
 * 0000000140AFE2E5: mov     ecx, [rdx+rax]
 * 0000000140AFE2E8: test    [rsi+6E0h], ecx
 * 0000000140AFE2EE: jnz     short loc_140AFE2FD
 * 0000000140AFE2F0: test    r10, r10
 * 0000000140AFE2F3: mov     rax, rdx
 * 0000000140AFE2F6: cmovnz  rax, r12
 * 0000000140AFE2FA: mov     r10, rax
 * 0000000140AFE2FD: mov     rax, [rsi+6C0h]
 * 0000000140AFE304: lock or [rdx+rax], r15b
 * 0000000140AFE309: mov     r8, [r8]
 * 0000000140AFE30C: cmp     r8, r9
 * 0000000140AFE30F: jnz     short loc_140AFE2CA
 * 0000000140AFE311: mov     [rsp+0B70h+var_B08], r10
 * 0000000140AFE316: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFE31D: mov     r12, [rsi+518h]
 * 0000000140AFE324: mov     r14, [r12]
 * 0000000140AFE328: cmp     r14, r12
 * 0000000140AFE32B: jz      loc_140AFE416
 * 0000000140AFE331: mov     rdi, [rsp+0B70h+var_B18]
 * 0000000140AFE336: mov     r13b, r15b
 * 0000000140AFE339: movzx   r8d, r15b
 * 0000000140AFE33D: not     r13b
 * 0000000140AFE340: mov     r15d, [rsp+0B70h+var_B00]
 * 0000000140AFE345: mov     dword ptr [rbp+0A70h+arg_8], r8d
 * 0000000140AFE34C: mov     rdx, [rsi+6C0h]
 * 0000000140AFE353: mov     rbx, r14
 * 0000000140AFE356: sub     rbx, [rsi+6D8h]
 * 0000000140AFE35D: mov     rcx, rdx
 * 0000000140AFE360: movsx   eax, byte ptr [rbx+rdx]
 * 0000000140AFE364: test    r8d, eax
 * 0000000140AFE367: jnz     loc_140AFE3ED
 * 0000000140AFE36D: mov     rax, [rsi+6D0h]
 * 0000000140AFE374: mov     r8, [rbx+rax]
 * 0000000140AFE378: xor     eax, eax
 * 0000000140AFE37A: test    r8, r8
 * 0000000140AFE37D: jz      short loc_140AFE3E6
 * 0000000140AFE37F: cmp     r8, rdi
 * 0000000140AFE382: jz      short loc_140AFE3E6
 * 0000000140AFE384: cmp     [rsi+8F8h], eax
 * 0000000140AFE38A: jnz     short loc_140AFE3E6
 * 0000000140AFE38C: mov     rcx, [rsp+0B70h+var_B20]
 * 0000000140AFE391: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFE39B: add     rax, rsi
 * 0000000140AFE39E: xor     edx, edx
 * 0000000140AFE3A0: mov     [rsi+900h], rax
 * 0000000140AFE3A7: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFE3B1: add     rax, rcx
 * 0000000140AFE3B4: mov     [rsi+908h], rax
 * 0000000140AFE3BB: movsxd  rax, dword ptr [rcx]
 * 0000000140AFE3BE: mov     rcx, rsi
 * 0000000140AFE3C1: mov     [rsi+910h], rax
 * 0000000140AFE3C8: mov     eax, 1
 * 0000000140AFE3CD: mov     [rsi+918h], rbx
 * 0000000140AFE3D4: mov     [rsi+8F8h], eax
 * 0000000140AFE3DA: call    $$ba
 * 0000000140AFE3DF: mov     rcx, [rsi+6C0h]
 * 0000000140AFE3E6: mov     r8d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140AFE3ED: lock and [rbx+rcx], r13b
 * 0000000140AFE3F2: mov     r14, [r14]
 * 0000000140AFE3F5: inc     r15d
 * 0000000140AFE3F8: cmp     r14, r12
 * 0000000140AFE3FB: jnz     loc_140AFE34C
 * 0000000140AFE401: mov     r13, [rsp+0B70h+var_B18]
 * 0000000140AFE406: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFE40D: mov     [rsp+0B70h+var_B00], r15d
 * 0000000140AFE412: mov     r15d, dword ptr [rbp+0A70h+var_AD8]
 * 0000000140AFE416: mov     rdx, [rsp+0B70h+var_B08]
 * 0000000140AFE41B: mov     r12d, 1
 * 0000000140AFE421: test    rdx, rdx
 * 0000000140AFE424: jz      short loc_140AFE476
 * 0000000140AFE426: cmp     rdx, r12
 * 0000000140AFE429: jz      short loc_140AFE43D
 * 0000000140AFE42B: mov     rax, [rsi+6C0h]
 * 0000000140AFE432: mov     cl, r15b
 * 0000000140AFE435: not     cl
 * 0000000140AFE437: lock and [rdx+rax], cl
 * 0000000140AFE43B: jmp     short loc_140AFE476
 * 0000000140AFE43D: mov     r10, [rsi+598h]
 * 0000000140AFE444: mov     r9, [r10]
 * 0000000140AFE447: jmp     short loc_140AFE471
 * 0000000140AFE449: lea     r8, [r9-18h]
 * 0000000140AFE44D: cmp     r8, r13
 * 0000000140AFE450: jz      short loc_140AFE46E
 * 0000000140AFE452: mov     rax, [rsi+740h]
 * 0000000140AFE459: mov     dl, r15b
 * 0000000140AFE45C: not     dl
 * 0000000140AFE45E: mov     r8, [r8+rax]
 * 0000000140AFE462: mov     rax, [rsi+6C0h]
 * 0000000140AFE469: lock and [r8+rax], dl
 * 0000000140AFE46E: mov     r9, [r9]
 * 0000000140AFE471: cmp     r9, r10
 * 0000000140AFE474: jnz     short loc_140AFE449
 * 0000000140AFE476: mov     rax, [rsi+140h]
 * 0000000140AFE47D: xor     edx, edx
 * 0000000140AFE47F: mov     rcx, [rbp+0A70h+var_AE8]
 * 0000000140AFE483: call    KeGuardDispatchICall
 * 0000000140AFE488: cmp     r15b, 80h
 * 0000000140AFE48C: jnz     short loc_140AFE4A3
 * 0000000140AFE48E: mov     rax, [rsi+130h]
 * 0000000140AFE495: xor     edx, edx
 * 0000000140AFE497: mov     rcx, [rsi+0A00h]
 * 0000000140AFE49E: call    KeGuardDispatchICall
 * 0000000140AFE4A3: mov     rcx, [rsi+540h]
 * 0000000140AFE4AA: xor     edx, edx
 * 0000000140AFE4AC: mov     rax, [rsi+140h]
 * 0000000140AFE4B3: call    KeGuardDispatchICall
 * 0000000140AFE4B8: mov     rax, [rsi+180h]
 * 0000000140AFE4BF: call    KeGuardDispatchICall
 * 0000000140AFE4C4: mov     eax, [rsp+0B70h+var_B00]
 * 0000000140AFE4C8: shl     eax, 8
 * 0000000140AFE4CB: jmp     loc_140AFCD65
 * 0000000140AFE4D0: mov     eax, [rsi+830h]
 * 0000000140AFE4D6: mov     r12d, 1
 * 0000000140AFE4DC: test    r12b, al
 * 0000000140AFE4DF: jnz     loc_140AFC148
 * 0000000140AFE4E5: mov     r14, [rsi+5A0h]
 * 0000000140AFE4EC: xor     eax, eax
 * 0000000140AFE4EE: mov     rbx, [rsi+540h]
 * 0000000140AFE4F5: mov     r13d, eax
 * 0000000140AFE4F8: mov     dword ptr [rbp+0A70h+arg_8], eax
 * 0000000140AFE4FE: mov     rax, [rsi+5A8h]
 * 0000000140AFE505: mov     [rsp+0B70h+var_B18], rax
 * 0000000140AFE50A: mov     rax, [rsi+178h]
 * 0000000140AFE511: mov     [rsp+0B70h+var_B08], r14
 * 0000000140AFE516: call    KeGuardDispatchICall
 * 0000000140AFE51B: test    dword ptr [rsi+990h], 40000000h
 * 0000000140AFE525: jnz     short loc_140AFE53A
 * 0000000140AFE527: mov     ecx, [rsi+950h]
 * 0000000140AFE52D: cmp     ecx, 7
 * 0000000140AFE530: jnb     short loc_140AFE53A
 * 0000000140AFE532: mov     r15d, r12d
 * 0000000140AFE535: shl     r15b, cl
 * 0000000140AFE538: jmp     short loc_140AFE552
 * 0000000140AFE53A: mov     rax, [rsi+128h]
 * 0000000140AFE541: xor     edx, edx
 * 0000000140AFE543: mov     rcx, [rsi+0A00h]
 * 0000000140AFE54A: call    KeGuardDispatchICall
 * 0000000140AFE54F: mov     r15b, 80h
 * 0000000140AFE552: mov     rax, [rsi+138h]
 * 0000000140AFE559: xor     edx, edx
 * 0000000140AFE55B: mov     rcx, rbx
 * 0000000140AFE55E: call    KeGuardDispatchICall
 * 0000000140AFE563: mov     r8, [rsi+518h]
 * 0000000140AFE56A: mov     rdx, [r8]
 * 0000000140AFE56D: cmp     rdx, r8
 * 0000000140AFE570: jz      short loc_140AFE59A
 * 0000000140AFE572: mov     rax, [rsi+6C0h]
 * 0000000140AFE579: mov     rcx, rdx
 * 0000000140AFE57C: sub     rcx, [rsi+6D8h]
 * 0000000140AFE583: lock or [rcx+rax], r15b
 * 0000000140AFE588: mov     rdx, [rdx]
 * 0000000140AFE58B: add     r13d, r12d
 * 0000000140AFE58E: cmp     rdx, r8
 * 0000000140AFE591: jnz     short loc_140AFE572
 * 0000000140AFE593: mov     dword ptr [rbp+0A70h+arg_8], r13d
 * 0000000140AFE59A: mov     rax, [rsi+138h]
 * 0000000140AFE5A1: xor     edx, edx
 * 0000000140AFE5A3: mov     rcx, r14
 * 0000000140AFE5A6: call    KeGuardDispatchICall
 * 0000000140AFE5AB: mov     r12, [rsi+598h]
 * 0000000140AFE5B2: mov     r14, [r12]
 * 0000000140AFE5B6: cmp     r14, r12
 * 0000000140AFE5B9: jz      loc_140AFE692
 * 0000000140AFE5BF: mov     rax, [rsp+0B70h+var_B18]
 * 0000000140AFE5C4: xor     r13d, r13d
 * 0000000140AFE5C7: mov     rdi, [rsp+0B70h+var_B20]
 * 0000000140AFE5CC: mov     rcx, r14
 * 0000000140AFE5CF: sub     rcx, [rsi+748h]
 * 0000000140AFE5D6: cmp     rcx, rax
 * 0000000140AFE5D9: jz      loc_140AFE678
 * 0000000140AFE5DF: mov     r8, [rsi+6C0h]
 * 0000000140AFE5E6: mov     rax, [rsi+740h]
 * 0000000140AFE5ED: mov     rdx, r8
 * 0000000140AFE5F0: mov     rbx, [rcx+rax]
 * 0000000140AFE5F4: test    [rbx+r8], r15b
 * 0000000140AFE5F8: jnz     short loc_140AFE66A
 * 0000000140AFE5FA: mov     rax, [rsi+6C8h]
 * 0000000140AFE601: mov     ecx, [rbx+rax]
 * 0000000140AFE604: test    [rsi+6E0h], ecx
 * 0000000140AFE60A: jz      short loc_140AFE66A
 * 0000000140AFE60C: cmp     [rsi+8F8h], r13d
 * 0000000140AFE613: jnz     short loc_140AFE66A
 * 0000000140AFE615: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFE61F: xor     edx, edx
 * 0000000140AFE621: add     rax, rsi
 * 0000000140AFE624: mov     rcx, rsi
 * 0000000140AFE627: mov     [rsi+900h], rax
 * 0000000140AFE62E: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFE638: add     rax, rdi
 * 0000000140AFE63B: mov     [rsi+908h], rax
 * 0000000140AFE642: movsxd  rax, dword ptr [rdi]
 * 0000000140AFE645: mov     [rsi+910h], rax
 * 0000000140AFE64C: mov     eax, 1
 * 0000000140AFE651: mov     [rsi+918h], rbx
 * 0000000140AFE658: mov     [rsi+8F8h], eax
 * 0000000140AFE65E: call    $$ba
 * 0000000140AFE663: mov     rdx, [rsi+6C0h]
 * 0000000140AFE66A: mov     al, r15b
 * 0000000140AFE66D: not     al
 * 0000000140AFE66F: lock and [rbx+rdx], al
 * 0000000140AFE673: mov     rax, [rsp+0B70h+var_B18]
 * 0000000140AFE678: mov     r14, [r14]
 * 0000000140AFE67B: cmp     r14, r12
 * 0000000140AFE67E: jnz     loc_140AFE5CC
 * 0000000140AFE684: mov     r13d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140AFE68B: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFE692: mov     rax, [rsi+140h]
 * 0000000140AFE699: xor     edx, edx
 * 0000000140AFE69B: mov     rcx, [rsp+0B70h+var_B08]
 * 0000000140AFE6A0: call    KeGuardDispatchICall
 * 0000000140AFE6A5: cmp     r15b, 80h
 * 0000000140AFE6A9: jnz     short loc_140AFE6C0
 * 0000000140AFE6AB: mov     rax, [rsi+130h]
 * 0000000140AFE6B2: xor     edx, edx
 * 0000000140AFE6B4: mov     rcx, [rsi+0A00h]
 * 0000000140AFE6BB: call    KeGuardDispatchICall
 * 0000000140AFE6C0: mov     rcx, [rsi+540h]
 * 0000000140AFE6C7: xor     edx, edx
 * 0000000140AFE6C9: mov     rax, [rsi+140h]
 * 0000000140AFE6D0: call    KeGuardDispatchICall
 * 0000000140AFE6D5: mov     rax, [rsi+180h]
 * 0000000140AFE6DC: call    KeGuardDispatchICall
 * 0000000140AFE6E1: shl     r13d, 8
 * 0000000140AFE6E5: add     [rsi+828h], r13d
 * 0000000140AFE6EC: jmp     loc_140AFC39B
 * 0000000140AFE6F1: mov     r12, [rsi+528h]
 * 0000000140AFE6F8: xor     eax, eax
 * 0000000140AFE6FA: mov     [rsp+0B70h+var_B00], eax
 * 0000000140AFE6FE: mov     rax, [rsi+378h]
 * 0000000140AFE705: call    KeGuardDispatchICall
 * 0000000140AFE70A: mov     [rbp+0A70h+var_AE8], rax
 * 0000000140AFE70E: cli
 * 0000000140AFE70F: mov     rcx, gs:20h
 * 0000000140AFE718: mov     rax, [rsi+650h]
 * 0000000140AFE71F: mov     rcx, [rcx+rax]
 * 0000000140AFE723: sti
 * 0000000140AFE724: mov     rax, [rsi+168h]
 * 0000000140AFE72B: call    KeGuardDispatchICall
 * 0000000140AFE730: mov     rcx, [rsi+530h]
 * 0000000140AFE737: mov     ebx, 1
 * 0000000140AFE73C: mov     rax, [rsi+0E8h]
 * 0000000140AFE743: mov     dl, bl
 * 0000000140AFE745: call    KeGuardDispatchICall
 * 0000000140AFE74A: mov     rax, [rsi+618h]
 * 0000000140AFE751: mov     rcx, [rax]
 * 0000000140AFE754: mov     r13d, [rcx]
 * 0000000140AFE757: lea     rdx, [rcx+10h]
 * 0000000140AFE75B: mov     [rsp+0B70h+var_B18], rdx
 * 0000000140AFE760: lea     rax, ds:0[r13*2]
 * 0000000140AFE768: add     rax, r13
 * 0000000140AFE76B: lea     rax, [rdx+rax*8]
 * 0000000140AFE76F: mov     [rsp+0B70h+var_B08], rax
 * 0000000140AFE774: xor     eax, eax
 * 0000000140AFE776: mov     dword ptr [rbp+0A70h+arg_8], eax
 * 0000000140AFE77C: cmp     [rcx+0Ch], al
 * 0000000140AFE77F: jz      short loc_140AFE795
 * 0000000140AFE781: mov     r13d, eax
 * 0000000140AFE784: mov     rax, [r12]
 * 0000000140AFE788: jmp     short loc_140AFE790
 * 0000000140AFE78A: mov     rax, [rax]
 * 0000000140AFE78D: add     r13d, ebx
 * 0000000140AFE790: cmp     rax, r12
 * 0000000140AFE793: jnz     short loc_140AFE78A
 * 0000000140AFE795: mov     r8d, [rsi+810h]
 * 0000000140AFE79C: lea     r15d, ds:0[r13*8]
 * 0000000140AFE7A4: rdtsc
 * 0000000140AFE7A6: shl     rdx, 20h
 * 0000000140AFE7AA: mov     r9, 7010008004002001h
 * 0000000140AFE7B4: or      rax, rdx
 * 0000000140AFE7B7: mov     rcx, rax
 * 0000000140AFE7BA: ror     rax, 3
 * 0000000140AFE7BE: xor     rcx, rax
 * 0000000140AFE7C1: mov     rax, r9
 * 0000000140AFE7C4: mul     rcx
 * 0000000140AFE7C7: mov     rbx, rdx
 * 0000000140AFE7CA: mov     [rbp+0A70h+var_230], rdx
 * 0000000140AFE7D1: xor     ebx, eax
 * 0000000140AFE7D3: and     ebx, 7FFh
 * 0000000140AFE7D9: rdtsc
 * 0000000140AFE7DB: shl     rdx, 20h
 * 0000000140AFE7DF: or      rax, rdx
 * 0000000140AFE7E2: mov     rcx, rax
 * 0000000140AFE7E5: ror     rax, 3
 * 0000000140AFE7E9: xor     rcx, rax
 * 0000000140AFE7EC: mov     rax, r9
 * 0000000140AFE7EF: mul     rcx
 * 0000000140AFE7F2: lea     r9d, [rbx+1]
 * 0000000140AFE7F6: mov     ecx, 42h ; 'B'
 * 0000000140AFE7FB: xor     rax, rdx
 * 0000000140AFE7FE: mov     [rbp+0A70h+var_1C8], rdx
 * 0000000140AFE805: xor     edx, edx
 * 0000000140AFE807: div     r9
 * 0000000140AFE80A: mov     rax, [rsi+0F0h]
 * 0000000140AFE811: mov     r14, rdx
 * 0000000140AFE814: lea     edx, [rbx+r15]
 * 0000000140AFE818: call    KeGuardDispatchICall
 * 0000000140AFE81D: mov     r11, rax
 * 0000000140AFE820: xor     eax, eax
 * 0000000140AFE822: test    r11, r11
 * 0000000140AFE825: jnz     short loc_140AFE835
 * 0000000140AFE827: lea     ecx, [rax+1]
 * 0000000140AFE82A: add     [rsi+0A18h], ecx
 * 0000000140AFE830: jmp     loc_140AFE987
 * 0000000140AFE835: mov     r10d, r14d
 * 0000000140AFE838: mov     r9, r11
 * 0000000140AFE83B: cmp     r14d, 8
 * 0000000140AFE83F: jb      short loc_140AFE896
 * 0000000140AFE841: mov     r8d, r14d
 * 0000000140AFE844: mov     esi, 1
 * 0000000140AFE849: shr     r8, 3
 * 0000000140AFE84D: mov     rdi, 7010008004002001h
 * 0000000140AFE857: rdtsc
 * 0000000140AFE859: shl     rdx, 20h
 * 0000000140AFE85D: add     r10d, 0FFFFFFF8h
 * 0000000140AFE861: or      rax, rdx
 * 0000000140AFE864: mov     rcx, rax
 * 0000000140AFE867: ror     rax, 3
 * 0000000140AFE86B: xor     rcx, rax
 * 0000000140AFE86E: mov     rax, rdi
 * 0000000140AFE871: mul     rcx
 * 0000000140AFE874: mov     [rbp+0A70h+var_1C0], rdx
 * 0000000140AFE87B: xor     rdx, rax
 * 0000000140AFE87E: mov     [r9], rdx
 * 0000000140AFE881: add     r9, 8
 * 0000000140AFE885: sub     r8, rsi
 * 0000000140AFE888: jnz     short loc_140AFE857
 * 0000000140AFE88A: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFE88F: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFE896: test    r10d, r10d
 * 0000000140AFE899: jz      short loc_140AFE8DE
 * 0000000140AFE89B: rdtsc
 * 0000000140AFE89D: shl     rdx, 20h
 * 0000000140AFE8A1: or      rax, rdx
 * 0000000140AFE8A4: mov     rcx, rax
 * 0000000140AFE8A7: ror     rax, 3
 * 0000000140AFE8AB: xor     rcx, rax
 * 0000000140AFE8AE: mov     rax, 7010008004002001h
 * 0000000140AFE8B8: mul     rcx
 * 0000000140AFE8BB: mov     ecx, 0FFFFFFFFh
 * 0000000140AFE8C0: mov     [rbp+0A70h+var_1B8], rdx
 * 0000000140AFE8C7: xor     rdx, rax
 * 0000000140AFE8CA: mov     eax, 1
 * 0000000140AFE8CF: mov     [r9], dl
 * 0000000140AFE8D2: add     r9, rax
 * 0000000140AFE8D5: shr     rdx, 8
 * 0000000140AFE8D9: add     r10d, ecx
 * 0000000140AFE8DC: jnz     short loc_140AFE8CF
 * 0000000140AFE8DE: mov     r10d, r14d
 * 0000000140AFE8E1: sub     ebx, r14d
 * 0000000140AFE8E4: mov     r8d, r15d
 * 0000000140AFE8E7: mov     r14d, 1
 * 0000000140AFE8ED: add     r8, r10
 * 0000000140AFE8F0: mov     r15, 7010008004002001h
 * 0000000140AFE8FA: add     r8, r11
 * 0000000140AFE8FD: cmp     ebx, 8
 * 0000000140AFE900: jb      short loc_140AFE93B
 * 0000000140AFE902: mov     r9d, ebx
 * 0000000140AFE905: shr     r9, 3
 * 0000000140AFE909: rdtsc
 * 0000000140AFE90B: shl     rdx, 20h
 * 0000000140AFE90F: add     ebx, 0FFFFFFF8h
 * 0000000140AFE912: or      rax, rdx
 * 0000000140AFE915: mov     rcx, rax
 * 0000000140AFE918: ror     rax, 3
 * 0000000140AFE91C: xor     rcx, rax
 * 0000000140AFE91F: mov     rax, r15
 * 0000000140AFE922: mul     rcx
 * 0000000140AFE925: mov     [rbp+0A70h+var_1B0], rdx
 * 0000000140AFE92C: xor     rdx, rax
 * 0000000140AFE92F: mov     [r8], rdx
 * 0000000140AFE932: add     r8, 8
 * 0000000140AFE936: sub     r9, r14
 * 0000000140AFE939: jnz     short loc_140AFE909
 * 0000000140AFE93B: test    ebx, ebx
 * 0000000140AFE93D: jz      short loc_140AFE975
 * 0000000140AFE93F: rdtsc
 * 0000000140AFE941: shl     rdx, 20h
 * 0000000140AFE945: or      rax, rdx
 * 0000000140AFE948: mov     rcx, rax
 * 0000000140AFE94B: ror     rax, 3
 * 0000000140AFE94F: xor     rcx, rax
 * 0000000140AFE952: mov     rax, r15
 * 0000000140AFE955: mul     rcx
 * 0000000140AFE958: mov     [rbp+0A70h+var_1A8], rdx
 * 0000000140AFE95F: xor     rdx, rax
 * 0000000140AFE962: mov     eax, 0FFFFFFFFh
 * 0000000140AFE967: mov     [r8], dl
 * 0000000140AFE96A: add     r8, r14
 * 0000000140AFE96D: shr     rdx, 8
 * 0000000140AFE971: add     ebx, eax
 * 0000000140AFE973: jnz     short loc_140AFE967
 * 0000000140AFE975: lea     r15, [r10+r11]
 * 0000000140AFE979: mov     [rbp+0A70h+var_940], r11
 * 0000000140AFE980: test    r15, r15
 * 0000000140AFE983: jnz     short loc_140AFE993
 * 0000000140AFE985: xor     eax, eax
 * 0000000140AFE987: mov     [rbp+0A70h+var_940], rax
 * 0000000140AFE98E: jmp     loc_140AFEAD2
 * 0000000140AFE993: mov     rbx, [r12]
 * 0000000140AFE997: cmp     rbx, r12
 * 0000000140AFE99A: jz      short loc_140AFE9E9
 * 0000000140AFE99C: mov     edi, dword ptr [rbp+0A70h+arg_8]
 * 0000000140AFE9A2: mov     rax, [rsi+758h]
 * 0000000140AFE9A9: mov     rcx, rbx
 * 0000000140AFE9AC: sub     rcx, [rsi+750h]
 * 0000000140AFE9B3: mov     r14, [rcx+rax]
 * 0000000140AFE9B7: mov     rax, [rsi+2A8h]
 * 0000000140AFE9BE: mov     rcx, r14
 * 0000000140AFE9C1: call    KeGuardDispatchICall
 * 0000000140AFE9C6: test    eax, eax
 * 0000000140AFE9C8: jnz     short loc_140AFE9D7
 * 0000000140AFE9CA: cmp     edi, r13d
 * 0000000140AFE9CD: jnb     short loc_140AFE9D7
 * 0000000140AFE9CF: mov     eax, edi
 * 0000000140AFE9D1: inc     edi
 * 0000000140AFE9D3: mov     [r15+rax*8], r14
 * 0000000140AFE9D7: mov     rbx, [rbx]
 * 0000000140AFE9DA: inc     [rsp+0B70h+var_B00]
 * 0000000140AFE9DE: cmp     rbx, r12
 * 0000000140AFE9E1: jnz     short loc_140AFE9A2
 * 0000000140AFE9E3: mov     dword ptr [rbp+0A70h+arg_8], edi
 * 0000000140AFE9E9: mov     r14d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140AFE9F0: mov     rcx, r15
 * 0000000140AFE9F3: mov     rax, [rsi+398h]
 * 0000000140AFE9FA: mov     edx, r14d
 * 0000000140AFE9FD: call    KeGuardDispatchICall
 * 0000000140AFEA02: mov     r12, [rsp+0B70h+var_B18]
 * 0000000140AFEA07: mov     r13, [rsp+0B70h+var_B08]
 * 0000000140AFEA0C: mov     rdi, [rsp+0B70h+var_B20]
 * 0000000140AFEA11: mov     rbx, [r12+8]
 * 0000000140AFEA16: mov     rax, [rsi+2A8h]
 * 0000000140AFEA1D: mov     rcx, rbx
 * 0000000140AFEA20: call    KeGuardDispatchICall
 * 0000000140AFEA25: test    eax, eax
 * 0000000140AFEA27: jnz     loc_140AFEABE
 * 0000000140AFEA2D: xor     eax, eax
 * 0000000140AFEA2F: lea     edx, [r14-1]
 * 0000000140AFEA33: mov     r8d, eax
 * 0000000140AFEA36: test    edx, edx
 * 0000000140AFEA38: js      short loc_140AFEA68
 * 0000000140AFEA3A: lea     ecx, [rdx+r8]
 * 0000000140AFEA3E: sar     ecx, 1
 * 0000000140AFEA40: movsxd  rax, ecx
 * 0000000140AFEA43: cmp     rbx, [r15+rax*8]
 * 0000000140AFEA47: jnb     short loc_140AFEA54
 * 0000000140AFEA49: xor     eax, eax
 * 0000000140AFEA4B: test    ecx, ecx
 * 0000000140AFEA4D: jz      short loc_140AFEA68
 * 0000000140AFEA4F: lea     edx, [rcx-1]
 * 0000000140AFEA52: jmp     short loc_140AFEA5A
 * 0000000140AFEA54: jbe     short loc_140AFEA61
 * 0000000140AFEA56: lea     r8d, [rcx+1]
 * 0000000140AFEA5A: cmp     edx, r8d
 * 0000000140AFEA5D: jge     short loc_140AFEA3A
 * 0000000140AFEA5F: jmp     short loc_140AFEA66
 * 0000000140AFEA61: cmp     edx, r8d
 * 0000000140AFEA64: jge     short loc_140AFEABE
 * 0000000140AFEA66: xor     eax, eax
 * 0000000140AFEA68: cmp     [rsi+8F8h], eax
 * 0000000140AFEA6E: jnz     short loc_140AFEABE
 * 0000000140AFEA70: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFEA7A: xor     edx, edx
 * 0000000140AFEA7C: add     rax, rsi
 * 0000000140AFEA7F: mov     rcx, rsi
 * 0000000140AFEA82: mov     [rsi+900h], rax
 * 0000000140AFEA89: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFEA93: add     rax, rdi
 * 0000000140AFEA96: mov     [rsi+908h], rax
 * 0000000140AFEA9D: movsxd  rax, dword ptr [rdi]
 * 0000000140AFEAA0: mov     [rsi+910h], rax
 * 0000000140AFEAA7: mov     eax, 1
 * 0000000140AFEAAC: mov     [rsi+918h], rbx
 * 0000000140AFEAB3: mov     [rsi+8F8h], eax
 * 0000000140AFEAB9: call    $$ba
 * 0000000140AFEABE: add     r12, 18h
 * 0000000140AFEAC2: cmp     r12, r13
 * 0000000140AFEAC5: jb      loc_140AFEA11
 * 0000000140AFEACB: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFEAD2: mov     rcx, [rsi+530h]
 * 0000000140AFEAD9: mov     rax, [rsi+118h]
 * 0000000140AFEAE0: call    KeGuardDispatchICall
 * 0000000140AFEAE5: mov     rax, [rsi+170h]
 * 0000000140AFEAEC: call    KeGuardDispatchICall
 * 0000000140AFEAF1: mov     rax, [rsi+380h]
 * 0000000140AFEAF8: mov     rcx, [rbp+0A70h+var_AE8]
 * 0000000140AFEAFC: call    KeGuardDispatchICall
 * 0000000140AFEB01: xor     eax, eax
 * 0000000140AFEB03: cmp     [rbp+0A70h+var_940], rax
 * 0000000140AFEB0A: jz      loc_140AFC050
 * 0000000140AFEB10: mov     eax, [rsp+0B70h+var_B00]
 * 0000000140AFEB14: shl     eax, 9
 * 0000000140AFEB17: add     [rsi+828h], eax
 * 0000000140AFEB1D: mov     rax, [rsi+0F8h]
 * 0000000140AFEB24: mov     rcx, [rbp+0A70h+var_940]
 * 0000000140AFEB2B: jmp     loc_140AFD8F9
 * 0000000140AFEB30: mov     r11d, 40000000h
 * 0000000140AFEB36: test    [rsi+990h], r11d
 * 0000000140AFEB3D: jz      short loc_140AFEB96
 * 0000000140AFEB3F: test    dword ptr [rsi+994h], 1000h
 * 0000000140AFEB49: jnz     short loc_140AFEB96
 * 0000000140AFEB4B: rdtsc
 * 0000000140AFEB4D: shl     rdx, 20h
 * 0000000140AFEB51: or      rax, rdx
 * 0000000140AFEB54: mov     rcx, rax
 * 0000000140AFEB57: ror     rax, 3
 * 0000000140AFEB5B: xor     rcx, rax
 * 0000000140AFEB5E: mov     rax, 7010008004002001h
 * 0000000140AFEB68: mul     rcx
 * 0000000140AFEB6B: mov     rcx, rdx
 * 0000000140AFEB6E: mov     [rbp+0A70h+var_650], rdx
 * 0000000140AFEB75: xor     rcx, rax
 * 0000000140AFEB78: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 0000000140AFEB82: mul     rcx
 * 0000000140AFEB85: shr     rdx, 2
 * 0000000140AFEB89: lea     rax, [rdx+rdx*4]
 * 0000000140AFEB8D: sub     rcx, rax
 * 0000000140AFEB90: mov     [rsi+824h], ecx
 * 0000000140AFEB96: mov     r12d, 1
 * 0000000140AFEB9C: mov     ecx, [rsi+824h]
 * 0000000140AFEBA2: xor     eax, eax
 * 0000000140AFEBA4: test    ecx, ecx
 * 0000000140AFEBA6: jz      loc_140B010C7
 * 0000000140AFEBAC: sub     ecx, 1
 * 0000000140AFEBAF: jz      loc_140B00F59
 * 0000000140AFEBB5: sub     ecx, 1
 * 0000000140AFEBB8: jz      loc_140B00DB9
 * 0000000140AFEBBE: sub     ecx, 1
 * 0000000140AFEBC1: jz      loc_140AFEEF0
 * 0000000140AFEBC7: sub     ecx, 1
 * 0000000140AFEBCA: jz      loc_140AFED40
 * 0000000140AFEBD0: cmp     ecx, 1
 * 0000000140AFEBD3: jnz     loc_140B0123D
 * 0000000140AFEBD9: mov     rbx, r13
 * 0000000140AFEBDC: mov     [rbp+0A70h+arg_10], 0FFh
 * 0000000140AFEBE3: mov     r13d, eax
 * 0000000140AFEBE6: mov     r14d, eax
 * 0000000140AFEBE9: mov     r15d, eax
 * 0000000140AFEBEC: mov     [rbp+0A70h+var_8A8], rax
 * 0000000140AFEBF3: jmp     loc_140AFECFA
 * 0000000140AFEBF8: mov     rax, [rsi+208h]
 * 0000000140AFEBFF: lea     rdx, [rbp+0A70h+var_648]
 * 0000000140AFEC06: mov     rcx, [rbp+0A70h+var_9A0]
 * 0000000140AFEC0D: add     r13d, r12d
 * 0000000140AFEC10: call    KeGuardDispatchICall
 * 0000000140AFEC15: test    rax, rax
 * 0000000140AFEC18: jnz     loc_140AFECFA
 * 0000000140AFEC1E: test    dword ptr [rsi+990h], 40000000h
 * 0000000140AFEC28: jz      short loc_140AFEC71
 * 0000000140AFEC2A: mov     rcx, [rsi+0A80h]
 * 0000000140AFEC31: lea     edx, [rax+30h]
 * 0000000140AFEC34: lea     r8d, [rax+6]
 * 0000000140AFEC38: mov     rax, [rbx]
 * 0000000140AFEC3B: add     edx, 0FFFFFFF8h
 * 0000000140AFEC3E: mov     [rcx], rax
 * 0000000140AFEC41: add     rbx, 8
 * 0000000140AFEC45: add     rcx, 8
 * 0000000140AFEC49: sub     r8, r12
 * 0000000140AFEC4C: jnz     short loc_140AFEC38
 * 0000000140AFEC4E: test    edx, edx
 * 0000000140AFEC50: jz      short loc_140AFEC6A
 * 0000000140AFEC52: mov     esi, 0FFFFFFFFh
 * 0000000140AFEC57: mov     al, [rbx]
 * 0000000140AFEC59: add     rbx, r12
 * 0000000140AFEC5C: mov     [rcx], al
 * 0000000140AFEC5E: add     rcx, r12
 * 0000000140AFEC61: add     edx, esi
 * 0000000140AFEC63: jnz     short loc_140AFEC57
 * 0000000140AFEC65: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFEC6A: mov     rbx, [rsi+0A80h]
 * 0000000140AFEC71: mov     rax, [rbp+0A70h+var_9A0]
 * 0000000140AFEC78: mov     [rbx+18h], rax
 * 0000000140AFEC7C: mov     rax, [rsi+588h]
 * 0000000140AFEC83: mov     [rax], rbx
 * 0000000140AFEC86: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140AFEC8D: mov     rax, [rbp+0A70h+var_9A0]
 * 0000000140AFEC94: mov     rcx, [rsi+588h]
 * 0000000140AFEC9B: mov     [rcx+8], rax
 * 0000000140AFEC9F: xor     eax, eax
 * 0000000140AFECA1: mov     dword ptr [rcx+14h], 1000h
 * 0000000140AFECA8: cmp     [rsi+8F8h], eax
 * 0000000140AFECAE: jnz     short loc_140AFECFA
 * 0000000140AFECB0: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFECBA: xor     edx, edx
 * 0000000140AFECBC: add     rax, rsi
 * 0000000140AFECBF: mov     rcx, rsi
 * 0000000140AFECC2: mov     [rsi+900h], rax
 * 0000000140AFECC9: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFECD3: add     rax, rbx
 * 0000000140AFECD6: mov     [rsi+908h], rax
 * 0000000140AFECDD: movsxd  rax, dword ptr [rbx]
 * 0000000140AFECE0: mov     [rsi+910h], rax
 * 0000000140AFECE7: mov     [rsi+918h], r15
 * 0000000140AFECEE: mov     [rsi+8F8h], r12d
 * 0000000140AFECF5: call    $$ba
 * 0000000140AFECFA: mov     rax, [rsi+430h]
 * 0000000140AFED01: lea     r9, [rbp+0A70h+var_9A0]
 * 0000000140AFED08: lea     r8, [rbp+0A70h+arg_10]
 * 0000000140AFED0F: mov     ecx, r14d
 * 0000000140AFED12: lea     rdx, [rbp+0A70h+var_8A8]
 * 0000000140AFED19: call    KeGuardDispatchICall
 * 0000000140AFED1E: test    eax, eax
 * 0000000140AFED20: jnz     loc_140AFEBF8
 * 0000000140AFED26: add     r14d, r12d
 * 0000000140AFED29: add     r15, r12
 * 0000000140AFED2C: mov     eax, 0
 * 0000000140AFED31: cmp     r14d, 3
 * 0000000140AFED35: jb      loc_140AFEBEC
 * 0000000140AFED3B: jmp     loc_140B01206
 * 0000000140AFED40: mov     r13d, eax
 * 0000000140AFED43: mov     [rbp+0A70h+var_A8C], eax
 * 0000000140AFED46: mov     rax, [rsi+318h]
 * 0000000140AFED4D: xor     ecx, ecx
 * 0000000140AFED4F: call    KeGuardDispatchICall
 * 0000000140AFED54: mov     r15, rax
 * 0000000140AFED57: xor     eax, eax
 * 0000000140AFED59: test    r15, r15
 * 0000000140AFED5C: jz      loc_140B00DAE
 * 0000000140AFED62: mov     rdi, [rsp+0B70h+var_B20]
 * 0000000140AFED67: mov     [rbp+0A70h+var_8A0], rax
 * 0000000140AFED6E: lea     rdx, [rbp+0A70h+var_8A0]
 * 0000000140AFED75: mov     rax, [rsi+310h]
 * 0000000140AFED7C: mov     rcx, r15
 * 0000000140AFED7F: mov     rbx, rdi
 * 0000000140AFED82: call    KeGuardDispatchICall
 * 0000000140AFED87: mov     r14, rax
 * 0000000140AFED8A: test    rax, rax
 * 0000000140AFED8D: jz      loc_140AFEEBC
 * 0000000140AFED93: mov     edi, 6
 * 0000000140AFED98: xor     r13d, r13d
 * 0000000140AFED9B: mov     rax, [rsi+208h]
 * 0000000140AFEDA2: lea     rdx, [rbp+0A70h+var_640]
 * 0000000140AFEDA9: mov     rcx, r14
 * 0000000140AFEDAC: inc     r12d
 * 0000000140AFEDAF: call    KeGuardDispatchICall
 * 0000000140AFEDB4: test    rax, rax
 * 0000000140AFEDB7: jnz     loc_140AFEE91
 * 0000000140AFEDBD: test    dword ptr [rsi+990h], 40000000h
 * 0000000140AFEDC7: lea     r9d, [rax+1]
 * 0000000140AFEDCB: jz      short loc_140AFEE13
 * 0000000140AFEDCD: mov     rcx, [rsi+0A80h]
 * 0000000140AFEDD4: lea     edx, [rax+30h]
 * 0000000140AFEDD7: mov     r8, rdi
 * 0000000140AFEDDA: mov     rax, [rbx]
 * 0000000140AFEDDD: add     edx, 0FFFFFFF8h
 * 0000000140AFEDE0: mov     [rcx], rax
 * 0000000140AFEDE3: add     rbx, 8
 * 0000000140AFEDE7: add     rcx, 8
 * 0000000140AFEDEB: sub     r8, r9
 * 0000000140AFEDEE: jnz     short loc_140AFEDDA
 * 0000000140AFEDF0: test    edx, edx
 * 0000000140AFEDF2: jz      short loc_140AFEE0C
 * 0000000140AFEDF4: mov     esi, 0FFFFFFFFh
 * 0000000140AFEDF9: mov     al, [rbx]
 * 0000000140AFEDFB: add     rbx, r9
 * 0000000140AFEDFE: mov     [rcx], al
 * 0000000140AFEE00: add     rcx, r9
 * 0000000140AFEE03: add     edx, esi
 * 0000000140AFEE05: jnz     short loc_140AFEDF9
 * 0000000140AFEE07: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFEE0C: mov     rbx, [rsi+0A80h]
 * 0000000140AFEE13: mov     [rbx+18h], r14
 * 0000000140AFEE17: mov     [rbx+20h], r15
 * 0000000140AFEE1B: mov     rax, [rsi+588h]
 * 0000000140AFEE22: mov     [rax], rbx
 * 0000000140AFEE25: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140AFEE2C: mov     rax, [rsi+588h]
 * 0000000140AFEE33: mov     [rax+8], r14
 * 0000000140AFEE37: mov     dword ptr [rax+14h], 1000h
 * 0000000140AFEE3E: cmp     [rsi+8F8h], r13d
 * 0000000140AFEE45: jnz     short loc_140AFEE91
 * 0000000140AFEE47: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFEE51: xor     edx, edx
 * 0000000140AFEE53: add     rax, rsi
 * 0000000140AFEE56: mov     rcx, rsi
 * 0000000140AFEE59: mov     [rsi+900h], rax
 * 0000000140AFEE60: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFEE6A: add     rax, rbx
 * 0000000140AFEE6D: mov     [rsi+908h], rax
 * 0000000140AFEE74: movsxd  rax, dword ptr [rbx]
 * 0000000140AFEE77: mov     [rsi+910h], rax
 * 0000000140AFEE7E: mov     [rsi+918h], rdi
 * 0000000140AFEE85: mov     [rsi+8F8h], r9d
 * 0000000140AFEE8C: call    $$ba
 * 0000000140AFEE91: mov     rax, [rsi+310h]
 * 0000000140AFEE98: lea     rdx, [rbp+0A70h+var_8A0]
 * 0000000140AFEE9F: mov     rcx, r15
 * 0000000140AFEEA2: call    KeGuardDispatchICall
 * 0000000140AFEEA7: mov     r14, rax
 * 0000000140AFEEAA: test    rax, rax
 * 0000000140AFEEAD: jnz     loc_140AFED9B
 * 0000000140AFEEB3: mov     r13d, [rbp+0A70h+var_A8C]
 * 0000000140AFEEB7: mov     rdi, [rsp+0B70h+var_B20]
 * 0000000140AFEEBC: mov     rax, [rsi+318h]
 * 0000000140AFEEC3: add     r13d, r12d
 * 0000000140AFEEC6: mov     rcx, r15
 * 0000000140AFEEC9: mov     [rbp+0A70h+var_A8C], r13d
 * 0000000140AFEECD: call    KeGuardDispatchICall
 * 0000000140AFEED2: mov     r15, rax
 * 0000000140AFEED5: xor     eax, eax
 * 0000000140AFEED7: lea     r12d, [rax+1]
 * 0000000140AFEEDB: test    r15, r15
 * 0000000140AFEEDE: jnz     loc_140AFED67
 * 0000000140AFEEE4: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFEEEB: jmp     loc_140B00DAE
 * 0000000140AFEEF0: mov     r13d, eax
 * 0000000140AFEEF3: mov     rax, [rsi+4E8h]
 * 0000000140AFEEFA: mov     [rbp+0A70h+var_A30], rsi
 * 0000000140AFEEFE: mov     rbx, [rax]
 * 0000000140AFEF01: mov     [rbp+0A70h+var_AB8], rbx
 * 0000000140AFEF05: test    [rsi+990h], r11d
 * 0000000140AFEF0C: jz      short loc_140AFEF15
 * 0000000140AFEF0E: xor     eax, eax
 * 0000000140AFEF10: jmp     loc_140B0120D
 * 0000000140AFEF15: mov     rcx, [rsp+0B70h+var_B20]
 * 0000000140AFEF1A: xor     edx, edx
 * 0000000140AFEF1C: mov     rax, [rcx+28h]
 * 0000000140AFEF20: test    rax, rax
 * 0000000140AFEF23: jz      loc_140AFEFB9
 * 0000000140AFEF29: mov     r13d, r12d
 * 0000000140AFEF2C: cmp     rbx, rax
 * 0000000140AFEF2F: jz      loc_140B00DAE
 * 0000000140AFEF35: mov     [rcx+18h], rbx
 * 0000000140AFEF39: mov     rax, [rsi+588h]
 * 0000000140AFEF40: mov     [rax], rcx
 * 0000000140AFEF43: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140AFEF4A: mov     rax, [rsi+588h]
 * 0000000140AFEF51: mov     [rax+8], rbx
 * 0000000140AFEF55: mov     dword ptr [rax+14h], 1000h
 * 0000000140AFEF5C: cmp     [rsi+8F8h], edx
 * 0000000140AFEF62: jnz     loc_140B00DAE
 * 0000000140AFEF68: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFEF72: add     rax, rsi
 * 0000000140AFEF75: mov     [rsi+900h], rax
 * 0000000140AFEF7C: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFEF86: add     rax, rcx
 * 0000000140AFEF89: mov     [rsi+908h], rax
 * 0000000140AFEF90: movsxd  rax, dword ptr [rcx]
 * 0000000140AFEF93: mov     rcx, rsi
 * 0000000140AFEF96: mov     [rsi+910h], rax
 * 0000000140AFEF9D: mov     qword ptr [rsi+918h], 5
 * 0000000140AFEFA8: mov     [rsi+8F8h], r12d
 * 0000000140AFEFAF: call    $$ba
 * 0000000140AFEFB4: jmp     loc_140B00DAE
 * 0000000140AFEFB9: test    rbx, rbx
 * 0000000140AFEFBC: jz      loc_140B00DAE
 * 0000000140AFEFC2: mov     rax, [rsi+200h]
 * 0000000140AFEFC9: lea     rdx, [rbp+0A70h+var_210]
 * 0000000140AFEFD0: mov     rcx, rbx
 * 0000000140AFEFD3: mov     [rbp+0A70h+var_A8C], r12d
 * 0000000140AFEFD7: mov     [rbp+0A70h+var_A48], rsi
 * 0000000140AFEFDB: call    KeGuardDispatchICall
 * 0000000140AFEFE0: mov     r12, [rbp+0A70h+BugCheckParameter2]
 * 0000000140AFEFE7: mov     r13, rax
 * 0000000140AFEFEA: mov     r15d, [rbp+0A70h+var_1FC]
 * 0000000140AFEFF1: mov     [rbp+0A70h+var_A98], rax
 * 0000000140AFEFF5: xor     eax, eax
 * 0000000140AFEFF7: mov     [rbp+0A70h+var_A90], r15d
 * 0000000140AFEFFB: mov     [rbp+0A70h+var_AF0], r12
 * 0000000140AFEFFF: test    r12, r12
 * 0000000140AFF002: jnz     short loc_140AFF01E
 * 0000000140AFF004: test    dword ptr [rsi+990h], 200000h
 * 0000000140AFF00E: jz      loc_140B0E0B7
 * 0000000140AFF014: mov     ecx, 0C000007Bh
 * 0000000140AFF019: jmp     loc_140B00D72
 * 0000000140AFF01E: mov     ecx, 4
 * 0000000140AFF023: mov     [rbp+0A70h+var_9D8], rax
 * 0000000140AFF02A: lea     rax, [rbp+0A70h+var_9D0]
 * 0000000140AFF031: xor     edx, edx
 * 0000000140AFF033: mov     r9d, 0FFFFFFFFh
 * 0000000140AFF039: lea     r8d, [rcx-3]
 * 0000000140AFF03D: mov     [rax], dl
 * 0000000140AFF03F: add     rax, r8
 * 0000000140AFF042: add     ecx, r9d
 * 0000000140AFF045: jnz     short loc_140AFF03D
 * 0000000140AFF047: xor     eax, eax
 * 0000000140AFF049: mov     r14d, eax
 * 0000000140AFF04C: cmp     [rsi+80Ch], eax
 * 0000000140AFF052: jbe     loc_140AFF234
 * 0000000140AFF058: mov     edx, [rbp+0A70h+var_9D0]
 * 0000000140AFF05E: mov     r9d, dword ptr [rbp+0A70h+var_9D8+4]
 * 0000000140AFF065: mov     r10d, dword ptr [rbp+0A70h+var_9D8]
 * 0000000140AFF06C: mov     rax, [rsi+0A78h]
 * 0000000140AFF073: mov     rbx, rsi
 * 0000000140AFF076: test    rax, rax
 * 0000000140AFF079: cmovnz  rbx, rax
 * 0000000140AFF07D: xor     eax, eax
 * 0000000140AFF07F: mov     r11d, eax
 * 0000000140AFF082: mov     r8d, [rbx+808h]
 * 0000000140AFF089: add     r8, rbx
 * 0000000140AFF08C: test    r10d, r10d
 * 0000000140AFF08F: jz      short loc_140AFF09F
 * 0000000140AFF091: cmp     r9d, r14d
 * 0000000140AFF094: ja      short loc_140AFF09F
 * 0000000140AFF096: mov     r8d, edx
 * 0000000140AFF099: mov     r11d, r9d
 * 0000000140AFF09C: add     r8, rbx
 * 0000000140AFF09F: cmp     r11d, r14d
 * 0000000140AFF0A2: jz      loc_140AFF1C1
 * 0000000140AFF0A8: mov     r9d, r14d
 * 0000000140AFF0AB: mov     rsi, 0AAAAAAAAAAAAAAABh
 * 0000000140AFF0B5: sub     r9d, r11d
 * 0000000140AFF0B8: mov     r13d, 2
 * 0000000140AFF0BE: mov     r11d, r14d
 * 0000000140AFF0C1: mov     ecx, [r8]
 * 0000000140AFF0C4: cmp     ecx, 1Ch
 * 0000000140AFF0C7: jg      short loc_140AFF11C
 * 0000000140AFF0C9: jz      short loc_140AFF115
 * 0000000140AFF0CB: sub     ecx, 1
 * 0000000140AFF0CE: jz      short loc_140AFF137
 * 0000000140AFF0D0: sub     ecx, 6
 * 0000000140AFF0D3: jz      short loc_140AFF103
 * 0000000140AFF0D5: sub     ecx, 1
 * 0000000140AFF0D8: jz      short loc_140AFF0F3
 * 0000000140AFF0DA: sub     ecx, r13d
 * 0000000140AFF0DD: jz      short loc_140AFF0E4
 * 0000000140AFF0DF: cmp     ecx, r13d
 * 0000000140AFF0E2: jmp     short loc_140AFF12E
 * 0000000140AFF0E4: mov     eax, [r8+1Ch]
 * 0000000140AFF0E8: add     eax, 3
 * 0000000140AFF0EB: shl     eax, 4
 * 0000000140AFF0EE: jmp     loc_140AFF1A1
 * 0000000140AFF0F3: movzx   eax, word ptr [r8+20h]
 * 0000000140AFF0F8: add     eax, 37h ; '7'
 * 0000000140AFF0FB: and     eax, 0FFFFFFF8h
 * 0000000140AFF0FE: jmp     loc_140AFF1A1
 * 0000000140AFF103: mov     eax, [r8+18h]
 * 0000000140AFF107: add     eax, r13d
 * 0000000140AFF10A: lea     eax, [rax+rax*2]
 * 0000000140AFF10D: shl     eax, 3
 * 0000000140AFF110: jmp     loc_140AFF1A1
 * 0000000140AFF115: movzx   eax, word ptr [r8+28h]
 * 0000000140AFF11A: jmp     short loc_140AFF0F8
 * 0000000140AFF11C: sub     ecx, 1Eh
 * 0000000140AFF11F: jz      short loc_140AFF176
 * 0000000140AFF121: sub     ecx, 3
 * 0000000140AFF124: jz      short loc_140AFF14E
 * 0000000140AFF126: sub     ecx, 1
 * 0000000140AFF129: jz      short loc_140AFF14E
 * 0000000140AFF12B: cmp     ecx, 9
 * 0000000140AFF12E: jz      short loc_140AFF137
 * 0000000140AFF130: mov     eax, 30h ; '0'
 * 0000000140AFF135: jmp     short loc_140AFF1A1
 * 0000000140AFF137: mov     ecx, [r8+10h]
 * 0000000140AFF13B: mov     rax, rsi
 * 0000000140AFF13E: mul     rcx
 * 0000000140AFF141: shr     rdx, 3
 * 0000000140AFF145: lea     eax, ds:30h[rdx*4]
 * 0000000140AFF14C: jmp     short loc_140AFF1A1
 * 0000000140AFF14E: mov     ecx, [r8+20h]
 * 0000000140AFF152: mov     edx, [r8+28h]
 * 0000000140AFF156: and     ecx, 0FFFh
 * 0000000140AFF15C: add     rdx, 0FFFh
 * 0000000140AFF163: add     rdx, rcx
 * 0000000140AFF166: shr     rdx, 0Ch
 * 0000000140AFF16A: lea     eax, [rdx+rdx*4]
 * 0000000140AFF16D: lea     eax, ds:30h[rax*4]
 * 0000000140AFF174: jmp     short loc_140AFF1A1
 * 0000000140AFF176: mov     eax, [r8+24h]
 * 0000000140AFF17A: lea     ecx, [rax-1]
 * 0000000140AFF17D: neg     eax
 * 0000000140AFF17F: sbb     eax, eax
 * 0000000140AFF181: and     ecx, eax
 * 0000000140AFF183: mov     rax, rsi
 * 0000000140AFF186: mul     rcx
 * 0000000140AFF189: movzx   eax, word ptr [r8+28h]
 * 0000000140AFF18E: shr     rdx, 3
 * 0000000140AFF192: add     edx, 7
 * 0000000140AFF195: and     edx, 0FFFFFFF8h
 * 0000000140AFF198: add     eax, r13d
 * 0000000140AFF19B: lea     eax, [rax+rax*2]
 * 0000000140AFF19E: lea     eax, [rdx+rax*8]
 * 0000000140AFF1A1: add     r8, rax
 * 0000000140AFF1A4: mov     eax, 1
 * 0000000140AFF1A9: sub     r9, rax
 * 0000000140AFF1AC: jnz     loc_140AFF0C1
 * 0000000140AFF1B2: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFF1B7: mov     r12, [rbp+0A70h+var_AF0]
 * 0000000140AFF1BB: mov     r13, [rbp+0A70h+var_A98]
 * 0000000140AFF1BF: jmp     short loc_140AFF1C6
 * 0000000140AFF1C1: mov     eax, 1
 * 0000000140AFF1C6: mov     edx, r8d
 * 0000000140AFF1C9: mov     dword ptr [rbp+0A70h+var_9D8], eax
 * 0000000140AFF1CF: sub     edx, ebx
 * 0000000140AFF1D1: mov     dword ptr [rbp+0A70h+var_9D8+4], r11d
 * 0000000140AFF1D8: mov     [rbp+0A70h+var_9D0], edx
 * 0000000140AFF1DE: mov     r10d, eax
 * 0000000140AFF1E1: movsxd  rcx, dword ptr [r8]
 * 0000000140AFF1E4: mov     r9d, r11d
 * 0000000140AFF1E7: cmp     ecx, 2Bh ; '+'
 * 0000000140AFF1EA: ja      short loc_140AFF20C
 * 0000000140AFF1EC: mov     r11, 80000001002h
 * 0000000140AFF1F6: bt      r11, rcx
 * 0000000140AFF1FA: jnb     short loc_140AFF20C
 * 0000000140AFF1FC: cmp     [r8+8], r13
 * 0000000140AFF200: jnz     short loc_140AFF20C
 * 0000000140AFF202: cmp     [r8+10h], r15d
 * 0000000140AFF206: jz      loc_140AFF2DB
 * 0000000140AFF20C: lea     eax, [rcx-21h]
 * 0000000140AFF20F: mov     ecx, 1
 * 0000000140AFF214: cmp     eax, ecx
 * 0000000140AFF216: ja      short loc_140AFF222
 * 0000000140AFF218: cmp     [r8+20h], r12
 * 0000000140AFF21C: jz      loc_140AFF2DB
 * 0000000140AFF222: add     r14d, ecx
 * 0000000140AFF225: cmp     r14d, [rsi+80Ch]
 * 0000000140AFF22C: jb      loc_140AFF06C
 * 0000000140AFF232: xor     eax, eax
 * 0000000140AFF234: mov     [rbp+0A70h+var_A38], rax
 * 0000000140AFF238: mov     rax, [rsi+2A8h]
 * 0000000140AFF23F: mov     rcx, [rbp+0A70h+var_AB8]
 * 0000000140AFF243: call    KeGuardDispatchICall
 * 0000000140AFF248: mov     rbx, [rsi+528h]
 * 0000000140AFF24F: mov     r14d, eax
 * 0000000140AFF252: mov     [rbp+0A70h+var_ACC], eax
 * 0000000140AFF255: mov     eax, [rbp+0A70h+var_A90]
 * 0000000140AFF258: mov     dword ptr [rbp+0A70h+var_AD8], eax
 * 0000000140AFF25B: cli
 * 0000000140AFF25C: mov     rcx, gs:20h
 * 0000000140AFF265: mov     rax, [rsi+650h]
 * 0000000140AFF26C: mov     rcx, [rcx+rax]
 * 0000000140AFF270: sti
 * 0000000140AFF271: mov     rax, [rsi+168h]
 * 0000000140AFF278: call    KeGuardDispatchICall
 * 0000000140AFF27D: mov     rcx, [rsi+530h]
 * 0000000140AFF284: mov     r13d, 1
 * 0000000140AFF28A: mov     rax, [rsi+0E8h]
 * 0000000140AFF291: mov     dl, r13b
 * 0000000140AFF294: call    KeGuardDispatchICall
 * 0000000140AFF299: mov     r8, [rbx]
 * 0000000140AFF29C: cmp     r8, rbx
 * 0000000140AFF29F: jz      short loc_140AFF301
 * 0000000140AFF2A1: mov     r9, [rsi+750h]
 * 0000000140AFF2A8: mov     r10, [rsi+758h]
 * 0000000140AFF2AF: mov     r11, [rsi+760h]
 * 0000000140AFF2B6: mov     rcx, r8
 * 0000000140AFF2B9: sub     rcx, r9
 * 0000000140AFF2BC: mov     rax, [r10+rcx]
 * 0000000140AFF2C0: mov     edx, [r11+rcx]
 * 0000000140AFF2C4: add     rdx, rax
 * 0000000140AFF2C7: cmp     r12, rax
 * 0000000140AFF2CA: jb      short loc_140AFF2D1
 * 0000000140AFF2CC: cmp     r12, rdx
 * 0000000140AFF2CF: jb      short loc_140AFF2F2
 * 0000000140AFF2D1: mov     r8, [r8]
 * 0000000140AFF2D4: cmp     r8, rbx
 * 0000000140AFF2D7: jz      short loc_140AFF301
 * 0000000140AFF2D9: jmp     short loc_140AFF2B6
 * 0000000140AFF2DB: mov     [rbp+0A70h+var_A38], r8
 * 0000000140AFF2DF: test    r8, r8
 * 0000000140AFF2E2: jz      loc_140AFF238
 * 0000000140AFF2E8: mov     ecx, 0C000010Eh
 * 0000000140AFF2ED: jmp     loc_140B00D6E
 * 0000000140AFF2F2: mov     rax, [rsi+0D8h]
 * 0000000140AFF2F9: mov     edx, r13d
 * 0000000140AFF2FC: call    KeGuardDispatchICall
 * 0000000140AFF301: mov     rcx, [rsi+530h]
 * 0000000140AFF308: mov     rax, [rsi+118h]
 * 0000000140AFF30F: call    KeGuardDispatchICall
 * 0000000140AFF314: mov     rax, [rsi+170h]
 * 0000000140AFF31B: call    KeGuardDispatchICall
 * 0000000140AFF320: test    dword ptr [rsi+990h], 40000000h
 * 0000000140AFF32A: jz      short loc_140AFF343
 * 0000000140AFF32C: mov     r8d, 9
 * 0000000140AFF332: lea     rcx, [rbp+0A70h+var_A30]
 * 0000000140AFF336: mov     rdx, r12
 * 0000000140AFF339: call    sub_140B19070
 * 0000000140AFF33E: jmp     loc_140B00D6C
 * 0000000140AFF343: xor     eax, eax
 * 0000000140AFF345: lea     r9, [rbp+0A70h+var_A90]
 * 0000000140AFF349: mov     [rbp+0A70h+var_770], rax
 * 0000000140AFF350: xor     r8d, r8d
 * 0000000140AFF353: mov     [rbp+0A70h+var_900], eax
 * 0000000140AFF359: mov     dl, r13b
 * 0000000140AFF35C: mov     rax, [rsi+1F0h]
 * 0000000140AFF363: mov     rcx, r12
 * 0000000140AFF366: call    KeGuardDispatchICall
 * 0000000140AFF36B: mov     rdx, rax
 * 0000000140AFF36E: lea     r9, [rbp+0A70h+var_A90]
 * 0000000140AFF372: neg     rax
 * 0000000140AFF375: mov     [rbp+0A70h+var_788], rdx
 * 0000000140AFF37C: mov     r8d, 0Ch
 * 0000000140AFF382: mov     dl, r13b
 * 0000000140AFF385: sbb     ecx, ecx
 * 0000000140AFF387: and     ecx, [rbp+0A70h+var_A90]
 * 0000000140AFF38A: mov     [rbp+0A70h+var_A90], ecx
 * 0000000140AFF38D: mov     rax, [rsi+1F0h]
 * 0000000140AFF394: mov     [rbp+0A70h+var_90C], ecx
 * 0000000140AFF39A: mov     rcx, r12
 * 0000000140AFF39D: call    KeGuardDispatchICall
 * 0000000140AFF3A2: mov     rdx, rax
 * 0000000140AFF3A5: mov     [rbp+0A70h+var_AB0], rax
 * 0000000140AFF3A9: neg     rax
 * 0000000140AFF3AC: mov     [rbp+0A70h+var_780], rdx
 * 0000000140AFF3B3: mov     r15d, 0Ah
 * 0000000140AFF3B9: lea     r9, [rbp+0A70h+var_A90]
 * 0000000140AFF3BD: sbb     ecx, ecx
 * 0000000140AFF3BF: mov     r8d, r15d
 * 0000000140AFF3C2: and     ecx, [rbp+0A70h+var_A90]
 * 0000000140AFF3C5: mov     dl, r13b
 * 0000000140AFF3C8: mov     [rbp+0A70h+var_A90], ecx
 * 0000000140AFF3CB: mov     rax, [rsi+1F0h]
 * 0000000140AFF3D2: mov     [rsp+0B70h+var_B00], ecx
 * 0000000140AFF3D6: mov     [rbp+0A70h+var_908], ecx
 * 0000000140AFF3DC: mov     rcx, r12
 * 0000000140AFF3DF: call    KeGuardDispatchICall
 * 0000000140AFF3E4: mov     rdx, rax
 * 0000000140AFF3E7: neg     rax
 * 0000000140AFF3EA: mov     [rbp+0A70h+var_778], rdx
 * 0000000140AFF3F1: sbb     ecx, ecx
 * 0000000140AFF3F3: and     ecx, [rbp+0A70h+var_A90]
 * 0000000140AFF3F6: mov     [rbp+0A70h+var_A90], ecx
 * 0000000140AFF3F9: mov     rax, [rsi+1F8h]
 * 0000000140AFF400: mov     [rbp+0A70h+var_904], ecx
 * 0000000140AFF406: mov     rcx, r12
 * 0000000140AFF409: call    KeGuardDispatchICall
 * 0000000140AFF40E: mov     rbx, rax
 * 0000000140AFF411: xor     eax, eax
 * 0000000140AFF413: test    rbx, rbx
 * 0000000140AFF416: jnz     short loc_140AFF47A
 * 0000000140AFF418: test    dword ptr [rsi+990h], 200000h
 * 0000000140AFF422: jz      loc_140B0E0E2
 * 0000000140AFF428: cmp     [rsi+8F8h], eax
 * 0000000140AFF42E: jnz     short loc_140AFF470
 * 0000000140AFF430: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFF43A: mov     rcx, rsi
 * 0000000140AFF43D: add     rax, rsi
 * 0000000140AFF440: mov     [rsi+900h], rax
 * 0000000140AFF447: xor     eax, eax
 * 0000000140AFF449: mov     [rsi+908h], rax
 * 0000000140AFF450: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140AFF45B: mov     [rsi+918h], r12
 * 0000000140AFF462: mov     [rsi+8F8h], r13d
 * 0000000140AFF469: xor     edx, edx
 * 0000000140AFF46B: call    $$ba
 * 0000000140AFF470: mov     ecx, 0C000007Bh
 * 0000000140AFF475: jmp     loc_140B00D6E
 * 0000000140AFF47A: mov     rax, [rsi+4A0h]
 * 0000000140AFF481: lea     rdx, [rbp+0A70h+var_808]
 * 0000000140AFF488: mov     rcx, r12
 * 0000000140AFF48B: call    KeGuardDispatchICall
 * 0000000140AFF490: mov     r8d, [rsi+924h]
 * 0000000140AFF497: mov     [rbp+0A70h+var_768], rax
 * 0000000140AFF49E: mov     eax, [rbp+0A70h+var_808]
 * 0000000140AFF4A4: mov     [rbp+0A70h+var_8FC], eax
 * 0000000140AFF4AA: mov     eax, [rbx+54h]
 * 0000000140AFF4AD: mov     [rbp+0A70h+var_910], eax
 * 0000000140AFF4B3: mov     eax, r14d
 * 0000000140AFF4B6: mov     r14d, [rsi+7E4h]
 * 0000000140AFF4BD: neg     eax
 * 0000000140AFF4BF: mov     [rbp+0A70h+var_790], r12
 * 0000000140AFF4C6: sbb     r9d, r9d
 * 0000000140AFF4C9: and     r9d, 0Bh
 * 0000000140AFF4CD: lea     eax, [r14+120h]
 * 0000000140AFF4D4: mov     dword ptr [rbp+0A70h+arg_8], r9d
 * 0000000140AFF4DB: cmp     eax, [rsi+0A1Ch]
 * 0000000140AFF4E1: jbe     loc_140AFF5DD
 * 0000000140AFF4E7: mov     edx, eax
 * 0000000140AFF4E9: mov     rcx, rsi
 * 0000000140AFF4EC: call    sub_140B12020
 * 0000000140AFF4F1: mov     r15, rax
 * 0000000140AFF4F4: mov     [rsp+0B70h+var_B18], rax
 * 0000000140AFF4F9: xor     eax, eax
 * 0000000140AFF4FB: test    r15, r15
 * 0000000140AFF4FE: jnz     short loc_140AFF50E
 * 0000000140AFF500: mov     [rbp+0A70h+var_A48], rax
 * 0000000140AFF504: mov     ecx, 0C000009Ah
 * 0000000140AFF509: jmp     loc_140B00D6E
 * 0000000140AFF50E: mov     ecx, [rsi+990h]
 * 0000000140AFF514: test    cl, 4
 * 0000000140AFF517: jnz     loc_140AFF5CC
 * 0000000140AFF51D: mov     eax, [rsi+7E4h]
 * 0000000140AFF523: and     ecx, 20000000h
 * 0000000140AFF529: mov     r9, [rsi+7C8h]
 * 0000000140AFF530: neg     ecx
 * 0000000140AFF532: mov     rcx, rsi
 * 0000000140AFF535: sbb     r8d, r8d
 * 0000000140AFF538: and     r8d, [rsi+924h]
 * 0000000140AFF53F: cmp     eax, 8
 * 0000000140AFF542: jb      short loc_140AFF55C
 * 0000000140AFF544: mov     edx, eax
 * 0000000140AFF546: shr     rdx, 3
 * 0000000140AFF54A: xor     r10d, r10d
 * 0000000140AFF54D: mov     [rcx], r10
 * 0000000140AFF550: add     eax, 0FFFFFFF8h
 * 0000000140AFF553: add     rcx, 8
 * 0000000140AFF557: sub     rdx, r13
 * 0000000140AFF55A: jnz     short loc_140AFF54D
 * 0000000140AFF55C: xor     edx, edx
 * 0000000140AFF55E: test    eax, eax
 * 0000000140AFF560: jz      short loc_140AFF572
 * 0000000140AFF562: mov     r10d, 0FFFFFFFFh
 * 0000000140AFF568: mov     [rcx], dl
 * 0000000140AFF56A: add     rcx, r13
 * 0000000140AFF56D: add     eax, r10d
 * 0000000140AFF570: jnz     short loc_140AFF568
 * 0000000140AFF572: mov     ebx, [r15+924h]
 * 0000000140AFF579: mov     [r15+924h], r8d
 * 0000000140AFF580: cmp     r8d, 3
 * 0000000140AFF584: jz      short loc_140AFF5B6
 * 0000000140AFF586: test    dword ptr [r15+990h], 10000000h
 * 0000000140AFF591: jnz     short loc_140AFF5AD
 * 0000000140AFF593: test    r8d, r8d
 * 0000000140AFF596: jz      short loc_140AFF5AD
 * 0000000140AFF598: mov     rax, [r15+228h]
 * 0000000140AFF59F: lea     rcx, [r9-8]
 * 0000000140AFF5A3: mov     rdx, [rcx]
 * 0000000140AFF5A6: call    KeGuardDispatchICall
 * 0000000140AFF5AB: jmp     short loc_140AFF5C5
 * 0000000140AFF5AD: mov     rax, [r15+0F8h]
 * 0000000140AFF5B4: jmp     short loc_140AFF5BD
 * 0000000140AFF5B6: mov     rax, [r15+368h]
 * 0000000140AFF5BD: mov     rcx, r9
 * 0000000140AFF5C0: call    KeGuardDispatchICall
 * 0000000140AFF5C5: mov     [r15+924h], ebx
 * 0000000140AFF5CC: and     dword ptr [r15+990h], 0FFFFFFFBh
 * 0000000140AFF5D4: mov     r9d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140AFF5DB: jmp     short loc_140AFF5EB
 * 0000000140AFF5DD: mov     r15, rsi
 * 0000000140AFF5E0: mov     [rsp+0B70h+var_B18], rsi
 * 0000000140AFF5E5: mov     [rsi+7E4h], eax
 * 0000000140AFF5EB: mov     eax, 6
 * 0000000140AFF5F0: lea     r12, [r15+r14]
 * 0000000140AFF5F4: add     [r15+80Ch], eax
 * 0000000140AFF5FB: lea     rdi, [rbp+0A70h+var_790]
 * 0000000140AFF602: xor     r10d, r10d
 * 0000000140AFF605: mov     [rbp+0A70h+var_898], r12
 * 0000000140AFF60C: mov     [rbp+0A70h+var_A38], r12
 * 0000000140AFF610: lea     rsi, [rbp+0A70h+var_910]
 * 0000000140AFF617: mov     [rsp+0B70h+var_B08], rdi
 * 0000000140AFF61C: mov     rbx, r13
 * 0000000140AFF61F: mov     [rbp+0A70h+var_AE8], rax
 * 0000000140AFF623: mov     r13d, [rsi]
 * 0000000140AFF626: mov     rdx, rax
 * 0000000140AFF629: mov     r14, [rdi]
 * 0000000140AFF62C: mov     ecx, 30h ; '0'
 * 0000000140AFF631: mov     dword ptr [rbp+0A70h+var_AC8], r13d
 * 0000000140AFF635: mov     rax, r12
 * 0000000140AFF638: mov     [rax], r10
 * 0000000140AFF63B: add     ecx, 0FFFFFFF8h
 * 0000000140AFF63E: add     rax, 8
 * 0000000140AFF642: sub     rdx, rbx
 * 0000000140AFF645: jnz     short loc_140AFF638
 * 0000000140AFF647: test    ecx, ecx
 * 0000000140AFF649: jz      short loc_140AFF65A
 * 0000000140AFF64B: mov     edx, 0FFFFFFFFh
 * 0000000140AFF650: mov     [rax], r10b
 * 0000000140AFF653: add     rax, rbx
 * 0000000140AFF656: add     ecx, edx
 * 0000000140AFF658: jnz     short loc_140AFF650
 * 0000000140AFF65A: mov     [r12], r9d
 * 0000000140AFF65E: lea     rcx, [r14+r13]
 * 0000000140AFF662: mov     [r12+8], r14
 * 0000000140AFF667: mov     r9, r14
 * 0000000140AFF66A: mov     [r12+10h], r13d
 * 0000000140AFF66F: mov     rax, r14
 * 0000000140AFF672: add     [r15+828h], r13d
 * 0000000140AFF679: mov     r11d, [r15+814h]
 * 0000000140AFF680: mov     rbx, [r15+818h]
 * 0000000140AFF687: cmp     r14, rcx
 * 0000000140AFF68A: jnb     short loc_140AFF69C
 * 0000000140AFF68C: mov     edx, 40h ; '@'
 * 0000000140AFF691: prefetchnta byte ptr [rax]
 * 0000000140AFF694: add     rax, rdx
 * 0000000140AFF697: cmp     rax, rcx
 * 0000000140AFF69A: jb      short loc_140AFF691
 * 0000000140AFF69C: mov     r10d, r13d
 * 0000000140AFF69F: mov     r8, rbx
 * 0000000140AFF6A2: shr     r10d, 7
 * 0000000140AFF6A6: test    r10d, r10d
 * 0000000140AFF6A9: jz      short loc_140AFF720
 * 0000000140AFF6AB: mov     rdi, 7010008004002001h
 * 0000000140AFF6B5: mov     r15d, 1
 * 0000000140AFF6BB: mov     r13d, 0FFFFFFFFh
 * 0000000140AFF6C1: mov     eax, 8
 * 0000000140AFF6C6: xor     r8, [r9]
 * 0000000140AFF6C9: mov     ecx, r11d
 * 0000000140AFF6CC: rol     r8, cl
 * 0000000140AFF6CF: xor     r8, [r9+8]
 * 0000000140AFF6D3: add     r9, 10h
 * 0000000140AFF6D7: rol     r8, cl
 * 0000000140AFF6DA: sub     rax, r15
 * 0000000140AFF6DD: jnz     short loc_140AFF6C6
 * 0000000140AFF6DF: mov     rcx, r9
 * 0000000140AFF6E2: sub     rcx, r14
 * 0000000140AFF6E5: xor     rcx, rbx
 * 0000000140AFF6E8: mov     rax, rcx
 * 0000000140AFF6EB: rol     rax, 11h
 * 0000000140AFF6EF: xor     rcx, rax
 * 0000000140AFF6F2: mov     rax, rdi
 * 0000000140AFF6F5: mul     rcx
 * 0000000140AFF6F8: xor     r11d, edx
 * 0000000140AFF6FB: mov     [rbp+0A70h+var_638], rdx
 * 0000000140AFF702: xor     r11d, eax
 * 0000000140AFF705: and     r11d, 3Fh
 * 0000000140AFF709: cmovz   r11d, r15d
 * 0000000140AFF70D: add     r10d, r13d
 * 0000000140AFF710: jnz     short loc_140AFF6C1
 * 0000000140AFF712: mov     r15, [rsp+0B70h+var_B18]
 * 0000000140AFF717: mov     r13d, dword ptr [rbp+0A70h+var_AC8]
 * 0000000140AFF71B: mov     rdi, [rsp+0B70h+var_B08]
 * 0000000140AFF720: mov     edx, r13d
 * 0000000140AFF723: mov     ebx, 1
 * 0000000140AFF728: and     edx, 7Fh
 * 0000000140AFF72B: cmp     edx, 8
 * 0000000140AFF72E: jb      short loc_140AFF74B
 * 0000000140AFF730: mov     eax, edx
 * 0000000140AFF732: shr     rax, 3
 * 0000000140AFF736: xor     r8, [r9]
 * 0000000140AFF739: mov     ecx, r11d
 * 0000000140AFF73C: rol     r8, cl
 * 0000000140AFF73F: add     r9, 8
 * 0000000140AFF743: add     edx, 0FFFFFFF8h
 * 0000000140AFF746: sub     rax, rbx
 * 0000000140AFF749: jnz     short loc_140AFF736
 * 0000000140AFF74B: test    edx, edx
 * 0000000140AFF74D: jz      short loc_140AFF76F
 * 0000000140AFF74F: mov     r15d, 0FFFFFFFFh
 * 0000000140AFF755: movzx   eax, byte ptr [r9]
 * 0000000140AFF759: mov     ecx, r11d
 * 0000000140AFF75C: xor     r8, rax
 * 0000000140AFF75F: add     r9, rbx
 * 0000000140AFF762: rol     r8, cl
 * 0000000140AFF765: add     edx, r15d
 * 0000000140AFF768: jnz     short loc_140AFF755
 * 0000000140AFF76A: mov     r15, [rsp+0B70h+var_B18]
 * 0000000140AFF76F: mov     rax, r8
 * 0000000140AFF772: shr     rax, 1Fh
 * 0000000140AFF776: xor     r10d, r10d
 * 0000000140AFF779: jmp     short loc_140AFF782
 * 0000000140AFF77B: xor     r8d, eax
 * 0000000140AFF77E: shr     rax, 1Fh
 * 0000000140AFF782: test    rax, rax
 * 0000000140AFF785: jnz     short loc_140AFF77B
 * 0000000140AFF787: mov     r9d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140AFF78E: btr     r8d, 1Fh
 * 0000000140AFF793: mov     [r12+14h], r8d
 * 0000000140AFF798: add     rdi, 8
 * 0000000140AFF79C: add     [r15+828h], r13d
 * 0000000140AFF7A3: lea     r13d, [rax+4]
 * 0000000140AFF7A7: mov     r12, [rbp+0A70h+var_898]
 * 0000000140AFF7AE: lea     eax, [r13+2]
 * 0000000140AFF7B2: add     r12, 30h ; '0'
 * 0000000140AFF7B6: mov     [rsp+0B70h+var_B08], rdi
 * 0000000140AFF7BB: add     rsi, r13
 * 0000000140AFF7BE: mov     [rbp+0A70h+var_898], r12
 * 0000000140AFF7C5: sub     [rbp+0A70h+var_AE8], rbx
 * 0000000140AFF7C9: jnz     loc_140AFF623
 * 0000000140AFF7CF: mov     rbx, [rbp+0A70h+var_A38]
 * 0000000140AFF7D3: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFF7DA: mov     r12, [rbp+0A70h+var_AF0]
 * 0000000140AFF7DE: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFF7E3: mov     r14d, [rbp+0A70h+var_ACC]
 * 0000000140AFF7E7: mov     dword ptr [rbx], 2Ch ; ','
 * 0000000140AFF7ED: mov     [rbx+18h], r12
 * 0000000140AFF7F1: test    dword ptr [r15+990h], 10200000h
 * 0000000140AFF7FC: jnz     short loc_140AFF82C
 * 0000000140AFF7FE: test    r14d, r14d
 * 0000000140AFF801: jnz     short loc_140AFF831
 * 0000000140AFF803: test    dword ptr [r15+994h], 8000h
 * 0000000140AFF80E: jz      short loc_140AFF839
 * 0000000140AFF810: lea     eax, [r13-3]
 * 0000000140AFF814: mov     rdx, r12
 * 0000000140AFF817: or      [rbx+20h], eax
 * 0000000140AFF81A: mov     rcx, r15
 * 0000000140AFF81D: call    sub_140B130E0
 * 0000000140AFF822: test    eax, eax
 * 0000000140AFF824: jz      short loc_140AFF839
 * 0000000140AFF826: or      [rbx+20h], r13d
 * 0000000140AFF82A: jmp     short loc_140AFF839
 * 0000000140AFF82C: test    r14d, r14d
 * 0000000140AFF82F: jz      short loc_140AFF839
 * 0000000140AFF831: mov     eax, 2
 * 0000000140AFF836: or      [rbx+20h], eax
 * 0000000140AFF839: mov     r8d, dword ptr [rbp+0A70h+var_AD8]
 * 0000000140AFF83D: lea     rax, [rbp+0A70h+var_914]
 * 0000000140AFF844: mov     rdx, [rbp+0A70h+var_A98]
 * 0000000140AFF848: lea     rcx, [rbp+0A70h+var_A48]
 * 0000000140AFF84C: mov     [rsp+0B70h+var_B38], rax
 * 0000000140AFF851: mov     r9, r12
 * 0000000140AFF854: lea     rax, [rbp+0A70h+var_A18]
 * 0000000140AFF858: mov     [rbp+0A70h+var_A48], r15
 * 0000000140AFF85C: mov     [rsp+0B70h+var_B40], rax
 * 0000000140AFF861: mov     dword ptr [rsp+0B70h+var_B48], 9
 * 0000000140AFF869: mov     dword ptr [rsp+0B70h+BugCheckParameter4], r14d
 * 0000000140AFF86E: mov     [rbp+0A70h+var_A30], r15
 * 0000000140AFF872: call    sub_140B10838
 * 0000000140AFF877: mov     ecx, eax
 * 0000000140AFF879: test    eax, eax
 * 0000000140AFF87B: js      loc_140B00D6E
 * 0000000140AFF881: mov     r14, [rbp+0A70h+var_A48]
 * 0000000140AFF885: mov     rcx, [rbp+0A70h+var_A38]
 * 0000000140AFF889: mov     rax, r14
 * 0000000140AFF88C: mov     r9d, [rbp+0A70h+var_914]
 * 0000000140AFF893: sub     rax, r15
 * 0000000140AFF896: mov     r15d, [rbp+0A70h+var_A18]
 * 0000000140AFF89A: add     rcx, rax
 * 0000000140AFF89D: sub     r9d, [rbp+0A70h+var_A18]
 * 0000000140AFF8A1: add     r15, r12
 * 0000000140AFF8A4: mov     [rbp+0A70h+var_A38], rcx
 * 0000000140AFF8A8: xor     r8d, r8d
 * 0000000140AFF8AB: mov     [rbp+0A70h+var_A30], r14
 * 0000000140AFF8AF: lea     r13, [rcx+0C0h]
 * 0000000140AFF8B6: mov     ecx, 30h ; '0'
 * 0000000140AFF8BB: mov     [rsp+0B70h+var_B18], r13
 * 0000000140AFF8C0: mov     rax, r13
 * 0000000140AFF8C3: lea     edx, [rcx-2Ah]
 * 0000000140AFF8C6: lea     r10d, [rcx-2Fh]
 * 0000000140AFF8CA: mov     [rax], r8
 * 0000000140AFF8CD: add     ecx, 0FFFFFFF8h
 * 0000000140AFF8D0: add     rax, 8
 * 0000000140AFF8D4: sub     rdx, r10
 * 0000000140AFF8D7: jnz     short loc_140AFF8CA
 * 0000000140AFF8D9: mov     rdx, r10
 * 0000000140AFF8DC: test    ecx, ecx
 * 0000000140AFF8DE: jz      short loc_140AFF8F1
 * 0000000140AFF8E0: mov     r10d, 0FFFFFFFFh
 * 0000000140AFF8E6: mov     [rax], r8b
 * 0000000140AFF8E9: add     rax, rdx
 * 0000000140AFF8EC: add     ecx, r10d
 * 0000000140AFF8EF: jnz     short loc_140AFF8E6
 * 0000000140AFF8F1: mov     eax, dword ptr [rbp+0A70h+arg_8]
 * 0000000140AFF8F7: mov     r10, r15
 * 0000000140AFF8FA: mov     [r13+0], eax
 * 0000000140AFF8FE: mov     rax, r15
 * 0000000140AFF901: mov     [r13+8], r15
 * 0000000140AFF905: mov     [r13+10h], r9d
 * 0000000140AFF909: add     [r14+828h], r9d
 * 0000000140AFF910: mov     r11d, [r14+814h]
 * 0000000140AFF917: mov     r12, [r14+818h]
 * 0000000140AFF91E: mov     ecx, r9d
 * 0000000140AFF921: add     rcx, r15
 * 0000000140AFF924: cmp     r15, rcx
 * 0000000140AFF927: jnb     short loc_140AFF93A
 * 0000000140AFF929: mov     r8d, 40h ; '@'
 * 0000000140AFF92F: prefetchnta byte ptr [rax]
 * 0000000140AFF932: add     rax, r8
 * 0000000140AFF935: cmp     rax, rcx
 * 0000000140AFF938: jb      short loc_140AFF92F
 * 0000000140AFF93A: mov     ebx, r9d
 * 0000000140AFF93D: mov     r8, r12
 * 0000000140AFF940: shr     ebx, 7
 * 0000000140AFF943: test    ebx, ebx
 * 0000000140AFF945: jz      short loc_140AFF9BC
 * 0000000140AFF947: mov     edi, 0FFFFFFFFh
 * 0000000140AFF94C: mov     r13, 7010008004002001h
 * 0000000140AFF956: mov     eax, 8
 * 0000000140AFF95B: xor     r8, [r10]
 * 0000000140AFF95E: mov     ecx, r11d
 * 0000000140AFF961: rol     r8, cl
 * 0000000140AFF964: xor     r8, [r10+8]
 * 0000000140AFF968: add     r10, 10h
 * 0000000140AFF96C: rol     r8, cl
 * 0000000140AFF96F: sub     rax, rdx
 * 0000000140AFF972: jnz     short loc_140AFF95B
 * 0000000140AFF974: mov     rcx, r10
 * 0000000140AFF977: sub     rcx, r15
 * 0000000140AFF97A: xor     rcx, r12
 * 0000000140AFF97D: mov     rax, rcx
 * 0000000140AFF980: rol     rax, 11h
 * 0000000140AFF984: xor     rcx, rax
 * 0000000140AFF987: mov     rax, r13
 * 0000000140AFF98A: mul     rcx
 * 0000000140AFF98D: xor     r11d, edx
 * 0000000140AFF990: mov     [rbp+0A70h+var_630], rdx
 * 0000000140AFF997: xor     r11d, eax
 * 0000000140AFF99A: mov     edx, 1
 * 0000000140AFF99F: and     r11d, 3Fh
 * 0000000140AFF9A3: cmovz   r11d, edx
 * 0000000140AFF9A7: add     ebx, edi
 * 0000000140AFF9A9: jnz     short loc_140AFF956
 * 0000000140AFF9AB: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFF9B0: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFF9B7: mov     r13, [rsp+0B70h+var_B18]
 * 0000000140AFF9BC: and     r9d, 7Fh
 * 0000000140AFF9C0: cmp     r9d, 8
 * 0000000140AFF9C4: jb      short loc_140AFF9E3
 * 0000000140AFF9C6: mov     eax, r9d
 * 0000000140AFF9C9: shr     rax, 3
 * 0000000140AFF9CD: xor     r8, [r10]
 * 0000000140AFF9D0: mov     ecx, r11d
 * 0000000140AFF9D3: rol     r8, cl
 * 0000000140AFF9D6: add     r10, 8
 * 0000000140AFF9DA: add     r9d, 0FFFFFFF8h
 * 0000000140AFF9DE: sub     rax, rdx
 * 0000000140AFF9E1: jnz     short loc_140AFF9CD
 * 0000000140AFF9E3: test    r9d, r9d
 * 0000000140AFF9E6: jz      short loc_140AFFA07
 * 0000000140AFF9E8: mov     esi, 0FFFFFFFFh
 * 0000000140AFF9ED: movzx   eax, byte ptr [r10]
 * 0000000140AFF9F1: mov     ecx, r11d
 * 0000000140AFF9F4: xor     r8, rax
 * 0000000140AFF9F7: add     r10, rdx
 * 0000000140AFF9FA: rol     r8, cl
 * 0000000140AFF9FD: add     r9d, esi
 * 0000000140AFFA00: jnz     short loc_140AFF9ED
 * 0000000140AFFA02: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFFA07: mov     rax, r8
 * 0000000140AFFA0A: shr     rax, 1Fh
 * 0000000140AFFA0E: xor     ecx, ecx
 * 0000000140AFFA10: jmp     short loc_140AFFA19
 * 0000000140AFFA12: xor     r8d, eax
 * 0000000140AFFA15: shr     rax, 1Fh
 * 0000000140AFFA19: test    rax, rax
 * 0000000140AFFA1C: jnz     short loc_140AFFA12
 * 0000000140AFFA1E: mov     r15d, [rbp+0A70h+var_ACC]
 * 0000000140AFFA22: btr     r8d, 1Fh
 * 0000000140AFFA27: mov     [r13+14h], r8d
 * 0000000140AFFA2B: mov     rdx, [rbp+0A70h+var_A38]
 * 0000000140AFFA2F: mov     dword ptr [rdx+0F0h], 30h ; '0'
 * 0000000140AFFA39: cmp     [rdx+100h], eax
 * 0000000140AFFA3F: jz      short loc_140AFFA58
 * 0000000140AFFA41: mov     eax, [rdx+108h]
 * 0000000140AFFA47: test    r15d, r15d
 * 0000000140AFFA4A: setnz   cl
 * 0000000140AFFA4D: and     eax, 0FFFFFFFEh
 * 0000000140AFFA50: or      ecx, eax
 * 0000000140AFFA52: mov     [rdx+108h], ecx
 * 0000000140AFFA58: mov     rcx, [rbp+0A70h+var_A38]
 * 0000000140AFFA5C: mov     eax, r15d
 * 0000000140AFFA5F: add     rcx, 60h ; '`'
 * 0000000140AFFA63: mov     [rbp+0A70h+var_A30], r14
 * 0000000140AFFA67: neg     eax
 * 0000000140AFFA69: mov     [rbp+0A70h+var_998], rcx
 * 0000000140AFFA70: sbb     r12d, r12d
 * 0000000140AFFA73: neg     r12d
 * 0000000140AFFA76: add     r12d, 0Dh
 * 0000000140AFFA7A: test    rcx, rcx
 * 0000000140AFFA7D: jnz     loc_140AFFD23
 * 0000000140AFFA83: mov     r15d, [r14+7E4h]
 * 0000000140AFFA8A: mov     r8d, [r14+924h]
 * 0000000140AFFA91: lea     eax, [r15+30h]
 * 0000000140AFFA95: cmp     eax, [r14+0A1Ch]
 * 0000000140AFFA9C: jbe     loc_140AFFB82
 * 0000000140AFFAA2: mov     edx, eax
 * 0000000140AFFAA4: mov     rcx, r14
 * 0000000140AFFAA7: call    sub_140B12020
 * 0000000140AFFAAC: mov     rbx, rax
 * 0000000140AFFAAF: xor     eax, eax
 * 0000000140AFFAB1: test    rbx, rbx
 * 0000000140AFFAB4: jz      loc_140AFF500
 * 0000000140AFFABA: mov     ecx, [r14+990h]
 * 0000000140AFFAC1: test    cl, 4
 * 0000000140AFFAC4: jnz     loc_140AFFB79
 * 0000000140AFFACA: mov     eax, [r14+7E4h]
 * 0000000140AFFAD1: and     ecx, 20000000h
 * 0000000140AFFAD7: mov     r8, [r14+7C8h]
 * 0000000140AFFADE: neg     ecx
 * 0000000140AFFAE0: mov     r10d, 1
 * 0000000140AFFAE6: sbb     edx, edx
 * 0000000140AFFAE8: and     edx, [r14+924h]
 * 0000000140AFFAEF: cmp     eax, 8
 * 0000000140AFFAF2: jb      short loc_140AFFB0C
 * 0000000140AFFAF4: mov     ecx, eax
 * 0000000140AFFAF6: shr     rcx, 3
 * 0000000140AFFAFA: xor     r9d, r9d
 * 0000000140AFFAFD: mov     [r14], r9
 * 0000000140AFFB00: add     eax, 0FFFFFFF8h
 * 0000000140AFFB03: add     r14, 8
 * 0000000140AFFB07: sub     rcx, r10
 * 0000000140AFFB0A: jnz     short loc_140AFFAFD
 * 0000000140AFFB0C: xor     ecx, ecx
 * 0000000140AFFB0E: test    eax, eax
 * 0000000140AFFB10: jz      short loc_140AFFB23
 * 0000000140AFFB12: mov     r9d, 0FFFFFFFFh
 * 0000000140AFFB18: mov     [r14], cl
 * 0000000140AFFB1B: add     r14, r10
 * 0000000140AFFB1E: add     eax, r9d
 * 0000000140AFFB21: jnz     short loc_140AFFB18
 * 0000000140AFFB23: mov     r14d, [rbx+924h]
 * 0000000140AFFB2A: mov     [rbx+924h], edx
 * 0000000140AFFB30: cmp     edx, 3
 * 0000000140AFFB33: jz      short loc_140AFFB63
 * 0000000140AFFB35: test    dword ptr [rbx+990h], 10000000h
 * 0000000140AFFB3F: jnz     short loc_140AFFB5A
 * 0000000140AFFB41: test    edx, edx
 * 0000000140AFFB43: jz      short loc_140AFFB5A
 * 0000000140AFFB45: mov     rax, [rbx+228h]
 * 0000000140AFFB4C: lea     rcx, [r8-8]
 * 0000000140AFFB50: mov     rdx, [rcx]
 * 0000000140AFFB53: call    KeGuardDispatchICall
 * 0000000140AFFB58: jmp     short loc_140AFFB72
 * 0000000140AFFB5A: mov     rax, [rbx+0F8h]
 * 0000000140AFFB61: jmp     short loc_140AFFB6A
 * 0000000140AFFB63: mov     rax, [rbx+368h]
 * 0000000140AFFB6A: mov     rcx, r8
 * 0000000140AFFB6D: call    KeGuardDispatchICall
 * 0000000140AFFB72: mov     [rbx+924h], r14d
 * 0000000140AFFB79: and     dword ptr [rbx+990h], 0FFFFFFFBh
 * 0000000140AFFB80: jmp     short loc_140AFFB8C
 * 0000000140AFFB82: mov     rbx, r14
 * 0000000140AFFB85: mov     [r14+7E4h], eax
 * 0000000140AFFB8C: add     r15, rbx
 * 0000000140AFFB8F: mov     r9d, 1
 * 0000000140AFFB95: add     [rbx+80Ch], r9d
 * 0000000140AFFB9C: mov     rax, r15
 * 0000000140AFFB9F: mov     [rbp+0A70h+var_800], r15
 * 0000000140AFFBA6: xor     r8d, r8d
 * 0000000140AFFBA9: lea     ecx, [r9+2Fh]
 * 0000000140AFFBAD: lea     edx, [rcx-2Ah]
 * 0000000140AFFBB0: mov     [rax], r8
 * 0000000140AFFBB3: add     ecx, 0FFFFFFF8h
 * 0000000140AFFBB6: add     rax, 8
 * 0000000140AFFBBA: sub     rdx, r9
 * 0000000140AFFBBD: jnz     short loc_140AFFBB0
 * 0000000140AFFBBF: test    ecx, ecx
 * 0000000140AFFBC1: jz      short loc_140AFFBD2
 * 0000000140AFFBC3: mov     edx, 0FFFFFFFFh
 * 0000000140AFFBC8: mov     [rax], r8b
 * 0000000140AFFBCB: add     rax, r9
 * 0000000140AFFBCE: add     ecx, edx
 * 0000000140AFFBD0: jnz     short loc_140AFFBC8
 * 0000000140AFFBD2: mov     r13, [rbp+0A70h+var_AB0]
 * 0000000140AFFBD6: mov     [r15], r12d
 * 0000000140AFFBD9: mov     r9, r13
 * 0000000140AFFBDC: mov     r12d, [rsp+0B70h+var_B00]
 * 0000000140AFFBE1: mov     [r15+8], r13
 * 0000000140AFFBE5: mov     [r15+10h], r12d
 * 0000000140AFFBE9: add     [rbx+828h], r12d
 * 0000000140AFFBF0: mov     r11d, [rbx+814h]
 * 0000000140AFFBF7: lea     rcx, [r12+r13]
 * 0000000140AFFBFB: mov     r14, [rbx+818h]
 * 0000000140AFFC02: cmp     r13, rcx
 * 0000000140AFFC05: jnb     short loc_140AFFC1A
 * 0000000140AFFC07: mov     rax, r13
 * 0000000140AFFC0A: mov     edx, 40h ; '@'
 * 0000000140AFFC0F: prefetchnta byte ptr [rax]
 * 0000000140AFFC12: add     rax, rdx
 * 0000000140AFFC15: cmp     rax, rcx
 * 0000000140AFFC18: jb      short loc_140AFFC0F
 * 0000000140AFFC1A: mov     r10d, r12d
 * 0000000140AFFC1D: mov     r8, r14
 * 0000000140AFFC20: shr     r10d, 7
 * 0000000140AFFC24: test    r10d, r10d
 * 0000000140AFFC27: jz      short loc_140AFFCA0
 * 0000000140AFFC29: mov     esi, 1
 * 0000000140AFFC2E: mov     rdi, 7010008004002001h
 * 0000000140AFFC38: mov     r12d, 0FFFFFFFFh
 * 0000000140AFFC3E: mov     eax, 8
 * 0000000140AFFC43: xor     r8, [r9]
 * 0000000140AFFC46: mov     ecx, r11d
 * 0000000140AFFC49: rol     r8, cl
 * 0000000140AFFC4C: xor     r8, [r9+8]
 * 0000000140AFFC50: add     r9, 10h
 * 0000000140AFFC54: rol     r8, cl
 * 0000000140AFFC57: sub     rax, rsi
 * 0000000140AFFC5A: jnz     short loc_140AFFC43
 * 0000000140AFFC5C: mov     rcx, r9
 * 0000000140AFFC5F: sub     rcx, r13
 * 0000000140AFFC62: xor     rcx, r14
 * 0000000140AFFC65: mov     rax, rcx
 * 0000000140AFFC68: rol     rax, 11h
 * 0000000140AFFC6C: xor     rcx, rax
 * 0000000140AFFC6F: mov     rax, rdi
 * 0000000140AFFC72: mul     rcx
 * 0000000140AFFC75: xor     r11d, edx
 * 0000000140AFFC78: mov     [rbp+0A70h+var_628], rdx
 * 0000000140AFFC7F: xor     r11d, eax
 * 0000000140AFFC82: and     r11d, 3Fh
 * 0000000140AFFC86: cmovz   r11d, esi
 * 0000000140AFFC8A: add     r10d, r12d
 * 0000000140AFFC8D: jnz     short loc_140AFFC3E
 * 0000000140AFFC8F: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFFC94: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFFC9B: mov     r12d, [rsp+0B70h+var_B00]
 * 0000000140AFFCA0: mov     edx, r12d
 * 0000000140AFFCA3: mov     r10d, 1
 * 0000000140AFFCA9: and     edx, 7Fh
 * 0000000140AFFCAC: cmp     edx, 8
 * 0000000140AFFCAF: jb      short loc_140AFFCCC
 * 0000000140AFFCB1: mov     eax, edx
 * 0000000140AFFCB3: shr     rax, 3
 * 0000000140AFFCB7: xor     r8, [r9]
 * 0000000140AFFCBA: mov     ecx, r11d
 * 0000000140AFFCBD: rol     r8, cl
 * 0000000140AFFCC0: add     r9, 8
 * 0000000140AFFCC4: add     edx, 0FFFFFFF8h
 * 0000000140AFFCC7: sub     rax, r10
 * 0000000140AFFCCA: jnz     short loc_140AFFCB7
 * 0000000140AFFCCC: test    edx, edx
 * 0000000140AFFCCE: jz      short loc_140AFFCEE
 * 0000000140AFFCD0: mov     esi, 0FFFFFFFFh
 * 0000000140AFFCD5: movzx   eax, byte ptr [r9]
 * 0000000140AFFCD9: mov     ecx, r11d
 * 0000000140AFFCDC: xor     r8, rax
 * 0000000140AFFCDF: add     r9, r10
 * 0000000140AFFCE2: rol     r8, cl
 * 0000000140AFFCE5: add     edx, esi
 * 0000000140AFFCE7: jnz     short loc_140AFFCD5
 * 0000000140AFFCE9: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFFCEE: mov     rax, r8
 * 0000000140AFFCF1: jmp     short loc_140AFFCF6
 * 0000000140AFFCF3: xor     r8d, eax
 * 0000000140AFFCF6: shr     rax, 1Fh
 * 0000000140AFFCFA: test    rax, rax
 * 0000000140AFFCFD: jnz     short loc_140AFFCF3
 * 0000000140AFFCFF: btr     r8d, 1Fh
 * 0000000140AFFD04: mov     [r15+14h], r8d
 * 0000000140AFFD08: mov     rax, [rbp+0A70h+var_800]
 * 0000000140AFFD0F: mov     r15d, [rbp+0A70h+var_ACC]
 * 0000000140AFFD13: mov     [rbp+0A70h+var_998], rax
 * 0000000140AFFD1A: add     [rbx+828h], r12d
 * 0000000140AFFD21: jmp     short loc_140AFFD32
 * 0000000140AFFD23: mov     r13, [rbp+0A70h+var_AB0]
 * 0000000140AFFD27: mov     rbx, r14
 * 0000000140AFFD2A: mov     [rcx], r12d
 * 0000000140AFFD2D: mov     r12d, [rsp+0B70h+var_B00]
 * 0000000140AFFD32: test    dword ptr [rbx+990h], 40000000h
 * 0000000140AFFD3C: jz      short loc_140AFFD5C
 * 0000000140AFFD3E: test    r12d, r12d
 * 0000000140AFFD41: jz      short loc_140AFFD5C
 * 0000000140AFFD43: mov     r9, [rbp+0A70h+var_998]
 * 0000000140AFFD4A: mov     r8d, r12d
 * 0000000140AFFD4D: add     r9, 1Ch
 * 0000000140AFFD51: mov     rdx, r13
 * 0000000140AFFD54: mov     rcx, rbx
 * 0000000140AFFD57: call    sub_1403F152C
 * 0000000140AFFD5C: mov     rax, [rbp+0A70h+var_998]
 * 0000000140AFFD63: xor     ecx, ecx
 * 0000000140AFFD65: mov     [rbp+0A70h+var_A30], rbx
 * 0000000140AFFD69: mov     [rax+18h], ecx
 * 0000000140AFFD6C: lea     r12d, [rcx+1]
 * 0000000140AFFD70: mov     rax, [rbp+0A70h+var_998]
 * 0000000140AFFD77: or      [rax+18h], r12d
 * 0000000140AFFD7B: xor     eax, eax
 * 0000000140AFFD7D: mov     r14, [rbp+0A70h+var_A38]
 * 0000000140AFFD81: test    r15d, r15d
 * 0000000140AFFD84: setnz   cl
 * 0000000140AFFD87: mov     dword ptr [r14+90h], 23h ; '#'
 * 0000000140AFFD92: mov     eax, [r14+0B8h]
 * 0000000140AFFD99: and     eax, 0FFFFFFFEh
 * 0000000140AFFD9C: or      ecx, eax
 * 0000000140AFFD9E: mov     [r14+0B8h], ecx
 * 0000000140AFFDA5: cmp     dword ptr [r14+0A0h], 94h
 * 0000000140AFFDB0: jb      loc_140AFFE44
 * 0000000140AFFDB6: mov     r12, [rbp+0A70h+var_AF0]
 * 0000000140AFFDBA: mov     rax, [rbx+1F8h]
 * 0000000140AFFDC1: mov     rcx, r12
 * 0000000140AFFDC4: mov     r15, [r14+98h]
 * 0000000140AFFDCB: call    KeGuardDispatchICall
 * 0000000140AFFDD0: xor     ecx, ecx
 * 0000000140AFFDD2: test    rax, rax
 * 0000000140AFFDD5: jnz     short loc_140AFFDE0
 * 0000000140AFFDD7: mov     [rbp+0A70h+var_A48], rcx
 * 0000000140AFFDDB: jmp     loc_140AFF504
 * 0000000140AFFDE0: mov     r8d, [rax+50h]
 * 0000000140AFFDE4: mov     edx, [r14+0B8h]
 * 0000000140AFFDEB: add     r8, r12
 * 0000000140AFFDEE: or      edx, 2
 * 0000000140AFFDF1: mov     [r14+0B8h], edx
 * 0000000140AFFDF8: mov     ecx, edx
 * 0000000140AFFDFA: mov     rax, [r15+70h]
 * 0000000140AFFDFE: cmp     rax, r12
 * 0000000140AFFE01: jb      short loc_140AFFE1C
 * 0000000140AFFE03: cmp     rax, r8
 * 0000000140AFFE06: jnb     short loc_140AFFE1C
 * 0000000140AFFE08: mov     rax, [rax]
 * 0000000140AFFE0B: or      ecx, 4
 * 0000000140AFFE0E: mov     [r14+0A8h], rax
 * 0000000140AFFE15: mov     [r14+0B8h], ecx
 * 0000000140AFFE1C: mov     rax, [r15+78h]
 * 0000000140AFFE20: cmp     rax, r12
 * 0000000140AFFE23: mov     r12d, 1
 * 0000000140AFFE29: jb      short loc_140AFFE44
 * 0000000140AFFE2B: cmp     rax, r8
 * 0000000140AFFE2E: jnb     short loc_140AFFE44
 * 0000000140AFFE30: mov     rax, [rax]
 * 0000000140AFFE33: or      ecx, 8
 * 0000000140AFFE36: mov     [r14+0B0h], rax
 * 0000000140AFFE3D: mov     [r14+0B8h], ecx
 * 0000000140AFFE44: test    dword ptr [rbx+990h], 400000h
 * 0000000140AFFE4E: mov     [rbp+0A70h+var_A48], rbx
 * 0000000140AFFE52: jz      loc_140B00D66
 * 0000000140AFFE58: mov     r14, [rbp+0A70h+var_AF0]
 * 0000000140AFFE5C: mov     rax, [rbx+1F8h]
 * 0000000140AFFE63: mov     rcx, r14
 * 0000000140AFFE66: call    KeGuardDispatchICall
 * 0000000140AFFE6B: mov     [rsp+0B70h+var_AF8], rax
 * 0000000140AFFE70: mov     r15, rax
 * 0000000140AFFE73: test    rax, rax
 * 0000000140AFFE76: jz      loc_140AFF470
 * 0000000140AFFE7C: movzx   r10d, word ptr [r15+6]
 * 0000000140AFFE81: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140AFFE8B: mov     ecx, dword ptr [rbp+0A70h+var_AD8]
 * 0000000140AFFE8E: mul     rcx
 * 0000000140AFFE91: xor     eax, eax
 * 0000000140AFFE93: mov     word ptr [rbp+0A70h+arg_8], r10w
 * 0000000140AFFE9B: mov     r9, rdx
 * 0000000140AFFE9E: shr     r9, 3
 * 0000000140AFFEA2: mov     [rbp+0A70h+var_AE8], r9
 * 0000000140AFFEA6: test    r10w, r10w
 * 0000000140AFFEAA: jnz     short loc_140AFFF06
 * 0000000140AFFEAC: test    dword ptr [rbx+990h], 200000h
 * 0000000140AFFEB6: jz      loc_140B0E10C
 * 0000000140AFFEBC: cmp     [rbx+8F8h], eax
 * 0000000140AFFEC2: jnz     loc_140AFF470
 * 0000000140AFFEC8: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFFED2: add     rax, rbx
 * 0000000140AFFED5: mov     [rbx+900h], rax
 * 0000000140AFFEDC: xor     eax, eax
 * 0000000140AFFEDE: mov     [rbx+908h], rax
 * 0000000140AFFEE5: mov     qword ptr [rbx+910h], 10Fh
 * 0000000140AFFEF0: mov     [rbx+918h], r14
 * 0000000140AFFEF7: mov     [rbx+8F8h], r12d
 * 0000000140AFFEFE: mov     rcx, rbx
 * 0000000140AFFF01: jmp     loc_140AFF469
 * 0000000140AFFF06: mov     rdx, [rbp+0A70h+var_A98]
 * 0000000140AFFF0A: lea     r11, [r15+18h]
 * 0000000140AFFF0E: mov     eax, r9d
 * 0000000140AFFF11: mov     r13, rdx
 * 0000000140AFFF14: lea     rcx, [rax+rax*2]
 * 0000000140AFFF18: movzx   eax, word ptr [r15+14h]
 * 0000000140AFFF1D: lea     r12, [rdx+rcx*4]
 * 0000000140AFFF21: add     r11, rax
 * 0000000140AFFF24: xor     edx, edx
 * 0000000140AFFF26: mov     [rbp+0A70h+var_AB0], r12
 * 0000000140AFFF2A: mov     [rsp+0B70h+var_B18], r11
 * 0000000140AFFF2F: mov     ecx, edx
 * 0000000140AFFF31: mov     [rsp+0B70h+var_B00], edx
 * 0000000140AFFF35: mov     eax, r10d
 * 0000000140AFFF38: test    r10d, r10d
 * 0000000140AFFF3B: jz      loc_140B0016F
 * 0000000140AFFF41: mov     r8, r11
 * 0000000140AFFF44: mov     [rsp+0B70h+var_B08], r11
 * 0000000140AFFF49: lea     r15d, [rdx+1]
 * 0000000140AFFF4D: mov     edx, [r8+10h]
 * 0000000140AFFF51: mov     eax, [r8+8]
 * 0000000140AFFF55: cmp     edx, eax
 * 0000000140AFFF57: mov     r9d, [r8+0Ch]
 * 0000000140AFFF5B: cmovbe  edx, eax
 * 0000000140AFFF5E: mov     dword ptr [rbp+0A70h+var_AC8], r9d
 * 0000000140AFFF62: add     edx, r9d
 * 0000000140AFFF65: mov     dword ptr [rbp+0A70h+var_A70], edx
 * 0000000140AFFF68: test    ecx, ecx
 * 0000000140AFFF6A: jz      short loc_140AFFF82
 * 0000000140AFFF6C: lea     eax, [rcx-1]
 * 0000000140AFFF6F: lea     rax, [rax+rax*4]
 * 0000000140AFFF73: cmp     edx, [r11+rax*8+0Ch]
 * 0000000140AFFF78: jb      loc_140B0018C
 * 0000000140AFFF7E: mov     ecx, [rsp+0B70h+var_B00]
 * 0000000140AFFF82: cmp     r13, r12
 * 0000000140AFFF85: jz      loc_140B00148
 * 0000000140AFFF8B: mov     ecx, [r13+0]
 * 0000000140AFFF8F: mov     eax, [r13+4]
 * 0000000140AFFF93: cmp     ecx, edx
 * 0000000140AFFF95: jnb     loc_140B00131
 * 0000000140AFFF9B: cmp     eax, r9d
 * 0000000140AFFF9E: jbe     loc_140B00131
 * 0000000140AFFFA4: cmp     ecx, r9d
 * 0000000140AFFFA7: jb      loc_140B001E5
 * 0000000140AFFFAD: cmp     eax, edx
 * 0000000140AFFFAF: ja      loc_140B001E5
 * 0000000140AFFFB5: mov     eax, [r13+8]
 * 0000000140AFFFB9: mov     ecx, 1
 * 0000000140AFFFBE: mov     [rbp+0A70h+var_620], r13
 * 0000000140AFFFC5: test    cl, al
 * 0000000140AFFFC7: jnz     short loc_140AFFFD5
 * 0000000140AFFFC9: mov     al, [rax+r14]
 * 0000000140AFFFCD: test    al, 20h
 * 0000000140AFFFCF: jz      loc_140B00124
 * 0000000140AFFFD5: mov     eax, [r8+8]
 * 0000000140AFFFD9: mov     rdx, r14
 * 0000000140AFFFDC: mov     r15d, [r8+10h]
 * 0000000140AFFFE0: mov     rcx, r13
 * 0000000140AFFFE3: mov     r12d, [r8+0Ch]
 * 0000000140AFFFE7: cmp     r15d, eax
 * 0000000140AFFFEA: cmovbe  r15d, eax
 * 0000000140AFFFEE: mov     rax, [rbx+418h]
 * 0000000140AFFFF5: add     r15d, r12d
 * 0000000140AFFFF8: call    KeGuardDispatchICall
 * 0000000140AFFFFD: mov     r14, rax
 * 0000000140B00000: cmp     [rax], r12d
 * 0000000140B00003: jb      short loc_140B0000B
 * 0000000140B00005: cmp     [rax+4], r15d
 * 0000000140B00009: jbe     short loc_140B0007A
 * 0000000140B0000B: mov     r8, [rbp+0A70h+var_AF0]; BugCheckParameter2
 * 0000000140B0000F: mov     eax, 80000000h
 * 0000000140B00014: mov     edx, r14d
 * 0000000140B00017: sub     edx, r8d
 * 0000000140B0001A: or      edx, eax
 * 0000000140B0001C: xor     eax, eax
 * 0000000140B0001E: test    dword ptr [rbx+990h], 200000h
 * 0000000140B00028: jz      loc_140B0E186
 * 0000000140B0002E: cmp     [rbx+8F8h], eax
 * 0000000140B00034: jnz     short loc_140B0007A
 * 0000000140B00036: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B00040: xor     edx, edx
 * 0000000140B00042: add     rax, rbx
 * 0000000140B00045: mov     rcx, rbx
 * 0000000140B00048: mov     [rbx+900h], rax
 * 0000000140B0004F: xor     eax, eax
 * 0000000140B00051: mov     [rbx+908h], rax
 * 0000000140B00058: mov     eax, 1
 * 0000000140B0005D: mov     qword ptr [rbx+910h], 10Fh
 * 0000000140B00068: mov     [rbx+918h], r8
 * 0000000140B0006F: mov     [rbx+8F8h], eax
 * 0000000140B00075: call    $$ba
 * 0000000140B0007A: mov     r8d, [r14]
 * 0000000140B0007D: mov     rcx, r14
 * 0000000140B00080: add     r8, [rbp+0A70h+var_AF0]
 * 0000000140B00084: mov     rax, [rbx+420h]
 * 0000000140B0008B: mov     rdx, [rbp+0A70h+var_AF0]
 * 0000000140B0008F: call    KeGuardDispatchICall
 * 0000000140B00094: mov     rdx, rax
 * 0000000140B00097: cmp     [rax], r12d
 * 0000000140B0009A: jb      short loc_140B000A2
 * 0000000140B0009C: cmp     [rax+4], r15d
 * 0000000140B000A0: jbe     short loc_140B00110
 * 0000000140B000A2: mov     r14, [rbp+0A70h+var_AF0]
 * 0000000140B000A6: mov     eax, 80000000h
 * 0000000140B000AB: sub     edx, r14d
 * 0000000140B000AE: or      edx, eax
 * 0000000140B000B0: xor     eax, eax
 * 0000000140B000B2: test    dword ptr [rbx+990h], 200000h
 * 0000000140B000BC: jz      loc_140B0E15D
 * 0000000140B000C2: cmp     [rbx+8F8h], eax
 * 0000000140B000C8: jnz     short loc_140B00114
 * 0000000140B000CA: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B000D4: xor     edx, edx
 * 0000000140B000D6: add     rax, rbx
 * 0000000140B000D9: mov     rcx, rbx
 * 0000000140B000DC: mov     [rbx+900h], rax
 * 0000000140B000E3: xor     eax, eax
 * 0000000140B000E5: mov     [rbx+908h], rax
 * 0000000140B000EC: mov     eax, 1
 * 0000000140B000F1: mov     qword ptr [rbx+910h], 10Fh
 * 0000000140B000FC: mov     [rbx+918h], r14
 * 0000000140B00103: mov     [rbx+8F8h], eax
 * 0000000140B00109: call    $$ba
 * 0000000140B0010E: jmp     short loc_140B00114
 * 0000000140B00110: mov     r14, [rbp+0A70h+var_AF0]
 * 0000000140B00114: mov     edx, dword ptr [rbp+0A70h+var_A70]
 * 0000000140B00117: mov     r8, [rsp+0B70h+var_B08]
 * 0000000140B0011C: mov     r9d, dword ptr [rbp+0A70h+var_AC8]
 * 0000000140B00120: mov     r12, [rbp+0A70h+var_AB0]
 * 0000000140B00124: add     r13, 0Ch
 * 0000000140B00128: cmp     r13, r12
 * 0000000140B0012B: jnz     loc_140AFFF8B
 * 0000000140B00131: mov     ecx, [rsp+0B70h+var_B00]
 * 0000000140B00135: mov     r15d, 1
 * 0000000140B0013B: movzx   r10d, word ptr [rbp+0A70h+arg_8]
 * 0000000140B00143: mov     r11, [rsp+0B70h+var_B18]
 * 0000000140B00148: add     ecx, r15d
 * 0000000140B0014B: movzx   eax, r10w
 * 0000000140B0014F: add     r8, 28h ; '('
 * 0000000140B00153: mov     [rsp+0B70h+var_B00], ecx
 * 0000000140B00157: mov     [rsp+0B70h+var_B08], r8
 * 0000000140B0015C: cmp     ecx, eax
 * 0000000140B0015E: jb      loc_140AFFF4D
 * 0000000140B00164: mov     r9, [rbp+0A70h+var_AE8]
 * 0000000140B00168: xor     edx, edx
 * 0000000140B0016A: mov     r15, [rsp+0B70h+var_AF8]
 * 0000000140B0016F: cmp     r13, r12
 * 0000000140B00172: jz      loc_140B00242
 * 0000000140B00178: test    dword ptr [rbx+990h], 200000h
 * 0000000140B00182: jz      loc_140B0E1D7
 * 0000000140B00188: xor     eax, eax
 * 0000000140B0018A: jmp     short loc_140B001F7
 * 0000000140B0018C: xor     eax, eax
 * 0000000140B0018E: test    dword ptr [rbx+990h], 200000h
 * 0000000140B00198: jz      loc_140B0E134
 * 0000000140B0019E: cmp     [rbx+8F8h], eax
 * 0000000140B001A4: jnz     loc_140AFF470
 * 0000000140B001AA: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B001B4: add     rax, rbx
 * 0000000140B001B7: mov     [rbx+900h], rax
 * 0000000140B001BE: xor     eax, eax
 * 0000000140B001C0: mov     [rbx+908h], rax
 * 0000000140B001C7: mov     qword ptr [rbx+910h], 10Fh
 * 0000000140B001D2: mov     [rbx+918h], r14
 * 0000000140B001D9: mov     [rbx+8F8h], r15d
 * 0000000140B001E0: jmp     loc_140AFFEFE
 * 0000000140B001E5: xor     eax, eax
 * 0000000140B001E7: test    dword ptr [rbx+990h], 200000h
 * 0000000140B001F1: jz      loc_140B0E1AC
 * 0000000140B001F7: cmp     [rbx+8F8h], eax
 * 0000000140B001FD: jnz     loc_140AFF470
 * 0000000140B00203: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0020D: add     rax, rbx
 * 0000000140B00210: mov     [rbx+900h], rax
 * 0000000140B00217: xor     eax, eax
 * 0000000140B00219: mov     [rbx+908h], rax
 * 0000000140B00220: mov     eax, 1
 * 0000000140B00225: mov     qword ptr [rbx+910h], 10Fh
 * 0000000140B00230: mov     [rbx+918h], r14
 * 0000000140B00237: mov     [rbx+8F8h], eax
 * 0000000140B0023D: jmp     loc_140AFFEFE
 * 0000000140B00242: test    r9d, r9d
 * 0000000140B00245: jz      short loc_140B00250
 * 0000000140B00247: lea     ecx, [r9+6]
 * 0000000140B0024B: and     ecx, 0FFFFFFF8h
 * 0000000140B0024E: jmp     short loc_140B00252
 * 0000000140B00250: mov     ecx, edx
 * 0000000140B00252: mov     r14d, [rbx+7E4h]
 * 0000000140B00259: lea     eax, [rax+rax*2]
 * 0000000140B0025C: mov     r8d, [rbx+924h]
 * 0000000140B00263: lea     eax, [rax+6]
 * 0000000140B00266: lea     eax, [rcx+rax*8]
 * 0000000140B00269: add     eax, r14d
 * 0000000140B0026C: cmp     eax, [rbx+0A1Ch]
 * 0000000140B00272: jbe     loc_140B00369
 * 0000000140B00278: mov     edx, eax
 * 0000000140B0027A: mov     rcx, rbx
 * 0000000140B0027D: call    sub_140B12020
 * 0000000140B00282: mov     [rbp+0A70h+var_AC8], rax
 * 0000000140B00286: mov     r11, rax
 * 0000000140B00289: test    rax, rax
 * 0000000140B0028C: jz      loc_140AFF504
 * 0000000140B00292: mov     ecx, [rbx+990h]
 * 0000000140B00298: test    cl, 4
 * 0000000140B0029B: jnz     loc_140B00353
 * 0000000140B002A1: mov     eax, [rbx+7E4h]
 * 0000000140B002A7: and     ecx, 20000000h
 * 0000000140B002AD: mov     r8, [rbx+7C8h]
 * 0000000140B002B4: neg     ecx
 * 0000000140B002B6: mov     r10d, 1
 * 0000000140B002BC: sbb     edx, edx
 * 0000000140B002BE: and     edx, [rbx+924h]
 * 0000000140B002C4: cmp     eax, 8
 * 0000000140B002C7: jb      short loc_140B002E1
 * 0000000140B002C9: mov     ecx, eax
 * 0000000140B002CB: shr     rcx, 3
 * 0000000140B002CF: xor     r9d, r9d
 * 0000000140B002D2: mov     [rbx], r9
 * 0000000140B002D5: add     eax, 0FFFFFFF8h
 * 0000000140B002D8: add     rbx, 8
 * 0000000140B002DC: sub     rcx, r10
 * 0000000140B002DF: jnz     short loc_140B002D2
 * 0000000140B002E1: xor     ecx, ecx
 * 0000000140B002E3: test    eax, eax
 * 0000000140B002E5: jz      short loc_140B002F7
 * 0000000140B002E7: mov     r9d, 0FFFFFFFFh
 * 0000000140B002ED: mov     [rbx], cl
 * 0000000140B002EF: add     rbx, r10
 * 0000000140B002F2: add     eax, r9d
 * 0000000140B002F5: jnz     short loc_140B002ED
 * 0000000140B002F7: mov     ebx, [r11+924h]
 * 0000000140B002FE: mov     [r11+924h], edx
 * 0000000140B00305: cmp     edx, 3
 * 0000000140B00308: jz      short loc_140B00339
 * 0000000140B0030A: test    dword ptr [r11+990h], 10000000h
 * 0000000140B00315: jnz     short loc_140B00330
 * 0000000140B00317: test    edx, edx
 * 0000000140B00319: jz      short loc_140B00330
 * 0000000140B0031B: mov     rax, [r11+228h]
 * 0000000140B00322: lea     rcx, [r8-8]
 * 0000000140B00326: mov     rdx, [rcx]
 * 0000000140B00329: call    KeGuardDispatchICall
 * 0000000140B0032E: jmp     short loc_140B00348
 * 0000000140B00330: mov     rax, [r11+0F8h]
 * 0000000140B00337: jmp     short loc_140B00340
 * 0000000140B00339: mov     rax, [r11+368h]
 * 0000000140B00340: mov     rcx, r8
 * 0000000140B00343: call    KeGuardDispatchICall
 * 0000000140B00348: mov     r11, [rbp+0A70h+var_AC8]
 * 0000000140B0034C: mov     [r11+924h], ebx
 * 0000000140B00353: and     dword ptr [r11+990h], 0FFFFFFFBh
 * 0000000140B0035B: mov     r9, [rbp+0A70h+var_AE8]
 * 0000000140B0035F: movzx   r10d, word ptr [rbp+0A70h+arg_8]
 * 0000000140B00367: jmp     short loc_140B00376
 * 0000000140B00369: mov     r11, rbx
 * 0000000140B0036C: mov     [rbp+0A70h+var_AC8], rbx
 * 0000000140B00370: mov     [rbx+7E4h], eax
 * 0000000140B00376: mov     r13d, 1
 * 0000000140B0037C: lea     rdx, [r11+r14]
 * 0000000140B00380: add     [r11+80Ch], r13d
 * 0000000140B00387: mov     rax, rdx
 * 0000000140B0038A: mov     [rbp+0A70h+var_7E0], rdx
 * 0000000140B00391: xor     ebx, ebx
 * 0000000140B00393: lea     ecx, [r13+2Fh]
 * 0000000140B00397: lea     r8d, [r13+5]
 * 0000000140B0039B: mov     [rax], rbx
 * 0000000140B0039E: add     ecx, 0FFFFFFF8h
 * 0000000140B003A1: add     rax, 8
 * 0000000140B003A5: sub     r8, r13
 * 0000000140B003A8: jnz     short loc_140B0039B
 * 0000000140B003AA: test    ecx, ecx
 * 0000000140B003AC: jz      short loc_140B003BE
 * 0000000140B003AE: mov     r8d, 0FFFFFFFFh
 * 0000000140B003B4: mov     [rax], bl
 * 0000000140B003B6: add     rax, r13
 * 0000000140B003B9: add     ecx, r8d
 * 0000000140B003BC: jnz     short loc_140B003B4
 * 0000000140B003BE: mov     r13, [rbp+0A70h+var_A98]
 * 0000000140B003C2: mov     dword ptr [rdx], 1Eh
 * 0000000140B003C8: mov     [rdx+8], r13
 * 0000000140B003CC: mov     [rdx+10h], ebx
 * 0000000140B003CF: mov     rcx, [r11+818h]
 * 0000000140B003D6: mov     rax, rcx
 * 0000000140B003D9: jmp     short loc_140B003DD
 * 0000000140B003DB: xor     ecx, eax
 * 0000000140B003DD: shr     rax, 1Fh
 * 0000000140B003E1: test    rax, rax
 * 0000000140B003E4: jnz     short loc_140B003DB
 * 0000000140B003E6: btr     ecx, 1Fh
 * 0000000140B003EA: mov     r8d, 0FFFEh
 * 0000000140B003F0: mov     [rdx+14h], ecx
 * 0000000140B003F3: mov     rbx, r11
 * 0000000140B003F6: mov     rax, [rbp+0A70h+var_7E0]
 * 0000000140B003FD: mov     rcx, [rbp+0A70h+var_AF0]
 * 0000000140B00401: mov     [rbp+0A70h+var_A08], rax
 * 0000000140B00405: mov     [rbp+0A70h+var_A48], rbx
 * 0000000140B00409: mov     [rax+18h], rcx
 * 0000000140B0040D: mov     ecx, [r15+50h]
 * 0000000140B00411: mov     rax, [rbp+0A70h+var_A08]
 * 0000000140B00415: mov     [rax+20h], ecx
 * 0000000140B00418: mov     rax, [rbp+0A70h+var_A08]
 * 0000000140B0041C: mov     ecx, dword ptr [rbp+0A70h+var_AD8]
 * 0000000140B0041F: mov     [rax+24h], ecx
 * 0000000140B00422: mov     rax, [rbp+0A70h+var_A08]
 * 0000000140B00426: mov     [rax+28h], r10w
 * 0000000140B0042B: xor     eax, eax
 * 0000000140B0042D: cmp     [rbp+0A70h+var_ACC], eax
 * 0000000140B00430: mov     ecx, eax
 * 0000000140B00432: mov     rdx, [rbp+0A70h+var_A08]
 * 0000000140B00436: setnz   cl
 * 0000000140B00439: movzx   eax, word ptr [rdx+2Ah]
 * 0000000140B0043D: and     ax, r8w
 * 0000000140B00441: or      cx, ax
 * 0000000140B00444: mov     [rdx+2Ah], cx
 * 0000000140B00448: mov     rcx, [rbp+0A70h+var_A08]
 * 0000000140B0044C: lea     rdx, [rcx+30h]
 * 0000000140B00450: mov     [rbp+0A70h+var_AE8], rdx
 * 0000000140B00454: test    r9d, r9d
 * 0000000140B00457: jz      short loc_140B0046A
 * 0000000140B00459: lea     r14d, [r9-1]
 * 0000000140B0045D: add     r14, 7
 * 0000000140B00461: and     r14, 0FFFFFFFFFFFFFFF8h
 * 0000000140B00465: add     r14, rdx
 * 0000000140B00468: jmp     short loc_140B0046D
 * 0000000140B0046A: mov     r14, rdx
 * 0000000140B0046D: movzx   eax, word ptr [rcx+28h]
 * 0000000140B00471: mov     [rbp+0A70h+var_A70], r14
 * 0000000140B00475: lea     rcx, [rax+rax*2]
 * 0000000140B00479: lea     r8, [r14+rcx*8]
 * 0000000140B0047D: mov     [rsp+0B70h+var_AF8], r8
 * 0000000140B00482: test    r9d, r9d
 * 0000000140B00485: jz      short loc_140B00492
 * 0000000140B00487: lea     rax, [r13+0Ch]
 * 0000000140B0048B: mov     [rsp+0B70h+var_B08], rax
 * 0000000140B00490: jmp     short loc_140B00497
 * 0000000140B00492: mov     [rsp+0B70h+var_B08], r12
 * 0000000140B00497: xor     eax, eax
 * 0000000140B00499: lea     r15d, [rax+1]
 * 0000000140B0049D: cmp     ax, r10w
 * 0000000140B004A1: jnb     short loc_140B004DB
 * 0000000140B004A3: movzx   edx, r10w
 * 0000000140B004A7: lea     rax, [r14+8]
 * 0000000140B004AB: mov     r10d, 80000000h
 * 0000000140B004B1: lea     esi, [r15+1]
 * 0000000140B004B5: xor     r9d, r9d
 * 0000000140B004B8: mov     rcx, rsi
 * 0000000140B004BB: mov     [rax-8], r9d
 * 0000000140B004BF: mov     [rax-4], r9d
 * 0000000140B004C3: mov     [rax], r10d
 * 0000000140B004C6: add     rax, 0Ch
 * 0000000140B004CA: sub     rcx, r15
 * 0000000140B004CD: jnz     short loc_140B004BB
 * 0000000140B004CF: sub     rdx, r15
 * 0000000140B004D2: jnz     short loc_140B004B8
 * 0000000140B004D4: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B004D9: xor     eax, eax
 * 0000000140B004DB: cmp     r14, r8
 * 0000000140B004DE: jz      loc_140B00D66
 * 0000000140B004E4: mov     r13, [rsp+0B70h+var_B18]
 * 0000000140B004E9: jmp     short loc_140B004ED
 * 0000000140B004EB: xor     eax, eax
 * 0000000140B004ED: test    dword ptr [r13+24h], 2000000h
 * 0000000140B004F5: mov     r12d, eax
 * 0000000140B004F8: mov     [rbp+0A70h+var_ACC], eax
 * 0000000140B004FB: jnz     short loc_140B00512
 * 0000000140B004FD: mov     eax, [r13+0]
 * 0000000140B00501: cmp     eax, 54494E49h
 * 0000000140B00506: jnz     short loc_140B0051E
 * 0000000140B00508: cmp     dword ptr [r13+4], 4742444Bh
 * 0000000140B00510: jnz     short loc_140B0054A
 * 0000000140B00512: mov     r12d, r15d
 * 0000000140B00515: mov     [rbp+0A70h+var_ACC], r15d
 * 0000000140B00519: jmp     loc_140B0064B
 * 0000000140B0051E: cmp     eax, 45474150h
 * 0000000140B00523: jnz     short loc_140B0054A
 * 0000000140B00525: movzx   eax, word ptr [r13+4]
 * 0000000140B0052A: mov     ecx, 7877h
 * 0000000140B0052F: cmp     ax, cx
 * 0000000140B00532: jz      short loc_140B00512
 * 0000000140B00534: mov     ecx, 7277h
 * 0000000140B00539: cmp     ax, cx
 * 0000000140B0053C: jz      short loc_140B00512
 * 0000000140B0053E: mov     ecx, 7777h
 * 0000000140B00543: cmp     ax, cx
 * 0000000140B00546: jnz     short loc_140B0055D
 * 0000000140B00548: jmp     short loc_140B00512
 * 0000000140B0054A: cmp     eax, 41525245h
 * 0000000140B0054F: jnz     short loc_140B0055D
 * 0000000140B00551: mov     eax, 4154h
 * 0000000140B00556: cmp     [r13+4], ax
 * 0000000140B0055B: jz      short loc_140B00512
 * 0000000140B0055D: mov     rax, [rbp+0A70h+var_AC8]
 * 0000000140B00561: mov     r10d, 7
 * 0000000140B00567: mov     r11, [r11+938h]
 * 0000000140B0056E: mov     r8, r13
 * 0000000140B00571: mov     rbx, [rax+940h]
 * 0000000140B00578: mov     r14, [rax+948h]
 * 0000000140B0057F: mov     r9, [rax+930h]
 * 0000000140B00586: movzx   edx, byte ptr [r8]
 * 0000000140B0058A: add     r8, r15
 * 0000000140B0058D: movzx   eax, byte ptr [r9]
 * 0000000140B00591: add     r9, r15
 * 0000000140B00594: cmp     rdx, rax
 * 0000000140B00597: jnz     short loc_140B005A8
 * 0000000140B00599: mov     eax, 0FFFFFFFFh
 * 0000000140B0059E: add     r10d, eax
 * 0000000140B005A1: jnz     short loc_140B00586
 * 0000000140B005A3: jmp     loc_140B0063C
 * 0000000140B005A8: mov     r8d, 8
 * 0000000140B005AE: mov     r9, r13
 * 0000000140B005B1: mov     rcx, [r9]
 * 0000000140B005B4: add     r9, 8
 * 0000000140B005B8: mov     rax, [r11]
 * 0000000140B005BB: add     r11, 8
 * 0000000140B005BF: cmp     rcx, rax
 * 0000000140B005C2: jnz     short loc_140B005F3
 * 0000000140B005C4: add     r8d, 0FFFFFFF8h
 * 0000000140B005C8: cmp     r8d, 8
 * 0000000140B005CC: jnb     short loc_140B005B1
 * 0000000140B005CE: test    r8d, r8d
 * 0000000140B005D1: jz      short loc_140B0063C
 * 0000000140B005D3: mov     r10d, 0FFFFFFFFh
 * 0000000140B005D9: movzx   edx, byte ptr [r9]
 * 0000000140B005DD: add     r9, r15
 * 0000000140B005E0: movzx   eax, byte ptr [r11]
 * 0000000140B005E4: add     r11, r15
 * 0000000140B005E7: cmp     rdx, rax
 * 0000000140B005EA: jnz     short loc_140B005F3
 * 0000000140B005EC: add     r8d, r10d
 * 0000000140B005EF: jnz     short loc_140B005D9
 * 0000000140B005F1: jmp     short loc_140B0063C
 * 0000000140B005F3: mov     r9d, 4
 * 0000000140B005F9: mov     r8, r13
 * 0000000140B005FC: mov     r10d, 0FFFFFFFFh
 * 0000000140B00602: movzx   edx, byte ptr [r8]
 * 0000000140B00606: add     r8, r15
 * 0000000140B00609: movzx   eax, byte ptr [rbx]
 * 0000000140B0060C: add     rbx, r15
 * 0000000140B0060F: cmp     rdx, rax
 * 0000000140B00612: jnz     short loc_140B0061B
 * 0000000140B00614: add     r9d, r10d
 * 0000000140B00617: jnz     short loc_140B00602
 * 0000000140B00619: jmp     short loc_140B0063C
 * 0000000140B0061B: mov     r9d, 6
 * 0000000140B00621: mov     r8, r13
 * 0000000140B00624: movzx   edx, byte ptr [r8]
 * 0000000140B00628: add     r8, r15
 * 0000000140B0062B: movzx   eax, byte ptr [r14]
 * 0000000140B0062F: add     r14, r15
 * 0000000140B00632: cmp     rdx, rax
 * 0000000140B00635: jnz     short loc_140B00643
 * 0000000140B00637: add     r9d, r10d
 * 0000000140B0063A: jnz     short loc_140B00624
 * 0000000140B0063C: mov     r12d, r15d
 * 0000000140B0063F: mov     [rbp+0A70h+var_ACC], r15d
 * 0000000140B00643: mov     r14, [rbp+0A70h+var_A70]
 * 0000000140B00647: mov     r11, [rbp+0A70h+var_AC8]
 * 0000000140B0064B: mov     ecx, [r13+24h]
 * 0000000140B0064F: xor     eax, eax
 * 0000000140B00651: test    ecx, ecx
 * 0000000140B00653: jns     short loc_140B0065E
 * 0000000140B00655: mov     r12d, r15d
 * 0000000140B00658: mov     [rbp+0A70h+var_ACC], r15d
 * 0000000140B0065C: jmp     short loc_140B00663
 * 0000000140B0065E: test    r12d, r12d
 * 0000000140B00661: jz      short loc_140B0068A
 * 0000000140B00663: cmp     dword ptr [r13+0], 54494E49h
 * 0000000140B0066B: jnz     short loc_140B0068A
 * 0000000140B0066D: cmp     dword ptr [r13+4], 4742444Bh
 * 0000000140B00675: jnz     short loc_140B0068A
 * 0000000140B00677: test    dword ptr [r11+994h], 2000h
 * 0000000140B00682: cmovnz  r12d, eax
 * 0000000140B00686: mov     [rbp+0A70h+var_ACC], r12d
 * 0000000140B0068A: test    dword ptr [r11+994h], 4000h
 * 0000000140B00695: mov     r9, [rbp+0A70h+var_AF0]
 * 0000000140B00699: jz      short loc_140B006BA
 * 0000000140B0069B: bt      ecx, 1Dh
 * 0000000140B0069F: jnb     short loc_140B006BA
 * 0000000140B006A1: cmp     r9, [r11+5E0h]
 * 0000000140B006A8: jz      short loc_140B006B3
 * 0000000140B006AA: cmp     r9, [r11+5E8h]
 * 0000000140B006B1: jnz     short loc_140B006BA
 * 0000000140B006B3: mov     r12d, r15d
 * 0000000140B006B6: mov     [rbp+0A70h+var_ACC], r15d
 * 0000000140B006BA: mov     edx, [r13+0Ch]
 * 0000000140B006BE: mov     r15d, [r13+10h]
 * 0000000140B006C2: mov     eax, [r13+8]
 * 0000000140B006C6: cmp     r15d, eax
 * 0000000140B006C9: mov     r8, [rbp+0A70h+var_AB0]
 * 0000000140B006CD: mov     r10, [rbp+0A70h+var_A98]
 * 0000000140B006D1: cmovbe  r15d, eax
 * 0000000140B006D5: add     r15d, edx
 * 0000000140B006D8: mov     dword ptr [rbp+0A70h+var_AD8], edx
 * 0000000140B006DB: xor     ebx, ebx
 * 0000000140B006DD: mov     [rsp+0B70h+var_B00], r15d
 * 0000000140B006E2: mov     dword ptr [rbp+0A70h+arg_8], edx
 * 0000000140B006E8: cmp     r10, r8
 * 0000000140B006EB: jz      loc_140B008B0
 * 0000000140B006F1: mov     eax, [r10]
 * 0000000140B006F4: mov     ecx, [r10+4]
 * 0000000140B006F8: mov     r13d, ecx
 * 0000000140B006FB: cmp     eax, edx
 * 0000000140B006FD: jbe     loc_140B008B5
 * 0000000140B00703: mov     dword ptr [rbp+0A70h+arg_8], edx
 * 0000000140B00709: cmp     ecx, r15d
 * 0000000140B0070C: ja      loc_140B008C1
 * 0000000140B00712: mov     dword ptr [rbp+0A70h+arg_8], edx
 * 0000000140B00718: test    r12d, r12d
 * 0000000140B0071B: jnz     loc_140B008F5
 * 0000000140B00721: mov     [r14], edx
 * 0000000140B00724: lea     r8, [rbp+0A70h+var_790]
 * 0000000140B0072B: mov     [r14+4], eax
 * 0000000140B0072F: lea     r14, [r9+rdx]
 * 0000000140B00733: mov     r9d, eax
 * 0000000140B00736: mov     dword ptr [rbp+0A70h+arg_8], eax
 * 0000000140B0073C: sub     r9d, edx
 * 0000000140B0073F: lea     rdx, [rbp+0A70h+var_910]
 * 0000000140B00746: mov     r11d, r9d
 * 0000000140B00749: add     r11, r14
 * 0000000140B0074C: xor     eax, eax
 * 0000000140B0074E: mov     r10d, eax
 * 0000000140B00751: mov     rcx, [r8]
 * 0000000140B00754: mov     eax, [rdx]
 * 0000000140B00756: add     rax, rcx
 * 0000000140B00759: cmp     r14, rax
 * 0000000140B0075C: jnb     short loc_140B00767
 * 0000000140B0075E: cmp     r11, rcx
 * 0000000140B00761: ja      loc_140B008A0
 * 0000000140B00767: inc     r10d
 * 0000000140B0076A: add     r8, 8
 * 0000000140B0076E: add     rdx, 4
 * 0000000140B00772: cmp     r10d, 6
 * 0000000140B00776: jb      short loc_140B00751
 * 0000000140B00778: mov     rax, [rbp+0A70h+var_AC8]
 * 0000000140B0077C: mov     rbx, r14
 * 0000000140B0077F: add     [rax+828h], r9d
 * 0000000140B00786: mov     r12d, [rax+814h]
 * 0000000140B0078D: mov     r15, [rax+818h]
 * 0000000140B00794: mov     rax, r14
 * 0000000140B00797: cmp     r14, r11
 * 0000000140B0079A: jnb     short loc_140B007AC
 * 0000000140B0079C: mov     ecx, 40h ; '@'
 * 0000000140B007A1: prefetchnta byte ptr [rax]
 * 0000000140B007A4: add     rax, rcx
 * 0000000140B007A7: cmp     rax, r11
 * 0000000140B007AA: jb      short loc_140B007A1
 * 0000000140B007AC: mov     r10d, r9d
 * 0000000140B007AF: mov     r8, r15
 * 0000000140B007B2: shr     r10d, 7
 * 0000000140B007B6: mov     r11d, 1
 * 0000000140B007BC: test    r10d, r10d
 * 0000000140B007BF: jz      short loc_140B0082E
 * 0000000140B007C1: mov     rdi, 7010008004002001h
 * 0000000140B007CB: mov     eax, 8
 * 0000000140B007D0: xor     r8, [rbx]
 * 0000000140B007D3: mov     ecx, r12d
 * 0000000140B007D6: rol     r8, cl
 * 0000000140B007D9: xor     r8, [rbx+8]
 * 0000000140B007DD: add     rbx, 10h
 * 0000000140B007E1: rol     r8, cl
 * 0000000140B007E4: sub     rax, r11
 * 0000000140B007E7: jnz     short loc_140B007D0
 * 0000000140B007E9: mov     rcx, rbx
 * 0000000140B007EC: sub     rcx, r14
 * 0000000140B007EF: xor     rcx, r15
 * 0000000140B007F2: mov     rax, rcx
 * 0000000140B007F5: rol     rax, 11h
 * 0000000140B007F9: xor     rcx, rax
 * 0000000140B007FC: mov     rax, rdi
 * 0000000140B007FF: mul     rcx
 * 0000000140B00802: mov     [rbp+0A70h+var_618], rdx
 * 0000000140B00809: xor     edx, eax
 * 0000000140B0080B: xor     r12d, edx
 * 0000000140B0080E: mov     edx, 0FFFFFFFFh
 * 0000000140B00813: and     r12d, 3Fh
 * 0000000140B00817: cmovz   r12d, r11d
 * 0000000140B0081B: add     r10d, edx
 * 0000000140B0081E: jnz     short loc_140B007CB
 * 0000000140B00820: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B00825: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0082C: jmp     short loc_140B00833
 * 0000000140B0082E: mov     edx, 0FFFFFFFFh
 * 0000000140B00833: and     r9d, 7Fh
 * 0000000140B00837: cmp     r9d, 8
 * 0000000140B0083B: jb      short loc_140B0085A
 * 0000000140B0083D: mov     eax, r9d
 * 0000000140B00840: shr     rax, 3
 * 0000000140B00844: xor     r8, [rbx]
 * 0000000140B00847: mov     ecx, r12d
 * 0000000140B0084A: rol     r8, cl
 * 0000000140B0084D: add     rbx, 8
 * 0000000140B00851: add     r9d, 0FFFFFFF8h
 * 0000000140B00855: sub     rax, r11
 * 0000000140B00858: jnz     short loc_140B00844
 * 0000000140B0085A: test    r9d, r9d
 * 0000000140B0085D: jz      short loc_140B00873
 * 0000000140B0085F: movzx   eax, byte ptr [rbx]
 * 0000000140B00862: mov     ecx, r12d
 * 0000000140B00865: xor     r8, rax
 * 0000000140B00868: add     rbx, r11
 * 0000000140B0086B: rol     r8, cl
 * 0000000140B0086E: add     r9d, edx
 * 0000000140B00871: jnz     short loc_140B0085F
 * 0000000140B00873: mov     rax, r8
 * 0000000140B00876: shr     rax, 1Fh
 * 0000000140B0087A: xor     ebx, ebx
 * 0000000140B0087C: jmp     short loc_140B00885
 * 0000000140B0087E: xor     r8d, eax
 * 0000000140B00881: shr     rax, 1Fh
 * 0000000140B00885: test    rax, rax
 * 0000000140B00888: jnz     short loc_140B0087E
 * 0000000140B0088A: mov     rax, [rbp+0A70h+var_A70]
 * 0000000140B0088E: btr     r8d, 1Fh
 * 0000000140B00893: mov     r15d, [rsp+0B70h+var_B00]
 * 0000000140B00898: mov     r12d, [rbp+0A70h+var_ACC]
 * 0000000140B0089C: mov     [rax+8], r8d
 * 0000000140B008A0: mov     ecx, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B008A6: mov     r11, [rbp+0A70h+var_AC8]
 * 0000000140B008AA: mov     r8, [rbp+0A70h+var_AB0]
 * 0000000140B008AE: jmp     short loc_140B008C3
 * 0000000140B008B0: mov     eax, ebx
 * 0000000140B008B2: mov     r13d, ebx
 * 0000000140B008B5: mov     ecx, edx
 * 0000000140B008B7: cmp     eax, edx
 * 0000000140B008B9: jb      loc_140B00B50
 * 0000000140B008BF: jmp     short loc_140B008C3
 * 0000000140B008C1: mov     ecx, edx
 * 0000000140B008C3: cmp     r13d, r15d
 * 0000000140B008C6: mov     r13, [rbp+0A70h+var_A98]
 * 0000000140B008CA: ja      loc_140B00B5F
 * 0000000140B008D0: cmp     r13, r8
 * 0000000140B008D3: jz      loc_140B00B5F
 * 0000000140B008D9: mov     r10, r13
 * 0000000140B008DC: mov     rax, [rsp+0B70h+var_B08]
 * 0000000140B008E1: mov     r13d, [rax+4]
 * 0000000140B008E5: cmp     r13d, r15d
 * 0000000140B008E8: ja      loc_140B00B5B
 * 0000000140B008EE: mov     ecx, 0Ch
 * 0000000140B008F3: jmp     short loc_140B008FD
 * 0000000140B008F5: mov     ecx, edx
 * 0000000140B008F7: jmp     short loc_140B008DC
 * 0000000140B008F9: mov     r11, [rbp+0A70h+var_AC8]
 * 0000000140B008FD: cmp     rax, r8
 * 0000000140B00900: jz      loc_140B00B55
 * 0000000140B00906: test    r12d, r12d
 * 0000000140B00909: jz      short loc_140B00913
 * 0000000140B0090B: mov     r8b, 80h
 * 0000000140B0090E: jmp     loc_140B00B15
 * 0000000140B00913: mov     r15d, [rax]
 * 0000000140B00916: mov     ebx, [r10+4]
 * 0000000140B0091A: mov     dword ptr [rbp+0A70h+arg_8], r15d
 * 0000000140B00921: cmp     r15d, ebx
 * 0000000140B00924: jnb     short loc_140B0098B
 * 0000000140B00926: xor     eax, eax
 * 0000000140B00928: test    dword ptr [r11+990h], 200000h
 * 0000000140B00933: jz      loc_140B0E202
 * 0000000140B00939: cmp     [r11+8F8h], eax
 * 0000000140B00940: jnz     short loc_140B0098B
 * 0000000140B00942: mov     rcx, [rbp+0A70h+var_AF0]
 * 0000000140B00946: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B00950: add     rax, r11
 * 0000000140B00953: xor     edx, edx
 * 0000000140B00955: mov     [r11+900h], rax
 * 0000000140B0095C: xor     eax, eax
 * 0000000140B0095E: mov     [r11+908h], rax
 * 0000000140B00965: mov     eax, 1
 * 0000000140B0096A: mov     qword ptr [r11+910h], 10Fh
 * 0000000140B00975: mov     [r11+918h], rcx
 * 0000000140B0097C: mov     rcx, r11
 * 0000000140B0097F: mov     [r11+8F8h], eax
 * 0000000140B00986: call    $$ba
 * 0000000140B0098B: mov     r14, rbx
 * 0000000140B0098E: lea     rdx, [rbp+0A70h+var_910]
 * 0000000140B00995: add     r14, [rbp+0A70h+var_AF0]
 * 0000000140B00999: lea     r8, [rbp+0A70h+var_790]
 * 0000000140B009A0: mov     r9d, r15d
 * 0000000140B009A3: sub     r9d, ebx
 * 0000000140B009A6: mov     ebx, r9d
 * 0000000140B009A9: add     rbx, r14
 * 0000000140B009AC: xor     eax, eax
 * 0000000140B009AE: mov     r10d, eax
 * 0000000140B009B1: mov     rcx, [r8]
 * 0000000140B009B4: mov     eax, [rdx]
 * 0000000140B009B6: add     rax, rcx
 * 0000000140B009B9: cmp     r14, rax
 * 0000000140B009BC: jnb     short loc_140B009C7
 * 0000000140B009BE: cmp     rbx, rcx
 * 0000000140B009C1: ja      loc_140B00B02
 * 0000000140B009C7: mov     eax, 4
 * 0000000140B009CC: inc     r10d
 * 0000000140B009CF: add     rdx, rax
 * 0000000140B009D2: add     r8, 8
 * 0000000140B009D6: cmp     r10d, 6
 * 0000000140B009DA: jb      short loc_140B009B1
 * 0000000140B009DC: cmp     r9d, eax
 * 0000000140B009DF: jb      loc_140B00B02
 * 0000000140B009E5: mov     rax, [rbp+0A70h+var_AC8]
 * 0000000140B009E9: mov     r11, r14
 * 0000000140B009EC: add     [rax+828h], r9d
 * 0000000140B009F3: mov     r15d, [rax+814h]
 * 0000000140B009FA: mov     r12, [rax+818h]
 * 0000000140B00A01: mov     rax, r14
 * 0000000140B00A04: cmp     r14, rbx
 * 0000000140B00A07: jnb     short loc_140B00A19
 * 0000000140B00A09: mov     ecx, 40h ; '@'
 * 0000000140B00A0E: prefetchnta byte ptr [rax]
 * 0000000140B00A11: add     rax, rcx
 * 0000000140B00A14: cmp     rax, rbx
 * 0000000140B00A17: jb      short loc_140B00A0E
 * 0000000140B00A19: mov     r10d, r9d
 * 0000000140B00A1C: mov     r8, r12
 * 0000000140B00A1F: shr     r10d, 7
 * 0000000140B00A23: mov     ebx, 1
 * 0000000140B00A28: test    r10d, r10d
 * 0000000140B00A2B: jz      short loc_140B00A9B
 * 0000000140B00A2D: mov     rdi, 7010008004002001h
 * 0000000140B00A37: mov     eax, 8
 * 0000000140B00A3C: xor     r8, [r11]
 * 0000000140B00A3F: mov     ecx, r15d
 * 0000000140B00A42: rol     r8, cl
 * 0000000140B00A45: xor     r8, [r11+8]
 * 0000000140B00A49: add     r11, 10h
 * 0000000140B00A4D: rol     r8, cl
 * 0000000140B00A50: sub     rax, rbx
 * 0000000140B00A53: jnz     short loc_140B00A3C
 * 0000000140B00A55: mov     rcx, r11
 * 0000000140B00A58: sub     rcx, r14
 * 0000000140B00A5B: xor     rcx, r12
 * 0000000140B00A5E: mov     rax, rcx
 * 0000000140B00A61: rol     rax, 11h
 * 0000000140B00A65: xor     rcx, rax
 * 0000000140B00A68: mov     rax, rdi
 * 0000000140B00A6B: mul     rcx
 * 0000000140B00A6E: xor     r15d, edx
 * 0000000140B00A71: mov     [rbp+0A70h+var_610], rdx
 * 0000000140B00A78: xor     r15d, eax
 * 0000000140B00A7B: mov     edx, 0FFFFFFFFh
 * 0000000140B00A80: and     r15d, 3Fh
 * 0000000140B00A84: cmovz   r15d, ebx
 * 0000000140B00A88: add     r10d, edx
 * 0000000140B00A8B: jnz     short loc_140B00A37
 * 0000000140B00A8D: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B00A92: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B00A99: jmp     short loc_140B00AA0
 * 0000000140B00A9B: mov     edx, 0FFFFFFFFh
 * 0000000140B00AA0: and     r9d, 7Fh
 * 0000000140B00AA4: cmp     r9d, 8
 * 0000000140B00AA8: jb      short loc_140B00AC7
 * 0000000140B00AAA: mov     eax, r9d
 * 0000000140B00AAD: shr     rax, 3
 * 0000000140B00AB1: xor     r8, [r11]
 * 0000000140B00AB4: mov     ecx, r15d
 * 0000000140B00AB7: rol     r8, cl
 * 0000000140B00ABA: add     r11, 8
 * 0000000140B00ABE: add     r9d, 0FFFFFFF8h
 * 0000000140B00AC2: sub     rax, rbx
 * 0000000140B00AC5: jnz     short loc_140B00AB1
 * 0000000140B00AC7: test    r9d, r9d
 * 0000000140B00ACA: jz      short loc_140B00AE1
 * 0000000140B00ACC: movzx   eax, byte ptr [r11]
 * 0000000140B00AD0: mov     ecx, r15d
 * 0000000140B00AD3: xor     r8, rax
 * 0000000140B00AD6: add     r11, rbx
 * 0000000140B00AD9: rol     r8, cl
 * 0000000140B00ADC: add     r9d, edx
 * 0000000140B00ADF: jnz     short loc_140B00ACC
 * 0000000140B00AE1: mov     rax, r8
 * 0000000140B00AE4: shr     rax, 7
 * 0000000140B00AE8: xor     ebx, ebx
 * 0000000140B00AEA: jmp     short loc_140B00AF3
 * 0000000140B00AEC: xor     r8b, al
 * 0000000140B00AEF: shr     rax, 7
 * 0000000140B00AF3: test    rax, rax
 * 0000000140B00AF6: jnz     short loc_140B00AEC
 * 0000000140B00AF8: mov     r12d, [rbp+0A70h+var_ACC]
 * 0000000140B00AFC: and     r8b, 7Fh
 * 0000000140B00B00: jmp     short loc_140B00B07
 * 0000000140B00B02: xor     ebx, ebx
 * 0000000140B00B04: mov     r8b, 80h
 * 0000000140B00B07: mov     r10, [rbp+0A70h+var_A98]
 * 0000000140B00B0B: mov     ecx, 0Ch
 * 0000000140B00B10: mov     r15d, [rsp+0B70h+var_B00]
 * 0000000140B00B15: mov     rax, [rbp+0A70h+var_AE8]
 * 0000000140B00B19: add     r10, rcx
 * 0000000140B00B1C: inc     [rbp+0A70h+var_AE8]
 * 0000000140B00B20: mov     [rbp+0A70h+var_A98], r10
 * 0000000140B00B24: mov     [rax], r8b
 * 0000000140B00B27: mov     rax, [rsp+0B70h+var_B08]
 * 0000000140B00B2C: mov     r8, [rbp+0A70h+var_AB0]
 * 0000000140B00B30: add     rax, rcx
 * 0000000140B00B33: mov     [rsp+0B70h+var_B08], rax
 * 0000000140B00B38: cmp     rax, r8
 * 0000000140B00B3B: jz      short loc_140B00B41
 * 0000000140B00B3D: mov     r13d, [rax+4]
 * 0000000140B00B41: cmp     r13d, r15d
 * 0000000140B00B44: jbe     loc_140B008F9
 * 0000000140B00B4A: mov     ecx, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B00B50: mov     r13, r10
 * 0000000140B00B53: jmp     short loc_140B00B5F
 * 0000000140B00B55: mov     ecx, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B00B5B: mov     r13, [rbp+0A70h+var_A98]
 * 0000000140B00B5F: mov     r14, [rbp+0A70h+var_A70]
 * 0000000140B00B63: test    r12d, r12d
 * 0000000140B00B66: jnz     loc_140B00CE9
 * 0000000140B00B6C: cmp     ecx, r15d
 * 0000000140B00B6F: jz      loc_140B00CE9
 * 0000000140B00B75: mov     rbx, [rbp+0A70h+var_AF0]
 * 0000000140B00B79: lea     rdx, [rbp+0A70h+var_910]
 * 0000000140B00B80: mov     [r14+0Ch], ecx
 * 0000000140B00B84: lea     r8, [rbp+0A70h+var_790]
 * 0000000140B00B8B: mov     [r14+10h], r15d
 * 0000000140B00B8F: mov     r9d, r15d
 * 0000000140B00B92: mov     eax, [r14+0Ch]
 * 0000000140B00B96: sub     r9d, eax
 * 0000000140B00B99: add     rbx, rax
 * 0000000140B00B9C: mov     r11d, r9d
 * 0000000140B00B9F: add     r11, rbx
 * 0000000140B00BA2: xor     eax, eax
 * 0000000140B00BA4: mov     r10d, eax
 * 0000000140B00BA7: lea     r12d, [rax+1]
 * 0000000140B00BAB: mov     rcx, [r8]
 * 0000000140B00BAE: mov     eax, [rdx]
 * 0000000140B00BB0: add     rax, rcx
 * 0000000140B00BB3: cmp     rbx, rax
 * 0000000140B00BB6: jnb     short loc_140B00BC1
 * 0000000140B00BB8: cmp     r11, rcx
 * 0000000140B00BBB: ja      loc_140B00CE9
 * 0000000140B00BC1: add     r10d, r12d
 * 0000000140B00BC4: add     r8, 8
 * 0000000140B00BC8: add     rdx, 4
 * 0000000140B00BCC: cmp     r10d, 6
 * 0000000140B00BD0: jb      short loc_140B00BAB
 * 0000000140B00BD2: mov     rax, [rbp+0A70h+var_AC8]
 * 0000000140B00BD6: mov     r10, rbx
 * 0000000140B00BD9: add     [rax+828h], r9d
 * 0000000140B00BE0: mov     r14d, [rax+814h]
 * 0000000140B00BE7: mov     r15, [rax+818h]
 * 0000000140B00BEE: mov     rax, rbx
 * 0000000140B00BF1: cmp     rbx, r11
 * 0000000140B00BF4: jnb     short loc_140B00C06
 * 0000000140B00BF6: mov     ecx, 40h ; '@'
 * 0000000140B00BFB: prefetchnta byte ptr [rax]
 * 0000000140B00BFE: add     rax, rcx
 * 0000000140B00C01: cmp     rax, r11
 * 0000000140B00C04: jb      short loc_140B00BFB
 * 0000000140B00C06: mov     r11d, r9d
 * 0000000140B00C09: mov     r8, r15
 * 0000000140B00C0C: shr     r11d, 7
 * 0000000140B00C10: test    r11d, r11d
 * 0000000140B00C13: jz      short loc_140B00C80
 * 0000000140B00C15: mov     r13, 7010008004002001h
 * 0000000140B00C1F: mov     eax, 8
 * 0000000140B00C24: xor     r8, [r10]
 * 0000000140B00C27: mov     ecx, r14d
 * 0000000140B00C2A: rol     r8, cl
 * 0000000140B00C2D: xor     r8, [r10+8]
 * 0000000140B00C31: add     r10, 10h
 * 0000000140B00C35: rol     r8, cl
 * 0000000140B00C38: sub     rax, r12
 * 0000000140B00C3B: jnz     short loc_140B00C24
 * 0000000140B00C3D: mov     rcx, r10
 * 0000000140B00C40: sub     rcx, rbx
 * 0000000140B00C43: xor     rcx, r15
 * 0000000140B00C46: mov     rax, rcx
 * 0000000140B00C49: rol     rax, 11h
 * 0000000140B00C4D: xor     rcx, rax
 * 0000000140B00C50: mov     rax, r13
 * 0000000140B00C53: mul     rcx
 * 0000000140B00C56: xor     r14d, edx
 * 0000000140B00C59: mov     [rbp+0A70h+var_608], rdx
 * 0000000140B00C60: xor     r14d, eax
 * 0000000140B00C63: mov     edx, 0FFFFFFFFh
 * 0000000140B00C68: and     r14d, 3Fh
 * 0000000140B00C6C: cmovz   r14d, r12d
 * 0000000140B00C70: add     r11d, edx
 * 0000000140B00C73: jnz     short loc_140B00C1F
 * 0000000140B00C75: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B00C7A: mov     r13, [rbp+0A70h+var_A98]
 * 0000000140B00C7E: jmp     short loc_140B00C85
 * 0000000140B00C80: mov     edx, 0FFFFFFFFh
 * 0000000140B00C85: and     r9d, 7Fh
 * 0000000140B00C89: cmp     r9d, 8
 * 0000000140B00C8D: jb      short loc_140B00CAC
 * 0000000140B00C8F: mov     eax, r9d
 * 0000000140B00C92: shr     rax, 3
 * 0000000140B00C96: xor     r8, [r10]
 * 0000000140B00C99: mov     ecx, r14d
 * 0000000140B00C9C: rol     r8, cl
 * 0000000140B00C9F: add     r10, 8
 * 0000000140B00CA3: add     r9d, 0FFFFFFF8h
 * 0000000140B00CA7: sub     rax, r12
 * 0000000140B00CAA: jnz     short loc_140B00C96
 * 0000000140B00CAC: test    r9d, r9d
 * 0000000140B00CAF: jz      short loc_140B00CC6
 * 0000000140B00CB1: movzx   eax, byte ptr [r10]
 * 0000000140B00CB5: mov     ecx, r14d
 * 0000000140B00CB8: xor     r8, rax
 * 0000000140B00CBB: add     r10, r12
 * 0000000140B00CBE: rol     r8, cl
 * 0000000140B00CC1: add     r9d, edx
 * 0000000140B00CC4: jnz     short loc_140B00CB1
 * 0000000140B00CC6: mov     rax, r8
 * 0000000140B00CC9: jmp     short loc_140B00CCE
 * 0000000140B00CCB: xor     r8d, eax
 * 0000000140B00CCE: shr     rax, 1Fh
 * 0000000140B00CD2: test    rax, rax
 * 0000000140B00CD5: jnz     short loc_140B00CCB
 * 0000000140B00CD7: mov     r14, [rbp+0A70h+var_A70]
 * 0000000140B00CDB: btr     r8d, 1Fh
 * 0000000140B00CE0: mov     r15d, [rsp+0B70h+var_B00]
 * 0000000140B00CE5: mov     [r14+14h], r8d
 * 0000000140B00CE9: mov     rdx, [rbp+0A70h+var_AB0]
 * 0000000140B00CED: cmp     r13, rdx
 * 0000000140B00CF0: jz      short loc_140B00D37
 * 0000000140B00CF2: mov     eax, [r13+0]
 * 0000000140B00CF6: mov     ecx, [r13+4]
 * 0000000140B00CFA: cmp     eax, dword ptr [rbp+0A70h+var_AD8]
 * 0000000140B00CFD: jb      short loc_140B00D37
 * 0000000140B00CFF: cmp     ecx, r15d
 * 0000000140B00D02: ja      short loc_140B00D37
 * 0000000140B00D04: mov     r8, [rsp+0B70h+var_B08]
 * 0000000140B00D09: cmp     r8, rdx
 * 0000000140B00D0C: jz      short loc_140B00D2B
 * 0000000140B00D0E: mov     rax, [rbp+0A70h+var_AE8]
 * 0000000140B00D12: mov     byte ptr [rax], 80h
 * 0000000140B00D15: inc     rax
 * 0000000140B00D18: mov     [rbp+0A70h+var_AE8], rax
 * 0000000140B00D1C: mov     eax, 0Ch
 * 0000000140B00D21: add     r8, rax
 * 0000000140B00D24: mov     [rsp+0B70h+var_B08], r8
 * 0000000140B00D29: jmp     short loc_140B00D30
 * 0000000140B00D2B: mov     eax, 0Ch
 * 0000000140B00D30: add     r13, rax
 * 0000000140B00D33: mov     [rbp+0A70h+var_A98], r13
 * 0000000140B00D37: mov     r13, [rsp+0B70h+var_B18]
 * 0000000140B00D3C: add     r14, 18h
 * 0000000140B00D40: mov     r11, [rbp+0A70h+var_AC8]
 * 0000000140B00D44: add     r13, 28h ; '('
 * 0000000140B00D48: mov     r15d, 1
 * 0000000140B00D4E: mov     [rbp+0A70h+var_A70], r14
 * 0000000140B00D52: mov     [rsp+0B70h+var_B18], r13
 * 0000000140B00D57: cmp     r14, [rsp+0B70h+var_AF8]
 * 0000000140B00D5C: jnz     loc_140B004EB
 * 0000000140B00D62: mov     rbx, [rbp+0A70h+var_A48]
 * 0000000140B00D66: mov     [rbp+0A70h+var_A30], rbx
 * 0000000140B00D6A: xor     eax, eax
 * 0000000140B00D6C: mov     ecx, eax
 * 0000000140B00D6E: mov     rbx, [rbp+0A70h+var_AB8]
 * 0000000140B00D72: mov     rdx, [rsp+0B70h+var_B20]
 * 0000000140B00D77: mov     r8d, 80000000h
 * 0000000140B00D7D: mov     rax, [rbp+0A70h+var_A30]
 * 0000000140B00D81: sub     rax, rsi
 * 0000000140B00D84: mov     rsi, [rbp+0A70h+var_A30]
 * 0000000140B00D88: add     rdx, rax
 * 0000000140B00D8B: mov     [rsp+0B70h+var_B10], rsi
 * 0000000140B00D90: lea     eax, [rcx+r8]
 * 0000000140B00D94: mov     [rsp+0B70h+var_B20], rdx
 * 0000000140B00D99: test    r8d, eax
 * 0000000140B00D9C: jnz     short loc_140B00DA6
 * 0000000140B00D9E: cmp     ecx, 0C000010Eh
 * 0000000140B00DA4: jnz     short loc_140B00DAA
 * 0000000140B00DA6: mov     [rdx+28h], rbx
 * 0000000140B00DAA: mov     r13d, [rbp+0A70h+var_A8C]
 * 0000000140B00DAE: mov     r12d, 1
 * 0000000140B00DB4: jmp     loc_140B0120D
 * 0000000140B00DB9: mov     rbx, r13
 * 0000000140B00DBC: mov     [rbp+0A70h+var_A8C], eax
 * 0000000140B00DBF: mov     r13, rax
 * 0000000140B00DC2: mov     r15d, eax
 * 0000000140B00DC5: mov     r12d, eax
 * 0000000140B00DC8: mov     [rbp+0A70h+var_A14], eax
 * 0000000140B00DCB: mov     rax, [rsi+2F8h]
 * 0000000140B00DD2: lea     r8, [rbp+0A70h+var_938]
 * 0000000140B00DD9: lea     rdx, [rbp+0A70h+var_A14]
 * 0000000140B00DDD: mov     ecx, r12d
 * 0000000140B00DE0: call    KeGuardDispatchICall
 * 0000000140B00DE5: test    eax, eax
 * 0000000140B00DE7: jz      loc_140B00F2F
 * 0000000140B00DED: mov     rax, [rsi+2D8h]
 * 0000000140B00DF4: mov     rcx, [rbp+0A70h+var_938]
 * 0000000140B00DFB: call    KeGuardDispatchICall
 * 0000000140B00E00: mov     r14, rax
 * 0000000140B00E03: test    rax, rax
 * 0000000140B00E06: jz      short loc_140B00DCB
 * 0000000140B00E08: mov     rax, [rsi+2E0h]
 * 0000000140B00E0F: mov     edi, 1
 * 0000000140B00E14: add     r15d, edi
 * 0000000140B00E17: mov     rcx, r14
 * 0000000140B00E1A: mov     [rbp+0A70h+var_A8C], r15d
 * 0000000140B00E1E: call    KeGuardDispatchICall
 * 0000000140B00E23: mov     r15, rax
 * 0000000140B00E26: lea     rdx, [rbp+0A70h+var_600]
 * 0000000140B00E2D: mov     rax, [rsi+208h]
 * 0000000140B00E34: mov     rcx, r15
 * 0000000140B00E37: call    KeGuardDispatchICall
 * 0000000140B00E3C: test    rax, rax
 * 0000000140B00E3F: jz      short loc_140B00E60
 * 0000000140B00E41: mov     rax, [rsi+2E8h]
 * 0000000140B00E48: mov     rdx, r14
 * 0000000140B00E4B: mov     rcx, [rbp+0A70h+var_938]
 * 0000000140B00E52: call    KeGuardDispatchICall
 * 0000000140B00E57: mov     r15d, [rbp+0A70h+var_A8C]
 * 0000000140B00E5B: jmp     loc_140B00DCB
 * 0000000140B00E60: test    dword ptr [rsi+990h], 40000000h
 * 0000000140B00E6A: jz      short loc_140B00EB5
 * 0000000140B00E6C: mov     rcx, [rsi+0A80h]
 * 0000000140B00E73: mov     edx, 30h ; '0'
 * 0000000140B00E78: lea     r8d, [rdx-2Ah]
 * 0000000140B00E7C: mov     rax, [rbx]
 * 0000000140B00E7F: add     edx, 0FFFFFFF8h
 * 0000000140B00E82: mov     [rcx], rax
 * 0000000140B00E85: add     rbx, 8
 * 0000000140B00E89: add     rcx, 8
 * 0000000140B00E8D: sub     r8, rdi
 * 0000000140B00E90: jnz     short loc_140B00E7C
 * 0000000140B00E92: test    edx, edx
 * 0000000140B00E94: jz      short loc_140B00EAE
 * 0000000140B00E96: mov     esi, 0FFFFFFFFh
 * 0000000140B00E9B: mov     al, [rbx]
 * 0000000140B00E9D: add     rbx, rdi
 * 0000000140B00EA0: mov     [rcx], al
 * 0000000140B00EA2: add     rcx, rdi
 * 0000000140B00EA5: add     edx, esi
 * 0000000140B00EA7: jnz     short loc_140B00E9B
 * 0000000140B00EA9: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B00EAE: mov     rbx, [rsi+0A80h]
 * 0000000140B00EB5: mov     [rbx+18h], r15
 * 0000000140B00EB9: mov     rax, [rsi+588h]
 * 0000000140B00EC0: mov     [rax], rbx
 * 0000000140B00EC3: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140B00ECA: mov     rax, [rsi+588h]
 * 0000000140B00ED1: mov     [rax+8], r15
 * 0000000140B00ED5: mov     dword ptr [rax+14h], 1000h
 * 0000000140B00EDC: xor     eax, eax
 * 0000000140B00EDE: cmp     [rsi+8F8h], eax
 * 0000000140B00EE4: jnz     short loc_140B00F2F
 * 0000000140B00EE6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B00EF0: xor     edx, edx
 * 0000000140B00EF2: add     rax, rsi
 * 0000000140B00EF5: mov     rcx, rsi
 * 0000000140B00EF8: mov     [rsi+900h], rax
 * 0000000140B00EFF: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B00F09: add     rax, rbx
 * 0000000140B00F0C: mov     [rsi+908h], rax
 * 0000000140B00F13: movsxd  rax, dword ptr [rbx]
 * 0000000140B00F16: mov     [rsi+910h], rax
 * 0000000140B00F1D: mov     [rsi+918h], r13
 * 0000000140B00F24: mov     [rsi+8F8h], edi
 * 0000000140B00F2A: call    $$ba
 * 0000000140B00F2F: mov     r15d, [rbp+0A70h+var_A8C]
 * 0000000140B00F33: mov     eax, 1
 * 0000000140B00F38: add     r12d, eax
 * 0000000140B00F3B: add     r13, rax
 * 0000000140B00F3E: mov     eax, 0
 * 0000000140B00F43: cmp     r12d, 3
 * 0000000140B00F47: jb      loc_140B00DC8
 * 0000000140B00F4D: mov     r13d, r15d
 * 0000000140B00F50: lea     r12d, [rax+1]
 * 0000000140B00F54: jmp     loc_140B01206
 * 0000000140B00F59: mov     rbx, r13
 * 0000000140B00F5C: mov     [rbp+0A70h+var_890], rax
 * 0000000140B00F63: mov     r13d, eax
 * 0000000140B00F66: mov     r15, cr8
 * 0000000140B00F6A: mov     [rbp+0A70h+arg_8], r15
 * 0000000140B00F71: mov     eax, 0Ch
 * 0000000140B00F76: mov     cr8, rax
 * 0000000140B00F7A: mov     rax, [rsi+308h]
 * 0000000140B00F81: lea     rcx, [rbp+0A70h+var_890]
 * 0000000140B00F88: call    KeGuardDispatchICall
 * 0000000140B00F8D: mov     r14, rax
 * 0000000140B00F90: test    rax, rax
 * 0000000140B00F93: jz      loc_140B010BA
 * 0000000140B00F99: mov     rax, [rsi+208h]
 * 0000000140B00FA0: lea     rdx, [rbp+0A70h+var_5F8]
 * 0000000140B00FA7: mov     rcx, r14
 * 0000000140B00FAA: add     r13d, r12d
 * 0000000140B00FAD: call    KeGuardDispatchICall
 * 0000000140B00FB2: test    rax, rax
 * 0000000140B00FB5: jnz     loc_140B0108D
 * 0000000140B00FBB: test    dword ptr [rsi+990h], 40000000h
 * 0000000140B00FC5: jz      short loc_140B0100E
 * 0000000140B00FC7: mov     rcx, [rsi+0A80h]
 * 0000000140B00FCE: lea     edx, [rax+30h]
 * 0000000140B00FD1: lea     r8d, [rax+6]
 * 0000000140B00FD5: mov     rax, [rbx]
 * 0000000140B00FD8: add     edx, 0FFFFFFF8h
 * 0000000140B00FDB: mov     [rcx], rax
 * 0000000140B00FDE: add     rbx, 8
 * 0000000140B00FE2: add     rcx, 8
 * 0000000140B00FE6: sub     r8, r12
 * 0000000140B00FE9: jnz     short loc_140B00FD5
 * 0000000140B00FEB: test    edx, edx
 * 0000000140B00FED: jz      short loc_140B01007
 * 0000000140B00FEF: mov     esi, 0FFFFFFFFh
 * 0000000140B00FF4: mov     al, [rbx]
 * 0000000140B00FF6: add     rbx, r12
 * 0000000140B00FF9: mov     [rcx], al
 * 0000000140B00FFB: add     rcx, r12
 * 0000000140B00FFE: add     edx, esi
 * 0000000140B01000: jnz     short loc_140B00FF4
 * 0000000140B01002: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B01007: mov     rbx, [rsi+0A80h]
 * 0000000140B0100E: mov     [rbx+18h], r14
 * 0000000140B01012: mov     rax, [rsi+588h]
 * 0000000140B01019: mov     [rax], rbx
 * 0000000140B0101C: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140B01023: mov     rax, [rsi+588h]
 * 0000000140B0102A: mov     [rax+8], r14
 * 0000000140B0102E: mov     dword ptr [rax+14h], 1000h
 * 0000000140B01035: xor     eax, eax
 * 0000000140B01037: cmp     [rsi+8F8h], eax
 * 0000000140B0103D: jnz     short loc_140B0108D
 * 0000000140B0103F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B01049: xor     edx, edx
 * 0000000140B0104B: add     rax, rsi
 * 0000000140B0104E: mov     rcx, rsi
 * 0000000140B01051: mov     [rsi+900h], rax
 * 0000000140B01058: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B01062: add     rax, rbx
 * 0000000140B01065: mov     [rsi+908h], rax
 * 0000000140B0106C: movsxd  rax, dword ptr [rbx]
 * 0000000140B0106F: mov     [rsi+910h], rax
 * 0000000140B01076: mov     qword ptr [rsi+918h], 4
 * 0000000140B01081: mov     [rsi+8F8h], r12d
 * 0000000140B01088: call    $$ba
 * 0000000140B0108D: mov     rax, [rsi+308h]
 * 0000000140B01094: lea     rcx, [rbp+0A70h+var_890]
 * 0000000140B0109B: call    KeGuardDispatchICall
 * 0000000140B010A0: mov     r14, rax
 * 0000000140B010A3: test    rax, rax
 * 0000000140B010A6: jnz     loc_140B00F99
 * 0000000140B010AC: mov     r15, [rbp+0A70h+arg_8]
 * 0000000140B010B3: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B010BA: movzx   eax, r15b
 * 0000000140B010BE: mov     cr8, rax
 * 0000000140B010C2: jmp     loc_140B0120D
 * 0000000140B010C7: mov     [rbp+0A70h+var_8D0], rax
 * 0000000140B010CE: lea     rcx, [rbp+0A70h+var_8D0]
 * 0000000140B010D5: mov     rbx, r13
 * 0000000140B010D8: mov     r13d, eax
 * 0000000140B010DB: mov     rax, [rsi+300h]
 * 0000000140B010E2: call    KeGuardDispatchICall
 * 0000000140B010E7: mov     r14, rax
 * 0000000140B010EA: test    rax, rax
 * 0000000140B010ED: jz      loc_140B0120D
 * 0000000140B010F3: mov     rax, [rsi+208h]
 * 0000000140B010FA: lea     rdx, [rbp+0A70h+var_5F0]
 * 0000000140B01101: mov     rcx, r14
 * 0000000140B01104: add     r13d, r12d
 * 0000000140B01107: call    KeGuardDispatchICall
 * 0000000140B0110C: test    rax, rax
 * 0000000140B0110F: jnz     loc_140B011E7
 * 0000000140B01115: test    dword ptr [rsi+990h], 40000000h
 * 0000000140B0111F: jz      short loc_140B01168
 * 0000000140B01121: mov     rcx, [rsi+0A80h]
 * 0000000140B01128: lea     edx, [rax+30h]
 * 0000000140B0112B: lea     r8d, [rax+6]
 * 0000000140B0112F: mov     rax, [rbx]
 * 0000000140B01132: add     edx, 0FFFFFFF8h
 * 0000000140B01135: mov     [rcx], rax
 * 0000000140B01138: add     rbx, 8
 * 0000000140B0113C: add     rcx, 8
 * 0000000140B01140: sub     r8, r12
 * 0000000140B01143: jnz     short loc_140B0112F
 * 0000000140B01145: test    edx, edx
 * 0000000140B01147: jz      short loc_140B01161
 * 0000000140B01149: mov     esi, 0FFFFFFFFh
 * 0000000140B0114E: mov     al, [rbx]
 * 0000000140B01150: add     rbx, r12
 * 0000000140B01153: mov     [rcx], al
 * 0000000140B01155: add     rcx, r12
 * 0000000140B01158: add     edx, esi
 * 0000000140B0115A: jnz     short loc_140B0114E
 * 0000000140B0115C: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B01161: mov     rbx, [rsi+0A80h]
 * 0000000140B01168: mov     [rbx+18h], r14
 * 0000000140B0116C: mov     rax, [rsi+588h]
 * 0000000140B01173: mov     [rax], rbx
 * 0000000140B01176: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140B0117D: mov     rax, [rsi+588h]
 * 0000000140B01184: mov     [rax+8], r14
 * 0000000140B01188: mov     dword ptr [rax+14h], 1000h
 * 0000000140B0118F: xor     eax, eax
 * 0000000140B01191: cmp     [rsi+8F8h], eax
 * 0000000140B01197: jnz     short loc_140B011E7
 * 0000000140B01199: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B011A3: xor     edx, edx
 * 0000000140B011A5: add     rax, rsi
 * 0000000140B011A8: mov     rcx, rsi
 * 0000000140B011AB: mov     [rsi+900h], rax
 * 0000000140B011B2: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B011BC: add     rax, rbx
 * 0000000140B011BF: mov     [rsi+908h], rax
 * 0000000140B011C6: movsxd  rax, dword ptr [rbx]
 * 0000000140B011C9: mov     [rsi+910h], rax
 * 0000000140B011D0: mov     qword ptr [rsi+918h], 3
 * 0000000140B011DB: mov     [rsi+8F8h], r12d
 * 0000000140B011E2: call    $$ba
 * 0000000140B011E7: mov     rax, [rsi+300h]
 * 0000000140B011EE: lea     rcx, [rbp+0A70h+var_8D0]
 * 0000000140B011F5: call    KeGuardDispatchICall
 * 0000000140B011FA: mov     r14, rax
 * 0000000140B011FD: test    rax, rax
 * 0000000140B01200: jnz     loc_140B010F3
 * 0000000140B01206: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0120D: shl     r13d, 0Ch
 * 0000000140B01211: add     [rsi+828h], r13d
 * 0000000140B01218: mov     eax, [rsi+828h]
 * 0000000140B0121E: add     [rsi+824h], r12d
 * 0000000140B01225: cmp     eax, [rsi+82Ch]
 * 0000000140B0122B: jge     short loc_140B01243
 * 0000000140B0122D: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B01232: mov     r11d, 40000000h
 * 0000000140B01238: jmp     loc_140AFEB9C
 * 0000000140B0123D: mov     [rsi+824h], eax
 * 0000000140B01243: mov     [rsp+0B70h+var_B10], rsi
 * 0000000140B01248: jmp     loc_140AFC148
 * 0000000140B0124D: mov     edx, [r13+2Ch]
 * 0000000140B01251: lea     rcx, [rbp+0A70h+var_2F0]
 * 0000000140B01258: mov     rax, [rsi+1A0h]
 * 0000000140B0125F: mov     ebx, [r13+28h]
 * 0000000140B01263: call    KeGuardDispatchICall
 * 0000000140B01268: mov     rax, [rsi+1D0h]
 * 0000000140B0126F: lea     rdx, [rbp+0A70h+var_1A0]
 * 0000000140B01276: lea     rcx, [rbp+0A70h+var_2F0]
 * 0000000140B0127D: call    KeGuardDispatchICall
 * 0000000140B01282: test    ebx, ebx
 * 0000000140B01284: mov     rbx, cr4
 * 0000000140B01287: jnz     short loc_140B0128C
 * 0000000140B01289: mov     rbx, cr0
 * 0000000140B0128C: lea     rcx, [rbp+0A70h+var_1A0]
 * 0000000140B01293: mov     rax, [rsi+198h]
 * 0000000140B0129A: call    KeGuardDispatchICall
 * 0000000140B0129F: mov     r8, [r13+18h]
 * 0000000140B012A3: mov     rdx, [r13+20h]
 * 0000000140B012A7: and     r8, rbx
 * 0000000140B012AA: cmp     r8, rdx
 * 0000000140B012AD: jz      loc_140AFC39B
 * 0000000140B012B3: mov     eax, [r13+28h]
 * 0000000140B012B7: mov     ecx, [r13+2Ch]
 * 0000000140B012BB: shl     rcx, 20h
 * 0000000140B012BF: or      rcx, rax
 * 0000000140B012C2: xor     eax, eax
 * 0000000140B012C4: cmp     [rsi+8F8h], eax
 * 0000000140B012CA: jnz     loc_140AFC050
 * 0000000140B012D0: mov     rax, [rsi+588h]
 * 0000000140B012D7: xor     rdx, r8
 * 0000000140B012DA: mov     [rax+18h], rdx
 * 0000000140B012DE: jmp     loc_140AFC3D3
 * 0000000140B012E3: cmp     dword ptr [rsi+958h], 0Bh
 * 0000000140B012EA: jnz     loc_140AFC39B
 * 0000000140B012F0: add     dword ptr [rsi+828h], 100h
 * 0000000140B012FA: mov     r15, [rsi+580h]
 * 0000000140B01301: mov     rax, [rsi+2D8h]
 * 0000000140B01308: mov     rcx, r15
 * 0000000140B0130B: call    KeGuardDispatchICall
 * 0000000140B01310: mov     r14, rax
 * 0000000140B01313: xor     eax, eax
 * 0000000140B01315: test    r14, r14
 * 0000000140B01318: jz      loc_140AFC050
 * 0000000140B0131E: mov     rax, [rsi+2E0h]
 * 0000000140B01325: mov     rcx, r14
 * 0000000140B01328: call    KeGuardDispatchICall
 * 0000000140B0132D: mov     rbx, rax
 * 0000000140B01330: xor     r8d, r8d
 * 0000000140B01333: mov     rax, [r13+18h]
 * 0000000140B01337: test    rax, rax
 * 0000000140B0133A: jz      short loc_140B013A6
 * 0000000140B0133C: lea     r12d, [r8+1]
 * 0000000140B01340: cmp     rax, rbx
 * 0000000140B01343: jz      loc_140B0142F
 * 0000000140B01349: cmp     [rsi+8F8h], r8d
 * 0000000140B01350: jnz     loc_140B0142F
 * 0000000140B01356: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B01360: xor     edx, edx
 * 0000000140B01362: add     rax, rsi
 * 0000000140B01365: mov     rcx, rsi
 * 0000000140B01368: mov     [rsi+900h], rax
 * 0000000140B0136F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B01379: add     rax, r13
 * 0000000140B0137C: mov     [rsi+908h], rax
 * 0000000140B01383: movsxd  rax, dword ptr [r13+0]
 * 0000000140B01387: mov     [rsi+910h], rax
 * 0000000140B0138E: mov     [rsi+918h], rbx
 * 0000000140B01395: mov     [rsi+8F8h], r12d
 * 0000000140B0139C: call    $$ba
 * 0000000140B013A1: jmp     loc_140B0142F
 * 0000000140B013A6: mov     eax, [rsi+974h]
 * 0000000140B013AC: mov     rcx, [rsi+978h]
 * 0000000140B013B3: test    rax, rax
 * 0000000140B013B6: jz      short loc_140B013C9
 * 0000000140B013B8: lea     rdx, [rax-1]
 * 0000000140B013BC: add     rdx, rcx
 * 0000000140B013BF: cmp     rbx, rcx
 * 0000000140B013C2: jb      short loc_140B013C9
 * 0000000140B013C4: cmp     rbx, rdx
 * 0000000140B013C7: jbe     short loc_140B01425
 * 0000000140B013C9: mov     r12d, 1
 * 0000000140B013CF: cmp     [rsi+8F8h], r8d
 * 0000000140B013D6: jnz     short loc_140B0142B
 * 0000000140B013D8: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B013E2: xor     edx, edx
 * 0000000140B013E4: add     rax, rsi
 * 0000000140B013E7: mov     rcx, rsi
 * 0000000140B013EA: mov     [rsi+900h], rax
 * 0000000140B013F1: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B013FB: add     rax, r13
 * 0000000140B013FE: mov     [rsi+908h], rax
 * 0000000140B01405: movsxd  rax, dword ptr [r13+0]
 * 0000000140B01409: mov     [rsi+910h], rax
 * 0000000140B01410: mov     [rsi+918h], rbx
 * 0000000140B01417: mov     [rsi+8F8h], r12d
 * 0000000140B0141E: call    $$ba
 * 0000000140B01423: jmp     short loc_140B0142B
 * 0000000140B01425: mov     r12d, 1
 * 0000000140B0142B: mov     [r13+18h], rbx
 * 0000000140B0142F: mov     rax, [rsi+2E8h]
 * 0000000140B01436: mov     rdx, r14
 * 0000000140B01439: mov     rcx, r15
 * 0000000140B0143C: call    KeGuardDispatchICall
 * 0000000140B01441: jmp     loc_140AFC148
 * 0000000140B01446: xor     eax, eax
 * 0000000140B01448: lea     r12d, [rax+1]
 * 0000000140B0144C: cmp     [rsi+980h], rax
 * 0000000140B01453: jz      loc_140B01905
 * 0000000140B01459: mov     ecx, [rsi+994h]
 * 0000000140B0145F: mov     eax, ecx
 * 0000000140B01461: shr     eax, 2
 * 0000000140B01464: and     eax, r12d
 * 0000000140B01467: jnz     loc_140B01903
 * 0000000140B0146D: xor     edx, edx
 * 0000000140B0146F: cmp     [rsi+824h], edx
 * 0000000140B01475: jnz     short loc_140B0148D
 * 0000000140B01477: lea     eax, ds:0[rcx*8]
 * 0000000140B0147E: xor     eax, ecx
 * 0000000140B01480: and     eax, 20h
 * 0000000140B01483: xor     eax, ecx
 * 0000000140B01485: mov     [rsi+994h], eax
 * 0000000140B0148B: jmp     short loc_140B014A8
 * 0000000140B0148D: shr     ecx, 5
 * 0000000140B01490: and     ecx, r12d
 * 0000000140B01493: cmp     eax, ecx
 * 0000000140B01495: jz      short loc_140B014A8
 * 0000000140B01497: mov     [rsi+824h], edx
 * 0000000140B0149D: jmp     loc_140AFC148
 * 0000000140B014A2: mov     r12d, 1
 * 0000000140B014A8: mov     r14, [r13+8]
 * 0000000140B014AC: mov     r8d, [r13+10h]
 * 0000000140B014B0: mov     r9, r14
 * 0000000140B014B3: add     [rsi+828h], r8d
 * 0000000140B014BA: mov     rax, r14
 * 0000000140B014BD: mov     r10d, [rsi+814h]
 * 0000000140B014C4: mov     r15, [rsi+818h]
 * 0000000140B014CB: lea     rcx, [r14+r8]
 * 0000000140B014CF: cmp     r14, rcx
 * 0000000140B014D2: jnb     short loc_140B014E4
 * 0000000140B014D4: mov     edx, 40h ; '@'
 * 0000000140B014D9: prefetchnta byte ptr [rax]
 * 0000000140B014DC: add     rax, rdx
 * 0000000140B014DF: cmp     rax, rcx
 * 0000000140B014E2: jb      short loc_140B014D9
 * 0000000140B014E4: mov     r11d, r8d
 * 0000000140B014E7: mov     rbx, r15
 * 0000000140B014EA: shr     r11d, 7
 * 0000000140B014EE: test    r11d, r11d
 * 0000000140B014F1: jz      short loc_140B01561
 * 0000000140B014F3: mov     rdi, 7010008004002001h
 * 0000000140B014FD: mov     eax, 8
 * 0000000140B01502: xor     rbx, [r9]
 * 0000000140B01505: mov     ecx, r10d
 * 0000000140B01508: rol     rbx, cl
 * 0000000140B0150B: xor     rbx, [r9+8]
 * 0000000140B0150F: add     r9, 10h
 * 0000000140B01513: rol     rbx, cl
 * 0000000140B01516: sub     rax, r12
 * 0000000140B01519: jnz     short loc_140B01502
 * 0000000140B0151B: mov     rcx, r9
 * 0000000140B0151E: sub     rcx, r14
 * 0000000140B01521: xor     rcx, r15
 * 0000000140B01524: mov     rax, rcx
 * 0000000140B01527: rol     rax, 11h
 * 0000000140B0152B: xor     rcx, rax
 * 0000000140B0152E: mov     rax, rdi
 * 0000000140B01531: mul     rcx
 * 0000000140B01534: xor     r10d, edx
 * 0000000140B01537: mov     [rbp+0A70h+var_5E8], rdx
 * 0000000140B0153E: xor     r10d, eax
 * 0000000140B01541: mov     edx, 0FFFFFFFFh
 * 0000000140B01546: and     r10d, 3Fh
 * 0000000140B0154A: cmovz   r10d, r12d
 * 0000000140B0154E: add     r11d, edx
 * 0000000140B01551: jnz     short loc_140B014FD
 * 0000000140B01553: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B01558: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0155F: jmp     short loc_140B01566
 * 0000000140B01561: mov     edx, 0FFFFFFFFh
 * 0000000140B01566: and     r8d, 7Fh
 * 0000000140B0156A: cmp     r8d, 8
 * 0000000140B0156E: jb      short loc_140B0158D
 * 0000000140B01570: mov     eax, r8d
 * 0000000140B01573: shr     rax, 3
 * 0000000140B01577: xor     rbx, [r9]
 * 0000000140B0157A: mov     ecx, r10d
 * 0000000140B0157D: rol     rbx, cl
 * 0000000140B01580: add     r9, 8
 * 0000000140B01584: add     r8d, 0FFFFFFF8h
 * 0000000140B01588: sub     rax, r12
 * 0000000140B0158B: jnz     short loc_140B01577
 * 0000000140B0158D: test    r8d, r8d
 * 0000000140B01590: jz      short loc_140B015A7
 * 0000000140B01592: movzx   eax, byte ptr [r9]
 * 0000000140B01596: mov     ecx, r10d
 * 0000000140B01599: xor     rbx, rax
 * 0000000140B0159C: add     r9, r12
 * 0000000140B0159F: rol     rbx, cl
 * 0000000140B015A2: add     r8d, edx
 * 0000000140B015A5: jnz     short loc_140B01592
 * 0000000140B015A7: mov     rax, rbx
 * 0000000140B015AA: shr     rax, 1Fh
 * 0000000140B015AE: xor     ecx, ecx
 * 0000000140B015B0: jmp     short loc_140B015B8
 * 0000000140B015B2: xor     ebx, eax
 * 0000000140B015B4: shr     rax, 1Fh
 * 0000000140B015B8: test    rax, rax
 * 0000000140B015BB: jnz     short loc_140B015B2
 * 0000000140B015BD: btr     ebx, 1Fh
 * 0000000140B015C1: cmp     ebx, [r13+14h]
 * 0000000140B015C5: jz      loc_140B0172C
 * 0000000140B015CB: lock or [rsp+0B70h+var_B70], ecx
 * 0000000140B015CF: mov     eax, [r13+18h]
 * 0000000140B015D3: test    r12b, al
 * 0000000140B015D6: jz      short loc_140B015E9
 * 0000000140B015D8: mov     rax, [rsi+578h]
 * 0000000140B015DF: mov     cl, [rax]
 * 0000000140B015E1: test    cl, cl
 * 0000000140B015E3: jnz     loc_140B0172C
 * 0000000140B015E9: mov     ecx, [r13+10h]
 * 0000000140B015ED: mov     rdx, [r13+8]
 * 0000000140B015F1: test    rcx, rcx
 * 0000000140B015F4: jz      loc_140B016B3
 * 0000000140B015FA: mov     eax, [rsi+994h]
 * 0000000140B01600: mov     r8d, 40h ; '@'
 * 0000000140B01606: test    r8b, al
 * 0000000140B01609: jz      loc_140B016B3
 * 0000000140B0160F: mov     r12, cr8
 * 0000000140B01613: lea     eax, [r8-3Eh]
 * 0000000140B01617: mov     cr8, rax
 * 0000000140B0161B: mov     r14, rdx
 * 0000000140B0161E: lea     rax, [rcx-1]
 * 0000000140B01622: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140B01629: add     rax, rdx
 * 0000000140B0162C: or      rax, 0FFFh
 * 0000000140B01632: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B01639: lea     r13, [r14-1]
 * 0000000140B0163D: movzx   r15d, r12b
 * 0000000140B01641: mov     rax, [rsi+468h]
 * 0000000140B01648: xor     edx, edx
 * 0000000140B0164A: mov     rcx, r14
 * 0000000140B0164D: call    KeGuardDispatchICall
 * 0000000140B01652: cmp     eax, 0C000022Dh
 * 0000000140B01657: jnz     short loc_140B0167D
 * 0000000140B01659: mov     eax, 1
 * 0000000140B0165E: cmp     r12b, al
 * 0000000140B01661: ja      short loc_140B01681
 * 0000000140B01663: movzx   r15d, r12b
 * 0000000140B01667: mov     cr8, r15
 * 0000000140B0166B: mov     al, [r14]
 * 0000000140B0166E: mov     rax, cr8
 * 0000000140B01672: mov     eax, 2
 * 0000000140B01677: mov     cr8, rax
 * 0000000140B0167B: jmp     short loc_140B01641
 * 0000000140B0167D: test    eax, eax
 * 0000000140B0167F: js      short loc_140B016A4
 * 0000000140B01681: mov     r8d, 1000h
 * 0000000140B01687: add     r14, r8
 * 0000000140B0168A: add     r13, r8
 * 0000000140B0168D: cmp     r13, [rbp+0A70h+arg_8]
 * 0000000140B01694: jnz     short loc_140B0163D
 * 0000000140B01696: mov     cr8, r15
 * 0000000140B0169A: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B0169F: jmp     loc_140B0172C
 * 0000000140B016A4: mov     cr8, r15
 * 0000000140B016A8: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B016AD: mov     r12d, 1
 * 0000000140B016B3: mov     eax, [r13+14h]
 * 0000000140B016B7: xor     r14d, r14d
 * 0000000140B016BA: cmp     [rsi+8F8h], r14d
 * 0000000140B016C1: jnz     short loc_140B0172C
 * 0000000140B016C3: mov     ecx, ebx
 * 0000000140B016C5: xor     rcx, rax
 * 0000000140B016C8: mov     rax, [rsi+588h]
 * 0000000140B016CF: mov     [rax+18h], rcx
 * 0000000140B016D3: xor     eax, eax
 * 0000000140B016D5: mov     rcx, [r13+8]
 * 0000000140B016D9: cmp     [rsi+8F8h], eax
 * 0000000140B016DF: jnz     short loc_140B0172C
 * 0000000140B016E1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B016EB: xor     edx, edx
 * 0000000140B016ED: add     rax, rsi
 * 0000000140B016F0: mov     [rsi+900h], rax
 * 0000000140B016F7: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B01701: add     rax, r13
 * 0000000140B01704: mov     [rsi+908h], rax
 * 0000000140B0170B: movsxd  rax, dword ptr [r13+0]
 * 0000000140B0170F: mov     [rsi+910h], rax
 * 0000000140B01716: mov     [rsi+918h], rcx
 * 0000000140B0171D: mov     rcx, rsi
 * 0000000140B01720: mov     [rsi+8F8h], r12d
 * 0000000140B01727: call    $$ba
 * 0000000140B0172C: xor     eax, eax
 * 0000000140B0172E: test    dword ptr [rsi+990h], 40000000h
 * 0000000140B01738: jz      loc_140AFC050
 * 0000000140B0173E: mov     r8d, [r13+10h]
 * 0000000140B01742: test    r8d, r8d
 * 0000000140B01745: jz      loc_140AFC050
 * 0000000140B0174B: mov     rdx, [r13+8]
 * 0000000140B0174F: lea     r9, [rbp+0A70h+var_2D8]
 * 0000000140B01756: mov     rcx, rsi
 * 0000000140B01759: call    sub_1403F152C
 * 0000000140B0175E: mov     r8d, 10h
 * 0000000140B01764: lea     r9, [r13+1Ch]
 * 0000000140B01768: lea     r10, [rbp+0A70h+var_2D8]
 * 0000000140B0176F: mov     rcx, [r10]
 * 0000000140B01772: add     r10, 8
 * 0000000140B01776: mov     rax, [r9]
 * 0000000140B01779: add     r9, 8
 * 0000000140B0177D: cmp     rcx, rax
 * 0000000140B01780: jnz     short loc_140B017BD
 * 0000000140B01782: add     r8d, 0FFFFFFF8h
 * 0000000140B01786: cmp     r8d, 8
 * 0000000140B0178A: jnb     short loc_140B0176F
 * 0000000140B0178C: test    r8d, r8d
 * 0000000140B0178F: jz      loc_140B018F3
 * 0000000140B01795: mov     r11d, 1
 * 0000000140B0179B: movzx   edx, byte ptr [r10]
 * 0000000140B0179F: add     r10, r11
 * 0000000140B017A2: movzx   eax, byte ptr [r9]
 * 0000000140B017A6: add     r9, r11
 * 0000000140B017A9: cmp     rdx, rax
 * 0000000140B017AC: jnz     short loc_140B017C3
 * 0000000140B017AE: mov     eax, 0FFFFFFFFh
 * 0000000140B017B3: add     r8d, eax
 * 0000000140B017B6: jnz     short loc_140B0179B
 * 0000000140B017B8: jmp     loc_140B018F3
 * 0000000140B017BD: mov     r11d, 1
 * 0000000140B017C3: xor     eax, eax
 * 0000000140B017C5: lock or [rsp+0B70h+var_B70], eax
 * 0000000140B017C9: mov     eax, [r13+18h]
 * 0000000140B017CD: test    r11b, al
 * 0000000140B017D0: jz      short loc_140B017E3
 * 0000000140B017D2: mov     rax, [rsi+578h]
 * 0000000140B017D9: mov     cl, [rax]
 * 0000000140B017DB: test    cl, cl
 * 0000000140B017DD: jnz     loc_140B018F3
 * 0000000140B017E3: mov     edx, [r13+10h]
 * 0000000140B017E7: mov     rcx, [r13+8]
 * 0000000140B017EB: test    rdx, rdx
 * 0000000140B017EE: jz      loc_140B0189E
 * 0000000140B017F4: mov     eax, [rsi+994h]
 * 0000000140B017FA: mov     r8d, 40h ; '@'
 * 0000000140B01800: test    r8b, al
 * 0000000140B01803: jz      loc_140B0189E
 * 0000000140B01809: mov     r15, cr8
 * 0000000140B0180D: lea     eax, [r8-3Eh]
 * 0000000140B01811: mov     cr8, rax
 * 0000000140B01815: mov     rbx, rcx
 * 0000000140B01818: lea     r13, [rdx-1]
 * 0000000140B0181C: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140B01823: add     r13, rcx
 * 0000000140B01826: or      r13, 0FFFh
 * 0000000140B0182D: lea     r12, [rbx-1]
 * 0000000140B01831: movzx   r14d, r15b
 * 0000000140B01835: mov     rax, [rsi+468h]
 * 0000000140B0183C: xor     edx, edx
 * 0000000140B0183E: mov     rcx, rbx
 * 0000000140B01841: call    KeGuardDispatchICall
 * 0000000140B01846: cmp     eax, 0C000022Dh
 * 0000000140B0184B: jnz     short loc_140B01870
 * 0000000140B0184D: mov     eax, 1
 * 0000000140B01852: cmp     r15b, al
 * 0000000140B01855: ja      short loc_140B01874
 * 0000000140B01857: movzx   r14d, r15b
 * 0000000140B0185B: mov     cr8, r14
 * 0000000140B0185F: mov     al, [rbx]
 * 0000000140B01861: mov     rax, cr8
 * 0000000140B01865: mov     eax, 2
 * 0000000140B0186A: mov     cr8, rax
 * 0000000140B0186E: jmp     short loc_140B01835
 * 0000000140B01870: test    eax, eax
 * 0000000140B01872: js      short loc_140B0188B
 * 0000000140B01874: mov     r8d, 1000h
 * 0000000140B0187A: add     rbx, r8
 * 0000000140B0187D: add     r12, r8
 * 0000000140B01880: cmp     r12, r13
 * 0000000140B01883: jnz     short loc_140B01831
 * 0000000140B01885: mov     cr8, r14
 * 0000000140B01889: jmp     short loc_140B018F3
 * 0000000140B0188B: mov     cr8, r14
 * 0000000140B0188F: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B01894: mov     r11d, 1
 * 0000000140B0189A: mov     rcx, [r13+8]
 * 0000000140B0189E: xor     eax, eax
 * 0000000140B018A0: cmp     [rsi+8F8h], eax
 * 0000000140B018A6: jnz     short loc_140B018F3
 * 0000000140B018A8: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B018B2: xor     edx, edx
 * 0000000140B018B4: add     rax, rsi
 * 0000000140B018B7: mov     [rsi+900h], rax
 * 0000000140B018BE: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B018C8: add     rax, r13
 * 0000000140B018CB: mov     [rsi+908h], rax
 * 0000000140B018D2: movsxd  rax, dword ptr [r13+0]
 * 0000000140B018D6: mov     [rsi+910h], rax
 * 0000000140B018DD: mov     [rsi+918h], rcx
 * 0000000140B018E4: mov     rcx, rsi
 * 0000000140B018E7: mov     [rsi+8F8h], r11d
 * 0000000140B018EE: call    $$ba
 * 0000000140B018F3: mov     rax, [rsp+0B70h+var_B20]
 * 0000000140B018F8: mov     eax, [rax+10h]
 * 0000000140B018FB: shl     eax, 4
 * 0000000140B018FE: jmp     loc_140AFD09C
 * 0000000140B01903: xor     eax, eax
 * 0000000140B01905: mov     [rsi+824h], eax
 * 0000000140B0190B: jmp     loc_140AFC148
 * 0000000140B01910: mov     r14, [r13+8]
 * 0000000140B01914: mov     r8d, [r13+10h]
 * 0000000140B01918: mov     r9, r14
 * 0000000140B0191B: add     [rsi+828h], r8d
 * 0000000140B01922: mov     rax, r14
 * 0000000140B01925: mov     r10d, [rsi+814h]
 * 0000000140B0192C: mov     r15, [rsi+818h]
 * 0000000140B01933: lea     rcx, [r14+r8]
 * 0000000140B01937: cmp     r14, rcx
 * 0000000140B0193A: jnb     short loc_140B0194C
 * 0000000140B0193C: mov     edx, 40h ; '@'
 * 0000000140B01941: prefetchnta byte ptr [rax]
 * 0000000140B01944: add     rax, rdx
 * 0000000140B01947: cmp     rax, rcx
 * 0000000140B0194A: jb      short loc_140B01941
 * 0000000140B0194C: mov     r11d, r8d
 * 0000000140B0194F: mov     rbx, r15
 * 0000000140B01952: shr     r11d, 7
 * 0000000140B01956: mov     edx, 1
 * 0000000140B0195B: mov     r12d, 0FFFFFFFFh
 * 0000000140B01961: test    r11d, r11d
 * 0000000140B01964: jz      short loc_140B019D2
 * 0000000140B01966: mov     rdi, 7010008004002001h
 * 0000000140B01970: mov     eax, 8
 * 0000000140B01975: xor     rbx, [r9]
 * 0000000140B01978: mov     ecx, r10d
 * 0000000140B0197B: rol     rbx, cl
 * 0000000140B0197E: xor     rbx, [r9+8]
 * 0000000140B01982: add     r9, 10h
 * 0000000140B01986: rol     rbx, cl
 * 0000000140B01989: sub     rax, rdx
 * 0000000140B0198C: jnz     short loc_140B01975
 * 0000000140B0198E: mov     rcx, r9
 * 0000000140B01991: sub     rcx, r14
 * 0000000140B01994: xor     rcx, r15
 * 0000000140B01997: mov     rax, rcx
 * 0000000140B0199A: rol     rax, 11h
 * 0000000140B0199E: xor     rcx, rax
 * 0000000140B019A1: mov     rax, rdi
 * 0000000140B019A4: mul     rcx
 * 0000000140B019A7: xor     r10d, edx
 * 0000000140B019AA: mov     [rbp+0A70h+var_5E0], rdx
 * 0000000140B019B1: xor     r10d, eax
 * 0000000140B019B4: mov     edx, 1
 * 0000000140B019B9: and     r10d, 3Fh
 * 0000000140B019BD: cmovz   r10d, edx
 * 0000000140B019C1: add     r11d, r12d
 * 0000000140B019C4: jnz     short loc_140B01970
 * 0000000140B019C6: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B019CB: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B019D2: and     r8d, 7Fh
 * 0000000140B019D6: cmp     r8d, 8
 * 0000000140B019DA: jb      short loc_140B019F9
 * 0000000140B019DC: mov     eax, r8d
 * 0000000140B019DF: shr     rax, 3
 * 0000000140B019E3: xor     rbx, [r9]
 * 0000000140B019E6: mov     ecx, r10d
 * 0000000140B019E9: rol     rbx, cl
 * 0000000140B019EC: add     r9, 8
 * 0000000140B019F0: add     r8d, 0FFFFFFF8h
 * 0000000140B019F4: sub     rax, rdx
 * 0000000140B019F7: jnz     short loc_140B019E3
 * 0000000140B019F9: test    r8d, r8d
 * 0000000140B019FC: jz      short loc_140B01A13
 * 0000000140B019FE: movzx   eax, byte ptr [r9]
 * 0000000140B01A02: mov     ecx, r10d
 * 0000000140B01A05: xor     rbx, rax
 * 0000000140B01A08: add     r9, rdx
 * 0000000140B01A0B: rol     rbx, cl
 * 0000000140B01A0E: add     r8d, r12d
 * 0000000140B01A11: jnz     short loc_140B019FE
 * 0000000140B01A13: mov     rax, rbx
 * 0000000140B01A16: jmp     short loc_140B01A1A
 * 0000000140B01A18: xor     ebx, eax
 * 0000000140B01A1A: shr     rax, 1Fh
 * 0000000140B01A1E: test    rax, rax
 * 0000000140B01A21: jnz     short loc_140B01A18
 * 0000000140B01A23: btr     ebx, 1Fh
 * 0000000140B01A27: mov     r12d, eax
 * 0000000140B01A2A: cmp     ebx, [r13+14h]
 * 0000000140B01A2E: jz      loc_140B01B97
 * 0000000140B01A34: cmp     [r13+0], eax
 * 0000000140B01A38: jnz     short loc_140B01A42
 * 0000000140B01A3A: cmp     [r13+18h], eax
 * 0000000140B01A3E: cmovnz  r12d, edx
 * 0000000140B01A42: mov     ecx, [r13+10h]
 * 0000000140B01A46: mov     rdx, [r13+8]
 * 0000000140B01A4A: test    rcx, rcx
 * 0000000140B01A4D: jz      loc_140B01B1C
 * 0000000140B01A53: mov     eax, [rsi+994h]
 * 0000000140B01A59: mov     r8d, 40h ; '@'
 * 0000000140B01A5F: test    r8b, al
 * 0000000140B01A62: jz      loc_140B01B1C
 * 0000000140B01A68: mov     r13, cr8
 * 0000000140B01A6C: lea     eax, [r8-3Eh]
 * 0000000140B01A70: mov     cr8, rax
 * 0000000140B01A74: mov     r14, rdx
 * 0000000140B01A77: lea     rax, [rcx-1]
 * 0000000140B01A7B: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140B01A82: add     rax, rdx
 * 0000000140B01A85: or      rax, 0FFFh
 * 0000000140B01A8B: mov     [rsp+0B70h+var_AF8], rax
 * 0000000140B01A90: lea     rax, [r14-1]
 * 0000000140B01A94: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B01A9B: movzx   r15d, r13b
 * 0000000140B01A9F: mov     rax, [rsi+468h]
 * 0000000140B01AA6: xor     edx, edx
 * 0000000140B01AA8: mov     rcx, r14
 * 0000000140B01AAB: call    KeGuardDispatchICall
 * 0000000140B01AB0: cmp     eax, 0C000022Dh
 * 0000000140B01AB5: jnz     short loc_140B01AE0
 * 0000000140B01AB7: test    r12d, r12d
 * 0000000140B01ABA: jnz     short loc_140B01B13
 * 0000000140B01ABC: lea     eax, [r12+1]
 * 0000000140B01AC1: cmp     r13b, al
 * 0000000140B01AC4: ja      short loc_140B01AE4
 * 0000000140B01AC6: movzx   r15d, r13b
 * 0000000140B01ACA: mov     cr8, r15
 * 0000000140B01ACE: mov     al, [r14]
 * 0000000140B01AD1: mov     rax, cr8
 * 0000000140B01AD5: lea     eax, [r12+2]
 * 0000000140B01ADA: mov     cr8, rax
 * 0000000140B01ADE: jmp     short loc_140B01A9F
 * 0000000140B01AE0: test    eax, eax
 * 0000000140B01AE2: js      short loc_140B01B13
 * 0000000140B01AE4: mov     rax, [rbp+0A70h+arg_8]
 * 0000000140B01AEB: mov     r8d, 1000h
 * 0000000140B01AF1: add     rax, r8
 * 0000000140B01AF4: add     r14, r8
 * 0000000140B01AF7: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B01AFE: cmp     rax, [rsp+0B70h+var_AF8]
 * 0000000140B01B03: jnz     short loc_140B01A9B
 * 0000000140B01B05: mov     cr8, r15
 * 0000000140B01B09: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B01B0E: jmp     loc_140B01B97
 * 0000000140B01B13: mov     cr8, r15
 * 0000000140B01B17: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B01B1C: mov     eax, [r13+14h]
 * 0000000140B01B20: xor     ecx, ecx
 * 0000000140B01B22: cmp     [rsi+8F8h], ecx
 * 0000000140B01B28: jnz     short loc_140B01B97
 * 0000000140B01B2A: mov     ecx, ebx
 * 0000000140B01B2C: xor     rcx, rax
 * 0000000140B01B2F: mov     rax, [rsi+588h]
 * 0000000140B01B36: mov     [rax+18h], rcx
 * 0000000140B01B3A: xor     eax, eax
 * 0000000140B01B3C: mov     rcx, [r13+8]
 * 0000000140B01B40: cmp     [rsi+8F8h], eax
 * 0000000140B01B46: jnz     short loc_140B01B97
 * 0000000140B01B48: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B01B52: xor     edx, edx
 * 0000000140B01B54: add     rax, rsi
 * 0000000140B01B57: mov     [rsi+900h], rax
 * 0000000140B01B5E: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B01B68: add     rax, r13
 * 0000000140B01B6B: mov     [rsi+908h], rax
 * 0000000140B01B72: movsxd  rax, dword ptr [r13+0]
 * 0000000140B01B76: mov     [rsi+910h], rax
 * 0000000140B01B7D: mov     eax, 1
 * 0000000140B01B82: mov     [rsi+918h], rcx
 * 0000000140B01B89: mov     rcx, rsi
 * 0000000140B01B8C: mov     [rsi+8F8h], eax
 * 0000000140B01B92: call    $$ba
 * 0000000140B01B97: mov     eax, [r13+10h]
 * 0000000140B01B9B: mov     r12, [r13+8]
 * 0000000140B01B9F: shr     eax, 4
 * 0000000140B01BA2: mov     [rbp+0A70h+arg_8], r12
 * 0000000140B01BA9: test    eax, eax
 * 0000000140B01BAB: jz      loc_140AFC39B
 * 0000000140B01BB1: mov     rdi, [rsp+0B70h+var_B20]
 * 0000000140B01BB6: mov     r13d, eax
 * 0000000140B01BB9: mov     [rsp+0B70h+var_B18], r13
 * 0000000140B01BBE: mov     rax, [r12]
 * 0000000140B01BC2: lea     rdx, [rbp+0A70h+var_8B0]
 * 0000000140B01BC9: mov     rbx, rdi
 * 0000000140B01BCC: mov     r15, [rax]
 * 0000000140B01BCF: xor     eax, eax
 * 0000000140B01BD1: mov     [rbp+0A70h+var_8B0], rax
 * 0000000140B01BD8: mov     rcx, r15
 * 0000000140B01BDB: mov     rax, [rsi+310h]
 * 0000000140B01BE2: call    KeGuardDispatchICall
 * 0000000140B01BE7: mov     r14, rax
 * 0000000140B01BEA: test    rax, rax
 * 0000000140B01BED: jz      loc_140B01D23
 * 0000000140B01BF3: mov     r13d, 6
 * 0000000140B01BF9: xor     r12d, r12d
 * 0000000140B01BFC: mov     rdi, 0B3B74BDEE4453415h
 * 0000000140B01C06: mov     rax, [rsi+208h]
 * 0000000140B01C0D: lea     rdx, [rbp+0A70h+var_5D8]
 * 0000000140B01C14: mov     rcx, r14
 * 0000000140B01C17: call    KeGuardDispatchICall
 * 0000000140B01C1C: test    rax, rax
 * 0000000140B01C1F: jnz     loc_140B01CF0
 * 0000000140B01C25: test    dword ptr [rsi+990h], 40000000h
 * 0000000140B01C2F: lea     r9d, [rax+1]
 * 0000000140B01C33: jz      short loc_140B01C7B
 * 0000000140B01C35: mov     rcx, [rsi+0A80h]
 * 0000000140B01C3C: lea     edx, [rax+30h]
 * 0000000140B01C3F: mov     r8, r13
 * 0000000140B01C42: mov     rax, [rbx]
 * 0000000140B01C45: add     edx, 0FFFFFFF8h
 * 0000000140B01C48: mov     [rcx], rax
 * 0000000140B01C4B: add     rbx, 8
 * 0000000140B01C4F: add     rcx, 8
 * 0000000140B01C53: sub     r8, r9
 * 0000000140B01C56: jnz     short loc_140B01C42
 * 0000000140B01C58: test    edx, edx
 * 0000000140B01C5A: jz      short loc_140B01C74
 * 0000000140B01C5C: mov     esi, 0FFFFFFFFh
 * 0000000140B01C61: mov     al, [rbx]
 * 0000000140B01C63: add     rbx, r9
 * 0000000140B01C66: mov     [rcx], al
 * 0000000140B01C68: add     rcx, r9
 * 0000000140B01C6B: add     edx, esi
 * 0000000140B01C6D: jnz     short loc_140B01C61
 * 0000000140B01C6F: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B01C74: mov     rbx, [rsi+0A80h]
 * 0000000140B01C7B: mov     [rbx+18h], r14
 * 0000000140B01C7F: mov     [rbx+20h], r15
 * 0000000140B01C83: mov     rax, [rsi+588h]
 * 0000000140B01C8A: mov     [rax], rbx
 * 0000000140B01C8D: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140B01C94: mov     rax, [rsi+588h]
 * 0000000140B01C9B: mov     [rax+8], r14
 * 0000000140B01C9F: mov     dword ptr [rax+14h], 1000h
 * 0000000140B01CA6: cmp     [rsi+8F8h], r12d
 * 0000000140B01CAD: jnz     short loc_140B01CF0
 * 0000000140B01CAF: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B01CB9: xor     edx, edx
 * 0000000140B01CBB: add     rax, rsi
 * 0000000140B01CBE: mov     rcx, rsi
 * 0000000140B01CC1: mov     [rsi+900h], rax
 * 0000000140B01CC8: lea     rax, [rbx+rdi]
 * 0000000140B01CCC: mov     [rsi+908h], rax
 * 0000000140B01CD3: movsxd  rax, dword ptr [rbx]
 * 0000000140B01CD6: mov     [rsi+910h], rax
 * 0000000140B01CDD: mov     [rsi+918h], r13
 * 0000000140B01CE4: mov     [rsi+8F8h], r9d
 * 0000000140B01CEB: call    $$ba
 * 0000000140B01CF0: mov     rax, [rsi+310h]
 * 0000000140B01CF7: lea     rdx, [rbp+0A70h+var_8B0]
 * 0000000140B01CFE: mov     rcx, r15
 * 0000000140B01D01: call    KeGuardDispatchICall
 * 0000000140B01D06: mov     r14, rax
 * 0000000140B01D09: test    rax, rax
 * 0000000140B01D0C: jnz     loc_140B01C06
 * 0000000140B01D12: mov     r12, [rbp+0A70h+arg_8]
 * 0000000140B01D19: mov     r13, [rsp+0B70h+var_B18]
 * 0000000140B01D1E: mov     rdi, [rsp+0B70h+var_B20]
 * 0000000140B01D23: add     r12, 10h
 * 0000000140B01D27: sub     r13, 1
 * 0000000140B01D2B: mov     [rbp+0A70h+arg_8], r12
 * 0000000140B01D32: mov     [rsp+0B70h+var_B18], r13
 * 0000000140B01D37: jnz     loc_140B01BBE
 * 0000000140B01D3D: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B01D44: jmp     loc_140AFC39B
 * 0000000140B01D49: mov     eax, 28h ; '('
 * 0000000140B01D4E: cmp     r10d, eax
 * 0000000140B01D51: jg      loc_140B0402E
 * 0000000140B01D57: jz      short loc_140B01DB1
 * 0000000140B01D59: mov     ecx, r10d
 * 0000000140B01D5C: sub     ecx, 1Eh
 * 0000000140B01D5F: jz      loc_140B03893
 * 0000000140B01D65: sub     ecx, 1
 * 0000000140B01D68: jz      loc_140B02C4D
 * 0000000140B01D6E: sub     ecx, 1
 * 0000000140B01D71: jz      loc_140B02C3D
 * 0000000140B01D77: sub     ecx, 1
 * 0000000140B01D7A: jz      loc_140B02C2D
 * 0000000140B01D80: lea     r14d, [rax-26h]
 * 0000000140B01D84: sub     ecx, r14d
 * 0000000140B01D87: jz      loc_140B024D5
 * 0000000140B01D8D: sub     ecx, 1
 * 0000000140B01D90: jz      loc_140B01FBF
 * 0000000140B01D96: sub     ecx, 1
 * 0000000140B01D99: jz      loc_140B01F49
 * 0000000140B01D9F: sub     ecx, 1
 * 0000000140B01DA2: jz      loc_140B01EFD
 * 0000000140B01DA8: cmp     ecx, 1
 * 0000000140B01DAB: jnz     loc_140B040E7
 * 0000000140B01DB1: mov     eax, [r13+24h]
 * 0000000140B01DB5: add     [rsi+828h], eax
 * 0000000140B01DBB: mov     ebx, [r13+20h]
 * 0000000140B01DBF: mov     r9d, [r13+24h]
 * 0000000140B01DC3: add     rbx, rsi
 * 0000000140B01DC6: mov     r11d, [rsi+814h]
 * 0000000140B01DCD: mov     r10, rbx
 * 0000000140B01DD0: mov     r15, [rsi+818h]
 * 0000000140B01DD7: mov     rax, rbx
 * 0000000140B01DDA: lea     rcx, [rbx+r9]
 * 0000000140B01DDE: cmp     rbx, rcx
 * 0000000140B01DE1: jnb     short loc_140B01DF3
 * 0000000140B01DE3: mov     edx, 40h ; '@'
 * 0000000140B01DE8: prefetchnta byte ptr [rax]
 * 0000000140B01DEB: add     rax, rdx
 * 0000000140B01DEE: cmp     rax, rcx
 * 0000000140B01DF1: jb      short loc_140B01DE8
 * 0000000140B01DF3: mov     r14d, r9d
 * 0000000140B01DF6: mov     r8, r15
 * 0000000140B01DF9: shr     r14d, 7
 * 0000000140B01DFD: mov     r12d, 1
 * 0000000140B01E03: test    r14d, r14d
 * 0000000140B01E06: jz      short loc_140B01E79
 * 0000000140B01E08: mov     edi, 0FFFFFFFFh
 * 0000000140B01E0D: mov     r13, 7010008004002001h
 * 0000000140B01E17: mov     eax, 8
 * 0000000140B01E1C: xor     r8, [r10]
 * 0000000140B01E1F: mov     ecx, r11d
 * 0000000140B01E22: rol     r8, cl
 * 0000000140B01E25: xor     r8, [r10+8]
 * 0000000140B01E29: add     r10, 10h
 * 0000000140B01E2D: rol     r8, cl
 * 0000000140B01E30: sub     rax, r12
 * 0000000140B01E33: jnz     short loc_140B01E1C
 * 0000000140B01E35: mov     rcx, r10
 * 0000000140B01E38: sub     rcx, rbx
 * 0000000140B01E3B: xor     rcx, r15
 * 0000000140B01E3E: mov     rax, rcx
 * 0000000140B01E41: rol     rax, 11h
 * 0000000140B01E45: xor     rcx, rax
 * 0000000140B01E48: mov     rax, r13
 * 0000000140B01E4B: mul     rcx
 * 0000000140B01E4E: xor     r11d, edx
 * 0000000140B01E51: mov     [rbp+0A70h+var_540], rdx
 * 0000000140B01E58: xor     r11d, eax
 * 0000000140B01E5B: and     r11d, 3Fh
 * 0000000140B01E5F: cmovz   r11d, r12d
 * 0000000140B01E63: add     r14d, edi
 * 0000000140B01E66: jnz     short loc_140B01E17
 * 0000000140B01E68: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B01E6D: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B01E74: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B01E79: and     r9d, 7Fh
 * 0000000140B01E7D: cmp     r9d, 8
 * 0000000140B01E81: jb      short loc_140B01EA0
 * 0000000140B01E83: mov     eax, r9d
 * 0000000140B01E86: shr     rax, 3
 * 0000000140B01E8A: xor     r8, [r10]
 * 0000000140B01E8D: mov     ecx, r11d
 * 0000000140B01E90: rol     r8, cl
 * 0000000140B01E93: add     r10, 8
 * 0000000140B01E97: add     r9d, 0FFFFFFF8h
 * 0000000140B01E9B: sub     rax, r12
 * 0000000140B01E9E: jnz     short loc_140B01E8A
 * 0000000140B01EA0: test    r9d, r9d
 * 0000000140B01EA3: jz      short loc_140B01EC4
 * 0000000140B01EA5: mov     esi, 0FFFFFFFFh
 * 0000000140B01EAA: movzx   eax, byte ptr [r10]
 * 0000000140B01EAE: mov     ecx, r11d
 * 0000000140B01EB1: xor     r8, rax
 * 0000000140B01EB4: add     r10, r12
 * 0000000140B01EB7: rol     r8, cl
 * 0000000140B01EBA: add     r9d, esi
 * 0000000140B01EBD: jnz     short loc_140B01EAA
 * 0000000140B01EBF: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B01EC4: mov     rcx, [r13+18h]
 * 0000000140B01EC8: cmp     r8, rcx
 * 0000000140B01ECB: jz      loc_140AFC148
 * 0000000140B01ED1: mov     eax, [rsi+8F8h]
 * 0000000140B01ED7: test    eax, eax
 * 0000000140B01ED9: jnz     short loc_140B01EEF
 * 0000000140B01EDB: mov     rax, [rsi+588h]
 * 0000000140B01EE2: xor     rcx, r8
 * 0000000140B01EE5: mov     [rax+18h], rcx
 * 0000000140B01EE9: mov     eax, [rsi+8F8h]
 * 0000000140B01EEF: mov     ecx, [r13+20h]
 * 0000000140B01EF3: add     rcx, rsi
 * 0000000140B01EF6: test    eax, eax
 * 0000000140B01EF8: jmp     loc_140B05797
 * 0000000140B01EFD: mov     edx, [r13+2Ch]
 * 0000000140B01F01: lea     rcx, [rbp+0A70h+var_2C8]
 * 0000000140B01F08: mov     rax, [rsi+1A0h]
 * 0000000140B01F0F: call    KeGuardDispatchICall
 * 0000000140B01F14: mov     rax, [rsi+1D0h]
 * 0000000140B01F1B: lea     rdx, [rbp+0A70h+var_2B8]
 * 0000000140B01F22: lea     rcx, [rbp+0A70h+var_2C8]
 * 0000000140B01F29: call    KeGuardDispatchICall
 * 0000000140B01F2E: xor     ecx, ecx
 * 0000000140B01F30: xgetbv
 * 0000000140B01F33: shl     rdx, 20h
 * 0000000140B01F37: lea     rcx, [rbp+0A70h+var_2B8]
 * 0000000140B01F3E: or      rdx, rax
 * 0000000140B01F41: mov     rbx, rdx
 * 0000000140B01F44: jmp     loc_140B01293
 * 0000000140B01F49: mov     eax, [rsi+994h]
 * 0000000140B01F4F: test    r14b, al
 * 0000000140B01F52: jnz     loc_140AFC39B
 * 0000000140B01F58: mov     rax, [rsi+428h]
 * 0000000140B01F5F: call    KeGuardDispatchICall
 * 0000000140B01F64: test    al, al
 * 0000000140B01F66: jz      loc_140AFC39B
 * 0000000140B01F6C: xor     eax, eax
 * 0000000140B01F6E: lea     r12d, [rax+1]
 * 0000000140B01F72: cmp     [rsi+8F8h], eax
 * 0000000140B01F78: jnz     loc_140AFC14A
 * 0000000140B01F7E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B01F88: add     rax, rsi
 * 0000000140B01F8B: mov     [rsi+900h], rax
 * 0000000140B01F92: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B01F9C: add     rax, r13
 * 0000000140B01F9F: mov     [rsi+908h], rax
 * 0000000140B01FA6: movsxd  rax, dword ptr [r13+0]
 * 0000000140B01FAA: mov     [rsi+910h], rax
 * 0000000140B01FB1: xor     eax, eax
 * 0000000140B01FB3: mov     [rsi+918h], rax
 * 0000000140B01FBA: jmp     loc_140AFC421
 * 0000000140B01FBF: mov     r14, [r13+8]
 * 0000000140B01FC3: mov     r8d, [r13+10h]
 * 0000000140B01FC7: mov     r9, r14
 * 0000000140B01FCA: add     [rsi+828h], r8d
 * 0000000140B01FD1: mov     rax, r14
 * 0000000140B01FD4: mov     r10d, [rsi+814h]
 * 0000000140B01FDB: mov     r15, [rsi+818h]
 * 0000000140B01FE2: lea     rcx, [r14+r8]
 * 0000000140B01FE6: cmp     r14, rcx
 * 0000000140B01FE9: jnb     short loc_140B01FFB
 * 0000000140B01FEB: mov     edx, 40h ; '@'
 * 0000000140B01FF0: prefetchnta byte ptr [rax]
 * 0000000140B01FF3: add     rax, rdx
 * 0000000140B01FF6: cmp     rax, rcx
 * 0000000140B01FF9: jb      short loc_140B01FF0
 * 0000000140B01FFB: mov     r11d, r8d
 * 0000000140B01FFE: mov     rbx, r15
 * 0000000140B02001: shr     r11d, 7
 * 0000000140B02005: mov     edx, 1
 * 0000000140B0200A: mov     r12d, 0FFFFFFFFh
 * 0000000140B02010: test    r11d, r11d
 * 0000000140B02013: jz      short loc_140B02081
 * 0000000140B02015: mov     rdi, 7010008004002001h
 * 0000000140B0201F: mov     eax, 8
 * 0000000140B02024: xor     rbx, [r9]
 * 0000000140B02027: mov     ecx, r10d
 * 0000000140B0202A: rol     rbx, cl
 * 0000000140B0202D: xor     rbx, [r9+8]
 * 0000000140B02031: add     r9, 10h
 * 0000000140B02035: rol     rbx, cl
 * 0000000140B02038: sub     rax, rdx
 * 0000000140B0203B: jnz     short loc_140B02024
 * 0000000140B0203D: mov     rcx, r9
 * 0000000140B02040: sub     rcx, r14
 * 0000000140B02043: xor     rcx, r15
 * 0000000140B02046: mov     rax, rcx
 * 0000000140B02049: rol     rax, 11h
 * 0000000140B0204D: xor     rcx, rax
 * 0000000140B02050: mov     rax, rdi
 * 0000000140B02053: mul     rcx
 * 0000000140B02056: xor     r10d, edx
 * 0000000140B02059: mov     [rbp+0A70h+var_5D0], rdx
 * 0000000140B02060: xor     r10d, eax
 * 0000000140B02063: mov     edx, 1
 * 0000000140B02068: and     r10d, 3Fh
 * 0000000140B0206C: cmovz   r10d, edx
 * 0000000140B02070: add     r11d, r12d
 * 0000000140B02073: jnz     short loc_140B0201F
 * 0000000140B02075: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B0207A: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B02081: and     r8d, 7Fh
 * 0000000140B02085: cmp     r8d, 8
 * 0000000140B02089: jb      short loc_140B020A8
 * 0000000140B0208B: mov     eax, r8d
 * 0000000140B0208E: shr     rax, 3
 * 0000000140B02092: xor     rbx, [r9]
 * 0000000140B02095: mov     ecx, r10d
 * 0000000140B02098: rol     rbx, cl
 * 0000000140B0209B: add     r9, 8
 * 0000000140B0209F: add     r8d, 0FFFFFFF8h
 * 0000000140B020A3: sub     rax, rdx
 * 0000000140B020A6: jnz     short loc_140B02092
 * 0000000140B020A8: test    r8d, r8d
 * 0000000140B020AB: jz      short loc_140B020C2
 * 0000000140B020AD: movzx   eax, byte ptr [r9]
 * 0000000140B020B1: mov     ecx, r10d
 * 0000000140B020B4: xor     rbx, rax
 * 0000000140B020B7: add     r9, rdx
 * 0000000140B020BA: rol     rbx, cl
 * 0000000140B020BD: add     r8d, r12d
 * 0000000140B020C0: jnz     short loc_140B020AD
 * 0000000140B020C2: mov     rax, rbx
 * 0000000140B020C5: jmp     short loc_140B020C9
 * 0000000140B020C7: xor     ebx, eax
 * 0000000140B020C9: shr     rax, 1Fh
 * 0000000140B020CD: test    rax, rax
 * 0000000140B020D0: jnz     short loc_140B020C7
 * 0000000140B020D2: btr     ebx, 1Fh
 * 0000000140B020D6: mov     r12d, eax
 * 0000000140B020D9: cmp     ebx, [r13+14h]
 * 0000000140B020DD: jz      loc_140B02242
 * 0000000140B020E3: cmp     [r13+0], eax
 * 0000000140B020E7: jnz     short loc_140B020F1
 * 0000000140B020E9: cmp     [r13+18h], eax
 * 0000000140B020ED: cmovnz  r12d, edx
 * 0000000140B020F1: mov     ecx, [r13+10h]
 * 0000000140B020F5: mov     rdx, [r13+8]
 * 0000000140B020F9: test    rcx, rcx
 * 0000000140B020FC: jz      loc_140B021C5
 * 0000000140B02102: mov     eax, [rsi+994h]
 * 0000000140B02108: mov     r8d, 40h ; '@'
 * 0000000140B0210E: test    r8b, al
 * 0000000140B02111: jz      loc_140B021C5
 * 0000000140B02117: mov     r13, cr8
 * 0000000140B0211B: lea     eax, [r8-3Eh]
 * 0000000140B0211F: mov     cr8, rax
 * 0000000140B02123: mov     r14, rdx
 * 0000000140B02126: lea     rax, [rcx-1]
 * 0000000140B0212A: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140B02131: add     rax, rdx
 * 0000000140B02134: or      rax, 0FFFh
 * 0000000140B0213A: mov     [rsp+0B70h+var_AF8], rax
 * 0000000140B0213F: lea     rax, [r14-1]
 * 0000000140B02143: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B0214A: movzx   r15d, r13b
 * 0000000140B0214E: mov     rax, [rsi+468h]
 * 0000000140B02155: xor     edx, edx
 * 0000000140B02157: mov     rcx, r14
 * 0000000140B0215A: call    KeGuardDispatchICall
 * 0000000140B0215F: cmp     eax, 0C000022Dh
 * 0000000140B02164: jnz     short loc_140B0218F
 * 0000000140B02166: test    r12d, r12d
 * 0000000140B02169: jnz     short loc_140B021BC
 * 0000000140B0216B: lea     eax, [r12+1]
 * 0000000140B02170: cmp     r13b, al
 * 0000000140B02173: ja      short loc_140B02193
 * 0000000140B02175: movzx   r15d, r13b
 * 0000000140B02179: mov     cr8, r15
 * 0000000140B0217D: mov     al, [r14]
 * 0000000140B02180: mov     rax, cr8
 * 0000000140B02184: lea     eax, [r12+2]
 * 0000000140B02189: mov     cr8, rax
 * 0000000140B0218D: jmp     short loc_140B0214E
 * 0000000140B0218F: test    eax, eax
 * 0000000140B02191: js      short loc_140B021BC
 * 0000000140B02193: mov     rax, [rbp+0A70h+arg_8]
 * 0000000140B0219A: mov     ecx, 1000h
 * 0000000140B0219F: add     rax, rcx
 * 0000000140B021A2: add     r14, rcx
 * 0000000140B021A5: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B021AC: cmp     rax, [rsp+0B70h+var_AF8]
 * 0000000140B021B1: jnz     short loc_140B0214A
 * 0000000140B021B3: mov     cr8, r15
 * 0000000140B021B7: jmp     loc_140B02242
 * 0000000140B021BC: mov     cr8, r15
 * 0000000140B021C0: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B021C5: mov     eax, [r13+14h]
 * 0000000140B021C9: xor     r14d, r14d
 * 0000000140B021CC: cmp     [rsi+8F8h], r14d
 * 0000000140B021D3: jnz     short loc_140B02242
 * 0000000140B021D5: mov     ecx, eax
 * 0000000140B021D7: mov     eax, ebx
 * 0000000140B021D9: xor     rcx, rax
 * 0000000140B021DC: mov     rax, [rsi+588h]
 * 0000000140B021E3: mov     [rax+18h], rcx
 * 0000000140B021E7: mov     rcx, [r13+8]
 * 0000000140B021EB: cmp     [rsi+8F8h], r14d
 * 0000000140B021F2: jnz     short loc_140B02242
 * 0000000140B021F4: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B021FE: xor     edx, edx
 * 0000000140B02200: add     rax, rsi
 * 0000000140B02203: mov     [rsi+900h], rax
 * 0000000140B0220A: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B02214: add     rax, r13
 * 0000000140B02217: mov     [rsi+908h], rax
 * 0000000140B0221E: movsxd  rax, dword ptr [r13+0]
 * 0000000140B02222: mov     [rsi+910h], rax
 * 0000000140B02229: lea     eax, [r14+1]
 * 0000000140B0222D: mov     [rsi+918h], rcx
 * 0000000140B02234: mov     rcx, rsi
 * 0000000140B02237: mov     [rsi+8F8h], eax
 * 0000000140B0223D: call    $$ba
 * 0000000140B02242: mov     rcx, [rsi+538h]
 * 0000000140B02249: mov     r15, cr8
 * 0000000140B0224D: mov     eax, 0Fh
 * 0000000140B02252: mov     cr8, rax
 * 0000000140B02256: mov     rax, [rsi+150h]
 * 0000000140B0225D: call    KeGuardDispatchICall
 * 0000000140B02262: mov     rax, [rsi+618h]
 * 0000000140B02269: mov     r14, [rsp+0B70h+var_B20]
 * 0000000140B0226E: mov     rcx, [rax]
 * 0000000140B02271: mov     eax, [rcx]
 * 0000000140B02273: lea     rbx, [rcx+10h]
 * 0000000140B02277: mov     r12b, [rcx+0Ch]
 * 0000000140B0227B: lea     rcx, [rax+rax*2]
 * 0000000140B0227F: lea     r13, [rbx+rcx*8]
 * 0000000140B02283: mov     r8d, 18h
 * 0000000140B02289: lea     r9, [r14+18h]
 * 0000000140B0228D: mov     r10, rbx
 * 0000000140B02290: mov     rcx, [r10]
 * 0000000140B02293: add     r10, 8
 * 0000000140B02297: mov     rax, [r9]
 * 0000000140B0229A: add     r9, 8
 * 0000000140B0229E: cmp     rcx, rax
 * 0000000140B022A1: jnz     short loc_140B022D7
 * 0000000140B022A3: add     r8d, 0FFFFFFF8h
 * 0000000140B022A7: cmp     r8d, 8
 * 0000000140B022AB: jnb     short loc_140B02290
 * 0000000140B022AD: test    r8d, r8d
 * 0000000140B022B0: jz      short loc_140B022E0
 * 0000000140B022B2: mov     r11d, 1
 * 0000000140B022B8: movzx   edx, byte ptr [r10]
 * 0000000140B022BC: add     r10, r11
 * 0000000140B022BF: movzx   eax, byte ptr [r9]
 * 0000000140B022C3: add     r9, r11
 * 0000000140B022C6: cmp     rdx, rax
 * 0000000140B022C9: jnz     short loc_140B022D7
 * 0000000140B022CB: mov     eax, 0FFFFFFFFh
 * 0000000140B022D0: add     r8d, eax
 * 0000000140B022D3: jz      short loc_140B022E0
 * 0000000140B022D5: jmp     short loc_140B022B8
 * 0000000140B022D7: add     rbx, 18h
 * 0000000140B022DB: cmp     rbx, r13
 * 0000000140B022DE: jb      short loc_140B02283
 * 0000000140B022E0: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B022E5: mov     rcx, [rsi+538h]
 * 0000000140B022EC: mov     rax, [rsi+190h]
 * 0000000140B022F3: call    KeGuardDispatchICall
 * 0000000140B022F8: movzx   eax, r15b
 * 0000000140B022FC: mov     cr8, rax
 * 0000000140B02300: xor     ecx, ecx
 * 0000000140B02302: test    r12b, r12b
 * 0000000140B02305: jz      loc_140B023C6
 * 0000000140B0230B: mov     eax, [rsi+994h]
 * 0000000140B02311: lea     edx, [rcx+10h]
 * 0000000140B02314: test    dl, al
 * 0000000140B02316: jz      short loc_140B02373
 * 0000000140B02318: cmp     [rsi+8F8h], ecx
 * 0000000140B0231E: jnz     short loc_140B02373
 * 0000000140B02320: mov     rcx, [rsp+0B70h+var_B20]
 * 0000000140B02325: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0232F: add     rax, rsi
 * 0000000140B02332: mov     [rsi+900h], rax
 * 0000000140B02339: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B02343: add     rax, rcx
 * 0000000140B02346: mov     [rsi+908h], rax
 * 0000000140B0234D: movsxd  rax, dword ptr [rcx]
 * 0000000140B02350: mov     rcx, rsi
 * 0000000140B02353: mov     [rsi+910h], rax
 * 0000000140B0235A: lea     eax, [rdx-0Fh]
 * 0000000140B0235D: mov     [rsi+918h], rax
 * 0000000140B02364: xor     edx, edx
 * 0000000140B02366: mov     [rsi+8F8h], eax
 * 0000000140B0236C: call    $$ba
 * 0000000140B02371: xor     ecx, ecx
 * 0000000140B02373: mov     edx, 1
 * 0000000140B02378: cmp     [r14+18h], rdx
 * 0000000140B0237C: jnz     short loc_140B023CB
 * 0000000140B0237E: mov     r12, [rsp+0B70h+var_B20]
 * 0000000140B02383: mov     rcx, [rsi+538h]
 * 0000000140B0238A: mov     r15, cr8
 * 0000000140B0238E: mov     eax, 0Fh
 * 0000000140B02393: mov     cr8, rax
 * 0000000140B02397: mov     rax, [rsi+150h]
 * 0000000140B0239E: call    KeGuardDispatchICall
 * 0000000140B023A3: mov     rax, [rsi+618h]
 * 0000000140B023AA: xor     r13d, r13d
 * 0000000140B023AD: mov     edx, r13d
 * 0000000140B023B0: mov     rcx, [rax]
 * 0000000140B023B3: mov     eax, [rcx]
 * 0000000140B023B5: lea     rbx, [rcx+10h]
 * 0000000140B023B9: lea     rcx, [rax+rax*2]
 * 0000000140B023BD: lea     r14, [rbx+rcx*8]
 * 0000000140B023C1: jmp     loc_140B02456
 * 0000000140B023C6: mov     edx, 1
 * 0000000140B023CB: cmp     rbx, r13
 * 0000000140B023CE: jnz     short loc_140B0237E
 * 0000000140B023D0: mov     r12, [rsp+0B70h+var_B20]
 * 0000000140B023D5: cmp     [rsi+8F8h], ecx
 * 0000000140B023DB: jnz     short loc_140B02383
 * 0000000140B023DD: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B023E7: mov     rcx, rsi
 * 0000000140B023EA: add     rax, rsi
 * 0000000140B023ED: mov     [rsi+900h], rax
 * 0000000140B023F4: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B023FE: add     rax, r12
 * 0000000140B02401: mov     [rsi+908h], rax
 * 0000000140B02408: movsxd  rax, dword ptr [r12]
 * 0000000140B0240C: mov     [rsi+910h], rax
 * 0000000140B02413: mov     [rsi+918h], rbx
 * 0000000140B0241A: mov     [rsi+8F8h], edx
 * 0000000140B02420: xor     edx, edx
 * 0000000140B02422: call    $$ba
 * 0000000140B02427: jmp     loc_140B02383
 * 0000000140B0242C: mov     rcx, [rbx+8]
 * 0000000140B02430: cmp     rcx, rdx
 * 0000000140B02433: jb      short loc_140B0245F
 * 0000000140B02435: mov     rax, rcx
 * 0000000140B02438: and     rax, 0FFFFFFFFFFFFF000h
 * 0000000140B0243E: cmp     rax, rcx
 * 0000000140B02441: jnz     short loc_140B0245F
 * 0000000140B02443: mov     eax, [rbx+10h]
 * 0000000140B02446: add     rax, rcx
 * 0000000140B02449: cmp     rax, rcx
 * 0000000140B0244C: jbe     short loc_140B0245F
 * 0000000140B0244E: cmp     rax, rdx
 * 0000000140B02451: jz      short loc_140B0245F
 * 0000000140B02453: mov     rdx, rax
 * 0000000140B02456: add     rbx, 18h
 * 0000000140B0245A: cmp     rbx, r14
 * 0000000140B0245D: jb      short loc_140B0242C
 * 0000000140B0245F: mov     rcx, [rsi+538h]
 * 0000000140B02466: mov     rax, [rsi+190h]
 * 0000000140B0246D: call    KeGuardDispatchICall
 * 0000000140B02472: movzx   eax, r15b
 * 0000000140B02476: mov     cr8, rax
 * 0000000140B0247A: cmp     rbx, r14
 * 0000000140B0247D: jz      loc_140AFC39B
 * 0000000140B02483: cmp     [rsi+8F8h], r13d
 * 0000000140B0248A: jnz     loc_140AFC39B
 * 0000000140B02490: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0249A: add     rax, rsi
 * 0000000140B0249D: mov     [rsi+900h], rax
 * 0000000140B024A4: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B024AE: add     rax, r12
 * 0000000140B024B1: mov     [rsi+908h], rax
 * 0000000140B024B8: movsxd  rax, dword ptr [r12]
 * 0000000140B024BC: mov     r12d, 1
 * 0000000140B024C2: mov     [rsi+910h], rax
 * 0000000140B024C9: mov     [rsi+918h], rbx
 * 0000000140B024D0: jmp     loc_140AFC421
 * 0000000140B024D5: mov     ecx, [r13+28h]
 * 0000000140B024D9: and     ecx, r11d
 * 0000000140B024DC: jz      loc_140B028D3
 * 0000000140B024E2: xor     r12d, r12d
 * 0000000140B024E5: cmp     [rsi+980h], r12
 * 0000000140B024EC: jz      short loc_140B02557
 * 0000000140B024EE: mov     eax, [rsi+994h]
 * 0000000140B024F4: test    al, 4
 * 0000000140B024F6: jnz     short loc_140B02557
 * 0000000140B024F8: test    ecx, ecx
 * 0000000140B024FA: jz      loc_140B028D6
 * 0000000140B02500: mov     r8d, [rsi+824h]
 * 0000000140B02507: mov     edx, eax
 * 0000000140B02509: test    r8d, r8d
 * 0000000140B0250C: jnz     short loc_140B0254A
 * 0000000140B0250E: lea     ecx, ds:0[rax*8]
 * 0000000140B02515: xor     ecx, eax
 * 0000000140B02517: and     ecx, 20h
 * 0000000140B0251A: xor     ecx, eax
 * 0000000140B0251C: mov     [rsi+994h], ecx
 * 0000000140B02522: cmp     [rsi+980h], r12
 * 0000000140B02529: jz      loc_140B028C7
 * 0000000140B0252F: test    r8d, r8d
 * 0000000140B02532: jnz     short loc_140B02563
 * 0000000140B02534: lea     edx, ds:0[rcx*8]
 * 0000000140B0253B: xor     edx, ecx
 * 0000000140B0253D: and     edx, 20h
 * 0000000140B02540: xor     edx, ecx
 * 0000000140B02542: mov     [rsi+994h], edx
 * 0000000140B02548: jmp     short loc_140B02574
 * 0000000140B0254A: mov     eax, edx
 * 0000000140B0254C: mov     ecx, edx
 * 0000000140B0254E: shr     eax, 3
 * 0000000140B02551: xor     eax, edx
 * 0000000140B02553: test    al, 4
 * 0000000140B02555: jz      short loc_140B02522
 * 0000000140B02557: mov     [rsi+824h], r12d
 * 0000000140B0255E: jmp     loc_140AFC39B
 * 0000000140B02563: mov     eax, ecx
 * 0000000140B02565: mov     edx, ecx
 * 0000000140B02567: shr     eax, 3
 * 0000000140B0256A: xor     eax, ecx
 * 0000000140B0256C: test    al, 4
 * 0000000140B0256E: jnz     loc_140B028C7
 * 0000000140B02574: test    dl, 4
 * 0000000140B02577: jz      loc_140B02647
 * 0000000140B0257D: mov     ecx, [r13+8]
 * 0000000140B02581: mov     r14d, [r13+10h]
 * 0000000140B02585: and     ecx, 0FFFh
 * 0000000140B0258B: mov     rbx, [r13+8]
 * 0000000140B0258F: add     r14, 0FFFh
 * 0000000140B02596: add     r14, rcx
 * 0000000140B02599: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140B025A0: shr     r14, 0Ch
 * 0000000140B025A4: test    r14, r14
 * 0000000140B025A7: jz      loc_140B02AFD
 * 0000000140B025AD: mov     rax, [rsi+2B0h]
 * 0000000140B025B4: mov     rcx, rbx
 * 0000000140B025B7: sub     r14, r11
 * 0000000140B025BA: call    KeGuardDispatchICall
 * 0000000140B025BF: test    al, al
 * 0000000140B025C1: jz      short loc_140B0261B
 * 0000000140B025C3: cmp     [rsi+8F8h], r12d
 * 0000000140B025CA: jnz     short loc_140B0261B
 * 0000000140B025CC: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B025D6: mov     edi, 1
 * 0000000140B025DB: add     rax, rsi
 * 0000000140B025DE: xor     edx, edx
 * 0000000140B025E0: mov     [rsi+900h], rax
 * 0000000140B025E7: mov     rcx, rsi
 * 0000000140B025EA: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B025F4: add     rax, r13
 * 0000000140B025F7: mov     [rsi+908h], rax
 * 0000000140B025FE: movsxd  rax, dword ptr [r13+0]
 * 0000000140B02602: mov     [rsi+910h], rax
 * 0000000140B02609: mov     [rsi+918h], rbx
 * 0000000140B02610: mov     [rsi+8F8h], edi
 * 0000000140B02616: call    $$ba
 * 0000000140B0261B: add     dword ptr [rsi+828h], 100h
 * 0000000140B02625: add     rbx, 1000h
 * 0000000140B0262C: mov     r11d, 1
 * 0000000140B02632: test    r14, r14
 * 0000000140B02635: jnz     loc_140B025AD
 * 0000000140B0263B: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B02642: jmp     loc_140B02AFD
 * 0000000140B02647: mov     r14, [r13+8]
 * 0000000140B0264B: mov     r8d, [r13+10h]
 * 0000000140B0264F: mov     r9, r14
 * 0000000140B02652: add     [rsi+828h], r8d
 * 0000000140B02659: mov     rax, r14
 * 0000000140B0265C: mov     r10d, [rsi+814h]
 * 0000000140B02663: mov     r15, [rsi+818h]
 * 0000000140B0266A: lea     rcx, [r14+r8]
 * 0000000140B0266E: cmp     r14, rcx
 * 0000000140B02671: jnb     short loc_140B02683
 * 0000000140B02673: mov     edx, 40h ; '@'
 * 0000000140B02678: prefetchnta byte ptr [rax]
 * 0000000140B0267B: add     rax, rdx
 * 0000000140B0267E: cmp     rax, rcx
 * 0000000140B02681: jb      short loc_140B02678
 * 0000000140B02683: mov     r11d, r8d
 * 0000000140B02686: mov     rbx, r15
 * 0000000140B02689: shr     r11d, 7
 * 0000000140B0268D: test    r11d, r11d
 * 0000000140B02690: jz      short loc_140B02705
 * 0000000140B02692: mov     esi, 1
 * 0000000140B02697: mov     rdi, 7010008004002001h
 * 0000000140B026A1: mov     eax, 8
 * 0000000140B026A6: xor     rbx, [r9]
 * 0000000140B026A9: mov     ecx, r10d
 * 0000000140B026AC: rol     rbx, cl
 * 0000000140B026AF: xor     rbx, [r9+8]
 * 0000000140B026B3: add     r9, 10h
 * 0000000140B026B7: rol     rbx, cl
 * 0000000140B026BA: sub     rax, rsi
 * 0000000140B026BD: jnz     short loc_140B026A6
 * 0000000140B026BF: mov     rcx, r9
 * 0000000140B026C2: sub     rcx, r14
 * 0000000140B026C5: xor     rcx, r15
 * 0000000140B026C8: mov     rax, rcx
 * 0000000140B026CB: rol     rax, 11h
 * 0000000140B026CF: xor     rcx, rax
 * 0000000140B026D2: mov     rax, rdi
 * 0000000140B026D5: mul     rcx
 * 0000000140B026D8: xor     r10d, edx
 * 0000000140B026DB: mov     [rbp+0A70h+var_5C8], rdx
 * 0000000140B026E2: xor     r10d, eax
 * 0000000140B026E5: mov     edx, 0FFFFFFFFh
 * 0000000140B026EA: and     r10d, 3Fh
 * 0000000140B026EE: cmovz   r10d, esi
 * 0000000140B026F2: add     r11d, edx
 * 0000000140B026F5: jnz     short loc_140B026A1
 * 0000000140B026F7: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B026FC: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B02703: jmp     short loc_140B0270A
 * 0000000140B02705: mov     edx, 0FFFFFFFFh
 * 0000000140B0270A: and     r8d, 7Fh
 * 0000000140B0270E: mov     r11d, 1
 * 0000000140B02714: cmp     r8d, 8
 * 0000000140B02718: jb      short loc_140B02737
 * 0000000140B0271A: mov     eax, r8d
 * 0000000140B0271D: shr     rax, 3
 * 0000000140B02721: xor     rbx, [r9]
 * 0000000140B02724: mov     ecx, r10d
 * 0000000140B02727: rol     rbx, cl
 * 0000000140B0272A: add     r9, 8
 * 0000000140B0272E: add     r8d, 0FFFFFFF8h
 * 0000000140B02732: sub     rax, r11
 * 0000000140B02735: jnz     short loc_140B02721
 * 0000000140B02737: test    r8d, r8d
 * 0000000140B0273A: jz      short loc_140B02751
 * 0000000140B0273C: movzx   eax, byte ptr [r9]
 * 0000000140B02740: mov     ecx, r10d
 * 0000000140B02743: xor     rbx, rax
 * 0000000140B02746: add     r9, r11
 * 0000000140B02749: rol     rbx, cl
 * 0000000140B0274C: add     r8d, edx
 * 0000000140B0274F: jnz     short loc_140B0273C
 * 0000000140B02751: mov     rax, rbx
 * 0000000140B02754: jmp     short loc_140B02758
 * 0000000140B02756: xor     ebx, eax
 * 0000000140B02758: shr     rax, 1Fh
 * 0000000140B0275C: test    rax, rax
 * 0000000140B0275F: jnz     short loc_140B02756
 * 0000000140B02761: mov     edx, [r13+14h]
 * 0000000140B02765: btr     ebx, 1Fh
 * 0000000140B02769: cmp     ebx, edx
 * 0000000140B0276B: jz      loc_140B02AFD
 * 0000000140B02771: mov     ecx, [r13+10h]
 * 0000000140B02775: mov     r8, [r13+8]
 * 0000000140B02779: test    rcx, rcx
 * 0000000140B0277C: jz      loc_140B02840
 * 0000000140B02782: mov     eax, [rsi+994h]
 * 0000000140B02788: mov     r9d, 40h ; '@'
 * 0000000140B0278E: test    r9b, al
 * 0000000140B02791: jz      loc_140B02840
 * 0000000140B02797: mov     r12, cr8
 * 0000000140B0279B: lea     eax, [r9-3Eh]
 * 0000000140B0279F: mov     cr8, rax
 * 0000000140B027A3: mov     r14, r8
 * 0000000140B027A6: lea     rax, [rcx-1]
 * 0000000140B027AA: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140B027B1: add     rax, r8
 * 0000000140B027B4: or      rax, 0FFFh
 * 0000000140B027BA: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B027C1: lea     r13, [r14-1]
 * 0000000140B027C5: movzx   r15d, r12b
 * 0000000140B027C9: mov     rax, [rsi+468h]
 * 0000000140B027D0: xor     edx, edx
 * 0000000140B027D2: mov     rcx, r14
 * 0000000140B027D5: call    KeGuardDispatchICall
 * 0000000140B027DA: cmp     eax, 0C000022Dh
 * 0000000140B027DF: jnz     short loc_140B02805
 * 0000000140B027E1: mov     r11d, 1
 * 0000000140B027E7: cmp     r12b, r11b
 * 0000000140B027EA: ja      short loc_140B0280F
 * 0000000140B027EC: movzx   r15d, r12b
 * 0000000140B027F0: mov     cr8, r15
 * 0000000140B027F4: mov     al, [r14]
 * 0000000140B027F7: mov     rax, cr8
 * 0000000140B027FB: lea     eax, [r11+1]
 * 0000000140B027FF: mov     cr8, rax
 * 0000000140B02803: jmp     short loc_140B027C9
 * 0000000140B02805: test    eax, eax
 * 0000000140B02807: js      short loc_140B02830
 * 0000000140B02809: mov     r11d, 1
 * 0000000140B0280F: mov     r8d, 1000h
 * 0000000140B02815: add     r14, r8
 * 0000000140B02818: add     r13, r8
 * 0000000140B0281B: cmp     r13, [rbp+0A70h+arg_8]
 * 0000000140B02822: jnz     short loc_140B027C5
 * 0000000140B02824: mov     cr8, r15
 * 0000000140B02828: xor     r12d, r12d
 * 0000000140B0282B: jmp     loc_140B02AFD
 * 0000000140B02830: mov     cr8, r15
 * 0000000140B02834: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B02839: xor     r12d, r12d
 * 0000000140B0283C: mov     edx, [r13+14h]
 * 0000000140B02840: cmp     [rsi+8F8h], r12d
 * 0000000140B02847: jnz     loc_140B02AF7
 * 0000000140B0284D: mov     eax, edx
 * 0000000140B0284F: mov     ecx, ebx
 * 0000000140B02851: mov     r15, 0B3B74BDEE4453415h
 * 0000000140B0285B: xor     rcx, rax
 * 0000000140B0285E: mov     rax, [rsi+588h]
 * 0000000140B02865: mov     [rax+18h], rcx
 * 0000000140B02869: mov     rcx, [r13+8]
 * 0000000140B0286D: cmp     [rsi+8F8h], r12d
 * 0000000140B02874: jnz     short loc_140B028BC
 * 0000000140B02876: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B02880: xor     edx, edx
 * 0000000140B02882: add     rax, rsi
 * 0000000140B02885: mov     [rsi+900h], rax
 * 0000000140B0288C: lea     rax, [r15+r13]
 * 0000000140B02890: mov     [rsi+908h], rax
 * 0000000140B02897: movsxd  rax, dword ptr [r13+0]
 * 0000000140B0289B: mov     [rsi+910h], rax
 * 0000000140B028A2: mov     eax, 1
 * 0000000140B028A7: mov     [rsi+918h], rcx
 * 0000000140B028AE: mov     rcx, rsi
 * 0000000140B028B1: mov     [rsi+8F8h], eax
 * 0000000140B028B7: call    $$ba
 * 0000000140B028BC: mov     r11d, 1
 * 0000000140B028C2: jmp     loc_140B02B07
 * 0000000140B028C7: mov     [rsi+824h], r12d
 * 0000000140B028CE: jmp     loc_140B02AFD
 * 0000000140B028D3: xor     r12d, r12d
 * 0000000140B028D6: mov     r14, [r13+8]
 * 0000000140B028DA: mov     r8d, [r13+10h]
 * 0000000140B028DE: mov     r9, r14
 * 0000000140B028E1: add     [rsi+828h], r8d
 * 0000000140B028E8: mov     rax, r14
 * 0000000140B028EB: mov     r10d, [rsi+814h]
 * 0000000140B028F2: mov     r15, [rsi+818h]
 * 0000000140B028F9: lea     rcx, [r14+r8]
 * 0000000140B028FD: cmp     r14, rcx
 * 0000000140B02900: jnb     short loc_140B02912
 * 0000000140B02902: mov     edx, 40h ; '@'
 * 0000000140B02907: prefetchnta byte ptr [rax]
 * 0000000140B0290A: add     rax, rdx
 * 0000000140B0290D: cmp     rax, rcx
 * 0000000140B02910: jb      short loc_140B02907
 * 0000000140B02912: mov     r11d, r8d
 * 0000000140B02915: mov     rbx, r15
 * 0000000140B02918: shr     r11d, 7
 * 0000000140B0291C: test    r11d, r11d
 * 0000000140B0291F: jz      short loc_140B02994
 * 0000000140B02921: mov     esi, 1
 * 0000000140B02926: mov     rdi, 7010008004002001h
 * 0000000140B02930: mov     eax, 8
 * 0000000140B02935: xor     rbx, [r9]
 * 0000000140B02938: mov     ecx, r10d
 * 0000000140B0293B: rol     rbx, cl
 * 0000000140B0293E: xor     rbx, [r9+8]
 * 0000000140B02942: add     r9, 10h
 * 0000000140B02946: rol     rbx, cl
 * 0000000140B02949: sub     rax, rsi
 * 0000000140B0294C: jnz     short loc_140B02935
 * 0000000140B0294E: mov     rcx, r9
 * 0000000140B02951: sub     rcx, r14
 * 0000000140B02954: xor     rcx, r15
 * 0000000140B02957: mov     rax, rcx
 * 0000000140B0295A: rol     rax, 11h
 * 0000000140B0295E: xor     rcx, rax
 * 0000000140B02961: mov     rax, rdi
 * 0000000140B02964: mul     rcx
 * 0000000140B02967: xor     r10d, edx
 * 0000000140B0296A: mov     [rbp+0A70h+var_5C0], rdx
 * 0000000140B02971: xor     r10d, eax
 * 0000000140B02974: mov     edx, 0FFFFFFFFh
 * 0000000140B02979: and     r10d, 3Fh
 * 0000000140B0297D: cmovz   r10d, esi
 * 0000000140B02981: add     r11d, edx
 * 0000000140B02984: jnz     short loc_140B02930
 * 0000000140B02986: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B0298B: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B02992: jmp     short loc_140B02999
 * 0000000140B02994: mov     edx, 0FFFFFFFFh
 * 0000000140B02999: and     r8d, 7Fh
 * 0000000140B0299D: mov     r11d, 1
 * 0000000140B029A3: cmp     r8d, 8
 * 0000000140B029A7: jb      short loc_140B029C6
 * 0000000140B029A9: mov     eax, r8d
 * 0000000140B029AC: shr     rax, 3
 * 0000000140B029B0: xor     rbx, [r9]
 * 0000000140B029B3: mov     ecx, r10d
 * 0000000140B029B6: rol     rbx, cl
 * 0000000140B029B9: add     r9, 8
 * 0000000140B029BD: add     r8d, 0FFFFFFF8h
 * 0000000140B029C1: sub     rax, r11
 * 0000000140B029C4: jnz     short loc_140B029B0
 * 0000000140B029C6: test    r8d, r8d
 * 0000000140B029C9: jz      short loc_140B029E0
 * 0000000140B029CB: movzx   eax, byte ptr [r9]
 * 0000000140B029CF: mov     ecx, r10d
 * 0000000140B029D2: xor     rbx, rax
 * 0000000140B029D5: add     r9, r11
 * 0000000140B029D8: rol     rbx, cl
 * 0000000140B029DB: add     r8d, edx
 * 0000000140B029DE: jnz     short loc_140B029CB
 * 0000000140B029E0: mov     rax, rbx
 * 0000000140B029E3: jmp     short loc_140B029E7
 * 0000000140B029E5: xor     ebx, eax
 * 0000000140B029E7: shr     rax, 1Fh
 * 0000000140B029EB: test    rax, rax
 * 0000000140B029EE: jnz     short loc_140B029E5
 * 0000000140B029F0: btr     ebx, 1Fh
 * 0000000140B029F4: cmp     ebx, [r13+14h]
 * 0000000140B029F8: jz      loc_140B02828
 * 0000000140B029FE: cmp     [r13+0], eax
 * 0000000140B02A02: jnz     short loc_140B02A0C
 * 0000000140B02A04: cmp     [r13+18h], eax
 * 0000000140B02A08: cmovnz  r12d, r11d
 * 0000000140B02A0C: mov     ecx, [r13+10h]
 * 0000000140B02A10: mov     rdx, [r13+8]
 * 0000000140B02A14: test    rcx, rcx
 * 0000000140B02A17: jz      loc_140B02AE3
 * 0000000140B02A1D: mov     eax, [rsi+994h]
 * 0000000140B02A23: mov     r8d, 40h ; '@'
 * 0000000140B02A29: test    r8b, al
 * 0000000140B02A2C: jz      loc_140B02AE3
 * 0000000140B02A32: mov     r13, cr8
 * 0000000140B02A36: lea     eax, [r8-3Eh]
 * 0000000140B02A3A: mov     cr8, rax
 * 0000000140B02A3E: mov     r14, rdx
 * 0000000140B02A41: lea     rax, [rcx-1]
 * 0000000140B02A45: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140B02A4C: add     rax, rdx
 * 0000000140B02A4F: or      rax, 0FFFh
 * 0000000140B02A55: mov     [rsp+0B70h+var_AF8], rax
 * 0000000140B02A5A: lea     rax, [r14-1]
 * 0000000140B02A5E: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B02A65: movzx   r15d, r13b
 * 0000000140B02A69: mov     rax, [rsi+468h]
 * 0000000140B02A70: xor     edx, edx
 * 0000000140B02A72: mov     rcx, r14
 * 0000000140B02A75: call    KeGuardDispatchICall
 * 0000000140B02A7A: cmp     eax, 0C000022Dh
 * 0000000140B02A7F: jnz     short loc_140B02AAA
 * 0000000140B02A81: test    r12d, r12d
 * 0000000140B02A84: jnz     short loc_140B02ADA
 * 0000000140B02A86: lea     r11d, [r12+1]
 * 0000000140B02A8B: cmp     r13b, r11b
 * 0000000140B02A8E: ja      short loc_140B02AB4
 * 0000000140B02A90: movzx   r15d, r13b
 * 0000000140B02A94: mov     cr8, r15
 * 0000000140B02A98: mov     al, [r14]
 * 0000000140B02A9B: mov     rax, cr8
 * 0000000140B02A9F: lea     eax, [r12+2]
 * 0000000140B02AA4: mov     cr8, rax
 * 0000000140B02AA8: jmp     short loc_140B02A69
 * 0000000140B02AAA: test    eax, eax
 * 0000000140B02AAC: js      short loc_140B02ADA
 * 0000000140B02AAE: mov     r11d, 1
 * 0000000140B02AB4: mov     rax, [rbp+0A70h+arg_8]
 * 0000000140B02ABB: mov     r8d, 1000h
 * 0000000140B02AC1: add     rax, r8
 * 0000000140B02AC4: add     r14, r8
 * 0000000140B02AC7: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B02ACE: cmp     rax, [rsp+0B70h+var_AF8]
 * 0000000140B02AD3: jnz     short loc_140B02A65
 * 0000000140B02AD5: jmp     loc_140B02824
 * 0000000140B02ADA: mov     cr8, r15
 * 0000000140B02ADE: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B02AE3: mov     eax, [r13+14h]
 * 0000000140B02AE7: xor     r12d, r12d
 * 0000000140B02AEA: cmp     [rsi+8F8h], r12d
 * 0000000140B02AF1: jz      loc_140B0284F
 * 0000000140B02AF7: mov     r11d, 1
 * 0000000140B02AFD: mov     r15, 0B3B74BDEE4453415h
 * 0000000140B02B07: mov     r14, [rsp+0B70h+var_B20]
 * 0000000140B02B0C: mov     ecx, 2
 * 0000000140B02B11: mov     eax, [r14+28h]
 * 0000000140B02B15: test    cl, al
 * 0000000140B02B17: jz      loc_140AFC39B
 * 0000000140B02B1D: mov     rbx, [r14+8]
 * 0000000140B02B21: mov     r13, 0A3A03F5891C8B4E8h
 * 0000000140B02B2B: test    al, 4
 * 0000000140B02B2D: jz      short loc_140B02BAC
 * 0000000140B02B2F: mov     rax, [rbx+70h]
 * 0000000140B02B33: mov     rdx, [r14+18h]
 * 0000000140B02B37: mov     rcx, [rax]
 * 0000000140B02B3A: cmp     rcx, rdx
 * 0000000140B02B3D: jz      short loc_140B02BAC
 * 0000000140B02B3F: mov     rax, [rsi+588h]
 * 0000000140B02B46: mov     [rax], rcx
 * 0000000140B02B49: mov     dword ptr [rax+10h], 100h
 * 0000000140B02B50: cmp     [rsi+8F8h], r12d
 * 0000000140B02B57: jnz     short loc_140B02BAC
 * 0000000140B02B59: mov     rax, [rsi+588h]
 * 0000000140B02B60: xor     rcx, rdx
 * 0000000140B02B63: mov     [rax+18h], rcx
 * 0000000140B02B67: mov     rcx, [rbx+70h]
 * 0000000140B02B6B: cmp     [rsi+8F8h], r12d
 * 0000000140B02B72: jnz     short loc_140B02BAC
 * 0000000140B02B74: lea     rax, [rsi+r13]
 * 0000000140B02B78: xor     edx, edx
 * 0000000140B02B7A: mov     [rsi+900h], rax
 * 0000000140B02B81: lea     rax, [r14+r15]
 * 0000000140B02B85: mov     [rsi+908h], rax
 * 0000000140B02B8C: movsxd  rax, dword ptr [r14]
 * 0000000140B02B8F: mov     [rsi+910h], rax
 * 0000000140B02B96: mov     [rsi+918h], rcx
 * 0000000140B02B9D: mov     rcx, rsi
 * 0000000140B02BA0: mov     [rsi+8F8h], r11d
 * 0000000140B02BA7: call    $$ba
 * 0000000140B02BAC: mov     eax, [r14+28h]
 * 0000000140B02BB0: test    al, 8
 * 0000000140B02BB2: jz      loc_140AFC39B
 * 0000000140B02BB8: mov     rax, [rbx+78h]
 * 0000000140B02BBC: mov     rdx, [r14+20h]
 * 0000000140B02BC0: mov     rcx, [rax]
 * 0000000140B02BC3: cmp     rcx, rdx
 * 0000000140B02BC6: jz      loc_140AFC39B
 * 0000000140B02BCC: mov     rax, [rsi+588h]
 * 0000000140B02BD3: mov     [rax], rcx
 * 0000000140B02BD6: mov     dword ptr [rax+10h], 100h
 * 0000000140B02BDD: cmp     [rsi+8F8h], r12d
 * 0000000140B02BE4: jnz     loc_140AFC39B
 * 0000000140B02BEA: mov     rax, [rsi+588h]
 * 0000000140B02BF1: xor     rcx, rdx
 * 0000000140B02BF4: mov     [rax+18h], rcx
 * 0000000140B02BF8: cmp     [rsi+8F8h], r12d
 * 0000000140B02BFF: mov     r12d, 1
 * 0000000140B02C05: mov     rcx, [rbx+78h]
 * 0000000140B02C09: jnz     loc_140AFC148
 * 0000000140B02C0F: lea     rax, [rsi+r13]
 * 0000000140B02C13: mov     [rsi+900h], rax
 * 0000000140B02C1A: lea     rax, [r14+r15]
 * 0000000140B02C1E: mov     [rsi+908h], rax
 * 0000000140B02C25: movsxd  rax, dword ptr [r14]
 * 0000000140B02C28: jmp     loc_140AFC413
 * 0000000140B02C2D: mov     rdx, r13
 * 0000000140B02C30: mov     rcx, rsi
 * 0000000140B02C33: call    sub_1403F160C
 * 0000000140B02C38: jmp     loc_140AFC39B
 * 0000000140B02C3D: mov     rdx, r13
 * 0000000140B02C40: mov     rcx, rsi
 * 0000000140B02C43: call    sub_1403F2540
 * 0000000140B02C48: jmp     loc_140AFC39B
 * 0000000140B02C4D: mov     eax, [rsi+830h]
 * 0000000140B02C53: mov     r12d, 1
 * 0000000140B02C59: test    r12b, al
 * 0000000140B02C5C: jz      loc_140AFC148
 * 0000000140B02C62: xor     r14d, r14d
 * 0000000140B02C65: cmp     [rsi+980h], r14
 * 0000000140B02C6C: jz      short loc_140B02CA5
 * 0000000140B02C6E: mov     eax, [rsi+994h]
 * 0000000140B02C74: test    al, 4
 * 0000000140B02C76: jnz     short loc_140B02CA5
 * 0000000140B02C78: mov     rax, [rsi+3D0h]
 * 0000000140B02C7F: lea     rdx, [rbp+0A70h+var_7D8]
 * 0000000140B02C86: xor     r9d, r9d
 * 0000000140B02C89: lea     ecx, [r12+19h]
 * 0000000140B02C8E: xor     r8d, r8d
 * 0000000140B02C91: call    KeGuardDispatchICall
 * 0000000140B02C96: mov     rbx, [rbp+0A70h+var_7D8]
 * 0000000140B02C9D: test    eax, eax
 * 0000000140B02C9F: cmovs   rbx, r14
 * 0000000140B02CA3: jmp     short loc_140B02CA8
 * 0000000140B02CA5: mov     rbx, r14
 * 0000000140B02CA8: mov     rax, [rsi+3B0h]
 * 0000000140B02CAF: xor     ecx, ecx
 * 0000000140B02CB1: mov     [rsp+0B70h+var_B18], rbx
 * 0000000140B02CB6: mov     r15d, r14d
 * 0000000140B02CB9: mov     [rsp+0B70h+var_B00], r14d
 * 0000000140B02CBE: call    KeGuardDispatchICall
 * 0000000140B02CC3: mov     r12, rax
 * 0000000140B02CC6: test    rax, rax
 * 0000000140B02CC9: jz      loc_140B0348C
 * 0000000140B02CCF: mov     rcx, r12
 * 0000000140B02CD2: cmp     rbx, r12
 * 0000000140B02CD5: jnz     loc_140B0307B
 * 0000000140B02CDB: mov     rax, [rsi+3A0h]
 * 0000000140B02CE2: mov     r14, r13
 * 0000000140B02CE5: call    KeGuardDispatchICall
 * 0000000140B02CEA: xor     edi, edi
 * 0000000140B02CEC: test    eax, eax
 * 0000000140B02CEE: js      loc_140B0345F
 * 0000000140B02CF4: mov     rax, [rsi+3E0h]
 * 0000000140B02CFB: mov     rcx, r12
 * 0000000140B02CFE: call    KeGuardDispatchICall
 * 0000000140B02D03: movzx   ebx, al
 * 0000000140B02D06: lea     rdx, [rbp+0A70h+arg_18]
 * 0000000140B02D0D: mov     rax, [rsi+3E8h]
 * 0000000140B02D14: mov     rcx, r12
 * 0000000140B02D17: call    KeGuardDispatchICall
 * 0000000140B02D1C: mov     [rbp+0A70h+var_A9E], al
 * 0000000140B02D1F: mov     rcx, r12
 * 0000000140B02D22: mov     rax, [rsi+3F0h]
 * 0000000140B02D29: call    KeGuardDispatchICall
 * 0000000140B02D2E: mov     [rsp+0B70h+var_AF8], rax
 * 0000000140B02D33: cmp     bl, 61h ; 'a'
 * 0000000140B02D36: jz      short loc_140B02DA6
 * 0000000140B02D38: cmp     [rsi+8F8h], edi
 * 0000000140B02D3E: jnz     short loc_140B02DA6
 * 0000000140B02D40: mov     rax, [rsi+588h]
 * 0000000140B02D47: mov     ecx, ebx
 * 0000000140B02D49: xor     rcx, 61h
 * 0000000140B02D4D: mov     [rax+18h], rcx
 * 0000000140B02D51: cmp     [rsi+8F8h], edi
 * 0000000140B02D57: jnz     short loc_140B02DA6
 * 0000000140B02D59: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B02D63: xor     edx, edx
 * 0000000140B02D65: add     rax, rsi
 * 0000000140B02D68: mov     rcx, rsi
 * 0000000140B02D6B: mov     [rsi+900h], rax
 * 0000000140B02D72: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B02D7C: add     rax, r13
 * 0000000140B02D7F: mov     [rsi+908h], rax
 * 0000000140B02D86: movsxd  rax, dword ptr [r13+0]
 * 0000000140B02D8A: mov     [rsi+910h], rax
 * 0000000140B02D91: lea     eax, [rdi+1]
 * 0000000140B02D94: mov     [rsi+918h], r12
 * 0000000140B02D9B: mov     [rsi+8F8h], eax
 * 0000000140B02DA1: call    $$ba
 * 0000000140B02DA6: mov     ecx, ebx
 * 0000000140B02DA8: mov     byte ptr [rbp+0A70h+arg_8], dil
 * 0000000140B02DAF: and     ecx, 7
 * 0000000140B02DB2: mov     r15b, dil
 * 0000000140B02DB5: sub     ecx, 1
 * 0000000140B02DB8: jz      short loc_140B02E2D
 * 0000000140B02DBA: cmp     ecx, 1
 * 0000000140B02DBD: jz      short loc_140B02E1D
 * 0000000140B02DBF: test    bl, 7
 * 0000000140B02DC2: jz      short loc_140B02E30
 * 0000000140B02DC4: cmp     [rsi+8F8h], edi
 * 0000000140B02DCA: jnz     short loc_140B02E30
 * 0000000140B02DCC: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B02DD6: xor     edx, edx
 * 0000000140B02DD8: add     rax, rsi
 * 0000000140B02DDB: mov     rcx, rsi
 * 0000000140B02DDE: mov     [rsi+900h], rax
 * 0000000140B02DE5: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B02DEF: add     rax, r14
 * 0000000140B02DF2: mov     [rsi+908h], rax
 * 0000000140B02DF9: movsxd  rax, dword ptr [r13+0]
 * 0000000140B02DFD: mov     [rsi+910h], rax
 * 0000000140B02E04: mov     eax, 1
 * 0000000140B02E09: mov     [rsi+918h], r12
 * 0000000140B02E10: mov     [rsi+8F8h], eax
 * 0000000140B02E16: call    $$ba
 * 0000000140B02E1B: jmp     short loc_140B02E30
 * 0000000140B02E1D: mov     eax, 10h
 * 0000000140B02E22: mov     r15b, al
 * 0000000140B02E25: mov     byte ptr [rbp+0A70h+arg_8], al
 * 0000000140B02E2B: jmp     short loc_140B02E30
 * 0000000140B02E2D: mov     r15b, 30h ; '0'
 * 0000000140B02E30: mov     r13, [rsi+5C0h]
 * 0000000140B02E37: xor     ecx, ecx
 * 0000000140B02E39: mov     dil, [rbp+0A70h+var_A9E]
 * 0000000140B02E3D: shr     rbx, 4
 * 0000000140B02E41: or      r15b, [r13+rbx*2+0]
 * 0000000140B02E46: cmp     r15b, dil
 * 0000000140B02E49: mov     r15, [rsp+0B70h+var_B20]
 * 0000000140B02E4E: jz      short loc_140B02EA6
 * 0000000140B02E50: cmp     [rsi+8F8h], ecx
 * 0000000140B02E56: jnz     short loc_140B02EA6
 * 0000000140B02E58: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B02E62: xor     edx, edx
 * 0000000140B02E64: add     rax, rsi
 * 0000000140B02E67: mov     [rsi+900h], rax
 * 0000000140B02E6E: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B02E78: add     rax, r14
 * 0000000140B02E7B: mov     [rsi+908h], rax
 * 0000000140B02E82: movsxd  rax, dword ptr [r15]
 * 0000000140B02E85: mov     [rsi+910h], rax
 * 0000000140B02E8C: lea     eax, [rcx+1]
 * 0000000140B02E8F: mov     [rsi+918h], r12
 * 0000000140B02E96: mov     rcx, rsi
 * 0000000140B02E99: mov     [rsi+8F8h], eax
 * 0000000140B02E9F: call    $$ba
 * 0000000140B02EA4: xor     ecx, ecx
 * 0000000140B02EA6: mov     al, byte ptr [rbp+0A70h+arg_8]
 * 0000000140B02EAC: or      al, [r13+rbx*2+1]
 * 0000000140B02EB1: mov     ebx, 1
 * 0000000140B02EB6: cmp     al, [rbp+0A70h+arg_18]
 * 0000000140B02EBC: jz      short loc_140B02F0F
 * 0000000140B02EBE: cmp     [rsi+8F8h], ecx
 * 0000000140B02EC4: jnz     short loc_140B02F0F
 * 0000000140B02EC6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B02ED0: xor     edx, edx
 * 0000000140B02ED2: add     rax, rsi
 * 0000000140B02ED5: mov     rcx, rsi
 * 0000000140B02ED8: mov     [rsi+900h], rax
 * 0000000140B02EDF: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B02EE9: add     rax, r14
 * 0000000140B02EEC: mov     [rsi+908h], rax
 * 0000000140B02EF3: movsxd  rax, dword ptr [r15]
 * 0000000140B02EF6: mov     [rsi+910h], rax
 * 0000000140B02EFD: mov     [rsi+918h], r12
 * 0000000140B02F04: mov     [rsi+8F8h], ebx
 * 0000000140B02F0A: call    $$ba
 * 0000000140B02F0F: cmp     r12, [rsi+4D8h]
 * 0000000140B02F16: jz      loc_140B03436
 * 0000000140B02F1C: mov     rax, [rsi+3D8h]
 * 0000000140B02F23: mov     edx, ebx
 * 0000000140B02F25: mov     rcx, r12
 * 0000000140B02F28: call    KeGuardDispatchICall
 * 0000000140B02F2D: mov     rbx, rax
 * 0000000140B02F30: test    rax, rax
 * 0000000140B02F33: jz      loc_140B03436
 * 0000000140B02F39: mov     rcx, [rax]
 * 0000000140B02F3C: mov     r13, rax
 * 0000000140B02F3F: test    rcx, rcx
 * 0000000140B02F42: jz      loc_140B03427
 * 0000000140B02F48: mov     r13, [rsp+0B70h+var_AF8]
 * 0000000140B02F4D: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B02F54: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140B02F58: mov     [rbx], rcx
 * 0000000140B02F5B: mov     rax, [rsi+1E0h]
 * 0000000140B02F62: call    KeGuardDispatchICall
 * 0000000140B02F67: mov     rcx, [rbx+8]
 * 0000000140B02F6B: movzx   edx, [rbp+0A70h+arg_18]
 * 0000000140B02F72: mov     r15, rcx
 * 0000000140B02F75: movzx   eax, dil
 * 0000000140B02F79: and     r15, 0FFFFFFFFFFFF0000h
 * 0000000140B02F80: cmp     r15, r13
 * 0000000140B02F83: cmovz   edx, eax
 * 0000000140B02F86: mov     rax, [rsi+3F8h]
 * 0000000140B02F8D: shr     rcx, 6
 * 0000000140B02F91: and     cl, 0Fh
 * 0000000140B02F94: call    KeGuardDispatchICall
 * 0000000140B02F99: xor     r9d, r9d
 * 0000000140B02F9C: test    eax, eax
 * 0000000140B02F9E: jnz     loc_140B03066
 * 0000000140B02FA4: test    dword ptr [rsi+990h], 40000000h
 * 0000000140B02FAE: lea     r10d, [r9+1]
 * 0000000140B02FB2: jz      short loc_140B02FFB
 * 0000000140B02FB4: mov     rcx, [rsi+0A80h]
 * 0000000140B02FBB: lea     edx, [rax+30h]
 * 0000000140B02FBE: lea     r8d, [r9+6]
 * 0000000140B02FC2: mov     rax, [r14]
 * 0000000140B02FC5: add     edx, 0FFFFFFF8h
 * 0000000140B02FC8: mov     [rcx], rax
 * 0000000140B02FCB: add     r14, 8
 * 0000000140B02FCF: add     rcx, 8
 * 0000000140B02FD3: sub     r8, r10
 * 0000000140B02FD6: jnz     short loc_140B02FC2
 * 0000000140B02FD8: test    edx, edx
 * 0000000140B02FDA: jz      short loc_140B02FF4
 * 0000000140B02FDC: mov     edi, 0FFFFFFFFh
 * 0000000140B02FE1: mov     al, [r14]
 * 0000000140B02FE4: add     r14, r10
 * 0000000140B02FE7: mov     [rcx], al
 * 0000000140B02FE9: add     rcx, r10
 * 0000000140B02FEC: add     edx, edi
 * 0000000140B02FEE: jnz     short loc_140B02FE1
 * 0000000140B02FF0: mov     dil, [rbp+0A70h+var_A9E]
 * 0000000140B02FF4: mov     r14, [rsi+0A80h]
 * 0000000140B02FFB: mov     [r14+18h], r15
 * 0000000140B02FFF: mov     rax, [rbx]
 * 0000000140B03002: mov     [r14+20h], rax
 * 0000000140B03006: mov     eax, [rbx+8]
 * 0000000140B03009: shr     rax, 6
 * 0000000140B0300D: and     al, 0Fh
 * 0000000140B0300F: mov     [r14+28h], al
 * 0000000140B03013: cmp     [rsi+8F8h], r9d
 * 0000000140B0301A: jnz     short loc_140B03066
 * 0000000140B0301C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B03026: xor     edx, edx
 * 0000000140B03028: add     rax, rsi
 * 0000000140B0302B: mov     rcx, rsi
 * 0000000140B0302E: mov     [rsi+900h], rax
 * 0000000140B03035: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B0303F: add     rax, r14
 * 0000000140B03042: mov     [rsi+908h], rax
 * 0000000140B03049: movsxd  rax, dword ptr [r14]
 * 0000000140B0304C: mov     [rsi+910h], rax
 * 0000000140B03053: mov     [rsi+918h], r12
 * 0000000140B0305A: mov     [rsi+8F8h], r10d
 * 0000000140B03061: call    $$ba
 * 0000000140B03066: add     rbx, 30h ; '0'
 * 0000000140B0306A: mov     rcx, [rbx]
 * 0000000140B0306D: test    rcx, rcx
 * 0000000140B03070: jnz     loc_140B02F54
 * 0000000140B03076: jmp     loc_140B03420
 * 0000000140B0307B: mov     rax, [rsi+3C8h]
 * 0000000140B03082: call    KeGuardDispatchICall
 * 0000000140B03087: test    eax, eax
 * 0000000140B03089: jz      loc_140B03462
 * 0000000140B0308F: mov     rax, [rsi+3A0h]
 * 0000000140B03096: mov     rcx, r12
 * 0000000140B03099: mov     r14, r13
 * 0000000140B0309C: call    KeGuardDispatchICall
 * 0000000140B030A1: test    eax, eax
 * 0000000140B030A3: js      loc_140B0345F
 * 0000000140B030A9: mov     rax, [rsi+3E0h]
 * 0000000140B030B0: mov     rcx, r12
 * 0000000140B030B3: call    KeGuardDispatchICall
 * 0000000140B030B8: movzx   ebx, al
 * 0000000140B030BB: lea     rdx, [rbp+0A70h+var_AA0]
 * 0000000140B030BF: mov     rax, [rsi+3E8h]
 * 0000000140B030C6: mov     rcx, r12
 * 0000000140B030C9: call    KeGuardDispatchICall
 * 0000000140B030CE: movzx   edi, al
 * 0000000140B030D1: mov     rcx, r12
 * 0000000140B030D4: mov     rax, [rsi+3F0h]
 * 0000000140B030DB: call    KeGuardDispatchICall
 * 0000000140B030E0: xor     edx, edx
 * 0000000140B030E2: mov     [rsp+0B70h+var_B08], rax
 * 0000000140B030E7: cmp     bl, 61h ; 'a'
 * 0000000140B030EA: jz      short loc_140B0315A
 * 0000000140B030EC: cmp     [rsi+8F8h], edx
 * 0000000140B030F2: jnz     short loc_140B0315A
 * 0000000140B030F4: mov     rax, [rsi+588h]
 * 0000000140B030FB: mov     ecx, ebx
 * 0000000140B030FD: xor     rcx, 61h
 * 0000000140B03101: mov     [rax+18h], rcx
 * 0000000140B03105: cmp     [rsi+8F8h], edx
 * 0000000140B0310B: jnz     short loc_140B0315A
 * 0000000140B0310D: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B03117: mov     rcx, rsi
 * 0000000140B0311A: add     rax, rsi
 * 0000000140B0311D: mov     [rsi+900h], rax
 * 0000000140B03124: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B0312E: add     rax, r13
 * 0000000140B03131: mov     [rsi+908h], rax
 * 0000000140B03138: movsxd  rax, dword ptr [r13+0]
 * 0000000140B0313C: mov     [rsi+910h], rax
 * 0000000140B03143: lea     eax, [rdx+1]
 * 0000000140B03146: mov     [rsi+918h], r12
 * 0000000140B0314D: mov     [rsi+8F8h], eax
 * 0000000140B03153: call    $$ba
 * 0000000140B03158: xor     edx, edx
 * 0000000140B0315A: mov     ecx, ebx
 * 0000000140B0315C: mov     byte ptr [rbp+0A70h+arg_8], dl
 * 0000000140B03162: and     ecx, 7
 * 0000000140B03165: mov     r15b, dl
 * 0000000140B03168: sub     ecx, 1
 * 0000000140B0316B: jz      short loc_140B031E2
 * 0000000140B0316D: cmp     ecx, 1
 * 0000000140B03170: jz      short loc_140B031D2
 * 0000000140B03172: test    bl, 7
 * 0000000140B03175: jz      short loc_140B031E5
 * 0000000140B03177: cmp     [rsi+8F8h], edx
 * 0000000140B0317D: jnz     short loc_140B031E5
 * 0000000140B0317F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B03189: xor     edx, edx
 * 0000000140B0318B: add     rax, rsi
 * 0000000140B0318E: mov     rcx, rsi
 * 0000000140B03191: mov     [rsi+900h], rax
 * 0000000140B03198: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B031A2: add     rax, r14
 * 0000000140B031A5: mov     [rsi+908h], rax
 * 0000000140B031AC: movsxd  rax, dword ptr [r13+0]
 * 0000000140B031B0: mov     [rsi+910h], rax
 * 0000000140B031B7: mov     eax, 1
 * 0000000140B031BC: mov     [rsi+918h], r12
 * 0000000140B031C3: mov     [rsi+8F8h], eax
 * 0000000140B031C9: call    $$ba
 * 0000000140B031CE: xor     edx, edx
 * 0000000140B031D0: jmp     short loc_140B031E5
 * 0000000140B031D2: mov     eax, 10h
 * 0000000140B031D7: mov     r15b, al
 * 0000000140B031DA: mov     byte ptr [rbp+0A70h+arg_8], al
 * 0000000140B031E0: jmp     short loc_140B031E5
 * 0000000140B031E2: mov     r15b, 30h ; '0'
 * 0000000140B031E5: mov     r13, [rsi+5C0h]
 * 0000000140B031EC: shr     rbx, 4
 * 0000000140B031F0: or      r15b, [r13+rbx*2+0]
 * 0000000140B031F5: cmp     r15b, dil
 * 0000000140B031F8: mov     r15, [rsp+0B70h+var_B20]
 * 0000000140B031FD: jz      short loc_140B03255
 * 0000000140B031FF: cmp     [rsi+8F8h], edx
 * 0000000140B03205: jnz     short loc_140B03255
 * 0000000140B03207: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B03211: xor     edx, edx
 * 0000000140B03213: add     rax, rsi
 * 0000000140B03216: mov     rcx, rsi
 * 0000000140B03219: mov     [rsi+900h], rax
 * 0000000140B03220: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B0322A: add     rax, r14
 * 0000000140B0322D: mov     [rsi+908h], rax
 * 0000000140B03234: movsxd  rax, dword ptr [r15]
 * 0000000140B03237: mov     [rsi+910h], rax
 * 0000000140B0323E: mov     eax, 1
 * 0000000140B03243: mov     [rsi+918h], r12
 * 0000000140B0324A: mov     [rsi+8F8h], eax
 * 0000000140B03250: call    $$ba
 * 0000000140B03255: mov     al, byte ptr [rbp+0A70h+arg_8]
 * 0000000140B0325B: or      al, [r13+rbx*2+1]
 * 0000000140B03260: mov     ebx, 1
 * 0000000140B03265: cmp     al, [rbp+0A70h+var_AA0]
 * 0000000140B03268: jz      short loc_140B032BD
 * 0000000140B0326A: xor     eax, eax
 * 0000000140B0326C: cmp     [rsi+8F8h], eax
 * 0000000140B03272: jnz     short loc_140B032BD
 * 0000000140B03274: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0327E: xor     edx, edx
 * 0000000140B03280: add     rax, rsi
 * 0000000140B03283: mov     rcx, rsi
 * 0000000140B03286: mov     [rsi+900h], rax
 * 0000000140B0328D: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B03297: add     rax, r14
 * 0000000140B0329A: mov     [rsi+908h], rax
 * 0000000140B032A1: movsxd  rax, dword ptr [r15]
 * 0000000140B032A4: mov     [rsi+910h], rax
 * 0000000140B032AB: mov     [rsi+918h], r12
 * 0000000140B032B2: mov     [rsi+8F8h], ebx
 * 0000000140B032B8: call    $$ba
 * 0000000140B032BD: cmp     r12, [rsi+4D8h]
 * 0000000140B032C4: jz      loc_140B03436
 * 0000000140B032CA: mov     rax, [rsi+3D8h]
 * 0000000140B032D1: mov     edx, ebx
 * 0000000140B032D3: mov     rcx, r12
 * 0000000140B032D6: call    KeGuardDispatchICall
 * 0000000140B032DB: mov     rbx, rax
 * 0000000140B032DE: test    rax, rax
 * 0000000140B032E1: jz      loc_140B03436
 * 0000000140B032E7: mov     rcx, [rax]
 * 0000000140B032EA: mov     r13, rax
 * 0000000140B032ED: test    rcx, rcx
 * 0000000140B032F0: jz      loc_140B03427
 * 0000000140B032F6: mov     r13, [rsp+0B70h+var_B08]
 * 0000000140B032FB: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B03302: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140B03306: mov     [rbx], rcx
 * 0000000140B03309: mov     rax, [rsi+1E0h]
 * 0000000140B03310: call    KeGuardDispatchICall
 * 0000000140B03315: mov     rcx, [rbx+8]
 * 0000000140B03319: movzx   edx, [rbp+0A70h+var_AA0]
 * 0000000140B0331D: mov     r15, rcx
 * 0000000140B03320: mov     rax, [rsi+3F8h]
 * 0000000140B03327: and     r15, 0FFFFFFFFFFFF0000h
 * 0000000140B0332E: cmp     r15, r13
 * 0000000140B03331: cmovz   edx, edi
 * 0000000140B03334: shr     rcx, 6
 * 0000000140B03338: and     cl, 0Fh
 * 0000000140B0333B: call    KeGuardDispatchICall
 * 0000000140B03340: xor     r9d, r9d
 * 0000000140B03343: test    eax, eax
 * 0000000140B03345: jnz     loc_140B03410
 * 0000000140B0334B: test    dword ptr [rsi+990h], 40000000h
 * 0000000140B03355: lea     r10d, [r9+1]
 * 0000000140B03359: jz      short loc_140B033A5
 * 0000000140B0335B: mov     rcx, [rsi+0A80h]
 * 0000000140B03362: lea     edx, [rax+30h]
 * 0000000140B03365: lea     r8d, [r9+6]
 * 0000000140B03369: mov     rax, [r14]
 * 0000000140B0336C: add     edx, 0FFFFFFF8h
 * 0000000140B0336F: mov     [rcx], rax
 * 0000000140B03372: add     r14, 8
 * 0000000140B03376: add     rcx, 8
 * 0000000140B0337A: sub     r8, r10
 * 0000000140B0337D: jnz     short loc_140B03369
 * 0000000140B0337F: test    edx, edx
 * 0000000140B03381: jz      short loc_140B0339E
 * 0000000140B03383: mov     r13d, 0FFFFFFFFh
 * 0000000140B03389: mov     al, [r14]
 * 0000000140B0338C: add     r14, r10
 * 0000000140B0338F: mov     [rcx], al
 * 0000000140B03391: add     rcx, r10
 * 0000000140B03394: add     edx, r13d
 * 0000000140B03397: jnz     short loc_140B03389
 * 0000000140B03399: mov     r13, [rsp+0B70h+var_B08]
 * 0000000140B0339E: mov     r14, [rsi+0A80h]
 * 0000000140B033A5: mov     [r14+18h], r15
 * 0000000140B033A9: mov     rax, [rbx]
 * 0000000140B033AC: mov     [r14+20h], rax
 * 0000000140B033B0: mov     eax, [rbx+8]
 * 0000000140B033B3: shr     rax, 6
 * 0000000140B033B7: and     al, 0Fh
 * 0000000140B033B9: mov     [r14+28h], al
 * 0000000140B033BD: cmp     [rsi+8F8h], r9d
 * 0000000140B033C4: jnz     short loc_140B03410
 * 0000000140B033C6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B033D0: xor     edx, edx
 * 0000000140B033D2: add     rax, rsi
 * 0000000140B033D5: mov     rcx, rsi
 * 0000000140B033D8: mov     [rsi+900h], rax
 * 0000000140B033DF: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B033E9: add     rax, r14
 * 0000000140B033EC: mov     [rsi+908h], rax
 * 0000000140B033F3: movsxd  rax, dword ptr [r14]
 * 0000000140B033F6: mov     [rsi+910h], rax
 * 0000000140B033FD: mov     [rsi+918h], r12
 * 0000000140B03404: mov     [rsi+8F8h], r10d
 * 0000000140B0340B: call    $$ba
 * 0000000140B03410: add     rbx, 30h ; '0'
 * 0000000140B03414: mov     rcx, [rbx]
 * 0000000140B03417: test    rcx, rcx
 * 0000000140B0341A: jnz     loc_140B03302
 * 0000000140B03420: mov     r13, [rbp+0A70h+arg_8]
 * 0000000140B03427: mov     rax, [rsi+0F8h]
 * 0000000140B0342E: mov     rcx, r13
 * 0000000140B03431: call    KeGuardDispatchICall
 * 0000000140B03436: mov     rax, [rsi+3A8h]
 * 0000000140B0343D: mov     rcx, r12
 * 0000000140B03440: call    KeGuardDispatchICall
 * 0000000140B03445: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B0344A: mov     eax, 8000h
 * 0000000140B0344F: add     [rsi+828h], eax
 * 0000000140B03455: mov     r15d, [rsp+0B70h+var_B00]
 * 0000000140B0345A: mov     rbx, [rsp+0B70h+var_B18]
 * 0000000140B0345F: xor     r14d, r14d
 * 0000000140B03462: mov     rax, [rsi+3B0h]
 * 0000000140B03469: inc     r15d
 * 0000000140B0346C: mov     rcx, r12
 * 0000000140B0346F: mov     [rsp+0B70h+var_B00], r15d
 * 0000000140B03474: call    KeGuardDispatchICall
 * 0000000140B03479: mov     r12, rax
 * 0000000140B0347C: test    rax, rax
 * 0000000140B0347F: jnz     loc_140B02CCF
 * 0000000140B03485: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0348C: mov     r13, [rsi+4D8h]
 * 0000000140B03493: mov     rax, [rsi+3A0h]
 * 0000000140B0349A: mov     rcx, r13
 * 0000000140B0349D: call    KeGuardDispatchICall
 * 0000000140B034A2: test    eax, eax
 * 0000000140B034A4: js      loc_140B0386D
 * 0000000140B034AA: mov     rax, [rsi+3E0h]
 * 0000000140B034B1: mov     rcx, r13
 * 0000000140B034B4: call    KeGuardDispatchICall
 * 0000000140B034B9: movzx   ebx, al
 * 0000000140B034BC: lea     rdx, [rbp+0A70h+var_A9F]
 * 0000000140B034C0: mov     rax, [rsi+3E8h]
 * 0000000140B034C7: mov     rcx, r13
 * 0000000140B034CA: call    KeGuardDispatchICall
 * 0000000140B034CF: mov     byte ptr [rbp+0A70h+arg_8], al
 * 0000000140B034D5: mov     rcx, r13
 * 0000000140B034D8: mov     rax, [rsi+3F0h]
 * 0000000140B034DF: call    KeGuardDispatchICall
 * 0000000140B034E4: mov     [rsp+0B70h+var_AF8], rax
 * 0000000140B034E9: cmp     bl, 72h ; 'r'
 * 0000000140B034EC: jz      short loc_140B03566
 * 0000000140B034EE: cmp     [rsi+8F8h], r14d
 * 0000000140B034F5: jnz     short loc_140B03566
 * 0000000140B034F7: mov     rax, [rsi+588h]
 * 0000000140B034FE: mov     ecx, ebx
 * 0000000140B03500: mov     r15, [rsp+0B70h+var_B20]
 * 0000000140B03505: xor     rcx, 72h
 * 0000000140B03509: mov     [rax+18h], rcx
 * 0000000140B0350D: cmp     [rsi+8F8h], r14d
 * 0000000140B03514: jnz     short loc_140B0356B
 * 0000000140B03516: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B03520: xor     edx, edx
 * 0000000140B03522: add     rax, rsi
 * 0000000140B03525: mov     rcx, rsi
 * 0000000140B03528: mov     [rsi+900h], rax
 * 0000000140B0352F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B03539: add     rax, r15
 * 0000000140B0353C: mov     [rsi+908h], rax
 * 0000000140B03543: movsxd  rax, dword ptr [r15]
 * 0000000140B03546: mov     [rsi+910h], rax
 * 0000000140B0354D: mov     eax, 1
 * 0000000140B03552: mov     [rsi+918h], r13
 * 0000000140B03559: mov     [rsi+8F8h], eax
 * 0000000140B0355F: call    $$ba
 * 0000000140B03564: jmp     short loc_140B0356B
 * 0000000140B03566: mov     r15, [rsp+0B70h+var_B20]
 * 0000000140B0356B: xor     edx, edx
 * 0000000140B0356D: mov     ecx, ebx
 * 0000000140B0356F: and     ecx, 7
 * 0000000140B03572: mov     r12b, dl
 * 0000000140B03575: sub     ecx, 1
 * 0000000140B03578: jz      short loc_140B035E7
 * 0000000140B0357A: cmp     ecx, 1
 * 0000000140B0357D: jz      short loc_140B035DA
 * 0000000140B0357F: test    bl, 7
 * 0000000140B03582: jz      short loc_140B035EA
 * 0000000140B03584: cmp     [rsi+8F8h], edx
 * 0000000140B0358A: jnz     short loc_140B035EA
 * 0000000140B0358C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B03596: mov     rcx, rsi
 * 0000000140B03599: add     rax, rsi
 * 0000000140B0359C: mov     [rsi+900h], rax
 * 0000000140B035A3: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B035AD: add     rax, r15
 * 0000000140B035B0: mov     [rsi+908h], rax
 * 0000000140B035B7: movsxd  rax, dword ptr [r15]
 * 0000000140B035BA: mov     [rsi+910h], rax
 * 0000000140B035C1: lea     eax, [rdx+1]
 * 0000000140B035C4: mov     [rsi+918h], r13
 * 0000000140B035CB: mov     [rsi+8F8h], eax
 * 0000000140B035D1: call    $$ba
 * 0000000140B035D6: xor     edx, edx
 * 0000000140B035D8: jmp     short loc_140B035EA
 * 0000000140B035DA: mov     eax, 10h
 * 0000000140B035DF: mov     r14b, al
 * 0000000140B035E2: mov     r12b, al
 * 0000000140B035E5: jmp     short loc_140B035EA
 * 0000000140B035E7: mov     r14b, 30h ; '0'
 * 0000000140B035EA: mov     r15, [rsi+5C0h]
 * 0000000140B035F1: shr     rbx, 4
 * 0000000140B035F5: or      r14b, [r15+rbx*2]
 * 0000000140B035F9: cmp     r14b, byte ptr [rbp+0A70h+arg_8]
 * 0000000140B03600: mov     r14, [rsp+0B70h+var_B20]
 * 0000000140B03605: jz      short loc_140B0365D
 * 0000000140B03607: cmp     [rsi+8F8h], edx
 * 0000000140B0360D: jnz     short loc_140B0365D
 * 0000000140B0360F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B03619: xor     edx, edx
 * 0000000140B0361B: add     rax, rsi
 * 0000000140B0361E: mov     rcx, rsi
 * 0000000140B03621: mov     [rsi+900h], rax
 * 0000000140B03628: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B03632: add     rax, r14
 * 0000000140B03635: mov     [rsi+908h], rax
 * 0000000140B0363C: movsxd  rax, dword ptr [r14]
 * 0000000140B0363F: mov     [rsi+910h], rax
 * 0000000140B03646: mov     eax, 1
 * 0000000140B0364B: mov     [rsi+918h], r13
 * 0000000140B03652: mov     [rsi+8F8h], eax
 * 0000000140B03658: call    $$ba
 * 0000000140B0365D: or      r12b, [r15+rbx*2+1]
 * 0000000140B03662: mov     ebx, 1
 * 0000000140B03667: cmp     r12b, [rbp+0A70h+var_A9F]
 * 0000000140B0366B: jz      short loc_140B036C2
 * 0000000140B0366D: xor     r12d, r12d
 * 0000000140B03670: cmp     [rsi+8F8h], r12d
 * 0000000140B03677: jnz     short loc_140B036C2
 * 0000000140B03679: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B03683: xor     edx, edx
 * 0000000140B03685: add     rax, rsi
 * 0000000140B03688: mov     rcx, rsi
 * 0000000140B0368B: mov     [rsi+900h], rax
 * 0000000140B03692: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B0369C: add     rax, r14
 * 0000000140B0369F: mov     [rsi+908h], rax
 * 0000000140B036A6: movsxd  rax, dword ptr [r14]
 * 0000000140B036A9: mov     [rsi+910h], rax
 * 0000000140B036B0: mov     [rsi+918h], r13
 * 0000000140B036B7: mov     [rsi+8F8h], ebx
 * 0000000140B036BD: call    $$ba
 * 0000000140B036C2: cmp     r13, [rsi+4D8h]
 * 0000000140B036C9: jz      loc_140B0384E
 * 0000000140B036CF: mov     rax, [rsi+3D8h]
 * 0000000140B036D6: mov     edx, ebx
 * 0000000140B036D8: mov     rcx, r13
 * 0000000140B036DB: call    KeGuardDispatchICall
 * 0000000140B036E0: mov     rbx, rax
 * 0000000140B036E3: test    rax, rax
 * 0000000140B036E6: jz      loc_140B0384E
 * 0000000140B036EC: mov     rcx, [rax]
 * 0000000140B036EF: mov     r15, rax
 * 0000000140B036F2: test    rcx, rcx
 * 0000000140B036F5: jz      loc_140B0383F
 * 0000000140B036FB: mov     dil, byte ptr [rbp+0A70h+arg_8]
 * 0000000140B03702: mov     r12, [rsp+0B70h+var_AF8]
 * 0000000140B03707: mov     r15, [rsp+0B70h+var_B20]
 * 0000000140B0370C: mov     [rsp+0B70h+var_B08], rax
 * 0000000140B03711: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140B03715: mov     [rbx], rcx
 * 0000000140B03718: mov     rax, [rsi+1E0h]
 * 0000000140B0371F: call    KeGuardDispatchICall
 * 0000000140B03724: mov     rcx, [rbx+8]
 * 0000000140B03728: movzx   edx, [rbp+0A70h+var_A9F]
 * 0000000140B0372C: mov     r14, rcx
 * 0000000140B0372F: movzx   eax, dil
 * 0000000140B03733: and     r14, 0FFFFFFFFFFFF0000h
 * 0000000140B0373A: cmp     r14, r12
 * 0000000140B0373D: cmovz   edx, eax
 * 0000000140B03740: mov     rax, [rsi+3F8h]
 * 0000000140B03747: shr     rcx, 6
 * 0000000140B0374B: and     cl, 0Fh
 * 0000000140B0374E: call    KeGuardDispatchICall
 * 0000000140B03753: xor     r9d, r9d
 * 0000000140B03756: test    eax, eax
 * 0000000140B03758: jnz     loc_140B03823
 * 0000000140B0375E: test    dword ptr [rsi+990h], 40000000h
 * 0000000140B03768: lea     r10d, [r9+1]
 * 0000000140B0376C: jz      short loc_140B037B8
 * 0000000140B0376E: mov     rcx, [rsi+0A80h]
 * 0000000140B03775: lea     edx, [rax+30h]
 * 0000000140B03778: lea     r8d, [r9+6]
 * 0000000140B0377C: mov     rax, [r15]
 * 0000000140B0377F: add     edx, 0FFFFFFF8h
 * 0000000140B03782: mov     [rcx], rax
 * 0000000140B03785: add     r15, 8
 * 0000000140B03789: add     rcx, 8
 * 0000000140B0378D: sub     r8, r10
 * 0000000140B03790: jnz     short loc_140B0377C
 * 0000000140B03792: test    edx, edx
 * 0000000140B03794: jz      short loc_140B037B1
 * 0000000140B03796: mov     edi, 0FFFFFFFFh
 * 0000000140B0379B: mov     al, [r15]
 * 0000000140B0379E: add     r15, r10
 * 0000000140B037A1: mov     [rcx], al
 * 0000000140B037A3: add     rcx, r10
 * 0000000140B037A6: add     edx, edi
 * 0000000140B037A8: jnz     short loc_140B0379B
 * 0000000140B037AA: mov     dil, byte ptr [rbp+0A70h+arg_8]
 * 0000000140B037B1: mov     r15, [rsi+0A80h]
 * 0000000140B037B8: mov     [r15+18h], r14
 * 0000000140B037BC: mov     rax, [rbx]
 * 0000000140B037BF: mov     [r15+20h], rax
 * 0000000140B037C3: mov     eax, [rbx+8]
 * 0000000140B037C6: shr     rax, 6
 * 0000000140B037CA: and     al, 0Fh
 * 0000000140B037CC: mov     [r15+28h], al
 * 0000000140B037D0: cmp     [rsi+8F8h], r9d
 * 0000000140B037D7: jnz     short loc_140B03823
 * 0000000140B037D9: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B037E3: xor     edx, edx
 * 0000000140B037E5: add     rax, rsi
 * 0000000140B037E8: mov     rcx, rsi
 * 0000000140B037EB: mov     [rsi+900h], rax
 * 0000000140B037F2: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B037FC: add     rax, r15
 * 0000000140B037FF: mov     [rsi+908h], rax
 * 0000000140B03806: movsxd  rax, dword ptr [r15]
 * 0000000140B03809: mov     [rsi+910h], rax
 * 0000000140B03810: mov     [rsi+918h], r13
 * 0000000140B03817: mov     [rsi+8F8h], r10d
 * 0000000140B0381E: call    $$ba
 * 0000000140B03823: add     rbx, 30h ; '0'
 * 0000000140B03827: mov     rcx, [rbx]
 * 0000000140B0382A: test    rcx, rcx
 * 0000000140B0382D: jnz     loc_140B03711
 * 0000000140B03833: mov     r15, [rsp+0B70h+var_B08]
 * 0000000140B03838: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0383F: mov     rax, [rsi+0F8h]
 * 0000000140B03846: mov     rcx, r15
 * 0000000140B03849: call    KeGuardDispatchICall
 * 0000000140B0384E: mov     rax, [rsi+3A8h]
 * 0000000140B03855: mov     rcx, r13
 * 0000000140B03858: call    KeGuardDispatchICall
 * 0000000140B0385D: mov     r15d, [rsp+0B70h+var_B00]
 * 0000000140B03862: mov     eax, 8000h
 * 0000000140B03867: add     [rsi+828h], eax
 * 0000000140B0386D: mov     rcx, [rsp+0B70h+var_B18]
 * 0000000140B03872: test    rcx, rcx
 * 0000000140B03875: jz      short loc_140B03883
 * 0000000140B03877: mov     rax, [rsi+1E0h]
 * 0000000140B0387E: call    KeGuardDispatchICall
 * 0000000140B03883: shl     r15d, 8
 * 0000000140B03887: add     [rsi+828h], r15d
 * 0000000140B0388E: jmp     loc_140AFC39B
 * 0000000140B03893: xor     r14d, r14d
 * 0000000140B03896: test    [r13+2Ah], r11b
 * 0000000140B0389A: jz      short loc_140B038D9
 * 0000000140B0389C: cmp     [rsi+980h], r14
 * 0000000140B038A3: jz      loc_140B03963
 * 0000000140B038A9: mov     ecx, [rsi+994h]
 * 0000000140B038AF: test    cl, 4
 * 0000000140B038B2: jnz     loc_140B03963
 * 0000000140B038B8: cmp     [rsi+824h], r14d
 * 0000000140B038BF: jnz     loc_140B0395A
 * 0000000140B038C5: lea     eax, ds:0[rcx*8]
 * 0000000140B038CC: xor     eax, ecx
 * 0000000140B038CE: and     eax, 20h
 * 0000000140B038D1: xor     eax, ecx
 * 0000000140B038D3: mov     [rsi+994h], eax
 * 0000000140B038D9: mov     r10, [r13+8]
 * 0000000140B038DD: mov     r8d, [rsi+824h]
 * 0000000140B038E4: mov     [rbp+0A70h+var_A98], r10
 * 0000000140B038E8: lea     rax, [r8+r8*2]
 * 0000000140B038EC: lea     rcx, [r10+rax*4]
 * 0000000140B038F0: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140B038FA: lea     r11, [rcx+0Ch]
 * 0000000140B038FE: mov     [rsp+0B70h+var_AF8], rcx
 * 0000000140B03903: mov     ecx, [r13+24h]
 * 0000000140B03907: mul     rcx
 * 0000000140B0390A: mov     [rsp+0B70h+var_B08], r11
 * 0000000140B0390F: mov     r9, rdx
 * 0000000140B03912: shr     r9, 3
 * 0000000140B03916: mov     eax, r9d
 * 0000000140B03919: mov     [rbp+0A70h+var_AC8], r9
 * 0000000140B0391D: lea     rcx, [rax+rax*2]
 * 0000000140B03921: lea     rax, [r10+rcx*4]
 * 0000000140B03925: mov     [rbp+0A70h+var_AF0], rax
 * 0000000140B03929: lea     rax, [r13+30h]
 * 0000000140B0392D: lea     r15, [rax+r8]
 * 0000000140B03931: mov     [rsp+0B70h+var_B18], r15
 * 0000000140B03936: lea     r10d, [r9-1]
 * 0000000140B0393A: mov     dword ptr [rbp+0A70h+arg_8], r10d
 * 0000000140B03941: test    r9d, r9d
 * 0000000140B03944: jz      short loc_140B0396F
 * 0000000140B03946: mov     edx, r10d
 * 0000000140B03949: add     rdx, 7
 * 0000000140B0394D: and     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140B03951: add     rdx, rax
 * 0000000140B03954: mov     [rbp+0A70h+var_AE8], rdx
 * 0000000140B03958: jmp     short loc_140B0397D
 * 0000000140B0395A: test    cl, 20h
 * 0000000140B0395D: jz      loc_140B038D9
 * 0000000140B03963: mov     [rsi+824h], r14d
 * 0000000140B0396A: jmp     loc_140AFC39B
 * 0000000140B0396F: mov     rdx, rax
 * 0000000140B03972: mov     [rbp+0A70h+var_AE8], rax
 * 0000000140B03976: mov     dword ptr [rbp+0A70h+arg_8], r10d
 * 0000000140B0397D: movzx   eax, word ptr [r13+28h]
 * 0000000140B03982: lea     rcx, [rax+rax*2]
 * 0000000140B03986: lea     rax, [rdx+rcx*8]
 * 0000000140B0398A: mov     [rbp+0A70h+var_A70], rax
 * 0000000140B0398E: test    r9d, r9d
 * 0000000140B03991: jz      loc_140B03CC3
 * 0000000140B03997: cmp     r8d, r10d
 * 0000000140B0399A: jnb     loc_140B03CC3
 * 0000000140B039A0: mov     rdi, [rsp+0B70h+var_AF8]
 * 0000000140B039A5: mov     edx, 1
 * 0000000140B039AA: lea     ebx, [rdx+0Bh]
 * 0000000140B039AD: cmp     [r15], r14b
 * 0000000140B039B0: jl      loc_140B03C54
 * 0000000140B039B6: mov     eax, [rdi+4]
 * 0000000140B039B9: mov     r9d, [r11]
 * 0000000140B039BC: mov     r13d, eax
 * 0000000140B039BF: sub     r9d, eax
 * 0000000140B039C2: mov     rax, [rsp+0B70h+var_B20]
 * 0000000140B039C7: mov     r12d, r9d
 * 0000000140B039CA: mov     [rsp+0B70h+var_AF8], r12
 * 0000000140B039CF: add     r13, [rax+18h]
 * 0000000140B039D3: add     [rsi+828h], r9d
 * 0000000140B039DA: mov     r10, r13
 * 0000000140B039DD: mov     ebx, [rsi+814h]
 * 0000000140B039E3: mov     rax, r13
 * 0000000140B039E6: mov     r14, [rsi+818h]
 * 0000000140B039ED: lea     rcx, [r9+r13]
 * 0000000140B039F1: mov     [rbp+0A70h+var_AB0], r13
 * 0000000140B039F5: cmp     r13, rcx
 * 0000000140B039F8: jnb     short loc_140B03A0B
 * 0000000140B039FA: mov     r8d, 40h ; '@'
 * 0000000140B03A00: prefetchnta byte ptr [rax]
 * 0000000140B03A03: add     rax, r8
 * 0000000140B03A06: cmp     rax, rcx
 * 0000000140B03A09: jb      short loc_140B03A00
 * 0000000140B03A0B: mov     r11d, r9d
 * 0000000140B03A0E: mov     r8, r14
 * 0000000140B03A11: shr     r11d, 7
 * 0000000140B03A15: test    r11d, r11d
 * 0000000140B03A18: jz      short loc_140B03A89
 * 0000000140B03A1A: mov     esi, 0FFFFFFFFh
 * 0000000140B03A1F: mov     r12, 7010008004002001h
 * 0000000140B03A29: mov     eax, 8
 * 0000000140B03A2E: xor     r8, [r10]
 * 0000000140B03A31: mov     ecx, ebx
 * 0000000140B03A33: rol     r8, cl
 * 0000000140B03A36: xor     r8, [r10+8]
 * 0000000140B03A3A: add     r10, 10h
 * 0000000140B03A3E: rol     r8, cl
 * 0000000140B03A41: sub     rax, rdx
 * 0000000140B03A44: jnz     short loc_140B03A2E
 * 0000000140B03A46: mov     rcx, r10
 * 0000000140B03A49: sub     rcx, r13
 * 0000000140B03A4C: xor     rcx, r14
 * 0000000140B03A4F: mov     rax, rcx
 * 0000000140B03A52: rol     rax, 11h
 * 0000000140B03A56: xor     rcx, rax
 * 0000000140B03A59: mov     rax, r12
 * 0000000140B03A5C: mul     rcx
 * 0000000140B03A5F: xor     ebx, eax
 * 0000000140B03A61: mov     [rbp+0A70h+var_5B8], rdx
 * 0000000140B03A68: xor     ebx, edx
 * 0000000140B03A6A: mov     edx, 1
 * 0000000140B03A6F: and     ebx, 3Fh
 * 0000000140B03A72: cmovz   ebx, edx
 * 0000000140B03A75: add     r11d, esi
 * 0000000140B03A78: jnz     short loc_140B03A29
 * 0000000140B03A7A: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B03A7F: mov     r12, [rsp+0B70h+var_AF8]
 * 0000000140B03A84: mov     r15, [rsp+0B70h+var_B18]
 * 0000000140B03A89: and     r9d, 7Fh
 * 0000000140B03A8D: cmp     r9d, 8
 * 0000000140B03A91: jb      short loc_140B03AAF
 * 0000000140B03A93: mov     eax, r9d
 * 0000000140B03A96: shr     rax, 3
 * 0000000140B03A9A: xor     r8, [r10]
 * 0000000140B03A9D: mov     ecx, ebx
 * 0000000140B03A9F: rol     r8, cl
 * 0000000140B03AA2: add     r10, 8
 * 0000000140B03AA6: add     r9d, 0FFFFFFF8h
 * 0000000140B03AAA: sub     rax, rdx
 * 0000000140B03AAD: jnz     short loc_140B03A9A
 * 0000000140B03AAF: xor     r14d, r14d
 * 0000000140B03AB2: test    r9d, r9d
 * 0000000140B03AB5: jz      short loc_140B03AD5
 * 0000000140B03AB7: mov     esi, 0FFFFFFFFh
 * 0000000140B03ABC: movzx   eax, byte ptr [r10]
 * 0000000140B03AC0: mov     ecx, ebx
 * 0000000140B03AC2: xor     r8, rax
 * 0000000140B03AC5: add     r10, rdx
 * 0000000140B03AC8: rol     r8, cl
 * 0000000140B03ACB: add     r9d, esi
 * 0000000140B03ACE: jnz     short loc_140B03ABC
 * 0000000140B03AD0: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B03AD5: mov     rax, r8
 * 0000000140B03AD8: jmp     short loc_140B03ADD
 * 0000000140B03ADA: xor     r8b, al
 * 0000000140B03ADD: shr     rax, 7
 * 0000000140B03AE1: test    rax, rax
 * 0000000140B03AE4: jnz     short loc_140B03ADA
 * 0000000140B03AE6: movzx   ecx, byte ptr [r15]
 * 0000000140B03AEA: mov     eax, ecx
 * 0000000140B03AEC: movzx   edx, r8b
 * 0000000140B03AF0: and     edx, 7Fh
 * 0000000140B03AF3: and     eax, 7Fh
 * 0000000140B03AF6: mov     dword ptr [rbp+0A70h+var_AD8], edx
 * 0000000140B03AF9: cmp     edx, eax
 * 0000000140B03AFB: jz      loc_140B03C35
 * 0000000140B03B01: test    r12, r12
 * 0000000140B03B04: jz      loc_140B03BBA
 * 0000000140B03B0A: mov     eax, [rsi+994h]
 * 0000000140B03B10: mov     r8d, 40h ; '@'
 * 0000000140B03B16: test    r8b, al
 * 0000000140B03B19: jz      loc_140B03BBA
 * 0000000140B03B1F: mov     r15, cr8
 * 0000000140B03B23: lea     eax, [r8-3Eh]
 * 0000000140B03B27: mov     cr8, rax
 * 0000000140B03B2B: mov     rbx, r13
 * 0000000140B03B2E: dec     r12
 * 0000000140B03B31: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140B03B38: add     r13, r12
 * 0000000140B03B3B: or      r13, 0FFFh
 * 0000000140B03B42: lea     r12, [rbx-1]
 * 0000000140B03B46: movzx   r14d, r15b
 * 0000000140B03B4A: mov     rax, [rsi+468h]
 * 0000000140B03B51: xor     edx, edx
 * 0000000140B03B53: mov     rcx, rbx
 * 0000000140B03B56: call    KeGuardDispatchICall
 * 0000000140B03B5B: cmp     eax, 0C000022Dh
 * 0000000140B03B60: jnz     short loc_140B03B85
 * 0000000140B03B62: mov     eax, 1
 * 0000000140B03B67: cmp     r15b, al
 * 0000000140B03B6A: ja      short loc_140B03B89
 * 0000000140B03B6C: movzx   r14d, r15b
 * 0000000140B03B70: mov     cr8, r14
 * 0000000140B03B74: mov     al, [rbx]
 * 0000000140B03B76: mov     rax, cr8
 * 0000000140B03B7A: mov     eax, 2
 * 0000000140B03B7F: mov     cr8, rax
 * 0000000140B03B83: jmp     short loc_140B03B4A
 * 0000000140B03B85: test    eax, eax
 * 0000000140B03B87: js      short loc_140B03BA5
 * 0000000140B03B89: mov     eax, 1000h
 * 0000000140B03B8E: add     rbx, rax
 * 0000000140B03B91: add     r12, rax
 * 0000000140B03B94: cmp     r12, r13
 * 0000000140B03B97: jnz     short loc_140B03B46
 * 0000000140B03B99: mov     cr8, r14
 * 0000000140B03B9D: xor     r14d, r14d
 * 0000000140B03BA0: jmp     loc_140B03C35
 * 0000000140B03BA5: mov     cr8, r14
 * 0000000140B03BA9: mov     rax, [rsp+0B70h+var_B18]
 * 0000000140B03BAE: xor     r14d, r14d
 * 0000000140B03BB1: mov     edx, dword ptr [rbp+0A70h+var_AD8]
 * 0000000140B03BB4: mov     r13, [rbp+0A70h+var_AB0]
 * 0000000140B03BB8: mov     cl, [rax]
 * 0000000140B03BBA: movzx   eax, cl
 * 0000000140B03BBD: and     eax, 7Fh
 * 0000000140B03BC0: cmp     [rsi+8F8h], r14d
 * 0000000140B03BC7: jnz     short loc_140B03C35
 * 0000000140B03BC9: mov     ecx, edx
 * 0000000140B03BCB: xor     rcx, rax
 * 0000000140B03BCE: mov     rax, [rsi+588h]
 * 0000000140B03BD5: mov     [rax+18h], rcx
 * 0000000140B03BD9: cmp     [rsi+8F8h], r14d
 * 0000000140B03BE0: jnz     short loc_140B03C35
 * 0000000140B03BE2: mov     rcx, [rsp+0B70h+var_B20]
 * 0000000140B03BE7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B03BF1: add     rax, rsi
 * 0000000140B03BF4: xor     edx, edx
 * 0000000140B03BF6: mov     [rsi+900h], rax
 * 0000000140B03BFD: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B03C07: add     rax, rcx
 * 0000000140B03C0A: mov     [rsi+908h], rax
 * 0000000140B03C11: movsxd  rax, dword ptr [rcx]
 * 0000000140B03C14: mov     rcx, rsi
 * 0000000140B03C17: mov     [rsi+910h], rax
 * 0000000140B03C1E: mov     eax, 1
 * 0000000140B03C23: mov     [rsi+918h], r13
 * 0000000140B03C2A: mov     [rsi+8F8h], eax
 * 0000000140B03C30: call    $$ba
 * 0000000140B03C35: mov     r15, [rsp+0B70h+var_B18]
 * 0000000140B03C3A: mov     eax, 40h ; '@'
 * 0000000140B03C3F: add     [rsi+828h], eax
 * 0000000140B03C45: mov     r11, [rsp+0B70h+var_B08]
 * 0000000140B03C4A: mov     r12, [rbp+0A70h+var_AB8]
 * 0000000140B03C4E: lea     edx, [rax-3Fh]
 * 0000000140B03C51: lea     ebx, [rax-34h]
 * 0000000140B03C54: add     r15, rdx
 * 0000000140B03C57: add     r11, rbx
 * 0000000140B03C5A: add     rdi, rbx
 * 0000000140B03C5D: mov     [rsp+0B70h+var_B18], r15
 * 0000000140B03C62: mov     [rsp+0B70h+var_B08], r11
 * 0000000140B03C67: cmp     r11, [rbp+0A70h+var_AF0]
 * 0000000140B03C6B: jnb     short loc_140B03C7D
 * 0000000140B03C6D: mov     eax, [r12]
 * 0000000140B03C71: cmp     [rsi+828h], eax
 * 0000000140B03C77: jl      loc_140B039AD
 * 0000000140B03C7D: sub     rdi, [rbp+0A70h+var_A98]
 * 0000000140B03C81: mov     rax, 2AAAAAAAAAAAAAABh
 * 0000000140B03C8B: mov     r10d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B03C92: mov     r9, [rbp+0A70h+var_AC8]
 * 0000000140B03C96: imul    rdi
 * 0000000140B03C99: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B03CA0: sar     rdx, 1
 * 0000000140B03CA3: mov     rax, rdx
 * 0000000140B03CA6: shr     rax, 3Fh
 * 0000000140B03CAA: add     rdx, rax
 * 0000000140B03CAD: mov     r8d, edx
 * 0000000140B03CB0: mov     [rsi+824h], edx
 * 0000000140B03CB6: mov     rdx, [rbp+0A70h+var_AE8]
 * 0000000140B03CBA: cmp     r8d, r10d
 * 0000000140B03CBD: jb      loc_140AFC39B
 * 0000000140B03CC3: mov     eax, [rsi+82Ch]
 * 0000000140B03CC9: cmp     [rsi+828h], eax
 * 0000000140B03CCF: jge     loc_140AFC39B
 * 0000000140B03CD5: test    r9d, r9d
 * 0000000140B03CD8: jz      short loc_140B03CE6
 * 0000000140B03CDA: sub     r8d, r9d
 * 0000000140B03CDD: inc     r8d
 * 0000000140B03CE0: lea     rcx, [r8+r8*2]
 * 0000000140B03CE4: jmp     short loc_140B03CED
 * 0000000140B03CE6: mov     eax, r8d
 * 0000000140B03CE9: lea     rcx, [rax+rax*2]
 * 0000000140B03CED: lea     rcx, [rdx+rcx*8]
 * 0000000140B03CF1: mov     ebx, 0Ch
 * 0000000140B03CF6: mov     [rsp+0B70h+var_B08], rcx
 * 0000000140B03CFB: mov     rdi, [rsp+0B70h+var_B20]
 * 0000000140B03D00: lea     rdx, [rcx+8]
 * 0000000140B03D04: mov     eax, 2
 * 0000000140B03D09: mov     [rbp+0A70h+arg_8], rdx
 * 0000000140B03D10: mov     r12d, eax
 * 0000000140B03D13: mov     [rsp+0B70h+var_B18], rax
 * 0000000140B03D18: lea     eax, [r12-1]
 * 0000000140B03D1D: cmp     [rdx], r14d
 * 0000000140B03D20: jl      loc_140B03FCB
 * 0000000140B03D26: mov     eax, [rdx-8]
 * 0000000140B03D29: mov     r8d, [rdx-4]
 * 0000000140B03D2D: mov     r15d, eax
 * 0000000140B03D30: add     r15, [rdi+18h]
 * 0000000140B03D34: sub     r8d, eax
 * 0000000140B03D37: add     [rsi+828h], r8d
 * 0000000140B03D3E: mov     r9, r15
 * 0000000140B03D41: mov     r10d, [rsi+814h]
 * 0000000140B03D48: mov     rax, r15
 * 0000000140B03D4B: mov     r14, [rsi+818h]
 * 0000000140B03D52: lea     rcx, [r15+r8]
 * 0000000140B03D56: mov     r13d, r8d
 * 0000000140B03D59: mov     [rbp+0A70h+var_AE8], r15
 * 0000000140B03D5D: mov     [rsp+0B70h+var_AF8], r13
 * 0000000140B03D62: cmp     r15, rcx
 * 0000000140B03D65: jnb     short loc_140B03D78
 * 0000000140B03D67: mov     r11d, 40h ; '@'
 * 0000000140B03D6D: prefetchnta byte ptr [rax]
 * 0000000140B03D70: add     rax, r11
 * 0000000140B03D73: cmp     rax, rcx
 * 0000000140B03D76: jb      short loc_140B03D6D
 * 0000000140B03D78: mov     r11d, r8d
 * 0000000140B03D7B: mov     rbx, r14
 * 0000000140B03D7E: shr     r11d, 7
 * 0000000140B03D82: test    r11d, r11d
 * 0000000140B03D85: jz      short loc_140B03E03
 * 0000000140B03D87: mov     esi, 0FFFFFFFFh
 * 0000000140B03D8C: mov     r12d, 1
 * 0000000140B03D92: mov     r13, 7010008004002001h
 * 0000000140B03D9C: mov     eax, 8
 * 0000000140B03DA1: xor     rbx, [r9]
 * 0000000140B03DA4: mov     ecx, r10d
 * 0000000140B03DA7: rol     rbx, cl
 * 0000000140B03DAA: xor     rbx, [r9+8]
 * 0000000140B03DAE: add     r9, 10h
 * 0000000140B03DB2: rol     rbx, cl
 * 0000000140B03DB5: sub     rax, r12
 * 0000000140B03DB8: jnz     short loc_140B03DA1
 * 0000000140B03DBA: mov     rcx, r9
 * 0000000140B03DBD: sub     rcx, r15
 * 0000000140B03DC0: xor     rcx, r14
 * 0000000140B03DC3: mov     rax, rcx
 * 0000000140B03DC6: rol     rax, 11h
 * 0000000140B03DCA: xor     rcx, rax
 * 0000000140B03DCD: mov     rax, r13
 * 0000000140B03DD0: mul     rcx
 * 0000000140B03DD3: xor     r10d, edx
 * 0000000140B03DD6: mov     [rbp+0A70h+var_5B0], rdx
 * 0000000140B03DDD: xor     r10d, eax
 * 0000000140B03DE0: and     r10d, 3Fh
 * 0000000140B03DE4: cmovz   r10d, r12d
 * 0000000140B03DE8: add     r11d, esi
 * 0000000140B03DEB: jnz     short loc_140B03D9C
 * 0000000140B03DED: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B03DF2: mov     r13, [rsp+0B70h+var_AF8]
 * 0000000140B03DF7: mov     rdx, [rbp+0A70h+arg_8]
 * 0000000140B03DFE: mov     r12, [rsp+0B70h+var_B18]
 * 0000000140B03E03: and     r8d, 7Fh
 * 0000000140B03E07: mov     r11d, 1
 * 0000000140B03E0D: cmp     r8d, 8
 * 0000000140B03E11: jb      short loc_140B03E30
 * 0000000140B03E13: mov     eax, r8d
 * 0000000140B03E16: shr     rax, 3
 * 0000000140B03E1A: xor     rbx, [r9]
 * 0000000140B03E1D: mov     ecx, r10d
 * 0000000140B03E20: rol     rbx, cl
 * 0000000140B03E23: add     r9, 8
 * 0000000140B03E27: add     r8d, 0FFFFFFF8h
 * 0000000140B03E2B: sub     rax, r11
 * 0000000140B03E2E: jnz     short loc_140B03E1A
 * 0000000140B03E30: xor     r14d, r14d
 * 0000000140B03E33: test    r8d, r8d
 * 0000000140B03E36: jz      short loc_140B03E57
 * 0000000140B03E38: mov     esi, 0FFFFFFFFh
 * 0000000140B03E3D: movzx   eax, byte ptr [r9]
 * 0000000140B03E41: mov     ecx, r10d
 * 0000000140B03E44: xor     rbx, rax
 * 0000000140B03E47: add     r9, r11
 * 0000000140B03E4A: rol     rbx, cl
 * 0000000140B03E4D: add     r8d, esi
 * 0000000140B03E50: jnz     short loc_140B03E3D
 * 0000000140B03E52: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B03E57: mov     rax, rbx
 * 0000000140B03E5A: jmp     short loc_140B03E5E
 * 0000000140B03E5C: xor     ebx, eax
 * 0000000140B03E5E: shr     rax, 1Fh
 * 0000000140B03E62: test    rax, rax
 * 0000000140B03E65: jnz     short loc_140B03E5C
 * 0000000140B03E67: mov     ecx, [rdx]
 * 0000000140B03E69: btr     ebx, 1Fh
 * 0000000140B03E6D: mov     eax, ecx
 * 0000000140B03E6F: btr     eax, 1Fh
 * 0000000140B03E73: cmp     ebx, eax
 * 0000000140B03E75: jz      loc_140B03FC3
 * 0000000140B03E7B: test    r13, r13
 * 0000000140B03E7E: jz      loc_140B03F46
 * 0000000140B03E84: mov     eax, [rsi+994h]
 * 0000000140B03E8A: mov     r8d, 40h ; '@'
 * 0000000140B03E90: test    r8b, al
 * 0000000140B03E93: jz      loc_140B03F46
 * 0000000140B03E99: mov     r12, cr8
 * 0000000140B03E9D: lea     eax, [r8-3Eh]
 * 0000000140B03EA1: mov     cr8, rax
 * 0000000140B03EA5: lea     rax, [r13-1]
 * 0000000140B03EA9: mov     r14, r15
 * 0000000140B03EAC: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140B03EB3: add     rax, r15
 * 0000000140B03EB6: or      rax, 0FFFh
 * 0000000140B03EBC: mov     [rsp+0B70h+var_AF8], rax
 * 0000000140B03EC1: lea     r13, [r14-1]
 * 0000000140B03EC5: movzx   r15d, r12b
 * 0000000140B03EC9: mov     rax, [rsi+468h]
 * 0000000140B03ED0: xor     edx, edx
 * 0000000140B03ED2: mov     rcx, r14
 * 0000000140B03ED5: call    KeGuardDispatchICall
 * 0000000140B03EDA: cmp     eax, 0C000022Dh
 * 0000000140B03EDF: jnz     short loc_140B03F05
 * 0000000140B03EE1: mov     eax, 1
 * 0000000140B03EE6: cmp     r12b, al
 * 0000000140B03EE9: ja      short loc_140B03F09
 * 0000000140B03EEB: movzx   r15d, r12b
 * 0000000140B03EEF: mov     cr8, r15
 * 0000000140B03EF3: mov     al, [r14]
 * 0000000140B03EF6: mov     rax, cr8
 * 0000000140B03EFA: mov     eax, 2
 * 0000000140B03EFF: mov     cr8, rax
 * 0000000140B03F03: jmp     short loc_140B03EC9
 * 0000000140B03F05: test    eax, eax
 * 0000000140B03F07: js      short loc_140B03F2D
 * 0000000140B03F09: mov     r8d, 1000h
 * 0000000140B03F0F: add     r14, r8
 * 0000000140B03F12: add     r13, r8
 * 0000000140B03F15: cmp     r13, [rsp+0B70h+var_AF8]
 * 0000000140B03F1A: jnz     short loc_140B03EC5
 * 0000000140B03F1C: mov     cr8, r15
 * 0000000140B03F20: mov     r12, [rsp+0B70h+var_B18]
 * 0000000140B03F25: xor     r14d, r14d
 * 0000000140B03F28: jmp     loc_140B03FBC
 * 0000000140B03F2D: mov     cr8, r15
 * 0000000140B03F31: mov     rdx, [rbp+0A70h+arg_8]
 * 0000000140B03F38: xor     r14d, r14d
 * 0000000140B03F3B: mov     r15, [rbp+0A70h+var_AE8]
 * 0000000140B03F3F: mov     r12, [rsp+0B70h+var_B18]
 * 0000000140B03F44: mov     ecx, [rdx]
 * 0000000140B03F46: mov     eax, ecx
 * 0000000140B03F48: btr     eax, 1Fh
 * 0000000140B03F4C: cmp     [rsi+8F8h], r14d
 * 0000000140B03F53: jnz     short loc_140B03FC3
 * 0000000140B03F55: mov     ecx, ebx
 * 0000000140B03F57: xor     rcx, rax
 * 0000000140B03F5A: mov     rax, [rsi+588h]
 * 0000000140B03F61: mov     [rax+18h], rcx
 * 0000000140B03F65: cmp     [rsi+8F8h], r14d
 * 0000000140B03F6C: jnz     short loc_140B03FC3
 * 0000000140B03F6E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B03F78: xor     edx, edx
 * 0000000140B03F7A: add     rax, rsi
 * 0000000140B03F7D: mov     rcx, rsi
 * 0000000140B03F80: mov     [rsi+900h], rax
 * 0000000140B03F87: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B03F91: add     rax, rdi
 * 0000000140B03F94: mov     [rsi+908h], rax
 * 0000000140B03F9B: movsxd  rax, dword ptr [rdi]
 * 0000000140B03F9E: mov     [rsi+910h], rax
 * 0000000140B03FA5: mov     eax, 1
 * 0000000140B03FAA: mov     [rsi+918h], r15
 * 0000000140B03FB1: mov     [rsi+8F8h], eax
 * 0000000140B03FB7: call    $$ba
 * 0000000140B03FBC: mov     rdx, [rbp+0A70h+arg_8]
 * 0000000140B03FC3: mov     eax, 1
 * 0000000140B03FC8: lea     ebx, [rax+0Bh]
 * 0000000140B03FCB: add     rdx, rbx
 * 0000000140B03FCE: sub     r12, rax
 * 0000000140B03FD1: mov     [rbp+0A70h+arg_8], rdx
 * 0000000140B03FD8: mov     [rsp+0B70h+var_B18], r12
 * 0000000140B03FDD: jnz     loc_140B03D1D
 * 0000000140B03FE3: mov     rcx, [rsp+0B70h+var_B08]
 * 0000000140B03FE8: mov     r12d, 1
 * 0000000140B03FEE: add     [rsi+824h], r12d
 * 0000000140B03FF5: add     rcx, 18h
 * 0000000140B03FF9: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B04000: mov     [rsp+0B70h+var_B08], rcx
 * 0000000140B04005: cmp     rcx, [rbp+0A70h+var_A70]
 * 0000000140B04009: jz      short loc_140B04022
 * 0000000140B0400B: mov     eax, [rsi+82Ch]
 * 0000000140B04011: cmp     [rsi+828h], eax
 * 0000000140B04017: jl      loc_140B03CFB
 * 0000000140B0401D: jmp     loc_140AFC148
 * 0000000140B04022: mov     [rsi+824h], r14d
 * 0000000140B04029: jmp     loc_140AFC148
 * 0000000140B0402E: mov     ecx, r10d
 * 0000000140B04031: sub     ecx, 29h ; ')'
 * 0000000140B04034: jz      loc_140B01DB1
 * 0000000140B0403A: sub     ecx, 1
 * 0000000140B0403D: jz      loc_140B01DB1
 * 0000000140B04043: sub     ecx, 1
 * 0000000140B04046: jz      loc_140B06463
 * 0000000140B0404C: sub     ecx, 1
 * 0000000140B0404F: jz      loc_140B05893
 * 0000000140B04055: mov     r14d, 2
 * 0000000140B0405B: sub     ecx, r14d
 * 0000000140B0405E: jz      loc_140B057A2
 * 0000000140B04064: sub     ecx, 1
 * 0000000140B04067: jz      loc_140B055B9
 * 0000000140B0406D: sub     ecx, 1
 * 0000000140B04070: jz      loc_140B04F50
 * 0000000140B04076: cmp     ecx, 1
 * 0000000140B04079: jnz     short loc_140B040E7
 * 0000000140B0407B: mov     rax, [rsi+470h]
 * 0000000140B04082: xor     ecx, ecx
 * 0000000140B04084: call    KeGuardDispatchICall
 * 0000000140B04089: xor     edx, edx
 * 0000000140B0408B: test    eax, eax
 * 0000000140B0408D: jns     loc_140AFC39B
 * 0000000140B04093: lea     r12d, [r14-1]
 * 0000000140B04097: movsxd  rcx, eax
 * 0000000140B0409A: cmp     [rsi+8F8h], edx
 * 0000000140B040A0: jnz     loc_140AFC148
 * 0000000140B040A6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B040B0: add     rax, rsi
 * 0000000140B040B3: mov     [rsi+900h], rax
 * 0000000140B040BA: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B040C4: add     rax, r13
 * 0000000140B040C7: mov     [rsi+908h], rax
 * 0000000140B040CE: mov     [rsi+910h], rcx
 * 0000000140B040D5: mov     [rsi+918h], rdx
 * 0000000140B040DC: jmp     loc_140AFC423
 * 0000000140B040E1: mov     r14d, 2
 * 0000000140B040E7: sub     r10d, r14d
 * 0000000140B040EA: jz      loc_140B048DD
 * 0000000140B040F0: sub     r10d, 1
 * 0000000140B040F4: jz      loc_140B044BB
 * 0000000140B040FA: cmp     r10d, 14h
 * 0000000140B040FE: jz      short loc_140B0414A
 * 0000000140B04100: xor     ecx, ecx
 * 0000000140B04102: lea     r12d, [rcx+1]
 * 0000000140B04106: cmp     [rsi+8F8h], ecx
 * 0000000140B0410C: jnz     loc_140AFC148
 * 0000000140B04112: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0411C: add     rax, rsi
 * 0000000140B0411F: mov     [rsi+900h], rax
 * 0000000140B04126: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B04130: add     rax, r13
 * 0000000140B04133: mov     [rsi+908h], rax
 * 0000000140B0413A: mov     qword ptr [rsi+910h], 101h
 * 0000000140B04145: jmp     loc_140AFC41A
 * 0000000140B0414A: mov     edx, [r13+28h]
 * 0000000140B0414E: lea     rcx, [rbp+0A70h+var_2A8]
 * 0000000140B04155: mov     rax, [rsi+1A0h]
 * 0000000140B0415C: call    KeGuardDispatchICall
 * 0000000140B04161: mov     rax, [rsi+1D0h]
 * 0000000140B04168: lea     rdx, [rbp+0A70h+var_298]
 * 0000000140B0416F: lea     rcx, [rbp+0A70h+var_2A8]
 * 0000000140B04176: call    KeGuardDispatchICall
 * 0000000140B0417B: mov     rax, [rsi+0A10h]
 * 0000000140B04182: xor     r15d, r15d
 * 0000000140B04185: test    rax, rax
 * 0000000140B04188: jz      short loc_140B041A5
 * 0000000140B0418A: mov     ebx, [rax+320h]
 * 0000000140B04190: mov     rax, [rsi+0A10h]
 * 0000000140B04197: test    rax, rax
 * 0000000140B0419A: jz      short loc_140B041B6
 * 0000000140B0419C: mov     r14d, [rax+340h]
 * 0000000140B041A3: jmp     short loc_140B041C7
 * 0000000140B041A5: mov     ecx, 832h
 * 0000000140B041AA: rdmsr
 * 0000000140B041AC: shl     rdx, 20h
 * 0000000140B041B0: or      rax, rdx
 * 0000000140B041B3: mov     rbx, rax
 * 0000000140B041B6: mov     ecx, 834h
 * 0000000140B041BB: rdmsr
 * 0000000140B041BD: shl     rdx, 20h
 * 0000000140B041C1: or      rax, rdx
 * 0000000140B041C4: mov     r14, rax
 * 0000000140B041C7: mov     rax, [rsi+198h]
 * 0000000140B041CE: lea     rcx, [rbp+0A70h+var_298]
 * 0000000140B041D5: call    KeGuardDispatchICall
 * 0000000140B041DA: mov     ecx, 10h
 * 0000000140B041DF: test    [rsi+87Bh], cl
 * 0000000140B041E5: jz      loc_140B04330
 * 0000000140B041EB: cli
 * 0000000140B041EC: mov     rdx, [rsi+8E0h]
 * 0000000140B041F3: mov     r8d, 26h ; '&'
 * 0000000140B041F9: mov     ecx, 130h
 * 0000000140B041FE: mov     rax, rdx
 * 0000000140B04201: lea     r12d, [r8-25h]
 * 0000000140B04205: mov     [rax], r15
 * 0000000140B04208: add     ecx, 0FFFFFFF8h
 * 0000000140B0420B: add     rax, 8
 * 0000000140B0420F: sub     r8, r12
 * 0000000140B04212: jnz     short loc_140B04205
 * 0000000140B04214: test    ecx, ecx
 * 0000000140B04216: jz      short loc_140B04229
 * 0000000140B04218: mov     r8d, 0FFFFFFFFh
 * 0000000140B0421E: mov     [rax], r15b
 * 0000000140B04221: add     rax, r12
 * 0000000140B04224: add     ecx, r8d
 * 0000000140B04227: jnz     short loc_140B0421E
 * 0000000140B04229: movups  xmm0, xmmword ptr [rsi+848h]
 * 0000000140B04230: mov     eax, 12Fh
 * 0000000140B04235: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140B0423A: movups  xmm1, xmmword ptr [rsi+858h]
 * 0000000140B04241: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140B04246: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140B0424D: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140B04255: mov     word ptr [rbp+0A70h+var_850], ax
 * 0000000140B0425C: lea     rax, [rsi+878h]
 * 0000000140B04263: mov     [rbp+222h], rdx
 * 0000000140B0426A: mov     rcx, rax
 * 0000000140B0426D: mov     [rdx+10h], ax
 * 0000000140B04271: shr     rcx, 10h
 * 0000000140B04275: mov     [rbp+0A70h+var_5A8], rax
 * 0000000140B0427C: shr     rax, 20h
 * 0000000140B04280: mov     [rdx+16h], cx
 * 0000000140B04284: mov     [rdx+18h], eax
 * 0000000140B04287: sidt    fword ptr [rbp+0A70h+var_720]
 * 0000000140B0428E: lidt    fword ptr [rbp+0A70h+var_850]
 * 0000000140B04295: test    dword ptr [rsi+994h], 20000h
 * 0000000140B0429F: jnz     short loc_140B042E3
 * 0000000140B042A1: mov     rdx, gs:20h
 * 0000000140B042AA: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140B042B4: mov     rax, [rsi+4B8h]
 * 0000000140B042BB: add     rcx, rsi
 * 0000000140B042BE: mov     [rax], rcx
 * 0000000140B042C1: mov     rax, [rsi+4C0h]
 * 0000000140B042C8: mov     [rax], rdx
 * 0000000140B042CB: mov     rax, [rsi+4C8h]
 * 0000000140B042D2: mov     [rax], r15
 * 0000000140B042D5: mov     rax, [rsi+4D0h]
 * 0000000140B042DC: mov     qword ptr [rax], 115h
 * 0000000140B042E3: call    KiErrata361Present
 * 0000000140B042E8: test    dword ptr [rsi+994h], 20000h
 * 0000000140B042F2: jnz     short loc_140B04326
 * 0000000140B042F4: mov     rax, [rsi+4B8h]
 * 0000000140B042FB: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140B04305: mov     [rax], rcx
 * 0000000140B04308: mov     rax, [rsi+4C0h]
 * 0000000140B0430F: mov     [rax], r15
 * 0000000140B04312: mov     rax, [rsi+4C8h]
 * 0000000140B04319: mov     [rax], r15
 * 0000000140B0431C: mov     rax, [rsi+4D0h]
 * 0000000140B04323: mov     [rax], r15
 * 0000000140B04326: lidt    fword ptr [rbp+0A70h+var_720]
 * 0000000140B0432D: sti
 * 0000000140B0432E: jmp     short loc_140B04336
 * 0000000140B04330: mov     r12d, 1
 * 0000000140B04336: mov     eax, [r13+1Ch]
 * 0000000140B0433A: mov     r8d, [r13+18h]
 * 0000000140B0433E: and     eax, ebx
 * 0000000140B04340: cmp     eax, r8d
 * 0000000140B04343: jnz     short loc_140B04370
 * 0000000140B04345: bt      ebx, 10h
 * 0000000140B04349: jb      loc_140B043FB
 * 0000000140B0434F: movzx   ecx, bl
 * 0000000140B04352: sub     ecx, 0D1h
 * 0000000140B04358: jz      loc_140B043FB
 * 0000000140B0435E: sub     ecx, 2Ch ; ','
 * 0000000140B04361: jz      loc_140B043FB
 * 0000000140B04367: cmp     ecx, 1
 * 0000000140B0436A: jz      loc_140B043FB
 * 0000000140B04370: mov     edx, [r13+28h]
 * 0000000140B04374: mov     rax, 32000000000h
 * 0000000140B0437E: shl     rdx, 30h
 * 0000000140B04382: or      rdx, r8
 * 0000000140B04385: or      rdx, rax
 * 0000000140B04388: cmp     [rsi+8F8h], r15d
 * 0000000140B0438F: jnz     short loc_140B043FB
 * 0000000140B04391: mov     eax, ebx
 * 0000000140B04393: mov     rcx, r8
 * 0000000140B04396: xor     rcx, rax
 * 0000000140B04399: mov     rbx, 0B3B74BDEE4453415h
 * 0000000140B043A3: mov     rax, [rsi+588h]
 * 0000000140B043AA: mov     [rax+18h], rcx
 * 0000000140B043AE: cmp     [rsi+8F8h], r15d
 * 0000000140B043B5: jnz     short loc_140B04405
 * 0000000140B043B7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B043C1: mov     rcx, rsi
 * 0000000140B043C4: add     rax, rsi
 * 0000000140B043C7: mov     [rsi+900h], rax
 * 0000000140B043CE: lea     rax, [rbx+r13]
 * 0000000140B043D2: mov     [rsi+908h], rax
 * 0000000140B043D9: movsxd  rax, dword ptr [r13+0]
 * 0000000140B043DD: mov     [rsi+910h], rax
 * 0000000140B043E4: mov     [rsi+918h], rdx
 * 0000000140B043EB: xor     edx, edx
 * 0000000140B043ED: mov     [rsi+8F8h], r12d
 * 0000000140B043F4: call    $$ba
 * 0000000140B043F9: jmp     short loc_140B04405
 * 0000000140B043FB: mov     rbx, 0B3B74BDEE4453415h
 * 0000000140B04405: mov     eax, [r13+24h]
 * 0000000140B04409: mov     r8d, [r13+20h]
 * 0000000140B0440D: and     eax, r14d
 * 0000000140B04410: cmp     eax, r8d
 * 0000000140B04413: jnz     short loc_140B04442
 * 0000000140B04415: bt      r14d, 10h
 * 0000000140B0441A: jb      loc_140B048C9
 * 0000000140B04420: movzx   ecx, r14b
 * 0000000140B04424: sub     ecx, 0D1h
 * 0000000140B0442A: jz      loc_140B048C9
 * 0000000140B04430: sub     ecx, 2Ch ; ','
 * 0000000140B04433: jz      loc_140B048C9
 * 0000000140B04439: cmp     ecx, 1
 * 0000000140B0443C: jz      loc_140B048C9
 * 0000000140B04442: mov     edx, [r13+28h]
 * 0000000140B04446: mov     rax, 34000000000h
 * 0000000140B04450: shl     rdx, 30h
 * 0000000140B04454: or      rdx, r8
 * 0000000140B04457: or      rdx, rax
 * 0000000140B0445A: cmp     [rsi+8F8h], r15d
 * 0000000140B04461: jnz     loc_140B048C9
 * 0000000140B04467: mov     rax, [rsi+588h]
 * 0000000140B0446E: mov     ecx, r14d
 * 0000000140B04471: xor     rcx, r8
 * 0000000140B04474: mov     [rax+18h], rcx
 * 0000000140B04478: cmp     [rsi+8F8h], r15d
 * 0000000140B0447F: jnz     loc_140B048C9
 * 0000000140B04485: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0448F: add     rax, rsi
 * 0000000140B04492: mov     [rsi+900h], rax
 * 0000000140B04499: lea     rax, [rbx+r13]
 * 0000000140B0449D: mov     [rsi+908h], rax
 * 0000000140B044A4: movsxd  rax, dword ptr [r13+0]
 * 0000000140B044A8: mov     [rsi+910h], rax
 * 0000000140B044AF: mov     [rsi+918h], rdx
 * 0000000140B044B6: jmp     loc_140B048B0
 * 0000000140B044BB: mov     edx, [r13+28h]
 * 0000000140B044BF: lea     rcx, [rbp+0A70h+var_288]
 * 0000000140B044C6: mov     rax, [rsi+1A0h]
 * 0000000140B044CD: call    KeGuardDispatchICall
 * 0000000140B044D2: mov     rax, [rsi+1D0h]
 * 0000000140B044D9: lea     rdx, [rbp+0A70h+var_278]
 * 0000000140B044E0: lea     rcx, [rbp+0A70h+var_288]
 * 0000000140B044E7: call    KeGuardDispatchICall
 * 0000000140B044EC: lea     rdx, [rbp+0A70h+var_190]
 * 0000000140B044F3: lea     rcx, [rbp+0A70h+var_8E0]
 * 0000000140B044FA: call    KiGetGdtIdt
 * 0000000140B044FF: mov     r15, [rbp+0A70h+var_8DE]
 * 0000000140B04506: mov     ecx, 2
 * 0000000140B0450B: mov     r14d, [r13+10h]
 * 0000000140B0450F: test    [rsi+87Bh], cl
 * 0000000140B04515: jz      loc_140B04647
 * 0000000140B0451B: mov     rdx, [rsi+8E0h]
 * 0000000140B04522: mov     r8d, 26h ; '&'
 * 0000000140B04528: mov     ecx, 130h
 * 0000000140B0452D: mov     rax, rdx
 * 0000000140B04530: xor     r12d, r12d
 * 0000000140B04533: lea     r9d, [r8-25h]
 * 0000000140B04537: mov     [rax], r12
 * 0000000140B0453A: add     ecx, 0FFFFFFF8h
 * 0000000140B0453D: add     rax, 8
 * 0000000140B04541: sub     r8, r9
 * 0000000140B04544: jnz     short loc_140B04537
 * 0000000140B04546: test    ecx, ecx
 * 0000000140B04548: jz      short loc_140B0455B
 * 0000000140B0454A: mov     r8d, 0FFFFFFFFh
 * 0000000140B04550: mov     [rax], r12b
 * 0000000140B04553: add     rax, r9
 * 0000000140B04556: add     ecx, r8d
 * 0000000140B04559: jnz     short loc_140B04550
 * 0000000140B0455B: movups  xmm0, xmmword ptr [rsi+848h]
 * 0000000140B04562: mov     eax, 12Fh
 * 0000000140B04567: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140B0456C: movups  xmm1, xmmword ptr [rsi+858h]
 * 0000000140B04573: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140B04578: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140B0457F: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140B04587: mov     word ptr [rbp+0A70h+var_840], ax
 * 0000000140B0458E: lea     rax, [rsi+878h]
 * 0000000140B04595: mov     [rbp+232h], rdx
 * 0000000140B0459C: mov     rcx, rax
 * 0000000140B0459F: mov     [rdx+10h], ax
 * 0000000140B045A3: shr     rcx, 10h
 * 0000000140B045A7: mov     [rbp+0A70h+var_5A0], rax
 * 0000000140B045AE: shr     rax, 20h
 * 0000000140B045B2: mov     [rdx+16h], cx
 * 0000000140B045B6: mov     [rdx+18h], eax
 * 0000000140B045B9: cli
 * 0000000140B045BA: sidt    fword ptr [rbp+0A70h+var_710]
 * 0000000140B045C1: lidt    fword ptr [rbp+0A70h+var_840]
 * 0000000140B045C8: mov     dr7, r12
 * 0000000140B045CC: lea     rax, [rsi+87Eh]
 * 0000000140B045D3: mov     [rdx+10h], ax
 * 0000000140B045D7: mov     rcx, rax
 * 0000000140B045DA: shr     rcx, 10h
 * 0000000140B045DE: shr     rax, 20h
 * 0000000140B045E2: mov     [rdx+16h], cx
 * 0000000140B045E6: mov     [rdx+18h], eax
 * 0000000140B045E9: test    byte ptr [rsi+87Bh], 20h
 * 0000000140B045F0: jnz     short loc_140B04600
 * 0000000140B045F2: call    KiErrata704Present
 * 0000000140B045F7: mov     [rsi+8E8h], rax
 * 0000000140B045FE: jmp     short loc_140B04631
 * 0000000140B04600: lea     rbx, [rsi+8AAh]
 * 0000000140B04607: call    KiGetSs
 * 0000000140B0460C: mov     [rbx], ax
 * 0000000140B0460F: mov     dr0, rbx
 * 0000000140B04612: mov     eax, 70001h
 * 0000000140B04617: mov     dr7, rax
 * 0000000140B0461A: mov     rcx, rbx
 * 0000000140B0461D: call    KiErrataSkx55Present
 * 0000000140B04622: mov     [rsi+8E8h], rax
 * 0000000140B04629: mov     dr7, r12
 * 0000000140B0462D: mov     dr0, r12
 * 0000000140B04631: mov     eax, gs:1A4h
 * 0000000140B04639: mov     [rsi+8F0h], eax
 * 0000000140B0463F: lidt    fword ptr [rbp+0A70h+var_710]
 * 0000000140B04646: sti
 * 0000000140B04647: call    KiGetLdtr
 * 0000000140B0464C: movzx   r12d, ax
 * 0000000140B04650: call    KiGetTr
 * 0000000140B04655: add     [rsi+828h], r14d
 * 0000000140B0465C: lea     rcx, [r15+r14]
 * 0000000140B04660: mov     r10d, [rsi+814h]
 * 0000000140B04667: movzx   r13d, ax
 * 0000000140B0466B: mov     r11, [rsi+818h]
 * 0000000140B04672: mov     r8, r15
 * 0000000140B04675: mov     word ptr [rbp+0A70h+arg_8], ax
 * 0000000140B0467C: mov     rax, r15
 * 0000000140B0467F: cmp     r15, rcx
 * 0000000140B04682: jnb     short loc_140B04694
 * 0000000140B04684: mov     edx, 40h ; '@'
 * 0000000140B04689: prefetchnta byte ptr [rax]
 * 0000000140B0468C: add     rax, rdx
 * 0000000140B0468F: cmp     rax, rcx
 * 0000000140B04692: jb      short loc_140B04689
 * 0000000140B04694: mov     r9d, r14d
 * 0000000140B04697: mov     rbx, r11
 * 0000000140B0469A: shr     r9d, 7
 * 0000000140B0469E: mov     edx, 1
 * 0000000140B046A3: test    r9d, r9d
 * 0000000140B046A6: jz      short loc_140B04721
 * 0000000140B046A8: mov     edi, 0FFFFFFFFh
 * 0000000140B046AD: mov     r13, 7010008004002001h
 * 0000000140B046B7: mov     eax, 8
 * 0000000140B046BC: xor     rbx, [r8]
 * 0000000140B046BF: mov     ecx, r10d
 * 0000000140B046C2: rol     rbx, cl
 * 0000000140B046C5: xor     rbx, [r8+8]
 * 0000000140B046C9: add     r8, 10h
 * 0000000140B046CD: rol     rbx, cl
 * 0000000140B046D0: sub     rax, rdx
 * 0000000140B046D3: jnz     short loc_140B046BC
 * 0000000140B046D5: mov     rcx, r8
 * 0000000140B046D8: sub     rcx, r15
 * 0000000140B046DB: xor     rcx, r11
 * 0000000140B046DE: mov     rax, rcx
 * 0000000140B046E1: rol     rax, 11h
 * 0000000140B046E5: xor     rcx, rax
 * 0000000140B046E8: mov     rax, r13
 * 0000000140B046EB: mul     rcx
 * 0000000140B046EE: xor     r10d, edx
 * 0000000140B046F1: mov     [rbp+0A70h+var_598], rdx
 * 0000000140B046F8: xor     r10d, eax
 * 0000000140B046FB: mov     edx, 1
 * 0000000140B04700: and     r10d, 3Fh
 * 0000000140B04704: cmovz   r10d, edx
 * 0000000140B04708: add     r9d, edi
 * 0000000140B0470B: jnz     short loc_140B046B7
 * 0000000140B0470D: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B04712: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B04719: movzx   r13d, word ptr [rbp+0A70h+arg_8]
 * 0000000140B04721: and     r14d, 7Fh
 * 0000000140B04725: cmp     r14d, 8
 * 0000000140B04729: jb      short loc_140B04748
 * 0000000140B0472B: mov     eax, r14d
 * 0000000140B0472E: shr     rax, 3
 * 0000000140B04732: xor     rbx, [r8]
 * 0000000140B04735: mov     ecx, r10d
 * 0000000140B04738: rol     rbx, cl
 * 0000000140B0473B: add     r8, 8
 * 0000000140B0473F: add     r14d, 0FFFFFFF8h
 * 0000000140B04743: sub     rax, rdx
 * 0000000140B04746: jnz     short loc_140B04732
 * 0000000140B04748: test    r14d, r14d
 * 0000000140B0474B: jz      short loc_140B0476C
 * 0000000140B0474D: mov     esi, 0FFFFFFFFh
 * 0000000140B04752: movzx   eax, byte ptr [r8]
 * 0000000140B04756: mov     ecx, r10d
 * 0000000140B04759: xor     rbx, rax
 * 0000000140B0475C: add     r8, rdx
 * 0000000140B0475F: rol     rbx, cl
 * 0000000140B04762: add     r14d, esi
 * 0000000140B04765: jnz     short loc_140B04752
 * 0000000140B04767: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B0476C: mov     rax, rbx
 * 0000000140B0476F: jmp     short loc_140B04773
 * 0000000140B04771: xor     ebx, eax
 * 0000000140B04773: shr     rax, 1Fh
 * 0000000140B04777: test    rax, rax
 * 0000000140B0477A: jnz     short loc_140B04771
 * 0000000140B0477C: mov     rax, [rsi+198h]
 * 0000000140B04783: lea     rcx, [rbp+0A70h+var_278]
 * 0000000140B0478A: btr     ebx, 1Fh
 * 0000000140B0478E: call    KeGuardDispatchICall
 * 0000000140B04793: mov     r9, [rsp+0B70h+var_B20]
 * 0000000140B04798: mov     r11d, 40h ; '@'
 * 0000000140B0479E: cmp     ebx, [r9+14h]
 * 0000000140B047A2: jnz     short loc_140B047C2
 * 0000000140B047A4: movzx   eax, word ptr [r9+2Ch]
 * 0000000140B047A9: cmp     [rbp+0A70h+var_8E0], ax
 * 0000000140B047B0: jnz     short loc_140B047C2
 * 0000000140B047B2: test    r12w, r12w
 * 0000000140B047B6: jnz     short loc_140B047C2
 * 0000000140B047B8: cmp     r13w, r11w
 * 0000000140B047BC: jz      loc_140B048C3
 * 0000000140B047C2: test    dword ptr [rsi+990h], 40000000h
 * 0000000140B047CC: jz      short loc_140B0481C
 * 0000000140B047CE: mov     rcx, [rsi+0A80h]
 * 0000000140B047D5: mov     edx, 30h ; '0'
 * 0000000140B047DA: lea     r8d, [rdx-2Ah]
 * 0000000140B047DE: lea     r10d, [rdx-2Fh]
 * 0000000140B047E2: mov     rax, [r9]
 * 0000000140B047E5: add     edx, 0FFFFFFF8h
 * 0000000140B047E8: mov     [rcx], rax
 * 0000000140B047EB: add     r9, 8
 * 0000000140B047EF: add     rcx, 8
 * 0000000140B047F3: sub     r8, r10
 * 0000000140B047F6: jnz     short loc_140B047E2
 * 0000000140B047F8: test    edx, edx
 * 0000000140B047FA: jz      short loc_140B04815
 * 0000000140B047FC: mov     esi, 0FFFFFFFFh
 * 0000000140B04801: mov     al, [r9]
 * 0000000140B04804: add     r9, r10
 * 0000000140B04807: mov     [rcx], al
 * 0000000140B04809: add     rcx, r10
 * 0000000140B0480C: add     edx, esi
 * 0000000140B0480E: jnz     short loc_140B04801
 * 0000000140B04810: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B04815: mov     r9, [rsi+0A80h]
 * 0000000140B0481C: mov     rax, [rbp+0A70h+var_8DE]
 * 0000000140B04823: mov     edx, ebx
 * 0000000140B04825: mov     [r9+18h], rax
 * 0000000140B04829: mov     [r9+20h], rdx
 * 0000000140B0482D: test    r12w, r12w
 * 0000000140B04831: jz      short loc_140B04839
 * 0000000140B04833: mov     [r9+18h], r12
 * 0000000140B04837: jmp     short loc_140B04847
 * 0000000140B04839: cmp     r13w, r11w
 * 0000000140B0483D: jz      short loc_140B04847
 * 0000000140B0483F: movzx   eax, r13w
 * 0000000140B04843: mov     [r9+18h], rax
 * 0000000140B04847: mov     eax, [rsi+8F8h]
 * 0000000140B0484D: mov     ecx, [r9+14h]
 * 0000000140B04851: test    eax, eax
 * 0000000140B04853: jnz     short loc_140B04869
 * 0000000140B04855: mov     rax, [rsi+588h]
 * 0000000140B0485C: xor     rcx, rdx
 * 0000000140B0485F: mov     [rax+18h], rcx
 * 0000000140B04863: mov     eax, [rsi+8F8h]
 * 0000000140B04869: mov     rcx, [r9+8]
 * 0000000140B0486D: mov     r12d, 1
 * 0000000140B04873: test    eax, eax
 * 0000000140B04875: jnz     short loc_140B048C9
 * 0000000140B04877: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B04881: add     rax, rsi
 * 0000000140B04884: mov     [rsi+900h], rax
 * 0000000140B0488B: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B04895: add     rax, r9
 * 0000000140B04898: mov     [rsi+908h], rax
 * 0000000140B0489F: movsxd  rax, dword ptr [r9]
 * 0000000140B048A2: mov     [rsi+910h], rax
 * 0000000140B048A9: mov     [rsi+918h], rcx
 * 0000000140B048B0: xor     edx, edx
 * 0000000140B048B2: mov     [rsi+8F8h], r12d
 * 0000000140B048B9: mov     rcx, rsi
 * 0000000140B048BC: call    $$ba
 * 0000000140B048C1: jmp     short loc_140B048C9
 * 0000000140B048C3: mov     r12d, 1
 * 0000000140B048C9: mov     r14d, 8000h
 * 0000000140B048CF: add     [rsi+828h], r14d
 * 0000000140B048D6: xor     eax, eax
 * 0000000140B048D8: jmp     loc_140AFC150
 * 0000000140B048DD: mov     edx, [r13+28h]
 * 0000000140B048E1: lea     rcx, [rbp+0A70h+var_268]
 * 0000000140B048E8: xor     eax, eax
 * 0000000140B048EA: mov     [rbp+0A70h+var_ACC], eax
 * 0000000140B048ED: mov     rax, [rsi+1A0h]
 * 0000000140B048F4: call    KeGuardDispatchICall
 * 0000000140B048F9: mov     rax, [rsi+1D0h]
 * 0000000140B04900: lea     rdx, [rbp+0A70h+var_258]
 * 0000000140B04907: lea     rcx, [rbp+0A70h+var_268]
 * 0000000140B0490E: call    KeGuardDispatchICall
 * 0000000140B04913: lea     rdx, [rbp+0A70h+var_830]
 * 0000000140B0491A: lea     rcx, [rbp+0A70h+var_180]
 * 0000000140B04921: call    KiGetGdtIdt
 * 0000000140B04926: mov     rcx, [rbp+0A70h+var_82E]
 * 0000000140B0492D: xor     r13d, r13d
 * 0000000140B04930: mov     [rsp+0B70h+var_AF8], rcx
 * 0000000140B04935: mov     edi, r13d
 * 0000000140B04938: add     rcx, 4
 * 0000000140B0493C: mov     [rsp+0B70h+var_B18], rcx
 * 0000000140B04941: mov     rax, [rsi+8C8h]
 * 0000000140B04948: mov     r9, r13
 * 0000000140B0494B: mov     [rbp+0A70h+var_A00], rax
 * 0000000140B0494F: mov     r14, r13
 * 0000000140B04952: mov     r8, [rsi+8D0h]
 * 0000000140B04959: xor     eax, eax
 * 0000000140B0495B: mov     r12d, [rsi+8ACh]
 * 0000000140B04962: mov     [rbp+0A70h+var_AD8], r13
 * 0000000140B04966: mov     r13d, [rsi+8B0h]
 * 0000000140B0496D: mov     [rsp+0B70h+var_B08], r8
 * 0000000140B04972: mov     [rbp+0A70h+var_AE8], rax
 * 0000000140B04976: mov     r15, cr8
 * 0000000140B0497A: mov     eax, 0Fh
 * 0000000140B0497F: mov     cr8, rax
 * 0000000140B04983: movzx   eax, word ptr [rcx-4]
 * 0000000140B04987: movzx   r10d, word ptr [rcx]
 * 0000000140B0498B: mov     word ptr [rbp+0A70h+var_AA8], ax
 * 0000000140B0498F: movzx   eax, word ptr [rcx+2]
 * 0000000140B04993: mov     word ptr [rbp+0A70h+var_AA8+2], ax
 * 0000000140B04997: mov     eax, [rcx+4]
 * 0000000140B0499A: mov     rcx, [rsi+620h]
 * 0000000140B049A1: mov     dword ptr [rbp+0A70h+var_AA8+4], eax
 * 0000000140B049A4: mov     rbx, [rbp+0A70h+var_AA8]
 * 0000000140B049A8: mov     eax, edi
 * 0000000140B049AA: mov     word ptr [rbp+0A70h+arg_8], r10w
 * 0000000140B049B2: lea     rdx, [rcx+rax*8]
 * 0000000140B049B6: cmp     rbx, rdx
 * 0000000140B049B9: jnz     short loc_140B04A1F
 * 0000000140B049BB: mov     eax, 6000h
 * 0000000140B049C0: test    ax, r10w
 * 0000000140B049C4: jz      short loc_140B049D3
 * 0000000140B049C6: movzx   eax, r15b
 * 0000000140B049CA: mov     cr8, rax
 * 0000000140B049CE: jmp     loc_140B04D95
 * 0000000140B049D3: mov     rax, [rsi+478h]
 * 0000000140B049DA: mov     ecx, edi
 * 0000000140B049DC: call    KeGuardDispatchICall
 * 0000000140B049E1: mov     r14, [rax]
 * 0000000140B049E4: xor     eax, eax
 * 0000000140B049E6: test    r14, r14
 * 0000000140B049E9: jz      short loc_140B04A11
 * 0000000140B049EB: mov     r12, [r12+r14]
 * 0000000140B049EF: mov     [rbp+0A70h+var_AD8], r12
 * 0000000140B049F3: cmp     edi, 30h ; '0'
 * 0000000140B049F6: jnb     short loc_140B04A05
 * 0000000140B049F8: movzx   eax, r15b
 * 0000000140B049FC: mov     cr8, rax
 * 0000000140B04A00: jmp     loc_140B04D91
 * 0000000140B04A05: mov     r13, [r13+r14+0]
 * 0000000140B04A0A: mov     r8, [rsp+0B70h+var_B08]
 * 0000000140B04A0F: jmp     short loc_140B04A27
 * 0000000140B04A11: mov     r8, [rsp+0B70h+var_B08]
 * 0000000140B04A16: or      r14, 0FFFFFFFFFFFFFFFFh
 * 0000000140B04A1A: mov     r13, rax
 * 0000000140B04A1D: jmp     short loc_140B04A23
 * 0000000140B04A1F: mov     r13, [rbp+0A70h+var_AE8]
 * 0000000140B04A23: mov     r12, [rbp+0A70h+var_AD8]
 * 0000000140B04A27: movzx   eax, r15b
 * 0000000140B04A2B: mov     cr8, rax
 * 0000000140B04A2F: test    r14, r14
 * 0000000140B04A32: jnz     short loc_140B04A7A
 * 0000000140B04A34: mov     rdx, [rbp+0A70h+var_A00]
 * 0000000140B04A38: cmp     rbx, rdx
 * 0000000140B04A3B: jb      loc_140B04D91
 * 0000000140B04A41: cmp     rbx, r8
 * 0000000140B04A44: ja      loc_140B04D91
 * 0000000140B04A4A: mov     r8d, dword ptr [rbp+0A70h+var_AA8]
 * 0000000140B04A4E: mov     rcx, [rsi+8D8h]
 * 0000000140B04A55: sub     r8d, edx
 * 0000000140B04A58: mov     rax, [rsi+210h]
 * 0000000140B04A5F: call    KeGuardDispatchICall
 * 0000000140B04A64: test    rax, rax
 * 0000000140B04A67: jz      loc_140B04D91
 * 0000000140B04A6D: mov     eax, [rax+24h]
 * 0000000140B04A70: bt      eax, 19h
 * 0000000140B04A74: jb      loc_140B04D91
 * 0000000140B04A7A: mov     rax, [rsp+0B70h+var_B18]
 * 0000000140B04A7F: mov     ecx, 10h
 * 0000000140B04A84: cmp     [rax-2], cx
 * 0000000140B04A88: jnz     loc_140B04D91
 * 0000000140B04A8E: movzx   ecx, word ptr [rax]
 * 0000000140B04A91: mov     edx, 1F00h
 * 0000000140B04A96: movzx   eax, cx
 * 0000000140B04A99: and     ax, dx
 * 0000000140B04A9C: mov     edx, 0E00h
 * 0000000140B04AA1: cmp     ax, dx
 * 0000000140B04AA4: jnz     loc_140B04D91
 * 0000000140B04AAA: bt      cx, 0Fh
 * 0000000140B04AAF: jnb     loc_140B04D91
 * 0000000140B04AB5: mov     rax, [rsi+260h]
 * 0000000140B04ABC: lea     rdx, [rbp+0A70h+var_A00]
 * 0000000140B04AC0: xor     r8d, r8d
 * 0000000140B04AC3: mov     rcx, rbx
 * 0000000140B04AC6: call    KeGuardDispatchICall
 * 0000000140B04ACB: test    rax, rax
 * 0000000140B04ACE: jz      loc_140B04CFE
 * 0000000140B04AD4: mov     eax, [rax]
 * 0000000140B04AD6: mov     rcx, [rbp+0A70h+var_A00]
 * 0000000140B04ADA: add     rax, rcx
 * 0000000140B04ADD: cmp     rax, rbx
 * 0000000140B04AE0: jnz     loc_140B04CFE
 * 0000000140B04AE6: cmp     rcx, [rsi+8C8h]
 * 0000000140B04AED: jnz     loc_140B04CFE
 * 0000000140B04AF3: test    r14, r14
 * 0000000140B04AF6: jnz     loc_140B04D07
 * 0000000140B04AFC: xor     r13d, r13d
 * 0000000140B04AFF: mov     rcx, [rsp+0B70h+var_B18]
 * 0000000140B04B04: inc     edi
 * 0000000140B04B06: add     rcx, 10h
 * 0000000140B04B0A: mov     [rsp+0B70h+var_B18], rcx
 * 0000000140B04B0F: cmp     edi, 0FFh
 * 0000000140B04B15: jbe     loc_140B04941
 * 0000000140B04B1B: mov     ecx, 1
 * 0000000140B04B20: test    [rsi+87Bh], cl
 * 0000000140B04B26: jz      loc_140B04BF6
 * 0000000140B04B2C: cli
 * 0000000140B04B2D: mov     r14d, 0C0000082h
 * 0000000140B04B33: mov     ecx, r14d
 * 0000000140B04B36: rdmsr
 * 0000000140B04B38: shl     rdx, 20h
 * 0000000140B04B3C: or      rax, rdx
 * 0000000140B04B3F: lea     rdx, [rsi+87Ah]
 * 0000000140B04B46: mov     rbx, rax
 * 0000000140B04B49: mov     rax, rdx
 * 0000000140B04B4C: shr     rdx, 20h
 * 0000000140B04B50: wrmsr
 * 0000000140B04B52: bt      dword ptr [rsi+994h], 11h
 * 0000000140B04B5A: jb      short loc_140B04B9E
 * 0000000140B04B5C: mov     rdx, gs:20h
 * 0000000140B04B65: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140B04B6F: mov     rax, [rsi+4B8h]
 * 0000000140B04B76: add     rcx, rsi
 * 0000000140B04B79: mov     [rax], rcx
 * 0000000140B04B7C: mov     rax, [rsi+4C0h]
 * 0000000140B04B83: mov     [rax], rdx
 * 0000000140B04B86: mov     rax, [rsi+4C8h]
 * 0000000140B04B8D: mov     [rax], r14
 * 0000000140B04B90: mov     rax, [rsi+4D0h]
 * 0000000140B04B97: mov     qword ptr [rax], 112h
 * 0000000140B04B9E: lea     rax, [rsi+87Ch]
 * 0000000140B04BA5: call    KeGuardDispatchICall
 * 0000000140B04BAA: bt      dword ptr [rsi+994h], 11h
 * 0000000140B04BB2: jb      short loc_140B04BE6
 * 0000000140B04BB4: mov     rax, [rsi+4B8h]
 * 0000000140B04BBB: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140B04BC5: mov     [rax], rcx
 * 0000000140B04BC8: mov     rax, [rsi+4C0h]
 * 0000000140B04BCF: mov     [rax], r13
 * 0000000140B04BD2: mov     rax, [rsi+4C8h]
 * 0000000140B04BD9: mov     [rax], r13
 * 0000000140B04BDC: mov     rax, [rsi+4D0h]
 * 0000000140B04BE3: mov     [rax], r13
 * 0000000140B04BE6: mov     rdx, rbx
 * 0000000140B04BE9: mov     rax, rbx
 * 0000000140B04BEC: shr     rdx, 20h
 * 0000000140B04BF0: mov     ecx, r14d
 * 0000000140B04BF3: wrmsr
 * 0000000140B04BF5: sti
 * 0000000140B04BF6: mov     r15, [rsp+0B70h+var_AF8]
 * 0000000140B04BFB: add     dword ptr [rsi+828h], 350h
 * 0000000140B04C05: mov     r8, r15
 * 0000000140B04C08: mov     ebx, [rsi+828h]
 * 0000000140B04C0E: mov     rax, r15
 * 0000000140B04C11: mov     r9d, [rsi+814h]
 * 0000000140B04C18: mov     r11, [rsi+818h]
 * 0000000140B04C1F: lea     rcx, [r15+350h]
 * 0000000140B04C26: cmp     r15, rcx
 * 0000000140B04C29: jnb     short loc_140B04C3B
 * 0000000140B04C2B: mov     edx, 40h ; '@'
 * 0000000140B04C30: prefetchnta byte ptr [rax]
 * 0000000140B04C33: add     rax, rdx
 * 0000000140B04C36: cmp     rax, rcx
 * 0000000140B04C39: jb      short loc_140B04C30
 * 0000000140B04C3B: mov     r10d, 6
 * 0000000140B04C41: mov     r14, r11
 * 0000000140B04C44: mov     esi, 0FFFFFFFFh
 * 0000000140B04C49: mov     rdi, 7010008004002001h
 * 0000000140B04C53: lea     r12d, [r10-5]
 * 0000000140B04C57: mov     eax, 8
 * 0000000140B04C5C: xor     r14, [r8]
 * 0000000140B04C5F: mov     ecx, r9d
 * 0000000140B04C62: rol     r14, cl
 * 0000000140B04C65: xor     r14, [r8+8]
 * 0000000140B04C69: add     r8, 10h
 * 0000000140B04C6D: rol     r14, cl
 * 0000000140B04C70: sub     rax, r12
 * 0000000140B04C73: jnz     short loc_140B04C5C
 * 0000000140B04C75: mov     rcx, r8
 * 0000000140B04C78: sub     rcx, r15
 * 0000000140B04C7B: xor     rcx, r11
 * 0000000140B04C7E: mov     rax, rcx
 * 0000000140B04C81: rol     rax, 11h
 * 0000000140B04C85: xor     rcx, rax
 * 0000000140B04C88: mov     rax, rdi
 * 0000000140B04C8B: mul     rcx
 * 0000000140B04C8E: mov     [rbp+0A70h+var_590], rdx
 * 0000000140B04C95: xor     edx, eax
 * 0000000140B04C97: xor     r9d, edx
 * 0000000140B04C9A: and     r9d, 3Fh
 * 0000000140B04C9E: cmovz   r9d, r12d
 * 0000000140B04CA2: add     r10d, esi
 * 0000000140B04CA5: jnz     short loc_140B04C57
 * 0000000140B04CA7: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B04CAC: lea     edx, [r10+50h]
 * 0000000140B04CB0: mov     r12d, [rbp+0A70h+var_ACC]
 * 0000000140B04CB4: lea     eax, [rdx-46h]
 * 0000000140B04CB7: lea     r10d, [rdx-4Fh]
 * 0000000140B04CBB: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B04CC2: xor     r14, [r8]
 * 0000000140B04CC5: mov     ecx, r9d
 * 0000000140B04CC8: rol     r14, cl
 * 0000000140B04CCB: add     r8, 8
 * 0000000140B04CCF: add     edx, 0FFFFFFF8h
 * 0000000140B04CD2: sub     rax, r10
 * 0000000140B04CD5: jnz     short loc_140B04CC2
 * 0000000140B04CD7: mov     r11d, 0FFFFFFFFh
 * 0000000140B04CDD: test    edx, edx
 * 0000000140B04CDF: jz      short loc_140B04CF6
 * 0000000140B04CE1: movzx   eax, byte ptr [r8]
 * 0000000140B04CE5: mov     ecx, r9d
 * 0000000140B04CE8: xor     r14, rax
 * 0000000140B04CEB: add     r8, r10
 * 0000000140B04CEE: rol     r14, cl
 * 0000000140B04CF1: add     edx, r11d
 * 0000000140B04CF4: jnz     short loc_140B04CE1
 * 0000000140B04CF6: mov     rax, r14
 * 0000000140B04CF9: jmp     loc_140B04DCF
 * 0000000140B04CFE: test    r14, r14
 * 0000000140B04D01: jz      loc_140B04D91
 * 0000000140B04D07: mov     eax, 6000h
 * 0000000140B04D0C: test    word ptr [rbp+0A70h+arg_8], ax
 * 0000000140B04D13: jnz     short loc_140B04D91
 * 0000000140B04D15: cmp     r14, 0FFFFFFFFFFFFFFFFh
 * 0000000140B04D19: jz      loc_140B04AFC
 * 0000000140B04D1F: mov     rax, [rsi+260h]
 * 0000000140B04D26: lea     rdx, [rbp+0A70h+var_A00]
 * 0000000140B04D2A: xor     r8d, r8d
 * 0000000140B04D2D: mov     rcx, r12
 * 0000000140B04D30: call    KeGuardDispatchICall
 * 0000000140B04D35: test    rax, rax
 * 0000000140B04D38: jz      short loc_140B04D91
 * 0000000140B04D3A: mov     eax, [rax]
 * 0000000140B04D3C: mov     rdx, [rbp+0A70h+var_A00]
 * 0000000140B04D40: add     rax, rdx
 * 0000000140B04D43: cmp     rax, r12
 * 0000000140B04D46: jnz     short loc_140B04D91
 * 0000000140B04D48: cmp     rdx, [rsi+8C8h]
 * 0000000140B04D4F: jnz     short loc_140B04D91
 * 0000000140B04D51: mov     rcx, [rsi+8D8h]
 * 0000000140B04D58: mov     r8d, r12d
 * 0000000140B04D5B: mov     rax, [rsi+210h]
 * 0000000140B04D62: sub     r8d, edx
 * 0000000140B04D65: call    KeGuardDispatchICall
 * 0000000140B04D6A: test    rax, rax
 * 0000000140B04D6D: jz      short loc_140B04D91
 * 0000000140B04D6F: mov     eax, [rax+24h]
 * 0000000140B04D72: bt      eax, 19h
 * 0000000140B04D76: jb      short loc_140B04D91
 * 0000000140B04D78: cmp     edi, 0FEh
 * 0000000140B04D7E: jnz     loc_140B04AFC
 * 0000000140B04D84: cmp     r13, [rsi+8B8h]
 * 0000000140B04D8B: jz      loc_140B04AFC
 * 0000000140B04D91: mov     r9, [rbp+0A70h+var_AD8]
 * 0000000140B04D95: mov     rax, [rsi+588h]
 * 0000000140B04D9C: xor     r13d, r13d
 * 0000000140B04D9F: mov     [rax], rbx
 * 0000000140B04DA2: mov     dword ptr [rax+10h], 80h
 * 0000000140B04DA9: test    r9, r9
 * 0000000140B04DAC: jz      short loc_140B04DC0
 * 0000000140B04DAE: mov     rax, [rsi+588h]
 * 0000000140B04DB5: mov     [rax+8], r9
 * 0000000140B04DB9: mov     dword ptr [rax+14h], 80h
 * 0000000140B04DC0: mov     [rbp+0A70h+var_ACC], 1
 * 0000000140B04DC7: jmp     loc_140B04AFF
 * 0000000140B04DCC: xor     r14d, eax
 * 0000000140B04DCF: shr     rax, 1Fh
 * 0000000140B04DD3: test    rax, rax
 * 0000000140B04DD6: jnz     short loc_140B04DCC
 * 0000000140B04DD8: lea     eax, [rbx+10h]
 * 0000000140B04DDB: btr     r14d, 1Fh
 * 0000000140B04DE0: mov     [rsi+828h], eax
 * 0000000140B04DE6: lea     rdx, [r15+0E10h]
 * 0000000140B04DED: mov     r9d, [rsi+814h]
 * 0000000140B04DF4: lea     rcx, [r15+0E20h]
 * 0000000140B04DFB: mov     rbx, [rsi+818h]
 * 0000000140B04E02: mov     rax, rdx
 * 0000000140B04E05: cmp     rdx, rcx
 * 0000000140B04E08: jnb     short loc_140B04E1B
 * 0000000140B04E0A: mov     r8d, 40h ; '@'
 * 0000000140B04E10: prefetchnta byte ptr [rax]
 * 0000000140B04E13: add     rax, r8
 * 0000000140B04E16: cmp     rax, rcx
 * 0000000140B04E19: jb      short loc_140B04E10
 * 0000000140B04E1B: mov     eax, 2
 * 0000000140B04E20: lea     r8d, [rax+0Eh]
 * 0000000140B04E24: xor     rbx, [rdx]
 * 0000000140B04E27: mov     ecx, r9d
 * 0000000140B04E2A: rol     rbx, cl
 * 0000000140B04E2D: add     rdx, 8
 * 0000000140B04E31: add     r8d, 0FFFFFFF8h
 * 0000000140B04E35: sub     rax, r10
 * 0000000140B04E38: jnz     short loc_140B04E24
 * 0000000140B04E3A: test    r8d, r8d
 * 0000000140B04E3D: jz      short loc_140B04E53
 * 0000000140B04E3F: movzx   eax, byte ptr [rdx]
 * 0000000140B04E42: mov     ecx, r9d
 * 0000000140B04E45: xor     rbx, rax
 * 0000000140B04E48: add     rdx, r10
 * 0000000140B04E4B: rol     rbx, cl
 * 0000000140B04E4E: add     r8d, r11d
 * 0000000140B04E51: jnz     short loc_140B04E3F
 * 0000000140B04E53: mov     rax, rbx
 * 0000000140B04E56: jmp     short loc_140B04E5A
 * 0000000140B04E58: xor     ebx, eax
 * 0000000140B04E5A: shr     rax, 1Fh
 * 0000000140B04E5E: test    rax, rax
 * 0000000140B04E61: jnz     short loc_140B04E58
 * 0000000140B04E63: mov     rax, [rsi+198h]
 * 0000000140B04E6A: lea     rcx, [rbp+0A70h+var_258]
 * 0000000140B04E71: btr     ebx, 1Fh
 * 0000000140B04E75: call    KeGuardDispatchICall
 * 0000000140B04E7A: mov     rdx, [rsp+0B70h+var_B20]
 * 0000000140B04E7F: mov     ecx, [rdx+14h]
 * 0000000140B04E82: cmp     r14d, ecx
 * 0000000140B04E85: jnz     short loc_140B04EA5
 * 0000000140B04E87: mov     eax, ebx
 * 0000000140B04E89: cmp     rax, [rdx+18h]
 * 0000000140B04E8D: jnz     short loc_140B04EA5
 * 0000000140B04E8F: movzx   eax, word ptr [rdx+2Ch]
 * 0000000140B04E93: cmp     [rbp+0A70h+var_830], ax
 * 0000000140B04E9A: jnz     short loc_140B04EA5
 * 0000000140B04E9C: test    r12d, r12d
 * 0000000140B04E9F: jz      loc_140B04F3B
 * 0000000140B04EA5: test    r12d, r12d
 * 0000000140B04EA8: jnz     short loc_140B04EDC
 * 0000000140B04EAA: mov     eax, ebx
 * 0000000140B04EAC: cmp     rax, [rdx+18h]
 * 0000000140B04EB0: jnz     short loc_140B04EC0
 * 0000000140B04EB2: cmp     [rsi+8F8h], r13d
 * 0000000140B04EB9: jnz     short loc_140B04EDC
 * 0000000140B04EBB: mov     eax, r14d
 * 0000000140B04EBE: jmp     short loc_140B04ECE
 * 0000000140B04EC0: mov     eax, [rdx+18h]
 * 0000000140B04EC3: cmp     [rsi+8F8h], r13d
 * 0000000140B04ECA: jnz     short loc_140B04EDC
 * 0000000140B04ECC: mov     ecx, ebx
 * 0000000140B04ECE: xor     rcx, rax
 * 0000000140B04ED1: mov     rax, [rsi+588h]
 * 0000000140B04ED8: mov     [rax+18h], rcx
 * 0000000140B04EDC: mov     r12d, 1
 * 0000000140B04EE2: mov     rcx, [rdx+8]
 * 0000000140B04EE6: cmp     [rsi+8F8h], r13d
 * 0000000140B04EED: jnz     short loc_140B04F41
 * 0000000140B04EEF: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B04EF9: add     rax, rsi
 * 0000000140B04EFC: mov     [rsi+900h], rax
 * 0000000140B04F03: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B04F0D: add     rax, rdx
 * 0000000140B04F10: mov     [rsi+908h], rax
 * 0000000140B04F17: movsxd  rax, dword ptr [rdx]
 * 0000000140B04F1A: xor     edx, edx
 * 0000000140B04F1C: mov     [rsi+910h], rax
 * 0000000140B04F23: mov     [rsi+918h], rcx
 * 0000000140B04F2A: mov     rcx, rsi
 * 0000000140B04F2D: mov     [rsi+8F8h], r12d
 * 0000000140B04F34: call    $$ba
 * 0000000140B04F39: jmp     short loc_140B04F41
 * 0000000140B04F3B: mov     r12d, 1
 * 0000000140B04F41: add     dword ptr [rsi+828h], 10000h
 * 0000000140B04F4B: jmp     loc_140AFC148
 * 0000000140B04F50: xor     r12d, r12d
 * 0000000140B04F53: cmp     [r13+10h], r12d
 * 0000000140B04F57: jz      loc_140AFC39B
 * 0000000140B04F5D: test    dword ptr [rsi+994h], 4000h
 * 0000000140B04F67: jz      short loc_140B04F88
 * 0000000140B04F69: mov     rcx, [rsi+4D8h]
 * 0000000140B04F70: cli
 * 0000000140B04F71: mov     eax, [rsi+990h]
 * 0000000140B04F77: shr     eax, 0Ah
 * 0000000140B04F7A: and     eax, 1Fh
 * 0000000140B04F7D: lock bts [rcx], eax
 * 0000000140B04F81: jnb     short loc_140B04F88
 * 0000000140B04F83: sti
 * 0000000140B04F84: pause
 * 0000000140B04F86: jmp     short loc_140B04F70
 * 0000000140B04F88: mov     eax, [r13+18h]
 * 0000000140B04F8C: test    r11b, al
 * 0000000140B04F8F: jnz     loc_140B0523D
 * 0000000140B04F95: mov     r14, [r13+8]
 * 0000000140B04F99: mov     r8d, [r13+10h]
 * 0000000140B04F9D: mov     r9, r14
 * 0000000140B04FA0: add     [rsi+828h], r8d
 * 0000000140B04FA7: mov     rax, r14
 * 0000000140B04FAA: mov     r10d, [rsi+814h]
 * 0000000140B04FB1: mov     r15, [rsi+818h]
 * 0000000140B04FB8: lea     rcx, [r14+r8]
 * 0000000140B04FBC: mov     dword ptr [rbp+0A70h+arg_8], r8d
 * 0000000140B04FC3: cmp     r14, rcx
 * 0000000140B04FC6: jnb     short loc_140B04FD8
 * 0000000140B04FC8: mov     edx, 40h ; '@'
 * 0000000140B04FCD: prefetchnta byte ptr [rax]
 * 0000000140B04FD0: add     rax, rdx
 * 0000000140B04FD3: cmp     rax, rcx
 * 0000000140B04FD6: jb      short loc_140B04FCD
 * 0000000140B04FD8: mov     r11d, r8d
 * 0000000140B04FDB: mov     rbx, r15
 * 0000000140B04FDE: shr     r11d, 7
 * 0000000140B04FE2: mov     edx, 1
 * 0000000140B04FE7: test    r11d, r11d
 * 0000000140B04FEA: jz      short loc_140B05064
 * 0000000140B04FEC: mov     edi, 0FFFFFFFFh
 * 0000000140B04FF1: mov     r8, 7010008004002001h
 * 0000000140B04FFB: mov     eax, 8
 * 0000000140B05000: xor     rbx, [r9]
 * 0000000140B05003: mov     ecx, r10d
 * 0000000140B05006: rol     rbx, cl
 * 0000000140B05009: xor     rbx, [r9+8]
 * 0000000140B0500D: add     r9, 10h
 * 0000000140B05011: rol     rbx, cl
 * 0000000140B05014: sub     rax, rdx
 * 0000000140B05017: jnz     short loc_140B05000
 * 0000000140B05019: mov     rcx, r9
 * 0000000140B0501C: sub     rcx, r14
 * 0000000140B0501F: xor     rcx, r15
 * 0000000140B05022: mov     rax, rcx
 * 0000000140B05025: rol     rax, 11h
 * 0000000140B05029: xor     rcx, rax
 * 0000000140B0502C: mov     rax, r8
 * 0000000140B0502F: mul     rcx
 * 0000000140B05032: xor     r10d, edx
 * 0000000140B05035: mov     [rbp+0A70h+var_588], rdx
 * 0000000140B0503C: xor     r10d, eax
 * 0000000140B0503F: mov     edx, 1
 * 0000000140B05044: and     r10d, 3Fh
 * 0000000140B05048: cmovz   r10d, edx
 * 0000000140B0504C: add     r11d, edi
 * 0000000140B0504F: jnz     short loc_140B04FFB
 * 0000000140B05051: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B05056: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0505D: mov     r8d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B05064: and     r8d, 7Fh
 * 0000000140B05068: cmp     r8d, 8
 * 0000000140B0506C: jb      short loc_140B0508B
 * 0000000140B0506E: mov     eax, r8d
 * 0000000140B05071: shr     rax, 3
 * 0000000140B05075: xor     rbx, [r9]
 * 0000000140B05078: mov     ecx, r10d
 * 0000000140B0507B: rol     rbx, cl
 * 0000000140B0507E: add     r9, 8
 * 0000000140B05082: add     r8d, 0FFFFFFF8h
 * 0000000140B05086: sub     rax, rdx
 * 0000000140B05089: jnz     short loc_140B05075
 * 0000000140B0508B: test    r8d, r8d
 * 0000000140B0508E: jz      short loc_140B050AF
 * 0000000140B05090: mov     esi, 0FFFFFFFFh
 * 0000000140B05095: movzx   eax, byte ptr [r9]
 * 0000000140B05099: mov     ecx, r10d
 * 0000000140B0509C: xor     rbx, rax
 * 0000000140B0509F: add     r9, rdx
 * 0000000140B050A2: rol     rbx, cl
 * 0000000140B050A5: add     r8d, esi
 * 0000000140B050A8: jnz     short loc_140B05095
 * 0000000140B050AA: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B050AF: mov     rax, rbx
 * 0000000140B050B2: jmp     short loc_140B050B6
 * 0000000140B050B4: xor     ebx, eax
 * 0000000140B050B6: shr     rax, 1Fh
 * 0000000140B050BA: test    rax, rax
 * 0000000140B050BD: jnz     short loc_140B050B4
 * 0000000140B050BF: btr     ebx, 1Fh
 * 0000000140B050C3: cmp     ebx, [r13+14h]
 * 0000000140B050C7: jz      loc_140B0557F
 * 0000000140B050CD: xor     r8d, r8d
 * 0000000140B050D0: cmp     [r13+0], r8d
 * 0000000140B050D4: jnz     short loc_140B050DE
 * 0000000140B050D6: cmp     [r13+18h], r8d
 * 0000000140B050DA: cmovnz  r12d, edx
 * 0000000140B050DE: mov     ecx, [r13+10h]
 * 0000000140B050E2: mov     rdx, [r13+8]
 * 0000000140B050E6: test    rcx, rcx
 * 0000000140B050E9: jz      loc_140B051B3
 * 0000000140B050EF: mov     eax, [rsi+994h]
 * 0000000140B050F5: mov     r9d, 40h ; '@'
 * 0000000140B050FB: test    r9b, al
 * 0000000140B050FE: jz      loc_140B051B3
 * 0000000140B05104: mov     r13, cr8
 * 0000000140B05108: lea     eax, [r9-3Eh]
 * 0000000140B0510C: mov     cr8, rax
 * 0000000140B05110: mov     r14, rdx
 * 0000000140B05113: lea     rax, [rcx-1]
 * 0000000140B05117: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140B0511E: add     rax, rdx
 * 0000000140B05121: or      rax, 0FFFh
 * 0000000140B05127: mov     [rsp+0B70h+var_AF8], rax
 * 0000000140B0512C: lea     rax, [r14-1]
 * 0000000140B05130: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B05137: movzx   r15d, r13b
 * 0000000140B0513B: mov     rax, [rsi+468h]
 * 0000000140B05142: xor     edx, edx
 * 0000000140B05144: mov     rcx, r14
 * 0000000140B05147: call    KeGuardDispatchICall
 * 0000000140B0514C: xor     r8d, r8d
 * 0000000140B0514F: cmp     eax, 0C000022Dh
 * 0000000140B05154: jnz     short loc_140B0517D
 * 0000000140B05156: test    r12d, r12d
 * 0000000140B05159: jnz     short loc_140B051AA
 * 0000000140B0515B: lea     eax, [r8+1]
 * 0000000140B0515F: cmp     r13b, al
 * 0000000140B05162: ja      short loc_140B05181
 * 0000000140B05164: movzx   r15d, r13b
 * 0000000140B05168: mov     cr8, r15
 * 0000000140B0516C: mov     al, [r14]
 * 0000000140B0516F: mov     rax, cr8
 * 0000000140B05173: lea     eax, [r8+2]
 * 0000000140B05177: mov     cr8, rax
 * 0000000140B0517B: jmp     short loc_140B0513B
 * 0000000140B0517D: test    eax, eax
 * 0000000140B0517F: js      short loc_140B051AA
 * 0000000140B05181: mov     rax, [rbp+0A70h+arg_8]
 * 0000000140B05188: mov     edx, 1000h
 * 0000000140B0518D: add     rax, rdx
 * 0000000140B05190: add     r14, rdx
 * 0000000140B05193: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B0519A: cmp     rax, [rsp+0B70h+var_AF8]
 * 0000000140B0519F: jnz     short loc_140B05137
 * 0000000140B051A1: mov     cr8, r15
 * 0000000140B051A5: jmp     loc_140B0557F
 * 0000000140B051AA: mov     cr8, r15
 * 0000000140B051AE: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B051B3: mov     eax, [r13+14h]
 * 0000000140B051B7: cmp     [rsi+8F8h], r8d
 * 0000000140B051BE: jnz     loc_140B0557F
 * 0000000140B051C4: mov     ecx, eax
 * 0000000140B051C6: mov     eax, ebx
 * 0000000140B051C8: xor     rcx, rax
 * 0000000140B051CB: mov     rax, [rsi+588h]
 * 0000000140B051D2: mov     [rax+18h], rcx
 * 0000000140B051D6: cmp     [rsi+8F8h], r8d
 * 0000000140B051DD: mov     rcx, [r13+8]
 * 0000000140B051E1: jnz     loc_140B0557F
 * 0000000140B051E7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B051F1: mov     r12d, 1
 * 0000000140B051F7: add     rax, rsi
 * 0000000140B051FA: xor     edx, edx
 * 0000000140B051FC: mov     [rsi+900h], rax
 * 0000000140B05203: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B0520D: add     rax, r13
 * 0000000140B05210: mov     [rsi+908h], rax
 * 0000000140B05217: movsxd  rax, dword ptr [r13+0]
 * 0000000140B0521B: mov     [rsi+910h], rax
 * 0000000140B05222: mov     [rsi+918h], rcx
 * 0000000140B05229: mov     rcx, rsi
 * 0000000140B0522C: mov     [rsi+8F8h], r12d
 * 0000000140B05233: call    $$ba
 * 0000000140B05238: jmp     loc_140B05585
 * 0000000140B0523D: cmp     [rsi+980h], r12
 * 0000000140B05244: jz      loc_140B05578
 * 0000000140B0524A: mov     edx, [rsi+994h]
 * 0000000140B05250: cmp     [rsi+824h], r12d
 * 0000000140B05257: jnz     short loc_140B0526F
 * 0000000140B05259: lea     ecx, ds:0[rdx*8]
 * 0000000140B05260: xor     ecx, edx
 * 0000000140B05262: and     ecx, 20h
 * 0000000140B05265: xor     ecx, edx
 * 0000000140B05267: mov     [rsi+994h], ecx
 * 0000000140B0526D: jmp     short loc_140B05280
 * 0000000140B0526F: mov     eax, edx
 * 0000000140B05271: mov     ecx, edx
 * 0000000140B05273: shr     eax, 3
 * 0000000140B05276: xor     eax, edx
 * 0000000140B05278: test    al, 4
 * 0000000140B0527A: jnz     loc_140B05578
 * 0000000140B05280: test    cl, 4
 * 0000000140B05283: jz      loc_140B05356
 * 0000000140B05289: mov     ecx, [r13+8]
 * 0000000140B0528D: mov     r14d, [r13+10h]
 * 0000000140B05291: and     ecx, 0FFFh
 * 0000000140B05297: mov     rbx, [r13+8]
 * 0000000140B0529B: add     r14, 0FFFh
 * 0000000140B052A2: add     r14, rcx
 * 0000000140B052A5: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140B052AC: shr     r14, 0Ch
 * 0000000140B052B0: test    r14, r14
 * 0000000140B052B3: jz      loc_140B0557F
 * 0000000140B052B9: mov     rax, [rsi+2B0h]
 * 0000000140B052C0: mov     rcx, rbx
 * 0000000140B052C3: sub     r14, r11
 * 0000000140B052C6: call    KeGuardDispatchICall
 * 0000000140B052CB: test    al, al
 * 0000000140B052CD: jz      short loc_140B05327
 * 0000000140B052CF: cmp     [rsi+8F8h], r12d
 * 0000000140B052D6: jnz     short loc_140B05327
 * 0000000140B052D8: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B052E2: mov     edi, 1
 * 0000000140B052E7: add     rax, rsi
 * 0000000140B052EA: xor     edx, edx
 * 0000000140B052EC: mov     [rsi+900h], rax
 * 0000000140B052F3: mov     rcx, rsi
 * 0000000140B052F6: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B05300: add     rax, r13
 * 0000000140B05303: mov     [rsi+908h], rax
 * 0000000140B0530A: movsxd  rax, dword ptr [r13+0]
 * 0000000140B0530E: mov     [rsi+910h], rax
 * 0000000140B05315: mov     [rsi+918h], rbx
 * 0000000140B0531C: mov     [rsi+8F8h], edi
 * 0000000140B05322: call    $$ba
 * 0000000140B05327: add     dword ptr [rsi+828h], 100h
 * 0000000140B05331: add     rbx, 1000h
 * 0000000140B05338: mov     r11d, 1
 * 0000000140B0533E: test    r14, r14
 * 0000000140B05341: jnz     loc_140B052B9
 * 0000000140B05347: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0534E: mov     r12d, r11d
 * 0000000140B05351: jmp     loc_140B05585
 * 0000000140B05356: mov     r14, [r13+8]
 * 0000000140B0535A: mov     r8d, [r13+10h]
 * 0000000140B0535E: mov     r9, r14
 * 0000000140B05361: add     [rsi+828h], r8d
 * 0000000140B05368: mov     rax, r14
 * 0000000140B0536B: mov     r10d, [rsi+814h]
 * 0000000140B05372: mov     r15, [rsi+818h]
 * 0000000140B05379: lea     rcx, [r14+r8]
 * 0000000140B0537D: mov     dword ptr [rbp+0A70h+arg_8], r8d
 * 0000000140B05384: cmp     r14, rcx
 * 0000000140B05387: jnb     short loc_140B05399
 * 0000000140B05389: mov     edx, 40h ; '@'
 * 0000000140B0538E: prefetchnta byte ptr [rax]
 * 0000000140B05391: add     rax, rdx
 * 0000000140B05394: cmp     rax, rcx
 * 0000000140B05397: jb      short loc_140B0538E
 * 0000000140B05399: mov     r11d, r8d
 * 0000000140B0539C: mov     rbx, r15
 * 0000000140B0539F: shr     r11d, 7
 * 0000000140B053A3: mov     edx, 1
 * 0000000140B053A8: test    r11d, r11d
 * 0000000140B053AB: jz      short loc_140B05425
 * 0000000140B053AD: mov     edi, 0FFFFFFFFh
 * 0000000140B053B2: mov     r8, 7010008004002001h
 * 0000000140B053BC: mov     eax, 8
 * 0000000140B053C1: xor     rbx, [r9]
 * 0000000140B053C4: mov     ecx, r10d
 * 0000000140B053C7: rol     rbx, cl
 * 0000000140B053CA: xor     rbx, [r9+8]
 * 0000000140B053CE: add     r9, 10h
 * 0000000140B053D2: rol     rbx, cl
 * 0000000140B053D5: sub     rax, rdx
 * 0000000140B053D8: jnz     short loc_140B053C1
 * 0000000140B053DA: mov     rcx, r9
 * 0000000140B053DD: sub     rcx, r14
 * 0000000140B053E0: xor     rcx, r15
 * 0000000140B053E3: mov     rax, rcx
 * 0000000140B053E6: rol     rax, 11h
 * 0000000140B053EA: xor     rcx, rax
 * 0000000140B053ED: mov     rax, r8
 * 0000000140B053F0: mul     rcx
 * 0000000140B053F3: xor     r10d, edx
 * 0000000140B053F6: mov     [rbp+0A70h+var_580], rdx
 * 0000000140B053FD: xor     r10d, eax
 * 0000000140B05400: mov     edx, 1
 * 0000000140B05405: and     r10d, 3Fh
 * 0000000140B05409: cmovz   r10d, edx
 * 0000000140B0540D: add     r11d, edi
 * 0000000140B05410: jnz     short loc_140B053BC
 * 0000000140B05412: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B05417: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0541E: mov     r8d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B05425: and     r8d, 7Fh
 * 0000000140B05429: cmp     r8d, 8
 * 0000000140B0542D: jb      short loc_140B0544C
 * 0000000140B0542F: mov     eax, r8d
 * 0000000140B05432: shr     rax, 3
 * 0000000140B05436: xor     rbx, [r9]
 * 0000000140B05439: mov     ecx, r10d
 * 0000000140B0543C: rol     rbx, cl
 * 0000000140B0543F: add     r9, 8
 * 0000000140B05443: add     r8d, 0FFFFFFF8h
 * 0000000140B05447: sub     rax, rdx
 * 0000000140B0544A: jnz     short loc_140B05436
 * 0000000140B0544C: test    r8d, r8d
 * 0000000140B0544F: jz      short loc_140B05470
 * 0000000140B05451: mov     esi, 0FFFFFFFFh
 * 0000000140B05456: movzx   eax, byte ptr [r9]
 * 0000000140B0545A: mov     ecx, r10d
 * 0000000140B0545D: xor     rbx, rax
 * 0000000140B05460: add     r9, rdx
 * 0000000140B05463: rol     rbx, cl
 * 0000000140B05466: add     r8d, esi
 * 0000000140B05469: jnz     short loc_140B05456
 * 0000000140B0546B: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B05470: mov     rax, rbx
 * 0000000140B05473: jmp     short loc_140B05477
 * 0000000140B05475: xor     ebx, eax
 * 0000000140B05477: shr     rax, 1Fh
 * 0000000140B0547B: test    rax, rax
 * 0000000140B0547E: jnz     short loc_140B05475
 * 0000000140B05480: mov     edx, [r13+14h]
 * 0000000140B05484: btr     ebx, 1Fh
 * 0000000140B05488: cmp     ebx, edx
 * 0000000140B0548A: jz      loc_140B0557F
 * 0000000140B05490: mov     ecx, [r13+10h]
 * 0000000140B05494: mov     r8, [r13+8]
 * 0000000140B05498: test    rcx, rcx
 * 0000000140B0549B: jz      loc_140B05551
 * 0000000140B054A1: mov     eax, [rsi+994h]
 * 0000000140B054A7: mov     r9d, 40h ; '@'
 * 0000000140B054AD: test    r9b, al
 * 0000000140B054B0: jz      loc_140B05551
 * 0000000140B054B6: mov     r12, cr8
 * 0000000140B054BA: lea     eax, [r9-3Eh]
 * 0000000140B054BE: mov     cr8, rax
 * 0000000140B054C2: mov     r14, r8
 * 0000000140B054C5: lea     rax, [rcx-1]
 * 0000000140B054C9: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140B054D0: add     rax, r8
 * 0000000140B054D3: or      rax, 0FFFh
 * 0000000140B054D9: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B054E0: lea     r13, [r14-1]
 * 0000000140B054E4: movzx   r15d, r12b
 * 0000000140B054E8: mov     rax, [rsi+468h]
 * 0000000140B054EF: xor     edx, edx
 * 0000000140B054F1: mov     rcx, r14
 * 0000000140B054F4: call    KeGuardDispatchICall
 * 0000000140B054F9: cmp     eax, 0C000022Dh
 * 0000000140B054FE: jnz     short loc_140B05524
 * 0000000140B05500: mov     eax, 1
 * 0000000140B05505: cmp     r12b, al
 * 0000000140B05508: ja      short loc_140B05528
 * 0000000140B0550A: movzx   r15d, r12b
 * 0000000140B0550E: mov     cr8, r15
 * 0000000140B05512: mov     al, [r14]
 * 0000000140B05515: mov     rax, cr8
 * 0000000140B05519: mov     eax, 2
 * 0000000140B0551E: mov     cr8, rax
 * 0000000140B05522: jmp     short loc_140B054E8
 * 0000000140B05524: test    eax, eax
 * 0000000140B05526: js      short loc_140B05541
 * 0000000140B05528: mov     edx, 1000h
 * 0000000140B0552D: add     r14, rdx
 * 0000000140B05530: add     r13, rdx
 * 0000000140B05533: cmp     r13, [rbp+0A70h+arg_8]
 * 0000000140B0553A: jnz     short loc_140B054E4
 * 0000000140B0553C: jmp     loc_140B051A1
 * 0000000140B05541: mov     cr8, r15
 * 0000000140B05545: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B0554A: xor     r12d, r12d
 * 0000000140B0554D: mov     edx, [r13+14h]
 * 0000000140B05551: cmp     [rsi+8F8h], r12d
 * 0000000140B05558: jnz     short loc_140B0557F
 * 0000000140B0555A: mov     eax, edx
 * 0000000140B0555C: mov     ecx, ebx
 * 0000000140B0555E: xor     rcx, rax
 * 0000000140B05561: mov     rax, [rsi+588h]
 * 0000000140B05568: mov     [rax+18h], rcx
 * 0000000140B0556C: cmp     [rsi+8F8h], r12d
 * 0000000140B05573: jmp     loc_140B051DD
 * 0000000140B05578: mov     [rsi+824h], r12d
 * 0000000140B0557F: mov     r12d, 1
 * 0000000140B05585: test    dword ptr [rsi+994h], 4000h
 * 0000000140B0558F: jz      loc_140AFC148
 * 0000000140B05595: mov     ecx, [rsi+990h]
 * 0000000140B0559B: mov     edx, r12d
 * 0000000140B0559E: mov     r8, [rsi+4D8h]
 * 0000000140B055A5: shr     ecx, 0Ah
 * 0000000140B055A8: and     ecx, 1Fh
 * 0000000140B055AB: shl     edx, cl
 * 0000000140B055AD: not     edx
 * 0000000140B055AF: lock and [r8], edx
 * 0000000140B055B3: sti
 * 0000000140B055B4: jmp     loc_140AFC148
 * 0000000140B055B9: mov     rcx, gs:20h
 * 0000000140B055C2: mov     rax, [rsi+650h]
 * 0000000140B055C9: mov     rcx, [rax+rcx]
 * 0000000140B055CD: mov     rax, [rsi+690h]
 * 0000000140B055D4: add     rcx, [rsi+6B0h]
 * 0000000140B055DB: mov     rcx, [rcx+rax]
 * 0000000140B055DF: mov     [rbp+0A70h+var_A60], rcx
 * 0000000140B055E3: mov     rax, [rsi+498h]
 * 0000000140B055EA: call    KeGuardDispatchICall
 * 0000000140B055EF: mov     r9d, 0FFFFFFFFh
 * 0000000140B055F5: xor     r15d, r15d
 * 0000000140B055F8: mov     r14, rax
 * 0000000140B055FB: cmp     rax, r9
 * 0000000140B055FE: jnz     loc_140B05733
 * 0000000140B05604: mov     [rbp+0A70h+var_A60], r15
 * 0000000140B05608: mov     rcx, [rsi+988h]
 * 0000000140B0560F: test    rcx, rcx
 * 0000000140B05612: jz      short loc_140B05637
 * 0000000140B05614: mov     rax, [rsi+488h]
 * 0000000140B0561B: lea     rdx, [rbp+0A70h+var_A60]
 * 0000000140B0561F: call    KeGuardDispatchICall
 * 0000000140B05624: mov     rcx, [rbp+0A70h+var_A60]
 * 0000000140B05628: test    eax, eax
 * 0000000140B0562A: cmovs   rcx, r15
 * 0000000140B0562E: mov     [rbp+0A70h+var_A60], rcx
 * 0000000140B05632: test    rcx, rcx
 * 0000000140B05635: jnz     short loc_140B05649
 * 0000000140B05637: mov     rax, [rsi+3C0h]
 * 0000000140B0563E: xor     ecx, ecx
 * 0000000140B05640: call    KeGuardDispatchICall
 * 0000000140B05645: mov     [rbp+0A70h+var_A60], rax
 * 0000000140B05649: mov     [rsi+988h], r15
 * 0000000140B05650: mov     ebx, r15d
 * 0000000140B05653: mov     rcx, [rbp+0A70h+var_A60]
 * 0000000140B05657: mov     r12d, 1
 * 0000000140B0565D: test    rcx, rcx
 * 0000000140B05660: jz      loc_140B05725
 * 0000000140B05666: mov     rax, [rsi+3A0h]
 * 0000000140B0566D: add     ebx, r12d
 * 0000000140B05670: call    KeGuardDispatchICall
 * 0000000140B05675: test    eax, eax
 * 0000000140B05677: js      short loc_140B056D4
 * 0000000140B05679: mov     rax, [rsi+438h]
 * 0000000140B05680: lea     rdx, [rbp+0A70h+var_70]
 * 0000000140B05687: mov     rcx, [rbp+0A70h+var_A60]
 * 0000000140B0568B: call    KeGuardDispatchICall
 * 0000000140B05690: mov     rax, [rsi+498h]
 * 0000000140B05697: call    KeGuardDispatchICall
 * 0000000140B0569C: mov     r14, rax
 * 0000000140B0569F: lea     rcx, [rbp+0A70h+var_70]
 * 0000000140B056A6: mov     rax, [rsi+440h]
 * 0000000140B056AD: call    KeGuardDispatchICall
 * 0000000140B056B2: mov     rax, [rsi+3A8h]
 * 0000000140B056B9: mov     rcx, [rbp+0A70h+var_A60]
 * 0000000140B056BD: call    KeGuardDispatchICall
 * 0000000140B056C2: mov     eax, 0FFFFFFFFh
 * 0000000140B056C7: cmp     r14, rax
 * 0000000140B056CA: jnz     short loc_140B056F3
 * 0000000140B056CC: cmp     ebx, 100h
 * 0000000140B056D2: ja      short loc_140B056F3
 * 0000000140B056D4: mov     rax, [rsi+3C0h]
 * 0000000140B056DB: mov     rcx, [rbp+0A70h+var_A60]
 * 0000000140B056DF: call    KeGuardDispatchICall
 * 0000000140B056E4: mov     rcx, rax
 * 0000000140B056E7: mov     [rbp+0A70h+var_A60], rax
 * 0000000140B056EB: test    rax, rax
 * 0000000140B056EE: jmp     loc_140B05660
 * 0000000140B056F3: mov     rax, [rsi+490h]
 * 0000000140B056FA: mov     rcx, [rbp+0A70h+var_A60]
 * 0000000140B056FE: call    KeGuardDispatchICall
 * 0000000140B05703: mov     [rsi+988h], rax
 * 0000000140B0570A: mov     rax, [rsi+1E0h]
 * 0000000140B05711: mov     rcx, [rbp+0A70h+var_A60]
 * 0000000140B05715: call    KeGuardDispatchICall
 * 0000000140B0571A: mov     r9d, 0FFFFFFFFh
 * 0000000140B05720: cmp     r14, r9
 * 0000000140B05723: jnz     short loc_140B05739
 * 0000000140B05725: shl     ebx, 0Ch
 * 0000000140B05728: add     [rsi+828h], ebx
 * 0000000140B0572E: jmp     loc_140AFC148
 * 0000000140B05733: mov     r12d, 1
 * 0000000140B05739: test    dword ptr [rsi+990h], 40000000h
 * 0000000140B05743: jz      short loc_140B05788
 * 0000000140B05745: mov     rcx, [rsi+0A80h]
 * 0000000140B0574C: mov     edx, 30h ; '0'
 * 0000000140B05751: lea     r8d, [rdx-2Ah]
 * 0000000140B05755: mov     rax, [r13+0]
 * 0000000140B05759: add     edx, 0FFFFFFF8h
 * 0000000140B0575C: mov     [rcx], rax
 * 0000000140B0575F: add     r13, 8
 * 0000000140B05763: add     rcx, 8
 * 0000000140B05767: sub     r8, r12
 * 0000000140B0576A: jnz     short loc_140B05755
 * 0000000140B0576C: test    edx, edx
 * 0000000140B0576E: jz      short loc_140B05781
 * 0000000140B05770: mov     al, [r13+0]
 * 0000000140B05774: add     r13, r12
 * 0000000140B05777: mov     [rcx], al
 * 0000000140B05779: add     rcx, r12
 * 0000000140B0577C: add     edx, r9d
 * 0000000140B0577F: jnz     short loc_140B05770
 * 0000000140B05781: mov     r13, [rsi+0A80h]
 * 0000000140B05788: mov     [r13+18h], r14
 * 0000000140B0578C: mov     rcx, [rbp+0A70h+var_A60]
 * 0000000140B05790: cmp     [rsi+8F8h], r15d
 * 0000000140B05797: jnz     loc_140AFC148
 * 0000000140B0579D: jmp     loc_140AFC3E7
 * 0000000140B057A2: mov     eax, [rsi+830h]
 * 0000000140B057A8: mov     r12d, 1
 * 0000000140B057AE: test    r12b, al
 * 0000000140B057B1: jnz     loc_140AFC148
 * 0000000140B057B7: mov     r15, [rsi+540h]
 * 0000000140B057BE: xor     eax, eax
 * 0000000140B057C0: mov     r14d, eax
 * 0000000140B057C3: mov     rax, [rsi+178h]
 * 0000000140B057CA: call    KeGuardDispatchICall
 * 0000000140B057CF: test    dword ptr [rsi+990h], 40000000h
 * 0000000140B057D9: jnz     short loc_140B057ED
 * 0000000140B057DB: mov     ecx, [rsi+950h]
 * 0000000140B057E1: cmp     ecx, 7
 * 0000000140B057E4: jnb     short loc_140B057ED
 * 0000000140B057E6: mov     ebx, r12d
 * 0000000140B057E9: shl     bl, cl
 * 0000000140B057EB: jmp     short loc_140B05804
 * 0000000140B057ED: mov     rax, [rsi+128h]
 * 0000000140B057F4: xor     edx, edx
 * 0000000140B057F6: mov     rcx, [rsi+0A00h]
 * 0000000140B057FD: call    KeGuardDispatchICall
 * 0000000140B05802: mov     bl, 80h
 * 0000000140B05804: mov     rax, [rsi+138h]
 * 0000000140B0580B: xor     edx, edx
 * 0000000140B0580D: mov     rcx, r15
 * 0000000140B05810: call    KeGuardDispatchICall
 * 0000000140B05815: cmp     bl, 80h
 * 0000000140B05818: jz      short loc_140B0584D
 * 0000000140B0581A: mov     r8, [rsi+518h]
 * 0000000140B05821: mov     rdx, [r8]
 * 0000000140B05824: cmp     rdx, r8
 * 0000000140B05827: jz      short loc_140B05862
 * 0000000140B05829: not     bl
 * 0000000140B0582B: mov     rax, [rsi+6C0h]
 * 0000000140B05832: mov     rcx, rdx
 * 0000000140B05835: sub     rcx, [rsi+6D8h]
 * 0000000140B0583C: lock and [rcx+rax], bl
 * 0000000140B05840: mov     rdx, [rdx]
 * 0000000140B05843: add     r14d, r12d
 * 0000000140B05846: cmp     rdx, r8
 * 0000000140B05849: jnz     short loc_140B0582B
 * 0000000140B0584B: jmp     short loc_140B05862
 * 0000000140B0584D: mov     rax, [rsi+130h]
 * 0000000140B05854: xor     edx, edx
 * 0000000140B05856: mov     rcx, [rsi+0A00h]
 * 0000000140B0585D: call    KeGuardDispatchICall
 * 0000000140B05862: mov     rcx, [rsi+540h]
 * 0000000140B05869: xor     edx, edx
 * 0000000140B0586B: mov     rax, [rsi+140h]
 * 0000000140B05872: call    KeGuardDispatchICall
 * 0000000140B05877: mov     rax, [rsi+180h]
 * 0000000140B0587E: call    KeGuardDispatchICall
 * 0000000140B05883: shl     r14d, 7
 * 0000000140B05887: add     [rsi+828h], r14d
 * 0000000140B0588E: jmp     loc_140AFC148
 * 0000000140B05893: mov     ecx, [r13+20h]
 * 0000000140B05897: mov     edx, 2
 * 0000000140B0589C: mov     [rbp+0A70h+var_AF0], rsi
 * 0000000140B058A0: test    dl, cl
 * 0000000140B058A2: jz      loc_140B05DAE
 * 0000000140B058A8: xor     r14d, r14d
 * 0000000140B058AB: cmp     [rsi+980h], r14
 * 0000000140B058B2: jz      loc_140B03963
 * 0000000140B058B8: mov     eax, [rsi+994h]
 * 0000000140B058BE: test    al, 4
 * 0000000140B058C0: jnz     loc_140B03963
 * 0000000140B058C6: test    dl, cl
 * 0000000140B058C8: jz      loc_140B05DAE
 * 0000000140B058CE: mov     r8d, [rsi+824h]
 * 0000000140B058D5: mov     edx, eax
 * 0000000140B058D7: test    r8d, r8d
 * 0000000140B058DA: jnz     short loc_140B058F2
 * 0000000140B058DC: lea     ecx, ds:0[rax*8]
 * 0000000140B058E3: xor     ecx, eax
 * 0000000140B058E5: and     ecx, 20h
 * 0000000140B058E8: xor     ecx, eax
 * 0000000140B058EA: mov     [rsi+994h], ecx
 * 0000000140B058F0: jmp     short loc_140B05903
 * 0000000140B058F2: mov     eax, edx
 * 0000000140B058F4: mov     ecx, edx
 * 0000000140B058F6: shr     eax, 3
 * 0000000140B058F9: xor     eax, edx
 * 0000000140B058FB: test    al, 4
 * 0000000140B058FD: jnz     loc_140B03963
 * 0000000140B05903: cmp     [rsi+980h], r14
 * 0000000140B0590A: jz      loc_140B05DA2
 * 0000000140B05910: test    r8d, r8d
 * 0000000140B05913: jnz     short loc_140B0592B
 * 0000000140B05915: lea     edx, ds:0[rcx*8]
 * 0000000140B0591C: xor     edx, ecx
 * 0000000140B0591E: and     edx, 20h
 * 0000000140B05921: xor     edx, ecx
 * 0000000140B05923: mov     [rsi+994h], edx
 * 0000000140B05929: jmp     short loc_140B0593C
 * 0000000140B0592B: mov     eax, ecx
 * 0000000140B0592D: mov     edx, ecx
 * 0000000140B0592F: shr     eax, 3
 * 0000000140B05932: xor     eax, ecx
 * 0000000140B05934: test    al, 4
 * 0000000140B05936: jnz     loc_140B05DA2
 * 0000000140B0593C: test    dl, 4
 * 0000000140B0593F: jz      loc_140B05A0C
 * 0000000140B05945: mov     ecx, [r13+8]
 * 0000000140B05949: xor     r15d, r15d
 * 0000000140B0594C: mov     r14d, [r13+10h]
 * 0000000140B05950: and     ecx, 0FFFh
 * 0000000140B05956: mov     rbx, [r13+8]
 * 0000000140B0595A: add     r14, 0FFFh
 * 0000000140B05961: add     r14, rcx
 * 0000000140B05964: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140B0596B: shr     r14, 0Ch
 * 0000000140B0596F: lea     r12d, [r15+1]
 * 0000000140B05973: test    r14, r14
 * 0000000140B05976: jz      loc_140B05A04
 * 0000000140B0597C: mov     rdi, 0B3B74BDEE4453415h
 * 0000000140B05986: mov     rax, [rsi+2B0h]
 * 0000000140B0598D: mov     rcx, rbx
 * 0000000140B05990: sub     r14, r12
 * 0000000140B05993: call    KeGuardDispatchICall
 * 0000000140B05998: test    al, al
 * 0000000140B0599A: jz      short loc_140B059E7
 * 0000000140B0599C: cmp     [rsi+8F8h], r15d
 * 0000000140B059A3: jnz     short loc_140B059E7
 * 0000000140B059A5: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B059AF: xor     edx, edx
 * 0000000140B059B1: add     rax, rsi
 * 0000000140B059B4: mov     rcx, rsi
 * 0000000140B059B7: mov     [rsi+900h], rax
 * 0000000140B059BE: lea     rax, [rdi+r13]
 * 0000000140B059C2: mov     [rsi+908h], rax
 * 0000000140B059C9: movsxd  rax, dword ptr [r13+0]
 * 0000000140B059CD: mov     [rsi+910h], rax
 * 0000000140B059D4: mov     [rsi+918h], rbx
 * 0000000140B059DB: mov     [rsi+8F8h], r12d
 * 0000000140B059E2: call    $$ba
 * 0000000140B059E7: add     dword ptr [rsi+828h], 100h
 * 0000000140B059F1: add     rbx, 1000h
 * 0000000140B059F8: test    r14, r14
 * 0000000140B059FB: jnz     short loc_140B05986
 * 0000000140B059FD: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B05A04: xor     r14d, r14d
 * 0000000140B05A07: jmp     loc_140B05BF1
 * 0000000140B05A0C: mov     r14, [r13+8]
 * 0000000140B05A10: mov     r8d, [r13+10h]
 * 0000000140B05A14: mov     r9, r14
 * 0000000140B05A17: add     [rsi+828h], r8d
 * 0000000140B05A1E: mov     rax, r14
 * 0000000140B05A21: mov     r11d, [rsi+814h]
 * 0000000140B05A28: mov     r15, [rsi+818h]
 * 0000000140B05A2F: lea     rcx, [r14+r8]
 * 0000000140B05A33: cmp     r14, rcx
 * 0000000140B05A36: jnb     short loc_140B05A48
 * 0000000140B05A38: mov     edx, 40h ; '@'
 * 0000000140B05A3D: prefetchnta byte ptr [rax]
 * 0000000140B05A40: add     rax, rdx
 * 0000000140B05A43: cmp     rax, rcx
 * 0000000140B05A46: jb      short loc_140B05A3D
 * 0000000140B05A48: mov     r10d, r8d
 * 0000000140B05A4B: mov     rbx, r15
 * 0000000140B05A4E: shr     r10d, 7
 * 0000000140B05A52: mov     r12d, 1
 * 0000000140B05A58: test    r10d, r10d
 * 0000000140B05A5B: jz      short loc_140B05ACB
 * 0000000140B05A5D: mov     rdi, 7010008004002001h
 * 0000000140B05A67: mov     eax, 8
 * 0000000140B05A6C: xor     rbx, [r9]
 * 0000000140B05A6F: mov     ecx, r11d
 * 0000000140B05A72: rol     rbx, cl
 * 0000000140B05A75: xor     rbx, [r9+8]
 * 0000000140B05A79: add     r9, 10h
 * 0000000140B05A7D: rol     rbx, cl
 * 0000000140B05A80: sub     rax, r12
 * 0000000140B05A83: jnz     short loc_140B05A6C
 * 0000000140B05A85: mov     rcx, r9
 * 0000000140B05A88: sub     rcx, r14
 * 0000000140B05A8B: xor     rcx, r15
 * 0000000140B05A8E: mov     rax, rcx
 * 0000000140B05A91: rol     rax, 11h
 * 0000000140B05A95: xor     rcx, rax
 * 0000000140B05A98: mov     rax, rdi
 * 0000000140B05A9B: mul     rcx
 * 0000000140B05A9E: xor     r11d, edx
 * 0000000140B05AA1: mov     [rbp+0A70h+var_578], rdx
 * 0000000140B05AA8: xor     r11d, eax
 * 0000000140B05AAB: mov     edx, 0FFFFFFFFh
 * 0000000140B05AB0: and     r11d, 3Fh
 * 0000000140B05AB4: cmovz   r11d, r12d
 * 0000000140B05AB8: add     r10d, edx
 * 0000000140B05ABB: jnz     short loc_140B05A67
 * 0000000140B05ABD: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B05AC2: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B05AC9: jmp     short loc_140B05AD0
 * 0000000140B05ACB: mov     edx, 0FFFFFFFFh
 * 0000000140B05AD0: and     r8d, 7Fh
 * 0000000140B05AD4: cmp     r8d, 8
 * 0000000140B05AD8: jb      short loc_140B05AF7
 * 0000000140B05ADA: mov     eax, r8d
 * 0000000140B05ADD: shr     rax, 3
 * 0000000140B05AE1: xor     rbx, [r9]
 * 0000000140B05AE4: mov     ecx, r11d
 * 0000000140B05AE7: rol     rbx, cl
 * 0000000140B05AEA: add     r9, 8
 * 0000000140B05AEE: add     r8d, 0FFFFFFF8h
 * 0000000140B05AF2: sub     rax, r12
 * 0000000140B05AF5: jnz     short loc_140B05AE1
 * 0000000140B05AF7: xor     r14d, r14d
 * 0000000140B05AFA: test    r8d, r8d
 * 0000000140B05AFD: jz      short loc_140B05B14
 * 0000000140B05AFF: movzx   eax, byte ptr [r9]
 * 0000000140B05B03: mov     ecx, r11d
 * 0000000140B05B06: xor     rbx, rax
 * 0000000140B05B09: add     r9, r12
 * 0000000140B05B0C: rol     rbx, cl
 * 0000000140B05B0F: add     r8d, edx
 * 0000000140B05B12: jnz     short loc_140B05AFF
 * 0000000140B05B14: mov     rax, rbx
 * 0000000140B05B17: jmp     short loc_140B05B1B
 * 0000000140B05B19: xor     ebx, eax
 * 0000000140B05B1B: shr     rax, 1Fh
 * 0000000140B05B1F: test    rax, rax
 * 0000000140B05B22: jnz     short loc_140B05B19
 * 0000000140B05B24: mov     edx, [r13+14h]
 * 0000000140B05B28: btr     ebx, 1Fh
 * 0000000140B05B2C: cmp     ebx, edx
 * 0000000140B05B2E: jz      loc_140B05BF1
 * 0000000140B05B34: mov     ecx, [r13+10h]
 * 0000000140B05B38: mov     r8, [r13+8]
 * 0000000140B05B3C: test    rcx, rcx
 * 0000000140B05B3F: jz      loc_140B05D1C
 * 0000000140B05B45: mov     eax, [rsi+994h]
 * 0000000140B05B4B: mov     r9d, 40h ; '@'
 * 0000000140B05B51: test    r9b, al
 * 0000000140B05B54: jz      loc_140B05D1C
 * 0000000140B05B5A: mov     r12, cr8
 * 0000000140B05B5E: lea     eax, [r9-3Eh]
 * 0000000140B05B62: mov     cr8, rax
 * 0000000140B05B66: mov     r14, r8
 * 0000000140B05B69: lea     rax, [rcx-1]
 * 0000000140B05B6D: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140B05B74: add     rax, r8
 * 0000000140B05B77: or      rax, 0FFFh
 * 0000000140B05B7D: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B05B84: lea     r13, [r14-1]
 * 0000000140B05B88: movzx   r15d, r12b
 * 0000000140B05B8C: mov     rax, [rsi+468h]
 * 0000000140B05B93: xor     edx, edx
 * 0000000140B05B95: mov     rcx, r14
 * 0000000140B05B98: call    KeGuardDispatchICall
 * 0000000140B05B9D: cmp     eax, 0C000022Dh
 * 0000000140B05BA2: jnz     short loc_140B05BC8
 * 0000000140B05BA4: mov     eax, 1
 * 0000000140B05BA9: cmp     r12b, al
 * 0000000140B05BAC: ja      short loc_140B05BD0
 * 0000000140B05BAE: movzx   r15d, r12b
 * 0000000140B05BB2: mov     cr8, r15
 * 0000000140B05BB6: mov     al, [r14]
 * 0000000140B05BB9: mov     rax, cr8
 * 0000000140B05BBD: mov     eax, 2
 * 0000000140B05BC2: mov     cr8, rax
 * 0000000140B05BC6: jmp     short loc_140B05B8C
 * 0000000140B05BC8: test    eax, eax
 * 0000000140B05BCA: js      loc_140B05D0C
 * 0000000140B05BD0: mov     edx, 1000h
 * 0000000140B05BD5: add     r14, rdx
 * 0000000140B05BD8: add     r13, rdx
 * 0000000140B05BDB: cmp     r13, [rbp+0A70h+arg_8]
 * 0000000140B05BE2: jnz     short loc_140B05B88
 * 0000000140B05BE4: mov     cr8, r15
 * 0000000140B05BE8: xor     r14d, r14d
 * 0000000140B05BEB: mov     r12d, 1
 * 0000000140B05BF1: mov     rcx, [rsp+0B70h+var_B20]
 * 0000000140B05BF6: mov     eax, [rcx+20h]
 * 0000000140B05BF9: test    r12b, al
 * 0000000140B05BFC: jz      loc_140AFC148
 * 0000000140B05C02: mov     rbx, [rcx+18h]
 * 0000000140B05C06: mov     rax, [rsi+1F8h]
 * 0000000140B05C0D: mov     rcx, rbx
 * 0000000140B05C10: mov     [rsp+0B70h+var_B18], rbx
 * 0000000140B05C15: call    KeGuardDispatchICall
 * 0000000140B05C1A: movzx   r15d, word ptr [rax+14h]
 * 0000000140B05C1F: add     r15, 18h
 * 0000000140B05C23: add     r15, rax
 * 0000000140B05C26: movzx   eax, word ptr [rax+6]
 * 0000000140B05C2A: lea     rcx, [rax+rax*4]
 * 0000000140B05C2E: lea     rax, [r15+rcx*8]
 * 0000000140B05C32: cmp     r15, rax
 * 0000000140B05C35: jz      loc_140AFC148
 * 0000000140B05C3B: mov     r12d, [rsi+824h]
 * 0000000140B05C42: test    r12d, r12d
 * 0000000140B05C45: jnz     short loc_140B05C57
 * 0000000140B05C47: mov     dword ptr [rsi+824h], 1000h
 * 0000000140B05C51: mov     r12d, 1000h
 * 0000000140B05C57: cmp     rbx, [rsi+5E0h]
 * 0000000140B05C5E: jz      short loc_140B05C70
 * 0000000140B05C60: mov     dword ptr [rbp+0A70h+arg_8], r14d
 * 0000000140B05C67: cmp     rbx, [rsi+5E8h]
 * 0000000140B05C6E: jnz     short loc_140B05C7A
 * 0000000140B05C70: mov     dword ptr [rbp+0A70h+arg_8], 1
 * 0000000140B05C7A: mov     esi, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B05C80: mov     rdi, rax
 * 0000000140B05C83: mov     ecx, [r15+10h]
 * 0000000140B05C87: mov     eax, [r15+8]
 * 0000000140B05C8B: cmp     ecx, eax
 * 0000000140B05C8D: mov     r11d, [r15+0Ch]
 * 0000000140B05C91: cmovbe  ecx, eax
 * 0000000140B05C94: lea     r13d, [r11+0FFFh]
 * 0000000140B05C9B: add     r13d, ecx
 * 0000000140B05C9E: and     r13d, 0FFFFF000h
 * 0000000140B05CA5: cmp     r12d, r13d
 * 0000000140B05CA8: jnb     short loc_140B05CD3
 * 0000000140B05CAA: test    dword ptr [r15+24h], 2000000h
 * 0000000140B05CB2: jnz     short loc_140B05CD0
 * 0000000140B05CB4: mov     eax, [r15]
 * 0000000140B05CB7: cmp     eax, 54494E49h
 * 0000000140B05CBC: jnz     loc_140B05FF5
 * 0000000140B05CC2: cmp     dword ptr [r15+4], 4742444Bh
 * 0000000140B05CCA: jnz     loc_140B0602C
 * 0000000140B05CD0: mov     r12d, r13d
 * 0000000140B05CD3: mov     r8, [rbp+0A70h+var_AF0]
 * 0000000140B05CD7: add     r15, 28h ; '('
 * 0000000140B05CDB: cmp     r15, rdi
 * 0000000140B05CDE: jnz     short loc_140B05C83
 * 0000000140B05CE0: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B05CE5: cmp     r15, rdi
 * 0000000140B05CE8: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B05CEF: jnz     loc_140B06457
 * 0000000140B05CF5: cmp     r12d, r13d
 * 0000000140B05CF8: jb      loc_140B06457
 * 0000000140B05CFE: xor     eax, eax
 * 0000000140B05D00: mov     [r8+824h], eax
 * 0000000140B05D07: jmp     loc_140AFC050
 * 0000000140B05D0C: mov     cr8, r15
 * 0000000140B05D10: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B05D15: xor     r14d, r14d
 * 0000000140B05D18: mov     edx, [r13+14h]
 * 0000000140B05D1C: cmp     [rsi+8F8h], r14d
 * 0000000140B05D23: jnz     loc_140B05BEB
 * 0000000140B05D29: mov     eax, edx
 * 0000000140B05D2B: mov     r12d, 1
 * 0000000140B05D31: mov     ecx, ebx
 * 0000000140B05D33: xor     rcx, rax
 * 0000000140B05D36: mov     rax, [rsi+588h]
 * 0000000140B05D3D: mov     [rax+18h], rcx
 * 0000000140B05D41: mov     rcx, [r13+8]
 * 0000000140B05D45: cmp     [rsi+8F8h], r14d
 * 0000000140B05D4C: jnz     loc_140B05BF1
 * 0000000140B05D52: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B05D5C: xor     edx, edx
 * 0000000140B05D5E: add     rax, rsi
 * 0000000140B05D61: mov     [rsi+900h], rax
 * 0000000140B05D68: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B05D72: add     rax, r13
 * 0000000140B05D75: mov     [rsi+908h], rax
 * 0000000140B05D7C: movsxd  rax, dword ptr [r13+0]
 * 0000000140B05D80: mov     [rsi+910h], rax
 * 0000000140B05D87: mov     [rsi+918h], rcx
 * 0000000140B05D8E: mov     rcx, rsi
 * 0000000140B05D91: mov     [rsi+8F8h], r12d
 * 0000000140B05D98: call    $$ba
 * 0000000140B05D9D: jmp     loc_140B05BF1
 * 0000000140B05DA2: mov     [rsi+824h], r14d
 * 0000000140B05DA9: jmp     loc_140B05BEB
 * 0000000140B05DAE: mov     r14, [r13+8]
 * 0000000140B05DB2: mov     r8d, [r13+10h]
 * 0000000140B05DB6: mov     r9, r14
 * 0000000140B05DB9: add     [rsi+828h], r8d
 * 0000000140B05DC0: mov     rax, r14
 * 0000000140B05DC3: mov     r10d, [rsi+814h]
 * 0000000140B05DCA: mov     r15, [rsi+818h]
 * 0000000140B05DD1: lea     rcx, [r14+r8]
 * 0000000140B05DD5: cmp     r14, rcx
 * 0000000140B05DD8: jnb     short loc_140B05DEA
 * 0000000140B05DDA: mov     edx, 40h ; '@'
 * 0000000140B05DDF: prefetchnta byte ptr [rax]
 * 0000000140B05DE2: add     rax, rdx
 * 0000000140B05DE5: cmp     rax, rcx
 * 0000000140B05DE8: jb      short loc_140B05DDF
 * 0000000140B05DEA: mov     r11d, r8d
 * 0000000140B05DED: mov     rbx, r15
 * 0000000140B05DF0: shr     r11d, 7
 * 0000000140B05DF4: mov     edx, 1
 * 0000000140B05DF9: mov     r12d, 0FFFFFFFFh
 * 0000000140B05DFF: test    r11d, r11d
 * 0000000140B05E02: jz      short loc_140B05E70
 * 0000000140B05E04: mov     rdi, 7010008004002001h
 * 0000000140B05E0E: mov     eax, 8
 * 0000000140B05E13: xor     rbx, [r9]
 * 0000000140B05E16: mov     ecx, r10d
 * 0000000140B05E19: rol     rbx, cl
 * 0000000140B05E1C: xor     rbx, [r9+8]
 * 0000000140B05E20: add     r9, 10h
 * 0000000140B05E24: rol     rbx, cl
 * 0000000140B05E27: sub     rax, rdx
 * 0000000140B05E2A: jnz     short loc_140B05E13
 * 0000000140B05E2C: mov     rcx, r9
 * 0000000140B05E2F: sub     rcx, r14
 * 0000000140B05E32: xor     rcx, r15
 * 0000000140B05E35: mov     rax, rcx
 * 0000000140B05E38: rol     rax, 11h
 * 0000000140B05E3C: xor     rcx, rax
 * 0000000140B05E3F: mov     rax, rdi
 * 0000000140B05E42: mul     rcx
 * 0000000140B05E45: xor     r10d, edx
 * 0000000140B05E48: mov     [rbp+0A70h+var_570], rdx
 * 0000000140B05E4F: xor     r10d, eax
 * 0000000140B05E52: mov     edx, 1
 * 0000000140B05E57: and     r10d, 3Fh
 * 0000000140B05E5B: cmovz   r10d, edx
 * 0000000140B05E5F: add     r11d, r12d
 * 0000000140B05E62: jnz     short loc_140B05E0E
 * 0000000140B05E64: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B05E69: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B05E70: and     r8d, 7Fh
 * 0000000140B05E74: cmp     r8d, 8
 * 0000000140B05E78: jb      short loc_140B05E97
 * 0000000140B05E7A: mov     eax, r8d
 * 0000000140B05E7D: shr     rax, 3
 * 0000000140B05E81: xor     rbx, [r9]
 * 0000000140B05E84: mov     ecx, r10d
 * 0000000140B05E87: rol     rbx, cl
 * 0000000140B05E8A: add     r9, 8
 * 0000000140B05E8E: add     r8d, 0FFFFFFF8h
 * 0000000140B05E92: sub     rax, rdx
 * 0000000140B05E95: jnz     short loc_140B05E81
 * 0000000140B05E97: xor     r14d, r14d
 * 0000000140B05E9A: test    r8d, r8d
 * 0000000140B05E9D: jz      short loc_140B05EB4
 * 0000000140B05E9F: movzx   eax, byte ptr [r9]
 * 0000000140B05EA3: mov     ecx, r10d
 * 0000000140B05EA6: xor     rbx, rax
 * 0000000140B05EA9: add     r9, rdx
 * 0000000140B05EAC: rol     rbx, cl
 * 0000000140B05EAF: add     r8d, r12d
 * 0000000140B05EB2: jnz     short loc_140B05E9F
 * 0000000140B05EB4: mov     rax, rbx
 * 0000000140B05EB7: jmp     short loc_140B05EBB
 * 0000000140B05EB9: xor     ebx, eax
 * 0000000140B05EBB: shr     rax, 1Fh
 * 0000000140B05EBF: test    rax, rax
 * 0000000140B05EC2: jnz     short loc_140B05EB9
 * 0000000140B05EC4: btr     ebx, 1Fh
 * 0000000140B05EC8: mov     r12d, r14d
 * 0000000140B05ECB: cmp     ebx, [r13+14h]
 * 0000000140B05ECF: jz      loc_140B05BEB
 * 0000000140B05ED5: cmp     [r13+0], r14d
 * 0000000140B05ED9: jnz     short loc_140B05EE3
 * 0000000140B05EDB: cmp     [r13+18h], r14d
 * 0000000140B05EDF: cmovnz  r12d, edx
 * 0000000140B05EE3: mov     ecx, [r13+10h]
 * 0000000140B05EE7: mov     rdx, [r13+8]
 * 0000000140B05EEB: test    rcx, rcx
 * 0000000140B05EEE: jz      loc_140B05FB6
 * 0000000140B05EF4: mov     eax, [rsi+994h]
 * 0000000140B05EFA: mov     r8d, 40h ; '@'
 * 0000000140B05F00: test    r8b, al
 * 0000000140B05F03: jz      loc_140B05FB6
 * 0000000140B05F09: mov     r13, cr8
 * 0000000140B05F0D: lea     eax, [r8-3Eh]
 * 0000000140B05F11: mov     cr8, rax
 * 0000000140B05F15: mov     r14, rdx
 * 0000000140B05F18: lea     rax, [rcx-1]
 * 0000000140B05F1C: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140B05F23: add     rax, rdx
 * 0000000140B05F26: or      rax, 0FFFh
 * 0000000140B05F2C: mov     [rsp+0B70h+var_AF8], rax
 * 0000000140B05F31: lea     rax, [r14-1]
 * 0000000140B05F35: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B05F3C: movzx   r15d, r13b
 * 0000000140B05F40: mov     rax, [rsi+468h]
 * 0000000140B05F47: xor     edx, edx
 * 0000000140B05F49: mov     rcx, r14
 * 0000000140B05F4C: call    KeGuardDispatchICall
 * 0000000140B05F51: cmp     eax, 0C000022Dh
 * 0000000140B05F56: jnz     short loc_140B05F81
 * 0000000140B05F58: test    r12d, r12d
 * 0000000140B05F5B: jnz     short loc_140B05FAA
 * 0000000140B05F5D: lea     eax, [r12+1]
 * 0000000140B05F62: cmp     r13b, al
 * 0000000140B05F65: ja      short loc_140B05F85
 * 0000000140B05F67: movzx   r15d, r13b
 * 0000000140B05F6B: mov     cr8, r15
 * 0000000140B05F6F: mov     al, [r14]
 * 0000000140B05F72: mov     rax, cr8
 * 0000000140B05F76: lea     eax, [r12+2]
 * 0000000140B05F7B: mov     cr8, rax
 * 0000000140B05F7F: jmp     short loc_140B05F40
 * 0000000140B05F81: test    eax, eax
 * 0000000140B05F83: js      short loc_140B05FAA
 * 0000000140B05F85: mov     rax, [rbp+0A70h+arg_8]
 * 0000000140B05F8C: mov     edx, 1000h
 * 0000000140B05F91: add     rax, rdx
 * 0000000140B05F94: add     r14, rdx
 * 0000000140B05F97: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B05F9E: cmp     rax, [rsp+0B70h+var_AF8]
 * 0000000140B05FA3: jnz     short loc_140B05F3C
 * 0000000140B05FA5: jmp     loc_140B05BE4
 * 0000000140B05FAA: mov     cr8, r15
 * 0000000140B05FAE: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B05FB3: xor     r14d, r14d
 * 0000000140B05FB6: mov     eax, [r13+14h]
 * 0000000140B05FBA: cmp     [rsi+8F8h], r14d
 * 0000000140B05FC1: jnz     loc_140B05BEB
 * 0000000140B05FC7: mov     ecx, eax
 * 0000000140B05FC9: mov     eax, ebx
 * 0000000140B05FCB: xor     rcx, rax
 * 0000000140B05FCE: mov     rax, [rsi+588h]
 * 0000000140B05FD5: mov     [rax+18h], rcx
 * 0000000140B05FD9: mov     rcx, [r13+8]
 * 0000000140B05FDD: cmp     [rsi+8F8h], r14d
 * 0000000140B05FE4: jnz     loc_140B05BEB
 * 0000000140B05FEA: mov     r12d, 1
 * 0000000140B05FF0: jmp     loc_140B05D52
 * 0000000140B05FF5: cmp     eax, 45474150h
 * 0000000140B05FFA: jnz     short loc_140B0602C
 * 0000000140B05FFC: movzx   eax, word ptr [r15+4]
 * 0000000140B06001: mov     ecx, 7877h
 * 0000000140B06006: cmp     ax, cx
 * 0000000140B06009: jz      loc_140B05CD0
 * 0000000140B0600F: mov     ecx, 7277h
 * 0000000140B06014: cmp     ax, cx
 * 0000000140B06017: jz      loc_140B05CD0
 * 0000000140B0601D: mov     ecx, 7777h
 * 0000000140B06022: cmp     ax, cx
 * 0000000140B06025: jnz     short loc_140B06043
 * 0000000140B06027: jmp     loc_140B05CD0
 * 0000000140B0602C: cmp     eax, 41525245h
 * 0000000140B06031: jnz     short loc_140B06043
 * 0000000140B06033: mov     eax, 4154h
 * 0000000140B06038: cmp     [r15+4], ax
 * 0000000140B0603D: jz      loc_140B05CD0
 * 0000000140B06043: mov     rcx, [rbp+0A70h+var_AF0]
 * 0000000140B06047: test    rcx, rcx
 * 0000000140B0604A: jz      short loc_140B06086
 * 0000000140B0604C: mov     rax, [rcx+938h]
 * 0000000140B06053: mov     r8, [rcx+930h]
 * 0000000140B0605A: mov     qword ptr [rbp+0A70h+var_880+8], rax
 * 0000000140B06061: mov     rax, [rcx+940h]
 * 0000000140B06068: mov     qword ptr [rbp+0A70h+var_870], rax
 * 0000000140B0606F: mov     rax, [rcx+948h]
 * 0000000140B06076: mov     qword ptr [rbp+0A70h+var_870+8], rax
 * 0000000140B0607D: mov     qword ptr [rbp+0A70h+var_880], r8
 * 0000000140B06084: jmp     short loc_140B060A9
 * 0000000140B06086: movups  xmm0, xmmword ptr cs:VfExcludeSections
 * 0000000140B0608D: movups  xmm1, xmmword ptr cs:off_140C094B0; "INIT"
 * 0000000140B06094: movups  [rbp+0A70h+var_880], xmm0
 * 0000000140B0609B: mov     r8, qword ptr [rbp+0A70h+var_880]
 * 0000000140B060A2: movups  [rbp+0A70h+var_870], xmm1
 * 0000000140B060A9: mov     r10d, 7
 * 0000000140B060AF: mov     r9, r15
 * 0000000140B060B2: movzx   edx, byte ptr [r9]
 * 0000000140B060B6: inc     r9
 * 0000000140B060B9: movzx   eax, byte ptr [r8]
 * 0000000140B060BD: inc     r8
 * 0000000140B060C0: cmp     rdx, rax
 * 0000000140B060C3: jnz     short loc_140B060D4
 * 0000000140B060C5: mov     eax, 0FFFFFFFFh
 * 0000000140B060CA: add     r10d, eax
 * 0000000140B060CD: jnz     short loc_140B060B2
 * 0000000140B060CF: jmp     loc_140B05CD0
 * 0000000140B060D4: mov     r9, qword ptr [rbp+0A70h+var_880+8]
 * 0000000140B060DB: mov     r8d, 8
 * 0000000140B060E1: mov     r10, r15
 * 0000000140B060E4: mov     rcx, [r10]
 * 0000000140B060E7: add     r10, 8
 * 0000000140B060EB: mov     rax, [r9]
 * 0000000140B060EE: add     r9, 8
 * 0000000140B060F2: cmp     rcx, rax
 * 0000000140B060F5: jnz     short loc_140B0612C
 * 0000000140B060F7: add     r8d, 0FFFFFFF8h
 * 0000000140B060FB: cmp     r8d, 8
 * 0000000140B060FF: jnb     short loc_140B060E4
 * 0000000140B06101: test    r8d, r8d
 * 0000000140B06104: jz      loc_140B05CD0
 * 0000000140B0610A: movzx   edx, byte ptr [r10]
 * 0000000140B0610E: inc     r10
 * 0000000140B06111: movzx   eax, byte ptr [r9]
 * 0000000140B06115: inc     r9
 * 0000000140B06118: cmp     rdx, rax
 * 0000000140B0611B: jnz     short loc_140B0612C
 * 0000000140B0611D: mov     eax, 0FFFFFFFFh
 * 0000000140B06122: add     r8d, eax
 * 0000000140B06125: jnz     short loc_140B0610A
 * 0000000140B06127: jmp     loc_140B05CD0
 * 0000000140B0612C: mov     r8, qword ptr [rbp+0A70h+var_870]
 * 0000000140B06133: mov     r10d, 4
 * 0000000140B06139: mov     r9, r15
 * 0000000140B0613C: movzx   edx, byte ptr [r9]
 * 0000000140B06140: inc     r9
 * 0000000140B06143: movzx   eax, byte ptr [r8]
 * 0000000140B06147: inc     r8
 * 0000000140B0614A: cmp     rdx, rax
 * 0000000140B0614D: jnz     short loc_140B0615E
 * 0000000140B0614F: mov     eax, 0FFFFFFFFh
 * 0000000140B06154: add     r10d, eax
 * 0000000140B06157: jnz     short loc_140B0613C
 * 0000000140B06159: jmp     loc_140B05CD0
 * 0000000140B0615E: mov     r8, qword ptr [rbp+0A70h+var_870+8]
 * 0000000140B06165: mov     r10d, 6
 * 0000000140B0616B: mov     r9, r15
 * 0000000140B0616E: movzx   edx, byte ptr [r9]
 * 0000000140B06172: inc     r9
 * 0000000140B06175: movzx   eax, byte ptr [r8]
 * 0000000140B06179: inc     r8
 * 0000000140B0617C: cmp     rdx, rax
 * 0000000140B0617F: jnz     short loc_140B06190
 * 0000000140B06181: mov     eax, 0FFFFFFFFh
 * 0000000140B06186: add     r10d, eax
 * 0000000140B06189: jnz     short loc_140B0616E
 * 0000000140B0618B: jmp     loc_140B05CD0
 * 0000000140B06190: mov     eax, [r15+24h]
 * 0000000140B06194: test    eax, eax
 * 0000000140B06196: js      loc_140B05CD0
 * 0000000140B0619C: bt      eax, 1Dh
 * 0000000140B061A0: jnb     loc_140B05CD0
 * 0000000140B061A6: xor     r9d, r9d
 * 0000000140B061A9: mov     r10d, 1
 * 0000000140B061AF: mov     r14d, r10d
 * 0000000140B061B2: test    esi, esi
 * 0000000140B061B4: jz      short loc_140B061C9
 * 0000000140B061B6: mov     eax, [r15]
 * 0000000140B061B9: cmp     eax, 2E656461h
 * 0000000140B061BE: jz      short loc_140B061C9
 * 0000000140B061C0: cmp     eax, 45474150h
 * 0000000140B061C5: cmovnz  r14d, r9d
 * 0000000140B061C9: mov     r8, [rbp+0A70h+var_AF0]
 * 0000000140B061CD: cmp     r12d, r11d
 * 0000000140B061D0: cmovb   r12d, r11d
 * 0000000140B061D4: mov     eax, r12d
 * 0000000140B061D7: add     rbx, rax
 * 0000000140B061DA: test    byte ptr [r8+87Bh], 4
 * 0000000140B061E2: jz      short loc_140B06245
 * 0000000140B061E4: mov     ecx, 0FFFFFFFFh
 * 0000000140B061E9: mov     eax, ecx
 * 0000000140B061EB: xbegin  $+6
 * 0000000140B061F1: cmp     eax, ecx
 * 0000000140B061F3: jnz     short loc_140B061FC
 * 0000000140B061F5: mov     al, [rbx]
 * 0000000140B061F7: xend
 * 0000000140B061FA: jmp     short loc_140B0622E
 * 0000000140B061FC: rdtsc
 * 0000000140B061FE: shl     rdx, 20h
 * 0000000140B06202: or      rax, rdx
 * 0000000140B06205: mov     rcx, rax
 * 0000000140B06208: ror     rax, 3
 * 0000000140B0620C: xor     rcx, rax
 * 0000000140B0620F: mov     rax, 7010008004002001h
 * 0000000140B06219: mul     rcx
 * 0000000140B0621C: mov     [rbp+0A70h+var_568], rdx
 * 0000000140B06223: xor     dl, al
 * 0000000140B06225: mov     eax, 0Fh
 * 0000000140B0622A: test    al, dl
 * 0000000140B0622C: jz      short loc_140B06245
 * 0000000140B0622E: add     [r8+83Ch], r10d
 * 0000000140B06235: add     dword ptr [r8+828h], 100h
 * 0000000140B06240: jmp     loc_140B062F1
 * 0000000140B06245: test    r14d, r14d
 * 0000000140B06248: jz      loc_140B0631F
 * 0000000140B0624E: mov     rax, [r8+450h]
 * 0000000140B06255: lea     rcx, [rbp+0A70h+var_6C8]
 * 0000000140B0625C: mov     rdx, rbx
 * 0000000140B0625F: call    KeGuardDispatchICall
 * 0000000140B06264: xor     r9d, r9d
 * 0000000140B06267: test    eax, eax
 * 0000000140B06269: jns     loc_140B06390
 * 0000000140B0626F: cmp     eax, 0C0000005h
 * 0000000140B06274: jnz     short loc_140B062E7
 * 0000000140B06276: mov     rcx, [rsp+0B70h+var_B20]
 * 0000000140B0627B: mov     eax, [rcx+20h]
 * 0000000140B0627E: test    al, 4
 * 0000000140B06280: jz      short loc_140B06288
 * 0000000140B06282: cmp     [r15+24h], r9d
 * 0000000140B06286: jge     short loc_140B062E7
 * 0000000140B06288: mov     r8, [rbp+0A70h+var_AF0]
 * 0000000140B0628C: cmp     [r8+8F8h], r9d
 * 0000000140B06293: jnz     short loc_140B062EB
 * 0000000140B06295: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0629F: xor     edx, edx
 * 0000000140B062A1: add     rax, r8
 * 0000000140B062A4: mov     [r8+900h], rax
 * 0000000140B062AB: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B062B5: add     rax, rcx
 * 0000000140B062B8: mov     [r8+908h], rax
 * 0000000140B062BF: movsxd  rax, dword ptr [rcx]
 * 0000000140B062C2: mov     rcx, r8
 * 0000000140B062C5: mov     [r8+910h], rax
 * 0000000140B062CC: mov     eax, 1
 * 0000000140B062D1: mov     [r8+918h], rbx
 * 0000000140B062D8: mov     [r8+8F8h], eax
 * 0000000140B062DF: call    $$ba
 * 0000000140B062E4: xor     r9d, r9d
 * 0000000140B062E7: mov     r8, [rbp+0A70h+var_AF0]
 * 0000000140B062EB: mov     r10d, 1
 * 0000000140B062F1: mov     eax, [r8+82Ch]
 * 0000000140B062F8: add     r12d, 1000h
 * 0000000140B062FF: cmp     r12d, r13d
 * 0000000140B06302: jnb     loc_140B0643D
 * 0000000140B06308: cmp     [r8+828h], eax
 * 0000000140B0630F: jge     loc_140B05CE0
 * 0000000140B06315: mov     rbx, [rsp+0B70h+var_B18]
 * 0000000140B0631A: jmp     loc_140B061D4
 * 0000000140B0631F: mov     edx, 0FFFh
 * 0000000140B06324: mov     [rbp+0A70h+var_6C8], r9
 * 0000000140B0632B: mov     [rbp+0A70h+var_6BE], r9w
 * 0000000140B06333: mov     rax, rbx
 * 0000000140B06336: and     rax, rdx
 * 0000000140B06339: mov     [rbp+0A70h+var_6A0], 1000h
 * 0000000140B06343: add     rax, 1FFFh
 * 0000000140B06349: mov     rcx, rbx
 * 0000000140B0634C: shr     rax, 0Ch
 * 0000000140B06350: add     ax, 6
 * 0000000140B06354: shl     ax, 3
 * 0000000140B06358: mov     [rbp+0A70h+var_6C0], ax
 * 0000000140B0635F: mov     rax, rbx
 * 0000000140B06362: and     rax, 0FFFFFFFFFFFFF000h
 * 0000000140B06368: mov     [rbp+0A70h+var_6A8], rax
 * 0000000140B0636F: mov     eax, ebx
 * 0000000140B06371: and     eax, edx
 * 0000000140B06373: mov     [rbp+0A70h+var_69C], eax
 * 0000000140B06379: mov     rax, [r8+458h]
 * 0000000140B06380: call    KeGuardDispatchICall
 * 0000000140B06385: shr     rax, 0Ch
 * 0000000140B06389: mov     [rbp+0A70h+var_698], rax
 * 0000000140B06390: mov     rcx, [rbp+0A70h+var_AF0]
 * 0000000140B06394: mov     eax, 1
 * 0000000140B06399: add     [rcx+840h], eax
 * 0000000140B0639F: mov     eax, [rbp+0A70h+var_69C]
 * 0000000140B063A5: add     rax, [rbp+0A70h+var_6A8]
 * 0000000140B063AC: mov     [rcx+0A68h], rax
 * 0000000140B063B3: mov     rax, [rsp+0B70h+var_B20]
 * 0000000140B063B8: mov     [rcx+0A60h], rax
 * 0000000140B063BF: mov     rbx, cr8
 * 0000000140B063C3: mov     eax, 2
 * 0000000140B063C8: mov     cr8, rax
 * 0000000140B063CC: mov     rax, [rcx+5F0h]
 * 0000000140B063D3: xor     r8d, r8d
 * 0000000140B063D6: add     rcx, 0A40h
 * 0000000140B063DD: mov     edx, [rax]
 * 0000000140B063DF: call    RtlInitMinimalBarrier
 * 0000000140B063E4: mov     rdx, [rbp+0A70h+var_AF0]
 * 0000000140B063E8: mov     ecx, [rdx+7F4h]
 * 0000000140B063EE: mov     rax, [rdx+448h]
 * 0000000140B063F5: add     rcx, rdx
 * 0000000140B063F8: call    KeGuardDispatchICall
 * 0000000140B063FD: mov     r8, rax
 * 0000000140B06400: mov     [rbp+0A70h+var_AF0], rax
 * 0000000140B06404: movzx   eax, bl
 * 0000000140B06407: mov     cr8, rax
 * 0000000140B0640B: xor     r9d, r9d
 * 0000000140B0640E: test    r14d, r14d
 * 0000000140B06411: jz      short loc_140B0642D
 * 0000000140B06413: mov     rax, [r8+460h]
 * 0000000140B0641A: lea     rcx, [rbp+0A70h+var_6C8]
 * 0000000140B06421: call    KeGuardDispatchICall
 * 0000000140B06426: mov     r8, [rbp+0A70h+var_AF0]
 * 0000000140B0642A: xor     r9d, r9d
 * 0000000140B0642D: add     dword ptr [r8+828h], 14000h
 * 0000000140B06438: jmp     loc_140B062EB
 * 0000000140B0643D: cmp     [r8+828h], eax
 * 0000000140B06444: jge     loc_140B05CE0
 * 0000000140B0644A: mov     rbx, [rsp+0B70h+var_B18]
 * 0000000140B0644F: xor     r14d, r14d
 * 0000000140B06452: jmp     loc_140B05CD7
 * 0000000140B06457: mov     [r8+824h], r12d
 * 0000000140B0645E: jmp     loc_140AFC39B
 * 0000000140B06463: mov     ebx, 0Ch
 * 0000000140B06468: xor     r11d, r11d
 * 0000000140B0646B: cmp     [rsi+824h], r11d
 * 0000000140B06472: jnz     short loc_140B06491
 * 0000000140B06474: cmp     r10d, ebx
 * 0000000140B06477: jnz     loc_140B069B2
 * 0000000140B0647D: cmp     [rsi+980h], r11
 * 0000000140B06484: jnz     loc_140B0662F
 * 0000000140B0648A: mov     [rsi+824h], r11d
 * 0000000140B06491: mov     r12d, 1
 * 0000000140B06497: mov     rbx, [rsp+0B70h+var_B20]
 * 0000000140B0649C: mov     r8d, [rsi+824h]
 * 0000000140B064A3: mov     r9, [rbx+8]
 * 0000000140B064A7: mov     ecx, [rbx+10h]
 * 0000000140B064AA: lea     rax, [r8+r8*2]
 * 0000000140B064AE: mov     [rbp+0A70h+var_AF0], r9
 * 0000000140B064B2: lea     r14, [r9+rax*4]
 * 0000000140B064B6: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140B064C0: mul     rcx
 * 0000000140B064C3: mov     [rbp+0A70h+var_AB0], r14
 * 0000000140B064C7: shr     rdx, 3
 * 0000000140B064CB: lea     rax, [rdx+rdx*2]
 * 0000000140B064CF: lea     r15, [r9+rax*4]
 * 0000000140B064D3: mov     [rsp+0B70h+var_B18], r15
 * 0000000140B064D8: lea     r15, [rbx+30h]
 * 0000000140B064DC: lea     r15, [r15+r8*4]
 * 0000000140B064E0: mov     [rbp+0A70h+var_AE8], r15
 * 0000000140B064E4: cmp     r14, [rsp+0B70h+var_B18]
 * 0000000140B064E9: jz      loc_140B070B7
 * 0000000140B064EF: mov     rdi, [rsp+0B70h+var_B18]
 * 0000000140B064F4: cmp     [r15], r11d
 * 0000000140B064F7: jl      loc_140B07052
 * 0000000140B064FD: mov     edx, [r14]
 * 0000000140B06500: mov     r13, [rbx+20h]
 * 0000000140B06504: mov     r12d, [r14+4]
 * 0000000140B06508: add     r13, rdx
 * 0000000140B0650B: sub     r12d, edx
 * 0000000140B0650E: mov     [rsp+0B70h+var_AF8], r13
 * 0000000140B06513: cmp     r10d, 2Bh ; '+'
 * 0000000140B06517: jz      loc_140B06C37
 * 0000000140B0651D: add     [rsi+828h], r12d
 * 0000000140B06524: mov     r8, r13
 * 0000000140B06527: mov     r10d, [rsi+814h]
 * 0000000140B0652E: mov     rax, r13
 * 0000000140B06531: mov     r11, [rsi+818h]
 * 0000000140B06538: mov     ecx, r12d
 * 0000000140B0653B: add     rcx, r13
 * 0000000140B0653E: cmp     r13, rcx
 * 0000000140B06541: jnb     short loc_140B06553
 * 0000000140B06543: mov     edx, 40h ; '@'
 * 0000000140B06548: prefetchnta byte ptr [rax]
 * 0000000140B0654B: add     rax, rdx
 * 0000000140B0654E: cmp     rax, rcx
 * 0000000140B06551: jb      short loc_140B06548
 * 0000000140B06553: mov     r9d, r12d
 * 0000000140B06556: mov     rbx, r11
 * 0000000140B06559: shr     r9d, 7
 * 0000000140B0655D: test    r9d, r9d
 * 0000000140B06560: jz      short loc_140B065D6
 * 0000000140B06562: mov     edi, 1
 * 0000000140B06567: mov     rsi, 7010008004002001h
 * 0000000140B06571: mov     r15d, 0FFFFFFFFh
 * 0000000140B06577: mov     eax, 8
 * 0000000140B0657C: xor     rbx, [r8]
 * 0000000140B0657F: mov     ecx, r10d
 * 0000000140B06582: rol     rbx, cl
 * 0000000140B06585: xor     rbx, [r8+8]
 * 0000000140B06589: add     r8, 10h
 * 0000000140B0658D: rol     rbx, cl
 * 0000000140B06590: sub     rax, rdi
 * 0000000140B06593: jnz     short loc_140B0657C
 * 0000000140B06595: mov     rcx, r8
 * 0000000140B06598: sub     rcx, r13
 * 0000000140B0659B: xor     rcx, r11
 * 0000000140B0659E: mov     rax, rcx
 * 0000000140B065A1: rol     rax, 11h
 * 0000000140B065A5: xor     rcx, rax
 * 0000000140B065A8: mov     rax, rsi
 * 0000000140B065AB: mul     rcx
 * 0000000140B065AE: xor     r10d, edx
 * 0000000140B065B1: mov     [rbp+0A70h+var_550], rdx
 * 0000000140B065B8: xor     r10d, eax
 * 0000000140B065BB: and     r10d, 3Fh
 * 0000000140B065BF: cmovz   r10d, edi
 * 0000000140B065C3: add     r9d, r15d
 * 0000000140B065C6: jnz     short loc_140B06577
 * 0000000140B065C8: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B065CD: mov     r15, [rbp+0A70h+var_AE8]
 * 0000000140B065D1: mov     rdi, [rsp+0B70h+var_B18]
 * 0000000140B065D6: mov     edx, r12d
 * 0000000140B065D9: mov     r9d, 1
 * 0000000140B065DF: and     edx, 7Fh
 * 0000000140B065E2: cmp     edx, 8
 * 0000000140B065E5: jb      short loc_140B06602
 * 0000000140B065E7: mov     eax, edx
 * 0000000140B065E9: shr     rax, 3
 * 0000000140B065ED: xor     rbx, [r8]
 * 0000000140B065F0: mov     ecx, r10d
 * 0000000140B065F3: rol     rbx, cl
 * 0000000140B065F6: add     r8, 8
 * 0000000140B065FA: add     edx, 0FFFFFFF8h
 * 0000000140B065FD: sub     rax, r9
 * 0000000140B06600: jnz     short loc_140B065ED
 * 0000000140B06602: xor     r11d, r11d
 * 0000000140B06605: test    edx, edx
 * 0000000140B06607: jz      short loc_140B06627
 * 0000000140B06609: mov     edi, 0FFFFFFFFh
 * 0000000140B0660E: movzx   eax, byte ptr [r8]
 * 0000000140B06612: mov     ecx, r10d
 * 0000000140B06615: xor     rbx, rax
 * 0000000140B06618: add     r8, r9
 * 0000000140B0661B: rol     rbx, cl
 * 0000000140B0661E: add     edx, edi
 * 0000000140B06620: jnz     short loc_140B0660E
 * 0000000140B06622: mov     rdi, [rsp+0B70h+var_B18]
 * 0000000140B06627: mov     rax, rbx
 * 0000000140B0662A: jmp     loc_140B06C20
 * 0000000140B0662F: mov     eax, [rsi+994h]
 * 0000000140B06635: lea     ecx, ds:0[rax*8]
 * 0000000140B0663C: xor     ecx, eax
 * 0000000140B0663E: and     ecx, 20h
 * 0000000140B06641: xor     ecx, eax
 * 0000000140B06643: mov     [rsi+994h], ecx
 * 0000000140B06649: test    cl, 4
 * 0000000140B0664C: jz      loc_140B06722
 * 0000000140B06652: mov     ecx, [r13+8]
 * 0000000140B06656: mov     r12d, 1
 * 0000000140B0665C: mov     r14d, [r13+10h]
 * 0000000140B06660: and     ecx, 0FFFh
 * 0000000140B06666: mov     rbx, [r13+8]
 * 0000000140B0666A: add     r14, 0FFFh
 * 0000000140B06671: add     r14, rcx
 * 0000000140B06674: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140B0667B: shr     r14, 0Ch
 * 0000000140B0667F: test    r14, r14
 * 0000000140B06682: jz      loc_140B06497
 * 0000000140B06688: mov     rdi, 0B3B74BDEE4453415h
 * 0000000140B06692: mov     rax, [rsi+2B0h]
 * 0000000140B06699: mov     rcx, rbx
 * 0000000140B0669C: sub     r14, r12
 * 0000000140B0669F: call    KeGuardDispatchICall
 * 0000000140B066A4: xor     r11d, r11d
 * 0000000140B066A7: test    al, al
 * 0000000140B066A9: jz      short loc_140B066F9
 * 0000000140B066AB: cmp     [rsi+8F8h], r11d
 * 0000000140B066B2: jnz     short loc_140B066F9
 * 0000000140B066B4: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B066BE: xor     edx, edx
 * 0000000140B066C0: add     rax, rsi
 * 0000000140B066C3: mov     rcx, rsi
 * 0000000140B066C6: mov     [rsi+900h], rax
 * 0000000140B066CD: lea     rax, [rdi+r13]
 * 0000000140B066D1: mov     [rsi+908h], rax
 * 0000000140B066D8: movsxd  rax, dword ptr [r13+0]
 * 0000000140B066DC: mov     [rsi+910h], rax
 * 0000000140B066E3: mov     [rsi+918h], rbx
 * 0000000140B066EA: mov     [rsi+8F8h], r12d
 * 0000000140B066F1: call    $$ba
 * 0000000140B066F6: xor     r11d, r11d
 * 0000000140B066F9: add     dword ptr [rsi+828h], 100h
 * 0000000140B06703: add     rbx, 1000h
 * 0000000140B0670A: test    r14, r14
 * 0000000140B0670D: jnz     short loc_140B06692
 * 0000000140B0670F: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B06716: mov     r10d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0671D: jmp     loc_140B06497
 * 0000000140B06722: mov     r11, [r13+8]
 * 0000000140B06726: mov     r8d, [r13+10h]
 * 0000000140B0672A: mov     r9, r11
 * 0000000140B0672D: add     [rsi+828h], r8d
 * 0000000140B06734: mov     rax, r11
 * 0000000140B06737: mov     r14d, [rsi+814h]
 * 0000000140B0673E: mov     r15, [rsi+818h]
 * 0000000140B06745: lea     rcx, [r11+r8]
 * 0000000140B06749: cmp     r11, rcx
 * 0000000140B0674C: jnb     short loc_140B0675E
 * 0000000140B0674E: mov     edx, 40h ; '@'
 * 0000000140B06753: prefetchnta byte ptr [rax]
 * 0000000140B06756: add     rax, rdx
 * 0000000140B06759: cmp     rax, rcx
 * 0000000140B0675C: jb      short loc_140B06753
 * 0000000140B0675E: mov     r10d, r8d
 * 0000000140B06761: mov     rbx, r15
 * 0000000140B06764: shr     r10d, 7
 * 0000000140B06768: mov     r12d, 1
 * 0000000140B0676E: test    r10d, r10d
 * 0000000140B06771: jz      short loc_140B067E0
 * 0000000140B06773: mov     rdi, 7010008004002001h
 * 0000000140B0677D: mov     eax, 8
 * 0000000140B06782: xor     rbx, [r9]
 * 0000000140B06785: mov     ecx, r14d
 * 0000000140B06788: rol     rbx, cl
 * 0000000140B0678B: xor     rbx, [r9+8]
 * 0000000140B0678F: add     r9, 10h
 * 0000000140B06793: rol     rbx, cl
 * 0000000140B06796: sub     rax, r12
 * 0000000140B06799: jnz     short loc_140B06782
 * 0000000140B0679B: mov     rcx, r9
 * 0000000140B0679E: sub     rcx, r11
 * 0000000140B067A1: xor     rcx, r15
 * 0000000140B067A4: mov     rax, rcx
 * 0000000140B067A7: rol     rax, 11h
 * 0000000140B067AB: xor     rcx, rax
 * 0000000140B067AE: mov     rax, rdi
 * 0000000140B067B1: mul     rcx
 * 0000000140B067B4: mov     [rbp+0A70h+var_560], rdx
 * 0000000140B067BB: xor     edx, eax
 * 0000000140B067BD: xor     r14d, edx
 * 0000000140B067C0: mov     edx, 0FFFFFFFFh
 * 0000000140B067C5: and     r14d, 3Fh
 * 0000000140B067C9: cmovz   r14d, r12d
 * 0000000140B067CD: add     r10d, edx
 * 0000000140B067D0: jnz     short loc_140B0677D
 * 0000000140B067D2: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B067D7: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B067DE: jmp     short loc_140B067E5
 * 0000000140B067E0: mov     edx, 0FFFFFFFFh
 * 0000000140B067E5: and     r8d, 7Fh
 * 0000000140B067E9: cmp     r8d, 8
 * 0000000140B067ED: jb      short loc_140B0680C
 * 0000000140B067EF: mov     eax, r8d
 * 0000000140B067F2: shr     rax, 3
 * 0000000140B067F6: xor     rbx, [r9]
 * 0000000140B067F9: mov     ecx, r14d
 * 0000000140B067FC: rol     rbx, cl
 * 0000000140B067FF: add     r9, 8
 * 0000000140B06803: add     r8d, 0FFFFFFF8h
 * 0000000140B06807: sub     rax, r12
 * 0000000140B0680A: jnz     short loc_140B067F6
 * 0000000140B0680C: xor     r11d, r11d
 * 0000000140B0680F: test    r8d, r8d
 * 0000000140B06812: jz      short loc_140B06829
 * 0000000140B06814: movzx   eax, byte ptr [r9]
 * 0000000140B06818: mov     ecx, r14d
 * 0000000140B0681B: xor     rbx, rax
 * 0000000140B0681E: add     r9, r12
 * 0000000140B06821: rol     rbx, cl
 * 0000000140B06824: add     r8d, edx
 * 0000000140B06827: jnz     short loc_140B06814
 * 0000000140B06829: mov     rax, rbx
 * 0000000140B0682C: jmp     short loc_140B06830
 * 0000000140B0682E: xor     ebx, eax
 * 0000000140B06830: shr     rax, 1Fh
 * 0000000140B06834: test    rax, rax
 * 0000000140B06837: jnz     short loc_140B0682E
 * 0000000140B06839: mov     r8d, [r13+14h]
 * 0000000140B0683D: btr     ebx, 1Fh
 * 0000000140B06841: cmp     ebx, r8d
 * 0000000140B06844: jz      loc_140B06716
 * 0000000140B0684A: mov     ecx, [r13+10h]
 * 0000000140B0684E: mov     rdx, [r13+8]
 * 0000000140B06852: test    rcx, rcx
 * 0000000140B06855: jz      loc_140B068F8
 * 0000000140B0685B: mov     eax, [rsi+994h]
 * 0000000140B06861: mov     r9d, 40h ; '@'
 * 0000000140B06867: test    r9b, al
 * 0000000140B0686A: jz      loc_140B068F8
 * 0000000140B06870: mov     r12, cr8
 * 0000000140B06874: lea     eax, [r9-3Eh]
 * 0000000140B06878: mov     cr8, rax
 * 0000000140B0687C: mov     r14, rdx
 * 0000000140B0687F: lea     rax, [rcx-1]
 * 0000000140B06883: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140B0688A: add     rax, rdx
 * 0000000140B0688D: or      rax, 0FFFh
 * 0000000140B06893: mov     [rsp+0B70h+var_AF8], rax
 * 0000000140B06898: lea     r13, [r14-1]
 * 0000000140B0689C: movzx   r15d, r12b
 * 0000000140B068A0: mov     rax, [rsi+468h]
 * 0000000140B068A7: xor     edx, edx
 * 0000000140B068A9: mov     rcx, r14
 * 0000000140B068AC: call    KeGuardDispatchICall
 * 0000000140B068B1: cmp     eax, 0C000022Dh
 * 0000000140B068B6: jnz     short loc_140B068E0
 * 0000000140B068B8: mov     eax, 1
 * 0000000140B068BD: cmp     r12b, al
 * 0000000140B068C0: ja      loc_140B06989
 * 0000000140B068C6: movzx   r15d, r12b
 * 0000000140B068CA: mov     cr8, r15
 * 0000000140B068CE: mov     al, [r14]
 * 0000000140B068D1: mov     rax, cr8
 * 0000000140B068D5: mov     eax, 2
 * 0000000140B068DA: mov     cr8, rax
 * 0000000140B068DE: jmp     short loc_140B068A0
 * 0000000140B068E0: xor     r11d, r11d
 * 0000000140B068E3: test    eax, eax
 * 0000000140B068E5: jns     loc_140B0698C
 * 0000000140B068EB: mov     cr8, r15
 * 0000000140B068EF: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B068F4: mov     r8d, [r13+14h]
 * 0000000140B068F8: cmp     [rsi+8F8h], r11d
 * 0000000140B068FF: jnz     loc_140B069A6
 * 0000000140B06905: mov     eax, ebx
 * 0000000140B06907: mov     r12d, 1
 * 0000000140B0690D: mov     ecx, r8d
 * 0000000140B06910: xor     rcx, rax
 * 0000000140B06913: mov     rax, [rsi+588h]
 * 0000000140B0691A: mov     [rax+18h], rcx
 * 0000000140B0691E: mov     rcx, [r13+8]
 * 0000000140B06922: cmp     [rsi+8F8h], r11d
 * 0000000140B06929: jnz     loc_140B06716
 * 0000000140B0692F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B06939: add     rax, rsi
 * 0000000140B0693C: mov     [rsi+900h], rax
 * 0000000140B06943: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B0694D: add     rax, r13
 * 0000000140B06950: mov     [rsi+908h], rax
 * 0000000140B06957: movsxd  rax, dword ptr [r13+0]
 * 0000000140B0695B: mov     [rsi+910h], rax
 * 0000000140B06962: xor     edx, edx
 * 0000000140B06964: mov     [rsi+918h], rcx
 * 0000000140B0696B: mov     rcx, rsi
 * 0000000140B0696E: mov     [rsi+8F8h], r12d
 * 0000000140B06975: call    $$ba
 * 0000000140B0697A: mov     r10d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B06981: xor     r11d, r11d
 * 0000000140B06984: jmp     loc_140B06497
 * 0000000140B06989: xor     r11d, r11d
 * 0000000140B0698C: mov     eax, 1000h
 * 0000000140B06991: add     r14, rax
 * 0000000140B06994: add     r13, rax
 * 0000000140B06997: cmp     r13, [rsp+0B70h+var_AF8]
 * 0000000140B0699C: jnz     loc_140B0689C
 * 0000000140B069A2: mov     cr8, r15
 * 0000000140B069A6: mov     r10d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B069AD: jmp     loc_140B06491
 * 0000000140B069B2: mov     r14, [r13+8]
 * 0000000140B069B6: mov     r8d, [r13+10h]
 * 0000000140B069BA: mov     r9, r14
 * 0000000140B069BD: add     [rsi+828h], r8d
 * 0000000140B069C4: mov     rax, r14
 * 0000000140B069C7: mov     r11d, [rsi+814h]
 * 0000000140B069CE: mov     r15, [rsi+818h]
 * 0000000140B069D5: lea     rcx, [r14+r8]
 * 0000000140B069D9: cmp     r14, rcx
 * 0000000140B069DC: jnb     short loc_140B069EE
 * 0000000140B069DE: mov     edx, 40h ; '@'
 * 0000000140B069E3: prefetchnta byte ptr [rax]
 * 0000000140B069E6: add     rax, rdx
 * 0000000140B069E9: cmp     rax, rcx
 * 0000000140B069EC: jb      short loc_140B069E3
 * 0000000140B069EE: mov     r10d, r8d
 * 0000000140B069F1: mov     rbx, r15
 * 0000000140B069F4: shr     r10d, 7
 * 0000000140B069F8: mov     r12d, 1
 * 0000000140B069FE: mov     r13d, 0FFFFFFFFh
 * 0000000140B06A04: test    r10d, r10d
 * 0000000140B06A07: jz      short loc_140B06A70
 * 0000000140B06A09: mov     rdi, 7010008004002001h
 * 0000000140B06A13: mov     eax, 8
 * 0000000140B06A18: xor     rbx, [r9]
 * 0000000140B06A1B: mov     ecx, r11d
 * 0000000140B06A1E: rol     rbx, cl
 * 0000000140B06A21: xor     rbx, [r9+8]
 * 0000000140B06A25: add     r9, 10h
 * 0000000140B06A29: rol     rbx, cl
 * 0000000140B06A2C: sub     rax, r12
 * 0000000140B06A2F: jnz     short loc_140B06A18
 * 0000000140B06A31: mov     rcx, r9
 * 0000000140B06A34: sub     rcx, r14
 * 0000000140B06A37: xor     rcx, r15
 * 0000000140B06A3A: mov     rax, rcx
 * 0000000140B06A3D: rol     rax, 11h
 * 0000000140B06A41: xor     rcx, rax
 * 0000000140B06A44: mov     rax, rdi
 * 0000000140B06A47: mul     rcx
 * 0000000140B06A4A: xor     r11d, edx
 * 0000000140B06A4D: mov     [rbp+0A70h+var_558], rdx
 * 0000000140B06A54: xor     r11d, eax
 * 0000000140B06A57: and     r11d, 3Fh
 * 0000000140B06A5B: cmovz   r11d, r12d
 * 0000000140B06A5F: add     r10d, r13d
 * 0000000140B06A62: jnz     short loc_140B06A13
 * 0000000140B06A64: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B06A69: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B06A70: and     r8d, 7Fh
 * 0000000140B06A74: cmp     r8d, 8
 * 0000000140B06A78: jb      short loc_140B06A97
 * 0000000140B06A7A: mov     eax, r8d
 * 0000000140B06A7D: shr     rax, 3
 * 0000000140B06A81: xor     rbx, [r9]
 * 0000000140B06A84: mov     ecx, r11d
 * 0000000140B06A87: rol     rbx, cl
 * 0000000140B06A8A: add     r9, 8
 * 0000000140B06A8E: add     r8d, 0FFFFFFF8h
 * 0000000140B06A92: sub     rax, r12
 * 0000000140B06A95: jnz     short loc_140B06A81
 * 0000000140B06A97: test    r8d, r8d
 * 0000000140B06A9A: jz      short loc_140B06AB1
 * 0000000140B06A9C: movzx   eax, byte ptr [r9]
 * 0000000140B06AA0: mov     ecx, r11d
 * 0000000140B06AA3: xor     rbx, rax
 * 0000000140B06AA6: add     r9, r12
 * 0000000140B06AA9: rol     rbx, cl
 * 0000000140B06AAC: add     r8d, r13d
 * 0000000140B06AAF: jnz     short loc_140B06A9C
 * 0000000140B06AB1: mov     rax, rbx
 * 0000000140B06AB4: shr     rax, 1Fh
 * 0000000140B06AB8: xor     r11d, r11d
 * 0000000140B06ABB: jmp     short loc_140B06AC3
 * 0000000140B06ABD: xor     ebx, eax
 * 0000000140B06ABF: shr     rax, 1Fh
 * 0000000140B06AC3: test    rax, rax
 * 0000000140B06AC6: jnz     short loc_140B06ABD
 * 0000000140B06AC8: mov     r10, [rsp+0B70h+var_B20]
 * 0000000140B06ACD: btr     ebx, 1Fh
 * 0000000140B06AD1: mov     r13d, r11d
 * 0000000140B06AD4: cmp     ebx, [r10+14h]
 * 0000000140B06AD8: jz      loc_140B06716
 * 0000000140B06ADE: cmp     [r10], r11d
 * 0000000140B06AE1: jnz     short loc_140B06AEB
 * 0000000140B06AE3: cmp     [r10+18h], r11d
 * 0000000140B06AE7: cmovnz  r13d, r12d
 * 0000000140B06AEB: mov     ecx, [r10+10h]
 * 0000000140B06AEF: mov     rdx, [r10+8]
 * 0000000140B06AF3: test    rcx, rcx
 * 0000000140B06AF6: jz      loc_140B06BB6
 * 0000000140B06AFC: mov     eax, [rsi+994h]
 * 0000000140B06B02: mov     r8d, 40h ; '@'
 * 0000000140B06B08: test    r8b, al
 * 0000000140B06B0B: jz      loc_140B06BB6
 * 0000000140B06B11: mov     r12, cr8
 * 0000000140B06B15: lea     eax, [r8-3Eh]
 * 0000000140B06B19: mov     cr8, rax
 * 0000000140B06B1D: mov     r14, rdx
 * 0000000140B06B20: lea     rax, [rcx-1]
 * 0000000140B06B24: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140B06B2B: add     rax, rdx
 * 0000000140B06B2E: or      rax, 0FFFh
 * 0000000140B06B34: mov     [rsp+0B70h+var_AF8], rax
 * 0000000140B06B39: lea     rax, [r14-1]
 * 0000000140B06B3D: mov     [rsp+0B70h+var_B18], rax
 * 0000000140B06B42: movzx   r15d, r12b
 * 0000000140B06B46: mov     rax, [rsi+468h]
 * 0000000140B06B4D: xor     edx, edx
 * 0000000140B06B4F: mov     rcx, r14
 * 0000000140B06B52: call    KeGuardDispatchICall
 * 0000000140B06B57: xor     r11d, r11d
 * 0000000140B06B5A: cmp     eax, 0C000022Dh
 * 0000000140B06B5F: jnz     short loc_140B06B88
 * 0000000140B06B61: test    r13d, r13d
 * 0000000140B06B64: jnz     short loc_140B06BAD
 * 0000000140B06B66: lea     eax, [r11+1]
 * 0000000140B06B6A: cmp     r12b, al
 * 0000000140B06B6D: ja      short loc_140B06B8C
 * 0000000140B06B6F: movzx   r15d, r12b
 * 0000000140B06B73: mov     cr8, r15
 * 0000000140B06B77: mov     al, [r14]
 * 0000000140B06B7A: mov     rax, cr8
 * 0000000140B06B7E: lea     eax, [r11+2]
 * 0000000140B06B82: mov     cr8, rax
 * 0000000140B06B86: jmp     short loc_140B06B46
 * 0000000140B06B88: test    eax, eax
 * 0000000140B06B8A: js      short loc_140B06BAD
 * 0000000140B06B8C: mov     rax, [rsp+0B70h+var_B18]
 * 0000000140B06B91: mov     ecx, 1000h
 * 0000000140B06B96: add     rax, rcx
 * 0000000140B06B99: add     r14, rcx
 * 0000000140B06B9C: mov     [rsp+0B70h+var_B18], rax
 * 0000000140B06BA1: cmp     rax, [rsp+0B70h+var_AF8]
 * 0000000140B06BA6: jnz     short loc_140B06B42
 * 0000000140B06BA8: jmp     loc_140B069A2
 * 0000000140B06BAD: mov     cr8, r15
 * 0000000140B06BB1: mov     r10, [rsp+0B70h+var_B20]
 * 0000000140B06BB6: mov     eax, [r10+14h]
 * 0000000140B06BBA: cmp     [rsi+8F8h], r11d
 * 0000000140B06BC1: jnz     loc_140B069A6
 * 0000000140B06BC7: mov     ecx, ebx
 * 0000000140B06BC9: mov     r12d, 1
 * 0000000140B06BCF: xor     rcx, rax
 * 0000000140B06BD2: mov     rax, [rsi+588h]
 * 0000000140B06BD9: mov     [rax+18h], rcx
 * 0000000140B06BDD: mov     rcx, [r10+8]
 * 0000000140B06BE1: cmp     [rsi+8F8h], r11d
 * 0000000140B06BE8: jnz     loc_140B06716
 * 0000000140B06BEE: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B06BF8: add     rax, rsi
 * 0000000140B06BFB: mov     [rsi+900h], rax
 * 0000000140B06C02: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B06C0C: add     rax, r10
 * 0000000140B06C0F: mov     [rsi+908h], rax
 * 0000000140B06C16: movsxd  rax, dword ptr [r10]
 * 0000000140B06C19: jmp     loc_140B0695B
 * 0000000140B06C1E: xor     ebx, eax
 * 0000000140B06C20: shr     rax, 1Fh
 * 0000000140B06C24: test    rax, rax
 * 0000000140B06C27: jnz     short loc_140B06C1E
 * 0000000140B06C29: btr     ebx, 1Fh
 * 0000000140B06C2D: mov     [rsp+0B70h+var_B08], rbx
 * 0000000140B06C32: jmp     loc_140B06EDA
 * 0000000140B06C37: mov     r8d, r12d
 * 0000000140B06C3A: mov     rdx, r13
 * 0000000140B06C3D: mov     rcx, rsi
 * 0000000140B06C40: call    sub_140B12A74
 * 0000000140B06C45: mov     ebx, eax
 * 0000000140B06C47: xor     r11d, r11d
 * 0000000140B06C4A: lea     eax, ds:0[r12*8]
 * 0000000140B06C52: mov     [rsp+0B70h+var_B08], rbx
 * 0000000140B06C57: add     [rsi+828h], eax
 * 0000000140B06C5D: test    dword ptr [rsi+994h], 800h
 * 0000000140B06C67: jz      loc_140B06EDA
 * 0000000140B06C6D: lea     r15, [r13-6]
 * 0000000140B06C71: lea     r14, [r15+5]
 * 0000000140B06C75: mov     al, [r14]
 * 0000000140B06C78: cmp     byte ptr [r15], 4Ch ; 'L'
 * 0000000140B06C7C: jnz     loc_140B06E73
 * 0000000140B06C82: cmp     byte ptr [r15+1], 87h
 * 0000000140B06C87: jnz     loc_140B06E73
 * 0000000140B06C8D: cmp     [r15+2], r11b
 * 0000000140B06C91: jnz     loc_140B06E73
 * 0000000140B06C97: cmp     byte ptr [r15+3], 98h
 * 0000000140B06C9C: jnz     loc_140B06E73
 * 0000000140B06CA2: cmp     byte ptr [r15+4], 0C3h
 * 0000000140B06CA7: jnz     loc_140B06E73
 * 0000000140B06CAD: cmp     al, 90h
 * 0000000140B06CAF: jz      short loc_140B06CB9
 * 0000000140B06CB1: cmp     al, 0F1h
 * 0000000140B06CB3: jnz     loc_140B06E73
 * 0000000140B06CB9: mov     rcx, [rsi+4D8h]
 * 0000000140B06CC0: cli
 * 0000000140B06CC1: mov     eax, [rsi+990h]
 * 0000000140B06CC7: shr     eax, 0Ah
 * 0000000140B06CCA: and     eax, 1Fh
 * 0000000140B06CCD: lock bts [rcx], eax
 * 0000000140B06CD1: jnb     short loc_140B06CD8
 * 0000000140B06CD3: sti
 * 0000000140B06CD4: pause
 * 0000000140B06CD6: jmp     short loc_140B06CC0
 * 0000000140B06CD8: mov     rdx, [rsi+8E0h]
 * 0000000140B06CDF: mov     r8d, 26h ; '&'
 * 0000000140B06CE5: mov     ecx, 130h
 * 0000000140B06CEA: mov     rax, rdx
 * 0000000140B06CED: lea     r9d, [r8-25h]
 * 0000000140B06CF1: mov     [rax], r11
 * 0000000140B06CF4: add     ecx, 0FFFFFFF8h
 * 0000000140B06CF7: add     rax, 8
 * 0000000140B06CFB: sub     r8, r9
 * 0000000140B06CFE: jnz     short loc_140B06CF1
 * 0000000140B06D00: test    ecx, ecx
 * 0000000140B06D02: jz      short loc_140B06D15
 * 0000000140B06D04: mov     r8d, 0FFFFFFFFh
 * 0000000140B06D0A: mov     [rax], r11b
 * 0000000140B06D0D: add     rax, r9
 * 0000000140B06D10: add     ecx, r8d
 * 0000000140B06D13: jnz     short loc_140B06D0A
 * 0000000140B06D15: movups  xmm0, xmmword ptr [rsi+848h]
 * 0000000140B06D1C: mov     eax, 12Fh
 * 0000000140B06D21: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140B06D26: movups  xmm1, xmmword ptr [rsi+858h]
 * 0000000140B06D2D: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140B06D32: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140B06D39: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140B06D41: mov     word ptr [rbp+0A70h+var_820], ax
 * 0000000140B06D48: lea     rax, [rsi+88Ch]
 * 0000000140B06D4F: mov     [rbp+252h], rdx
 * 0000000140B06D56: mov     rcx, rax
 * 0000000140B06D59: mov     [rdx+10h], ax
 * 0000000140B06D5D: shr     rcx, 10h
 * 0000000140B06D61: mov     [rbp+0A70h+var_548], rax
 * 0000000140B06D68: shr     rax, 20h
 * 0000000140B06D6C: mov     [rdx+16h], cx
 * 0000000140B06D70: mov     [rdx+18h], eax
 * 0000000140B06D73: sidt    fword ptr [rbp+0A70h+var_700]
 * 0000000140B06D7A: lidt    fword ptr [rbp+0A70h+var_820]
 * 0000000140B06D81: mov     byte ptr [r14], 0F1h
 * 0000000140B06D85: mov     al, [r14]
 * 0000000140B06D88: cmp     al, 0F1h
 * 0000000140B06D8A: jnz     loc_140B06E2E
 * 0000000140B06D90: test    dword ptr [rsi+994h], 20000h
 * 0000000140B06D9A: jnz     short loc_140B06DDE
 * 0000000140B06D9C: mov     rdx, gs:20h
 * 0000000140B06DA5: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140B06DAF: mov     rax, [rsi+4B8h]
 * 0000000140B06DB6: add     rcx, rsi
 * 0000000140B06DB9: mov     [rax], rcx
 * 0000000140B06DBC: mov     rax, [rsi+4C0h]
 * 0000000140B06DC3: mov     [rax], rdx
 * 0000000140B06DC6: mov     rax, [rsi+4C8h]
 * 0000000140B06DCD: mov     [rax], r13
 * 0000000140B06DD0: mov     rax, [rsi+4D0h]
 * 0000000140B06DD7: mov     qword ptr [rax], 113h
 * 0000000140B06DDE: mov     rax, r14
 * 0000000140B06DE1: call    KeGuardDispatchICall
 * 0000000140B06DE6: xor     r11d, r11d
 * 0000000140B06DE9: test    dword ptr [rsi+994h], 20000h
 * 0000000140B06DF3: jnz     short loc_140B06E27
 * 0000000140B06DF5: mov     rax, [rsi+4B8h]
 * 0000000140B06DFC: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140B06E06: mov     [rax], rcx
 * 0000000140B06E09: mov     rax, [rsi+4C0h]
 * 0000000140B06E10: mov     [rax], r11
 * 0000000140B06E13: mov     rax, [rsi+4C8h]
 * 0000000140B06E1A: mov     [rax], r11
 * 0000000140B06E1D: mov     rax, [rsi+4D0h]
 * 0000000140B06E24: mov     [rax], r11
 * 0000000140B06E27: mov     al, [r14]
 * 0000000140B06E2A: cmp     al, 0F1h
 * 0000000140B06E2C: jz      short loc_140B06E33
 * 0000000140B06E2E: mov     r9d, r11d
 * 0000000140B06E31: jmp     short loc_140B06E46
 * 0000000140B06E33: mov     byte ptr [r14], 90h
 * 0000000140B06E37: mov     r9d, 1
 * 0000000140B06E3D: mov     al, [r14]
 * 0000000140B06E40: cmp     al, 90h
 * 0000000140B06E42: cmovnz  r9d, r11d
 * 0000000140B06E46: lidt    fword ptr [rbp+0A70h+var_700]
 * 0000000140B06E4D: mov     ecx, [rsi+990h]
 * 0000000140B06E53: mov     edx, 1
 * 0000000140B06E58: mov     r8, [rsi+4D8h]
 * 0000000140B06E5F: shr     ecx, 0Ah
 * 0000000140B06E62: and     ecx, 1Fh
 * 0000000140B06E65: shl     edx, cl
 * 0000000140B06E67: not     edx
 * 0000000140B06E69: lock and [r8], edx
 * 0000000140B06E6D: sti
 * 0000000140B06E6E: test    r9d, r9d
 * 0000000140B06E71: jnz     short loc_140B06ED2
 * 0000000140B06E73: cmp     [rsi+8F8h], r11d
 * 0000000140B06E7A: jnz     short loc_140B06ED2
 * 0000000140B06E7C: mov     rcx, [rsp+0B70h+var_B20]
 * 0000000140B06E81: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B06E8B: add     rax, rsi
 * 0000000140B06E8E: xor     edx, edx
 * 0000000140B06E90: mov     [rsi+900h], rax
 * 0000000140B06E97: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B06EA1: add     rax, rcx
 * 0000000140B06EA4: mov     [rsi+908h], rax
 * 0000000140B06EAB: movsxd  rax, dword ptr [rcx]
 * 0000000140B06EAE: mov     rcx, rsi
 * 0000000140B06EB1: mov     [rsi+910h], rax
 * 0000000140B06EB8: mov     eax, 1
 * 0000000140B06EBD: mov     [rsi+918h], r15
 * 0000000140B06EC4: mov     [rsi+8F8h], eax
 * 0000000140B06ECA: call    $$ba
 * 0000000140B06ECF: xor     r11d, r11d
 * 0000000140B06ED2: mov     r14, [rbp+0A70h+var_AB0]
 * 0000000140B06ED6: mov     r15, [rbp+0A70h+var_AE8]
 * 0000000140B06EDA: mov     ecx, [r15]
 * 0000000140B06EDD: mov     eax, ecx
 * 0000000140B06EDF: btr     eax, 1Fh
 * 0000000140B06EE3: cmp     ebx, eax
 * 0000000140B06EE5: jz      loc_140B07047
 * 0000000140B06EEB: mov     edx, r12d
 * 0000000140B06EEE: test    r12d, r12d
 * 0000000140B06EF1: jz      loc_140B06F96
 * 0000000140B06EF7: mov     eax, [rsi+994h]
 * 0000000140B06EFD: mov     r8d, 40h ; '@'
 * 0000000140B06F03: test    r8b, al
 * 0000000140B06F06: jz      loc_140B06F96
 * 0000000140B06F0C: mov     r15, cr8
 * 0000000140B06F10: lea     eax, [r8-3Eh]
 * 0000000140B06F14: mov     cr8, rax
 * 0000000140B06F18: mov     rbx, r13
 * 0000000140B06F1B: dec     r13
 * 0000000140B06F1E: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140B06F25: add     r13, rdx
 * 0000000140B06F28: or      r13, 0FFFh
 * 0000000140B06F2F: lea     r12, [rbx-1]
 * 0000000140B06F33: movzx   r14d, r15b
 * 0000000140B06F37: mov     rax, [rsi+468h]
 * 0000000140B06F3E: xor     edx, edx
 * 0000000140B06F40: mov     rcx, rbx
 * 0000000140B06F43: call    KeGuardDispatchICall
 * 0000000140B06F48: cmp     eax, 0C000022Dh
 * 0000000140B06F4D: jnz     short loc_140B06F76
 * 0000000140B06F4F: mov     eax, 1
 * 0000000140B06F54: cmp     r15b, al
 * 0000000140B06F57: ja      loc_140B07024
 * 0000000140B06F5D: movzx   r14d, r15b
 * 0000000140B06F61: mov     cr8, r14
 * 0000000140B06F65: mov     al, [rbx]
 * 0000000140B06F67: mov     rax, cr8
 * 0000000140B06F6B: mov     eax, 2
 * 0000000140B06F70: mov     cr8, rax
 * 0000000140B06F74: jmp     short loc_140B06F37
 * 0000000140B06F76: xor     r11d, r11d
 * 0000000140B06F79: test    eax, eax
 * 0000000140B06F7B: jns     loc_140B07027
 * 0000000140B06F81: mov     cr8, r14
 * 0000000140B06F85: mov     r15, [rbp+0A70h+var_AE8]
 * 0000000140B06F89: mov     rbx, [rsp+0B70h+var_B08]
 * 0000000140B06F8E: mov     r13, [rsp+0B70h+var_AF8]
 * 0000000140B06F93: mov     ecx, [r15]
 * 0000000140B06F96: mov     eax, ecx
 * 0000000140B06F98: btr     eax, 1Fh
 * 0000000140B06F9C: cmp     [rsi+8F8h], r11d
 * 0000000140B06FA3: jnz     loc_140B07043
 * 0000000140B06FA9: mov     ecx, ebx
 * 0000000140B06FAB: mov     r12d, 1
 * 0000000140B06FB1: mov     rbx, [rsp+0B70h+var_B20]
 * 0000000140B06FB6: xor     rcx, rax
 * 0000000140B06FB9: mov     rax, [rsi+588h]
 * 0000000140B06FC0: mov     [rax+18h], rcx
 * 0000000140B06FC4: cmp     [rsi+8F8h], r11d
 * 0000000140B06FCB: jnz     loc_140B070B1
 * 0000000140B06FD1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B06FDB: xor     edx, edx
 * 0000000140B06FDD: add     rax, rsi
 * 0000000140B06FE0: mov     rcx, rsi
 * 0000000140B06FE3: mov     [rsi+900h], rax
 * 0000000140B06FEA: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B06FF4: add     rax, rbx
 * 0000000140B06FF7: mov     [rsi+908h], rax
 * 0000000140B06FFE: movsxd  rax, dword ptr [rbx]
 * 0000000140B07001: mov     [rsi+910h], rax
 * 0000000140B07008: mov     [rsi+918h], r13
 * 0000000140B0700F: mov     [rsi+8F8h], r12d
 * 0000000140B07016: call    $$ba
 * 0000000140B0701B: mov     r14, [rbp+0A70h+var_AB0]
 * 0000000140B0701F: xor     r11d, r11d
 * 0000000140B07022: jmp     short loc_140B07052
 * 0000000140B07024: xor     r11d, r11d
 * 0000000140B07027: mov     eax, 1000h
 * 0000000140B0702C: add     rbx, rax
 * 0000000140B0702F: add     r12, rax
 * 0000000140B07032: cmp     r12, r13
 * 0000000140B07035: jnz     loc_140B06F33
 * 0000000140B0703B: mov     cr8, r14
 * 0000000140B0703F: mov     r15, [rbp+0A70h+var_AE8]
 * 0000000140B07043: mov     r14, [rbp+0A70h+var_AB0]
 * 0000000140B07047: mov     rbx, [rsp+0B70h+var_B20]
 * 0000000140B0704C: mov     r12d, 1
 * 0000000140B07052: add     r15, 4
 * 0000000140B07056: add     r14, 0Ch
 * 0000000140B0705A: mov     [rbp+0A70h+var_AE8], r15
 * 0000000140B0705E: mov     [rbp+0A70h+var_AB0], r14
 * 0000000140B07062: cmp     r14, rdi
 * 0000000140B07065: jnb     short loc_140B07080
 * 0000000140B07067: mov     rax, [rbp+0A70h+var_AB8]
 * 0000000140B0706B: mov     r10d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B07072: mov     eax, [rax]
 * 0000000140B07074: cmp     [rsi+828h], eax
 * 0000000140B0707A: jl      loc_140B064F4
 * 0000000140B07080: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B07087: cmp     r14, [rsp+0B70h+var_B18]
 * 0000000140B0708C: jz      short loc_140B070B7
 * 0000000140B0708E: sub     r14, [rbp+0A70h+var_AF0]
 * 0000000140B07092: mov     rax, 2AAAAAAAAAAAAAABh
 * 0000000140B0709C: imul    r14
 * 0000000140B0709F: sar     rdx, 1
 * 0000000140B070A2: mov     rax, rdx
 * 0000000140B070A5: shr     rax, 3Fh
 * 0000000140B070A9: add     rdx, rax
 * 0000000140B070AC: jmp     loc_140B01497
 * 0000000140B070B1: mov     r14, [rbp+0A70h+var_AB0]
 * 0000000140B070B5: jmp     short loc_140B07052
 * 0000000140B070B7: mov     rcx, [rsi+538h]
 * 0000000140B070BE: mov     r15, cr8
 * 0000000140B070C2: mov     eax, 0Fh
 * 0000000140B070C7: mov     cr8, rax
 * 0000000140B070CB: mov     rax, [rsi+150h]
 * 0000000140B070D2: call    KeGuardDispatchICall
 * 0000000140B070D7: mov     rax, [rsi+618h]
 * 0000000140B070DE: mov     r14, [rsp+0B70h+var_B20]
 * 0000000140B070E3: mov     rcx, [rax]
 * 0000000140B070E6: mov     eax, [rcx]
 * 0000000140B070E8: lea     rbx, [rcx+10h]
 * 0000000140B070EC: mov     r12b, [rcx+0Ch]
 * 0000000140B070F0: lea     rcx, [rax+rax*2]
 * 0000000140B070F4: lea     r13, [rbx+rcx*8]
 * 0000000140B070F8: mov     r8d, 18h
 * 0000000140B070FE: lea     r9, [r14+18h]
 * 0000000140B07102: mov     r10, rbx
 * 0000000140B07105: mov     rcx, [r10]
 * 0000000140B07108: add     r10, 8
 * 0000000140B0710C: mov     rax, [r9]
 * 0000000140B0710F: add     r9, 8
 * 0000000140B07113: cmp     rcx, rax
 * 0000000140B07116: jnz     short loc_140B0714C
 * 0000000140B07118: add     r8d, 0FFFFFFF8h
 * 0000000140B0711C: cmp     r8d, 8
 * 0000000140B07120: jnb     short loc_140B07105
 * 0000000140B07122: test    r8d, r8d
 * 0000000140B07125: jz      short loc_140B07155
 * 0000000140B07127: mov     r11d, 1
 * 0000000140B0712D: movzx   edx, byte ptr [r10]
 * 0000000140B07131: add     r10, r11
 * 0000000140B07134: movzx   eax, byte ptr [r9]
 * 0000000140B07138: add     r9, r11
 * 0000000140B0713B: cmp     rdx, rax
 * 0000000140B0713E: jnz     short loc_140B0714C
 * 0000000140B07140: mov     eax, 0FFFFFFFFh
 * 0000000140B07145: add     r8d, eax
 * 0000000140B07148: jz      short loc_140B07155
 * 0000000140B0714A: jmp     short loc_140B0712D
 * 0000000140B0714C: add     rbx, 18h
 * 0000000140B07150: cmp     rbx, r13
 * 0000000140B07153: jb      short loc_140B070F8
 * 0000000140B07155: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B0715A: mov     rcx, [rsi+538h]
 * 0000000140B07161: mov     rax, [rsi+190h]
 * 0000000140B07168: call    KeGuardDispatchICall
 * 0000000140B0716D: movzx   eax, r15b
 * 0000000140B07171: mov     cr8, rax
 * 0000000140B07175: xor     r15d, r15d
 * 0000000140B07178: test    r12b, r12b
 * 0000000140B0717B: lea     r12d, [r15+1]
 * 0000000140B0717F: jz      short loc_140B071ED
 * 0000000140B07181: mov     eax, [rsi+994h]
 * 0000000140B07187: lea     ecx, [r15+10h]
 * 0000000140B0718B: test    cl, al
 * 0000000140B0718D: jz      short loc_140B071E7
 * 0000000140B0718F: cmp     [rsi+8F8h], r15d
 * 0000000140B07196: jnz     short loc_140B071E7
 * 0000000140B07198: mov     rcx, [rsp+0B70h+var_B20]
 * 0000000140B0719D: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B071A7: add     rax, rsi
 * 0000000140B071AA: xor     edx, edx
 * 0000000140B071AC: mov     [rsi+900h], rax
 * 0000000140B071B3: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B071BD: add     rax, rcx
 * 0000000140B071C0: mov     [rsi+908h], rax
 * 0000000140B071C7: movsxd  rax, dword ptr [rcx]
 * 0000000140B071CA: mov     rcx, rsi
 * 0000000140B071CD: mov     [rsi+910h], rax
 * 0000000140B071D4: mov     [rsi+918h], r12
 * 0000000140B071DB: mov     [rsi+8F8h], r12d
 * 0000000140B071E2: call    $$ba
 * 0000000140B071E7: cmp     [r14+18h], r12
 * 0000000140B071EB: jz      short loc_140B0724A
 * 0000000140B071ED: cmp     rbx, r13
 * 0000000140B071F0: jnz     short loc_140B0724A
 * 0000000140B071F2: cmp     [rsi+8F8h], r15d
 * 0000000140B071F9: jnz     short loc_140B0724A
 * 0000000140B071FB: mov     rcx, [rsp+0B70h+var_B20]
 * 0000000140B07200: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0720A: add     rax, rsi
 * 0000000140B0720D: xor     edx, edx
 * 0000000140B0720F: mov     [rsi+900h], rax
 * 0000000140B07216: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B07220: add     rax, rcx
 * 0000000140B07223: mov     [rsi+908h], rax
 * 0000000140B0722A: movsxd  rax, dword ptr [rcx]
 * 0000000140B0722D: mov     rcx, rsi
 * 0000000140B07230: mov     [rsi+910h], rax
 * 0000000140B07237: mov     [rsi+918h], rbx
 * 0000000140B0723E: mov     [rsi+8F8h], r12d
 * 0000000140B07245: call    $$ba
 * 0000000140B0724A: mov     [rsi+824h], r15d
 * 0000000140B07251: jmp     loc_140AFC148
 * 0000000140B07256: mov     r12d, 1
 * 0000000140B0725C: xor     eax, eax
 * 0000000140B0725E: mov     [rsi+820h], ecx
 * 0000000140B07264: cmp     [rbp+0A70h+var_A68], eax
 * 0000000140B07267: jz      short loc_140B072D5
 * 0000000140B07269: mov     rcx, gs:20h
 * 0000000140B07272: mov     rax, [rsi+650h]
 * 0000000140B07279: mov     rdx, [rax+rcx]
 * 0000000140B0727D: lea     rcx, [rbp+0A70h+var_248]
 * 0000000140B07284: mov     rax, [rsi+690h]
 * 0000000140B0728B: add     rdx, [rsi+6B0h]
 * 0000000140B07292: mov     rbx, [rdx+rax]
 * 0000000140B07296: mov     rax, [rsi+198h]
 * 0000000140B0729D: call    KeGuardDispatchICall
 * 0000000140B072A2: mov     rax, [rsi+440h]
 * 0000000140B072A9: lea     rcx, [rbp+0A70h+var_680]
 * 0000000140B072B0: call    KeGuardDispatchICall
 * 0000000140B072B5: mov     rax, [rsi+3A8h]
 * 0000000140B072BC: mov     rcx, rbx
 * 0000000140B072BF: call    KeGuardDispatchICall
 * 0000000140B072C4: mov     rax, [rsi+3B8h]
 * 0000000140B072CB: mov     rcx, rbx
 * 0000000140B072CE: call    KeGuardDispatchICall
 * 0000000140B072D3: xor     eax, eax
 * 0000000140B072D5: cmp     [rbp+0A70h+var_AE0], eax
 * 0000000140B072D8: jz      loc_140B07383
 * 0000000140B072DE: test    [rsi+990h], r14d
 * 0000000140B072E5: jnz     short loc_140B072F9
 * 0000000140B072E7: xor     r14d, r14d
 * 0000000140B072EA: cmp     [rsi+8F8h], r14d
 * 0000000140B072F1: jnz     loc_140B07383
 * 0000000140B072F7: jmp     short loc_140B072FC
 * 0000000140B072F9: xor     r14d, r14d
 * 0000000140B072FC: mov     rbx, [rsi+980h]
 * 0000000140B07303: lea     rdx, [rbp+0A70h+var_680]
 * 0000000140B0730A: mov     [rsi+980h], r14
 * 0000000140B07311: mov     rcx, rbx
 * 0000000140B07314: mov     rax, [rsi+298h]
 * 0000000140B0731B: call    KeGuardDispatchICall
 * 0000000140B07320: mov     eax, [rsi+990h]
 * 0000000140B07326: test    r12b, al
 * 0000000140B07329: jz      short loc_140B0736F
 * 0000000140B0732B: and     eax, 0FFFFFFFEh
 * 0000000140B0732E: mov     rcx, rbx
 * 0000000140B07331: mov     [rsi+990h], eax
 * 0000000140B07337: mov     rax, [rsi+280h]
 * 0000000140B0733E: call    KeGuardDispatchICall
 * 0000000140B07343: mov     rbx, rax
 * 0000000140B07346: test    rax, rax
 * 0000000140B07349: jz      short loc_140B07362
 * 0000000140B0734B: mov     rax, [rsi+2A0h]
 * 0000000140B07352: mov     rcx, rbx
 * 0000000140B07355: call    KeGuardDispatchICall
 * 0000000140B0735A: mov     [rsi+970h], eax
 * 0000000140B07360: jmp     short loc_140B07374
 * 0000000140B07362: mov     eax, 0FFFFFFFFh
 * 0000000140B07367: mov     [rsi+970h], eax
 * 0000000140B0736D: jmp     short loc_140B07383
 * 0000000140B0736F: test    rbx, rbx
 * 0000000140B07372: jz      short loc_140B07383
 * 0000000140B07374: mov     rax, [rsi+288h]
 * 0000000140B0737B: mov     rcx, rbx
 * 0000000140B0737E: call    KeGuardDispatchICall
 * 0000000140B07383: mov     eax, [rsi+990h]
 * 0000000140B07389: mov     ecx, 800008h
 * 0000000140B0738E: and     eax, ecx
 * 0000000140B07390: cmp     eax, ecx
 * 0000000140B07392: jnz     loc_140B07784
 * 0000000140B07398: mov     eax, [rsi+994h]
 * 0000000140B0739E: mov     r10, [rsi+0A70h]
 * 0000000140B073A5: and     eax, r12d
 * 0000000140B073A8: mov     r12, [rsi+9F8h]
 * 0000000140B073AF: mov     r14d, [rsi+7E4h]
 * 0000000140B073B6: mov     r13d, [rsi+808h]
 * 0000000140B073BD: mov     [rsp+0B70h+var_AF8], r10
 * 0000000140B073C2: jz      short loc_140B073CB
 * 0000000140B073C4: mov     r12, [rsi+5D0h]
 * 0000000140B073CB: mov     rax, [rsi+2C8h]
 * 0000000140B073D2: mov     r11, [rsi+160h]
 * 0000000140B073D9: mov     [rbp+0A70h+var_AA8], rax
 * 0000000140B073DD: mov     rax, [rsi+340h]
 * 0000000140B073E4: mov     [rbp+0A70h+var_A80], rax
 * 0000000140B073E8: mov     [rbp+0A70h+var_AC0], r11
 * 0000000140B073EC: rdtsc
 * 0000000140B073EE: shl     rdx, 20h
 * 0000000140B073F2: mov     rbx, 7010008004002001h
 * 0000000140B073FC: or      rax, rdx
 * 0000000140B073FF: mov     r9, rdi
 * 0000000140B07402: mov     rcx, rax
 * 0000000140B07405: ror     rax, 3
 * 0000000140B07409: xor     rcx, rax
 * 0000000140B0740C: mov     rax, rbx
 * 0000000140B0740F: mul     rcx
 * 0000000140B07412: mov     rcx, rdx
 * 0000000140B07415: mov     [rbp+0A70h+var_538], rdx
 * 0000000140B0741C: xor     rcx, rax
 * 0000000140B0741F: mov     rax, 0ABCC77118461CEFDh
 * 0000000140B07429: mul     rcx
 * 0000000140B0742C: shr     rdx, 1Ah
 * 0000000140B07430: imul    rax, rdx, 5F5E100h
 * 0000000140B07437: sub     rcx, rax
 * 0000000140B0743A: sub     r9, rcx
 * 0000000140B0743D: mov     [rbp+0A70h+var_990], r9
 * 0000000140B07444: mov     r8d, [rsi+990h]
 * 0000000140B0744B: bt      r8d, 1Ah
 * 0000000140B07450: jnb     loc_140B074FA
 * 0000000140B07456: rdtsc
 * 0000000140B07458: shl     rdx, 20h
 * 0000000140B0745C: mov     r15, 0CCCCCCCCCCCCCCCDh
 * 0000000140B07466: or      rax, rdx
 * 0000000140B07469: mov     rcx, rax
 * 0000000140B0746C: ror     rax, 3
 * 0000000140B07470: xor     rcx, rax
 * 0000000140B07473: mov     rax, rbx
 * 0000000140B07476: mul     rcx
 * 0000000140B07479: mov     rcx, rdx
 * 0000000140B0747C: mov     [rbp+0A70h+var_530], rdx
 * 0000000140B07483: xor     rcx, rax
 * 0000000140B07486: mov     rax, r15
 * 0000000140B07489: mul     rcx
 * 0000000140B0748C: shr     rdx, 3
 * 0000000140B07490: lea     rax, [rdx+rdx*4]
 * 0000000140B07494: add     rax, rax
 * 0000000140B07497: sub     rcx, rax
 * 0000000140B0749A: mov     eax, 2
 * 0000000140B0749F: cmp     rcx, rax
 * 0000000140B074A2: jnb     short loc_140B074FA
 * 0000000140B074A4: rdtsc
 * 0000000140B074A6: shl     rdx, 20h
 * 0000000140B074AA: or      rax, rdx
 * 0000000140B074AD: mov     rcx, rax
 * 0000000140B074B0: ror     rax, 3
 * 0000000140B074B4: xor     rcx, rax
 * 0000000140B074B7: mov     rax, rbx
 * 0000000140B074BA: mul     rcx
 * 0000000140B074BD: mov     rcx, rdx
 * 0000000140B074C0: mov     [rbp+0A70h+var_528], rdx
 * 0000000140B074C7: xor     rcx, rax
 * 0000000140B074CA: mov     rax, r15
 * 0000000140B074CD: mul     rcx
 * 0000000140B074D0: shr     rdx, 3
 * 0000000140B074D4: lea     rax, [rdx+rdx*4]
 * 0000000140B074D8: add     rax, rax
 * 0000000140B074DB: sub     rcx, rax
 * 0000000140B074DE: mov     eax, 1
 * 0000000140B074E3: add     rcx, rax
 * 0000000140B074E6: imul    rcx, r9
 * 0000000140B074EA: mov     [rbp+0A70h+var_990], rcx
 * 0000000140B074F1: mov     r8d, [rsi+990h]
 * 0000000140B074F8: jmp     short loc_140B074FF
 * 0000000140B074FA: mov     eax, 1
 * 0000000140B074FF: xor     r9d, r9d
 * 0000000140B07502: mov     ebx, r9d
 * 0000000140B07505: mov     r15d, r9d
 * 0000000140B07508: lea     ecx, [r9+2]
 * 0000000140B0750C: test    cl, r8b
 * 0000000140B0750F: cmovz   r14d, r13d
 * 0000000140B07513: test    r8b, r8b
 * 0000000140B07516: js      short loc_140B07524
 * 0000000140B07518: mov     dword ptr [rbp+0A70h+arg_8], r9d
 * 0000000140B0751F: jmp     loc_140B075FC
 * 0000000140B07524: mov     dword ptr [rbp+0A70h+arg_8], eax
 * 0000000140B0752A: rdtsc
 * 0000000140B0752C: shl     rdx, 20h
 * 0000000140B07530: or      rax, rdx
 * 0000000140B07533: mov     rcx, rax
 * 0000000140B07536: ror     rax, 3
 * 0000000140B0753A: xor     rcx, rax
 * 0000000140B0753D: mov     rax, 7010008004002001h
 * 0000000140B07547: mul     rcx
 * 0000000140B0754A: mov     ecx, 154h
 * 0000000140B0754F: mov     rbx, rdx
 * 0000000140B07552: mov     [rbp+0A70h+var_520], rdx
 * 0000000140B07559: xor     rbx, rax
 * 0000000140B0755C: mov     edx, 1
 * 0000000140B07561: mov     r15, rbx
 * 0000000140B07564: lea     rax, [rsi+0A98h]
 * 0000000140B0756B: xor     r15, rsi
 * 0000000140B0756E: mov     r10, rbx
 * 0000000140B07571: xor     [rax], r10
 * 0000000140B07574: lea     rax, [rax-8]
 * 0000000140B07578: ror     r10, cl
 * 0000000140B0757B: sub     ecx, edx
 * 0000000140B0757D: jnz     short loc_140B07571
 * 0000000140B0757F: lea     r8, [r13-0AA0h]
 * 0000000140B07586: mov     r11, r13
 * 0000000140B07589: shr     r8, 3
 * 0000000140B0758D: test    r8d, r8d
 * 0000000140B07590: jz      short loc_140B075C7
 * 0000000140B07592: add     rsi, 0A98h
 * 0000000140B07599: movsxd  r9, r8d
 * 0000000140B0759C: lea     r9, [rsi+r9*8]
 * 0000000140B075A0: mov     rsi, rdx
 * 0000000140B075A3: mov     rdx, [r9]
 * 0000000140B075A6: lea     rax, [r15+r15]
 * 0000000140B075AA: mov     ecx, r8d
 * 0000000140B075AD: lea     r9, [r9-8]
 * 0000000140B075B1: ror     rdx, cl
 * 0000000140B075B4: mov     r15, rdx
 * 0000000140B075B7: xor     r15, rax
 * 0000000140B075BA: sub     r8d, esi
 * 0000000140B075BD: jnz     short loc_140B075A3
 * 0000000140B075BF: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B075C4: mov     r11, r13
 * 0000000140B075C7: mov     ecx, r14d
 * 0000000140B075CA: lea     rdx, [rsi+r11]
 * 0000000140B075CE: sub     ecx, r13d
 * 0000000140B075D1: shr     ecx, 3
 * 0000000140B075D4: test    ecx, ecx
 * 0000000140B075D6: jz      short loc_140B075F3
 * 0000000140B075D8: lea     rdx, [rdx+rcx*8]
 * 0000000140B075DC: mov     eax, 1
 * 0000000140B075E1: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140B075E5: xor     [rdx], r10
 * 0000000140B075E8: lea     rdx, [rdx-8]
 * 0000000140B075EC: ror     r10, cl
 * 0000000140B075EF: sub     ecx, eax
 * 0000000140B075F1: jnz     short loc_140B075E5
 * 0000000140B075F3: mov     r10, [rsp+0B70h+var_AF8]
 * 0000000140B075F8: mov     r11, [rbp+0A70h+var_AC0]
 * 0000000140B075FC: test    r10, r10
 * 0000000140B075FF: jz      short loc_140B07621
 * 0000000140B07601: mov     rax, [rbp+0A70h+var_A80]
 * 0000000140B07605: lea     r8, [rbp+0A70h+var_990]
 * 0000000140B0760C: mov     r9, r11
 * 0000000140B0760F: mov     [rsp+0B70h+BugCheckParameter4], r10
 * 0000000140B07614: mov     edx, r14d
 * 0000000140B07617: mov     rcx, rsi
 * 0000000140B0761A: call    KeGuardDispatchICall
 * 0000000140B0761F: jmp     short loc_140B07659
 * 0000000140B07621: xor     edx, edx
 * 0000000140B07623: test    r12, r12
 * 0000000140B07626: jnz     short loc_140B0763B
 * 0000000140B07628: lea     r8, [rbp+0A70h+var_990]
 * 0000000140B0762F: xor     ecx, ecx
 * 0000000140B07631: mov     rax, r11
 * 0000000140B07634: call    KeGuardDispatchICall
 * 0000000140B07639: jmp     short loc_140B07659
 * 0000000140B0763B: lea     rax, [rbp+0A70h+var_990]
 * 0000000140B07642: xor     r9d, r9d
 * 0000000140B07645: mov     [rsp+0B70h+BugCheckParameter4], rax
 * 0000000140B0764A: xor     r8d, r8d
 * 0000000140B0764D: mov     rax, [rbp+0A70h+var_AA8]
 * 0000000140B07651: mov     rcx, r12
 * 0000000140B07654: call    KeGuardDispatchICall
 * 0000000140B07659: xor     r11d, r11d
 * 0000000140B0765C: cmp     dword ptr [rbp+0A70h+arg_8], r11d
 * 0000000140B07663: jz      loc_140B07787
 * 0000000140B07669: mov     r9, rbx
 * 0000000140B0766C: lea     rax, [rsi+0A98h]
 * 0000000140B07673: xor     r9, rsi
 * 0000000140B07676: lea     r10d, [r11+1]
 * 0000000140B0767A: mov     ecx, 154h
 * 0000000140B0767F: xor     [rax], rbx
 * 0000000140B07682: lea     rax, [rax-8]
 * 0000000140B07686: ror     rbx, cl
 * 0000000140B07689: sub     ecx, r10d
 * 0000000140B0768C: jnz     short loc_140B0767F
 * 0000000140B0768E: lea     r8, [r13-0AA0h]
 * 0000000140B07695: mov     r11, r13
 * 0000000140B07698: shr     r8, 3
 * 0000000140B0769C: test    r8d, r8d
 * 0000000140B0769F: jz      short loc_140B076D6
 * 0000000140B076A1: movsxd  r10, r8d
 * 0000000140B076A4: lea     r11d, [rcx+1]
 * 0000000140B076A8: add     r10, 153h
 * 0000000140B076AF: lea     r10, [rsi+r10*8]
 * 0000000140B076B3: mov     rdx, [r10]
 * 0000000140B076B6: lea     rax, [r9+r9]
 * 0000000140B076BA: mov     ecx, r8d
 * 0000000140B076BD: lea     r10, [r10-8]
 * 0000000140B076C1: ror     rdx, cl
 * 0000000140B076C4: mov     r9, rdx
 * 0000000140B076C7: xor     r9, rax
 * 0000000140B076CA: sub     r8d, r11d
 * 0000000140B076CD: jnz     short loc_140B076B3
 * 0000000140B076CF: mov     r11, r13
 * 0000000140B076D2: lea     r10d, [r8+1]
 * 0000000140B076D6: sub     r14d, r13d
 * 0000000140B076D9: lea     rcx, [rsi+r11]
 * 0000000140B076DD: shr     r14d, 3
 * 0000000140B076E1: xor     r11d, r11d
 * 0000000140B076E4: test    r14d, r14d
 * 0000000140B076E7: jz      short loc_140B07705
 * 0000000140B076E9: mov     edx, r14d
 * 0000000140B076EC: dec     rdx
 * 0000000140B076EF: lea     rdx, [rcx+rdx*8]
 * 0000000140B076F3: xor     [rdx], rbx
 * 0000000140B076F6: mov     ecx, r14d
 * 0000000140B076F9: ror     rbx, cl
 * 0000000140B076FC: lea     rdx, [rdx-8]
 * 0000000140B07700: sub     r14d, r10d
 * 0000000140B07703: jnz     short loc_140B076F3
 * 0000000140B07705: cmp     r9, r15
 * 0000000140B07708: jz      short loc_140B07787
 * 0000000140B0770A: mov     rax, [rsi+588h]
 * 0000000140B07711: mov     r12, 0A3A03F5891C8B4E8h
 * 0000000140B0771B: mov     ecx, [rsi+7E4h]
 * 0000000140B07721: mov     [rax], rsi
 * 0000000140B07724: mov     [rax+10h], ecx
 * 0000000140B07727: cmp     [rsi+8F8h], r11d
 * 0000000140B0772E: jnz     short loc_140B07791
 * 0000000140B07730: mov     rax, [rsi+588h]
 * 0000000140B07737: mov     rcx, r9
 * 0000000140B0773A: xor     rcx, r15
 * 0000000140B0773D: mov     [rax+18h], rcx
 * 0000000140B07741: cmp     [rsi+8F8h], r11d
 * 0000000140B07748: jnz     short loc_140B07791
 * 0000000140B0774A: lea     rax, [rsi+r12]
 * 0000000140B0774E: xor     edx, edx
 * 0000000140B07750: mov     [rsi+900h], rax
 * 0000000140B07757: mov     rcx, rsi
 * 0000000140B0775A: mov     [rsi+908h], r11
 * 0000000140B07761: mov     qword ptr [rsi+910h], 10Eh
 * 0000000140B0776C: mov     [rsi+918h], r9
 * 0000000140B07773: mov     [rsi+8F8h], r10d
 * 0000000140B0777A: call    $$ba
 * 0000000140B0777F: xor     r11d, r11d
 * 0000000140B07782: jmp     short loc_140B07791
 * 0000000140B07784: xor     r11d, r11d
 * 0000000140B07787: mov     r12, 0A3A03F5891C8B4E8h
 * 0000000140B07791: mov     eax, [rsi+958h]
 * 0000000140B07797: cmp     eax, 0Bh
 * 0000000140B0779A: jz      loc_140B0BE64
 * 0000000140B077A0: mov     r13d, 1
 * 0000000140B077A6: cmp     eax, r13d
 * 0000000140B077A9: jz      loc_140B0BE64
 * 0000000140B077AF: cmp     [rsi+8F8h], r11d
 * 0000000140B077B6: jnz     loc_140B0BE64
 * 0000000140B077BC: mov     rax, [rsi+960h]
 * 0000000140B077C3: mov     rcx, [rax]
 * 0000000140B077C6: cmp     rcx, [rsi+968h]
 * 0000000140B077CD: jz      loc_140B0BC47
 * 0000000140B077D3: mov     ecx, [rsi+970h]
 * 0000000140B077D9: mov     eax, 0FFFFFFFFh
 * 0000000140B077DE: mov     rbx, rsi
 * 0000000140B077E1: mov     [rbp+0A70h+var_A80], rbx
 * 0000000140B077E5: cmp     ecx, eax
 * 0000000140B077E7: jz      short loc_140B07802
 * 0000000140B077E9: mov     rax, [rsi+278h]
 * 0000000140B077F0: call    KeGuardDispatchICall
 * 0000000140B077F5: xor     r15d, r15d
 * 0000000140B077F8: mov     r14, rax
 * 0000000140B077FB: test    rax, rax
 * 0000000140B077FE: jnz     short loc_140B0781F
 * 0000000140B07800: jmp     short loc_140B07805
 * 0000000140B07802: xor     r15d, r15d
 * 0000000140B07805: mov     rax, [rsi+280h]
 * 0000000140B0780C: xor     ecx, ecx
 * 0000000140B0780E: call    KeGuardDispatchICall
 * 0000000140B07813: mov     r14, rax
 * 0000000140B07816: test    rax, rax
 * 0000000140B07819: jz      loc_140B0BE64
 * 0000000140B0781F: mov     rax, [rsi+290h]
 * 0000000140B07826: lea     rdx, [rbp+0A70h+var_680]
 * 0000000140B0782D: mov     rcx, r14
 * 0000000140B07830: call    KeGuardDispatchICall
 * 0000000140B07835: test    eax, eax
 * 0000000140B07837: jns     short loc_140B07841
 * 0000000140B07839: mov     rcx, r14
 * 0000000140B0783C: jmp     loc_140B0BE58
 * 0000000140B07841: mov     [rsi+980h], r14
 * 0000000140B07848: mov     rax, [rsi+2B8h]
 * 0000000140B0784F: call    KeGuardDispatchICall
 * 0000000140B07854: mov     r14, rax
 * 0000000140B07857: mov     rax, [rsi+2D8h]
 * 0000000140B0785E: mov     rcx, r14
 * 0000000140B07861: call    KeGuardDispatchICall
 * 0000000140B07866: mov     rdx, rax
 * 0000000140B07869: test    rax, rax
 * 0000000140B0786C: jnz     short loc_140B07873
 * 0000000140B0786E: lea     ecx, [rax+4]
 * 0000000140B07871: jmp     short loc_140B07885
 * 0000000140B07873: mov     rax, [rsi+2E8h]
 * 0000000140B0787A: mov     rcx, r14
 * 0000000140B0787D: call    KeGuardDispatchICall
 * 0000000140B07882: mov     ecx, r15d
 * 0000000140B07885: mov     eax, [rsi+994h]
 * 0000000140B0788B: and     eax, 0FFFFFFFBh
 * 0000000140B0788E: or      eax, ecx
 * 0000000140B07890: mov     [rsi+994h], eax
 * 0000000140B07896: add     dword ptr [rsi+828h], 10000h
 * 0000000140B078A0: mov     rax, [rsi+2A0h]
 * 0000000140B078A7: mov     rcx, [rsi+980h]
 * 0000000140B078AE: call    KeGuardDispatchICall
 * 0000000140B078B3: xor     r11d, r11d
 * 0000000140B078B6: test    eax, eax
 * 0000000140B078B8: jnz     loc_140B093FB
 * 0000000140B078BE: mov     rax, [rsi+570h]
 * 0000000140B078C5: lea     ecx, [r11+20h]
 * 0000000140B078C9: mov     rdx, [rsi+968h]
 * 0000000140B078D0: lea     rbx, [rbp+0A70h+var_7B0]
 * 0000000140B078D7: add     rax, rcx
 * 0000000140B078DA: mov     [rbp+0A70h+var_AA8], rdx
 * 0000000140B078DE: mov     [rbp+0A70h+var_7B0], rax
 * 0000000140B078E5: mov     r14d, r11d
 * 0000000140B078E8: mov     rax, [rsi+568h]
 * 0000000140B078EF: add     rax, rcx
 * 0000000140B078F2: mov     [rsp+0B70h+var_B18], rbx
 * 0000000140B078F7: mov     [rbp+0A70h+var_7A8], rax
 * 0000000140B078FE: mov     rax, [rsi+960h]
 * 0000000140B07905: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B0790C: mov     rsi, rax
 * 0000000140B0790F: mov     [rsp+0B70h+var_B08], 2
 * 0000000140B07918: mov     r13, [rbx]
 * 0000000140B0791B: xor     r14, rsi
 * 0000000140B0791E: mov     r9d, r14d
 * 0000000140B07921: mov     [rsp+0B70h+var_AF8], r13
 * 0000000140B07926: and     r9d, 3Fh
 * 0000000140B0792A: mov     rdi, [r13+0]
 * 0000000140B0792E: mov     r15d, [r13+10h]
 * 0000000140B07932: mov     r10, rdi
 * 0000000140B07935: mov     [rbp+0A70h+var_AC0], rdi
 * 0000000140B07939: mov     rax, rdi
 * 0000000140B0793C: lea     r11d, ds:0[r15*4]
 * 0000000140B07944: mov     ecx, r11d
 * 0000000140B07947: add     rcx, rdi
 * 0000000140B0794A: cmp     rdi, rcx
 * 0000000140B0794D: jnb     short loc_140B07960
 * 0000000140B0794F: mov     r8d, 40h ; '@'
 * 0000000140B07955: prefetchnta byte ptr [rax]
 * 0000000140B07958: add     rax, r8
 * 0000000140B0795B: cmp     rax, rcx
 * 0000000140B0795E: jb      short loc_140B07955
 * 0000000140B07960: mov     r12d, r11d
 * 0000000140B07963: mov     r8, r14
 * 0000000140B07966: shr     r12d, 7
 * 0000000140B0796A: test    r12d, r12d
 * 0000000140B0796D: jz      short loc_140B079EA
 * 0000000140B0796F: mov     esi, 1
 * 0000000140B07974: mov     rbx, 7010008004002001h
 * 0000000140B0797E: mov     r13d, 0FFFFFFFFh
 * 0000000140B07984: mov     eax, 8
 * 0000000140B07989: xor     r8, [r10]
 * 0000000140B0798C: mov     ecx, r9d
 * 0000000140B0798F: rol     r8, cl
 * 0000000140B07992: xor     r8, [r10+8]
 * 0000000140B07996: add     r10, 10h
 * 0000000140B0799A: rol     r8, cl
 * 0000000140B0799D: sub     rax, rsi
 * 0000000140B079A0: jnz     short loc_140B07989
 * 0000000140B079A2: mov     rcx, r10
 * 0000000140B079A5: sub     rcx, rdi
 * 0000000140B079A8: xor     rcx, r14
 * 0000000140B079AB: mov     rax, rcx
 * 0000000140B079AE: rol     rax, 11h
 * 0000000140B079B2: xor     rcx, rax
 * 0000000140B079B5: mov     rax, rbx
 * 0000000140B079B8: mul     rcx
 * 0000000140B079BB: xor     r9d, edx
 * 0000000140B079BE: mov     [rbp+0A70h+var_518], rdx
 * 0000000140B079C5: xor     r9d, eax
 * 0000000140B079C8: and     r9d, 3Fh
 * 0000000140B079CC: cmovz   r9d, esi
 * 0000000140B079D0: add     r12d, r13d
 * 0000000140B079D3: jnz     short loc_140B07984
 * 0000000140B079D5: mov     r13, [rsp+0B70h+var_AF8]
 * 0000000140B079DA: mov     rbx, [rsp+0B70h+var_B18]
 * 0000000140B079DF: mov     rsi, [rbp+0A70h+arg_8]
 * 0000000140B079E6: mov     rdx, [rbp+0A70h+var_AA8]
 * 0000000140B079EA: and     r11d, 7Fh
 * 0000000140B079EE: mov     r14d, 1
 * 0000000140B079F4: cmp     r11d, 8
 * 0000000140B079F8: jb      short loc_140B07A17
 * 0000000140B079FA: mov     eax, r11d
 * 0000000140B079FD: shr     rax, 3
 * 0000000140B07A01: xor     r8, [r10]
 * 0000000140B07A04: mov     ecx, r9d
 * 0000000140B07A07: rol     r8, cl
 * 0000000140B07A0A: add     r10, 8
 * 0000000140B07A0E: add     r11d, 0FFFFFFF8h
 * 0000000140B07A12: sub     rax, r14
 * 0000000140B07A15: jnz     short loc_140B07A01
 * 0000000140B07A17: test    r11d, r11d
 * 0000000140B07A1A: jz      short loc_140B07A3A
 * 0000000140B07A1C: mov     edi, 0FFFFFFFFh
 * 0000000140B07A21: movzx   eax, byte ptr [r10]
 * 0000000140B07A25: mov     ecx, r9d
 * 0000000140B07A28: xor     r8, rax
 * 0000000140B07A2B: add     r10, r14
 * 0000000140B07A2E: rol     r8, cl
 * 0000000140B07A31: add     r11d, edi
 * 0000000140B07A34: jnz     short loc_140B07A21
 * 0000000140B07A36: mov     rdi, [rbp+0A70h+var_AC0]
 * 0000000140B07A3A: mov     r12, [r13+18h]
 * 0000000140B07A3E: mov     r11, rdx
 * 0000000140B07A41: xor     r11, r8
 * 0000000140B07A44: mov     r9, r12
 * 0000000140B07A47: mov     r8d, r11d
 * 0000000140B07A4A: mov     rax, r12
 * 0000000140B07A4D: and     r8d, 3Fh
 * 0000000140B07A51: mov     r13, r15
 * 0000000140B07A54: lea     rcx, [r12+r15]
 * 0000000140B07A58: cmp     r12, rcx
 * 0000000140B07A5B: jnb     short loc_140B07A6E
 * 0000000140B07A5D: mov     r10d, 40h ; '@'
 * 0000000140B07A63: prefetchnta byte ptr [rax]
 * 0000000140B07A66: add     rax, r10
 * 0000000140B07A69: cmp     rax, rcx
 * 0000000140B07A6C: jb      short loc_140B07A63
 * 0000000140B07A6E: mov     r10d, r15d
 * 0000000140B07A71: mov     r14, r11
 * 0000000140B07A74: shr     r10d, 7
 * 0000000140B07A78: test    r10d, r10d
 * 0000000140B07A7B: jz      short loc_140B07AF4
 * 0000000140B07A7D: mov     esi, 1
 * 0000000140B07A82: mov     edi, 0FFFFFFFFh
 * 0000000140B07A87: mov     r13, 7010008004002001h
 * 0000000140B07A91: mov     eax, 8
 * 0000000140B07A96: xor     r14, [r9]
 * 0000000140B07A99: mov     ecx, r8d
 * 0000000140B07A9C: rol     r14, cl
 * 0000000140B07A9F: xor     r14, [r9+8]
 * 0000000140B07AA3: add     r9, 10h
 * 0000000140B07AA7: rol     r14, cl
 * 0000000140B07AAA: sub     rax, rsi
 * 0000000140B07AAD: jnz     short loc_140B07A96
 * 0000000140B07AAF: mov     rcx, r9
 * 0000000140B07AB2: sub     rcx, r12
 * 0000000140B07AB5: xor     rcx, r11
 * 0000000140B07AB8: mov     rax, rcx
 * 0000000140B07ABB: rol     rax, 11h
 * 0000000140B07ABF: xor     rcx, rax
 * 0000000140B07AC2: mov     rax, r13
 * 0000000140B07AC5: mul     rcx
 * 0000000140B07AC8: xor     r8d, eax
 * 0000000140B07ACB: mov     [rbp+0A70h+var_510], rdx
 * 0000000140B07AD2: xor     r8d, edx
 * 0000000140B07AD5: and     r8d, 3Fh
 * 0000000140B07AD9: cmovz   r8d, esi
 * 0000000140B07ADD: add     r10d, edi
 * 0000000140B07AE0: jnz     short loc_140B07A91
 * 0000000140B07AE2: mov     rdi, [rbp+0A70h+var_AC0]
 * 0000000140B07AE6: mov     r13, r15
 * 0000000140B07AE9: mov     rsi, [rbp+0A70h+arg_8]
 * 0000000140B07AF0: mov     rdx, [rbp+0A70h+var_AA8]
 * 0000000140B07AF4: and     r15d, 7Fh
 * 0000000140B07AF8: mov     r10d, 1
 * 0000000140B07AFE: cmp     r15d, 8
 * 0000000140B07B02: jb      short loc_140B07B21
 * 0000000140B07B04: mov     eax, r15d
 * 0000000140B07B07: shr     rax, 3
 * 0000000140B07B0B: xor     r14, [r9]
 * 0000000140B07B0E: mov     ecx, r8d
 * 0000000140B07B11: rol     r14, cl
 * 0000000140B07B14: add     r9, 8
 * 0000000140B07B18: add     r15d, 0FFFFFFF8h
 * 0000000140B07B1C: sub     rax, r10
 * 0000000140B07B1F: jnz     short loc_140B07B0B
 * 0000000140B07B21: xor     r12d, r12d
 * 0000000140B07B24: test    r15d, r15d
 * 0000000140B07B27: jz      short loc_140B07B4A
 * 0000000140B07B29: mov     esi, 0FFFFFFFFh
 * 0000000140B07B2E: movzx   eax, byte ptr [r9]
 * 0000000140B07B32: mov     ecx, r8d
 * 0000000140B07B35: xor     r14, rax
 * 0000000140B07B38: add     r9, r10
 * 0000000140B07B3B: rol     r14, cl
 * 0000000140B07B3E: add     r15d, esi
 * 0000000140B07B41: jnz     short loc_140B07B2E
 * 0000000140B07B43: mov     rsi, [rbp+0A70h+arg_8]
 * 0000000140B07B4A: xor     r14, rdi
 * 0000000140B07B4D: add     rbx, 8
 * 0000000140B07B51: xor     r14, r13
 * 0000000140B07B54: mov     [rsp+0B70h+var_B18], rbx
 * 0000000140B07B59: mov     r13d, 1
 * 0000000140B07B5F: sub     [rsp+0B70h+var_B08], r13
 * 0000000140B07B64: jnz     loc_140B07918
 * 0000000140B07B6A: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B07B6F: lea     rdx, [rbp+0A70h+var_8C0]
 * 0000000140B07B76: mov     rcx, rdi
 * 0000000140B07B79: mov     [rsp+0B70h+var_AF8], r14
 * 0000000140B07B7E: mov     rax, [rsi+208h]
 * 0000000140B07B85: call    KeGuardDispatchICall
 * 0000000140B07B8A: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B07B91: mov     rbx, [rbp+0A70h+var_A80]
 * 0000000140B07B95: cmp     [rbp+0A70h+var_8C0], r12
 * 0000000140B07B9C: jz      loc_140B07EEF
 * 0000000140B07BA2: mov     rax, [rsi+0F0h]
 * 0000000140B07BA9: lea     edx, [r13+7Fh]
 * 0000000140B07BAD: mov     r8d, [rsi+810h]
 * 0000000140B07BB4: lea     ecx, [rdx-40h]
 * 0000000140B07BB7: call    KeGuardDispatchICall
 * 0000000140B07BBC: xor     r11d, r11d
 * 0000000140B07BBF: mov     [rbp+0A70h+var_AC0], rax
 * 0000000140B07BC3: mov     r15, rax
 * 0000000140B07BC6: test    rax, rax
 * 0000000140B07BC9: jz      loc_140B093FB
 * 0000000140B07BCF: mov     rax, [rbp+0A70h+var_8C0]
 * 0000000140B07BD6: mov     ecx, r11d
 * 0000000140B07BD9: mov     [rbp+0A70h+var_9F8], rax
 * 0000000140B07BDD: mov     [r15], rax
 * 0000000140B07BE0: mov     rax, r14
 * 0000000140B07BE3: mov     [rbp+0A70h+var_AA8], rax
 * 0000000140B07BE7: mov     dword ptr [rbp+0A70h+arg_8], r11d
 * 0000000140B07BEE: mov     [rbp+0A70h+var_AE8], rcx
 * 0000000140B07BF2: mov     rcx, [r15+rcx*8]
 * 0000000140B07BF6: mov     [rbp+0A70h+var_9F8], rcx
 * 0000000140B07BFA: test    rcx, rcx
 * 0000000140B07BFD: jz      loc_140B07EBF
 * 0000000140B07C03: and     eax, 3Fh
 * 0000000140B07C06: mov     [rbp+0A70h+var_AE0], eax
 * 0000000140B07C09: mov     rax, [rsi+1F8h]
 * 0000000140B07C10: call    KeGuardDispatchICall
 * 0000000140B07C15: xor     r11d, r11d
 * 0000000140B07C18: mov     [rsp+0B70h+var_B18], rax
 * 0000000140B07C1D: test    rax, rax
 * 0000000140B07C20: jz      loc_140B08362
 * 0000000140B07C26: movzx   r12d, word ptr [rax+14h]
 * 0000000140B07C2B: mov     ebx, [rbp+0A70h+var_AE0]
 * 0000000140B07C2E: add     r12, 18h
 * 0000000140B07C32: mov     rdi, [rbp+0A70h+var_AA8]
 * 0000000140B07C36: add     r12, rax
 * 0000000140B07C39: movzx   eax, word ptr [rax+6]
 * 0000000140B07C3D: lea     rcx, [rax+rax*4]
 * 0000000140B07C41: lea     rax, [r12+rcx*8]
 * 0000000140B07C45: mov     [rsp+0B70h+var_B08], rax
 * 0000000140B07C4A: mov     r14, rax
 * 0000000140B07C4D: test    dword ptr [r12+24h], 2000000h
 * 0000000140B07C56: mov     [rbp+0A70h+var_AD0], r11d
 * 0000000140B07C5A: jnz     short loc_140B07C7A
 * 0000000140B07C5C: mov     eax, [r12]
 * 0000000140B07C60: cmp     eax, 54494E49h
 * 0000000140B07C65: jnz     loc_140B081B4
 * 0000000140B07C6B: cmp     dword ptr [r12+4], 4742444Bh
 * 0000000140B07C74: jnz     loc_140B081EC
 * 0000000140B07C7A: mov     ecx, r13d
 * 0000000140B07C7D: cmp     [r12+24h], r11d
 * 0000000140B07C82: mov     eax, [r12+8]
 * 0000000140B07C87: mov     r9d, [r12+10h]
 * 0000000140B07C8C: cmovl   ecx, r13d
 * 0000000140B07C90: cmp     r9d, eax
 * 0000000140B07C93: cmovbe  r9d, eax
 * 0000000140B07C97: mov     eax, [r12+0Ch]
 * 0000000140B07C9C: test    ecx, ecx
 * 0000000140B07C9E: jnz     loc_140B07DA8
 * 0000000140B07CA4: mov     r15d, eax
 * 0000000140B07CA7: mov     ecx, r9d
 * 0000000140B07CAA: add     r15, [rbp+0A70h+var_9F8]
 * 0000000140B07CAE: mov     r11d, ebx
 * 0000000140B07CB1: add     rcx, r15
 * 0000000140B07CB4: mov     r10, r15
 * 0000000140B07CB7: mov     rax, r15
 * 0000000140B07CBA: cmp     r15, rcx
 * 0000000140B07CBD: jnb     short loc_140B07CCF
 * 0000000140B07CBF: mov     edx, 40h ; '@'
 * 0000000140B07CC4: prefetchnta byte ptr [rax]
 * 0000000140B07CC7: add     rax, rdx
 * 0000000140B07CCA: cmp     rax, rcx
 * 0000000140B07CCD: jb      short loc_140B07CC4
 * 0000000140B07CCF: mov     r13d, r9d
 * 0000000140B07CD2: mov     r8, rdi
 * 0000000140B07CD5: shr     r13d, 7
 * 0000000140B07CD9: test    r13d, r13d
 * 0000000140B07CDC: jz      short loc_140B07D51
 * 0000000140B07CDE: mov     esi, 0FFFFFFFFh
 * 0000000140B07CE3: mov     rbx, 7010008004002001h
 * 0000000140B07CED: mov     r14d, 1
 * 0000000140B07CF3: mov     eax, 8
 * 0000000140B07CF8: xor     r8, [r10]
 * 0000000140B07CFB: mov     ecx, r11d
 * 0000000140B07CFE: rol     r8, cl
 * 0000000140B07D01: xor     r8, [r10+8]
 * 0000000140B07D05: add     r10, 10h
 * 0000000140B07D09: rol     r8, cl
 * 0000000140B07D0C: sub     rax, r14
 * 0000000140B07D0F: jnz     short loc_140B07CF8
 * 0000000140B07D11: mov     rcx, r10
 * 0000000140B07D14: sub     rcx, r15
 * 0000000140B07D17: xor     rcx, rdi
 * 0000000140B07D1A: mov     rax, rcx
 * 0000000140B07D1D: rol     rax, 11h
 * 0000000140B07D21: xor     rcx, rax
 * 0000000140B07D24: mov     rax, rbx
 * 0000000140B07D27: mul     rcx
 * 0000000140B07D2A: xor     r11d, eax
 * 0000000140B07D2D: mov     [rbp+0A70h+var_508], rdx
 * 0000000140B07D34: xor     r11d, edx
 * 0000000140B07D37: and     r11d, 3Fh
 * 0000000140B07D3B: cmovz   r11d, r14d
 * 0000000140B07D3F: add     r13d, esi
 * 0000000140B07D42: jnz     short loc_140B07CF3
 * 0000000140B07D44: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B07D49: mov     ebx, [rbp+0A70h+var_AE0]
 * 0000000140B07D4C: mov     r14, [rsp+0B70h+var_B08]
 * 0000000140B07D51: and     r9d, 7Fh
 * 0000000140B07D55: mov     r13d, 1
 * 0000000140B07D5B: cmp     r9d, 8
 * 0000000140B07D5F: jb      short loc_140B07D7E
 * 0000000140B07D61: mov     eax, r9d
 * 0000000140B07D64: shr     rax, 3
 * 0000000140B07D68: xor     r8, [r10]
 * 0000000140B07D6B: mov     ecx, r11d
 * 0000000140B07D6E: rol     r8, cl
 * 0000000140B07D71: add     r10, 8
 * 0000000140B07D75: add     r9d, 0FFFFFFF8h
 * 0000000140B07D79: sub     rax, r13
 * 0000000140B07D7C: jnz     short loc_140B07D68
 * 0000000140B07D7E: test    r9d, r9d
 * 0000000140B07D81: jz      short loc_140B07DA2
 * 0000000140B07D83: mov     esi, 0FFFFFFFFh
 * 0000000140B07D88: movzx   eax, byte ptr [r10]
 * 0000000140B07D8C: mov     ecx, r11d
 * 0000000140B07D8F: xor     r8, rax
 * 0000000140B07D92: add     r10, r13
 * 0000000140B07D95: rol     r8, cl
 * 0000000140B07D98: add     r9d, esi
 * 0000000140B07D9B: jnz     short loc_140B07D88
 * 0000000140B07D9D: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B07DA2: mov     rdi, r8
 * 0000000140B07DA5: xor     r11d, r11d
 * 0000000140B07DA8: add     r12, 28h ; '('
 * 0000000140B07DAC: cmp     r12, r14
 * 0000000140B07DAF: jnz     loc_140B07C4D
 * 0000000140B07DB5: mov     r9d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B07DBC: mov     r14, [rsp+0B70h+var_AF8]
 * 0000000140B07DC1: mov     [rbp+0A70h+var_AA8], rdi
 * 0000000140B07DC5: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B07DCC: test    r9d, r9d
 * 0000000140B07DCF: jnz     loc_140B08332
 * 0000000140B07DD5: mov     r8, [rsp+0B70h+var_B18]
 * 0000000140B07DDA: mov     rdx, [rbp+0A70h+var_9F8]
 * 0000000140B07DDE: mov     [rsp+0B70h+var_B08], rdx
 * 0000000140B07DE3: mov     ecx, [r8+94h]
 * 0000000140B07DEA: cmp     ecx, 14h
 * 0000000140B07DED: jb      loc_140B08332
 * 0000000140B07DF3: mov     eax, [r8+90h]
 * 0000000140B07DFA: lea     r12, [rdx+rcx]
 * 0000000140B07DFE: add     r12, rax
 * 0000000140B07E01: lea     r13, [rdx+rax]
 * 0000000140B07E05: cmp     r13, r12
 * 0000000140B07E08: jz      loc_140B0832C
 * 0000000140B07E0E: cmp     [r13+0Ch], r11d
 * 0000000140B07E12: jz      loc_140B08325
 * 0000000140B07E18: mov     eax, [r13+10h]
 * 0000000140B07E1C: test    eax, eax
 * 0000000140B07E1E: jz      loc_140B08325
 * 0000000140B07E24: mov     r15, [rax+rdx]
 * 0000000140B07E28: test    r15, r15
 * 0000000140B07E2B: jz      loc_140B08318
 * 0000000140B07E31: cmp     r15, rdx
 * 0000000140B07E34: jb      short loc_140B07E46
 * 0000000140B07E36: mov     eax, [r8+50h]
 * 0000000140B07E3A: add     rax, rdx
 * 0000000140B07E3D: cmp     r15, rax
 * 0000000140B07E40: jb      loc_140B08318
 * 0000000140B07E46: mov     rax, [rsi+2A8h]
 * 0000000140B07E4D: mov     rcx, r15
 * 0000000140B07E50: call    KeGuardDispatchICall
 * 0000000140B07E55: xor     r11d, r11d
 * 0000000140B07E58: test    eax, eax
 * 0000000140B07E5A: jz      loc_140B0830E
 * 0000000140B07E60: mov     rax, [rsi+208h]
 * 0000000140B07E67: lea     rdx, [rbp+0A70h+var_9F8]
 * 0000000140B07E6B: mov     rcx, r15
 * 0000000140B07E6E: call    KeGuardDispatchICall
 * 0000000140B07E73: mov     r8, [rbp+0A70h+var_9F8]
 * 0000000140B07E77: xor     r11d, r11d
 * 0000000140B07E7A: test    r8, r8
 * 0000000140B07E7D: jz      loc_140B0830E
 * 0000000140B07E83: mov     r15, [rbp+0A70h+var_AC0]
 * 0000000140B07E87: mov     rcx, r15
 * 0000000140B07E8A: mov     eax, r11d
 * 0000000140B07E8D: mov     rdx, [rcx]
 * 0000000140B07E90: cmp     rdx, r8
 * 0000000140B07E93: jz      loc_140B0830E
 * 0000000140B07E99: test    rdx, rdx
 * 0000000140B07E9C: jz      loc_140B0830A
 * 0000000140B07EA2: inc     eax
 * 0000000140B07EA4: add     rcx, 8
 * 0000000140B07EA8: mov     edx, 10h
 * 0000000140B07EAD: cmp     eax, edx
 * 0000000140B07EAF: jb      short loc_140B07E8D
 * 0000000140B07EB1: jnz     loc_140B0830E
 * 0000000140B07EB7: mov     rax, [rbp+0A70h+var_AA8]
 * 0000000140B07EBB: lea     r13d, [rdx-0Fh]
 * 0000000140B07EBF: mov     r14, rax
 * 0000000140B07EC2: xor     r12d, r12d
 * 0000000140B07EC5: cmp     r14, [rsi+968h]
 * 0000000140B07ECC: jz      short loc_140B07ED3
 * 0000000140B07ECE: test    r14, r14
 * 0000000140B07ED1: jnz     short loc_140B07EE0
 * 0000000140B07ED3: mov     rax, 95EA5DE843D5D824h
 * 0000000140B07EDD: xor     r14, rax
 * 0000000140B07EE0: mov     rax, [rsi+0F8h]
 * 0000000140B07EE7: mov     rcx, r15
 * 0000000140B07EEA: call    KeGuardDispatchICall
 * 0000000140B07EEF: mov     rax, [rsi+960h]
 * 0000000140B07EF6: mov     rcx, [rax]
 * 0000000140B07EF9: cmp     r14, rcx
 * 0000000140B07EFC: jz      short loc_140B07F75
 * 0000000140B07EFE: mov     eax, [rsi+994h]
 * 0000000140B07F04: mov     ecx, 40h ; '@'
 * 0000000140B07F09: test    cl, al
 * 0000000140B07F0B: jnz     short loc_140B07F75
 * 0000000140B07F0D: mov     rax, [rsi+960h]
 * 0000000140B07F14: mov     rcx, [rax]
 * 0000000140B07F17: cmp     [rsi+8F8h], r12d
 * 0000000140B07F1E: jnz     short loc_140B07F75
 * 0000000140B07F20: mov     rax, [rsi+588h]
 * 0000000140B07F27: xor     rcx, r14
 * 0000000140B07F2A: mov     [rax+18h], rcx
 * 0000000140B07F2E: cmp     [rsi+8F8h], r12d
 * 0000000140B07F35: jnz     short loc_140B07F75
 * 0000000140B07F37: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B07F41: xor     edx, edx
 * 0000000140B07F43: add     rax, rsi
 * 0000000140B07F46: mov     rcx, rsi
 * 0000000140B07F49: mov     [rsi+900h], rax
 * 0000000140B07F50: mov     [rsi+908h], r12
 * 0000000140B07F57: mov     qword ptr [rsi+910h], 102h
 * 0000000140B07F62: mov     [rsi+918h], r14
 * 0000000140B07F69: mov     [rsi+8F8h], r13d
 * 0000000140B07F70: call    $$ba
 * 0000000140B07F75: mov     r10d, r12d
 * 0000000140B07F78: lea     r15, [rbp+0A70h+var_7A8]
 * 0000000140B07F7F: mov     r12d, 2
 * 0000000140B07F85: mov     r14d, 0FFFFFFFFh
 * 0000000140B07F8B: mov     rax, [r15]
 * 0000000140B07F8E: xor     esi, esi
 * 0000000140B07F90: mov     r9d, esi
 * 0000000140B07F93: mov     r11, [rax]
 * 0000000140B07F96: lea     r8d, [r10+rax]
 * 0000000140B07F9A: mov     r13d, [rax+10h]
 * 0000000140B07F9E: add     r8d, r11d
 * 0000000140B07FA1: test    r13d, r13d
 * 0000000140B07FA4: jz      short loc_140B07FD2
 * 0000000140B07FA6: mov     r14, r11
 * 0000000140B07FA9: movsxd  rdx, dword ptr [r14]
 * 0000000140B07FAC: inc     r9d
 * 0000000140B07FAF: mov     rax, rdx
 * 0000000140B07FB2: lea     r14, [r14+4]
 * 0000000140B07FB6: sar     rax, 4
 * 0000000140B07FBA: mov     ecx, [rax+r11]
 * 0000000140B07FBE: add     ecx, edx
 * 0000000140B07FC0: xor     r8d, ecx
 * 0000000140B07FC3: imul    r8d, r9d
 * 0000000140B07FC7: cmp     r9d, r13d
 * 0000000140B07FCA: jb      short loc_140B07FA9
 * 0000000140B07FCC: mov     r14d, 0FFFFFFFFh
 * 0000000140B07FD2: lea     r10d, [r10+r8*2]
 * 0000000140B07FD6: sub     r15, 8
 * 0000000140B07FDA: add     r8d, r8d
 * 0000000140B07FDD: xor     r11d, r11d
 * 0000000140B07FE0: add     r12d, r14d
 * 0000000140B07FE3: jnz     short loc_140B07F8B
 * 0000000140B07FE5: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B07FEA: mov     rbx, [rbp+0A70h+var_A80]
 * 0000000140B07FEE: mov     rax, [rsi+590h]
 * 0000000140B07FF5: mov     edx, [rax]
 * 0000000140B07FF7: cmp     r10d, edx
 * 0000000140B07FFA: jz      short loc_140B08072
 * 0000000140B07FFC: test    dword ptr [rsi+990h], 20000h
 * 0000000140B08006: jz      short loc_140B08072
 * 0000000140B08008: cmp     [rsi+8F8h], r11d
 * 0000000140B0800F: jnz     short loc_140B08072
 * 0000000140B08011: mov     rax, [rsi+588h]
 * 0000000140B08018: mov     ecx, r8d
 * 0000000140B0801B: xor     rcx, rdx
 * 0000000140B0801E: mov     [rax+18h], rcx
 * 0000000140B08022: mov     ecx, r8d
 * 0000000140B08025: cmp     [rsi+8F8h], r11d
 * 0000000140B0802C: jnz     short loc_140B08072
 * 0000000140B0802E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B08038: xor     edx, edx
 * 0000000140B0803A: add     rax, rsi
 * 0000000140B0803D: mov     [rsi+900h], rax
 * 0000000140B08044: lea     eax, [r11+1]
 * 0000000140B08048: mov     [rsi+908h], r11
 * 0000000140B0804F: mov     qword ptr [rsi+910h], 107h
 * 0000000140B0805A: mov     [rsi+918h], rcx
 * 0000000140B08061: mov     rcx, rsi
 * 0000000140B08064: mov     [rsi+8F8h], eax
 * 0000000140B0806A: call    $$ba
 * 0000000140B0806F: xor     r11d, r11d
 * 0000000140B08072: mov     ecx, [rsi+958h]
 * 0000000140B08078: mov     eax, 6
 * 0000000140B0807D: cmp     ecx, eax
 * 0000000140B0807F: jg      loc_140B09503
 * 0000000140B08085: jz      short loc_140B08090
 * 0000000140B08087: mov     edx, ecx
 * 0000000140B08089: test    ecx, ecx
 * 0000000140B0808B: jz      short loc_140B08090
 * 0000000140B0808D: sub     edx, 2
 * 0000000140B08090: mov     rdx, [rsi+570h]
 * 0000000140B08097: mov     rax, [rsi+568h]
 * 0000000140B0809E: mov     [rsp+0B70h+var_B18], rdx
 * 0000000140B080A3: add     rdx, 20h ; ' '
 * 0000000140B080A7: mov     [rsp+0B70h+var_B08], rdx
 * 0000000140B080AC: mov     edx, 2
 * 0000000140B080B1: mov     [rbp+0A70h+var_AA8], rax
 * 0000000140B080B5: lea     r13, [rax+20h]
 * 0000000140B080B9: mov     [rbp+0A70h+var_AC0], r13
 * 0000000140B080BD: cmp     ecx, edx
 * 0000000140B080BF: jge     loc_140B0857A
 * 0000000140B080C5: mov     r12d, [rax+30h]
 * 0000000140B080C9: mov     r15, [r13+0]
 * 0000000140B080CD: mov     r13d, [rsi+7E4h]
 * 0000000140B080D4: mov     r8d, [rsi+924h]
 * 0000000140B080DB: shl     r12d, 2
 * 0000000140B080DF: mov     dword ptr [rbp+0A70h+arg_8], r12d
 * 0000000140B080E6: lea     eax, [r13+30h]
 * 0000000140B080EA: cmp     eax, [rsi+0A1Ch]
 * 0000000140B080F0: jbe     loc_140B083DF
 * 0000000140B080F6: mov     edx, eax
 * 0000000140B080F8: mov     rcx, rsi
 * 0000000140B080FB: call    sub_140B12020
 * 0000000140B08100: xor     r11d, r11d
 * 0000000140B08103: mov     r14, rax
 * 0000000140B08106: test    rax, rax
 * 0000000140B08109: jz      loc_140B093F2
 * 0000000140B0810F: mov     ecx, [rsi+990h]
 * 0000000140B08115: test    cl, 4
 * 0000000140B08118: jnz     loc_140B083D5
 * 0000000140B0811E: mov     eax, [rsi+7E4h]
 * 0000000140B08124: lea     r9d, [r11+1]
 * 0000000140B08128: mov     r8, [rsi+7C8h]
 * 0000000140B0812F: and     ecx, 20000000h
 * 0000000140B08135: neg     ecx
 * 0000000140B08137: sbb     edx, edx
 * 0000000140B08139: and     edx, [rsi+924h]
 * 0000000140B0813F: cmp     eax, 8
 * 0000000140B08142: jb      short loc_140B08159
 * 0000000140B08144: mov     ecx, eax
 * 0000000140B08146: shr     rcx, 3
 * 0000000140B0814A: mov     [rsi], r11
 * 0000000140B0814D: add     eax, 0FFFFFFF8h
 * 0000000140B08150: add     rsi, 8
 * 0000000140B08154: sub     rcx, r9
 * 0000000140B08157: jnz     short loc_140B0814A
 * 0000000140B08159: test    eax, eax
 * 0000000140B0815B: jz      short loc_140B0816C
 * 0000000140B0815D: mov     ecx, 0FFFFFFFFh
 * 0000000140B08162: mov     [rsi], r11b
 * 0000000140B08165: add     rsi, r9
 * 0000000140B08168: add     eax, ecx
 * 0000000140B0816A: jnz     short loc_140B08162
 * 0000000140B0816C: mov     ebx, [r14+924h]
 * 0000000140B08173: mov     [r14+924h], edx
 * 0000000140B0817A: cmp     edx, 3
 * 0000000140B0817D: jz      loc_140B083BF
 * 0000000140B08183: test    dword ptr [r14+990h], 10000000h
 * 0000000140B0818E: jnz     loc_140B083B6
 * 0000000140B08194: test    edx, edx
 * 0000000140B08196: jz      loc_140B083B6
 * 0000000140B0819C: mov     rax, [r14+228h]
 * 0000000140B081A3: lea     rcx, [r8-8]
 * 0000000140B081A7: mov     rdx, [rcx]
 * 0000000140B081AA: call    KeGuardDispatchICall
 * 0000000140B081AF: jmp     loc_140B083CE
 * 0000000140B081B4: cmp     eax, 45474150h
 * 0000000140B081B9: jnz     short loc_140B081EC
 * 0000000140B081BB: movzx   eax, word ptr [r12+4]
 * 0000000140B081C1: mov     ecx, 7877h
 * 0000000140B081C6: cmp     ax, cx
 * 0000000140B081C9: jz      loc_140B07C7A
 * 0000000140B081CF: mov     ecx, 7277h
 * 0000000140B081D4: cmp     ax, cx
 * 0000000140B081D7: jz      loc_140B07C7A
 * 0000000140B081DD: mov     ecx, 7777h
 * 0000000140B081E2: cmp     ax, cx
 * 0000000140B081E5: jnz     short loc_140B08204
 * 0000000140B081E7: jmp     loc_140B07C7A
 * 0000000140B081EC: cmp     eax, 41525245h
 * 0000000140B081F1: jnz     short loc_140B08204
 * 0000000140B081F3: mov     eax, 4154h
 * 0000000140B081F8: cmp     [r12+4], ax
 * 0000000140B081FE: jz      loc_140B07C7A
 * 0000000140B08204: mov     r8, [rsi+930h]
 * 0000000140B0820B: mov     r9, r12
 * 0000000140B0820E: mov     r10, [rsi+938h]
 * 0000000140B08215: sub     r9, r8
 * 0000000140B08218: mov     r15, [rsi+940h]
 * 0000000140B0821F: mov     r11d, 7
 * 0000000140B08225: mov     r13, [rsi+948h]
 * 0000000140B0822C: movzx   edx, byte ptr [r8+r9]
 * 0000000140B08231: movzx   eax, byte ptr [r8]
 * 0000000140B08235: inc     r8
 * 0000000140B08238: cmp     rdx, rax
 * 0000000140B0823B: jnz     short loc_140B0824C
 * 0000000140B0823D: mov     eax, 0FFFFFFFFh
 * 0000000140B08242: add     r11d, eax
 * 0000000140B08245: jnz     short loc_140B0822C
 * 0000000140B08247: jmp     loc_140B082F1
 * 0000000140B0824C: mov     r8d, 8
 * 0000000140B08252: mov     r9, r12
 * 0000000140B08255: mov     rcx, [r9]
 * 0000000140B08258: add     r9, 8
 * 0000000140B0825C: mov     rax, [r10]
 * 0000000140B0825F: add     r10, 8
 * 0000000140B08263: cmp     rcx, rax
 * 0000000140B08266: jnz     short loc_140B08299
 * 0000000140B08268: add     r8d, 0FFFFFFF8h
 * 0000000140B0826C: cmp     r8d, 8
 * 0000000140B08270: jnb     short loc_140B08255
 * 0000000140B08272: xor     r11d, r11d
 * 0000000140B08275: test    r8d, r8d
 * 0000000140B08278: jz      short loc_140B082F1
 * 0000000140B0827A: movzx   edx, byte ptr [r9]
 * 0000000140B0827E: inc     r9
 * 0000000140B08281: movzx   eax, byte ptr [r10]
 * 0000000140B08285: inc     r10
 * 0000000140B08288: cmp     rdx, rax
 * 0000000140B0828B: jnz     short loc_140B0829C
 * 0000000140B0828D: mov     eax, 0FFFFFFFFh
 * 0000000140B08292: add     r8d, eax
 * 0000000140B08295: jnz     short loc_140B0827A
 * 0000000140B08297: jmp     short loc_140B082F1
 * 0000000140B08299: xor     r11d, r11d
 * 0000000140B0829C: mov     r9d, 4
 * 0000000140B082A2: mov     r8, r12
 * 0000000140B082A5: sub     r8, r15
 * 0000000140B082A8: lea     r10d, [r9-3]
 * 0000000140B082AC: movzx   edx, byte ptr [r8+r15]
 * 0000000140B082B1: movzx   eax, byte ptr [r15]
 * 0000000140B082B5: add     r15, r10
 * 0000000140B082B8: cmp     rdx, rax
 * 0000000140B082BB: jnz     short loc_140B082C9
 * 0000000140B082BD: mov     eax, 0FFFFFFFFh
 * 0000000140B082C2: add     r9d, eax
 * 0000000140B082C5: jnz     short loc_140B082AC
 * 0000000140B082C7: jmp     short loc_140B082F1
 * 0000000140B082C9: mov     r8, r12
 * 0000000140B082CC: mov     r9d, 6
 * 0000000140B082D2: sub     r8, r13
 * 0000000140B082D5: movzx   edx, byte ptr [r8+r13]
 * 0000000140B082DA: movzx   eax, byte ptr [r13+0]
 * 0000000140B082DF: add     r13, r10
 * 0000000140B082E2: cmp     rdx, rax
 * 0000000140B082E5: jnz     short loc_140B082FF
 * 0000000140B082E7: mov     eax, 0FFFFFFFFh
 * 0000000140B082EC: add     r9d, eax
 * 0000000140B082EF: jnz     short loc_140B082D5
 * 0000000140B082F1: mov     r13d, 1
 * 0000000140B082F7: xor     r11d, r11d
 * 0000000140B082FA: jmp     loc_140B07C7A
 * 0000000140B082FF: mov     ecx, [rbp+0A70h+var_AD0]
 * 0000000140B08302: mov     r13, r10
 * 0000000140B08305: jmp     loc_140B07C7D
 * 0000000140B0830A: mov     [r15+rax*8], r8
 * 0000000140B0830E: mov     rdx, [rsp+0B70h+var_B08]
 * 0000000140B08313: mov     r8, [rsp+0B70h+var_B18]
 * 0000000140B08318: add     r13, 14h
 * 0000000140B0831C: cmp     r13, r12
 * 0000000140B0831F: jnz     loc_140B07E0E
 * 0000000140B08325: mov     r9d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0832C: mov     r13d, 1
 * 0000000140B08332: mov     rcx, [rbp+0A70h+var_AE8]
 * 0000000140B08336: add     r9d, r13d
 * 0000000140B08339: mov     r15, [rbp+0A70h+var_AC0]
 * 0000000140B0833D: add     rcx, r13
 * 0000000140B08340: mov     eax, 10h
 * 0000000140B08345: mov     dword ptr [rbp+0A70h+arg_8], r9d
 * 0000000140B0834C: cmp     r9d, eax
 * 0000000140B0834F: mov     [rbp+0A70h+var_AE8], rcx
 * 0000000140B08353: mov     rax, [rbp+0A70h+var_AA8]
 * 0000000140B08357: jb      loc_140B07BF2
 * 0000000140B0835D: jmp     loc_140B07EBF
 * 0000000140B08362: cmp     [rsi+8F8h], r11d
 * 0000000140B08369: jnz     loc_140B07EC2
 * 0000000140B0836F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B08379: xor     edx, edx
 * 0000000140B0837B: add     rax, rsi
 * 0000000140B0837E: mov     rcx, rsi
 * 0000000140B08381: mov     [rsi+900h], rax
 * 0000000140B08388: mov     [rsi+908h], r11
 * 0000000140B0838F: mov     qword ptr [rsi+910h], 102h
 * 0000000140B0839A: mov     qword ptr [rsi+918h], 0FFFFFFFFC000007Bh
 * 0000000140B083A5: mov     [rsi+8F8h], r13d
 * 0000000140B083AC: call    $$ba
 * 0000000140B083B1: jmp     loc_140B07EC2
 * 0000000140B083B6: mov     rax, [r14+0F8h]
 * 0000000140B083BD: jmp     short loc_140B083C6
 * 0000000140B083BF: mov     rax, [r14+368h]
 * 0000000140B083C6: mov     rcx, r8
 * 0000000140B083C9: call    KeGuardDispatchICall
 * 0000000140B083CE: mov     [r14+924h], ebx
 * 0000000140B083D5: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 0000000140B083DD: jmp     short loc_140B083E8
 * 0000000140B083DF: mov     r14, rsi
 * 0000000140B083E2: mov     [rsi+7E4h], eax
 * 0000000140B083E8: lea     rbx, [r14+r13]
 * 0000000140B083EC: mov     r8d, 1
 * 0000000140B083F2: add     [r14+80Ch], r8d
 * 0000000140B083F9: mov     rax, rbx
 * 0000000140B083FC: mov     [rsp+0B70h+var_AF8], rbx
 * 0000000140B08401: xor     r13d, r13d
 * 0000000140B08404: lea     ecx, [r8+2Fh]
 * 0000000140B08408: lea     edx, [rcx-2Ah]
 * 0000000140B0840B: mov     [rax], r13
 * 0000000140B0840E: add     ecx, 0FFFFFFF8h
 * 0000000140B08411: add     rax, 8
 * 0000000140B08415: sub     rdx, r8
 * 0000000140B08418: jnz     short loc_140B0840B
 * 0000000140B0841A: test    ecx, ecx
 * 0000000140B0841C: jz      short loc_140B0842D
 * 0000000140B0841E: mov     edx, 0FFFFFFFFh
 * 0000000140B08423: mov     [rax], r13b
 * 0000000140B08426: add     rax, r8
 * 0000000140B08429: add     ecx, edx
 * 0000000140B0842B: jnz     short loc_140B08423
 * 0000000140B0842D: mov     dword ptr [rbx], 0Bh
 * 0000000140B08433: mov     r9, r15
 * 0000000140B08436: mov     [rbx+8], r15
 * 0000000140B0843A: mov     rax, r15
 * 0000000140B0843D: mov     [rbx+10h], r12d
 * 0000000140B08441: add     [r14+828h], r12d
 * 0000000140B08448: mov     r10d, [r14+814h]
 * 0000000140B0844F: mov     rsi, [r14+818h]
 * 0000000140B08456: mov     ecx, r12d
 * 0000000140B08459: add     rcx, r15
 * 0000000140B0845C: cmp     r15, rcx
 * 0000000140B0845F: jnb     short loc_140B08471
 * 0000000140B08461: mov     edx, 40h ; '@'
 * 0000000140B08466: prefetchnta byte ptr [rax]
 * 0000000140B08469: add     rax, rdx
 * 0000000140B0846C: cmp     rax, rcx
 * 0000000140B0846F: jb      short loc_140B08466
 * 0000000140B08471: mov     r11d, r12d
 * 0000000140B08474: mov     r8, rsi
 * 0000000140B08477: shr     r11d, 7
 * 0000000140B0847B: mov     r13d, 1
 * 0000000140B08481: test    r11d, r11d
 * 0000000140B08484: jz      short loc_140B084F9
 * 0000000140B08486: mov     ebx, 0FFFFFFFFh
 * 0000000140B0848B: mov     r12, 7010008004002001h
 * 0000000140B08495: mov     eax, 8
 * 0000000140B0849A: xor     r8, [r9]
 * 0000000140B0849D: mov     ecx, r10d
 * 0000000140B084A0: rol     r8, cl
 * 0000000140B084A3: xor     r8, [r9+8]
 * 0000000140B084A7: add     r9, 10h
 * 0000000140B084AB: rol     r8, cl
 * 0000000140B084AE: sub     rax, r13
 * 0000000140B084B1: jnz     short loc_140B0849A
 * 0000000140B084B3: mov     rcx, r9
 * 0000000140B084B6: sub     rcx, r15
 * 0000000140B084B9: xor     rcx, rsi
 * 0000000140B084BC: mov     rax, rcx
 * 0000000140B084BF: rol     rax, 11h
 * 0000000140B084C3: xor     rcx, rax
 * 0000000140B084C6: mov     rax, r12
 * 0000000140B084C9: mul     rcx
 * 0000000140B084CC: xor     r10d, eax
 * 0000000140B084CF: mov     [rbp+0A70h+var_500], rdx
 * 0000000140B084D6: xor     r10d, edx
 * 0000000140B084D9: and     r10d, 3Fh
 * 0000000140B084DD: cmovz   r10d, r13d
 * 0000000140B084E1: add     r11d, ebx
 * 0000000140B084E4: jnz     short loc_140B08495
 * 0000000140B084E6: mov     rbx, [rsp+0B70h+var_AF8]
 * 0000000140B084EB: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B084F2: mov     r12d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B084F9: mov     edx, r12d
 * 0000000140B084FC: and     edx, 7Fh
 * 0000000140B084FF: cmp     edx, 8
 * 0000000140B08502: jb      short loc_140B0851F
 * 0000000140B08504: mov     eax, edx
 * 0000000140B08506: shr     rax, 3
 * 0000000140B0850A: xor     r8, [r9]
 * 0000000140B0850D: mov     ecx, r10d
 * 0000000140B08510: rol     r8, cl
 * 0000000140B08513: add     r9, 8
 * 0000000140B08517: add     edx, 0FFFFFFF8h
 * 0000000140B0851A: sub     rax, r13
 * 0000000140B0851D: jnz     short loc_140B0850A
 * 0000000140B0851F: xor     r11d, r11d
 * 0000000140B08522: test    edx, edx
 * 0000000140B08524: jz      short loc_140B08546
 * 0000000140B08526: mov     edi, 0FFFFFFFFh
 * 0000000140B0852B: movzx   eax, byte ptr [r9]
 * 0000000140B0852F: mov     ecx, r10d
 * 0000000140B08532: xor     r8, rax
 * 0000000140B08535: add     r9, r13
 * 0000000140B08538: rol     r8, cl
 * 0000000140B0853B: add     edx, edi
 * 0000000140B0853D: jnz     short loc_140B0852B
 * 0000000140B0853F: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B08546: mov     rax, r8
 * 0000000140B08549: jmp     short loc_140B0854E
 * 0000000140B0854B: xor     r8d, eax
 * 0000000140B0854E: shr     rax, 1Fh
 * 0000000140B08552: test    rax, rax
 * 0000000140B08555: jnz     short loc_140B0854B
 * 0000000140B08557: mov     r13, [rbp+0A70h+var_AC0]
 * 0000000140B0855B: btr     r8d, 1Fh
 * 0000000140B08560: mov     [rbx+14h], r8d
 * 0000000140B08564: mov     eax, 2
 * 0000000140B08569: add     [r14+828h], r12d
 * 0000000140B08570: mov     rbx, r14
 * 0000000140B08573: mov     [r14+958h], eax
 * 0000000140B0857A: cmp     dword ptr [rbx+958h], 3
 * 0000000140B08581: jge     loc_140B087B3
 * 0000000140B08587: mov     r14d, [rbx+7E4h]
 * 0000000140B0858E: mov     r15d, 20h ; ' '
 * 0000000140B08594: mov     r12d, [rbx+838h]
 * 0000000140B0859B: cmp     r12d, 7
 * 0000000140B0859F: mov     r8d, [rbx+924h]
 * 0000000140B085A6: cmovnz  r15d, r11d
 * 0000000140B085AA: lea     eax, [r14+30h]
 * 0000000140B085AE: cmp     eax, [rbx+0A1Ch]
 * 0000000140B085B4: jbe     loc_140B08690
 * 0000000140B085BA: mov     edx, eax
 * 0000000140B085BC: mov     rcx, rbx
 * 0000000140B085BF: call    sub_140B12020
 * 0000000140B085C4: xor     r11d, r11d
 * 0000000140B085C7: mov     rsi, rax
 * 0000000140B085CA: test    rax, rax
 * 0000000140B085CD: jz      loc_140B093F2
 * 0000000140B085D3: mov     ecx, [rbx+990h]
 * 0000000140B085D9: test    cl, 4
 * 0000000140B085DC: jnz     loc_140B08687
 * 0000000140B085E2: mov     eax, [rbx+7E4h]
 * 0000000140B085E8: lea     r9d, [r11+1]
 * 0000000140B085EC: mov     r8, [rbx+7C8h]
 * 0000000140B085F3: and     ecx, 20000000h
 * 0000000140B085F9: neg     ecx
 * 0000000140B085FB: sbb     edx, edx
 * 0000000140B085FD: and     edx, [rbx+924h]
 * 0000000140B08603: cmp     eax, 8
 * 0000000140B08606: jb      short loc_140B0861D
 * 0000000140B08608: mov     ecx, eax
 * 0000000140B0860A: shr     rcx, 3
 * 0000000140B0860E: mov     [rbx], r11
 * 0000000140B08611: add     eax, 0FFFFFFF8h
 * 0000000140B08614: add     rbx, 8
 * 0000000140B08618: sub     rcx, r9
 * 0000000140B0861B: jnz     short loc_140B0860E
 * 0000000140B0861D: test    eax, eax
 * 0000000140B0861F: jz      short loc_140B08630
 * 0000000140B08621: mov     ecx, 0FFFFFFFFh
 * 0000000140B08626: mov     [rbx], r11b
 * 0000000140B08629: add     rbx, r9
 * 0000000140B0862C: add     eax, ecx
 * 0000000140B0862E: jnz     short loc_140B08626
 * 0000000140B08630: mov     ebx, [rsi+924h]
 * 0000000140B08636: mov     [rsi+924h], edx
 * 0000000140B0863C: cmp     edx, 3
 * 0000000140B0863F: jz      short loc_140B0866F
 * 0000000140B08641: test    dword ptr [rsi+990h], 10000000h
 * 0000000140B0864B: jnz     short loc_140B08666
 * 0000000140B0864D: test    edx, edx
 * 0000000140B0864F: jz      short loc_140B08666
 * 0000000140B08651: mov     rax, [rsi+228h]
 * 0000000140B08658: lea     rcx, [r8-8]
 * 0000000140B0865C: mov     rdx, [rcx]
 * 0000000140B0865F: call    KeGuardDispatchICall
 * 0000000140B08664: jmp     short loc_140B0867E
 * 0000000140B08666: mov     rax, [rsi+0F8h]
 * 0000000140B0866D: jmp     short loc_140B08676
 * 0000000140B0866F: mov     rax, [rsi+368h]
 * 0000000140B08676: mov     rcx, r8
 * 0000000140B08679: call    KeGuardDispatchICall
 * 0000000140B0867E: mov     [rsi+924h], ebx
 * 0000000140B08684: xor     r11d, r11d
 * 0000000140B08687: and     dword ptr [rsi+990h], 0FFFFFFFBh
 * 0000000140B0868E: jmp     short loc_140B08699
 * 0000000140B08690: mov     rsi, rbx
 * 0000000140B08693: mov     [rbx+7E4h], eax
 * 0000000140B08699: mov     r8d, 1
 * 0000000140B0869F: lea     rbx, [rsi+r14]
 * 0000000140B086A3: add     [rsi+80Ch], r8d
 * 0000000140B086AA: mov     rax, rbx
 * 0000000140B086AD: mov     r14d, 0FFFFFFF8h
 * 0000000140B086B3: lea     ecx, [r8+2Fh]
 * 0000000140B086B7: lea     edx, [rcx-2Ah]
 * 0000000140B086BA: mov     [rax], r11
 * 0000000140B086BD: add     ecx, r14d
 * 0000000140B086C0: add     rax, 8
 * 0000000140B086C4: sub     rdx, r8
 * 0000000140B086C7: jnz     short loc_140B086BA
 * 0000000140B086C9: test    ecx, ecx
 * 0000000140B086CB: jz      short loc_140B086DC
 * 0000000140B086CD: mov     edx, 0FFFFFFFFh
 * 0000000140B086D2: mov     [rax], r11b
 * 0000000140B086D5: add     rax, r8
 * 0000000140B086D8: add     ecx, edx
 * 0000000140B086DA: jnz     short loc_140B086D2
 * 0000000140B086DC: mov     [rbx], r15d
 * 0000000140B086DF: mov     [rbx+8], r13
 * 0000000140B086E3: cmp     r12d, 7
 * 0000000140B086E7: jnz     short loc_140B086FD
 * 0000000140B086E9: lea     r9, [rbx+18h]
 * 0000000140B086ED: mov     rdx, r13
 * 0000000140B086F0: lea     r8d, [r12+19h]
 * 0000000140B086F5: mov     rcx, rsi
 * 0000000140B086F8: call    sub_1403F152C
 * 0000000140B086FD: mov     rcx, [rbp+0A70h+var_AA8]
 * 0000000140B08701: mov     r11d, 20h ; ' '
 * 0000000140B08707: mov     [rbx+10h], r11d
 * 0000000140B0870B: add     rcx, 40h ; '@'
 * 0000000140B0870F: add     [rsi+828h], r11d
 * 0000000140B08716: mov     r8, r13
 * 0000000140B08719: mov     r10d, [rsi+814h]
 * 0000000140B08720: mov     rax, r13
 * 0000000140B08723: mov     rdx, [rsi+818h]
 * 0000000140B0872A: cmp     r13, rcx
 * 0000000140B0872D: jnb     short loc_140B0873E
 * 0000000140B0872F: lea     r9d, [r11+20h]
 * 0000000140B08733: prefetchnta byte ptr [rax]
 * 0000000140B08736: add     rax, r9
 * 0000000140B08739: cmp     rax, rcx
 * 0000000140B0873C: jb      short loc_140B08733
 * 0000000140B0873E: mov     eax, 4
 * 0000000140B08743: mov     r9d, r11d
 * 0000000140B08746: lea     r15d, [rax-3]
 * 0000000140B0874A: xor     rdx, [r8]
 * 0000000140B0874D: mov     ecx, r10d
 * 0000000140B08750: rol     rdx, cl
 * 0000000140B08753: add     r8, 8
 * 0000000140B08757: add     r9d, r14d
 * 0000000140B0875A: sub     rax, r15
 * 0000000140B0875D: jnz     short loc_140B0874A
 * 0000000140B0875F: test    r9d, r9d
 * 0000000140B08762: jz      short loc_140B08785
 * 0000000140B08764: mov     edi, 0FFFFFFFFh
 * 0000000140B08769: movzx   eax, byte ptr [r8]
 * 0000000140B0876D: mov     ecx, r10d
 * 0000000140B08770: xor     rdx, rax
 * 0000000140B08773: add     r8, r15
 * 0000000140B08776: rol     rdx, cl
 * 0000000140B08779: add     r9d, edi
 * 0000000140B0877C: jnz     short loc_140B08769
 * 0000000140B0877E: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B08785: mov     rax, rdx
 * 0000000140B08788: jmp     short loc_140B0878C
 * 0000000140B0878A: xor     edx, eax
 * 0000000140B0878C: shr     rax, 1Fh
 * 0000000140B08790: test    rax, rax
 * 0000000140B08793: jnz     short loc_140B0878A
 * 0000000140B08795: btr     edx, 1Fh
 * 0000000140B08799: mov     [rbx+14h], edx
 * 0000000140B0879C: mov     rbx, rsi
 * 0000000140B0879F: add     [rsi+828h], r11d
 * 0000000140B087A6: xor     r11d, r11d
 * 0000000140B087A9: mov     dword ptr [rsi+958h], 3
 * 0000000140B087B3: cmp     dword ptr [rbx+958h], 4
 * 0000000140B087BA: mov     r13, [rsp+0B70h+var_B08]
 * 0000000140B087BF: jge     loc_140B08A66
 * 0000000140B087C5: mov     rax, [rsp+0B70h+var_B18]
 * 0000000140B087CA: mov     r14d, [rbx+7E4h]
 * 0000000140B087D1: mov     r15, [r13+0]
 * 0000000140B087D5: mov     r8d, [rbx+924h]
 * 0000000140B087DC: mov     r12d, [rax+30h]
 * 0000000140B087E0: shl     r12d, 2
 * 0000000140B087E4: lea     eax, [r14+30h]
 * 0000000140B087E8: cmp     eax, [rbx+0A1Ch]
 * 0000000140B087EE: jbe     loc_140B088C7
 * 0000000140B087F4: mov     edx, eax
 * 0000000140B087F6: mov     rcx, rbx
 * 0000000140B087F9: call    sub_140B12020
 * 0000000140B087FE: xor     r11d, r11d
 * 0000000140B08801: mov     rsi, rax
 * 0000000140B08804: test    rax, rax
 * 0000000140B08807: jz      loc_140B093F2
 * 0000000140B0880D: mov     ecx, [rbx+990h]
 * 0000000140B08813: test    cl, 4
 * 0000000140B08816: jnz     loc_140B088BE
 * 0000000140B0881C: mov     eax, [rbx+7E4h]
 * 0000000140B08822: lea     r9d, [r11+1]
 * 0000000140B08826: mov     r8, [rbx+7C8h]
 * 0000000140B0882D: and     ecx, 20000000h
 * 0000000140B08833: neg     ecx
 * 0000000140B08835: sbb     edx, edx
 * 0000000140B08837: and     edx, [rbx+924h]
 * 0000000140B0883D: cmp     eax, 8
 * 0000000140B08840: jb      short loc_140B08857
 * 0000000140B08842: mov     ecx, eax
 * 0000000140B08844: shr     rcx, 3
 * 0000000140B08848: mov     [rbx], r11
 * 0000000140B0884B: add     eax, 0FFFFFFF8h
 * 0000000140B0884E: add     rbx, 8
 * 0000000140B08852: sub     rcx, r9
 * 0000000140B08855: jnz     short loc_140B08848
 * 0000000140B08857: test    eax, eax
 * 0000000140B08859: jz      short loc_140B0886A
 * 0000000140B0885B: mov     ecx, 0FFFFFFFFh
 * 0000000140B08860: mov     [rbx], r11b
 * 0000000140B08863: add     rbx, r9
 * 0000000140B08866: add     eax, ecx
 * 0000000140B08868: jnz     short loc_140B08860
 * 0000000140B0886A: mov     ebx, [rsi+924h]
 * 0000000140B08870: mov     [rsi+924h], edx
 * 0000000140B08876: cmp     edx, 3
 * 0000000140B08879: jz      short loc_140B088A9
 * 0000000140B0887B: test    dword ptr [rsi+990h], 10000000h
 * 0000000140B08885: jnz     short loc_140B088A0
 * 0000000140B08887: test    edx, edx
 * 0000000140B08889: jz      short loc_140B088A0
 * 0000000140B0888B: mov     rax, [rsi+228h]
 * 0000000140B08892: lea     rcx, [r8-8]
 * 0000000140B08896: mov     rdx, [rcx]
 * 0000000140B08899: call    KeGuardDispatchICall
 * 0000000140B0889E: jmp     short loc_140B088B8
 * 0000000140B088A0: mov     rax, [rsi+0F8h]
 * 0000000140B088A7: jmp     short loc_140B088B0
 * 0000000140B088A9: mov     rax, [rsi+368h]
 * 0000000140B088B0: mov     rcx, r8
 * 0000000140B088B3: call    KeGuardDispatchICall
 * 0000000140B088B8: mov     [rsi+924h], ebx
 * 0000000140B088BE: and     dword ptr [rsi+990h], 0FFFFFFFBh
 * 0000000140B088C5: jmp     short loc_140B088D0
 * 0000000140B088C7: mov     rsi, rbx
 * 0000000140B088CA: mov     [rbx+7E4h], eax
 * 0000000140B088D0: mov     r9d, 1
 * 0000000140B088D6: lea     rbx, [rsi+r14]
 * 0000000140B088DA: add     [rsi+80Ch], r9d
 * 0000000140B088E1: mov     rax, rbx
 * 0000000140B088E4: mov     [rbp+0A70h+arg_8], rbx
 * 0000000140B088EB: xor     r8d, r8d
 * 0000000140B088EE: lea     ecx, [r9+2Fh]
 * 0000000140B088F2: lea     edx, [rcx-2Ah]
 * 0000000140B088F5: mov     [rax], r8
 * 0000000140B088F8: add     ecx, 0FFFFFFF8h
 * 0000000140B088FB: add     rax, 8
 * 0000000140B088FF: sub     rdx, r9
 * 0000000140B08902: jnz     short loc_140B088F5
 * 0000000140B08904: test    ecx, ecx
 * 0000000140B08906: jz      short loc_140B08918
 * 0000000140B08908: mov     r8d, 0FFFFFFFFh
 * 0000000140B0890E: mov     [rax], dl
 * 0000000140B08910: add     rax, r9
 * 0000000140B08913: add     ecx, r8d
 * 0000000140B08916: jnz     short loc_140B0890E
 * 0000000140B08918: mov     dword ptr [rbx], 0Bh
 * 0000000140B0891E: mov     r9, r15
 * 0000000140B08921: mov     [rbx+8], r15
 * 0000000140B08925: mov     rax, r15
 * 0000000140B08928: mov     [rbx+10h], r12d
 * 0000000140B0892C: add     [rsi+828h], r12d
 * 0000000140B08933: mov     r10d, [rsi+814h]
 * 0000000140B0893A: mov     r14, [rsi+818h]
 * 0000000140B08941: mov     ecx, r12d
 * 0000000140B08944: add     rcx, r15
 * 0000000140B08947: cmp     r15, rcx
 * 0000000140B0894A: jnb     short loc_140B0895D
 * 0000000140B0894C: mov     r8d, 40h ; '@'
 * 0000000140B08952: prefetchnta byte ptr [rax]
 * 0000000140B08955: add     rax, r8
 * 0000000140B08958: cmp     rax, rcx
 * 0000000140B0895B: jb      short loc_140B08952
 * 0000000140B0895D: mov     r11d, r12d
 * 0000000140B08960: mov     r8, r14
 * 0000000140B08963: shr     r11d, 7
 * 0000000140B08967: test    r11d, r11d
 * 0000000140B0896A: jz      short loc_140B089E5
 * 0000000140B0896C: mov     edi, 0FFFFFFFFh
 * 0000000140B08971: mov     rbx, 7010008004002001h
 * 0000000140B0897B: mov     r13d, 1
 * 0000000140B08981: mov     eax, 8
 * 0000000140B08986: xor     r8, [r9]
 * 0000000140B08989: mov     ecx, r10d
 * 0000000140B0898C: rol     r8, cl
 * 0000000140B0898F: xor     r8, [r9+8]
 * 0000000140B08993: add     r9, 10h
 * 0000000140B08997: rol     r8, cl
 * 0000000140B0899A: sub     rax, r13
 * 0000000140B0899D: jnz     short loc_140B08986
 * 0000000140B0899F: mov     rcx, r9
 * 0000000140B089A2: sub     rcx, r15
 * 0000000140B089A5: xor     rcx, r14
 * 0000000140B089A8: mov     rax, rcx
 * 0000000140B089AB: rol     rax, 11h
 * 0000000140B089AF: xor     rcx, rax
 * 0000000140B089B2: mov     rax, rbx
 * 0000000140B089B5: mul     rcx
 * 0000000140B089B8: xor     r10d, eax
 * 0000000140B089BB: mov     [rbp+0A70h+var_4F8], rdx
 * 0000000140B089C2: xor     r10d, edx
 * 0000000140B089C5: and     r10d, 3Fh
 * 0000000140B089C9: cmovz   r10d, r13d
 * 0000000140B089CD: add     r11d, edi
 * 0000000140B089D0: jnz     short loc_140B08981
 * 0000000140B089D2: mov     rbx, [rbp+0A70h+arg_8]
 * 0000000140B089D9: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B089E0: mov     r13, [rsp+0B70h+var_B08]
 * 0000000140B089E5: mov     edx, r12d
 * 0000000140B089E8: mov     r14d, 1
 * 0000000140B089EE: and     edx, 7Fh
 * 0000000140B089F1: cmp     edx, 8
 * 0000000140B089F4: jb      short loc_140B08A11
 * 0000000140B089F6: mov     eax, edx
 * 0000000140B089F8: shr     rax, 3
 * 0000000140B089FC: xor     r8, [r9]
 * 0000000140B089FF: mov     ecx, r10d
 * 0000000140B08A02: rol     r8, cl
 * 0000000140B08A05: add     r9, 8
 * 0000000140B08A09: add     edx, 0FFFFFFF8h
 * 0000000140B08A0C: sub     rax, r14
 * 0000000140B08A0F: jnz     short loc_140B089FC
 * 0000000140B08A11: xor     r11d, r11d
 * 0000000140B08A14: test    edx, edx
 * 0000000140B08A16: jz      short loc_140B08A38
 * 0000000140B08A18: mov     r13d, 0FFFFFFFFh
 * 0000000140B08A1E: movzx   eax, byte ptr [r9]
 * 0000000140B08A22: mov     ecx, r10d
 * 0000000140B08A25: xor     r8, rax
 * 0000000140B08A28: add     r9, r14
 * 0000000140B08A2B: rol     r8, cl
 * 0000000140B08A2E: add     edx, r13d
 * 0000000140B08A31: jnz     short loc_140B08A1E
 * 0000000140B08A33: mov     r13, [rsp+0B70h+var_B08]
 * 0000000140B08A38: mov     rax, r8
 * 0000000140B08A3B: jmp     short loc_140B08A40
 * 0000000140B08A3D: xor     r8d, eax
 * 0000000140B08A40: shr     rax, 1Fh
 * 0000000140B08A44: test    rax, rax
 * 0000000140B08A47: jnz     short loc_140B08A3D
 * 0000000140B08A49: btr     r8d, 1Fh
 * 0000000140B08A4E: mov     [rbx+14h], r8d
 * 0000000140B08A52: mov     rbx, rsi
 * 0000000140B08A55: add     [rsi+828h], r12d
 * 0000000140B08A5C: mov     dword ptr [rsi+958h], 4
 * 0000000140B08A66: cmp     dword ptr [rbx+958h], 5
 * 0000000140B08A6D: jge     loc_140B08CA2
 * 0000000140B08A73: mov     r14d, [rbx+7E4h]
 * 0000000140B08A7A: mov     r15d, 20h ; ' '
 * 0000000140B08A80: mov     r12d, [rbx+838h]
 * 0000000140B08A87: cmp     r12d, 7
 * 0000000140B08A8B: mov     r8d, [rbx+924h]
 * 0000000140B08A92: cmovnz  r15d, r11d
 * 0000000140B08A96: lea     eax, [r14+30h]
 * 0000000140B08A9A: cmp     eax, [rbx+0A1Ch]
 * 0000000140B08AA0: jbe     loc_140B08B7C
 * 0000000140B08AA6: mov     edx, eax
 * 0000000140B08AA8: mov     rcx, rbx
 * 0000000140B08AAB: call    sub_140B12020
 * 0000000140B08AB0: xor     r11d, r11d
 * 0000000140B08AB3: mov     rsi, rax
 * 0000000140B08AB6: test    rax, rax
 * 0000000140B08AB9: jz      loc_140B093F2
 * 0000000140B08ABF: mov     ecx, [rbx+990h]
 * 0000000140B08AC5: test    cl, 4
 * 0000000140B08AC8: jnz     loc_140B08B73
 * 0000000140B08ACE: mov     eax, [rbx+7E4h]
 * 0000000140B08AD4: lea     r9d, [r11+1]
 * 0000000140B08AD8: mov     r8, [rbx+7C8h]
 * 0000000140B08ADF: and     ecx, 20000000h
 * 0000000140B08AE5: neg     ecx
 * 0000000140B08AE7: sbb     edx, edx
 * 0000000140B08AE9: and     edx, [rbx+924h]
 * 0000000140B08AEF: cmp     eax, 8
 * 0000000140B08AF2: jb      short loc_140B08B09
 * 0000000140B08AF4: mov     ecx, eax
 * 0000000140B08AF6: shr     rcx, 3
 * 0000000140B08AFA: mov     [rbx], r11
 * 0000000140B08AFD: add     eax, 0FFFFFFF8h
 * 0000000140B08B00: add     rbx, 8
 * 0000000140B08B04: sub     rcx, r9
 * 0000000140B08B07: jnz     short loc_140B08AFA
 * 0000000140B08B09: test    eax, eax
 * 0000000140B08B0B: jz      short loc_140B08B1C
 * 0000000140B08B0D: mov     ecx, 0FFFFFFFFh
 * 0000000140B08B12: mov     [rbx], r11b
 * 0000000140B08B15: add     rbx, r9
 * 0000000140B08B18: add     eax, ecx
 * 0000000140B08B1A: jnz     short loc_140B08B12
 * 0000000140B08B1C: mov     ebx, [rsi+924h]
 * 0000000140B08B22: mov     [rsi+924h], edx
 * 0000000140B08B28: cmp     edx, 3
 * 0000000140B08B2B: jz      short loc_140B08B5B
 * 0000000140B08B2D: test    dword ptr [rsi+990h], 10000000h
 * 0000000140B08B37: jnz     short loc_140B08B52
 * 0000000140B08B39: test    edx, edx
 * 0000000140B08B3B: jz      short loc_140B08B52
 * 0000000140B08B3D: mov     rax, [rsi+228h]
 * 0000000140B08B44: lea     rcx, [r8-8]
 * 0000000140B08B48: mov     rdx, [rcx]
 * 0000000140B08B4B: call    KeGuardDispatchICall
 * 0000000140B08B50: jmp     short loc_140B08B6A
 * 0000000140B08B52: mov     rax, [rsi+0F8h]
 * 0000000140B08B59: jmp     short loc_140B08B62
 * 0000000140B08B5B: mov     rax, [rsi+368h]
 * 0000000140B08B62: mov     rcx, r8
 * 0000000140B08B65: call    KeGuardDispatchICall
 * 0000000140B08B6A: mov     [rsi+924h], ebx
 * 0000000140B08B70: xor     r11d, r11d
 * 0000000140B08B73: and     dword ptr [rsi+990h], 0FFFFFFFBh
 * 0000000140B08B7A: jmp     short loc_140B08B85
 * 0000000140B08B7C: mov     rsi, rbx
 * 0000000140B08B7F: mov     [rbx+7E4h], eax
 * 0000000140B08B85: mov     r8d, 1
 * 0000000140B08B8B: lea     rbx, [rsi+r14]
 * 0000000140B08B8F: add     [rsi+80Ch], r8d
 * 0000000140B08B96: mov     rax, rbx
 * 0000000140B08B99: mov     r14d, 0FFFFFFF8h
 * 0000000140B08B9F: lea     ecx, [r8+2Fh]
 * 0000000140B08BA3: lea     edx, [rcx-2Ah]
 * 0000000140B08BA6: mov     [rax], r11
 * 0000000140B08BA9: add     ecx, r14d
 * 0000000140B08BAC: add     rax, 8
 * 0000000140B08BB0: sub     rdx, r8
 * 0000000140B08BB3: jnz     short loc_140B08BA6
 * 0000000140B08BB5: test    ecx, ecx
 * 0000000140B08BB7: jz      short loc_140B08BC8
 * 0000000140B08BB9: mov     edx, 0FFFFFFFFh
 * 0000000140B08BBE: mov     [rax], r11b
 * 0000000140B08BC1: add     rax, r8
 * 0000000140B08BC4: add     ecx, edx
 * 0000000140B08BC6: jnz     short loc_140B08BBE
 * 0000000140B08BC8: mov     [rbx], r15d
 * 0000000140B08BCB: mov     [rbx+8], r13
 * 0000000140B08BCF: cmp     r12d, 7
 * 0000000140B08BD3: jnz     short loc_140B08BE9
 * 0000000140B08BD5: lea     r9, [rbx+18h]
 * 0000000140B08BD9: mov     rdx, r13
 * 0000000140B08BDC: lea     r8d, [r12+19h]
 * 0000000140B08BE1: mov     rcx, rsi
 * 0000000140B08BE4: call    sub_1403F152C
 * 0000000140B08BE9: mov     rcx, [rsp+0B70h+var_B18]
 * 0000000140B08BEE: mov     r11d, 20h ; ' '
 * 0000000140B08BF4: mov     [rbx+10h], r11d
 * 0000000140B08BF8: add     rcx, 40h ; '@'
 * 0000000140B08BFC: add     [rsi+828h], r11d
 * 0000000140B08C03: mov     r8, r13
 * 0000000140B08C06: mov     r10d, [rsi+814h]
 * 0000000140B08C0D: mov     rax, r13
 * 0000000140B08C10: mov     rdx, [rsi+818h]
 * 0000000140B08C17: cmp     r13, rcx
 * 0000000140B08C1A: jnb     short loc_140B08C2B
 * 0000000140B08C1C: lea     r9d, [r11+20h]
 * 0000000140B08C20: prefetchnta byte ptr [rax]
 * 0000000140B08C23: add     rax, r9
 * 0000000140B08C26: cmp     rax, rcx
 * 0000000140B08C29: jb      short loc_140B08C20
 * 0000000140B08C2B: mov     eax, 4
 * 0000000140B08C30: mov     r9d, r11d
 * 0000000140B08C33: lea     r12d, [rax-3]
 * 0000000140B08C37: xor     rdx, [r8]
 * 0000000140B08C3A: mov     ecx, r10d
 * 0000000140B08C3D: rol     rdx, cl
 * 0000000140B08C40: add     r8, 8
 * 0000000140B08C44: add     r9d, r14d
 * 0000000140B08C47: sub     rax, r12
 * 0000000140B08C4A: jnz     short loc_140B08C37
 * 0000000140B08C4C: test    r9d, r9d
 * 0000000140B08C4F: jz      short loc_140B08C72
 * 0000000140B08C51: mov     edi, 0FFFFFFFFh
 * 0000000140B08C56: movzx   eax, byte ptr [r8]
 * 0000000140B08C5A: mov     ecx, r10d
 * 0000000140B08C5D: xor     rdx, rax
 * 0000000140B08C60: add     r8, r12
 * 0000000140B08C63: rol     rdx, cl
 * 0000000140B08C66: add     r9d, edi
 * 0000000140B08C69: jnz     short loc_140B08C56
 * 0000000140B08C6B: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B08C72: mov     rax, rdx
 * 0000000140B08C75: jmp     short loc_140B08C79
 * 0000000140B08C77: xor     edx, eax
 * 0000000140B08C79: shr     rax, 1Fh
 * 0000000140B08C7D: test    rax, rax
 * 0000000140B08C80: jnz     short loc_140B08C77
 * 0000000140B08C82: btr     edx, 1Fh
 * 0000000140B08C86: mov     [rbx+14h], edx
 * 0000000140B08C89: mov     rbx, rsi
 * 0000000140B08C8C: add     [rsi+828h], r11d
 * 0000000140B08C93: xor     r11d, r11d
 * 0000000140B08C96: mov     dword ptr [rsi+958h], 5
 * 0000000140B08CA0: jmp     short loc_140B08CA8
 * 0000000140B08CA2: mov     r12d, 1
 * 0000000140B08CA8: mov     eax, [rbx+958h]
 * 0000000140B08CAE: mov     r13d, 6
 * 0000000140B08CB4: mov     [rbp+0A70h+var_AE8], rbx
 * 0000000140B08CB8: mov     r14, rbx
 * 0000000140B08CBB: cmp     eax, r13d
 * 0000000140B08CBE: jge     loc_140B0904F
 * 0000000140B08CC4: test    dword ptr [rbx+990h], 40000000h
 * 0000000140B08CCE: mov     r13d, r11d
 * 0000000140B08CD1: mov     r15, [rbp+0A70h+var_AA8]
 * 0000000140B08CD5: mov     rsi, rbx
 * 0000000140B08CD8: mov     rax, [r15+20h]
 * 0000000140B08CDC: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B08CE3: jnz     loc_140B0903D
 * 0000000140B08CE9: mov     r14d, r11d
 * 0000000140B08CEC: mov     [rbp+0A70h+var_AE8], rbx
 * 0000000140B08CF0: cmp     [r15+30h], r11d
 * 0000000140B08CF4: jbe     loc_140B0903D
 * 0000000140B08CFA: mov     rdi, rax
 * 0000000140B08CFD: mov     eax, r14d
 * 0000000140B08D00: lea     rdx, [rbp+0A70h+var_7D0]
 * 0000000140B08D07: xor     r8d, r8d
 * 0000000140B08D0A: movsxd  rcx, dword ptr [rdi+rax*4]
 * 0000000140B08D0E: mov     rax, [rbx+260h]
 * 0000000140B08D15: sar     rcx, 4
 * 0000000140B08D19: add     rcx, rdi
 * 0000000140B08D1C: call    KeGuardDispatchICall
 * 0000000140B08D21: xor     r11d, r11d
 * 0000000140B08D24: test    rax, rax
 * 0000000140B08D27: jnz     short loc_140B08D2C
 * 0000000140B08D29: add     r13d, r12d
 * 0000000140B08D2C: add     r14d, r12d
 * 0000000140B08D2F: cmp     r14d, [r15+30h]
 * 0000000140B08D33: jb      short loc_140B08CFD
 * 0000000140B08D35: mov     [rbp+0A70h+var_AE8], rbx
 * 0000000140B08D39: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B08D40: test    r13d, r13d
 * 0000000140B08D43: jz      loc_140B0903D
 * 0000000140B08D49: mov     r14d, [rbx+7E4h]
 * 0000000140B08D50: mov     ecx, r13d
 * 0000000140B08D53: mov     r8d, [rbx+924h]
 * 0000000140B08D5A: shl     ecx, 4
 * 0000000140B08D5D: add     ecx, 30h ; '0'
 * 0000000140B08D60: add     ecx, r14d
 * 0000000140B08D63: cmp     ecx, [rbx+0A1Ch]
 * 0000000140B08D69: jbe     loc_140B08E45
 * 0000000140B08D6F: mov     edx, ecx
 * 0000000140B08D71: mov     rcx, rbx
 * 0000000140B08D74: call    sub_140B12020
 * 0000000140B08D79: xor     r11d, r11d
 * 0000000140B08D7C: mov     [rbp+0A70h+var_AE8], rax
 * 0000000140B08D80: mov     rsi, rax
 * 0000000140B08D83: test    rax, rax
 * 0000000140B08D86: jz      loc_140B093F2
 * 0000000140B08D8C: mov     ecx, [rbx+990h]
 * 0000000140B08D92: test    cl, 4
 * 0000000140B08D95: jnz     loc_140B08E3C
 * 0000000140B08D9B: mov     eax, [rbx+7E4h]
 * 0000000140B08DA1: and     ecx, 20000000h
 * 0000000140B08DA7: mov     r8, [rbx+7C8h]
 * 0000000140B08DAE: neg     ecx
 * 0000000140B08DB0: sbb     edx, edx
 * 0000000140B08DB2: and     edx, [rbx+924h]
 * 0000000140B08DB8: cmp     eax, 8
 * 0000000140B08DBB: jb      short loc_140B08DD2
 * 0000000140B08DBD: mov     ecx, eax
 * 0000000140B08DBF: shr     rcx, 3
 * 0000000140B08DC3: mov     [rbx], r11
 * 0000000140B08DC6: add     eax, 0FFFFFFF8h
 * 0000000140B08DC9: add     rbx, 8
 * 0000000140B08DCD: sub     rcx, r12
 * 0000000140B08DD0: jnz     short loc_140B08DC3
 * 0000000140B08DD2: test    eax, eax
 * 0000000140B08DD4: jz      short loc_140B08DE5
 * 0000000140B08DD6: mov     ecx, 0FFFFFFFFh
 * 0000000140B08DDB: mov     [rbx], r11b
 * 0000000140B08DDE: add     rbx, r12
 * 0000000140B08DE1: add     eax, ecx
 * 0000000140B08DE3: jnz     short loc_140B08DDB
 * 0000000140B08DE5: mov     ebx, [rsi+924h]
 * 0000000140B08DEB: mov     [rsi+924h], edx
 * 0000000140B08DF1: cmp     edx, 3
 * 0000000140B08DF4: jz      short loc_140B08E24
 * 0000000140B08DF6: test    dword ptr [rsi+990h], 10000000h
 * 0000000140B08E00: jnz     short loc_140B08E1B
 * 0000000140B08E02: test    edx, edx
 * 0000000140B08E04: jz      short loc_140B08E1B
 * 0000000140B08E06: mov     rax, [rsi+228h]
 * 0000000140B08E0D: lea     rcx, [r8-8]
 * 0000000140B08E11: mov     rdx, [rcx]
 * 0000000140B08E14: call    KeGuardDispatchICall
 * 0000000140B08E19: jmp     short loc_140B08E33
 * 0000000140B08E1B: mov     rax, [rsi+0F8h]
 * 0000000140B08E22: jmp     short loc_140B08E2B
 * 0000000140B08E24: mov     rax, [rsi+368h]
 * 0000000140B08E2B: mov     rcx, r8
 * 0000000140B08E2E: call    KeGuardDispatchICall
 * 0000000140B08E33: mov     [rsi+924h], ebx
 * 0000000140B08E39: xor     r11d, r11d
 * 0000000140B08E3C: and     dword ptr [rsi+990h], 0FFFFFFFBh
 * 0000000140B08E43: jmp     short loc_140B08E4F
 * 0000000140B08E45: mov     [rbp+0A70h+var_AE8], rbx
 * 0000000140B08E49: mov     [rbx+7E4h], ecx
 * 0000000140B08E4F: add     [rsi+80Ch], r12d
 * 0000000140B08E56: lea     rbx, [rsi+r14]
 * 0000000140B08E5A: mov     ecx, 30h ; '0'
 * 0000000140B08E5F: mov     rax, rbx
 * 0000000140B08E62: lea     edx, [rcx-2Ah]
 * 0000000140B08E65: mov     [rax], r11
 * 0000000140B08E68: add     ecx, 0FFFFFFF8h
 * 0000000140B08E6B: add     rax, 8
 * 0000000140B08E6F: sub     rdx, r12
 * 0000000140B08E72: jnz     short loc_140B08E65
 * 0000000140B08E74: test    ecx, ecx
 * 0000000140B08E76: jz      short loc_140B08E87
 * 0000000140B08E78: mov     edx, 0FFFFFFFFh
 * 0000000140B08E7D: mov     [rax], r11b
 * 0000000140B08E80: add     rax, r12
 * 0000000140B08E83: add     ecx, edx
 * 0000000140B08E85: jnz     short loc_140B08E7D
 * 0000000140B08E87: mov     dword ptr [rbx], 0Ah
 * 0000000140B08E8D: mov     [rbx+8], r11
 * 0000000140B08E91: mov     [rbx+10h], r11d
 * 0000000140B08E95: mov     rcx, [rsi+818h]
 * 0000000140B08E9C: mov     rax, rcx
 * 0000000140B08E9F: jmp     short loc_140B08EA3
 * 0000000140B08EA1: xor     ecx, eax
 * 0000000140B08EA3: shr     rax, 1Fh
 * 0000000140B08EA7: test    rax, rax
 * 0000000140B08EAA: jnz     short loc_140B08EA1
 * 0000000140B08EAC: btr     ecx, 1Fh
 * 0000000140B08EB0: lea     r15, [rbx+30h]
 * 0000000140B08EB4: mov     [rbx+14h], ecx
 * 0000000140B08EB7: mov     rcx, [rbp+0A70h+var_AA8]
 * 0000000140B08EBB: mov     [rbx+18h], r12d
 * 0000000140B08EBF: mov     r12d, r11d
 * 0000000140B08EC2: mov     [rbx+1Ch], r13d
 * 0000000140B08EC6: cmp     [rcx+30h], r11d
 * 0000000140B08ECA: jbe     loc_140B08FC2
 * 0000000140B08ED0: mov     rcx, [rbp+0A70h+arg_8]
 * 0000000140B08ED7: lea     rdx, [rbp+0A70h+var_7D0]
 * 0000000140B08EDE: mov     eax, r12d
 * 0000000140B08EE1: xor     r8d, r8d
 * 0000000140B08EE4: movsxd  r14, dword ptr [rcx+rax*4]
 * 0000000140B08EE8: mov     rax, [rsi+260h]
 * 0000000140B08EEF: sar     r14, 4
 * 0000000140B08EF3: add     r14, rcx
 * 0000000140B08EF6: mov     rcx, r14
 * 0000000140B08EF9: call    KeGuardDispatchICall
 * 0000000140B08EFE: xor     r11d, r11d
 * 0000000140B08F01: test    rax, rax
 * 0000000140B08F04: jnz     loc_140B08FA5
 * 0000000140B08F0A: lea     r11d, [rax+4]
 * 0000000140B08F0E: mov     r8, r14
 * 0000000140B08F11: add     [rsi+828h], r11d
 * 0000000140B08F18: lea     rcx, [r14+4]
 * 0000000140B08F1C: mov     r10d, [rsi+814h]
 * 0000000140B08F23: mov     rax, r14
 * 0000000140B08F26: mov     rdx, [rsi+818h]
 * 0000000140B08F2D: cmp     r14, rcx
 * 0000000140B08F30: jnb     short loc_140B08F41
 * 0000000140B08F32: lea     r9d, [r11+3Ch]
 * 0000000140B08F36: prefetchnta byte ptr [rax]
 * 0000000140B08F39: add     rax, r9
 * 0000000140B08F3C: cmp     rax, rcx
 * 0000000140B08F3F: jb      short loc_140B08F36
 * 0000000140B08F41: mov     r9d, r11d
 * 0000000140B08F44: mov     esi, 1
 * 0000000140B08F49: mov     edi, 0FFFFFFFFh
 * 0000000140B08F4E: movzx   eax, byte ptr [r8]
 * 0000000140B08F52: mov     ecx, r10d
 * 0000000140B08F55: xor     rdx, rax
 * 0000000140B08F58: add     r8, rsi
 * 0000000140B08F5B: rol     rdx, cl
 * 0000000140B08F5E: add     r9d, edi
 * 0000000140B08F61: jnz     short loc_140B08F4E
 * 0000000140B08F63: mov     rsi, [rbp+0A70h+var_AE8]
 * 0000000140B08F67: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B08F6E: mov     rax, rdx
 * 0000000140B08F71: jmp     short loc_140B08F75
 * 0000000140B08F73: xor     edx, eax
 * 0000000140B08F75: shr     rax, 1Fh
 * 0000000140B08F79: test    rax, rax
 * 0000000140B08F7C: jnz     short loc_140B08F73
 * 0000000140B08F7E: xor     edx, [r15]
 * 0000000140B08F81: mov     eax, 0FFFFFFFFh
 * 0000000140B08F86: btr     edx, 1Fh
 * 0000000140B08F8A: xor     [r15], edx
 * 0000000140B08F8D: mov     [r15+4], r11d
 * 0000000140B08F91: mov     [r15+8], r14
 * 0000000140B08F95: add     r15, 10h
 * 0000000140B08F99: add     r13d, eax
 * 0000000140B08F9C: jz      loc_140B0903A
 * 0000000140B08FA2: xor     r11d, r11d
 * 0000000140B08FA5: mov     rax, [rbp+0A70h+var_AA8]
 * 0000000140B08FA9: mov     edx, 1
 * 0000000140B08FAE: add     r12d, edx
 * 0000000140B08FB1: cmp     r12d, [rax+30h]
 * 0000000140B08FB5: jb      loc_140B08ED0
 * 0000000140B08FBB: test    r13d, r13d
 * 0000000140B08FBE: jz      short loc_140B0903D
 * 0000000140B08FC0: jmp     short loc_140B08FC7
 * 0000000140B08FC2: mov     edx, 1
 * 0000000140B08FC7: cmp     [rsi+8F8h], r11d
 * 0000000140B08FCE: jnz     short loc_140B09032
 * 0000000140B08FD0: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B08FDA: mov     rcx, 0B3B74BDEE4453415h
 * 0000000140B08FE4: add     rax, rsi
 * 0000000140B08FE7: add     rcx, rbx
 * 0000000140B08FEA: mov     [rsi+900h], rax
 * 0000000140B08FF1: mov     rax, rbx
 * 0000000140B08FF4: neg     rax
 * 0000000140B08FF7: sbb     rax, rax
 * 0000000140B08FFA: and     rax, rcx
 * 0000000140B08FFD: mov     [rsi+908h], rax
 * 0000000140B09004: test    rbx, rbx
 * 0000000140B09007: jz      short loc_140B0900E
 * 0000000140B09009: movsxd  rax, dword ptr [rbx]
 * 0000000140B0900C: jmp     short loc_140B09011
 * 0000000140B0900E: mov     rax, r11
 * 0000000140B09011: mov     [rsi+910h], rax
 * 0000000140B09018: mov     rcx, rsi
 * 0000000140B0901B: mov     [rsi+918h], r11
 * 0000000140B09022: mov     [rsi+8F8h], edx
 * 0000000140B09028: xor     edx, edx
 * 0000000140B0902A: call    $$ba
 * 0000000140B0902F: xor     r11d, r11d
 * 0000000140B09032: mov     rbx, rsi
 * 0000000140B09035: jmp     loc_140B093F2
 * 0000000140B0903A: xor     r11d, r11d
 * 0000000140B0903D: mov     r13d, 6
 * 0000000140B09043: mov     r14, rsi
 * 0000000140B09046: mov     [rsi+958h], r13d
 * 0000000140B0904D: jmp     short loc_140B09058
 * 0000000140B0904F: cmp     eax, 7
 * 0000000140B09052: jge     loc_140B09491
 * 0000000140B09058: test    dword ptr [r14+990h], 40000000h
 * 0000000140B09063: mov     r15d, r11d
 * 0000000140B09066: mov     rdx, [rsp+0B70h+var_B08]
 * 0000000140B0906B: mov     rax, [rdx]
 * 0000000140B0906E: mov     [rbp+0A70h+var_AC0], rax
 * 0000000140B09072: jnz     loc_140B09483
 * 0000000140B09078: mov     rax, [rsp+0B70h+var_B18]
 * 0000000140B0907D: mov     ebx, r11d
 * 0000000140B09080: cmp     [rax+30h], r11d
 * 0000000140B09084: jbe     loc_140B09483
 * 0000000140B0908A: mov     rdi, [rbp+0A70h+var_AC0]
 * 0000000140B0908E: mov     rsi, rax
 * 0000000140B09091: mov     eax, ebx
 * 0000000140B09093: lea     rdx, [rbp+0A70h+var_7C8]
 * 0000000140B0909A: xor     r8d, r8d
 * 0000000140B0909D: movsxd  rcx, dword ptr [rdi+rax*4]
 * 0000000140B090A1: mov     rax, [r14+260h]
 * 0000000140B090A8: sar     rcx, 4
 * 0000000140B090AC: add     rcx, rdi
 * 0000000140B090AF: call    KeGuardDispatchICall
 * 0000000140B090B4: xor     r11d, r11d
 * 0000000140B090B7: test    rax, rax
 * 0000000140B090BA: lea     eax, [r11+1]
 * 0000000140B090BE: jnz     short loc_140B090C3
 * 0000000140B090C0: add     r15d, eax
 * 0000000140B090C3: add     ebx, eax
 * 0000000140B090C5: cmp     ebx, [rsi+30h]
 * 0000000140B090C8: jb      short loc_140B09091
 * 0000000140B090CA: mov     rsi, [rbp+0A70h+var_AE8]
 * 0000000140B090CE: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B090D5: mov     dword ptr [rbp+0A70h+arg_8], r15d
 * 0000000140B090DC: test    r15d, r15d
 * 0000000140B090DF: jz      loc_140B09483
 * 0000000140B090E5: mov     r12d, [r14+7E4h]
 * 0000000140B090EC: mov     ecx, r15d
 * 0000000140B090EF: mov     r8d, [r14+924h]
 * 0000000140B090F6: shl     ecx, 4
 * 0000000140B090F9: add     ecx, 30h ; '0'
 * 0000000140B090FC: add     ecx, r12d
 * 0000000140B090FF: cmp     ecx, [r14+0A1Ch]
 * 0000000140B09106: jbe     loc_140B091E5
 * 0000000140B0910C: mov     edx, ecx
 * 0000000140B0910E: mov     rcx, r14
 * 0000000140B09111: call    sub_140B12020
 * 0000000140B09116: xor     r11d, r11d
 * 0000000140B09119: mov     rbx, rax
 * 0000000140B0911C: test    rax, rax
 * 0000000140B0911F: jz      loc_140B09032
 * 0000000140B09125: mov     ecx, [r14+990h]
 * 0000000140B0912C: test    cl, 4
 * 0000000140B0912F: jnz     loc_140B091DC
 * 0000000140B09135: mov     eax, [r14+7E4h]
 * 0000000140B0913C: lea     r9d, [r11+1]
 * 0000000140B09140: mov     r8, [r14+7C8h]
 * 0000000140B09147: and     ecx, 20000000h
 * 0000000140B0914D: neg     ecx
 * 0000000140B0914F: sbb     edx, edx
 * 0000000140B09151: and     edx, [r14+924h]
 * 0000000140B09158: cmp     eax, 8
 * 0000000140B0915B: jb      short loc_140B09172
 * 0000000140B0915D: mov     ecx, eax
 * 0000000140B0915F: shr     rcx, 3
 * 0000000140B09163: mov     [r14], r11
 * 0000000140B09166: add     eax, 0FFFFFFF8h
 * 0000000140B09169: add     r14, 8
 * 0000000140B0916D: sub     rcx, r9
 * 0000000140B09170: jnz     short loc_140B09163
 * 0000000140B09172: test    eax, eax
 * 0000000140B09174: jz      short loc_140B09185
 * 0000000140B09176: mov     ecx, 0FFFFFFFFh
 * 0000000140B0917B: mov     [r14], r11b
 * 0000000140B0917E: add     r14, r9
 * 0000000140B09181: add     eax, ecx
 * 0000000140B09183: jnz     short loc_140B0917B
 * 0000000140B09185: mov     esi, [rbx+924h]
 * 0000000140B0918B: mov     [rbx+924h], edx
 * 0000000140B09191: cmp     edx, 3
 * 0000000140B09194: jz      short loc_140B091C4
 * 0000000140B09196: test    dword ptr [rbx+990h], 10000000h
 * 0000000140B091A0: jnz     short loc_140B091BB
 * 0000000140B091A2: test    edx, edx
 * 0000000140B091A4: jz      short loc_140B091BB
 * 0000000140B091A6: mov     rax, [rbx+228h]
 * 0000000140B091AD: lea     rcx, [r8-8]
 * 0000000140B091B1: mov     rdx, [rcx]
 * 0000000140B091B4: call    KeGuardDispatchICall
 * 0000000140B091B9: jmp     short loc_140B091D3
 * 0000000140B091BB: mov     rax, [rbx+0F8h]
 * 0000000140B091C2: jmp     short loc_140B091CB
 * 0000000140B091C4: mov     rax, [rbx+368h]
 * 0000000140B091CB: mov     rcx, r8
 * 0000000140B091CE: call    KeGuardDispatchICall
 * 0000000140B091D3: mov     [rbx+924h], esi
 * 0000000140B091D9: xor     r11d, r11d
 * 0000000140B091DC: and     dword ptr [rbx+990h], 0FFFFFFFBh
 * 0000000140B091E3: jmp     short loc_140B091EF
 * 0000000140B091E5: mov     rbx, r14
 * 0000000140B091E8: mov     [r14+7E4h], ecx
 * 0000000140B091EF: mov     r8d, 1
 * 0000000140B091F5: lea     rsi, [rbx+r12]
 * 0000000140B091F9: add     [rbx+80Ch], r8d
 * 0000000140B09200: mov     rax, rsi
 * 0000000140B09203: mov     [rsp+0B70h+var_AF8], rsi
 * 0000000140B09208: mov     rdx, r13
 * 0000000140B0920B: lea     ecx, [r8+2Fh]
 * 0000000140B0920F: mov     [rax], r11
 * 0000000140B09212: add     ecx, 0FFFFFFF8h
 * 0000000140B09215: add     rax, 8
 * 0000000140B09219: sub     rdx, r8
 * 0000000140B0921C: jnz     short loc_140B0920F
 * 0000000140B0921E: test    ecx, ecx
 * 0000000140B09220: jz      short loc_140B09231
 * 0000000140B09222: mov     edx, 0FFFFFFFFh
 * 0000000140B09227: mov     [rax], r11b
 * 0000000140B0922A: add     rax, r8
 * 0000000140B0922D: add     ecx, edx
 * 0000000140B0922F: jnz     short loc_140B09227
 * 0000000140B09231: mov     dword ptr [rsi], 0Ah
 * 0000000140B09237: mov     [rsi+8], r11
 * 0000000140B0923B: mov     [rsi+10h], r11d
 * 0000000140B0923F: mov     rcx, [rbx+818h]
 * 0000000140B09246: mov     rax, rcx
 * 0000000140B09249: jmp     short loc_140B0924D
 * 0000000140B0924B: xor     ecx, eax
 * 0000000140B0924D: shr     rax, 1Fh
 * 0000000140B09251: test    rax, rax
 * 0000000140B09254: jnz     short loc_140B0924B
 * 0000000140B09256: mov     rax, [rsp+0B70h+var_B18]
 * 0000000140B0925B: lea     r13, [rsi+30h]
 * 0000000140B0925F: btr     ecx, 1Fh
 * 0000000140B09263: mov     r14, rbx
 * 0000000140B09266: mov     [rsi+14h], ecx
 * 0000000140B09269: mov     r12d, r11d
 * 0000000140B0926C: mov     [rsi+18h], r8d
 * 0000000140B09270: mov     [rsi+1Ch], r15d
 * 0000000140B09274: cmp     [rax+30h], r11d
 * 0000000140B09278: jbe     loc_140B0937E
 * 0000000140B0927E: mov     rcx, [rbp+0A70h+var_AC0]
 * 0000000140B09282: lea     rdx, [rbp+0A70h+var_7C8]
 * 0000000140B09289: mov     eax, r12d
 * 0000000140B0928C: xor     r8d, r8d
 * 0000000140B0928F: movsxd  r15, dword ptr [rcx+rax*4]
 * 0000000140B09293: mov     rax, [rbx+260h]
 * 0000000140B0929A: sar     r15, 4
 * 0000000140B0929E: add     r15, rcx
 * 0000000140B092A1: mov     rcx, r15
 * 0000000140B092A4: call    KeGuardDispatchICall
 * 0000000140B092A9: xor     r11d, r11d
 * 0000000140B092AC: test    rax, rax
 * 0000000140B092AF: jnz     loc_140B093C5
 * 0000000140B092B5: lea     r11d, [rax+4]
 * 0000000140B092B9: mov     r8, r15
 * 0000000140B092BC: add     [rbx+828h], r11d
 * 0000000140B092C3: lea     rcx, [r15+4]
 * 0000000140B092C7: mov     r10d, [rbx+814h]
 * 0000000140B092CE: mov     rax, r15
 * 0000000140B092D1: mov     rdx, [rbx+818h]
 * 0000000140B092D8: cmp     r15, rcx
 * 0000000140B092DB: jnb     short loc_140B092EC
 * 0000000140B092DD: lea     r9d, [r11+3Ch]
 * 0000000140B092E1: prefetchnta byte ptr [rax]
 * 0000000140B092E4: add     rax, r9
 * 0000000140B092E7: cmp     rax, rcx
 * 0000000140B092EA: jb      short loc_140B092E1
 * 0000000140B092EC: mov     r9d, r11d
 * 0000000140B092EF: mov     edi, 1
 * 0000000140B092F4: mov     esi, 0FFFFFFFFh
 * 0000000140B092F9: movzx   eax, byte ptr [r8]
 * 0000000140B092FD: mov     ecx, r10d
 * 0000000140B09300: xor     rdx, rax
 * 0000000140B09303: add     r8, rdi
 * 0000000140B09306: rol     rdx, cl
 * 0000000140B09309: add     r9d, esi
 * 0000000140B0930C: jnz     short loc_140B092F9
 * 0000000140B0930E: mov     rsi, [rsp+0B70h+var_AF8]
 * 0000000140B09313: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0931A: mov     rax, rdx
 * 0000000140B0931D: jmp     short loc_140B09321
 * 0000000140B0931F: xor     edx, eax
 * 0000000140B09321: shr     rax, 1Fh
 * 0000000140B09325: test    rax, rax
 * 0000000140B09328: jnz     short loc_140B0931F
 * 0000000140B0932A: xor     edx, [r13+0]
 * 0000000140B0932E: mov     ecx, 0FFFFFFFFh
 * 0000000140B09333: mov     eax, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B09339: btr     edx, 1Fh
 * 0000000140B0933D: xor     [r13+0], edx
 * 0000000140B09341: mov     [r13+4], r11d
 * 0000000140B09345: mov     [r13+8], r15
 * 0000000140B09349: add     r13, 10h
 * 0000000140B0934D: add     eax, ecx
 * 0000000140B0934F: mov     dword ptr [rbp+0A70h+arg_8], eax
 * 0000000140B09355: jz      loc_140B09483
 * 0000000140B0935B: xor     r11d, r11d
 * 0000000140B0935E: mov     rcx, [rsp+0B70h+var_B18]
 * 0000000140B09363: mov     r8d, 1
 * 0000000140B09369: add     r12d, r8d
 * 0000000140B0936C: cmp     r12d, [rcx+30h]
 * 0000000140B09370: jb      loc_140B0927E
 * 0000000140B09376: test    eax, eax
 * 0000000140B09378: jz      loc_140B09483
 * 0000000140B0937E: cmp     [rbx+8F8h], r11d
 * 0000000140B09385: jnz     short loc_140B093F2
 * 0000000140B09387: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B09391: mov     rcx, 0B3B74BDEE4453415h
 * 0000000140B0939B: add     rax, rbx
 * 0000000140B0939E: add     rcx, rsi
 * 0000000140B093A1: mov     [rbx+900h], rax
 * 0000000140B093A8: mov     rax, rsi
 * 0000000140B093AB: neg     rax
 * 0000000140B093AE: sbb     rax, rax
 * 0000000140B093B1: and     rax, rcx
 * 0000000140B093B4: mov     [rbx+908h], rax
 * 0000000140B093BB: test    rsi, rsi
 * 0000000140B093BE: jz      short loc_140B093CD
 * 0000000140B093C0: movsxd  rax, dword ptr [rsi]
 * 0000000140B093C3: jmp     short loc_140B093D0
 * 0000000140B093C5: mov     eax, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B093CB: jmp     short loc_140B0935E
 * 0000000140B093CD: mov     rax, r11
 * 0000000140B093D0: mov     [rbx+910h], rax
 * 0000000140B093D7: xor     edx, edx
 * 0000000140B093D9: mov     [rbx+918h], r11
 * 0000000140B093E0: mov     rcx, rbx
 * 0000000140B093E3: mov     [rbx+8F8h], r8d
 * 0000000140B093EA: call    $$ba
 * 0000000140B093EF: xor     r11d, r11d
 * 0000000140B093F2: mov     rsi, rbx
 * 0000000140B093F5: mov     r13d, 1
 * 0000000140B093FB: bt      dword ptr [rbx+990h], 0Fh
 * 0000000140B09403: jb      short loc_140B09412
 * 0000000140B09405: cmp     [rbx+8F8h], r11d
 * 0000000140B0940C: jnz     loc_140B0BE64
 * 0000000140B09412: mov     r14, [rbx+980h]
 * 0000000140B09419: lea     rdx, [rbp+0A70h+var_680]
 * 0000000140B09420: mov     [rbx+980h], r11
 * 0000000140B09427: mov     rcx, r14
 * 0000000140B0942A: mov     rax, [rbx+298h]
 * 0000000140B09431: call    KeGuardDispatchICall
 * 0000000140B09436: mov     eax, [rbx+990h]
 * 0000000140B0943C: test    r13b, al
 * 0000000140B0943F: jz      loc_140B0BC2F
 * 0000000140B09445: and     eax, 0FFFFFFFEh
 * 0000000140B09448: mov     rcx, r14
 * 0000000140B0944B: mov     [rbx+990h], eax
 * 0000000140B09451: mov     rax, [rbx+280h]
 * 0000000140B09458: call    KeGuardDispatchICall
 * 0000000140B0945D: mov     r14, rax
 * 0000000140B09460: test    rax, rax
 * 0000000140B09463: jz      loc_140B0BC1D
 * 0000000140B09469: mov     rax, [rbx+2A0h]
 * 0000000140B09470: mov     rcx, r14
 * 0000000140B09473: call    KeGuardDispatchICall
 * 0000000140B09478: mov     [rbx+970h], eax
 * 0000000140B0947E: jmp     loc_140B0BC38
 * 0000000140B09483: mov     rbx, r14
 * 0000000140B09486: mov     dword ptr [r14+958h], 7
 * 0000000140B09491: mov     r14d, 0FFFFFFFFh
 * 0000000140B09497: mov     rax, [rbx+568h]
 * 0000000140B0949E: lea     rdx, [rbp+0A70h+var_1F8]
 * 0000000140B094A5: mov     rsi, rbx
 * 0000000140B094A8: mov     [rsp+0B70h+var_B10], rbx
 * 0000000140B094AD: mov     [rbp+0A70h+var_A58], rbx
 * 0000000140B094B1: mov     rcx, [rax+20h]
 * 0000000140B094B5: mov     rax, [rbx+200h]
 * 0000000140B094BC: mov     [rbp+0A70h+var_AC0], rcx
 * 0000000140B094C0: call    KeGuardDispatchICall
 * 0000000140B094C5: mov     r13d, [rbp+0A70h+var_1E4]
 * 0000000140B094CC: mov     r12, rax
 * 0000000140B094CF: mov     [rsp+0B70h+var_AF8], rax
 * 0000000140B094D4: xor     r11d, r11d
 * 0000000140B094D7: mov     rax, [rbp+0A70h+var_1F0]
 * 0000000140B094DE: mov     dword ptr [rbp+0A70h+arg_8], r13d
 * 0000000140B094E5: mov     [rbp+0A70h+var_A98], rax
 * 0000000140B094E9: test    rax, rax
 * 0000000140B094EC: jnz     short loc_140B0951F
 * 0000000140B094EE: test    dword ptr [rbx+990h], 200000h
 * 0000000140B094F8: jz      loc_140B0E22E
 * 0000000140B094FE: jmp     loc_140B093F5
 * 0000000140B09503: sub     ecx, 7
 * 0000000140B09506: jz      short loc_140B09497
 * 0000000140B09508: sub     ecx, 1
 * 0000000140B0950B: jz      loc_140B0B522
 * 0000000140B09511: cmp     ecx, 1
 * 0000000140B09514: jz      loc_140B0B73C
 * 0000000140B0951A: jmp     loc_140B0BBC5
 * 0000000140B0951F: mov     ecx, 4
 * 0000000140B09524: mov     [rbp+0A70h+var_9C8], r11
 * 0000000140B0952B: lea     rax, [rbp+0A70h+var_9C0]
 * 0000000140B09532: lea     r15d, [rcx-3]
 * 0000000140B09536: mov     [rax], r11b
 * 0000000140B09539: add     rax, r15
 * 0000000140B0953C: add     ecx, r14d
 * 0000000140B0953F: jnz     short loc_140B09536
 * 0000000140B09541: xor     edx, edx
 * 0000000140B09543: cmp     [rbx+80Ch], edx
 * 0000000140B09549: jbe     loc_140B09744
 * 0000000140B0954F: mov     ecx, [rbp+0A70h+var_9C0]
 * 0000000140B09555: mov     r9d, dword ptr [rbp+0A70h+var_9C8+4]
 * 0000000140B0955C: mov     r10d, dword ptr [rbp+0A70h+var_9C8]
 * 0000000140B09563: mov     rax, [rbx+0A78h]
 * 0000000140B0956A: mov     r14, rbx
 * 0000000140B0956D: test    rax, rax
 * 0000000140B09570: mov     r15d, edx
 * 0000000140B09573: cmovnz  r14, rax
 * 0000000140B09577: mov     r8d, [r14+808h]
 * 0000000140B0957E: add     r8, r14
 * 0000000140B09581: test    r10d, r10d
 * 0000000140B09584: jz      short loc_140B09594
 * 0000000140B09586: cmp     r9d, r11d
 * 0000000140B09589: ja      short loc_140B09594
 * 0000000140B0958B: mov     r8d, ecx
 * 0000000140B0958E: mov     r15d, r9d
 * 0000000140B09591: add     r8, r14
 * 0000000140B09594: cmp     r15d, r11d
 * 0000000140B09597: jz      loc_140B096BC
 * 0000000140B0959D: mov     r9d, r11d
 * 0000000140B095A0: mov     r13d, 2
 * 0000000140B095A6: sub     r9d, r15d
 * 0000000140B095A9: mov     r12, 0AAAAAAAAAAAAAAABh
 * 0000000140B095B3: mov     r15d, r11d
 * 0000000140B095B6: mov     ecx, [r8]
 * 0000000140B095B9: cmp     ecx, 1Ch
 * 0000000140B095BC: jg      short loc_140B09611
 * 0000000140B095BE: jz      short loc_140B0960A
 * 0000000140B095C0: sub     ecx, 1
 * 0000000140B095C3: jz      short loc_140B0962C
 * 0000000140B095C5: sub     ecx, 6
 * 0000000140B095C8: jz      short loc_140B095F8
 * 0000000140B095CA: sub     ecx, 1
 * 0000000140B095CD: jz      short loc_140B095E8
 * 0000000140B095CF: sub     ecx, r13d
 * 0000000140B095D2: jz      short loc_140B095D9
 * 0000000140B095D4: cmp     ecx, r13d
 * 0000000140B095D7: jmp     short loc_140B09623
 * 0000000140B095D9: mov     eax, [r8+1Ch]
 * 0000000140B095DD: add     eax, 3
 * 0000000140B095E0: shl     eax, 4
 * 0000000140B095E3: jmp     loc_140B09696
 * 0000000140B095E8: movzx   eax, word ptr [r8+20h]
 * 0000000140B095ED: add     eax, 37h ; '7'
 * 0000000140B095F0: and     eax, 0FFFFFFF8h
 * 0000000140B095F3: jmp     loc_140B09696
 * 0000000140B095F8: mov     eax, [r8+18h]
 * 0000000140B095FC: add     eax, r13d
 * 0000000140B095FF: lea     eax, [rax+rax*2]
 * 0000000140B09602: shl     eax, 3
 * 0000000140B09605: jmp     loc_140B09696
 * 0000000140B0960A: movzx   eax, word ptr [r8+28h]
 * 0000000140B0960F: jmp     short loc_140B095ED
 * 0000000140B09611: sub     ecx, 1Eh
 * 0000000140B09614: jz      short loc_140B0966B
 * 0000000140B09616: sub     ecx, 3
 * 0000000140B09619: jz      short loc_140B09643
 * 0000000140B0961B: sub     ecx, 1
 * 0000000140B0961E: jz      short loc_140B09643
 * 0000000140B09620: cmp     ecx, 9
 * 0000000140B09623: jz      short loc_140B0962C
 * 0000000140B09625: mov     eax, 30h ; '0'
 * 0000000140B0962A: jmp     short loc_140B09696
 * 0000000140B0962C: mov     ecx, [r8+10h]
 * 0000000140B09630: mov     rax, r12
 * 0000000140B09633: mul     rcx
 * 0000000140B09636: shr     rdx, 3
 * 0000000140B0963A: lea     eax, ds:30h[rdx*4]
 * 0000000140B09641: jmp     short loc_140B09696
 * 0000000140B09643: mov     ecx, [r8+20h]
 * 0000000140B09647: mov     edx, [r8+28h]
 * 0000000140B0964B: and     ecx, 0FFFh
 * 0000000140B09651: add     rdx, 0FFFh
 * 0000000140B09658: add     rdx, rcx
 * 0000000140B0965B: shr     rdx, 0Ch
 * 0000000140B0965F: lea     eax, [rdx+rdx*4]
 * 0000000140B09662: lea     eax, ds:30h[rax*4]
 * 0000000140B09669: jmp     short loc_140B09696
 * 0000000140B0966B: mov     eax, [r8+24h]
 * 0000000140B0966F: lea     ecx, [rax-1]
 * 0000000140B09672: neg     eax
 * 0000000140B09674: sbb     eax, eax
 * 0000000140B09676: and     ecx, eax
 * 0000000140B09678: mov     rax, r12
 * 0000000140B0967B: mul     rcx
 * 0000000140B0967E: movzx   eax, word ptr [r8+28h]
 * 0000000140B09683: shr     rdx, 3
 * 0000000140B09687: add     edx, 7
 * 0000000140B0968A: and     edx, 0FFFFFFF8h
 * 0000000140B0968D: add     eax, r13d
 * 0000000140B09690: lea     eax, [rax+rax*2]
 * 0000000140B09693: lea     eax, [rdx+rax*8]
 * 0000000140B09696: add     r8, rax
 * 0000000140B09699: mov     eax, 1
 * 0000000140B0969E: sub     r9, rax
 * 0000000140B096A1: jnz     loc_140B095B6
 * 0000000140B096A7: mov     r12, [rsp+0B70h+var_AF8]
 * 0000000140B096AC: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B096B3: mov     r13d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B096BA: jmp     short loc_140B096C1
 * 0000000140B096BC: mov     eax, 1
 * 0000000140B096C1: mov     ecx, r8d
 * 0000000140B096C4: mov     dword ptr [rbp+0A70h+var_9C8], eax
 * 0000000140B096CA: sub     ecx, r14d
 * 0000000140B096CD: mov     dword ptr [rbp+0A70h+var_9C8+4], r15d
 * 0000000140B096D4: mov     [rbp+0A70h+var_9C0], ecx
 * 0000000140B096DA: mov     r10d, eax
 * 0000000140B096DD: movsxd  rdx, dword ptr [r8]
 * 0000000140B096E0: mov     r9d, r15d
 * 0000000140B096E3: cmp     edx, 2Bh ; '+'
 * 0000000140B096E6: ja      short loc_140B09704
 * 0000000140B096E8: mov     r14, 80000001002h
 * 0000000140B096F2: bt      r14, rdx
 * 0000000140B096F6: jnb     short loc_140B09704
 * 0000000140B096F8: cmp     [r8+8], r12
 * 0000000140B096FC: jnz     short loc_140B09704
 * 0000000140B096FE: cmp     [r8+10h], r13d
 * 0000000140B09702: jz      short loc_140B0972F
 * 0000000140B09704: lea     eax, [rdx-21h]
 * 0000000140B09707: mov     r15d, 1
 * 0000000140B0970D: cmp     eax, r15d
 * 0000000140B09710: ja      short loc_140B0971C
 * 0000000140B09712: mov     rax, [rbp+0A70h+var_A98]
 * 0000000140B09716: cmp     [r8+20h], rax
 * 0000000140B0971A: jz      short loc_140B09735
 * 0000000140B0971C: add     r11d, r15d
 * 0000000140B0971F: cmp     r11d, [rbx+80Ch]
 * 0000000140B09726: jnb     short loc_140B09744
 * 0000000140B09728: xor     edx, edx
 * 0000000140B0972A: jmp     loc_140B09563
 * 0000000140B0972F: mov     r15d, 1
 * 0000000140B09735: test    r8, r8
 * 0000000140B09738: jz      short loc_140B09744
 * 0000000140B0973A: mov     [rsp+0B70h+var_B10], rbx
 * 0000000140B0973F: jmp     loc_140B0B4BF
 * 0000000140B09744: mov     r13, [rbp+0A70h+var_AC0]
 * 0000000140B09748: lea     rdx, [rbp+0A70h+var_1E0]
 * 0000000140B0974F: mov     rax, [rbx+200h]
 * 0000000140B09756: mov     rcx, r13
 * 0000000140B09759: mov     [rbp+0A70h+var_A40], rbx
 * 0000000140B0975D: call    KeGuardDispatchICall
 * 0000000140B09762: mov     r14, [rbp+0A70h+var_1D8]
 * 0000000140B09769: xor     r11d, r11d
 * 0000000140B0976C: mov     r12d, [rbp+0A70h+var_1CC]
 * 0000000140B09773: mov     [rsp+0B70h+var_B20], rax
 * 0000000140B09778: mov     dword ptr [rbp+0A70h+arg_8], r12d
 * 0000000140B0977F: mov     [rbp+0A70h+var_A88], r12d
 * 0000000140B09783: mov     [rbp+0A70h+var_AC8], r14
 * 0000000140B09787: test    r14, r14
 * 0000000140B0978A: jnz     short loc_140B097AA
 * 0000000140B0978C: test    dword ptr [rbx+990h], 200000h
 * 0000000140B09796: jz      loc_140B0E25A
 * 0000000140B0979C: mov     eax, 0C000007Bh
 * 0000000140B097A1: lea     r13d, [r14+1]
 * 0000000140B097A5: jmp     loc_140B0A95F
 * 0000000140B097AA: mov     [rbp+0A70h+var_9B8], r11
 * 0000000140B097B1: lea     rax, [rbp+0A70h+var_9B0]
 * 0000000140B097B8: mov     ecx, 4
 * 0000000140B097BD: mov     edx, 0FFFFFFFFh
 * 0000000140B097C2: mov     [rax], r11b
 * 0000000140B097C5: add     rax, r15
 * 0000000140B097C8: add     ecx, edx
 * 0000000140B097CA: jnz     short loc_140B097C2
 * 0000000140B097CC: xor     edx, edx
 * 0000000140B097CE: cmp     [rbx+80Ch], edx
 * 0000000140B097D4: jbe     loc_140B099CC
 * 0000000140B097DA: mov     ecx, [rbp+0A70h+var_9B0]
 * 0000000140B097E0: mov     r9d, dword ptr [rbp+0A70h+var_9B8+4]
 * 0000000140B097E7: mov     r10d, dword ptr [rbp+0A70h+var_9B8]
 * 0000000140B097EE: mov     rax, [rbx+0A78h]
 * 0000000140B097F5: mov     r14, rbx
 * 0000000140B097F8: test    rax, rax
 * 0000000140B097FB: mov     r15d, edx
 * 0000000140B097FE: cmovnz  r14, rax
 * 0000000140B09802: mov     r8d, [r14+808h]
 * 0000000140B09809: add     r8, r14
 * 0000000140B0980C: test    r10d, r10d
 * 0000000140B0980F: jz      short loc_140B0981F
 * 0000000140B09811: cmp     r9d, r11d
 * 0000000140B09814: ja      short loc_140B0981F
 * 0000000140B09816: mov     r8d, ecx
 * 0000000140B09819: mov     r15d, r9d
 * 0000000140B0981C: add     r8, r14
 * 0000000140B0981F: cmp     r15d, r11d
 * 0000000140B09822: jz      loc_140B09941
 * 0000000140B09828: mov     r9d, r11d
 * 0000000140B0982B: mov     edi, 2
 * 0000000140B09830: sub     r9d, r15d
 * 0000000140B09833: mov     r12, 0AAAAAAAAAAAAAAABh
 * 0000000140B0983D: mov     r15d, r11d
 * 0000000140B09840: mov     ecx, [r8]
 * 0000000140B09843: cmp     ecx, 1Ch
 * 0000000140B09846: jg      short loc_140B09898
 * 0000000140B09848: jz      short loc_140B09891
 * 0000000140B0984A: sub     ecx, 1
 * 0000000140B0984D: jz      short loc_140B098B3
 * 0000000140B0984F: sub     ecx, 6
 * 0000000140B09852: jz      short loc_140B09880
 * 0000000140B09854: sub     ecx, 1
 * 0000000140B09857: jz      short loc_140B09870
 * 0000000140B09859: sub     ecx, edi
 * 0000000140B0985B: jz      short loc_140B09861
 * 0000000140B0985D: cmp     ecx, edi
 * 0000000140B0985F: jmp     short loc_140B098AA
 * 0000000140B09861: mov     eax, [r8+1Ch]
 * 0000000140B09865: add     eax, 3
 * 0000000140B09868: shl     eax, 4
 * 0000000140B0986B: jmp     loc_140B0991C
 * 0000000140B09870: movzx   eax, word ptr [r8+20h]
 * 0000000140B09875: add     eax, 37h ; '7'
 * 0000000140B09878: and     eax, 0FFFFFFF8h
 * 0000000140B0987B: jmp     loc_140B0991C
 * 0000000140B09880: mov     eax, [r8+18h]
 * 0000000140B09884: add     eax, edi
 * 0000000140B09886: lea     eax, [rax+rax*2]
 * 0000000140B09889: shl     eax, 3
 * 0000000140B0988C: jmp     loc_140B0991C
 * 0000000140B09891: movzx   eax, word ptr [r8+28h]
 * 0000000140B09896: jmp     short loc_140B09875
 * 0000000140B09898: sub     ecx, 1Eh
 * 0000000140B0989B: jz      short loc_140B098F2
 * 0000000140B0989D: sub     ecx, 3
 * 0000000140B098A0: jz      short loc_140B098CA
 * 0000000140B098A2: sub     ecx, 1
 * 0000000140B098A5: jz      short loc_140B098CA
 * 0000000140B098A7: cmp     ecx, 9
 * 0000000140B098AA: jz      short loc_140B098B3
 * 0000000140B098AC: mov     eax, 30h ; '0'
 * 0000000140B098B1: jmp     short loc_140B0991C
 * 0000000140B098B3: mov     ecx, [r8+10h]
 * 0000000140B098B7: mov     rax, r12
 * 0000000140B098BA: mul     rcx
 * 0000000140B098BD: shr     rdx, 3
 * 0000000140B098C1: lea     eax, ds:30h[rdx*4]
 * 0000000140B098C8: jmp     short loc_140B0991C
 * 0000000140B098CA: mov     ecx, [r8+20h]
 * 0000000140B098CE: mov     edx, [r8+28h]
 * 0000000140B098D2: and     ecx, 0FFFh
 * 0000000140B098D8: add     rdx, 0FFFh
 * 0000000140B098DF: add     rdx, rcx
 * 0000000140B098E2: shr     rdx, 0Ch
 * 0000000140B098E6: lea     eax, [rdx+rdx*4]
 * 0000000140B098E9: lea     eax, ds:30h[rax*4]
 * 0000000140B098F0: jmp     short loc_140B0991C
 * 0000000140B098F2: mov     eax, [r8+24h]
 * 0000000140B098F6: lea     ecx, [rax-1]
 * 0000000140B098F9: neg     eax
 * 0000000140B098FB: sbb     eax, eax
 * 0000000140B098FD: and     ecx, eax
 * 0000000140B098FF: mov     rax, r12
 * 0000000140B09902: mul     rcx
 * 0000000140B09905: movzx   eax, word ptr [r8+28h]
 * 0000000140B0990A: shr     rdx, 3
 * 0000000140B0990E: add     edx, 7
 * 0000000140B09911: and     edx, 0FFFFFFF8h
 * 0000000140B09914: add     eax, edi
 * 0000000140B09916: lea     eax, [rax+rax*2]
 * 0000000140B09919: lea     eax, [rdx+rax*8]
 * 0000000140B0991C: add     r8, rax
 * 0000000140B0991F: mov     eax, 1
 * 0000000140B09924: sub     r9, rax
 * 0000000140B09927: jnz     loc_140B09840
 * 0000000140B0992D: mov     r12d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B09934: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0993B: mov     r13, [rbp+0A70h+var_AC0]
 * 0000000140B0993F: jmp     short loc_140B09946
 * 0000000140B09941: mov     eax, 1
 * 0000000140B09946: mov     ecx, r8d
 * 0000000140B09949: mov     dword ptr [rbp+0A70h+var_9B8], eax
 * 0000000140B0994F: sub     ecx, r14d
 * 0000000140B09952: mov     dword ptr [rbp+0A70h+var_9B8+4], r15d
 * 0000000140B09959: mov     [rbp+0A70h+var_9B0], ecx
 * 0000000140B0995F: mov     r10d, eax
 * 0000000140B09962: movsxd  rdx, dword ptr [r8]
 * 0000000140B09965: mov     r9d, r15d
 * 0000000140B09968: cmp     edx, 2Bh ; '+'
 * 0000000140B0996B: ja      short loc_140B0998E
 * 0000000140B0996D: mov     r14, 80000001002h
 * 0000000140B09977: bt      r14, rdx
 * 0000000140B0997B: jnb     short loc_140B0998E
 * 0000000140B0997D: mov     rax, [rsp+0B70h+var_B20]
 * 0000000140B09982: cmp     [r8+8], rax
 * 0000000140B09986: jnz     short loc_140B0998E
 * 0000000140B09988: cmp     [r8+10h], r12d
 * 0000000140B0998C: jz      short loc_140B099B9
 * 0000000140B0998E: mov     r14, [rbp+0A70h+var_AC8]
 * 0000000140B09992: lea     eax, [rdx-21h]
 * 0000000140B09995: mov     r15d, 1
 * 0000000140B0999B: cmp     eax, r15d
 * 0000000140B0999E: ja      short loc_140B099A6
 * 0000000140B099A0: cmp     [r8+20h], r14
 * 0000000140B099A4: jz      short loc_140B099C3
 * 0000000140B099A6: add     r11d, r15d
 * 0000000140B099A9: cmp     r11d, [rbx+80Ch]
 * 0000000140B099B0: jnb     short loc_140B099CC
 * 0000000140B099B2: xor     edx, edx
 * 0000000140B099B4: jmp     loc_140B097EE
 * 0000000140B099B9: mov     r14, [rbp+0A70h+var_AC8]
 * 0000000140B099BD: mov     r15d, 1
 * 0000000140B099C3: test    r8, r8
 * 0000000140B099C6: jnz     loc_140B0B42B
 * 0000000140B099CC: mov     rax, [rbx+2A8h]
 * 0000000140B099D3: mov     rcx, r13
 * 0000000140B099D6: call    KeGuardDispatchICall
 * 0000000140B099DB: mov     ecx, [rbp+0A70h+var_A88]
 * 0000000140B099DE: xor     r13d, r13d
 * 0000000140B099E1: mov     [rbp+0A70h+var_AD0], eax
 * 0000000140B099E4: mov     dword ptr [rbp+0A70h+var_AD8], ecx
 * 0000000140B099E7: test    eax, eax
 * 0000000140B099E9: jz      loc_140B0B42E
 * 0000000140B099EF: mov     rsi, [rbx+528h]
 * 0000000140B099F6: cli
 * 0000000140B099F7: mov     rcx, gs:20h
 * 0000000140B09A00: mov     rax, [rbx+650h]
 * 0000000140B09A07: mov     rcx, [rcx+rax]
 * 0000000140B09A0B: sti
 * 0000000140B09A0C: mov     rax, [rbx+168h]
 * 0000000140B09A13: call    KeGuardDispatchICall
 * 0000000140B09A18: mov     rcx, [rbx+530h]
 * 0000000140B09A1F: mov     dl, r15b
 * 0000000140B09A22: mov     rax, [rbx+0E8h]
 * 0000000140B09A29: call    KeGuardDispatchICall
 * 0000000140B09A2E: mov     rdx, [rsi]
 * 0000000140B09A31: cmp     rdx, rsi
 * 0000000140B09A34: jz      short loc_140B09A7F
 * 0000000140B09A36: mov     r9, [rbx+750h]
 * 0000000140B09A3D: mov     r10, [rbx+758h]
 * 0000000140B09A44: mov     r11, [rbx+760h]
 * 0000000140B09A4B: mov     rcx, rdx
 * 0000000140B09A4E: sub     rcx, r9
 * 0000000140B09A51: mov     rax, [rcx+r10]
 * 0000000140B09A55: mov     r8d, [rcx+r11]
 * 0000000140B09A59: add     r8, rax
 * 0000000140B09A5C: cmp     r14, rax
 * 0000000140B09A5F: jb      short loc_140B09A66
 * 0000000140B09A61: cmp     r14, r8
 * 0000000140B09A64: jb      short loc_140B09A70
 * 0000000140B09A66: mov     rdx, [rdx]
 * 0000000140B09A69: cmp     rdx, rsi
 * 0000000140B09A6C: jz      short loc_140B09A7F
 * 0000000140B09A6E: jmp     short loc_140B09A4B
 * 0000000140B09A70: mov     rax, [rbx+0D8h]
 * 0000000140B09A77: mov     edx, r15d
 * 0000000140B09A7A: call    KeGuardDispatchICall
 * 0000000140B09A7F: mov     rcx, [rbx+530h]
 * 0000000140B09A86: mov     rax, [rbx+118h]
 * 0000000140B09A8D: call    KeGuardDispatchICall
 * 0000000140B09A92: mov     rax, [rbx+170h]
 * 0000000140B09A99: call    KeGuardDispatchICall
 * 0000000140B09A9E: test    dword ptr [rbx+990h], 40000000h
 * 0000000140B09AA8: jz      short loc_140B09ACD
 * 0000000140B09AAA: mov     r8d, 0Fh
 * 0000000140B09AB0: lea     rcx, [rbp+0A70h+var_A58]
 * 0000000140B09AB4: mov     rdx, r14
 * 0000000140B09AB7: call    sub_140B19070
 * 0000000140B09ABC: mov     rsi, [rbp+0A70h+var_A58]
 * 0000000140B09AC0: xor     r11d, r11d
 * 0000000140B09AC3: mov     [rsp+0B70h+var_B10], rsi
 * 0000000140B09AC8: jmp     loc_140B0A943
 * 0000000140B09ACD: mov     rax, [rbx+1F0h]
 * 0000000140B09AD4: lea     r9, [rbp+0A70h+var_A88]
 * 0000000140B09AD8: xor     r8d, r8d
 * 0000000140B09ADB: mov     [rbp+0A70h+var_740], r13
 * 0000000140B09AE2: mov     [rbp+0A70h+var_8E8], r13d
 * 0000000140B09AE9: mov     rcx, r14
 * 0000000140B09AEC: lea     r13d, [r8+1]
 * 0000000140B09AF0: mov     dl, r13b
 * 0000000140B09AF3: call    KeGuardDispatchICall
 * 0000000140B09AF8: mov     rdx, rax
 * 0000000140B09AFB: lea     r8d, [r13+0Bh]
 * 0000000140B09AFF: neg     rax
 * 0000000140B09B02: mov     [rbp+0A70h+var_758], rdx
 * 0000000140B09B09: lea     r9, [rbp+0A70h+var_A88]
 * 0000000140B09B0D: mov     dl, r13b
 * 0000000140B09B10: sbb     ecx, ecx
 * 0000000140B09B12: and     ecx, [rbp+0A70h+var_A88]
 * 0000000140B09B15: mov     [rbp+0A70h+var_A88], ecx
 * 0000000140B09B18: mov     rax, [rbx+1F0h]
 * 0000000140B09B1F: mov     [rbp+0A70h+var_8F4], ecx
 * 0000000140B09B25: mov     rcx, r14
 * 0000000140B09B28: call    KeGuardDispatchICall
 * 0000000140B09B2D: mov     rdx, rax
 * 0000000140B09B30: mov     [rbp+0A70h+var_AC0], rax
 * 0000000140B09B34: neg     rax
 * 0000000140B09B37: mov     [rbp+0A70h+var_750], rdx
 * 0000000140B09B3E: lea     r15d, [r13+9]
 * 0000000140B09B42: mov     dl, r13b
 * 0000000140B09B45: sbb     ecx, ecx
 * 0000000140B09B47: lea     r9, [rbp+0A70h+var_A88]
 * 0000000140B09B4B: and     ecx, [rbp+0A70h+var_A88]
 * 0000000140B09B4E: mov     r8d, r15d
 * 0000000140B09B51: mov     [rbp+0A70h+var_A88], ecx
 * 0000000140B09B54: mov     rax, [rbx+1F0h]
 * 0000000140B09B5B: mov     dword ptr [rbp+0A70h+arg_8], ecx
 * 0000000140B09B61: mov     [rbp+0A70h+var_8F0], ecx
 * 0000000140B09B67: mov     rcx, r14
 * 0000000140B09B6A: call    KeGuardDispatchICall
 * 0000000140B09B6F: mov     rdx, rax
 * 0000000140B09B72: neg     rax
 * 0000000140B09B75: mov     [rbp+0A70h+var_748], rdx
 * 0000000140B09B7C: sbb     ecx, ecx
 * 0000000140B09B7E: and     ecx, [rbp+0A70h+var_A88]
 * 0000000140B09B81: mov     [rbp+0A70h+var_A88], ecx
 * 0000000140B09B84: mov     rax, [rbx+1F8h]
 * 0000000140B09B8B: mov     [rbp+0A70h+var_8EC], ecx
 * 0000000140B09B91: mov     rcx, r14
 * 0000000140B09B94: call    KeGuardDispatchICall
 * 0000000140B09B99: xor     r11d, r11d
 * 0000000140B09B9C: mov     rsi, rax
 * 0000000140B09B9F: test    rax, rax
 * 0000000140B09BA2: jnz     short loc_140B09C11
 * 0000000140B09BA4: test    dword ptr [rbx+990h], 200000h
 * 0000000140B09BAE: jz      loc_140B0E285
 * 0000000140B09BB4: cmp     [rbx+8F8h], r11d
 * 0000000140B09BBB: jnz     short loc_140B09BFE
 * 0000000140B09BBD: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B09BC7: xor     edx, edx
 * 0000000140B09BC9: add     rax, rbx
 * 0000000140B09BCC: mov     rcx, rbx
 * 0000000140B09BCF: mov     [rbx+900h], rax
 * 0000000140B09BD6: mov     [rbx+908h], r11
 * 0000000140B09BDD: mov     qword ptr [rbx+910h], 10Fh
 * 0000000140B09BE8: mov     [rbx+918h], r14
 * 0000000140B09BEF: mov     [rbx+8F8h], r13d
 * 0000000140B09BF6: call    $$ba
 * 0000000140B09BFB: xor     r11d, r11d
 * 0000000140B09BFE: mov     rsi, [rbp+0A70h+var_A58]
 * 0000000140B09C02: mov     eax, 0C000007Bh
 * 0000000140B09C07: mov     [rsp+0B70h+var_B10], rsi
 * 0000000140B09C0C: jmp     loc_140B0A95F
 * 0000000140B09C11: mov     rax, [rbx+4A0h]
 * 0000000140B09C18: lea     rdx, [rbp+0A70h+var_7A0]
 * 0000000140B09C1F: mov     rcx, r14
 * 0000000140B09C22: call    KeGuardDispatchICall
 * 0000000140B09C27: mov     r8d, [rbx+924h]
 * 0000000140B09C2E: mov     [rbp+0A70h+var_738], rax
 * 0000000140B09C35: mov     eax, [rbp+0A70h+var_7A0]
 * 0000000140B09C3B: mov     [rbp+0A70h+var_8E4], eax
 * 0000000140B09C41: mov     eax, [rsi+54h]
 * 0000000140B09C44: mov     [rbp+0A70h+var_760], r14
 * 0000000140B09C4B: mov     r14d, [rbx+7E4h]
 * 0000000140B09C52: mov     [rbp+0A70h+var_8F8], eax
 * 0000000140B09C58: lea     eax, [r14+120h]
 * 0000000140B09C5F: cmp     eax, [rbx+0A1Ch]
 * 0000000140B09C65: jbe     loc_140B09D52
 * 0000000140B09C6B: mov     edx, eax
 * 0000000140B09C6D: mov     rcx, rbx
 * 0000000140B09C70: call    sub_140B12020
 * 0000000140B09C75: xor     r11d, r11d
 * 0000000140B09C78: mov     [rsp+0B70h+var_B10], rax
 * 0000000140B09C7D: mov     rsi, rax
 * 0000000140B09C80: test    rax, rax
 * 0000000140B09C83: jnz     short loc_140B09C9C
 * 0000000140B09C85: mov     rsi, [rbp+0A70h+var_A58]
 * 0000000140B09C89: mov     [rsp+0B70h+var_B10], rsi
 * 0000000140B09C8E: mov     [rbp+0A70h+var_A40], r11
 * 0000000140B09C92: mov     eax, 0C000009Ah
 * 0000000140B09C97: jmp     loc_140B0A95F
 * 0000000140B09C9C: mov     ecx, [rbx+990h]
 * 0000000140B09CA2: test    cl, 4
 * 0000000140B09CA5: jnz     loc_140B09D49
 * 0000000140B09CAB: mov     eax, [rbx+7E4h]
 * 0000000140B09CB1: and     ecx, 20000000h
 * 0000000140B09CB7: mov     r8, [rbx+7C8h]
 * 0000000140B09CBE: neg     ecx
 * 0000000140B09CC0: sbb     edx, edx
 * 0000000140B09CC2: and     edx, [rbx+924h]
 * 0000000140B09CC8: cmp     eax, 8
 * 0000000140B09CCB: jb      short loc_140B09CE2
 * 0000000140B09CCD: mov     ecx, eax
 * 0000000140B09CCF: shr     rcx, 3
 * 0000000140B09CD3: mov     [rbx], r11
 * 0000000140B09CD6: add     eax, 0FFFFFFF8h
 * 0000000140B09CD9: add     rbx, 8
 * 0000000140B09CDD: sub     rcx, r13
 * 0000000140B09CE0: jnz     short loc_140B09CD3
 * 0000000140B09CE2: test    eax, eax
 * 0000000140B09CE4: jz      short loc_140B09CF5
 * 0000000140B09CE6: mov     ecx, 0FFFFFFFFh
 * 0000000140B09CEB: mov     [rbx], r11b
 * 0000000140B09CEE: add     rbx, r13
 * 0000000140B09CF1: add     eax, ecx
 * 0000000140B09CF3: jnz     short loc_140B09CEB
 * 0000000140B09CF5: mov     ebx, [rsi+924h]
 * 0000000140B09CFB: mov     [rsi+924h], edx
 * 0000000140B09D01: cmp     edx, 3
 * 0000000140B09D04: jz      short loc_140B09D34
 * 0000000140B09D06: test    dword ptr [rsi+990h], 10000000h
 * 0000000140B09D10: jnz     short loc_140B09D2B
 * 0000000140B09D12: test    edx, edx
 * 0000000140B09D14: jz      short loc_140B09D2B
 * 0000000140B09D16: mov     rax, [rsi+228h]
 * 0000000140B09D1D: lea     rcx, [r8-8]
 * 0000000140B09D21: mov     rdx, [rcx]
 * 0000000140B09D24: call    KeGuardDispatchICall
 * 0000000140B09D29: jmp     short loc_140B09D43
 * 0000000140B09D2B: mov     rax, [rsi+0F8h]
 * 0000000140B09D32: jmp     short loc_140B09D3B
 * 0000000140B09D34: mov     rax, [rsi+368h]
 * 0000000140B09D3B: mov     rcx, r8
 * 0000000140B09D3E: call    KeGuardDispatchICall
 * 0000000140B09D43: mov     [rsi+924h], ebx
 * 0000000140B09D49: and     dword ptr [rsi+990h], 0FFFFFFFBh
 * 0000000140B09D50: jmp     short loc_140B09D60
 * 0000000140B09D52: mov     rsi, rbx
 * 0000000140B09D55: mov     [rsp+0B70h+var_B10], rbx
 * 0000000140B09D5A: mov     [rbx+7E4h], eax
 * 0000000140B09D60: mov     edx, 6
 * 0000000140B09D65: lea     r11, [rsi+r14]
 * 0000000140B09D69: add     [rsi+80Ch], edx
 * 0000000140B09D6F: lea     rdi, [rbp+0A70h+var_760]
 * 0000000140B09D76: lea     r12, [rbp+0A70h+var_8F8]
 * 0000000140B09D7D: mov     [rsp+0B70h+var_B18], r11
 * 0000000140B09D82: xor     ebx, ebx
 * 0000000140B09D84: mov     [rbp+0A70h+var_AA8], rdi
 * 0000000140B09D88: mov     [rbp+0A70h+var_A80], r12
 * 0000000140B09D8C: mov     [rsp+0B70h+var_B08], rdx
 * 0000000140B09D91: mov     r15d, [r12]
 * 0000000140B09D95: mov     ecx, 30h ; '0'
 * 0000000140B09D9A: mov     r14, [rdi]
 * 0000000140B09D9D: mov     rax, r11
 * 0000000140B09DA0: mov     [rbp+0A70h+var_AE0], r15d
 * 0000000140B09DA4: mov     [rax], rbx
 * 0000000140B09DA7: add     ecx, 0FFFFFFF8h
 * 0000000140B09DAA: add     rax, 8
 * 0000000140B09DAE: sub     rdx, r13
 * 0000000140B09DB1: jnz     short loc_140B09DA4
 * 0000000140B09DB3: test    ecx, ecx
 * 0000000140B09DB5: jz      short loc_140B09DC5
 * 0000000140B09DB7: mov     edx, 0FFFFFFFFh
 * 0000000140B09DBC: mov     [rax], bl
 * 0000000140B09DBE: add     rax, r13
 * 0000000140B09DC1: add     ecx, edx
 * 0000000140B09DC3: jnz     short loc_140B09DBC
 * 0000000140B09DC5: mov     dword ptr [r11], 0Bh
 * 0000000140B09DCC: lea     rcx, [r14+r15]
 * 0000000140B09DD0: mov     [r11+8], r14
 * 0000000140B09DD4: mov     r9, r14
 * 0000000140B09DD7: mov     [r11+10h], r15d
 * 0000000140B09DDB: mov     rax, r14
 * 0000000140B09DDE: add     [rsi+828h], r15d
 * 0000000140B09DE5: mov     r10d, [rsi+814h]
 * 0000000140B09DEC: mov     r13, [rsi+818h]
 * 0000000140B09DF3: cmp     r14, rcx
 * 0000000140B09DF6: jnb     short loc_140B09E08
 * 0000000140B09DF8: mov     edx, 40h ; '@'
 * 0000000140B09DFD: prefetchnta byte ptr [rax]
 * 0000000140B09E00: add     rax, rdx
 * 0000000140B09E03: cmp     rax, rcx
 * 0000000140B09E06: jb      short loc_140B09DFD
 * 0000000140B09E08: mov     ebx, r15d
 * 0000000140B09E0B: mov     r8, r13
 * 0000000140B09E0E: shr     ebx, 7
 * 0000000140B09E11: test    ebx, ebx
 * 0000000140B09E13: jz      short loc_140B09E86
 * 0000000140B09E15: mov     edi, 0FFFFFFFFh
 * 0000000140B09E1A: mov     r15d, 1
 * 0000000140B09E20: mov     r12, 7010008004002001h
 * 0000000140B09E2A: mov     eax, 8
 * 0000000140B09E2F: xor     r8, [r9]
 * 0000000140B09E32: mov     ecx, r10d
 * 0000000140B09E35: rol     r8, cl
 * 0000000140B09E38: xor     r8, [r9+8]
 * 0000000140B09E3C: add     r9, 10h
 * 0000000140B09E40: rol     r8, cl
 * 0000000140B09E43: sub     rax, r15
 * 0000000140B09E46: jnz     short loc_140B09E2F
 * 0000000140B09E48: mov     rcx, r9
 * 0000000140B09E4B: sub     rcx, r14
 * 0000000140B09E4E: xor     rcx, r13
 * 0000000140B09E51: mov     rax, rcx
 * 0000000140B09E54: rol     rax, 11h
 * 0000000140B09E58: xor     rcx, rax
 * 0000000140B09E5B: mov     rax, r12
 * 0000000140B09E5E: mul     rcx
 * 0000000140B09E61: xor     r10d, eax
 * 0000000140B09E64: mov     [rbp+0A70h+var_4E0], rdx
 * 0000000140B09E6B: xor     r10d, edx
 * 0000000140B09E6E: and     r10d, 3Fh
 * 0000000140B09E72: cmovz   r10d, r15d
 * 0000000140B09E76: add     ebx, edi
 * 0000000140B09E78: jnz     short loc_140B09E2A
 * 0000000140B09E7A: mov     r15d, [rbp+0A70h+var_AE0]
 * 0000000140B09E7E: mov     rdi, [rbp+0A70h+var_AA8]
 * 0000000140B09E82: mov     r12, [rbp+0A70h+var_A80]
 * 0000000140B09E86: mov     edx, r15d
 * 0000000140B09E89: mov     r13d, 1
 * 0000000140B09E8F: and     edx, 7Fh
 * 0000000140B09E92: cmp     edx, 8
 * 0000000140B09E95: jb      short loc_140B09EB2
 * 0000000140B09E97: mov     eax, edx
 * 0000000140B09E99: shr     rax, 3
 * 0000000140B09E9D: xor     r8, [r9]
 * 0000000140B09EA0: mov     ecx, r10d
 * 0000000140B09EA3: rol     r8, cl
 * 0000000140B09EA6: add     r9, 8
 * 0000000140B09EAA: add     edx, 0FFFFFFF8h
 * 0000000140B09EAD: sub     rax, r13
 * 0000000140B09EB0: jnz     short loc_140B09E9D
 * 0000000140B09EB2: xor     ebx, ebx
 * 0000000140B09EB4: test    edx, edx
 * 0000000140B09EB6: jz      short loc_140B09ED7
 * 0000000140B09EB8: mov     r15d, 0FFFFFFFFh
 * 0000000140B09EBE: movzx   eax, byte ptr [r9]
 * 0000000140B09EC2: mov     ecx, r10d
 * 0000000140B09EC5: xor     r8, rax
 * 0000000140B09EC8: add     r9, r13
 * 0000000140B09ECB: rol     r8, cl
 * 0000000140B09ECE: add     edx, r15d
 * 0000000140B09ED1: jnz     short loc_140B09EBE
 * 0000000140B09ED3: mov     r15d, [rbp+0A70h+var_AE0]
 * 0000000140B09ED7: mov     rax, r8
 * 0000000140B09EDA: jmp     short loc_140B09EDF
 * 0000000140B09EDC: xor     r8d, eax
 * 0000000140B09EDF: shr     rax, 1Fh
 * 0000000140B09EE3: test    rax, rax
 * 0000000140B09EE6: jnz     short loc_140B09EDC
 * 0000000140B09EE8: btr     r8d, 1Fh
 * 0000000140B09EED: lea     edx, [rax+6]
 * 0000000140B09EF0: mov     [r11+14h], r8d
 * 0000000140B09EF4: add     r12, 4
 * 0000000140B09EF8: add     [rsi+828h], r15d
 * 0000000140B09EFF: add     rdi, 8
 * 0000000140B09F03: add     r11, 30h ; '0'
 * 0000000140B09F07: mov     [rbp+0A70h+var_A80], r12
 * 0000000140B09F0B: sub     [rsp+0B70h+var_B08], r13
 * 0000000140B09F10: mov     [rbp+0A70h+var_AA8], rdi
 * 0000000140B09F14: jnz     loc_140B09D91
 * 0000000140B09F1A: mov     r12, [rsp+0B70h+var_B18]
 * 0000000140B09F1F: lea     eax, [rdx-4]
 * 0000000140B09F22: mov     r14, [rbp+0A70h+var_AC8]
 * 0000000140B09F26: lea     rcx, [rbp+0A70h+var_A40]
 * 0000000140B09F2A: mov     r8d, dword ptr [rbp+0A70h+var_AD8]
 * 0000000140B09F2E: mov     r9, r14
 * 0000000140B09F31: mov     [rbp+0A70h+var_A40], rsi
 * 0000000140B09F35: mov     dword ptr [r12], 2Ch ; ','
 * 0000000140B09F3D: mov     [r12+18h], r14
 * 0000000140B09F42: or      [r12+20h], eax
 * 0000000140B09F47: lea     rax, [rbp+0A70h+var_970]
 * 0000000140B09F4E: mov     [rsp+0B70h+var_B38], rax
 * 0000000140B09F53: lea     rax, [rbp+0A70h+var_A10]
 * 0000000140B09F57: mov     [rsp+0B70h+var_B40], rax
 * 0000000140B09F5C: lea     eax, [rdx+9]
 * 0000000140B09F5F: mov     rdx, [rsp+0B70h+var_B20]
 * 0000000140B09F64: mov     dword ptr [rsp+0B70h+var_B48], eax
 * 0000000140B09F68: mov     eax, [rbp+0A70h+var_AD0]
 * 0000000140B09F6B: mov     dword ptr [rsp+0B70h+BugCheckParameter4], eax
 * 0000000140B09F6F: mov     [rbp+0A70h+var_A58], rsi
 * 0000000140B09F73: call    sub_140B10838
 * 0000000140B09F78: xor     r11d, r11d
 * 0000000140B09F7B: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B09F82: test    eax, eax
 * 0000000140B09F84: jns     short loc_140B09F8E
 * 0000000140B09F86: mov     rbx, rsi
 * 0000000140B09F89: jmp     loc_140B0A954
 * 0000000140B09F8E: mov     rbx, [rbp+0A70h+var_A40]
 * 0000000140B09F92: mov     ecx, 30h ; '0'
 * 0000000140B09F97: mov     r9d, [rbp+0A70h+var_970]
 * 0000000140B09F9E: mov     rax, rbx
 * 0000000140B09FA1: sub     r9d, [rbp+0A70h+var_A10]
 * 0000000140B09FA5: sub     rax, rsi
 * 0000000140B09FA8: mov     esi, [rbp+0A70h+var_A10]
 * 0000000140B09FAB: add     r12, rax
 * 0000000140B09FAE: mov     [rsp+0B70h+var_B18], r12
 * 0000000140B09FB3: lea     edx, [rcx-2Ah]
 * 0000000140B09FB6: mov     [rbp+0A70h+var_A58], rbx
 * 0000000140B09FBA: lea     r8d, [rcx-2Fh]
 * 0000000140B09FBE: add     rsi, r14
 * 0000000140B09FC1: lea     r13, [r12+0C0h]
 * 0000000140B09FC9: mov     rax, r13
 * 0000000140B09FCC: mov     [rax], r11
 * 0000000140B09FCF: add     ecx, 0FFFFFFF8h
 * 0000000140B09FD2: add     rax, 8
 * 0000000140B09FD6: sub     rdx, r8
 * 0000000140B09FD9: jnz     short loc_140B09FCC
 * 0000000140B09FDB: test    ecx, ecx
 * 0000000140B09FDD: jz      short loc_140B09FEE
 * 0000000140B09FDF: mov     edx, 0FFFFFFFFh
 * 0000000140B09FE4: mov     [rax], r11b
 * 0000000140B09FE7: add     rax, r8
 * 0000000140B09FEA: add     ecx, edx
 * 0000000140B09FEC: jnz     short loc_140B09FE4
 * 0000000140B09FEE: mov     dword ptr [r13+0], 0Bh
 * 0000000140B09FF6: mov     r10, rsi
 * 0000000140B09FF9: mov     [r13+8], rsi
 * 0000000140B09FFD: mov     rax, rsi
 * 0000000140B0A000: mov     [r13+10h], r9d
 * 0000000140B0A004: add     [rbx+828h], r9d
 * 0000000140B0A00B: mov     r11d, [rbx+814h]
 * 0000000140B0A012: mov     r15, [rbx+818h]
 * 0000000140B0A019: mov     ecx, r9d
 * 0000000140B0A01C: add     rcx, rsi
 * 0000000140B0A01F: cmp     rsi, rcx
 * 0000000140B0A022: jnb     short loc_140B0A034
 * 0000000140B0A024: mov     edx, 40h ; '@'
 * 0000000140B0A029: prefetchnta byte ptr [rax]
 * 0000000140B0A02C: add     rax, rdx
 * 0000000140B0A02F: cmp     rax, rcx
 * 0000000140B0A032: jb      short loc_140B0A029
 * 0000000140B0A034: mov     r14d, r9d
 * 0000000140B0A037: mov     r8, r15
 * 0000000140B0A03A: shr     r14d, 7
 * 0000000140B0A03E: test    r14d, r14d
 * 0000000140B0A041: jz      short loc_140B0A0BE
 * 0000000140B0A043: mov     rdi, 7010008004002001h
 * 0000000140B0A04D: mov     r13d, 1
 * 0000000140B0A053: mov     r12d, 0FFFFFFFFh
 * 0000000140B0A059: mov     eax, 8
 * 0000000140B0A05E: xor     r8, [r10]
 * 0000000140B0A061: mov     ecx, r11d
 * 0000000140B0A064: rol     r8, cl
 * 0000000140B0A067: xor     r8, [r10+8]
 * 0000000140B0A06B: add     r10, 10h
 * 0000000140B0A06F: rol     r8, cl
 * 0000000140B0A072: sub     rax, r13
 * 0000000140B0A075: jnz     short loc_140B0A05E
 * 0000000140B0A077: mov     rcx, r10
 * 0000000140B0A07A: sub     rcx, rsi
 * 0000000140B0A07D: xor     rcx, r15
 * 0000000140B0A080: mov     rax, rcx
 * 0000000140B0A083: rol     rax, 11h
 * 0000000140B0A087: xor     rcx, rax
 * 0000000140B0A08A: mov     rax, rdi
 * 0000000140B0A08D: mul     rcx
 * 0000000140B0A090: xor     r11d, eax
 * 0000000140B0A093: mov     [rbp+0A70h+var_4D8], rdx
 * 0000000140B0A09A: xor     r11d, edx
 * 0000000140B0A09D: and     r11d, 3Fh
 * 0000000140B0A0A1: cmovz   r11d, r13d
 * 0000000140B0A0A5: add     r14d, r12d
 * 0000000140B0A0A8: jnz     short loc_140B0A059
 * 0000000140B0A0AA: mov     r12, [rsp+0B70h+var_B18]
 * 0000000140B0A0AF: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0A0B6: lea     r13, [r12+0C0h]
 * 0000000140B0A0BE: and     r9d, 7Fh
 * 0000000140B0A0C2: mov     esi, 1
 * 0000000140B0A0C7: cmp     r9d, 8
 * 0000000140B0A0CB: jb      short loc_140B0A0EA
 * 0000000140B0A0CD: mov     eax, r9d
 * 0000000140B0A0D0: shr     rax, 3
 * 0000000140B0A0D4: xor     r8, [r10]
 * 0000000140B0A0D7: mov     ecx, r11d
 * 0000000140B0A0DA: rol     r8, cl
 * 0000000140B0A0DD: add     r10, 8
 * 0000000140B0A0E1: add     r9d, 0FFFFFFF8h
 * 0000000140B0A0E5: sub     rax, rsi
 * 0000000140B0A0E8: jnz     short loc_140B0A0D4
 * 0000000140B0A0EA: test    r9d, r9d
 * 0000000140B0A0ED: jz      short loc_140B0A10F
 * 0000000140B0A0EF: mov     r12d, 0FFFFFFFFh
 * 0000000140B0A0F5: movzx   eax, byte ptr [r10]
 * 0000000140B0A0F9: mov     ecx, r11d
 * 0000000140B0A0FC: xor     r8, rax
 * 0000000140B0A0FF: add     r10, rsi
 * 0000000140B0A102: rol     r8, cl
 * 0000000140B0A105: add     r9d, r12d
 * 0000000140B0A108: jnz     short loc_140B0A0F5
 * 0000000140B0A10A: mov     r12, [rsp+0B70h+var_B18]
 * 0000000140B0A10F: mov     rax, r8
 * 0000000140B0A112: shr     rax, 1Fh
 * 0000000140B0A116: xor     r11d, r11d
 * 0000000140B0A119: jmp     short loc_140B0A122
 * 0000000140B0A11B: xor     r8d, eax
 * 0000000140B0A11E: shr     rax, 1Fh
 * 0000000140B0A122: test    rax, rax
 * 0000000140B0A125: jnz     short loc_140B0A11B
 * 0000000140B0A127: btr     r8d, 1Fh
 * 0000000140B0A12C: mov     [r13+14h], r8d
 * 0000000140B0A130: lea     r13d, [rax+1]
 * 0000000140B0A134: mov     dword ptr [r12+0F0h], 30h ; '0'
 * 0000000140B0A140: cmp     [r12+100h], r11d
 * 0000000140B0A148: jz      short loc_140B0A152
 * 0000000140B0A14A: or      [r12+108h], r13d
 * 0000000140B0A152: lea     r15, [r12+60h]
 * 0000000140B0A157: mov     [rsp+0B70h+var_B10], rbx
 * 0000000140B0A15C: mov     [rbp+0A70h+var_A58], rbx
 * 0000000140B0A160: mov     rsi, rbx
 * 0000000140B0A163: test    r15, r15
 * 0000000140B0A166: jnz     loc_140B0A3F8
 * 0000000140B0A16C: mov     r15d, [rbx+7E4h]
 * 0000000140B0A173: mov     r8d, [rbx+924h]
 * 0000000140B0A17A: lea     eax, [r15+30h]
 * 0000000140B0A17E: cmp     eax, [rbx+0A1Ch]
 * 0000000140B0A184: jbe     loc_140B0A261
 * 0000000140B0A18A: mov     edx, eax
 * 0000000140B0A18C: mov     rcx, rbx
 * 0000000140B0A18F: call    sub_140B12020
 * 0000000140B0A194: xor     r11d, r11d
 * 0000000140B0A197: mov     r14, rax
 * 0000000140B0A19A: test    rax, rax
 * 0000000140B0A19D: jz      loc_140B09C8E
 * 0000000140B0A1A3: mov     ecx, [rbx+990h]
 * 0000000140B0A1A9: test    cl, 4
 * 0000000140B0A1AC: jnz     loc_140B0A257
 * 0000000140B0A1B2: mov     eax, [rbx+7E4h]
 * 0000000140B0A1B8: and     ecx, 20000000h
 * 0000000140B0A1BE: mov     r8, [rbx+7C8h]
 * 0000000140B0A1C5: neg     ecx
 * 0000000140B0A1C7: sbb     edx, edx
 * 0000000140B0A1C9: and     edx, [rbx+924h]
 * 0000000140B0A1CF: cmp     eax, 8
 * 0000000140B0A1D2: jb      short loc_140B0A1E9
 * 0000000140B0A1D4: mov     ecx, eax
 * 0000000140B0A1D6: shr     rcx, 3
 * 0000000140B0A1DA: mov     [rbx], r11
 * 0000000140B0A1DD: add     eax, 0FFFFFFF8h
 * 0000000140B0A1E0: add     rbx, 8
 * 0000000140B0A1E4: sub     rcx, r13
 * 0000000140B0A1E7: jnz     short loc_140B0A1DA
 * 0000000140B0A1E9: test    eax, eax
 * 0000000140B0A1EB: jz      short loc_140B0A1FC
 * 0000000140B0A1ED: mov     ecx, 0FFFFFFFFh
 * 0000000140B0A1F2: mov     [rbx], r11b
 * 0000000140B0A1F5: add     rbx, r13
 * 0000000140B0A1F8: add     eax, ecx
 * 0000000140B0A1FA: jnz     short loc_140B0A1F2
 * 0000000140B0A1FC: mov     ebx, [r14+924h]
 * 0000000140B0A203: mov     [r14+924h], edx
 * 0000000140B0A20A: cmp     edx, 3
 * 0000000140B0A20D: jz      short loc_140B0A23E
 * 0000000140B0A20F: test    dword ptr [r14+990h], 10000000h
 * 0000000140B0A21A: jnz     short loc_140B0A235
 * 0000000140B0A21C: test    edx, edx
 * 0000000140B0A21E: jz      short loc_140B0A235
 * 0000000140B0A220: mov     rax, [r14+228h]
 * 0000000140B0A227: lea     rcx, [r8-8]
 * 0000000140B0A22B: mov     rdx, [rcx]
 * 0000000140B0A22E: call    KeGuardDispatchICall
 * 0000000140B0A233: jmp     short loc_140B0A24D
 * 0000000140B0A235: mov     rax, [r14+0F8h]
 * 0000000140B0A23C: jmp     short loc_140B0A245
 * 0000000140B0A23E: mov     rax, [r14+368h]
 * 0000000140B0A245: mov     rcx, r8
 * 0000000140B0A248: call    KeGuardDispatchICall
 * 0000000140B0A24D: mov     [r14+924h], ebx
 * 0000000140B0A254: xor     r11d, r11d
 * 0000000140B0A257: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 0000000140B0A25F: jmp     short loc_140B0A26A
 * 0000000140B0A261: mov     r14, rbx
 * 0000000140B0A264: mov     [rbx+7E4h], eax
 * 0000000140B0A26A: add     [r14+80Ch], r13d
 * 0000000140B0A271: mov     ecx, 30h ; '0'
 * 0000000140B0A276: add     r15, r14
 * 0000000140B0A279: mov     [rsp+0B70h+var_AF8], r15
 * 0000000140B0A27E: mov     rax, r15
 * 0000000140B0A281: lea     edx, [rcx-2Ah]
 * 0000000140B0A284: mov     [rax], r11
 * 0000000140B0A287: add     ecx, 0FFFFFFF8h
 * 0000000140B0A28A: add     rax, 8
 * 0000000140B0A28E: sub     rdx, r13
 * 0000000140B0A291: jnz     short loc_140B0A284
 * 0000000140B0A293: test    ecx, ecx
 * 0000000140B0A295: jz      short loc_140B0A2A6
 * 0000000140B0A297: mov     edx, 0FFFFFFFFh
 * 0000000140B0A29C: mov     [rax], r11b
 * 0000000140B0A29F: add     rax, r13
 * 0000000140B0A2A2: add     ecx, edx
 * 0000000140B0A2A4: jnz     short loc_140B0A29C
 * 0000000140B0A2A6: mov     rax, [rbp+0A70h+var_AC0]
 * 0000000140B0A2AA: mov     r13d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0A2B1: mov     r9, rax
 * 0000000140B0A2B4: mov     dword ptr [r15], 0Eh
 * 0000000140B0A2BB: mov     [r15+8], rax
 * 0000000140B0A2BF: mov     [r15+10h], r13d
 * 0000000140B0A2C3: add     [r14+828h], r13d
 * 0000000140B0A2CA: lea     rcx, [rax+r13]
 * 0000000140B0A2CE: mov     r10d, [r14+814h]
 * 0000000140B0A2D5: mov     rbx, [r14+818h]
 * 0000000140B0A2DC: cmp     rax, rcx
 * 0000000140B0A2DF: jnb     short loc_140B0A2F1
 * 0000000140B0A2E1: mov     edx, 40h ; '@'
 * 0000000140B0A2E6: prefetchnta byte ptr [rax]
 * 0000000140B0A2E9: add     rax, rdx
 * 0000000140B0A2EC: cmp     rax, rcx
 * 0000000140B0A2EF: jb      short loc_140B0A2E6
 * 0000000140B0A2F1: mov     r11d, r13d
 * 0000000140B0A2F4: mov     r8, rbx
 * 0000000140B0A2F7: shr     r11d, 7
 * 0000000140B0A2FB: mov     esi, 1
 * 0000000140B0A300: test    r11d, r11d
 * 0000000140B0A303: jz      short loc_140B0A381
 * 0000000140B0A305: mov     r13, [rbp+0A70h+var_AC0]
 * 0000000140B0A309: mov     r12d, 0FFFFFFFFh
 * 0000000140B0A30F: mov     r15, 7010008004002001h
 * 0000000140B0A319: mov     eax, 8
 * 0000000140B0A31E: xor     r8, [r9]
 * 0000000140B0A321: mov     ecx, r10d
 * 0000000140B0A324: rol     r8, cl
 * 0000000140B0A327: xor     r8, [r9+8]
 * 0000000140B0A32B: add     r9, 10h
 * 0000000140B0A32F: rol     r8, cl
 * 0000000140B0A332: sub     rax, rsi
 * 0000000140B0A335: jnz     short loc_140B0A31E
 * 0000000140B0A337: mov     rcx, r9
 * 0000000140B0A33A: sub     rcx, r13
 * 0000000140B0A33D: xor     rcx, rbx
 * 0000000140B0A340: mov     rax, rcx
 * 0000000140B0A343: rol     rax, 11h
 * 0000000140B0A347: xor     rcx, rax
 * 0000000140B0A34A: mov     rax, r15
 * 0000000140B0A34D: mul     rcx
 * 0000000140B0A350: xor     eax, edx
 * 0000000140B0A352: mov     [rbp+0A70h+var_4D0], rdx
 * 0000000140B0A359: xor     r10d, eax
 * 0000000140B0A35C: and     r10d, 3Fh
 * 0000000140B0A360: cmovz   r10d, esi
 * 0000000140B0A364: add     r11d, r12d
 * 0000000140B0A367: jnz     short loc_140B0A319
 * 0000000140B0A369: mov     r15, [rsp+0B70h+var_AF8]
 * 0000000140B0A36E: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0A375: mov     r12, [rsp+0B70h+var_B18]
 * 0000000140B0A37A: mov     r13d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0A381: mov     edx, r13d
 * 0000000140B0A384: and     edx, 7Fh
 * 0000000140B0A387: cmp     edx, 8
 * 0000000140B0A38A: jb      short loc_140B0A3A7
 * 0000000140B0A38C: mov     eax, edx
 * 0000000140B0A38E: shr     rax, 3
 * 0000000140B0A392: xor     r8, [r9]
 * 0000000140B0A395: mov     ecx, r10d
 * 0000000140B0A398: rol     r8, cl
 * 0000000140B0A39B: add     r9, 8
 * 0000000140B0A39F: add     edx, 0FFFFFFF8h
 * 0000000140B0A3A2: sub     rax, rsi
 * 0000000140B0A3A5: jnz     short loc_140B0A392
 * 0000000140B0A3A7: test    edx, edx
 * 0000000140B0A3A9: jz      short loc_140B0A3CD
 * 0000000140B0A3AB: mov     r13d, 0FFFFFFFFh
 * 0000000140B0A3B1: movzx   eax, byte ptr [r9]
 * 0000000140B0A3B5: mov     ecx, r10d
 * 0000000140B0A3B8: xor     r8, rax
 * 0000000140B0A3BB: add     r9, rsi
 * 0000000140B0A3BE: rol     r8, cl
 * 0000000140B0A3C1: add     edx, r13d
 * 0000000140B0A3C4: jnz     short loc_140B0A3B1
 * 0000000140B0A3C6: mov     r13d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0A3CD: mov     rax, r8
 * 0000000140B0A3D0: jmp     short loc_140B0A3D5
 * 0000000140B0A3D2: xor     r8d, eax
 * 0000000140B0A3D5: shr     rax, 1Fh
 * 0000000140B0A3D9: test    rax, rax
 * 0000000140B0A3DC: jnz     short loc_140B0A3D2
 * 0000000140B0A3DE: btr     r8d, 1Fh
 * 0000000140B0A3E3: mov     [rsp+0B70h+var_B10], r14
 * 0000000140B0A3E8: mov     [r15+14h], r8d
 * 0000000140B0A3EC: mov     rsi, r14
 * 0000000140B0A3EF: add     [r14+828h], r13d
 * 0000000140B0A3F6: jmp     short loc_140B0A40B
 * 0000000140B0A3F8: mov     r13d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0A3FF: mov     [rsp+0B70h+var_B10], rbx
 * 0000000140B0A404: mov     dword ptr [r15], 0Eh
 * 0000000140B0A40B: test    dword ptr [rsi+990h], 40000000h
 * 0000000140B0A415: jz      short loc_140B0A42F
 * 0000000140B0A417: test    r13d, r13d
 * 0000000140B0A41A: jz      short loc_140B0A42F
 * 0000000140B0A41C: mov     rdx, [rbp+0A70h+var_AC0]
 * 0000000140B0A420: lea     r9, [r15+1Ch]
 * 0000000140B0A424: mov     r8d, r13d
 * 0000000140B0A427: mov     rcx, rsi
 * 0000000140B0A42A: call    sub_1403F152C
 * 0000000140B0A42F: mov     r14, [rbp+0A70h+var_AC8]
 * 0000000140B0A433: mov     r13d, 1
 * 0000000140B0A439: mov     [r15+18h], r13d
 * 0000000140B0A43D: mov     dword ptr [r12+90h], 23h ; '#'
 * 0000000140B0A449: or      [r12+0B8h], r13d
 * 0000000140B0A451: cmp     dword ptr [r12+0A0h], 94h
 * 0000000140B0A45D: mov     [rbp+0A70h+var_A58], rsi
 * 0000000140B0A461: jb      loc_140B0A4FB
 * 0000000140B0A467: mov     rax, [rsi+1F8h]
 * 0000000140B0A46E: mov     rcx, r14
 * 0000000140B0A471: mov     rbx, [r12+98h]
 * 0000000140B0A479: call    KeGuardDispatchICall
 * 0000000140B0A47E: xor     r11d, r11d
 * 0000000140B0A481: test    rax, rax
 * 0000000140B0A484: jnz     short loc_140B0A497
 * 0000000140B0A486: mov     [rbp+0A70h+var_A40], r11
 * 0000000140B0A48A: mov     eax, 0C000009Ah
 * 0000000140B0A48F: mov     rbx, rsi
 * 0000000140B0A492: jmp     loc_140B0A95F
 * 0000000140B0A497: mov     r8d, [rax+50h]
 * 0000000140B0A49B: mov     edx, [r12+0B8h]
 * 0000000140B0A4A3: add     r8, r14
 * 0000000140B0A4A6: or      edx, 2
 * 0000000140B0A4A9: mov     [r12+0B8h], edx
 * 0000000140B0A4B1: mov     ecx, edx
 * 0000000140B0A4B3: mov     rax, [rbx+70h]
 * 0000000140B0A4B7: cmp     rax, r14
 * 0000000140B0A4BA: jb      short loc_140B0A4D7
 * 0000000140B0A4BC: cmp     rax, r8
 * 0000000140B0A4BF: jnb     short loc_140B0A4D7
 * 0000000140B0A4C1: mov     rax, [rax]
 * 0000000140B0A4C4: or      ecx, 4
 * 0000000140B0A4C7: mov     [r12+0A8h], rax
 * 0000000140B0A4CF: mov     [r12+0B8h], ecx
 * 0000000140B0A4D7: mov     rax, [rbx+78h]
 * 0000000140B0A4DB: cmp     rax, r14
 * 0000000140B0A4DE: jb      short loc_140B0A4FB
 * 0000000140B0A4E0: cmp     rax, r8
 * 0000000140B0A4E3: jnb     short loc_140B0A4FB
 * 0000000140B0A4E5: mov     rax, [rax]
 * 0000000140B0A4E8: or      ecx, 8
 * 0000000140B0A4EB: mov     [r12+0B0h], rax
 * 0000000140B0A4F3: mov     [r12+0B8h], ecx
 * 0000000140B0A4FB: test    dword ptr [rsi+990h], 400000h
 * 0000000140B0A505: mov     [rbp+0A70h+var_A40], rsi
 * 0000000140B0A509: jz      loc_140B0B424
 * 0000000140B0A50F: mov     rax, [rsi+1F8h]
 * 0000000140B0A516: mov     rcx, r14
 * 0000000140B0A519: call    KeGuardDispatchICall
 * 0000000140B0A51E: xor     r11d, r11d
 * 0000000140B0A521: mov     [rsp+0B70h+var_AF8], rax
 * 0000000140B0A526: mov     r15, rax
 * 0000000140B0A529: test    rax, rax
 * 0000000140B0A52C: jnz     short loc_140B0A538
 * 0000000140B0A52E: mov     eax, 0C000007Bh
 * 0000000140B0A533: jmp     loc_140B0A943
 * 0000000140B0A538: movzx   r10d, word ptr [r15+6]
 * 0000000140B0A53D: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140B0A547: mov     ecx, dword ptr [rbp+0A70h+var_AD8]
 * 0000000140B0A54A: mul     rcx
 * 0000000140B0A54D: mov     word ptr [rbp+0A70h+arg_8], r10w
 * 0000000140B0A555: mov     r9, rdx
 * 0000000140B0A558: shr     r9, 3
 * 0000000140B0A55C: mov     [rbp+0A70h+var_AC0], r9
 * 0000000140B0A560: test    r10w, r10w
 * 0000000140B0A564: jnz     short loc_140B0A5C5
 * 0000000140B0A566: test    dword ptr [rsi+990h], 200000h
 * 0000000140B0A570: jz      loc_140B0E2AF
 * 0000000140B0A576: cmp     [rsi+8F8h], r11d
 * 0000000140B0A57D: jnz     short loc_140B0A52E
 * 0000000140B0A57F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0A589: add     rax, rsi
 * 0000000140B0A58C: mov     [rsi+900h], rax
 * 0000000140B0A593: mov     [rsi+908h], r11
 * 0000000140B0A59A: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140B0A5A5: mov     [rsi+918h], r14
 * 0000000140B0A5AC: mov     [rsi+8F8h], r13d
 * 0000000140B0A5B3: xor     edx, edx
 * 0000000140B0A5B5: mov     rcx, rsi
 * 0000000140B0A5B8: call    $$ba
 * 0000000140B0A5BD: xor     r11d, r11d
 * 0000000140B0A5C0: jmp     loc_140B0A52E
 * 0000000140B0A5C5: mov     rdx, [rsp+0B70h+var_B20]
 * 0000000140B0A5CA: lea     r12, [r15+18h]
 * 0000000140B0A5CE: mov     eax, r9d
 * 0000000140B0A5D1: mov     rbx, rdx
 * 0000000140B0A5D4: lea     rcx, [rax+rax*2]
 * 0000000140B0A5D8: movzx   eax, word ptr [r15+14h]
 * 0000000140B0A5DD: add     r12, rax
 * 0000000140B0A5E0: lea     r13, [rdx+rcx*4]
 * 0000000140B0A5E4: mov     [rbp+0A70h+var_AF0], r13
 * 0000000140B0A5E8: mov     ecx, r11d
 * 0000000140B0A5EB: mov     [rsp+0B70h+var_B08], r12
 * 0000000140B0A5F0: mov     eax, r10d
 * 0000000140B0A5F3: mov     [rsp+0B70h+var_B00], ecx
 * 0000000140B0A5F7: test    r10d, r10d
 * 0000000140B0A5FA: jz      loc_140B0A823
 * 0000000140B0A600: mov     r8, [rbp+0A70h+var_AF0]
 * 0000000140B0A604: lea     r13, [r12+8]
 * 0000000140B0A609: mov     r9d, 1; BugCheckParameter3
 * 0000000140B0A60F: mov     r15d, [r13+8]
 * 0000000140B0A613: mov     eax, [r13+0]
 * 0000000140B0A617: cmp     r15d, eax
 * 0000000140B0A61A: mov     edx, [r13+4]
 * 0000000140B0A61E: cmovbe  r15d, eax
 * 0000000140B0A622: mov     [rbp+0A70h+var_AD0], edx
 * 0000000140B0A625: add     r15d, edx
 * 0000000140B0A628: test    ecx, ecx
 * 0000000140B0A62A: jz      short loc_140B0A642
 * 0000000140B0A62C: lea     eax, [rcx-1]
 * 0000000140B0A62F: lea     rax, [rax+rax*4]
 * 0000000140B0A633: cmp     r15d, [r12+rax*8+0Ch]
 * 0000000140B0A638: jb      loc_140B0A83E
 * 0000000140B0A63E: mov     ecx, [rsp+0B70h+var_B00]
 * 0000000140B0A642: cmp     rbx, r8
 * 0000000140B0A645: jz      loc_140B0A7FF
 * 0000000140B0A64B: mov     ecx, [rbx]
 * 0000000140B0A64D: mov     eax, [rbx+4]
 * 0000000140B0A650: cmp     ecx, r15d
 * 0000000140B0A653: jnb     loc_140B0A7E4
 * 0000000140B0A659: cmp     eax, edx
 * 0000000140B0A65B: jbe     loc_140B0A7E4
 * 0000000140B0A661: cmp     ecx, edx
 * 0000000140B0A663: jb      loc_140B0A894
 * 0000000140B0A669: cmp     eax, r15d
 * 0000000140B0A66C: ja      loc_140B0A894
 * 0000000140B0A672: mov     eax, [rbx+8]
 * 0000000140B0A675: mov     ecx, 1
 * 0000000140B0A67A: test    cl, al
 * 0000000140B0A67C: jnz     short loc_140B0A68A
 * 0000000140B0A67E: mov     al, [rax+r14]
 * 0000000140B0A682: test    al, 20h
 * 0000000140B0A684: jz      loc_140B0A7D6
 * 0000000140B0A68A: mov     eax, [r13+0]
 * 0000000140B0A68E: mov     ecx, [r13+4]
 * 0000000140B0A692: mov     r14d, [r13+8]
 * 0000000140B0A696: cmp     r14d, eax
 * 0000000140B0A699: mov     rdx, [rbp+0A70h+var_AC8]
 * 0000000140B0A69D: cmovbe  r14d, eax
 * 0000000140B0A6A1: mov     [rbp+0A70h+var_AE0], ecx
 * 0000000140B0A6A4: mov     rax, [rsi+418h]
 * 0000000140B0A6AB: add     r14d, ecx
 * 0000000140B0A6AE: mov     rcx, rbx
 * 0000000140B0A6B1: call    KeGuardDispatchICall
 * 0000000140B0A6B6: mov     r12, rax
 * 0000000140B0A6B9: mov     eax, [rbp+0A70h+var_AE0]
 * 0000000140B0A6BC: cmp     [r12], eax
 * 0000000140B0A6C0: jb      short loc_140B0A6C9
 * 0000000140B0A6C2: cmp     [r12+4], r14d
 * 0000000140B0A6C7: jbe     short loc_140B0A734
 * 0000000140B0A6C9: mov     r8, [rbp+0A70h+var_AC8]; BugCheckParameter2
 * 0000000140B0A6CD: mov     edx, r12d
 * 0000000140B0A6D0: sub     edx, r8d
 * 0000000140B0A6D3: mov     eax, 80000000h
 * 0000000140B0A6D8: or      edx, eax
 * 0000000140B0A6DA: test    dword ptr [rsi+990h], 200000h
 * 0000000140B0A6E4: jz      loc_140B0E351
 * 0000000140B0A6EA: xor     ecx, ecx
 * 0000000140B0A6EC: cmp     [rsi+8F8h], ecx
 * 0000000140B0A6F2: jnz     short loc_140B0A734
 * 0000000140B0A6F4: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0A6FE: xor     edx, edx
 * 0000000140B0A700: add     rax, rsi
 * 0000000140B0A703: mov     [rsi+900h], rax
 * 0000000140B0A70A: lea     eax, [rcx+1]
 * 0000000140B0A70D: mov     [rsi+908h], rcx
 * 0000000140B0A714: mov     rcx, rsi
 * 0000000140B0A717: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140B0A722: mov     [rsi+918h], r8
 * 0000000140B0A729: mov     [rsi+8F8h], eax
 * 0000000140B0A72F: call    $$ba
 * 0000000140B0A734: mov     r8d, [r12]
 * 0000000140B0A738: mov     rcx, r12
 * 0000000140B0A73B: add     r8, [rbp+0A70h+var_AC8]
 * 0000000140B0A73F: mov     rax, [rsi+420h]
 * 0000000140B0A746: mov     rdx, [rbp+0A70h+var_AC8]
 * 0000000140B0A74A: call    KeGuardDispatchICall
 * 0000000140B0A74F: mov     rdx, rax
 * 0000000140B0A752: mov     eax, [rbp+0A70h+var_AE0]
 * 0000000140B0A755: cmp     [rdx], eax
 * 0000000140B0A757: jb      short loc_140B0A75F
 * 0000000140B0A759: cmp     [rdx+4], r14d
 * 0000000140B0A75D: jbe     short loc_140B0A7CC
 * 0000000140B0A75F: mov     r14, [rbp+0A70h+var_AC8]
 * 0000000140B0A763: mov     eax, 80000000h
 * 0000000140B0A768: sub     edx, r14d
 * 0000000140B0A76B: or      edx, eax
 * 0000000140B0A76D: test    dword ptr [rsi+990h], 200000h
 * 0000000140B0A777: jz      loc_140B0E328
 * 0000000140B0A77D: xor     r11d, r11d
 * 0000000140B0A780: cmp     [rsi+8F8h], r11d
 * 0000000140B0A787: jnz     short loc_140B0A7D3
 * 0000000140B0A789: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0A793: xor     edx, edx
 * 0000000140B0A795: add     rax, rsi
 * 0000000140B0A798: mov     rcx, rsi
 * 0000000140B0A79B: mov     [rsi+900h], rax
 * 0000000140B0A7A2: lea     eax, [r11+1]
 * 0000000140B0A7A6: mov     [rsi+908h], r11
 * 0000000140B0A7AD: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140B0A7B8: mov     [rsi+918h], r14
 * 0000000140B0A7BF: mov     [rsi+8F8h], eax
 * 0000000140B0A7C5: call    $$ba
 * 0000000140B0A7CA: jmp     short loc_140B0A7D0
 * 0000000140B0A7CC: mov     r14, [rbp+0A70h+var_AC8]
 * 0000000140B0A7D0: xor     r11d, r11d
 * 0000000140B0A7D3: mov     edx, [rbp+0A70h+var_AD0]
 * 0000000140B0A7D6: add     rbx, 0Ch
 * 0000000140B0A7DA: cmp     rbx, [rbp+0A70h+var_AF0]
 * 0000000140B0A7DE: jnz     loc_140B0A64B
 * 0000000140B0A7E4: mov     ecx, [rsp+0B70h+var_B00]
 * 0000000140B0A7E8: mov     r9d, 1
 * 0000000140B0A7EE: movzx   r10d, word ptr [rbp+0A70h+arg_8]
 * 0000000140B0A7F6: mov     r12, [rsp+0B70h+var_B08]
 * 0000000140B0A7FB: mov     r8, [rbp+0A70h+var_AF0]
 * 0000000140B0A7FF: add     ecx, r9d
 * 0000000140B0A802: movzx   eax, r10w
 * 0000000140B0A806: add     r13, 28h ; '('
 * 0000000140B0A80A: mov     [rsp+0B70h+var_B00], ecx
 * 0000000140B0A80E: cmp     ecx, eax
 * 0000000140B0A810: jb      loc_140B0A60F
 * 0000000140B0A816: mov     r9, [rbp+0A70h+var_AC0]
 * 0000000140B0A81A: mov     r15, [rsp+0B70h+var_AF8]
 * 0000000140B0A81F: mov     r13, [rbp+0A70h+var_AF0]
 * 0000000140B0A823: cmp     rbx, r13
 * 0000000140B0A826: jz      loc_140B0A8EE
 * 0000000140B0A82C: test    dword ptr [rsi+990h], 200000h
 * 0000000140B0A836: jz      loc_140B0E2D7
 * 0000000140B0A83C: jmp     short loc_140B0A8A4
 * 0000000140B0A83E: test    dword ptr [rsi+990h], 200000h
 * 0000000140B0A848: jz      loc_140B0E302
 * 0000000140B0A84E: cmp     [rsi+8F8h], r11d
 * 0000000140B0A855: jnz     loc_140B0A52E
 * 0000000140B0A85B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0A865: add     rax, rsi
 * 0000000140B0A868: mov     [rsi+900h], rax
 * 0000000140B0A86F: mov     [rsi+908h], r11
 * 0000000140B0A876: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140B0A881: mov     [rsi+918h], r14
 * 0000000140B0A888: mov     [rsi+8F8h], r9d
 * 0000000140B0A88F: jmp     loc_140B0A5B3
 * 0000000140B0A894: test    dword ptr [rsi+990h], 200000h
 * 0000000140B0A89E: jz      loc_140B0E377
 * 0000000140B0A8A4: cmp     [rsi+8F8h], r11d
 * 0000000140B0A8AB: jnz     loc_140B0A52E
 * 0000000140B0A8B1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0A8BB: add     rax, rsi
 * 0000000140B0A8BE: mov     [rsi+900h], rax
 * 0000000140B0A8C5: mov     eax, 1
 * 0000000140B0A8CA: mov     [rsi+908h], r11
 * 0000000140B0A8D1: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140B0A8DC: mov     [rsi+918h], r14
 * 0000000140B0A8E3: mov     [rsi+8F8h], eax
 * 0000000140B0A8E9: jmp     loc_140B0A5B3
 * 0000000140B0A8EE: test    r9d, r9d
 * 0000000140B0A8F1: jz      short loc_140B0A8FC
 * 0000000140B0A8F3: lea     ecx, [r9+6]
 * 0000000140B0A8F7: and     ecx, 0FFFFFFF8h
 * 0000000140B0A8FA: jmp     short loc_140B0A8FF
 * 0000000140B0A8FC: mov     ecx, r11d
 * 0000000140B0A8FF: mov     r14d, [rsi+7E4h]
 * 0000000140B0A906: lea     eax, [rax+rax*2]
 * 0000000140B0A909: mov     r8d, [rsi+924h]
 * 0000000140B0A910: lea     eax, [rax+6]
 * 0000000140B0A913: lea     eax, [rcx+rax*8]
 * 0000000140B0A916: add     eax, r14d
 * 0000000140B0A919: cmp     eax, [rsi+0A1Ch]
 * 0000000140B0A91F: jbe     loc_140B0AA47
 * 0000000140B0A925: mov     edx, eax
 * 0000000140B0A927: mov     rcx, rsi
 * 0000000140B0A92A: call    sub_140B12020
 * 0000000140B0A92F: xor     r11d, r11d
 * 0000000140B0A932: mov     [rbp+0A70h+var_AB0], rax
 * 0000000140B0A936: mov     rbx, rax
 * 0000000140B0A939: test    rax, rax
 * 0000000140B0A93C: jnz     short loc_140B0A97C
 * 0000000140B0A93E: mov     eax, 0C000009Ah
 * 0000000140B0A943: mov     rbx, rsi
 * 0000000140B0A946: test    eax, eax
 * 0000000140B0A948: jns     loc_140B0B42B
 * 0000000140B0A94E: mov     r13d, 1
 * 0000000140B0A954: cmp     eax, 0C000010Eh
 * 0000000140B0A959: jz      loc_140B0B42B
 * 0000000140B0A95F: test    eax, eax
 * 0000000140B0A961: jns     loc_140B0B4BF
 * 0000000140B0A967: mov     [rsp+0B70h+var_B10], rsi
 * 0000000140B0A96C: cmp     eax, 0C000010Eh
 * 0000000140B0A971: jnz     loc_140B093FB
 * 0000000140B0A977: jmp     loc_140B0B4BF
 * 0000000140B0A97C: mov     ecx, [rsi+990h]
 * 0000000140B0A982: test    cl, 4
 * 0000000140B0A985: jnz     loc_140B0AA32
 * 0000000140B0A98B: mov     eax, [rsi+7E4h]
 * 0000000140B0A991: and     ecx, 20000000h
 * 0000000140B0A997: mov     r8, [rsi+7C8h]
 * 0000000140B0A99E: neg     ecx
 * 0000000140B0A9A0: mov     r9d, 1
 * 0000000140B0A9A6: sbb     edx, edx
 * 0000000140B0A9A8: and     edx, [rsi+924h]
 * 0000000140B0A9AE: cmp     eax, 8
 * 0000000140B0A9B1: jb      short loc_140B0A9C8
 * 0000000140B0A9B3: mov     ecx, eax
 * 0000000140B0A9B5: shr     rcx, 3
 * 0000000140B0A9B9: mov     [rsi], r11
 * 0000000140B0A9BC: add     eax, 0FFFFFFF8h
 * 0000000140B0A9BF: add     rsi, 8
 * 0000000140B0A9C3: sub     rcx, r9
 * 0000000140B0A9C6: jnz     short loc_140B0A9B9
 * 0000000140B0A9C8: test    eax, eax
 * 0000000140B0A9CA: jz      short loc_140B0A9DB
 * 0000000140B0A9CC: mov     ecx, 0FFFFFFFFh
 * 0000000140B0A9D1: mov     [rsi], r11b
 * 0000000140B0A9D4: add     rsi, r9
 * 0000000140B0A9D7: add     eax, ecx
 * 0000000140B0A9D9: jnz     short loc_140B0A9D1
 * 0000000140B0A9DB: mov     esi, [rbx+924h]
 * 0000000140B0A9E1: mov     [rbx+924h], edx
 * 0000000140B0A9E7: cmp     edx, 3
 * 0000000140B0A9EA: jz      short loc_140B0AA1A
 * 0000000140B0A9EC: test    dword ptr [rbx+990h], 10000000h
 * 0000000140B0A9F6: jnz     short loc_140B0AA11
 * 0000000140B0A9F8: test    edx, edx
 * 0000000140B0A9FA: jz      short loc_140B0AA11
 * 0000000140B0A9FC: mov     rax, [rbx+228h]
 * 0000000140B0AA03: lea     rcx, [r8-8]
 * 0000000140B0AA07: mov     rdx, [rcx]
 * 0000000140B0AA0A: call    KeGuardDispatchICall
 * 0000000140B0AA0F: jmp     short loc_140B0AA29
 * 0000000140B0AA11: mov     rax, [rbx+0F8h]
 * 0000000140B0AA18: jmp     short loc_140B0AA21
 * 0000000140B0AA1A: mov     rax, [rbx+368h]
 * 0000000140B0AA21: mov     rcx, r8
 * 0000000140B0AA24: call    KeGuardDispatchICall
 * 0000000140B0AA29: mov     [rbx+924h], esi
 * 0000000140B0AA2F: xor     r11d, r11d
 * 0000000140B0AA32: and     dword ptr [rbx+990h], 0FFFFFFFBh
 * 0000000140B0AA39: mov     r9, [rbp+0A70h+var_AC0]
 * 0000000140B0AA3D: movzx   r10d, word ptr [rbp+0A70h+arg_8]
 * 0000000140B0AA45: jmp     short loc_140B0AA54
 * 0000000140B0AA47: mov     rbx, rsi
 * 0000000140B0AA4A: mov     [rsi+7E4h], eax
 * 0000000140B0AA50: mov     [rbp+0A70h+var_AB0], rbx
 * 0000000140B0AA54: mov     esi, 1
 * 0000000140B0AA59: lea     rcx, [rbx+r14]
 * 0000000140B0AA5D: add     [rbx+80Ch], esi
 * 0000000140B0AA63: mov     rax, rcx
 * 0000000140B0AA66: lea     edx, [rsi+2Fh]
 * 0000000140B0AA69: lea     r8d, [rsi+5]
 * 0000000140B0AA6D: mov     [rax], r11
 * 0000000140B0AA70: add     edx, 0FFFFFFF8h
 * 0000000140B0AA73: add     rax, 8
 * 0000000140B0AA77: sub     r8, rsi
 * 0000000140B0AA7A: jnz     short loc_140B0AA6D
 * 0000000140B0AA7C: test    edx, edx
 * 0000000140B0AA7E: jz      short loc_140B0AA91
 * 0000000140B0AA80: mov     r8d, 0FFFFFFFFh
 * 0000000140B0AA86: mov     [rax], r11b
 * 0000000140B0AA89: add     rax, rsi
 * 0000000140B0AA8C: add     edx, r8d
 * 0000000140B0AA8F: jnz     short loc_140B0AA86
 * 0000000140B0AA91: mov     rax, [rsp+0B70h+var_B20]
 * 0000000140B0AA96: mov     dword ptr [rcx], 1Eh
 * 0000000140B0AA9C: mov     [rcx+8], rax
 * 0000000140B0AAA0: mov     [rcx+10h], r11d
 * 0000000140B0AAA4: mov     rdx, [rbx+818h]
 * 0000000140B0AAAB: mov     rax, rdx
 * 0000000140B0AAAE: jmp     short loc_140B0AAB2
 * 0000000140B0AAB0: xor     edx, eax
 * 0000000140B0AAB2: shr     rax, 1Fh
 * 0000000140B0AAB6: test    rax, rax
 * 0000000140B0AAB9: jnz     short loc_140B0AAB0
 * 0000000140B0AABB: mov     r14, [rbp+0A70h+var_AC8]
 * 0000000140B0AABF: btr     edx, 1Fh
 * 0000000140B0AAC3: mov     [rcx+14h], edx
 * 0000000140B0AAC6: mov     rsi, rbx
 * 0000000140B0AAC9: mov     [rcx+18h], r14
 * 0000000140B0AACD: mov     eax, [r15+50h]
 * 0000000140B0AAD1: mov     r15d, 1
 * 0000000140B0AAD7: mov     [rcx+20h], eax
 * 0000000140B0AADA: mov     eax, dword ptr [rbp+0A70h+var_AD8]
 * 0000000140B0AADD: mov     [rcx+24h], eax
 * 0000000140B0AAE0: mov     [rcx+28h], r10w
 * 0000000140B0AAE5: or      [rcx+2Ah], r15w
 * 0000000140B0AAEA: add     rcx, 30h ; '0'
 * 0000000140B0AAEE: mov     [rbp+0A70h+var_A40], rbx
 * 0000000140B0AAF2: mov     [rbp+0A70h+var_AE8], rcx
 * 0000000140B0AAF6: test    r9d, r9d
 * 0000000140B0AAF9: jz      short loc_140B0AB0C
 * 0000000140B0AAFB: lea     r11d, [r9-1]
 * 0000000140B0AAFF: add     r11, 7
 * 0000000140B0AB03: and     r11, 0FFFFFFFFFFFFFFF8h
 * 0000000140B0AB07: add     r11, rcx
 * 0000000140B0AB0A: jmp     short loc_140B0AB0F
 * 0000000140B0AB0C: mov     r11, rcx
 * 0000000140B0AB0F: movzx   eax, r10w
 * 0000000140B0AB13: mov     [rbp+0A70h+var_AB8], r11
 * 0000000140B0AB17: lea     rcx, [rax+rax*2]
 * 0000000140B0AB1B: lea     r8, [r11+rcx*8]
 * 0000000140B0AB1F: xor     ecx, ecx
 * 0000000140B0AB21: mov     [rsp+0B70h+var_AF8], r8
 * 0000000140B0AB26: test    r9d, r9d
 * 0000000140B0AB29: jz      short loc_140B0AB3B
 * 0000000140B0AB2B: mov     rax, [rsp+0B70h+var_B20]
 * 0000000140B0AB30: add     rax, 0Ch
 * 0000000140B0AB34: mov     [rsp+0B70h+var_B18], rax
 * 0000000140B0AB39: jmp     short loc_140B0AB40
 * 0000000140B0AB3B: mov     [rsp+0B70h+var_B18], r13
 * 0000000140B0AB40: cmp     cx, r10w
 * 0000000140B0AB44: jnb     short loc_140B0AB89
 * 0000000140B0AB46: movzx   edx, r10w
 * 0000000140B0AB4A: lea     rax, [r11+8]
 * 0000000140B0AB4E: xor     r10d, r10d
 * 0000000140B0AB51: mov     r12d, 80000000h
 * 0000000140B0AB57: lea     r9d, [r10+0Ch]
 * 0000000140B0AB5B: lea     r13d, [r10+2]
 * 0000000140B0AB5F: mov     rcx, r13
 * 0000000140B0AB62: mov     [rax-8], r10d
 * 0000000140B0AB66: mov     [rax-4], r10d
 * 0000000140B0AB6A: mov     [rax], r12d
 * 0000000140B0AB6D: add     rax, r9
 * 0000000140B0AB70: sub     rcx, r15
 * 0000000140B0AB73: jnz     short loc_140B0AB62
 * 0000000140B0AB75: lea     r13d, [rcx+2]
 * 0000000140B0AB79: sub     rdx, r15
 * 0000000140B0AB7C: jnz     short loc_140B0AB5F
 * 0000000140B0AB7E: mov     r12, [rsp+0B70h+var_B08]
 * 0000000140B0AB83: mov     r13, [rbp+0A70h+var_AF0]
 * 0000000140B0AB87: jmp     short loc_140B0AB8C
 * 0000000140B0AB89: xor     r10d, r10d
 * 0000000140B0AB8C: cmp     r11, r8
 * 0000000140B0AB8F: jz      loc_140B0B424
 * 0000000140B0AB95: test    dword ptr [r12+24h], 2000000h
 * 0000000140B0AB9E: mov     dword ptr [rbp+0A70h+arg_8], r10d
 * 0000000140B0ABA5: jnz     short loc_140B0ABBD
 * 0000000140B0ABA7: mov     eax, [r12]
 * 0000000140B0ABAB: cmp     eax, 54494E49h
 * 0000000140B0ABB0: jnz     short loc_140B0ABCB
 * 0000000140B0ABB2: cmp     dword ptr [r12+4], 4742444Bh
 * 0000000140B0ABBB: jnz     short loc_140B0ABF8
 * 0000000140B0ABBD: mov     edx, r15d
 * 0000000140B0ABC0: mov     dword ptr [rbp+0A70h+arg_8], edx
 * 0000000140B0ABC6: jmp     loc_140B0AD05
 * 0000000140B0ABCB: cmp     eax, 45474150h
 * 0000000140B0ABD0: jnz     short loc_140B0ABF8
 * 0000000140B0ABD2: movzx   eax, word ptr [r12+4]
 * 0000000140B0ABD8: mov     ecx, 7877h
 * 0000000140B0ABDD: cmp     ax, cx
 * 0000000140B0ABE0: jz      short loc_140B0ABBD
 * 0000000140B0ABE2: mov     ecx, 7277h
 * 0000000140B0ABE7: cmp     ax, cx
 * 0000000140B0ABEA: jz      short loc_140B0ABBD
 * 0000000140B0ABEC: mov     ecx, 7777h
 * 0000000140B0ABF1: cmp     ax, cx
 * 0000000140B0ABF4: jnz     short loc_140B0AC0C
 * 0000000140B0ABF6: jmp     short loc_140B0ABBD
 * 0000000140B0ABF8: cmp     eax, 41525245h
 * 0000000140B0ABFD: jnz     short loc_140B0AC0C
 * 0000000140B0ABFF: mov     eax, 4154h
 * 0000000140B0AC04: cmp     [r12+4], ax
 * 0000000140B0AC0A: jz      short loc_140B0ABBD
 * 0000000140B0AC0C: mov     r8, [rbx+930h]
 * 0000000140B0AC13: mov     r9, r12
 * 0000000140B0AC16: mov     r10, [rbx+938h]
 * 0000000140B0AC1D: sub     r9, r8
 * 0000000140B0AC20: mov     r11, [rbx+940h]
 * 0000000140B0AC27: mov     r14d, 7
 * 0000000140B0AC2D: mov     rsi, [rbx+948h]
 * 0000000140B0AC34: movzx   edx, byte ptr [r8+r9]
 * 0000000140B0AC39: movzx   eax, byte ptr [r8]
 * 0000000140B0AC3D: add     r8, r15
 * 0000000140B0AC40: cmp     rdx, rax
 * 0000000140B0AC43: jnz     short loc_140B0AC54
 * 0000000140B0AC45: mov     eax, 0FFFFFFFFh
 * 0000000140B0AC4A: add     r14d, eax
 * 0000000140B0AC4D: jnz     short loc_140B0AC34
 * 0000000140B0AC4F: jmp     loc_140B0ACE9
 * 0000000140B0AC54: mov     r8d, 8
 * 0000000140B0AC5A: mov     r9, r12
 * 0000000140B0AC5D: mov     rcx, [r9]
 * 0000000140B0AC60: add     r9, 8
 * 0000000140B0AC64: mov     rax, [r10]
 * 0000000140B0AC67: add     r10, 8
 * 0000000140B0AC6B: cmp     rcx, rax
 * 0000000140B0AC6E: jnz     short loc_140B0AC9E
 * 0000000140B0AC70: add     r8d, 0FFFFFFF8h
 * 0000000140B0AC74: cmp     r8d, 8
 * 0000000140B0AC78: jnb     short loc_140B0AC5D
 * 0000000140B0AC7A: test    r8d, r8d
 * 0000000140B0AC7D: jz      short loc_140B0ACE9
 * 0000000140B0AC7F: movzx   edx, byte ptr [r9]
 * 0000000140B0AC83: add     r9, r15
 * 0000000140B0AC86: movzx   eax, byte ptr [r10]
 * 0000000140B0AC8A: add     r10, r15
 * 0000000140B0AC8D: cmp     rdx, rax
 * 0000000140B0AC90: jnz     short loc_140B0AC9E
 * 0000000140B0AC92: mov     eax, 0FFFFFFFFh
 * 0000000140B0AC97: add     r8d, eax
 * 0000000140B0AC9A: jnz     short loc_140B0AC7F
 * 0000000140B0AC9C: jmp     short loc_140B0ACE9
 * 0000000140B0AC9E: mov     r8, r12
 * 0000000140B0ACA1: mov     r9d, 4
 * 0000000140B0ACA7: sub     r8, r11
 * 0000000140B0ACAA: mov     r10d, 0FFFFFFFFh
 * 0000000140B0ACB0: movzx   edx, byte ptr [r11+r8]
 * 0000000140B0ACB5: movzx   eax, byte ptr [r11]
 * 0000000140B0ACB9: add     r11, r15
 * 0000000140B0ACBC: cmp     rdx, rax
 * 0000000140B0ACBF: jnz     short loc_140B0ACC8
 * 0000000140B0ACC1: add     r9d, r10d
 * 0000000140B0ACC4: jnz     short loc_140B0ACB0
 * 0000000140B0ACC6: jmp     short loc_140B0ACE9
 * 0000000140B0ACC8: mov     r8, r12
 * 0000000140B0ACCB: mov     r9d, 6
 * 0000000140B0ACD1: sub     r8, rsi
 * 0000000140B0ACD4: movzx   edx, byte ptr [rsi+r8]
 * 0000000140B0ACD9: movzx   eax, byte ptr [rsi]
 * 0000000140B0ACDC: add     rsi, r15
 * 0000000140B0ACDF: cmp     rdx, rax
 * 0000000140B0ACE2: jnz     short loc_140B0ACF4
 * 0000000140B0ACE4: add     r9d, r10d
 * 0000000140B0ACE7: jnz     short loc_140B0ACD4
 * 0000000140B0ACE9: mov     edx, r15d
 * 0000000140B0ACEC: mov     dword ptr [rbp+0A70h+arg_8], edx
 * 0000000140B0ACF2: jmp     short loc_140B0ACFA
 * 0000000140B0ACF4: mov     edx, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0ACFA: mov     r14, [rbp+0A70h+var_AC8]
 * 0000000140B0ACFE: xor     r10d, r10d
 * 0000000140B0AD01: mov     r11, [rbp+0A70h+var_AB8]
 * 0000000140B0AD05: mov     ecx, [r12+24h]
 * 0000000140B0AD0A: test    ecx, ecx
 * 0000000140B0AD0C: jns     short loc_140B0AD19
 * 0000000140B0AD0E: mov     edx, r15d
 * 0000000140B0AD11: mov     dword ptr [rbp+0A70h+arg_8], edx
 * 0000000140B0AD17: jmp     short loc_140B0AD1D
 * 0000000140B0AD19: test    edx, edx
 * 0000000140B0AD1B: jz      short loc_140B0AD46
 * 0000000140B0AD1D: cmp     dword ptr [r12], 54494E49h
 * 0000000140B0AD25: jnz     short loc_140B0AD46
 * 0000000140B0AD27: cmp     dword ptr [r12+4], 4742444Bh
 * 0000000140B0AD30: jnz     short loc_140B0AD46
 * 0000000140B0AD32: test    dword ptr [rbx+994h], 2000h
 * 0000000140B0AD3C: cmovnz  edx, r10d
 * 0000000140B0AD40: mov     dword ptr [rbp+0A70h+arg_8], edx
 * 0000000140B0AD46: test    dword ptr [rbx+994h], 4000h
 * 0000000140B0AD50: jz      short loc_140B0AD73
 * 0000000140B0AD52: bt      ecx, 1Dh
 * 0000000140B0AD56: jnb     short loc_140B0AD73
 * 0000000140B0AD58: cmp     r14, [rbx+5E0h]
 * 0000000140B0AD5F: jz      short loc_140B0AD6A
 * 0000000140B0AD61: cmp     r14, [rbx+5E8h]
 * 0000000140B0AD68: jnz     short loc_140B0AD73
 * 0000000140B0AD6A: mov     edx, r15d
 * 0000000140B0AD6D: mov     dword ptr [rbp+0A70h+arg_8], edx
 * 0000000140B0AD73: mov     r8d, [r12+0Ch]
 * 0000000140B0AD78: mov     r15d, [r12+10h]
 * 0000000140B0AD7D: mov     eax, [r12+8]
 * 0000000140B0AD82: cmp     r15d, eax
 * 0000000140B0AD85: mov     r9, [rsp+0B70h+var_B20]
 * 0000000140B0AD8A: cmovbe  r15d, eax
 * 0000000140B0AD8E: mov     dword ptr [rbp+0A70h+var_AD8], r8d
 * 0000000140B0AD92: add     r15d, r8d
 * 0000000140B0AD95: cmp     r9, r13
 * 0000000140B0AD98: mov     [rbp+0A70h+var_AD0], r15d
 * 0000000140B0AD9C: mov     r13d, r8d
 * 0000000140B0AD9F: jz      loc_140B0AF4B
 * 0000000140B0ADA5: mov     eax, [r9]
 * 0000000140B0ADA8: mov     ecx, [r9+4]
 * 0000000140B0ADAC: mov     r12d, ecx
 * 0000000140B0ADAF: cmp     eax, r8d
 * 0000000140B0ADB2: jbe     loc_140B0AF54
 * 0000000140B0ADB8: cmp     ecx, r15d
 * 0000000140B0ADBB: ja      loc_140B0B0E2
 * 0000000140B0ADC1: test    edx, edx
 * 0000000140B0ADC3: jnz     loc_140B0B130
 * 0000000140B0ADC9: lea     rsi, [r14+r8]
 * 0000000140B0ADCD: mov     [r11], r8d
 * 0000000140B0ADD0: mov     r9d, eax
 * 0000000140B0ADD3: mov     [r11+4], eax
 * 0000000140B0ADD7: sub     r9d, r8d
 * 0000000140B0ADDA: mov     [rbp+0A70h+var_AE0], ecx
 * 0000000140B0ADDD: mov     r14d, r9d
 * 0000000140B0ADE0: lea     rdx, [rbp+0A70h+var_8F8]
 * 0000000140B0ADE7: add     r14, rsi
 * 0000000140B0ADEA: lea     r8, [rbp+0A70h+var_760]
 * 0000000140B0ADF1: mov     r13d, eax
 * 0000000140B0ADF4: mov     rcx, [r8]
 * 0000000140B0ADF7: mov     eax, [rdx]
 * 0000000140B0ADF9: add     rax, rcx
 * 0000000140B0ADFC: cmp     rsi, rax
 * 0000000140B0ADFF: jnb     short loc_140B0AE0A
 * 0000000140B0AE01: cmp     r14, rcx
 * 0000000140B0AE04: ja      loc_140B0B0D9
 * 0000000140B0AE0A: inc     r10d
 * 0000000140B0AE0D: add     r8, 8
 * 0000000140B0AE11: add     rdx, 4
 * 0000000140B0AE15: cmp     r10d, 6
 * 0000000140B0AE19: jb      short loc_140B0ADF4
 * 0000000140B0AE1B: add     [rbx+828h], r9d
 * 0000000140B0AE22: mov     r10, rsi
 * 0000000140B0AE25: mov     r11d, [rbx+814h]
 * 0000000140B0AE2C: mov     rax, rsi
 * 0000000140B0AE2F: mov     r15, [rbx+818h]
 * 0000000140B0AE36: cmp     rsi, r14
 * 0000000140B0AE39: jnb     short loc_140B0AE4B
 * 0000000140B0AE3B: mov     ecx, 40h ; '@'
 * 0000000140B0AE40: prefetchnta byte ptr [rax]
 * 0000000140B0AE43: add     rax, rcx
 * 0000000140B0AE46: cmp     rax, r14
 * 0000000140B0AE49: jb      short loc_140B0AE40
 * 0000000140B0AE4B: mov     r14d, r9d
 * 0000000140B0AE4E: mov     r8, r15
 * 0000000140B0AE51: shr     r14d, 7
 * 0000000140B0AE55: test    r14d, r14d
 * 0000000140B0AE58: jz      short loc_140B0AECE
 * 0000000140B0AE5A: mov     edi, 1
 * 0000000140B0AE5F: mov     ebx, 0FFFFFFFFh
 * 0000000140B0AE64: mov     r12, 7010008004002001h
 * 0000000140B0AE6E: mov     eax, 8
 * 0000000140B0AE73: xor     r8, [r10]
 * 0000000140B0AE76: mov     ecx, r11d
 * 0000000140B0AE79: rol     r8, cl
 * 0000000140B0AE7C: xor     r8, [r10+8]
 * 0000000140B0AE80: add     r10, 10h
 * 0000000140B0AE84: rol     r8, cl
 * 0000000140B0AE87: sub     rax, rdi
 * 0000000140B0AE8A: jnz     short loc_140B0AE73
 * 0000000140B0AE8C: mov     rcx, r10
 * 0000000140B0AE8F: sub     rcx, rsi
 * 0000000140B0AE92: xor     rcx, r15
 * 0000000140B0AE95: mov     rax, rcx
 * 0000000140B0AE98: rol     rax, 11h
 * 0000000140B0AE9C: xor     rcx, rax
 * 0000000140B0AE9F: mov     rax, r12
 * 0000000140B0AEA2: mul     rcx
 * 0000000140B0AEA5: xor     r11d, edx
 * 0000000140B0AEA8: mov     [rbp+0A70h+var_4B8], rdx
 * 0000000140B0AEAF: xor     r11d, eax
 * 0000000140B0AEB2: and     r11d, 3Fh
 * 0000000140B0AEB6: cmovz   r11d, edi
 * 0000000140B0AEBA: add     r14d, ebx
 * 0000000140B0AEBD: jnz     short loc_140B0AE6E
 * 0000000140B0AEBF: mov     rbx, [rbp+0A70h+var_AB0]
 * 0000000140B0AEC3: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0AECA: mov     r12d, [rbp+0A70h+var_AE0]
 * 0000000140B0AECE: and     r9d, 7Fh
 * 0000000140B0AED2: mov     esi, 1
 * 0000000140B0AED7: cmp     r9d, 8
 * 0000000140B0AEDB: jb      short loc_140B0AEFA
 * 0000000140B0AEDD: mov     eax, r9d
 * 0000000140B0AEE0: shr     rax, 3
 * 0000000140B0AEE4: xor     r8, [r10]
 * 0000000140B0AEE7: mov     ecx, r11d
 * 0000000140B0AEEA: rol     r8, cl
 * 0000000140B0AEED: add     r10, 8
 * 0000000140B0AEF1: add     r9d, 0FFFFFFF8h
 * 0000000140B0AEF5: sub     rax, rsi
 * 0000000140B0AEF8: jnz     short loc_140B0AEE4
 * 0000000140B0AEFA: test    r9d, r9d
 * 0000000140B0AEFD: jz      short loc_140B0AF1D
 * 0000000140B0AEFF: mov     ebx, 0FFFFFFFFh
 * 0000000140B0AF04: movzx   eax, byte ptr [r10]
 * 0000000140B0AF08: mov     ecx, r11d
 * 0000000140B0AF0B: xor     r8, rax
 * 0000000140B0AF0E: add     r10, rsi
 * 0000000140B0AF11: rol     r8, cl
 * 0000000140B0AF14: add     r9d, ebx
 * 0000000140B0AF17: jnz     short loc_140B0AF04
 * 0000000140B0AF19: mov     rbx, [rbp+0A70h+var_AB0]
 * 0000000140B0AF1D: mov     rax, r8
 * 0000000140B0AF20: shr     rax, 1Fh
 * 0000000140B0AF24: xor     r10d, r10d
 * 0000000140B0AF27: jmp     short loc_140B0AF30
 * 0000000140B0AF29: xor     r8d, eax
 * 0000000140B0AF2C: shr     rax, 1Fh
 * 0000000140B0AF30: test    rax, rax
 * 0000000140B0AF33: jnz     short loc_140B0AF29
 * 0000000140B0AF35: mov     rax, [rbp+0A70h+var_AB8]
 * 0000000140B0AF39: btr     r8d, 1Fh
 * 0000000140B0AF3E: mov     r15d, [rbp+0A70h+var_AD0]
 * 0000000140B0AF42: mov     [rax+8], r8d
 * 0000000140B0AF46: jmp     loc_140B0B0DC
 * 0000000140B0AF4B: mov     eax, r10d
 * 0000000140B0AF4E: mov     r12d, r10d
 * 0000000140B0AF51: cmp     eax, r8d
 * 0000000140B0AF54: jnb     loc_140B0B0E2
 * 0000000140B0AF5A: mov     r12, r9
 * 0000000140B0AF5D: mov     r11, [rbp+0A70h+var_AB8]
 * 0000000140B0AF61: test    edx, edx
 * 0000000140B0AF63: jnz     loc_140B0B3A4
 * 0000000140B0AF69: cmp     r13d, r15d
 * 0000000140B0AF6C: jz      loc_140B0B3A4
 * 0000000140B0AF72: mov     rsi, [rbp+0A70h+var_AC8]
 * 0000000140B0AF76: lea     rcx, [rbp+0A70h+var_8F8]
 * 0000000140B0AF7D: mov     [r11+0Ch], r13d
 * 0000000140B0AF81: lea     rdx, [rbp+0A70h+var_760]
 * 0000000140B0AF88: mov     [r11+10h], r15d
 * 0000000140B0AF8C: mov     r9d, r15d
 * 0000000140B0AF8F: mov     eax, [r11+0Ch]
 * 0000000140B0AF93: mov     r8d, r10d
 * 0000000140B0AF96: sub     r9d, eax
 * 0000000140B0AF99: add     rsi, rax
 * 0000000140B0AF9C: mov     r14d, r9d
 * 0000000140B0AF9F: mov     r13d, 1
 * 0000000140B0AFA5: add     r14, rsi
 * 0000000140B0AFA8: mov     r10, [rdx]
 * 0000000140B0AFAB: mov     eax, [rcx]
 * 0000000140B0AFAD: add     rax, r10
 * 0000000140B0AFB0: cmp     rsi, rax
 * 0000000140B0AFB3: jnb     short loc_140B0AFBE
 * 0000000140B0AFB5: cmp     r14, r10
 * 0000000140B0AFB8: ja      loc_140B0B3A1
 * 0000000140B0AFBE: add     r8d, r13d
 * 0000000140B0AFC1: add     rdx, 8
 * 0000000140B0AFC5: add     rcx, 4
 * 0000000140B0AFC9: cmp     r8d, 6
 * 0000000140B0AFCD: jb      short loc_140B0AFA8
 * 0000000140B0AFCF: add     [rbx+828h], r9d
 * 0000000140B0AFD6: mov     r10, rsi
 * 0000000140B0AFD9: mov     r11d, [rbx+814h]
 * 0000000140B0AFE0: mov     rax, rsi
 * 0000000140B0AFE3: mov     r15, [rbx+818h]
 * 0000000140B0AFEA: cmp     rsi, r14
 * 0000000140B0AFED: jnb     short loc_140B0AFFF
 * 0000000140B0AFEF: mov     ecx, 40h ; '@'
 * 0000000140B0AFF4: prefetchnta byte ptr [rax]
 * 0000000140B0AFF7: add     rax, rcx
 * 0000000140B0AFFA: cmp     rax, r14
 * 0000000140B0AFFD: jb      short loc_140B0AFF4
 * 0000000140B0AFFF: mov     r14d, r9d
 * 0000000140B0B002: mov     r8, r15
 * 0000000140B0B005: shr     r14d, 7
 * 0000000140B0B009: test    r14d, r14d
 * 0000000140B0B00C: jz      short loc_140B0B07E
 * 0000000140B0B00E: mov     edi, 0FFFFFFFFh
 * 0000000140B0B013: mov     rbx, 7010008004002001h
 * 0000000140B0B01D: mov     eax, 8
 * 0000000140B0B022: xor     r8, [r10]
 * 0000000140B0B025: mov     ecx, r11d
 * 0000000140B0B028: rol     r8, cl
 * 0000000140B0B02B: xor     r8, [r10+8]
 * 0000000140B0B02F: add     r10, 10h
 * 0000000140B0B033: rol     r8, cl
 * 0000000140B0B036: sub     rax, r13
 * 0000000140B0B039: jnz     short loc_140B0B022
 * 0000000140B0B03B: mov     rcx, r10
 * 0000000140B0B03E: sub     rcx, rsi
 * 0000000140B0B041: xor     rcx, r15
 * 0000000140B0B044: mov     rax, rcx
 * 0000000140B0B047: rol     rax, 11h
 * 0000000140B0B04B: xor     rcx, rax
 * 0000000140B0B04E: mov     rax, rbx
 * 0000000140B0B051: mul     rcx
 * 0000000140B0B054: xor     r11d, edx
 * 0000000140B0B057: mov     [rbp+0A70h+var_4A8], rdx
 * 0000000140B0B05E: xor     r11d, eax
 * 0000000140B0B061: and     r11d, 3Fh
 * 0000000140B0B065: cmovz   r11d, r13d
 * 0000000140B0B069: add     r14d, edi
 * 0000000140B0B06C: jnz     short loc_140B0B01D
 * 0000000140B0B06E: mov     rbx, [rbp+0A70h+var_AB0]
 * 0000000140B0B072: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0B079: mov     r12, [rsp+0B70h+var_B20]
 * 0000000140B0B07E: and     r9d, 7Fh
 * 0000000140B0B082: cmp     r9d, 8
 * 0000000140B0B086: jb      short loc_140B0B0A5
 * 0000000140B0B088: mov     eax, r9d
 * 0000000140B0B08B: shr     rax, 3
 * 0000000140B0B08F: xor     r8, [r10]
 * 0000000140B0B092: mov     ecx, r11d
 * 0000000140B0B095: rol     r8, cl
 * 0000000140B0B098: add     r10, 8
 * 0000000140B0B09C: add     r9d, 0FFFFFFF8h
 * 0000000140B0B0A0: sub     rax, r13
 * 0000000140B0B0A3: jnz     short loc_140B0B08F
 * 0000000140B0B0A5: test    r9d, r9d
 * 0000000140B0B0A8: jz      short loc_140B0B0CA
 * 0000000140B0B0AA: mov     r12d, 0FFFFFFFFh
 * 0000000140B0B0B0: movzx   eax, byte ptr [r10]
 * 0000000140B0B0B4: mov     ecx, r11d
 * 0000000140B0B0B7: xor     r8, rax
 * 0000000140B0B0BA: add     r10, r13
 * 0000000140B0B0BD: rol     r8, cl
 * 0000000140B0B0C0: add     r9d, r12d
 * 0000000140B0B0C3: jnz     short loc_140B0B0B0
 * 0000000140B0B0C5: mov     r12, [rsp+0B70h+var_B20]
 * 0000000140B0B0CA: mov     rax, r8
 * 0000000140B0B0CD: shr     rax, 1Fh
 * 0000000140B0B0D1: xor     r10d, r10d
 * 0000000140B0B0D4: jmp     loc_140B0B389
 * 0000000140B0B0D9: xor     r10d, r10d
 * 0000000140B0B0DC: mov     edx, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0B0E2: cmp     r12d, r15d
 * 0000000140B0B0E5: mov     r12, [rsp+0B70h+var_B20]
 * 0000000140B0B0EA: ja      loc_140B0AF5D
 * 0000000140B0B0F0: mov     r8, [rbp+0A70h+var_AF0]
 * 0000000140B0B0F4: cmp     r12, r8
 * 0000000140B0B0F7: jz      loc_140B0AF5D
 * 0000000140B0B0FD: mov     r9, r12
 * 0000000140B0B100: mov     rax, [rsp+0B70h+var_B18]
 * 0000000140B0B105: mov     r12d, [rax+4]
 * 0000000140B0B109: mov     [rbp+0A70h+var_AE0], r12d
 * 0000000140B0B10D: cmp     r12d, r15d
 * 0000000140B0B110: ja      loc_140B0B378
 * 0000000140B0B116: mov     ecx, 0Ch
 * 0000000140B0B11B: cmp     rax, r8
 * 0000000140B0B11E: jz      loc_140B0B378
 * 0000000140B0B124: test    edx, edx
 * 0000000140B0B126: jz      short loc_140B0B136
 * 0000000140B0B128: mov     r8b, 80h
 * 0000000140B0B12B: jmp     loc_140B0B339
 * 0000000140B0B130: mov     r8, [rbp+0A70h+var_AF0]
 * 0000000140B0B134: jmp     short loc_140B0B100
 * 0000000140B0B136: mov     r14d, [r9+4]
 * 0000000140B0B13A: mov     r13d, [rax]
 * 0000000140B0B13D: cmp     r13d, r14d
 * 0000000140B0B140: jnb     short loc_140B0B1A4
 * 0000000140B0B142: test    dword ptr [rbx+990h], 200000h
 * 0000000140B0B14C: jz      loc_140B0E3A2
 * 0000000140B0B152: cmp     [rbx+8F8h], r10d
 * 0000000140B0B159: jnz     short loc_140B0B1A4
 * 0000000140B0B15B: mov     rcx, [rbp+0A70h+var_AC8]
 * 0000000140B0B15F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0B169: add     rax, rbx
 * 0000000140B0B16C: xor     edx, edx
 * 0000000140B0B16E: mov     [rbx+900h], rax
 * 0000000140B0B175: mov     eax, 1
 * 0000000140B0B17A: mov     [rbx+908h], r10
 * 0000000140B0B181: mov     qword ptr [rbx+910h], 10Fh
 * 0000000140B0B18C: mov     [rbx+918h], rcx
 * 0000000140B0B193: mov     rcx, rbx
 * 0000000140B0B196: mov     [rbx+8F8h], eax
 * 0000000140B0B19C: call    $$ba
 * 0000000140B0B1A1: xor     r10d, r10d
 * 0000000140B0B1A4: mov     rsi, r14
 * 0000000140B0B1A7: lea     rcx, [rbp+0A70h+var_8F8]
 * 0000000140B0B1AE: add     rsi, [rbp+0A70h+var_AC8]
 * 0000000140B0B1B2: lea     rdx, [rbp+0A70h+var_760]
 * 0000000140B0B1B9: mov     r9d, r13d
 * 0000000140B0B1BC: mov     r8d, r10d
 * 0000000140B0B1BF: sub     r9d, r14d
 * 0000000140B0B1C2: mov     r14d, r9d
 * 0000000140B0B1C5: add     r14, rsi
 * 0000000140B0B1C8: mov     r10, [rdx]
 * 0000000140B0B1CB: mov     eax, [rcx]
 * 0000000140B0B1CD: add     rax, r10
 * 0000000140B0B1D0: cmp     rsi, rax
 * 0000000140B0B1D3: jnb     short loc_140B0B1DE
 * 0000000140B0B1D5: cmp     r14, r10
 * 0000000140B0B1D8: ja      loc_140B0B323
 * 0000000140B0B1DE: mov     eax, 4
 * 0000000140B0B1E3: inc     r8d
 * 0000000140B0B1E6: add     rcx, rax
 * 0000000140B0B1E9: add     rdx, 8
 * 0000000140B0B1ED: cmp     r8d, 6
 * 0000000140B0B1F1: jb      short loc_140B0B1C8
 * 0000000140B0B1F3: cmp     r9d, eax
 * 0000000140B0B1F6: jb      loc_140B0B323
 * 0000000140B0B1FC: add     [rbx+828h], r9d
 * 0000000140B0B203: mov     r10, rsi
 * 0000000140B0B206: mov     r11d, [rbx+814h]
 * 0000000140B0B20D: mov     rax, rsi
 * 0000000140B0B210: mov     r15, [rbx+818h]
 * 0000000140B0B217: cmp     rsi, r14
 * 0000000140B0B21A: jnb     short loc_140B0B22C
 * 0000000140B0B21C: mov     ecx, 40h ; '@'
 * 0000000140B0B221: prefetchnta byte ptr [rax]
 * 0000000140B0B224: add     rax, rcx
 * 0000000140B0B227: cmp     rax, r14
 * 0000000140B0B22A: jb      short loc_140B0B221
 * 0000000140B0B22C: mov     r14d, r9d
 * 0000000140B0B22F: mov     r8, r15
 * 0000000140B0B232: shr     r14d, 7
 * 0000000140B0B236: test    r14d, r14d
 * 0000000140B0B239: jz      short loc_140B0B2AF
 * 0000000140B0B23B: mov     edi, 1
 * 0000000140B0B240: mov     ebx, 0FFFFFFFFh
 * 0000000140B0B245: mov     r12, 7010008004002001h
 * 0000000140B0B24F: mov     eax, 8
 * 0000000140B0B254: xor     r8, [r10]
 * 0000000140B0B257: mov     ecx, r11d
 * 0000000140B0B25A: rol     r8, cl
 * 0000000140B0B25D: xor     r8, [r10+8]
 * 0000000140B0B261: add     r10, 10h
 * 0000000140B0B265: rol     r8, cl
 * 0000000140B0B268: sub     rax, rdi
 * 0000000140B0B26B: jnz     short loc_140B0B254
 * 0000000140B0B26D: mov     rcx, r10
 * 0000000140B0B270: sub     rcx, rsi
 * 0000000140B0B273: xor     rcx, r15
 * 0000000140B0B276: mov     rax, rcx
 * 0000000140B0B279: rol     rax, 11h
 * 0000000140B0B27D: xor     rcx, rax
 * 0000000140B0B280: mov     rax, r12
 * 0000000140B0B283: mul     rcx
 * 0000000140B0B286: xor     r11d, edx
 * 0000000140B0B289: mov     [rbp+0A70h+var_4B0], rdx
 * 0000000140B0B290: xor     r11d, eax
 * 0000000140B0B293: and     r11d, 3Fh
 * 0000000140B0B297: cmovz   r11d, edi
 * 0000000140B0B29B: add     r14d, ebx
 * 0000000140B0B29E: jnz     short loc_140B0B24F
 * 0000000140B0B2A0: mov     rbx, [rbp+0A70h+var_AB0]
 * 0000000140B0B2A4: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0B2AB: mov     r12d, [rbp+0A70h+var_AE0]
 * 0000000140B0B2AF: and     r9d, 7Fh
 * 0000000140B0B2B3: mov     esi, 1
 * 0000000140B0B2B8: cmp     r9d, 8
 * 0000000140B0B2BC: jb      short loc_140B0B2DB
 * 0000000140B0B2BE: mov     eax, r9d
 * 0000000140B0B2C1: shr     rax, 3
 * 0000000140B0B2C5: xor     r8, [r10]
 * 0000000140B0B2C8: mov     ecx, r11d
 * 0000000140B0B2CB: rol     r8, cl
 * 0000000140B0B2CE: add     r10, 8
 * 0000000140B0B2D2: add     r9d, 0FFFFFFF8h
 * 0000000140B0B2D6: sub     rax, rsi
 * 0000000140B0B2D9: jnz     short loc_140B0B2C5
 * 0000000140B0B2DB: test    r9d, r9d
 * 0000000140B0B2DE: jz      short loc_140B0B301
 * 0000000140B0B2E0: mov     edi, 0FFFFFFFFh
 * 0000000140B0B2E5: movzx   eax, byte ptr [r10]
 * 0000000140B0B2E9: mov     ecx, r11d
 * 0000000140B0B2EC: xor     r8, rax
 * 0000000140B0B2EF: add     r10, rsi
 * 0000000140B0B2F2: rol     r8, cl
 * 0000000140B0B2F5: add     r9d, edi
 * 0000000140B0B2F8: jnz     short loc_140B0B2E5
 * 0000000140B0B2FA: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0B301: mov     rax, r8
 * 0000000140B0B304: shr     rax, 7
 * 0000000140B0B308: xor     r10d, r10d
 * 0000000140B0B30B: jmp     short loc_140B0B314
 * 0000000140B0B30D: xor     r8b, al
 * 0000000140B0B310: shr     rax, 7
 * 0000000140B0B314: test    rax, rax
 * 0000000140B0B317: jnz     short loc_140B0B30D
 * 0000000140B0B319: mov     r15d, [rbp+0A70h+var_AD0]
 * 0000000140B0B31D: and     r8b, 7Fh
 * 0000000140B0B321: jmp     short loc_140B0B329
 * 0000000140B0B323: xor     r10d, r10d
 * 0000000140B0B326: mov     r8b, 80h
 * 0000000140B0B329: mov     r9, [rsp+0B70h+var_B20]
 * 0000000140B0B32E: mov     ecx, 0Ch
 * 0000000140B0B333: mov     edx, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0B339: mov     rax, [rbp+0A70h+var_AE8]
 * 0000000140B0B33D: add     r9, rcx
 * 0000000140B0B340: inc     [rbp+0A70h+var_AE8]
 * 0000000140B0B344: mov     [rsp+0B70h+var_B20], r9
 * 0000000140B0B349: mov     [rax], r8b
 * 0000000140B0B34C: mov     rax, [rsp+0B70h+var_B18]
 * 0000000140B0B351: mov     r8, [rbp+0A70h+var_AF0]
 * 0000000140B0B355: add     rax, rcx
 * 0000000140B0B358: mov     [rsp+0B70h+var_B18], rax
 * 0000000140B0B35D: cmp     rax, r8
 * 0000000140B0B360: jz      short loc_140B0B36A
 * 0000000140B0B362: mov     r12d, [rax+4]
 * 0000000140B0B366: mov     [rbp+0A70h+var_AE0], r12d
 * 0000000140B0B36A: cmp     r12d, r15d
 * 0000000140B0B36D: jbe     loc_140B0B11B
 * 0000000140B0B373: jmp     loc_140B0AF5A
 * 0000000140B0B378: mov     r12, [rsp+0B70h+var_B20]
 * 0000000140B0B37D: jmp     loc_140B0AF5D
 * 0000000140B0B382: xor     r8d, eax
 * 0000000140B0B385: shr     rax, 1Fh
 * 0000000140B0B389: test    rax, rax
 * 0000000140B0B38C: jnz     short loc_140B0B382
 * 0000000140B0B38E: mov     r11, [rbp+0A70h+var_AB8]
 * 0000000140B0B392: btr     r8d, 1Fh
 * 0000000140B0B397: mov     r15d, [rbp+0A70h+var_AD0]
 * 0000000140B0B39B: mov     [r11+14h], r8d
 * 0000000140B0B39F: jmp     short loc_140B0B3A4
 * 0000000140B0B3A1: xor     r10d, r10d
 * 0000000140B0B3A4: mov     r13, [rbp+0A70h+var_AF0]
 * 0000000140B0B3A8: cmp     r12, r13
 * 0000000140B0B3AB: jz      short loc_140B0B3F4
 * 0000000140B0B3AD: mov     eax, [r12]
 * 0000000140B0B3B1: mov     ecx, [r12+4]
 * 0000000140B0B3B6: cmp     eax, dword ptr [rbp+0A70h+var_AD8]
 * 0000000140B0B3B9: jb      short loc_140B0B3F4
 * 0000000140B0B3BB: cmp     ecx, r15d
 * 0000000140B0B3BE: ja      short loc_140B0B3F4
 * 0000000140B0B3C0: mov     r8, [rsp+0B70h+var_B18]
 * 0000000140B0B3C5: cmp     r8, r13
 * 0000000140B0B3C8: jz      short loc_140B0B3E7
 * 0000000140B0B3CA: mov     rax, [rbp+0A70h+var_AE8]
 * 0000000140B0B3CE: mov     byte ptr [rax], 80h
 * 0000000140B0B3D1: inc     rax
 * 0000000140B0B3D4: mov     [rbp+0A70h+var_AE8], rax
 * 0000000140B0B3D8: mov     eax, 0Ch
 * 0000000140B0B3DD: add     r8, rax
 * 0000000140B0B3E0: mov     [rsp+0B70h+var_B18], r8
 * 0000000140B0B3E5: jmp     short loc_140B0B3EC
 * 0000000140B0B3E7: mov     eax, 0Ch
 * 0000000140B0B3EC: add     r12, rax
 * 0000000140B0B3EF: mov     [rsp+0B70h+var_B20], r12
 * 0000000140B0B3F4: mov     r12, [rsp+0B70h+var_B08]
 * 0000000140B0B3F9: add     r11, 18h
 * 0000000140B0B3FD: add     r12, 28h ; '('
 * 0000000140B0B401: mov     [rbp+0A70h+var_AB8], r11
 * 0000000140B0B405: mov     [rsp+0B70h+var_B08], r12
 * 0000000140B0B40A: cmp     r11, [rsp+0B70h+var_AF8]
 * 0000000140B0B40F: jz      short loc_140B0B420
 * 0000000140B0B411: mov     r14, [rbp+0A70h+var_AC8]
 * 0000000140B0B415: mov     r15d, 1
 * 0000000140B0B41B: jmp     loc_140B0AB95
 * 0000000140B0B420: mov     rsi, [rbp+0A70h+var_A40]
 * 0000000140B0B424: mov     [rbp+0A70h+var_A58], rsi
 * 0000000140B0B428: mov     rbx, rsi
 * 0000000140B0B42B: xor     r13d, r13d
 * 0000000140B0B42E: mov     r12, [rbp+0A70h+var_A98]
 * 0000000140B0B432: mov     rax, [rsi+1F8h]
 * 0000000140B0B439: mov     rcx, r12
 * 0000000140B0B43C: call    KeGuardDispatchICall
 * 0000000140B0B441: mov     ecx, [rax+94h]
 * 0000000140B0B447: cmp     ecx, 14h
 * 0000000140B0B44A: jnb     short loc_140B0B454
 * 0000000140B0B44C: mov     rsi, rbx
 * 0000000140B0B44F: jmp     loc_140B0973A
 * 0000000140B0B454: mov     eax, [rax+90h]
 * 0000000140B0B45A: lea     r15, [rax+rcx]
 * 0000000140B0B45E: add     r15, r12
 * 0000000140B0B461: lea     r14, [rax+r12]
 * 0000000140B0B465: cmp     r14, r15
 * 0000000140B0B468: jz      short loc_140B0B4BA
 * 0000000140B0B46A: cmp     [r14+0Ch], r13d
 * 0000000140B0B46E: jz      short loc_140B0B4BA
 * 0000000140B0B470: mov     eax, [r14+10h]
 * 0000000140B0B474: test    eax, eax
 * 0000000140B0B476: jz      short loc_140B0B4BA
 * 0000000140B0B478: mov     rdx, [rax+r12]
 * 0000000140B0B47C: test    rdx, rdx
 * 0000000140B0B47F: jz      short loc_140B0B4AC
 * 0000000140B0B481: mov     r8d, 8000000Fh
 * 0000000140B0B487: lea     rcx, [rbp+0A70h+var_A58]
 * 0000000140B0B48B: call    sub_140B0E7A8
 * 0000000140B0B490: mov     rsi, [rbp+0A70h+var_A58]
 * 0000000140B0B494: mov     edx, 80000000h
 * 0000000140B0B499: mov     ecx, eax
 * 0000000140B0B49B: mov     rbx, rsi
 * 0000000140B0B49E: add     eax, edx
 * 0000000140B0B4A0: test    edx, eax
 * 0000000140B0B4A2: jnz     short loc_140B0B4AC
 * 0000000140B0B4A4: cmp     ecx, 0C000010Eh
 * 0000000140B0B4AA: jnz     short loc_140B0B4B2
 * 0000000140B0B4AC: add     r14, 14h
 * 0000000140B0B4B0: jmp     short loc_140B0B465
 * 0000000140B0B4B2: xor     r11d, r11d
 * 0000000140B0B4B5: jmp     loc_140B093F5
 * 0000000140B0B4BA: mov     [rsp+0B70h+var_B10], rsi
 * 0000000140B0B4BF: mov     rax, [rbx+568h]
 * 0000000140B0B4C6: lea     rdx, [rbp+0A70h+var_128]
 * 0000000140B0B4CD: mov     rcx, [rax+20h]
 * 0000000140B0B4D1: mov     rax, [rbx+200h]
 * 0000000140B0B4D8: call    KeGuardDispatchICall
 * 0000000140B0B4DD: mov     rcx, [rbp+0A70h+var_120]
 * 0000000140B0B4E4: xor     r11d, r11d
 * 0000000140B0B4E7: test    rcx, rcx
 * 0000000140B0B4EA: jz      loc_140B0BBD4
 * 0000000140B0B4F0: mov     [rbx+978h], rcx
 * 0000000140B0B4F7: mov     rax, [rbx+1F8h]
 * 0000000140B0B4FE: call    KeGuardDispatchICall
 * 0000000140B0B503: xor     r11d, r11d
 * 0000000140B0B506: test    rax, rax
 * 0000000140B0B509: jz      loc_140B0BBD4
 * 0000000140B0B50F: mov     eax, [rax+50h]
 * 0000000140B0B512: mov     [rbx+974h], eax
 * 0000000140B0B518: mov     dword ptr [rbx+958h], 8
 * 0000000140B0B522: mov     r15, [rbx+608h]
 * 0000000140B0B529: test    r15, r15
 * 0000000140B0B52C: jz      loc_140B0B732
 * 0000000140B0B532: cmp     [r15], r11
 * 0000000140B0B535: jz      loc_140B0B732
 * 0000000140B0B53B: mov     r9d, [rbx+838h]
 * 0000000140B0B542: mov     r12d, 20h ; ' '
 * 0000000140B0B548: mov     r13d, [rbx+7E4h]
 * 0000000140B0B54F: cmp     r9d, 7
 * 0000000140B0B553: mov     r8d, [rbx+924h]
 * 0000000140B0B55A: cmovnz  r12d, r11d
 * 0000000140B0B55E: mov     dword ptr [rbp+0A70h+arg_8], r9d
 * 0000000140B0B565: lea     eax, [r13+30h]
 * 0000000140B0B569: cmp     eax, [rbx+0A1Ch]
 * 0000000140B0B56F: jbe     loc_140B0B65D
 * 0000000140B0B575: mov     edx, eax
 * 0000000140B0B577: mov     rcx, rbx
 * 0000000140B0B57A: call    sub_140B12020
 * 0000000140B0B57F: xor     r11d, r11d
 * 0000000140B0B582: mov     r14, rax
 * 0000000140B0B585: test    rax, rax
 * 0000000140B0B588: jnz     short loc_140B0B592
 * 0000000140B0B58A: mov     rbx, rsi
 * 0000000140B0B58D: jmp     loc_140B093F5
 * 0000000140B0B592: mov     ecx, [rbx+990h]
 * 0000000140B0B598: test    cl, 4
 * 0000000140B0B59B: jnz     loc_140B0B64C
 * 0000000140B0B5A1: mov     eax, [rbx+7E4h]
 * 0000000140B0B5A7: and     ecx, 20000000h
 * 0000000140B0B5AD: mov     r8, [rbx+7C8h]
 * 0000000140B0B5B4: neg     ecx
 * 0000000140B0B5B6: mov     r9d, 1
 * 0000000140B0B5BC: sbb     ecx, ecx
 * 0000000140B0B5BE: and     ecx, [rbx+924h]
 * 0000000140B0B5C4: cmp     eax, 8
 * 0000000140B0B5C7: jb      short loc_140B0B5DE
 * 0000000140B0B5C9: mov     edx, eax
 * 0000000140B0B5CB: shr     rdx, 3
 * 0000000140B0B5CF: mov     [rbx], r11
 * 0000000140B0B5D2: add     eax, 0FFFFFFF8h
 * 0000000140B0B5D5: add     rbx, 8
 * 0000000140B0B5D9: sub     rdx, r9
 * 0000000140B0B5DC: jnz     short loc_140B0B5CF
 * 0000000140B0B5DE: test    eax, eax
 * 0000000140B0B5E0: jz      short loc_140B0B5F1
 * 0000000140B0B5E2: mov     edx, 0FFFFFFFFh
 * 0000000140B0B5E7: mov     [rbx], r11b
 * 0000000140B0B5EA: add     rbx, r9
 * 0000000140B0B5ED: add     eax, edx
 * 0000000140B0B5EF: jnz     short loc_140B0B5E7
 * 0000000140B0B5F1: mov     ebx, [r14+924h]
 * 0000000140B0B5F8: mov     [r14+924h], ecx
 * 0000000140B0B5FF: cmp     ecx, 3
 * 0000000140B0B602: jz      short loc_140B0B633
 * 0000000140B0B604: test    dword ptr [r14+990h], 10000000h
 * 0000000140B0B60F: jnz     short loc_140B0B62A
 * 0000000140B0B611: test    ecx, ecx
 * 0000000140B0B613: jz      short loc_140B0B62A
 * 0000000140B0B615: mov     rax, [r14+228h]
 * 0000000140B0B61C: lea     rcx, [r8-8]
 * 0000000140B0B620: mov     rdx, [rcx]
 * 0000000140B0B623: call    KeGuardDispatchICall
 * 0000000140B0B628: jmp     short loc_140B0B642
 * 0000000140B0B62A: mov     rax, [r14+0F8h]
 * 0000000140B0B631: jmp     short loc_140B0B63A
 * 0000000140B0B633: mov     rax, [r14+368h]
 * 0000000140B0B63A: mov     rcx, r8
 * 0000000140B0B63D: call    KeGuardDispatchICall
 * 0000000140B0B642: mov     [r14+924h], ebx
 * 0000000140B0B649: xor     r11d, r11d
 * 0000000140B0B64C: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 0000000140B0B654: mov     r9d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0B65B: jmp     short loc_140B0B666
 * 0000000140B0B65D: mov     r14, rbx
 * 0000000140B0B660: mov     [rbx+7E4h], eax
 * 0000000140B0B666: mov     r8d, 1
 * 0000000140B0B66C: lea     rbx, [r14+r13]
 * 0000000140B0B670: add     [r14+80Ch], r8d
 * 0000000140B0B677: mov     rax, rbx
 * 0000000140B0B67A: lea     ecx, [r8+2Fh]
 * 0000000140B0B67E: lea     edx, [rcx-2Ah]
 * 0000000140B0B681: mov     [rax], r11
 * 0000000140B0B684: add     ecx, 0FFFFFFF8h
 * 0000000140B0B687: add     rax, 8
 * 0000000140B0B68B: sub     rdx, r8
 * 0000000140B0B68E: jnz     short loc_140B0B681
 * 0000000140B0B690: test    ecx, ecx
 * 0000000140B0B692: jz      short loc_140B0B6A3
 * 0000000140B0B694: mov     edx, 0FFFFFFFFh
 * 0000000140B0B699: mov     [rax], r11b
 * 0000000140B0B69C: add     rax, r8
 * 0000000140B0B69F: add     ecx, edx
 * 0000000140B0B6A1: jnz     short loc_140B0B699
 * 0000000140B0B6A3: mov     [rbx], r12d
 * 0000000140B0B6A6: mov     [rbx+8], r15
 * 0000000140B0B6AA: cmp     r9d, 7
 * 0000000140B0B6AE: jnz     short loc_140B0B6C8
 * 0000000140B0B6B0: lea     r9, [rbx+18h]
 * 0000000140B0B6B4: mov     r8d, 8
 * 0000000140B0B6BA: mov     rdx, r15
 * 0000000140B0B6BD: mov     rcx, r14
 * 0000000140B0B6C0: call    sub_1403F152C
 * 0000000140B0B6C5: xor     r11d, r11d
 * 0000000140B0B6C8: mov     dword ptr [rbx+10h], 8
 * 0000000140B0B6CF: lea     r8, [r15+8]
 * 0000000140B0B6D3: add     dword ptr [r14+828h], 8
 * 0000000140B0B6DB: mov     rdx, r15
 * 0000000140B0B6DE: mov     ecx, [r14+814h]
 * 0000000140B0B6E5: mov     rax, [r14+818h]
 * 0000000140B0B6EC: cmp     r15, r8
 * 0000000140B0B6EF: jnb     short loc_140B0B702
 * 0000000140B0B6F1: mov     r9d, 40h ; '@'
 * 0000000140B0B6F7: prefetchnta byte ptr [rdx]
 * 0000000140B0B6FA: add     rdx, r9
 * 0000000140B0B6FD: cmp     rdx, r8
 * 0000000140B0B700: jb      short loc_140B0B6F7
 * 0000000140B0B702: xor     rax, [r15]
 * 0000000140B0B705: rol     rax, cl
 * 0000000140B0B708: mov     rcx, rax
 * 0000000140B0B70B: jmp     short loc_140B0B70F
 * 0000000140B0B70D: xor     eax, ecx
 * 0000000140B0B70F: shr     rcx, 1Fh
 * 0000000140B0B713: test    rcx, rcx
 * 0000000140B0B716: jnz     short loc_140B0B70D
 * 0000000140B0B718: btr     eax, 1Fh
 * 0000000140B0B71C: mov     [rsp+0B70h+var_B10], r14
 * 0000000140B0B721: mov     [rbx+14h], eax
 * 0000000140B0B724: mov     rsi, r14
 * 0000000140B0B727: add     dword ptr [r14+828h], 8
 * 0000000140B0B72F: mov     rbx, r14
 * 0000000140B0B732: mov     dword ptr [rbx+958h], 9
 * 0000000140B0B73C: mov     r15, [rbx+608h]
 * 0000000140B0B743: test    r15, r15
 * 0000000140B0B746: jz      loc_140B0BBC5
 * 0000000140B0B74C: mov     r15, [r15]
 * 0000000140B0B74F: test    r15, r15
 * 0000000140B0B752: jz      loc_140B0BBC5
 * 0000000140B0B758: lock or [rsp+0B70h+var_B70], r11d
 * 0000000140B0B75D: mov     r12d, [r15+7E4h]
 * 0000000140B0B764: mov     r9, r15
 * 0000000140B0B767: mov     r10d, [r15+814h]
 * 0000000140B0B76E: mov     rax, r15
 * 0000000140B0B771: mov     r14, [r15+818h]
 * 0000000140B0B778: mov     dword ptr [rbp+0A70h+arg_8], r12d
 * 0000000140B0B77F: lea     rcx, [r15+r12]
 * 0000000140B0B783: cmp     r15, rcx
 * 0000000140B0B786: jnb     short loc_140B0B798
 * 0000000140B0B788: mov     edx, 40h ; '@'
 * 0000000140B0B78D: prefetchnta byte ptr [rax]
 * 0000000140B0B790: add     rax, rdx
 * 0000000140B0B793: cmp     rax, rcx
 * 0000000140B0B796: jb      short loc_140B0B78D
 * 0000000140B0B798: mov     r11d, r12d
 * 0000000140B0B79B: mov     r8, r14
 * 0000000140B0B79E: shr     r11d, 7
 * 0000000140B0B7A2: mov     r13d, 1
 * 0000000140B0B7A8: test    r11d, r11d
 * 0000000140B0B7AB: jz      short loc_140B0B821
 * 0000000140B0B7AD: mov     rsi, 7010008004002001h
 * 0000000140B0B7B7: mov     r12d, 0FFFFFFFFh
 * 0000000140B0B7BD: mov     eax, 8
 * 0000000140B0B7C2: xor     r8, [r9]
 * 0000000140B0B7C5: mov     ecx, r10d
 * 0000000140B0B7C8: rol     r8, cl
 * 0000000140B0B7CB: xor     r8, [r9+8]
 * 0000000140B0B7CF: add     r9, 10h
 * 0000000140B0B7D3: rol     r8, cl
 * 0000000140B0B7D6: sub     rax, r13
 * 0000000140B0B7D9: jnz     short loc_140B0B7C2
 * 0000000140B0B7DB: mov     rcx, r9
 * 0000000140B0B7DE: sub     rcx, r15
 * 0000000140B0B7E1: xor     rcx, r14
 * 0000000140B0B7E4: mov     rax, rcx
 * 0000000140B0B7E7: rol     rax, 11h
 * 0000000140B0B7EB: xor     rcx, rax
 * 0000000140B0B7EE: mov     rax, rsi
 * 0000000140B0B7F1: mul     rcx
 * 0000000140B0B7F4: xor     r10d, edx
 * 0000000140B0B7F7: mov     [rbp+0A70h+var_4A0], rdx
 * 0000000140B0B7FE: xor     r10d, eax
 * 0000000140B0B801: and     r10d, 3Fh
 * 0000000140B0B805: cmovz   r10d, r13d
 * 0000000140B0B809: add     r11d, r12d
 * 0000000140B0B80C: jnz     short loc_140B0B7BD
 * 0000000140B0B80E: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B0B813: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0B81A: mov     r12d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0B821: mov     edx, r12d
 * 0000000140B0B824: and     edx, 7Fh
 * 0000000140B0B827: cmp     edx, 8
 * 0000000140B0B82A: jb      short loc_140B0B847
 * 0000000140B0B82C: mov     eax, edx
 * 0000000140B0B82E: shr     rax, 3
 * 0000000140B0B832: xor     r8, [r9]
 * 0000000140B0B835: mov     ecx, r10d
 * 0000000140B0B838: rol     r8, cl
 * 0000000140B0B83B: add     r9, 8
 * 0000000140B0B83F: add     edx, 0FFFFFFF8h
 * 0000000140B0B842: sub     rax, r13
 * 0000000140B0B845: jnz     short loc_140B0B832
 * 0000000140B0B847: xor     r11d, r11d
 * 0000000140B0B84A: test    edx, edx
 * 0000000140B0B84C: jz      short loc_140B0B86E
 * 0000000140B0B84E: mov     edi, 0FFFFFFFFh
 * 0000000140B0B853: movzx   eax, byte ptr [r9]
 * 0000000140B0B857: mov     ecx, r10d
 * 0000000140B0B85A: xor     r8, rax
 * 0000000140B0B85D: add     r9, r13
 * 0000000140B0B860: rol     r8, cl
 * 0000000140B0B863: add     edx, edi
 * 0000000140B0B865: jnz     short loc_140B0B853
 * 0000000140B0B867: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0B86E: mov     rax, [rbx+610h]
 * 0000000140B0B875: cmp     r8, [rax]
 * 0000000140B0B878: jz      loc_140B0B907
 * 0000000140B0B87E: mov     rax, [rbx+588h]
 * 0000000140B0B885: mov     [rax], r15
 * 0000000140B0B888: mov     [rax+10h], r12d
 * 0000000140B0B88C: mov     rax, [rbx+610h]
 * 0000000140B0B893: mov     rdx, [rax]
 * 0000000140B0B896: cmp     [rbx+8F8h], r11d
 * 0000000140B0B89D: jnz     loc_140B093FB
 * 0000000140B0B8A3: mov     rax, [rbx+588h]
 * 0000000140B0B8AA: mov     rcx, r8
 * 0000000140B0B8AD: xor     rcx, rdx
 * 0000000140B0B8B0: mov     [rax+18h], rcx
 * 0000000140B0B8B4: cmp     [rbx+8F8h], r11d
 * 0000000140B0B8BB: jnz     loc_140B093FB
 * 0000000140B0B8C1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0B8CB: add     rax, rbx
 * 0000000140B0B8CE: mov     [rbx+900h], rax
 * 0000000140B0B8D5: mov     [rbx+908h], r11
 * 0000000140B0B8DC: mov     qword ptr [rbx+910h], 111h
 * 0000000140B0B8E7: mov     [rbx+918h], r8
 * 0000000140B0B8EE: xor     edx, edx
 * 0000000140B0B8F0: mov     [rbx+8F8h], r13d
 * 0000000140B0B8F7: mov     rcx, rbx
 * 0000000140B0B8FA: call    $$ba
 * 0000000140B0B8FF: xor     r11d, r11d
 * 0000000140B0B902: jmp     loc_140B093FB
 * 0000000140B0B907: mov     r9d, [rbx+838h]
 * 0000000140B0B90E: mov     r13d, 20h ; ' '
 * 0000000140B0B914: mov     eax, [rbx+7E4h]
 * 0000000140B0B91A: cmp     r9d, 7
 * 0000000140B0B91E: mov     r8d, [rbx+924h]
 * 0000000140B0B925: cmovnz  r13d, r11d
 * 0000000140B0B929: mov     [rbp+0A70h+var_AD0], eax
 * 0000000140B0B92C: add     eax, 30h ; '0'
 * 0000000140B0B92F: mov     [rbp+0A70h+var_AE0], r9d
 * 0000000140B0B933: cmp     eax, [rbx+0A1Ch]
 * 0000000140B0B939: jbe     loc_140B0BA1E
 * 0000000140B0B93F: mov     edx, eax
 * 0000000140B0B941: mov     rcx, rbx
 * 0000000140B0B944: call    sub_140B12020
 * 0000000140B0B949: xor     r11d, r11d
 * 0000000140B0B94C: mov     r14, rax
 * 0000000140B0B94F: test    rax, rax
 * 0000000140B0B952: jz      loc_140B0B58A
 * 0000000140B0B958: mov     ecx, [rbx+990h]
 * 0000000140B0B95E: test    cl, 4
 * 0000000140B0B961: jnz     loc_140B0BA10
 * 0000000140B0B967: mov     eax, [rbx+7E4h]
 * 0000000140B0B96D: lea     r9d, [r11+1]
 * 0000000140B0B971: mov     r8, [rbx+7C8h]
 * 0000000140B0B978: and     ecx, 20000000h
 * 0000000140B0B97E: neg     ecx
 * 0000000140B0B980: sbb     ecx, ecx
 * 0000000140B0B982: and     ecx, [rbx+924h]
 * 0000000140B0B988: cmp     eax, 8
 * 0000000140B0B98B: jb      short loc_140B0B9A2
 * 0000000140B0B98D: mov     edx, eax
 * 0000000140B0B98F: shr     rdx, 3
 * 0000000140B0B993: mov     [rbx], r11
 * 0000000140B0B996: add     eax, 0FFFFFFF8h
 * 0000000140B0B999: add     rbx, 8
 * 0000000140B0B99D: sub     rdx, r9
 * 0000000140B0B9A0: jnz     short loc_140B0B993
 * 0000000140B0B9A2: test    eax, eax
 * 0000000140B0B9A4: jz      short loc_140B0B9B5
 * 0000000140B0B9A6: mov     edx, 0FFFFFFFFh
 * 0000000140B0B9AB: mov     [rbx], r11b
 * 0000000140B0B9AE: add     rbx, r9
 * 0000000140B0B9B1: add     eax, edx
 * 0000000140B0B9B3: jnz     short loc_140B0B9AB
 * 0000000140B0B9B5: mov     ebx, [r14+924h]
 * 0000000140B0B9BC: mov     [r14+924h], ecx
 * 0000000140B0B9C3: cmp     ecx, 3
 * 0000000140B0B9C6: jz      short loc_140B0B9F7
 * 0000000140B0B9C8: test    dword ptr [r14+990h], 10000000h
 * 0000000140B0B9D3: jnz     short loc_140B0B9EE
 * 0000000140B0B9D5: test    ecx, ecx
 * 0000000140B0B9D7: jz      short loc_140B0B9EE
 * 0000000140B0B9D9: mov     rax, [r14+228h]
 * 0000000140B0B9E0: lea     rcx, [r8-8]
 * 0000000140B0B9E4: mov     rdx, [rcx]
 * 0000000140B0B9E7: call    KeGuardDispatchICall
 * 0000000140B0B9EC: jmp     short loc_140B0BA06
 * 0000000140B0B9EE: mov     rax, [r14+0F8h]
 * 0000000140B0B9F5: jmp     short loc_140B0B9FE
 * 0000000140B0B9F7: mov     rax, [r14+368h]
 * 0000000140B0B9FE: mov     rcx, r8
 * 0000000140B0BA01: call    KeGuardDispatchICall
 * 0000000140B0BA06: mov     [r14+924h], ebx
 * 0000000140B0BA0D: xor     r11d, r11d
 * 0000000140B0BA10: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 0000000140B0BA18: mov     r9d, [rbp+0A70h+var_AE0]
 * 0000000140B0BA1C: jmp     short loc_140B0BA27
 * 0000000140B0BA1E: mov     r14, rbx
 * 0000000140B0BA21: mov     [rbx+7E4h], eax
 * 0000000140B0BA27: mov     ebx, [rbp+0A70h+var_AD0]
 * 0000000140B0BA2A: mov     r8d, 1
 * 0000000140B0BA30: add     [r14+80Ch], r8d
 * 0000000140B0BA37: add     rbx, r14
 * 0000000140B0BA3A: mov     [rsp+0B70h+var_AF8], rbx
 * 0000000140B0BA3F: mov     rax, rbx
 * 0000000140B0BA42: lea     ecx, [r8+2Fh]
 * 0000000140B0BA46: lea     edx, [rcx-2Ah]
 * 0000000140B0BA49: mov     [rax], r11
 * 0000000140B0BA4C: add     ecx, 0FFFFFFF8h
 * 0000000140B0BA4F: add     rax, 8
 * 0000000140B0BA53: sub     rdx, r8
 * 0000000140B0BA56: jnz     short loc_140B0BA49
 * 0000000140B0BA58: test    ecx, ecx
 * 0000000140B0BA5A: jz      short loc_140B0BA6B
 * 0000000140B0BA5C: mov     edx, 0FFFFFFFFh
 * 0000000140B0BA61: mov     [rax], r11b
 * 0000000140B0BA64: add     rax, r8
 * 0000000140B0BA67: add     ecx, edx
 * 0000000140B0BA69: jnz     short loc_140B0BA61
 * 0000000140B0BA6B: mov     [rbx], r13d
 * 0000000140B0BA6E: mov     [rbx+8], r15
 * 0000000140B0BA72: cmp     r9d, 7
 * 0000000140B0BA76: jnz     short loc_140B0BA8F
 * 0000000140B0BA78: test    r12d, r12d
 * 0000000140B0BA7B: jz      short loc_140B0BA8F
 * 0000000140B0BA7D: lea     r9, [rbx+18h]
 * 0000000140B0BA81: mov     r8d, r12d
 * 0000000140B0BA84: mov     rdx, r15
 * 0000000140B0BA87: mov     rcx, r14
 * 0000000140B0BA8A: call    sub_1403F152C
 * 0000000140B0BA8F: mov     [rbx+10h], r12d
 * 0000000140B0BA93: mov     r9, r15
 * 0000000140B0BA96: add     [r14+828h], r12d
 * 0000000140B0BA9D: mov     rax, r15
 * 0000000140B0BAA0: mov     r10d, [r14+814h]
 * 0000000140B0BAA7: mov     rsi, [r14+818h]
 * 0000000140B0BAAE: mov     ecx, r12d
 * 0000000140B0BAB1: add     rcx, r15
 * 0000000140B0BAB4: cmp     r15, rcx
 * 0000000140B0BAB7: jnb     short loc_140B0BAC9
 * 0000000140B0BAB9: mov     edx, 40h ; '@'
 * 0000000140B0BABE: prefetchnta byte ptr [rax]
 * 0000000140B0BAC1: add     rax, rdx
 * 0000000140B0BAC4: cmp     rax, rcx
 * 0000000140B0BAC7: jb      short loc_140B0BABE
 * 0000000140B0BAC9: mov     r11d, r12d
 * 0000000140B0BACC: mov     r8, rsi
 * 0000000140B0BACF: shr     r11d, 7
 * 0000000140B0BAD3: mov     r13d, 1
 * 0000000140B0BAD9: test    r11d, r11d
 * 0000000140B0BADC: jz      short loc_140B0BB51
 * 0000000140B0BADE: mov     ebx, 0FFFFFFFFh
 * 0000000140B0BAE3: mov     r12, 7010008004002001h
 * 0000000140B0BAED: mov     eax, 8
 * 0000000140B0BAF2: xor     r8, [r9]
 * 0000000140B0BAF5: mov     ecx, r10d
 * 0000000140B0BAF8: rol     r8, cl
 * 0000000140B0BAFB: xor     r8, [r9+8]
 * 0000000140B0BAFF: add     r9, 10h
 * 0000000140B0BB03: rol     r8, cl
 * 0000000140B0BB06: sub     rax, r13
 * 0000000140B0BB09: jnz     short loc_140B0BAF2
 * 0000000140B0BB0B: mov     rcx, r9
 * 0000000140B0BB0E: sub     rcx, r15
 * 0000000140B0BB11: xor     rcx, rsi
 * 0000000140B0BB14: mov     rax, rcx
 * 0000000140B0BB17: rol     rax, 11h
 * 0000000140B0BB1B: xor     rcx, rax
 * 0000000140B0BB1E: mov     rax, r12
 * 0000000140B0BB21: mul     rcx
 * 0000000140B0BB24: xor     r10d, edx
 * 0000000140B0BB27: mov     [rbp+0A70h+var_498], rdx
 * 0000000140B0BB2E: xor     r10d, eax
 * 0000000140B0BB31: and     r10d, 3Fh
 * 0000000140B0BB35: cmovz   r10d, r13d
 * 0000000140B0BB39: add     r11d, ebx
 * 0000000140B0BB3C: jnz     short loc_140B0BAED
 * 0000000140B0BB3E: mov     r12d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0BB45: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0BB4C: mov     rbx, [rsp+0B70h+var_AF8]
 * 0000000140B0BB51: mov     edx, r12d
 * 0000000140B0BB54: and     edx, 7Fh
 * 0000000140B0BB57: cmp     edx, 8
 * 0000000140B0BB5A: jb      short loc_140B0BB77
 * 0000000140B0BB5C: mov     eax, edx
 * 0000000140B0BB5E: shr     rax, 3
 * 0000000140B0BB62: xor     r8, [r9]
 * 0000000140B0BB65: mov     ecx, r10d
 * 0000000140B0BB68: rol     r8, cl
 * 0000000140B0BB6B: add     r9, 8
 * 0000000140B0BB6F: add     edx, 0FFFFFFF8h
 * 0000000140B0BB72: sub     rax, r13
 * 0000000140B0BB75: jnz     short loc_140B0BB62
 * 0000000140B0BB77: xor     r11d, r11d
 * 0000000140B0BB7A: test    edx, edx
 * 0000000140B0BB7C: jz      short loc_140B0BB9E
 * 0000000140B0BB7E: mov     edi, 0FFFFFFFFh
 * 0000000140B0BB83: movzx   eax, byte ptr [r9]
 * 0000000140B0BB87: mov     ecx, r10d
 * 0000000140B0BB8A: xor     r8, rax
 * 0000000140B0BB8D: add     r9, r13
 * 0000000140B0BB90: rol     r8, cl
 * 0000000140B0BB93: add     edx, edi
 * 0000000140B0BB95: jnz     short loc_140B0BB83
 * 0000000140B0BB97: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0BB9E: mov     rax, r8
 * 0000000140B0BBA1: jmp     short loc_140B0BBA6
 * 0000000140B0BBA3: xor     r8d, eax
 * 0000000140B0BBA6: shr     rax, 1Fh
 * 0000000140B0BBAA: test    rax, rax
 * 0000000140B0BBAD: jnz     short loc_140B0BBA3
 * 0000000140B0BBAF: btr     r8d, 1Fh
 * 0000000140B0BBB4: mov     rsi, r14
 * 0000000140B0BBB7: mov     [rbx+14h], r8d
 * 0000000140B0BBBB: mov     rbx, r14
 * 0000000140B0BBBE: add     [r14+828h], r12d
 * 0000000140B0BBC5: mov     dword ptr [rbx+958h], 0Bh
 * 0000000140B0BBCF: jmp     loc_140B093F5
 * 0000000140B0BBD4: cmp     [rbx+8F8h], r11d
 * 0000000140B0BBDB: jnz     loc_140B093F5
 * 0000000140B0BBE1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0BBEB: mov     r13d, 1
 * 0000000140B0BBF1: add     rax, rbx
 * 0000000140B0BBF4: mov     [rbx+900h], rax
 * 0000000140B0BBFB: mov     [rbx+908h], r11
 * 0000000140B0BC02: mov     qword ptr [rbx+910h], 105h
 * 0000000140B0BC0D: mov     qword ptr [rbx+918h], 0FFFFFFFFC000007Bh
 * 0000000140B0BC18: jmp     loc_140B0B8EE
 * 0000000140B0BC1D: mov     r15d, 0FFFFFFFFh
 * 0000000140B0BC23: mov     [rbx+970h], r15d
 * 0000000140B0BC2A: jmp     loc_140B0BE64
 * 0000000140B0BC2F: test    r14, r14
 * 0000000140B0BC32: jz      loc_140B0BE64
 * 0000000140B0BC38: mov     rax, [rbx+288h]
 * 0000000140B0BC3F: mov     rcx, r14
 * 0000000140B0BC42: jmp     loc_140B0BE5F
 * 0000000140B0BC47: mov     eax, [rsi+830h]
 * 0000000140B0BC4D: test    r13b, al
 * 0000000140B0BC50: jz      loc_140B0BE64
 * 0000000140B0BC56: mov     ecx, [rsi+970h]
 * 0000000140B0BC5C: mov     r15d, 0FFFFFFFFh
 * 0000000140B0BC62: cmp     ecx, r15d
 * 0000000140B0BC65: jz      short loc_140B0BC80
 * 0000000140B0BC67: mov     rax, [rsi+278h]
 * 0000000140B0BC6E: call    KeGuardDispatchICall
 * 0000000140B0BC73: xor     r14d, r14d
 * 0000000140B0BC76: mov     rbx, rax
 * 0000000140B0BC79: test    rax, rax
 * 0000000140B0BC7C: jnz     short loc_140B0BC9D
 * 0000000140B0BC7E: jmp     short loc_140B0BC83
 * 0000000140B0BC80: xor     r14d, r14d
 * 0000000140B0BC83: mov     rax, [rsi+280h]
 * 0000000140B0BC8A: xor     ecx, ecx
 * 0000000140B0BC8C: call    KeGuardDispatchICall
 * 0000000140B0BC91: mov     rbx, rax
 * 0000000140B0BC94: test    rax, rax
 * 0000000140B0BC97: jz      loc_140B0BE64
 * 0000000140B0BC9D: mov     rax, [rsi+290h]
 * 0000000140B0BCA4: lea     rdx, [rbp+0A70h+var_680]
 * 0000000140B0BCAB: mov     rcx, rbx
 * 0000000140B0BCAE: call    KeGuardDispatchICall
 * 0000000140B0BCB3: test    eax, eax
 * 0000000140B0BCB5: js      loc_140B0BE55
 * 0000000140B0BCBB: mov     [rsi+980h], rbx
 * 0000000140B0BCC2: mov     rax, [rsi+2B8h]
 * 0000000140B0BCC9: call    KeGuardDispatchICall
 * 0000000140B0BCCE: mov     rbx, rax
 * 0000000140B0BCD1: mov     rax, [rsi+2D8h]
 * 0000000140B0BCD8: mov     rcx, rbx
 * 0000000140B0BCDB: call    KeGuardDispatchICall
 * 0000000140B0BCE0: mov     rdx, rax
 * 0000000140B0BCE3: test    rax, rax
 * 0000000140B0BCE6: jnz     short loc_140B0BCED
 * 0000000140B0BCE8: lea     ecx, [rax+4]
 * 0000000140B0BCEB: jmp     short loc_140B0BCFF
 * 0000000140B0BCED: mov     rax, [rsi+2E8h]
 * 0000000140B0BCF4: mov     rcx, rbx
 * 0000000140B0BCF7: call    KeGuardDispatchICall
 * 0000000140B0BCFC: mov     ecx, r14d
 * 0000000140B0BCFF: mov     eax, [rsi+994h]
 * 0000000140B0BD05: and     eax, 0FFFFFFFBh
 * 0000000140B0BD08: or      eax, ecx
 * 0000000140B0BD0A: mov     [rsi+994h], eax
 * 0000000140B0BD10: add     dword ptr [rsi+828h], 10000h
 * 0000000140B0BD1A: mov     rax, [rsi+960h]
 * 0000000140B0BD21: mov     rcx, [rax]
 * 0000000140B0BD24: cmp     rcx, [rsi+968h]
 * 0000000140B0BD2B: jnz     loc_140B0BDC7
 * 0000000140B0BD31: mov     rax, [rsi+568h]
 * 0000000140B0BD38: cmp     [rax+30h], r14d
 * 0000000140B0BD3C: jz      loc_140B0BDC7
 * 0000000140B0BD42: lock or [rsp+0B70h+var_B70], r14d
 * 0000000140B0BD47: mov     rax, [rsi+960h]
 * 0000000140B0BD4E: mov     rcx, [rax]
 * 0000000140B0BD51: cmp     rcx, [rsi+968h]
 * 0000000140B0BD58: jnz     short loc_140B0BDC7
 * 0000000140B0BD5A: mov     rax, [rsi+960h]
 * 0000000140B0BD61: mov     rdx, [rax]
 * 0000000140B0BD64: mov     rcx, [rsi+968h]
 * 0000000140B0BD6B: cmp     [rsi+8F8h], r14d
 * 0000000140B0BD72: jnz     short loc_140B0BDC7
 * 0000000140B0BD74: mov     rax, [rsi+588h]
 * 0000000140B0BD7B: xor     rcx, rdx
 * 0000000140B0BD7E: mov     [rax+18h], rcx
 * 0000000140B0BD82: mov     rcx, [rsi+968h]
 * 0000000140B0BD89: cmp     [rsi+8F8h], r14d
 * 0000000140B0BD90: jnz     short loc_140B0BDC7
 * 0000000140B0BD92: lea     rax, [rsi+r12]
 * 0000000140B0BD96: xor     edx, edx
 * 0000000140B0BD98: mov     [rsi+900h], rax
 * 0000000140B0BD9F: mov     [rsi+908h], r14
 * 0000000140B0BDA6: mov     qword ptr [rsi+910h], 103h
 * 0000000140B0BDB1: mov     [rsi+918h], rcx
 * 0000000140B0BDB8: mov     rcx, rsi
 * 0000000140B0BDBB: mov     [rsi+8F8h], r13d
 * 0000000140B0BDC2: call    $$ba
 * 0000000140B0BDC7: xor     r11d, r11d
 * 0000000140B0BDCA: bt      dword ptr [rsi+990h], 0Fh
 * 0000000140B0BDD2: jb      short loc_140B0BDE1
 * 0000000140B0BDD4: cmp     [rsi+8F8h], r11d
 * 0000000140B0BDDB: jnz     loc_140B0BE64
 * 0000000140B0BDE1: mov     rbx, [rsi+980h]
 * 0000000140B0BDE8: lea     rdx, [rbp+0A70h+var_680]
 * 0000000140B0BDEF: mov     [rsi+980h], r11
 * 0000000140B0BDF6: mov     rcx, rbx
 * 0000000140B0BDF9: mov     rax, [rsi+298h]
 * 0000000140B0BE00: call    KeGuardDispatchICall
 * 0000000140B0BE05: mov     eax, [rsi+990h]
 * 0000000140B0BE0B: test    r13b, al
 * 0000000140B0BE0E: jz      short loc_140B0BE50
 * 0000000140B0BE10: and     eax, 0FFFFFFFEh
 * 0000000140B0BE13: mov     rcx, rbx
 * 0000000140B0BE16: mov     [rsi+990h], eax
 * 0000000140B0BE1C: mov     rax, [rsi+280h]
 * 0000000140B0BE23: call    KeGuardDispatchICall
 * 0000000140B0BE28: mov     rbx, rax
 * 0000000140B0BE2B: test    rax, rax
 * 0000000140B0BE2E: jz      short loc_140B0BE47
 * 0000000140B0BE30: mov     rax, [rsi+2A0h]
 * 0000000140B0BE37: mov     rcx, rbx
 * 0000000140B0BE3A: call    KeGuardDispatchICall
 * 0000000140B0BE3F: mov     [rsi+970h], eax
 * 0000000140B0BE45: jmp     short loc_140B0BE55
 * 0000000140B0BE47: mov     [rsi+970h], r15d
 * 0000000140B0BE4E: jmp     short loc_140B0BE64
 * 0000000140B0BE50: test    rbx, rbx
 * 0000000140B0BE53: jz      short loc_140B0BE64
 * 0000000140B0BE55: mov     rcx, rbx
 * 0000000140B0BE58: mov     rax, [rsi+288h]
 * 0000000140B0BE5F: call    KeGuardDispatchICall
 * 0000000140B0BE64: test    dword ptr [rsi+990h], 2000000h
 * 0000000140B0BE6E: jz      loc_140B0BEF9
 * 0000000140B0BE74: mov     rbx, [rsi+998h]
 * 0000000140B0BE7B: mov     rax, [rsi+390h]
 * 0000000140B0BE82: mov     rcx, rbx
 * 0000000140B0BE85: call    KeGuardDispatchICall
 * 0000000140B0BE8A: xor     r13d, r13d
 * 0000000140B0BE8D: test    eax, eax
 * 0000000140B0BE8F: jz      short loc_140B0BEDB
 * 0000000140B0BE91: cmp     [rsi+8F8h], r13d
 * 0000000140B0BE98: jnz     short loc_140B0BEDB
 * 0000000140B0BE9A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0BEA4: xor     edx, edx
 * 0000000140B0BEA6: add     rax, rsi
 * 0000000140B0BEA9: mov     rcx, rsi
 * 0000000140B0BEAC: mov     [rsi+900h], rax
 * 0000000140B0BEB3: lea     eax, [r13+1]
 * 0000000140B0BEB7: mov     [rsi+908h], r13
 * 0000000140B0BEBE: mov     qword ptr [rsi+910h], 110h
 * 0000000140B0BEC9: mov     [rsi+918h], r13
 * 0000000140B0BED0: mov     [rsi+8F8h], eax
 * 0000000140B0BED6: call    $$ba
 * 0000000140B0BEDB: mov     rax, [rsi+388h]
 * 0000000140B0BEE2: lea     rdx, sub_140B14360
 * 0000000140B0BEE9: xor     r9d, r9d
 * 0000000140B0BEEC: mov     r8, rsi
 * 0000000140B0BEEF: mov     rcx, rbx
 * 0000000140B0BEF2: call    KeGuardDispatchICall
 * 0000000140B0BEF7: jmp     short loc_140B0BEFC
 * 0000000140B0BEF9: xor     r13d, r13d
 * 0000000140B0BEFC: mov     ebx, 1
 * 0000000140B0BF01: mov     rcx, rsi
 * 0000000140B0BF04: mov     edx, ebx
 * 0000000140B0BF06: call    $$ba
 * 0000000140B0BF0B: test    dword ptr [rsi+994h], 100h
 * 0000000140B0BF15: jz      short loc_140B0BF22
 * 0000000140B0BF17: mov     rax, [rbp+0A70h+var_A78]
 * 0000000140B0BF1B: mov     [rbp+0A78h], rax
 * 0000000140B0BF22: mov     r9d, [rsi+990h]
 * 0000000140B0BF29: mov     r8d, r9d
 * 0000000140B0BF2C: bt      r9d, 12h
 * 0000000140B0BF31: jnb     loc_140B0BFD6
 * 0000000140B0BF37: rdtsc
 * 0000000140B0BF39: shl     rdx, 20h
 * 0000000140B0BF3D: or      rax, rdx
 * 0000000140B0BF40: mov     rcx, rax
 * 0000000140B0BF43: ror     rax, 3
 * 0000000140B0BF47: xor     rcx, rax
 * 0000000140B0BF4A: mov     rax, 7010008004002001h
 * 0000000140B0BF54: mul     rcx
 * 0000000140B0BF57: mov     rcx, rdx
 * 0000000140B0BF5A: mov     [rbp+0A70h+var_490], rdx
 * 0000000140B0BF61: xor     rcx, rax
 * 0000000140B0BF64: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 0000000140B0BF6E: mul     rcx
 * 0000000140B0BF71: shr     rdx, 3
 * 0000000140B0BF75: lea     rax, [rdx+rdx*4]
 * 0000000140B0BF79: add     rax, rax
 * 0000000140B0BF7C: sub     rcx, rax
 * 0000000140B0BF7F: mov     eax, 2
 * 0000000140B0BF84: cmp     rcx, rax
 * 0000000140B0BF87: jnb     short loc_140B0BFD6
 * 0000000140B0BF89: cmp     [rsi+8F8h], r13d
 * 0000000140B0BF90: jnz     short loc_140B0BFD6
 * 0000000140B0BF92: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0BF9C: xor     edx, edx
 * 0000000140B0BF9E: add     rax, rsi
 * 0000000140B0BFA1: mov     rcx, rsi
 * 0000000140B0BFA4: mov     [rsi+900h], rax
 * 0000000140B0BFAB: mov     [rsi+908h], r13
 * 0000000140B0BFB2: mov     qword ptr [rsi+910h], 108h
 * 0000000140B0BFBD: mov     [rsi+918h], r13
 * 0000000140B0BFC4: mov     [rsi+8F8h], ebx
 * 0000000140B0BFCA: call    $$ba
 * 0000000140B0BFCF: mov     r8d, [rsi+990h]
 * 0000000140B0BFD6: mov     r11d, 8000h
 * 0000000140B0BFDC: bt      r8d, 1Eh
 * 0000000140B0BFE1: jb      short loc_140B0C05A
 * 0000000140B0BFE3: test    r11d, r8d
 * 0000000140B0BFE6: jnz     short loc_140B0C05A
 * 0000000140B0BFE8: lea     rdx, [rsi+8F8h]
 * 0000000140B0BFEF: cmp     [rdx], r13d
 * 0000000140B0BFF2: jz      short loc_140B0C05A
 * 0000000140B0BFF4: mov     rcx, [rbp+0A70h+arg_0]
 * 0000000140B0BFFB: test    [rcx+990h], r11d
 * 0000000140B0C002: jz      short loc_140B0C00D
 * 0000000140B0C004: add     rcx, 8F8h
 * 0000000140B0C00B: jmp     short loc_140B0C019
 * 0000000140B0C00D: add     rcx, 8F8h
 * 0000000140B0C014: cmp     [rcx], r13d
 * 0000000140B0C017: jnz     short loc_140B0C05A
 * 0000000140B0C019: mov     r8d, 28h ; '('
 * 0000000140B0C01F: lea     r9d, [r8-23h]
 * 0000000140B0C023: mov     rax, [rdx]
 * 0000000140B0C026: add     r8d, 0FFFFFFF8h
 * 0000000140B0C02A: mov     [rcx], rax
 * 0000000140B0C02D: add     rdx, 8
 * 0000000140B0C031: add     rcx, 8
 * 0000000140B0C035: sub     r9, rbx
 * 0000000140B0C038: jnz     short loc_140B0C023
 * 0000000140B0C03A: test    r8d, r8d
 * 0000000140B0C03D: jz      short loc_140B0C05A
 * 0000000140B0C03F: mov     edi, 0FFFFFFFFh
 * 0000000140B0C044: mov     al, [rdx]
 * 0000000140B0C046: add     rdx, rbx
 * 0000000140B0C049: mov     [rcx], al
 * 0000000140B0C04B: add     rcx, rbx
 * 0000000140B0C04E: add     r8d, edi
 * 0000000140B0C051: jnz     short loc_140B0C044
 * 0000000140B0C053: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0C05A: test    [rsi+990h], r11d
 * 0000000140B0C061: jnz     short loc_140B0C070
 * 0000000140B0C063: cmp     [rsi+8F8h], r13d
 * 0000000140B0C06A: jnz     loc_140B0CB56
 * 0000000140B0C070: mov     eax, [rsi+0A28h]
 * 0000000140B0C076: test    eax, eax
 * 0000000140B0C078: jz      loc_140B0CB56
 * 0000000140B0C07E: lea     r14, [rsi+rax]
 * 0000000140B0C082: mov     r11, [r14+8]
 * 0000000140B0C086: mov     [rbp+0A70h+var_AF0], r14
 * 0000000140B0C08A: test    r11, r11
 * 0000000140B0C08D: jz      loc_140B0C35E
 * 0000000140B0C093: mov     r10d, [r14+10h]
 * 0000000140B0C097: mov     r8, r11
 * 0000000140B0C09A: add     [rsi+828h], r10d
 * 0000000140B0C0A1: mov     rax, r11
 * 0000000140B0C0A4: mov     r9d, [rsi+814h]
 * 0000000140B0C0AB: mov     r12, [rsi+818h]
 * 0000000140B0C0B2: lea     rcx, [r11+r10]
 * 0000000140B0C0B6: mov     dword ptr [rbp+0A70h+arg_8], r10d
 * 0000000140B0C0BD: cmp     r11, rcx
 * 0000000140B0C0C0: jnb     short loc_140B0C0D2
 * 0000000140B0C0C2: mov     edx, 40h ; '@'
 * 0000000140B0C0C7: prefetchnta byte ptr [rax]
 * 0000000140B0C0CA: add     rax, rdx
 * 0000000140B0C0CD: cmp     rax, rcx
 * 0000000140B0C0D0: jb      short loc_140B0C0C7
 * 0000000140B0C0D2: mov     r15d, r10d
 * 0000000140B0C0D5: mov     rbx, r12
 * 0000000140B0C0D8: shr     r15d, 7
 * 0000000140B0C0DC: mov     edx, 1
 * 0000000140B0C0E1: test    r15d, r15d
 * 0000000140B0C0E4: jz      short loc_140B0C159
 * 0000000140B0C0E6: mov     edi, 0FFFFFFFFh
 * 0000000140B0C0EB: mov     r10, 7010008004002001h
 * 0000000140B0C0F5: mov     eax, 8
 * 0000000140B0C0FA: xor     rbx, [r8]
 * 0000000140B0C0FD: mov     ecx, r9d
 * 0000000140B0C100: rol     rbx, cl
 * 0000000140B0C103: xor     rbx, [r8+8]
 * 0000000140B0C107: add     r8, 10h
 * 0000000140B0C10B: rol     rbx, cl
 * 0000000140B0C10E: sub     rax, rdx
 * 0000000140B0C111: jnz     short loc_140B0C0FA
 * 0000000140B0C113: mov     rcx, r8
 * 0000000140B0C116: sub     rcx, r11
 * 0000000140B0C119: xor     rcx, r12
 * 0000000140B0C11C: mov     rax, rcx
 * 0000000140B0C11F: rol     rax, 11h
 * 0000000140B0C123: xor     rcx, rax
 * 0000000140B0C126: mov     rax, r10
 * 0000000140B0C129: mul     rcx
 * 0000000140B0C12C: xor     r9d, edx
 * 0000000140B0C12F: mov     [rbp+0A70h+var_488], rdx
 * 0000000140B0C136: xor     r9d, eax
 * 0000000140B0C139: mov     edx, 1
 * 0000000140B0C13E: and     r9d, 3Fh
 * 0000000140B0C142: cmovz   r9d, edx
 * 0000000140B0C146: add     r15d, edi
 * 0000000140B0C149: jnz     short loc_140B0C0F5
 * 0000000140B0C14B: mov     r10d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0C152: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0C159: and     r10d, 7Fh
 * 0000000140B0C15D: cmp     r10d, 8
 * 0000000140B0C161: jb      short loc_140B0C180
 * 0000000140B0C163: mov     eax, r10d
 * 0000000140B0C166: shr     rax, 3
 * 0000000140B0C16A: xor     rbx, [r8]
 * 0000000140B0C16D: mov     ecx, r9d
 * 0000000140B0C170: rol     rbx, cl
 * 0000000140B0C173: add     r8, 8
 * 0000000140B0C177: add     r10d, 0FFFFFFF8h
 * 0000000140B0C17B: sub     rax, rdx
 * 0000000140B0C17E: jnz     short loc_140B0C16A
 * 0000000140B0C180: test    r10d, r10d
 * 0000000140B0C183: jz      short loc_140B0C1A4
 * 0000000140B0C185: mov     r14d, 0FFFFFFFFh
 * 0000000140B0C18B: movzx   eax, byte ptr [r8]
 * 0000000140B0C18F: mov     ecx, r9d
 * 0000000140B0C192: xor     rbx, rax
 * 0000000140B0C195: add     r8, rdx
 * 0000000140B0C198: rol     rbx, cl
 * 0000000140B0C19B: add     r10d, r14d
 * 0000000140B0C19E: jnz     short loc_140B0C18B
 * 0000000140B0C1A0: mov     r14, [rbp+0A70h+var_AF0]
 * 0000000140B0C1A4: mov     rax, rbx
 * 0000000140B0C1A7: jmp     short loc_140B0C1AB
 * 0000000140B0C1A9: xor     ebx, eax
 * 0000000140B0C1AB: shr     rax, 1Fh
 * 0000000140B0C1AF: test    rax, rax
 * 0000000140B0C1B2: jnz     short loc_140B0C1A9
 * 0000000140B0C1B4: btr     ebx, 1Fh
 * 0000000140B0C1B8: mov     r12d, r13d
 * 0000000140B0C1BB: cmp     ebx, [r14+14h]
 * 0000000140B0C1BF: jz      loc_140B0C327
 * 0000000140B0C1C5: cmp     [r14], r13d
 * 0000000140B0C1C8: jnz     short loc_140B0C1D2
 * 0000000140B0C1CA: cmp     [r14+18h], r13d
 * 0000000140B0C1CE: cmovnz  r12d, edx
 * 0000000140B0C1D2: mov     ecx, [r14+10h]
 * 0000000140B0C1D6: mov     rdx, [r14+8]
 * 0000000140B0C1DA: test    rcx, rcx
 * 0000000140B0C1DD: jz      loc_140B0C2AF
 * 0000000140B0C1E3: mov     eax, [rsi+994h]
 * 0000000140B0C1E9: mov     r8d, 40h ; '@'
 * 0000000140B0C1EF: test    r8b, al
 * 0000000140B0C1F2: jz      loc_140B0C2AF
 * 0000000140B0C1F8: mov     rax, cr8
 * 0000000140B0C1FC: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B0C203: mov     r8d, 2
 * 0000000140B0C209: mov     cr8, r8
 * 0000000140B0C20D: dec     rcx
 * 0000000140B0C210: mov     r15, rdx
 * 0000000140B0C213: and     r15, 0FFFFFFFFFFFFF000h
 * 0000000140B0C21A: add     rcx, rdx
 * 0000000140B0C21D: or      rcx, 0FFFh
 * 0000000140B0C224: mov     [rsp+0B70h+var_AF8], rcx
 * 0000000140B0C229: lea     rcx, [r15-1]
 * 0000000140B0C22D: mov     [rbp+0A70h+var_A78], rcx
 * 0000000140B0C231: movzx   r13d, al
 * 0000000140B0C235: mov     rax, [rsi+468h]
 * 0000000140B0C23C: xor     edx, edx
 * 0000000140B0C23E: mov     rcx, r15
 * 0000000140B0C241: call    KeGuardDispatchICall
 * 0000000140B0C246: cmp     eax, 0C000022Dh
 * 0000000140B0C24B: jnz     short loc_140B0C27A
 * 0000000140B0C24D: test    r12d, r12d
 * 0000000140B0C250: jnz     short loc_140B0C2A8
 * 0000000140B0C252: mov     rax, [rbp+0A70h+arg_8]
 * 0000000140B0C259: lea     ecx, [r12+1]
 * 0000000140B0C25E: cmp     al, cl
 * 0000000140B0C260: ja      short loc_140B0C285
 * 0000000140B0C262: movzx   r13d, al
 * 0000000140B0C266: mov     cr8, r13
 * 0000000140B0C26A: mov     al, [r15]
 * 0000000140B0C26D: mov     rax, cr8
 * 0000000140B0C271: lea     eax, [rcx+1]
 * 0000000140B0C274: mov     cr8, rax
 * 0000000140B0C278: jmp     short loc_140B0C235
 * 0000000140B0C27A: test    eax, eax
 * 0000000140B0C27C: js      short loc_140B0C2A8
 * 0000000140B0C27E: mov     rax, [rbp+0A70h+arg_8]
 * 0000000140B0C285: mov     rcx, [rbp+0A70h+var_A78]
 * 0000000140B0C289: mov     edx, 1000h
 * 0000000140B0C28E: add     rcx, rdx
 * 0000000140B0C291: add     r15, rdx
 * 0000000140B0C294: mov     [rbp+0A70h+var_A78], rcx
 * 0000000140B0C298: cmp     rcx, [rsp+0B70h+var_AF8]
 * 0000000140B0C29D: jnz     short loc_140B0C231
 * 0000000140B0C29F: mov     cr8, r13
 * 0000000140B0C2A3: xor     r13d, r13d
 * 0000000140B0C2A6: jmp     short loc_140B0C327
 * 0000000140B0C2A8: mov     cr8, r13
 * 0000000140B0C2AC: xor     r13d, r13d
 * 0000000140B0C2AF: mov     eax, [r14+14h]
 * 0000000140B0C2B3: cmp     [rsi+8F8h], r13d
 * 0000000140B0C2BA: jnz     short loc_140B0C327
 * 0000000140B0C2BC: mov     ecx, ebx
 * 0000000140B0C2BE: xor     rcx, rax
 * 0000000140B0C2C1: mov     rax, [rsi+588h]
 * 0000000140B0C2C8: mov     [rax+18h], rcx
 * 0000000140B0C2CC: mov     rcx, [r14+8]
 * 0000000140B0C2D0: cmp     [rsi+8F8h], r13d
 * 0000000140B0C2D7: jnz     short loc_140B0C327
 * 0000000140B0C2D9: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0C2E3: xor     edx, edx
 * 0000000140B0C2E5: add     rax, rsi
 * 0000000140B0C2E8: mov     [rsi+900h], rax
 * 0000000140B0C2EF: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B0C2F9: add     rax, r14
 * 0000000140B0C2FC: mov     [rsi+908h], rax
 * 0000000140B0C303: movsxd  rax, dword ptr [r14]
 * 0000000140B0C306: mov     [rsi+910h], rax
 * 0000000140B0C30D: mov     eax, 1
 * 0000000140B0C312: mov     [rsi+918h], rcx
 * 0000000140B0C319: mov     rcx, rsi
 * 0000000140B0C31C: mov     [rsi+8F8h], eax
 * 0000000140B0C322: call    $$ba
 * 0000000140B0C327: mov     rcx, [r14+18h]
 * 0000000140B0C32B: mov     rax, [rsi+0F8h]
 * 0000000140B0C332: call    KeGuardDispatchICall
 * 0000000140B0C337: mov     [r14+8], r13
 * 0000000140B0C33B: mov     [r14+10h], r13d
 * 0000000140B0C33F: mov     rcx, [rsi+818h]
 * 0000000140B0C346: mov     rax, rcx
 * 0000000140B0C349: jmp     short loc_140B0C34D
 * 0000000140B0C34B: xor     ecx, eax
 * 0000000140B0C34D: shr     rax, 1Fh
 * 0000000140B0C351: test    rax, rax
 * 0000000140B0C354: jnz     short loc_140B0C34B
 * 0000000140B0C356: btr     ecx, 1Fh
 * 0000000140B0C35A: mov     [r14+14h], ecx
 * 0000000140B0C35E: rdtsc
 * 0000000140B0C360: shl     rdx, 20h
 * 0000000140B0C364: mov     r8, 7010008004002001h
 * 0000000140B0C36E: or      rax, rdx
 * 0000000140B0C371: mov     rcx, rax
 * 0000000140B0C374: ror     rax, 3
 * 0000000140B0C378: xor     rcx, rax
 * 0000000140B0C37B: mov     rax, r8
 * 0000000140B0C37E: mul     rcx
 * 0000000140B0C381: mov     rcx, rdx
 * 0000000140B0C384: mov     [rbp+0A70h+var_480], rdx
 * 0000000140B0C38B: xor     rcx, rax
 * 0000000140B0C38E: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140B0C398: mul     rcx
 * 0000000140B0C39B: shr     rdx, 1
 * 0000000140B0C39E: lea     rax, [rdx+rdx*2]
 * 0000000140B0C3A2: cmp     rcx, rax
 * 0000000140B0C3A5: jnz     loc_140B0CB6F
 * 0000000140B0C3AB: lea     r12, [r14+18h]
 * 0000000140B0C3AF: mov     [rbp+0A70h+arg_8], r12
 * 0000000140B0C3B6: rdtsc
 * 0000000140B0C3B8: shl     rdx, 20h
 * 0000000140B0C3BC: or      rax, rdx
 * 0000000140B0C3BF: mov     rcx, rax
 * 0000000140B0C3C2: ror     rax, 3
 * 0000000140B0C3C6: xor     rcx, rax
 * 0000000140B0C3C9: mov     rax, r8
 * 0000000140B0C3CC: mul     rcx
 * 0000000140B0C3CF: mov     rbx, rdx
 * 0000000140B0C3D2: mov     [rbp+0A70h+var_478], rdx
 * 0000000140B0C3D9: xor     ebx, eax
 * 0000000140B0C3DB: and     ebx, 7FFh
 * 0000000140B0C3E1: rdtsc
 * 0000000140B0C3E3: shl     rdx, 20h
 * 0000000140B0C3E7: or      rax, rdx
 * 0000000140B0C3EA: mov     rcx, rax
 * 0000000140B0C3ED: ror     rax, 3
 * 0000000140B0C3F1: xor     rcx, rax
 * 0000000140B0C3F4: mov     rax, r8
 * 0000000140B0C3F7: mul     rcx
 * 0000000140B0C3FA: lea     r8d, [rbx+1]
 * 0000000140B0C3FE: xor     rax, rdx
 * 0000000140B0C401: mov     [rbp+0A70h+var_470], rdx
 * 0000000140B0C408: xor     edx, edx
 * 0000000140B0C40A: div     r8
 * 0000000140B0C40D: mov     eax, [rsi+990h]
 * 0000000140B0C413: mov     r8d, [rsi+810h]
 * 0000000140B0C41A: and     eax, 10000000h
 * 0000000140B0C41F: neg     eax
 * 0000000140B0C421: mov     r15, rdx
 * 0000000140B0C424: mov     rax, [rsi+0F0h]
 * 0000000140B0C42B: lea     edx, [rbx+0AA0h]
 * 0000000140B0C431: sbb     rcx, rcx
 * 0000000140B0C434: and     rcx, 0FFFFFFFFFFFFFFC0h
 * 0000000140B0C438: add     rcx, 82h
 * 0000000140B0C43F: call    KeGuardDispatchICall
 * 0000000140B0C444: mov     r11, rax
 * 0000000140B0C447: test    rax, rax
 * 0000000140B0C44A: jnz     short loc_140B0C466
 * 0000000140B0C44C: lea     r12d, [rax+1]
 * 0000000140B0C450: add     [rsi+0A18h], r12d
 * 0000000140B0C457: mov     r8, 7010008004002001h
 * 0000000140B0C461: jmp     loc_140B0CB75
 * 0000000140B0C466: mov     r9d, r15d
 * 0000000140B0C469: mov     r8, r11
 * 0000000140B0C46C: cmp     r15d, 8
 * 0000000140B0C470: jb      short loc_140B0C4C7
 * 0000000140B0C472: mov     r10d, r15d
 * 0000000140B0C475: mov     r14d, 1
 * 0000000140B0C47B: shr     r10, 3
 * 0000000140B0C47F: mov     r12, 7010008004002001h
 * 0000000140B0C489: rdtsc
 * 0000000140B0C48B: shl     rdx, 20h
 * 0000000140B0C48F: add     r9d, 0FFFFFFF8h
 * 0000000140B0C493: or      rax, rdx
 * 0000000140B0C496: mov     rcx, rax
 * 0000000140B0C499: ror     rax, 3
 * 0000000140B0C49D: xor     rcx, rax
 * 0000000140B0C4A0: mov     rax, r12
 * 0000000140B0C4A3: mul     rcx
 * 0000000140B0C4A6: mov     [rbp+0A70h+var_468], rdx
 * 0000000140B0C4AD: xor     rdx, rax
 * 0000000140B0C4B0: mov     [r8], rdx
 * 0000000140B0C4B3: add     r8, 8
 * 0000000140B0C4B7: sub     r10, r14
 * 0000000140B0C4BA: jnz     short loc_140B0C489
 * 0000000140B0C4BC: mov     r14, [rbp+0A70h+var_AF0]
 * 0000000140B0C4C0: mov     r12, [rbp+0A70h+arg_8]
 * 0000000140B0C4C7: test    r9d, r9d
 * 0000000140B0C4CA: jz      short loc_140B0C50F
 * 0000000140B0C4CC: rdtsc
 * 0000000140B0C4CE: shl     rdx, 20h
 * 0000000140B0C4D2: or      rax, rdx
 * 0000000140B0C4D5: mov     rcx, rax
 * 0000000140B0C4D8: ror     rax, 3
 * 0000000140B0C4DC: xor     rcx, rax
 * 0000000140B0C4DF: mov     rax, 7010008004002001h
 * 0000000140B0C4E9: mul     rcx
 * 0000000140B0C4EC: mov     ecx, 0FFFFFFFFh
 * 0000000140B0C4F1: mov     [rbp+0A70h+var_460], rdx
 * 0000000140B0C4F8: xor     rdx, rax
 * 0000000140B0C4FB: mov     eax, 1
 * 0000000140B0C500: mov     [r8], dl
 * 0000000140B0C503: add     r8, rax
 * 0000000140B0C506: shr     rdx, 8
 * 0000000140B0C50A: add     r9d, ecx
 * 0000000140B0C50D: jnz     short loc_140B0C500
 * 0000000140B0C50F: mov     r9d, r15d
 * 0000000140B0C512: sub     ebx, r15d
 * 0000000140B0C515: add     r9, r11
 * 0000000140B0C518: mov     r15d, 1
 * 0000000140B0C51E: lea     r8, [r9+0AA0h]
 * 0000000140B0C525: cmp     ebx, 8
 * 0000000140B0C528: jb      short loc_140B0C571
 * 0000000140B0C52A: mov     r10d, ebx
 * 0000000140B0C52D: mov     r12, 7010008004002001h
 * 0000000140B0C537: shr     r10, 3
 * 0000000140B0C53B: rdtsc
 * 0000000140B0C53D: shl     rdx, 20h
 * 0000000140B0C541: add     ebx, 0FFFFFFF8h
 * 0000000140B0C544: or      rax, rdx
 * 0000000140B0C547: mov     rcx, rax
 * 0000000140B0C54A: ror     rax, 3
 * 0000000140B0C54E: xor     rcx, rax
 * 0000000140B0C551: mov     rax, r12
 * 0000000140B0C554: mul     rcx
 * 0000000140B0C557: mov     [rbp+0A70h+var_458], rdx
 * 0000000140B0C55E: xor     rdx, rax
 * 0000000140B0C561: mov     [r8], rdx
 * 0000000140B0C564: add     r8, 8
 * 0000000140B0C568: sub     r10, r15
 * 0000000140B0C56B: jnz     short loc_140B0C53B
 * 0000000140B0C56D: lea     r12, [r14+18h]
 * 0000000140B0C571: test    ebx, ebx
 * 0000000140B0C573: jz      short loc_140B0C5B2
 * 0000000140B0C575: rdtsc
 * 0000000140B0C577: shl     rdx, 20h
 * 0000000140B0C57B: or      rax, rdx
 * 0000000140B0C57E: mov     rcx, rax
 * 0000000140B0C581: ror     rax, 3
 * 0000000140B0C585: xor     rcx, rax
 * 0000000140B0C588: mov     rax, 7010008004002001h
 * 0000000140B0C592: mul     rcx
 * 0000000140B0C595: mov     [rbp+0A70h+var_450], rdx
 * 0000000140B0C59C: xor     rdx, rax
 * 0000000140B0C59F: mov     eax, 0FFFFFFFFh
 * 0000000140B0C5A4: mov     [r8], dl
 * 0000000140B0C5A7: add     r8, r15
 * 0000000140B0C5AA: shr     rdx, 8
 * 0000000140B0C5AE: add     ebx, eax
 * 0000000140B0C5B0: jnz     short loc_140B0C5A4
 * 0000000140B0C5B2: test    r12, r12
 * 0000000140B0C5B5: jz      short loc_140B0C5BB
 * 0000000140B0C5B7: mov     [r12], r11
 * 0000000140B0C5BB: test    r9, r9
 * 0000000140B0C5BE: jz      loc_140B0CB65
 * 0000000140B0C5C4: mov     r10d, 0AA0h
 * 0000000140B0C5CA: mov     [r14+8], r9
 * 0000000140B0C5CE: mov     [r14+10h], r10d
 * 0000000140B0C5D2: mov     r8d, r10d
 * 0000000140B0C5D5: mov     r14d, 154h
 * 0000000140B0C5DB: mov     rcx, rsi
 * 0000000140B0C5DE: mov     rdx, r9
 * 0000000140B0C5E1: mov     rax, [rcx]
 * 0000000140B0C5E4: add     r8d, 0FFFFFFF8h
 * 0000000140B0C5E8: mov     [rdx], rax
 * 0000000140B0C5EB: add     rcx, 8
 * 0000000140B0C5EF: add     rdx, 8
 * 0000000140B0C5F3: sub     r14, r15
 * 0000000140B0C5F6: jnz     short loc_140B0C5E1
 * 0000000140B0C5F8: test    r8d, r8d
 * 0000000140B0C5FB: jz      short loc_140B0C618
 * 0000000140B0C5FD: mov     r10d, 0FFFFFFFFh
 * 0000000140B0C603: mov     al, [rcx]
 * 0000000140B0C605: add     rcx, r15
 * 0000000140B0C608: mov     [rdx], al
 * 0000000140B0C60A: add     rdx, r15
 * 0000000140B0C60D: add     r8d, r10d
 * 0000000140B0C610: jnz     short loc_140B0C603
 * 0000000140B0C612: mov     r10d, 0AA0h
 * 0000000140B0C618: mov     eax, [r9+990h]
 * 0000000140B0C61F: mov     rdi, 7010008004002001h
 * 0000000140B0C629: mov     [r9+7E4h], r10d
 * 0000000140B0C630: and     eax, 0FFFFFFFDh
 * 0000000140B0C633: mov     [r9+808h], r10d
 * 0000000140B0C63A: bts     eax, 13h
 * 0000000140B0C63E: mov     [r9+990h], eax
 * 0000000140B0C645: mov     [r9+0A2Ch], r10d
 * 0000000140B0C64C: mov     dword ptr [rbp+0A70h+var_AD8], eax
 * 0000000140B0C64F: mov     eax, [r9+954h]
 * 0000000140B0C656: mov     [rbp+0A70h+var_AD0], eax
 * 0000000140B0C659: mov     rax, [r9+4E0h]
 * 0000000140B0C660: mov     [rbp+0A70h+var_A80], rax
 * 0000000140B0C664: mov     rax, [r9+5B8h]
 * 0000000140B0C66B: mov     [rbp+0A70h+var_AC0], rax
 * 0000000140B0C66F: mov     dword ptr [r9+0C4h], 13Bh
 * 0000000140B0C67A: rdtsc
 * 0000000140B0C67C: shl     rdx, 20h
 * 0000000140B0C680: or      rax, rdx
 * 0000000140B0C683: mov     rcx, rax
 * 0000000140B0C686: ror     rax, 3
 * 0000000140B0C68A: xor     rcx, rax
 * 0000000140B0C68D: mov     rax, rdi
 * 0000000140B0C690: mul     rcx
 * 0000000140B0C693: mov     rbx, rdx
 * 0000000140B0C696: mov     [rbp+0A70h+var_448], rdx
 * 0000000140B0C69D: xor     rbx, rax
 * 0000000140B0C6A0: jz      short loc_140B0C67A
 * 0000000140B0C6A2: mov     rax, [r9+7B8h]
 * 0000000140B0C6A9: lea     r12, [r9+798h]
 * 0000000140B0C6B0: mov     r15d, 20h ; ' '
 * 0000000140B0C6B6: mov     [rbp+0A70h+var_A78], rax
 * 0000000140B0C6BA: mov     eax, [r9+828h]
 * 0000000140B0C6C1: lea     rdx, [rbp+0A70h+var_F0]
 * 0000000140B0C6C8: mov     [rbp+0A70h+var_AE0], eax
 * 0000000140B0C6CB: mov     r8d, r15d
 * 0000000140B0C6CE: mov     rcx, r12
 * 0000000140B0C6D1: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0C6D8: lea     r11d, [r15-1Ch]
 * 0000000140B0C6DC: mov     r10d, r11d
 * 0000000140B0C6DF: lea     r14d, [r15-1Fh]
 * 0000000140B0C6E3: mov     rax, [rcx]
 * 0000000140B0C6E6: add     r8d, 0FFFFFFF8h
 * 0000000140B0C6EA: mov     [rdx], rax
 * 0000000140B0C6ED: add     rcx, 8
 * 0000000140B0C6F1: add     rdx, 8
 * 0000000140B0C6F5: sub     r10, r14
 * 0000000140B0C6F8: jnz     short loc_140B0C6E3
 * 0000000140B0C6FA: mov     r14, [rbp+0A70h+var_AF0]
 * 0000000140B0C6FE: mov     r10d, 1
 * 0000000140B0C704: test    r8d, r8d
 * 0000000140B0C707: jz      short loc_140B0C722
 * 0000000140B0C709: mov     r14d, 0FFFFFFFFh
 * 0000000140B0C70F: mov     al, [rcx]
 * 0000000140B0C711: add     rcx, r10
 * 0000000140B0C714: mov     [rdx], al
 * 0000000140B0C716: add     rdx, r10
 * 0000000140B0C719: add     r8d, r14d
 * 0000000140B0C71C: jnz     short loc_140B0C70F
 * 0000000140B0C71E: mov     r14, [rbp+0A70h+var_AF0]
 * 0000000140B0C722: mov     [r9+7B8h], r13
 * 0000000140B0C729: mov     ecx, r15d
 * 0000000140B0C72C: mov     [r9+828h], r13d
 * 0000000140B0C733: mov     rax, r12
 * 0000000140B0C736: mov     rdx, r11
 * 0000000140B0C739: mov     [rax], r13
 * 0000000140B0C73C: add     ecx, 0FFFFFFF8h
 * 0000000140B0C73F: add     rax, 8
 * 0000000140B0C743: sub     rdx, r10
 * 0000000140B0C746: jnz     short loc_140B0C739
 * 0000000140B0C748: mov     edx, 1
 * 0000000140B0C74D: test    ecx, ecx
 * 0000000140B0C74F: jz      short loc_140B0C762
 * 0000000140B0C751: mov     r8d, 0FFFFFFFFh
 * 0000000140B0C757: mov     [rax], r13b
 * 0000000140B0C75A: add     rax, rdx
 * 0000000140B0C75D: add     ecx, r8d
 * 0000000140B0C760: jnz     short loc_140B0C757
 * 0000000140B0C762: mov     r11d, [r9+7E4h]
 * 0000000140B0C769: mov     r10, r9
 * 0000000140B0C76C: add     [r9+828h], r11d
 * 0000000140B0C773: mov     rax, r9
 * 0000000140B0C776: mov     r15d, [r9+814h]
 * 0000000140B0C77D: mov     r8, [r9+818h]
 * 0000000140B0C784: lea     rcx, [r9+r11]
 * 0000000140B0C788: mov     dword ptr [rbp+0A70h+arg_8], r11d
 * 0000000140B0C78F: cmp     r9, rcx
 * 0000000140B0C792: jnb     short loc_140B0C7A0
 * 0000000140B0C794: prefetchnta byte ptr [rax]
 * 0000000140B0C797: add     rax, 40h ; '@'
 * 0000000140B0C79B: cmp     rax, rcx
 * 0000000140B0C79E: jb      short loc_140B0C794
 * 0000000140B0C7A0: mov     r13d, r11d
 * 0000000140B0C7A3: shr     r13d, 7
 * 0000000140B0C7A7: test    r13d, r13d
 * 0000000140B0C7AA: jz      loc_140B0C831
 * 0000000140B0C7B0: mov     rdi, r8
 * 0000000140B0C7B3: mov     r12d, 0FFFFFFFFh
 * 0000000140B0C7B9: mov     r11, 7010008004002001h
 * 0000000140B0C7C3: mov     eax, 8
 * 0000000140B0C7C8: xor     r8, [r10]
 * 0000000140B0C7CB: mov     ecx, r15d
 * 0000000140B0C7CE: rol     r8, cl
 * 0000000140B0C7D1: xor     r8, [r10+8]
 * 0000000140B0C7D5: add     r10, 10h
 * 0000000140B0C7D9: rol     r8, cl
 * 0000000140B0C7DC: sub     rax, rdx
 * 0000000140B0C7DF: jnz     short loc_140B0C7C8
 * 0000000140B0C7E1: mov     rcx, r10
 * 0000000140B0C7E4: sub     rcx, r9
 * 0000000140B0C7E7: xor     rcx, rdi
 * 0000000140B0C7EA: mov     rax, rcx
 * 0000000140B0C7ED: rol     rax, 11h
 * 0000000140B0C7F1: xor     rcx, rax
 * 0000000140B0C7F4: mov     rax, r11
 * 0000000140B0C7F7: mul     rcx
 * 0000000140B0C7FA: mov     [rbp+0A70h+var_440], rdx
 * 0000000140B0C801: xor     edx, eax
 * 0000000140B0C803: xor     r15d, edx
 * 0000000140B0C806: mov     edx, 1
 * 0000000140B0C80B: and     r15d, 3Fh
 * 0000000140B0C80F: cmovz   r15d, edx
 * 0000000140B0C813: add     r13d, r12d
 * 0000000140B0C816: jnz     short loc_140B0C7C3
 * 0000000140B0C818: mov     r14, [rbp+0A70h+var_AF0]
 * 0000000140B0C81C: lea     r12, [r9+798h]
 * 0000000140B0C823: mov     r11d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0C82A: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0C831: and     r11d, 7Fh
 * 0000000140B0C835: cmp     r11d, 8
 * 0000000140B0C839: jb      short loc_140B0C858
 * 0000000140B0C83B: mov     eax, r11d
 * 0000000140B0C83E: shr     rax, 3
 * 0000000140B0C842: xor     r8, [r10]
 * 0000000140B0C845: mov     ecx, r15d
 * 0000000140B0C848: rol     r8, cl
 * 0000000140B0C84B: add     r10, 8
 * 0000000140B0C84F: add     r11d, 0FFFFFFF8h
 * 0000000140B0C853: sub     rax, rdx
 * 0000000140B0C856: jnz     short loc_140B0C842
 * 0000000140B0C858: xor     r13d, r13d
 * 0000000140B0C85B: test    r11d, r11d
 * 0000000140B0C85E: jz      short loc_140B0C87F
 * 0000000140B0C860: mov     r14d, 0FFFFFFFFh
 * 0000000140B0C866: movzx   eax, byte ptr [r10]
 * 0000000140B0C86A: mov     ecx, r15d
 * 0000000140B0C86D: xor     r8, rax
 * 0000000140B0C870: add     r10, rdx
 * 0000000140B0C873: rol     r8, cl
 * 0000000140B0C876: add     r11d, r14d
 * 0000000140B0C879: jnz     short loc_140B0C866
 * 0000000140B0C87B: mov     r14, [rbp+0A70h+var_AF0]
 * 0000000140B0C87F: mov     rax, [rbp+0A70h+var_A78]
 * 0000000140B0C883: lea     rcx, [rbp+0A70h+var_F0]
 * 0000000140B0C88A: mov     edx, 20h ; ' '
 * 0000000140B0C88F: mov     [r9+7B8h], rax
 * 0000000140B0C896: mov     eax, [rbp+0A70h+var_AE0]
 * 0000000140B0C899: add     [r9+828h], eax
 * 0000000140B0C8A0: lea     r10d, [rdx-1Ch]
 * 0000000140B0C8A4: lea     r11d, [rdx-1Fh]
 * 0000000140B0C8A8: mov     rax, [rcx]
 * 0000000140B0C8AB: add     edx, 0FFFFFFF8h
 * 0000000140B0C8AE: mov     [r12], rax
 * 0000000140B0C8B2: add     rcx, 8
 * 0000000140B0C8B6: add     r12, 8
 * 0000000140B0C8BA: sub     r10, r11
 * 0000000140B0C8BD: jnz     short loc_140B0C8A8
 * 0000000140B0C8BF: test    edx, edx
 * 0000000140B0C8C1: jz      short loc_140B0C8DE
 * 0000000140B0C8C3: mov     r14d, 0FFFFFFFFh
 * 0000000140B0C8C9: mov     al, [rcx]
 * 0000000140B0C8CB: add     rcx, r11
 * 0000000140B0C8CE: mov     [r12], al
 * 0000000140B0C8D2: add     r12, r11
 * 0000000140B0C8D5: add     edx, r14d
 * 0000000140B0C8D8: jnz     short loc_140B0C8C9
 * 0000000140B0C8DA: mov     r14, [rbp+0A70h+var_AF0]
 * 0000000140B0C8DE: mov     [r9+7B8h], r8
 * 0000000140B0C8E5: test    dword ptr [r9+990h], 40000000h
 * 0000000140B0C8F0: jnz     loc_140B0CA28
 * 0000000140B0C8F6: mov     rax, r9
 * 0000000140B0C8F9: mov     ecx, r13d
 * 0000000140B0C8FC: xor     [rax], rbx
 * 0000000140B0C8FF: add     ecx, r11d
 * 0000000140B0C902: add     rax, 8
 * 0000000140B0C906: cmp     ecx, 19h
 * 0000000140B0C909: jb      short loc_140B0C8FC
 * 0000000140B0C90B: add     rax, 9D0h
 * 0000000140B0C911: mov     ecx, 13Bh
 * 0000000140B0C916: xor     [rax], rbx
 * 0000000140B0C919: lea     rdx, [rbp+0A70h+var_888]
 * 0000000140B0C920: ror     rbx, cl
 * 0000000140B0C923: lea     rax, [rax-8]
 * 0000000140B0C927: mov     [rbp+0A70h+var_888], rbx
 * 0000000140B0C92E: and     ebx, 3Fh
 * 0000000140B0C931: btc     [rdx], rbx
 * 0000000140B0C935: sub     ecx, r11d
 * 0000000140B0C938: jz      short loc_140B0C943
 * 0000000140B0C93A: mov     rbx, [rbp+0A70h+var_888]
 * 0000000140B0C941: jmp     short loc_140B0C916
 * 0000000140B0C943: rdtsc
 * 0000000140B0C945: shl     rdx, 20h
 * 0000000140B0C949: or      rax, rdx
 * 0000000140B0C94C: mov     rcx, rax
 * 0000000140B0C94F: ror     rax, 3
 * 0000000140B0C953: xor     rcx, rax
 * 0000000140B0C956: mov     rax, 7010008004002001h
 * 0000000140B0C960: mul     rcx
 * 0000000140B0C963: mov     rcx, rdx
 * 0000000140B0C966: mov     [rbp+0A70h+var_438], rdx
 * 0000000140B0C96D: xor     rcx, rax
 * 0000000140B0C970: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140B0C97A: mul     rcx
 * 0000000140B0C97D: shr     rdx, 1
 * 0000000140B0C980: lea     rax, [rdx+rdx*2]
 * 0000000140B0C984: cmp     rcx, rax
 * 0000000140B0C987: jnz     loc_140B0CA28
 * 0000000140B0C98D: mov     r12d, [rbp+0A70h+var_AD0]
 * 0000000140B0C991: mov     ecx, r9d
 * 0000000140B0C994: mov     r15d, dword ptr [rbp+0A70h+var_AD8]
 * 0000000140B0C998: mov     r10, r9
 * 0000000140B0C99B: mov     rdi, [rbp+0A70h+var_AC0]
 * 0000000140B0C99F: mov     r11d, r13d
 * 0000000140B0C9A2: mov     r13, [rbp+0A70h+var_A80]
 * 0000000140B0C9A6: mov     rbx, r9
 * 0000000140B0C9A9: ror     r10, cl
 * 0000000140B0C9AC: mov     rdx, [rbx]
 * 0000000140B0C9AF: mov     eax, r11d
 * 0000000140B0C9B2: sub     rdx, rax
 * 0000000140B0C9B5: sub     rdx, r9
 * 0000000140B0C9B8: bt      r15d, 9
 * 0000000140B0C9BD: jb      short loc_140B0C9D2
 * 0000000140B0C9BF: xor     rdx, r13
 * 0000000140B0C9C2: mov     ecx, edi
 * 0000000140B0C9C4: bswap   rdx
 * 0000000140B0C9C7: xor     rdx, r10
 * 0000000140B0C9CA: ror     rdx, cl
 * 0000000140B0C9CD: xor     rdx, rdi
 * 0000000140B0C9D0: jmp     short loc_140B0C9D5
 * 0000000140B0C9D2: xor     rdx, r10
 * 0000000140B0C9D5: mov     [rbx], rdx
 * 0000000140B0C9D8: mov     ecx, edx
 * 0000000140B0C9DA: mov     r8d, edx
 * 0000000140B0C9DD: mov     eax, r11d
 * 0000000140B0C9E0: mov     edx, 0C8h
 * 0000000140B0C9E5: not     ecx
 * 0000000140B0C9E7: sub     edx, r11d
 * 0000000140B0C9EA: xor     r8d, 0F29h
 * 0000000140B0C9F1: xor     rdx, rax
 * 0000000140B0C9F4: add     rbx, 8
 * 0000000140B0C9F8: ror     rdx, cl
 * 0000000140B0C9FB: mov     cl, r8b
 * 0000000140B0C9FE: xor     r10, rdx
 * 0000000140B0CA01: mov     edx, 1
 * 0000000140B0CA06: rol     r10, cl
 * 0000000140B0CA09: add     r11d, edx
 * 0000000140B0CA0C: add     r10, r9
 * 0000000140B0CA0F: xor     r10, r12
 * 0000000140B0CA12: cmp     r11d, 19h
 * 0000000140B0CA16: jb      short loc_140B0C9AC
 * 0000000140B0CA18: mov     r14, [rbp+0A70h+var_AF0]
 * 0000000140B0CA1C: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0CA23: xor     r13d, r13d
 * 0000000140B0CA26: jmp     short loc_140B0CA2B
 * 0000000140B0CA28: mov     rdx, r11
 * 0000000140B0CA2B: mov     r15, [r14+8]
 * 0000000140B0CA2F: mov     r10d, [r14+10h]
 * 0000000140B0CA33: mov     r9, r15
 * 0000000140B0CA36: add     [rsi+828h], r10d
 * 0000000140B0CA3D: mov     rax, r15
 * 0000000140B0CA40: mov     r11d, [rsi+814h]
 * 0000000140B0CA47: mov     r12, [rsi+818h]
 * 0000000140B0CA4E: lea     rcx, [r15+r10]
 * 0000000140B0CA52: cmp     r15, rcx
 * 0000000140B0CA55: jnb     short loc_140B0CA68
 * 0000000140B0CA57: mov     r8d, 40h ; '@'
 * 0000000140B0CA5D: prefetchnta byte ptr [rax]
 * 0000000140B0CA60: add     rax, r8
 * 0000000140B0CA63: cmp     rax, rcx
 * 0000000140B0CA66: jb      short loc_140B0CA5D
 * 0000000140B0CA68: mov     ebx, r10d
 * 0000000140B0CA6B: mov     r8, r12
 * 0000000140B0CA6E: shr     ebx, 7
 * 0000000140B0CA71: test    ebx, ebx
 * 0000000140B0CA73: jz      short loc_140B0CAE6
 * 0000000140B0CA75: mov     rdi, 7010008004002001h
 * 0000000140B0CA7F: mov     r14d, 0FFFFFFFFh
 * 0000000140B0CA85: mov     eax, 8
 * 0000000140B0CA8A: xor     r8, [r9]
 * 0000000140B0CA8D: mov     ecx, r11d
 * 0000000140B0CA90: rol     r8, cl
 * 0000000140B0CA93: xor     r8, [r9+8]
 * 0000000140B0CA97: add     r9, 10h
 * 0000000140B0CA9B: rol     r8, cl
 * 0000000140B0CA9E: sub     rax, rdx
 * 0000000140B0CAA1: jnz     short loc_140B0CA8A
 * 0000000140B0CAA3: mov     rcx, r9
 * 0000000140B0CAA6: sub     rcx, r15
 * 0000000140B0CAA9: xor     rcx, r12
 * 0000000140B0CAAC: mov     rax, rcx
 * 0000000140B0CAAF: rol     rax, 11h
 * 0000000140B0CAB3: xor     rcx, rax
 * 0000000140B0CAB6: mov     rax, rdi
 * 0000000140B0CAB9: mul     rcx
 * 0000000140B0CABC: xor     r11d, edx
 * 0000000140B0CABF: mov     [rbp+0A70h+var_430], rdx
 * 0000000140B0CAC6: xor     r11d, eax
 * 0000000140B0CAC9: mov     edx, 1
 * 0000000140B0CACE: and     r11d, 3Fh
 * 0000000140B0CAD2: cmovz   r11d, edx
 * 0000000140B0CAD6: add     ebx, r14d
 * 0000000140B0CAD9: jnz     short loc_140B0CA85
 * 0000000140B0CADB: mov     r14, [rbp+0A70h+var_AF0]
 * 0000000140B0CADF: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0CAE6: and     r10d, 7Fh
 * 0000000140B0CAEA: mov     r12d, 1
 * 0000000140B0CAF0: cmp     r10d, 8
 * 0000000140B0CAF4: jb      short loc_140B0CB13
 * 0000000140B0CAF6: mov     eax, r10d
 * 0000000140B0CAF9: shr     rax, 3
 * 0000000140B0CAFD: xor     r8, [r9]
 * 0000000140B0CB00: mov     ecx, r11d
 * 0000000140B0CB03: rol     r8, cl
 * 0000000140B0CB06: add     r9, 8
 * 0000000140B0CB0A: add     r10d, 0FFFFFFF8h
 * 0000000140B0CB0E: sub     rax, r12
 * 0000000140B0CB11: jnz     short loc_140B0CAFD
 * 0000000140B0CB13: test    r10d, r10d
 * 0000000140B0CB16: jz      short loc_140B0CB37
 * 0000000140B0CB18: mov     r14d, 0FFFFFFFFh
 * 0000000140B0CB1E: movzx   eax, byte ptr [r9]
 * 0000000140B0CB22: mov     ecx, r11d
 * 0000000140B0CB25: xor     r8, rax
 * 0000000140B0CB28: add     r9, r12
 * 0000000140B0CB2B: rol     r8, cl
 * 0000000140B0CB2E: add     r10d, r14d
 * 0000000140B0CB31: jnz     short loc_140B0CB1E
 * 0000000140B0CB33: mov     r14, [rbp+0A70h+var_AF0]
 * 0000000140B0CB37: mov     rax, r8
 * 0000000140B0CB3A: jmp     short loc_140B0CB3F
 * 0000000140B0CB3C: xor     r8d, eax
 * 0000000140B0CB3F: shr     rax, 1Fh
 * 0000000140B0CB43: test    rax, rax
 * 0000000140B0CB46: jnz     short loc_140B0CB3C
 * 0000000140B0CB48: btr     r8d, 1Fh
 * 0000000140B0CB4D: mov     [r14+14h], r8d
 * 0000000140B0CB51: jmp     loc_140B0C457
 * 0000000140B0CB56: mov     r12, rbx
 * 0000000140B0CB59: mov     r8, 7010008004002001h
 * 0000000140B0CB63: jmp     short loc_140B0CB7B
 * 0000000140B0CB65: mov     r8, 7010008004002001h
 * 0000000140B0CB6F: mov     r12d, 1
 * 0000000140B0CB75: mov     r11d, 8000h
 * 0000000140B0CB7B: mov     [rbp+0A70h+var_AE0], r13d
 * 0000000140B0CB7F: mov     [rbp+0A70h+var_AC0], r13
 * 0000000140B0CB83: mov     r13d, [rsi+990h]
 * 0000000140B0CB8A: mov     dword ptr [rbp+0A70h+arg_8], r13d
 * 0000000140B0CB91: bt      r13d, 1Eh
 * 0000000140B0CB96: jb      loc_140B0D687
 * 0000000140B0CB9C: mov     r14, [rbp+0A70h+arg_0]
 * 0000000140B0CBA3: cmp     rsi, r14
 * 0000000140B0CBA6: jnz     loc_140B0D238
 * 0000000140B0CBAC: xor     r15d, r15d
 * 0000000140B0CBAF: test    r11d, r13d
 * 0000000140B0CBB2: jnz     short loc_140B0CBC1
 * 0000000140B0CBB4: cmp     [rsi+8F8h], r15d
 * 0000000140B0CBBB: jnz     loc_140B0CFF0
 * 0000000140B0CBC1: mov     r8d, [r14+924h]
 * 0000000140B0CBC8: mov     rcx, r14
 * 0000000140B0CBCB: mov     edx, [r14+7E4h]
 * 0000000140B0CBD2: call    sub_140B12020
 * 0000000140B0CBD7: mov     rsi, rax
 * 0000000140B0CBDA: test    rax, rax
 * 0000000140B0CBDD: jz      loc_140B0CFF0
 * 0000000140B0CBE3: mov     ecx, [rsi+954h]
 * 0000000140B0CBE9: mov     r12d, [rsi+0A2Ch]
 * 0000000140B0CBF0: mov     rax, [rax+7C8h]
 * 0000000140B0CBF7: add     r12d, 0FFFFFF38h
 * 0000000140B0CBFE: mov     dword ptr [rbp+0A70h+var_AD8], ecx
 * 0000000140B0CC01: mov     ecx, [rsi+990h]
 * 0000000140B0CC07: shr     r12d, 3
 * 0000000140B0CC0B: mov     [rbp+0A70h+var_AD0], ecx
 * 0000000140B0CC0E: mov     rcx, [rsi+4E0h]
 * 0000000140B0CC15: mov     [rbp+0A70h+var_A80], rcx
 * 0000000140B0CC19: mov     rcx, [rsi+5B8h]
 * 0000000140B0CC20: mov     [rsi+0C4h], r12d
 * 0000000140B0CC27: mov     dword ptr [rbp+0A70h+arg_8], r12d
 * 0000000140B0CC2E: mov     r12, 7010008004002001h
 * 0000000140B0CC38: mov     [rbp+0A70h+var_A78], rcx
 * 0000000140B0CC3C: mov     [rbp+0A70h+var_AC0], rax
 * 0000000140B0CC40: rdtsc
 * 0000000140B0CC42: shl     rdx, 20h
 * 0000000140B0CC46: or      rax, rdx
 * 0000000140B0CC49: mov     rcx, rax
 * 0000000140B0CC4C: ror     rax, 3
 * 0000000140B0CC50: xor     rcx, rax
 * 0000000140B0CC53: mov     rax, r12
 * 0000000140B0CC56: mul     rcx
 * 0000000140B0CC59: mov     r11, rdx
 * 0000000140B0CC5C: mov     [rbp+0A70h+var_428], rdx
 * 0000000140B0CC63: xor     r11, rax
 * 0000000140B0CC66: jz      short loc_140B0CC40
 * 0000000140B0CC68: mov     rax, [rsi+7B8h]
 * 0000000140B0CC6F: lea     r14, [rsi+798h]
 * 0000000140B0CC76: mov     r12d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0CC7D: lea     rdx, [rbp+0A70h+var_D0]
 * 0000000140B0CC84: mov     ebx, 20h ; ' '
 * 0000000140B0CC89: mov     [rsp+0B70h+var_AF8], rax
 * 0000000140B0CC8E: mov     eax, [rsi+828h]
 * 0000000140B0CC94: mov     r8d, ebx
 * 0000000140B0CC97: mov     [rbp+0A70h+var_AE0], eax
 * 0000000140B0CC9A: mov     rcx, r14
 * 0000000140B0CC9D: lea     r10d, [rbx-1Ch]
 * 0000000140B0CCA1: mov     r9d, r10d
 * 0000000140B0CCA4: lea     r13d, [rbx-1Fh]
 * 0000000140B0CCA8: mov     rax, [rcx]
 * 0000000140B0CCAB: add     r8d, 0FFFFFFF8h
 * 0000000140B0CCAF: mov     [rdx], rax
 * 0000000140B0CCB2: add     rcx, 8
 * 0000000140B0CCB6: add     rdx, 8
 * 0000000140B0CCBA: sub     r9, r13
 * 0000000140B0CCBD: jnz     short loc_140B0CCA8
 * 0000000140B0CCBF: test    r8d, r8d
 * 0000000140B0CCC2: jz      short loc_140B0CCE0
 * 0000000140B0CCC4: mov     r12d, 0FFFFFFFFh
 * 0000000140B0CCCA: mov     al, [rcx]
 * 0000000140B0CCCC: add     rcx, r13
 * 0000000140B0CCCF: mov     [rdx], al
 * 0000000140B0CCD1: add     rdx, r13
 * 0000000140B0CCD4: add     r8d, r12d
 * 0000000140B0CCD7: jnz     short loc_140B0CCCA
 * 0000000140B0CCD9: mov     r12d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0CCE0: mov     [rsi+7B8h], r15
 * 0000000140B0CCE7: mov     ecx, ebx
 * 0000000140B0CCE9: mov     [rsi+828h], r15d
 * 0000000140B0CCF0: mov     rax, r14
 * 0000000140B0CCF3: mov     rdx, r10
 * 0000000140B0CCF6: mov     [rax], r15
 * 0000000140B0CCF9: add     ecx, 0FFFFFFF8h
 * 0000000140B0CCFC: add     rax, 8
 * 0000000140B0CD00: sub     rdx, r13
 * 0000000140B0CD03: jnz     short loc_140B0CCF6
 * 0000000140B0CD05: mov     edx, 0FFFFFFFFh
 * 0000000140B0CD0A: test    ecx, ecx
 * 0000000140B0CD0C: jz      short loc_140B0CD18
 * 0000000140B0CD0E: mov     [rax], r15b
 * 0000000140B0CD11: add     rax, r13
 * 0000000140B0CD14: add     ecx, edx
 * 0000000140B0CD16: jnz     short loc_140B0CD0E
 * 0000000140B0CD18: mov     r10d, [rsi+7E4h]
 * 0000000140B0CD1F: mov     r9, rsi
 * 0000000140B0CD22: add     [rsi+828h], r10d
 * 0000000140B0CD29: mov     rax, rsi
 * 0000000140B0CD2C: mov     ebx, [rsi+814h]
 * 0000000140B0CD32: mov     r13, [rsi+818h]
 * 0000000140B0CD39: lea     rcx, [rsi+r10]
 * 0000000140B0CD3D: cmp     rsi, rcx
 * 0000000140B0CD40: jnb     short loc_140B0CD53
 * 0000000140B0CD42: mov     r8d, 40h ; '@'
 * 0000000140B0CD48: prefetchnta byte ptr [rax]
 * 0000000140B0CD4B: add     rax, r8
 * 0000000140B0CD4E: cmp     rax, rcx
 * 0000000140B0CD51: jb      short loc_140B0CD48
 * 0000000140B0CD53: mov     r15d, r10d
 * 0000000140B0CD56: mov     r8, r13
 * 0000000140B0CD59: shr     r15d, 7
 * 0000000140B0CD5D: test    r15d, r15d
 * 0000000140B0CD60: jz      short loc_140B0CDD0
 * 0000000140B0CD62: mov     edi, 1
 * 0000000140B0CD67: mov     r12, 7010008004002001h
 * 0000000140B0CD71: mov     eax, 8
 * 0000000140B0CD76: xor     r8, [r9]
 * 0000000140B0CD79: mov     ecx, ebx
 * 0000000140B0CD7B: rol     r8, cl
 * 0000000140B0CD7E: xor     r8, [r9+8]
 * 0000000140B0CD82: add     r9, 10h
 * 0000000140B0CD86: rol     r8, cl
 * 0000000140B0CD89: sub     rax, rdi
 * 0000000140B0CD8C: jnz     short loc_140B0CD76
 * 0000000140B0CD8E: mov     rcx, r9
 * 0000000140B0CD91: sub     rcx, rsi
 * 0000000140B0CD94: xor     rcx, r13
 * 0000000140B0CD97: mov     rax, rcx
 * 0000000140B0CD9A: rol     rax, 11h
 * 0000000140B0CD9E: xor     rcx, rax
 * 0000000140B0CDA1: mov     rax, r12
 * 0000000140B0CDA4: mul     rcx
 * 0000000140B0CDA7: xor     ebx, edx
 * 0000000140B0CDA9: mov     [rbp+0A70h+var_420], rdx
 * 0000000140B0CDB0: xor     ebx, eax
 * 0000000140B0CDB2: mov     edx, 0FFFFFFFFh
 * 0000000140B0CDB7: and     ebx, 3Fh
 * 0000000140B0CDBA: cmovz   ebx, edi
 * 0000000140B0CDBD: add     r15d, edx
 * 0000000140B0CDC0: jnz     short loc_140B0CD71
 * 0000000140B0CDC2: mov     r12d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0CDC9: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0CDD0: and     r10d, 7Fh
 * 0000000140B0CDD4: mov     r15d, 1
 * 0000000140B0CDDA: cmp     r10d, 8
 * 0000000140B0CDDE: jb      short loc_140B0CDFC
 * 0000000140B0CDE0: mov     eax, r10d
 * 0000000140B0CDE3: shr     rax, 3
 * 0000000140B0CDE7: xor     r8, [r9]
 * 0000000140B0CDEA: mov     ecx, ebx
 * 0000000140B0CDEC: rol     r8, cl
 * 0000000140B0CDEF: add     r9, 8
 * 0000000140B0CDF3: add     r10d, 0FFFFFFF8h
 * 0000000140B0CDF7: sub     rax, r15
 * 0000000140B0CDFA: jnz     short loc_140B0CDE7
 * 0000000140B0CDFC: xor     r13d, r13d
 * 0000000140B0CDFF: test    r10d, r10d
 * 0000000140B0CE02: jz      short loc_140B0CE18
 * 0000000140B0CE04: movzx   eax, byte ptr [r9]
 * 0000000140B0CE08: mov     ecx, ebx
 * 0000000140B0CE0A: xor     r8, rax
 * 0000000140B0CE0D: add     r9, r15
 * 0000000140B0CE10: rol     r8, cl
 * 0000000140B0CE13: add     r10d, edx
 * 0000000140B0CE16: jnz     short loc_140B0CE04
 * 0000000140B0CE18: mov     rax, [rsp+0B70h+var_AF8]
 * 0000000140B0CE1D: lea     rcx, [rbp+0A70h+var_D0]
 * 0000000140B0CE24: mov     [rsi+7B8h], rax
 * 0000000140B0CE2B: mov     edx, 4
 * 0000000140B0CE30: mov     eax, [rbp+0A70h+var_AE0]
 * 0000000140B0CE33: add     [rsi+828h], eax
 * 0000000140B0CE39: lea     r9d, [rdx+1Ch]
 * 0000000140B0CE3D: mov     rax, [rcx]
 * 0000000140B0CE40: add     r9d, 0FFFFFFF8h
 * 0000000140B0CE44: mov     [r14], rax
 * 0000000140B0CE47: add     rcx, 8
 * 0000000140B0CE4B: add     r14, 8
 * 0000000140B0CE4F: sub     rdx, r15
 * 0000000140B0CE52: jnz     short loc_140B0CE3D
 * 0000000140B0CE54: test    r9d, r9d
 * 0000000140B0CE57: jz      short loc_140B0CE76
 * 0000000140B0CE59: mov     r12d, 0FFFFFFFFh
 * 0000000140B0CE5F: mov     al, [rcx]
 * 0000000140B0CE61: add     rcx, r15
 * 0000000140B0CE64: mov     [r14], al
 * 0000000140B0CE67: add     r14, r15
 * 0000000140B0CE6A: add     r9d, r12d
 * 0000000140B0CE6D: jnz     short loc_140B0CE5F
 * 0000000140B0CE6F: mov     r12d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0CE76: mov     [rsi+7B8h], r8
 * 0000000140B0CE7D: test    dword ptr [rsi+990h], 40000000h
 * 0000000140B0CE87: jnz     loc_140B0D648
 * 0000000140B0CE8D: mov     rcx, rsi
 * 0000000140B0CE90: mov     eax, r13d
 * 0000000140B0CE93: mov     r10d, 19h
 * 0000000140B0CE99: xor     [rcx], r11
 * 0000000140B0CE9C: add     eax, r15d
 * 0000000140B0CE9F: lea     rcx, [rcx+8]
 * 0000000140B0CEA3: cmp     eax, r10d
 * 0000000140B0CEA6: jb      short loc_140B0CE99
 * 0000000140B0CEA8: mov     [rbp+0A70h+var_950], r11
 * 0000000140B0CEAF: mov     r8d, r12d
 * 0000000140B0CEB2: test    r12d, r12d
 * 0000000140B0CEB5: jz      short loc_140B0CEF2
 * 0000000140B0CEB7: mov     edx, r12d
 * 0000000140B0CEBA: dec     rdx
 * 0000000140B0CEBD: lea     rdx, [rcx+rdx*8]
 * 0000000140B0CEC1: xor     [rdx], r11
 * 0000000140B0CEC4: lea     rax, [rbp+0A70h+var_950]
 * 0000000140B0CECB: mov     ecx, r8d
 * 0000000140B0CECE: lea     rdx, [rdx-8]
 * 0000000140B0CED2: ror     r11, cl
 * 0000000140B0CED5: mov     [rbp+0A70h+var_950], r11
 * 0000000140B0CEDC: and     r11d, 3Fh
 * 0000000140B0CEE0: btc     [rax], r11
 * 0000000140B0CEE4: sub     r8d, r15d
 * 0000000140B0CEE7: jz      short loc_140B0CEF2
 * 0000000140B0CEE9: mov     r11, [rbp+0A70h+var_950]
 * 0000000140B0CEF0: jmp     short loc_140B0CEC1
 * 0000000140B0CEF2: mov     r15d, [rbp+0A70h+var_AD0]
 * 0000000140B0CEF6: bt      r15d, 13h
 * 0000000140B0CEFB: jnb     short loc_140B0CF48
 * 0000000140B0CEFD: rdtsc
 * 0000000140B0CEFF: shl     rdx, 20h
 * 0000000140B0CF03: or      rax, rdx
 * 0000000140B0CF06: mov     rcx, rax
 * 0000000140B0CF09: ror     rax, 3
 * 0000000140B0CF0D: xor     rcx, rax
 * 0000000140B0CF10: mov     rax, 7010008004002001h
 * 0000000140B0CF1A: mul     rcx
 * 0000000140B0CF1D: mov     rcx, rdx
 * 0000000140B0CF20: mov     [rbp+0A70h+var_418], rdx
 * 0000000140B0CF27: xor     rcx, rax
 * 0000000140B0CF2A: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140B0CF34: mul     rcx
 * 0000000140B0CF37: shr     rdx, 1
 * 0000000140B0CF3A: lea     rax, [rdx+rdx*2]
 * 0000000140B0CF3E: cmp     rcx, rax
 * 0000000140B0CF41: jz      short loc_140B0CF53
 * 0000000140B0CF43: jmp     loc_140B0D648
 * 0000000140B0CF48: bt      r15d, 8
 * 0000000140B0CF4D: jb      loc_140B0D648
 * 0000000140B0CF53: mov     r14d, dword ptr [rbp+0A70h+var_AD8]
 * 0000000140B0CF57: mov     ecx, esi
 * 0000000140B0CF59: mov     rdi, [rbp+0A70h+var_A78]
 * 0000000140B0CF5D: mov     r9, rsi
 * 0000000140B0CF60: mov     ebx, r10d
 * 0000000140B0CF63: ror     r9, cl
 * 0000000140B0CF66: mov     r10d, r13d
 * 0000000140B0CF69: mov     r11, rsi
 * 0000000140B0CF6C: mov     r13, [rbp+0A70h+var_A80]
 * 0000000140B0CF70: mov     rdx, [r11]
 * 0000000140B0CF73: mov     eax, r10d
 * 0000000140B0CF76: sub     rdx, rax
 * 0000000140B0CF79: sub     rdx, rsi
 * 0000000140B0CF7C: bt      r15d, 9
 * 0000000140B0CF81: jb      short loc_140B0CF96
 * 0000000140B0CF83: xor     rdx, r13
 * 0000000140B0CF86: mov     ecx, edi
 * 0000000140B0CF88: bswap   rdx
 * 0000000140B0CF8B: xor     rdx, r9
 * 0000000140B0CF8E: ror     rdx, cl
 * 0000000140B0CF91: xor     rdx, rdi
 * 0000000140B0CF94: jmp     short loc_140B0CF99
 * 0000000140B0CF96: xor     rdx, r9
 * 0000000140B0CF99: mov     [r11], rdx
 * 0000000140B0CF9C: mov     ecx, edx
 * 0000000140B0CF9E: mov     r8d, edx
 * 0000000140B0CFA1: mov     eax, r10d
 * 0000000140B0CFA4: xor     r8d, 0F29h
 * 0000000140B0CFAB: mov     edx, 0C8h
 * 0000000140B0CFB0: sub     edx, r10d
 * 0000000140B0CFB3: not     ecx
 * 0000000140B0CFB5: xor     rdx, rax
 * 0000000140B0CFB8: add     r11, 8
 * 0000000140B0CFBC: ror     rdx, cl
 * 0000000140B0CFBF: mov     cl, r8b
 * 0000000140B0CFC2: xor     r9, rdx
 * 0000000140B0CFC5: rol     r9, cl
 * 0000000140B0CFC8: add     r9, rsi
 * 0000000140B0CFCB: xor     r9, r14
 * 0000000140B0CFCE: inc     r10d
 * 0000000140B0CFD1: cmp     r10d, 19h
 * 0000000140B0CFD5: jnz     short loc_140B0CFE6
 * 0000000140B0CFD7: bt      r15d, 13h
 * 0000000140B0CFDC: lea     eax, [r10-19h]
 * 0000000140B0CFE0: cmovnb  eax, r12d
 * 0000000140B0CFE4: add     ebx, eax
 * 0000000140B0CFE6: cmp     r10d, ebx
 * 0000000140B0CFE9: jb      short loc_140B0CF70
 * 0000000140B0CFEB: jmp     loc_140B0D641
 * 0000000140B0CFF0: mov     r11d, 20h ; ' '
 * 0000000140B0CFF6: mov     [r14+0C4h], r12d
 * 0000000140B0CFFD: mov     r12, [r14+7B8h]
 * 0000000140B0D004: lea     rbx, [r14+798h]
 * 0000000140B0D00B: mov     r13d, [r14+828h]
 * 0000000140B0D012: lea     rdx, [rbp+0A70h+var_B0]
 * 0000000140B0D019: mov     [rbp+0A70h+var_A78], r12
 * 0000000140B0D01D: mov     rsi, r14
 * 0000000140B0D020: lea     r10d, [r11-1Ch]
 * 0000000140B0D024: mov     dword ptr [rbp+0A70h+arg_8], r13d
 * 0000000140B0D02B: mov     r9d, r10d
 * 0000000140B0D02E: mov     [rsp+0B70h+var_AF8], rbx
 * 0000000140B0D033: mov     r8d, r11d
 * 0000000140B0D036: lea     r12d, [r11-1Fh]
 * 0000000140B0D03A: mov     rcx, rbx
 * 0000000140B0D03D: mov     rax, [rcx]
 * 0000000140B0D040: add     r8d, 0FFFFFFF8h
 * 0000000140B0D044: mov     [rdx], rax
 * 0000000140B0D047: add     rcx, 8
 * 0000000140B0D04B: add     rdx, 8
 * 0000000140B0D04F: sub     r9, r12
 * 0000000140B0D052: jnz     short loc_140B0D03D
 * 0000000140B0D054: mov     r12, [rbp+0A70h+var_A78]
 * 0000000140B0D058: mov     r9d, 1
 * 0000000140B0D05E: test    r8d, r8d
 * 0000000140B0D061: jz      short loc_140B0D07F
 * 0000000140B0D063: mov     r13d, 0FFFFFFFFh
 * 0000000140B0D069: mov     al, [rcx]
 * 0000000140B0D06B: add     rcx, r9
 * 0000000140B0D06E: mov     [rdx], al
 * 0000000140B0D070: add     rdx, r9
 * 0000000140B0D073: add     r8d, r13d
 * 0000000140B0D076: jnz     short loc_140B0D069
 * 0000000140B0D078: mov     r13d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0D07F: mov     [r14+7B8h], r15
 * 0000000140B0D086: mov     ecx, r11d
 * 0000000140B0D089: mov     [r14+828h], r15d
 * 0000000140B0D090: mov     rax, rbx
 * 0000000140B0D093: mov     rdx, r10
 * 0000000140B0D096: mov     [rax], r15
 * 0000000140B0D099: add     ecx, 0FFFFFFF8h
 * 0000000140B0D09C: add     rax, 8
 * 0000000140B0D0A0: sub     rdx, r9
 * 0000000140B0D0A3: jnz     short loc_140B0D096
 * 0000000140B0D0A5: test    ecx, ecx
 * 0000000140B0D0A7: jz      short loc_140B0D0B8
 * 0000000140B0D0A9: mov     edx, 0FFFFFFFFh
 * 0000000140B0D0AE: mov     [rax], r15b
 * 0000000140B0D0B1: add     rax, r9
 * 0000000140B0D0B4: add     ecx, edx
 * 0000000140B0D0B6: jnz     short loc_140B0D0AE
 * 0000000140B0D0B8: mov     r10d, [r14+7E4h]
 * 0000000140B0D0BF: mov     r9, r14
 * 0000000140B0D0C2: add     [r14+828h], r10d
 * 0000000140B0D0C9: mov     rax, r14
 * 0000000140B0D0CC: mov     r11d, [r14+814h]
 * 0000000140B0D0D3: mov     r15, [r14+818h]
 * 0000000140B0D0DA: lea     rcx, [r14+r10]
 * 0000000140B0D0DE: cmp     r14, rcx
 * 0000000140B0D0E1: jnb     short loc_140B0D0F3
 * 0000000140B0D0E3: mov     edx, 40h ; '@'
 * 0000000140B0D0E8: prefetchnta byte ptr [rax]
 * 0000000140B0D0EB: add     rax, rdx
 * 0000000140B0D0EE: cmp     rax, rcx
 * 0000000140B0D0F1: jb      short loc_140B0D0E8
 * 0000000140B0D0F3: mov     r14d, r10d
 * 0000000140B0D0F6: mov     r8, r15
 * 0000000140B0D0F9: shr     r14d, 7
 * 0000000140B0D0FD: test    r14d, r14d
 * 0000000140B0D100: jz      loc_140B0D18B
 * 0000000140B0D106: mov     rdi, [rbp+0A70h+arg_0]
 * 0000000140B0D10D: mov     rbx, 7010008004002001h
 * 0000000140B0D117: mov     r12d, 1
 * 0000000140B0D11D: mov     r13d, 0FFFFFFFFh
 * 0000000140B0D123: mov     eax, 8
 * 0000000140B0D128: xor     r8, [r9]
 * 0000000140B0D12B: mov     ecx, r11d
 * 0000000140B0D12E: rol     r8, cl
 * 0000000140B0D131: xor     r8, [r9+8]
 * 0000000140B0D135: add     r9, 10h
 * 0000000140B0D139: rol     r8, cl
 * 0000000140B0D13C: sub     rax, r12
 * 0000000140B0D13F: jnz     short loc_140B0D128
 * 0000000140B0D141: mov     rcx, r9
 * 0000000140B0D144: sub     rcx, rdi
 * 0000000140B0D147: xor     rcx, r15
 * 0000000140B0D14A: mov     rax, rcx
 * 0000000140B0D14D: rol     rax, 11h
 * 0000000140B0D151: xor     rcx, rax
 * 0000000140B0D154: mov     rax, rbx
 * 0000000140B0D157: mul     rcx
 * 0000000140B0D15A: xor     r11d, edx
 * 0000000140B0D15D: mov     [rbp+0A70h+var_410], rdx
 * 0000000140B0D164: xor     r11d, eax
 * 0000000140B0D167: and     r11d, 3Fh
 * 0000000140B0D16B: cmovz   r11d, r12d
 * 0000000140B0D16F: add     r14d, r13d
 * 0000000140B0D172: jnz     short loc_140B0D123
 * 0000000140B0D174: mov     rbx, [rsp+0B70h+var_AF8]
 * 0000000140B0D179: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0D180: mov     r12, [rbp+0A70h+var_A78]
 * 0000000140B0D184: mov     r13d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0D18B: and     r10d, 7Fh
 * 0000000140B0D18F: mov     r14d, 1
 * 0000000140B0D195: cmp     r10d, 8
 * 0000000140B0D199: jb      short loc_140B0D1B8
 * 0000000140B0D19B: mov     eax, r10d
 * 0000000140B0D19E: shr     rax, 3
 * 0000000140B0D1A2: xor     r8, [r9]
 * 0000000140B0D1A5: mov     ecx, r11d
 * 0000000140B0D1A8: rol     r8, cl
 * 0000000140B0D1AB: add     r9, 8
 * 0000000140B0D1AF: add     r10d, 0FFFFFFF8h
 * 0000000140B0D1B3: sub     rax, r14
 * 0000000140B0D1B6: jnz     short loc_140B0D1A2
 * 0000000140B0D1B8: mov     r15d, 0FFFFFFFFh
 * 0000000140B0D1BE: test    r10d, r10d
 * 0000000140B0D1C1: jz      short loc_140B0D1D8
 * 0000000140B0D1C3: movzx   eax, byte ptr [r9]
 * 0000000140B0D1C7: mov     ecx, r11d
 * 0000000140B0D1CA: xor     r8, rax
 * 0000000140B0D1CD: add     r9, r14
 * 0000000140B0D1D0: rol     r8, cl
 * 0000000140B0D1D3: add     r10d, r15d
 * 0000000140B0D1D6: jnz     short loc_140B0D1C3
 * 0000000140B0D1D8: mov     r9, [rbp+0A70h+arg_0]
 * 0000000140B0D1DF: lea     rcx, [rbp+0A70h+var_B0]
 * 0000000140B0D1E6: mov     edx, 4
 * 0000000140B0D1EB: mov     [r9+7B8h], r12
 * 0000000140B0D1F2: add     [r9+828h], r13d
 * 0000000140B0D1F9: lea     r12d, [rdx-3]
 * 0000000140B0D1FD: lea     r10d, [rdx+1Ch]
 * 0000000140B0D201: mov     rax, [rcx]
 * 0000000140B0D204: add     r10d, 0FFFFFFF8h
 * 0000000140B0D208: mov     [rbx], rax
 * 0000000140B0D20B: add     rcx, 8
 * 0000000140B0D20F: add     rbx, 8
 * 0000000140B0D213: sub     rdx, r12
 * 0000000140B0D216: jnz     short loc_140B0D201
 * 0000000140B0D218: test    r10d, r10d
 * 0000000140B0D21B: jz      short loc_140B0D22C
 * 0000000140B0D21D: mov     al, [rcx]
 * 0000000140B0D21F: add     rcx, r12
 * 0000000140B0D222: mov     [rbx], al
 * 0000000140B0D224: add     rbx, r12
 * 0000000140B0D227: add     r10d, r15d
 * 0000000140B0D22A: jnz     short loc_140B0D21D
 * 0000000140B0D22C: mov     [r9+7B8h], r8
 * 0000000140B0D233: jmp     loc_140B0D689
 * 0000000140B0D238: mov     ecx, [rsi+954h]
 * 0000000140B0D23E: mov     r12d, [rsi+0A2Ch]
 * 0000000140B0D245: mov     rax, [rsi+7C8h]
 * 0000000140B0D24C: add     r12d, 0FFFFFF38h
 * 0000000140B0D253: mov     dword ptr [rbp+0A70h+var_AD8], ecx
 * 0000000140B0D256: mov     rcx, [rsi+4E0h]
 * 0000000140B0D25D: shr     r12d, 3
 * 0000000140B0D261: mov     [rbp+0A70h+var_AA8], rcx
 * 0000000140B0D265: mov     rcx, [rsi+5B8h]
 * 0000000140B0D26C: mov     [rbp+0A70h+var_A80], rcx
 * 0000000140B0D270: mov     [rbp+0A70h+var_AC0], rax
 * 0000000140B0D274: mov     [rbp+0A70h+var_AE0], r12d
 * 0000000140B0D278: mov     [rsi+0C4h], r12d
 * 0000000140B0D27F: rdtsc
 * 0000000140B0D281: shl     rdx, 20h
 * 0000000140B0D285: or      rax, rdx
 * 0000000140B0D288: mov     rcx, rax
 * 0000000140B0D28B: ror     rax, 3
 * 0000000140B0D28F: xor     rcx, rax
 * 0000000140B0D292: mov     rax, r8
 * 0000000140B0D295: mul     rcx
 * 0000000140B0D298: mov     r11, rdx
 * 0000000140B0D29B: mov     [rbp+0A70h+var_408], rdx
 * 0000000140B0D2A2: xor     r11, rax
 * 0000000140B0D2A5: jz      short loc_140B0D27F
 * 0000000140B0D2A7: mov     rax, [rsi+7B8h]
 * 0000000140B0D2AE: lea     r14, [rsi+798h]
 * 0000000140B0D2B5: mov     ebx, 20h ; ' '
 * 0000000140B0D2BA: mov     [rbp+0A70h+var_A78], rax
 * 0000000140B0D2BE: mov     eax, [rsi+828h]
 * 0000000140B0D2C4: lea     rdx, [rbp+0A70h+var_90]
 * 0000000140B0D2CB: mov     [rbp+0A70h+var_AD0], eax
 * 0000000140B0D2CE: mov     r8d, ebx
 * 0000000140B0D2D1: mov     rcx, r14
 * 0000000140B0D2D4: lea     r10d, [rbx-1Ch]
 * 0000000140B0D2D8: mov     r9d, r10d
 * 0000000140B0D2DB: lea     r15d, [rbx-1Fh]
 * 0000000140B0D2DF: mov     rax, [rcx]
 * 0000000140B0D2E2: add     r8d, 0FFFFFFF8h
 * 0000000140B0D2E6: mov     [rdx], rax
 * 0000000140B0D2E9: add     rcx, 8
 * 0000000140B0D2ED: add     rdx, 8
 * 0000000140B0D2F1: sub     r9, r15
 * 0000000140B0D2F4: jnz     short loc_140B0D2DF
 * 0000000140B0D2F6: test    r8d, r8d
 * 0000000140B0D2F9: jz      short loc_140B0D317
 * 0000000140B0D2FB: mov     r13d, 0FFFFFFFFh
 * 0000000140B0D301: mov     al, [rcx]
 * 0000000140B0D303: add     rcx, r15
 * 0000000140B0D306: mov     [rdx], al
 * 0000000140B0D308: add     rdx, r15
 * 0000000140B0D30B: add     r8d, r13d
 * 0000000140B0D30E: jnz     short loc_140B0D301
 * 0000000140B0D310: mov     r13d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0D317: mov     [rsi+7B8h], r9
 * 0000000140B0D31E: mov     ecx, ebx
 * 0000000140B0D320: mov     [rsi+828h], r9d
 * 0000000140B0D327: mov     rax, r14
 * 0000000140B0D32A: mov     rdx, r10
 * 0000000140B0D32D: mov     [rax], r9
 * 0000000140B0D330: add     ecx, 0FFFFFFF8h
 * 0000000140B0D333: add     rax, 8
 * 0000000140B0D337: sub     rdx, r15
 * 0000000140B0D33A: jnz     short loc_140B0D32D
 * 0000000140B0D33C: test    ecx, ecx
 * 0000000140B0D33E: jz      short loc_140B0D34F
 * 0000000140B0D340: mov     edx, 0FFFFFFFFh
 * 0000000140B0D345: mov     [rax], r9b
 * 0000000140B0D348: add     rax, r15
 * 0000000140B0D34B: add     ecx, edx
 * 0000000140B0D34D: jnz     short loc_140B0D345
 * 0000000140B0D34F: mov     r10d, [rsi+7E4h]
 * 0000000140B0D356: mov     r9, rsi
 * 0000000140B0D359: add     [rsi+828h], r10d
 * 0000000140B0D360: mov     rax, rsi
 * 0000000140B0D363: mov     ebx, [rsi+814h]
 * 0000000140B0D369: mov     r8, [rsi+818h]
 * 0000000140B0D370: lea     rcx, [rsi+r10]
 * 0000000140B0D374: cmp     rsi, rcx
 * 0000000140B0D377: jnb     short loc_140B0D389
 * 0000000140B0D379: mov     edx, 40h ; '@'
 * 0000000140B0D37E: prefetchnta byte ptr [rax]
 * 0000000140B0D381: add     rax, rdx
 * 0000000140B0D384: cmp     rax, rcx
 * 0000000140B0D387: jb      short loc_140B0D37E
 * 0000000140B0D389: mov     r15d, r10d
 * 0000000140B0D38C: mov     edx, 1
 * 0000000140B0D391: shr     r15d, 7
 * 0000000140B0D395: test    r15d, r15d
 * 0000000140B0D398: jz      short loc_140B0D417
 * 0000000140B0D39A: mov     rdi, r8
 * 0000000140B0D39D: mov     r12d, 0FFFFFFFFh
 * 0000000140B0D3A3: mov     r14, 7010008004002001h
 * 0000000140B0D3AD: mov     eax, 8
 * 0000000140B0D3B2: xor     r8, [r9]
 * 0000000140B0D3B5: mov     ecx, ebx
 * 0000000140B0D3B7: rol     r8, cl
 * 0000000140B0D3BA: xor     r8, [r9+8]
 * 0000000140B0D3BE: add     r9, 10h
 * 0000000140B0D3C2: rol     r8, cl
 * 0000000140B0D3C5: sub     rax, rdx
 * 0000000140B0D3C8: jnz     short loc_140B0D3B2
 * 0000000140B0D3CA: mov     rcx, r9
 * 0000000140B0D3CD: sub     rcx, rsi
 * 0000000140B0D3D0: xor     rcx, rdi
 * 0000000140B0D3D3: mov     rax, rcx
 * 0000000140B0D3D6: rol     rax, 11h
 * 0000000140B0D3DA: xor     rcx, rax
 * 0000000140B0D3DD: mov     rax, r14
 * 0000000140B0D3E0: mul     rcx
 * 0000000140B0D3E3: xor     ebx, edx
 * 0000000140B0D3E5: mov     [rbp+0A70h+var_400], rdx
 * 0000000140B0D3EC: xor     ebx, eax
 * 0000000140B0D3EE: mov     edx, 1
 * 0000000140B0D3F3: and     ebx, 3Fh
 * 0000000140B0D3F6: cmovz   ebx, edx
 * 0000000140B0D3F9: add     r15d, r12d
 * 0000000140B0D3FC: jnz     short loc_140B0D3AD
 * 0000000140B0D3FE: mov     r12d, [rbp+0A70h+var_AE0]
 * 0000000140B0D402: lea     r14, [rsi+798h]
 * 0000000140B0D409: mov     r13d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0D410: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0D417: and     r10d, 7Fh
 * 0000000140B0D41B: cmp     r10d, 8
 * 0000000140B0D41F: jb      short loc_140B0D43D
 * 0000000140B0D421: mov     eax, r10d
 * 0000000140B0D424: shr     rax, 3
 * 0000000140B0D428: xor     r8, [r9]
 * 0000000140B0D42B: mov     ecx, ebx
 * 0000000140B0D42D: rol     r8, cl
 * 0000000140B0D430: add     r9, 8
 * 0000000140B0D434: add     r10d, 0FFFFFFF8h
 * 0000000140B0D438: sub     rax, rdx
 * 0000000140B0D43B: jnz     short loc_140B0D428
 * 0000000140B0D43D: xor     r15d, r15d
 * 0000000140B0D440: test    r10d, r10d
 * 0000000140B0D443: jz      short loc_140B0D466
 * 0000000140B0D445: mov     r13d, 0FFFFFFFFh
 * 0000000140B0D44B: movzx   eax, byte ptr [r9]
 * 0000000140B0D44F: mov     ecx, ebx
 * 0000000140B0D451: xor     r8, rax
 * 0000000140B0D454: add     r9, rdx
 * 0000000140B0D457: rol     r8, cl
 * 0000000140B0D45A: add     r10d, r13d
 * 0000000140B0D45D: jnz     short loc_140B0D44B
 * 0000000140B0D45F: mov     r13d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0D466: mov     rax, [rbp+0A70h+var_A78]
 * 0000000140B0D46A: lea     rcx, [rbp+0A70h+var_90]
 * 0000000140B0D471: mov     edx, 4
 * 0000000140B0D476: mov     [rsi+7B8h], rax
 * 0000000140B0D47D: mov     eax, [rbp+0A70h+var_AD0]
 * 0000000140B0D480: add     [rsi+828h], eax
 * 0000000140B0D486: lea     ebx, [rdx-3]
 * 0000000140B0D489: lea     r9d, [rdx+1Ch]
 * 0000000140B0D48D: mov     rax, [rcx]
 * 0000000140B0D490: add     r9d, 0FFFFFFF8h
 * 0000000140B0D494: mov     [r14], rax
 * 0000000140B0D497: add     rcx, 8
 * 0000000140B0D49B: add     r14, 8
 * 0000000140B0D49F: sub     rdx, rbx
 * 0000000140B0D4A2: jnz     short loc_140B0D48D
 * 0000000140B0D4A4: test    r9d, r9d
 * 0000000140B0D4A7: jz      short loc_140B0D4C6
 * 0000000140B0D4A9: mov     r13d, 0FFFFFFFFh
 * 0000000140B0D4AF: mov     al, [rcx]
 * 0000000140B0D4B1: add     rcx, rbx
 * 0000000140B0D4B4: mov     [r14], al
 * 0000000140B0D4B7: add     r14, rbx
 * 0000000140B0D4BA: add     r9d, r13d
 * 0000000140B0D4BD: jnz     short loc_140B0D4AF
 * 0000000140B0D4BF: mov     r13d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0D4C6: mov     [rsi+7B8h], r8
 * 0000000140B0D4CD: test    dword ptr [rsi+990h], 40000000h
 * 0000000140B0D4D7: jnz     loc_140B0D648
 * 0000000140B0D4DD: mov     rcx, rsi
 * 0000000140B0D4E0: mov     eax, r15d
 * 0000000140B0D4E3: mov     r10d, 19h
 * 0000000140B0D4E9: xor     [rcx], r11
 * 0000000140B0D4EC: add     eax, ebx
 * 0000000140B0D4EE: lea     rcx, [rcx+8]
 * 0000000140B0D4F2: cmp     eax, r10d
 * 0000000140B0D4F5: jb      short loc_140B0D4E9
 * 0000000140B0D4F7: mov     [rbp+0A70h+var_930], r11
 * 0000000140B0D4FE: mov     r8d, r12d
 * 0000000140B0D501: test    r12d, r12d
 * 0000000140B0D504: jz      short loc_140B0D541
 * 0000000140B0D506: mov     edx, r12d
 * 0000000140B0D509: dec     rdx
 * 0000000140B0D50C: lea     rdx, [rcx+rdx*8]
 * 0000000140B0D510: xor     [rdx], r11
 * 0000000140B0D513: lea     rax, [rbp+0A70h+var_930]
 * 0000000140B0D51A: mov     ecx, r8d
 * 0000000140B0D51D: lea     rdx, [rdx-8]
 * 0000000140B0D521: ror     r11, cl
 * 0000000140B0D524: mov     [rbp+0A70h+var_930], r11
 * 0000000140B0D52B: and     r11d, 3Fh
 * 0000000140B0D52F: btc     [rax], r11
 * 0000000140B0D533: sub     r8d, ebx
 * 0000000140B0D536: jz      short loc_140B0D541
 * 0000000140B0D538: mov     r11, [rbp+0A70h+var_930]
 * 0000000140B0D53F: jmp     short loc_140B0D510
 * 0000000140B0D541: bt      r13d, 13h
 * 0000000140B0D546: jnb     short loc_140B0D593
 * 0000000140B0D548: rdtsc
 * 0000000140B0D54A: shl     rdx, 20h
 * 0000000140B0D54E: or      rax, rdx
 * 0000000140B0D551: mov     rcx, rax
 * 0000000140B0D554: ror     rax, 3
 * 0000000140B0D558: xor     rcx, rax
 * 0000000140B0D55B: mov     rax, 7010008004002001h
 * 0000000140B0D565: mul     rcx
 * 0000000140B0D568: mov     rcx, rdx
 * 0000000140B0D56B: mov     [rbp+0A70h+var_3F8], rdx
 * 0000000140B0D572: xor     rcx, rax
 * 0000000140B0D575: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140B0D57F: mul     rcx
 * 0000000140B0D582: shr     rdx, 1
 * 0000000140B0D585: lea     rax, [rdx+rdx*2]
 * 0000000140B0D589: cmp     rcx, rax
 * 0000000140B0D58C: jz      short loc_140B0D59E
 * 0000000140B0D58E: jmp     loc_140B0D648
 * 0000000140B0D593: bt      r13d, 8
 * 0000000140B0D598: jb      loc_140B0D648
 * 0000000140B0D59E: mov     r14d, dword ptr [rbp+0A70h+var_AD8]
 * 0000000140B0D5A2: mov     ecx, esi
 * 0000000140B0D5A4: mov     rdi, [rbp+0A70h+var_AA8]
 * 0000000140B0D5A8: mov     r9, rsi
 * 0000000140B0D5AB: mov     ebx, r10d
 * 0000000140B0D5AE: ror     r9, cl
 * 0000000140B0D5B1: mov     r10d, r15d
 * 0000000140B0D5B4: mov     r11, rsi
 * 0000000140B0D5B7: mov     r15, [rbp+0A70h+var_A80]
 * 0000000140B0D5BB: mov     rcx, [r11]
 * 0000000140B0D5BE: mov     eax, r10d
 * 0000000140B0D5C1: sub     rcx, rax
 * 0000000140B0D5C4: sub     rcx, rsi
 * 0000000140B0D5C7: bt      r13d, 9
 * 0000000140B0D5CC: jb      short loc_140B0D5E5
 * 0000000140B0D5CE: mov     rax, rdi
 * 0000000140B0D5D1: xor     rax, rcx
 * 0000000140B0D5D4: mov     ecx, r15d
 * 0000000140B0D5D7: bswap   rax
 * 0000000140B0D5DA: xor     rax, r9
 * 0000000140B0D5DD: ror     rax, cl
 * 0000000140B0D5E0: xor     rax, r15
 * 0000000140B0D5E3: jmp     short loc_140B0D5EB
 * 0000000140B0D5E5: mov     rax, r9
 * 0000000140B0D5E8: xor     rax, rcx
 * 0000000140B0D5EB: mov     edx, 0C8h
 * 0000000140B0D5F0: mov     [r11], rax
 * 0000000140B0D5F3: sub     edx, r10d
 * 0000000140B0D5F6: mov     ecx, eax
 * 0000000140B0D5F8: mov     r8d, eax
 * 0000000140B0D5FB: not     ecx
 * 0000000140B0D5FD: xor     r8d, 0F29h
 * 0000000140B0D604: mov     eax, r10d
 * 0000000140B0D607: xor     rdx, rax
 * 0000000140B0D60A: add     r11, 8
 * 0000000140B0D60E: ror     rdx, cl
 * 0000000140B0D611: mov     cl, r8b
 * 0000000140B0D614: xor     r9, rdx
 * 0000000140B0D617: rol     r9, cl
 * 0000000140B0D61A: add     r9, rsi
 * 0000000140B0D61D: xor     r9, r14
 * 0000000140B0D620: inc     r10d
 * 0000000140B0D623: cmp     r10d, 19h
 * 0000000140B0D627: jnz     short loc_140B0D638
 * 0000000140B0D629: bt      r13d, 13h
 * 0000000140B0D62E: lea     eax, [r10-19h]
 * 0000000140B0D632: cmovnb  eax, r12d
 * 0000000140B0D636: add     ebx, eax
 * 0000000140B0D638: cmp     r10d, ebx
 * 0000000140B0D63B: jb      loc_140B0D5BB
 * 0000000140B0D641: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0D648: rdtsc
 * 0000000140B0D64A: shl     rdx, 20h
 * 0000000140B0D64E: mov     r10, 7010008004002001h
 * 0000000140B0D658: or      rax, rdx
 * 0000000140B0D65B: mov     r12d, 1
 * 0000000140B0D661: mov     rcx, rax
 * 0000000140B0D664: mov     [rbp+0A70h+var_AE0], r12d
 * 0000000140B0D668: ror     rax, 3
 * 0000000140B0D66C: xor     rcx, rax
 * 0000000140B0D66F: mov     rax, r10
 * 0000000140B0D672: mul     rcx
 * 0000000140B0D675: mov     r15, rax
 * 0000000140B0D678: mov     [rbp+0A70h+var_3F0], rdx
 * 0000000140B0D67F: xor     r15, rdx
 * 0000000140B0D682: jmp     loc_140B0D765
 * 0000000140B0D687: xor     edx, edx
 * 0000000140B0D689: mov     r14d, [rsi+990h]
 * 0000000140B0D690: mov     r15, rdx
 * 0000000140B0D693: bt      r14d, 1Eh
 * 0000000140B0D698: jb      loc_140B0D75B
 * 0000000140B0D69E: bt      r14d, 8
 * 0000000140B0D6A3: jb      loc_140B0D748
 * 0000000140B0D6A9: mov     eax, [rsi+954h]
 * 0000000140B0D6AF: mov     ecx, esi
 * 0000000140B0D6B1: mov     r12, [rsi+5B8h]
 * 0000000140B0D6B8: mov     r9, rsi
 * 0000000140B0D6BB: mov     r13, [rsi+4E0h]
 * 0000000140B0D6C2: mov     r10, rsi
 * 0000000140B0D6C5: ror     r9, cl
 * 0000000140B0D6C8: mov     ebx, edx
 * 0000000140B0D6CA: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B0D6D1: mov     r11, rdx
 * 0000000140B0D6D4: mov     rcx, [r10]
 * 0000000140B0D6D7: sub     rcx, rsi
 * 0000000140B0D6DA: sub     rcx, r11
 * 0000000140B0D6DD: bt      r14d, 9
 * 0000000140B0D6E2: jb      short loc_140B0D6FB
 * 0000000140B0D6E4: mov     rax, r13
 * 0000000140B0D6E7: xor     rax, rcx
 * 0000000140B0D6EA: mov     ecx, r12d
 * 0000000140B0D6ED: bswap   rax
 * 0000000140B0D6F0: xor     rax, r9
 * 0000000140B0D6F3: ror     rax, cl
 * 0000000140B0D6F6: xor     rax, r12
 * 0000000140B0D6F9: jmp     short loc_140B0D701
 * 0000000140B0D6FB: mov     rax, r9
 * 0000000140B0D6FE: xor     rax, rcx
 * 0000000140B0D701: mov     [r10], rax
 * 0000000140B0D704: mov     edx, 0C8h
 * 0000000140B0D709: sub     edx, ebx
 * 0000000140B0D70B: mov     ecx, eax
 * 0000000140B0D70D: xor     rdx, r11
 * 0000000140B0D710: mov     r8d, eax
 * 0000000140B0D713: not     ecx
 * 0000000140B0D715: xor     r8d, 0F29h
 * 0000000140B0D71C: ror     rdx, cl
 * 0000000140B0D71F: mov     eax, 1
 * 0000000140B0D724: xor     r9, rdx
 * 0000000140B0D727: mov     cl, r8b
 * 0000000140B0D72A: rol     r9, cl
 * 0000000140B0D72D: add     r10, 8
 * 0000000140B0D731: add     r9, rsi
 * 0000000140B0D734: add     ebx, eax
 * 0000000140B0D736: xor     r9, [rbp+0A70h+arg_8]
 * 0000000140B0D73D: add     r11, rax
 * 0000000140B0D740: cmp     ebx, 19h
 * 0000000140B0D743: jb      short loc_140B0D6D4
 * 0000000140B0D745: mov     r12d, eax
 * 0000000140B0D748: mov     rax, [rsi+268h]
 * 0000000140B0D74F: lea     rcx, [rsi+800h]
 * 0000000140B0D756: call    KeGuardDispatchICall
 * 0000000140B0D75B: mov     r10, 7010008004002001h
 * 0000000140B0D765: mov     r11, [rbp+0A70h+arg_0]
 * 0000000140B0D76C: test    dword ptr [r11+990h], 10000000h
 * 0000000140B0D777: mov     r14, [r11+7D8h]
 * 0000000140B0D77E: jz      short loc_140B0D7B5
 * 0000000140B0D780: rdtsc
 * 0000000140B0D782: shl     rdx, 20h
 * 0000000140B0D786: or      rax, rdx
 * 0000000140B0D789: mov     rcx, rax
 * 0000000140B0D78C: ror     rax, 3
 * 0000000140B0D790: xor     rcx, rax
 * 0000000140B0D793: mov     rax, r10
 * 0000000140B0D796: mul     rcx
 * 0000000140B0D799: mov     r14, rdx
 * 0000000140B0D79C: mov     [rbp+0A70h+var_2E0], rdx
 * 0000000140B0D7A3: xor     r14, rax
 * 0000000140B0D7A6: and     r14, 0Fh
 * 0000000140B0D7AA: shl     r14, 4
 * 0000000140B0D7AE: add     r14, [r11+5C8h]
 * 0000000140B0D7B5: mov     r8d, 28h ; '('
 * 0000000140B0D7BB: lea     rbx, [r11+8F8h]
 * 0000000140B0D7C2: mov     rcx, rbx
 * 0000000140B0D7C5: lea     rdx, [rbp+0A70h+var_6F0]
 * 0000000140B0D7CC: lea     r9d, [r8-23h]
 * 0000000140B0D7D0: mov     rax, [rcx]
 * 0000000140B0D7D3: add     r8d, 0FFFFFFF8h
 * 0000000140B0D7D7: mov     [rdx], rax
 * 0000000140B0D7DA: add     rcx, 8
 * 0000000140B0D7DE: add     rdx, 8
 * 0000000140B0D7E2: sub     r9, r12
 * 0000000140B0D7E5: jnz     short loc_140B0D7D0
 * 0000000140B0D7E7: xor     r13d, r13d
 * 0000000140B0D7EA: test    r8d, r8d
 * 0000000140B0D7ED: jz      short loc_140B0D80B
 * 0000000140B0D7EF: mov     r11d, 0FFFFFFFFh
 * 0000000140B0D7F5: mov     al, [rcx]
 * 0000000140B0D7F7: add     rcx, r12
 * 0000000140B0D7FA: mov     [rdx], al
 * 0000000140B0D7FC: add     rdx, r12
 * 0000000140B0D7FF: add     r8d, r11d
 * 0000000140B0D802: jnz     short loc_140B0D7F5
 * 0000000140B0D804: mov     r11, [rbp+0A70h+arg_0]
 * 0000000140B0D80B: mov     eax, [r11+990h]
 * 0000000140B0D812: mov     ecx, 8000h
 * 0000000140B0D817: test    ecx, eax
 * 0000000140B0D819: jnz     short loc_140B0D824
 * 0000000140B0D81B: cmp     [rbx], r13d
 * 0000000140B0D81E: jnz     loc_140B0DE81
 * 0000000140B0D824: bt      eax, 1Eh
 * 0000000140B0D828: jb      loc_140B0E048
 * 0000000140B0D82E: mov     al, [r11+920h]
 * 0000000140B0D835: mov     r8, r15
 * 0000000140B0D838: sub     al, r12b
 * 0000000140B0D83B: xor     r8, rsi
 * 0000000140B0D83E: movzx   r10d, al
 * 0000000140B0D842: mov     r11d, 3Fh ; '?'
 * 0000000140B0D848: sub     r11d, r10d
 * 0000000140B0D84B: rdtsc
 * 0000000140B0D84D: shl     rdx, 20h
 * 0000000140B0D851: mov     rsi, 7010008004002001h
 * 0000000140B0D85B: or      rax, rdx
 * 0000000140B0D85E: mov     rcx, rax
 * 0000000140B0D861: ror     rax, 3
 * 0000000140B0D865: xor     rcx, rax
 * 0000000140B0D868: mov     rax, rsi
 * 0000000140B0D86B: mul     rcx
 * 0000000140B0D86E: mov     [rbp+0A70h+var_3E0], rdx
 * 0000000140B0D875: xor     rax, rdx
 * 0000000140B0D878: xor     edx, edx
 * 0000000140B0D87A: div     r11
 * 0000000140B0D87D: lea     r9d, [r10+rdx]
 * 0000000140B0D881: rdtsc
 * 0000000140B0D883: shl     rdx, 20h
 * 0000000140B0D887: or      rax, rdx
 * 0000000140B0D88A: mov     rcx, rax
 * 0000000140B0D88D: ror     rax, 3
 * 0000000140B0D891: xor     rcx, rax
 * 0000000140B0D894: mov     rax, rsi
 * 0000000140B0D897: mul     rcx
 * 0000000140B0D89A: xor     rax, rdx
 * 0000000140B0D89D: mov     [rbp+0A70h+var_3D8], rdx
 * 0000000140B0D8A4: xor     edx, edx
 * 0000000140B0D8A6: div     r11
 * 0000000140B0D8A9: add     edx, r10d
 * 0000000140B0D8AC: cmp     edx, r9d
 * 0000000140B0D8AF: jz      short loc_140B0D881
 * 0000000140B0D8B1: mov     r11, [rbp+0A70h+arg_0]
 * 0000000140B0D8B8: mov     eax, r9d
 * 0000000140B0D8BB: bts     r8, rax
 * 0000000140B0D8BF: mov     eax, edx
 * 0000000140B0D8C1: btr     r8, rax
 * 0000000140B0D8C5: cmp     dword ptr [r11+924h], 3
 * 0000000140B0D8CD: mov     rsi, [r11+790h]
 * 0000000140B0D8D4: mov     r12, [r11+788h]
 * 0000000140B0D8DB: jnz     loc_140B0DA6B
 * 0000000140B0D8E1: mov     r13, [rbp+0A70h+var_AC0]
 * 0000000140B0D8E5: xor     ecx, ecx
 * 0000000140B0D8E7: test    r13, r13
 * 0000000140B0D8EA: jz      loc_140B0DA6B
 * 0000000140B0D8F0: mov     rax, [r11+370h]
 * 0000000140B0D8F7: lea     edx, [rcx+1]
 * 0000000140B0D8FA: mov     byte ptr [rsi], 13h
 * 0000000140B0D8FD: mov     [rsi+1], dl
 * 0000000140B0D900: mov     [rsi+2], cx
 * 0000000140B0D904: mov     [rsi+18h], rax
 * 0000000140B0D908: mov     [rsi+20h], r13
 * 0000000140B0D90C: mov     [rsi+38h], rcx
 * 0000000140B0D910: mov     [rsi+10h], rcx
 * 0000000140B0D914: mov     [rsi+28h], r8
 * 0000000140B0D918: mov     rax, [r11+360h]
 * 0000000140B0D91F: mov     r8, [r13+0]
 * 0000000140B0D923: mov     edx, [r13+10h]
 * 0000000140B0D927: mov     rcx, [r13+8]
 * 0000000140B0D92B: call    KeGuardDispatchICall
 * 0000000140B0D930: mov     r9, [r13+0]
 * 0000000140B0D934: mov     rcx, r13
 * 0000000140B0D937: rol     rcx, 11h
 * 0000000140B0D93B: mov     rax, 7010008004002001h
 * 0000000140B0D945: xor     rcx, r13
 * 0000000140B0D948: mov     r10d, 4
 * 0000000140B0D94E: mul     rcx
 * 0000000140B0D951: lea     r11d, [r10-3]
 * 0000000140B0D955: mov     [rbp+0A70h+var_3D0], rdx
 * 0000000140B0D95C: xor     rdx, rax
 * 0000000140B0D95F: lea     rax, [r13+18h]
 * 0000000140B0D963: mov     r8, rdx
 * 0000000140B0D966: xor     r13d, r13d
 * 0000000140B0D969: xor     [rax], r8
 * 0000000140B0D96C: mov     ecx, r10d
 * 0000000140B0D96F: rol     r8, cl
 * 0000000140B0D972: lea     rax, [rax-8]
 * 0000000140B0D976: sub     r10d, r11d
 * 0000000140B0D979: jnz     short loc_140B0D969
 * 0000000140B0D97B: and     dl, 0Fh
 * 0000000140B0D97E: cmp     dl, 7
 * 0000000140B0D981: jnb     short loc_140B0D9F0
 * 0000000140B0D983: mov     rcx, r9
 * 0000000140B0D986: mov     rax, 7010008004002001h
 * 0000000140B0D990: rol     rcx, 11h
 * 0000000140B0D994: mov     r10d, 6
 * 0000000140B0D99A: xor     rcx, r9
 * 0000000140B0D99D: mul     rcx
 * 0000000140B0D9A0: mov     [rbp+0A70h+var_3C8], rdx
 * 0000000140B0D9A7: xor     rdx, rax
 * 0000000140B0D9AA: add     r8, rdx
 * 0000000140B0D9AD: lea     rax, [r9+28h]
 * 0000000140B0D9B1: movsx   edx, word ptr [r9+8]
 * 0000000140B0D9B6: xor     [rax], r8
 * 0000000140B0D9B9: mov     ecx, r10d
 * 0000000140B0D9BC: rol     r8, cl
 * 0000000140B0D9BF: lea     rax, [rax-8]
 * 0000000140B0D9C3: sub     r10d, r11d
 * 0000000140B0D9C6: jnz     short loc_140B0D9B6
 * 0000000140B0D9C8: sub     rdx, 30h ; '0'
 * 0000000140B0D9CC: shr     rdx, 3
 * 0000000140B0D9D0: test    edx, edx
 * 0000000140B0D9D2: jz      short loc_140B0D9F0
 * 0000000140B0D9D4: movsxd  r10, edx
 * 0000000140B0D9D7: add     r10, 5
 * 0000000140B0D9DB: lea     r10, [r9+r10*8]
 * 0000000140B0D9DF: xor     [r10], r8
 * 0000000140B0D9E2: mov     ecx, edx
 * 0000000140B0D9E4: rol     r8, cl
 * 0000000140B0D9E7: lea     r10, [r10-8]
 * 0000000140B0D9EB: sub     edx, r11d
 * 0000000140B0D9EE: jnz     short loc_140B0D9DF
 * 0000000140B0D9F0: mov     r11, [rbp+0A70h+arg_0]
 * 0000000140B0D9F7: mov     r10d, 1
 * 0000000140B0D9FD: mov     [rsi+40h], r15
 * 0000000140B0DA01: test    dword ptr [r11+990h], 100h
 * 0000000140B0DA0C: jz      loc_140B0DA92
 * 0000000140B0DA12: lea     r9, [r14-48h]
 * 0000000140B0DA16: mov     [r9+40h], rsi
 * 0000000140B0DA1A: rdtsc
 * 0000000140B0DA1C: shl     rdx, 20h
 * 0000000140B0DA20: mov     r14, 7010008004002001h
 * 0000000140B0DA2A: or      rax, rdx
 * 0000000140B0DA2D: mov     r8d, 19h
 * 0000000140B0DA33: mov     rcx, rax
 * 0000000140B0DA36: ror     rax, 3
 * 0000000140B0DA3A: xor     rcx, rax
 * 0000000140B0DA3D: mov     rax, r14
 * 0000000140B0DA40: mul     rcx
 * 0000000140B0DA43: mov     [rbp+0A70h+var_3C0], rdx
 * 0000000140B0DA4A: xor     rdx, rax
 * 0000000140B0DA4D: lea     rax, [r9+48h]
 * 0000000140B0DA51: xor     [rax], rdx
 * 0000000140B0DA54: lea     rax, [rax+8]
 * 0000000140B0DA58: sub     r8, r10
 * 0000000140B0DA5B: jnz     short loc_140B0DA51
 * 0000000140B0DA5D: mov     dword ptr [r9+48h], 48513148h
 * 0000000140B0DA65: mov     [r9+20h], rdx
 * 0000000140B0DA69: jmp     short loc_140B0DA9F
 * 0000000140B0DA6B: mov     byte ptr [rsi], 13h
 * 0000000140B0DA6E: mov     r10d, 1
 * 0000000140B0DA74: mov     [rsi+1], r10b
 * 0000000140B0DA78: mov     [rsi+2], r13w
 * 0000000140B0DA7D: mov     [rsi+18h], r14
 * 0000000140B0DA81: mov     [rsi+20h], r8
 * 0000000140B0DA85: mov     [rsi+38h], r13
 * 0000000140B0DA89: mov     [rsi+10h], r13
 * 0000000140B0DA8D: jmp     loc_140B0D9FD
 * 0000000140B0DA92: mov     r9, rsi
 * 0000000140B0DA95: mov     r14, 7010008004002001h
 * 0000000140B0DA9F: mov     rdx, [r11+0A98h]
 * 0000000140B0DAA6: test    rdx, rdx
 * 0000000140B0DAA9: jz      loc_140B0DB33
 * 0000000140B0DAAF: mov     rdx, [rdx+20h]
 * 0000000140B0DAB3: mov     eax, 0E5D49100h
 * 0000000140B0DAB8: mov     rcx, rdx
 * 0000000140B0DABB: mov     r14d, 0Fh
 * 0000000140B0DAC1: xor     rcx, rax
 * 0000000140B0DAC4: shr     rcx, 4
 * 0000000140B0DAC8: xor     rcx, rdx
 * 0000000140B0DACB: shr     rcx, 4
 * 0000000140B0DACF: xor     rcx, [r11+588h]
 * 0000000140B0DAD6: mov     r10b, cl
 * 0000000140B0DAD9: mov     r11, rcx
 * 0000000140B0DADC: and     r10b, r14b
 * 0000000140B0DADF: jnz     short loc_140B0DAE5
 * 0000000140B0DAE1: lea     r10d, [r14-0Eh]
 * 0000000140B0DAE5: mov     r8, rcx
 * 0000000140B0DAE8: and     r8, r14
 * 0000000140B0DAEB: add     r8, rdx
 * 0000000140B0DAEE: mov     rdx, [r8]
 * 0000000140B0DAF1: mov     rax, rdx
 * 0000000140B0DAF4: xor     rax, 1E5200h
 * 0000000140B0DAFA: shr     rax, 4
 * 0000000140B0DAFE: xor     rax, rdx
 * 0000000140B0DB01: shr     rax, 4
 * 0000000140B0DB05: xor     rcx, rax
 * 0000000140B0DB08: add     r10b, 0FFh
 * 0000000140B0DB0C: jnz     short loc_140B0DAE5
 * 0000000140B0DB0E: mov     r14, 7010008004002001h
 * 0000000140B0DB18: bt      r11, 0Ch
 * 0000000140B0DB1D: jnb     short loc_140B0DB22
 * 0000000140B0DB1F: xor     r9, r11
 * 0000000140B0DB22: mov     r11, [rbp+0A70h+arg_0]
 * 0000000140B0DB29: mov     [r8], r9
 * 0000000140B0DB2C: mov     r9, [r11+0A98h]
 * 0000000140B0DB33: lock or [rsp+0B70h+var_B70], r13d
 * 0000000140B0DB38: mov     ecx, [r11+838h]
 * 0000000140B0DB3F: test    ecx, ecx
 * 0000000140B0DB41: jz      loc_140B0DDCD
 * 0000000140B0DB47: sub     ecx, 1
 * 0000000140B0DB4A: jz      loc_140B0DDB6
 * 0000000140B0DB50: sub     ecx, 1
 * 0000000140B0DB53: jz      loc_140B0DDA3
 * 0000000140B0DB59: sub     ecx, 1
 * 0000000140B0DB5C: jz      loc_140B0DCE1
 * 0000000140B0DB62: cmp     ecx, 1
 * 0000000140B0DB65: jz      loc_140B0DBEC
 * 0000000140B0DB6B: mov     r8, [r11+998h]
 * 0000000140B0DB72: mov     [r8+48h], r9
 * 0000000140B0DB76: lock or [rsp+0B70h+var_B70], r13d
 * 0000000140B0DB7B: rdtsc
 * 0000000140B0DB7D: shl     rdx, 20h
 * 0000000140B0DB81: or      rax, rdx
 * 0000000140B0DB84: mov     rcx, rax
 * 0000000140B0DB87: mov     rdx, rax
 * 0000000140B0DB8A: ror     rcx, 3
 * 0000000140B0DB8E: mov     rax, r14
 * 0000000140B0DB91: xor     rdx, rcx
 * 0000000140B0DB94: mul     rdx
 * 0000000140B0DB97: mov     rcx, rdx
 * 0000000140B0DB9A: mov     [rbp+0A70h+var_3B8], rdx
 * 0000000140B0DBA1: xor     rcx, rax
 * 0000000140B0DBA4: mov     rax, 0ABCC77118461CEFDh
 * 0000000140B0DBAE: mul     rcx
 * 0000000140B0DBB1: shr     rdx, 1Ah
 * 0000000140B0DBB5: imul    rax, rdx, 5F5E100h
 * 0000000140B0DBBC: sub     rcx, rax
 * 0000000140B0DBBF: mov     rax, 0D6BF94D5E57A42BDh
 * 0000000140B0DBC9: add     rcx, 47868C00h
 * 0000000140B0DBD0: imul    rcx
 * 0000000140B0DBD3: add     rdx, rcx
 * 0000000140B0DBD6: sar     rdx, 17h
 * 0000000140B0DBDA: mov     rax, rdx
 * 0000000140B0DBDD: shr     rax, 3Fh
 * 0000000140B0DBE1: add     rdx, rax
 * 0000000140B0DBE4: mov     [r8], edx
 * 0000000140B0DBE7: jmp     loc_140B0DE7C
 * 0000000140B0DBEC: mov     r8, [r11+9E0h]
 * 0000000140B0DBF3: xor     r9d, r9d
 * 0000000140B0DBF6: mov     rcx, [r11+9F0h]
 * 0000000140B0DBFD: mov     rdx, rsi
 * 0000000140B0DC00: mov     rax, [r11+9E8h]
 * 0000000140B0DC07: mov     rdi, [r11+998h]
 * 0000000140B0DC0E: mov     byte ptr [r8], 12h
 * 0000000140B0DC12: mov     byte ptr [r8+2], 58h ; 'X'
 * 0000000140B0DC17: mov     [r8+50h], r13b
 * 0000000140B0DC1B: mov     [r8+8], rdi
 * 0000000140B0DC1F: mov     [r8+20h], rax
 * 0000000140B0DC23: mov     [r8+28h], r13
 * 0000000140B0DC27: mov     [r8+30h], rcx
 * 0000000140B0DC2B: mov     [r8+51h], r13b
 * 0000000140B0DC2F: mov     [r8+38h], r13
 * 0000000140B0DC33: mov     [r8+52h], r13b
 * 0000000140B0DC37: xor     r8d, r8d
 * 0000000140B0DC3A: mov     rax, [r11+2C0h]
 * 0000000140B0DC41: mov     rcx, [r11+9E0h]
 * 0000000140B0DC48: call    KeGuardDispatchICall
 * 0000000140B0DC4D: test    al, al
 * 0000000140B0DC4F: jnz     loc_140B0DE75
 * 0000000140B0DC55: mov     r12d, 1
 * 0000000140B0DC5B: cmp     [rbx], r13d
 * 0000000140B0DC5E: jnz     short loc_140B0DC9E
 * 0000000140B0DC60: mov     rcx, [rbp+0A70h+arg_0]
 * 0000000140B0DC67: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0DC71: add     rax, rcx
 * 0000000140B0DC74: xor     edx, edx
 * 0000000140B0DC76: mov     [rcx+900h], rax
 * 0000000140B0DC7D: mov     [rcx+908h], r13
 * 0000000140B0DC84: mov     qword ptr [rcx+910h], 104h
 * 0000000140B0DC8F: mov     [rcx+918h], rdi
 * 0000000140B0DC96: mov     [rbx], r12d
 * 0000000140B0DC99: call    $$ba
 * 0000000140B0DC9E: lea     rcx, [rbp+0A70h+var_6F0]
 * 0000000140B0DCA5: mov     edx, 28h ; '('
 * 0000000140B0DCAA: mov     rax, [rbx]
 * 0000000140B0DCAD: add     edx, 0FFFFFFF8h
 * 0000000140B0DCB0: mov     [rcx], rax
 * 0000000140B0DCB3: add     rbx, 8
 * 0000000140B0DCB7: add     rcx, 8
 * 0000000140B0DCBB: sub     [rbp+0A70h+var_A28], r12
 * 0000000140B0DCBF: jnz     short loc_140B0DCAA
 * 0000000140B0DCC1: test    edx, edx
 * 0000000140B0DCC3: jz      loc_140B0DE75
 * 0000000140B0DCC9: mov     al, [rbx]
 * 0000000140B0DCCB: add     rbx, r12
 * 0000000140B0DCCE: mov     [rcx], al
 * 0000000140B0DCD0: add     rcx, r12
 * 0000000140B0DCD3: mov     eax, 0FFFFFFFFh
 * 0000000140B0DCD8: add     edx, eax
 * 0000000140B0DCDA: jnz     short loc_140B0DCC9
 * 0000000140B0DCDC: jmp     loc_140B0DE75
 * 0000000140B0DCE1: mov     rdi, [r11+998h]
 * 0000000140B0DCE8: mov     rax, [r11+6A0h]
 * 0000000140B0DCEF: mov     rcx, [rdi+rax]
 * 0000000140B0DCF3: test    rcx, rcx
 * 0000000140B0DCF6: jz      loc_140B0DD8E
 * 0000000140B0DCFC: mov     r12d, 1
 * 0000000140B0DD02: cmp     [rbx], r13d
 * 0000000140B0DD05: jnz     short loc_140B0DD41
 * 0000000140B0DD07: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0DD11: xor     edx, edx
 * 0000000140B0DD13: add     rax, r11
 * 0000000140B0DD16: mov     [r11+900h], rax
 * 0000000140B0DD1D: mov     [r11+908h], r13
 * 0000000140B0DD24: mov     qword ptr [r11+910h], 104h
 * 0000000140B0DD2F: mov     [r11+918h], rcx
 * 0000000140B0DD36: mov     rcx, r11
 * 0000000140B0DD39: mov     [rbx], r12d
 * 0000000140B0DD3C: call    $$ba
 * 0000000140B0DD41: mov     edx, 28h ; '('
 * 0000000140B0DD46: lea     rcx, [rbp+0A70h+var_6F0]
 * 0000000140B0DD4D: lea     r11d, [rdx-23h]
 * 0000000140B0DD51: mov     rax, [rbx]
 * 0000000140B0DD54: add     edx, 0FFFFFFF8h
 * 0000000140B0DD57: mov     [rcx], rax
 * 0000000140B0DD5A: add     rbx, 8
 * 0000000140B0DD5E: add     rcx, 8
 * 0000000140B0DD62: sub     r11, r12
 * 0000000140B0DD65: jnz     short loc_140B0DD51
 * 0000000140B0DD67: mov     r11, [rbp+0A70h+arg_0]
 * 0000000140B0DD6E: test    edx, edx
 * 0000000140B0DD70: jz      short loc_140B0DD8E
 * 0000000140B0DD72: mov     r11d, 0FFFFFFFFh
 * 0000000140B0DD78: mov     al, [rbx]
 * 0000000140B0DD7A: add     rbx, r12
 * 0000000140B0DD7D: mov     [rcx], al
 * 0000000140B0DD7F: add     rcx, r12
 * 0000000140B0DD82: add     edx, r11d
 * 0000000140B0DD85: jnz     short loc_140B0DD78
 * 0000000140B0DD87: mov     r11, [rbp+0A70h+arg_0]
 * 0000000140B0DD8E: lock or [rsp+0B70h+var_B70], r13d
 * 0000000140B0DD93: mov     rax, [r11+6A0h]
 * 0000000140B0DD9A: mov     [rdi+rax], rsi
 * 0000000140B0DD9E: jmp     loc_140B0DE7C
 * 0000000140B0DDA3: mov     rax, [r11+7C0h]
 * 0000000140B0DDAA: mov     [rax+80h], r9
 * 0000000140B0DDB1: jmp     loc_140B0DE7C
 * 0000000140B0DDB6: mov     rcx, [r11+7C0h]
 * 0000000140B0DDBD: mov     rax, [r11+638h]
 * 0000000140B0DDC4: mov     [rcx+rax], r9
 * 0000000140B0DDC8: jmp     loc_140B0DE7C
 * 0000000140B0DDCD: rdtsc
 * 0000000140B0DDCF: shl     rdx, 20h
 * 0000000140B0DDD3: or      rax, rdx
 * 0000000140B0DDD6: mov     rcx, rax
 * 0000000140B0DDD9: mov     rdx, rax
 * 0000000140B0DDDC: ror     rcx, 3
 * 0000000140B0DDE0: mov     rax, r14
 * 0000000140B0DDE3: xor     rdx, rcx
 * 0000000140B0DDE6: mul     rdx
 * 0000000140B0DDE9: mov     rcx, rdx
 * 0000000140B0DDEC: mov     [rbp+0A70h+var_3B0], rdx
 * 0000000140B0DDF3: xor     rcx, rax
 * 0000000140B0DDF6: mov     rax, 0ABCC77118461CEFDh
 * 0000000140B0DE00: mul     rcx
 * 0000000140B0DE03: shr     rdx, 1Ah
 * 0000000140B0DE07: imul    rax, rdx, 5F5E100h
 * 0000000140B0DE0E: sub     rcx, rax
 * 0000000140B0DE11: sub     rdi, rcx
 * 0000000140B0DE14: rdtsc
 * 0000000140B0DE16: shl     rdx, 20h
 * 0000000140B0DE1A: or      rax, rdx
 * 0000000140B0DE1D: mov     [rsp+0B70h+BugCheckParameter4], r9
 * 0000000140B0DE22: mov     rcx, rax
 * 0000000140B0DE25: mov     rdx, rax
 * 0000000140B0DE28: ror     rcx, 3
 * 0000000140B0DE2C: mov     rax, r14
 * 0000000140B0DE2F: xor     rdx, rcx
 * 0000000140B0DE32: mov     rcx, r12
 * 0000000140B0DE35: mul     rdx
 * 0000000140B0DE38: mov     r8, rdx
 * 0000000140B0DE3B: mov     [rbp+0A70h+var_3A8], rdx
 * 0000000140B0DE42: xor     r8, rax
 * 0000000140B0DE45: mov     rax, 346DC5D63886594Bh
 * 0000000140B0DE4F: mul     r8
 * 0000000140B0DE52: shr     rdx, 0Bh
 * 0000000140B0DE56: imul    rax, rdx, 2710h
 * 0000000140B0DE5D: mov     rdx, rdi
 * 0000000140B0DE60: sub     r8, rax
 * 0000000140B0DE63: mov     rax, [r11+1D8h]
 * 0000000140B0DE6A: mov     r9d, r8d
 * 0000000140B0DE6D: xor     r8d, r8d
 * 0000000140B0DE70: call    KeGuardDispatchICall
 * 0000000140B0DE75: mov     r11, [rbp+0A70h+arg_0]
 * 0000000140B0DE7C: mov     ecx, 8000h
 * 0000000140B0DE81: cmp     [rbp+0A70h+var_6F0], r13d
 * 0000000140B0DE88: jz      loc_140B0E048
 * 0000000140B0DE8E: mov     r8d, [r11+990h]
 * 0000000140B0DE95: test    ecx, r8d
 * 0000000140B0DE98: jnz     loc_140B0E048
 * 0000000140B0DE9E: mov     r12, [rbp+0A70h+var_6D8]
 * 0000000140B0DEA5: mov     r13, [rbp+0A70h+var_6D0]
 * 0000000140B0DEAC: mov     rbx, [rbp+0A70h+var_6E0]
 * 0000000140B0DEB3: mov     rdi, [rbp+0A70h+var_6E8]
 * 0000000140B0DEBA: mov     [rbp+0A70h+arg_8], r12
 * 0000000140B0DEC1: mov     [rbp+0A70h+var_A28], r13
 * 0000000140B0DEC5: mov     [rbp+0A70h+var_A78], rbx
 * 0000000140B0DEC9: mov     [rbp+0A70h+var_AC0], rdi
 * 0000000140B0DECD: mov     rax, cr8
 * 0000000140B0DED1: mov     r9d, 2
 * 0000000140B0DED7: cmp     al, r9b
 * 0000000140B0DEDA: jnb     short loc_140B0DEEB
 * 0000000140B0DEDC: mov     rax, cr8
 * 0000000140B0DEE0: mov     cr8, r9
 * 0000000140B0DEE4: mov     r8d, [r11+990h]
 * 0000000140B0DEEB: mov     rdx, gs:20h
 * 0000000140B0DEF4: xor     r10d, r10d
 * 0000000140B0DEF7: mov     rcx, gs:20h
 * 0000000140B0DF00: mov     rax, [r11+640h]
 * 0000000140B0DF07: mov     rsi, [rdx+rax]
 * 0000000140B0DF0B: mov     rax, [r11+650h]
 * 0000000140B0DF12: mov     r14, [rcx+rax]
 * 0000000140B0DF16: mov     rax, [r11+648h]
 * 0000000140B0DF1D: mov     [rsp+0B70h+var_AF8], r14
 * 0000000140B0DF22: cmp     [rdx+rax], r10b
 * 0000000140B0DF26: jz      short loc_140B0DF47
 * 0000000140B0DF28: lea     rax, [rbp+0A70h+var_8C8]
 * 0000000140B0DF2F: cmp     rax, rsi
 * 0000000140B0DF32: ja      short loc_140B0DF47
 * 0000000140B0DF34: lea     rax, [rsi-6000h]
 * 0000000140B0DF3B: lea     rcx, [rbp+0A70h+var_8C8]
 * 0000000140B0DF42: cmp     rcx, rax
 * 0000000140B0DF45: jnb     short loc_140B0DF52
 * 0000000140B0DF47: mov     rax, [r11+680h]
 * 0000000140B0DF4E: mov     rsi, [r14+rax]
 * 0000000140B0DF52: bt      r8d, 1Bh
 * 0000000140B0DF57: jb      loc_140B0E402
 * 0000000140B0DF5D: mov     r15, cr0
 * 0000000140B0DF61: mov     rax, r15
 * 0000000140B0DF64: btr     rax, 10h
 * 0000000140B0DF69: mov     cr0, rax
 * 0000000140B0DF6C: mov     r9d, [r11+0AA0h]
 * 0000000140B0DF73: lea     rdx, [r11+0AA8h]
 * 0000000140B0DF7A: shl     r9, 4
 * 0000000140B0DF7E: xor     eax, eax
 * 0000000140B0DF80: add     r9, rdx
 * 0000000140B0DF83: mov     r8, r9
 * 0000000140B0DF86: cmp     [r11+0AA4h], eax
 * 0000000140B0DF8D: jbe     short loc_140B0DFDD
 * 0000000140B0DF8F: lea     r12d, [rax+1]
 * 0000000140B0DF93: lea     r13d, [rax+10h]
 * 0000000140B0DF97: mov     rcx, [r8]
 * 0000000140B0DF9A: mov     rax, [r8+8]
 * 0000000140B0DF9E: mov     [rcx], rax
 * 0000000140B0DFA1: mov     rcx, cr4
 * 0000000140B0DFA4: test    rcx, 20080h
 * 0000000140B0DFAB: jz      short loc_140B0DFBD
 * 0000000140B0DFAD: mov     rax, rcx
 * 0000000140B0DFB0: btc     rax, 7
 * 0000000140B0DFB5: mov     cr4, rax
 * 0000000140B0DFB8: mov     cr4, rcx
 * 0000000140B0DFBB: jmp     short loc_140B0DFC3
 * 0000000140B0DFBD: mov     rax, cr3
 * 0000000140B0DFC0: mov     cr3, rax
 * 0000000140B0DFC3: add     r8, r13
 * 0000000140B0DFC6: add     r10d, r12d
 * 0000000140B0DFC9: cmp     r10d, [r11+0AA4h]
 * 0000000140B0DFD0: jb      short loc_140B0DF97
 * 0000000140B0DFD2: mov     r12, [rbp+0A70h+arg_8]
 * 0000000140B0DFD9: mov     r13, [rbp+0A70h+var_A28]
 * 0000000140B0DFDD: cmp     rdx, r9
 * 0000000140B0DFE0: jnb     loc_140B0E3ED
 * 0000000140B0DFE6: mov     r13d, 1
 * 0000000140B0DFEC: mov     r14d, 0FFFFFFFFh
 * 0000000140B0DFF2: mov     edi, [rdx+8]
 * 0000000140B0DFF5: mov     rcx, r8
 * 0000000140B0DFF8: mov     r10, [rdx]
 * 0000000140B0DFFB: mov     r11d, edi
 * 0000000140B0DFFE: cmp     edi, 8
 * 0000000140B0E001: jb      short loc_140B0E020
 * 0000000140B0E003: mov     ebx, edi
 * 0000000140B0E005: shr     rbx, 3
 * 0000000140B0E009: mov     rax, [rcx]
 * 0000000140B0E00C: add     r11d, 0FFFFFFF8h
 * 0000000140B0E010: mov     [r10], rax
 * 0000000140B0E013: add     rcx, 8
 * 0000000140B0E017: add     r10, 8
 * 0000000140B0E01B: sub     rbx, r13
 * 0000000140B0E01E: jnz     short loc_140B0E009
 * 0000000140B0E020: test    r11d, r11d
 * 0000000140B0E023: jz      short loc_140B0E036
 * 0000000140B0E025: sub     r10, rcx
 * 0000000140B0E028: mov     al, [rcx]
 * 0000000140B0E02A: mov     [r10+rcx], al
 * 0000000140B0E02E: add     rcx, r13
 * 0000000140B0E031: add     r11d, r14d
 * 0000000140B0E034: jnz     short loc_140B0E028
 * 0000000140B0E036: add     r8, rdi
 * 0000000140B0E039: add     rdx, 10h
 * 0000000140B0E03D: cmp     rdx, r9
 * 0000000140B0E040: jnb     loc_140B0E3CE
 * 0000000140B0E046: jmp     short loc_140B0DFF2
 * 0000000140B0E048: test    dword ptr [r11+990h], 40000000h
 * 0000000140B0E053: jnz     short loc_140B0E09F
 * 0000000140B0E055: cmp     [rbp+0A70h+var_AE0], r13d
 * 0000000140B0E059: jz      short loc_140B0E09F
 * 0000000140B0E05B: mov     ecx, [r11+924h]
 * 0000000140B0E062: sub     ecx, 1
 * 0000000140B0E065: jz      short loc_140B0E079
 * 0000000140B0E067: mov     eax, 2
 * 0000000140B0E06C: cmp     ecx, eax
 * 0000000140B0E06E: jnz     short loc_140B0E09F
 * 0000000140B0E070: mov     rax, [r11+368h]
 * 0000000140B0E077: jmp     short loc_140B0E098
 * 0000000140B0E079: add     qword ptr [r11+7C8h], 0FFFFFFFFFFFFFFF8h
 * 0000000140B0E081: mov     rax, [r11+7C8h]
 * 0000000140B0E088: mov     ecx, [rax]
 * 0000000140B0E08A: mov     [r11+7D0h], ecx
 * 0000000140B0E091: mov     rax, [r11+228h]
 * 0000000140B0E098: mov     [r11+0F8h], rax
 * 0000000140B0E09F: mov     rax, r11
 * 0000000140B0E0A2: add     rsp, 0B38h
 * 0000000140B0E0A9: pop     r15
 * 0000000140B0E0AB: pop     r14
 * 0000000140B0E0AD: pop     r13
 * 0000000140B0E0AF: pop     r12
 * 0000000140B0E0B1: pop     rdi
 * 0000000140B0E0B2: pop     rsi
 * 0000000140B0E0B3: pop     rbx
 * 0000000140B0E0B4: pop     rbp
 * 0000000140B0E0B5: retn
 * 0000000140B0E0B7: mov     r9d, 5; BugCheckParameter3
 * 0000000140B0E0BD: mov     [rbp+0A70h+var_958], 13Dh
 * 0000000140B0E0C7: mov     ecx, [rbp+0A70h+var_958]
 * 0000000140B0E0CD: mov     r8, rbx; BugCheckParameter2
 * 0000000140B0E0D0: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0E0D3: mov     [rsp+0B70h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140B0E0D8: lea     edx, [r9+5]; BugCheckParameter1
 * 0000000140B0E0DC: call    KeBugCheckEx
 * 0000000140B0E0E2: mov     [rbp+0A70h+var_954], 13Dh
 * 0000000140B0E0EC: mov     r9d, 7; BugCheckParameter3
 * 0000000140B0E0F2: mov     ecx, [rbp+0A70h+var_954]
 * 0000000140B0E0F8: mov     r8, r12; BugCheckParameter2
 * 0000000140B0E0FB: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0E0FE: mov     rdx, r15; BugCheckParameter1
 * 0000000140B0E101: mov     [rsp+0B70h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140B0E106: call    KeBugCheckEx
 * 0000000140B0E10C: xor     r9d, r9d; BugCheckParameter3
 * 0000000140B0E10F: mov     [rbp+0A70h+var_948], 13Dh
 * 0000000140B0E119: mov     ecx, [rbp+0A70h+var_948]
 * 0000000140B0E11F: mov     r8, r14; BugCheckParameter2
 * 0000000140B0E122: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0E125: mov     [rsp+0B70h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140B0E12A: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 0000000140B0E12E: call    KeBugCheckEx
 * 0000000140B0E134: mov     [rbp+0A70h+var_91C], 13Dh
 * 0000000140B0E13E: mov     r9, r15; BugCheckParameter3
 * 0000000140B0E141: mov     ecx, [rbp+0A70h+var_91C]
 * 0000000140B0E147: mov     r8, r14; BugCheckParameter2
 * 0000000140B0E14A: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0E14D: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140B0E152: mov     [rsp+0B70h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140B0E157: call    KeBugCheckEx
 * 0000000140B0E15D: mov     r9d, edx; BugCheckParameter3
 * 0000000140B0E160: mov     r8, r14; BugCheckParameter2
 * 0000000140B0E163: mov     [rbp+0A70h+var_918], 13Dh
 * 0000000140B0E16D: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140B0E172: mov     ecx, [rbp+0A70h+var_918]
 * 0000000140B0E178: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0E17B: mov     [rsp+0B70h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140B0E180: call    KeBugCheckEx
 * 0000000140B0E186: mov     r9d, edx; BugCheckParameter3
 * 0000000140B0E189: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140B0E18E: mov     [rbp+0A70h+var_974], 13Dh
 * 0000000140B0E198: mov     ecx, [rbp+0A70h+var_974]
 * 0000000140B0E19E: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0E1A1: mov     [rsp+0B70h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140B0E1A6: call    KeBugCheckEx
 * 0000000140B0E1AC: mov     r9d, 2; BugCheckParameter3
 * 0000000140B0E1B2: mov     [rbp+0A70h+var_988], 13Dh
 * 0000000140B0E1BC: mov     ecx, [rbp+0A70h+var_988]
 * 0000000140B0E1C2: mov     r8, r14; BugCheckParameter2
 * 0000000140B0E1C5: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0E1C8: mov     [rsp+0B70h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140B0E1CD: lea     edx, [r9+8]; BugCheckParameter1
 * 0000000140B0E1D1: call    KeBugCheckEx
 * 0000000140B0E1D7: mov     r9d, 3; BugCheckParameter3
 * 0000000140B0E1DD: mov     [rsp+0B70h+BugCheckParameter4], rdx; BugCheckParameter4
 * 0000000140B0E1E2: mov     [rbp+0A70h+var_984], 13Dh
 * 0000000140B0E1EC: mov     r8, r14; BugCheckParameter2
 * 0000000140B0E1EF: mov     ecx, [rbp+0A70h+var_984]
 * 0000000140B0E1F5: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0E1F8: lea     edx, [r9+7]; BugCheckParameter1
 * 0000000140B0E1FC: call    KeBugCheckEx
 * 0000000140B0E202: mov     r8, [rbp+0A70h+var_AF0]; BugCheckParameter2
 * 0000000140B0E206: mov     r9d, 6; BugCheckParameter3
 * 0000000140B0E20C: mov     [rbp+0A70h+var_980], 13Dh
 * 0000000140B0E216: mov     ecx, [rbp+0A70h+var_980]
 * 0000000140B0E21C: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0E21F: lea     edx, [r9+4]; BugCheckParameter1
 * 0000000140B0E223: mov     [rsp+0B70h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140B0E228: call    KeBugCheckEx
 * 0000000140B0E22E: mov     r8, [rbp+0A70h+var_AC0]; BugCheckParameter2
 * 0000000140B0E232: mov     r9d, 5; BugCheckParameter3
 * 0000000140B0E238: mov     [rbp+0A70h+var_97C], 13Dh
 * 0000000140B0E242: mov     ecx, [rbp+0A70h+var_97C]
 * 0000000140B0E248: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0E24B: lea     edx, [r9+5]; BugCheckParameter1
 * 0000000140B0E24F: mov     [rsp+0B70h+BugCheckParameter4], r11; BugCheckParameter4
 * 0000000140B0E254: call    KeBugCheckEx
 * 0000000140B0E25A: mov     r9d, 5; BugCheckParameter3
 * 0000000140B0E260: mov     [rbp+0A70h+var_978], 13Dh
 * 0000000140B0E26A: mov     ecx, [rbp+0A70h+var_978]
 * 0000000140B0E270: mov     r8, r13; BugCheckParameter2
 * 0000000140B0E273: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0E276: mov     [rsp+0B70h+BugCheckParameter4], r11; BugCheckParameter4
 * 0000000140B0E27B: lea     edx, [r9+5]; BugCheckParameter1
 * 0000000140B0E27F: call    KeBugCheckEx
 * 0000000140B0E285: mov     [rbp+0A70h+var_920], 13Dh
 * 0000000140B0E28F: mov     r9d, 7; BugCheckParameter3
 * 0000000140B0E295: mov     ecx, [rbp+0A70h+var_920]
 * 0000000140B0E29B: mov     r8, r14; BugCheckParameter2
 * 0000000140B0E29E: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0E2A1: mov     rdx, r15; BugCheckParameter1
 * 0000000140B0E2A4: mov     [rsp+0B70h+BugCheckParameter4], r11; BugCheckParameter4
 * 0000000140B0E2A9: call    KeBugCheckEx
 * 0000000140B0E2AF: xor     r9d, r9d; BugCheckParameter3
 * 0000000140B0E2B2: mov     [rbp+0A70h+var_96C], 13Dh
 * 0000000140B0E2BC: mov     ecx, [rbp+0A70h+var_96C]
 * 0000000140B0E2C2: mov     r8, r14; BugCheckParameter2
 * 0000000140B0E2C5: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0E2C8: mov     [rsp+0B70h+BugCheckParameter4], r11; BugCheckParameter4
 * 0000000140B0E2CD: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 0000000140B0E2D1: call    KeBugCheckEx
 * 0000000140B0E2D7: mov     r9d, 3; BugCheckParameter3
 * 0000000140B0E2DD: mov     [rbp+0A70h+var_924], 13Dh
 * 0000000140B0E2E7: mov     ecx, [rbp+0A70h+var_924]
 * 0000000140B0E2ED: mov     r8, r14; BugCheckParameter2
 * 0000000140B0E2F0: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0E2F3: mov     [rsp+0B70h+BugCheckParameter4], r11; BugCheckParameter4
 * 0000000140B0E2F8: lea     edx, [r9+7]; BugCheckParameter1
 * 0000000140B0E2FC: call    KeBugCheckEx
 * 0000000140B0E302: mov     [rbp+0A70h+var_968], 13Dh
 * 0000000140B0E30C: mov     r8, r14; BugCheckParameter2
 * 0000000140B0E30F: mov     ecx, [rbp+0A70h+var_968]
 * 0000000140B0E315: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140B0E31A: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0E31D: mov     [rsp+0B70h+BugCheckParameter4], r11; BugCheckParameter4
 * 0000000140B0E322: call    KeBugCheckEx
 * 0000000140B0E328: xor     eax, eax
 * 0000000140B0E32A: mov     r9d, edx; BugCheckParameter3
 * 0000000140B0E32D: mov     [rbp+0A70h+var_964], 13Dh
 * 0000000140B0E337: mov     r8, r14; BugCheckParameter2
 * 0000000140B0E33A: mov     ecx, [rbp+0A70h+var_964]
 * 0000000140B0E340: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0E343: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140B0E346: mov     [rsp+0B70h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140B0E34B: call    KeBugCheckEx
 * 0000000140B0E351: xor     eax, eax
 * 0000000140B0E353: mov     r9d, edx; BugCheckParameter3
 * 0000000140B0E356: mov     [rbp+0A70h+var_960], 13Dh
 * 0000000140B0E360: mov     ecx, [rbp+0A70h+var_960]
 * 0000000140B0E366: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0E369: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140B0E36C: mov     [rsp+0B70h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140B0E371: call    KeBugCheckEx
 * 0000000140B0E377: mov     r9d, 2; BugCheckParameter3
 * 0000000140B0E37D: mov     [rbp+0A70h+var_95C], 13Dh
 * 0000000140B0E387: mov     ecx, [rbp+0A70h+var_95C]
 * 0000000140B0E38D: mov     r8, r14; BugCheckParameter2
 * 0000000140B0E390: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0E393: mov     [rsp+0B70h+BugCheckParameter4], r11; BugCheckParameter4
 * 0000000140B0E398: lea     edx, [r9+8]; BugCheckParameter1
 * 0000000140B0E39C: call    KeBugCheckEx
 * 0000000140B0E3A2: mov     r8, [rbp+0A70h+var_AC8]; BugCheckParameter2
 * 0000000140B0E3A6: mov     r9d, 6; BugCheckParameter3
 * 0000000140B0E3AC: mov     [rbp+0A70h+var_928], 13Dh
 * 0000000140B0E3B6: mov     ecx, [rbp+0A70h+var_928]
 * 0000000140B0E3BC: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0E3BF: lea     edx, [r9+4]; BugCheckParameter1
 * 0000000140B0E3C3: mov     [rsp+0B70h+BugCheckParameter4], r10; BugCheckParameter4
 * 0000000140B0E3C8: call    KeBugCheckEx
 * 0000000140B0E3CE: mov     r14, [rsp+0B70h+var_AF8]
 * 0000000140B0E3D3: mov     r12, [rbp+0A70h+arg_8]
 * 0000000140B0E3DA: mov     r13, [rbp+0A70h+var_A28]
 * 0000000140B0E3DE: mov     rbx, [rbp+0A70h+var_A78]
 * 0000000140B0E3E2: mov     rdi, [rbp+0A70h+var_AC0]
 * 0000000140B0E3E6: mov     r11, [rbp+0A70h+arg_0]
 * 0000000140B0E3ED: mov     rax, [r11+218h]
 * 0000000140B0E3F4: mov     byte ptr [rax], 0C3h
 * 0000000140B0E3F7: mov     cr0, r15
 * 0000000140B0E3FB: xor     r10d, r10d
 * 0000000140B0E3FE: lea     r9d, [r10+2]
 * 0000000140B0E402: mov     ecx, [r11+928h]
 * 0000000140B0E409: test    ecx, ecx
 * 0000000140B0E40B: jz      loc_140B0E4F1
 * 0000000140B0E411: mov     rax, cr8
 * 0000000140B0E415: cmp     al, r9b
 * 0000000140B0E418: jnb     short loc_140B0E429
 * 0000000140B0E41A: mov     rax, cr8
 * 0000000140B0E41E: mov     cr8, r9
 * 0000000140B0E422: mov     ecx, [r11+928h]
 * 0000000140B0E429: test    ecx, ecx
 * 0000000140B0E42B: jz      loc_140B0E4F1
 * 0000000140B0E431: sub     ecx, 1
 * 0000000140B0E434: jz      loc_140B0E4E4
 * 0000000140B0E43A: sub     ecx, 1
 * 0000000140B0E43D: jz      loc_140B0E4DB
 * 0000000140B0E443: sub     ecx, 1
 * 0000000140B0E446: jz      loc_140B0E4D2
 * 0000000140B0E44C: sub     ecx, 1
 * 0000000140B0E44F: jz      short loc_140B0E496
 * 0000000140B0E451: cmp     ecx, 1
 * 0000000140B0E454: jz      short loc_140B0E46F
 * 0000000140B0E456: mov     rax, [r11+5B0h]
 * 0000000140B0E45D: mov     ecx, 1
 * 0000000140B0E462: lock or [rax+340h], rcx
 * 0000000140B0E46A: jmp     loc_140B0E4F1
 * 0000000140B0E46F: mov     rcx, gs:20h
 * 0000000140B0E478: mov     rax, [r11+650h]
 * 0000000140B0E47F: mov     edx, [r11+990h]
 * 0000000140B0E486: shr     edx, 0Ah
 * 0000000140B0E489: and     edx, 1Fh
 * 0000000140B0E48C: mov     rcx, [rax+rcx]
 * 0000000140B0E490: lock bts [rcx], edx
 * 0000000140B0E494: jmp     short loc_140B0E4F1
 * 0000000140B0E496: mov     rcx, gs:20h
 * 0000000140B0E49F: mov     rax, [r11+650h]
 * 0000000140B0E4A6: mov     r8d, [r11+990h]
 * 0000000140B0E4AD: shr     r8d, 0Ah
 * 0000000140B0E4B1: and     r8d, 1Fh
 * 0000000140B0E4B5: mov     rcx, [rax+rcx]
 * 0000000140B0E4B9: add     rcx, [r11+6B0h]
 * 0000000140B0E4C0: mov     rax, [r11+690h]
 * 0000000140B0E4C7: mov     rdx, [rcx+rax]
 * 0000000140B0E4CB: lock bts [rdx], r8d
 * 0000000140B0E4D0: jmp     short loc_140B0E4F1
 * 0000000140B0E4D2: mov     rax, [r11+558h]
 * 0000000140B0E4D9: jmp     short loc_140B0E4EB
 * 0000000140B0E4DB: mov     rax, [r11+550h]
 * 0000000140B0E4E2: jmp     short loc_140B0E4EB
 * 0000000140B0E4E4: mov     rax, [r11+540h]
 * 0000000140B0E4EB: lock bts qword ptr [rax], 0
 * 0000000140B0E4F1: mov     rax, [r11+698h]
 * 0000000140B0E4F8: mov     [r14+rax], r10
 * 0000000140B0E4FC: mov     rax, [r11+6A8h]
 * 0000000140B0E503: mov     [r14+rax], r10
 * 0000000140B0E507: mov     rcx, [r11+158h]; Target
 * 0000000140B0E50E: call    KeGuardCheckICall
 * 0000000140B0E513: mov     rax, [rbp+0A70h+arg_0]
 * 0000000140B0E51A: mov     r9, r13
 * 0000000140B0E51D: mov     [rsp+0B70h+var_B40], rsi
 * 0000000140B0E522: mov     r8, rbx
 * 0000000140B0E525: mov     rdx, rdi
 * 0000000140B0E528: mov     ecx, 109h
 * 0000000140B0E52D: mov     rax, [rax+158h]
 * 0000000140B0E534: mov     [rsp+0B70h+var_B48], rax
 * 0000000140B0E539: mov     [rsp+0B70h+BugCheckParameter4], r12
 * 0000000140B0E53E: call    SdbpCheckDll
 */
