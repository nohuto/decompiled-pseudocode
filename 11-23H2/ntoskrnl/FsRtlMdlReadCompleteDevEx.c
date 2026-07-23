/*
 * XREFs of FsRtlMdlReadCompleteDevEx @ 0x140AFA010
 * Callers:
 *     KiDecodeMcaFault @ 0x1403E38D0 (KiDecodeMcaFault.c)
 *     sub_1403F1B50 @ 0x1403F1B50 (sub_1403F1B50.c)
 *     FsRtlUninitializeSmallMcb @ 0x140B13540 (FsRtlUninitializeSmallMcb.c)
 * Callees:
 *     sub_1403F1D6C @ 0x1403F1D6C (sub_1403F1D6C.c)
 *     sub_1403F1E4C @ 0x1403F1E4C (sub_1403F1E4C.c)
 *     sub_1403F2D80 @ 0x1403F2D80 (sub_1403F2D80.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     sub_140B0D7A8 @ 0x140B0D7A8 (sub_140B0D7A8.c)
 *     sub_140B0F838 @ 0x140B0F838 (sub_140B0F838.c)
 *     sub_140B11020 @ 0x140B11020 (sub_140B11020.c)
 *     $$ba @ 0x140B11898 ($$ba.c)
 *     sub_140B11A74 @ 0x140B11A74 (sub_140B11A74.c)
 *     sub_140B120E0 @ 0x140B120E0 (sub_140B120E0.c)
 *     KiGetGdtIdt @ 0x140B133D0 (KiGetGdtIdt.c)
 *     KiGetLdtr @ 0x140B133E0 (KiGetLdtr.c)
 *     KiGetSs @ 0x140B133F0 (KiGetSs.c)
 *     KiGetTr @ 0x140B13400 (KiGetTr.c)
 *     KiErrata361Present @ 0x140B13410 (KiErrata361Present.c)
 *     KiErrataSkx55Present @ 0x140B13430 (KiErrataSkx55Present.c)
 *     KiErrata704Present @ 0x140B13440 (KiErrata704Present.c)
 *     SdbpCheckDll @ 0x140B134F0 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x140B137A0 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x140B137B0 (KeGuardCheckICall.c)
 *     RtlInitMinimalBarrier @ 0x140B1391C (RtlInitMinimalBarrier.c)
 *     sub_140B18070 @ 0x140B18070 (sub_140B18070.c)
 */

/*
 * Hex-Rays decompilation failed for FsRtlMdlReadCompleteDevEx @ 0x140AFA010
 * Reason: Hex-Rays returned no pseudocode for 0x140AFA010
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140AFA010: mov     [rsp-8+arg_0], rcx
 * 0000000140AFA015: push    rbp
 * 0000000140AFA016: push    rbx
 * 0000000140AFA017: push    rsi
 * 0000000140AFA018: push    rdi
 * 0000000140AFA019: push    r12
 * 0000000140AFA01B: push    r13
 * 0000000140AFA01D: push    r14
 * 0000000140AFA01F: push    r15
 * 0000000140AFA021: lea     rbp, [rsp-0A38h]
 * 0000000140AFA029: sub     rsp, 0B38h
 * 0000000140AFA030: mov     eax, [rcx+990h]
 * 0000000140AFA036: xor     r9d, r9d
 * 0000000140AFA039: mov     r13, rcx
 * 0000000140AFA03C: mov     edi, 0FFFFFFF8h
 * 0000000140AFA041: mov     ecx, 110000h
 * 0000000140AFA046: mov     esi, 0FFFFFFFFh
 * 0000000140AFA04B: and     eax, ecx
 * 0000000140AFA04D: mov     r11d, 12Fh
 * 0000000140AFA053: lea     r10d, [r9+1]
 * 0000000140AFA057: cmp     eax, ecx
 * 0000000140AFA059: jz      loc_140AFA10F
 * 0000000140AFA05F: mov     rdx, [r13+8E0h]
 * 0000000140AFA066: lea     ecx, [r11+1]
 * 0000000140AFA06A: mov     rax, rdx
 * 0000000140AFA06D: lea     r8d, [r9+26h]
 * 0000000140AFA071: mov     [rax], r9
 * 0000000140AFA074: add     ecx, edi
 * 0000000140AFA076: add     rax, 8
 * 0000000140AFA07A: sub     r8, r10
 * 0000000140AFA07D: jnz     short loc_140AFA071
 * 0000000140AFA07F: test    ecx, ecx
 * 0000000140AFA081: jz      short loc_140AFA08D
 * 0000000140AFA083: mov     [rax], r9b
 * 0000000140AFA086: add     rax, r10
 * 0000000140AFA089: add     ecx, esi
 * 0000000140AFA08B: jnz     short loc_140AFA083
 * 0000000140AFA08D: movups  xmm0, xmmword ptr [r13+848h]
 * 0000000140AFA095: lea     rax, [r13+878h]
 * 0000000140AFA09C: mov     rcx, rax
 * 0000000140AFA09F: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140AFA0A4: shr     rcx, 10h
 * 0000000140AFA0A8: movups  xmm1, xmmword ptr [r13+858h]
 * 0000000140AFA0B0: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140AFA0B5: movups  xmm0, xmmword ptr [r13+868h]
 * 0000000140AFA0BD: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140AFA0C5: mov     [rbp+212h], rdx
 * 0000000140AFA0CC: mov     word ptr [rbp+0A70h+var_860], r11w
 * 0000000140AFA0D4: mov     [rdx+10h], ax
 * 0000000140AFA0D8: shr     rax, 20h
 * 0000000140AFA0DC: mov     [rdx+16h], cx
 * 0000000140AFA0E0: mov     [rdx+18h], eax
 * 0000000140AFA0E3: cli
 * 0000000140AFA0E4: xor     eax, eax
 * 0000000140AFA0E6: cmp     [r13+990h], eax
 * 0000000140AFA0ED: jge     short loc_140AFA0F5
 * 0000000140AFA0EF: mov     dr7, rax
 * 0000000140AFA0F2: sti
 * 0000000140AFA0F3: jmp     short loc_140AFA111
 * 0000000140AFA0F5: sidt    fword ptr [rbp+0A70h+var_730]
 * 0000000140AFA0FC: lidt    fword ptr [rbp+0A70h+var_860]
 * 0000000140AFA103: mov     dr7, rax
 * 0000000140AFA106: lidt    fword ptr [rbp+0A70h+var_730]
 * 0000000140AFA10D: jmp     short loc_140AFA0F2
 * 0000000140AFA10F: xor     eax, eax
 * 0000000140AFA111: test    dword ptr [r13+994h], 100h
 * 0000000140AFA11C: mov     [rbp+0A70h+var_A78], rax
 * 0000000140AFA120: jz      short loc_140AFA137
 * 0000000140AFA122: lea     rcx, [rbp+0A78h]
 * 0000000140AFA129: mov     rax, [rcx]
 * 0000000140AFA12C: mov     [rbp+0A70h+var_A78], rax
 * 0000000140AFA130: xor     eax, eax
 * 0000000140AFA132: mov     [rcx], rax
 * 0000000140AFA135: jmp     short loc_140AFA139
 * 0000000140AFA137: xor     eax, eax
 * 0000000140AFA139: mov     r12d, 20h ; ' '
 * 0000000140AFA13F: mov     [r13+828h], eax
 * 0000000140AFA146: test    dword ptr [r13+990h], 40000000h
 * 0000000140AFA151: mov     rbx, 7010008004002001h
 * 0000000140AFA15B: lea     r15d, [r12-1Ch]
 * 0000000140AFA160: jz      short loc_140AFA171
 * 0000000140AFA162: xor     eax, eax
 * 0000000140AFA164: cmp     [r13+0A78h], rax
 * 0000000140AFA16B: jnz     loc_140AFA55B
 * 0000000140AFA171: mov     r14, [r13+7B8h]
 * 0000000140AFA178: lea     rbx, [r13+798h]
 * 0000000140AFA17F: mov     [rbp+0A70h+arg_8], r14
 * 0000000140AFA186: lea     rdx, [rbp+0A70h+var_110]
 * 0000000140AFA18D: mov     rcx, rbx
 * 0000000140AFA190: mov     r8d, r12d
 * 0000000140AFA193: mov     r9, r15
 * 0000000140AFA196: mov     rax, [rcx]
 * 0000000140AFA199: add     r8d, edi
 * 0000000140AFA19C: mov     [rdx], rax
 * 0000000140AFA19F: add     rcx, 8
 * 0000000140AFA1A3: add     rdx, 8
 * 0000000140AFA1A7: sub     r9, r10
 * 0000000140AFA1AA: jnz     short loc_140AFA196
 * 0000000140AFA1AC: xor     eax, eax
 * 0000000140AFA1AE: test    r8d, r8d
 * 0000000140AFA1B1: jz      short loc_140AFA1C4
 * 0000000140AFA1B3: mov     al, [rcx]
 * 0000000140AFA1B5: add     rcx, r10
 * 0000000140AFA1B8: mov     [rdx], al
 * 0000000140AFA1BA: add     rdx, r10
 * 0000000140AFA1BD: add     r8d, esi
 * 0000000140AFA1C0: jnz     short loc_140AFA1B3
 * 0000000140AFA1C2: xor     eax, eax
 * 0000000140AFA1C4: mov     [r13+7B8h], rax
 * 0000000140AFA1CB: mov     ecx, r12d
 * 0000000140AFA1CE: mov     [r13+828h], eax
 * 0000000140AFA1D5: mov     rdx, r15
 * 0000000140AFA1D8: mov     rax, rbx
 * 0000000140AFA1DB: xor     r8d, r8d
 * 0000000140AFA1DE: mov     [rax], r8
 * 0000000140AFA1E1: add     ecx, edi
 * 0000000140AFA1E3: add     rax, 8
 * 0000000140AFA1E7: sub     rdx, r10
 * 0000000140AFA1EA: jnz     short loc_140AFA1DE
 * 0000000140AFA1EC: test    ecx, ecx
 * 0000000140AFA1EE: jz      short loc_140AFA1FA
 * 0000000140AFA1F0: mov     [rax], r8b
 * 0000000140AFA1F3: add     rax, r10
 * 0000000140AFA1F6: add     ecx, esi
 * 0000000140AFA1F8: jnz     short loc_140AFA1F0
 * 0000000140AFA1FA: mov     r10d, [r13+7E4h]
 * 0000000140AFA201: mov     r9, r13
 * 0000000140AFA204: add     [r13+828h], r10d
 * 0000000140AFA20B: mov     rax, r13
 * 0000000140AFA20E: mov     r11d, [r13+814h]
 * 0000000140AFA215: mov     rsi, [r13+818h]
 * 0000000140AFA21C: lea     rcx, [r10+r13]
 * 0000000140AFA220: cmp     r13, rcx
 * 0000000140AFA223: jnb     short loc_140AFA235
 * 0000000140AFA225: mov     edx, 40h ; '@'
 * 0000000140AFA22A: prefetchnta byte ptr [rax]
 * 0000000140AFA22D: add     rax, rdx
 * 0000000140AFA230: cmp     rax, rcx
 * 0000000140AFA233: jb      short loc_140AFA22A
 * 0000000140AFA235: mov     edi, r10d
 * 0000000140AFA238: mov     r8, rsi
 * 0000000140AFA23B: shr     edi, 7
 * 0000000140AFA23E: mov     edx, 1
 * 0000000140AFA243: test    edi, edi
 * 0000000140AFA245: jz      short loc_140AFA2B8
 * 0000000140AFA247: mov     ebx, 0FFFFFFFFh
 * 0000000140AFA24C: mov     r14, 7010008004002001h
 * 0000000140AFA256: mov     eax, 8
 * 0000000140AFA25B: xor     r8, [r9]
 * 0000000140AFA25E: mov     ecx, r11d
 * 0000000140AFA261: rol     r8, cl
 * 0000000140AFA264: xor     r8, [r9+8]
 * 0000000140AFA268: add     r9, 10h
 * 0000000140AFA26C: rol     r8, cl
 * 0000000140AFA26F: sub     rax, rdx
 * 0000000140AFA272: jnz     short loc_140AFA25B
 * 0000000140AFA274: mov     rcx, r9
 * 0000000140AFA277: sub     rcx, r13
 * 0000000140AFA27A: xor     rcx, rsi
 * 0000000140AFA27D: mov     rax, rcx
 * 0000000140AFA280: rol     rax, 11h
 * 0000000140AFA284: xor     rcx, rax
 * 0000000140AFA287: mov     rax, r14
 * 0000000140AFA28A: mul     rcx
 * 0000000140AFA28D: xor     eax, edx
 * 0000000140AFA28F: mov     [rbp+0A70h+var_3E8], rdx
 * 0000000140AFA296: xor     r11d, eax
 * 0000000140AFA299: mov     edx, 1
 * 0000000140AFA29E: and     r11d, 3Fh
 * 0000000140AFA2A2: cmovz   r11d, edx
 * 0000000140AFA2A6: add     edi, ebx
 * 0000000140AFA2A8: jnz     short loc_140AFA256
 * 0000000140AFA2AA: mov     r14, [rbp+0A70h+arg_8]
 * 0000000140AFA2B1: lea     rbx, [r13+798h]
 * 0000000140AFA2B8: and     r10d, 7Fh
 * 0000000140AFA2BC: cmp     r10d, 8
 * 0000000140AFA2C0: jb      short loc_140AFA2DF
 * 0000000140AFA2C2: mov     eax, r10d
 * 0000000140AFA2C5: shr     rax, 3
 * 0000000140AFA2C9: xor     r8, [r9]
 * 0000000140AFA2CC: mov     ecx, r11d
 * 0000000140AFA2CF: rol     r8, cl
 * 0000000140AFA2D2: add     r9, 8
 * 0000000140AFA2D6: add     r10d, 0FFFFFFF8h
 * 0000000140AFA2DA: sub     rax, rdx
 * 0000000140AFA2DD: jnz     short loc_140AFA2C9
 * 0000000140AFA2DF: mov     esi, 0FFFFFFFFh
 * 0000000140AFA2E4: test    r10d, r10d
 * 0000000140AFA2E7: jz      short loc_140AFA2FE
 * 0000000140AFA2E9: movzx   eax, byte ptr [r9]
 * 0000000140AFA2ED: mov     ecx, r11d
 * 0000000140AFA2F0: xor     r8, rax
 * 0000000140AFA2F3: add     r9, rdx
 * 0000000140AFA2F6: rol     r8, cl
 * 0000000140AFA2F9: add     r10d, esi
 * 0000000140AFA2FC: jnz     short loc_140AFA2E9
 * 0000000140AFA2FE: mov     edx, r12d
 * 0000000140AFA301: mov     [r13+7B8h], r14
 * 0000000140AFA308: mov     r12d, 1
 * 0000000140AFA30E: lea     rcx, [rbp+0A70h+var_110]
 * 0000000140AFA315: mov     r9, r15
 * 0000000140AFA318: mov     rax, [rcx]
 * 0000000140AFA31B: add     edx, 0FFFFFFF8h
 * 0000000140AFA31E: mov     [rbx], rax
 * 0000000140AFA321: add     rcx, 8
 * 0000000140AFA325: add     rbx, 8
 * 0000000140AFA329: sub     r9, r12
 * 0000000140AFA32C: jnz     short loc_140AFA318
 * 0000000140AFA32E: test    edx, edx
 * 0000000140AFA330: jz      short loc_140AFA340
 * 0000000140AFA332: mov     al, [rcx]
 * 0000000140AFA334: add     rcx, r12
 * 0000000140AFA337: mov     [rbx], al
 * 0000000140AFA339: add     rbx, r12
 * 0000000140AFA33C: add     edx, esi
 * 0000000140AFA33E: jnz     short loc_140AFA332
 * 0000000140AFA340: cmp     [r13+7B8h], r8
 * 0000000140AFA347: jz      short loc_140AFA3C8
 * 0000000140AFA349: mov     rax, [r13+588h]
 * 0000000140AFA350: mov     ecx, [r13+7E4h]
 * 0000000140AFA357: mov     [rax], r13
 * 0000000140AFA35A: mov     [rax+10h], ecx
 * 0000000140AFA35D: xor     eax, eax
 * 0000000140AFA35F: mov     rcx, [r13+7B8h]
 * 0000000140AFA366: cmp     [r13+8F8h], eax
 * 0000000140AFA36D: jnz     short loc_140AFA3C8
 * 0000000140AFA36F: mov     rax, [r13+588h]
 * 0000000140AFA376: xor     rcx, r8
 * 0000000140AFA379: mov     [rax+18h], rcx
 * 0000000140AFA37D: xor     eax, eax
 * 0000000140AFA37F: cmp     [r13+8F8h], eax
 * 0000000140AFA386: jnz     short loc_140AFA3C8
 * 0000000140AFA388: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFA392: xor     edx, edx
 * 0000000140AFA394: add     rax, r13
 * 0000000140AFA397: mov     rcx, r13
 * 0000000140AFA39A: mov     [r13+900h], rax
 * 0000000140AFA3A1: xor     eax, eax
 * 0000000140AFA3A3: mov     [r13+908h], rax
 * 0000000140AFA3AA: mov     qword ptr [r13+910h], 101h
 * 0000000140AFA3B5: mov     [r13+918h], r8
 * 0000000140AFA3BC: mov     [r13+8F8h], r12d
 * 0000000140AFA3C3: call    $$ba
 * 0000000140AFA3C8: mov     rbx, 7010008004002001h
 * 0000000140AFA3D2: mov     eax, [r13+990h]
 * 0000000140AFA3D9: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFA3E0: or      eax, r15d
 * 0000000140AFA3E3: mov     r8, 0ABCC77118461CEFDh
 * 0000000140AFA3ED: mov     [r13+990h], eax
 * 0000000140AFA3F4: mov     r14d, 2
 * 0000000140AFA3FA: add     [r13+834h], r12d
 * 0000000140AFA401: test    al, 8
 * 0000000140AFA403: jz      loc_140AFA7FC
 * 0000000140AFA409: bt      eax, 17h
 * 0000000140AFA40D: jb      loc_140AFA7FC
 * 0000000140AFA413: mov     eax, [r13+994h]
 * 0000000140AFA41A: mov     r10, [r13+0A70h]
 * 0000000140AFA421: mov     esi, [r13+7E4h]
 * 0000000140AFA428: mov     r11, [r13+9F8h]
 * 0000000140AFA42F: mov     r15d, [r13+808h]
 * 0000000140AFA436: mov     [rbp+0A70h+arg_8], r10
 * 0000000140AFA43D: and     eax, r12d
 * 0000000140AFA440: jz      short loc_140AFA449
 * 0000000140AFA442: mov     r11, [r13+5D0h]
 * 0000000140AFA449: mov     rax, [r13+2C8h]
 * 0000000140AFA450: mov     r12, [r13+160h]
 * 0000000140AFA457: mov     [rbp+0A70h+var_A80], rax
 * 0000000140AFA45B: mov     rax, [r13+340h]
 * 0000000140AFA462: mov     [rbp+0A70h+var_AC0], rax
 * 0000000140AFA466: mov     [rbp+0A70h+var_A28], r12
 * 0000000140AFA46A: rdtsc
 * 0000000140AFA46C: shl     rdx, 20h
 * 0000000140AFA470: or      rax, rdx
 * 0000000140AFA473: mov     rcx, rax
 * 0000000140AFA476: ror     rax, 3
 * 0000000140AFA47A: xor     rcx, rax
 * 0000000140AFA47D: mov     rax, rbx
 * 0000000140AFA480: mul     rcx
 * 0000000140AFA483: mov     rcx, rdx
 * 0000000140AFA486: mov     [rbp+0A70h+var_3A0], rdx
 * 0000000140AFA48D: xor     rcx, rax
 * 0000000140AFA490: mov     rax, r8
 * 0000000140AFA493: mul     rcx
 * 0000000140AFA496: mov     r8, rdi
 * 0000000140AFA499: shr     rdx, 1Ah
 * 0000000140AFA49D: imul    rax, rdx, 5F5E100h
 * 0000000140AFA4A4: sub     rcx, rax
 * 0000000140AFA4A7: sub     r8, rcx
 * 0000000140AFA4AA: mov     [rbp+0A70h+var_9A8], r8
 * 0000000140AFA4B1: mov     r9d, [r13+990h]
 * 0000000140AFA4B8: bt      r9d, 1Ah
 * 0000000140AFA4BD: jnb     loc_140AFA566
 * 0000000140AFA4C3: rdtsc
 * 0000000140AFA4C5: shl     rdx, 20h
 * 0000000140AFA4C9: mov     r13, 0CCCCCCCCCCCCCCCDh
 * 0000000140AFA4D3: or      rax, rdx
 * 0000000140AFA4D6: mov     rcx, rax
 * 0000000140AFA4D9: ror     rax, 3
 * 0000000140AFA4DD: xor     rcx, rax
 * 0000000140AFA4E0: mov     rax, rbx
 * 0000000140AFA4E3: mul     rcx
 * 0000000140AFA4E6: mov     rcx, rdx
 * 0000000140AFA4E9: mov     [rbp+0A70h+var_398], rdx
 * 0000000140AFA4F0: xor     rcx, rax
 * 0000000140AFA4F3: mov     rax, r13
 * 0000000140AFA4F6: mul     rcx
 * 0000000140AFA4F9: shr     rdx, 3
 * 0000000140AFA4FD: lea     rax, [rdx+rdx*4]
 * 0000000140AFA501: add     rax, rax
 * 0000000140AFA504: sub     rcx, rax
 * 0000000140AFA507: cmp     rcx, r14
 * 0000000140AFA50A: jnb     short loc_140AFA566
 * 0000000140AFA50C: rdtsc
 * 0000000140AFA50E: shl     rdx, 20h
 * 0000000140AFA512: or      rax, rdx
 * 0000000140AFA515: mov     rcx, rax
 * 0000000140AFA518: ror     rax, 3
 * 0000000140AFA51C: xor     rcx, rax
 * 0000000140AFA51F: mov     rax, rbx
 * 0000000140AFA522: mul     rcx
 * 0000000140AFA525: mov     rcx, rdx
 * 0000000140AFA528: mov     [rbp+0A70h+var_390], rdx
 * 0000000140AFA52F: xor     rcx, rax
 * 0000000140AFA532: mov     rax, r13
 * 0000000140AFA535: mul     rcx
 * 0000000140AFA538: shr     rdx, 3
 * 0000000140AFA53C: lea     rax, [rdx+rdx*4]
 * 0000000140AFA540: mov     edx, 1
 * 0000000140AFA545: add     rax, rax
 * 0000000140AFA548: sub     rcx, rax
 * 0000000140AFA54B: add     rcx, rdx
 * 0000000140AFA54E: imul    rcx, r8
 * 0000000140AFA552: mov     [rbp+0A70h+var_9A8], rcx
 * 0000000140AFA559: jmp     short loc_140AFA56B
 * 0000000140AFA55B: mov     r12d, 1
 * 0000000140AFA561: jmp     loc_140AFA3D2
 * 0000000140AFA566: mov     edx, 1
 * 0000000140AFA56B: xor     eax, eax
 * 0000000140AFA56D: mov     ebx, eax
 * 0000000140AFA56F: mov     r14d, eax
 * 0000000140AFA572: lea     ecx, [rax+2]
 * 0000000140AFA575: test    cl, r9b
 * 0000000140AFA578: cmovz   esi, r15d
 * 0000000140AFA57C: test    r9b, r9b
 * 0000000140AFA57F: js      short loc_140AFA589
 * 0000000140AFA581: mov     r13d, eax
 * 0000000140AFA584: jmp     loc_140AFA66B
 * 0000000140AFA589: mov     r13d, edx
 * 0000000140AFA58C: rdtsc
 * 0000000140AFA58E: shl     rdx, 20h
 * 0000000140AFA592: mov     r12d, 1
 * 0000000140AFA598: or      rax, rdx
 * 0000000140AFA59B: mov     rcx, rax
 * 0000000140AFA59E: ror     rax, 3
 * 0000000140AFA5A2: xor     rcx, rax
 * 0000000140AFA5A5: mov     rax, 7010008004002001h
 * 0000000140AFA5AF: mul     rcx
 * 0000000140AFA5B2: mov     ecx, 154h
 * 0000000140AFA5B7: mov     rbx, rdx
 * 0000000140AFA5BA: mov     [rbp+0A70h+var_388], rdx
 * 0000000140AFA5C1: mov     rdx, [rbp+0A70h+arg_0]
 * 0000000140AFA5C8: xor     rbx, rax
 * 0000000140AFA5CB: mov     r14, rbx
 * 0000000140AFA5CE: mov     r8, rbx
 * 0000000140AFA5D1: xor     r14, rdx
 * 0000000140AFA5D4: lea     rax, [rdx+0A98h]
 * 0000000140AFA5DB: xor     [rax], r8
 * 0000000140AFA5DE: lea     rax, [rax-8]
 * 0000000140AFA5E2: ror     r8, cl
 * 0000000140AFA5E5: sub     ecx, r12d
 * 0000000140AFA5E8: jnz     short loc_140AFA5DB
 * 0000000140AFA5EA: lea     r9, [r15-0AA0h]
 * 0000000140AFA5F1: mov     r12, r15
 * 0000000140AFA5F4: shr     r9, 3
 * 0000000140AFA5F8: test    r9d, r9d
 * 0000000140AFA5FB: jz      short loc_140AFA63B
 * 0000000140AFA5FD: movsxd  r10, r9d
 * 0000000140AFA600: lea     edi, [rcx+1]
 * 0000000140AFA603: add     r10, 153h
 * 0000000140AFA60A: lea     r10, [rdx+r10*8]
 * 0000000140AFA60E: mov     rdx, [r10]
 * 0000000140AFA611: lea     rax, [r14+r14]
 * 0000000140AFA615: mov     ecx, r9d
 * 0000000140AFA618: lea     r10, [r10-8]
 * 0000000140AFA61C: ror     rdx, cl
 * 0000000140AFA61F: mov     r14, rdx
 * 0000000140AFA622: xor     r14, rax
 * 0000000140AFA625: sub     r9d, edi
 * 0000000140AFA628: jnz     short loc_140AFA60E
 * 0000000140AFA62A: mov     r10, [rbp+0A70h+arg_8]
 * 0000000140AFA631: mov     r12, r15
 * 0000000140AFA634: mov     rdx, [rbp+0A70h+arg_0]
 * 0000000140AFA63B: mov     ecx, esi
 * 0000000140AFA63D: add     rdx, r12
 * 0000000140AFA640: sub     ecx, r15d
 * 0000000140AFA643: shr     ecx, 3
 * 0000000140AFA646: test    ecx, ecx
 * 0000000140AFA648: jz      short loc_140AFA667
 * 0000000140AFA64A: lea     rdx, [rdx+rcx*8]
 * 0000000140AFA64E: mov     r9d, 1
 * 0000000140AFA654: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140AFA658: xor     [rdx], r8
 * 0000000140AFA65B: lea     rdx, [rdx-8]
 * 0000000140AFA65F: ror     r8, cl
 * 0000000140AFA662: sub     ecx, r9d
 * 0000000140AFA665: jnz     short loc_140AFA658
 * 0000000140AFA667: mov     r12, [rbp+0A70h+var_A28]
 * 0000000140AFA66B: test    r10, r10
 * 0000000140AFA66E: jz      short loc_140AFA693
 * 0000000140AFA670: mov     rcx, [rbp+0A70h+arg_0]
 * 0000000140AFA677: lea     r8, [rbp+0A70h+var_9A8]
 * 0000000140AFA67E: mov     rax, [rbp+0A70h+var_AC0]
 * 0000000140AFA682: mov     r9, r12
 * 0000000140AFA685: mov     edx, esi
 * 0000000140AFA687: mov     [rsp+0B70h+BugCheckParameter4], r10
 * 0000000140AFA68C: call    KeGuardDispatchICall
 * 0000000140AFA691: jmp     short loc_140AFA6CB
 * 0000000140AFA693: xor     edx, edx
 * 0000000140AFA695: test    r11, r11
 * 0000000140AFA698: jnz     short loc_140AFA6AD
 * 0000000140AFA69A: lea     r8, [rbp+0A70h+var_9A8]
 * 0000000140AFA6A1: xor     ecx, ecx
 * 0000000140AFA6A3: mov     rax, r12
 * 0000000140AFA6A6: call    KeGuardDispatchICall
 * 0000000140AFA6AB: jmp     short loc_140AFA6CB
 * 0000000140AFA6AD: lea     rax, [rbp+0A70h+var_9A8]
 * 0000000140AFA6B4: xor     r9d, r9d
 * 0000000140AFA6B7: mov     [rsp+0B70h+BugCheckParameter4], rax
 * 0000000140AFA6BC: xor     r8d, r8d
 * 0000000140AFA6BF: mov     rax, [rbp+0A70h+var_A80]
 * 0000000140AFA6C3: mov     rcx, r11
 * 0000000140AFA6C6: call    KeGuardDispatchICall
 * 0000000140AFA6CB: xor     eax, eax
 * 0000000140AFA6CD: test    r13d, r13d
 * 0000000140AFA6D0: mov     r13, [rbp+0A70h+arg_0]
 * 0000000140AFA6D7: lea     r12d, [rax+1]
 * 0000000140AFA6DB: jz      loc_140AFABDF
 * 0000000140AFA6E1: mov     r8, rbx
 * 0000000140AFA6E4: lea     rax, [r13+0A98h]
 * 0000000140AFA6EB: xor     r8, r13
 * 0000000140AFA6EE: mov     ecx, 154h
 * 0000000140AFA6F3: xor     [rax], rbx
 * 0000000140AFA6F6: lea     rax, [rax-8]
 * 0000000140AFA6FA: ror     rbx, cl
 * 0000000140AFA6FD: sub     ecx, r12d
 * 0000000140AFA700: jnz     short loc_140AFA6F3
 * 0000000140AFA702: lea     r9, [r15-0AA0h]
 * 0000000140AFA709: mov     r11, r15
 * 0000000140AFA70C: shr     r9, 3
 * 0000000140AFA710: test    r9d, r9d
 * 0000000140AFA713: jz      short loc_140AFA742
 * 0000000140AFA715: movsxd  rax, r9d
 * 0000000140AFA718: lea     r10, [r13+0A98h]
 * 0000000140AFA71F: lea     r10, [r10+rax*8]
 * 0000000140AFA723: mov     rdx, [r10]
 * 0000000140AFA726: lea     rax, [r8+r8]
 * 0000000140AFA72A: mov     ecx, r9d
 * 0000000140AFA72D: lea     r10, [r10-8]
 * 0000000140AFA731: ror     rdx, cl
 * 0000000140AFA734: mov     r8, rdx
 * 0000000140AFA737: xor     r8, rax
 * 0000000140AFA73A: sub     r9d, r12d
 * 0000000140AFA73D: jnz     short loc_140AFA723
 * 0000000140AFA73F: mov     r11, r15
 * 0000000140AFA742: sub     esi, r15d
 * 0000000140AFA745: lea     rcx, [r11+r13]
 * 0000000140AFA749: shr     esi, 3
 * 0000000140AFA74C: test    esi, esi
 * 0000000140AFA74E: jz      short loc_140AFA76A
 * 0000000140AFA750: mov     eax, esi
 * 0000000140AFA752: dec     rax
 * 0000000140AFA755: lea     rdx, [rcx+rax*8]
 * 0000000140AFA759: xor     [rdx], rbx
 * 0000000140AFA75C: mov     ecx, esi
 * 0000000140AFA75E: ror     rbx, cl
 * 0000000140AFA761: lea     rdx, [rdx-8]
 * 0000000140AFA765: sub     esi, r12d
 * 0000000140AFA768: jnz     short loc_140AFA759
 * 0000000140AFA76A: cmp     r8, r14
 * 0000000140AFA76D: jz      loc_140AFA7F6
 * 0000000140AFA773: mov     rax, [r13+588h]
 * 0000000140AFA77A: mov     ecx, [r13+7E4h]
 * 0000000140AFA781: mov     [rax], r13
 * 0000000140AFA784: mov     [rax+10h], ecx
 * 0000000140AFA787: xor     eax, eax
 * 0000000140AFA789: cmp     [r13+8F8h], eax
 * 0000000140AFA790: jnz     loc_140AFABDF
 * 0000000140AFA796: mov     rax, [r13+588h]
 * 0000000140AFA79D: mov     rcx, r8
 * 0000000140AFA7A0: xor     rcx, r14
 * 0000000140AFA7A3: mov     [rax+18h], rcx
 * 0000000140AFA7A7: xor     eax, eax
 * 0000000140AFA7A9: cmp     [r13+8F8h], eax
 * 0000000140AFA7B0: jnz     loc_140AFABDF
 * 0000000140AFA7B6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFA7C0: xor     edx, edx
 * 0000000140AFA7C2: add     rax, r13
 * 0000000140AFA7C5: mov     rcx, r13
 * 0000000140AFA7C8: mov     [r13+900h], rax
 * 0000000140AFA7CF: xor     eax, eax
 * 0000000140AFA7D1: mov     [r13+908h], rax
 * 0000000140AFA7D8: mov     qword ptr [r13+910h], 10Eh
 * 0000000140AFA7E3: mov     [r13+918h], r8
 * 0000000140AFA7EA: mov     [r13+8F8h], r12d
 * 0000000140AFA7F1: call    $$ba
 * 0000000140AFA7F6: mov     r15d, 4
 * 0000000140AFA7FC: xor     eax, eax
 * 0000000140AFA7FE: mov     esi, [r13+0C4h]
 * 0000000140AFA805: lea     rcx, [r13+628h]
 * 0000000140AFA80C: mov     [r13+0C4h], eax
 * 0000000140AFA813: mov     r9, r13
 * 0000000140AFA816: add     dword ptr [r13+828h], 628h
 * 0000000140AFA821: mov     rax, r13
 * 0000000140AFA824: mov     r10d, [r13+814h]
 * 0000000140AFA82B: mov     r11, [r13+818h]
 * 0000000140AFA832: mov     dword ptr [rbp+0A70h+arg_8], esi
 * 0000000140AFA838: cmp     r13, rcx
 * 0000000140AFA83B: jnb     short loc_140AFA84D
 * 0000000140AFA83D: mov     edx, 40h ; '@'
 * 0000000140AFA842: prefetchnta byte ptr [rax]
 * 0000000140AFA845: add     rax, rdx
 * 0000000140AFA848: cmp     rax, rcx
 * 0000000140AFA84B: jb      short loc_140AFA842
 * 0000000140AFA84D: mov     r8, r11
 * 0000000140AFA850: mov     ebx, 0Ch
 * 0000000140AFA855: mov     rsi, 7010008004002001h
 * 0000000140AFA85F: mov     r14d, 0FFFFFFFFh
 * 0000000140AFA865: mov     eax, 8
 * 0000000140AFA86A: xor     r8, [r9]
 * 0000000140AFA86D: mov     ecx, r10d
 * 0000000140AFA870: rol     r8, cl
 * 0000000140AFA873: xor     r8, [r9+8]
 * 0000000140AFA877: add     r9, 10h
 * 0000000140AFA87B: rol     r8, cl
 * 0000000140AFA87E: sub     rax, r12
 * 0000000140AFA881: jnz     short loc_140AFA86A
 * 0000000140AFA883: mov     rcx, r9
 * 0000000140AFA886: sub     rcx, r13
 * 0000000140AFA889: xor     rcx, r11
 * 0000000140AFA88C: mov     rax, rcx
 * 0000000140AFA88F: rol     rax, 11h
 * 0000000140AFA893: xor     rcx, rax
 * 0000000140AFA896: mov     rax, rsi
 * 0000000140AFA899: mul     rcx
 * 0000000140AFA89C: xor     r10d, eax
 * 0000000140AFA89F: mov     [rbp+0A70h+var_380], rdx
 * 0000000140AFA8A6: xor     r10d, edx
 * 0000000140AFA8A9: and     r10d, 3Fh
 * 0000000140AFA8AD: cmovz   r10d, r12d
 * 0000000140AFA8B1: add     ebx, r14d
 * 0000000140AFA8B4: jnz     short loc_140AFA865
 * 0000000140AFA8B6: mov     esi, dword ptr [rbp+0A70h+arg_8]
 * 0000000140AFA8BC: lea     eax, [rbx+5]
 * 0000000140AFA8BF: mov     [rbp+0A70h+var_A28], rax
 * 0000000140AFA8C3: lea     edx, [rbx+28h]
 * 0000000140AFA8C6: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFA8CD: xor     r8, [r9]
 * 0000000140AFA8D0: mov     ecx, r10d
 * 0000000140AFA8D3: rol     r8, cl
 * 0000000140AFA8D6: add     r9, 8
 * 0000000140AFA8DA: add     edx, 0FFFFFFF8h
 * 0000000140AFA8DD: sub     rax, r12
 * 0000000140AFA8E0: jnz     short loc_140AFA8CD
 * 0000000140AFA8E2: test    edx, edx
 * 0000000140AFA8E4: jz      short loc_140AFA8FB
 * 0000000140AFA8E6: movzx   eax, byte ptr [r9]
 * 0000000140AFA8EA: mov     ecx, r10d
 * 0000000140AFA8ED: xor     r8, rax
 * 0000000140AFA8F0: add     r9, r12
 * 0000000140AFA8F3: rol     r8, cl
 * 0000000140AFA8F6: add     edx, r14d
 * 0000000140AFA8F9: jnz     short loc_140AFA8E6
 * 0000000140AFA8FB: mov     [r13+0C4h], esi
 * 0000000140AFA902: cmp     [r13+0A20h], r8
 * 0000000140AFA909: jz      loc_140AFA991
 * 0000000140AFA90F: mov     rax, [r13+588h]
 * 0000000140AFA916: mov     ecx, [r13+7E4h]
 * 0000000140AFA91D: mov     [rax], r13
 * 0000000140AFA920: mov     [rax+10h], ecx
 * 0000000140AFA923: xor     ecx, ecx
 * 0000000140AFA925: mov     rax, [r13+0A20h]
 * 0000000140AFA92C: cmp     [r13+8F8h], ecx
 * 0000000140AFA933: jnz     short loc_140AFA991
 * 0000000140AFA935: mov     rcx, r8
 * 0000000140AFA938: xor     rcx, rax
 * 0000000140AFA93B: mov     rax, [r13+588h]
 * 0000000140AFA942: mov     [rax+18h], rcx
 * 0000000140AFA946: xor     eax, eax
 * 0000000140AFA948: cmp     [r13+8F8h], eax
 * 0000000140AFA94F: jnz     short loc_140AFA991
 * 0000000140AFA951: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFA95B: xor     edx, edx
 * 0000000140AFA95D: add     rax, r13
 * 0000000140AFA960: mov     rcx, r13
 * 0000000140AFA963: mov     [r13+900h], rax
 * 0000000140AFA96A: xor     eax, eax
 * 0000000140AFA96C: mov     [r13+908h], rax
 * 0000000140AFA973: mov     qword ptr [r13+910h], 109h
 * 0000000140AFA97E: mov     [r13+918h], r8
 * 0000000140AFA985: mov     [r13+8F8h], r12d
 * 0000000140AFA98C: call    $$ba
 * 0000000140AFA991: xor     edx, edx
 * 0000000140AFA993: mov     rcx, r13
 * 0000000140AFA996: call    $$ba
 * 0000000140AFA99B: mov     ecx, [r13+970h]
 * 0000000140AFA9A2: xor     eax, eax
 * 0000000140AFA9A4: mov     [rsp+0B70h+var_B10], r13
 * 0000000140AFA9A9: mov     rsi, r13
 * 0000000140AFA9AC: mov     [rbp+0A70h+var_A68], eax
 * 0000000140AFA9AF: mov     [rbp+0A70h+var_AE0], eax
 * 0000000140AFA9B2: cmp     ecx, r14d
 * 0000000140AFA9B5: jz      short loc_140AFAA0E
 * 0000000140AFA9B7: mov     rax, [r13+278h]
 * 0000000140AFA9BE: call    KeGuardDispatchICall
 * 0000000140AFA9C3: mov     rbx, rax
 * 0000000140AFA9C6: test    rax, rax
 * 0000000140AFA9C9: jnz     short loc_140AFA9E1
 * 0000000140AFA9CB: mov     rax, [r13+280h]
 * 0000000140AFA9D2: xor     ecx, ecx
 * 0000000140AFA9D4: call    KeGuardDispatchICall
 * 0000000140AFA9D9: mov     rbx, rax
 * 0000000140AFA9DC: test    rax, rax
 * 0000000140AFA9DF: jz      short loc_140AFAA0E
 * 0000000140AFA9E1: mov     rax, [r13+290h]
 * 0000000140AFA9E8: lea     rdx, [rbp+0A70h+var_680]
 * 0000000140AFA9EF: mov     rcx, rbx
 * 0000000140AFA9F2: call    KeGuardDispatchICall
 * 0000000140AFA9F7: test    eax, eax
 * 0000000140AFA9F9: jns     loc_140AFABEA
 * 0000000140AFA9FF: mov     rax, [r13+288h]
 * 0000000140AFAA06: mov     rcx, rbx
 * 0000000140AFAA09: call    KeGuardDispatchICall
 * 0000000140AFAA0E: mov     eax, [r13+994h]
 * 0000000140AFAA15: test    al, 8
 * 0000000140AFAA17: jz      loc_140AFAB36
 * 0000000140AFAA1D: bt      eax, 0Ch
 * 0000000140AFAA21: jb      loc_140AFAB36
 * 0000000140AFAA27: rdtsc
 * 0000000140AFAA29: shl     rdx, 20h
 * 0000000140AFAA2D: mov     rbx, 7010008004002001h
 * 0000000140AFAA37: or      rax, rdx
 * 0000000140AFAA3A: mov     rcx, rax
 * 0000000140AFAA3D: ror     rax, 3
 * 0000000140AFAA41: xor     rcx, rax
 * 0000000140AFAA44: mov     rax, rbx
 * 0000000140AFAA47: mul     rcx
 * 0000000140AFAA4A: mov     [rbp+0A70h+var_378], rdx
 * 0000000140AFAA51: xor     dl, al
 * 0000000140AFAA53: test    dl, 3
 * 0000000140AFAA56: jnz     loc_140AFAB36
 * 0000000140AFAA5C: mov     rax, [r13+0F0h]
 * 0000000140AFAA63: mov     ecx, 40h ; '@'
 * 0000000140AFAA68: mov     r8d, [r13+810h]
 * 0000000140AFAA6F: mov     rdx, [r13+770h]
 * 0000000140AFAA76: call    KeGuardDispatchICall
 * 0000000140AFAA7B: mov     r15, rax
 * 0000000140AFAA7E: xor     eax, eax
 * 0000000140AFAA80: test    r15, r15
 * 0000000140AFAA83: jz      loc_140AFAB38
 * 0000000140AFAA89: mov     rax, [r13+1A8h]
 * 0000000140AFAA90: mov     rcx, r15
 * 0000000140AFAA93: movzx   edx, word ptr [r13+778h]
 * 0000000140AFAA9B: call    KeGuardDispatchICall
 * 0000000140AFAAA0: mov     rcx, [r13+6F0h]
 * 0000000140AFAAA7: mov     rax, [r13+510h]
 * 0000000140AFAAAE: mov     r14d, [rcx+rax]
 * 0000000140AFAAB2: test    r14d, r14d
 * 0000000140AFAAB5: jz      short loc_140AFAAE2
 * 0000000140AFAAB7: rdtsc
 * 0000000140AFAAB9: shl     rdx, 20h
 * 0000000140AFAABD: or      rax, rdx
 * 0000000140AFAAC0: mov     rcx, rax
 * 0000000140AFAAC3: ror     rax, 3
 * 0000000140AFAAC7: xor     rcx, rax
 * 0000000140AFAACA: mov     rax, rbx
 * 0000000140AFAACD: mul     rcx
 * 0000000140AFAAD0: mov     [rbp+0A70h+var_370], rdx
 * 0000000140AFAAD7: xor     rax, rdx
 * 0000000140AFAADA: xor     edx, edx
 * 0000000140AFAADC: div     r14
 * 0000000140AFAADF: mov     r14, rdx
 * 0000000140AFAAE2: mov     rax, [r13+3B0h]
 * 0000000140AFAAE9: xor     ecx, ecx
 * 0000000140AFAAEB: call    KeGuardDispatchICall
 * 0000000140AFAAF0: mov     rbx, rax
 * 0000000140AFAAF3: test    rax, rax
 * 0000000140AFAAF6: jz      short loc_140AFAB21
 * 0000000140AFAAF8: mov     r12d, 0FFFFFFFFh
 * 0000000140AFAAFE: mov     rcx, rbx
 * 0000000140AFAB01: test    r14d, r14d
 * 0000000140AFAB04: jz      loc_140AFAC5E
 * 0000000140AFAB0A: mov     rax, [r13+3B0h]
 * 0000000140AFAB11: add     r14d, r12d
 * 0000000140AFAB14: call    KeGuardDispatchICall
 * 0000000140AFAB19: mov     rbx, rax
 * 0000000140AFAB1C: test    rax, rax
 * 0000000140AFAB1F: jnz     short loc_140AFAAFE
 * 0000000140AFAB21: mov     rax, [r13+0F8h]
 * 0000000140AFAB28: mov     rcx, r15
 * 0000000140AFAB2B: call    KeGuardDispatchICall
 * 0000000140AFAB30: mov     r14d, 0FFFFFFFFh
 * 0000000140AFAB36: xor     eax, eax
 * 0000000140AFAB38: mov     r11d, 1
 * 0000000140AFAB3E: mov     [rbp+0A70h+var_A68], eax
 * 0000000140AFAB41: mov     [rbp+0A70h+var_9F0], rax
 * 0000000140AFAB48: mov     ecx, 4
 * 0000000140AFAB4D: lea     rax, [rbp+0A70h+var_9E8]
 * 0000000140AFAB54: xor     edx, edx
 * 0000000140AFAB56: mov     [rax], dl
 * 0000000140AFAB58: add     rax, r11
 * 0000000140AFAB5B: add     ecx, r14d
 * 0000000140AFAB5E: jnz     short loc_140AFAB56
 * 0000000140AFAB60: mov     ecx, [r13+820h]
 * 0000000140AFAB67: lea     r12, [r13+82Ch]
 * 0000000140AFAB6E: mov     eax, [r12]
 * 0000000140AFAB72: mov     edx, 6
 * 0000000140AFAB77: mov     r14d, 8000h
 * 0000000140AFAB7D: mov     [rbp+0A70h+var_A4C], ecx
 * 0000000140AFAB80: mov     [rbp+0A70h+var_AB8], r12
 * 0000000140AFAB84: cmp     [r13+828h], eax
 * 0000000140AFAB8B: jge     loc_140B06256
 * 0000000140AFAB91: mov     rbx, [rbp+0A70h+var_360]
 * 0000000140AFAB98: mov     r14, [rbp+0A70h+var_358]
 * 0000000140AFAB9F: mov     r15d, [rbp+0A70h+var_810]
 * 0000000140AFABA6: mov     r10d, [rbp+0A70h+var_794]
 * 0000000140AFABAD: mov     [rbp+0A70h+var_A80], rbx
 * 0000000140AFABB1: mov     [rbp+0A70h+var_AC0], r14
 * 0000000140AFABB5: mov     [rbp+0A70h+var_AD0], r15d
 * 0000000140AFABB9: mov     [rbp+0A70h+var_A50], r10d
 * 0000000140AFABBD: mov     eax, [rsi+990h]
 * 0000000140AFABC3: mov     r8d, 110000h
 * 0000000140AFABC9: and     eax, r8d
 * 0000000140AFABCC: cmp     eax, r8d
 * 0000000140AFABCF: jz      loc_140AFADAD
 * 0000000140AFABD5: xor     eax, eax
 * 0000000140AFABD7: mov     dr7, rax
 * 0000000140AFABDA: jmp     loc_140AFADAF
 * 0000000140AFABDF: mov     r15d, 4
 * 0000000140AFABE5: jmp     loc_140AFA7FE
 * 0000000140AFABEA: mov     [r13+980h], rbx
 * 0000000140AFABF1: mov     rax, [r13+2B8h]
 * 0000000140AFABF8: call    KeGuardDispatchICall
 * 0000000140AFABFD: mov     rbx, rax
 * 0000000140AFAC00: mov     rax, [r13+2D8h]
 * 0000000140AFAC07: mov     rcx, rbx
 * 0000000140AFAC0A: call    KeGuardDispatchICall
 * 0000000140AFAC0F: mov     rdx, rax
 * 0000000140AFAC12: test    rax, rax
 * 0000000140AFAC15: jnz     short loc_140AFAC1C
 * 0000000140AFAC17: mov     ecx, r15d
 * 0000000140AFAC1A: jmp     short loc_140AFAC2F
 * 0000000140AFAC1C: mov     rax, [r13+2E8h]
 * 0000000140AFAC23: mov     rcx, rbx
 * 0000000140AFAC26: call    KeGuardDispatchICall
 * 0000000140AFAC2B: xor     eax, eax
 * 0000000140AFAC2D: mov     ecx, eax
 * 0000000140AFAC2F: mov     eax, [r13+994h]
 * 0000000140AFAC36: mov     r11d, 1
 * 0000000140AFAC3C: and     eax, 0FFFFFFFBh
 * 0000000140AFAC3F: mov     [rbp+0A70h+var_AE0], r11d
 * 0000000140AFAC43: or      eax, ecx
 * 0000000140AFAC45: mov     [r13+994h], eax
 * 0000000140AFAC4C: add     dword ptr [r13+828h], 10000h
 * 0000000140AFAC57: xor     eax, eax
 * 0000000140AFAC59: jmp     loc_140AFAB41
 * 0000000140AFAC5E: mov     rax, [r13+3A0h]
 * 0000000140AFAC65: call    KeGuardDispatchICall
 * 0000000140AFAC6A: xor     r14d, r14d
 * 0000000140AFAC6D: mov     rcx, rbx
 * 0000000140AFAC70: test    eax, eax
 * 0000000140AFAC72: jns     short loc_140AFAC85
 * 0000000140AFAC74: mov     rax, [r13+3B8h]
 * 0000000140AFAC7B: call    KeGuardDispatchICall
 * 0000000140AFAC80: jmp     loc_140AFAB21
 * 0000000140AFAC85: mov     rax, [r13+438h]
 * 0000000140AFAC8C: lea     rdx, [rbp+0A70h+var_680]
 * 0000000140AFAC93: call    KeGuardDispatchICall
 * 0000000140AFAC98: mov     rax, [r13+1C8h]
 * 0000000140AFAC9F: xor     r9d, r9d
 * 0000000140AFACA2: xor     r8d, r8d
 * 0000000140AFACA5: mov     [rsp+0B70h+BugCheckParameter4], r14
 * 0000000140AFACAA: mov     rdx, r15
 * 0000000140AFACAD: mov     rcx, rbx
 * 0000000140AFACB0: call    KeGuardDispatchICall
 * 0000000140AFACB5: rdtsc
 * 0000000140AFACB7: shl     rdx, 20h
 * 0000000140AFACBB: or      rax, rdx
 * 0000000140AFACBE: mov     rcx, rax
 * 0000000140AFACC1: ror     rax, 3
 * 0000000140AFACC5: xor     rcx, rax
 * 0000000140AFACC8: mov     rax, 7010008004002001h
 * 0000000140AFACD2: mul     rcx
 * 0000000140AFACD5: mov     rcx, r15
 * 0000000140AFACD8: mov     rbx, rdx
 * 0000000140AFACDB: mov     [rbp+0A70h+var_368], rdx
 * 0000000140AFACE2: xor     rbx, rax
 * 0000000140AFACE5: mov     rax, [r13+1C0h]
 * 0000000140AFACEC: call    KeGuardDispatchICall
 * 0000000140AFACF1: mov     ecx, eax
 * 0000000140AFACF3: xor     edx, edx
 * 0000000140AFACF5: mov     rax, rbx
 * 0000000140AFACF8: div     rcx
 * 0000000140AFACFB: mov     rbx, rdx
 * 0000000140AFACFE: cli
 * 0000000140AFACFF: sti
 * 0000000140AFAD00: mov     rax, [r13+1A0h]
 * 0000000140AFAD07: lea     rcx, [rbp+0A70h+var_690]
 * 0000000140AFAD0E: xor     edx, edx
 * 0000000140AFAD10: call    KeGuardDispatchICall
 * 0000000140AFAD15: mov     rax, [r13+1B0h]
 * 0000000140AFAD1C: lea     rcx, [rbp+0A70h+var_228]
 * 0000000140AFAD23: mov     rdx, r15
 * 0000000140AFAD26: call    KeGuardDispatchICall
 * 0000000140AFAD2B: jmp     short loc_140AFAD34
 * 0000000140AFAD2D: test    ebx, ebx
 * 0000000140AFAD2F: jz      short loc_140AFAD54
 * 0000000140AFAD31: add     ebx, r12d
 * 0000000140AFAD34: mov     rax, [r13+1B8h]
 * 0000000140AFAD3B: lea     rdx, [rbp+0A70h+var_228]
 * 0000000140AFAD42: lea     rcx, [rbp+0A70h+var_9E0]
 * 0000000140AFAD49: call    KeGuardDispatchICall
 * 0000000140AFAD4E: test    eax, eax
 * 0000000140AFAD50: jns     short loc_140AFAD2D
 * 0000000140AFAD52: jmp     short loc_140AFAD6D
 * 0000000140AFAD54: mov     rax, [r13+1A0h]
 * 0000000140AFAD5B: lea     rcx, [rbp+0A70h+var_690]
 * 0000000140AFAD62: mov     edx, [rbp+0A70h+var_9E0]
 * 0000000140AFAD68: call    KeGuardDispatchICall
 * 0000000140AFAD6D: mov     rax, [r13+1D0h]
 * 0000000140AFAD74: lea     rdx, [rbp+0A70h+var_248]
 * 0000000140AFAD7B: lea     rcx, [rbp+0A70h+var_690]
 * 0000000140AFAD82: call    KeGuardDispatchICall
 * 0000000140AFAD87: mov     rax, [r13+0F8h]
 * 0000000140AFAD8E: mov     rcx, r15
 * 0000000140AFAD91: call    KeGuardDispatchICall
 * 0000000140AFAD96: mov     r11d, 1
 * 0000000140AFAD9C: xor     eax, eax
 * 0000000140AFAD9E: mov     [rbp+0A70h+var_A68], r11d
 * 0000000140AFADA2: mov     r14d, 0FFFFFFFFh
 * 0000000140AFADA8: jmp     loc_140AFAB41
 * 0000000140AFADAD: xor     eax, eax
 * 0000000140AFADAF: cmp     ecx, [rsi+80Ch]
 * 0000000140AFADB5: jnz     short loc_140AFADF9
 * 0000000140AFADB7: add     [rsi+830h], r11d
 * 0000000140AFADBE: mov     ecx, eax
 * 0000000140AFADC0: cmp     dword ptr [rsi+958h], 0Bh
 * 0000000140AFADC7: mov     [rbp+0A70h+var_A4C], eax
 * 0000000140AFADCA: jnz     short loc_140AFADF9
 * 0000000140AFADCC: mov     eax, [rsi+990h]
 * 0000000140AFADD2: test    r11b, al
 * 0000000140AFADD5: jnz     short loc_140AFADF9
 * 0000000140AFADD7: mov     r8d, 0FFFFFFFFh
 * 0000000140AFADDD: cmp     [rsi+970h], r8d
 * 0000000140AFADE4: jnz     short loc_140AFADF0
 * 0000000140AFADE6: xor     eax, eax
 * 0000000140AFADE8: mov     [rsi+970h], eax
 * 0000000140AFADEE: jmp     short loc_140AFADF9
 * 0000000140AFADF0: or      eax, r11d
 * 0000000140AFADF3: mov     [rsi+990h], eax
 * 0000000140AFADF9: mov     rax, [rsi+0A78h]
 * 0000000140AFAE00: xor     r9d, r9d
 * 0000000140AFAE03: test    rax, rax
 * 0000000140AFAE06: mov     r8, rsi
 * 0000000140AFAE09: cmovnz  r8, rax
 * 0000000140AFAE0D: xor     eax, eax
 * 0000000140AFAE0F: mov     r13d, [r8+808h]
 * 0000000140AFAE16: add     r13, r8
 * 0000000140AFAE19: mov     [rsp+0B70h+var_B20], r13
 * 0000000140AFAE1E: cmp     dword ptr [rbp+0A70h+var_9F0], eax
 * 0000000140AFAE24: jz      short loc_140AFAE44
 * 0000000140AFAE26: cmp     dword ptr [rbp+0A70h+var_9F0+4], ecx
 * 0000000140AFAE2C: ja      short loc_140AFAE44
 * 0000000140AFAE2E: mov     r13d, [rbp+0A70h+var_9E8]
 * 0000000140AFAE35: mov     r9d, dword ptr [rbp+0A70h+var_9F0+4]
 * 0000000140AFAE3C: add     r13, r8
 * 0000000140AFAE3F: mov     [rsp+0B70h+var_B20], r13
 * 0000000140AFAE44: cmp     r9d, ecx
 * 0000000140AFAE47: jz      loc_140AFAF64
 * 0000000140AFAE4D: mov     r10d, ecx
 * 0000000140AFAE50: mov     r12d, 2
 * 0000000140AFAE56: sub     r10d, r9d
 * 0000000140AFAE59: mov     r15, 0AAAAAAAAAAAAAAABh
 * 0000000140AFAE63: mov     r9d, ecx
 * 0000000140AFAE66: mov     ecx, [r13+0]
 * 0000000140AFAE6A: cmp     ecx, 1Ch
 * 0000000140AFAE6D: jg      short loc_140AFAEC1
 * 0000000140AFAE6F: jz      short loc_140AFAEBA
 * 0000000140AFAE71: sub     ecx, 1
 * 0000000140AFAE74: jz      short loc_140AFAEDC
 * 0000000140AFAE76: sub     ecx, edx
 * 0000000140AFAE78: jz      short loc_140AFAEA8
 * 0000000140AFAE7A: sub     ecx, 1
 * 0000000140AFAE7D: jz      short loc_140AFAE98
 * 0000000140AFAE7F: sub     ecx, r12d
 * 0000000140AFAE82: jz      short loc_140AFAE89
 * 0000000140AFAE84: cmp     ecx, r12d
 * 0000000140AFAE87: jmp     short loc_140AFAED3
 * 0000000140AFAE89: mov     eax, [r13+1Ch]
 * 0000000140AFAE8D: add     eax, 3
 * 0000000140AFAE90: shl     eax, 4
 * 0000000140AFAE93: jmp     loc_140AFAF4B
 * 0000000140AFAE98: movzx   eax, word ptr [r13+20h]
 * 0000000140AFAE9D: add     eax, 37h ; '7'
 * 0000000140AFAEA0: and     eax, 0FFFFFFF8h
 * 0000000140AFAEA3: jmp     loc_140AFAF4B
 * 0000000140AFAEA8: mov     eax, [r13+18h]
 * 0000000140AFAEAC: add     eax, r12d
 * 0000000140AFAEAF: lea     eax, [rax+rax*2]
 * 0000000140AFAEB2: shl     eax, 3
 * 0000000140AFAEB5: jmp     loc_140AFAF4B
 * 0000000140AFAEBA: movzx   eax, word ptr [r13+28h]
 * 0000000140AFAEBF: jmp     short loc_140AFAE9D
 * 0000000140AFAEC1: sub     ecx, 1Eh
 * 0000000140AFAEC4: jz      short loc_140AFAF1B
 * 0000000140AFAEC6: sub     ecx, 3
 * 0000000140AFAEC9: jz      short loc_140AFAEF3
 * 0000000140AFAECB: sub     ecx, 1
 * 0000000140AFAECE: jz      short loc_140AFAEF3
 * 0000000140AFAED0: cmp     ecx, 9
 * 0000000140AFAED3: jz      short loc_140AFAEDC
 * 0000000140AFAED5: mov     eax, 30h ; '0'
 * 0000000140AFAEDA: jmp     short loc_140AFAF4B
 * 0000000140AFAEDC: mov     ecx, [r13+10h]
 * 0000000140AFAEE0: mov     rax, r15
 * 0000000140AFAEE3: mul     rcx
 * 0000000140AFAEE6: shr     rdx, 3
 * 0000000140AFAEEA: lea     eax, ds:30h[rdx*4]
 * 0000000140AFAEF1: jmp     short loc_140AFAF46
 * 0000000140AFAEF3: mov     ecx, [r13+20h]
 * 0000000140AFAEF7: mov     edx, [r13+28h]
 * 0000000140AFAEFB: and     ecx, 0FFFh
 * 0000000140AFAF01: add     rdx, 0FFFh
 * 0000000140AFAF08: add     rdx, rcx
 * 0000000140AFAF0B: shr     rdx, 0Ch
 * 0000000140AFAF0F: lea     eax, [rdx+rdx*4]
 * 0000000140AFAF12: lea     eax, ds:30h[rax*4]
 * 0000000140AFAF19: jmp     short loc_140AFAF46
 * 0000000140AFAF1B: mov     eax, [r13+24h]
 * 0000000140AFAF1F: lea     ecx, [rax-1]
 * 0000000140AFAF22: neg     eax
 * 0000000140AFAF24: sbb     eax, eax
 * 0000000140AFAF26: and     ecx, eax
 * 0000000140AFAF28: mov     rax, r15
 * 0000000140AFAF2B: mul     rcx
 * 0000000140AFAF2E: movzx   eax, word ptr [r13+28h]
 * 0000000140AFAF33: shr     rdx, 3
 * 0000000140AFAF37: add     edx, 7
 * 0000000140AFAF3A: and     edx, 0FFFFFFF8h
 * 0000000140AFAF3D: add     eax, r12d
 * 0000000140AFAF40: lea     eax, [rax+rax*2]
 * 0000000140AFAF43: lea     eax, [rdx+rax*8]
 * 0000000140AFAF46: mov     edx, 6
 * 0000000140AFAF4B: add     r13, rax
 * 0000000140AFAF4E: sub     r10, r11
 * 0000000140AFAF51: jnz     loc_140AFAE66
 * 0000000140AFAF57: mov     r12, [rbp+0A70h+var_AB8]
 * 0000000140AFAF5B: mov     r15d, [rbp+0A70h+var_AD0]
 * 0000000140AFAF5F: mov     [rsp+0B70h+var_B20], r13
 * 0000000140AFAF64: mov     eax, r13d
 * 0000000140AFAF67: mov     dword ptr [rbp+0A70h+var_9F0], r11d
 * 0000000140AFAF6E: sub     eax, r8d
 * 0000000140AFAF71: mov     dword ptr [rbp+0A70h+var_9F0+4], r9d
 * 0000000140AFAF78: mov     [rbp+0A70h+var_9E8], eax
 * 0000000140AFAF7E: mov     r10d, [r13+0]
 * 0000000140AFAF82: mov     dword ptr [rbp+0A70h+arg_8], r10d
 * 0000000140AFAF89: cmp     r10d, 1Dh
 * 0000000140AFAF8D: jg      loc_140B00D49
 * 0000000140AFAF93: jz      loc_140B00910
 * 0000000140AFAF99: cmp     r10d, 0Dh
 * 0000000140AFAF9D: jg      loc_140AFC826
 * 0000000140AFAFA3: jz      loc_140B004A2
 * 0000000140AFAFA9: xor     eax, eax
 * 0000000140AFAFAB: mov     ecx, r10d
 * 0000000140AFAFAE: test    r10d, r10d
 * 0000000140AFAFB1: jz      loc_140AFC608
 * 0000000140AFAFB7: sub     ecx, 1
 * 0000000140AFAFBA: jz      short loc_140AFAFFB
 * 0000000140AFAFBC: sub     ecx, 3
 * 0000000140AFAFBF: jz      loc_140AFC0A7
 * 0000000140AFAFC5: sub     ecx, 1
 * 0000000140AFAFC8: jz      loc_140AFBD70
 * 0000000140AFAFCE: lea     r14d, [rax+2]
 * 0000000140AFAFD2: sub     ecx, r14d
 * 0000000140AFAFD5: jz      loc_140AFBC05
 * 0000000140AFAFDB: sub     ecx, 1
 * 0000000140AFAFDE: jz      loc_140AFB7AA
 * 0000000140AFAFE4: sub     ecx, r14d
 * 0000000140AFAFE7: jz      loc_140AFB437
 * 0000000140AFAFED: sub     ecx, 1
 * 0000000140AFAFF0: jz      short loc_140AFB041
 * 0000000140AFAFF2: cmp     ecx, 1
 * 0000000140AFAFF5: jnz     loc_140B030E7
 * 0000000140AFAFFB: mov     ebx, 0Ch
 * 0000000140AFB000: cmp     r10d, ebx
 * 0000000140AFB003: jnz     loc_140B05468
 * 0000000140AFB009: cmp     [rsi+980h], rax
 * 0000000140AFB010: jz      short loc_140AFB04A
 * 0000000140AFB012: mov     r8d, [rsi+824h]
 * 0000000140AFB019: mov     edx, [rsi+994h]
 * 0000000140AFB01F: test    r8d, r8d
 * 0000000140AFB022: jnz     loc_140AFC340
 * 0000000140AFB028: lea     ecx, ds:0[rdx*8]
 * 0000000140AFB02F: xor     ecx, edx
 * 0000000140AFB031: and     ecx, 20h
 * 0000000140AFB034: xor     ecx, edx
 * 0000000140AFB036: mov     [rsi+994h], ecx
 * 0000000140AFB03C: jmp     loc_140AFC351
 * 0000000140AFB041: cmp     [rsi+980h], rax
 * 0000000140AFB048: jnz     short loc_140AFB05B
 * 0000000140AFB04A: mov     [rsi+824h], eax
 * 0000000140AFB050: mov     r12d, 1
 * 0000000140AFB056: jmp     loc_140AFB14A
 * 0000000140AFB05B: cmp     [rsi+824h], eax
 * 0000000140AFB061: jnz     loc_140AFB1A9
 * 0000000140AFB067: mov     eax, [rsi+994h]
 * 0000000140AFB06D: lea     ecx, ds:0[rax*8]
 * 0000000140AFB074: xor     ecx, eax
 * 0000000140AFB076: and     ecx, 20h
 * 0000000140AFB079: xor     ecx, eax
 * 0000000140AFB07B: mov     [rsi+994h], ecx
 * 0000000140AFB081: test    cl, 4
 * 0000000140AFB084: jz      loc_140AFB1C5
 * 0000000140AFB08A: mov     ecx, [r13+8]
 * 0000000140AFB08E: xor     eax, eax
 * 0000000140AFB090: mov     r14d, [r13+10h]
 * 0000000140AFB094: and     ecx, 0FFFh
 * 0000000140AFB09A: mov     rbx, [r13+8]
 * 0000000140AFB09E: add     r14, 0FFFh
 * 0000000140AFB0A5: add     r14, rcx
 * 0000000140AFB0A8: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140AFB0AF: shr     r14, 0Ch
 * 0000000140AFB0B3: lea     r12d, [rax+1]
 * 0000000140AFB0B7: test    r14, r14
 * 0000000140AFB0BA: jz      loc_140AFB14A
 * 0000000140AFB0C0: xor     edi, edi
 * 0000000140AFB0C2: mov     rax, [rsi+2B0h]
 * 0000000140AFB0C9: mov     rcx, rbx
 * 0000000140AFB0CC: sub     r14, r12
 * 0000000140AFB0CF: call    KeGuardDispatchICall
 * 0000000140AFB0D4: test    al, al
 * 0000000140AFB0D6: jz      short loc_140AFB12B
 * 0000000140AFB0D8: cmp     [rsi+8F8h], edi
 * 0000000140AFB0DE: jnz     short loc_140AFB12B
 * 0000000140AFB0E0: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFB0EA: xor     edx, edx
 * 0000000140AFB0EC: add     rax, rsi
 * 0000000140AFB0EF: mov     rcx, rsi
 * 0000000140AFB0F2: mov     [rsi+900h], rax
 * 0000000140AFB0F9: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFB103: add     rax, r13
 * 0000000140AFB106: mov     [rsi+908h], rax
 * 0000000140AFB10D: movsxd  rax, dword ptr [r13+0]
 * 0000000140AFB111: mov     [rsi+910h], rax
 * 0000000140AFB118: mov     [rsi+918h], rbx
 * 0000000140AFB11F: mov     [rsi+8F8h], r12d
 * 0000000140AFB126: call    $$ba
 * 0000000140AFB12B: add     dword ptr [rsi+828h], 100h
 * 0000000140AFB135: add     rbx, 1000h
 * 0000000140AFB13C: test    r14, r14
 * 0000000140AFB13F: jnz     short loc_140AFB0C2
 * 0000000140AFB141: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFB148: xor     eax, eax
 * 0000000140AFB14A: mov     r14d, 8000h
 * 0000000140AFB150: mov     ecx, [rbp+0A70h+var_A4C]
 * 0000000140AFB153: cmp     [rsi+824h], eax
 * 0000000140AFB159: jz      short loc_140AFB162
 * 0000000140AFB15B: mov     edx, 0FFFFFFFFh
 * 0000000140AFB160: add     ecx, edx
 * 0000000140AFB162: add     ecx, r12d
 * 0000000140AFB165: mov     [rbp+0A70h+var_A4C], ecx
 * 0000000140AFB168: cmp     [rsi+8F8h], eax
 * 0000000140AFB16E: jnz     loc_140B0625E
 * 0000000140AFB174: lea     r12, [rsi+82Ch]
 * 0000000140AFB17B: mov     eax, [r12]
 * 0000000140AFB17F: mov     [rbp+0A70h+var_AB8], r12
 * 0000000140AFB183: cmp     [rsi+828h], eax
 * 0000000140AFB189: jge     loc_140B06256
 * 0000000140AFB18F: mov     rbx, [rbp+0A70h+var_A80]
 * 0000000140AFB193: mov     edx, 6
 * 0000000140AFB198: mov     r14, [rbp+0A70h+var_AC0]
 * 0000000140AFB19C: mov     r15d, [rbp+0A70h+var_AD0]
 * 0000000140AFB1A0: lea     r11d, [rdx-5]
 * 0000000140AFB1A4: jmp     loc_140AFABBD
 * 0000000140AFB1A9: mov     ecx, [rsi+994h]
 * 0000000140AFB1AF: mov     eax, ecx
 * 0000000140AFB1B1: shr     eax, 3
 * 0000000140AFB1B4: xor     eax, ecx
 * 0000000140AFB1B6: test    al, 4
 * 0000000140AFB1B8: jz      loc_140AFB081
 * 0000000140AFB1BE: xor     eax, eax
 * 0000000140AFB1C0: jmp     loc_140AFB04A
 * 0000000140AFB1C5: mov     r14, [r13+8]
 * 0000000140AFB1C9: mov     r8d, [r13+10h]
 * 0000000140AFB1CD: mov     r9, r14
 * 0000000140AFB1D0: add     [rsi+828h], r8d
 * 0000000140AFB1D7: mov     rax, r14
 * 0000000140AFB1DA: mov     r10d, [rsi+814h]
 * 0000000140AFB1E1: mov     r15, [rsi+818h]
 * 0000000140AFB1E8: lea     rcx, [r14+r8]
 * 0000000140AFB1EC: cmp     r14, rcx
 * 0000000140AFB1EF: jnb     short loc_140AFB201
 * 0000000140AFB1F1: mov     edx, 40h ; '@'
 * 0000000140AFB1F6: prefetchnta byte ptr [rax]
 * 0000000140AFB1F9: add     rax, rdx
 * 0000000140AFB1FC: cmp     rax, rcx
 * 0000000140AFB1FF: jb      short loc_140AFB1F6
 * 0000000140AFB201: mov     r11d, r8d
 * 0000000140AFB204: mov     rbx, r15
 * 0000000140AFB207: shr     r11d, 7
 * 0000000140AFB20B: mov     r12d, 1
 * 0000000140AFB211: test    r11d, r11d
 * 0000000140AFB214: jz      short loc_140AFB284
 * 0000000140AFB216: mov     rdi, 7010008004002001h
 * 0000000140AFB220: mov     eax, 8
 * 0000000140AFB225: xor     rbx, [r9]
 * 0000000140AFB228: mov     ecx, r10d
 * 0000000140AFB22B: rol     rbx, cl
 * 0000000140AFB22E: xor     rbx, [r9+8]
 * 0000000140AFB232: add     r9, 10h
 * 0000000140AFB236: rol     rbx, cl
 * 0000000140AFB239: sub     rax, r12
 * 0000000140AFB23C: jnz     short loc_140AFB225
 * 0000000140AFB23E: mov     rcx, r9
 * 0000000140AFB241: sub     rcx, r14
 * 0000000140AFB244: xor     rcx, r15
 * 0000000140AFB247: mov     rax, rcx
 * 0000000140AFB24A: rol     rax, 11h
 * 0000000140AFB24E: xor     rcx, rax
 * 0000000140AFB251: mov     rax, rdi
 * 0000000140AFB254: mul     rcx
 * 0000000140AFB257: xor     r10d, eax
 * 0000000140AFB25A: mov     [rbp+0A70h+var_350], rdx
 * 0000000140AFB261: xor     r10d, edx
 * 0000000140AFB264: mov     edx, 0FFFFFFFFh
 * 0000000140AFB269: and     r10d, 3Fh
 * 0000000140AFB26D: cmovz   r10d, r12d
 * 0000000140AFB271: add     r11d, edx
 * 0000000140AFB274: jnz     short loc_140AFB220
 * 0000000140AFB276: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFB27B: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFB282: jmp     short loc_140AFB289
 * 0000000140AFB284: mov     edx, 0FFFFFFFFh
 * 0000000140AFB289: and     r8d, 7Fh
 * 0000000140AFB28D: cmp     r8d, 8
 * 0000000140AFB291: jb      short loc_140AFB2B0
 * 0000000140AFB293: mov     eax, r8d
 * 0000000140AFB296: shr     rax, 3
 * 0000000140AFB29A: xor     rbx, [r9]
 * 0000000140AFB29D: mov     ecx, r10d
 * 0000000140AFB2A0: rol     rbx, cl
 * 0000000140AFB2A3: add     r9, 8
 * 0000000140AFB2A7: add     r8d, 0FFFFFFF8h
 * 0000000140AFB2AB: sub     rax, r12
 * 0000000140AFB2AE: jnz     short loc_140AFB29A
 * 0000000140AFB2B0: test    r8d, r8d
 * 0000000140AFB2B3: jz      short loc_140AFB2CA
 * 0000000140AFB2B5: movzx   eax, byte ptr [r9]
 * 0000000140AFB2B9: mov     ecx, r10d
 * 0000000140AFB2BC: xor     rbx, rax
 * 0000000140AFB2BF: add     r9, r12
 * 0000000140AFB2C2: rol     rbx, cl
 * 0000000140AFB2C5: add     r8d, edx
 * 0000000140AFB2C8: jnz     short loc_140AFB2B5
 * 0000000140AFB2CA: mov     rax, rbx
 * 0000000140AFB2CD: jmp     short loc_140AFB2D1
 * 0000000140AFB2CF: xor     ebx, eax
 * 0000000140AFB2D1: shr     rax, 1Fh
 * 0000000140AFB2D5: test    rax, rax
 * 0000000140AFB2D8: jnz     short loc_140AFB2CF
 * 0000000140AFB2DA: mov     edx, [r13+14h]
 * 0000000140AFB2DE: btr     ebx, 1Fh
 * 0000000140AFB2E2: cmp     ebx, edx
 * 0000000140AFB2E4: jz      loc_140AFB148
 * 0000000140AFB2EA: mov     ecx, [r13+10h]
 * 0000000140AFB2EE: mov     r8, [r13+8]
 * 0000000140AFB2F2: test    rcx, rcx
 * 0000000140AFB2F5: jz      loc_140AFB3AF
 * 0000000140AFB2FB: mov     eax, [rsi+994h]
 * 0000000140AFB301: mov     r9d, 40h ; '@'
 * 0000000140AFB307: test    r9b, al
 * 0000000140AFB30A: jz      loc_140AFB3AF
 * 0000000140AFB310: mov     r12, cr8
 * 0000000140AFB314: lea     eax, [r9-3Eh]
 * 0000000140AFB318: mov     cr8, rax
 * 0000000140AFB31C: mov     r14, r8
 * 0000000140AFB31F: lea     rax, [rcx-1]
 * 0000000140AFB323: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140AFB32A: add     rax, r8
 * 0000000140AFB32D: or      rax, 0FFFh
 * 0000000140AFB333: mov     [rbp+0A70h+arg_8], rax
 * 0000000140AFB33A: lea     r13, [r14-1]
 * 0000000140AFB33E: movzx   r15d, r12b
 * 0000000140AFB342: mov     rax, [rsi+468h]
 * 0000000140AFB349: xor     edx, edx
 * 0000000140AFB34B: mov     rcx, r14
 * 0000000140AFB34E: call    KeGuardDispatchICall
 * 0000000140AFB353: cmp     eax, 0C000022Dh
 * 0000000140AFB358: jnz     short loc_140AFB37E
 * 0000000140AFB35A: mov     eax, 1
 * 0000000140AFB35F: cmp     r12b, al
 * 0000000140AFB362: ja      short loc_140AFB382
 * 0000000140AFB364: movzx   r15d, r12b
 * 0000000140AFB368: mov     cr8, r15
 * 0000000140AFB36C: mov     al, [r14]
 * 0000000140AFB36F: mov     rax, cr8
 * 0000000140AFB373: mov     eax, 2
 * 0000000140AFB378: mov     cr8, rax
 * 0000000140AFB37C: jmp     short loc_140AFB342
 * 0000000140AFB37E: test    eax, eax
 * 0000000140AFB380: js      short loc_140AFB3A2
 * 0000000140AFB382: mov     r8d, 1000h
 * 0000000140AFB388: add     r14, r8
 * 0000000140AFB38B: add     r13, r8
 * 0000000140AFB38E: cmp     r13, [rbp+0A70h+arg_8]
 * 0000000140AFB395: jnz     short loc_140AFB33E
 * 0000000140AFB397: mov     cr8, r15
 * 0000000140AFB39B: xor     eax, eax
 * 0000000140AFB39D: jmp     loc_140AFB050
 * 0000000140AFB3A2: mov     cr8, r15
 * 0000000140AFB3A6: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140AFB3AB: mov     edx, [r13+14h]
 * 0000000140AFB3AF: xor     eax, eax
 * 0000000140AFB3B1: cmp     [rsi+8F8h], eax
 * 0000000140AFB3B7: jnz     loc_140AFB050
 * 0000000140AFB3BD: mov     ecx, ebx
 * 0000000140AFB3BF: mov     eax, edx
 * 0000000140AFB3C1: xor     rcx, rax
 * 0000000140AFB3C4: mov     rax, [rsi+588h]
 * 0000000140AFB3CB: mov     [rax+18h], rcx
 * 0000000140AFB3CF: mov     rcx, [r13+8]
 * 0000000140AFB3D3: mov     r12d, 1
 * 0000000140AFB3D9: xor     eax, eax
 * 0000000140AFB3DB: cmp     [rsi+8F8h], eax
 * 0000000140AFB3E1: jnz     loc_140AFB14A
 * 0000000140AFB3E7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFB3F1: add     rax, rsi
 * 0000000140AFB3F4: mov     [rsi+900h], rax
 * 0000000140AFB3FB: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFB405: add     rax, r13
 * 0000000140AFB408: mov     [rsi+908h], rax
 * 0000000140AFB40F: movsxd  rax, dword ptr [r13+0]
 * 0000000140AFB413: mov     [rsi+910h], rax
 * 0000000140AFB41A: mov     [rsi+918h], rcx
 * 0000000140AFB421: xor     edx, edx
 * 0000000140AFB423: mov     rcx, rsi
 * 0000000140AFB426: mov     [rsi+8F8h], r12d
 * 0000000140AFB42D: call    $$ba
 * 0000000140AFB432: jmp     loc_140AFB148
 * 0000000140AFB437: cmp     [r13+18h], eax
 * 0000000140AFB43B: jz      short loc_140AFB493
 * 0000000140AFB43D: cmp     [rsi+980h], rax
 * 0000000140AFB444: jz      short loc_140AFB484
 * 0000000140AFB446: mov     ecx, [rsi+994h]
 * 0000000140AFB44C: test    cl, 4
 * 0000000140AFB44F: jnz     short loc_140AFB484
 * 0000000140AFB451: lea     rax, [rsi+824h]
 * 0000000140AFB458: xor     r8d, r8d
 * 0000000140AFB45B: mov     edx, [rax]
 * 0000000140AFB45D: test    edx, edx
 * 0000000140AFB45F: jnz     short loc_140AFB477
 * 0000000140AFB461: lea     eax, ds:0[rcx*8]
 * 0000000140AFB468: xor     eax, ecx
 * 0000000140AFB46A: and     eax, 20h
 * 0000000140AFB46D: xor     eax, ecx
 * 0000000140AFB46F: mov     [rsi+994h], eax
 * 0000000140AFB475: jmp     short loc_140AFB499
 * 0000000140AFB477: test    cl, 20h
 * 0000000140AFB47A: jz      short loc_140AFB499
 * 0000000140AFB47C: mov     r14d, r8d
 * 0000000140AFB47F: jmp     loc_140AFB7A2
 * 0000000140AFB484: mov     r14d, eax
 * 0000000140AFB487: lea     rax, [rsi+824h]
 * 0000000140AFB48E: jmp     loc_140AFB7A2
 * 0000000140AFB493: mov     edx, [rsi+824h]
 * 0000000140AFB499: mov     r14d, edx
 * 0000000140AFB49C: lea     rcx, [r13+30h]
 * 0000000140AFB4A0: mov     edx, [r13+1Ch]
 * 0000000140AFB4A4: lea     rax, [rsi+824h]
 * 0000000140AFB4AB: shl     r14, 4
 * 0000000140AFB4AF: add     r14, rcx
 * 0000000140AFB4B2: shl     rdx, 4
 * 0000000140AFB4B6: add     rdx, rcx
 * 0000000140AFB4B9: mov     [rsp+0B70h+var_B08], rax
 * 0000000140AFB4BE: mov     [rbp+0A70h+arg_8], rdx
 * 0000000140AFB4C5: mov     [rsp+0B70h+var_B18], r14
 * 0000000140AFB4CA: xor     eax, eax
 * 0000000140AFB4CC: cmp     [r14], eax
 * 0000000140AFB4CF: jl      loc_140AFB757
 * 0000000140AFB4D5: mov     rdi, [r14+8]
 * 0000000140AFB4D9: mov     r8d, [r14+4]
 * 0000000140AFB4DD: mov     r9, rdi
 * 0000000140AFB4E0: add     [rsi+828h], r8d
 * 0000000140AFB4E7: mov     rax, rdi
 * 0000000140AFB4EA: mov     r11d, [rsi+814h]
 * 0000000140AFB4F1: mov     r12d, r8d
 * 0000000140AFB4F4: mov     r15, [rsi+818h]
 * 0000000140AFB4FB: lea     rcx, [rdi+r8]
 * 0000000140AFB4FF: cmp     rdi, rcx
 * 0000000140AFB502: jnb     short loc_140AFB515
 * 0000000140AFB504: mov     r10d, 40h ; '@'
 * 0000000140AFB50A: prefetchnta byte ptr [rax]
 * 0000000140AFB50D: add     rax, r10
 * 0000000140AFB510: cmp     rax, rcx
 * 0000000140AFB513: jb      short loc_140AFB50A
 * 0000000140AFB515: mov     r10d, r8d
 * 0000000140AFB518: mov     rbx, r15
 * 0000000140AFB51B: shr     r10d, 7
 * 0000000140AFB51F: test    r10d, r10d
 * 0000000140AFB522: jz      short loc_140AFB59D
 * 0000000140AFB524: mov     esi, 1
 * 0000000140AFB529: mov     r12d, 0FFFFFFFFh
 * 0000000140AFB52F: mov     r14, 7010008004002001h
 * 0000000140AFB539: mov     eax, 8
 * 0000000140AFB53E: xor     rbx, [r9]
 * 0000000140AFB541: mov     ecx, r11d
 * 0000000140AFB544: rol     rbx, cl
 * 0000000140AFB547: xor     rbx, [r9+8]
 * 0000000140AFB54B: add     r9, 10h
 * 0000000140AFB54F: rol     rbx, cl
 * 0000000140AFB552: sub     rax, rsi
 * 0000000140AFB555: jnz     short loc_140AFB53E
 * 0000000140AFB557: mov     rcx, r9
 * 0000000140AFB55A: sub     rcx, rdi
 * 0000000140AFB55D: xor     rcx, r15
 * 0000000140AFB560: mov     rax, rcx
 * 0000000140AFB563: rol     rax, 11h
 * 0000000140AFB567: xor     rcx, rax
 * 0000000140AFB56A: mov     rax, r14
 * 0000000140AFB56D: mul     rcx
 * 0000000140AFB570: xor     eax, edx
 * 0000000140AFB572: mov     [rbp+0A70h+var_348], rdx
 * 0000000140AFB579: xor     r11d, eax
 * 0000000140AFB57C: and     r11d, 3Fh
 * 0000000140AFB580: cmovz   r11d, esi
 * 0000000140AFB584: add     r10d, r12d
 * 0000000140AFB587: jnz     short loc_140AFB539
 * 0000000140AFB589: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFB58E: mov     r12, r8
 * 0000000140AFB591: mov     r14, [rsp+0B70h+var_B18]
 * 0000000140AFB596: mov     rdx, [rbp+0A70h+arg_8]
 * 0000000140AFB59D: and     r8d, 7Fh
 * 0000000140AFB5A1: mov     r10d, 1
 * 0000000140AFB5A7: cmp     r8d, 8
 * 0000000140AFB5AB: jb      short loc_140AFB5CA
 * 0000000140AFB5AD: mov     eax, r8d
 * 0000000140AFB5B0: shr     rax, 3
 * 0000000140AFB5B4: xor     rbx, [r9]
 * 0000000140AFB5B7: mov     ecx, r11d
 * 0000000140AFB5BA: rol     rbx, cl
 * 0000000140AFB5BD: add     r9, 8
 * 0000000140AFB5C1: add     r8d, 0FFFFFFF8h
 * 0000000140AFB5C5: sub     rax, r10
 * 0000000140AFB5C8: jnz     short loc_140AFB5B4
 * 0000000140AFB5CA: test    r8d, r8d
 * 0000000140AFB5CD: jz      short loc_140AFB5EE
 * 0000000140AFB5CF: mov     esi, 0FFFFFFFFh
 * 0000000140AFB5D4: movzx   eax, byte ptr [r9]
 * 0000000140AFB5D8: mov     ecx, r11d
 * 0000000140AFB5DB: xor     rbx, rax
 * 0000000140AFB5DE: add     r9, r10
 * 0000000140AFB5E1: rol     rbx, cl
 * 0000000140AFB5E4: add     r8d, esi
 * 0000000140AFB5E7: jnz     short loc_140AFB5D4
 * 0000000140AFB5E9: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFB5EE: mov     rax, rbx
 * 0000000140AFB5F1: jmp     short loc_140AFB5F5
 * 0000000140AFB5F3: xor     ebx, eax
 * 0000000140AFB5F5: shr     rax, 1Fh
 * 0000000140AFB5F9: test    rax, rax
 * 0000000140AFB5FC: jnz     short loc_140AFB5F3
 * 0000000140AFB5FE: mov     ecx, [r14]
 * 0000000140AFB601: btr     ebx, 1Fh
 * 0000000140AFB605: mov     eax, ecx
 * 0000000140AFB607: btr     eax, 1Fh
 * 0000000140AFB60B: cmp     ebx, eax
 * 0000000140AFB60D: jz      loc_140AFB753
 * 0000000140AFB613: test    r12, r12
 * 0000000140AFB616: jz      loc_140AFB6D3
 * 0000000140AFB61C: mov     eax, [rsi+994h]
 * 0000000140AFB622: mov     edx, 40h ; '@'
 * 0000000140AFB627: test    dl, al
 * 0000000140AFB629: jz      loc_140AFB6D3
 * 0000000140AFB62F: mov     r13, cr8
 * 0000000140AFB633: lea     eax, [rdx-3Eh]
 * 0000000140AFB636: mov     cr8, rax
 * 0000000140AFB63A: mov     r15, rdi
 * 0000000140AFB63D: lea     rax, [r12-1]
 * 0000000140AFB642: and     r15, 0FFFFFFFFFFFFF000h
 * 0000000140AFB649: add     rax, rdi
 * 0000000140AFB64C: or      rax, 0FFFh
 * 0000000140AFB652: mov     [rbp+0A70h+var_AE8], rax
 * 0000000140AFB656: lea     rax, [r15-1]
 * 0000000140AFB65A: mov     [rsp+0B70h+var_B18], rax
 * 0000000140AFB65F: movzx   r12d, r13b
 * 0000000140AFB663: mov     rax, [rsi+468h]
 * 0000000140AFB66A: xor     edx, edx
 * 0000000140AFB66C: mov     rcx, r15
 * 0000000140AFB66F: call    KeGuardDispatchICall
 * 0000000140AFB674: cmp     eax, 0C000022Dh
 * 0000000140AFB679: jnz     short loc_140AFB69F
 * 0000000140AFB67B: mov     eax, 1
 * 0000000140AFB680: cmp     r13b, al
 * 0000000140AFB683: ja      short loc_140AFB6A3
 * 0000000140AFB685: movzx   r12d, r13b
 * 0000000140AFB689: mov     cr8, r12
 * 0000000140AFB68D: mov     al, [r15]
 * 0000000140AFB690: mov     rax, cr8
 * 0000000140AFB694: mov     eax, 2
 * 0000000140AFB699: mov     cr8, rax
 * 0000000140AFB69D: jmp     short loc_140AFB663
 * 0000000140AFB69F: test    eax, eax
 * 0000000140AFB6A1: js      short loc_140AFB6C7
 * 0000000140AFB6A3: mov     rax, [rsp+0B70h+var_B18]
 * 0000000140AFB6A8: mov     ecx, 1000h
 * 0000000140AFB6AD: add     rax, rcx
 * 0000000140AFB6B0: add     r15, rcx
 * 0000000140AFB6B3: mov     [rsp+0B70h+var_B18], rax
 * 0000000140AFB6B8: cmp     rax, [rbp+0A70h+var_AE8]
 * 0000000140AFB6BC: jnz     short loc_140AFB65F
 * 0000000140AFB6BE: mov     cr8, r12
 * 0000000140AFB6C2: jmp     loc_140AFB74C
 * 0000000140AFB6C7: mov     cr8, r12
 * 0000000140AFB6CB: mov     ecx, [r14]
 * 0000000140AFB6CE: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140AFB6D3: mov     eax, ecx
 * 0000000140AFB6D5: xor     ecx, ecx
 * 0000000140AFB6D7: btr     eax, 1Fh
 * 0000000140AFB6DB: cmp     [rsi+8F8h], ecx
 * 0000000140AFB6E1: jnz     short loc_140AFB74C
 * 0000000140AFB6E3: mov     ecx, ebx
 * 0000000140AFB6E5: xor     rcx, rax
 * 0000000140AFB6E8: mov     rax, [rsi+588h]
 * 0000000140AFB6EF: mov     [rax+18h], rcx
 * 0000000140AFB6F3: xor     eax, eax
 * 0000000140AFB6F5: cmp     [rsi+8F8h], eax
 * 0000000140AFB6FB: jnz     short loc_140AFB74C
 * 0000000140AFB6FD: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFB707: xor     edx, edx
 * 0000000140AFB709: add     rax, rsi
 * 0000000140AFB70C: mov     rcx, rsi
 * 0000000140AFB70F: mov     [rsi+900h], rax
 * 0000000140AFB716: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFB720: add     rax, r13
 * 0000000140AFB723: mov     [rsi+908h], rax
 * 0000000140AFB72A: movsxd  rax, dword ptr [r13+0]
 * 0000000140AFB72E: mov     [rsi+910h], rax
 * 0000000140AFB735: mov     eax, 1
 * 0000000140AFB73A: mov     [rsi+918h], rdi
 * 0000000140AFB741: mov     [rsi+8F8h], eax
 * 0000000140AFB747: call    $$ba
 * 0000000140AFB74C: mov     rdx, [rbp+0A70h+arg_8]
 * 0000000140AFB753: mov     r12, [rbp+0A70h+var_AB8]
 * 0000000140AFB757: add     r14, 10h
 * 0000000140AFB75B: mov     [rsp+0B70h+var_B18], r14
 * 0000000140AFB760: cmp     r14, rdx
 * 0000000140AFB763: jnb     short loc_140AFB77D
 * 0000000140AFB765: mov     eax, [r12]
 * 0000000140AFB769: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140AFB76E: cmp     [rsi+828h], eax
 * 0000000140AFB774: jl      loc_140AFB4CA
 * 0000000140AFB77A: cmp     r14, rdx
 * 0000000140AFB77D: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFB784: jnz     short loc_140AFB78D
 * 0000000140AFB786: xor     eax, eax
 * 0000000140AFB788: mov     r14d, eax
 * 0000000140AFB78B: jmp     short loc_140AFB79D
 * 0000000140AFB78D: mov     rax, [rsp+0B70h+var_B20]
 * 0000000140AFB792: add     rax, 30h ; '0'
 * 0000000140AFB796: sub     r14, rax
 * 0000000140AFB799: sar     r14, 4
 * 0000000140AFB79D: mov     rax, [rsp+0B70h+var_B08]
 * 0000000140AFB7A2: mov     [rax], r14d
 * 0000000140AFB7A5: jmp     loc_140AFB39B
 * 0000000140AFB7AA: mov     rbx, [r13+18h]
 * 0000000140AFB7AE: mov     r14, 0B3B74BDEE4453415h
 * 0000000140AFB7B8: mov     rcx, [rsi+6F8h]
 * 0000000140AFB7BF: mov     r15, 0A3A03F5891C8B4E8h
 * 0000000140AFB7C9: mov     rax, [rsi+728h]
 * 0000000140AFB7D0: add     rcx, rbx
 * 0000000140AFB7D3: movzx   edx, word ptr [r13+22h]
 * 0000000140AFB7D8: cmp     [rcx+rax], dx
 * 0000000140AFB7DC: jz      short loc_140AFB82C
 * 0000000140AFB7DE: xor     eax, eax
 * 0000000140AFB7E0: cmp     [rsi+8F8h], eax
 * 0000000140AFB7E6: jnz     short loc_140AFB82C
 * 0000000140AFB7E8: lea     rax, [rsi+r15]
 * 0000000140AFB7EC: xor     edx, edx
 * 0000000140AFB7EE: mov     [rsi+900h], rax
 * 0000000140AFB7F5: mov     rcx, rsi
 * 0000000140AFB7F8: lea     rax, [r14+r13]
 * 0000000140AFB7FC: mov     [rsi+908h], rax
 * 0000000140AFB803: movsxd  rax, dword ptr [r13+0]
 * 0000000140AFB807: mov     [rsi+910h], rax
 * 0000000140AFB80E: mov     [rsi+918h], rbx
 * 0000000140AFB815: mov     [rsi+8F8h], r11d
 * 0000000140AFB81C: call    $$ba
 * 0000000140AFB821: movzx   edx, word ptr [r13+22h]
 * 0000000140AFB826: mov     r11d, 1
 * 0000000140AFB82C: test    [rsi+730h], dx
 * 0000000140AFB833: jnz     short loc_140AFB887
 * 0000000140AFB835: mov     rcx, [rsi+700h]
 * 0000000140AFB83C: add     rcx, rbx
 * 0000000140AFB83F: cmp     [rcx], rcx
 * 0000000140AFB842: jz      short loc_140AFB887
 * 0000000140AFB844: xor     eax, eax
 * 0000000140AFB846: cmp     [rsi+8F8h], eax
 * 0000000140AFB84C: jnz     short loc_140AFB887
 * 0000000140AFB84E: lea     rax, [rsi+r15]
 * 0000000140AFB852: xor     edx, edx
 * 0000000140AFB854: mov     [rsi+900h], rax
 * 0000000140AFB85B: mov     rcx, rsi
 * 0000000140AFB85E: lea     rax, [r14+r13]
 * 0000000140AFB862: mov     [rsi+908h], rax
 * 0000000140AFB869: movsxd  rax, dword ptr [r13+0]
 * 0000000140AFB86D: mov     [rsi+910h], rax
 * 0000000140AFB874: mov     [rsi+918h], rbx
 * 0000000140AFB87B: mov     [rsi+8F8h], r11d
 * 0000000140AFB882: call    $$ba
 * 0000000140AFB887: mov     r14, [r13+8]
 * 0000000140AFB88B: mov     r8d, [r13+10h]
 * 0000000140AFB88F: mov     r9, r14
 * 0000000140AFB892: add     [rsi+828h], r8d
 * 0000000140AFB899: mov     rax, r14
 * 0000000140AFB89C: mov     r10d, [rsi+814h]
 * 0000000140AFB8A3: mov     r15, [rsi+818h]
 * 0000000140AFB8AA: lea     rcx, [r14+r8]
 * 0000000140AFB8AE: cmp     r14, rcx
 * 0000000140AFB8B1: jnb     short loc_140AFB8C3
 * 0000000140AFB8B3: mov     edx, 40h ; '@'
 * 0000000140AFB8B8: prefetchnta byte ptr [rax]
 * 0000000140AFB8BB: add     rax, rdx
 * 0000000140AFB8BE: cmp     rax, rcx
 * 0000000140AFB8C1: jb      short loc_140AFB8B8
 * 0000000140AFB8C3: mov     r11d, r8d
 * 0000000140AFB8C6: mov     rbx, r15
 * 0000000140AFB8C9: shr     r11d, 7
 * 0000000140AFB8CD: mov     edx, 1
 * 0000000140AFB8D2: mov     r12d, 0FFFFFFFFh
 * 0000000140AFB8D8: test    r11d, r11d
 * 0000000140AFB8DB: jz      short loc_140AFB949
 * 0000000140AFB8DD: mov     rdi, 7010008004002001h
 * 0000000140AFB8E7: mov     eax, 8
 * 0000000140AFB8EC: xor     rbx, [r9]
 * 0000000140AFB8EF: mov     ecx, r10d
 * 0000000140AFB8F2: rol     rbx, cl
 * 0000000140AFB8F5: xor     rbx, [r9+8]
 * 0000000140AFB8F9: add     r9, 10h
 * 0000000140AFB8FD: rol     rbx, cl
 * 0000000140AFB900: sub     rax, rdx
 * 0000000140AFB903: jnz     short loc_140AFB8EC
 * 0000000140AFB905: mov     rcx, r9
 * 0000000140AFB908: sub     rcx, r14
 * 0000000140AFB90B: xor     rcx, r15
 * 0000000140AFB90E: mov     rax, rcx
 * 0000000140AFB911: rol     rax, 11h
 * 0000000140AFB915: xor     rcx, rax
 * 0000000140AFB918: mov     rax, rdi
 * 0000000140AFB91B: mul     rcx
 * 0000000140AFB91E: xor     r10d, edx
 * 0000000140AFB921: mov     [rbp+0A70h+var_340], rdx
 * 0000000140AFB928: xor     r10d, eax
 * 0000000140AFB92B: mov     edx, 1
 * 0000000140AFB930: and     r10d, 3Fh
 * 0000000140AFB934: cmovz   r10d, edx
 * 0000000140AFB938: add     r11d, r12d
 * 0000000140AFB93B: jnz     short loc_140AFB8E7
 * 0000000140AFB93D: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFB942: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFB949: and     r8d, 7Fh
 * 0000000140AFB94D: cmp     r8d, 8
 * 0000000140AFB951: jb      short loc_140AFB970
 * 0000000140AFB953: mov     eax, r8d
 * 0000000140AFB956: shr     rax, 3
 * 0000000140AFB95A: xor     rbx, [r9]
 * 0000000140AFB95D: mov     ecx, r10d
 * 0000000140AFB960: rol     rbx, cl
 * 0000000140AFB963: add     r9, 8
 * 0000000140AFB967: add     r8d, 0FFFFFFF8h
 * 0000000140AFB96B: sub     rax, rdx
 * 0000000140AFB96E: jnz     short loc_140AFB95A
 * 0000000140AFB970: test    r8d, r8d
 * 0000000140AFB973: jz      short loc_140AFB98A
 * 0000000140AFB975: movzx   eax, byte ptr [r9]
 * 0000000140AFB979: mov     ecx, r10d
 * 0000000140AFB97C: xor     rbx, rax
 * 0000000140AFB97F: add     r9, rdx
 * 0000000140AFB982: rol     rbx, cl
 * 0000000140AFB985: add     r8d, r12d
 * 0000000140AFB988: jnz     short loc_140AFB975
 * 0000000140AFB98A: mov     rax, rbx
 * 0000000140AFB98D: jmp     short loc_140AFB991
 * 0000000140AFB98F: xor     ebx, eax
 * 0000000140AFB991: shr     rax, 1Fh
 * 0000000140AFB995: test    rax, rax
 * 0000000140AFB998: jnz     short loc_140AFB98F
 * 0000000140AFB99A: btr     ebx, 1Fh
 * 0000000140AFB99E: mov     r12d, eax
 * 0000000140AFB9A1: cmp     ebx, [r13+14h]
 * 0000000140AFB9A5: jz      loc_140AFBA8C
 * 0000000140AFB9AB: cmp     [r13+0], eax
 * 0000000140AFB9AF: jnz     short loc_140AFB9B9
 * 0000000140AFB9B1: cmp     [r13+18h], eax
 * 0000000140AFB9B5: cmovnz  r12d, edx
 * 0000000140AFB9B9: mov     ecx, [r13+10h]
 * 0000000140AFB9BD: mov     rdx, [r13+8]
 * 0000000140AFB9C1: test    rcx, rcx
 * 0000000140AFB9C4: jz      loc_140AFBB7B
 * 0000000140AFB9CA: mov     eax, [rsi+994h]
 * 0000000140AFB9D0: mov     r8d, 40h ; '@'
 * 0000000140AFB9D6: test    r8b, al
 * 0000000140AFB9D9: jz      loc_140AFBB7B
 * 0000000140AFB9DF: mov     r13, cr8
 * 0000000140AFB9E3: lea     eax, [r8-3Eh]
 * 0000000140AFB9E7: mov     cr8, rax
 * 0000000140AFB9EB: mov     r14, rdx
 * 0000000140AFB9EE: lea     rax, [rcx-1]
 * 0000000140AFB9F2: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140AFB9F9: add     rax, rdx
 * 0000000140AFB9FC: or      rax, 0FFFh
 * 0000000140AFBA02: mov     [rsp+0B70h+var_B18], rax
 * 0000000140AFBA07: lea     rax, [r14-1]
 * 0000000140AFBA0B: mov     [rbp+0A70h+arg_8], rax
 * 0000000140AFBA12: movzx   r15d, r13b
 * 0000000140AFBA16: mov     rax, [rsi+468h]
 * 0000000140AFBA1D: xor     edx, edx
 * 0000000140AFBA1F: mov     rcx, r14
 * 0000000140AFBA22: call    KeGuardDispatchICall
 * 0000000140AFBA27: cmp     eax, 0C000022Dh
 * 0000000140AFBA2C: jnz     short loc_140AFBA5B
 * 0000000140AFBA2E: test    r12d, r12d
 * 0000000140AFBA31: jnz     loc_140AFBB72
 * 0000000140AFBA37: lea     eax, [r12+1]
 * 0000000140AFBA3C: cmp     r13b, al
 * 0000000140AFBA3F: ja      short loc_140AFBA63
 * 0000000140AFBA41: movzx   r15d, r13b
 * 0000000140AFBA45: mov     cr8, r15
 * 0000000140AFBA49: mov     al, [r14]
 * 0000000140AFBA4C: mov     rax, cr8
 * 0000000140AFBA50: lea     eax, [r12+2]
 * 0000000140AFBA55: mov     cr8, rax
 * 0000000140AFBA59: jmp     short loc_140AFBA16
 * 0000000140AFBA5B: test    eax, eax
 * 0000000140AFBA5D: js      loc_140AFBB72
 * 0000000140AFBA63: mov     rax, [rbp+0A70h+arg_8]
 * 0000000140AFBA6A: mov     ecx, 1000h
 * 0000000140AFBA6F: add     rax, rcx
 * 0000000140AFBA72: add     r14, rcx
 * 0000000140AFBA75: mov     [rbp+0A70h+arg_8], rax
 * 0000000140AFBA7C: cmp     rax, [rsp+0B70h+var_B18]
 * 0000000140AFBA81: jnz     short loc_140AFBA12
 * 0000000140AFBA83: mov     cr8, r15
 * 0000000140AFBA87: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140AFBA8C: mov     r15, 0B3B74BDEE4453415h
 * 0000000140AFBA96: mov     r12d, 1
 * 0000000140AFBA9C: mov     rbx, 0A3A03F5891C8B4E8h
 * 0000000140AFBAA6: lea     rax, [r13+30h]
 * 0000000140AFBAAA: xor     r9d, r9d
 * 0000000140AFBAAD: mov     [rbp+0A70h+var_7B8], rax
 * 0000000140AFBAB4: lea     rcx, [rbp+0A70h+var_7C0]
 * 0000000140AFBABB: movzx   eax, word ptr [r13+20h]
 * 0000000140AFBAC0: xor     r8d, r8d
 * 0000000140AFBAC3: mov     [rbp+0A70h+var_7C0], ax
 * 0000000140AFBACA: xor     edx, edx
 * 0000000140AFBACC: mov     [rbp+0A70h+var_7BE], ax
 * 0000000140AFBAD3: lea     rax, [rbp+0A70h+var_8B8]
 * 0000000140AFBADA: mov     [rsp+0B70h+var_B38], rax
 * 0000000140AFBADF: xor     eax, eax
 * 0000000140AFBAE1: mov     [rsp+0B70h+var_B40], rax
 * 0000000140AFBAE6: mov     byte ptr [rsp+0B70h+var_B48], al
 * 0000000140AFBAEA: mov     rax, [rsi+500h]
 * 0000000140AFBAF1: mov     [rsp+0B70h+BugCheckParameter4], rax
 * 0000000140AFBAF6: mov     rax, [rsi+1E8h]
 * 0000000140AFBAFD: call    KeGuardDispatchICall
 * 0000000140AFBB02: test    eax, eax
 * 0000000140AFBB04: js      loc_140AFB148
 * 0000000140AFBB0A: mov     rcx, [rbp+0A70h+var_8B8]
 * 0000000140AFBB11: cmp     rcx, [r13+18h]
 * 0000000140AFBB15: jz      short loc_140AFBB61
 * 0000000140AFBB17: xor     eax, eax
 * 0000000140AFBB19: cmp     [rsi+8F8h], eax
 * 0000000140AFBB1F: jnz     short loc_140AFBB61
 * 0000000140AFBB21: lea     rax, [rsi+rbx]
 * 0000000140AFBB25: xor     edx, edx
 * 0000000140AFBB27: mov     [rsi+900h], rax
 * 0000000140AFBB2E: lea     rax, [r15+r13]
 * 0000000140AFBB32: mov     [rsi+908h], rax
 * 0000000140AFBB39: movsxd  rax, dword ptr [r13+0]
 * 0000000140AFBB3D: mov     [rsi+910h], rax
 * 0000000140AFBB44: mov     [rsi+918h], rcx
 * 0000000140AFBB4B: mov     rcx, rsi
 * 0000000140AFBB4E: mov     [rsi+8F8h], r12d
 * 0000000140AFBB55: call    $$ba
 * 0000000140AFBB5A: mov     rcx, [rbp+0A70h+var_8B8]
 * 0000000140AFBB61: mov     rax, [rsi+1E0h]
 * 0000000140AFBB68: call    KeGuardDispatchICall
 * 0000000140AFBB6D: jmp     loc_140AFB148
 * 0000000140AFBB72: mov     cr8, r15
 * 0000000140AFBB76: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140AFBB7B: mov     eax, [r13+14h]
 * 0000000140AFBB7F: xor     ecx, ecx
 * 0000000140AFBB81: mov     r15, 0B3B74BDEE4453415h
 * 0000000140AFBB8B: lea     r12d, [rcx+1]
 * 0000000140AFBB8F: cmp     [rsi+8F8h], ecx
 * 0000000140AFBB95: jnz     loc_140AFBA9C
 * 0000000140AFBB9B: mov     ecx, ebx
 * 0000000140AFBB9D: mov     rbx, 0A3A03F5891C8B4E8h
 * 0000000140AFBBA7: xor     rcx, rax
 * 0000000140AFBBAA: mov     rax, [rsi+588h]
 * 0000000140AFBBB1: mov     [rax+18h], rcx
 * 0000000140AFBBB5: xor     eax, eax
 * 0000000140AFBBB7: mov     rcx, [r13+8]
 * 0000000140AFBBBB: cmp     [rsi+8F8h], eax
 * 0000000140AFBBC1: jnz     loc_140AFBAA6
 * 0000000140AFBBC7: lea     rax, [rsi+rbx]
 * 0000000140AFBBCB: xor     edx, edx
 * 0000000140AFBBCD: mov     [rsi+900h], rax
 * 0000000140AFBBD4: lea     rax, [r15+r13]
 * 0000000140AFBBD8: mov     [rsi+908h], rax
 * 0000000140AFBBDF: movsxd  rax, dword ptr [r13+0]
 * 0000000140AFBBE3: mov     [rsi+910h], rax
 * 0000000140AFBBEA: mov     [rsi+918h], rcx
 * 0000000140AFBBF1: mov     rcx, rsi
 * 0000000140AFBBF4: mov     [rsi+8F8h], r12d
 * 0000000140AFBBFB: call    $$ba
 * 0000000140AFBC00: jmp     loc_140AFBAA6
 * 0000000140AFBC05: mov     rax, [rsi+1A0h]
 * 0000000140AFBC0C: lea     rcx, [rbp+0A70h+var_310]
 * 0000000140AFBC13: mov     edx, [r13+1Ch]
 * 0000000140AFBC17: call    KeGuardDispatchICall
 * 0000000140AFBC1C: mov     rax, [rsi+1D0h]
 * 0000000140AFBC23: lea     rdx, [rbp+0A70h+var_300]
 * 0000000140AFBC2A: lea     rcx, [rbp+0A70h+var_310]
 * 0000000140AFBC31: call    KeGuardDispatchICall
 * 0000000140AFBC36: xor     eax, eax
 * 0000000140AFBC38: mov     ebx, eax
 * 0000000140AFBC3A: lea     r12d, [rax+1]
 * 0000000140AFBC3E: cmp     [r13+18h], eax
 * 0000000140AFBC42: jbe     loc_140AFBD4B
 * 0000000140AFBC48: xor     edi, edi
 * 0000000140AFBC4A: mov     eax, ebx
 * 0000000140AFBC4C: lea     r8, [rax+rax*2]
 * 0000000140AFBC50: mov     r9d, [r13+r8*8+40h]
 * 0000000140AFBC55: test    [rsi+87Bh], r14b
 * 0000000140AFBC5C: jz      short loc_140AFBC81
 * 0000000140AFBC5E: mov     eax, 0C0000082h
 * 0000000140AFBC63: cmp     r9d, eax
 * 0000000140AFBC66: jnz     short loc_140AFBC81
 * 0000000140AFBC68: mov     eax, gs:1A4h
 * 0000000140AFBC70: cmp     eax, [rsi+8F0h]
 * 0000000140AFBC76: jnz     short loc_140AFBC81
 * 0000000140AFBC78: mov     rdx, [rsi+8E8h]
 * 0000000140AFBC7F: jmp     short loc_140AFBC8D
 * 0000000140AFBC81: mov     ecx, r9d
 * 0000000140AFBC84: rdmsr
 * 0000000140AFBC86: shl     rdx, 20h
 * 0000000140AFBC8A: or      rdx, rax
 * 0000000140AFBC8D: mov     rcx, [r13+r8*8+30h]
 * 0000000140AFBC92: mov     r8, [r13+r8*8+38h]
 * 0000000140AFBC97: and     rdx, rcx
 * 0000000140AFBC9A: cmp     rdx, r8
 * 0000000140AFBC9D: jz      short loc_140AFBD19
 * 0000000140AFBC9F: mov     ecx, [r13+1Ch]
 * 0000000140AFBCA3: shl     rcx, 20h
 * 0000000140AFBCA7: or      rcx, r9
 * 0000000140AFBCAA: cmp     [rsi+8F8h], edi
 * 0000000140AFBCB0: jnz     loc_140AFBD37
 * 0000000140AFBCB6: mov     rax, [rsi+588h]
 * 0000000140AFBCBD: xor     r8, rdx
 * 0000000140AFBCC0: mov     [rax+18h], r8
 * 0000000140AFBCC4: cmp     [rsi+8F8h], edi
 * 0000000140AFBCCA: jnz     short loc_140AFBD37
 * 0000000140AFBCCC: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFBCD6: xor     edx, edx
 * 0000000140AFBCD8: add     rax, rsi
 * 0000000140AFBCDB: mov     [rsi+900h], rax
 * 0000000140AFBCE2: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFBCEC: add     rax, r13
 * 0000000140AFBCEF: mov     [rsi+908h], rax
 * 0000000140AFBCF6: movsxd  rax, dword ptr [r13+0]
 * 0000000140AFBCFA: mov     [rsi+910h], rax
 * 0000000140AFBD01: mov     [rsi+918h], rcx
 * 0000000140AFBD08: mov     rcx, rsi
 * 0000000140AFBD0B: mov     [rsi+8F8h], r12d
 * 0000000140AFBD12: call    $$ba
 * 0000000140AFBD17: jmp     short loc_140AFBD37
 * 0000000140AFBD19: test    dword ptr [rsi+994h], 200h
 * 0000000140AFBD23: jz      short loc_140AFBD37
 * 0000000140AFBD25: cmp     rcx, 0FFFFFFFFFFFFFFFFh
 * 0000000140AFBD29: jnz     short loc_140AFBD37
 * 0000000140AFBD2B: mov     rax, rdx
 * 0000000140AFBD2E: mov     ecx, r9d
 * 0000000140AFBD31: shr     rdx, 20h
 * 0000000140AFBD35: wrmsr
 * 0000000140AFBD37: add     ebx, r12d
 * 0000000140AFBD3A: cmp     ebx, [r13+18h]
 * 0000000140AFBD3E: jb      loc_140AFBC4A
 * 0000000140AFBD44: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFBD4B: mov     rax, [rsi+198h]
 * 0000000140AFBD52: lea     rcx, [rbp+0A70h+var_300]
 * 0000000140AFBD59: call    KeGuardDispatchICall
 * 0000000140AFBD5E: mov     eax, [r13+18h]
 * 0000000140AFBD62: shl     eax, 0Fh
 * 0000000140AFBD65: add     [rsi+828h], eax
 * 0000000140AFBD6B: jmp     loc_140AFB148
 * 0000000140AFBD70: mov     ecx, [rsi+830h]
 * 0000000140AFBD76: mov     r12d, 1
 * 0000000140AFBD7C: test    r12b, cl
 * 0000000140AFBD7F: jz      loc_140AFB14A
 * 0000000140AFBD85: bt      dword ptr [rsi+990h], 1Eh
 * 0000000140AFBD8D: jb      short loc_140AFBDA5
 * 0000000140AFBD8F: mov     r14d, eax
 * 0000000140AFBD92: and     ecx, 3
 * 0000000140AFBD95: cmp     cl, 3
 * 0000000140AFBD98: setz    r14b
 * 0000000140AFBD9C: mov     dword ptr [rbp+0A70h+arg_8], r14d
 * 0000000140AFBDA3: jmp     short loc_140AFBDF9
 * 0000000140AFBDA5: rdtsc
 * 0000000140AFBDA7: shl     rdx, 20h
 * 0000000140AFBDAB: or      rax, rdx
 * 0000000140AFBDAE: mov     rcx, rax
 * 0000000140AFBDB1: ror     rax, 3
 * 0000000140AFBDB5: xor     rcx, rax
 * 0000000140AFBDB8: mov     rax, 7010008004002001h
 * 0000000140AFBDC2: mul     rcx
 * 0000000140AFBDC5: mov     rcx, rdx
 * 0000000140AFBDC8: mov     [rbp+0A70h+var_338], rdx
 * 0000000140AFBDCF: xor     rcx, rax
 * 0000000140AFBDD2: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140AFBDDC: mul     rcx
 * 0000000140AFBDDF: shr     rdx, 1
 * 0000000140AFBDE2: lea     rax, [rdx+rdx*2]
 * 0000000140AFBDE6: cmp     rcx, rax
 * 0000000140AFBDE9: mov     eax, 0
 * 0000000140AFBDEE: setz    al
 * 0000000140AFBDF1: mov     dword ptr [rbp+0A70h+arg_8], eax
 * 0000000140AFBDF7: xor     eax, eax
 * 0000000140AFBDF9: mov     rbx, [rsi+540h]
 * 0000000140AFBE00: mov     r15d, eax
 * 0000000140AFBE03: mov     dword ptr [rbp+0A70h+var_AD8], eax
 * 0000000140AFBE06: mov     rax, [rsi+178h]
 * 0000000140AFBE0D: call    KeGuardDispatchICall
 * 0000000140AFBE12: bt      dword ptr [rsi+990h], 1Eh
 * 0000000140AFBE1A: jb      short loc_140AFBE2F
 * 0000000140AFBE1C: mov     ecx, [rsi+950h]
 * 0000000140AFBE22: cmp     ecx, 7
 * 0000000140AFBE25: jnb     short loc_140AFBE2F
 * 0000000140AFBE27: mov     r14d, r12d
 * 0000000140AFBE2A: shl     r14b, cl
 * 0000000140AFBE2D: jmp     short loc_140AFBE47
 * 0000000140AFBE2F: mov     rax, [rsi+128h]
 * 0000000140AFBE36: xor     edx, edx
 * 0000000140AFBE38: mov     rcx, [rsi+0A00h]
 * 0000000140AFBE3F: call    KeGuardDispatchICall
 * 0000000140AFBE44: mov     r14b, 80h
 * 0000000140AFBE47: mov     rax, [rsi+138h]
 * 0000000140AFBE4E: xor     edx, edx
 * 0000000140AFBE50: mov     rcx, rbx
 * 0000000140AFBE53: call    KeGuardDispatchICall
 * 0000000140AFBE58: mov     r8, [rsi+518h]
 * 0000000140AFBE5F: mov     rdx, [r8]
 * 0000000140AFBE62: cmp     rdx, r8
 * 0000000140AFBE65: jz      short loc_140AFBE8C
 * 0000000140AFBE67: mov     rax, [rsi+6C0h]
 * 0000000140AFBE6E: mov     rcx, rdx
 * 0000000140AFBE71: sub     rcx, [rsi+6D8h]
 * 0000000140AFBE78: lock or [rcx+rax], r14b
 * 0000000140AFBE7D: mov     rdx, [rdx]
 * 0000000140AFBE80: add     r15d, r12d
 * 0000000140AFBE83: cmp     rdx, r8
 * 0000000140AFBE86: jnz     short loc_140AFBE67
 * 0000000140AFBE88: mov     dword ptr [rbp+0A70h+var_AD8], r15d
 * 0000000140AFBE8C: mov     rax, [rsi+548h]
 * 0000000140AFBE93: mov     r15d, 4
 * 0000000140AFBE99: mov     edi, dword ptr [rbp+0A70h+arg_8]
 * 0000000140AFBE9F: mov     r13, [rax]
 * 0000000140AFBEA2: mov     rax, [rsi+738h]
 * 0000000140AFBEA9: mov     ebx, [rax+r13]
 * 0000000140AFBEAD: mov     [rsp+0B70h+var_B18], rbx
 * 0000000140AFBEB2: mov     rax, [rsi+100h]
 * 0000000140AFBEB9: mov     rdx, r15
 * 0000000140AFBEBC: mov     rcx, r13
 * 0000000140AFBEBF: call    KeGuardDispatchICall
 * 0000000140AFBEC4: mov     r12, rax
 * 0000000140AFBEC7: test    rax, rax
 * 0000000140AFBECA: jz      loc_140AFC040
 * 0000000140AFBED0: mov     rax, [rsi+108h]
 * 0000000140AFBED7: mov     rcx, r12
 * 0000000140AFBEDA: call    KeGuardDispatchICall
 * 0000000140AFBEDF: mov     rbx, rax
 * 0000000140AFBEE2: mov     al, [rax]
 * 0000000140AFBEE4: and     al, 7Fh
 * 0000000140AFBEE6: cmp     al, 3
 * 0000000140AFBEE8: jnz     loc_140AFBF82
 * 0000000140AFBEEE: mov     r8, [rsi+6C0h]
 * 0000000140AFBEF5: mov     rdx, r8
 * 0000000140AFBEF8: test    [rbx+r8], r14b
 * 0000000140AFBEFC: jnz     short loc_140AFBF74
 * 0000000140AFBEFE: mov     rax, [rsi+6C8h]
 * 0000000140AFBF05: mov     ecx, [rbx+rax]
 * 0000000140AFBF08: test    [rsi+6E0h], ecx
 * 0000000140AFBF0E: jz      short loc_140AFBF74
 * 0000000140AFBF10: xor     eax, eax
 * 0000000140AFBF12: cmp     [rsi+8F8h], eax
 * 0000000140AFBF18: jnz     short loc_140AFBF74
 * 0000000140AFBF1A: mov     rcx, [rsp+0B70h+var_B20]
 * 0000000140AFBF1F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFBF29: add     rax, rsi
 * 0000000140AFBF2C: xor     edx, edx
 * 0000000140AFBF2E: mov     [rsi+900h], rax
 * 0000000140AFBF35: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFBF3F: add     rax, rcx
 * 0000000140AFBF42: mov     [rsi+908h], rax
 * 0000000140AFBF49: movsxd  rax, dword ptr [rcx]
 * 0000000140AFBF4C: mov     rcx, rsi
 * 0000000140AFBF4F: mov     [rsi+910h], rax
 * 0000000140AFBF56: mov     eax, 1
 * 0000000140AFBF5B: mov     [rsi+918h], rbx
 * 0000000140AFBF62: mov     [rsi+8F8h], eax
 * 0000000140AFBF68: call    $$ba
 * 0000000140AFBF6D: mov     rdx, [rsi+6C0h]
 * 0000000140AFBF74: mov     al, r14b
 * 0000000140AFBF77: not     al
 * 0000000140AFBF79: lock and [rbx+rdx], al
 * 0000000140AFBF7D: jmp     loc_140AFC029
 * 0000000140AFBF82: cmp     al, 6
 * 0000000140AFBF84: jnz     short loc_140AFBFC8
 * 0000000140AFBF86: test    edi, edi
 * 0000000140AFBF88: jz      loc_140AFC029
 * 0000000140AFBF8E: mov     rcx, [rsi+688h]
 * 0000000140AFBF95: mov     rax, [rbx+rcx+20h]
 * 0000000140AFBF9A: cmp     rax, [rsi+320h]
 * 0000000140AFBFA1: jz      short loc_140AFBFAC
 * 0000000140AFBFA3: cmp     rax, [rsi+328h]
 * 0000000140AFBFAA: jnz     short loc_140AFBFCC
 * 0000000140AFBFAC: mov     rax, [rsi+330h]
 * 0000000140AFBFB3: cmp     [rbx+rcx+30h], rax
 * 0000000140AFBFB8: jnz     short loc_140AFBFCC
 * 0000000140AFBFBA: mov     rax, [rsi+338h]
 * 0000000140AFBFC1: cmp     [rbx+rcx+28h], rax
 * 0000000140AFBFC6: jmp     short loc_140AFBFCA
 * 0000000140AFBFC8: test    al, al
 * 0000000140AFBFCA: jz      short loc_140AFC029
 * 0000000140AFBFCC: xor     eax, eax
 * 0000000140AFBFCE: cmp     [rsi+8F8h], eax
 * 0000000140AFBFD4: jnz     short loc_140AFC029
 * 0000000140AFBFD6: mov     rcx, [rsp+0B70h+var_B20]
 * 0000000140AFBFDB: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFBFE5: add     rax, rsi
 * 0000000140AFBFE8: xor     edx, edx
 * 0000000140AFBFEA: mov     [rsi+900h], rax
 * 0000000140AFBFF1: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFBFFB: add     rax, rcx
 * 0000000140AFBFFE: mov     [rsi+908h], rax
 * 0000000140AFC005: movsxd  rax, dword ptr [rcx]
 * 0000000140AFC008: mov     rcx, rsi
 * 0000000140AFC00B: mov     [rsi+910h], rax
 * 0000000140AFC012: mov     eax, 1
 * 0000000140AFC017: mov     [rsi+918h], rbx
 * 0000000140AFC01E: mov     [rsi+8F8h], eax
 * 0000000140AFC024: call    $$ba
 * 0000000140AFC029: mov     rax, [rsi+120h]
 * 0000000140AFC030: mov     rdx, r12
 * 0000000140AFC033: mov     rcx, r13
 * 0000000140AFC036: call    KeGuardDispatchICall
 * 0000000140AFC03B: mov     rbx, [rsp+0B70h+var_B18]
 * 0000000140AFC040: add     r15, 4
 * 0000000140AFC044: cmp     r15, rbx
 * 0000000140AFC047: jb      loc_140AFBEB2
 * 0000000140AFC04D: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFC054: cmp     r14b, 80h
 * 0000000140AFC058: jnz     short loc_140AFC06F
 * 0000000140AFC05A: mov     rax, [rsi+130h]
 * 0000000140AFC061: xor     edx, edx
 * 0000000140AFC063: mov     rcx, [rsi+0A00h]
 * 0000000140AFC06A: call    KeGuardDispatchICall
 * 0000000140AFC06F: mov     rcx, [rsi+540h]
 * 0000000140AFC076: xor     edx, edx
 * 0000000140AFC078: mov     rax, [rsi+140h]
 * 0000000140AFC07F: call    KeGuardDispatchICall
 * 0000000140AFC084: mov     rax, [rsi+180h]
 * 0000000140AFC08B: call    KeGuardDispatchICall
 * 0000000140AFC090: mov     eax, dword ptr [rbp+0A70h+var_AD8]
 * 0000000140AFC093: shr     rbx, 2
 * 0000000140AFC097: add     eax, ebx
 * 0000000140AFC099: shl     eax, 8
 * 0000000140AFC09C: add     [rsi+828h], eax
 * 0000000140AFC0A2: jmp     loc_140AFB39B
 * 0000000140AFC0A7: mov     eax, [rsi+830h]
 * 0000000140AFC0AD: mov     r12d, 1
 * 0000000140AFC0B3: test    r12b, al
 * 0000000140AFC0B6: jnz     loc_140AFB148
 * 0000000140AFC0BC: mov     rbx, [rsi+540h]
 * 0000000140AFC0C3: xor     eax, eax
 * 0000000140AFC0C5: mov     r13d, eax
 * 0000000140AFC0C8: mov     dword ptr [rbp+0A70h+var_AD8], eax
 * 0000000140AFC0CB: mov     rax, [rsi+178h]
 * 0000000140AFC0D2: call    KeGuardDispatchICall
 * 0000000140AFC0D7: test    dword ptr [rsi+990h], 40000000h
 * 0000000140AFC0E1: jnz     short loc_140AFC0F6
 * 0000000140AFC0E3: mov     ecx, [rsi+950h]
 * 0000000140AFC0E9: cmp     ecx, 7
 * 0000000140AFC0EC: jnb     short loc_140AFC0F6
 * 0000000140AFC0EE: mov     r14d, r12d
 * 0000000140AFC0F1: shl     r14b, cl
 * 0000000140AFC0F4: jmp     short loc_140AFC10E
 * 0000000140AFC0F6: mov     rax, [rsi+128h]
 * 0000000140AFC0FD: xor     edx, edx
 * 0000000140AFC0FF: mov     rcx, [rsi+0A00h]
 * 0000000140AFC106: call    KeGuardDispatchICall
 * 0000000140AFC10B: mov     r14b, 80h
 * 0000000140AFC10E: mov     rax, [rsi+138h]
 * 0000000140AFC115: xor     edx, edx
 * 0000000140AFC117: mov     rcx, rbx
 * 0000000140AFC11A: mov     dword ptr [rbp+0A70h+arg_8], r14d
 * 0000000140AFC121: call    KeGuardDispatchICall
 * 0000000140AFC126: mov     r12, [rsi+518h]
 * 0000000140AFC12D: mov     r15, [r12]
 * 0000000140AFC131: cmp     r15, r12
 * 0000000140AFC134: jz      loc_140AFC1F2
 * 0000000140AFC13A: mov     rdi, [rsp+0B70h+var_B20]
 * 0000000140AFC13F: mov     rbx, r15
 * 0000000140AFC142: sub     rbx, [rsi+6D8h]
 * 0000000140AFC149: cmp     r14b, 80h
 * 0000000140AFC14D: jz      short loc_140AFC1CC
 * 0000000140AFC14F: mov     rax, [rsi+6C0h]
 * 0000000140AFC156: test    [rbx+rax], r14b
 * 0000000140AFC15A: jz      short loc_140AFC1CC
 * 0000000140AFC15C: mov     rax, [rsi+6C8h]
 * 0000000140AFC163: mov     ecx, [rbx+rax]
 * 0000000140AFC166: test    [rsi+6E0h], ecx
 * 0000000140AFC16C: jz      short loc_140AFC1CC
 * 0000000140AFC16E: xor     eax, eax
 * 0000000140AFC170: cmp     [rsi+8F8h], eax
 * 0000000140AFC176: jnz     short loc_140AFC1CC
 * 0000000140AFC178: mov     ecx, 1
 * 0000000140AFC17D: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFC187: add     rax, rsi
 * 0000000140AFC18A: xor     edx, edx
 * 0000000140AFC18C: mov     [rsi+900h], rax
 * 0000000140AFC193: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFC19D: add     rax, rdi
 * 0000000140AFC1A0: mov     [rsi+908h], rax
 * 0000000140AFC1A7: movsxd  rax, dword ptr [rdi]
 * 0000000140AFC1AA: mov     [rsi+910h], rax
 * 0000000140AFC1B1: mov     rax, rbx
 * 0000000140AFC1B4: or      rax, rcx
 * 0000000140AFC1B7: mov     [rsi+918h], rax
 * 0000000140AFC1BE: mov     [rsi+8F8h], ecx
 * 0000000140AFC1C4: mov     rcx, rsi
 * 0000000140AFC1C7: call    $$ba
 * 0000000140AFC1CC: mov     rax, [rsi+6C0h]
 * 0000000140AFC1D3: lock or [rbx+rax], r14b
 * 0000000140AFC1D8: mov     r15, [r15]
 * 0000000140AFC1DB: inc     r13d
 * 0000000140AFC1DE: cmp     r15, r12
 * 0000000140AFC1E1: jnz     loc_140AFC13F
 * 0000000140AFC1E7: mov     dword ptr [rbp+0A70h+var_AD8], r13d
 * 0000000140AFC1EB: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFC1F2: mov     rcx, [rsi+4F8h]
 * 0000000140AFC1F9: mov     rax, cr8
 * 0000000140AFC1FD: mov     [rsp+0B70h+var_B18], rax
 * 0000000140AFC202: mov     eax, 0Ch
 * 0000000140AFC207: mov     cr8, rax
 * 0000000140AFC20B: mov     rax, [rsi+148h]
 * 0000000140AFC212: lea     rdx, [rbp+0A70h+var_170]
 * 0000000140AFC219: call    KeGuardDispatchICall
 * 0000000140AFC21E: mov     r13, [rsi+4F0h]
 * 0000000140AFC225: mov     r15, [r13+0]
 * 0000000140AFC229: cmp     r15, r13
 * 0000000140AFC22C: jz      loc_140AFC2E0
 * 0000000140AFC232: mov     rdi, [rsp+0B70h+var_B20]
 * 0000000140AFC237: mov     r12b, r14b
 * 0000000140AFC23A: movzx   edx, r14b
 * 0000000140AFC23E: not     r12b
 * 0000000140AFC241: mov     dword ptr [rbp+0A70h+var_AC8], edx
 * 0000000140AFC244: xor     r14d, r14d
 * 0000000140AFC247: mov     rcx, [rsi+6C0h]
 * 0000000140AFC24E: mov     rbx, r15
 * 0000000140AFC251: sub     rbx, [rsi+6B8h]
 * 0000000140AFC258: movsx   eax, byte ptr [rbx+rcx]
 * 0000000140AFC25C: test    edx, eax
 * 0000000140AFC25E: jnz     short loc_140AFC2C1
 * 0000000140AFC260: cmp     [rsi+8F8h], r14d
 * 0000000140AFC267: jnz     short loc_140AFC2C1
 * 0000000140AFC269: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFC273: xor     edx, edx
 * 0000000140AFC275: add     rax, rsi
 * 0000000140AFC278: mov     rcx, rsi
 * 0000000140AFC27B: mov     [rsi+900h], rax
 * 0000000140AFC282: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFC28C: add     rax, rdi
 * 0000000140AFC28F: mov     [rsi+908h], rax
 * 0000000140AFC296: movsxd  rax, dword ptr [rdi]
 * 0000000140AFC299: mov     [rsi+910h], rax
 * 0000000140AFC2A0: mov     eax, 1
 * 0000000140AFC2A5: mov     [rsi+918h], rbx
 * 0000000140AFC2AC: mov     [rsi+8F8h], eax
 * 0000000140AFC2B2: call    $$ba
 * 0000000140AFC2B7: mov     rcx, [rsi+6C0h]
 * 0000000140AFC2BE: mov     edx, dword ptr [rbp+0A70h+var_AC8]
 * 0000000140AFC2C1: lock and [rbx+rcx], r12b
 * 0000000140AFC2C6: mov     r15, [r15]
 * 0000000140AFC2C9: cmp     r15, r13
 * 0000000140AFC2CC: jnz     loc_140AFC247
 * 0000000140AFC2D2: mov     r14d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140AFC2D9: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFC2E0: mov     rax, [rsi+188h]
 * 0000000140AFC2E7: lea     rcx, [rbp+0A70h+var_170]
 * 0000000140AFC2EE: call    KeGuardDispatchICall
 * 0000000140AFC2F3: movzx   eax, byte ptr [rsp+0B70h+var_B18]
 * 0000000140AFC2F8: mov     cr8, rax
 * 0000000140AFC2FC: cmp     r14b, 80h
 * 0000000140AFC300: jnz     short loc_140AFC317
 * 0000000140AFC302: mov     rax, [rsi+130h]
 * 0000000140AFC309: xor     edx, edx
 * 0000000140AFC30B: mov     rcx, [rsi+0A00h]
 * 0000000140AFC312: call    KeGuardDispatchICall
 * 0000000140AFC317: mov     rcx, [rsi+540h]
 * 0000000140AFC31E: xor     edx, edx
 * 0000000140AFC320: mov     rax, [rsi+140h]
 * 0000000140AFC327: call    KeGuardDispatchICall
 * 0000000140AFC32C: mov     rax, [rsi+180h]
 * 0000000140AFC333: call    KeGuardDispatchICall
 * 0000000140AFC338: mov     eax, dword ptr [rbp+0A70h+var_AD8]
 * 0000000140AFC33B: jmp     loc_140AFC099
 * 0000000140AFC340: mov     eax, edx
 * 0000000140AFC342: mov     ecx, edx
 * 0000000140AFC344: shr     eax, 3
 * 0000000140AFC347: xor     eax, edx
 * 0000000140AFC349: test    al, 4
 * 0000000140AFC34B: jnz     loc_140AFB1BE
 * 0000000140AFC351: test    cl, 4
 * 0000000140AFC354: jz      loc_140B05468
 * 0000000140AFC35A: mov     r15, [r13+20h]
 * 0000000140AFC35E: mov     eax, [r13+28h]
 * 0000000140AFC362: test    r15, r15
 * 0000000140AFC365: jz      short loc_140AFC376
 * 0000000140AFC367: sub     eax, r8d
 * 0000000140AFC36A: lea     ecx, [r8+r15]
 * 0000000140AFC36E: mov     ebx, eax
 * 0000000140AFC370: lea     r14, [r15+r8]
 * 0000000140AFC374: jmp     short loc_140AFC382
 * 0000000140AFC376: mov     ecx, [r13+8]
 * 0000000140AFC37A: mov     ebx, [r13+10h]
 * 0000000140AFC37E: mov     r14, [r13+8]
 * 0000000140AFC382: add     rbx, 0FFFh
 * 0000000140AFC389: and     ecx, 0FFFh
 * 0000000140AFC38F: add     rbx, rcx
 * 0000000140AFC392: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140AFC399: shr     rbx, 0Ch
 * 0000000140AFC39D: xor     eax, eax
 * 0000000140AFC39F: test    rbx, rbx
 * 0000000140AFC3A2: jz      loc_140AFC457
 * 0000000140AFC3A8: mov     rax, [rsi+2B0h]
 * 0000000140AFC3AF: mov     rcx, r14
 * 0000000140AFC3B2: sub     rbx, r11
 * 0000000140AFC3B5: call    KeGuardDispatchICall
 * 0000000140AFC3BA: test    al, al
 * 0000000140AFC3BC: jz      short loc_140AFC417
 * 0000000140AFC3BE: xor     eax, eax
 * 0000000140AFC3C0: cmp     [rsi+8F8h], eax
 * 0000000140AFC3C6: jnz     short loc_140AFC417
 * 0000000140AFC3C8: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFC3D2: xor     edx, edx
 * 0000000140AFC3D4: add     rax, rsi
 * 0000000140AFC3D7: mov     rcx, rsi
 * 0000000140AFC3DA: mov     [rsi+900h], rax
 * 0000000140AFC3E1: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFC3EB: add     rax, r13
 * 0000000140AFC3EE: mov     [rsi+908h], rax
 * 0000000140AFC3F5: movsxd  rax, dword ptr [r13+0]
 * 0000000140AFC3F9: mov     [rsi+910h], rax
 * 0000000140AFC400: mov     eax, 1
 * 0000000140AFC405: mov     [rsi+918h], r14
 * 0000000140AFC40C: mov     [rsi+8F8h], eax
 * 0000000140AFC412: call    $$ba
 * 0000000140AFC417: mov     eax, [rsi+828h]
 * 0000000140AFC41D: mov     r8d, 1000h
 * 0000000140AFC423: add     eax, 100h
 * 0000000140AFC428: add     r14, r8
 * 0000000140AFC42B: mov     [rsi+828h], eax
 * 0000000140AFC431: test    r15, r15
 * 0000000140AFC434: jz      short loc_140AFC443
 * 0000000140AFC436: add     [rsi+824h], r8d
 * 0000000140AFC43D: cmp     eax, [r12]
 * 0000000140AFC441: jge     short loc_140AFC453
 * 0000000140AFC443: xor     eax, eax
 * 0000000140AFC445: test    rbx, rbx
 * 0000000140AFC448: jz      short loc_140AFC457
 * 0000000140AFC44A: lea     r11d, [rax+1]
 * 0000000140AFC44E: jmp     loc_140AFC3A8
 * 0000000140AFC453: xor     eax, eax
 * 0000000140AFC455: jmp     short loc_140AFC45C
 * 0000000140AFC457: test    r15, r15
 * 0000000140AFC45A: jz      short loc_140AFC467
 * 0000000140AFC45C: test    rbx, rbx
 * 0000000140AFC45F: jnz     short loc_140AFC467
 * 0000000140AFC461: mov     [rsi+824h], eax
 * 0000000140AFC467: cmp     [rsi+824h], eax
 * 0000000140AFC46D: jnz     loc_140AFB39B
 * 0000000140AFC473: mov     rcx, [rsi+538h]
 * 0000000140AFC47A: mov     r15, cr8
 * 0000000140AFC47E: mov     eax, 0Fh
 * 0000000140AFC483: mov     cr8, rax
 * 0000000140AFC487: mov     rax, [rsi+150h]
 * 0000000140AFC48E: call    KeGuardDispatchICall
 * 0000000140AFC493: mov     rax, [rsi+618h]
 * 0000000140AFC49A: mov     r14, [rsp+0B70h+var_B20]
 * 0000000140AFC49F: mov     rcx, [rax]
 * 0000000140AFC4A2: mov     eax, [rcx]
 * 0000000140AFC4A4: lea     rbx, [rcx+10h]
 * 0000000140AFC4A8: mov     r12b, [rcx+0Ch]
 * 0000000140AFC4AC: lea     rcx, [rax+rax*2]
 * 0000000140AFC4B0: lea     r13, [rbx+rcx*8]
 * 0000000140AFC4B4: mov     r8d, 18h
 * 0000000140AFC4BA: lea     r9, [r14+18h]
 * 0000000140AFC4BE: mov     r10, rbx
 * 0000000140AFC4C1: mov     rcx, [r10]
 * 0000000140AFC4C4: add     r10, 8
 * 0000000140AFC4C8: mov     rax, [r9]
 * 0000000140AFC4CB: add     r9, 8
 * 0000000140AFC4CF: cmp     rcx, rax
 * 0000000140AFC4D2: jnz     short loc_140AFC508
 * 0000000140AFC4D4: add     r8d, 0FFFFFFF8h
 * 0000000140AFC4D8: cmp     r8d, 8
 * 0000000140AFC4DC: jnb     short loc_140AFC4C1
 * 0000000140AFC4DE: test    r8d, r8d
 * 0000000140AFC4E1: jz      short loc_140AFC511
 * 0000000140AFC4E3: mov     r11d, 1
 * 0000000140AFC4E9: movzx   edx, byte ptr [r10]
 * 0000000140AFC4ED: add     r10, r11
 * 0000000140AFC4F0: movzx   eax, byte ptr [r9]
 * 0000000140AFC4F4: add     r9, r11
 * 0000000140AFC4F7: cmp     rdx, rax
 * 0000000140AFC4FA: jnz     short loc_140AFC508
 * 0000000140AFC4FC: mov     eax, 0FFFFFFFFh
 * 0000000140AFC501: add     r8d, eax
 * 0000000140AFC504: jz      short loc_140AFC511
 * 0000000140AFC506: jmp     short loc_140AFC4E9
 * 0000000140AFC508: add     rbx, 18h
 * 0000000140AFC50C: cmp     rbx, r13
 * 0000000140AFC50F: jb      short loc_140AFC4B4
 * 0000000140AFC511: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFC516: mov     rcx, [rsi+538h]
 * 0000000140AFC51D: mov     rax, [rsi+190h]
 * 0000000140AFC524: call    KeGuardDispatchICall
 * 0000000140AFC529: movzx   eax, r15b
 * 0000000140AFC52D: mov     cr8, rax
 * 0000000140AFC531: xor     eax, eax
 * 0000000140AFC533: test    r12b, r12b
 * 0000000140AFC536: lea     r12d, [rax+1]
 * 0000000140AFC53A: jz      short loc_140AFC5B0
 * 0000000140AFC53C: mov     eax, [rsi+994h]
 * 0000000140AFC542: lea     ecx, [r12+0Fh]
 * 0000000140AFC547: test    cl, al
 * 0000000140AFC549: jz      short loc_140AFC5A4
 * 0000000140AFC54B: xor     eax, eax
 * 0000000140AFC54D: cmp     [rsi+8F8h], eax
 * 0000000140AFC553: jnz     short loc_140AFC5A4
 * 0000000140AFC555: mov     rcx, [rsp+0B70h+var_B20]
 * 0000000140AFC55A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFC564: add     rax, rsi
 * 0000000140AFC567: xor     edx, edx
 * 0000000140AFC569: mov     [rsi+900h], rax
 * 0000000140AFC570: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFC57A: add     rax, rcx
 * 0000000140AFC57D: mov     [rsi+908h], rax
 * 0000000140AFC584: movsxd  rax, dword ptr [rcx]
 * 0000000140AFC587: mov     rcx, rsi
 * 0000000140AFC58A: mov     [rsi+910h], rax
 * 0000000140AFC591: mov     [rsi+918h], r12
 * 0000000140AFC598: mov     [rsi+8F8h], r12d
 * 0000000140AFC59F: call    $$ba
 * 0000000140AFC5A4: xor     eax, eax
 * 0000000140AFC5A6: cmp     [r14+18h], r12
 * 0000000140AFC5AA: jz      loc_140AFB14A
 * 0000000140AFC5B0: cmp     rbx, r13
 * 0000000140AFC5B3: jnz     loc_140AFB148
 * 0000000140AFC5B9: cmp     [rsi+8F8h], eax
 * 0000000140AFC5BF: jnz     loc_140AFB148
 * 0000000140AFC5C5: mov     rcx, [rsp+0B70h+var_B20]
 * 0000000140AFC5CA: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFC5D4: add     rax, rsi
 * 0000000140AFC5D7: mov     [rsi+900h], rax
 * 0000000140AFC5DE: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFC5E8: add     rax, rcx
 * 0000000140AFC5EB: mov     [rsi+908h], rax
 * 0000000140AFC5F2: movsxd  rax, dword ptr [rcx]
 * 0000000140AFC5F5: mov     [rsi+910h], rax
 * 0000000140AFC5FC: mov     [rsi+918h], rbx
 * 0000000140AFC603: jmp     loc_140AFB421
 * 0000000140AFC608: mov     r14, [r13+8]
 * 0000000140AFC60C: mov     r8d, [r13+10h]
 * 0000000140AFC610: mov     r9, r14
 * 0000000140AFC613: add     [rsi+828h], r8d
 * 0000000140AFC61A: mov     rax, r14
 * 0000000140AFC61D: mov     r10d, [rsi+814h]
 * 0000000140AFC624: mov     r15, [rsi+818h]
 * 0000000140AFC62B: lea     rcx, [r14+r8]
 * 0000000140AFC62F: cmp     r14, rcx
 * 0000000140AFC632: jnb     short loc_140AFC644
 * 0000000140AFC634: mov     edx, 40h ; '@'
 * 0000000140AFC639: prefetchnta byte ptr [rax]
 * 0000000140AFC63C: add     rax, rdx
 * 0000000140AFC63F: cmp     rax, rcx
 * 0000000140AFC642: jb      short loc_140AFC639
 * 0000000140AFC644: mov     r11d, r8d
 * 0000000140AFC647: mov     rbx, r15
 * 0000000140AFC64A: shr     r11d, 7
 * 0000000140AFC64E: mov     edx, 1
 * 0000000140AFC653: mov     r12d, 0FFFFFFFFh
 * 0000000140AFC659: test    r11d, r11d
 * 0000000140AFC65C: jz      short loc_140AFC6CA
 * 0000000140AFC65E: mov     rdi, 7010008004002001h
 * 0000000140AFC668: mov     eax, 8
 * 0000000140AFC66D: xor     rbx, [r9]
 * 0000000140AFC670: mov     ecx, r10d
 * 0000000140AFC673: rol     rbx, cl
 * 0000000140AFC676: xor     rbx, [r9+8]
 * 0000000140AFC67A: add     r9, 10h
 * 0000000140AFC67E: rol     rbx, cl
 * 0000000140AFC681: sub     rax, rdx
 * 0000000140AFC684: jnz     short loc_140AFC66D
 * 0000000140AFC686: mov     rcx, r9
 * 0000000140AFC689: sub     rcx, r14
 * 0000000140AFC68C: xor     rcx, r15
 * 0000000140AFC68F: mov     rax, rcx
 * 0000000140AFC692: rol     rax, 11h
 * 0000000140AFC696: xor     rcx, rax
 * 0000000140AFC699: mov     rax, rdi
 * 0000000140AFC69C: mul     rcx
 * 0000000140AFC69F: xor     r10d, edx
 * 0000000140AFC6A2: mov     [rbp+0A70h+var_330], rdx
 * 0000000140AFC6A9: xor     r10d, eax
 * 0000000140AFC6AC: mov     edx, 1
 * 0000000140AFC6B1: and     r10d, 3Fh
 * 0000000140AFC6B5: cmovz   r10d, edx
 * 0000000140AFC6B9: add     r11d, r12d
 * 0000000140AFC6BC: jnz     short loc_140AFC668
 * 0000000140AFC6BE: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFC6C3: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFC6CA: and     r8d, 7Fh
 * 0000000140AFC6CE: cmp     r8d, 8
 * 0000000140AFC6D2: jb      short loc_140AFC6F1
 * 0000000140AFC6D4: mov     eax, r8d
 * 0000000140AFC6D7: shr     rax, 3
 * 0000000140AFC6DB: xor     rbx, [r9]
 * 0000000140AFC6DE: mov     ecx, r10d
 * 0000000140AFC6E1: rol     rbx, cl
 * 0000000140AFC6E4: add     r9, 8
 * 0000000140AFC6E8: add     r8d, 0FFFFFFF8h
 * 0000000140AFC6EC: sub     rax, rdx
 * 0000000140AFC6EF: jnz     short loc_140AFC6DB
 * 0000000140AFC6F1: test    r8d, r8d
 * 0000000140AFC6F4: jz      short loc_140AFC70B
 * 0000000140AFC6F6: movzx   eax, byte ptr [r9]
 * 0000000140AFC6FA: mov     ecx, r10d
 * 0000000140AFC6FD: xor     rbx, rax
 * 0000000140AFC700: add     r9, rdx
 * 0000000140AFC703: rol     rbx, cl
 * 0000000140AFC706: add     r8d, r12d
 * 0000000140AFC709: jnz     short loc_140AFC6F6
 * 0000000140AFC70B: mov     rax, rbx
 * 0000000140AFC70E: jmp     short loc_140AFC712
 * 0000000140AFC710: xor     ebx, eax
 * 0000000140AFC712: shr     rax, 1Fh
 * 0000000140AFC716: test    rax, rax
 * 0000000140AFC719: jnz     short loc_140AFC710
 * 0000000140AFC71B: btr     ebx, 1Fh
 * 0000000140AFC71F: mov     r12d, eax
 * 0000000140AFC722: cmp     ebx, [r13+14h]
 * 0000000140AFC726: jz      loc_140AFB050
 * 0000000140AFC72C: cmp     [r13+0], eax
 * 0000000140AFC730: jnz     short loc_140AFC73A
 * 0000000140AFC732: cmp     [r13+18h], eax
 * 0000000140AFC736: cmovnz  r12d, edx
 * 0000000140AFC73A: mov     ecx, [r13+10h]
 * 0000000140AFC73E: mov     rdx, [r13+8]
 * 0000000140AFC742: test    rcx, rcx
 * 0000000140AFC745: jz      loc_140AFC80B
 * 0000000140AFC74B: mov     eax, [rsi+994h]
 * 0000000140AFC751: mov     r8d, 40h ; '@'
 * 0000000140AFC757: test    r8b, al
 * 0000000140AFC75A: jz      loc_140AFC80B
 * 0000000140AFC760: mov     r13, cr8
 * 0000000140AFC764: lea     eax, [r8-3Eh]
 * 0000000140AFC768: mov     cr8, rax
 * 0000000140AFC76C: mov     r14, rdx
 * 0000000140AFC76F: lea     rax, [rcx-1]
 * 0000000140AFC773: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140AFC77A: add     rax, rdx
 * 0000000140AFC77D: or      rax, 0FFFh
 * 0000000140AFC783: mov     [rsp+0B70h+var_B18], rax
 * 0000000140AFC788: lea     rax, [r14-1]
 * 0000000140AFC78C: mov     [rbp+0A70h+arg_8], rax
 * 0000000140AFC793: movzx   r15d, r13b
 * 0000000140AFC797: mov     rax, [rsi+468h]
 * 0000000140AFC79E: xor     edx, edx
 * 0000000140AFC7A0: mov     rcx, r14
 * 0000000140AFC7A3: call    KeGuardDispatchICall
 * 0000000140AFC7A8: cmp     eax, 0C000022Dh
 * 0000000140AFC7AD: jnz     short loc_140AFC7D8
 * 0000000140AFC7AF: test    r12d, r12d
 * 0000000140AFC7B2: jnz     short loc_140AFC802
 * 0000000140AFC7B4: lea     eax, [r12+1]
 * 0000000140AFC7B9: cmp     r13b, al
 * 0000000140AFC7BC: ja      short loc_140AFC7DC
 * 0000000140AFC7BE: movzx   r15d, r13b
 * 0000000140AFC7C2: mov     cr8, r15
 * 0000000140AFC7C6: mov     al, [r14]
 * 0000000140AFC7C9: mov     rax, cr8
 * 0000000140AFC7CD: lea     eax, [r12+2]
 * 0000000140AFC7D2: mov     cr8, rax
 * 0000000140AFC7D6: jmp     short loc_140AFC797
 * 0000000140AFC7D8: test    eax, eax
 * 0000000140AFC7DA: js      short loc_140AFC802
 * 0000000140AFC7DC: mov     rax, [rbp+0A70h+arg_8]
 * 0000000140AFC7E3: mov     r8d, 1000h
 * 0000000140AFC7E9: add     rax, r8
 * 0000000140AFC7EC: add     r14, r8
 * 0000000140AFC7EF: mov     [rbp+0A70h+arg_8], rax
 * 0000000140AFC7F6: cmp     rax, [rsp+0B70h+var_B18]
 * 0000000140AFC7FB: jnz     short loc_140AFC793
 * 0000000140AFC7FD: jmp     loc_140AFB397
 * 0000000140AFC802: mov     cr8, r15
 * 0000000140AFC806: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140AFC80B: mov     eax, [r13+14h]
 * 0000000140AFC80F: xor     ecx, ecx
 * 0000000140AFC811: cmp     [rsi+8F8h], ecx
 * 0000000140AFC817: jnz     loc_140AFB39B
 * 0000000140AFC81D: mov     ecx, eax
 * 0000000140AFC81F: mov     eax, ebx
 * 0000000140AFC821: jmp     loc_140AFB3C1
 * 0000000140AFC826: mov     ecx, r10d
 * 0000000140AFC829: sub     ecx, 0Eh
 * 0000000140AFC82C: jz      loc_140B00446
 * 0000000140AFC832: sub     ecx, 1
 * 0000000140AFC835: jz      loc_140B002E3
 * 0000000140AFC83B: sub     ecx, edx
 * 0000000140AFC83D: jz      loc_140B0024D
 * 0000000140AFC843: sub     ecx, 3
 * 0000000140AFC846: jz      loc_140AFDB30
 * 0000000140AFC84C: sub     ecx, 1
 * 0000000140AFC84F: jz      loc_140AFD6F1
 * 0000000140AFC855: sub     ecx, 1
 * 0000000140AFC858: jz      loc_140AFD4D0
 * 0000000140AFC85E: sub     ecx, 1
 * 0000000140AFC861: jz      loc_140AFD20F
 * 0000000140AFC867: cmp     ecx, 1
 * 0000000140AFC86A: jnz     loc_140B030E1
 * 0000000140AFC870: mov     r8d, [r13+10h]
 * 0000000140AFC874: test    r8d, r8d
 * 0000000140AFC877: jnz     loc_140AFCDC8
 * 0000000140AFC87D: lea     rax, [r13+30h]
 * 0000000140AFC881: xor     r9d, r9d
 * 0000000140AFC884: mov     [rbp+0A70h+var_7E8], rax
 * 0000000140AFC88B: lea     rcx, [rbp+0A70h+var_7F0]
 * 0000000140AFC892: movzx   eax, word ptr [r13+28h]
 * 0000000140AFC897: xor     r8d, r8d
 * 0000000140AFC89A: mov     [rbp+0A70h+var_7F0], ax
 * 0000000140AFC8A1: xor     edx, edx
 * 0000000140AFC8A3: mov     [rbp+0A70h+var_7EE], ax
 * 0000000140AFC8AA: lea     rax, [rbp+0A70h+var_A20]
 * 0000000140AFC8AE: mov     [rsp+0B70h+var_B38], rax
 * 0000000140AFC8B3: xor     eax, eax
 * 0000000140AFC8B5: mov     [rsp+0B70h+var_B40], rax
 * 0000000140AFC8BA: mov     byte ptr [rsp+0B70h+var_B48], al
 * 0000000140AFC8BE: mov     rax, [rsi+508h]
 * 0000000140AFC8C5: mov     [rsp+0B70h+BugCheckParameter4], rax
 * 0000000140AFC8CA: mov     rax, [rsi+1E8h]
 * 0000000140AFC8D1: call    KeGuardDispatchICall
 * 0000000140AFC8D6: test    eax, eax
 * 0000000140AFC8D8: js      loc_140AFB39B
 * 0000000140AFC8DE: mov     rax, [rbp+0A70h+var_A20]
 * 0000000140AFC8E2: mov     ecx, [rax+10h]
 * 0000000140AFC8E5: mov     eax, 10h
 * 0000000140AFC8EA: test    al, cl
 * 0000000140AFC8EC: jnz     short loc_140AFC903
 * 0000000140AFC8EE: mov     rcx, [rbp+0A70h+var_A20]
 * 0000000140AFC8F2: mov     rax, [rsi+1E0h]
 * 0000000140AFC8F9: call    KeGuardDispatchICall
 * 0000000140AFC8FE: jmp     loc_140AFB39B
 * 0000000140AFC903: mov     rcx, [rsi+1E8h]
 * 0000000140AFC90A: lea     rdx, [rbp+0A70h+var_158]
 * 0000000140AFC911: mov     rax, [rsi+200h]
 * 0000000140AFC918: call    KeGuardDispatchICall
 * 0000000140AFC91D: mov     rcx, [rbp+0A70h+var_150]
 * 0000000140AFC924: test    rcx, rcx
 * 0000000140AFC927: jz      short loc_140AFC949
 * 0000000140AFC929: mov     rax, [rsi+1F8h]
 * 0000000140AFC930: mov     rbx, rcx
 * 0000000140AFC933: mov     [rbp+0A70h+var_A80], rcx
 * 0000000140AFC937: call    KeGuardDispatchICall
 * 0000000140AFC93C: test    rax, rax
 * 0000000140AFC93F: jz      short loc_140AFC949
 * 0000000140AFC941: mov     r15d, [rax+50h]
 * 0000000140AFC945: mov     [rbp+0A70h+var_AD0], r15d
 * 0000000140AFC949: mov     rcx, [r13+18h]
 * 0000000140AFC94D: lea     rdx, [rbp+0A70h+var_140]
 * 0000000140AFC954: mov     rax, [rsi+200h]
 * 0000000140AFC95B: call    KeGuardDispatchICall
 * 0000000140AFC960: mov     rcx, [rbp+0A70h+var_138]
 * 0000000140AFC967: test    rcx, rcx
 * 0000000140AFC96A: jz      short loc_140AFC98E
 * 0000000140AFC96C: mov     rax, [rsi+1F8h]
 * 0000000140AFC973: mov     r14, rcx
 * 0000000140AFC976: mov     [rbp+0A70h+var_AC0], rcx
 * 0000000140AFC97A: call    KeGuardDispatchICall
 * 0000000140AFC97F: test    rax, rax
 * 0000000140AFC982: jz      short loc_140AFC98E
 * 0000000140AFC984: mov     r10d, [rax+50h]
 * 0000000140AFC988: mov     [rbp+0A70h+var_A50], r10d
 * 0000000140AFC98C: jmp     short loc_140AFC992
 * 0000000140AFC98E: mov     r10d, [rbp+0A70h+var_A50]
 * 0000000140AFC992: bt      dword ptr [rsi+990h], 1Eh
 * 0000000140AFC99A: jb      short loc_140AFC9B0
 * 0000000140AFC99C: mov     rax, [rbp+0A70h+var_A20]
 * 0000000140AFC9A0: add     rax, 70h ; 'p'
 * 0000000140AFC9A4: mov     [r13+8], rax
 * 0000000140AFC9A8: mov     dword ptr [r13+10h], 0E0h
 * 0000000140AFC9B0: mov     rcx, [rbp+0A70h+var_A20]
 * 0000000140AFC9B4: xor     eax, eax
 * 0000000140AFC9B6: mov     r12d, r15d
 * 0000000140AFC9B9: mov     dl, al
 * 0000000140AFC9BB: mov     [rbp+0A70h+arg_8], r12
 * 0000000140AFC9C2: movzx   eax, dl
 * 0000000140AFC9C5: mov     r9, [rcx+rax*8+70h]
 * 0000000140AFC9CA: test    r15d, r15d
 * 0000000140AFC9CD: jz      short loc_140AFC9E0
 * 0000000140AFC9CF: lea     rax, [rbx-1]
 * 0000000140AFC9D3: add     rax, r12
 * 0000000140AFC9D6: cmp     r9, rbx
 * 0000000140AFC9D9: jb      short loc_140AFC9E0
 * 0000000140AFC9DB: cmp     r9, rax
 * 0000000140AFC9DE: jbe     short loc_140AFCA05
 * 0000000140AFC9E0: mov     eax, r10d
 * 0000000140AFC9E3: test    r10d, r10d
 * 0000000140AFC9E6: jz      loc_140AFCD4D
 * 0000000140AFC9EC: lea     r8, [r14-1]
 * 0000000140AFC9F0: add     r8, rax
 * 0000000140AFC9F3: cmp     r9, r14
 * 0000000140AFC9F6: jb      loc_140AFCD4D
 * 0000000140AFC9FC: cmp     r9, r8
 * 0000000140AFC9FF: ja      loc_140AFCD4D
 * 0000000140AFCA05: add     dl, 1
 * 0000000140AFCA08: cmp     dl, 1Ch
 * 0000000140AFCA0B: jb      short loc_140AFC9C2
 * 0000000140AFCA0D: bt      dword ptr [rsi+990h], 1Eh
 * 0000000140AFCA15: jb      loc_140AFC8F2
 * 0000000140AFCA1B: mov     r14, [r13+8]
 * 0000000140AFCA1F: mov     r9d, [r13+10h]
 * 0000000140AFCA23: mov     r10, r14
 * 0000000140AFCA26: add     [rsi+828h], r9d
 * 0000000140AFCA2D: mov     rax, r14
 * 0000000140AFCA30: mov     r11d, [rsi+814h]
 * 0000000140AFCA37: mov     r15, [rsi+818h]
 * 0000000140AFCA3E: lea     rcx, [r14+r9]
 * 0000000140AFCA42: cmp     r14, rcx
 * 0000000140AFCA45: jnb     short loc_140AFCA57
 * 0000000140AFCA47: mov     edx, 40h ; '@'
 * 0000000140AFCA4C: prefetchnta byte ptr [rax]
 * 0000000140AFCA4F: add     rax, rdx
 * 0000000140AFCA52: cmp     rax, rcx
 * 0000000140AFCA55: jb      short loc_140AFCA4C
 * 0000000140AFCA57: mov     ebx, r9d
 * 0000000140AFCA5A: mov     r8, r15
 * 0000000140AFCA5D: shr     ebx, 7
 * 0000000140AFCA60: mov     edx, 1
 * 0000000140AFCA65: test    ebx, ebx
 * 0000000140AFCA67: jz      short loc_140AFCAE0
 * 0000000140AFCA69: mov     edi, 0FFFFFFFFh
 * 0000000140AFCA6E: mov     r12, 7010008004002001h
 * 0000000140AFCA78: mov     eax, 8
 * 0000000140AFCA7D: xor     r8, [r10]
 * 0000000140AFCA80: mov     ecx, r11d
 * 0000000140AFCA83: rol     r8, cl
 * 0000000140AFCA86: xor     r8, [r10+8]
 * 0000000140AFCA8A: add     r10, 10h
 * 0000000140AFCA8E: rol     r8, cl
 * 0000000140AFCA91: sub     rax, rdx
 * 0000000140AFCA94: jnz     short loc_140AFCA7D
 * 0000000140AFCA96: mov     rcx, r10
 * 0000000140AFCA99: sub     rcx, r14
 * 0000000140AFCA9C: xor     rcx, r15
 * 0000000140AFCA9F: mov     rax, rcx
 * 0000000140AFCAA2: rol     rax, 11h
 * 0000000140AFCAA6: xor     rcx, rax
 * 0000000140AFCAA9: mov     rax, r12
 * 0000000140AFCAAC: mul     rcx
 * 0000000140AFCAAF: xor     r11d, edx
 * 0000000140AFCAB2: mov     [rbp+0A70h+var_328], rdx
 * 0000000140AFCAB9: xor     r11d, eax
 * 0000000140AFCABC: mov     edx, 1
 * 0000000140AFCAC1: and     r11d, 3Fh
 * 0000000140AFCAC5: cmovz   r11d, edx
 * 0000000140AFCAC9: add     ebx, edi
 * 0000000140AFCACB: jnz     short loc_140AFCA78
 * 0000000140AFCACD: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFCAD2: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFCAD9: mov     r12, [rbp+0A70h+arg_8]
 * 0000000140AFCAE0: and     r9d, 7Fh
 * 0000000140AFCAE4: cmp     r9d, 8
 * 0000000140AFCAE8: jb      short loc_140AFCB07
 * 0000000140AFCAEA: mov     eax, r9d
 * 0000000140AFCAED: shr     rax, 3
 * 0000000140AFCAF1: xor     r8, [r10]
 * 0000000140AFCAF4: mov     ecx, r11d
 * 0000000140AFCAF7: rol     r8, cl
 * 0000000140AFCAFA: add     r10, 8
 * 0000000140AFCAFE: add     r9d, 0FFFFFFF8h
 * 0000000140AFCB02: sub     rax, rdx
 * 0000000140AFCB05: jnz     short loc_140AFCAF1
 * 0000000140AFCB07: test    r9d, r9d
 * 0000000140AFCB0A: jz      short loc_140AFCB2B
 * 0000000140AFCB0C: mov     esi, 0FFFFFFFFh
 * 0000000140AFCB11: movzx   eax, byte ptr [r10]
 * 0000000140AFCB15: mov     ecx, r11d
 * 0000000140AFCB18: xor     r8, rax
 * 0000000140AFCB1B: add     r10, rdx
 * 0000000140AFCB1E: rol     r8, cl
 * 0000000140AFCB21: add     r9d, esi
 * 0000000140AFCB24: jnz     short loc_140AFCB11
 * 0000000140AFCB26: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFCB2B: mov     rax, r8
 * 0000000140AFCB2E: jmp     short loc_140AFCB33
 * 0000000140AFCB30: xor     r8d, eax
 * 0000000140AFCB33: shr     rax, 1Fh
 * 0000000140AFCB37: test    rax, rax
 * 0000000140AFCB3A: jnz     short loc_140AFCB30
 * 0000000140AFCB3C: btr     r8d, 1Fh
 * 0000000140AFCB41: mov     [r13+14h], r8d
 * 0000000140AFCB45: mov     rax, [rbp+0A70h+var_A20]
 * 0000000140AFCB49: mov     r14, [rax+50h]
 * 0000000140AFCB4D: xor     eax, eax
 * 0000000140AFCB4F: mov     r10d, eax
 * 0000000140AFCB52: test    r14, r14
 * 0000000140AFCB55: jz      short loc_140AFCBC8
 * 0000000140AFCB57: mov     r10d, [r14]
 * 0000000140AFCB5A: mov     dl, al
 * 0000000140AFCB5C: lea     r9d, [r10-8]
 * 0000000140AFCB60: shr     r9d, 3
 * 0000000140AFCB64: test    r9d, r9d
 * 0000000140AFCB67: jz      short loc_140AFCBC8
 * 0000000140AFCB69: mov     r11, [rbp+0A70h+var_A80]
 * 0000000140AFCB6D: mov     rbx, [rbp+0A70h+var_AC0]
 * 0000000140AFCB71: mov     r15d, [rbp+0A70h+var_A50]
 * 0000000140AFCB75: movzx   eax, dl
 * 0000000140AFCB78: mov     rcx, [r14+rax*8+8]
 * 0000000140AFCB7D: test    rcx, rcx
 * 0000000140AFCB80: jz      short loc_140AFCBBD
 * 0000000140AFCB82: test    r12, r12
 * 0000000140AFCB85: jz      short loc_140AFCB98
 * 0000000140AFCB87: lea     rax, [r11-1]
 * 0000000140AFCB8B: add     rax, r12
 * 0000000140AFCB8E: cmp     rcx, r11
 * 0000000140AFCB91: jb      short loc_140AFCB98
 * 0000000140AFCB93: cmp     rcx, rax
 * 0000000140AFCB96: jbe     short loc_140AFCBBD
 * 0000000140AFCB98: mov     rax, r15
 * 0000000140AFCB9B: test    r15d, r15d
 * 0000000140AFCB9E: jz      loc_140AFCC82
 * 0000000140AFCBA4: lea     r8, [rbx-1]
 * 0000000140AFCBA8: add     r8, rax
 * 0000000140AFCBAB: cmp     rcx, rbx
 * 0000000140AFCBAE: jb      loc_140AFCC82
 * 0000000140AFCBB4: cmp     rcx, r8
 * 0000000140AFCBB7: ja      loc_140AFCC82
 * 0000000140AFCBBD: add     dl, 1
 * 0000000140AFCBC0: movzx   eax, dl
 * 0000000140AFCBC3: cmp     eax, r9d
 * 0000000140AFCBC6: jb      short loc_140AFCB75
 * 0000000140AFCBC8: add     [rsi+828h], r10d
 * 0000000140AFCBCF: mov     r9, r14
 * 0000000140AFCBD2: mov     r11d, [rsi+814h]
 * 0000000140AFCBD9: mov     rax, r14
 * 0000000140AFCBDC: mov     r15, [rsi+818h]
 * 0000000140AFCBE3: mov     ecx, r10d
 * 0000000140AFCBE6: add     rcx, r14
 * 0000000140AFCBE9: cmp     r14, rcx
 * 0000000140AFCBEC: jnb     short loc_140AFCBFE
 * 0000000140AFCBEE: mov     edx, 40h ; '@'
 * 0000000140AFCBF3: prefetchnta byte ptr [rax]
 * 0000000140AFCBF6: add     rax, rdx
 * 0000000140AFCBF9: cmp     rax, rcx
 * 0000000140AFCBFC: jb      short loc_140AFCBF3
 * 0000000140AFCBFE: mov     ebx, r10d
 * 0000000140AFCC01: mov     r8, r15
 * 0000000140AFCC04: shr     ebx, 7
 * 0000000140AFCC07: mov     r12d, 1
 * 0000000140AFCC0D: test    ebx, ebx
 * 0000000140AFCC0F: jz      loc_140AFCCE8
 * 0000000140AFCC15: mov     rdi, 7010008004002001h
 * 0000000140AFCC1F: mov     eax, 8
 * 0000000140AFCC24: xor     r8, [r9]
 * 0000000140AFCC27: mov     ecx, r11d
 * 0000000140AFCC2A: rol     r8, cl
 * 0000000140AFCC2D: xor     r8, [r9+8]
 * 0000000140AFCC31: add     r9, 10h
 * 0000000140AFCC35: rol     r8, cl
 * 0000000140AFCC38: sub     rax, r12
 * 0000000140AFCC3B: jnz     short loc_140AFCC24
 * 0000000140AFCC3D: mov     rcx, r9
 * 0000000140AFCC40: sub     rcx, r14
 * 0000000140AFCC43: xor     rcx, r15
 * 0000000140AFCC46: mov     rax, rcx
 * 0000000140AFCC49: rol     rax, 11h
 * 0000000140AFCC4D: xor     rcx, rax
 * 0000000140AFCC50: mov     rax, rdi
 * 0000000140AFCC53: mul     rcx
 * 0000000140AFCC56: xor     r11d, edx
 * 0000000140AFCC59: mov     [rbp+0A70h+var_320], rdx
 * 0000000140AFCC60: xor     r11d, eax
 * 0000000140AFCC63: mov     edx, 0FFFFFFFFh
 * 0000000140AFCC68: and     r11d, 3Fh
 * 0000000140AFCC6C: cmovz   r11d, r12d
 * 0000000140AFCC70: add     ebx, edx
 * 0000000140AFCC72: jnz     short loc_140AFCC1F
 * 0000000140AFCC74: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFCC79: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFCC80: jmp     short loc_140AFCCED
 * 0000000140AFCC82: mov     [r13+20h], rcx
 * 0000000140AFCC86: mov     rax, [rsi+588h]
 * 0000000140AFCC8D: mov     [rax], r13
 * 0000000140AFCC90: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140AFCC97: xor     eax, eax
 * 0000000140AFCC99: lea     r12d, [rax+1]
 * 0000000140AFCC9D: cmp     [rsi+8F8h], eax
 * 0000000140AFCCA3: jnz     loc_140AFB14A
 * 0000000140AFCCA9: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFCCB3: add     rax, rsi
 * 0000000140AFCCB6: mov     [rsi+900h], rax
 * 0000000140AFCCBD: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFCCC7: add     rax, r13
 * 0000000140AFCCCA: mov     [rsi+908h], rax
 * 0000000140AFCCD1: movsxd  rax, dword ptr [r13+0]
 * 0000000140AFCCD5: mov     [rsi+910h], rax
 * 0000000140AFCCDC: mov     [rsi+918h], r14
 * 0000000140AFCCE3: jmp     loc_140AFB421
 * 0000000140AFCCE8: mov     edx, 0FFFFFFFFh
 * 0000000140AFCCED: and     r10d, 7Fh
 * 0000000140AFCCF1: cmp     r10d, 8
 * 0000000140AFCCF5: jb      short loc_140AFCD14
 * 0000000140AFCCF7: mov     eax, r10d
 * 0000000140AFCCFA: shr     rax, 3
 * 0000000140AFCCFE: xor     r8, [r9]
 * 0000000140AFCD01: mov     ecx, r11d
 * 0000000140AFCD04: rol     r8, cl
 * 0000000140AFCD07: add     r9, 8
 * 0000000140AFCD0B: add     r10d, 0FFFFFFF8h
 * 0000000140AFCD0F: sub     rax, r12
 * 0000000140AFCD12: jnz     short loc_140AFCCFE
 * 0000000140AFCD14: test    r10d, r10d
 * 0000000140AFCD17: jz      short loc_140AFCD2E
 * 0000000140AFCD19: movzx   eax, byte ptr [r9]
 * 0000000140AFCD1D: mov     ecx, r11d
 * 0000000140AFCD20: xor     r8, rax
 * 0000000140AFCD23: add     r9, r12
 * 0000000140AFCD26: rol     r8, cl
 * 0000000140AFCD29: add     r10d, edx
 * 0000000140AFCD2C: jnz     short loc_140AFCD19
 * 0000000140AFCD2E: mov     rax, r8
 * 0000000140AFCD31: jmp     short loc_140AFCD36
 * 0000000140AFCD33: xor     r8d, eax
 * 0000000140AFCD36: shr     rax, 1Fh
 * 0000000140AFCD3A: test    rax, rax
 * 0000000140AFCD3D: jnz     short loc_140AFCD33
 * 0000000140AFCD3F: btr     r8d, 1Fh
 * 0000000140AFCD44: mov     [r13+2Ch], r8d
 * 0000000140AFCD48: jmp     loc_140AFB148
 * 0000000140AFCD4D: bt      dword ptr [rsi+990h], 1Eh
 * 0000000140AFCD55: mov     r12d, 1
 * 0000000140AFCD5B: jnb     short loc_140AFCDAA
 * 0000000140AFCD5D: mov     rcx, [rsi+0A80h]
 * 0000000140AFCD64: lea     edx, [r12+2Fh]
 * 0000000140AFCD69: lea     r8d, [r12+5]
 * 0000000140AFCD6E: mov     rax, [r13+0]
 * 0000000140AFCD72: add     edx, 0FFFFFFF8h
 * 0000000140AFCD75: mov     [rcx], rax
 * 0000000140AFCD78: add     r13, 8
 * 0000000140AFCD7C: add     rcx, 8
 * 0000000140AFCD80: sub     r8, r12
 * 0000000140AFCD83: jnz     short loc_140AFCD6E
 * 0000000140AFCD85: test    edx, edx
 * 0000000140AFCD87: jz      short loc_140AFCDA3
 * 0000000140AFCD89: mov     esi, 0FFFFFFFFh
 * 0000000140AFCD8E: mov     al, [r13+0]
 * 0000000140AFCD92: add     r13, r12
 * 0000000140AFCD95: mov     [rcx], al
 * 0000000140AFCD97: add     rcx, r12
 * 0000000140AFCD9A: add     edx, esi
 * 0000000140AFCD9C: jnz     short loc_140AFCD8E
 * 0000000140AFCD9E: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFCDA3: mov     r13, [rsi+0A80h]
 * 0000000140AFCDAA: mov     [r13+20h], r9
 * 0000000140AFCDAE: mov     rax, [rsi+588h]
 * 0000000140AFCDB5: mov     [rax], r13
 * 0000000140AFCDB8: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140AFCDBF: mov     rcx, [r13+8]
 * 0000000140AFCDC3: jmp     loc_140AFB3D9
 * 0000000140AFCDC8: mov     r14, [r13+8]
 * 0000000140AFCDCC: add     [rsi+828h], r8d
 * 0000000140AFCDD3: mov     r9, r14
 * 0000000140AFCDD6: mov     r10d, [rsi+814h]
 * 0000000140AFCDDD: mov     rax, r14
 * 0000000140AFCDE0: mov     r15, [rsi+818h]
 * 0000000140AFCDE7: lea     rcx, [r14+r8]
 * 0000000140AFCDEB: cmp     r14, rcx
 * 0000000140AFCDEE: jnb     short loc_140AFCE00
 * 0000000140AFCDF0: mov     edx, 40h ; '@'
 * 0000000140AFCDF5: prefetchnta byte ptr [rax]
 * 0000000140AFCDF8: add     rax, rdx
 * 0000000140AFCDFB: cmp     rax, rcx
 * 0000000140AFCDFE: jb      short loc_140AFCDF5
 * 0000000140AFCE00: mov     r11d, r8d
 * 0000000140AFCE03: mov     rbx, r15
 * 0000000140AFCE06: shr     r11d, 7
 * 0000000140AFCE0A: mov     edx, 1
 * 0000000140AFCE0F: mov     r12d, 0FFFFFFFFh
 * 0000000140AFCE15: test    r11d, r11d
 * 0000000140AFCE18: jz      short loc_140AFCE86
 * 0000000140AFCE1A: mov     rdi, 7010008004002001h
 * 0000000140AFCE24: mov     eax, 8
 * 0000000140AFCE29: xor     rbx, [r9]
 * 0000000140AFCE2C: mov     ecx, r10d
 * 0000000140AFCE2F: rol     rbx, cl
 * 0000000140AFCE32: xor     rbx, [r9+8]
 * 0000000140AFCE36: add     r9, 10h
 * 0000000140AFCE3A: rol     rbx, cl
 * 0000000140AFCE3D: sub     rax, rdx
 * 0000000140AFCE40: jnz     short loc_140AFCE29
 * 0000000140AFCE42: mov     rcx, r9
 * 0000000140AFCE45: sub     rcx, r14
 * 0000000140AFCE48: xor     rcx, r15
 * 0000000140AFCE4B: mov     rax, rcx
 * 0000000140AFCE4E: rol     rax, 11h
 * 0000000140AFCE52: xor     rcx, rax
 * 0000000140AFCE55: mov     rax, rdi
 * 0000000140AFCE58: mul     rcx
 * 0000000140AFCE5B: xor     r10d, edx
 * 0000000140AFCE5E: mov     [rbp+0A70h+var_318], rdx
 * 0000000140AFCE65: xor     r10d, eax
 * 0000000140AFCE68: mov     edx, 1
 * 0000000140AFCE6D: and     r10d, 3Fh
 * 0000000140AFCE71: cmovz   r10d, edx
 * 0000000140AFCE75: add     r11d, r12d
 * 0000000140AFCE78: jnz     short loc_140AFCE24
 * 0000000140AFCE7A: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFCE7F: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFCE86: and     r8d, 7Fh
 * 0000000140AFCE8A: cmp     r8d, 8
 * 0000000140AFCE8E: jb      short loc_140AFCEAD
 * 0000000140AFCE90: mov     eax, r8d
 * 0000000140AFCE93: shr     rax, 3
 * 0000000140AFCE97: xor     rbx, [r9]
 * 0000000140AFCE9A: mov     ecx, r10d
 * 0000000140AFCE9D: rol     rbx, cl
 * 0000000140AFCEA0: add     r9, 8
 * 0000000140AFCEA4: add     r8d, 0FFFFFFF8h
 * 0000000140AFCEA8: sub     rax, rdx
 * 0000000140AFCEAB: jnz     short loc_140AFCE97
 * 0000000140AFCEAD: test    r8d, r8d
 * 0000000140AFCEB0: jz      short loc_140AFCEC7
 * 0000000140AFCEB2: movzx   eax, byte ptr [r9]
 * 0000000140AFCEB6: mov     ecx, r10d
 * 0000000140AFCEB9: xor     rbx, rax
 * 0000000140AFCEBC: add     r9, rdx
 * 0000000140AFCEBF: rol     rbx, cl
 * 0000000140AFCEC2: add     r8d, r12d
 * 0000000140AFCEC5: jnz     short loc_140AFCEB2
 * 0000000140AFCEC7: mov     rax, rbx
 * 0000000140AFCECA: jmp     short loc_140AFCECE
 * 0000000140AFCECC: xor     ebx, eax
 * 0000000140AFCECE: shr     rax, 1Fh
 * 0000000140AFCED2: test    rax, rax
 * 0000000140AFCED5: jnz     short loc_140AFCECC
 * 0000000140AFCED7: btr     ebx, 1Fh
 * 0000000140AFCEDB: mov     r12d, eax
 * 0000000140AFCEDE: cmp     ebx, [r13+14h]
 * 0000000140AFCEE2: jz      loc_140AFCFC9
 * 0000000140AFCEE8: cmp     [r13+0], eax
 * 0000000140AFCEEC: jnz     short loc_140AFCEF6
 * 0000000140AFCEEE: cmp     [r13+18h], eax
 * 0000000140AFCEF2: cmovnz  r12d, edx
 * 0000000140AFCEF6: mov     ecx, [r13+10h]
 * 0000000140AFCEFA: mov     rdx, [r13+8]
 * 0000000140AFCEFE: test    rcx, rcx
 * 0000000140AFCF01: jz      loc_140AFD0AC
 * 0000000140AFCF07: mov     eax, [rsi+994h]
 * 0000000140AFCF0D: mov     r8d, 40h ; '@'
 * 0000000140AFCF13: test    r8b, al
 * 0000000140AFCF16: jz      loc_140AFD0AC
 * 0000000140AFCF1C: mov     r13, cr8
 * 0000000140AFCF20: lea     eax, [r8-3Eh]
 * 0000000140AFCF24: mov     cr8, rax
 * 0000000140AFCF28: mov     r14, rdx
 * 0000000140AFCF2B: lea     rax, [rcx-1]
 * 0000000140AFCF2F: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140AFCF36: add     rax, rdx
 * 0000000140AFCF39: or      rax, 0FFFh
 * 0000000140AFCF3F: mov     [rsp+0B70h+var_B18], rax
 * 0000000140AFCF44: lea     rax, [r14-1]
 * 0000000140AFCF48: mov     [rbp+0A70h+arg_8], rax
 * 0000000140AFCF4F: movzx   r15d, r13b
 * 0000000140AFCF53: mov     rax, [rsi+468h]
 * 0000000140AFCF5A: xor     edx, edx
 * 0000000140AFCF5C: mov     rcx, r14
 * 0000000140AFCF5F: call    KeGuardDispatchICall
 * 0000000140AFCF64: cmp     eax, 0C000022Dh
 * 0000000140AFCF69: jnz     short loc_140AFCF98
 * 0000000140AFCF6B: test    r12d, r12d
 * 0000000140AFCF6E: jnz     loc_140AFD0A3
 * 0000000140AFCF74: lea     eax, [r12+1]
 * 0000000140AFCF79: cmp     r13b, al
 * 0000000140AFCF7C: ja      short loc_140AFCFA0
 * 0000000140AFCF7E: movzx   r15d, r13b
 * 0000000140AFCF82: mov     cr8, r15
 * 0000000140AFCF86: mov     al, [r14]
 * 0000000140AFCF89: mov     rax, cr8
 * 0000000140AFCF8D: lea     eax, [r12+2]
 * 0000000140AFCF92: mov     cr8, rax
 * 0000000140AFCF96: jmp     short loc_140AFCF53
 * 0000000140AFCF98: test    eax, eax
 * 0000000140AFCF9A: js      loc_140AFD0A3
 * 0000000140AFCFA0: mov     rax, [rbp+0A70h+arg_8]
 * 0000000140AFCFA7: mov     ecx, 1000h
 * 0000000140AFCFAC: add     rax, rcx
 * 0000000140AFCFAF: add     r14, rcx
 * 0000000140AFCFB2: mov     [rbp+0A70h+arg_8], rax
 * 0000000140AFCFB9: cmp     rax, [rsp+0B70h+var_B18]
 * 0000000140AFCFBE: jnz     short loc_140AFCF4F
 * 0000000140AFCFC0: mov     cr8, r15
 * 0000000140AFCFC4: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140AFCFC9: mov     r12d, 1
 * 0000000140AFCFCF: mov     rax, [r13+8]
 * 0000000140AFCFD3: sub     rax, 70h ; 'p'
 * 0000000140AFCFD7: mov     [rbp+0A70h+var_A20], rax
 * 0000000140AFCFDB: mov     r15, [rax+50h]
 * 0000000140AFCFDF: xor     eax, eax
 * 0000000140AFCFE1: mov     r9d, eax
 * 0000000140AFCFE4: test    r15, r15
 * 0000000140AFCFE7: jz      short loc_140AFCFEC
 * 0000000140AFCFE9: mov     r9d, [r15]
 * 0000000140AFCFEC: add     [rsi+828h], r9d
 * 0000000140AFCFF3: mov     r10, r15
 * 0000000140AFCFF6: mov     r11d, [rsi+814h]
 * 0000000140AFCFFD: mov     rax, r15
 * 0000000140AFD000: mov     r14, [rsi+818h]
 * 0000000140AFD007: mov     ecx, r9d
 * 0000000140AFD00A: add     rcx, r15
 * 0000000140AFD00D: cmp     r15, rcx
 * 0000000140AFD010: jnb     short loc_140AFD022
 * 0000000140AFD012: mov     edx, 40h ; '@'
 * 0000000140AFD017: prefetchnta byte ptr [rax]
 * 0000000140AFD01A: add     rax, rdx
 * 0000000140AFD01D: cmp     rax, rcx
 * 0000000140AFD020: jb      short loc_140AFD017
 * 0000000140AFD022: mov     ebx, r9d
 * 0000000140AFD025: mov     r8, r14
 * 0000000140AFD028: shr     ebx, 7
 * 0000000140AFD02B: test    ebx, ebx
 * 0000000140AFD02D: jz      loc_140AFD136
 * 0000000140AFD033: mov     rdi, 7010008004002001h
 * 0000000140AFD03D: mov     eax, 8
 * 0000000140AFD042: xor     r8, [r10]
 * 0000000140AFD045: mov     ecx, r11d
 * 0000000140AFD048: rol     r8, cl
 * 0000000140AFD04B: xor     r8, [r10+8]
 * 0000000140AFD04F: add     r10, 10h
 * 0000000140AFD053: rol     r8, cl
 * 0000000140AFD056: sub     rax, r12
 * 0000000140AFD059: jnz     short loc_140AFD042
 * 0000000140AFD05B: mov     rcx, r10
 * 0000000140AFD05E: sub     rcx, r15
 * 0000000140AFD061: xor     rcx, r14
 * 0000000140AFD064: mov     rax, rcx
 * 0000000140AFD067: rol     rax, 11h
 * 0000000140AFD06B: xor     rcx, rax
 * 0000000140AFD06E: mov     rax, rdi
 * 0000000140AFD071: mul     rcx
 * 0000000140AFD074: xor     r11d, edx
 * 0000000140AFD077: mov     [rbp+0A70h+var_238], rdx
 * 0000000140AFD07E: xor     r11d, eax
 * 0000000140AFD081: mov     edx, 0FFFFFFFFh
 * 0000000140AFD086: and     r11d, 3Fh
 * 0000000140AFD08A: cmovz   r11d, r12d
 * 0000000140AFD08E: add     ebx, edx
 * 0000000140AFD090: jnz     short loc_140AFD03D
 * 0000000140AFD092: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFD097: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFD09E: jmp     loc_140AFD13B
 * 0000000140AFD0A3: mov     cr8, r15
 * 0000000140AFD0A7: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140AFD0AC: mov     eax, [r13+14h]
 * 0000000140AFD0B0: xor     ecx, ecx
 * 0000000140AFD0B2: cmp     [rsi+8F8h], ecx
 * 0000000140AFD0B8: jnz     loc_140AFCFC9
 * 0000000140AFD0BE: mov     ecx, eax
 * 0000000140AFD0C0: mov     eax, ebx
 * 0000000140AFD0C2: xor     rcx, rax
 * 0000000140AFD0C5: mov     rax, [rsi+588h]
 * 0000000140AFD0CC: mov     [rax+18h], rcx
 * 0000000140AFD0D0: xor     eax, eax
 * 0000000140AFD0D2: mov     rcx, [r13+8]
 * 0000000140AFD0D6: lea     r12d, [rax+1]
 * 0000000140AFD0DA: cmp     [rsi+8F8h], eax
 * 0000000140AFD0E0: jnz     loc_140AFCFCF
 * 0000000140AFD0E6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFD0F0: xor     edx, edx
 * 0000000140AFD0F2: add     rax, rsi
 * 0000000140AFD0F5: mov     [rsi+900h], rax
 * 0000000140AFD0FC: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFD106: add     rax, r13
 * 0000000140AFD109: mov     [rsi+908h], rax
 * 0000000140AFD110: movsxd  rax, dword ptr [r13+0]
 * 0000000140AFD114: mov     [rsi+910h], rax
 * 0000000140AFD11B: mov     [rsi+918h], rcx
 * 0000000140AFD122: mov     rcx, rsi
 * 0000000140AFD125: mov     [rsi+8F8h], r12d
 * 0000000140AFD12C: call    $$ba
 * 0000000140AFD131: jmp     loc_140AFCFCF
 * 0000000140AFD136: mov     edx, 0FFFFFFFFh
 * 0000000140AFD13B: and     r9d, 7Fh
 * 0000000140AFD13F: cmp     r9d, 8
 * 0000000140AFD143: jb      short loc_140AFD162
 * 0000000140AFD145: mov     eax, r9d
 * 0000000140AFD148: shr     rax, 3
 * 0000000140AFD14C: xor     r8, [r10]
 * 0000000140AFD14F: mov     ecx, r11d
 * 0000000140AFD152: rol     r8, cl
 * 0000000140AFD155: add     r10, 8
 * 0000000140AFD159: add     r9d, 0FFFFFFF8h
 * 0000000140AFD15D: sub     rax, r12
 * 0000000140AFD160: jnz     short loc_140AFD14C
 * 0000000140AFD162: test    r9d, r9d
 * 0000000140AFD165: jz      short loc_140AFD17C
 * 0000000140AFD167: movzx   eax, byte ptr [r10]
 * 0000000140AFD16B: mov     ecx, r11d
 * 0000000140AFD16E: xor     r8, rax
 * 0000000140AFD171: add     r10, r12
 * 0000000140AFD174: rol     r8, cl
 * 0000000140AFD177: add     r9d, edx
 * 0000000140AFD17A: jnz     short loc_140AFD167
 * 0000000140AFD17C: mov     rax, r8
 * 0000000140AFD17F: shr     rax, 1Fh
 * 0000000140AFD183: xor     ecx, ecx
 * 0000000140AFD185: jmp     short loc_140AFD18E
 * 0000000140AFD187: xor     r8d, eax
 * 0000000140AFD18A: shr     rax, 1Fh
 * 0000000140AFD18E: test    rax, rax
 * 0000000140AFD191: jnz     short loc_140AFD187
 * 0000000140AFD193: mov     eax, [r13+2Ch]
 * 0000000140AFD197: btr     r8d, 1Fh
 * 0000000140AFD19C: cmp     r8d, eax
 * 0000000140AFD19F: jz      loc_140AFB148
 * 0000000140AFD1A5: cmp     [rsi+8F8h], ecx
 * 0000000140AFD1AB: jnz     loc_140AFB148
 * 0000000140AFD1B1: mov     ecx, r8d
 * 0000000140AFD1B4: xor     rcx, rax
 * 0000000140AFD1B7: mov     rax, [rsi+588h]
 * 0000000140AFD1BE: mov     [rax+18h], rcx
 * 0000000140AFD1C2: xor     eax, eax
 * 0000000140AFD1C4: cmp     [rsi+8F8h], eax
 * 0000000140AFD1CA: jnz     loc_140AFB14A
 * 0000000140AFD1D0: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFD1DA: add     rax, rsi
 * 0000000140AFD1DD: mov     [rsi+900h], rax
 * 0000000140AFD1E4: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFD1EE: add     rax, r13
 * 0000000140AFD1F1: mov     [rsi+908h], rax
 * 0000000140AFD1F8: movsxd  rax, dword ptr [r13+0]
 * 0000000140AFD1FC: mov     [rsi+910h], rax
 * 0000000140AFD203: mov     [rsi+918h], r15
 * 0000000140AFD20A: jmp     loc_140AFB421
 * 0000000140AFD20F: mov     eax, [rsi+830h]
 * 0000000140AFD215: mov     r12d, 1
 * 0000000140AFD21B: test    r12b, al
 * 0000000140AFD21E: jz      loc_140AFB148
 * 0000000140AFD224: mov     r14, [rsi+5A0h]
 * 0000000140AFD22B: xor     eax, eax
 * 0000000140AFD22D: mov     r13, [rsi+5A8h]
 * 0000000140AFD234: mov     rbx, [rsi+540h]
 * 0000000140AFD23B: mov     [rsp+0B70h+var_B00], eax
 * 0000000140AFD23F: mov     rax, [rsi+178h]
 * 0000000140AFD246: mov     [rbp+0A70h+var_AE8], r14
 * 0000000140AFD24A: mov     [rsp+0B70h+var_B18], r13
 * 0000000140AFD24F: call    KeGuardDispatchICall
 * 0000000140AFD254: test    dword ptr [rsi+990h], 40000000h
 * 0000000140AFD25E: jnz     short loc_140AFD273
 * 0000000140AFD260: mov     ecx, [rsi+950h]
 * 0000000140AFD266: cmp     ecx, 7
 * 0000000140AFD269: jnb     short loc_140AFD273
 * 0000000140AFD26B: mov     r15d, r12d
 * 0000000140AFD26E: shl     r15b, cl
 * 0000000140AFD271: jmp     short loc_140AFD28B
 * 0000000140AFD273: mov     rax, [rsi+128h]
 * 0000000140AFD27A: xor     edx, edx
 * 0000000140AFD27C: mov     rcx, [rsi+0A00h]
 * 0000000140AFD283: call    KeGuardDispatchICall
 * 0000000140AFD288: mov     r15b, 80h
 * 0000000140AFD28B: mov     rax, [rsi+138h]
 * 0000000140AFD292: xor     edx, edx
 * 0000000140AFD294: mov     rcx, rbx
 * 0000000140AFD297: mov     dword ptr [rbp+0A70h+var_AD8], r15d
 * 0000000140AFD29B: call    KeGuardDispatchICall
 * 0000000140AFD2A0: mov     rax, [rsi+138h]
 * 0000000140AFD2A7: xor     edx, edx
 * 0000000140AFD2A9: mov     rcx, r14
 * 0000000140AFD2AC: call    KeGuardDispatchICall
 * 0000000140AFD2B1: mov     r9, [rsi+598h]
 * 0000000140AFD2B8: xor     eax, eax
 * 0000000140AFD2BA: mov     r10d, eax
 * 0000000140AFD2BD: mov     [rsp+0B70h+var_B08], rax
 * 0000000140AFD2C2: mov     r8, [r9]
 * 0000000140AFD2C5: cmp     r8, r9
 * 0000000140AFD2C8: jz      short loc_140AFD31D
 * 0000000140AFD2CA: lea     rdx, [r8-18h]
 * 0000000140AFD2CE: cmp     rdx, r13
 * 0000000140AFD2D1: jz      short loc_140AFD309
 * 0000000140AFD2D3: mov     rax, [rsi+740h]
 * 0000000140AFD2DA: mov     rdx, [rdx+rax]
 * 0000000140AFD2DE: mov     rax, [rsi+6C8h]
 * 0000000140AFD2E5: mov     ecx, [rdx+rax]
 * 0000000140AFD2E8: test    [rsi+6E0h], ecx
 * 0000000140AFD2EE: jnz     short loc_140AFD2FD
 * 0000000140AFD2F0: test    r10, r10
 * 0000000140AFD2F3: mov     rax, rdx
 * 0000000140AFD2F6: cmovnz  rax, r12
 * 0000000140AFD2FA: mov     r10, rax
 * 0000000140AFD2FD: mov     rax, [rsi+6C0h]
 * 0000000140AFD304: lock or [rdx+rax], r15b
 * 0000000140AFD309: mov     r8, [r8]
 * 0000000140AFD30C: cmp     r8, r9
 * 0000000140AFD30F: jnz     short loc_140AFD2CA
 * 0000000140AFD311: mov     [rsp+0B70h+var_B08], r10
 * 0000000140AFD316: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFD31D: mov     r12, [rsi+518h]
 * 0000000140AFD324: mov     r14, [r12]
 * 0000000140AFD328: cmp     r14, r12
 * 0000000140AFD32B: jz      loc_140AFD416
 * 0000000140AFD331: mov     rdi, [rsp+0B70h+var_B18]
 * 0000000140AFD336: mov     r13b, r15b
 * 0000000140AFD339: movzx   r8d, r15b
 * 0000000140AFD33D: not     r13b
 * 0000000140AFD340: mov     r15d, [rsp+0B70h+var_B00]
 * 0000000140AFD345: mov     dword ptr [rbp+0A70h+arg_8], r8d
 * 0000000140AFD34C: mov     rdx, [rsi+6C0h]
 * 0000000140AFD353: mov     rbx, r14
 * 0000000140AFD356: sub     rbx, [rsi+6D8h]
 * 0000000140AFD35D: mov     rcx, rdx
 * 0000000140AFD360: movsx   eax, byte ptr [rbx+rdx]
 * 0000000140AFD364: test    r8d, eax
 * 0000000140AFD367: jnz     loc_140AFD3ED
 * 0000000140AFD36D: mov     rax, [rsi+6D0h]
 * 0000000140AFD374: mov     r8, [rbx+rax]
 * 0000000140AFD378: xor     eax, eax
 * 0000000140AFD37A: test    r8, r8
 * 0000000140AFD37D: jz      short loc_140AFD3E6
 * 0000000140AFD37F: cmp     r8, rdi
 * 0000000140AFD382: jz      short loc_140AFD3E6
 * 0000000140AFD384: cmp     [rsi+8F8h], eax
 * 0000000140AFD38A: jnz     short loc_140AFD3E6
 * 0000000140AFD38C: mov     rcx, [rsp+0B70h+var_B20]
 * 0000000140AFD391: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFD39B: add     rax, rsi
 * 0000000140AFD39E: xor     edx, edx
 * 0000000140AFD3A0: mov     [rsi+900h], rax
 * 0000000140AFD3A7: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFD3B1: add     rax, rcx
 * 0000000140AFD3B4: mov     [rsi+908h], rax
 * 0000000140AFD3BB: movsxd  rax, dword ptr [rcx]
 * 0000000140AFD3BE: mov     rcx, rsi
 * 0000000140AFD3C1: mov     [rsi+910h], rax
 * 0000000140AFD3C8: mov     eax, 1
 * 0000000140AFD3CD: mov     [rsi+918h], rbx
 * 0000000140AFD3D4: mov     [rsi+8F8h], eax
 * 0000000140AFD3DA: call    $$ba
 * 0000000140AFD3DF: mov     rcx, [rsi+6C0h]
 * 0000000140AFD3E6: mov     r8d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140AFD3ED: lock and [rbx+rcx], r13b
 * 0000000140AFD3F2: mov     r14, [r14]
 * 0000000140AFD3F5: inc     r15d
 * 0000000140AFD3F8: cmp     r14, r12
 * 0000000140AFD3FB: jnz     loc_140AFD34C
 * 0000000140AFD401: mov     r13, [rsp+0B70h+var_B18]
 * 0000000140AFD406: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFD40D: mov     [rsp+0B70h+var_B00], r15d
 * 0000000140AFD412: mov     r15d, dword ptr [rbp+0A70h+var_AD8]
 * 0000000140AFD416: mov     rdx, [rsp+0B70h+var_B08]
 * 0000000140AFD41B: mov     r12d, 1
 * 0000000140AFD421: test    rdx, rdx
 * 0000000140AFD424: jz      short loc_140AFD476
 * 0000000140AFD426: cmp     rdx, r12
 * 0000000140AFD429: jz      short loc_140AFD43D
 * 0000000140AFD42B: mov     rax, [rsi+6C0h]
 * 0000000140AFD432: mov     cl, r15b
 * 0000000140AFD435: not     cl
 * 0000000140AFD437: lock and [rdx+rax], cl
 * 0000000140AFD43B: jmp     short loc_140AFD476
 * 0000000140AFD43D: mov     r10, [rsi+598h]
 * 0000000140AFD444: mov     r9, [r10]
 * 0000000140AFD447: jmp     short loc_140AFD471
 * 0000000140AFD449: lea     r8, [r9-18h]
 * 0000000140AFD44D: cmp     r8, r13
 * 0000000140AFD450: jz      short loc_140AFD46E
 * 0000000140AFD452: mov     rax, [rsi+740h]
 * 0000000140AFD459: mov     dl, r15b
 * 0000000140AFD45C: not     dl
 * 0000000140AFD45E: mov     r8, [r8+rax]
 * 0000000140AFD462: mov     rax, [rsi+6C0h]
 * 0000000140AFD469: lock and [r8+rax], dl
 * 0000000140AFD46E: mov     r9, [r9]
 * 0000000140AFD471: cmp     r9, r10
 * 0000000140AFD474: jnz     short loc_140AFD449
 * 0000000140AFD476: mov     rax, [rsi+140h]
 * 0000000140AFD47D: xor     edx, edx
 * 0000000140AFD47F: mov     rcx, [rbp+0A70h+var_AE8]
 * 0000000140AFD483: call    KeGuardDispatchICall
 * 0000000140AFD488: cmp     r15b, 80h
 * 0000000140AFD48C: jnz     short loc_140AFD4A3
 * 0000000140AFD48E: mov     rax, [rsi+130h]
 * 0000000140AFD495: xor     edx, edx
 * 0000000140AFD497: mov     rcx, [rsi+0A00h]
 * 0000000140AFD49E: call    KeGuardDispatchICall
 * 0000000140AFD4A3: mov     rcx, [rsi+540h]
 * 0000000140AFD4AA: xor     edx, edx
 * 0000000140AFD4AC: mov     rax, [rsi+140h]
 * 0000000140AFD4B3: call    KeGuardDispatchICall
 * 0000000140AFD4B8: mov     rax, [rsi+180h]
 * 0000000140AFD4BF: call    KeGuardDispatchICall
 * 0000000140AFD4C4: mov     eax, [rsp+0B70h+var_B00]
 * 0000000140AFD4C8: shl     eax, 8
 * 0000000140AFD4CB: jmp     loc_140AFBD65
 * 0000000140AFD4D0: mov     eax, [rsi+830h]
 * 0000000140AFD4D6: mov     r12d, 1
 * 0000000140AFD4DC: test    r12b, al
 * 0000000140AFD4DF: jnz     loc_140AFB148
 * 0000000140AFD4E5: mov     r14, [rsi+5A0h]
 * 0000000140AFD4EC: xor     eax, eax
 * 0000000140AFD4EE: mov     rbx, [rsi+540h]
 * 0000000140AFD4F5: mov     r13d, eax
 * 0000000140AFD4F8: mov     dword ptr [rbp+0A70h+arg_8], eax
 * 0000000140AFD4FE: mov     rax, [rsi+5A8h]
 * 0000000140AFD505: mov     [rsp+0B70h+var_B18], rax
 * 0000000140AFD50A: mov     rax, [rsi+178h]
 * 0000000140AFD511: mov     [rsp+0B70h+var_B08], r14
 * 0000000140AFD516: call    KeGuardDispatchICall
 * 0000000140AFD51B: test    dword ptr [rsi+990h], 40000000h
 * 0000000140AFD525: jnz     short loc_140AFD53A
 * 0000000140AFD527: mov     ecx, [rsi+950h]
 * 0000000140AFD52D: cmp     ecx, 7
 * 0000000140AFD530: jnb     short loc_140AFD53A
 * 0000000140AFD532: mov     r15d, r12d
 * 0000000140AFD535: shl     r15b, cl
 * 0000000140AFD538: jmp     short loc_140AFD552
 * 0000000140AFD53A: mov     rax, [rsi+128h]
 * 0000000140AFD541: xor     edx, edx
 * 0000000140AFD543: mov     rcx, [rsi+0A00h]
 * 0000000140AFD54A: call    KeGuardDispatchICall
 * 0000000140AFD54F: mov     r15b, 80h
 * 0000000140AFD552: mov     rax, [rsi+138h]
 * 0000000140AFD559: xor     edx, edx
 * 0000000140AFD55B: mov     rcx, rbx
 * 0000000140AFD55E: call    KeGuardDispatchICall
 * 0000000140AFD563: mov     r8, [rsi+518h]
 * 0000000140AFD56A: mov     rdx, [r8]
 * 0000000140AFD56D: cmp     rdx, r8
 * 0000000140AFD570: jz      short loc_140AFD59A
 * 0000000140AFD572: mov     rax, [rsi+6C0h]
 * 0000000140AFD579: mov     rcx, rdx
 * 0000000140AFD57C: sub     rcx, [rsi+6D8h]
 * 0000000140AFD583: lock or [rcx+rax], r15b
 * 0000000140AFD588: mov     rdx, [rdx]
 * 0000000140AFD58B: add     r13d, r12d
 * 0000000140AFD58E: cmp     rdx, r8
 * 0000000140AFD591: jnz     short loc_140AFD572
 * 0000000140AFD593: mov     dword ptr [rbp+0A70h+arg_8], r13d
 * 0000000140AFD59A: mov     rax, [rsi+138h]
 * 0000000140AFD5A1: xor     edx, edx
 * 0000000140AFD5A3: mov     rcx, r14
 * 0000000140AFD5A6: call    KeGuardDispatchICall
 * 0000000140AFD5AB: mov     r12, [rsi+598h]
 * 0000000140AFD5B2: mov     r14, [r12]
 * 0000000140AFD5B6: cmp     r14, r12
 * 0000000140AFD5B9: jz      loc_140AFD692
 * 0000000140AFD5BF: mov     rax, [rsp+0B70h+var_B18]
 * 0000000140AFD5C4: xor     r13d, r13d
 * 0000000140AFD5C7: mov     rdi, [rsp+0B70h+var_B20]
 * 0000000140AFD5CC: mov     rcx, r14
 * 0000000140AFD5CF: sub     rcx, [rsi+748h]
 * 0000000140AFD5D6: cmp     rcx, rax
 * 0000000140AFD5D9: jz      loc_140AFD678
 * 0000000140AFD5DF: mov     r8, [rsi+6C0h]
 * 0000000140AFD5E6: mov     rax, [rsi+740h]
 * 0000000140AFD5ED: mov     rdx, r8
 * 0000000140AFD5F0: mov     rbx, [rcx+rax]
 * 0000000140AFD5F4: test    [rbx+r8], r15b
 * 0000000140AFD5F8: jnz     short loc_140AFD66A
 * 0000000140AFD5FA: mov     rax, [rsi+6C8h]
 * 0000000140AFD601: mov     ecx, [rbx+rax]
 * 0000000140AFD604: test    [rsi+6E0h], ecx
 * 0000000140AFD60A: jz      short loc_140AFD66A
 * 0000000140AFD60C: cmp     [rsi+8F8h], r13d
 * 0000000140AFD613: jnz     short loc_140AFD66A
 * 0000000140AFD615: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFD61F: xor     edx, edx
 * 0000000140AFD621: add     rax, rsi
 * 0000000140AFD624: mov     rcx, rsi
 * 0000000140AFD627: mov     [rsi+900h], rax
 * 0000000140AFD62E: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFD638: add     rax, rdi
 * 0000000140AFD63B: mov     [rsi+908h], rax
 * 0000000140AFD642: movsxd  rax, dword ptr [rdi]
 * 0000000140AFD645: mov     [rsi+910h], rax
 * 0000000140AFD64C: mov     eax, 1
 * 0000000140AFD651: mov     [rsi+918h], rbx
 * 0000000140AFD658: mov     [rsi+8F8h], eax
 * 0000000140AFD65E: call    $$ba
 * 0000000140AFD663: mov     rdx, [rsi+6C0h]
 * 0000000140AFD66A: mov     al, r15b
 * 0000000140AFD66D: not     al
 * 0000000140AFD66F: lock and [rbx+rdx], al
 * 0000000140AFD673: mov     rax, [rsp+0B70h+var_B18]
 * 0000000140AFD678: mov     r14, [r14]
 * 0000000140AFD67B: cmp     r14, r12
 * 0000000140AFD67E: jnz     loc_140AFD5CC
 * 0000000140AFD684: mov     r13d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140AFD68B: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFD692: mov     rax, [rsi+140h]
 * 0000000140AFD699: xor     edx, edx
 * 0000000140AFD69B: mov     rcx, [rsp+0B70h+var_B08]
 * 0000000140AFD6A0: call    KeGuardDispatchICall
 * 0000000140AFD6A5: cmp     r15b, 80h
 * 0000000140AFD6A9: jnz     short loc_140AFD6C0
 * 0000000140AFD6AB: mov     rax, [rsi+130h]
 * 0000000140AFD6B2: xor     edx, edx
 * 0000000140AFD6B4: mov     rcx, [rsi+0A00h]
 * 0000000140AFD6BB: call    KeGuardDispatchICall
 * 0000000140AFD6C0: mov     rcx, [rsi+540h]
 * 0000000140AFD6C7: xor     edx, edx
 * 0000000140AFD6C9: mov     rax, [rsi+140h]
 * 0000000140AFD6D0: call    KeGuardDispatchICall
 * 0000000140AFD6D5: mov     rax, [rsi+180h]
 * 0000000140AFD6DC: call    KeGuardDispatchICall
 * 0000000140AFD6E1: shl     r13d, 8
 * 0000000140AFD6E5: add     [rsi+828h], r13d
 * 0000000140AFD6EC: jmp     loc_140AFB39B
 * 0000000140AFD6F1: mov     r12, [rsi+528h]
 * 0000000140AFD6F8: xor     eax, eax
 * 0000000140AFD6FA: mov     [rsp+0B70h+var_B00], eax
 * 0000000140AFD6FE: mov     rax, [rsi+378h]
 * 0000000140AFD705: call    KeGuardDispatchICall
 * 0000000140AFD70A: mov     [rbp+0A70h+var_AE8], rax
 * 0000000140AFD70E: cli
 * 0000000140AFD70F: mov     rcx, gs:20h
 * 0000000140AFD718: mov     rax, [rsi+650h]
 * 0000000140AFD71F: mov     rcx, [rcx+rax]
 * 0000000140AFD723: sti
 * 0000000140AFD724: mov     rax, [rsi+168h]
 * 0000000140AFD72B: call    KeGuardDispatchICall
 * 0000000140AFD730: mov     rcx, [rsi+530h]
 * 0000000140AFD737: mov     ebx, 1
 * 0000000140AFD73C: mov     rax, [rsi+0E8h]
 * 0000000140AFD743: mov     dl, bl
 * 0000000140AFD745: call    KeGuardDispatchICall
 * 0000000140AFD74A: mov     rax, [rsi+618h]
 * 0000000140AFD751: mov     rcx, [rax]
 * 0000000140AFD754: mov     r13d, [rcx]
 * 0000000140AFD757: lea     rdx, [rcx+10h]
 * 0000000140AFD75B: mov     [rsp+0B70h+var_B18], rdx
 * 0000000140AFD760: lea     rax, ds:0[r13*2]
 * 0000000140AFD768: add     rax, r13
 * 0000000140AFD76B: lea     rax, [rdx+rax*8]
 * 0000000140AFD76F: mov     [rsp+0B70h+var_B08], rax
 * 0000000140AFD774: xor     eax, eax
 * 0000000140AFD776: mov     dword ptr [rbp+0A70h+arg_8], eax
 * 0000000140AFD77C: cmp     [rcx+0Ch], al
 * 0000000140AFD77F: jz      short loc_140AFD795
 * 0000000140AFD781: mov     r13d, eax
 * 0000000140AFD784: mov     rax, [r12]
 * 0000000140AFD788: jmp     short loc_140AFD790
 * 0000000140AFD78A: mov     rax, [rax]
 * 0000000140AFD78D: add     r13d, ebx
 * 0000000140AFD790: cmp     rax, r12
 * 0000000140AFD793: jnz     short loc_140AFD78A
 * 0000000140AFD795: mov     r8d, [rsi+810h]
 * 0000000140AFD79C: lea     r15d, ds:0[r13*8]
 * 0000000140AFD7A4: rdtsc
 * 0000000140AFD7A6: shl     rdx, 20h
 * 0000000140AFD7AA: mov     r9, 7010008004002001h
 * 0000000140AFD7B4: or      rax, rdx
 * 0000000140AFD7B7: mov     rcx, rax
 * 0000000140AFD7BA: ror     rax, 3
 * 0000000140AFD7BE: xor     rcx, rax
 * 0000000140AFD7C1: mov     rax, r9
 * 0000000140AFD7C4: mul     rcx
 * 0000000140AFD7C7: mov     rbx, rdx
 * 0000000140AFD7CA: mov     [rbp+0A70h+var_230], rdx
 * 0000000140AFD7D1: xor     ebx, eax
 * 0000000140AFD7D3: and     ebx, 7FFh
 * 0000000140AFD7D9: rdtsc
 * 0000000140AFD7DB: shl     rdx, 20h
 * 0000000140AFD7DF: or      rax, rdx
 * 0000000140AFD7E2: mov     rcx, rax
 * 0000000140AFD7E5: ror     rax, 3
 * 0000000140AFD7E9: xor     rcx, rax
 * 0000000140AFD7EC: mov     rax, r9
 * 0000000140AFD7EF: mul     rcx
 * 0000000140AFD7F2: lea     r9d, [rbx+1]
 * 0000000140AFD7F6: mov     ecx, 42h ; 'B'
 * 0000000140AFD7FB: xor     rax, rdx
 * 0000000140AFD7FE: mov     [rbp+0A70h+var_1C8], rdx
 * 0000000140AFD805: xor     edx, edx
 * 0000000140AFD807: div     r9
 * 0000000140AFD80A: mov     rax, [rsi+0F0h]
 * 0000000140AFD811: mov     r14, rdx
 * 0000000140AFD814: lea     edx, [rbx+r15]
 * 0000000140AFD818: call    KeGuardDispatchICall
 * 0000000140AFD81D: mov     r11, rax
 * 0000000140AFD820: xor     eax, eax
 * 0000000140AFD822: test    r11, r11
 * 0000000140AFD825: jnz     short loc_140AFD835
 * 0000000140AFD827: lea     ecx, [rax+1]
 * 0000000140AFD82A: add     [rsi+0A18h], ecx
 * 0000000140AFD830: jmp     loc_140AFD987
 * 0000000140AFD835: mov     r10d, r14d
 * 0000000140AFD838: mov     r9, r11
 * 0000000140AFD83B: cmp     r14d, 8
 * 0000000140AFD83F: jb      short loc_140AFD896
 * 0000000140AFD841: mov     r8d, r14d
 * 0000000140AFD844: mov     esi, 1
 * 0000000140AFD849: shr     r8, 3
 * 0000000140AFD84D: mov     rdi, 7010008004002001h
 * 0000000140AFD857: rdtsc
 * 0000000140AFD859: shl     rdx, 20h
 * 0000000140AFD85D: add     r10d, 0FFFFFFF8h
 * 0000000140AFD861: or      rax, rdx
 * 0000000140AFD864: mov     rcx, rax
 * 0000000140AFD867: ror     rax, 3
 * 0000000140AFD86B: xor     rcx, rax
 * 0000000140AFD86E: mov     rax, rdi
 * 0000000140AFD871: mul     rcx
 * 0000000140AFD874: mov     [rbp+0A70h+var_1C0], rdx
 * 0000000140AFD87B: xor     rdx, rax
 * 0000000140AFD87E: mov     [r9], rdx
 * 0000000140AFD881: add     r9, 8
 * 0000000140AFD885: sub     r8, rsi
 * 0000000140AFD888: jnz     short loc_140AFD857
 * 0000000140AFD88A: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFD88F: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFD896: test    r10d, r10d
 * 0000000140AFD899: jz      short loc_140AFD8DE
 * 0000000140AFD89B: rdtsc
 * 0000000140AFD89D: shl     rdx, 20h
 * 0000000140AFD8A1: or      rax, rdx
 * 0000000140AFD8A4: mov     rcx, rax
 * 0000000140AFD8A7: ror     rax, 3
 * 0000000140AFD8AB: xor     rcx, rax
 * 0000000140AFD8AE: mov     rax, 7010008004002001h
 * 0000000140AFD8B8: mul     rcx
 * 0000000140AFD8BB: mov     ecx, 0FFFFFFFFh
 * 0000000140AFD8C0: mov     [rbp+0A70h+var_1B8], rdx
 * 0000000140AFD8C7: xor     rdx, rax
 * 0000000140AFD8CA: mov     eax, 1
 * 0000000140AFD8CF: mov     [r9], dl
 * 0000000140AFD8D2: add     r9, rax
 * 0000000140AFD8D5: shr     rdx, 8
 * 0000000140AFD8D9: add     r10d, ecx
 * 0000000140AFD8DC: jnz     short loc_140AFD8CF
 * 0000000140AFD8DE: mov     r10d, r14d
 * 0000000140AFD8E1: sub     ebx, r14d
 * 0000000140AFD8E4: mov     r8d, r15d
 * 0000000140AFD8E7: mov     r14d, 1
 * 0000000140AFD8ED: add     r8, r10
 * 0000000140AFD8F0: mov     r15, 7010008004002001h
 * 0000000140AFD8FA: add     r8, r11
 * 0000000140AFD8FD: cmp     ebx, 8
 * 0000000140AFD900: jb      short loc_140AFD93B
 * 0000000140AFD902: mov     r9d, ebx
 * 0000000140AFD905: shr     r9, 3
 * 0000000140AFD909: rdtsc
 * 0000000140AFD90B: shl     rdx, 20h
 * 0000000140AFD90F: add     ebx, 0FFFFFFF8h
 * 0000000140AFD912: or      rax, rdx
 * 0000000140AFD915: mov     rcx, rax
 * 0000000140AFD918: ror     rax, 3
 * 0000000140AFD91C: xor     rcx, rax
 * 0000000140AFD91F: mov     rax, r15
 * 0000000140AFD922: mul     rcx
 * 0000000140AFD925: mov     [rbp+0A70h+var_1B0], rdx
 * 0000000140AFD92C: xor     rdx, rax
 * 0000000140AFD92F: mov     [r8], rdx
 * 0000000140AFD932: add     r8, 8
 * 0000000140AFD936: sub     r9, r14
 * 0000000140AFD939: jnz     short loc_140AFD909
 * 0000000140AFD93B: test    ebx, ebx
 * 0000000140AFD93D: jz      short loc_140AFD975
 * 0000000140AFD93F: rdtsc
 * 0000000140AFD941: shl     rdx, 20h
 * 0000000140AFD945: or      rax, rdx
 * 0000000140AFD948: mov     rcx, rax
 * 0000000140AFD94B: ror     rax, 3
 * 0000000140AFD94F: xor     rcx, rax
 * 0000000140AFD952: mov     rax, r15
 * 0000000140AFD955: mul     rcx
 * 0000000140AFD958: mov     [rbp+0A70h+var_1A8], rdx
 * 0000000140AFD95F: xor     rdx, rax
 * 0000000140AFD962: mov     eax, 0FFFFFFFFh
 * 0000000140AFD967: mov     [r8], dl
 * 0000000140AFD96A: add     r8, r14
 * 0000000140AFD96D: shr     rdx, 8
 * 0000000140AFD971: add     ebx, eax
 * 0000000140AFD973: jnz     short loc_140AFD967
 * 0000000140AFD975: lea     r15, [r10+r11]
 * 0000000140AFD979: mov     [rbp+0A70h+var_940], r11
 * 0000000140AFD980: test    r15, r15
 * 0000000140AFD983: jnz     short loc_140AFD993
 * 0000000140AFD985: xor     eax, eax
 * 0000000140AFD987: mov     [rbp+0A70h+var_940], rax
 * 0000000140AFD98E: jmp     loc_140AFDAD2
 * 0000000140AFD993: mov     rbx, [r12]
 * 0000000140AFD997: cmp     rbx, r12
 * 0000000140AFD99A: jz      short loc_140AFD9E9
 * 0000000140AFD99C: mov     edi, dword ptr [rbp+0A70h+arg_8]
 * 0000000140AFD9A2: mov     rax, [rsi+758h]
 * 0000000140AFD9A9: mov     rcx, rbx
 * 0000000140AFD9AC: sub     rcx, [rsi+750h]
 * 0000000140AFD9B3: mov     r14, [rcx+rax]
 * 0000000140AFD9B7: mov     rax, [rsi+2A8h]
 * 0000000140AFD9BE: mov     rcx, r14
 * 0000000140AFD9C1: call    KeGuardDispatchICall
 * 0000000140AFD9C6: test    eax, eax
 * 0000000140AFD9C8: jnz     short loc_140AFD9D7
 * 0000000140AFD9CA: cmp     edi, r13d
 * 0000000140AFD9CD: jnb     short loc_140AFD9D7
 * 0000000140AFD9CF: mov     eax, edi
 * 0000000140AFD9D1: inc     edi
 * 0000000140AFD9D3: mov     [r15+rax*8], r14
 * 0000000140AFD9D7: mov     rbx, [rbx]
 * 0000000140AFD9DA: inc     [rsp+0B70h+var_B00]
 * 0000000140AFD9DE: cmp     rbx, r12
 * 0000000140AFD9E1: jnz     short loc_140AFD9A2
 * 0000000140AFD9E3: mov     dword ptr [rbp+0A70h+arg_8], edi
 * 0000000140AFD9E9: mov     r14d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140AFD9F0: mov     rcx, r15
 * 0000000140AFD9F3: mov     rax, [rsi+398h]
 * 0000000140AFD9FA: mov     edx, r14d
 * 0000000140AFD9FD: call    KeGuardDispatchICall
 * 0000000140AFDA02: mov     r12, [rsp+0B70h+var_B18]
 * 0000000140AFDA07: mov     r13, [rsp+0B70h+var_B08]
 * 0000000140AFDA0C: mov     rdi, [rsp+0B70h+var_B20]
 * 0000000140AFDA11: mov     rbx, [r12+8]
 * 0000000140AFDA16: mov     rax, [rsi+2A8h]
 * 0000000140AFDA1D: mov     rcx, rbx
 * 0000000140AFDA20: call    KeGuardDispatchICall
 * 0000000140AFDA25: test    eax, eax
 * 0000000140AFDA27: jnz     loc_140AFDABE
 * 0000000140AFDA2D: xor     eax, eax
 * 0000000140AFDA2F: lea     edx, [r14-1]
 * 0000000140AFDA33: mov     r8d, eax
 * 0000000140AFDA36: test    edx, edx
 * 0000000140AFDA38: js      short loc_140AFDA68
 * 0000000140AFDA3A: lea     ecx, [rdx+r8]
 * 0000000140AFDA3E: sar     ecx, 1
 * 0000000140AFDA40: movsxd  rax, ecx
 * 0000000140AFDA43: cmp     rbx, [r15+rax*8]
 * 0000000140AFDA47: jnb     short loc_140AFDA54
 * 0000000140AFDA49: xor     eax, eax
 * 0000000140AFDA4B: test    ecx, ecx
 * 0000000140AFDA4D: jz      short loc_140AFDA68
 * 0000000140AFDA4F: lea     edx, [rcx-1]
 * 0000000140AFDA52: jmp     short loc_140AFDA5A
 * 0000000140AFDA54: jbe     short loc_140AFDA61
 * 0000000140AFDA56: lea     r8d, [rcx+1]
 * 0000000140AFDA5A: cmp     edx, r8d
 * 0000000140AFDA5D: jge     short loc_140AFDA3A
 * 0000000140AFDA5F: jmp     short loc_140AFDA66
 * 0000000140AFDA61: cmp     edx, r8d
 * 0000000140AFDA64: jge     short loc_140AFDABE
 * 0000000140AFDA66: xor     eax, eax
 * 0000000140AFDA68: cmp     [rsi+8F8h], eax
 * 0000000140AFDA6E: jnz     short loc_140AFDABE
 * 0000000140AFDA70: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFDA7A: xor     edx, edx
 * 0000000140AFDA7C: add     rax, rsi
 * 0000000140AFDA7F: mov     rcx, rsi
 * 0000000140AFDA82: mov     [rsi+900h], rax
 * 0000000140AFDA89: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFDA93: add     rax, rdi
 * 0000000140AFDA96: mov     [rsi+908h], rax
 * 0000000140AFDA9D: movsxd  rax, dword ptr [rdi]
 * 0000000140AFDAA0: mov     [rsi+910h], rax
 * 0000000140AFDAA7: mov     eax, 1
 * 0000000140AFDAAC: mov     [rsi+918h], rbx
 * 0000000140AFDAB3: mov     [rsi+8F8h], eax
 * 0000000140AFDAB9: call    $$ba
 * 0000000140AFDABE: add     r12, 18h
 * 0000000140AFDAC2: cmp     r12, r13
 * 0000000140AFDAC5: jb      loc_140AFDA11
 * 0000000140AFDACB: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFDAD2: mov     rcx, [rsi+530h]
 * 0000000140AFDAD9: mov     rax, [rsi+118h]
 * 0000000140AFDAE0: call    KeGuardDispatchICall
 * 0000000140AFDAE5: mov     rax, [rsi+170h]
 * 0000000140AFDAEC: call    KeGuardDispatchICall
 * 0000000140AFDAF1: mov     rax, [rsi+380h]
 * 0000000140AFDAF8: mov     rcx, [rbp+0A70h+var_AE8]
 * 0000000140AFDAFC: call    KeGuardDispatchICall
 * 0000000140AFDB01: xor     eax, eax
 * 0000000140AFDB03: cmp     [rbp+0A70h+var_940], rax
 * 0000000140AFDB0A: jz      loc_140AFB050
 * 0000000140AFDB10: mov     eax, [rsp+0B70h+var_B00]
 * 0000000140AFDB14: shl     eax, 9
 * 0000000140AFDB17: add     [rsi+828h], eax
 * 0000000140AFDB1D: mov     rax, [rsi+0F8h]
 * 0000000140AFDB24: mov     rcx, [rbp+0A70h+var_940]
 * 0000000140AFDB2B: jmp     loc_140AFC8F9
 * 0000000140AFDB30: mov     r11d, 40000000h
 * 0000000140AFDB36: test    [rsi+990h], r11d
 * 0000000140AFDB3D: jz      short loc_140AFDB96
 * 0000000140AFDB3F: test    dword ptr [rsi+994h], 1000h
 * 0000000140AFDB49: jnz     short loc_140AFDB96
 * 0000000140AFDB4B: rdtsc
 * 0000000140AFDB4D: shl     rdx, 20h
 * 0000000140AFDB51: or      rax, rdx
 * 0000000140AFDB54: mov     rcx, rax
 * 0000000140AFDB57: ror     rax, 3
 * 0000000140AFDB5B: xor     rcx, rax
 * 0000000140AFDB5E: mov     rax, 7010008004002001h
 * 0000000140AFDB68: mul     rcx
 * 0000000140AFDB6B: mov     rcx, rdx
 * 0000000140AFDB6E: mov     [rbp+0A70h+var_650], rdx
 * 0000000140AFDB75: xor     rcx, rax
 * 0000000140AFDB78: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 0000000140AFDB82: mul     rcx
 * 0000000140AFDB85: shr     rdx, 2
 * 0000000140AFDB89: lea     rax, [rdx+rdx*4]
 * 0000000140AFDB8D: sub     rcx, rax
 * 0000000140AFDB90: mov     [rsi+824h], ecx
 * 0000000140AFDB96: mov     r12d, 1
 * 0000000140AFDB9C: mov     ecx, [rsi+824h]
 * 0000000140AFDBA2: xor     eax, eax
 * 0000000140AFDBA4: test    ecx, ecx
 * 0000000140AFDBA6: jz      loc_140B000C7
 * 0000000140AFDBAC: sub     ecx, 1
 * 0000000140AFDBAF: jz      loc_140AFFF59
 * 0000000140AFDBB5: sub     ecx, 1
 * 0000000140AFDBB8: jz      loc_140AFFDB9
 * 0000000140AFDBBE: sub     ecx, 1
 * 0000000140AFDBC1: jz      loc_140AFDEF0
 * 0000000140AFDBC7: sub     ecx, 1
 * 0000000140AFDBCA: jz      loc_140AFDD40
 * 0000000140AFDBD0: cmp     ecx, 1
 * 0000000140AFDBD3: jnz     loc_140B0023D
 * 0000000140AFDBD9: mov     rbx, r13
 * 0000000140AFDBDC: mov     [rbp+0A70h+arg_10], 0FFh
 * 0000000140AFDBE3: mov     r13d, eax
 * 0000000140AFDBE6: mov     r14d, eax
 * 0000000140AFDBE9: mov     r15d, eax
 * 0000000140AFDBEC: mov     [rbp+0A70h+var_8A8], rax
 * 0000000140AFDBF3: jmp     loc_140AFDCFA
 * 0000000140AFDBF8: mov     rax, [rsi+208h]
 * 0000000140AFDBFF: lea     rdx, [rbp+0A70h+var_648]
 * 0000000140AFDC06: mov     rcx, [rbp+0A70h+var_9A0]
 * 0000000140AFDC0D: add     r13d, r12d
 * 0000000140AFDC10: call    KeGuardDispatchICall
 * 0000000140AFDC15: test    rax, rax
 * 0000000140AFDC18: jnz     loc_140AFDCFA
 * 0000000140AFDC1E: test    dword ptr [rsi+990h], 40000000h
 * 0000000140AFDC28: jz      short loc_140AFDC71
 * 0000000140AFDC2A: mov     rcx, [rsi+0A80h]
 * 0000000140AFDC31: lea     edx, [rax+30h]
 * 0000000140AFDC34: lea     r8d, [rax+6]
 * 0000000140AFDC38: mov     rax, [rbx]
 * 0000000140AFDC3B: add     edx, 0FFFFFFF8h
 * 0000000140AFDC3E: mov     [rcx], rax
 * 0000000140AFDC41: add     rbx, 8
 * 0000000140AFDC45: add     rcx, 8
 * 0000000140AFDC49: sub     r8, r12
 * 0000000140AFDC4C: jnz     short loc_140AFDC38
 * 0000000140AFDC4E: test    edx, edx
 * 0000000140AFDC50: jz      short loc_140AFDC6A
 * 0000000140AFDC52: mov     esi, 0FFFFFFFFh
 * 0000000140AFDC57: mov     al, [rbx]
 * 0000000140AFDC59: add     rbx, r12
 * 0000000140AFDC5C: mov     [rcx], al
 * 0000000140AFDC5E: add     rcx, r12
 * 0000000140AFDC61: add     edx, esi
 * 0000000140AFDC63: jnz     short loc_140AFDC57
 * 0000000140AFDC65: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFDC6A: mov     rbx, [rsi+0A80h]
 * 0000000140AFDC71: mov     rax, [rbp+0A70h+var_9A0]
 * 0000000140AFDC78: mov     [rbx+18h], rax
 * 0000000140AFDC7C: mov     rax, [rsi+588h]
 * 0000000140AFDC83: mov     [rax], rbx
 * 0000000140AFDC86: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140AFDC8D: mov     rax, [rbp+0A70h+var_9A0]
 * 0000000140AFDC94: mov     rcx, [rsi+588h]
 * 0000000140AFDC9B: mov     [rcx+8], rax
 * 0000000140AFDC9F: xor     eax, eax
 * 0000000140AFDCA1: mov     dword ptr [rcx+14h], 1000h
 * 0000000140AFDCA8: cmp     [rsi+8F8h], eax
 * 0000000140AFDCAE: jnz     short loc_140AFDCFA
 * 0000000140AFDCB0: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFDCBA: xor     edx, edx
 * 0000000140AFDCBC: add     rax, rsi
 * 0000000140AFDCBF: mov     rcx, rsi
 * 0000000140AFDCC2: mov     [rsi+900h], rax
 * 0000000140AFDCC9: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFDCD3: add     rax, rbx
 * 0000000140AFDCD6: mov     [rsi+908h], rax
 * 0000000140AFDCDD: movsxd  rax, dword ptr [rbx]
 * 0000000140AFDCE0: mov     [rsi+910h], rax
 * 0000000140AFDCE7: mov     [rsi+918h], r15
 * 0000000140AFDCEE: mov     [rsi+8F8h], r12d
 * 0000000140AFDCF5: call    $$ba
 * 0000000140AFDCFA: mov     rax, [rsi+430h]
 * 0000000140AFDD01: lea     r9, [rbp+0A70h+var_9A0]
 * 0000000140AFDD08: lea     r8, [rbp+0A70h+arg_10]
 * 0000000140AFDD0F: mov     ecx, r14d
 * 0000000140AFDD12: lea     rdx, [rbp+0A70h+var_8A8]
 * 0000000140AFDD19: call    KeGuardDispatchICall
 * 0000000140AFDD1E: test    eax, eax
 * 0000000140AFDD20: jnz     loc_140AFDBF8
 * 0000000140AFDD26: add     r14d, r12d
 * 0000000140AFDD29: add     r15, r12
 * 0000000140AFDD2C: mov     eax, 0
 * 0000000140AFDD31: cmp     r14d, 3
 * 0000000140AFDD35: jb      loc_140AFDBEC
 * 0000000140AFDD3B: jmp     loc_140B00206
 * 0000000140AFDD40: mov     r13d, eax
 * 0000000140AFDD43: mov     [rbp+0A70h+var_A8C], eax
 * 0000000140AFDD46: mov     rax, [rsi+318h]
 * 0000000140AFDD4D: xor     ecx, ecx
 * 0000000140AFDD4F: call    KeGuardDispatchICall
 * 0000000140AFDD54: mov     r15, rax
 * 0000000140AFDD57: xor     eax, eax
 * 0000000140AFDD59: test    r15, r15
 * 0000000140AFDD5C: jz      loc_140AFFDAE
 * 0000000140AFDD62: mov     rdi, [rsp+0B70h+var_B20]
 * 0000000140AFDD67: mov     [rbp+0A70h+var_8A0], rax
 * 0000000140AFDD6E: lea     rdx, [rbp+0A70h+var_8A0]
 * 0000000140AFDD75: mov     rax, [rsi+310h]
 * 0000000140AFDD7C: mov     rcx, r15
 * 0000000140AFDD7F: mov     rbx, rdi
 * 0000000140AFDD82: call    KeGuardDispatchICall
 * 0000000140AFDD87: mov     r14, rax
 * 0000000140AFDD8A: test    rax, rax
 * 0000000140AFDD8D: jz      loc_140AFDEBC
 * 0000000140AFDD93: mov     edi, 6
 * 0000000140AFDD98: xor     r13d, r13d
 * 0000000140AFDD9B: mov     rax, [rsi+208h]
 * 0000000140AFDDA2: lea     rdx, [rbp+0A70h+var_640]
 * 0000000140AFDDA9: mov     rcx, r14
 * 0000000140AFDDAC: inc     r12d
 * 0000000140AFDDAF: call    KeGuardDispatchICall
 * 0000000140AFDDB4: test    rax, rax
 * 0000000140AFDDB7: jnz     loc_140AFDE91
 * 0000000140AFDDBD: test    dword ptr [rsi+990h], 40000000h
 * 0000000140AFDDC7: lea     r9d, [rax+1]
 * 0000000140AFDDCB: jz      short loc_140AFDE13
 * 0000000140AFDDCD: mov     rcx, [rsi+0A80h]
 * 0000000140AFDDD4: lea     edx, [rax+30h]
 * 0000000140AFDDD7: mov     r8, rdi
 * 0000000140AFDDDA: mov     rax, [rbx]
 * 0000000140AFDDDD: add     edx, 0FFFFFFF8h
 * 0000000140AFDDE0: mov     [rcx], rax
 * 0000000140AFDDE3: add     rbx, 8
 * 0000000140AFDDE7: add     rcx, 8
 * 0000000140AFDDEB: sub     r8, r9
 * 0000000140AFDDEE: jnz     short loc_140AFDDDA
 * 0000000140AFDDF0: test    edx, edx
 * 0000000140AFDDF2: jz      short loc_140AFDE0C
 * 0000000140AFDDF4: mov     esi, 0FFFFFFFFh
 * 0000000140AFDDF9: mov     al, [rbx]
 * 0000000140AFDDFB: add     rbx, r9
 * 0000000140AFDDFE: mov     [rcx], al
 * 0000000140AFDE00: add     rcx, r9
 * 0000000140AFDE03: add     edx, esi
 * 0000000140AFDE05: jnz     short loc_140AFDDF9
 * 0000000140AFDE07: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFDE0C: mov     rbx, [rsi+0A80h]
 * 0000000140AFDE13: mov     [rbx+18h], r14
 * 0000000140AFDE17: mov     [rbx+20h], r15
 * 0000000140AFDE1B: mov     rax, [rsi+588h]
 * 0000000140AFDE22: mov     [rax], rbx
 * 0000000140AFDE25: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140AFDE2C: mov     rax, [rsi+588h]
 * 0000000140AFDE33: mov     [rax+8], r14
 * 0000000140AFDE37: mov     dword ptr [rax+14h], 1000h
 * 0000000140AFDE3E: cmp     [rsi+8F8h], r13d
 * 0000000140AFDE45: jnz     short loc_140AFDE91
 * 0000000140AFDE47: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFDE51: xor     edx, edx
 * 0000000140AFDE53: add     rax, rsi
 * 0000000140AFDE56: mov     rcx, rsi
 * 0000000140AFDE59: mov     [rsi+900h], rax
 * 0000000140AFDE60: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFDE6A: add     rax, rbx
 * 0000000140AFDE6D: mov     [rsi+908h], rax
 * 0000000140AFDE74: movsxd  rax, dword ptr [rbx]
 * 0000000140AFDE77: mov     [rsi+910h], rax
 * 0000000140AFDE7E: mov     [rsi+918h], rdi
 * 0000000140AFDE85: mov     [rsi+8F8h], r9d
 * 0000000140AFDE8C: call    $$ba
 * 0000000140AFDE91: mov     rax, [rsi+310h]
 * 0000000140AFDE98: lea     rdx, [rbp+0A70h+var_8A0]
 * 0000000140AFDE9F: mov     rcx, r15
 * 0000000140AFDEA2: call    KeGuardDispatchICall
 * 0000000140AFDEA7: mov     r14, rax
 * 0000000140AFDEAA: test    rax, rax
 * 0000000140AFDEAD: jnz     loc_140AFDD9B
 * 0000000140AFDEB3: mov     r13d, [rbp+0A70h+var_A8C]
 * 0000000140AFDEB7: mov     rdi, [rsp+0B70h+var_B20]
 * 0000000140AFDEBC: mov     rax, [rsi+318h]
 * 0000000140AFDEC3: add     r13d, r12d
 * 0000000140AFDEC6: mov     rcx, r15
 * 0000000140AFDEC9: mov     [rbp+0A70h+var_A8C], r13d
 * 0000000140AFDECD: call    KeGuardDispatchICall
 * 0000000140AFDED2: mov     r15, rax
 * 0000000140AFDED5: xor     eax, eax
 * 0000000140AFDED7: lea     r12d, [rax+1]
 * 0000000140AFDEDB: test    r15, r15
 * 0000000140AFDEDE: jnz     loc_140AFDD67
 * 0000000140AFDEE4: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFDEEB: jmp     loc_140AFFDAE
 * 0000000140AFDEF0: mov     r13d, eax
 * 0000000140AFDEF3: mov     rax, [rsi+4E8h]
 * 0000000140AFDEFA: mov     [rbp+0A70h+var_A30], rsi
 * 0000000140AFDEFE: mov     rbx, [rax]
 * 0000000140AFDF01: mov     [rbp+0A70h+var_AB8], rbx
 * 0000000140AFDF05: test    [rsi+990h], r11d
 * 0000000140AFDF0C: jz      short loc_140AFDF15
 * 0000000140AFDF0E: xor     eax, eax
 * 0000000140AFDF10: jmp     loc_140B0020D
 * 0000000140AFDF15: mov     rcx, [rsp+0B70h+var_B20]
 * 0000000140AFDF1A: xor     edx, edx
 * 0000000140AFDF1C: mov     rax, [rcx+28h]
 * 0000000140AFDF20: test    rax, rax
 * 0000000140AFDF23: jz      loc_140AFDFB9
 * 0000000140AFDF29: mov     r13d, r12d
 * 0000000140AFDF2C: cmp     rbx, rax
 * 0000000140AFDF2F: jz      loc_140AFFDAE
 * 0000000140AFDF35: mov     [rcx+18h], rbx
 * 0000000140AFDF39: mov     rax, [rsi+588h]
 * 0000000140AFDF40: mov     [rax], rcx
 * 0000000140AFDF43: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140AFDF4A: mov     rax, [rsi+588h]
 * 0000000140AFDF51: mov     [rax+8], rbx
 * 0000000140AFDF55: mov     dword ptr [rax+14h], 1000h
 * 0000000140AFDF5C: cmp     [rsi+8F8h], edx
 * 0000000140AFDF62: jnz     loc_140AFFDAE
 * 0000000140AFDF68: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFDF72: add     rax, rsi
 * 0000000140AFDF75: mov     [rsi+900h], rax
 * 0000000140AFDF7C: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFDF86: add     rax, rcx
 * 0000000140AFDF89: mov     [rsi+908h], rax
 * 0000000140AFDF90: movsxd  rax, dword ptr [rcx]
 * 0000000140AFDF93: mov     rcx, rsi
 * 0000000140AFDF96: mov     [rsi+910h], rax
 * 0000000140AFDF9D: mov     qword ptr [rsi+918h], 5
 * 0000000140AFDFA8: mov     [rsi+8F8h], r12d
 * 0000000140AFDFAF: call    $$ba
 * 0000000140AFDFB4: jmp     loc_140AFFDAE
 * 0000000140AFDFB9: test    rbx, rbx
 * 0000000140AFDFBC: jz      loc_140AFFDAE
 * 0000000140AFDFC2: mov     rax, [rsi+200h]
 * 0000000140AFDFC9: lea     rdx, [rbp+0A70h+var_210]
 * 0000000140AFDFD0: mov     rcx, rbx
 * 0000000140AFDFD3: mov     [rbp+0A70h+var_A8C], r12d
 * 0000000140AFDFD7: mov     [rbp+0A70h+var_A48], rsi
 * 0000000140AFDFDB: call    KeGuardDispatchICall
 * 0000000140AFDFE0: mov     r12, [rbp+0A70h+BugCheckParameter2]
 * 0000000140AFDFE7: mov     r13, rax
 * 0000000140AFDFEA: mov     r15d, [rbp+0A70h+var_1FC]
 * 0000000140AFDFF1: mov     [rbp+0A70h+var_A98], rax
 * 0000000140AFDFF5: xor     eax, eax
 * 0000000140AFDFF7: mov     [rbp+0A70h+var_A90], r15d
 * 0000000140AFDFFB: mov     [rbp+0A70h+var_AF0], r12
 * 0000000140AFDFFF: test    r12, r12
 * 0000000140AFE002: jnz     short loc_140AFE01E
 * 0000000140AFE004: test    dword ptr [rsi+990h], 200000h
 * 0000000140AFE00E: jz      loc_140B0D0B7
 * 0000000140AFE014: mov     ecx, 0C000007Bh
 * 0000000140AFE019: jmp     loc_140AFFD72
 * 0000000140AFE01E: mov     ecx, 4
 * 0000000140AFE023: mov     [rbp+0A70h+var_9D8], rax
 * 0000000140AFE02A: lea     rax, [rbp+0A70h+var_9D0]
 * 0000000140AFE031: xor     edx, edx
 * 0000000140AFE033: mov     r9d, 0FFFFFFFFh
 * 0000000140AFE039: lea     r8d, [rcx-3]
 * 0000000140AFE03D: mov     [rax], dl
 * 0000000140AFE03F: add     rax, r8
 * 0000000140AFE042: add     ecx, r9d
 * 0000000140AFE045: jnz     short loc_140AFE03D
 * 0000000140AFE047: xor     eax, eax
 * 0000000140AFE049: mov     r14d, eax
 * 0000000140AFE04C: cmp     [rsi+80Ch], eax
 * 0000000140AFE052: jbe     loc_140AFE234
 * 0000000140AFE058: mov     edx, [rbp+0A70h+var_9D0]
 * 0000000140AFE05E: mov     r9d, dword ptr [rbp+0A70h+var_9D8+4]
 * 0000000140AFE065: mov     r10d, dword ptr [rbp+0A70h+var_9D8]
 * 0000000140AFE06C: mov     rax, [rsi+0A78h]
 * 0000000140AFE073: mov     rbx, rsi
 * 0000000140AFE076: test    rax, rax
 * 0000000140AFE079: cmovnz  rbx, rax
 * 0000000140AFE07D: xor     eax, eax
 * 0000000140AFE07F: mov     r11d, eax
 * 0000000140AFE082: mov     r8d, [rbx+808h]
 * 0000000140AFE089: add     r8, rbx
 * 0000000140AFE08C: test    r10d, r10d
 * 0000000140AFE08F: jz      short loc_140AFE09F
 * 0000000140AFE091: cmp     r9d, r14d
 * 0000000140AFE094: ja      short loc_140AFE09F
 * 0000000140AFE096: mov     r8d, edx
 * 0000000140AFE099: mov     r11d, r9d
 * 0000000140AFE09C: add     r8, rbx
 * 0000000140AFE09F: cmp     r11d, r14d
 * 0000000140AFE0A2: jz      loc_140AFE1C1
 * 0000000140AFE0A8: mov     r9d, r14d
 * 0000000140AFE0AB: mov     rsi, 0AAAAAAAAAAAAAAABh
 * 0000000140AFE0B5: sub     r9d, r11d
 * 0000000140AFE0B8: mov     r13d, 2
 * 0000000140AFE0BE: mov     r11d, r14d
 * 0000000140AFE0C1: mov     ecx, [r8]
 * 0000000140AFE0C4: cmp     ecx, 1Ch
 * 0000000140AFE0C7: jg      short loc_140AFE11C
 * 0000000140AFE0C9: jz      short loc_140AFE115
 * 0000000140AFE0CB: sub     ecx, 1
 * 0000000140AFE0CE: jz      short loc_140AFE137
 * 0000000140AFE0D0: sub     ecx, 6
 * 0000000140AFE0D3: jz      short loc_140AFE103
 * 0000000140AFE0D5: sub     ecx, 1
 * 0000000140AFE0D8: jz      short loc_140AFE0F3
 * 0000000140AFE0DA: sub     ecx, r13d
 * 0000000140AFE0DD: jz      short loc_140AFE0E4
 * 0000000140AFE0DF: cmp     ecx, r13d
 * 0000000140AFE0E2: jmp     short loc_140AFE12E
 * 0000000140AFE0E4: mov     eax, [r8+1Ch]
 * 0000000140AFE0E8: add     eax, 3
 * 0000000140AFE0EB: shl     eax, 4
 * 0000000140AFE0EE: jmp     loc_140AFE1A1
 * 0000000140AFE0F3: movzx   eax, word ptr [r8+20h]
 * 0000000140AFE0F8: add     eax, 37h ; '7'
 * 0000000140AFE0FB: and     eax, 0FFFFFFF8h
 * 0000000140AFE0FE: jmp     loc_140AFE1A1
 * 0000000140AFE103: mov     eax, [r8+18h]
 * 0000000140AFE107: add     eax, r13d
 * 0000000140AFE10A: lea     eax, [rax+rax*2]
 * 0000000140AFE10D: shl     eax, 3
 * 0000000140AFE110: jmp     loc_140AFE1A1
 * 0000000140AFE115: movzx   eax, word ptr [r8+28h]
 * 0000000140AFE11A: jmp     short loc_140AFE0F8
 * 0000000140AFE11C: sub     ecx, 1Eh
 * 0000000140AFE11F: jz      short loc_140AFE176
 * 0000000140AFE121: sub     ecx, 3
 * 0000000140AFE124: jz      short loc_140AFE14E
 * 0000000140AFE126: sub     ecx, 1
 * 0000000140AFE129: jz      short loc_140AFE14E
 * 0000000140AFE12B: cmp     ecx, 9
 * 0000000140AFE12E: jz      short loc_140AFE137
 * 0000000140AFE130: mov     eax, 30h ; '0'
 * 0000000140AFE135: jmp     short loc_140AFE1A1
 * 0000000140AFE137: mov     ecx, [r8+10h]
 * 0000000140AFE13B: mov     rax, rsi
 * 0000000140AFE13E: mul     rcx
 * 0000000140AFE141: shr     rdx, 3
 * 0000000140AFE145: lea     eax, ds:30h[rdx*4]
 * 0000000140AFE14C: jmp     short loc_140AFE1A1
 * 0000000140AFE14E: mov     ecx, [r8+20h]
 * 0000000140AFE152: mov     edx, [r8+28h]
 * 0000000140AFE156: and     ecx, 0FFFh
 * 0000000140AFE15C: add     rdx, 0FFFh
 * 0000000140AFE163: add     rdx, rcx
 * 0000000140AFE166: shr     rdx, 0Ch
 * 0000000140AFE16A: lea     eax, [rdx+rdx*4]
 * 0000000140AFE16D: lea     eax, ds:30h[rax*4]
 * 0000000140AFE174: jmp     short loc_140AFE1A1
 * 0000000140AFE176: mov     eax, [r8+24h]
 * 0000000140AFE17A: lea     ecx, [rax-1]
 * 0000000140AFE17D: neg     eax
 * 0000000140AFE17F: sbb     eax, eax
 * 0000000140AFE181: and     ecx, eax
 * 0000000140AFE183: mov     rax, rsi
 * 0000000140AFE186: mul     rcx
 * 0000000140AFE189: movzx   eax, word ptr [r8+28h]
 * 0000000140AFE18E: shr     rdx, 3
 * 0000000140AFE192: add     edx, 7
 * 0000000140AFE195: and     edx, 0FFFFFFF8h
 * 0000000140AFE198: add     eax, r13d
 * 0000000140AFE19B: lea     eax, [rax+rax*2]
 * 0000000140AFE19E: lea     eax, [rdx+rax*8]
 * 0000000140AFE1A1: add     r8, rax
 * 0000000140AFE1A4: mov     eax, 1
 * 0000000140AFE1A9: sub     r9, rax
 * 0000000140AFE1AC: jnz     loc_140AFE0C1
 * 0000000140AFE1B2: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFE1B7: mov     r12, [rbp+0A70h+var_AF0]
 * 0000000140AFE1BB: mov     r13, [rbp+0A70h+var_A98]
 * 0000000140AFE1BF: jmp     short loc_140AFE1C6
 * 0000000140AFE1C1: mov     eax, 1
 * 0000000140AFE1C6: mov     edx, r8d
 * 0000000140AFE1C9: mov     dword ptr [rbp+0A70h+var_9D8], eax
 * 0000000140AFE1CF: sub     edx, ebx
 * 0000000140AFE1D1: mov     dword ptr [rbp+0A70h+var_9D8+4], r11d
 * 0000000140AFE1D8: mov     [rbp+0A70h+var_9D0], edx
 * 0000000140AFE1DE: mov     r10d, eax
 * 0000000140AFE1E1: movsxd  rcx, dword ptr [r8]
 * 0000000140AFE1E4: mov     r9d, r11d
 * 0000000140AFE1E7: cmp     ecx, 2Bh ; '+'
 * 0000000140AFE1EA: ja      short loc_140AFE20C
 * 0000000140AFE1EC: mov     r11, 80000001002h
 * 0000000140AFE1F6: bt      r11, rcx
 * 0000000140AFE1FA: jnb     short loc_140AFE20C
 * 0000000140AFE1FC: cmp     [r8+8], r13
 * 0000000140AFE200: jnz     short loc_140AFE20C
 * 0000000140AFE202: cmp     [r8+10h], r15d
 * 0000000140AFE206: jz      loc_140AFE2DB
 * 0000000140AFE20C: lea     eax, [rcx-21h]
 * 0000000140AFE20F: mov     ecx, 1
 * 0000000140AFE214: cmp     eax, ecx
 * 0000000140AFE216: ja      short loc_140AFE222
 * 0000000140AFE218: cmp     [r8+20h], r12
 * 0000000140AFE21C: jz      loc_140AFE2DB
 * 0000000140AFE222: add     r14d, ecx
 * 0000000140AFE225: cmp     r14d, [rsi+80Ch]
 * 0000000140AFE22C: jb      loc_140AFE06C
 * 0000000140AFE232: xor     eax, eax
 * 0000000140AFE234: mov     [rbp+0A70h+var_A38], rax
 * 0000000140AFE238: mov     rax, [rsi+2A8h]
 * 0000000140AFE23F: mov     rcx, [rbp+0A70h+var_AB8]
 * 0000000140AFE243: call    KeGuardDispatchICall
 * 0000000140AFE248: mov     rbx, [rsi+528h]
 * 0000000140AFE24F: mov     r14d, eax
 * 0000000140AFE252: mov     [rbp+0A70h+var_ACC], eax
 * 0000000140AFE255: mov     eax, [rbp+0A70h+var_A90]
 * 0000000140AFE258: mov     dword ptr [rbp+0A70h+var_AD8], eax
 * 0000000140AFE25B: cli
 * 0000000140AFE25C: mov     rcx, gs:20h
 * 0000000140AFE265: mov     rax, [rsi+650h]
 * 0000000140AFE26C: mov     rcx, [rcx+rax]
 * 0000000140AFE270: sti
 * 0000000140AFE271: mov     rax, [rsi+168h]
 * 0000000140AFE278: call    KeGuardDispatchICall
 * 0000000140AFE27D: mov     rcx, [rsi+530h]
 * 0000000140AFE284: mov     r13d, 1
 * 0000000140AFE28A: mov     rax, [rsi+0E8h]
 * 0000000140AFE291: mov     dl, r13b
 * 0000000140AFE294: call    KeGuardDispatchICall
 * 0000000140AFE299: mov     r8, [rbx]
 * 0000000140AFE29C: cmp     r8, rbx
 * 0000000140AFE29F: jz      short loc_140AFE301
 * 0000000140AFE2A1: mov     r9, [rsi+750h]
 * 0000000140AFE2A8: mov     r10, [rsi+758h]
 * 0000000140AFE2AF: mov     r11, [rsi+760h]
 * 0000000140AFE2B6: mov     rcx, r8
 * 0000000140AFE2B9: sub     rcx, r9
 * 0000000140AFE2BC: mov     rax, [r10+rcx]
 * 0000000140AFE2C0: mov     edx, [r11+rcx]
 * 0000000140AFE2C4: add     rdx, rax
 * 0000000140AFE2C7: cmp     r12, rax
 * 0000000140AFE2CA: jb      short loc_140AFE2D1
 * 0000000140AFE2CC: cmp     r12, rdx
 * 0000000140AFE2CF: jb      short loc_140AFE2F2
 * 0000000140AFE2D1: mov     r8, [r8]
 * 0000000140AFE2D4: cmp     r8, rbx
 * 0000000140AFE2D7: jz      short loc_140AFE301
 * 0000000140AFE2D9: jmp     short loc_140AFE2B6
 * 0000000140AFE2DB: mov     [rbp+0A70h+var_A38], r8
 * 0000000140AFE2DF: test    r8, r8
 * 0000000140AFE2E2: jz      loc_140AFE238
 * 0000000140AFE2E8: mov     ecx, 0C000010Eh
 * 0000000140AFE2ED: jmp     loc_140AFFD6E
 * 0000000140AFE2F2: mov     rax, [rsi+0D8h]
 * 0000000140AFE2F9: mov     edx, r13d
 * 0000000140AFE2FC: call    KeGuardDispatchICall
 * 0000000140AFE301: mov     rcx, [rsi+530h]
 * 0000000140AFE308: mov     rax, [rsi+118h]
 * 0000000140AFE30F: call    KeGuardDispatchICall
 * 0000000140AFE314: mov     rax, [rsi+170h]
 * 0000000140AFE31B: call    KeGuardDispatchICall
 * 0000000140AFE320: test    dword ptr [rsi+990h], 40000000h
 * 0000000140AFE32A: jz      short loc_140AFE343
 * 0000000140AFE32C: mov     r8d, 9
 * 0000000140AFE332: lea     rcx, [rbp+0A70h+var_A30]
 * 0000000140AFE336: mov     rdx, r12
 * 0000000140AFE339: call    sub_140B18070
 * 0000000140AFE33E: jmp     loc_140AFFD6C
 * 0000000140AFE343: xor     eax, eax
 * 0000000140AFE345: lea     r9, [rbp+0A70h+var_A90]
 * 0000000140AFE349: mov     [rbp+0A70h+var_770], rax
 * 0000000140AFE350: xor     r8d, r8d
 * 0000000140AFE353: mov     [rbp+0A70h+var_900], eax
 * 0000000140AFE359: mov     dl, r13b
 * 0000000140AFE35C: mov     rax, [rsi+1F0h]
 * 0000000140AFE363: mov     rcx, r12
 * 0000000140AFE366: call    KeGuardDispatchICall
 * 0000000140AFE36B: mov     rdx, rax
 * 0000000140AFE36E: lea     r9, [rbp+0A70h+var_A90]
 * 0000000140AFE372: neg     rax
 * 0000000140AFE375: mov     [rbp+0A70h+var_788], rdx
 * 0000000140AFE37C: mov     r8d, 0Ch
 * 0000000140AFE382: mov     dl, r13b
 * 0000000140AFE385: sbb     ecx, ecx
 * 0000000140AFE387: and     ecx, [rbp+0A70h+var_A90]
 * 0000000140AFE38A: mov     [rbp+0A70h+var_A90], ecx
 * 0000000140AFE38D: mov     rax, [rsi+1F0h]
 * 0000000140AFE394: mov     [rbp+0A70h+var_90C], ecx
 * 0000000140AFE39A: mov     rcx, r12
 * 0000000140AFE39D: call    KeGuardDispatchICall
 * 0000000140AFE3A2: mov     rdx, rax
 * 0000000140AFE3A5: mov     [rbp+0A70h+var_AB0], rax
 * 0000000140AFE3A9: neg     rax
 * 0000000140AFE3AC: mov     [rbp+0A70h+var_780], rdx
 * 0000000140AFE3B3: mov     r15d, 0Ah
 * 0000000140AFE3B9: lea     r9, [rbp+0A70h+var_A90]
 * 0000000140AFE3BD: sbb     ecx, ecx
 * 0000000140AFE3BF: mov     r8d, r15d
 * 0000000140AFE3C2: and     ecx, [rbp+0A70h+var_A90]
 * 0000000140AFE3C5: mov     dl, r13b
 * 0000000140AFE3C8: mov     [rbp+0A70h+var_A90], ecx
 * 0000000140AFE3CB: mov     rax, [rsi+1F0h]
 * 0000000140AFE3D2: mov     [rsp+0B70h+var_B00], ecx
 * 0000000140AFE3D6: mov     [rbp+0A70h+var_908], ecx
 * 0000000140AFE3DC: mov     rcx, r12
 * 0000000140AFE3DF: call    KeGuardDispatchICall
 * 0000000140AFE3E4: mov     rdx, rax
 * 0000000140AFE3E7: neg     rax
 * 0000000140AFE3EA: mov     [rbp+0A70h+var_778], rdx
 * 0000000140AFE3F1: sbb     ecx, ecx
 * 0000000140AFE3F3: and     ecx, [rbp+0A70h+var_A90]
 * 0000000140AFE3F6: mov     [rbp+0A70h+var_A90], ecx
 * 0000000140AFE3F9: mov     rax, [rsi+1F8h]
 * 0000000140AFE400: mov     [rbp+0A70h+var_904], ecx
 * 0000000140AFE406: mov     rcx, r12
 * 0000000140AFE409: call    KeGuardDispatchICall
 * 0000000140AFE40E: mov     rbx, rax
 * 0000000140AFE411: xor     eax, eax
 * 0000000140AFE413: test    rbx, rbx
 * 0000000140AFE416: jnz     short loc_140AFE47A
 * 0000000140AFE418: test    dword ptr [rsi+990h], 200000h
 * 0000000140AFE422: jz      loc_140B0D0E2
 * 0000000140AFE428: cmp     [rsi+8F8h], eax
 * 0000000140AFE42E: jnz     short loc_140AFE470
 * 0000000140AFE430: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFE43A: mov     rcx, rsi
 * 0000000140AFE43D: add     rax, rsi
 * 0000000140AFE440: mov     [rsi+900h], rax
 * 0000000140AFE447: xor     eax, eax
 * 0000000140AFE449: mov     [rsi+908h], rax
 * 0000000140AFE450: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140AFE45B: mov     [rsi+918h], r12
 * 0000000140AFE462: mov     [rsi+8F8h], r13d
 * 0000000140AFE469: xor     edx, edx
 * 0000000140AFE46B: call    $$ba
 * 0000000140AFE470: mov     ecx, 0C000007Bh
 * 0000000140AFE475: jmp     loc_140AFFD6E
 * 0000000140AFE47A: mov     rax, [rsi+4A0h]
 * 0000000140AFE481: lea     rdx, [rbp+0A70h+var_808]
 * 0000000140AFE488: mov     rcx, r12
 * 0000000140AFE48B: call    KeGuardDispatchICall
 * 0000000140AFE490: mov     r8d, [rsi+924h]
 * 0000000140AFE497: mov     [rbp+0A70h+var_768], rax
 * 0000000140AFE49E: mov     eax, [rbp+0A70h+var_808]
 * 0000000140AFE4A4: mov     [rbp+0A70h+var_8FC], eax
 * 0000000140AFE4AA: mov     eax, [rbx+54h]
 * 0000000140AFE4AD: mov     [rbp+0A70h+var_910], eax
 * 0000000140AFE4B3: mov     eax, r14d
 * 0000000140AFE4B6: mov     r14d, [rsi+7E4h]
 * 0000000140AFE4BD: neg     eax
 * 0000000140AFE4BF: mov     [rbp+0A70h+var_790], r12
 * 0000000140AFE4C6: sbb     r9d, r9d
 * 0000000140AFE4C9: and     r9d, 0Bh
 * 0000000140AFE4CD: lea     eax, [r14+120h]
 * 0000000140AFE4D4: mov     dword ptr [rbp+0A70h+arg_8], r9d
 * 0000000140AFE4DB: cmp     eax, [rsi+0A1Ch]
 * 0000000140AFE4E1: jbe     loc_140AFE5DD
 * 0000000140AFE4E7: mov     edx, eax
 * 0000000140AFE4E9: mov     rcx, rsi
 * 0000000140AFE4EC: call    sub_140B11020
 * 0000000140AFE4F1: mov     r15, rax
 * 0000000140AFE4F4: mov     [rsp+0B70h+var_B18], rax
 * 0000000140AFE4F9: xor     eax, eax
 * 0000000140AFE4FB: test    r15, r15
 * 0000000140AFE4FE: jnz     short loc_140AFE50E
 * 0000000140AFE500: mov     [rbp+0A70h+var_A48], rax
 * 0000000140AFE504: mov     ecx, 0C000009Ah
 * 0000000140AFE509: jmp     loc_140AFFD6E
 * 0000000140AFE50E: mov     ecx, [rsi+990h]
 * 0000000140AFE514: test    cl, 4
 * 0000000140AFE517: jnz     loc_140AFE5CC
 * 0000000140AFE51D: mov     eax, [rsi+7E4h]
 * 0000000140AFE523: and     ecx, 20000000h
 * 0000000140AFE529: mov     r9, [rsi+7C8h]
 * 0000000140AFE530: neg     ecx
 * 0000000140AFE532: mov     rcx, rsi
 * 0000000140AFE535: sbb     r8d, r8d
 * 0000000140AFE538: and     r8d, [rsi+924h]
 * 0000000140AFE53F: cmp     eax, 8
 * 0000000140AFE542: jb      short loc_140AFE55C
 * 0000000140AFE544: mov     edx, eax
 * 0000000140AFE546: shr     rdx, 3
 * 0000000140AFE54A: xor     r10d, r10d
 * 0000000140AFE54D: mov     [rcx], r10
 * 0000000140AFE550: add     eax, 0FFFFFFF8h
 * 0000000140AFE553: add     rcx, 8
 * 0000000140AFE557: sub     rdx, r13
 * 0000000140AFE55A: jnz     short loc_140AFE54D
 * 0000000140AFE55C: xor     edx, edx
 * 0000000140AFE55E: test    eax, eax
 * 0000000140AFE560: jz      short loc_140AFE572
 * 0000000140AFE562: mov     r10d, 0FFFFFFFFh
 * 0000000140AFE568: mov     [rcx], dl
 * 0000000140AFE56A: add     rcx, r13
 * 0000000140AFE56D: add     eax, r10d
 * 0000000140AFE570: jnz     short loc_140AFE568
 * 0000000140AFE572: mov     ebx, [r15+924h]
 * 0000000140AFE579: mov     [r15+924h], r8d
 * 0000000140AFE580: cmp     r8d, 3
 * 0000000140AFE584: jz      short loc_140AFE5B6
 * 0000000140AFE586: test    dword ptr [r15+990h], 10000000h
 * 0000000140AFE591: jnz     short loc_140AFE5AD
 * 0000000140AFE593: test    r8d, r8d
 * 0000000140AFE596: jz      short loc_140AFE5AD
 * 0000000140AFE598: mov     rax, [r15+228h]
 * 0000000140AFE59F: lea     rcx, [r9-8]
 * 0000000140AFE5A3: mov     rdx, [rcx]
 * 0000000140AFE5A6: call    KeGuardDispatchICall
 * 0000000140AFE5AB: jmp     short loc_140AFE5C5
 * 0000000140AFE5AD: mov     rax, [r15+0F8h]
 * 0000000140AFE5B4: jmp     short loc_140AFE5BD
 * 0000000140AFE5B6: mov     rax, [r15+368h]
 * 0000000140AFE5BD: mov     rcx, r9
 * 0000000140AFE5C0: call    KeGuardDispatchICall
 * 0000000140AFE5C5: mov     [r15+924h], ebx
 * 0000000140AFE5CC: and     dword ptr [r15+990h], 0FFFFFFFBh
 * 0000000140AFE5D4: mov     r9d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140AFE5DB: jmp     short loc_140AFE5EB
 * 0000000140AFE5DD: mov     r15, rsi
 * 0000000140AFE5E0: mov     [rsp+0B70h+var_B18], rsi
 * 0000000140AFE5E5: mov     [rsi+7E4h], eax
 * 0000000140AFE5EB: mov     eax, 6
 * 0000000140AFE5F0: lea     r12, [r15+r14]
 * 0000000140AFE5F4: add     [r15+80Ch], eax
 * 0000000140AFE5FB: lea     rdi, [rbp+0A70h+var_790]
 * 0000000140AFE602: xor     r10d, r10d
 * 0000000140AFE605: mov     [rbp+0A70h+var_898], r12
 * 0000000140AFE60C: mov     [rbp+0A70h+var_A38], r12
 * 0000000140AFE610: lea     rsi, [rbp+0A70h+var_910]
 * 0000000140AFE617: mov     [rsp+0B70h+var_B08], rdi
 * 0000000140AFE61C: mov     rbx, r13
 * 0000000140AFE61F: mov     [rbp+0A70h+var_AE8], rax
 * 0000000140AFE623: mov     r13d, [rsi]
 * 0000000140AFE626: mov     rdx, rax
 * 0000000140AFE629: mov     r14, [rdi]
 * 0000000140AFE62C: mov     ecx, 30h ; '0'
 * 0000000140AFE631: mov     dword ptr [rbp+0A70h+var_AC8], r13d
 * 0000000140AFE635: mov     rax, r12
 * 0000000140AFE638: mov     [rax], r10
 * 0000000140AFE63B: add     ecx, 0FFFFFFF8h
 * 0000000140AFE63E: add     rax, 8
 * 0000000140AFE642: sub     rdx, rbx
 * 0000000140AFE645: jnz     short loc_140AFE638
 * 0000000140AFE647: test    ecx, ecx
 * 0000000140AFE649: jz      short loc_140AFE65A
 * 0000000140AFE64B: mov     edx, 0FFFFFFFFh
 * 0000000140AFE650: mov     [rax], r10b
 * 0000000140AFE653: add     rax, rbx
 * 0000000140AFE656: add     ecx, edx
 * 0000000140AFE658: jnz     short loc_140AFE650
 * 0000000140AFE65A: mov     [r12], r9d
 * 0000000140AFE65E: lea     rcx, [r14+r13]
 * 0000000140AFE662: mov     [r12+8], r14
 * 0000000140AFE667: mov     r9, r14
 * 0000000140AFE66A: mov     [r12+10h], r13d
 * 0000000140AFE66F: mov     rax, r14
 * 0000000140AFE672: add     [r15+828h], r13d
 * 0000000140AFE679: mov     r11d, [r15+814h]
 * 0000000140AFE680: mov     rbx, [r15+818h]
 * 0000000140AFE687: cmp     r14, rcx
 * 0000000140AFE68A: jnb     short loc_140AFE69C
 * 0000000140AFE68C: mov     edx, 40h ; '@'
 * 0000000140AFE691: prefetchnta byte ptr [rax]
 * 0000000140AFE694: add     rax, rdx
 * 0000000140AFE697: cmp     rax, rcx
 * 0000000140AFE69A: jb      short loc_140AFE691
 * 0000000140AFE69C: mov     r10d, r13d
 * 0000000140AFE69F: mov     r8, rbx
 * 0000000140AFE6A2: shr     r10d, 7
 * 0000000140AFE6A6: test    r10d, r10d
 * 0000000140AFE6A9: jz      short loc_140AFE720
 * 0000000140AFE6AB: mov     rdi, 7010008004002001h
 * 0000000140AFE6B5: mov     r15d, 1
 * 0000000140AFE6BB: mov     r13d, 0FFFFFFFFh
 * 0000000140AFE6C1: mov     eax, 8
 * 0000000140AFE6C6: xor     r8, [r9]
 * 0000000140AFE6C9: mov     ecx, r11d
 * 0000000140AFE6CC: rol     r8, cl
 * 0000000140AFE6CF: xor     r8, [r9+8]
 * 0000000140AFE6D3: add     r9, 10h
 * 0000000140AFE6D7: rol     r8, cl
 * 0000000140AFE6DA: sub     rax, r15
 * 0000000140AFE6DD: jnz     short loc_140AFE6C6
 * 0000000140AFE6DF: mov     rcx, r9
 * 0000000140AFE6E2: sub     rcx, r14
 * 0000000140AFE6E5: xor     rcx, rbx
 * 0000000140AFE6E8: mov     rax, rcx
 * 0000000140AFE6EB: rol     rax, 11h
 * 0000000140AFE6EF: xor     rcx, rax
 * 0000000140AFE6F2: mov     rax, rdi
 * 0000000140AFE6F5: mul     rcx
 * 0000000140AFE6F8: xor     r11d, edx
 * 0000000140AFE6FB: mov     [rbp+0A70h+var_638], rdx
 * 0000000140AFE702: xor     r11d, eax
 * 0000000140AFE705: and     r11d, 3Fh
 * 0000000140AFE709: cmovz   r11d, r15d
 * 0000000140AFE70D: add     r10d, r13d
 * 0000000140AFE710: jnz     short loc_140AFE6C1
 * 0000000140AFE712: mov     r15, [rsp+0B70h+var_B18]
 * 0000000140AFE717: mov     r13d, dword ptr [rbp+0A70h+var_AC8]
 * 0000000140AFE71B: mov     rdi, [rsp+0B70h+var_B08]
 * 0000000140AFE720: mov     edx, r13d
 * 0000000140AFE723: mov     ebx, 1
 * 0000000140AFE728: and     edx, 7Fh
 * 0000000140AFE72B: cmp     edx, 8
 * 0000000140AFE72E: jb      short loc_140AFE74B
 * 0000000140AFE730: mov     eax, edx
 * 0000000140AFE732: shr     rax, 3
 * 0000000140AFE736: xor     r8, [r9]
 * 0000000140AFE739: mov     ecx, r11d
 * 0000000140AFE73C: rol     r8, cl
 * 0000000140AFE73F: add     r9, 8
 * 0000000140AFE743: add     edx, 0FFFFFFF8h
 * 0000000140AFE746: sub     rax, rbx
 * 0000000140AFE749: jnz     short loc_140AFE736
 * 0000000140AFE74B: test    edx, edx
 * 0000000140AFE74D: jz      short loc_140AFE76F
 * 0000000140AFE74F: mov     r15d, 0FFFFFFFFh
 * 0000000140AFE755: movzx   eax, byte ptr [r9]
 * 0000000140AFE759: mov     ecx, r11d
 * 0000000140AFE75C: xor     r8, rax
 * 0000000140AFE75F: add     r9, rbx
 * 0000000140AFE762: rol     r8, cl
 * 0000000140AFE765: add     edx, r15d
 * 0000000140AFE768: jnz     short loc_140AFE755
 * 0000000140AFE76A: mov     r15, [rsp+0B70h+var_B18]
 * 0000000140AFE76F: mov     rax, r8
 * 0000000140AFE772: shr     rax, 1Fh
 * 0000000140AFE776: xor     r10d, r10d
 * 0000000140AFE779: jmp     short loc_140AFE782
 * 0000000140AFE77B: xor     r8d, eax
 * 0000000140AFE77E: shr     rax, 1Fh
 * 0000000140AFE782: test    rax, rax
 * 0000000140AFE785: jnz     short loc_140AFE77B
 * 0000000140AFE787: mov     r9d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140AFE78E: btr     r8d, 1Fh
 * 0000000140AFE793: mov     [r12+14h], r8d
 * 0000000140AFE798: add     rdi, 8
 * 0000000140AFE79C: add     [r15+828h], r13d
 * 0000000140AFE7A3: lea     r13d, [rax+4]
 * 0000000140AFE7A7: mov     r12, [rbp+0A70h+var_898]
 * 0000000140AFE7AE: lea     eax, [r13+2]
 * 0000000140AFE7B2: add     r12, 30h ; '0'
 * 0000000140AFE7B6: mov     [rsp+0B70h+var_B08], rdi
 * 0000000140AFE7BB: add     rsi, r13
 * 0000000140AFE7BE: mov     [rbp+0A70h+var_898], r12
 * 0000000140AFE7C5: sub     [rbp+0A70h+var_AE8], rbx
 * 0000000140AFE7C9: jnz     loc_140AFE623
 * 0000000140AFE7CF: mov     rbx, [rbp+0A70h+var_A38]
 * 0000000140AFE7D3: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFE7DA: mov     r12, [rbp+0A70h+var_AF0]
 * 0000000140AFE7DE: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFE7E3: mov     r14d, [rbp+0A70h+var_ACC]
 * 0000000140AFE7E7: mov     dword ptr [rbx], 2Ch ; ','
 * 0000000140AFE7ED: mov     [rbx+18h], r12
 * 0000000140AFE7F1: test    dword ptr [r15+990h], 10200000h
 * 0000000140AFE7FC: jnz     short loc_140AFE82C
 * 0000000140AFE7FE: test    r14d, r14d
 * 0000000140AFE801: jnz     short loc_140AFE831
 * 0000000140AFE803: test    dword ptr [r15+994h], 8000h
 * 0000000140AFE80E: jz      short loc_140AFE839
 * 0000000140AFE810: lea     eax, [r13-3]
 * 0000000140AFE814: mov     rdx, r12
 * 0000000140AFE817: or      [rbx+20h], eax
 * 0000000140AFE81A: mov     rcx, r15
 * 0000000140AFE81D: call    sub_140B120E0
 * 0000000140AFE822: test    eax, eax
 * 0000000140AFE824: jz      short loc_140AFE839
 * 0000000140AFE826: or      [rbx+20h], r13d
 * 0000000140AFE82A: jmp     short loc_140AFE839
 * 0000000140AFE82C: test    r14d, r14d
 * 0000000140AFE82F: jz      short loc_140AFE839
 * 0000000140AFE831: mov     eax, 2
 * 0000000140AFE836: or      [rbx+20h], eax
 * 0000000140AFE839: mov     r8d, dword ptr [rbp+0A70h+var_AD8]
 * 0000000140AFE83D: lea     rax, [rbp+0A70h+var_914]
 * 0000000140AFE844: mov     rdx, [rbp+0A70h+var_A98]
 * 0000000140AFE848: lea     rcx, [rbp+0A70h+var_A48]
 * 0000000140AFE84C: mov     [rsp+0B70h+var_B38], rax
 * 0000000140AFE851: mov     r9, r12
 * 0000000140AFE854: lea     rax, [rbp+0A70h+var_A18]
 * 0000000140AFE858: mov     [rbp+0A70h+var_A48], r15
 * 0000000140AFE85C: mov     [rsp+0B70h+var_B40], rax
 * 0000000140AFE861: mov     dword ptr [rsp+0B70h+var_B48], 9
 * 0000000140AFE869: mov     dword ptr [rsp+0B70h+BugCheckParameter4], r14d
 * 0000000140AFE86E: mov     [rbp+0A70h+var_A30], r15
 * 0000000140AFE872: call    sub_140B0F838
 * 0000000140AFE877: mov     ecx, eax
 * 0000000140AFE879: test    eax, eax
 * 0000000140AFE87B: js      loc_140AFFD6E
 * 0000000140AFE881: mov     r14, [rbp+0A70h+var_A48]
 * 0000000140AFE885: mov     rcx, [rbp+0A70h+var_A38]
 * 0000000140AFE889: mov     rax, r14
 * 0000000140AFE88C: mov     r9d, [rbp+0A70h+var_914]
 * 0000000140AFE893: sub     rax, r15
 * 0000000140AFE896: mov     r15d, [rbp+0A70h+var_A18]
 * 0000000140AFE89A: add     rcx, rax
 * 0000000140AFE89D: sub     r9d, [rbp+0A70h+var_A18]
 * 0000000140AFE8A1: add     r15, r12
 * 0000000140AFE8A4: mov     [rbp+0A70h+var_A38], rcx
 * 0000000140AFE8A8: xor     r8d, r8d
 * 0000000140AFE8AB: mov     [rbp+0A70h+var_A30], r14
 * 0000000140AFE8AF: lea     r13, [rcx+0C0h]
 * 0000000140AFE8B6: mov     ecx, 30h ; '0'
 * 0000000140AFE8BB: mov     [rsp+0B70h+var_B18], r13
 * 0000000140AFE8C0: mov     rax, r13
 * 0000000140AFE8C3: lea     edx, [rcx-2Ah]
 * 0000000140AFE8C6: lea     r10d, [rcx-2Fh]
 * 0000000140AFE8CA: mov     [rax], r8
 * 0000000140AFE8CD: add     ecx, 0FFFFFFF8h
 * 0000000140AFE8D0: add     rax, 8
 * 0000000140AFE8D4: sub     rdx, r10
 * 0000000140AFE8D7: jnz     short loc_140AFE8CA
 * 0000000140AFE8D9: mov     rdx, r10
 * 0000000140AFE8DC: test    ecx, ecx
 * 0000000140AFE8DE: jz      short loc_140AFE8F1
 * 0000000140AFE8E0: mov     r10d, 0FFFFFFFFh
 * 0000000140AFE8E6: mov     [rax], r8b
 * 0000000140AFE8E9: add     rax, rdx
 * 0000000140AFE8EC: add     ecx, r10d
 * 0000000140AFE8EF: jnz     short loc_140AFE8E6
 * 0000000140AFE8F1: mov     eax, dword ptr [rbp+0A70h+arg_8]
 * 0000000140AFE8F7: mov     r10, r15
 * 0000000140AFE8FA: mov     [r13+0], eax
 * 0000000140AFE8FE: mov     rax, r15
 * 0000000140AFE901: mov     [r13+8], r15
 * 0000000140AFE905: mov     [r13+10h], r9d
 * 0000000140AFE909: add     [r14+828h], r9d
 * 0000000140AFE910: mov     r11d, [r14+814h]
 * 0000000140AFE917: mov     r12, [r14+818h]
 * 0000000140AFE91E: mov     ecx, r9d
 * 0000000140AFE921: add     rcx, r15
 * 0000000140AFE924: cmp     r15, rcx
 * 0000000140AFE927: jnb     short loc_140AFE93A
 * 0000000140AFE929: mov     r8d, 40h ; '@'
 * 0000000140AFE92F: prefetchnta byte ptr [rax]
 * 0000000140AFE932: add     rax, r8
 * 0000000140AFE935: cmp     rax, rcx
 * 0000000140AFE938: jb      short loc_140AFE92F
 * 0000000140AFE93A: mov     ebx, r9d
 * 0000000140AFE93D: mov     r8, r12
 * 0000000140AFE940: shr     ebx, 7
 * 0000000140AFE943: test    ebx, ebx
 * 0000000140AFE945: jz      short loc_140AFE9BC
 * 0000000140AFE947: mov     edi, 0FFFFFFFFh
 * 0000000140AFE94C: mov     r13, 7010008004002001h
 * 0000000140AFE956: mov     eax, 8
 * 0000000140AFE95B: xor     r8, [r10]
 * 0000000140AFE95E: mov     ecx, r11d
 * 0000000140AFE961: rol     r8, cl
 * 0000000140AFE964: xor     r8, [r10+8]
 * 0000000140AFE968: add     r10, 10h
 * 0000000140AFE96C: rol     r8, cl
 * 0000000140AFE96F: sub     rax, rdx
 * 0000000140AFE972: jnz     short loc_140AFE95B
 * 0000000140AFE974: mov     rcx, r10
 * 0000000140AFE977: sub     rcx, r15
 * 0000000140AFE97A: xor     rcx, r12
 * 0000000140AFE97D: mov     rax, rcx
 * 0000000140AFE980: rol     rax, 11h
 * 0000000140AFE984: xor     rcx, rax
 * 0000000140AFE987: mov     rax, r13
 * 0000000140AFE98A: mul     rcx
 * 0000000140AFE98D: xor     r11d, edx
 * 0000000140AFE990: mov     [rbp+0A70h+var_630], rdx
 * 0000000140AFE997: xor     r11d, eax
 * 0000000140AFE99A: mov     edx, 1
 * 0000000140AFE99F: and     r11d, 3Fh
 * 0000000140AFE9A3: cmovz   r11d, edx
 * 0000000140AFE9A7: add     ebx, edi
 * 0000000140AFE9A9: jnz     short loc_140AFE956
 * 0000000140AFE9AB: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFE9B0: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFE9B7: mov     r13, [rsp+0B70h+var_B18]
 * 0000000140AFE9BC: and     r9d, 7Fh
 * 0000000140AFE9C0: cmp     r9d, 8
 * 0000000140AFE9C4: jb      short loc_140AFE9E3
 * 0000000140AFE9C6: mov     eax, r9d
 * 0000000140AFE9C9: shr     rax, 3
 * 0000000140AFE9CD: xor     r8, [r10]
 * 0000000140AFE9D0: mov     ecx, r11d
 * 0000000140AFE9D3: rol     r8, cl
 * 0000000140AFE9D6: add     r10, 8
 * 0000000140AFE9DA: add     r9d, 0FFFFFFF8h
 * 0000000140AFE9DE: sub     rax, rdx
 * 0000000140AFE9E1: jnz     short loc_140AFE9CD
 * 0000000140AFE9E3: test    r9d, r9d
 * 0000000140AFE9E6: jz      short loc_140AFEA07
 * 0000000140AFE9E8: mov     esi, 0FFFFFFFFh
 * 0000000140AFE9ED: movzx   eax, byte ptr [r10]
 * 0000000140AFE9F1: mov     ecx, r11d
 * 0000000140AFE9F4: xor     r8, rax
 * 0000000140AFE9F7: add     r10, rdx
 * 0000000140AFE9FA: rol     r8, cl
 * 0000000140AFE9FD: add     r9d, esi
 * 0000000140AFEA00: jnz     short loc_140AFE9ED
 * 0000000140AFEA02: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFEA07: mov     rax, r8
 * 0000000140AFEA0A: shr     rax, 1Fh
 * 0000000140AFEA0E: xor     ecx, ecx
 * 0000000140AFEA10: jmp     short loc_140AFEA19
 * 0000000140AFEA12: xor     r8d, eax
 * 0000000140AFEA15: shr     rax, 1Fh
 * 0000000140AFEA19: test    rax, rax
 * 0000000140AFEA1C: jnz     short loc_140AFEA12
 * 0000000140AFEA1E: mov     r15d, [rbp+0A70h+var_ACC]
 * 0000000140AFEA22: btr     r8d, 1Fh
 * 0000000140AFEA27: mov     [r13+14h], r8d
 * 0000000140AFEA2B: mov     rdx, [rbp+0A70h+var_A38]
 * 0000000140AFEA2F: mov     dword ptr [rdx+0F0h], 30h ; '0'
 * 0000000140AFEA39: cmp     [rdx+100h], eax
 * 0000000140AFEA3F: jz      short loc_140AFEA58
 * 0000000140AFEA41: mov     eax, [rdx+108h]
 * 0000000140AFEA47: test    r15d, r15d
 * 0000000140AFEA4A: setnz   cl
 * 0000000140AFEA4D: and     eax, 0FFFFFFFEh
 * 0000000140AFEA50: or      ecx, eax
 * 0000000140AFEA52: mov     [rdx+108h], ecx
 * 0000000140AFEA58: mov     rcx, [rbp+0A70h+var_A38]
 * 0000000140AFEA5C: mov     eax, r15d
 * 0000000140AFEA5F: add     rcx, 60h ; '`'
 * 0000000140AFEA63: mov     [rbp+0A70h+var_A30], r14
 * 0000000140AFEA67: neg     eax
 * 0000000140AFEA69: mov     [rbp+0A70h+var_998], rcx
 * 0000000140AFEA70: sbb     r12d, r12d
 * 0000000140AFEA73: neg     r12d
 * 0000000140AFEA76: add     r12d, 0Dh
 * 0000000140AFEA7A: test    rcx, rcx
 * 0000000140AFEA7D: jnz     loc_140AFED23
 * 0000000140AFEA83: mov     r15d, [r14+7E4h]
 * 0000000140AFEA8A: mov     r8d, [r14+924h]
 * 0000000140AFEA91: lea     eax, [r15+30h]
 * 0000000140AFEA95: cmp     eax, [r14+0A1Ch]
 * 0000000140AFEA9C: jbe     loc_140AFEB82
 * 0000000140AFEAA2: mov     edx, eax
 * 0000000140AFEAA4: mov     rcx, r14
 * 0000000140AFEAA7: call    sub_140B11020
 * 0000000140AFEAAC: mov     rbx, rax
 * 0000000140AFEAAF: xor     eax, eax
 * 0000000140AFEAB1: test    rbx, rbx
 * 0000000140AFEAB4: jz      loc_140AFE500
 * 0000000140AFEABA: mov     ecx, [r14+990h]
 * 0000000140AFEAC1: test    cl, 4
 * 0000000140AFEAC4: jnz     loc_140AFEB79
 * 0000000140AFEACA: mov     eax, [r14+7E4h]
 * 0000000140AFEAD1: and     ecx, 20000000h
 * 0000000140AFEAD7: mov     r8, [r14+7C8h]
 * 0000000140AFEADE: neg     ecx
 * 0000000140AFEAE0: mov     r10d, 1
 * 0000000140AFEAE6: sbb     edx, edx
 * 0000000140AFEAE8: and     edx, [r14+924h]
 * 0000000140AFEAEF: cmp     eax, 8
 * 0000000140AFEAF2: jb      short loc_140AFEB0C
 * 0000000140AFEAF4: mov     ecx, eax
 * 0000000140AFEAF6: shr     rcx, 3
 * 0000000140AFEAFA: xor     r9d, r9d
 * 0000000140AFEAFD: mov     [r14], r9
 * 0000000140AFEB00: add     eax, 0FFFFFFF8h
 * 0000000140AFEB03: add     r14, 8
 * 0000000140AFEB07: sub     rcx, r10
 * 0000000140AFEB0A: jnz     short loc_140AFEAFD
 * 0000000140AFEB0C: xor     ecx, ecx
 * 0000000140AFEB0E: test    eax, eax
 * 0000000140AFEB10: jz      short loc_140AFEB23
 * 0000000140AFEB12: mov     r9d, 0FFFFFFFFh
 * 0000000140AFEB18: mov     [r14], cl
 * 0000000140AFEB1B: add     r14, r10
 * 0000000140AFEB1E: add     eax, r9d
 * 0000000140AFEB21: jnz     short loc_140AFEB18
 * 0000000140AFEB23: mov     r14d, [rbx+924h]
 * 0000000140AFEB2A: mov     [rbx+924h], edx
 * 0000000140AFEB30: cmp     edx, 3
 * 0000000140AFEB33: jz      short loc_140AFEB63
 * 0000000140AFEB35: test    dword ptr [rbx+990h], 10000000h
 * 0000000140AFEB3F: jnz     short loc_140AFEB5A
 * 0000000140AFEB41: test    edx, edx
 * 0000000140AFEB43: jz      short loc_140AFEB5A
 * 0000000140AFEB45: mov     rax, [rbx+228h]
 * 0000000140AFEB4C: lea     rcx, [r8-8]
 * 0000000140AFEB50: mov     rdx, [rcx]
 * 0000000140AFEB53: call    KeGuardDispatchICall
 * 0000000140AFEB58: jmp     short loc_140AFEB72
 * 0000000140AFEB5A: mov     rax, [rbx+0F8h]
 * 0000000140AFEB61: jmp     short loc_140AFEB6A
 * 0000000140AFEB63: mov     rax, [rbx+368h]
 * 0000000140AFEB6A: mov     rcx, r8
 * 0000000140AFEB6D: call    KeGuardDispatchICall
 * 0000000140AFEB72: mov     [rbx+924h], r14d
 * 0000000140AFEB79: and     dword ptr [rbx+990h], 0FFFFFFFBh
 * 0000000140AFEB80: jmp     short loc_140AFEB8C
 * 0000000140AFEB82: mov     rbx, r14
 * 0000000140AFEB85: mov     [r14+7E4h], eax
 * 0000000140AFEB8C: add     r15, rbx
 * 0000000140AFEB8F: mov     r9d, 1
 * 0000000140AFEB95: add     [rbx+80Ch], r9d
 * 0000000140AFEB9C: mov     rax, r15
 * 0000000140AFEB9F: mov     [rbp+0A70h+var_800], r15
 * 0000000140AFEBA6: xor     r8d, r8d
 * 0000000140AFEBA9: lea     ecx, [r9+2Fh]
 * 0000000140AFEBAD: lea     edx, [rcx-2Ah]
 * 0000000140AFEBB0: mov     [rax], r8
 * 0000000140AFEBB3: add     ecx, 0FFFFFFF8h
 * 0000000140AFEBB6: add     rax, 8
 * 0000000140AFEBBA: sub     rdx, r9
 * 0000000140AFEBBD: jnz     short loc_140AFEBB0
 * 0000000140AFEBBF: test    ecx, ecx
 * 0000000140AFEBC1: jz      short loc_140AFEBD2
 * 0000000140AFEBC3: mov     edx, 0FFFFFFFFh
 * 0000000140AFEBC8: mov     [rax], r8b
 * 0000000140AFEBCB: add     rax, r9
 * 0000000140AFEBCE: add     ecx, edx
 * 0000000140AFEBD0: jnz     short loc_140AFEBC8
 * 0000000140AFEBD2: mov     r13, [rbp+0A70h+var_AB0]
 * 0000000140AFEBD6: mov     [r15], r12d
 * 0000000140AFEBD9: mov     r9, r13
 * 0000000140AFEBDC: mov     r12d, [rsp+0B70h+var_B00]
 * 0000000140AFEBE1: mov     [r15+8], r13
 * 0000000140AFEBE5: mov     [r15+10h], r12d
 * 0000000140AFEBE9: add     [rbx+828h], r12d
 * 0000000140AFEBF0: mov     r11d, [rbx+814h]
 * 0000000140AFEBF7: lea     rcx, [r12+r13]
 * 0000000140AFEBFB: mov     r14, [rbx+818h]
 * 0000000140AFEC02: cmp     r13, rcx
 * 0000000140AFEC05: jnb     short loc_140AFEC1A
 * 0000000140AFEC07: mov     rax, r13
 * 0000000140AFEC0A: mov     edx, 40h ; '@'
 * 0000000140AFEC0F: prefetchnta byte ptr [rax]
 * 0000000140AFEC12: add     rax, rdx
 * 0000000140AFEC15: cmp     rax, rcx
 * 0000000140AFEC18: jb      short loc_140AFEC0F
 * 0000000140AFEC1A: mov     r10d, r12d
 * 0000000140AFEC1D: mov     r8, r14
 * 0000000140AFEC20: shr     r10d, 7
 * 0000000140AFEC24: test    r10d, r10d
 * 0000000140AFEC27: jz      short loc_140AFECA0
 * 0000000140AFEC29: mov     esi, 1
 * 0000000140AFEC2E: mov     rdi, 7010008004002001h
 * 0000000140AFEC38: mov     r12d, 0FFFFFFFFh
 * 0000000140AFEC3E: mov     eax, 8
 * 0000000140AFEC43: xor     r8, [r9]
 * 0000000140AFEC46: mov     ecx, r11d
 * 0000000140AFEC49: rol     r8, cl
 * 0000000140AFEC4C: xor     r8, [r9+8]
 * 0000000140AFEC50: add     r9, 10h
 * 0000000140AFEC54: rol     r8, cl
 * 0000000140AFEC57: sub     rax, rsi
 * 0000000140AFEC5A: jnz     short loc_140AFEC43
 * 0000000140AFEC5C: mov     rcx, r9
 * 0000000140AFEC5F: sub     rcx, r13
 * 0000000140AFEC62: xor     rcx, r14
 * 0000000140AFEC65: mov     rax, rcx
 * 0000000140AFEC68: rol     rax, 11h
 * 0000000140AFEC6C: xor     rcx, rax
 * 0000000140AFEC6F: mov     rax, rdi
 * 0000000140AFEC72: mul     rcx
 * 0000000140AFEC75: xor     r11d, edx
 * 0000000140AFEC78: mov     [rbp+0A70h+var_628], rdx
 * 0000000140AFEC7F: xor     r11d, eax
 * 0000000140AFEC82: and     r11d, 3Fh
 * 0000000140AFEC86: cmovz   r11d, esi
 * 0000000140AFEC8A: add     r10d, r12d
 * 0000000140AFEC8D: jnz     short loc_140AFEC3E
 * 0000000140AFEC8F: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFEC94: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFEC9B: mov     r12d, [rsp+0B70h+var_B00]
 * 0000000140AFECA0: mov     edx, r12d
 * 0000000140AFECA3: mov     r10d, 1
 * 0000000140AFECA9: and     edx, 7Fh
 * 0000000140AFECAC: cmp     edx, 8
 * 0000000140AFECAF: jb      short loc_140AFECCC
 * 0000000140AFECB1: mov     eax, edx
 * 0000000140AFECB3: shr     rax, 3
 * 0000000140AFECB7: xor     r8, [r9]
 * 0000000140AFECBA: mov     ecx, r11d
 * 0000000140AFECBD: rol     r8, cl
 * 0000000140AFECC0: add     r9, 8
 * 0000000140AFECC4: add     edx, 0FFFFFFF8h
 * 0000000140AFECC7: sub     rax, r10
 * 0000000140AFECCA: jnz     short loc_140AFECB7
 * 0000000140AFECCC: test    edx, edx
 * 0000000140AFECCE: jz      short loc_140AFECEE
 * 0000000140AFECD0: mov     esi, 0FFFFFFFFh
 * 0000000140AFECD5: movzx   eax, byte ptr [r9]
 * 0000000140AFECD9: mov     ecx, r11d
 * 0000000140AFECDC: xor     r8, rax
 * 0000000140AFECDF: add     r9, r10
 * 0000000140AFECE2: rol     r8, cl
 * 0000000140AFECE5: add     edx, esi
 * 0000000140AFECE7: jnz     short loc_140AFECD5
 * 0000000140AFECE9: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFECEE: mov     rax, r8
 * 0000000140AFECF1: jmp     short loc_140AFECF6
 * 0000000140AFECF3: xor     r8d, eax
 * 0000000140AFECF6: shr     rax, 1Fh
 * 0000000140AFECFA: test    rax, rax
 * 0000000140AFECFD: jnz     short loc_140AFECF3
 * 0000000140AFECFF: btr     r8d, 1Fh
 * 0000000140AFED04: mov     [r15+14h], r8d
 * 0000000140AFED08: mov     rax, [rbp+0A70h+var_800]
 * 0000000140AFED0F: mov     r15d, [rbp+0A70h+var_ACC]
 * 0000000140AFED13: mov     [rbp+0A70h+var_998], rax
 * 0000000140AFED1A: add     [rbx+828h], r12d
 * 0000000140AFED21: jmp     short loc_140AFED32
 * 0000000140AFED23: mov     r13, [rbp+0A70h+var_AB0]
 * 0000000140AFED27: mov     rbx, r14
 * 0000000140AFED2A: mov     [rcx], r12d
 * 0000000140AFED2D: mov     r12d, [rsp+0B70h+var_B00]
 * 0000000140AFED32: test    dword ptr [rbx+990h], 40000000h
 * 0000000140AFED3C: jz      short loc_140AFED5C
 * 0000000140AFED3E: test    r12d, r12d
 * 0000000140AFED41: jz      short loc_140AFED5C
 * 0000000140AFED43: mov     r9, [rbp+0A70h+var_998]
 * 0000000140AFED4A: mov     r8d, r12d
 * 0000000140AFED4D: add     r9, 1Ch
 * 0000000140AFED51: mov     rdx, r13
 * 0000000140AFED54: mov     rcx, rbx
 * 0000000140AFED57: call    sub_1403F1D6C
 * 0000000140AFED5C: mov     rax, [rbp+0A70h+var_998]
 * 0000000140AFED63: xor     ecx, ecx
 * 0000000140AFED65: mov     [rbp+0A70h+var_A30], rbx
 * 0000000140AFED69: mov     [rax+18h], ecx
 * 0000000140AFED6C: lea     r12d, [rcx+1]
 * 0000000140AFED70: mov     rax, [rbp+0A70h+var_998]
 * 0000000140AFED77: or      [rax+18h], r12d
 * 0000000140AFED7B: xor     eax, eax
 * 0000000140AFED7D: mov     r14, [rbp+0A70h+var_A38]
 * 0000000140AFED81: test    r15d, r15d
 * 0000000140AFED84: setnz   cl
 * 0000000140AFED87: mov     dword ptr [r14+90h], 23h ; '#'
 * 0000000140AFED92: mov     eax, [r14+0B8h]
 * 0000000140AFED99: and     eax, 0FFFFFFFEh
 * 0000000140AFED9C: or      ecx, eax
 * 0000000140AFED9E: mov     [r14+0B8h], ecx
 * 0000000140AFEDA5: cmp     dword ptr [r14+0A0h], 94h
 * 0000000140AFEDB0: jb      loc_140AFEE44
 * 0000000140AFEDB6: mov     r12, [rbp+0A70h+var_AF0]
 * 0000000140AFEDBA: mov     rax, [rbx+1F8h]
 * 0000000140AFEDC1: mov     rcx, r12
 * 0000000140AFEDC4: mov     r15, [r14+98h]
 * 0000000140AFEDCB: call    KeGuardDispatchICall
 * 0000000140AFEDD0: xor     ecx, ecx
 * 0000000140AFEDD2: test    rax, rax
 * 0000000140AFEDD5: jnz     short loc_140AFEDE0
 * 0000000140AFEDD7: mov     [rbp+0A70h+var_A48], rcx
 * 0000000140AFEDDB: jmp     loc_140AFE504
 * 0000000140AFEDE0: mov     r8d, [rax+50h]
 * 0000000140AFEDE4: mov     edx, [r14+0B8h]
 * 0000000140AFEDEB: add     r8, r12
 * 0000000140AFEDEE: or      edx, 2
 * 0000000140AFEDF1: mov     [r14+0B8h], edx
 * 0000000140AFEDF8: mov     ecx, edx
 * 0000000140AFEDFA: mov     rax, [r15+70h]
 * 0000000140AFEDFE: cmp     rax, r12
 * 0000000140AFEE01: jb      short loc_140AFEE1C
 * 0000000140AFEE03: cmp     rax, r8
 * 0000000140AFEE06: jnb     short loc_140AFEE1C
 * 0000000140AFEE08: mov     rax, [rax]
 * 0000000140AFEE0B: or      ecx, 4
 * 0000000140AFEE0E: mov     [r14+0A8h], rax
 * 0000000140AFEE15: mov     [r14+0B8h], ecx
 * 0000000140AFEE1C: mov     rax, [r15+78h]
 * 0000000140AFEE20: cmp     rax, r12
 * 0000000140AFEE23: mov     r12d, 1
 * 0000000140AFEE29: jb      short loc_140AFEE44
 * 0000000140AFEE2B: cmp     rax, r8
 * 0000000140AFEE2E: jnb     short loc_140AFEE44
 * 0000000140AFEE30: mov     rax, [rax]
 * 0000000140AFEE33: or      ecx, 8
 * 0000000140AFEE36: mov     [r14+0B0h], rax
 * 0000000140AFEE3D: mov     [r14+0B8h], ecx
 * 0000000140AFEE44: test    dword ptr [rbx+990h], 400000h
 * 0000000140AFEE4E: mov     [rbp+0A70h+var_A48], rbx
 * 0000000140AFEE52: jz      loc_140AFFD66
 * 0000000140AFEE58: mov     r14, [rbp+0A70h+var_AF0]
 * 0000000140AFEE5C: mov     rax, [rbx+1F8h]
 * 0000000140AFEE63: mov     rcx, r14
 * 0000000140AFEE66: call    KeGuardDispatchICall
 * 0000000140AFEE6B: mov     [rsp+0B70h+var_AF8], rax
 * 0000000140AFEE70: mov     r15, rax
 * 0000000140AFEE73: test    rax, rax
 * 0000000140AFEE76: jz      loc_140AFE470
 * 0000000140AFEE7C: movzx   r10d, word ptr [r15+6]
 * 0000000140AFEE81: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140AFEE8B: mov     ecx, dword ptr [rbp+0A70h+var_AD8]
 * 0000000140AFEE8E: mul     rcx
 * 0000000140AFEE91: xor     eax, eax
 * 0000000140AFEE93: mov     word ptr [rbp+0A70h+arg_8], r10w
 * 0000000140AFEE9B: mov     r9, rdx
 * 0000000140AFEE9E: shr     r9, 3
 * 0000000140AFEEA2: mov     [rbp+0A70h+var_AE8], r9
 * 0000000140AFEEA6: test    r10w, r10w
 * 0000000140AFEEAA: jnz     short loc_140AFEF06
 * 0000000140AFEEAC: test    dword ptr [rbx+990h], 200000h
 * 0000000140AFEEB6: jz      loc_140B0D10C
 * 0000000140AFEEBC: cmp     [rbx+8F8h], eax
 * 0000000140AFEEC2: jnz     loc_140AFE470
 * 0000000140AFEEC8: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFEED2: add     rax, rbx
 * 0000000140AFEED5: mov     [rbx+900h], rax
 * 0000000140AFEEDC: xor     eax, eax
 * 0000000140AFEEDE: mov     [rbx+908h], rax
 * 0000000140AFEEE5: mov     qword ptr [rbx+910h], 10Fh
 * 0000000140AFEEF0: mov     [rbx+918h], r14
 * 0000000140AFEEF7: mov     [rbx+8F8h], r12d
 * 0000000140AFEEFE: mov     rcx, rbx
 * 0000000140AFEF01: jmp     loc_140AFE469
 * 0000000140AFEF06: mov     rdx, [rbp+0A70h+var_A98]
 * 0000000140AFEF0A: lea     r11, [r15+18h]
 * 0000000140AFEF0E: mov     eax, r9d
 * 0000000140AFEF11: mov     r13, rdx
 * 0000000140AFEF14: lea     rcx, [rax+rax*2]
 * 0000000140AFEF18: movzx   eax, word ptr [r15+14h]
 * 0000000140AFEF1D: lea     r12, [rdx+rcx*4]
 * 0000000140AFEF21: add     r11, rax
 * 0000000140AFEF24: xor     edx, edx
 * 0000000140AFEF26: mov     [rbp+0A70h+var_AB0], r12
 * 0000000140AFEF2A: mov     [rsp+0B70h+var_B18], r11
 * 0000000140AFEF2F: mov     ecx, edx
 * 0000000140AFEF31: mov     [rsp+0B70h+var_B00], edx
 * 0000000140AFEF35: mov     eax, r10d
 * 0000000140AFEF38: test    r10d, r10d
 * 0000000140AFEF3B: jz      loc_140AFF16F
 * 0000000140AFEF41: mov     r8, r11
 * 0000000140AFEF44: mov     [rsp+0B70h+var_B08], r11
 * 0000000140AFEF49: lea     r15d, [rdx+1]
 * 0000000140AFEF4D: mov     edx, [r8+10h]
 * 0000000140AFEF51: mov     eax, [r8+8]
 * 0000000140AFEF55: cmp     edx, eax
 * 0000000140AFEF57: mov     r9d, [r8+0Ch]
 * 0000000140AFEF5B: cmovbe  edx, eax
 * 0000000140AFEF5E: mov     dword ptr [rbp+0A70h+var_AC8], r9d
 * 0000000140AFEF62: add     edx, r9d
 * 0000000140AFEF65: mov     dword ptr [rbp+0A70h+var_A70], edx
 * 0000000140AFEF68: test    ecx, ecx
 * 0000000140AFEF6A: jz      short loc_140AFEF82
 * 0000000140AFEF6C: lea     eax, [rcx-1]
 * 0000000140AFEF6F: lea     rax, [rax+rax*4]
 * 0000000140AFEF73: cmp     edx, [r11+rax*8+0Ch]
 * 0000000140AFEF78: jb      loc_140AFF18C
 * 0000000140AFEF7E: mov     ecx, [rsp+0B70h+var_B00]
 * 0000000140AFEF82: cmp     r13, r12
 * 0000000140AFEF85: jz      loc_140AFF148
 * 0000000140AFEF8B: mov     ecx, [r13+0]
 * 0000000140AFEF8F: mov     eax, [r13+4]
 * 0000000140AFEF93: cmp     ecx, edx
 * 0000000140AFEF95: jnb     loc_140AFF131
 * 0000000140AFEF9B: cmp     eax, r9d
 * 0000000140AFEF9E: jbe     loc_140AFF131
 * 0000000140AFEFA4: cmp     ecx, r9d
 * 0000000140AFEFA7: jb      loc_140AFF1E5
 * 0000000140AFEFAD: cmp     eax, edx
 * 0000000140AFEFAF: ja      loc_140AFF1E5
 * 0000000140AFEFB5: mov     eax, [r13+8]
 * 0000000140AFEFB9: mov     ecx, 1
 * 0000000140AFEFBE: mov     [rbp+0A70h+var_620], r13
 * 0000000140AFEFC5: test    cl, al
 * 0000000140AFEFC7: jnz     short loc_140AFEFD5
 * 0000000140AFEFC9: mov     al, [rax+r14]
 * 0000000140AFEFCD: test    al, 20h
 * 0000000140AFEFCF: jz      loc_140AFF124
 * 0000000140AFEFD5: mov     eax, [r8+8]
 * 0000000140AFEFD9: mov     rdx, r14
 * 0000000140AFEFDC: mov     r15d, [r8+10h]
 * 0000000140AFEFE0: mov     rcx, r13
 * 0000000140AFEFE3: mov     r12d, [r8+0Ch]
 * 0000000140AFEFE7: cmp     r15d, eax
 * 0000000140AFEFEA: cmovbe  r15d, eax
 * 0000000140AFEFEE: mov     rax, [rbx+418h]
 * 0000000140AFEFF5: add     r15d, r12d
 * 0000000140AFEFF8: call    KeGuardDispatchICall
 * 0000000140AFEFFD: mov     r14, rax
 * 0000000140AFF000: cmp     [rax], r12d
 * 0000000140AFF003: jb      short loc_140AFF00B
 * 0000000140AFF005: cmp     [rax+4], r15d
 * 0000000140AFF009: jbe     short loc_140AFF07A
 * 0000000140AFF00B: mov     r8, [rbp+0A70h+var_AF0]; BugCheckParameter2
 * 0000000140AFF00F: mov     eax, 80000000h
 * 0000000140AFF014: mov     edx, r14d
 * 0000000140AFF017: sub     edx, r8d
 * 0000000140AFF01A: or      edx, eax
 * 0000000140AFF01C: xor     eax, eax
 * 0000000140AFF01E: test    dword ptr [rbx+990h], 200000h
 * 0000000140AFF028: jz      loc_140B0D186
 * 0000000140AFF02E: cmp     [rbx+8F8h], eax
 * 0000000140AFF034: jnz     short loc_140AFF07A
 * 0000000140AFF036: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFF040: xor     edx, edx
 * 0000000140AFF042: add     rax, rbx
 * 0000000140AFF045: mov     rcx, rbx
 * 0000000140AFF048: mov     [rbx+900h], rax
 * 0000000140AFF04F: xor     eax, eax
 * 0000000140AFF051: mov     [rbx+908h], rax
 * 0000000140AFF058: mov     eax, 1
 * 0000000140AFF05D: mov     qword ptr [rbx+910h], 10Fh
 * 0000000140AFF068: mov     [rbx+918h], r8
 * 0000000140AFF06F: mov     [rbx+8F8h], eax
 * 0000000140AFF075: call    $$ba
 * 0000000140AFF07A: mov     r8d, [r14]
 * 0000000140AFF07D: mov     rcx, r14
 * 0000000140AFF080: add     r8, [rbp+0A70h+var_AF0]
 * 0000000140AFF084: mov     rax, [rbx+420h]
 * 0000000140AFF08B: mov     rdx, [rbp+0A70h+var_AF0]
 * 0000000140AFF08F: call    KeGuardDispatchICall
 * 0000000140AFF094: mov     rdx, rax
 * 0000000140AFF097: cmp     [rax], r12d
 * 0000000140AFF09A: jb      short loc_140AFF0A2
 * 0000000140AFF09C: cmp     [rax+4], r15d
 * 0000000140AFF0A0: jbe     short loc_140AFF110
 * 0000000140AFF0A2: mov     r14, [rbp+0A70h+var_AF0]
 * 0000000140AFF0A6: mov     eax, 80000000h
 * 0000000140AFF0AB: sub     edx, r14d
 * 0000000140AFF0AE: or      edx, eax
 * 0000000140AFF0B0: xor     eax, eax
 * 0000000140AFF0B2: test    dword ptr [rbx+990h], 200000h
 * 0000000140AFF0BC: jz      loc_140B0D15D
 * 0000000140AFF0C2: cmp     [rbx+8F8h], eax
 * 0000000140AFF0C8: jnz     short loc_140AFF114
 * 0000000140AFF0CA: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFF0D4: xor     edx, edx
 * 0000000140AFF0D6: add     rax, rbx
 * 0000000140AFF0D9: mov     rcx, rbx
 * 0000000140AFF0DC: mov     [rbx+900h], rax
 * 0000000140AFF0E3: xor     eax, eax
 * 0000000140AFF0E5: mov     [rbx+908h], rax
 * 0000000140AFF0EC: mov     eax, 1
 * 0000000140AFF0F1: mov     qword ptr [rbx+910h], 10Fh
 * 0000000140AFF0FC: mov     [rbx+918h], r14
 * 0000000140AFF103: mov     [rbx+8F8h], eax
 * 0000000140AFF109: call    $$ba
 * 0000000140AFF10E: jmp     short loc_140AFF114
 * 0000000140AFF110: mov     r14, [rbp+0A70h+var_AF0]
 * 0000000140AFF114: mov     edx, dword ptr [rbp+0A70h+var_A70]
 * 0000000140AFF117: mov     r8, [rsp+0B70h+var_B08]
 * 0000000140AFF11C: mov     r9d, dword ptr [rbp+0A70h+var_AC8]
 * 0000000140AFF120: mov     r12, [rbp+0A70h+var_AB0]
 * 0000000140AFF124: add     r13, 0Ch
 * 0000000140AFF128: cmp     r13, r12
 * 0000000140AFF12B: jnz     loc_140AFEF8B
 * 0000000140AFF131: mov     ecx, [rsp+0B70h+var_B00]
 * 0000000140AFF135: mov     r15d, 1
 * 0000000140AFF13B: movzx   r10d, word ptr [rbp+0A70h+arg_8]
 * 0000000140AFF143: mov     r11, [rsp+0B70h+var_B18]
 * 0000000140AFF148: add     ecx, r15d
 * 0000000140AFF14B: movzx   eax, r10w
 * 0000000140AFF14F: add     r8, 28h ; '('
 * 0000000140AFF153: mov     [rsp+0B70h+var_B00], ecx
 * 0000000140AFF157: mov     [rsp+0B70h+var_B08], r8
 * 0000000140AFF15C: cmp     ecx, eax
 * 0000000140AFF15E: jb      loc_140AFEF4D
 * 0000000140AFF164: mov     r9, [rbp+0A70h+var_AE8]
 * 0000000140AFF168: xor     edx, edx
 * 0000000140AFF16A: mov     r15, [rsp+0B70h+var_AF8]
 * 0000000140AFF16F: cmp     r13, r12
 * 0000000140AFF172: jz      loc_140AFF242
 * 0000000140AFF178: test    dword ptr [rbx+990h], 200000h
 * 0000000140AFF182: jz      loc_140B0D1D7
 * 0000000140AFF188: xor     eax, eax
 * 0000000140AFF18A: jmp     short loc_140AFF1F7
 * 0000000140AFF18C: xor     eax, eax
 * 0000000140AFF18E: test    dword ptr [rbx+990h], 200000h
 * 0000000140AFF198: jz      loc_140B0D134
 * 0000000140AFF19E: cmp     [rbx+8F8h], eax
 * 0000000140AFF1A4: jnz     loc_140AFE470
 * 0000000140AFF1AA: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFF1B4: add     rax, rbx
 * 0000000140AFF1B7: mov     [rbx+900h], rax
 * 0000000140AFF1BE: xor     eax, eax
 * 0000000140AFF1C0: mov     [rbx+908h], rax
 * 0000000140AFF1C7: mov     qword ptr [rbx+910h], 10Fh
 * 0000000140AFF1D2: mov     [rbx+918h], r14
 * 0000000140AFF1D9: mov     [rbx+8F8h], r15d
 * 0000000140AFF1E0: jmp     loc_140AFEEFE
 * 0000000140AFF1E5: xor     eax, eax
 * 0000000140AFF1E7: test    dword ptr [rbx+990h], 200000h
 * 0000000140AFF1F1: jz      loc_140B0D1AC
 * 0000000140AFF1F7: cmp     [rbx+8F8h], eax
 * 0000000140AFF1FD: jnz     loc_140AFE470
 * 0000000140AFF203: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFF20D: add     rax, rbx
 * 0000000140AFF210: mov     [rbx+900h], rax
 * 0000000140AFF217: xor     eax, eax
 * 0000000140AFF219: mov     [rbx+908h], rax
 * 0000000140AFF220: mov     eax, 1
 * 0000000140AFF225: mov     qword ptr [rbx+910h], 10Fh
 * 0000000140AFF230: mov     [rbx+918h], r14
 * 0000000140AFF237: mov     [rbx+8F8h], eax
 * 0000000140AFF23D: jmp     loc_140AFEEFE
 * 0000000140AFF242: test    r9d, r9d
 * 0000000140AFF245: jz      short loc_140AFF250
 * 0000000140AFF247: lea     ecx, [r9+6]
 * 0000000140AFF24B: and     ecx, 0FFFFFFF8h
 * 0000000140AFF24E: jmp     short loc_140AFF252
 * 0000000140AFF250: mov     ecx, edx
 * 0000000140AFF252: mov     r14d, [rbx+7E4h]
 * 0000000140AFF259: lea     eax, [rax+rax*2]
 * 0000000140AFF25C: mov     r8d, [rbx+924h]
 * 0000000140AFF263: lea     eax, [rax+6]
 * 0000000140AFF266: lea     eax, [rcx+rax*8]
 * 0000000140AFF269: add     eax, r14d
 * 0000000140AFF26C: cmp     eax, [rbx+0A1Ch]
 * 0000000140AFF272: jbe     loc_140AFF369
 * 0000000140AFF278: mov     edx, eax
 * 0000000140AFF27A: mov     rcx, rbx
 * 0000000140AFF27D: call    sub_140B11020
 * 0000000140AFF282: mov     [rbp+0A70h+var_AC8], rax
 * 0000000140AFF286: mov     r11, rax
 * 0000000140AFF289: test    rax, rax
 * 0000000140AFF28C: jz      loc_140AFE504
 * 0000000140AFF292: mov     ecx, [rbx+990h]
 * 0000000140AFF298: test    cl, 4
 * 0000000140AFF29B: jnz     loc_140AFF353
 * 0000000140AFF2A1: mov     eax, [rbx+7E4h]
 * 0000000140AFF2A7: and     ecx, 20000000h
 * 0000000140AFF2AD: mov     r8, [rbx+7C8h]
 * 0000000140AFF2B4: neg     ecx
 * 0000000140AFF2B6: mov     r10d, 1
 * 0000000140AFF2BC: sbb     edx, edx
 * 0000000140AFF2BE: and     edx, [rbx+924h]
 * 0000000140AFF2C4: cmp     eax, 8
 * 0000000140AFF2C7: jb      short loc_140AFF2E1
 * 0000000140AFF2C9: mov     ecx, eax
 * 0000000140AFF2CB: shr     rcx, 3
 * 0000000140AFF2CF: xor     r9d, r9d
 * 0000000140AFF2D2: mov     [rbx], r9
 * 0000000140AFF2D5: add     eax, 0FFFFFFF8h
 * 0000000140AFF2D8: add     rbx, 8
 * 0000000140AFF2DC: sub     rcx, r10
 * 0000000140AFF2DF: jnz     short loc_140AFF2D2
 * 0000000140AFF2E1: xor     ecx, ecx
 * 0000000140AFF2E3: test    eax, eax
 * 0000000140AFF2E5: jz      short loc_140AFF2F7
 * 0000000140AFF2E7: mov     r9d, 0FFFFFFFFh
 * 0000000140AFF2ED: mov     [rbx], cl
 * 0000000140AFF2EF: add     rbx, r10
 * 0000000140AFF2F2: add     eax, r9d
 * 0000000140AFF2F5: jnz     short loc_140AFF2ED
 * 0000000140AFF2F7: mov     ebx, [r11+924h]
 * 0000000140AFF2FE: mov     [r11+924h], edx
 * 0000000140AFF305: cmp     edx, 3
 * 0000000140AFF308: jz      short loc_140AFF339
 * 0000000140AFF30A: test    dword ptr [r11+990h], 10000000h
 * 0000000140AFF315: jnz     short loc_140AFF330
 * 0000000140AFF317: test    edx, edx
 * 0000000140AFF319: jz      short loc_140AFF330
 * 0000000140AFF31B: mov     rax, [r11+228h]
 * 0000000140AFF322: lea     rcx, [r8-8]
 * 0000000140AFF326: mov     rdx, [rcx]
 * 0000000140AFF329: call    KeGuardDispatchICall
 * 0000000140AFF32E: jmp     short loc_140AFF348
 * 0000000140AFF330: mov     rax, [r11+0F8h]
 * 0000000140AFF337: jmp     short loc_140AFF340
 * 0000000140AFF339: mov     rax, [r11+368h]
 * 0000000140AFF340: mov     rcx, r8
 * 0000000140AFF343: call    KeGuardDispatchICall
 * 0000000140AFF348: mov     r11, [rbp+0A70h+var_AC8]
 * 0000000140AFF34C: mov     [r11+924h], ebx
 * 0000000140AFF353: and     dword ptr [r11+990h], 0FFFFFFFBh
 * 0000000140AFF35B: mov     r9, [rbp+0A70h+var_AE8]
 * 0000000140AFF35F: movzx   r10d, word ptr [rbp+0A70h+arg_8]
 * 0000000140AFF367: jmp     short loc_140AFF376
 * 0000000140AFF369: mov     r11, rbx
 * 0000000140AFF36C: mov     [rbp+0A70h+var_AC8], rbx
 * 0000000140AFF370: mov     [rbx+7E4h], eax
 * 0000000140AFF376: mov     r13d, 1
 * 0000000140AFF37C: lea     rdx, [r11+r14]
 * 0000000140AFF380: add     [r11+80Ch], r13d
 * 0000000140AFF387: mov     rax, rdx
 * 0000000140AFF38A: mov     [rbp+0A70h+var_7E0], rdx
 * 0000000140AFF391: xor     ebx, ebx
 * 0000000140AFF393: lea     ecx, [r13+2Fh]
 * 0000000140AFF397: lea     r8d, [r13+5]
 * 0000000140AFF39B: mov     [rax], rbx
 * 0000000140AFF39E: add     ecx, 0FFFFFFF8h
 * 0000000140AFF3A1: add     rax, 8
 * 0000000140AFF3A5: sub     r8, r13
 * 0000000140AFF3A8: jnz     short loc_140AFF39B
 * 0000000140AFF3AA: test    ecx, ecx
 * 0000000140AFF3AC: jz      short loc_140AFF3BE
 * 0000000140AFF3AE: mov     r8d, 0FFFFFFFFh
 * 0000000140AFF3B4: mov     [rax], bl
 * 0000000140AFF3B6: add     rax, r13
 * 0000000140AFF3B9: add     ecx, r8d
 * 0000000140AFF3BC: jnz     short loc_140AFF3B4
 * 0000000140AFF3BE: mov     r13, [rbp+0A70h+var_A98]
 * 0000000140AFF3C2: mov     dword ptr [rdx], 1Eh
 * 0000000140AFF3C8: mov     [rdx+8], r13
 * 0000000140AFF3CC: mov     [rdx+10h], ebx
 * 0000000140AFF3CF: mov     rcx, [r11+818h]
 * 0000000140AFF3D6: mov     rax, rcx
 * 0000000140AFF3D9: jmp     short loc_140AFF3DD
 * 0000000140AFF3DB: xor     ecx, eax
 * 0000000140AFF3DD: shr     rax, 1Fh
 * 0000000140AFF3E1: test    rax, rax
 * 0000000140AFF3E4: jnz     short loc_140AFF3DB
 * 0000000140AFF3E6: btr     ecx, 1Fh
 * 0000000140AFF3EA: mov     r8d, 0FFFEh
 * 0000000140AFF3F0: mov     [rdx+14h], ecx
 * 0000000140AFF3F3: mov     rbx, r11
 * 0000000140AFF3F6: mov     rax, [rbp+0A70h+var_7E0]
 * 0000000140AFF3FD: mov     rcx, [rbp+0A70h+var_AF0]
 * 0000000140AFF401: mov     [rbp+0A70h+var_A08], rax
 * 0000000140AFF405: mov     [rbp+0A70h+var_A48], rbx
 * 0000000140AFF409: mov     [rax+18h], rcx
 * 0000000140AFF40D: mov     ecx, [r15+50h]
 * 0000000140AFF411: mov     rax, [rbp+0A70h+var_A08]
 * 0000000140AFF415: mov     [rax+20h], ecx
 * 0000000140AFF418: mov     rax, [rbp+0A70h+var_A08]
 * 0000000140AFF41C: mov     ecx, dword ptr [rbp+0A70h+var_AD8]
 * 0000000140AFF41F: mov     [rax+24h], ecx
 * 0000000140AFF422: mov     rax, [rbp+0A70h+var_A08]
 * 0000000140AFF426: mov     [rax+28h], r10w
 * 0000000140AFF42B: xor     eax, eax
 * 0000000140AFF42D: cmp     [rbp+0A70h+var_ACC], eax
 * 0000000140AFF430: mov     ecx, eax
 * 0000000140AFF432: mov     rdx, [rbp+0A70h+var_A08]
 * 0000000140AFF436: setnz   cl
 * 0000000140AFF439: movzx   eax, word ptr [rdx+2Ah]
 * 0000000140AFF43D: and     ax, r8w
 * 0000000140AFF441: or      cx, ax
 * 0000000140AFF444: mov     [rdx+2Ah], cx
 * 0000000140AFF448: mov     rcx, [rbp+0A70h+var_A08]
 * 0000000140AFF44C: lea     rdx, [rcx+30h]
 * 0000000140AFF450: mov     [rbp+0A70h+var_AE8], rdx
 * 0000000140AFF454: test    r9d, r9d
 * 0000000140AFF457: jz      short loc_140AFF46A
 * 0000000140AFF459: lea     r14d, [r9-1]
 * 0000000140AFF45D: add     r14, 7
 * 0000000140AFF461: and     r14, 0FFFFFFFFFFFFFFF8h
 * 0000000140AFF465: add     r14, rdx
 * 0000000140AFF468: jmp     short loc_140AFF46D
 * 0000000140AFF46A: mov     r14, rdx
 * 0000000140AFF46D: movzx   eax, word ptr [rcx+28h]
 * 0000000140AFF471: mov     [rbp+0A70h+var_A70], r14
 * 0000000140AFF475: lea     rcx, [rax+rax*2]
 * 0000000140AFF479: lea     r8, [r14+rcx*8]
 * 0000000140AFF47D: mov     [rsp+0B70h+var_AF8], r8
 * 0000000140AFF482: test    r9d, r9d
 * 0000000140AFF485: jz      short loc_140AFF492
 * 0000000140AFF487: lea     rax, [r13+0Ch]
 * 0000000140AFF48B: mov     [rsp+0B70h+var_B08], rax
 * 0000000140AFF490: jmp     short loc_140AFF497
 * 0000000140AFF492: mov     [rsp+0B70h+var_B08], r12
 * 0000000140AFF497: xor     eax, eax
 * 0000000140AFF499: lea     r15d, [rax+1]
 * 0000000140AFF49D: cmp     ax, r10w
 * 0000000140AFF4A1: jnb     short loc_140AFF4DB
 * 0000000140AFF4A3: movzx   edx, r10w
 * 0000000140AFF4A7: lea     rax, [r14+8]
 * 0000000140AFF4AB: mov     r10d, 80000000h
 * 0000000140AFF4B1: lea     esi, [r15+1]
 * 0000000140AFF4B5: xor     r9d, r9d
 * 0000000140AFF4B8: mov     rcx, rsi
 * 0000000140AFF4BB: mov     [rax-8], r9d
 * 0000000140AFF4BF: mov     [rax-4], r9d
 * 0000000140AFF4C3: mov     [rax], r10d
 * 0000000140AFF4C6: add     rax, 0Ch
 * 0000000140AFF4CA: sub     rcx, r15
 * 0000000140AFF4CD: jnz     short loc_140AFF4BB
 * 0000000140AFF4CF: sub     rdx, r15
 * 0000000140AFF4D2: jnz     short loc_140AFF4B8
 * 0000000140AFF4D4: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFF4D9: xor     eax, eax
 * 0000000140AFF4DB: cmp     r14, r8
 * 0000000140AFF4DE: jz      loc_140AFFD66
 * 0000000140AFF4E4: mov     r13, [rsp+0B70h+var_B18]
 * 0000000140AFF4E9: jmp     short loc_140AFF4ED
 * 0000000140AFF4EB: xor     eax, eax
 * 0000000140AFF4ED: test    dword ptr [r13+24h], 2000000h
 * 0000000140AFF4F5: mov     r12d, eax
 * 0000000140AFF4F8: mov     [rbp+0A70h+var_ACC], eax
 * 0000000140AFF4FB: jnz     short loc_140AFF512
 * 0000000140AFF4FD: mov     eax, [r13+0]
 * 0000000140AFF501: cmp     eax, 54494E49h
 * 0000000140AFF506: jnz     short loc_140AFF51E
 * 0000000140AFF508: cmp     dword ptr [r13+4], 4742444Bh
 * 0000000140AFF510: jnz     short loc_140AFF54A
 * 0000000140AFF512: mov     r12d, r15d
 * 0000000140AFF515: mov     [rbp+0A70h+var_ACC], r15d
 * 0000000140AFF519: jmp     loc_140AFF64B
 * 0000000140AFF51E: cmp     eax, 45474150h
 * 0000000140AFF523: jnz     short loc_140AFF54A
 * 0000000140AFF525: movzx   eax, word ptr [r13+4]
 * 0000000140AFF52A: mov     ecx, 7877h
 * 0000000140AFF52F: cmp     ax, cx
 * 0000000140AFF532: jz      short loc_140AFF512
 * 0000000140AFF534: mov     ecx, 7277h
 * 0000000140AFF539: cmp     ax, cx
 * 0000000140AFF53C: jz      short loc_140AFF512
 * 0000000140AFF53E: mov     ecx, 7777h
 * 0000000140AFF543: cmp     ax, cx
 * 0000000140AFF546: jnz     short loc_140AFF55D
 * 0000000140AFF548: jmp     short loc_140AFF512
 * 0000000140AFF54A: cmp     eax, 41525245h
 * 0000000140AFF54F: jnz     short loc_140AFF55D
 * 0000000140AFF551: mov     eax, 4154h
 * 0000000140AFF556: cmp     [r13+4], ax
 * 0000000140AFF55B: jz      short loc_140AFF512
 * 0000000140AFF55D: mov     rax, [rbp+0A70h+var_AC8]
 * 0000000140AFF561: mov     r10d, 7
 * 0000000140AFF567: mov     r11, [r11+938h]
 * 0000000140AFF56E: mov     r8, r13
 * 0000000140AFF571: mov     rbx, [rax+940h]
 * 0000000140AFF578: mov     r14, [rax+948h]
 * 0000000140AFF57F: mov     r9, [rax+930h]
 * 0000000140AFF586: movzx   edx, byte ptr [r8]
 * 0000000140AFF58A: add     r8, r15
 * 0000000140AFF58D: movzx   eax, byte ptr [r9]
 * 0000000140AFF591: add     r9, r15
 * 0000000140AFF594: cmp     rdx, rax
 * 0000000140AFF597: jnz     short loc_140AFF5A8
 * 0000000140AFF599: mov     eax, 0FFFFFFFFh
 * 0000000140AFF59E: add     r10d, eax
 * 0000000140AFF5A1: jnz     short loc_140AFF586
 * 0000000140AFF5A3: jmp     loc_140AFF63C
 * 0000000140AFF5A8: mov     r8d, 8
 * 0000000140AFF5AE: mov     r9, r13
 * 0000000140AFF5B1: mov     rcx, [r9]
 * 0000000140AFF5B4: add     r9, 8
 * 0000000140AFF5B8: mov     rax, [r11]
 * 0000000140AFF5BB: add     r11, 8
 * 0000000140AFF5BF: cmp     rcx, rax
 * 0000000140AFF5C2: jnz     short loc_140AFF5F3
 * 0000000140AFF5C4: add     r8d, 0FFFFFFF8h
 * 0000000140AFF5C8: cmp     r8d, 8
 * 0000000140AFF5CC: jnb     short loc_140AFF5B1
 * 0000000140AFF5CE: test    r8d, r8d
 * 0000000140AFF5D1: jz      short loc_140AFF63C
 * 0000000140AFF5D3: mov     r10d, 0FFFFFFFFh
 * 0000000140AFF5D9: movzx   edx, byte ptr [r9]
 * 0000000140AFF5DD: add     r9, r15
 * 0000000140AFF5E0: movzx   eax, byte ptr [r11]
 * 0000000140AFF5E4: add     r11, r15
 * 0000000140AFF5E7: cmp     rdx, rax
 * 0000000140AFF5EA: jnz     short loc_140AFF5F3
 * 0000000140AFF5EC: add     r8d, r10d
 * 0000000140AFF5EF: jnz     short loc_140AFF5D9
 * 0000000140AFF5F1: jmp     short loc_140AFF63C
 * 0000000140AFF5F3: mov     r9d, 4
 * 0000000140AFF5F9: mov     r8, r13
 * 0000000140AFF5FC: mov     r10d, 0FFFFFFFFh
 * 0000000140AFF602: movzx   edx, byte ptr [r8]
 * 0000000140AFF606: add     r8, r15
 * 0000000140AFF609: movzx   eax, byte ptr [rbx]
 * 0000000140AFF60C: add     rbx, r15
 * 0000000140AFF60F: cmp     rdx, rax
 * 0000000140AFF612: jnz     short loc_140AFF61B
 * 0000000140AFF614: add     r9d, r10d
 * 0000000140AFF617: jnz     short loc_140AFF602
 * 0000000140AFF619: jmp     short loc_140AFF63C
 * 0000000140AFF61B: mov     r9d, 6
 * 0000000140AFF621: mov     r8, r13
 * 0000000140AFF624: movzx   edx, byte ptr [r8]
 * 0000000140AFF628: add     r8, r15
 * 0000000140AFF62B: movzx   eax, byte ptr [r14]
 * 0000000140AFF62F: add     r14, r15
 * 0000000140AFF632: cmp     rdx, rax
 * 0000000140AFF635: jnz     short loc_140AFF643
 * 0000000140AFF637: add     r9d, r10d
 * 0000000140AFF63A: jnz     short loc_140AFF624
 * 0000000140AFF63C: mov     r12d, r15d
 * 0000000140AFF63F: mov     [rbp+0A70h+var_ACC], r15d
 * 0000000140AFF643: mov     r14, [rbp+0A70h+var_A70]
 * 0000000140AFF647: mov     r11, [rbp+0A70h+var_AC8]
 * 0000000140AFF64B: mov     ecx, [r13+24h]
 * 0000000140AFF64F: xor     eax, eax
 * 0000000140AFF651: test    ecx, ecx
 * 0000000140AFF653: jns     short loc_140AFF65E
 * 0000000140AFF655: mov     r12d, r15d
 * 0000000140AFF658: mov     [rbp+0A70h+var_ACC], r15d
 * 0000000140AFF65C: jmp     short loc_140AFF663
 * 0000000140AFF65E: test    r12d, r12d
 * 0000000140AFF661: jz      short loc_140AFF68A
 * 0000000140AFF663: cmp     dword ptr [r13+0], 54494E49h
 * 0000000140AFF66B: jnz     short loc_140AFF68A
 * 0000000140AFF66D: cmp     dword ptr [r13+4], 4742444Bh
 * 0000000140AFF675: jnz     short loc_140AFF68A
 * 0000000140AFF677: test    dword ptr [r11+994h], 2000h
 * 0000000140AFF682: cmovnz  r12d, eax
 * 0000000140AFF686: mov     [rbp+0A70h+var_ACC], r12d
 * 0000000140AFF68A: test    dword ptr [r11+994h], 4000h
 * 0000000140AFF695: mov     r9, [rbp+0A70h+var_AF0]
 * 0000000140AFF699: jz      short loc_140AFF6BA
 * 0000000140AFF69B: bt      ecx, 1Dh
 * 0000000140AFF69F: jnb     short loc_140AFF6BA
 * 0000000140AFF6A1: cmp     r9, [r11+5E0h]
 * 0000000140AFF6A8: jz      short loc_140AFF6B3
 * 0000000140AFF6AA: cmp     r9, [r11+5E8h]
 * 0000000140AFF6B1: jnz     short loc_140AFF6BA
 * 0000000140AFF6B3: mov     r12d, r15d
 * 0000000140AFF6B6: mov     [rbp+0A70h+var_ACC], r15d
 * 0000000140AFF6BA: mov     edx, [r13+0Ch]
 * 0000000140AFF6BE: mov     r15d, [r13+10h]
 * 0000000140AFF6C2: mov     eax, [r13+8]
 * 0000000140AFF6C6: cmp     r15d, eax
 * 0000000140AFF6C9: mov     r8, [rbp+0A70h+var_AB0]
 * 0000000140AFF6CD: mov     r10, [rbp+0A70h+var_A98]
 * 0000000140AFF6D1: cmovbe  r15d, eax
 * 0000000140AFF6D5: add     r15d, edx
 * 0000000140AFF6D8: mov     dword ptr [rbp+0A70h+var_AD8], edx
 * 0000000140AFF6DB: xor     ebx, ebx
 * 0000000140AFF6DD: mov     [rsp+0B70h+var_B00], r15d
 * 0000000140AFF6E2: mov     dword ptr [rbp+0A70h+arg_8], edx
 * 0000000140AFF6E8: cmp     r10, r8
 * 0000000140AFF6EB: jz      loc_140AFF8B0
 * 0000000140AFF6F1: mov     eax, [r10]
 * 0000000140AFF6F4: mov     ecx, [r10+4]
 * 0000000140AFF6F8: mov     r13d, ecx
 * 0000000140AFF6FB: cmp     eax, edx
 * 0000000140AFF6FD: jbe     loc_140AFF8B5
 * 0000000140AFF703: mov     dword ptr [rbp+0A70h+arg_8], edx
 * 0000000140AFF709: cmp     ecx, r15d
 * 0000000140AFF70C: ja      loc_140AFF8C1
 * 0000000140AFF712: mov     dword ptr [rbp+0A70h+arg_8], edx
 * 0000000140AFF718: test    r12d, r12d
 * 0000000140AFF71B: jnz     loc_140AFF8F5
 * 0000000140AFF721: mov     [r14], edx
 * 0000000140AFF724: lea     r8, [rbp+0A70h+var_790]
 * 0000000140AFF72B: mov     [r14+4], eax
 * 0000000140AFF72F: lea     r14, [r9+rdx]
 * 0000000140AFF733: mov     r9d, eax
 * 0000000140AFF736: mov     dword ptr [rbp+0A70h+arg_8], eax
 * 0000000140AFF73C: sub     r9d, edx
 * 0000000140AFF73F: lea     rdx, [rbp+0A70h+var_910]
 * 0000000140AFF746: mov     r11d, r9d
 * 0000000140AFF749: add     r11, r14
 * 0000000140AFF74C: xor     eax, eax
 * 0000000140AFF74E: mov     r10d, eax
 * 0000000140AFF751: mov     rcx, [r8]
 * 0000000140AFF754: mov     eax, [rdx]
 * 0000000140AFF756: add     rax, rcx
 * 0000000140AFF759: cmp     r14, rax
 * 0000000140AFF75C: jnb     short loc_140AFF767
 * 0000000140AFF75E: cmp     r11, rcx
 * 0000000140AFF761: ja      loc_140AFF8A0
 * 0000000140AFF767: inc     r10d
 * 0000000140AFF76A: add     r8, 8
 * 0000000140AFF76E: add     rdx, 4
 * 0000000140AFF772: cmp     r10d, 6
 * 0000000140AFF776: jb      short loc_140AFF751
 * 0000000140AFF778: mov     rax, [rbp+0A70h+var_AC8]
 * 0000000140AFF77C: mov     rbx, r14
 * 0000000140AFF77F: add     [rax+828h], r9d
 * 0000000140AFF786: mov     r12d, [rax+814h]
 * 0000000140AFF78D: mov     r15, [rax+818h]
 * 0000000140AFF794: mov     rax, r14
 * 0000000140AFF797: cmp     r14, r11
 * 0000000140AFF79A: jnb     short loc_140AFF7AC
 * 0000000140AFF79C: mov     ecx, 40h ; '@'
 * 0000000140AFF7A1: prefetchnta byte ptr [rax]
 * 0000000140AFF7A4: add     rax, rcx
 * 0000000140AFF7A7: cmp     rax, r11
 * 0000000140AFF7AA: jb      short loc_140AFF7A1
 * 0000000140AFF7AC: mov     r10d, r9d
 * 0000000140AFF7AF: mov     r8, r15
 * 0000000140AFF7B2: shr     r10d, 7
 * 0000000140AFF7B6: mov     r11d, 1
 * 0000000140AFF7BC: test    r10d, r10d
 * 0000000140AFF7BF: jz      short loc_140AFF82E
 * 0000000140AFF7C1: mov     rdi, 7010008004002001h
 * 0000000140AFF7CB: mov     eax, 8
 * 0000000140AFF7D0: xor     r8, [rbx]
 * 0000000140AFF7D3: mov     ecx, r12d
 * 0000000140AFF7D6: rol     r8, cl
 * 0000000140AFF7D9: xor     r8, [rbx+8]
 * 0000000140AFF7DD: add     rbx, 10h
 * 0000000140AFF7E1: rol     r8, cl
 * 0000000140AFF7E4: sub     rax, r11
 * 0000000140AFF7E7: jnz     short loc_140AFF7D0
 * 0000000140AFF7E9: mov     rcx, rbx
 * 0000000140AFF7EC: sub     rcx, r14
 * 0000000140AFF7EF: xor     rcx, r15
 * 0000000140AFF7F2: mov     rax, rcx
 * 0000000140AFF7F5: rol     rax, 11h
 * 0000000140AFF7F9: xor     rcx, rax
 * 0000000140AFF7FC: mov     rax, rdi
 * 0000000140AFF7FF: mul     rcx
 * 0000000140AFF802: mov     [rbp+0A70h+var_618], rdx
 * 0000000140AFF809: xor     edx, eax
 * 0000000140AFF80B: xor     r12d, edx
 * 0000000140AFF80E: mov     edx, 0FFFFFFFFh
 * 0000000140AFF813: and     r12d, 3Fh
 * 0000000140AFF817: cmovz   r12d, r11d
 * 0000000140AFF81B: add     r10d, edx
 * 0000000140AFF81E: jnz     short loc_140AFF7CB
 * 0000000140AFF820: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFF825: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFF82C: jmp     short loc_140AFF833
 * 0000000140AFF82E: mov     edx, 0FFFFFFFFh
 * 0000000140AFF833: and     r9d, 7Fh
 * 0000000140AFF837: cmp     r9d, 8
 * 0000000140AFF83B: jb      short loc_140AFF85A
 * 0000000140AFF83D: mov     eax, r9d
 * 0000000140AFF840: shr     rax, 3
 * 0000000140AFF844: xor     r8, [rbx]
 * 0000000140AFF847: mov     ecx, r12d
 * 0000000140AFF84A: rol     r8, cl
 * 0000000140AFF84D: add     rbx, 8
 * 0000000140AFF851: add     r9d, 0FFFFFFF8h
 * 0000000140AFF855: sub     rax, r11
 * 0000000140AFF858: jnz     short loc_140AFF844
 * 0000000140AFF85A: test    r9d, r9d
 * 0000000140AFF85D: jz      short loc_140AFF873
 * 0000000140AFF85F: movzx   eax, byte ptr [rbx]
 * 0000000140AFF862: mov     ecx, r12d
 * 0000000140AFF865: xor     r8, rax
 * 0000000140AFF868: add     rbx, r11
 * 0000000140AFF86B: rol     r8, cl
 * 0000000140AFF86E: add     r9d, edx
 * 0000000140AFF871: jnz     short loc_140AFF85F
 * 0000000140AFF873: mov     rax, r8
 * 0000000140AFF876: shr     rax, 1Fh
 * 0000000140AFF87A: xor     ebx, ebx
 * 0000000140AFF87C: jmp     short loc_140AFF885
 * 0000000140AFF87E: xor     r8d, eax
 * 0000000140AFF881: shr     rax, 1Fh
 * 0000000140AFF885: test    rax, rax
 * 0000000140AFF888: jnz     short loc_140AFF87E
 * 0000000140AFF88A: mov     rax, [rbp+0A70h+var_A70]
 * 0000000140AFF88E: btr     r8d, 1Fh
 * 0000000140AFF893: mov     r15d, [rsp+0B70h+var_B00]
 * 0000000140AFF898: mov     r12d, [rbp+0A70h+var_ACC]
 * 0000000140AFF89C: mov     [rax+8], r8d
 * 0000000140AFF8A0: mov     ecx, dword ptr [rbp+0A70h+arg_8]
 * 0000000140AFF8A6: mov     r11, [rbp+0A70h+var_AC8]
 * 0000000140AFF8AA: mov     r8, [rbp+0A70h+var_AB0]
 * 0000000140AFF8AE: jmp     short loc_140AFF8C3
 * 0000000140AFF8B0: mov     eax, ebx
 * 0000000140AFF8B2: mov     r13d, ebx
 * 0000000140AFF8B5: mov     ecx, edx
 * 0000000140AFF8B7: cmp     eax, edx
 * 0000000140AFF8B9: jb      loc_140AFFB50
 * 0000000140AFF8BF: jmp     short loc_140AFF8C3
 * 0000000140AFF8C1: mov     ecx, edx
 * 0000000140AFF8C3: cmp     r13d, r15d
 * 0000000140AFF8C6: mov     r13, [rbp+0A70h+var_A98]
 * 0000000140AFF8CA: ja      loc_140AFFB5F
 * 0000000140AFF8D0: cmp     r13, r8
 * 0000000140AFF8D3: jz      loc_140AFFB5F
 * 0000000140AFF8D9: mov     r10, r13
 * 0000000140AFF8DC: mov     rax, [rsp+0B70h+var_B08]
 * 0000000140AFF8E1: mov     r13d, [rax+4]
 * 0000000140AFF8E5: cmp     r13d, r15d
 * 0000000140AFF8E8: ja      loc_140AFFB5B
 * 0000000140AFF8EE: mov     ecx, 0Ch
 * 0000000140AFF8F3: jmp     short loc_140AFF8FD
 * 0000000140AFF8F5: mov     ecx, edx
 * 0000000140AFF8F7: jmp     short loc_140AFF8DC
 * 0000000140AFF8F9: mov     r11, [rbp+0A70h+var_AC8]
 * 0000000140AFF8FD: cmp     rax, r8
 * 0000000140AFF900: jz      loc_140AFFB55
 * 0000000140AFF906: test    r12d, r12d
 * 0000000140AFF909: jz      short loc_140AFF913
 * 0000000140AFF90B: mov     r8b, 80h
 * 0000000140AFF90E: jmp     loc_140AFFB15
 * 0000000140AFF913: mov     r15d, [rax]
 * 0000000140AFF916: mov     ebx, [r10+4]
 * 0000000140AFF91A: mov     dword ptr [rbp+0A70h+arg_8], r15d
 * 0000000140AFF921: cmp     r15d, ebx
 * 0000000140AFF924: jnb     short loc_140AFF98B
 * 0000000140AFF926: xor     eax, eax
 * 0000000140AFF928: test    dword ptr [r11+990h], 200000h
 * 0000000140AFF933: jz      loc_140B0D202
 * 0000000140AFF939: cmp     [r11+8F8h], eax
 * 0000000140AFF940: jnz     short loc_140AFF98B
 * 0000000140AFF942: mov     rcx, [rbp+0A70h+var_AF0]
 * 0000000140AFF946: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFF950: add     rax, r11
 * 0000000140AFF953: xor     edx, edx
 * 0000000140AFF955: mov     [r11+900h], rax
 * 0000000140AFF95C: xor     eax, eax
 * 0000000140AFF95E: mov     [r11+908h], rax
 * 0000000140AFF965: mov     eax, 1
 * 0000000140AFF96A: mov     qword ptr [r11+910h], 10Fh
 * 0000000140AFF975: mov     [r11+918h], rcx
 * 0000000140AFF97C: mov     rcx, r11
 * 0000000140AFF97F: mov     [r11+8F8h], eax
 * 0000000140AFF986: call    $$ba
 * 0000000140AFF98B: mov     r14, rbx
 * 0000000140AFF98E: lea     rdx, [rbp+0A70h+var_910]
 * 0000000140AFF995: add     r14, [rbp+0A70h+var_AF0]
 * 0000000140AFF999: lea     r8, [rbp+0A70h+var_790]
 * 0000000140AFF9A0: mov     r9d, r15d
 * 0000000140AFF9A3: sub     r9d, ebx
 * 0000000140AFF9A6: mov     ebx, r9d
 * 0000000140AFF9A9: add     rbx, r14
 * 0000000140AFF9AC: xor     eax, eax
 * 0000000140AFF9AE: mov     r10d, eax
 * 0000000140AFF9B1: mov     rcx, [r8]
 * 0000000140AFF9B4: mov     eax, [rdx]
 * 0000000140AFF9B6: add     rax, rcx
 * 0000000140AFF9B9: cmp     r14, rax
 * 0000000140AFF9BC: jnb     short loc_140AFF9C7
 * 0000000140AFF9BE: cmp     rbx, rcx
 * 0000000140AFF9C1: ja      loc_140AFFB02
 * 0000000140AFF9C7: mov     eax, 4
 * 0000000140AFF9CC: inc     r10d
 * 0000000140AFF9CF: add     rdx, rax
 * 0000000140AFF9D2: add     r8, 8
 * 0000000140AFF9D6: cmp     r10d, 6
 * 0000000140AFF9DA: jb      short loc_140AFF9B1
 * 0000000140AFF9DC: cmp     r9d, eax
 * 0000000140AFF9DF: jb      loc_140AFFB02
 * 0000000140AFF9E5: mov     rax, [rbp+0A70h+var_AC8]
 * 0000000140AFF9E9: mov     r11, r14
 * 0000000140AFF9EC: add     [rax+828h], r9d
 * 0000000140AFF9F3: mov     r15d, [rax+814h]
 * 0000000140AFF9FA: mov     r12, [rax+818h]
 * 0000000140AFFA01: mov     rax, r14
 * 0000000140AFFA04: cmp     r14, rbx
 * 0000000140AFFA07: jnb     short loc_140AFFA19
 * 0000000140AFFA09: mov     ecx, 40h ; '@'
 * 0000000140AFFA0E: prefetchnta byte ptr [rax]
 * 0000000140AFFA11: add     rax, rcx
 * 0000000140AFFA14: cmp     rax, rbx
 * 0000000140AFFA17: jb      short loc_140AFFA0E
 * 0000000140AFFA19: mov     r10d, r9d
 * 0000000140AFFA1C: mov     r8, r12
 * 0000000140AFFA1F: shr     r10d, 7
 * 0000000140AFFA23: mov     ebx, 1
 * 0000000140AFFA28: test    r10d, r10d
 * 0000000140AFFA2B: jz      short loc_140AFFA9B
 * 0000000140AFFA2D: mov     rdi, 7010008004002001h
 * 0000000140AFFA37: mov     eax, 8
 * 0000000140AFFA3C: xor     r8, [r11]
 * 0000000140AFFA3F: mov     ecx, r15d
 * 0000000140AFFA42: rol     r8, cl
 * 0000000140AFFA45: xor     r8, [r11+8]
 * 0000000140AFFA49: add     r11, 10h
 * 0000000140AFFA4D: rol     r8, cl
 * 0000000140AFFA50: sub     rax, rbx
 * 0000000140AFFA53: jnz     short loc_140AFFA3C
 * 0000000140AFFA55: mov     rcx, r11
 * 0000000140AFFA58: sub     rcx, r14
 * 0000000140AFFA5B: xor     rcx, r12
 * 0000000140AFFA5E: mov     rax, rcx
 * 0000000140AFFA61: rol     rax, 11h
 * 0000000140AFFA65: xor     rcx, rax
 * 0000000140AFFA68: mov     rax, rdi
 * 0000000140AFFA6B: mul     rcx
 * 0000000140AFFA6E: xor     r15d, edx
 * 0000000140AFFA71: mov     [rbp+0A70h+var_610], rdx
 * 0000000140AFFA78: xor     r15d, eax
 * 0000000140AFFA7B: mov     edx, 0FFFFFFFFh
 * 0000000140AFFA80: and     r15d, 3Fh
 * 0000000140AFFA84: cmovz   r15d, ebx
 * 0000000140AFFA88: add     r10d, edx
 * 0000000140AFFA8B: jnz     short loc_140AFFA37
 * 0000000140AFFA8D: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFFA92: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AFFA99: jmp     short loc_140AFFAA0
 * 0000000140AFFA9B: mov     edx, 0FFFFFFFFh
 * 0000000140AFFAA0: and     r9d, 7Fh
 * 0000000140AFFAA4: cmp     r9d, 8
 * 0000000140AFFAA8: jb      short loc_140AFFAC7
 * 0000000140AFFAAA: mov     eax, r9d
 * 0000000140AFFAAD: shr     rax, 3
 * 0000000140AFFAB1: xor     r8, [r11]
 * 0000000140AFFAB4: mov     ecx, r15d
 * 0000000140AFFAB7: rol     r8, cl
 * 0000000140AFFABA: add     r11, 8
 * 0000000140AFFABE: add     r9d, 0FFFFFFF8h
 * 0000000140AFFAC2: sub     rax, rbx
 * 0000000140AFFAC5: jnz     short loc_140AFFAB1
 * 0000000140AFFAC7: test    r9d, r9d
 * 0000000140AFFACA: jz      short loc_140AFFAE1
 * 0000000140AFFACC: movzx   eax, byte ptr [r11]
 * 0000000140AFFAD0: mov     ecx, r15d
 * 0000000140AFFAD3: xor     r8, rax
 * 0000000140AFFAD6: add     r11, rbx
 * 0000000140AFFAD9: rol     r8, cl
 * 0000000140AFFADC: add     r9d, edx
 * 0000000140AFFADF: jnz     short loc_140AFFACC
 * 0000000140AFFAE1: mov     rax, r8
 * 0000000140AFFAE4: shr     rax, 7
 * 0000000140AFFAE8: xor     ebx, ebx
 * 0000000140AFFAEA: jmp     short loc_140AFFAF3
 * 0000000140AFFAEC: xor     r8b, al
 * 0000000140AFFAEF: shr     rax, 7
 * 0000000140AFFAF3: test    rax, rax
 * 0000000140AFFAF6: jnz     short loc_140AFFAEC
 * 0000000140AFFAF8: mov     r12d, [rbp+0A70h+var_ACC]
 * 0000000140AFFAFC: and     r8b, 7Fh
 * 0000000140AFFB00: jmp     short loc_140AFFB07
 * 0000000140AFFB02: xor     ebx, ebx
 * 0000000140AFFB04: mov     r8b, 80h
 * 0000000140AFFB07: mov     r10, [rbp+0A70h+var_A98]
 * 0000000140AFFB0B: mov     ecx, 0Ch
 * 0000000140AFFB10: mov     r15d, [rsp+0B70h+var_B00]
 * 0000000140AFFB15: mov     rax, [rbp+0A70h+var_AE8]
 * 0000000140AFFB19: add     r10, rcx
 * 0000000140AFFB1C: inc     [rbp+0A70h+var_AE8]
 * 0000000140AFFB20: mov     [rbp+0A70h+var_A98], r10
 * 0000000140AFFB24: mov     [rax], r8b
 * 0000000140AFFB27: mov     rax, [rsp+0B70h+var_B08]
 * 0000000140AFFB2C: mov     r8, [rbp+0A70h+var_AB0]
 * 0000000140AFFB30: add     rax, rcx
 * 0000000140AFFB33: mov     [rsp+0B70h+var_B08], rax
 * 0000000140AFFB38: cmp     rax, r8
 * 0000000140AFFB3B: jz      short loc_140AFFB41
 * 0000000140AFFB3D: mov     r13d, [rax+4]
 * 0000000140AFFB41: cmp     r13d, r15d
 * 0000000140AFFB44: jbe     loc_140AFF8F9
 * 0000000140AFFB4A: mov     ecx, dword ptr [rbp+0A70h+arg_8]
 * 0000000140AFFB50: mov     r13, r10
 * 0000000140AFFB53: jmp     short loc_140AFFB5F
 * 0000000140AFFB55: mov     ecx, dword ptr [rbp+0A70h+arg_8]
 * 0000000140AFFB5B: mov     r13, [rbp+0A70h+var_A98]
 * 0000000140AFFB5F: mov     r14, [rbp+0A70h+var_A70]
 * 0000000140AFFB63: test    r12d, r12d
 * 0000000140AFFB66: jnz     loc_140AFFCE9
 * 0000000140AFFB6C: cmp     ecx, r15d
 * 0000000140AFFB6F: jz      loc_140AFFCE9
 * 0000000140AFFB75: mov     rbx, [rbp+0A70h+var_AF0]
 * 0000000140AFFB79: lea     rdx, [rbp+0A70h+var_910]
 * 0000000140AFFB80: mov     [r14+0Ch], ecx
 * 0000000140AFFB84: lea     r8, [rbp+0A70h+var_790]
 * 0000000140AFFB8B: mov     [r14+10h], r15d
 * 0000000140AFFB8F: mov     r9d, r15d
 * 0000000140AFFB92: mov     eax, [r14+0Ch]
 * 0000000140AFFB96: sub     r9d, eax
 * 0000000140AFFB99: add     rbx, rax
 * 0000000140AFFB9C: mov     r11d, r9d
 * 0000000140AFFB9F: add     r11, rbx
 * 0000000140AFFBA2: xor     eax, eax
 * 0000000140AFFBA4: mov     r10d, eax
 * 0000000140AFFBA7: lea     r12d, [rax+1]
 * 0000000140AFFBAB: mov     rcx, [r8]
 * 0000000140AFFBAE: mov     eax, [rdx]
 * 0000000140AFFBB0: add     rax, rcx
 * 0000000140AFFBB3: cmp     rbx, rax
 * 0000000140AFFBB6: jnb     short loc_140AFFBC1
 * 0000000140AFFBB8: cmp     r11, rcx
 * 0000000140AFFBBB: ja      loc_140AFFCE9
 * 0000000140AFFBC1: add     r10d, r12d
 * 0000000140AFFBC4: add     r8, 8
 * 0000000140AFFBC8: add     rdx, 4
 * 0000000140AFFBCC: cmp     r10d, 6
 * 0000000140AFFBD0: jb      short loc_140AFFBAB
 * 0000000140AFFBD2: mov     rax, [rbp+0A70h+var_AC8]
 * 0000000140AFFBD6: mov     r10, rbx
 * 0000000140AFFBD9: add     [rax+828h], r9d
 * 0000000140AFFBE0: mov     r14d, [rax+814h]
 * 0000000140AFFBE7: mov     r15, [rax+818h]
 * 0000000140AFFBEE: mov     rax, rbx
 * 0000000140AFFBF1: cmp     rbx, r11
 * 0000000140AFFBF4: jnb     short loc_140AFFC06
 * 0000000140AFFBF6: mov     ecx, 40h ; '@'
 * 0000000140AFFBFB: prefetchnta byte ptr [rax]
 * 0000000140AFFBFE: add     rax, rcx
 * 0000000140AFFC01: cmp     rax, r11
 * 0000000140AFFC04: jb      short loc_140AFFBFB
 * 0000000140AFFC06: mov     r11d, r9d
 * 0000000140AFFC09: mov     r8, r15
 * 0000000140AFFC0C: shr     r11d, 7
 * 0000000140AFFC10: test    r11d, r11d
 * 0000000140AFFC13: jz      short loc_140AFFC80
 * 0000000140AFFC15: mov     r13, 7010008004002001h
 * 0000000140AFFC1F: mov     eax, 8
 * 0000000140AFFC24: xor     r8, [r10]
 * 0000000140AFFC27: mov     ecx, r14d
 * 0000000140AFFC2A: rol     r8, cl
 * 0000000140AFFC2D: xor     r8, [r10+8]
 * 0000000140AFFC31: add     r10, 10h
 * 0000000140AFFC35: rol     r8, cl
 * 0000000140AFFC38: sub     rax, r12
 * 0000000140AFFC3B: jnz     short loc_140AFFC24
 * 0000000140AFFC3D: mov     rcx, r10
 * 0000000140AFFC40: sub     rcx, rbx
 * 0000000140AFFC43: xor     rcx, r15
 * 0000000140AFFC46: mov     rax, rcx
 * 0000000140AFFC49: rol     rax, 11h
 * 0000000140AFFC4D: xor     rcx, rax
 * 0000000140AFFC50: mov     rax, r13
 * 0000000140AFFC53: mul     rcx
 * 0000000140AFFC56: xor     r14d, edx
 * 0000000140AFFC59: mov     [rbp+0A70h+var_608], rdx
 * 0000000140AFFC60: xor     r14d, eax
 * 0000000140AFFC63: mov     edx, 0FFFFFFFFh
 * 0000000140AFFC68: and     r14d, 3Fh
 * 0000000140AFFC6C: cmovz   r14d, r12d
 * 0000000140AFFC70: add     r11d, edx
 * 0000000140AFFC73: jnz     short loc_140AFFC1F
 * 0000000140AFFC75: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFFC7A: mov     r13, [rbp+0A70h+var_A98]
 * 0000000140AFFC7E: jmp     short loc_140AFFC85
 * 0000000140AFFC80: mov     edx, 0FFFFFFFFh
 * 0000000140AFFC85: and     r9d, 7Fh
 * 0000000140AFFC89: cmp     r9d, 8
 * 0000000140AFFC8D: jb      short loc_140AFFCAC
 * 0000000140AFFC8F: mov     eax, r9d
 * 0000000140AFFC92: shr     rax, 3
 * 0000000140AFFC96: xor     r8, [r10]
 * 0000000140AFFC99: mov     ecx, r14d
 * 0000000140AFFC9C: rol     r8, cl
 * 0000000140AFFC9F: add     r10, 8
 * 0000000140AFFCA3: add     r9d, 0FFFFFFF8h
 * 0000000140AFFCA7: sub     rax, r12
 * 0000000140AFFCAA: jnz     short loc_140AFFC96
 * 0000000140AFFCAC: test    r9d, r9d
 * 0000000140AFFCAF: jz      short loc_140AFFCC6
 * 0000000140AFFCB1: movzx   eax, byte ptr [r10]
 * 0000000140AFFCB5: mov     ecx, r14d
 * 0000000140AFFCB8: xor     r8, rax
 * 0000000140AFFCBB: add     r10, r12
 * 0000000140AFFCBE: rol     r8, cl
 * 0000000140AFFCC1: add     r9d, edx
 * 0000000140AFFCC4: jnz     short loc_140AFFCB1
 * 0000000140AFFCC6: mov     rax, r8
 * 0000000140AFFCC9: jmp     short loc_140AFFCCE
 * 0000000140AFFCCB: xor     r8d, eax
 * 0000000140AFFCCE: shr     rax, 1Fh
 * 0000000140AFFCD2: test    rax, rax
 * 0000000140AFFCD5: jnz     short loc_140AFFCCB
 * 0000000140AFFCD7: mov     r14, [rbp+0A70h+var_A70]
 * 0000000140AFFCDB: btr     r8d, 1Fh
 * 0000000140AFFCE0: mov     r15d, [rsp+0B70h+var_B00]
 * 0000000140AFFCE5: mov     [r14+14h], r8d
 * 0000000140AFFCE9: mov     rdx, [rbp+0A70h+var_AB0]
 * 0000000140AFFCED: cmp     r13, rdx
 * 0000000140AFFCF0: jz      short loc_140AFFD37
 * 0000000140AFFCF2: mov     eax, [r13+0]
 * 0000000140AFFCF6: mov     ecx, [r13+4]
 * 0000000140AFFCFA: cmp     eax, dword ptr [rbp+0A70h+var_AD8]
 * 0000000140AFFCFD: jb      short loc_140AFFD37
 * 0000000140AFFCFF: cmp     ecx, r15d
 * 0000000140AFFD02: ja      short loc_140AFFD37
 * 0000000140AFFD04: mov     r8, [rsp+0B70h+var_B08]
 * 0000000140AFFD09: cmp     r8, rdx
 * 0000000140AFFD0C: jz      short loc_140AFFD2B
 * 0000000140AFFD0E: mov     rax, [rbp+0A70h+var_AE8]
 * 0000000140AFFD12: mov     byte ptr [rax], 80h
 * 0000000140AFFD15: inc     rax
 * 0000000140AFFD18: mov     [rbp+0A70h+var_AE8], rax
 * 0000000140AFFD1C: mov     eax, 0Ch
 * 0000000140AFFD21: add     r8, rax
 * 0000000140AFFD24: mov     [rsp+0B70h+var_B08], r8
 * 0000000140AFFD29: jmp     short loc_140AFFD30
 * 0000000140AFFD2B: mov     eax, 0Ch
 * 0000000140AFFD30: add     r13, rax
 * 0000000140AFFD33: mov     [rbp+0A70h+var_A98], r13
 * 0000000140AFFD37: mov     r13, [rsp+0B70h+var_B18]
 * 0000000140AFFD3C: add     r14, 18h
 * 0000000140AFFD40: mov     r11, [rbp+0A70h+var_AC8]
 * 0000000140AFFD44: add     r13, 28h ; '('
 * 0000000140AFFD48: mov     r15d, 1
 * 0000000140AFFD4E: mov     [rbp+0A70h+var_A70], r14
 * 0000000140AFFD52: mov     [rsp+0B70h+var_B18], r13
 * 0000000140AFFD57: cmp     r14, [rsp+0B70h+var_AF8]
 * 0000000140AFFD5C: jnz     loc_140AFF4EB
 * 0000000140AFFD62: mov     rbx, [rbp+0A70h+var_A48]
 * 0000000140AFFD66: mov     [rbp+0A70h+var_A30], rbx
 * 0000000140AFFD6A: xor     eax, eax
 * 0000000140AFFD6C: mov     ecx, eax
 * 0000000140AFFD6E: mov     rbx, [rbp+0A70h+var_AB8]
 * 0000000140AFFD72: mov     rdx, [rsp+0B70h+var_B20]
 * 0000000140AFFD77: mov     r8d, 80000000h
 * 0000000140AFFD7D: mov     rax, [rbp+0A70h+var_A30]
 * 0000000140AFFD81: sub     rax, rsi
 * 0000000140AFFD84: mov     rsi, [rbp+0A70h+var_A30]
 * 0000000140AFFD88: add     rdx, rax
 * 0000000140AFFD8B: mov     [rsp+0B70h+var_B10], rsi
 * 0000000140AFFD90: lea     eax, [rcx+r8]
 * 0000000140AFFD94: mov     [rsp+0B70h+var_B20], rdx
 * 0000000140AFFD99: test    r8d, eax
 * 0000000140AFFD9C: jnz     short loc_140AFFDA6
 * 0000000140AFFD9E: cmp     ecx, 0C000010Eh
 * 0000000140AFFDA4: jnz     short loc_140AFFDAA
 * 0000000140AFFDA6: mov     [rdx+28h], rbx
 * 0000000140AFFDAA: mov     r13d, [rbp+0A70h+var_A8C]
 * 0000000140AFFDAE: mov     r12d, 1
 * 0000000140AFFDB4: jmp     loc_140B0020D
 * 0000000140AFFDB9: mov     rbx, r13
 * 0000000140AFFDBC: mov     [rbp+0A70h+var_A8C], eax
 * 0000000140AFFDBF: mov     r13, rax
 * 0000000140AFFDC2: mov     r15d, eax
 * 0000000140AFFDC5: mov     r12d, eax
 * 0000000140AFFDC8: mov     [rbp+0A70h+var_A14], eax
 * 0000000140AFFDCB: mov     rax, [rsi+2F8h]
 * 0000000140AFFDD2: lea     r8, [rbp+0A70h+var_938]
 * 0000000140AFFDD9: lea     rdx, [rbp+0A70h+var_A14]
 * 0000000140AFFDDD: mov     ecx, r12d
 * 0000000140AFFDE0: call    KeGuardDispatchICall
 * 0000000140AFFDE5: test    eax, eax
 * 0000000140AFFDE7: jz      loc_140AFFF2F
 * 0000000140AFFDED: mov     rax, [rsi+2D8h]
 * 0000000140AFFDF4: mov     rcx, [rbp+0A70h+var_938]
 * 0000000140AFFDFB: call    KeGuardDispatchICall
 * 0000000140AFFE00: mov     r14, rax
 * 0000000140AFFE03: test    rax, rax
 * 0000000140AFFE06: jz      short loc_140AFFDCB
 * 0000000140AFFE08: mov     rax, [rsi+2E0h]
 * 0000000140AFFE0F: mov     edi, 1
 * 0000000140AFFE14: add     r15d, edi
 * 0000000140AFFE17: mov     rcx, r14
 * 0000000140AFFE1A: mov     [rbp+0A70h+var_A8C], r15d
 * 0000000140AFFE1E: call    KeGuardDispatchICall
 * 0000000140AFFE23: mov     r15, rax
 * 0000000140AFFE26: lea     rdx, [rbp+0A70h+var_600]
 * 0000000140AFFE2D: mov     rax, [rsi+208h]
 * 0000000140AFFE34: mov     rcx, r15
 * 0000000140AFFE37: call    KeGuardDispatchICall
 * 0000000140AFFE3C: test    rax, rax
 * 0000000140AFFE3F: jz      short loc_140AFFE60
 * 0000000140AFFE41: mov     rax, [rsi+2E8h]
 * 0000000140AFFE48: mov     rdx, r14
 * 0000000140AFFE4B: mov     rcx, [rbp+0A70h+var_938]
 * 0000000140AFFE52: call    KeGuardDispatchICall
 * 0000000140AFFE57: mov     r15d, [rbp+0A70h+var_A8C]
 * 0000000140AFFE5B: jmp     loc_140AFFDCB
 * 0000000140AFFE60: test    dword ptr [rsi+990h], 40000000h
 * 0000000140AFFE6A: jz      short loc_140AFFEB5
 * 0000000140AFFE6C: mov     rcx, [rsi+0A80h]
 * 0000000140AFFE73: mov     edx, 30h ; '0'
 * 0000000140AFFE78: lea     r8d, [rdx-2Ah]
 * 0000000140AFFE7C: mov     rax, [rbx]
 * 0000000140AFFE7F: add     edx, 0FFFFFFF8h
 * 0000000140AFFE82: mov     [rcx], rax
 * 0000000140AFFE85: add     rbx, 8
 * 0000000140AFFE89: add     rcx, 8
 * 0000000140AFFE8D: sub     r8, rdi
 * 0000000140AFFE90: jnz     short loc_140AFFE7C
 * 0000000140AFFE92: test    edx, edx
 * 0000000140AFFE94: jz      short loc_140AFFEAE
 * 0000000140AFFE96: mov     esi, 0FFFFFFFFh
 * 0000000140AFFE9B: mov     al, [rbx]
 * 0000000140AFFE9D: add     rbx, rdi
 * 0000000140AFFEA0: mov     [rcx], al
 * 0000000140AFFEA2: add     rcx, rdi
 * 0000000140AFFEA5: add     edx, esi
 * 0000000140AFFEA7: jnz     short loc_140AFFE9B
 * 0000000140AFFEA9: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140AFFEAE: mov     rbx, [rsi+0A80h]
 * 0000000140AFFEB5: mov     [rbx+18h], r15
 * 0000000140AFFEB9: mov     rax, [rsi+588h]
 * 0000000140AFFEC0: mov     [rax], rbx
 * 0000000140AFFEC3: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140AFFECA: mov     rax, [rsi+588h]
 * 0000000140AFFED1: mov     [rax+8], r15
 * 0000000140AFFED5: mov     dword ptr [rax+14h], 1000h
 * 0000000140AFFEDC: xor     eax, eax
 * 0000000140AFFEDE: cmp     [rsi+8F8h], eax
 * 0000000140AFFEE4: jnz     short loc_140AFFF2F
 * 0000000140AFFEE6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AFFEF0: xor     edx, edx
 * 0000000140AFFEF2: add     rax, rsi
 * 0000000140AFFEF5: mov     rcx, rsi
 * 0000000140AFFEF8: mov     [rsi+900h], rax
 * 0000000140AFFEFF: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AFFF09: add     rax, rbx
 * 0000000140AFFF0C: mov     [rsi+908h], rax
 * 0000000140AFFF13: movsxd  rax, dword ptr [rbx]
 * 0000000140AFFF16: mov     [rsi+910h], rax
 * 0000000140AFFF1D: mov     [rsi+918h], r13
 * 0000000140AFFF24: mov     [rsi+8F8h], edi
 * 0000000140AFFF2A: call    $$ba
 * 0000000140AFFF2F: mov     r15d, [rbp+0A70h+var_A8C]
 * 0000000140AFFF33: mov     eax, 1
 * 0000000140AFFF38: add     r12d, eax
 * 0000000140AFFF3B: add     r13, rax
 * 0000000140AFFF3E: mov     eax, 0
 * 0000000140AFFF43: cmp     r12d, 3
 * 0000000140AFFF47: jb      loc_140AFFDC8
 * 0000000140AFFF4D: mov     r13d, r15d
 * 0000000140AFFF50: lea     r12d, [rax+1]
 * 0000000140AFFF54: jmp     loc_140B00206
 * 0000000140AFFF59: mov     rbx, r13
 * 0000000140AFFF5C: mov     [rbp+0A70h+var_890], rax
 * 0000000140AFFF63: mov     r13d, eax
 * 0000000140AFFF66: mov     r15, cr8
 * 0000000140AFFF6A: mov     [rbp+0A70h+arg_8], r15
 * 0000000140AFFF71: mov     eax, 0Ch
 * 0000000140AFFF76: mov     cr8, rax
 * 0000000140AFFF7A: mov     rax, [rsi+308h]
 * 0000000140AFFF81: lea     rcx, [rbp+0A70h+var_890]
 * 0000000140AFFF88: call    KeGuardDispatchICall
 * 0000000140AFFF8D: mov     r14, rax
 * 0000000140AFFF90: test    rax, rax
 * 0000000140AFFF93: jz      loc_140B000BA
 * 0000000140AFFF99: mov     rax, [rsi+208h]
 * 0000000140AFFFA0: lea     rdx, [rbp+0A70h+var_5F8]
 * 0000000140AFFFA7: mov     rcx, r14
 * 0000000140AFFFAA: add     r13d, r12d
 * 0000000140AFFFAD: call    KeGuardDispatchICall
 * 0000000140AFFFB2: test    rax, rax
 * 0000000140AFFFB5: jnz     loc_140B0008D
 * 0000000140AFFFBB: test    dword ptr [rsi+990h], 40000000h
 * 0000000140AFFFC5: jz      short loc_140B0000E
 * 0000000140AFFFC7: mov     rcx, [rsi+0A80h]
 * 0000000140AFFFCE: lea     edx, [rax+30h]
 * 0000000140AFFFD1: lea     r8d, [rax+6]
 * 0000000140AFFFD5: mov     rax, [rbx]
 * 0000000140AFFFD8: add     edx, 0FFFFFFF8h
 * 0000000140AFFFDB: mov     [rcx], rax
 * 0000000140AFFFDE: add     rbx, 8
 * 0000000140AFFFE2: add     rcx, 8
 * 0000000140AFFFE6: sub     r8, r12
 * 0000000140AFFFE9: jnz     short loc_140AFFFD5
 * 0000000140AFFFEB: test    edx, edx
 * 0000000140AFFFED: jz      short loc_140B00007
 * 0000000140AFFFEF: mov     esi, 0FFFFFFFFh
 * 0000000140AFFFF4: mov     al, [rbx]
 * 0000000140AFFFF6: add     rbx, r12
 * 0000000140AFFFF9: mov     [rcx], al
 * 0000000140AFFFFB: add     rcx, r12
 * 0000000140AFFFFE: add     edx, esi
 * 0000000140B00000: jnz     short loc_140AFFFF4
 * 0000000140B00002: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B00007: mov     rbx, [rsi+0A80h]
 * 0000000140B0000E: mov     [rbx+18h], r14
 * 0000000140B00012: mov     rax, [rsi+588h]
 * 0000000140B00019: mov     [rax], rbx
 * 0000000140B0001C: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140B00023: mov     rax, [rsi+588h]
 * 0000000140B0002A: mov     [rax+8], r14
 * 0000000140B0002E: mov     dword ptr [rax+14h], 1000h
 * 0000000140B00035: xor     eax, eax
 * 0000000140B00037: cmp     [rsi+8F8h], eax
 * 0000000140B0003D: jnz     short loc_140B0008D
 * 0000000140B0003F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B00049: xor     edx, edx
 * 0000000140B0004B: add     rax, rsi
 * 0000000140B0004E: mov     rcx, rsi
 * 0000000140B00051: mov     [rsi+900h], rax
 * 0000000140B00058: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B00062: add     rax, rbx
 * 0000000140B00065: mov     [rsi+908h], rax
 * 0000000140B0006C: movsxd  rax, dword ptr [rbx]
 * 0000000140B0006F: mov     [rsi+910h], rax
 * 0000000140B00076: mov     qword ptr [rsi+918h], 4
 * 0000000140B00081: mov     [rsi+8F8h], r12d
 * 0000000140B00088: call    $$ba
 * 0000000140B0008D: mov     rax, [rsi+308h]
 * 0000000140B00094: lea     rcx, [rbp+0A70h+var_890]
 * 0000000140B0009B: call    KeGuardDispatchICall
 * 0000000140B000A0: mov     r14, rax
 * 0000000140B000A3: test    rax, rax
 * 0000000140B000A6: jnz     loc_140AFFF99
 * 0000000140B000AC: mov     r15, [rbp+0A70h+arg_8]
 * 0000000140B000B3: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B000BA: movzx   eax, r15b
 * 0000000140B000BE: mov     cr8, rax
 * 0000000140B000C2: jmp     loc_140B0020D
 * 0000000140B000C7: mov     [rbp+0A70h+var_8D0], rax
 * 0000000140B000CE: lea     rcx, [rbp+0A70h+var_8D0]
 * 0000000140B000D5: mov     rbx, r13
 * 0000000140B000D8: mov     r13d, eax
 * 0000000140B000DB: mov     rax, [rsi+300h]
 * 0000000140B000E2: call    KeGuardDispatchICall
 * 0000000140B000E7: mov     r14, rax
 * 0000000140B000EA: test    rax, rax
 * 0000000140B000ED: jz      loc_140B0020D
 * 0000000140B000F3: mov     rax, [rsi+208h]
 * 0000000140B000FA: lea     rdx, [rbp+0A70h+var_5F0]
 * 0000000140B00101: mov     rcx, r14
 * 0000000140B00104: add     r13d, r12d
 * 0000000140B00107: call    KeGuardDispatchICall
 * 0000000140B0010C: test    rax, rax
 * 0000000140B0010F: jnz     loc_140B001E7
 * 0000000140B00115: test    dword ptr [rsi+990h], 40000000h
 * 0000000140B0011F: jz      short loc_140B00168
 * 0000000140B00121: mov     rcx, [rsi+0A80h]
 * 0000000140B00128: lea     edx, [rax+30h]
 * 0000000140B0012B: lea     r8d, [rax+6]
 * 0000000140B0012F: mov     rax, [rbx]
 * 0000000140B00132: add     edx, 0FFFFFFF8h
 * 0000000140B00135: mov     [rcx], rax
 * 0000000140B00138: add     rbx, 8
 * 0000000140B0013C: add     rcx, 8
 * 0000000140B00140: sub     r8, r12
 * 0000000140B00143: jnz     short loc_140B0012F
 * 0000000140B00145: test    edx, edx
 * 0000000140B00147: jz      short loc_140B00161
 * 0000000140B00149: mov     esi, 0FFFFFFFFh
 * 0000000140B0014E: mov     al, [rbx]
 * 0000000140B00150: add     rbx, r12
 * 0000000140B00153: mov     [rcx], al
 * 0000000140B00155: add     rcx, r12
 * 0000000140B00158: add     edx, esi
 * 0000000140B0015A: jnz     short loc_140B0014E
 * 0000000140B0015C: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B00161: mov     rbx, [rsi+0A80h]
 * 0000000140B00168: mov     [rbx+18h], r14
 * 0000000140B0016C: mov     rax, [rsi+588h]
 * 0000000140B00173: mov     [rax], rbx
 * 0000000140B00176: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140B0017D: mov     rax, [rsi+588h]
 * 0000000140B00184: mov     [rax+8], r14
 * 0000000140B00188: mov     dword ptr [rax+14h], 1000h
 * 0000000140B0018F: xor     eax, eax
 * 0000000140B00191: cmp     [rsi+8F8h], eax
 * 0000000140B00197: jnz     short loc_140B001E7
 * 0000000140B00199: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B001A3: xor     edx, edx
 * 0000000140B001A5: add     rax, rsi
 * 0000000140B001A8: mov     rcx, rsi
 * 0000000140B001AB: mov     [rsi+900h], rax
 * 0000000140B001B2: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B001BC: add     rax, rbx
 * 0000000140B001BF: mov     [rsi+908h], rax
 * 0000000140B001C6: movsxd  rax, dword ptr [rbx]
 * 0000000140B001C9: mov     [rsi+910h], rax
 * 0000000140B001D0: mov     qword ptr [rsi+918h], 3
 * 0000000140B001DB: mov     [rsi+8F8h], r12d
 * 0000000140B001E2: call    $$ba
 * 0000000140B001E7: mov     rax, [rsi+300h]
 * 0000000140B001EE: lea     rcx, [rbp+0A70h+var_8D0]
 * 0000000140B001F5: call    KeGuardDispatchICall
 * 0000000140B001FA: mov     r14, rax
 * 0000000140B001FD: test    rax, rax
 * 0000000140B00200: jnz     loc_140B000F3
 * 0000000140B00206: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0020D: shl     r13d, 0Ch
 * 0000000140B00211: add     [rsi+828h], r13d
 * 0000000140B00218: mov     eax, [rsi+828h]
 * 0000000140B0021E: add     [rsi+824h], r12d
 * 0000000140B00225: cmp     eax, [rsi+82Ch]
 * 0000000140B0022B: jge     short loc_140B00243
 * 0000000140B0022D: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B00232: mov     r11d, 40000000h
 * 0000000140B00238: jmp     loc_140AFDB9C
 * 0000000140B0023D: mov     [rsi+824h], eax
 * 0000000140B00243: mov     [rsp+0B70h+var_B10], rsi
 * 0000000140B00248: jmp     loc_140AFB148
 * 0000000140B0024D: mov     edx, [r13+2Ch]
 * 0000000140B00251: lea     rcx, [rbp+0A70h+var_2F0]
 * 0000000140B00258: mov     rax, [rsi+1A0h]
 * 0000000140B0025F: mov     ebx, [r13+28h]
 * 0000000140B00263: call    KeGuardDispatchICall
 * 0000000140B00268: mov     rax, [rsi+1D0h]
 * 0000000140B0026F: lea     rdx, [rbp+0A70h+var_1A0]
 * 0000000140B00276: lea     rcx, [rbp+0A70h+var_2F0]
 * 0000000140B0027D: call    KeGuardDispatchICall
 * 0000000140B00282: test    ebx, ebx
 * 0000000140B00284: mov     rbx, cr4
 * 0000000140B00287: jnz     short loc_140B0028C
 * 0000000140B00289: mov     rbx, cr0
 * 0000000140B0028C: lea     rcx, [rbp+0A70h+var_1A0]
 * 0000000140B00293: mov     rax, [rsi+198h]
 * 0000000140B0029A: call    KeGuardDispatchICall
 * 0000000140B0029F: mov     r8, [r13+18h]
 * 0000000140B002A3: mov     rdx, [r13+20h]
 * 0000000140B002A7: and     r8, rbx
 * 0000000140B002AA: cmp     r8, rdx
 * 0000000140B002AD: jz      loc_140AFB39B
 * 0000000140B002B3: mov     eax, [r13+28h]
 * 0000000140B002B7: mov     ecx, [r13+2Ch]
 * 0000000140B002BB: shl     rcx, 20h
 * 0000000140B002BF: or      rcx, rax
 * 0000000140B002C2: xor     eax, eax
 * 0000000140B002C4: cmp     [rsi+8F8h], eax
 * 0000000140B002CA: jnz     loc_140AFB050
 * 0000000140B002D0: mov     rax, [rsi+588h]
 * 0000000140B002D7: xor     rdx, r8
 * 0000000140B002DA: mov     [rax+18h], rdx
 * 0000000140B002DE: jmp     loc_140AFB3D3
 * 0000000140B002E3: cmp     dword ptr [rsi+958h], 0Bh
 * 0000000140B002EA: jnz     loc_140AFB39B
 * 0000000140B002F0: add     dword ptr [rsi+828h], 100h
 * 0000000140B002FA: mov     r15, [rsi+580h]
 * 0000000140B00301: mov     rax, [rsi+2D8h]
 * 0000000140B00308: mov     rcx, r15
 * 0000000140B0030B: call    KeGuardDispatchICall
 * 0000000140B00310: mov     r14, rax
 * 0000000140B00313: xor     eax, eax
 * 0000000140B00315: test    r14, r14
 * 0000000140B00318: jz      loc_140AFB050
 * 0000000140B0031E: mov     rax, [rsi+2E0h]
 * 0000000140B00325: mov     rcx, r14
 * 0000000140B00328: call    KeGuardDispatchICall
 * 0000000140B0032D: mov     rbx, rax
 * 0000000140B00330: xor     r8d, r8d
 * 0000000140B00333: mov     rax, [r13+18h]
 * 0000000140B00337: test    rax, rax
 * 0000000140B0033A: jz      short loc_140B003A6
 * 0000000140B0033C: lea     r12d, [r8+1]
 * 0000000140B00340: cmp     rax, rbx
 * 0000000140B00343: jz      loc_140B0042F
 * 0000000140B00349: cmp     [rsi+8F8h], r8d
 * 0000000140B00350: jnz     loc_140B0042F
 * 0000000140B00356: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B00360: xor     edx, edx
 * 0000000140B00362: add     rax, rsi
 * 0000000140B00365: mov     rcx, rsi
 * 0000000140B00368: mov     [rsi+900h], rax
 * 0000000140B0036F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B00379: add     rax, r13
 * 0000000140B0037C: mov     [rsi+908h], rax
 * 0000000140B00383: movsxd  rax, dword ptr [r13+0]
 * 0000000140B00387: mov     [rsi+910h], rax
 * 0000000140B0038E: mov     [rsi+918h], rbx
 * 0000000140B00395: mov     [rsi+8F8h], r12d
 * 0000000140B0039C: call    $$ba
 * 0000000140B003A1: jmp     loc_140B0042F
 * 0000000140B003A6: mov     eax, [rsi+974h]
 * 0000000140B003AC: mov     rcx, [rsi+978h]
 * 0000000140B003B3: test    rax, rax
 * 0000000140B003B6: jz      short loc_140B003C9
 * 0000000140B003B8: lea     rdx, [rax-1]
 * 0000000140B003BC: add     rdx, rcx
 * 0000000140B003BF: cmp     rbx, rcx
 * 0000000140B003C2: jb      short loc_140B003C9
 * 0000000140B003C4: cmp     rbx, rdx
 * 0000000140B003C7: jbe     short loc_140B00425
 * 0000000140B003C9: mov     r12d, 1
 * 0000000140B003CF: cmp     [rsi+8F8h], r8d
 * 0000000140B003D6: jnz     short loc_140B0042B
 * 0000000140B003D8: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B003E2: xor     edx, edx
 * 0000000140B003E4: add     rax, rsi
 * 0000000140B003E7: mov     rcx, rsi
 * 0000000140B003EA: mov     [rsi+900h], rax
 * 0000000140B003F1: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B003FB: add     rax, r13
 * 0000000140B003FE: mov     [rsi+908h], rax
 * 0000000140B00405: movsxd  rax, dword ptr [r13+0]
 * 0000000140B00409: mov     [rsi+910h], rax
 * 0000000140B00410: mov     [rsi+918h], rbx
 * 0000000140B00417: mov     [rsi+8F8h], r12d
 * 0000000140B0041E: call    $$ba
 * 0000000140B00423: jmp     short loc_140B0042B
 * 0000000140B00425: mov     r12d, 1
 * 0000000140B0042B: mov     [r13+18h], rbx
 * 0000000140B0042F: mov     rax, [rsi+2E8h]
 * 0000000140B00436: mov     rdx, r14
 * 0000000140B00439: mov     rcx, r15
 * 0000000140B0043C: call    KeGuardDispatchICall
 * 0000000140B00441: jmp     loc_140AFB148
 * 0000000140B00446: xor     eax, eax
 * 0000000140B00448: lea     r12d, [rax+1]
 * 0000000140B0044C: cmp     [rsi+980h], rax
 * 0000000140B00453: jz      loc_140B00905
 * 0000000140B00459: mov     ecx, [rsi+994h]
 * 0000000140B0045F: mov     eax, ecx
 * 0000000140B00461: shr     eax, 2
 * 0000000140B00464: and     eax, r12d
 * 0000000140B00467: jnz     loc_140B00903
 * 0000000140B0046D: xor     edx, edx
 * 0000000140B0046F: cmp     [rsi+824h], edx
 * 0000000140B00475: jnz     short loc_140B0048D
 * 0000000140B00477: lea     eax, ds:0[rcx*8]
 * 0000000140B0047E: xor     eax, ecx
 * 0000000140B00480: and     eax, 20h
 * 0000000140B00483: xor     eax, ecx
 * 0000000140B00485: mov     [rsi+994h], eax
 * 0000000140B0048B: jmp     short loc_140B004A8
 * 0000000140B0048D: shr     ecx, 5
 * 0000000140B00490: and     ecx, r12d
 * 0000000140B00493: cmp     eax, ecx
 * 0000000140B00495: jz      short loc_140B004A8
 * 0000000140B00497: mov     [rsi+824h], edx
 * 0000000140B0049D: jmp     loc_140AFB148
 * 0000000140B004A2: mov     r12d, 1
 * 0000000140B004A8: mov     r14, [r13+8]
 * 0000000140B004AC: mov     r8d, [r13+10h]
 * 0000000140B004B0: mov     r9, r14
 * 0000000140B004B3: add     [rsi+828h], r8d
 * 0000000140B004BA: mov     rax, r14
 * 0000000140B004BD: mov     r10d, [rsi+814h]
 * 0000000140B004C4: mov     r15, [rsi+818h]
 * 0000000140B004CB: lea     rcx, [r14+r8]
 * 0000000140B004CF: cmp     r14, rcx
 * 0000000140B004D2: jnb     short loc_140B004E4
 * 0000000140B004D4: mov     edx, 40h ; '@'
 * 0000000140B004D9: prefetchnta byte ptr [rax]
 * 0000000140B004DC: add     rax, rdx
 * 0000000140B004DF: cmp     rax, rcx
 * 0000000140B004E2: jb      short loc_140B004D9
 * 0000000140B004E4: mov     r11d, r8d
 * 0000000140B004E7: mov     rbx, r15
 * 0000000140B004EA: shr     r11d, 7
 * 0000000140B004EE: test    r11d, r11d
 * 0000000140B004F1: jz      short loc_140B00561
 * 0000000140B004F3: mov     rdi, 7010008004002001h
 * 0000000140B004FD: mov     eax, 8
 * 0000000140B00502: xor     rbx, [r9]
 * 0000000140B00505: mov     ecx, r10d
 * 0000000140B00508: rol     rbx, cl
 * 0000000140B0050B: xor     rbx, [r9+8]
 * 0000000140B0050F: add     r9, 10h
 * 0000000140B00513: rol     rbx, cl
 * 0000000140B00516: sub     rax, r12
 * 0000000140B00519: jnz     short loc_140B00502
 * 0000000140B0051B: mov     rcx, r9
 * 0000000140B0051E: sub     rcx, r14
 * 0000000140B00521: xor     rcx, r15
 * 0000000140B00524: mov     rax, rcx
 * 0000000140B00527: rol     rax, 11h
 * 0000000140B0052B: xor     rcx, rax
 * 0000000140B0052E: mov     rax, rdi
 * 0000000140B00531: mul     rcx
 * 0000000140B00534: xor     r10d, edx
 * 0000000140B00537: mov     [rbp+0A70h+var_5E8], rdx
 * 0000000140B0053E: xor     r10d, eax
 * 0000000140B00541: mov     edx, 0FFFFFFFFh
 * 0000000140B00546: and     r10d, 3Fh
 * 0000000140B0054A: cmovz   r10d, r12d
 * 0000000140B0054E: add     r11d, edx
 * 0000000140B00551: jnz     short loc_140B004FD
 * 0000000140B00553: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B00558: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0055F: jmp     short loc_140B00566
 * 0000000140B00561: mov     edx, 0FFFFFFFFh
 * 0000000140B00566: and     r8d, 7Fh
 * 0000000140B0056A: cmp     r8d, 8
 * 0000000140B0056E: jb      short loc_140B0058D
 * 0000000140B00570: mov     eax, r8d
 * 0000000140B00573: shr     rax, 3
 * 0000000140B00577: xor     rbx, [r9]
 * 0000000140B0057A: mov     ecx, r10d
 * 0000000140B0057D: rol     rbx, cl
 * 0000000140B00580: add     r9, 8
 * 0000000140B00584: add     r8d, 0FFFFFFF8h
 * 0000000140B00588: sub     rax, r12
 * 0000000140B0058B: jnz     short loc_140B00577
 * 0000000140B0058D: test    r8d, r8d
 * 0000000140B00590: jz      short loc_140B005A7
 * 0000000140B00592: movzx   eax, byte ptr [r9]
 * 0000000140B00596: mov     ecx, r10d
 * 0000000140B00599: xor     rbx, rax
 * 0000000140B0059C: add     r9, r12
 * 0000000140B0059F: rol     rbx, cl
 * 0000000140B005A2: add     r8d, edx
 * 0000000140B005A5: jnz     short loc_140B00592
 * 0000000140B005A7: mov     rax, rbx
 * 0000000140B005AA: shr     rax, 1Fh
 * 0000000140B005AE: xor     ecx, ecx
 * 0000000140B005B0: jmp     short loc_140B005B8
 * 0000000140B005B2: xor     ebx, eax
 * 0000000140B005B4: shr     rax, 1Fh
 * 0000000140B005B8: test    rax, rax
 * 0000000140B005BB: jnz     short loc_140B005B2
 * 0000000140B005BD: btr     ebx, 1Fh
 * 0000000140B005C1: cmp     ebx, [r13+14h]
 * 0000000140B005C5: jz      loc_140B0072C
 * 0000000140B005CB: lock or [rsp+0B70h+var_B70], ecx
 * 0000000140B005CF: mov     eax, [r13+18h]
 * 0000000140B005D3: test    r12b, al
 * 0000000140B005D6: jz      short loc_140B005E9
 * 0000000140B005D8: mov     rax, [rsi+578h]
 * 0000000140B005DF: mov     cl, [rax]
 * 0000000140B005E1: test    cl, cl
 * 0000000140B005E3: jnz     loc_140B0072C
 * 0000000140B005E9: mov     ecx, [r13+10h]
 * 0000000140B005ED: mov     rdx, [r13+8]
 * 0000000140B005F1: test    rcx, rcx
 * 0000000140B005F4: jz      loc_140B006B3
 * 0000000140B005FA: mov     eax, [rsi+994h]
 * 0000000140B00600: mov     r8d, 40h ; '@'
 * 0000000140B00606: test    r8b, al
 * 0000000140B00609: jz      loc_140B006B3
 * 0000000140B0060F: mov     r12, cr8
 * 0000000140B00613: lea     eax, [r8-3Eh]
 * 0000000140B00617: mov     cr8, rax
 * 0000000140B0061B: mov     r14, rdx
 * 0000000140B0061E: lea     rax, [rcx-1]
 * 0000000140B00622: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140B00629: add     rax, rdx
 * 0000000140B0062C: or      rax, 0FFFh
 * 0000000140B00632: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B00639: lea     r13, [r14-1]
 * 0000000140B0063D: movzx   r15d, r12b
 * 0000000140B00641: mov     rax, [rsi+468h]
 * 0000000140B00648: xor     edx, edx
 * 0000000140B0064A: mov     rcx, r14
 * 0000000140B0064D: call    KeGuardDispatchICall
 * 0000000140B00652: cmp     eax, 0C000022Dh
 * 0000000140B00657: jnz     short loc_140B0067D
 * 0000000140B00659: mov     eax, 1
 * 0000000140B0065E: cmp     r12b, al
 * 0000000140B00661: ja      short loc_140B00681
 * 0000000140B00663: movzx   r15d, r12b
 * 0000000140B00667: mov     cr8, r15
 * 0000000140B0066B: mov     al, [r14]
 * 0000000140B0066E: mov     rax, cr8
 * 0000000140B00672: mov     eax, 2
 * 0000000140B00677: mov     cr8, rax
 * 0000000140B0067B: jmp     short loc_140B00641
 * 0000000140B0067D: test    eax, eax
 * 0000000140B0067F: js      short loc_140B006A4
 * 0000000140B00681: mov     r8d, 1000h
 * 0000000140B00687: add     r14, r8
 * 0000000140B0068A: add     r13, r8
 * 0000000140B0068D: cmp     r13, [rbp+0A70h+arg_8]
 * 0000000140B00694: jnz     short loc_140B0063D
 * 0000000140B00696: mov     cr8, r15
 * 0000000140B0069A: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B0069F: jmp     loc_140B0072C
 * 0000000140B006A4: mov     cr8, r15
 * 0000000140B006A8: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B006AD: mov     r12d, 1
 * 0000000140B006B3: mov     eax, [r13+14h]
 * 0000000140B006B7: xor     r14d, r14d
 * 0000000140B006BA: cmp     [rsi+8F8h], r14d
 * 0000000140B006C1: jnz     short loc_140B0072C
 * 0000000140B006C3: mov     ecx, ebx
 * 0000000140B006C5: xor     rcx, rax
 * 0000000140B006C8: mov     rax, [rsi+588h]
 * 0000000140B006CF: mov     [rax+18h], rcx
 * 0000000140B006D3: xor     eax, eax
 * 0000000140B006D5: mov     rcx, [r13+8]
 * 0000000140B006D9: cmp     [rsi+8F8h], eax
 * 0000000140B006DF: jnz     short loc_140B0072C
 * 0000000140B006E1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B006EB: xor     edx, edx
 * 0000000140B006ED: add     rax, rsi
 * 0000000140B006F0: mov     [rsi+900h], rax
 * 0000000140B006F7: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B00701: add     rax, r13
 * 0000000140B00704: mov     [rsi+908h], rax
 * 0000000140B0070B: movsxd  rax, dword ptr [r13+0]
 * 0000000140B0070F: mov     [rsi+910h], rax
 * 0000000140B00716: mov     [rsi+918h], rcx
 * 0000000140B0071D: mov     rcx, rsi
 * 0000000140B00720: mov     [rsi+8F8h], r12d
 * 0000000140B00727: call    $$ba
 * 0000000140B0072C: xor     eax, eax
 * 0000000140B0072E: test    dword ptr [rsi+990h], 40000000h
 * 0000000140B00738: jz      loc_140AFB050
 * 0000000140B0073E: mov     r8d, [r13+10h]
 * 0000000140B00742: test    r8d, r8d
 * 0000000140B00745: jz      loc_140AFB050
 * 0000000140B0074B: mov     rdx, [r13+8]
 * 0000000140B0074F: lea     r9, [rbp+0A70h+var_2D8]
 * 0000000140B00756: mov     rcx, rsi
 * 0000000140B00759: call    sub_1403F1D6C
 * 0000000140B0075E: mov     r8d, 10h
 * 0000000140B00764: lea     r9, [r13+1Ch]
 * 0000000140B00768: lea     r10, [rbp+0A70h+var_2D8]
 * 0000000140B0076F: mov     rcx, [r10]
 * 0000000140B00772: add     r10, 8
 * 0000000140B00776: mov     rax, [r9]
 * 0000000140B00779: add     r9, 8
 * 0000000140B0077D: cmp     rcx, rax
 * 0000000140B00780: jnz     short loc_140B007BD
 * 0000000140B00782: add     r8d, 0FFFFFFF8h
 * 0000000140B00786: cmp     r8d, 8
 * 0000000140B0078A: jnb     short loc_140B0076F
 * 0000000140B0078C: test    r8d, r8d
 * 0000000140B0078F: jz      loc_140B008F3
 * 0000000140B00795: mov     r11d, 1
 * 0000000140B0079B: movzx   edx, byte ptr [r10]
 * 0000000140B0079F: add     r10, r11
 * 0000000140B007A2: movzx   eax, byte ptr [r9]
 * 0000000140B007A6: add     r9, r11
 * 0000000140B007A9: cmp     rdx, rax
 * 0000000140B007AC: jnz     short loc_140B007C3
 * 0000000140B007AE: mov     eax, 0FFFFFFFFh
 * 0000000140B007B3: add     r8d, eax
 * 0000000140B007B6: jnz     short loc_140B0079B
 * 0000000140B007B8: jmp     loc_140B008F3
 * 0000000140B007BD: mov     r11d, 1
 * 0000000140B007C3: xor     eax, eax
 * 0000000140B007C5: lock or [rsp+0B70h+var_B70], eax
 * 0000000140B007C9: mov     eax, [r13+18h]
 * 0000000140B007CD: test    r11b, al
 * 0000000140B007D0: jz      short loc_140B007E3
 * 0000000140B007D2: mov     rax, [rsi+578h]
 * 0000000140B007D9: mov     cl, [rax]
 * 0000000140B007DB: test    cl, cl
 * 0000000140B007DD: jnz     loc_140B008F3
 * 0000000140B007E3: mov     edx, [r13+10h]
 * 0000000140B007E7: mov     rcx, [r13+8]
 * 0000000140B007EB: test    rdx, rdx
 * 0000000140B007EE: jz      loc_140B0089E
 * 0000000140B007F4: mov     eax, [rsi+994h]
 * 0000000140B007FA: mov     r8d, 40h ; '@'
 * 0000000140B00800: test    r8b, al
 * 0000000140B00803: jz      loc_140B0089E
 * 0000000140B00809: mov     r15, cr8
 * 0000000140B0080D: lea     eax, [r8-3Eh]
 * 0000000140B00811: mov     cr8, rax
 * 0000000140B00815: mov     rbx, rcx
 * 0000000140B00818: lea     r13, [rdx-1]
 * 0000000140B0081C: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140B00823: add     r13, rcx
 * 0000000140B00826: or      r13, 0FFFh
 * 0000000140B0082D: lea     r12, [rbx-1]
 * 0000000140B00831: movzx   r14d, r15b
 * 0000000140B00835: mov     rax, [rsi+468h]
 * 0000000140B0083C: xor     edx, edx
 * 0000000140B0083E: mov     rcx, rbx
 * 0000000140B00841: call    KeGuardDispatchICall
 * 0000000140B00846: cmp     eax, 0C000022Dh
 * 0000000140B0084B: jnz     short loc_140B00870
 * 0000000140B0084D: mov     eax, 1
 * 0000000140B00852: cmp     r15b, al
 * 0000000140B00855: ja      short loc_140B00874
 * 0000000140B00857: movzx   r14d, r15b
 * 0000000140B0085B: mov     cr8, r14
 * 0000000140B0085F: mov     al, [rbx]
 * 0000000140B00861: mov     rax, cr8
 * 0000000140B00865: mov     eax, 2
 * 0000000140B0086A: mov     cr8, rax
 * 0000000140B0086E: jmp     short loc_140B00835
 * 0000000140B00870: test    eax, eax
 * 0000000140B00872: js      short loc_140B0088B
 * 0000000140B00874: mov     r8d, 1000h
 * 0000000140B0087A: add     rbx, r8
 * 0000000140B0087D: add     r12, r8
 * 0000000140B00880: cmp     r12, r13
 * 0000000140B00883: jnz     short loc_140B00831
 * 0000000140B00885: mov     cr8, r14
 * 0000000140B00889: jmp     short loc_140B008F3
 * 0000000140B0088B: mov     cr8, r14
 * 0000000140B0088F: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B00894: mov     r11d, 1
 * 0000000140B0089A: mov     rcx, [r13+8]
 * 0000000140B0089E: xor     eax, eax
 * 0000000140B008A0: cmp     [rsi+8F8h], eax
 * 0000000140B008A6: jnz     short loc_140B008F3
 * 0000000140B008A8: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B008B2: xor     edx, edx
 * 0000000140B008B4: add     rax, rsi
 * 0000000140B008B7: mov     [rsi+900h], rax
 * 0000000140B008BE: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B008C8: add     rax, r13
 * 0000000140B008CB: mov     [rsi+908h], rax
 * 0000000140B008D2: movsxd  rax, dword ptr [r13+0]
 * 0000000140B008D6: mov     [rsi+910h], rax
 * 0000000140B008DD: mov     [rsi+918h], rcx
 * 0000000140B008E4: mov     rcx, rsi
 * 0000000140B008E7: mov     [rsi+8F8h], r11d
 * 0000000140B008EE: call    $$ba
 * 0000000140B008F3: mov     rax, [rsp+0B70h+var_B20]
 * 0000000140B008F8: mov     eax, [rax+10h]
 * 0000000140B008FB: shl     eax, 4
 * 0000000140B008FE: jmp     loc_140AFC09C
 * 0000000140B00903: xor     eax, eax
 * 0000000140B00905: mov     [rsi+824h], eax
 * 0000000140B0090B: jmp     loc_140AFB148
 * 0000000140B00910: mov     r14, [r13+8]
 * 0000000140B00914: mov     r8d, [r13+10h]
 * 0000000140B00918: mov     r9, r14
 * 0000000140B0091B: add     [rsi+828h], r8d
 * 0000000140B00922: mov     rax, r14
 * 0000000140B00925: mov     r10d, [rsi+814h]
 * 0000000140B0092C: mov     r15, [rsi+818h]
 * 0000000140B00933: lea     rcx, [r14+r8]
 * 0000000140B00937: cmp     r14, rcx
 * 0000000140B0093A: jnb     short loc_140B0094C
 * 0000000140B0093C: mov     edx, 40h ; '@'
 * 0000000140B00941: prefetchnta byte ptr [rax]
 * 0000000140B00944: add     rax, rdx
 * 0000000140B00947: cmp     rax, rcx
 * 0000000140B0094A: jb      short loc_140B00941
 * 0000000140B0094C: mov     r11d, r8d
 * 0000000140B0094F: mov     rbx, r15
 * 0000000140B00952: shr     r11d, 7
 * 0000000140B00956: mov     edx, 1
 * 0000000140B0095B: mov     r12d, 0FFFFFFFFh
 * 0000000140B00961: test    r11d, r11d
 * 0000000140B00964: jz      short loc_140B009D2
 * 0000000140B00966: mov     rdi, 7010008004002001h
 * 0000000140B00970: mov     eax, 8
 * 0000000140B00975: xor     rbx, [r9]
 * 0000000140B00978: mov     ecx, r10d
 * 0000000140B0097B: rol     rbx, cl
 * 0000000140B0097E: xor     rbx, [r9+8]
 * 0000000140B00982: add     r9, 10h
 * 0000000140B00986: rol     rbx, cl
 * 0000000140B00989: sub     rax, rdx
 * 0000000140B0098C: jnz     short loc_140B00975
 * 0000000140B0098E: mov     rcx, r9
 * 0000000140B00991: sub     rcx, r14
 * 0000000140B00994: xor     rcx, r15
 * 0000000140B00997: mov     rax, rcx
 * 0000000140B0099A: rol     rax, 11h
 * 0000000140B0099E: xor     rcx, rax
 * 0000000140B009A1: mov     rax, rdi
 * 0000000140B009A4: mul     rcx
 * 0000000140B009A7: xor     r10d, edx
 * 0000000140B009AA: mov     [rbp+0A70h+var_5E0], rdx
 * 0000000140B009B1: xor     r10d, eax
 * 0000000140B009B4: mov     edx, 1
 * 0000000140B009B9: and     r10d, 3Fh
 * 0000000140B009BD: cmovz   r10d, edx
 * 0000000140B009C1: add     r11d, r12d
 * 0000000140B009C4: jnz     short loc_140B00970
 * 0000000140B009C6: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B009CB: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B009D2: and     r8d, 7Fh
 * 0000000140B009D6: cmp     r8d, 8
 * 0000000140B009DA: jb      short loc_140B009F9
 * 0000000140B009DC: mov     eax, r8d
 * 0000000140B009DF: shr     rax, 3
 * 0000000140B009E3: xor     rbx, [r9]
 * 0000000140B009E6: mov     ecx, r10d
 * 0000000140B009E9: rol     rbx, cl
 * 0000000140B009EC: add     r9, 8
 * 0000000140B009F0: add     r8d, 0FFFFFFF8h
 * 0000000140B009F4: sub     rax, rdx
 * 0000000140B009F7: jnz     short loc_140B009E3
 * 0000000140B009F9: test    r8d, r8d
 * 0000000140B009FC: jz      short loc_140B00A13
 * 0000000140B009FE: movzx   eax, byte ptr [r9]
 * 0000000140B00A02: mov     ecx, r10d
 * 0000000140B00A05: xor     rbx, rax
 * 0000000140B00A08: add     r9, rdx
 * 0000000140B00A0B: rol     rbx, cl
 * 0000000140B00A0E: add     r8d, r12d
 * 0000000140B00A11: jnz     short loc_140B009FE
 * 0000000140B00A13: mov     rax, rbx
 * 0000000140B00A16: jmp     short loc_140B00A1A
 * 0000000140B00A18: xor     ebx, eax
 * 0000000140B00A1A: shr     rax, 1Fh
 * 0000000140B00A1E: test    rax, rax
 * 0000000140B00A21: jnz     short loc_140B00A18
 * 0000000140B00A23: btr     ebx, 1Fh
 * 0000000140B00A27: mov     r12d, eax
 * 0000000140B00A2A: cmp     ebx, [r13+14h]
 * 0000000140B00A2E: jz      loc_140B00B97
 * 0000000140B00A34: cmp     [r13+0], eax
 * 0000000140B00A38: jnz     short loc_140B00A42
 * 0000000140B00A3A: cmp     [r13+18h], eax
 * 0000000140B00A3E: cmovnz  r12d, edx
 * 0000000140B00A42: mov     ecx, [r13+10h]
 * 0000000140B00A46: mov     rdx, [r13+8]
 * 0000000140B00A4A: test    rcx, rcx
 * 0000000140B00A4D: jz      loc_140B00B1C
 * 0000000140B00A53: mov     eax, [rsi+994h]
 * 0000000140B00A59: mov     r8d, 40h ; '@'
 * 0000000140B00A5F: test    r8b, al
 * 0000000140B00A62: jz      loc_140B00B1C
 * 0000000140B00A68: mov     r13, cr8
 * 0000000140B00A6C: lea     eax, [r8-3Eh]
 * 0000000140B00A70: mov     cr8, rax
 * 0000000140B00A74: mov     r14, rdx
 * 0000000140B00A77: lea     rax, [rcx-1]
 * 0000000140B00A7B: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140B00A82: add     rax, rdx
 * 0000000140B00A85: or      rax, 0FFFh
 * 0000000140B00A8B: mov     [rsp+0B70h+var_AF8], rax
 * 0000000140B00A90: lea     rax, [r14-1]
 * 0000000140B00A94: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B00A9B: movzx   r15d, r13b
 * 0000000140B00A9F: mov     rax, [rsi+468h]
 * 0000000140B00AA6: xor     edx, edx
 * 0000000140B00AA8: mov     rcx, r14
 * 0000000140B00AAB: call    KeGuardDispatchICall
 * 0000000140B00AB0: cmp     eax, 0C000022Dh
 * 0000000140B00AB5: jnz     short loc_140B00AE0
 * 0000000140B00AB7: test    r12d, r12d
 * 0000000140B00ABA: jnz     short loc_140B00B13
 * 0000000140B00ABC: lea     eax, [r12+1]
 * 0000000140B00AC1: cmp     r13b, al
 * 0000000140B00AC4: ja      short loc_140B00AE4
 * 0000000140B00AC6: movzx   r15d, r13b
 * 0000000140B00ACA: mov     cr8, r15
 * 0000000140B00ACE: mov     al, [r14]
 * 0000000140B00AD1: mov     rax, cr8
 * 0000000140B00AD5: lea     eax, [r12+2]
 * 0000000140B00ADA: mov     cr8, rax
 * 0000000140B00ADE: jmp     short loc_140B00A9F
 * 0000000140B00AE0: test    eax, eax
 * 0000000140B00AE2: js      short loc_140B00B13
 * 0000000140B00AE4: mov     rax, [rbp+0A70h+arg_8]
 * 0000000140B00AEB: mov     r8d, 1000h
 * 0000000140B00AF1: add     rax, r8
 * 0000000140B00AF4: add     r14, r8
 * 0000000140B00AF7: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B00AFE: cmp     rax, [rsp+0B70h+var_AF8]
 * 0000000140B00B03: jnz     short loc_140B00A9B
 * 0000000140B00B05: mov     cr8, r15
 * 0000000140B00B09: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B00B0E: jmp     loc_140B00B97
 * 0000000140B00B13: mov     cr8, r15
 * 0000000140B00B17: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B00B1C: mov     eax, [r13+14h]
 * 0000000140B00B20: xor     ecx, ecx
 * 0000000140B00B22: cmp     [rsi+8F8h], ecx
 * 0000000140B00B28: jnz     short loc_140B00B97
 * 0000000140B00B2A: mov     ecx, ebx
 * 0000000140B00B2C: xor     rcx, rax
 * 0000000140B00B2F: mov     rax, [rsi+588h]
 * 0000000140B00B36: mov     [rax+18h], rcx
 * 0000000140B00B3A: xor     eax, eax
 * 0000000140B00B3C: mov     rcx, [r13+8]
 * 0000000140B00B40: cmp     [rsi+8F8h], eax
 * 0000000140B00B46: jnz     short loc_140B00B97
 * 0000000140B00B48: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B00B52: xor     edx, edx
 * 0000000140B00B54: add     rax, rsi
 * 0000000140B00B57: mov     [rsi+900h], rax
 * 0000000140B00B5E: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B00B68: add     rax, r13
 * 0000000140B00B6B: mov     [rsi+908h], rax
 * 0000000140B00B72: movsxd  rax, dword ptr [r13+0]
 * 0000000140B00B76: mov     [rsi+910h], rax
 * 0000000140B00B7D: mov     eax, 1
 * 0000000140B00B82: mov     [rsi+918h], rcx
 * 0000000140B00B89: mov     rcx, rsi
 * 0000000140B00B8C: mov     [rsi+8F8h], eax
 * 0000000140B00B92: call    $$ba
 * 0000000140B00B97: mov     eax, [r13+10h]
 * 0000000140B00B9B: mov     r12, [r13+8]
 * 0000000140B00B9F: shr     eax, 4
 * 0000000140B00BA2: mov     [rbp+0A70h+arg_8], r12
 * 0000000140B00BA9: test    eax, eax
 * 0000000140B00BAB: jz      loc_140AFB39B
 * 0000000140B00BB1: mov     rdi, [rsp+0B70h+var_B20]
 * 0000000140B00BB6: mov     r13d, eax
 * 0000000140B00BB9: mov     [rsp+0B70h+var_B18], r13
 * 0000000140B00BBE: mov     rax, [r12]
 * 0000000140B00BC2: lea     rdx, [rbp+0A70h+var_8B0]
 * 0000000140B00BC9: mov     rbx, rdi
 * 0000000140B00BCC: mov     r15, [rax]
 * 0000000140B00BCF: xor     eax, eax
 * 0000000140B00BD1: mov     [rbp+0A70h+var_8B0], rax
 * 0000000140B00BD8: mov     rcx, r15
 * 0000000140B00BDB: mov     rax, [rsi+310h]
 * 0000000140B00BE2: call    KeGuardDispatchICall
 * 0000000140B00BE7: mov     r14, rax
 * 0000000140B00BEA: test    rax, rax
 * 0000000140B00BED: jz      loc_140B00D23
 * 0000000140B00BF3: mov     r13d, 6
 * 0000000140B00BF9: xor     r12d, r12d
 * 0000000140B00BFC: mov     rdi, 0B3B74BDEE4453415h
 * 0000000140B00C06: mov     rax, [rsi+208h]
 * 0000000140B00C0D: lea     rdx, [rbp+0A70h+var_5D8]
 * 0000000140B00C14: mov     rcx, r14
 * 0000000140B00C17: call    KeGuardDispatchICall
 * 0000000140B00C1C: test    rax, rax
 * 0000000140B00C1F: jnz     loc_140B00CF0
 * 0000000140B00C25: test    dword ptr [rsi+990h], 40000000h
 * 0000000140B00C2F: lea     r9d, [rax+1]
 * 0000000140B00C33: jz      short loc_140B00C7B
 * 0000000140B00C35: mov     rcx, [rsi+0A80h]
 * 0000000140B00C3C: lea     edx, [rax+30h]
 * 0000000140B00C3F: mov     r8, r13
 * 0000000140B00C42: mov     rax, [rbx]
 * 0000000140B00C45: add     edx, 0FFFFFFF8h
 * 0000000140B00C48: mov     [rcx], rax
 * 0000000140B00C4B: add     rbx, 8
 * 0000000140B00C4F: add     rcx, 8
 * 0000000140B00C53: sub     r8, r9
 * 0000000140B00C56: jnz     short loc_140B00C42
 * 0000000140B00C58: test    edx, edx
 * 0000000140B00C5A: jz      short loc_140B00C74
 * 0000000140B00C5C: mov     esi, 0FFFFFFFFh
 * 0000000140B00C61: mov     al, [rbx]
 * 0000000140B00C63: add     rbx, r9
 * 0000000140B00C66: mov     [rcx], al
 * 0000000140B00C68: add     rcx, r9
 * 0000000140B00C6B: add     edx, esi
 * 0000000140B00C6D: jnz     short loc_140B00C61
 * 0000000140B00C6F: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B00C74: mov     rbx, [rsi+0A80h]
 * 0000000140B00C7B: mov     [rbx+18h], r14
 * 0000000140B00C7F: mov     [rbx+20h], r15
 * 0000000140B00C83: mov     rax, [rsi+588h]
 * 0000000140B00C8A: mov     [rax], rbx
 * 0000000140B00C8D: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140B00C94: mov     rax, [rsi+588h]
 * 0000000140B00C9B: mov     [rax+8], r14
 * 0000000140B00C9F: mov     dword ptr [rax+14h], 1000h
 * 0000000140B00CA6: cmp     [rsi+8F8h], r12d
 * 0000000140B00CAD: jnz     short loc_140B00CF0
 * 0000000140B00CAF: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B00CB9: xor     edx, edx
 * 0000000140B00CBB: add     rax, rsi
 * 0000000140B00CBE: mov     rcx, rsi
 * 0000000140B00CC1: mov     [rsi+900h], rax
 * 0000000140B00CC8: lea     rax, [rbx+rdi]
 * 0000000140B00CCC: mov     [rsi+908h], rax
 * 0000000140B00CD3: movsxd  rax, dword ptr [rbx]
 * 0000000140B00CD6: mov     [rsi+910h], rax
 * 0000000140B00CDD: mov     [rsi+918h], r13
 * 0000000140B00CE4: mov     [rsi+8F8h], r9d
 * 0000000140B00CEB: call    $$ba
 * 0000000140B00CF0: mov     rax, [rsi+310h]
 * 0000000140B00CF7: lea     rdx, [rbp+0A70h+var_8B0]
 * 0000000140B00CFE: mov     rcx, r15
 * 0000000140B00D01: call    KeGuardDispatchICall
 * 0000000140B00D06: mov     r14, rax
 * 0000000140B00D09: test    rax, rax
 * 0000000140B00D0C: jnz     loc_140B00C06
 * 0000000140B00D12: mov     r12, [rbp+0A70h+arg_8]
 * 0000000140B00D19: mov     r13, [rsp+0B70h+var_B18]
 * 0000000140B00D1E: mov     rdi, [rsp+0B70h+var_B20]
 * 0000000140B00D23: add     r12, 10h
 * 0000000140B00D27: sub     r13, 1
 * 0000000140B00D2B: mov     [rbp+0A70h+arg_8], r12
 * 0000000140B00D32: mov     [rsp+0B70h+var_B18], r13
 * 0000000140B00D37: jnz     loc_140B00BBE
 * 0000000140B00D3D: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B00D44: jmp     loc_140AFB39B
 * 0000000140B00D49: mov     eax, 28h ; '('
 * 0000000140B00D4E: cmp     r10d, eax
 * 0000000140B00D51: jg      loc_140B0302E
 * 0000000140B00D57: jz      short loc_140B00DB1
 * 0000000140B00D59: mov     ecx, r10d
 * 0000000140B00D5C: sub     ecx, 1Eh
 * 0000000140B00D5F: jz      loc_140B02893
 * 0000000140B00D65: sub     ecx, 1
 * 0000000140B00D68: jz      loc_140B01C4D
 * 0000000140B00D6E: sub     ecx, 1
 * 0000000140B00D71: jz      loc_140B01C3D
 * 0000000140B00D77: sub     ecx, 1
 * 0000000140B00D7A: jz      loc_140B01C2D
 * 0000000140B00D80: lea     r14d, [rax-26h]
 * 0000000140B00D84: sub     ecx, r14d
 * 0000000140B00D87: jz      loc_140B014D5
 * 0000000140B00D8D: sub     ecx, 1
 * 0000000140B00D90: jz      loc_140B00FBF
 * 0000000140B00D96: sub     ecx, 1
 * 0000000140B00D99: jz      loc_140B00F49
 * 0000000140B00D9F: sub     ecx, 1
 * 0000000140B00DA2: jz      loc_140B00EFD
 * 0000000140B00DA8: cmp     ecx, 1
 * 0000000140B00DAB: jnz     loc_140B030E7
 * 0000000140B00DB1: mov     eax, [r13+24h]
 * 0000000140B00DB5: add     [rsi+828h], eax
 * 0000000140B00DBB: mov     ebx, [r13+20h]
 * 0000000140B00DBF: mov     r9d, [r13+24h]
 * 0000000140B00DC3: add     rbx, rsi
 * 0000000140B00DC6: mov     r11d, [rsi+814h]
 * 0000000140B00DCD: mov     r10, rbx
 * 0000000140B00DD0: mov     r15, [rsi+818h]
 * 0000000140B00DD7: mov     rax, rbx
 * 0000000140B00DDA: lea     rcx, [rbx+r9]
 * 0000000140B00DDE: cmp     rbx, rcx
 * 0000000140B00DE1: jnb     short loc_140B00DF3
 * 0000000140B00DE3: mov     edx, 40h ; '@'
 * 0000000140B00DE8: prefetchnta byte ptr [rax]
 * 0000000140B00DEB: add     rax, rdx
 * 0000000140B00DEE: cmp     rax, rcx
 * 0000000140B00DF1: jb      short loc_140B00DE8
 * 0000000140B00DF3: mov     r14d, r9d
 * 0000000140B00DF6: mov     r8, r15
 * 0000000140B00DF9: shr     r14d, 7
 * 0000000140B00DFD: mov     r12d, 1
 * 0000000140B00E03: test    r14d, r14d
 * 0000000140B00E06: jz      short loc_140B00E79
 * 0000000140B00E08: mov     edi, 0FFFFFFFFh
 * 0000000140B00E0D: mov     r13, 7010008004002001h
 * 0000000140B00E17: mov     eax, 8
 * 0000000140B00E1C: xor     r8, [r10]
 * 0000000140B00E1F: mov     ecx, r11d
 * 0000000140B00E22: rol     r8, cl
 * 0000000140B00E25: xor     r8, [r10+8]
 * 0000000140B00E29: add     r10, 10h
 * 0000000140B00E2D: rol     r8, cl
 * 0000000140B00E30: sub     rax, r12
 * 0000000140B00E33: jnz     short loc_140B00E1C
 * 0000000140B00E35: mov     rcx, r10
 * 0000000140B00E38: sub     rcx, rbx
 * 0000000140B00E3B: xor     rcx, r15
 * 0000000140B00E3E: mov     rax, rcx
 * 0000000140B00E41: rol     rax, 11h
 * 0000000140B00E45: xor     rcx, rax
 * 0000000140B00E48: mov     rax, r13
 * 0000000140B00E4B: mul     rcx
 * 0000000140B00E4E: xor     r11d, edx
 * 0000000140B00E51: mov     [rbp+0A70h+var_540], rdx
 * 0000000140B00E58: xor     r11d, eax
 * 0000000140B00E5B: and     r11d, 3Fh
 * 0000000140B00E5F: cmovz   r11d, r12d
 * 0000000140B00E63: add     r14d, edi
 * 0000000140B00E66: jnz     short loc_140B00E17
 * 0000000140B00E68: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B00E6D: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B00E74: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B00E79: and     r9d, 7Fh
 * 0000000140B00E7D: cmp     r9d, 8
 * 0000000140B00E81: jb      short loc_140B00EA0
 * 0000000140B00E83: mov     eax, r9d
 * 0000000140B00E86: shr     rax, 3
 * 0000000140B00E8A: xor     r8, [r10]
 * 0000000140B00E8D: mov     ecx, r11d
 * 0000000140B00E90: rol     r8, cl
 * 0000000140B00E93: add     r10, 8
 * 0000000140B00E97: add     r9d, 0FFFFFFF8h
 * 0000000140B00E9B: sub     rax, r12
 * 0000000140B00E9E: jnz     short loc_140B00E8A
 * 0000000140B00EA0: test    r9d, r9d
 * 0000000140B00EA3: jz      short loc_140B00EC4
 * 0000000140B00EA5: mov     esi, 0FFFFFFFFh
 * 0000000140B00EAA: movzx   eax, byte ptr [r10]
 * 0000000140B00EAE: mov     ecx, r11d
 * 0000000140B00EB1: xor     r8, rax
 * 0000000140B00EB4: add     r10, r12
 * 0000000140B00EB7: rol     r8, cl
 * 0000000140B00EBA: add     r9d, esi
 * 0000000140B00EBD: jnz     short loc_140B00EAA
 * 0000000140B00EBF: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B00EC4: mov     rcx, [r13+18h]
 * 0000000140B00EC8: cmp     r8, rcx
 * 0000000140B00ECB: jz      loc_140AFB148
 * 0000000140B00ED1: mov     eax, [rsi+8F8h]
 * 0000000140B00ED7: test    eax, eax
 * 0000000140B00ED9: jnz     short loc_140B00EEF
 * 0000000140B00EDB: mov     rax, [rsi+588h]
 * 0000000140B00EE2: xor     rcx, r8
 * 0000000140B00EE5: mov     [rax+18h], rcx
 * 0000000140B00EE9: mov     eax, [rsi+8F8h]
 * 0000000140B00EEF: mov     ecx, [r13+20h]
 * 0000000140B00EF3: add     rcx, rsi
 * 0000000140B00EF6: test    eax, eax
 * 0000000140B00EF8: jmp     loc_140B04797
 * 0000000140B00EFD: mov     edx, [r13+2Ch]
 * 0000000140B00F01: lea     rcx, [rbp+0A70h+var_2C8]
 * 0000000140B00F08: mov     rax, [rsi+1A0h]
 * 0000000140B00F0F: call    KeGuardDispatchICall
 * 0000000140B00F14: mov     rax, [rsi+1D0h]
 * 0000000140B00F1B: lea     rdx, [rbp+0A70h+var_2B8]
 * 0000000140B00F22: lea     rcx, [rbp+0A70h+var_2C8]
 * 0000000140B00F29: call    KeGuardDispatchICall
 * 0000000140B00F2E: xor     ecx, ecx
 * 0000000140B00F30: xgetbv
 * 0000000140B00F33: shl     rdx, 20h
 * 0000000140B00F37: lea     rcx, [rbp+0A70h+var_2B8]
 * 0000000140B00F3E: or      rdx, rax
 * 0000000140B00F41: mov     rbx, rdx
 * 0000000140B00F44: jmp     loc_140B00293
 * 0000000140B00F49: mov     eax, [rsi+994h]
 * 0000000140B00F4F: test    r14b, al
 * 0000000140B00F52: jnz     loc_140AFB39B
 * 0000000140B00F58: mov     rax, [rsi+428h]
 * 0000000140B00F5F: call    KeGuardDispatchICall
 * 0000000140B00F64: test    al, al
 * 0000000140B00F66: jz      loc_140AFB39B
 * 0000000140B00F6C: xor     eax, eax
 * 0000000140B00F6E: lea     r12d, [rax+1]
 * 0000000140B00F72: cmp     [rsi+8F8h], eax
 * 0000000140B00F78: jnz     loc_140AFB14A
 * 0000000140B00F7E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B00F88: add     rax, rsi
 * 0000000140B00F8B: mov     [rsi+900h], rax
 * 0000000140B00F92: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B00F9C: add     rax, r13
 * 0000000140B00F9F: mov     [rsi+908h], rax
 * 0000000140B00FA6: movsxd  rax, dword ptr [r13+0]
 * 0000000140B00FAA: mov     [rsi+910h], rax
 * 0000000140B00FB1: xor     eax, eax
 * 0000000140B00FB3: mov     [rsi+918h], rax
 * 0000000140B00FBA: jmp     loc_140AFB421
 * 0000000140B00FBF: mov     r14, [r13+8]
 * 0000000140B00FC3: mov     r8d, [r13+10h]
 * 0000000140B00FC7: mov     r9, r14
 * 0000000140B00FCA: add     [rsi+828h], r8d
 * 0000000140B00FD1: mov     rax, r14
 * 0000000140B00FD4: mov     r10d, [rsi+814h]
 * 0000000140B00FDB: mov     r15, [rsi+818h]
 * 0000000140B00FE2: lea     rcx, [r14+r8]
 * 0000000140B00FE6: cmp     r14, rcx
 * 0000000140B00FE9: jnb     short loc_140B00FFB
 * 0000000140B00FEB: mov     edx, 40h ; '@'
 * 0000000140B00FF0: prefetchnta byte ptr [rax]
 * 0000000140B00FF3: add     rax, rdx
 * 0000000140B00FF6: cmp     rax, rcx
 * 0000000140B00FF9: jb      short loc_140B00FF0
 * 0000000140B00FFB: mov     r11d, r8d
 * 0000000140B00FFE: mov     rbx, r15
 * 0000000140B01001: shr     r11d, 7
 * 0000000140B01005: mov     edx, 1
 * 0000000140B0100A: mov     r12d, 0FFFFFFFFh
 * 0000000140B01010: test    r11d, r11d
 * 0000000140B01013: jz      short loc_140B01081
 * 0000000140B01015: mov     rdi, 7010008004002001h
 * 0000000140B0101F: mov     eax, 8
 * 0000000140B01024: xor     rbx, [r9]
 * 0000000140B01027: mov     ecx, r10d
 * 0000000140B0102A: rol     rbx, cl
 * 0000000140B0102D: xor     rbx, [r9+8]
 * 0000000140B01031: add     r9, 10h
 * 0000000140B01035: rol     rbx, cl
 * 0000000140B01038: sub     rax, rdx
 * 0000000140B0103B: jnz     short loc_140B01024
 * 0000000140B0103D: mov     rcx, r9
 * 0000000140B01040: sub     rcx, r14
 * 0000000140B01043: xor     rcx, r15
 * 0000000140B01046: mov     rax, rcx
 * 0000000140B01049: rol     rax, 11h
 * 0000000140B0104D: xor     rcx, rax
 * 0000000140B01050: mov     rax, rdi
 * 0000000140B01053: mul     rcx
 * 0000000140B01056: xor     r10d, edx
 * 0000000140B01059: mov     [rbp+0A70h+var_5D0], rdx
 * 0000000140B01060: xor     r10d, eax
 * 0000000140B01063: mov     edx, 1
 * 0000000140B01068: and     r10d, 3Fh
 * 0000000140B0106C: cmovz   r10d, edx
 * 0000000140B01070: add     r11d, r12d
 * 0000000140B01073: jnz     short loc_140B0101F
 * 0000000140B01075: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B0107A: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B01081: and     r8d, 7Fh
 * 0000000140B01085: cmp     r8d, 8
 * 0000000140B01089: jb      short loc_140B010A8
 * 0000000140B0108B: mov     eax, r8d
 * 0000000140B0108E: shr     rax, 3
 * 0000000140B01092: xor     rbx, [r9]
 * 0000000140B01095: mov     ecx, r10d
 * 0000000140B01098: rol     rbx, cl
 * 0000000140B0109B: add     r9, 8
 * 0000000140B0109F: add     r8d, 0FFFFFFF8h
 * 0000000140B010A3: sub     rax, rdx
 * 0000000140B010A6: jnz     short loc_140B01092
 * 0000000140B010A8: test    r8d, r8d
 * 0000000140B010AB: jz      short loc_140B010C2
 * 0000000140B010AD: movzx   eax, byte ptr [r9]
 * 0000000140B010B1: mov     ecx, r10d
 * 0000000140B010B4: xor     rbx, rax
 * 0000000140B010B7: add     r9, rdx
 * 0000000140B010BA: rol     rbx, cl
 * 0000000140B010BD: add     r8d, r12d
 * 0000000140B010C0: jnz     short loc_140B010AD
 * 0000000140B010C2: mov     rax, rbx
 * 0000000140B010C5: jmp     short loc_140B010C9
 * 0000000140B010C7: xor     ebx, eax
 * 0000000140B010C9: shr     rax, 1Fh
 * 0000000140B010CD: test    rax, rax
 * 0000000140B010D0: jnz     short loc_140B010C7
 * 0000000140B010D2: btr     ebx, 1Fh
 * 0000000140B010D6: mov     r12d, eax
 * 0000000140B010D9: cmp     ebx, [r13+14h]
 * 0000000140B010DD: jz      loc_140B01242
 * 0000000140B010E3: cmp     [r13+0], eax
 * 0000000140B010E7: jnz     short loc_140B010F1
 * 0000000140B010E9: cmp     [r13+18h], eax
 * 0000000140B010ED: cmovnz  r12d, edx
 * 0000000140B010F1: mov     ecx, [r13+10h]
 * 0000000140B010F5: mov     rdx, [r13+8]
 * 0000000140B010F9: test    rcx, rcx
 * 0000000140B010FC: jz      loc_140B011C5
 * 0000000140B01102: mov     eax, [rsi+994h]
 * 0000000140B01108: mov     r8d, 40h ; '@'
 * 0000000140B0110E: test    r8b, al
 * 0000000140B01111: jz      loc_140B011C5
 * 0000000140B01117: mov     r13, cr8
 * 0000000140B0111B: lea     eax, [r8-3Eh]
 * 0000000140B0111F: mov     cr8, rax
 * 0000000140B01123: mov     r14, rdx
 * 0000000140B01126: lea     rax, [rcx-1]
 * 0000000140B0112A: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140B01131: add     rax, rdx
 * 0000000140B01134: or      rax, 0FFFh
 * 0000000140B0113A: mov     [rsp+0B70h+var_AF8], rax
 * 0000000140B0113F: lea     rax, [r14-1]
 * 0000000140B01143: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B0114A: movzx   r15d, r13b
 * 0000000140B0114E: mov     rax, [rsi+468h]
 * 0000000140B01155: xor     edx, edx
 * 0000000140B01157: mov     rcx, r14
 * 0000000140B0115A: call    KeGuardDispatchICall
 * 0000000140B0115F: cmp     eax, 0C000022Dh
 * 0000000140B01164: jnz     short loc_140B0118F
 * 0000000140B01166: test    r12d, r12d
 * 0000000140B01169: jnz     short loc_140B011BC
 * 0000000140B0116B: lea     eax, [r12+1]
 * 0000000140B01170: cmp     r13b, al
 * 0000000140B01173: ja      short loc_140B01193
 * 0000000140B01175: movzx   r15d, r13b
 * 0000000140B01179: mov     cr8, r15
 * 0000000140B0117D: mov     al, [r14]
 * 0000000140B01180: mov     rax, cr8
 * 0000000140B01184: lea     eax, [r12+2]
 * 0000000140B01189: mov     cr8, rax
 * 0000000140B0118D: jmp     short loc_140B0114E
 * 0000000140B0118F: test    eax, eax
 * 0000000140B01191: js      short loc_140B011BC
 * 0000000140B01193: mov     rax, [rbp+0A70h+arg_8]
 * 0000000140B0119A: mov     ecx, 1000h
 * 0000000140B0119F: add     rax, rcx
 * 0000000140B011A2: add     r14, rcx
 * 0000000140B011A5: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B011AC: cmp     rax, [rsp+0B70h+var_AF8]
 * 0000000140B011B1: jnz     short loc_140B0114A
 * 0000000140B011B3: mov     cr8, r15
 * 0000000140B011B7: jmp     loc_140B01242
 * 0000000140B011BC: mov     cr8, r15
 * 0000000140B011C0: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B011C5: mov     eax, [r13+14h]
 * 0000000140B011C9: xor     r14d, r14d
 * 0000000140B011CC: cmp     [rsi+8F8h], r14d
 * 0000000140B011D3: jnz     short loc_140B01242
 * 0000000140B011D5: mov     ecx, eax
 * 0000000140B011D7: mov     eax, ebx
 * 0000000140B011D9: xor     rcx, rax
 * 0000000140B011DC: mov     rax, [rsi+588h]
 * 0000000140B011E3: mov     [rax+18h], rcx
 * 0000000140B011E7: mov     rcx, [r13+8]
 * 0000000140B011EB: cmp     [rsi+8F8h], r14d
 * 0000000140B011F2: jnz     short loc_140B01242
 * 0000000140B011F4: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B011FE: xor     edx, edx
 * 0000000140B01200: add     rax, rsi
 * 0000000140B01203: mov     [rsi+900h], rax
 * 0000000140B0120A: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B01214: add     rax, r13
 * 0000000140B01217: mov     [rsi+908h], rax
 * 0000000140B0121E: movsxd  rax, dword ptr [r13+0]
 * 0000000140B01222: mov     [rsi+910h], rax
 * 0000000140B01229: lea     eax, [r14+1]
 * 0000000140B0122D: mov     [rsi+918h], rcx
 * 0000000140B01234: mov     rcx, rsi
 * 0000000140B01237: mov     [rsi+8F8h], eax
 * 0000000140B0123D: call    $$ba
 * 0000000140B01242: mov     rcx, [rsi+538h]
 * 0000000140B01249: mov     r15, cr8
 * 0000000140B0124D: mov     eax, 0Fh
 * 0000000140B01252: mov     cr8, rax
 * 0000000140B01256: mov     rax, [rsi+150h]
 * 0000000140B0125D: call    KeGuardDispatchICall
 * 0000000140B01262: mov     rax, [rsi+618h]
 * 0000000140B01269: mov     r14, [rsp+0B70h+var_B20]
 * 0000000140B0126E: mov     rcx, [rax]
 * 0000000140B01271: mov     eax, [rcx]
 * 0000000140B01273: lea     rbx, [rcx+10h]
 * 0000000140B01277: mov     r12b, [rcx+0Ch]
 * 0000000140B0127B: lea     rcx, [rax+rax*2]
 * 0000000140B0127F: lea     r13, [rbx+rcx*8]
 * 0000000140B01283: mov     r8d, 18h
 * 0000000140B01289: lea     r9, [r14+18h]
 * 0000000140B0128D: mov     r10, rbx
 * 0000000140B01290: mov     rcx, [r10]
 * 0000000140B01293: add     r10, 8
 * 0000000140B01297: mov     rax, [r9]
 * 0000000140B0129A: add     r9, 8
 * 0000000140B0129E: cmp     rcx, rax
 * 0000000140B012A1: jnz     short loc_140B012D7
 * 0000000140B012A3: add     r8d, 0FFFFFFF8h
 * 0000000140B012A7: cmp     r8d, 8
 * 0000000140B012AB: jnb     short loc_140B01290
 * 0000000140B012AD: test    r8d, r8d
 * 0000000140B012B0: jz      short loc_140B012E0
 * 0000000140B012B2: mov     r11d, 1
 * 0000000140B012B8: movzx   edx, byte ptr [r10]
 * 0000000140B012BC: add     r10, r11
 * 0000000140B012BF: movzx   eax, byte ptr [r9]
 * 0000000140B012C3: add     r9, r11
 * 0000000140B012C6: cmp     rdx, rax
 * 0000000140B012C9: jnz     short loc_140B012D7
 * 0000000140B012CB: mov     eax, 0FFFFFFFFh
 * 0000000140B012D0: add     r8d, eax
 * 0000000140B012D3: jz      short loc_140B012E0
 * 0000000140B012D5: jmp     short loc_140B012B8
 * 0000000140B012D7: add     rbx, 18h
 * 0000000140B012DB: cmp     rbx, r13
 * 0000000140B012DE: jb      short loc_140B01283
 * 0000000140B012E0: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B012E5: mov     rcx, [rsi+538h]
 * 0000000140B012EC: mov     rax, [rsi+190h]
 * 0000000140B012F3: call    KeGuardDispatchICall
 * 0000000140B012F8: movzx   eax, r15b
 * 0000000140B012FC: mov     cr8, rax
 * 0000000140B01300: xor     ecx, ecx
 * 0000000140B01302: test    r12b, r12b
 * 0000000140B01305: jz      loc_140B013C6
 * 0000000140B0130B: mov     eax, [rsi+994h]
 * 0000000140B01311: lea     edx, [rcx+10h]
 * 0000000140B01314: test    dl, al
 * 0000000140B01316: jz      short loc_140B01373
 * 0000000140B01318: cmp     [rsi+8F8h], ecx
 * 0000000140B0131E: jnz     short loc_140B01373
 * 0000000140B01320: mov     rcx, [rsp+0B70h+var_B20]
 * 0000000140B01325: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0132F: add     rax, rsi
 * 0000000140B01332: mov     [rsi+900h], rax
 * 0000000140B01339: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B01343: add     rax, rcx
 * 0000000140B01346: mov     [rsi+908h], rax
 * 0000000140B0134D: movsxd  rax, dword ptr [rcx]
 * 0000000140B01350: mov     rcx, rsi
 * 0000000140B01353: mov     [rsi+910h], rax
 * 0000000140B0135A: lea     eax, [rdx-0Fh]
 * 0000000140B0135D: mov     [rsi+918h], rax
 * 0000000140B01364: xor     edx, edx
 * 0000000140B01366: mov     [rsi+8F8h], eax
 * 0000000140B0136C: call    $$ba
 * 0000000140B01371: xor     ecx, ecx
 * 0000000140B01373: mov     edx, 1
 * 0000000140B01378: cmp     [r14+18h], rdx
 * 0000000140B0137C: jnz     short loc_140B013CB
 * 0000000140B0137E: mov     r12, [rsp+0B70h+var_B20]
 * 0000000140B01383: mov     rcx, [rsi+538h]
 * 0000000140B0138A: mov     r15, cr8
 * 0000000140B0138E: mov     eax, 0Fh
 * 0000000140B01393: mov     cr8, rax
 * 0000000140B01397: mov     rax, [rsi+150h]
 * 0000000140B0139E: call    KeGuardDispatchICall
 * 0000000140B013A3: mov     rax, [rsi+618h]
 * 0000000140B013AA: xor     r13d, r13d
 * 0000000140B013AD: mov     edx, r13d
 * 0000000140B013B0: mov     rcx, [rax]
 * 0000000140B013B3: mov     eax, [rcx]
 * 0000000140B013B5: lea     rbx, [rcx+10h]
 * 0000000140B013B9: lea     rcx, [rax+rax*2]
 * 0000000140B013BD: lea     r14, [rbx+rcx*8]
 * 0000000140B013C1: jmp     loc_140B01456
 * 0000000140B013C6: mov     edx, 1
 * 0000000140B013CB: cmp     rbx, r13
 * 0000000140B013CE: jnz     short loc_140B0137E
 * 0000000140B013D0: mov     r12, [rsp+0B70h+var_B20]
 * 0000000140B013D5: cmp     [rsi+8F8h], ecx
 * 0000000140B013DB: jnz     short loc_140B01383
 * 0000000140B013DD: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B013E7: mov     rcx, rsi
 * 0000000140B013EA: add     rax, rsi
 * 0000000140B013ED: mov     [rsi+900h], rax
 * 0000000140B013F4: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B013FE: add     rax, r12
 * 0000000140B01401: mov     [rsi+908h], rax
 * 0000000140B01408: movsxd  rax, dword ptr [r12]
 * 0000000140B0140C: mov     [rsi+910h], rax
 * 0000000140B01413: mov     [rsi+918h], rbx
 * 0000000140B0141A: mov     [rsi+8F8h], edx
 * 0000000140B01420: xor     edx, edx
 * 0000000140B01422: call    $$ba
 * 0000000140B01427: jmp     loc_140B01383
 * 0000000140B0142C: mov     rcx, [rbx+8]
 * 0000000140B01430: cmp     rcx, rdx
 * 0000000140B01433: jb      short loc_140B0145F
 * 0000000140B01435: mov     rax, rcx
 * 0000000140B01438: and     rax, 0FFFFFFFFFFFFF000h
 * 0000000140B0143E: cmp     rax, rcx
 * 0000000140B01441: jnz     short loc_140B0145F
 * 0000000140B01443: mov     eax, [rbx+10h]
 * 0000000140B01446: add     rax, rcx
 * 0000000140B01449: cmp     rax, rcx
 * 0000000140B0144C: jbe     short loc_140B0145F
 * 0000000140B0144E: cmp     rax, rdx
 * 0000000140B01451: jz      short loc_140B0145F
 * 0000000140B01453: mov     rdx, rax
 * 0000000140B01456: add     rbx, 18h
 * 0000000140B0145A: cmp     rbx, r14
 * 0000000140B0145D: jb      short loc_140B0142C
 * 0000000140B0145F: mov     rcx, [rsi+538h]
 * 0000000140B01466: mov     rax, [rsi+190h]
 * 0000000140B0146D: call    KeGuardDispatchICall
 * 0000000140B01472: movzx   eax, r15b
 * 0000000140B01476: mov     cr8, rax
 * 0000000140B0147A: cmp     rbx, r14
 * 0000000140B0147D: jz      loc_140AFB39B
 * 0000000140B01483: cmp     [rsi+8F8h], r13d
 * 0000000140B0148A: jnz     loc_140AFB39B
 * 0000000140B01490: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0149A: add     rax, rsi
 * 0000000140B0149D: mov     [rsi+900h], rax
 * 0000000140B014A4: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B014AE: add     rax, r12
 * 0000000140B014B1: mov     [rsi+908h], rax
 * 0000000140B014B8: movsxd  rax, dword ptr [r12]
 * 0000000140B014BC: mov     r12d, 1
 * 0000000140B014C2: mov     [rsi+910h], rax
 * 0000000140B014C9: mov     [rsi+918h], rbx
 * 0000000140B014D0: jmp     loc_140AFB421
 * 0000000140B014D5: mov     ecx, [r13+28h]
 * 0000000140B014D9: and     ecx, r11d
 * 0000000140B014DC: jz      loc_140B018D3
 * 0000000140B014E2: xor     r12d, r12d
 * 0000000140B014E5: cmp     [rsi+980h], r12
 * 0000000140B014EC: jz      short loc_140B01557
 * 0000000140B014EE: mov     eax, [rsi+994h]
 * 0000000140B014F4: test    al, 4
 * 0000000140B014F6: jnz     short loc_140B01557
 * 0000000140B014F8: test    ecx, ecx
 * 0000000140B014FA: jz      loc_140B018D6
 * 0000000140B01500: mov     r8d, [rsi+824h]
 * 0000000140B01507: mov     edx, eax
 * 0000000140B01509: test    r8d, r8d
 * 0000000140B0150C: jnz     short loc_140B0154A
 * 0000000140B0150E: lea     ecx, ds:0[rax*8]
 * 0000000140B01515: xor     ecx, eax
 * 0000000140B01517: and     ecx, 20h
 * 0000000140B0151A: xor     ecx, eax
 * 0000000140B0151C: mov     [rsi+994h], ecx
 * 0000000140B01522: cmp     [rsi+980h], r12
 * 0000000140B01529: jz      loc_140B018C7
 * 0000000140B0152F: test    r8d, r8d
 * 0000000140B01532: jnz     short loc_140B01563
 * 0000000140B01534: lea     edx, ds:0[rcx*8]
 * 0000000140B0153B: xor     edx, ecx
 * 0000000140B0153D: and     edx, 20h
 * 0000000140B01540: xor     edx, ecx
 * 0000000140B01542: mov     [rsi+994h], edx
 * 0000000140B01548: jmp     short loc_140B01574
 * 0000000140B0154A: mov     eax, edx
 * 0000000140B0154C: mov     ecx, edx
 * 0000000140B0154E: shr     eax, 3
 * 0000000140B01551: xor     eax, edx
 * 0000000140B01553: test    al, 4
 * 0000000140B01555: jz      short loc_140B01522
 * 0000000140B01557: mov     [rsi+824h], r12d
 * 0000000140B0155E: jmp     loc_140AFB39B
 * 0000000140B01563: mov     eax, ecx
 * 0000000140B01565: mov     edx, ecx
 * 0000000140B01567: shr     eax, 3
 * 0000000140B0156A: xor     eax, ecx
 * 0000000140B0156C: test    al, 4
 * 0000000140B0156E: jnz     loc_140B018C7
 * 0000000140B01574: test    dl, 4
 * 0000000140B01577: jz      loc_140B01647
 * 0000000140B0157D: mov     ecx, [r13+8]
 * 0000000140B01581: mov     r14d, [r13+10h]
 * 0000000140B01585: and     ecx, 0FFFh
 * 0000000140B0158B: mov     rbx, [r13+8]
 * 0000000140B0158F: add     r14, 0FFFh
 * 0000000140B01596: add     r14, rcx
 * 0000000140B01599: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140B015A0: shr     r14, 0Ch
 * 0000000140B015A4: test    r14, r14
 * 0000000140B015A7: jz      loc_140B01AFD
 * 0000000140B015AD: mov     rax, [rsi+2B0h]
 * 0000000140B015B4: mov     rcx, rbx
 * 0000000140B015B7: sub     r14, r11
 * 0000000140B015BA: call    KeGuardDispatchICall
 * 0000000140B015BF: test    al, al
 * 0000000140B015C1: jz      short loc_140B0161B
 * 0000000140B015C3: cmp     [rsi+8F8h], r12d
 * 0000000140B015CA: jnz     short loc_140B0161B
 * 0000000140B015CC: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B015D6: mov     edi, 1
 * 0000000140B015DB: add     rax, rsi
 * 0000000140B015DE: xor     edx, edx
 * 0000000140B015E0: mov     [rsi+900h], rax
 * 0000000140B015E7: mov     rcx, rsi
 * 0000000140B015EA: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B015F4: add     rax, r13
 * 0000000140B015F7: mov     [rsi+908h], rax
 * 0000000140B015FE: movsxd  rax, dword ptr [r13+0]
 * 0000000140B01602: mov     [rsi+910h], rax
 * 0000000140B01609: mov     [rsi+918h], rbx
 * 0000000140B01610: mov     [rsi+8F8h], edi
 * 0000000140B01616: call    $$ba
 * 0000000140B0161B: add     dword ptr [rsi+828h], 100h
 * 0000000140B01625: add     rbx, 1000h
 * 0000000140B0162C: mov     r11d, 1
 * 0000000140B01632: test    r14, r14
 * 0000000140B01635: jnz     loc_140B015AD
 * 0000000140B0163B: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B01642: jmp     loc_140B01AFD
 * 0000000140B01647: mov     r14, [r13+8]
 * 0000000140B0164B: mov     r8d, [r13+10h]
 * 0000000140B0164F: mov     r9, r14
 * 0000000140B01652: add     [rsi+828h], r8d
 * 0000000140B01659: mov     rax, r14
 * 0000000140B0165C: mov     r10d, [rsi+814h]
 * 0000000140B01663: mov     r15, [rsi+818h]
 * 0000000140B0166A: lea     rcx, [r14+r8]
 * 0000000140B0166E: cmp     r14, rcx
 * 0000000140B01671: jnb     short loc_140B01683
 * 0000000140B01673: mov     edx, 40h ; '@'
 * 0000000140B01678: prefetchnta byte ptr [rax]
 * 0000000140B0167B: add     rax, rdx
 * 0000000140B0167E: cmp     rax, rcx
 * 0000000140B01681: jb      short loc_140B01678
 * 0000000140B01683: mov     r11d, r8d
 * 0000000140B01686: mov     rbx, r15
 * 0000000140B01689: shr     r11d, 7
 * 0000000140B0168D: test    r11d, r11d
 * 0000000140B01690: jz      short loc_140B01705
 * 0000000140B01692: mov     esi, 1
 * 0000000140B01697: mov     rdi, 7010008004002001h
 * 0000000140B016A1: mov     eax, 8
 * 0000000140B016A6: xor     rbx, [r9]
 * 0000000140B016A9: mov     ecx, r10d
 * 0000000140B016AC: rol     rbx, cl
 * 0000000140B016AF: xor     rbx, [r9+8]
 * 0000000140B016B3: add     r9, 10h
 * 0000000140B016B7: rol     rbx, cl
 * 0000000140B016BA: sub     rax, rsi
 * 0000000140B016BD: jnz     short loc_140B016A6
 * 0000000140B016BF: mov     rcx, r9
 * 0000000140B016C2: sub     rcx, r14
 * 0000000140B016C5: xor     rcx, r15
 * 0000000140B016C8: mov     rax, rcx
 * 0000000140B016CB: rol     rax, 11h
 * 0000000140B016CF: xor     rcx, rax
 * 0000000140B016D2: mov     rax, rdi
 * 0000000140B016D5: mul     rcx
 * 0000000140B016D8: xor     r10d, edx
 * 0000000140B016DB: mov     [rbp+0A70h+var_5C8], rdx
 * 0000000140B016E2: xor     r10d, eax
 * 0000000140B016E5: mov     edx, 0FFFFFFFFh
 * 0000000140B016EA: and     r10d, 3Fh
 * 0000000140B016EE: cmovz   r10d, esi
 * 0000000140B016F2: add     r11d, edx
 * 0000000140B016F5: jnz     short loc_140B016A1
 * 0000000140B016F7: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B016FC: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B01703: jmp     short loc_140B0170A
 * 0000000140B01705: mov     edx, 0FFFFFFFFh
 * 0000000140B0170A: and     r8d, 7Fh
 * 0000000140B0170E: mov     r11d, 1
 * 0000000140B01714: cmp     r8d, 8
 * 0000000140B01718: jb      short loc_140B01737
 * 0000000140B0171A: mov     eax, r8d
 * 0000000140B0171D: shr     rax, 3
 * 0000000140B01721: xor     rbx, [r9]
 * 0000000140B01724: mov     ecx, r10d
 * 0000000140B01727: rol     rbx, cl
 * 0000000140B0172A: add     r9, 8
 * 0000000140B0172E: add     r8d, 0FFFFFFF8h
 * 0000000140B01732: sub     rax, r11
 * 0000000140B01735: jnz     short loc_140B01721
 * 0000000140B01737: test    r8d, r8d
 * 0000000140B0173A: jz      short loc_140B01751
 * 0000000140B0173C: movzx   eax, byte ptr [r9]
 * 0000000140B01740: mov     ecx, r10d
 * 0000000140B01743: xor     rbx, rax
 * 0000000140B01746: add     r9, r11
 * 0000000140B01749: rol     rbx, cl
 * 0000000140B0174C: add     r8d, edx
 * 0000000140B0174F: jnz     short loc_140B0173C
 * 0000000140B01751: mov     rax, rbx
 * 0000000140B01754: jmp     short loc_140B01758
 * 0000000140B01756: xor     ebx, eax
 * 0000000140B01758: shr     rax, 1Fh
 * 0000000140B0175C: test    rax, rax
 * 0000000140B0175F: jnz     short loc_140B01756
 * 0000000140B01761: mov     edx, [r13+14h]
 * 0000000140B01765: btr     ebx, 1Fh
 * 0000000140B01769: cmp     ebx, edx
 * 0000000140B0176B: jz      loc_140B01AFD
 * 0000000140B01771: mov     ecx, [r13+10h]
 * 0000000140B01775: mov     r8, [r13+8]
 * 0000000140B01779: test    rcx, rcx
 * 0000000140B0177C: jz      loc_140B01840
 * 0000000140B01782: mov     eax, [rsi+994h]
 * 0000000140B01788: mov     r9d, 40h ; '@'
 * 0000000140B0178E: test    r9b, al
 * 0000000140B01791: jz      loc_140B01840
 * 0000000140B01797: mov     r12, cr8
 * 0000000140B0179B: lea     eax, [r9-3Eh]
 * 0000000140B0179F: mov     cr8, rax
 * 0000000140B017A3: mov     r14, r8
 * 0000000140B017A6: lea     rax, [rcx-1]
 * 0000000140B017AA: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140B017B1: add     rax, r8
 * 0000000140B017B4: or      rax, 0FFFh
 * 0000000140B017BA: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B017C1: lea     r13, [r14-1]
 * 0000000140B017C5: movzx   r15d, r12b
 * 0000000140B017C9: mov     rax, [rsi+468h]
 * 0000000140B017D0: xor     edx, edx
 * 0000000140B017D2: mov     rcx, r14
 * 0000000140B017D5: call    KeGuardDispatchICall
 * 0000000140B017DA: cmp     eax, 0C000022Dh
 * 0000000140B017DF: jnz     short loc_140B01805
 * 0000000140B017E1: mov     r11d, 1
 * 0000000140B017E7: cmp     r12b, r11b
 * 0000000140B017EA: ja      short loc_140B0180F
 * 0000000140B017EC: movzx   r15d, r12b
 * 0000000140B017F0: mov     cr8, r15
 * 0000000140B017F4: mov     al, [r14]
 * 0000000140B017F7: mov     rax, cr8
 * 0000000140B017FB: lea     eax, [r11+1]
 * 0000000140B017FF: mov     cr8, rax
 * 0000000140B01803: jmp     short loc_140B017C9
 * 0000000140B01805: test    eax, eax
 * 0000000140B01807: js      short loc_140B01830
 * 0000000140B01809: mov     r11d, 1
 * 0000000140B0180F: mov     r8d, 1000h
 * 0000000140B01815: add     r14, r8
 * 0000000140B01818: add     r13, r8
 * 0000000140B0181B: cmp     r13, [rbp+0A70h+arg_8]
 * 0000000140B01822: jnz     short loc_140B017C5
 * 0000000140B01824: mov     cr8, r15
 * 0000000140B01828: xor     r12d, r12d
 * 0000000140B0182B: jmp     loc_140B01AFD
 * 0000000140B01830: mov     cr8, r15
 * 0000000140B01834: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B01839: xor     r12d, r12d
 * 0000000140B0183C: mov     edx, [r13+14h]
 * 0000000140B01840: cmp     [rsi+8F8h], r12d
 * 0000000140B01847: jnz     loc_140B01AF7
 * 0000000140B0184D: mov     eax, edx
 * 0000000140B0184F: mov     ecx, ebx
 * 0000000140B01851: mov     r15, 0B3B74BDEE4453415h
 * 0000000140B0185B: xor     rcx, rax
 * 0000000140B0185E: mov     rax, [rsi+588h]
 * 0000000140B01865: mov     [rax+18h], rcx
 * 0000000140B01869: mov     rcx, [r13+8]
 * 0000000140B0186D: cmp     [rsi+8F8h], r12d
 * 0000000140B01874: jnz     short loc_140B018BC
 * 0000000140B01876: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B01880: xor     edx, edx
 * 0000000140B01882: add     rax, rsi
 * 0000000140B01885: mov     [rsi+900h], rax
 * 0000000140B0188C: lea     rax, [r15+r13]
 * 0000000140B01890: mov     [rsi+908h], rax
 * 0000000140B01897: movsxd  rax, dword ptr [r13+0]
 * 0000000140B0189B: mov     [rsi+910h], rax
 * 0000000140B018A2: mov     eax, 1
 * 0000000140B018A7: mov     [rsi+918h], rcx
 * 0000000140B018AE: mov     rcx, rsi
 * 0000000140B018B1: mov     [rsi+8F8h], eax
 * 0000000140B018B7: call    $$ba
 * 0000000140B018BC: mov     r11d, 1
 * 0000000140B018C2: jmp     loc_140B01B07
 * 0000000140B018C7: mov     [rsi+824h], r12d
 * 0000000140B018CE: jmp     loc_140B01AFD
 * 0000000140B018D3: xor     r12d, r12d
 * 0000000140B018D6: mov     r14, [r13+8]
 * 0000000140B018DA: mov     r8d, [r13+10h]
 * 0000000140B018DE: mov     r9, r14
 * 0000000140B018E1: add     [rsi+828h], r8d
 * 0000000140B018E8: mov     rax, r14
 * 0000000140B018EB: mov     r10d, [rsi+814h]
 * 0000000140B018F2: mov     r15, [rsi+818h]
 * 0000000140B018F9: lea     rcx, [r14+r8]
 * 0000000140B018FD: cmp     r14, rcx
 * 0000000140B01900: jnb     short loc_140B01912
 * 0000000140B01902: mov     edx, 40h ; '@'
 * 0000000140B01907: prefetchnta byte ptr [rax]
 * 0000000140B0190A: add     rax, rdx
 * 0000000140B0190D: cmp     rax, rcx
 * 0000000140B01910: jb      short loc_140B01907
 * 0000000140B01912: mov     r11d, r8d
 * 0000000140B01915: mov     rbx, r15
 * 0000000140B01918: shr     r11d, 7
 * 0000000140B0191C: test    r11d, r11d
 * 0000000140B0191F: jz      short loc_140B01994
 * 0000000140B01921: mov     esi, 1
 * 0000000140B01926: mov     rdi, 7010008004002001h
 * 0000000140B01930: mov     eax, 8
 * 0000000140B01935: xor     rbx, [r9]
 * 0000000140B01938: mov     ecx, r10d
 * 0000000140B0193B: rol     rbx, cl
 * 0000000140B0193E: xor     rbx, [r9+8]
 * 0000000140B01942: add     r9, 10h
 * 0000000140B01946: rol     rbx, cl
 * 0000000140B01949: sub     rax, rsi
 * 0000000140B0194C: jnz     short loc_140B01935
 * 0000000140B0194E: mov     rcx, r9
 * 0000000140B01951: sub     rcx, r14
 * 0000000140B01954: xor     rcx, r15
 * 0000000140B01957: mov     rax, rcx
 * 0000000140B0195A: rol     rax, 11h
 * 0000000140B0195E: xor     rcx, rax
 * 0000000140B01961: mov     rax, rdi
 * 0000000140B01964: mul     rcx
 * 0000000140B01967: xor     r10d, edx
 * 0000000140B0196A: mov     [rbp+0A70h+var_5C0], rdx
 * 0000000140B01971: xor     r10d, eax
 * 0000000140B01974: mov     edx, 0FFFFFFFFh
 * 0000000140B01979: and     r10d, 3Fh
 * 0000000140B0197D: cmovz   r10d, esi
 * 0000000140B01981: add     r11d, edx
 * 0000000140B01984: jnz     short loc_140B01930
 * 0000000140B01986: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B0198B: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B01992: jmp     short loc_140B01999
 * 0000000140B01994: mov     edx, 0FFFFFFFFh
 * 0000000140B01999: and     r8d, 7Fh
 * 0000000140B0199D: mov     r11d, 1
 * 0000000140B019A3: cmp     r8d, 8
 * 0000000140B019A7: jb      short loc_140B019C6
 * 0000000140B019A9: mov     eax, r8d
 * 0000000140B019AC: shr     rax, 3
 * 0000000140B019B0: xor     rbx, [r9]
 * 0000000140B019B3: mov     ecx, r10d
 * 0000000140B019B6: rol     rbx, cl
 * 0000000140B019B9: add     r9, 8
 * 0000000140B019BD: add     r8d, 0FFFFFFF8h
 * 0000000140B019C1: sub     rax, r11
 * 0000000140B019C4: jnz     short loc_140B019B0
 * 0000000140B019C6: test    r8d, r8d
 * 0000000140B019C9: jz      short loc_140B019E0
 * 0000000140B019CB: movzx   eax, byte ptr [r9]
 * 0000000140B019CF: mov     ecx, r10d
 * 0000000140B019D2: xor     rbx, rax
 * 0000000140B019D5: add     r9, r11
 * 0000000140B019D8: rol     rbx, cl
 * 0000000140B019DB: add     r8d, edx
 * 0000000140B019DE: jnz     short loc_140B019CB
 * 0000000140B019E0: mov     rax, rbx
 * 0000000140B019E3: jmp     short loc_140B019E7
 * 0000000140B019E5: xor     ebx, eax
 * 0000000140B019E7: shr     rax, 1Fh
 * 0000000140B019EB: test    rax, rax
 * 0000000140B019EE: jnz     short loc_140B019E5
 * 0000000140B019F0: btr     ebx, 1Fh
 * 0000000140B019F4: cmp     ebx, [r13+14h]
 * 0000000140B019F8: jz      loc_140B01828
 * 0000000140B019FE: cmp     [r13+0], eax
 * 0000000140B01A02: jnz     short loc_140B01A0C
 * 0000000140B01A04: cmp     [r13+18h], eax
 * 0000000140B01A08: cmovnz  r12d, r11d
 * 0000000140B01A0C: mov     ecx, [r13+10h]
 * 0000000140B01A10: mov     rdx, [r13+8]
 * 0000000140B01A14: test    rcx, rcx
 * 0000000140B01A17: jz      loc_140B01AE3
 * 0000000140B01A1D: mov     eax, [rsi+994h]
 * 0000000140B01A23: mov     r8d, 40h ; '@'
 * 0000000140B01A29: test    r8b, al
 * 0000000140B01A2C: jz      loc_140B01AE3
 * 0000000140B01A32: mov     r13, cr8
 * 0000000140B01A36: lea     eax, [r8-3Eh]
 * 0000000140B01A3A: mov     cr8, rax
 * 0000000140B01A3E: mov     r14, rdx
 * 0000000140B01A41: lea     rax, [rcx-1]
 * 0000000140B01A45: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140B01A4C: add     rax, rdx
 * 0000000140B01A4F: or      rax, 0FFFh
 * 0000000140B01A55: mov     [rsp+0B70h+var_AF8], rax
 * 0000000140B01A5A: lea     rax, [r14-1]
 * 0000000140B01A5E: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B01A65: movzx   r15d, r13b
 * 0000000140B01A69: mov     rax, [rsi+468h]
 * 0000000140B01A70: xor     edx, edx
 * 0000000140B01A72: mov     rcx, r14
 * 0000000140B01A75: call    KeGuardDispatchICall
 * 0000000140B01A7A: cmp     eax, 0C000022Dh
 * 0000000140B01A7F: jnz     short loc_140B01AAA
 * 0000000140B01A81: test    r12d, r12d
 * 0000000140B01A84: jnz     short loc_140B01ADA
 * 0000000140B01A86: lea     r11d, [r12+1]
 * 0000000140B01A8B: cmp     r13b, r11b
 * 0000000140B01A8E: ja      short loc_140B01AB4
 * 0000000140B01A90: movzx   r15d, r13b
 * 0000000140B01A94: mov     cr8, r15
 * 0000000140B01A98: mov     al, [r14]
 * 0000000140B01A9B: mov     rax, cr8
 * 0000000140B01A9F: lea     eax, [r12+2]
 * 0000000140B01AA4: mov     cr8, rax
 * 0000000140B01AA8: jmp     short loc_140B01A69
 * 0000000140B01AAA: test    eax, eax
 * 0000000140B01AAC: js      short loc_140B01ADA
 * 0000000140B01AAE: mov     r11d, 1
 * 0000000140B01AB4: mov     rax, [rbp+0A70h+arg_8]
 * 0000000140B01ABB: mov     r8d, 1000h
 * 0000000140B01AC1: add     rax, r8
 * 0000000140B01AC4: add     r14, r8
 * 0000000140B01AC7: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B01ACE: cmp     rax, [rsp+0B70h+var_AF8]
 * 0000000140B01AD3: jnz     short loc_140B01A65
 * 0000000140B01AD5: jmp     loc_140B01824
 * 0000000140B01ADA: mov     cr8, r15
 * 0000000140B01ADE: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B01AE3: mov     eax, [r13+14h]
 * 0000000140B01AE7: xor     r12d, r12d
 * 0000000140B01AEA: cmp     [rsi+8F8h], r12d
 * 0000000140B01AF1: jz      loc_140B0184F
 * 0000000140B01AF7: mov     r11d, 1
 * 0000000140B01AFD: mov     r15, 0B3B74BDEE4453415h
 * 0000000140B01B07: mov     r14, [rsp+0B70h+var_B20]
 * 0000000140B01B0C: mov     ecx, 2
 * 0000000140B01B11: mov     eax, [r14+28h]
 * 0000000140B01B15: test    cl, al
 * 0000000140B01B17: jz      loc_140AFB39B
 * 0000000140B01B1D: mov     rbx, [r14+8]
 * 0000000140B01B21: mov     r13, 0A3A03F5891C8B4E8h
 * 0000000140B01B2B: test    al, 4
 * 0000000140B01B2D: jz      short loc_140B01BAC
 * 0000000140B01B2F: mov     rax, [rbx+70h]
 * 0000000140B01B33: mov     rdx, [r14+18h]
 * 0000000140B01B37: mov     rcx, [rax]
 * 0000000140B01B3A: cmp     rcx, rdx
 * 0000000140B01B3D: jz      short loc_140B01BAC
 * 0000000140B01B3F: mov     rax, [rsi+588h]
 * 0000000140B01B46: mov     [rax], rcx
 * 0000000140B01B49: mov     dword ptr [rax+10h], 100h
 * 0000000140B01B50: cmp     [rsi+8F8h], r12d
 * 0000000140B01B57: jnz     short loc_140B01BAC
 * 0000000140B01B59: mov     rax, [rsi+588h]
 * 0000000140B01B60: xor     rcx, rdx
 * 0000000140B01B63: mov     [rax+18h], rcx
 * 0000000140B01B67: mov     rcx, [rbx+70h]
 * 0000000140B01B6B: cmp     [rsi+8F8h], r12d
 * 0000000140B01B72: jnz     short loc_140B01BAC
 * 0000000140B01B74: lea     rax, [rsi+r13]
 * 0000000140B01B78: xor     edx, edx
 * 0000000140B01B7A: mov     [rsi+900h], rax
 * 0000000140B01B81: lea     rax, [r14+r15]
 * 0000000140B01B85: mov     [rsi+908h], rax
 * 0000000140B01B8C: movsxd  rax, dword ptr [r14]
 * 0000000140B01B8F: mov     [rsi+910h], rax
 * 0000000140B01B96: mov     [rsi+918h], rcx
 * 0000000140B01B9D: mov     rcx, rsi
 * 0000000140B01BA0: mov     [rsi+8F8h], r11d
 * 0000000140B01BA7: call    $$ba
 * 0000000140B01BAC: mov     eax, [r14+28h]
 * 0000000140B01BB0: test    al, 8
 * 0000000140B01BB2: jz      loc_140AFB39B
 * 0000000140B01BB8: mov     rax, [rbx+78h]
 * 0000000140B01BBC: mov     rdx, [r14+20h]
 * 0000000140B01BC0: mov     rcx, [rax]
 * 0000000140B01BC3: cmp     rcx, rdx
 * 0000000140B01BC6: jz      loc_140AFB39B
 * 0000000140B01BCC: mov     rax, [rsi+588h]
 * 0000000140B01BD3: mov     [rax], rcx
 * 0000000140B01BD6: mov     dword ptr [rax+10h], 100h
 * 0000000140B01BDD: cmp     [rsi+8F8h], r12d
 * 0000000140B01BE4: jnz     loc_140AFB39B
 * 0000000140B01BEA: mov     rax, [rsi+588h]
 * 0000000140B01BF1: xor     rcx, rdx
 * 0000000140B01BF4: mov     [rax+18h], rcx
 * 0000000140B01BF8: cmp     [rsi+8F8h], r12d
 * 0000000140B01BFF: mov     r12d, 1
 * 0000000140B01C05: mov     rcx, [rbx+78h]
 * 0000000140B01C09: jnz     loc_140AFB148
 * 0000000140B01C0F: lea     rax, [rsi+r13]
 * 0000000140B01C13: mov     [rsi+900h], rax
 * 0000000140B01C1A: lea     rax, [r14+r15]
 * 0000000140B01C1E: mov     [rsi+908h], rax
 * 0000000140B01C25: movsxd  rax, dword ptr [r14]
 * 0000000140B01C28: jmp     loc_140AFB413
 * 0000000140B01C2D: mov     rdx, r13
 * 0000000140B01C30: mov     rcx, rsi
 * 0000000140B01C33: call    sub_1403F1E4C
 * 0000000140B01C38: jmp     loc_140AFB39B
 * 0000000140B01C3D: mov     rdx, r13
 * 0000000140B01C40: mov     rcx, rsi
 * 0000000140B01C43: call    sub_1403F2D80
 * 0000000140B01C48: jmp     loc_140AFB39B
 * 0000000140B01C4D: mov     eax, [rsi+830h]
 * 0000000140B01C53: mov     r12d, 1
 * 0000000140B01C59: test    r12b, al
 * 0000000140B01C5C: jz      loc_140AFB148
 * 0000000140B01C62: xor     r14d, r14d
 * 0000000140B01C65: cmp     [rsi+980h], r14
 * 0000000140B01C6C: jz      short loc_140B01CA5
 * 0000000140B01C6E: mov     eax, [rsi+994h]
 * 0000000140B01C74: test    al, 4
 * 0000000140B01C76: jnz     short loc_140B01CA5
 * 0000000140B01C78: mov     rax, [rsi+3D0h]
 * 0000000140B01C7F: lea     rdx, [rbp+0A70h+var_7D8]
 * 0000000140B01C86: xor     r9d, r9d
 * 0000000140B01C89: lea     ecx, [r12+19h]
 * 0000000140B01C8E: xor     r8d, r8d
 * 0000000140B01C91: call    KeGuardDispatchICall
 * 0000000140B01C96: mov     rbx, [rbp+0A70h+var_7D8]
 * 0000000140B01C9D: test    eax, eax
 * 0000000140B01C9F: cmovs   rbx, r14
 * 0000000140B01CA3: jmp     short loc_140B01CA8
 * 0000000140B01CA5: mov     rbx, r14
 * 0000000140B01CA8: mov     rax, [rsi+3B0h]
 * 0000000140B01CAF: xor     ecx, ecx
 * 0000000140B01CB1: mov     [rsp+0B70h+var_B18], rbx
 * 0000000140B01CB6: mov     r15d, r14d
 * 0000000140B01CB9: mov     [rsp+0B70h+var_B00], r14d
 * 0000000140B01CBE: call    KeGuardDispatchICall
 * 0000000140B01CC3: mov     r12, rax
 * 0000000140B01CC6: test    rax, rax
 * 0000000140B01CC9: jz      loc_140B0248C
 * 0000000140B01CCF: mov     rcx, r12
 * 0000000140B01CD2: cmp     rbx, r12
 * 0000000140B01CD5: jnz     loc_140B0207B
 * 0000000140B01CDB: mov     rax, [rsi+3A0h]
 * 0000000140B01CE2: mov     r14, r13
 * 0000000140B01CE5: call    KeGuardDispatchICall
 * 0000000140B01CEA: xor     edi, edi
 * 0000000140B01CEC: test    eax, eax
 * 0000000140B01CEE: js      loc_140B0245F
 * 0000000140B01CF4: mov     rax, [rsi+3E0h]
 * 0000000140B01CFB: mov     rcx, r12
 * 0000000140B01CFE: call    KeGuardDispatchICall
 * 0000000140B01D03: movzx   ebx, al
 * 0000000140B01D06: lea     rdx, [rbp+0A70h+arg_18]
 * 0000000140B01D0D: mov     rax, [rsi+3E8h]
 * 0000000140B01D14: mov     rcx, r12
 * 0000000140B01D17: call    KeGuardDispatchICall
 * 0000000140B01D1C: mov     [rbp+0A70h+var_A9E], al
 * 0000000140B01D1F: mov     rcx, r12
 * 0000000140B01D22: mov     rax, [rsi+3F0h]
 * 0000000140B01D29: call    KeGuardDispatchICall
 * 0000000140B01D2E: mov     [rsp+0B70h+var_AF8], rax
 * 0000000140B01D33: cmp     bl, 61h ; 'a'
 * 0000000140B01D36: jz      short loc_140B01DA6
 * 0000000140B01D38: cmp     [rsi+8F8h], edi
 * 0000000140B01D3E: jnz     short loc_140B01DA6
 * 0000000140B01D40: mov     rax, [rsi+588h]
 * 0000000140B01D47: mov     ecx, ebx
 * 0000000140B01D49: xor     rcx, 61h
 * 0000000140B01D4D: mov     [rax+18h], rcx
 * 0000000140B01D51: cmp     [rsi+8F8h], edi
 * 0000000140B01D57: jnz     short loc_140B01DA6
 * 0000000140B01D59: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B01D63: xor     edx, edx
 * 0000000140B01D65: add     rax, rsi
 * 0000000140B01D68: mov     rcx, rsi
 * 0000000140B01D6B: mov     [rsi+900h], rax
 * 0000000140B01D72: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B01D7C: add     rax, r13
 * 0000000140B01D7F: mov     [rsi+908h], rax
 * 0000000140B01D86: movsxd  rax, dword ptr [r13+0]
 * 0000000140B01D8A: mov     [rsi+910h], rax
 * 0000000140B01D91: lea     eax, [rdi+1]
 * 0000000140B01D94: mov     [rsi+918h], r12
 * 0000000140B01D9B: mov     [rsi+8F8h], eax
 * 0000000140B01DA1: call    $$ba
 * 0000000140B01DA6: mov     ecx, ebx
 * 0000000140B01DA8: mov     byte ptr [rbp+0A70h+arg_8], dil
 * 0000000140B01DAF: and     ecx, 7
 * 0000000140B01DB2: mov     r15b, dil
 * 0000000140B01DB5: sub     ecx, 1
 * 0000000140B01DB8: jz      short loc_140B01E2D
 * 0000000140B01DBA: cmp     ecx, 1
 * 0000000140B01DBD: jz      short loc_140B01E1D
 * 0000000140B01DBF: test    bl, 7
 * 0000000140B01DC2: jz      short loc_140B01E30
 * 0000000140B01DC4: cmp     [rsi+8F8h], edi
 * 0000000140B01DCA: jnz     short loc_140B01E30
 * 0000000140B01DCC: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B01DD6: xor     edx, edx
 * 0000000140B01DD8: add     rax, rsi
 * 0000000140B01DDB: mov     rcx, rsi
 * 0000000140B01DDE: mov     [rsi+900h], rax
 * 0000000140B01DE5: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B01DEF: add     rax, r14
 * 0000000140B01DF2: mov     [rsi+908h], rax
 * 0000000140B01DF9: movsxd  rax, dword ptr [r13+0]
 * 0000000140B01DFD: mov     [rsi+910h], rax
 * 0000000140B01E04: mov     eax, 1
 * 0000000140B01E09: mov     [rsi+918h], r12
 * 0000000140B01E10: mov     [rsi+8F8h], eax
 * 0000000140B01E16: call    $$ba
 * 0000000140B01E1B: jmp     short loc_140B01E30
 * 0000000140B01E1D: mov     eax, 10h
 * 0000000140B01E22: mov     r15b, al
 * 0000000140B01E25: mov     byte ptr [rbp+0A70h+arg_8], al
 * 0000000140B01E2B: jmp     short loc_140B01E30
 * 0000000140B01E2D: mov     r15b, 30h ; '0'
 * 0000000140B01E30: mov     r13, [rsi+5C0h]
 * 0000000140B01E37: xor     ecx, ecx
 * 0000000140B01E39: mov     dil, [rbp+0A70h+var_A9E]
 * 0000000140B01E3D: shr     rbx, 4
 * 0000000140B01E41: or      r15b, [r13+rbx*2+0]
 * 0000000140B01E46: cmp     r15b, dil
 * 0000000140B01E49: mov     r15, [rsp+0B70h+var_B20]
 * 0000000140B01E4E: jz      short loc_140B01EA6
 * 0000000140B01E50: cmp     [rsi+8F8h], ecx
 * 0000000140B01E56: jnz     short loc_140B01EA6
 * 0000000140B01E58: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B01E62: xor     edx, edx
 * 0000000140B01E64: add     rax, rsi
 * 0000000140B01E67: mov     [rsi+900h], rax
 * 0000000140B01E6E: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B01E78: add     rax, r14
 * 0000000140B01E7B: mov     [rsi+908h], rax
 * 0000000140B01E82: movsxd  rax, dword ptr [r15]
 * 0000000140B01E85: mov     [rsi+910h], rax
 * 0000000140B01E8C: lea     eax, [rcx+1]
 * 0000000140B01E8F: mov     [rsi+918h], r12
 * 0000000140B01E96: mov     rcx, rsi
 * 0000000140B01E99: mov     [rsi+8F8h], eax
 * 0000000140B01E9F: call    $$ba
 * 0000000140B01EA4: xor     ecx, ecx
 * 0000000140B01EA6: mov     al, byte ptr [rbp+0A70h+arg_8]
 * 0000000140B01EAC: or      al, [r13+rbx*2+1]
 * 0000000140B01EB1: mov     ebx, 1
 * 0000000140B01EB6: cmp     al, [rbp+0A70h+arg_18]
 * 0000000140B01EBC: jz      short loc_140B01F0F
 * 0000000140B01EBE: cmp     [rsi+8F8h], ecx
 * 0000000140B01EC4: jnz     short loc_140B01F0F
 * 0000000140B01EC6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B01ED0: xor     edx, edx
 * 0000000140B01ED2: add     rax, rsi
 * 0000000140B01ED5: mov     rcx, rsi
 * 0000000140B01ED8: mov     [rsi+900h], rax
 * 0000000140B01EDF: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B01EE9: add     rax, r14
 * 0000000140B01EEC: mov     [rsi+908h], rax
 * 0000000140B01EF3: movsxd  rax, dword ptr [r15]
 * 0000000140B01EF6: mov     [rsi+910h], rax
 * 0000000140B01EFD: mov     [rsi+918h], r12
 * 0000000140B01F04: mov     [rsi+8F8h], ebx
 * 0000000140B01F0A: call    $$ba
 * 0000000140B01F0F: cmp     r12, [rsi+4D8h]
 * 0000000140B01F16: jz      loc_140B02436
 * 0000000140B01F1C: mov     rax, [rsi+3D8h]
 * 0000000140B01F23: mov     edx, ebx
 * 0000000140B01F25: mov     rcx, r12
 * 0000000140B01F28: call    KeGuardDispatchICall
 * 0000000140B01F2D: mov     rbx, rax
 * 0000000140B01F30: test    rax, rax
 * 0000000140B01F33: jz      loc_140B02436
 * 0000000140B01F39: mov     rcx, [rax]
 * 0000000140B01F3C: mov     r13, rax
 * 0000000140B01F3F: test    rcx, rcx
 * 0000000140B01F42: jz      loc_140B02427
 * 0000000140B01F48: mov     r13, [rsp+0B70h+var_AF8]
 * 0000000140B01F4D: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B01F54: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140B01F58: mov     [rbx], rcx
 * 0000000140B01F5B: mov     rax, [rsi+1E0h]
 * 0000000140B01F62: call    KeGuardDispatchICall
 * 0000000140B01F67: mov     rcx, [rbx+8]
 * 0000000140B01F6B: movzx   edx, [rbp+0A70h+arg_18]
 * 0000000140B01F72: mov     r15, rcx
 * 0000000140B01F75: movzx   eax, dil
 * 0000000140B01F79: and     r15, 0FFFFFFFFFFFF0000h
 * 0000000140B01F80: cmp     r15, r13
 * 0000000140B01F83: cmovz   edx, eax
 * 0000000140B01F86: mov     rax, [rsi+3F8h]
 * 0000000140B01F8D: shr     rcx, 6
 * 0000000140B01F91: and     cl, 0Fh
 * 0000000140B01F94: call    KeGuardDispatchICall
 * 0000000140B01F99: xor     r9d, r9d
 * 0000000140B01F9C: test    eax, eax
 * 0000000140B01F9E: jnz     loc_140B02066
 * 0000000140B01FA4: test    dword ptr [rsi+990h], 40000000h
 * 0000000140B01FAE: lea     r10d, [r9+1]
 * 0000000140B01FB2: jz      short loc_140B01FFB
 * 0000000140B01FB4: mov     rcx, [rsi+0A80h]
 * 0000000140B01FBB: lea     edx, [rax+30h]
 * 0000000140B01FBE: lea     r8d, [r9+6]
 * 0000000140B01FC2: mov     rax, [r14]
 * 0000000140B01FC5: add     edx, 0FFFFFFF8h
 * 0000000140B01FC8: mov     [rcx], rax
 * 0000000140B01FCB: add     r14, 8
 * 0000000140B01FCF: add     rcx, 8
 * 0000000140B01FD3: sub     r8, r10
 * 0000000140B01FD6: jnz     short loc_140B01FC2
 * 0000000140B01FD8: test    edx, edx
 * 0000000140B01FDA: jz      short loc_140B01FF4
 * 0000000140B01FDC: mov     edi, 0FFFFFFFFh
 * 0000000140B01FE1: mov     al, [r14]
 * 0000000140B01FE4: add     r14, r10
 * 0000000140B01FE7: mov     [rcx], al
 * 0000000140B01FE9: add     rcx, r10
 * 0000000140B01FEC: add     edx, edi
 * 0000000140B01FEE: jnz     short loc_140B01FE1
 * 0000000140B01FF0: mov     dil, [rbp+0A70h+var_A9E]
 * 0000000140B01FF4: mov     r14, [rsi+0A80h]
 * 0000000140B01FFB: mov     [r14+18h], r15
 * 0000000140B01FFF: mov     rax, [rbx]
 * 0000000140B02002: mov     [r14+20h], rax
 * 0000000140B02006: mov     eax, [rbx+8]
 * 0000000140B02009: shr     rax, 6
 * 0000000140B0200D: and     al, 0Fh
 * 0000000140B0200F: mov     [r14+28h], al
 * 0000000140B02013: cmp     [rsi+8F8h], r9d
 * 0000000140B0201A: jnz     short loc_140B02066
 * 0000000140B0201C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B02026: xor     edx, edx
 * 0000000140B02028: add     rax, rsi
 * 0000000140B0202B: mov     rcx, rsi
 * 0000000140B0202E: mov     [rsi+900h], rax
 * 0000000140B02035: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B0203F: add     rax, r14
 * 0000000140B02042: mov     [rsi+908h], rax
 * 0000000140B02049: movsxd  rax, dword ptr [r14]
 * 0000000140B0204C: mov     [rsi+910h], rax
 * 0000000140B02053: mov     [rsi+918h], r12
 * 0000000140B0205A: mov     [rsi+8F8h], r10d
 * 0000000140B02061: call    $$ba
 * 0000000140B02066: add     rbx, 30h ; '0'
 * 0000000140B0206A: mov     rcx, [rbx]
 * 0000000140B0206D: test    rcx, rcx
 * 0000000140B02070: jnz     loc_140B01F54
 * 0000000140B02076: jmp     loc_140B02420
 * 0000000140B0207B: mov     rax, [rsi+3C8h]
 * 0000000140B02082: call    KeGuardDispatchICall
 * 0000000140B02087: test    eax, eax
 * 0000000140B02089: jz      loc_140B02462
 * 0000000140B0208F: mov     rax, [rsi+3A0h]
 * 0000000140B02096: mov     rcx, r12
 * 0000000140B02099: mov     r14, r13
 * 0000000140B0209C: call    KeGuardDispatchICall
 * 0000000140B020A1: test    eax, eax
 * 0000000140B020A3: js      loc_140B0245F
 * 0000000140B020A9: mov     rax, [rsi+3E0h]
 * 0000000140B020B0: mov     rcx, r12
 * 0000000140B020B3: call    KeGuardDispatchICall
 * 0000000140B020B8: movzx   ebx, al
 * 0000000140B020BB: lea     rdx, [rbp+0A70h+var_AA0]
 * 0000000140B020BF: mov     rax, [rsi+3E8h]
 * 0000000140B020C6: mov     rcx, r12
 * 0000000140B020C9: call    KeGuardDispatchICall
 * 0000000140B020CE: movzx   edi, al
 * 0000000140B020D1: mov     rcx, r12
 * 0000000140B020D4: mov     rax, [rsi+3F0h]
 * 0000000140B020DB: call    KeGuardDispatchICall
 * 0000000140B020E0: xor     edx, edx
 * 0000000140B020E2: mov     [rsp+0B70h+var_B08], rax
 * 0000000140B020E7: cmp     bl, 61h ; 'a'
 * 0000000140B020EA: jz      short loc_140B0215A
 * 0000000140B020EC: cmp     [rsi+8F8h], edx
 * 0000000140B020F2: jnz     short loc_140B0215A
 * 0000000140B020F4: mov     rax, [rsi+588h]
 * 0000000140B020FB: mov     ecx, ebx
 * 0000000140B020FD: xor     rcx, 61h
 * 0000000140B02101: mov     [rax+18h], rcx
 * 0000000140B02105: cmp     [rsi+8F8h], edx
 * 0000000140B0210B: jnz     short loc_140B0215A
 * 0000000140B0210D: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B02117: mov     rcx, rsi
 * 0000000140B0211A: add     rax, rsi
 * 0000000140B0211D: mov     [rsi+900h], rax
 * 0000000140B02124: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B0212E: add     rax, r13
 * 0000000140B02131: mov     [rsi+908h], rax
 * 0000000140B02138: movsxd  rax, dword ptr [r13+0]
 * 0000000140B0213C: mov     [rsi+910h], rax
 * 0000000140B02143: lea     eax, [rdx+1]
 * 0000000140B02146: mov     [rsi+918h], r12
 * 0000000140B0214D: mov     [rsi+8F8h], eax
 * 0000000140B02153: call    $$ba
 * 0000000140B02158: xor     edx, edx
 * 0000000140B0215A: mov     ecx, ebx
 * 0000000140B0215C: mov     byte ptr [rbp+0A70h+arg_8], dl
 * 0000000140B02162: and     ecx, 7
 * 0000000140B02165: mov     r15b, dl
 * 0000000140B02168: sub     ecx, 1
 * 0000000140B0216B: jz      short loc_140B021E2
 * 0000000140B0216D: cmp     ecx, 1
 * 0000000140B02170: jz      short loc_140B021D2
 * 0000000140B02172: test    bl, 7
 * 0000000140B02175: jz      short loc_140B021E5
 * 0000000140B02177: cmp     [rsi+8F8h], edx
 * 0000000140B0217D: jnz     short loc_140B021E5
 * 0000000140B0217F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B02189: xor     edx, edx
 * 0000000140B0218B: add     rax, rsi
 * 0000000140B0218E: mov     rcx, rsi
 * 0000000140B02191: mov     [rsi+900h], rax
 * 0000000140B02198: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B021A2: add     rax, r14
 * 0000000140B021A5: mov     [rsi+908h], rax
 * 0000000140B021AC: movsxd  rax, dword ptr [r13+0]
 * 0000000140B021B0: mov     [rsi+910h], rax
 * 0000000140B021B7: mov     eax, 1
 * 0000000140B021BC: mov     [rsi+918h], r12
 * 0000000140B021C3: mov     [rsi+8F8h], eax
 * 0000000140B021C9: call    $$ba
 * 0000000140B021CE: xor     edx, edx
 * 0000000140B021D0: jmp     short loc_140B021E5
 * 0000000140B021D2: mov     eax, 10h
 * 0000000140B021D7: mov     r15b, al
 * 0000000140B021DA: mov     byte ptr [rbp+0A70h+arg_8], al
 * 0000000140B021E0: jmp     short loc_140B021E5
 * 0000000140B021E2: mov     r15b, 30h ; '0'
 * 0000000140B021E5: mov     r13, [rsi+5C0h]
 * 0000000140B021EC: shr     rbx, 4
 * 0000000140B021F0: or      r15b, [r13+rbx*2+0]
 * 0000000140B021F5: cmp     r15b, dil
 * 0000000140B021F8: mov     r15, [rsp+0B70h+var_B20]
 * 0000000140B021FD: jz      short loc_140B02255
 * 0000000140B021FF: cmp     [rsi+8F8h], edx
 * 0000000140B02205: jnz     short loc_140B02255
 * 0000000140B02207: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B02211: xor     edx, edx
 * 0000000140B02213: add     rax, rsi
 * 0000000140B02216: mov     rcx, rsi
 * 0000000140B02219: mov     [rsi+900h], rax
 * 0000000140B02220: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B0222A: add     rax, r14
 * 0000000140B0222D: mov     [rsi+908h], rax
 * 0000000140B02234: movsxd  rax, dword ptr [r15]
 * 0000000140B02237: mov     [rsi+910h], rax
 * 0000000140B0223E: mov     eax, 1
 * 0000000140B02243: mov     [rsi+918h], r12
 * 0000000140B0224A: mov     [rsi+8F8h], eax
 * 0000000140B02250: call    $$ba
 * 0000000140B02255: mov     al, byte ptr [rbp+0A70h+arg_8]
 * 0000000140B0225B: or      al, [r13+rbx*2+1]
 * 0000000140B02260: mov     ebx, 1
 * 0000000140B02265: cmp     al, [rbp+0A70h+var_AA0]
 * 0000000140B02268: jz      short loc_140B022BD
 * 0000000140B0226A: xor     eax, eax
 * 0000000140B0226C: cmp     [rsi+8F8h], eax
 * 0000000140B02272: jnz     short loc_140B022BD
 * 0000000140B02274: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0227E: xor     edx, edx
 * 0000000140B02280: add     rax, rsi
 * 0000000140B02283: mov     rcx, rsi
 * 0000000140B02286: mov     [rsi+900h], rax
 * 0000000140B0228D: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B02297: add     rax, r14
 * 0000000140B0229A: mov     [rsi+908h], rax
 * 0000000140B022A1: movsxd  rax, dword ptr [r15]
 * 0000000140B022A4: mov     [rsi+910h], rax
 * 0000000140B022AB: mov     [rsi+918h], r12
 * 0000000140B022B2: mov     [rsi+8F8h], ebx
 * 0000000140B022B8: call    $$ba
 * 0000000140B022BD: cmp     r12, [rsi+4D8h]
 * 0000000140B022C4: jz      loc_140B02436
 * 0000000140B022CA: mov     rax, [rsi+3D8h]
 * 0000000140B022D1: mov     edx, ebx
 * 0000000140B022D3: mov     rcx, r12
 * 0000000140B022D6: call    KeGuardDispatchICall
 * 0000000140B022DB: mov     rbx, rax
 * 0000000140B022DE: test    rax, rax
 * 0000000140B022E1: jz      loc_140B02436
 * 0000000140B022E7: mov     rcx, [rax]
 * 0000000140B022EA: mov     r13, rax
 * 0000000140B022ED: test    rcx, rcx
 * 0000000140B022F0: jz      loc_140B02427
 * 0000000140B022F6: mov     r13, [rsp+0B70h+var_B08]
 * 0000000140B022FB: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B02302: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140B02306: mov     [rbx], rcx
 * 0000000140B02309: mov     rax, [rsi+1E0h]
 * 0000000140B02310: call    KeGuardDispatchICall
 * 0000000140B02315: mov     rcx, [rbx+8]
 * 0000000140B02319: movzx   edx, [rbp+0A70h+var_AA0]
 * 0000000140B0231D: mov     r15, rcx
 * 0000000140B02320: mov     rax, [rsi+3F8h]
 * 0000000140B02327: and     r15, 0FFFFFFFFFFFF0000h
 * 0000000140B0232E: cmp     r15, r13
 * 0000000140B02331: cmovz   edx, edi
 * 0000000140B02334: shr     rcx, 6
 * 0000000140B02338: and     cl, 0Fh
 * 0000000140B0233B: call    KeGuardDispatchICall
 * 0000000140B02340: xor     r9d, r9d
 * 0000000140B02343: test    eax, eax
 * 0000000140B02345: jnz     loc_140B02410
 * 0000000140B0234B: test    dword ptr [rsi+990h], 40000000h
 * 0000000140B02355: lea     r10d, [r9+1]
 * 0000000140B02359: jz      short loc_140B023A5
 * 0000000140B0235B: mov     rcx, [rsi+0A80h]
 * 0000000140B02362: lea     edx, [rax+30h]
 * 0000000140B02365: lea     r8d, [r9+6]
 * 0000000140B02369: mov     rax, [r14]
 * 0000000140B0236C: add     edx, 0FFFFFFF8h
 * 0000000140B0236F: mov     [rcx], rax
 * 0000000140B02372: add     r14, 8
 * 0000000140B02376: add     rcx, 8
 * 0000000140B0237A: sub     r8, r10
 * 0000000140B0237D: jnz     short loc_140B02369
 * 0000000140B0237F: test    edx, edx
 * 0000000140B02381: jz      short loc_140B0239E
 * 0000000140B02383: mov     r13d, 0FFFFFFFFh
 * 0000000140B02389: mov     al, [r14]
 * 0000000140B0238C: add     r14, r10
 * 0000000140B0238F: mov     [rcx], al
 * 0000000140B02391: add     rcx, r10
 * 0000000140B02394: add     edx, r13d
 * 0000000140B02397: jnz     short loc_140B02389
 * 0000000140B02399: mov     r13, [rsp+0B70h+var_B08]
 * 0000000140B0239E: mov     r14, [rsi+0A80h]
 * 0000000140B023A5: mov     [r14+18h], r15
 * 0000000140B023A9: mov     rax, [rbx]
 * 0000000140B023AC: mov     [r14+20h], rax
 * 0000000140B023B0: mov     eax, [rbx+8]
 * 0000000140B023B3: shr     rax, 6
 * 0000000140B023B7: and     al, 0Fh
 * 0000000140B023B9: mov     [r14+28h], al
 * 0000000140B023BD: cmp     [rsi+8F8h], r9d
 * 0000000140B023C4: jnz     short loc_140B02410
 * 0000000140B023C6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B023D0: xor     edx, edx
 * 0000000140B023D2: add     rax, rsi
 * 0000000140B023D5: mov     rcx, rsi
 * 0000000140B023D8: mov     [rsi+900h], rax
 * 0000000140B023DF: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B023E9: add     rax, r14
 * 0000000140B023EC: mov     [rsi+908h], rax
 * 0000000140B023F3: movsxd  rax, dword ptr [r14]
 * 0000000140B023F6: mov     [rsi+910h], rax
 * 0000000140B023FD: mov     [rsi+918h], r12
 * 0000000140B02404: mov     [rsi+8F8h], r10d
 * 0000000140B0240B: call    $$ba
 * 0000000140B02410: add     rbx, 30h ; '0'
 * 0000000140B02414: mov     rcx, [rbx]
 * 0000000140B02417: test    rcx, rcx
 * 0000000140B0241A: jnz     loc_140B02302
 * 0000000140B02420: mov     r13, [rbp+0A70h+arg_8]
 * 0000000140B02427: mov     rax, [rsi+0F8h]
 * 0000000140B0242E: mov     rcx, r13
 * 0000000140B02431: call    KeGuardDispatchICall
 * 0000000140B02436: mov     rax, [rsi+3A8h]
 * 0000000140B0243D: mov     rcx, r12
 * 0000000140B02440: call    KeGuardDispatchICall
 * 0000000140B02445: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B0244A: mov     eax, 8000h
 * 0000000140B0244F: add     [rsi+828h], eax
 * 0000000140B02455: mov     r15d, [rsp+0B70h+var_B00]
 * 0000000140B0245A: mov     rbx, [rsp+0B70h+var_B18]
 * 0000000140B0245F: xor     r14d, r14d
 * 0000000140B02462: mov     rax, [rsi+3B0h]
 * 0000000140B02469: inc     r15d
 * 0000000140B0246C: mov     rcx, r12
 * 0000000140B0246F: mov     [rsp+0B70h+var_B00], r15d
 * 0000000140B02474: call    KeGuardDispatchICall
 * 0000000140B02479: mov     r12, rax
 * 0000000140B0247C: test    rax, rax
 * 0000000140B0247F: jnz     loc_140B01CCF
 * 0000000140B02485: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0248C: mov     r13, [rsi+4D8h]
 * 0000000140B02493: mov     rax, [rsi+3A0h]
 * 0000000140B0249A: mov     rcx, r13
 * 0000000140B0249D: call    KeGuardDispatchICall
 * 0000000140B024A2: test    eax, eax
 * 0000000140B024A4: js      loc_140B0286D
 * 0000000140B024AA: mov     rax, [rsi+3E0h]
 * 0000000140B024B1: mov     rcx, r13
 * 0000000140B024B4: call    KeGuardDispatchICall
 * 0000000140B024B9: movzx   ebx, al
 * 0000000140B024BC: lea     rdx, [rbp+0A70h+var_A9F]
 * 0000000140B024C0: mov     rax, [rsi+3E8h]
 * 0000000140B024C7: mov     rcx, r13
 * 0000000140B024CA: call    KeGuardDispatchICall
 * 0000000140B024CF: mov     byte ptr [rbp+0A70h+arg_8], al
 * 0000000140B024D5: mov     rcx, r13
 * 0000000140B024D8: mov     rax, [rsi+3F0h]
 * 0000000140B024DF: call    KeGuardDispatchICall
 * 0000000140B024E4: mov     [rsp+0B70h+var_AF8], rax
 * 0000000140B024E9: cmp     bl, 72h ; 'r'
 * 0000000140B024EC: jz      short loc_140B02566
 * 0000000140B024EE: cmp     [rsi+8F8h], r14d
 * 0000000140B024F5: jnz     short loc_140B02566
 * 0000000140B024F7: mov     rax, [rsi+588h]
 * 0000000140B024FE: mov     ecx, ebx
 * 0000000140B02500: mov     r15, [rsp+0B70h+var_B20]
 * 0000000140B02505: xor     rcx, 72h
 * 0000000140B02509: mov     [rax+18h], rcx
 * 0000000140B0250D: cmp     [rsi+8F8h], r14d
 * 0000000140B02514: jnz     short loc_140B0256B
 * 0000000140B02516: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B02520: xor     edx, edx
 * 0000000140B02522: add     rax, rsi
 * 0000000140B02525: mov     rcx, rsi
 * 0000000140B02528: mov     [rsi+900h], rax
 * 0000000140B0252F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B02539: add     rax, r15
 * 0000000140B0253C: mov     [rsi+908h], rax
 * 0000000140B02543: movsxd  rax, dword ptr [r15]
 * 0000000140B02546: mov     [rsi+910h], rax
 * 0000000140B0254D: mov     eax, 1
 * 0000000140B02552: mov     [rsi+918h], r13
 * 0000000140B02559: mov     [rsi+8F8h], eax
 * 0000000140B0255F: call    $$ba
 * 0000000140B02564: jmp     short loc_140B0256B
 * 0000000140B02566: mov     r15, [rsp+0B70h+var_B20]
 * 0000000140B0256B: xor     edx, edx
 * 0000000140B0256D: mov     ecx, ebx
 * 0000000140B0256F: and     ecx, 7
 * 0000000140B02572: mov     r12b, dl
 * 0000000140B02575: sub     ecx, 1
 * 0000000140B02578: jz      short loc_140B025E7
 * 0000000140B0257A: cmp     ecx, 1
 * 0000000140B0257D: jz      short loc_140B025DA
 * 0000000140B0257F: test    bl, 7
 * 0000000140B02582: jz      short loc_140B025EA
 * 0000000140B02584: cmp     [rsi+8F8h], edx
 * 0000000140B0258A: jnz     short loc_140B025EA
 * 0000000140B0258C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B02596: mov     rcx, rsi
 * 0000000140B02599: add     rax, rsi
 * 0000000140B0259C: mov     [rsi+900h], rax
 * 0000000140B025A3: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B025AD: add     rax, r15
 * 0000000140B025B0: mov     [rsi+908h], rax
 * 0000000140B025B7: movsxd  rax, dword ptr [r15]
 * 0000000140B025BA: mov     [rsi+910h], rax
 * 0000000140B025C1: lea     eax, [rdx+1]
 * 0000000140B025C4: mov     [rsi+918h], r13
 * 0000000140B025CB: mov     [rsi+8F8h], eax
 * 0000000140B025D1: call    $$ba
 * 0000000140B025D6: xor     edx, edx
 * 0000000140B025D8: jmp     short loc_140B025EA
 * 0000000140B025DA: mov     eax, 10h
 * 0000000140B025DF: mov     r14b, al
 * 0000000140B025E2: mov     r12b, al
 * 0000000140B025E5: jmp     short loc_140B025EA
 * 0000000140B025E7: mov     r14b, 30h ; '0'
 * 0000000140B025EA: mov     r15, [rsi+5C0h]
 * 0000000140B025F1: shr     rbx, 4
 * 0000000140B025F5: or      r14b, [r15+rbx*2]
 * 0000000140B025F9: cmp     r14b, byte ptr [rbp+0A70h+arg_8]
 * 0000000140B02600: mov     r14, [rsp+0B70h+var_B20]
 * 0000000140B02605: jz      short loc_140B0265D
 * 0000000140B02607: cmp     [rsi+8F8h], edx
 * 0000000140B0260D: jnz     short loc_140B0265D
 * 0000000140B0260F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B02619: xor     edx, edx
 * 0000000140B0261B: add     rax, rsi
 * 0000000140B0261E: mov     rcx, rsi
 * 0000000140B02621: mov     [rsi+900h], rax
 * 0000000140B02628: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B02632: add     rax, r14
 * 0000000140B02635: mov     [rsi+908h], rax
 * 0000000140B0263C: movsxd  rax, dword ptr [r14]
 * 0000000140B0263F: mov     [rsi+910h], rax
 * 0000000140B02646: mov     eax, 1
 * 0000000140B0264B: mov     [rsi+918h], r13
 * 0000000140B02652: mov     [rsi+8F8h], eax
 * 0000000140B02658: call    $$ba
 * 0000000140B0265D: or      r12b, [r15+rbx*2+1]
 * 0000000140B02662: mov     ebx, 1
 * 0000000140B02667: cmp     r12b, [rbp+0A70h+var_A9F]
 * 0000000140B0266B: jz      short loc_140B026C2
 * 0000000140B0266D: xor     r12d, r12d
 * 0000000140B02670: cmp     [rsi+8F8h], r12d
 * 0000000140B02677: jnz     short loc_140B026C2
 * 0000000140B02679: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B02683: xor     edx, edx
 * 0000000140B02685: add     rax, rsi
 * 0000000140B02688: mov     rcx, rsi
 * 0000000140B0268B: mov     [rsi+900h], rax
 * 0000000140B02692: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B0269C: add     rax, r14
 * 0000000140B0269F: mov     [rsi+908h], rax
 * 0000000140B026A6: movsxd  rax, dword ptr [r14]
 * 0000000140B026A9: mov     [rsi+910h], rax
 * 0000000140B026B0: mov     [rsi+918h], r13
 * 0000000140B026B7: mov     [rsi+8F8h], ebx
 * 0000000140B026BD: call    $$ba
 * 0000000140B026C2: cmp     r13, [rsi+4D8h]
 * 0000000140B026C9: jz      loc_140B0284E
 * 0000000140B026CF: mov     rax, [rsi+3D8h]
 * 0000000140B026D6: mov     edx, ebx
 * 0000000140B026D8: mov     rcx, r13
 * 0000000140B026DB: call    KeGuardDispatchICall
 * 0000000140B026E0: mov     rbx, rax
 * 0000000140B026E3: test    rax, rax
 * 0000000140B026E6: jz      loc_140B0284E
 * 0000000140B026EC: mov     rcx, [rax]
 * 0000000140B026EF: mov     r15, rax
 * 0000000140B026F2: test    rcx, rcx
 * 0000000140B026F5: jz      loc_140B0283F
 * 0000000140B026FB: mov     dil, byte ptr [rbp+0A70h+arg_8]
 * 0000000140B02702: mov     r12, [rsp+0B70h+var_AF8]
 * 0000000140B02707: mov     r15, [rsp+0B70h+var_B20]
 * 0000000140B0270C: mov     [rsp+0B70h+var_B08], rax
 * 0000000140B02711: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140B02715: mov     [rbx], rcx
 * 0000000140B02718: mov     rax, [rsi+1E0h]
 * 0000000140B0271F: call    KeGuardDispatchICall
 * 0000000140B02724: mov     rcx, [rbx+8]
 * 0000000140B02728: movzx   edx, [rbp+0A70h+var_A9F]
 * 0000000140B0272C: mov     r14, rcx
 * 0000000140B0272F: movzx   eax, dil
 * 0000000140B02733: and     r14, 0FFFFFFFFFFFF0000h
 * 0000000140B0273A: cmp     r14, r12
 * 0000000140B0273D: cmovz   edx, eax
 * 0000000140B02740: mov     rax, [rsi+3F8h]
 * 0000000140B02747: shr     rcx, 6
 * 0000000140B0274B: and     cl, 0Fh
 * 0000000140B0274E: call    KeGuardDispatchICall
 * 0000000140B02753: xor     r9d, r9d
 * 0000000140B02756: test    eax, eax
 * 0000000140B02758: jnz     loc_140B02823
 * 0000000140B0275E: test    dword ptr [rsi+990h], 40000000h
 * 0000000140B02768: lea     r10d, [r9+1]
 * 0000000140B0276C: jz      short loc_140B027B8
 * 0000000140B0276E: mov     rcx, [rsi+0A80h]
 * 0000000140B02775: lea     edx, [rax+30h]
 * 0000000140B02778: lea     r8d, [r9+6]
 * 0000000140B0277C: mov     rax, [r15]
 * 0000000140B0277F: add     edx, 0FFFFFFF8h
 * 0000000140B02782: mov     [rcx], rax
 * 0000000140B02785: add     r15, 8
 * 0000000140B02789: add     rcx, 8
 * 0000000140B0278D: sub     r8, r10
 * 0000000140B02790: jnz     short loc_140B0277C
 * 0000000140B02792: test    edx, edx
 * 0000000140B02794: jz      short loc_140B027B1
 * 0000000140B02796: mov     edi, 0FFFFFFFFh
 * 0000000140B0279B: mov     al, [r15]
 * 0000000140B0279E: add     r15, r10
 * 0000000140B027A1: mov     [rcx], al
 * 0000000140B027A3: add     rcx, r10
 * 0000000140B027A6: add     edx, edi
 * 0000000140B027A8: jnz     short loc_140B0279B
 * 0000000140B027AA: mov     dil, byte ptr [rbp+0A70h+arg_8]
 * 0000000140B027B1: mov     r15, [rsi+0A80h]
 * 0000000140B027B8: mov     [r15+18h], r14
 * 0000000140B027BC: mov     rax, [rbx]
 * 0000000140B027BF: mov     [r15+20h], rax
 * 0000000140B027C3: mov     eax, [rbx+8]
 * 0000000140B027C6: shr     rax, 6
 * 0000000140B027CA: and     al, 0Fh
 * 0000000140B027CC: mov     [r15+28h], al
 * 0000000140B027D0: cmp     [rsi+8F8h], r9d
 * 0000000140B027D7: jnz     short loc_140B02823
 * 0000000140B027D9: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B027E3: xor     edx, edx
 * 0000000140B027E5: add     rax, rsi
 * 0000000140B027E8: mov     rcx, rsi
 * 0000000140B027EB: mov     [rsi+900h], rax
 * 0000000140B027F2: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B027FC: add     rax, r15
 * 0000000140B027FF: mov     [rsi+908h], rax
 * 0000000140B02806: movsxd  rax, dword ptr [r15]
 * 0000000140B02809: mov     [rsi+910h], rax
 * 0000000140B02810: mov     [rsi+918h], r13
 * 0000000140B02817: mov     [rsi+8F8h], r10d
 * 0000000140B0281E: call    $$ba
 * 0000000140B02823: add     rbx, 30h ; '0'
 * 0000000140B02827: mov     rcx, [rbx]
 * 0000000140B0282A: test    rcx, rcx
 * 0000000140B0282D: jnz     loc_140B02711
 * 0000000140B02833: mov     r15, [rsp+0B70h+var_B08]
 * 0000000140B02838: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0283F: mov     rax, [rsi+0F8h]
 * 0000000140B02846: mov     rcx, r15
 * 0000000140B02849: call    KeGuardDispatchICall
 * 0000000140B0284E: mov     rax, [rsi+3A8h]
 * 0000000140B02855: mov     rcx, r13
 * 0000000140B02858: call    KeGuardDispatchICall
 * 0000000140B0285D: mov     r15d, [rsp+0B70h+var_B00]
 * 0000000140B02862: mov     eax, 8000h
 * 0000000140B02867: add     [rsi+828h], eax
 * 0000000140B0286D: mov     rcx, [rsp+0B70h+var_B18]
 * 0000000140B02872: test    rcx, rcx
 * 0000000140B02875: jz      short loc_140B02883
 * 0000000140B02877: mov     rax, [rsi+1E0h]
 * 0000000140B0287E: call    KeGuardDispatchICall
 * 0000000140B02883: shl     r15d, 8
 * 0000000140B02887: add     [rsi+828h], r15d
 * 0000000140B0288E: jmp     loc_140AFB39B
 * 0000000140B02893: xor     r14d, r14d
 * 0000000140B02896: test    [r13+2Ah], r11b
 * 0000000140B0289A: jz      short loc_140B028D9
 * 0000000140B0289C: cmp     [rsi+980h], r14
 * 0000000140B028A3: jz      loc_140B02963
 * 0000000140B028A9: mov     ecx, [rsi+994h]
 * 0000000140B028AF: test    cl, 4
 * 0000000140B028B2: jnz     loc_140B02963
 * 0000000140B028B8: cmp     [rsi+824h], r14d
 * 0000000140B028BF: jnz     loc_140B0295A
 * 0000000140B028C5: lea     eax, ds:0[rcx*8]
 * 0000000140B028CC: xor     eax, ecx
 * 0000000140B028CE: and     eax, 20h
 * 0000000140B028D1: xor     eax, ecx
 * 0000000140B028D3: mov     [rsi+994h], eax
 * 0000000140B028D9: mov     r10, [r13+8]
 * 0000000140B028DD: mov     r8d, [rsi+824h]
 * 0000000140B028E4: mov     [rbp+0A70h+var_A98], r10
 * 0000000140B028E8: lea     rax, [r8+r8*2]
 * 0000000140B028EC: lea     rcx, [r10+rax*4]
 * 0000000140B028F0: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140B028FA: lea     r11, [rcx+0Ch]
 * 0000000140B028FE: mov     [rsp+0B70h+var_AF8], rcx
 * 0000000140B02903: mov     ecx, [r13+24h]
 * 0000000140B02907: mul     rcx
 * 0000000140B0290A: mov     [rsp+0B70h+var_B08], r11
 * 0000000140B0290F: mov     r9, rdx
 * 0000000140B02912: shr     r9, 3
 * 0000000140B02916: mov     eax, r9d
 * 0000000140B02919: mov     [rbp+0A70h+var_AC8], r9
 * 0000000140B0291D: lea     rcx, [rax+rax*2]
 * 0000000140B02921: lea     rax, [r10+rcx*4]
 * 0000000140B02925: mov     [rbp+0A70h+var_AF0], rax
 * 0000000140B02929: lea     rax, [r13+30h]
 * 0000000140B0292D: lea     r15, [rax+r8]
 * 0000000140B02931: mov     [rsp+0B70h+var_B18], r15
 * 0000000140B02936: lea     r10d, [r9-1]
 * 0000000140B0293A: mov     dword ptr [rbp+0A70h+arg_8], r10d
 * 0000000140B02941: test    r9d, r9d
 * 0000000140B02944: jz      short loc_140B0296F
 * 0000000140B02946: mov     edx, r10d
 * 0000000140B02949: add     rdx, 7
 * 0000000140B0294D: and     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140B02951: add     rdx, rax
 * 0000000140B02954: mov     [rbp+0A70h+var_AE8], rdx
 * 0000000140B02958: jmp     short loc_140B0297D
 * 0000000140B0295A: test    cl, 20h
 * 0000000140B0295D: jz      loc_140B028D9
 * 0000000140B02963: mov     [rsi+824h], r14d
 * 0000000140B0296A: jmp     loc_140AFB39B
 * 0000000140B0296F: mov     rdx, rax
 * 0000000140B02972: mov     [rbp+0A70h+var_AE8], rax
 * 0000000140B02976: mov     dword ptr [rbp+0A70h+arg_8], r10d
 * 0000000140B0297D: movzx   eax, word ptr [r13+28h]
 * 0000000140B02982: lea     rcx, [rax+rax*2]
 * 0000000140B02986: lea     rax, [rdx+rcx*8]
 * 0000000140B0298A: mov     [rbp+0A70h+var_A70], rax
 * 0000000140B0298E: test    r9d, r9d
 * 0000000140B02991: jz      loc_140B02CC3
 * 0000000140B02997: cmp     r8d, r10d
 * 0000000140B0299A: jnb     loc_140B02CC3
 * 0000000140B029A0: mov     rdi, [rsp+0B70h+var_AF8]
 * 0000000140B029A5: mov     edx, 1
 * 0000000140B029AA: lea     ebx, [rdx+0Bh]
 * 0000000140B029AD: cmp     [r15], r14b
 * 0000000140B029B0: jl      loc_140B02C54
 * 0000000140B029B6: mov     eax, [rdi+4]
 * 0000000140B029B9: mov     r9d, [r11]
 * 0000000140B029BC: mov     r13d, eax
 * 0000000140B029BF: sub     r9d, eax
 * 0000000140B029C2: mov     rax, [rsp+0B70h+var_B20]
 * 0000000140B029C7: mov     r12d, r9d
 * 0000000140B029CA: mov     [rsp+0B70h+var_AF8], r12
 * 0000000140B029CF: add     r13, [rax+18h]
 * 0000000140B029D3: add     [rsi+828h], r9d
 * 0000000140B029DA: mov     r10, r13
 * 0000000140B029DD: mov     ebx, [rsi+814h]
 * 0000000140B029E3: mov     rax, r13
 * 0000000140B029E6: mov     r14, [rsi+818h]
 * 0000000140B029ED: lea     rcx, [r9+r13]
 * 0000000140B029F1: mov     [rbp+0A70h+var_AB0], r13
 * 0000000140B029F5: cmp     r13, rcx
 * 0000000140B029F8: jnb     short loc_140B02A0B
 * 0000000140B029FA: mov     r8d, 40h ; '@'
 * 0000000140B02A00: prefetchnta byte ptr [rax]
 * 0000000140B02A03: add     rax, r8
 * 0000000140B02A06: cmp     rax, rcx
 * 0000000140B02A09: jb      short loc_140B02A00
 * 0000000140B02A0B: mov     r11d, r9d
 * 0000000140B02A0E: mov     r8, r14
 * 0000000140B02A11: shr     r11d, 7
 * 0000000140B02A15: test    r11d, r11d
 * 0000000140B02A18: jz      short loc_140B02A89
 * 0000000140B02A1A: mov     esi, 0FFFFFFFFh
 * 0000000140B02A1F: mov     r12, 7010008004002001h
 * 0000000140B02A29: mov     eax, 8
 * 0000000140B02A2E: xor     r8, [r10]
 * 0000000140B02A31: mov     ecx, ebx
 * 0000000140B02A33: rol     r8, cl
 * 0000000140B02A36: xor     r8, [r10+8]
 * 0000000140B02A3A: add     r10, 10h
 * 0000000140B02A3E: rol     r8, cl
 * 0000000140B02A41: sub     rax, rdx
 * 0000000140B02A44: jnz     short loc_140B02A2E
 * 0000000140B02A46: mov     rcx, r10
 * 0000000140B02A49: sub     rcx, r13
 * 0000000140B02A4C: xor     rcx, r14
 * 0000000140B02A4F: mov     rax, rcx
 * 0000000140B02A52: rol     rax, 11h
 * 0000000140B02A56: xor     rcx, rax
 * 0000000140B02A59: mov     rax, r12
 * 0000000140B02A5C: mul     rcx
 * 0000000140B02A5F: xor     ebx, eax
 * 0000000140B02A61: mov     [rbp+0A70h+var_5B8], rdx
 * 0000000140B02A68: xor     ebx, edx
 * 0000000140B02A6A: mov     edx, 1
 * 0000000140B02A6F: and     ebx, 3Fh
 * 0000000140B02A72: cmovz   ebx, edx
 * 0000000140B02A75: add     r11d, esi
 * 0000000140B02A78: jnz     short loc_140B02A29
 * 0000000140B02A7A: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B02A7F: mov     r12, [rsp+0B70h+var_AF8]
 * 0000000140B02A84: mov     r15, [rsp+0B70h+var_B18]
 * 0000000140B02A89: and     r9d, 7Fh
 * 0000000140B02A8D: cmp     r9d, 8
 * 0000000140B02A91: jb      short loc_140B02AAF
 * 0000000140B02A93: mov     eax, r9d
 * 0000000140B02A96: shr     rax, 3
 * 0000000140B02A9A: xor     r8, [r10]
 * 0000000140B02A9D: mov     ecx, ebx
 * 0000000140B02A9F: rol     r8, cl
 * 0000000140B02AA2: add     r10, 8
 * 0000000140B02AA6: add     r9d, 0FFFFFFF8h
 * 0000000140B02AAA: sub     rax, rdx
 * 0000000140B02AAD: jnz     short loc_140B02A9A
 * 0000000140B02AAF: xor     r14d, r14d
 * 0000000140B02AB2: test    r9d, r9d
 * 0000000140B02AB5: jz      short loc_140B02AD5
 * 0000000140B02AB7: mov     esi, 0FFFFFFFFh
 * 0000000140B02ABC: movzx   eax, byte ptr [r10]
 * 0000000140B02AC0: mov     ecx, ebx
 * 0000000140B02AC2: xor     r8, rax
 * 0000000140B02AC5: add     r10, rdx
 * 0000000140B02AC8: rol     r8, cl
 * 0000000140B02ACB: add     r9d, esi
 * 0000000140B02ACE: jnz     short loc_140B02ABC
 * 0000000140B02AD0: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B02AD5: mov     rax, r8
 * 0000000140B02AD8: jmp     short loc_140B02ADD
 * 0000000140B02ADA: xor     r8b, al
 * 0000000140B02ADD: shr     rax, 7
 * 0000000140B02AE1: test    rax, rax
 * 0000000140B02AE4: jnz     short loc_140B02ADA
 * 0000000140B02AE6: movzx   ecx, byte ptr [r15]
 * 0000000140B02AEA: mov     eax, ecx
 * 0000000140B02AEC: movzx   edx, r8b
 * 0000000140B02AF0: and     edx, 7Fh
 * 0000000140B02AF3: and     eax, 7Fh
 * 0000000140B02AF6: mov     dword ptr [rbp+0A70h+var_AD8], edx
 * 0000000140B02AF9: cmp     edx, eax
 * 0000000140B02AFB: jz      loc_140B02C35
 * 0000000140B02B01: test    r12, r12
 * 0000000140B02B04: jz      loc_140B02BBA
 * 0000000140B02B0A: mov     eax, [rsi+994h]
 * 0000000140B02B10: mov     r8d, 40h ; '@'
 * 0000000140B02B16: test    r8b, al
 * 0000000140B02B19: jz      loc_140B02BBA
 * 0000000140B02B1F: mov     r15, cr8
 * 0000000140B02B23: lea     eax, [r8-3Eh]
 * 0000000140B02B27: mov     cr8, rax
 * 0000000140B02B2B: mov     rbx, r13
 * 0000000140B02B2E: dec     r12
 * 0000000140B02B31: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140B02B38: add     r13, r12
 * 0000000140B02B3B: or      r13, 0FFFh
 * 0000000140B02B42: lea     r12, [rbx-1]
 * 0000000140B02B46: movzx   r14d, r15b
 * 0000000140B02B4A: mov     rax, [rsi+468h]
 * 0000000140B02B51: xor     edx, edx
 * 0000000140B02B53: mov     rcx, rbx
 * 0000000140B02B56: call    KeGuardDispatchICall
 * 0000000140B02B5B: cmp     eax, 0C000022Dh
 * 0000000140B02B60: jnz     short loc_140B02B85
 * 0000000140B02B62: mov     eax, 1
 * 0000000140B02B67: cmp     r15b, al
 * 0000000140B02B6A: ja      short loc_140B02B89
 * 0000000140B02B6C: movzx   r14d, r15b
 * 0000000140B02B70: mov     cr8, r14
 * 0000000140B02B74: mov     al, [rbx]
 * 0000000140B02B76: mov     rax, cr8
 * 0000000140B02B7A: mov     eax, 2
 * 0000000140B02B7F: mov     cr8, rax
 * 0000000140B02B83: jmp     short loc_140B02B4A
 * 0000000140B02B85: test    eax, eax
 * 0000000140B02B87: js      short loc_140B02BA5
 * 0000000140B02B89: mov     eax, 1000h
 * 0000000140B02B8E: add     rbx, rax
 * 0000000140B02B91: add     r12, rax
 * 0000000140B02B94: cmp     r12, r13
 * 0000000140B02B97: jnz     short loc_140B02B46
 * 0000000140B02B99: mov     cr8, r14
 * 0000000140B02B9D: xor     r14d, r14d
 * 0000000140B02BA0: jmp     loc_140B02C35
 * 0000000140B02BA5: mov     cr8, r14
 * 0000000140B02BA9: mov     rax, [rsp+0B70h+var_B18]
 * 0000000140B02BAE: xor     r14d, r14d
 * 0000000140B02BB1: mov     edx, dword ptr [rbp+0A70h+var_AD8]
 * 0000000140B02BB4: mov     r13, [rbp+0A70h+var_AB0]
 * 0000000140B02BB8: mov     cl, [rax]
 * 0000000140B02BBA: movzx   eax, cl
 * 0000000140B02BBD: and     eax, 7Fh
 * 0000000140B02BC0: cmp     [rsi+8F8h], r14d
 * 0000000140B02BC7: jnz     short loc_140B02C35
 * 0000000140B02BC9: mov     ecx, edx
 * 0000000140B02BCB: xor     rcx, rax
 * 0000000140B02BCE: mov     rax, [rsi+588h]
 * 0000000140B02BD5: mov     [rax+18h], rcx
 * 0000000140B02BD9: cmp     [rsi+8F8h], r14d
 * 0000000140B02BE0: jnz     short loc_140B02C35
 * 0000000140B02BE2: mov     rcx, [rsp+0B70h+var_B20]
 * 0000000140B02BE7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B02BF1: add     rax, rsi
 * 0000000140B02BF4: xor     edx, edx
 * 0000000140B02BF6: mov     [rsi+900h], rax
 * 0000000140B02BFD: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B02C07: add     rax, rcx
 * 0000000140B02C0A: mov     [rsi+908h], rax
 * 0000000140B02C11: movsxd  rax, dword ptr [rcx]
 * 0000000140B02C14: mov     rcx, rsi
 * 0000000140B02C17: mov     [rsi+910h], rax
 * 0000000140B02C1E: mov     eax, 1
 * 0000000140B02C23: mov     [rsi+918h], r13
 * 0000000140B02C2A: mov     [rsi+8F8h], eax
 * 0000000140B02C30: call    $$ba
 * 0000000140B02C35: mov     r15, [rsp+0B70h+var_B18]
 * 0000000140B02C3A: mov     eax, 40h ; '@'
 * 0000000140B02C3F: add     [rsi+828h], eax
 * 0000000140B02C45: mov     r11, [rsp+0B70h+var_B08]
 * 0000000140B02C4A: mov     r12, [rbp+0A70h+var_AB8]
 * 0000000140B02C4E: lea     edx, [rax-3Fh]
 * 0000000140B02C51: lea     ebx, [rax-34h]
 * 0000000140B02C54: add     r15, rdx
 * 0000000140B02C57: add     r11, rbx
 * 0000000140B02C5A: add     rdi, rbx
 * 0000000140B02C5D: mov     [rsp+0B70h+var_B18], r15
 * 0000000140B02C62: mov     [rsp+0B70h+var_B08], r11
 * 0000000140B02C67: cmp     r11, [rbp+0A70h+var_AF0]
 * 0000000140B02C6B: jnb     short loc_140B02C7D
 * 0000000140B02C6D: mov     eax, [r12]
 * 0000000140B02C71: cmp     [rsi+828h], eax
 * 0000000140B02C77: jl      loc_140B029AD
 * 0000000140B02C7D: sub     rdi, [rbp+0A70h+var_A98]
 * 0000000140B02C81: mov     rax, 2AAAAAAAAAAAAAABh
 * 0000000140B02C8B: mov     r10d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B02C92: mov     r9, [rbp+0A70h+var_AC8]
 * 0000000140B02C96: imul    rdi
 * 0000000140B02C99: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B02CA0: sar     rdx, 1
 * 0000000140B02CA3: mov     rax, rdx
 * 0000000140B02CA6: shr     rax, 3Fh
 * 0000000140B02CAA: add     rdx, rax
 * 0000000140B02CAD: mov     r8d, edx
 * 0000000140B02CB0: mov     [rsi+824h], edx
 * 0000000140B02CB6: mov     rdx, [rbp+0A70h+var_AE8]
 * 0000000140B02CBA: cmp     r8d, r10d
 * 0000000140B02CBD: jb      loc_140AFB39B
 * 0000000140B02CC3: mov     eax, [rsi+82Ch]
 * 0000000140B02CC9: cmp     [rsi+828h], eax
 * 0000000140B02CCF: jge     loc_140AFB39B
 * 0000000140B02CD5: test    r9d, r9d
 * 0000000140B02CD8: jz      short loc_140B02CE6
 * 0000000140B02CDA: sub     r8d, r9d
 * 0000000140B02CDD: inc     r8d
 * 0000000140B02CE0: lea     rcx, [r8+r8*2]
 * 0000000140B02CE4: jmp     short loc_140B02CED
 * 0000000140B02CE6: mov     eax, r8d
 * 0000000140B02CE9: lea     rcx, [rax+rax*2]
 * 0000000140B02CED: lea     rcx, [rdx+rcx*8]
 * 0000000140B02CF1: mov     ebx, 0Ch
 * 0000000140B02CF6: mov     [rsp+0B70h+var_B08], rcx
 * 0000000140B02CFB: mov     rdi, [rsp+0B70h+var_B20]
 * 0000000140B02D00: lea     rdx, [rcx+8]
 * 0000000140B02D04: mov     eax, 2
 * 0000000140B02D09: mov     [rbp+0A70h+arg_8], rdx
 * 0000000140B02D10: mov     r12d, eax
 * 0000000140B02D13: mov     [rsp+0B70h+var_B18], rax
 * 0000000140B02D18: lea     eax, [r12-1]
 * 0000000140B02D1D: cmp     [rdx], r14d
 * 0000000140B02D20: jl      loc_140B02FCB
 * 0000000140B02D26: mov     eax, [rdx-8]
 * 0000000140B02D29: mov     r8d, [rdx-4]
 * 0000000140B02D2D: mov     r15d, eax
 * 0000000140B02D30: add     r15, [rdi+18h]
 * 0000000140B02D34: sub     r8d, eax
 * 0000000140B02D37: add     [rsi+828h], r8d
 * 0000000140B02D3E: mov     r9, r15
 * 0000000140B02D41: mov     r10d, [rsi+814h]
 * 0000000140B02D48: mov     rax, r15
 * 0000000140B02D4B: mov     r14, [rsi+818h]
 * 0000000140B02D52: lea     rcx, [r15+r8]
 * 0000000140B02D56: mov     r13d, r8d
 * 0000000140B02D59: mov     [rbp+0A70h+var_AE8], r15
 * 0000000140B02D5D: mov     [rsp+0B70h+var_AF8], r13
 * 0000000140B02D62: cmp     r15, rcx
 * 0000000140B02D65: jnb     short loc_140B02D78
 * 0000000140B02D67: mov     r11d, 40h ; '@'
 * 0000000140B02D6D: prefetchnta byte ptr [rax]
 * 0000000140B02D70: add     rax, r11
 * 0000000140B02D73: cmp     rax, rcx
 * 0000000140B02D76: jb      short loc_140B02D6D
 * 0000000140B02D78: mov     r11d, r8d
 * 0000000140B02D7B: mov     rbx, r14
 * 0000000140B02D7E: shr     r11d, 7
 * 0000000140B02D82: test    r11d, r11d
 * 0000000140B02D85: jz      short loc_140B02E03
 * 0000000140B02D87: mov     esi, 0FFFFFFFFh
 * 0000000140B02D8C: mov     r12d, 1
 * 0000000140B02D92: mov     r13, 7010008004002001h
 * 0000000140B02D9C: mov     eax, 8
 * 0000000140B02DA1: xor     rbx, [r9]
 * 0000000140B02DA4: mov     ecx, r10d
 * 0000000140B02DA7: rol     rbx, cl
 * 0000000140B02DAA: xor     rbx, [r9+8]
 * 0000000140B02DAE: add     r9, 10h
 * 0000000140B02DB2: rol     rbx, cl
 * 0000000140B02DB5: sub     rax, r12
 * 0000000140B02DB8: jnz     short loc_140B02DA1
 * 0000000140B02DBA: mov     rcx, r9
 * 0000000140B02DBD: sub     rcx, r15
 * 0000000140B02DC0: xor     rcx, r14
 * 0000000140B02DC3: mov     rax, rcx
 * 0000000140B02DC6: rol     rax, 11h
 * 0000000140B02DCA: xor     rcx, rax
 * 0000000140B02DCD: mov     rax, r13
 * 0000000140B02DD0: mul     rcx
 * 0000000140B02DD3: xor     r10d, edx
 * 0000000140B02DD6: mov     [rbp+0A70h+var_5B0], rdx
 * 0000000140B02DDD: xor     r10d, eax
 * 0000000140B02DE0: and     r10d, 3Fh
 * 0000000140B02DE4: cmovz   r10d, r12d
 * 0000000140B02DE8: add     r11d, esi
 * 0000000140B02DEB: jnz     short loc_140B02D9C
 * 0000000140B02DED: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B02DF2: mov     r13, [rsp+0B70h+var_AF8]
 * 0000000140B02DF7: mov     rdx, [rbp+0A70h+arg_8]
 * 0000000140B02DFE: mov     r12, [rsp+0B70h+var_B18]
 * 0000000140B02E03: and     r8d, 7Fh
 * 0000000140B02E07: mov     r11d, 1
 * 0000000140B02E0D: cmp     r8d, 8
 * 0000000140B02E11: jb      short loc_140B02E30
 * 0000000140B02E13: mov     eax, r8d
 * 0000000140B02E16: shr     rax, 3
 * 0000000140B02E1A: xor     rbx, [r9]
 * 0000000140B02E1D: mov     ecx, r10d
 * 0000000140B02E20: rol     rbx, cl
 * 0000000140B02E23: add     r9, 8
 * 0000000140B02E27: add     r8d, 0FFFFFFF8h
 * 0000000140B02E2B: sub     rax, r11
 * 0000000140B02E2E: jnz     short loc_140B02E1A
 * 0000000140B02E30: xor     r14d, r14d
 * 0000000140B02E33: test    r8d, r8d
 * 0000000140B02E36: jz      short loc_140B02E57
 * 0000000140B02E38: mov     esi, 0FFFFFFFFh
 * 0000000140B02E3D: movzx   eax, byte ptr [r9]
 * 0000000140B02E41: mov     ecx, r10d
 * 0000000140B02E44: xor     rbx, rax
 * 0000000140B02E47: add     r9, r11
 * 0000000140B02E4A: rol     rbx, cl
 * 0000000140B02E4D: add     r8d, esi
 * 0000000140B02E50: jnz     short loc_140B02E3D
 * 0000000140B02E52: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B02E57: mov     rax, rbx
 * 0000000140B02E5A: jmp     short loc_140B02E5E
 * 0000000140B02E5C: xor     ebx, eax
 * 0000000140B02E5E: shr     rax, 1Fh
 * 0000000140B02E62: test    rax, rax
 * 0000000140B02E65: jnz     short loc_140B02E5C
 * 0000000140B02E67: mov     ecx, [rdx]
 * 0000000140B02E69: btr     ebx, 1Fh
 * 0000000140B02E6D: mov     eax, ecx
 * 0000000140B02E6F: btr     eax, 1Fh
 * 0000000140B02E73: cmp     ebx, eax
 * 0000000140B02E75: jz      loc_140B02FC3
 * 0000000140B02E7B: test    r13, r13
 * 0000000140B02E7E: jz      loc_140B02F46
 * 0000000140B02E84: mov     eax, [rsi+994h]
 * 0000000140B02E8A: mov     r8d, 40h ; '@'
 * 0000000140B02E90: test    r8b, al
 * 0000000140B02E93: jz      loc_140B02F46
 * 0000000140B02E99: mov     r12, cr8
 * 0000000140B02E9D: lea     eax, [r8-3Eh]
 * 0000000140B02EA1: mov     cr8, rax
 * 0000000140B02EA5: lea     rax, [r13-1]
 * 0000000140B02EA9: mov     r14, r15
 * 0000000140B02EAC: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140B02EB3: add     rax, r15
 * 0000000140B02EB6: or      rax, 0FFFh
 * 0000000140B02EBC: mov     [rsp+0B70h+var_AF8], rax
 * 0000000140B02EC1: lea     r13, [r14-1]
 * 0000000140B02EC5: movzx   r15d, r12b
 * 0000000140B02EC9: mov     rax, [rsi+468h]
 * 0000000140B02ED0: xor     edx, edx
 * 0000000140B02ED2: mov     rcx, r14
 * 0000000140B02ED5: call    KeGuardDispatchICall
 * 0000000140B02EDA: cmp     eax, 0C000022Dh
 * 0000000140B02EDF: jnz     short loc_140B02F05
 * 0000000140B02EE1: mov     eax, 1
 * 0000000140B02EE6: cmp     r12b, al
 * 0000000140B02EE9: ja      short loc_140B02F09
 * 0000000140B02EEB: movzx   r15d, r12b
 * 0000000140B02EEF: mov     cr8, r15
 * 0000000140B02EF3: mov     al, [r14]
 * 0000000140B02EF6: mov     rax, cr8
 * 0000000140B02EFA: mov     eax, 2
 * 0000000140B02EFF: mov     cr8, rax
 * 0000000140B02F03: jmp     short loc_140B02EC9
 * 0000000140B02F05: test    eax, eax
 * 0000000140B02F07: js      short loc_140B02F2D
 * 0000000140B02F09: mov     r8d, 1000h
 * 0000000140B02F0F: add     r14, r8
 * 0000000140B02F12: add     r13, r8
 * 0000000140B02F15: cmp     r13, [rsp+0B70h+var_AF8]
 * 0000000140B02F1A: jnz     short loc_140B02EC5
 * 0000000140B02F1C: mov     cr8, r15
 * 0000000140B02F20: mov     r12, [rsp+0B70h+var_B18]
 * 0000000140B02F25: xor     r14d, r14d
 * 0000000140B02F28: jmp     loc_140B02FBC
 * 0000000140B02F2D: mov     cr8, r15
 * 0000000140B02F31: mov     rdx, [rbp+0A70h+arg_8]
 * 0000000140B02F38: xor     r14d, r14d
 * 0000000140B02F3B: mov     r15, [rbp+0A70h+var_AE8]
 * 0000000140B02F3F: mov     r12, [rsp+0B70h+var_B18]
 * 0000000140B02F44: mov     ecx, [rdx]
 * 0000000140B02F46: mov     eax, ecx
 * 0000000140B02F48: btr     eax, 1Fh
 * 0000000140B02F4C: cmp     [rsi+8F8h], r14d
 * 0000000140B02F53: jnz     short loc_140B02FC3
 * 0000000140B02F55: mov     ecx, ebx
 * 0000000140B02F57: xor     rcx, rax
 * 0000000140B02F5A: mov     rax, [rsi+588h]
 * 0000000140B02F61: mov     [rax+18h], rcx
 * 0000000140B02F65: cmp     [rsi+8F8h], r14d
 * 0000000140B02F6C: jnz     short loc_140B02FC3
 * 0000000140B02F6E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B02F78: xor     edx, edx
 * 0000000140B02F7A: add     rax, rsi
 * 0000000140B02F7D: mov     rcx, rsi
 * 0000000140B02F80: mov     [rsi+900h], rax
 * 0000000140B02F87: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B02F91: add     rax, rdi
 * 0000000140B02F94: mov     [rsi+908h], rax
 * 0000000140B02F9B: movsxd  rax, dword ptr [rdi]
 * 0000000140B02F9E: mov     [rsi+910h], rax
 * 0000000140B02FA5: mov     eax, 1
 * 0000000140B02FAA: mov     [rsi+918h], r15
 * 0000000140B02FB1: mov     [rsi+8F8h], eax
 * 0000000140B02FB7: call    $$ba
 * 0000000140B02FBC: mov     rdx, [rbp+0A70h+arg_8]
 * 0000000140B02FC3: mov     eax, 1
 * 0000000140B02FC8: lea     ebx, [rax+0Bh]
 * 0000000140B02FCB: add     rdx, rbx
 * 0000000140B02FCE: sub     r12, rax
 * 0000000140B02FD1: mov     [rbp+0A70h+arg_8], rdx
 * 0000000140B02FD8: mov     [rsp+0B70h+var_B18], r12
 * 0000000140B02FDD: jnz     loc_140B02D1D
 * 0000000140B02FE3: mov     rcx, [rsp+0B70h+var_B08]
 * 0000000140B02FE8: mov     r12d, 1
 * 0000000140B02FEE: add     [rsi+824h], r12d
 * 0000000140B02FF5: add     rcx, 18h
 * 0000000140B02FF9: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B03000: mov     [rsp+0B70h+var_B08], rcx
 * 0000000140B03005: cmp     rcx, [rbp+0A70h+var_A70]
 * 0000000140B03009: jz      short loc_140B03022
 * 0000000140B0300B: mov     eax, [rsi+82Ch]
 * 0000000140B03011: cmp     [rsi+828h], eax
 * 0000000140B03017: jl      loc_140B02CFB
 * 0000000140B0301D: jmp     loc_140AFB148
 * 0000000140B03022: mov     [rsi+824h], r14d
 * 0000000140B03029: jmp     loc_140AFB148
 * 0000000140B0302E: mov     ecx, r10d
 * 0000000140B03031: sub     ecx, 29h ; ')'
 * 0000000140B03034: jz      loc_140B00DB1
 * 0000000140B0303A: sub     ecx, 1
 * 0000000140B0303D: jz      loc_140B00DB1
 * 0000000140B03043: sub     ecx, 1
 * 0000000140B03046: jz      loc_140B05463
 * 0000000140B0304C: sub     ecx, 1
 * 0000000140B0304F: jz      loc_140B04893
 * 0000000140B03055: mov     r14d, 2
 * 0000000140B0305B: sub     ecx, r14d
 * 0000000140B0305E: jz      loc_140B047A2
 * 0000000140B03064: sub     ecx, 1
 * 0000000140B03067: jz      loc_140B045B9
 * 0000000140B0306D: sub     ecx, 1
 * 0000000140B03070: jz      loc_140B03F50
 * 0000000140B03076: cmp     ecx, 1
 * 0000000140B03079: jnz     short loc_140B030E7
 * 0000000140B0307B: mov     rax, [rsi+470h]
 * 0000000140B03082: xor     ecx, ecx
 * 0000000140B03084: call    KeGuardDispatchICall
 * 0000000140B03089: xor     edx, edx
 * 0000000140B0308B: test    eax, eax
 * 0000000140B0308D: jns     loc_140AFB39B
 * 0000000140B03093: lea     r12d, [r14-1]
 * 0000000140B03097: movsxd  rcx, eax
 * 0000000140B0309A: cmp     [rsi+8F8h], edx
 * 0000000140B030A0: jnz     loc_140AFB148
 * 0000000140B030A6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B030B0: add     rax, rsi
 * 0000000140B030B3: mov     [rsi+900h], rax
 * 0000000140B030BA: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B030C4: add     rax, r13
 * 0000000140B030C7: mov     [rsi+908h], rax
 * 0000000140B030CE: mov     [rsi+910h], rcx
 * 0000000140B030D5: mov     [rsi+918h], rdx
 * 0000000140B030DC: jmp     loc_140AFB423
 * 0000000140B030E1: mov     r14d, 2
 * 0000000140B030E7: sub     r10d, r14d
 * 0000000140B030EA: jz      loc_140B038DD
 * 0000000140B030F0: sub     r10d, 1
 * 0000000140B030F4: jz      loc_140B034BB
 * 0000000140B030FA: cmp     r10d, 14h
 * 0000000140B030FE: jz      short loc_140B0314A
 * 0000000140B03100: xor     ecx, ecx
 * 0000000140B03102: lea     r12d, [rcx+1]
 * 0000000140B03106: cmp     [rsi+8F8h], ecx
 * 0000000140B0310C: jnz     loc_140AFB148
 * 0000000140B03112: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0311C: add     rax, rsi
 * 0000000140B0311F: mov     [rsi+900h], rax
 * 0000000140B03126: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B03130: add     rax, r13
 * 0000000140B03133: mov     [rsi+908h], rax
 * 0000000140B0313A: mov     qword ptr [rsi+910h], 101h
 * 0000000140B03145: jmp     loc_140AFB41A
 * 0000000140B0314A: mov     edx, [r13+28h]
 * 0000000140B0314E: lea     rcx, [rbp+0A70h+var_2A8]
 * 0000000140B03155: mov     rax, [rsi+1A0h]
 * 0000000140B0315C: call    KeGuardDispatchICall
 * 0000000140B03161: mov     rax, [rsi+1D0h]
 * 0000000140B03168: lea     rdx, [rbp+0A70h+var_298]
 * 0000000140B0316F: lea     rcx, [rbp+0A70h+var_2A8]
 * 0000000140B03176: call    KeGuardDispatchICall
 * 0000000140B0317B: mov     rax, [rsi+0A10h]
 * 0000000140B03182: xor     r15d, r15d
 * 0000000140B03185: test    rax, rax
 * 0000000140B03188: jz      short loc_140B031A5
 * 0000000140B0318A: mov     ebx, [rax+320h]
 * 0000000140B03190: mov     rax, [rsi+0A10h]
 * 0000000140B03197: test    rax, rax
 * 0000000140B0319A: jz      short loc_140B031B6
 * 0000000140B0319C: mov     r14d, [rax+340h]
 * 0000000140B031A3: jmp     short loc_140B031C7
 * 0000000140B031A5: mov     ecx, 832h
 * 0000000140B031AA: rdmsr
 * 0000000140B031AC: shl     rdx, 20h
 * 0000000140B031B0: or      rax, rdx
 * 0000000140B031B3: mov     rbx, rax
 * 0000000140B031B6: mov     ecx, 834h
 * 0000000140B031BB: rdmsr
 * 0000000140B031BD: shl     rdx, 20h
 * 0000000140B031C1: or      rax, rdx
 * 0000000140B031C4: mov     r14, rax
 * 0000000140B031C7: mov     rax, [rsi+198h]
 * 0000000140B031CE: lea     rcx, [rbp+0A70h+var_298]
 * 0000000140B031D5: call    KeGuardDispatchICall
 * 0000000140B031DA: mov     ecx, 10h
 * 0000000140B031DF: test    [rsi+87Bh], cl
 * 0000000140B031E5: jz      loc_140B03330
 * 0000000140B031EB: cli
 * 0000000140B031EC: mov     rdx, [rsi+8E0h]
 * 0000000140B031F3: mov     r8d, 26h ; '&'
 * 0000000140B031F9: mov     ecx, 130h
 * 0000000140B031FE: mov     rax, rdx
 * 0000000140B03201: lea     r12d, [r8-25h]
 * 0000000140B03205: mov     [rax], r15
 * 0000000140B03208: add     ecx, 0FFFFFFF8h
 * 0000000140B0320B: add     rax, 8
 * 0000000140B0320F: sub     r8, r12
 * 0000000140B03212: jnz     short loc_140B03205
 * 0000000140B03214: test    ecx, ecx
 * 0000000140B03216: jz      short loc_140B03229
 * 0000000140B03218: mov     r8d, 0FFFFFFFFh
 * 0000000140B0321E: mov     [rax], r15b
 * 0000000140B03221: add     rax, r12
 * 0000000140B03224: add     ecx, r8d
 * 0000000140B03227: jnz     short loc_140B0321E
 * 0000000140B03229: movups  xmm0, xmmword ptr [rsi+848h]
 * 0000000140B03230: mov     eax, 12Fh
 * 0000000140B03235: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140B0323A: movups  xmm1, xmmword ptr [rsi+858h]
 * 0000000140B03241: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140B03246: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140B0324D: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140B03255: mov     word ptr [rbp+0A70h+var_850], ax
 * 0000000140B0325C: lea     rax, [rsi+878h]
 * 0000000140B03263: mov     [rbp+222h], rdx
 * 0000000140B0326A: mov     rcx, rax
 * 0000000140B0326D: mov     [rdx+10h], ax
 * 0000000140B03271: shr     rcx, 10h
 * 0000000140B03275: mov     [rbp+0A70h+var_5A8], rax
 * 0000000140B0327C: shr     rax, 20h
 * 0000000140B03280: mov     [rdx+16h], cx
 * 0000000140B03284: mov     [rdx+18h], eax
 * 0000000140B03287: sidt    fword ptr [rbp+0A70h+var_720]
 * 0000000140B0328E: lidt    fword ptr [rbp+0A70h+var_850]
 * 0000000140B03295: test    dword ptr [rsi+994h], 20000h
 * 0000000140B0329F: jnz     short loc_140B032E3
 * 0000000140B032A1: mov     rdx, gs:20h
 * 0000000140B032AA: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140B032B4: mov     rax, [rsi+4B8h]
 * 0000000140B032BB: add     rcx, rsi
 * 0000000140B032BE: mov     [rax], rcx
 * 0000000140B032C1: mov     rax, [rsi+4C0h]
 * 0000000140B032C8: mov     [rax], rdx
 * 0000000140B032CB: mov     rax, [rsi+4C8h]
 * 0000000140B032D2: mov     [rax], r15
 * 0000000140B032D5: mov     rax, [rsi+4D0h]
 * 0000000140B032DC: mov     qword ptr [rax], 115h
 * 0000000140B032E3: call    KiErrata361Present
 * 0000000140B032E8: test    dword ptr [rsi+994h], 20000h
 * 0000000140B032F2: jnz     short loc_140B03326
 * 0000000140B032F4: mov     rax, [rsi+4B8h]
 * 0000000140B032FB: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140B03305: mov     [rax], rcx
 * 0000000140B03308: mov     rax, [rsi+4C0h]
 * 0000000140B0330F: mov     [rax], r15
 * 0000000140B03312: mov     rax, [rsi+4C8h]
 * 0000000140B03319: mov     [rax], r15
 * 0000000140B0331C: mov     rax, [rsi+4D0h]
 * 0000000140B03323: mov     [rax], r15
 * 0000000140B03326: lidt    fword ptr [rbp+0A70h+var_720]
 * 0000000140B0332D: sti
 * 0000000140B0332E: jmp     short loc_140B03336
 * 0000000140B03330: mov     r12d, 1
 * 0000000140B03336: mov     eax, [r13+1Ch]
 * 0000000140B0333A: mov     r8d, [r13+18h]
 * 0000000140B0333E: and     eax, ebx
 * 0000000140B03340: cmp     eax, r8d
 * 0000000140B03343: jnz     short loc_140B03370
 * 0000000140B03345: bt      ebx, 10h
 * 0000000140B03349: jb      loc_140B033FB
 * 0000000140B0334F: movzx   ecx, bl
 * 0000000140B03352: sub     ecx, 0D1h
 * 0000000140B03358: jz      loc_140B033FB
 * 0000000140B0335E: sub     ecx, 2Ch ; ','
 * 0000000140B03361: jz      loc_140B033FB
 * 0000000140B03367: cmp     ecx, 1
 * 0000000140B0336A: jz      loc_140B033FB
 * 0000000140B03370: mov     edx, [r13+28h]
 * 0000000140B03374: mov     rax, 32000000000h
 * 0000000140B0337E: shl     rdx, 30h
 * 0000000140B03382: or      rdx, r8
 * 0000000140B03385: or      rdx, rax
 * 0000000140B03388: cmp     [rsi+8F8h], r15d
 * 0000000140B0338F: jnz     short loc_140B033FB
 * 0000000140B03391: mov     eax, ebx
 * 0000000140B03393: mov     rcx, r8
 * 0000000140B03396: xor     rcx, rax
 * 0000000140B03399: mov     rbx, 0B3B74BDEE4453415h
 * 0000000140B033A3: mov     rax, [rsi+588h]
 * 0000000140B033AA: mov     [rax+18h], rcx
 * 0000000140B033AE: cmp     [rsi+8F8h], r15d
 * 0000000140B033B5: jnz     short loc_140B03405
 * 0000000140B033B7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B033C1: mov     rcx, rsi
 * 0000000140B033C4: add     rax, rsi
 * 0000000140B033C7: mov     [rsi+900h], rax
 * 0000000140B033CE: lea     rax, [rbx+r13]
 * 0000000140B033D2: mov     [rsi+908h], rax
 * 0000000140B033D9: movsxd  rax, dword ptr [r13+0]
 * 0000000140B033DD: mov     [rsi+910h], rax
 * 0000000140B033E4: mov     [rsi+918h], rdx
 * 0000000140B033EB: xor     edx, edx
 * 0000000140B033ED: mov     [rsi+8F8h], r12d
 * 0000000140B033F4: call    $$ba
 * 0000000140B033F9: jmp     short loc_140B03405
 * 0000000140B033FB: mov     rbx, 0B3B74BDEE4453415h
 * 0000000140B03405: mov     eax, [r13+24h]
 * 0000000140B03409: mov     r8d, [r13+20h]
 * 0000000140B0340D: and     eax, r14d
 * 0000000140B03410: cmp     eax, r8d
 * 0000000140B03413: jnz     short loc_140B03442
 * 0000000140B03415: bt      r14d, 10h
 * 0000000140B0341A: jb      loc_140B038C9
 * 0000000140B03420: movzx   ecx, r14b
 * 0000000140B03424: sub     ecx, 0D1h
 * 0000000140B0342A: jz      loc_140B038C9
 * 0000000140B03430: sub     ecx, 2Ch ; ','
 * 0000000140B03433: jz      loc_140B038C9
 * 0000000140B03439: cmp     ecx, 1
 * 0000000140B0343C: jz      loc_140B038C9
 * 0000000140B03442: mov     edx, [r13+28h]
 * 0000000140B03446: mov     rax, 34000000000h
 * 0000000140B03450: shl     rdx, 30h
 * 0000000140B03454: or      rdx, r8
 * 0000000140B03457: or      rdx, rax
 * 0000000140B0345A: cmp     [rsi+8F8h], r15d
 * 0000000140B03461: jnz     loc_140B038C9
 * 0000000140B03467: mov     rax, [rsi+588h]
 * 0000000140B0346E: mov     ecx, r14d
 * 0000000140B03471: xor     rcx, r8
 * 0000000140B03474: mov     [rax+18h], rcx
 * 0000000140B03478: cmp     [rsi+8F8h], r15d
 * 0000000140B0347F: jnz     loc_140B038C9
 * 0000000140B03485: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0348F: add     rax, rsi
 * 0000000140B03492: mov     [rsi+900h], rax
 * 0000000140B03499: lea     rax, [rbx+r13]
 * 0000000140B0349D: mov     [rsi+908h], rax
 * 0000000140B034A4: movsxd  rax, dword ptr [r13+0]
 * 0000000140B034A8: mov     [rsi+910h], rax
 * 0000000140B034AF: mov     [rsi+918h], rdx
 * 0000000140B034B6: jmp     loc_140B038B0
 * 0000000140B034BB: mov     edx, [r13+28h]
 * 0000000140B034BF: lea     rcx, [rbp+0A70h+var_288]
 * 0000000140B034C6: mov     rax, [rsi+1A0h]
 * 0000000140B034CD: call    KeGuardDispatchICall
 * 0000000140B034D2: mov     rax, [rsi+1D0h]
 * 0000000140B034D9: lea     rdx, [rbp+0A70h+var_278]
 * 0000000140B034E0: lea     rcx, [rbp+0A70h+var_288]
 * 0000000140B034E7: call    KeGuardDispatchICall
 * 0000000140B034EC: lea     rdx, [rbp+0A70h+var_190]
 * 0000000140B034F3: lea     rcx, [rbp+0A70h+var_8E0]
 * 0000000140B034FA: call    KiGetGdtIdt
 * 0000000140B034FF: mov     r15, [rbp+0A70h+var_8DE]
 * 0000000140B03506: mov     ecx, 2
 * 0000000140B0350B: mov     r14d, [r13+10h]
 * 0000000140B0350F: test    [rsi+87Bh], cl
 * 0000000140B03515: jz      loc_140B03647
 * 0000000140B0351B: mov     rdx, [rsi+8E0h]
 * 0000000140B03522: mov     r8d, 26h ; '&'
 * 0000000140B03528: mov     ecx, 130h
 * 0000000140B0352D: mov     rax, rdx
 * 0000000140B03530: xor     r12d, r12d
 * 0000000140B03533: lea     r9d, [r8-25h]
 * 0000000140B03537: mov     [rax], r12
 * 0000000140B0353A: add     ecx, 0FFFFFFF8h
 * 0000000140B0353D: add     rax, 8
 * 0000000140B03541: sub     r8, r9
 * 0000000140B03544: jnz     short loc_140B03537
 * 0000000140B03546: test    ecx, ecx
 * 0000000140B03548: jz      short loc_140B0355B
 * 0000000140B0354A: mov     r8d, 0FFFFFFFFh
 * 0000000140B03550: mov     [rax], r12b
 * 0000000140B03553: add     rax, r9
 * 0000000140B03556: add     ecx, r8d
 * 0000000140B03559: jnz     short loc_140B03550
 * 0000000140B0355B: movups  xmm0, xmmword ptr [rsi+848h]
 * 0000000140B03562: mov     eax, 12Fh
 * 0000000140B03567: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140B0356C: movups  xmm1, xmmword ptr [rsi+858h]
 * 0000000140B03573: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140B03578: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140B0357F: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140B03587: mov     word ptr [rbp+0A70h+var_840], ax
 * 0000000140B0358E: lea     rax, [rsi+878h]
 * 0000000140B03595: mov     [rbp+232h], rdx
 * 0000000140B0359C: mov     rcx, rax
 * 0000000140B0359F: mov     [rdx+10h], ax
 * 0000000140B035A3: shr     rcx, 10h
 * 0000000140B035A7: mov     [rbp+0A70h+var_5A0], rax
 * 0000000140B035AE: shr     rax, 20h
 * 0000000140B035B2: mov     [rdx+16h], cx
 * 0000000140B035B6: mov     [rdx+18h], eax
 * 0000000140B035B9: cli
 * 0000000140B035BA: sidt    fword ptr [rbp+0A70h+var_710]
 * 0000000140B035C1: lidt    fword ptr [rbp+0A70h+var_840]
 * 0000000140B035C8: mov     dr7, r12
 * 0000000140B035CC: lea     rax, [rsi+87Eh]
 * 0000000140B035D3: mov     [rdx+10h], ax
 * 0000000140B035D7: mov     rcx, rax
 * 0000000140B035DA: shr     rcx, 10h
 * 0000000140B035DE: shr     rax, 20h
 * 0000000140B035E2: mov     [rdx+16h], cx
 * 0000000140B035E6: mov     [rdx+18h], eax
 * 0000000140B035E9: test    byte ptr [rsi+87Bh], 20h
 * 0000000140B035F0: jnz     short loc_140B03600
 * 0000000140B035F2: call    KiErrata704Present
 * 0000000140B035F7: mov     [rsi+8E8h], rax
 * 0000000140B035FE: jmp     short loc_140B03631
 * 0000000140B03600: lea     rbx, [rsi+8AAh]
 * 0000000140B03607: call    KiGetSs
 * 0000000140B0360C: mov     [rbx], ax
 * 0000000140B0360F: mov     dr0, rbx
 * 0000000140B03612: mov     eax, 70001h
 * 0000000140B03617: mov     dr7, rax
 * 0000000140B0361A: mov     rcx, rbx
 * 0000000140B0361D: call    KiErrataSkx55Present
 * 0000000140B03622: mov     [rsi+8E8h], rax
 * 0000000140B03629: mov     dr7, r12
 * 0000000140B0362D: mov     dr0, r12
 * 0000000140B03631: mov     eax, gs:1A4h
 * 0000000140B03639: mov     [rsi+8F0h], eax
 * 0000000140B0363F: lidt    fword ptr [rbp+0A70h+var_710]
 * 0000000140B03646: sti
 * 0000000140B03647: call    KiGetLdtr
 * 0000000140B0364C: movzx   r12d, ax
 * 0000000140B03650: call    KiGetTr
 * 0000000140B03655: add     [rsi+828h], r14d
 * 0000000140B0365C: lea     rcx, [r15+r14]
 * 0000000140B03660: mov     r10d, [rsi+814h]
 * 0000000140B03667: movzx   r13d, ax
 * 0000000140B0366B: mov     r11, [rsi+818h]
 * 0000000140B03672: mov     r8, r15
 * 0000000140B03675: mov     word ptr [rbp+0A70h+arg_8], ax
 * 0000000140B0367C: mov     rax, r15
 * 0000000140B0367F: cmp     r15, rcx
 * 0000000140B03682: jnb     short loc_140B03694
 * 0000000140B03684: mov     edx, 40h ; '@'
 * 0000000140B03689: prefetchnta byte ptr [rax]
 * 0000000140B0368C: add     rax, rdx
 * 0000000140B0368F: cmp     rax, rcx
 * 0000000140B03692: jb      short loc_140B03689
 * 0000000140B03694: mov     r9d, r14d
 * 0000000140B03697: mov     rbx, r11
 * 0000000140B0369A: shr     r9d, 7
 * 0000000140B0369E: mov     edx, 1
 * 0000000140B036A3: test    r9d, r9d
 * 0000000140B036A6: jz      short loc_140B03721
 * 0000000140B036A8: mov     edi, 0FFFFFFFFh
 * 0000000140B036AD: mov     r13, 7010008004002001h
 * 0000000140B036B7: mov     eax, 8
 * 0000000140B036BC: xor     rbx, [r8]
 * 0000000140B036BF: mov     ecx, r10d
 * 0000000140B036C2: rol     rbx, cl
 * 0000000140B036C5: xor     rbx, [r8+8]
 * 0000000140B036C9: add     r8, 10h
 * 0000000140B036CD: rol     rbx, cl
 * 0000000140B036D0: sub     rax, rdx
 * 0000000140B036D3: jnz     short loc_140B036BC
 * 0000000140B036D5: mov     rcx, r8
 * 0000000140B036D8: sub     rcx, r15
 * 0000000140B036DB: xor     rcx, r11
 * 0000000140B036DE: mov     rax, rcx
 * 0000000140B036E1: rol     rax, 11h
 * 0000000140B036E5: xor     rcx, rax
 * 0000000140B036E8: mov     rax, r13
 * 0000000140B036EB: mul     rcx
 * 0000000140B036EE: xor     r10d, edx
 * 0000000140B036F1: mov     [rbp+0A70h+var_598], rdx
 * 0000000140B036F8: xor     r10d, eax
 * 0000000140B036FB: mov     edx, 1
 * 0000000140B03700: and     r10d, 3Fh
 * 0000000140B03704: cmovz   r10d, edx
 * 0000000140B03708: add     r9d, edi
 * 0000000140B0370B: jnz     short loc_140B036B7
 * 0000000140B0370D: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B03712: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B03719: movzx   r13d, word ptr [rbp+0A70h+arg_8]
 * 0000000140B03721: and     r14d, 7Fh
 * 0000000140B03725: cmp     r14d, 8
 * 0000000140B03729: jb      short loc_140B03748
 * 0000000140B0372B: mov     eax, r14d
 * 0000000140B0372E: shr     rax, 3
 * 0000000140B03732: xor     rbx, [r8]
 * 0000000140B03735: mov     ecx, r10d
 * 0000000140B03738: rol     rbx, cl
 * 0000000140B0373B: add     r8, 8
 * 0000000140B0373F: add     r14d, 0FFFFFFF8h
 * 0000000140B03743: sub     rax, rdx
 * 0000000140B03746: jnz     short loc_140B03732
 * 0000000140B03748: test    r14d, r14d
 * 0000000140B0374B: jz      short loc_140B0376C
 * 0000000140B0374D: mov     esi, 0FFFFFFFFh
 * 0000000140B03752: movzx   eax, byte ptr [r8]
 * 0000000140B03756: mov     ecx, r10d
 * 0000000140B03759: xor     rbx, rax
 * 0000000140B0375C: add     r8, rdx
 * 0000000140B0375F: rol     rbx, cl
 * 0000000140B03762: add     r14d, esi
 * 0000000140B03765: jnz     short loc_140B03752
 * 0000000140B03767: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B0376C: mov     rax, rbx
 * 0000000140B0376F: jmp     short loc_140B03773
 * 0000000140B03771: xor     ebx, eax
 * 0000000140B03773: shr     rax, 1Fh
 * 0000000140B03777: test    rax, rax
 * 0000000140B0377A: jnz     short loc_140B03771
 * 0000000140B0377C: mov     rax, [rsi+198h]
 * 0000000140B03783: lea     rcx, [rbp+0A70h+var_278]
 * 0000000140B0378A: btr     ebx, 1Fh
 * 0000000140B0378E: call    KeGuardDispatchICall
 * 0000000140B03793: mov     r9, [rsp+0B70h+var_B20]
 * 0000000140B03798: mov     r11d, 40h ; '@'
 * 0000000140B0379E: cmp     ebx, [r9+14h]
 * 0000000140B037A2: jnz     short loc_140B037C2
 * 0000000140B037A4: movzx   eax, word ptr [r9+2Ch]
 * 0000000140B037A9: cmp     [rbp+0A70h+var_8E0], ax
 * 0000000140B037B0: jnz     short loc_140B037C2
 * 0000000140B037B2: test    r12w, r12w
 * 0000000140B037B6: jnz     short loc_140B037C2
 * 0000000140B037B8: cmp     r13w, r11w
 * 0000000140B037BC: jz      loc_140B038C3
 * 0000000140B037C2: test    dword ptr [rsi+990h], 40000000h
 * 0000000140B037CC: jz      short loc_140B0381C
 * 0000000140B037CE: mov     rcx, [rsi+0A80h]
 * 0000000140B037D5: mov     edx, 30h ; '0'
 * 0000000140B037DA: lea     r8d, [rdx-2Ah]
 * 0000000140B037DE: lea     r10d, [rdx-2Fh]
 * 0000000140B037E2: mov     rax, [r9]
 * 0000000140B037E5: add     edx, 0FFFFFFF8h
 * 0000000140B037E8: mov     [rcx], rax
 * 0000000140B037EB: add     r9, 8
 * 0000000140B037EF: add     rcx, 8
 * 0000000140B037F3: sub     r8, r10
 * 0000000140B037F6: jnz     short loc_140B037E2
 * 0000000140B037F8: test    edx, edx
 * 0000000140B037FA: jz      short loc_140B03815
 * 0000000140B037FC: mov     esi, 0FFFFFFFFh
 * 0000000140B03801: mov     al, [r9]
 * 0000000140B03804: add     r9, r10
 * 0000000140B03807: mov     [rcx], al
 * 0000000140B03809: add     rcx, r10
 * 0000000140B0380C: add     edx, esi
 * 0000000140B0380E: jnz     short loc_140B03801
 * 0000000140B03810: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B03815: mov     r9, [rsi+0A80h]
 * 0000000140B0381C: mov     rax, [rbp+0A70h+var_8DE]
 * 0000000140B03823: mov     edx, ebx
 * 0000000140B03825: mov     [r9+18h], rax
 * 0000000140B03829: mov     [r9+20h], rdx
 * 0000000140B0382D: test    r12w, r12w
 * 0000000140B03831: jz      short loc_140B03839
 * 0000000140B03833: mov     [r9+18h], r12
 * 0000000140B03837: jmp     short loc_140B03847
 * 0000000140B03839: cmp     r13w, r11w
 * 0000000140B0383D: jz      short loc_140B03847
 * 0000000140B0383F: movzx   eax, r13w
 * 0000000140B03843: mov     [r9+18h], rax
 * 0000000140B03847: mov     eax, [rsi+8F8h]
 * 0000000140B0384D: mov     ecx, [r9+14h]
 * 0000000140B03851: test    eax, eax
 * 0000000140B03853: jnz     short loc_140B03869
 * 0000000140B03855: mov     rax, [rsi+588h]
 * 0000000140B0385C: xor     rcx, rdx
 * 0000000140B0385F: mov     [rax+18h], rcx
 * 0000000140B03863: mov     eax, [rsi+8F8h]
 * 0000000140B03869: mov     rcx, [r9+8]
 * 0000000140B0386D: mov     r12d, 1
 * 0000000140B03873: test    eax, eax
 * 0000000140B03875: jnz     short loc_140B038C9
 * 0000000140B03877: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B03881: add     rax, rsi
 * 0000000140B03884: mov     [rsi+900h], rax
 * 0000000140B0388B: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B03895: add     rax, r9
 * 0000000140B03898: mov     [rsi+908h], rax
 * 0000000140B0389F: movsxd  rax, dword ptr [r9]
 * 0000000140B038A2: mov     [rsi+910h], rax
 * 0000000140B038A9: mov     [rsi+918h], rcx
 * 0000000140B038B0: xor     edx, edx
 * 0000000140B038B2: mov     [rsi+8F8h], r12d
 * 0000000140B038B9: mov     rcx, rsi
 * 0000000140B038BC: call    $$ba
 * 0000000140B038C1: jmp     short loc_140B038C9
 * 0000000140B038C3: mov     r12d, 1
 * 0000000140B038C9: mov     r14d, 8000h
 * 0000000140B038CF: add     [rsi+828h], r14d
 * 0000000140B038D6: xor     eax, eax
 * 0000000140B038D8: jmp     loc_140AFB150
 * 0000000140B038DD: mov     edx, [r13+28h]
 * 0000000140B038E1: lea     rcx, [rbp+0A70h+var_268]
 * 0000000140B038E8: xor     eax, eax
 * 0000000140B038EA: mov     [rbp+0A70h+var_ACC], eax
 * 0000000140B038ED: mov     rax, [rsi+1A0h]
 * 0000000140B038F4: call    KeGuardDispatchICall
 * 0000000140B038F9: mov     rax, [rsi+1D0h]
 * 0000000140B03900: lea     rdx, [rbp+0A70h+var_258]
 * 0000000140B03907: lea     rcx, [rbp+0A70h+var_268]
 * 0000000140B0390E: call    KeGuardDispatchICall
 * 0000000140B03913: lea     rdx, [rbp+0A70h+var_830]
 * 0000000140B0391A: lea     rcx, [rbp+0A70h+var_180]
 * 0000000140B03921: call    KiGetGdtIdt
 * 0000000140B03926: mov     rcx, [rbp+0A70h+var_82E]
 * 0000000140B0392D: xor     r13d, r13d
 * 0000000140B03930: mov     [rsp+0B70h+var_AF8], rcx
 * 0000000140B03935: mov     edi, r13d
 * 0000000140B03938: add     rcx, 4
 * 0000000140B0393C: mov     [rsp+0B70h+var_B18], rcx
 * 0000000140B03941: mov     rax, [rsi+8C8h]
 * 0000000140B03948: mov     r9, r13
 * 0000000140B0394B: mov     [rbp+0A70h+var_A00], rax
 * 0000000140B0394F: mov     r14, r13
 * 0000000140B03952: mov     r8, [rsi+8D0h]
 * 0000000140B03959: xor     eax, eax
 * 0000000140B0395B: mov     r12d, [rsi+8ACh]
 * 0000000140B03962: mov     [rbp+0A70h+var_AD8], r13
 * 0000000140B03966: mov     r13d, [rsi+8B0h]
 * 0000000140B0396D: mov     [rsp+0B70h+var_B08], r8
 * 0000000140B03972: mov     [rbp+0A70h+var_AE8], rax
 * 0000000140B03976: mov     r15, cr8
 * 0000000140B0397A: mov     eax, 0Fh
 * 0000000140B0397F: mov     cr8, rax
 * 0000000140B03983: movzx   eax, word ptr [rcx-4]
 * 0000000140B03987: movzx   r10d, word ptr [rcx]
 * 0000000140B0398B: mov     word ptr [rbp+0A70h+var_AA8], ax
 * 0000000140B0398F: movzx   eax, word ptr [rcx+2]
 * 0000000140B03993: mov     word ptr [rbp+0A70h+var_AA8+2], ax
 * 0000000140B03997: mov     eax, [rcx+4]
 * 0000000140B0399A: mov     rcx, [rsi+620h]
 * 0000000140B039A1: mov     dword ptr [rbp+0A70h+var_AA8+4], eax
 * 0000000140B039A4: mov     rbx, [rbp+0A70h+var_AA8]
 * 0000000140B039A8: mov     eax, edi
 * 0000000140B039AA: mov     word ptr [rbp+0A70h+arg_8], r10w
 * 0000000140B039B2: lea     rdx, [rcx+rax*8]
 * 0000000140B039B6: cmp     rbx, rdx
 * 0000000140B039B9: jnz     short loc_140B03A1F
 * 0000000140B039BB: mov     eax, 6000h
 * 0000000140B039C0: test    ax, r10w
 * 0000000140B039C4: jz      short loc_140B039D3
 * 0000000140B039C6: movzx   eax, r15b
 * 0000000140B039CA: mov     cr8, rax
 * 0000000140B039CE: jmp     loc_140B03D95
 * 0000000140B039D3: mov     rax, [rsi+478h]
 * 0000000140B039DA: mov     ecx, edi
 * 0000000140B039DC: call    KeGuardDispatchICall
 * 0000000140B039E1: mov     r14, [rax]
 * 0000000140B039E4: xor     eax, eax
 * 0000000140B039E6: test    r14, r14
 * 0000000140B039E9: jz      short loc_140B03A11
 * 0000000140B039EB: mov     r12, [r12+r14]
 * 0000000140B039EF: mov     [rbp+0A70h+var_AD8], r12
 * 0000000140B039F3: cmp     edi, 30h ; '0'
 * 0000000140B039F6: jnb     short loc_140B03A05
 * 0000000140B039F8: movzx   eax, r15b
 * 0000000140B039FC: mov     cr8, rax
 * 0000000140B03A00: jmp     loc_140B03D91
 * 0000000140B03A05: mov     r13, [r13+r14+0]
 * 0000000140B03A0A: mov     r8, [rsp+0B70h+var_B08]
 * 0000000140B03A0F: jmp     short loc_140B03A27
 * 0000000140B03A11: mov     r8, [rsp+0B70h+var_B08]
 * 0000000140B03A16: or      r14, 0FFFFFFFFFFFFFFFFh
 * 0000000140B03A1A: mov     r13, rax
 * 0000000140B03A1D: jmp     short loc_140B03A23
 * 0000000140B03A1F: mov     r13, [rbp+0A70h+var_AE8]
 * 0000000140B03A23: mov     r12, [rbp+0A70h+var_AD8]
 * 0000000140B03A27: movzx   eax, r15b
 * 0000000140B03A2B: mov     cr8, rax
 * 0000000140B03A2F: test    r14, r14
 * 0000000140B03A32: jnz     short loc_140B03A7A
 * 0000000140B03A34: mov     rdx, [rbp+0A70h+var_A00]
 * 0000000140B03A38: cmp     rbx, rdx
 * 0000000140B03A3B: jb      loc_140B03D91
 * 0000000140B03A41: cmp     rbx, r8
 * 0000000140B03A44: ja      loc_140B03D91
 * 0000000140B03A4A: mov     r8d, dword ptr [rbp+0A70h+var_AA8]
 * 0000000140B03A4E: mov     rcx, [rsi+8D8h]
 * 0000000140B03A55: sub     r8d, edx
 * 0000000140B03A58: mov     rax, [rsi+210h]
 * 0000000140B03A5F: call    KeGuardDispatchICall
 * 0000000140B03A64: test    rax, rax
 * 0000000140B03A67: jz      loc_140B03D91
 * 0000000140B03A6D: mov     eax, [rax+24h]
 * 0000000140B03A70: bt      eax, 19h
 * 0000000140B03A74: jb      loc_140B03D91
 * 0000000140B03A7A: mov     rax, [rsp+0B70h+var_B18]
 * 0000000140B03A7F: mov     ecx, 10h
 * 0000000140B03A84: cmp     [rax-2], cx
 * 0000000140B03A88: jnz     loc_140B03D91
 * 0000000140B03A8E: movzx   ecx, word ptr [rax]
 * 0000000140B03A91: mov     edx, 1F00h
 * 0000000140B03A96: movzx   eax, cx
 * 0000000140B03A99: and     ax, dx
 * 0000000140B03A9C: mov     edx, 0E00h
 * 0000000140B03AA1: cmp     ax, dx
 * 0000000140B03AA4: jnz     loc_140B03D91
 * 0000000140B03AAA: bt      cx, 0Fh
 * 0000000140B03AAF: jnb     loc_140B03D91
 * 0000000140B03AB5: mov     rax, [rsi+260h]
 * 0000000140B03ABC: lea     rdx, [rbp+0A70h+var_A00]
 * 0000000140B03AC0: xor     r8d, r8d
 * 0000000140B03AC3: mov     rcx, rbx
 * 0000000140B03AC6: call    KeGuardDispatchICall
 * 0000000140B03ACB: test    rax, rax
 * 0000000140B03ACE: jz      loc_140B03CFE
 * 0000000140B03AD4: mov     eax, [rax]
 * 0000000140B03AD6: mov     rcx, [rbp+0A70h+var_A00]
 * 0000000140B03ADA: add     rax, rcx
 * 0000000140B03ADD: cmp     rax, rbx
 * 0000000140B03AE0: jnz     loc_140B03CFE
 * 0000000140B03AE6: cmp     rcx, [rsi+8C8h]
 * 0000000140B03AED: jnz     loc_140B03CFE
 * 0000000140B03AF3: test    r14, r14
 * 0000000140B03AF6: jnz     loc_140B03D07
 * 0000000140B03AFC: xor     r13d, r13d
 * 0000000140B03AFF: mov     rcx, [rsp+0B70h+var_B18]
 * 0000000140B03B04: inc     edi
 * 0000000140B03B06: add     rcx, 10h
 * 0000000140B03B0A: mov     [rsp+0B70h+var_B18], rcx
 * 0000000140B03B0F: cmp     edi, 0FFh
 * 0000000140B03B15: jbe     loc_140B03941
 * 0000000140B03B1B: mov     ecx, 1
 * 0000000140B03B20: test    [rsi+87Bh], cl
 * 0000000140B03B26: jz      loc_140B03BF6
 * 0000000140B03B2C: cli
 * 0000000140B03B2D: mov     r14d, 0C0000082h
 * 0000000140B03B33: mov     ecx, r14d
 * 0000000140B03B36: rdmsr
 * 0000000140B03B38: shl     rdx, 20h
 * 0000000140B03B3C: or      rax, rdx
 * 0000000140B03B3F: lea     rdx, [rsi+87Ah]
 * 0000000140B03B46: mov     rbx, rax
 * 0000000140B03B49: mov     rax, rdx
 * 0000000140B03B4C: shr     rdx, 20h
 * 0000000140B03B50: wrmsr
 * 0000000140B03B52: bt      dword ptr [rsi+994h], 11h
 * 0000000140B03B5A: jb      short loc_140B03B9E
 * 0000000140B03B5C: mov     rdx, gs:20h
 * 0000000140B03B65: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140B03B6F: mov     rax, [rsi+4B8h]
 * 0000000140B03B76: add     rcx, rsi
 * 0000000140B03B79: mov     [rax], rcx
 * 0000000140B03B7C: mov     rax, [rsi+4C0h]
 * 0000000140B03B83: mov     [rax], rdx
 * 0000000140B03B86: mov     rax, [rsi+4C8h]
 * 0000000140B03B8D: mov     [rax], r14
 * 0000000140B03B90: mov     rax, [rsi+4D0h]
 * 0000000140B03B97: mov     qword ptr [rax], 112h
 * 0000000140B03B9E: lea     rax, [rsi+87Ch]
 * 0000000140B03BA5: call    KeGuardDispatchICall
 * 0000000140B03BAA: bt      dword ptr [rsi+994h], 11h
 * 0000000140B03BB2: jb      short loc_140B03BE6
 * 0000000140B03BB4: mov     rax, [rsi+4B8h]
 * 0000000140B03BBB: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140B03BC5: mov     [rax], rcx
 * 0000000140B03BC8: mov     rax, [rsi+4C0h]
 * 0000000140B03BCF: mov     [rax], r13
 * 0000000140B03BD2: mov     rax, [rsi+4C8h]
 * 0000000140B03BD9: mov     [rax], r13
 * 0000000140B03BDC: mov     rax, [rsi+4D0h]
 * 0000000140B03BE3: mov     [rax], r13
 * 0000000140B03BE6: mov     rdx, rbx
 * 0000000140B03BE9: mov     rax, rbx
 * 0000000140B03BEC: shr     rdx, 20h
 * 0000000140B03BF0: mov     ecx, r14d
 * 0000000140B03BF3: wrmsr
 * 0000000140B03BF5: sti
 * 0000000140B03BF6: mov     r15, [rsp+0B70h+var_AF8]
 * 0000000140B03BFB: add     dword ptr [rsi+828h], 350h
 * 0000000140B03C05: mov     r8, r15
 * 0000000140B03C08: mov     ebx, [rsi+828h]
 * 0000000140B03C0E: mov     rax, r15
 * 0000000140B03C11: mov     r9d, [rsi+814h]
 * 0000000140B03C18: mov     r11, [rsi+818h]
 * 0000000140B03C1F: lea     rcx, [r15+350h]
 * 0000000140B03C26: cmp     r15, rcx
 * 0000000140B03C29: jnb     short loc_140B03C3B
 * 0000000140B03C2B: mov     edx, 40h ; '@'
 * 0000000140B03C30: prefetchnta byte ptr [rax]
 * 0000000140B03C33: add     rax, rdx
 * 0000000140B03C36: cmp     rax, rcx
 * 0000000140B03C39: jb      short loc_140B03C30
 * 0000000140B03C3B: mov     r10d, 6
 * 0000000140B03C41: mov     r14, r11
 * 0000000140B03C44: mov     esi, 0FFFFFFFFh
 * 0000000140B03C49: mov     rdi, 7010008004002001h
 * 0000000140B03C53: lea     r12d, [r10-5]
 * 0000000140B03C57: mov     eax, 8
 * 0000000140B03C5C: xor     r14, [r8]
 * 0000000140B03C5F: mov     ecx, r9d
 * 0000000140B03C62: rol     r14, cl
 * 0000000140B03C65: xor     r14, [r8+8]
 * 0000000140B03C69: add     r8, 10h
 * 0000000140B03C6D: rol     r14, cl
 * 0000000140B03C70: sub     rax, r12
 * 0000000140B03C73: jnz     short loc_140B03C5C
 * 0000000140B03C75: mov     rcx, r8
 * 0000000140B03C78: sub     rcx, r15
 * 0000000140B03C7B: xor     rcx, r11
 * 0000000140B03C7E: mov     rax, rcx
 * 0000000140B03C81: rol     rax, 11h
 * 0000000140B03C85: xor     rcx, rax
 * 0000000140B03C88: mov     rax, rdi
 * 0000000140B03C8B: mul     rcx
 * 0000000140B03C8E: mov     [rbp+0A70h+var_590], rdx
 * 0000000140B03C95: xor     edx, eax
 * 0000000140B03C97: xor     r9d, edx
 * 0000000140B03C9A: and     r9d, 3Fh
 * 0000000140B03C9E: cmovz   r9d, r12d
 * 0000000140B03CA2: add     r10d, esi
 * 0000000140B03CA5: jnz     short loc_140B03C57
 * 0000000140B03CA7: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B03CAC: lea     edx, [r10+50h]
 * 0000000140B03CB0: mov     r12d, [rbp+0A70h+var_ACC]
 * 0000000140B03CB4: lea     eax, [rdx-46h]
 * 0000000140B03CB7: lea     r10d, [rdx-4Fh]
 * 0000000140B03CBB: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B03CC2: xor     r14, [r8]
 * 0000000140B03CC5: mov     ecx, r9d
 * 0000000140B03CC8: rol     r14, cl
 * 0000000140B03CCB: add     r8, 8
 * 0000000140B03CCF: add     edx, 0FFFFFFF8h
 * 0000000140B03CD2: sub     rax, r10
 * 0000000140B03CD5: jnz     short loc_140B03CC2
 * 0000000140B03CD7: mov     r11d, 0FFFFFFFFh
 * 0000000140B03CDD: test    edx, edx
 * 0000000140B03CDF: jz      short loc_140B03CF6
 * 0000000140B03CE1: movzx   eax, byte ptr [r8]
 * 0000000140B03CE5: mov     ecx, r9d
 * 0000000140B03CE8: xor     r14, rax
 * 0000000140B03CEB: add     r8, r10
 * 0000000140B03CEE: rol     r14, cl
 * 0000000140B03CF1: add     edx, r11d
 * 0000000140B03CF4: jnz     short loc_140B03CE1
 * 0000000140B03CF6: mov     rax, r14
 * 0000000140B03CF9: jmp     loc_140B03DCF
 * 0000000140B03CFE: test    r14, r14
 * 0000000140B03D01: jz      loc_140B03D91
 * 0000000140B03D07: mov     eax, 6000h
 * 0000000140B03D0C: test    word ptr [rbp+0A70h+arg_8], ax
 * 0000000140B03D13: jnz     short loc_140B03D91
 * 0000000140B03D15: cmp     r14, 0FFFFFFFFFFFFFFFFh
 * 0000000140B03D19: jz      loc_140B03AFC
 * 0000000140B03D1F: mov     rax, [rsi+260h]
 * 0000000140B03D26: lea     rdx, [rbp+0A70h+var_A00]
 * 0000000140B03D2A: xor     r8d, r8d
 * 0000000140B03D2D: mov     rcx, r12
 * 0000000140B03D30: call    KeGuardDispatchICall
 * 0000000140B03D35: test    rax, rax
 * 0000000140B03D38: jz      short loc_140B03D91
 * 0000000140B03D3A: mov     eax, [rax]
 * 0000000140B03D3C: mov     rdx, [rbp+0A70h+var_A00]
 * 0000000140B03D40: add     rax, rdx
 * 0000000140B03D43: cmp     rax, r12
 * 0000000140B03D46: jnz     short loc_140B03D91
 * 0000000140B03D48: cmp     rdx, [rsi+8C8h]
 * 0000000140B03D4F: jnz     short loc_140B03D91
 * 0000000140B03D51: mov     rcx, [rsi+8D8h]
 * 0000000140B03D58: mov     r8d, r12d
 * 0000000140B03D5B: mov     rax, [rsi+210h]
 * 0000000140B03D62: sub     r8d, edx
 * 0000000140B03D65: call    KeGuardDispatchICall
 * 0000000140B03D6A: test    rax, rax
 * 0000000140B03D6D: jz      short loc_140B03D91
 * 0000000140B03D6F: mov     eax, [rax+24h]
 * 0000000140B03D72: bt      eax, 19h
 * 0000000140B03D76: jb      short loc_140B03D91
 * 0000000140B03D78: cmp     edi, 0FEh
 * 0000000140B03D7E: jnz     loc_140B03AFC
 * 0000000140B03D84: cmp     r13, [rsi+8B8h]
 * 0000000140B03D8B: jz      loc_140B03AFC
 * 0000000140B03D91: mov     r9, [rbp+0A70h+var_AD8]
 * 0000000140B03D95: mov     rax, [rsi+588h]
 * 0000000140B03D9C: xor     r13d, r13d
 * 0000000140B03D9F: mov     [rax], rbx
 * 0000000140B03DA2: mov     dword ptr [rax+10h], 80h
 * 0000000140B03DA9: test    r9, r9
 * 0000000140B03DAC: jz      short loc_140B03DC0
 * 0000000140B03DAE: mov     rax, [rsi+588h]
 * 0000000140B03DB5: mov     [rax+8], r9
 * 0000000140B03DB9: mov     dword ptr [rax+14h], 80h
 * 0000000140B03DC0: mov     [rbp+0A70h+var_ACC], 1
 * 0000000140B03DC7: jmp     loc_140B03AFF
 * 0000000140B03DCC: xor     r14d, eax
 * 0000000140B03DCF: shr     rax, 1Fh
 * 0000000140B03DD3: test    rax, rax
 * 0000000140B03DD6: jnz     short loc_140B03DCC
 * 0000000140B03DD8: lea     eax, [rbx+10h]
 * 0000000140B03DDB: btr     r14d, 1Fh
 * 0000000140B03DE0: mov     [rsi+828h], eax
 * 0000000140B03DE6: lea     rdx, [r15+0E10h]
 * 0000000140B03DED: mov     r9d, [rsi+814h]
 * 0000000140B03DF4: lea     rcx, [r15+0E20h]
 * 0000000140B03DFB: mov     rbx, [rsi+818h]
 * 0000000140B03E02: mov     rax, rdx
 * 0000000140B03E05: cmp     rdx, rcx
 * 0000000140B03E08: jnb     short loc_140B03E1B
 * 0000000140B03E0A: mov     r8d, 40h ; '@'
 * 0000000140B03E10: prefetchnta byte ptr [rax]
 * 0000000140B03E13: add     rax, r8
 * 0000000140B03E16: cmp     rax, rcx
 * 0000000140B03E19: jb      short loc_140B03E10
 * 0000000140B03E1B: mov     eax, 2
 * 0000000140B03E20: lea     r8d, [rax+0Eh]
 * 0000000140B03E24: xor     rbx, [rdx]
 * 0000000140B03E27: mov     ecx, r9d
 * 0000000140B03E2A: rol     rbx, cl
 * 0000000140B03E2D: add     rdx, 8
 * 0000000140B03E31: add     r8d, 0FFFFFFF8h
 * 0000000140B03E35: sub     rax, r10
 * 0000000140B03E38: jnz     short loc_140B03E24
 * 0000000140B03E3A: test    r8d, r8d
 * 0000000140B03E3D: jz      short loc_140B03E53
 * 0000000140B03E3F: movzx   eax, byte ptr [rdx]
 * 0000000140B03E42: mov     ecx, r9d
 * 0000000140B03E45: xor     rbx, rax
 * 0000000140B03E48: add     rdx, r10
 * 0000000140B03E4B: rol     rbx, cl
 * 0000000140B03E4E: add     r8d, r11d
 * 0000000140B03E51: jnz     short loc_140B03E3F
 * 0000000140B03E53: mov     rax, rbx
 * 0000000140B03E56: jmp     short loc_140B03E5A
 * 0000000140B03E58: xor     ebx, eax
 * 0000000140B03E5A: shr     rax, 1Fh
 * 0000000140B03E5E: test    rax, rax
 * 0000000140B03E61: jnz     short loc_140B03E58
 * 0000000140B03E63: mov     rax, [rsi+198h]
 * 0000000140B03E6A: lea     rcx, [rbp+0A70h+var_258]
 * 0000000140B03E71: btr     ebx, 1Fh
 * 0000000140B03E75: call    KeGuardDispatchICall
 * 0000000140B03E7A: mov     rdx, [rsp+0B70h+var_B20]
 * 0000000140B03E7F: mov     ecx, [rdx+14h]
 * 0000000140B03E82: cmp     r14d, ecx
 * 0000000140B03E85: jnz     short loc_140B03EA5
 * 0000000140B03E87: mov     eax, ebx
 * 0000000140B03E89: cmp     rax, [rdx+18h]
 * 0000000140B03E8D: jnz     short loc_140B03EA5
 * 0000000140B03E8F: movzx   eax, word ptr [rdx+2Ch]
 * 0000000140B03E93: cmp     [rbp+0A70h+var_830], ax
 * 0000000140B03E9A: jnz     short loc_140B03EA5
 * 0000000140B03E9C: test    r12d, r12d
 * 0000000140B03E9F: jz      loc_140B03F3B
 * 0000000140B03EA5: test    r12d, r12d
 * 0000000140B03EA8: jnz     short loc_140B03EDC
 * 0000000140B03EAA: mov     eax, ebx
 * 0000000140B03EAC: cmp     rax, [rdx+18h]
 * 0000000140B03EB0: jnz     short loc_140B03EC0
 * 0000000140B03EB2: cmp     [rsi+8F8h], r13d
 * 0000000140B03EB9: jnz     short loc_140B03EDC
 * 0000000140B03EBB: mov     eax, r14d
 * 0000000140B03EBE: jmp     short loc_140B03ECE
 * 0000000140B03EC0: mov     eax, [rdx+18h]
 * 0000000140B03EC3: cmp     [rsi+8F8h], r13d
 * 0000000140B03ECA: jnz     short loc_140B03EDC
 * 0000000140B03ECC: mov     ecx, ebx
 * 0000000140B03ECE: xor     rcx, rax
 * 0000000140B03ED1: mov     rax, [rsi+588h]
 * 0000000140B03ED8: mov     [rax+18h], rcx
 * 0000000140B03EDC: mov     r12d, 1
 * 0000000140B03EE2: mov     rcx, [rdx+8]
 * 0000000140B03EE6: cmp     [rsi+8F8h], r13d
 * 0000000140B03EED: jnz     short loc_140B03F41
 * 0000000140B03EEF: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B03EF9: add     rax, rsi
 * 0000000140B03EFC: mov     [rsi+900h], rax
 * 0000000140B03F03: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B03F0D: add     rax, rdx
 * 0000000140B03F10: mov     [rsi+908h], rax
 * 0000000140B03F17: movsxd  rax, dword ptr [rdx]
 * 0000000140B03F1A: xor     edx, edx
 * 0000000140B03F1C: mov     [rsi+910h], rax
 * 0000000140B03F23: mov     [rsi+918h], rcx
 * 0000000140B03F2A: mov     rcx, rsi
 * 0000000140B03F2D: mov     [rsi+8F8h], r12d
 * 0000000140B03F34: call    $$ba
 * 0000000140B03F39: jmp     short loc_140B03F41
 * 0000000140B03F3B: mov     r12d, 1
 * 0000000140B03F41: add     dword ptr [rsi+828h], 10000h
 * 0000000140B03F4B: jmp     loc_140AFB148
 * 0000000140B03F50: xor     r12d, r12d
 * 0000000140B03F53: cmp     [r13+10h], r12d
 * 0000000140B03F57: jz      loc_140AFB39B
 * 0000000140B03F5D: test    dword ptr [rsi+994h], 4000h
 * 0000000140B03F67: jz      short loc_140B03F88
 * 0000000140B03F69: mov     rcx, [rsi+4D8h]
 * 0000000140B03F70: cli
 * 0000000140B03F71: mov     eax, [rsi+990h]
 * 0000000140B03F77: shr     eax, 0Ah
 * 0000000140B03F7A: and     eax, 1Fh
 * 0000000140B03F7D: lock bts [rcx], eax
 * 0000000140B03F81: jnb     short loc_140B03F88
 * 0000000140B03F83: sti
 * 0000000140B03F84: pause
 * 0000000140B03F86: jmp     short loc_140B03F70
 * 0000000140B03F88: mov     eax, [r13+18h]
 * 0000000140B03F8C: test    r11b, al
 * 0000000140B03F8F: jnz     loc_140B0423D
 * 0000000140B03F95: mov     r14, [r13+8]
 * 0000000140B03F99: mov     r8d, [r13+10h]
 * 0000000140B03F9D: mov     r9, r14
 * 0000000140B03FA0: add     [rsi+828h], r8d
 * 0000000140B03FA7: mov     rax, r14
 * 0000000140B03FAA: mov     r10d, [rsi+814h]
 * 0000000140B03FB1: mov     r15, [rsi+818h]
 * 0000000140B03FB8: lea     rcx, [r14+r8]
 * 0000000140B03FBC: mov     dword ptr [rbp+0A70h+arg_8], r8d
 * 0000000140B03FC3: cmp     r14, rcx
 * 0000000140B03FC6: jnb     short loc_140B03FD8
 * 0000000140B03FC8: mov     edx, 40h ; '@'
 * 0000000140B03FCD: prefetchnta byte ptr [rax]
 * 0000000140B03FD0: add     rax, rdx
 * 0000000140B03FD3: cmp     rax, rcx
 * 0000000140B03FD6: jb      short loc_140B03FCD
 * 0000000140B03FD8: mov     r11d, r8d
 * 0000000140B03FDB: mov     rbx, r15
 * 0000000140B03FDE: shr     r11d, 7
 * 0000000140B03FE2: mov     edx, 1
 * 0000000140B03FE7: test    r11d, r11d
 * 0000000140B03FEA: jz      short loc_140B04064
 * 0000000140B03FEC: mov     edi, 0FFFFFFFFh
 * 0000000140B03FF1: mov     r8, 7010008004002001h
 * 0000000140B03FFB: mov     eax, 8
 * 0000000140B04000: xor     rbx, [r9]
 * 0000000140B04003: mov     ecx, r10d
 * 0000000140B04006: rol     rbx, cl
 * 0000000140B04009: xor     rbx, [r9+8]
 * 0000000140B0400D: add     r9, 10h
 * 0000000140B04011: rol     rbx, cl
 * 0000000140B04014: sub     rax, rdx
 * 0000000140B04017: jnz     short loc_140B04000
 * 0000000140B04019: mov     rcx, r9
 * 0000000140B0401C: sub     rcx, r14
 * 0000000140B0401F: xor     rcx, r15
 * 0000000140B04022: mov     rax, rcx
 * 0000000140B04025: rol     rax, 11h
 * 0000000140B04029: xor     rcx, rax
 * 0000000140B0402C: mov     rax, r8
 * 0000000140B0402F: mul     rcx
 * 0000000140B04032: xor     r10d, edx
 * 0000000140B04035: mov     [rbp+0A70h+var_588], rdx
 * 0000000140B0403C: xor     r10d, eax
 * 0000000140B0403F: mov     edx, 1
 * 0000000140B04044: and     r10d, 3Fh
 * 0000000140B04048: cmovz   r10d, edx
 * 0000000140B0404C: add     r11d, edi
 * 0000000140B0404F: jnz     short loc_140B03FFB
 * 0000000140B04051: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B04056: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0405D: mov     r8d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B04064: and     r8d, 7Fh
 * 0000000140B04068: cmp     r8d, 8
 * 0000000140B0406C: jb      short loc_140B0408B
 * 0000000140B0406E: mov     eax, r8d
 * 0000000140B04071: shr     rax, 3
 * 0000000140B04075: xor     rbx, [r9]
 * 0000000140B04078: mov     ecx, r10d
 * 0000000140B0407B: rol     rbx, cl
 * 0000000140B0407E: add     r9, 8
 * 0000000140B04082: add     r8d, 0FFFFFFF8h
 * 0000000140B04086: sub     rax, rdx
 * 0000000140B04089: jnz     short loc_140B04075
 * 0000000140B0408B: test    r8d, r8d
 * 0000000140B0408E: jz      short loc_140B040AF
 * 0000000140B04090: mov     esi, 0FFFFFFFFh
 * 0000000140B04095: movzx   eax, byte ptr [r9]
 * 0000000140B04099: mov     ecx, r10d
 * 0000000140B0409C: xor     rbx, rax
 * 0000000140B0409F: add     r9, rdx
 * 0000000140B040A2: rol     rbx, cl
 * 0000000140B040A5: add     r8d, esi
 * 0000000140B040A8: jnz     short loc_140B04095
 * 0000000140B040AA: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B040AF: mov     rax, rbx
 * 0000000140B040B2: jmp     short loc_140B040B6
 * 0000000140B040B4: xor     ebx, eax
 * 0000000140B040B6: shr     rax, 1Fh
 * 0000000140B040BA: test    rax, rax
 * 0000000140B040BD: jnz     short loc_140B040B4
 * 0000000140B040BF: btr     ebx, 1Fh
 * 0000000140B040C3: cmp     ebx, [r13+14h]
 * 0000000140B040C7: jz      loc_140B0457F
 * 0000000140B040CD: xor     r8d, r8d
 * 0000000140B040D0: cmp     [r13+0], r8d
 * 0000000140B040D4: jnz     short loc_140B040DE
 * 0000000140B040D6: cmp     [r13+18h], r8d
 * 0000000140B040DA: cmovnz  r12d, edx
 * 0000000140B040DE: mov     ecx, [r13+10h]
 * 0000000140B040E2: mov     rdx, [r13+8]
 * 0000000140B040E6: test    rcx, rcx
 * 0000000140B040E9: jz      loc_140B041B3
 * 0000000140B040EF: mov     eax, [rsi+994h]
 * 0000000140B040F5: mov     r9d, 40h ; '@'
 * 0000000140B040FB: test    r9b, al
 * 0000000140B040FE: jz      loc_140B041B3
 * 0000000140B04104: mov     r13, cr8
 * 0000000140B04108: lea     eax, [r9-3Eh]
 * 0000000140B0410C: mov     cr8, rax
 * 0000000140B04110: mov     r14, rdx
 * 0000000140B04113: lea     rax, [rcx-1]
 * 0000000140B04117: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140B0411E: add     rax, rdx
 * 0000000140B04121: or      rax, 0FFFh
 * 0000000140B04127: mov     [rsp+0B70h+var_AF8], rax
 * 0000000140B0412C: lea     rax, [r14-1]
 * 0000000140B04130: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B04137: movzx   r15d, r13b
 * 0000000140B0413B: mov     rax, [rsi+468h]
 * 0000000140B04142: xor     edx, edx
 * 0000000140B04144: mov     rcx, r14
 * 0000000140B04147: call    KeGuardDispatchICall
 * 0000000140B0414C: xor     r8d, r8d
 * 0000000140B0414F: cmp     eax, 0C000022Dh
 * 0000000140B04154: jnz     short loc_140B0417D
 * 0000000140B04156: test    r12d, r12d
 * 0000000140B04159: jnz     short loc_140B041AA
 * 0000000140B0415B: lea     eax, [r8+1]
 * 0000000140B0415F: cmp     r13b, al
 * 0000000140B04162: ja      short loc_140B04181
 * 0000000140B04164: movzx   r15d, r13b
 * 0000000140B04168: mov     cr8, r15
 * 0000000140B0416C: mov     al, [r14]
 * 0000000140B0416F: mov     rax, cr8
 * 0000000140B04173: lea     eax, [r8+2]
 * 0000000140B04177: mov     cr8, rax
 * 0000000140B0417B: jmp     short loc_140B0413B
 * 0000000140B0417D: test    eax, eax
 * 0000000140B0417F: js      short loc_140B041AA
 * 0000000140B04181: mov     rax, [rbp+0A70h+arg_8]
 * 0000000140B04188: mov     edx, 1000h
 * 0000000140B0418D: add     rax, rdx
 * 0000000140B04190: add     r14, rdx
 * 0000000140B04193: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B0419A: cmp     rax, [rsp+0B70h+var_AF8]
 * 0000000140B0419F: jnz     short loc_140B04137
 * 0000000140B041A1: mov     cr8, r15
 * 0000000140B041A5: jmp     loc_140B0457F
 * 0000000140B041AA: mov     cr8, r15
 * 0000000140B041AE: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B041B3: mov     eax, [r13+14h]
 * 0000000140B041B7: cmp     [rsi+8F8h], r8d
 * 0000000140B041BE: jnz     loc_140B0457F
 * 0000000140B041C4: mov     ecx, eax
 * 0000000140B041C6: mov     eax, ebx
 * 0000000140B041C8: xor     rcx, rax
 * 0000000140B041CB: mov     rax, [rsi+588h]
 * 0000000140B041D2: mov     [rax+18h], rcx
 * 0000000140B041D6: cmp     [rsi+8F8h], r8d
 * 0000000140B041DD: mov     rcx, [r13+8]
 * 0000000140B041E1: jnz     loc_140B0457F
 * 0000000140B041E7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B041F1: mov     r12d, 1
 * 0000000140B041F7: add     rax, rsi
 * 0000000140B041FA: xor     edx, edx
 * 0000000140B041FC: mov     [rsi+900h], rax
 * 0000000140B04203: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B0420D: add     rax, r13
 * 0000000140B04210: mov     [rsi+908h], rax
 * 0000000140B04217: movsxd  rax, dword ptr [r13+0]
 * 0000000140B0421B: mov     [rsi+910h], rax
 * 0000000140B04222: mov     [rsi+918h], rcx
 * 0000000140B04229: mov     rcx, rsi
 * 0000000140B0422C: mov     [rsi+8F8h], r12d
 * 0000000140B04233: call    $$ba
 * 0000000140B04238: jmp     loc_140B04585
 * 0000000140B0423D: cmp     [rsi+980h], r12
 * 0000000140B04244: jz      loc_140B04578
 * 0000000140B0424A: mov     edx, [rsi+994h]
 * 0000000140B04250: cmp     [rsi+824h], r12d
 * 0000000140B04257: jnz     short loc_140B0426F
 * 0000000140B04259: lea     ecx, ds:0[rdx*8]
 * 0000000140B04260: xor     ecx, edx
 * 0000000140B04262: and     ecx, 20h
 * 0000000140B04265: xor     ecx, edx
 * 0000000140B04267: mov     [rsi+994h], ecx
 * 0000000140B0426D: jmp     short loc_140B04280
 * 0000000140B0426F: mov     eax, edx
 * 0000000140B04271: mov     ecx, edx
 * 0000000140B04273: shr     eax, 3
 * 0000000140B04276: xor     eax, edx
 * 0000000140B04278: test    al, 4
 * 0000000140B0427A: jnz     loc_140B04578
 * 0000000140B04280: test    cl, 4
 * 0000000140B04283: jz      loc_140B04356
 * 0000000140B04289: mov     ecx, [r13+8]
 * 0000000140B0428D: mov     r14d, [r13+10h]
 * 0000000140B04291: and     ecx, 0FFFh
 * 0000000140B04297: mov     rbx, [r13+8]
 * 0000000140B0429B: add     r14, 0FFFh
 * 0000000140B042A2: add     r14, rcx
 * 0000000140B042A5: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140B042AC: shr     r14, 0Ch
 * 0000000140B042B0: test    r14, r14
 * 0000000140B042B3: jz      loc_140B0457F
 * 0000000140B042B9: mov     rax, [rsi+2B0h]
 * 0000000140B042C0: mov     rcx, rbx
 * 0000000140B042C3: sub     r14, r11
 * 0000000140B042C6: call    KeGuardDispatchICall
 * 0000000140B042CB: test    al, al
 * 0000000140B042CD: jz      short loc_140B04327
 * 0000000140B042CF: cmp     [rsi+8F8h], r12d
 * 0000000140B042D6: jnz     short loc_140B04327
 * 0000000140B042D8: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B042E2: mov     edi, 1
 * 0000000140B042E7: add     rax, rsi
 * 0000000140B042EA: xor     edx, edx
 * 0000000140B042EC: mov     [rsi+900h], rax
 * 0000000140B042F3: mov     rcx, rsi
 * 0000000140B042F6: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B04300: add     rax, r13
 * 0000000140B04303: mov     [rsi+908h], rax
 * 0000000140B0430A: movsxd  rax, dword ptr [r13+0]
 * 0000000140B0430E: mov     [rsi+910h], rax
 * 0000000140B04315: mov     [rsi+918h], rbx
 * 0000000140B0431C: mov     [rsi+8F8h], edi
 * 0000000140B04322: call    $$ba
 * 0000000140B04327: add     dword ptr [rsi+828h], 100h
 * 0000000140B04331: add     rbx, 1000h
 * 0000000140B04338: mov     r11d, 1
 * 0000000140B0433E: test    r14, r14
 * 0000000140B04341: jnz     loc_140B042B9
 * 0000000140B04347: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0434E: mov     r12d, r11d
 * 0000000140B04351: jmp     loc_140B04585
 * 0000000140B04356: mov     r14, [r13+8]
 * 0000000140B0435A: mov     r8d, [r13+10h]
 * 0000000140B0435E: mov     r9, r14
 * 0000000140B04361: add     [rsi+828h], r8d
 * 0000000140B04368: mov     rax, r14
 * 0000000140B0436B: mov     r10d, [rsi+814h]
 * 0000000140B04372: mov     r15, [rsi+818h]
 * 0000000140B04379: lea     rcx, [r14+r8]
 * 0000000140B0437D: mov     dword ptr [rbp+0A70h+arg_8], r8d
 * 0000000140B04384: cmp     r14, rcx
 * 0000000140B04387: jnb     short loc_140B04399
 * 0000000140B04389: mov     edx, 40h ; '@'
 * 0000000140B0438E: prefetchnta byte ptr [rax]
 * 0000000140B04391: add     rax, rdx
 * 0000000140B04394: cmp     rax, rcx
 * 0000000140B04397: jb      short loc_140B0438E
 * 0000000140B04399: mov     r11d, r8d
 * 0000000140B0439C: mov     rbx, r15
 * 0000000140B0439F: shr     r11d, 7
 * 0000000140B043A3: mov     edx, 1
 * 0000000140B043A8: test    r11d, r11d
 * 0000000140B043AB: jz      short loc_140B04425
 * 0000000140B043AD: mov     edi, 0FFFFFFFFh
 * 0000000140B043B2: mov     r8, 7010008004002001h
 * 0000000140B043BC: mov     eax, 8
 * 0000000140B043C1: xor     rbx, [r9]
 * 0000000140B043C4: mov     ecx, r10d
 * 0000000140B043C7: rol     rbx, cl
 * 0000000140B043CA: xor     rbx, [r9+8]
 * 0000000140B043CE: add     r9, 10h
 * 0000000140B043D2: rol     rbx, cl
 * 0000000140B043D5: sub     rax, rdx
 * 0000000140B043D8: jnz     short loc_140B043C1
 * 0000000140B043DA: mov     rcx, r9
 * 0000000140B043DD: sub     rcx, r14
 * 0000000140B043E0: xor     rcx, r15
 * 0000000140B043E3: mov     rax, rcx
 * 0000000140B043E6: rol     rax, 11h
 * 0000000140B043EA: xor     rcx, rax
 * 0000000140B043ED: mov     rax, r8
 * 0000000140B043F0: mul     rcx
 * 0000000140B043F3: xor     r10d, edx
 * 0000000140B043F6: mov     [rbp+0A70h+var_580], rdx
 * 0000000140B043FD: xor     r10d, eax
 * 0000000140B04400: mov     edx, 1
 * 0000000140B04405: and     r10d, 3Fh
 * 0000000140B04409: cmovz   r10d, edx
 * 0000000140B0440D: add     r11d, edi
 * 0000000140B04410: jnz     short loc_140B043BC
 * 0000000140B04412: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B04417: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0441E: mov     r8d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B04425: and     r8d, 7Fh
 * 0000000140B04429: cmp     r8d, 8
 * 0000000140B0442D: jb      short loc_140B0444C
 * 0000000140B0442F: mov     eax, r8d
 * 0000000140B04432: shr     rax, 3
 * 0000000140B04436: xor     rbx, [r9]
 * 0000000140B04439: mov     ecx, r10d
 * 0000000140B0443C: rol     rbx, cl
 * 0000000140B0443F: add     r9, 8
 * 0000000140B04443: add     r8d, 0FFFFFFF8h
 * 0000000140B04447: sub     rax, rdx
 * 0000000140B0444A: jnz     short loc_140B04436
 * 0000000140B0444C: test    r8d, r8d
 * 0000000140B0444F: jz      short loc_140B04470
 * 0000000140B04451: mov     esi, 0FFFFFFFFh
 * 0000000140B04456: movzx   eax, byte ptr [r9]
 * 0000000140B0445A: mov     ecx, r10d
 * 0000000140B0445D: xor     rbx, rax
 * 0000000140B04460: add     r9, rdx
 * 0000000140B04463: rol     rbx, cl
 * 0000000140B04466: add     r8d, esi
 * 0000000140B04469: jnz     short loc_140B04456
 * 0000000140B0446B: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B04470: mov     rax, rbx
 * 0000000140B04473: jmp     short loc_140B04477
 * 0000000140B04475: xor     ebx, eax
 * 0000000140B04477: shr     rax, 1Fh
 * 0000000140B0447B: test    rax, rax
 * 0000000140B0447E: jnz     short loc_140B04475
 * 0000000140B04480: mov     edx, [r13+14h]
 * 0000000140B04484: btr     ebx, 1Fh
 * 0000000140B04488: cmp     ebx, edx
 * 0000000140B0448A: jz      loc_140B0457F
 * 0000000140B04490: mov     ecx, [r13+10h]
 * 0000000140B04494: mov     r8, [r13+8]
 * 0000000140B04498: test    rcx, rcx
 * 0000000140B0449B: jz      loc_140B04551
 * 0000000140B044A1: mov     eax, [rsi+994h]
 * 0000000140B044A7: mov     r9d, 40h ; '@'
 * 0000000140B044AD: test    r9b, al
 * 0000000140B044B0: jz      loc_140B04551
 * 0000000140B044B6: mov     r12, cr8
 * 0000000140B044BA: lea     eax, [r9-3Eh]
 * 0000000140B044BE: mov     cr8, rax
 * 0000000140B044C2: mov     r14, r8
 * 0000000140B044C5: lea     rax, [rcx-1]
 * 0000000140B044C9: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140B044D0: add     rax, r8
 * 0000000140B044D3: or      rax, 0FFFh
 * 0000000140B044D9: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B044E0: lea     r13, [r14-1]
 * 0000000140B044E4: movzx   r15d, r12b
 * 0000000140B044E8: mov     rax, [rsi+468h]
 * 0000000140B044EF: xor     edx, edx
 * 0000000140B044F1: mov     rcx, r14
 * 0000000140B044F4: call    KeGuardDispatchICall
 * 0000000140B044F9: cmp     eax, 0C000022Dh
 * 0000000140B044FE: jnz     short loc_140B04524
 * 0000000140B04500: mov     eax, 1
 * 0000000140B04505: cmp     r12b, al
 * 0000000140B04508: ja      short loc_140B04528
 * 0000000140B0450A: movzx   r15d, r12b
 * 0000000140B0450E: mov     cr8, r15
 * 0000000140B04512: mov     al, [r14]
 * 0000000140B04515: mov     rax, cr8
 * 0000000140B04519: mov     eax, 2
 * 0000000140B0451E: mov     cr8, rax
 * 0000000140B04522: jmp     short loc_140B044E8
 * 0000000140B04524: test    eax, eax
 * 0000000140B04526: js      short loc_140B04541
 * 0000000140B04528: mov     edx, 1000h
 * 0000000140B0452D: add     r14, rdx
 * 0000000140B04530: add     r13, rdx
 * 0000000140B04533: cmp     r13, [rbp+0A70h+arg_8]
 * 0000000140B0453A: jnz     short loc_140B044E4
 * 0000000140B0453C: jmp     loc_140B041A1
 * 0000000140B04541: mov     cr8, r15
 * 0000000140B04545: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B0454A: xor     r12d, r12d
 * 0000000140B0454D: mov     edx, [r13+14h]
 * 0000000140B04551: cmp     [rsi+8F8h], r12d
 * 0000000140B04558: jnz     short loc_140B0457F
 * 0000000140B0455A: mov     eax, edx
 * 0000000140B0455C: mov     ecx, ebx
 * 0000000140B0455E: xor     rcx, rax
 * 0000000140B04561: mov     rax, [rsi+588h]
 * 0000000140B04568: mov     [rax+18h], rcx
 * 0000000140B0456C: cmp     [rsi+8F8h], r12d
 * 0000000140B04573: jmp     loc_140B041DD
 * 0000000140B04578: mov     [rsi+824h], r12d
 * 0000000140B0457F: mov     r12d, 1
 * 0000000140B04585: test    dword ptr [rsi+994h], 4000h
 * 0000000140B0458F: jz      loc_140AFB148
 * 0000000140B04595: mov     ecx, [rsi+990h]
 * 0000000140B0459B: mov     edx, r12d
 * 0000000140B0459E: mov     r8, [rsi+4D8h]
 * 0000000140B045A5: shr     ecx, 0Ah
 * 0000000140B045A8: and     ecx, 1Fh
 * 0000000140B045AB: shl     edx, cl
 * 0000000140B045AD: not     edx
 * 0000000140B045AF: lock and [r8], edx
 * 0000000140B045B3: sti
 * 0000000140B045B4: jmp     loc_140AFB148
 * 0000000140B045B9: mov     rcx, gs:20h
 * 0000000140B045C2: mov     rax, [rsi+650h]
 * 0000000140B045C9: mov     rcx, [rax+rcx]
 * 0000000140B045CD: mov     rax, [rsi+690h]
 * 0000000140B045D4: add     rcx, [rsi+6B0h]
 * 0000000140B045DB: mov     rcx, [rcx+rax]
 * 0000000140B045DF: mov     [rbp+0A70h+var_A60], rcx
 * 0000000140B045E3: mov     rax, [rsi+498h]
 * 0000000140B045EA: call    KeGuardDispatchICall
 * 0000000140B045EF: mov     r9d, 0FFFFFFFFh
 * 0000000140B045F5: xor     r15d, r15d
 * 0000000140B045F8: mov     r14, rax
 * 0000000140B045FB: cmp     rax, r9
 * 0000000140B045FE: jnz     loc_140B04733
 * 0000000140B04604: mov     [rbp+0A70h+var_A60], r15
 * 0000000140B04608: mov     rcx, [rsi+988h]
 * 0000000140B0460F: test    rcx, rcx
 * 0000000140B04612: jz      short loc_140B04637
 * 0000000140B04614: mov     rax, [rsi+488h]
 * 0000000140B0461B: lea     rdx, [rbp+0A70h+var_A60]
 * 0000000140B0461F: call    KeGuardDispatchICall
 * 0000000140B04624: mov     rcx, [rbp+0A70h+var_A60]
 * 0000000140B04628: test    eax, eax
 * 0000000140B0462A: cmovs   rcx, r15
 * 0000000140B0462E: mov     [rbp+0A70h+var_A60], rcx
 * 0000000140B04632: test    rcx, rcx
 * 0000000140B04635: jnz     short loc_140B04649
 * 0000000140B04637: mov     rax, [rsi+3C0h]
 * 0000000140B0463E: xor     ecx, ecx
 * 0000000140B04640: call    KeGuardDispatchICall
 * 0000000140B04645: mov     [rbp+0A70h+var_A60], rax
 * 0000000140B04649: mov     [rsi+988h], r15
 * 0000000140B04650: mov     ebx, r15d
 * 0000000140B04653: mov     rcx, [rbp+0A70h+var_A60]
 * 0000000140B04657: mov     r12d, 1
 * 0000000140B0465D: test    rcx, rcx
 * 0000000140B04660: jz      loc_140B04725
 * 0000000140B04666: mov     rax, [rsi+3A0h]
 * 0000000140B0466D: add     ebx, r12d
 * 0000000140B04670: call    KeGuardDispatchICall
 * 0000000140B04675: test    eax, eax
 * 0000000140B04677: js      short loc_140B046D4
 * 0000000140B04679: mov     rax, [rsi+438h]
 * 0000000140B04680: lea     rdx, [rbp+0A70h+var_70]
 * 0000000140B04687: mov     rcx, [rbp+0A70h+var_A60]
 * 0000000140B0468B: call    KeGuardDispatchICall
 * 0000000140B04690: mov     rax, [rsi+498h]
 * 0000000140B04697: call    KeGuardDispatchICall
 * 0000000140B0469C: mov     r14, rax
 * 0000000140B0469F: lea     rcx, [rbp+0A70h+var_70]
 * 0000000140B046A6: mov     rax, [rsi+440h]
 * 0000000140B046AD: call    KeGuardDispatchICall
 * 0000000140B046B2: mov     rax, [rsi+3A8h]
 * 0000000140B046B9: mov     rcx, [rbp+0A70h+var_A60]
 * 0000000140B046BD: call    KeGuardDispatchICall
 * 0000000140B046C2: mov     eax, 0FFFFFFFFh
 * 0000000140B046C7: cmp     r14, rax
 * 0000000140B046CA: jnz     short loc_140B046F3
 * 0000000140B046CC: cmp     ebx, 100h
 * 0000000140B046D2: ja      short loc_140B046F3
 * 0000000140B046D4: mov     rax, [rsi+3C0h]
 * 0000000140B046DB: mov     rcx, [rbp+0A70h+var_A60]
 * 0000000140B046DF: call    KeGuardDispatchICall
 * 0000000140B046E4: mov     rcx, rax
 * 0000000140B046E7: mov     [rbp+0A70h+var_A60], rax
 * 0000000140B046EB: test    rax, rax
 * 0000000140B046EE: jmp     loc_140B04660
 * 0000000140B046F3: mov     rax, [rsi+490h]
 * 0000000140B046FA: mov     rcx, [rbp+0A70h+var_A60]
 * 0000000140B046FE: call    KeGuardDispatchICall
 * 0000000140B04703: mov     [rsi+988h], rax
 * 0000000140B0470A: mov     rax, [rsi+1E0h]
 * 0000000140B04711: mov     rcx, [rbp+0A70h+var_A60]
 * 0000000140B04715: call    KeGuardDispatchICall
 * 0000000140B0471A: mov     r9d, 0FFFFFFFFh
 * 0000000140B04720: cmp     r14, r9
 * 0000000140B04723: jnz     short loc_140B04739
 * 0000000140B04725: shl     ebx, 0Ch
 * 0000000140B04728: add     [rsi+828h], ebx
 * 0000000140B0472E: jmp     loc_140AFB148
 * 0000000140B04733: mov     r12d, 1
 * 0000000140B04739: test    dword ptr [rsi+990h], 40000000h
 * 0000000140B04743: jz      short loc_140B04788
 * 0000000140B04745: mov     rcx, [rsi+0A80h]
 * 0000000140B0474C: mov     edx, 30h ; '0'
 * 0000000140B04751: lea     r8d, [rdx-2Ah]
 * 0000000140B04755: mov     rax, [r13+0]
 * 0000000140B04759: add     edx, 0FFFFFFF8h
 * 0000000140B0475C: mov     [rcx], rax
 * 0000000140B0475F: add     r13, 8
 * 0000000140B04763: add     rcx, 8
 * 0000000140B04767: sub     r8, r12
 * 0000000140B0476A: jnz     short loc_140B04755
 * 0000000140B0476C: test    edx, edx
 * 0000000140B0476E: jz      short loc_140B04781
 * 0000000140B04770: mov     al, [r13+0]
 * 0000000140B04774: add     r13, r12
 * 0000000140B04777: mov     [rcx], al
 * 0000000140B04779: add     rcx, r12
 * 0000000140B0477C: add     edx, r9d
 * 0000000140B0477F: jnz     short loc_140B04770
 * 0000000140B04781: mov     r13, [rsi+0A80h]
 * 0000000140B04788: mov     [r13+18h], r14
 * 0000000140B0478C: mov     rcx, [rbp+0A70h+var_A60]
 * 0000000140B04790: cmp     [rsi+8F8h], r15d
 * 0000000140B04797: jnz     loc_140AFB148
 * 0000000140B0479D: jmp     loc_140AFB3E7
 * 0000000140B047A2: mov     eax, [rsi+830h]
 * 0000000140B047A8: mov     r12d, 1
 * 0000000140B047AE: test    r12b, al
 * 0000000140B047B1: jnz     loc_140AFB148
 * 0000000140B047B7: mov     r15, [rsi+540h]
 * 0000000140B047BE: xor     eax, eax
 * 0000000140B047C0: mov     r14d, eax
 * 0000000140B047C3: mov     rax, [rsi+178h]
 * 0000000140B047CA: call    KeGuardDispatchICall
 * 0000000140B047CF: test    dword ptr [rsi+990h], 40000000h
 * 0000000140B047D9: jnz     short loc_140B047ED
 * 0000000140B047DB: mov     ecx, [rsi+950h]
 * 0000000140B047E1: cmp     ecx, 7
 * 0000000140B047E4: jnb     short loc_140B047ED
 * 0000000140B047E6: mov     ebx, r12d
 * 0000000140B047E9: shl     bl, cl
 * 0000000140B047EB: jmp     short loc_140B04804
 * 0000000140B047ED: mov     rax, [rsi+128h]
 * 0000000140B047F4: xor     edx, edx
 * 0000000140B047F6: mov     rcx, [rsi+0A00h]
 * 0000000140B047FD: call    KeGuardDispatchICall
 * 0000000140B04802: mov     bl, 80h
 * 0000000140B04804: mov     rax, [rsi+138h]
 * 0000000140B0480B: xor     edx, edx
 * 0000000140B0480D: mov     rcx, r15
 * 0000000140B04810: call    KeGuardDispatchICall
 * 0000000140B04815: cmp     bl, 80h
 * 0000000140B04818: jz      short loc_140B0484D
 * 0000000140B0481A: mov     r8, [rsi+518h]
 * 0000000140B04821: mov     rdx, [r8]
 * 0000000140B04824: cmp     rdx, r8
 * 0000000140B04827: jz      short loc_140B04862
 * 0000000140B04829: not     bl
 * 0000000140B0482B: mov     rax, [rsi+6C0h]
 * 0000000140B04832: mov     rcx, rdx
 * 0000000140B04835: sub     rcx, [rsi+6D8h]
 * 0000000140B0483C: lock and [rcx+rax], bl
 * 0000000140B04840: mov     rdx, [rdx]
 * 0000000140B04843: add     r14d, r12d
 * 0000000140B04846: cmp     rdx, r8
 * 0000000140B04849: jnz     short loc_140B0482B
 * 0000000140B0484B: jmp     short loc_140B04862
 * 0000000140B0484D: mov     rax, [rsi+130h]
 * 0000000140B04854: xor     edx, edx
 * 0000000140B04856: mov     rcx, [rsi+0A00h]
 * 0000000140B0485D: call    KeGuardDispatchICall
 * 0000000140B04862: mov     rcx, [rsi+540h]
 * 0000000140B04869: xor     edx, edx
 * 0000000140B0486B: mov     rax, [rsi+140h]
 * 0000000140B04872: call    KeGuardDispatchICall
 * 0000000140B04877: mov     rax, [rsi+180h]
 * 0000000140B0487E: call    KeGuardDispatchICall
 * 0000000140B04883: shl     r14d, 7
 * 0000000140B04887: add     [rsi+828h], r14d
 * 0000000140B0488E: jmp     loc_140AFB148
 * 0000000140B04893: mov     ecx, [r13+20h]
 * 0000000140B04897: mov     edx, 2
 * 0000000140B0489C: mov     [rbp+0A70h+var_AF0], rsi
 * 0000000140B048A0: test    dl, cl
 * 0000000140B048A2: jz      loc_140B04DAE
 * 0000000140B048A8: xor     r14d, r14d
 * 0000000140B048AB: cmp     [rsi+980h], r14
 * 0000000140B048B2: jz      loc_140B02963
 * 0000000140B048B8: mov     eax, [rsi+994h]
 * 0000000140B048BE: test    al, 4
 * 0000000140B048C0: jnz     loc_140B02963
 * 0000000140B048C6: test    dl, cl
 * 0000000140B048C8: jz      loc_140B04DAE
 * 0000000140B048CE: mov     r8d, [rsi+824h]
 * 0000000140B048D5: mov     edx, eax
 * 0000000140B048D7: test    r8d, r8d
 * 0000000140B048DA: jnz     short loc_140B048F2
 * 0000000140B048DC: lea     ecx, ds:0[rax*8]
 * 0000000140B048E3: xor     ecx, eax
 * 0000000140B048E5: and     ecx, 20h
 * 0000000140B048E8: xor     ecx, eax
 * 0000000140B048EA: mov     [rsi+994h], ecx
 * 0000000140B048F0: jmp     short loc_140B04903
 * 0000000140B048F2: mov     eax, edx
 * 0000000140B048F4: mov     ecx, edx
 * 0000000140B048F6: shr     eax, 3
 * 0000000140B048F9: xor     eax, edx
 * 0000000140B048FB: test    al, 4
 * 0000000140B048FD: jnz     loc_140B02963
 * 0000000140B04903: cmp     [rsi+980h], r14
 * 0000000140B0490A: jz      loc_140B04DA2
 * 0000000140B04910: test    r8d, r8d
 * 0000000140B04913: jnz     short loc_140B0492B
 * 0000000140B04915: lea     edx, ds:0[rcx*8]
 * 0000000140B0491C: xor     edx, ecx
 * 0000000140B0491E: and     edx, 20h
 * 0000000140B04921: xor     edx, ecx
 * 0000000140B04923: mov     [rsi+994h], edx
 * 0000000140B04929: jmp     short loc_140B0493C
 * 0000000140B0492B: mov     eax, ecx
 * 0000000140B0492D: mov     edx, ecx
 * 0000000140B0492F: shr     eax, 3
 * 0000000140B04932: xor     eax, ecx
 * 0000000140B04934: test    al, 4
 * 0000000140B04936: jnz     loc_140B04DA2
 * 0000000140B0493C: test    dl, 4
 * 0000000140B0493F: jz      loc_140B04A0C
 * 0000000140B04945: mov     ecx, [r13+8]
 * 0000000140B04949: xor     r15d, r15d
 * 0000000140B0494C: mov     r14d, [r13+10h]
 * 0000000140B04950: and     ecx, 0FFFh
 * 0000000140B04956: mov     rbx, [r13+8]
 * 0000000140B0495A: add     r14, 0FFFh
 * 0000000140B04961: add     r14, rcx
 * 0000000140B04964: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140B0496B: shr     r14, 0Ch
 * 0000000140B0496F: lea     r12d, [r15+1]
 * 0000000140B04973: test    r14, r14
 * 0000000140B04976: jz      loc_140B04A04
 * 0000000140B0497C: mov     rdi, 0B3B74BDEE4453415h
 * 0000000140B04986: mov     rax, [rsi+2B0h]
 * 0000000140B0498D: mov     rcx, rbx
 * 0000000140B04990: sub     r14, r12
 * 0000000140B04993: call    KeGuardDispatchICall
 * 0000000140B04998: test    al, al
 * 0000000140B0499A: jz      short loc_140B049E7
 * 0000000140B0499C: cmp     [rsi+8F8h], r15d
 * 0000000140B049A3: jnz     short loc_140B049E7
 * 0000000140B049A5: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B049AF: xor     edx, edx
 * 0000000140B049B1: add     rax, rsi
 * 0000000140B049B4: mov     rcx, rsi
 * 0000000140B049B7: mov     [rsi+900h], rax
 * 0000000140B049BE: lea     rax, [rdi+r13]
 * 0000000140B049C2: mov     [rsi+908h], rax
 * 0000000140B049C9: movsxd  rax, dword ptr [r13+0]
 * 0000000140B049CD: mov     [rsi+910h], rax
 * 0000000140B049D4: mov     [rsi+918h], rbx
 * 0000000140B049DB: mov     [rsi+8F8h], r12d
 * 0000000140B049E2: call    $$ba
 * 0000000140B049E7: add     dword ptr [rsi+828h], 100h
 * 0000000140B049F1: add     rbx, 1000h
 * 0000000140B049F8: test    r14, r14
 * 0000000140B049FB: jnz     short loc_140B04986
 * 0000000140B049FD: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B04A04: xor     r14d, r14d
 * 0000000140B04A07: jmp     loc_140B04BF1
 * 0000000140B04A0C: mov     r14, [r13+8]
 * 0000000140B04A10: mov     r8d, [r13+10h]
 * 0000000140B04A14: mov     r9, r14
 * 0000000140B04A17: add     [rsi+828h], r8d
 * 0000000140B04A1E: mov     rax, r14
 * 0000000140B04A21: mov     r11d, [rsi+814h]
 * 0000000140B04A28: mov     r15, [rsi+818h]
 * 0000000140B04A2F: lea     rcx, [r14+r8]
 * 0000000140B04A33: cmp     r14, rcx
 * 0000000140B04A36: jnb     short loc_140B04A48
 * 0000000140B04A38: mov     edx, 40h ; '@'
 * 0000000140B04A3D: prefetchnta byte ptr [rax]
 * 0000000140B04A40: add     rax, rdx
 * 0000000140B04A43: cmp     rax, rcx
 * 0000000140B04A46: jb      short loc_140B04A3D
 * 0000000140B04A48: mov     r10d, r8d
 * 0000000140B04A4B: mov     rbx, r15
 * 0000000140B04A4E: shr     r10d, 7
 * 0000000140B04A52: mov     r12d, 1
 * 0000000140B04A58: test    r10d, r10d
 * 0000000140B04A5B: jz      short loc_140B04ACB
 * 0000000140B04A5D: mov     rdi, 7010008004002001h
 * 0000000140B04A67: mov     eax, 8
 * 0000000140B04A6C: xor     rbx, [r9]
 * 0000000140B04A6F: mov     ecx, r11d
 * 0000000140B04A72: rol     rbx, cl
 * 0000000140B04A75: xor     rbx, [r9+8]
 * 0000000140B04A79: add     r9, 10h
 * 0000000140B04A7D: rol     rbx, cl
 * 0000000140B04A80: sub     rax, r12
 * 0000000140B04A83: jnz     short loc_140B04A6C
 * 0000000140B04A85: mov     rcx, r9
 * 0000000140B04A88: sub     rcx, r14
 * 0000000140B04A8B: xor     rcx, r15
 * 0000000140B04A8E: mov     rax, rcx
 * 0000000140B04A91: rol     rax, 11h
 * 0000000140B04A95: xor     rcx, rax
 * 0000000140B04A98: mov     rax, rdi
 * 0000000140B04A9B: mul     rcx
 * 0000000140B04A9E: xor     r11d, edx
 * 0000000140B04AA1: mov     [rbp+0A70h+var_578], rdx
 * 0000000140B04AA8: xor     r11d, eax
 * 0000000140B04AAB: mov     edx, 0FFFFFFFFh
 * 0000000140B04AB0: and     r11d, 3Fh
 * 0000000140B04AB4: cmovz   r11d, r12d
 * 0000000140B04AB8: add     r10d, edx
 * 0000000140B04ABB: jnz     short loc_140B04A67
 * 0000000140B04ABD: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B04AC2: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B04AC9: jmp     short loc_140B04AD0
 * 0000000140B04ACB: mov     edx, 0FFFFFFFFh
 * 0000000140B04AD0: and     r8d, 7Fh
 * 0000000140B04AD4: cmp     r8d, 8
 * 0000000140B04AD8: jb      short loc_140B04AF7
 * 0000000140B04ADA: mov     eax, r8d
 * 0000000140B04ADD: shr     rax, 3
 * 0000000140B04AE1: xor     rbx, [r9]
 * 0000000140B04AE4: mov     ecx, r11d
 * 0000000140B04AE7: rol     rbx, cl
 * 0000000140B04AEA: add     r9, 8
 * 0000000140B04AEE: add     r8d, 0FFFFFFF8h
 * 0000000140B04AF2: sub     rax, r12
 * 0000000140B04AF5: jnz     short loc_140B04AE1
 * 0000000140B04AF7: xor     r14d, r14d
 * 0000000140B04AFA: test    r8d, r8d
 * 0000000140B04AFD: jz      short loc_140B04B14
 * 0000000140B04AFF: movzx   eax, byte ptr [r9]
 * 0000000140B04B03: mov     ecx, r11d
 * 0000000140B04B06: xor     rbx, rax
 * 0000000140B04B09: add     r9, r12
 * 0000000140B04B0C: rol     rbx, cl
 * 0000000140B04B0F: add     r8d, edx
 * 0000000140B04B12: jnz     short loc_140B04AFF
 * 0000000140B04B14: mov     rax, rbx
 * 0000000140B04B17: jmp     short loc_140B04B1B
 * 0000000140B04B19: xor     ebx, eax
 * 0000000140B04B1B: shr     rax, 1Fh
 * 0000000140B04B1F: test    rax, rax
 * 0000000140B04B22: jnz     short loc_140B04B19
 * 0000000140B04B24: mov     edx, [r13+14h]
 * 0000000140B04B28: btr     ebx, 1Fh
 * 0000000140B04B2C: cmp     ebx, edx
 * 0000000140B04B2E: jz      loc_140B04BF1
 * 0000000140B04B34: mov     ecx, [r13+10h]
 * 0000000140B04B38: mov     r8, [r13+8]
 * 0000000140B04B3C: test    rcx, rcx
 * 0000000140B04B3F: jz      loc_140B04D1C
 * 0000000140B04B45: mov     eax, [rsi+994h]
 * 0000000140B04B4B: mov     r9d, 40h ; '@'
 * 0000000140B04B51: test    r9b, al
 * 0000000140B04B54: jz      loc_140B04D1C
 * 0000000140B04B5A: mov     r12, cr8
 * 0000000140B04B5E: lea     eax, [r9-3Eh]
 * 0000000140B04B62: mov     cr8, rax
 * 0000000140B04B66: mov     r14, r8
 * 0000000140B04B69: lea     rax, [rcx-1]
 * 0000000140B04B6D: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140B04B74: add     rax, r8
 * 0000000140B04B77: or      rax, 0FFFh
 * 0000000140B04B7D: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B04B84: lea     r13, [r14-1]
 * 0000000140B04B88: movzx   r15d, r12b
 * 0000000140B04B8C: mov     rax, [rsi+468h]
 * 0000000140B04B93: xor     edx, edx
 * 0000000140B04B95: mov     rcx, r14
 * 0000000140B04B98: call    KeGuardDispatchICall
 * 0000000140B04B9D: cmp     eax, 0C000022Dh
 * 0000000140B04BA2: jnz     short loc_140B04BC8
 * 0000000140B04BA4: mov     eax, 1
 * 0000000140B04BA9: cmp     r12b, al
 * 0000000140B04BAC: ja      short loc_140B04BD0
 * 0000000140B04BAE: movzx   r15d, r12b
 * 0000000140B04BB2: mov     cr8, r15
 * 0000000140B04BB6: mov     al, [r14]
 * 0000000140B04BB9: mov     rax, cr8
 * 0000000140B04BBD: mov     eax, 2
 * 0000000140B04BC2: mov     cr8, rax
 * 0000000140B04BC6: jmp     short loc_140B04B8C
 * 0000000140B04BC8: test    eax, eax
 * 0000000140B04BCA: js      loc_140B04D0C
 * 0000000140B04BD0: mov     edx, 1000h
 * 0000000140B04BD5: add     r14, rdx
 * 0000000140B04BD8: add     r13, rdx
 * 0000000140B04BDB: cmp     r13, [rbp+0A70h+arg_8]
 * 0000000140B04BE2: jnz     short loc_140B04B88
 * 0000000140B04BE4: mov     cr8, r15
 * 0000000140B04BE8: xor     r14d, r14d
 * 0000000140B04BEB: mov     r12d, 1
 * 0000000140B04BF1: mov     rcx, [rsp+0B70h+var_B20]
 * 0000000140B04BF6: mov     eax, [rcx+20h]
 * 0000000140B04BF9: test    r12b, al
 * 0000000140B04BFC: jz      loc_140AFB148
 * 0000000140B04C02: mov     rbx, [rcx+18h]
 * 0000000140B04C06: mov     rax, [rsi+1F8h]
 * 0000000140B04C0D: mov     rcx, rbx
 * 0000000140B04C10: mov     [rsp+0B70h+var_B18], rbx
 * 0000000140B04C15: call    KeGuardDispatchICall
 * 0000000140B04C1A: movzx   r15d, word ptr [rax+14h]
 * 0000000140B04C1F: add     r15, 18h
 * 0000000140B04C23: add     r15, rax
 * 0000000140B04C26: movzx   eax, word ptr [rax+6]
 * 0000000140B04C2A: lea     rcx, [rax+rax*4]
 * 0000000140B04C2E: lea     rax, [r15+rcx*8]
 * 0000000140B04C32: cmp     r15, rax
 * 0000000140B04C35: jz      loc_140AFB148
 * 0000000140B04C3B: mov     r12d, [rsi+824h]
 * 0000000140B04C42: test    r12d, r12d
 * 0000000140B04C45: jnz     short loc_140B04C57
 * 0000000140B04C47: mov     dword ptr [rsi+824h], 1000h
 * 0000000140B04C51: mov     r12d, 1000h
 * 0000000140B04C57: cmp     rbx, [rsi+5E0h]
 * 0000000140B04C5E: jz      short loc_140B04C70
 * 0000000140B04C60: mov     dword ptr [rbp+0A70h+arg_8], r14d
 * 0000000140B04C67: cmp     rbx, [rsi+5E8h]
 * 0000000140B04C6E: jnz     short loc_140B04C7A
 * 0000000140B04C70: mov     dword ptr [rbp+0A70h+arg_8], 1
 * 0000000140B04C7A: mov     esi, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B04C80: mov     rdi, rax
 * 0000000140B04C83: mov     ecx, [r15+10h]
 * 0000000140B04C87: mov     eax, [r15+8]
 * 0000000140B04C8B: cmp     ecx, eax
 * 0000000140B04C8D: mov     r11d, [r15+0Ch]
 * 0000000140B04C91: cmovbe  ecx, eax
 * 0000000140B04C94: lea     r13d, [r11+0FFFh]
 * 0000000140B04C9B: add     r13d, ecx
 * 0000000140B04C9E: and     r13d, 0FFFFF000h
 * 0000000140B04CA5: cmp     r12d, r13d
 * 0000000140B04CA8: jnb     short loc_140B04CD3
 * 0000000140B04CAA: test    dword ptr [r15+24h], 2000000h
 * 0000000140B04CB2: jnz     short loc_140B04CD0
 * 0000000140B04CB4: mov     eax, [r15]
 * 0000000140B04CB7: cmp     eax, 54494E49h
 * 0000000140B04CBC: jnz     loc_140B04FF5
 * 0000000140B04CC2: cmp     dword ptr [r15+4], 4742444Bh
 * 0000000140B04CCA: jnz     loc_140B0502C
 * 0000000140B04CD0: mov     r12d, r13d
 * 0000000140B04CD3: mov     r8, [rbp+0A70h+var_AF0]
 * 0000000140B04CD7: add     r15, 28h ; '('
 * 0000000140B04CDB: cmp     r15, rdi
 * 0000000140B04CDE: jnz     short loc_140B04C83
 * 0000000140B04CE0: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B04CE5: cmp     r15, rdi
 * 0000000140B04CE8: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B04CEF: jnz     loc_140B05457
 * 0000000140B04CF5: cmp     r12d, r13d
 * 0000000140B04CF8: jb      loc_140B05457
 * 0000000140B04CFE: xor     eax, eax
 * 0000000140B04D00: mov     [r8+824h], eax
 * 0000000140B04D07: jmp     loc_140AFB050
 * 0000000140B04D0C: mov     cr8, r15
 * 0000000140B04D10: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B04D15: xor     r14d, r14d
 * 0000000140B04D18: mov     edx, [r13+14h]
 * 0000000140B04D1C: cmp     [rsi+8F8h], r14d
 * 0000000140B04D23: jnz     loc_140B04BEB
 * 0000000140B04D29: mov     eax, edx
 * 0000000140B04D2B: mov     r12d, 1
 * 0000000140B04D31: mov     ecx, ebx
 * 0000000140B04D33: xor     rcx, rax
 * 0000000140B04D36: mov     rax, [rsi+588h]
 * 0000000140B04D3D: mov     [rax+18h], rcx
 * 0000000140B04D41: mov     rcx, [r13+8]
 * 0000000140B04D45: cmp     [rsi+8F8h], r14d
 * 0000000140B04D4C: jnz     loc_140B04BF1
 * 0000000140B04D52: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B04D5C: xor     edx, edx
 * 0000000140B04D5E: add     rax, rsi
 * 0000000140B04D61: mov     [rsi+900h], rax
 * 0000000140B04D68: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B04D72: add     rax, r13
 * 0000000140B04D75: mov     [rsi+908h], rax
 * 0000000140B04D7C: movsxd  rax, dword ptr [r13+0]
 * 0000000140B04D80: mov     [rsi+910h], rax
 * 0000000140B04D87: mov     [rsi+918h], rcx
 * 0000000140B04D8E: mov     rcx, rsi
 * 0000000140B04D91: mov     [rsi+8F8h], r12d
 * 0000000140B04D98: call    $$ba
 * 0000000140B04D9D: jmp     loc_140B04BF1
 * 0000000140B04DA2: mov     [rsi+824h], r14d
 * 0000000140B04DA9: jmp     loc_140B04BEB
 * 0000000140B04DAE: mov     r14, [r13+8]
 * 0000000140B04DB2: mov     r8d, [r13+10h]
 * 0000000140B04DB6: mov     r9, r14
 * 0000000140B04DB9: add     [rsi+828h], r8d
 * 0000000140B04DC0: mov     rax, r14
 * 0000000140B04DC3: mov     r10d, [rsi+814h]
 * 0000000140B04DCA: mov     r15, [rsi+818h]
 * 0000000140B04DD1: lea     rcx, [r14+r8]
 * 0000000140B04DD5: cmp     r14, rcx
 * 0000000140B04DD8: jnb     short loc_140B04DEA
 * 0000000140B04DDA: mov     edx, 40h ; '@'
 * 0000000140B04DDF: prefetchnta byte ptr [rax]
 * 0000000140B04DE2: add     rax, rdx
 * 0000000140B04DE5: cmp     rax, rcx
 * 0000000140B04DE8: jb      short loc_140B04DDF
 * 0000000140B04DEA: mov     r11d, r8d
 * 0000000140B04DED: mov     rbx, r15
 * 0000000140B04DF0: shr     r11d, 7
 * 0000000140B04DF4: mov     edx, 1
 * 0000000140B04DF9: mov     r12d, 0FFFFFFFFh
 * 0000000140B04DFF: test    r11d, r11d
 * 0000000140B04E02: jz      short loc_140B04E70
 * 0000000140B04E04: mov     rdi, 7010008004002001h
 * 0000000140B04E0E: mov     eax, 8
 * 0000000140B04E13: xor     rbx, [r9]
 * 0000000140B04E16: mov     ecx, r10d
 * 0000000140B04E19: rol     rbx, cl
 * 0000000140B04E1C: xor     rbx, [r9+8]
 * 0000000140B04E20: add     r9, 10h
 * 0000000140B04E24: rol     rbx, cl
 * 0000000140B04E27: sub     rax, rdx
 * 0000000140B04E2A: jnz     short loc_140B04E13
 * 0000000140B04E2C: mov     rcx, r9
 * 0000000140B04E2F: sub     rcx, r14
 * 0000000140B04E32: xor     rcx, r15
 * 0000000140B04E35: mov     rax, rcx
 * 0000000140B04E38: rol     rax, 11h
 * 0000000140B04E3C: xor     rcx, rax
 * 0000000140B04E3F: mov     rax, rdi
 * 0000000140B04E42: mul     rcx
 * 0000000140B04E45: xor     r10d, edx
 * 0000000140B04E48: mov     [rbp+0A70h+var_570], rdx
 * 0000000140B04E4F: xor     r10d, eax
 * 0000000140B04E52: mov     edx, 1
 * 0000000140B04E57: and     r10d, 3Fh
 * 0000000140B04E5B: cmovz   r10d, edx
 * 0000000140B04E5F: add     r11d, r12d
 * 0000000140B04E62: jnz     short loc_140B04E0E
 * 0000000140B04E64: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B04E69: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B04E70: and     r8d, 7Fh
 * 0000000140B04E74: cmp     r8d, 8
 * 0000000140B04E78: jb      short loc_140B04E97
 * 0000000140B04E7A: mov     eax, r8d
 * 0000000140B04E7D: shr     rax, 3
 * 0000000140B04E81: xor     rbx, [r9]
 * 0000000140B04E84: mov     ecx, r10d
 * 0000000140B04E87: rol     rbx, cl
 * 0000000140B04E8A: add     r9, 8
 * 0000000140B04E8E: add     r8d, 0FFFFFFF8h
 * 0000000140B04E92: sub     rax, rdx
 * 0000000140B04E95: jnz     short loc_140B04E81
 * 0000000140B04E97: xor     r14d, r14d
 * 0000000140B04E9A: test    r8d, r8d
 * 0000000140B04E9D: jz      short loc_140B04EB4
 * 0000000140B04E9F: movzx   eax, byte ptr [r9]
 * 0000000140B04EA3: mov     ecx, r10d
 * 0000000140B04EA6: xor     rbx, rax
 * 0000000140B04EA9: add     r9, rdx
 * 0000000140B04EAC: rol     rbx, cl
 * 0000000140B04EAF: add     r8d, r12d
 * 0000000140B04EB2: jnz     short loc_140B04E9F
 * 0000000140B04EB4: mov     rax, rbx
 * 0000000140B04EB7: jmp     short loc_140B04EBB
 * 0000000140B04EB9: xor     ebx, eax
 * 0000000140B04EBB: shr     rax, 1Fh
 * 0000000140B04EBF: test    rax, rax
 * 0000000140B04EC2: jnz     short loc_140B04EB9
 * 0000000140B04EC4: btr     ebx, 1Fh
 * 0000000140B04EC8: mov     r12d, r14d
 * 0000000140B04ECB: cmp     ebx, [r13+14h]
 * 0000000140B04ECF: jz      loc_140B04BEB
 * 0000000140B04ED5: cmp     [r13+0], r14d
 * 0000000140B04ED9: jnz     short loc_140B04EE3
 * 0000000140B04EDB: cmp     [r13+18h], r14d
 * 0000000140B04EDF: cmovnz  r12d, edx
 * 0000000140B04EE3: mov     ecx, [r13+10h]
 * 0000000140B04EE7: mov     rdx, [r13+8]
 * 0000000140B04EEB: test    rcx, rcx
 * 0000000140B04EEE: jz      loc_140B04FB6
 * 0000000140B04EF4: mov     eax, [rsi+994h]
 * 0000000140B04EFA: mov     r8d, 40h ; '@'
 * 0000000140B04F00: test    r8b, al
 * 0000000140B04F03: jz      loc_140B04FB6
 * 0000000140B04F09: mov     r13, cr8
 * 0000000140B04F0D: lea     eax, [r8-3Eh]
 * 0000000140B04F11: mov     cr8, rax
 * 0000000140B04F15: mov     r14, rdx
 * 0000000140B04F18: lea     rax, [rcx-1]
 * 0000000140B04F1C: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140B04F23: add     rax, rdx
 * 0000000140B04F26: or      rax, 0FFFh
 * 0000000140B04F2C: mov     [rsp+0B70h+var_AF8], rax
 * 0000000140B04F31: lea     rax, [r14-1]
 * 0000000140B04F35: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B04F3C: movzx   r15d, r13b
 * 0000000140B04F40: mov     rax, [rsi+468h]
 * 0000000140B04F47: xor     edx, edx
 * 0000000140B04F49: mov     rcx, r14
 * 0000000140B04F4C: call    KeGuardDispatchICall
 * 0000000140B04F51: cmp     eax, 0C000022Dh
 * 0000000140B04F56: jnz     short loc_140B04F81
 * 0000000140B04F58: test    r12d, r12d
 * 0000000140B04F5B: jnz     short loc_140B04FAA
 * 0000000140B04F5D: lea     eax, [r12+1]
 * 0000000140B04F62: cmp     r13b, al
 * 0000000140B04F65: ja      short loc_140B04F85
 * 0000000140B04F67: movzx   r15d, r13b
 * 0000000140B04F6B: mov     cr8, r15
 * 0000000140B04F6F: mov     al, [r14]
 * 0000000140B04F72: mov     rax, cr8
 * 0000000140B04F76: lea     eax, [r12+2]
 * 0000000140B04F7B: mov     cr8, rax
 * 0000000140B04F7F: jmp     short loc_140B04F40
 * 0000000140B04F81: test    eax, eax
 * 0000000140B04F83: js      short loc_140B04FAA
 * 0000000140B04F85: mov     rax, [rbp+0A70h+arg_8]
 * 0000000140B04F8C: mov     edx, 1000h
 * 0000000140B04F91: add     rax, rdx
 * 0000000140B04F94: add     r14, rdx
 * 0000000140B04F97: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B04F9E: cmp     rax, [rsp+0B70h+var_AF8]
 * 0000000140B04FA3: jnz     short loc_140B04F3C
 * 0000000140B04FA5: jmp     loc_140B04BE4
 * 0000000140B04FAA: mov     cr8, r15
 * 0000000140B04FAE: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B04FB3: xor     r14d, r14d
 * 0000000140B04FB6: mov     eax, [r13+14h]
 * 0000000140B04FBA: cmp     [rsi+8F8h], r14d
 * 0000000140B04FC1: jnz     loc_140B04BEB
 * 0000000140B04FC7: mov     ecx, eax
 * 0000000140B04FC9: mov     eax, ebx
 * 0000000140B04FCB: xor     rcx, rax
 * 0000000140B04FCE: mov     rax, [rsi+588h]
 * 0000000140B04FD5: mov     [rax+18h], rcx
 * 0000000140B04FD9: mov     rcx, [r13+8]
 * 0000000140B04FDD: cmp     [rsi+8F8h], r14d
 * 0000000140B04FE4: jnz     loc_140B04BEB
 * 0000000140B04FEA: mov     r12d, 1
 * 0000000140B04FF0: jmp     loc_140B04D52
 * 0000000140B04FF5: cmp     eax, 45474150h
 * 0000000140B04FFA: jnz     short loc_140B0502C
 * 0000000140B04FFC: movzx   eax, word ptr [r15+4]
 * 0000000140B05001: mov     ecx, 7877h
 * 0000000140B05006: cmp     ax, cx
 * 0000000140B05009: jz      loc_140B04CD0
 * 0000000140B0500F: mov     ecx, 7277h
 * 0000000140B05014: cmp     ax, cx
 * 0000000140B05017: jz      loc_140B04CD0
 * 0000000140B0501D: mov     ecx, 7777h
 * 0000000140B05022: cmp     ax, cx
 * 0000000140B05025: jnz     short loc_140B05043
 * 0000000140B05027: jmp     loc_140B04CD0
 * 0000000140B0502C: cmp     eax, 41525245h
 * 0000000140B05031: jnz     short loc_140B05043
 * 0000000140B05033: mov     eax, 4154h
 * 0000000140B05038: cmp     [r15+4], ax
 * 0000000140B0503D: jz      loc_140B04CD0
 * 0000000140B05043: mov     rcx, [rbp+0A70h+var_AF0]
 * 0000000140B05047: test    rcx, rcx
 * 0000000140B0504A: jz      short loc_140B05086
 * 0000000140B0504C: mov     rax, [rcx+938h]
 * 0000000140B05053: mov     r8, [rcx+930h]
 * 0000000140B0505A: mov     qword ptr [rbp+0A70h+var_880+8], rax
 * 0000000140B05061: mov     rax, [rcx+940h]
 * 0000000140B05068: mov     qword ptr [rbp+0A70h+var_870], rax
 * 0000000140B0506F: mov     rax, [rcx+948h]
 * 0000000140B05076: mov     qword ptr [rbp+0A70h+var_870+8], rax
 * 0000000140B0507D: mov     qword ptr [rbp+0A70h+var_880], r8
 * 0000000140B05084: jmp     short loc_140B050A9
 * 0000000140B05086: movups  xmm0, xmmword ptr cs:VfExcludeSections
 * 0000000140B0508D: movups  xmm1, xmmword ptr cs:off_140C094A8; "INIT"
 * 0000000140B05094: movups  [rbp+0A70h+var_880], xmm0
 * 0000000140B0509B: mov     r8, qword ptr [rbp+0A70h+var_880]
 * 0000000140B050A2: movups  [rbp+0A70h+var_870], xmm1
 * 0000000140B050A9: mov     r10d, 7
 * 0000000140B050AF: mov     r9, r15
 * 0000000140B050B2: movzx   edx, byte ptr [r9]
 * 0000000140B050B6: inc     r9
 * 0000000140B050B9: movzx   eax, byte ptr [r8]
 * 0000000140B050BD: inc     r8
 * 0000000140B050C0: cmp     rdx, rax
 * 0000000140B050C3: jnz     short loc_140B050D4
 * 0000000140B050C5: mov     eax, 0FFFFFFFFh
 * 0000000140B050CA: add     r10d, eax
 * 0000000140B050CD: jnz     short loc_140B050B2
 * 0000000140B050CF: jmp     loc_140B04CD0
 * 0000000140B050D4: mov     r9, qword ptr [rbp+0A70h+var_880+8]
 * 0000000140B050DB: mov     r8d, 8
 * 0000000140B050E1: mov     r10, r15
 * 0000000140B050E4: mov     rcx, [r10]
 * 0000000140B050E7: add     r10, 8
 * 0000000140B050EB: mov     rax, [r9]
 * 0000000140B050EE: add     r9, 8
 * 0000000140B050F2: cmp     rcx, rax
 * 0000000140B050F5: jnz     short loc_140B0512C
 * 0000000140B050F7: add     r8d, 0FFFFFFF8h
 * 0000000140B050FB: cmp     r8d, 8
 * 0000000140B050FF: jnb     short loc_140B050E4
 * 0000000140B05101: test    r8d, r8d
 * 0000000140B05104: jz      loc_140B04CD0
 * 0000000140B0510A: movzx   edx, byte ptr [r10]
 * 0000000140B0510E: inc     r10
 * 0000000140B05111: movzx   eax, byte ptr [r9]
 * 0000000140B05115: inc     r9
 * 0000000140B05118: cmp     rdx, rax
 * 0000000140B0511B: jnz     short loc_140B0512C
 * 0000000140B0511D: mov     eax, 0FFFFFFFFh
 * 0000000140B05122: add     r8d, eax
 * 0000000140B05125: jnz     short loc_140B0510A
 * 0000000140B05127: jmp     loc_140B04CD0
 * 0000000140B0512C: mov     r8, qword ptr [rbp+0A70h+var_870]
 * 0000000140B05133: mov     r10d, 4
 * 0000000140B05139: mov     r9, r15
 * 0000000140B0513C: movzx   edx, byte ptr [r9]
 * 0000000140B05140: inc     r9
 * 0000000140B05143: movzx   eax, byte ptr [r8]
 * 0000000140B05147: inc     r8
 * 0000000140B0514A: cmp     rdx, rax
 * 0000000140B0514D: jnz     short loc_140B0515E
 * 0000000140B0514F: mov     eax, 0FFFFFFFFh
 * 0000000140B05154: add     r10d, eax
 * 0000000140B05157: jnz     short loc_140B0513C
 * 0000000140B05159: jmp     loc_140B04CD0
 * 0000000140B0515E: mov     r8, qword ptr [rbp+0A70h+var_870+8]
 * 0000000140B05165: mov     r10d, 6
 * 0000000140B0516B: mov     r9, r15
 * 0000000140B0516E: movzx   edx, byte ptr [r9]
 * 0000000140B05172: inc     r9
 * 0000000140B05175: movzx   eax, byte ptr [r8]
 * 0000000140B05179: inc     r8
 * 0000000140B0517C: cmp     rdx, rax
 * 0000000140B0517F: jnz     short loc_140B05190
 * 0000000140B05181: mov     eax, 0FFFFFFFFh
 * 0000000140B05186: add     r10d, eax
 * 0000000140B05189: jnz     short loc_140B0516E
 * 0000000140B0518B: jmp     loc_140B04CD0
 * 0000000140B05190: mov     eax, [r15+24h]
 * 0000000140B05194: test    eax, eax
 * 0000000140B05196: js      loc_140B04CD0
 * 0000000140B0519C: bt      eax, 1Dh
 * 0000000140B051A0: jnb     loc_140B04CD0
 * 0000000140B051A6: xor     r9d, r9d
 * 0000000140B051A9: mov     r10d, 1
 * 0000000140B051AF: mov     r14d, r10d
 * 0000000140B051B2: test    esi, esi
 * 0000000140B051B4: jz      short loc_140B051C9
 * 0000000140B051B6: mov     eax, [r15]
 * 0000000140B051B9: cmp     eax, 2E656461h
 * 0000000140B051BE: jz      short loc_140B051C9
 * 0000000140B051C0: cmp     eax, 45474150h
 * 0000000140B051C5: cmovnz  r14d, r9d
 * 0000000140B051C9: mov     r8, [rbp+0A70h+var_AF0]
 * 0000000140B051CD: cmp     r12d, r11d
 * 0000000140B051D0: cmovb   r12d, r11d
 * 0000000140B051D4: mov     eax, r12d
 * 0000000140B051D7: add     rbx, rax
 * 0000000140B051DA: test    byte ptr [r8+87Bh], 4
 * 0000000140B051E2: jz      short loc_140B05245
 * 0000000140B051E4: mov     ecx, 0FFFFFFFFh
 * 0000000140B051E9: mov     eax, ecx
 * 0000000140B051EB: xbegin  $+6
 * 0000000140B051F1: cmp     eax, ecx
 * 0000000140B051F3: jnz     short loc_140B051FC
 * 0000000140B051F5: mov     al, [rbx]
 * 0000000140B051F7: xend
 * 0000000140B051FA: jmp     short loc_140B0522E
 * 0000000140B051FC: rdtsc
 * 0000000140B051FE: shl     rdx, 20h
 * 0000000140B05202: or      rax, rdx
 * 0000000140B05205: mov     rcx, rax
 * 0000000140B05208: ror     rax, 3
 * 0000000140B0520C: xor     rcx, rax
 * 0000000140B0520F: mov     rax, 7010008004002001h
 * 0000000140B05219: mul     rcx
 * 0000000140B0521C: mov     [rbp+0A70h+var_568], rdx
 * 0000000140B05223: xor     dl, al
 * 0000000140B05225: mov     eax, 0Fh
 * 0000000140B0522A: test    al, dl
 * 0000000140B0522C: jz      short loc_140B05245
 * 0000000140B0522E: add     [r8+83Ch], r10d
 * 0000000140B05235: add     dword ptr [r8+828h], 100h
 * 0000000140B05240: jmp     loc_140B052F1
 * 0000000140B05245: test    r14d, r14d
 * 0000000140B05248: jz      loc_140B0531F
 * 0000000140B0524E: mov     rax, [r8+450h]
 * 0000000140B05255: lea     rcx, [rbp+0A70h+var_6C8]
 * 0000000140B0525C: mov     rdx, rbx
 * 0000000140B0525F: call    KeGuardDispatchICall
 * 0000000140B05264: xor     r9d, r9d
 * 0000000140B05267: test    eax, eax
 * 0000000140B05269: jns     loc_140B05390
 * 0000000140B0526F: cmp     eax, 0C0000005h
 * 0000000140B05274: jnz     short loc_140B052E7
 * 0000000140B05276: mov     rcx, [rsp+0B70h+var_B20]
 * 0000000140B0527B: mov     eax, [rcx+20h]
 * 0000000140B0527E: test    al, 4
 * 0000000140B05280: jz      short loc_140B05288
 * 0000000140B05282: cmp     [r15+24h], r9d
 * 0000000140B05286: jge     short loc_140B052E7
 * 0000000140B05288: mov     r8, [rbp+0A70h+var_AF0]
 * 0000000140B0528C: cmp     [r8+8F8h], r9d
 * 0000000140B05293: jnz     short loc_140B052EB
 * 0000000140B05295: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0529F: xor     edx, edx
 * 0000000140B052A1: add     rax, r8
 * 0000000140B052A4: mov     [r8+900h], rax
 * 0000000140B052AB: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B052B5: add     rax, rcx
 * 0000000140B052B8: mov     [r8+908h], rax
 * 0000000140B052BF: movsxd  rax, dword ptr [rcx]
 * 0000000140B052C2: mov     rcx, r8
 * 0000000140B052C5: mov     [r8+910h], rax
 * 0000000140B052CC: mov     eax, 1
 * 0000000140B052D1: mov     [r8+918h], rbx
 * 0000000140B052D8: mov     [r8+8F8h], eax
 * 0000000140B052DF: call    $$ba
 * 0000000140B052E4: xor     r9d, r9d
 * 0000000140B052E7: mov     r8, [rbp+0A70h+var_AF0]
 * 0000000140B052EB: mov     r10d, 1
 * 0000000140B052F1: mov     eax, [r8+82Ch]
 * 0000000140B052F8: add     r12d, 1000h
 * 0000000140B052FF: cmp     r12d, r13d
 * 0000000140B05302: jnb     loc_140B0543D
 * 0000000140B05308: cmp     [r8+828h], eax
 * 0000000140B0530F: jge     loc_140B04CE0
 * 0000000140B05315: mov     rbx, [rsp+0B70h+var_B18]
 * 0000000140B0531A: jmp     loc_140B051D4
 * 0000000140B0531F: mov     edx, 0FFFh
 * 0000000140B05324: mov     [rbp+0A70h+var_6C8], r9
 * 0000000140B0532B: mov     [rbp+0A70h+var_6BE], r9w
 * 0000000140B05333: mov     rax, rbx
 * 0000000140B05336: and     rax, rdx
 * 0000000140B05339: mov     [rbp+0A70h+var_6A0], 1000h
 * 0000000140B05343: add     rax, 1FFFh
 * 0000000140B05349: mov     rcx, rbx
 * 0000000140B0534C: shr     rax, 0Ch
 * 0000000140B05350: add     ax, 6
 * 0000000140B05354: shl     ax, 3
 * 0000000140B05358: mov     [rbp+0A70h+var_6C0], ax
 * 0000000140B0535F: mov     rax, rbx
 * 0000000140B05362: and     rax, 0FFFFFFFFFFFFF000h
 * 0000000140B05368: mov     [rbp+0A70h+var_6A8], rax
 * 0000000140B0536F: mov     eax, ebx
 * 0000000140B05371: and     eax, edx
 * 0000000140B05373: mov     [rbp+0A70h+var_69C], eax
 * 0000000140B05379: mov     rax, [r8+458h]
 * 0000000140B05380: call    KeGuardDispatchICall
 * 0000000140B05385: shr     rax, 0Ch
 * 0000000140B05389: mov     [rbp+0A70h+var_698], rax
 * 0000000140B05390: mov     rcx, [rbp+0A70h+var_AF0]
 * 0000000140B05394: mov     eax, 1
 * 0000000140B05399: add     [rcx+840h], eax
 * 0000000140B0539F: mov     eax, [rbp+0A70h+var_69C]
 * 0000000140B053A5: add     rax, [rbp+0A70h+var_6A8]
 * 0000000140B053AC: mov     [rcx+0A68h], rax
 * 0000000140B053B3: mov     rax, [rsp+0B70h+var_B20]
 * 0000000140B053B8: mov     [rcx+0A60h], rax
 * 0000000140B053BF: mov     rbx, cr8
 * 0000000140B053C3: mov     eax, 2
 * 0000000140B053C8: mov     cr8, rax
 * 0000000140B053CC: mov     rax, [rcx+5F0h]
 * 0000000140B053D3: xor     r8d, r8d
 * 0000000140B053D6: add     rcx, 0A40h
 * 0000000140B053DD: mov     edx, [rax]
 * 0000000140B053DF: call    RtlInitMinimalBarrier
 * 0000000140B053E4: mov     rdx, [rbp+0A70h+var_AF0]
 * 0000000140B053E8: mov     ecx, [rdx+7F4h]
 * 0000000140B053EE: mov     rax, [rdx+448h]
 * 0000000140B053F5: add     rcx, rdx
 * 0000000140B053F8: call    KeGuardDispatchICall
 * 0000000140B053FD: mov     r8, rax
 * 0000000140B05400: mov     [rbp+0A70h+var_AF0], rax
 * 0000000140B05404: movzx   eax, bl
 * 0000000140B05407: mov     cr8, rax
 * 0000000140B0540B: xor     r9d, r9d
 * 0000000140B0540E: test    r14d, r14d
 * 0000000140B05411: jz      short loc_140B0542D
 * 0000000140B05413: mov     rax, [r8+460h]
 * 0000000140B0541A: lea     rcx, [rbp+0A70h+var_6C8]
 * 0000000140B05421: call    KeGuardDispatchICall
 * 0000000140B05426: mov     r8, [rbp+0A70h+var_AF0]
 * 0000000140B0542A: xor     r9d, r9d
 * 0000000140B0542D: add     dword ptr [r8+828h], 14000h
 * 0000000140B05438: jmp     loc_140B052EB
 * 0000000140B0543D: cmp     [r8+828h], eax
 * 0000000140B05444: jge     loc_140B04CE0
 * 0000000140B0544A: mov     rbx, [rsp+0B70h+var_B18]
 * 0000000140B0544F: xor     r14d, r14d
 * 0000000140B05452: jmp     loc_140B04CD7
 * 0000000140B05457: mov     [r8+824h], r12d
 * 0000000140B0545E: jmp     loc_140AFB39B
 * 0000000140B05463: mov     ebx, 0Ch
 * 0000000140B05468: xor     r11d, r11d
 * 0000000140B0546B: cmp     [rsi+824h], r11d
 * 0000000140B05472: jnz     short loc_140B05491
 * 0000000140B05474: cmp     r10d, ebx
 * 0000000140B05477: jnz     loc_140B059B2
 * 0000000140B0547D: cmp     [rsi+980h], r11
 * 0000000140B05484: jnz     loc_140B0562F
 * 0000000140B0548A: mov     [rsi+824h], r11d
 * 0000000140B05491: mov     r12d, 1
 * 0000000140B05497: mov     rbx, [rsp+0B70h+var_B20]
 * 0000000140B0549C: mov     r8d, [rsi+824h]
 * 0000000140B054A3: mov     r9, [rbx+8]
 * 0000000140B054A7: mov     ecx, [rbx+10h]
 * 0000000140B054AA: lea     rax, [r8+r8*2]
 * 0000000140B054AE: mov     [rbp+0A70h+var_AF0], r9
 * 0000000140B054B2: lea     r14, [r9+rax*4]
 * 0000000140B054B6: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140B054C0: mul     rcx
 * 0000000140B054C3: mov     [rbp+0A70h+var_AB0], r14
 * 0000000140B054C7: shr     rdx, 3
 * 0000000140B054CB: lea     rax, [rdx+rdx*2]
 * 0000000140B054CF: lea     r15, [r9+rax*4]
 * 0000000140B054D3: mov     [rsp+0B70h+var_B18], r15
 * 0000000140B054D8: lea     r15, [rbx+30h]
 * 0000000140B054DC: lea     r15, [r15+r8*4]
 * 0000000140B054E0: mov     [rbp+0A70h+var_AE8], r15
 * 0000000140B054E4: cmp     r14, [rsp+0B70h+var_B18]
 * 0000000140B054E9: jz      loc_140B060B7
 * 0000000140B054EF: mov     rdi, [rsp+0B70h+var_B18]
 * 0000000140B054F4: cmp     [r15], r11d
 * 0000000140B054F7: jl      loc_140B06052
 * 0000000140B054FD: mov     edx, [r14]
 * 0000000140B05500: mov     r13, [rbx+20h]
 * 0000000140B05504: mov     r12d, [r14+4]
 * 0000000140B05508: add     r13, rdx
 * 0000000140B0550B: sub     r12d, edx
 * 0000000140B0550E: mov     [rsp+0B70h+var_AF8], r13
 * 0000000140B05513: cmp     r10d, 2Bh ; '+'
 * 0000000140B05517: jz      loc_140B05C37
 * 0000000140B0551D: add     [rsi+828h], r12d
 * 0000000140B05524: mov     r8, r13
 * 0000000140B05527: mov     r10d, [rsi+814h]
 * 0000000140B0552E: mov     rax, r13
 * 0000000140B05531: mov     r11, [rsi+818h]
 * 0000000140B05538: mov     ecx, r12d
 * 0000000140B0553B: add     rcx, r13
 * 0000000140B0553E: cmp     r13, rcx
 * 0000000140B05541: jnb     short loc_140B05553
 * 0000000140B05543: mov     edx, 40h ; '@'
 * 0000000140B05548: prefetchnta byte ptr [rax]
 * 0000000140B0554B: add     rax, rdx
 * 0000000140B0554E: cmp     rax, rcx
 * 0000000140B05551: jb      short loc_140B05548
 * 0000000140B05553: mov     r9d, r12d
 * 0000000140B05556: mov     rbx, r11
 * 0000000140B05559: shr     r9d, 7
 * 0000000140B0555D: test    r9d, r9d
 * 0000000140B05560: jz      short loc_140B055D6
 * 0000000140B05562: mov     edi, 1
 * 0000000140B05567: mov     rsi, 7010008004002001h
 * 0000000140B05571: mov     r15d, 0FFFFFFFFh
 * 0000000140B05577: mov     eax, 8
 * 0000000140B0557C: xor     rbx, [r8]
 * 0000000140B0557F: mov     ecx, r10d
 * 0000000140B05582: rol     rbx, cl
 * 0000000140B05585: xor     rbx, [r8+8]
 * 0000000140B05589: add     r8, 10h
 * 0000000140B0558D: rol     rbx, cl
 * 0000000140B05590: sub     rax, rdi
 * 0000000140B05593: jnz     short loc_140B0557C
 * 0000000140B05595: mov     rcx, r8
 * 0000000140B05598: sub     rcx, r13
 * 0000000140B0559B: xor     rcx, r11
 * 0000000140B0559E: mov     rax, rcx
 * 0000000140B055A1: rol     rax, 11h
 * 0000000140B055A5: xor     rcx, rax
 * 0000000140B055A8: mov     rax, rsi
 * 0000000140B055AB: mul     rcx
 * 0000000140B055AE: xor     r10d, edx
 * 0000000140B055B1: mov     [rbp+0A70h+var_550], rdx
 * 0000000140B055B8: xor     r10d, eax
 * 0000000140B055BB: and     r10d, 3Fh
 * 0000000140B055BF: cmovz   r10d, edi
 * 0000000140B055C3: add     r9d, r15d
 * 0000000140B055C6: jnz     short loc_140B05577
 * 0000000140B055C8: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B055CD: mov     r15, [rbp+0A70h+var_AE8]
 * 0000000140B055D1: mov     rdi, [rsp+0B70h+var_B18]
 * 0000000140B055D6: mov     edx, r12d
 * 0000000140B055D9: mov     r9d, 1
 * 0000000140B055DF: and     edx, 7Fh
 * 0000000140B055E2: cmp     edx, 8
 * 0000000140B055E5: jb      short loc_140B05602
 * 0000000140B055E7: mov     eax, edx
 * 0000000140B055E9: shr     rax, 3
 * 0000000140B055ED: xor     rbx, [r8]
 * 0000000140B055F0: mov     ecx, r10d
 * 0000000140B055F3: rol     rbx, cl
 * 0000000140B055F6: add     r8, 8
 * 0000000140B055FA: add     edx, 0FFFFFFF8h
 * 0000000140B055FD: sub     rax, r9
 * 0000000140B05600: jnz     short loc_140B055ED
 * 0000000140B05602: xor     r11d, r11d
 * 0000000140B05605: test    edx, edx
 * 0000000140B05607: jz      short loc_140B05627
 * 0000000140B05609: mov     edi, 0FFFFFFFFh
 * 0000000140B0560E: movzx   eax, byte ptr [r8]
 * 0000000140B05612: mov     ecx, r10d
 * 0000000140B05615: xor     rbx, rax
 * 0000000140B05618: add     r8, r9
 * 0000000140B0561B: rol     rbx, cl
 * 0000000140B0561E: add     edx, edi
 * 0000000140B05620: jnz     short loc_140B0560E
 * 0000000140B05622: mov     rdi, [rsp+0B70h+var_B18]
 * 0000000140B05627: mov     rax, rbx
 * 0000000140B0562A: jmp     loc_140B05C20
 * 0000000140B0562F: mov     eax, [rsi+994h]
 * 0000000140B05635: lea     ecx, ds:0[rax*8]
 * 0000000140B0563C: xor     ecx, eax
 * 0000000140B0563E: and     ecx, 20h
 * 0000000140B05641: xor     ecx, eax
 * 0000000140B05643: mov     [rsi+994h], ecx
 * 0000000140B05649: test    cl, 4
 * 0000000140B0564C: jz      loc_140B05722
 * 0000000140B05652: mov     ecx, [r13+8]
 * 0000000140B05656: mov     r12d, 1
 * 0000000140B0565C: mov     r14d, [r13+10h]
 * 0000000140B05660: and     ecx, 0FFFh
 * 0000000140B05666: mov     rbx, [r13+8]
 * 0000000140B0566A: add     r14, 0FFFh
 * 0000000140B05671: add     r14, rcx
 * 0000000140B05674: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140B0567B: shr     r14, 0Ch
 * 0000000140B0567F: test    r14, r14
 * 0000000140B05682: jz      loc_140B05497
 * 0000000140B05688: mov     rdi, 0B3B74BDEE4453415h
 * 0000000140B05692: mov     rax, [rsi+2B0h]
 * 0000000140B05699: mov     rcx, rbx
 * 0000000140B0569C: sub     r14, r12
 * 0000000140B0569F: call    KeGuardDispatchICall
 * 0000000140B056A4: xor     r11d, r11d
 * 0000000140B056A7: test    al, al
 * 0000000140B056A9: jz      short loc_140B056F9
 * 0000000140B056AB: cmp     [rsi+8F8h], r11d
 * 0000000140B056B2: jnz     short loc_140B056F9
 * 0000000140B056B4: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B056BE: xor     edx, edx
 * 0000000140B056C0: add     rax, rsi
 * 0000000140B056C3: mov     rcx, rsi
 * 0000000140B056C6: mov     [rsi+900h], rax
 * 0000000140B056CD: lea     rax, [rdi+r13]
 * 0000000140B056D1: mov     [rsi+908h], rax
 * 0000000140B056D8: movsxd  rax, dword ptr [r13+0]
 * 0000000140B056DC: mov     [rsi+910h], rax
 * 0000000140B056E3: mov     [rsi+918h], rbx
 * 0000000140B056EA: mov     [rsi+8F8h], r12d
 * 0000000140B056F1: call    $$ba
 * 0000000140B056F6: xor     r11d, r11d
 * 0000000140B056F9: add     dword ptr [rsi+828h], 100h
 * 0000000140B05703: add     rbx, 1000h
 * 0000000140B0570A: test    r14, r14
 * 0000000140B0570D: jnz     short loc_140B05692
 * 0000000140B0570F: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B05716: mov     r10d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0571D: jmp     loc_140B05497
 * 0000000140B05722: mov     r11, [r13+8]
 * 0000000140B05726: mov     r8d, [r13+10h]
 * 0000000140B0572A: mov     r9, r11
 * 0000000140B0572D: add     [rsi+828h], r8d
 * 0000000140B05734: mov     rax, r11
 * 0000000140B05737: mov     r14d, [rsi+814h]
 * 0000000140B0573E: mov     r15, [rsi+818h]
 * 0000000140B05745: lea     rcx, [r11+r8]
 * 0000000140B05749: cmp     r11, rcx
 * 0000000140B0574C: jnb     short loc_140B0575E
 * 0000000140B0574E: mov     edx, 40h ; '@'
 * 0000000140B05753: prefetchnta byte ptr [rax]
 * 0000000140B05756: add     rax, rdx
 * 0000000140B05759: cmp     rax, rcx
 * 0000000140B0575C: jb      short loc_140B05753
 * 0000000140B0575E: mov     r10d, r8d
 * 0000000140B05761: mov     rbx, r15
 * 0000000140B05764: shr     r10d, 7
 * 0000000140B05768: mov     r12d, 1
 * 0000000140B0576E: test    r10d, r10d
 * 0000000140B05771: jz      short loc_140B057E0
 * 0000000140B05773: mov     rdi, 7010008004002001h
 * 0000000140B0577D: mov     eax, 8
 * 0000000140B05782: xor     rbx, [r9]
 * 0000000140B05785: mov     ecx, r14d
 * 0000000140B05788: rol     rbx, cl
 * 0000000140B0578B: xor     rbx, [r9+8]
 * 0000000140B0578F: add     r9, 10h
 * 0000000140B05793: rol     rbx, cl
 * 0000000140B05796: sub     rax, r12
 * 0000000140B05799: jnz     short loc_140B05782
 * 0000000140B0579B: mov     rcx, r9
 * 0000000140B0579E: sub     rcx, r11
 * 0000000140B057A1: xor     rcx, r15
 * 0000000140B057A4: mov     rax, rcx
 * 0000000140B057A7: rol     rax, 11h
 * 0000000140B057AB: xor     rcx, rax
 * 0000000140B057AE: mov     rax, rdi
 * 0000000140B057B1: mul     rcx
 * 0000000140B057B4: mov     [rbp+0A70h+var_560], rdx
 * 0000000140B057BB: xor     edx, eax
 * 0000000140B057BD: xor     r14d, edx
 * 0000000140B057C0: mov     edx, 0FFFFFFFFh
 * 0000000140B057C5: and     r14d, 3Fh
 * 0000000140B057C9: cmovz   r14d, r12d
 * 0000000140B057CD: add     r10d, edx
 * 0000000140B057D0: jnz     short loc_140B0577D
 * 0000000140B057D2: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B057D7: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B057DE: jmp     short loc_140B057E5
 * 0000000140B057E0: mov     edx, 0FFFFFFFFh
 * 0000000140B057E5: and     r8d, 7Fh
 * 0000000140B057E9: cmp     r8d, 8
 * 0000000140B057ED: jb      short loc_140B0580C
 * 0000000140B057EF: mov     eax, r8d
 * 0000000140B057F2: shr     rax, 3
 * 0000000140B057F6: xor     rbx, [r9]
 * 0000000140B057F9: mov     ecx, r14d
 * 0000000140B057FC: rol     rbx, cl
 * 0000000140B057FF: add     r9, 8
 * 0000000140B05803: add     r8d, 0FFFFFFF8h
 * 0000000140B05807: sub     rax, r12
 * 0000000140B0580A: jnz     short loc_140B057F6
 * 0000000140B0580C: xor     r11d, r11d
 * 0000000140B0580F: test    r8d, r8d
 * 0000000140B05812: jz      short loc_140B05829
 * 0000000140B05814: movzx   eax, byte ptr [r9]
 * 0000000140B05818: mov     ecx, r14d
 * 0000000140B0581B: xor     rbx, rax
 * 0000000140B0581E: add     r9, r12
 * 0000000140B05821: rol     rbx, cl
 * 0000000140B05824: add     r8d, edx
 * 0000000140B05827: jnz     short loc_140B05814
 * 0000000140B05829: mov     rax, rbx
 * 0000000140B0582C: jmp     short loc_140B05830
 * 0000000140B0582E: xor     ebx, eax
 * 0000000140B05830: shr     rax, 1Fh
 * 0000000140B05834: test    rax, rax
 * 0000000140B05837: jnz     short loc_140B0582E
 * 0000000140B05839: mov     r8d, [r13+14h]
 * 0000000140B0583D: btr     ebx, 1Fh
 * 0000000140B05841: cmp     ebx, r8d
 * 0000000140B05844: jz      loc_140B05716
 * 0000000140B0584A: mov     ecx, [r13+10h]
 * 0000000140B0584E: mov     rdx, [r13+8]
 * 0000000140B05852: test    rcx, rcx
 * 0000000140B05855: jz      loc_140B058F8
 * 0000000140B0585B: mov     eax, [rsi+994h]
 * 0000000140B05861: mov     r9d, 40h ; '@'
 * 0000000140B05867: test    r9b, al
 * 0000000140B0586A: jz      loc_140B058F8
 * 0000000140B05870: mov     r12, cr8
 * 0000000140B05874: lea     eax, [r9-3Eh]
 * 0000000140B05878: mov     cr8, rax
 * 0000000140B0587C: mov     r14, rdx
 * 0000000140B0587F: lea     rax, [rcx-1]
 * 0000000140B05883: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140B0588A: add     rax, rdx
 * 0000000140B0588D: or      rax, 0FFFh
 * 0000000140B05893: mov     [rsp+0B70h+var_AF8], rax
 * 0000000140B05898: lea     r13, [r14-1]
 * 0000000140B0589C: movzx   r15d, r12b
 * 0000000140B058A0: mov     rax, [rsi+468h]
 * 0000000140B058A7: xor     edx, edx
 * 0000000140B058A9: mov     rcx, r14
 * 0000000140B058AC: call    KeGuardDispatchICall
 * 0000000140B058B1: cmp     eax, 0C000022Dh
 * 0000000140B058B6: jnz     short loc_140B058E0
 * 0000000140B058B8: mov     eax, 1
 * 0000000140B058BD: cmp     r12b, al
 * 0000000140B058C0: ja      loc_140B05989
 * 0000000140B058C6: movzx   r15d, r12b
 * 0000000140B058CA: mov     cr8, r15
 * 0000000140B058CE: mov     al, [r14]
 * 0000000140B058D1: mov     rax, cr8
 * 0000000140B058D5: mov     eax, 2
 * 0000000140B058DA: mov     cr8, rax
 * 0000000140B058DE: jmp     short loc_140B058A0
 * 0000000140B058E0: xor     r11d, r11d
 * 0000000140B058E3: test    eax, eax
 * 0000000140B058E5: jns     loc_140B0598C
 * 0000000140B058EB: mov     cr8, r15
 * 0000000140B058EF: mov     r13, [rsp+0B70h+var_B20]
 * 0000000140B058F4: mov     r8d, [r13+14h]
 * 0000000140B058F8: cmp     [rsi+8F8h], r11d
 * 0000000140B058FF: jnz     loc_140B059A6
 * 0000000140B05905: mov     eax, ebx
 * 0000000140B05907: mov     r12d, 1
 * 0000000140B0590D: mov     ecx, r8d
 * 0000000140B05910: xor     rcx, rax
 * 0000000140B05913: mov     rax, [rsi+588h]
 * 0000000140B0591A: mov     [rax+18h], rcx
 * 0000000140B0591E: mov     rcx, [r13+8]
 * 0000000140B05922: cmp     [rsi+8F8h], r11d
 * 0000000140B05929: jnz     loc_140B05716
 * 0000000140B0592F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B05939: add     rax, rsi
 * 0000000140B0593C: mov     [rsi+900h], rax
 * 0000000140B05943: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B0594D: add     rax, r13
 * 0000000140B05950: mov     [rsi+908h], rax
 * 0000000140B05957: movsxd  rax, dword ptr [r13+0]
 * 0000000140B0595B: mov     [rsi+910h], rax
 * 0000000140B05962: xor     edx, edx
 * 0000000140B05964: mov     [rsi+918h], rcx
 * 0000000140B0596B: mov     rcx, rsi
 * 0000000140B0596E: mov     [rsi+8F8h], r12d
 * 0000000140B05975: call    $$ba
 * 0000000140B0597A: mov     r10d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B05981: xor     r11d, r11d
 * 0000000140B05984: jmp     loc_140B05497
 * 0000000140B05989: xor     r11d, r11d
 * 0000000140B0598C: mov     eax, 1000h
 * 0000000140B05991: add     r14, rax
 * 0000000140B05994: add     r13, rax
 * 0000000140B05997: cmp     r13, [rsp+0B70h+var_AF8]
 * 0000000140B0599C: jnz     loc_140B0589C
 * 0000000140B059A2: mov     cr8, r15
 * 0000000140B059A6: mov     r10d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B059AD: jmp     loc_140B05491
 * 0000000140B059B2: mov     r14, [r13+8]
 * 0000000140B059B6: mov     r8d, [r13+10h]
 * 0000000140B059BA: mov     r9, r14
 * 0000000140B059BD: add     [rsi+828h], r8d
 * 0000000140B059C4: mov     rax, r14
 * 0000000140B059C7: mov     r11d, [rsi+814h]
 * 0000000140B059CE: mov     r15, [rsi+818h]
 * 0000000140B059D5: lea     rcx, [r14+r8]
 * 0000000140B059D9: cmp     r14, rcx
 * 0000000140B059DC: jnb     short loc_140B059EE
 * 0000000140B059DE: mov     edx, 40h ; '@'
 * 0000000140B059E3: prefetchnta byte ptr [rax]
 * 0000000140B059E6: add     rax, rdx
 * 0000000140B059E9: cmp     rax, rcx
 * 0000000140B059EC: jb      short loc_140B059E3
 * 0000000140B059EE: mov     r10d, r8d
 * 0000000140B059F1: mov     rbx, r15
 * 0000000140B059F4: shr     r10d, 7
 * 0000000140B059F8: mov     r12d, 1
 * 0000000140B059FE: mov     r13d, 0FFFFFFFFh
 * 0000000140B05A04: test    r10d, r10d
 * 0000000140B05A07: jz      short loc_140B05A70
 * 0000000140B05A09: mov     rdi, 7010008004002001h
 * 0000000140B05A13: mov     eax, 8
 * 0000000140B05A18: xor     rbx, [r9]
 * 0000000140B05A1B: mov     ecx, r11d
 * 0000000140B05A1E: rol     rbx, cl
 * 0000000140B05A21: xor     rbx, [r9+8]
 * 0000000140B05A25: add     r9, 10h
 * 0000000140B05A29: rol     rbx, cl
 * 0000000140B05A2C: sub     rax, r12
 * 0000000140B05A2F: jnz     short loc_140B05A18
 * 0000000140B05A31: mov     rcx, r9
 * 0000000140B05A34: sub     rcx, r14
 * 0000000140B05A37: xor     rcx, r15
 * 0000000140B05A3A: mov     rax, rcx
 * 0000000140B05A3D: rol     rax, 11h
 * 0000000140B05A41: xor     rcx, rax
 * 0000000140B05A44: mov     rax, rdi
 * 0000000140B05A47: mul     rcx
 * 0000000140B05A4A: xor     r11d, edx
 * 0000000140B05A4D: mov     [rbp+0A70h+var_558], rdx
 * 0000000140B05A54: xor     r11d, eax
 * 0000000140B05A57: and     r11d, 3Fh
 * 0000000140B05A5B: cmovz   r11d, r12d
 * 0000000140B05A5F: add     r10d, r13d
 * 0000000140B05A62: jnz     short loc_140B05A13
 * 0000000140B05A64: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B05A69: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B05A70: and     r8d, 7Fh
 * 0000000140B05A74: cmp     r8d, 8
 * 0000000140B05A78: jb      short loc_140B05A97
 * 0000000140B05A7A: mov     eax, r8d
 * 0000000140B05A7D: shr     rax, 3
 * 0000000140B05A81: xor     rbx, [r9]
 * 0000000140B05A84: mov     ecx, r11d
 * 0000000140B05A87: rol     rbx, cl
 * 0000000140B05A8A: add     r9, 8
 * 0000000140B05A8E: add     r8d, 0FFFFFFF8h
 * 0000000140B05A92: sub     rax, r12
 * 0000000140B05A95: jnz     short loc_140B05A81
 * 0000000140B05A97: test    r8d, r8d
 * 0000000140B05A9A: jz      short loc_140B05AB1
 * 0000000140B05A9C: movzx   eax, byte ptr [r9]
 * 0000000140B05AA0: mov     ecx, r11d
 * 0000000140B05AA3: xor     rbx, rax
 * 0000000140B05AA6: add     r9, r12
 * 0000000140B05AA9: rol     rbx, cl
 * 0000000140B05AAC: add     r8d, r13d
 * 0000000140B05AAF: jnz     short loc_140B05A9C
 * 0000000140B05AB1: mov     rax, rbx
 * 0000000140B05AB4: shr     rax, 1Fh
 * 0000000140B05AB8: xor     r11d, r11d
 * 0000000140B05ABB: jmp     short loc_140B05AC3
 * 0000000140B05ABD: xor     ebx, eax
 * 0000000140B05ABF: shr     rax, 1Fh
 * 0000000140B05AC3: test    rax, rax
 * 0000000140B05AC6: jnz     short loc_140B05ABD
 * 0000000140B05AC8: mov     r10, [rsp+0B70h+var_B20]
 * 0000000140B05ACD: btr     ebx, 1Fh
 * 0000000140B05AD1: mov     r13d, r11d
 * 0000000140B05AD4: cmp     ebx, [r10+14h]
 * 0000000140B05AD8: jz      loc_140B05716
 * 0000000140B05ADE: cmp     [r10], r11d
 * 0000000140B05AE1: jnz     short loc_140B05AEB
 * 0000000140B05AE3: cmp     [r10+18h], r11d
 * 0000000140B05AE7: cmovnz  r13d, r12d
 * 0000000140B05AEB: mov     ecx, [r10+10h]
 * 0000000140B05AEF: mov     rdx, [r10+8]
 * 0000000140B05AF3: test    rcx, rcx
 * 0000000140B05AF6: jz      loc_140B05BB6
 * 0000000140B05AFC: mov     eax, [rsi+994h]
 * 0000000140B05B02: mov     r8d, 40h ; '@'
 * 0000000140B05B08: test    r8b, al
 * 0000000140B05B0B: jz      loc_140B05BB6
 * 0000000140B05B11: mov     r12, cr8
 * 0000000140B05B15: lea     eax, [r8-3Eh]
 * 0000000140B05B19: mov     cr8, rax
 * 0000000140B05B1D: mov     r14, rdx
 * 0000000140B05B20: lea     rax, [rcx-1]
 * 0000000140B05B24: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140B05B2B: add     rax, rdx
 * 0000000140B05B2E: or      rax, 0FFFh
 * 0000000140B05B34: mov     [rsp+0B70h+var_AF8], rax
 * 0000000140B05B39: lea     rax, [r14-1]
 * 0000000140B05B3D: mov     [rsp+0B70h+var_B18], rax
 * 0000000140B05B42: movzx   r15d, r12b
 * 0000000140B05B46: mov     rax, [rsi+468h]
 * 0000000140B05B4D: xor     edx, edx
 * 0000000140B05B4F: mov     rcx, r14
 * 0000000140B05B52: call    KeGuardDispatchICall
 * 0000000140B05B57: xor     r11d, r11d
 * 0000000140B05B5A: cmp     eax, 0C000022Dh
 * 0000000140B05B5F: jnz     short loc_140B05B88
 * 0000000140B05B61: test    r13d, r13d
 * 0000000140B05B64: jnz     short loc_140B05BAD
 * 0000000140B05B66: lea     eax, [r11+1]
 * 0000000140B05B6A: cmp     r12b, al
 * 0000000140B05B6D: ja      short loc_140B05B8C
 * 0000000140B05B6F: movzx   r15d, r12b
 * 0000000140B05B73: mov     cr8, r15
 * 0000000140B05B77: mov     al, [r14]
 * 0000000140B05B7A: mov     rax, cr8
 * 0000000140B05B7E: lea     eax, [r11+2]
 * 0000000140B05B82: mov     cr8, rax
 * 0000000140B05B86: jmp     short loc_140B05B46
 * 0000000140B05B88: test    eax, eax
 * 0000000140B05B8A: js      short loc_140B05BAD
 * 0000000140B05B8C: mov     rax, [rsp+0B70h+var_B18]
 * 0000000140B05B91: mov     ecx, 1000h
 * 0000000140B05B96: add     rax, rcx
 * 0000000140B05B99: add     r14, rcx
 * 0000000140B05B9C: mov     [rsp+0B70h+var_B18], rax
 * 0000000140B05BA1: cmp     rax, [rsp+0B70h+var_AF8]
 * 0000000140B05BA6: jnz     short loc_140B05B42
 * 0000000140B05BA8: jmp     loc_140B059A2
 * 0000000140B05BAD: mov     cr8, r15
 * 0000000140B05BB1: mov     r10, [rsp+0B70h+var_B20]
 * 0000000140B05BB6: mov     eax, [r10+14h]
 * 0000000140B05BBA: cmp     [rsi+8F8h], r11d
 * 0000000140B05BC1: jnz     loc_140B059A6
 * 0000000140B05BC7: mov     ecx, ebx
 * 0000000140B05BC9: mov     r12d, 1
 * 0000000140B05BCF: xor     rcx, rax
 * 0000000140B05BD2: mov     rax, [rsi+588h]
 * 0000000140B05BD9: mov     [rax+18h], rcx
 * 0000000140B05BDD: mov     rcx, [r10+8]
 * 0000000140B05BE1: cmp     [rsi+8F8h], r11d
 * 0000000140B05BE8: jnz     loc_140B05716
 * 0000000140B05BEE: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B05BF8: add     rax, rsi
 * 0000000140B05BFB: mov     [rsi+900h], rax
 * 0000000140B05C02: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B05C0C: add     rax, r10
 * 0000000140B05C0F: mov     [rsi+908h], rax
 * 0000000140B05C16: movsxd  rax, dword ptr [r10]
 * 0000000140B05C19: jmp     loc_140B0595B
 * 0000000140B05C1E: xor     ebx, eax
 * 0000000140B05C20: shr     rax, 1Fh
 * 0000000140B05C24: test    rax, rax
 * 0000000140B05C27: jnz     short loc_140B05C1E
 * 0000000140B05C29: btr     ebx, 1Fh
 * 0000000140B05C2D: mov     [rsp+0B70h+var_B08], rbx
 * 0000000140B05C32: jmp     loc_140B05EDA
 * 0000000140B05C37: mov     r8d, r12d
 * 0000000140B05C3A: mov     rdx, r13
 * 0000000140B05C3D: mov     rcx, rsi
 * 0000000140B05C40: call    sub_140B11A74
 * 0000000140B05C45: mov     ebx, eax
 * 0000000140B05C47: xor     r11d, r11d
 * 0000000140B05C4A: lea     eax, ds:0[r12*8]
 * 0000000140B05C52: mov     [rsp+0B70h+var_B08], rbx
 * 0000000140B05C57: add     [rsi+828h], eax
 * 0000000140B05C5D: test    dword ptr [rsi+994h], 800h
 * 0000000140B05C67: jz      loc_140B05EDA
 * 0000000140B05C6D: lea     r15, [r13-6]
 * 0000000140B05C71: lea     r14, [r15+5]
 * 0000000140B05C75: mov     al, [r14]
 * 0000000140B05C78: cmp     byte ptr [r15], 4Ch ; 'L'
 * 0000000140B05C7C: jnz     loc_140B05E73
 * 0000000140B05C82: cmp     byte ptr [r15+1], 87h
 * 0000000140B05C87: jnz     loc_140B05E73
 * 0000000140B05C8D: cmp     [r15+2], r11b
 * 0000000140B05C91: jnz     loc_140B05E73
 * 0000000140B05C97: cmp     byte ptr [r15+3], 98h
 * 0000000140B05C9C: jnz     loc_140B05E73
 * 0000000140B05CA2: cmp     byte ptr [r15+4], 0C3h
 * 0000000140B05CA7: jnz     loc_140B05E73
 * 0000000140B05CAD: cmp     al, 90h
 * 0000000140B05CAF: jz      short loc_140B05CB9
 * 0000000140B05CB1: cmp     al, 0F1h
 * 0000000140B05CB3: jnz     loc_140B05E73
 * 0000000140B05CB9: mov     rcx, [rsi+4D8h]
 * 0000000140B05CC0: cli
 * 0000000140B05CC1: mov     eax, [rsi+990h]
 * 0000000140B05CC7: shr     eax, 0Ah
 * 0000000140B05CCA: and     eax, 1Fh
 * 0000000140B05CCD: lock bts [rcx], eax
 * 0000000140B05CD1: jnb     short loc_140B05CD8
 * 0000000140B05CD3: sti
 * 0000000140B05CD4: pause
 * 0000000140B05CD6: jmp     short loc_140B05CC0
 * 0000000140B05CD8: mov     rdx, [rsi+8E0h]
 * 0000000140B05CDF: mov     r8d, 26h ; '&'
 * 0000000140B05CE5: mov     ecx, 130h
 * 0000000140B05CEA: mov     rax, rdx
 * 0000000140B05CED: lea     r9d, [r8-25h]
 * 0000000140B05CF1: mov     [rax], r11
 * 0000000140B05CF4: add     ecx, 0FFFFFFF8h
 * 0000000140B05CF7: add     rax, 8
 * 0000000140B05CFB: sub     r8, r9
 * 0000000140B05CFE: jnz     short loc_140B05CF1
 * 0000000140B05D00: test    ecx, ecx
 * 0000000140B05D02: jz      short loc_140B05D15
 * 0000000140B05D04: mov     r8d, 0FFFFFFFFh
 * 0000000140B05D0A: mov     [rax], r11b
 * 0000000140B05D0D: add     rax, r9
 * 0000000140B05D10: add     ecx, r8d
 * 0000000140B05D13: jnz     short loc_140B05D0A
 * 0000000140B05D15: movups  xmm0, xmmword ptr [rsi+848h]
 * 0000000140B05D1C: mov     eax, 12Fh
 * 0000000140B05D21: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140B05D26: movups  xmm1, xmmword ptr [rsi+858h]
 * 0000000140B05D2D: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140B05D32: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140B05D39: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140B05D41: mov     word ptr [rbp+0A70h+var_820], ax
 * 0000000140B05D48: lea     rax, [rsi+88Ch]
 * 0000000140B05D4F: mov     [rbp+252h], rdx
 * 0000000140B05D56: mov     rcx, rax
 * 0000000140B05D59: mov     [rdx+10h], ax
 * 0000000140B05D5D: shr     rcx, 10h
 * 0000000140B05D61: mov     [rbp+0A70h+var_548], rax
 * 0000000140B05D68: shr     rax, 20h
 * 0000000140B05D6C: mov     [rdx+16h], cx
 * 0000000140B05D70: mov     [rdx+18h], eax
 * 0000000140B05D73: sidt    fword ptr [rbp+0A70h+var_700]
 * 0000000140B05D7A: lidt    fword ptr [rbp+0A70h+var_820]
 * 0000000140B05D81: mov     byte ptr [r14], 0F1h
 * 0000000140B05D85: mov     al, [r14]
 * 0000000140B05D88: cmp     al, 0F1h
 * 0000000140B05D8A: jnz     loc_140B05E2E
 * 0000000140B05D90: test    dword ptr [rsi+994h], 20000h
 * 0000000140B05D9A: jnz     short loc_140B05DDE
 * 0000000140B05D9C: mov     rdx, gs:20h
 * 0000000140B05DA5: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140B05DAF: mov     rax, [rsi+4B8h]
 * 0000000140B05DB6: add     rcx, rsi
 * 0000000140B05DB9: mov     [rax], rcx
 * 0000000140B05DBC: mov     rax, [rsi+4C0h]
 * 0000000140B05DC3: mov     [rax], rdx
 * 0000000140B05DC6: mov     rax, [rsi+4C8h]
 * 0000000140B05DCD: mov     [rax], r13
 * 0000000140B05DD0: mov     rax, [rsi+4D0h]
 * 0000000140B05DD7: mov     qword ptr [rax], 113h
 * 0000000140B05DDE: mov     rax, r14
 * 0000000140B05DE1: call    KeGuardDispatchICall
 * 0000000140B05DE6: xor     r11d, r11d
 * 0000000140B05DE9: test    dword ptr [rsi+994h], 20000h
 * 0000000140B05DF3: jnz     short loc_140B05E27
 * 0000000140B05DF5: mov     rax, [rsi+4B8h]
 * 0000000140B05DFC: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140B05E06: mov     [rax], rcx
 * 0000000140B05E09: mov     rax, [rsi+4C0h]
 * 0000000140B05E10: mov     [rax], r11
 * 0000000140B05E13: mov     rax, [rsi+4C8h]
 * 0000000140B05E1A: mov     [rax], r11
 * 0000000140B05E1D: mov     rax, [rsi+4D0h]
 * 0000000140B05E24: mov     [rax], r11
 * 0000000140B05E27: mov     al, [r14]
 * 0000000140B05E2A: cmp     al, 0F1h
 * 0000000140B05E2C: jz      short loc_140B05E33
 * 0000000140B05E2E: mov     r9d, r11d
 * 0000000140B05E31: jmp     short loc_140B05E46
 * 0000000140B05E33: mov     byte ptr [r14], 90h
 * 0000000140B05E37: mov     r9d, 1
 * 0000000140B05E3D: mov     al, [r14]
 * 0000000140B05E40: cmp     al, 90h
 * 0000000140B05E42: cmovnz  r9d, r11d
 * 0000000140B05E46: lidt    fword ptr [rbp+0A70h+var_700]
 * 0000000140B05E4D: mov     ecx, [rsi+990h]
 * 0000000140B05E53: mov     edx, 1
 * 0000000140B05E58: mov     r8, [rsi+4D8h]
 * 0000000140B05E5F: shr     ecx, 0Ah
 * 0000000140B05E62: and     ecx, 1Fh
 * 0000000140B05E65: shl     edx, cl
 * 0000000140B05E67: not     edx
 * 0000000140B05E69: lock and [r8], edx
 * 0000000140B05E6D: sti
 * 0000000140B05E6E: test    r9d, r9d
 * 0000000140B05E71: jnz     short loc_140B05ED2
 * 0000000140B05E73: cmp     [rsi+8F8h], r11d
 * 0000000140B05E7A: jnz     short loc_140B05ED2
 * 0000000140B05E7C: mov     rcx, [rsp+0B70h+var_B20]
 * 0000000140B05E81: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B05E8B: add     rax, rsi
 * 0000000140B05E8E: xor     edx, edx
 * 0000000140B05E90: mov     [rsi+900h], rax
 * 0000000140B05E97: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B05EA1: add     rax, rcx
 * 0000000140B05EA4: mov     [rsi+908h], rax
 * 0000000140B05EAB: movsxd  rax, dword ptr [rcx]
 * 0000000140B05EAE: mov     rcx, rsi
 * 0000000140B05EB1: mov     [rsi+910h], rax
 * 0000000140B05EB8: mov     eax, 1
 * 0000000140B05EBD: mov     [rsi+918h], r15
 * 0000000140B05EC4: mov     [rsi+8F8h], eax
 * 0000000140B05ECA: call    $$ba
 * 0000000140B05ECF: xor     r11d, r11d
 * 0000000140B05ED2: mov     r14, [rbp+0A70h+var_AB0]
 * 0000000140B05ED6: mov     r15, [rbp+0A70h+var_AE8]
 * 0000000140B05EDA: mov     ecx, [r15]
 * 0000000140B05EDD: mov     eax, ecx
 * 0000000140B05EDF: btr     eax, 1Fh
 * 0000000140B05EE3: cmp     ebx, eax
 * 0000000140B05EE5: jz      loc_140B06047
 * 0000000140B05EEB: mov     edx, r12d
 * 0000000140B05EEE: test    r12d, r12d
 * 0000000140B05EF1: jz      loc_140B05F96
 * 0000000140B05EF7: mov     eax, [rsi+994h]
 * 0000000140B05EFD: mov     r8d, 40h ; '@'
 * 0000000140B05F03: test    r8b, al
 * 0000000140B05F06: jz      loc_140B05F96
 * 0000000140B05F0C: mov     r15, cr8
 * 0000000140B05F10: lea     eax, [r8-3Eh]
 * 0000000140B05F14: mov     cr8, rax
 * 0000000140B05F18: mov     rbx, r13
 * 0000000140B05F1B: dec     r13
 * 0000000140B05F1E: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140B05F25: add     r13, rdx
 * 0000000140B05F28: or      r13, 0FFFh
 * 0000000140B05F2F: lea     r12, [rbx-1]
 * 0000000140B05F33: movzx   r14d, r15b
 * 0000000140B05F37: mov     rax, [rsi+468h]
 * 0000000140B05F3E: xor     edx, edx
 * 0000000140B05F40: mov     rcx, rbx
 * 0000000140B05F43: call    KeGuardDispatchICall
 * 0000000140B05F48: cmp     eax, 0C000022Dh
 * 0000000140B05F4D: jnz     short loc_140B05F76
 * 0000000140B05F4F: mov     eax, 1
 * 0000000140B05F54: cmp     r15b, al
 * 0000000140B05F57: ja      loc_140B06024
 * 0000000140B05F5D: movzx   r14d, r15b
 * 0000000140B05F61: mov     cr8, r14
 * 0000000140B05F65: mov     al, [rbx]
 * 0000000140B05F67: mov     rax, cr8
 * 0000000140B05F6B: mov     eax, 2
 * 0000000140B05F70: mov     cr8, rax
 * 0000000140B05F74: jmp     short loc_140B05F37
 * 0000000140B05F76: xor     r11d, r11d
 * 0000000140B05F79: test    eax, eax
 * 0000000140B05F7B: jns     loc_140B06027
 * 0000000140B05F81: mov     cr8, r14
 * 0000000140B05F85: mov     r15, [rbp+0A70h+var_AE8]
 * 0000000140B05F89: mov     rbx, [rsp+0B70h+var_B08]
 * 0000000140B05F8E: mov     r13, [rsp+0B70h+var_AF8]
 * 0000000140B05F93: mov     ecx, [r15]
 * 0000000140B05F96: mov     eax, ecx
 * 0000000140B05F98: btr     eax, 1Fh
 * 0000000140B05F9C: cmp     [rsi+8F8h], r11d
 * 0000000140B05FA3: jnz     loc_140B06043
 * 0000000140B05FA9: mov     ecx, ebx
 * 0000000140B05FAB: mov     r12d, 1
 * 0000000140B05FB1: mov     rbx, [rsp+0B70h+var_B20]
 * 0000000140B05FB6: xor     rcx, rax
 * 0000000140B05FB9: mov     rax, [rsi+588h]
 * 0000000140B05FC0: mov     [rax+18h], rcx
 * 0000000140B05FC4: cmp     [rsi+8F8h], r11d
 * 0000000140B05FCB: jnz     loc_140B060B1
 * 0000000140B05FD1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B05FDB: xor     edx, edx
 * 0000000140B05FDD: add     rax, rsi
 * 0000000140B05FE0: mov     rcx, rsi
 * 0000000140B05FE3: mov     [rsi+900h], rax
 * 0000000140B05FEA: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B05FF4: add     rax, rbx
 * 0000000140B05FF7: mov     [rsi+908h], rax
 * 0000000140B05FFE: movsxd  rax, dword ptr [rbx]
 * 0000000140B06001: mov     [rsi+910h], rax
 * 0000000140B06008: mov     [rsi+918h], r13
 * 0000000140B0600F: mov     [rsi+8F8h], r12d
 * 0000000140B06016: call    $$ba
 * 0000000140B0601B: mov     r14, [rbp+0A70h+var_AB0]
 * 0000000140B0601F: xor     r11d, r11d
 * 0000000140B06022: jmp     short loc_140B06052
 * 0000000140B06024: xor     r11d, r11d
 * 0000000140B06027: mov     eax, 1000h
 * 0000000140B0602C: add     rbx, rax
 * 0000000140B0602F: add     r12, rax
 * 0000000140B06032: cmp     r12, r13
 * 0000000140B06035: jnz     loc_140B05F33
 * 0000000140B0603B: mov     cr8, r14
 * 0000000140B0603F: mov     r15, [rbp+0A70h+var_AE8]
 * 0000000140B06043: mov     r14, [rbp+0A70h+var_AB0]
 * 0000000140B06047: mov     rbx, [rsp+0B70h+var_B20]
 * 0000000140B0604C: mov     r12d, 1
 * 0000000140B06052: add     r15, 4
 * 0000000140B06056: add     r14, 0Ch
 * 0000000140B0605A: mov     [rbp+0A70h+var_AE8], r15
 * 0000000140B0605E: mov     [rbp+0A70h+var_AB0], r14
 * 0000000140B06062: cmp     r14, rdi
 * 0000000140B06065: jnb     short loc_140B06080
 * 0000000140B06067: mov     rax, [rbp+0A70h+var_AB8]
 * 0000000140B0606B: mov     r10d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B06072: mov     eax, [rax]
 * 0000000140B06074: cmp     [rsi+828h], eax
 * 0000000140B0607A: jl      loc_140B054F4
 * 0000000140B06080: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B06087: cmp     r14, [rsp+0B70h+var_B18]
 * 0000000140B0608C: jz      short loc_140B060B7
 * 0000000140B0608E: sub     r14, [rbp+0A70h+var_AF0]
 * 0000000140B06092: mov     rax, 2AAAAAAAAAAAAAABh
 * 0000000140B0609C: imul    r14
 * 0000000140B0609F: sar     rdx, 1
 * 0000000140B060A2: mov     rax, rdx
 * 0000000140B060A5: shr     rax, 3Fh
 * 0000000140B060A9: add     rdx, rax
 * 0000000140B060AC: jmp     loc_140B00497
 * 0000000140B060B1: mov     r14, [rbp+0A70h+var_AB0]
 * 0000000140B060B5: jmp     short loc_140B06052
 * 0000000140B060B7: mov     rcx, [rsi+538h]
 * 0000000140B060BE: mov     r15, cr8
 * 0000000140B060C2: mov     eax, 0Fh
 * 0000000140B060C7: mov     cr8, rax
 * 0000000140B060CB: mov     rax, [rsi+150h]
 * 0000000140B060D2: call    KeGuardDispatchICall
 * 0000000140B060D7: mov     rax, [rsi+618h]
 * 0000000140B060DE: mov     r14, [rsp+0B70h+var_B20]
 * 0000000140B060E3: mov     rcx, [rax]
 * 0000000140B060E6: mov     eax, [rcx]
 * 0000000140B060E8: lea     rbx, [rcx+10h]
 * 0000000140B060EC: mov     r12b, [rcx+0Ch]
 * 0000000140B060F0: lea     rcx, [rax+rax*2]
 * 0000000140B060F4: lea     r13, [rbx+rcx*8]
 * 0000000140B060F8: mov     r8d, 18h
 * 0000000140B060FE: lea     r9, [r14+18h]
 * 0000000140B06102: mov     r10, rbx
 * 0000000140B06105: mov     rcx, [r10]
 * 0000000140B06108: add     r10, 8
 * 0000000140B0610C: mov     rax, [r9]
 * 0000000140B0610F: add     r9, 8
 * 0000000140B06113: cmp     rcx, rax
 * 0000000140B06116: jnz     short loc_140B0614C
 * 0000000140B06118: add     r8d, 0FFFFFFF8h
 * 0000000140B0611C: cmp     r8d, 8
 * 0000000140B06120: jnb     short loc_140B06105
 * 0000000140B06122: test    r8d, r8d
 * 0000000140B06125: jz      short loc_140B06155
 * 0000000140B06127: mov     r11d, 1
 * 0000000140B0612D: movzx   edx, byte ptr [r10]
 * 0000000140B06131: add     r10, r11
 * 0000000140B06134: movzx   eax, byte ptr [r9]
 * 0000000140B06138: add     r9, r11
 * 0000000140B0613B: cmp     rdx, rax
 * 0000000140B0613E: jnz     short loc_140B0614C
 * 0000000140B06140: mov     eax, 0FFFFFFFFh
 * 0000000140B06145: add     r8d, eax
 * 0000000140B06148: jz      short loc_140B06155
 * 0000000140B0614A: jmp     short loc_140B0612D
 * 0000000140B0614C: add     rbx, 18h
 * 0000000140B06150: cmp     rbx, r13
 * 0000000140B06153: jb      short loc_140B060F8
 * 0000000140B06155: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B0615A: mov     rcx, [rsi+538h]
 * 0000000140B06161: mov     rax, [rsi+190h]
 * 0000000140B06168: call    KeGuardDispatchICall
 * 0000000140B0616D: movzx   eax, r15b
 * 0000000140B06171: mov     cr8, rax
 * 0000000140B06175: xor     r15d, r15d
 * 0000000140B06178: test    r12b, r12b
 * 0000000140B0617B: lea     r12d, [r15+1]
 * 0000000140B0617F: jz      short loc_140B061ED
 * 0000000140B06181: mov     eax, [rsi+994h]
 * 0000000140B06187: lea     ecx, [r15+10h]
 * 0000000140B0618B: test    cl, al
 * 0000000140B0618D: jz      short loc_140B061E7
 * 0000000140B0618F: cmp     [rsi+8F8h], r15d
 * 0000000140B06196: jnz     short loc_140B061E7
 * 0000000140B06198: mov     rcx, [rsp+0B70h+var_B20]
 * 0000000140B0619D: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B061A7: add     rax, rsi
 * 0000000140B061AA: xor     edx, edx
 * 0000000140B061AC: mov     [rsi+900h], rax
 * 0000000140B061B3: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B061BD: add     rax, rcx
 * 0000000140B061C0: mov     [rsi+908h], rax
 * 0000000140B061C7: movsxd  rax, dword ptr [rcx]
 * 0000000140B061CA: mov     rcx, rsi
 * 0000000140B061CD: mov     [rsi+910h], rax
 * 0000000140B061D4: mov     [rsi+918h], r12
 * 0000000140B061DB: mov     [rsi+8F8h], r12d
 * 0000000140B061E2: call    $$ba
 * 0000000140B061E7: cmp     [r14+18h], r12
 * 0000000140B061EB: jz      short loc_140B0624A
 * 0000000140B061ED: cmp     rbx, r13
 * 0000000140B061F0: jnz     short loc_140B0624A
 * 0000000140B061F2: cmp     [rsi+8F8h], r15d
 * 0000000140B061F9: jnz     short loc_140B0624A
 * 0000000140B061FB: mov     rcx, [rsp+0B70h+var_B20]
 * 0000000140B06200: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0620A: add     rax, rsi
 * 0000000140B0620D: xor     edx, edx
 * 0000000140B0620F: mov     [rsi+900h], rax
 * 0000000140B06216: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B06220: add     rax, rcx
 * 0000000140B06223: mov     [rsi+908h], rax
 * 0000000140B0622A: movsxd  rax, dword ptr [rcx]
 * 0000000140B0622D: mov     rcx, rsi
 * 0000000140B06230: mov     [rsi+910h], rax
 * 0000000140B06237: mov     [rsi+918h], rbx
 * 0000000140B0623E: mov     [rsi+8F8h], r12d
 * 0000000140B06245: call    $$ba
 * 0000000140B0624A: mov     [rsi+824h], r15d
 * 0000000140B06251: jmp     loc_140AFB148
 * 0000000140B06256: mov     r12d, 1
 * 0000000140B0625C: xor     eax, eax
 * 0000000140B0625E: mov     [rsi+820h], ecx
 * 0000000140B06264: cmp     [rbp+0A70h+var_A68], eax
 * 0000000140B06267: jz      short loc_140B062D5
 * 0000000140B06269: mov     rcx, gs:20h
 * 0000000140B06272: mov     rax, [rsi+650h]
 * 0000000140B06279: mov     rdx, [rax+rcx]
 * 0000000140B0627D: lea     rcx, [rbp+0A70h+var_248]
 * 0000000140B06284: mov     rax, [rsi+690h]
 * 0000000140B0628B: add     rdx, [rsi+6B0h]
 * 0000000140B06292: mov     rbx, [rdx+rax]
 * 0000000140B06296: mov     rax, [rsi+198h]
 * 0000000140B0629D: call    KeGuardDispatchICall
 * 0000000140B062A2: mov     rax, [rsi+440h]
 * 0000000140B062A9: lea     rcx, [rbp+0A70h+var_680]
 * 0000000140B062B0: call    KeGuardDispatchICall
 * 0000000140B062B5: mov     rax, [rsi+3A8h]
 * 0000000140B062BC: mov     rcx, rbx
 * 0000000140B062BF: call    KeGuardDispatchICall
 * 0000000140B062C4: mov     rax, [rsi+3B8h]
 * 0000000140B062CB: mov     rcx, rbx
 * 0000000140B062CE: call    KeGuardDispatchICall
 * 0000000140B062D3: xor     eax, eax
 * 0000000140B062D5: cmp     [rbp+0A70h+var_AE0], eax
 * 0000000140B062D8: jz      loc_140B06383
 * 0000000140B062DE: test    [rsi+990h], r14d
 * 0000000140B062E5: jnz     short loc_140B062F9
 * 0000000140B062E7: xor     r14d, r14d
 * 0000000140B062EA: cmp     [rsi+8F8h], r14d
 * 0000000140B062F1: jnz     loc_140B06383
 * 0000000140B062F7: jmp     short loc_140B062FC
 * 0000000140B062F9: xor     r14d, r14d
 * 0000000140B062FC: mov     rbx, [rsi+980h]
 * 0000000140B06303: lea     rdx, [rbp+0A70h+var_680]
 * 0000000140B0630A: mov     [rsi+980h], r14
 * 0000000140B06311: mov     rcx, rbx
 * 0000000140B06314: mov     rax, [rsi+298h]
 * 0000000140B0631B: call    KeGuardDispatchICall
 * 0000000140B06320: mov     eax, [rsi+990h]
 * 0000000140B06326: test    r12b, al
 * 0000000140B06329: jz      short loc_140B0636F
 * 0000000140B0632B: and     eax, 0FFFFFFFEh
 * 0000000140B0632E: mov     rcx, rbx
 * 0000000140B06331: mov     [rsi+990h], eax
 * 0000000140B06337: mov     rax, [rsi+280h]
 * 0000000140B0633E: call    KeGuardDispatchICall
 * 0000000140B06343: mov     rbx, rax
 * 0000000140B06346: test    rax, rax
 * 0000000140B06349: jz      short loc_140B06362
 * 0000000140B0634B: mov     rax, [rsi+2A0h]
 * 0000000140B06352: mov     rcx, rbx
 * 0000000140B06355: call    KeGuardDispatchICall
 * 0000000140B0635A: mov     [rsi+970h], eax
 * 0000000140B06360: jmp     short loc_140B06374
 * 0000000140B06362: mov     eax, 0FFFFFFFFh
 * 0000000140B06367: mov     [rsi+970h], eax
 * 0000000140B0636D: jmp     short loc_140B06383
 * 0000000140B0636F: test    rbx, rbx
 * 0000000140B06372: jz      short loc_140B06383
 * 0000000140B06374: mov     rax, [rsi+288h]
 * 0000000140B0637B: mov     rcx, rbx
 * 0000000140B0637E: call    KeGuardDispatchICall
 * 0000000140B06383: mov     eax, [rsi+990h]
 * 0000000140B06389: mov     ecx, 800008h
 * 0000000140B0638E: and     eax, ecx
 * 0000000140B06390: cmp     eax, ecx
 * 0000000140B06392: jnz     loc_140B06784
 * 0000000140B06398: mov     eax, [rsi+994h]
 * 0000000140B0639E: mov     r10, [rsi+0A70h]
 * 0000000140B063A5: and     eax, r12d
 * 0000000140B063A8: mov     r12, [rsi+9F8h]
 * 0000000140B063AF: mov     r14d, [rsi+7E4h]
 * 0000000140B063B6: mov     r13d, [rsi+808h]
 * 0000000140B063BD: mov     [rsp+0B70h+var_AF8], r10
 * 0000000140B063C2: jz      short loc_140B063CB
 * 0000000140B063C4: mov     r12, [rsi+5D0h]
 * 0000000140B063CB: mov     rax, [rsi+2C8h]
 * 0000000140B063D2: mov     r11, [rsi+160h]
 * 0000000140B063D9: mov     [rbp+0A70h+var_AA8], rax
 * 0000000140B063DD: mov     rax, [rsi+340h]
 * 0000000140B063E4: mov     [rbp+0A70h+var_A80], rax
 * 0000000140B063E8: mov     [rbp+0A70h+var_AC0], r11
 * 0000000140B063EC: rdtsc
 * 0000000140B063EE: shl     rdx, 20h
 * 0000000140B063F2: mov     rbx, 7010008004002001h
 * 0000000140B063FC: or      rax, rdx
 * 0000000140B063FF: mov     r9, rdi
 * 0000000140B06402: mov     rcx, rax
 * 0000000140B06405: ror     rax, 3
 * 0000000140B06409: xor     rcx, rax
 * 0000000140B0640C: mov     rax, rbx
 * 0000000140B0640F: mul     rcx
 * 0000000140B06412: mov     rcx, rdx
 * 0000000140B06415: mov     [rbp+0A70h+var_538], rdx
 * 0000000140B0641C: xor     rcx, rax
 * 0000000140B0641F: mov     rax, 0ABCC77118461CEFDh
 * 0000000140B06429: mul     rcx
 * 0000000140B0642C: shr     rdx, 1Ah
 * 0000000140B06430: imul    rax, rdx, 5F5E100h
 * 0000000140B06437: sub     rcx, rax
 * 0000000140B0643A: sub     r9, rcx
 * 0000000140B0643D: mov     [rbp+0A70h+var_990], r9
 * 0000000140B06444: mov     r8d, [rsi+990h]
 * 0000000140B0644B: bt      r8d, 1Ah
 * 0000000140B06450: jnb     loc_140B064FA
 * 0000000140B06456: rdtsc
 * 0000000140B06458: shl     rdx, 20h
 * 0000000140B0645C: mov     r15, 0CCCCCCCCCCCCCCCDh
 * 0000000140B06466: or      rax, rdx
 * 0000000140B06469: mov     rcx, rax
 * 0000000140B0646C: ror     rax, 3
 * 0000000140B06470: xor     rcx, rax
 * 0000000140B06473: mov     rax, rbx
 * 0000000140B06476: mul     rcx
 * 0000000140B06479: mov     rcx, rdx
 * 0000000140B0647C: mov     [rbp+0A70h+var_530], rdx
 * 0000000140B06483: xor     rcx, rax
 * 0000000140B06486: mov     rax, r15
 * 0000000140B06489: mul     rcx
 * 0000000140B0648C: shr     rdx, 3
 * 0000000140B06490: lea     rax, [rdx+rdx*4]
 * 0000000140B06494: add     rax, rax
 * 0000000140B06497: sub     rcx, rax
 * 0000000140B0649A: mov     eax, 2
 * 0000000140B0649F: cmp     rcx, rax
 * 0000000140B064A2: jnb     short loc_140B064FA
 * 0000000140B064A4: rdtsc
 * 0000000140B064A6: shl     rdx, 20h
 * 0000000140B064AA: or      rax, rdx
 * 0000000140B064AD: mov     rcx, rax
 * 0000000140B064B0: ror     rax, 3
 * 0000000140B064B4: xor     rcx, rax
 * 0000000140B064B7: mov     rax, rbx
 * 0000000140B064BA: mul     rcx
 * 0000000140B064BD: mov     rcx, rdx
 * 0000000140B064C0: mov     [rbp+0A70h+var_528], rdx
 * 0000000140B064C7: xor     rcx, rax
 * 0000000140B064CA: mov     rax, r15
 * 0000000140B064CD: mul     rcx
 * 0000000140B064D0: shr     rdx, 3
 * 0000000140B064D4: lea     rax, [rdx+rdx*4]
 * 0000000140B064D8: add     rax, rax
 * 0000000140B064DB: sub     rcx, rax
 * 0000000140B064DE: mov     eax, 1
 * 0000000140B064E3: add     rcx, rax
 * 0000000140B064E6: imul    rcx, r9
 * 0000000140B064EA: mov     [rbp+0A70h+var_990], rcx
 * 0000000140B064F1: mov     r8d, [rsi+990h]
 * 0000000140B064F8: jmp     short loc_140B064FF
 * 0000000140B064FA: mov     eax, 1
 * 0000000140B064FF: xor     r9d, r9d
 * 0000000140B06502: mov     ebx, r9d
 * 0000000140B06505: mov     r15d, r9d
 * 0000000140B06508: lea     ecx, [r9+2]
 * 0000000140B0650C: test    cl, r8b
 * 0000000140B0650F: cmovz   r14d, r13d
 * 0000000140B06513: test    r8b, r8b
 * 0000000140B06516: js      short loc_140B06524
 * 0000000140B06518: mov     dword ptr [rbp+0A70h+arg_8], r9d
 * 0000000140B0651F: jmp     loc_140B065FC
 * 0000000140B06524: mov     dword ptr [rbp+0A70h+arg_8], eax
 * 0000000140B0652A: rdtsc
 * 0000000140B0652C: shl     rdx, 20h
 * 0000000140B06530: or      rax, rdx
 * 0000000140B06533: mov     rcx, rax
 * 0000000140B06536: ror     rax, 3
 * 0000000140B0653A: xor     rcx, rax
 * 0000000140B0653D: mov     rax, 7010008004002001h
 * 0000000140B06547: mul     rcx
 * 0000000140B0654A: mov     ecx, 154h
 * 0000000140B0654F: mov     rbx, rdx
 * 0000000140B06552: mov     [rbp+0A70h+var_520], rdx
 * 0000000140B06559: xor     rbx, rax
 * 0000000140B0655C: mov     edx, 1
 * 0000000140B06561: mov     r15, rbx
 * 0000000140B06564: lea     rax, [rsi+0A98h]
 * 0000000140B0656B: xor     r15, rsi
 * 0000000140B0656E: mov     r10, rbx
 * 0000000140B06571: xor     [rax], r10
 * 0000000140B06574: lea     rax, [rax-8]
 * 0000000140B06578: ror     r10, cl
 * 0000000140B0657B: sub     ecx, edx
 * 0000000140B0657D: jnz     short loc_140B06571
 * 0000000140B0657F: lea     r8, [r13-0AA0h]
 * 0000000140B06586: mov     r11, r13
 * 0000000140B06589: shr     r8, 3
 * 0000000140B0658D: test    r8d, r8d
 * 0000000140B06590: jz      short loc_140B065C7
 * 0000000140B06592: add     rsi, 0A98h
 * 0000000140B06599: movsxd  r9, r8d
 * 0000000140B0659C: lea     r9, [rsi+r9*8]
 * 0000000140B065A0: mov     rsi, rdx
 * 0000000140B065A3: mov     rdx, [r9]
 * 0000000140B065A6: lea     rax, [r15+r15]
 * 0000000140B065AA: mov     ecx, r8d
 * 0000000140B065AD: lea     r9, [r9-8]
 * 0000000140B065B1: ror     rdx, cl
 * 0000000140B065B4: mov     r15, rdx
 * 0000000140B065B7: xor     r15, rax
 * 0000000140B065BA: sub     r8d, esi
 * 0000000140B065BD: jnz     short loc_140B065A3
 * 0000000140B065BF: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B065C4: mov     r11, r13
 * 0000000140B065C7: mov     ecx, r14d
 * 0000000140B065CA: lea     rdx, [rsi+r11]
 * 0000000140B065CE: sub     ecx, r13d
 * 0000000140B065D1: shr     ecx, 3
 * 0000000140B065D4: test    ecx, ecx
 * 0000000140B065D6: jz      short loc_140B065F3
 * 0000000140B065D8: lea     rdx, [rdx+rcx*8]
 * 0000000140B065DC: mov     eax, 1
 * 0000000140B065E1: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140B065E5: xor     [rdx], r10
 * 0000000140B065E8: lea     rdx, [rdx-8]
 * 0000000140B065EC: ror     r10, cl
 * 0000000140B065EF: sub     ecx, eax
 * 0000000140B065F1: jnz     short loc_140B065E5
 * 0000000140B065F3: mov     r10, [rsp+0B70h+var_AF8]
 * 0000000140B065F8: mov     r11, [rbp+0A70h+var_AC0]
 * 0000000140B065FC: test    r10, r10
 * 0000000140B065FF: jz      short loc_140B06621
 * 0000000140B06601: mov     rax, [rbp+0A70h+var_A80]
 * 0000000140B06605: lea     r8, [rbp+0A70h+var_990]
 * 0000000140B0660C: mov     r9, r11
 * 0000000140B0660F: mov     [rsp+0B70h+BugCheckParameter4], r10
 * 0000000140B06614: mov     edx, r14d
 * 0000000140B06617: mov     rcx, rsi
 * 0000000140B0661A: call    KeGuardDispatchICall
 * 0000000140B0661F: jmp     short loc_140B06659
 * 0000000140B06621: xor     edx, edx
 * 0000000140B06623: test    r12, r12
 * 0000000140B06626: jnz     short loc_140B0663B
 * 0000000140B06628: lea     r8, [rbp+0A70h+var_990]
 * 0000000140B0662F: xor     ecx, ecx
 * 0000000140B06631: mov     rax, r11
 * 0000000140B06634: call    KeGuardDispatchICall
 * 0000000140B06639: jmp     short loc_140B06659
 * 0000000140B0663B: lea     rax, [rbp+0A70h+var_990]
 * 0000000140B06642: xor     r9d, r9d
 * 0000000140B06645: mov     [rsp+0B70h+BugCheckParameter4], rax
 * 0000000140B0664A: xor     r8d, r8d
 * 0000000140B0664D: mov     rax, [rbp+0A70h+var_AA8]
 * 0000000140B06651: mov     rcx, r12
 * 0000000140B06654: call    KeGuardDispatchICall
 * 0000000140B06659: xor     r11d, r11d
 * 0000000140B0665C: cmp     dword ptr [rbp+0A70h+arg_8], r11d
 * 0000000140B06663: jz      loc_140B06787
 * 0000000140B06669: mov     r9, rbx
 * 0000000140B0666C: lea     rax, [rsi+0A98h]
 * 0000000140B06673: xor     r9, rsi
 * 0000000140B06676: lea     r10d, [r11+1]
 * 0000000140B0667A: mov     ecx, 154h
 * 0000000140B0667F: xor     [rax], rbx
 * 0000000140B06682: lea     rax, [rax-8]
 * 0000000140B06686: ror     rbx, cl
 * 0000000140B06689: sub     ecx, r10d
 * 0000000140B0668C: jnz     short loc_140B0667F
 * 0000000140B0668E: lea     r8, [r13-0AA0h]
 * 0000000140B06695: mov     r11, r13
 * 0000000140B06698: shr     r8, 3
 * 0000000140B0669C: test    r8d, r8d
 * 0000000140B0669F: jz      short loc_140B066D6
 * 0000000140B066A1: movsxd  r10, r8d
 * 0000000140B066A4: lea     r11d, [rcx+1]
 * 0000000140B066A8: add     r10, 153h
 * 0000000140B066AF: lea     r10, [rsi+r10*8]
 * 0000000140B066B3: mov     rdx, [r10]
 * 0000000140B066B6: lea     rax, [r9+r9]
 * 0000000140B066BA: mov     ecx, r8d
 * 0000000140B066BD: lea     r10, [r10-8]
 * 0000000140B066C1: ror     rdx, cl
 * 0000000140B066C4: mov     r9, rdx
 * 0000000140B066C7: xor     r9, rax
 * 0000000140B066CA: sub     r8d, r11d
 * 0000000140B066CD: jnz     short loc_140B066B3
 * 0000000140B066CF: mov     r11, r13
 * 0000000140B066D2: lea     r10d, [r8+1]
 * 0000000140B066D6: sub     r14d, r13d
 * 0000000140B066D9: lea     rcx, [rsi+r11]
 * 0000000140B066DD: shr     r14d, 3
 * 0000000140B066E1: xor     r11d, r11d
 * 0000000140B066E4: test    r14d, r14d
 * 0000000140B066E7: jz      short loc_140B06705
 * 0000000140B066E9: mov     edx, r14d
 * 0000000140B066EC: dec     rdx
 * 0000000140B066EF: lea     rdx, [rcx+rdx*8]
 * 0000000140B066F3: xor     [rdx], rbx
 * 0000000140B066F6: mov     ecx, r14d
 * 0000000140B066F9: ror     rbx, cl
 * 0000000140B066FC: lea     rdx, [rdx-8]
 * 0000000140B06700: sub     r14d, r10d
 * 0000000140B06703: jnz     short loc_140B066F3
 * 0000000140B06705: cmp     r9, r15
 * 0000000140B06708: jz      short loc_140B06787
 * 0000000140B0670A: mov     rax, [rsi+588h]
 * 0000000140B06711: mov     r12, 0A3A03F5891C8B4E8h
 * 0000000140B0671B: mov     ecx, [rsi+7E4h]
 * 0000000140B06721: mov     [rax], rsi
 * 0000000140B06724: mov     [rax+10h], ecx
 * 0000000140B06727: cmp     [rsi+8F8h], r11d
 * 0000000140B0672E: jnz     short loc_140B06791
 * 0000000140B06730: mov     rax, [rsi+588h]
 * 0000000140B06737: mov     rcx, r9
 * 0000000140B0673A: xor     rcx, r15
 * 0000000140B0673D: mov     [rax+18h], rcx
 * 0000000140B06741: cmp     [rsi+8F8h], r11d
 * 0000000140B06748: jnz     short loc_140B06791
 * 0000000140B0674A: lea     rax, [rsi+r12]
 * 0000000140B0674E: xor     edx, edx
 * 0000000140B06750: mov     [rsi+900h], rax
 * 0000000140B06757: mov     rcx, rsi
 * 0000000140B0675A: mov     [rsi+908h], r11
 * 0000000140B06761: mov     qword ptr [rsi+910h], 10Eh
 * 0000000140B0676C: mov     [rsi+918h], r9
 * 0000000140B06773: mov     [rsi+8F8h], r10d
 * 0000000140B0677A: call    $$ba
 * 0000000140B0677F: xor     r11d, r11d
 * 0000000140B06782: jmp     short loc_140B06791
 * 0000000140B06784: xor     r11d, r11d
 * 0000000140B06787: mov     r12, 0A3A03F5891C8B4E8h
 * 0000000140B06791: mov     eax, [rsi+958h]
 * 0000000140B06797: cmp     eax, 0Bh
 * 0000000140B0679A: jz      loc_140B0AE64
 * 0000000140B067A0: mov     r13d, 1
 * 0000000140B067A6: cmp     eax, r13d
 * 0000000140B067A9: jz      loc_140B0AE64
 * 0000000140B067AF: cmp     [rsi+8F8h], r11d
 * 0000000140B067B6: jnz     loc_140B0AE64
 * 0000000140B067BC: mov     rax, [rsi+960h]
 * 0000000140B067C3: mov     rcx, [rax]
 * 0000000140B067C6: cmp     rcx, [rsi+968h]
 * 0000000140B067CD: jz      loc_140B0AC47
 * 0000000140B067D3: mov     ecx, [rsi+970h]
 * 0000000140B067D9: mov     eax, 0FFFFFFFFh
 * 0000000140B067DE: mov     rbx, rsi
 * 0000000140B067E1: mov     [rbp+0A70h+var_A80], rbx
 * 0000000140B067E5: cmp     ecx, eax
 * 0000000140B067E7: jz      short loc_140B06802
 * 0000000140B067E9: mov     rax, [rsi+278h]
 * 0000000140B067F0: call    KeGuardDispatchICall
 * 0000000140B067F5: xor     r15d, r15d
 * 0000000140B067F8: mov     r14, rax
 * 0000000140B067FB: test    rax, rax
 * 0000000140B067FE: jnz     short loc_140B0681F
 * 0000000140B06800: jmp     short loc_140B06805
 * 0000000140B06802: xor     r15d, r15d
 * 0000000140B06805: mov     rax, [rsi+280h]
 * 0000000140B0680C: xor     ecx, ecx
 * 0000000140B0680E: call    KeGuardDispatchICall
 * 0000000140B06813: mov     r14, rax
 * 0000000140B06816: test    rax, rax
 * 0000000140B06819: jz      loc_140B0AE64
 * 0000000140B0681F: mov     rax, [rsi+290h]
 * 0000000140B06826: lea     rdx, [rbp+0A70h+var_680]
 * 0000000140B0682D: mov     rcx, r14
 * 0000000140B06830: call    KeGuardDispatchICall
 * 0000000140B06835: test    eax, eax
 * 0000000140B06837: jns     short loc_140B06841
 * 0000000140B06839: mov     rcx, r14
 * 0000000140B0683C: jmp     loc_140B0AE58
 * 0000000140B06841: mov     [rsi+980h], r14
 * 0000000140B06848: mov     rax, [rsi+2B8h]
 * 0000000140B0684F: call    KeGuardDispatchICall
 * 0000000140B06854: mov     r14, rax
 * 0000000140B06857: mov     rax, [rsi+2D8h]
 * 0000000140B0685E: mov     rcx, r14
 * 0000000140B06861: call    KeGuardDispatchICall
 * 0000000140B06866: mov     rdx, rax
 * 0000000140B06869: test    rax, rax
 * 0000000140B0686C: jnz     short loc_140B06873
 * 0000000140B0686E: lea     ecx, [rax+4]
 * 0000000140B06871: jmp     short loc_140B06885
 * 0000000140B06873: mov     rax, [rsi+2E8h]
 * 0000000140B0687A: mov     rcx, r14
 * 0000000140B0687D: call    KeGuardDispatchICall
 * 0000000140B06882: mov     ecx, r15d
 * 0000000140B06885: mov     eax, [rsi+994h]
 * 0000000140B0688B: and     eax, 0FFFFFFFBh
 * 0000000140B0688E: or      eax, ecx
 * 0000000140B06890: mov     [rsi+994h], eax
 * 0000000140B06896: add     dword ptr [rsi+828h], 10000h
 * 0000000140B068A0: mov     rax, [rsi+2A0h]
 * 0000000140B068A7: mov     rcx, [rsi+980h]
 * 0000000140B068AE: call    KeGuardDispatchICall
 * 0000000140B068B3: xor     r11d, r11d
 * 0000000140B068B6: test    eax, eax
 * 0000000140B068B8: jnz     loc_140B083FB
 * 0000000140B068BE: mov     rax, [rsi+570h]
 * 0000000140B068C5: lea     ecx, [r11+20h]
 * 0000000140B068C9: mov     rdx, [rsi+968h]
 * 0000000140B068D0: lea     rbx, [rbp+0A70h+var_7B0]
 * 0000000140B068D7: add     rax, rcx
 * 0000000140B068DA: mov     [rbp+0A70h+var_AA8], rdx
 * 0000000140B068DE: mov     [rbp+0A70h+var_7B0], rax
 * 0000000140B068E5: mov     r14d, r11d
 * 0000000140B068E8: mov     rax, [rsi+568h]
 * 0000000140B068EF: add     rax, rcx
 * 0000000140B068F2: mov     [rsp+0B70h+var_B18], rbx
 * 0000000140B068F7: mov     [rbp+0A70h+var_7A8], rax
 * 0000000140B068FE: mov     rax, [rsi+960h]
 * 0000000140B06905: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B0690C: mov     rsi, rax
 * 0000000140B0690F: mov     [rsp+0B70h+var_B08], 2
 * 0000000140B06918: mov     r13, [rbx]
 * 0000000140B0691B: xor     r14, rsi
 * 0000000140B0691E: mov     r9d, r14d
 * 0000000140B06921: mov     [rsp+0B70h+var_AF8], r13
 * 0000000140B06926: and     r9d, 3Fh
 * 0000000140B0692A: mov     rdi, [r13+0]
 * 0000000140B0692E: mov     r15d, [r13+10h]
 * 0000000140B06932: mov     r10, rdi
 * 0000000140B06935: mov     [rbp+0A70h+var_AC0], rdi
 * 0000000140B06939: mov     rax, rdi
 * 0000000140B0693C: lea     r11d, ds:0[r15*4]
 * 0000000140B06944: mov     ecx, r11d
 * 0000000140B06947: add     rcx, rdi
 * 0000000140B0694A: cmp     rdi, rcx
 * 0000000140B0694D: jnb     short loc_140B06960
 * 0000000140B0694F: mov     r8d, 40h ; '@'
 * 0000000140B06955: prefetchnta byte ptr [rax]
 * 0000000140B06958: add     rax, r8
 * 0000000140B0695B: cmp     rax, rcx
 * 0000000140B0695E: jb      short loc_140B06955
 * 0000000140B06960: mov     r12d, r11d
 * 0000000140B06963: mov     r8, r14
 * 0000000140B06966: shr     r12d, 7
 * 0000000140B0696A: test    r12d, r12d
 * 0000000140B0696D: jz      short loc_140B069EA
 * 0000000140B0696F: mov     esi, 1
 * 0000000140B06974: mov     rbx, 7010008004002001h
 * 0000000140B0697E: mov     r13d, 0FFFFFFFFh
 * 0000000140B06984: mov     eax, 8
 * 0000000140B06989: xor     r8, [r10]
 * 0000000140B0698C: mov     ecx, r9d
 * 0000000140B0698F: rol     r8, cl
 * 0000000140B06992: xor     r8, [r10+8]
 * 0000000140B06996: add     r10, 10h
 * 0000000140B0699A: rol     r8, cl
 * 0000000140B0699D: sub     rax, rsi
 * 0000000140B069A0: jnz     short loc_140B06989
 * 0000000140B069A2: mov     rcx, r10
 * 0000000140B069A5: sub     rcx, rdi
 * 0000000140B069A8: xor     rcx, r14
 * 0000000140B069AB: mov     rax, rcx
 * 0000000140B069AE: rol     rax, 11h
 * 0000000140B069B2: xor     rcx, rax
 * 0000000140B069B5: mov     rax, rbx
 * 0000000140B069B8: mul     rcx
 * 0000000140B069BB: xor     r9d, edx
 * 0000000140B069BE: mov     [rbp+0A70h+var_518], rdx
 * 0000000140B069C5: xor     r9d, eax
 * 0000000140B069C8: and     r9d, 3Fh
 * 0000000140B069CC: cmovz   r9d, esi
 * 0000000140B069D0: add     r12d, r13d
 * 0000000140B069D3: jnz     short loc_140B06984
 * 0000000140B069D5: mov     r13, [rsp+0B70h+var_AF8]
 * 0000000140B069DA: mov     rbx, [rsp+0B70h+var_B18]
 * 0000000140B069DF: mov     rsi, [rbp+0A70h+arg_8]
 * 0000000140B069E6: mov     rdx, [rbp+0A70h+var_AA8]
 * 0000000140B069EA: and     r11d, 7Fh
 * 0000000140B069EE: mov     r14d, 1
 * 0000000140B069F4: cmp     r11d, 8
 * 0000000140B069F8: jb      short loc_140B06A17
 * 0000000140B069FA: mov     eax, r11d
 * 0000000140B069FD: shr     rax, 3
 * 0000000140B06A01: xor     r8, [r10]
 * 0000000140B06A04: mov     ecx, r9d
 * 0000000140B06A07: rol     r8, cl
 * 0000000140B06A0A: add     r10, 8
 * 0000000140B06A0E: add     r11d, 0FFFFFFF8h
 * 0000000140B06A12: sub     rax, r14
 * 0000000140B06A15: jnz     short loc_140B06A01
 * 0000000140B06A17: test    r11d, r11d
 * 0000000140B06A1A: jz      short loc_140B06A3A
 * 0000000140B06A1C: mov     edi, 0FFFFFFFFh
 * 0000000140B06A21: movzx   eax, byte ptr [r10]
 * 0000000140B06A25: mov     ecx, r9d
 * 0000000140B06A28: xor     r8, rax
 * 0000000140B06A2B: add     r10, r14
 * 0000000140B06A2E: rol     r8, cl
 * 0000000140B06A31: add     r11d, edi
 * 0000000140B06A34: jnz     short loc_140B06A21
 * 0000000140B06A36: mov     rdi, [rbp+0A70h+var_AC0]
 * 0000000140B06A3A: mov     r12, [r13+18h]
 * 0000000140B06A3E: mov     r11, rdx
 * 0000000140B06A41: xor     r11, r8
 * 0000000140B06A44: mov     r9, r12
 * 0000000140B06A47: mov     r8d, r11d
 * 0000000140B06A4A: mov     rax, r12
 * 0000000140B06A4D: and     r8d, 3Fh
 * 0000000140B06A51: mov     r13, r15
 * 0000000140B06A54: lea     rcx, [r12+r15]
 * 0000000140B06A58: cmp     r12, rcx
 * 0000000140B06A5B: jnb     short loc_140B06A6E
 * 0000000140B06A5D: mov     r10d, 40h ; '@'
 * 0000000140B06A63: prefetchnta byte ptr [rax]
 * 0000000140B06A66: add     rax, r10
 * 0000000140B06A69: cmp     rax, rcx
 * 0000000140B06A6C: jb      short loc_140B06A63
 * 0000000140B06A6E: mov     r10d, r15d
 * 0000000140B06A71: mov     r14, r11
 * 0000000140B06A74: shr     r10d, 7
 * 0000000140B06A78: test    r10d, r10d
 * 0000000140B06A7B: jz      short loc_140B06AF4
 * 0000000140B06A7D: mov     esi, 1
 * 0000000140B06A82: mov     edi, 0FFFFFFFFh
 * 0000000140B06A87: mov     r13, 7010008004002001h
 * 0000000140B06A91: mov     eax, 8
 * 0000000140B06A96: xor     r14, [r9]
 * 0000000140B06A99: mov     ecx, r8d
 * 0000000140B06A9C: rol     r14, cl
 * 0000000140B06A9F: xor     r14, [r9+8]
 * 0000000140B06AA3: add     r9, 10h
 * 0000000140B06AA7: rol     r14, cl
 * 0000000140B06AAA: sub     rax, rsi
 * 0000000140B06AAD: jnz     short loc_140B06A96
 * 0000000140B06AAF: mov     rcx, r9
 * 0000000140B06AB2: sub     rcx, r12
 * 0000000140B06AB5: xor     rcx, r11
 * 0000000140B06AB8: mov     rax, rcx
 * 0000000140B06ABB: rol     rax, 11h
 * 0000000140B06ABF: xor     rcx, rax
 * 0000000140B06AC2: mov     rax, r13
 * 0000000140B06AC5: mul     rcx
 * 0000000140B06AC8: xor     r8d, eax
 * 0000000140B06ACB: mov     [rbp+0A70h+var_510], rdx
 * 0000000140B06AD2: xor     r8d, edx
 * 0000000140B06AD5: and     r8d, 3Fh
 * 0000000140B06AD9: cmovz   r8d, esi
 * 0000000140B06ADD: add     r10d, edi
 * 0000000140B06AE0: jnz     short loc_140B06A91
 * 0000000140B06AE2: mov     rdi, [rbp+0A70h+var_AC0]
 * 0000000140B06AE6: mov     r13, r15
 * 0000000140B06AE9: mov     rsi, [rbp+0A70h+arg_8]
 * 0000000140B06AF0: mov     rdx, [rbp+0A70h+var_AA8]
 * 0000000140B06AF4: and     r15d, 7Fh
 * 0000000140B06AF8: mov     r10d, 1
 * 0000000140B06AFE: cmp     r15d, 8
 * 0000000140B06B02: jb      short loc_140B06B21
 * 0000000140B06B04: mov     eax, r15d
 * 0000000140B06B07: shr     rax, 3
 * 0000000140B06B0B: xor     r14, [r9]
 * 0000000140B06B0E: mov     ecx, r8d
 * 0000000140B06B11: rol     r14, cl
 * 0000000140B06B14: add     r9, 8
 * 0000000140B06B18: add     r15d, 0FFFFFFF8h
 * 0000000140B06B1C: sub     rax, r10
 * 0000000140B06B1F: jnz     short loc_140B06B0B
 * 0000000140B06B21: xor     r12d, r12d
 * 0000000140B06B24: test    r15d, r15d
 * 0000000140B06B27: jz      short loc_140B06B4A
 * 0000000140B06B29: mov     esi, 0FFFFFFFFh
 * 0000000140B06B2E: movzx   eax, byte ptr [r9]
 * 0000000140B06B32: mov     ecx, r8d
 * 0000000140B06B35: xor     r14, rax
 * 0000000140B06B38: add     r9, r10
 * 0000000140B06B3B: rol     r14, cl
 * 0000000140B06B3E: add     r15d, esi
 * 0000000140B06B41: jnz     short loc_140B06B2E
 * 0000000140B06B43: mov     rsi, [rbp+0A70h+arg_8]
 * 0000000140B06B4A: xor     r14, rdi
 * 0000000140B06B4D: add     rbx, 8
 * 0000000140B06B51: xor     r14, r13
 * 0000000140B06B54: mov     [rsp+0B70h+var_B18], rbx
 * 0000000140B06B59: mov     r13d, 1
 * 0000000140B06B5F: sub     [rsp+0B70h+var_B08], r13
 * 0000000140B06B64: jnz     loc_140B06918
 * 0000000140B06B6A: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B06B6F: lea     rdx, [rbp+0A70h+var_8C0]
 * 0000000140B06B76: mov     rcx, rdi
 * 0000000140B06B79: mov     [rsp+0B70h+var_AF8], r14
 * 0000000140B06B7E: mov     rax, [rsi+208h]
 * 0000000140B06B85: call    KeGuardDispatchICall
 * 0000000140B06B8A: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B06B91: mov     rbx, [rbp+0A70h+var_A80]
 * 0000000140B06B95: cmp     [rbp+0A70h+var_8C0], r12
 * 0000000140B06B9C: jz      loc_140B06EEF
 * 0000000140B06BA2: mov     rax, [rsi+0F0h]
 * 0000000140B06BA9: lea     edx, [r13+7Fh]
 * 0000000140B06BAD: mov     r8d, [rsi+810h]
 * 0000000140B06BB4: lea     ecx, [rdx-40h]
 * 0000000140B06BB7: call    KeGuardDispatchICall
 * 0000000140B06BBC: xor     r11d, r11d
 * 0000000140B06BBF: mov     [rbp+0A70h+var_AC0], rax
 * 0000000140B06BC3: mov     r15, rax
 * 0000000140B06BC6: test    rax, rax
 * 0000000140B06BC9: jz      loc_140B083FB
 * 0000000140B06BCF: mov     rax, [rbp+0A70h+var_8C0]
 * 0000000140B06BD6: mov     ecx, r11d
 * 0000000140B06BD9: mov     [rbp+0A70h+var_9F8], rax
 * 0000000140B06BDD: mov     [r15], rax
 * 0000000140B06BE0: mov     rax, r14
 * 0000000140B06BE3: mov     [rbp+0A70h+var_AA8], rax
 * 0000000140B06BE7: mov     dword ptr [rbp+0A70h+arg_8], r11d
 * 0000000140B06BEE: mov     [rbp+0A70h+var_AE8], rcx
 * 0000000140B06BF2: mov     rcx, [r15+rcx*8]
 * 0000000140B06BF6: mov     [rbp+0A70h+var_9F8], rcx
 * 0000000140B06BFA: test    rcx, rcx
 * 0000000140B06BFD: jz      loc_140B06EBF
 * 0000000140B06C03: and     eax, 3Fh
 * 0000000140B06C06: mov     [rbp+0A70h+var_AE0], eax
 * 0000000140B06C09: mov     rax, [rsi+1F8h]
 * 0000000140B06C10: call    KeGuardDispatchICall
 * 0000000140B06C15: xor     r11d, r11d
 * 0000000140B06C18: mov     [rsp+0B70h+var_B18], rax
 * 0000000140B06C1D: test    rax, rax
 * 0000000140B06C20: jz      loc_140B07362
 * 0000000140B06C26: movzx   r12d, word ptr [rax+14h]
 * 0000000140B06C2B: mov     ebx, [rbp+0A70h+var_AE0]
 * 0000000140B06C2E: add     r12, 18h
 * 0000000140B06C32: mov     rdi, [rbp+0A70h+var_AA8]
 * 0000000140B06C36: add     r12, rax
 * 0000000140B06C39: movzx   eax, word ptr [rax+6]
 * 0000000140B06C3D: lea     rcx, [rax+rax*4]
 * 0000000140B06C41: lea     rax, [r12+rcx*8]
 * 0000000140B06C45: mov     [rsp+0B70h+var_B08], rax
 * 0000000140B06C4A: mov     r14, rax
 * 0000000140B06C4D: test    dword ptr [r12+24h], 2000000h
 * 0000000140B06C56: mov     [rbp+0A70h+var_AD0], r11d
 * 0000000140B06C5A: jnz     short loc_140B06C7A
 * 0000000140B06C5C: mov     eax, [r12]
 * 0000000140B06C60: cmp     eax, 54494E49h
 * 0000000140B06C65: jnz     loc_140B071B4
 * 0000000140B06C6B: cmp     dword ptr [r12+4], 4742444Bh
 * 0000000140B06C74: jnz     loc_140B071EC
 * 0000000140B06C7A: mov     ecx, r13d
 * 0000000140B06C7D: cmp     [r12+24h], r11d
 * 0000000140B06C82: mov     eax, [r12+8]
 * 0000000140B06C87: mov     r9d, [r12+10h]
 * 0000000140B06C8C: cmovl   ecx, r13d
 * 0000000140B06C90: cmp     r9d, eax
 * 0000000140B06C93: cmovbe  r9d, eax
 * 0000000140B06C97: mov     eax, [r12+0Ch]
 * 0000000140B06C9C: test    ecx, ecx
 * 0000000140B06C9E: jnz     loc_140B06DA8
 * 0000000140B06CA4: mov     r15d, eax
 * 0000000140B06CA7: mov     ecx, r9d
 * 0000000140B06CAA: add     r15, [rbp+0A70h+var_9F8]
 * 0000000140B06CAE: mov     r11d, ebx
 * 0000000140B06CB1: add     rcx, r15
 * 0000000140B06CB4: mov     r10, r15
 * 0000000140B06CB7: mov     rax, r15
 * 0000000140B06CBA: cmp     r15, rcx
 * 0000000140B06CBD: jnb     short loc_140B06CCF
 * 0000000140B06CBF: mov     edx, 40h ; '@'
 * 0000000140B06CC4: prefetchnta byte ptr [rax]
 * 0000000140B06CC7: add     rax, rdx
 * 0000000140B06CCA: cmp     rax, rcx
 * 0000000140B06CCD: jb      short loc_140B06CC4
 * 0000000140B06CCF: mov     r13d, r9d
 * 0000000140B06CD2: mov     r8, rdi
 * 0000000140B06CD5: shr     r13d, 7
 * 0000000140B06CD9: test    r13d, r13d
 * 0000000140B06CDC: jz      short loc_140B06D51
 * 0000000140B06CDE: mov     esi, 0FFFFFFFFh
 * 0000000140B06CE3: mov     rbx, 7010008004002001h
 * 0000000140B06CED: mov     r14d, 1
 * 0000000140B06CF3: mov     eax, 8
 * 0000000140B06CF8: xor     r8, [r10]
 * 0000000140B06CFB: mov     ecx, r11d
 * 0000000140B06CFE: rol     r8, cl
 * 0000000140B06D01: xor     r8, [r10+8]
 * 0000000140B06D05: add     r10, 10h
 * 0000000140B06D09: rol     r8, cl
 * 0000000140B06D0C: sub     rax, r14
 * 0000000140B06D0F: jnz     short loc_140B06CF8
 * 0000000140B06D11: mov     rcx, r10
 * 0000000140B06D14: sub     rcx, r15
 * 0000000140B06D17: xor     rcx, rdi
 * 0000000140B06D1A: mov     rax, rcx
 * 0000000140B06D1D: rol     rax, 11h
 * 0000000140B06D21: xor     rcx, rax
 * 0000000140B06D24: mov     rax, rbx
 * 0000000140B06D27: mul     rcx
 * 0000000140B06D2A: xor     r11d, eax
 * 0000000140B06D2D: mov     [rbp+0A70h+var_508], rdx
 * 0000000140B06D34: xor     r11d, edx
 * 0000000140B06D37: and     r11d, 3Fh
 * 0000000140B06D3B: cmovz   r11d, r14d
 * 0000000140B06D3F: add     r13d, esi
 * 0000000140B06D42: jnz     short loc_140B06CF3
 * 0000000140B06D44: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B06D49: mov     ebx, [rbp+0A70h+var_AE0]
 * 0000000140B06D4C: mov     r14, [rsp+0B70h+var_B08]
 * 0000000140B06D51: and     r9d, 7Fh
 * 0000000140B06D55: mov     r13d, 1
 * 0000000140B06D5B: cmp     r9d, 8
 * 0000000140B06D5F: jb      short loc_140B06D7E
 * 0000000140B06D61: mov     eax, r9d
 * 0000000140B06D64: shr     rax, 3
 * 0000000140B06D68: xor     r8, [r10]
 * 0000000140B06D6B: mov     ecx, r11d
 * 0000000140B06D6E: rol     r8, cl
 * 0000000140B06D71: add     r10, 8
 * 0000000140B06D75: add     r9d, 0FFFFFFF8h
 * 0000000140B06D79: sub     rax, r13
 * 0000000140B06D7C: jnz     short loc_140B06D68
 * 0000000140B06D7E: test    r9d, r9d
 * 0000000140B06D81: jz      short loc_140B06DA2
 * 0000000140B06D83: mov     esi, 0FFFFFFFFh
 * 0000000140B06D88: movzx   eax, byte ptr [r10]
 * 0000000140B06D8C: mov     ecx, r11d
 * 0000000140B06D8F: xor     r8, rax
 * 0000000140B06D92: add     r10, r13
 * 0000000140B06D95: rol     r8, cl
 * 0000000140B06D98: add     r9d, esi
 * 0000000140B06D9B: jnz     short loc_140B06D88
 * 0000000140B06D9D: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B06DA2: mov     rdi, r8
 * 0000000140B06DA5: xor     r11d, r11d
 * 0000000140B06DA8: add     r12, 28h ; '('
 * 0000000140B06DAC: cmp     r12, r14
 * 0000000140B06DAF: jnz     loc_140B06C4D
 * 0000000140B06DB5: mov     r9d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B06DBC: mov     r14, [rsp+0B70h+var_AF8]
 * 0000000140B06DC1: mov     [rbp+0A70h+var_AA8], rdi
 * 0000000140B06DC5: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B06DCC: test    r9d, r9d
 * 0000000140B06DCF: jnz     loc_140B07332
 * 0000000140B06DD5: mov     r8, [rsp+0B70h+var_B18]
 * 0000000140B06DDA: mov     rdx, [rbp+0A70h+var_9F8]
 * 0000000140B06DDE: mov     [rsp+0B70h+var_B08], rdx
 * 0000000140B06DE3: mov     ecx, [r8+94h]
 * 0000000140B06DEA: cmp     ecx, 14h
 * 0000000140B06DED: jb      loc_140B07332
 * 0000000140B06DF3: mov     eax, [r8+90h]
 * 0000000140B06DFA: lea     r12, [rdx+rcx]
 * 0000000140B06DFE: add     r12, rax
 * 0000000140B06E01: lea     r13, [rdx+rax]
 * 0000000140B06E05: cmp     r13, r12
 * 0000000140B06E08: jz      loc_140B0732C
 * 0000000140B06E0E: cmp     [r13+0Ch], r11d
 * 0000000140B06E12: jz      loc_140B07325
 * 0000000140B06E18: mov     eax, [r13+10h]
 * 0000000140B06E1C: test    eax, eax
 * 0000000140B06E1E: jz      loc_140B07325
 * 0000000140B06E24: mov     r15, [rax+rdx]
 * 0000000140B06E28: test    r15, r15
 * 0000000140B06E2B: jz      loc_140B07318
 * 0000000140B06E31: cmp     r15, rdx
 * 0000000140B06E34: jb      short loc_140B06E46
 * 0000000140B06E36: mov     eax, [r8+50h]
 * 0000000140B06E3A: add     rax, rdx
 * 0000000140B06E3D: cmp     r15, rax
 * 0000000140B06E40: jb      loc_140B07318
 * 0000000140B06E46: mov     rax, [rsi+2A8h]
 * 0000000140B06E4D: mov     rcx, r15
 * 0000000140B06E50: call    KeGuardDispatchICall
 * 0000000140B06E55: xor     r11d, r11d
 * 0000000140B06E58: test    eax, eax
 * 0000000140B06E5A: jz      loc_140B0730E
 * 0000000140B06E60: mov     rax, [rsi+208h]
 * 0000000140B06E67: lea     rdx, [rbp+0A70h+var_9F8]
 * 0000000140B06E6B: mov     rcx, r15
 * 0000000140B06E6E: call    KeGuardDispatchICall
 * 0000000140B06E73: mov     r8, [rbp+0A70h+var_9F8]
 * 0000000140B06E77: xor     r11d, r11d
 * 0000000140B06E7A: test    r8, r8
 * 0000000140B06E7D: jz      loc_140B0730E
 * 0000000140B06E83: mov     r15, [rbp+0A70h+var_AC0]
 * 0000000140B06E87: mov     rcx, r15
 * 0000000140B06E8A: mov     eax, r11d
 * 0000000140B06E8D: mov     rdx, [rcx]
 * 0000000140B06E90: cmp     rdx, r8
 * 0000000140B06E93: jz      loc_140B0730E
 * 0000000140B06E99: test    rdx, rdx
 * 0000000140B06E9C: jz      loc_140B0730A
 * 0000000140B06EA2: inc     eax
 * 0000000140B06EA4: add     rcx, 8
 * 0000000140B06EA8: mov     edx, 10h
 * 0000000140B06EAD: cmp     eax, edx
 * 0000000140B06EAF: jb      short loc_140B06E8D
 * 0000000140B06EB1: jnz     loc_140B0730E
 * 0000000140B06EB7: mov     rax, [rbp+0A70h+var_AA8]
 * 0000000140B06EBB: lea     r13d, [rdx-0Fh]
 * 0000000140B06EBF: mov     r14, rax
 * 0000000140B06EC2: xor     r12d, r12d
 * 0000000140B06EC5: cmp     r14, [rsi+968h]
 * 0000000140B06ECC: jz      short loc_140B06ED3
 * 0000000140B06ECE: test    r14, r14
 * 0000000140B06ED1: jnz     short loc_140B06EE0
 * 0000000140B06ED3: mov     rax, 95EA5DE843D5D824h
 * 0000000140B06EDD: xor     r14, rax
 * 0000000140B06EE0: mov     rax, [rsi+0F8h]
 * 0000000140B06EE7: mov     rcx, r15
 * 0000000140B06EEA: call    KeGuardDispatchICall
 * 0000000140B06EEF: mov     rax, [rsi+960h]
 * 0000000140B06EF6: mov     rcx, [rax]
 * 0000000140B06EF9: cmp     r14, rcx
 * 0000000140B06EFC: jz      short loc_140B06F75
 * 0000000140B06EFE: mov     eax, [rsi+994h]
 * 0000000140B06F04: mov     ecx, 40h ; '@'
 * 0000000140B06F09: test    cl, al
 * 0000000140B06F0B: jnz     short loc_140B06F75
 * 0000000140B06F0D: mov     rax, [rsi+960h]
 * 0000000140B06F14: mov     rcx, [rax]
 * 0000000140B06F17: cmp     [rsi+8F8h], r12d
 * 0000000140B06F1E: jnz     short loc_140B06F75
 * 0000000140B06F20: mov     rax, [rsi+588h]
 * 0000000140B06F27: xor     rcx, r14
 * 0000000140B06F2A: mov     [rax+18h], rcx
 * 0000000140B06F2E: cmp     [rsi+8F8h], r12d
 * 0000000140B06F35: jnz     short loc_140B06F75
 * 0000000140B06F37: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B06F41: xor     edx, edx
 * 0000000140B06F43: add     rax, rsi
 * 0000000140B06F46: mov     rcx, rsi
 * 0000000140B06F49: mov     [rsi+900h], rax
 * 0000000140B06F50: mov     [rsi+908h], r12
 * 0000000140B06F57: mov     qword ptr [rsi+910h], 102h
 * 0000000140B06F62: mov     [rsi+918h], r14
 * 0000000140B06F69: mov     [rsi+8F8h], r13d
 * 0000000140B06F70: call    $$ba
 * 0000000140B06F75: mov     r10d, r12d
 * 0000000140B06F78: lea     r15, [rbp+0A70h+var_7A8]
 * 0000000140B06F7F: mov     r12d, 2
 * 0000000140B06F85: mov     r14d, 0FFFFFFFFh
 * 0000000140B06F8B: mov     rax, [r15]
 * 0000000140B06F8E: xor     esi, esi
 * 0000000140B06F90: mov     r9d, esi
 * 0000000140B06F93: mov     r11, [rax]
 * 0000000140B06F96: lea     r8d, [r10+rax]
 * 0000000140B06F9A: mov     r13d, [rax+10h]
 * 0000000140B06F9E: add     r8d, r11d
 * 0000000140B06FA1: test    r13d, r13d
 * 0000000140B06FA4: jz      short loc_140B06FD2
 * 0000000140B06FA6: mov     r14, r11
 * 0000000140B06FA9: movsxd  rdx, dword ptr [r14]
 * 0000000140B06FAC: inc     r9d
 * 0000000140B06FAF: mov     rax, rdx
 * 0000000140B06FB2: lea     r14, [r14+4]
 * 0000000140B06FB6: sar     rax, 4
 * 0000000140B06FBA: mov     ecx, [rax+r11]
 * 0000000140B06FBE: add     ecx, edx
 * 0000000140B06FC0: xor     r8d, ecx
 * 0000000140B06FC3: imul    r8d, r9d
 * 0000000140B06FC7: cmp     r9d, r13d
 * 0000000140B06FCA: jb      short loc_140B06FA9
 * 0000000140B06FCC: mov     r14d, 0FFFFFFFFh
 * 0000000140B06FD2: lea     r10d, [r10+r8*2]
 * 0000000140B06FD6: sub     r15, 8
 * 0000000140B06FDA: add     r8d, r8d
 * 0000000140B06FDD: xor     r11d, r11d
 * 0000000140B06FE0: add     r12d, r14d
 * 0000000140B06FE3: jnz     short loc_140B06F8B
 * 0000000140B06FE5: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B06FEA: mov     rbx, [rbp+0A70h+var_A80]
 * 0000000140B06FEE: mov     rax, [rsi+590h]
 * 0000000140B06FF5: mov     edx, [rax]
 * 0000000140B06FF7: cmp     r10d, edx
 * 0000000140B06FFA: jz      short loc_140B07072
 * 0000000140B06FFC: test    dword ptr [rsi+990h], 20000h
 * 0000000140B07006: jz      short loc_140B07072
 * 0000000140B07008: cmp     [rsi+8F8h], r11d
 * 0000000140B0700F: jnz     short loc_140B07072
 * 0000000140B07011: mov     rax, [rsi+588h]
 * 0000000140B07018: mov     ecx, r8d
 * 0000000140B0701B: xor     rcx, rdx
 * 0000000140B0701E: mov     [rax+18h], rcx
 * 0000000140B07022: mov     ecx, r8d
 * 0000000140B07025: cmp     [rsi+8F8h], r11d
 * 0000000140B0702C: jnz     short loc_140B07072
 * 0000000140B0702E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B07038: xor     edx, edx
 * 0000000140B0703A: add     rax, rsi
 * 0000000140B0703D: mov     [rsi+900h], rax
 * 0000000140B07044: lea     eax, [r11+1]
 * 0000000140B07048: mov     [rsi+908h], r11
 * 0000000140B0704F: mov     qword ptr [rsi+910h], 107h
 * 0000000140B0705A: mov     [rsi+918h], rcx
 * 0000000140B07061: mov     rcx, rsi
 * 0000000140B07064: mov     [rsi+8F8h], eax
 * 0000000140B0706A: call    $$ba
 * 0000000140B0706F: xor     r11d, r11d
 * 0000000140B07072: mov     ecx, [rsi+958h]
 * 0000000140B07078: mov     eax, 6
 * 0000000140B0707D: cmp     ecx, eax
 * 0000000140B0707F: jg      loc_140B08503
 * 0000000140B07085: jz      short loc_140B07090
 * 0000000140B07087: mov     edx, ecx
 * 0000000140B07089: test    ecx, ecx
 * 0000000140B0708B: jz      short loc_140B07090
 * 0000000140B0708D: sub     edx, 2
 * 0000000140B07090: mov     rdx, [rsi+570h]
 * 0000000140B07097: mov     rax, [rsi+568h]
 * 0000000140B0709E: mov     [rsp+0B70h+var_B18], rdx
 * 0000000140B070A3: add     rdx, 20h ; ' '
 * 0000000140B070A7: mov     [rsp+0B70h+var_B08], rdx
 * 0000000140B070AC: mov     edx, 2
 * 0000000140B070B1: mov     [rbp+0A70h+var_AA8], rax
 * 0000000140B070B5: lea     r13, [rax+20h]
 * 0000000140B070B9: mov     [rbp+0A70h+var_AC0], r13
 * 0000000140B070BD: cmp     ecx, edx
 * 0000000140B070BF: jge     loc_140B0757A
 * 0000000140B070C5: mov     r12d, [rax+30h]
 * 0000000140B070C9: mov     r15, [r13+0]
 * 0000000140B070CD: mov     r13d, [rsi+7E4h]
 * 0000000140B070D4: mov     r8d, [rsi+924h]
 * 0000000140B070DB: shl     r12d, 2
 * 0000000140B070DF: mov     dword ptr [rbp+0A70h+arg_8], r12d
 * 0000000140B070E6: lea     eax, [r13+30h]
 * 0000000140B070EA: cmp     eax, [rsi+0A1Ch]
 * 0000000140B070F0: jbe     loc_140B073DF
 * 0000000140B070F6: mov     edx, eax
 * 0000000140B070F8: mov     rcx, rsi
 * 0000000140B070FB: call    sub_140B11020
 * 0000000140B07100: xor     r11d, r11d
 * 0000000140B07103: mov     r14, rax
 * 0000000140B07106: test    rax, rax
 * 0000000140B07109: jz      loc_140B083F2
 * 0000000140B0710F: mov     ecx, [rsi+990h]
 * 0000000140B07115: test    cl, 4
 * 0000000140B07118: jnz     loc_140B073D5
 * 0000000140B0711E: mov     eax, [rsi+7E4h]
 * 0000000140B07124: lea     r9d, [r11+1]
 * 0000000140B07128: mov     r8, [rsi+7C8h]
 * 0000000140B0712F: and     ecx, 20000000h
 * 0000000140B07135: neg     ecx
 * 0000000140B07137: sbb     edx, edx
 * 0000000140B07139: and     edx, [rsi+924h]
 * 0000000140B0713F: cmp     eax, 8
 * 0000000140B07142: jb      short loc_140B07159
 * 0000000140B07144: mov     ecx, eax
 * 0000000140B07146: shr     rcx, 3
 * 0000000140B0714A: mov     [rsi], r11
 * 0000000140B0714D: add     eax, 0FFFFFFF8h
 * 0000000140B07150: add     rsi, 8
 * 0000000140B07154: sub     rcx, r9
 * 0000000140B07157: jnz     short loc_140B0714A
 * 0000000140B07159: test    eax, eax
 * 0000000140B0715B: jz      short loc_140B0716C
 * 0000000140B0715D: mov     ecx, 0FFFFFFFFh
 * 0000000140B07162: mov     [rsi], r11b
 * 0000000140B07165: add     rsi, r9
 * 0000000140B07168: add     eax, ecx
 * 0000000140B0716A: jnz     short loc_140B07162
 * 0000000140B0716C: mov     ebx, [r14+924h]
 * 0000000140B07173: mov     [r14+924h], edx
 * 0000000140B0717A: cmp     edx, 3
 * 0000000140B0717D: jz      loc_140B073BF
 * 0000000140B07183: test    dword ptr [r14+990h], 10000000h
 * 0000000140B0718E: jnz     loc_140B073B6
 * 0000000140B07194: test    edx, edx
 * 0000000140B07196: jz      loc_140B073B6
 * 0000000140B0719C: mov     rax, [r14+228h]
 * 0000000140B071A3: lea     rcx, [r8-8]
 * 0000000140B071A7: mov     rdx, [rcx]
 * 0000000140B071AA: call    KeGuardDispatchICall
 * 0000000140B071AF: jmp     loc_140B073CE
 * 0000000140B071B4: cmp     eax, 45474150h
 * 0000000140B071B9: jnz     short loc_140B071EC
 * 0000000140B071BB: movzx   eax, word ptr [r12+4]
 * 0000000140B071C1: mov     ecx, 7877h
 * 0000000140B071C6: cmp     ax, cx
 * 0000000140B071C9: jz      loc_140B06C7A
 * 0000000140B071CF: mov     ecx, 7277h
 * 0000000140B071D4: cmp     ax, cx
 * 0000000140B071D7: jz      loc_140B06C7A
 * 0000000140B071DD: mov     ecx, 7777h
 * 0000000140B071E2: cmp     ax, cx
 * 0000000140B071E5: jnz     short loc_140B07204
 * 0000000140B071E7: jmp     loc_140B06C7A
 * 0000000140B071EC: cmp     eax, 41525245h
 * 0000000140B071F1: jnz     short loc_140B07204
 * 0000000140B071F3: mov     eax, 4154h
 * 0000000140B071F8: cmp     [r12+4], ax
 * 0000000140B071FE: jz      loc_140B06C7A
 * 0000000140B07204: mov     r8, [rsi+930h]
 * 0000000140B0720B: mov     r9, r12
 * 0000000140B0720E: mov     r10, [rsi+938h]
 * 0000000140B07215: sub     r9, r8
 * 0000000140B07218: mov     r15, [rsi+940h]
 * 0000000140B0721F: mov     r11d, 7
 * 0000000140B07225: mov     r13, [rsi+948h]
 * 0000000140B0722C: movzx   edx, byte ptr [r8+r9]
 * 0000000140B07231: movzx   eax, byte ptr [r8]
 * 0000000140B07235: inc     r8
 * 0000000140B07238: cmp     rdx, rax
 * 0000000140B0723B: jnz     short loc_140B0724C
 * 0000000140B0723D: mov     eax, 0FFFFFFFFh
 * 0000000140B07242: add     r11d, eax
 * 0000000140B07245: jnz     short loc_140B0722C
 * 0000000140B07247: jmp     loc_140B072F1
 * 0000000140B0724C: mov     r8d, 8
 * 0000000140B07252: mov     r9, r12
 * 0000000140B07255: mov     rcx, [r9]
 * 0000000140B07258: add     r9, 8
 * 0000000140B0725C: mov     rax, [r10]
 * 0000000140B0725F: add     r10, 8
 * 0000000140B07263: cmp     rcx, rax
 * 0000000140B07266: jnz     short loc_140B07299
 * 0000000140B07268: add     r8d, 0FFFFFFF8h
 * 0000000140B0726C: cmp     r8d, 8
 * 0000000140B07270: jnb     short loc_140B07255
 * 0000000140B07272: xor     r11d, r11d
 * 0000000140B07275: test    r8d, r8d
 * 0000000140B07278: jz      short loc_140B072F1
 * 0000000140B0727A: movzx   edx, byte ptr [r9]
 * 0000000140B0727E: inc     r9
 * 0000000140B07281: movzx   eax, byte ptr [r10]
 * 0000000140B07285: inc     r10
 * 0000000140B07288: cmp     rdx, rax
 * 0000000140B0728B: jnz     short loc_140B0729C
 * 0000000140B0728D: mov     eax, 0FFFFFFFFh
 * 0000000140B07292: add     r8d, eax
 * 0000000140B07295: jnz     short loc_140B0727A
 * 0000000140B07297: jmp     short loc_140B072F1
 * 0000000140B07299: xor     r11d, r11d
 * 0000000140B0729C: mov     r9d, 4
 * 0000000140B072A2: mov     r8, r12
 * 0000000140B072A5: sub     r8, r15
 * 0000000140B072A8: lea     r10d, [r9-3]
 * 0000000140B072AC: movzx   edx, byte ptr [r8+r15]
 * 0000000140B072B1: movzx   eax, byte ptr [r15]
 * 0000000140B072B5: add     r15, r10
 * 0000000140B072B8: cmp     rdx, rax
 * 0000000140B072BB: jnz     short loc_140B072C9
 * 0000000140B072BD: mov     eax, 0FFFFFFFFh
 * 0000000140B072C2: add     r9d, eax
 * 0000000140B072C5: jnz     short loc_140B072AC
 * 0000000140B072C7: jmp     short loc_140B072F1
 * 0000000140B072C9: mov     r8, r12
 * 0000000140B072CC: mov     r9d, 6
 * 0000000140B072D2: sub     r8, r13
 * 0000000140B072D5: movzx   edx, byte ptr [r8+r13]
 * 0000000140B072DA: movzx   eax, byte ptr [r13+0]
 * 0000000140B072DF: add     r13, r10
 * 0000000140B072E2: cmp     rdx, rax
 * 0000000140B072E5: jnz     short loc_140B072FF
 * 0000000140B072E7: mov     eax, 0FFFFFFFFh
 * 0000000140B072EC: add     r9d, eax
 * 0000000140B072EF: jnz     short loc_140B072D5
 * 0000000140B072F1: mov     r13d, 1
 * 0000000140B072F7: xor     r11d, r11d
 * 0000000140B072FA: jmp     loc_140B06C7A
 * 0000000140B072FF: mov     ecx, [rbp+0A70h+var_AD0]
 * 0000000140B07302: mov     r13, r10
 * 0000000140B07305: jmp     loc_140B06C7D
 * 0000000140B0730A: mov     [r15+rax*8], r8
 * 0000000140B0730E: mov     rdx, [rsp+0B70h+var_B08]
 * 0000000140B07313: mov     r8, [rsp+0B70h+var_B18]
 * 0000000140B07318: add     r13, 14h
 * 0000000140B0731C: cmp     r13, r12
 * 0000000140B0731F: jnz     loc_140B06E0E
 * 0000000140B07325: mov     r9d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0732C: mov     r13d, 1
 * 0000000140B07332: mov     rcx, [rbp+0A70h+var_AE8]
 * 0000000140B07336: add     r9d, r13d
 * 0000000140B07339: mov     r15, [rbp+0A70h+var_AC0]
 * 0000000140B0733D: add     rcx, r13
 * 0000000140B07340: mov     eax, 10h
 * 0000000140B07345: mov     dword ptr [rbp+0A70h+arg_8], r9d
 * 0000000140B0734C: cmp     r9d, eax
 * 0000000140B0734F: mov     [rbp+0A70h+var_AE8], rcx
 * 0000000140B07353: mov     rax, [rbp+0A70h+var_AA8]
 * 0000000140B07357: jb      loc_140B06BF2
 * 0000000140B0735D: jmp     loc_140B06EBF
 * 0000000140B07362: cmp     [rsi+8F8h], r11d
 * 0000000140B07369: jnz     loc_140B06EC2
 * 0000000140B0736F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B07379: xor     edx, edx
 * 0000000140B0737B: add     rax, rsi
 * 0000000140B0737E: mov     rcx, rsi
 * 0000000140B07381: mov     [rsi+900h], rax
 * 0000000140B07388: mov     [rsi+908h], r11
 * 0000000140B0738F: mov     qword ptr [rsi+910h], 102h
 * 0000000140B0739A: mov     qword ptr [rsi+918h], 0FFFFFFFFC000007Bh
 * 0000000140B073A5: mov     [rsi+8F8h], r13d
 * 0000000140B073AC: call    $$ba
 * 0000000140B073B1: jmp     loc_140B06EC2
 * 0000000140B073B6: mov     rax, [r14+0F8h]
 * 0000000140B073BD: jmp     short loc_140B073C6
 * 0000000140B073BF: mov     rax, [r14+368h]
 * 0000000140B073C6: mov     rcx, r8
 * 0000000140B073C9: call    KeGuardDispatchICall
 * 0000000140B073CE: mov     [r14+924h], ebx
 * 0000000140B073D5: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 0000000140B073DD: jmp     short loc_140B073E8
 * 0000000140B073DF: mov     r14, rsi
 * 0000000140B073E2: mov     [rsi+7E4h], eax
 * 0000000140B073E8: lea     rbx, [r14+r13]
 * 0000000140B073EC: mov     r8d, 1
 * 0000000140B073F2: add     [r14+80Ch], r8d
 * 0000000140B073F9: mov     rax, rbx
 * 0000000140B073FC: mov     [rsp+0B70h+var_AF8], rbx
 * 0000000140B07401: xor     r13d, r13d
 * 0000000140B07404: lea     ecx, [r8+2Fh]
 * 0000000140B07408: lea     edx, [rcx-2Ah]
 * 0000000140B0740B: mov     [rax], r13
 * 0000000140B0740E: add     ecx, 0FFFFFFF8h
 * 0000000140B07411: add     rax, 8
 * 0000000140B07415: sub     rdx, r8
 * 0000000140B07418: jnz     short loc_140B0740B
 * 0000000140B0741A: test    ecx, ecx
 * 0000000140B0741C: jz      short loc_140B0742D
 * 0000000140B0741E: mov     edx, 0FFFFFFFFh
 * 0000000140B07423: mov     [rax], r13b
 * 0000000140B07426: add     rax, r8
 * 0000000140B07429: add     ecx, edx
 * 0000000140B0742B: jnz     short loc_140B07423
 * 0000000140B0742D: mov     dword ptr [rbx], 0Bh
 * 0000000140B07433: mov     r9, r15
 * 0000000140B07436: mov     [rbx+8], r15
 * 0000000140B0743A: mov     rax, r15
 * 0000000140B0743D: mov     [rbx+10h], r12d
 * 0000000140B07441: add     [r14+828h], r12d
 * 0000000140B07448: mov     r10d, [r14+814h]
 * 0000000140B0744F: mov     rsi, [r14+818h]
 * 0000000140B07456: mov     ecx, r12d
 * 0000000140B07459: add     rcx, r15
 * 0000000140B0745C: cmp     r15, rcx
 * 0000000140B0745F: jnb     short loc_140B07471
 * 0000000140B07461: mov     edx, 40h ; '@'
 * 0000000140B07466: prefetchnta byte ptr [rax]
 * 0000000140B07469: add     rax, rdx
 * 0000000140B0746C: cmp     rax, rcx
 * 0000000140B0746F: jb      short loc_140B07466
 * 0000000140B07471: mov     r11d, r12d
 * 0000000140B07474: mov     r8, rsi
 * 0000000140B07477: shr     r11d, 7
 * 0000000140B0747B: mov     r13d, 1
 * 0000000140B07481: test    r11d, r11d
 * 0000000140B07484: jz      short loc_140B074F9
 * 0000000140B07486: mov     ebx, 0FFFFFFFFh
 * 0000000140B0748B: mov     r12, 7010008004002001h
 * 0000000140B07495: mov     eax, 8
 * 0000000140B0749A: xor     r8, [r9]
 * 0000000140B0749D: mov     ecx, r10d
 * 0000000140B074A0: rol     r8, cl
 * 0000000140B074A3: xor     r8, [r9+8]
 * 0000000140B074A7: add     r9, 10h
 * 0000000140B074AB: rol     r8, cl
 * 0000000140B074AE: sub     rax, r13
 * 0000000140B074B1: jnz     short loc_140B0749A
 * 0000000140B074B3: mov     rcx, r9
 * 0000000140B074B6: sub     rcx, r15
 * 0000000140B074B9: xor     rcx, rsi
 * 0000000140B074BC: mov     rax, rcx
 * 0000000140B074BF: rol     rax, 11h
 * 0000000140B074C3: xor     rcx, rax
 * 0000000140B074C6: mov     rax, r12
 * 0000000140B074C9: mul     rcx
 * 0000000140B074CC: xor     r10d, eax
 * 0000000140B074CF: mov     [rbp+0A70h+var_500], rdx
 * 0000000140B074D6: xor     r10d, edx
 * 0000000140B074D9: and     r10d, 3Fh
 * 0000000140B074DD: cmovz   r10d, r13d
 * 0000000140B074E1: add     r11d, ebx
 * 0000000140B074E4: jnz     short loc_140B07495
 * 0000000140B074E6: mov     rbx, [rsp+0B70h+var_AF8]
 * 0000000140B074EB: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B074F2: mov     r12d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B074F9: mov     edx, r12d
 * 0000000140B074FC: and     edx, 7Fh
 * 0000000140B074FF: cmp     edx, 8
 * 0000000140B07502: jb      short loc_140B0751F
 * 0000000140B07504: mov     eax, edx
 * 0000000140B07506: shr     rax, 3
 * 0000000140B0750A: xor     r8, [r9]
 * 0000000140B0750D: mov     ecx, r10d
 * 0000000140B07510: rol     r8, cl
 * 0000000140B07513: add     r9, 8
 * 0000000140B07517: add     edx, 0FFFFFFF8h
 * 0000000140B0751A: sub     rax, r13
 * 0000000140B0751D: jnz     short loc_140B0750A
 * 0000000140B0751F: xor     r11d, r11d
 * 0000000140B07522: test    edx, edx
 * 0000000140B07524: jz      short loc_140B07546
 * 0000000140B07526: mov     edi, 0FFFFFFFFh
 * 0000000140B0752B: movzx   eax, byte ptr [r9]
 * 0000000140B0752F: mov     ecx, r10d
 * 0000000140B07532: xor     r8, rax
 * 0000000140B07535: add     r9, r13
 * 0000000140B07538: rol     r8, cl
 * 0000000140B0753B: add     edx, edi
 * 0000000140B0753D: jnz     short loc_140B0752B
 * 0000000140B0753F: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B07546: mov     rax, r8
 * 0000000140B07549: jmp     short loc_140B0754E
 * 0000000140B0754B: xor     r8d, eax
 * 0000000140B0754E: shr     rax, 1Fh
 * 0000000140B07552: test    rax, rax
 * 0000000140B07555: jnz     short loc_140B0754B
 * 0000000140B07557: mov     r13, [rbp+0A70h+var_AC0]
 * 0000000140B0755B: btr     r8d, 1Fh
 * 0000000140B07560: mov     [rbx+14h], r8d
 * 0000000140B07564: mov     eax, 2
 * 0000000140B07569: add     [r14+828h], r12d
 * 0000000140B07570: mov     rbx, r14
 * 0000000140B07573: mov     [r14+958h], eax
 * 0000000140B0757A: cmp     dword ptr [rbx+958h], 3
 * 0000000140B07581: jge     loc_140B077B3
 * 0000000140B07587: mov     r14d, [rbx+7E4h]
 * 0000000140B0758E: mov     r15d, 20h ; ' '
 * 0000000140B07594: mov     r12d, [rbx+838h]
 * 0000000140B0759B: cmp     r12d, 7
 * 0000000140B0759F: mov     r8d, [rbx+924h]
 * 0000000140B075A6: cmovnz  r15d, r11d
 * 0000000140B075AA: lea     eax, [r14+30h]
 * 0000000140B075AE: cmp     eax, [rbx+0A1Ch]
 * 0000000140B075B4: jbe     loc_140B07690
 * 0000000140B075BA: mov     edx, eax
 * 0000000140B075BC: mov     rcx, rbx
 * 0000000140B075BF: call    sub_140B11020
 * 0000000140B075C4: xor     r11d, r11d
 * 0000000140B075C7: mov     rsi, rax
 * 0000000140B075CA: test    rax, rax
 * 0000000140B075CD: jz      loc_140B083F2
 * 0000000140B075D3: mov     ecx, [rbx+990h]
 * 0000000140B075D9: test    cl, 4
 * 0000000140B075DC: jnz     loc_140B07687
 * 0000000140B075E2: mov     eax, [rbx+7E4h]
 * 0000000140B075E8: lea     r9d, [r11+1]
 * 0000000140B075EC: mov     r8, [rbx+7C8h]
 * 0000000140B075F3: and     ecx, 20000000h
 * 0000000140B075F9: neg     ecx
 * 0000000140B075FB: sbb     edx, edx
 * 0000000140B075FD: and     edx, [rbx+924h]
 * 0000000140B07603: cmp     eax, 8
 * 0000000140B07606: jb      short loc_140B0761D
 * 0000000140B07608: mov     ecx, eax
 * 0000000140B0760A: shr     rcx, 3
 * 0000000140B0760E: mov     [rbx], r11
 * 0000000140B07611: add     eax, 0FFFFFFF8h
 * 0000000140B07614: add     rbx, 8
 * 0000000140B07618: sub     rcx, r9
 * 0000000140B0761B: jnz     short loc_140B0760E
 * 0000000140B0761D: test    eax, eax
 * 0000000140B0761F: jz      short loc_140B07630
 * 0000000140B07621: mov     ecx, 0FFFFFFFFh
 * 0000000140B07626: mov     [rbx], r11b
 * 0000000140B07629: add     rbx, r9
 * 0000000140B0762C: add     eax, ecx
 * 0000000140B0762E: jnz     short loc_140B07626
 * 0000000140B07630: mov     ebx, [rsi+924h]
 * 0000000140B07636: mov     [rsi+924h], edx
 * 0000000140B0763C: cmp     edx, 3
 * 0000000140B0763F: jz      short loc_140B0766F
 * 0000000140B07641: test    dword ptr [rsi+990h], 10000000h
 * 0000000140B0764B: jnz     short loc_140B07666
 * 0000000140B0764D: test    edx, edx
 * 0000000140B0764F: jz      short loc_140B07666
 * 0000000140B07651: mov     rax, [rsi+228h]
 * 0000000140B07658: lea     rcx, [r8-8]
 * 0000000140B0765C: mov     rdx, [rcx]
 * 0000000140B0765F: call    KeGuardDispatchICall
 * 0000000140B07664: jmp     short loc_140B0767E
 * 0000000140B07666: mov     rax, [rsi+0F8h]
 * 0000000140B0766D: jmp     short loc_140B07676
 * 0000000140B0766F: mov     rax, [rsi+368h]
 * 0000000140B07676: mov     rcx, r8
 * 0000000140B07679: call    KeGuardDispatchICall
 * 0000000140B0767E: mov     [rsi+924h], ebx
 * 0000000140B07684: xor     r11d, r11d
 * 0000000140B07687: and     dword ptr [rsi+990h], 0FFFFFFFBh
 * 0000000140B0768E: jmp     short loc_140B07699
 * 0000000140B07690: mov     rsi, rbx
 * 0000000140B07693: mov     [rbx+7E4h], eax
 * 0000000140B07699: mov     r8d, 1
 * 0000000140B0769F: lea     rbx, [rsi+r14]
 * 0000000140B076A3: add     [rsi+80Ch], r8d
 * 0000000140B076AA: mov     rax, rbx
 * 0000000140B076AD: mov     r14d, 0FFFFFFF8h
 * 0000000140B076B3: lea     ecx, [r8+2Fh]
 * 0000000140B076B7: lea     edx, [rcx-2Ah]
 * 0000000140B076BA: mov     [rax], r11
 * 0000000140B076BD: add     ecx, r14d
 * 0000000140B076C0: add     rax, 8
 * 0000000140B076C4: sub     rdx, r8
 * 0000000140B076C7: jnz     short loc_140B076BA
 * 0000000140B076C9: test    ecx, ecx
 * 0000000140B076CB: jz      short loc_140B076DC
 * 0000000140B076CD: mov     edx, 0FFFFFFFFh
 * 0000000140B076D2: mov     [rax], r11b
 * 0000000140B076D5: add     rax, r8
 * 0000000140B076D8: add     ecx, edx
 * 0000000140B076DA: jnz     short loc_140B076D2
 * 0000000140B076DC: mov     [rbx], r15d
 * 0000000140B076DF: mov     [rbx+8], r13
 * 0000000140B076E3: cmp     r12d, 7
 * 0000000140B076E7: jnz     short loc_140B076FD
 * 0000000140B076E9: lea     r9, [rbx+18h]
 * 0000000140B076ED: mov     rdx, r13
 * 0000000140B076F0: lea     r8d, [r12+19h]
 * 0000000140B076F5: mov     rcx, rsi
 * 0000000140B076F8: call    sub_1403F1D6C
 * 0000000140B076FD: mov     rcx, [rbp+0A70h+var_AA8]
 * 0000000140B07701: mov     r11d, 20h ; ' '
 * 0000000140B07707: mov     [rbx+10h], r11d
 * 0000000140B0770B: add     rcx, 40h ; '@'
 * 0000000140B0770F: add     [rsi+828h], r11d
 * 0000000140B07716: mov     r8, r13
 * 0000000140B07719: mov     r10d, [rsi+814h]
 * 0000000140B07720: mov     rax, r13
 * 0000000140B07723: mov     rdx, [rsi+818h]
 * 0000000140B0772A: cmp     r13, rcx
 * 0000000140B0772D: jnb     short loc_140B0773E
 * 0000000140B0772F: lea     r9d, [r11+20h]
 * 0000000140B07733: prefetchnta byte ptr [rax]
 * 0000000140B07736: add     rax, r9
 * 0000000140B07739: cmp     rax, rcx
 * 0000000140B0773C: jb      short loc_140B07733
 * 0000000140B0773E: mov     eax, 4
 * 0000000140B07743: mov     r9d, r11d
 * 0000000140B07746: lea     r15d, [rax-3]
 * 0000000140B0774A: xor     rdx, [r8]
 * 0000000140B0774D: mov     ecx, r10d
 * 0000000140B07750: rol     rdx, cl
 * 0000000140B07753: add     r8, 8
 * 0000000140B07757: add     r9d, r14d
 * 0000000140B0775A: sub     rax, r15
 * 0000000140B0775D: jnz     short loc_140B0774A
 * 0000000140B0775F: test    r9d, r9d
 * 0000000140B07762: jz      short loc_140B07785
 * 0000000140B07764: mov     edi, 0FFFFFFFFh
 * 0000000140B07769: movzx   eax, byte ptr [r8]
 * 0000000140B0776D: mov     ecx, r10d
 * 0000000140B07770: xor     rdx, rax
 * 0000000140B07773: add     r8, r15
 * 0000000140B07776: rol     rdx, cl
 * 0000000140B07779: add     r9d, edi
 * 0000000140B0777C: jnz     short loc_140B07769
 * 0000000140B0777E: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B07785: mov     rax, rdx
 * 0000000140B07788: jmp     short loc_140B0778C
 * 0000000140B0778A: xor     edx, eax
 * 0000000140B0778C: shr     rax, 1Fh
 * 0000000140B07790: test    rax, rax
 * 0000000140B07793: jnz     short loc_140B0778A
 * 0000000140B07795: btr     edx, 1Fh
 * 0000000140B07799: mov     [rbx+14h], edx
 * 0000000140B0779C: mov     rbx, rsi
 * 0000000140B0779F: add     [rsi+828h], r11d
 * 0000000140B077A6: xor     r11d, r11d
 * 0000000140B077A9: mov     dword ptr [rsi+958h], 3
 * 0000000140B077B3: cmp     dword ptr [rbx+958h], 4
 * 0000000140B077BA: mov     r13, [rsp+0B70h+var_B08]
 * 0000000140B077BF: jge     loc_140B07A66
 * 0000000140B077C5: mov     rax, [rsp+0B70h+var_B18]
 * 0000000140B077CA: mov     r14d, [rbx+7E4h]
 * 0000000140B077D1: mov     r15, [r13+0]
 * 0000000140B077D5: mov     r8d, [rbx+924h]
 * 0000000140B077DC: mov     r12d, [rax+30h]
 * 0000000140B077E0: shl     r12d, 2
 * 0000000140B077E4: lea     eax, [r14+30h]
 * 0000000140B077E8: cmp     eax, [rbx+0A1Ch]
 * 0000000140B077EE: jbe     loc_140B078C7
 * 0000000140B077F4: mov     edx, eax
 * 0000000140B077F6: mov     rcx, rbx
 * 0000000140B077F9: call    sub_140B11020
 * 0000000140B077FE: xor     r11d, r11d
 * 0000000140B07801: mov     rsi, rax
 * 0000000140B07804: test    rax, rax
 * 0000000140B07807: jz      loc_140B083F2
 * 0000000140B0780D: mov     ecx, [rbx+990h]
 * 0000000140B07813: test    cl, 4
 * 0000000140B07816: jnz     loc_140B078BE
 * 0000000140B0781C: mov     eax, [rbx+7E4h]
 * 0000000140B07822: lea     r9d, [r11+1]
 * 0000000140B07826: mov     r8, [rbx+7C8h]
 * 0000000140B0782D: and     ecx, 20000000h
 * 0000000140B07833: neg     ecx
 * 0000000140B07835: sbb     edx, edx
 * 0000000140B07837: and     edx, [rbx+924h]
 * 0000000140B0783D: cmp     eax, 8
 * 0000000140B07840: jb      short loc_140B07857
 * 0000000140B07842: mov     ecx, eax
 * 0000000140B07844: shr     rcx, 3
 * 0000000140B07848: mov     [rbx], r11
 * 0000000140B0784B: add     eax, 0FFFFFFF8h
 * 0000000140B0784E: add     rbx, 8
 * 0000000140B07852: sub     rcx, r9
 * 0000000140B07855: jnz     short loc_140B07848
 * 0000000140B07857: test    eax, eax
 * 0000000140B07859: jz      short loc_140B0786A
 * 0000000140B0785B: mov     ecx, 0FFFFFFFFh
 * 0000000140B07860: mov     [rbx], r11b
 * 0000000140B07863: add     rbx, r9
 * 0000000140B07866: add     eax, ecx
 * 0000000140B07868: jnz     short loc_140B07860
 * 0000000140B0786A: mov     ebx, [rsi+924h]
 * 0000000140B07870: mov     [rsi+924h], edx
 * 0000000140B07876: cmp     edx, 3
 * 0000000140B07879: jz      short loc_140B078A9
 * 0000000140B0787B: test    dword ptr [rsi+990h], 10000000h
 * 0000000140B07885: jnz     short loc_140B078A0
 * 0000000140B07887: test    edx, edx
 * 0000000140B07889: jz      short loc_140B078A0
 * 0000000140B0788B: mov     rax, [rsi+228h]
 * 0000000140B07892: lea     rcx, [r8-8]
 * 0000000140B07896: mov     rdx, [rcx]
 * 0000000140B07899: call    KeGuardDispatchICall
 * 0000000140B0789E: jmp     short loc_140B078B8
 * 0000000140B078A0: mov     rax, [rsi+0F8h]
 * 0000000140B078A7: jmp     short loc_140B078B0
 * 0000000140B078A9: mov     rax, [rsi+368h]
 * 0000000140B078B0: mov     rcx, r8
 * 0000000140B078B3: call    KeGuardDispatchICall
 * 0000000140B078B8: mov     [rsi+924h], ebx
 * 0000000140B078BE: and     dword ptr [rsi+990h], 0FFFFFFFBh
 * 0000000140B078C5: jmp     short loc_140B078D0
 * 0000000140B078C7: mov     rsi, rbx
 * 0000000140B078CA: mov     [rbx+7E4h], eax
 * 0000000140B078D0: mov     r9d, 1
 * 0000000140B078D6: lea     rbx, [rsi+r14]
 * 0000000140B078DA: add     [rsi+80Ch], r9d
 * 0000000140B078E1: mov     rax, rbx
 * 0000000140B078E4: mov     [rbp+0A70h+arg_8], rbx
 * 0000000140B078EB: xor     r8d, r8d
 * 0000000140B078EE: lea     ecx, [r9+2Fh]
 * 0000000140B078F2: lea     edx, [rcx-2Ah]
 * 0000000140B078F5: mov     [rax], r8
 * 0000000140B078F8: add     ecx, 0FFFFFFF8h
 * 0000000140B078FB: add     rax, 8
 * 0000000140B078FF: sub     rdx, r9
 * 0000000140B07902: jnz     short loc_140B078F5
 * 0000000140B07904: test    ecx, ecx
 * 0000000140B07906: jz      short loc_140B07918
 * 0000000140B07908: mov     r8d, 0FFFFFFFFh
 * 0000000140B0790E: mov     [rax], dl
 * 0000000140B07910: add     rax, r9
 * 0000000140B07913: add     ecx, r8d
 * 0000000140B07916: jnz     short loc_140B0790E
 * 0000000140B07918: mov     dword ptr [rbx], 0Bh
 * 0000000140B0791E: mov     r9, r15
 * 0000000140B07921: mov     [rbx+8], r15
 * 0000000140B07925: mov     rax, r15
 * 0000000140B07928: mov     [rbx+10h], r12d
 * 0000000140B0792C: add     [rsi+828h], r12d
 * 0000000140B07933: mov     r10d, [rsi+814h]
 * 0000000140B0793A: mov     r14, [rsi+818h]
 * 0000000140B07941: mov     ecx, r12d
 * 0000000140B07944: add     rcx, r15
 * 0000000140B07947: cmp     r15, rcx
 * 0000000140B0794A: jnb     short loc_140B0795D
 * 0000000140B0794C: mov     r8d, 40h ; '@'
 * 0000000140B07952: prefetchnta byte ptr [rax]
 * 0000000140B07955: add     rax, r8
 * 0000000140B07958: cmp     rax, rcx
 * 0000000140B0795B: jb      short loc_140B07952
 * 0000000140B0795D: mov     r11d, r12d
 * 0000000140B07960: mov     r8, r14
 * 0000000140B07963: shr     r11d, 7
 * 0000000140B07967: test    r11d, r11d
 * 0000000140B0796A: jz      short loc_140B079E5
 * 0000000140B0796C: mov     edi, 0FFFFFFFFh
 * 0000000140B07971: mov     rbx, 7010008004002001h
 * 0000000140B0797B: mov     r13d, 1
 * 0000000140B07981: mov     eax, 8
 * 0000000140B07986: xor     r8, [r9]
 * 0000000140B07989: mov     ecx, r10d
 * 0000000140B0798C: rol     r8, cl
 * 0000000140B0798F: xor     r8, [r9+8]
 * 0000000140B07993: add     r9, 10h
 * 0000000140B07997: rol     r8, cl
 * 0000000140B0799A: sub     rax, r13
 * 0000000140B0799D: jnz     short loc_140B07986
 * 0000000140B0799F: mov     rcx, r9
 * 0000000140B079A2: sub     rcx, r15
 * 0000000140B079A5: xor     rcx, r14
 * 0000000140B079A8: mov     rax, rcx
 * 0000000140B079AB: rol     rax, 11h
 * 0000000140B079AF: xor     rcx, rax
 * 0000000140B079B2: mov     rax, rbx
 * 0000000140B079B5: mul     rcx
 * 0000000140B079B8: xor     r10d, eax
 * 0000000140B079BB: mov     [rbp+0A70h+var_4F8], rdx
 * 0000000140B079C2: xor     r10d, edx
 * 0000000140B079C5: and     r10d, 3Fh
 * 0000000140B079C9: cmovz   r10d, r13d
 * 0000000140B079CD: add     r11d, edi
 * 0000000140B079D0: jnz     short loc_140B07981
 * 0000000140B079D2: mov     rbx, [rbp+0A70h+arg_8]
 * 0000000140B079D9: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B079E0: mov     r13, [rsp+0B70h+var_B08]
 * 0000000140B079E5: mov     edx, r12d
 * 0000000140B079E8: mov     r14d, 1
 * 0000000140B079EE: and     edx, 7Fh
 * 0000000140B079F1: cmp     edx, 8
 * 0000000140B079F4: jb      short loc_140B07A11
 * 0000000140B079F6: mov     eax, edx
 * 0000000140B079F8: shr     rax, 3
 * 0000000140B079FC: xor     r8, [r9]
 * 0000000140B079FF: mov     ecx, r10d
 * 0000000140B07A02: rol     r8, cl
 * 0000000140B07A05: add     r9, 8
 * 0000000140B07A09: add     edx, 0FFFFFFF8h
 * 0000000140B07A0C: sub     rax, r14
 * 0000000140B07A0F: jnz     short loc_140B079FC
 * 0000000140B07A11: xor     r11d, r11d
 * 0000000140B07A14: test    edx, edx
 * 0000000140B07A16: jz      short loc_140B07A38
 * 0000000140B07A18: mov     r13d, 0FFFFFFFFh
 * 0000000140B07A1E: movzx   eax, byte ptr [r9]
 * 0000000140B07A22: mov     ecx, r10d
 * 0000000140B07A25: xor     r8, rax
 * 0000000140B07A28: add     r9, r14
 * 0000000140B07A2B: rol     r8, cl
 * 0000000140B07A2E: add     edx, r13d
 * 0000000140B07A31: jnz     short loc_140B07A1E
 * 0000000140B07A33: mov     r13, [rsp+0B70h+var_B08]
 * 0000000140B07A38: mov     rax, r8
 * 0000000140B07A3B: jmp     short loc_140B07A40
 * 0000000140B07A3D: xor     r8d, eax
 * 0000000140B07A40: shr     rax, 1Fh
 * 0000000140B07A44: test    rax, rax
 * 0000000140B07A47: jnz     short loc_140B07A3D
 * 0000000140B07A49: btr     r8d, 1Fh
 * 0000000140B07A4E: mov     [rbx+14h], r8d
 * 0000000140B07A52: mov     rbx, rsi
 * 0000000140B07A55: add     [rsi+828h], r12d
 * 0000000140B07A5C: mov     dword ptr [rsi+958h], 4
 * 0000000140B07A66: cmp     dword ptr [rbx+958h], 5
 * 0000000140B07A6D: jge     loc_140B07CA2
 * 0000000140B07A73: mov     r14d, [rbx+7E4h]
 * 0000000140B07A7A: mov     r15d, 20h ; ' '
 * 0000000140B07A80: mov     r12d, [rbx+838h]
 * 0000000140B07A87: cmp     r12d, 7
 * 0000000140B07A8B: mov     r8d, [rbx+924h]
 * 0000000140B07A92: cmovnz  r15d, r11d
 * 0000000140B07A96: lea     eax, [r14+30h]
 * 0000000140B07A9A: cmp     eax, [rbx+0A1Ch]
 * 0000000140B07AA0: jbe     loc_140B07B7C
 * 0000000140B07AA6: mov     edx, eax
 * 0000000140B07AA8: mov     rcx, rbx
 * 0000000140B07AAB: call    sub_140B11020
 * 0000000140B07AB0: xor     r11d, r11d
 * 0000000140B07AB3: mov     rsi, rax
 * 0000000140B07AB6: test    rax, rax
 * 0000000140B07AB9: jz      loc_140B083F2
 * 0000000140B07ABF: mov     ecx, [rbx+990h]
 * 0000000140B07AC5: test    cl, 4
 * 0000000140B07AC8: jnz     loc_140B07B73
 * 0000000140B07ACE: mov     eax, [rbx+7E4h]
 * 0000000140B07AD4: lea     r9d, [r11+1]
 * 0000000140B07AD8: mov     r8, [rbx+7C8h]
 * 0000000140B07ADF: and     ecx, 20000000h
 * 0000000140B07AE5: neg     ecx
 * 0000000140B07AE7: sbb     edx, edx
 * 0000000140B07AE9: and     edx, [rbx+924h]
 * 0000000140B07AEF: cmp     eax, 8
 * 0000000140B07AF2: jb      short loc_140B07B09
 * 0000000140B07AF4: mov     ecx, eax
 * 0000000140B07AF6: shr     rcx, 3
 * 0000000140B07AFA: mov     [rbx], r11
 * 0000000140B07AFD: add     eax, 0FFFFFFF8h
 * 0000000140B07B00: add     rbx, 8
 * 0000000140B07B04: sub     rcx, r9
 * 0000000140B07B07: jnz     short loc_140B07AFA
 * 0000000140B07B09: test    eax, eax
 * 0000000140B07B0B: jz      short loc_140B07B1C
 * 0000000140B07B0D: mov     ecx, 0FFFFFFFFh
 * 0000000140B07B12: mov     [rbx], r11b
 * 0000000140B07B15: add     rbx, r9
 * 0000000140B07B18: add     eax, ecx
 * 0000000140B07B1A: jnz     short loc_140B07B12
 * 0000000140B07B1C: mov     ebx, [rsi+924h]
 * 0000000140B07B22: mov     [rsi+924h], edx
 * 0000000140B07B28: cmp     edx, 3
 * 0000000140B07B2B: jz      short loc_140B07B5B
 * 0000000140B07B2D: test    dword ptr [rsi+990h], 10000000h
 * 0000000140B07B37: jnz     short loc_140B07B52
 * 0000000140B07B39: test    edx, edx
 * 0000000140B07B3B: jz      short loc_140B07B52
 * 0000000140B07B3D: mov     rax, [rsi+228h]
 * 0000000140B07B44: lea     rcx, [r8-8]
 * 0000000140B07B48: mov     rdx, [rcx]
 * 0000000140B07B4B: call    KeGuardDispatchICall
 * 0000000140B07B50: jmp     short loc_140B07B6A
 * 0000000140B07B52: mov     rax, [rsi+0F8h]
 * 0000000140B07B59: jmp     short loc_140B07B62
 * 0000000140B07B5B: mov     rax, [rsi+368h]
 * 0000000140B07B62: mov     rcx, r8
 * 0000000140B07B65: call    KeGuardDispatchICall
 * 0000000140B07B6A: mov     [rsi+924h], ebx
 * 0000000140B07B70: xor     r11d, r11d
 * 0000000140B07B73: and     dword ptr [rsi+990h], 0FFFFFFFBh
 * 0000000140B07B7A: jmp     short loc_140B07B85
 * 0000000140B07B7C: mov     rsi, rbx
 * 0000000140B07B7F: mov     [rbx+7E4h], eax
 * 0000000140B07B85: mov     r8d, 1
 * 0000000140B07B8B: lea     rbx, [rsi+r14]
 * 0000000140B07B8F: add     [rsi+80Ch], r8d
 * 0000000140B07B96: mov     rax, rbx
 * 0000000140B07B99: mov     r14d, 0FFFFFFF8h
 * 0000000140B07B9F: lea     ecx, [r8+2Fh]
 * 0000000140B07BA3: lea     edx, [rcx-2Ah]
 * 0000000140B07BA6: mov     [rax], r11
 * 0000000140B07BA9: add     ecx, r14d
 * 0000000140B07BAC: add     rax, 8
 * 0000000140B07BB0: sub     rdx, r8
 * 0000000140B07BB3: jnz     short loc_140B07BA6
 * 0000000140B07BB5: test    ecx, ecx
 * 0000000140B07BB7: jz      short loc_140B07BC8
 * 0000000140B07BB9: mov     edx, 0FFFFFFFFh
 * 0000000140B07BBE: mov     [rax], r11b
 * 0000000140B07BC1: add     rax, r8
 * 0000000140B07BC4: add     ecx, edx
 * 0000000140B07BC6: jnz     short loc_140B07BBE
 * 0000000140B07BC8: mov     [rbx], r15d
 * 0000000140B07BCB: mov     [rbx+8], r13
 * 0000000140B07BCF: cmp     r12d, 7
 * 0000000140B07BD3: jnz     short loc_140B07BE9
 * 0000000140B07BD5: lea     r9, [rbx+18h]
 * 0000000140B07BD9: mov     rdx, r13
 * 0000000140B07BDC: lea     r8d, [r12+19h]
 * 0000000140B07BE1: mov     rcx, rsi
 * 0000000140B07BE4: call    sub_1403F1D6C
 * 0000000140B07BE9: mov     rcx, [rsp+0B70h+var_B18]
 * 0000000140B07BEE: mov     r11d, 20h ; ' '
 * 0000000140B07BF4: mov     [rbx+10h], r11d
 * 0000000140B07BF8: add     rcx, 40h ; '@'
 * 0000000140B07BFC: add     [rsi+828h], r11d
 * 0000000140B07C03: mov     r8, r13
 * 0000000140B07C06: mov     r10d, [rsi+814h]
 * 0000000140B07C0D: mov     rax, r13
 * 0000000140B07C10: mov     rdx, [rsi+818h]
 * 0000000140B07C17: cmp     r13, rcx
 * 0000000140B07C1A: jnb     short loc_140B07C2B
 * 0000000140B07C1C: lea     r9d, [r11+20h]
 * 0000000140B07C20: prefetchnta byte ptr [rax]
 * 0000000140B07C23: add     rax, r9
 * 0000000140B07C26: cmp     rax, rcx
 * 0000000140B07C29: jb      short loc_140B07C20
 * 0000000140B07C2B: mov     eax, 4
 * 0000000140B07C30: mov     r9d, r11d
 * 0000000140B07C33: lea     r12d, [rax-3]
 * 0000000140B07C37: xor     rdx, [r8]
 * 0000000140B07C3A: mov     ecx, r10d
 * 0000000140B07C3D: rol     rdx, cl
 * 0000000140B07C40: add     r8, 8
 * 0000000140B07C44: add     r9d, r14d
 * 0000000140B07C47: sub     rax, r12
 * 0000000140B07C4A: jnz     short loc_140B07C37
 * 0000000140B07C4C: test    r9d, r9d
 * 0000000140B07C4F: jz      short loc_140B07C72
 * 0000000140B07C51: mov     edi, 0FFFFFFFFh
 * 0000000140B07C56: movzx   eax, byte ptr [r8]
 * 0000000140B07C5A: mov     ecx, r10d
 * 0000000140B07C5D: xor     rdx, rax
 * 0000000140B07C60: add     r8, r12
 * 0000000140B07C63: rol     rdx, cl
 * 0000000140B07C66: add     r9d, edi
 * 0000000140B07C69: jnz     short loc_140B07C56
 * 0000000140B07C6B: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B07C72: mov     rax, rdx
 * 0000000140B07C75: jmp     short loc_140B07C79
 * 0000000140B07C77: xor     edx, eax
 * 0000000140B07C79: shr     rax, 1Fh
 * 0000000140B07C7D: test    rax, rax
 * 0000000140B07C80: jnz     short loc_140B07C77
 * 0000000140B07C82: btr     edx, 1Fh
 * 0000000140B07C86: mov     [rbx+14h], edx
 * 0000000140B07C89: mov     rbx, rsi
 * 0000000140B07C8C: add     [rsi+828h], r11d
 * 0000000140B07C93: xor     r11d, r11d
 * 0000000140B07C96: mov     dword ptr [rsi+958h], 5
 * 0000000140B07CA0: jmp     short loc_140B07CA8
 * 0000000140B07CA2: mov     r12d, 1
 * 0000000140B07CA8: mov     eax, [rbx+958h]
 * 0000000140B07CAE: mov     r13d, 6
 * 0000000140B07CB4: mov     [rbp+0A70h+var_AE8], rbx
 * 0000000140B07CB8: mov     r14, rbx
 * 0000000140B07CBB: cmp     eax, r13d
 * 0000000140B07CBE: jge     loc_140B0804F
 * 0000000140B07CC4: test    dword ptr [rbx+990h], 40000000h
 * 0000000140B07CCE: mov     r13d, r11d
 * 0000000140B07CD1: mov     r15, [rbp+0A70h+var_AA8]
 * 0000000140B07CD5: mov     rsi, rbx
 * 0000000140B07CD8: mov     rax, [r15+20h]
 * 0000000140B07CDC: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B07CE3: jnz     loc_140B0803D
 * 0000000140B07CE9: mov     r14d, r11d
 * 0000000140B07CEC: mov     [rbp+0A70h+var_AE8], rbx
 * 0000000140B07CF0: cmp     [r15+30h], r11d
 * 0000000140B07CF4: jbe     loc_140B0803D
 * 0000000140B07CFA: mov     rdi, rax
 * 0000000140B07CFD: mov     eax, r14d
 * 0000000140B07D00: lea     rdx, [rbp+0A70h+var_7D0]
 * 0000000140B07D07: xor     r8d, r8d
 * 0000000140B07D0A: movsxd  rcx, dword ptr [rdi+rax*4]
 * 0000000140B07D0E: mov     rax, [rbx+260h]
 * 0000000140B07D15: sar     rcx, 4
 * 0000000140B07D19: add     rcx, rdi
 * 0000000140B07D1C: call    KeGuardDispatchICall
 * 0000000140B07D21: xor     r11d, r11d
 * 0000000140B07D24: test    rax, rax
 * 0000000140B07D27: jnz     short loc_140B07D2C
 * 0000000140B07D29: add     r13d, r12d
 * 0000000140B07D2C: add     r14d, r12d
 * 0000000140B07D2F: cmp     r14d, [r15+30h]
 * 0000000140B07D33: jb      short loc_140B07CFD
 * 0000000140B07D35: mov     [rbp+0A70h+var_AE8], rbx
 * 0000000140B07D39: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B07D40: test    r13d, r13d
 * 0000000140B07D43: jz      loc_140B0803D
 * 0000000140B07D49: mov     r14d, [rbx+7E4h]
 * 0000000140B07D50: mov     ecx, r13d
 * 0000000140B07D53: mov     r8d, [rbx+924h]
 * 0000000140B07D5A: shl     ecx, 4
 * 0000000140B07D5D: add     ecx, 30h ; '0'
 * 0000000140B07D60: add     ecx, r14d
 * 0000000140B07D63: cmp     ecx, [rbx+0A1Ch]
 * 0000000140B07D69: jbe     loc_140B07E45
 * 0000000140B07D6F: mov     edx, ecx
 * 0000000140B07D71: mov     rcx, rbx
 * 0000000140B07D74: call    sub_140B11020
 * 0000000140B07D79: xor     r11d, r11d
 * 0000000140B07D7C: mov     [rbp+0A70h+var_AE8], rax
 * 0000000140B07D80: mov     rsi, rax
 * 0000000140B07D83: test    rax, rax
 * 0000000140B07D86: jz      loc_140B083F2
 * 0000000140B07D8C: mov     ecx, [rbx+990h]
 * 0000000140B07D92: test    cl, 4
 * 0000000140B07D95: jnz     loc_140B07E3C
 * 0000000140B07D9B: mov     eax, [rbx+7E4h]
 * 0000000140B07DA1: and     ecx, 20000000h
 * 0000000140B07DA7: mov     r8, [rbx+7C8h]
 * 0000000140B07DAE: neg     ecx
 * 0000000140B07DB0: sbb     edx, edx
 * 0000000140B07DB2: and     edx, [rbx+924h]
 * 0000000140B07DB8: cmp     eax, 8
 * 0000000140B07DBB: jb      short loc_140B07DD2
 * 0000000140B07DBD: mov     ecx, eax
 * 0000000140B07DBF: shr     rcx, 3
 * 0000000140B07DC3: mov     [rbx], r11
 * 0000000140B07DC6: add     eax, 0FFFFFFF8h
 * 0000000140B07DC9: add     rbx, 8
 * 0000000140B07DCD: sub     rcx, r12
 * 0000000140B07DD0: jnz     short loc_140B07DC3
 * 0000000140B07DD2: test    eax, eax
 * 0000000140B07DD4: jz      short loc_140B07DE5
 * 0000000140B07DD6: mov     ecx, 0FFFFFFFFh
 * 0000000140B07DDB: mov     [rbx], r11b
 * 0000000140B07DDE: add     rbx, r12
 * 0000000140B07DE1: add     eax, ecx
 * 0000000140B07DE3: jnz     short loc_140B07DDB
 * 0000000140B07DE5: mov     ebx, [rsi+924h]
 * 0000000140B07DEB: mov     [rsi+924h], edx
 * 0000000140B07DF1: cmp     edx, 3
 * 0000000140B07DF4: jz      short loc_140B07E24
 * 0000000140B07DF6: test    dword ptr [rsi+990h], 10000000h
 * 0000000140B07E00: jnz     short loc_140B07E1B
 * 0000000140B07E02: test    edx, edx
 * 0000000140B07E04: jz      short loc_140B07E1B
 * 0000000140B07E06: mov     rax, [rsi+228h]
 * 0000000140B07E0D: lea     rcx, [r8-8]
 * 0000000140B07E11: mov     rdx, [rcx]
 * 0000000140B07E14: call    KeGuardDispatchICall
 * 0000000140B07E19: jmp     short loc_140B07E33
 * 0000000140B07E1B: mov     rax, [rsi+0F8h]
 * 0000000140B07E22: jmp     short loc_140B07E2B
 * 0000000140B07E24: mov     rax, [rsi+368h]
 * 0000000140B07E2B: mov     rcx, r8
 * 0000000140B07E2E: call    KeGuardDispatchICall
 * 0000000140B07E33: mov     [rsi+924h], ebx
 * 0000000140B07E39: xor     r11d, r11d
 * 0000000140B07E3C: and     dword ptr [rsi+990h], 0FFFFFFFBh
 * 0000000140B07E43: jmp     short loc_140B07E4F
 * 0000000140B07E45: mov     [rbp+0A70h+var_AE8], rbx
 * 0000000140B07E49: mov     [rbx+7E4h], ecx
 * 0000000140B07E4F: add     [rsi+80Ch], r12d
 * 0000000140B07E56: lea     rbx, [rsi+r14]
 * 0000000140B07E5A: mov     ecx, 30h ; '0'
 * 0000000140B07E5F: mov     rax, rbx
 * 0000000140B07E62: lea     edx, [rcx-2Ah]
 * 0000000140B07E65: mov     [rax], r11
 * 0000000140B07E68: add     ecx, 0FFFFFFF8h
 * 0000000140B07E6B: add     rax, 8
 * 0000000140B07E6F: sub     rdx, r12
 * 0000000140B07E72: jnz     short loc_140B07E65
 * 0000000140B07E74: test    ecx, ecx
 * 0000000140B07E76: jz      short loc_140B07E87
 * 0000000140B07E78: mov     edx, 0FFFFFFFFh
 * 0000000140B07E7D: mov     [rax], r11b
 * 0000000140B07E80: add     rax, r12
 * 0000000140B07E83: add     ecx, edx
 * 0000000140B07E85: jnz     short loc_140B07E7D
 * 0000000140B07E87: mov     dword ptr [rbx], 0Ah
 * 0000000140B07E8D: mov     [rbx+8], r11
 * 0000000140B07E91: mov     [rbx+10h], r11d
 * 0000000140B07E95: mov     rcx, [rsi+818h]
 * 0000000140B07E9C: mov     rax, rcx
 * 0000000140B07E9F: jmp     short loc_140B07EA3
 * 0000000140B07EA1: xor     ecx, eax
 * 0000000140B07EA3: shr     rax, 1Fh
 * 0000000140B07EA7: test    rax, rax
 * 0000000140B07EAA: jnz     short loc_140B07EA1
 * 0000000140B07EAC: btr     ecx, 1Fh
 * 0000000140B07EB0: lea     r15, [rbx+30h]
 * 0000000140B07EB4: mov     [rbx+14h], ecx
 * 0000000140B07EB7: mov     rcx, [rbp+0A70h+var_AA8]
 * 0000000140B07EBB: mov     [rbx+18h], r12d
 * 0000000140B07EBF: mov     r12d, r11d
 * 0000000140B07EC2: mov     [rbx+1Ch], r13d
 * 0000000140B07EC6: cmp     [rcx+30h], r11d
 * 0000000140B07ECA: jbe     loc_140B07FC2
 * 0000000140B07ED0: mov     rcx, [rbp+0A70h+arg_8]
 * 0000000140B07ED7: lea     rdx, [rbp+0A70h+var_7D0]
 * 0000000140B07EDE: mov     eax, r12d
 * 0000000140B07EE1: xor     r8d, r8d
 * 0000000140B07EE4: movsxd  r14, dword ptr [rcx+rax*4]
 * 0000000140B07EE8: mov     rax, [rsi+260h]
 * 0000000140B07EEF: sar     r14, 4
 * 0000000140B07EF3: add     r14, rcx
 * 0000000140B07EF6: mov     rcx, r14
 * 0000000140B07EF9: call    KeGuardDispatchICall
 * 0000000140B07EFE: xor     r11d, r11d
 * 0000000140B07F01: test    rax, rax
 * 0000000140B07F04: jnz     loc_140B07FA5
 * 0000000140B07F0A: lea     r11d, [rax+4]
 * 0000000140B07F0E: mov     r8, r14
 * 0000000140B07F11: add     [rsi+828h], r11d
 * 0000000140B07F18: lea     rcx, [r14+4]
 * 0000000140B07F1C: mov     r10d, [rsi+814h]
 * 0000000140B07F23: mov     rax, r14
 * 0000000140B07F26: mov     rdx, [rsi+818h]
 * 0000000140B07F2D: cmp     r14, rcx
 * 0000000140B07F30: jnb     short loc_140B07F41
 * 0000000140B07F32: lea     r9d, [r11+3Ch]
 * 0000000140B07F36: prefetchnta byte ptr [rax]
 * 0000000140B07F39: add     rax, r9
 * 0000000140B07F3C: cmp     rax, rcx
 * 0000000140B07F3F: jb      short loc_140B07F36
 * 0000000140B07F41: mov     r9d, r11d
 * 0000000140B07F44: mov     esi, 1
 * 0000000140B07F49: mov     edi, 0FFFFFFFFh
 * 0000000140B07F4E: movzx   eax, byte ptr [r8]
 * 0000000140B07F52: mov     ecx, r10d
 * 0000000140B07F55: xor     rdx, rax
 * 0000000140B07F58: add     r8, rsi
 * 0000000140B07F5B: rol     rdx, cl
 * 0000000140B07F5E: add     r9d, edi
 * 0000000140B07F61: jnz     short loc_140B07F4E
 * 0000000140B07F63: mov     rsi, [rbp+0A70h+var_AE8]
 * 0000000140B07F67: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B07F6E: mov     rax, rdx
 * 0000000140B07F71: jmp     short loc_140B07F75
 * 0000000140B07F73: xor     edx, eax
 * 0000000140B07F75: shr     rax, 1Fh
 * 0000000140B07F79: test    rax, rax
 * 0000000140B07F7C: jnz     short loc_140B07F73
 * 0000000140B07F7E: xor     edx, [r15]
 * 0000000140B07F81: mov     eax, 0FFFFFFFFh
 * 0000000140B07F86: btr     edx, 1Fh
 * 0000000140B07F8A: xor     [r15], edx
 * 0000000140B07F8D: mov     [r15+4], r11d
 * 0000000140B07F91: mov     [r15+8], r14
 * 0000000140B07F95: add     r15, 10h
 * 0000000140B07F99: add     r13d, eax
 * 0000000140B07F9C: jz      loc_140B0803A
 * 0000000140B07FA2: xor     r11d, r11d
 * 0000000140B07FA5: mov     rax, [rbp+0A70h+var_AA8]
 * 0000000140B07FA9: mov     edx, 1
 * 0000000140B07FAE: add     r12d, edx
 * 0000000140B07FB1: cmp     r12d, [rax+30h]
 * 0000000140B07FB5: jb      loc_140B07ED0
 * 0000000140B07FBB: test    r13d, r13d
 * 0000000140B07FBE: jz      short loc_140B0803D
 * 0000000140B07FC0: jmp     short loc_140B07FC7
 * 0000000140B07FC2: mov     edx, 1
 * 0000000140B07FC7: cmp     [rsi+8F8h], r11d
 * 0000000140B07FCE: jnz     short loc_140B08032
 * 0000000140B07FD0: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B07FDA: mov     rcx, 0B3B74BDEE4453415h
 * 0000000140B07FE4: add     rax, rsi
 * 0000000140B07FE7: add     rcx, rbx
 * 0000000140B07FEA: mov     [rsi+900h], rax
 * 0000000140B07FF1: mov     rax, rbx
 * 0000000140B07FF4: neg     rax
 * 0000000140B07FF7: sbb     rax, rax
 * 0000000140B07FFA: and     rax, rcx
 * 0000000140B07FFD: mov     [rsi+908h], rax
 * 0000000140B08004: test    rbx, rbx
 * 0000000140B08007: jz      short loc_140B0800E
 * 0000000140B08009: movsxd  rax, dword ptr [rbx]
 * 0000000140B0800C: jmp     short loc_140B08011
 * 0000000140B0800E: mov     rax, r11
 * 0000000140B08011: mov     [rsi+910h], rax
 * 0000000140B08018: mov     rcx, rsi
 * 0000000140B0801B: mov     [rsi+918h], r11
 * 0000000140B08022: mov     [rsi+8F8h], edx
 * 0000000140B08028: xor     edx, edx
 * 0000000140B0802A: call    $$ba
 * 0000000140B0802F: xor     r11d, r11d
 * 0000000140B08032: mov     rbx, rsi
 * 0000000140B08035: jmp     loc_140B083F2
 * 0000000140B0803A: xor     r11d, r11d
 * 0000000140B0803D: mov     r13d, 6
 * 0000000140B08043: mov     r14, rsi
 * 0000000140B08046: mov     [rsi+958h], r13d
 * 0000000140B0804D: jmp     short loc_140B08058
 * 0000000140B0804F: cmp     eax, 7
 * 0000000140B08052: jge     loc_140B08491
 * 0000000140B08058: test    dword ptr [r14+990h], 40000000h
 * 0000000140B08063: mov     r15d, r11d
 * 0000000140B08066: mov     rdx, [rsp+0B70h+var_B08]
 * 0000000140B0806B: mov     rax, [rdx]
 * 0000000140B0806E: mov     [rbp+0A70h+var_AC0], rax
 * 0000000140B08072: jnz     loc_140B08483
 * 0000000140B08078: mov     rax, [rsp+0B70h+var_B18]
 * 0000000140B0807D: mov     ebx, r11d
 * 0000000140B08080: cmp     [rax+30h], r11d
 * 0000000140B08084: jbe     loc_140B08483
 * 0000000140B0808A: mov     rdi, [rbp+0A70h+var_AC0]
 * 0000000140B0808E: mov     rsi, rax
 * 0000000140B08091: mov     eax, ebx
 * 0000000140B08093: lea     rdx, [rbp+0A70h+var_7C8]
 * 0000000140B0809A: xor     r8d, r8d
 * 0000000140B0809D: movsxd  rcx, dword ptr [rdi+rax*4]
 * 0000000140B080A1: mov     rax, [r14+260h]
 * 0000000140B080A8: sar     rcx, 4
 * 0000000140B080AC: add     rcx, rdi
 * 0000000140B080AF: call    KeGuardDispatchICall
 * 0000000140B080B4: xor     r11d, r11d
 * 0000000140B080B7: test    rax, rax
 * 0000000140B080BA: lea     eax, [r11+1]
 * 0000000140B080BE: jnz     short loc_140B080C3
 * 0000000140B080C0: add     r15d, eax
 * 0000000140B080C3: add     ebx, eax
 * 0000000140B080C5: cmp     ebx, [rsi+30h]
 * 0000000140B080C8: jb      short loc_140B08091
 * 0000000140B080CA: mov     rsi, [rbp+0A70h+var_AE8]
 * 0000000140B080CE: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B080D5: mov     dword ptr [rbp+0A70h+arg_8], r15d
 * 0000000140B080DC: test    r15d, r15d
 * 0000000140B080DF: jz      loc_140B08483
 * 0000000140B080E5: mov     r12d, [r14+7E4h]
 * 0000000140B080EC: mov     ecx, r15d
 * 0000000140B080EF: mov     r8d, [r14+924h]
 * 0000000140B080F6: shl     ecx, 4
 * 0000000140B080F9: add     ecx, 30h ; '0'
 * 0000000140B080FC: add     ecx, r12d
 * 0000000140B080FF: cmp     ecx, [r14+0A1Ch]
 * 0000000140B08106: jbe     loc_140B081E5
 * 0000000140B0810C: mov     edx, ecx
 * 0000000140B0810E: mov     rcx, r14
 * 0000000140B08111: call    sub_140B11020
 * 0000000140B08116: xor     r11d, r11d
 * 0000000140B08119: mov     rbx, rax
 * 0000000140B0811C: test    rax, rax
 * 0000000140B0811F: jz      loc_140B08032
 * 0000000140B08125: mov     ecx, [r14+990h]
 * 0000000140B0812C: test    cl, 4
 * 0000000140B0812F: jnz     loc_140B081DC
 * 0000000140B08135: mov     eax, [r14+7E4h]
 * 0000000140B0813C: lea     r9d, [r11+1]
 * 0000000140B08140: mov     r8, [r14+7C8h]
 * 0000000140B08147: and     ecx, 20000000h
 * 0000000140B0814D: neg     ecx
 * 0000000140B0814F: sbb     edx, edx
 * 0000000140B08151: and     edx, [r14+924h]
 * 0000000140B08158: cmp     eax, 8
 * 0000000140B0815B: jb      short loc_140B08172
 * 0000000140B0815D: mov     ecx, eax
 * 0000000140B0815F: shr     rcx, 3
 * 0000000140B08163: mov     [r14], r11
 * 0000000140B08166: add     eax, 0FFFFFFF8h
 * 0000000140B08169: add     r14, 8
 * 0000000140B0816D: sub     rcx, r9
 * 0000000140B08170: jnz     short loc_140B08163
 * 0000000140B08172: test    eax, eax
 * 0000000140B08174: jz      short loc_140B08185
 * 0000000140B08176: mov     ecx, 0FFFFFFFFh
 * 0000000140B0817B: mov     [r14], r11b
 * 0000000140B0817E: add     r14, r9
 * 0000000140B08181: add     eax, ecx
 * 0000000140B08183: jnz     short loc_140B0817B
 * 0000000140B08185: mov     esi, [rbx+924h]
 * 0000000140B0818B: mov     [rbx+924h], edx
 * 0000000140B08191: cmp     edx, 3
 * 0000000140B08194: jz      short loc_140B081C4
 * 0000000140B08196: test    dword ptr [rbx+990h], 10000000h
 * 0000000140B081A0: jnz     short loc_140B081BB
 * 0000000140B081A2: test    edx, edx
 * 0000000140B081A4: jz      short loc_140B081BB
 * 0000000140B081A6: mov     rax, [rbx+228h]
 * 0000000140B081AD: lea     rcx, [r8-8]
 * 0000000140B081B1: mov     rdx, [rcx]
 * 0000000140B081B4: call    KeGuardDispatchICall
 * 0000000140B081B9: jmp     short loc_140B081D3
 * 0000000140B081BB: mov     rax, [rbx+0F8h]
 * 0000000140B081C2: jmp     short loc_140B081CB
 * 0000000140B081C4: mov     rax, [rbx+368h]
 * 0000000140B081CB: mov     rcx, r8
 * 0000000140B081CE: call    KeGuardDispatchICall
 * 0000000140B081D3: mov     [rbx+924h], esi
 * 0000000140B081D9: xor     r11d, r11d
 * 0000000140B081DC: and     dword ptr [rbx+990h], 0FFFFFFFBh
 * 0000000140B081E3: jmp     short loc_140B081EF
 * 0000000140B081E5: mov     rbx, r14
 * 0000000140B081E8: mov     [r14+7E4h], ecx
 * 0000000140B081EF: mov     r8d, 1
 * 0000000140B081F5: lea     rsi, [rbx+r12]
 * 0000000140B081F9: add     [rbx+80Ch], r8d
 * 0000000140B08200: mov     rax, rsi
 * 0000000140B08203: mov     [rsp+0B70h+var_AF8], rsi
 * 0000000140B08208: mov     rdx, r13
 * 0000000140B0820B: lea     ecx, [r8+2Fh]
 * 0000000140B0820F: mov     [rax], r11
 * 0000000140B08212: add     ecx, 0FFFFFFF8h
 * 0000000140B08215: add     rax, 8
 * 0000000140B08219: sub     rdx, r8
 * 0000000140B0821C: jnz     short loc_140B0820F
 * 0000000140B0821E: test    ecx, ecx
 * 0000000140B08220: jz      short loc_140B08231
 * 0000000140B08222: mov     edx, 0FFFFFFFFh
 * 0000000140B08227: mov     [rax], r11b
 * 0000000140B0822A: add     rax, r8
 * 0000000140B0822D: add     ecx, edx
 * 0000000140B0822F: jnz     short loc_140B08227
 * 0000000140B08231: mov     dword ptr [rsi], 0Ah
 * 0000000140B08237: mov     [rsi+8], r11
 * 0000000140B0823B: mov     [rsi+10h], r11d
 * 0000000140B0823F: mov     rcx, [rbx+818h]
 * 0000000140B08246: mov     rax, rcx
 * 0000000140B08249: jmp     short loc_140B0824D
 * 0000000140B0824B: xor     ecx, eax
 * 0000000140B0824D: shr     rax, 1Fh
 * 0000000140B08251: test    rax, rax
 * 0000000140B08254: jnz     short loc_140B0824B
 * 0000000140B08256: mov     rax, [rsp+0B70h+var_B18]
 * 0000000140B0825B: lea     r13, [rsi+30h]
 * 0000000140B0825F: btr     ecx, 1Fh
 * 0000000140B08263: mov     r14, rbx
 * 0000000140B08266: mov     [rsi+14h], ecx
 * 0000000140B08269: mov     r12d, r11d
 * 0000000140B0826C: mov     [rsi+18h], r8d
 * 0000000140B08270: mov     [rsi+1Ch], r15d
 * 0000000140B08274: cmp     [rax+30h], r11d
 * 0000000140B08278: jbe     loc_140B0837E
 * 0000000140B0827E: mov     rcx, [rbp+0A70h+var_AC0]
 * 0000000140B08282: lea     rdx, [rbp+0A70h+var_7C8]
 * 0000000140B08289: mov     eax, r12d
 * 0000000140B0828C: xor     r8d, r8d
 * 0000000140B0828F: movsxd  r15, dword ptr [rcx+rax*4]
 * 0000000140B08293: mov     rax, [rbx+260h]
 * 0000000140B0829A: sar     r15, 4
 * 0000000140B0829E: add     r15, rcx
 * 0000000140B082A1: mov     rcx, r15
 * 0000000140B082A4: call    KeGuardDispatchICall
 * 0000000140B082A9: xor     r11d, r11d
 * 0000000140B082AC: test    rax, rax
 * 0000000140B082AF: jnz     loc_140B083C5
 * 0000000140B082B5: lea     r11d, [rax+4]
 * 0000000140B082B9: mov     r8, r15
 * 0000000140B082BC: add     [rbx+828h], r11d
 * 0000000140B082C3: lea     rcx, [r15+4]
 * 0000000140B082C7: mov     r10d, [rbx+814h]
 * 0000000140B082CE: mov     rax, r15
 * 0000000140B082D1: mov     rdx, [rbx+818h]
 * 0000000140B082D8: cmp     r15, rcx
 * 0000000140B082DB: jnb     short loc_140B082EC
 * 0000000140B082DD: lea     r9d, [r11+3Ch]
 * 0000000140B082E1: prefetchnta byte ptr [rax]
 * 0000000140B082E4: add     rax, r9
 * 0000000140B082E7: cmp     rax, rcx
 * 0000000140B082EA: jb      short loc_140B082E1
 * 0000000140B082EC: mov     r9d, r11d
 * 0000000140B082EF: mov     edi, 1
 * 0000000140B082F4: mov     esi, 0FFFFFFFFh
 * 0000000140B082F9: movzx   eax, byte ptr [r8]
 * 0000000140B082FD: mov     ecx, r10d
 * 0000000140B08300: xor     rdx, rax
 * 0000000140B08303: add     r8, rdi
 * 0000000140B08306: rol     rdx, cl
 * 0000000140B08309: add     r9d, esi
 * 0000000140B0830C: jnz     short loc_140B082F9
 * 0000000140B0830E: mov     rsi, [rsp+0B70h+var_AF8]
 * 0000000140B08313: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0831A: mov     rax, rdx
 * 0000000140B0831D: jmp     short loc_140B08321
 * 0000000140B0831F: xor     edx, eax
 * 0000000140B08321: shr     rax, 1Fh
 * 0000000140B08325: test    rax, rax
 * 0000000140B08328: jnz     short loc_140B0831F
 * 0000000140B0832A: xor     edx, [r13+0]
 * 0000000140B0832E: mov     ecx, 0FFFFFFFFh
 * 0000000140B08333: mov     eax, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B08339: btr     edx, 1Fh
 * 0000000140B0833D: xor     [r13+0], edx
 * 0000000140B08341: mov     [r13+4], r11d
 * 0000000140B08345: mov     [r13+8], r15
 * 0000000140B08349: add     r13, 10h
 * 0000000140B0834D: add     eax, ecx
 * 0000000140B0834F: mov     dword ptr [rbp+0A70h+arg_8], eax
 * 0000000140B08355: jz      loc_140B08483
 * 0000000140B0835B: xor     r11d, r11d
 * 0000000140B0835E: mov     rcx, [rsp+0B70h+var_B18]
 * 0000000140B08363: mov     r8d, 1
 * 0000000140B08369: add     r12d, r8d
 * 0000000140B0836C: cmp     r12d, [rcx+30h]
 * 0000000140B08370: jb      loc_140B0827E
 * 0000000140B08376: test    eax, eax
 * 0000000140B08378: jz      loc_140B08483
 * 0000000140B0837E: cmp     [rbx+8F8h], r11d
 * 0000000140B08385: jnz     short loc_140B083F2
 * 0000000140B08387: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B08391: mov     rcx, 0B3B74BDEE4453415h
 * 0000000140B0839B: add     rax, rbx
 * 0000000140B0839E: add     rcx, rsi
 * 0000000140B083A1: mov     [rbx+900h], rax
 * 0000000140B083A8: mov     rax, rsi
 * 0000000140B083AB: neg     rax
 * 0000000140B083AE: sbb     rax, rax
 * 0000000140B083B1: and     rax, rcx
 * 0000000140B083B4: mov     [rbx+908h], rax
 * 0000000140B083BB: test    rsi, rsi
 * 0000000140B083BE: jz      short loc_140B083CD
 * 0000000140B083C0: movsxd  rax, dword ptr [rsi]
 * 0000000140B083C3: jmp     short loc_140B083D0
 * 0000000140B083C5: mov     eax, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B083CB: jmp     short loc_140B0835E
 * 0000000140B083CD: mov     rax, r11
 * 0000000140B083D0: mov     [rbx+910h], rax
 * 0000000140B083D7: xor     edx, edx
 * 0000000140B083D9: mov     [rbx+918h], r11
 * 0000000140B083E0: mov     rcx, rbx
 * 0000000140B083E3: mov     [rbx+8F8h], r8d
 * 0000000140B083EA: call    $$ba
 * 0000000140B083EF: xor     r11d, r11d
 * 0000000140B083F2: mov     rsi, rbx
 * 0000000140B083F5: mov     r13d, 1
 * 0000000140B083FB: bt      dword ptr [rbx+990h], 0Fh
 * 0000000140B08403: jb      short loc_140B08412
 * 0000000140B08405: cmp     [rbx+8F8h], r11d
 * 0000000140B0840C: jnz     loc_140B0AE64
 * 0000000140B08412: mov     r14, [rbx+980h]
 * 0000000140B08419: lea     rdx, [rbp+0A70h+var_680]
 * 0000000140B08420: mov     [rbx+980h], r11
 * 0000000140B08427: mov     rcx, r14
 * 0000000140B0842A: mov     rax, [rbx+298h]
 * 0000000140B08431: call    KeGuardDispatchICall
 * 0000000140B08436: mov     eax, [rbx+990h]
 * 0000000140B0843C: test    r13b, al
 * 0000000140B0843F: jz      loc_140B0AC2F
 * 0000000140B08445: and     eax, 0FFFFFFFEh
 * 0000000140B08448: mov     rcx, r14
 * 0000000140B0844B: mov     [rbx+990h], eax
 * 0000000140B08451: mov     rax, [rbx+280h]
 * 0000000140B08458: call    KeGuardDispatchICall
 * 0000000140B0845D: mov     r14, rax
 * 0000000140B08460: test    rax, rax
 * 0000000140B08463: jz      loc_140B0AC1D
 * 0000000140B08469: mov     rax, [rbx+2A0h]
 * 0000000140B08470: mov     rcx, r14
 * 0000000140B08473: call    KeGuardDispatchICall
 * 0000000140B08478: mov     [rbx+970h], eax
 * 0000000140B0847E: jmp     loc_140B0AC38
 * 0000000140B08483: mov     rbx, r14
 * 0000000140B08486: mov     dword ptr [r14+958h], 7
 * 0000000140B08491: mov     r14d, 0FFFFFFFFh
 * 0000000140B08497: mov     rax, [rbx+568h]
 * 0000000140B0849E: lea     rdx, [rbp+0A70h+var_1F8]
 * 0000000140B084A5: mov     rsi, rbx
 * 0000000140B084A8: mov     [rsp+0B70h+var_B10], rbx
 * 0000000140B084AD: mov     [rbp+0A70h+var_A58], rbx
 * 0000000140B084B1: mov     rcx, [rax+20h]
 * 0000000140B084B5: mov     rax, [rbx+200h]
 * 0000000140B084BC: mov     [rbp+0A70h+var_AC0], rcx
 * 0000000140B084C0: call    KeGuardDispatchICall
 * 0000000140B084C5: mov     r13d, [rbp+0A70h+var_1E4]
 * 0000000140B084CC: mov     r12, rax
 * 0000000140B084CF: mov     [rsp+0B70h+var_AF8], rax
 * 0000000140B084D4: xor     r11d, r11d
 * 0000000140B084D7: mov     rax, [rbp+0A70h+var_1F0]
 * 0000000140B084DE: mov     dword ptr [rbp+0A70h+arg_8], r13d
 * 0000000140B084E5: mov     [rbp+0A70h+var_A98], rax
 * 0000000140B084E9: test    rax, rax
 * 0000000140B084EC: jnz     short loc_140B0851F
 * 0000000140B084EE: test    dword ptr [rbx+990h], 200000h
 * 0000000140B084F8: jz      loc_140B0D22E
 * 0000000140B084FE: jmp     loc_140B083F5
 * 0000000140B08503: sub     ecx, 7
 * 0000000140B08506: jz      short loc_140B08497
 * 0000000140B08508: sub     ecx, 1
 * 0000000140B0850B: jz      loc_140B0A522
 * 0000000140B08511: cmp     ecx, 1
 * 0000000140B08514: jz      loc_140B0A73C
 * 0000000140B0851A: jmp     loc_140B0ABC5
 * 0000000140B0851F: mov     ecx, 4
 * 0000000140B08524: mov     [rbp+0A70h+var_9C8], r11
 * 0000000140B0852B: lea     rax, [rbp+0A70h+var_9C0]
 * 0000000140B08532: lea     r15d, [rcx-3]
 * 0000000140B08536: mov     [rax], r11b
 * 0000000140B08539: add     rax, r15
 * 0000000140B0853C: add     ecx, r14d
 * 0000000140B0853F: jnz     short loc_140B08536
 * 0000000140B08541: xor     edx, edx
 * 0000000140B08543: cmp     [rbx+80Ch], edx
 * 0000000140B08549: jbe     loc_140B08744
 * 0000000140B0854F: mov     ecx, [rbp+0A70h+var_9C0]
 * 0000000140B08555: mov     r9d, dword ptr [rbp+0A70h+var_9C8+4]
 * 0000000140B0855C: mov     r10d, dword ptr [rbp+0A70h+var_9C8]
 * 0000000140B08563: mov     rax, [rbx+0A78h]
 * 0000000140B0856A: mov     r14, rbx
 * 0000000140B0856D: test    rax, rax
 * 0000000140B08570: mov     r15d, edx
 * 0000000140B08573: cmovnz  r14, rax
 * 0000000140B08577: mov     r8d, [r14+808h]
 * 0000000140B0857E: add     r8, r14
 * 0000000140B08581: test    r10d, r10d
 * 0000000140B08584: jz      short loc_140B08594
 * 0000000140B08586: cmp     r9d, r11d
 * 0000000140B08589: ja      short loc_140B08594
 * 0000000140B0858B: mov     r8d, ecx
 * 0000000140B0858E: mov     r15d, r9d
 * 0000000140B08591: add     r8, r14
 * 0000000140B08594: cmp     r15d, r11d
 * 0000000140B08597: jz      loc_140B086BC
 * 0000000140B0859D: mov     r9d, r11d
 * 0000000140B085A0: mov     r13d, 2
 * 0000000140B085A6: sub     r9d, r15d
 * 0000000140B085A9: mov     r12, 0AAAAAAAAAAAAAAABh
 * 0000000140B085B3: mov     r15d, r11d
 * 0000000140B085B6: mov     ecx, [r8]
 * 0000000140B085B9: cmp     ecx, 1Ch
 * 0000000140B085BC: jg      short loc_140B08611
 * 0000000140B085BE: jz      short loc_140B0860A
 * 0000000140B085C0: sub     ecx, 1
 * 0000000140B085C3: jz      short loc_140B0862C
 * 0000000140B085C5: sub     ecx, 6
 * 0000000140B085C8: jz      short loc_140B085F8
 * 0000000140B085CA: sub     ecx, 1
 * 0000000140B085CD: jz      short loc_140B085E8
 * 0000000140B085CF: sub     ecx, r13d
 * 0000000140B085D2: jz      short loc_140B085D9
 * 0000000140B085D4: cmp     ecx, r13d
 * 0000000140B085D7: jmp     short loc_140B08623
 * 0000000140B085D9: mov     eax, [r8+1Ch]
 * 0000000140B085DD: add     eax, 3
 * 0000000140B085E0: shl     eax, 4
 * 0000000140B085E3: jmp     loc_140B08696
 * 0000000140B085E8: movzx   eax, word ptr [r8+20h]
 * 0000000140B085ED: add     eax, 37h ; '7'
 * 0000000140B085F0: and     eax, 0FFFFFFF8h
 * 0000000140B085F3: jmp     loc_140B08696
 * 0000000140B085F8: mov     eax, [r8+18h]
 * 0000000140B085FC: add     eax, r13d
 * 0000000140B085FF: lea     eax, [rax+rax*2]
 * 0000000140B08602: shl     eax, 3
 * 0000000140B08605: jmp     loc_140B08696
 * 0000000140B0860A: movzx   eax, word ptr [r8+28h]
 * 0000000140B0860F: jmp     short loc_140B085ED
 * 0000000140B08611: sub     ecx, 1Eh
 * 0000000140B08614: jz      short loc_140B0866B
 * 0000000140B08616: sub     ecx, 3
 * 0000000140B08619: jz      short loc_140B08643
 * 0000000140B0861B: sub     ecx, 1
 * 0000000140B0861E: jz      short loc_140B08643
 * 0000000140B08620: cmp     ecx, 9
 * 0000000140B08623: jz      short loc_140B0862C
 * 0000000140B08625: mov     eax, 30h ; '0'
 * 0000000140B0862A: jmp     short loc_140B08696
 * 0000000140B0862C: mov     ecx, [r8+10h]
 * 0000000140B08630: mov     rax, r12
 * 0000000140B08633: mul     rcx
 * 0000000140B08636: shr     rdx, 3
 * 0000000140B0863A: lea     eax, ds:30h[rdx*4]
 * 0000000140B08641: jmp     short loc_140B08696
 * 0000000140B08643: mov     ecx, [r8+20h]
 * 0000000140B08647: mov     edx, [r8+28h]
 * 0000000140B0864B: and     ecx, 0FFFh
 * 0000000140B08651: add     rdx, 0FFFh
 * 0000000140B08658: add     rdx, rcx
 * 0000000140B0865B: shr     rdx, 0Ch
 * 0000000140B0865F: lea     eax, [rdx+rdx*4]
 * 0000000140B08662: lea     eax, ds:30h[rax*4]
 * 0000000140B08669: jmp     short loc_140B08696
 * 0000000140B0866B: mov     eax, [r8+24h]
 * 0000000140B0866F: lea     ecx, [rax-1]
 * 0000000140B08672: neg     eax
 * 0000000140B08674: sbb     eax, eax
 * 0000000140B08676: and     ecx, eax
 * 0000000140B08678: mov     rax, r12
 * 0000000140B0867B: mul     rcx
 * 0000000140B0867E: movzx   eax, word ptr [r8+28h]
 * 0000000140B08683: shr     rdx, 3
 * 0000000140B08687: add     edx, 7
 * 0000000140B0868A: and     edx, 0FFFFFFF8h
 * 0000000140B0868D: add     eax, r13d
 * 0000000140B08690: lea     eax, [rax+rax*2]
 * 0000000140B08693: lea     eax, [rdx+rax*8]
 * 0000000140B08696: add     r8, rax
 * 0000000140B08699: mov     eax, 1
 * 0000000140B0869E: sub     r9, rax
 * 0000000140B086A1: jnz     loc_140B085B6
 * 0000000140B086A7: mov     r12, [rsp+0B70h+var_AF8]
 * 0000000140B086AC: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B086B3: mov     r13d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B086BA: jmp     short loc_140B086C1
 * 0000000140B086BC: mov     eax, 1
 * 0000000140B086C1: mov     ecx, r8d
 * 0000000140B086C4: mov     dword ptr [rbp+0A70h+var_9C8], eax
 * 0000000140B086CA: sub     ecx, r14d
 * 0000000140B086CD: mov     dword ptr [rbp+0A70h+var_9C8+4], r15d
 * 0000000140B086D4: mov     [rbp+0A70h+var_9C0], ecx
 * 0000000140B086DA: mov     r10d, eax
 * 0000000140B086DD: movsxd  rdx, dword ptr [r8]
 * 0000000140B086E0: mov     r9d, r15d
 * 0000000140B086E3: cmp     edx, 2Bh ; '+'
 * 0000000140B086E6: ja      short loc_140B08704
 * 0000000140B086E8: mov     r14, 80000001002h
 * 0000000140B086F2: bt      r14, rdx
 * 0000000140B086F6: jnb     short loc_140B08704
 * 0000000140B086F8: cmp     [r8+8], r12
 * 0000000140B086FC: jnz     short loc_140B08704
 * 0000000140B086FE: cmp     [r8+10h], r13d
 * 0000000140B08702: jz      short loc_140B0872F
 * 0000000140B08704: lea     eax, [rdx-21h]
 * 0000000140B08707: mov     r15d, 1
 * 0000000140B0870D: cmp     eax, r15d
 * 0000000140B08710: ja      short loc_140B0871C
 * 0000000140B08712: mov     rax, [rbp+0A70h+var_A98]
 * 0000000140B08716: cmp     [r8+20h], rax
 * 0000000140B0871A: jz      short loc_140B08735
 * 0000000140B0871C: add     r11d, r15d
 * 0000000140B0871F: cmp     r11d, [rbx+80Ch]
 * 0000000140B08726: jnb     short loc_140B08744
 * 0000000140B08728: xor     edx, edx
 * 0000000140B0872A: jmp     loc_140B08563
 * 0000000140B0872F: mov     r15d, 1
 * 0000000140B08735: test    r8, r8
 * 0000000140B08738: jz      short loc_140B08744
 * 0000000140B0873A: mov     [rsp+0B70h+var_B10], rbx
 * 0000000140B0873F: jmp     loc_140B0A4BF
 * 0000000140B08744: mov     r13, [rbp+0A70h+var_AC0]
 * 0000000140B08748: lea     rdx, [rbp+0A70h+var_1E0]
 * 0000000140B0874F: mov     rax, [rbx+200h]
 * 0000000140B08756: mov     rcx, r13
 * 0000000140B08759: mov     [rbp+0A70h+var_A40], rbx
 * 0000000140B0875D: call    KeGuardDispatchICall
 * 0000000140B08762: mov     r14, [rbp+0A70h+var_1D8]
 * 0000000140B08769: xor     r11d, r11d
 * 0000000140B0876C: mov     r12d, [rbp+0A70h+var_1CC]
 * 0000000140B08773: mov     [rsp+0B70h+var_B20], rax
 * 0000000140B08778: mov     dword ptr [rbp+0A70h+arg_8], r12d
 * 0000000140B0877F: mov     [rbp+0A70h+var_A88], r12d
 * 0000000140B08783: mov     [rbp+0A70h+var_AC8], r14
 * 0000000140B08787: test    r14, r14
 * 0000000140B0878A: jnz     short loc_140B087AA
 * 0000000140B0878C: test    dword ptr [rbx+990h], 200000h
 * 0000000140B08796: jz      loc_140B0D25A
 * 0000000140B0879C: mov     eax, 0C000007Bh
 * 0000000140B087A1: lea     r13d, [r14+1]
 * 0000000140B087A5: jmp     loc_140B0995F
 * 0000000140B087AA: mov     [rbp+0A70h+var_9B8], r11
 * 0000000140B087B1: lea     rax, [rbp+0A70h+var_9B0]
 * 0000000140B087B8: mov     ecx, 4
 * 0000000140B087BD: mov     edx, 0FFFFFFFFh
 * 0000000140B087C2: mov     [rax], r11b
 * 0000000140B087C5: add     rax, r15
 * 0000000140B087C8: add     ecx, edx
 * 0000000140B087CA: jnz     short loc_140B087C2
 * 0000000140B087CC: xor     edx, edx
 * 0000000140B087CE: cmp     [rbx+80Ch], edx
 * 0000000140B087D4: jbe     loc_140B089CC
 * 0000000140B087DA: mov     ecx, [rbp+0A70h+var_9B0]
 * 0000000140B087E0: mov     r9d, dword ptr [rbp+0A70h+var_9B8+4]
 * 0000000140B087E7: mov     r10d, dword ptr [rbp+0A70h+var_9B8]
 * 0000000140B087EE: mov     rax, [rbx+0A78h]
 * 0000000140B087F5: mov     r14, rbx
 * 0000000140B087F8: test    rax, rax
 * 0000000140B087FB: mov     r15d, edx
 * 0000000140B087FE: cmovnz  r14, rax
 * 0000000140B08802: mov     r8d, [r14+808h]
 * 0000000140B08809: add     r8, r14
 * 0000000140B0880C: test    r10d, r10d
 * 0000000140B0880F: jz      short loc_140B0881F
 * 0000000140B08811: cmp     r9d, r11d
 * 0000000140B08814: ja      short loc_140B0881F
 * 0000000140B08816: mov     r8d, ecx
 * 0000000140B08819: mov     r15d, r9d
 * 0000000140B0881C: add     r8, r14
 * 0000000140B0881F: cmp     r15d, r11d
 * 0000000140B08822: jz      loc_140B08941
 * 0000000140B08828: mov     r9d, r11d
 * 0000000140B0882B: mov     edi, 2
 * 0000000140B08830: sub     r9d, r15d
 * 0000000140B08833: mov     r12, 0AAAAAAAAAAAAAAABh
 * 0000000140B0883D: mov     r15d, r11d
 * 0000000140B08840: mov     ecx, [r8]
 * 0000000140B08843: cmp     ecx, 1Ch
 * 0000000140B08846: jg      short loc_140B08898
 * 0000000140B08848: jz      short loc_140B08891
 * 0000000140B0884A: sub     ecx, 1
 * 0000000140B0884D: jz      short loc_140B088B3
 * 0000000140B0884F: sub     ecx, 6
 * 0000000140B08852: jz      short loc_140B08880
 * 0000000140B08854: sub     ecx, 1
 * 0000000140B08857: jz      short loc_140B08870
 * 0000000140B08859: sub     ecx, edi
 * 0000000140B0885B: jz      short loc_140B08861
 * 0000000140B0885D: cmp     ecx, edi
 * 0000000140B0885F: jmp     short loc_140B088AA
 * 0000000140B08861: mov     eax, [r8+1Ch]
 * 0000000140B08865: add     eax, 3
 * 0000000140B08868: shl     eax, 4
 * 0000000140B0886B: jmp     loc_140B0891C
 * 0000000140B08870: movzx   eax, word ptr [r8+20h]
 * 0000000140B08875: add     eax, 37h ; '7'
 * 0000000140B08878: and     eax, 0FFFFFFF8h
 * 0000000140B0887B: jmp     loc_140B0891C
 * 0000000140B08880: mov     eax, [r8+18h]
 * 0000000140B08884: add     eax, edi
 * 0000000140B08886: lea     eax, [rax+rax*2]
 * 0000000140B08889: shl     eax, 3
 * 0000000140B0888C: jmp     loc_140B0891C
 * 0000000140B08891: movzx   eax, word ptr [r8+28h]
 * 0000000140B08896: jmp     short loc_140B08875
 * 0000000140B08898: sub     ecx, 1Eh
 * 0000000140B0889B: jz      short loc_140B088F2
 * 0000000140B0889D: sub     ecx, 3
 * 0000000140B088A0: jz      short loc_140B088CA
 * 0000000140B088A2: sub     ecx, 1
 * 0000000140B088A5: jz      short loc_140B088CA
 * 0000000140B088A7: cmp     ecx, 9
 * 0000000140B088AA: jz      short loc_140B088B3
 * 0000000140B088AC: mov     eax, 30h ; '0'
 * 0000000140B088B1: jmp     short loc_140B0891C
 * 0000000140B088B3: mov     ecx, [r8+10h]
 * 0000000140B088B7: mov     rax, r12
 * 0000000140B088BA: mul     rcx
 * 0000000140B088BD: shr     rdx, 3
 * 0000000140B088C1: lea     eax, ds:30h[rdx*4]
 * 0000000140B088C8: jmp     short loc_140B0891C
 * 0000000140B088CA: mov     ecx, [r8+20h]
 * 0000000140B088CE: mov     edx, [r8+28h]
 * 0000000140B088D2: and     ecx, 0FFFh
 * 0000000140B088D8: add     rdx, 0FFFh
 * 0000000140B088DF: add     rdx, rcx
 * 0000000140B088E2: shr     rdx, 0Ch
 * 0000000140B088E6: lea     eax, [rdx+rdx*4]
 * 0000000140B088E9: lea     eax, ds:30h[rax*4]
 * 0000000140B088F0: jmp     short loc_140B0891C
 * 0000000140B088F2: mov     eax, [r8+24h]
 * 0000000140B088F6: lea     ecx, [rax-1]
 * 0000000140B088F9: neg     eax
 * 0000000140B088FB: sbb     eax, eax
 * 0000000140B088FD: and     ecx, eax
 * 0000000140B088FF: mov     rax, r12
 * 0000000140B08902: mul     rcx
 * 0000000140B08905: movzx   eax, word ptr [r8+28h]
 * 0000000140B0890A: shr     rdx, 3
 * 0000000140B0890E: add     edx, 7
 * 0000000140B08911: and     edx, 0FFFFFFF8h
 * 0000000140B08914: add     eax, edi
 * 0000000140B08916: lea     eax, [rax+rax*2]
 * 0000000140B08919: lea     eax, [rdx+rax*8]
 * 0000000140B0891C: add     r8, rax
 * 0000000140B0891F: mov     eax, 1
 * 0000000140B08924: sub     r9, rax
 * 0000000140B08927: jnz     loc_140B08840
 * 0000000140B0892D: mov     r12d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B08934: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0893B: mov     r13, [rbp+0A70h+var_AC0]
 * 0000000140B0893F: jmp     short loc_140B08946
 * 0000000140B08941: mov     eax, 1
 * 0000000140B08946: mov     ecx, r8d
 * 0000000140B08949: mov     dword ptr [rbp+0A70h+var_9B8], eax
 * 0000000140B0894F: sub     ecx, r14d
 * 0000000140B08952: mov     dword ptr [rbp+0A70h+var_9B8+4], r15d
 * 0000000140B08959: mov     [rbp+0A70h+var_9B0], ecx
 * 0000000140B0895F: mov     r10d, eax
 * 0000000140B08962: movsxd  rdx, dword ptr [r8]
 * 0000000140B08965: mov     r9d, r15d
 * 0000000140B08968: cmp     edx, 2Bh ; '+'
 * 0000000140B0896B: ja      short loc_140B0898E
 * 0000000140B0896D: mov     r14, 80000001002h
 * 0000000140B08977: bt      r14, rdx
 * 0000000140B0897B: jnb     short loc_140B0898E
 * 0000000140B0897D: mov     rax, [rsp+0B70h+var_B20]
 * 0000000140B08982: cmp     [r8+8], rax
 * 0000000140B08986: jnz     short loc_140B0898E
 * 0000000140B08988: cmp     [r8+10h], r12d
 * 0000000140B0898C: jz      short loc_140B089B9
 * 0000000140B0898E: mov     r14, [rbp+0A70h+var_AC8]
 * 0000000140B08992: lea     eax, [rdx-21h]
 * 0000000140B08995: mov     r15d, 1
 * 0000000140B0899B: cmp     eax, r15d
 * 0000000140B0899E: ja      short loc_140B089A6
 * 0000000140B089A0: cmp     [r8+20h], r14
 * 0000000140B089A4: jz      short loc_140B089C3
 * 0000000140B089A6: add     r11d, r15d
 * 0000000140B089A9: cmp     r11d, [rbx+80Ch]
 * 0000000140B089B0: jnb     short loc_140B089CC
 * 0000000140B089B2: xor     edx, edx
 * 0000000140B089B4: jmp     loc_140B087EE
 * 0000000140B089B9: mov     r14, [rbp+0A70h+var_AC8]
 * 0000000140B089BD: mov     r15d, 1
 * 0000000140B089C3: test    r8, r8
 * 0000000140B089C6: jnz     loc_140B0A42B
 * 0000000140B089CC: mov     rax, [rbx+2A8h]
 * 0000000140B089D3: mov     rcx, r13
 * 0000000140B089D6: call    KeGuardDispatchICall
 * 0000000140B089DB: mov     ecx, [rbp+0A70h+var_A88]
 * 0000000140B089DE: xor     r13d, r13d
 * 0000000140B089E1: mov     [rbp+0A70h+var_AD0], eax
 * 0000000140B089E4: mov     dword ptr [rbp+0A70h+var_AD8], ecx
 * 0000000140B089E7: test    eax, eax
 * 0000000140B089E9: jz      loc_140B0A42E
 * 0000000140B089EF: mov     rsi, [rbx+528h]
 * 0000000140B089F6: cli
 * 0000000140B089F7: mov     rcx, gs:20h
 * 0000000140B08A00: mov     rax, [rbx+650h]
 * 0000000140B08A07: mov     rcx, [rcx+rax]
 * 0000000140B08A0B: sti
 * 0000000140B08A0C: mov     rax, [rbx+168h]
 * 0000000140B08A13: call    KeGuardDispatchICall
 * 0000000140B08A18: mov     rcx, [rbx+530h]
 * 0000000140B08A1F: mov     dl, r15b
 * 0000000140B08A22: mov     rax, [rbx+0E8h]
 * 0000000140B08A29: call    KeGuardDispatchICall
 * 0000000140B08A2E: mov     rdx, [rsi]
 * 0000000140B08A31: cmp     rdx, rsi
 * 0000000140B08A34: jz      short loc_140B08A7F
 * 0000000140B08A36: mov     r9, [rbx+750h]
 * 0000000140B08A3D: mov     r10, [rbx+758h]
 * 0000000140B08A44: mov     r11, [rbx+760h]
 * 0000000140B08A4B: mov     rcx, rdx
 * 0000000140B08A4E: sub     rcx, r9
 * 0000000140B08A51: mov     rax, [rcx+r10]
 * 0000000140B08A55: mov     r8d, [rcx+r11]
 * 0000000140B08A59: add     r8, rax
 * 0000000140B08A5C: cmp     r14, rax
 * 0000000140B08A5F: jb      short loc_140B08A66
 * 0000000140B08A61: cmp     r14, r8
 * 0000000140B08A64: jb      short loc_140B08A70
 * 0000000140B08A66: mov     rdx, [rdx]
 * 0000000140B08A69: cmp     rdx, rsi
 * 0000000140B08A6C: jz      short loc_140B08A7F
 * 0000000140B08A6E: jmp     short loc_140B08A4B
 * 0000000140B08A70: mov     rax, [rbx+0D8h]
 * 0000000140B08A77: mov     edx, r15d
 * 0000000140B08A7A: call    KeGuardDispatchICall
 * 0000000140B08A7F: mov     rcx, [rbx+530h]
 * 0000000140B08A86: mov     rax, [rbx+118h]
 * 0000000140B08A8D: call    KeGuardDispatchICall
 * 0000000140B08A92: mov     rax, [rbx+170h]
 * 0000000140B08A99: call    KeGuardDispatchICall
 * 0000000140B08A9E: test    dword ptr [rbx+990h], 40000000h
 * 0000000140B08AA8: jz      short loc_140B08ACD
 * 0000000140B08AAA: mov     r8d, 0Fh
 * 0000000140B08AB0: lea     rcx, [rbp+0A70h+var_A58]
 * 0000000140B08AB4: mov     rdx, r14
 * 0000000140B08AB7: call    sub_140B18070
 * 0000000140B08ABC: mov     rsi, [rbp+0A70h+var_A58]
 * 0000000140B08AC0: xor     r11d, r11d
 * 0000000140B08AC3: mov     [rsp+0B70h+var_B10], rsi
 * 0000000140B08AC8: jmp     loc_140B09943
 * 0000000140B08ACD: mov     rax, [rbx+1F0h]
 * 0000000140B08AD4: lea     r9, [rbp+0A70h+var_A88]
 * 0000000140B08AD8: xor     r8d, r8d
 * 0000000140B08ADB: mov     [rbp+0A70h+var_740], r13
 * 0000000140B08AE2: mov     [rbp+0A70h+var_8E8], r13d
 * 0000000140B08AE9: mov     rcx, r14
 * 0000000140B08AEC: lea     r13d, [r8+1]
 * 0000000140B08AF0: mov     dl, r13b
 * 0000000140B08AF3: call    KeGuardDispatchICall
 * 0000000140B08AF8: mov     rdx, rax
 * 0000000140B08AFB: lea     r8d, [r13+0Bh]
 * 0000000140B08AFF: neg     rax
 * 0000000140B08B02: mov     [rbp+0A70h+var_758], rdx
 * 0000000140B08B09: lea     r9, [rbp+0A70h+var_A88]
 * 0000000140B08B0D: mov     dl, r13b
 * 0000000140B08B10: sbb     ecx, ecx
 * 0000000140B08B12: and     ecx, [rbp+0A70h+var_A88]
 * 0000000140B08B15: mov     [rbp+0A70h+var_A88], ecx
 * 0000000140B08B18: mov     rax, [rbx+1F0h]
 * 0000000140B08B1F: mov     [rbp+0A70h+var_8F4], ecx
 * 0000000140B08B25: mov     rcx, r14
 * 0000000140B08B28: call    KeGuardDispatchICall
 * 0000000140B08B2D: mov     rdx, rax
 * 0000000140B08B30: mov     [rbp+0A70h+var_AC0], rax
 * 0000000140B08B34: neg     rax
 * 0000000140B08B37: mov     [rbp+0A70h+var_750], rdx
 * 0000000140B08B3E: lea     r15d, [r13+9]
 * 0000000140B08B42: mov     dl, r13b
 * 0000000140B08B45: sbb     ecx, ecx
 * 0000000140B08B47: lea     r9, [rbp+0A70h+var_A88]
 * 0000000140B08B4B: and     ecx, [rbp+0A70h+var_A88]
 * 0000000140B08B4E: mov     r8d, r15d
 * 0000000140B08B51: mov     [rbp+0A70h+var_A88], ecx
 * 0000000140B08B54: mov     rax, [rbx+1F0h]
 * 0000000140B08B5B: mov     dword ptr [rbp+0A70h+arg_8], ecx
 * 0000000140B08B61: mov     [rbp+0A70h+var_8F0], ecx
 * 0000000140B08B67: mov     rcx, r14
 * 0000000140B08B6A: call    KeGuardDispatchICall
 * 0000000140B08B6F: mov     rdx, rax
 * 0000000140B08B72: neg     rax
 * 0000000140B08B75: mov     [rbp+0A70h+var_748], rdx
 * 0000000140B08B7C: sbb     ecx, ecx
 * 0000000140B08B7E: and     ecx, [rbp+0A70h+var_A88]
 * 0000000140B08B81: mov     [rbp+0A70h+var_A88], ecx
 * 0000000140B08B84: mov     rax, [rbx+1F8h]
 * 0000000140B08B8B: mov     [rbp+0A70h+var_8EC], ecx
 * 0000000140B08B91: mov     rcx, r14
 * 0000000140B08B94: call    KeGuardDispatchICall
 * 0000000140B08B99: xor     r11d, r11d
 * 0000000140B08B9C: mov     rsi, rax
 * 0000000140B08B9F: test    rax, rax
 * 0000000140B08BA2: jnz     short loc_140B08C11
 * 0000000140B08BA4: test    dword ptr [rbx+990h], 200000h
 * 0000000140B08BAE: jz      loc_140B0D285
 * 0000000140B08BB4: cmp     [rbx+8F8h], r11d
 * 0000000140B08BBB: jnz     short loc_140B08BFE
 * 0000000140B08BBD: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B08BC7: xor     edx, edx
 * 0000000140B08BC9: add     rax, rbx
 * 0000000140B08BCC: mov     rcx, rbx
 * 0000000140B08BCF: mov     [rbx+900h], rax
 * 0000000140B08BD6: mov     [rbx+908h], r11
 * 0000000140B08BDD: mov     qword ptr [rbx+910h], 10Fh
 * 0000000140B08BE8: mov     [rbx+918h], r14
 * 0000000140B08BEF: mov     [rbx+8F8h], r13d
 * 0000000140B08BF6: call    $$ba
 * 0000000140B08BFB: xor     r11d, r11d
 * 0000000140B08BFE: mov     rsi, [rbp+0A70h+var_A58]
 * 0000000140B08C02: mov     eax, 0C000007Bh
 * 0000000140B08C07: mov     [rsp+0B70h+var_B10], rsi
 * 0000000140B08C0C: jmp     loc_140B0995F
 * 0000000140B08C11: mov     rax, [rbx+4A0h]
 * 0000000140B08C18: lea     rdx, [rbp+0A70h+var_7A0]
 * 0000000140B08C1F: mov     rcx, r14
 * 0000000140B08C22: call    KeGuardDispatchICall
 * 0000000140B08C27: mov     r8d, [rbx+924h]
 * 0000000140B08C2E: mov     [rbp+0A70h+var_738], rax
 * 0000000140B08C35: mov     eax, [rbp+0A70h+var_7A0]
 * 0000000140B08C3B: mov     [rbp+0A70h+var_8E4], eax
 * 0000000140B08C41: mov     eax, [rsi+54h]
 * 0000000140B08C44: mov     [rbp+0A70h+var_760], r14
 * 0000000140B08C4B: mov     r14d, [rbx+7E4h]
 * 0000000140B08C52: mov     [rbp+0A70h+var_8F8], eax
 * 0000000140B08C58: lea     eax, [r14+120h]
 * 0000000140B08C5F: cmp     eax, [rbx+0A1Ch]
 * 0000000140B08C65: jbe     loc_140B08D52
 * 0000000140B08C6B: mov     edx, eax
 * 0000000140B08C6D: mov     rcx, rbx
 * 0000000140B08C70: call    sub_140B11020
 * 0000000140B08C75: xor     r11d, r11d
 * 0000000140B08C78: mov     [rsp+0B70h+var_B10], rax
 * 0000000140B08C7D: mov     rsi, rax
 * 0000000140B08C80: test    rax, rax
 * 0000000140B08C83: jnz     short loc_140B08C9C
 * 0000000140B08C85: mov     rsi, [rbp+0A70h+var_A58]
 * 0000000140B08C89: mov     [rsp+0B70h+var_B10], rsi
 * 0000000140B08C8E: mov     [rbp+0A70h+var_A40], r11
 * 0000000140B08C92: mov     eax, 0C000009Ah
 * 0000000140B08C97: jmp     loc_140B0995F
 * 0000000140B08C9C: mov     ecx, [rbx+990h]
 * 0000000140B08CA2: test    cl, 4
 * 0000000140B08CA5: jnz     loc_140B08D49
 * 0000000140B08CAB: mov     eax, [rbx+7E4h]
 * 0000000140B08CB1: and     ecx, 20000000h
 * 0000000140B08CB7: mov     r8, [rbx+7C8h]
 * 0000000140B08CBE: neg     ecx
 * 0000000140B08CC0: sbb     edx, edx
 * 0000000140B08CC2: and     edx, [rbx+924h]
 * 0000000140B08CC8: cmp     eax, 8
 * 0000000140B08CCB: jb      short loc_140B08CE2
 * 0000000140B08CCD: mov     ecx, eax
 * 0000000140B08CCF: shr     rcx, 3
 * 0000000140B08CD3: mov     [rbx], r11
 * 0000000140B08CD6: add     eax, 0FFFFFFF8h
 * 0000000140B08CD9: add     rbx, 8
 * 0000000140B08CDD: sub     rcx, r13
 * 0000000140B08CE0: jnz     short loc_140B08CD3
 * 0000000140B08CE2: test    eax, eax
 * 0000000140B08CE4: jz      short loc_140B08CF5
 * 0000000140B08CE6: mov     ecx, 0FFFFFFFFh
 * 0000000140B08CEB: mov     [rbx], r11b
 * 0000000140B08CEE: add     rbx, r13
 * 0000000140B08CF1: add     eax, ecx
 * 0000000140B08CF3: jnz     short loc_140B08CEB
 * 0000000140B08CF5: mov     ebx, [rsi+924h]
 * 0000000140B08CFB: mov     [rsi+924h], edx
 * 0000000140B08D01: cmp     edx, 3
 * 0000000140B08D04: jz      short loc_140B08D34
 * 0000000140B08D06: test    dword ptr [rsi+990h], 10000000h
 * 0000000140B08D10: jnz     short loc_140B08D2B
 * 0000000140B08D12: test    edx, edx
 * 0000000140B08D14: jz      short loc_140B08D2B
 * 0000000140B08D16: mov     rax, [rsi+228h]
 * 0000000140B08D1D: lea     rcx, [r8-8]
 * 0000000140B08D21: mov     rdx, [rcx]
 * 0000000140B08D24: call    KeGuardDispatchICall
 * 0000000140B08D29: jmp     short loc_140B08D43
 * 0000000140B08D2B: mov     rax, [rsi+0F8h]
 * 0000000140B08D32: jmp     short loc_140B08D3B
 * 0000000140B08D34: mov     rax, [rsi+368h]
 * 0000000140B08D3B: mov     rcx, r8
 * 0000000140B08D3E: call    KeGuardDispatchICall
 * 0000000140B08D43: mov     [rsi+924h], ebx
 * 0000000140B08D49: and     dword ptr [rsi+990h], 0FFFFFFFBh
 * 0000000140B08D50: jmp     short loc_140B08D60
 * 0000000140B08D52: mov     rsi, rbx
 * 0000000140B08D55: mov     [rsp+0B70h+var_B10], rbx
 * 0000000140B08D5A: mov     [rbx+7E4h], eax
 * 0000000140B08D60: mov     edx, 6
 * 0000000140B08D65: lea     r11, [rsi+r14]
 * 0000000140B08D69: add     [rsi+80Ch], edx
 * 0000000140B08D6F: lea     rdi, [rbp+0A70h+var_760]
 * 0000000140B08D76: lea     r12, [rbp+0A70h+var_8F8]
 * 0000000140B08D7D: mov     [rsp+0B70h+var_B18], r11
 * 0000000140B08D82: xor     ebx, ebx
 * 0000000140B08D84: mov     [rbp+0A70h+var_AA8], rdi
 * 0000000140B08D88: mov     [rbp+0A70h+var_A80], r12
 * 0000000140B08D8C: mov     [rsp+0B70h+var_B08], rdx
 * 0000000140B08D91: mov     r15d, [r12]
 * 0000000140B08D95: mov     ecx, 30h ; '0'
 * 0000000140B08D9A: mov     r14, [rdi]
 * 0000000140B08D9D: mov     rax, r11
 * 0000000140B08DA0: mov     [rbp+0A70h+var_AE0], r15d
 * 0000000140B08DA4: mov     [rax], rbx
 * 0000000140B08DA7: add     ecx, 0FFFFFFF8h
 * 0000000140B08DAA: add     rax, 8
 * 0000000140B08DAE: sub     rdx, r13
 * 0000000140B08DB1: jnz     short loc_140B08DA4
 * 0000000140B08DB3: test    ecx, ecx
 * 0000000140B08DB5: jz      short loc_140B08DC5
 * 0000000140B08DB7: mov     edx, 0FFFFFFFFh
 * 0000000140B08DBC: mov     [rax], bl
 * 0000000140B08DBE: add     rax, r13
 * 0000000140B08DC1: add     ecx, edx
 * 0000000140B08DC3: jnz     short loc_140B08DBC
 * 0000000140B08DC5: mov     dword ptr [r11], 0Bh
 * 0000000140B08DCC: lea     rcx, [r14+r15]
 * 0000000140B08DD0: mov     [r11+8], r14
 * 0000000140B08DD4: mov     r9, r14
 * 0000000140B08DD7: mov     [r11+10h], r15d
 * 0000000140B08DDB: mov     rax, r14
 * 0000000140B08DDE: add     [rsi+828h], r15d
 * 0000000140B08DE5: mov     r10d, [rsi+814h]
 * 0000000140B08DEC: mov     r13, [rsi+818h]
 * 0000000140B08DF3: cmp     r14, rcx
 * 0000000140B08DF6: jnb     short loc_140B08E08
 * 0000000140B08DF8: mov     edx, 40h ; '@'
 * 0000000140B08DFD: prefetchnta byte ptr [rax]
 * 0000000140B08E00: add     rax, rdx
 * 0000000140B08E03: cmp     rax, rcx
 * 0000000140B08E06: jb      short loc_140B08DFD
 * 0000000140B08E08: mov     ebx, r15d
 * 0000000140B08E0B: mov     r8, r13
 * 0000000140B08E0E: shr     ebx, 7
 * 0000000140B08E11: test    ebx, ebx
 * 0000000140B08E13: jz      short loc_140B08E86
 * 0000000140B08E15: mov     edi, 0FFFFFFFFh
 * 0000000140B08E1A: mov     r15d, 1
 * 0000000140B08E20: mov     r12, 7010008004002001h
 * 0000000140B08E2A: mov     eax, 8
 * 0000000140B08E2F: xor     r8, [r9]
 * 0000000140B08E32: mov     ecx, r10d
 * 0000000140B08E35: rol     r8, cl
 * 0000000140B08E38: xor     r8, [r9+8]
 * 0000000140B08E3C: add     r9, 10h
 * 0000000140B08E40: rol     r8, cl
 * 0000000140B08E43: sub     rax, r15
 * 0000000140B08E46: jnz     short loc_140B08E2F
 * 0000000140B08E48: mov     rcx, r9
 * 0000000140B08E4B: sub     rcx, r14
 * 0000000140B08E4E: xor     rcx, r13
 * 0000000140B08E51: mov     rax, rcx
 * 0000000140B08E54: rol     rax, 11h
 * 0000000140B08E58: xor     rcx, rax
 * 0000000140B08E5B: mov     rax, r12
 * 0000000140B08E5E: mul     rcx
 * 0000000140B08E61: xor     r10d, eax
 * 0000000140B08E64: mov     [rbp+0A70h+var_4E0], rdx
 * 0000000140B08E6B: xor     r10d, edx
 * 0000000140B08E6E: and     r10d, 3Fh
 * 0000000140B08E72: cmovz   r10d, r15d
 * 0000000140B08E76: add     ebx, edi
 * 0000000140B08E78: jnz     short loc_140B08E2A
 * 0000000140B08E7A: mov     r15d, [rbp+0A70h+var_AE0]
 * 0000000140B08E7E: mov     rdi, [rbp+0A70h+var_AA8]
 * 0000000140B08E82: mov     r12, [rbp+0A70h+var_A80]
 * 0000000140B08E86: mov     edx, r15d
 * 0000000140B08E89: mov     r13d, 1
 * 0000000140B08E8F: and     edx, 7Fh
 * 0000000140B08E92: cmp     edx, 8
 * 0000000140B08E95: jb      short loc_140B08EB2
 * 0000000140B08E97: mov     eax, edx
 * 0000000140B08E99: shr     rax, 3
 * 0000000140B08E9D: xor     r8, [r9]
 * 0000000140B08EA0: mov     ecx, r10d
 * 0000000140B08EA3: rol     r8, cl
 * 0000000140B08EA6: add     r9, 8
 * 0000000140B08EAA: add     edx, 0FFFFFFF8h
 * 0000000140B08EAD: sub     rax, r13
 * 0000000140B08EB0: jnz     short loc_140B08E9D
 * 0000000140B08EB2: xor     ebx, ebx
 * 0000000140B08EB4: test    edx, edx
 * 0000000140B08EB6: jz      short loc_140B08ED7
 * 0000000140B08EB8: mov     r15d, 0FFFFFFFFh
 * 0000000140B08EBE: movzx   eax, byte ptr [r9]
 * 0000000140B08EC2: mov     ecx, r10d
 * 0000000140B08EC5: xor     r8, rax
 * 0000000140B08EC8: add     r9, r13
 * 0000000140B08ECB: rol     r8, cl
 * 0000000140B08ECE: add     edx, r15d
 * 0000000140B08ED1: jnz     short loc_140B08EBE
 * 0000000140B08ED3: mov     r15d, [rbp+0A70h+var_AE0]
 * 0000000140B08ED7: mov     rax, r8
 * 0000000140B08EDA: jmp     short loc_140B08EDF
 * 0000000140B08EDC: xor     r8d, eax
 * 0000000140B08EDF: shr     rax, 1Fh
 * 0000000140B08EE3: test    rax, rax
 * 0000000140B08EE6: jnz     short loc_140B08EDC
 * 0000000140B08EE8: btr     r8d, 1Fh
 * 0000000140B08EED: lea     edx, [rax+6]
 * 0000000140B08EF0: mov     [r11+14h], r8d
 * 0000000140B08EF4: add     r12, 4
 * 0000000140B08EF8: add     [rsi+828h], r15d
 * 0000000140B08EFF: add     rdi, 8
 * 0000000140B08F03: add     r11, 30h ; '0'
 * 0000000140B08F07: mov     [rbp+0A70h+var_A80], r12
 * 0000000140B08F0B: sub     [rsp+0B70h+var_B08], r13
 * 0000000140B08F10: mov     [rbp+0A70h+var_AA8], rdi
 * 0000000140B08F14: jnz     loc_140B08D91
 * 0000000140B08F1A: mov     r12, [rsp+0B70h+var_B18]
 * 0000000140B08F1F: lea     eax, [rdx-4]
 * 0000000140B08F22: mov     r14, [rbp+0A70h+var_AC8]
 * 0000000140B08F26: lea     rcx, [rbp+0A70h+var_A40]
 * 0000000140B08F2A: mov     r8d, dword ptr [rbp+0A70h+var_AD8]
 * 0000000140B08F2E: mov     r9, r14
 * 0000000140B08F31: mov     [rbp+0A70h+var_A40], rsi
 * 0000000140B08F35: mov     dword ptr [r12], 2Ch ; ','
 * 0000000140B08F3D: mov     [r12+18h], r14
 * 0000000140B08F42: or      [r12+20h], eax
 * 0000000140B08F47: lea     rax, [rbp+0A70h+var_970]
 * 0000000140B08F4E: mov     [rsp+0B70h+var_B38], rax
 * 0000000140B08F53: lea     rax, [rbp+0A70h+var_A10]
 * 0000000140B08F57: mov     [rsp+0B70h+var_B40], rax
 * 0000000140B08F5C: lea     eax, [rdx+9]
 * 0000000140B08F5F: mov     rdx, [rsp+0B70h+var_B20]
 * 0000000140B08F64: mov     dword ptr [rsp+0B70h+var_B48], eax
 * 0000000140B08F68: mov     eax, [rbp+0A70h+var_AD0]
 * 0000000140B08F6B: mov     dword ptr [rsp+0B70h+BugCheckParameter4], eax
 * 0000000140B08F6F: mov     [rbp+0A70h+var_A58], rsi
 * 0000000140B08F73: call    sub_140B0F838
 * 0000000140B08F78: xor     r11d, r11d
 * 0000000140B08F7B: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B08F82: test    eax, eax
 * 0000000140B08F84: jns     short loc_140B08F8E
 * 0000000140B08F86: mov     rbx, rsi
 * 0000000140B08F89: jmp     loc_140B09954
 * 0000000140B08F8E: mov     rbx, [rbp+0A70h+var_A40]
 * 0000000140B08F92: mov     ecx, 30h ; '0'
 * 0000000140B08F97: mov     r9d, [rbp+0A70h+var_970]
 * 0000000140B08F9E: mov     rax, rbx
 * 0000000140B08FA1: sub     r9d, [rbp+0A70h+var_A10]
 * 0000000140B08FA5: sub     rax, rsi
 * 0000000140B08FA8: mov     esi, [rbp+0A70h+var_A10]
 * 0000000140B08FAB: add     r12, rax
 * 0000000140B08FAE: mov     [rsp+0B70h+var_B18], r12
 * 0000000140B08FB3: lea     edx, [rcx-2Ah]
 * 0000000140B08FB6: mov     [rbp+0A70h+var_A58], rbx
 * 0000000140B08FBA: lea     r8d, [rcx-2Fh]
 * 0000000140B08FBE: add     rsi, r14
 * 0000000140B08FC1: lea     r13, [r12+0C0h]
 * 0000000140B08FC9: mov     rax, r13
 * 0000000140B08FCC: mov     [rax], r11
 * 0000000140B08FCF: add     ecx, 0FFFFFFF8h
 * 0000000140B08FD2: add     rax, 8
 * 0000000140B08FD6: sub     rdx, r8
 * 0000000140B08FD9: jnz     short loc_140B08FCC
 * 0000000140B08FDB: test    ecx, ecx
 * 0000000140B08FDD: jz      short loc_140B08FEE
 * 0000000140B08FDF: mov     edx, 0FFFFFFFFh
 * 0000000140B08FE4: mov     [rax], r11b
 * 0000000140B08FE7: add     rax, r8
 * 0000000140B08FEA: add     ecx, edx
 * 0000000140B08FEC: jnz     short loc_140B08FE4
 * 0000000140B08FEE: mov     dword ptr [r13+0], 0Bh
 * 0000000140B08FF6: mov     r10, rsi
 * 0000000140B08FF9: mov     [r13+8], rsi
 * 0000000140B08FFD: mov     rax, rsi
 * 0000000140B09000: mov     [r13+10h], r9d
 * 0000000140B09004: add     [rbx+828h], r9d
 * 0000000140B0900B: mov     r11d, [rbx+814h]
 * 0000000140B09012: mov     r15, [rbx+818h]
 * 0000000140B09019: mov     ecx, r9d
 * 0000000140B0901C: add     rcx, rsi
 * 0000000140B0901F: cmp     rsi, rcx
 * 0000000140B09022: jnb     short loc_140B09034
 * 0000000140B09024: mov     edx, 40h ; '@'
 * 0000000140B09029: prefetchnta byte ptr [rax]
 * 0000000140B0902C: add     rax, rdx
 * 0000000140B0902F: cmp     rax, rcx
 * 0000000140B09032: jb      short loc_140B09029
 * 0000000140B09034: mov     r14d, r9d
 * 0000000140B09037: mov     r8, r15
 * 0000000140B0903A: shr     r14d, 7
 * 0000000140B0903E: test    r14d, r14d
 * 0000000140B09041: jz      short loc_140B090BE
 * 0000000140B09043: mov     rdi, 7010008004002001h
 * 0000000140B0904D: mov     r13d, 1
 * 0000000140B09053: mov     r12d, 0FFFFFFFFh
 * 0000000140B09059: mov     eax, 8
 * 0000000140B0905E: xor     r8, [r10]
 * 0000000140B09061: mov     ecx, r11d
 * 0000000140B09064: rol     r8, cl
 * 0000000140B09067: xor     r8, [r10+8]
 * 0000000140B0906B: add     r10, 10h
 * 0000000140B0906F: rol     r8, cl
 * 0000000140B09072: sub     rax, r13
 * 0000000140B09075: jnz     short loc_140B0905E
 * 0000000140B09077: mov     rcx, r10
 * 0000000140B0907A: sub     rcx, rsi
 * 0000000140B0907D: xor     rcx, r15
 * 0000000140B09080: mov     rax, rcx
 * 0000000140B09083: rol     rax, 11h
 * 0000000140B09087: xor     rcx, rax
 * 0000000140B0908A: mov     rax, rdi
 * 0000000140B0908D: mul     rcx
 * 0000000140B09090: xor     r11d, eax
 * 0000000140B09093: mov     [rbp+0A70h+var_4D8], rdx
 * 0000000140B0909A: xor     r11d, edx
 * 0000000140B0909D: and     r11d, 3Fh
 * 0000000140B090A1: cmovz   r11d, r13d
 * 0000000140B090A5: add     r14d, r12d
 * 0000000140B090A8: jnz     short loc_140B09059
 * 0000000140B090AA: mov     r12, [rsp+0B70h+var_B18]
 * 0000000140B090AF: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B090B6: lea     r13, [r12+0C0h]
 * 0000000140B090BE: and     r9d, 7Fh
 * 0000000140B090C2: mov     esi, 1
 * 0000000140B090C7: cmp     r9d, 8
 * 0000000140B090CB: jb      short loc_140B090EA
 * 0000000140B090CD: mov     eax, r9d
 * 0000000140B090D0: shr     rax, 3
 * 0000000140B090D4: xor     r8, [r10]
 * 0000000140B090D7: mov     ecx, r11d
 * 0000000140B090DA: rol     r8, cl
 * 0000000140B090DD: add     r10, 8
 * 0000000140B090E1: add     r9d, 0FFFFFFF8h
 * 0000000140B090E5: sub     rax, rsi
 * 0000000140B090E8: jnz     short loc_140B090D4
 * 0000000140B090EA: test    r9d, r9d
 * 0000000140B090ED: jz      short loc_140B0910F
 * 0000000140B090EF: mov     r12d, 0FFFFFFFFh
 * 0000000140B090F5: movzx   eax, byte ptr [r10]
 * 0000000140B090F9: mov     ecx, r11d
 * 0000000140B090FC: xor     r8, rax
 * 0000000140B090FF: add     r10, rsi
 * 0000000140B09102: rol     r8, cl
 * 0000000140B09105: add     r9d, r12d
 * 0000000140B09108: jnz     short loc_140B090F5
 * 0000000140B0910A: mov     r12, [rsp+0B70h+var_B18]
 * 0000000140B0910F: mov     rax, r8
 * 0000000140B09112: shr     rax, 1Fh
 * 0000000140B09116: xor     r11d, r11d
 * 0000000140B09119: jmp     short loc_140B09122
 * 0000000140B0911B: xor     r8d, eax
 * 0000000140B0911E: shr     rax, 1Fh
 * 0000000140B09122: test    rax, rax
 * 0000000140B09125: jnz     short loc_140B0911B
 * 0000000140B09127: btr     r8d, 1Fh
 * 0000000140B0912C: mov     [r13+14h], r8d
 * 0000000140B09130: lea     r13d, [rax+1]
 * 0000000140B09134: mov     dword ptr [r12+0F0h], 30h ; '0'
 * 0000000140B09140: cmp     [r12+100h], r11d
 * 0000000140B09148: jz      short loc_140B09152
 * 0000000140B0914A: or      [r12+108h], r13d
 * 0000000140B09152: lea     r15, [r12+60h]
 * 0000000140B09157: mov     [rsp+0B70h+var_B10], rbx
 * 0000000140B0915C: mov     [rbp+0A70h+var_A58], rbx
 * 0000000140B09160: mov     rsi, rbx
 * 0000000140B09163: test    r15, r15
 * 0000000140B09166: jnz     loc_140B093F8
 * 0000000140B0916C: mov     r15d, [rbx+7E4h]
 * 0000000140B09173: mov     r8d, [rbx+924h]
 * 0000000140B0917A: lea     eax, [r15+30h]
 * 0000000140B0917E: cmp     eax, [rbx+0A1Ch]
 * 0000000140B09184: jbe     loc_140B09261
 * 0000000140B0918A: mov     edx, eax
 * 0000000140B0918C: mov     rcx, rbx
 * 0000000140B0918F: call    sub_140B11020
 * 0000000140B09194: xor     r11d, r11d
 * 0000000140B09197: mov     r14, rax
 * 0000000140B0919A: test    rax, rax
 * 0000000140B0919D: jz      loc_140B08C8E
 * 0000000140B091A3: mov     ecx, [rbx+990h]
 * 0000000140B091A9: test    cl, 4
 * 0000000140B091AC: jnz     loc_140B09257
 * 0000000140B091B2: mov     eax, [rbx+7E4h]
 * 0000000140B091B8: and     ecx, 20000000h
 * 0000000140B091BE: mov     r8, [rbx+7C8h]
 * 0000000140B091C5: neg     ecx
 * 0000000140B091C7: sbb     edx, edx
 * 0000000140B091C9: and     edx, [rbx+924h]
 * 0000000140B091CF: cmp     eax, 8
 * 0000000140B091D2: jb      short loc_140B091E9
 * 0000000140B091D4: mov     ecx, eax
 * 0000000140B091D6: shr     rcx, 3
 * 0000000140B091DA: mov     [rbx], r11
 * 0000000140B091DD: add     eax, 0FFFFFFF8h
 * 0000000140B091E0: add     rbx, 8
 * 0000000140B091E4: sub     rcx, r13
 * 0000000140B091E7: jnz     short loc_140B091DA
 * 0000000140B091E9: test    eax, eax
 * 0000000140B091EB: jz      short loc_140B091FC
 * 0000000140B091ED: mov     ecx, 0FFFFFFFFh
 * 0000000140B091F2: mov     [rbx], r11b
 * 0000000140B091F5: add     rbx, r13
 * 0000000140B091F8: add     eax, ecx
 * 0000000140B091FA: jnz     short loc_140B091F2
 * 0000000140B091FC: mov     ebx, [r14+924h]
 * 0000000140B09203: mov     [r14+924h], edx
 * 0000000140B0920A: cmp     edx, 3
 * 0000000140B0920D: jz      short loc_140B0923E
 * 0000000140B0920F: test    dword ptr [r14+990h], 10000000h
 * 0000000140B0921A: jnz     short loc_140B09235
 * 0000000140B0921C: test    edx, edx
 * 0000000140B0921E: jz      short loc_140B09235
 * 0000000140B09220: mov     rax, [r14+228h]
 * 0000000140B09227: lea     rcx, [r8-8]
 * 0000000140B0922B: mov     rdx, [rcx]
 * 0000000140B0922E: call    KeGuardDispatchICall
 * 0000000140B09233: jmp     short loc_140B0924D
 * 0000000140B09235: mov     rax, [r14+0F8h]
 * 0000000140B0923C: jmp     short loc_140B09245
 * 0000000140B0923E: mov     rax, [r14+368h]
 * 0000000140B09245: mov     rcx, r8
 * 0000000140B09248: call    KeGuardDispatchICall
 * 0000000140B0924D: mov     [r14+924h], ebx
 * 0000000140B09254: xor     r11d, r11d
 * 0000000140B09257: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 0000000140B0925F: jmp     short loc_140B0926A
 * 0000000140B09261: mov     r14, rbx
 * 0000000140B09264: mov     [rbx+7E4h], eax
 * 0000000140B0926A: add     [r14+80Ch], r13d
 * 0000000140B09271: mov     ecx, 30h ; '0'
 * 0000000140B09276: add     r15, r14
 * 0000000140B09279: mov     [rsp+0B70h+var_AF8], r15
 * 0000000140B0927E: mov     rax, r15
 * 0000000140B09281: lea     edx, [rcx-2Ah]
 * 0000000140B09284: mov     [rax], r11
 * 0000000140B09287: add     ecx, 0FFFFFFF8h
 * 0000000140B0928A: add     rax, 8
 * 0000000140B0928E: sub     rdx, r13
 * 0000000140B09291: jnz     short loc_140B09284
 * 0000000140B09293: test    ecx, ecx
 * 0000000140B09295: jz      short loc_140B092A6
 * 0000000140B09297: mov     edx, 0FFFFFFFFh
 * 0000000140B0929C: mov     [rax], r11b
 * 0000000140B0929F: add     rax, r13
 * 0000000140B092A2: add     ecx, edx
 * 0000000140B092A4: jnz     short loc_140B0929C
 * 0000000140B092A6: mov     rax, [rbp+0A70h+var_AC0]
 * 0000000140B092AA: mov     r13d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B092B1: mov     r9, rax
 * 0000000140B092B4: mov     dword ptr [r15], 0Eh
 * 0000000140B092BB: mov     [r15+8], rax
 * 0000000140B092BF: mov     [r15+10h], r13d
 * 0000000140B092C3: add     [r14+828h], r13d
 * 0000000140B092CA: lea     rcx, [rax+r13]
 * 0000000140B092CE: mov     r10d, [r14+814h]
 * 0000000140B092D5: mov     rbx, [r14+818h]
 * 0000000140B092DC: cmp     rax, rcx
 * 0000000140B092DF: jnb     short loc_140B092F1
 * 0000000140B092E1: mov     edx, 40h ; '@'
 * 0000000140B092E6: prefetchnta byte ptr [rax]
 * 0000000140B092E9: add     rax, rdx
 * 0000000140B092EC: cmp     rax, rcx
 * 0000000140B092EF: jb      short loc_140B092E6
 * 0000000140B092F1: mov     r11d, r13d
 * 0000000140B092F4: mov     r8, rbx
 * 0000000140B092F7: shr     r11d, 7
 * 0000000140B092FB: mov     esi, 1
 * 0000000140B09300: test    r11d, r11d
 * 0000000140B09303: jz      short loc_140B09381
 * 0000000140B09305: mov     r13, [rbp+0A70h+var_AC0]
 * 0000000140B09309: mov     r12d, 0FFFFFFFFh
 * 0000000140B0930F: mov     r15, 7010008004002001h
 * 0000000140B09319: mov     eax, 8
 * 0000000140B0931E: xor     r8, [r9]
 * 0000000140B09321: mov     ecx, r10d
 * 0000000140B09324: rol     r8, cl
 * 0000000140B09327: xor     r8, [r9+8]
 * 0000000140B0932B: add     r9, 10h
 * 0000000140B0932F: rol     r8, cl
 * 0000000140B09332: sub     rax, rsi
 * 0000000140B09335: jnz     short loc_140B0931E
 * 0000000140B09337: mov     rcx, r9
 * 0000000140B0933A: sub     rcx, r13
 * 0000000140B0933D: xor     rcx, rbx
 * 0000000140B09340: mov     rax, rcx
 * 0000000140B09343: rol     rax, 11h
 * 0000000140B09347: xor     rcx, rax
 * 0000000140B0934A: mov     rax, r15
 * 0000000140B0934D: mul     rcx
 * 0000000140B09350: xor     eax, edx
 * 0000000140B09352: mov     [rbp+0A70h+var_4D0], rdx
 * 0000000140B09359: xor     r10d, eax
 * 0000000140B0935C: and     r10d, 3Fh
 * 0000000140B09360: cmovz   r10d, esi
 * 0000000140B09364: add     r11d, r12d
 * 0000000140B09367: jnz     short loc_140B09319
 * 0000000140B09369: mov     r15, [rsp+0B70h+var_AF8]
 * 0000000140B0936E: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B09375: mov     r12, [rsp+0B70h+var_B18]
 * 0000000140B0937A: mov     r13d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B09381: mov     edx, r13d
 * 0000000140B09384: and     edx, 7Fh
 * 0000000140B09387: cmp     edx, 8
 * 0000000140B0938A: jb      short loc_140B093A7
 * 0000000140B0938C: mov     eax, edx
 * 0000000140B0938E: shr     rax, 3
 * 0000000140B09392: xor     r8, [r9]
 * 0000000140B09395: mov     ecx, r10d
 * 0000000140B09398: rol     r8, cl
 * 0000000140B0939B: add     r9, 8
 * 0000000140B0939F: add     edx, 0FFFFFFF8h
 * 0000000140B093A2: sub     rax, rsi
 * 0000000140B093A5: jnz     short loc_140B09392
 * 0000000140B093A7: test    edx, edx
 * 0000000140B093A9: jz      short loc_140B093CD
 * 0000000140B093AB: mov     r13d, 0FFFFFFFFh
 * 0000000140B093B1: movzx   eax, byte ptr [r9]
 * 0000000140B093B5: mov     ecx, r10d
 * 0000000140B093B8: xor     r8, rax
 * 0000000140B093BB: add     r9, rsi
 * 0000000140B093BE: rol     r8, cl
 * 0000000140B093C1: add     edx, r13d
 * 0000000140B093C4: jnz     short loc_140B093B1
 * 0000000140B093C6: mov     r13d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B093CD: mov     rax, r8
 * 0000000140B093D0: jmp     short loc_140B093D5
 * 0000000140B093D2: xor     r8d, eax
 * 0000000140B093D5: shr     rax, 1Fh
 * 0000000140B093D9: test    rax, rax
 * 0000000140B093DC: jnz     short loc_140B093D2
 * 0000000140B093DE: btr     r8d, 1Fh
 * 0000000140B093E3: mov     [rsp+0B70h+var_B10], r14
 * 0000000140B093E8: mov     [r15+14h], r8d
 * 0000000140B093EC: mov     rsi, r14
 * 0000000140B093EF: add     [r14+828h], r13d
 * 0000000140B093F6: jmp     short loc_140B0940B
 * 0000000140B093F8: mov     r13d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B093FF: mov     [rsp+0B70h+var_B10], rbx
 * 0000000140B09404: mov     dword ptr [r15], 0Eh
 * 0000000140B0940B: test    dword ptr [rsi+990h], 40000000h
 * 0000000140B09415: jz      short loc_140B0942F
 * 0000000140B09417: test    r13d, r13d
 * 0000000140B0941A: jz      short loc_140B0942F
 * 0000000140B0941C: mov     rdx, [rbp+0A70h+var_AC0]
 * 0000000140B09420: lea     r9, [r15+1Ch]
 * 0000000140B09424: mov     r8d, r13d
 * 0000000140B09427: mov     rcx, rsi
 * 0000000140B0942A: call    sub_1403F1D6C
 * 0000000140B0942F: mov     r14, [rbp+0A70h+var_AC8]
 * 0000000140B09433: mov     r13d, 1
 * 0000000140B09439: mov     [r15+18h], r13d
 * 0000000140B0943D: mov     dword ptr [r12+90h], 23h ; '#'
 * 0000000140B09449: or      [r12+0B8h], r13d
 * 0000000140B09451: cmp     dword ptr [r12+0A0h], 94h
 * 0000000140B0945D: mov     [rbp+0A70h+var_A58], rsi
 * 0000000140B09461: jb      loc_140B094FB
 * 0000000140B09467: mov     rax, [rsi+1F8h]
 * 0000000140B0946E: mov     rcx, r14
 * 0000000140B09471: mov     rbx, [r12+98h]
 * 0000000140B09479: call    KeGuardDispatchICall
 * 0000000140B0947E: xor     r11d, r11d
 * 0000000140B09481: test    rax, rax
 * 0000000140B09484: jnz     short loc_140B09497
 * 0000000140B09486: mov     [rbp+0A70h+var_A40], r11
 * 0000000140B0948A: mov     eax, 0C000009Ah
 * 0000000140B0948F: mov     rbx, rsi
 * 0000000140B09492: jmp     loc_140B0995F
 * 0000000140B09497: mov     r8d, [rax+50h]
 * 0000000140B0949B: mov     edx, [r12+0B8h]
 * 0000000140B094A3: add     r8, r14
 * 0000000140B094A6: or      edx, 2
 * 0000000140B094A9: mov     [r12+0B8h], edx
 * 0000000140B094B1: mov     ecx, edx
 * 0000000140B094B3: mov     rax, [rbx+70h]
 * 0000000140B094B7: cmp     rax, r14
 * 0000000140B094BA: jb      short loc_140B094D7
 * 0000000140B094BC: cmp     rax, r8
 * 0000000140B094BF: jnb     short loc_140B094D7
 * 0000000140B094C1: mov     rax, [rax]
 * 0000000140B094C4: or      ecx, 4
 * 0000000140B094C7: mov     [r12+0A8h], rax
 * 0000000140B094CF: mov     [r12+0B8h], ecx
 * 0000000140B094D7: mov     rax, [rbx+78h]
 * 0000000140B094DB: cmp     rax, r14
 * 0000000140B094DE: jb      short loc_140B094FB
 * 0000000140B094E0: cmp     rax, r8
 * 0000000140B094E3: jnb     short loc_140B094FB
 * 0000000140B094E5: mov     rax, [rax]
 * 0000000140B094E8: or      ecx, 8
 * 0000000140B094EB: mov     [r12+0B0h], rax
 * 0000000140B094F3: mov     [r12+0B8h], ecx
 * 0000000140B094FB: test    dword ptr [rsi+990h], 400000h
 * 0000000140B09505: mov     [rbp+0A70h+var_A40], rsi
 * 0000000140B09509: jz      loc_140B0A424
 * 0000000140B0950F: mov     rax, [rsi+1F8h]
 * 0000000140B09516: mov     rcx, r14
 * 0000000140B09519: call    KeGuardDispatchICall
 * 0000000140B0951E: xor     r11d, r11d
 * 0000000140B09521: mov     [rsp+0B70h+var_AF8], rax
 * 0000000140B09526: mov     r15, rax
 * 0000000140B09529: test    rax, rax
 * 0000000140B0952C: jnz     short loc_140B09538
 * 0000000140B0952E: mov     eax, 0C000007Bh
 * 0000000140B09533: jmp     loc_140B09943
 * 0000000140B09538: movzx   r10d, word ptr [r15+6]
 * 0000000140B0953D: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140B09547: mov     ecx, dword ptr [rbp+0A70h+var_AD8]
 * 0000000140B0954A: mul     rcx
 * 0000000140B0954D: mov     word ptr [rbp+0A70h+arg_8], r10w
 * 0000000140B09555: mov     r9, rdx
 * 0000000140B09558: shr     r9, 3
 * 0000000140B0955C: mov     [rbp+0A70h+var_AC0], r9
 * 0000000140B09560: test    r10w, r10w
 * 0000000140B09564: jnz     short loc_140B095C5
 * 0000000140B09566: test    dword ptr [rsi+990h], 200000h
 * 0000000140B09570: jz      loc_140B0D2AF
 * 0000000140B09576: cmp     [rsi+8F8h], r11d
 * 0000000140B0957D: jnz     short loc_140B0952E
 * 0000000140B0957F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B09589: add     rax, rsi
 * 0000000140B0958C: mov     [rsi+900h], rax
 * 0000000140B09593: mov     [rsi+908h], r11
 * 0000000140B0959A: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140B095A5: mov     [rsi+918h], r14
 * 0000000140B095AC: mov     [rsi+8F8h], r13d
 * 0000000140B095B3: xor     edx, edx
 * 0000000140B095B5: mov     rcx, rsi
 * 0000000140B095B8: call    $$ba
 * 0000000140B095BD: xor     r11d, r11d
 * 0000000140B095C0: jmp     loc_140B0952E
 * 0000000140B095C5: mov     rdx, [rsp+0B70h+var_B20]
 * 0000000140B095CA: lea     r12, [r15+18h]
 * 0000000140B095CE: mov     eax, r9d
 * 0000000140B095D1: mov     rbx, rdx
 * 0000000140B095D4: lea     rcx, [rax+rax*2]
 * 0000000140B095D8: movzx   eax, word ptr [r15+14h]
 * 0000000140B095DD: add     r12, rax
 * 0000000140B095E0: lea     r13, [rdx+rcx*4]
 * 0000000140B095E4: mov     [rbp+0A70h+var_AF0], r13
 * 0000000140B095E8: mov     ecx, r11d
 * 0000000140B095EB: mov     [rsp+0B70h+var_B08], r12
 * 0000000140B095F0: mov     eax, r10d
 * 0000000140B095F3: mov     [rsp+0B70h+var_B00], ecx
 * 0000000140B095F7: test    r10d, r10d
 * 0000000140B095FA: jz      loc_140B09823
 * 0000000140B09600: mov     r8, [rbp+0A70h+var_AF0]
 * 0000000140B09604: lea     r13, [r12+8]
 * 0000000140B09609: mov     r9d, 1; BugCheckParameter3
 * 0000000140B0960F: mov     r15d, [r13+8]
 * 0000000140B09613: mov     eax, [r13+0]
 * 0000000140B09617: cmp     r15d, eax
 * 0000000140B0961A: mov     edx, [r13+4]
 * 0000000140B0961E: cmovbe  r15d, eax
 * 0000000140B09622: mov     [rbp+0A70h+var_AD0], edx
 * 0000000140B09625: add     r15d, edx
 * 0000000140B09628: test    ecx, ecx
 * 0000000140B0962A: jz      short loc_140B09642
 * 0000000140B0962C: lea     eax, [rcx-1]
 * 0000000140B0962F: lea     rax, [rax+rax*4]
 * 0000000140B09633: cmp     r15d, [r12+rax*8+0Ch]
 * 0000000140B09638: jb      loc_140B0983E
 * 0000000140B0963E: mov     ecx, [rsp+0B70h+var_B00]
 * 0000000140B09642: cmp     rbx, r8
 * 0000000140B09645: jz      loc_140B097FF
 * 0000000140B0964B: mov     ecx, [rbx]
 * 0000000140B0964D: mov     eax, [rbx+4]
 * 0000000140B09650: cmp     ecx, r15d
 * 0000000140B09653: jnb     loc_140B097E4
 * 0000000140B09659: cmp     eax, edx
 * 0000000140B0965B: jbe     loc_140B097E4
 * 0000000140B09661: cmp     ecx, edx
 * 0000000140B09663: jb      loc_140B09894
 * 0000000140B09669: cmp     eax, r15d
 * 0000000140B0966C: ja      loc_140B09894
 * 0000000140B09672: mov     eax, [rbx+8]
 * 0000000140B09675: mov     ecx, 1
 * 0000000140B0967A: test    cl, al
 * 0000000140B0967C: jnz     short loc_140B0968A
 * 0000000140B0967E: mov     al, [rax+r14]
 * 0000000140B09682: test    al, 20h
 * 0000000140B09684: jz      loc_140B097D6
 * 0000000140B0968A: mov     eax, [r13+0]
 * 0000000140B0968E: mov     ecx, [r13+4]
 * 0000000140B09692: mov     r14d, [r13+8]
 * 0000000140B09696: cmp     r14d, eax
 * 0000000140B09699: mov     rdx, [rbp+0A70h+var_AC8]
 * 0000000140B0969D: cmovbe  r14d, eax
 * 0000000140B096A1: mov     [rbp+0A70h+var_AE0], ecx
 * 0000000140B096A4: mov     rax, [rsi+418h]
 * 0000000140B096AB: add     r14d, ecx
 * 0000000140B096AE: mov     rcx, rbx
 * 0000000140B096B1: call    KeGuardDispatchICall
 * 0000000140B096B6: mov     r12, rax
 * 0000000140B096B9: mov     eax, [rbp+0A70h+var_AE0]
 * 0000000140B096BC: cmp     [r12], eax
 * 0000000140B096C0: jb      short loc_140B096C9
 * 0000000140B096C2: cmp     [r12+4], r14d
 * 0000000140B096C7: jbe     short loc_140B09734
 * 0000000140B096C9: mov     r8, [rbp+0A70h+var_AC8]; BugCheckParameter2
 * 0000000140B096CD: mov     edx, r12d
 * 0000000140B096D0: sub     edx, r8d
 * 0000000140B096D3: mov     eax, 80000000h
 * 0000000140B096D8: or      edx, eax
 * 0000000140B096DA: test    dword ptr [rsi+990h], 200000h
 * 0000000140B096E4: jz      loc_140B0D351
 * 0000000140B096EA: xor     ecx, ecx
 * 0000000140B096EC: cmp     [rsi+8F8h], ecx
 * 0000000140B096F2: jnz     short loc_140B09734
 * 0000000140B096F4: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B096FE: xor     edx, edx
 * 0000000140B09700: add     rax, rsi
 * 0000000140B09703: mov     [rsi+900h], rax
 * 0000000140B0970A: lea     eax, [rcx+1]
 * 0000000140B0970D: mov     [rsi+908h], rcx
 * 0000000140B09714: mov     rcx, rsi
 * 0000000140B09717: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140B09722: mov     [rsi+918h], r8
 * 0000000140B09729: mov     [rsi+8F8h], eax
 * 0000000140B0972F: call    $$ba
 * 0000000140B09734: mov     r8d, [r12]
 * 0000000140B09738: mov     rcx, r12
 * 0000000140B0973B: add     r8, [rbp+0A70h+var_AC8]
 * 0000000140B0973F: mov     rax, [rsi+420h]
 * 0000000140B09746: mov     rdx, [rbp+0A70h+var_AC8]
 * 0000000140B0974A: call    KeGuardDispatchICall
 * 0000000140B0974F: mov     rdx, rax
 * 0000000140B09752: mov     eax, [rbp+0A70h+var_AE0]
 * 0000000140B09755: cmp     [rdx], eax
 * 0000000140B09757: jb      short loc_140B0975F
 * 0000000140B09759: cmp     [rdx+4], r14d
 * 0000000140B0975D: jbe     short loc_140B097CC
 * 0000000140B0975F: mov     r14, [rbp+0A70h+var_AC8]
 * 0000000140B09763: mov     eax, 80000000h
 * 0000000140B09768: sub     edx, r14d
 * 0000000140B0976B: or      edx, eax
 * 0000000140B0976D: test    dword ptr [rsi+990h], 200000h
 * 0000000140B09777: jz      loc_140B0D328
 * 0000000140B0977D: xor     r11d, r11d
 * 0000000140B09780: cmp     [rsi+8F8h], r11d
 * 0000000140B09787: jnz     short loc_140B097D3
 * 0000000140B09789: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B09793: xor     edx, edx
 * 0000000140B09795: add     rax, rsi
 * 0000000140B09798: mov     rcx, rsi
 * 0000000140B0979B: mov     [rsi+900h], rax
 * 0000000140B097A2: lea     eax, [r11+1]
 * 0000000140B097A6: mov     [rsi+908h], r11
 * 0000000140B097AD: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140B097B8: mov     [rsi+918h], r14
 * 0000000140B097BF: mov     [rsi+8F8h], eax
 * 0000000140B097C5: call    $$ba
 * 0000000140B097CA: jmp     short loc_140B097D0
 * 0000000140B097CC: mov     r14, [rbp+0A70h+var_AC8]
 * 0000000140B097D0: xor     r11d, r11d
 * 0000000140B097D3: mov     edx, [rbp+0A70h+var_AD0]
 * 0000000140B097D6: add     rbx, 0Ch
 * 0000000140B097DA: cmp     rbx, [rbp+0A70h+var_AF0]
 * 0000000140B097DE: jnz     loc_140B0964B
 * 0000000140B097E4: mov     ecx, [rsp+0B70h+var_B00]
 * 0000000140B097E8: mov     r9d, 1
 * 0000000140B097EE: movzx   r10d, word ptr [rbp+0A70h+arg_8]
 * 0000000140B097F6: mov     r12, [rsp+0B70h+var_B08]
 * 0000000140B097FB: mov     r8, [rbp+0A70h+var_AF0]
 * 0000000140B097FF: add     ecx, r9d
 * 0000000140B09802: movzx   eax, r10w
 * 0000000140B09806: add     r13, 28h ; '('
 * 0000000140B0980A: mov     [rsp+0B70h+var_B00], ecx
 * 0000000140B0980E: cmp     ecx, eax
 * 0000000140B09810: jb      loc_140B0960F
 * 0000000140B09816: mov     r9, [rbp+0A70h+var_AC0]
 * 0000000140B0981A: mov     r15, [rsp+0B70h+var_AF8]
 * 0000000140B0981F: mov     r13, [rbp+0A70h+var_AF0]
 * 0000000140B09823: cmp     rbx, r13
 * 0000000140B09826: jz      loc_140B098EE
 * 0000000140B0982C: test    dword ptr [rsi+990h], 200000h
 * 0000000140B09836: jz      loc_140B0D2D7
 * 0000000140B0983C: jmp     short loc_140B098A4
 * 0000000140B0983E: test    dword ptr [rsi+990h], 200000h
 * 0000000140B09848: jz      loc_140B0D302
 * 0000000140B0984E: cmp     [rsi+8F8h], r11d
 * 0000000140B09855: jnz     loc_140B0952E
 * 0000000140B0985B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B09865: add     rax, rsi
 * 0000000140B09868: mov     [rsi+900h], rax
 * 0000000140B0986F: mov     [rsi+908h], r11
 * 0000000140B09876: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140B09881: mov     [rsi+918h], r14
 * 0000000140B09888: mov     [rsi+8F8h], r9d
 * 0000000140B0988F: jmp     loc_140B095B3
 * 0000000140B09894: test    dword ptr [rsi+990h], 200000h
 * 0000000140B0989E: jz      loc_140B0D377
 * 0000000140B098A4: cmp     [rsi+8F8h], r11d
 * 0000000140B098AB: jnz     loc_140B0952E
 * 0000000140B098B1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B098BB: add     rax, rsi
 * 0000000140B098BE: mov     [rsi+900h], rax
 * 0000000140B098C5: mov     eax, 1
 * 0000000140B098CA: mov     [rsi+908h], r11
 * 0000000140B098D1: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140B098DC: mov     [rsi+918h], r14
 * 0000000140B098E3: mov     [rsi+8F8h], eax
 * 0000000140B098E9: jmp     loc_140B095B3
 * 0000000140B098EE: test    r9d, r9d
 * 0000000140B098F1: jz      short loc_140B098FC
 * 0000000140B098F3: lea     ecx, [r9+6]
 * 0000000140B098F7: and     ecx, 0FFFFFFF8h
 * 0000000140B098FA: jmp     short loc_140B098FF
 * 0000000140B098FC: mov     ecx, r11d
 * 0000000140B098FF: mov     r14d, [rsi+7E4h]
 * 0000000140B09906: lea     eax, [rax+rax*2]
 * 0000000140B09909: mov     r8d, [rsi+924h]
 * 0000000140B09910: lea     eax, [rax+6]
 * 0000000140B09913: lea     eax, [rcx+rax*8]
 * 0000000140B09916: add     eax, r14d
 * 0000000140B09919: cmp     eax, [rsi+0A1Ch]
 * 0000000140B0991F: jbe     loc_140B09A47
 * 0000000140B09925: mov     edx, eax
 * 0000000140B09927: mov     rcx, rsi
 * 0000000140B0992A: call    sub_140B11020
 * 0000000140B0992F: xor     r11d, r11d
 * 0000000140B09932: mov     [rbp+0A70h+var_AB0], rax
 * 0000000140B09936: mov     rbx, rax
 * 0000000140B09939: test    rax, rax
 * 0000000140B0993C: jnz     short loc_140B0997C
 * 0000000140B0993E: mov     eax, 0C000009Ah
 * 0000000140B09943: mov     rbx, rsi
 * 0000000140B09946: test    eax, eax
 * 0000000140B09948: jns     loc_140B0A42B
 * 0000000140B0994E: mov     r13d, 1
 * 0000000140B09954: cmp     eax, 0C000010Eh
 * 0000000140B09959: jz      loc_140B0A42B
 * 0000000140B0995F: test    eax, eax
 * 0000000140B09961: jns     loc_140B0A4BF
 * 0000000140B09967: mov     [rsp+0B70h+var_B10], rsi
 * 0000000140B0996C: cmp     eax, 0C000010Eh
 * 0000000140B09971: jnz     loc_140B083FB
 * 0000000140B09977: jmp     loc_140B0A4BF
 * 0000000140B0997C: mov     ecx, [rsi+990h]
 * 0000000140B09982: test    cl, 4
 * 0000000140B09985: jnz     loc_140B09A32
 * 0000000140B0998B: mov     eax, [rsi+7E4h]
 * 0000000140B09991: and     ecx, 20000000h
 * 0000000140B09997: mov     r8, [rsi+7C8h]
 * 0000000140B0999E: neg     ecx
 * 0000000140B099A0: mov     r9d, 1
 * 0000000140B099A6: sbb     edx, edx
 * 0000000140B099A8: and     edx, [rsi+924h]
 * 0000000140B099AE: cmp     eax, 8
 * 0000000140B099B1: jb      short loc_140B099C8
 * 0000000140B099B3: mov     ecx, eax
 * 0000000140B099B5: shr     rcx, 3
 * 0000000140B099B9: mov     [rsi], r11
 * 0000000140B099BC: add     eax, 0FFFFFFF8h
 * 0000000140B099BF: add     rsi, 8
 * 0000000140B099C3: sub     rcx, r9
 * 0000000140B099C6: jnz     short loc_140B099B9
 * 0000000140B099C8: test    eax, eax
 * 0000000140B099CA: jz      short loc_140B099DB
 * 0000000140B099CC: mov     ecx, 0FFFFFFFFh
 * 0000000140B099D1: mov     [rsi], r11b
 * 0000000140B099D4: add     rsi, r9
 * 0000000140B099D7: add     eax, ecx
 * 0000000140B099D9: jnz     short loc_140B099D1
 * 0000000140B099DB: mov     esi, [rbx+924h]
 * 0000000140B099E1: mov     [rbx+924h], edx
 * 0000000140B099E7: cmp     edx, 3
 * 0000000140B099EA: jz      short loc_140B09A1A
 * 0000000140B099EC: test    dword ptr [rbx+990h], 10000000h
 * 0000000140B099F6: jnz     short loc_140B09A11
 * 0000000140B099F8: test    edx, edx
 * 0000000140B099FA: jz      short loc_140B09A11
 * 0000000140B099FC: mov     rax, [rbx+228h]
 * 0000000140B09A03: lea     rcx, [r8-8]
 * 0000000140B09A07: mov     rdx, [rcx]
 * 0000000140B09A0A: call    KeGuardDispatchICall
 * 0000000140B09A0F: jmp     short loc_140B09A29
 * 0000000140B09A11: mov     rax, [rbx+0F8h]
 * 0000000140B09A18: jmp     short loc_140B09A21
 * 0000000140B09A1A: mov     rax, [rbx+368h]
 * 0000000140B09A21: mov     rcx, r8
 * 0000000140B09A24: call    KeGuardDispatchICall
 * 0000000140B09A29: mov     [rbx+924h], esi
 * 0000000140B09A2F: xor     r11d, r11d
 * 0000000140B09A32: and     dword ptr [rbx+990h], 0FFFFFFFBh
 * 0000000140B09A39: mov     r9, [rbp+0A70h+var_AC0]
 * 0000000140B09A3D: movzx   r10d, word ptr [rbp+0A70h+arg_8]
 * 0000000140B09A45: jmp     short loc_140B09A54
 * 0000000140B09A47: mov     rbx, rsi
 * 0000000140B09A4A: mov     [rsi+7E4h], eax
 * 0000000140B09A50: mov     [rbp+0A70h+var_AB0], rbx
 * 0000000140B09A54: mov     esi, 1
 * 0000000140B09A59: lea     rcx, [rbx+r14]
 * 0000000140B09A5D: add     [rbx+80Ch], esi
 * 0000000140B09A63: mov     rax, rcx
 * 0000000140B09A66: lea     edx, [rsi+2Fh]
 * 0000000140B09A69: lea     r8d, [rsi+5]
 * 0000000140B09A6D: mov     [rax], r11
 * 0000000140B09A70: add     edx, 0FFFFFFF8h
 * 0000000140B09A73: add     rax, 8
 * 0000000140B09A77: sub     r8, rsi
 * 0000000140B09A7A: jnz     short loc_140B09A6D
 * 0000000140B09A7C: test    edx, edx
 * 0000000140B09A7E: jz      short loc_140B09A91
 * 0000000140B09A80: mov     r8d, 0FFFFFFFFh
 * 0000000140B09A86: mov     [rax], r11b
 * 0000000140B09A89: add     rax, rsi
 * 0000000140B09A8C: add     edx, r8d
 * 0000000140B09A8F: jnz     short loc_140B09A86
 * 0000000140B09A91: mov     rax, [rsp+0B70h+var_B20]
 * 0000000140B09A96: mov     dword ptr [rcx], 1Eh
 * 0000000140B09A9C: mov     [rcx+8], rax
 * 0000000140B09AA0: mov     [rcx+10h], r11d
 * 0000000140B09AA4: mov     rdx, [rbx+818h]
 * 0000000140B09AAB: mov     rax, rdx
 * 0000000140B09AAE: jmp     short loc_140B09AB2
 * 0000000140B09AB0: xor     edx, eax
 * 0000000140B09AB2: shr     rax, 1Fh
 * 0000000140B09AB6: test    rax, rax
 * 0000000140B09AB9: jnz     short loc_140B09AB0
 * 0000000140B09ABB: mov     r14, [rbp+0A70h+var_AC8]
 * 0000000140B09ABF: btr     edx, 1Fh
 * 0000000140B09AC3: mov     [rcx+14h], edx
 * 0000000140B09AC6: mov     rsi, rbx
 * 0000000140B09AC9: mov     [rcx+18h], r14
 * 0000000140B09ACD: mov     eax, [r15+50h]
 * 0000000140B09AD1: mov     r15d, 1
 * 0000000140B09AD7: mov     [rcx+20h], eax
 * 0000000140B09ADA: mov     eax, dword ptr [rbp+0A70h+var_AD8]
 * 0000000140B09ADD: mov     [rcx+24h], eax
 * 0000000140B09AE0: mov     [rcx+28h], r10w
 * 0000000140B09AE5: or      [rcx+2Ah], r15w
 * 0000000140B09AEA: add     rcx, 30h ; '0'
 * 0000000140B09AEE: mov     [rbp+0A70h+var_A40], rbx
 * 0000000140B09AF2: mov     [rbp+0A70h+var_AE8], rcx
 * 0000000140B09AF6: test    r9d, r9d
 * 0000000140B09AF9: jz      short loc_140B09B0C
 * 0000000140B09AFB: lea     r11d, [r9-1]
 * 0000000140B09AFF: add     r11, 7
 * 0000000140B09B03: and     r11, 0FFFFFFFFFFFFFFF8h
 * 0000000140B09B07: add     r11, rcx
 * 0000000140B09B0A: jmp     short loc_140B09B0F
 * 0000000140B09B0C: mov     r11, rcx
 * 0000000140B09B0F: movzx   eax, r10w
 * 0000000140B09B13: mov     [rbp+0A70h+var_AB8], r11
 * 0000000140B09B17: lea     rcx, [rax+rax*2]
 * 0000000140B09B1B: lea     r8, [r11+rcx*8]
 * 0000000140B09B1F: xor     ecx, ecx
 * 0000000140B09B21: mov     [rsp+0B70h+var_AF8], r8
 * 0000000140B09B26: test    r9d, r9d
 * 0000000140B09B29: jz      short loc_140B09B3B
 * 0000000140B09B2B: mov     rax, [rsp+0B70h+var_B20]
 * 0000000140B09B30: add     rax, 0Ch
 * 0000000140B09B34: mov     [rsp+0B70h+var_B18], rax
 * 0000000140B09B39: jmp     short loc_140B09B40
 * 0000000140B09B3B: mov     [rsp+0B70h+var_B18], r13
 * 0000000140B09B40: cmp     cx, r10w
 * 0000000140B09B44: jnb     short loc_140B09B89
 * 0000000140B09B46: movzx   edx, r10w
 * 0000000140B09B4A: lea     rax, [r11+8]
 * 0000000140B09B4E: xor     r10d, r10d
 * 0000000140B09B51: mov     r12d, 80000000h
 * 0000000140B09B57: lea     r9d, [r10+0Ch]
 * 0000000140B09B5B: lea     r13d, [r10+2]
 * 0000000140B09B5F: mov     rcx, r13
 * 0000000140B09B62: mov     [rax-8], r10d
 * 0000000140B09B66: mov     [rax-4], r10d
 * 0000000140B09B6A: mov     [rax], r12d
 * 0000000140B09B6D: add     rax, r9
 * 0000000140B09B70: sub     rcx, r15
 * 0000000140B09B73: jnz     short loc_140B09B62
 * 0000000140B09B75: lea     r13d, [rcx+2]
 * 0000000140B09B79: sub     rdx, r15
 * 0000000140B09B7C: jnz     short loc_140B09B5F
 * 0000000140B09B7E: mov     r12, [rsp+0B70h+var_B08]
 * 0000000140B09B83: mov     r13, [rbp+0A70h+var_AF0]
 * 0000000140B09B87: jmp     short loc_140B09B8C
 * 0000000140B09B89: xor     r10d, r10d
 * 0000000140B09B8C: cmp     r11, r8
 * 0000000140B09B8F: jz      loc_140B0A424
 * 0000000140B09B95: test    dword ptr [r12+24h], 2000000h
 * 0000000140B09B9E: mov     dword ptr [rbp+0A70h+arg_8], r10d
 * 0000000140B09BA5: jnz     short loc_140B09BBD
 * 0000000140B09BA7: mov     eax, [r12]
 * 0000000140B09BAB: cmp     eax, 54494E49h
 * 0000000140B09BB0: jnz     short loc_140B09BCB
 * 0000000140B09BB2: cmp     dword ptr [r12+4], 4742444Bh
 * 0000000140B09BBB: jnz     short loc_140B09BF8
 * 0000000140B09BBD: mov     edx, r15d
 * 0000000140B09BC0: mov     dword ptr [rbp+0A70h+arg_8], edx
 * 0000000140B09BC6: jmp     loc_140B09D05
 * 0000000140B09BCB: cmp     eax, 45474150h
 * 0000000140B09BD0: jnz     short loc_140B09BF8
 * 0000000140B09BD2: movzx   eax, word ptr [r12+4]
 * 0000000140B09BD8: mov     ecx, 7877h
 * 0000000140B09BDD: cmp     ax, cx
 * 0000000140B09BE0: jz      short loc_140B09BBD
 * 0000000140B09BE2: mov     ecx, 7277h
 * 0000000140B09BE7: cmp     ax, cx
 * 0000000140B09BEA: jz      short loc_140B09BBD
 * 0000000140B09BEC: mov     ecx, 7777h
 * 0000000140B09BF1: cmp     ax, cx
 * 0000000140B09BF4: jnz     short loc_140B09C0C
 * 0000000140B09BF6: jmp     short loc_140B09BBD
 * 0000000140B09BF8: cmp     eax, 41525245h
 * 0000000140B09BFD: jnz     short loc_140B09C0C
 * 0000000140B09BFF: mov     eax, 4154h
 * 0000000140B09C04: cmp     [r12+4], ax
 * 0000000140B09C0A: jz      short loc_140B09BBD
 * 0000000140B09C0C: mov     r8, [rbx+930h]
 * 0000000140B09C13: mov     r9, r12
 * 0000000140B09C16: mov     r10, [rbx+938h]
 * 0000000140B09C1D: sub     r9, r8
 * 0000000140B09C20: mov     r11, [rbx+940h]
 * 0000000140B09C27: mov     r14d, 7
 * 0000000140B09C2D: mov     rsi, [rbx+948h]
 * 0000000140B09C34: movzx   edx, byte ptr [r8+r9]
 * 0000000140B09C39: movzx   eax, byte ptr [r8]
 * 0000000140B09C3D: add     r8, r15
 * 0000000140B09C40: cmp     rdx, rax
 * 0000000140B09C43: jnz     short loc_140B09C54
 * 0000000140B09C45: mov     eax, 0FFFFFFFFh
 * 0000000140B09C4A: add     r14d, eax
 * 0000000140B09C4D: jnz     short loc_140B09C34
 * 0000000140B09C4F: jmp     loc_140B09CE9
 * 0000000140B09C54: mov     r8d, 8
 * 0000000140B09C5A: mov     r9, r12
 * 0000000140B09C5D: mov     rcx, [r9]
 * 0000000140B09C60: add     r9, 8
 * 0000000140B09C64: mov     rax, [r10]
 * 0000000140B09C67: add     r10, 8
 * 0000000140B09C6B: cmp     rcx, rax
 * 0000000140B09C6E: jnz     short loc_140B09C9E
 * 0000000140B09C70: add     r8d, 0FFFFFFF8h
 * 0000000140B09C74: cmp     r8d, 8
 * 0000000140B09C78: jnb     short loc_140B09C5D
 * 0000000140B09C7A: test    r8d, r8d
 * 0000000140B09C7D: jz      short loc_140B09CE9
 * 0000000140B09C7F: movzx   edx, byte ptr [r9]
 * 0000000140B09C83: add     r9, r15
 * 0000000140B09C86: movzx   eax, byte ptr [r10]
 * 0000000140B09C8A: add     r10, r15
 * 0000000140B09C8D: cmp     rdx, rax
 * 0000000140B09C90: jnz     short loc_140B09C9E
 * 0000000140B09C92: mov     eax, 0FFFFFFFFh
 * 0000000140B09C97: add     r8d, eax
 * 0000000140B09C9A: jnz     short loc_140B09C7F
 * 0000000140B09C9C: jmp     short loc_140B09CE9
 * 0000000140B09C9E: mov     r8, r12
 * 0000000140B09CA1: mov     r9d, 4
 * 0000000140B09CA7: sub     r8, r11
 * 0000000140B09CAA: mov     r10d, 0FFFFFFFFh
 * 0000000140B09CB0: movzx   edx, byte ptr [r11+r8]
 * 0000000140B09CB5: movzx   eax, byte ptr [r11]
 * 0000000140B09CB9: add     r11, r15
 * 0000000140B09CBC: cmp     rdx, rax
 * 0000000140B09CBF: jnz     short loc_140B09CC8
 * 0000000140B09CC1: add     r9d, r10d
 * 0000000140B09CC4: jnz     short loc_140B09CB0
 * 0000000140B09CC6: jmp     short loc_140B09CE9
 * 0000000140B09CC8: mov     r8, r12
 * 0000000140B09CCB: mov     r9d, 6
 * 0000000140B09CD1: sub     r8, rsi
 * 0000000140B09CD4: movzx   edx, byte ptr [rsi+r8]
 * 0000000140B09CD9: movzx   eax, byte ptr [rsi]
 * 0000000140B09CDC: add     rsi, r15
 * 0000000140B09CDF: cmp     rdx, rax
 * 0000000140B09CE2: jnz     short loc_140B09CF4
 * 0000000140B09CE4: add     r9d, r10d
 * 0000000140B09CE7: jnz     short loc_140B09CD4
 * 0000000140B09CE9: mov     edx, r15d
 * 0000000140B09CEC: mov     dword ptr [rbp+0A70h+arg_8], edx
 * 0000000140B09CF2: jmp     short loc_140B09CFA
 * 0000000140B09CF4: mov     edx, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B09CFA: mov     r14, [rbp+0A70h+var_AC8]
 * 0000000140B09CFE: xor     r10d, r10d
 * 0000000140B09D01: mov     r11, [rbp+0A70h+var_AB8]
 * 0000000140B09D05: mov     ecx, [r12+24h]
 * 0000000140B09D0A: test    ecx, ecx
 * 0000000140B09D0C: jns     short loc_140B09D19
 * 0000000140B09D0E: mov     edx, r15d
 * 0000000140B09D11: mov     dword ptr [rbp+0A70h+arg_8], edx
 * 0000000140B09D17: jmp     short loc_140B09D1D
 * 0000000140B09D19: test    edx, edx
 * 0000000140B09D1B: jz      short loc_140B09D46
 * 0000000140B09D1D: cmp     dword ptr [r12], 54494E49h
 * 0000000140B09D25: jnz     short loc_140B09D46
 * 0000000140B09D27: cmp     dword ptr [r12+4], 4742444Bh
 * 0000000140B09D30: jnz     short loc_140B09D46
 * 0000000140B09D32: test    dword ptr [rbx+994h], 2000h
 * 0000000140B09D3C: cmovnz  edx, r10d
 * 0000000140B09D40: mov     dword ptr [rbp+0A70h+arg_8], edx
 * 0000000140B09D46: test    dword ptr [rbx+994h], 4000h
 * 0000000140B09D50: jz      short loc_140B09D73
 * 0000000140B09D52: bt      ecx, 1Dh
 * 0000000140B09D56: jnb     short loc_140B09D73
 * 0000000140B09D58: cmp     r14, [rbx+5E0h]
 * 0000000140B09D5F: jz      short loc_140B09D6A
 * 0000000140B09D61: cmp     r14, [rbx+5E8h]
 * 0000000140B09D68: jnz     short loc_140B09D73
 * 0000000140B09D6A: mov     edx, r15d
 * 0000000140B09D6D: mov     dword ptr [rbp+0A70h+arg_8], edx
 * 0000000140B09D73: mov     r8d, [r12+0Ch]
 * 0000000140B09D78: mov     r15d, [r12+10h]
 * 0000000140B09D7D: mov     eax, [r12+8]
 * 0000000140B09D82: cmp     r15d, eax
 * 0000000140B09D85: mov     r9, [rsp+0B70h+var_B20]
 * 0000000140B09D8A: cmovbe  r15d, eax
 * 0000000140B09D8E: mov     dword ptr [rbp+0A70h+var_AD8], r8d
 * 0000000140B09D92: add     r15d, r8d
 * 0000000140B09D95: cmp     r9, r13
 * 0000000140B09D98: mov     [rbp+0A70h+var_AD0], r15d
 * 0000000140B09D9C: mov     r13d, r8d
 * 0000000140B09D9F: jz      loc_140B09F4B
 * 0000000140B09DA5: mov     eax, [r9]
 * 0000000140B09DA8: mov     ecx, [r9+4]
 * 0000000140B09DAC: mov     r12d, ecx
 * 0000000140B09DAF: cmp     eax, r8d
 * 0000000140B09DB2: jbe     loc_140B09F54
 * 0000000140B09DB8: cmp     ecx, r15d
 * 0000000140B09DBB: ja      loc_140B0A0E2
 * 0000000140B09DC1: test    edx, edx
 * 0000000140B09DC3: jnz     loc_140B0A130
 * 0000000140B09DC9: lea     rsi, [r14+r8]
 * 0000000140B09DCD: mov     [r11], r8d
 * 0000000140B09DD0: mov     r9d, eax
 * 0000000140B09DD3: mov     [r11+4], eax
 * 0000000140B09DD7: sub     r9d, r8d
 * 0000000140B09DDA: mov     [rbp+0A70h+var_AE0], ecx
 * 0000000140B09DDD: mov     r14d, r9d
 * 0000000140B09DE0: lea     rdx, [rbp+0A70h+var_8F8]
 * 0000000140B09DE7: add     r14, rsi
 * 0000000140B09DEA: lea     r8, [rbp+0A70h+var_760]
 * 0000000140B09DF1: mov     r13d, eax
 * 0000000140B09DF4: mov     rcx, [r8]
 * 0000000140B09DF7: mov     eax, [rdx]
 * 0000000140B09DF9: add     rax, rcx
 * 0000000140B09DFC: cmp     rsi, rax
 * 0000000140B09DFF: jnb     short loc_140B09E0A
 * 0000000140B09E01: cmp     r14, rcx
 * 0000000140B09E04: ja      loc_140B0A0D9
 * 0000000140B09E0A: inc     r10d
 * 0000000140B09E0D: add     r8, 8
 * 0000000140B09E11: add     rdx, 4
 * 0000000140B09E15: cmp     r10d, 6
 * 0000000140B09E19: jb      short loc_140B09DF4
 * 0000000140B09E1B: add     [rbx+828h], r9d
 * 0000000140B09E22: mov     r10, rsi
 * 0000000140B09E25: mov     r11d, [rbx+814h]
 * 0000000140B09E2C: mov     rax, rsi
 * 0000000140B09E2F: mov     r15, [rbx+818h]
 * 0000000140B09E36: cmp     rsi, r14
 * 0000000140B09E39: jnb     short loc_140B09E4B
 * 0000000140B09E3B: mov     ecx, 40h ; '@'
 * 0000000140B09E40: prefetchnta byte ptr [rax]
 * 0000000140B09E43: add     rax, rcx
 * 0000000140B09E46: cmp     rax, r14
 * 0000000140B09E49: jb      short loc_140B09E40
 * 0000000140B09E4B: mov     r14d, r9d
 * 0000000140B09E4E: mov     r8, r15
 * 0000000140B09E51: shr     r14d, 7
 * 0000000140B09E55: test    r14d, r14d
 * 0000000140B09E58: jz      short loc_140B09ECE
 * 0000000140B09E5A: mov     edi, 1
 * 0000000140B09E5F: mov     ebx, 0FFFFFFFFh
 * 0000000140B09E64: mov     r12, 7010008004002001h
 * 0000000140B09E6E: mov     eax, 8
 * 0000000140B09E73: xor     r8, [r10]
 * 0000000140B09E76: mov     ecx, r11d
 * 0000000140B09E79: rol     r8, cl
 * 0000000140B09E7C: xor     r8, [r10+8]
 * 0000000140B09E80: add     r10, 10h
 * 0000000140B09E84: rol     r8, cl
 * 0000000140B09E87: sub     rax, rdi
 * 0000000140B09E8A: jnz     short loc_140B09E73
 * 0000000140B09E8C: mov     rcx, r10
 * 0000000140B09E8F: sub     rcx, rsi
 * 0000000140B09E92: xor     rcx, r15
 * 0000000140B09E95: mov     rax, rcx
 * 0000000140B09E98: rol     rax, 11h
 * 0000000140B09E9C: xor     rcx, rax
 * 0000000140B09E9F: mov     rax, r12
 * 0000000140B09EA2: mul     rcx
 * 0000000140B09EA5: xor     r11d, edx
 * 0000000140B09EA8: mov     [rbp+0A70h+var_4B8], rdx
 * 0000000140B09EAF: xor     r11d, eax
 * 0000000140B09EB2: and     r11d, 3Fh
 * 0000000140B09EB6: cmovz   r11d, edi
 * 0000000140B09EBA: add     r14d, ebx
 * 0000000140B09EBD: jnz     short loc_140B09E6E
 * 0000000140B09EBF: mov     rbx, [rbp+0A70h+var_AB0]
 * 0000000140B09EC3: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B09ECA: mov     r12d, [rbp+0A70h+var_AE0]
 * 0000000140B09ECE: and     r9d, 7Fh
 * 0000000140B09ED2: mov     esi, 1
 * 0000000140B09ED7: cmp     r9d, 8
 * 0000000140B09EDB: jb      short loc_140B09EFA
 * 0000000140B09EDD: mov     eax, r9d
 * 0000000140B09EE0: shr     rax, 3
 * 0000000140B09EE4: xor     r8, [r10]
 * 0000000140B09EE7: mov     ecx, r11d
 * 0000000140B09EEA: rol     r8, cl
 * 0000000140B09EED: add     r10, 8
 * 0000000140B09EF1: add     r9d, 0FFFFFFF8h
 * 0000000140B09EF5: sub     rax, rsi
 * 0000000140B09EF8: jnz     short loc_140B09EE4
 * 0000000140B09EFA: test    r9d, r9d
 * 0000000140B09EFD: jz      short loc_140B09F1D
 * 0000000140B09EFF: mov     ebx, 0FFFFFFFFh
 * 0000000140B09F04: movzx   eax, byte ptr [r10]
 * 0000000140B09F08: mov     ecx, r11d
 * 0000000140B09F0B: xor     r8, rax
 * 0000000140B09F0E: add     r10, rsi
 * 0000000140B09F11: rol     r8, cl
 * 0000000140B09F14: add     r9d, ebx
 * 0000000140B09F17: jnz     short loc_140B09F04
 * 0000000140B09F19: mov     rbx, [rbp+0A70h+var_AB0]
 * 0000000140B09F1D: mov     rax, r8
 * 0000000140B09F20: shr     rax, 1Fh
 * 0000000140B09F24: xor     r10d, r10d
 * 0000000140B09F27: jmp     short loc_140B09F30
 * 0000000140B09F29: xor     r8d, eax
 * 0000000140B09F2C: shr     rax, 1Fh
 * 0000000140B09F30: test    rax, rax
 * 0000000140B09F33: jnz     short loc_140B09F29
 * 0000000140B09F35: mov     rax, [rbp+0A70h+var_AB8]
 * 0000000140B09F39: btr     r8d, 1Fh
 * 0000000140B09F3E: mov     r15d, [rbp+0A70h+var_AD0]
 * 0000000140B09F42: mov     [rax+8], r8d
 * 0000000140B09F46: jmp     loc_140B0A0DC
 * 0000000140B09F4B: mov     eax, r10d
 * 0000000140B09F4E: mov     r12d, r10d
 * 0000000140B09F51: cmp     eax, r8d
 * 0000000140B09F54: jnb     loc_140B0A0E2
 * 0000000140B09F5A: mov     r12, r9
 * 0000000140B09F5D: mov     r11, [rbp+0A70h+var_AB8]
 * 0000000140B09F61: test    edx, edx
 * 0000000140B09F63: jnz     loc_140B0A3A4
 * 0000000140B09F69: cmp     r13d, r15d
 * 0000000140B09F6C: jz      loc_140B0A3A4
 * 0000000140B09F72: mov     rsi, [rbp+0A70h+var_AC8]
 * 0000000140B09F76: lea     rcx, [rbp+0A70h+var_8F8]
 * 0000000140B09F7D: mov     [r11+0Ch], r13d
 * 0000000140B09F81: lea     rdx, [rbp+0A70h+var_760]
 * 0000000140B09F88: mov     [r11+10h], r15d
 * 0000000140B09F8C: mov     r9d, r15d
 * 0000000140B09F8F: mov     eax, [r11+0Ch]
 * 0000000140B09F93: mov     r8d, r10d
 * 0000000140B09F96: sub     r9d, eax
 * 0000000140B09F99: add     rsi, rax
 * 0000000140B09F9C: mov     r14d, r9d
 * 0000000140B09F9F: mov     r13d, 1
 * 0000000140B09FA5: add     r14, rsi
 * 0000000140B09FA8: mov     r10, [rdx]
 * 0000000140B09FAB: mov     eax, [rcx]
 * 0000000140B09FAD: add     rax, r10
 * 0000000140B09FB0: cmp     rsi, rax
 * 0000000140B09FB3: jnb     short loc_140B09FBE
 * 0000000140B09FB5: cmp     r14, r10
 * 0000000140B09FB8: ja      loc_140B0A3A1
 * 0000000140B09FBE: add     r8d, r13d
 * 0000000140B09FC1: add     rdx, 8
 * 0000000140B09FC5: add     rcx, 4
 * 0000000140B09FC9: cmp     r8d, 6
 * 0000000140B09FCD: jb      short loc_140B09FA8
 * 0000000140B09FCF: add     [rbx+828h], r9d
 * 0000000140B09FD6: mov     r10, rsi
 * 0000000140B09FD9: mov     r11d, [rbx+814h]
 * 0000000140B09FE0: mov     rax, rsi
 * 0000000140B09FE3: mov     r15, [rbx+818h]
 * 0000000140B09FEA: cmp     rsi, r14
 * 0000000140B09FED: jnb     short loc_140B09FFF
 * 0000000140B09FEF: mov     ecx, 40h ; '@'
 * 0000000140B09FF4: prefetchnta byte ptr [rax]
 * 0000000140B09FF7: add     rax, rcx
 * 0000000140B09FFA: cmp     rax, r14
 * 0000000140B09FFD: jb      short loc_140B09FF4
 * 0000000140B09FFF: mov     r14d, r9d
 * 0000000140B0A002: mov     r8, r15
 * 0000000140B0A005: shr     r14d, 7
 * 0000000140B0A009: test    r14d, r14d
 * 0000000140B0A00C: jz      short loc_140B0A07E
 * 0000000140B0A00E: mov     edi, 0FFFFFFFFh
 * 0000000140B0A013: mov     rbx, 7010008004002001h
 * 0000000140B0A01D: mov     eax, 8
 * 0000000140B0A022: xor     r8, [r10]
 * 0000000140B0A025: mov     ecx, r11d
 * 0000000140B0A028: rol     r8, cl
 * 0000000140B0A02B: xor     r8, [r10+8]
 * 0000000140B0A02F: add     r10, 10h
 * 0000000140B0A033: rol     r8, cl
 * 0000000140B0A036: sub     rax, r13
 * 0000000140B0A039: jnz     short loc_140B0A022
 * 0000000140B0A03B: mov     rcx, r10
 * 0000000140B0A03E: sub     rcx, rsi
 * 0000000140B0A041: xor     rcx, r15
 * 0000000140B0A044: mov     rax, rcx
 * 0000000140B0A047: rol     rax, 11h
 * 0000000140B0A04B: xor     rcx, rax
 * 0000000140B0A04E: mov     rax, rbx
 * 0000000140B0A051: mul     rcx
 * 0000000140B0A054: xor     r11d, edx
 * 0000000140B0A057: mov     [rbp+0A70h+var_4A8], rdx
 * 0000000140B0A05E: xor     r11d, eax
 * 0000000140B0A061: and     r11d, 3Fh
 * 0000000140B0A065: cmovz   r11d, r13d
 * 0000000140B0A069: add     r14d, edi
 * 0000000140B0A06C: jnz     short loc_140B0A01D
 * 0000000140B0A06E: mov     rbx, [rbp+0A70h+var_AB0]
 * 0000000140B0A072: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0A079: mov     r12, [rsp+0B70h+var_B20]
 * 0000000140B0A07E: and     r9d, 7Fh
 * 0000000140B0A082: cmp     r9d, 8
 * 0000000140B0A086: jb      short loc_140B0A0A5
 * 0000000140B0A088: mov     eax, r9d
 * 0000000140B0A08B: shr     rax, 3
 * 0000000140B0A08F: xor     r8, [r10]
 * 0000000140B0A092: mov     ecx, r11d
 * 0000000140B0A095: rol     r8, cl
 * 0000000140B0A098: add     r10, 8
 * 0000000140B0A09C: add     r9d, 0FFFFFFF8h
 * 0000000140B0A0A0: sub     rax, r13
 * 0000000140B0A0A3: jnz     short loc_140B0A08F
 * 0000000140B0A0A5: test    r9d, r9d
 * 0000000140B0A0A8: jz      short loc_140B0A0CA
 * 0000000140B0A0AA: mov     r12d, 0FFFFFFFFh
 * 0000000140B0A0B0: movzx   eax, byte ptr [r10]
 * 0000000140B0A0B4: mov     ecx, r11d
 * 0000000140B0A0B7: xor     r8, rax
 * 0000000140B0A0BA: add     r10, r13
 * 0000000140B0A0BD: rol     r8, cl
 * 0000000140B0A0C0: add     r9d, r12d
 * 0000000140B0A0C3: jnz     short loc_140B0A0B0
 * 0000000140B0A0C5: mov     r12, [rsp+0B70h+var_B20]
 * 0000000140B0A0CA: mov     rax, r8
 * 0000000140B0A0CD: shr     rax, 1Fh
 * 0000000140B0A0D1: xor     r10d, r10d
 * 0000000140B0A0D4: jmp     loc_140B0A389
 * 0000000140B0A0D9: xor     r10d, r10d
 * 0000000140B0A0DC: mov     edx, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0A0E2: cmp     r12d, r15d
 * 0000000140B0A0E5: mov     r12, [rsp+0B70h+var_B20]
 * 0000000140B0A0EA: ja      loc_140B09F5D
 * 0000000140B0A0F0: mov     r8, [rbp+0A70h+var_AF0]
 * 0000000140B0A0F4: cmp     r12, r8
 * 0000000140B0A0F7: jz      loc_140B09F5D
 * 0000000140B0A0FD: mov     r9, r12
 * 0000000140B0A100: mov     rax, [rsp+0B70h+var_B18]
 * 0000000140B0A105: mov     r12d, [rax+4]
 * 0000000140B0A109: mov     [rbp+0A70h+var_AE0], r12d
 * 0000000140B0A10D: cmp     r12d, r15d
 * 0000000140B0A110: ja      loc_140B0A378
 * 0000000140B0A116: mov     ecx, 0Ch
 * 0000000140B0A11B: cmp     rax, r8
 * 0000000140B0A11E: jz      loc_140B0A378
 * 0000000140B0A124: test    edx, edx
 * 0000000140B0A126: jz      short loc_140B0A136
 * 0000000140B0A128: mov     r8b, 80h
 * 0000000140B0A12B: jmp     loc_140B0A339
 * 0000000140B0A130: mov     r8, [rbp+0A70h+var_AF0]
 * 0000000140B0A134: jmp     short loc_140B0A100
 * 0000000140B0A136: mov     r14d, [r9+4]
 * 0000000140B0A13A: mov     r13d, [rax]
 * 0000000140B0A13D: cmp     r13d, r14d
 * 0000000140B0A140: jnb     short loc_140B0A1A4
 * 0000000140B0A142: test    dword ptr [rbx+990h], 200000h
 * 0000000140B0A14C: jz      loc_140B0D3A2
 * 0000000140B0A152: cmp     [rbx+8F8h], r10d
 * 0000000140B0A159: jnz     short loc_140B0A1A4
 * 0000000140B0A15B: mov     rcx, [rbp+0A70h+var_AC8]
 * 0000000140B0A15F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0A169: add     rax, rbx
 * 0000000140B0A16C: xor     edx, edx
 * 0000000140B0A16E: mov     [rbx+900h], rax
 * 0000000140B0A175: mov     eax, 1
 * 0000000140B0A17A: mov     [rbx+908h], r10
 * 0000000140B0A181: mov     qword ptr [rbx+910h], 10Fh
 * 0000000140B0A18C: mov     [rbx+918h], rcx
 * 0000000140B0A193: mov     rcx, rbx
 * 0000000140B0A196: mov     [rbx+8F8h], eax
 * 0000000140B0A19C: call    $$ba
 * 0000000140B0A1A1: xor     r10d, r10d
 * 0000000140B0A1A4: mov     rsi, r14
 * 0000000140B0A1A7: lea     rcx, [rbp+0A70h+var_8F8]
 * 0000000140B0A1AE: add     rsi, [rbp+0A70h+var_AC8]
 * 0000000140B0A1B2: lea     rdx, [rbp+0A70h+var_760]
 * 0000000140B0A1B9: mov     r9d, r13d
 * 0000000140B0A1BC: mov     r8d, r10d
 * 0000000140B0A1BF: sub     r9d, r14d
 * 0000000140B0A1C2: mov     r14d, r9d
 * 0000000140B0A1C5: add     r14, rsi
 * 0000000140B0A1C8: mov     r10, [rdx]
 * 0000000140B0A1CB: mov     eax, [rcx]
 * 0000000140B0A1CD: add     rax, r10
 * 0000000140B0A1D0: cmp     rsi, rax
 * 0000000140B0A1D3: jnb     short loc_140B0A1DE
 * 0000000140B0A1D5: cmp     r14, r10
 * 0000000140B0A1D8: ja      loc_140B0A323
 * 0000000140B0A1DE: mov     eax, 4
 * 0000000140B0A1E3: inc     r8d
 * 0000000140B0A1E6: add     rcx, rax
 * 0000000140B0A1E9: add     rdx, 8
 * 0000000140B0A1ED: cmp     r8d, 6
 * 0000000140B0A1F1: jb      short loc_140B0A1C8
 * 0000000140B0A1F3: cmp     r9d, eax
 * 0000000140B0A1F6: jb      loc_140B0A323
 * 0000000140B0A1FC: add     [rbx+828h], r9d
 * 0000000140B0A203: mov     r10, rsi
 * 0000000140B0A206: mov     r11d, [rbx+814h]
 * 0000000140B0A20D: mov     rax, rsi
 * 0000000140B0A210: mov     r15, [rbx+818h]
 * 0000000140B0A217: cmp     rsi, r14
 * 0000000140B0A21A: jnb     short loc_140B0A22C
 * 0000000140B0A21C: mov     ecx, 40h ; '@'
 * 0000000140B0A221: prefetchnta byte ptr [rax]
 * 0000000140B0A224: add     rax, rcx
 * 0000000140B0A227: cmp     rax, r14
 * 0000000140B0A22A: jb      short loc_140B0A221
 * 0000000140B0A22C: mov     r14d, r9d
 * 0000000140B0A22F: mov     r8, r15
 * 0000000140B0A232: shr     r14d, 7
 * 0000000140B0A236: test    r14d, r14d
 * 0000000140B0A239: jz      short loc_140B0A2AF
 * 0000000140B0A23B: mov     edi, 1
 * 0000000140B0A240: mov     ebx, 0FFFFFFFFh
 * 0000000140B0A245: mov     r12, 7010008004002001h
 * 0000000140B0A24F: mov     eax, 8
 * 0000000140B0A254: xor     r8, [r10]
 * 0000000140B0A257: mov     ecx, r11d
 * 0000000140B0A25A: rol     r8, cl
 * 0000000140B0A25D: xor     r8, [r10+8]
 * 0000000140B0A261: add     r10, 10h
 * 0000000140B0A265: rol     r8, cl
 * 0000000140B0A268: sub     rax, rdi
 * 0000000140B0A26B: jnz     short loc_140B0A254
 * 0000000140B0A26D: mov     rcx, r10
 * 0000000140B0A270: sub     rcx, rsi
 * 0000000140B0A273: xor     rcx, r15
 * 0000000140B0A276: mov     rax, rcx
 * 0000000140B0A279: rol     rax, 11h
 * 0000000140B0A27D: xor     rcx, rax
 * 0000000140B0A280: mov     rax, r12
 * 0000000140B0A283: mul     rcx
 * 0000000140B0A286: xor     r11d, edx
 * 0000000140B0A289: mov     [rbp+0A70h+var_4B0], rdx
 * 0000000140B0A290: xor     r11d, eax
 * 0000000140B0A293: and     r11d, 3Fh
 * 0000000140B0A297: cmovz   r11d, edi
 * 0000000140B0A29B: add     r14d, ebx
 * 0000000140B0A29E: jnz     short loc_140B0A24F
 * 0000000140B0A2A0: mov     rbx, [rbp+0A70h+var_AB0]
 * 0000000140B0A2A4: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0A2AB: mov     r12d, [rbp+0A70h+var_AE0]
 * 0000000140B0A2AF: and     r9d, 7Fh
 * 0000000140B0A2B3: mov     esi, 1
 * 0000000140B0A2B8: cmp     r9d, 8
 * 0000000140B0A2BC: jb      short loc_140B0A2DB
 * 0000000140B0A2BE: mov     eax, r9d
 * 0000000140B0A2C1: shr     rax, 3
 * 0000000140B0A2C5: xor     r8, [r10]
 * 0000000140B0A2C8: mov     ecx, r11d
 * 0000000140B0A2CB: rol     r8, cl
 * 0000000140B0A2CE: add     r10, 8
 * 0000000140B0A2D2: add     r9d, 0FFFFFFF8h
 * 0000000140B0A2D6: sub     rax, rsi
 * 0000000140B0A2D9: jnz     short loc_140B0A2C5
 * 0000000140B0A2DB: test    r9d, r9d
 * 0000000140B0A2DE: jz      short loc_140B0A301
 * 0000000140B0A2E0: mov     edi, 0FFFFFFFFh
 * 0000000140B0A2E5: movzx   eax, byte ptr [r10]
 * 0000000140B0A2E9: mov     ecx, r11d
 * 0000000140B0A2EC: xor     r8, rax
 * 0000000140B0A2EF: add     r10, rsi
 * 0000000140B0A2F2: rol     r8, cl
 * 0000000140B0A2F5: add     r9d, edi
 * 0000000140B0A2F8: jnz     short loc_140B0A2E5
 * 0000000140B0A2FA: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0A301: mov     rax, r8
 * 0000000140B0A304: shr     rax, 7
 * 0000000140B0A308: xor     r10d, r10d
 * 0000000140B0A30B: jmp     short loc_140B0A314
 * 0000000140B0A30D: xor     r8b, al
 * 0000000140B0A310: shr     rax, 7
 * 0000000140B0A314: test    rax, rax
 * 0000000140B0A317: jnz     short loc_140B0A30D
 * 0000000140B0A319: mov     r15d, [rbp+0A70h+var_AD0]
 * 0000000140B0A31D: and     r8b, 7Fh
 * 0000000140B0A321: jmp     short loc_140B0A329
 * 0000000140B0A323: xor     r10d, r10d
 * 0000000140B0A326: mov     r8b, 80h
 * 0000000140B0A329: mov     r9, [rsp+0B70h+var_B20]
 * 0000000140B0A32E: mov     ecx, 0Ch
 * 0000000140B0A333: mov     edx, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0A339: mov     rax, [rbp+0A70h+var_AE8]
 * 0000000140B0A33D: add     r9, rcx
 * 0000000140B0A340: inc     [rbp+0A70h+var_AE8]
 * 0000000140B0A344: mov     [rsp+0B70h+var_B20], r9
 * 0000000140B0A349: mov     [rax], r8b
 * 0000000140B0A34C: mov     rax, [rsp+0B70h+var_B18]
 * 0000000140B0A351: mov     r8, [rbp+0A70h+var_AF0]
 * 0000000140B0A355: add     rax, rcx
 * 0000000140B0A358: mov     [rsp+0B70h+var_B18], rax
 * 0000000140B0A35D: cmp     rax, r8
 * 0000000140B0A360: jz      short loc_140B0A36A
 * 0000000140B0A362: mov     r12d, [rax+4]
 * 0000000140B0A366: mov     [rbp+0A70h+var_AE0], r12d
 * 0000000140B0A36A: cmp     r12d, r15d
 * 0000000140B0A36D: jbe     loc_140B0A11B
 * 0000000140B0A373: jmp     loc_140B09F5A
 * 0000000140B0A378: mov     r12, [rsp+0B70h+var_B20]
 * 0000000140B0A37D: jmp     loc_140B09F5D
 * 0000000140B0A382: xor     r8d, eax
 * 0000000140B0A385: shr     rax, 1Fh
 * 0000000140B0A389: test    rax, rax
 * 0000000140B0A38C: jnz     short loc_140B0A382
 * 0000000140B0A38E: mov     r11, [rbp+0A70h+var_AB8]
 * 0000000140B0A392: btr     r8d, 1Fh
 * 0000000140B0A397: mov     r15d, [rbp+0A70h+var_AD0]
 * 0000000140B0A39B: mov     [r11+14h], r8d
 * 0000000140B0A39F: jmp     short loc_140B0A3A4
 * 0000000140B0A3A1: xor     r10d, r10d
 * 0000000140B0A3A4: mov     r13, [rbp+0A70h+var_AF0]
 * 0000000140B0A3A8: cmp     r12, r13
 * 0000000140B0A3AB: jz      short loc_140B0A3F4
 * 0000000140B0A3AD: mov     eax, [r12]
 * 0000000140B0A3B1: mov     ecx, [r12+4]
 * 0000000140B0A3B6: cmp     eax, dword ptr [rbp+0A70h+var_AD8]
 * 0000000140B0A3B9: jb      short loc_140B0A3F4
 * 0000000140B0A3BB: cmp     ecx, r15d
 * 0000000140B0A3BE: ja      short loc_140B0A3F4
 * 0000000140B0A3C0: mov     r8, [rsp+0B70h+var_B18]
 * 0000000140B0A3C5: cmp     r8, r13
 * 0000000140B0A3C8: jz      short loc_140B0A3E7
 * 0000000140B0A3CA: mov     rax, [rbp+0A70h+var_AE8]
 * 0000000140B0A3CE: mov     byte ptr [rax], 80h
 * 0000000140B0A3D1: inc     rax
 * 0000000140B0A3D4: mov     [rbp+0A70h+var_AE8], rax
 * 0000000140B0A3D8: mov     eax, 0Ch
 * 0000000140B0A3DD: add     r8, rax
 * 0000000140B0A3E0: mov     [rsp+0B70h+var_B18], r8
 * 0000000140B0A3E5: jmp     short loc_140B0A3EC
 * 0000000140B0A3E7: mov     eax, 0Ch
 * 0000000140B0A3EC: add     r12, rax
 * 0000000140B0A3EF: mov     [rsp+0B70h+var_B20], r12
 * 0000000140B0A3F4: mov     r12, [rsp+0B70h+var_B08]
 * 0000000140B0A3F9: add     r11, 18h
 * 0000000140B0A3FD: add     r12, 28h ; '('
 * 0000000140B0A401: mov     [rbp+0A70h+var_AB8], r11
 * 0000000140B0A405: mov     [rsp+0B70h+var_B08], r12
 * 0000000140B0A40A: cmp     r11, [rsp+0B70h+var_AF8]
 * 0000000140B0A40F: jz      short loc_140B0A420
 * 0000000140B0A411: mov     r14, [rbp+0A70h+var_AC8]
 * 0000000140B0A415: mov     r15d, 1
 * 0000000140B0A41B: jmp     loc_140B09B95
 * 0000000140B0A420: mov     rsi, [rbp+0A70h+var_A40]
 * 0000000140B0A424: mov     [rbp+0A70h+var_A58], rsi
 * 0000000140B0A428: mov     rbx, rsi
 * 0000000140B0A42B: xor     r13d, r13d
 * 0000000140B0A42E: mov     r12, [rbp+0A70h+var_A98]
 * 0000000140B0A432: mov     rax, [rsi+1F8h]
 * 0000000140B0A439: mov     rcx, r12
 * 0000000140B0A43C: call    KeGuardDispatchICall
 * 0000000140B0A441: mov     ecx, [rax+94h]
 * 0000000140B0A447: cmp     ecx, 14h
 * 0000000140B0A44A: jnb     short loc_140B0A454
 * 0000000140B0A44C: mov     rsi, rbx
 * 0000000140B0A44F: jmp     loc_140B0873A
 * 0000000140B0A454: mov     eax, [rax+90h]
 * 0000000140B0A45A: lea     r15, [rax+rcx]
 * 0000000140B0A45E: add     r15, r12
 * 0000000140B0A461: lea     r14, [rax+r12]
 * 0000000140B0A465: cmp     r14, r15
 * 0000000140B0A468: jz      short loc_140B0A4BA
 * 0000000140B0A46A: cmp     [r14+0Ch], r13d
 * 0000000140B0A46E: jz      short loc_140B0A4BA
 * 0000000140B0A470: mov     eax, [r14+10h]
 * 0000000140B0A474: test    eax, eax
 * 0000000140B0A476: jz      short loc_140B0A4BA
 * 0000000140B0A478: mov     rdx, [rax+r12]
 * 0000000140B0A47C: test    rdx, rdx
 * 0000000140B0A47F: jz      short loc_140B0A4AC
 * 0000000140B0A481: mov     r8d, 8000000Fh
 * 0000000140B0A487: lea     rcx, [rbp+0A70h+var_A58]
 * 0000000140B0A48B: call    sub_140B0D7A8
 * 0000000140B0A490: mov     rsi, [rbp+0A70h+var_A58]
 * 0000000140B0A494: mov     edx, 80000000h
 * 0000000140B0A499: mov     ecx, eax
 * 0000000140B0A49B: mov     rbx, rsi
 * 0000000140B0A49E: add     eax, edx
 * 0000000140B0A4A0: test    edx, eax
 * 0000000140B0A4A2: jnz     short loc_140B0A4AC
 * 0000000140B0A4A4: cmp     ecx, 0C000010Eh
 * 0000000140B0A4AA: jnz     short loc_140B0A4B2
 * 0000000140B0A4AC: add     r14, 14h
 * 0000000140B0A4B0: jmp     short loc_140B0A465
 * 0000000140B0A4B2: xor     r11d, r11d
 * 0000000140B0A4B5: jmp     loc_140B083F5
 * 0000000140B0A4BA: mov     [rsp+0B70h+var_B10], rsi
 * 0000000140B0A4BF: mov     rax, [rbx+568h]
 * 0000000140B0A4C6: lea     rdx, [rbp+0A70h+var_128]
 * 0000000140B0A4CD: mov     rcx, [rax+20h]
 * 0000000140B0A4D1: mov     rax, [rbx+200h]
 * 0000000140B0A4D8: call    KeGuardDispatchICall
 * 0000000140B0A4DD: mov     rcx, [rbp+0A70h+var_120]
 * 0000000140B0A4E4: xor     r11d, r11d
 * 0000000140B0A4E7: test    rcx, rcx
 * 0000000140B0A4EA: jz      loc_140B0ABD4
 * 0000000140B0A4F0: mov     [rbx+978h], rcx
 * 0000000140B0A4F7: mov     rax, [rbx+1F8h]
 * 0000000140B0A4FE: call    KeGuardDispatchICall
 * 0000000140B0A503: xor     r11d, r11d
 * 0000000140B0A506: test    rax, rax
 * 0000000140B0A509: jz      loc_140B0ABD4
 * 0000000140B0A50F: mov     eax, [rax+50h]
 * 0000000140B0A512: mov     [rbx+974h], eax
 * 0000000140B0A518: mov     dword ptr [rbx+958h], 8
 * 0000000140B0A522: mov     r15, [rbx+608h]
 * 0000000140B0A529: test    r15, r15
 * 0000000140B0A52C: jz      loc_140B0A732
 * 0000000140B0A532: cmp     [r15], r11
 * 0000000140B0A535: jz      loc_140B0A732
 * 0000000140B0A53B: mov     r9d, [rbx+838h]
 * 0000000140B0A542: mov     r12d, 20h ; ' '
 * 0000000140B0A548: mov     r13d, [rbx+7E4h]
 * 0000000140B0A54F: cmp     r9d, 7
 * 0000000140B0A553: mov     r8d, [rbx+924h]
 * 0000000140B0A55A: cmovnz  r12d, r11d
 * 0000000140B0A55E: mov     dword ptr [rbp+0A70h+arg_8], r9d
 * 0000000140B0A565: lea     eax, [r13+30h]
 * 0000000140B0A569: cmp     eax, [rbx+0A1Ch]
 * 0000000140B0A56F: jbe     loc_140B0A65D
 * 0000000140B0A575: mov     edx, eax
 * 0000000140B0A577: mov     rcx, rbx
 * 0000000140B0A57A: call    sub_140B11020
 * 0000000140B0A57F: xor     r11d, r11d
 * 0000000140B0A582: mov     r14, rax
 * 0000000140B0A585: test    rax, rax
 * 0000000140B0A588: jnz     short loc_140B0A592
 * 0000000140B0A58A: mov     rbx, rsi
 * 0000000140B0A58D: jmp     loc_140B083F5
 * 0000000140B0A592: mov     ecx, [rbx+990h]
 * 0000000140B0A598: test    cl, 4
 * 0000000140B0A59B: jnz     loc_140B0A64C
 * 0000000140B0A5A1: mov     eax, [rbx+7E4h]
 * 0000000140B0A5A7: and     ecx, 20000000h
 * 0000000140B0A5AD: mov     r8, [rbx+7C8h]
 * 0000000140B0A5B4: neg     ecx
 * 0000000140B0A5B6: mov     r9d, 1
 * 0000000140B0A5BC: sbb     ecx, ecx
 * 0000000140B0A5BE: and     ecx, [rbx+924h]
 * 0000000140B0A5C4: cmp     eax, 8
 * 0000000140B0A5C7: jb      short loc_140B0A5DE
 * 0000000140B0A5C9: mov     edx, eax
 * 0000000140B0A5CB: shr     rdx, 3
 * 0000000140B0A5CF: mov     [rbx], r11
 * 0000000140B0A5D2: add     eax, 0FFFFFFF8h
 * 0000000140B0A5D5: add     rbx, 8
 * 0000000140B0A5D9: sub     rdx, r9
 * 0000000140B0A5DC: jnz     short loc_140B0A5CF
 * 0000000140B0A5DE: test    eax, eax
 * 0000000140B0A5E0: jz      short loc_140B0A5F1
 * 0000000140B0A5E2: mov     edx, 0FFFFFFFFh
 * 0000000140B0A5E7: mov     [rbx], r11b
 * 0000000140B0A5EA: add     rbx, r9
 * 0000000140B0A5ED: add     eax, edx
 * 0000000140B0A5EF: jnz     short loc_140B0A5E7
 * 0000000140B0A5F1: mov     ebx, [r14+924h]
 * 0000000140B0A5F8: mov     [r14+924h], ecx
 * 0000000140B0A5FF: cmp     ecx, 3
 * 0000000140B0A602: jz      short loc_140B0A633
 * 0000000140B0A604: test    dword ptr [r14+990h], 10000000h
 * 0000000140B0A60F: jnz     short loc_140B0A62A
 * 0000000140B0A611: test    ecx, ecx
 * 0000000140B0A613: jz      short loc_140B0A62A
 * 0000000140B0A615: mov     rax, [r14+228h]
 * 0000000140B0A61C: lea     rcx, [r8-8]
 * 0000000140B0A620: mov     rdx, [rcx]
 * 0000000140B0A623: call    KeGuardDispatchICall
 * 0000000140B0A628: jmp     short loc_140B0A642
 * 0000000140B0A62A: mov     rax, [r14+0F8h]
 * 0000000140B0A631: jmp     short loc_140B0A63A
 * 0000000140B0A633: mov     rax, [r14+368h]
 * 0000000140B0A63A: mov     rcx, r8
 * 0000000140B0A63D: call    KeGuardDispatchICall
 * 0000000140B0A642: mov     [r14+924h], ebx
 * 0000000140B0A649: xor     r11d, r11d
 * 0000000140B0A64C: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 0000000140B0A654: mov     r9d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0A65B: jmp     short loc_140B0A666
 * 0000000140B0A65D: mov     r14, rbx
 * 0000000140B0A660: mov     [rbx+7E4h], eax
 * 0000000140B0A666: mov     r8d, 1
 * 0000000140B0A66C: lea     rbx, [r14+r13]
 * 0000000140B0A670: add     [r14+80Ch], r8d
 * 0000000140B0A677: mov     rax, rbx
 * 0000000140B0A67A: lea     ecx, [r8+2Fh]
 * 0000000140B0A67E: lea     edx, [rcx-2Ah]
 * 0000000140B0A681: mov     [rax], r11
 * 0000000140B0A684: add     ecx, 0FFFFFFF8h
 * 0000000140B0A687: add     rax, 8
 * 0000000140B0A68B: sub     rdx, r8
 * 0000000140B0A68E: jnz     short loc_140B0A681
 * 0000000140B0A690: test    ecx, ecx
 * 0000000140B0A692: jz      short loc_140B0A6A3
 * 0000000140B0A694: mov     edx, 0FFFFFFFFh
 * 0000000140B0A699: mov     [rax], r11b
 * 0000000140B0A69C: add     rax, r8
 * 0000000140B0A69F: add     ecx, edx
 * 0000000140B0A6A1: jnz     short loc_140B0A699
 * 0000000140B0A6A3: mov     [rbx], r12d
 * 0000000140B0A6A6: mov     [rbx+8], r15
 * 0000000140B0A6AA: cmp     r9d, 7
 * 0000000140B0A6AE: jnz     short loc_140B0A6C8
 * 0000000140B0A6B0: lea     r9, [rbx+18h]
 * 0000000140B0A6B4: mov     r8d, 8
 * 0000000140B0A6BA: mov     rdx, r15
 * 0000000140B0A6BD: mov     rcx, r14
 * 0000000140B0A6C0: call    sub_1403F1D6C
 * 0000000140B0A6C5: xor     r11d, r11d
 * 0000000140B0A6C8: mov     dword ptr [rbx+10h], 8
 * 0000000140B0A6CF: lea     r8, [r15+8]
 * 0000000140B0A6D3: add     dword ptr [r14+828h], 8
 * 0000000140B0A6DB: mov     rdx, r15
 * 0000000140B0A6DE: mov     ecx, [r14+814h]
 * 0000000140B0A6E5: mov     rax, [r14+818h]
 * 0000000140B0A6EC: cmp     r15, r8
 * 0000000140B0A6EF: jnb     short loc_140B0A702
 * 0000000140B0A6F1: mov     r9d, 40h ; '@'
 * 0000000140B0A6F7: prefetchnta byte ptr [rdx]
 * 0000000140B0A6FA: add     rdx, r9
 * 0000000140B0A6FD: cmp     rdx, r8
 * 0000000140B0A700: jb      short loc_140B0A6F7
 * 0000000140B0A702: xor     rax, [r15]
 * 0000000140B0A705: rol     rax, cl
 * 0000000140B0A708: mov     rcx, rax
 * 0000000140B0A70B: jmp     short loc_140B0A70F
 * 0000000140B0A70D: xor     eax, ecx
 * 0000000140B0A70F: shr     rcx, 1Fh
 * 0000000140B0A713: test    rcx, rcx
 * 0000000140B0A716: jnz     short loc_140B0A70D
 * 0000000140B0A718: btr     eax, 1Fh
 * 0000000140B0A71C: mov     [rsp+0B70h+var_B10], r14
 * 0000000140B0A721: mov     [rbx+14h], eax
 * 0000000140B0A724: mov     rsi, r14
 * 0000000140B0A727: add     dword ptr [r14+828h], 8
 * 0000000140B0A72F: mov     rbx, r14
 * 0000000140B0A732: mov     dword ptr [rbx+958h], 9
 * 0000000140B0A73C: mov     r15, [rbx+608h]
 * 0000000140B0A743: test    r15, r15
 * 0000000140B0A746: jz      loc_140B0ABC5
 * 0000000140B0A74C: mov     r15, [r15]
 * 0000000140B0A74F: test    r15, r15
 * 0000000140B0A752: jz      loc_140B0ABC5
 * 0000000140B0A758: lock or [rsp+0B70h+var_B70], r11d
 * 0000000140B0A75D: mov     r12d, [r15+7E4h]
 * 0000000140B0A764: mov     r9, r15
 * 0000000140B0A767: mov     r10d, [r15+814h]
 * 0000000140B0A76E: mov     rax, r15
 * 0000000140B0A771: mov     r14, [r15+818h]
 * 0000000140B0A778: mov     dword ptr [rbp+0A70h+arg_8], r12d
 * 0000000140B0A77F: lea     rcx, [r15+r12]
 * 0000000140B0A783: cmp     r15, rcx
 * 0000000140B0A786: jnb     short loc_140B0A798
 * 0000000140B0A788: mov     edx, 40h ; '@'
 * 0000000140B0A78D: prefetchnta byte ptr [rax]
 * 0000000140B0A790: add     rax, rdx
 * 0000000140B0A793: cmp     rax, rcx
 * 0000000140B0A796: jb      short loc_140B0A78D
 * 0000000140B0A798: mov     r11d, r12d
 * 0000000140B0A79B: mov     r8, r14
 * 0000000140B0A79E: shr     r11d, 7
 * 0000000140B0A7A2: mov     r13d, 1
 * 0000000140B0A7A8: test    r11d, r11d
 * 0000000140B0A7AB: jz      short loc_140B0A821
 * 0000000140B0A7AD: mov     rsi, 7010008004002001h
 * 0000000140B0A7B7: mov     r12d, 0FFFFFFFFh
 * 0000000140B0A7BD: mov     eax, 8
 * 0000000140B0A7C2: xor     r8, [r9]
 * 0000000140B0A7C5: mov     ecx, r10d
 * 0000000140B0A7C8: rol     r8, cl
 * 0000000140B0A7CB: xor     r8, [r9+8]
 * 0000000140B0A7CF: add     r9, 10h
 * 0000000140B0A7D3: rol     r8, cl
 * 0000000140B0A7D6: sub     rax, r13
 * 0000000140B0A7D9: jnz     short loc_140B0A7C2
 * 0000000140B0A7DB: mov     rcx, r9
 * 0000000140B0A7DE: sub     rcx, r15
 * 0000000140B0A7E1: xor     rcx, r14
 * 0000000140B0A7E4: mov     rax, rcx
 * 0000000140B0A7E7: rol     rax, 11h
 * 0000000140B0A7EB: xor     rcx, rax
 * 0000000140B0A7EE: mov     rax, rsi
 * 0000000140B0A7F1: mul     rcx
 * 0000000140B0A7F4: xor     r10d, edx
 * 0000000140B0A7F7: mov     [rbp+0A70h+var_4A0], rdx
 * 0000000140B0A7FE: xor     r10d, eax
 * 0000000140B0A801: and     r10d, 3Fh
 * 0000000140B0A805: cmovz   r10d, r13d
 * 0000000140B0A809: add     r11d, r12d
 * 0000000140B0A80C: jnz     short loc_140B0A7BD
 * 0000000140B0A80E: mov     rsi, [rsp+0B70h+var_B10]
 * 0000000140B0A813: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0A81A: mov     r12d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0A821: mov     edx, r12d
 * 0000000140B0A824: and     edx, 7Fh
 * 0000000140B0A827: cmp     edx, 8
 * 0000000140B0A82A: jb      short loc_140B0A847
 * 0000000140B0A82C: mov     eax, edx
 * 0000000140B0A82E: shr     rax, 3
 * 0000000140B0A832: xor     r8, [r9]
 * 0000000140B0A835: mov     ecx, r10d
 * 0000000140B0A838: rol     r8, cl
 * 0000000140B0A83B: add     r9, 8
 * 0000000140B0A83F: add     edx, 0FFFFFFF8h
 * 0000000140B0A842: sub     rax, r13
 * 0000000140B0A845: jnz     short loc_140B0A832
 * 0000000140B0A847: xor     r11d, r11d
 * 0000000140B0A84A: test    edx, edx
 * 0000000140B0A84C: jz      short loc_140B0A86E
 * 0000000140B0A84E: mov     edi, 0FFFFFFFFh
 * 0000000140B0A853: movzx   eax, byte ptr [r9]
 * 0000000140B0A857: mov     ecx, r10d
 * 0000000140B0A85A: xor     r8, rax
 * 0000000140B0A85D: add     r9, r13
 * 0000000140B0A860: rol     r8, cl
 * 0000000140B0A863: add     edx, edi
 * 0000000140B0A865: jnz     short loc_140B0A853
 * 0000000140B0A867: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0A86E: mov     rax, [rbx+610h]
 * 0000000140B0A875: cmp     r8, [rax]
 * 0000000140B0A878: jz      loc_140B0A907
 * 0000000140B0A87E: mov     rax, [rbx+588h]
 * 0000000140B0A885: mov     [rax], r15
 * 0000000140B0A888: mov     [rax+10h], r12d
 * 0000000140B0A88C: mov     rax, [rbx+610h]
 * 0000000140B0A893: mov     rdx, [rax]
 * 0000000140B0A896: cmp     [rbx+8F8h], r11d
 * 0000000140B0A89D: jnz     loc_140B083FB
 * 0000000140B0A8A3: mov     rax, [rbx+588h]
 * 0000000140B0A8AA: mov     rcx, r8
 * 0000000140B0A8AD: xor     rcx, rdx
 * 0000000140B0A8B0: mov     [rax+18h], rcx
 * 0000000140B0A8B4: cmp     [rbx+8F8h], r11d
 * 0000000140B0A8BB: jnz     loc_140B083FB
 * 0000000140B0A8C1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0A8CB: add     rax, rbx
 * 0000000140B0A8CE: mov     [rbx+900h], rax
 * 0000000140B0A8D5: mov     [rbx+908h], r11
 * 0000000140B0A8DC: mov     qword ptr [rbx+910h], 111h
 * 0000000140B0A8E7: mov     [rbx+918h], r8
 * 0000000140B0A8EE: xor     edx, edx
 * 0000000140B0A8F0: mov     [rbx+8F8h], r13d
 * 0000000140B0A8F7: mov     rcx, rbx
 * 0000000140B0A8FA: call    $$ba
 * 0000000140B0A8FF: xor     r11d, r11d
 * 0000000140B0A902: jmp     loc_140B083FB
 * 0000000140B0A907: mov     r9d, [rbx+838h]
 * 0000000140B0A90E: mov     r13d, 20h ; ' '
 * 0000000140B0A914: mov     eax, [rbx+7E4h]
 * 0000000140B0A91A: cmp     r9d, 7
 * 0000000140B0A91E: mov     r8d, [rbx+924h]
 * 0000000140B0A925: cmovnz  r13d, r11d
 * 0000000140B0A929: mov     [rbp+0A70h+var_AD0], eax
 * 0000000140B0A92C: add     eax, 30h ; '0'
 * 0000000140B0A92F: mov     [rbp+0A70h+var_AE0], r9d
 * 0000000140B0A933: cmp     eax, [rbx+0A1Ch]
 * 0000000140B0A939: jbe     loc_140B0AA1E
 * 0000000140B0A93F: mov     edx, eax
 * 0000000140B0A941: mov     rcx, rbx
 * 0000000140B0A944: call    sub_140B11020
 * 0000000140B0A949: xor     r11d, r11d
 * 0000000140B0A94C: mov     r14, rax
 * 0000000140B0A94F: test    rax, rax
 * 0000000140B0A952: jz      loc_140B0A58A
 * 0000000140B0A958: mov     ecx, [rbx+990h]
 * 0000000140B0A95E: test    cl, 4
 * 0000000140B0A961: jnz     loc_140B0AA10
 * 0000000140B0A967: mov     eax, [rbx+7E4h]
 * 0000000140B0A96D: lea     r9d, [r11+1]
 * 0000000140B0A971: mov     r8, [rbx+7C8h]
 * 0000000140B0A978: and     ecx, 20000000h
 * 0000000140B0A97E: neg     ecx
 * 0000000140B0A980: sbb     ecx, ecx
 * 0000000140B0A982: and     ecx, [rbx+924h]
 * 0000000140B0A988: cmp     eax, 8
 * 0000000140B0A98B: jb      short loc_140B0A9A2
 * 0000000140B0A98D: mov     edx, eax
 * 0000000140B0A98F: shr     rdx, 3
 * 0000000140B0A993: mov     [rbx], r11
 * 0000000140B0A996: add     eax, 0FFFFFFF8h
 * 0000000140B0A999: add     rbx, 8
 * 0000000140B0A99D: sub     rdx, r9
 * 0000000140B0A9A0: jnz     short loc_140B0A993
 * 0000000140B0A9A2: test    eax, eax
 * 0000000140B0A9A4: jz      short loc_140B0A9B5
 * 0000000140B0A9A6: mov     edx, 0FFFFFFFFh
 * 0000000140B0A9AB: mov     [rbx], r11b
 * 0000000140B0A9AE: add     rbx, r9
 * 0000000140B0A9B1: add     eax, edx
 * 0000000140B0A9B3: jnz     short loc_140B0A9AB
 * 0000000140B0A9B5: mov     ebx, [r14+924h]
 * 0000000140B0A9BC: mov     [r14+924h], ecx
 * 0000000140B0A9C3: cmp     ecx, 3
 * 0000000140B0A9C6: jz      short loc_140B0A9F7
 * 0000000140B0A9C8: test    dword ptr [r14+990h], 10000000h
 * 0000000140B0A9D3: jnz     short loc_140B0A9EE
 * 0000000140B0A9D5: test    ecx, ecx
 * 0000000140B0A9D7: jz      short loc_140B0A9EE
 * 0000000140B0A9D9: mov     rax, [r14+228h]
 * 0000000140B0A9E0: lea     rcx, [r8-8]
 * 0000000140B0A9E4: mov     rdx, [rcx]
 * 0000000140B0A9E7: call    KeGuardDispatchICall
 * 0000000140B0A9EC: jmp     short loc_140B0AA06
 * 0000000140B0A9EE: mov     rax, [r14+0F8h]
 * 0000000140B0A9F5: jmp     short loc_140B0A9FE
 * 0000000140B0A9F7: mov     rax, [r14+368h]
 * 0000000140B0A9FE: mov     rcx, r8
 * 0000000140B0AA01: call    KeGuardDispatchICall
 * 0000000140B0AA06: mov     [r14+924h], ebx
 * 0000000140B0AA0D: xor     r11d, r11d
 * 0000000140B0AA10: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 0000000140B0AA18: mov     r9d, [rbp+0A70h+var_AE0]
 * 0000000140B0AA1C: jmp     short loc_140B0AA27
 * 0000000140B0AA1E: mov     r14, rbx
 * 0000000140B0AA21: mov     [rbx+7E4h], eax
 * 0000000140B0AA27: mov     ebx, [rbp+0A70h+var_AD0]
 * 0000000140B0AA2A: mov     r8d, 1
 * 0000000140B0AA30: add     [r14+80Ch], r8d
 * 0000000140B0AA37: add     rbx, r14
 * 0000000140B0AA3A: mov     [rsp+0B70h+var_AF8], rbx
 * 0000000140B0AA3F: mov     rax, rbx
 * 0000000140B0AA42: lea     ecx, [r8+2Fh]
 * 0000000140B0AA46: lea     edx, [rcx-2Ah]
 * 0000000140B0AA49: mov     [rax], r11
 * 0000000140B0AA4C: add     ecx, 0FFFFFFF8h
 * 0000000140B0AA4F: add     rax, 8
 * 0000000140B0AA53: sub     rdx, r8
 * 0000000140B0AA56: jnz     short loc_140B0AA49
 * 0000000140B0AA58: test    ecx, ecx
 * 0000000140B0AA5A: jz      short loc_140B0AA6B
 * 0000000140B0AA5C: mov     edx, 0FFFFFFFFh
 * 0000000140B0AA61: mov     [rax], r11b
 * 0000000140B0AA64: add     rax, r8
 * 0000000140B0AA67: add     ecx, edx
 * 0000000140B0AA69: jnz     short loc_140B0AA61
 * 0000000140B0AA6B: mov     [rbx], r13d
 * 0000000140B0AA6E: mov     [rbx+8], r15
 * 0000000140B0AA72: cmp     r9d, 7
 * 0000000140B0AA76: jnz     short loc_140B0AA8F
 * 0000000140B0AA78: test    r12d, r12d
 * 0000000140B0AA7B: jz      short loc_140B0AA8F
 * 0000000140B0AA7D: lea     r9, [rbx+18h]
 * 0000000140B0AA81: mov     r8d, r12d
 * 0000000140B0AA84: mov     rdx, r15
 * 0000000140B0AA87: mov     rcx, r14
 * 0000000140B0AA8A: call    sub_1403F1D6C
 * 0000000140B0AA8F: mov     [rbx+10h], r12d
 * 0000000140B0AA93: mov     r9, r15
 * 0000000140B0AA96: add     [r14+828h], r12d
 * 0000000140B0AA9D: mov     rax, r15
 * 0000000140B0AAA0: mov     r10d, [r14+814h]
 * 0000000140B0AAA7: mov     rsi, [r14+818h]
 * 0000000140B0AAAE: mov     ecx, r12d
 * 0000000140B0AAB1: add     rcx, r15
 * 0000000140B0AAB4: cmp     r15, rcx
 * 0000000140B0AAB7: jnb     short loc_140B0AAC9
 * 0000000140B0AAB9: mov     edx, 40h ; '@'
 * 0000000140B0AABE: prefetchnta byte ptr [rax]
 * 0000000140B0AAC1: add     rax, rdx
 * 0000000140B0AAC4: cmp     rax, rcx
 * 0000000140B0AAC7: jb      short loc_140B0AABE
 * 0000000140B0AAC9: mov     r11d, r12d
 * 0000000140B0AACC: mov     r8, rsi
 * 0000000140B0AACF: shr     r11d, 7
 * 0000000140B0AAD3: mov     r13d, 1
 * 0000000140B0AAD9: test    r11d, r11d
 * 0000000140B0AADC: jz      short loc_140B0AB51
 * 0000000140B0AADE: mov     ebx, 0FFFFFFFFh
 * 0000000140B0AAE3: mov     r12, 7010008004002001h
 * 0000000140B0AAED: mov     eax, 8
 * 0000000140B0AAF2: xor     r8, [r9]
 * 0000000140B0AAF5: mov     ecx, r10d
 * 0000000140B0AAF8: rol     r8, cl
 * 0000000140B0AAFB: xor     r8, [r9+8]
 * 0000000140B0AAFF: add     r9, 10h
 * 0000000140B0AB03: rol     r8, cl
 * 0000000140B0AB06: sub     rax, r13
 * 0000000140B0AB09: jnz     short loc_140B0AAF2
 * 0000000140B0AB0B: mov     rcx, r9
 * 0000000140B0AB0E: sub     rcx, r15
 * 0000000140B0AB11: xor     rcx, rsi
 * 0000000140B0AB14: mov     rax, rcx
 * 0000000140B0AB17: rol     rax, 11h
 * 0000000140B0AB1B: xor     rcx, rax
 * 0000000140B0AB1E: mov     rax, r12
 * 0000000140B0AB21: mul     rcx
 * 0000000140B0AB24: xor     r10d, edx
 * 0000000140B0AB27: mov     [rbp+0A70h+var_498], rdx
 * 0000000140B0AB2E: xor     r10d, eax
 * 0000000140B0AB31: and     r10d, 3Fh
 * 0000000140B0AB35: cmovz   r10d, r13d
 * 0000000140B0AB39: add     r11d, ebx
 * 0000000140B0AB3C: jnz     short loc_140B0AAED
 * 0000000140B0AB3E: mov     r12d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0AB45: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0AB4C: mov     rbx, [rsp+0B70h+var_AF8]
 * 0000000140B0AB51: mov     edx, r12d
 * 0000000140B0AB54: and     edx, 7Fh
 * 0000000140B0AB57: cmp     edx, 8
 * 0000000140B0AB5A: jb      short loc_140B0AB77
 * 0000000140B0AB5C: mov     eax, edx
 * 0000000140B0AB5E: shr     rax, 3
 * 0000000140B0AB62: xor     r8, [r9]
 * 0000000140B0AB65: mov     ecx, r10d
 * 0000000140B0AB68: rol     r8, cl
 * 0000000140B0AB6B: add     r9, 8
 * 0000000140B0AB6F: add     edx, 0FFFFFFF8h
 * 0000000140B0AB72: sub     rax, r13
 * 0000000140B0AB75: jnz     short loc_140B0AB62
 * 0000000140B0AB77: xor     r11d, r11d
 * 0000000140B0AB7A: test    edx, edx
 * 0000000140B0AB7C: jz      short loc_140B0AB9E
 * 0000000140B0AB7E: mov     edi, 0FFFFFFFFh
 * 0000000140B0AB83: movzx   eax, byte ptr [r9]
 * 0000000140B0AB87: mov     ecx, r10d
 * 0000000140B0AB8A: xor     r8, rax
 * 0000000140B0AB8D: add     r9, r13
 * 0000000140B0AB90: rol     r8, cl
 * 0000000140B0AB93: add     edx, edi
 * 0000000140B0AB95: jnz     short loc_140B0AB83
 * 0000000140B0AB97: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0AB9E: mov     rax, r8
 * 0000000140B0ABA1: jmp     short loc_140B0ABA6
 * 0000000140B0ABA3: xor     r8d, eax
 * 0000000140B0ABA6: shr     rax, 1Fh
 * 0000000140B0ABAA: test    rax, rax
 * 0000000140B0ABAD: jnz     short loc_140B0ABA3
 * 0000000140B0ABAF: btr     r8d, 1Fh
 * 0000000140B0ABB4: mov     rsi, r14
 * 0000000140B0ABB7: mov     [rbx+14h], r8d
 * 0000000140B0ABBB: mov     rbx, r14
 * 0000000140B0ABBE: add     [r14+828h], r12d
 * 0000000140B0ABC5: mov     dword ptr [rbx+958h], 0Bh
 * 0000000140B0ABCF: jmp     loc_140B083F5
 * 0000000140B0ABD4: cmp     [rbx+8F8h], r11d
 * 0000000140B0ABDB: jnz     loc_140B083F5
 * 0000000140B0ABE1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0ABEB: mov     r13d, 1
 * 0000000140B0ABF1: add     rax, rbx
 * 0000000140B0ABF4: mov     [rbx+900h], rax
 * 0000000140B0ABFB: mov     [rbx+908h], r11
 * 0000000140B0AC02: mov     qword ptr [rbx+910h], 105h
 * 0000000140B0AC0D: mov     qword ptr [rbx+918h], 0FFFFFFFFC000007Bh
 * 0000000140B0AC18: jmp     loc_140B0A8EE
 * 0000000140B0AC1D: mov     r15d, 0FFFFFFFFh
 * 0000000140B0AC23: mov     [rbx+970h], r15d
 * 0000000140B0AC2A: jmp     loc_140B0AE64
 * 0000000140B0AC2F: test    r14, r14
 * 0000000140B0AC32: jz      loc_140B0AE64
 * 0000000140B0AC38: mov     rax, [rbx+288h]
 * 0000000140B0AC3F: mov     rcx, r14
 * 0000000140B0AC42: jmp     loc_140B0AE5F
 * 0000000140B0AC47: mov     eax, [rsi+830h]
 * 0000000140B0AC4D: test    r13b, al
 * 0000000140B0AC50: jz      loc_140B0AE64
 * 0000000140B0AC56: mov     ecx, [rsi+970h]
 * 0000000140B0AC5C: mov     r15d, 0FFFFFFFFh
 * 0000000140B0AC62: cmp     ecx, r15d
 * 0000000140B0AC65: jz      short loc_140B0AC80
 * 0000000140B0AC67: mov     rax, [rsi+278h]
 * 0000000140B0AC6E: call    KeGuardDispatchICall
 * 0000000140B0AC73: xor     r14d, r14d
 * 0000000140B0AC76: mov     rbx, rax
 * 0000000140B0AC79: test    rax, rax
 * 0000000140B0AC7C: jnz     short loc_140B0AC9D
 * 0000000140B0AC7E: jmp     short loc_140B0AC83
 * 0000000140B0AC80: xor     r14d, r14d
 * 0000000140B0AC83: mov     rax, [rsi+280h]
 * 0000000140B0AC8A: xor     ecx, ecx
 * 0000000140B0AC8C: call    KeGuardDispatchICall
 * 0000000140B0AC91: mov     rbx, rax
 * 0000000140B0AC94: test    rax, rax
 * 0000000140B0AC97: jz      loc_140B0AE64
 * 0000000140B0AC9D: mov     rax, [rsi+290h]
 * 0000000140B0ACA4: lea     rdx, [rbp+0A70h+var_680]
 * 0000000140B0ACAB: mov     rcx, rbx
 * 0000000140B0ACAE: call    KeGuardDispatchICall
 * 0000000140B0ACB3: test    eax, eax
 * 0000000140B0ACB5: js      loc_140B0AE55
 * 0000000140B0ACBB: mov     [rsi+980h], rbx
 * 0000000140B0ACC2: mov     rax, [rsi+2B8h]
 * 0000000140B0ACC9: call    KeGuardDispatchICall
 * 0000000140B0ACCE: mov     rbx, rax
 * 0000000140B0ACD1: mov     rax, [rsi+2D8h]
 * 0000000140B0ACD8: mov     rcx, rbx
 * 0000000140B0ACDB: call    KeGuardDispatchICall
 * 0000000140B0ACE0: mov     rdx, rax
 * 0000000140B0ACE3: test    rax, rax
 * 0000000140B0ACE6: jnz     short loc_140B0ACED
 * 0000000140B0ACE8: lea     ecx, [rax+4]
 * 0000000140B0ACEB: jmp     short loc_140B0ACFF
 * 0000000140B0ACED: mov     rax, [rsi+2E8h]
 * 0000000140B0ACF4: mov     rcx, rbx
 * 0000000140B0ACF7: call    KeGuardDispatchICall
 * 0000000140B0ACFC: mov     ecx, r14d
 * 0000000140B0ACFF: mov     eax, [rsi+994h]
 * 0000000140B0AD05: and     eax, 0FFFFFFFBh
 * 0000000140B0AD08: or      eax, ecx
 * 0000000140B0AD0A: mov     [rsi+994h], eax
 * 0000000140B0AD10: add     dword ptr [rsi+828h], 10000h
 * 0000000140B0AD1A: mov     rax, [rsi+960h]
 * 0000000140B0AD21: mov     rcx, [rax]
 * 0000000140B0AD24: cmp     rcx, [rsi+968h]
 * 0000000140B0AD2B: jnz     loc_140B0ADC7
 * 0000000140B0AD31: mov     rax, [rsi+568h]
 * 0000000140B0AD38: cmp     [rax+30h], r14d
 * 0000000140B0AD3C: jz      loc_140B0ADC7
 * 0000000140B0AD42: lock or [rsp+0B70h+var_B70], r14d
 * 0000000140B0AD47: mov     rax, [rsi+960h]
 * 0000000140B0AD4E: mov     rcx, [rax]
 * 0000000140B0AD51: cmp     rcx, [rsi+968h]
 * 0000000140B0AD58: jnz     short loc_140B0ADC7
 * 0000000140B0AD5A: mov     rax, [rsi+960h]
 * 0000000140B0AD61: mov     rdx, [rax]
 * 0000000140B0AD64: mov     rcx, [rsi+968h]
 * 0000000140B0AD6B: cmp     [rsi+8F8h], r14d
 * 0000000140B0AD72: jnz     short loc_140B0ADC7
 * 0000000140B0AD74: mov     rax, [rsi+588h]
 * 0000000140B0AD7B: xor     rcx, rdx
 * 0000000140B0AD7E: mov     [rax+18h], rcx
 * 0000000140B0AD82: mov     rcx, [rsi+968h]
 * 0000000140B0AD89: cmp     [rsi+8F8h], r14d
 * 0000000140B0AD90: jnz     short loc_140B0ADC7
 * 0000000140B0AD92: lea     rax, [rsi+r12]
 * 0000000140B0AD96: xor     edx, edx
 * 0000000140B0AD98: mov     [rsi+900h], rax
 * 0000000140B0AD9F: mov     [rsi+908h], r14
 * 0000000140B0ADA6: mov     qword ptr [rsi+910h], 103h
 * 0000000140B0ADB1: mov     [rsi+918h], rcx
 * 0000000140B0ADB8: mov     rcx, rsi
 * 0000000140B0ADBB: mov     [rsi+8F8h], r13d
 * 0000000140B0ADC2: call    $$ba
 * 0000000140B0ADC7: xor     r11d, r11d
 * 0000000140B0ADCA: bt      dword ptr [rsi+990h], 0Fh
 * 0000000140B0ADD2: jb      short loc_140B0ADE1
 * 0000000140B0ADD4: cmp     [rsi+8F8h], r11d
 * 0000000140B0ADDB: jnz     loc_140B0AE64
 * 0000000140B0ADE1: mov     rbx, [rsi+980h]
 * 0000000140B0ADE8: lea     rdx, [rbp+0A70h+var_680]
 * 0000000140B0ADEF: mov     [rsi+980h], r11
 * 0000000140B0ADF6: mov     rcx, rbx
 * 0000000140B0ADF9: mov     rax, [rsi+298h]
 * 0000000140B0AE00: call    KeGuardDispatchICall
 * 0000000140B0AE05: mov     eax, [rsi+990h]
 * 0000000140B0AE0B: test    r13b, al
 * 0000000140B0AE0E: jz      short loc_140B0AE50
 * 0000000140B0AE10: and     eax, 0FFFFFFFEh
 * 0000000140B0AE13: mov     rcx, rbx
 * 0000000140B0AE16: mov     [rsi+990h], eax
 * 0000000140B0AE1C: mov     rax, [rsi+280h]
 * 0000000140B0AE23: call    KeGuardDispatchICall
 * 0000000140B0AE28: mov     rbx, rax
 * 0000000140B0AE2B: test    rax, rax
 * 0000000140B0AE2E: jz      short loc_140B0AE47
 * 0000000140B0AE30: mov     rax, [rsi+2A0h]
 * 0000000140B0AE37: mov     rcx, rbx
 * 0000000140B0AE3A: call    KeGuardDispatchICall
 * 0000000140B0AE3F: mov     [rsi+970h], eax
 * 0000000140B0AE45: jmp     short loc_140B0AE55
 * 0000000140B0AE47: mov     [rsi+970h], r15d
 * 0000000140B0AE4E: jmp     short loc_140B0AE64
 * 0000000140B0AE50: test    rbx, rbx
 * 0000000140B0AE53: jz      short loc_140B0AE64
 * 0000000140B0AE55: mov     rcx, rbx
 * 0000000140B0AE58: mov     rax, [rsi+288h]
 * 0000000140B0AE5F: call    KeGuardDispatchICall
 * 0000000140B0AE64: test    dword ptr [rsi+990h], 2000000h
 * 0000000140B0AE6E: jz      loc_140B0AEF9
 * 0000000140B0AE74: mov     rbx, [rsi+998h]
 * 0000000140B0AE7B: mov     rax, [rsi+390h]
 * 0000000140B0AE82: mov     rcx, rbx
 * 0000000140B0AE85: call    KeGuardDispatchICall
 * 0000000140B0AE8A: xor     r13d, r13d
 * 0000000140B0AE8D: test    eax, eax
 * 0000000140B0AE8F: jz      short loc_140B0AEDB
 * 0000000140B0AE91: cmp     [rsi+8F8h], r13d
 * 0000000140B0AE98: jnz     short loc_140B0AEDB
 * 0000000140B0AE9A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0AEA4: xor     edx, edx
 * 0000000140B0AEA6: add     rax, rsi
 * 0000000140B0AEA9: mov     rcx, rsi
 * 0000000140B0AEAC: mov     [rsi+900h], rax
 * 0000000140B0AEB3: lea     eax, [r13+1]
 * 0000000140B0AEB7: mov     [rsi+908h], r13
 * 0000000140B0AEBE: mov     qword ptr [rsi+910h], 110h
 * 0000000140B0AEC9: mov     [rsi+918h], r13
 * 0000000140B0AED0: mov     [rsi+8F8h], eax
 * 0000000140B0AED6: call    $$ba
 * 0000000140B0AEDB: mov     rax, [rsi+388h]
 * 0000000140B0AEE2: lea     rdx, sub_140B13360
 * 0000000140B0AEE9: xor     r9d, r9d
 * 0000000140B0AEEC: mov     r8, rsi
 * 0000000140B0AEEF: mov     rcx, rbx
 * 0000000140B0AEF2: call    KeGuardDispatchICall
 * 0000000140B0AEF7: jmp     short loc_140B0AEFC
 * 0000000140B0AEF9: xor     r13d, r13d
 * 0000000140B0AEFC: mov     ebx, 1
 * 0000000140B0AF01: mov     rcx, rsi
 * 0000000140B0AF04: mov     edx, ebx
 * 0000000140B0AF06: call    $$ba
 * 0000000140B0AF0B: test    dword ptr [rsi+994h], 100h
 * 0000000140B0AF15: jz      short loc_140B0AF22
 * 0000000140B0AF17: mov     rax, [rbp+0A70h+var_A78]
 * 0000000140B0AF1B: mov     [rbp+0A78h], rax
 * 0000000140B0AF22: mov     r9d, [rsi+990h]
 * 0000000140B0AF29: mov     r8d, r9d
 * 0000000140B0AF2C: bt      r9d, 12h
 * 0000000140B0AF31: jnb     loc_140B0AFD6
 * 0000000140B0AF37: rdtsc
 * 0000000140B0AF39: shl     rdx, 20h
 * 0000000140B0AF3D: or      rax, rdx
 * 0000000140B0AF40: mov     rcx, rax
 * 0000000140B0AF43: ror     rax, 3
 * 0000000140B0AF47: xor     rcx, rax
 * 0000000140B0AF4A: mov     rax, 7010008004002001h
 * 0000000140B0AF54: mul     rcx
 * 0000000140B0AF57: mov     rcx, rdx
 * 0000000140B0AF5A: mov     [rbp+0A70h+var_490], rdx
 * 0000000140B0AF61: xor     rcx, rax
 * 0000000140B0AF64: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 0000000140B0AF6E: mul     rcx
 * 0000000140B0AF71: shr     rdx, 3
 * 0000000140B0AF75: lea     rax, [rdx+rdx*4]
 * 0000000140B0AF79: add     rax, rax
 * 0000000140B0AF7C: sub     rcx, rax
 * 0000000140B0AF7F: mov     eax, 2
 * 0000000140B0AF84: cmp     rcx, rax
 * 0000000140B0AF87: jnb     short loc_140B0AFD6
 * 0000000140B0AF89: cmp     [rsi+8F8h], r13d
 * 0000000140B0AF90: jnz     short loc_140B0AFD6
 * 0000000140B0AF92: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0AF9C: xor     edx, edx
 * 0000000140B0AF9E: add     rax, rsi
 * 0000000140B0AFA1: mov     rcx, rsi
 * 0000000140B0AFA4: mov     [rsi+900h], rax
 * 0000000140B0AFAB: mov     [rsi+908h], r13
 * 0000000140B0AFB2: mov     qword ptr [rsi+910h], 108h
 * 0000000140B0AFBD: mov     [rsi+918h], r13
 * 0000000140B0AFC4: mov     [rsi+8F8h], ebx
 * 0000000140B0AFCA: call    $$ba
 * 0000000140B0AFCF: mov     r8d, [rsi+990h]
 * 0000000140B0AFD6: mov     r11d, 8000h
 * 0000000140B0AFDC: bt      r8d, 1Eh
 * 0000000140B0AFE1: jb      short loc_140B0B05A
 * 0000000140B0AFE3: test    r11d, r8d
 * 0000000140B0AFE6: jnz     short loc_140B0B05A
 * 0000000140B0AFE8: lea     rdx, [rsi+8F8h]
 * 0000000140B0AFEF: cmp     [rdx], r13d
 * 0000000140B0AFF2: jz      short loc_140B0B05A
 * 0000000140B0AFF4: mov     rcx, [rbp+0A70h+arg_0]
 * 0000000140B0AFFB: test    [rcx+990h], r11d
 * 0000000140B0B002: jz      short loc_140B0B00D
 * 0000000140B0B004: add     rcx, 8F8h
 * 0000000140B0B00B: jmp     short loc_140B0B019
 * 0000000140B0B00D: add     rcx, 8F8h
 * 0000000140B0B014: cmp     [rcx], r13d
 * 0000000140B0B017: jnz     short loc_140B0B05A
 * 0000000140B0B019: mov     r8d, 28h ; '('
 * 0000000140B0B01F: lea     r9d, [r8-23h]
 * 0000000140B0B023: mov     rax, [rdx]
 * 0000000140B0B026: add     r8d, 0FFFFFFF8h
 * 0000000140B0B02A: mov     [rcx], rax
 * 0000000140B0B02D: add     rdx, 8
 * 0000000140B0B031: add     rcx, 8
 * 0000000140B0B035: sub     r9, rbx
 * 0000000140B0B038: jnz     short loc_140B0B023
 * 0000000140B0B03A: test    r8d, r8d
 * 0000000140B0B03D: jz      short loc_140B0B05A
 * 0000000140B0B03F: mov     edi, 0FFFFFFFFh
 * 0000000140B0B044: mov     al, [rdx]
 * 0000000140B0B046: add     rdx, rbx
 * 0000000140B0B049: mov     [rcx], al
 * 0000000140B0B04B: add     rcx, rbx
 * 0000000140B0B04E: add     r8d, edi
 * 0000000140B0B051: jnz     short loc_140B0B044
 * 0000000140B0B053: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0B05A: test    [rsi+990h], r11d
 * 0000000140B0B061: jnz     short loc_140B0B070
 * 0000000140B0B063: cmp     [rsi+8F8h], r13d
 * 0000000140B0B06A: jnz     loc_140B0BB56
 * 0000000140B0B070: mov     eax, [rsi+0A28h]
 * 0000000140B0B076: test    eax, eax
 * 0000000140B0B078: jz      loc_140B0BB56
 * 0000000140B0B07E: lea     r14, [rsi+rax]
 * 0000000140B0B082: mov     r11, [r14+8]
 * 0000000140B0B086: mov     [rbp+0A70h+var_AF0], r14
 * 0000000140B0B08A: test    r11, r11
 * 0000000140B0B08D: jz      loc_140B0B35E
 * 0000000140B0B093: mov     r10d, [r14+10h]
 * 0000000140B0B097: mov     r8, r11
 * 0000000140B0B09A: add     [rsi+828h], r10d
 * 0000000140B0B0A1: mov     rax, r11
 * 0000000140B0B0A4: mov     r9d, [rsi+814h]
 * 0000000140B0B0AB: mov     r12, [rsi+818h]
 * 0000000140B0B0B2: lea     rcx, [r11+r10]
 * 0000000140B0B0B6: mov     dword ptr [rbp+0A70h+arg_8], r10d
 * 0000000140B0B0BD: cmp     r11, rcx
 * 0000000140B0B0C0: jnb     short loc_140B0B0D2
 * 0000000140B0B0C2: mov     edx, 40h ; '@'
 * 0000000140B0B0C7: prefetchnta byte ptr [rax]
 * 0000000140B0B0CA: add     rax, rdx
 * 0000000140B0B0CD: cmp     rax, rcx
 * 0000000140B0B0D0: jb      short loc_140B0B0C7
 * 0000000140B0B0D2: mov     r15d, r10d
 * 0000000140B0B0D5: mov     rbx, r12
 * 0000000140B0B0D8: shr     r15d, 7
 * 0000000140B0B0DC: mov     edx, 1
 * 0000000140B0B0E1: test    r15d, r15d
 * 0000000140B0B0E4: jz      short loc_140B0B159
 * 0000000140B0B0E6: mov     edi, 0FFFFFFFFh
 * 0000000140B0B0EB: mov     r10, 7010008004002001h
 * 0000000140B0B0F5: mov     eax, 8
 * 0000000140B0B0FA: xor     rbx, [r8]
 * 0000000140B0B0FD: mov     ecx, r9d
 * 0000000140B0B100: rol     rbx, cl
 * 0000000140B0B103: xor     rbx, [r8+8]
 * 0000000140B0B107: add     r8, 10h
 * 0000000140B0B10B: rol     rbx, cl
 * 0000000140B0B10E: sub     rax, rdx
 * 0000000140B0B111: jnz     short loc_140B0B0FA
 * 0000000140B0B113: mov     rcx, r8
 * 0000000140B0B116: sub     rcx, r11
 * 0000000140B0B119: xor     rcx, r12
 * 0000000140B0B11C: mov     rax, rcx
 * 0000000140B0B11F: rol     rax, 11h
 * 0000000140B0B123: xor     rcx, rax
 * 0000000140B0B126: mov     rax, r10
 * 0000000140B0B129: mul     rcx
 * 0000000140B0B12C: xor     r9d, edx
 * 0000000140B0B12F: mov     [rbp+0A70h+var_488], rdx
 * 0000000140B0B136: xor     r9d, eax
 * 0000000140B0B139: mov     edx, 1
 * 0000000140B0B13E: and     r9d, 3Fh
 * 0000000140B0B142: cmovz   r9d, edx
 * 0000000140B0B146: add     r15d, edi
 * 0000000140B0B149: jnz     short loc_140B0B0F5
 * 0000000140B0B14B: mov     r10d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0B152: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0B159: and     r10d, 7Fh
 * 0000000140B0B15D: cmp     r10d, 8
 * 0000000140B0B161: jb      short loc_140B0B180
 * 0000000140B0B163: mov     eax, r10d
 * 0000000140B0B166: shr     rax, 3
 * 0000000140B0B16A: xor     rbx, [r8]
 * 0000000140B0B16D: mov     ecx, r9d
 * 0000000140B0B170: rol     rbx, cl
 * 0000000140B0B173: add     r8, 8
 * 0000000140B0B177: add     r10d, 0FFFFFFF8h
 * 0000000140B0B17B: sub     rax, rdx
 * 0000000140B0B17E: jnz     short loc_140B0B16A
 * 0000000140B0B180: test    r10d, r10d
 * 0000000140B0B183: jz      short loc_140B0B1A4
 * 0000000140B0B185: mov     r14d, 0FFFFFFFFh
 * 0000000140B0B18B: movzx   eax, byte ptr [r8]
 * 0000000140B0B18F: mov     ecx, r9d
 * 0000000140B0B192: xor     rbx, rax
 * 0000000140B0B195: add     r8, rdx
 * 0000000140B0B198: rol     rbx, cl
 * 0000000140B0B19B: add     r10d, r14d
 * 0000000140B0B19E: jnz     short loc_140B0B18B
 * 0000000140B0B1A0: mov     r14, [rbp+0A70h+var_AF0]
 * 0000000140B0B1A4: mov     rax, rbx
 * 0000000140B0B1A7: jmp     short loc_140B0B1AB
 * 0000000140B0B1A9: xor     ebx, eax
 * 0000000140B0B1AB: shr     rax, 1Fh
 * 0000000140B0B1AF: test    rax, rax
 * 0000000140B0B1B2: jnz     short loc_140B0B1A9
 * 0000000140B0B1B4: btr     ebx, 1Fh
 * 0000000140B0B1B8: mov     r12d, r13d
 * 0000000140B0B1BB: cmp     ebx, [r14+14h]
 * 0000000140B0B1BF: jz      loc_140B0B327
 * 0000000140B0B1C5: cmp     [r14], r13d
 * 0000000140B0B1C8: jnz     short loc_140B0B1D2
 * 0000000140B0B1CA: cmp     [r14+18h], r13d
 * 0000000140B0B1CE: cmovnz  r12d, edx
 * 0000000140B0B1D2: mov     ecx, [r14+10h]
 * 0000000140B0B1D6: mov     rdx, [r14+8]
 * 0000000140B0B1DA: test    rcx, rcx
 * 0000000140B0B1DD: jz      loc_140B0B2AF
 * 0000000140B0B1E3: mov     eax, [rsi+994h]
 * 0000000140B0B1E9: mov     r8d, 40h ; '@'
 * 0000000140B0B1EF: test    r8b, al
 * 0000000140B0B1F2: jz      loc_140B0B2AF
 * 0000000140B0B1F8: mov     rax, cr8
 * 0000000140B0B1FC: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B0B203: mov     r8d, 2
 * 0000000140B0B209: mov     cr8, r8
 * 0000000140B0B20D: dec     rcx
 * 0000000140B0B210: mov     r15, rdx
 * 0000000140B0B213: and     r15, 0FFFFFFFFFFFFF000h
 * 0000000140B0B21A: add     rcx, rdx
 * 0000000140B0B21D: or      rcx, 0FFFh
 * 0000000140B0B224: mov     [rsp+0B70h+var_AF8], rcx
 * 0000000140B0B229: lea     rcx, [r15-1]
 * 0000000140B0B22D: mov     [rbp+0A70h+var_A78], rcx
 * 0000000140B0B231: movzx   r13d, al
 * 0000000140B0B235: mov     rax, [rsi+468h]
 * 0000000140B0B23C: xor     edx, edx
 * 0000000140B0B23E: mov     rcx, r15
 * 0000000140B0B241: call    KeGuardDispatchICall
 * 0000000140B0B246: cmp     eax, 0C000022Dh
 * 0000000140B0B24B: jnz     short loc_140B0B27A
 * 0000000140B0B24D: test    r12d, r12d
 * 0000000140B0B250: jnz     short loc_140B0B2A8
 * 0000000140B0B252: mov     rax, [rbp+0A70h+arg_8]
 * 0000000140B0B259: lea     ecx, [r12+1]
 * 0000000140B0B25E: cmp     al, cl
 * 0000000140B0B260: ja      short loc_140B0B285
 * 0000000140B0B262: movzx   r13d, al
 * 0000000140B0B266: mov     cr8, r13
 * 0000000140B0B26A: mov     al, [r15]
 * 0000000140B0B26D: mov     rax, cr8
 * 0000000140B0B271: lea     eax, [rcx+1]
 * 0000000140B0B274: mov     cr8, rax
 * 0000000140B0B278: jmp     short loc_140B0B235
 * 0000000140B0B27A: test    eax, eax
 * 0000000140B0B27C: js      short loc_140B0B2A8
 * 0000000140B0B27E: mov     rax, [rbp+0A70h+arg_8]
 * 0000000140B0B285: mov     rcx, [rbp+0A70h+var_A78]
 * 0000000140B0B289: mov     edx, 1000h
 * 0000000140B0B28E: add     rcx, rdx
 * 0000000140B0B291: add     r15, rdx
 * 0000000140B0B294: mov     [rbp+0A70h+var_A78], rcx
 * 0000000140B0B298: cmp     rcx, [rsp+0B70h+var_AF8]
 * 0000000140B0B29D: jnz     short loc_140B0B231
 * 0000000140B0B29F: mov     cr8, r13
 * 0000000140B0B2A3: xor     r13d, r13d
 * 0000000140B0B2A6: jmp     short loc_140B0B327
 * 0000000140B0B2A8: mov     cr8, r13
 * 0000000140B0B2AC: xor     r13d, r13d
 * 0000000140B0B2AF: mov     eax, [r14+14h]
 * 0000000140B0B2B3: cmp     [rsi+8F8h], r13d
 * 0000000140B0B2BA: jnz     short loc_140B0B327
 * 0000000140B0B2BC: mov     ecx, ebx
 * 0000000140B0B2BE: xor     rcx, rax
 * 0000000140B0B2C1: mov     rax, [rsi+588h]
 * 0000000140B0B2C8: mov     [rax+18h], rcx
 * 0000000140B0B2CC: mov     rcx, [r14+8]
 * 0000000140B0B2D0: cmp     [rsi+8F8h], r13d
 * 0000000140B0B2D7: jnz     short loc_140B0B327
 * 0000000140B0B2D9: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0B2E3: xor     edx, edx
 * 0000000140B0B2E5: add     rax, rsi
 * 0000000140B0B2E8: mov     [rsi+900h], rax
 * 0000000140B0B2EF: mov     rax, 0B3B74BDEE4453415h
 * 0000000140B0B2F9: add     rax, r14
 * 0000000140B0B2FC: mov     [rsi+908h], rax
 * 0000000140B0B303: movsxd  rax, dword ptr [r14]
 * 0000000140B0B306: mov     [rsi+910h], rax
 * 0000000140B0B30D: mov     eax, 1
 * 0000000140B0B312: mov     [rsi+918h], rcx
 * 0000000140B0B319: mov     rcx, rsi
 * 0000000140B0B31C: mov     [rsi+8F8h], eax
 * 0000000140B0B322: call    $$ba
 * 0000000140B0B327: mov     rcx, [r14+18h]
 * 0000000140B0B32B: mov     rax, [rsi+0F8h]
 * 0000000140B0B332: call    KeGuardDispatchICall
 * 0000000140B0B337: mov     [r14+8], r13
 * 0000000140B0B33B: mov     [r14+10h], r13d
 * 0000000140B0B33F: mov     rcx, [rsi+818h]
 * 0000000140B0B346: mov     rax, rcx
 * 0000000140B0B349: jmp     short loc_140B0B34D
 * 0000000140B0B34B: xor     ecx, eax
 * 0000000140B0B34D: shr     rax, 1Fh
 * 0000000140B0B351: test    rax, rax
 * 0000000140B0B354: jnz     short loc_140B0B34B
 * 0000000140B0B356: btr     ecx, 1Fh
 * 0000000140B0B35A: mov     [r14+14h], ecx
 * 0000000140B0B35E: rdtsc
 * 0000000140B0B360: shl     rdx, 20h
 * 0000000140B0B364: mov     r8, 7010008004002001h
 * 0000000140B0B36E: or      rax, rdx
 * 0000000140B0B371: mov     rcx, rax
 * 0000000140B0B374: ror     rax, 3
 * 0000000140B0B378: xor     rcx, rax
 * 0000000140B0B37B: mov     rax, r8
 * 0000000140B0B37E: mul     rcx
 * 0000000140B0B381: mov     rcx, rdx
 * 0000000140B0B384: mov     [rbp+0A70h+var_480], rdx
 * 0000000140B0B38B: xor     rcx, rax
 * 0000000140B0B38E: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140B0B398: mul     rcx
 * 0000000140B0B39B: shr     rdx, 1
 * 0000000140B0B39E: lea     rax, [rdx+rdx*2]
 * 0000000140B0B3A2: cmp     rcx, rax
 * 0000000140B0B3A5: jnz     loc_140B0BB6F
 * 0000000140B0B3AB: lea     r12, [r14+18h]
 * 0000000140B0B3AF: mov     [rbp+0A70h+arg_8], r12
 * 0000000140B0B3B6: rdtsc
 * 0000000140B0B3B8: shl     rdx, 20h
 * 0000000140B0B3BC: or      rax, rdx
 * 0000000140B0B3BF: mov     rcx, rax
 * 0000000140B0B3C2: ror     rax, 3
 * 0000000140B0B3C6: xor     rcx, rax
 * 0000000140B0B3C9: mov     rax, r8
 * 0000000140B0B3CC: mul     rcx
 * 0000000140B0B3CF: mov     rbx, rdx
 * 0000000140B0B3D2: mov     [rbp+0A70h+var_478], rdx
 * 0000000140B0B3D9: xor     ebx, eax
 * 0000000140B0B3DB: and     ebx, 7FFh
 * 0000000140B0B3E1: rdtsc
 * 0000000140B0B3E3: shl     rdx, 20h
 * 0000000140B0B3E7: or      rax, rdx
 * 0000000140B0B3EA: mov     rcx, rax
 * 0000000140B0B3ED: ror     rax, 3
 * 0000000140B0B3F1: xor     rcx, rax
 * 0000000140B0B3F4: mov     rax, r8
 * 0000000140B0B3F7: mul     rcx
 * 0000000140B0B3FA: lea     r8d, [rbx+1]
 * 0000000140B0B3FE: xor     rax, rdx
 * 0000000140B0B401: mov     [rbp+0A70h+var_470], rdx
 * 0000000140B0B408: xor     edx, edx
 * 0000000140B0B40A: div     r8
 * 0000000140B0B40D: mov     eax, [rsi+990h]
 * 0000000140B0B413: mov     r8d, [rsi+810h]
 * 0000000140B0B41A: and     eax, 10000000h
 * 0000000140B0B41F: neg     eax
 * 0000000140B0B421: mov     r15, rdx
 * 0000000140B0B424: mov     rax, [rsi+0F0h]
 * 0000000140B0B42B: lea     edx, [rbx+0AA0h]
 * 0000000140B0B431: sbb     rcx, rcx
 * 0000000140B0B434: and     rcx, 0FFFFFFFFFFFFFFC0h
 * 0000000140B0B438: add     rcx, 82h
 * 0000000140B0B43F: call    KeGuardDispatchICall
 * 0000000140B0B444: mov     r11, rax
 * 0000000140B0B447: test    rax, rax
 * 0000000140B0B44A: jnz     short loc_140B0B466
 * 0000000140B0B44C: lea     r12d, [rax+1]
 * 0000000140B0B450: add     [rsi+0A18h], r12d
 * 0000000140B0B457: mov     r8, 7010008004002001h
 * 0000000140B0B461: jmp     loc_140B0BB75
 * 0000000140B0B466: mov     r9d, r15d
 * 0000000140B0B469: mov     r8, r11
 * 0000000140B0B46C: cmp     r15d, 8
 * 0000000140B0B470: jb      short loc_140B0B4C7
 * 0000000140B0B472: mov     r10d, r15d
 * 0000000140B0B475: mov     r14d, 1
 * 0000000140B0B47B: shr     r10, 3
 * 0000000140B0B47F: mov     r12, 7010008004002001h
 * 0000000140B0B489: rdtsc
 * 0000000140B0B48B: shl     rdx, 20h
 * 0000000140B0B48F: add     r9d, 0FFFFFFF8h
 * 0000000140B0B493: or      rax, rdx
 * 0000000140B0B496: mov     rcx, rax
 * 0000000140B0B499: ror     rax, 3
 * 0000000140B0B49D: xor     rcx, rax
 * 0000000140B0B4A0: mov     rax, r12
 * 0000000140B0B4A3: mul     rcx
 * 0000000140B0B4A6: mov     [rbp+0A70h+var_468], rdx
 * 0000000140B0B4AD: xor     rdx, rax
 * 0000000140B0B4B0: mov     [r8], rdx
 * 0000000140B0B4B3: add     r8, 8
 * 0000000140B0B4B7: sub     r10, r14
 * 0000000140B0B4BA: jnz     short loc_140B0B489
 * 0000000140B0B4BC: mov     r14, [rbp+0A70h+var_AF0]
 * 0000000140B0B4C0: mov     r12, [rbp+0A70h+arg_8]
 * 0000000140B0B4C7: test    r9d, r9d
 * 0000000140B0B4CA: jz      short loc_140B0B50F
 * 0000000140B0B4CC: rdtsc
 * 0000000140B0B4CE: shl     rdx, 20h
 * 0000000140B0B4D2: or      rax, rdx
 * 0000000140B0B4D5: mov     rcx, rax
 * 0000000140B0B4D8: ror     rax, 3
 * 0000000140B0B4DC: xor     rcx, rax
 * 0000000140B0B4DF: mov     rax, 7010008004002001h
 * 0000000140B0B4E9: mul     rcx
 * 0000000140B0B4EC: mov     ecx, 0FFFFFFFFh
 * 0000000140B0B4F1: mov     [rbp+0A70h+var_460], rdx
 * 0000000140B0B4F8: xor     rdx, rax
 * 0000000140B0B4FB: mov     eax, 1
 * 0000000140B0B500: mov     [r8], dl
 * 0000000140B0B503: add     r8, rax
 * 0000000140B0B506: shr     rdx, 8
 * 0000000140B0B50A: add     r9d, ecx
 * 0000000140B0B50D: jnz     short loc_140B0B500
 * 0000000140B0B50F: mov     r9d, r15d
 * 0000000140B0B512: sub     ebx, r15d
 * 0000000140B0B515: add     r9, r11
 * 0000000140B0B518: mov     r15d, 1
 * 0000000140B0B51E: lea     r8, [r9+0AA0h]
 * 0000000140B0B525: cmp     ebx, 8
 * 0000000140B0B528: jb      short loc_140B0B571
 * 0000000140B0B52A: mov     r10d, ebx
 * 0000000140B0B52D: mov     r12, 7010008004002001h
 * 0000000140B0B537: shr     r10, 3
 * 0000000140B0B53B: rdtsc
 * 0000000140B0B53D: shl     rdx, 20h
 * 0000000140B0B541: add     ebx, 0FFFFFFF8h
 * 0000000140B0B544: or      rax, rdx
 * 0000000140B0B547: mov     rcx, rax
 * 0000000140B0B54A: ror     rax, 3
 * 0000000140B0B54E: xor     rcx, rax
 * 0000000140B0B551: mov     rax, r12
 * 0000000140B0B554: mul     rcx
 * 0000000140B0B557: mov     [rbp+0A70h+var_458], rdx
 * 0000000140B0B55E: xor     rdx, rax
 * 0000000140B0B561: mov     [r8], rdx
 * 0000000140B0B564: add     r8, 8
 * 0000000140B0B568: sub     r10, r15
 * 0000000140B0B56B: jnz     short loc_140B0B53B
 * 0000000140B0B56D: lea     r12, [r14+18h]
 * 0000000140B0B571: test    ebx, ebx
 * 0000000140B0B573: jz      short loc_140B0B5B2
 * 0000000140B0B575: rdtsc
 * 0000000140B0B577: shl     rdx, 20h
 * 0000000140B0B57B: or      rax, rdx
 * 0000000140B0B57E: mov     rcx, rax
 * 0000000140B0B581: ror     rax, 3
 * 0000000140B0B585: xor     rcx, rax
 * 0000000140B0B588: mov     rax, 7010008004002001h
 * 0000000140B0B592: mul     rcx
 * 0000000140B0B595: mov     [rbp+0A70h+var_450], rdx
 * 0000000140B0B59C: xor     rdx, rax
 * 0000000140B0B59F: mov     eax, 0FFFFFFFFh
 * 0000000140B0B5A4: mov     [r8], dl
 * 0000000140B0B5A7: add     r8, r15
 * 0000000140B0B5AA: shr     rdx, 8
 * 0000000140B0B5AE: add     ebx, eax
 * 0000000140B0B5B0: jnz     short loc_140B0B5A4
 * 0000000140B0B5B2: test    r12, r12
 * 0000000140B0B5B5: jz      short loc_140B0B5BB
 * 0000000140B0B5B7: mov     [r12], r11
 * 0000000140B0B5BB: test    r9, r9
 * 0000000140B0B5BE: jz      loc_140B0BB65
 * 0000000140B0B5C4: mov     r10d, 0AA0h
 * 0000000140B0B5CA: mov     [r14+8], r9
 * 0000000140B0B5CE: mov     [r14+10h], r10d
 * 0000000140B0B5D2: mov     r8d, r10d
 * 0000000140B0B5D5: mov     r14d, 154h
 * 0000000140B0B5DB: mov     rcx, rsi
 * 0000000140B0B5DE: mov     rdx, r9
 * 0000000140B0B5E1: mov     rax, [rcx]
 * 0000000140B0B5E4: add     r8d, 0FFFFFFF8h
 * 0000000140B0B5E8: mov     [rdx], rax
 * 0000000140B0B5EB: add     rcx, 8
 * 0000000140B0B5EF: add     rdx, 8
 * 0000000140B0B5F3: sub     r14, r15
 * 0000000140B0B5F6: jnz     short loc_140B0B5E1
 * 0000000140B0B5F8: test    r8d, r8d
 * 0000000140B0B5FB: jz      short loc_140B0B618
 * 0000000140B0B5FD: mov     r10d, 0FFFFFFFFh
 * 0000000140B0B603: mov     al, [rcx]
 * 0000000140B0B605: add     rcx, r15
 * 0000000140B0B608: mov     [rdx], al
 * 0000000140B0B60A: add     rdx, r15
 * 0000000140B0B60D: add     r8d, r10d
 * 0000000140B0B610: jnz     short loc_140B0B603
 * 0000000140B0B612: mov     r10d, 0AA0h
 * 0000000140B0B618: mov     eax, [r9+990h]
 * 0000000140B0B61F: mov     rdi, 7010008004002001h
 * 0000000140B0B629: mov     [r9+7E4h], r10d
 * 0000000140B0B630: and     eax, 0FFFFFFFDh
 * 0000000140B0B633: mov     [r9+808h], r10d
 * 0000000140B0B63A: bts     eax, 13h
 * 0000000140B0B63E: mov     [r9+990h], eax
 * 0000000140B0B645: mov     [r9+0A2Ch], r10d
 * 0000000140B0B64C: mov     dword ptr [rbp+0A70h+var_AD8], eax
 * 0000000140B0B64F: mov     eax, [r9+954h]
 * 0000000140B0B656: mov     [rbp+0A70h+var_AD0], eax
 * 0000000140B0B659: mov     rax, [r9+4E0h]
 * 0000000140B0B660: mov     [rbp+0A70h+var_A80], rax
 * 0000000140B0B664: mov     rax, [r9+5B8h]
 * 0000000140B0B66B: mov     [rbp+0A70h+var_AC0], rax
 * 0000000140B0B66F: mov     dword ptr [r9+0C4h], 13Bh
 * 0000000140B0B67A: rdtsc
 * 0000000140B0B67C: shl     rdx, 20h
 * 0000000140B0B680: or      rax, rdx
 * 0000000140B0B683: mov     rcx, rax
 * 0000000140B0B686: ror     rax, 3
 * 0000000140B0B68A: xor     rcx, rax
 * 0000000140B0B68D: mov     rax, rdi
 * 0000000140B0B690: mul     rcx
 * 0000000140B0B693: mov     rbx, rdx
 * 0000000140B0B696: mov     [rbp+0A70h+var_448], rdx
 * 0000000140B0B69D: xor     rbx, rax
 * 0000000140B0B6A0: jz      short loc_140B0B67A
 * 0000000140B0B6A2: mov     rax, [r9+7B8h]
 * 0000000140B0B6A9: lea     r12, [r9+798h]
 * 0000000140B0B6B0: mov     r15d, 20h ; ' '
 * 0000000140B0B6B6: mov     [rbp+0A70h+var_A78], rax
 * 0000000140B0B6BA: mov     eax, [r9+828h]
 * 0000000140B0B6C1: lea     rdx, [rbp+0A70h+var_F0]
 * 0000000140B0B6C8: mov     [rbp+0A70h+var_AE0], eax
 * 0000000140B0B6CB: mov     r8d, r15d
 * 0000000140B0B6CE: mov     rcx, r12
 * 0000000140B0B6D1: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0B6D8: lea     r11d, [r15-1Ch]
 * 0000000140B0B6DC: mov     r10d, r11d
 * 0000000140B0B6DF: lea     r14d, [r15-1Fh]
 * 0000000140B0B6E3: mov     rax, [rcx]
 * 0000000140B0B6E6: add     r8d, 0FFFFFFF8h
 * 0000000140B0B6EA: mov     [rdx], rax
 * 0000000140B0B6ED: add     rcx, 8
 * 0000000140B0B6F1: add     rdx, 8
 * 0000000140B0B6F5: sub     r10, r14
 * 0000000140B0B6F8: jnz     short loc_140B0B6E3
 * 0000000140B0B6FA: mov     r14, [rbp+0A70h+var_AF0]
 * 0000000140B0B6FE: mov     r10d, 1
 * 0000000140B0B704: test    r8d, r8d
 * 0000000140B0B707: jz      short loc_140B0B722
 * 0000000140B0B709: mov     r14d, 0FFFFFFFFh
 * 0000000140B0B70F: mov     al, [rcx]
 * 0000000140B0B711: add     rcx, r10
 * 0000000140B0B714: mov     [rdx], al
 * 0000000140B0B716: add     rdx, r10
 * 0000000140B0B719: add     r8d, r14d
 * 0000000140B0B71C: jnz     short loc_140B0B70F
 * 0000000140B0B71E: mov     r14, [rbp+0A70h+var_AF0]
 * 0000000140B0B722: mov     [r9+7B8h], r13
 * 0000000140B0B729: mov     ecx, r15d
 * 0000000140B0B72C: mov     [r9+828h], r13d
 * 0000000140B0B733: mov     rax, r12
 * 0000000140B0B736: mov     rdx, r11
 * 0000000140B0B739: mov     [rax], r13
 * 0000000140B0B73C: add     ecx, 0FFFFFFF8h
 * 0000000140B0B73F: add     rax, 8
 * 0000000140B0B743: sub     rdx, r10
 * 0000000140B0B746: jnz     short loc_140B0B739
 * 0000000140B0B748: mov     edx, 1
 * 0000000140B0B74D: test    ecx, ecx
 * 0000000140B0B74F: jz      short loc_140B0B762
 * 0000000140B0B751: mov     r8d, 0FFFFFFFFh
 * 0000000140B0B757: mov     [rax], r13b
 * 0000000140B0B75A: add     rax, rdx
 * 0000000140B0B75D: add     ecx, r8d
 * 0000000140B0B760: jnz     short loc_140B0B757
 * 0000000140B0B762: mov     r11d, [r9+7E4h]
 * 0000000140B0B769: mov     r10, r9
 * 0000000140B0B76C: add     [r9+828h], r11d
 * 0000000140B0B773: mov     rax, r9
 * 0000000140B0B776: mov     r15d, [r9+814h]
 * 0000000140B0B77D: mov     r8, [r9+818h]
 * 0000000140B0B784: lea     rcx, [r9+r11]
 * 0000000140B0B788: mov     dword ptr [rbp+0A70h+arg_8], r11d
 * 0000000140B0B78F: cmp     r9, rcx
 * 0000000140B0B792: jnb     short loc_140B0B7A0
 * 0000000140B0B794: prefetchnta byte ptr [rax]
 * 0000000140B0B797: add     rax, 40h ; '@'
 * 0000000140B0B79B: cmp     rax, rcx
 * 0000000140B0B79E: jb      short loc_140B0B794
 * 0000000140B0B7A0: mov     r13d, r11d
 * 0000000140B0B7A3: shr     r13d, 7
 * 0000000140B0B7A7: test    r13d, r13d
 * 0000000140B0B7AA: jz      loc_140B0B831
 * 0000000140B0B7B0: mov     rdi, r8
 * 0000000140B0B7B3: mov     r12d, 0FFFFFFFFh
 * 0000000140B0B7B9: mov     r11, 7010008004002001h
 * 0000000140B0B7C3: mov     eax, 8
 * 0000000140B0B7C8: xor     r8, [r10]
 * 0000000140B0B7CB: mov     ecx, r15d
 * 0000000140B0B7CE: rol     r8, cl
 * 0000000140B0B7D1: xor     r8, [r10+8]
 * 0000000140B0B7D5: add     r10, 10h
 * 0000000140B0B7D9: rol     r8, cl
 * 0000000140B0B7DC: sub     rax, rdx
 * 0000000140B0B7DF: jnz     short loc_140B0B7C8
 * 0000000140B0B7E1: mov     rcx, r10
 * 0000000140B0B7E4: sub     rcx, r9
 * 0000000140B0B7E7: xor     rcx, rdi
 * 0000000140B0B7EA: mov     rax, rcx
 * 0000000140B0B7ED: rol     rax, 11h
 * 0000000140B0B7F1: xor     rcx, rax
 * 0000000140B0B7F4: mov     rax, r11
 * 0000000140B0B7F7: mul     rcx
 * 0000000140B0B7FA: mov     [rbp+0A70h+var_440], rdx
 * 0000000140B0B801: xor     edx, eax
 * 0000000140B0B803: xor     r15d, edx
 * 0000000140B0B806: mov     edx, 1
 * 0000000140B0B80B: and     r15d, 3Fh
 * 0000000140B0B80F: cmovz   r15d, edx
 * 0000000140B0B813: add     r13d, r12d
 * 0000000140B0B816: jnz     short loc_140B0B7C3
 * 0000000140B0B818: mov     r14, [rbp+0A70h+var_AF0]
 * 0000000140B0B81C: lea     r12, [r9+798h]
 * 0000000140B0B823: mov     r11d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0B82A: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0B831: and     r11d, 7Fh
 * 0000000140B0B835: cmp     r11d, 8
 * 0000000140B0B839: jb      short loc_140B0B858
 * 0000000140B0B83B: mov     eax, r11d
 * 0000000140B0B83E: shr     rax, 3
 * 0000000140B0B842: xor     r8, [r10]
 * 0000000140B0B845: mov     ecx, r15d
 * 0000000140B0B848: rol     r8, cl
 * 0000000140B0B84B: add     r10, 8
 * 0000000140B0B84F: add     r11d, 0FFFFFFF8h
 * 0000000140B0B853: sub     rax, rdx
 * 0000000140B0B856: jnz     short loc_140B0B842
 * 0000000140B0B858: xor     r13d, r13d
 * 0000000140B0B85B: test    r11d, r11d
 * 0000000140B0B85E: jz      short loc_140B0B87F
 * 0000000140B0B860: mov     r14d, 0FFFFFFFFh
 * 0000000140B0B866: movzx   eax, byte ptr [r10]
 * 0000000140B0B86A: mov     ecx, r15d
 * 0000000140B0B86D: xor     r8, rax
 * 0000000140B0B870: add     r10, rdx
 * 0000000140B0B873: rol     r8, cl
 * 0000000140B0B876: add     r11d, r14d
 * 0000000140B0B879: jnz     short loc_140B0B866
 * 0000000140B0B87B: mov     r14, [rbp+0A70h+var_AF0]
 * 0000000140B0B87F: mov     rax, [rbp+0A70h+var_A78]
 * 0000000140B0B883: lea     rcx, [rbp+0A70h+var_F0]
 * 0000000140B0B88A: mov     edx, 20h ; ' '
 * 0000000140B0B88F: mov     [r9+7B8h], rax
 * 0000000140B0B896: mov     eax, [rbp+0A70h+var_AE0]
 * 0000000140B0B899: add     [r9+828h], eax
 * 0000000140B0B8A0: lea     r10d, [rdx-1Ch]
 * 0000000140B0B8A4: lea     r11d, [rdx-1Fh]
 * 0000000140B0B8A8: mov     rax, [rcx]
 * 0000000140B0B8AB: add     edx, 0FFFFFFF8h
 * 0000000140B0B8AE: mov     [r12], rax
 * 0000000140B0B8B2: add     rcx, 8
 * 0000000140B0B8B6: add     r12, 8
 * 0000000140B0B8BA: sub     r10, r11
 * 0000000140B0B8BD: jnz     short loc_140B0B8A8
 * 0000000140B0B8BF: test    edx, edx
 * 0000000140B0B8C1: jz      short loc_140B0B8DE
 * 0000000140B0B8C3: mov     r14d, 0FFFFFFFFh
 * 0000000140B0B8C9: mov     al, [rcx]
 * 0000000140B0B8CB: add     rcx, r11
 * 0000000140B0B8CE: mov     [r12], al
 * 0000000140B0B8D2: add     r12, r11
 * 0000000140B0B8D5: add     edx, r14d
 * 0000000140B0B8D8: jnz     short loc_140B0B8C9
 * 0000000140B0B8DA: mov     r14, [rbp+0A70h+var_AF0]
 * 0000000140B0B8DE: mov     [r9+7B8h], r8
 * 0000000140B0B8E5: test    dword ptr [r9+990h], 40000000h
 * 0000000140B0B8F0: jnz     loc_140B0BA28
 * 0000000140B0B8F6: mov     rax, r9
 * 0000000140B0B8F9: mov     ecx, r13d
 * 0000000140B0B8FC: xor     [rax], rbx
 * 0000000140B0B8FF: add     ecx, r11d
 * 0000000140B0B902: add     rax, 8
 * 0000000140B0B906: cmp     ecx, 19h
 * 0000000140B0B909: jb      short loc_140B0B8FC
 * 0000000140B0B90B: add     rax, 9D0h
 * 0000000140B0B911: mov     ecx, 13Bh
 * 0000000140B0B916: xor     [rax], rbx
 * 0000000140B0B919: lea     rdx, [rbp+0A70h+var_888]
 * 0000000140B0B920: ror     rbx, cl
 * 0000000140B0B923: lea     rax, [rax-8]
 * 0000000140B0B927: mov     [rbp+0A70h+var_888], rbx
 * 0000000140B0B92E: and     ebx, 3Fh
 * 0000000140B0B931: btc     [rdx], rbx
 * 0000000140B0B935: sub     ecx, r11d
 * 0000000140B0B938: jz      short loc_140B0B943
 * 0000000140B0B93A: mov     rbx, [rbp+0A70h+var_888]
 * 0000000140B0B941: jmp     short loc_140B0B916
 * 0000000140B0B943: rdtsc
 * 0000000140B0B945: shl     rdx, 20h
 * 0000000140B0B949: or      rax, rdx
 * 0000000140B0B94C: mov     rcx, rax
 * 0000000140B0B94F: ror     rax, 3
 * 0000000140B0B953: xor     rcx, rax
 * 0000000140B0B956: mov     rax, 7010008004002001h
 * 0000000140B0B960: mul     rcx
 * 0000000140B0B963: mov     rcx, rdx
 * 0000000140B0B966: mov     [rbp+0A70h+var_438], rdx
 * 0000000140B0B96D: xor     rcx, rax
 * 0000000140B0B970: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140B0B97A: mul     rcx
 * 0000000140B0B97D: shr     rdx, 1
 * 0000000140B0B980: lea     rax, [rdx+rdx*2]
 * 0000000140B0B984: cmp     rcx, rax
 * 0000000140B0B987: jnz     loc_140B0BA28
 * 0000000140B0B98D: mov     r12d, [rbp+0A70h+var_AD0]
 * 0000000140B0B991: mov     ecx, r9d
 * 0000000140B0B994: mov     r15d, dword ptr [rbp+0A70h+var_AD8]
 * 0000000140B0B998: mov     r10, r9
 * 0000000140B0B99B: mov     rdi, [rbp+0A70h+var_AC0]
 * 0000000140B0B99F: mov     r11d, r13d
 * 0000000140B0B9A2: mov     r13, [rbp+0A70h+var_A80]
 * 0000000140B0B9A6: mov     rbx, r9
 * 0000000140B0B9A9: ror     r10, cl
 * 0000000140B0B9AC: mov     rdx, [rbx]
 * 0000000140B0B9AF: mov     eax, r11d
 * 0000000140B0B9B2: sub     rdx, rax
 * 0000000140B0B9B5: sub     rdx, r9
 * 0000000140B0B9B8: bt      r15d, 9
 * 0000000140B0B9BD: jb      short loc_140B0B9D2
 * 0000000140B0B9BF: xor     rdx, r13
 * 0000000140B0B9C2: mov     ecx, edi
 * 0000000140B0B9C4: bswap   rdx
 * 0000000140B0B9C7: xor     rdx, r10
 * 0000000140B0B9CA: ror     rdx, cl
 * 0000000140B0B9CD: xor     rdx, rdi
 * 0000000140B0B9D0: jmp     short loc_140B0B9D5
 * 0000000140B0B9D2: xor     rdx, r10
 * 0000000140B0B9D5: mov     [rbx], rdx
 * 0000000140B0B9D8: mov     ecx, edx
 * 0000000140B0B9DA: mov     r8d, edx
 * 0000000140B0B9DD: mov     eax, r11d
 * 0000000140B0B9E0: mov     edx, 0C8h
 * 0000000140B0B9E5: not     ecx
 * 0000000140B0B9E7: sub     edx, r11d
 * 0000000140B0B9EA: xor     r8d, 0F29h
 * 0000000140B0B9F1: xor     rdx, rax
 * 0000000140B0B9F4: add     rbx, 8
 * 0000000140B0B9F8: ror     rdx, cl
 * 0000000140B0B9FB: mov     cl, r8b
 * 0000000140B0B9FE: xor     r10, rdx
 * 0000000140B0BA01: mov     edx, 1
 * 0000000140B0BA06: rol     r10, cl
 * 0000000140B0BA09: add     r11d, edx
 * 0000000140B0BA0C: add     r10, r9
 * 0000000140B0BA0F: xor     r10, r12
 * 0000000140B0BA12: cmp     r11d, 19h
 * 0000000140B0BA16: jb      short loc_140B0B9AC
 * 0000000140B0BA18: mov     r14, [rbp+0A70h+var_AF0]
 * 0000000140B0BA1C: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0BA23: xor     r13d, r13d
 * 0000000140B0BA26: jmp     short loc_140B0BA2B
 * 0000000140B0BA28: mov     rdx, r11
 * 0000000140B0BA2B: mov     r15, [r14+8]
 * 0000000140B0BA2F: mov     r10d, [r14+10h]
 * 0000000140B0BA33: mov     r9, r15
 * 0000000140B0BA36: add     [rsi+828h], r10d
 * 0000000140B0BA3D: mov     rax, r15
 * 0000000140B0BA40: mov     r11d, [rsi+814h]
 * 0000000140B0BA47: mov     r12, [rsi+818h]
 * 0000000140B0BA4E: lea     rcx, [r15+r10]
 * 0000000140B0BA52: cmp     r15, rcx
 * 0000000140B0BA55: jnb     short loc_140B0BA68
 * 0000000140B0BA57: mov     r8d, 40h ; '@'
 * 0000000140B0BA5D: prefetchnta byte ptr [rax]
 * 0000000140B0BA60: add     rax, r8
 * 0000000140B0BA63: cmp     rax, rcx
 * 0000000140B0BA66: jb      short loc_140B0BA5D
 * 0000000140B0BA68: mov     ebx, r10d
 * 0000000140B0BA6B: mov     r8, r12
 * 0000000140B0BA6E: shr     ebx, 7
 * 0000000140B0BA71: test    ebx, ebx
 * 0000000140B0BA73: jz      short loc_140B0BAE6
 * 0000000140B0BA75: mov     rdi, 7010008004002001h
 * 0000000140B0BA7F: mov     r14d, 0FFFFFFFFh
 * 0000000140B0BA85: mov     eax, 8
 * 0000000140B0BA8A: xor     r8, [r9]
 * 0000000140B0BA8D: mov     ecx, r11d
 * 0000000140B0BA90: rol     r8, cl
 * 0000000140B0BA93: xor     r8, [r9+8]
 * 0000000140B0BA97: add     r9, 10h
 * 0000000140B0BA9B: rol     r8, cl
 * 0000000140B0BA9E: sub     rax, rdx
 * 0000000140B0BAA1: jnz     short loc_140B0BA8A
 * 0000000140B0BAA3: mov     rcx, r9
 * 0000000140B0BAA6: sub     rcx, r15
 * 0000000140B0BAA9: xor     rcx, r12
 * 0000000140B0BAAC: mov     rax, rcx
 * 0000000140B0BAAF: rol     rax, 11h
 * 0000000140B0BAB3: xor     rcx, rax
 * 0000000140B0BAB6: mov     rax, rdi
 * 0000000140B0BAB9: mul     rcx
 * 0000000140B0BABC: xor     r11d, edx
 * 0000000140B0BABF: mov     [rbp+0A70h+var_430], rdx
 * 0000000140B0BAC6: xor     r11d, eax
 * 0000000140B0BAC9: mov     edx, 1
 * 0000000140B0BACE: and     r11d, 3Fh
 * 0000000140B0BAD2: cmovz   r11d, edx
 * 0000000140B0BAD6: add     ebx, r14d
 * 0000000140B0BAD9: jnz     short loc_140B0BA85
 * 0000000140B0BADB: mov     r14, [rbp+0A70h+var_AF0]
 * 0000000140B0BADF: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0BAE6: and     r10d, 7Fh
 * 0000000140B0BAEA: mov     r12d, 1
 * 0000000140B0BAF0: cmp     r10d, 8
 * 0000000140B0BAF4: jb      short loc_140B0BB13
 * 0000000140B0BAF6: mov     eax, r10d
 * 0000000140B0BAF9: shr     rax, 3
 * 0000000140B0BAFD: xor     r8, [r9]
 * 0000000140B0BB00: mov     ecx, r11d
 * 0000000140B0BB03: rol     r8, cl
 * 0000000140B0BB06: add     r9, 8
 * 0000000140B0BB0A: add     r10d, 0FFFFFFF8h
 * 0000000140B0BB0E: sub     rax, r12
 * 0000000140B0BB11: jnz     short loc_140B0BAFD
 * 0000000140B0BB13: test    r10d, r10d
 * 0000000140B0BB16: jz      short loc_140B0BB37
 * 0000000140B0BB18: mov     r14d, 0FFFFFFFFh
 * 0000000140B0BB1E: movzx   eax, byte ptr [r9]
 * 0000000140B0BB22: mov     ecx, r11d
 * 0000000140B0BB25: xor     r8, rax
 * 0000000140B0BB28: add     r9, r12
 * 0000000140B0BB2B: rol     r8, cl
 * 0000000140B0BB2E: add     r10d, r14d
 * 0000000140B0BB31: jnz     short loc_140B0BB1E
 * 0000000140B0BB33: mov     r14, [rbp+0A70h+var_AF0]
 * 0000000140B0BB37: mov     rax, r8
 * 0000000140B0BB3A: jmp     short loc_140B0BB3F
 * 0000000140B0BB3C: xor     r8d, eax
 * 0000000140B0BB3F: shr     rax, 1Fh
 * 0000000140B0BB43: test    rax, rax
 * 0000000140B0BB46: jnz     short loc_140B0BB3C
 * 0000000140B0BB48: btr     r8d, 1Fh
 * 0000000140B0BB4D: mov     [r14+14h], r8d
 * 0000000140B0BB51: jmp     loc_140B0B457
 * 0000000140B0BB56: mov     r12, rbx
 * 0000000140B0BB59: mov     r8, 7010008004002001h
 * 0000000140B0BB63: jmp     short loc_140B0BB7B
 * 0000000140B0BB65: mov     r8, 7010008004002001h
 * 0000000140B0BB6F: mov     r12d, 1
 * 0000000140B0BB75: mov     r11d, 8000h
 * 0000000140B0BB7B: mov     [rbp+0A70h+var_AE0], r13d
 * 0000000140B0BB7F: mov     [rbp+0A70h+var_AC0], r13
 * 0000000140B0BB83: mov     r13d, [rsi+990h]
 * 0000000140B0BB8A: mov     dword ptr [rbp+0A70h+arg_8], r13d
 * 0000000140B0BB91: bt      r13d, 1Eh
 * 0000000140B0BB96: jb      loc_140B0C687
 * 0000000140B0BB9C: mov     r14, [rbp+0A70h+arg_0]
 * 0000000140B0BBA3: cmp     rsi, r14
 * 0000000140B0BBA6: jnz     loc_140B0C238
 * 0000000140B0BBAC: xor     r15d, r15d
 * 0000000140B0BBAF: test    r11d, r13d
 * 0000000140B0BBB2: jnz     short loc_140B0BBC1
 * 0000000140B0BBB4: cmp     [rsi+8F8h], r15d
 * 0000000140B0BBBB: jnz     loc_140B0BFF0
 * 0000000140B0BBC1: mov     r8d, [r14+924h]
 * 0000000140B0BBC8: mov     rcx, r14
 * 0000000140B0BBCB: mov     edx, [r14+7E4h]
 * 0000000140B0BBD2: call    sub_140B11020
 * 0000000140B0BBD7: mov     rsi, rax
 * 0000000140B0BBDA: test    rax, rax
 * 0000000140B0BBDD: jz      loc_140B0BFF0
 * 0000000140B0BBE3: mov     ecx, [rsi+954h]
 * 0000000140B0BBE9: mov     r12d, [rsi+0A2Ch]
 * 0000000140B0BBF0: mov     rax, [rax+7C8h]
 * 0000000140B0BBF7: add     r12d, 0FFFFFF38h
 * 0000000140B0BBFE: mov     dword ptr [rbp+0A70h+var_AD8], ecx
 * 0000000140B0BC01: mov     ecx, [rsi+990h]
 * 0000000140B0BC07: shr     r12d, 3
 * 0000000140B0BC0B: mov     [rbp+0A70h+var_AD0], ecx
 * 0000000140B0BC0E: mov     rcx, [rsi+4E0h]
 * 0000000140B0BC15: mov     [rbp+0A70h+var_A80], rcx
 * 0000000140B0BC19: mov     rcx, [rsi+5B8h]
 * 0000000140B0BC20: mov     [rsi+0C4h], r12d
 * 0000000140B0BC27: mov     dword ptr [rbp+0A70h+arg_8], r12d
 * 0000000140B0BC2E: mov     r12, 7010008004002001h
 * 0000000140B0BC38: mov     [rbp+0A70h+var_A78], rcx
 * 0000000140B0BC3C: mov     [rbp+0A70h+var_AC0], rax
 * 0000000140B0BC40: rdtsc
 * 0000000140B0BC42: shl     rdx, 20h
 * 0000000140B0BC46: or      rax, rdx
 * 0000000140B0BC49: mov     rcx, rax
 * 0000000140B0BC4C: ror     rax, 3
 * 0000000140B0BC50: xor     rcx, rax
 * 0000000140B0BC53: mov     rax, r12
 * 0000000140B0BC56: mul     rcx
 * 0000000140B0BC59: mov     r11, rdx
 * 0000000140B0BC5C: mov     [rbp+0A70h+var_428], rdx
 * 0000000140B0BC63: xor     r11, rax
 * 0000000140B0BC66: jz      short loc_140B0BC40
 * 0000000140B0BC68: mov     rax, [rsi+7B8h]
 * 0000000140B0BC6F: lea     r14, [rsi+798h]
 * 0000000140B0BC76: mov     r12d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0BC7D: lea     rdx, [rbp+0A70h+var_D0]
 * 0000000140B0BC84: mov     ebx, 20h ; ' '
 * 0000000140B0BC89: mov     [rsp+0B70h+var_AF8], rax
 * 0000000140B0BC8E: mov     eax, [rsi+828h]
 * 0000000140B0BC94: mov     r8d, ebx
 * 0000000140B0BC97: mov     [rbp+0A70h+var_AE0], eax
 * 0000000140B0BC9A: mov     rcx, r14
 * 0000000140B0BC9D: lea     r10d, [rbx-1Ch]
 * 0000000140B0BCA1: mov     r9d, r10d
 * 0000000140B0BCA4: lea     r13d, [rbx-1Fh]
 * 0000000140B0BCA8: mov     rax, [rcx]
 * 0000000140B0BCAB: add     r8d, 0FFFFFFF8h
 * 0000000140B0BCAF: mov     [rdx], rax
 * 0000000140B0BCB2: add     rcx, 8
 * 0000000140B0BCB6: add     rdx, 8
 * 0000000140B0BCBA: sub     r9, r13
 * 0000000140B0BCBD: jnz     short loc_140B0BCA8
 * 0000000140B0BCBF: test    r8d, r8d
 * 0000000140B0BCC2: jz      short loc_140B0BCE0
 * 0000000140B0BCC4: mov     r12d, 0FFFFFFFFh
 * 0000000140B0BCCA: mov     al, [rcx]
 * 0000000140B0BCCC: add     rcx, r13
 * 0000000140B0BCCF: mov     [rdx], al
 * 0000000140B0BCD1: add     rdx, r13
 * 0000000140B0BCD4: add     r8d, r12d
 * 0000000140B0BCD7: jnz     short loc_140B0BCCA
 * 0000000140B0BCD9: mov     r12d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0BCE0: mov     [rsi+7B8h], r15
 * 0000000140B0BCE7: mov     ecx, ebx
 * 0000000140B0BCE9: mov     [rsi+828h], r15d
 * 0000000140B0BCF0: mov     rax, r14
 * 0000000140B0BCF3: mov     rdx, r10
 * 0000000140B0BCF6: mov     [rax], r15
 * 0000000140B0BCF9: add     ecx, 0FFFFFFF8h
 * 0000000140B0BCFC: add     rax, 8
 * 0000000140B0BD00: sub     rdx, r13
 * 0000000140B0BD03: jnz     short loc_140B0BCF6
 * 0000000140B0BD05: mov     edx, 0FFFFFFFFh
 * 0000000140B0BD0A: test    ecx, ecx
 * 0000000140B0BD0C: jz      short loc_140B0BD18
 * 0000000140B0BD0E: mov     [rax], r15b
 * 0000000140B0BD11: add     rax, r13
 * 0000000140B0BD14: add     ecx, edx
 * 0000000140B0BD16: jnz     short loc_140B0BD0E
 * 0000000140B0BD18: mov     r10d, [rsi+7E4h]
 * 0000000140B0BD1F: mov     r9, rsi
 * 0000000140B0BD22: add     [rsi+828h], r10d
 * 0000000140B0BD29: mov     rax, rsi
 * 0000000140B0BD2C: mov     ebx, [rsi+814h]
 * 0000000140B0BD32: mov     r13, [rsi+818h]
 * 0000000140B0BD39: lea     rcx, [rsi+r10]
 * 0000000140B0BD3D: cmp     rsi, rcx
 * 0000000140B0BD40: jnb     short loc_140B0BD53
 * 0000000140B0BD42: mov     r8d, 40h ; '@'
 * 0000000140B0BD48: prefetchnta byte ptr [rax]
 * 0000000140B0BD4B: add     rax, r8
 * 0000000140B0BD4E: cmp     rax, rcx
 * 0000000140B0BD51: jb      short loc_140B0BD48
 * 0000000140B0BD53: mov     r15d, r10d
 * 0000000140B0BD56: mov     r8, r13
 * 0000000140B0BD59: shr     r15d, 7
 * 0000000140B0BD5D: test    r15d, r15d
 * 0000000140B0BD60: jz      short loc_140B0BDD0
 * 0000000140B0BD62: mov     edi, 1
 * 0000000140B0BD67: mov     r12, 7010008004002001h
 * 0000000140B0BD71: mov     eax, 8
 * 0000000140B0BD76: xor     r8, [r9]
 * 0000000140B0BD79: mov     ecx, ebx
 * 0000000140B0BD7B: rol     r8, cl
 * 0000000140B0BD7E: xor     r8, [r9+8]
 * 0000000140B0BD82: add     r9, 10h
 * 0000000140B0BD86: rol     r8, cl
 * 0000000140B0BD89: sub     rax, rdi
 * 0000000140B0BD8C: jnz     short loc_140B0BD76
 * 0000000140B0BD8E: mov     rcx, r9
 * 0000000140B0BD91: sub     rcx, rsi
 * 0000000140B0BD94: xor     rcx, r13
 * 0000000140B0BD97: mov     rax, rcx
 * 0000000140B0BD9A: rol     rax, 11h
 * 0000000140B0BD9E: xor     rcx, rax
 * 0000000140B0BDA1: mov     rax, r12
 * 0000000140B0BDA4: mul     rcx
 * 0000000140B0BDA7: xor     ebx, edx
 * 0000000140B0BDA9: mov     [rbp+0A70h+var_420], rdx
 * 0000000140B0BDB0: xor     ebx, eax
 * 0000000140B0BDB2: mov     edx, 0FFFFFFFFh
 * 0000000140B0BDB7: and     ebx, 3Fh
 * 0000000140B0BDBA: cmovz   ebx, edi
 * 0000000140B0BDBD: add     r15d, edx
 * 0000000140B0BDC0: jnz     short loc_140B0BD71
 * 0000000140B0BDC2: mov     r12d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0BDC9: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0BDD0: and     r10d, 7Fh
 * 0000000140B0BDD4: mov     r15d, 1
 * 0000000140B0BDDA: cmp     r10d, 8
 * 0000000140B0BDDE: jb      short loc_140B0BDFC
 * 0000000140B0BDE0: mov     eax, r10d
 * 0000000140B0BDE3: shr     rax, 3
 * 0000000140B0BDE7: xor     r8, [r9]
 * 0000000140B0BDEA: mov     ecx, ebx
 * 0000000140B0BDEC: rol     r8, cl
 * 0000000140B0BDEF: add     r9, 8
 * 0000000140B0BDF3: add     r10d, 0FFFFFFF8h
 * 0000000140B0BDF7: sub     rax, r15
 * 0000000140B0BDFA: jnz     short loc_140B0BDE7
 * 0000000140B0BDFC: xor     r13d, r13d
 * 0000000140B0BDFF: test    r10d, r10d
 * 0000000140B0BE02: jz      short loc_140B0BE18
 * 0000000140B0BE04: movzx   eax, byte ptr [r9]
 * 0000000140B0BE08: mov     ecx, ebx
 * 0000000140B0BE0A: xor     r8, rax
 * 0000000140B0BE0D: add     r9, r15
 * 0000000140B0BE10: rol     r8, cl
 * 0000000140B0BE13: add     r10d, edx
 * 0000000140B0BE16: jnz     short loc_140B0BE04
 * 0000000140B0BE18: mov     rax, [rsp+0B70h+var_AF8]
 * 0000000140B0BE1D: lea     rcx, [rbp+0A70h+var_D0]
 * 0000000140B0BE24: mov     [rsi+7B8h], rax
 * 0000000140B0BE2B: mov     edx, 4
 * 0000000140B0BE30: mov     eax, [rbp+0A70h+var_AE0]
 * 0000000140B0BE33: add     [rsi+828h], eax
 * 0000000140B0BE39: lea     r9d, [rdx+1Ch]
 * 0000000140B0BE3D: mov     rax, [rcx]
 * 0000000140B0BE40: add     r9d, 0FFFFFFF8h
 * 0000000140B0BE44: mov     [r14], rax
 * 0000000140B0BE47: add     rcx, 8
 * 0000000140B0BE4B: add     r14, 8
 * 0000000140B0BE4F: sub     rdx, r15
 * 0000000140B0BE52: jnz     short loc_140B0BE3D
 * 0000000140B0BE54: test    r9d, r9d
 * 0000000140B0BE57: jz      short loc_140B0BE76
 * 0000000140B0BE59: mov     r12d, 0FFFFFFFFh
 * 0000000140B0BE5F: mov     al, [rcx]
 * 0000000140B0BE61: add     rcx, r15
 * 0000000140B0BE64: mov     [r14], al
 * 0000000140B0BE67: add     r14, r15
 * 0000000140B0BE6A: add     r9d, r12d
 * 0000000140B0BE6D: jnz     short loc_140B0BE5F
 * 0000000140B0BE6F: mov     r12d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0BE76: mov     [rsi+7B8h], r8
 * 0000000140B0BE7D: test    dword ptr [rsi+990h], 40000000h
 * 0000000140B0BE87: jnz     loc_140B0C648
 * 0000000140B0BE8D: mov     rcx, rsi
 * 0000000140B0BE90: mov     eax, r13d
 * 0000000140B0BE93: mov     r10d, 19h
 * 0000000140B0BE99: xor     [rcx], r11
 * 0000000140B0BE9C: add     eax, r15d
 * 0000000140B0BE9F: lea     rcx, [rcx+8]
 * 0000000140B0BEA3: cmp     eax, r10d
 * 0000000140B0BEA6: jb      short loc_140B0BE99
 * 0000000140B0BEA8: mov     [rbp+0A70h+var_950], r11
 * 0000000140B0BEAF: mov     r8d, r12d
 * 0000000140B0BEB2: test    r12d, r12d
 * 0000000140B0BEB5: jz      short loc_140B0BEF2
 * 0000000140B0BEB7: mov     edx, r12d
 * 0000000140B0BEBA: dec     rdx
 * 0000000140B0BEBD: lea     rdx, [rcx+rdx*8]
 * 0000000140B0BEC1: xor     [rdx], r11
 * 0000000140B0BEC4: lea     rax, [rbp+0A70h+var_950]
 * 0000000140B0BECB: mov     ecx, r8d
 * 0000000140B0BECE: lea     rdx, [rdx-8]
 * 0000000140B0BED2: ror     r11, cl
 * 0000000140B0BED5: mov     [rbp+0A70h+var_950], r11
 * 0000000140B0BEDC: and     r11d, 3Fh
 * 0000000140B0BEE0: btc     [rax], r11
 * 0000000140B0BEE4: sub     r8d, r15d
 * 0000000140B0BEE7: jz      short loc_140B0BEF2
 * 0000000140B0BEE9: mov     r11, [rbp+0A70h+var_950]
 * 0000000140B0BEF0: jmp     short loc_140B0BEC1
 * 0000000140B0BEF2: mov     r15d, [rbp+0A70h+var_AD0]
 * 0000000140B0BEF6: bt      r15d, 13h
 * 0000000140B0BEFB: jnb     short loc_140B0BF48
 * 0000000140B0BEFD: rdtsc
 * 0000000140B0BEFF: shl     rdx, 20h
 * 0000000140B0BF03: or      rax, rdx
 * 0000000140B0BF06: mov     rcx, rax
 * 0000000140B0BF09: ror     rax, 3
 * 0000000140B0BF0D: xor     rcx, rax
 * 0000000140B0BF10: mov     rax, 7010008004002001h
 * 0000000140B0BF1A: mul     rcx
 * 0000000140B0BF1D: mov     rcx, rdx
 * 0000000140B0BF20: mov     [rbp+0A70h+var_418], rdx
 * 0000000140B0BF27: xor     rcx, rax
 * 0000000140B0BF2A: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140B0BF34: mul     rcx
 * 0000000140B0BF37: shr     rdx, 1
 * 0000000140B0BF3A: lea     rax, [rdx+rdx*2]
 * 0000000140B0BF3E: cmp     rcx, rax
 * 0000000140B0BF41: jz      short loc_140B0BF53
 * 0000000140B0BF43: jmp     loc_140B0C648
 * 0000000140B0BF48: bt      r15d, 8
 * 0000000140B0BF4D: jb      loc_140B0C648
 * 0000000140B0BF53: mov     r14d, dword ptr [rbp+0A70h+var_AD8]
 * 0000000140B0BF57: mov     ecx, esi
 * 0000000140B0BF59: mov     rdi, [rbp+0A70h+var_A78]
 * 0000000140B0BF5D: mov     r9, rsi
 * 0000000140B0BF60: mov     ebx, r10d
 * 0000000140B0BF63: ror     r9, cl
 * 0000000140B0BF66: mov     r10d, r13d
 * 0000000140B0BF69: mov     r11, rsi
 * 0000000140B0BF6C: mov     r13, [rbp+0A70h+var_A80]
 * 0000000140B0BF70: mov     rdx, [r11]
 * 0000000140B0BF73: mov     eax, r10d
 * 0000000140B0BF76: sub     rdx, rax
 * 0000000140B0BF79: sub     rdx, rsi
 * 0000000140B0BF7C: bt      r15d, 9
 * 0000000140B0BF81: jb      short loc_140B0BF96
 * 0000000140B0BF83: xor     rdx, r13
 * 0000000140B0BF86: mov     ecx, edi
 * 0000000140B0BF88: bswap   rdx
 * 0000000140B0BF8B: xor     rdx, r9
 * 0000000140B0BF8E: ror     rdx, cl
 * 0000000140B0BF91: xor     rdx, rdi
 * 0000000140B0BF94: jmp     short loc_140B0BF99
 * 0000000140B0BF96: xor     rdx, r9
 * 0000000140B0BF99: mov     [r11], rdx
 * 0000000140B0BF9C: mov     ecx, edx
 * 0000000140B0BF9E: mov     r8d, edx
 * 0000000140B0BFA1: mov     eax, r10d
 * 0000000140B0BFA4: xor     r8d, 0F29h
 * 0000000140B0BFAB: mov     edx, 0C8h
 * 0000000140B0BFB0: sub     edx, r10d
 * 0000000140B0BFB3: not     ecx
 * 0000000140B0BFB5: xor     rdx, rax
 * 0000000140B0BFB8: add     r11, 8
 * 0000000140B0BFBC: ror     rdx, cl
 * 0000000140B0BFBF: mov     cl, r8b
 * 0000000140B0BFC2: xor     r9, rdx
 * 0000000140B0BFC5: rol     r9, cl
 * 0000000140B0BFC8: add     r9, rsi
 * 0000000140B0BFCB: xor     r9, r14
 * 0000000140B0BFCE: inc     r10d
 * 0000000140B0BFD1: cmp     r10d, 19h
 * 0000000140B0BFD5: jnz     short loc_140B0BFE6
 * 0000000140B0BFD7: bt      r15d, 13h
 * 0000000140B0BFDC: lea     eax, [r10-19h]
 * 0000000140B0BFE0: cmovnb  eax, r12d
 * 0000000140B0BFE4: add     ebx, eax
 * 0000000140B0BFE6: cmp     r10d, ebx
 * 0000000140B0BFE9: jb      short loc_140B0BF70
 * 0000000140B0BFEB: jmp     loc_140B0C641
 * 0000000140B0BFF0: mov     r11d, 20h ; ' '
 * 0000000140B0BFF6: mov     [r14+0C4h], r12d
 * 0000000140B0BFFD: mov     r12, [r14+7B8h]
 * 0000000140B0C004: lea     rbx, [r14+798h]
 * 0000000140B0C00B: mov     r13d, [r14+828h]
 * 0000000140B0C012: lea     rdx, [rbp+0A70h+var_B0]
 * 0000000140B0C019: mov     [rbp+0A70h+var_A78], r12
 * 0000000140B0C01D: mov     rsi, r14
 * 0000000140B0C020: lea     r10d, [r11-1Ch]
 * 0000000140B0C024: mov     dword ptr [rbp+0A70h+arg_8], r13d
 * 0000000140B0C02B: mov     r9d, r10d
 * 0000000140B0C02E: mov     [rsp+0B70h+var_AF8], rbx
 * 0000000140B0C033: mov     r8d, r11d
 * 0000000140B0C036: lea     r12d, [r11-1Fh]
 * 0000000140B0C03A: mov     rcx, rbx
 * 0000000140B0C03D: mov     rax, [rcx]
 * 0000000140B0C040: add     r8d, 0FFFFFFF8h
 * 0000000140B0C044: mov     [rdx], rax
 * 0000000140B0C047: add     rcx, 8
 * 0000000140B0C04B: add     rdx, 8
 * 0000000140B0C04F: sub     r9, r12
 * 0000000140B0C052: jnz     short loc_140B0C03D
 * 0000000140B0C054: mov     r12, [rbp+0A70h+var_A78]
 * 0000000140B0C058: mov     r9d, 1
 * 0000000140B0C05E: test    r8d, r8d
 * 0000000140B0C061: jz      short loc_140B0C07F
 * 0000000140B0C063: mov     r13d, 0FFFFFFFFh
 * 0000000140B0C069: mov     al, [rcx]
 * 0000000140B0C06B: add     rcx, r9
 * 0000000140B0C06E: mov     [rdx], al
 * 0000000140B0C070: add     rdx, r9
 * 0000000140B0C073: add     r8d, r13d
 * 0000000140B0C076: jnz     short loc_140B0C069
 * 0000000140B0C078: mov     r13d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0C07F: mov     [r14+7B8h], r15
 * 0000000140B0C086: mov     ecx, r11d
 * 0000000140B0C089: mov     [r14+828h], r15d
 * 0000000140B0C090: mov     rax, rbx
 * 0000000140B0C093: mov     rdx, r10
 * 0000000140B0C096: mov     [rax], r15
 * 0000000140B0C099: add     ecx, 0FFFFFFF8h
 * 0000000140B0C09C: add     rax, 8
 * 0000000140B0C0A0: sub     rdx, r9
 * 0000000140B0C0A3: jnz     short loc_140B0C096
 * 0000000140B0C0A5: test    ecx, ecx
 * 0000000140B0C0A7: jz      short loc_140B0C0B8
 * 0000000140B0C0A9: mov     edx, 0FFFFFFFFh
 * 0000000140B0C0AE: mov     [rax], r15b
 * 0000000140B0C0B1: add     rax, r9
 * 0000000140B0C0B4: add     ecx, edx
 * 0000000140B0C0B6: jnz     short loc_140B0C0AE
 * 0000000140B0C0B8: mov     r10d, [r14+7E4h]
 * 0000000140B0C0BF: mov     r9, r14
 * 0000000140B0C0C2: add     [r14+828h], r10d
 * 0000000140B0C0C9: mov     rax, r14
 * 0000000140B0C0CC: mov     r11d, [r14+814h]
 * 0000000140B0C0D3: mov     r15, [r14+818h]
 * 0000000140B0C0DA: lea     rcx, [r14+r10]
 * 0000000140B0C0DE: cmp     r14, rcx
 * 0000000140B0C0E1: jnb     short loc_140B0C0F3
 * 0000000140B0C0E3: mov     edx, 40h ; '@'
 * 0000000140B0C0E8: prefetchnta byte ptr [rax]
 * 0000000140B0C0EB: add     rax, rdx
 * 0000000140B0C0EE: cmp     rax, rcx
 * 0000000140B0C0F1: jb      short loc_140B0C0E8
 * 0000000140B0C0F3: mov     r14d, r10d
 * 0000000140B0C0F6: mov     r8, r15
 * 0000000140B0C0F9: shr     r14d, 7
 * 0000000140B0C0FD: test    r14d, r14d
 * 0000000140B0C100: jz      loc_140B0C18B
 * 0000000140B0C106: mov     rdi, [rbp+0A70h+arg_0]
 * 0000000140B0C10D: mov     rbx, 7010008004002001h
 * 0000000140B0C117: mov     r12d, 1
 * 0000000140B0C11D: mov     r13d, 0FFFFFFFFh
 * 0000000140B0C123: mov     eax, 8
 * 0000000140B0C128: xor     r8, [r9]
 * 0000000140B0C12B: mov     ecx, r11d
 * 0000000140B0C12E: rol     r8, cl
 * 0000000140B0C131: xor     r8, [r9+8]
 * 0000000140B0C135: add     r9, 10h
 * 0000000140B0C139: rol     r8, cl
 * 0000000140B0C13C: sub     rax, r12
 * 0000000140B0C13F: jnz     short loc_140B0C128
 * 0000000140B0C141: mov     rcx, r9
 * 0000000140B0C144: sub     rcx, rdi
 * 0000000140B0C147: xor     rcx, r15
 * 0000000140B0C14A: mov     rax, rcx
 * 0000000140B0C14D: rol     rax, 11h
 * 0000000140B0C151: xor     rcx, rax
 * 0000000140B0C154: mov     rax, rbx
 * 0000000140B0C157: mul     rcx
 * 0000000140B0C15A: xor     r11d, edx
 * 0000000140B0C15D: mov     [rbp+0A70h+var_410], rdx
 * 0000000140B0C164: xor     r11d, eax
 * 0000000140B0C167: and     r11d, 3Fh
 * 0000000140B0C16B: cmovz   r11d, r12d
 * 0000000140B0C16F: add     r14d, r13d
 * 0000000140B0C172: jnz     short loc_140B0C123
 * 0000000140B0C174: mov     rbx, [rsp+0B70h+var_AF8]
 * 0000000140B0C179: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0C180: mov     r12, [rbp+0A70h+var_A78]
 * 0000000140B0C184: mov     r13d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0C18B: and     r10d, 7Fh
 * 0000000140B0C18F: mov     r14d, 1
 * 0000000140B0C195: cmp     r10d, 8
 * 0000000140B0C199: jb      short loc_140B0C1B8
 * 0000000140B0C19B: mov     eax, r10d
 * 0000000140B0C19E: shr     rax, 3
 * 0000000140B0C1A2: xor     r8, [r9]
 * 0000000140B0C1A5: mov     ecx, r11d
 * 0000000140B0C1A8: rol     r8, cl
 * 0000000140B0C1AB: add     r9, 8
 * 0000000140B0C1AF: add     r10d, 0FFFFFFF8h
 * 0000000140B0C1B3: sub     rax, r14
 * 0000000140B0C1B6: jnz     short loc_140B0C1A2
 * 0000000140B0C1B8: mov     r15d, 0FFFFFFFFh
 * 0000000140B0C1BE: test    r10d, r10d
 * 0000000140B0C1C1: jz      short loc_140B0C1D8
 * 0000000140B0C1C3: movzx   eax, byte ptr [r9]
 * 0000000140B0C1C7: mov     ecx, r11d
 * 0000000140B0C1CA: xor     r8, rax
 * 0000000140B0C1CD: add     r9, r14
 * 0000000140B0C1D0: rol     r8, cl
 * 0000000140B0C1D3: add     r10d, r15d
 * 0000000140B0C1D6: jnz     short loc_140B0C1C3
 * 0000000140B0C1D8: mov     r9, [rbp+0A70h+arg_0]
 * 0000000140B0C1DF: lea     rcx, [rbp+0A70h+var_B0]
 * 0000000140B0C1E6: mov     edx, 4
 * 0000000140B0C1EB: mov     [r9+7B8h], r12
 * 0000000140B0C1F2: add     [r9+828h], r13d
 * 0000000140B0C1F9: lea     r12d, [rdx-3]
 * 0000000140B0C1FD: lea     r10d, [rdx+1Ch]
 * 0000000140B0C201: mov     rax, [rcx]
 * 0000000140B0C204: add     r10d, 0FFFFFFF8h
 * 0000000140B0C208: mov     [rbx], rax
 * 0000000140B0C20B: add     rcx, 8
 * 0000000140B0C20F: add     rbx, 8
 * 0000000140B0C213: sub     rdx, r12
 * 0000000140B0C216: jnz     short loc_140B0C201
 * 0000000140B0C218: test    r10d, r10d
 * 0000000140B0C21B: jz      short loc_140B0C22C
 * 0000000140B0C21D: mov     al, [rcx]
 * 0000000140B0C21F: add     rcx, r12
 * 0000000140B0C222: mov     [rbx], al
 * 0000000140B0C224: add     rbx, r12
 * 0000000140B0C227: add     r10d, r15d
 * 0000000140B0C22A: jnz     short loc_140B0C21D
 * 0000000140B0C22C: mov     [r9+7B8h], r8
 * 0000000140B0C233: jmp     loc_140B0C689
 * 0000000140B0C238: mov     ecx, [rsi+954h]
 * 0000000140B0C23E: mov     r12d, [rsi+0A2Ch]
 * 0000000140B0C245: mov     rax, [rsi+7C8h]
 * 0000000140B0C24C: add     r12d, 0FFFFFF38h
 * 0000000140B0C253: mov     dword ptr [rbp+0A70h+var_AD8], ecx
 * 0000000140B0C256: mov     rcx, [rsi+4E0h]
 * 0000000140B0C25D: shr     r12d, 3
 * 0000000140B0C261: mov     [rbp+0A70h+var_AA8], rcx
 * 0000000140B0C265: mov     rcx, [rsi+5B8h]
 * 0000000140B0C26C: mov     [rbp+0A70h+var_A80], rcx
 * 0000000140B0C270: mov     [rbp+0A70h+var_AC0], rax
 * 0000000140B0C274: mov     [rbp+0A70h+var_AE0], r12d
 * 0000000140B0C278: mov     [rsi+0C4h], r12d
 * 0000000140B0C27F: rdtsc
 * 0000000140B0C281: shl     rdx, 20h
 * 0000000140B0C285: or      rax, rdx
 * 0000000140B0C288: mov     rcx, rax
 * 0000000140B0C28B: ror     rax, 3
 * 0000000140B0C28F: xor     rcx, rax
 * 0000000140B0C292: mov     rax, r8
 * 0000000140B0C295: mul     rcx
 * 0000000140B0C298: mov     r11, rdx
 * 0000000140B0C29B: mov     [rbp+0A70h+var_408], rdx
 * 0000000140B0C2A2: xor     r11, rax
 * 0000000140B0C2A5: jz      short loc_140B0C27F
 * 0000000140B0C2A7: mov     rax, [rsi+7B8h]
 * 0000000140B0C2AE: lea     r14, [rsi+798h]
 * 0000000140B0C2B5: mov     ebx, 20h ; ' '
 * 0000000140B0C2BA: mov     [rbp+0A70h+var_A78], rax
 * 0000000140B0C2BE: mov     eax, [rsi+828h]
 * 0000000140B0C2C4: lea     rdx, [rbp+0A70h+var_90]
 * 0000000140B0C2CB: mov     [rbp+0A70h+var_AD0], eax
 * 0000000140B0C2CE: mov     r8d, ebx
 * 0000000140B0C2D1: mov     rcx, r14
 * 0000000140B0C2D4: lea     r10d, [rbx-1Ch]
 * 0000000140B0C2D8: mov     r9d, r10d
 * 0000000140B0C2DB: lea     r15d, [rbx-1Fh]
 * 0000000140B0C2DF: mov     rax, [rcx]
 * 0000000140B0C2E2: add     r8d, 0FFFFFFF8h
 * 0000000140B0C2E6: mov     [rdx], rax
 * 0000000140B0C2E9: add     rcx, 8
 * 0000000140B0C2ED: add     rdx, 8
 * 0000000140B0C2F1: sub     r9, r15
 * 0000000140B0C2F4: jnz     short loc_140B0C2DF
 * 0000000140B0C2F6: test    r8d, r8d
 * 0000000140B0C2F9: jz      short loc_140B0C317
 * 0000000140B0C2FB: mov     r13d, 0FFFFFFFFh
 * 0000000140B0C301: mov     al, [rcx]
 * 0000000140B0C303: add     rcx, r15
 * 0000000140B0C306: mov     [rdx], al
 * 0000000140B0C308: add     rdx, r15
 * 0000000140B0C30B: add     r8d, r13d
 * 0000000140B0C30E: jnz     short loc_140B0C301
 * 0000000140B0C310: mov     r13d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0C317: mov     [rsi+7B8h], r9
 * 0000000140B0C31E: mov     ecx, ebx
 * 0000000140B0C320: mov     [rsi+828h], r9d
 * 0000000140B0C327: mov     rax, r14
 * 0000000140B0C32A: mov     rdx, r10
 * 0000000140B0C32D: mov     [rax], r9
 * 0000000140B0C330: add     ecx, 0FFFFFFF8h
 * 0000000140B0C333: add     rax, 8
 * 0000000140B0C337: sub     rdx, r15
 * 0000000140B0C33A: jnz     short loc_140B0C32D
 * 0000000140B0C33C: test    ecx, ecx
 * 0000000140B0C33E: jz      short loc_140B0C34F
 * 0000000140B0C340: mov     edx, 0FFFFFFFFh
 * 0000000140B0C345: mov     [rax], r9b
 * 0000000140B0C348: add     rax, r15
 * 0000000140B0C34B: add     ecx, edx
 * 0000000140B0C34D: jnz     short loc_140B0C345
 * 0000000140B0C34F: mov     r10d, [rsi+7E4h]
 * 0000000140B0C356: mov     r9, rsi
 * 0000000140B0C359: add     [rsi+828h], r10d
 * 0000000140B0C360: mov     rax, rsi
 * 0000000140B0C363: mov     ebx, [rsi+814h]
 * 0000000140B0C369: mov     r8, [rsi+818h]
 * 0000000140B0C370: lea     rcx, [rsi+r10]
 * 0000000140B0C374: cmp     rsi, rcx
 * 0000000140B0C377: jnb     short loc_140B0C389
 * 0000000140B0C379: mov     edx, 40h ; '@'
 * 0000000140B0C37E: prefetchnta byte ptr [rax]
 * 0000000140B0C381: add     rax, rdx
 * 0000000140B0C384: cmp     rax, rcx
 * 0000000140B0C387: jb      short loc_140B0C37E
 * 0000000140B0C389: mov     r15d, r10d
 * 0000000140B0C38C: mov     edx, 1
 * 0000000140B0C391: shr     r15d, 7
 * 0000000140B0C395: test    r15d, r15d
 * 0000000140B0C398: jz      short loc_140B0C417
 * 0000000140B0C39A: mov     rdi, r8
 * 0000000140B0C39D: mov     r12d, 0FFFFFFFFh
 * 0000000140B0C3A3: mov     r14, 7010008004002001h
 * 0000000140B0C3AD: mov     eax, 8
 * 0000000140B0C3B2: xor     r8, [r9]
 * 0000000140B0C3B5: mov     ecx, ebx
 * 0000000140B0C3B7: rol     r8, cl
 * 0000000140B0C3BA: xor     r8, [r9+8]
 * 0000000140B0C3BE: add     r9, 10h
 * 0000000140B0C3C2: rol     r8, cl
 * 0000000140B0C3C5: sub     rax, rdx
 * 0000000140B0C3C8: jnz     short loc_140B0C3B2
 * 0000000140B0C3CA: mov     rcx, r9
 * 0000000140B0C3CD: sub     rcx, rsi
 * 0000000140B0C3D0: xor     rcx, rdi
 * 0000000140B0C3D3: mov     rax, rcx
 * 0000000140B0C3D6: rol     rax, 11h
 * 0000000140B0C3DA: xor     rcx, rax
 * 0000000140B0C3DD: mov     rax, r14
 * 0000000140B0C3E0: mul     rcx
 * 0000000140B0C3E3: xor     ebx, edx
 * 0000000140B0C3E5: mov     [rbp+0A70h+var_400], rdx
 * 0000000140B0C3EC: xor     ebx, eax
 * 0000000140B0C3EE: mov     edx, 1
 * 0000000140B0C3F3: and     ebx, 3Fh
 * 0000000140B0C3F6: cmovz   ebx, edx
 * 0000000140B0C3F9: add     r15d, r12d
 * 0000000140B0C3FC: jnz     short loc_140B0C3AD
 * 0000000140B0C3FE: mov     r12d, [rbp+0A70h+var_AE0]
 * 0000000140B0C402: lea     r14, [rsi+798h]
 * 0000000140B0C409: mov     r13d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0C410: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0C417: and     r10d, 7Fh
 * 0000000140B0C41B: cmp     r10d, 8
 * 0000000140B0C41F: jb      short loc_140B0C43D
 * 0000000140B0C421: mov     eax, r10d
 * 0000000140B0C424: shr     rax, 3
 * 0000000140B0C428: xor     r8, [r9]
 * 0000000140B0C42B: mov     ecx, ebx
 * 0000000140B0C42D: rol     r8, cl
 * 0000000140B0C430: add     r9, 8
 * 0000000140B0C434: add     r10d, 0FFFFFFF8h
 * 0000000140B0C438: sub     rax, rdx
 * 0000000140B0C43B: jnz     short loc_140B0C428
 * 0000000140B0C43D: xor     r15d, r15d
 * 0000000140B0C440: test    r10d, r10d
 * 0000000140B0C443: jz      short loc_140B0C466
 * 0000000140B0C445: mov     r13d, 0FFFFFFFFh
 * 0000000140B0C44B: movzx   eax, byte ptr [r9]
 * 0000000140B0C44F: mov     ecx, ebx
 * 0000000140B0C451: xor     r8, rax
 * 0000000140B0C454: add     r9, rdx
 * 0000000140B0C457: rol     r8, cl
 * 0000000140B0C45A: add     r10d, r13d
 * 0000000140B0C45D: jnz     short loc_140B0C44B
 * 0000000140B0C45F: mov     r13d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0C466: mov     rax, [rbp+0A70h+var_A78]
 * 0000000140B0C46A: lea     rcx, [rbp+0A70h+var_90]
 * 0000000140B0C471: mov     edx, 4
 * 0000000140B0C476: mov     [rsi+7B8h], rax
 * 0000000140B0C47D: mov     eax, [rbp+0A70h+var_AD0]
 * 0000000140B0C480: add     [rsi+828h], eax
 * 0000000140B0C486: lea     ebx, [rdx-3]
 * 0000000140B0C489: lea     r9d, [rdx+1Ch]
 * 0000000140B0C48D: mov     rax, [rcx]
 * 0000000140B0C490: add     r9d, 0FFFFFFF8h
 * 0000000140B0C494: mov     [r14], rax
 * 0000000140B0C497: add     rcx, 8
 * 0000000140B0C49B: add     r14, 8
 * 0000000140B0C49F: sub     rdx, rbx
 * 0000000140B0C4A2: jnz     short loc_140B0C48D
 * 0000000140B0C4A4: test    r9d, r9d
 * 0000000140B0C4A7: jz      short loc_140B0C4C6
 * 0000000140B0C4A9: mov     r13d, 0FFFFFFFFh
 * 0000000140B0C4AF: mov     al, [rcx]
 * 0000000140B0C4B1: add     rcx, rbx
 * 0000000140B0C4B4: mov     [r14], al
 * 0000000140B0C4B7: add     r14, rbx
 * 0000000140B0C4BA: add     r9d, r13d
 * 0000000140B0C4BD: jnz     short loc_140B0C4AF
 * 0000000140B0C4BF: mov     r13d, dword ptr [rbp+0A70h+arg_8]
 * 0000000140B0C4C6: mov     [rsi+7B8h], r8
 * 0000000140B0C4CD: test    dword ptr [rsi+990h], 40000000h
 * 0000000140B0C4D7: jnz     loc_140B0C648
 * 0000000140B0C4DD: mov     rcx, rsi
 * 0000000140B0C4E0: mov     eax, r15d
 * 0000000140B0C4E3: mov     r10d, 19h
 * 0000000140B0C4E9: xor     [rcx], r11
 * 0000000140B0C4EC: add     eax, ebx
 * 0000000140B0C4EE: lea     rcx, [rcx+8]
 * 0000000140B0C4F2: cmp     eax, r10d
 * 0000000140B0C4F5: jb      short loc_140B0C4E9
 * 0000000140B0C4F7: mov     [rbp+0A70h+var_930], r11
 * 0000000140B0C4FE: mov     r8d, r12d
 * 0000000140B0C501: test    r12d, r12d
 * 0000000140B0C504: jz      short loc_140B0C541
 * 0000000140B0C506: mov     edx, r12d
 * 0000000140B0C509: dec     rdx
 * 0000000140B0C50C: lea     rdx, [rcx+rdx*8]
 * 0000000140B0C510: xor     [rdx], r11
 * 0000000140B0C513: lea     rax, [rbp+0A70h+var_930]
 * 0000000140B0C51A: mov     ecx, r8d
 * 0000000140B0C51D: lea     rdx, [rdx-8]
 * 0000000140B0C521: ror     r11, cl
 * 0000000140B0C524: mov     [rbp+0A70h+var_930], r11
 * 0000000140B0C52B: and     r11d, 3Fh
 * 0000000140B0C52F: btc     [rax], r11
 * 0000000140B0C533: sub     r8d, ebx
 * 0000000140B0C536: jz      short loc_140B0C541
 * 0000000140B0C538: mov     r11, [rbp+0A70h+var_930]
 * 0000000140B0C53F: jmp     short loc_140B0C510
 * 0000000140B0C541: bt      r13d, 13h
 * 0000000140B0C546: jnb     short loc_140B0C593
 * 0000000140B0C548: rdtsc
 * 0000000140B0C54A: shl     rdx, 20h
 * 0000000140B0C54E: or      rax, rdx
 * 0000000140B0C551: mov     rcx, rax
 * 0000000140B0C554: ror     rax, 3
 * 0000000140B0C558: xor     rcx, rax
 * 0000000140B0C55B: mov     rax, 7010008004002001h
 * 0000000140B0C565: mul     rcx
 * 0000000140B0C568: mov     rcx, rdx
 * 0000000140B0C56B: mov     [rbp+0A70h+var_3F8], rdx
 * 0000000140B0C572: xor     rcx, rax
 * 0000000140B0C575: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140B0C57F: mul     rcx
 * 0000000140B0C582: shr     rdx, 1
 * 0000000140B0C585: lea     rax, [rdx+rdx*2]
 * 0000000140B0C589: cmp     rcx, rax
 * 0000000140B0C58C: jz      short loc_140B0C59E
 * 0000000140B0C58E: jmp     loc_140B0C648
 * 0000000140B0C593: bt      r13d, 8
 * 0000000140B0C598: jb      loc_140B0C648
 * 0000000140B0C59E: mov     r14d, dword ptr [rbp+0A70h+var_AD8]
 * 0000000140B0C5A2: mov     ecx, esi
 * 0000000140B0C5A4: mov     rdi, [rbp+0A70h+var_AA8]
 * 0000000140B0C5A8: mov     r9, rsi
 * 0000000140B0C5AB: mov     ebx, r10d
 * 0000000140B0C5AE: ror     r9, cl
 * 0000000140B0C5B1: mov     r10d, r15d
 * 0000000140B0C5B4: mov     r11, rsi
 * 0000000140B0C5B7: mov     r15, [rbp+0A70h+var_A80]
 * 0000000140B0C5BB: mov     rcx, [r11]
 * 0000000140B0C5BE: mov     eax, r10d
 * 0000000140B0C5C1: sub     rcx, rax
 * 0000000140B0C5C4: sub     rcx, rsi
 * 0000000140B0C5C7: bt      r13d, 9
 * 0000000140B0C5CC: jb      short loc_140B0C5E5
 * 0000000140B0C5CE: mov     rax, rdi
 * 0000000140B0C5D1: xor     rax, rcx
 * 0000000140B0C5D4: mov     ecx, r15d
 * 0000000140B0C5D7: bswap   rax
 * 0000000140B0C5DA: xor     rax, r9
 * 0000000140B0C5DD: ror     rax, cl
 * 0000000140B0C5E0: xor     rax, r15
 * 0000000140B0C5E3: jmp     short loc_140B0C5EB
 * 0000000140B0C5E5: mov     rax, r9
 * 0000000140B0C5E8: xor     rax, rcx
 * 0000000140B0C5EB: mov     edx, 0C8h
 * 0000000140B0C5F0: mov     [r11], rax
 * 0000000140B0C5F3: sub     edx, r10d
 * 0000000140B0C5F6: mov     ecx, eax
 * 0000000140B0C5F8: mov     r8d, eax
 * 0000000140B0C5FB: not     ecx
 * 0000000140B0C5FD: xor     r8d, 0F29h
 * 0000000140B0C604: mov     eax, r10d
 * 0000000140B0C607: xor     rdx, rax
 * 0000000140B0C60A: add     r11, 8
 * 0000000140B0C60E: ror     rdx, cl
 * 0000000140B0C611: mov     cl, r8b
 * 0000000140B0C614: xor     r9, rdx
 * 0000000140B0C617: rol     r9, cl
 * 0000000140B0C61A: add     r9, rsi
 * 0000000140B0C61D: xor     r9, r14
 * 0000000140B0C620: inc     r10d
 * 0000000140B0C623: cmp     r10d, 19h
 * 0000000140B0C627: jnz     short loc_140B0C638
 * 0000000140B0C629: bt      r13d, 13h
 * 0000000140B0C62E: lea     eax, [r10-19h]
 * 0000000140B0C632: cmovnb  eax, r12d
 * 0000000140B0C636: add     ebx, eax
 * 0000000140B0C638: cmp     r10d, ebx
 * 0000000140B0C63B: jb      loc_140B0C5BB
 * 0000000140B0C641: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140B0C648: rdtsc
 * 0000000140B0C64A: shl     rdx, 20h
 * 0000000140B0C64E: mov     r10, 7010008004002001h
 * 0000000140B0C658: or      rax, rdx
 * 0000000140B0C65B: mov     r12d, 1
 * 0000000140B0C661: mov     rcx, rax
 * 0000000140B0C664: mov     [rbp+0A70h+var_AE0], r12d
 * 0000000140B0C668: ror     rax, 3
 * 0000000140B0C66C: xor     rcx, rax
 * 0000000140B0C66F: mov     rax, r10
 * 0000000140B0C672: mul     rcx
 * 0000000140B0C675: mov     r15, rax
 * 0000000140B0C678: mov     [rbp+0A70h+var_3F0], rdx
 * 0000000140B0C67F: xor     r15, rdx
 * 0000000140B0C682: jmp     loc_140B0C765
 * 0000000140B0C687: xor     edx, edx
 * 0000000140B0C689: mov     r14d, [rsi+990h]
 * 0000000140B0C690: mov     r15, rdx
 * 0000000140B0C693: bt      r14d, 1Eh
 * 0000000140B0C698: jb      loc_140B0C75B
 * 0000000140B0C69E: bt      r14d, 8
 * 0000000140B0C6A3: jb      loc_140B0C748
 * 0000000140B0C6A9: mov     eax, [rsi+954h]
 * 0000000140B0C6AF: mov     ecx, esi
 * 0000000140B0C6B1: mov     r12, [rsi+5B8h]
 * 0000000140B0C6B8: mov     r9, rsi
 * 0000000140B0C6BB: mov     r13, [rsi+4E0h]
 * 0000000140B0C6C2: mov     r10, rsi
 * 0000000140B0C6C5: ror     r9, cl
 * 0000000140B0C6C8: mov     ebx, edx
 * 0000000140B0C6CA: mov     [rbp+0A70h+arg_8], rax
 * 0000000140B0C6D1: mov     r11, rdx
 * 0000000140B0C6D4: mov     rcx, [r10]
 * 0000000140B0C6D7: sub     rcx, rsi
 * 0000000140B0C6DA: sub     rcx, r11
 * 0000000140B0C6DD: bt      r14d, 9
 * 0000000140B0C6E2: jb      short loc_140B0C6FB
 * 0000000140B0C6E4: mov     rax, r13
 * 0000000140B0C6E7: xor     rax, rcx
 * 0000000140B0C6EA: mov     ecx, r12d
 * 0000000140B0C6ED: bswap   rax
 * 0000000140B0C6F0: xor     rax, r9
 * 0000000140B0C6F3: ror     rax, cl
 * 0000000140B0C6F6: xor     rax, r12
 * 0000000140B0C6F9: jmp     short loc_140B0C701
 * 0000000140B0C6FB: mov     rax, r9
 * 0000000140B0C6FE: xor     rax, rcx
 * 0000000140B0C701: mov     [r10], rax
 * 0000000140B0C704: mov     edx, 0C8h
 * 0000000140B0C709: sub     edx, ebx
 * 0000000140B0C70B: mov     ecx, eax
 * 0000000140B0C70D: xor     rdx, r11
 * 0000000140B0C710: mov     r8d, eax
 * 0000000140B0C713: not     ecx
 * 0000000140B0C715: xor     r8d, 0F29h
 * 0000000140B0C71C: ror     rdx, cl
 * 0000000140B0C71F: mov     eax, 1
 * 0000000140B0C724: xor     r9, rdx
 * 0000000140B0C727: mov     cl, r8b
 * 0000000140B0C72A: rol     r9, cl
 * 0000000140B0C72D: add     r10, 8
 * 0000000140B0C731: add     r9, rsi
 * 0000000140B0C734: add     ebx, eax
 * 0000000140B0C736: xor     r9, [rbp+0A70h+arg_8]
 * 0000000140B0C73D: add     r11, rax
 * 0000000140B0C740: cmp     ebx, 19h
 * 0000000140B0C743: jb      short loc_140B0C6D4
 * 0000000140B0C745: mov     r12d, eax
 * 0000000140B0C748: mov     rax, [rsi+268h]
 * 0000000140B0C74F: lea     rcx, [rsi+800h]
 * 0000000140B0C756: call    KeGuardDispatchICall
 * 0000000140B0C75B: mov     r10, 7010008004002001h
 * 0000000140B0C765: mov     r11, [rbp+0A70h+arg_0]
 * 0000000140B0C76C: test    dword ptr [r11+990h], 10000000h
 * 0000000140B0C777: mov     r14, [r11+7D8h]
 * 0000000140B0C77E: jz      short loc_140B0C7B5
 * 0000000140B0C780: rdtsc
 * 0000000140B0C782: shl     rdx, 20h
 * 0000000140B0C786: or      rax, rdx
 * 0000000140B0C789: mov     rcx, rax
 * 0000000140B0C78C: ror     rax, 3
 * 0000000140B0C790: xor     rcx, rax
 * 0000000140B0C793: mov     rax, r10
 * 0000000140B0C796: mul     rcx
 * 0000000140B0C799: mov     r14, rdx
 * 0000000140B0C79C: mov     [rbp+0A70h+var_2E0], rdx
 * 0000000140B0C7A3: xor     r14, rax
 * 0000000140B0C7A6: and     r14, 0Fh
 * 0000000140B0C7AA: shl     r14, 4
 * 0000000140B0C7AE: add     r14, [r11+5C8h]
 * 0000000140B0C7B5: mov     r8d, 28h ; '('
 * 0000000140B0C7BB: lea     rbx, [r11+8F8h]
 * 0000000140B0C7C2: mov     rcx, rbx
 * 0000000140B0C7C5: lea     rdx, [rbp+0A70h+var_6F0]
 * 0000000140B0C7CC: lea     r9d, [r8-23h]
 * 0000000140B0C7D0: mov     rax, [rcx]
 * 0000000140B0C7D3: add     r8d, 0FFFFFFF8h
 * 0000000140B0C7D7: mov     [rdx], rax
 * 0000000140B0C7DA: add     rcx, 8
 * 0000000140B0C7DE: add     rdx, 8
 * 0000000140B0C7E2: sub     r9, r12
 * 0000000140B0C7E5: jnz     short loc_140B0C7D0
 * 0000000140B0C7E7: xor     r13d, r13d
 * 0000000140B0C7EA: test    r8d, r8d
 * 0000000140B0C7ED: jz      short loc_140B0C80B
 * 0000000140B0C7EF: mov     r11d, 0FFFFFFFFh
 * 0000000140B0C7F5: mov     al, [rcx]
 * 0000000140B0C7F7: add     rcx, r12
 * 0000000140B0C7FA: mov     [rdx], al
 * 0000000140B0C7FC: add     rdx, r12
 * 0000000140B0C7FF: add     r8d, r11d
 * 0000000140B0C802: jnz     short loc_140B0C7F5
 * 0000000140B0C804: mov     r11, [rbp+0A70h+arg_0]
 * 0000000140B0C80B: mov     eax, [r11+990h]
 * 0000000140B0C812: mov     ecx, 8000h
 * 0000000140B0C817: test    ecx, eax
 * 0000000140B0C819: jnz     short loc_140B0C824
 * 0000000140B0C81B: cmp     [rbx], r13d
 * 0000000140B0C81E: jnz     loc_140B0CE81
 * 0000000140B0C824: bt      eax, 1Eh
 * 0000000140B0C828: jb      loc_140B0D048
 * 0000000140B0C82E: mov     al, [r11+920h]
 * 0000000140B0C835: mov     r8, r15
 * 0000000140B0C838: sub     al, r12b
 * 0000000140B0C83B: xor     r8, rsi
 * 0000000140B0C83E: movzx   r10d, al
 * 0000000140B0C842: mov     r11d, 3Fh ; '?'
 * 0000000140B0C848: sub     r11d, r10d
 * 0000000140B0C84B: rdtsc
 * 0000000140B0C84D: shl     rdx, 20h
 * 0000000140B0C851: mov     rsi, 7010008004002001h
 * 0000000140B0C85B: or      rax, rdx
 * 0000000140B0C85E: mov     rcx, rax
 * 0000000140B0C861: ror     rax, 3
 * 0000000140B0C865: xor     rcx, rax
 * 0000000140B0C868: mov     rax, rsi
 * 0000000140B0C86B: mul     rcx
 * 0000000140B0C86E: mov     [rbp+0A70h+var_3E0], rdx
 * 0000000140B0C875: xor     rax, rdx
 * 0000000140B0C878: xor     edx, edx
 * 0000000140B0C87A: div     r11
 * 0000000140B0C87D: lea     r9d, [r10+rdx]
 * 0000000140B0C881: rdtsc
 * 0000000140B0C883: shl     rdx, 20h
 * 0000000140B0C887: or      rax, rdx
 * 0000000140B0C88A: mov     rcx, rax
 * 0000000140B0C88D: ror     rax, 3
 * 0000000140B0C891: xor     rcx, rax
 * 0000000140B0C894: mov     rax, rsi
 * 0000000140B0C897: mul     rcx
 * 0000000140B0C89A: xor     rax, rdx
 * 0000000140B0C89D: mov     [rbp+0A70h+var_3D8], rdx
 * 0000000140B0C8A4: xor     edx, edx
 * 0000000140B0C8A6: div     r11
 * 0000000140B0C8A9: add     edx, r10d
 * 0000000140B0C8AC: cmp     edx, r9d
 * 0000000140B0C8AF: jz      short loc_140B0C881
 * 0000000140B0C8B1: mov     r11, [rbp+0A70h+arg_0]
 * 0000000140B0C8B8: mov     eax, r9d
 * 0000000140B0C8BB: bts     r8, rax
 * 0000000140B0C8BF: mov     eax, edx
 * 0000000140B0C8C1: btr     r8, rax
 * 0000000140B0C8C5: cmp     dword ptr [r11+924h], 3
 * 0000000140B0C8CD: mov     rsi, [r11+790h]
 * 0000000140B0C8D4: mov     r12, [r11+788h]
 * 0000000140B0C8DB: jnz     loc_140B0CA6B
 * 0000000140B0C8E1: mov     r13, [rbp+0A70h+var_AC0]
 * 0000000140B0C8E5: xor     ecx, ecx
 * 0000000140B0C8E7: test    r13, r13
 * 0000000140B0C8EA: jz      loc_140B0CA6B
 * 0000000140B0C8F0: mov     rax, [r11+370h]
 * 0000000140B0C8F7: lea     edx, [rcx+1]
 * 0000000140B0C8FA: mov     byte ptr [rsi], 13h
 * 0000000140B0C8FD: mov     [rsi+1], dl
 * 0000000140B0C900: mov     [rsi+2], cx
 * 0000000140B0C904: mov     [rsi+18h], rax
 * 0000000140B0C908: mov     [rsi+20h], r13
 * 0000000140B0C90C: mov     [rsi+38h], rcx
 * 0000000140B0C910: mov     [rsi+10h], rcx
 * 0000000140B0C914: mov     [rsi+28h], r8
 * 0000000140B0C918: mov     rax, [r11+360h]
 * 0000000140B0C91F: mov     r8, [r13+0]
 * 0000000140B0C923: mov     edx, [r13+10h]
 * 0000000140B0C927: mov     rcx, [r13+8]
 * 0000000140B0C92B: call    KeGuardDispatchICall
 * 0000000140B0C930: mov     r9, [r13+0]
 * 0000000140B0C934: mov     rcx, r13
 * 0000000140B0C937: rol     rcx, 11h
 * 0000000140B0C93B: mov     rax, 7010008004002001h
 * 0000000140B0C945: xor     rcx, r13
 * 0000000140B0C948: mov     r10d, 4
 * 0000000140B0C94E: mul     rcx
 * 0000000140B0C951: lea     r11d, [r10-3]
 * 0000000140B0C955: mov     [rbp+0A70h+var_3D0], rdx
 * 0000000140B0C95C: xor     rdx, rax
 * 0000000140B0C95F: lea     rax, [r13+18h]
 * 0000000140B0C963: mov     r8, rdx
 * 0000000140B0C966: xor     r13d, r13d
 * 0000000140B0C969: xor     [rax], r8
 * 0000000140B0C96C: mov     ecx, r10d
 * 0000000140B0C96F: rol     r8, cl
 * 0000000140B0C972: lea     rax, [rax-8]
 * 0000000140B0C976: sub     r10d, r11d
 * 0000000140B0C979: jnz     short loc_140B0C969
 * 0000000140B0C97B: and     dl, 0Fh
 * 0000000140B0C97E: cmp     dl, 7
 * 0000000140B0C981: jnb     short loc_140B0C9F0
 * 0000000140B0C983: mov     rcx, r9
 * 0000000140B0C986: mov     rax, 7010008004002001h
 * 0000000140B0C990: rol     rcx, 11h
 * 0000000140B0C994: mov     r10d, 6
 * 0000000140B0C99A: xor     rcx, r9
 * 0000000140B0C99D: mul     rcx
 * 0000000140B0C9A0: mov     [rbp+0A70h+var_3C8], rdx
 * 0000000140B0C9A7: xor     rdx, rax
 * 0000000140B0C9AA: add     r8, rdx
 * 0000000140B0C9AD: lea     rax, [r9+28h]
 * 0000000140B0C9B1: movsx   edx, word ptr [r9+8]
 * 0000000140B0C9B6: xor     [rax], r8
 * 0000000140B0C9B9: mov     ecx, r10d
 * 0000000140B0C9BC: rol     r8, cl
 * 0000000140B0C9BF: lea     rax, [rax-8]
 * 0000000140B0C9C3: sub     r10d, r11d
 * 0000000140B0C9C6: jnz     short loc_140B0C9B6
 * 0000000140B0C9C8: sub     rdx, 30h ; '0'
 * 0000000140B0C9CC: shr     rdx, 3
 * 0000000140B0C9D0: test    edx, edx
 * 0000000140B0C9D2: jz      short loc_140B0C9F0
 * 0000000140B0C9D4: movsxd  r10, edx
 * 0000000140B0C9D7: add     r10, 5
 * 0000000140B0C9DB: lea     r10, [r9+r10*8]
 * 0000000140B0C9DF: xor     [r10], r8
 * 0000000140B0C9E2: mov     ecx, edx
 * 0000000140B0C9E4: rol     r8, cl
 * 0000000140B0C9E7: lea     r10, [r10-8]
 * 0000000140B0C9EB: sub     edx, r11d
 * 0000000140B0C9EE: jnz     short loc_140B0C9DF
 * 0000000140B0C9F0: mov     r11, [rbp+0A70h+arg_0]
 * 0000000140B0C9F7: mov     r10d, 1
 * 0000000140B0C9FD: mov     [rsi+40h], r15
 * 0000000140B0CA01: test    dword ptr [r11+990h], 100h
 * 0000000140B0CA0C: jz      loc_140B0CA92
 * 0000000140B0CA12: lea     r9, [r14-48h]
 * 0000000140B0CA16: mov     [r9+40h], rsi
 * 0000000140B0CA1A: rdtsc
 * 0000000140B0CA1C: shl     rdx, 20h
 * 0000000140B0CA20: mov     r14, 7010008004002001h
 * 0000000140B0CA2A: or      rax, rdx
 * 0000000140B0CA2D: mov     r8d, 19h
 * 0000000140B0CA33: mov     rcx, rax
 * 0000000140B0CA36: ror     rax, 3
 * 0000000140B0CA3A: xor     rcx, rax
 * 0000000140B0CA3D: mov     rax, r14
 * 0000000140B0CA40: mul     rcx
 * 0000000140B0CA43: mov     [rbp+0A70h+var_3C0], rdx
 * 0000000140B0CA4A: xor     rdx, rax
 * 0000000140B0CA4D: lea     rax, [r9+48h]
 * 0000000140B0CA51: xor     [rax], rdx
 * 0000000140B0CA54: lea     rax, [rax+8]
 * 0000000140B0CA58: sub     r8, r10
 * 0000000140B0CA5B: jnz     short loc_140B0CA51
 * 0000000140B0CA5D: mov     dword ptr [r9+48h], 48513148h
 * 0000000140B0CA65: mov     [r9+20h], rdx
 * 0000000140B0CA69: jmp     short loc_140B0CA9F
 * 0000000140B0CA6B: mov     byte ptr [rsi], 13h
 * 0000000140B0CA6E: mov     r10d, 1
 * 0000000140B0CA74: mov     [rsi+1], r10b
 * 0000000140B0CA78: mov     [rsi+2], r13w
 * 0000000140B0CA7D: mov     [rsi+18h], r14
 * 0000000140B0CA81: mov     [rsi+20h], r8
 * 0000000140B0CA85: mov     [rsi+38h], r13
 * 0000000140B0CA89: mov     [rsi+10h], r13
 * 0000000140B0CA8D: jmp     loc_140B0C9FD
 * 0000000140B0CA92: mov     r9, rsi
 * 0000000140B0CA95: mov     r14, 7010008004002001h
 * 0000000140B0CA9F: mov     rdx, [r11+0A98h]
 * 0000000140B0CAA6: test    rdx, rdx
 * 0000000140B0CAA9: jz      loc_140B0CB33
 * 0000000140B0CAAF: mov     rdx, [rdx+20h]
 * 0000000140B0CAB3: mov     eax, 0E5D49100h
 * 0000000140B0CAB8: mov     rcx, rdx
 * 0000000140B0CABB: mov     r14d, 0Fh
 * 0000000140B0CAC1: xor     rcx, rax
 * 0000000140B0CAC4: shr     rcx, 4
 * 0000000140B0CAC8: xor     rcx, rdx
 * 0000000140B0CACB: shr     rcx, 4
 * 0000000140B0CACF: xor     rcx, [r11+588h]
 * 0000000140B0CAD6: mov     r10b, cl
 * 0000000140B0CAD9: mov     r11, rcx
 * 0000000140B0CADC: and     r10b, r14b
 * 0000000140B0CADF: jnz     short loc_140B0CAE5
 * 0000000140B0CAE1: lea     r10d, [r14-0Eh]
 * 0000000140B0CAE5: mov     r8, rcx
 * 0000000140B0CAE8: and     r8, r14
 * 0000000140B0CAEB: add     r8, rdx
 * 0000000140B0CAEE: mov     rdx, [r8]
 * 0000000140B0CAF1: mov     rax, rdx
 * 0000000140B0CAF4: xor     rax, 1E5200h
 * 0000000140B0CAFA: shr     rax, 4
 * 0000000140B0CAFE: xor     rax, rdx
 * 0000000140B0CB01: shr     rax, 4
 * 0000000140B0CB05: xor     rcx, rax
 * 0000000140B0CB08: add     r10b, 0FFh
 * 0000000140B0CB0C: jnz     short loc_140B0CAE5
 * 0000000140B0CB0E: mov     r14, 7010008004002001h
 * 0000000140B0CB18: bt      r11, 0Ch
 * 0000000140B0CB1D: jnb     short loc_140B0CB22
 * 0000000140B0CB1F: xor     r9, r11
 * 0000000140B0CB22: mov     r11, [rbp+0A70h+arg_0]
 * 0000000140B0CB29: mov     [r8], r9
 * 0000000140B0CB2C: mov     r9, [r11+0A98h]
 * 0000000140B0CB33: lock or [rsp+0B70h+var_B70], r13d
 * 0000000140B0CB38: mov     ecx, [r11+838h]
 * 0000000140B0CB3F: test    ecx, ecx
 * 0000000140B0CB41: jz      loc_140B0CDCD
 * 0000000140B0CB47: sub     ecx, 1
 * 0000000140B0CB4A: jz      loc_140B0CDB6
 * 0000000140B0CB50: sub     ecx, 1
 * 0000000140B0CB53: jz      loc_140B0CDA3
 * 0000000140B0CB59: sub     ecx, 1
 * 0000000140B0CB5C: jz      loc_140B0CCE1
 * 0000000140B0CB62: cmp     ecx, 1
 * 0000000140B0CB65: jz      loc_140B0CBEC
 * 0000000140B0CB6B: mov     r8, [r11+998h]
 * 0000000140B0CB72: mov     [r8+48h], r9
 * 0000000140B0CB76: lock or [rsp+0B70h+var_B70], r13d
 * 0000000140B0CB7B: rdtsc
 * 0000000140B0CB7D: shl     rdx, 20h
 * 0000000140B0CB81: or      rax, rdx
 * 0000000140B0CB84: mov     rcx, rax
 * 0000000140B0CB87: mov     rdx, rax
 * 0000000140B0CB8A: ror     rcx, 3
 * 0000000140B0CB8E: mov     rax, r14
 * 0000000140B0CB91: xor     rdx, rcx
 * 0000000140B0CB94: mul     rdx
 * 0000000140B0CB97: mov     rcx, rdx
 * 0000000140B0CB9A: mov     [rbp+0A70h+var_3B8], rdx
 * 0000000140B0CBA1: xor     rcx, rax
 * 0000000140B0CBA4: mov     rax, 0ABCC77118461CEFDh
 * 0000000140B0CBAE: mul     rcx
 * 0000000140B0CBB1: shr     rdx, 1Ah
 * 0000000140B0CBB5: imul    rax, rdx, 5F5E100h
 * 0000000140B0CBBC: sub     rcx, rax
 * 0000000140B0CBBF: mov     rax, 0D6BF94D5E57A42BDh
 * 0000000140B0CBC9: add     rcx, 47868C00h
 * 0000000140B0CBD0: imul    rcx
 * 0000000140B0CBD3: add     rdx, rcx
 * 0000000140B0CBD6: sar     rdx, 17h
 * 0000000140B0CBDA: mov     rax, rdx
 * 0000000140B0CBDD: shr     rax, 3Fh
 * 0000000140B0CBE1: add     rdx, rax
 * 0000000140B0CBE4: mov     [r8], edx
 * 0000000140B0CBE7: jmp     loc_140B0CE7C
 * 0000000140B0CBEC: mov     r8, [r11+9E0h]
 * 0000000140B0CBF3: xor     r9d, r9d
 * 0000000140B0CBF6: mov     rcx, [r11+9F0h]
 * 0000000140B0CBFD: mov     rdx, rsi
 * 0000000140B0CC00: mov     rax, [r11+9E8h]
 * 0000000140B0CC07: mov     rdi, [r11+998h]
 * 0000000140B0CC0E: mov     byte ptr [r8], 12h
 * 0000000140B0CC12: mov     byte ptr [r8+2], 58h ; 'X'
 * 0000000140B0CC17: mov     [r8+50h], r13b
 * 0000000140B0CC1B: mov     [r8+8], rdi
 * 0000000140B0CC1F: mov     [r8+20h], rax
 * 0000000140B0CC23: mov     [r8+28h], r13
 * 0000000140B0CC27: mov     [r8+30h], rcx
 * 0000000140B0CC2B: mov     [r8+51h], r13b
 * 0000000140B0CC2F: mov     [r8+38h], r13
 * 0000000140B0CC33: mov     [r8+52h], r13b
 * 0000000140B0CC37: xor     r8d, r8d
 * 0000000140B0CC3A: mov     rax, [r11+2C0h]
 * 0000000140B0CC41: mov     rcx, [r11+9E0h]
 * 0000000140B0CC48: call    KeGuardDispatchICall
 * 0000000140B0CC4D: test    al, al
 * 0000000140B0CC4F: jnz     loc_140B0CE75
 * 0000000140B0CC55: mov     r12d, 1
 * 0000000140B0CC5B: cmp     [rbx], r13d
 * 0000000140B0CC5E: jnz     short loc_140B0CC9E
 * 0000000140B0CC60: mov     rcx, [rbp+0A70h+arg_0]
 * 0000000140B0CC67: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0CC71: add     rax, rcx
 * 0000000140B0CC74: xor     edx, edx
 * 0000000140B0CC76: mov     [rcx+900h], rax
 * 0000000140B0CC7D: mov     [rcx+908h], r13
 * 0000000140B0CC84: mov     qword ptr [rcx+910h], 104h
 * 0000000140B0CC8F: mov     [rcx+918h], rdi
 * 0000000140B0CC96: mov     [rbx], r12d
 * 0000000140B0CC99: call    $$ba
 * 0000000140B0CC9E: lea     rcx, [rbp+0A70h+var_6F0]
 * 0000000140B0CCA5: mov     edx, 28h ; '('
 * 0000000140B0CCAA: mov     rax, [rbx]
 * 0000000140B0CCAD: add     edx, 0FFFFFFF8h
 * 0000000140B0CCB0: mov     [rcx], rax
 * 0000000140B0CCB3: add     rbx, 8
 * 0000000140B0CCB7: add     rcx, 8
 * 0000000140B0CCBB: sub     [rbp+0A70h+var_A28], r12
 * 0000000140B0CCBF: jnz     short loc_140B0CCAA
 * 0000000140B0CCC1: test    edx, edx
 * 0000000140B0CCC3: jz      loc_140B0CE75
 * 0000000140B0CCC9: mov     al, [rbx]
 * 0000000140B0CCCB: add     rbx, r12
 * 0000000140B0CCCE: mov     [rcx], al
 * 0000000140B0CCD0: add     rcx, r12
 * 0000000140B0CCD3: mov     eax, 0FFFFFFFFh
 * 0000000140B0CCD8: add     edx, eax
 * 0000000140B0CCDA: jnz     short loc_140B0CCC9
 * 0000000140B0CCDC: jmp     loc_140B0CE75
 * 0000000140B0CCE1: mov     rdi, [r11+998h]
 * 0000000140B0CCE8: mov     rax, [r11+6A0h]
 * 0000000140B0CCEF: mov     rcx, [rdi+rax]
 * 0000000140B0CCF3: test    rcx, rcx
 * 0000000140B0CCF6: jz      loc_140B0CD8E
 * 0000000140B0CCFC: mov     r12d, 1
 * 0000000140B0CD02: cmp     [rbx], r13d
 * 0000000140B0CD05: jnz     short loc_140B0CD41
 * 0000000140B0CD07: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140B0CD11: xor     edx, edx
 * 0000000140B0CD13: add     rax, r11
 * 0000000140B0CD16: mov     [r11+900h], rax
 * 0000000140B0CD1D: mov     [r11+908h], r13
 * 0000000140B0CD24: mov     qword ptr [r11+910h], 104h
 * 0000000140B0CD2F: mov     [r11+918h], rcx
 * 0000000140B0CD36: mov     rcx, r11
 * 0000000140B0CD39: mov     [rbx], r12d
 * 0000000140B0CD3C: call    $$ba
 * 0000000140B0CD41: mov     edx, 28h ; '('
 * 0000000140B0CD46: lea     rcx, [rbp+0A70h+var_6F0]
 * 0000000140B0CD4D: lea     r11d, [rdx-23h]
 * 0000000140B0CD51: mov     rax, [rbx]
 * 0000000140B0CD54: add     edx, 0FFFFFFF8h
 * 0000000140B0CD57: mov     [rcx], rax
 * 0000000140B0CD5A: add     rbx, 8
 * 0000000140B0CD5E: add     rcx, 8
 * 0000000140B0CD62: sub     r11, r12
 * 0000000140B0CD65: jnz     short loc_140B0CD51
 * 0000000140B0CD67: mov     r11, [rbp+0A70h+arg_0]
 * 0000000140B0CD6E: test    edx, edx
 * 0000000140B0CD70: jz      short loc_140B0CD8E
 * 0000000140B0CD72: mov     r11d, 0FFFFFFFFh
 * 0000000140B0CD78: mov     al, [rbx]
 * 0000000140B0CD7A: add     rbx, r12
 * 0000000140B0CD7D: mov     [rcx], al
 * 0000000140B0CD7F: add     rcx, r12
 * 0000000140B0CD82: add     edx, r11d
 * 0000000140B0CD85: jnz     short loc_140B0CD78
 * 0000000140B0CD87: mov     r11, [rbp+0A70h+arg_0]
 * 0000000140B0CD8E: lock or [rsp+0B70h+var_B70], r13d
 * 0000000140B0CD93: mov     rax, [r11+6A0h]
 * 0000000140B0CD9A: mov     [rdi+rax], rsi
 * 0000000140B0CD9E: jmp     loc_140B0CE7C
 * 0000000140B0CDA3: mov     rax, [r11+7C0h]
 * 0000000140B0CDAA: mov     [rax+80h], r9
 * 0000000140B0CDB1: jmp     loc_140B0CE7C
 * 0000000140B0CDB6: mov     rcx, [r11+7C0h]
 * 0000000140B0CDBD: mov     rax, [r11+638h]
 * 0000000140B0CDC4: mov     [rcx+rax], r9
 * 0000000140B0CDC8: jmp     loc_140B0CE7C
 * 0000000140B0CDCD: rdtsc
 * 0000000140B0CDCF: shl     rdx, 20h
 * 0000000140B0CDD3: or      rax, rdx
 * 0000000140B0CDD6: mov     rcx, rax
 * 0000000140B0CDD9: mov     rdx, rax
 * 0000000140B0CDDC: ror     rcx, 3
 * 0000000140B0CDE0: mov     rax, r14
 * 0000000140B0CDE3: xor     rdx, rcx
 * 0000000140B0CDE6: mul     rdx
 * 0000000140B0CDE9: mov     rcx, rdx
 * 0000000140B0CDEC: mov     [rbp+0A70h+var_3B0], rdx
 * 0000000140B0CDF3: xor     rcx, rax
 * 0000000140B0CDF6: mov     rax, 0ABCC77118461CEFDh
 * 0000000140B0CE00: mul     rcx
 * 0000000140B0CE03: shr     rdx, 1Ah
 * 0000000140B0CE07: imul    rax, rdx, 5F5E100h
 * 0000000140B0CE0E: sub     rcx, rax
 * 0000000140B0CE11: sub     rdi, rcx
 * 0000000140B0CE14: rdtsc
 * 0000000140B0CE16: shl     rdx, 20h
 * 0000000140B0CE1A: or      rax, rdx
 * 0000000140B0CE1D: mov     [rsp+0B70h+BugCheckParameter4], r9
 * 0000000140B0CE22: mov     rcx, rax
 * 0000000140B0CE25: mov     rdx, rax
 * 0000000140B0CE28: ror     rcx, 3
 * 0000000140B0CE2C: mov     rax, r14
 * 0000000140B0CE2F: xor     rdx, rcx
 * 0000000140B0CE32: mov     rcx, r12
 * 0000000140B0CE35: mul     rdx
 * 0000000140B0CE38: mov     r8, rdx
 * 0000000140B0CE3B: mov     [rbp+0A70h+var_3A8], rdx
 * 0000000140B0CE42: xor     r8, rax
 * 0000000140B0CE45: mov     rax, 346DC5D63886594Bh
 * 0000000140B0CE4F: mul     r8
 * 0000000140B0CE52: shr     rdx, 0Bh
 * 0000000140B0CE56: imul    rax, rdx, 2710h
 * 0000000140B0CE5D: mov     rdx, rdi
 * 0000000140B0CE60: sub     r8, rax
 * 0000000140B0CE63: mov     rax, [r11+1D8h]
 * 0000000140B0CE6A: mov     r9d, r8d
 * 0000000140B0CE6D: xor     r8d, r8d
 * 0000000140B0CE70: call    KeGuardDispatchICall
 * 0000000140B0CE75: mov     r11, [rbp+0A70h+arg_0]
 * 0000000140B0CE7C: mov     ecx, 8000h
 * 0000000140B0CE81: cmp     [rbp+0A70h+var_6F0], r13d
 * 0000000140B0CE88: jz      loc_140B0D048
 * 0000000140B0CE8E: mov     r8d, [r11+990h]
 * 0000000140B0CE95: test    ecx, r8d
 * 0000000140B0CE98: jnz     loc_140B0D048
 * 0000000140B0CE9E: mov     r12, [rbp+0A70h+var_6D8]
 * 0000000140B0CEA5: mov     r13, [rbp+0A70h+var_6D0]
 * 0000000140B0CEAC: mov     rbx, [rbp+0A70h+var_6E0]
 * 0000000140B0CEB3: mov     rdi, [rbp+0A70h+var_6E8]
 * 0000000140B0CEBA: mov     [rbp+0A70h+arg_8], r12
 * 0000000140B0CEC1: mov     [rbp+0A70h+var_A28], r13
 * 0000000140B0CEC5: mov     [rbp+0A70h+var_A78], rbx
 * 0000000140B0CEC9: mov     [rbp+0A70h+var_AC0], rdi
 * 0000000140B0CECD: mov     rax, cr8
 * 0000000140B0CED1: mov     r9d, 2
 * 0000000140B0CED7: cmp     al, r9b
 * 0000000140B0CEDA: jnb     short loc_140B0CEEB
 * 0000000140B0CEDC: mov     rax, cr8
 * 0000000140B0CEE0: mov     cr8, r9
 * 0000000140B0CEE4: mov     r8d, [r11+990h]
 * 0000000140B0CEEB: mov     rdx, gs:20h
 * 0000000140B0CEF4: xor     r10d, r10d
 * 0000000140B0CEF7: mov     rcx, gs:20h
 * 0000000140B0CF00: mov     rax, [r11+640h]
 * 0000000140B0CF07: mov     rsi, [rdx+rax]
 * 0000000140B0CF0B: mov     rax, [r11+650h]
 * 0000000140B0CF12: mov     r14, [rcx+rax]
 * 0000000140B0CF16: mov     rax, [r11+648h]
 * 0000000140B0CF1D: mov     [rsp+0B70h+var_AF8], r14
 * 0000000140B0CF22: cmp     [rdx+rax], r10b
 * 0000000140B0CF26: jz      short loc_140B0CF47
 * 0000000140B0CF28: lea     rax, [rbp+0A70h+var_8C8]
 * 0000000140B0CF2F: cmp     rax, rsi
 * 0000000140B0CF32: ja      short loc_140B0CF47
 * 0000000140B0CF34: lea     rax, [rsi-6000h]
 * 0000000140B0CF3B: lea     rcx, [rbp+0A70h+var_8C8]
 * 0000000140B0CF42: cmp     rcx, rax
 * 0000000140B0CF45: jnb     short loc_140B0CF52
 * 0000000140B0CF47: mov     rax, [r11+680h]
 * 0000000140B0CF4E: mov     rsi, [r14+rax]
 * 0000000140B0CF52: bt      r8d, 1Bh
 * 0000000140B0CF57: jb      loc_140B0D402
 * 0000000140B0CF5D: mov     r15, cr0
 * 0000000140B0CF61: mov     rax, r15
 * 0000000140B0CF64: btr     rax, 10h
 * 0000000140B0CF69: mov     cr0, rax
 * 0000000140B0CF6C: mov     r9d, [r11+0AA0h]
 * 0000000140B0CF73: lea     rdx, [r11+0AA8h]
 * 0000000140B0CF7A: shl     r9, 4
 * 0000000140B0CF7E: xor     eax, eax
 * 0000000140B0CF80: add     r9, rdx
 * 0000000140B0CF83: mov     r8, r9
 * 0000000140B0CF86: cmp     [r11+0AA4h], eax
 * 0000000140B0CF8D: jbe     short loc_140B0CFDD
 * 0000000140B0CF8F: lea     r12d, [rax+1]
 * 0000000140B0CF93: lea     r13d, [rax+10h]
 * 0000000140B0CF97: mov     rcx, [r8]
 * 0000000140B0CF9A: mov     rax, [r8+8]
 * 0000000140B0CF9E: mov     [rcx], rax
 * 0000000140B0CFA1: mov     rcx, cr4
 * 0000000140B0CFA4: test    rcx, 20080h
 * 0000000140B0CFAB: jz      short loc_140B0CFBD
 * 0000000140B0CFAD: mov     rax, rcx
 * 0000000140B0CFB0: btc     rax, 7
 * 0000000140B0CFB5: mov     cr4, rax
 * 0000000140B0CFB8: mov     cr4, rcx
 * 0000000140B0CFBB: jmp     short loc_140B0CFC3
 * 0000000140B0CFBD: mov     rax, cr3
 * 0000000140B0CFC0: mov     cr3, rax
 * 0000000140B0CFC3: add     r8, r13
 * 0000000140B0CFC6: add     r10d, r12d
 * 0000000140B0CFC9: cmp     r10d, [r11+0AA4h]
 * 0000000140B0CFD0: jb      short loc_140B0CF97
 * 0000000140B0CFD2: mov     r12, [rbp+0A70h+arg_8]
 * 0000000140B0CFD9: mov     r13, [rbp+0A70h+var_A28]
 * 0000000140B0CFDD: cmp     rdx, r9
 * 0000000140B0CFE0: jnb     loc_140B0D3ED
 * 0000000140B0CFE6: mov     r13d, 1
 * 0000000140B0CFEC: mov     r14d, 0FFFFFFFFh
 * 0000000140B0CFF2: mov     edi, [rdx+8]
 * 0000000140B0CFF5: mov     rcx, r8
 * 0000000140B0CFF8: mov     r10, [rdx]
 * 0000000140B0CFFB: mov     r11d, edi
 * 0000000140B0CFFE: cmp     edi, 8
 * 0000000140B0D001: jb      short loc_140B0D020
 * 0000000140B0D003: mov     ebx, edi
 * 0000000140B0D005: shr     rbx, 3
 * 0000000140B0D009: mov     rax, [rcx]
 * 0000000140B0D00C: add     r11d, 0FFFFFFF8h
 * 0000000140B0D010: mov     [r10], rax
 * 0000000140B0D013: add     rcx, 8
 * 0000000140B0D017: add     r10, 8
 * 0000000140B0D01B: sub     rbx, r13
 * 0000000140B0D01E: jnz     short loc_140B0D009
 * 0000000140B0D020: test    r11d, r11d
 * 0000000140B0D023: jz      short loc_140B0D036
 * 0000000140B0D025: sub     r10, rcx
 * 0000000140B0D028: mov     al, [rcx]
 * 0000000140B0D02A: mov     [r10+rcx], al
 * 0000000140B0D02E: add     rcx, r13
 * 0000000140B0D031: add     r11d, r14d
 * 0000000140B0D034: jnz     short loc_140B0D028
 * 0000000140B0D036: add     r8, rdi
 * 0000000140B0D039: add     rdx, 10h
 * 0000000140B0D03D: cmp     rdx, r9
 * 0000000140B0D040: jnb     loc_140B0D3CE
 * 0000000140B0D046: jmp     short loc_140B0CFF2
 * 0000000140B0D048: test    dword ptr [r11+990h], 40000000h
 * 0000000140B0D053: jnz     short loc_140B0D09F
 * 0000000140B0D055: cmp     [rbp+0A70h+var_AE0], r13d
 * 0000000140B0D059: jz      short loc_140B0D09F
 * 0000000140B0D05B: mov     ecx, [r11+924h]
 * 0000000140B0D062: sub     ecx, 1
 * 0000000140B0D065: jz      short loc_140B0D079
 * 0000000140B0D067: mov     eax, 2
 * 0000000140B0D06C: cmp     ecx, eax
 * 0000000140B0D06E: jnz     short loc_140B0D09F
 * 0000000140B0D070: mov     rax, [r11+368h]
 * 0000000140B0D077: jmp     short loc_140B0D098
 * 0000000140B0D079: add     qword ptr [r11+7C8h], 0FFFFFFFFFFFFFFF8h
 * 0000000140B0D081: mov     rax, [r11+7C8h]
 * 0000000140B0D088: mov     ecx, [rax]
 * 0000000140B0D08A: mov     [r11+7D0h], ecx
 * 0000000140B0D091: mov     rax, [r11+228h]
 * 0000000140B0D098: mov     [r11+0F8h], rax
 * 0000000140B0D09F: mov     rax, r11
 * 0000000140B0D0A2: add     rsp, 0B38h
 * 0000000140B0D0A9: pop     r15
 * 0000000140B0D0AB: pop     r14
 * 0000000140B0D0AD: pop     r13
 * 0000000140B0D0AF: pop     r12
 * 0000000140B0D0B1: pop     rdi
 * 0000000140B0D0B2: pop     rsi
 * 0000000140B0D0B3: pop     rbx
 * 0000000140B0D0B4: pop     rbp
 * 0000000140B0D0B5: retn
 * 0000000140B0D0B7: mov     r9d, 5; BugCheckParameter3
 * 0000000140B0D0BD: mov     [rbp+0A70h+var_958], 13Dh
 * 0000000140B0D0C7: mov     ecx, [rbp+0A70h+var_958]
 * 0000000140B0D0CD: mov     r8, rbx; BugCheckParameter2
 * 0000000140B0D0D0: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0D0D3: mov     [rsp+0B70h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140B0D0D8: lea     edx, [r9+5]; BugCheckParameter1
 * 0000000140B0D0DC: call    KeBugCheckEx
 * 0000000140B0D0E2: mov     [rbp+0A70h+var_954], 13Dh
 * 0000000140B0D0EC: mov     r9d, 7; BugCheckParameter3
 * 0000000140B0D0F2: mov     ecx, [rbp+0A70h+var_954]
 * 0000000140B0D0F8: mov     r8, r12; BugCheckParameter2
 * 0000000140B0D0FB: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0D0FE: mov     rdx, r15; BugCheckParameter1
 * 0000000140B0D101: mov     [rsp+0B70h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140B0D106: call    KeBugCheckEx
 * 0000000140B0D10C: xor     r9d, r9d; BugCheckParameter3
 * 0000000140B0D10F: mov     [rbp+0A70h+var_948], 13Dh
 * 0000000140B0D119: mov     ecx, [rbp+0A70h+var_948]
 * 0000000140B0D11F: mov     r8, r14; BugCheckParameter2
 * 0000000140B0D122: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0D125: mov     [rsp+0B70h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140B0D12A: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 0000000140B0D12E: call    KeBugCheckEx
 * 0000000140B0D134: mov     [rbp+0A70h+var_91C], 13Dh
 * 0000000140B0D13E: mov     r9, r15; BugCheckParameter3
 * 0000000140B0D141: mov     ecx, [rbp+0A70h+var_91C]
 * 0000000140B0D147: mov     r8, r14; BugCheckParameter2
 * 0000000140B0D14A: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0D14D: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140B0D152: mov     [rsp+0B70h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140B0D157: call    KeBugCheckEx
 * 0000000140B0D15D: mov     r9d, edx; BugCheckParameter3
 * 0000000140B0D160: mov     r8, r14; BugCheckParameter2
 * 0000000140B0D163: mov     [rbp+0A70h+var_918], 13Dh
 * 0000000140B0D16D: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140B0D172: mov     ecx, [rbp+0A70h+var_918]
 * 0000000140B0D178: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0D17B: mov     [rsp+0B70h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140B0D180: call    KeBugCheckEx
 * 0000000140B0D186: mov     r9d, edx; BugCheckParameter3
 * 0000000140B0D189: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140B0D18E: mov     [rbp+0A70h+var_974], 13Dh
 * 0000000140B0D198: mov     ecx, [rbp+0A70h+var_974]
 * 0000000140B0D19E: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0D1A1: mov     [rsp+0B70h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140B0D1A6: call    KeBugCheckEx
 * 0000000140B0D1AC: mov     r9d, 2; BugCheckParameter3
 * 0000000140B0D1B2: mov     [rbp+0A70h+var_988], 13Dh
 * 0000000140B0D1BC: mov     ecx, [rbp+0A70h+var_988]
 * 0000000140B0D1C2: mov     r8, r14; BugCheckParameter2
 * 0000000140B0D1C5: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0D1C8: mov     [rsp+0B70h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140B0D1CD: lea     edx, [r9+8]; BugCheckParameter1
 * 0000000140B0D1D1: call    KeBugCheckEx
 * 0000000140B0D1D7: mov     r9d, 3; BugCheckParameter3
 * 0000000140B0D1DD: mov     [rsp+0B70h+BugCheckParameter4], rdx; BugCheckParameter4
 * 0000000140B0D1E2: mov     [rbp+0A70h+var_984], 13Dh
 * 0000000140B0D1EC: mov     r8, r14; BugCheckParameter2
 * 0000000140B0D1EF: mov     ecx, [rbp+0A70h+var_984]
 * 0000000140B0D1F5: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0D1F8: lea     edx, [r9+7]; BugCheckParameter1
 * 0000000140B0D1FC: call    KeBugCheckEx
 * 0000000140B0D202: mov     r8, [rbp+0A70h+var_AF0]; BugCheckParameter2
 * 0000000140B0D206: mov     r9d, 6; BugCheckParameter3
 * 0000000140B0D20C: mov     [rbp+0A70h+var_980], 13Dh
 * 0000000140B0D216: mov     ecx, [rbp+0A70h+var_980]
 * 0000000140B0D21C: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0D21F: lea     edx, [r9+4]; BugCheckParameter1
 * 0000000140B0D223: mov     [rsp+0B70h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140B0D228: call    KeBugCheckEx
 * 0000000140B0D22E: mov     r8, [rbp+0A70h+var_AC0]; BugCheckParameter2
 * 0000000140B0D232: mov     r9d, 5; BugCheckParameter3
 * 0000000140B0D238: mov     [rbp+0A70h+var_97C], 13Dh
 * 0000000140B0D242: mov     ecx, [rbp+0A70h+var_97C]
 * 0000000140B0D248: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0D24B: lea     edx, [r9+5]; BugCheckParameter1
 * 0000000140B0D24F: mov     [rsp+0B70h+BugCheckParameter4], r11; BugCheckParameter4
 * 0000000140B0D254: call    KeBugCheckEx
 * 0000000140B0D25A: mov     r9d, 5; BugCheckParameter3
 * 0000000140B0D260: mov     [rbp+0A70h+var_978], 13Dh
 * 0000000140B0D26A: mov     ecx, [rbp+0A70h+var_978]
 * 0000000140B0D270: mov     r8, r13; BugCheckParameter2
 * 0000000140B0D273: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0D276: mov     [rsp+0B70h+BugCheckParameter4], r11; BugCheckParameter4
 * 0000000140B0D27B: lea     edx, [r9+5]; BugCheckParameter1
 * 0000000140B0D27F: call    KeBugCheckEx
 * 0000000140B0D285: mov     [rbp+0A70h+var_920], 13Dh
 * 0000000140B0D28F: mov     r9d, 7; BugCheckParameter3
 * 0000000140B0D295: mov     ecx, [rbp+0A70h+var_920]
 * 0000000140B0D29B: mov     r8, r14; BugCheckParameter2
 * 0000000140B0D29E: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0D2A1: mov     rdx, r15; BugCheckParameter1
 * 0000000140B0D2A4: mov     [rsp+0B70h+BugCheckParameter4], r11; BugCheckParameter4
 * 0000000140B0D2A9: call    KeBugCheckEx
 * 0000000140B0D2AF: xor     r9d, r9d; BugCheckParameter3
 * 0000000140B0D2B2: mov     [rbp+0A70h+var_96C], 13Dh
 * 0000000140B0D2BC: mov     ecx, [rbp+0A70h+var_96C]
 * 0000000140B0D2C2: mov     r8, r14; BugCheckParameter2
 * 0000000140B0D2C5: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0D2C8: mov     [rsp+0B70h+BugCheckParameter4], r11; BugCheckParameter4
 * 0000000140B0D2CD: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 0000000140B0D2D1: call    KeBugCheckEx
 * 0000000140B0D2D7: mov     r9d, 3; BugCheckParameter3
 * 0000000140B0D2DD: mov     [rbp+0A70h+var_924], 13Dh
 * 0000000140B0D2E7: mov     ecx, [rbp+0A70h+var_924]
 * 0000000140B0D2ED: mov     r8, r14; BugCheckParameter2
 * 0000000140B0D2F0: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0D2F3: mov     [rsp+0B70h+BugCheckParameter4], r11; BugCheckParameter4
 * 0000000140B0D2F8: lea     edx, [r9+7]; BugCheckParameter1
 * 0000000140B0D2FC: call    KeBugCheckEx
 * 0000000140B0D302: mov     [rbp+0A70h+var_968], 13Dh
 * 0000000140B0D30C: mov     r8, r14; BugCheckParameter2
 * 0000000140B0D30F: mov     ecx, [rbp+0A70h+var_968]
 * 0000000140B0D315: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140B0D31A: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0D31D: mov     [rsp+0B70h+BugCheckParameter4], r11; BugCheckParameter4
 * 0000000140B0D322: call    KeBugCheckEx
 * 0000000140B0D328: xor     eax, eax
 * 0000000140B0D32A: mov     r9d, edx; BugCheckParameter3
 * 0000000140B0D32D: mov     [rbp+0A70h+var_964], 13Dh
 * 0000000140B0D337: mov     r8, r14; BugCheckParameter2
 * 0000000140B0D33A: mov     ecx, [rbp+0A70h+var_964]
 * 0000000140B0D340: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0D343: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140B0D346: mov     [rsp+0B70h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140B0D34B: call    KeBugCheckEx
 * 0000000140B0D351: xor     eax, eax
 * 0000000140B0D353: mov     r9d, edx; BugCheckParameter3
 * 0000000140B0D356: mov     [rbp+0A70h+var_960], 13Dh
 * 0000000140B0D360: mov     ecx, [rbp+0A70h+var_960]
 * 0000000140B0D366: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0D369: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140B0D36C: mov     [rsp+0B70h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140B0D371: call    KeBugCheckEx
 * 0000000140B0D377: mov     r9d, 2; BugCheckParameter3
 * 0000000140B0D37D: mov     [rbp+0A70h+var_95C], 13Dh
 * 0000000140B0D387: mov     ecx, [rbp+0A70h+var_95C]
 * 0000000140B0D38D: mov     r8, r14; BugCheckParameter2
 * 0000000140B0D390: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0D393: mov     [rsp+0B70h+BugCheckParameter4], r11; BugCheckParameter4
 * 0000000140B0D398: lea     edx, [r9+8]; BugCheckParameter1
 * 0000000140B0D39C: call    KeBugCheckEx
 * 0000000140B0D3A2: mov     r8, [rbp+0A70h+var_AC8]; BugCheckParameter2
 * 0000000140B0D3A6: mov     r9d, 6; BugCheckParameter3
 * 0000000140B0D3AC: mov     [rbp+0A70h+var_928], 13Dh
 * 0000000140B0D3B6: mov     ecx, [rbp+0A70h+var_928]
 * 0000000140B0D3BC: ror     ecx, 0A0h; BugCheckCode
 * 0000000140B0D3BF: lea     edx, [r9+4]; BugCheckParameter1
 * 0000000140B0D3C3: mov     [rsp+0B70h+BugCheckParameter4], r10; BugCheckParameter4
 * 0000000140B0D3C8: call    KeBugCheckEx
 * 0000000140B0D3CE: mov     r14, [rsp+0B70h+var_AF8]
 * 0000000140B0D3D3: mov     r12, [rbp+0A70h+arg_8]
 * 0000000140B0D3DA: mov     r13, [rbp+0A70h+var_A28]
 * 0000000140B0D3DE: mov     rbx, [rbp+0A70h+var_A78]
 * 0000000140B0D3E2: mov     rdi, [rbp+0A70h+var_AC0]
 * 0000000140B0D3E6: mov     r11, [rbp+0A70h+arg_0]
 * 0000000140B0D3ED: mov     rax, [r11+218h]
 * 0000000140B0D3F4: mov     byte ptr [rax], 0C3h
 * 0000000140B0D3F7: mov     cr0, r15
 * 0000000140B0D3FB: xor     r10d, r10d
 * 0000000140B0D3FE: lea     r9d, [r10+2]
 * 0000000140B0D402: mov     ecx, [r11+928h]
 * 0000000140B0D409: test    ecx, ecx
 * 0000000140B0D40B: jz      loc_140B0D4F1
 * 0000000140B0D411: mov     rax, cr8
 * 0000000140B0D415: cmp     al, r9b
 * 0000000140B0D418: jnb     short loc_140B0D429
 * 0000000140B0D41A: mov     rax, cr8
 * 0000000140B0D41E: mov     cr8, r9
 * 0000000140B0D422: mov     ecx, [r11+928h]
 * 0000000140B0D429: test    ecx, ecx
 * 0000000140B0D42B: jz      loc_140B0D4F1
 * 0000000140B0D431: sub     ecx, 1
 * 0000000140B0D434: jz      loc_140B0D4E4
 * 0000000140B0D43A: sub     ecx, 1
 * 0000000140B0D43D: jz      loc_140B0D4DB
 * 0000000140B0D443: sub     ecx, 1
 * 0000000140B0D446: jz      loc_140B0D4D2
 * 0000000140B0D44C: sub     ecx, 1
 * 0000000140B0D44F: jz      short loc_140B0D496
 * 0000000140B0D451: cmp     ecx, 1
 * 0000000140B0D454: jz      short loc_140B0D46F
 * 0000000140B0D456: mov     rax, [r11+5B0h]
 * 0000000140B0D45D: mov     ecx, 1
 * 0000000140B0D462: lock or [rax+340h], rcx
 * 0000000140B0D46A: jmp     loc_140B0D4F1
 * 0000000140B0D46F: mov     rcx, gs:20h
 * 0000000140B0D478: mov     rax, [r11+650h]
 * 0000000140B0D47F: mov     edx, [r11+990h]
 * 0000000140B0D486: shr     edx, 0Ah
 * 0000000140B0D489: and     edx, 1Fh
 * 0000000140B0D48C: mov     rcx, [rax+rcx]
 * 0000000140B0D490: lock bts [rcx], edx
 * 0000000140B0D494: jmp     short loc_140B0D4F1
 * 0000000140B0D496: mov     rcx, gs:20h
 * 0000000140B0D49F: mov     rax, [r11+650h]
 * 0000000140B0D4A6: mov     r8d, [r11+990h]
 * 0000000140B0D4AD: shr     r8d, 0Ah
 * 0000000140B0D4B1: and     r8d, 1Fh
 * 0000000140B0D4B5: mov     rcx, [rax+rcx]
 * 0000000140B0D4B9: add     rcx, [r11+6B0h]
 * 0000000140B0D4C0: mov     rax, [r11+690h]
 * 0000000140B0D4C7: mov     rdx, [rcx+rax]
 * 0000000140B0D4CB: lock bts [rdx], r8d
 * 0000000140B0D4D0: jmp     short loc_140B0D4F1
 * 0000000140B0D4D2: mov     rax, [r11+558h]
 * 0000000140B0D4D9: jmp     short loc_140B0D4EB
 * 0000000140B0D4DB: mov     rax, [r11+550h]
 * 0000000140B0D4E2: jmp     short loc_140B0D4EB
 * 0000000140B0D4E4: mov     rax, [r11+540h]
 * 0000000140B0D4EB: lock bts qword ptr [rax], 0
 * 0000000140B0D4F1: mov     rax, [r11+698h]
 * 0000000140B0D4F8: mov     [r14+rax], r10
 * 0000000140B0D4FC: mov     rax, [r11+6A8h]
 * 0000000140B0D503: mov     [r14+rax], r10
 * 0000000140B0D507: mov     rcx, [r11+158h]; Target
 * 0000000140B0D50E: call    KeGuardCheckICall
 * 0000000140B0D513: mov     rax, [rbp+0A70h+arg_0]
 * 0000000140B0D51A: mov     r9, r13
 * 0000000140B0D51D: mov     [rsp+0B70h+var_B40], rsi
 * 0000000140B0D522: mov     r8, rbx
 * 0000000140B0D525: mov     rdx, rdi
 * 0000000140B0D528: mov     ecx, 109h
 * 0000000140B0D52D: mov     rax, [rax+158h]
 * 0000000140B0D534: mov     [rsp+0B70h+var_B48], rax
 * 0000000140B0D539: mov     [rsp+0B70h+BugCheckParameter4], r12
 * 0000000140B0D53E: call    SdbpCheckDll
 */
