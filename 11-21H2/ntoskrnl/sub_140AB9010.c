/*
 * XREFs of sub_140AB9010 @ 0x140AB9010
 * Callers:
 *     sub_1403EB020 @ 0x1403EB020 (sub_1403EB020.c)
 *     sub_1403F9450 @ 0x1403F9450 (sub_1403F9450.c)
 *     sub_140AD2150 @ 0x140AD2150 (sub_140AD2150.c)
 * Callees:
 *     sub_1403F966C @ 0x1403F966C (sub_1403F966C.c)
 *     sub_1403F974C @ 0x1403F974C (sub_1403F974C.c)
 *     sub_1403FA684 @ 0x1403FA684 (sub_1403FA684.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140ACD048 @ 0x140ACD048 (sub_140ACD048.c)
 *     sub_140ACF0E0 @ 0x140ACF0E0 (sub_140ACF0E0.c)
 *     sub_140ACFC24 @ 0x140ACFC24 (sub_140ACFC24.c)
 *     sub_140AD049C @ 0x140AD049C (sub_140AD049C.c)
 *     sub_140AD0678 @ 0x140AD0678 (sub_140AD0678.c)
 *     sub_140AD0CE4 @ 0x140AD0CE4 (sub_140AD0CE4.c)
 *     sub_140AD1FE0 @ 0x140AD1FE0 (sub_140AD1FE0.c)
 *     sub_140AD1FF0 @ 0x140AD1FF0 (sub_140AD1FF0.c)
 *     sub_140AD2000 @ 0x140AD2000 (sub_140AD2000.c)
 *     sub_140AD2010 @ 0x140AD2010 (sub_140AD2010.c)
 *     sub_140AD2020 @ 0x140AD2020 (sub_140AD2020.c)
 *     sub_140AD2040 @ 0x140AD2040 (sub_140AD2040.c)
 *     sub_140AD2050 @ 0x140AD2050 (sub_140AD2050.c)
 *     sub_140AD2100 @ 0x140AD2100 (sub_140AD2100.c)
 *     j__guard_dispatch_icall_nop @ 0x140AD23B0 (j__guard_dispatch_icall_nop.c)
 *     sub_140AD23C0 @ 0x140AD23C0 (sub_140AD23C0.c)
 *     sub_140AD25B8 @ 0x140AD25B8 (sub_140AD25B8.c)
 *     sub_140AD6FD0 @ 0x140AD6FD0 (sub_140AD6FD0.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140AB9010 @ 0x140AB9010
 * Reason: Hex-Rays returned no pseudocode for 0x140AB9010
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140AB9010: mov     [rsp-8+arg_0], rcx
 * 0000000140AB9015: push    rbp
 * 0000000140AB9016: push    rbx
 * 0000000140AB9017: push    rsi
 * 0000000140AB9018: push    rdi
 * 0000000140AB9019: push    r12
 * 0000000140AB901B: push    r13
 * 0000000140AB901D: push    r14
 * 0000000140AB901F: push    r15
 * 0000000140AB9021: lea     rbp, [rsp-0AF8h]
 * 0000000140AB9029: sub     rsp, 0BF8h
 * 0000000140AB9030: mov     eax, [rcx+958h]
 * 0000000140AB9036: xor     r9d, r9d
 * 0000000140AB9039: mov     r13, rcx
 * 0000000140AB903C: mov     edi, 0FFFFFFF8h
 * 0000000140AB9041: mov     ecx, 110000h
 * 0000000140AB9046: mov     esi, 0FFFFFFFFh
 * 0000000140AB904B: and     eax, ecx
 * 0000000140AB904D: mov     r11d, 12Fh
 * 0000000140AB9053: lea     r10d, [r9+1]
 * 0000000140AB9057: cmp     eax, ecx
 * 0000000140AB9059: jz      loc_140AB910F
 * 0000000140AB905F: mov     rdx, [r13+8A8h]
 * 0000000140AB9066: lea     ecx, [r11+1]
 * 0000000140AB906A: mov     rax, rdx
 * 0000000140AB906D: lea     r8d, [r9+26h]
 * 0000000140AB9071: mov     [rax], r9
 * 0000000140AB9074: add     ecx, edi
 * 0000000140AB9076: add     rax, 8
 * 0000000140AB907A: sub     r8, r10
 * 0000000140AB907D: jnz     short loc_140AB9071
 * 0000000140AB907F: test    ecx, ecx
 * 0000000140AB9081: jz      short loc_140AB908D
 * 0000000140AB9083: mov     [rax], r9b
 * 0000000140AB9086: add     rax, r10
 * 0000000140AB9089: add     ecx, esi
 * 0000000140AB908B: jnz     short loc_140AB9083
 * 0000000140AB908D: movups  xmm0, xmmword ptr [r13+810h]
 * 0000000140AB9095: lea     rax, [r13+840h]
 * 0000000140AB909C: mov     rcx, rax
 * 0000000140AB909F: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140AB90A4: shr     rcx, 10h
 * 0000000140AB90A8: movups  xmm1, xmmword ptr [r13+820h]
 * 0000000140AB90B0: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140AB90B5: movups  xmm0, xmmword ptr [r13+830h]
 * 0000000140AB90BD: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140AB90C5: mov     [rbp+2AAh], rdx
 * 0000000140AB90CC: mov     word ptr [rbp+0B30h+var_888], r11w
 * 0000000140AB90D4: mov     [rdx+10h], ax
 * 0000000140AB90D8: shr     rax, 20h
 * 0000000140AB90DC: mov     [rdx+16h], cx
 * 0000000140AB90E0: mov     [rdx+18h], eax
 * 0000000140AB90E3: cli
 * 0000000140AB90E4: xor     eax, eax
 * 0000000140AB90E6: cmp     [r13+958h], eax
 * 0000000140AB90ED: jge     short loc_140AB90F5
 * 0000000140AB90EF: mov     dr7, rax
 * 0000000140AB90F2: sti
 * 0000000140AB90F3: jmp     short loc_140AB9111
 * 0000000140AB90F5: sidt    fword ptr [rbp+0B30h+var_750]
 * 0000000140AB90FC: lidt    fword ptr [rbp+0B30h+var_888]
 * 0000000140AB9103: mov     dr7, rax
 * 0000000140AB9106: lidt    fword ptr [rbp+0B30h+var_750]
 * 0000000140AB910D: jmp     short loc_140AB90F2
 * 0000000140AB910F: xor     eax, eax
 * 0000000140AB9111: test    dword ptr [r13+95Ch], 100h
 * 0000000140AB911C: mov     [rbp+0B30h+var_B48], rax
 * 0000000140AB9120: jz      short loc_140AB9137
 * 0000000140AB9122: lea     rcx, [rbp+0B38h]
 * 0000000140AB9129: mov     rax, [rcx]
 * 0000000140AB912C: mov     [rbp+0B30h+var_B48], rax
 * 0000000140AB9130: xor     eax, eax
 * 0000000140AB9132: mov     [rcx], rax
 * 0000000140AB9135: jmp     short loc_140AB9139
 * 0000000140AB9137: xor     eax, eax
 * 0000000140AB9139: mov     r12d, 20h ; ' '
 * 0000000140AB913F: mov     [r13+7F0h], eax
 * 0000000140AB9146: test    dword ptr [r13+958h], 40000000h
 * 0000000140AB9151: mov     rbx, 7010008004002001h
 * 0000000140AB915B: lea     r15d, [r12-1Ch]
 * 0000000140AB9160: jz      short loc_140AB9171
 * 0000000140AB9162: xor     eax, eax
 * 0000000140AB9164: cmp     [r13+0A40h], rax
 * 0000000140AB916B: jnz     loc_140AB9568
 * 0000000140AB9171: mov     r14, [r13+780h]
 * 0000000140AB9178: lea     rbx, [r13+760h]
 * 0000000140AB917F: mov     [rbp+0B30h+arg_8], r14
 * 0000000140AB9186: lea     rdx, [rbp+0B30h+var_130]
 * 0000000140AB918D: mov     rcx, rbx
 * 0000000140AB9190: mov     r8d, r12d
 * 0000000140AB9193: mov     r9, r15
 * 0000000140AB9196: mov     rax, [rcx]
 * 0000000140AB9199: add     r8d, edi
 * 0000000140AB919C: mov     [rdx], rax
 * 0000000140AB919F: add     rcx, 8
 * 0000000140AB91A3: add     rdx, 8
 * 0000000140AB91A7: sub     r9, r10
 * 0000000140AB91AA: jnz     short loc_140AB9196
 * 0000000140AB91AC: xor     eax, eax
 * 0000000140AB91AE: test    r8d, r8d
 * 0000000140AB91B1: jz      short loc_140AB91C4
 * 0000000140AB91B3: mov     al, [rcx]
 * 0000000140AB91B5: add     rcx, r10
 * 0000000140AB91B8: mov     [rdx], al
 * 0000000140AB91BA: add     rdx, r10
 * 0000000140AB91BD: add     r8d, esi
 * 0000000140AB91C0: jnz     short loc_140AB91B3
 * 0000000140AB91C2: xor     eax, eax
 * 0000000140AB91C4: mov     [r13+780h], rax
 * 0000000140AB91CB: mov     ecx, r12d
 * 0000000140AB91CE: mov     [r13+7F0h], eax
 * 0000000140AB91D5: mov     rdx, r15
 * 0000000140AB91D8: mov     rax, rbx
 * 0000000140AB91DB: xor     r8d, r8d
 * 0000000140AB91DE: mov     [rax], r8
 * 0000000140AB91E1: add     ecx, edi
 * 0000000140AB91E3: add     rax, 8
 * 0000000140AB91E7: sub     rdx, r10
 * 0000000140AB91EA: jnz     short loc_140AB91DE
 * 0000000140AB91EC: test    ecx, ecx
 * 0000000140AB91EE: jz      short loc_140AB91FA
 * 0000000140AB91F0: mov     [rax], r8b
 * 0000000140AB91F3: add     rax, r10
 * 0000000140AB91F6: add     ecx, esi
 * 0000000140AB91F8: jnz     short loc_140AB91F0
 * 0000000140AB91FA: mov     r10d, [r13+7ACh]
 * 0000000140AB9201: mov     r9, r13
 * 0000000140AB9204: add     [r13+7F0h], r10d
 * 0000000140AB920B: mov     rax, r13
 * 0000000140AB920E: mov     r11d, [r13+7DCh]
 * 0000000140AB9215: mov     rsi, [r13+7E0h]
 * 0000000140AB921C: lea     rcx, [r10+r13]
 * 0000000140AB9220: cmp     r13, rcx
 * 0000000140AB9223: jnb     short loc_140AB9235
 * 0000000140AB9225: mov     edx, 40h ; '@'
 * 0000000140AB922A: prefetchnta byte ptr [rax]
 * 0000000140AB922D: add     rax, rdx
 * 0000000140AB9230: cmp     rax, rcx
 * 0000000140AB9233: jb      short loc_140AB922A
 * 0000000140AB9235: mov     edi, r10d
 * 0000000140AB9238: mov     r8, rsi
 * 0000000140AB923B: shr     edi, 7
 * 0000000140AB923E: test    edi, edi
 * 0000000140AB9240: jz      short loc_140AB92BD
 * 0000000140AB9242: mov     r14, 7010008004002001h
 * 0000000140AB924C: mov     edx, 8
 * 0000000140AB9251: lea     r13d, [rdx-7]
 * 0000000140AB9255: mov     rax, [r9]
 * 0000000140AB9258: mov     ecx, r11d
 * 0000000140AB925B: xor     rax, r8
 * 0000000140AB925E: mov     r8, [r9+8]
 * 0000000140AB9262: rol     rax, cl
 * 0000000140AB9265: add     r9, 10h
 * 0000000140AB9269: xor     r8, rax
 * 0000000140AB926C: rol     r8, cl
 * 0000000140AB926F: sub     rdx, r13
 * 0000000140AB9272: jnz     short loc_140AB9255
 * 0000000140AB9274: mov     r13, [rbp+0B30h+arg_0]
 * 0000000140AB927B: mov     rcx, r9
 * 0000000140AB927E: sub     rcx, r13
 * 0000000140AB9281: xor     rcx, rsi
 * 0000000140AB9284: mov     rax, rcx
 * 0000000140AB9287: rol     rax, 11h
 * 0000000140AB928B: xor     rcx, rax
 * 0000000140AB928E: mov     rax, r14
 * 0000000140AB9291: mul     rcx
 * 0000000140AB9294: xor     eax, edx
 * 0000000140AB9296: mov     [rbp+0B30h+var_440], rdx
 * 0000000140AB929D: xor     r11d, eax
 * 0000000140AB92A0: mov     eax, 1
 * 0000000140AB92A5: and     r11d, 3Fh
 * 0000000140AB92A9: cmovz   r11d, eax
 * 0000000140AB92AD: mov     eax, 0FFFFFFFFh
 * 0000000140AB92B2: add     edi, eax
 * 0000000140AB92B4: jnz     short loc_140AB924C
 * 0000000140AB92B6: mov     r14, [rbp+0B30h+arg_8]
 * 0000000140AB92BD: and     r10d, 7Fh
 * 0000000140AB92C1: mov     edi, 1
 * 0000000140AB92C6: cmp     r10d, 8
 * 0000000140AB92CA: jb      short loc_140AB92E9
 * 0000000140AB92CC: mov     edx, r10d
 * 0000000140AB92CF: shr     rdx, 3
 * 0000000140AB92D3: xor     r8, [r9]
 * 0000000140AB92D6: mov     ecx, r11d
 * 0000000140AB92D9: rol     r8, cl
 * 0000000140AB92DC: add     r9, 8
 * 0000000140AB92E0: add     r10d, 0FFFFFFF8h
 * 0000000140AB92E4: sub     rdx, rdi
 * 0000000140AB92E7: jnz     short loc_140AB92D3
 * 0000000140AB92E9: mov     esi, 0FFFFFFFFh
 * 0000000140AB92EE: test    r10d, r10d
 * 0000000140AB92F1: jz      short loc_140AB9308
 * 0000000140AB92F3: movzx   eax, byte ptr [r9]
 * 0000000140AB92F7: mov     ecx, r11d
 * 0000000140AB92FA: xor     r8, rax
 * 0000000140AB92FD: add     r9, rdi
 * 0000000140AB9300: rol     r8, cl
 * 0000000140AB9303: add     r10d, esi
 * 0000000140AB9306: jnz     short loc_140AB92F3
 * 0000000140AB9308: mov     edx, r12d
 * 0000000140AB930B: mov     [r13+780h], r14
 * 0000000140AB9312: mov     r12d, 1
 * 0000000140AB9318: lea     rcx, [rbp+0B30h+var_130]
 * 0000000140AB931F: mov     r9, r15
 * 0000000140AB9322: mov     rax, [rcx]
 * 0000000140AB9325: add     edx, 0FFFFFFF8h
 * 0000000140AB9328: mov     [rbx], rax
 * 0000000140AB932B: add     rcx, 8
 * 0000000140AB932F: add     rbx, 8
 * 0000000140AB9333: sub     r9, r12
 * 0000000140AB9336: jnz     short loc_140AB9322
 * 0000000140AB9338: test    edx, edx
 * 0000000140AB933A: jz      short loc_140AB934A
 * 0000000140AB933C: mov     al, [rcx]
 * 0000000140AB933E: add     rcx, r12
 * 0000000140AB9341: mov     [rbx], al
 * 0000000140AB9343: add     rbx, r12
 * 0000000140AB9346: add     edx, esi
 * 0000000140AB9348: jnz     short loc_140AB933C
 * 0000000140AB934A: cmp     [r13+780h], r8
 * 0000000140AB9351: jz      short loc_140AB93D2
 * 0000000140AB9353: mov     rax, [r13+568h]
 * 0000000140AB935A: mov     ecx, [r13+7ACh]
 * 0000000140AB9361: mov     [rax], r13
 * 0000000140AB9364: mov     [rax+10h], ecx
 * 0000000140AB9367: xor     eax, eax
 * 0000000140AB9369: mov     rcx, [r13+780h]
 * 0000000140AB9370: cmp     [r13+8C0h], eax
 * 0000000140AB9377: jnz     short loc_140AB93D2
 * 0000000140AB9379: mov     rax, [r13+568h]
 * 0000000140AB9380: xor     rcx, r8
 * 0000000140AB9383: mov     [rax+18h], rcx
 * 0000000140AB9387: xor     eax, eax
 * 0000000140AB9389: cmp     [r13+8C0h], eax
 * 0000000140AB9390: jnz     short loc_140AB93D2
 * 0000000140AB9392: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AB939C: xor     edx, edx
 * 0000000140AB939E: add     rax, r13
 * 0000000140AB93A1: mov     rcx, r13
 * 0000000140AB93A4: mov     [r13+8C8h], rax
 * 0000000140AB93AB: xor     eax, eax
 * 0000000140AB93AD: mov     [r13+8D0h], rax
 * 0000000140AB93B4: mov     qword ptr [r13+8D8h], 101h
 * 0000000140AB93BF: mov     [r13+8E0h], r8
 * 0000000140AB93C6: mov     [r13+8C0h], r12d
 * 0000000140AB93CD: call    sub_140AD049C
 * 0000000140AB93D2: mov     rbx, 7010008004002001h
 * 0000000140AB93DC: mov     eax, [r13+958h]
 * 0000000140AB93E3: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AB93EA: or      eax, r15d
 * 0000000140AB93ED: mov     r8, 0ABCC77118461CEFDh
 * 0000000140AB93F7: mov     [r13+958h], eax
 * 0000000140AB93FE: mov     r14d, 2
 * 0000000140AB9404: add     [r13+7FCh], r12d
 * 0000000140AB940B: test    al, 8
 * 0000000140AB940D: jz      loc_140AB980C
 * 0000000140AB9413: bt      eax, 17h
 * 0000000140AB9417: jb      loc_140AB980C
 * 0000000140AB941D: mov     eax, [r13+95Ch]
 * 0000000140AB9424: mov     r10, [r13+0A38h]
 * 0000000140AB942B: mov     esi, [r13+7ACh]
 * 0000000140AB9432: mov     r11, [r13+9C0h]
 * 0000000140AB9439: mov     r15d, [r13+7D0h]
 * 0000000140AB9440: mov     [rbp+0B30h+arg_8], r10
 * 0000000140AB9447: and     eax, r12d
 * 0000000140AB944A: jz      short loc_140AB9453
 * 0000000140AB944C: mov     r11, [r13+5B0h]
 * 0000000140AB9453: mov     rax, [r13+2B8h]
 * 0000000140AB945A: mov     r12, [r13+150h]
 * 0000000140AB9461: mov     [rbp+0B30h+var_B68], rax
 * 0000000140AB9465: mov     rax, [r13+330h]
 * 0000000140AB946C: mov     [rbp+0B30h+var_B98], rax
 * 0000000140AB9470: mov     [rbp+0B30h+var_AA8], r12
 * 0000000140AB9477: rdtsc
 * 0000000140AB9479: shl     rdx, 20h
 * 0000000140AB947D: or      rax, rdx
 * 0000000140AB9480: mov     rcx, rax
 * 0000000140AB9483: ror     rax, 3
 * 0000000140AB9487: xor     rcx, rax
 * 0000000140AB948A: mov     rax, rbx
 * 0000000140AB948D: mul     rcx
 * 0000000140AB9490: mov     rcx, rdx
 * 0000000140AB9493: mov     [rbp+0B30h+var_3E0], rdx
 * 0000000140AB949A: xor     rcx, rax
 * 0000000140AB949D: mov     rax, r8
 * 0000000140AB94A0: mul     rcx
 * 0000000140AB94A3: mov     r8, rdi
 * 0000000140AB94A6: shr     rdx, 1Ah
 * 0000000140AB94AA: imul    rax, rdx, 5F5E100h
 * 0000000140AB94B1: sub     rcx, rax
 * 0000000140AB94B4: sub     r8, rcx
 * 0000000140AB94B7: mov     [rbp+0B30h+var_A28], r8
 * 0000000140AB94BE: mov     r9d, [r13+958h]
 * 0000000140AB94C5: bt      r9d, 1Ah
 * 0000000140AB94CA: jnb     loc_140AB9573
 * 0000000140AB94D0: rdtsc
 * 0000000140AB94D2: shl     rdx, 20h
 * 0000000140AB94D6: mov     r13, 0CCCCCCCCCCCCCCCDh
 * 0000000140AB94E0: or      rax, rdx
 * 0000000140AB94E3: mov     rcx, rax
 * 0000000140AB94E6: ror     rax, 3
 * 0000000140AB94EA: xor     rcx, rax
 * 0000000140AB94ED: mov     rax, rbx
 * 0000000140AB94F0: mul     rcx
 * 0000000140AB94F3: mov     rcx, rdx
 * 0000000140AB94F6: mov     [rbp+0B30h+var_3D8], rdx
 * 0000000140AB94FD: xor     rcx, rax
 * 0000000140AB9500: mov     rax, r13
 * 0000000140AB9503: mul     rcx
 * 0000000140AB9506: shr     rdx, 3
 * 0000000140AB950A: lea     rax, [rdx+rdx*4]
 * 0000000140AB950E: add     rax, rax
 * 0000000140AB9511: sub     rcx, rax
 * 0000000140AB9514: cmp     rcx, r14
 * 0000000140AB9517: jnb     short loc_140AB9573
 * 0000000140AB9519: rdtsc
 * 0000000140AB951B: shl     rdx, 20h
 * 0000000140AB951F: or      rax, rdx
 * 0000000140AB9522: mov     rcx, rax
 * 0000000140AB9525: ror     rax, 3
 * 0000000140AB9529: xor     rcx, rax
 * 0000000140AB952C: mov     rax, rbx
 * 0000000140AB952F: mul     rcx
 * 0000000140AB9532: mov     rcx, rdx
 * 0000000140AB9535: mov     [rbp+0B30h+var_3D0], rdx
 * 0000000140AB953C: xor     rcx, rax
 * 0000000140AB953F: mov     rax, r13
 * 0000000140AB9542: mul     rcx
 * 0000000140AB9545: shr     rdx, 3
 * 0000000140AB9549: lea     rax, [rdx+rdx*4]
 * 0000000140AB954D: mov     edx, 1
 * 0000000140AB9552: add     rax, rax
 * 0000000140AB9555: sub     rcx, rax
 * 0000000140AB9558: add     rcx, rdx
 * 0000000140AB955B: imul    rcx, r8
 * 0000000140AB955F: mov     [rbp+0B30h+var_A28], rcx
 * 0000000140AB9566: jmp     short loc_140AB9578
 * 0000000140AB9568: mov     r12d, 1
 * 0000000140AB956E: jmp     loc_140AB93DC
 * 0000000140AB9573: mov     edx, 1
 * 0000000140AB9578: xor     eax, eax
 * 0000000140AB957A: mov     ebx, eax
 * 0000000140AB957C: mov     r14d, eax
 * 0000000140AB957F: lea     ecx, [rax+2]
 * 0000000140AB9582: test    cl, r9b
 * 0000000140AB9585: cmovz   esi, r15d
 * 0000000140AB9589: test    r9b, r9b
 * 0000000140AB958C: js      short loc_140AB9596
 * 0000000140AB958E: mov     r13d, eax
 * 0000000140AB9591: jmp     loc_140AB967B
 * 0000000140AB9596: mov     r13d, edx
 * 0000000140AB9599: rdtsc
 * 0000000140AB959B: shl     rdx, 20h
 * 0000000140AB959F: mov     r12d, 1
 * 0000000140AB95A5: or      rax, rdx
 * 0000000140AB95A8: mov     rcx, rax
 * 0000000140AB95AB: ror     rax, 3
 * 0000000140AB95AF: xor     rcx, rax
 * 0000000140AB95B2: mov     rax, 7010008004002001h
 * 0000000140AB95BC: mul     rcx
 * 0000000140AB95BF: mov     ecx, 14Dh
 * 0000000140AB95C4: mov     rbx, rdx
 * 0000000140AB95C7: mov     [rbp+0B30h+var_3C8], rdx
 * 0000000140AB95CE: mov     rdx, [rbp+0B30h+arg_0]
 * 0000000140AB95D5: xor     rbx, rax
 * 0000000140AB95D8: mov     r14, rbx
 * 0000000140AB95DB: mov     r8, rbx
 * 0000000140AB95DE: xor     r14, rdx
 * 0000000140AB95E1: lea     rax, [rdx+0A60h]
 * 0000000140AB95E8: xor     [rax], r8
 * 0000000140AB95EB: lea     rax, [rax-8]
 * 0000000140AB95EF: ror     r8, cl
 * 0000000140AB95F2: sub     ecx, r12d
 * 0000000140AB95F5: jnz     short loc_140AB95E8
 * 0000000140AB95F7: lea     r9, [r15-0A68h]
 * 0000000140AB95FE: mov     r12, r15
 * 0000000140AB9601: shr     r9, 3
 * 0000000140AB9605: test    r9d, r9d
 * 0000000140AB9608: jz      short loc_140AB9648
 * 0000000140AB960A: movsxd  r10, r9d
 * 0000000140AB960D: lea     edi, [rcx+1]
 * 0000000140AB9610: add     r10, 14Ch
 * 0000000140AB9617: lea     r10, [rdx+r10*8]
 * 0000000140AB961B: mov     rdx, [r10]
 * 0000000140AB961E: lea     rax, [r14+r14]
 * 0000000140AB9622: mov     ecx, r9d
 * 0000000140AB9625: lea     r10, [r10-8]
 * 0000000140AB9629: ror     rdx, cl
 * 0000000140AB962C: mov     r14, rdx
 * 0000000140AB962F: xor     r14, rax
 * 0000000140AB9632: sub     r9d, edi
 * 0000000140AB9635: jnz     short loc_140AB961B
 * 0000000140AB9637: mov     r10, [rbp+0B30h+arg_8]
 * 0000000140AB963E: mov     r12, r15
 * 0000000140AB9641: mov     rdx, [rbp+0B30h+arg_0]
 * 0000000140AB9648: mov     ecx, esi
 * 0000000140AB964A: add     rdx, r12
 * 0000000140AB964D: sub     ecx, r15d
 * 0000000140AB9650: shr     ecx, 3
 * 0000000140AB9653: test    ecx, ecx
 * 0000000140AB9655: jz      short loc_140AB9674
 * 0000000140AB9657: lea     rdx, [rdx+rcx*8]
 * 0000000140AB965B: mov     r9d, 1
 * 0000000140AB9661: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140AB9665: xor     [rdx], r8
 * 0000000140AB9668: lea     rdx, [rdx-8]
 * 0000000140AB966C: ror     r8, cl
 * 0000000140AB966F: sub     ecx, r9d
 * 0000000140AB9672: jnz     short loc_140AB9665
 * 0000000140AB9674: mov     r12, [rbp+0B30h+var_AA8]
 * 0000000140AB967B: test    r10, r10
 * 0000000140AB967E: jz      short loc_140AB96A3
 * 0000000140AB9680: mov     rcx, [rbp+0B30h+arg_0]
 * 0000000140AB9687: lea     r8, [rbp+0B30h+var_A28]
 * 0000000140AB968E: mov     rax, [rbp+0B30h+var_B98]
 * 0000000140AB9692: mov     r9, r12
 * 0000000140AB9695: mov     edx, esi
 * 0000000140AB9697: mov     [rsp+0C30h+BugCheckParameter4], r10
 * 0000000140AB969C: call    j__guard_dispatch_icall_nop
 * 0000000140AB96A1: jmp     short loc_140AB96DB
 * 0000000140AB96A3: xor     edx, edx
 * 0000000140AB96A5: test    r11, r11
 * 0000000140AB96A8: jnz     short loc_140AB96BD
 * 0000000140AB96AA: lea     r8, [rbp+0B30h+var_A28]
 * 0000000140AB96B1: xor     ecx, ecx
 * 0000000140AB96B3: mov     rax, r12
 * 0000000140AB96B6: call    j__guard_dispatch_icall_nop
 * 0000000140AB96BB: jmp     short loc_140AB96DB
 * 0000000140AB96BD: lea     rax, [rbp+0B30h+var_A28]
 * 0000000140AB96C4: xor     r9d, r9d
 * 0000000140AB96C7: mov     [rsp+0C30h+BugCheckParameter4], rax
 * 0000000140AB96CC: xor     r8d, r8d
 * 0000000140AB96CF: mov     rax, [rbp+0B30h+var_B68]
 * 0000000140AB96D3: mov     rcx, r11
 * 0000000140AB96D6: call    j__guard_dispatch_icall_nop
 * 0000000140AB96DB: xor     eax, eax
 * 0000000140AB96DD: test    r13d, r13d
 * 0000000140AB96E0: mov     r13, [rbp+0B30h+arg_0]
 * 0000000140AB96E7: lea     r12d, [rax+1]
 * 0000000140AB96EB: jz      loc_140AB9B11
 * 0000000140AB96F1: mov     r8, rbx
 * 0000000140AB96F4: lea     rax, [r13+0A60h]
 * 0000000140AB96FB: xor     r8, r13
 * 0000000140AB96FE: mov     ecx, 14Dh
 * 0000000140AB9703: xor     [rax], rbx
 * 0000000140AB9706: lea     rax, [rax-8]
 * 0000000140AB970A: ror     rbx, cl
 * 0000000140AB970D: sub     ecx, r12d
 * 0000000140AB9710: jnz     short loc_140AB9703
 * 0000000140AB9712: lea     r9, [r15-0A68h]
 * 0000000140AB9719: mov     r11, r15
 * 0000000140AB971C: shr     r9, 3
 * 0000000140AB9720: test    r9d, r9d
 * 0000000140AB9723: jz      short loc_140AB9752
 * 0000000140AB9725: movsxd  rax, r9d
 * 0000000140AB9728: lea     r10, [r13+0A60h]
 * 0000000140AB972F: lea     r10, [r10+rax*8]
 * 0000000140AB9733: mov     rdx, [r10]
 * 0000000140AB9736: lea     rax, [r8+r8]
 * 0000000140AB973A: mov     ecx, r9d
 * 0000000140AB973D: lea     r10, [r10-8]
 * 0000000140AB9741: ror     rdx, cl
 * 0000000140AB9744: mov     r8, rdx
 * 0000000140AB9747: xor     r8, rax
 * 0000000140AB974A: sub     r9d, r12d
 * 0000000140AB974D: jnz     short loc_140AB9733
 * 0000000140AB974F: mov     r11, r15
 * 0000000140AB9752: sub     esi, r15d
 * 0000000140AB9755: lea     rcx, [r11+r13]
 * 0000000140AB9759: shr     esi, 3
 * 0000000140AB975C: test    esi, esi
 * 0000000140AB975E: jz      short loc_140AB977A
 * 0000000140AB9760: mov     eax, esi
 * 0000000140AB9762: dec     rax
 * 0000000140AB9765: lea     rdx, [rcx+rax*8]
 * 0000000140AB9769: xor     [rdx], rbx
 * 0000000140AB976C: mov     ecx, esi
 * 0000000140AB976E: ror     rbx, cl
 * 0000000140AB9771: lea     rdx, [rdx-8]
 * 0000000140AB9775: sub     esi, r12d
 * 0000000140AB9778: jnz     short loc_140AB9769
 * 0000000140AB977A: cmp     r8, r14
 * 0000000140AB977D: jz      loc_140AB9806
 * 0000000140AB9783: mov     rax, [r13+568h]
 * 0000000140AB978A: mov     ecx, [r13+7ACh]
 * 0000000140AB9791: mov     [rax], r13
 * 0000000140AB9794: mov     [rax+10h], ecx
 * 0000000140AB9797: xor     eax, eax
 * 0000000140AB9799: cmp     [r13+8C0h], eax
 * 0000000140AB97A0: jnz     loc_140AB9B11
 * 0000000140AB97A6: mov     rax, [r13+568h]
 * 0000000140AB97AD: mov     rcx, r8
 * 0000000140AB97B0: xor     rcx, r14
 * 0000000140AB97B3: mov     [rax+18h], rcx
 * 0000000140AB97B7: xor     eax, eax
 * 0000000140AB97B9: cmp     [r13+8C0h], eax
 * 0000000140AB97C0: jnz     loc_140AB9B11
 * 0000000140AB97C6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AB97D0: xor     edx, edx
 * 0000000140AB97D2: add     rax, r13
 * 0000000140AB97D5: mov     rcx, r13
 * 0000000140AB97D8: mov     [r13+8C8h], rax
 * 0000000140AB97DF: xor     eax, eax
 * 0000000140AB97E1: mov     [r13+8D0h], rax
 * 0000000140AB97E8: mov     qword ptr [r13+8D8h], 10Eh
 * 0000000140AB97F3: mov     [r13+8E0h], r8
 * 0000000140AB97FA: mov     [r13+8C0h], r12d
 * 0000000140AB9801: call    sub_140AD049C
 * 0000000140AB9806: mov     r15d, 4
 * 0000000140AB980C: xor     eax, eax
 * 0000000140AB980E: mov     esi, [r13+0C4h]
 * 0000000140AB9815: lea     rcx, [r13+5F8h]
 * 0000000140AB981C: mov     [r13+0C4h], eax
 * 0000000140AB9823: mov     r9, r13
 * 0000000140AB9826: add     dword ptr [r13+7F0h], 5F8h
 * 0000000140AB9831: mov     rax, r13
 * 0000000140AB9834: mov     r10d, [r13+7DCh]
 * 0000000140AB983B: mov     r11, [r13+7E0h]
 * 0000000140AB9842: cmp     r13, rcx
 * 0000000140AB9845: jnb     short loc_140AB9857
 * 0000000140AB9847: mov     edx, 40h ; '@'
 * 0000000140AB984C: prefetchnta byte ptr [rax]
 * 0000000140AB984F: add     rax, rdx
 * 0000000140AB9852: cmp     rax, rcx
 * 0000000140AB9855: jb      short loc_140AB984C
 * 0000000140AB9857: mov     r8, r11
 * 0000000140AB985A: mov     ebx, 0Bh
 * 0000000140AB985F: mov     rdi, 7010008004002001h
 * 0000000140AB9869: mov     r14d, 0FFFFFFFFh
 * 0000000140AB986F: mov     edx, 8
 * 0000000140AB9874: mov     rax, [r9]
 * 0000000140AB9877: mov     ecx, r10d
 * 0000000140AB987A: xor     rax, r8
 * 0000000140AB987D: mov     r8, [r9+8]
 * 0000000140AB9881: rol     rax, cl
 * 0000000140AB9884: add     r9, 10h
 * 0000000140AB9888: xor     r8, rax
 * 0000000140AB988B: rol     r8, cl
 * 0000000140AB988E: sub     rdx, r12
 * 0000000140AB9891: jnz     short loc_140AB9874
 * 0000000140AB9893: mov     rcx, r9
 * 0000000140AB9896: sub     rcx, r13
 * 0000000140AB9899: xor     rcx, r11
 * 0000000140AB989C: mov     rax, rcx
 * 0000000140AB989F: rol     rax, 11h
 * 0000000140AB98A3: xor     rcx, rax
 * 0000000140AB98A6: mov     rax, rdi
 * 0000000140AB98A9: mul     rcx
 * 0000000140AB98AC: xor     eax, edx
 * 0000000140AB98AE: mov     [rbp+0B30h+var_3C0], rdx
 * 0000000140AB98B5: xor     r10d, eax
 * 0000000140AB98B8: and     r10d, 3Fh
 * 0000000140AB98BC: cmovz   r10d, r12d
 * 0000000140AB98C0: add     ebx, r14d
 * 0000000140AB98C3: jnz     short loc_140AB986F
 * 0000000140AB98C5: lea     edx, [rbx+78h]
 * 0000000140AB98C8: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AB98CF: lea     r11d, [rbx+0Fh]
 * 0000000140AB98D3: xor     r8, [r9]
 * 0000000140AB98D6: mov     ecx, r10d
 * 0000000140AB98D9: rol     r8, cl
 * 0000000140AB98DC: add     r9, 8
 * 0000000140AB98E0: add     edx, 0FFFFFFF8h
 * 0000000140AB98E3: sub     r11, r12
 * 0000000140AB98E6: jnz     short loc_140AB98D3
 * 0000000140AB98E8: test    edx, edx
 * 0000000140AB98EA: jz      short loc_140AB9901
 * 0000000140AB98EC: movzx   eax, byte ptr [r9]
 * 0000000140AB98F0: mov     ecx, r10d
 * 0000000140AB98F3: xor     r8, rax
 * 0000000140AB98F6: add     r9, r12
 * 0000000140AB98F9: rol     r8, cl
 * 0000000140AB98FC: add     edx, r14d
 * 0000000140AB98FF: jnz     short loc_140AB98EC
 * 0000000140AB9901: mov     [r13+0C4h], esi
 * 0000000140AB9908: cmp     [r13+9E8h], r8
 * 0000000140AB990F: jz      loc_140AB9997
 * 0000000140AB9915: mov     rax, [r13+568h]
 * 0000000140AB991C: mov     ecx, [r13+7ACh]
 * 0000000140AB9923: mov     [rax], r13
 * 0000000140AB9926: mov     [rax+10h], ecx
 * 0000000140AB9929: xor     ecx, ecx
 * 0000000140AB992B: mov     rax, [r13+9E8h]
 * 0000000140AB9932: cmp     [r13+8C0h], ecx
 * 0000000140AB9939: jnz     short loc_140AB9997
 * 0000000140AB993B: mov     rcx, r8
 * 0000000140AB993E: xor     rcx, rax
 * 0000000140AB9941: mov     rax, [r13+568h]
 * 0000000140AB9948: mov     [rax+18h], rcx
 * 0000000140AB994C: xor     eax, eax
 * 0000000140AB994E: cmp     [r13+8C0h], eax
 * 0000000140AB9955: jnz     short loc_140AB9997
 * 0000000140AB9957: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AB9961: xor     edx, edx
 * 0000000140AB9963: add     rax, r13
 * 0000000140AB9966: mov     rcx, r13
 * 0000000140AB9969: mov     [r13+8C8h], rax
 * 0000000140AB9970: xor     eax, eax
 * 0000000140AB9972: mov     [r13+8D0h], rax
 * 0000000140AB9979: mov     qword ptr [r13+8D8h], 109h
 * 0000000140AB9984: mov     [r13+8E0h], r8
 * 0000000140AB998B: mov     [r13+8C0h], r12d
 * 0000000140AB9992: call    sub_140AD049C
 * 0000000140AB9997: xor     edx, edx
 * 0000000140AB9999: mov     rcx, r13
 * 0000000140AB999C: call    sub_140AD049C
 * 0000000140AB99A1: mov     ecx, [r13+938h]
 * 0000000140AB99A8: xor     eax, eax
 * 0000000140AB99AA: mov     [rsp+0C30h+var_BD0], r13
 * 0000000140AB99AF: mov     rsi, r13
 * 0000000140AB99B2: mov     [rbp+0B30h+var_B28], eax
 * 0000000140AB99B5: mov     r10, 2E8BA2E8BA2E8BA3h
 * 0000000140AB99BF: mov     [rbp+0B30h+var_BB0], eax
 * 0000000140AB99C2: lea     r9d, [rax+5]
 * 0000000140AB99C6: mov     [rbp+0B30h+var_AA8], r9
 * 0000000140AB99CD: lea     r8d, [rax+6]
 * 0000000140AB99D1: cmp     ecx, r14d
 * 0000000140AB99D4: jz      short loc_140AB9A41
 * 0000000140AB99D6: mov     rax, [r13+268h]
 * 0000000140AB99DD: call    j__guard_dispatch_icall_nop
 * 0000000140AB99E2: mov     rbx, rax
 * 0000000140AB99E5: test    rax, rax
 * 0000000140AB99E8: jnz     short loc_140AB9A00
 * 0000000140AB99EA: mov     rax, [r13+270h]
 * 0000000140AB99F1: xor     ecx, ecx
 * 0000000140AB99F3: call    j__guard_dispatch_icall_nop
 * 0000000140AB99F8: mov     rbx, rax
 * 0000000140AB99FB: test    rax, rax
 * 0000000140AB99FE: jz      short loc_140AB9A2D
 * 0000000140AB9A00: mov     rax, [r13+280h]
 * 0000000140AB9A07: lea     rdx, [rbp+0B30h+var_6C0]
 * 0000000140AB9A0E: mov     rcx, rbx
 * 0000000140AB9A11: call    j__guard_dispatch_icall_nop
 * 0000000140AB9A16: test    eax, eax
 * 0000000140AB9A18: jns     loc_140AB9B1C
 * 0000000140AB9A1E: mov     rax, [r13+278h]
 * 0000000140AB9A25: mov     rcx, rbx
 * 0000000140AB9A28: call    j__guard_dispatch_icall_nop
 * 0000000140AB9A2D: mov     r9d, 5
 * 0000000140AB9A33: mov     r10, 2E8BA2E8BA2E8BA3h
 * 0000000140AB9A3D: lea     r8d, [r9+1]
 * 0000000140AB9A41: mov     eax, [r13+95Ch]
 * 0000000140AB9A48: test    al, 8
 * 0000000140AB9A4A: jz      loc_140AB9DF7
 * 0000000140AB9A50: bt      eax, 0Ch
 * 0000000140AB9A54: jb      loc_140AB9DF7
 * 0000000140AB9A5A: rdtsc
 * 0000000140AB9A5C: shl     rdx, 20h
 * 0000000140AB9A60: mov     rbx, 7010008004002001h
 * 0000000140AB9A6A: or      rax, rdx
 * 0000000140AB9A6D: mov     rcx, rax
 * 0000000140AB9A70: ror     rax, 3
 * 0000000140AB9A74: xor     rcx, rax
 * 0000000140AB9A77: mov     rax, rbx
 * 0000000140AB9A7A: mul     rcx
 * 0000000140AB9A7D: mov     [rbp+0B30h+var_3B8], rdx
 * 0000000140AB9A84: xor     dl, al
 * 0000000140AB9A86: test    dl, 3
 * 0000000140AB9A89: jnz     loc_140AB9DF7
 * 0000000140AB9A8F: rdtsc
 * 0000000140AB9A91: shl     rdx, 20h
 * 0000000140AB9A95: or      rax, rdx
 * 0000000140AB9A98: mov     rcx, rax
 * 0000000140AB9A9B: ror     rax, 3
 * 0000000140AB9A9F: xor     rcx, rax
 * 0000000140AB9AA2: mov     rax, rbx
 * 0000000140AB9AA5: mul     rcx
 * 0000000140AB9AA8: mov     rcx, rdx
 * 0000000140AB9AAB: mov     [rbp+0B30h+var_3B0], rdx
 * 0000000140AB9AB2: xor     rcx, rax
 * 0000000140AB9AB5: mov     rax, r10
 * 0000000140AB9AB8: mul     rcx
 * 0000000140AB9ABB: shr     rdx, 1
 * 0000000140AB9ABE: imul    rax, rdx, 0Bh
 * 0000000140AB9AC2: sub     rcx, rax
 * 0000000140AB9AC5: cmp     ecx, r9d
 * 0000000140AB9AC8: ja      loc_140AB9C0F
 * 0000000140AB9ACE: jz      loc_140AB9BF5
 * 0000000140AB9AD4: test    ecx, ecx
 * 0000000140AB9AD6: jz      loc_140AB9BDB
 * 0000000140AB9ADC: sub     ecx, 1
 * 0000000140AB9ADF: jz      loc_140AB9BC2
 * 0000000140AB9AE5: sub     ecx, 1
 * 0000000140AB9AE8: jz      loc_140AB9BA8
 * 0000000140AB9AEE: cmp     ecx, 1
 * 0000000140AB9AF1: jz      loc_140AB9B8A
 * 0000000140AB9AF7: mov     [rbp+0B30h+var_9D0], 67076494h
 * 0000000140AB9B01: mov     r9d, [rbp+0B30h+var_9D0]
 * 0000000140AB9B08: rol     r9d, 4
 * 0000000140AB9B0C: jmp     loc_140AB9D34
 * 0000000140AB9B11: mov     r15d, 4
 * 0000000140AB9B17: jmp     loc_140AB980E
 * 0000000140AB9B1C: mov     [r13+948h], rbx
 * 0000000140AB9B23: mov     rax, [r13+2A8h]
 * 0000000140AB9B2A: call    j__guard_dispatch_icall_nop
 * 0000000140AB9B2F: mov     rbx, rax
 * 0000000140AB9B32: mov     rax, [r13+2C8h]
 * 0000000140AB9B39: mov     rcx, rbx
 * 0000000140AB9B3C: call    j__guard_dispatch_icall_nop
 * 0000000140AB9B41: mov     rdx, rax
 * 0000000140AB9B44: test    rax, rax
 * 0000000140AB9B47: jnz     short loc_140AB9B4E
 * 0000000140AB9B49: mov     ecx, r15d
 * 0000000140AB9B4C: jmp     short loc_140AB9B61
 * 0000000140AB9B4E: mov     rax, [r13+2D8h]
 * 0000000140AB9B55: mov     rcx, rbx
 * 0000000140AB9B58: call    j__guard_dispatch_icall_nop
 * 0000000140AB9B5D: xor     eax, eax
 * 0000000140AB9B5F: mov     ecx, eax
 * 0000000140AB9B61: mov     eax, [r13+95Ch]
 * 0000000140AB9B68: and     eax, 0FFFFFFFBh
 * 0000000140AB9B6B: mov     [rbp+0B30h+var_BB0], r12d
 * 0000000140AB9B6F: or      eax, ecx
 * 0000000140AB9B71: mov     [r13+95Ch], eax
 * 0000000140AB9B78: add     dword ptr [r13+7F0h], 10000h
 * 0000000140AB9B83: xor     eax, eax
 * 0000000140AB9B85: jmp     loc_140AB9DFC
 * 0000000140AB9B8A: mov     [rbp+0B30h+var_9CC], 0A8223938h
 * 0000000140AB9B94: mov     r9d, [rbp+0B30h+var_9CC]
 * 0000000140AB9B9B: xor     r9d, 3
 * 0000000140AB9B9F: ror     r9d, 0Fh
 * 0000000140AB9BA3: jmp     loc_140AB9D34
 * 0000000140AB9BA8: mov     [rbp+0B30h+var_9C8], 85B5910Dh
 * 0000000140AB9BB2: mov     r9d, [rbp+0B30h+var_9C8]
 * 0000000140AB9BB9: ror     r9d, 2
 * 0000000140AB9BBD: jmp     loc_140AB9D34
 * 0000000140AB9BC2: mov     [rbp+0B30h+var_9C4], 0B2AD31A1h
 * 0000000140AB9BCC: mov     r9d, [rbp+0B30h+var_9C4]
 * 0000000140AB9BD3: rol     r9d, 1
 * 0000000140AB9BD6: jmp     loc_140AB9D34
 * 0000000140AB9BDB: mov     [rbp+0B30h+var_9C0], 0D098D0D8h
 * 0000000140AB9BE5: mov     r9d, [rbp+0B30h+var_9C0]
 * 0000000140AB9BEC: ror     r9d, 6
 * 0000000140AB9BF0: jmp     loc_140AB9D34
 * 0000000140AB9BF5: mov     [rbp+0B30h+var_9BC], 288C49EDh
 * 0000000140AB9BFF: mov     r9d, [rbp+0B30h+var_9BC]
 * 0000000140AB9C06: ror     r9d, 5
 * 0000000140AB9C0A: jmp     loc_140AB9D34
 * 0000000140AB9C0F: sub     ecx, r8d
 * 0000000140AB9C12: jz      loc_140AB9D1C
 * 0000000140AB9C18: sub     ecx, 1
 * 0000000140AB9C1B: jz      loc_140AB9D05
 * 0000000140AB9C21: sub     ecx, 1
 * 0000000140AB9C24: jz      loc_140AB9CEE
 * 0000000140AB9C2A: cmp     ecx, 1
 * 0000000140AB9C2D: jz      loc_140AB9CD3
 * 0000000140AB9C33: rdtsc
 * 0000000140AB9C35: shl     rdx, 20h
 * 0000000140AB9C39: or      rax, rdx
 * 0000000140AB9C3C: mov     rcx, rax
 * 0000000140AB9C3F: ror     rax, 3
 * 0000000140AB9C43: xor     rcx, rax
 * 0000000140AB9C46: mov     rax, rbx
 * 0000000140AB9C49: mul     rcx
 * 0000000140AB9C4C: mov     r9, rax
 * 0000000140AB9C4F: mov     [rbp+0B30h+var_3A8], rdx
 * 0000000140AB9C56: xor     r9d, edx
 * 0000000140AB9C59: mov     eax, 4EC4EC4Fh
 * 0000000140AB9C5E: mul     r9d
 * 0000000140AB9C61: mov     ecx, r9d
 * 0000000140AB9C64: shr     r9d, 5
 * 0000000140AB9C68: shr     edx, 3
 * 0000000140AB9C6B: mov     r8d, r9d
 * 0000000140AB9C6E: imul    eax, edx, 1Ah
 * 0000000140AB9C71: sub     ecx, eax
 * 0000000140AB9C73: mov     eax, 4EC4EC4Fh
 * 0000000140AB9C78: mul     r9d
 * 0000000140AB9C7B: add     ecx, 61h ; 'a'
 * 0000000140AB9C7E: shr     r9d, 5
 * 0000000140AB9C82: shl     ecx, 8
 * 0000000140AB9C85: shr     edx, 3
 * 0000000140AB9C88: imul    eax, edx, 1Ah
 * 0000000140AB9C8B: sub     r8d, eax
 * 0000000140AB9C8E: mov     eax, 4EC4EC4Fh
 * 0000000140AB9C93: mul     r9d
 * 0000000140AB9C96: add     r8d, 41h ; 'A'
 * 0000000140AB9C9A: or      r8d, ecx
 * 0000000140AB9C9D: shr     edx, 3
 * 0000000140AB9CA0: imul    eax, edx, 1Ah
 * 0000000140AB9CA3: mov     ecx, r9d
 * 0000000140AB9CA6: shr     r9d, 5
 * 0000000140AB9CAA: shl     r8d, 8
 * 0000000140AB9CAE: sub     ecx, eax
 * 0000000140AB9CB0: mov     eax, 4EC4EC4Fh
 * 0000000140AB9CB5: mul     r9d
 * 0000000140AB9CB8: add     ecx, 61h ; 'a'
 * 0000000140AB9CBB: shr     edx, 3
 * 0000000140AB9CBE: or      ecx, r8d
 * 0000000140AB9CC1: imul    eax, edx, 1Ah
 * 0000000140AB9CC4: shl     ecx, 8
 * 0000000140AB9CC7: sub     r9d, eax
 * 0000000140AB9CCA: add     r9d, 41h ; 'A'
 * 0000000140AB9CCE: or      r9d, ecx
 * 0000000140AB9CD1: jmp     short loc_140AB9D34
 * 0000000140AB9CD3: mov     [rbp+0B30h+var_9B8], 0B0869E85h
 * 0000000140AB9CDD: mov     r9d, [rbp+0B30h+var_9B8]
 * 0000000140AB9CE4: xor     r9d, 9
 * 0000000140AB9CE8: ror     r9d, 21h
 * 0000000140AB9CEC: jmp     short loc_140AB9D34
 * 0000000140AB9CEE: mov     [rbp+0B30h+var_9B4], 64664142h
 * 0000000140AB9CF8: mov     r9d, [rbp+0B30h+var_9B4]
 * 0000000140AB9CFF: ror     r9d, 8
 * 0000000140AB9D03: jmp     short loc_140AB9D34
 * 0000000140AB9D05: mov     [rbp+0B30h+var_9B0], 82C6A6D8h
 * 0000000140AB9D0F: mov     r9d, [rbp+0B30h+var_9B0]
 * 0000000140AB9D16: rol     r9d, 7
 * 0000000140AB9D1A: jmp     short loc_140AB9D34
 * 0000000140AB9D1C: mov     [rbp+0B30h+var_9AC], 4E574672h
 * 0000000140AB9D26: mov     r9d, [rbp+0B30h+var_9AC]
 * 0000000140AB9D2D: xor     r9d, r8d
 * 0000000140AB9D30: ror     r9d, 18h
 * 0000000140AB9D34: mov     rax, [r13+0E8h]
 * 0000000140AB9D3B: mov     r8d, r9d
 * 0000000140AB9D3E: mov     rdx, [r13+738h]
 * 0000000140AB9D45: mov     ecx, 40h ; '@'
 * 0000000140AB9D4A: call    j__guard_dispatch_icall_nop
 * 0000000140AB9D4F: mov     r15, rax
 * 0000000140AB9D52: xor     eax, eax
 * 0000000140AB9D54: test    r15, r15
 * 0000000140AB9D57: jz      loc_140AB9DF9
 * 0000000140AB9D5D: mov     rax, [r13+198h]
 * 0000000140AB9D64: mov     rcx, r15
 * 0000000140AB9D67: movzx   edx, word ptr [r13+740h]
 * 0000000140AB9D6F: call    j__guard_dispatch_icall_nop
 * 0000000140AB9D74: mov     rcx, [r13+6B8h]
 * 0000000140AB9D7B: mov     rax, [r13+4F0h]
 * 0000000140AB9D82: mov     r14d, [rcx+rax]
 * 0000000140AB9D86: test    r14d, r14d
 * 0000000140AB9D89: jz      short loc_140AB9DB6
 * 0000000140AB9D8B: rdtsc
 * 0000000140AB9D8D: shl     rdx, 20h
 * 0000000140AB9D91: or      rax, rdx
 * 0000000140AB9D94: mov     rcx, rax
 * 0000000140AB9D97: ror     rax, 3
 * 0000000140AB9D9B: xor     rcx, rax
 * 0000000140AB9D9E: mov     rax, rbx
 * 0000000140AB9DA1: mul     rcx
 * 0000000140AB9DA4: mov     [rbp+0B30h+var_3A0], rdx
 * 0000000140AB9DAB: xor     rax, rdx
 * 0000000140AB9DAE: xor     edx, edx
 * 0000000140AB9DB0: div     r14
 * 0000000140AB9DB3: mov     r14, rdx
 * 0000000140AB9DB6: xor     ecx, ecx
 * 0000000140AB9DB8: jmp     short loc_140AB9DCE
 * 0000000140AB9DBA: mov     rcx, rbx
 * 0000000140AB9DBD: test    r14d, r14d
 * 0000000140AB9DC0: jz      loc_140AB9E9A
 * 0000000140AB9DC6: mov     eax, 0FFFFFFFFh
 * 0000000140AB9DCB: add     r14d, eax
 * 0000000140AB9DCE: mov     rax, [r13+3A0h]
 * 0000000140AB9DD5: call    j__guard_dispatch_icall_nop
 * 0000000140AB9DDA: mov     rbx, rax
 * 0000000140AB9DDD: test    rax, rax
 * 0000000140AB9DE0: jnz     short loc_140AB9DBA
 * 0000000140AB9DE2: mov     rax, [r13+0F0h]
 * 0000000140AB9DE9: mov     rcx, r15
 * 0000000140AB9DEC: call    j__guard_dispatch_icall_nop
 * 0000000140AB9DF1: mov     r14d, 0FFFFFFFFh
 * 0000000140AB9DF7: xor     eax, eax
 * 0000000140AB9DF9: mov     [rbp+0B30h+var_B28], eax
 * 0000000140AB9DFC: mov     [rbp+0B30h+var_A70], rax
 * 0000000140AB9E03: mov     ecx, 4
 * 0000000140AB9E08: lea     rax, [rbp+0B30h+var_A68]
 * 0000000140AB9E0F: xor     edx, edx
 * 0000000140AB9E11: mov     [rax], dl
 * 0000000140AB9E13: add     rax, r12
 * 0000000140AB9E16: add     ecx, r14d
 * 0000000140AB9E19: jnz     short loc_140AB9E11
 * 0000000140AB9E1B: mov     ecx, [r13+7E8h]
 * 0000000140AB9E22: lea     r12, [r13+7F4h]
 * 0000000140AB9E29: mov     eax, [r12]
 * 0000000140AB9E2D: mov     edx, 19h
 * 0000000140AB9E32: mov     r14d, 8000h
 * 0000000140AB9E38: mov     [rbp+0B30h+var_B50], ecx
 * 0000000140AB9E3B: mov     [rbp+0B30h+var_B78], r12
 * 0000000140AB9E3F: cmp     [r13+7F0h], eax
 * 0000000140AB9E46: jge     loc_140AC569B
 * 0000000140AB9E4C: mov     rbx, [rbp+0B30h+var_390]
 * 0000000140AB9E53: mov     r14, [rbp+0B30h+var_388]
 * 0000000140AB9E5A: mov     r15d, [rbp+0B30h+var_828]
 * 0000000140AB9E61: mov     r10d, [rbp+0B30h+var_81C]
 * 0000000140AB9E68: mov     [rbp+0B30h+var_B68], rbx
 * 0000000140AB9E6C: mov     [rbp+0B30h+var_B98], r14
 * 0000000140AB9E70: mov     [rbp+0B30h+var_BAC], r15d
 * 0000000140AB9E74: mov     [rbp+0B30h+var_B08], r10d
 * 0000000140AB9E78: mov     eax, [rsi+958h]
 * 0000000140AB9E7E: mov     r8d, 110000h
 * 0000000140AB9E84: and     eax, r8d
 * 0000000140AB9E87: cmp     eax, r8d
 * 0000000140AB9E8A: jz      loc_140AB9FE7
 * 0000000140AB9E90: xor     eax, eax
 * 0000000140AB9E92: mov     dr7, rax
 * 0000000140AB9E95: jmp     loc_140AB9FE9
 * 0000000140AB9E9A: mov     rax, [r13+390h]
 * 0000000140AB9EA1: call    j__guard_dispatch_icall_nop
 * 0000000140AB9EA6: xor     r14d, r14d
 * 0000000140AB9EA9: mov     rcx, rbx
 * 0000000140AB9EAC: test    eax, eax
 * 0000000140AB9EAE: jns     short loc_140AB9EC1
 * 0000000140AB9EB0: mov     rax, [r13+3A8h]
 * 0000000140AB9EB7: call    j__guard_dispatch_icall_nop
 * 0000000140AB9EBC: jmp     loc_140AB9DE2
 * 0000000140AB9EC1: mov     rax, [r13+428h]
 * 0000000140AB9EC8: lea     rdx, [rbp+0B30h+var_6C0]
 * 0000000140AB9ECF: call    j__guard_dispatch_icall_nop
 * 0000000140AB9ED4: mov     rax, [r13+1B8h]
 * 0000000140AB9EDB: xor     r9d, r9d
 * 0000000140AB9EDE: xor     r8d, r8d
 * 0000000140AB9EE1: mov     [rsp+0C30h+BugCheckParameter4], r14
 * 0000000140AB9EE6: mov     rdx, r15
 * 0000000140AB9EE9: mov     rcx, rbx
 * 0000000140AB9EEC: call    j__guard_dispatch_icall_nop
 * 0000000140AB9EF1: rdtsc
 * 0000000140AB9EF3: shl     rdx, 20h
 * 0000000140AB9EF7: or      rax, rdx
 * 0000000140AB9EFA: mov     rcx, rax
 * 0000000140AB9EFD: ror     rax, 3
 * 0000000140AB9F01: xor     rcx, rax
 * 0000000140AB9F04: mov     rax, 7010008004002001h
 * 0000000140AB9F0E: mul     rcx
 * 0000000140AB9F11: mov     rcx, r15
 * 0000000140AB9F14: mov     rbx, rdx
 * 0000000140AB9F17: mov     [rbp+0B30h+var_398], rdx
 * 0000000140AB9F1E: xor     rbx, rax
 * 0000000140AB9F21: mov     rax, [r13+1B0h]
 * 0000000140AB9F28: call    j__guard_dispatch_icall_nop
 * 0000000140AB9F2D: mov     ecx, eax
 * 0000000140AB9F2F: xor     edx, edx
 * 0000000140AB9F31: mov     rax, rbx
 * 0000000140AB9F34: div     rcx
 * 0000000140AB9F37: mov     rbx, rdx
 * 0000000140AB9F3A: cli
 * 0000000140AB9F3B: sti
 * 0000000140AB9F3C: mov     rax, [r13+190h]
 * 0000000140AB9F43: lea     rcx, [rbp+0B30h+var_6D0]
 * 0000000140AB9F4A: xor     edx, edx
 * 0000000140AB9F4C: call    j__guard_dispatch_icall_nop
 * 0000000140AB9F51: mov     rax, [r13+1A0h]
 * 0000000140AB9F58: lea     rcx, [rbp+0B30h+var_248]
 * 0000000140AB9F5F: mov     rdx, r15
 * 0000000140AB9F62: call    j__guard_dispatch_icall_nop
 * 0000000140AB9F67: jmp     short loc_140AB9F74
 * 0000000140AB9F69: test    ebx, ebx
 * 0000000140AB9F6B: jz      short loc_140AB9F94
 * 0000000140AB9F6D: mov     eax, 0FFFFFFFFh
 * 0000000140AB9F72: add     ebx, eax
 * 0000000140AB9F74: mov     rax, [r13+1A8h]
 * 0000000140AB9F7B: lea     rdx, [rbp+0B30h+var_248]
 * 0000000140AB9F82: lea     rcx, [rbp+0B30h+var_A74]
 * 0000000140AB9F89: call    j__guard_dispatch_icall_nop
 * 0000000140AB9F8E: test    eax, eax
 * 0000000140AB9F90: jns     short loc_140AB9F69
 * 0000000140AB9F92: jmp     short loc_140AB9FAD
 * 0000000140AB9F94: mov     rax, [r13+190h]
 * 0000000140AB9F9B: lea     rcx, [rbp+0B30h+var_6D0]
 * 0000000140AB9FA2: mov     edx, [rbp+0B30h+var_A74]
 * 0000000140AB9FA8: call    j__guard_dispatch_icall_nop
 * 0000000140AB9FAD: mov     rax, [r13+1C0h]
 * 0000000140AB9FB4: lea     rdx, [rbp+0B30h+var_268]
 * 0000000140AB9FBB: lea     rcx, [rbp+0B30h+var_6D0]
 * 0000000140AB9FC2: call    j__guard_dispatch_icall_nop
 * 0000000140AB9FC7: mov     rax, [r13+0F0h]
 * 0000000140AB9FCE: mov     rcx, r15
 * 0000000140AB9FD1: call    j__guard_dispatch_icall_nop
 * 0000000140AB9FD6: xor     eax, eax
 * 0000000140AB9FD8: mov     [rbp+0B30h+var_B28], r12d
 * 0000000140AB9FDC: mov     r14d, 0FFFFFFFFh
 * 0000000140AB9FE2: jmp     loc_140AB9DFC
 * 0000000140AB9FE7: xor     eax, eax
 * 0000000140AB9FE9: mov     r11d, 1
 * 0000000140AB9FEF: cmp     ecx, [rsi+7D4h]
 * 0000000140AB9FF5: jnz     short loc_140ABA039
 * 0000000140AB9FF7: add     [rsi+7F8h], r11d
 * 0000000140AB9FFE: mov     ecx, eax
 * 0000000140ABA000: cmp     dword ptr [rsi+920h], 0Bh
 * 0000000140ABA007: mov     [rbp+0B30h+var_B50], eax
 * 0000000140ABA00A: jnz     short loc_140ABA039
 * 0000000140ABA00C: mov     eax, [rsi+958h]
 * 0000000140ABA012: test    r11b, al
 * 0000000140ABA015: jnz     short loc_140ABA039
 * 0000000140ABA017: mov     r8d, 0FFFFFFFFh
 * 0000000140ABA01D: cmp     [rsi+938h], r8d
 * 0000000140ABA024: jnz     short loc_140ABA030
 * 0000000140ABA026: xor     eax, eax
 * 0000000140ABA028: mov     [rsi+938h], eax
 * 0000000140ABA02E: jmp     short loc_140ABA039
 * 0000000140ABA030: or      eax, r11d
 * 0000000140ABA033: mov     [rsi+958h], eax
 * 0000000140ABA039: mov     rax, [rsi+0A40h]
 * 0000000140ABA040: xor     r9d, r9d
 * 0000000140ABA043: test    rax, rax
 * 0000000140ABA046: mov     r8, rsi
 * 0000000140ABA049: cmovnz  r8, rax
 * 0000000140ABA04D: xor     eax, eax
 * 0000000140ABA04F: mov     r13d, [r8+7D0h]
 * 0000000140ABA056: add     r13, r8
 * 0000000140ABA059: mov     [rsp+0C30h+var_BE0], r13
 * 0000000140ABA05E: cmp     dword ptr [rbp+0B30h+var_A70], eax
 * 0000000140ABA064: jz      short loc_140ABA084
 * 0000000140ABA066: cmp     dword ptr [rbp+0B30h+var_A70+4], ecx
 * 0000000140ABA06C: ja      short loc_140ABA084
 * 0000000140ABA06E: mov     r13d, [rbp+0B30h+var_A68]
 * 0000000140ABA075: mov     r9d, dword ptr [rbp+0B30h+var_A70+4]
 * 0000000140ABA07C: add     r13, r8
 * 0000000140ABA07F: mov     [rsp+0C30h+var_BE0], r13
 * 0000000140ABA084: cmp     r9d, ecx
 * 0000000140ABA087: jz      loc_140ABA1B9
 * 0000000140ABA08D: mov     ebx, 2
 * 0000000140ABA092: mov     r10d, ecx
 * 0000000140ABA095: sub     r10d, r9d
 * 0000000140ABA098: mov     rsi, 0AAAAAAAAAAAAAAABh
 * 0000000140ABA0A2: mov     r9d, ecx
 * 0000000140ABA0A5: lea     r14d, [rbx+0Ah]
 * 0000000140ABA0A9: mov     ecx, [r13+0]
 * 0000000140ABA0AD: cmp     ecx, r14d
 * 0000000140ABA0B0: jg      short loc_140ABA0F5
 * 0000000140ABA0B2: jz      short loc_140ABA112
 * 0000000140ABA0B4: sub     ecx, 1
 * 0000000140ABA0B7: jz      short loc_140ABA112
 * 0000000140ABA0B9: sub     ecx, 6
 * 0000000140ABA0BC: jz      short loc_140ABA0E4
 * 0000000140ABA0BE: sub     ecx, 1
 * 0000000140ABA0C1: jz      short loc_140ABA0DA
 * 0000000140ABA0C3: cmp     ecx, ebx
 * 0000000140ABA0C5: jnz     loc_140ABA151
 * 0000000140ABA0CB: mov     eax, [r13+1Ch]
 * 0000000140ABA0CF: add     eax, 3
 * 0000000140ABA0D2: shl     eax, 4
 * 0000000140ABA0D5: jmp     loc_140ABA18F
 * 0000000140ABA0DA: movzx   eax, word ptr [r13+20h]
 * 0000000140ABA0DF: jmp     loc_140ABA189
 * 0000000140ABA0E4: mov     eax, [r13+18h]
 * 0000000140ABA0E8: add     eax, ebx
 * 0000000140ABA0EA: lea     eax, [rax+rax*2]
 * 0000000140ABA0ED: shl     eax, 3
 * 0000000140ABA0F0: jmp     loc_140ABA18F
 * 0000000140ABA0F5: cmp     ecx, 1Ch
 * 0000000140ABA0F8: jz      loc_140ABA184
 * 0000000140ABA0FE: cmp     ecx, 1Eh
 * 0000000140ABA101: jz      short loc_140ABA158
 * 0000000140ABA103: cmp     ecx, 20h ; ' '
 * 0000000140ABA106: jle     short loc_140ABA151
 * 0000000140ABA108: cmp     ecx, 22h ; '"'
 * 0000000140ABA10B: jle     short loc_140ABA129
 * 0000000140ABA10D: cmp     ecx, 2Bh ; '+'
 * 0000000140ABA110: jnz     short loc_140ABA151
 * 0000000140ABA112: mov     ecx, [r13+10h]
 * 0000000140ABA116: mov     rax, rsi
 * 0000000140ABA119: mul     rcx
 * 0000000140ABA11C: shr     rdx, 3
 * 0000000140ABA120: lea     eax, ds:30h[rdx*4]
 * 0000000140ABA127: jmp     short loc_140ABA18F
 * 0000000140ABA129: mov     ecx, [r13+20h]
 * 0000000140ABA12D: mov     edx, [r13+28h]
 * 0000000140ABA131: and     ecx, 0FFFh
 * 0000000140ABA137: add     rdx, 0FFFh
 * 0000000140ABA13E: add     rdx, rcx
 * 0000000140ABA141: shr     rdx, 0Ch
 * 0000000140ABA145: lea     eax, [rdx+rdx*4]
 * 0000000140ABA148: lea     eax, ds:30h[rax*4]
 * 0000000140ABA14F: jmp     short loc_140ABA18F
 * 0000000140ABA151: mov     eax, 30h ; '0'
 * 0000000140ABA156: jmp     short loc_140ABA18F
 * 0000000140ABA158: mov     eax, [r13+24h]
 * 0000000140ABA15C: lea     ecx, [rax-1]
 * 0000000140ABA15F: neg     eax
 * 0000000140ABA161: sbb     eax, eax
 * 0000000140ABA163: and     ecx, eax
 * 0000000140ABA165: mov     rax, rsi
 * 0000000140ABA168: mul     rcx
 * 0000000140ABA16B: movzx   eax, word ptr [r13+28h]
 * 0000000140ABA170: shr     rdx, 3
 * 0000000140ABA174: add     edx, 7
 * 0000000140ABA177: and     edx, 0FFFFFFF8h
 * 0000000140ABA17A: add     eax, ebx
 * 0000000140ABA17C: lea     eax, [rax+rax*2]
 * 0000000140ABA17F: lea     eax, [rdx+rax*8]
 * 0000000140ABA182: jmp     short loc_140ABA18F
 * 0000000140ABA184: movzx   eax, word ptr [r13+28h]
 * 0000000140ABA189: add     eax, 37h ; '7'
 * 0000000140ABA18C: and     eax, 0FFFFFFF8h
 * 0000000140ABA18F: add     r13, rax
 * 0000000140ABA192: sub     r10, r11
 * 0000000140ABA195: jnz     loc_140ABA0A9
 * 0000000140ABA19B: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABA1A0: lea     edx, [r10+19h]
 * 0000000140ABA1A4: mov     r12, [rbp+0B30h+var_B78]
 * 0000000140ABA1A8: mov     rbx, [rbp+0B30h+var_B68]
 * 0000000140ABA1AC: mov     r14, [rbp+0B30h+var_B98]
 * 0000000140ABA1B0: mov     r15d, [rbp+0B30h+var_BAC]
 * 0000000140ABA1B4: mov     [rsp+0C30h+var_BE0], r13
 * 0000000140ABA1B9: mov     eax, r13d
 * 0000000140ABA1BC: mov     dword ptr [rbp+0B30h+var_A70], r11d
 * 0000000140ABA1C3: sub     eax, r8d
 * 0000000140ABA1C6: mov     dword ptr [rbp+0B30h+var_A70+4], r9d
 * 0000000140ABA1CD: mov     [rbp+0B30h+var_A68], eax
 * 0000000140ABA1D3: mov     r10d, [r13+0]
 * 0000000140ABA1D7: mov     dword ptr [rbp+0B30h+arg_8], r10d
 * 0000000140ABA1DE: cmp     r10d, 1Ch
 * 0000000140ABA1E2: jg      loc_140ABFC7F
 * 0000000140ABA1E8: jz      loc_140ABF2C8
 * 0000000140ABA1EE: mov     r8d, 0Ch
 * 0000000140ABA1F4: cmp     r10d, r8d
 * 0000000140ABA1F7: jg      loc_140ABBABB
 * 0000000140ABA1FD: jz      loc_140ABB7AE
 * 0000000140ABA203: xor     eax, eax
 * 0000000140ABA205: mov     ecx, r10d
 * 0000000140ABA208: test    r10d, r10d
 * 0000000140ABA20B: jz      loc_140ABB547
 * 0000000140ABA211: sub     ecx, 1
 * 0000000140ABA214: jz      loc_140AC3831
 * 0000000140ABA21A: sub     ecx, 3
 * 0000000140ABA21D: jz      loc_140ABB2AE
 * 0000000140ABA223: sub     ecx, 1
 * 0000000140ABA226: jz      loc_140ABAF7E
 * 0000000140ABA22C: lea     r14d, [r8-0Ah]
 * 0000000140ABA230: sub     ecx, r14d
 * 0000000140ABA233: jz      loc_140ABAE13
 * 0000000140ABA239: sub     ecx, 1
 * 0000000140ABA23C: jz      loc_140ABA9BE
 * 0000000140ABA242: sub     ecx, r14d
 * 0000000140ABA245: jz      loc_140ABA64C
 * 0000000140ABA24B: cmp     ecx, 1
 * 0000000140ABA24E: jnz     loc_140AC4782
 * 0000000140ABA254: cmp     [rsi+948h], rax
 * 0000000140ABA25B: jnz     short loc_140ABA26E
 * 0000000140ABA25D: mov     [rsi+7ECh], eax
 * 0000000140ABA263: mov     r12d, 1
 * 0000000140ABA269: jmp     loc_140ABA35D
 * 0000000140ABA26E: cmp     [rsi+7ECh], eax
 * 0000000140ABA274: jnz     loc_140ABA3B8
 * 0000000140ABA27A: mov     eax, [rsi+95Ch]
 * 0000000140ABA280: lea     ecx, ds:0[rax*8]
 * 0000000140ABA287: xor     ecx, eax
 * 0000000140ABA289: and     ecx, 20h
 * 0000000140ABA28C: xor     ecx, eax
 * 0000000140ABA28E: mov     [rsi+95Ch], ecx
 * 0000000140ABA294: test    cl, 4
 * 0000000140ABA297: jz      loc_140ABA3D4
 * 0000000140ABA29D: mov     ecx, [r13+8]
 * 0000000140ABA2A1: xor     eax, eax
 * 0000000140ABA2A3: mov     r14d, [r13+10h]
 * 0000000140ABA2A7: and     ecx, 0FFFh
 * 0000000140ABA2AD: mov     rbx, [r13+8]
 * 0000000140ABA2B1: add     r14, 0FFFh
 * 0000000140ABA2B8: add     r14, rcx
 * 0000000140ABA2BB: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140ABA2C2: shr     r14, 0Ch
 * 0000000140ABA2C6: lea     r12d, [rax+1]
 * 0000000140ABA2CA: test    r14, r14
 * 0000000140ABA2CD: jz      loc_140ABA35D
 * 0000000140ABA2D3: xor     edi, edi
 * 0000000140ABA2D5: mov     rax, [rsi+2A0h]
 * 0000000140ABA2DC: mov     rcx, rbx
 * 0000000140ABA2DF: sub     r14, r12
 * 0000000140ABA2E2: call    j__guard_dispatch_icall_nop
 * 0000000140ABA2E7: test    al, al
 * 0000000140ABA2E9: jz      short loc_140ABA33E
 * 0000000140ABA2EB: cmp     [rsi+8C0h], edi
 * 0000000140ABA2F1: jnz     short loc_140ABA33E
 * 0000000140ABA2F3: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABA2FD: xor     edx, edx
 * 0000000140ABA2FF: add     rax, rsi
 * 0000000140ABA302: mov     rcx, rsi
 * 0000000140ABA305: mov     [rsi+8C8h], rax
 * 0000000140ABA30C: mov     rax, 0B3B74BDEE4453415h
 * 0000000140ABA316: add     rax, r13
 * 0000000140ABA319: mov     [rsi+8D0h], rax
 * 0000000140ABA320: movsxd  rax, dword ptr [r13+0]
 * 0000000140ABA324: mov     [rsi+8D8h], rax
 * 0000000140ABA32B: mov     [rsi+8E0h], rbx
 * 0000000140ABA332: mov     [rsi+8C0h], r12d
 * 0000000140ABA339: call    sub_140AD049C
 * 0000000140ABA33E: add     dword ptr [rsi+7F0h], 100h
 * 0000000140ABA348: add     rbx, 1000h
 * 0000000140ABA34F: test    r14, r14
 * 0000000140ABA352: jnz     short loc_140ABA2D5
 * 0000000140ABA354: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ABA35B: xor     eax, eax
 * 0000000140ABA35D: mov     r14d, 8000h
 * 0000000140ABA363: mov     ecx, [rbp+0B30h+var_B50]
 * 0000000140ABA366: cmp     [rsi+7ECh], eax
 * 0000000140ABA36C: jz      short loc_140ABA375
 * 0000000140ABA36E: mov     edx, 0FFFFFFFFh
 * 0000000140ABA373: add     ecx, edx
 * 0000000140ABA375: add     ecx, r12d
 * 0000000140ABA378: mov     [rbp+0B30h+var_B50], ecx
 * 0000000140ABA37B: cmp     [rsi+8C0h], eax
 * 0000000140ABA381: jnz     loc_140AC56A3
 * 0000000140ABA387: lea     r12, [rsi+7F4h]
 * 0000000140ABA38E: mov     eax, [r12]
 * 0000000140ABA392: mov     [rbp+0B30h+var_B78], r12
 * 0000000140ABA396: cmp     [rsi+7F0h], eax
 * 0000000140ABA39C: jge     loc_140AC569B
 * 0000000140ABA3A2: mov     rbx, [rbp+0B30h+var_B68]
 * 0000000140ABA3A6: mov     edx, 19h
 * 0000000140ABA3AB: mov     r14, [rbp+0B30h+var_B98]
 * 0000000140ABA3AF: mov     r15d, [rbp+0B30h+var_BAC]
 * 0000000140ABA3B3: jmp     loc_140AB9E78
 * 0000000140ABA3B8: mov     ecx, [rsi+95Ch]
 * 0000000140ABA3BE: mov     eax, ecx
 * 0000000140ABA3C0: shr     eax, 3
 * 0000000140ABA3C3: xor     eax, ecx
 * 0000000140ABA3C5: test    al, 4
 * 0000000140ABA3C7: jz      loc_140ABA294
 * 0000000140ABA3CD: xor     eax, eax
 * 0000000140ABA3CF: jmp     loc_140ABA25D
 * 0000000140ABA3D4: mov     r14, [r13+8]
 * 0000000140ABA3D8: mov     r8d, [r13+10h]
 * 0000000140ABA3DC: mov     r9, r14
 * 0000000140ABA3DF: add     [rsi+7F0h], r8d
 * 0000000140ABA3E6: mov     rax, r14
 * 0000000140ABA3E9: mov     r11d, [rsi+7DCh]
 * 0000000140ABA3F0: mov     r15, [rsi+7E0h]
 * 0000000140ABA3F7: lea     rcx, [r14+r8]
 * 0000000140ABA3FB: cmp     r14, rcx
 * 0000000140ABA3FE: jnb     short loc_140ABA410
 * 0000000140ABA400: mov     edx, 40h ; '@'
 * 0000000140ABA405: prefetchnta byte ptr [rax]
 * 0000000140ABA408: add     rax, rdx
 * 0000000140ABA40B: cmp     rax, rcx
 * 0000000140ABA40E: jb      short loc_140ABA405
 * 0000000140ABA410: mov     r10d, r8d
 * 0000000140ABA413: mov     rbx, r15
 * 0000000140ABA416: shr     r10d, 7
 * 0000000140ABA41A: mov     r12d, 1
 * 0000000140ABA420: test    r10d, r10d
 * 0000000140ABA423: jz      short loc_140ABA490
 * 0000000140ABA425: mov     rsi, 7010008004002001h
 * 0000000140ABA42F: mov     edx, 8
 * 0000000140ABA434: mov     rax, [r9]
 * 0000000140ABA437: mov     ecx, r11d
 * 0000000140ABA43A: xor     rax, rbx
 * 0000000140ABA43D: mov     rbx, [r9+8]
 * 0000000140ABA441: rol     rax, cl
 * 0000000140ABA444: add     r9, 10h
 * 0000000140ABA448: xor     rbx, rax
 * 0000000140ABA44B: rol     rbx, cl
 * 0000000140ABA44E: sub     rdx, r12
 * 0000000140ABA451: jnz     short loc_140ABA434
 * 0000000140ABA453: mov     rcx, r9
 * 0000000140ABA456: sub     rcx, r14
 * 0000000140ABA459: xor     rcx, r15
 * 0000000140ABA45C: mov     rax, rcx
 * 0000000140ABA45F: rol     rax, 11h
 * 0000000140ABA463: xor     rcx, rax
 * 0000000140ABA466: mov     rax, rsi
 * 0000000140ABA469: mul     rcx
 * 0000000140ABA46C: xor     r11d, eax
 * 0000000140ABA46F: mov     [rbp+0B30h+var_380], rdx
 * 0000000140ABA476: xor     r11d, edx
 * 0000000140ABA479: mov     eax, 0FFFFFFFFh
 * 0000000140ABA47E: and     r11d, 3Fh
 * 0000000140ABA482: cmovz   r11d, r12d
 * 0000000140ABA486: add     r10d, eax
 * 0000000140ABA489: jnz     short loc_140ABA42F
 * 0000000140ABA48B: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABA490: and     r8d, 7Fh
 * 0000000140ABA494: cmp     r8d, 8
 * 0000000140ABA498: jb      short loc_140ABA4B7
 * 0000000140ABA49A: mov     edx, r8d
 * 0000000140ABA49D: shr     rdx, 3
 * 0000000140ABA4A1: xor     rbx, [r9]
 * 0000000140ABA4A4: mov     ecx, r11d
 * 0000000140ABA4A7: rol     rbx, cl
 * 0000000140ABA4AA: add     r9, 8
 * 0000000140ABA4AE: add     r8d, 0FFFFFFF8h
 * 0000000140ABA4B2: sub     rdx, r12
 * 0000000140ABA4B5: jnz     short loc_140ABA4A1
 * 0000000140ABA4B7: test    r8d, r8d
 * 0000000140ABA4BA: jz      short loc_140ABA4DB
 * 0000000140ABA4BC: mov     esi, 0FFFFFFFFh
 * 0000000140ABA4C1: movzx   eax, byte ptr [r9]
 * 0000000140ABA4C5: mov     ecx, r11d
 * 0000000140ABA4C8: xor     rbx, rax
 * 0000000140ABA4CB: add     r9, r12
 * 0000000140ABA4CE: rol     rbx, cl
 * 0000000140ABA4D1: add     r8d, esi
 * 0000000140ABA4D4: jnz     short loc_140ABA4C1
 * 0000000140ABA4D6: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABA4DB: mov     rax, rbx
 * 0000000140ABA4DE: jmp     short loc_140ABA4E2
 * 0000000140ABA4E0: xor     ebx, eax
 * 0000000140ABA4E2: shr     rax, 1Fh
 * 0000000140ABA4E6: test    rax, rax
 * 0000000140ABA4E9: jnz     short loc_140ABA4E0
 * 0000000140ABA4EB: mov     r8d, [r13+14h]
 * 0000000140ABA4EF: btr     ebx, 1Fh
 * 0000000140ABA4F3: cmp     ebx, r8d
 * 0000000140ABA4F6: jz      loc_140ABA35B
 * 0000000140ABA4FC: mov     ecx, [r13+10h]
 * 0000000140ABA500: mov     rdx, [r13+8]
 * 0000000140ABA504: test    rcx, rcx
 * 0000000140ABA507: jz      loc_140ABA5C3
 * 0000000140ABA50D: mov     eax, [rsi+95Ch]
 * 0000000140ABA513: mov     r9d, 40h ; '@'
 * 0000000140ABA519: test    r9b, al
 * 0000000140ABA51C: jz      loc_140ABA5C3
 * 0000000140ABA522: mov     r12, cr8
 * 0000000140ABA526: lea     eax, [r9-3Eh]
 * 0000000140ABA52A: mov     cr8, rax
 * 0000000140ABA52E: mov     r14, rdx
 * 0000000140ABA531: lea     rax, [rcx-1]
 * 0000000140ABA535: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140ABA53C: add     rax, rdx
 * 0000000140ABA53F: or      rax, 0FFFh
 * 0000000140ABA545: mov     [rbp+0B30h+arg_8], rax
 * 0000000140ABA54C: lea     r13, [r14-1]
 * 0000000140ABA550: movzx   r15d, r12b
 * 0000000140ABA554: mov     rax, [rsi+458h]
 * 0000000140ABA55B: xor     edx, edx
 * 0000000140ABA55D: mov     rcx, r14
 * 0000000140ABA560: call    j__guard_dispatch_icall_nop
 * 0000000140ABA565: cmp     eax, 0C000022Dh
 * 0000000140ABA56A: jnz     short loc_140ABA590
 * 0000000140ABA56C: mov     eax, 1
 * 0000000140ABA571: cmp     r12b, al
 * 0000000140ABA574: ja      short loc_140ABA594
 * 0000000140ABA576: movzx   r15d, r12b
 * 0000000140ABA57A: mov     cr8, r15
 * 0000000140ABA57E: mov     al, [r14]
 * 0000000140ABA581: mov     rax, cr8
 * 0000000140ABA585: mov     eax, 2
 * 0000000140ABA58A: mov     cr8, rax
 * 0000000140ABA58E: jmp     short loc_140ABA554
 * 0000000140ABA590: test    eax, eax
 * 0000000140ABA592: js      short loc_140ABA5B6
 * 0000000140ABA594: add     r14, 1000h
 * 0000000140ABA59B: add     r13, 1000h
 * 0000000140ABA5A2: cmp     r13, [rbp+0B30h+arg_8]
 * 0000000140ABA5A9: jnz     short loc_140ABA550
 * 0000000140ABA5AB: mov     cr8, r15
 * 0000000140ABA5AF: xor     eax, eax
 * 0000000140ABA5B1: jmp     loc_140ABA263
 * 0000000140ABA5B6: mov     cr8, r15
 * 0000000140ABA5BA: mov     r13, [rsp+0C30h+var_BE0]
 * 0000000140ABA5BF: mov     r8d, [r13+14h]
 * 0000000140ABA5C3: xor     eax, eax
 * 0000000140ABA5C5: cmp     [rsi+8C0h], eax
 * 0000000140ABA5CB: jnz     loc_140ABA263
 * 0000000140ABA5D1: mov     eax, ebx
 * 0000000140ABA5D3: mov     ecx, r8d
 * 0000000140ABA5D6: xor     rcx, rax
 * 0000000140ABA5D9: mov     rax, [rsi+568h]
 * 0000000140ABA5E0: mov     [rax+18h], rcx
 * 0000000140ABA5E4: mov     rcx, [r13+8]
 * 0000000140ABA5E8: mov     r12d, 1
 * 0000000140ABA5EE: xor     eax, eax
 * 0000000140ABA5F0: cmp     [rsi+8C0h], eax
 * 0000000140ABA5F6: jnz     loc_140ABA35D
 * 0000000140ABA5FC: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABA606: add     rax, rsi
 * 0000000140ABA609: mov     [rsi+8C8h], rax
 * 0000000140ABA610: mov     rax, 0B3B74BDEE4453415h
 * 0000000140ABA61A: add     rax, r13
 * 0000000140ABA61D: mov     [rsi+8D0h], rax
 * 0000000140ABA624: movsxd  rax, dword ptr [r13+0]
 * 0000000140ABA628: mov     [rsi+8D8h], rax
 * 0000000140ABA62F: mov     [rsi+8E0h], rcx
 * 0000000140ABA636: xor     edx, edx
 * 0000000140ABA638: mov     rcx, rsi
 * 0000000140ABA63B: mov     [rsi+8C0h], r12d
 * 0000000140ABA642: call    sub_140AD049C
 * 0000000140ABA647: jmp     loc_140ABA35B
 * 0000000140ABA64C: cmp     [r13+18h], eax
 * 0000000140ABA650: jz      short loc_140ABA6A8
 * 0000000140ABA652: cmp     [rsi+948h], rax
 * 0000000140ABA659: jz      short loc_140ABA699
 * 0000000140ABA65B: mov     ecx, [rsi+95Ch]
 * 0000000140ABA661: test    cl, 4
 * 0000000140ABA664: jnz     short loc_140ABA699
 * 0000000140ABA666: lea     rax, [rsi+7ECh]
 * 0000000140ABA66D: xor     r8d, r8d
 * 0000000140ABA670: mov     edx, [rax]
 * 0000000140ABA672: test    edx, edx
 * 0000000140ABA674: jnz     short loc_140ABA68C
 * 0000000140ABA676: lea     eax, ds:0[rcx*8]
 * 0000000140ABA67D: xor     eax, ecx
 * 0000000140ABA67F: and     eax, 20h
 * 0000000140ABA682: xor     eax, ecx
 * 0000000140ABA684: mov     [rsi+95Ch], eax
 * 0000000140ABA68A: jmp     short loc_140ABA6AE
 * 0000000140ABA68C: test    cl, 20h
 * 0000000140ABA68F: jz      short loc_140ABA6AE
 * 0000000140ABA691: mov     r14d, r8d
 * 0000000140ABA694: jmp     loc_140ABA9B6
 * 0000000140ABA699: mov     r14d, eax
 * 0000000140ABA69C: lea     rax, [rsi+7ECh]
 * 0000000140ABA6A3: jmp     loc_140ABA9B6
 * 0000000140ABA6A8: mov     edx, [rsi+7ECh]
 * 0000000140ABA6AE: mov     r14d, edx
 * 0000000140ABA6B1: lea     rcx, [r13+30h]
 * 0000000140ABA6B5: mov     edx, [r13+1Ch]
 * 0000000140ABA6B9: lea     rax, [rsi+7ECh]
 * 0000000140ABA6C0: shl     r14, 4
 * 0000000140ABA6C4: add     r14, rcx
 * 0000000140ABA6C7: shl     rdx, 4
 * 0000000140ABA6CB: add     rdx, rcx
 * 0000000140ABA6CE: mov     [rsp+0C30h+var_BB8], rax
 * 0000000140ABA6D3: mov     [rbp+0B30h+arg_8], rdx
 * 0000000140ABA6DA: mov     [rsp+0C30h+var_BD8], r14
 * 0000000140ABA6DF: xor     eax, eax
 * 0000000140ABA6E1: cmp     [r14], eax
 * 0000000140ABA6E4: jl      loc_140ABA96B
 * 0000000140ABA6EA: mov     rdi, [r14+8]
 * 0000000140ABA6EE: mov     r8d, [r14+4]
 * 0000000140ABA6F2: mov     r9, rdi
 * 0000000140ABA6F5: add     [rsi+7F0h], r8d
 * 0000000140ABA6FC: mov     rax, rdi
 * 0000000140ABA6FF: mov     r11d, [rsi+7DCh]
 * 0000000140ABA706: mov     r12d, r8d
 * 0000000140ABA709: mov     r15, [rsi+7E0h]
 * 0000000140ABA710: lea     rcx, [r8+rdi]
 * 0000000140ABA714: cmp     rdi, rcx
 * 0000000140ABA717: jnb     short loc_140ABA72A
 * 0000000140ABA719: mov     r10d, 40h ; '@'
 * 0000000140ABA71F: prefetchnta byte ptr [rax]
 * 0000000140ABA722: add     rax, r10
 * 0000000140ABA725: cmp     rax, rcx
 * 0000000140ABA728: jb      short loc_140ABA71F
 * 0000000140ABA72A: mov     r10d, r8d
 * 0000000140ABA72D: mov     rbx, r15
 * 0000000140ABA730: shr     r10d, 7
 * 0000000140ABA734: test    r10d, r10d
 * 0000000140ABA737: jz      short loc_140ABA7B2
 * 0000000140ABA739: mov     esi, 1
 * 0000000140ABA73E: mov     r12d, 0FFFFFFFFh
 * 0000000140ABA744: mov     r14, 7010008004002001h
 * 0000000140ABA74E: mov     eax, 8
 * 0000000140ABA753: xor     rbx, [r9]
 * 0000000140ABA756: mov     ecx, r11d
 * 0000000140ABA759: rol     rbx, cl
 * 0000000140ABA75C: xor     rbx, [r9+8]
 * 0000000140ABA760: add     r9, 10h
 * 0000000140ABA764: rol     rbx, cl
 * 0000000140ABA767: sub     rax, rsi
 * 0000000140ABA76A: jnz     short loc_140ABA753
 * 0000000140ABA76C: mov     rcx, r9
 * 0000000140ABA76F: sub     rcx, rdi
 * 0000000140ABA772: xor     rcx, r15
 * 0000000140ABA775: mov     rax, rcx
 * 0000000140ABA778: rol     rax, 11h
 * 0000000140ABA77C: xor     rcx, rax
 * 0000000140ABA77F: mov     rax, r14
 * 0000000140ABA782: mul     rcx
 * 0000000140ABA785: xor     eax, edx
 * 0000000140ABA787: mov     [rbp+0B30h+var_378], rdx
 * 0000000140ABA78E: xor     r11d, eax
 * 0000000140ABA791: and     r11d, 3Fh
 * 0000000140ABA795: cmovz   r11d, esi
 * 0000000140ABA799: add     r10d, r12d
 * 0000000140ABA79C: jnz     short loc_140ABA74E
 * 0000000140ABA79E: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABA7A3: mov     r12, r8
 * 0000000140ABA7A6: mov     r14, [rsp+0C30h+var_BD8]
 * 0000000140ABA7AB: mov     rdx, [rbp+0B30h+arg_8]
 * 0000000140ABA7B2: and     r8d, 7Fh
 * 0000000140ABA7B6: mov     r10d, 1
 * 0000000140ABA7BC: cmp     r8d, 8
 * 0000000140ABA7C0: jb      short loc_140ABA7DF
 * 0000000140ABA7C2: mov     eax, r8d
 * 0000000140ABA7C5: shr     rax, 3
 * 0000000140ABA7C9: xor     rbx, [r9]
 * 0000000140ABA7CC: mov     ecx, r11d
 * 0000000140ABA7CF: rol     rbx, cl
 * 0000000140ABA7D2: add     r9, 8
 * 0000000140ABA7D6: add     r8d, 0FFFFFFF8h
 * 0000000140ABA7DA: sub     rax, r10
 * 0000000140ABA7DD: jnz     short loc_140ABA7C9
 * 0000000140ABA7DF: test    r8d, r8d
 * 0000000140ABA7E2: jz      short loc_140ABA803
 * 0000000140ABA7E4: mov     esi, 0FFFFFFFFh
 * 0000000140ABA7E9: movzx   eax, byte ptr [r9]
 * 0000000140ABA7ED: mov     ecx, r11d
 * 0000000140ABA7F0: xor     rbx, rax
 * 0000000140ABA7F3: add     r9, r10
 * 0000000140ABA7F6: rol     rbx, cl
 * 0000000140ABA7F9: add     r8d, esi
 * 0000000140ABA7FC: jnz     short loc_140ABA7E9
 * 0000000140ABA7FE: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABA803: mov     rax, rbx
 * 0000000140ABA806: jmp     short loc_140ABA80A
 * 0000000140ABA808: xor     ebx, eax
 * 0000000140ABA80A: shr     rax, 1Fh
 * 0000000140ABA80E: test    rax, rax
 * 0000000140ABA811: jnz     short loc_140ABA808
 * 0000000140ABA813: mov     ecx, [r14]
 * 0000000140ABA816: btr     ebx, 1Fh
 * 0000000140ABA81A: mov     eax, ecx
 * 0000000140ABA81C: btr     eax, 1Fh
 * 0000000140ABA820: cmp     ebx, eax
 * 0000000140ABA822: jz      loc_140ABA967
 * 0000000140ABA828: test    r12, r12
 * 0000000140ABA82B: jz      loc_140ABA8E7
 * 0000000140ABA831: mov     eax, [rsi+95Ch]
 * 0000000140ABA837: mov     edx, 40h ; '@'
 * 0000000140ABA83C: test    dl, al
 * 0000000140ABA83E: jz      loc_140ABA8E7
 * 0000000140ABA844: mov     r13, cr8
 * 0000000140ABA848: lea     eax, [rdx-3Eh]
 * 0000000140ABA84B: mov     cr8, rax
 * 0000000140ABA84F: mov     r15, rdi
 * 0000000140ABA852: lea     rax, [rdi-1]
 * 0000000140ABA856: and     r15, 0FFFFFFFFFFFFF000h
 * 0000000140ABA85D: add     rax, r12
 * 0000000140ABA860: or      rax, 0FFFh
 * 0000000140ABA866: mov     [rbp+0B30h+var_B80], rax
 * 0000000140ABA86A: lea     rax, [r15-1]
 * 0000000140ABA86E: mov     [rsp+0C30h+var_BD8], rax
 * 0000000140ABA873: movzx   r12d, r13b
 * 0000000140ABA877: mov     rax, [rsi+458h]
 * 0000000140ABA87E: xor     edx, edx
 * 0000000140ABA880: mov     rcx, r15
 * 0000000140ABA883: call    j__guard_dispatch_icall_nop
 * 0000000140ABA888: cmp     eax, 0C000022Dh
 * 0000000140ABA88D: jnz     short loc_140ABA8B3
 * 0000000140ABA88F: mov     eax, 1
 * 0000000140ABA894: cmp     r13b, al
 * 0000000140ABA897: ja      short loc_140ABA8B7
 * 0000000140ABA899: movzx   r12d, r13b
 * 0000000140ABA89D: mov     cr8, r12
 * 0000000140ABA8A1: mov     al, [r15]
 * 0000000140ABA8A4: mov     rax, cr8
 * 0000000140ABA8A8: mov     eax, 2
 * 0000000140ABA8AD: mov     cr8, rax
 * 0000000140ABA8B1: jmp     short loc_140ABA877
 * 0000000140ABA8B3: test    eax, eax
 * 0000000140ABA8B5: js      short loc_140ABA8DB
 * 0000000140ABA8B7: mov     rax, [rsp+0C30h+var_BD8]
 * 0000000140ABA8BC: mov     ecx, 1000h
 * 0000000140ABA8C1: add     rax, rcx
 * 0000000140ABA8C4: add     r15, rcx
 * 0000000140ABA8C7: mov     [rsp+0C30h+var_BD8], rax
 * 0000000140ABA8CC: cmp     rax, [rbp+0B30h+var_B80]
 * 0000000140ABA8D0: jnz     short loc_140ABA873
 * 0000000140ABA8D2: mov     cr8, r12
 * 0000000140ABA8D6: jmp     loc_140ABA960
 * 0000000140ABA8DB: mov     cr8, r12
 * 0000000140ABA8DF: mov     ecx, [r14]
 * 0000000140ABA8E2: mov     r13, [rsp+0C30h+var_BE0]
 * 0000000140ABA8E7: mov     eax, ecx
 * 0000000140ABA8E9: xor     ecx, ecx
 * 0000000140ABA8EB: btr     eax, 1Fh
 * 0000000140ABA8EF: cmp     [rsi+8C0h], ecx
 * 0000000140ABA8F5: jnz     short loc_140ABA960
 * 0000000140ABA8F7: mov     ecx, ebx
 * 0000000140ABA8F9: xor     rcx, rax
 * 0000000140ABA8FC: mov     rax, [rsi+568h]
 * 0000000140ABA903: mov     [rax+18h], rcx
 * 0000000140ABA907: xor     eax, eax
 * 0000000140ABA909: cmp     [rsi+8C0h], eax
 * 0000000140ABA90F: jnz     short loc_140ABA960
 * 0000000140ABA911: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABA91B: xor     edx, edx
 * 0000000140ABA91D: add     rax, rsi
 * 0000000140ABA920: mov     rcx, rsi
 * 0000000140ABA923: mov     [rsi+8C8h], rax
 * 0000000140ABA92A: mov     rax, 0B3B74BDEE4453415h
 * 0000000140ABA934: add     rax, r13
 * 0000000140ABA937: mov     [rsi+8D0h], rax
 * 0000000140ABA93E: movsxd  rax, dword ptr [r13+0]
 * 0000000140ABA942: mov     [rsi+8D8h], rax
 * 0000000140ABA949: mov     eax, 1
 * 0000000140ABA94E: mov     [rsi+8E0h], rdi
 * 0000000140ABA955: mov     [rsi+8C0h], eax
 * 0000000140ABA95B: call    sub_140AD049C
 * 0000000140ABA960: mov     rdx, [rbp+0B30h+arg_8]
 * 0000000140ABA967: mov     r12, [rbp+0B30h+var_B78]
 * 0000000140ABA96B: add     r14, 10h
 * 0000000140ABA96F: mov     [rsp+0C30h+var_BD8], r14
 * 0000000140ABA974: cmp     r14, rdx
 * 0000000140ABA977: jnb     short loc_140ABA991
 * 0000000140ABA979: mov     eax, [r12]
 * 0000000140ABA97D: mov     r13, [rsp+0C30h+var_BE0]
 * 0000000140ABA982: cmp     [rsi+7F0h], eax
 * 0000000140ABA988: jl      loc_140ABA6DF
 * 0000000140ABA98E: cmp     r14, rdx
 * 0000000140ABA991: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ABA998: jnz     short loc_140ABA9A1
 * 0000000140ABA99A: xor     eax, eax
 * 0000000140ABA99C: mov     r14d, eax
 * 0000000140ABA99F: jmp     short loc_140ABA9B1
 * 0000000140ABA9A1: mov     rax, [rsp+0C30h+var_BE0]
 * 0000000140ABA9A6: add     rax, 30h ; '0'
 * 0000000140ABA9AA: sub     r14, rax
 * 0000000140ABA9AD: sar     r14, 4
 * 0000000140ABA9B1: mov     rax, [rsp+0C30h+var_BB8]
 * 0000000140ABA9B6: mov     [rax], r14d
 * 0000000140ABA9B9: jmp     loc_140ABA5AF
 * 0000000140ABA9BE: mov     rbx, [r13+18h]
 * 0000000140ABA9C2: mov     r14, 0B3B74BDEE4453415h
 * 0000000140ABA9CC: mov     rcx, [rsi+6C0h]
 * 0000000140ABA9D3: mov     r15, 0A3A03F5891C8B4E8h
 * 0000000140ABA9DD: mov     rax, [rsi+6F0h]
 * 0000000140ABA9E4: add     rcx, rbx
 * 0000000140ABA9E7: movzx   edx, word ptr [r13+22h]
 * 0000000140ABA9EC: cmp     [rcx+rax], dx
 * 0000000140ABA9F0: jz      short loc_140ABAA40
 * 0000000140ABA9F2: xor     eax, eax
 * 0000000140ABA9F4: cmp     [rsi+8C0h], eax
 * 0000000140ABA9FA: jnz     short loc_140ABAA40
 * 0000000140ABA9FC: lea     rax, [rsi+r15]
 * 0000000140ABAA00: xor     edx, edx
 * 0000000140ABAA02: mov     [rsi+8C8h], rax
 * 0000000140ABAA09: mov     rcx, rsi
 * 0000000140ABAA0C: lea     rax, [r14+r13]
 * 0000000140ABAA10: mov     [rsi+8D0h], rax
 * 0000000140ABAA17: movsxd  rax, dword ptr [r13+0]
 * 0000000140ABAA1B: mov     [rsi+8D8h], rax
 * 0000000140ABAA22: mov     [rsi+8E0h], rbx
 * 0000000140ABAA29: mov     [rsi+8C0h], r11d
 * 0000000140ABAA30: call    sub_140AD049C
 * 0000000140ABAA35: movzx   edx, word ptr [r13+22h]
 * 0000000140ABAA3A: mov     r11d, 1
 * 0000000140ABAA40: test    [rsi+6F8h], dx
 * 0000000140ABAA47: jnz     short loc_140ABAA9B
 * 0000000140ABAA49: mov     rcx, [rsi+6C8h]
 * 0000000140ABAA50: add     rcx, rbx
 * 0000000140ABAA53: cmp     [rcx], rcx
 * 0000000140ABAA56: jz      short loc_140ABAA9B
 * 0000000140ABAA58: xor     eax, eax
 * 0000000140ABAA5A: cmp     [rsi+8C0h], eax
 * 0000000140ABAA60: jnz     short loc_140ABAA9B
 * 0000000140ABAA62: lea     rax, [rsi+r15]
 * 0000000140ABAA66: xor     edx, edx
 * 0000000140ABAA68: mov     [rsi+8C8h], rax
 * 0000000140ABAA6F: mov     rcx, rsi
 * 0000000140ABAA72: lea     rax, [r14+r13]
 * 0000000140ABAA76: mov     [rsi+8D0h], rax
 * 0000000140ABAA7D: movsxd  rax, dword ptr [r13+0]
 * 0000000140ABAA81: mov     [rsi+8D8h], rax
 * 0000000140ABAA88: mov     [rsi+8E0h], rbx
 * 0000000140ABAA8F: mov     [rsi+8C0h], r11d
 * 0000000140ABAA96: call    sub_140AD049C
 * 0000000140ABAA9B: mov     r11, [r13+8]
 * 0000000140ABAA9F: mov     r8d, [r13+10h]
 * 0000000140ABAAA3: mov     r9, r11
 * 0000000140ABAAA6: add     [rsi+7F0h], r8d
 * 0000000140ABAAAD: mov     rax, r11
 * 0000000140ABAAB0: mov     r14d, [rsi+7DCh]
 * 0000000140ABAAB7: mov     r15, [rsi+7E0h]
 * 0000000140ABAABE: lea     rcx, [r11+r8]
 * 0000000140ABAAC2: cmp     r11, rcx
 * 0000000140ABAAC5: jnb     short loc_140ABAAD7
 * 0000000140ABAAC7: mov     edx, 40h ; '@'
 * 0000000140ABAACC: prefetchnta byte ptr [rax]
 * 0000000140ABAACF: add     rax, rdx
 * 0000000140ABAAD2: cmp     rax, rcx
 * 0000000140ABAAD5: jb      short loc_140ABAACC
 * 0000000140ABAAD7: mov     r10d, r8d
 * 0000000140ABAADA: mov     rbx, r15
 * 0000000140ABAADD: shr     r10d, 7
 * 0000000140ABAAE1: mov     r12d, 1
 * 0000000140ABAAE7: mov     r13d, 0FFFFFFFFh
 * 0000000140ABAAED: test    r10d, r10d
 * 0000000140ABAAF0: jz      short loc_140ABAB57
 * 0000000140ABAAF2: mov     rsi, 7010008004002001h
 * 0000000140ABAAFC: mov     edx, 8
 * 0000000140ABAB01: mov     rax, [r9]
 * 0000000140ABAB04: mov     ecx, r14d
 * 0000000140ABAB07: xor     rax, rbx
 * 0000000140ABAB0A: mov     rbx, [r9+8]
 * 0000000140ABAB0E: rol     rax, cl
 * 0000000140ABAB11: add     r9, 10h
 * 0000000140ABAB15: xor     rbx, rax
 * 0000000140ABAB18: rol     rbx, cl
 * 0000000140ABAB1B: sub     rdx, r12
 * 0000000140ABAB1E: jnz     short loc_140ABAB01
 * 0000000140ABAB20: mov     rcx, r9
 * 0000000140ABAB23: sub     rcx, r11
 * 0000000140ABAB26: xor     rcx, r15
 * 0000000140ABAB29: mov     rax, rcx
 * 0000000140ABAB2C: rol     rax, 11h
 * 0000000140ABAB30: xor     rcx, rax
 * 0000000140ABAB33: mov     rax, rsi
 * 0000000140ABAB36: mul     rcx
 * 0000000140ABAB39: xor     eax, edx
 * 0000000140ABAB3B: mov     [rbp+0B30h+var_370], rdx
 * 0000000140ABAB42: xor     r14d, eax
 * 0000000140ABAB45: and     r14d, 3Fh
 * 0000000140ABAB49: cmovz   r14d, r12d
 * 0000000140ABAB4D: add     r10d, r13d
 * 0000000140ABAB50: jnz     short loc_140ABAAFC
 * 0000000140ABAB52: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABAB57: and     r8d, 7Fh
 * 0000000140ABAB5B: cmp     r8d, 8
 * 0000000140ABAB5F: jb      short loc_140ABAB7E
 * 0000000140ABAB61: mov     edx, r8d
 * 0000000140ABAB64: shr     rdx, 3
 * 0000000140ABAB68: xor     rbx, [r9]
 * 0000000140ABAB6B: mov     ecx, r14d
 * 0000000140ABAB6E: rol     rbx, cl
 * 0000000140ABAB71: add     r9, 8
 * 0000000140ABAB75: add     r8d, 0FFFFFFF8h
 * 0000000140ABAB79: sub     rdx, r12
 * 0000000140ABAB7C: jnz     short loc_140ABAB68
 * 0000000140ABAB7E: test    r8d, r8d
 * 0000000140ABAB81: jz      short loc_140ABAB98
 * 0000000140ABAB83: movzx   eax, byte ptr [r9]
 * 0000000140ABAB87: mov     ecx, r14d
 * 0000000140ABAB8A: xor     rbx, rax
 * 0000000140ABAB8D: add     r9, r12
 * 0000000140ABAB90: rol     rbx, cl
 * 0000000140ABAB93: add     r8d, r13d
 * 0000000140ABAB96: jnz     short loc_140ABAB83
 * 0000000140ABAB98: mov     rax, rbx
 * 0000000140ABAB9B: jmp     short loc_140ABAB9F
 * 0000000140ABAB9D: xor     ebx, eax
 * 0000000140ABAB9F: shr     rax, 1Fh
 * 0000000140ABABA3: test    rax, rax
 * 0000000140ABABA6: jnz     short loc_140ABAB9D
 * 0000000140ABABA8: mov     r14, [rsp+0C30h+var_BE0]
 * 0000000140ABABAD: btr     ebx, 1Fh
 * 0000000140ABABB1: mov     r13d, eax
 * 0000000140ABABB4: cmp     ebx, [r14+14h]
 * 0000000140ABABB8: jz      loc_140ABAC9C
 * 0000000140ABABBE: cmp     [r14], eax
 * 0000000140ABABC1: jnz     short loc_140ABABCB
 * 0000000140ABABC3: cmp     [r14+18h], eax
 * 0000000140ABABC7: cmovnz  r13d, r12d
 * 0000000140ABABCB: mov     ecx, [r14+10h]
 * 0000000140ABABCF: mov     rdx, [r14+8]
 * 0000000140ABABD3: test    rcx, rcx
 * 0000000140ABABD6: jz      loc_140ABAD8A
 * 0000000140ABABDC: mov     eax, [rsi+95Ch]
 * 0000000140ABABE2: mov     r8d, 40h ; '@'
 * 0000000140ABABE8: test    r8b, al
 * 0000000140ABABEB: jz      loc_140ABAD8A
 * 0000000140ABABF1: mov     r12, cr8
 * 0000000140ABABF5: lea     eax, [r8-3Eh]
 * 0000000140ABABF9: mov     cr8, rax
 * 0000000140ABABFD: mov     r14, rdx
 * 0000000140ABAC00: lea     rax, [rcx-1]
 * 0000000140ABAC04: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140ABAC0B: add     rax, rdx
 * 0000000140ABAC0E: or      rax, 0FFFh
 * 0000000140ABAC14: mov     [rsp+0C30h+var_BD8], rax
 * 0000000140ABAC19: lea     rax, [r14-1]
 * 0000000140ABAC1D: mov     [rbp+0B30h+arg_8], rax
 * 0000000140ABAC24: movzx   r15d, r12b
 * 0000000140ABAC28: mov     rax, [rsi+458h]
 * 0000000140ABAC2F: xor     edx, edx
 * 0000000140ABAC31: mov     rcx, r14
 * 0000000140ABAC34: call    j__guard_dispatch_icall_nop
 * 0000000140ABAC39: cmp     eax, 0C000022Dh
 * 0000000140ABAC3E: jnz     short loc_140ABAC6B
 * 0000000140ABAC40: test    r13d, r13d
 * 0000000140ABAC43: jnz     loc_140ABAD81
 * 0000000140ABAC49: lea     eax, [r13+1]
 * 0000000140ABAC4D: cmp     r12b, al
 * 0000000140ABAC50: ja      short loc_140ABAC73
 * 0000000140ABAC52: movzx   r15d, r12b
 * 0000000140ABAC56: mov     cr8, r15
 * 0000000140ABAC5A: mov     al, [r14]
 * 0000000140ABAC5D: mov     rax, cr8
 * 0000000140ABAC61: lea     eax, [r13+2]
 * 0000000140ABAC65: mov     cr8, rax
 * 0000000140ABAC69: jmp     short loc_140ABAC28
 * 0000000140ABAC6B: test    eax, eax
 * 0000000140ABAC6D: js      loc_140ABAD81
 * 0000000140ABAC73: mov     rax, [rbp+0B30h+arg_8]
 * 0000000140ABAC7A: mov     ecx, 1000h
 * 0000000140ABAC7F: add     rax, rcx
 * 0000000140ABAC82: add     r14, rcx
 * 0000000140ABAC85: mov     [rbp+0B30h+arg_8], rax
 * 0000000140ABAC8C: cmp     rax, [rsp+0C30h+var_BD8]
 * 0000000140ABAC91: jnz     short loc_140ABAC24
 * 0000000140ABAC93: mov     cr8, r15
 * 0000000140ABAC97: mov     r14, [rsp+0C30h+var_BE0]
 * 0000000140ABAC9C: mov     r15, 0A3A03F5891C8B4E8h
 * 0000000140ABACA6: mov     r12d, 1
 * 0000000140ABACAC: mov     rbx, 0B3B74BDEE4453415h
 * 0000000140ABACB6: lea     rax, [r14+30h]
 * 0000000140ABACBA: xor     r9d, r9d
 * 0000000140ABACBD: mov     [rbp+0B30h+var_7E0], rax
 * 0000000140ABACC4: lea     rcx, [rbp+0B30h+var_7E8]
 * 0000000140ABACCB: movzx   eax, word ptr [r14+20h]
 * 0000000140ABACD0: xor     r8d, r8d
 * 0000000140ABACD3: mov     [rbp+0B30h+var_7E8], ax
 * 0000000140ABACDA: xor     edx, edx
 * 0000000140ABACDC: mov     [rbp+0B30h+var_7E6], ax
 * 0000000140ABACE3: lea     rax, [rbp+0B30h+var_900]
 * 0000000140ABACEA: mov     [rsp+0C30h+var_BF8], rax
 * 0000000140ABACEF: xor     eax, eax
 * 0000000140ABACF1: mov     [rsp+0C30h+var_C00], rax
 * 0000000140ABACF6: mov     byte ptr [rsp+0C30h+var_C08], al
 * 0000000140ABACFA: mov     rax, [rsi+4E0h]
 * 0000000140ABAD01: mov     [rsp+0C30h+BugCheckParameter4], rax
 * 0000000140ABAD06: mov     rax, [rsi+1D8h]
 * 0000000140ABAD0D: call    j__guard_dispatch_icall_nop
 * 0000000140ABAD12: test    eax, eax
 * 0000000140ABAD14: js      loc_140ABA35B
 * 0000000140ABAD1A: mov     rcx, [rbp+0B30h+var_900]
 * 0000000140ABAD21: cmp     rcx, [r14+18h]
 * 0000000140ABAD25: jz      short loc_140ABAD70
 * 0000000140ABAD27: xor     eax, eax
 * 0000000140ABAD29: cmp     [rsi+8C0h], eax
 * 0000000140ABAD2F: jnz     short loc_140ABAD70
 * 0000000140ABAD31: lea     rax, [rsi+r15]
 * 0000000140ABAD35: xor     edx, edx
 * 0000000140ABAD37: mov     [rsi+8C8h], rax
 * 0000000140ABAD3E: lea     rax, [r14+rbx]
 * 0000000140ABAD42: mov     [rsi+8D0h], rax
 * 0000000140ABAD49: movsxd  rax, dword ptr [r14]
 * 0000000140ABAD4C: mov     [rsi+8D8h], rax
 * 0000000140ABAD53: mov     [rsi+8E0h], rcx
 * 0000000140ABAD5A: mov     rcx, rsi
 * 0000000140ABAD5D: mov     [rsi+8C0h], r12d
 * 0000000140ABAD64: call    sub_140AD049C
 * 0000000140ABAD69: mov     rcx, [rbp+0B30h+var_900]
 * 0000000140ABAD70: mov     rax, [rsi+1D0h]
 * 0000000140ABAD77: call    j__guard_dispatch_icall_nop
 * 0000000140ABAD7C: jmp     loc_140ABA35B
 * 0000000140ABAD81: mov     cr8, r15
 * 0000000140ABAD85: mov     r14, [rsp+0C30h+var_BE0]
 * 0000000140ABAD8A: mov     eax, [r14+14h]
 * 0000000140ABAD8E: xor     ecx, ecx
 * 0000000140ABAD90: mov     r15, 0A3A03F5891C8B4E8h
 * 0000000140ABAD9A: lea     r12d, [rcx+1]
 * 0000000140ABAD9E: cmp     [rsi+8C0h], ecx
 * 0000000140ABADA4: jnz     loc_140ABACAC
 * 0000000140ABADAA: mov     ecx, ebx
 * 0000000140ABADAC: mov     rbx, 0B3B74BDEE4453415h
 * 0000000140ABADB6: xor     rcx, rax
 * 0000000140ABADB9: mov     rax, [rsi+568h]
 * 0000000140ABADC0: mov     [rax+18h], rcx
 * 0000000140ABADC4: xor     eax, eax
 * 0000000140ABADC6: mov     rcx, [r14+8]
 * 0000000140ABADCA: cmp     [rsi+8C0h], eax
 * 0000000140ABADD0: jnz     loc_140ABACB6
 * 0000000140ABADD6: lea     rax, [rsi+r15]
 * 0000000140ABADDA: xor     edx, edx
 * 0000000140ABADDC: mov     [rsi+8C8h], rax
 * 0000000140ABADE3: lea     rax, [r14+rbx]
 * 0000000140ABADE7: mov     [rsi+8D0h], rax
 * 0000000140ABADEE: movsxd  rax, dword ptr [r14]
 * 0000000140ABADF1: mov     [rsi+8D8h], rax
 * 0000000140ABADF8: mov     [rsi+8E0h], rcx
 * 0000000140ABADFF: mov     rcx, rsi
 * 0000000140ABAE02: mov     [rsi+8C0h], r12d
 * 0000000140ABAE09: call    sub_140AD049C
 * 0000000140ABAE0E: jmp     loc_140ABACB6
 * 0000000140ABAE13: mov     rax, [rsi+190h]
 * 0000000140ABAE1A: lea     rcx, [rbp+0B30h+var_1C0]
 * 0000000140ABAE21: mov     edx, [r13+1Ch]
 * 0000000140ABAE25: call    j__guard_dispatch_icall_nop
 * 0000000140ABAE2A: mov     rax, [rsi+1C0h]
 * 0000000140ABAE31: lea     rdx, [rbp+0B30h+var_328]
 * 0000000140ABAE38: lea     rcx, [rbp+0B30h+var_1C0]
 * 0000000140ABAE3F: call    j__guard_dispatch_icall_nop
 * 0000000140ABAE44: xor     eax, eax
 * 0000000140ABAE46: mov     ebx, eax
 * 0000000140ABAE48: lea     r12d, [rax+1]
 * 0000000140ABAE4C: cmp     [r13+18h], eax
 * 0000000140ABAE50: jbe     loc_140ABAF59
 * 0000000140ABAE56: xor     edi, edi
 * 0000000140ABAE58: mov     eax, ebx
 * 0000000140ABAE5A: lea     r8, [rax+rax*2]
 * 0000000140ABAE5E: mov     r9d, [r13+r8*8+40h]
 * 0000000140ABAE63: test    [rsi+843h], r14b
 * 0000000140ABAE6A: jz      short loc_140ABAE8F
 * 0000000140ABAE6C: mov     eax, 0C0000082h
 * 0000000140ABAE71: cmp     r9d, eax
 * 0000000140ABAE74: jnz     short loc_140ABAE8F
 * 0000000140ABAE76: mov     eax, gs:1A4h
 * 0000000140ABAE7E: cmp     eax, [rsi+8B8h]
 * 0000000140ABAE84: jnz     short loc_140ABAE8F
 * 0000000140ABAE86: mov     rdx, [rsi+8B0h]
 * 0000000140ABAE8D: jmp     short loc_140ABAE9B
 * 0000000140ABAE8F: mov     ecx, r9d
 * 0000000140ABAE92: rdmsr
 * 0000000140ABAE94: shl     rdx, 20h
 * 0000000140ABAE98: or      rdx, rax
 * 0000000140ABAE9B: mov     rcx, [r13+r8*8+30h]
 * 0000000140ABAEA0: mov     r8, [r13+r8*8+38h]
 * 0000000140ABAEA5: and     rdx, rcx
 * 0000000140ABAEA8: cmp     rdx, r8
 * 0000000140ABAEAB: jz      short loc_140ABAF27
 * 0000000140ABAEAD: mov     ecx, [r13+1Ch]
 * 0000000140ABAEB1: shl     rcx, 20h
 * 0000000140ABAEB5: or      rcx, r9
 * 0000000140ABAEB8: cmp     [rsi+8C0h], edi
 * 0000000140ABAEBE: jnz     loc_140ABAF45
 * 0000000140ABAEC4: mov     rax, [rsi+568h]
 * 0000000140ABAECB: xor     r8, rdx
 * 0000000140ABAECE: mov     [rax+18h], r8
 * 0000000140ABAED2: cmp     [rsi+8C0h], edi
 * 0000000140ABAED8: jnz     short loc_140ABAF45
 * 0000000140ABAEDA: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABAEE4: xor     edx, edx
 * 0000000140ABAEE6: add     rax, rsi
 * 0000000140ABAEE9: mov     [rsi+8C8h], rax
 * 0000000140ABAEF0: mov     rax, 0B3B74BDEE4453415h
 * 0000000140ABAEFA: add     rax, r13
 * 0000000140ABAEFD: mov     [rsi+8D0h], rax
 * 0000000140ABAF04: movsxd  rax, dword ptr [r13+0]
 * 0000000140ABAF08: mov     [rsi+8D8h], rax
 * 0000000140ABAF0F: mov     [rsi+8E0h], rcx
 * 0000000140ABAF16: mov     rcx, rsi
 * 0000000140ABAF19: mov     [rsi+8C0h], r12d
 * 0000000140ABAF20: call    sub_140AD049C
 * 0000000140ABAF25: jmp     short loc_140ABAF45
 * 0000000140ABAF27: test    dword ptr [rsi+95Ch], 200h
 * 0000000140ABAF31: jz      short loc_140ABAF45
 * 0000000140ABAF33: cmp     rcx, 0FFFFFFFFFFFFFFFFh
 * 0000000140ABAF37: jnz     short loc_140ABAF45
 * 0000000140ABAF39: mov     rax, rdx
 * 0000000140ABAF3C: mov     ecx, r9d
 * 0000000140ABAF3F: shr     rdx, 20h
 * 0000000140ABAF43: wrmsr
 * 0000000140ABAF45: add     ebx, r12d
 * 0000000140ABAF48: cmp     ebx, [r13+18h]
 * 0000000140ABAF4C: jb      loc_140ABAE58
 * 0000000140ABAF52: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ABAF59: mov     rax, [rsi+188h]
 * 0000000140ABAF60: lea     rcx, [rbp+0B30h+var_328]
 * 0000000140ABAF67: call    j__guard_dispatch_icall_nop
 * 0000000140ABAF6C: mov     eax, [r13+18h]
 * 0000000140ABAF70: shl     eax, 0Fh
 * 0000000140ABAF73: add     [rsi+7F0h], eax
 * 0000000140ABAF79: jmp     loc_140ABA35B
 * 0000000140ABAF7E: mov     ecx, [rsi+7F8h]
 * 0000000140ABAF84: mov     r12d, 1
 * 0000000140ABAF8A: test    r12b, cl
 * 0000000140ABAF8D: jz      loc_140ABA35D
 * 0000000140ABAF93: bt      dword ptr [rsi+958h], 1Eh
 * 0000000140ABAF9B: jb      short loc_140ABAFB3
 * 0000000140ABAF9D: mov     r14d, eax
 * 0000000140ABAFA0: and     ecx, 3
 * 0000000140ABAFA3: cmp     cl, 3
 * 0000000140ABAFA6: setz    r14b
 * 0000000140ABAFAA: mov     dword ptr [rbp+0B30h+arg_8], r14d
 * 0000000140ABAFB1: jmp     short loc_140ABB007
 * 0000000140ABAFB3: rdtsc
 * 0000000140ABAFB5: shl     rdx, 20h
 * 0000000140ABAFB9: or      rax, rdx
 * 0000000140ABAFBC: mov     rcx, rax
 * 0000000140ABAFBF: ror     rax, 3
 * 0000000140ABAFC3: xor     rcx, rax
 * 0000000140ABAFC6: mov     rax, 7010008004002001h
 * 0000000140ABAFD0: mul     rcx
 * 0000000140ABAFD3: mov     rcx, rdx
 * 0000000140ABAFD6: mov     [rbp+0B30h+var_368], rdx
 * 0000000140ABAFDD: xor     rcx, rax
 * 0000000140ABAFE0: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140ABAFEA: mul     rcx
 * 0000000140ABAFED: shr     rdx, 1
 * 0000000140ABAFF0: lea     rax, [rdx+rdx*2]
 * 0000000140ABAFF4: cmp     rcx, rax
 * 0000000140ABAFF7: mov     eax, 0
 * 0000000140ABAFFC: setz    al
 * 0000000140ABAFFF: mov     dword ptr [rbp+0B30h+arg_8], eax
 * 0000000140ABB005: xor     eax, eax
 * 0000000140ABB007: mov     rbx, [rsi+520h]
 * 0000000140ABB00E: mov     r15d, eax
 * 0000000140ABB011: mov     dword ptr [rbp+0B30h+var_B90], eax
 * 0000000140ABB014: mov     rax, [rsi+168h]
 * 0000000140ABB01B: call    j__guard_dispatch_icall_nop
 * 0000000140ABB020: bt      dword ptr [rsi+958h], 1Eh
 * 0000000140ABB028: jb      short loc_140ABB03D
 * 0000000140ABB02A: mov     ecx, [rsi+918h]
 * 0000000140ABB030: cmp     ecx, 7
 * 0000000140ABB033: jnb     short loc_140ABB03D
 * 0000000140ABB035: mov     r14d, r12d
 * 0000000140ABB038: shl     r14b, cl
 * 0000000140ABB03B: jmp     short loc_140ABB055
 * 0000000140ABB03D: mov     rax, [rsi+118h]
 * 0000000140ABB044: xor     edx, edx
 * 0000000140ABB046: mov     rcx, [rsi+9C8h]
 * 0000000140ABB04D: call    j__guard_dispatch_icall_nop
 * 0000000140ABB052: mov     r14b, 80h
 * 0000000140ABB055: mov     rax, [rsi+128h]
 * 0000000140ABB05C: xor     edx, edx
 * 0000000140ABB05E: mov     rcx, rbx
 * 0000000140ABB061: call    j__guard_dispatch_icall_nop
 * 0000000140ABB066: mov     r8, [rsi+4F8h]
 * 0000000140ABB06D: mov     rdx, [r8]
 * 0000000140ABB070: cmp     rdx, r8
 * 0000000140ABB073: jz      short loc_140ABB09A
 * 0000000140ABB075: mov     rax, [rsi+688h]
 * 0000000140ABB07C: mov     rcx, rdx
 * 0000000140ABB07F: sub     rcx, [rsi+6A0h]
 * 0000000140ABB086: lock or [rcx+rax], r14b
 * 0000000140ABB08B: mov     rdx, [rdx]
 * 0000000140ABB08E: add     r15d, r12d
 * 0000000140ABB091: cmp     rdx, r8
 * 0000000140ABB094: jnz     short loc_140ABB075
 * 0000000140ABB096: mov     dword ptr [rbp+0B30h+var_B90], r15d
 * 0000000140ABB09A: mov     rax, [rsi+528h]
 * 0000000140ABB0A1: mov     r15d, 4
 * 0000000140ABB0A7: mov     edi, dword ptr [rbp+0B30h+arg_8]
 * 0000000140ABB0AD: mov     r13, [rax]
 * 0000000140ABB0B0: mov     rax, [rsi+700h]
 * 0000000140ABB0B7: mov     ebx, [rax+r13]
 * 0000000140ABB0BB: mov     [rsp+0C30h+var_BD8], rbx
 * 0000000140ABB0C0: mov     rax, [rsi+0F8h]
 * 0000000140ABB0C7: mov     rdx, r15
 * 0000000140ABB0CA: mov     rcx, r13
 * 0000000140ABB0CD: call    j__guard_dispatch_icall_nop
 * 0000000140ABB0D2: mov     r12, rax
 * 0000000140ABB0D5: test    rax, rax
 * 0000000140ABB0D8: jz      loc_140ABB247
 * 0000000140ABB0DE: mov     rbx, [rax]
 * 0000000140ABB0E1: sar     rbx, 10h
 * 0000000140ABB0E5: and     rbx, 0FFFFFFFFFFFFFFF0h
 * 0000000140ABB0E9: mov     al, [rbx]
 * 0000000140ABB0EB: and     al, 7Fh
 * 0000000140ABB0ED: cmp     al, 3
 * 0000000140ABB0EF: jnz     loc_140ABB189
 * 0000000140ABB0F5: mov     r8, [rsi+688h]
 * 0000000140ABB0FC: mov     rdx, r8
 * 0000000140ABB0FF: test    [r8+rbx], r14b
 * 0000000140ABB103: jnz     short loc_140ABB17B
 * 0000000140ABB105: mov     rax, [rsi+690h]
 * 0000000140ABB10C: mov     ecx, [rbx+rax]
 * 0000000140ABB10F: test    [rsi+6A8h], ecx
 * 0000000140ABB115: jz      short loc_140ABB17B
 * 0000000140ABB117: xor     eax, eax
 * 0000000140ABB119: cmp     [rsi+8C0h], eax
 * 0000000140ABB11F: jnz     short loc_140ABB17B
 * 0000000140ABB121: mov     rcx, [rsp+0C30h+var_BE0]
 * 0000000140ABB126: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABB130: add     rax, rsi
 * 0000000140ABB133: xor     edx, edx
 * 0000000140ABB135: mov     [rsi+8C8h], rax
 * 0000000140ABB13C: mov     rax, 0B3B74BDEE4453415h
 * 0000000140ABB146: add     rax, rcx
 * 0000000140ABB149: mov     [rsi+8D0h], rax
 * 0000000140ABB150: movsxd  rax, dword ptr [rcx]
 * 0000000140ABB153: mov     rcx, rsi
 * 0000000140ABB156: mov     [rsi+8D8h], rax
 * 0000000140ABB15D: mov     eax, 1
 * 0000000140ABB162: mov     [rsi+8E0h], rbx
 * 0000000140ABB169: mov     [rsi+8C0h], eax
 * 0000000140ABB16F: call    sub_140AD049C
 * 0000000140ABB174: mov     rdx, [rsi+688h]
 * 0000000140ABB17B: mov     al, r14b
 * 0000000140ABB17E: not     al
 * 0000000140ABB180: lock and [rdx+rbx], al
 * 0000000140ABB184: jmp     loc_140ABB230
 * 0000000140ABB189: cmp     al, 6
 * 0000000140ABB18B: jnz     short loc_140ABB1CF
 * 0000000140ABB18D: test    edi, edi
 * 0000000140ABB18F: jz      loc_140ABB230
 * 0000000140ABB195: mov     rcx, [rsi+650h]
 * 0000000140ABB19C: mov     rax, [rbx+rcx+20h]
 * 0000000140ABB1A1: cmp     rax, [rsi+310h]
 * 0000000140ABB1A8: jz      short loc_140ABB1B3
 * 0000000140ABB1AA: cmp     rax, [rsi+318h]
 * 0000000140ABB1B1: jnz     short loc_140ABB1D3
 * 0000000140ABB1B3: mov     rax, [rsi+320h]
 * 0000000140ABB1BA: cmp     [rbx+rcx+30h], rax
 * 0000000140ABB1BF: jnz     short loc_140ABB1D3
 * 0000000140ABB1C1: mov     rax, [rsi+328h]
 * 0000000140ABB1C8: cmp     [rbx+rcx+28h], rax
 * 0000000140ABB1CD: jmp     short loc_140ABB1D1
 * 0000000140ABB1CF: test    al, al
 * 0000000140ABB1D1: jz      short loc_140ABB230
 * 0000000140ABB1D3: xor     eax, eax
 * 0000000140ABB1D5: cmp     [rsi+8C0h], eax
 * 0000000140ABB1DB: jnz     short loc_140ABB230
 * 0000000140ABB1DD: mov     rcx, [rsp+0C30h+var_BE0]
 * 0000000140ABB1E2: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABB1EC: add     rax, rsi
 * 0000000140ABB1EF: xor     edx, edx
 * 0000000140ABB1F1: mov     [rsi+8C8h], rax
 * 0000000140ABB1F8: mov     rax, 0B3B74BDEE4453415h
 * 0000000140ABB202: add     rax, rcx
 * 0000000140ABB205: mov     [rsi+8D0h], rax
 * 0000000140ABB20C: movsxd  rax, dword ptr [rcx]
 * 0000000140ABB20F: mov     rcx, rsi
 * 0000000140ABB212: mov     [rsi+8D8h], rax
 * 0000000140ABB219: mov     eax, 1
 * 0000000140ABB21E: mov     [rsi+8E0h], rbx
 * 0000000140ABB225: mov     [rsi+8C0h], eax
 * 0000000140ABB22B: call    sub_140AD049C
 * 0000000140ABB230: mov     rax, [rsi+110h]
 * 0000000140ABB237: mov     rdx, r12
 * 0000000140ABB23A: mov     rcx, r13
 * 0000000140ABB23D: call    j__guard_dispatch_icall_nop
 * 0000000140ABB242: mov     rbx, [rsp+0C30h+var_BD8]
 * 0000000140ABB247: add     r15, 4
 * 0000000140ABB24B: cmp     r15, rbx
 * 0000000140ABB24E: jb      loc_140ABB0C0
 * 0000000140ABB254: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ABB25B: cmp     r14b, 80h
 * 0000000140ABB25F: jnz     short loc_140ABB276
 * 0000000140ABB261: mov     rax, [rsi+120h]
 * 0000000140ABB268: xor     edx, edx
 * 0000000140ABB26A: mov     rcx, [rsi+9C8h]
 * 0000000140ABB271: call    j__guard_dispatch_icall_nop
 * 0000000140ABB276: mov     rcx, [rsi+520h]
 * 0000000140ABB27D: xor     edx, edx
 * 0000000140ABB27F: mov     rax, [rsi+130h]
 * 0000000140ABB286: call    j__guard_dispatch_icall_nop
 * 0000000140ABB28B: mov     rax, [rsi+170h]
 * 0000000140ABB292: call    j__guard_dispatch_icall_nop
 * 0000000140ABB297: mov     eax, dword ptr [rbp+0B30h+var_B90]
 * 0000000140ABB29A: shr     rbx, 2
 * 0000000140ABB29E: add     eax, ebx
 * 0000000140ABB2A0: shl     eax, 8
 * 0000000140ABB2A3: add     [rsi+7F0h], eax
 * 0000000140ABB2A9: jmp     loc_140ABA5AF
 * 0000000140ABB2AE: mov     eax, [rsi+7F8h]
 * 0000000140ABB2B4: mov     r12d, 1
 * 0000000140ABB2BA: test    r12b, al
 * 0000000140ABB2BD: jnz     loc_140ABA35B
 * 0000000140ABB2C3: mov     rbx, [rsi+520h]
 * 0000000140ABB2CA: xor     eax, eax
 * 0000000140ABB2CC: mov     r13d, eax
 * 0000000140ABB2CF: mov     dword ptr [rbp+0B30h+var_B90], eax
 * 0000000140ABB2D2: mov     rax, [rsi+168h]
 * 0000000140ABB2D9: call    j__guard_dispatch_icall_nop
 * 0000000140ABB2DE: test    dword ptr [rsi+958h], 40000000h
 * 0000000140ABB2E8: jnz     short loc_140ABB2FD
 * 0000000140ABB2EA: mov     ecx, [rsi+918h]
 * 0000000140ABB2F0: cmp     ecx, 7
 * 0000000140ABB2F3: jnb     short loc_140ABB2FD
 * 0000000140ABB2F5: mov     r14d, r12d
 * 0000000140ABB2F8: shl     r14b, cl
 * 0000000140ABB2FB: jmp     short loc_140ABB315
 * 0000000140ABB2FD: mov     rax, [rsi+118h]
 * 0000000140ABB304: xor     edx, edx
 * 0000000140ABB306: mov     rcx, [rsi+9C8h]
 * 0000000140ABB30D: call    j__guard_dispatch_icall_nop
 * 0000000140ABB312: mov     r14b, 80h
 * 0000000140ABB315: mov     rax, [rsi+128h]
 * 0000000140ABB31C: xor     edx, edx
 * 0000000140ABB31E: mov     rcx, rbx
 * 0000000140ABB321: mov     dword ptr [rbp+0B30h+arg_8], r14d
 * 0000000140ABB328: call    j__guard_dispatch_icall_nop
 * 0000000140ABB32D: mov     r12, [rsi+4F8h]
 * 0000000140ABB334: mov     r15, [r12]
 * 0000000140ABB338: cmp     r15, r12
 * 0000000140ABB33B: jz      loc_140ABB3F9
 * 0000000140ABB341: mov     rdi, [rsp+0C30h+var_BE0]
 * 0000000140ABB346: mov     rbx, r15
 * 0000000140ABB349: sub     rbx, [rsi+6A0h]
 * 0000000140ABB350: cmp     r14b, 80h
 * 0000000140ABB354: jz      short loc_140ABB3D3
 * 0000000140ABB356: mov     rax, [rsi+688h]
 * 0000000140ABB35D: test    [rbx+rax], r14b
 * 0000000140ABB361: jz      short loc_140ABB3D3
 * 0000000140ABB363: mov     rax, [rsi+690h]
 * 0000000140ABB36A: mov     ecx, [rbx+rax]
 * 0000000140ABB36D: test    [rsi+6A8h], ecx
 * 0000000140ABB373: jz      short loc_140ABB3D3
 * 0000000140ABB375: xor     eax, eax
 * 0000000140ABB377: cmp     [rsi+8C0h], eax
 * 0000000140ABB37D: jnz     short loc_140ABB3D3
 * 0000000140ABB37F: mov     ecx, 1
 * 0000000140ABB384: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABB38E: add     rax, rsi
 * 0000000140ABB391: xor     edx, edx
 * 0000000140ABB393: mov     [rsi+8C8h], rax
 * 0000000140ABB39A: mov     rax, 0B3B74BDEE4453415h
 * 0000000140ABB3A4: add     rax, rdi
 * 0000000140ABB3A7: mov     [rsi+8D0h], rax
 * 0000000140ABB3AE: movsxd  rax, dword ptr [rdi]
 * 0000000140ABB3B1: mov     [rsi+8D8h], rax
 * 0000000140ABB3B8: mov     rax, rbx
 * 0000000140ABB3BB: or      rax, rcx
 * 0000000140ABB3BE: mov     [rsi+8E0h], rax
 * 0000000140ABB3C5: mov     [rsi+8C0h], ecx
 * 0000000140ABB3CB: mov     rcx, rsi
 * 0000000140ABB3CE: call    sub_140AD049C
 * 0000000140ABB3D3: mov     rax, [rsi+688h]
 * 0000000140ABB3DA: lock or [rbx+rax], r14b
 * 0000000140ABB3DF: mov     r15, [r15]
 * 0000000140ABB3E2: inc     r13d
 * 0000000140ABB3E5: cmp     r15, r12
 * 0000000140ABB3E8: jnz     loc_140ABB346
 * 0000000140ABB3EE: mov     dword ptr [rbp+0B30h+var_B90], r13d
 * 0000000140ABB3F2: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ABB3F9: mov     rcx, [rsi+4D8h]
 * 0000000140ABB400: mov     rax, cr8
 * 0000000140ABB404: mov     [rsp+0C30h+var_BD8], rax
 * 0000000140ABB409: mov     eax, 0Ch
 * 0000000140ABB40E: mov     cr8, rax
 * 0000000140ABB412: mov     rax, [rsi+138h]
 * 0000000140ABB419: lea     rdx, [rbp+0B30h+var_190]
 * 0000000140ABB420: call    j__guard_dispatch_icall_nop
 * 0000000140ABB425: mov     r13, [rsi+4D0h]
 * 0000000140ABB42C: mov     r15, [r13+0]
 * 0000000140ABB430: cmp     r15, r13
 * 0000000140ABB433: jz      loc_140ABB4E7
 * 0000000140ABB439: mov     rdi, [rsp+0C30h+var_BE0]
 * 0000000140ABB43E: mov     r12b, r14b
 * 0000000140ABB441: movzx   edx, r14b
 * 0000000140ABB445: not     r12b
 * 0000000140ABB448: mov     dword ptr [rbp+0B30h+var_B40], edx
 * 0000000140ABB44B: xor     r14d, r14d
 * 0000000140ABB44E: mov     rcx, [rsi+688h]
 * 0000000140ABB455: mov     rbx, r15
 * 0000000140ABB458: sub     rbx, [rsi+680h]
 * 0000000140ABB45F: movsx   eax, byte ptr [rcx+rbx]
 * 0000000140ABB463: test    edx, eax
 * 0000000140ABB465: jnz     short loc_140ABB4C8
 * 0000000140ABB467: cmp     [rsi+8C0h], r14d
 * 0000000140ABB46E: jnz     short loc_140ABB4C8
 * 0000000140ABB470: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABB47A: xor     edx, edx
 * 0000000140ABB47C: add     rax, rsi
 * 0000000140ABB47F: mov     rcx, rsi
 * 0000000140ABB482: mov     [rsi+8C8h], rax
 * 0000000140ABB489: mov     rax, 0B3B74BDEE4453415h
 * 0000000140ABB493: add     rax, rdi
 * 0000000140ABB496: mov     [rsi+8D0h], rax
 * 0000000140ABB49D: movsxd  rax, dword ptr [rdi]
 * 0000000140ABB4A0: mov     [rsi+8D8h], rax
 * 0000000140ABB4A7: mov     eax, 1
 * 0000000140ABB4AC: mov     [rsi+8E0h], rbx
 * 0000000140ABB4B3: mov     [rsi+8C0h], eax
 * 0000000140ABB4B9: call    sub_140AD049C
 * 0000000140ABB4BE: mov     rcx, [rsi+688h]
 * 0000000140ABB4C5: mov     edx, dword ptr [rbp+0B30h+var_B40]
 * 0000000140ABB4C8: lock and [rcx+rbx], r12b
 * 0000000140ABB4CD: mov     r15, [r15]
 * 0000000140ABB4D0: cmp     r15, r13
 * 0000000140ABB4D3: jnz     loc_140ABB44E
 * 0000000140ABB4D9: mov     r14d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140ABB4E0: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ABB4E7: mov     rax, [rsi+178h]
 * 0000000140ABB4EE: lea     rcx, [rbp+0B30h+var_190]
 * 0000000140ABB4F5: call    j__guard_dispatch_icall_nop
 * 0000000140ABB4FA: movzx   eax, byte ptr [rsp+0C30h+var_BD8]
 * 0000000140ABB4FF: mov     cr8, rax
 * 0000000140ABB503: cmp     r14b, 80h
 * 0000000140ABB507: jnz     short loc_140ABB51E
 * 0000000140ABB509: mov     rax, [rsi+120h]
 * 0000000140ABB510: xor     edx, edx
 * 0000000140ABB512: mov     rcx, [rsi+9C8h]
 * 0000000140ABB519: call    j__guard_dispatch_icall_nop
 * 0000000140ABB51E: mov     rcx, [rsi+520h]
 * 0000000140ABB525: xor     edx, edx
 * 0000000140ABB527: mov     rax, [rsi+130h]
 * 0000000140ABB52E: call    j__guard_dispatch_icall_nop
 * 0000000140ABB533: mov     rax, [rsi+170h]
 * 0000000140ABB53A: call    j__guard_dispatch_icall_nop
 * 0000000140ABB53F: mov     eax, dword ptr [rbp+0B30h+var_B90]
 * 0000000140ABB542: jmp     loc_140ABB2A0
 * 0000000140ABB547: mov     r14, [r13+8]
 * 0000000140ABB54B: mov     r8d, [r13+10h]
 * 0000000140ABB54F: mov     r9, r14
 * 0000000140ABB552: add     [rsi+7F0h], r8d
 * 0000000140ABB559: mov     rax, r14
 * 0000000140ABB55C: mov     r11d, [rsi+7DCh]
 * 0000000140ABB563: mov     r15, [rsi+7E0h]
 * 0000000140ABB56A: lea     rcx, [r14+r8]
 * 0000000140ABB56E: cmp     r14, rcx
 * 0000000140ABB571: jnb     short loc_140ABB583
 * 0000000140ABB573: mov     edx, 40h ; '@'
 * 0000000140ABB578: prefetchnta byte ptr [rax]
 * 0000000140ABB57B: add     rax, rdx
 * 0000000140ABB57E: cmp     rax, rcx
 * 0000000140ABB581: jb      short loc_140ABB578
 * 0000000140ABB583: mov     r10d, r8d
 * 0000000140ABB586: mov     rbx, r15
 * 0000000140ABB589: shr     r10d, 7
 * 0000000140ABB58D: mov     r12d, 1
 * 0000000140ABB593: mov     r13d, 0FFFFFFFFh
 * 0000000140ABB599: test    r10d, r10d
 * 0000000140ABB59C: jz      short loc_140ABB603
 * 0000000140ABB59E: mov     rsi, 7010008004002001h
 * 0000000140ABB5A8: mov     edx, 8
 * 0000000140ABB5AD: mov     rax, [r9]
 * 0000000140ABB5B0: mov     ecx, r11d
 * 0000000140ABB5B3: xor     rax, rbx
 * 0000000140ABB5B6: mov     rbx, [r9+8]
 * 0000000140ABB5BA: rol     rax, cl
 * 0000000140ABB5BD: add     r9, 10h
 * 0000000140ABB5C1: xor     rbx, rax
 * 0000000140ABB5C4: rol     rbx, cl
 * 0000000140ABB5C7: sub     rdx, r12
 * 0000000140ABB5CA: jnz     short loc_140ABB5AD
 * 0000000140ABB5CC: mov     rcx, r9
 * 0000000140ABB5CF: sub     rcx, r14
 * 0000000140ABB5D2: xor     rcx, r15
 * 0000000140ABB5D5: mov     rax, rcx
 * 0000000140ABB5D8: rol     rax, 11h
 * 0000000140ABB5DC: xor     rcx, rax
 * 0000000140ABB5DF: mov     rax, rsi
 * 0000000140ABB5E2: mul     rcx
 * 0000000140ABB5E5: xor     eax, edx
 * 0000000140ABB5E7: mov     [rbp+0B30h+var_360], rdx
 * 0000000140ABB5EE: xor     r11d, eax
 * 0000000140ABB5F1: and     r11d, 3Fh
 * 0000000140ABB5F5: cmovz   r11d, r12d
 * 0000000140ABB5F9: add     r10d, r13d
 * 0000000140ABB5FC: jnz     short loc_140ABB5A8
 * 0000000140ABB5FE: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABB603: and     r8d, 7Fh
 * 0000000140ABB607: cmp     r8d, 8
 * 0000000140ABB60B: jb      short loc_140ABB62A
 * 0000000140ABB60D: mov     edx, r8d
 * 0000000140ABB610: shr     rdx, 3
 * 0000000140ABB614: xor     rbx, [r9]
 * 0000000140ABB617: mov     ecx, r11d
 * 0000000140ABB61A: rol     rbx, cl
 * 0000000140ABB61D: add     r9, 8
 * 0000000140ABB621: add     r8d, 0FFFFFFF8h
 * 0000000140ABB625: sub     rdx, r12
 * 0000000140ABB628: jnz     short loc_140ABB614
 * 0000000140ABB62A: test    r8d, r8d
 * 0000000140ABB62D: jz      short loc_140ABB644
 * 0000000140ABB62F: movzx   eax, byte ptr [r9]
 * 0000000140ABB633: mov     ecx, r11d
 * 0000000140ABB636: xor     rbx, rax
 * 0000000140ABB639: add     r9, r12
 * 0000000140ABB63C: rol     rbx, cl
 * 0000000140ABB63F: add     r8d, r13d
 * 0000000140ABB642: jnz     short loc_140ABB62F
 * 0000000140ABB644: mov     rax, rbx
 * 0000000140ABB647: jmp     short loc_140ABB64B
 * 0000000140ABB649: xor     ebx, eax
 * 0000000140ABB64B: shr     rax, 1Fh
 * 0000000140ABB64F: test    rax, rax
 * 0000000140ABB652: jnz     short loc_140ABB649
 * 0000000140ABB654: mov     r8, [rsp+0C30h+var_BE0]
 * 0000000140ABB659: btr     ebx, 1Fh
 * 0000000140ABB65D: mov     r13d, eax
 * 0000000140ABB660: cmp     ebx, [r8+14h]
 * 0000000140ABB664: jz      loc_140ABA35D
 * 0000000140ABB66A: cmp     [r8], eax
 * 0000000140ABB66D: jnz     short loc_140ABB677
 * 0000000140ABB66F: cmp     [r8+18h], eax
 * 0000000140ABB673: cmovnz  r13d, r12d
 * 0000000140ABB677: mov     ecx, [r8+10h]
 * 0000000140ABB67B: mov     rdx, [r8+8]
 * 0000000140ABB67F: test    rcx, rcx
 * 0000000140ABB682: jz      loc_140ABB746
 * 0000000140ABB688: mov     eax, [rsi+95Ch]
 * 0000000140ABB68E: mov     r9d, 40h ; '@'
 * 0000000140ABB694: test    r9b, al
 * 0000000140ABB697: jz      loc_140ABB746
 * 0000000140ABB69D: mov     r12, cr8
 * 0000000140ABB6A1: lea     eax, [r9-3Eh]
 * 0000000140ABB6A5: mov     cr8, rax
 * 0000000140ABB6A9: mov     r14, rdx
 * 0000000140ABB6AC: lea     rax, [rcx-1]
 * 0000000140ABB6B0: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140ABB6B7: add     rax, rdx
 * 0000000140ABB6BA: or      rax, 0FFFh
 * 0000000140ABB6C0: mov     [rsp+0C30h+var_BD8], rax
 * 0000000140ABB6C5: lea     rax, [r14-1]
 * 0000000140ABB6C9: mov     [rbp+0B30h+arg_8], rax
 * 0000000140ABB6D0: movzx   r15d, r12b
 * 0000000140ABB6D4: mov     rax, [rsi+458h]
 * 0000000140ABB6DB: xor     edx, edx
 * 0000000140ABB6DD: mov     rcx, r14
 * 0000000140ABB6E0: call    j__guard_dispatch_icall_nop
 * 0000000140ABB6E5: cmp     eax, 0C000022Dh
 * 0000000140ABB6EA: jnz     short loc_140ABB713
 * 0000000140ABB6EC: test    r13d, r13d
 * 0000000140ABB6EF: jnz     short loc_140ABB73D
 * 0000000140ABB6F1: lea     eax, [r13+1]
 * 0000000140ABB6F5: cmp     r12b, al
 * 0000000140ABB6F8: ja      short loc_140ABB717
 * 0000000140ABB6FA: movzx   r15d, r12b
 * 0000000140ABB6FE: mov     cr8, r15
 * 0000000140ABB702: mov     al, [r14]
 * 0000000140ABB705: mov     rax, cr8
 * 0000000140ABB709: lea     eax, [r13+2]
 * 0000000140ABB70D: mov     cr8, rax
 * 0000000140ABB711: jmp     short loc_140ABB6D4
 * 0000000140ABB713: test    eax, eax
 * 0000000140ABB715: js      short loc_140ABB73D
 * 0000000140ABB717: mov     rax, [rbp+0B30h+arg_8]
 * 0000000140ABB71E: mov     r8d, 1000h
 * 0000000140ABB724: add     rax, r8
 * 0000000140ABB727: add     r14, r8
 * 0000000140ABB72A: mov     [rbp+0B30h+arg_8], rax
 * 0000000140ABB731: cmp     rax, [rsp+0C30h+var_BD8]
 * 0000000140ABB736: jnz     short loc_140ABB6D0
 * 0000000140ABB738: jmp     loc_140ABA5AB
 * 0000000140ABB73D: mov     cr8, r15
 * 0000000140ABB741: mov     r8, [rsp+0C30h+var_BE0]
 * 0000000140ABB746: mov     eax, [r8+14h]
 * 0000000140ABB74A: xor     ecx, ecx
 * 0000000140ABB74C: cmp     [rsi+8C0h], ecx
 * 0000000140ABB752: jnz     loc_140ABA5AF
 * 0000000140ABB758: mov     ecx, ebx
 * 0000000140ABB75A: xor     rcx, rax
 * 0000000140ABB75D: mov     rax, [rsi+568h]
 * 0000000140ABB764: mov     [rax+18h], rcx
 * 0000000140ABB768: xor     eax, eax
 * 0000000140ABB76A: mov     rcx, [r8+8]
 * 0000000140ABB76E: lea     r12d, [rax+1]
 * 0000000140ABB772: cmp     [rsi+8C0h], eax
 * 0000000140ABB778: jnz     loc_140ABA35D
 * 0000000140ABB77E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABB788: add     rax, rsi
 * 0000000140ABB78B: mov     [rsi+8C8h], rax
 * 0000000140ABB792: mov     rax, 0B3B74BDEE4453415h
 * 0000000140ABB79C: add     rax, r8
 * 0000000140ABB79F: mov     [rsi+8D0h], rax
 * 0000000140ABB7A6: movsxd  rax, dword ptr [r8]
 * 0000000140ABB7A9: jmp     loc_140ABA628
 * 0000000140ABB7AE: xor     eax, eax
 * 0000000140ABB7B0: cmp     [rsi+948h], rax
 * 0000000140ABB7B7: jz      loc_140ABBAB0
 * 0000000140ABB7BD: mov     r8d, [rsi+7ECh]
 * 0000000140ABB7C4: mov     edx, [rsi+95Ch]
 * 0000000140ABB7CA: test    r8d, r8d
 * 0000000140ABB7CD: jnz     short loc_140ABB7E5
 * 0000000140ABB7CF: lea     ecx, ds:0[rdx*8]
 * 0000000140ABB7D6: xor     ecx, edx
 * 0000000140ABB7D8: and     ecx, 20h
 * 0000000140ABB7DB: xor     ecx, edx
 * 0000000140ABB7DD: mov     [rsi+95Ch], ecx
 * 0000000140ABB7E3: jmp     short loc_140ABB7F6
 * 0000000140ABB7E5: mov     eax, edx
 * 0000000140ABB7E7: mov     ecx, edx
 * 0000000140ABB7E9: shr     eax, 3
 * 0000000140ABB7EC: xor     eax, edx
 * 0000000140ABB7EE: test    al, 4
 * 0000000140ABB7F0: jnz     loc_140ABBAAE
 * 0000000140ABB7F6: test    cl, 4
 * 0000000140ABB7F9: jz      loc_140AC3829
 * 0000000140ABB7FF: mov     r15, [r13+20h]
 * 0000000140ABB803: mov     eax, [r13+28h]
 * 0000000140ABB807: test    r15, r15
 * 0000000140ABB80A: jz      short loc_140ABB81B
 * 0000000140ABB80C: sub     eax, r8d
 * 0000000140ABB80F: lea     ecx, [r8+r15]
 * 0000000140ABB813: mov     ebx, eax
 * 0000000140ABB815: lea     r14, [r15+r8]
 * 0000000140ABB819: jmp     short loc_140ABB827
 * 0000000140ABB81B: mov     ecx, [r13+8]
 * 0000000140ABB81F: mov     ebx, [r13+10h]
 * 0000000140ABB823: mov     r14, [r13+8]
 * 0000000140ABB827: add     rbx, 0FFFh
 * 0000000140ABB82E: and     ecx, 0FFFh
 * 0000000140ABB834: add     rbx, rcx
 * 0000000140ABB837: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140ABB83E: shr     rbx, 0Ch
 * 0000000140ABB842: xor     eax, eax
 * 0000000140ABB844: test    rbx, rbx
 * 0000000140ABB847: jz      loc_140ABB8FD
 * 0000000140ABB84D: mov     rax, [rsi+2A0h]
 * 0000000140ABB854: mov     rcx, r14
 * 0000000140ABB857: sub     rbx, r11
 * 0000000140ABB85A: call    j__guard_dispatch_icall_nop
 * 0000000140ABB85F: test    al, al
 * 0000000140ABB861: jz      short loc_140ABB8BC
 * 0000000140ABB863: xor     eax, eax
 * 0000000140ABB865: cmp     [rsi+8C0h], eax
 * 0000000140ABB86B: jnz     short loc_140ABB8BC
 * 0000000140ABB86D: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABB877: xor     edx, edx
 * 0000000140ABB879: add     rax, rsi
 * 0000000140ABB87C: mov     rcx, rsi
 * 0000000140ABB87F: mov     [rsi+8C8h], rax
 * 0000000140ABB886: mov     rax, 0B3B74BDEE4453415h
 * 0000000140ABB890: add     rax, r13
 * 0000000140ABB893: mov     [rsi+8D0h], rax
 * 0000000140ABB89A: movsxd  rax, dword ptr [r13+0]
 * 0000000140ABB89E: mov     [rsi+8D8h], rax
 * 0000000140ABB8A5: mov     eax, 1
 * 0000000140ABB8AA: mov     [rsi+8E0h], r14
 * 0000000140ABB8B1: mov     [rsi+8C0h], eax
 * 0000000140ABB8B7: call    sub_140AD049C
 * 0000000140ABB8BC: mov     eax, [rsi+7F0h]
 * 0000000140ABB8C2: add     r14, 1000h
 * 0000000140ABB8C9: add     eax, 100h
 * 0000000140ABB8CE: mov     [rsi+7F0h], eax
 * 0000000140ABB8D4: test    r15, r15
 * 0000000140ABB8D7: jz      short loc_140ABB8E9
 * 0000000140ABB8D9: add     dword ptr [rsi+7ECh], 1000h
 * 0000000140ABB8E3: cmp     eax, [r12]
 * 0000000140ABB8E7: jge     short loc_140ABB8F9
 * 0000000140ABB8E9: xor     eax, eax
 * 0000000140ABB8EB: test    rbx, rbx
 * 0000000140ABB8EE: jz      short loc_140ABB8FD
 * 0000000140ABB8F0: lea     r11d, [rax+1]
 * 0000000140ABB8F4: jmp     loc_140ABB84D
 * 0000000140ABB8F9: xor     eax, eax
 * 0000000140ABB8FB: jmp     short loc_140ABB902
 * 0000000140ABB8FD: test    r15, r15
 * 0000000140ABB900: jz      short loc_140ABB90D
 * 0000000140ABB902: test    rbx, rbx
 * 0000000140ABB905: jnz     short loc_140ABB90D
 * 0000000140ABB907: mov     [rsi+7ECh], eax
 * 0000000140ABB90D: cmp     [rsi+7ECh], eax
 * 0000000140ABB913: jnz     loc_140ABA5AF
 * 0000000140ABB919: mov     rcx, [rsi+518h]
 * 0000000140ABB920: mov     r15, cr8
 * 0000000140ABB924: mov     eax, 0Fh
 * 0000000140ABB929: mov     cr8, rax
 * 0000000140ABB92D: mov     rax, [rsi+140h]
 * 0000000140ABB934: call    j__guard_dispatch_icall_nop
 * 0000000140ABB939: mov     rax, [rsi+5E8h]
 * 0000000140ABB940: mov     r14, [rsp+0C30h+var_BE0]
 * 0000000140ABB945: mov     rcx, [rax]
 * 0000000140ABB948: mov     eax, [rcx]
 * 0000000140ABB94A: lea     rbx, [rcx+10h]
 * 0000000140ABB94E: mov     r12b, [rcx+0Ch]
 * 0000000140ABB952: lea     rcx, [rax+rax*2]
 * 0000000140ABB956: lea     r13, [rbx+rcx*8]
 * 0000000140ABB95A: mov     r8d, 18h
 * 0000000140ABB960: lea     r9, [r14+18h]
 * 0000000140ABB964: mov     r10, rbx
 * 0000000140ABB967: mov     rcx, [r10]
 * 0000000140ABB96A: add     r10, 8
 * 0000000140ABB96E: mov     rax, [r9]
 * 0000000140ABB971: add     r9, 8
 * 0000000140ABB975: cmp     rcx, rax
 * 0000000140ABB978: jnz     short loc_140ABB9AE
 * 0000000140ABB97A: add     r8d, 0FFFFFFF8h
 * 0000000140ABB97E: cmp     r8d, 8
 * 0000000140ABB982: jnb     short loc_140ABB967
 * 0000000140ABB984: test    r8d, r8d
 * 0000000140ABB987: jz      short loc_140ABB9B7
 * 0000000140ABB989: mov     r11d, 1
 * 0000000140ABB98F: movzx   edx, byte ptr [r10]
 * 0000000140ABB993: add     r10, r11
 * 0000000140ABB996: movzx   eax, byte ptr [r9]
 * 0000000140ABB99A: add     r9, r11
 * 0000000140ABB99D: cmp     rdx, rax
 * 0000000140ABB9A0: jnz     short loc_140ABB9AE
 * 0000000140ABB9A2: mov     eax, 0FFFFFFFFh
 * 0000000140ABB9A7: add     r8d, eax
 * 0000000140ABB9AA: jz      short loc_140ABB9B7
 * 0000000140ABB9AC: jmp     short loc_140ABB98F
 * 0000000140ABB9AE: add     rbx, 18h
 * 0000000140ABB9B2: cmp     rbx, r13
 * 0000000140ABB9B5: jb      short loc_140ABB95A
 * 0000000140ABB9B7: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABB9BC: mov     rcx, [rsi+518h]
 * 0000000140ABB9C3: mov     rax, [rsi+180h]
 * 0000000140ABB9CA: call    j__guard_dispatch_icall_nop
 * 0000000140ABB9CF: movzx   eax, r15b
 * 0000000140ABB9D3: mov     cr8, rax
 * 0000000140ABB9D7: xor     eax, eax
 * 0000000140ABB9D9: test    r12b, r12b
 * 0000000140ABB9DC: lea     r12d, [rax+1]
 * 0000000140ABB9E0: jz      short loc_140ABBA56
 * 0000000140ABB9E2: mov     eax, [rsi+95Ch]
 * 0000000140ABB9E8: lea     ecx, [r12+0Fh]
 * 0000000140ABB9ED: test    cl, al
 * 0000000140ABB9EF: jz      short loc_140ABBA4A
 * 0000000140ABB9F1: xor     eax, eax
 * 0000000140ABB9F3: cmp     [rsi+8C0h], eax
 * 0000000140ABB9F9: jnz     short loc_140ABBA4A
 * 0000000140ABB9FB: mov     rcx, [rsp+0C30h+var_BE0]
 * 0000000140ABBA00: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABBA0A: add     rax, rsi
 * 0000000140ABBA0D: xor     edx, edx
 * 0000000140ABBA0F: mov     [rsi+8C8h], rax
 * 0000000140ABBA16: mov     rax, 0B3B74BDEE4453415h
 * 0000000140ABBA20: add     rax, rcx
 * 0000000140ABBA23: mov     [rsi+8D0h], rax
 * 0000000140ABBA2A: movsxd  rax, dword ptr [rcx]
 * 0000000140ABBA2D: mov     rcx, rsi
 * 0000000140ABBA30: mov     [rsi+8D8h], rax
 * 0000000140ABBA37: mov     [rsi+8E0h], r12
 * 0000000140ABBA3E: mov     [rsi+8C0h], r12d
 * 0000000140ABBA45: call    sub_140AD049C
 * 0000000140ABBA4A: xor     eax, eax
 * 0000000140ABBA4C: cmp     [r14+18h], r12
 * 0000000140ABBA50: jz      loc_140ABA35D
 * 0000000140ABBA56: cmp     rbx, r13
 * 0000000140ABBA59: jnz     loc_140ABA35B
 * 0000000140ABBA5F: cmp     [rsi+8C0h], eax
 * 0000000140ABBA65: jnz     loc_140ABA35B
 * 0000000140ABBA6B: mov     rcx, [rsp+0C30h+var_BE0]
 * 0000000140ABBA70: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABBA7A: add     rax, rsi
 * 0000000140ABBA7D: mov     [rsi+8C8h], rax
 * 0000000140ABBA84: mov     rax, 0B3B74BDEE4453415h
 * 0000000140ABBA8E: add     rax, rcx
 * 0000000140ABBA91: mov     [rsi+8D0h], rax
 * 0000000140ABBA98: movsxd  rax, dword ptr [rcx]
 * 0000000140ABBA9B: mov     [rsi+8D8h], rax
 * 0000000140ABBAA2: mov     [rsi+8E0h], rbx
 * 0000000140ABBAA9: jmp     loc_140ABA636
 * 0000000140ABBAAE: xor     eax, eax
 * 0000000140ABBAB0: mov     [rsi+7ECh], eax
 * 0000000140ABBAB6: jmp     loc_140ABA5AF
 * 0000000140ABBABB: cmp     r10d, 0Eh
 * 0000000140ABBABF: jle     loc_140ABEDF8
 * 0000000140ABBAC5: mov     ebx, 0Fh
 * 0000000140ABBACA: cmp     r10d, ebx
 * 0000000140ABBACD: jz      loc_140ABEC95
 * 0000000140ABBAD3: cmp     r10d, 15h
 * 0000000140ABBAD7: jz      loc_140ABEBFF
 * 0000000140ABBADD: cmp     r10d, 18h
 * 0000000140ABBAE1: jz      loc_140ABC428
 * 0000000140ABBAE7: cmp     r10d, edx
 * 0000000140ABBAEA: jz      loc_140ABBFE4
 * 0000000140ABBAF0: cmp     r10d, 1Ah
 * 0000000140ABBAF4: jz      loc_140ABBDC3
 * 0000000140ABBAFA: cmp     r10d, 1Bh
 * 0000000140ABBAFE: jnz     loc_140AC4787
 * 0000000140ABBB04: mov     eax, [rsi+7F8h]
 * 0000000140ABBB0A: lea     r12d, [rbx-0Eh]
 * 0000000140ABBB0E: test    r12b, al
 * 0000000140ABBB11: jz      loc_140ABA35B
 * 0000000140ABBB17: mov     r14, [rsi+580h]
 * 0000000140ABBB1E: xor     eax, eax
 * 0000000140ABBB20: mov     r15, [rsi+588h]
 * 0000000140ABBB27: mov     rbx, [rsi+520h]
 * 0000000140ABBB2E: mov     [rsp+0C30h+var_BC0], eax
 * 0000000140ABBB32: mov     rax, [rsi+168h]
 * 0000000140ABBB39: mov     [rbp+0B30h+var_B80], r14
 * 0000000140ABBB3D: mov     [rsp+0C30h+var_BD8], r15
 * 0000000140ABBB42: call    j__guard_dispatch_icall_nop
 * 0000000140ABBB47: test    dword ptr [rsi+958h], 40000000h
 * 0000000140ABBB51: jnz     short loc_140ABBB66
 * 0000000140ABBB53: mov     ecx, [rsi+918h]
 * 0000000140ABBB59: cmp     ecx, 7
 * 0000000140ABBB5C: jnb     short loc_140ABBB66
 * 0000000140ABBB5E: mov     r13d, r12d
 * 0000000140ABBB61: shl     r13b, cl
 * 0000000140ABBB64: jmp     short loc_140ABBB7E
 * 0000000140ABBB66: mov     rax, [rsi+118h]
 * 0000000140ABBB6D: xor     edx, edx
 * 0000000140ABBB6F: mov     rcx, [rsi+9C8h]
 * 0000000140ABBB76: call    j__guard_dispatch_icall_nop
 * 0000000140ABBB7B: mov     r13b, 80h
 * 0000000140ABBB7E: mov     rax, [rsi+128h]
 * 0000000140ABBB85: xor     edx, edx
 * 0000000140ABBB87: mov     rcx, rbx
 * 0000000140ABBB8A: mov     dword ptr [rbp+0B30h+var_B90], r13d
 * 0000000140ABBB8E: call    j__guard_dispatch_icall_nop
 * 0000000140ABBB93: mov     rax, [rsi+128h]
 * 0000000140ABBB9A: xor     edx, edx
 * 0000000140ABBB9C: mov     rcx, r14
 * 0000000140ABBB9F: call    j__guard_dispatch_icall_nop
 * 0000000140ABBBA4: mov     r9, [rsi+578h]
 * 0000000140ABBBAB: xor     eax, eax
 * 0000000140ABBBAD: mov     r10d, eax
 * 0000000140ABBBB0: mov     [rsp+0C30h+var_BB8], rax
 * 0000000140ABBBB5: mov     r8, [r9]
 * 0000000140ABBBB8: cmp     r8, r9
 * 0000000140ABBBBB: jz      short loc_140ABBC10
 * 0000000140ABBBBD: lea     rdx, [r8-18h]
 * 0000000140ABBBC1: cmp     rdx, r15
 * 0000000140ABBBC4: jz      short loc_140ABBBFC
 * 0000000140ABBBC6: mov     rax, [rsi+708h]
 * 0000000140ABBBCD: mov     rdx, [rdx+rax]
 * 0000000140ABBBD1: mov     rax, [rsi+690h]
 * 0000000140ABBBD8: mov     ecx, [rdx+rax]
 * 0000000140ABBBDB: test    [rsi+6A8h], ecx
 * 0000000140ABBBE1: jnz     short loc_140ABBBF0
 * 0000000140ABBBE3: test    r10, r10
 * 0000000140ABBBE6: mov     rax, rdx
 * 0000000140ABBBE9: cmovnz  rax, r12
 * 0000000140ABBBED: mov     r10, rax
 * 0000000140ABBBF0: mov     rax, [rsi+688h]
 * 0000000140ABBBF7: lock or [rdx+rax], r13b
 * 0000000140ABBBFC: mov     r8, [r8]
 * 0000000140ABBBFF: cmp     r8, r9
 * 0000000140ABBC02: jnz     short loc_140ABBBBD
 * 0000000140ABBC04: mov     [rsp+0C30h+var_BB8], r10
 * 0000000140ABBC09: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ABBC10: mov     r12, [rsi+4F8h]
 * 0000000140ABBC17: mov     r14, [r12]
 * 0000000140ABBC1B: cmp     r14, r12
 * 0000000140ABBC1E: jz      loc_140ABBD09
 * 0000000140ABBC24: mov     rdi, [rsp+0C30h+var_BD8]
 * 0000000140ABBC29: mov     r15b, r13b
 * 0000000140ABBC2C: movzx   r8d, r13b
 * 0000000140ABBC30: not     r15b
 * 0000000140ABBC33: mov     r13d, [rsp+0C30h+var_BC0]
 * 0000000140ABBC38: mov     dword ptr [rbp+0B30h+arg_8], r8d
 * 0000000140ABBC3F: mov     rdx, [rsi+688h]
 * 0000000140ABBC46: mov     rbx, r14
 * 0000000140ABBC49: sub     rbx, [rsi+6A0h]
 * 0000000140ABBC50: mov     rcx, rdx
 * 0000000140ABBC53: movsx   eax, byte ptr [rdx+rbx]
 * 0000000140ABBC57: test    r8d, eax
 * 0000000140ABBC5A: jnz     loc_140ABBCE0
 * 0000000140ABBC60: mov     rax, [rsi+698h]
 * 0000000140ABBC67: mov     r8, [rbx+rax]
 * 0000000140ABBC6B: xor     eax, eax
 * 0000000140ABBC6D: test    r8, r8
 * 0000000140ABBC70: jz      short loc_140ABBCD9
 * 0000000140ABBC72: cmp     r8, rdi
 * 0000000140ABBC75: jz      short loc_140ABBCD9
 * 0000000140ABBC77: cmp     [rsi+8C0h], eax
 * 0000000140ABBC7D: jnz     short loc_140ABBCD9
 * 0000000140ABBC7F: mov     rcx, [rsp+0C30h+var_BE0]
 * 0000000140ABBC84: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABBC8E: add     rax, rsi
 * 0000000140ABBC91: xor     edx, edx
 * 0000000140ABBC93: mov     [rsi+8C8h], rax
 * 0000000140ABBC9A: mov     rax, 0B3B74BDEE4453415h
 * 0000000140ABBCA4: add     rax, rcx
 * 0000000140ABBCA7: mov     [rsi+8D0h], rax
 * 0000000140ABBCAE: movsxd  rax, dword ptr [rcx]
 * 0000000140ABBCB1: mov     rcx, rsi
 * 0000000140ABBCB4: mov     [rsi+8D8h], rax
 * 0000000140ABBCBB: mov     eax, 1
 * 0000000140ABBCC0: mov     [rsi+8E0h], rbx
 * 0000000140ABBCC7: mov     [rsi+8C0h], eax
 * 0000000140ABBCCD: call    sub_140AD049C
 * 0000000140ABBCD2: mov     rcx, [rsi+688h]
 * 0000000140ABBCD9: mov     r8d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140ABBCE0: lock and [rcx+rbx], r15b
 * 0000000140ABBCE5: mov     r14, [r14]
 * 0000000140ABBCE8: inc     r13d
 * 0000000140ABBCEB: cmp     r14, r12
 * 0000000140ABBCEE: jnz     loc_140ABBC3F
 * 0000000140ABBCF4: mov     r15, [rsp+0C30h+var_BD8]
 * 0000000140ABBCF9: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ABBD00: mov     [rsp+0C30h+var_BC0], r13d
 * 0000000140ABBD05: mov     r13d, dword ptr [rbp+0B30h+var_B90]
 * 0000000140ABBD09: mov     rdx, [rsp+0C30h+var_BB8]
 * 0000000140ABBD0E: mov     r12d, 1
 * 0000000140ABBD14: test    rdx, rdx
 * 0000000140ABBD17: jz      short loc_140ABBD69
 * 0000000140ABBD19: cmp     rdx, r12
 * 0000000140ABBD1C: jz      short loc_140ABBD30
 * 0000000140ABBD1E: mov     rax, [rsi+688h]
 * 0000000140ABBD25: mov     cl, r13b
 * 0000000140ABBD28: not     cl
 * 0000000140ABBD2A: lock and [rdx+rax], cl
 * 0000000140ABBD2E: jmp     short loc_140ABBD69
 * 0000000140ABBD30: mov     r10, [rsi+578h]
 * 0000000140ABBD37: mov     r9, [r10]
 * 0000000140ABBD3A: jmp     short loc_140ABBD64
 * 0000000140ABBD3C: lea     r8, [r9-18h]
 * 0000000140ABBD40: cmp     r8, r15
 * 0000000140ABBD43: jz      short loc_140ABBD61
 * 0000000140ABBD45: mov     rax, [rsi+708h]
 * 0000000140ABBD4C: mov     dl, r13b
 * 0000000140ABBD4F: not     dl
 * 0000000140ABBD51: mov     r8, [r8+rax]
 * 0000000140ABBD55: mov     rax, [rsi+688h]
 * 0000000140ABBD5C: lock and [r8+rax], dl
 * 0000000140ABBD61: mov     r9, [r9]
 * 0000000140ABBD64: cmp     r9, r10
 * 0000000140ABBD67: jnz     short loc_140ABBD3C
 * 0000000140ABBD69: mov     rax, [rsi+130h]
 * 0000000140ABBD70: xor     edx, edx
 * 0000000140ABBD72: mov     rcx, [rbp+0B30h+var_B80]
 * 0000000140ABBD76: call    j__guard_dispatch_icall_nop
 * 0000000140ABBD7B: cmp     r13b, 80h
 * 0000000140ABBD7F: jnz     short loc_140ABBD96
 * 0000000140ABBD81: mov     rax, [rsi+120h]
 * 0000000140ABBD88: xor     edx, edx
 * 0000000140ABBD8A: mov     rcx, [rsi+9C8h]
 * 0000000140ABBD91: call    j__guard_dispatch_icall_nop
 * 0000000140ABBD96: mov     rcx, [rsi+520h]
 * 0000000140ABBD9D: xor     edx, edx
 * 0000000140ABBD9F: mov     rax, [rsi+130h]
 * 0000000140ABBDA6: call    j__guard_dispatch_icall_nop
 * 0000000140ABBDAB: mov     rax, [rsi+170h]
 * 0000000140ABBDB2: call    j__guard_dispatch_icall_nop
 * 0000000140ABBDB7: mov     eax, [rsp+0C30h+var_BC0]
 * 0000000140ABBDBB: shl     eax, 8
 * 0000000140ABBDBE: jmp     loc_140ABAF73
 * 0000000140ABBDC3: mov     eax, [rsi+7F8h]
 * 0000000140ABBDC9: mov     r12d, 1
 * 0000000140ABBDCF: test    r12b, al
 * 0000000140ABBDD2: jnz     loc_140ABA35B
 * 0000000140ABBDD8: mov     r14, [rsi+580h]
 * 0000000140ABBDDF: xor     eax, eax
 * 0000000140ABBDE1: mov     rbx, [rsi+520h]
 * 0000000140ABBDE8: mov     r13d, eax
 * 0000000140ABBDEB: mov     dword ptr [rbp+0B30h+arg_8], eax
 * 0000000140ABBDF1: mov     rax, [rsi+588h]
 * 0000000140ABBDF8: mov     [rsp+0C30h+var_BD8], rax
 * 0000000140ABBDFD: mov     rax, [rsi+168h]
 * 0000000140ABBE04: mov     [rsp+0C30h+var_BB8], r14
 * 0000000140ABBE09: call    j__guard_dispatch_icall_nop
 * 0000000140ABBE0E: test    dword ptr [rsi+958h], 40000000h
 * 0000000140ABBE18: jnz     short loc_140ABBE2D
 * 0000000140ABBE1A: mov     ecx, [rsi+918h]
 * 0000000140ABBE20: cmp     ecx, 7
 * 0000000140ABBE23: jnb     short loc_140ABBE2D
 * 0000000140ABBE25: mov     r15d, r12d
 * 0000000140ABBE28: shl     r15b, cl
 * 0000000140ABBE2B: jmp     short loc_140ABBE45
 * 0000000140ABBE2D: mov     rax, [rsi+118h]
 * 0000000140ABBE34: xor     edx, edx
 * 0000000140ABBE36: mov     rcx, [rsi+9C8h]
 * 0000000140ABBE3D: call    j__guard_dispatch_icall_nop
 * 0000000140ABBE42: mov     r15b, 80h
 * 0000000140ABBE45: mov     rax, [rsi+128h]
 * 0000000140ABBE4C: xor     edx, edx
 * 0000000140ABBE4E: mov     rcx, rbx
 * 0000000140ABBE51: call    j__guard_dispatch_icall_nop
 * 0000000140ABBE56: mov     r8, [rsi+4F8h]
 * 0000000140ABBE5D: mov     rdx, [r8]
 * 0000000140ABBE60: cmp     rdx, r8
 * 0000000140ABBE63: jz      short loc_140ABBE8D
 * 0000000140ABBE65: mov     rax, [rsi+688h]
 * 0000000140ABBE6C: mov     rcx, rdx
 * 0000000140ABBE6F: sub     rcx, [rsi+6A0h]
 * 0000000140ABBE76: lock or [rcx+rax], r15b
 * 0000000140ABBE7B: mov     rdx, [rdx]
 * 0000000140ABBE7E: add     r13d, r12d
 * 0000000140ABBE81: cmp     rdx, r8
 * 0000000140ABBE84: jnz     short loc_140ABBE65
 * 0000000140ABBE86: mov     dword ptr [rbp+0B30h+arg_8], r13d
 * 0000000140ABBE8D: mov     rax, [rsi+128h]
 * 0000000140ABBE94: xor     edx, edx
 * 0000000140ABBE96: mov     rcx, r14
 * 0000000140ABBE99: call    j__guard_dispatch_icall_nop
 * 0000000140ABBE9E: mov     r12, [rsi+578h]
 * 0000000140ABBEA5: mov     r14, [r12]
 * 0000000140ABBEA9: cmp     r14, r12
 * 0000000140ABBEAC: jz      loc_140ABBF85
 * 0000000140ABBEB2: mov     rax, [rsp+0C30h+var_BD8]
 * 0000000140ABBEB7: xor     r13d, r13d
 * 0000000140ABBEBA: mov     rdi, [rsp+0C30h+var_BE0]
 * 0000000140ABBEBF: mov     rcx, r14
 * 0000000140ABBEC2: sub     rcx, [rsi+710h]
 * 0000000140ABBEC9: cmp     rcx, rax
 * 0000000140ABBECC: jz      loc_140ABBF6B
 * 0000000140ABBED2: mov     r8, [rsi+688h]
 * 0000000140ABBED9: mov     rax, [rsi+708h]
 * 0000000140ABBEE0: mov     rdx, r8
 * 0000000140ABBEE3: mov     rbx, [rcx+rax]
 * 0000000140ABBEE7: test    [r8+rbx], r15b
 * 0000000140ABBEEB: jnz     short loc_140ABBF5D
 * 0000000140ABBEED: mov     rax, [rsi+690h]
 * 0000000140ABBEF4: mov     ecx, [rbx+rax]
 * 0000000140ABBEF7: test    [rsi+6A8h], ecx
 * 0000000140ABBEFD: jz      short loc_140ABBF5D
 * 0000000140ABBEFF: cmp     [rsi+8C0h], r13d
 * 0000000140ABBF06: jnz     short loc_140ABBF5D
 * 0000000140ABBF08: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABBF12: xor     edx, edx
 * 0000000140ABBF14: add     rax, rsi
 * 0000000140ABBF17: mov     rcx, rsi
 * 0000000140ABBF1A: mov     [rsi+8C8h], rax
 * 0000000140ABBF21: mov     rax, 0B3B74BDEE4453415h
 * 0000000140ABBF2B: add     rax, rdi
 * 0000000140ABBF2E: mov     [rsi+8D0h], rax
 * 0000000140ABBF35: movsxd  rax, dword ptr [rdi]
 * 0000000140ABBF38: mov     [rsi+8D8h], rax
 * 0000000140ABBF3F: mov     eax, 1
 * 0000000140ABBF44: mov     [rsi+8E0h], rbx
 * 0000000140ABBF4B: mov     [rsi+8C0h], eax
 * 0000000140ABBF51: call    sub_140AD049C
 * 0000000140ABBF56: mov     rdx, [rsi+688h]
 * 0000000140ABBF5D: mov     al, r15b
 * 0000000140ABBF60: not     al
 * 0000000140ABBF62: lock and [rdx+rbx], al
 * 0000000140ABBF66: mov     rax, [rsp+0C30h+var_BD8]
 * 0000000140ABBF6B: mov     r14, [r14]
 * 0000000140ABBF6E: cmp     r14, r12
 * 0000000140ABBF71: jnz     loc_140ABBEBF
 * 0000000140ABBF77: mov     r13d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140ABBF7E: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ABBF85: mov     rax, [rsi+130h]
 * 0000000140ABBF8C: xor     edx, edx
 * 0000000140ABBF8E: mov     rcx, [rsp+0C30h+var_BB8]
 * 0000000140ABBF93: call    j__guard_dispatch_icall_nop
 * 0000000140ABBF98: cmp     r15b, 80h
 * 0000000140ABBF9C: jnz     short loc_140ABBFB3
 * 0000000140ABBF9E: mov     rax, [rsi+120h]
 * 0000000140ABBFA5: xor     edx, edx
 * 0000000140ABBFA7: mov     rcx, [rsi+9C8h]
 * 0000000140ABBFAE: call    j__guard_dispatch_icall_nop
 * 0000000140ABBFB3: mov     rcx, [rsi+520h]
 * 0000000140ABBFBA: xor     edx, edx
 * 0000000140ABBFBC: mov     rax, [rsi+130h]
 * 0000000140ABBFC3: call    j__guard_dispatch_icall_nop
 * 0000000140ABBFC8: mov     rax, [rsi+170h]
 * 0000000140ABBFCF: call    j__guard_dispatch_icall_nop
 * 0000000140ABBFD4: shl     r13d, 8
 * 0000000140ABBFD8: add     [rsi+7F0h], r13d
 * 0000000140ABBFDF: jmp     loc_140ABA5AF
 * 0000000140ABBFE4: mov     r12, [rsi+508h]
 * 0000000140ABBFEB: xor     eax, eax
 * 0000000140ABBFED: mov     [rsp+0C30h+var_BC0], eax
 * 0000000140ABBFF1: mov     rax, [rsi+368h]
 * 0000000140ABBFF8: call    j__guard_dispatch_icall_nop
 * 0000000140ABBFFD: mov     [rbp+0B30h+var_B80], rax
 * 0000000140ABC001: cli
 * 0000000140ABC002: mov     rcx, gs:20h
 * 0000000140ABC00B: mov     rax, [rsi+618h]
 * 0000000140ABC012: mov     rcx, [rcx+rax]
 * 0000000140ABC016: sti
 * 0000000140ABC017: mov     rax, [rsi+158h]
 * 0000000140ABC01E: call    j__guard_dispatch_icall_nop
 * 0000000140ABC023: mov     rcx, [rsi+510h]
 * 0000000140ABC02A: mov     ebx, 1
 * 0000000140ABC02F: mov     rax, [rsi+0E0h]
 * 0000000140ABC036: mov     dl, bl
 * 0000000140ABC038: call    j__guard_dispatch_icall_nop
 * 0000000140ABC03D: mov     rax, [rsi+5E8h]
 * 0000000140ABC044: mov     rcx, [rax]
 * 0000000140ABC047: mov     r13d, [rcx]
 * 0000000140ABC04A: lea     rdx, [rcx+10h]
 * 0000000140ABC04E: mov     [rsp+0C30h+var_BD8], rdx
 * 0000000140ABC053: lea     rax, ds:0[r13*2]
 * 0000000140ABC05B: add     rax, r13
 * 0000000140ABC05E: lea     rax, [rdx+rax*8]
 * 0000000140ABC062: mov     [rsp+0C30h+var_BB8], rax
 * 0000000140ABC067: xor     eax, eax
 * 0000000140ABC069: mov     dword ptr [rbp+0B30h+arg_8], eax
 * 0000000140ABC06F: cmp     [rcx+0Ch], al
 * 0000000140ABC072: jz      short loc_140ABC088
 * 0000000140ABC074: mov     r13d, eax
 * 0000000140ABC077: mov     rax, [r12]
 * 0000000140ABC07B: jmp     short loc_140ABC083
 * 0000000140ABC07D: mov     rax, [rax]
 * 0000000140ABC080: add     r13d, ebx
 * 0000000140ABC083: cmp     rax, r12
 * 0000000140ABC086: jnz     short loc_140ABC07D
 * 0000000140ABC088: mov     r8d, [rsi+7D8h]
 * 0000000140ABC08F: lea     r15d, ds:0[r13*8]
 * 0000000140ABC097: rdtsc
 * 0000000140ABC099: shl     rdx, 20h
 * 0000000140ABC09D: mov     r9, 7010008004002001h
 * 0000000140ABC0A7: or      rax, rdx
 * 0000000140ABC0AA: mov     rcx, rax
 * 0000000140ABC0AD: ror     rax, 3
 * 0000000140ABC0B1: xor     rcx, rax
 * 0000000140ABC0B4: mov     rax, r9
 * 0000000140ABC0B7: mul     rcx
 * 0000000140ABC0BA: mov     rbx, rdx
 * 0000000140ABC0BD: mov     [rbp+0B30h+var_358], rdx
 * 0000000140ABC0C4: xor     ebx, eax
 * 0000000140ABC0C6: and     ebx, 7FFh
 * 0000000140ABC0CC: rdtsc
 * 0000000140ABC0CE: shl     rdx, 20h
 * 0000000140ABC0D2: or      rax, rdx
 * 0000000140ABC0D5: mov     rcx, rax
 * 0000000140ABC0D8: ror     rax, 3
 * 0000000140ABC0DC: xor     rcx, rax
 * 0000000140ABC0DF: mov     rax, r9
 * 0000000140ABC0E2: mul     rcx
 * 0000000140ABC0E5: lea     r9d, [rbx+1]
 * 0000000140ABC0E9: mov     ecx, 42h ; 'B'
 * 0000000140ABC0EE: xor     rax, rdx
 * 0000000140ABC0F1: mov     [rbp+0B30h+var_350], rdx
 * 0000000140ABC0F8: xor     edx, edx
 * 0000000140ABC0FA: div     r9
 * 0000000140ABC0FD: mov     rax, [rsi+0E8h]
 * 0000000140ABC104: mov     r14, rdx
 * 0000000140ABC107: lea     edx, [rbx+r15]
 * 0000000140ABC10B: call    j__guard_dispatch_icall_nop
 * 0000000140ABC110: mov     r11, rax
 * 0000000140ABC113: xor     eax, eax
 * 0000000140ABC115: test    r11, r11
 * 0000000140ABC118: jnz     short loc_140ABC128
 * 0000000140ABC11A: lea     ecx, [rax+1]
 * 0000000140ABC11D: add     [rsi+9E0h], ecx
 * 0000000140ABC123: jmp     loc_140ABC27A
 * 0000000140ABC128: mov     r10d, r14d
 * 0000000140ABC12B: mov     r9, r11
 * 0000000140ABC12E: cmp     r14d, 8
 * 0000000140ABC132: jb      short loc_140ABC189
 * 0000000140ABC134: mov     r8d, r14d
 * 0000000140ABC137: mov     esi, 1
 * 0000000140ABC13C: shr     r8, 3
 * 0000000140ABC140: mov     rdi, 7010008004002001h
 * 0000000140ABC14A: rdtsc
 * 0000000140ABC14C: shl     rdx, 20h
 * 0000000140ABC150: add     r10d, 0FFFFFFF8h
 * 0000000140ABC154: or      rax, rdx
 * 0000000140ABC157: mov     rcx, rax
 * 0000000140ABC15A: ror     rax, 3
 * 0000000140ABC15E: xor     rcx, rax
 * 0000000140ABC161: mov     rax, rdi
 * 0000000140ABC164: mul     rcx
 * 0000000140ABC167: mov     [rbp+0B30h+var_348], rdx
 * 0000000140ABC16E: xor     rdx, rax
 * 0000000140ABC171: mov     [r9], rdx
 * 0000000140ABC174: add     r9, 8
 * 0000000140ABC178: sub     r8, rsi
 * 0000000140ABC17B: jnz     short loc_140ABC14A
 * 0000000140ABC17D: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABC182: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ABC189: test    r10d, r10d
 * 0000000140ABC18C: jz      short loc_140ABC1D1
 * 0000000140ABC18E: rdtsc
 * 0000000140ABC190: shl     rdx, 20h
 * 0000000140ABC194: or      rax, rdx
 * 0000000140ABC197: mov     rcx, rax
 * 0000000140ABC19A: ror     rax, 3
 * 0000000140ABC19E: xor     rcx, rax
 * 0000000140ABC1A1: mov     rax, 7010008004002001h
 * 0000000140ABC1AB: mul     rcx
 * 0000000140ABC1AE: mov     ecx, 0FFFFFFFFh
 * 0000000140ABC1B3: mov     [rbp+0B30h+var_340], rdx
 * 0000000140ABC1BA: xor     rdx, rax
 * 0000000140ABC1BD: mov     eax, 1
 * 0000000140ABC1C2: mov     [r9], dl
 * 0000000140ABC1C5: add     r9, rax
 * 0000000140ABC1C8: shr     rdx, 8
 * 0000000140ABC1CC: add     r10d, ecx
 * 0000000140ABC1CF: jnz     short loc_140ABC1C2
 * 0000000140ABC1D1: mov     r10d, r14d
 * 0000000140ABC1D4: sub     ebx, r14d
 * 0000000140ABC1D7: mov     r8d, r15d
 * 0000000140ABC1DA: mov     r14d, 1
 * 0000000140ABC1E0: add     r8, r10
 * 0000000140ABC1E3: mov     r15, 7010008004002001h
 * 0000000140ABC1ED: add     r8, r11
 * 0000000140ABC1F0: cmp     ebx, 8
 * 0000000140ABC1F3: jb      short loc_140ABC22E
 * 0000000140ABC1F5: mov     r9d, ebx
 * 0000000140ABC1F8: shr     r9, 3
 * 0000000140ABC1FC: rdtsc
 * 0000000140ABC1FE: shl     rdx, 20h
 * 0000000140ABC202: add     ebx, 0FFFFFFF8h
 * 0000000140ABC205: or      rax, rdx
 * 0000000140ABC208: mov     rcx, rax
 * 0000000140ABC20B: ror     rax, 3
 * 0000000140ABC20F: xor     rcx, rax
 * 0000000140ABC212: mov     rax, r15
 * 0000000140ABC215: mul     rcx
 * 0000000140ABC218: mov     [rbp+0B30h+var_338], rdx
 * 0000000140ABC21F: xor     rdx, rax
 * 0000000140ABC222: mov     [r8], rdx
 * 0000000140ABC225: add     r8, 8
 * 0000000140ABC229: sub     r9, r14
 * 0000000140ABC22C: jnz     short loc_140ABC1FC
 * 0000000140ABC22E: test    ebx, ebx
 * 0000000140ABC230: jz      short loc_140ABC268
 * 0000000140ABC232: rdtsc
 * 0000000140ABC234: shl     rdx, 20h
 * 0000000140ABC238: or      rax, rdx
 * 0000000140ABC23B: mov     rcx, rax
 * 0000000140ABC23E: ror     rax, 3
 * 0000000140ABC242: xor     rcx, rax
 * 0000000140ABC245: mov     rax, r15
 * 0000000140ABC248: mul     rcx
 * 0000000140ABC24B: mov     [rbp+0B30h+var_258], rdx
 * 0000000140ABC252: xor     rdx, rax
 * 0000000140ABC255: mov     eax, 0FFFFFFFFh
 * 0000000140ABC25A: mov     [r8], dl
 * 0000000140ABC25D: add     r8, r14
 * 0000000140ABC260: shr     rdx, 8
 * 0000000140ABC264: add     ebx, eax
 * 0000000140ABC266: jnz     short loc_140ABC25A
 * 0000000140ABC268: lea     r15, [r10+r11]
 * 0000000140ABC26C: mov     [rbp+0B30h+var_998], r11
 * 0000000140ABC273: test    r15, r15
 * 0000000140ABC276: jnz     short loc_140ABC286
 * 0000000140ABC278: xor     eax, eax
 * 0000000140ABC27A: mov     [rbp+0B30h+var_998], rax
 * 0000000140ABC281: jmp     loc_140ABC3C5
 * 0000000140ABC286: mov     rbx, [r12]
 * 0000000140ABC28A: cmp     rbx, r12
 * 0000000140ABC28D: jz      short loc_140ABC2DC
 * 0000000140ABC28F: mov     edi, dword ptr [rbp+0B30h+arg_8]
 * 0000000140ABC295: mov     rax, [rsi+720h]
 * 0000000140ABC29C: mov     rcx, rbx
 * 0000000140ABC29F: sub     rcx, [rsi+718h]
 * 0000000140ABC2A6: mov     r14, [rcx+rax]
 * 0000000140ABC2AA: mov     rax, [rsi+298h]
 * 0000000140ABC2B1: mov     rcx, r14
 * 0000000140ABC2B4: call    j__guard_dispatch_icall_nop
 * 0000000140ABC2B9: test    eax, eax
 * 0000000140ABC2BB: jnz     short loc_140ABC2CA
 * 0000000140ABC2BD: cmp     edi, r13d
 * 0000000140ABC2C0: jnb     short loc_140ABC2CA
 * 0000000140ABC2C2: mov     eax, edi
 * 0000000140ABC2C4: inc     edi
 * 0000000140ABC2C6: mov     [r15+rax*8], r14
 * 0000000140ABC2CA: mov     rbx, [rbx]
 * 0000000140ABC2CD: inc     [rsp+0C30h+var_BC0]
 * 0000000140ABC2D1: cmp     rbx, r12
 * 0000000140ABC2D4: jnz     short loc_140ABC295
 * 0000000140ABC2D6: mov     dword ptr [rbp+0B30h+arg_8], edi
 * 0000000140ABC2DC: mov     r14d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140ABC2E3: mov     rcx, r15
 * 0000000140ABC2E6: mov     rax, [rsi+388h]
 * 0000000140ABC2ED: mov     edx, r14d
 * 0000000140ABC2F0: call    j__guard_dispatch_icall_nop
 * 0000000140ABC2F5: mov     r12, [rsp+0C30h+var_BD8]
 * 0000000140ABC2FA: mov     r13, [rsp+0C30h+var_BB8]
 * 0000000140ABC2FF: mov     rdi, [rsp+0C30h+var_BE0]
 * 0000000140ABC304: mov     rbx, [r12+8]
 * 0000000140ABC309: mov     rax, [rsi+298h]
 * 0000000140ABC310: mov     rcx, rbx
 * 0000000140ABC313: call    j__guard_dispatch_icall_nop
 * 0000000140ABC318: test    eax, eax
 * 0000000140ABC31A: jnz     loc_140ABC3B1
 * 0000000140ABC320: xor     eax, eax
 * 0000000140ABC322: lea     edx, [r14-1]
 * 0000000140ABC326: mov     r8d, eax
 * 0000000140ABC329: test    edx, edx
 * 0000000140ABC32B: js      short loc_140ABC35B
 * 0000000140ABC32D: lea     ecx, [rdx+r8]
 * 0000000140ABC331: sar     ecx, 1
 * 0000000140ABC333: movsxd  rax, ecx
 * 0000000140ABC336: cmp     rbx, [r15+rax*8]
 * 0000000140ABC33A: jnb     short loc_140ABC347
 * 0000000140ABC33C: xor     eax, eax
 * 0000000140ABC33E: test    ecx, ecx
 * 0000000140ABC340: jz      short loc_140ABC35B
 * 0000000140ABC342: lea     edx, [rcx-1]
 * 0000000140ABC345: jmp     short loc_140ABC34D
 * 0000000140ABC347: jbe     short loc_140ABC354
 * 0000000140ABC349: lea     r8d, [rcx+1]
 * 0000000140ABC34D: cmp     edx, r8d
 * 0000000140ABC350: jge     short loc_140ABC32D
 * 0000000140ABC352: jmp     short loc_140ABC359
 * 0000000140ABC354: cmp     edx, r8d
 * 0000000140ABC357: jge     short loc_140ABC3B1
 * 0000000140ABC359: xor     eax, eax
 * 0000000140ABC35B: cmp     [rsi+8C0h], eax
 * 0000000140ABC361: jnz     short loc_140ABC3B1
 * 0000000140ABC363: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABC36D: xor     edx, edx
 * 0000000140ABC36F: add     rax, rsi
 * 0000000140ABC372: mov     rcx, rsi
 * 0000000140ABC375: mov     [rsi+8C8h], rax
 * 0000000140ABC37C: mov     rax, 0B3B74BDEE4453415h
 * 0000000140ABC386: add     rax, rdi
 * 0000000140ABC389: mov     [rsi+8D0h], rax
 * 0000000140ABC390: movsxd  rax, dword ptr [rdi]
 * 0000000140ABC393: mov     [rsi+8D8h], rax
 * 0000000140ABC39A: mov     eax, 1
 * 0000000140ABC39F: mov     [rsi+8E0h], rbx
 * 0000000140ABC3A6: mov     [rsi+8C0h], eax
 * 0000000140ABC3AC: call    sub_140AD049C
 * 0000000140ABC3B1: add     r12, 18h
 * 0000000140ABC3B5: cmp     r12, r13
 * 0000000140ABC3B8: jb      loc_140ABC304
 * 0000000140ABC3BE: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ABC3C5: mov     rcx, [rsi+510h]
 * 0000000140ABC3CC: mov     rax, [rsi+108h]
 * 0000000140ABC3D3: call    j__guard_dispatch_icall_nop
 * 0000000140ABC3D8: mov     rax, [rsi+160h]
 * 0000000140ABC3DF: call    j__guard_dispatch_icall_nop
 * 0000000140ABC3E4: mov     rax, [rsi+370h]
 * 0000000140ABC3EB: mov     rcx, [rbp+0B30h+var_B80]
 * 0000000140ABC3EF: call    j__guard_dispatch_icall_nop
 * 0000000140ABC3F4: xor     eax, eax
 * 0000000140ABC3F6: cmp     [rbp+0B30h+var_998], rax
 * 0000000140ABC3FD: jz      loc_140ABA263
 * 0000000140ABC403: mov     eax, [rsp+0C30h+var_BC0]
 * 0000000140ABC407: shl     eax, 9
 * 0000000140ABC40A: add     [rsi+7F0h], eax
 * 0000000140ABC410: mov     rax, [rsi+0F0h]
 * 0000000140ABC417: mov     rcx, [rbp+0B30h+var_998]
 * 0000000140ABC41E: call    j__guard_dispatch_icall_nop
 * 0000000140ABC423: jmp     loc_140ABA5AF
 * 0000000140ABC428: mov     r15d, 40000000h
 * 0000000140ABC42E: test    [rsi+958h], r15d
 * 0000000140ABC435: jz      short loc_140ABC48E
 * 0000000140ABC437: test    dword ptr [rsi+95Ch], 1000h
 * 0000000140ABC441: jnz     short loc_140ABC48E
 * 0000000140ABC443: rdtsc
 * 0000000140ABC445: shl     rdx, 20h
 * 0000000140ABC449: or      rax, rdx
 * 0000000140ABC44C: mov     rcx, rax
 * 0000000140ABC44F: ror     rax, 3
 * 0000000140ABC453: xor     rcx, rax
 * 0000000140ABC456: mov     rax, 7010008004002001h
 * 0000000140ABC460: mul     rcx
 * 0000000140ABC463: mov     rcx, rdx
 * 0000000140ABC466: mov     [rbp+0B30h+var_250], rdx
 * 0000000140ABC46D: xor     rcx, rax
 * 0000000140ABC470: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 0000000140ABC47A: mul     rcx
 * 0000000140ABC47D: shr     rdx, 2
 * 0000000140ABC481: lea     rax, [rdx+rdx*4]
 * 0000000140ABC485: sub     rcx, rax
 * 0000000140ABC488: mov     [rsi+7ECh], ecx
 * 0000000140ABC48E: mov     r12d, 1
 * 0000000140ABC494: mov     ecx, [rsi+7ECh]
 * 0000000140ABC49A: xor     eax, eax
 * 0000000140ABC49C: test    ecx, ecx
 * 0000000140ABC49E: jz      loc_140ABEA76
 * 0000000140ABC4A4: sub     ecx, 1
 * 0000000140ABC4A7: jz      loc_140ABE90D
 * 0000000140ABC4AD: sub     ecx, 1
 * 0000000140ABC4B0: jz      loc_140ABE767
 * 0000000140ABC4B6: sub     ecx, 1
 * 0000000140ABC4B9: jz      loc_140ABC7E8
 * 0000000140ABC4BF: sub     ecx, 1
 * 0000000140ABC4C2: jz      loc_140ABC638
 * 0000000140ABC4C8: cmp     ecx, 1
 * 0000000140ABC4CB: jnz     loc_140ABEBEF
 * 0000000140ABC4D1: mov     rbx, r13
 * 0000000140ABC4D4: mov     [rbp+0B30h+arg_10], 0FFh
 * 0000000140ABC4DB: mov     r13d, eax
 * 0000000140ABC4DE: mov     r14d, eax
 * 0000000140ABC4E1: mov     r15d, eax
 * 0000000140ABC4E4: mov     [rbp+0B30h+var_8E0], rax
 * 0000000140ABC4EB: jmp     loc_140ABC5F2
 * 0000000140ABC4F0: mov     rax, [rsi+1F8h]
 * 0000000140ABC4F7: lea     rdx, [rbp+0B30h+var_1E8]
 * 0000000140ABC4FE: mov     rcx, [rbp+0B30h+var_A20]
 * 0000000140ABC505: add     r13d, r12d
 * 0000000140ABC508: call    j__guard_dispatch_icall_nop
 * 0000000140ABC50D: test    rax, rax
 * 0000000140ABC510: jnz     loc_140ABC5F2
 * 0000000140ABC516: test    dword ptr [rsi+958h], 40000000h
 * 0000000140ABC520: jz      short loc_140ABC569
 * 0000000140ABC522: mov     rcx, [rsi+0A48h]
 * 0000000140ABC529: lea     edx, [rax+30h]
 * 0000000140ABC52C: lea     r8d, [rax+6]
 * 0000000140ABC530: mov     rax, [rbx]
 * 0000000140ABC533: add     edx, 0FFFFFFF8h
 * 0000000140ABC536: mov     [rcx], rax
 * 0000000140ABC539: add     rbx, 8
 * 0000000140ABC53D: add     rcx, 8
 * 0000000140ABC541: sub     r8, r12
 * 0000000140ABC544: jnz     short loc_140ABC530
 * 0000000140ABC546: test    edx, edx
 * 0000000140ABC548: jz      short loc_140ABC562
 * 0000000140ABC54A: mov     esi, 0FFFFFFFFh
 * 0000000140ABC54F: mov     al, [rbx]
 * 0000000140ABC551: add     rbx, r12
 * 0000000140ABC554: mov     [rcx], al
 * 0000000140ABC556: add     rcx, r12
 * 0000000140ABC559: add     edx, esi
 * 0000000140ABC55B: jnz     short loc_140ABC54F
 * 0000000140ABC55D: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABC562: mov     rbx, [rsi+0A48h]
 * 0000000140ABC569: mov     rax, [rbp+0B30h+var_A20]
 * 0000000140ABC570: mov     [rbx+18h], rax
 * 0000000140ABC574: mov     rax, [rsi+568h]
 * 0000000140ABC57B: mov     [rax], rbx
 * 0000000140ABC57E: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140ABC585: mov     rax, [rbp+0B30h+var_A20]
 * 0000000140ABC58C: mov     rcx, [rsi+568h]
 * 0000000140ABC593: mov     [rcx+8], rax
 * 0000000140ABC597: xor     eax, eax
 * 0000000140ABC599: mov     dword ptr [rcx+14h], 1000h
 * 0000000140ABC5A0: cmp     [rsi+8C0h], eax
 * 0000000140ABC5A6: jnz     short loc_140ABC5F2
 * 0000000140ABC5A8: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABC5B2: xor     edx, edx
 * 0000000140ABC5B4: add     rax, rsi
 * 0000000140ABC5B7: mov     rcx, rsi
 * 0000000140ABC5BA: mov     [rsi+8C8h], rax
 * 0000000140ABC5C1: mov     rax, 0B3B74BDEE4453415h
 * 0000000140ABC5CB: add     rax, rbx
 * 0000000140ABC5CE: mov     [rsi+8D0h], rax
 * 0000000140ABC5D5: movsxd  rax, dword ptr [rbx]
 * 0000000140ABC5D8: mov     [rsi+8D8h], rax
 * 0000000140ABC5DF: mov     [rsi+8E0h], r15
 * 0000000140ABC5E6: mov     [rsi+8C0h], r12d
 * 0000000140ABC5ED: call    sub_140AD049C
 * 0000000140ABC5F2: mov     rax, [rsi+420h]
 * 0000000140ABC5F9: lea     r9, [rbp+0B30h+var_A20]
 * 0000000140ABC600: lea     r8, [rbp+0B30h+arg_10]
 * 0000000140ABC607: mov     ecx, r14d
 * 0000000140ABC60A: lea     rdx, [rbp+0B30h+var_8E0]
 * 0000000140ABC611: call    j__guard_dispatch_icall_nop
 * 0000000140ABC616: test    eax, eax
 * 0000000140ABC618: jnz     loc_140ABC4F0
 * 0000000140ABC61E: add     r14d, r12d
 * 0000000140ABC621: add     r15, r12
 * 0000000140ABC624: mov     eax, 0
 * 0000000140ABC629: cmp     r14d, 3
 * 0000000140ABC62D: jb      loc_140ABC4E4
 * 0000000140ABC633: jmp     loc_140ABEBB2
 * 0000000140ABC638: mov     r13d, eax
 * 0000000140ABC63B: mov     [rbp+0B30h+var_B58], eax
 * 0000000140ABC63E: mov     rax, [rsi+308h]
 * 0000000140ABC645: xor     ecx, ecx
 * 0000000140ABC647: call    j__guard_dispatch_icall_nop
 * 0000000140ABC64C: mov     r15, rax
 * 0000000140ABC64F: xor     eax, eax
 * 0000000140ABC651: test    r15, r15
 * 0000000140ABC654: jz      loc_140ABE75C
 * 0000000140ABC65A: mov     rdi, [rsp+0C30h+var_BE0]
 * 0000000140ABC65F: mov     [rbp+0B30h+var_8F0], rax
 * 0000000140ABC666: lea     rdx, [rbp+0B30h+var_8F0]
 * 0000000140ABC66D: mov     rax, [rsi+300h]
 * 0000000140ABC674: mov     rcx, r15
 * 0000000140ABC677: mov     rbx, rdi
 * 0000000140ABC67A: call    j__guard_dispatch_icall_nop
 * 0000000140ABC67F: mov     r14, rax
 * 0000000140ABC682: test    rax, rax
 * 0000000140ABC685: jz      loc_140ABC7B4
 * 0000000140ABC68B: mov     edi, 6
 * 0000000140ABC690: xor     r13d, r13d
 * 0000000140ABC693: mov     rax, [rsi+1F8h]
 * 0000000140ABC69A: lea     rdx, [rbp+0B30h+var_1E0]
 * 0000000140ABC6A1: mov     rcx, r14
 * 0000000140ABC6A4: inc     r12d
 * 0000000140ABC6A7: call    j__guard_dispatch_icall_nop
 * 0000000140ABC6AC: test    rax, rax
 * 0000000140ABC6AF: jnz     loc_140ABC789
 * 0000000140ABC6B5: test    dword ptr [rsi+958h], 40000000h
 * 0000000140ABC6BF: lea     r9d, [rax+1]
 * 0000000140ABC6C3: jz      short loc_140ABC70B
 * 0000000140ABC6C5: mov     rcx, [rsi+0A48h]
 * 0000000140ABC6CC: lea     edx, [rax+30h]
 * 0000000140ABC6CF: mov     r8, rdi
 * 0000000140ABC6D2: mov     rax, [rbx]
 * 0000000140ABC6D5: add     edx, 0FFFFFFF8h
 * 0000000140ABC6D8: mov     [rcx], rax
 * 0000000140ABC6DB: add     rbx, 8
 * 0000000140ABC6DF: add     rcx, 8
 * 0000000140ABC6E3: sub     r8, r9
 * 0000000140ABC6E6: jnz     short loc_140ABC6D2
 * 0000000140ABC6E8: test    edx, edx
 * 0000000140ABC6EA: jz      short loc_140ABC704
 * 0000000140ABC6EC: mov     esi, 0FFFFFFFFh
 * 0000000140ABC6F1: mov     al, [rbx]
 * 0000000140ABC6F3: add     rbx, r9
 * 0000000140ABC6F6: mov     [rcx], al
 * 0000000140ABC6F8: add     rcx, r9
 * 0000000140ABC6FB: add     edx, esi
 * 0000000140ABC6FD: jnz     short loc_140ABC6F1
 * 0000000140ABC6FF: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABC704: mov     rbx, [rsi+0A48h]
 * 0000000140ABC70B: mov     [rbx+18h], r14
 * 0000000140ABC70F: mov     [rbx+20h], r15
 * 0000000140ABC713: mov     rax, [rsi+568h]
 * 0000000140ABC71A: mov     [rax], rbx
 * 0000000140ABC71D: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140ABC724: mov     rax, [rsi+568h]
 * 0000000140ABC72B: mov     [rax+8], r14
 * 0000000140ABC72F: mov     dword ptr [rax+14h], 1000h
 * 0000000140ABC736: cmp     [rsi+8C0h], r13d
 * 0000000140ABC73D: jnz     short loc_140ABC789
 * 0000000140ABC73F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABC749: xor     edx, edx
 * 0000000140ABC74B: add     rax, rsi
 * 0000000140ABC74E: mov     rcx, rsi
 * 0000000140ABC751: mov     [rsi+8C8h], rax
 * 0000000140ABC758: mov     rax, 0B3B74BDEE4453415h
 * 0000000140ABC762: add     rax, rbx
 * 0000000140ABC765: mov     [rsi+8D0h], rax
 * 0000000140ABC76C: movsxd  rax, dword ptr [rbx]
 * 0000000140ABC76F: mov     [rsi+8D8h], rax
 * 0000000140ABC776: mov     [rsi+8E0h], rdi
 * 0000000140ABC77D: mov     [rsi+8C0h], r9d
 * 0000000140ABC784: call    sub_140AD049C
 * 0000000140ABC789: mov     rax, [rsi+300h]
 * 0000000140ABC790: lea     rdx, [rbp+0B30h+var_8F0]
 * 0000000140ABC797: mov     rcx, r15
 * 0000000140ABC79A: call    j__guard_dispatch_icall_nop
 * 0000000140ABC79F: mov     r14, rax
 * 0000000140ABC7A2: test    rax, rax
 * 0000000140ABC7A5: jnz     loc_140ABC693
 * 0000000140ABC7AB: mov     r13d, [rbp+0B30h+var_B58]
 * 0000000140ABC7AF: mov     rdi, [rsp+0C30h+var_BE0]
 * 0000000140ABC7B4: mov     rax, [rsi+308h]
 * 0000000140ABC7BB: add     r13d, r12d
 * 0000000140ABC7BE: mov     rcx, r15
 * 0000000140ABC7C1: mov     [rbp+0B30h+var_B58], r13d
 * 0000000140ABC7C5: call    j__guard_dispatch_icall_nop
 * 0000000140ABC7CA: mov     r15, rax
 * 0000000140ABC7CD: xor     eax, eax
 * 0000000140ABC7CF: lea     r12d, [rax+1]
 * 0000000140ABC7D3: test    r15, r15
 * 0000000140ABC7D6: jnz     loc_140ABC65F
 * 0000000140ABC7DC: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ABC7E3: jmp     loc_140ABE75C
 * 0000000140ABC7E8: mov     r13d, eax
 * 0000000140ABC7EB: mov     rax, [rsi+4C8h]
 * 0000000140ABC7F2: mov     [rbp+0B30h+var_AB0], rsi
 * 0000000140ABC7F9: mov     rbx, [rax]
 * 0000000140ABC7FC: mov     [rbp+0B30h+var_B78], rbx
 * 0000000140ABC800: test    [rsi+958h], r15d
 * 0000000140ABC807: jz      short loc_140ABC810
 * 0000000140ABC809: xor     eax, eax
 * 0000000140ABC80B: jmp     loc_140ABEBB9
 * 0000000140ABC810: mov     rcx, [rsp+0C30h+var_BE0]
 * 0000000140ABC815: xor     edx, edx
 * 0000000140ABC817: mov     rax, [rcx+28h]
 * 0000000140ABC81B: test    rax, rax
 * 0000000140ABC81E: jz      loc_140ABC8B4
 * 0000000140ABC824: mov     r13d, r12d
 * 0000000140ABC827: cmp     rbx, rax
 * 0000000140ABC82A: jz      loc_140ABE75C
 * 0000000140ABC830: mov     [rcx+18h], rbx
 * 0000000140ABC834: mov     rax, [rsi+568h]
 * 0000000140ABC83B: mov     [rax], rcx
 * 0000000140ABC83E: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140ABC845: mov     rax, [rsi+568h]
 * 0000000140ABC84C: mov     [rax+8], rbx
 * 0000000140ABC850: mov     dword ptr [rax+14h], 1000h
 * 0000000140ABC857: cmp     [rsi+8C0h], edx
 * 0000000140ABC85D: jnz     loc_140ABE75C
 * 0000000140ABC863: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABC86D: add     rax, rsi
 * 0000000140ABC870: mov     [rsi+8C8h], rax
 * 0000000140ABC877: mov     rax, 0B3B74BDEE4453415h
 * 0000000140ABC881: add     rax, rcx
 * 0000000140ABC884: mov     [rsi+8D0h], rax
 * 0000000140ABC88B: movsxd  rax, dword ptr [rcx]
 * 0000000140ABC88E: mov     rcx, rsi
 * 0000000140ABC891: mov     [rsi+8D8h], rax
 * 0000000140ABC898: mov     qword ptr [rsi+8E0h], 5
 * 0000000140ABC8A3: mov     [rsi+8C0h], r12d
 * 0000000140ABC8AA: call    sub_140AD049C
 * 0000000140ABC8AF: jmp     loc_140ABE75C
 * 0000000140ABC8B4: test    rbx, rbx
 * 0000000140ABC8B7: jz      loc_140ABE75C
 * 0000000140ABC8BD: mov     rax, [rsi+1F0h]
 * 0000000140ABC8C4: lea     rdx, [rbp+0B30h+var_230]
 * 0000000140ABC8CB: mov     rcx, rbx
 * 0000000140ABC8CE: mov     [rbp+0B30h+var_B58], r12d
 * 0000000140ABC8D2: mov     [rbp+0B30h+var_B10], rsi
 * 0000000140ABC8D6: call    j__guard_dispatch_icall_nop
 * 0000000140ABC8DB: mov     r12, [rbp+0B30h+BugCheckParameter2]
 * 0000000140ABC8E2: mov     r13, rax
 * 0000000140ABC8E5: mov     r15d, [rbp+0B30h+var_21C]
 * 0000000140ABC8EC: mov     [rbp+0B30h+var_BA8], rax
 * 0000000140ABC8F0: xor     eax, eax
 * 0000000140ABC8F2: mov     dword ptr [rbp+0B30h+arg_8], r15d
 * 0000000140ABC8F9: mov     [rbp+0B30h+var_B5C], r15d
 * 0000000140ABC8FD: mov     [rbp+0B30h+var_B70], r12
 * 0000000140ABC901: test    r12, r12
 * 0000000140ABC904: jnz     short loc_140ABC920
 * 0000000140ABC906: test    dword ptr [rsi+958h], 200000h
 * 0000000140ABC910: jz      loc_140ACC94B
 * 0000000140ABC916: mov     ecx, 0C000007Bh
 * 0000000140ABC91B: jmp     loc_140ABE721
 * 0000000140ABC920: mov     ecx, 4
 * 0000000140ABC925: mov     [rbp+0B30h+var_A60], rax
 * 0000000140ABC92C: lea     rax, [rbp+0B30h+var_A58]
 * 0000000140ABC933: xor     edx, edx
 * 0000000140ABC935: mov     r9d, 0FFFFFFFFh
 * 0000000140ABC93B: lea     r8d, [rcx-3]
 * 0000000140ABC93F: mov     [rax], dl
 * 0000000140ABC941: add     rax, r8
 * 0000000140ABC944: add     ecx, r9d
 * 0000000140ABC947: jnz     short loc_140ABC93F
 * 0000000140ABC949: xor     eax, eax
 * 0000000140ABC94B: mov     r14d, eax
 * 0000000140ABC94E: cmp     [rsi+7D4h], eax
 * 0000000140ABC954: jbe     loc_140ABCB4A
 * 0000000140ABC95A: mov     edx, [rbp+0B30h+var_A58]
 * 0000000140ABC960: mov     r9d, dword ptr [rbp+0B30h+var_A60+4]
 * 0000000140ABC967: mov     r10d, dword ptr [rbp+0B30h+var_A60]
 * 0000000140ABC96E: mov     rax, [rsi+0A40h]
 * 0000000140ABC975: mov     rbx, rsi
 * 0000000140ABC978: test    rax, rax
 * 0000000140ABC97B: cmovnz  rbx, rax
 * 0000000140ABC97F: xor     eax, eax
 * 0000000140ABC981: mov     r11d, eax
 * 0000000140ABC984: mov     r8d, [rbx+7D0h]
 * 0000000140ABC98B: add     r8, rbx
 * 0000000140ABC98E: test    r10d, r10d
 * 0000000140ABC991: jz      short loc_140ABC9A1
 * 0000000140ABC993: cmp     r9d, r14d
 * 0000000140ABC996: ja      short loc_140ABC9A1
 * 0000000140ABC998: mov     r8d, edx
 * 0000000140ABC99B: mov     r11d, r9d
 * 0000000140ABC99E: add     r8, rbx
 * 0000000140ABC9A1: cmp     r11d, r14d
 * 0000000140ABC9A4: jz      loc_140ABCAD7
 * 0000000140ABC9AA: mov     esi, 2
 * 0000000140ABC9AF: mov     r9d, r14d
 * 0000000140ABC9B2: sub     r9d, r11d
 * 0000000140ABC9B5: mov     r15, 0AAAAAAAAAAAAAAABh
 * 0000000140ABC9BF: mov     r11d, r14d
 * 0000000140ABC9C2: lea     edi, [rsi+0Ah]
 * 0000000140ABC9C5: mov     ecx, [r8]
 * 0000000140ABC9C8: cmp     ecx, edi
 * 0000000140ABC9CA: jg      short loc_140ABCA0F
 * 0000000140ABC9CC: jz      short loc_140ABCA2C
 * 0000000140ABC9CE: sub     ecx, 1
 * 0000000140ABC9D1: jz      short loc_140ABCA2C
 * 0000000140ABC9D3: sub     ecx, 6
 * 0000000140ABC9D6: jz      short loc_140ABC9FE
 * 0000000140ABC9D8: sub     ecx, 1
 * 0000000140ABC9DB: jz      short loc_140ABC9F4
 * 0000000140ABC9DD: cmp     ecx, esi
 * 0000000140ABC9DF: jnz     loc_140ABCA6B
 * 0000000140ABC9E5: mov     eax, [r8+1Ch]
 * 0000000140ABC9E9: add     eax, 3
 * 0000000140ABC9EC: shl     eax, 4
 * 0000000140ABC9EF: jmp     loc_140ABCAA9
 * 0000000140ABC9F4: movzx   eax, word ptr [r8+20h]
 * 0000000140ABC9F9: jmp     loc_140ABCAA3
 * 0000000140ABC9FE: mov     eax, [r8+18h]
 * 0000000140ABCA02: add     eax, esi
 * 0000000140ABCA04: lea     eax, [rax+rax*2]
 * 0000000140ABCA07: shl     eax, 3
 * 0000000140ABCA0A: jmp     loc_140ABCAA9
 * 0000000140ABCA0F: cmp     ecx, 1Ch
 * 0000000140ABCA12: jz      loc_140ABCA9E
 * 0000000140ABCA18: cmp     ecx, 1Eh
 * 0000000140ABCA1B: jz      short loc_140ABCA72
 * 0000000140ABCA1D: cmp     ecx, 20h ; ' '
 * 0000000140ABCA20: jle     short loc_140ABCA6B
 * 0000000140ABCA22: cmp     ecx, 22h ; '"'
 * 0000000140ABCA25: jle     short loc_140ABCA43
 * 0000000140ABCA27: cmp     ecx, 2Bh ; '+'
 * 0000000140ABCA2A: jnz     short loc_140ABCA6B
 * 0000000140ABCA2C: mov     ecx, [r8+10h]
 * 0000000140ABCA30: mov     rax, r15
 * 0000000140ABCA33: mul     rcx
 * 0000000140ABCA36: shr     rdx, 3
 * 0000000140ABCA3A: lea     eax, ds:30h[rdx*4]
 * 0000000140ABCA41: jmp     short loc_140ABCAA9
 * 0000000140ABCA43: mov     ecx, [r8+20h]
 * 0000000140ABCA47: mov     edx, [r8+28h]
 * 0000000140ABCA4B: and     ecx, 0FFFh
 * 0000000140ABCA51: add     rdx, 0FFFh
 * 0000000140ABCA58: add     rdx, rcx
 * 0000000140ABCA5B: shr     rdx, 0Ch
 * 0000000140ABCA5F: lea     eax, [rdx+rdx*4]
 * 0000000140ABCA62: lea     eax, ds:30h[rax*4]
 * 0000000140ABCA69: jmp     short loc_140ABCAA9
 * 0000000140ABCA6B: mov     eax, 30h ; '0'
 * 0000000140ABCA70: jmp     short loc_140ABCAA9
 * 0000000140ABCA72: mov     eax, [r8+24h]
 * 0000000140ABCA76: lea     ecx, [rax-1]
 * 0000000140ABCA79: neg     eax
 * 0000000140ABCA7B: sbb     eax, eax
 * 0000000140ABCA7D: and     ecx, eax
 * 0000000140ABCA7F: mov     rax, r15
 * 0000000140ABCA82: mul     rcx
 * 0000000140ABCA85: movzx   eax, word ptr [r8+28h]
 * 0000000140ABCA8A: shr     rdx, 3
 * 0000000140ABCA8E: add     edx, 7
 * 0000000140ABCA91: and     edx, 0FFFFFFF8h
 * 0000000140ABCA94: add     eax, esi
 * 0000000140ABCA96: lea     eax, [rax+rax*2]
 * 0000000140ABCA99: lea     eax, [rdx+rax*8]
 * 0000000140ABCA9C: jmp     short loc_140ABCAA9
 * 0000000140ABCA9E: movzx   eax, word ptr [r8+28h]
 * 0000000140ABCAA3: add     eax, 37h ; '7'
 * 0000000140ABCAA6: and     eax, 0FFFFFFF8h
 * 0000000140ABCAA9: add     r8, rax
 * 0000000140ABCAAC: mov     eax, 1
 * 0000000140ABCAB1: sub     r9, rax
 * 0000000140ABCAB4: jnz     loc_140ABC9C5
 * 0000000140ABCABA: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABCABF: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ABCAC6: mov     r15d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140ABCACD: mov     r12, [rbp+0B30h+var_B70]
 * 0000000140ABCAD1: mov     r13, [rbp+0B30h+var_BA8]
 * 0000000140ABCAD5: jmp     short loc_140ABCADC
 * 0000000140ABCAD7: mov     eax, 1
 * 0000000140ABCADC: mov     edx, r8d
 * 0000000140ABCADF: mov     dword ptr [rbp+0B30h+var_A60], eax
 * 0000000140ABCAE5: sub     edx, ebx
 * 0000000140ABCAE7: mov     dword ptr [rbp+0B30h+var_A60+4], r11d
 * 0000000140ABCAEE: mov     [rbp+0B30h+var_A58], edx
 * 0000000140ABCAF4: mov     r10d, eax
 * 0000000140ABCAF7: movsxd  rcx, dword ptr [r8]
 * 0000000140ABCAFA: mov     r9d, r11d
 * 0000000140ABCAFD: cmp     ecx, 2Bh ; '+'
 * 0000000140ABCB00: ja      short loc_140ABCB22
 * 0000000140ABCB02: mov     r11, 80000001002h
 * 0000000140ABCB0C: bt      r11, rcx
 * 0000000140ABCB10: jnb     short loc_140ABCB22
 * 0000000140ABCB12: cmp     [r8+8], r13
 * 0000000140ABCB16: jnz     short loc_140ABCB22
 * 0000000140ABCB18: cmp     [r8+10h], r15d
 * 0000000140ABCB1C: jz      loc_140ABCBF1
 * 0000000140ABCB22: lea     eax, [rcx-21h]
 * 0000000140ABCB25: mov     ecx, 1
 * 0000000140ABCB2A: cmp     eax, ecx
 * 0000000140ABCB2C: ja      short loc_140ABCB38
 * 0000000140ABCB2E: cmp     [r8+20h], r12
 * 0000000140ABCB32: jz      loc_140ABCBF1
 * 0000000140ABCB38: add     r14d, ecx
 * 0000000140ABCB3B: cmp     r14d, [rsi+7D4h]
 * 0000000140ABCB42: jb      loc_140ABC96E
 * 0000000140ABCB48: xor     eax, eax
 * 0000000140ABCB4A: mov     [rbp+0B30h+var_AF8], rax
 * 0000000140ABCB4E: mov     rax, [rsi+298h]
 * 0000000140ABCB55: mov     rcx, [rbp+0B30h+var_B78]
 * 0000000140ABCB59: call    j__guard_dispatch_icall_nop
 * 0000000140ABCB5E: mov     rbx, [rsi+508h]
 * 0000000140ABCB65: mov     r14d, eax
 * 0000000140ABCB68: mov     [rbp+0B30h+var_BA0], eax
 * 0000000140ABCB6B: mov     eax, [rbp+0B30h+var_B5C]
 * 0000000140ABCB6E: mov     dword ptr [rbp+0B30h+var_B90], eax
 * 0000000140ABCB71: cli
 * 0000000140ABCB72: mov     rcx, gs:20h
 * 0000000140ABCB7B: mov     rax, [rsi+618h]
 * 0000000140ABCB82: mov     rcx, [rcx+rax]
 * 0000000140ABCB86: sti
 * 0000000140ABCB87: mov     rax, [rsi+158h]
 * 0000000140ABCB8E: call    j__guard_dispatch_icall_nop
 * 0000000140ABCB93: mov     rcx, [rsi+510h]
 * 0000000140ABCB9A: mov     r13d, 1
 * 0000000140ABCBA0: mov     rax, [rsi+0E0h]
 * 0000000140ABCBA7: mov     dl, r13b
 * 0000000140ABCBAA: call    j__guard_dispatch_icall_nop
 * 0000000140ABCBAF: mov     r8, [rbx]
 * 0000000140ABCBB2: cmp     r8, rbx
 * 0000000140ABCBB5: jz      short loc_140ABCC17
 * 0000000140ABCBB7: mov     r9, [rsi+718h]
 * 0000000140ABCBBE: mov     r10, [rsi+720h]
 * 0000000140ABCBC5: mov     r11, [rsi+728h]
 * 0000000140ABCBCC: mov     rcx, r8
 * 0000000140ABCBCF: sub     rcx, r9
 * 0000000140ABCBD2: mov     rax, [r10+rcx]
 * 0000000140ABCBD6: mov     edx, [r11+rcx]
 * 0000000140ABCBDA: add     rdx, rax
 * 0000000140ABCBDD: cmp     r12, rax
 * 0000000140ABCBE0: jb      short loc_140ABCBE7
 * 0000000140ABCBE2: cmp     r12, rdx
 * 0000000140ABCBE5: jb      short loc_140ABCC08
 * 0000000140ABCBE7: mov     r8, [r8]
 * 0000000140ABCBEA: cmp     r8, rbx
 * 0000000140ABCBED: jz      short loc_140ABCC17
 * 0000000140ABCBEF: jmp     short loc_140ABCBCC
 * 0000000140ABCBF1: mov     [rbp+0B30h+var_AF8], r8
 * 0000000140ABCBF5: test    r8, r8
 * 0000000140ABCBF8: jz      loc_140ABCB4E
 * 0000000140ABCBFE: mov     ecx, 0C000010Eh
 * 0000000140ABCC03: jmp     loc_140ABE71D
 * 0000000140ABCC08: mov     rax, [rsi+0D0h]
 * 0000000140ABCC0F: mov     edx, r13d
 * 0000000140ABCC12: call    j__guard_dispatch_icall_nop
 * 0000000140ABCC17: mov     rcx, [rsi+510h]
 * 0000000140ABCC1E: mov     rax, [rsi+108h]
 * 0000000140ABCC25: call    j__guard_dispatch_icall_nop
 * 0000000140ABCC2A: mov     rax, [rsi+160h]
 * 0000000140ABCC31: call    j__guard_dispatch_icall_nop
 * 0000000140ABCC36: test    dword ptr [rsi+958h], 40000000h
 * 0000000140ABCC40: jz      short loc_140ABCC5C
 * 0000000140ABCC42: mov     r8d, 9
 * 0000000140ABCC48: lea     rcx, [rbp+0B30h+var_AB0]
 * 0000000140ABCC4F: mov     rdx, r12
 * 0000000140ABCC52: call    sub_140AD6FD0
 * 0000000140ABCC57: jmp     loc_140ABE71B
 * 0000000140ABCC5C: xor     eax, eax
 * 0000000140ABCC5E: lea     r9, [rbp+0B30h+var_B5C]
 * 0000000140ABCC62: mov     [rbp+0B30h+var_7B0], rax
 * 0000000140ABCC69: xor     r8d, r8d
 * 0000000140ABCC6C: mov     [rbp+0B30h+var_920], eax
 * 0000000140ABCC72: mov     dl, r13b
 * 0000000140ABCC75: mov     rax, [rsi+1E0h]
 * 0000000140ABCC7C: mov     rcx, r12
 * 0000000140ABCC7F: call    j__guard_dispatch_icall_nop
 * 0000000140ABCC84: mov     rdx, rax
 * 0000000140ABCC87: lea     r9, [rbp+0B30h+var_B5C]
 * 0000000140ABCC8B: neg     rax
 * 0000000140ABCC8E: mov     [rbp+0B30h+var_7C8], rdx
 * 0000000140ABCC95: mov     r8d, 0Ch
 * 0000000140ABCC9B: mov     dl, r13b
 * 0000000140ABCC9E: sbb     ecx, ecx
 * 0000000140ABCCA0: and     ecx, [rbp+0B30h+var_B5C]
 * 0000000140ABCCA3: mov     [rbp+0B30h+var_B5C], ecx
 * 0000000140ABCCA6: mov     rax, [rsi+1E0h]
 * 0000000140ABCCAD: mov     [rbp+0B30h+var_92C], ecx
 * 0000000140ABCCB3: mov     rcx, r12
 * 0000000140ABCCB6: call    j__guard_dispatch_icall_nop
 * 0000000140ABCCBB: mov     rdx, rax
 * 0000000140ABCCBE: mov     [rbp+0B30h+var_B80], rax
 * 0000000140ABCCC2: neg     rax
 * 0000000140ABCCC5: mov     [rbp+0B30h+var_7C0], rdx
 * 0000000140ABCCCC: mov     r15d, 0Ah
 * 0000000140ABCCD2: lea     r9, [rbp+0B30h+var_B5C]
 * 0000000140ABCCD6: sbb     ecx, ecx
 * 0000000140ABCCD8: mov     r8d, r15d
 * 0000000140ABCCDB: and     ecx, [rbp+0B30h+var_B5C]
 * 0000000140ABCCDE: mov     dl, r13b
 * 0000000140ABCCE1: mov     [rbp+0B30h+var_B5C], ecx
 * 0000000140ABCCE4: mov     rax, [rsi+1E0h]
 * 0000000140ABCCEB: mov     [rsp+0C30h+var_BC0], ecx
 * 0000000140ABCCEF: mov     [rbp+0B30h+var_928], ecx
 * 0000000140ABCCF5: mov     rcx, r12
 * 0000000140ABCCF8: call    j__guard_dispatch_icall_nop
 * 0000000140ABCCFD: mov     rdx, rax
 * 0000000140ABCD00: neg     rax
 * 0000000140ABCD03: mov     [rbp+0B30h+var_7B8], rdx
 * 0000000140ABCD0A: sbb     ecx, ecx
 * 0000000140ABCD0C: and     ecx, [rbp+0B30h+var_B5C]
 * 0000000140ABCD0F: mov     [rbp+0B30h+var_B5C], ecx
 * 0000000140ABCD12: mov     rax, [rsi+1E8h]
 * 0000000140ABCD19: mov     [rbp+0B30h+var_924], ecx
 * 0000000140ABCD1F: mov     rcx, r12
 * 0000000140ABCD22: call    j__guard_dispatch_icall_nop
 * 0000000140ABCD27: mov     rbx, rax
 * 0000000140ABCD2A: xor     eax, eax
 * 0000000140ABCD2C: test    rbx, rbx
 * 0000000140ABCD2F: jnz     short loc_140ABCD93
 * 0000000140ABCD31: test    dword ptr [rsi+958h], 200000h
 * 0000000140ABCD3B: jz      loc_140ACC976
 * 0000000140ABCD41: cmp     [rsi+8C0h], eax
 * 0000000140ABCD47: jnz     short loc_140ABCD89
 * 0000000140ABCD49: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABCD53: mov     rcx, rsi
 * 0000000140ABCD56: add     rax, rsi
 * 0000000140ABCD59: mov     [rsi+8C8h], rax
 * 0000000140ABCD60: xor     eax, eax
 * 0000000140ABCD62: mov     [rsi+8D0h], rax
 * 0000000140ABCD69: mov     qword ptr [rsi+8D8h], 10Fh
 * 0000000140ABCD74: mov     [rsi+8E0h], r12
 * 0000000140ABCD7B: mov     [rsi+8C0h], r13d
 * 0000000140ABCD82: xor     edx, edx
 * 0000000140ABCD84: call    sub_140AD049C
 * 0000000140ABCD89: mov     ecx, 0C000007Bh
 * 0000000140ABCD8E: jmp     loc_140ABE71D
 * 0000000140ABCD93: mov     rax, [rsi+488h]
 * 0000000140ABCD9A: lea     rdx, [rbp+0B30h+var_838]
 * 0000000140ABCDA1: mov     rcx, r12
 * 0000000140ABCDA4: call    j__guard_dispatch_icall_nop
 * 0000000140ABCDA9: mov     r8d, [rsi+8ECh]
 * 0000000140ABCDB0: mov     [rbp+0B30h+var_7A8], rax
 * 0000000140ABCDB7: mov     eax, [rbp+0B30h+var_838]
 * 0000000140ABCDBD: mov     [rbp+0B30h+var_91C], eax
 * 0000000140ABCDC3: mov     eax, [rbx+54h]
 * 0000000140ABCDC6: mov     [rbp+0B30h+var_930], eax
 * 0000000140ABCDCC: mov     eax, r14d
 * 0000000140ABCDCF: mov     r14d, [rsi+7ACh]
 * 0000000140ABCDD6: neg     eax
 * 0000000140ABCDD8: mov     [rbp+0B30h+var_7D0], r12
 * 0000000140ABCDDF: sbb     r9d, r9d
 * 0000000140ABCDE2: and     r9d, 0Bh
 * 0000000140ABCDE6: lea     eax, [r14+120h]
 * 0000000140ABCDED: mov     dword ptr [rbp+0B30h+arg_8], r9d
 * 0000000140ABCDF4: cmp     eax, [rsi+9E4h]
 * 0000000140ABCDFA: jbe     loc_140ABCEF6
 * 0000000140ABCE00: mov     edx, eax
 * 0000000140ABCE02: mov     rcx, rsi
 * 0000000140ABCE05: call    sub_140ACFC24
 * 0000000140ABCE0A: mov     r15, rax
 * 0000000140ABCE0D: mov     [rsp+0C30h+var_BD8], rax
 * 0000000140ABCE12: xor     eax, eax
 * 0000000140ABCE14: test    r15, r15
 * 0000000140ABCE17: jnz     short loc_140ABCE27
 * 0000000140ABCE19: mov     [rbp+0B30h+var_B10], rax
 * 0000000140ABCE1D: mov     ecx, 0C000009Ah
 * 0000000140ABCE22: jmp     loc_140ABE71D
 * 0000000140ABCE27: mov     ecx, [rsi+958h]
 * 0000000140ABCE2D: test    cl, 4
 * 0000000140ABCE30: jnz     loc_140ABCEE5
 * 0000000140ABCE36: mov     eax, [rsi+7ACh]
 * 0000000140ABCE3C: and     ecx, 20000000h
 * 0000000140ABCE42: mov     r9, [rsi+790h]
 * 0000000140ABCE49: neg     ecx
 * 0000000140ABCE4B: mov     rcx, rsi
 * 0000000140ABCE4E: sbb     r8d, r8d
 * 0000000140ABCE51: and     r8d, [rsi+8ECh]
 * 0000000140ABCE58: cmp     eax, 8
 * 0000000140ABCE5B: jb      short loc_140ABCE75
 * 0000000140ABCE5D: mov     edx, eax
 * 0000000140ABCE5F: shr     rdx, 3
 * 0000000140ABCE63: xor     r10d, r10d
 * 0000000140ABCE66: mov     [rcx], r10
 * 0000000140ABCE69: add     eax, 0FFFFFFF8h
 * 0000000140ABCE6C: add     rcx, 8
 * 0000000140ABCE70: sub     rdx, r13
 * 0000000140ABCE73: jnz     short loc_140ABCE66
 * 0000000140ABCE75: xor     edx, edx
 * 0000000140ABCE77: test    eax, eax
 * 0000000140ABCE79: jz      short loc_140ABCE8B
 * 0000000140ABCE7B: mov     r10d, 0FFFFFFFFh
 * 0000000140ABCE81: mov     [rcx], dl
 * 0000000140ABCE83: add     rcx, r13
 * 0000000140ABCE86: add     eax, r10d
 * 0000000140ABCE89: jnz     short loc_140ABCE81
 * 0000000140ABCE8B: mov     ebx, [r15+8ECh]
 * 0000000140ABCE92: mov     [r15+8ECh], r8d
 * 0000000140ABCE99: cmp     r8d, 3
 * 0000000140ABCE9D: jz      short loc_140ABCECF
 * 0000000140ABCE9F: test    dword ptr [r15+958h], 10000000h
 * 0000000140ABCEAA: jnz     short loc_140ABCEC6
 * 0000000140ABCEAC: test    r8d, r8d
 * 0000000140ABCEAF: jz      short loc_140ABCEC6
 * 0000000140ABCEB1: mov     rax, [r15+218h]
 * 0000000140ABCEB8: lea     rcx, [r9-8]
 * 0000000140ABCEBC: mov     rdx, [rcx]
 * 0000000140ABCEBF: call    j__guard_dispatch_icall_nop
 * 0000000140ABCEC4: jmp     short loc_140ABCEDE
 * 0000000140ABCEC6: mov     rax, [r15+0F0h]
 * 0000000140ABCECD: jmp     short loc_140ABCED6
 * 0000000140ABCECF: mov     rax, [r15+358h]
 * 0000000140ABCED6: mov     rcx, r9
 * 0000000140ABCED9: call    j__guard_dispatch_icall_nop
 * 0000000140ABCEDE: mov     [r15+8ECh], ebx
 * 0000000140ABCEE5: and     dword ptr [r15+958h], 0FFFFFFFBh
 * 0000000140ABCEED: mov     r9d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140ABCEF4: jmp     short loc_140ABCF04
 * 0000000140ABCEF6: mov     r15, rsi
 * 0000000140ABCEF9: mov     [rsp+0C30h+var_BD8], rsi
 * 0000000140ABCEFE: mov     [rsi+7ACh], eax
 * 0000000140ABCF04: mov     eax, 6
 * 0000000140ABCF09: lea     r12, [r15+r14]
 * 0000000140ABCF0D: add     [r15+7D4h], eax
 * 0000000140ABCF14: lea     rdi, [rbp+0B30h+var_7D0]
 * 0000000140ABCF1B: xor     r10d, r10d
 * 0000000140ABCF1E: mov     [rbp+0B30h+var_8D8], r12
 * 0000000140ABCF25: mov     [rbp+0B30h+var_AF8], r12
 * 0000000140ABCF29: lea     rsi, [rbp+0B30h+var_930]
 * 0000000140ABCF30: mov     [rsp+0C30h+var_BB8], rax
 * 0000000140ABCF35: mov     rbx, r13
 * 0000000140ABCF38: mov     r13d, [rsi]
 * 0000000140ABCF3B: mov     rdx, rax
 * 0000000140ABCF3E: mov     r14, [rdi]
 * 0000000140ABCF41: mov     ecx, 30h ; '0'
 * 0000000140ABCF46: mov     dword ptr [rbp+0B30h+var_B40], r13d
 * 0000000140ABCF4A: mov     rax, r12
 * 0000000140ABCF4D: mov     [rax], r10
 * 0000000140ABCF50: add     ecx, 0FFFFFFF8h
 * 0000000140ABCF53: add     rax, 8
 * 0000000140ABCF57: sub     rdx, rbx
 * 0000000140ABCF5A: jnz     short loc_140ABCF4D
 * 0000000140ABCF5C: test    ecx, ecx
 * 0000000140ABCF5E: jz      short loc_140ABCF6F
 * 0000000140ABCF60: mov     edx, 0FFFFFFFFh
 * 0000000140ABCF65: mov     [rax], r10b
 * 0000000140ABCF68: add     rax, rbx
 * 0000000140ABCF6B: add     ecx, edx
 * 0000000140ABCF6D: jnz     short loc_140ABCF65
 * 0000000140ABCF6F: mov     [r12], r9d
 * 0000000140ABCF73: lea     rcx, [r14+r13]
 * 0000000140ABCF77: mov     [r12+8], r14
 * 0000000140ABCF7C: mov     r10, r14
 * 0000000140ABCF7F: mov     [r12+10h], r13d
 * 0000000140ABCF84: mov     rax, r14
 * 0000000140ABCF87: add     [r15+7F0h], r13d
 * 0000000140ABCF8E: mov     r11d, [r15+7DCh]
 * 0000000140ABCF95: mov     rbx, [r15+7E0h]
 * 0000000140ABCF9C: cmp     r14, rcx
 * 0000000140ABCF9F: jnb     short loc_140ABCFB1
 * 0000000140ABCFA1: mov     edx, 40h ; '@'
 * 0000000140ABCFA6: prefetchnta byte ptr [rax]
 * 0000000140ABCFA9: add     rax, rdx
 * 0000000140ABCFAC: cmp     rax, rcx
 * 0000000140ABCFAF: jb      short loc_140ABCFA6
 * 0000000140ABCFB1: mov     r9d, r13d
 * 0000000140ABCFB4: mov     r8, rbx
 * 0000000140ABCFB7: shr     r9d, 7
 * 0000000140ABCFBB: test    r9d, r9d
 * 0000000140ABCFBE: jz      short loc_140ABD036
 * 0000000140ABCFC0: mov     r13, 7010008004002001h
 * 0000000140ABCFCA: mov     edx, 8
 * 0000000140ABCFCF: lea     r15d, [rdx-7]
 * 0000000140ABCFD3: mov     rax, [r10]
 * 0000000140ABCFD6: mov     ecx, r11d
 * 0000000140ABCFD9: xor     rax, r8
 * 0000000140ABCFDC: mov     r8, [r10+8]
 * 0000000140ABCFE0: rol     rax, cl
 * 0000000140ABCFE3: add     r10, 10h
 * 0000000140ABCFE7: xor     r8, rax
 * 0000000140ABCFEA: rol     r8, cl
 * 0000000140ABCFED: sub     rdx, r15
 * 0000000140ABCFF0: jnz     short loc_140ABCFD3
 * 0000000140ABCFF2: mov     rcx, r10
 * 0000000140ABCFF5: sub     rcx, r14
 * 0000000140ABCFF8: xor     rcx, rbx
 * 0000000140ABCFFB: mov     rax, rcx
 * 0000000140ABCFFE: rol     rax, 11h
 * 0000000140ABD002: xor     rcx, rax
 * 0000000140ABD005: mov     rax, r13
 * 0000000140ABD008: mul     rcx
 * 0000000140ABD00B: xor     r11d, edx
 * 0000000140ABD00E: mov     [rbp+0B30h+var_1D8], rdx
 * 0000000140ABD015: xor     r11d, eax
 * 0000000140ABD018: mov     rax, r15
 * 0000000140ABD01B: and     r11d, 3Fh
 * 0000000140ABD01F: cmovz   r11d, eax
 * 0000000140ABD023: mov     eax, 0FFFFFFFFh
 * 0000000140ABD028: add     r9d, eax
 * 0000000140ABD02B: jnz     short loc_140ABCFCA
 * 0000000140ABD02D: mov     r15, [rsp+0C30h+var_BD8]
 * 0000000140ABD032: mov     r13d, dword ptr [rbp+0B30h+var_B40]
 * 0000000140ABD036: mov     edx, r13d
 * 0000000140ABD039: mov     ebx, 1
 * 0000000140ABD03E: and     edx, 7Fh
 * 0000000140ABD041: cmp     edx, 8
 * 0000000140ABD044: jb      short loc_140ABD062
 * 0000000140ABD046: mov     r9d, edx
 * 0000000140ABD049: shr     r9, 3
 * 0000000140ABD04D: xor     r8, [r10]
 * 0000000140ABD050: mov     ecx, r11d
 * 0000000140ABD053: rol     r8, cl
 * 0000000140ABD056: add     r10, 8
 * 0000000140ABD05A: add     edx, 0FFFFFFF8h
 * 0000000140ABD05D: sub     r9, rbx
 * 0000000140ABD060: jnz     short loc_140ABD04D
 * 0000000140ABD062: test    edx, edx
 * 0000000140ABD064: jz      short loc_140ABD086
 * 0000000140ABD066: mov     r15d, 0FFFFFFFFh
 * 0000000140ABD06C: movzx   eax, byte ptr [r10]
 * 0000000140ABD070: mov     ecx, r11d
 * 0000000140ABD073: xor     r8, rax
 * 0000000140ABD076: add     r10, rbx
 * 0000000140ABD079: rol     r8, cl
 * 0000000140ABD07C: add     edx, r15d
 * 0000000140ABD07F: jnz     short loc_140ABD06C
 * 0000000140ABD081: mov     r15, [rsp+0C30h+var_BD8]
 * 0000000140ABD086: mov     rax, r8
 * 0000000140ABD089: shr     rax, 1Fh
 * 0000000140ABD08D: xor     r10d, r10d
 * 0000000140ABD090: jmp     short loc_140ABD099
 * 0000000140ABD092: xor     r8d, eax
 * 0000000140ABD095: shr     rax, 1Fh
 * 0000000140ABD099: test    rax, rax
 * 0000000140ABD09C: jnz     short loc_140ABD092
 * 0000000140ABD09E: mov     r9d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140ABD0A5: btr     r8d, 1Fh
 * 0000000140ABD0AA: mov     [r12+14h], r8d
 * 0000000140ABD0AF: add     rdi, 8
 * 0000000140ABD0B3: add     [r15+7F0h], r13d
 * 0000000140ABD0BA: lea     r13d, [rax+4]
 * 0000000140ABD0BE: mov     r12, [rbp+0B30h+var_8D8]
 * 0000000140ABD0C5: lea     eax, [r13+2]
 * 0000000140ABD0C9: add     r12, 30h ; '0'
 * 0000000140ABD0CD: add     rsi, r13
 * 0000000140ABD0D0: sub     [rsp+0C30h+var_BB8], rbx
 * 0000000140ABD0D5: mov     [rbp+0B30h+var_8D8], r12
 * 0000000140ABD0DC: jnz     loc_140ABCF38
 * 0000000140ABD0E2: mov     rbx, [rbp+0B30h+var_AF8]
 * 0000000140ABD0E6: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ABD0ED: mov     r12, [rbp+0B30h+var_B70]
 * 0000000140ABD0F1: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABD0F6: mov     r14d, [rbp+0B30h+var_BA0]
 * 0000000140ABD0FA: mov     dword ptr [rbx], 2Ch ; ','
 * 0000000140ABD100: mov     [rbx+18h], r12
 * 0000000140ABD104: test    dword ptr [r15+958h], 10200000h
 * 0000000140ABD10F: jnz     short loc_140ABD13F
 * 0000000140ABD111: test    r14d, r14d
 * 0000000140ABD114: jnz     short loc_140ABD144
 * 0000000140ABD116: test    dword ptr [r15+95Ch], 8000h
 * 0000000140ABD121: jz      short loc_140ABD14C
 * 0000000140ABD123: lea     eax, [r13-3]
 * 0000000140ABD127: mov     rdx, r12
 * 0000000140ABD12A: or      [rbx+20h], eax
 * 0000000140ABD12D: mov     rcx, r15
 * 0000000140ABD130: call    sub_140AD0CE4
 * 0000000140ABD135: test    eax, eax
 * 0000000140ABD137: jz      short loc_140ABD14C
 * 0000000140ABD139: or      [rbx+20h], r13d
 * 0000000140ABD13D: jmp     short loc_140ABD14C
 * 0000000140ABD13F: test    r14d, r14d
 * 0000000140ABD142: jz      short loc_140ABD14C
 * 0000000140ABD144: mov     eax, 2
 * 0000000140ABD149: or      [rbx+20h], eax
 * 0000000140ABD14C: mov     r8d, dword ptr [rbp+0B30h+var_B90]
 * 0000000140ABD150: lea     rax, [rbp+0B30h+var_9A8]
 * 0000000140ABD157: mov     rdx, [rbp+0B30h+var_BA8]
 * 0000000140ABD15B: lea     rcx, [rbp+0B30h+var_B10]
 * 0000000140ABD15F: mov     [rsp+0C30h+var_BF8], rax
 * 0000000140ABD164: mov     r9, r12
 * 0000000140ABD167: lea     rax, [rbp+0B30h+var_A78]
 * 0000000140ABD16E: mov     [rbp+0B30h+var_B10], r15
 * 0000000140ABD172: mov     [rsp+0C30h+var_C00], rax
 * 0000000140ABD177: mov     dword ptr [rsp+0C30h+var_C08], 9
 * 0000000140ABD17F: mov     dword ptr [rsp+0C30h+BugCheckParameter4], r14d
 * 0000000140ABD184: mov     [rbp+0B30h+var_AB0], r15
 * 0000000140ABD18B: call    sub_140ACF0E0
 * 0000000140ABD190: mov     ecx, eax
 * 0000000140ABD192: test    eax, eax
 * 0000000140ABD194: js      loc_140ABE71D
 * 0000000140ABD19A: mov     r14, [rbp+0B30h+var_B10]
 * 0000000140ABD19E: mov     rcx, [rbp+0B30h+var_AF8]
 * 0000000140ABD1A2: mov     rax, r14
 * 0000000140ABD1A5: mov     r9d, [rbp+0B30h+var_9A8]
 * 0000000140ABD1AC: sub     rax, r15
 * 0000000140ABD1AF: mov     r15d, [rbp+0B30h+var_A78]
 * 0000000140ABD1B6: add     rcx, rax
 * 0000000140ABD1B9: sub     r9d, [rbp+0B30h+var_A78]
 * 0000000140ABD1C0: add     r15, r12
 * 0000000140ABD1C3: mov     [rbp+0B30h+var_AF8], rcx
 * 0000000140ABD1C7: xor     r8d, r8d
 * 0000000140ABD1CA: mov     [rbp+0B30h+var_AB0], r14
 * 0000000140ABD1D1: lea     r13, [rcx+0C0h]
 * 0000000140ABD1D8: mov     ecx, 30h ; '0'
 * 0000000140ABD1DD: mov     rax, r13
 * 0000000140ABD1E0: lea     edx, [rcx-2Ah]
 * 0000000140ABD1E3: lea     r10d, [rcx-2Fh]
 * 0000000140ABD1E7: mov     [rax], r8
 * 0000000140ABD1EA: add     ecx, 0FFFFFFF8h
 * 0000000140ABD1ED: add     rax, 8
 * 0000000140ABD1F1: sub     rdx, r10
 * 0000000140ABD1F4: jnz     short loc_140ABD1E7
 * 0000000140ABD1F6: mov     rdx, r10
 * 0000000140ABD1F9: test    ecx, ecx
 * 0000000140ABD1FB: jz      short loc_140ABD20E
 * 0000000140ABD1FD: mov     r10d, 0FFFFFFFFh
 * 0000000140ABD203: mov     [rax], r8b
 * 0000000140ABD206: add     rax, rdx
 * 0000000140ABD209: add     ecx, r10d
 * 0000000140ABD20C: jnz     short loc_140ABD203
 * 0000000140ABD20E: mov     eax, dword ptr [rbp+0B30h+arg_8]
 * 0000000140ABD214: mov     r10, r15
 * 0000000140ABD217: mov     [r13+0], eax
 * 0000000140ABD21B: mov     rax, r15
 * 0000000140ABD21E: mov     [r13+8], r15
 * 0000000140ABD222: mov     [r13+10h], r9d
 * 0000000140ABD226: add     [r14+7F0h], r9d
 * 0000000140ABD22D: mov     ebx, [r14+7DCh]
 * 0000000140ABD234: mov     r12, [r14+7E0h]
 * 0000000140ABD23B: mov     ecx, r9d
 * 0000000140ABD23E: add     rcx, r15
 * 0000000140ABD241: cmp     r15, rcx
 * 0000000140ABD244: jnb     short loc_140ABD257
 * 0000000140ABD246: mov     r8d, 40h ; '@'
 * 0000000140ABD24C: prefetchnta byte ptr [rax]
 * 0000000140ABD24F: add     rax, r8
 * 0000000140ABD252: cmp     rax, rcx
 * 0000000140ABD255: jb      short loc_140ABD24C
 * 0000000140ABD257: mov     r11d, r9d
 * 0000000140ABD25A: mov     r8, r12
 * 0000000140ABD25D: shr     r11d, 7
 * 0000000140ABD261: test    r11d, r11d
 * 0000000140ABD264: jz      short loc_140ABD2D9
 * 0000000140ABD266: mov     rdi, 7010008004002001h
 * 0000000140ABD270: mov     edx, 8
 * 0000000140ABD275: lea     esi, [rdx-7]
 * 0000000140ABD278: mov     rax, [r10]
 * 0000000140ABD27B: mov     ecx, ebx
 * 0000000140ABD27D: xor     rax, r8
 * 0000000140ABD280: mov     r8, [r10+8]
 * 0000000140ABD284: rol     rax, cl
 * 0000000140ABD287: add     r10, 10h
 * 0000000140ABD28B: xor     r8, rax
 * 0000000140ABD28E: rol     r8, cl
 * 0000000140ABD291: sub     rdx, rsi
 * 0000000140ABD294: jnz     short loc_140ABD278
 * 0000000140ABD296: mov     rcx, r10
 * 0000000140ABD299: sub     rcx, r15
 * 0000000140ABD29C: xor     rcx, r12
 * 0000000140ABD29F: mov     rax, rcx
 * 0000000140ABD2A2: rol     rax, 11h
 * 0000000140ABD2A6: xor     rcx, rax
 * 0000000140ABD2A9: mov     rax, rdi
 * 0000000140ABD2AC: mul     rcx
 * 0000000140ABD2AF: xor     ebx, edx
 * 0000000140ABD2B1: mov     [rbp+0B30h+var_1D0], rdx
 * 0000000140ABD2B8: xor     ebx, eax
 * 0000000140ABD2BA: mov     rdx, rsi
 * 0000000140ABD2BD: and     ebx, 3Fh
 * 0000000140ABD2C0: mov     eax, 0FFFFFFFFh
 * 0000000140ABD2C5: cmovz   ebx, edx
 * 0000000140ABD2C8: add     r11d, eax
 * 0000000140ABD2CB: jnz     short loc_140ABD270
 * 0000000140ABD2CD: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABD2D2: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ABD2D9: and     r9d, 7Fh
 * 0000000140ABD2DD: cmp     r9d, 8
 * 0000000140ABD2E1: jb      short loc_140ABD30E
 * 0000000140ABD2E3: mov     edx, r9d
 * 0000000140ABD2E6: mov     esi, 1
 * 0000000140ABD2EB: shr     rdx, 3
 * 0000000140ABD2EF: xor     r8, [r10]
 * 0000000140ABD2F2: mov     ecx, ebx
 * 0000000140ABD2F4: rol     r8, cl
 * 0000000140ABD2F7: add     r10, 8
 * 0000000140ABD2FB: add     r9d, 0FFFFFFF8h
 * 0000000140ABD2FF: sub     rdx, rsi
 * 0000000140ABD302: jnz     short loc_140ABD2EF
 * 0000000140ABD304: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABD309: mov     edx, 1
 * 0000000140ABD30E: test    r9d, r9d
 * 0000000140ABD311: jz      short loc_140ABD331
 * 0000000140ABD313: mov     esi, 0FFFFFFFFh
 * 0000000140ABD318: movzx   eax, byte ptr [r10]
 * 0000000140ABD31C: mov     ecx, ebx
 * 0000000140ABD31E: xor     r8, rax
 * 0000000140ABD321: add     r10, rdx
 * 0000000140ABD324: rol     r8, cl
 * 0000000140ABD327: add     r9d, esi
 * 0000000140ABD32A: jnz     short loc_140ABD318
 * 0000000140ABD32C: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABD331: mov     rax, r8
 * 0000000140ABD334: shr     rax, 1Fh
 * 0000000140ABD338: xor     ecx, ecx
 * 0000000140ABD33A: jmp     short loc_140ABD343
 * 0000000140ABD33C: xor     r8d, eax
 * 0000000140ABD33F: shr     rax, 1Fh
 * 0000000140ABD343: test    rax, rax
 * 0000000140ABD346: jnz     short loc_140ABD33C
 * 0000000140ABD348: mov     r15d, [rbp+0B30h+var_BA0]
 * 0000000140ABD34C: btr     r8d, 1Fh
 * 0000000140ABD351: mov     [r13+14h], r8d
 * 0000000140ABD355: mov     rdx, [rbp+0B30h+var_AF8]
 * 0000000140ABD359: mov     dword ptr [rdx+0F0h], 30h ; '0'
 * 0000000140ABD363: cmp     [rdx+100h], eax
 * 0000000140ABD369: jz      short loc_140ABD382
 * 0000000140ABD36B: mov     eax, [rdx+108h]
 * 0000000140ABD371: test    r15d, r15d
 * 0000000140ABD374: setnz   cl
 * 0000000140ABD377: and     eax, 0FFFFFFFEh
 * 0000000140ABD37A: or      ecx, eax
 * 0000000140ABD37C: mov     [rdx+108h], ecx
 * 0000000140ABD382: mov     rcx, [rbp+0B30h+var_AF8]
 * 0000000140ABD386: mov     eax, r15d
 * 0000000140ABD389: add     rcx, 60h ; '`'
 * 0000000140ABD38D: mov     [rbp+0B30h+var_AB0], r14
 * 0000000140ABD394: neg     eax
 * 0000000140ABD396: mov     [rbp+0B30h+var_A18], rcx
 * 0000000140ABD39D: sbb     r12d, r12d
 * 0000000140ABD3A0: neg     r12d
 * 0000000140ABD3A3: add     r12d, 0Dh
 * 0000000140ABD3A7: test    rcx, rcx
 * 0000000140ABD3AA: jnz     loc_140ABD650
 * 0000000140ABD3B0: mov     r15d, [r14+7ACh]
 * 0000000140ABD3B7: mov     r8d, [r14+8ECh]
 * 0000000140ABD3BE: lea     eax, [r15+30h]
 * 0000000140ABD3C2: cmp     eax, [r14+9E4h]
 * 0000000140ABD3C9: jbe     loc_140ABD4AF
 * 0000000140ABD3CF: mov     edx, eax
 * 0000000140ABD3D1: mov     rcx, r14
 * 0000000140ABD3D4: call    sub_140ACFC24
 * 0000000140ABD3D9: mov     rbx, rax
 * 0000000140ABD3DC: xor     eax, eax
 * 0000000140ABD3DE: test    rbx, rbx
 * 0000000140ABD3E1: jz      loc_140ABCE19
 * 0000000140ABD3E7: mov     ecx, [r14+958h]
 * 0000000140ABD3EE: test    cl, 4
 * 0000000140ABD3F1: jnz     loc_140ABD4A6
 * 0000000140ABD3F7: mov     eax, [r14+7ACh]
 * 0000000140ABD3FE: and     ecx, 20000000h
 * 0000000140ABD404: mov     r8, [r14+790h]
 * 0000000140ABD40B: neg     ecx
 * 0000000140ABD40D: mov     r10d, 1
 * 0000000140ABD413: sbb     edx, edx
 * 0000000140ABD415: and     edx, [r14+8ECh]
 * 0000000140ABD41C: cmp     eax, 8
 * 0000000140ABD41F: jb      short loc_140ABD439
 * 0000000140ABD421: mov     ecx, eax
 * 0000000140ABD423: shr     rcx, 3
 * 0000000140ABD427: xor     r9d, r9d
 * 0000000140ABD42A: mov     [r14], r9
 * 0000000140ABD42D: add     eax, 0FFFFFFF8h
 * 0000000140ABD430: add     r14, 8
 * 0000000140ABD434: sub     rcx, r10
 * 0000000140ABD437: jnz     short loc_140ABD42A
 * 0000000140ABD439: xor     ecx, ecx
 * 0000000140ABD43B: test    eax, eax
 * 0000000140ABD43D: jz      short loc_140ABD450
 * 0000000140ABD43F: mov     r9d, 0FFFFFFFFh
 * 0000000140ABD445: mov     [r14], cl
 * 0000000140ABD448: add     r14, r10
 * 0000000140ABD44B: add     eax, r9d
 * 0000000140ABD44E: jnz     short loc_140ABD445
 * 0000000140ABD450: mov     r14d, [rbx+8ECh]
 * 0000000140ABD457: mov     [rbx+8ECh], edx
 * 0000000140ABD45D: cmp     edx, 3
 * 0000000140ABD460: jz      short loc_140ABD490
 * 0000000140ABD462: test    dword ptr [rbx+958h], 10000000h
 * 0000000140ABD46C: jnz     short loc_140ABD487
 * 0000000140ABD46E: test    edx, edx
 * 0000000140ABD470: jz      short loc_140ABD487
 * 0000000140ABD472: mov     rax, [rbx+218h]
 * 0000000140ABD479: lea     rcx, [r8-8]
 * 0000000140ABD47D: mov     rdx, [rcx]
 * 0000000140ABD480: call    j__guard_dispatch_icall_nop
 * 0000000140ABD485: jmp     short loc_140ABD49F
 * 0000000140ABD487: mov     rax, [rbx+0F0h]
 * 0000000140ABD48E: jmp     short loc_140ABD497
 * 0000000140ABD490: mov     rax, [rbx+358h]
 * 0000000140ABD497: mov     rcx, r8
 * 0000000140ABD49A: call    j__guard_dispatch_icall_nop
 * 0000000140ABD49F: mov     [rbx+8ECh], r14d
 * 0000000140ABD4A6: and     dword ptr [rbx+958h], 0FFFFFFFBh
 * 0000000140ABD4AD: jmp     short loc_140ABD4B9
 * 0000000140ABD4AF: mov     rbx, r14
 * 0000000140ABD4B2: mov     [r14+7ACh], eax
 * 0000000140ABD4B9: add     r15, rbx
 * 0000000140ABD4BC: mov     r9d, 1
 * 0000000140ABD4C2: add     [rbx+7D4h], r9d
 * 0000000140ABD4C9: mov     rax, r15
 * 0000000140ABD4CC: mov     [rbp+0B30h+var_830], r15
 * 0000000140ABD4D3: xor     r8d, r8d
 * 0000000140ABD4D6: lea     ecx, [r9+2Fh]
 * 0000000140ABD4DA: lea     edx, [rcx-2Ah]
 * 0000000140ABD4DD: mov     [rax], r8
 * 0000000140ABD4E0: add     ecx, 0FFFFFFF8h
 * 0000000140ABD4E3: add     rax, 8
 * 0000000140ABD4E7: sub     rdx, r9
 * 0000000140ABD4EA: jnz     short loc_140ABD4DD
 * 0000000140ABD4EC: test    ecx, ecx
 * 0000000140ABD4EE: jz      short loc_140ABD4FF
 * 0000000140ABD4F0: mov     edx, 0FFFFFFFFh
 * 0000000140ABD4F5: mov     [rax], r8b
 * 0000000140ABD4F8: add     rax, r9
 * 0000000140ABD4FB: add     ecx, edx
 * 0000000140ABD4FD: jnz     short loc_140ABD4F5
 * 0000000140ABD4FF: mov     r13, [rbp+0B30h+var_B80]
 * 0000000140ABD503: mov     [r15], r12d
 * 0000000140ABD506: mov     r9, r13
 * 0000000140ABD509: mov     r12d, [rsp+0C30h+var_BC0]
 * 0000000140ABD50E: mov     [r15+8], r13
 * 0000000140ABD512: mov     [r15+10h], r12d
 * 0000000140ABD516: add     [rbx+7F0h], r12d
 * 0000000140ABD51D: mov     r11d, [rbx+7DCh]
 * 0000000140ABD524: lea     rcx, [r12+r13]
 * 0000000140ABD528: mov     r14, [rbx+7E0h]
 * 0000000140ABD52F: cmp     r13, rcx
 * 0000000140ABD532: jnb     short loc_140ABD547
 * 0000000140ABD534: mov     rax, r13
 * 0000000140ABD537: mov     edx, 40h ; '@'
 * 0000000140ABD53C: prefetchnta byte ptr [rax]
 * 0000000140ABD53F: add     rax, rdx
 * 0000000140ABD542: cmp     rax, rcx
 * 0000000140ABD545: jb      short loc_140ABD53C
 * 0000000140ABD547: mov     r10d, r12d
 * 0000000140ABD54A: mov     r8, r14
 * 0000000140ABD54D: shr     r10d, 7
 * 0000000140ABD551: test    r10d, r10d
 * 0000000140ABD554: jz      short loc_140ABD5CD
 * 0000000140ABD556: mov     esi, 1
 * 0000000140ABD55B: mov     rdi, 7010008004002001h
 * 0000000140ABD565: mov     r12d, 0FFFFFFFFh
 * 0000000140ABD56B: mov     eax, 8
 * 0000000140ABD570: xor     r8, [r9]
 * 0000000140ABD573: mov     ecx, r11d
 * 0000000140ABD576: rol     r8, cl
 * 0000000140ABD579: xor     r8, [r9+8]
 * 0000000140ABD57D: add     r9, 10h
 * 0000000140ABD581: rol     r8, cl
 * 0000000140ABD584: sub     rax, rsi
 * 0000000140ABD587: jnz     short loc_140ABD570
 * 0000000140ABD589: mov     rcx, r9
 * 0000000140ABD58C: sub     rcx, r13
 * 0000000140ABD58F: xor     rcx, r14
 * 0000000140ABD592: mov     rax, rcx
 * 0000000140ABD595: rol     rax, 11h
 * 0000000140ABD599: xor     rcx, rax
 * 0000000140ABD59C: mov     rax, rdi
 * 0000000140ABD59F: mul     rcx
 * 0000000140ABD5A2: xor     r11d, edx
 * 0000000140ABD5A5: mov     [rbp+0B30h+var_1C8], rdx
 * 0000000140ABD5AC: xor     r11d, eax
 * 0000000140ABD5AF: and     r11d, 3Fh
 * 0000000140ABD5B3: cmovz   r11d, esi
 * 0000000140ABD5B7: add     r10d, r12d
 * 0000000140ABD5BA: jnz     short loc_140ABD56B
 * 0000000140ABD5BC: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABD5C1: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ABD5C8: mov     r12d, [rsp+0C30h+var_BC0]
 * 0000000140ABD5CD: mov     edx, r12d
 * 0000000140ABD5D0: mov     r10d, 1
 * 0000000140ABD5D6: and     edx, 7Fh
 * 0000000140ABD5D9: cmp     edx, 8
 * 0000000140ABD5DC: jb      short loc_140ABD5F9
 * 0000000140ABD5DE: mov     eax, edx
 * 0000000140ABD5E0: shr     rax, 3
 * 0000000140ABD5E4: xor     r8, [r9]
 * 0000000140ABD5E7: mov     ecx, r11d
 * 0000000140ABD5EA: rol     r8, cl
 * 0000000140ABD5ED: add     r9, 8
 * 0000000140ABD5F1: add     edx, 0FFFFFFF8h
 * 0000000140ABD5F4: sub     rax, r10
 * 0000000140ABD5F7: jnz     short loc_140ABD5E4
 * 0000000140ABD5F9: test    edx, edx
 * 0000000140ABD5FB: jz      short loc_140ABD61B
 * 0000000140ABD5FD: mov     esi, 0FFFFFFFFh
 * 0000000140ABD602: movzx   eax, byte ptr [r9]
 * 0000000140ABD606: mov     ecx, r11d
 * 0000000140ABD609: xor     r8, rax
 * 0000000140ABD60C: add     r9, r10
 * 0000000140ABD60F: rol     r8, cl
 * 0000000140ABD612: add     edx, esi
 * 0000000140ABD614: jnz     short loc_140ABD602
 * 0000000140ABD616: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABD61B: mov     rax, r8
 * 0000000140ABD61E: jmp     short loc_140ABD623
 * 0000000140ABD620: xor     r8d, eax
 * 0000000140ABD623: shr     rax, 1Fh
 * 0000000140ABD627: test    rax, rax
 * 0000000140ABD62A: jnz     short loc_140ABD620
 * 0000000140ABD62C: btr     r8d, 1Fh
 * 0000000140ABD631: mov     [r15+14h], r8d
 * 0000000140ABD635: mov     rax, [rbp+0B30h+var_830]
 * 0000000140ABD63C: mov     r15d, [rbp+0B30h+var_BA0]
 * 0000000140ABD640: mov     [rbp+0B30h+var_A18], rax
 * 0000000140ABD647: add     [rbx+7F0h], r12d
 * 0000000140ABD64E: jmp     short loc_140ABD65F
 * 0000000140ABD650: mov     r13, [rbp+0B30h+var_B80]
 * 0000000140ABD654: mov     rbx, r14
 * 0000000140ABD657: mov     [rcx], r12d
 * 0000000140ABD65A: mov     r12d, [rsp+0C30h+var_BC0]
 * 0000000140ABD65F: test    dword ptr [rbx+958h], 40000000h
 * 0000000140ABD669: jz      short loc_140ABD689
 * 0000000140ABD66B: test    r12d, r12d
 * 0000000140ABD66E: jz      short loc_140ABD689
 * 0000000140ABD670: mov     r9, [rbp+0B30h+var_A18]
 * 0000000140ABD677: mov     r8d, r12d
 * 0000000140ABD67A: add     r9, 1Ch
 * 0000000140ABD67E: mov     rdx, r13
 * 0000000140ABD681: mov     rcx, rbx
 * 0000000140ABD684: call    sub_1403F966C
 * 0000000140ABD689: mov     rax, [rbp+0B30h+var_A18]
 * 0000000140ABD690: xor     ecx, ecx
 * 0000000140ABD692: mov     r12, [rbp+0B30h+var_B70]
 * 0000000140ABD696: mov     [rbp+0B30h+var_AB0], rbx
 * 0000000140ABD69D: mov     [rax+18h], ecx
 * 0000000140ABD6A0: lea     r13d, [rcx+1]
 * 0000000140ABD6A4: mov     rax, [rbp+0B30h+var_A18]
 * 0000000140ABD6AB: or      [rax+18h], r13d
 * 0000000140ABD6AF: xor     eax, eax
 * 0000000140ABD6B1: mov     r14, [rbp+0B30h+var_AF8]
 * 0000000140ABD6B5: test    r15d, r15d
 * 0000000140ABD6B8: setnz   cl
 * 0000000140ABD6BB: mov     dword ptr [r14+90h], 23h ; '#'
 * 0000000140ABD6C6: mov     eax, [r14+0B8h]
 * 0000000140ABD6CD: and     eax, 0FFFFFFFEh
 * 0000000140ABD6D0: or      ecx, eax
 * 0000000140ABD6D2: mov     [r14+0B8h], ecx
 * 0000000140ABD6D9: cmp     dword ptr [r14+0A0h], 94h
 * 0000000140ABD6E4: jb      loc_140ABD76E
 * 0000000140ABD6EA: mov     rax, [rbx+1E8h]
 * 0000000140ABD6F1: mov     rcx, r12
 * 0000000140ABD6F4: mov     r15, [r14+98h]
 * 0000000140ABD6FB: call    j__guard_dispatch_icall_nop
 * 0000000140ABD700: xor     ecx, ecx
 * 0000000140ABD702: test    rax, rax
 * 0000000140ABD705: jnz     short loc_140ABD710
 * 0000000140ABD707: mov     [rbp+0B30h+var_B10], rcx
 * 0000000140ABD70B: jmp     loc_140ABCE1D
 * 0000000140ABD710: mov     r8d, [rax+50h]
 * 0000000140ABD714: mov     edx, [r14+0B8h]
 * 0000000140ABD71B: add     r8, r12
 * 0000000140ABD71E: or      edx, 2
 * 0000000140ABD721: mov     [r14+0B8h], edx
 * 0000000140ABD728: mov     ecx, edx
 * 0000000140ABD72A: mov     rax, [r15+70h]
 * 0000000140ABD72E: cmp     rax, r12
 * 0000000140ABD731: jb      short loc_140ABD74C
 * 0000000140ABD733: cmp     rax, r8
 * 0000000140ABD736: jnb     short loc_140ABD74C
 * 0000000140ABD738: mov     rax, [rax]
 * 0000000140ABD73B: or      ecx, 4
 * 0000000140ABD73E: mov     [r14+0A8h], rax
 * 0000000140ABD745: mov     [r14+0B8h], ecx
 * 0000000140ABD74C: mov     rax, [r15+78h]
 * 0000000140ABD750: cmp     rax, r12
 * 0000000140ABD753: jb      short loc_140ABD76E
 * 0000000140ABD755: cmp     rax, r8
 * 0000000140ABD758: jnb     short loc_140ABD76E
 * 0000000140ABD75A: mov     rax, [rax]
 * 0000000140ABD75D: or      ecx, 8
 * 0000000140ABD760: mov     [r14+0B0h], rax
 * 0000000140ABD767: mov     [r14+0B8h], ecx
 * 0000000140ABD76E: test    dword ptr [rbx+958h], 400000h
 * 0000000140ABD778: mov     [rbp+0B30h+var_B10], rbx
 * 0000000140ABD77C: jz      loc_140ABE712
 * 0000000140ABD782: mov     rax, [rbx+1E8h]
 * 0000000140ABD789: mov     rcx, r12
 * 0000000140ABD78C: call    j__guard_dispatch_icall_nop
 * 0000000140ABD791: mov     [rsp+0C30h+var_BC8], rax
 * 0000000140ABD796: mov     r15, rax
 * 0000000140ABD799: test    rax, rax
 * 0000000140ABD79C: jz      loc_140ABCD89
 * 0000000140ABD7A2: movzx   r10d, word ptr [r15+6]
 * 0000000140ABD7A7: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140ABD7B1: mov     ecx, dword ptr [rbp+0B30h+var_B90]
 * 0000000140ABD7B4: mul     rcx
 * 0000000140ABD7B7: xor     eax, eax
 * 0000000140ABD7B9: mov     word ptr [rbp+0B30h+arg_8], r10w
 * 0000000140ABD7C1: mov     r9, rdx
 * 0000000140ABD7C4: shr     r9, 3
 * 0000000140ABD7C8: mov     [rbp+0B30h+var_B80], r9
 * 0000000140ABD7CC: test    r10w, r10w
 * 0000000140ABD7D0: jnz     short loc_140ABD82C
 * 0000000140ABD7D2: test    dword ptr [rbx+958h], 200000h
 * 0000000140ABD7DC: jz      loc_140ACC9A0
 * 0000000140ABD7E2: cmp     [rbx+8C0h], eax
 * 0000000140ABD7E8: jnz     loc_140ABCD89
 * 0000000140ABD7EE: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABD7F8: add     rax, rbx
 * 0000000140ABD7FB: mov     [rbx+8C8h], rax
 * 0000000140ABD802: xor     eax, eax
 * 0000000140ABD804: mov     [rbx+8D0h], rax
 * 0000000140ABD80B: mov     qword ptr [rbx+8D8h], 10Fh
 * 0000000140ABD816: mov     [rbx+8E0h], r12
 * 0000000140ABD81D: mov     [rbx+8C0h], r13d
 * 0000000140ABD824: mov     rcx, rbx
 * 0000000140ABD827: jmp     loc_140ABCD82
 * 0000000140ABD82C: mov     rdx, [rbp+0B30h+var_BA8]
 * 0000000140ABD830: lea     r11, [r15+18h]
 * 0000000140ABD834: mov     eax, r9d
 * 0000000140ABD837: mov     r13, rdx
 * 0000000140ABD83A: lea     rcx, [rax+rax*2]
 * 0000000140ABD83E: lea     rax, [rdx+rcx*4]
 * 0000000140ABD842: xor     edx, edx
 * 0000000140ABD844: mov     [rbp+0B30h+var_B88], rax
 * 0000000140ABD848: mov     ecx, edx
 * 0000000140ABD84A: movzx   eax, word ptr [r15+14h]
 * 0000000140ABD84F: add     r11, rax
 * 0000000140ABD852: mov     [rsp+0C30h+var_BC0], edx
 * 0000000140ABD856: mov     [rsp+0C30h+var_BB8], r11
 * 0000000140ABD85B: mov     eax, r10d
 * 0000000140ABD85E: test    r10d, r10d
 * 0000000140ABD861: jz      loc_140ABDA9B
 * 0000000140ABD867: mov     r14, [rbp+0B30h+var_B88]
 * 0000000140ABD86B: lea     r15d, [rdx+1]
 * 0000000140ABD86F: mov     r8, r11
 * 0000000140ABD872: mov     [rsp+0C30h+var_BD8], r11
 * 0000000140ABD877: mov     edx, [r8+10h]
 * 0000000140ABD87B: mov     eax, [r8+8]
 * 0000000140ABD87F: cmp     edx, eax
 * 0000000140ABD881: mov     r9d, [r8+0Ch]
 * 0000000140ABD885: cmovbe  edx, eax
 * 0000000140ABD888: mov     dword ptr [rbp+0B30h+var_B40], r9d
 * 0000000140ABD88C: add     edx, r9d
 * 0000000140ABD88F: mov     dword ptr [rbp+0B30h+var_B30], edx
 * 0000000140ABD892: test    ecx, ecx
 * 0000000140ABD894: jz      short loc_140ABD8AC
 * 0000000140ABD896: lea     eax, [rcx-1]
 * 0000000140ABD899: lea     rax, [rax+rax*4]
 * 0000000140ABD89D: cmp     edx, [r11+rax*8+0Ch]
 * 0000000140ABD8A2: jb      loc_140ABDABC
 * 0000000140ABD8A8: mov     ecx, [rsp+0C30h+var_BC0]
 * 0000000140ABD8AC: cmp     r13, r14
 * 0000000140ABD8AF: jz      loc_140ABDA74
 * 0000000140ABD8B5: mov     ecx, [r13+0]
 * 0000000140ABD8B9: mov     eax, [r13+4]
 * 0000000140ABD8BD: cmp     ecx, edx
 * 0000000140ABD8BF: jnb     loc_140ABDA59
 * 0000000140ABD8C5: cmp     eax, r9d
 * 0000000140ABD8C8: jbe     loc_140ABDA59
 * 0000000140ABD8CE: cmp     ecx, r9d
 * 0000000140ABD8D1: jb      loc_140ABDB15
 * 0000000140ABD8D7: cmp     eax, edx
 * 0000000140ABD8D9: ja      loc_140ABDB15
 * 0000000140ABD8DF: mov     eax, [r13+8]
 * 0000000140ABD8E3: mov     ecx, 1
 * 0000000140ABD8E8: mov     [rbp+0B30h+var_690], r13
 * 0000000140ABD8EF: test    cl, al
 * 0000000140ABD8F1: jnz     short loc_140ABD8FF
 * 0000000140ABD8F3: mov     al, [rax+r12]
 * 0000000140ABD8F7: test    al, 20h
 * 0000000140ABD8F9: jz      loc_140ABDA4B
 * 0000000140ABD8FF: mov     eax, [r8+8]
 * 0000000140ABD903: mov     rcx, r13
 * 0000000140ABD906: mov     r15d, [r8+10h]
 * 0000000140ABD90A: cmp     r15d, eax
 * 0000000140ABD90D: mov     r12d, [r8+0Ch]
 * 0000000140ABD911: mov     rdx, [rbp+0B30h+var_B70]
 * 0000000140ABD915: cmovbe  r15d, eax
 * 0000000140ABD919: mov     rax, [rbx+408h]
 * 0000000140ABD920: add     r15d, r12d
 * 0000000140ABD923: call    j__guard_dispatch_icall_nop
 * 0000000140ABD928: mov     r14, rax
 * 0000000140ABD92B: cmp     [rax], r12d
 * 0000000140ABD92E: jb      short loc_140ABD936
 * 0000000140ABD930: cmp     [rax+4], r15d
 * 0000000140ABD934: jbe     short loc_140ABD9A5
 * 0000000140ABD936: mov     r8, [rbp+0B30h+var_B70]; BugCheckParameter2
 * 0000000140ABD93A: mov     eax, 80000000h
 * 0000000140ABD93F: mov     edx, r14d
 * 0000000140ABD942: sub     edx, r8d
 * 0000000140ABD945: or      edx, eax
 * 0000000140ABD947: xor     eax, eax
 * 0000000140ABD949: test    dword ptr [rbx+958h], 200000h
 * 0000000140ABD953: jz      loc_140ACCA1A
 * 0000000140ABD959: cmp     [rbx+8C0h], eax
 * 0000000140ABD95F: jnz     short loc_140ABD9A5
 * 0000000140ABD961: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABD96B: xor     edx, edx
 * 0000000140ABD96D: add     rax, rbx
 * 0000000140ABD970: mov     rcx, rbx
 * 0000000140ABD973: mov     [rbx+8C8h], rax
 * 0000000140ABD97A: xor     eax, eax
 * 0000000140ABD97C: mov     [rbx+8D0h], rax
 * 0000000140ABD983: mov     eax, 1
 * 0000000140ABD988: mov     qword ptr [rbx+8D8h], 10Fh
 * 0000000140ABD993: mov     [rbx+8E0h], r8
 * 0000000140ABD99A: mov     [rbx+8C0h], eax
 * 0000000140ABD9A0: call    sub_140AD049C
 * 0000000140ABD9A5: mov     r8d, [r14]
 * 0000000140ABD9A8: mov     rcx, r14
 * 0000000140ABD9AB: add     r8, [rbp+0B30h+var_B70]
 * 0000000140ABD9AF: mov     rax, [rbx+410h]
 * 0000000140ABD9B6: mov     rdx, [rbp+0B30h+var_B70]
 * 0000000140ABD9BA: call    j__guard_dispatch_icall_nop
 * 0000000140ABD9BF: mov     rdx, rax
 * 0000000140ABD9C2: cmp     [rax], r12d
 * 0000000140ABD9C5: jb      short loc_140ABD9CD
 * 0000000140ABD9C7: cmp     [rax+4], r15d
 * 0000000140ABD9CB: jbe     short loc_140ABDA3B
 * 0000000140ABD9CD: mov     r12, [rbp+0B30h+var_B70]
 * 0000000140ABD9D1: mov     eax, 80000000h
 * 0000000140ABD9D6: sub     edx, r12d
 * 0000000140ABD9D9: or      edx, eax
 * 0000000140ABD9DB: xor     eax, eax
 * 0000000140ABD9DD: test    dword ptr [rbx+958h], 200000h
 * 0000000140ABD9E7: jz      loc_140ACC9F1
 * 0000000140ABD9ED: cmp     [rbx+8C0h], eax
 * 0000000140ABD9F3: jnz     short loc_140ABDA3F
 * 0000000140ABD9F5: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABD9FF: xor     edx, edx
 * 0000000140ABDA01: add     rax, rbx
 * 0000000140ABDA04: mov     rcx, rbx
 * 0000000140ABDA07: mov     [rbx+8C8h], rax
 * 0000000140ABDA0E: xor     eax, eax
 * 0000000140ABDA10: mov     [rbx+8D0h], rax
 * 0000000140ABDA17: mov     eax, 1
 * 0000000140ABDA1C: mov     qword ptr [rbx+8D8h], 10Fh
 * 0000000140ABDA27: mov     [rbx+8E0h], r12
 * 0000000140ABDA2E: mov     [rbx+8C0h], eax
 * 0000000140ABDA34: call    sub_140AD049C
 * 0000000140ABDA39: jmp     short loc_140ABDA3F
 * 0000000140ABDA3B: mov     r12, [rbp+0B30h+var_B70]
 * 0000000140ABDA3F: mov     edx, dword ptr [rbp+0B30h+var_B30]
 * 0000000140ABDA42: mov     r8, [rsp+0C30h+var_BD8]
 * 0000000140ABDA47: mov     r9d, dword ptr [rbp+0B30h+var_B40]
 * 0000000140ABDA4B: add     r13, 0Ch
 * 0000000140ABDA4F: cmp     r13, [rbp+0B30h+var_B88]
 * 0000000140ABDA53: jnz     loc_140ABD8B5
 * 0000000140ABDA59: mov     ecx, [rsp+0C30h+var_BC0]
 * 0000000140ABDA5D: mov     r15d, 1
 * 0000000140ABDA63: movzx   r10d, word ptr [rbp+0B30h+arg_8]
 * 0000000140ABDA6B: mov     r11, [rsp+0C30h+var_BB8]
 * 0000000140ABDA70: mov     r14, [rbp+0B30h+var_B88]
 * 0000000140ABDA74: add     ecx, r15d
 * 0000000140ABDA77: movzx   eax, r10w
 * 0000000140ABDA7B: add     r8, 28h ; '('
 * 0000000140ABDA7F: mov     [rsp+0C30h+var_BC0], ecx
 * 0000000140ABDA83: mov     [rsp+0C30h+var_BD8], r8
 * 0000000140ABDA88: cmp     ecx, eax
 * 0000000140ABDA8A: jb      loc_140ABD877
 * 0000000140ABDA90: mov     r9, [rbp+0B30h+var_B80]
 * 0000000140ABDA94: xor     edx, edx
 * 0000000140ABDA96: mov     r15, [rsp+0C30h+var_BC8]
 * 0000000140ABDA9B: mov     r11, [rbp+0B30h+var_B88]
 * 0000000140ABDA9F: cmp     r13, r11
 * 0000000140ABDAA2: jz      loc_140ABDB72
 * 0000000140ABDAA8: test    dword ptr [rbx+958h], 200000h
 * 0000000140ABDAB2: jz      loc_140ACCA6B
 * 0000000140ABDAB8: xor     eax, eax
 * 0000000140ABDABA: jmp     short loc_140ABDB27
 * 0000000140ABDABC: xor     eax, eax
 * 0000000140ABDABE: test    dword ptr [rbx+958h], 200000h
 * 0000000140ABDAC8: jz      loc_140ACC9C8
 * 0000000140ABDACE: cmp     [rbx+8C0h], eax
 * 0000000140ABDAD4: jnz     loc_140ABCD89
 * 0000000140ABDADA: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABDAE4: add     rax, rbx
 * 0000000140ABDAE7: mov     [rbx+8C8h], rax
 * 0000000140ABDAEE: xor     eax, eax
 * 0000000140ABDAF0: mov     [rbx+8D0h], rax
 * 0000000140ABDAF7: mov     qword ptr [rbx+8D8h], 10Fh
 * 0000000140ABDB02: mov     [rbx+8E0h], r12
 * 0000000140ABDB09: mov     [rbx+8C0h], r15d
 * 0000000140ABDB10: jmp     loc_140ABD824
 * 0000000140ABDB15: xor     eax, eax
 * 0000000140ABDB17: test    dword ptr [rbx+958h], 200000h
 * 0000000140ABDB21: jz      loc_140ACCA40
 * 0000000140ABDB27: cmp     [rbx+8C0h], eax
 * 0000000140ABDB2D: jnz     loc_140ABCD89
 * 0000000140ABDB33: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABDB3D: add     rax, rbx
 * 0000000140ABDB40: mov     [rbx+8C8h], rax
 * 0000000140ABDB47: xor     eax, eax
 * 0000000140ABDB49: mov     [rbx+8D0h], rax
 * 0000000140ABDB50: mov     eax, 1
 * 0000000140ABDB55: mov     qword ptr [rbx+8D8h], 10Fh
 * 0000000140ABDB60: mov     [rbx+8E0h], r12
 * 0000000140ABDB67: mov     [rbx+8C0h], eax
 * 0000000140ABDB6D: jmp     loc_140ABD824
 * 0000000140ABDB72: xor     r13d, r13d
 * 0000000140ABDB75: test    r9d, r9d
 * 0000000140ABDB78: jz      short loc_140ABDB83
 * 0000000140ABDB7A: lea     ecx, [r9+6]
 * 0000000140ABDB7E: and     ecx, 0FFFFFFF8h
 * 0000000140ABDB81: jmp     short loc_140ABDB86
 * 0000000140ABDB83: mov     ecx, r13d
 * 0000000140ABDB86: mov     r14d, [rbx+7ACh]
 * 0000000140ABDB8D: lea     eax, [rax+rax*2]
 * 0000000140ABDB90: mov     r8d, [rbx+8ECh]
 * 0000000140ABDB97: lea     ecx, [rcx+rax*8]
 * 0000000140ABDB9A: lea     eax, [r14+30h]
 * 0000000140ABDB9E: add     eax, ecx
 * 0000000140ABDBA0: cmp     eax, [rbx+9E4h]
 * 0000000140ABDBA6: jbe     loc_140ABDCA6
 * 0000000140ABDBAC: mov     edx, eax
 * 0000000140ABDBAE: mov     rcx, rbx
 * 0000000140ABDBB1: call    sub_140ACFC24
 * 0000000140ABDBB6: mov     [rsp+0C30h+var_BD8], rax
 * 0000000140ABDBBB: mov     r12, rax
 * 0000000140ABDBBE: test    rax, rax
 * 0000000140ABDBC1: jz      loc_140ABCE1D
 * 0000000140ABDBC7: mov     ecx, [rbx+958h]
 * 0000000140ABDBCD: test    cl, 4
 * 0000000140ABDBD0: jnz     loc_140ABDC8B
 * 0000000140ABDBD6: mov     eax, [rbx+7ACh]
 * 0000000140ABDBDC: and     ecx, 20000000h
 * 0000000140ABDBE2: mov     r8, [rbx+790h]
 * 0000000140ABDBE9: neg     ecx
 * 0000000140ABDBEB: mov     r10d, 1
 * 0000000140ABDBF1: sbb     edx, edx
 * 0000000140ABDBF3: and     edx, [rbx+8ECh]
 * 0000000140ABDBF9: cmp     eax, 8
 * 0000000140ABDBFC: jb      short loc_140ABDC16
 * 0000000140ABDBFE: mov     ecx, eax
 * 0000000140ABDC00: shr     rcx, 3
 * 0000000140ABDC04: xor     r9d, r9d
 * 0000000140ABDC07: mov     [rbx], r9
 * 0000000140ABDC0A: add     eax, 0FFFFFFF8h
 * 0000000140ABDC0D: add     rbx, 8
 * 0000000140ABDC11: sub     rcx, r10
 * 0000000140ABDC14: jnz     short loc_140ABDC07
 * 0000000140ABDC16: xor     ecx, ecx
 * 0000000140ABDC18: test    eax, eax
 * 0000000140ABDC1A: jz      short loc_140ABDC2C
 * 0000000140ABDC1C: mov     r9d, 0FFFFFFFFh
 * 0000000140ABDC22: mov     [rbx], cl
 * 0000000140ABDC24: add     rbx, r10
 * 0000000140ABDC27: add     eax, r9d
 * 0000000140ABDC2A: jnz     short loc_140ABDC22
 * 0000000140ABDC2C: mov     ebx, [r12+8ECh]
 * 0000000140ABDC34: mov     [r12+8ECh], edx
 * 0000000140ABDC3C: cmp     edx, 3
 * 0000000140ABDC3F: jz      short loc_140ABDC73
 * 0000000140ABDC41: test    dword ptr [r12+958h], 10000000h
 * 0000000140ABDC4D: jnz     short loc_140ABDC69
 * 0000000140ABDC4F: test    edx, edx
 * 0000000140ABDC51: jz      short loc_140ABDC69
 * 0000000140ABDC53: mov     rax, [r12+218h]
 * 0000000140ABDC5B: lea     rcx, [r8-8]
 * 0000000140ABDC5F: mov     rdx, [rcx]
 * 0000000140ABDC62: call    j__guard_dispatch_icall_nop
 * 0000000140ABDC67: jmp     short loc_140ABDC83
 * 0000000140ABDC69: mov     rax, [r12+0F0h]
 * 0000000140ABDC71: jmp     short loc_140ABDC7B
 * 0000000140ABDC73: mov     rax, [r12+358h]
 * 0000000140ABDC7B: mov     rcx, r8
 * 0000000140ABDC7E: call    j__guard_dispatch_icall_nop
 * 0000000140ABDC83: mov     [r12+8ECh], ebx
 * 0000000140ABDC8B: and     dword ptr [r12+958h], 0FFFFFFFBh
 * 0000000140ABDC94: mov     r9, [rbp+0B30h+var_B80]
 * 0000000140ABDC98: movzx   r10d, word ptr [rbp+0B30h+arg_8]
 * 0000000140ABDCA0: mov     r11, [rbp+0B30h+var_B88]
 * 0000000140ABDCA4: jmp     short loc_140ABDCB4
 * 0000000140ABDCA6: mov     r12, rbx
 * 0000000140ABDCA9: mov     [rsp+0C30h+var_BD8], rbx
 * 0000000140ABDCAE: mov     [rbx+7ACh], eax
 * 0000000140ABDCB4: mov     ebx, 1
 * 0000000140ABDCB9: lea     rdx, [r12+r14]
 * 0000000140ABDCBD: add     [r12+7D4h], ebx
 * 0000000140ABDCC5: mov     rax, rdx
 * 0000000140ABDCC8: mov     [rbp+0B30h+var_818], rdx
 * 0000000140ABDCCF: lea     ecx, [rbx+2Fh]
 * 0000000140ABDCD2: lea     r8d, [rbx+5]
 * 0000000140ABDCD6: mov     [rax], r13
 * 0000000140ABDCD9: add     ecx, 0FFFFFFF8h
 * 0000000140ABDCDC: add     rax, 8
 * 0000000140ABDCE0: sub     r8, rbx
 * 0000000140ABDCE3: jnz     short loc_140ABDCD6
 * 0000000140ABDCE5: test    ecx, ecx
 * 0000000140ABDCE7: jz      short loc_140ABDCFA
 * 0000000140ABDCE9: mov     r8d, 0FFFFFFFFh
 * 0000000140ABDCEF: mov     [rax], r13b
 * 0000000140ABDCF2: add     rax, rbx
 * 0000000140ABDCF5: add     ecx, r8d
 * 0000000140ABDCF8: jnz     short loc_140ABDCEF
 * 0000000140ABDCFA: mov     r14, [rbp+0B30h+var_BA8]
 * 0000000140ABDCFE: mov     dword ptr [rdx], 1Eh
 * 0000000140ABDD04: mov     [rdx+8], r14
 * 0000000140ABDD08: mov     [rdx+10h], r13d
 * 0000000140ABDD0C: mov     rcx, [r12+7E0h]
 * 0000000140ABDD14: mov     rax, rcx
 * 0000000140ABDD17: jmp     short loc_140ABDD1B
 * 0000000140ABDD19: xor     ecx, eax
 * 0000000140ABDD1B: shr     rax, 1Fh
 * 0000000140ABDD1F: test    rax, rax
 * 0000000140ABDD22: jnz     short loc_140ABDD19
 * 0000000140ABDD24: btr     ecx, 1Fh
 * 0000000140ABDD28: mov     r8d, 0FFFEh
 * 0000000140ABDD2E: mov     [rdx+14h], ecx
 * 0000000140ABDD31: mov     rbx, r12
 * 0000000140ABDD34: mov     rax, [rbp+0B30h+var_818]
 * 0000000140ABDD3B: mov     rcx, [rbp+0B30h+var_B70]
 * 0000000140ABDD3F: mov     [rbp+0B30h+var_A98], rax
 * 0000000140ABDD46: mov     [rbp+0B30h+var_B10], rbx
 * 0000000140ABDD4A: mov     [rax+18h], rcx
 * 0000000140ABDD4E: mov     ecx, [r15+50h]
 * 0000000140ABDD52: mov     rax, [rbp+0B30h+var_A98]
 * 0000000140ABDD59: mov     [rax+20h], ecx
 * 0000000140ABDD5C: mov     rax, [rbp+0B30h+var_A98]
 * 0000000140ABDD63: mov     ecx, dword ptr [rbp+0B30h+var_B90]
 * 0000000140ABDD66: mov     [rax+24h], ecx
 * 0000000140ABDD69: mov     rax, [rbp+0B30h+var_A98]
 * 0000000140ABDD70: mov     [rax+28h], r10w
 * 0000000140ABDD75: xor     eax, eax
 * 0000000140ABDD77: cmp     [rbp+0B30h+var_BA0], eax
 * 0000000140ABDD7A: mov     ecx, eax
 * 0000000140ABDD7C: mov     rdx, [rbp+0B30h+var_A98]
 * 0000000140ABDD83: setnz   cl
 * 0000000140ABDD86: movzx   eax, word ptr [rdx+2Ah]
 * 0000000140ABDD8A: and     ax, r8w
 * 0000000140ABDD8E: or      cx, ax
 * 0000000140ABDD91: mov     [rdx+2Ah], cx
 * 0000000140ABDD95: mov     rcx, [rbp+0B30h+var_A98]
 * 0000000140ABDD9C: lea     rdx, [rcx+30h]
 * 0000000140ABDDA0: mov     [rbp+0B30h+var_B40], rdx
 * 0000000140ABDDA4: test    r9d, r9d
 * 0000000140ABDDA7: jz      short loc_140ABDDBA
 * 0000000140ABDDA9: lea     r13d, [r9-1]
 * 0000000140ABDDAD: add     r13, 7
 * 0000000140ABDDB1: and     r13, 0FFFFFFFFFFFFFFF8h
 * 0000000140ABDDB5: add     r13, rdx
 * 0000000140ABDDB8: jmp     short loc_140ABDDBD
 * 0000000140ABDDBA: mov     r13, rdx
 * 0000000140ABDDBD: movzx   eax, word ptr [rcx+28h]
 * 0000000140ABDDC1: mov     [rbp+0B30h+var_B30], r13
 * 0000000140ABDDC5: lea     rcx, [rax+rax*2]
 * 0000000140ABDDC9: lea     r8, ds:0[rcx*8]
 * 0000000140ABDDD1: add     r8, r13
 * 0000000140ABDDD4: mov     [rsp+0C30h+var_BC8], r8
 * 0000000140ABDDD9: test    r9d, r9d
 * 0000000140ABDDDC: jz      short loc_140ABDDE8
 * 0000000140ABDDDE: lea     rax, [r14+0Ch]
 * 0000000140ABDDE2: mov     [rbp+0B30h+var_B80], rax
 * 0000000140ABDDE6: jmp     short loc_140ABDDEC
 * 0000000140ABDDE8: mov     [rbp+0B30h+var_B80], r11
 * 0000000140ABDDEC: xor     eax, eax
 * 0000000140ABDDEE: cmp     ax, r10w
 * 0000000140ABDDF2: jnb     short loc_140ABDE35
 * 0000000140ABDDF4: xor     r9d, r9d
 * 0000000140ABDDF7: movzx   edx, r10w
 * 0000000140ABDDFB: lea     rax, [r13+8]
 * 0000000140ABDDFF: mov     r11d, 80000000h
 * 0000000140ABDE05: lea     esi, [r9+2]
 * 0000000140ABDE09: lea     r10d, [r9+1]
 * 0000000140ABDE0D: lea     r15d, [r9+0Ch]
 * 0000000140ABDE11: mov     rcx, rsi
 * 0000000140ABDE14: mov     [rax-8], r9d
 * 0000000140ABDE18: mov     [rax-4], r9d
 * 0000000140ABDE1C: mov     [rax], r11d
 * 0000000140ABDE1F: add     rax, r15
 * 0000000140ABDE22: sub     rcx, r10
 * 0000000140ABDE25: jnz     short loc_140ABDE14
 * 0000000140ABDE27: sub     rdx, r10
 * 0000000140ABDE2A: jnz     short loc_140ABDE11
 * 0000000140ABDE2C: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABDE31: xor     eax, eax
 * 0000000140ABDE33: jmp     short loc_140ABDE3B
 * 0000000140ABDE35: mov     r10d, 1
 * 0000000140ABDE3B: cmp     r13, r8
 * 0000000140ABDE3E: jz      loc_140ABE712
 * 0000000140ABDE44: jmp     short loc_140ABDE48
 * 0000000140ABDE46: xor     eax, eax
 * 0000000140ABDE48: mov     r13, [rsp+0C30h+var_BB8]
 * 0000000140ABDE4D: mov     r15d, eax
 * 0000000140ABDE50: mov     [rbp+0B30h+var_BA0], eax
 * 0000000140ABDE53: test    dword ptr [r13+24h], 2000000h
 * 0000000140ABDE5B: jnz     short loc_140ABDE72
 * 0000000140ABDE5D: mov     eax, [r13+0]
 * 0000000140ABDE61: cmp     eax, 54494E49h
 * 0000000140ABDE66: jnz     short loc_140ABDE7E
 * 0000000140ABDE68: cmp     dword ptr [r13+4], 4742444Bh
 * 0000000140ABDE70: jnz     short loc_140ABDEAA
 * 0000000140ABDE72: mov     r15d, r10d
 * 0000000140ABDE75: mov     [rbp+0B30h+var_BA0], r10d
 * 0000000140ABDE79: jmp     loc_140ABDF1B
 * 0000000140ABDE7E: cmp     eax, 45474150h
 * 0000000140ABDE83: jnz     short loc_140ABDEAA
 * 0000000140ABDE85: movzx   eax, word ptr [r13+4]
 * 0000000140ABDE8A: mov     ecx, 7877h
 * 0000000140ABDE8F: cmp     ax, cx
 * 0000000140ABDE92: jz      short loc_140ABDE72
 * 0000000140ABDE94: mov     ecx, 7277h
 * 0000000140ABDE99: cmp     ax, cx
 * 0000000140ABDE9C: jz      short loc_140ABDE72
 * 0000000140ABDE9E: mov     ecx, 7777h
 * 0000000140ABDEA3: cmp     ax, cx
 * 0000000140ABDEA6: jnz     short loc_140ABDEBD
 * 0000000140ABDEA8: jmp     short loc_140ABDE72
 * 0000000140ABDEAA: cmp     eax, 41525245h
 * 0000000140ABDEAF: jnz     short loc_140ABDEBD
 * 0000000140ABDEB1: mov     eax, 4154h
 * 0000000140ABDEB6: cmp     [r13+4], ax
 * 0000000140ABDEBB: jz      short loc_140ABDE72
 * 0000000140ABDEBD: mov     r8, [r12+8F8h]
 * 0000000140ABDEC5: mov     r10d, 7
 * 0000000140ABDECB: mov     r11, [r12+900h]
 * 0000000140ABDED3: mov     r9, r13
 * 0000000140ABDED6: mov     rbx, [r12+908h]
 * 0000000140ABDEDE: mov     r14, [r12+910h]
 * 0000000140ABDEE6: mov     [rbp+0B30h+var_60], r8
 * 0000000140ABDEED: movzx   edx, byte ptr [r9]
 * 0000000140ABDEF1: inc     r9
 * 0000000140ABDEF4: movzx   eax, byte ptr [r8]
 * 0000000140ABDEF8: inc     r8
 * 0000000140ABDEFB: cmp     rdx, rax
 * 0000000140ABDEFE: jnz     short loc_140ABDF35
 * 0000000140ABDF00: mov     eax, 0FFFFFFFFh
 * 0000000140ABDF05: add     r10d, eax
 * 0000000140ABDF08: jnz     short loc_140ABDEED
 * 0000000140ABDF0A: mov     r10d, 1
 * 0000000140ABDF10: mov     r15d, r10d
 * 0000000140ABDF13: mov     [rbp+0B30h+var_BA0], r10d
 * 0000000140ABDF17: mov     r14, [rbp+0B30h+var_BA8]
 * 0000000140ABDF1B: mov     ecx, [r13+24h]
 * 0000000140ABDF1F: xor     eax, eax
 * 0000000140ABDF21: test    ecx, ecx
 * 0000000140ABDF23: jns     loc_140ABDFE0
 * 0000000140ABDF29: mov     r15d, r10d
 * 0000000140ABDF2C: mov     [rbp+0B30h+var_BA0], r10d
 * 0000000140ABDF30: jmp     loc_140ABDFE5
 * 0000000140ABDF35: mov     r8d, 8
 * 0000000140ABDF3B: mov     r9, r13
 * 0000000140ABDF3E: mov     rcx, [r9]
 * 0000000140ABDF41: add     r9, 8
 * 0000000140ABDF45: mov     rax, [r11]
 * 0000000140ABDF48: add     r11, 8
 * 0000000140ABDF4C: cmp     rcx, rax
 * 0000000140ABDF4F: jnz     short loc_140ABDF85
 * 0000000140ABDF51: add     r8d, 0FFFFFFF8h
 * 0000000140ABDF55: cmp     r8d, 8
 * 0000000140ABDF59: jnb     short loc_140ABDF3E
 * 0000000140ABDF5B: test    r8d, r8d
 * 0000000140ABDF5E: jz      short loc_140ABDF0A
 * 0000000140ABDF60: mov     r10d, 1
 * 0000000140ABDF66: movzx   edx, byte ptr [r9]
 * 0000000140ABDF6A: add     r9, r10
 * 0000000140ABDF6D: movzx   eax, byte ptr [r11]
 * 0000000140ABDF71: add     r11, r10
 * 0000000140ABDF74: cmp     rdx, rax
 * 0000000140ABDF77: jnz     short loc_140ABDF8B
 * 0000000140ABDF79: mov     eax, 0FFFFFFFFh
 * 0000000140ABDF7E: add     r8d, eax
 * 0000000140ABDF81: jnz     short loc_140ABDF66
 * 0000000140ABDF83: jmp     short loc_140ABDF10
 * 0000000140ABDF85: mov     r10d, 1
 * 0000000140ABDF8B: mov     r9d, 4
 * 0000000140ABDF91: mov     r8, r13
 * 0000000140ABDF94: mov     r11d, 0FFFFFFFFh
 * 0000000140ABDF9A: movzx   edx, byte ptr [r8]
 * 0000000140ABDF9E: add     r8, r10
 * 0000000140ABDFA1: movzx   eax, byte ptr [rbx]
 * 0000000140ABDFA4: add     rbx, r10
 * 0000000140ABDFA7: cmp     rdx, rax
 * 0000000140ABDFAA: jnz     short loc_140ABDFB6
 * 0000000140ABDFAC: add     r9d, r11d
 * 0000000140ABDFAF: jnz     short loc_140ABDF9A
 * 0000000140ABDFB1: jmp     loc_140ABDF10
 * 0000000140ABDFB6: mov     r9d, 6
 * 0000000140ABDFBC: mov     r8, r13
 * 0000000140ABDFBF: movzx   edx, byte ptr [r8]
 * 0000000140ABDFC3: add     r8, r10
 * 0000000140ABDFC6: movzx   eax, byte ptr [r14]
 * 0000000140ABDFCA: add     r14, r10
 * 0000000140ABDFCD: cmp     rdx, rax
 * 0000000140ABDFD0: jnz     loc_140ABDF17
 * 0000000140ABDFD6: add     r9d, r11d
 * 0000000140ABDFD9: jnz     short loc_140ABDFBF
 * 0000000140ABDFDB: jmp     loc_140ABDF10
 * 0000000140ABDFE0: test    r15d, r15d
 * 0000000140ABDFE3: jz      short loc_140ABE00D
 * 0000000140ABDFE5: cmp     dword ptr [r13+0], 54494E49h
 * 0000000140ABDFED: jnz     short loc_140ABE00D
 * 0000000140ABDFEF: cmp     dword ptr [r13+4], 4742444Bh
 * 0000000140ABDFF7: jnz     short loc_140ABE00D
 * 0000000140ABDFF9: test    dword ptr [r12+95Ch], 2000h
 * 0000000140ABE005: cmovnz  r15d, eax
 * 0000000140ABE009: mov     [rbp+0B30h+var_BA0], r15d
 * 0000000140ABE00D: test    dword ptr [r12+95Ch], 4000h
 * 0000000140ABE019: mov     r9, [rbp+0B30h+var_B70]
 * 0000000140ABE01D: jz      short loc_140ABE040
 * 0000000140ABE01F: bt      ecx, 1Dh
 * 0000000140ABE023: jnb     short loc_140ABE040
 * 0000000140ABE025: cmp     r9, [r12+5C0h]
 * 0000000140ABE02D: jz      short loc_140ABE039
 * 0000000140ABE02F: cmp     r9, [r12+5C8h]
 * 0000000140ABE037: jnz     short loc_140ABE040
 * 0000000140ABE039: mov     r15d, r10d
 * 0000000140ABE03C: mov     [rbp+0B30h+var_BA0], r10d
 * 0000000140ABE040: mov     edx, [r13+0Ch]
 * 0000000140ABE044: mov     ebx, [r13+10h]
 * 0000000140ABE048: mov     eax, [r13+8]
 * 0000000140ABE04C: cmp     ebx, eax
 * 0000000140ABE04E: mov     r8, [rbp+0B30h+var_B88]
 * 0000000140ABE052: cmovbe  ebx, eax
 * 0000000140ABE055: mov     dword ptr [rbp+0B30h+var_B90], edx
 * 0000000140ABE058: add     ebx, edx
 * 0000000140ABE05A: mov     dword ptr [rbp+0B30h+arg_8], edx
 * 0000000140ABE060: xor     r10d, r10d
 * 0000000140ABE063: mov     [rsp+0C30h+var_BC0], ebx
 * 0000000140ABE067: cmp     r14, r8
 * 0000000140ABE06A: jz      loc_140ABE23C
 * 0000000140ABE070: mov     eax, [r14]
 * 0000000140ABE073: mov     ecx, [r14+4]
 * 0000000140ABE077: mov     r13d, ecx
 * 0000000140ABE07A: cmp     eax, edx
 * 0000000140ABE07C: jbe     loc_140ABE242
 * 0000000140ABE082: mov     dword ptr [rbp+0B30h+arg_8], edx
 * 0000000140ABE088: cmp     ecx, ebx
 * 0000000140ABE08A: ja      loc_140ABE3DA
 * 0000000140ABE090: mov     dword ptr [rbp+0B30h+arg_8], edx
 * 0000000140ABE096: test    r15d, r15d
 * 0000000140ABE099: jnz     loc_140ABE3F0
 * 0000000140ABE09F: mov     r8, [rbp+0B30h+var_B30]
 * 0000000140ABE0A3: lea     r14, [r9+rdx]
 * 0000000140ABE0A7: mov     r10d, eax
 * 0000000140ABE0AA: mov     dword ptr [rbp+0B30h+arg_8], eax
 * 0000000140ABE0B0: sub     r10d, edx
 * 0000000140ABE0B3: mov     r11d, r10d
 * 0000000140ABE0B6: mov     [r8], edx
 * 0000000140ABE0B9: add     r11, r14
 * 0000000140ABE0BC: mov     [r8+4], eax
 * 0000000140ABE0C0: lea     rdx, [rbp+0B30h+var_930]
 * 0000000140ABE0C7: xor     eax, eax
 * 0000000140ABE0C9: lea     r8, [rbp+0B30h+var_7D0]
 * 0000000140ABE0D0: mov     r9d, eax
 * 0000000140ABE0D3: mov     rcx, [r8]
 * 0000000140ABE0D6: mov     eax, [rdx]
 * 0000000140ABE0D8: add     rax, rcx
 * 0000000140ABE0DB: cmp     r14, rax
 * 0000000140ABE0DE: jnb     short loc_140ABE0E9
 * 0000000140ABE0E0: cmp     r11, rcx
 * 0000000140ABE0E3: ja      loc_140ABE3C7
 * 0000000140ABE0E9: inc     r9d
 * 0000000140ABE0EC: add     r8, 8
 * 0000000140ABE0F0: add     rdx, 4
 * 0000000140ABE0F4: cmp     r9d, 6
 * 0000000140ABE0F8: jb      short loc_140ABE0D3
 * 0000000140ABE0FA: add     [r12+7F0h], r10d
 * 0000000140ABE102: mov     rbx, r14
 * 0000000140ABE105: mov     r15d, [r12+7DCh]
 * 0000000140ABE10D: mov     rax, r14
 * 0000000140ABE110: mov     r12, [r12+7E0h]
 * 0000000140ABE118: cmp     r14, r11
 * 0000000140ABE11B: jnb     short loc_140ABE12D
 * 0000000140ABE11D: mov     ecx, 40h ; '@'
 * 0000000140ABE122: prefetchnta byte ptr [rax]
 * 0000000140ABE125: add     rax, rcx
 * 0000000140ABE128: cmp     rax, r11
 * 0000000140ABE12B: jb      short loc_140ABE122
 * 0000000140ABE12D: mov     r9d, r10d
 * 0000000140ABE130: mov     r8, r12
 * 0000000140ABE133: shr     r9d, 7
 * 0000000140ABE137: mov     r11d, 1
 * 0000000140ABE13D: test    r9d, r9d
 * 0000000140ABE140: jz      short loc_140ABE1AD
 * 0000000140ABE142: mov     rsi, 7010008004002001h
 * 0000000140ABE14C: mov     edx, 8
 * 0000000140ABE151: mov     rax, [rbx]
 * 0000000140ABE154: mov     ecx, r15d
 * 0000000140ABE157: xor     rax, r8
 * 0000000140ABE15A: mov     r8, [rbx+8]
 * 0000000140ABE15E: rol     rax, cl
 * 0000000140ABE161: add     rbx, 10h
 * 0000000140ABE165: xor     r8, rax
 * 0000000140ABE168: rol     r8, cl
 * 0000000140ABE16B: sub     rdx, r11
 * 0000000140ABE16E: jnz     short loc_140ABE151
 * 0000000140ABE170: mov     rcx, rbx
 * 0000000140ABE173: sub     rcx, r14
 * 0000000140ABE176: xor     rcx, r12
 * 0000000140ABE179: mov     rax, rcx
 * 0000000140ABE17C: rol     rax, 11h
 * 0000000140ABE180: xor     rcx, rax
 * 0000000140ABE183: mov     rax, rsi
 * 0000000140ABE186: mul     rcx
 * 0000000140ABE189: xor     r15d, edx
 * 0000000140ABE18C: mov     [rbp+0B30h+var_688], rdx
 * 0000000140ABE193: xor     r15d, eax
 * 0000000140ABE196: mov     eax, 0FFFFFFFFh
 * 0000000140ABE19B: and     r15d, 3Fh
 * 0000000140ABE19F: cmovz   r15d, r11d
 * 0000000140ABE1A3: add     r9d, eax
 * 0000000140ABE1A6: jnz     short loc_140ABE14C
 * 0000000140ABE1A8: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABE1AD: and     r10d, 7Fh
 * 0000000140ABE1B1: cmp     r10d, 8
 * 0000000140ABE1B5: jb      short loc_140ABE1D4
 * 0000000140ABE1B7: mov     edx, r10d
 * 0000000140ABE1BA: shr     rdx, 3
 * 0000000140ABE1BE: xor     r8, [rbx]
 * 0000000140ABE1C1: mov     ecx, r15d
 * 0000000140ABE1C4: rol     r8, cl
 * 0000000140ABE1C7: add     rbx, 8
 * 0000000140ABE1CB: add     r10d, 0FFFFFFF8h
 * 0000000140ABE1CF: sub     rdx, r11
 * 0000000140ABE1D2: jnz     short loc_140ABE1BE
 * 0000000140ABE1D4: test    r10d, r10d
 * 0000000140ABE1D7: jz      short loc_140ABE1F7
 * 0000000140ABE1D9: mov     esi, 0FFFFFFFFh
 * 0000000140ABE1DE: movzx   eax, byte ptr [rbx]
 * 0000000140ABE1E1: mov     ecx, r15d
 * 0000000140ABE1E4: xor     r8, rax
 * 0000000140ABE1E7: add     rbx, r11
 * 0000000140ABE1EA: rol     r8, cl
 * 0000000140ABE1ED: add     r10d, esi
 * 0000000140ABE1F0: jnz     short loc_140ABE1DE
 * 0000000140ABE1F2: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABE1F7: mov     rax, r8
 * 0000000140ABE1FA: shr     rax, 1Fh
 * 0000000140ABE1FE: xor     r10d, r10d
 * 0000000140ABE201: jmp     short loc_140ABE20A
 * 0000000140ABE203: xor     r8d, eax
 * 0000000140ABE206: shr     rax, 1Fh
 * 0000000140ABE20A: test    rax, rax
 * 0000000140ABE20D: jnz     short loc_140ABE203
 * 0000000140ABE20F: mov     rax, [rbp+0B30h+var_B30]
 * 0000000140ABE213: btr     r8d, 1Fh
 * 0000000140ABE218: mov     ecx, dword ptr [rbp+0B30h+arg_8]
 * 0000000140ABE21E: mov     ebx, [rsp+0C30h+var_BC0]
 * 0000000140ABE222: mov     r15d, [rbp+0B30h+var_BA0]
 * 0000000140ABE226: mov     r12, [rsp+0C30h+var_BD8]
 * 0000000140ABE22B: mov     r14, [rbp+0B30h+var_BA8]
 * 0000000140ABE22F: mov     [rax+8], r8d
 * 0000000140ABE233: mov     r8, [rbp+0B30h+var_B88]
 * 0000000140ABE237: jmp     loc_140ABE3DC
 * 0000000140ABE23C: mov     eax, r10d
 * 0000000140ABE23F: mov     r13d, r10d
 * 0000000140ABE242: mov     ecx, edx
 * 0000000140ABE244: cmp     eax, edx
 * 0000000140ABE246: jnb     loc_140ABE3DC
 * 0000000140ABE24C: mov     r12d, 1
 * 0000000140ABE252: mov     r13, [rbp+0B30h+var_B30]
 * 0000000140ABE256: test    r15d, r15d
 * 0000000140ABE259: jnz     loc_140ABE6A0
 * 0000000140ABE25F: cmp     ecx, ebx
 * 0000000140ABE261: jz      loc_140ABE6A0
 * 0000000140ABE267: mov     r14, [rbp+0B30h+var_B70]
 * 0000000140ABE26B: lea     rdx, [rbp+0B30h+var_930]
 * 0000000140ABE272: mov     [r13+0Ch], ecx
 * 0000000140ABE276: lea     r8, [rbp+0B30h+var_7D0]
 * 0000000140ABE27D: mov     [r13+10h], ebx
 * 0000000140ABE281: mov     r9d, ebx
 * 0000000140ABE284: mov     eax, [r13+0Ch]
 * 0000000140ABE288: sub     r9d, eax
 * 0000000140ABE28B: add     r14, rax
 * 0000000140ABE28E: mov     r11d, r9d
 * 0000000140ABE291: add     r11, r14
 * 0000000140ABE294: xor     eax, eax
 * 0000000140ABE296: mov     r10d, eax
 * 0000000140ABE299: mov     rcx, [r8]
 * 0000000140ABE29C: mov     eax, [rdx]
 * 0000000140ABE29E: add     rax, rcx
 * 0000000140ABE2A1: cmp     r14, rax
 * 0000000140ABE2A4: jnb     short loc_140ABE2AF
 * 0000000140ABE2A6: cmp     r11, rcx
 * 0000000140ABE2A9: ja      loc_140ABE69C
 * 0000000140ABE2AF: add     r10d, r12d
 * 0000000140ABE2B2: add     r8, 8
 * 0000000140ABE2B6: add     rdx, 4
 * 0000000140ABE2BA: cmp     r10d, 6
 * 0000000140ABE2BE: jb      short loc_140ABE299
 * 0000000140ABE2C0: mov     rax, [rsp+0C30h+var_BD8]
 * 0000000140ABE2C5: mov     rbx, r14
 * 0000000140ABE2C8: add     [rax+7F0h], r9d
 * 0000000140ABE2CF: mov     r12d, [rax+7DCh]
 * 0000000140ABE2D6: mov     r15, [rax+7E0h]
 * 0000000140ABE2DD: mov     rax, r14
 * 0000000140ABE2E0: cmp     r14, r11
 * 0000000140ABE2E3: jnb     short loc_140ABE2F5
 * 0000000140ABE2E5: mov     ecx, 40h ; '@'
 * 0000000140ABE2EA: prefetchnta byte ptr [rax]
 * 0000000140ABE2ED: add     rax, rcx
 * 0000000140ABE2F0: cmp     rax, r11
 * 0000000140ABE2F3: jb      short loc_140ABE2EA
 * 0000000140ABE2F5: mov     r10d, r9d
 * 0000000140ABE2F8: mov     r8, r15
 * 0000000140ABE2FB: shr     r10d, 7
 * 0000000140ABE2FF: mov     r11d, 1
 * 0000000140ABE305: test    r10d, r10d
 * 0000000140ABE308: jz      short loc_140ABE375
 * 0000000140ABE30A: mov     rsi, 7010008004002001h
 * 0000000140ABE314: mov     edx, 8
 * 0000000140ABE319: mov     rax, [rbx]
 * 0000000140ABE31C: mov     ecx, r12d
 * 0000000140ABE31F: xor     rax, r8
 * 0000000140ABE322: mov     r8, [rbx+8]
 * 0000000140ABE326: rol     rax, cl
 * 0000000140ABE329: add     rbx, 10h
 * 0000000140ABE32D: xor     r8, rax
 * 0000000140ABE330: rol     r8, cl
 * 0000000140ABE333: sub     rdx, r11
 * 0000000140ABE336: jnz     short loc_140ABE319
 * 0000000140ABE338: mov     rcx, rbx
 * 0000000140ABE33B: sub     rcx, r14
 * 0000000140ABE33E: xor     rcx, r15
 * 0000000140ABE341: mov     rax, rcx
 * 0000000140ABE344: rol     rax, 11h
 * 0000000140ABE348: xor     rcx, rax
 * 0000000140ABE34B: mov     rax, rsi
 * 0000000140ABE34E: mul     rcx
 * 0000000140ABE351: xor     r12d, edx
 * 0000000140ABE354: mov     [rbp+0B30h+var_678], rdx
 * 0000000140ABE35B: xor     r12d, eax
 * 0000000140ABE35E: mov     eax, 0FFFFFFFFh
 * 0000000140ABE363: and     r12d, 3Fh
 * 0000000140ABE367: cmovz   r12d, r11d
 * 0000000140ABE36B: add     r10d, eax
 * 0000000140ABE36E: jnz     short loc_140ABE314
 * 0000000140ABE370: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABE375: and     r9d, 7Fh
 * 0000000140ABE379: cmp     r9d, 8
 * 0000000140ABE37D: jb      short loc_140ABE39C
 * 0000000140ABE37F: mov     edx, r9d
 * 0000000140ABE382: shr     rdx, 3
 * 0000000140ABE386: xor     r8, [rbx]
 * 0000000140ABE389: mov     ecx, r12d
 * 0000000140ABE38C: rol     r8, cl
 * 0000000140ABE38F: add     rbx, 8
 * 0000000140ABE393: add     r9d, 0FFFFFFF8h
 * 0000000140ABE397: sub     rdx, r11
 * 0000000140ABE39A: jnz     short loc_140ABE386
 * 0000000140ABE39C: test    r9d, r9d
 * 0000000140ABE39F: jz      short loc_140ABE3BF
 * 0000000140ABE3A1: mov     esi, 0FFFFFFFFh
 * 0000000140ABE3A6: movzx   eax, byte ptr [rbx]
 * 0000000140ABE3A9: mov     ecx, r12d
 * 0000000140ABE3AC: xor     r8, rax
 * 0000000140ABE3AF: add     rbx, r11
 * 0000000140ABE3B2: rol     r8, cl
 * 0000000140ABE3B5: add     r9d, esi
 * 0000000140ABE3B8: jnz     short loc_140ABE3A6
 * 0000000140ABE3BA: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABE3BF: mov     rax, r8
 * 0000000140ABE3C2: jmp     loc_140ABE686
 * 0000000140ABE3C7: mov     ecx, dword ptr [rbp+0B30h+arg_8]
 * 0000000140ABE3CD: xor     r10d, r10d
 * 0000000140ABE3D0: mov     r8, [rbp+0B30h+var_B88]
 * 0000000140ABE3D4: mov     r14, [rbp+0B30h+var_BA8]
 * 0000000140ABE3D8: jmp     short loc_140ABE3DC
 * 0000000140ABE3DA: mov     ecx, edx
 * 0000000140ABE3DC: cmp     r13d, ebx
 * 0000000140ABE3DF: ja      loc_140ABE24C
 * 0000000140ABE3E5: cmp     r14, r8
 * 0000000140ABE3E8: jz      loc_140ABE24C
 * 0000000140ABE3EE: jmp     short loc_140ABE3F2
 * 0000000140ABE3F0: mov     ecx, edx
 * 0000000140ABE3F2: mov     rax, [rbp+0B30h+var_B80]
 * 0000000140ABE3F6: mov     r13d, [rax+4]
 * 0000000140ABE3FA: cmp     r13d, ebx
 * 0000000140ABE3FD: ja      loc_140ABE24C
 * 0000000140ABE403: mov     ecx, 0Ch
 * 0000000140ABE408: jmp     short loc_140ABE40F
 * 0000000140ABE40A: mov     r12, [rsp+0C30h+var_BD8]
 * 0000000140ABE40F: cmp     rax, r8
 * 0000000140ABE412: jz      loc_140ABE678
 * 0000000140ABE418: test    r15d, r15d
 * 0000000140ABE41B: jz      short loc_140ABE425
 * 0000000140ABE41D: mov     r8b, 80h
 * 0000000140ABE420: jmp     loc_140ABE634
 * 0000000140ABE425: mov     r15d, [rax]
 * 0000000140ABE428: mov     ebx, [r14+4]
 * 0000000140ABE42C: mov     dword ptr [rbp+0B30h+arg_8], r15d
 * 0000000140ABE433: cmp     r15d, ebx
 * 0000000140ABE436: jnb     short loc_140ABE4A4
 * 0000000140ABE438: test    dword ptr [r12+958h], 200000h
 * 0000000140ABE444: jz      loc_140ACCA96
 * 0000000140ABE44A: xor     eax, eax
 * 0000000140ABE44C: cmp     [r12+8C0h], eax
 * 0000000140ABE454: jnz     short loc_140ABE4A4
 * 0000000140ABE456: mov     rcx, [rbp+0B30h+var_B70]
 * 0000000140ABE45A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABE464: add     rax, r12
 * 0000000140ABE467: xor     edx, edx
 * 0000000140ABE469: mov     [r12+8C8h], rax
 * 0000000140ABE471: xor     eax, eax
 * 0000000140ABE473: mov     [r12+8D0h], rax
 * 0000000140ABE47B: mov     eax, 1
 * 0000000140ABE480: mov     qword ptr [r12+8D8h], 10Fh
 * 0000000140ABE48C: mov     [r12+8E0h], rcx
 * 0000000140ABE494: mov     rcx, r12
 * 0000000140ABE497: mov     [r12+8C0h], eax
 * 0000000140ABE49F: call    sub_140AD049C
 * 0000000140ABE4A4: mov     r14, rbx
 * 0000000140ABE4A7: lea     rdx, [rbp+0B30h+var_930]
 * 0000000140ABE4AE: add     r14, [rbp+0B30h+var_B70]
 * 0000000140ABE4B2: lea     r8, [rbp+0B30h+var_7D0]
 * 0000000140ABE4B9: mov     r9d, r15d
 * 0000000140ABE4BC: sub     r9d, ebx
 * 0000000140ABE4BF: mov     ebx, r9d
 * 0000000140ABE4C2: add     rbx, r14
 * 0000000140ABE4C5: xor     eax, eax
 * 0000000140ABE4C7: mov     r10d, eax
 * 0000000140ABE4CA: mov     rcx, [r8]
 * 0000000140ABE4CD: mov     eax, [rdx]
 * 0000000140ABE4CF: add     rax, rcx
 * 0000000140ABE4D2: cmp     r14, rax
 * 0000000140ABE4D5: jnb     short loc_140ABE4E0
 * 0000000140ABE4D7: cmp     rbx, rcx
 * 0000000140ABE4DA: ja      loc_140ABE61D
 * 0000000140ABE4E0: mov     eax, 4
 * 0000000140ABE4E5: inc     r10d
 * 0000000140ABE4E8: add     rdx, rax
 * 0000000140ABE4EB: add     r8, 8
 * 0000000140ABE4EF: cmp     r10d, 6
 * 0000000140ABE4F3: jb      short loc_140ABE4CA
 * 0000000140ABE4F5: cmp     r9d, eax
 * 0000000140ABE4F8: jb      loc_140ABE61D
 * 0000000140ABE4FE: add     [r12+7F0h], r9d
 * 0000000140ABE506: mov     r11, r14
 * 0000000140ABE509: mov     r15, [rsp+0C30h+var_BD8]
 * 0000000140ABE50E: mov     rax, r14
 * 0000000140ABE511: mov     r12d, [r12+7DCh]
 * 0000000140ABE519: mov     r15, [r15+7E0h]
 * 0000000140ABE520: cmp     r14, rbx
 * 0000000140ABE523: jnb     short loc_140ABE535
 * 0000000140ABE525: mov     ecx, 40h ; '@'
 * 0000000140ABE52A: prefetchnta byte ptr [rax]
 * 0000000140ABE52D: add     rax, rcx
 * 0000000140ABE530: cmp     rax, rbx
 * 0000000140ABE533: jb      short loc_140ABE52A
 * 0000000140ABE535: mov     r10d, r9d
 * 0000000140ABE538: mov     r8, r15
 * 0000000140ABE53B: shr     r10d, 7
 * 0000000140ABE53F: mov     ebx, 1
 * 0000000140ABE544: test    r10d, r10d
 * 0000000140ABE547: jz      short loc_140ABE5B4
 * 0000000140ABE549: mov     rsi, 7010008004002001h
 * 0000000140ABE553: mov     edx, 8
 * 0000000140ABE558: mov     rax, [r11]
 * 0000000140ABE55B: mov     ecx, r12d
 * 0000000140ABE55E: xor     rax, r8
 * 0000000140ABE561: mov     r8, [r11+8]
 * 0000000140ABE565: rol     rax, cl
 * 0000000140ABE568: add     r11, 10h
 * 0000000140ABE56C: xor     r8, rax
 * 0000000140ABE56F: rol     r8, cl
 * 0000000140ABE572: sub     rdx, rbx
 * 0000000140ABE575: jnz     short loc_140ABE558
 * 0000000140ABE577: mov     rcx, r11
 * 0000000140ABE57A: sub     rcx, r14
 * 0000000140ABE57D: xor     rcx, r15
 * 0000000140ABE580: mov     rax, rcx
 * 0000000140ABE583: rol     rax, 11h
 * 0000000140ABE587: xor     rcx, rax
 * 0000000140ABE58A: mov     rax, rsi
 * 0000000140ABE58D: mul     rcx
 * 0000000140ABE590: xor     r12d, edx
 * 0000000140ABE593: mov     [rbp+0B30h+var_680], rdx
 * 0000000140ABE59A: xor     r12d, eax
 * 0000000140ABE59D: mov     eax, 0FFFFFFFFh
 * 0000000140ABE5A2: and     r12d, 3Fh
 * 0000000140ABE5A6: cmovz   r12d, ebx
 * 0000000140ABE5AA: add     r10d, eax
 * 0000000140ABE5AD: jnz     short loc_140ABE553
 * 0000000140ABE5AF: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABE5B4: and     r9d, 7Fh
 * 0000000140ABE5B8: cmp     r9d, 8
 * 0000000140ABE5BC: jb      short loc_140ABE5DB
 * 0000000140ABE5BE: mov     edx, r9d
 * 0000000140ABE5C1: shr     rdx, 3
 * 0000000140ABE5C5: xor     r8, [r11]
 * 0000000140ABE5C8: mov     ecx, r12d
 * 0000000140ABE5CB: rol     r8, cl
 * 0000000140ABE5CE: add     r11, 8
 * 0000000140ABE5D2: add     r9d, 0FFFFFFF8h
 * 0000000140ABE5D6: sub     rdx, rbx
 * 0000000140ABE5D9: jnz     short loc_140ABE5C5
 * 0000000140ABE5DB: test    r9d, r9d
 * 0000000140ABE5DE: jz      short loc_140ABE5FF
 * 0000000140ABE5E0: mov     esi, 0FFFFFFFFh
 * 0000000140ABE5E5: movzx   eax, byte ptr [r11]
 * 0000000140ABE5E9: mov     ecx, r12d
 * 0000000140ABE5EC: xor     r8, rax
 * 0000000140ABE5EF: add     r11, rbx
 * 0000000140ABE5F2: rol     r8, cl
 * 0000000140ABE5F5: add     r9d, esi
 * 0000000140ABE5F8: jnz     short loc_140ABE5E5
 * 0000000140ABE5FA: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABE5FF: mov     rax, r8
 * 0000000140ABE602: shr     rax, 7
 * 0000000140ABE606: xor     r10d, r10d
 * 0000000140ABE609: jmp     short loc_140ABE612
 * 0000000140ABE60B: xor     r8b, al
 * 0000000140ABE60E: shr     rax, 7
 * 0000000140ABE612: test    rax, rax
 * 0000000140ABE615: jnz     short loc_140ABE60B
 * 0000000140ABE617: and     r8b, 7Fh
 * 0000000140ABE61B: jmp     short loc_140ABE623
 * 0000000140ABE61D: xor     r10d, r10d
 * 0000000140ABE620: mov     r8b, 80h
 * 0000000140ABE623: mov     r14, [rbp+0B30h+var_BA8]
 * 0000000140ABE627: mov     ecx, 0Ch
 * 0000000140ABE62C: mov     r15d, [rbp+0B30h+var_BA0]
 * 0000000140ABE630: mov     ebx, [rsp+0C30h+var_BC0]
 * 0000000140ABE634: mov     rax, [rbp+0B30h+var_B40]
 * 0000000140ABE638: add     r14, rcx
 * 0000000140ABE63B: mov     r12d, 1
 * 0000000140ABE641: mov     [rbp+0B30h+var_BA8], r14
 * 0000000140ABE645: add     [rbp+0B30h+var_B40], r12
 * 0000000140ABE649: mov     [rax], r8b
 * 0000000140ABE64C: mov     rax, [rbp+0B30h+var_B80]
 * 0000000140ABE650: mov     r8, [rbp+0B30h+var_B88]
 * 0000000140ABE654: add     rax, rcx
 * 0000000140ABE657: mov     [rbp+0B30h+var_B80], rax
 * 0000000140ABE65B: cmp     rax, r8
 * 0000000140ABE65E: jz      short loc_140ABE664
 * 0000000140ABE660: mov     r13d, [rax+4]
 * 0000000140ABE664: cmp     r13d, ebx
 * 0000000140ABE667: jbe     loc_140ABE40A
 * 0000000140ABE66D: mov     ecx, dword ptr [rbp+0B30h+arg_8]
 * 0000000140ABE673: jmp     loc_140ABE252
 * 0000000140ABE678: mov     ecx, dword ptr [rbp+0B30h+arg_8]
 * 0000000140ABE67E: jmp     loc_140ABE24C
 * 0000000140ABE683: xor     r8d, eax
 * 0000000140ABE686: shr     rax, 1Fh
 * 0000000140ABE68A: test    rax, rax
 * 0000000140ABE68D: jnz     short loc_140ABE683
 * 0000000140ABE68F: mov     ebx, [rsp+0C30h+var_BC0]
 * 0000000140ABE693: btr     r8d, 1Fh
 * 0000000140ABE698: mov     [r13+14h], r8d
 * 0000000140ABE69C: mov     r14, [rbp+0B30h+var_BA8]
 * 0000000140ABE6A0: mov     rdx, [rbp+0B30h+var_B88]
 * 0000000140ABE6A4: cmp     r14, rdx
 * 0000000140ABE6A7: jz      short loc_140ABE6EA
 * 0000000140ABE6A9: mov     eax, [r14]
 * 0000000140ABE6AC: mov     ecx, [r14+4]
 * 0000000140ABE6B0: cmp     eax, dword ptr [rbp+0B30h+var_B90]
 * 0000000140ABE6B3: jb      short loc_140ABE6EA
 * 0000000140ABE6B5: cmp     ecx, ebx
 * 0000000140ABE6B7: ja      short loc_140ABE6EA
 * 0000000140ABE6B9: mov     r8, [rbp+0B30h+var_B80]
 * 0000000140ABE6BD: cmp     r8, rdx
 * 0000000140ABE6C0: jz      short loc_140ABE6DE
 * 0000000140ABE6C2: mov     rax, [rbp+0B30h+var_B40]
 * 0000000140ABE6C6: mov     byte ptr [rax], 80h
 * 0000000140ABE6C9: inc     rax
 * 0000000140ABE6CC: mov     [rbp+0B30h+var_B40], rax
 * 0000000140ABE6D0: mov     eax, 0Ch
 * 0000000140ABE6D5: add     r8, rax
 * 0000000140ABE6D8: mov     [rbp+0B30h+var_B80], r8
 * 0000000140ABE6DC: jmp     short loc_140ABE6E3
 * 0000000140ABE6DE: mov     eax, 0Ch
 * 0000000140ABE6E3: add     r14, rax
 * 0000000140ABE6E6: mov     [rbp+0B30h+var_BA8], r14
 * 0000000140ABE6EA: add     [rsp+0C30h+var_BB8], 28h ; '('
 * 0000000140ABE6F0: add     r13, 18h
 * 0000000140ABE6F4: mov     r10d, 1
 * 0000000140ABE6FA: mov     r12, [rsp+0C30h+var_BD8]
 * 0000000140ABE6FF: mov     [rbp+0B30h+var_B30], r13
 * 0000000140ABE703: cmp     r13, [rsp+0C30h+var_BC8]
 * 0000000140ABE708: jnz     loc_140ABDE46
 * 0000000140ABE70E: mov     rbx, [rbp+0B30h+var_B10]
 * 0000000140ABE712: mov     [rbp+0B30h+var_AB0], rbx
 * 0000000140ABE719: xor     eax, eax
 * 0000000140ABE71B: mov     ecx, eax
 * 0000000140ABE71D: mov     rbx, [rbp+0B30h+var_B78]
 * 0000000140ABE721: mov     rdx, [rsp+0C30h+var_BE0]
 * 0000000140ABE726: mov     r8d, 80000000h
 * 0000000140ABE72C: sub     rdx, rsi
 * 0000000140ABE72F: mov     rsi, [rbp+0B30h+var_AB0]
 * 0000000140ABE736: add     rdx, rsi
 * 0000000140ABE739: mov     [rsp+0C30h+var_BD0], rsi
 * 0000000140ABE73E: mov     [rsp+0C30h+var_BE0], rdx
 * 0000000140ABE743: lea     eax, [rcx+r8]
 * 0000000140ABE747: test    r8d, eax
 * 0000000140ABE74A: jnz     short loc_140ABE754
 * 0000000140ABE74C: cmp     ecx, 0C000010Eh
 * 0000000140ABE752: jnz     short loc_140ABE758
 * 0000000140ABE754: mov     [rdx+28h], rbx
 * 0000000140ABE758: mov     r13d, [rbp+0B30h+var_B58]
 * 0000000140ABE75C: mov     r12d, 1
 * 0000000140ABE762: jmp     loc_140ABEBB9
 * 0000000140ABE767: mov     rbx, r13
 * 0000000140ABE76A: mov     [rbp+0B30h+var_B58], eax
 * 0000000140ABE76D: mov     r13, rax
 * 0000000140ABE770: mov     r15d, eax
 * 0000000140ABE773: mov     r12d, eax
 * 0000000140ABE776: mov     [rbp+0B30h+var_A7C], eax
 * 0000000140ABE77C: mov     rax, [rsi+2E8h]
 * 0000000140ABE783: lea     r8, [rbp+0B30h+var_990]
 * 0000000140ABE78A: lea     rdx, [rbp+0B30h+var_A7C]
 * 0000000140ABE791: mov     ecx, r12d
 * 0000000140ABE794: call    j__guard_dispatch_icall_nop
 * 0000000140ABE799: test    eax, eax
 * 0000000140ABE79B: jz      loc_140ABE8E3
 * 0000000140ABE7A1: mov     rax, [rsi+2C8h]
 * 0000000140ABE7A8: mov     rcx, [rbp+0B30h+var_990]
 * 0000000140ABE7AF: call    j__guard_dispatch_icall_nop
 * 0000000140ABE7B4: mov     r14, rax
 * 0000000140ABE7B7: test    rax, rax
 * 0000000140ABE7BA: jz      short loc_140ABE77C
 * 0000000140ABE7BC: mov     rax, [rsi+2D0h]
 * 0000000140ABE7C3: mov     edi, 1
 * 0000000140ABE7C8: add     r15d, edi
 * 0000000140ABE7CB: mov     rcx, r14
 * 0000000140ABE7CE: mov     [rbp+0B30h+var_B58], r15d
 * 0000000140ABE7D2: call    j__guard_dispatch_icall_nop
 * 0000000140ABE7D7: mov     r15, rax
 * 0000000140ABE7DA: lea     rdx, [rbp+0B30h+var_670]
 * 0000000140ABE7E1: mov     rax, [rsi+1F8h]
 * 0000000140ABE7E8: mov     rcx, r15
 * 0000000140ABE7EB: call    j__guard_dispatch_icall_nop
 * 0000000140ABE7F0: test    rax, rax
 * 0000000140ABE7F3: jz      short loc_140ABE814
 * 0000000140ABE7F5: mov     rax, [rsi+2D8h]
 * 0000000140ABE7FC: mov     rdx, r14
 * 0000000140ABE7FF: mov     rcx, [rbp+0B30h+var_990]
 * 0000000140ABE806: call    j__guard_dispatch_icall_nop
 * 0000000140ABE80B: mov     r15d, [rbp+0B30h+var_B58]
 * 0000000140ABE80F: jmp     loc_140ABE77C
 * 0000000140ABE814: test    dword ptr [rsi+958h], 40000000h
 * 0000000140ABE81E: jz      short loc_140ABE869
 * 0000000140ABE820: mov     rcx, [rsi+0A48h]
 * 0000000140ABE827: mov     edx, 30h ; '0'
 * 0000000140ABE82C: lea     r8d, [rdx-2Ah]
 * 0000000140ABE830: mov     rax, [rbx]
 * 0000000140ABE833: add     edx, 0FFFFFFF8h
 * 0000000140ABE836: mov     [rcx], rax
 * 0000000140ABE839: add     rbx, 8
 * 0000000140ABE83D: add     rcx, 8
 * 0000000140ABE841: sub     r8, rdi
 * 0000000140ABE844: jnz     short loc_140ABE830
 * 0000000140ABE846: test    edx, edx
 * 0000000140ABE848: jz      short loc_140ABE862
 * 0000000140ABE84A: mov     esi, 0FFFFFFFFh
 * 0000000140ABE84F: mov     al, [rbx]
 * 0000000140ABE851: add     rbx, rdi
 * 0000000140ABE854: mov     [rcx], al
 * 0000000140ABE856: add     rcx, rdi
 * 0000000140ABE859: add     edx, esi
 * 0000000140ABE85B: jnz     short loc_140ABE84F
 * 0000000140ABE85D: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABE862: mov     rbx, [rsi+0A48h]
 * 0000000140ABE869: mov     [rbx+18h], r15
 * 0000000140ABE86D: mov     rax, [rsi+568h]
 * 0000000140ABE874: mov     [rax], rbx
 * 0000000140ABE877: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140ABE87E: mov     rax, [rsi+568h]
 * 0000000140ABE885: mov     [rax+8], r15
 * 0000000140ABE889: mov     dword ptr [rax+14h], 1000h
 * 0000000140ABE890: xor     eax, eax
 * 0000000140ABE892: cmp     [rsi+8C0h], eax
 * 0000000140ABE898: jnz     short loc_140ABE8E3
 * 0000000140ABE89A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABE8A4: xor     edx, edx
 * 0000000140ABE8A6: add     rax, rsi
 * 0000000140ABE8A9: mov     rcx, rsi
 * 0000000140ABE8AC: mov     [rsi+8C8h], rax
 * 0000000140ABE8B3: mov     rax, 0B3B74BDEE4453415h
 * 0000000140ABE8BD: add     rax, rbx
 * 0000000140ABE8C0: mov     [rsi+8D0h], rax
 * 0000000140ABE8C7: movsxd  rax, dword ptr [rbx]
 * 0000000140ABE8CA: mov     [rsi+8D8h], rax
 * 0000000140ABE8D1: mov     [rsi+8E0h], r13
 * 0000000140ABE8D8: mov     [rsi+8C0h], edi
 * 0000000140ABE8DE: call    sub_140AD049C
 * 0000000140ABE8E3: mov     r15d, [rbp+0B30h+var_B58]
 * 0000000140ABE8E7: mov     eax, 1
 * 0000000140ABE8EC: add     r12d, eax
 * 0000000140ABE8EF: add     r13, rax
 * 0000000140ABE8F2: mov     eax, 0
 * 0000000140ABE8F7: cmp     r12d, 3
 * 0000000140ABE8FB: jb      loc_140ABE776
 * 0000000140ABE901: mov     r13d, r15d
 * 0000000140ABE904: lea     r12d, [rax+1]
 * 0000000140ABE908: jmp     loc_140ABEBB2
 * 0000000140ABE90D: mov     rbx, r13
 * 0000000140ABE910: mov     [rbp+0B30h+var_8D0], rax
 * 0000000140ABE917: mov     r13d, eax
 * 0000000140ABE91A: mov     r15, cr8
 * 0000000140ABE91E: mov     [rbp+0B30h+arg_8], r15
 * 0000000140ABE925: mov     cr8, r8
 * 0000000140ABE929: mov     rax, [rsi+2F8h]
 * 0000000140ABE930: lea     rcx, [rbp+0B30h+var_8D0]
 * 0000000140ABE937: call    j__guard_dispatch_icall_nop
 * 0000000140ABE93C: mov     r14, rax
 * 0000000140ABE93F: test    rax, rax
 * 0000000140ABE942: jz      loc_140ABEA69
 * 0000000140ABE948: mov     rax, [rsi+1F8h]
 * 0000000140ABE94F: lea     rdx, [rbp+0B30h+var_668]
 * 0000000140ABE956: mov     rcx, r14
 * 0000000140ABE959: add     r13d, r12d
 * 0000000140ABE95C: call    j__guard_dispatch_icall_nop
 * 0000000140ABE961: test    rax, rax
 * 0000000140ABE964: jnz     loc_140ABEA3C
 * 0000000140ABE96A: test    dword ptr [rsi+958h], 40000000h
 * 0000000140ABE974: jz      short loc_140ABE9BD
 * 0000000140ABE976: mov     rcx, [rsi+0A48h]
 * 0000000140ABE97D: lea     edx, [rax+30h]
 * 0000000140ABE980: lea     r8d, [rax+6]
 * 0000000140ABE984: mov     rax, [rbx]
 * 0000000140ABE987: add     edx, 0FFFFFFF8h
 * 0000000140ABE98A: mov     [rcx], rax
 * 0000000140ABE98D: add     rbx, 8
 * 0000000140ABE991: add     rcx, 8
 * 0000000140ABE995: sub     r8, r12
 * 0000000140ABE998: jnz     short loc_140ABE984
 * 0000000140ABE99A: test    edx, edx
 * 0000000140ABE99C: jz      short loc_140ABE9B6
 * 0000000140ABE99E: mov     esi, 0FFFFFFFFh
 * 0000000140ABE9A3: mov     al, [rbx]
 * 0000000140ABE9A5: add     rbx, r12
 * 0000000140ABE9A8: mov     [rcx], al
 * 0000000140ABE9AA: add     rcx, r12
 * 0000000140ABE9AD: add     edx, esi
 * 0000000140ABE9AF: jnz     short loc_140ABE9A3
 * 0000000140ABE9B1: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABE9B6: mov     rbx, [rsi+0A48h]
 * 0000000140ABE9BD: mov     [rbx+18h], r14
 * 0000000140ABE9C1: mov     rax, [rsi+568h]
 * 0000000140ABE9C8: mov     [rax], rbx
 * 0000000140ABE9CB: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140ABE9D2: mov     rax, [rsi+568h]
 * 0000000140ABE9D9: mov     [rax+8], r14
 * 0000000140ABE9DD: mov     dword ptr [rax+14h], 1000h
 * 0000000140ABE9E4: xor     eax, eax
 * 0000000140ABE9E6: cmp     [rsi+8C0h], eax
 * 0000000140ABE9EC: jnz     short loc_140ABEA3C
 * 0000000140ABE9EE: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABE9F8: xor     edx, edx
 * 0000000140ABE9FA: add     rax, rsi
 * 0000000140ABE9FD: mov     rcx, rsi
 * 0000000140ABEA00: mov     [rsi+8C8h], rax
 * 0000000140ABEA07: mov     rax, 0B3B74BDEE4453415h
 * 0000000140ABEA11: add     rax, rbx
 * 0000000140ABEA14: mov     [rsi+8D0h], rax
 * 0000000140ABEA1B: movsxd  rax, dword ptr [rbx]
 * 0000000140ABEA1E: mov     [rsi+8D8h], rax
 * 0000000140ABEA25: mov     qword ptr [rsi+8E0h], 4
 * 0000000140ABEA30: mov     [rsi+8C0h], r12d
 * 0000000140ABEA37: call    sub_140AD049C
 * 0000000140ABEA3C: mov     rax, [rsi+2F8h]
 * 0000000140ABEA43: lea     rcx, [rbp+0B30h+var_8D0]
 * 0000000140ABEA4A: call    j__guard_dispatch_icall_nop
 * 0000000140ABEA4F: mov     r14, rax
 * 0000000140ABEA52: test    rax, rax
 * 0000000140ABEA55: jnz     loc_140ABE948
 * 0000000140ABEA5B: mov     r15, [rbp+0B30h+arg_8]
 * 0000000140ABEA62: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ABEA69: movzx   eax, r15b
 * 0000000140ABEA6D: mov     cr8, rax
 * 0000000140ABEA71: jmp     loc_140ABEBB9
 * 0000000140ABEA76: mov     [rbp+0B30h+var_8C8], rax
 * 0000000140ABEA7D: lea     rcx, [rbp+0B30h+var_8C8]
 * 0000000140ABEA84: mov     rbx, r13
 * 0000000140ABEA87: mov     r13d, eax
 * 0000000140ABEA8A: mov     rax, [rsi+2F0h]
 * 0000000140ABEA91: call    j__guard_dispatch_icall_nop
 * 0000000140ABEA96: mov     r14, rax
 * 0000000140ABEA99: test    rax, rax
 * 0000000140ABEA9C: jz      loc_140ABEBB9
 * 0000000140ABEAA2: mov     rax, [rsi+1F8h]
 * 0000000140ABEAA9: lea     rdx, [rbp+0B30h+var_660]
 * 0000000140ABEAB0: mov     rcx, r14
 * 0000000140ABEAB3: add     r13d, r12d
 * 0000000140ABEAB6: call    j__guard_dispatch_icall_nop
 * 0000000140ABEABB: test    rax, rax
 * 0000000140ABEABE: jnz     loc_140ABEB93
 * 0000000140ABEAC4: test    [rsi+958h], r15d
 * 0000000140ABEACB: jz      short loc_140ABEB14
 * 0000000140ABEACD: mov     rcx, [rsi+0A48h]
 * 0000000140ABEAD4: lea     edx, [rax+30h]
 * 0000000140ABEAD7: lea     r8d, [rax+6]
 * 0000000140ABEADB: mov     rax, [rbx]
 * 0000000140ABEADE: add     edx, 0FFFFFFF8h
 * 0000000140ABEAE1: mov     [rcx], rax
 * 0000000140ABEAE4: add     rbx, 8
 * 0000000140ABEAE8: add     rcx, 8
 * 0000000140ABEAEC: sub     r8, r12
 * 0000000140ABEAEF: jnz     short loc_140ABEADB
 * 0000000140ABEAF1: test    edx, edx
 * 0000000140ABEAF3: jz      short loc_140ABEB0D
 * 0000000140ABEAF5: mov     esi, 0FFFFFFFFh
 * 0000000140ABEAFA: mov     al, [rbx]
 * 0000000140ABEAFC: add     rbx, r12
 * 0000000140ABEAFF: mov     [rcx], al
 * 0000000140ABEB01: add     rcx, r12
 * 0000000140ABEB04: add     edx, esi
 * 0000000140ABEB06: jnz     short loc_140ABEAFA
 * 0000000140ABEB08: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABEB0D: mov     rbx, [rsi+0A48h]
 * 0000000140ABEB14: mov     [rbx+18h], r14
 * 0000000140ABEB18: mov     rax, [rsi+568h]
 * 0000000140ABEB1F: mov     [rax], rbx
 * 0000000140ABEB22: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140ABEB29: mov     rax, [rsi+568h]
 * 0000000140ABEB30: mov     [rax+8], r14
 * 0000000140ABEB34: mov     dword ptr [rax+14h], 1000h
 * 0000000140ABEB3B: xor     eax, eax
 * 0000000140ABEB3D: cmp     [rsi+8C0h], eax
 * 0000000140ABEB43: jnz     short loc_140ABEB93
 * 0000000140ABEB45: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABEB4F: xor     edx, edx
 * 0000000140ABEB51: add     rax, rsi
 * 0000000140ABEB54: mov     rcx, rsi
 * 0000000140ABEB57: mov     [rsi+8C8h], rax
 * 0000000140ABEB5E: mov     rax, 0B3B74BDEE4453415h
 * 0000000140ABEB68: add     rax, rbx
 * 0000000140ABEB6B: mov     [rsi+8D0h], rax
 * 0000000140ABEB72: movsxd  rax, dword ptr [rbx]
 * 0000000140ABEB75: mov     [rsi+8D8h], rax
 * 0000000140ABEB7C: mov     qword ptr [rsi+8E0h], 3
 * 0000000140ABEB87: mov     [rsi+8C0h], r12d
 * 0000000140ABEB8E: call    sub_140AD049C
 * 0000000140ABEB93: mov     rax, [rsi+2F0h]
 * 0000000140ABEB9A: lea     rcx, [rbp+0B30h+var_8C8]
 * 0000000140ABEBA1: call    j__guard_dispatch_icall_nop
 * 0000000140ABEBA6: mov     r14, rax
 * 0000000140ABEBA9: test    rax, rax
 * 0000000140ABEBAC: jnz     loc_140ABEAA2
 * 0000000140ABEBB2: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ABEBB9: shl     r13d, 0Ch
 * 0000000140ABEBBD: add     [rsi+7F0h], r13d
 * 0000000140ABEBC4: mov     eax, [rsi+7F0h]
 * 0000000140ABEBCA: add     [rsi+7ECh], r12d
 * 0000000140ABEBD1: cmp     eax, [rsi+7F4h]
 * 0000000140ABEBD7: jge     short loc_140ABEBF5
 * 0000000140ABEBD9: mov     r13, [rsp+0C30h+var_BE0]
 * 0000000140ABEBDE: mov     r8d, 0Ch
 * 0000000140ABEBE4: mov     r15d, 40000000h
 * 0000000140ABEBEA: jmp     loc_140ABC494
 * 0000000140ABEBEF: mov     [rsi+7ECh], eax
 * 0000000140ABEBF5: mov     [rsp+0C30h+var_BD0], rsi
 * 0000000140ABEBFA: jmp     loc_140ABA35B
 * 0000000140ABEBFF: mov     edx, [r13+2Ch]
 * 0000000140ABEC03: lea     rcx, [rbp+0B30h+var_318]
 * 0000000140ABEC0A: mov     rax, [rsi+190h]
 * 0000000140ABEC11: mov     ebx, [r13+28h]
 * 0000000140ABEC15: call    j__guard_dispatch_icall_nop
 * 0000000140ABEC1A: mov     rax, [rsi+1C0h]
 * 0000000140ABEC21: lea     rdx, [rbp+0B30h+var_308]
 * 0000000140ABEC28: lea     rcx, [rbp+0B30h+var_318]
 * 0000000140ABEC2F: call    j__guard_dispatch_icall_nop
 * 0000000140ABEC34: test    ebx, ebx
 * 0000000140ABEC36: mov     rbx, cr4
 * 0000000140ABEC39: jnz     short loc_140ABEC3E
 * 0000000140ABEC3B: mov     rbx, cr0
 * 0000000140ABEC3E: mov     rax, [rsi+188h]
 * 0000000140ABEC45: lea     rcx, [rbp+0B30h+var_308]
 * 0000000140ABEC4C: call    j__guard_dispatch_icall_nop
 * 0000000140ABEC51: mov     r8, [r13+18h]
 * 0000000140ABEC55: mov     rdx, [r13+20h]
 * 0000000140ABEC59: and     r8, rbx
 * 0000000140ABEC5C: cmp     r8, rdx
 * 0000000140ABEC5F: jz      loc_140ABA5AF
 * 0000000140ABEC65: mov     eax, [r13+28h]
 * 0000000140ABEC69: mov     ecx, [r13+2Ch]
 * 0000000140ABEC6D: shl     rcx, 20h
 * 0000000140ABEC71: or      rcx, rax
 * 0000000140ABEC74: xor     eax, eax
 * 0000000140ABEC76: cmp     [rsi+8C0h], eax
 * 0000000140ABEC7C: jnz     loc_140ABA263
 * 0000000140ABEC82: mov     rax, [rsi+568h]
 * 0000000140ABEC89: xor     rdx, r8
 * 0000000140ABEC8C: mov     [rax+18h], rdx
 * 0000000140ABEC90: jmp     loc_140ABA5E8
 * 0000000140ABEC95: cmp     dword ptr [rsi+920h], 0Bh
 * 0000000140ABEC9C: jnz     loc_140ABA5AF
 * 0000000140ABECA2: add     dword ptr [rsi+7F0h], 100h
 * 0000000140ABECAC: mov     r15, [rsi+560h]
 * 0000000140ABECB3: mov     rax, [rsi+2C8h]
 * 0000000140ABECBA: mov     rcx, r15
 * 0000000140ABECBD: call    j__guard_dispatch_icall_nop
 * 0000000140ABECC2: mov     r14, rax
 * 0000000140ABECC5: xor     eax, eax
 * 0000000140ABECC7: test    r14, r14
 * 0000000140ABECCA: jz      loc_140ABA263
 * 0000000140ABECD0: mov     rax, [rsi+2D0h]
 * 0000000140ABECD7: mov     rcx, r14
 * 0000000140ABECDA: call    j__guard_dispatch_icall_nop
 * 0000000140ABECDF: mov     rbx, rax
 * 0000000140ABECE2: xor     r8d, r8d
 * 0000000140ABECE5: mov     rax, [r13+18h]
 * 0000000140ABECE9: test    rax, rax
 * 0000000140ABECEC: jz      short loc_140ABED58
 * 0000000140ABECEE: lea     r12d, [r8+1]
 * 0000000140ABECF2: cmp     rax, rbx
 * 0000000140ABECF5: jz      loc_140ABEDE1
 * 0000000140ABECFB: cmp     [rsi+8C0h], r8d
 * 0000000140ABED02: jnz     loc_140ABEDE1
 * 0000000140ABED08: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABED12: xor     edx, edx
 * 0000000140ABED14: add     rax, rsi
 * 0000000140ABED17: mov     rcx, rsi
 * 0000000140ABED1A: mov     [rsi+8C8h], rax
 * 0000000140ABED21: mov     rax, 0B3B74BDEE4453415h
 * 0000000140ABED2B: add     rax, r13
 * 0000000140ABED2E: mov     [rsi+8D0h], rax
 * 0000000140ABED35: movsxd  rax, dword ptr [r13+0]
 * 0000000140ABED39: mov     [rsi+8D8h], rax
 * 0000000140ABED40: mov     [rsi+8E0h], rbx
 * 0000000140ABED47: mov     [rsi+8C0h], r12d
 * 0000000140ABED4E: call    sub_140AD049C
 * 0000000140ABED53: jmp     loc_140ABEDE1
 * 0000000140ABED58: mov     eax, [rsi+93Ch]
 * 0000000140ABED5E: mov     rcx, [rsi+940h]
 * 0000000140ABED65: test    rax, rax
 * 0000000140ABED68: jz      short loc_140ABED7B
 * 0000000140ABED6A: lea     rdx, [rax-1]
 * 0000000140ABED6E: add     rdx, rcx
 * 0000000140ABED71: cmp     rbx, rcx
 * 0000000140ABED74: jb      short loc_140ABED7B
 * 0000000140ABED76: cmp     rbx, rdx
 * 0000000140ABED79: jbe     short loc_140ABEDD7
 * 0000000140ABED7B: mov     r12d, 1
 * 0000000140ABED81: cmp     [rsi+8C0h], r8d
 * 0000000140ABED88: jnz     short loc_140ABEDDD
 * 0000000140ABED8A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABED94: xor     edx, edx
 * 0000000140ABED96: add     rax, rsi
 * 0000000140ABED99: mov     rcx, rsi
 * 0000000140ABED9C: mov     [rsi+8C8h], rax
 * 0000000140ABEDA3: mov     rax, 0B3B74BDEE4453415h
 * 0000000140ABEDAD: add     rax, r13
 * 0000000140ABEDB0: mov     [rsi+8D0h], rax
 * 0000000140ABEDB7: movsxd  rax, dword ptr [r13+0]
 * 0000000140ABEDBB: mov     [rsi+8D8h], rax
 * 0000000140ABEDC2: mov     [rsi+8E0h], rbx
 * 0000000140ABEDC9: mov     [rsi+8C0h], r12d
 * 0000000140ABEDD0: call    sub_140AD049C
 * 0000000140ABEDD5: jmp     short loc_140ABEDDD
 * 0000000140ABEDD7: mov     r12d, 1
 * 0000000140ABEDDD: mov     [r13+18h], rbx
 * 0000000140ABEDE1: mov     rax, [rsi+2D8h]
 * 0000000140ABEDE8: mov     rdx, r14
 * 0000000140ABEDEB: mov     rcx, r15
 * 0000000140ABEDEE: call    j__guard_dispatch_icall_nop
 * 0000000140ABEDF3: jmp     loc_140ABA35B
 * 0000000140ABEDF8: mov     r12d, 1
 * 0000000140ABEDFE: jnz     short loc_140ABEE45
 * 0000000140ABEE00: xor     eax, eax
 * 0000000140ABEE02: cmp     [rsi+948h], rax
 * 0000000140ABEE09: jz      loc_140ABEF1D
 * 0000000140ABEE0F: mov     ecx, [rsi+95Ch]
 * 0000000140ABEE15: mov     eax, ecx
 * 0000000140ABEE17: shr     eax, 2
 * 0000000140ABEE1A: and     eax, r12d
 * 0000000140ABEE1D: jnz     loc_140ABEF1B
 * 0000000140ABEE23: xor     edx, edx
 * 0000000140ABEE25: cmp     [rsi+7ECh], edx
 * 0000000140ABEE2B: jnz     loc_140ABEF02
 * 0000000140ABEE31: lea     eax, ds:0[rcx*8]
 * 0000000140ABEE38: xor     eax, ecx
 * 0000000140ABEE3A: and     eax, 20h
 * 0000000140ABEE3D: xor     eax, ecx
 * 0000000140ABEE3F: mov     [rsi+95Ch], eax
 * 0000000140ABEE45: mov     r14, [r13+8]
 * 0000000140ABEE49: mov     r8d, [r13+10h]
 * 0000000140ABEE4D: mov     r9, r14
 * 0000000140ABEE50: add     [rsi+7F0h], r8d
 * 0000000140ABEE57: mov     rax, r14
 * 0000000140ABEE5A: mov     r11d, [rsi+7DCh]
 * 0000000140ABEE61: mov     r15, [rsi+7E0h]
 * 0000000140ABEE68: lea     rcx, [r14+r8]
 * 0000000140ABEE6C: cmp     r14, rcx
 * 0000000140ABEE6F: jnb     short loc_140ABEE81
 * 0000000140ABEE71: mov     edx, 40h ; '@'
 * 0000000140ABEE76: prefetchnta byte ptr [rax]
 * 0000000140ABEE79: add     rax, rdx
 * 0000000140ABEE7C: cmp     rax, rcx
 * 0000000140ABEE7F: jb      short loc_140ABEE76
 * 0000000140ABEE81: mov     r10d, r8d
 * 0000000140ABEE84: mov     rbx, r15
 * 0000000140ABEE87: shr     r10d, 7
 * 0000000140ABEE8B: test    r10d, r10d
 * 0000000140ABEE8E: jz      loc_140ABEF28
 * 0000000140ABEE94: mov     rdi, 7010008004002001h
 * 0000000140ABEE9E: mov     eax, 8
 * 0000000140ABEEA3: xor     rbx, [r9]
 * 0000000140ABEEA6: mov     ecx, r11d
 * 0000000140ABEEA9: rol     rbx, cl
 * 0000000140ABEEAC: xor     rbx, [r9+8]
 * 0000000140ABEEB0: add     r9, 10h
 * 0000000140ABEEB4: rol     rbx, cl
 * 0000000140ABEEB7: sub     rax, r12
 * 0000000140ABEEBA: jnz     short loc_140ABEEA3
 * 0000000140ABEEBC: mov     rcx, r9
 * 0000000140ABEEBF: sub     rcx, r14
 * 0000000140ABEEC2: xor     rcx, r15
 * 0000000140ABEEC5: mov     rax, rcx
 * 0000000140ABEEC8: rol     rax, 11h
 * 0000000140ABEECC: xor     rcx, rax
 * 0000000140ABEECF: mov     rax, rdi
 * 0000000140ABEED2: mul     rcx
 * 0000000140ABEED5: xor     r11d, edx
 * 0000000140ABEED8: mov     [rbp+0B30h+var_658], rdx
 * 0000000140ABEEDF: xor     r11d, eax
 * 0000000140ABEEE2: mov     edx, 0FFFFFFFFh
 * 0000000140ABEEE7: and     r11d, 3Fh
 * 0000000140ABEEEB: cmovz   r11d, r12d
 * 0000000140ABEEEF: add     r10d, edx
 * 0000000140ABEEF2: jnz     short loc_140ABEE9E
 * 0000000140ABEEF4: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABEEF9: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ABEF00: jmp     short loc_140ABEF2D
 * 0000000140ABEF02: shr     ecx, 5
 * 0000000140ABEF05: and     ecx, r12d
 * 0000000140ABEF08: cmp     eax, ecx
 * 0000000140ABEF0A: jz      loc_140ABEE45
 * 0000000140ABEF10: mov     [rsi+7ECh], edx
 * 0000000140ABEF16: jmp     loc_140ABA35B
 * 0000000140ABEF1B: xor     eax, eax
 * 0000000140ABEF1D: mov     [rsi+7ECh], eax
 * 0000000140ABEF23: jmp     loc_140ABA35B
 * 0000000140ABEF28: mov     edx, 0FFFFFFFFh
 * 0000000140ABEF2D: and     r8d, 7Fh
 * 0000000140ABEF31: cmp     r8d, 8
 * 0000000140ABEF35: jb      short loc_140ABEF54
 * 0000000140ABEF37: mov     eax, r8d
 * 0000000140ABEF3A: shr     rax, 3
 * 0000000140ABEF3E: xor     rbx, [r9]
 * 0000000140ABEF41: mov     ecx, r11d
 * 0000000140ABEF44: rol     rbx, cl
 * 0000000140ABEF47: add     r9, 8
 * 0000000140ABEF4B: add     r8d, 0FFFFFFF8h
 * 0000000140ABEF4F: sub     rax, r12
 * 0000000140ABEF52: jnz     short loc_140ABEF3E
 * 0000000140ABEF54: test    r8d, r8d
 * 0000000140ABEF57: jz      short loc_140ABEF6E
 * 0000000140ABEF59: movzx   eax, byte ptr [r9]
 * 0000000140ABEF5D: mov     ecx, r11d
 * 0000000140ABEF60: xor     rbx, rax
 * 0000000140ABEF63: add     r9, r12
 * 0000000140ABEF66: rol     rbx, cl
 * 0000000140ABEF69: add     r8d, edx
 * 0000000140ABEF6C: jnz     short loc_140ABEF59
 * 0000000140ABEF6E: mov     rax, rbx
 * 0000000140ABEF71: shr     rax, 1Fh
 * 0000000140ABEF75: xor     ecx, ecx
 * 0000000140ABEF77: jmp     short loc_140ABEF7F
 * 0000000140ABEF79: xor     ebx, eax
 * 0000000140ABEF7B: shr     rax, 1Fh
 * 0000000140ABEF7F: test    rax, rax
 * 0000000140ABEF82: jnz     short loc_140ABEF79
 * 0000000140ABEF84: btr     ebx, 1Fh
 * 0000000140ABEF88: cmp     ebx, [r13+14h]
 * 0000000140ABEF8C: jz      loc_140ABF0F3
 * 0000000140ABEF92: lock or [rsp+0C30h+var_C30], ecx
 * 0000000140ABEF96: mov     eax, [r13+18h]
 * 0000000140ABEF9A: test    r12b, al
 * 0000000140ABEF9D: jz      short loc_140ABEFB0
 * 0000000140ABEF9F: mov     rax, [rsi+558h]
 * 0000000140ABEFA6: mov     cl, [rax]
 * 0000000140ABEFA8: test    cl, cl
 * 0000000140ABEFAA: jnz     loc_140ABF0F3
 * 0000000140ABEFB0: mov     ecx, [r13+10h]
 * 0000000140ABEFB4: mov     rdx, [r13+8]
 * 0000000140ABEFB8: test    rcx, rcx
 * 0000000140ABEFBB: jz      loc_140ABF07A
 * 0000000140ABEFC1: mov     eax, [rsi+95Ch]
 * 0000000140ABEFC7: mov     r8d, 40h ; '@'
 * 0000000140ABEFCD: test    r8b, al
 * 0000000140ABEFD0: jz      loc_140ABF07A
 * 0000000140ABEFD6: mov     r12, cr8
 * 0000000140ABEFDA: lea     eax, [r8-3Eh]
 * 0000000140ABEFDE: mov     cr8, rax
 * 0000000140ABEFE2: mov     r14, rdx
 * 0000000140ABEFE5: lea     rax, [rcx-1]
 * 0000000140ABEFE9: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140ABEFF0: add     rax, rdx
 * 0000000140ABEFF3: or      rax, 0FFFh
 * 0000000140ABEFF9: mov     [rbp+0B30h+arg_8], rax
 * 0000000140ABF000: lea     r13, [r14-1]
 * 0000000140ABF004: movzx   r15d, r12b
 * 0000000140ABF008: mov     rax, [rsi+458h]
 * 0000000140ABF00F: xor     edx, edx
 * 0000000140ABF011: mov     rcx, r14
 * 0000000140ABF014: call    j__guard_dispatch_icall_nop
 * 0000000140ABF019: cmp     eax, 0C000022Dh
 * 0000000140ABF01E: jnz     short loc_140ABF044
 * 0000000140ABF020: mov     eax, 1
 * 0000000140ABF025: cmp     r12b, al
 * 0000000140ABF028: ja      short loc_140ABF048
 * 0000000140ABF02A: movzx   r15d, r12b
 * 0000000140ABF02E: mov     cr8, r15
 * 0000000140ABF032: mov     al, [r14]
 * 0000000140ABF035: mov     rax, cr8
 * 0000000140ABF039: mov     eax, 2
 * 0000000140ABF03E: mov     cr8, rax
 * 0000000140ABF042: jmp     short loc_140ABF008
 * 0000000140ABF044: test    eax, eax
 * 0000000140ABF046: js      short loc_140ABF06B
 * 0000000140ABF048: mov     r8d, 1000h
 * 0000000140ABF04E: add     r14, r8
 * 0000000140ABF051: add     r13, r8
 * 0000000140ABF054: cmp     r13, [rbp+0B30h+arg_8]
 * 0000000140ABF05B: jnz     short loc_140ABF004
 * 0000000140ABF05D: mov     cr8, r15
 * 0000000140ABF061: mov     r13, [rsp+0C30h+var_BE0]
 * 0000000140ABF066: jmp     loc_140ABF0F3
 * 0000000140ABF06B: mov     cr8, r15
 * 0000000140ABF06F: mov     r13, [rsp+0C30h+var_BE0]
 * 0000000140ABF074: mov     r12d, 1
 * 0000000140ABF07A: mov     eax, [r13+14h]
 * 0000000140ABF07E: xor     r14d, r14d
 * 0000000140ABF081: cmp     [rsi+8C0h], r14d
 * 0000000140ABF088: jnz     short loc_140ABF0F3
 * 0000000140ABF08A: mov     ecx, ebx
 * 0000000140ABF08C: xor     rcx, rax
 * 0000000140ABF08F: mov     rax, [rsi+568h]
 * 0000000140ABF096: mov     [rax+18h], rcx
 * 0000000140ABF09A: xor     eax, eax
 * 0000000140ABF09C: mov     rcx, [r13+8]
 * 0000000140ABF0A0: cmp     [rsi+8C0h], eax
 * 0000000140ABF0A6: jnz     short loc_140ABF0F3
 * 0000000140ABF0A8: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABF0B2: xor     edx, edx
 * 0000000140ABF0B4: add     rax, rsi
 * 0000000140ABF0B7: mov     [rsi+8C8h], rax
 * 0000000140ABF0BE: mov     rax, 0B3B74BDEE4453415h
 * 0000000140ABF0C8: add     rax, r13
 * 0000000140ABF0CB: mov     [rsi+8D0h], rax
 * 0000000140ABF0D2: movsxd  rax, dword ptr [r13+0]
 * 0000000140ABF0D6: mov     [rsi+8D8h], rax
 * 0000000140ABF0DD: mov     [rsi+8E0h], rcx
 * 0000000140ABF0E4: mov     rcx, rsi
 * 0000000140ABF0E7: mov     [rsi+8C0h], r12d
 * 0000000140ABF0EE: call    sub_140AD049C
 * 0000000140ABF0F3: xor     eax, eax
 * 0000000140ABF0F5: bt      dword ptr [rsi+958h], 1Eh
 * 0000000140ABF0FD: jnb     loc_140ABA263
 * 0000000140ABF103: mov     r8d, [r13+10h]
 * 0000000140ABF107: test    r8d, r8d
 * 0000000140ABF10A: jz      loc_140ABA263
 * 0000000140ABF110: mov     rdx, [r13+8]
 * 0000000140ABF114: lea     r9, [rbp+0B30h+var_2F8]
 * 0000000140ABF11B: mov     rcx, rsi
 * 0000000140ABF11E: call    sub_1403F966C
 * 0000000140ABF123: mov     r8d, 10h
 * 0000000140ABF129: lea     r9, [r13+1Ch]
 * 0000000140ABF12D: lea     r10, [rbp+0B30h+var_2F8]
 * 0000000140ABF134: mov     rcx, [r10]
 * 0000000140ABF137: add     r10, 8
 * 0000000140ABF13B: mov     rax, [r9]
 * 0000000140ABF13E: add     r9, 8
 * 0000000140ABF142: cmp     rcx, rax
 * 0000000140ABF145: jnz     short loc_140ABF182
 * 0000000140ABF147: add     r8d, 0FFFFFFF8h
 * 0000000140ABF14B: cmp     r8d, 8
 * 0000000140ABF14F: jnb     short loc_140ABF134
 * 0000000140ABF151: test    r8d, r8d
 * 0000000140ABF154: jz      loc_140ABF2B8
 * 0000000140ABF15A: mov     r11d, 1
 * 0000000140ABF160: movzx   edx, byte ptr [r10]
 * 0000000140ABF164: add     r10, r11
 * 0000000140ABF167: movzx   eax, byte ptr [r9]
 * 0000000140ABF16B: add     r9, r11
 * 0000000140ABF16E: cmp     rdx, rax
 * 0000000140ABF171: jnz     short loc_140ABF188
 * 0000000140ABF173: mov     eax, 0FFFFFFFFh
 * 0000000140ABF178: add     r8d, eax
 * 0000000140ABF17B: jnz     short loc_140ABF160
 * 0000000140ABF17D: jmp     loc_140ABF2B8
 * 0000000140ABF182: mov     r11d, 1
 * 0000000140ABF188: xor     eax, eax
 * 0000000140ABF18A: lock or [rsp+0C30h+var_C30], eax
 * 0000000140ABF18E: mov     eax, [r13+18h]
 * 0000000140ABF192: test    r11b, al
 * 0000000140ABF195: jz      short loc_140ABF1A8
 * 0000000140ABF197: mov     rax, [rsi+558h]
 * 0000000140ABF19E: mov     cl, [rax]
 * 0000000140ABF1A0: test    cl, cl
 * 0000000140ABF1A2: jnz     loc_140ABF2B8
 * 0000000140ABF1A8: mov     edx, [r13+10h]
 * 0000000140ABF1AC: mov     rcx, [r13+8]
 * 0000000140ABF1B0: test    rdx, rdx
 * 0000000140ABF1B3: jz      loc_140ABF263
 * 0000000140ABF1B9: mov     eax, [rsi+95Ch]
 * 0000000140ABF1BF: mov     r8d, 40h ; '@'
 * 0000000140ABF1C5: test    r8b, al
 * 0000000140ABF1C8: jz      loc_140ABF263
 * 0000000140ABF1CE: mov     r15, cr8
 * 0000000140ABF1D2: lea     eax, [r8-3Eh]
 * 0000000140ABF1D6: mov     cr8, rax
 * 0000000140ABF1DA: mov     rbx, rcx
 * 0000000140ABF1DD: lea     r13, [rdx-1]
 * 0000000140ABF1E1: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140ABF1E8: add     r13, rcx
 * 0000000140ABF1EB: or      r13, 0FFFh
 * 0000000140ABF1F2: lea     r12, [rbx-1]
 * 0000000140ABF1F6: movzx   r14d, r15b
 * 0000000140ABF1FA: mov     rax, [rsi+458h]
 * 0000000140ABF201: xor     edx, edx
 * 0000000140ABF203: mov     rcx, rbx
 * 0000000140ABF206: call    j__guard_dispatch_icall_nop
 * 0000000140ABF20B: cmp     eax, 0C000022Dh
 * 0000000140ABF210: jnz     short loc_140ABF235
 * 0000000140ABF212: mov     eax, 1
 * 0000000140ABF217: cmp     r15b, al
 * 0000000140ABF21A: ja      short loc_140ABF239
 * 0000000140ABF21C: movzx   r14d, r15b
 * 0000000140ABF220: mov     cr8, r14
 * 0000000140ABF224: mov     al, [rbx]
 * 0000000140ABF226: mov     rax, cr8
 * 0000000140ABF22A: mov     eax, 2
 * 0000000140ABF22F: mov     cr8, rax
 * 0000000140ABF233: jmp     short loc_140ABF1FA
 * 0000000140ABF235: test    eax, eax
 * 0000000140ABF237: js      short loc_140ABF250
 * 0000000140ABF239: mov     r8d, 1000h
 * 0000000140ABF23F: add     rbx, r8
 * 0000000140ABF242: add     r12, r8
 * 0000000140ABF245: cmp     r12, r13
 * 0000000140ABF248: jnz     short loc_140ABF1F6
 * 0000000140ABF24A: mov     cr8, r14
 * 0000000140ABF24E: jmp     short loc_140ABF2B8
 * 0000000140ABF250: mov     cr8, r14
 * 0000000140ABF254: mov     r13, [rsp+0C30h+var_BE0]
 * 0000000140ABF259: mov     r11d, 1
 * 0000000140ABF25F: mov     rcx, [r13+8]
 * 0000000140ABF263: xor     eax, eax
 * 0000000140ABF265: cmp     [rsi+8C0h], eax
 * 0000000140ABF26B: jnz     short loc_140ABF2B8
 * 0000000140ABF26D: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABF277: xor     edx, edx
 * 0000000140ABF279: add     rax, rsi
 * 0000000140ABF27C: mov     [rsi+8C8h], rax
 * 0000000140ABF283: mov     rax, 0B3B74BDEE4453415h
 * 0000000140ABF28D: add     rax, r13
 * 0000000140ABF290: mov     [rsi+8D0h], rax
 * 0000000140ABF297: movsxd  rax, dword ptr [r13+0]
 * 0000000140ABF29B: mov     [rsi+8D8h], rax
 * 0000000140ABF2A2: mov     [rsi+8E0h], rcx
 * 0000000140ABF2A9: mov     rcx, rsi
 * 0000000140ABF2AC: mov     [rsi+8C0h], r11d
 * 0000000140ABF2B3: call    sub_140AD049C
 * 0000000140ABF2B8: mov     rax, [rsp+0C30h+var_BE0]
 * 0000000140ABF2BD: mov     eax, [rax+10h]
 * 0000000140ABF2C0: shl     eax, 4
 * 0000000140ABF2C3: jmp     loc_140ABB2A3
 * 0000000140ABF2C8: mov     r8d, [r13+10h]
 * 0000000140ABF2CC: test    r8d, r8d
 * 0000000140ABF2CF: jnz     loc_140ABF82C
 * 0000000140ABF2D5: lea     rax, [r13+30h]
 * 0000000140ABF2D9: xor     r9d, r9d
 * 0000000140ABF2DC: mov     [rbp+0B30h+var_808], rax
 * 0000000140ABF2E3: lea     rcx, [rbp+0B30h+var_810]
 * 0000000140ABF2EA: movzx   eax, word ptr [r13+28h]
 * 0000000140ABF2EF: xor     r8d, r8d
 * 0000000140ABF2F2: mov     [rbp+0B30h+var_810], ax
 * 0000000140ABF2F9: xor     edx, edx
 * 0000000140ABF2FB: mov     [rbp+0B30h+var_80E], ax
 * 0000000140ABF302: lea     rax, [rbp+0B30h+var_AA0]
 * 0000000140ABF309: mov     [rsp+0C30h+var_BF8], rax
 * 0000000140ABF30E: xor     eax, eax
 * 0000000140ABF310: mov     [rsp+0C30h+var_C00], rax
 * 0000000140ABF315: mov     byte ptr [rsp+0C30h+var_C08], al
 * 0000000140ABF319: mov     rax, [rsi+4E8h]
 * 0000000140ABF320: mov     [rsp+0C30h+BugCheckParameter4], rax
 * 0000000140ABF325: mov     rax, [rsi+1D8h]
 * 0000000140ABF32C: call    j__guard_dispatch_icall_nop
 * 0000000140ABF331: test    eax, eax
 * 0000000140ABF333: js      loc_140ABA5AF
 * 0000000140ABF339: mov     rax, [rbp+0B30h+var_AA0]
 * 0000000140ABF340: mov     ecx, [rax+10h]
 * 0000000140ABF343: mov     eax, 10h
 * 0000000140ABF348: test    al, cl
 * 0000000140ABF34A: jnz     short loc_140ABF35F
 * 0000000140ABF34C: mov     rax, [rsi+1D0h]
 * 0000000140ABF353: mov     rcx, [rbp+0B30h+var_AA0]
 * 0000000140ABF35A: jmp     loc_140ABC41E
 * 0000000140ABF35F: mov     rcx, [rsi+1D8h]
 * 0000000140ABF366: lea     rdx, [rbp+0B30h+var_178]
 * 0000000140ABF36D: mov     rax, [rsi+1F0h]
 * 0000000140ABF374: call    j__guard_dispatch_icall_nop
 * 0000000140ABF379: mov     rcx, [rbp+0B30h+var_170]
 * 0000000140ABF380: test    rcx, rcx
 * 0000000140ABF383: jz      short loc_140ABF3A5
 * 0000000140ABF385: mov     rax, [rsi+1E8h]
 * 0000000140ABF38C: mov     rbx, rcx
 * 0000000140ABF38F: mov     [rbp+0B30h+var_B68], rcx
 * 0000000140ABF393: call    j__guard_dispatch_icall_nop
 * 0000000140ABF398: test    rax, rax
 * 0000000140ABF39B: jz      short loc_140ABF3A5
 * 0000000140ABF39D: mov     r15d, [rax+50h]
 * 0000000140ABF3A1: mov     [rbp+0B30h+var_BAC], r15d
 * 0000000140ABF3A5: mov     rcx, [r13+18h]
 * 0000000140ABF3A9: lea     rdx, [rbp+0B30h+var_160]
 * 0000000140ABF3B0: mov     rax, [rsi+1F0h]
 * 0000000140ABF3B7: call    j__guard_dispatch_icall_nop
 * 0000000140ABF3BC: mov     rcx, [rbp+0B30h+var_158]
 * 0000000140ABF3C3: test    rcx, rcx
 * 0000000140ABF3C6: jz      short loc_140ABF3EA
 * 0000000140ABF3C8: mov     rax, [rsi+1E8h]
 * 0000000140ABF3CF: mov     r14, rcx
 * 0000000140ABF3D2: mov     [rbp+0B30h+var_B98], rcx
 * 0000000140ABF3D6: call    j__guard_dispatch_icall_nop
 * 0000000140ABF3DB: test    rax, rax
 * 0000000140ABF3DE: jz      short loc_140ABF3EA
 * 0000000140ABF3E0: mov     r10d, [rax+50h]
 * 0000000140ABF3E4: mov     [rbp+0B30h+var_B08], r10d
 * 0000000140ABF3E8: jmp     short loc_140ABF3EE
 * 0000000140ABF3EA: mov     r10d, [rbp+0B30h+var_B08]
 * 0000000140ABF3EE: bt      dword ptr [rsi+958h], 1Eh
 * 0000000140ABF3F6: jb      short loc_140ABF40F
 * 0000000140ABF3F8: mov     rax, [rbp+0B30h+var_AA0]
 * 0000000140ABF3FF: add     rax, 70h ; 'p'
 * 0000000140ABF403: mov     [r13+8], rax
 * 0000000140ABF407: mov     dword ptr [r13+10h], 0E0h
 * 0000000140ABF40F: mov     rcx, [rbp+0B30h+var_AA0]
 * 0000000140ABF416: xor     eax, eax
 * 0000000140ABF418: mov     dl, al
 * 0000000140ABF41A: mov     r12d, r15d
 * 0000000140ABF41D: movzx   eax, dl
 * 0000000140ABF420: mov     r9, [rcx+rax*8+70h]
 * 0000000140ABF425: test    r15d, r15d
 * 0000000140ABF428: jz      short loc_140ABF43B
 * 0000000140ABF42A: lea     rax, [rbx-1]
 * 0000000140ABF42E: add     rax, r12
 * 0000000140ABF431: cmp     r9, rbx
 * 0000000140ABF434: jb      short loc_140ABF43B
 * 0000000140ABF436: cmp     r9, rax
 * 0000000140ABF439: jbe     short loc_140ABF460
 * 0000000140ABF43B: mov     eax, r10d
 * 0000000140ABF43E: test    r10d, r10d
 * 0000000140ABF441: jz      loc_140ABF7B1
 * 0000000140ABF447: lea     r8, [r14-1]
 * 0000000140ABF44B: add     r8, rax
 * 0000000140ABF44E: cmp     r9, r14
 * 0000000140ABF451: jb      loc_140ABF7B1
 * 0000000140ABF457: cmp     r9, r8
 * 0000000140ABF45A: ja      loc_140ABF7B1
 * 0000000140ABF460: add     dl, 1
 * 0000000140ABF463: cmp     dl, 1Ch
 * 0000000140ABF466: jb      short loc_140ABF41D
 * 0000000140ABF468: bt      dword ptr [rsi+958h], 1Eh
 * 0000000140ABF470: jnb     short loc_140ABF47E
 * 0000000140ABF472: mov     rax, [rsi+1D0h]
 * 0000000140ABF479: jmp     loc_140ABC41E
 * 0000000140ABF47E: mov     r14, [r13+8]
 * 0000000140ABF482: mov     r9d, [r13+10h]
 * 0000000140ABF486: mov     r10, r14
 * 0000000140ABF489: add     [rsi+7F0h], r9d
 * 0000000140ABF490: mov     rax, r14
 * 0000000140ABF493: mov     ebx, [rsi+7DCh]
 * 0000000140ABF499: mov     r15, [rsi+7E0h]
 * 0000000140ABF4A0: lea     rcx, [r14+r9]
 * 0000000140ABF4A4: cmp     r14, rcx
 * 0000000140ABF4A7: jnb     short loc_140ABF4B9
 * 0000000140ABF4A9: mov     edx, 40h ; '@'
 * 0000000140ABF4AE: prefetchnta byte ptr [rax]
 * 0000000140ABF4B1: add     rax, rdx
 * 0000000140ABF4B4: cmp     rax, rcx
 * 0000000140ABF4B7: jb      short loc_140ABF4AE
 * 0000000140ABF4B9: mov     r11d, r9d
 * 0000000140ABF4BC: mov     r8, r15
 * 0000000140ABF4BF: shr     r11d, 7
 * 0000000140ABF4C3: test    r11d, r11d
 * 0000000140ABF4C6: jz      short loc_140ABF53B
 * 0000000140ABF4C8: mov     rdi, 7010008004002001h
 * 0000000140ABF4D2: mov     edx, 8
 * 0000000140ABF4D7: lea     esi, [rdx-7]
 * 0000000140ABF4DA: mov     rax, [r10]
 * 0000000140ABF4DD: mov     ecx, ebx
 * 0000000140ABF4DF: xor     rax, r8
 * 0000000140ABF4E2: mov     r8, [r10+8]
 * 0000000140ABF4E6: rol     rax, cl
 * 0000000140ABF4E9: add     r10, 10h
 * 0000000140ABF4ED: xor     r8, rax
 * 0000000140ABF4F0: rol     r8, cl
 * 0000000140ABF4F3: sub     rdx, rsi
 * 0000000140ABF4F6: jnz     short loc_140ABF4DA
 * 0000000140ABF4F8: mov     rcx, r10
 * 0000000140ABF4FB: sub     rcx, r14
 * 0000000140ABF4FE: xor     rcx, r15
 * 0000000140ABF501: mov     rax, rcx
 * 0000000140ABF504: rol     rax, 11h
 * 0000000140ABF508: xor     rcx, rax
 * 0000000140ABF50B: mov     rax, rdi
 * 0000000140ABF50E: mul     rcx
 * 0000000140ABF511: xor     ebx, edx
 * 0000000140ABF513: mov     [rbp+0B30h+var_650], rdx
 * 0000000140ABF51A: xor     ebx, eax
 * 0000000140ABF51C: mov     rax, rsi
 * 0000000140ABF51F: and     ebx, 3Fh
 * 0000000140ABF522: cmovz   ebx, eax
 * 0000000140ABF525: mov     eax, 0FFFFFFFFh
 * 0000000140ABF52A: add     r11d, eax
 * 0000000140ABF52D: jnz     short loc_140ABF4D2
 * 0000000140ABF52F: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABF534: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ABF53B: and     r9d, 7Fh
 * 0000000140ABF53F: mov     r11d, 1
 * 0000000140ABF545: cmp     r9d, 8
 * 0000000140ABF549: jb      short loc_140ABF567
 * 0000000140ABF54B: mov     edx, r9d
 * 0000000140ABF54E: shr     rdx, 3
 * 0000000140ABF552: xor     r8, [r10]
 * 0000000140ABF555: mov     ecx, ebx
 * 0000000140ABF557: rol     r8, cl
 * 0000000140ABF55A: add     r10, 8
 * 0000000140ABF55E: add     r9d, 0FFFFFFF8h
 * 0000000140ABF562: sub     rdx, r11
 * 0000000140ABF565: jnz     short loc_140ABF552
 * 0000000140ABF567: test    r9d, r9d
 * 0000000140ABF56A: jz      short loc_140ABF58A
 * 0000000140ABF56C: mov     esi, 0FFFFFFFFh
 * 0000000140ABF571: movzx   eax, byte ptr [r10]
 * 0000000140ABF575: mov     ecx, ebx
 * 0000000140ABF577: xor     r8, rax
 * 0000000140ABF57A: add     r10, r11
 * 0000000140ABF57D: rol     r8, cl
 * 0000000140ABF580: add     r9d, esi
 * 0000000140ABF583: jnz     short loc_140ABF571
 * 0000000140ABF585: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABF58A: mov     rax, r8
 * 0000000140ABF58D: jmp     short loc_140ABF592
 * 0000000140ABF58F: xor     r8d, eax
 * 0000000140ABF592: shr     rax, 1Fh
 * 0000000140ABF596: test    rax, rax
 * 0000000140ABF599: jnz     short loc_140ABF58F
 * 0000000140ABF59B: btr     r8d, 1Fh
 * 0000000140ABF5A0: mov     [r13+14h], r8d
 * 0000000140ABF5A4: mov     rax, [rbp+0B30h+var_AA0]
 * 0000000140ABF5AB: mov     r14, [rax+50h]
 * 0000000140ABF5AF: xor     eax, eax
 * 0000000140ABF5B1: mov     r10d, eax
 * 0000000140ABF5B4: test    r14, r14
 * 0000000140ABF5B7: jz      short loc_140ABF62E
 * 0000000140ABF5B9: mov     r10d, [r14]
 * 0000000140ABF5BC: mov     r8b, al
 * 0000000140ABF5BF: lea     r9d, [r10-8]
 * 0000000140ABF5C3: shr     r9d, 3
 * 0000000140ABF5C7: test    r9d, r9d
 * 0000000140ABF5CA: jz      short loc_140ABF62E
 * 0000000140ABF5CC: mov     r11, [rbp+0B30h+var_B68]
 * 0000000140ABF5D0: mov     rbx, [rbp+0B30h+var_B98]
 * 0000000140ABF5D4: mov     r15d, [rbp+0B30h+var_B08]
 * 0000000140ABF5D8: movzx   eax, r8b
 * 0000000140ABF5DC: mov     rcx, [r14+rax*8+8]
 * 0000000140ABF5E1: test    rcx, rcx
 * 0000000140ABF5E4: jz      short loc_140ABF621
 * 0000000140ABF5E6: test    r12, r12
 * 0000000140ABF5E9: jz      short loc_140ABF5FC
 * 0000000140ABF5EB: lea     rax, [r11-1]
 * 0000000140ABF5EF: add     rax, r12
 * 0000000140ABF5F2: cmp     rcx, r11
 * 0000000140ABF5F5: jb      short loc_140ABF5FC
 * 0000000140ABF5F7: cmp     rcx, rax
 * 0000000140ABF5FA: jbe     short loc_140ABF621
 * 0000000140ABF5FC: mov     rax, r15
 * 0000000140ABF5FF: test    r15d, r15d
 * 0000000140ABF602: jz      loc_140ABF731
 * 0000000140ABF608: lea     rdx, [rbx-1]
 * 0000000140ABF60C: add     rdx, rax
 * 0000000140ABF60F: cmp     rcx, rbx
 * 0000000140ABF612: jb      loc_140ABF731
 * 0000000140ABF618: cmp     rcx, rdx
 * 0000000140ABF61B: ja      loc_140ABF731
 * 0000000140ABF621: add     r8b, 1
 * 0000000140ABF625: movzx   eax, r8b
 * 0000000140ABF629: cmp     eax, r9d
 * 0000000140ABF62C: jb      short loc_140ABF5D8
 * 0000000140ABF62E: add     [rsi+7F0h], r10d
 * 0000000140ABF635: mov     r9, r14
 * 0000000140ABF638: mov     r11d, [rsi+7DCh]
 * 0000000140ABF63F: mov     rax, r14
 * 0000000140ABF642: mov     r15, [rsi+7E0h]
 * 0000000140ABF649: mov     ecx, r10d
 * 0000000140ABF64C: add     rcx, r14
 * 0000000140ABF64F: cmp     r14, rcx
 * 0000000140ABF652: jnb     short loc_140ABF664
 * 0000000140ABF654: mov     edx, 40h ; '@'
 * 0000000140ABF659: prefetchnta byte ptr [rax]
 * 0000000140ABF65C: add     rax, rdx
 * 0000000140ABF65F: cmp     rax, rcx
 * 0000000140ABF662: jb      short loc_140ABF659
 * 0000000140ABF664: mov     ebx, r10d
 * 0000000140ABF667: mov     r8, r15
 * 0000000140ABF66A: shr     ebx, 7
 * 0000000140ABF66D: mov     r12d, 1
 * 0000000140ABF673: test    ebx, ebx
 * 0000000140ABF675: jz      short loc_140ABF6E1
 * 0000000140ABF677: mov     rsi, 7010008004002001h
 * 0000000140ABF681: mov     edx, 8
 * 0000000140ABF686: mov     rax, [r9]
 * 0000000140ABF689: mov     ecx, r11d
 * 0000000140ABF68C: xor     rax, r8
 * 0000000140ABF68F: mov     r8, [r9+8]
 * 0000000140ABF693: rol     rax, cl
 * 0000000140ABF696: add     r9, 10h
 * 0000000140ABF69A: xor     r8, rax
 * 0000000140ABF69D: rol     r8, cl
 * 0000000140ABF6A0: sub     rdx, r12
 * 0000000140ABF6A3: jnz     short loc_140ABF686
 * 0000000140ABF6A5: mov     rcx, r9
 * 0000000140ABF6A8: sub     rcx, r14
 * 0000000140ABF6AB: xor     rcx, r15
 * 0000000140ABF6AE: mov     rax, rcx
 * 0000000140ABF6B1: rol     rax, 11h
 * 0000000140ABF6B5: xor     rcx, rax
 * 0000000140ABF6B8: mov     rax, rsi
 * 0000000140ABF6BB: mul     rcx
 * 0000000140ABF6BE: xor     r11d, edx
 * 0000000140ABF6C1: mov     [rbp+0B30h+var_648], rdx
 * 0000000140ABF6C8: xor     r11d, eax
 * 0000000140ABF6CB: mov     eax, 0FFFFFFFFh
 * 0000000140ABF6D0: and     r11d, 3Fh
 * 0000000140ABF6D4: cmovz   r11d, r12d
 * 0000000140ABF6D8: add     ebx, eax
 * 0000000140ABF6DA: jnz     short loc_140ABF681
 * 0000000140ABF6DC: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABF6E1: and     r10d, 7Fh
 * 0000000140ABF6E5: cmp     r10d, 8
 * 0000000140ABF6E9: jb      short loc_140ABF708
 * 0000000140ABF6EB: mov     edx, r10d
 * 0000000140ABF6EE: shr     rdx, 3
 * 0000000140ABF6F2: xor     r8, [r9]
 * 0000000140ABF6F5: mov     ecx, r11d
 * 0000000140ABF6F8: rol     r8, cl
 * 0000000140ABF6FB: add     r9, 8
 * 0000000140ABF6FF: add     r10d, 0FFFFFFF8h
 * 0000000140ABF703: sub     rdx, r12
 * 0000000140ABF706: jnz     short loc_140ABF6F2
 * 0000000140ABF708: test    r10d, r10d
 * 0000000140ABF70B: jz      short loc_140ABF72C
 * 0000000140ABF70D: mov     esi, 0FFFFFFFFh
 * 0000000140ABF712: movzx   eax, byte ptr [r9]
 * 0000000140ABF716: mov     ecx, r11d
 * 0000000140ABF719: xor     r8, rax
 * 0000000140ABF71C: add     r9, r12
 * 0000000140ABF71F: rol     r8, cl
 * 0000000140ABF722: add     r10d, esi
 * 0000000140ABF725: jnz     short loc_140ABF712
 * 0000000140ABF727: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABF72C: mov     rax, r8
 * 0000000140ABF72F: jmp     short loc_140ABF79A
 * 0000000140ABF731: mov     [r13+20h], rcx
 * 0000000140ABF735: mov     rax, [rsi+568h]
 * 0000000140ABF73C: mov     [rax], r13
 * 0000000140ABF73F: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140ABF746: xor     eax, eax
 * 0000000140ABF748: lea     r12d, [rax+1]
 * 0000000140ABF74C: cmp     [rsi+8C0h], eax
 * 0000000140ABF752: jnz     loc_140ABA35D
 * 0000000140ABF758: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABF762: add     rax, rsi
 * 0000000140ABF765: mov     [rsi+8C8h], rax
 * 0000000140ABF76C: mov     rax, 0B3B74BDEE4453415h
 * 0000000140ABF776: add     rax, r13
 * 0000000140ABF779: mov     [rsi+8D0h], rax
 * 0000000140ABF780: movsxd  rax, dword ptr [r13+0]
 * 0000000140ABF784: mov     [rsi+8D8h], rax
 * 0000000140ABF78B: mov     [rsi+8E0h], r14
 * 0000000140ABF792: jmp     loc_140ABA636
 * 0000000140ABF797: xor     r8d, eax
 * 0000000140ABF79A: shr     rax, 1Fh
 * 0000000140ABF79E: test    rax, rax
 * 0000000140ABF7A1: jnz     short loc_140ABF797
 * 0000000140ABF7A3: btr     r8d, 1Fh
 * 0000000140ABF7A8: mov     [r13+2Ch], r8d
 * 0000000140ABF7AC: jmp     loc_140ABA35B
 * 0000000140ABF7B1: bt      dword ptr [rsi+958h], 1Eh
 * 0000000140ABF7B9: mov     r12d, 1
 * 0000000140ABF7BF: jnb     short loc_140ABF80E
 * 0000000140ABF7C1: mov     rcx, [rsi+0A48h]
 * 0000000140ABF7C8: lea     edx, [r12+2Fh]
 * 0000000140ABF7CD: lea     r8d, [r12+5]
 * 0000000140ABF7D2: mov     rax, [r13+0]
 * 0000000140ABF7D6: add     edx, 0FFFFFFF8h
 * 0000000140ABF7D9: mov     [rcx], rax
 * 0000000140ABF7DC: add     r13, 8
 * 0000000140ABF7E0: add     rcx, 8
 * 0000000140ABF7E4: sub     r8, r12
 * 0000000140ABF7E7: jnz     short loc_140ABF7D2
 * 0000000140ABF7E9: test    edx, edx
 * 0000000140ABF7EB: jz      short loc_140ABF807
 * 0000000140ABF7ED: mov     esi, 0FFFFFFFFh
 * 0000000140ABF7F2: mov     al, [r13+0]
 * 0000000140ABF7F6: add     r13, r12
 * 0000000140ABF7F9: mov     [rcx], al
 * 0000000140ABF7FB: add     rcx, r12
 * 0000000140ABF7FE: add     edx, esi
 * 0000000140ABF800: jnz     short loc_140ABF7F2
 * 0000000140ABF802: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABF807: mov     r13, [rsi+0A48h]
 * 0000000140ABF80E: mov     [r13+20h], r9
 * 0000000140ABF812: mov     rax, [rsi+568h]
 * 0000000140ABF819: mov     [rax], r13
 * 0000000140ABF81C: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140ABF823: mov     rcx, [r13+8]
 * 0000000140ABF827: jmp     loc_140ABA5EE
 * 0000000140ABF82C: mov     r14, [r13+8]
 * 0000000140ABF830: add     [rsi+7F0h], r8d
 * 0000000140ABF837: mov     r9, r14
 * 0000000140ABF83A: mov     r11d, [rsi+7DCh]
 * 0000000140ABF841: mov     rax, r14
 * 0000000140ABF844: mov     r15, [rsi+7E0h]
 * 0000000140ABF84B: lea     rcx, [r14+r8]
 * 0000000140ABF84F: cmp     r14, rcx
 * 0000000140ABF852: jnb     short loc_140ABF864
 * 0000000140ABF854: mov     edx, 40h ; '@'
 * 0000000140ABF859: prefetchnta byte ptr [rax]
 * 0000000140ABF85C: add     rax, rdx
 * 0000000140ABF85F: cmp     rax, rcx
 * 0000000140ABF862: jb      short loc_140ABF859
 * 0000000140ABF864: mov     r10d, r8d
 * 0000000140ABF867: mov     rbx, r15
 * 0000000140ABF86A: shr     r10d, 7
 * 0000000140ABF86E: mov     r12d, 1
 * 0000000140ABF874: mov     r13d, 0FFFFFFFFh
 * 0000000140ABF87A: test    r10d, r10d
 * 0000000140ABF87D: jz      short loc_140ABF8E5
 * 0000000140ABF87F: mov     rsi, 7010008004002001h
 * 0000000140ABF889: mov     edx, 8
 * 0000000140ABF88E: mov     rax, [r9]
 * 0000000140ABF891: mov     ecx, r11d
 * 0000000140ABF894: xor     rax, rbx
 * 0000000140ABF897: mov     rbx, [r9+8]
 * 0000000140ABF89B: rol     rax, cl
 * 0000000140ABF89E: add     r9, 10h
 * 0000000140ABF8A2: xor     rbx, rax
 * 0000000140ABF8A5: rol     rbx, cl
 * 0000000140ABF8A8: sub     rdx, r12
 * 0000000140ABF8AB: jnz     short loc_140ABF88E
 * 0000000140ABF8AD: mov     rcx, r9
 * 0000000140ABF8B0: sub     rcx, r14
 * 0000000140ABF8B3: xor     rcx, r15
 * 0000000140ABF8B6: mov     rax, rcx
 * 0000000140ABF8B9: rol     rax, 11h
 * 0000000140ABF8BD: xor     rcx, rax
 * 0000000140ABF8C0: mov     rax, rsi
 * 0000000140ABF8C3: mul     rcx
 * 0000000140ABF8C6: xor     r11d, edx
 * 0000000140ABF8C9: mov     [rbp+0B30h+var_640], rdx
 * 0000000140ABF8D0: xor     r11d, eax
 * 0000000140ABF8D3: and     r11d, 3Fh
 * 0000000140ABF8D7: cmovz   r11d, r12d
 * 0000000140ABF8DB: add     r10d, r13d
 * 0000000140ABF8DE: jnz     short loc_140ABF889
 * 0000000140ABF8E0: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABF8E5: and     r8d, 7Fh
 * 0000000140ABF8E9: cmp     r8d, 8
 * 0000000140ABF8ED: jb      short loc_140ABF90C
 * 0000000140ABF8EF: mov     edx, r8d
 * 0000000140ABF8F2: shr     rdx, 3
 * 0000000140ABF8F6: xor     rbx, [r9]
 * 0000000140ABF8F9: mov     ecx, r11d
 * 0000000140ABF8FC: rol     rbx, cl
 * 0000000140ABF8FF: add     r9, 8
 * 0000000140ABF903: add     r8d, 0FFFFFFF8h
 * 0000000140ABF907: sub     rdx, r12
 * 0000000140ABF90A: jnz     short loc_140ABF8F6
 * 0000000140ABF90C: test    r8d, r8d
 * 0000000140ABF90F: jz      short loc_140ABF926
 * 0000000140ABF911: movzx   eax, byte ptr [r9]
 * 0000000140ABF915: mov     ecx, r11d
 * 0000000140ABF918: xor     rbx, rax
 * 0000000140ABF91B: add     r9, r12
 * 0000000140ABF91E: rol     rbx, cl
 * 0000000140ABF921: add     r8d, r13d
 * 0000000140ABF924: jnz     short loc_140ABF911
 * 0000000140ABF926: mov     rax, rbx
 * 0000000140ABF929: jmp     short loc_140ABF92D
 * 0000000140ABF92B: xor     ebx, eax
 * 0000000140ABF92D: shr     rax, 1Fh
 * 0000000140ABF931: test    rax, rax
 * 0000000140ABF934: jnz     short loc_140ABF92B
 * 0000000140ABF936: mov     r12, [rsp+0C30h+var_BE0]
 * 0000000140ABF93B: btr     ebx, 1Fh
 * 0000000140ABF93F: mov     r13d, eax
 * 0000000140ABF942: cmp     ebx, [r12+14h]
 * 0000000140ABF947: jz      loc_140ABFA32
 * 0000000140ABF94D: cmp     [r12], eax
 * 0000000140ABF951: jnz     short loc_140ABF95F
 * 0000000140ABF953: cmp     [r12+18h], eax
 * 0000000140ABF958: lea     ecx, [rax+1]
 * 0000000140ABF95B: cmovnz  r13d, ecx
 * 0000000140ABF95F: mov     ecx, [r12+10h]
 * 0000000140ABF964: mov     rdx, [r12+8]
 * 0000000140ABF969: test    rcx, rcx
 * 0000000140ABF96C: jz      loc_140ABFB68
 * 0000000140ABF972: mov     eax, [rsi+95Ch]
 * 0000000140ABF978: mov     r8d, 40h ; '@'
 * 0000000140ABF97E: test    r8b, al
 * 0000000140ABF981: jz      loc_140ABFB68
 * 0000000140ABF987: mov     r12, cr8
 * 0000000140ABF98B: lea     eax, [r8-3Eh]
 * 0000000140ABF98F: mov     cr8, rax
 * 0000000140ABF993: mov     r14, rdx
 * 0000000140ABF996: lea     rax, [rcx-1]
 * 0000000140ABF99A: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140ABF9A1: add     rax, rdx
 * 0000000140ABF9A4: or      rax, 0FFFh
 * 0000000140ABF9AA: mov     [rsp+0C30h+var_BC8], rax
 * 0000000140ABF9AF: lea     rax, [r14-1]
 * 0000000140ABF9B3: mov     [rbp+0B30h+arg_8], rax
 * 0000000140ABF9BA: movzx   r15d, r12b
 * 0000000140ABF9BE: mov     rax, [rsi+458h]
 * 0000000140ABF9C5: xor     edx, edx
 * 0000000140ABF9C7: mov     rcx, r14
 * 0000000140ABF9CA: call    j__guard_dispatch_icall_nop
 * 0000000140ABF9CF: cmp     eax, 0C000022Dh
 * 0000000140ABF9D4: jnz     short loc_140ABFA01
 * 0000000140ABF9D6: test    r13d, r13d
 * 0000000140ABF9D9: jnz     loc_140ABFB5F
 * 0000000140ABF9DF: lea     eax, [r13+1]
 * 0000000140ABF9E3: cmp     r12b, al
 * 0000000140ABF9E6: ja      short loc_140ABFA09
 * 0000000140ABF9E8: movzx   r15d, r12b
 * 0000000140ABF9EC: mov     cr8, r15
 * 0000000140ABF9F0: mov     al, [r14]
 * 0000000140ABF9F3: mov     rax, cr8
 * 0000000140ABF9F7: lea     eax, [r13+2]
 * 0000000140ABF9FB: mov     cr8, rax
 * 0000000140ABF9FF: jmp     short loc_140ABF9BE
 * 0000000140ABFA01: test    eax, eax
 * 0000000140ABFA03: js      loc_140ABFB5F
 * 0000000140ABFA09: mov     rax, [rbp+0B30h+arg_8]
 * 0000000140ABFA10: mov     ecx, 1000h
 * 0000000140ABFA15: add     rax, rcx
 * 0000000140ABFA18: add     r14, rcx
 * 0000000140ABFA1B: mov     [rbp+0B30h+arg_8], rax
 * 0000000140ABFA22: cmp     rax, [rsp+0C30h+var_BC8]
 * 0000000140ABFA27: jnz     short loc_140ABF9BA
 * 0000000140ABFA29: mov     cr8, r15
 * 0000000140ABFA2D: mov     r12, [rsp+0C30h+var_BE0]
 * 0000000140ABFA32: mov     r13d, 1
 * 0000000140ABFA38: mov     rax, [r12+8]
 * 0000000140ABFA3D: sub     rax, 70h ; 'p'
 * 0000000140ABFA41: mov     [rbp+0B30h+var_AA0], rax
 * 0000000140ABFA48: mov     r15, [rax+50h]
 * 0000000140ABFA4C: xor     eax, eax
 * 0000000140ABFA4E: mov     r9d, eax
 * 0000000140ABFA51: test    r15, r15
 * 0000000140ABFA54: jz      short loc_140ABFA59
 * 0000000140ABFA56: mov     r9d, [r15]
 * 0000000140ABFA59: add     [rsi+7F0h], r9d
 * 0000000140ABFA60: mov     r10, r15
 * 0000000140ABFA63: mov     r11d, [rsi+7DCh]
 * 0000000140ABFA6A: mov     rax, r15
 * 0000000140ABFA6D: mov     r14, [rsi+7E0h]
 * 0000000140ABFA74: mov     ecx, r9d
 * 0000000140ABFA77: add     rcx, r15
 * 0000000140ABFA7A: cmp     r15, rcx
 * 0000000140ABFA7D: jnb     short loc_140ABFA8F
 * 0000000140ABFA7F: mov     edx, 40h ; '@'
 * 0000000140ABFA84: prefetchnta byte ptr [rax]
 * 0000000140ABFA87: add     rax, rdx
 * 0000000140ABFA8A: cmp     rax, rcx
 * 0000000140ABFA8D: jb      short loc_140ABFA84
 * 0000000140ABFA8F: mov     ebx, r9d
 * 0000000140ABFA92: mov     r8, r14
 * 0000000140ABFA95: shr     ebx, 7
 * 0000000140ABFA98: test    ebx, ebx
 * 0000000140ABFA9A: jz      short loc_140ABFB06
 * 0000000140ABFA9C: mov     rsi, 7010008004002001h
 * 0000000140ABFAA6: mov     edx, 8
 * 0000000140ABFAAB: mov     rax, [r10]
 * 0000000140ABFAAE: mov     ecx, r11d
 * 0000000140ABFAB1: xor     rax, r8
 * 0000000140ABFAB4: mov     r8, [r10+8]
 * 0000000140ABFAB8: rol     rax, cl
 * 0000000140ABFABB: add     r10, 10h
 * 0000000140ABFABF: xor     r8, rax
 * 0000000140ABFAC2: rol     r8, cl
 * 0000000140ABFAC5: sub     rdx, r13
 * 0000000140ABFAC8: jnz     short loc_140ABFAAB
 * 0000000140ABFACA: mov     rcx, r10
 * 0000000140ABFACD: sub     rcx, r15
 * 0000000140ABFAD0: xor     rcx, r14
 * 0000000140ABFAD3: mov     rax, rcx
 * 0000000140ABFAD6: rol     rax, 11h
 * 0000000140ABFADA: xor     rcx, rax
 * 0000000140ABFADD: mov     rax, rsi
 * 0000000140ABFAE0: mul     rcx
 * 0000000140ABFAE3: xor     r11d, edx
 * 0000000140ABFAE6: mov     [rbp+0B30h+var_638], rdx
 * 0000000140ABFAED: xor     r11d, eax
 * 0000000140ABFAF0: mov     eax, 0FFFFFFFFh
 * 0000000140ABFAF5: and     r11d, 3Fh
 * 0000000140ABFAF9: cmovz   r11d, r13d
 * 0000000140ABFAFD: add     ebx, eax
 * 0000000140ABFAFF: jnz     short loc_140ABFAA6
 * 0000000140ABFB01: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABFB06: and     r9d, 7Fh
 * 0000000140ABFB0A: cmp     r9d, 8
 * 0000000140ABFB0E: jb      short loc_140ABFB2D
 * 0000000140ABFB10: mov     edx, r9d
 * 0000000140ABFB13: shr     rdx, 3
 * 0000000140ABFB17: xor     r8, [r10]
 * 0000000140ABFB1A: mov     ecx, r11d
 * 0000000140ABFB1D: rol     r8, cl
 * 0000000140ABFB20: add     r10, 8
 * 0000000140ABFB24: add     r9d, 0FFFFFFF8h
 * 0000000140ABFB28: sub     rdx, r13
 * 0000000140ABFB2B: jnz     short loc_140ABFB17
 * 0000000140ABFB2D: test    r9d, r9d
 * 0000000140ABFB30: jz      short loc_140ABFB51
 * 0000000140ABFB32: mov     esi, 0FFFFFFFFh
 * 0000000140ABFB37: movzx   eax, byte ptr [r10]
 * 0000000140ABFB3B: mov     ecx, r11d
 * 0000000140ABFB3E: xor     r8, rax
 * 0000000140ABFB41: add     r10, r13
 * 0000000140ABFB44: rol     r8, cl
 * 0000000140ABFB47: add     r9d, esi
 * 0000000140ABFB4A: jnz     short loc_140ABFB37
 * 0000000140ABFB4C: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABFB51: mov     rax, r8
 * 0000000140ABFB54: shr     rax, 1Fh
 * 0000000140ABFB58: xor     edx, edx
 * 0000000140ABFB5A: jmp     loc_140ABFBF9
 * 0000000140ABFB5F: mov     cr8, r15
 * 0000000140ABFB63: mov     r12, [rsp+0C30h+var_BE0]
 * 0000000140ABFB68: mov     eax, [r12+14h]
 * 0000000140ABFB6D: xor     ecx, ecx
 * 0000000140ABFB6F: cmp     [rsi+8C0h], ecx
 * 0000000140ABFB75: jnz     loc_140ABFA32
 * 0000000140ABFB7B: mov     ecx, ebx
 * 0000000140ABFB7D: xor     rcx, rax
 * 0000000140ABFB80: mov     rax, [rsi+568h]
 * 0000000140ABFB87: mov     [rax+18h], rcx
 * 0000000140ABFB8B: xor     eax, eax
 * 0000000140ABFB8D: mov     rcx, [r12+8]
 * 0000000140ABFB92: lea     r13d, [rax+1]
 * 0000000140ABFB96: cmp     [rsi+8C0h], eax
 * 0000000140ABFB9C: jnz     loc_140ABFA38
 * 0000000140ABFBA2: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABFBAC: xor     edx, edx
 * 0000000140ABFBAE: add     rax, rsi
 * 0000000140ABFBB1: mov     [rsi+8C8h], rax
 * 0000000140ABFBB8: mov     rax, 0B3B74BDEE4453415h
 * 0000000140ABFBC2: add     rax, r12
 * 0000000140ABFBC5: mov     [rsi+8D0h], rax
 * 0000000140ABFBCC: movsxd  rax, dword ptr [r12]
 * 0000000140ABFBD0: mov     [rsi+8D8h], rax
 * 0000000140ABFBD7: mov     [rsi+8E0h], rcx
 * 0000000140ABFBDE: mov     rcx, rsi
 * 0000000140ABFBE1: mov     [rsi+8C0h], r13d
 * 0000000140ABFBE8: call    sub_140AD049C
 * 0000000140ABFBED: jmp     loc_140ABFA38
 * 0000000140ABFBF2: xor     r8d, eax
 * 0000000140ABFBF5: shr     rax, 1Fh
 * 0000000140ABFBF9: test    rax, rax
 * 0000000140ABFBFC: jnz     short loc_140ABFBF2
 * 0000000140ABFBFE: mov     eax, [r12+2Ch]
 * 0000000140ABFC03: btr     r8d, 1Fh
 * 0000000140ABFC08: cmp     r8d, eax
 * 0000000140ABFC0B: jz      loc_140ABA5AF
 * 0000000140ABFC11: cmp     [rsi+8C0h], edx
 * 0000000140ABFC17: jnz     loc_140ABA5AF
 * 0000000140ABFC1D: mov     ecx, r8d
 * 0000000140ABFC20: xor     rcx, rax
 * 0000000140ABFC23: mov     rax, [rsi+568h]
 * 0000000140ABFC2A: mov     [rax+18h], rcx
 * 0000000140ABFC2E: cmp     [rsi+8C0h], edx
 * 0000000140ABFC34: jnz     loc_140ABA5AF
 * 0000000140ABFC3A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABFC44: add     rax, rsi
 * 0000000140ABFC47: mov     [rsi+8C8h], rax
 * 0000000140ABFC4E: mov     rax, 0B3B74BDEE4453415h
 * 0000000140ABFC58: add     rax, r12
 * 0000000140ABFC5B: mov     [rsi+8D0h], rax
 * 0000000140ABFC62: movsxd  rax, dword ptr [r12]
 * 0000000140ABFC66: mov     r12d, 1
 * 0000000140ABFC6C: mov     [rsi+8D8h], rax
 * 0000000140ABFC73: mov     [rsi+8E0h], r15
 * 0000000140ABFC7A: jmp     loc_140ABA638
 * 0000000140ABFC7F: cmp     r10d, 25h ; '%'
 * 0000000140ABFC83: jg      loc_140AC2275
 * 0000000140ABFC89: jz      loc_140AC2235
 * 0000000140ABFC8F: mov     ecx, r10d
 * 0000000140ABFC92: sub     ecx, 1Dh
 * 0000000140ABFC95: jz      loc_140AC1DD8
 * 0000000140ABFC9B: sub     ecx, 1
 * 0000000140ABFC9E: jz      loc_140AC1659
 * 0000000140ABFCA4: sub     ecx, 1
 * 0000000140ABFCA7: jz      loc_140AC09FC
 * 0000000140ABFCAD: sub     ecx, 1
 * 0000000140ABFCB0: jz      loc_140AC09EC
 * 0000000140ABFCB6: sub     ecx, 1
 * 0000000140ABFCB9: jz      loc_140AC09DC
 * 0000000140ABFCBF: sub     ecx, 2
 * 0000000140ABFCC2: jz      loc_140AC01E2
 * 0000000140ABFCC8: cmp     ecx, 1
 * 0000000140ABFCCB: jnz     loc_140AC4782
 * 0000000140ABFCD1: mov     r14, [r13+8]
 * 0000000140ABFCD5: mov     r8d, [r13+10h]
 * 0000000140ABFCD9: mov     r9, r14
 * 0000000140ABFCDC: add     [rsi+7F0h], r8d
 * 0000000140ABFCE3: mov     rax, r14
 * 0000000140ABFCE6: mov     r10d, [rsi+7DCh]
 * 0000000140ABFCED: mov     r15, [rsi+7E0h]
 * 0000000140ABFCF4: lea     rcx, [r14+r8]
 * 0000000140ABFCF8: cmp     r14, rcx
 * 0000000140ABFCFB: jnb     short loc_140ABFD0D
 * 0000000140ABFCFD: mov     edx, 40h ; '@'
 * 0000000140ABFD02: prefetchnta byte ptr [rax]
 * 0000000140ABFD05: add     rax, rdx
 * 0000000140ABFD08: cmp     rax, rcx
 * 0000000140ABFD0B: jb      short loc_140ABFD02
 * 0000000140ABFD0D: mov     r11d, r8d
 * 0000000140ABFD10: mov     rbx, r15
 * 0000000140ABFD13: shr     r11d, 7
 * 0000000140ABFD17: mov     r12d, 1
 * 0000000140ABFD1D: mov     r13d, 0FFFFFFFFh
 * 0000000140ABFD23: test    r11d, r11d
 * 0000000140ABFD26: jz      short loc_140ABFD8E
 * 0000000140ABFD28: mov     rsi, 7010008004002001h
 * 0000000140ABFD32: mov     edx, 8
 * 0000000140ABFD37: mov     rax, [r9]
 * 0000000140ABFD3A: mov     ecx, r10d
 * 0000000140ABFD3D: xor     rax, rbx
 * 0000000140ABFD40: mov     rbx, [r9+8]
 * 0000000140ABFD44: rol     rax, cl
 * 0000000140ABFD47: add     r9, 10h
 * 0000000140ABFD4B: xor     rbx, rax
 * 0000000140ABFD4E: rol     rbx, cl
 * 0000000140ABFD51: sub     rdx, r12
 * 0000000140ABFD54: jnz     short loc_140ABFD37
 * 0000000140ABFD56: mov     rcx, r9
 * 0000000140ABFD59: sub     rcx, r14
 * 0000000140ABFD5C: xor     rcx, r15
 * 0000000140ABFD5F: mov     rax, rcx
 * 0000000140ABFD62: rol     rax, 11h
 * 0000000140ABFD66: xor     rcx, rax
 * 0000000140ABFD69: mov     rax, rsi
 * 0000000140ABFD6C: mul     rcx
 * 0000000140ABFD6F: xor     r10d, edx
 * 0000000140ABFD72: mov     [rbp+0B30h+var_630], rdx
 * 0000000140ABFD79: xor     r10d, eax
 * 0000000140ABFD7C: and     r10d, 3Fh
 * 0000000140ABFD80: cmovz   r10d, r12d
 * 0000000140ABFD84: add     r11d, r13d
 * 0000000140ABFD87: jnz     short loc_140ABFD32
 * 0000000140ABFD89: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABFD8E: and     r8d, 7Fh
 * 0000000140ABFD92: cmp     r8d, 8
 * 0000000140ABFD96: jb      short loc_140ABFDB5
 * 0000000140ABFD98: mov     edx, r8d
 * 0000000140ABFD9B: shr     rdx, 3
 * 0000000140ABFD9F: xor     rbx, [r9]
 * 0000000140ABFDA2: mov     ecx, r10d
 * 0000000140ABFDA5: rol     rbx, cl
 * 0000000140ABFDA8: add     r9, 8
 * 0000000140ABFDAC: add     r8d, 0FFFFFFF8h
 * 0000000140ABFDB0: sub     rdx, r12
 * 0000000140ABFDB3: jnz     short loc_140ABFD9F
 * 0000000140ABFDB5: test    r8d, r8d
 * 0000000140ABFDB8: jz      short loc_140ABFDCF
 * 0000000140ABFDBA: movzx   eax, byte ptr [r9]
 * 0000000140ABFDBE: mov     ecx, r10d
 * 0000000140ABFDC1: xor     rbx, rax
 * 0000000140ABFDC4: add     r9, r12
 * 0000000140ABFDC7: rol     rbx, cl
 * 0000000140ABFDCA: add     r8d, r13d
 * 0000000140ABFDCD: jnz     short loc_140ABFDBA
 * 0000000140ABFDCF: mov     rax, rbx
 * 0000000140ABFDD2: jmp     short loc_140ABFDD6
 * 0000000140ABFDD4: xor     ebx, eax
 * 0000000140ABFDD6: shr     rax, 1Fh
 * 0000000140ABFDDA: test    rax, rax
 * 0000000140ABFDDD: jnz     short loc_140ABFDD4
 * 0000000140ABFDDF: mov     r8, [rsp+0C30h+var_BE0]
 * 0000000140ABFDE4: btr     ebx, 1Fh
 * 0000000140ABFDE8: mov     r13d, eax
 * 0000000140ABFDEB: cmp     ebx, [r8+14h]
 * 0000000140ABFDEF: jz      loc_140ABFF50
 * 0000000140ABFDF5: cmp     [r8], eax
 * 0000000140ABFDF8: jnz     short loc_140ABFE02
 * 0000000140ABFDFA: cmp     [r8+18h], eax
 * 0000000140ABFDFE: cmovnz  r13d, r12d
 * 0000000140ABFE02: mov     ecx, [r8+10h]
 * 0000000140ABFE06: mov     rdx, [r8+8]
 * 0000000140ABFE0A: test    rcx, rcx
 * 0000000140ABFE0D: jz      loc_140ABFED4
 * 0000000140ABFE13: mov     eax, [rsi+95Ch]
 * 0000000140ABFE19: mov     r9d, 40h ; '@'
 * 0000000140ABFE1F: test    r9b, al
 * 0000000140ABFE22: jz      loc_140ABFED4
 * 0000000140ABFE28: mov     r12, cr8
 * 0000000140ABFE2C: lea     eax, [r9-3Eh]
 * 0000000140ABFE30: mov     cr8, rax
 * 0000000140ABFE34: mov     r14, rdx
 * 0000000140ABFE37: lea     rax, [rcx-1]
 * 0000000140ABFE3B: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140ABFE42: add     rax, rdx
 * 0000000140ABFE45: or      rax, 0FFFh
 * 0000000140ABFE4B: mov     [rsp+0C30h+var_BC8], rax
 * 0000000140ABFE50: lea     rax, [r14-1]
 * 0000000140ABFE54: mov     [rbp+0B30h+arg_8], rax
 * 0000000140ABFE5B: movzx   r15d, r12b
 * 0000000140ABFE5F: mov     rax, [rsi+458h]
 * 0000000140ABFE66: xor     edx, edx
 * 0000000140ABFE68: mov     rcx, r14
 * 0000000140ABFE6B: call    j__guard_dispatch_icall_nop
 * 0000000140ABFE70: cmp     eax, 0C000022Dh
 * 0000000140ABFE75: jnz     short loc_140ABFE9E
 * 0000000140ABFE77: test    r13d, r13d
 * 0000000140ABFE7A: jnz     short loc_140ABFECB
 * 0000000140ABFE7C: lea     eax, [r13+1]
 * 0000000140ABFE80: cmp     r12b, al
 * 0000000140ABFE83: ja      short loc_140ABFEA2
 * 0000000140ABFE85: movzx   r15d, r12b
 * 0000000140ABFE89: mov     cr8, r15
 * 0000000140ABFE8D: mov     al, [r14]
 * 0000000140ABFE90: mov     rax, cr8
 * 0000000140ABFE94: lea     eax, [r13+2]
 * 0000000140ABFE98: mov     cr8, rax
 * 0000000140ABFE9C: jmp     short loc_140ABFE5F
 * 0000000140ABFE9E: test    eax, eax
 * 0000000140ABFEA0: js      short loc_140ABFECB
 * 0000000140ABFEA2: mov     rax, [rbp+0B30h+arg_8]
 * 0000000140ABFEA9: mov     ecx, 1000h
 * 0000000140ABFEAE: add     rax, rcx
 * 0000000140ABFEB1: add     r14, rcx
 * 0000000140ABFEB4: mov     [rbp+0B30h+arg_8], rax
 * 0000000140ABFEBB: cmp     rax, [rsp+0C30h+var_BC8]
 * 0000000140ABFEC0: jnz     short loc_140ABFE5B
 * 0000000140ABFEC2: mov     cr8, r15
 * 0000000140ABFEC6: jmp     loc_140ABFF50
 * 0000000140ABFECB: mov     cr8, r15
 * 0000000140ABFECF: mov     r8, [rsp+0C30h+var_BE0]
 * 0000000140ABFED4: mov     eax, [r8+14h]
 * 0000000140ABFED8: xor     ecx, ecx
 * 0000000140ABFEDA: cmp     [rsi+8C0h], ecx
 * 0000000140ABFEE0: jnz     short loc_140ABFF50
 * 0000000140ABFEE2: mov     ecx, eax
 * 0000000140ABFEE4: mov     eax, ebx
 * 0000000140ABFEE6: xor     rcx, rax
 * 0000000140ABFEE9: mov     rax, [rsi+568h]
 * 0000000140ABFEF0: mov     [rax+18h], rcx
 * 0000000140ABFEF4: xor     eax, eax
 * 0000000140ABFEF6: mov     rcx, [r8+8]
 * 0000000140ABFEFA: cmp     [rsi+8C0h], eax
 * 0000000140ABFF00: jnz     short loc_140ABFF50
 * 0000000140ABFF02: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ABFF0C: xor     edx, edx
 * 0000000140ABFF0E: add     rax, rsi
 * 0000000140ABFF11: mov     [rsi+8C8h], rax
 * 0000000140ABFF18: mov     rax, 0B3B74BDEE4453415h
 * 0000000140ABFF22: add     rax, r8
 * 0000000140ABFF25: mov     [rsi+8D0h], rax
 * 0000000140ABFF2C: movsxd  rax, dword ptr [r8]
 * 0000000140ABFF2F: mov     [rsi+8D8h], rax
 * 0000000140ABFF36: mov     eax, 1
 * 0000000140ABFF3B: mov     [rsi+8E0h], rcx
 * 0000000140ABFF42: mov     rcx, rsi
 * 0000000140ABFF45: mov     [rsi+8C0h], eax
 * 0000000140ABFF4B: call    sub_140AD049C
 * 0000000140ABFF50: mov     rcx, [rsi+518h]
 * 0000000140ABFF57: mov     r14, cr8
 * 0000000140ABFF5B: mov     eax, 0Fh
 * 0000000140ABFF60: mov     cr8, rax
 * 0000000140ABFF64: mov     rax, [rsi+140h]
 * 0000000140ABFF6B: call    j__guard_dispatch_icall_nop
 * 0000000140ABFF70: mov     rax, [rsi+5E8h]
 * 0000000140ABFF77: mov     r12, [rsp+0C30h+var_BE0]
 * 0000000140ABFF7C: mov     rcx, [rax]
 * 0000000140ABFF7F: mov     eax, [rcx]
 * 0000000140ABFF81: lea     rbx, [rcx+10h]
 * 0000000140ABFF85: mov     r15b, [rcx+0Ch]
 * 0000000140ABFF89: lea     rcx, [rax+rax*2]
 * 0000000140ABFF8D: lea     r13, [rbx+rcx*8]
 * 0000000140ABFF91: mov     r8d, 18h
 * 0000000140ABFF97: lea     r9, [r12+18h]
 * 0000000140ABFF9C: mov     r10, rbx
 * 0000000140ABFF9F: mov     rcx, [r10]
 * 0000000140ABFFA2: add     r10, 8
 * 0000000140ABFFA6: mov     rax, [r9]
 * 0000000140ABFFA9: add     r9, 8
 * 0000000140ABFFAD: cmp     rcx, rax
 * 0000000140ABFFB0: jnz     short loc_140ABFFE6
 * 0000000140ABFFB2: add     r8d, 0FFFFFFF8h
 * 0000000140ABFFB6: cmp     r8d, 8
 * 0000000140ABFFBA: jnb     short loc_140ABFF9F
 * 0000000140ABFFBC: test    r8d, r8d
 * 0000000140ABFFBF: jz      short loc_140ABFFEF
 * 0000000140ABFFC1: mov     r11d, 1
 * 0000000140ABFFC7: movzx   edx, byte ptr [r10]
 * 0000000140ABFFCB: add     r10, r11
 * 0000000140ABFFCE: movzx   eax, byte ptr [r9]
 * 0000000140ABFFD2: add     r9, r11
 * 0000000140ABFFD5: cmp     rdx, rax
 * 0000000140ABFFD8: jnz     short loc_140ABFFE6
 * 0000000140ABFFDA: mov     eax, 0FFFFFFFFh
 * 0000000140ABFFDF: add     r8d, eax
 * 0000000140ABFFE2: jz      short loc_140ABFFEF
 * 0000000140ABFFE4: jmp     short loc_140ABFFC7
 * 0000000140ABFFE6: add     rbx, 18h
 * 0000000140ABFFEA: cmp     rbx, r13
 * 0000000140ABFFED: jb      short loc_140ABFF91
 * 0000000140ABFFEF: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ABFFF4: mov     rcx, [rsi+518h]
 * 0000000140ABFFFB: mov     rax, [rsi+180h]
 * 0000000140AC0002: call    j__guard_dispatch_icall_nop
 * 0000000140AC0007: movzx   eax, r14b
 * 0000000140AC000B: mov     cr8, rax
 * 0000000140AC000F: xor     eax, eax
 * 0000000140AC0011: test    r15b, r15b
 * 0000000140AC0014: jz      short loc_140AC0092
 * 0000000140AC0016: mov     eax, [rsi+95Ch]
 * 0000000140AC001C: mov     ecx, 10h
 * 0000000140AC0021: test    cl, al
 * 0000000140AC0023: jz      short loc_140AC0082
 * 0000000140AC0025: xor     eax, eax
 * 0000000140AC0027: cmp     [rsi+8C0h], eax
 * 0000000140AC002D: jnz     short loc_140AC0082
 * 0000000140AC002F: mov     rcx, [rsp+0C30h+var_BE0]
 * 0000000140AC0034: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC003E: add     rax, rsi
 * 0000000140AC0041: xor     edx, edx
 * 0000000140AC0043: mov     [rsi+8C8h], rax
 * 0000000140AC004A: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC0054: add     rax, rcx
 * 0000000140AC0057: mov     [rsi+8D0h], rax
 * 0000000140AC005E: movsxd  rax, dword ptr [rcx]
 * 0000000140AC0061: mov     rcx, rsi
 * 0000000140AC0064: mov     [rsi+8D8h], rax
 * 0000000140AC006B: mov     eax, 1
 * 0000000140AC0070: mov     [rsi+8E0h], rax
 * 0000000140AC0077: mov     [rsi+8C0h], eax
 * 0000000140AC007D: call    sub_140AD049C
 * 0000000140AC0082: mov     ecx, 1
 * 0000000140AC0087: cmp     [r12+18h], rcx
 * 0000000140AC008C: jz      short loc_140AC00F6
 * 0000000140AC008E: xor     eax, eax
 * 0000000140AC0090: jmp     short loc_140AC0097
 * 0000000140AC0092: mov     ecx, 1
 * 0000000140AC0097: cmp     rbx, r13
 * 0000000140AC009A: jnz     short loc_140AC00F6
 * 0000000140AC009C: mov     r13, 0B3B74BDEE4453415h
 * 0000000140AC00A6: mov     r12, [rsp+0C30h+var_BE0]
 * 0000000140AC00AB: cmp     [rsi+8C0h], eax
 * 0000000140AC00B1: jnz     short loc_140AC0105
 * 0000000140AC00B3: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC00BD: xor     edx, edx
 * 0000000140AC00BF: add     rax, rsi
 * 0000000140AC00C2: mov     [rsi+8C8h], rax
 * 0000000140AC00C9: lea     rax, [r12+r13]
 * 0000000140AC00CD: mov     [rsi+8D0h], rax
 * 0000000140AC00D4: movsxd  rax, dword ptr [r12]
 * 0000000140AC00D8: mov     [rsi+8D8h], rax
 * 0000000140AC00DF: mov     [rsi+8E0h], rbx
 * 0000000140AC00E6: mov     [rsi+8C0h], ecx
 * 0000000140AC00EC: mov     rcx, rsi
 * 0000000140AC00EF: call    sub_140AD049C
 * 0000000140AC00F4: jmp     short loc_140AC0105
 * 0000000140AC00F6: mov     r12, [rsp+0C30h+var_BE0]
 * 0000000140AC00FB: mov     r13, 0B3B74BDEE4453415h
 * 0000000140AC0105: mov     rcx, [rsi+518h]
 * 0000000140AC010C: mov     r15, cr8
 * 0000000140AC0110: mov     eax, 0Fh
 * 0000000140AC0115: mov     cr8, rax
 * 0000000140AC0119: mov     rax, [rsi+140h]
 * 0000000140AC0120: call    j__guard_dispatch_icall_nop
 * 0000000140AC0125: mov     rax, [rsi+5E8h]
 * 0000000140AC012C: mov     rcx, [rax]
 * 0000000140AC012F: mov     eax, [rcx]
 * 0000000140AC0131: lea     rbx, [rcx+10h]
 * 0000000140AC0135: lea     rcx, [rax+rax*2]
 * 0000000140AC0139: xor     eax, eax
 * 0000000140AC013B: lea     r14, [rbx+rcx*8]
 * 0000000140AC013F: jmp     short loc_140AC0168
 * 0000000140AC0141: mov     rcx, [rbx+8]
 * 0000000140AC0145: cmp     rcx, rdx
 * 0000000140AC0148: jb      short loc_140AC0174
 * 0000000140AC014A: mov     rax, rcx
 * 0000000140AC014D: and     rax, 0FFFFFFFFFFFFF000h
 * 0000000140AC0153: cmp     rax, rcx
 * 0000000140AC0156: jnz     short loc_140AC0174
 * 0000000140AC0158: mov     eax, [rbx+10h]
 * 0000000140AC015B: add     rax, rcx
 * 0000000140AC015E: cmp     rax, rcx
 * 0000000140AC0161: jbe     short loc_140AC0174
 * 0000000140AC0163: cmp     rax, rdx
 * 0000000140AC0166: jz      short loc_140AC0174
 * 0000000140AC0168: add     rbx, 18h
 * 0000000140AC016C: mov     rdx, rax
 * 0000000140AC016F: cmp     rbx, r14
 * 0000000140AC0172: jb      short loc_140AC0141
 * 0000000140AC0174: mov     rcx, [rsi+518h]
 * 0000000140AC017B: mov     rax, [rsi+180h]
 * 0000000140AC0182: call    j__guard_dispatch_icall_nop
 * 0000000140AC0187: movzx   eax, r15b
 * 0000000140AC018B: mov     cr8, rax
 * 0000000140AC018F: xor     eax, eax
 * 0000000140AC0191: cmp     rbx, r14
 * 0000000140AC0194: jz      loc_140ABA263
 * 0000000140AC019A: cmp     [rsi+8C0h], eax
 * 0000000140AC01A0: jnz     loc_140ABA263
 * 0000000140AC01A6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC01B0: add     rax, rsi
 * 0000000140AC01B3: mov     [rsi+8C8h], rax
 * 0000000140AC01BA: lea     rax, [r12+r13]
 * 0000000140AC01BE: mov     [rsi+8D0h], rax
 * 0000000140AC01C5: movsxd  rax, dword ptr [r12]
 * 0000000140AC01C9: mov     r12d, 1
 * 0000000140AC01CF: mov     [rsi+8D8h], rax
 * 0000000140AC01D6: mov     [rsi+8E0h], rbx
 * 0000000140AC01DD: jmp     loc_140ABA636
 * 0000000140AC01E2: mov     ecx, [r13+28h]
 * 0000000140AC01E6: mov     r12d, 1
 * 0000000140AC01EC: and     ecx, r12d
 * 0000000140AC01EF: jz      loc_140AC0742
 * 0000000140AC01F5: xor     eax, eax
 * 0000000140AC01F7: cmp     [rsi+948h], rax
 * 0000000140AC01FE: jz      loc_140ABEF1D
 * 0000000140AC0204: mov     eax, [rsi+95Ch]
 * 0000000140AC020A: test    al, 4
 * 0000000140AC020C: jnz     loc_140ABEF1B
 * 0000000140AC0212: xor     eax, eax
 * 0000000140AC0214: test    ecx, ecx
 * 0000000140AC0216: jz      loc_140AC0742
 * 0000000140AC021C: mov     r8d, [rsi+7ECh]
 * 0000000140AC0223: mov     edx, [rsi+95Ch]
 * 0000000140AC0229: test    r8d, r8d
 * 0000000140AC022C: jnz     short loc_140AC0244
 * 0000000140AC022E: lea     ecx, ds:0[rdx*8]
 * 0000000140AC0235: xor     ecx, edx
 * 0000000140AC0237: and     ecx, 20h
 * 0000000140AC023A: xor     ecx, edx
 * 0000000140AC023C: mov     [rsi+95Ch], ecx
 * 0000000140AC0242: jmp     short loc_140AC0260
 * 0000000140AC0244: mov     eax, edx
 * 0000000140AC0246: mov     ecx, edx
 * 0000000140AC0248: shr     eax, 3
 * 0000000140AC024B: xor     eax, edx
 * 0000000140AC024D: test    al, 4
 * 0000000140AC024F: jz      short loc_140AC025E
 * 0000000140AC0251: xor     eax, eax
 * 0000000140AC0253: mov     [rsi+7ECh], eax
 * 0000000140AC0259: jmp     loc_140ABA35D
 * 0000000140AC025E: xor     eax, eax
 * 0000000140AC0260: cmp     [rsi+948h], rax
 * 0000000140AC0267: jz      loc_140AC0737
 * 0000000140AC026D: test    r8d, r8d
 * 0000000140AC0270: jnz     short loc_140AC0288
 * 0000000140AC0272: lea     edx, ds:0[rcx*8]
 * 0000000140AC0279: xor     edx, ecx
 * 0000000140AC027B: and     edx, 20h
 * 0000000140AC027E: xor     edx, ecx
 * 0000000140AC0280: mov     [rsi+95Ch], edx
 * 0000000140AC0286: jmp     short loc_140AC0299
 * 0000000140AC0288: mov     eax, ecx
 * 0000000140AC028A: mov     edx, ecx
 * 0000000140AC028C: shr     eax, 3
 * 0000000140AC028F: xor     eax, ecx
 * 0000000140AC0291: test    al, 4
 * 0000000140AC0293: jnz     loc_140AC0735
 * 0000000140AC0299: test    dl, 4
 * 0000000140AC029C: jz      loc_140AC036C
 * 0000000140AC02A2: mov     ecx, [r13+8]
 * 0000000140AC02A6: xor     r12d, r12d
 * 0000000140AC02A9: mov     r14d, [r13+10h]
 * 0000000140AC02AD: and     ecx, 0FFFh
 * 0000000140AC02B3: mov     rbx, [r13+8]
 * 0000000140AC02B7: add     r14, 0FFFh
 * 0000000140AC02BE: add     r14, rcx
 * 0000000140AC02C1: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140AC02C8: shr     r14, 0Ch
 * 0000000140AC02CC: lea     r15d, [r12+1]
 * 0000000140AC02D1: test    r14, r14
 * 0000000140AC02D4: jz      loc_140AC0362
 * 0000000140AC02DA: mov     rdi, 0B3B74BDEE4453415h
 * 0000000140AC02E4: mov     rax, [rsi+2A0h]
 * 0000000140AC02EB: mov     rcx, rbx
 * 0000000140AC02EE: sub     r14, r15
 * 0000000140AC02F1: call    j__guard_dispatch_icall_nop
 * 0000000140AC02F6: test    al, al
 * 0000000140AC02F8: jz      short loc_140AC0345
 * 0000000140AC02FA: cmp     [rsi+8C0h], r12d
 * 0000000140AC0301: jnz     short loc_140AC0345
 * 0000000140AC0303: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC030D: xor     edx, edx
 * 0000000140AC030F: add     rax, rsi
 * 0000000140AC0312: mov     rcx, rsi
 * 0000000140AC0315: mov     [rsi+8C8h], rax
 * 0000000140AC031C: lea     rax, [rdi+r13]
 * 0000000140AC0320: mov     [rsi+8D0h], rax
 * 0000000140AC0327: movsxd  rax, dword ptr [r13+0]
 * 0000000140AC032B: mov     [rsi+8D8h], rax
 * 0000000140AC0332: mov     [rsi+8E0h], rbx
 * 0000000140AC0339: mov     [rsi+8C0h], r15d
 * 0000000140AC0340: call    sub_140AD049C
 * 0000000140AC0345: add     dword ptr [rsi+7F0h], 100h
 * 0000000140AC034F: add     rbx, 1000h
 * 0000000140AC0356: test    r14, r14
 * 0000000140AC0359: jnz     short loc_140AC02E4
 * 0000000140AC035B: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC0362: mov     r14, [rsp+0C30h+var_BE0]
 * 0000000140AC0367: jmp     loc_140AC0567
 * 0000000140AC036C: mov     r14, [r13+8]
 * 0000000140AC0370: mov     r8d, [r13+10h]
 * 0000000140AC0374: mov     r9, r14
 * 0000000140AC0377: add     [rsi+7F0h], r8d
 * 0000000140AC037E: mov     rax, r14
 * 0000000140AC0381: mov     r11d, [rsi+7DCh]
 * 0000000140AC0388: mov     r15, [rsi+7E0h]
 * 0000000140AC038F: lea     rcx, [r14+r8]
 * 0000000140AC0393: cmp     r14, rcx
 * 0000000140AC0396: jnb     short loc_140AC03A8
 * 0000000140AC0398: mov     edx, 40h ; '@'
 * 0000000140AC039D: prefetchnta byte ptr [rax]
 * 0000000140AC03A0: add     rax, rdx
 * 0000000140AC03A3: cmp     rax, rcx
 * 0000000140AC03A6: jb      short loc_140AC039D
 * 0000000140AC03A8: mov     r10d, r8d
 * 0000000140AC03AB: xor     r12d, r12d
 * 0000000140AC03AE: shr     r10d, 7
 * 0000000140AC03B2: mov     rbx, r15
 * 0000000140AC03B5: test    r10d, r10d
 * 0000000140AC03B8: jz      short loc_140AC0432
 * 0000000140AC03BA: mov     rdi, 7010008004002001h
 * 0000000140AC03C4: mov     edx, 8
 * 0000000140AC03C9: lea     esi, [rdx-7]
 * 0000000140AC03CC: mov     rax, [r9]
 * 0000000140AC03CF: mov     ecx, r11d
 * 0000000140AC03D2: xor     rax, rbx
 * 0000000140AC03D5: mov     rbx, [r9+8]
 * 0000000140AC03D9: rol     rax, cl
 * 0000000140AC03DC: add     r9, 10h
 * 0000000140AC03E0: xor     rbx, rax
 * 0000000140AC03E3: rol     rbx, cl
 * 0000000140AC03E6: sub     rdx, rsi
 * 0000000140AC03E9: jnz     short loc_140AC03CC
 * 0000000140AC03EB: mov     rcx, r9
 * 0000000140AC03EE: sub     rcx, r14
 * 0000000140AC03F1: xor     rcx, r15
 * 0000000140AC03F4: mov     rax, rcx
 * 0000000140AC03F7: rol     rax, 11h
 * 0000000140AC03FB: xor     rcx, rax
 * 0000000140AC03FE: mov     rax, rdi
 * 0000000140AC0401: mul     rcx
 * 0000000140AC0404: xor     r11d, edx
 * 0000000140AC0407: mov     [rbp+0B30h+var_628], rdx
 * 0000000140AC040E: xor     r11d, eax
 * 0000000140AC0411: mov     rax, rsi
 * 0000000140AC0414: and     r11d, 3Fh
 * 0000000140AC0418: cmovz   r11d, eax
 * 0000000140AC041C: mov     eax, 0FFFFFFFFh
 * 0000000140AC0421: add     r10d, eax
 * 0000000140AC0424: jnz     short loc_140AC03C4
 * 0000000140AC0426: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC042B: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC0432: and     r8d, 7Fh
 * 0000000140AC0436: mov     r15d, 1
 * 0000000140AC043C: cmp     r8d, 8
 * 0000000140AC0440: jb      short loc_140AC045F
 * 0000000140AC0442: mov     edx, r8d
 * 0000000140AC0445: shr     rdx, 3
 * 0000000140AC0449: xor     rbx, [r9]
 * 0000000140AC044C: mov     ecx, r11d
 * 0000000140AC044F: rol     rbx, cl
 * 0000000140AC0452: add     r9, 8
 * 0000000140AC0456: add     r8d, 0FFFFFFF8h
 * 0000000140AC045A: sub     rdx, r15
 * 0000000140AC045D: jnz     short loc_140AC0449
 * 0000000140AC045F: test    r8d, r8d
 * 0000000140AC0462: jz      short loc_140AC0483
 * 0000000140AC0464: mov     esi, 0FFFFFFFFh
 * 0000000140AC0469: movzx   eax, byte ptr [r9]
 * 0000000140AC046D: mov     ecx, r11d
 * 0000000140AC0470: xor     rbx, rax
 * 0000000140AC0473: add     r9, r15
 * 0000000140AC0476: rol     rbx, cl
 * 0000000140AC0479: add     r8d, esi
 * 0000000140AC047C: jnz     short loc_140AC0469
 * 0000000140AC047E: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC0483: mov     rax, rbx
 * 0000000140AC0486: jmp     short loc_140AC048A
 * 0000000140AC0488: xor     ebx, eax
 * 0000000140AC048A: shr     rax, 1Fh
 * 0000000140AC048E: test    rax, rax
 * 0000000140AC0491: jnz     short loc_140AC0488
 * 0000000140AC0493: mov     r8d, [r13+14h]
 * 0000000140AC0497: btr     ebx, 1Fh
 * 0000000140AC049B: cmp     ebx, r8d
 * 0000000140AC049E: jz      loc_140AC0362
 * 0000000140AC04A4: mov     ecx, [r13+10h]
 * 0000000140AC04A8: mov     rdx, [r13+8]
 * 0000000140AC04AC: test    rcx, rcx
 * 0000000140AC04AF: jz      loc_140AC06AE
 * 0000000140AC04B5: mov     eax, [rsi+95Ch]
 * 0000000140AC04BB: mov     r9d, 40h ; '@'
 * 0000000140AC04C1: test    r9b, al
 * 0000000140AC04C4: jz      loc_140AC06AE
 * 0000000140AC04CA: mov     r12, cr8
 * 0000000140AC04CE: lea     eax, [r9-3Eh]
 * 0000000140AC04D2: mov     cr8, rax
 * 0000000140AC04D6: mov     r14, rdx
 * 0000000140AC04D9: lea     rax, [rcx-1]
 * 0000000140AC04DD: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140AC04E4: add     rax, rdx
 * 0000000140AC04E7: or      rax, 0FFFh
 * 0000000140AC04ED: mov     [rbp+0B30h+arg_8], rax
 * 0000000140AC04F4: lea     r13, [r14-1]
 * 0000000140AC04F8: movzx   r15d, r12b
 * 0000000140AC04FC: mov     rax, [rsi+458h]
 * 0000000140AC0503: xor     edx, edx
 * 0000000140AC0505: mov     rcx, r14
 * 0000000140AC0508: call    j__guard_dispatch_icall_nop
 * 0000000140AC050D: cmp     eax, 0C000022Dh
 * 0000000140AC0512: jnz     short loc_140AC0538
 * 0000000140AC0514: mov     eax, 1
 * 0000000140AC0519: cmp     r12b, al
 * 0000000140AC051C: ja      short loc_140AC0540
 * 0000000140AC051E: movzx   r15d, r12b
 * 0000000140AC0522: mov     cr8, r15
 * 0000000140AC0526: mov     al, [r14]
 * 0000000140AC0529: mov     rax, cr8
 * 0000000140AC052D: mov     eax, 2
 * 0000000140AC0532: mov     cr8, rax
 * 0000000140AC0536: jmp     short loc_140AC04FC
 * 0000000140AC0538: test    eax, eax
 * 0000000140AC053A: js      loc_140AC069E
 * 0000000140AC0540: mov     r8d, 1000h
 * 0000000140AC0546: add     r14, r8
 * 0000000140AC0549: add     r13, r8
 * 0000000140AC054C: cmp     r13, [rbp+0B30h+arg_8]
 * 0000000140AC0553: jnz     short loc_140AC04F8
 * 0000000140AC0555: mov     cr8, r15
 * 0000000140AC0559: xor     r12d, r12d
 * 0000000140AC055C: mov     r14, [rsp+0C30h+var_BE0]
 * 0000000140AC0561: mov     r15d, 1
 * 0000000140AC0567: mov     r13, 0B3B74BDEE4453415h
 * 0000000140AC0571: mov     eax, [r14+28h]
 * 0000000140AC0575: mov     ecx, 2
 * 0000000140AC057A: test    cl, al
 * 0000000140AC057C: jz      loc_140ABA5AF
 * 0000000140AC0582: mov     rbx, [r14+8]
 * 0000000140AC0586: test    al, 4
 * 0000000140AC0588: jz      loc_140AC0614
 * 0000000140AC058E: mov     rax, [rbx+70h]
 * 0000000140AC0592: mov     rdx, [r14+18h]
 * 0000000140AC0596: mov     rcx, [rax]
 * 0000000140AC0599: cmp     rcx, rdx
 * 0000000140AC059C: jz      short loc_140AC0614
 * 0000000140AC059E: mov     rax, [rsi+568h]
 * 0000000140AC05A5: mov     [rax], rcx
 * 0000000140AC05A8: mov     dword ptr [rax+10h], 100h
 * 0000000140AC05AF: cmp     [rsi+8C0h], r12d
 * 0000000140AC05B6: jnz     short loc_140AC0614
 * 0000000140AC05B8: mov     rax, [rsi+568h]
 * 0000000140AC05BF: xor     rcx, rdx
 * 0000000140AC05C2: mov     [rax+18h], rcx
 * 0000000140AC05C6: mov     rcx, [rbx+70h]
 * 0000000140AC05CA: cmp     [rsi+8C0h], r12d
 * 0000000140AC05D1: jnz     short loc_140AC0614
 * 0000000140AC05D3: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC05DD: xor     edx, edx
 * 0000000140AC05DF: add     rax, rsi
 * 0000000140AC05E2: mov     [rsi+8C8h], rax
 * 0000000140AC05E9: lea     rax, [r14+r13]
 * 0000000140AC05ED: mov     [rsi+8D0h], rax
 * 0000000140AC05F4: movsxd  rax, dword ptr [r14]
 * 0000000140AC05F7: mov     [rsi+8D8h], rax
 * 0000000140AC05FE: mov     [rsi+8E0h], rcx
 * 0000000140AC0605: mov     rcx, rsi
 * 0000000140AC0608: mov     [rsi+8C0h], r15d
 * 0000000140AC060F: call    sub_140AD049C
 * 0000000140AC0614: mov     eax, [r14+28h]
 * 0000000140AC0618: test    al, 8
 * 0000000140AC061A: jz      loc_140ABA5AF
 * 0000000140AC0620: mov     rax, [rbx+78h]
 * 0000000140AC0624: mov     rdx, [r14+20h]
 * 0000000140AC0628: mov     rcx, [rax]
 * 0000000140AC062B: cmp     rcx, rdx
 * 0000000140AC062E: jz      loc_140ABA5AF
 * 0000000140AC0634: mov     rax, [rsi+568h]
 * 0000000140AC063B: mov     [rax], rcx
 * 0000000140AC063E: mov     dword ptr [rax+10h], 100h
 * 0000000140AC0645: cmp     [rsi+8C0h], r12d
 * 0000000140AC064C: jnz     loc_140ABA5AF
 * 0000000140AC0652: mov     rax, [rsi+568h]
 * 0000000140AC0659: xor     rcx, rdx
 * 0000000140AC065C: mov     [rax+18h], rcx
 * 0000000140AC0660: cmp     [rsi+8C0h], r12d
 * 0000000140AC0667: mov     r12d, 1
 * 0000000140AC066D: mov     rcx, [rbx+78h]
 * 0000000140AC0671: jnz     loc_140ABA35B
 * 0000000140AC0677: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC0681: add     rax, rsi
 * 0000000140AC0684: mov     [rsi+8C8h], rax
 * 0000000140AC068B: lea     rax, [r14+r13]
 * 0000000140AC068F: mov     [rsi+8D0h], rax
 * 0000000140AC0696: movsxd  rax, dword ptr [r14]
 * 0000000140AC0699: jmp     loc_140ABA628
 * 0000000140AC069E: mov     cr8, r15
 * 0000000140AC06A2: mov     r13, [rsp+0C30h+var_BE0]
 * 0000000140AC06A7: xor     r12d, r12d
 * 0000000140AC06AA: mov     r8d, [r13+14h]
 * 0000000140AC06AE: cmp     [rsi+8C0h], r12d
 * 0000000140AC06B5: jnz     loc_140AC055C
 * 0000000140AC06BB: mov     eax, ebx
 * 0000000140AC06BD: mov     r15d, 1
 * 0000000140AC06C3: mov     ecx, r8d
 * 0000000140AC06C6: xor     rcx, rax
 * 0000000140AC06C9: mov     rax, [rsi+568h]
 * 0000000140AC06D0: mov     [rax+18h], rcx
 * 0000000140AC06D4: mov     rcx, [r13+8]
 * 0000000140AC06D8: cmp     [rsi+8C0h], r12d
 * 0000000140AC06DF: jnz     loc_140AC0362
 * 0000000140AC06E5: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC06EF: xor     edx, edx
 * 0000000140AC06F1: add     rax, rsi
 * 0000000140AC06F4: mov     [rsi+8C8h], rax
 * 0000000140AC06FB: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC0705: add     rax, r13
 * 0000000140AC0708: mov     [rsi+8D0h], rax
 * 0000000140AC070F: movsxd  rax, dword ptr [r13+0]
 * 0000000140AC0713: mov     [rsi+8D8h], rax
 * 0000000140AC071A: mov     [rsi+8E0h], rcx
 * 0000000140AC0721: mov     rcx, rsi
 * 0000000140AC0724: mov     [rsi+8C0h], r15d
 * 0000000140AC072B: call    sub_140AD049C
 * 0000000140AC0730: jmp     loc_140AC0362
 * 0000000140AC0735: xor     eax, eax
 * 0000000140AC0737: mov     [rsi+7ECh], eax
 * 0000000140AC073D: jmp     loc_140AC0559
 * 0000000140AC0742: mov     r14, [r13+8]
 * 0000000140AC0746: mov     r8d, [r13+10h]
 * 0000000140AC074A: mov     r9, r14
 * 0000000140AC074D: add     [rsi+7F0h], r8d
 * 0000000140AC0754: mov     rax, r14
 * 0000000140AC0757: mov     r11d, [rsi+7DCh]
 * 0000000140AC075E: mov     r15, [rsi+7E0h]
 * 0000000140AC0765: lea     rcx, [r14+r8]
 * 0000000140AC0769: cmp     r14, rcx
 * 0000000140AC076C: jnb     short loc_140AC077E
 * 0000000140AC076E: mov     edx, 40h ; '@'
 * 0000000140AC0773: prefetchnta byte ptr [rax]
 * 0000000140AC0776: add     rax, rdx
 * 0000000140AC0779: cmp     rax, rcx
 * 0000000140AC077C: jb      short loc_140AC0773
 * 0000000140AC077E: mov     r10d, r8d
 * 0000000140AC0781: xor     r12d, r12d
 * 0000000140AC0784: shr     r10d, 7
 * 0000000140AC0788: mov     rbx, r15
 * 0000000140AC078B: test    r10d, r10d
 * 0000000140AC078E: jz      short loc_140AC0803
 * 0000000140AC0790: lea     esi, [r12+1]
 * 0000000140AC0795: mov     rdi, 7010008004002001h
 * 0000000140AC079F: mov     eax, 8
 * 0000000140AC07A4: xor     rbx, [r9]
 * 0000000140AC07A7: mov     ecx, r11d
 * 0000000140AC07AA: rol     rbx, cl
 * 0000000140AC07AD: xor     rbx, [r9+8]
 * 0000000140AC07B1: add     r9, 10h
 * 0000000140AC07B5: rol     rbx, cl
 * 0000000140AC07B8: sub     rax, rsi
 * 0000000140AC07BB: jnz     short loc_140AC07A4
 * 0000000140AC07BD: mov     rcx, r9
 * 0000000140AC07C0: sub     rcx, r14
 * 0000000140AC07C3: xor     rcx, r15
 * 0000000140AC07C6: mov     rax, rcx
 * 0000000140AC07C9: rol     rax, 11h
 * 0000000140AC07CD: xor     rcx, rax
 * 0000000140AC07D0: mov     rax, rdi
 * 0000000140AC07D3: mul     rcx
 * 0000000140AC07D6: xor     r11d, edx
 * 0000000140AC07D9: mov     [rbp+0B30h+var_620], rdx
 * 0000000140AC07E0: xor     r11d, eax
 * 0000000140AC07E3: mov     edx, 0FFFFFFFFh
 * 0000000140AC07E8: and     r11d, 3Fh
 * 0000000140AC07EC: cmovz   r11d, esi
 * 0000000140AC07F0: add     r10d, edx
 * 0000000140AC07F3: jnz     short loc_140AC079F
 * 0000000140AC07F5: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC07FA: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC0801: jmp     short loc_140AC0808
 * 0000000140AC0803: mov     edx, 0FFFFFFFFh
 * 0000000140AC0808: and     r8d, 7Fh
 * 0000000140AC080C: mov     r15d, 1
 * 0000000140AC0812: cmp     r8d, 8
 * 0000000140AC0816: jb      short loc_140AC0835
 * 0000000140AC0818: mov     eax, r8d
 * 0000000140AC081B: shr     rax, 3
 * 0000000140AC081F: xor     rbx, [r9]
 * 0000000140AC0822: mov     ecx, r11d
 * 0000000140AC0825: rol     rbx, cl
 * 0000000140AC0828: add     r9, 8
 * 0000000140AC082C: add     r8d, 0FFFFFFF8h
 * 0000000140AC0830: sub     rax, r15
 * 0000000140AC0833: jnz     short loc_140AC081F
 * 0000000140AC0835: test    r8d, r8d
 * 0000000140AC0838: jz      short loc_140AC084F
 * 0000000140AC083A: movzx   eax, byte ptr [r9]
 * 0000000140AC083E: mov     ecx, r11d
 * 0000000140AC0841: xor     rbx, rax
 * 0000000140AC0844: add     r9, r15
 * 0000000140AC0847: rol     rbx, cl
 * 0000000140AC084A: add     r8d, edx
 * 0000000140AC084D: jnz     short loc_140AC083A
 * 0000000140AC084F: mov     rax, rbx
 * 0000000140AC0852: jmp     short loc_140AC0856
 * 0000000140AC0854: xor     ebx, eax
 * 0000000140AC0856: shr     rax, 1Fh
 * 0000000140AC085A: test    rax, rax
 * 0000000140AC085D: jnz     short loc_140AC0854
 * 0000000140AC085F: mov     r14, [rsp+0C30h+var_BE0]
 * 0000000140AC0864: btr     ebx, 1Fh
 * 0000000140AC0868: mov     r13d, r12d
 * 0000000140AC086B: cmp     ebx, [r14+14h]
 * 0000000140AC086F: jz      loc_140AC0567
 * 0000000140AC0875: cmp     [r14], r12d
 * 0000000140AC0878: jnz     short loc_140AC0882
 * 0000000140AC087A: cmp     [r14+18h], r12d
 * 0000000140AC087E: cmovnz  r13d, r15d
 * 0000000140AC0882: mov     ecx, [r14+10h]
 * 0000000140AC0886: mov     rdx, [r14+8]
 * 0000000140AC088A: test    rcx, rcx
 * 0000000140AC088D: jz      loc_140AC0954
 * 0000000140AC0893: mov     eax, [rsi+95Ch]
 * 0000000140AC0899: mov     r8d, 40h ; '@'
 * 0000000140AC089F: test    r8b, al
 * 0000000140AC08A2: jz      loc_140AC0954
 * 0000000140AC08A8: mov     r12, cr8
 * 0000000140AC08AC: lea     eax, [r8-3Eh]
 * 0000000140AC08B0: mov     cr8, rax
 * 0000000140AC08B4: mov     r14, rdx
 * 0000000140AC08B7: lea     rax, [rcx-1]
 * 0000000140AC08BB: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140AC08C2: add     rax, rdx
 * 0000000140AC08C5: or      rax, 0FFFh
 * 0000000140AC08CB: mov     [rsp+0C30h+var_BC8], rax
 * 0000000140AC08D0: lea     rax, [r14-1]
 * 0000000140AC08D4: mov     [rbp+0B30h+arg_8], rax
 * 0000000140AC08DB: movzx   r15d, r12b
 * 0000000140AC08DF: mov     rax, [rsi+458h]
 * 0000000140AC08E6: xor     edx, edx
 * 0000000140AC08E8: mov     rcx, r14
 * 0000000140AC08EB: call    j__guard_dispatch_icall_nop
 * 0000000140AC08F0: cmp     eax, 0C000022Dh
 * 0000000140AC08F5: jnz     short loc_140AC091E
 * 0000000140AC08F7: test    r13d, r13d
 * 0000000140AC08FA: jnz     short loc_140AC0948
 * 0000000140AC08FC: lea     eax, [r13+1]
 * 0000000140AC0900: cmp     r12b, al
 * 0000000140AC0903: ja      short loc_140AC0922
 * 0000000140AC0905: movzx   r15d, r12b
 * 0000000140AC0909: mov     cr8, r15
 * 0000000140AC090D: mov     al, [r14]
 * 0000000140AC0910: mov     rax, cr8
 * 0000000140AC0914: lea     eax, [r13+2]
 * 0000000140AC0918: mov     cr8, rax
 * 0000000140AC091C: jmp     short loc_140AC08DF
 * 0000000140AC091E: test    eax, eax
 * 0000000140AC0920: js      short loc_140AC0948
 * 0000000140AC0922: mov     rax, [rbp+0B30h+arg_8]
 * 0000000140AC0929: mov     r8d, 1000h
 * 0000000140AC092F: add     rax, r8
 * 0000000140AC0932: add     r14, r8
 * 0000000140AC0935: mov     [rbp+0B30h+arg_8], rax
 * 0000000140AC093C: cmp     rax, [rsp+0C30h+var_BC8]
 * 0000000140AC0941: jnz     short loc_140AC08DB
 * 0000000140AC0943: jmp     loc_140AC0555
 * 0000000140AC0948: mov     cr8, r15
 * 0000000140AC094C: mov     r14, [rsp+0C30h+var_BE0]
 * 0000000140AC0951: xor     r12d, r12d
 * 0000000140AC0954: mov     eax, [r14+14h]
 * 0000000140AC0958: cmp     [rsi+8C0h], r12d
 * 0000000140AC095F: jnz     loc_140AC0561
 * 0000000140AC0965: mov     ecx, ebx
 * 0000000140AC0967: mov     r13, 0B3B74BDEE4453415h
 * 0000000140AC0971: xor     rcx, rax
 * 0000000140AC0974: mov     r15d, 1
 * 0000000140AC097A: mov     rax, [rsi+568h]
 * 0000000140AC0981: mov     [rax+18h], rcx
 * 0000000140AC0985: mov     rcx, [r14+8]
 * 0000000140AC0989: cmp     [rsi+8C0h], r12d
 * 0000000140AC0990: jnz     loc_140AC0571
 * 0000000140AC0996: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC09A0: xor     edx, edx
 * 0000000140AC09A2: add     rax, rsi
 * 0000000140AC09A5: mov     [rsi+8C8h], rax
 * 0000000140AC09AC: lea     rax, [r14+r13]
 * 0000000140AC09B0: mov     [rsi+8D0h], rax
 * 0000000140AC09B7: movsxd  rax, dword ptr [r14]
 * 0000000140AC09BA: mov     [rsi+8D8h], rax
 * 0000000140AC09C1: mov     [rsi+8E0h], rcx
 * 0000000140AC09C8: mov     rcx, rsi
 * 0000000140AC09CB: mov     [rsi+8C0h], r15d
 * 0000000140AC09D2: call    sub_140AD049C
 * 0000000140AC09D7: jmp     loc_140AC0571
 * 0000000140AC09DC: mov     rdx, r13
 * 0000000140AC09DF: mov     rcx, rsi
 * 0000000140AC09E2: call    sub_1403F974C
 * 0000000140AC09E7: jmp     loc_140ABA5AF
 * 0000000140AC09EC: mov     rdx, r13
 * 0000000140AC09EF: mov     rcx, rsi
 * 0000000140AC09F2: call    sub_1403FA684
 * 0000000140AC09F7: jmp     loc_140ABA5AF
 * 0000000140AC09FC: mov     eax, [rsi+7F8h]
 * 0000000140AC0A02: mov     r12d, 1
 * 0000000140AC0A08: test    r12b, al
 * 0000000140AC0A0B: jz      loc_140ABA35B
 * 0000000140AC0A11: xor     r14d, r14d
 * 0000000140AC0A14: cmp     [rsi+948h], r14
 * 0000000140AC0A1B: jz      short loc_140AC0A54
 * 0000000140AC0A1D: mov     eax, [rsi+95Ch]
 * 0000000140AC0A23: test    al, 4
 * 0000000140AC0A25: jnz     short loc_140AC0A54
 * 0000000140AC0A27: mov     rax, [rsi+3C0h]
 * 0000000140AC0A2E: lea     rdx, [rbp+0B30h+var_7F0]
 * 0000000140AC0A35: xor     r9d, r9d
 * 0000000140AC0A38: lea     ecx, [r12+19h]
 * 0000000140AC0A3D: xor     r8d, r8d
 * 0000000140AC0A40: call    j__guard_dispatch_icall_nop
 * 0000000140AC0A45: mov     rbx, [rbp+0B30h+var_7F0]
 * 0000000140AC0A4C: test    eax, eax
 * 0000000140AC0A4E: cmovs   rbx, r14
 * 0000000140AC0A52: jmp     short loc_140AC0A57
 * 0000000140AC0A54: mov     rbx, r14
 * 0000000140AC0A57: mov     rax, [rsi+3A0h]
 * 0000000140AC0A5E: xor     ecx, ecx
 * 0000000140AC0A60: mov     [rsp+0C30h+var_BD8], rbx
 * 0000000140AC0A65: mov     r12d, r14d
 * 0000000140AC0A68: mov     [rsp+0C30h+var_BC0], r14d
 * 0000000140AC0A6D: call    j__guard_dispatch_icall_nop
 * 0000000140AC0A72: mov     r13, rax
 * 0000000140AC0A75: test    rax, rax
 * 0000000140AC0A78: jz      loc_140AC124E
 * 0000000140AC0A7E: mov     rcx, r13
 * 0000000140AC0A81: cmp     rbx, r13
 * 0000000140AC0A84: jnz     loc_140AC0E32
 * 0000000140AC0A8A: mov     rdi, [rsp+0C30h+var_BE0]
 * 0000000140AC0A8F: mov     rax, [rsi+390h]
 * 0000000140AC0A96: mov     r15, rdi
 * 0000000140AC0A99: call    j__guard_dispatch_icall_nop
 * 0000000140AC0A9E: test    eax, eax
 * 0000000140AC0AA0: js      loc_140AC1224
 * 0000000140AC0AA6: mov     rax, [rsi+3D0h]
 * 0000000140AC0AAD: mov     rcx, r13
 * 0000000140AC0AB0: call    j__guard_dispatch_icall_nop
 * 0000000140AC0AB5: movzx   ebx, al
 * 0000000140AC0AB8: lea     rdx, [rbp+0B30h+arg_18]
 * 0000000140AC0ABF: mov     rax, [rsi+3D8h]
 * 0000000140AC0AC6: mov     rcx, r13
 * 0000000140AC0AC9: call    j__guard_dispatch_icall_nop
 * 0000000140AC0ACE: mov     [rbp+0B30h+var_B5E], al
 * 0000000140AC0AD1: mov     rcx, r13
 * 0000000140AC0AD4: mov     rax, [rsi+3E0h]
 * 0000000140AC0ADB: call    j__guard_dispatch_icall_nop
 * 0000000140AC0AE0: mov     [rsp+0C30h+var_BC8], rax
 * 0000000140AC0AE5: cmp     bl, 61h ; 'a'
 * 0000000140AC0AE8: jz      short loc_140AC0B5F
 * 0000000140AC0AEA: cmp     [rsi+8C0h], r14d
 * 0000000140AC0AF1: jnz     short loc_140AC0B5F
 * 0000000140AC0AF3: mov     rax, [rsi+568h]
 * 0000000140AC0AFA: mov     ecx, ebx
 * 0000000140AC0AFC: xor     rcx, 61h
 * 0000000140AC0B00: mov     r12d, 1
 * 0000000140AC0B06: mov     [rax+18h], rcx
 * 0000000140AC0B0A: cmp     [rsi+8C0h], r14d
 * 0000000140AC0B11: jnz     short loc_140AC0B65
 * 0000000140AC0B13: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC0B1D: xor     edx, edx
 * 0000000140AC0B1F: add     rax, rsi
 * 0000000140AC0B22: mov     rcx, rsi
 * 0000000140AC0B25: mov     [rsi+8C8h], rax
 * 0000000140AC0B2C: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC0B36: add     rax, rdi
 * 0000000140AC0B39: mov     [rsi+8D0h], rax
 * 0000000140AC0B40: movsxd  rax, dword ptr [rdi]
 * 0000000140AC0B43: mov     [rsi+8D8h], rax
 * 0000000140AC0B4A: mov     [rsi+8E0h], r13
 * 0000000140AC0B51: mov     [rsi+8C0h], r12d
 * 0000000140AC0B58: call    sub_140AD049C
 * 0000000140AC0B5D: jmp     short loc_140AC0B65
 * 0000000140AC0B5F: mov     r12d, 1
 * 0000000140AC0B65: xor     edx, edx
 * 0000000140AC0B67: mov     ecx, ebx
 * 0000000140AC0B69: and     ecx, 7
 * 0000000140AC0B6C: mov     byte ptr [rbp+0B30h+arg_8], dl
 * 0000000140AC0B72: sub     ecx, 1
 * 0000000140AC0B75: jz      short loc_140AC0BE5
 * 0000000140AC0B77: cmp     ecx, 1
 * 0000000140AC0B7A: jz      short loc_140AC0BD5
 * 0000000140AC0B7C: test    bl, 7
 * 0000000140AC0B7F: jz      short loc_140AC0BE8
 * 0000000140AC0B81: cmp     [rsi+8C0h], edx
 * 0000000140AC0B87: jnz     short loc_140AC0BE8
 * 0000000140AC0B89: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC0B93: mov     rcx, rsi
 * 0000000140AC0B96: add     rax, rsi
 * 0000000140AC0B99: mov     [rsi+8C8h], rax
 * 0000000140AC0BA0: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC0BAA: add     rax, r15
 * 0000000140AC0BAD: mov     [rsi+8D0h], rax
 * 0000000140AC0BB4: movsxd  rax, dword ptr [rdi]
 * 0000000140AC0BB7: mov     [rsi+8D8h], rax
 * 0000000140AC0BBE: mov     [rsi+8E0h], r13
 * 0000000140AC0BC5: mov     [rsi+8C0h], r12d
 * 0000000140AC0BCC: call    sub_140AD049C
 * 0000000140AC0BD1: xor     edx, edx
 * 0000000140AC0BD3: jmp     short loc_140AC0BE8
 * 0000000140AC0BD5: mov     eax, 10h
 * 0000000140AC0BDA: mov     r14b, al
 * 0000000140AC0BDD: mov     byte ptr [rbp+0B30h+arg_8], al
 * 0000000140AC0BE3: jmp     short loc_140AC0BE8
 * 0000000140AC0BE5: mov     r14b, 30h ; '0'
 * 0000000140AC0BE8: mov     r12, [rsi+5A0h]
 * 0000000140AC0BEF: mov     dil, [rbp+0B30h+var_B5E]
 * 0000000140AC0BF3: shr     rbx, 4
 * 0000000140AC0BF7: or      r14b, [r12+rbx*2]
 * 0000000140AC0BFB: cmp     r14b, dil
 * 0000000140AC0BFE: mov     r14, [rsp+0C30h+var_BE0]
 * 0000000140AC0C03: jz      short loc_140AC0C5B
 * 0000000140AC0C05: cmp     [rsi+8C0h], edx
 * 0000000140AC0C0B: jnz     short loc_140AC0C5B
 * 0000000140AC0C0D: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC0C17: xor     edx, edx
 * 0000000140AC0C19: add     rax, rsi
 * 0000000140AC0C1C: mov     rcx, rsi
 * 0000000140AC0C1F: mov     [rsi+8C8h], rax
 * 0000000140AC0C26: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC0C30: add     rax, r15
 * 0000000140AC0C33: mov     [rsi+8D0h], rax
 * 0000000140AC0C3A: movsxd  rax, dword ptr [r14]
 * 0000000140AC0C3D: mov     [rsi+8D8h], rax
 * 0000000140AC0C44: mov     eax, 1
 * 0000000140AC0C49: mov     [rsi+8E0h], r13
 * 0000000140AC0C50: mov     [rsi+8C0h], eax
 * 0000000140AC0C56: call    sub_140AD049C
 * 0000000140AC0C5B: mov     al, [r12+rbx*2+1]
 * 0000000140AC0C60: mov     ebx, 1
 * 0000000140AC0C65: or      al, byte ptr [rbp+0B30h+arg_8]
 * 0000000140AC0C6B: cmp     al, [rbp+0B30h+arg_18]
 * 0000000140AC0C71: jz      short loc_140AC0CC6
 * 0000000140AC0C73: xor     eax, eax
 * 0000000140AC0C75: cmp     [rsi+8C0h], eax
 * 0000000140AC0C7B: jnz     short loc_140AC0CC6
 * 0000000140AC0C7D: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC0C87: xor     edx, edx
 * 0000000140AC0C89: add     rax, rsi
 * 0000000140AC0C8C: mov     rcx, rsi
 * 0000000140AC0C8F: mov     [rsi+8C8h], rax
 * 0000000140AC0C96: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC0CA0: add     rax, r15
 * 0000000140AC0CA3: mov     [rsi+8D0h], rax
 * 0000000140AC0CAA: movsxd  rax, dword ptr [r14]
 * 0000000140AC0CAD: mov     [rsi+8D8h], rax
 * 0000000140AC0CB4: mov     [rsi+8E0h], r13
 * 0000000140AC0CBB: mov     [rsi+8C0h], ebx
 * 0000000140AC0CC1: call    sub_140AD049C
 * 0000000140AC0CC6: cmp     r13, [rsi+4B8h]
 * 0000000140AC0CCD: jz      loc_140AC11FD
 * 0000000140AC0CD3: mov     rax, [rsi+3C8h]
 * 0000000140AC0CDA: mov     edx, ebx
 * 0000000140AC0CDC: mov     rcx, r13
 * 0000000140AC0CDF: call    j__guard_dispatch_icall_nop
 * 0000000140AC0CE4: mov     rbx, rax
 * 0000000140AC0CE7: test    rax, rax
 * 0000000140AC0CEA: jz      loc_140AC11FD
 * 0000000140AC0CF0: mov     rcx, [rax]
 * 0000000140AC0CF3: mov     r12, rax
 * 0000000140AC0CF6: test    rcx, rcx
 * 0000000140AC0CF9: jz      loc_140AC11EE
 * 0000000140AC0CFF: mov     r12, [rsp+0C30h+var_BC8]
 * 0000000140AC0D04: mov     [rbp+0B30h+arg_8], rax
 * 0000000140AC0D0B: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140AC0D0F: mov     [rbx], rcx
 * 0000000140AC0D12: mov     rax, [rsi+1D0h]
 * 0000000140AC0D19: call    j__guard_dispatch_icall_nop
 * 0000000140AC0D1E: mov     rcx, [rbx+8]
 * 0000000140AC0D22: movzx   edx, [rbp+0B30h+arg_18]
 * 0000000140AC0D29: mov     r14, rcx
 * 0000000140AC0D2C: movzx   eax, dil
 * 0000000140AC0D30: and     r14, 0FFFFFFFFFFFF0000h
 * 0000000140AC0D37: cmp     r14, r12
 * 0000000140AC0D3A: cmovz   edx, eax
 * 0000000140AC0D3D: mov     rax, [rsi+3E8h]
 * 0000000140AC0D44: shr     rcx, 6
 * 0000000140AC0D48: and     cl, 0Fh
 * 0000000140AC0D4B: call    j__guard_dispatch_icall_nop
 * 0000000140AC0D50: xor     r9d, r9d
 * 0000000140AC0D53: test    eax, eax
 * 0000000140AC0D55: jnz     loc_140AC0E1D
 * 0000000140AC0D5B: test    dword ptr [rsi+958h], 40000000h
 * 0000000140AC0D65: lea     r10d, [r9+1]
 * 0000000140AC0D69: jz      short loc_140AC0DB2
 * 0000000140AC0D6B: mov     rcx, [rsi+0A48h]
 * 0000000140AC0D72: lea     edx, [rax+30h]
 * 0000000140AC0D75: lea     r8d, [r9+6]
 * 0000000140AC0D79: mov     rax, [r15]
 * 0000000140AC0D7C: add     edx, 0FFFFFFF8h
 * 0000000140AC0D7F: mov     [rcx], rax
 * 0000000140AC0D82: add     r15, 8
 * 0000000140AC0D86: add     rcx, 8
 * 0000000140AC0D8A: sub     r8, r10
 * 0000000140AC0D8D: jnz     short loc_140AC0D79
 * 0000000140AC0D8F: test    edx, edx
 * 0000000140AC0D91: jz      short loc_140AC0DAB
 * 0000000140AC0D93: mov     edi, 0FFFFFFFFh
 * 0000000140AC0D98: mov     al, [r15]
 * 0000000140AC0D9B: add     r15, r10
 * 0000000140AC0D9E: mov     [rcx], al
 * 0000000140AC0DA0: add     rcx, r10
 * 0000000140AC0DA3: add     edx, edi
 * 0000000140AC0DA5: jnz     short loc_140AC0D98
 * 0000000140AC0DA7: mov     dil, [rbp+0B30h+var_B5E]
 * 0000000140AC0DAB: mov     r15, [rsi+0A48h]
 * 0000000140AC0DB2: mov     [r15+18h], r14
 * 0000000140AC0DB6: mov     rax, [rbx]
 * 0000000140AC0DB9: mov     [r15+20h], rax
 * 0000000140AC0DBD: mov     eax, [rbx+8]
 * 0000000140AC0DC0: shr     rax, 6
 * 0000000140AC0DC4: and     al, 0Fh
 * 0000000140AC0DC6: mov     [r15+28h], al
 * 0000000140AC0DCA: cmp     [rsi+8C0h], r9d
 * 0000000140AC0DD1: jnz     short loc_140AC0E1D
 * 0000000140AC0DD3: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC0DDD: xor     edx, edx
 * 0000000140AC0DDF: add     rax, rsi
 * 0000000140AC0DE2: mov     rcx, rsi
 * 0000000140AC0DE5: mov     [rsi+8C8h], rax
 * 0000000140AC0DEC: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC0DF6: add     rax, r15
 * 0000000140AC0DF9: mov     [rsi+8D0h], rax
 * 0000000140AC0E00: movsxd  rax, dword ptr [r15]
 * 0000000140AC0E03: mov     [rsi+8D8h], rax
 * 0000000140AC0E0A: mov     [rsi+8E0h], r13
 * 0000000140AC0E11: mov     [rsi+8C0h], r10d
 * 0000000140AC0E18: call    sub_140AD049C
 * 0000000140AC0E1D: add     rbx, 30h ; '0'
 * 0000000140AC0E21: mov     rcx, [rbx]
 * 0000000140AC0E24: test    rcx, rcx
 * 0000000140AC0E27: jnz     loc_140AC0D0B
 * 0000000140AC0E2D: jmp     loc_140AC11E7
 * 0000000140AC0E32: mov     rax, [rsi+3B8h]
 * 0000000140AC0E39: call    j__guard_dispatch_icall_nop
 * 0000000140AC0E3E: test    eax, eax
 * 0000000140AC0E40: jz      loc_140AC1224
 * 0000000140AC0E46: mov     r15, [rsp+0C30h+var_BE0]
 * 0000000140AC0E4B: mov     rcx, r13
 * 0000000140AC0E4E: mov     rax, [rsi+390h]
 * 0000000140AC0E55: mov     r14, r15
 * 0000000140AC0E58: call    j__guard_dispatch_icall_nop
 * 0000000140AC0E5D: test    eax, eax
 * 0000000140AC0E5F: js      loc_140AC1221
 * 0000000140AC0E65: mov     rax, [rsi+3D0h]
 * 0000000140AC0E6C: mov     rcx, r13
 * 0000000140AC0E6F: call    j__guard_dispatch_icall_nop
 * 0000000140AC0E74: movzx   ebx, al
 * 0000000140AC0E77: lea     rdx, [rbp+0B30h+var_B60]
 * 0000000140AC0E7B: mov     rax, [rsi+3D8h]
 * 0000000140AC0E82: mov     rcx, r13
 * 0000000140AC0E85: call    j__guard_dispatch_icall_nop
 * 0000000140AC0E8A: movzx   edi, al
 * 0000000140AC0E8D: mov     rcx, r13
 * 0000000140AC0E90: mov     rax, [rsi+3E0h]
 * 0000000140AC0E97: call    j__guard_dispatch_icall_nop
 * 0000000140AC0E9C: xor     edx, edx
 * 0000000140AC0E9E: mov     [rsp+0C30h+var_BB8], rax
 * 0000000140AC0EA3: cmp     bl, 61h ; 'a'
 * 0000000140AC0EA6: jz      short loc_140AC0F19
 * 0000000140AC0EA8: cmp     [rsi+8C0h], edx
 * 0000000140AC0EAE: jnz     short loc_140AC0F19
 * 0000000140AC0EB0: mov     rax, [rsi+568h]
 * 0000000140AC0EB7: lea     r12d, [rdx+1]
 * 0000000140AC0EBB: mov     ecx, ebx
 * 0000000140AC0EBD: xor     rcx, 61h
 * 0000000140AC0EC1: mov     [rax+18h], rcx
 * 0000000140AC0EC5: cmp     [rsi+8C0h], edx
 * 0000000140AC0ECB: jnz     short loc_140AC0F1F
 * 0000000140AC0ECD: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC0ED7: mov     rcx, rsi
 * 0000000140AC0EDA: add     rax, rsi
 * 0000000140AC0EDD: mov     [rsi+8C8h], rax
 * 0000000140AC0EE4: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC0EEE: add     rax, r15
 * 0000000140AC0EF1: mov     [rsi+8D0h], rax
 * 0000000140AC0EF8: movsxd  rax, dword ptr [r15]
 * 0000000140AC0EFB: mov     [rsi+8D8h], rax
 * 0000000140AC0F02: mov     [rsi+8E0h], r13
 * 0000000140AC0F09: mov     [rsi+8C0h], r12d
 * 0000000140AC0F10: call    sub_140AD049C
 * 0000000140AC0F15: xor     edx, edx
 * 0000000140AC0F17: jmp     short loc_140AC0F1F
 * 0000000140AC0F19: mov     r12d, 1
 * 0000000140AC0F1F: mov     ecx, ebx
 * 0000000140AC0F21: mov     byte ptr [rbp+0B30h+arg_8], dl
 * 0000000140AC0F27: and     ecx, 7
 * 0000000140AC0F2A: mov     r15b, dl
 * 0000000140AC0F2D: sub     ecx, 1
 * 0000000140AC0F30: jz      short loc_140AC0FA7
 * 0000000140AC0F32: cmp     ecx, 1
 * 0000000140AC0F35: jz      short loc_140AC0F97
 * 0000000140AC0F37: test    bl, 7
 * 0000000140AC0F3A: jz      short loc_140AC0FAA
 * 0000000140AC0F3C: cmp     [rsi+8C0h], edx
 * 0000000140AC0F42: jnz     short loc_140AC0FAA
 * 0000000140AC0F44: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC0F4E: xor     edx, edx
 * 0000000140AC0F50: add     rax, rsi
 * 0000000140AC0F53: mov     rcx, rsi
 * 0000000140AC0F56: mov     [rsi+8C8h], rax
 * 0000000140AC0F5D: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC0F67: add     rax, r14
 * 0000000140AC0F6A: mov     [rsi+8D0h], rax
 * 0000000140AC0F71: mov     rax, [rsp+0C30h+var_BE0]
 * 0000000140AC0F76: movsxd  rax, dword ptr [rax]
 * 0000000140AC0F79: mov     [rsi+8D8h], rax
 * 0000000140AC0F80: mov     [rsi+8E0h], r13
 * 0000000140AC0F87: mov     [rsi+8C0h], r12d
 * 0000000140AC0F8E: call    sub_140AD049C
 * 0000000140AC0F93: xor     edx, edx
 * 0000000140AC0F95: jmp     short loc_140AC0FAA
 * 0000000140AC0F97: mov     eax, 10h
 * 0000000140AC0F9C: mov     r15b, al
 * 0000000140AC0F9F: mov     byte ptr [rbp+0B30h+arg_8], al
 * 0000000140AC0FA5: jmp     short loc_140AC0FAA
 * 0000000140AC0FA7: mov     r15b, 30h ; '0'
 * 0000000140AC0FAA: mov     r12, [rsi+5A0h]
 * 0000000140AC0FB1: shr     rbx, 4
 * 0000000140AC0FB5: mov     al, [r12+rbx*2]
 * 0000000140AC0FB9: or      al, r15b
 * 0000000140AC0FBC: mov     r15, [rsp+0C30h+var_BE0]
 * 0000000140AC0FC1: cmp     al, dil
 * 0000000140AC0FC4: jz      short loc_140AC101C
 * 0000000140AC0FC6: cmp     [rsi+8C0h], edx
 * 0000000140AC0FCC: jnz     short loc_140AC101C
 * 0000000140AC0FCE: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC0FD8: xor     edx, edx
 * 0000000140AC0FDA: add     rax, rsi
 * 0000000140AC0FDD: mov     rcx, rsi
 * 0000000140AC0FE0: mov     [rsi+8C8h], rax
 * 0000000140AC0FE7: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC0FF1: add     rax, r14
 * 0000000140AC0FF4: mov     [rsi+8D0h], rax
 * 0000000140AC0FFB: movsxd  rax, dword ptr [r15]
 * 0000000140AC0FFE: mov     [rsi+8D8h], rax
 * 0000000140AC1005: mov     eax, 1
 * 0000000140AC100A: mov     [rsi+8E0h], r13
 * 0000000140AC1011: mov     [rsi+8C0h], eax
 * 0000000140AC1017: call    sub_140AD049C
 * 0000000140AC101C: mov     al, [r12+rbx*2+1]
 * 0000000140AC1021: mov     ebx, 1
 * 0000000140AC1026: or      al, byte ptr [rbp+0B30h+arg_8]
 * 0000000140AC102C: cmp     al, [rbp+0B30h+var_B60]
 * 0000000140AC102F: jz      short loc_140AC1084
 * 0000000140AC1031: xor     eax, eax
 * 0000000140AC1033: cmp     [rsi+8C0h], eax
 * 0000000140AC1039: jnz     short loc_140AC1084
 * 0000000140AC103B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC1045: xor     edx, edx
 * 0000000140AC1047: add     rax, rsi
 * 0000000140AC104A: mov     rcx, rsi
 * 0000000140AC104D: mov     [rsi+8C8h], rax
 * 0000000140AC1054: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC105E: add     rax, r14
 * 0000000140AC1061: mov     [rsi+8D0h], rax
 * 0000000140AC1068: movsxd  rax, dword ptr [r15]
 * 0000000140AC106B: mov     [rsi+8D8h], rax
 * 0000000140AC1072: mov     [rsi+8E0h], r13
 * 0000000140AC1079: mov     [rsi+8C0h], ebx
 * 0000000140AC107F: call    sub_140AD049C
 * 0000000140AC1084: cmp     r13, [rsi+4B8h]
 * 0000000140AC108B: jz      loc_140AC11FD
 * 0000000140AC1091: mov     rax, [rsi+3C8h]
 * 0000000140AC1098: mov     edx, ebx
 * 0000000140AC109A: mov     rcx, r13
 * 0000000140AC109D: call    j__guard_dispatch_icall_nop
 * 0000000140AC10A2: mov     rbx, rax
 * 0000000140AC10A5: test    rax, rax
 * 0000000140AC10A8: jz      loc_140AC11FD
 * 0000000140AC10AE: mov     rcx, [rax]
 * 0000000140AC10B1: mov     r12, rax
 * 0000000140AC10B4: test    rcx, rcx
 * 0000000140AC10B7: jz      loc_140AC11EE
 * 0000000140AC10BD: mov     r12, [rsp+0C30h+var_BB8]
 * 0000000140AC10C2: mov     [rbp+0B30h+arg_8], rax
 * 0000000140AC10C9: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140AC10CD: mov     [rbx], rcx
 * 0000000140AC10D0: mov     rax, [rsi+1D0h]
 * 0000000140AC10D7: call    j__guard_dispatch_icall_nop
 * 0000000140AC10DC: mov     rcx, [rbx+8]
 * 0000000140AC10E0: movzx   edx, [rbp+0B30h+var_B60]
 * 0000000140AC10E4: mov     r15, rcx
 * 0000000140AC10E7: mov     rax, [rsi+3E8h]
 * 0000000140AC10EE: and     r15, 0FFFFFFFFFFFF0000h
 * 0000000140AC10F5: cmp     r15, r12
 * 0000000140AC10F8: cmovz   edx, edi
 * 0000000140AC10FB: shr     rcx, 6
 * 0000000140AC10FF: and     cl, 0Fh
 * 0000000140AC1102: call    j__guard_dispatch_icall_nop
 * 0000000140AC1107: xor     r9d, r9d
 * 0000000140AC110A: test    eax, eax
 * 0000000140AC110C: jnz     loc_140AC11D7
 * 0000000140AC1112: test    dword ptr [rsi+958h], 40000000h
 * 0000000140AC111C: lea     r10d, [r9+1]
 * 0000000140AC1120: jz      short loc_140AC116C
 * 0000000140AC1122: mov     rcx, [rsi+0A48h]
 * 0000000140AC1129: lea     edx, [rax+30h]
 * 0000000140AC112C: lea     r8d, [r9+6]
 * 0000000140AC1130: mov     rax, [r14]
 * 0000000140AC1133: add     edx, 0FFFFFFF8h
 * 0000000140AC1136: mov     [rcx], rax
 * 0000000140AC1139: add     r14, 8
 * 0000000140AC113D: add     rcx, 8
 * 0000000140AC1141: sub     r8, r10
 * 0000000140AC1144: jnz     short loc_140AC1130
 * 0000000140AC1146: test    edx, edx
 * 0000000140AC1148: jz      short loc_140AC1165
 * 0000000140AC114A: mov     r12d, 0FFFFFFFFh
 * 0000000140AC1150: mov     al, [r14]
 * 0000000140AC1153: add     r14, r10
 * 0000000140AC1156: mov     [rcx], al
 * 0000000140AC1158: add     rcx, r10
 * 0000000140AC115B: add     edx, r12d
 * 0000000140AC115E: jnz     short loc_140AC1150
 * 0000000140AC1160: mov     r12, [rsp+0C30h+var_BB8]
 * 0000000140AC1165: mov     r14, [rsi+0A48h]
 * 0000000140AC116C: mov     [r14+18h], r15
 * 0000000140AC1170: mov     rax, [rbx]
 * 0000000140AC1173: mov     [r14+20h], rax
 * 0000000140AC1177: mov     eax, [rbx+8]
 * 0000000140AC117A: shr     rax, 6
 * 0000000140AC117E: and     al, 0Fh
 * 0000000140AC1180: mov     [r14+28h], al
 * 0000000140AC1184: cmp     [rsi+8C0h], r9d
 * 0000000140AC118B: jnz     short loc_140AC11D7
 * 0000000140AC118D: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC1197: xor     edx, edx
 * 0000000140AC1199: add     rax, rsi
 * 0000000140AC119C: mov     rcx, rsi
 * 0000000140AC119F: mov     [rsi+8C8h], rax
 * 0000000140AC11A6: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC11B0: add     rax, r14
 * 0000000140AC11B3: mov     [rsi+8D0h], rax
 * 0000000140AC11BA: movsxd  rax, dword ptr [r14]
 * 0000000140AC11BD: mov     [rsi+8D8h], rax
 * 0000000140AC11C4: mov     [rsi+8E0h], r13
 * 0000000140AC11CB: mov     [rsi+8C0h], r10d
 * 0000000140AC11D2: call    sub_140AD049C
 * 0000000140AC11D7: add     rbx, 30h ; '0'
 * 0000000140AC11DB: mov     rcx, [rbx]
 * 0000000140AC11DE: test    rcx, rcx
 * 0000000140AC11E1: jnz     loc_140AC10C9
 * 0000000140AC11E7: mov     r12, [rbp+0B30h+arg_8]
 * 0000000140AC11EE: mov     rax, [rsi+0F0h]
 * 0000000140AC11F5: mov     rcx, r12
 * 0000000140AC11F8: call    j__guard_dispatch_icall_nop
 * 0000000140AC11FD: mov     rax, [rsi+398h]
 * 0000000140AC1204: mov     rcx, r13
 * 0000000140AC1207: call    j__guard_dispatch_icall_nop
 * 0000000140AC120C: mov     r12d, [rsp+0C30h+var_BC0]
 * 0000000140AC1211: mov     eax, 8000h
 * 0000000140AC1216: add     [rsi+7F0h], eax
 * 0000000140AC121C: mov     rbx, [rsp+0C30h+var_BD8]
 * 0000000140AC1221: xor     r14d, r14d
 * 0000000140AC1224: mov     rax, [rsi+3A0h]
 * 0000000140AC122B: inc     r12d
 * 0000000140AC122E: mov     rcx, r13
 * 0000000140AC1231: mov     [rsp+0C30h+var_BC0], r12d
 * 0000000140AC1236: call    j__guard_dispatch_icall_nop
 * 0000000140AC123B: mov     r13, rax
 * 0000000140AC123E: test    rax, rax
 * 0000000140AC1241: jnz     loc_140AC0A7E
 * 0000000140AC1247: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC124E: mov     r13, [rsi+4B8h]
 * 0000000140AC1255: mov     rax, [rsi+390h]
 * 0000000140AC125C: mov     rcx, r13
 * 0000000140AC125F: call    j__guard_dispatch_icall_nop
 * 0000000140AC1264: test    eax, eax
 * 0000000140AC1266: js      loc_140AC1633
 * 0000000140AC126C: mov     rax, [rsi+3D0h]
 * 0000000140AC1273: mov     rcx, r13
 * 0000000140AC1276: call    j__guard_dispatch_icall_nop
 * 0000000140AC127B: movzx   ebx, al
 * 0000000140AC127E: lea     rdx, [rbp+0B30h+var_B5F]
 * 0000000140AC1282: mov     rax, [rsi+3D8h]
 * 0000000140AC1289: mov     rcx, r13
 * 0000000140AC128C: call    j__guard_dispatch_icall_nop
 * 0000000140AC1291: mov     byte ptr [rbp+0B30h+arg_8], al
 * 0000000140AC1297: mov     rcx, r13
 * 0000000140AC129A: mov     rax, [rsi+3E0h]
 * 0000000140AC12A1: call    j__guard_dispatch_icall_nop
 * 0000000140AC12A6: mov     [rsp+0C30h+var_BC8], rax
 * 0000000140AC12AB: cmp     bl, 72h ; 'r'
 * 0000000140AC12AE: jz      short loc_140AC1328
 * 0000000140AC12B0: cmp     [rsi+8C0h], r14d
 * 0000000140AC12B7: jnz     short loc_140AC1328
 * 0000000140AC12B9: mov     rax, [rsi+568h]
 * 0000000140AC12C0: mov     ecx, ebx
 * 0000000140AC12C2: mov     r15, [rsp+0C30h+var_BE0]
 * 0000000140AC12C7: xor     rcx, 72h
 * 0000000140AC12CB: mov     [rax+18h], rcx
 * 0000000140AC12CF: cmp     [rsi+8C0h], r14d
 * 0000000140AC12D6: jnz     short loc_140AC132D
 * 0000000140AC12D8: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC12E2: xor     edx, edx
 * 0000000140AC12E4: add     rax, rsi
 * 0000000140AC12E7: mov     rcx, rsi
 * 0000000140AC12EA: mov     [rsi+8C8h], rax
 * 0000000140AC12F1: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC12FB: add     rax, r15
 * 0000000140AC12FE: mov     [rsi+8D0h], rax
 * 0000000140AC1305: movsxd  rax, dword ptr [r15]
 * 0000000140AC1308: mov     [rsi+8D8h], rax
 * 0000000140AC130F: mov     eax, 1
 * 0000000140AC1314: mov     [rsi+8E0h], r13
 * 0000000140AC131B: mov     [rsi+8C0h], eax
 * 0000000140AC1321: call    sub_140AD049C
 * 0000000140AC1326: jmp     short loc_140AC132D
 * 0000000140AC1328: mov     r15, [rsp+0C30h+var_BE0]
 * 0000000140AC132D: xor     edx, edx
 * 0000000140AC132F: mov     ecx, ebx
 * 0000000140AC1331: and     ecx, 7
 * 0000000140AC1334: mov     r12b, dl
 * 0000000140AC1337: sub     ecx, 1
 * 0000000140AC133A: jz      short loc_140AC13A9
 * 0000000140AC133C: cmp     ecx, 1
 * 0000000140AC133F: jz      short loc_140AC139C
 * 0000000140AC1341: test    bl, 7
 * 0000000140AC1344: jz      short loc_140AC13AC
 * 0000000140AC1346: cmp     [rsi+8C0h], edx
 * 0000000140AC134C: jnz     short loc_140AC13AC
 * 0000000140AC134E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC1358: mov     rcx, rsi
 * 0000000140AC135B: add     rax, rsi
 * 0000000140AC135E: mov     [rsi+8C8h], rax
 * 0000000140AC1365: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC136F: add     rax, r15
 * 0000000140AC1372: mov     [rsi+8D0h], rax
 * 0000000140AC1379: movsxd  rax, dword ptr [r15]
 * 0000000140AC137C: mov     [rsi+8D8h], rax
 * 0000000140AC1383: lea     eax, [rdx+1]
 * 0000000140AC1386: mov     [rsi+8E0h], r13
 * 0000000140AC138D: mov     [rsi+8C0h], eax
 * 0000000140AC1393: call    sub_140AD049C
 * 0000000140AC1398: xor     edx, edx
 * 0000000140AC139A: jmp     short loc_140AC13AC
 * 0000000140AC139C: mov     eax, 10h
 * 0000000140AC13A1: mov     r14b, al
 * 0000000140AC13A4: mov     r12b, al
 * 0000000140AC13A7: jmp     short loc_140AC13AC
 * 0000000140AC13A9: mov     r14b, 30h ; '0'
 * 0000000140AC13AC: mov     r15, [rsi+5A0h]
 * 0000000140AC13B3: shr     rbx, 4
 * 0000000140AC13B7: mov     al, [r15+rbx*2]
 * 0000000140AC13BB: or      al, r14b
 * 0000000140AC13BE: mov     r14, [rsp+0C30h+var_BE0]
 * 0000000140AC13C3: cmp     al, byte ptr [rbp+0B30h+arg_8]
 * 0000000140AC13C9: jz      short loc_140AC1421
 * 0000000140AC13CB: cmp     [rsi+8C0h], edx
 * 0000000140AC13D1: jnz     short loc_140AC1421
 * 0000000140AC13D3: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC13DD: xor     edx, edx
 * 0000000140AC13DF: add     rax, rsi
 * 0000000140AC13E2: mov     rcx, rsi
 * 0000000140AC13E5: mov     [rsi+8C8h], rax
 * 0000000140AC13EC: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC13F6: add     rax, r14
 * 0000000140AC13F9: mov     [rsi+8D0h], rax
 * 0000000140AC1400: movsxd  rax, dword ptr [r14]
 * 0000000140AC1403: mov     [rsi+8D8h], rax
 * 0000000140AC140A: mov     eax, 1
 * 0000000140AC140F: mov     [rsi+8E0h], r13
 * 0000000140AC1416: mov     [rsi+8C0h], eax
 * 0000000140AC141C: call    sub_140AD049C
 * 0000000140AC1421: mov     al, [r15+rbx*2+1]
 * 0000000140AC1426: mov     ebx, 1
 * 0000000140AC142B: or      al, r12b
 * 0000000140AC142E: cmp     al, [rbp+0B30h+var_B5F]
 * 0000000140AC1431: jz      short loc_140AC1488
 * 0000000140AC1433: xor     r12d, r12d
 * 0000000140AC1436: cmp     [rsi+8C0h], r12d
 * 0000000140AC143D: jnz     short loc_140AC1488
 * 0000000140AC143F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC1449: xor     edx, edx
 * 0000000140AC144B: add     rax, rsi
 * 0000000140AC144E: mov     rcx, rsi
 * 0000000140AC1451: mov     [rsi+8C8h], rax
 * 0000000140AC1458: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC1462: add     rax, r14
 * 0000000140AC1465: mov     [rsi+8D0h], rax
 * 0000000140AC146C: movsxd  rax, dword ptr [r14]
 * 0000000140AC146F: mov     [rsi+8D8h], rax
 * 0000000140AC1476: mov     [rsi+8E0h], r13
 * 0000000140AC147D: mov     [rsi+8C0h], ebx
 * 0000000140AC1483: call    sub_140AD049C
 * 0000000140AC1488: cmp     r13, [rsi+4B8h]
 * 0000000140AC148F: jz      loc_140AC1614
 * 0000000140AC1495: mov     rax, [rsi+3C8h]
 * 0000000140AC149C: mov     edx, ebx
 * 0000000140AC149E: mov     rcx, r13
 * 0000000140AC14A1: call    j__guard_dispatch_icall_nop
 * 0000000140AC14A6: mov     rbx, rax
 * 0000000140AC14A9: test    rax, rax
 * 0000000140AC14AC: jz      loc_140AC1614
 * 0000000140AC14B2: mov     rcx, [rax]
 * 0000000140AC14B5: mov     r15, rax
 * 0000000140AC14B8: test    rcx, rcx
 * 0000000140AC14BB: jz      loc_140AC1605
 * 0000000140AC14C1: mov     dil, byte ptr [rbp+0B30h+arg_8]
 * 0000000140AC14C8: mov     r12, [rsp+0C30h+var_BC8]
 * 0000000140AC14CD: mov     r15, [rsp+0C30h+var_BE0]
 * 0000000140AC14D2: mov     [rsp+0C30h+var_BB8], rax
 * 0000000140AC14D7: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140AC14DB: mov     [rbx], rcx
 * 0000000140AC14DE: mov     rax, [rsi+1D0h]
 * 0000000140AC14E5: call    j__guard_dispatch_icall_nop
 * 0000000140AC14EA: mov     rcx, [rbx+8]
 * 0000000140AC14EE: movzx   edx, [rbp+0B30h+var_B5F]
 * 0000000140AC14F2: mov     r14, rcx
 * 0000000140AC14F5: movzx   eax, dil
 * 0000000140AC14F9: and     r14, 0FFFFFFFFFFFF0000h
 * 0000000140AC1500: cmp     r14, r12
 * 0000000140AC1503: cmovz   edx, eax
 * 0000000140AC1506: mov     rax, [rsi+3E8h]
 * 0000000140AC150D: shr     rcx, 6
 * 0000000140AC1511: and     cl, 0Fh
 * 0000000140AC1514: call    j__guard_dispatch_icall_nop
 * 0000000140AC1519: xor     r9d, r9d
 * 0000000140AC151C: test    eax, eax
 * 0000000140AC151E: jnz     loc_140AC15E9
 * 0000000140AC1524: test    dword ptr [rsi+958h], 40000000h
 * 0000000140AC152E: lea     r10d, [r9+1]
 * 0000000140AC1532: jz      short loc_140AC157E
 * 0000000140AC1534: mov     rcx, [rsi+0A48h]
 * 0000000140AC153B: lea     edx, [rax+30h]
 * 0000000140AC153E: lea     r8d, [r9+6]
 * 0000000140AC1542: mov     rax, [r15]
 * 0000000140AC1545: add     edx, 0FFFFFFF8h
 * 0000000140AC1548: mov     [rcx], rax
 * 0000000140AC154B: add     r15, 8
 * 0000000140AC154F: add     rcx, 8
 * 0000000140AC1553: sub     r8, r10
 * 0000000140AC1556: jnz     short loc_140AC1542
 * 0000000140AC1558: test    edx, edx
 * 0000000140AC155A: jz      short loc_140AC1577
 * 0000000140AC155C: mov     edi, 0FFFFFFFFh
 * 0000000140AC1561: mov     al, [r15]
 * 0000000140AC1564: add     r15, r10
 * 0000000140AC1567: mov     [rcx], al
 * 0000000140AC1569: add     rcx, r10
 * 0000000140AC156C: add     edx, edi
 * 0000000140AC156E: jnz     short loc_140AC1561
 * 0000000140AC1570: mov     dil, byte ptr [rbp+0B30h+arg_8]
 * 0000000140AC1577: mov     r15, [rsi+0A48h]
 * 0000000140AC157E: mov     [r15+18h], r14
 * 0000000140AC1582: mov     rax, [rbx]
 * 0000000140AC1585: mov     [r15+20h], rax
 * 0000000140AC1589: mov     eax, [rbx+8]
 * 0000000140AC158C: shr     rax, 6
 * 0000000140AC1590: and     al, 0Fh
 * 0000000140AC1592: mov     [r15+28h], al
 * 0000000140AC1596: cmp     [rsi+8C0h], r9d
 * 0000000140AC159D: jnz     short loc_140AC15E9
 * 0000000140AC159F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC15A9: xor     edx, edx
 * 0000000140AC15AB: add     rax, rsi
 * 0000000140AC15AE: mov     rcx, rsi
 * 0000000140AC15B1: mov     [rsi+8C8h], rax
 * 0000000140AC15B8: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC15C2: add     rax, r15
 * 0000000140AC15C5: mov     [rsi+8D0h], rax
 * 0000000140AC15CC: movsxd  rax, dword ptr [r15]
 * 0000000140AC15CF: mov     [rsi+8D8h], rax
 * 0000000140AC15D6: mov     [rsi+8E0h], r13
 * 0000000140AC15DD: mov     [rsi+8C0h], r10d
 * 0000000140AC15E4: call    sub_140AD049C
 * 0000000140AC15E9: add     rbx, 30h ; '0'
 * 0000000140AC15ED: mov     rcx, [rbx]
 * 0000000140AC15F0: test    rcx, rcx
 * 0000000140AC15F3: jnz     loc_140AC14D7
 * 0000000140AC15F9: mov     r15, [rsp+0C30h+var_BB8]
 * 0000000140AC15FE: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC1605: mov     rax, [rsi+0F0h]
 * 0000000140AC160C: mov     rcx, r15
 * 0000000140AC160F: call    j__guard_dispatch_icall_nop
 * 0000000140AC1614: mov     rax, [rsi+398h]
 * 0000000140AC161B: mov     rcx, r13
 * 0000000140AC161E: call    j__guard_dispatch_icall_nop
 * 0000000140AC1623: mov     r12d, [rsp+0C30h+var_BC0]
 * 0000000140AC1628: mov     eax, 8000h
 * 0000000140AC162D: add     [rsi+7F0h], eax
 * 0000000140AC1633: mov     rcx, [rsp+0C30h+var_BD8]
 * 0000000140AC1638: test    rcx, rcx
 * 0000000140AC163B: jz      short loc_140AC1649
 * 0000000140AC163D: mov     rax, [rsi+1D0h]
 * 0000000140AC1644: call    j__guard_dispatch_icall_nop
 * 0000000140AC1649: shl     r12d, 8
 * 0000000140AC164D: add     [rsi+7F0h], r12d
 * 0000000140AC1654: jmp     loc_140ABA5AF
 * 0000000140AC1659: xor     ebx, ebx
 * 0000000140AC165B: test    [r13+2Ah], r11b
 * 0000000140AC165F: jz      short loc_140AC169D
 * 0000000140AC1661: cmp     [rsi+948h], rbx
 * 0000000140AC1668: jz      loc_140AC1727
 * 0000000140AC166E: mov     ecx, [rsi+95Ch]
 * 0000000140AC1674: test    cl, 4
 * 0000000140AC1677: jnz     loc_140AC1727
 * 0000000140AC167D: cmp     [rsi+7ECh], ebx
 * 0000000140AC1683: jnz     loc_140AC171E
 * 0000000140AC1689: lea     eax, ds:0[rcx*8]
 * 0000000140AC1690: xor     eax, ecx
 * 0000000140AC1692: and     eax, 20h
 * 0000000140AC1695: xor     eax, ecx
 * 0000000140AC1697: mov     [rsi+95Ch], eax
 * 0000000140AC169D: mov     r10, [r13+8]
 * 0000000140AC16A1: mov     r8d, [rsi+7ECh]
 * 0000000140AC16A8: mov     [rbp+0B30h+var_B70], r10
 * 0000000140AC16AC: lea     rax, [r8+r8*2]
 * 0000000140AC16B0: lea     rcx, [r10+rax*4]
 * 0000000140AC16B4: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140AC16BE: lea     r11, [rcx+0Ch]
 * 0000000140AC16C2: mov     [rsp+0C30h+var_BC8], rcx
 * 0000000140AC16C7: mov     ecx, [r13+24h]
 * 0000000140AC16CB: mul     rcx
 * 0000000140AC16CE: mov     [rsp+0C30h+var_BB8], r11
 * 0000000140AC16D3: mov     r9, rdx
 * 0000000140AC16D6: shr     r9, 3
 * 0000000140AC16DA: mov     eax, r9d
 * 0000000140AC16DD: mov     [rbp+0B30h+var_B40], r9
 * 0000000140AC16E1: lea     rcx, [rax+rax*2]
 * 0000000140AC16E5: lea     rax, [r10+rcx*4]
 * 0000000140AC16E9: mov     [rbp+0B30h+var_BA8], rax
 * 0000000140AC16ED: lea     rax, [r13+30h]
 * 0000000140AC16F1: lea     r15, [rax+r8]
 * 0000000140AC16F5: mov     [rsp+0C30h+var_BD8], r15
 * 0000000140AC16FA: lea     r10d, [r9-1]
 * 0000000140AC16FE: mov     dword ptr [rbp+0B30h+arg_8], r10d
 * 0000000140AC1705: test    r9d, r9d
 * 0000000140AC1708: jz      short loc_140AC1732
 * 0000000140AC170A: mov     edx, r10d
 * 0000000140AC170D: add     rdx, 7
 * 0000000140AC1711: and     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140AC1715: add     rdx, rax
 * 0000000140AC1718: mov     [rbp+0B30h+var_B80], rdx
 * 0000000140AC171C: jmp     short loc_140AC1740
 * 0000000140AC171E: test    cl, 20h
 * 0000000140AC1721: jz      loc_140AC169D
 * 0000000140AC1727: mov     [rsi+7ECh], ebx
 * 0000000140AC172D: jmp     loc_140ABA5AF
 * 0000000140AC1732: mov     rdx, rax
 * 0000000140AC1735: mov     [rbp+0B30h+var_B80], rax
 * 0000000140AC1739: mov     dword ptr [rbp+0B30h+arg_8], r10d
 * 0000000140AC1740: movzx   eax, word ptr [r13+28h]
 * 0000000140AC1745: lea     rcx, [rax+rax*2]
 * 0000000140AC1749: lea     rax, [rdx+rcx*8]
 * 0000000140AC174D: mov     [rbp+0B30h+var_B30], rax
 * 0000000140AC1751: test    r9d, r9d
 * 0000000140AC1754: jz      loc_140AC1A83
 * 0000000140AC175A: cmp     r8d, r10d
 * 0000000140AC175D: jnb     loc_140AC1A83
 * 0000000140AC1763: mov     rdi, [rsp+0C30h+var_BC8]
 * 0000000140AC1768: cmp     [r15], bl
 * 0000000140AC176B: jl      loc_140AC1A0F
 * 0000000140AC1771: mov     eax, [rdi+4]
 * 0000000140AC1774: mov     r9d, [r11]
 * 0000000140AC1777: mov     r13d, eax
 * 0000000140AC177A: sub     r9d, eax
 * 0000000140AC177D: mov     rax, [rsp+0C30h+var_BE0]
 * 0000000140AC1782: mov     r12d, r9d
 * 0000000140AC1785: mov     [rsp+0C30h+var_BC8], r12
 * 0000000140AC178A: add     r13, [rax+18h]
 * 0000000140AC178E: add     [rsi+7F0h], r9d
 * 0000000140AC1795: mov     r10, r13
 * 0000000140AC1798: mov     ebx, [rsi+7DCh]
 * 0000000140AC179E: mov     rax, r13
 * 0000000140AC17A1: mov     r14, [rsi+7E0h]
 * 0000000140AC17A8: lea     rcx, [r9+r13]
 * 0000000140AC17AC: mov     [rbp+0B30h+var_B88], r13
 * 0000000140AC17B0: cmp     r13, rcx
 * 0000000140AC17B3: jnb     short loc_140AC17C5
 * 0000000140AC17B5: mov     edx, 40h ; '@'
 * 0000000140AC17BA: prefetchnta byte ptr [rax]
 * 0000000140AC17BD: add     rax, rdx
 * 0000000140AC17C0: cmp     rax, rcx
 * 0000000140AC17C3: jb      short loc_140AC17BA
 * 0000000140AC17C5: mov     r11d, r9d
 * 0000000140AC17C8: mov     r8, r14
 * 0000000140AC17CB: shr     r11d, 7
 * 0000000140AC17CF: test    r11d, r11d
 * 0000000140AC17D2: jz      short loc_140AC1845
 * 0000000140AC17D4: mov     esi, 0FFFFFFFFh
 * 0000000140AC17D9: mov     r15d, 1
 * 0000000140AC17DF: mov     r12, 7010008004002001h
 * 0000000140AC17E9: mov     eax, 8
 * 0000000140AC17EE: xor     r8, [r10]
 * 0000000140AC17F1: mov     ecx, ebx
 * 0000000140AC17F3: rol     r8, cl
 * 0000000140AC17F6: xor     r8, [r10+8]
 * 0000000140AC17FA: add     r10, 10h
 * 0000000140AC17FE: rol     r8, cl
 * 0000000140AC1801: sub     rax, r15
 * 0000000140AC1804: jnz     short loc_140AC17EE
 * 0000000140AC1806: mov     rcx, r10
 * 0000000140AC1809: sub     rcx, r13
 * 0000000140AC180C: xor     rcx, r14
 * 0000000140AC180F: mov     rax, rcx
 * 0000000140AC1812: rol     rax, 11h
 * 0000000140AC1816: xor     rcx, rax
 * 0000000140AC1819: mov     rax, r12
 * 0000000140AC181C: mul     rcx
 * 0000000140AC181F: xor     ebx, edx
 * 0000000140AC1821: mov     [rbp+0B30h+var_618], rdx
 * 0000000140AC1828: xor     ebx, eax
 * 0000000140AC182A: and     ebx, 3Fh
 * 0000000140AC182D: cmovz   ebx, r15d
 * 0000000140AC1831: add     r11d, esi
 * 0000000140AC1834: jnz     short loc_140AC17E9
 * 0000000140AC1836: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC183B: mov     r12, [rsp+0C30h+var_BC8]
 * 0000000140AC1840: mov     r15, [rsp+0C30h+var_BD8]
 * 0000000140AC1845: and     r9d, 7Fh
 * 0000000140AC1849: mov     r11d, 1
 * 0000000140AC184F: cmp     r9d, 8
 * 0000000140AC1853: jb      short loc_140AC1871
 * 0000000140AC1855: mov     eax, r9d
 * 0000000140AC1858: shr     rax, 3
 * 0000000140AC185C: xor     r8, [r10]
 * 0000000140AC185F: mov     ecx, ebx
 * 0000000140AC1861: rol     r8, cl
 * 0000000140AC1864: add     r10, 8
 * 0000000140AC1868: add     r9d, 0FFFFFFF8h
 * 0000000140AC186C: sub     rax, r11
 * 0000000140AC186F: jnz     short loc_140AC185C
 * 0000000140AC1871: test    r9d, r9d
 * 0000000140AC1874: jz      short loc_140AC1894
 * 0000000140AC1876: mov     esi, 0FFFFFFFFh
 * 0000000140AC187B: movzx   eax, byte ptr [r10]
 * 0000000140AC187F: mov     ecx, ebx
 * 0000000140AC1881: xor     r8, rax
 * 0000000140AC1884: add     r10, r11
 * 0000000140AC1887: rol     r8, cl
 * 0000000140AC188A: add     r9d, esi
 * 0000000140AC188D: jnz     short loc_140AC187B
 * 0000000140AC188F: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC1894: mov     rax, r8
 * 0000000140AC1897: shr     rax, 7
 * 0000000140AC189B: xor     ebx, ebx
 * 0000000140AC189D: jmp     short loc_140AC18A6
 * 0000000140AC189F: xor     r8b, al
 * 0000000140AC18A2: shr     rax, 7
 * 0000000140AC18A6: test    rax, rax
 * 0000000140AC18A9: jnz     short loc_140AC189F
 * 0000000140AC18AB: movzx   ecx, byte ptr [r15]
 * 0000000140AC18AF: mov     eax, ecx
 * 0000000140AC18B1: movzx   edx, r8b
 * 0000000140AC18B5: and     edx, 7Fh
 * 0000000140AC18B8: and     eax, 7Fh
 * 0000000140AC18BB: mov     dword ptr [rbp+0B30h+var_B90], edx
 * 0000000140AC18BE: cmp     edx, eax
 * 0000000140AC18C0: jz      loc_140AC19F6
 * 0000000140AC18C6: test    r12, r12
 * 0000000140AC18C9: jz      loc_140AC197D
 * 0000000140AC18CF: mov     eax, [rsi+95Ch]
 * 0000000140AC18D5: mov     r8d, 40h ; '@'
 * 0000000140AC18DB: test    r8b, al
 * 0000000140AC18DE: jz      loc_140AC197D
 * 0000000140AC18E4: mov     r15, cr8
 * 0000000140AC18E8: lea     eax, [r8-3Eh]
 * 0000000140AC18EC: mov     cr8, rax
 * 0000000140AC18F0: mov     rbx, r13
 * 0000000140AC18F3: dec     r12
 * 0000000140AC18F6: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140AC18FD: add     r13, r12
 * 0000000140AC1900: or      r13, 0FFFh
 * 0000000140AC1907: lea     r12, [rbx-1]
 * 0000000140AC190B: movzx   r14d, r15b
 * 0000000140AC190F: mov     rax, [rsi+458h]
 * 0000000140AC1916: xor     edx, edx
 * 0000000140AC1918: mov     rcx, rbx
 * 0000000140AC191B: call    j__guard_dispatch_icall_nop
 * 0000000140AC1920: cmp     eax, 0C000022Dh
 * 0000000140AC1925: jnz     short loc_140AC194A
 * 0000000140AC1927: mov     eax, 1
 * 0000000140AC192C: cmp     r15b, al
 * 0000000140AC192F: ja      short loc_140AC194E
 * 0000000140AC1931: movzx   r14d, r15b
 * 0000000140AC1935: mov     cr8, r14
 * 0000000140AC1939: mov     al, [rbx]
 * 0000000140AC193B: mov     rax, cr8
 * 0000000140AC193F: mov     eax, 2
 * 0000000140AC1944: mov     cr8, rax
 * 0000000140AC1948: jmp     short loc_140AC190F
 * 0000000140AC194A: test    eax, eax
 * 0000000140AC194C: js      short loc_140AC1969
 * 0000000140AC194E: mov     eax, 1000h
 * 0000000140AC1953: add     rbx, rax
 * 0000000140AC1956: add     r12, rax
 * 0000000140AC1959: cmp     r12, r13
 * 0000000140AC195C: jnz     short loc_140AC190B
 * 0000000140AC195E: mov     cr8, r14
 * 0000000140AC1962: xor     ebx, ebx
 * 0000000140AC1964: jmp     loc_140AC19F6
 * 0000000140AC1969: mov     cr8, r14
 * 0000000140AC196D: mov     rax, [rsp+0C30h+var_BD8]
 * 0000000140AC1972: xor     ebx, ebx
 * 0000000140AC1974: mov     edx, dword ptr [rbp+0B30h+var_B90]
 * 0000000140AC1977: mov     r13, [rbp+0B30h+var_B88]
 * 0000000140AC197B: mov     cl, [rax]
 * 0000000140AC197D: movzx   eax, cl
 * 0000000140AC1980: and     eax, 7Fh
 * 0000000140AC1983: cmp     [rsi+8C0h], ebx
 * 0000000140AC1989: jnz     short loc_140AC19F6
 * 0000000140AC198B: mov     ecx, edx
 * 0000000140AC198D: xor     rcx, rax
 * 0000000140AC1990: mov     rax, [rsi+568h]
 * 0000000140AC1997: mov     [rax+18h], rcx
 * 0000000140AC199B: cmp     [rsi+8C0h], ebx
 * 0000000140AC19A1: jnz     short loc_140AC19F6
 * 0000000140AC19A3: mov     rcx, [rsp+0C30h+var_BE0]
 * 0000000140AC19A8: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC19B2: add     rax, rsi
 * 0000000140AC19B5: xor     edx, edx
 * 0000000140AC19B7: mov     [rsi+8C8h], rax
 * 0000000140AC19BE: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC19C8: add     rax, rcx
 * 0000000140AC19CB: mov     [rsi+8D0h], rax
 * 0000000140AC19D2: movsxd  rax, dword ptr [rcx]
 * 0000000140AC19D5: mov     rcx, rsi
 * 0000000140AC19D8: mov     [rsi+8D8h], rax
 * 0000000140AC19DF: mov     eax, 1
 * 0000000140AC19E4: mov     [rsi+8E0h], r13
 * 0000000140AC19EB: mov     [rsi+8C0h], eax
 * 0000000140AC19F1: call    sub_140AD049C
 * 0000000140AC19F6: mov     r15, [rsp+0C30h+var_BD8]
 * 0000000140AC19FB: mov     eax, 40h ; '@'
 * 0000000140AC1A00: add     [rsi+7F0h], eax
 * 0000000140AC1A06: mov     r11, [rsp+0C30h+var_BB8]
 * 0000000140AC1A0B: mov     r12, [rbp+0B30h+var_B78]
 * 0000000140AC1A0F: mov     eax, 0Ch
 * 0000000140AC1A14: inc     r15
 * 0000000140AC1A17: add     r11, rax
 * 0000000140AC1A1A: mov     [rsp+0C30h+var_BD8], r15
 * 0000000140AC1A1F: add     rdi, rax
 * 0000000140AC1A22: mov     [rsp+0C30h+var_BB8], r11
 * 0000000140AC1A27: cmp     r11, [rbp+0B30h+var_BA8]
 * 0000000140AC1A2B: jnb     short loc_140AC1A3D
 * 0000000140AC1A2D: mov     eax, [r12]
 * 0000000140AC1A31: cmp     [rsi+7F0h], eax
 * 0000000140AC1A37: jl      loc_140AC1768
 * 0000000140AC1A3D: sub     rdi, [rbp+0B30h+var_B70]
 * 0000000140AC1A41: mov     rax, 2AAAAAAAAAAAAAABh
 * 0000000140AC1A4B: mov     r10d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140AC1A52: mov     r9, [rbp+0B30h+var_B40]
 * 0000000140AC1A56: imul    rdi
 * 0000000140AC1A59: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC1A60: sar     rdx, 1
 * 0000000140AC1A63: mov     rax, rdx
 * 0000000140AC1A66: shr     rax, 3Fh
 * 0000000140AC1A6A: add     rdx, rax
 * 0000000140AC1A6D: mov     r8d, edx
 * 0000000140AC1A70: mov     [rsi+7ECh], edx
 * 0000000140AC1A76: mov     rdx, [rbp+0B30h+var_B80]
 * 0000000140AC1A7A: cmp     r8d, r10d
 * 0000000140AC1A7D: jb      loc_140ABA5AF
 * 0000000140AC1A83: mov     eax, [rsi+7F4h]
 * 0000000140AC1A89: cmp     [rsi+7F0h], eax
 * 0000000140AC1A8F: jge     loc_140ABA5AF
 * 0000000140AC1A95: test    r9d, r9d
 * 0000000140AC1A98: jz      short loc_140AC1AA6
 * 0000000140AC1A9A: sub     r8d, r9d
 * 0000000140AC1A9D: inc     r8d
 * 0000000140AC1AA0: lea     rcx, [r8+r8*2]
 * 0000000140AC1AA4: jmp     short loc_140AC1AAD
 * 0000000140AC1AA6: mov     eax, r8d
 * 0000000140AC1AA9: lea     rcx, [rax+rax*2]
 * 0000000140AC1AAD: lea     rcx, [rdx+rcx*8]
 * 0000000140AC1AB1: mov     edx, 0Ch
 * 0000000140AC1AB6: mov     [rsp+0C30h+var_BB8], rcx
 * 0000000140AC1ABB: mov     rdi, [rsp+0C30h+var_BE0]
 * 0000000140AC1AC0: lea     r12, [rcx+8]
 * 0000000140AC1AC4: mov     eax, 2
 * 0000000140AC1AC9: mov     [rsp+0C30h+var_BD8], r12
 * 0000000140AC1ACE: mov     [rbp+0B30h+arg_8], rax
 * 0000000140AC1AD5: lea     ecx, [rax-1]
 * 0000000140AC1AD8: cmp     [r12], ebx
 * 0000000140AC1ADC: jl      loc_140AC1D76
 * 0000000140AC1AE2: mov     eax, [r12-8]
 * 0000000140AC1AE7: mov     r8d, [r12-4]
 * 0000000140AC1AEC: mov     r13d, eax
 * 0000000140AC1AEF: add     r13, [rdi+18h]
 * 0000000140AC1AF3: sub     r8d, eax
 * 0000000140AC1AF6: add     [rsi+7F0h], r8d
 * 0000000140AC1AFD: mov     r9, r13
 * 0000000140AC1B00: mov     r11d, [rsi+7DCh]
 * 0000000140AC1B07: mov     rax, r13
 * 0000000140AC1B0A: mov     rbx, [rsi+7E0h]
 * 0000000140AC1B11: lea     rcx, [r8+r13]
 * 0000000140AC1B15: mov     [rbp+0B30h+var_B80], r13
 * 0000000140AC1B19: mov     r15d, r8d
 * 0000000140AC1B1C: cmp     r13, rcx
 * 0000000140AC1B1F: jnb     short loc_140AC1B31
 * 0000000140AC1B21: mov     edx, 40h ; '@'
 * 0000000140AC1B26: prefetchnta byte ptr [rax]
 * 0000000140AC1B29: add     rax, rdx
 * 0000000140AC1B2C: cmp     rax, rcx
 * 0000000140AC1B2F: jb      short loc_140AC1B26
 * 0000000140AC1B31: mov     r10d, r8d
 * 0000000140AC1B34: mov     r14, rbx
 * 0000000140AC1B37: shr     r10d, 7
 * 0000000140AC1B3B: test    r10d, r10d
 * 0000000140AC1B3E: jz      short loc_140AC1BB5
 * 0000000140AC1B40: mov     r12, 7010008004002001h
 * 0000000140AC1B4A: mov     edx, 8
 * 0000000140AC1B4F: lea     esi, [rdx-7]
 * 0000000140AC1B52: mov     rax, [r9]
 * 0000000140AC1B55: mov     ecx, r11d
 * 0000000140AC1B58: xor     rax, r14
 * 0000000140AC1B5B: mov     r14, [r9+8]
 * 0000000140AC1B5F: rol     rax, cl
 * 0000000140AC1B62: add     r9, 10h
 * 0000000140AC1B66: xor     r14, rax
 * 0000000140AC1B69: rol     r14, cl
 * 0000000140AC1B6C: sub     rdx, rsi
 * 0000000140AC1B6F: jnz     short loc_140AC1B52
 * 0000000140AC1B71: mov     rcx, r9
 * 0000000140AC1B74: sub     rcx, r13
 * 0000000140AC1B77: xor     rcx, rbx
 * 0000000140AC1B7A: mov     rax, rcx
 * 0000000140AC1B7D: rol     rax, 11h
 * 0000000140AC1B81: xor     rcx, rax
 * 0000000140AC1B84: mov     rax, r12
 * 0000000140AC1B87: mul     rcx
 * 0000000140AC1B8A: mov     [rbp+0B30h+var_610], rdx
 * 0000000140AC1B91: xor     edx, eax
 * 0000000140AC1B93: xor     r11d, edx
 * 0000000140AC1B96: mov     rax, rsi
 * 0000000140AC1B99: and     r11d, 3Fh
 * 0000000140AC1B9D: cmovz   r11d, eax
 * 0000000140AC1BA1: mov     eax, 0FFFFFFFFh
 * 0000000140AC1BA6: add     r10d, eax
 * 0000000140AC1BA9: jnz     short loc_140AC1B4A
 * 0000000140AC1BAB: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC1BB0: mov     r12, [rsp+0C30h+var_BD8]
 * 0000000140AC1BB5: and     r8d, 7Fh
 * 0000000140AC1BB9: mov     r10d, 1
 * 0000000140AC1BBF: cmp     r8d, 8
 * 0000000140AC1BC3: jb      short loc_140AC1BE2
 * 0000000140AC1BC5: mov     edx, r8d
 * 0000000140AC1BC8: shr     rdx, 3
 * 0000000140AC1BCC: xor     r14, [r9]
 * 0000000140AC1BCF: mov     ecx, r11d
 * 0000000140AC1BD2: rol     r14, cl
 * 0000000140AC1BD5: add     r9, 8
 * 0000000140AC1BD9: add     r8d, 0FFFFFFF8h
 * 0000000140AC1BDD: sub     rdx, r10
 * 0000000140AC1BE0: jnz     short loc_140AC1BCC
 * 0000000140AC1BE2: xor     ebx, ebx
 * 0000000140AC1BE4: test    r8d, r8d
 * 0000000140AC1BE7: jz      short loc_140AC1C09
 * 0000000140AC1BE9: mov     r12d, 0FFFFFFFFh
 * 0000000140AC1BEF: movzx   eax, byte ptr [r9]
 * 0000000140AC1BF3: mov     ecx, r11d
 * 0000000140AC1BF6: xor     r14, rax
 * 0000000140AC1BF9: add     r9, r10
 * 0000000140AC1BFC: rol     r14, cl
 * 0000000140AC1BFF: add     r8d, r12d
 * 0000000140AC1C02: jnz     short loc_140AC1BEF
 * 0000000140AC1C04: mov     r12, [rsp+0C30h+var_BD8]
 * 0000000140AC1C09: mov     rax, r14
 * 0000000140AC1C0C: jmp     short loc_140AC1C11
 * 0000000140AC1C0E: xor     r14d, eax
 * 0000000140AC1C11: shr     rax, 1Fh
 * 0000000140AC1C15: test    rax, rax
 * 0000000140AC1C18: jnz     short loc_140AC1C0E
 * 0000000140AC1C1A: mov     ecx, [r12]
 * 0000000140AC1C1E: btr     r14d, 1Fh
 * 0000000140AC1C23: mov     eax, ecx
 * 0000000140AC1C25: btr     eax, 1Fh
 * 0000000140AC1C29: cmp     r14d, eax
 * 0000000140AC1C2C: jz      loc_140AC1D67
 * 0000000140AC1C32: test    r15, r15
 * 0000000140AC1C35: jz      loc_140AC1CF2
 * 0000000140AC1C3B: mov     eax, [rsi+95Ch]
 * 0000000140AC1C41: mov     edx, 40h ; '@'
 * 0000000140AC1C46: test    dl, al
 * 0000000140AC1C48: jz      loc_140AC1CF2
 * 0000000140AC1C4E: mov     r12, cr8
 * 0000000140AC1C52: lea     eax, [rdx-3Eh]
 * 0000000140AC1C55: mov     cr8, rax
 * 0000000140AC1C59: mov     rbx, r13
 * 0000000140AC1C5C: lea     rax, [r13-1]
 * 0000000140AC1C60: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140AC1C67: add     rax, r15
 * 0000000140AC1C6A: or      rax, 0FFFh
 * 0000000140AC1C70: mov     [rsp+0C30h+var_BC8], rax
 * 0000000140AC1C75: lea     r13, [rbx-1]
 * 0000000140AC1C79: movzx   r15d, r12b
 * 0000000140AC1C7D: mov     rax, [rsi+458h]
 * 0000000140AC1C84: xor     edx, edx
 * 0000000140AC1C86: mov     rcx, rbx
 * 0000000140AC1C89: call    j__guard_dispatch_icall_nop
 * 0000000140AC1C8E: cmp     eax, 0C000022Dh
 * 0000000140AC1C93: jnz     short loc_140AC1CB8
 * 0000000140AC1C95: mov     eax, 1
 * 0000000140AC1C9A: cmp     r12b, al
 * 0000000140AC1C9D: ja      short loc_140AC1CBC
 * 0000000140AC1C9F: movzx   r15d, r12b
 * 0000000140AC1CA3: mov     cr8, r15
 * 0000000140AC1CA7: mov     al, [rbx]
 * 0000000140AC1CA9: mov     rax, cr8
 * 0000000140AC1CAD: mov     eax, 2
 * 0000000140AC1CB2: mov     cr8, rax
 * 0000000140AC1CB6: jmp     short loc_140AC1C7D
 * 0000000140AC1CB8: test    eax, eax
 * 0000000140AC1CBA: js      short loc_140AC1CDF
 * 0000000140AC1CBC: mov     r8d, 1000h
 * 0000000140AC1CC2: add     rbx, r8
 * 0000000140AC1CC5: add     r13, r8
 * 0000000140AC1CC8: cmp     r13, [rsp+0C30h+var_BC8]
 * 0000000140AC1CCD: jnz     short loc_140AC1C79
 * 0000000140AC1CCF: mov     cr8, r15
 * 0000000140AC1CD3: mov     r12, [rsp+0C30h+var_BD8]
 * 0000000140AC1CD8: xor     ebx, ebx
 * 0000000140AC1CDA: jmp     loc_140AC1D67
 * 0000000140AC1CDF: mov     cr8, r15
 * 0000000140AC1CE3: mov     r12, [rsp+0C30h+var_BD8]
 * 0000000140AC1CE8: xor     ebx, ebx
 * 0000000140AC1CEA: mov     r13, [rbp+0B30h+var_B80]
 * 0000000140AC1CEE: mov     ecx, [r12]
 * 0000000140AC1CF2: mov     eax, ecx
 * 0000000140AC1CF4: btr     eax, 1Fh
 * 0000000140AC1CF8: cmp     [rsi+8C0h], ebx
 * 0000000140AC1CFE: jnz     short loc_140AC1D67
 * 0000000140AC1D00: mov     ecx, r14d
 * 0000000140AC1D03: xor     rcx, rax
 * 0000000140AC1D06: mov     rax, [rsi+568h]
 * 0000000140AC1D0D: mov     [rax+18h], rcx
 * 0000000140AC1D11: cmp     [rsi+8C0h], ebx
 * 0000000140AC1D17: jnz     short loc_140AC1D67
 * 0000000140AC1D19: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC1D23: xor     edx, edx
 * 0000000140AC1D25: add     rax, rsi
 * 0000000140AC1D28: mov     rcx, rsi
 * 0000000140AC1D2B: mov     [rsi+8C8h], rax
 * 0000000140AC1D32: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC1D3C: add     rax, rdi
 * 0000000140AC1D3F: mov     [rsi+8D0h], rax
 * 0000000140AC1D46: movsxd  rax, dword ptr [rdi]
 * 0000000140AC1D49: mov     [rsi+8D8h], rax
 * 0000000140AC1D50: mov     eax, 1
 * 0000000140AC1D55: mov     [rsi+8E0h], r13
 * 0000000140AC1D5C: mov     [rsi+8C0h], eax
 * 0000000140AC1D62: call    sub_140AD049C
 * 0000000140AC1D67: mov     rax, [rbp+0B30h+arg_8]
 * 0000000140AC1D6E: mov     ecx, 1
 * 0000000140AC1D73: lea     edx, [rcx+0Bh]
 * 0000000140AC1D76: add     r12, rdx
 * 0000000140AC1D79: sub     rax, rcx
 * 0000000140AC1D7C: mov     [rsp+0C30h+var_BD8], r12
 * 0000000140AC1D81: mov     [rbp+0B30h+arg_8], rax
 * 0000000140AC1D88: jnz     loc_140AC1AD8
 * 0000000140AC1D8E: mov     rcx, [rsp+0C30h+var_BB8]
 * 0000000140AC1D93: mov     r12d, 1
 * 0000000140AC1D99: add     [rsi+7ECh], r12d
 * 0000000140AC1DA0: add     rcx, 18h
 * 0000000140AC1DA4: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC1DAB: mov     [rsp+0C30h+var_BB8], rcx
 * 0000000140AC1DB0: cmp     rcx, [rbp+0B30h+var_B30]
 * 0000000140AC1DB4: jz      short loc_140AC1DCD
 * 0000000140AC1DB6: mov     eax, [rsi+7F4h]
 * 0000000140AC1DBC: cmp     [rsi+7F0h], eax
 * 0000000140AC1DC2: jl      loc_140AC1ABB
 * 0000000140AC1DC8: jmp     loc_140ABA35B
 * 0000000140AC1DCD: mov     [rsi+7ECh], ebx
 * 0000000140AC1DD3: jmp     loc_140ABA35B
 * 0000000140AC1DD8: mov     r14, [r13+8]
 * 0000000140AC1DDC: mov     r8d, [r13+10h]
 * 0000000140AC1DE0: mov     r9, r14
 * 0000000140AC1DE3: add     [rsi+7F0h], r8d
 * 0000000140AC1DEA: mov     rax, r14
 * 0000000140AC1DED: mov     r11d, [rsi+7DCh]
 * 0000000140AC1DF4: mov     r15, [rsi+7E0h]
 * 0000000140AC1DFB: lea     rcx, [r14+r8]
 * 0000000140AC1DFF: cmp     r14, rcx
 * 0000000140AC1E02: jnb     short loc_140AC1E14
 * 0000000140AC1E04: mov     edx, 40h ; '@'
 * 0000000140AC1E09: prefetchnta byte ptr [rax]
 * 0000000140AC1E0C: add     rax, rdx
 * 0000000140AC1E0F: cmp     rax, rcx
 * 0000000140AC1E12: jb      short loc_140AC1E09
 * 0000000140AC1E14: xor     r12d, r12d
 * 0000000140AC1E17: mov     r10d, r8d
 * 0000000140AC1E1A: shr     r10d, 7
 * 0000000140AC1E1E: mov     rbx, r15
 * 0000000140AC1E21: mov     r13d, 0FFFFFFFFh
 * 0000000140AC1E27: lea     edx, [r12+1]
 * 0000000140AC1E2C: test    r10d, r10d
 * 0000000140AC1E2F: jz      short loc_140AC1E9D
 * 0000000140AC1E31: mov     rdi, 7010008004002001h
 * 0000000140AC1E3B: mov     eax, 8
 * 0000000140AC1E40: xor     rbx, [r9]
 * 0000000140AC1E43: mov     ecx, r11d
 * 0000000140AC1E46: rol     rbx, cl
 * 0000000140AC1E49: xor     rbx, [r9+8]
 * 0000000140AC1E4D: add     r9, 10h
 * 0000000140AC1E51: rol     rbx, cl
 * 0000000140AC1E54: sub     rax, rdx
 * 0000000140AC1E57: jnz     short loc_140AC1E40
 * 0000000140AC1E59: mov     rcx, r9
 * 0000000140AC1E5C: sub     rcx, r14
 * 0000000140AC1E5F: xor     rcx, r15
 * 0000000140AC1E62: mov     rax, rcx
 * 0000000140AC1E65: rol     rax, 11h
 * 0000000140AC1E69: xor     rcx, rax
 * 0000000140AC1E6C: mov     rax, rdi
 * 0000000140AC1E6F: mul     rcx
 * 0000000140AC1E72: xor     r11d, edx
 * 0000000140AC1E75: mov     [rbp+0B30h+var_608], rdx
 * 0000000140AC1E7C: xor     r11d, eax
 * 0000000140AC1E7F: mov     edx, 1
 * 0000000140AC1E84: and     r11d, 3Fh
 * 0000000140AC1E88: cmovz   r11d, edx
 * 0000000140AC1E8C: add     r10d, r13d
 * 0000000140AC1E8F: jnz     short loc_140AC1E3B
 * 0000000140AC1E91: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC1E96: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC1E9D: and     r8d, 7Fh
 * 0000000140AC1EA1: cmp     r8d, 8
 * 0000000140AC1EA5: jb      short loc_140AC1EC4
 * 0000000140AC1EA7: mov     eax, r8d
 * 0000000140AC1EAA: shr     rax, 3
 * 0000000140AC1EAE: xor     rbx, [r9]
 * 0000000140AC1EB1: mov     ecx, r11d
 * 0000000140AC1EB4: rol     rbx, cl
 * 0000000140AC1EB7: add     r9, 8
 * 0000000140AC1EBB: add     r8d, 0FFFFFFF8h
 * 0000000140AC1EBF: sub     rax, rdx
 * 0000000140AC1EC2: jnz     short loc_140AC1EAE
 * 0000000140AC1EC4: test    r8d, r8d
 * 0000000140AC1EC7: jz      short loc_140AC1EDE
 * 0000000140AC1EC9: movzx   eax, byte ptr [r9]
 * 0000000140AC1ECD: mov     ecx, r11d
 * 0000000140AC1ED0: xor     rbx, rax
 * 0000000140AC1ED3: add     r9, rdx
 * 0000000140AC1ED6: rol     rbx, cl
 * 0000000140AC1ED9: add     r8d, r13d
 * 0000000140AC1EDC: jnz     short loc_140AC1EC9
 * 0000000140AC1EDE: mov     rax, rbx
 * 0000000140AC1EE1: jmp     short loc_140AC1EE5
 * 0000000140AC1EE3: xor     ebx, eax
 * 0000000140AC1EE5: shr     rax, 1Fh
 * 0000000140AC1EE9: test    rax, rax
 * 0000000140AC1EEC: jnz     short loc_140AC1EE3
 * 0000000140AC1EEE: mov     r14, [rsp+0C30h+var_BE0]
 * 0000000140AC1EF3: btr     ebx, 1Fh
 * 0000000140AC1EF7: mov     r13d, r12d
 * 0000000140AC1EFA: cmp     ebx, [r14+14h]
 * 0000000140AC1EFE: jz      loc_140AC1FE3
 * 0000000140AC1F04: cmp     [r14], r12d
 * 0000000140AC1F07: jnz     short loc_140AC1F11
 * 0000000140AC1F09: cmp     [r14+18h], r12d
 * 0000000140AC1F0D: cmovnz  r13d, edx
 * 0000000140AC1F11: mov     ecx, [r14+10h]
 * 0000000140AC1F15: mov     rdx, [r14+8]
 * 0000000140AC1F19: test    rcx, rcx
 * 0000000140AC1F1C: jz      loc_140AC21AC
 * 0000000140AC1F22: mov     eax, [rsi+95Ch]
 * 0000000140AC1F28: mov     r8d, 40h ; '@'
 * 0000000140AC1F2E: test    r8b, al
 * 0000000140AC1F31: jz      loc_140AC21AC
 * 0000000140AC1F37: mov     r12, cr8
 * 0000000140AC1F3B: lea     eax, [r8-3Eh]
 * 0000000140AC1F3F: mov     cr8, rax
 * 0000000140AC1F43: mov     r14, rdx
 * 0000000140AC1F46: lea     rax, [rcx-1]
 * 0000000140AC1F4A: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140AC1F51: add     rax, rdx
 * 0000000140AC1F54: or      rax, 0FFFh
 * 0000000140AC1F5A: mov     [rsp+0C30h+var_BC8], rax
 * 0000000140AC1F5F: lea     rax, [r14-1]
 * 0000000140AC1F63: mov     [rbp+0B30h+arg_8], rax
 * 0000000140AC1F6A: movzx   r15d, r12b
 * 0000000140AC1F6E: mov     rax, [rsi+458h]
 * 0000000140AC1F75: xor     edx, edx
 * 0000000140AC1F77: mov     rcx, r14
 * 0000000140AC1F7A: call    j__guard_dispatch_icall_nop
 * 0000000140AC1F7F: cmp     eax, 0C000022Dh
 * 0000000140AC1F84: jnz     short loc_140AC1FB1
 * 0000000140AC1F86: test    r13d, r13d
 * 0000000140AC1F89: jnz     loc_140AC21A0
 * 0000000140AC1F8F: lea     eax, [r13+1]
 * 0000000140AC1F93: cmp     r12b, al
 * 0000000140AC1F96: ja      short loc_140AC1FB9
 * 0000000140AC1F98: movzx   r15d, r12b
 * 0000000140AC1F9C: mov     cr8, r15
 * 0000000140AC1FA0: mov     al, [r14]
 * 0000000140AC1FA3: mov     rax, cr8
 * 0000000140AC1FA7: lea     eax, [r13+2]
 * 0000000140AC1FAB: mov     cr8, rax
 * 0000000140AC1FAF: jmp     short loc_140AC1F6E
 * 0000000140AC1FB1: test    eax, eax
 * 0000000140AC1FB3: js      loc_140AC21A0
 * 0000000140AC1FB9: mov     rax, [rbp+0B30h+arg_8]
 * 0000000140AC1FC0: mov     r8d, 1000h
 * 0000000140AC1FC6: add     rax, r8
 * 0000000140AC1FC9: add     r14, r8
 * 0000000140AC1FCC: mov     [rbp+0B30h+arg_8], rax
 * 0000000140AC1FD3: cmp     rax, [rsp+0C30h+var_BC8]
 * 0000000140AC1FD8: jnz     short loc_140AC1F6A
 * 0000000140AC1FDA: mov     cr8, r15
 * 0000000140AC1FDE: mov     r14, [rsp+0C30h+var_BE0]
 * 0000000140AC1FE3: mov     r13d, 1
 * 0000000140AC1FE9: mov     eax, [r14+10h]
 * 0000000140AC1FED: xor     ecx, ecx
 * 0000000140AC1FEF: mov     r12, [r14+8]
 * 0000000140AC1FF3: shr     eax, 4
 * 0000000140AC1FF6: mov     [rbp+0B30h+arg_8], r12
 * 0000000140AC1FFD: test    eax, eax
 * 0000000140AC1FFF: jz      loc_140ABA5AF
 * 0000000140AC2005: mov     edi, eax
 * 0000000140AC2007: mov     [rsp+0C30h+var_BD8], rdi
 * 0000000140AC200C: mov     rax, [r12]
 * 0000000140AC2010: lea     rdx, [rbp+0B30h+var_8C0]
 * 0000000140AC2017: mov     rbx, r14
 * 0000000140AC201A: mov     r15, [rax]
 * 0000000140AC201D: mov     [rbp+0B30h+var_8C0], rcx
 * 0000000140AC2024: mov     rcx, r15
 * 0000000140AC2027: mov     rax, [rsi+300h]
 * 0000000140AC202E: call    j__guard_dispatch_icall_nop
 * 0000000140AC2033: xor     ecx, ecx
 * 0000000140AC2035: mov     r14, rax
 * 0000000140AC2038: test    rax, rax
 * 0000000140AC203B: jz      loc_140AC216D
 * 0000000140AC2041: lea     edi, [rcx+6]
 * 0000000140AC2044: xor     r12d, r12d
 * 0000000140AC2047: mov     rax, [rsi+1F8h]
 * 0000000140AC204E: lea     rdx, [rbp+0B30h+var_600]
 * 0000000140AC2055: mov     rcx, r14
 * 0000000140AC2058: inc     r13d
 * 0000000140AC205B: call    j__guard_dispatch_icall_nop
 * 0000000140AC2060: test    rax, rax
 * 0000000140AC2063: jnz     loc_140AC213D
 * 0000000140AC2069: test    dword ptr [rsi+958h], 40000000h
 * 0000000140AC2073: lea     r9d, [rax+1]
 * 0000000140AC2077: jz      short loc_140AC20BF
 * 0000000140AC2079: mov     rcx, [rsi+0A48h]
 * 0000000140AC2080: lea     edx, [rax+30h]
 * 0000000140AC2083: mov     r8, rdi
 * 0000000140AC2086: mov     rax, [rbx]
 * 0000000140AC2089: add     edx, 0FFFFFFF8h
 * 0000000140AC208C: mov     [rcx], rax
 * 0000000140AC208F: add     rbx, 8
 * 0000000140AC2093: add     rcx, 8
 * 0000000140AC2097: sub     r8, r9
 * 0000000140AC209A: jnz     short loc_140AC2086
 * 0000000140AC209C: test    edx, edx
 * 0000000140AC209E: jz      short loc_140AC20B8
 * 0000000140AC20A0: mov     esi, 0FFFFFFFFh
 * 0000000140AC20A5: mov     al, [rbx]
 * 0000000140AC20A7: add     rbx, r9
 * 0000000140AC20AA: mov     [rcx], al
 * 0000000140AC20AC: add     rcx, r9
 * 0000000140AC20AF: add     edx, esi
 * 0000000140AC20B1: jnz     short loc_140AC20A5
 * 0000000140AC20B3: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC20B8: mov     rbx, [rsi+0A48h]
 * 0000000140AC20BF: mov     [rbx+18h], r14
 * 0000000140AC20C3: mov     [rbx+20h], r15
 * 0000000140AC20C7: mov     rax, [rsi+568h]
 * 0000000140AC20CE: mov     [rax], rbx
 * 0000000140AC20D1: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140AC20D8: mov     rax, [rsi+568h]
 * 0000000140AC20DF: mov     [rax+8], r14
 * 0000000140AC20E3: mov     dword ptr [rax+14h], 1000h
 * 0000000140AC20EA: cmp     [rsi+8C0h], r12d
 * 0000000140AC20F1: jnz     short loc_140AC213D
 * 0000000140AC20F3: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC20FD: xor     edx, edx
 * 0000000140AC20FF: add     rax, rsi
 * 0000000140AC2102: mov     rcx, rsi
 * 0000000140AC2105: mov     [rsi+8C8h], rax
 * 0000000140AC210C: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC2116: add     rax, rbx
 * 0000000140AC2119: mov     [rsi+8D0h], rax
 * 0000000140AC2120: movsxd  rax, dword ptr [rbx]
 * 0000000140AC2123: mov     [rsi+8D8h], rax
 * 0000000140AC212A: mov     [rsi+8E0h], rdi
 * 0000000140AC2131: mov     [rsi+8C0h], r9d
 * 0000000140AC2138: call    sub_140AD049C
 * 0000000140AC213D: mov     rax, [rsi+300h]
 * 0000000140AC2144: lea     rdx, [rbp+0B30h+var_8C0]
 * 0000000140AC214B: mov     rcx, r15
 * 0000000140AC214E: call    j__guard_dispatch_icall_nop
 * 0000000140AC2153: mov     r14, rax
 * 0000000140AC2156: test    rax, rax
 * 0000000140AC2159: jnz     loc_140AC2047
 * 0000000140AC215F: mov     r12, [rbp+0B30h+arg_8]
 * 0000000140AC2166: xor     ecx, ecx
 * 0000000140AC2168: mov     rdi, [rsp+0C30h+var_BD8]
 * 0000000140AC216D: mov     r14, [rsp+0C30h+var_BE0]
 * 0000000140AC2172: add     r12, 10h
 * 0000000140AC2176: mov     r13d, 1
 * 0000000140AC217C: mov     [rbp+0B30h+arg_8], r12
 * 0000000140AC2183: sub     rdi, r13
 * 0000000140AC2186: mov     [rsp+0C30h+var_BD8], rdi
 * 0000000140AC218B: jnz     loc_140AC200C
 * 0000000140AC2191: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC2198: mov     r12d, r13d
 * 0000000140AC219B: jmp     loc_140ABA35B
 * 0000000140AC21A0: mov     cr8, r15
 * 0000000140AC21A4: mov     r14, [rsp+0C30h+var_BE0]
 * 0000000140AC21A9: xor     r12d, r12d
 * 0000000140AC21AC: mov     eax, [r14+14h]
 * 0000000140AC21B0: cmp     [rsi+8C0h], r12d
 * 0000000140AC21B7: jnz     loc_140AC1FE3
 * 0000000140AC21BD: mov     ecx, eax
 * 0000000140AC21BF: mov     r13d, 1
 * 0000000140AC21C5: mov     eax, ebx
 * 0000000140AC21C7: xor     rcx, rax
 * 0000000140AC21CA: mov     rax, [rsi+568h]
 * 0000000140AC21D1: mov     [rax+18h], rcx
 * 0000000140AC21D5: mov     rcx, [r14+8]
 * 0000000140AC21D9: cmp     [rsi+8C0h], r12d
 * 0000000140AC21E0: jnz     loc_140AC1FE9
 * 0000000140AC21E6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC21F0: xor     edx, edx
 * 0000000140AC21F2: add     rax, rsi
 * 0000000140AC21F5: mov     [rsi+8C8h], rax
 * 0000000140AC21FC: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC2206: add     rax, r14
 * 0000000140AC2209: mov     [rsi+8D0h], rax
 * 0000000140AC2210: movsxd  rax, dword ptr [r14]
 * 0000000140AC2213: mov     [rsi+8D8h], rax
 * 0000000140AC221A: mov     [rsi+8E0h], rcx
 * 0000000140AC2221: mov     rcx, rsi
 * 0000000140AC2224: mov     [rsi+8C0h], r13d
 * 0000000140AC222B: call    sub_140AD049C
 * 0000000140AC2230: jmp     loc_140AC1FE9
 * 0000000140AC2235: mov     eax, [rsi+95Ch]
 * 0000000140AC223B: mov     edx, 2
 * 0000000140AC2240: test    dl, al
 * 0000000140AC2242: jnz     loc_140ABA5AF
 * 0000000140AC2248: mov     rax, [rsi+418h]
 * 0000000140AC224F: call    j__guard_dispatch_icall_nop
 * 0000000140AC2254: xor     ecx, ecx
 * 0000000140AC2256: test    al, al
 * 0000000140AC2258: jz      loc_140ABA5AF
 * 0000000140AC225E: cmp     [rsi+8C0h], ecx
 * 0000000140AC2264: mov     r12d, 1
 * 0000000140AC226A: jnz     loc_140ABA35B
 * 0000000140AC2270: jmp     loc_140ABA5FC
 * 0000000140AC2275: cmp     r10d, 26h ; '&'
 * 0000000140AC2279: jz      loc_140AC55FB
 * 0000000140AC227F: jle     loc_140AC4782
 * 0000000140AC2285: cmp     r10d, 2Ah ; '*'
 * 0000000140AC2289: jle     loc_140AC4633
 * 0000000140AC228F: cmp     r10d, 2Bh ; '+'
 * 0000000140AC2293: jz      loc_140AC3829
 * 0000000140AC2299: cmp     r10d, 2Ch ; ','
 * 0000000140AC229D: jz      loc_140AC2C17
 * 0000000140AC22A3: cmp     r10d, 2Eh ; '.'
 * 0000000140AC22A7: jz      loc_140AC2B26
 * 0000000140AC22AD: cmp     r10d, 2Fh ; '/'
 * 0000000140AC22B1: jz      loc_140AC2943
 * 0000000140AC22B7: cmp     r10d, 30h ; '0'
 * 0000000140AC22BB: jnz     loc_140AC4782
 * 0000000140AC22C1: xor     r12d, r12d
 * 0000000140AC22C4: cmp     [r13+10h], r12d
 * 0000000140AC22C8: jz      loc_140ABA5AF
 * 0000000140AC22CE: test    dword ptr [rsi+95Ch], 4000h
 * 0000000140AC22D8: jz      short loc_140AC22F9
 * 0000000140AC22DA: mov     rcx, [rsi+4B8h]
 * 0000000140AC22E1: cli
 * 0000000140AC22E2: mov     eax, [rsi+958h]
 * 0000000140AC22E8: shr     eax, 0Ah
 * 0000000140AC22EB: and     eax, 1Fh
 * 0000000140AC22EE: lock bts [rcx], eax
 * 0000000140AC22F2: jnb     short loc_140AC22F9
 * 0000000140AC22F4: sti
 * 0000000140AC22F5: pause
 * 0000000140AC22F7: jmp     short loc_140AC22E1
 * 0000000140AC22F9: mov     eax, [r13+18h]
 * 0000000140AC22FD: test    r11b, al
 * 0000000140AC2300: jnz     loc_140AC259A
 * 0000000140AC2306: mov     r14, [r13+8]
 * 0000000140AC230A: mov     r8d, [r13+10h]
 * 0000000140AC230E: mov     r9, r14
 * 0000000140AC2311: add     [rsi+7F0h], r8d
 * 0000000140AC2318: mov     rax, r14
 * 0000000140AC231B: mov     r10d, [rsi+7DCh]
 * 0000000140AC2322: mov     r15, [rsi+7E0h]
 * 0000000140AC2329: lea     rcx, [r14+r8]
 * 0000000140AC232D: cmp     r14, rcx
 * 0000000140AC2330: jnb     short loc_140AC2342
 * 0000000140AC2332: mov     edx, 40h ; '@'
 * 0000000140AC2337: prefetchnta byte ptr [rax]
 * 0000000140AC233A: add     rax, rdx
 * 0000000140AC233D: cmp     rax, rcx
 * 0000000140AC2340: jb      short loc_140AC2337
 * 0000000140AC2342: mov     r11d, r8d
 * 0000000140AC2345: mov     rbx, r15
 * 0000000140AC2348: shr     r11d, 7
 * 0000000140AC234C: mov     edx, 1
 * 0000000140AC2351: mov     r13d, 0FFFFFFFFh
 * 0000000140AC2357: test    r11d, r11d
 * 0000000140AC235A: jz      short loc_140AC23C8
 * 0000000140AC235C: mov     rdi, 7010008004002001h
 * 0000000140AC2366: mov     eax, 8
 * 0000000140AC236B: xor     rbx, [r9]
 * 0000000140AC236E: mov     ecx, r10d
 * 0000000140AC2371: rol     rbx, cl
 * 0000000140AC2374: xor     rbx, [r9+8]
 * 0000000140AC2378: add     r9, 10h
 * 0000000140AC237C: rol     rbx, cl
 * 0000000140AC237F: sub     rax, rdx
 * 0000000140AC2382: jnz     short loc_140AC236B
 * 0000000140AC2384: mov     rcx, r9
 * 0000000140AC2387: sub     rcx, r14
 * 0000000140AC238A: xor     rcx, r15
 * 0000000140AC238D: mov     rax, rcx
 * 0000000140AC2390: rol     rax, 11h
 * 0000000140AC2394: xor     rcx, rax
 * 0000000140AC2397: mov     rax, rdi
 * 0000000140AC239A: mul     rcx
 * 0000000140AC239D: xor     r10d, edx
 * 0000000140AC23A0: mov     [rbp+0B30h+var_5F8], rdx
 * 0000000140AC23A7: xor     r10d, eax
 * 0000000140AC23AA: mov     edx, 1
 * 0000000140AC23AF: and     r10d, 3Fh
 * 0000000140AC23B3: cmovz   r10d, edx
 * 0000000140AC23B7: add     r11d, r13d
 * 0000000140AC23BA: jnz     short loc_140AC2366
 * 0000000140AC23BC: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC23C1: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC23C8: and     r8d, 7Fh
 * 0000000140AC23CC: cmp     r8d, 8
 * 0000000140AC23D0: jb      short loc_140AC23EF
 * 0000000140AC23D2: mov     eax, r8d
 * 0000000140AC23D5: shr     rax, 3
 * 0000000140AC23D9: xor     rbx, [r9]
 * 0000000140AC23DC: mov     ecx, r10d
 * 0000000140AC23DF: rol     rbx, cl
 * 0000000140AC23E2: add     r9, 8
 * 0000000140AC23E6: add     r8d, 0FFFFFFF8h
 * 0000000140AC23EA: sub     rax, rdx
 * 0000000140AC23ED: jnz     short loc_140AC23D9
 * 0000000140AC23EF: test    r8d, r8d
 * 0000000140AC23F2: jz      short loc_140AC2409
 * 0000000140AC23F4: movzx   eax, byte ptr [r9]
 * 0000000140AC23F8: mov     ecx, r10d
 * 0000000140AC23FB: xor     rbx, rax
 * 0000000140AC23FE: add     r9, rdx
 * 0000000140AC2401: rol     rbx, cl
 * 0000000140AC2404: add     r8d, r13d
 * 0000000140AC2407: jnz     short loc_140AC23F4
 * 0000000140AC2409: mov     rax, rbx
 * 0000000140AC240C: jmp     short loc_140AC2410
 * 0000000140AC240E: xor     ebx, eax
 * 0000000140AC2410: shr     rax, 1Fh
 * 0000000140AC2414: test    rax, rax
 * 0000000140AC2417: jnz     short loc_140AC240E
 * 0000000140AC2419: mov     r8, [rsp+0C30h+var_BE0]
 * 0000000140AC241E: btr     ebx, 1Fh
 * 0000000140AC2422: mov     r13d, r12d
 * 0000000140AC2425: cmp     ebx, [r8+14h]
 * 0000000140AC2429: jz      loc_140AC2909
 * 0000000140AC242F: cmp     [r8], r12d
 * 0000000140AC2432: jnz     short loc_140AC243C
 * 0000000140AC2434: cmp     [r8+18h], r12d
 * 0000000140AC2438: cmovnz  r13d, edx
 * 0000000140AC243C: mov     ecx, [r8+10h]
 * 0000000140AC2440: mov     rdx, [r8+8]
 * 0000000140AC2444: test    rcx, rcx
 * 0000000140AC2447: jz      loc_140AC2511
 * 0000000140AC244D: mov     eax, [rsi+95Ch]
 * 0000000140AC2453: mov     r9d, 40h ; '@'
 * 0000000140AC2459: test    r9b, al
 * 0000000140AC245C: jz      loc_140AC2511
 * 0000000140AC2462: mov     r12, cr8
 * 0000000140AC2466: lea     eax, [r9-3Eh]
 * 0000000140AC246A: mov     cr8, rax
 * 0000000140AC246E: mov     r14, rdx
 * 0000000140AC2471: lea     rax, [rcx-1]
 * 0000000140AC2475: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140AC247C: add     rax, rdx
 * 0000000140AC247F: or      rax, 0FFFh
 * 0000000140AC2485: mov     [rsp+0C30h+var_BC8], rax
 * 0000000140AC248A: lea     rax, [r14-1]
 * 0000000140AC248E: mov     [rbp+0B30h+arg_8], rax
 * 0000000140AC2495: movzx   r15d, r12b
 * 0000000140AC2499: mov     rax, [rsi+458h]
 * 0000000140AC24A0: xor     edx, edx
 * 0000000140AC24A2: mov     rcx, r14
 * 0000000140AC24A5: call    j__guard_dispatch_icall_nop
 * 0000000140AC24AA: cmp     eax, 0C000022Dh
 * 0000000140AC24AF: jnz     short loc_140AC24D8
 * 0000000140AC24B1: test    r13d, r13d
 * 0000000140AC24B4: jnz     short loc_140AC2505
 * 0000000140AC24B6: lea     eax, [r13+1]
 * 0000000140AC24BA: cmp     r12b, al
 * 0000000140AC24BD: ja      short loc_140AC24DC
 * 0000000140AC24BF: movzx   r15d, r12b
 * 0000000140AC24C3: mov     cr8, r15
 * 0000000140AC24C7: mov     al, [r14]
 * 0000000140AC24CA: mov     rax, cr8
 * 0000000140AC24CE: lea     eax, [r13+2]
 * 0000000140AC24D2: mov     cr8, rax
 * 0000000140AC24D6: jmp     short loc_140AC2499
 * 0000000140AC24D8: test    eax, eax
 * 0000000140AC24DA: js      short loc_140AC2505
 * 0000000140AC24DC: mov     rax, [rbp+0B30h+arg_8]
 * 0000000140AC24E3: mov     ecx, 1000h
 * 0000000140AC24E8: add     rax, rcx
 * 0000000140AC24EB: add     r14, rcx
 * 0000000140AC24EE: mov     [rbp+0B30h+arg_8], rax
 * 0000000140AC24F5: cmp     rax, [rsp+0C30h+var_BC8]
 * 0000000140AC24FA: jnz     short loc_140AC2495
 * 0000000140AC24FC: mov     cr8, r15
 * 0000000140AC2500: jmp     loc_140AC2909
 * 0000000140AC2505: mov     cr8, r15
 * 0000000140AC2509: mov     r8, [rsp+0C30h+var_BE0]
 * 0000000140AC250E: xor     r12d, r12d
 * 0000000140AC2511: mov     eax, [r8+14h]
 * 0000000140AC2515: cmp     [rsi+8C0h], r12d
 * 0000000140AC251C: jnz     loc_140AC2909
 * 0000000140AC2522: mov     ecx, eax
 * 0000000140AC2524: mov     eax, ebx
 * 0000000140AC2526: xor     rcx, rax
 * 0000000140AC2529: mov     rax, [rsi+568h]
 * 0000000140AC2530: mov     [rax+18h], rcx
 * 0000000140AC2534: mov     rcx, [r8+8]
 * 0000000140AC2538: cmp     [rsi+8C0h], r12d
 * 0000000140AC253F: jnz     loc_140AC2909
 * 0000000140AC2545: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC254F: add     rax, rsi
 * 0000000140AC2552: mov     [rsi+8C8h], rax
 * 0000000140AC2559: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC2563: add     rax, r8
 * 0000000140AC2566: mov     [rsi+8D0h], rax
 * 0000000140AC256D: movsxd  rax, dword ptr [r8]
 * 0000000140AC2570: mov     [rsi+8D8h], rax
 * 0000000140AC2577: mov     r12d, 1
 * 0000000140AC257D: mov     [rsi+8E0h], rcx
 * 0000000140AC2584: xor     edx, edx
 * 0000000140AC2586: mov     rcx, rsi
 * 0000000140AC2589: mov     [rsi+8C0h], r12d
 * 0000000140AC2590: call    sub_140AD049C
 * 0000000140AC2595: jmp     loc_140AC290F
 * 0000000140AC259A: cmp     [rsi+948h], r12
 * 0000000140AC25A1: jz      loc_140AC2902
 * 0000000140AC25A7: mov     edx, [rsi+95Ch]
 * 0000000140AC25AD: cmp     [rsi+7ECh], r12d
 * 0000000140AC25B4: jnz     short loc_140AC25CC
 * 0000000140AC25B6: lea     ecx, ds:0[rdx*8]
 * 0000000140AC25BD: xor     ecx, edx
 * 0000000140AC25BF: and     ecx, 20h
 * 0000000140AC25C2: xor     ecx, edx
 * 0000000140AC25C4: mov     [rsi+95Ch], ecx
 * 0000000140AC25CA: jmp     short loc_140AC25DD
 * 0000000140AC25CC: mov     eax, edx
 * 0000000140AC25CE: mov     ecx, edx
 * 0000000140AC25D0: shr     eax, 3
 * 0000000140AC25D3: xor     eax, edx
 * 0000000140AC25D5: test    al, 4
 * 0000000140AC25D7: jnz     loc_140AC2902
 * 0000000140AC25DD: test    cl, 4
 * 0000000140AC25E0: jz      loc_140AC26B3
 * 0000000140AC25E6: mov     ecx, [r13+8]
 * 0000000140AC25EA: mov     r14d, [r13+10h]
 * 0000000140AC25EE: and     ecx, 0FFFh
 * 0000000140AC25F4: mov     rbx, [r13+8]
 * 0000000140AC25F8: add     r14, 0FFFh
 * 0000000140AC25FF: add     r14, rcx
 * 0000000140AC2602: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140AC2609: shr     r14, 0Ch
 * 0000000140AC260D: test    r14, r14
 * 0000000140AC2610: jz      loc_140AC2909
 * 0000000140AC2616: mov     rax, [rsi+2A0h]
 * 0000000140AC261D: mov     rcx, rbx
 * 0000000140AC2620: sub     r14, r11
 * 0000000140AC2623: call    j__guard_dispatch_icall_nop
 * 0000000140AC2628: test    al, al
 * 0000000140AC262A: jz      short loc_140AC2684
 * 0000000140AC262C: cmp     [rsi+8C0h], r12d
 * 0000000140AC2633: jnz     short loc_140AC2684
 * 0000000140AC2635: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC263F: mov     edi, 1
 * 0000000140AC2644: add     rax, rsi
 * 0000000140AC2647: xor     edx, edx
 * 0000000140AC2649: mov     [rsi+8C8h], rax
 * 0000000140AC2650: mov     rcx, rsi
 * 0000000140AC2653: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC265D: add     rax, r13
 * 0000000140AC2660: mov     [rsi+8D0h], rax
 * 0000000140AC2667: movsxd  rax, dword ptr [r13+0]
 * 0000000140AC266B: mov     [rsi+8D8h], rax
 * 0000000140AC2672: mov     [rsi+8E0h], rbx
 * 0000000140AC2679: mov     [rsi+8C0h], edi
 * 0000000140AC267F: call    sub_140AD049C
 * 0000000140AC2684: add     dword ptr [rsi+7F0h], 100h
 * 0000000140AC268E: add     rbx, 1000h
 * 0000000140AC2695: mov     r11d, 1
 * 0000000140AC269B: test    r14, r14
 * 0000000140AC269E: jnz     loc_140AC2616
 * 0000000140AC26A4: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC26AB: mov     r12d, r11d
 * 0000000140AC26AE: jmp     loc_140AC290F
 * 0000000140AC26B3: mov     r11, [r13+8]
 * 0000000140AC26B7: mov     r8d, [r13+10h]
 * 0000000140AC26BB: mov     r9, r11
 * 0000000140AC26BE: add     [rsi+7F0h], r8d
 * 0000000140AC26C5: mov     rax, r11
 * 0000000140AC26C8: mov     r14d, [rsi+7DCh]
 * 0000000140AC26CF: mov     r15, [rsi+7E0h]
 * 0000000140AC26D6: lea     rcx, [r11+r8]
 * 0000000140AC26DA: cmp     r11, rcx
 * 0000000140AC26DD: jnb     short loc_140AC26EF
 * 0000000140AC26DF: mov     edx, 40h ; '@'
 * 0000000140AC26E4: prefetchnta byte ptr [rax]
 * 0000000140AC26E7: add     rax, rdx
 * 0000000140AC26EA: cmp     rax, rcx
 * 0000000140AC26ED: jb      short loc_140AC26E4
 * 0000000140AC26EF: mov     r10d, r8d
 * 0000000140AC26F2: mov     rbx, r15
 * 0000000140AC26F5: shr     r10d, 7
 * 0000000140AC26F9: test    r10d, r10d
 * 0000000140AC26FC: jz      short loc_140AC2775
 * 0000000140AC26FE: mov     rdi, 7010008004002001h
 * 0000000140AC2708: mov     edx, 8
 * 0000000140AC270D: lea     esi, [rdx-7]
 * 0000000140AC2710: mov     rax, [r9]
 * 0000000140AC2713: mov     ecx, r14d
 * 0000000140AC2716: xor     rax, rbx
 * 0000000140AC2719: mov     rbx, [r9+8]
 * 0000000140AC271D: rol     rax, cl
 * 0000000140AC2720: add     r9, 10h
 * 0000000140AC2724: xor     rbx, rax
 * 0000000140AC2727: rol     rbx, cl
 * 0000000140AC272A: sub     rdx, rsi
 * 0000000140AC272D: jnz     short loc_140AC2710
 * 0000000140AC272F: mov     rcx, r9
 * 0000000140AC2732: sub     rcx, r11
 * 0000000140AC2735: xor     rcx, r15
 * 0000000140AC2738: mov     rax, rcx
 * 0000000140AC273B: rol     rax, 11h
 * 0000000140AC273F: xor     rcx, rax
 * 0000000140AC2742: mov     rax, rdi
 * 0000000140AC2745: mul     rcx
 * 0000000140AC2748: mov     [rbp+0B30h+var_5F0], rdx
 * 0000000140AC274F: xor     edx, eax
 * 0000000140AC2751: xor     r14d, edx
 * 0000000140AC2754: mov     rax, rsi
 * 0000000140AC2757: and     r14d, 3Fh
 * 0000000140AC275B: cmovz   r14d, eax
 * 0000000140AC275F: mov     eax, 0FFFFFFFFh
 * 0000000140AC2764: add     r10d, eax
 * 0000000140AC2767: jnz     short loc_140AC2708
 * 0000000140AC2769: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC276E: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC2775: and     r8d, 7Fh
 * 0000000140AC2779: mov     r10d, 1
 * 0000000140AC277F: cmp     r8d, 8
 * 0000000140AC2783: jb      short loc_140AC27A2
 * 0000000140AC2785: mov     edx, r8d
 * 0000000140AC2788: shr     rdx, 3
 * 0000000140AC278C: xor     rbx, [r9]
 * 0000000140AC278F: mov     ecx, r14d
 * 0000000140AC2792: rol     rbx, cl
 * 0000000140AC2795: add     r9, 8
 * 0000000140AC2799: add     r8d, 0FFFFFFF8h
 * 0000000140AC279D: sub     rdx, r10
 * 0000000140AC27A0: jnz     short loc_140AC278C
 * 0000000140AC27A2: test    r8d, r8d
 * 0000000140AC27A5: jz      short loc_140AC27C6
 * 0000000140AC27A7: mov     esi, 0FFFFFFFFh
 * 0000000140AC27AC: movzx   eax, byte ptr [r9]
 * 0000000140AC27B0: mov     ecx, r14d
 * 0000000140AC27B3: xor     rbx, rax
 * 0000000140AC27B6: add     r9, r10
 * 0000000140AC27B9: rol     rbx, cl
 * 0000000140AC27BC: add     r8d, esi
 * 0000000140AC27BF: jnz     short loc_140AC27AC
 * 0000000140AC27C1: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC27C6: mov     rax, rbx
 * 0000000140AC27C9: jmp     short loc_140AC27CD
 * 0000000140AC27CB: xor     ebx, eax
 * 0000000140AC27CD: shr     rax, 1Fh
 * 0000000140AC27D1: test    rax, rax
 * 0000000140AC27D4: jnz     short loc_140AC27CB
 * 0000000140AC27D6: mov     r8d, [r13+14h]
 * 0000000140AC27DA: btr     ebx, 1Fh
 * 0000000140AC27DE: cmp     ebx, r8d
 * 0000000140AC27E1: jz      loc_140AC2909
 * 0000000140AC27E7: mov     ecx, [r13+10h]
 * 0000000140AC27EB: mov     rdx, [r13+8]
 * 0000000140AC27EF: test    rcx, rcx
 * 0000000140AC27F2: jz      loc_140AC28A8
 * 0000000140AC27F8: mov     eax, [rsi+95Ch]
 * 0000000140AC27FE: mov     r9d, 40h ; '@'
 * 0000000140AC2804: test    r9b, al
 * 0000000140AC2807: jz      loc_140AC28A8
 * 0000000140AC280D: mov     r12, cr8
 * 0000000140AC2811: lea     eax, [r9-3Eh]
 * 0000000140AC2815: mov     cr8, rax
 * 0000000140AC2819: mov     r14, rdx
 * 0000000140AC281C: lea     rax, [rcx-1]
 * 0000000140AC2820: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140AC2827: add     rax, rdx
 * 0000000140AC282A: or      rax, 0FFFh
 * 0000000140AC2830: mov     [rbp+0B30h+arg_8], rax
 * 0000000140AC2837: lea     r13, [r14-1]
 * 0000000140AC283B: movzx   r15d, r12b
 * 0000000140AC283F: mov     rax, [rsi+458h]
 * 0000000140AC2846: xor     edx, edx
 * 0000000140AC2848: mov     rcx, r14
 * 0000000140AC284B: call    j__guard_dispatch_icall_nop
 * 0000000140AC2850: cmp     eax, 0C000022Dh
 * 0000000140AC2855: jnz     short loc_140AC287B
 * 0000000140AC2857: mov     eax, 1
 * 0000000140AC285C: cmp     r12b, al
 * 0000000140AC285F: ja      short loc_140AC287F
 * 0000000140AC2861: movzx   r15d, r12b
 * 0000000140AC2865: mov     cr8, r15
 * 0000000140AC2869: mov     al, [r14]
 * 0000000140AC286C: mov     rax, cr8
 * 0000000140AC2870: mov     eax, 2
 * 0000000140AC2875: mov     cr8, rax
 * 0000000140AC2879: jmp     short loc_140AC283F
 * 0000000140AC287B: test    eax, eax
 * 0000000140AC287D: js      short loc_140AC2898
 * 0000000140AC287F: mov     ecx, 1000h
 * 0000000140AC2884: add     r14, rcx
 * 0000000140AC2887: add     r13, rcx
 * 0000000140AC288A: cmp     r13, [rbp+0B30h+arg_8]
 * 0000000140AC2891: jnz     short loc_140AC283B
 * 0000000140AC2893: jmp     loc_140AC24FC
 * 0000000140AC2898: mov     cr8, r15
 * 0000000140AC289C: mov     r13, [rsp+0C30h+var_BE0]
 * 0000000140AC28A1: xor     r12d, r12d
 * 0000000140AC28A4: mov     r8d, [r13+14h]
 * 0000000140AC28A8: cmp     [rsi+8C0h], r12d
 * 0000000140AC28AF: jnz     short loc_140AC2909
 * 0000000140AC28B1: mov     eax, r8d
 * 0000000140AC28B4: mov     ecx, ebx
 * 0000000140AC28B6: xor     rcx, rax
 * 0000000140AC28B9: mov     rax, [rsi+568h]
 * 0000000140AC28C0: mov     [rax+18h], rcx
 * 0000000140AC28C4: mov     rcx, [r13+8]
 * 0000000140AC28C8: cmp     [rsi+8C0h], r12d
 * 0000000140AC28CF: jnz     short loc_140AC2909
 * 0000000140AC28D1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC28DB: add     rax, rsi
 * 0000000140AC28DE: mov     [rsi+8C8h], rax
 * 0000000140AC28E5: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC28EF: add     rax, r13
 * 0000000140AC28F2: mov     [rsi+8D0h], rax
 * 0000000140AC28F9: movsxd  rax, dword ptr [r13+0]
 * 0000000140AC28FD: jmp     loc_140AC2570
 * 0000000140AC2902: mov     [rsi+7ECh], r12d
 * 0000000140AC2909: mov     r12d, 1
 * 0000000140AC290F: test    dword ptr [rsi+95Ch], 4000h
 * 0000000140AC2919: jz      loc_140ABA35B
 * 0000000140AC291F: mov     ecx, [rsi+958h]
 * 0000000140AC2925: mov     edx, r12d
 * 0000000140AC2928: mov     r8, [rsi+4B8h]
 * 0000000140AC292F: shr     ecx, 0Ah
 * 0000000140AC2932: and     ecx, 1Fh
 * 0000000140AC2935: shl     edx, cl
 * 0000000140AC2937: not     edx
 * 0000000140AC2939: lock and [r8], edx
 * 0000000140AC293D: sti
 * 0000000140AC293E: jmp     loc_140ABA35B
 * 0000000140AC2943: mov     rcx, gs:20h
 * 0000000140AC294C: mov     rax, [rsi+618h]
 * 0000000140AC2953: mov     rcx, [rax+rcx]
 * 0000000140AC2957: mov     rax, [rsi+658h]
 * 0000000140AC295E: add     rcx, [rsi+678h]
 * 0000000140AC2965: mov     rcx, [rcx+rax]
 * 0000000140AC2969: mov     [rbp+0B30h+var_B20], rcx
 * 0000000140AC296D: mov     rax, [rsi+480h]
 * 0000000140AC2974: call    j__guard_dispatch_icall_nop
 * 0000000140AC2979: mov     r9d, 0FFFFFFFFh
 * 0000000140AC297F: xor     r15d, r15d
 * 0000000140AC2982: mov     r14, rax
 * 0000000140AC2985: cmp     rax, r9
 * 0000000140AC2988: jnz     loc_140AC2ABD
 * 0000000140AC298E: mov     [rbp+0B30h+var_B20], r15
 * 0000000140AC2992: mov     rcx, [rsi+950h]
 * 0000000140AC2999: test    rcx, rcx
 * 0000000140AC299C: jz      short loc_140AC29C1
 * 0000000140AC299E: mov     rax, [rsi+470h]
 * 0000000140AC29A5: lea     rdx, [rbp+0B30h+var_B20]
 * 0000000140AC29A9: call    j__guard_dispatch_icall_nop
 * 0000000140AC29AE: mov     rcx, [rbp+0B30h+var_B20]
 * 0000000140AC29B2: test    eax, eax
 * 0000000140AC29B4: cmovs   rcx, r15
 * 0000000140AC29B8: mov     [rbp+0B30h+var_B20], rcx
 * 0000000140AC29BC: test    rcx, rcx
 * 0000000140AC29BF: jnz     short loc_140AC29D3
 * 0000000140AC29C1: mov     rax, [rsi+3B0h]
 * 0000000140AC29C8: xor     ecx, ecx
 * 0000000140AC29CA: call    j__guard_dispatch_icall_nop
 * 0000000140AC29CF: mov     [rbp+0B30h+var_B20], rax
 * 0000000140AC29D3: mov     [rsi+950h], r15
 * 0000000140AC29DA: mov     ebx, r15d
 * 0000000140AC29DD: mov     rcx, [rbp+0B30h+var_B20]
 * 0000000140AC29E1: mov     r12d, 1
 * 0000000140AC29E7: test    rcx, rcx
 * 0000000140AC29EA: jz      loc_140AC2AAF
 * 0000000140AC29F0: mov     rax, [rsi+390h]
 * 0000000140AC29F7: add     ebx, r12d
 * 0000000140AC29FA: call    j__guard_dispatch_icall_nop
 * 0000000140AC29FF: test    eax, eax
 * 0000000140AC2A01: js      short loc_140AC2A5E
 * 0000000140AC2A03: mov     rax, [rsi+428h]
 * 0000000140AC2A0A: lea     rdx, [rbp+0B30h+var_90]
 * 0000000140AC2A11: mov     rcx, [rbp+0B30h+var_B20]
 * 0000000140AC2A15: call    j__guard_dispatch_icall_nop
 * 0000000140AC2A1A: mov     rax, [rsi+480h]
 * 0000000140AC2A21: call    j__guard_dispatch_icall_nop
 * 0000000140AC2A26: mov     r14, rax
 * 0000000140AC2A29: lea     rcx, [rbp+0B30h+var_90]
 * 0000000140AC2A30: mov     rax, [rsi+430h]
 * 0000000140AC2A37: call    j__guard_dispatch_icall_nop
 * 0000000140AC2A3C: mov     rax, [rsi+398h]
 * 0000000140AC2A43: mov     rcx, [rbp+0B30h+var_B20]
 * 0000000140AC2A47: call    j__guard_dispatch_icall_nop
 * 0000000140AC2A4C: mov     eax, 0FFFFFFFFh
 * 0000000140AC2A51: cmp     r14, rax
 * 0000000140AC2A54: jnz     short loc_140AC2A7D
 * 0000000140AC2A56: cmp     ebx, 100h
 * 0000000140AC2A5C: ja      short loc_140AC2A7D
 * 0000000140AC2A5E: mov     rax, [rsi+3B0h]
 * 0000000140AC2A65: mov     rcx, [rbp+0B30h+var_B20]
 * 0000000140AC2A69: call    j__guard_dispatch_icall_nop
 * 0000000140AC2A6E: mov     rcx, rax
 * 0000000140AC2A71: mov     [rbp+0B30h+var_B20], rax
 * 0000000140AC2A75: test    rax, rax
 * 0000000140AC2A78: jmp     loc_140AC29EA
 * 0000000140AC2A7D: mov     rax, [rsi+478h]
 * 0000000140AC2A84: mov     rcx, [rbp+0B30h+var_B20]
 * 0000000140AC2A88: call    j__guard_dispatch_icall_nop
 * 0000000140AC2A8D: mov     [rsi+950h], rax
 * 0000000140AC2A94: mov     rax, [rsi+1D0h]
 * 0000000140AC2A9B: mov     rcx, [rbp+0B30h+var_B20]
 * 0000000140AC2A9F: call    j__guard_dispatch_icall_nop
 * 0000000140AC2AA4: mov     r9d, 0FFFFFFFFh
 * 0000000140AC2AAA: cmp     r14, r9
 * 0000000140AC2AAD: jnz     short loc_140AC2AC3
 * 0000000140AC2AAF: shl     ebx, 0Ch
 * 0000000140AC2AB2: add     [rsi+7F0h], ebx
 * 0000000140AC2AB8: jmp     loc_140ABA35B
 * 0000000140AC2ABD: mov     r12d, 1
 * 0000000140AC2AC3: test    dword ptr [rsi+958h], 40000000h
 * 0000000140AC2ACD: jz      short loc_140AC2B12
 * 0000000140AC2ACF: mov     rcx, [rsi+0A48h]
 * 0000000140AC2AD6: mov     edx, 30h ; '0'
 * 0000000140AC2ADB: lea     r8d, [rdx-2Ah]
 * 0000000140AC2ADF: mov     rax, [r13+0]
 * 0000000140AC2AE3: add     edx, 0FFFFFFF8h
 * 0000000140AC2AE6: mov     [rcx], rax
 * 0000000140AC2AE9: add     r13, 8
 * 0000000140AC2AED: add     rcx, 8
 * 0000000140AC2AF1: sub     r8, r12
 * 0000000140AC2AF4: jnz     short loc_140AC2ADF
 * 0000000140AC2AF6: test    edx, edx
 * 0000000140AC2AF8: jz      short loc_140AC2B0B
 * 0000000140AC2AFA: mov     al, [r13+0]
 * 0000000140AC2AFE: add     r13, r12
 * 0000000140AC2B01: mov     [rcx], al
 * 0000000140AC2B03: add     rcx, r12
 * 0000000140AC2B06: add     edx, r9d
 * 0000000140AC2B09: jnz     short loc_140AC2AFA
 * 0000000140AC2B0B: mov     r13, [rsi+0A48h]
 * 0000000140AC2B12: mov     [r13+18h], r14
 * 0000000140AC2B16: mov     rcx, [rbp+0B30h+var_B20]
 * 0000000140AC2B1A: cmp     [rsi+8C0h], r15d
 * 0000000140AC2B21: jmp     loc_140AC226A
 * 0000000140AC2B26: mov     eax, [rsi+7F8h]
 * 0000000140AC2B2C: mov     r12d, 1
 * 0000000140AC2B32: test    r12b, al
 * 0000000140AC2B35: jnz     loc_140ABA35B
 * 0000000140AC2B3B: mov     r15, [rsi+520h]
 * 0000000140AC2B42: xor     eax, eax
 * 0000000140AC2B44: mov     r14d, eax
 * 0000000140AC2B47: mov     rax, [rsi+168h]
 * 0000000140AC2B4E: call    j__guard_dispatch_icall_nop
 * 0000000140AC2B53: test    dword ptr [rsi+958h], 40000000h
 * 0000000140AC2B5D: jnz     short loc_140AC2B71
 * 0000000140AC2B5F: mov     ecx, [rsi+918h]
 * 0000000140AC2B65: cmp     ecx, 7
 * 0000000140AC2B68: jnb     short loc_140AC2B71
 * 0000000140AC2B6A: mov     ebx, r12d
 * 0000000140AC2B6D: shl     bl, cl
 * 0000000140AC2B6F: jmp     short loc_140AC2B88
 * 0000000140AC2B71: mov     rax, [rsi+118h]
 * 0000000140AC2B78: xor     edx, edx
 * 0000000140AC2B7A: mov     rcx, [rsi+9C8h]
 * 0000000140AC2B81: call    j__guard_dispatch_icall_nop
 * 0000000140AC2B86: mov     bl, 80h
 * 0000000140AC2B88: mov     rax, [rsi+128h]
 * 0000000140AC2B8F: xor     edx, edx
 * 0000000140AC2B91: mov     rcx, r15
 * 0000000140AC2B94: call    j__guard_dispatch_icall_nop
 * 0000000140AC2B99: cmp     bl, 80h
 * 0000000140AC2B9C: jz      short loc_140AC2BD1
 * 0000000140AC2B9E: mov     r8, [rsi+4F8h]
 * 0000000140AC2BA5: mov     rdx, [r8]
 * 0000000140AC2BA8: cmp     rdx, r8
 * 0000000140AC2BAB: jz      short loc_140AC2BE6
 * 0000000140AC2BAD: not     bl
 * 0000000140AC2BAF: mov     rax, [rsi+688h]
 * 0000000140AC2BB6: mov     rcx, rdx
 * 0000000140AC2BB9: sub     rcx, [rsi+6A0h]
 * 0000000140AC2BC0: lock and [rcx+rax], bl
 * 0000000140AC2BC4: mov     rdx, [rdx]
 * 0000000140AC2BC7: add     r14d, r12d
 * 0000000140AC2BCA: cmp     rdx, r8
 * 0000000140AC2BCD: jnz     short loc_140AC2BAF
 * 0000000140AC2BCF: jmp     short loc_140AC2BE6
 * 0000000140AC2BD1: mov     rax, [rsi+120h]
 * 0000000140AC2BD8: xor     edx, edx
 * 0000000140AC2BDA: mov     rcx, [rsi+9C8h]
 * 0000000140AC2BE1: call    j__guard_dispatch_icall_nop
 * 0000000140AC2BE6: mov     rcx, [rsi+520h]
 * 0000000140AC2BED: xor     edx, edx
 * 0000000140AC2BEF: mov     rax, [rsi+130h]
 * 0000000140AC2BF6: call    j__guard_dispatch_icall_nop
 * 0000000140AC2BFB: mov     rax, [rsi+170h]
 * 0000000140AC2C02: call    j__guard_dispatch_icall_nop
 * 0000000140AC2C07: shl     r14d, 7
 * 0000000140AC2C0B: add     [rsi+7F0h], r14d
 * 0000000140AC2C12: jmp     loc_140ABA35B
 * 0000000140AC2C17: mov     ecx, [r13+20h]
 * 0000000140AC2C1B: mov     edx, 2
 * 0000000140AC2C20: xor     r12d, r12d
 * 0000000140AC2C23: mov     [rbp+0B30h+var_BA8], rsi
 * 0000000140AC2C27: test    dl, cl
 * 0000000140AC2C29: jz      loc_140AC30BC
 * 0000000140AC2C2F: cmp     [rsi+948h], r12
 * 0000000140AC2C36: jz      short loc_140AC2CA1
 * 0000000140AC2C38: mov     eax, [rsi+95Ch]
 * 0000000140AC2C3E: test    al, 4
 * 0000000140AC2C40: jnz     short loc_140AC2CA1
 * 0000000140AC2C42: test    dl, cl
 * 0000000140AC2C44: jz      loc_140AC30BC
 * 0000000140AC2C4A: mov     r8d, [rsi+7ECh]
 * 0000000140AC2C51: mov     edx, eax
 * 0000000140AC2C53: test    r8d, r8d
 * 0000000140AC2C56: jnz     short loc_140AC2C94
 * 0000000140AC2C58: lea     ecx, ds:0[rax*8]
 * 0000000140AC2C5F: xor     ecx, eax
 * 0000000140AC2C61: and     ecx, 20h
 * 0000000140AC2C64: xor     ecx, eax
 * 0000000140AC2C66: mov     [rsi+95Ch], ecx
 * 0000000140AC2C6C: cmp     [rsi+948h], r12
 * 0000000140AC2C73: jz      loc_140AC30B0
 * 0000000140AC2C79: test    r8d, r8d
 * 0000000140AC2C7C: jnz     short loc_140AC2CAD
 * 0000000140AC2C7E: lea     edx, ds:0[rcx*8]
 * 0000000140AC2C85: xor     edx, ecx
 * 0000000140AC2C87: and     edx, 20h
 * 0000000140AC2C8A: xor     edx, ecx
 * 0000000140AC2C8C: mov     [rsi+95Ch], edx
 * 0000000140AC2C92: jmp     short loc_140AC2CBE
 * 0000000140AC2C94: mov     eax, edx
 * 0000000140AC2C96: mov     ecx, edx
 * 0000000140AC2C98: shr     eax, 3
 * 0000000140AC2C9B: xor     eax, edx
 * 0000000140AC2C9D: test    al, 4
 * 0000000140AC2C9F: jz      short loc_140AC2C6C
 * 0000000140AC2CA1: mov     [rsi+7ECh], r12d
 * 0000000140AC2CA8: jmp     loc_140ABA5AF
 * 0000000140AC2CAD: mov     eax, ecx
 * 0000000140AC2CAF: mov     edx, ecx
 * 0000000140AC2CB1: shr     eax, 3
 * 0000000140AC2CB4: xor     eax, ecx
 * 0000000140AC2CB6: test    al, 4
 * 0000000140AC2CB8: jnz     loc_140AC30B0
 * 0000000140AC2CBE: test    dl, 4
 * 0000000140AC2CC1: jz      loc_140AC2D94
 * 0000000140AC2CC7: mov     ecx, [r13+8]
 * 0000000140AC2CCB: mov     r14d, [r13+10h]
 * 0000000140AC2CCF: and     ecx, 0FFFh
 * 0000000140AC2CD5: mov     rbx, [r13+8]
 * 0000000140AC2CD9: add     r14, 0FFFh
 * 0000000140AC2CE0: add     r14, rcx
 * 0000000140AC2CE3: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140AC2CEA: shr     r14, 0Ch
 * 0000000140AC2CEE: test    r14, r14
 * 0000000140AC2CF1: jz      loc_140AC2F7D
 * 0000000140AC2CF7: mov     rax, [rsi+2A0h]
 * 0000000140AC2CFE: mov     rcx, rbx
 * 0000000140AC2D01: sub     r14, r11
 * 0000000140AC2D04: call    j__guard_dispatch_icall_nop
 * 0000000140AC2D09: test    al, al
 * 0000000140AC2D0B: jz      short loc_140AC2D65
 * 0000000140AC2D0D: cmp     [rsi+8C0h], r12d
 * 0000000140AC2D14: jnz     short loc_140AC2D65
 * 0000000140AC2D16: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC2D20: mov     edi, 1
 * 0000000140AC2D25: add     rax, rsi
 * 0000000140AC2D28: xor     edx, edx
 * 0000000140AC2D2A: mov     [rsi+8C8h], rax
 * 0000000140AC2D31: mov     rcx, rsi
 * 0000000140AC2D34: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC2D3E: add     rax, r13
 * 0000000140AC2D41: mov     [rsi+8D0h], rax
 * 0000000140AC2D48: movsxd  rax, dword ptr [r13+0]
 * 0000000140AC2D4C: mov     [rsi+8D8h], rax
 * 0000000140AC2D53: mov     [rsi+8E0h], rbx
 * 0000000140AC2D5A: mov     [rsi+8C0h], edi
 * 0000000140AC2D60: call    sub_140AD049C
 * 0000000140AC2D65: add     dword ptr [rsi+7F0h], 100h
 * 0000000140AC2D6F: add     rbx, 1000h
 * 0000000140AC2D76: mov     r11d, 1
 * 0000000140AC2D7C: test    r14, r14
 * 0000000140AC2D7F: jnz     loc_140AC2CF7
 * 0000000140AC2D85: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC2D8C: mov     r12d, r11d
 * 0000000140AC2D8F: jmp     loc_140AC2F83
 * 0000000140AC2D94: mov     r14, [r13+8]
 * 0000000140AC2D98: mov     r8d, [r13+10h]
 * 0000000140AC2D9C: mov     r9, r14
 * 0000000140AC2D9F: add     [rsi+7F0h], r8d
 * 0000000140AC2DA6: mov     rax, r14
 * 0000000140AC2DA9: mov     r11d, [rsi+7DCh]
 * 0000000140AC2DB0: mov     r15, [rsi+7E0h]
 * 0000000140AC2DB7: lea     rcx, [r14+r8]
 * 0000000140AC2DBB: cmp     r14, rcx
 * 0000000140AC2DBE: jnb     short loc_140AC2DD0
 * 0000000140AC2DC0: mov     edx, 40h ; '@'
 * 0000000140AC2DC5: prefetchnta byte ptr [rax]
 * 0000000140AC2DC8: add     rax, rdx
 * 0000000140AC2DCB: cmp     rax, rcx
 * 0000000140AC2DCE: jb      short loc_140AC2DC5
 * 0000000140AC2DD0: mov     r10d, r8d
 * 0000000140AC2DD3: mov     rbx, r15
 * 0000000140AC2DD6: shr     r10d, 7
 * 0000000140AC2DDA: test    r10d, r10d
 * 0000000140AC2DDD: jz      short loc_140AC2E57
 * 0000000140AC2DDF: mov     rdi, 7010008004002001h
 * 0000000140AC2DE9: mov     edx, 8
 * 0000000140AC2DEE: lea     esi, [rdx-7]
 * 0000000140AC2DF1: mov     rax, [r9]
 * 0000000140AC2DF4: mov     ecx, r11d
 * 0000000140AC2DF7: xor     rax, rbx
 * 0000000140AC2DFA: mov     rbx, [r9+8]
 * 0000000140AC2DFE: rol     rax, cl
 * 0000000140AC2E01: add     r9, 10h
 * 0000000140AC2E05: xor     rbx, rax
 * 0000000140AC2E08: rol     rbx, cl
 * 0000000140AC2E0B: sub     rdx, rsi
 * 0000000140AC2E0E: jnz     short loc_140AC2DF1
 * 0000000140AC2E10: mov     rcx, r9
 * 0000000140AC2E13: sub     rcx, r14
 * 0000000140AC2E16: xor     rcx, r15
 * 0000000140AC2E19: mov     rax, rcx
 * 0000000140AC2E1C: rol     rax, 11h
 * 0000000140AC2E20: xor     rcx, rax
 * 0000000140AC2E23: mov     rax, rdi
 * 0000000140AC2E26: mul     rcx
 * 0000000140AC2E29: xor     r11d, edx
 * 0000000140AC2E2C: mov     [rbp+0B30h+var_5E8], rdx
 * 0000000140AC2E33: xor     r11d, eax
 * 0000000140AC2E36: mov     rax, rsi
 * 0000000140AC2E39: and     r11d, 3Fh
 * 0000000140AC2E3D: cmovz   r11d, eax
 * 0000000140AC2E41: mov     eax, 0FFFFFFFFh
 * 0000000140AC2E46: add     r10d, eax
 * 0000000140AC2E49: jnz     short loc_140AC2DE9
 * 0000000140AC2E4B: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC2E50: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC2E57: and     r8d, 7Fh
 * 0000000140AC2E5B: mov     r10d, 1
 * 0000000140AC2E61: cmp     r8d, 8
 * 0000000140AC2E65: jb      short loc_140AC2E84
 * 0000000140AC2E67: mov     edx, r8d
 * 0000000140AC2E6A: shr     rdx, 3
 * 0000000140AC2E6E: xor     rbx, [r9]
 * 0000000140AC2E71: mov     ecx, r11d
 * 0000000140AC2E74: rol     rbx, cl
 * 0000000140AC2E77: add     r9, 8
 * 0000000140AC2E7B: add     r8d, 0FFFFFFF8h
 * 0000000140AC2E7F: sub     rdx, r10
 * 0000000140AC2E82: jnz     short loc_140AC2E6E
 * 0000000140AC2E84: test    r8d, r8d
 * 0000000140AC2E87: jz      short loc_140AC2EA8
 * 0000000140AC2E89: mov     esi, 0FFFFFFFFh
 * 0000000140AC2E8E: movzx   eax, byte ptr [r9]
 * 0000000140AC2E92: mov     ecx, r11d
 * 0000000140AC2E95: xor     rbx, rax
 * 0000000140AC2E98: add     r9, r10
 * 0000000140AC2E9B: rol     rbx, cl
 * 0000000140AC2E9E: add     r8d, esi
 * 0000000140AC2EA1: jnz     short loc_140AC2E8E
 * 0000000140AC2EA3: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC2EA8: mov     rax, rbx
 * 0000000140AC2EAB: jmp     short loc_140AC2EAF
 * 0000000140AC2EAD: xor     ebx, eax
 * 0000000140AC2EAF: shr     rax, 1Fh
 * 0000000140AC2EB3: test    rax, rax
 * 0000000140AC2EB6: jnz     short loc_140AC2EAD
 * 0000000140AC2EB8: mov     r8d, [r13+14h]
 * 0000000140AC2EBC: btr     ebx, 1Fh
 * 0000000140AC2EC0: cmp     ebx, r8d
 * 0000000140AC2EC3: jz      loc_140AC2F7D
 * 0000000140AC2EC9: mov     ecx, [r13+10h]
 * 0000000140AC2ECD: mov     rdx, [r13+8]
 * 0000000140AC2ED1: test    rcx, rcx
 * 0000000140AC2ED4: jz      loc_140AC3029
 * 0000000140AC2EDA: mov     eax, [rsi+95Ch]
 * 0000000140AC2EE0: mov     r9d, 40h ; '@'
 * 0000000140AC2EE6: test    r9b, al
 * 0000000140AC2EE9: jz      loc_140AC3029
 * 0000000140AC2EEF: mov     r12, cr8
 * 0000000140AC2EF3: lea     eax, [r9-3Eh]
 * 0000000140AC2EF7: mov     cr8, rax
 * 0000000140AC2EFB: mov     r14, rdx
 * 0000000140AC2EFE: lea     rax, [rcx-1]
 * 0000000140AC2F02: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140AC2F09: add     rax, rdx
 * 0000000140AC2F0C: or      rax, 0FFFh
 * 0000000140AC2F12: mov     [rbp+0B30h+arg_8], rax
 * 0000000140AC2F19: lea     r13, [r14-1]
 * 0000000140AC2F1D: movzx   r15d, r12b
 * 0000000140AC2F21: mov     rax, [rsi+458h]
 * 0000000140AC2F28: xor     edx, edx
 * 0000000140AC2F2A: mov     rcx, r14
 * 0000000140AC2F2D: call    j__guard_dispatch_icall_nop
 * 0000000140AC2F32: cmp     eax, 0C000022Dh
 * 0000000140AC2F37: jnz     short loc_140AC2F5D
 * 0000000140AC2F39: mov     eax, 1
 * 0000000140AC2F3E: cmp     r12b, al
 * 0000000140AC2F41: ja      short loc_140AC2F65
 * 0000000140AC2F43: movzx   r15d, r12b
 * 0000000140AC2F47: mov     cr8, r15
 * 0000000140AC2F4B: mov     al, [r14]
 * 0000000140AC2F4E: mov     rax, cr8
 * 0000000140AC2F52: mov     eax, 2
 * 0000000140AC2F57: mov     cr8, rax
 * 0000000140AC2F5B: jmp     short loc_140AC2F21
 * 0000000140AC2F5D: test    eax, eax
 * 0000000140AC2F5F: js      loc_140AC3019
 * 0000000140AC2F65: mov     ecx, 1000h
 * 0000000140AC2F6A: add     r14, rcx
 * 0000000140AC2F6D: add     r13, rcx
 * 0000000140AC2F70: cmp     r13, [rbp+0B30h+arg_8]
 * 0000000140AC2F77: jnz     short loc_140AC2F1D
 * 0000000140AC2F79: mov     cr8, r15
 * 0000000140AC2F7D: mov     r12d, 1
 * 0000000140AC2F83: mov     rbx, [rsp+0C30h+var_BE0]
 * 0000000140AC2F88: mov     eax, [rbx+20h]
 * 0000000140AC2F8B: test    r12b, al
 * 0000000140AC2F8E: jz      loc_140ABA35B
 * 0000000140AC2F94: mov     rax, rbx
 * 0000000140AC2F97: mov     rbx, [rbx+18h]
 * 0000000140AC2F9B: mov     rax, [rsi+1E8h]
 * 0000000140AC2FA2: mov     rcx, rbx
 * 0000000140AC2FA5: mov     [rsp+0C30h+var_BD8], rbx
 * 0000000140AC2FAA: call    j__guard_dispatch_icall_nop
 * 0000000140AC2FAF: movzx   r15d, word ptr [rax+14h]
 * 0000000140AC2FB4: add     r15, 18h
 * 0000000140AC2FB8: add     r15, rax
 * 0000000140AC2FBB: movzx   eax, word ptr [rax+6]
 * 0000000140AC2FBF: lea     rcx, [rax+rax*4]
 * 0000000140AC2FC3: lea     rax, [r15+rcx*8]
 * 0000000140AC2FC7: cmp     r15, rax
 * 0000000140AC2FCA: jz      loc_140ABA35B
 * 0000000140AC2FD0: mov     r12d, [rsi+7ECh]
 * 0000000140AC2FD7: xor     edx, edx
 * 0000000140AC2FD9: test    r12d, r12d
 * 0000000140AC2FDC: jnz     short loc_140AC2FEE
 * 0000000140AC2FDE: mov     dword ptr [rsi+7ECh], 1000h
 * 0000000140AC2FE8: mov     r12d, 1000h
 * 0000000140AC2FEE: cmp     rbx, [rsi+5C0h]
 * 0000000140AC2FF5: jz      loc_140AC3340
 * 0000000140AC2FFB: cmp     rbx, [rsi+5C8h]
 * 0000000140AC3002: jz      loc_140AC3340
 * 0000000140AC3008: mov     dword ptr [rbp+0B30h+arg_8], edx
 * 0000000140AC300E: mov     r14d, 1
 * 0000000140AC3014: jmp     loc_140AC334D
 * 0000000140AC3019: mov     cr8, r15
 * 0000000140AC301D: mov     r13, [rsp+0C30h+var_BE0]
 * 0000000140AC3022: xor     r12d, r12d
 * 0000000140AC3025: mov     r8d, [r13+14h]
 * 0000000140AC3029: cmp     [rsi+8C0h], r12d
 * 0000000140AC3030: jnz     loc_140AC2F7D
 * 0000000140AC3036: mov     eax, ebx
 * 0000000140AC3038: mov     ecx, r8d
 * 0000000140AC303B: xor     rcx, rax
 * 0000000140AC303E: mov     rax, [rsi+568h]
 * 0000000140AC3045: mov     [rax+18h], rcx
 * 0000000140AC3049: cmp     [rsi+8C0h], r12d
 * 0000000140AC3050: mov     r12d, 1
 * 0000000140AC3056: mov     rcx, [r13+8]
 * 0000000140AC305A: jnz     loc_140AC2F83
 * 0000000140AC3060: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC306A: add     rax, rsi
 * 0000000140AC306D: mov     [rsi+8C8h], rax
 * 0000000140AC3074: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC307E: add     rax, r13
 * 0000000140AC3081: mov     [rsi+8D0h], rax
 * 0000000140AC3088: movsxd  rax, dword ptr [r13+0]
 * 0000000140AC308C: mov     [rsi+8D8h], rax
 * 0000000140AC3093: xor     edx, edx
 * 0000000140AC3095: mov     [rsi+8E0h], rcx
 * 0000000140AC309C: mov     rcx, rsi
 * 0000000140AC309F: mov     [rsi+8C0h], r12d
 * 0000000140AC30A6: call    sub_140AD049C
 * 0000000140AC30AB: jmp     loc_140AC2F83
 * 0000000140AC30B0: mov     [rsi+7ECh], r12d
 * 0000000140AC30B7: jmp     loc_140AC2F7D
 * 0000000140AC30BC: mov     r14, [r13+8]
 * 0000000140AC30C0: mov     r8d, [r13+10h]
 * 0000000140AC30C4: mov     r9, r14
 * 0000000140AC30C7: add     [rsi+7F0h], r8d
 * 0000000140AC30CE: mov     rax, r14
 * 0000000140AC30D1: mov     r10d, [rsi+7DCh]
 * 0000000140AC30D8: mov     r15, [rsi+7E0h]
 * 0000000140AC30DF: lea     rcx, [r14+r8]
 * 0000000140AC30E3: cmp     r14, rcx
 * 0000000140AC30E6: jnb     short loc_140AC30F8
 * 0000000140AC30E8: mov     edx, 40h ; '@'
 * 0000000140AC30ED: prefetchnta byte ptr [rax]
 * 0000000140AC30F0: add     rax, rdx
 * 0000000140AC30F3: cmp     rax, rcx
 * 0000000140AC30F6: jb      short loc_140AC30ED
 * 0000000140AC30F8: mov     r11d, r8d
 * 0000000140AC30FB: mov     rbx, r15
 * 0000000140AC30FE: shr     r11d, 7
 * 0000000140AC3102: mov     r13d, 1
 * 0000000140AC3108: test    r11d, r11d
 * 0000000140AC310B: jz      short loc_140AC3178
 * 0000000140AC310D: mov     rsi, 7010008004002001h
 * 0000000140AC3117: mov     edx, 8
 * 0000000140AC311C: mov     rax, [r9]
 * 0000000140AC311F: mov     ecx, r10d
 * 0000000140AC3122: xor     rax, rbx
 * 0000000140AC3125: mov     rbx, [r9+8]
 * 0000000140AC3129: rol     rax, cl
 * 0000000140AC312C: add     r9, 10h
 * 0000000140AC3130: xor     rbx, rax
 * 0000000140AC3133: rol     rbx, cl
 * 0000000140AC3136: sub     rdx, r13
 * 0000000140AC3139: jnz     short loc_140AC311C
 * 0000000140AC313B: mov     rcx, r9
 * 0000000140AC313E: sub     rcx, r14
 * 0000000140AC3141: xor     rcx, r15
 * 0000000140AC3144: mov     rax, rcx
 * 0000000140AC3147: rol     rax, 11h
 * 0000000140AC314B: xor     rcx, rax
 * 0000000140AC314E: mov     rax, rsi
 * 0000000140AC3151: mul     rcx
 * 0000000140AC3154: xor     r10d, edx
 * 0000000140AC3157: mov     [rbp+0B30h+var_5E0], rdx
 * 0000000140AC315E: xor     r10d, eax
 * 0000000140AC3161: mov     eax, 0FFFFFFFFh
 * 0000000140AC3166: and     r10d, 3Fh
 * 0000000140AC316A: cmovz   r10d, r13d
 * 0000000140AC316E: add     r11d, eax
 * 0000000140AC3171: jnz     short loc_140AC3117
 * 0000000140AC3173: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC3178: and     r8d, 7Fh
 * 0000000140AC317C: cmp     r8d, 8
 * 0000000140AC3180: jb      short loc_140AC319F
 * 0000000140AC3182: mov     edx, r8d
 * 0000000140AC3185: shr     rdx, 3
 * 0000000140AC3189: xor     rbx, [r9]
 * 0000000140AC318C: mov     ecx, r10d
 * 0000000140AC318F: rol     rbx, cl
 * 0000000140AC3192: add     r9, 8
 * 0000000140AC3196: add     r8d, 0FFFFFFF8h
 * 0000000140AC319A: sub     rdx, r13
 * 0000000140AC319D: jnz     short loc_140AC3189
 * 0000000140AC319F: test    r8d, r8d
 * 0000000140AC31A2: jz      short loc_140AC31C3
 * 0000000140AC31A4: mov     esi, 0FFFFFFFFh
 * 0000000140AC31A9: movzx   eax, byte ptr [r9]
 * 0000000140AC31AD: mov     ecx, r10d
 * 0000000140AC31B0: xor     rbx, rax
 * 0000000140AC31B3: add     r9, r13
 * 0000000140AC31B6: rol     rbx, cl
 * 0000000140AC31B9: add     r8d, esi
 * 0000000140AC31BC: jnz     short loc_140AC31A9
 * 0000000140AC31BE: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC31C3: mov     rax, rbx
 * 0000000140AC31C6: jmp     short loc_140AC31CA
 * 0000000140AC31C8: xor     ebx, eax
 * 0000000140AC31CA: shr     rax, 1Fh
 * 0000000140AC31CE: test    rax, rax
 * 0000000140AC31D1: jnz     short loc_140AC31C8
 * 0000000140AC31D3: mov     rdx, [rsp+0C30h+var_BE0]
 * 0000000140AC31D8: btr     ebx, 1Fh
 * 0000000140AC31DC: mov     r13d, r12d
 * 0000000140AC31DF: cmp     ebx, [rdx+14h]
 * 0000000140AC31E2: jz      loc_140AC2F7D
 * 0000000140AC31E8: cmp     [rdx], r12d
 * 0000000140AC31EB: jnz     short loc_140AC31FA
 * 0000000140AC31ED: cmp     [rdx+18h], r12d
 * 0000000140AC31F1: mov     eax, 1
 * 0000000140AC31F6: cmovnz  r13d, eax
 * 0000000140AC31FA: mov     ecx, [rdx+10h]
 * 0000000140AC31FD: mov     rdx, [rdx+8]
 * 0000000140AC3201: test    rcx, rcx
 * 0000000140AC3204: jz      loc_140AC32C5
 * 0000000140AC320A: mov     eax, [rsi+95Ch]
 * 0000000140AC3210: mov     r8d, 40h ; '@'
 * 0000000140AC3216: test    r8b, al
 * 0000000140AC3219: jz      loc_140AC32C5
 * 0000000140AC321F: mov     r12, cr8
 * 0000000140AC3223: lea     eax, [r8-3Eh]
 * 0000000140AC3227: mov     cr8, rax
 * 0000000140AC322B: mov     r14, rdx
 * 0000000140AC322E: lea     rax, [rcx-1]
 * 0000000140AC3232: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140AC3239: add     rax, rdx
 * 0000000140AC323C: or      rax, 0FFFh
 * 0000000140AC3242: mov     [rsp+0C30h+var_BC8], rax
 * 0000000140AC3247: lea     rax, [r14-1]
 * 0000000140AC324B: mov     [rbp+0B30h+arg_8], rax
 * 0000000140AC3252: movzx   r15d, r12b
 * 0000000140AC3256: mov     rax, [rsi+458h]
 * 0000000140AC325D: xor     edx, edx
 * 0000000140AC325F: mov     rcx, r14
 * 0000000140AC3262: call    j__guard_dispatch_icall_nop
 * 0000000140AC3267: cmp     eax, 0C000022Dh
 * 0000000140AC326C: jnz     short loc_140AC3295
 * 0000000140AC326E: test    r13d, r13d
 * 0000000140AC3271: jnz     short loc_140AC32BE
 * 0000000140AC3273: lea     eax, [r13+1]
 * 0000000140AC3277: cmp     r12b, al
 * 0000000140AC327A: ja      short loc_140AC3299
 * 0000000140AC327C: movzx   r15d, r12b
 * 0000000140AC3280: mov     cr8, r15
 * 0000000140AC3284: mov     al, [r14]
 * 0000000140AC3287: mov     rax, cr8
 * 0000000140AC328B: lea     eax, [r13+2]
 * 0000000140AC328F: mov     cr8, rax
 * 0000000140AC3293: jmp     short loc_140AC3256
 * 0000000140AC3295: test    eax, eax
 * 0000000140AC3297: js      short loc_140AC32BE
 * 0000000140AC3299: mov     rax, [rbp+0B30h+arg_8]
 * 0000000140AC32A0: mov     ecx, 1000h
 * 0000000140AC32A5: add     rax, rcx
 * 0000000140AC32A8: add     r14, rcx
 * 0000000140AC32AB: mov     [rbp+0B30h+arg_8], rax
 * 0000000140AC32B2: cmp     rax, [rsp+0C30h+var_BC8]
 * 0000000140AC32B7: jnz     short loc_140AC3252
 * 0000000140AC32B9: jmp     loc_140AC2F79
 * 0000000140AC32BE: mov     cr8, r15
 * 0000000140AC32C2: xor     r12d, r12d
 * 0000000140AC32C5: mov     rax, [rsp+0C30h+var_BE0]
 * 0000000140AC32CA: mov     eax, [rax+14h]
 * 0000000140AC32CD: cmp     [rsi+8C0h], r12d
 * 0000000140AC32D4: jnz     loc_140AC2F7D
 * 0000000140AC32DA: mov     ecx, ebx
 * 0000000140AC32DC: xor     rcx, rax
 * 0000000140AC32DF: mov     rax, [rsi+568h]
 * 0000000140AC32E6: mov     [rax+18h], rcx
 * 0000000140AC32EA: mov     rcx, [rsp+0C30h+var_BE0]
 * 0000000140AC32EF: mov     rcx, [rcx+8]
 * 0000000140AC32F3: cmp     [rsi+8C0h], r12d
 * 0000000140AC32FA: jnz     loc_140AC2F7D
 * 0000000140AC3300: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC330A: mov     rdx, 0B3B74BDEE4453415h
 * 0000000140AC3314: add     rax, rsi
 * 0000000140AC3317: mov     r12d, 1
 * 0000000140AC331D: mov     [rsi+8C8h], rax
 * 0000000140AC3324: mov     rax, [rsp+0C30h+var_BE0]
 * 0000000140AC3329: add     rax, rdx
 * 0000000140AC332C: mov     [rsi+8D0h], rax
 * 0000000140AC3333: mov     rax, [rsp+0C30h+var_BE0]
 * 0000000140AC3338: movsxd  rax, dword ptr [rax]
 * 0000000140AC333B: jmp     loc_140AC308C
 * 0000000140AC3340: mov     r14d, 1
 * 0000000140AC3346: mov     dword ptr [rbp+0B30h+arg_8], r14d
 * 0000000140AC334D: mov     esi, dword ptr [rbp+0B30h+arg_8]
 * 0000000140AC3353: mov     rdi, rax
 * 0000000140AC3356: mov     ecx, [r15+10h]
 * 0000000140AC335A: mov     eax, [r15+8]
 * 0000000140AC335E: cmp     ecx, eax
 * 0000000140AC3360: mov     r11d, [r15+0Ch]
 * 0000000140AC3364: cmovbe  ecx, eax
 * 0000000140AC3367: lea     r13d, [r11+0FFFh]
 * 0000000140AC336E: add     r13d, ecx
 * 0000000140AC3371: and     r13d, 0FFFFF000h
 * 0000000140AC3378: cmp     r12d, r13d
 * 0000000140AC337B: jnb     short loc_140AC339E
 * 0000000140AC337D: test    dword ptr [r15+24h], 2000000h
 * 0000000140AC3385: jnz     short loc_140AC339B
 * 0000000140AC3387: mov     eax, [r15]
 * 0000000140AC338A: cmp     eax, 54494E49h
 * 0000000140AC338F: jnz     short loc_140AC33DB
 * 0000000140AC3391: cmp     dword ptr [r15+4], 4742444Bh
 * 0000000140AC3399: jnz     short loc_140AC3407
 * 0000000140AC339B: mov     r12d, r13d
 * 0000000140AC339E: mov     r8, [rbp+0B30h+var_BA8]
 * 0000000140AC33A2: add     r15, 28h ; '('
 * 0000000140AC33A6: mov     r14d, 1
 * 0000000140AC33AC: cmp     r15, rdi
 * 0000000140AC33AF: jnz     short loc_140AC3356
 * 0000000140AC33B1: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC33B6: cmp     r15, rdi
 * 0000000140AC33B9: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC33C0: jnz     loc_140AC381D
 * 0000000140AC33C6: cmp     r12d, r13d
 * 0000000140AC33C9: jb      loc_140AC381D
 * 0000000140AC33CF: mov     [r8+7ECh], edx
 * 0000000140AC33D6: jmp     loc_140ABA5AF
 * 0000000140AC33DB: cmp     eax, 45474150h
 * 0000000140AC33E0: jnz     short loc_140AC3407
 * 0000000140AC33E2: movzx   eax, word ptr [r15+4]
 * 0000000140AC33E7: mov     ecx, 7877h
 * 0000000140AC33EC: cmp     ax, cx
 * 0000000140AC33EF: jz      short loc_140AC339B
 * 0000000140AC33F1: mov     ecx, 7277h
 * 0000000140AC33F6: cmp     ax, cx
 * 0000000140AC33F9: jz      short loc_140AC339B
 * 0000000140AC33FB: mov     ecx, 7777h
 * 0000000140AC3400: cmp     ax, cx
 * 0000000140AC3403: jnz     short loc_140AC341A
 * 0000000140AC3405: jmp     short loc_140AC339B
 * 0000000140AC3407: cmp     eax, 41525245h
 * 0000000140AC340C: jnz     short loc_140AC341A
 * 0000000140AC340E: mov     eax, 4154h
 * 0000000140AC3413: cmp     [r15+4], ax
 * 0000000140AC3418: jz      short loc_140AC339B
 * 0000000140AC341A: mov     rcx, [rbp+0B30h+var_BA8]
 * 0000000140AC341E: test    rcx, rcx
 * 0000000140AC3421: jz      short loc_140AC345D
 * 0000000140AC3423: mov     rax, [rcx+900h]
 * 0000000140AC342A: mov     r8, [rcx+8F8h]
 * 0000000140AC3431: mov     qword ptr [rbp+0B30h+var_8B8+8], rax
 * 0000000140AC3438: mov     rax, [rcx+908h]
 * 0000000140AC343F: mov     qword ptr [rbp+0B30h+var_8A8], rax
 * 0000000140AC3446: mov     rax, [rcx+910h]
 * 0000000140AC344D: mov     qword ptr [rbp+0B30h+var_8A8+8], rax
 * 0000000140AC3454: mov     qword ptr [rbp+0B30h+var_8B8], r8
 * 0000000140AC345B: jmp     short loc_140AC3480
 * 0000000140AC345D: movups  xmm0, xmmword ptr cs:off_140C091E8; "PAGEVRF"
 * 0000000140AC3464: movups  xmm1, xmmword ptr cs:off_140C091F8; "INIT"
 * 0000000140AC346B: movups  [rbp+0B30h+var_8B8], xmm0
 * 0000000140AC3472: mov     r8, qword ptr [rbp+0B30h+var_8B8]
 * 0000000140AC3479: movups  [rbp+0B30h+var_8A8], xmm1
 * 0000000140AC3480: mov     r10d, 7
 * 0000000140AC3486: mov     r9, r15
 * 0000000140AC3489: movzx   edx, byte ptr [r9]
 * 0000000140AC348D: add     r9, r14
 * 0000000140AC3490: movzx   eax, byte ptr [r8]
 * 0000000140AC3494: add     r8, r14
 * 0000000140AC3497: cmp     rdx, rax
 * 0000000140AC349A: jnz     short loc_140AC34AB
 * 0000000140AC349C: mov     eax, 0FFFFFFFFh
 * 0000000140AC34A1: add     r10d, eax
 * 0000000140AC34A4: jnz     short loc_140AC3489
 * 0000000140AC34A6: jmp     loc_140AC355E
 * 0000000140AC34AB: mov     r9, qword ptr [rbp+0B30h+var_8B8+8]
 * 0000000140AC34B2: mov     r8d, 8
 * 0000000140AC34B8: mov     r10, r15
 * 0000000140AC34BB: mov     rcx, [r10]
 * 0000000140AC34BE: add     r10, 8
 * 0000000140AC34C2: mov     rax, [r9]
 * 0000000140AC34C5: add     r9, 8
 * 0000000140AC34C9: cmp     rcx, rax
 * 0000000140AC34CC: jnz     short loc_140AC3502
 * 0000000140AC34CE: add     r8d, 0FFFFFFF8h
 * 0000000140AC34D2: cmp     r8d, 8
 * 0000000140AC34D6: jnb     short loc_140AC34BB
 * 0000000140AC34D8: xor     edx, edx
 * 0000000140AC34DA: test    r8d, r8d
 * 0000000140AC34DD: jz      loc_140AC339B
 * 0000000140AC34E3: movzx   edx, byte ptr [r10]
 * 0000000140AC34E7: add     r10, r14
 * 0000000140AC34EA: movzx   eax, byte ptr [r9]
 * 0000000140AC34EE: add     r9, r14
 * 0000000140AC34F1: cmp     rdx, rax
 * 0000000140AC34F4: jnz     short loc_140AC3502
 * 0000000140AC34F6: mov     eax, 0FFFFFFFFh
 * 0000000140AC34FB: add     r8d, eax
 * 0000000140AC34FE: jnz     short loc_140AC34E3
 * 0000000140AC3500: jmp     short loc_140AC355E
 * 0000000140AC3502: mov     r8, qword ptr [rbp+0B30h+var_8A8]
 * 0000000140AC3509: mov     r10d, 4
 * 0000000140AC350F: mov     r9, r15
 * 0000000140AC3512: movzx   edx, byte ptr [r9]
 * 0000000140AC3516: add     r9, r14
 * 0000000140AC3519: movzx   eax, byte ptr [r8]
 * 0000000140AC351D: add     r8, r14
 * 0000000140AC3520: cmp     rdx, rax
 * 0000000140AC3523: jnz     short loc_140AC3531
 * 0000000140AC3525: mov     eax, 0FFFFFFFFh
 * 0000000140AC352A: add     r10d, eax
 * 0000000140AC352D: jnz     short loc_140AC3512
 * 0000000140AC352F: jmp     short loc_140AC355E
 * 0000000140AC3531: mov     r8, qword ptr [rbp+0B30h+var_8A8+8]
 * 0000000140AC3538: mov     r10d, 6
 * 0000000140AC353E: mov     r9, r15
 * 0000000140AC3541: movzx   edx, byte ptr [r9]
 * 0000000140AC3545: add     r9, r14
 * 0000000140AC3548: movzx   eax, byte ptr [r8]
 * 0000000140AC354C: add     r8, r14
 * 0000000140AC354F: cmp     rdx, rax
 * 0000000140AC3552: jnz     short loc_140AC3565
 * 0000000140AC3554: mov     eax, 0FFFFFFFFh
 * 0000000140AC3559: add     r10d, eax
 * 0000000140AC355C: jnz     short loc_140AC3541
 * 0000000140AC355E: xor     edx, edx
 * 0000000140AC3560: jmp     loc_140AC339B
 * 0000000140AC3565: mov     eax, [r15+24h]
 * 0000000140AC3569: xor     edx, edx
 * 0000000140AC356B: test    eax, eax
 * 0000000140AC356D: js      loc_140AC339B
 * 0000000140AC3573: bt      eax, 1Dh
 * 0000000140AC3577: jnb     loc_140AC339B
 * 0000000140AC357D: test    esi, esi
 * 0000000140AC357F: jz      short loc_140AC3594
 * 0000000140AC3581: mov     eax, [r15]
 * 0000000140AC3584: cmp     eax, 2E656461h
 * 0000000140AC3589: jz      short loc_140AC3594
 * 0000000140AC358B: cmp     eax, 45474150h
 * 0000000140AC3590: cmovnz  r14d, edx
 * 0000000140AC3594: mov     r8, [rbp+0B30h+var_BA8]
 * 0000000140AC3598: cmp     r12d, r11d
 * 0000000140AC359B: cmovb   r12d, r11d
 * 0000000140AC359F: mov     eax, r12d
 * 0000000140AC35A2: add     rbx, rax
 * 0000000140AC35A5: test    byte ptr [r8+843h], 4
 * 0000000140AC35AD: jz      short loc_140AC3619
 * 0000000140AC35AF: mov     ecx, 0FFFFFFFFh
 * 0000000140AC35B4: mov     eax, ecx
 * 0000000140AC35B6: xbegin  $+6
 * 0000000140AC35BC: cmp     eax, ecx
 * 0000000140AC35BE: jnz     short loc_140AC35C7
 * 0000000140AC35C0: mov     al, [rbx]
 * 0000000140AC35C2: xend
 * 0000000140AC35C5: jmp     short loc_140AC35FB
 * 0000000140AC35C7: rdtsc
 * 0000000140AC35C9: shl     rdx, 20h
 * 0000000140AC35CD: or      rax, rdx
 * 0000000140AC35D0: mov     rcx, rax
 * 0000000140AC35D3: ror     rax, 3
 * 0000000140AC35D7: xor     rcx, rax
 * 0000000140AC35DA: mov     rax, 7010008004002001h
 * 0000000140AC35E4: mul     rcx
 * 0000000140AC35E7: mov     [rbp+0B30h+var_5D8], rdx
 * 0000000140AC35EE: xor     dl, al
 * 0000000140AC35F0: mov     eax, 0Fh
 * 0000000140AC35F5: test    al, dl
 * 0000000140AC35F7: jz      short loc_140AC3617
 * 0000000140AC35F9: xor     edx, edx
 * 0000000140AC35FB: mov     eax, 1
 * 0000000140AC3600: add     [r8+804h], eax
 * 0000000140AC3607: add     dword ptr [r8+7F0h], 100h
 * 0000000140AC3612: jmp     loc_140AC36BB
 * 0000000140AC3617: xor     edx, edx
 * 0000000140AC3619: test    r14d, r14d
 * 0000000140AC361C: jz      loc_140AC36E9
 * 0000000140AC3622: mov     rax, [r8+440h]
 * 0000000140AC3629: lea     rcx, [rbp+0B30h+var_708]
 * 0000000140AC3630: mov     rdx, rbx
 * 0000000140AC3633: call    j__guard_dispatch_icall_nop
 * 0000000140AC3638: xor     edx, edx
 * 0000000140AC363A: test    eax, eax
 * 0000000140AC363C: jns     loc_140AC375B
 * 0000000140AC3642: cmp     eax, 0C0000005h
 * 0000000140AC3647: jnz     short loc_140AC36B7
 * 0000000140AC3649: mov     rcx, [rsp+0C30h+var_BE0]
 * 0000000140AC364E: mov     eax, [rcx+20h]
 * 0000000140AC3651: test    al, 4
 * 0000000140AC3653: jz      short loc_140AC365B
 * 0000000140AC3655: cmp     [r15+24h], edx
 * 0000000140AC3659: jge     short loc_140AC36B7
 * 0000000140AC365B: mov     r8, [rbp+0B30h+var_BA8]
 * 0000000140AC365F: cmp     [r8+8C0h], edx
 * 0000000140AC3666: jnz     short loc_140AC36BB
 * 0000000140AC3668: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC3672: add     rax, r8
 * 0000000140AC3675: mov     [r8+8C8h], rax
 * 0000000140AC367C: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC3686: add     rax, rcx
 * 0000000140AC3689: mov     [r8+8D0h], rax
 * 0000000140AC3690: movsxd  rax, dword ptr [rcx]
 * 0000000140AC3693: mov     rcx, r8
 * 0000000140AC3696: mov     [r8+8D8h], rax
 * 0000000140AC369D: mov     eax, 1
 * 0000000140AC36A2: mov     [r8+8E0h], rbx
 * 0000000140AC36A9: mov     [r8+8C0h], eax
 * 0000000140AC36B0: call    sub_140AD049C
 * 0000000140AC36B5: xor     edx, edx
 * 0000000140AC36B7: mov     r8, [rbp+0B30h+var_BA8]
 * 0000000140AC36BB: mov     eax, [r8+7F4h]
 * 0000000140AC36C2: add     r12d, 1000h
 * 0000000140AC36C9: cmp     r12d, r13d
 * 0000000140AC36CC: jnb     loc_140AC3806
 * 0000000140AC36D2: cmp     [r8+7F0h], eax
 * 0000000140AC36D9: jge     loc_140AC33B1
 * 0000000140AC36DF: mov     rbx, [rsp+0C30h+var_BD8]
 * 0000000140AC36E4: jmp     loc_140AC359F
 * 0000000140AC36E9: mov     r9d, 0FFFh
 * 0000000140AC36EF: mov     [rbp+0B30h+var_708], rdx
 * 0000000140AC36F6: mov     [rbp+0B30h+var_6FE], dx
 * 0000000140AC36FD: mov     rax, rbx
 * 0000000140AC3700: and     rax, r9
 * 0000000140AC3703: mov     [rbp+0B30h+var_6E0], 1000h
 * 0000000140AC370D: add     rax, 1FFFh
 * 0000000140AC3713: mov     rcx, rbx
 * 0000000140AC3716: shr     rax, 0Ch
 * 0000000140AC371A: add     ax, 6
 * 0000000140AC371E: shl     ax, 3
 * 0000000140AC3722: mov     [rbp+0B30h+var_700], ax
 * 0000000140AC3729: mov     rax, rbx
 * 0000000140AC372C: and     rax, 0FFFFFFFFFFFFF000h
 * 0000000140AC3732: mov     [rbp+0B30h+var_6E8], rax
 * 0000000140AC3739: mov     eax, ebx
 * 0000000140AC373B: and     eax, r9d
 * 0000000140AC373E: mov     [rbp+0B30h+var_6DC], eax
 * 0000000140AC3744: mov     rax, [r8+448h]
 * 0000000140AC374B: call    j__guard_dispatch_icall_nop
 * 0000000140AC3750: shr     rax, 0Ch
 * 0000000140AC3754: mov     [rbp+0B30h+var_6D8], rax
 * 0000000140AC375B: mov     rcx, [rbp+0B30h+var_BA8]
 * 0000000140AC375F: mov     eax, 1
 * 0000000140AC3764: add     [rcx+808h], eax
 * 0000000140AC376A: mov     eax, [rbp+0B30h+var_6DC]
 * 0000000140AC3770: add     rax, [rbp+0B30h+var_6E8]
 * 0000000140AC3777: mov     [rcx+0A30h], rax
 * 0000000140AC377E: mov     rax, [rsp+0C30h+var_BE0]
 * 0000000140AC3783: mov     [rcx+0A28h], rax
 * 0000000140AC378A: mov     rbx, cr8
 * 0000000140AC378E: mov     eax, 2
 * 0000000140AC3793: mov     cr8, rax
 * 0000000140AC3797: mov     rax, [rcx+5D0h]
 * 0000000140AC379E: xor     r8d, r8d
 * 0000000140AC37A1: add     rcx, 0A08h
 * 0000000140AC37A8: mov     edx, [rax]
 * 0000000140AC37AA: call    sub_140AD25B8
 * 0000000140AC37AF: mov     rdx, [rbp+0B30h+var_BA8]
 * 0000000140AC37B3: mov     ecx, [rdx+7BCh]
 * 0000000140AC37B9: mov     rax, [rdx+438h]
 * 0000000140AC37C0: add     rcx, rdx
 * 0000000140AC37C3: call    j__guard_dispatch_icall_nop
 * 0000000140AC37C8: mov     r8, rax
 * 0000000140AC37CB: mov     [rbp+0B30h+var_BA8], rax
 * 0000000140AC37CF: movzx   eax, bl
 * 0000000140AC37D2: mov     cr8, rax
 * 0000000140AC37D6: xor     edx, edx
 * 0000000140AC37D8: test    r14d, r14d
 * 0000000140AC37DB: jz      short loc_140AC37F6
 * 0000000140AC37DD: mov     rax, [r8+450h]
 * 0000000140AC37E4: lea     rcx, [rbp+0B30h+var_708]
 * 0000000140AC37EB: call    j__guard_dispatch_icall_nop
 * 0000000140AC37F0: mov     r8, [rbp+0B30h+var_BA8]
 * 0000000140AC37F4: xor     edx, edx
 * 0000000140AC37F6: add     dword ptr [r8+7F0h], 14000h
 * 0000000140AC3801: jmp     loc_140AC36BB
 * 0000000140AC3806: cmp     [r8+7F0h], eax
 * 0000000140AC380D: jge     loc_140AC33B1
 * 0000000140AC3813: mov     rbx, [rsp+0C30h+var_BD8]
 * 0000000140AC3818: jmp     loc_140AC33A2
 * 0000000140AC381D: mov     [r8+7ECh], r12d
 * 0000000140AC3824: jmp     loc_140ABA5AF
 * 0000000140AC3829: mov     r8d, 0Ch
 * 0000000140AC382F: xor     eax, eax
 * 0000000140AC3831: cmp     [rsi+7ECh], eax
 * 0000000140AC3837: jnz     short loc_140AC3855
 * 0000000140AC3839: cmp     r10d, r8d
 * 0000000140AC383C: jnz     loc_140AC3D81
 * 0000000140AC3842: cmp     [rsi+948h], rax
 * 0000000140AC3849: jnz     loc_140AC3A00
 * 0000000140AC384F: mov     [rsi+7ECh], eax
 * 0000000140AC3855: xor     r11d, r11d
 * 0000000140AC3858: mov     rbx, [rsp+0C30h+var_BE0]
 * 0000000140AC385D: mov     r8d, [rsi+7ECh]
 * 0000000140AC3864: mov     r9, [rbx+8]
 * 0000000140AC3868: mov     ecx, [rbx+10h]
 * 0000000140AC386B: lea     rax, [r8+r8*2]
 * 0000000140AC386F: mov     [rbp+0B30h+var_BA8], r9
 * 0000000140AC3873: lea     r14, [r9+rax*4]
 * 0000000140AC3877: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140AC3881: mul     rcx
 * 0000000140AC3884: mov     [rbp+0B30h+var_B88], r14
 * 0000000140AC3888: shr     rdx, 3
 * 0000000140AC388C: lea     rax, [rdx+rdx*2]
 * 0000000140AC3890: lea     r12, [r9+rax*4]
 * 0000000140AC3894: mov     [rbp+0B30h+var_B80], r12
 * 0000000140AC3898: lea     r12, [rbx+30h]
 * 0000000140AC389C: lea     r12, [r12+r8*4]
 * 0000000140AC38A0: mov     [rsp+0C30h+var_BB8], r12
 * 0000000140AC38A5: cmp     r14, [rbp+0B30h+var_B80]
 * 0000000140AC38A9: jz      loc_140AC4483
 * 0000000140AC38AF: mov     rdi, [rbp+0B30h+var_B80]
 * 0000000140AC38B3: cmp     [r12], r11d
 * 0000000140AC38B7: jl      loc_140AC4418
 * 0000000140AC38BD: mov     edx, [r14]
 * 0000000140AC38C0: mov     r13, [rbx+20h]
 * 0000000140AC38C4: mov     r15d, [r14+4]
 * 0000000140AC38C8: add     r13, rdx
 * 0000000140AC38CB: sub     r15d, edx
 * 0000000140AC38CE: mov     [rsp+0C30h+var_BC8], r13
 * 0000000140AC38D3: cmp     r10d, 2Bh ; '+'
 * 0000000140AC38D7: jz      loc_140AC4006
 * 0000000140AC38DD: add     [rsi+7F0h], r15d
 * 0000000140AC38E4: mov     r9, r13
 * 0000000140AC38E7: mov     r10d, [rsi+7DCh]
 * 0000000140AC38EE: mov     rax, r13
 * 0000000140AC38F1: mov     r11, [rsi+7E0h]
 * 0000000140AC38F8: mov     ecx, r15d
 * 0000000140AC38FB: add     rcx, r13
 * 0000000140AC38FE: cmp     r13, rcx
 * 0000000140AC3901: jnb     short loc_140AC3913
 * 0000000140AC3903: mov     edx, 40h ; '@'
 * 0000000140AC3908: prefetchnta byte ptr [rax]
 * 0000000140AC390B: add     rax, rdx
 * 0000000140AC390E: cmp     rax, rcx
 * 0000000140AC3911: jb      short loc_140AC3908
 * 0000000140AC3913: mov     r8d, r15d
 * 0000000140AC3916: mov     rbx, r11
 * 0000000140AC3919: shr     r8d, 7
 * 0000000140AC391D: test    r8d, r8d
 * 0000000140AC3920: jz      short loc_140AC3997
 * 0000000140AC3922: mov     rdi, 7010008004002001h
 * 0000000140AC392C: mov     edx, 8
 * 0000000140AC3931: lea     esi, [rdx-7]
 * 0000000140AC3934: mov     rax, [r9]
 * 0000000140AC3937: mov     ecx, r10d
 * 0000000140AC393A: xor     rax, rbx
 * 0000000140AC393D: mov     rbx, [r9+8]
 * 0000000140AC3941: rol     rax, cl
 * 0000000140AC3944: add     r9, 10h
 * 0000000140AC3948: xor     rbx, rax
 * 0000000140AC394B: rol     rbx, cl
 * 0000000140AC394E: sub     rdx, rsi
 * 0000000140AC3951: jnz     short loc_140AC3934
 * 0000000140AC3953: mov     rcx, r9
 * 0000000140AC3956: sub     rcx, r13
 * 0000000140AC3959: xor     rcx, r11
 * 0000000140AC395C: mov     rax, rcx
 * 0000000140AC395F: rol     rax, 11h
 * 0000000140AC3963: xor     rcx, rax
 * 0000000140AC3966: mov     rax, rdi
 * 0000000140AC3969: mul     rcx
 * 0000000140AC396C: xor     r10d, edx
 * 0000000140AC396F: mov     [rbp+0B30h+var_5C0], rdx
 * 0000000140AC3976: xor     r10d, eax
 * 0000000140AC3979: mov     rax, rsi
 * 0000000140AC397C: and     r10d, 3Fh
 * 0000000140AC3980: cmovz   r10d, eax
 * 0000000140AC3984: mov     eax, 0FFFFFFFFh
 * 0000000140AC3989: add     r8d, eax
 * 0000000140AC398C: jnz     short loc_140AC392C
 * 0000000140AC398E: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC3993: mov     rdi, [rbp+0B30h+var_B80]
 * 0000000140AC3997: mov     edx, r15d
 * 0000000140AC399A: and     edx, 7Fh
 * 0000000140AC399D: cmp     edx, 8
 * 0000000140AC39A0: jb      short loc_140AC39C9
 * 0000000140AC39A2: mov     r8d, edx
 * 0000000140AC39A5: mov     r12d, 1
 * 0000000140AC39AB: shr     r8, 3
 * 0000000140AC39AF: xor     rbx, [r9]
 * 0000000140AC39B2: mov     ecx, r10d
 * 0000000140AC39B5: rol     rbx, cl
 * 0000000140AC39B8: add     r9, 8
 * 0000000140AC39BC: add     edx, 0FFFFFFF8h
 * 0000000140AC39BF: sub     r8, r12
 * 0000000140AC39C2: jnz     short loc_140AC39AF
 * 0000000140AC39C4: mov     r12, [rsp+0C30h+var_BB8]
 * 0000000140AC39C9: xor     r11d, r11d
 * 0000000140AC39CC: test    edx, edx
 * 0000000140AC39CE: jz      short loc_140AC39F8
 * 0000000140AC39D0: lea     edi, [r11+1]
 * 0000000140AC39D4: mov     r12d, 0FFFFFFFFh
 * 0000000140AC39DA: movzx   eax, byte ptr [r9]
 * 0000000140AC39DE: mov     ecx, r10d
 * 0000000140AC39E1: xor     rbx, rax
 * 0000000140AC39E4: add     r9, rdi
 * 0000000140AC39E7: rol     rbx, cl
 * 0000000140AC39EA: add     edx, r12d
 * 0000000140AC39ED: jnz     short loc_140AC39DA
 * 0000000140AC39EF: mov     r12, [rsp+0C30h+var_BB8]
 * 0000000140AC39F4: mov     rdi, [rbp+0B30h+var_B80]
 * 0000000140AC39F8: mov     rax, rbx
 * 0000000140AC39FB: jmp     loc_140AC3FEF
 * 0000000140AC3A00: mov     eax, [rsi+95Ch]
 * 0000000140AC3A06: lea     ecx, ds:0[rax*8]
 * 0000000140AC3A0D: xor     ecx, eax
 * 0000000140AC3A0F: and     ecx, 20h
 * 0000000140AC3A12: xor     ecx, eax
 * 0000000140AC3A14: mov     [rsi+95Ch], ecx
 * 0000000140AC3A1A: test    cl, 4
 * 0000000140AC3A1D: jz      loc_140AC3AED
 * 0000000140AC3A23: mov     ecx, [r13+8]
 * 0000000140AC3A27: xor     r11d, r11d
 * 0000000140AC3A2A: mov     r14d, [r13+10h]
 * 0000000140AC3A2E: and     ecx, 0FFFh
 * 0000000140AC3A34: mov     rbx, [r13+8]
 * 0000000140AC3A38: add     r14, 0FFFh
 * 0000000140AC3A3F: add     r14, rcx
 * 0000000140AC3A42: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140AC3A49: shr     r14, 0Ch
 * 0000000140AC3A4D: test    r14, r14
 * 0000000140AC3A50: jz      loc_140AC3858
 * 0000000140AC3A56: mov     rdi, 0B3B74BDEE4453415h
 * 0000000140AC3A60: lea     r15d, [r11+1]
 * 0000000140AC3A64: mov     rax, [rsi+2A0h]
 * 0000000140AC3A6B: mov     rcx, rbx
 * 0000000140AC3A6E: sub     r14, r15
 * 0000000140AC3A71: call    j__guard_dispatch_icall_nop
 * 0000000140AC3A76: xor     r11d, r11d
 * 0000000140AC3A79: test    al, al
 * 0000000140AC3A7B: jz      short loc_140AC3ACB
 * 0000000140AC3A7D: cmp     [rsi+8C0h], r11d
 * 0000000140AC3A84: jnz     short loc_140AC3ACB
 * 0000000140AC3A86: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC3A90: xor     edx, edx
 * 0000000140AC3A92: add     rax, rsi
 * 0000000140AC3A95: mov     rcx, rsi
 * 0000000140AC3A98: mov     [rsi+8C8h], rax
 * 0000000140AC3A9F: lea     rax, [rdi+r13]
 * 0000000140AC3AA3: mov     [rsi+8D0h], rax
 * 0000000140AC3AAA: movsxd  rax, dword ptr [r13+0]
 * 0000000140AC3AAE: mov     [rsi+8D8h], rax
 * 0000000140AC3AB5: mov     [rsi+8E0h], rbx
 * 0000000140AC3ABC: mov     [rsi+8C0h], r15d
 * 0000000140AC3AC3: call    sub_140AD049C
 * 0000000140AC3AC8: xor     r11d, r11d
 * 0000000140AC3ACB: add     dword ptr [rsi+7F0h], 100h
 * 0000000140AC3AD5: add     rbx, 1000h
 * 0000000140AC3ADC: test    r14, r14
 * 0000000140AC3ADF: jnz     short loc_140AC3A64
 * 0000000140AC3AE1: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC3AE8: jmp     loc_140AC3F7C
 * 0000000140AC3AED: mov     r14, [r13+8]
 * 0000000140AC3AF1: mov     r8d, [r13+10h]
 * 0000000140AC3AF5: mov     r9, r14
 * 0000000140AC3AF8: add     [rsi+7F0h], r8d
 * 0000000140AC3AFF: mov     rax, r14
 * 0000000140AC3B02: mov     r11d, [rsi+7DCh]
 * 0000000140AC3B09: mov     r15, [rsi+7E0h]
 * 0000000140AC3B10: lea     rcx, [r14+r8]
 * 0000000140AC3B14: cmp     r14, rcx
 * 0000000140AC3B17: jnb     short loc_140AC3B29
 * 0000000140AC3B19: mov     edx, 40h ; '@'
 * 0000000140AC3B1E: prefetchnta byte ptr [rax]
 * 0000000140AC3B21: add     rax, rdx
 * 0000000140AC3B24: cmp     rax, rcx
 * 0000000140AC3B27: jb      short loc_140AC3B1E
 * 0000000140AC3B29: mov     r10d, r8d
 * 0000000140AC3B2C: mov     rbx, r15
 * 0000000140AC3B2F: shr     r10d, 7
 * 0000000140AC3B33: test    r10d, r10d
 * 0000000140AC3B36: jz      short loc_140AC3BB0
 * 0000000140AC3B38: mov     rdi, 7010008004002001h
 * 0000000140AC3B42: mov     edx, 8
 * 0000000140AC3B47: lea     esi, [rdx-7]
 * 0000000140AC3B4A: mov     rax, [r9]
 * 0000000140AC3B4D: mov     ecx, r11d
 * 0000000140AC3B50: xor     rax, rbx
 * 0000000140AC3B53: mov     rbx, [r9+8]
 * 0000000140AC3B57: rol     rax, cl
 * 0000000140AC3B5A: add     r9, 10h
 * 0000000140AC3B5E: xor     rbx, rax
 * 0000000140AC3B61: rol     rbx, cl
 * 0000000140AC3B64: sub     rdx, rsi
 * 0000000140AC3B67: jnz     short loc_140AC3B4A
 * 0000000140AC3B69: mov     rcx, r9
 * 0000000140AC3B6C: sub     rcx, r14
 * 0000000140AC3B6F: xor     rcx, r15
 * 0000000140AC3B72: mov     rax, rcx
 * 0000000140AC3B75: rol     rax, 11h
 * 0000000140AC3B79: xor     rcx, rax
 * 0000000140AC3B7C: mov     rax, rdi
 * 0000000140AC3B7F: mul     rcx
 * 0000000140AC3B82: xor     r11d, edx
 * 0000000140AC3B85: mov     [rbp+0B30h+var_5D0], rdx
 * 0000000140AC3B8C: xor     r11d, eax
 * 0000000140AC3B8F: mov     rax, rsi
 * 0000000140AC3B92: and     r11d, 3Fh
 * 0000000140AC3B96: cmovz   r11d, eax
 * 0000000140AC3B9A: mov     eax, 0FFFFFFFFh
 * 0000000140AC3B9F: add     r10d, eax
 * 0000000140AC3BA2: jnz     short loc_140AC3B42
 * 0000000140AC3BA4: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC3BA9: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC3BB0: and     r8d, 7Fh
 * 0000000140AC3BB4: mov     r15d, 1
 * 0000000140AC3BBA: cmp     r8d, 8
 * 0000000140AC3BBE: jb      short loc_140AC3BDD
 * 0000000140AC3BC0: mov     edx, r8d
 * 0000000140AC3BC3: shr     rdx, 3
 * 0000000140AC3BC7: xor     rbx, [r9]
 * 0000000140AC3BCA: mov     ecx, r11d
 * 0000000140AC3BCD: rol     rbx, cl
 * 0000000140AC3BD0: add     r9, 8
 * 0000000140AC3BD4: add     r8d, 0FFFFFFF8h
 * 0000000140AC3BD8: sub     rdx, r15
 * 0000000140AC3BDB: jnz     short loc_140AC3BC7
 * 0000000140AC3BDD: test    r8d, r8d
 * 0000000140AC3BE0: jz      short loc_140AC3C01
 * 0000000140AC3BE2: mov     esi, 0FFFFFFFFh
 * 0000000140AC3BE7: movzx   eax, byte ptr [r9]
 * 0000000140AC3BEB: mov     ecx, r11d
 * 0000000140AC3BEE: xor     rbx, rax
 * 0000000140AC3BF1: add     r9, r15
 * 0000000140AC3BF4: rol     rbx, cl
 * 0000000140AC3BF7: add     r8d, esi
 * 0000000140AC3BFA: jnz     short loc_140AC3BE7
 * 0000000140AC3BFC: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC3C01: mov     rax, rbx
 * 0000000140AC3C04: shr     rax, 1Fh
 * 0000000140AC3C08: xor     r11d, r11d
 * 0000000140AC3C0B: jmp     short loc_140AC3C13
 * 0000000140AC3C0D: xor     ebx, eax
 * 0000000140AC3C0F: shr     rax, 1Fh
 * 0000000140AC3C13: test    rax, rax
 * 0000000140AC3C16: jnz     short loc_140AC3C0D
 * 0000000140AC3C18: mov     r8d, [r13+14h]
 * 0000000140AC3C1C: btr     ebx, 1Fh
 * 0000000140AC3C20: cmp     ebx, r8d
 * 0000000140AC3C23: jz      loc_140AC3F7C
 * 0000000140AC3C29: mov     ecx, [r13+10h]
 * 0000000140AC3C2D: mov     rdx, [r13+8]
 * 0000000140AC3C31: test    rcx, rcx
 * 0000000140AC3C34: jz      loc_140AC3CD7
 * 0000000140AC3C3A: mov     eax, [rsi+95Ch]
 * 0000000140AC3C40: mov     r9d, 40h ; '@'
 * 0000000140AC3C46: test    r9b, al
 * 0000000140AC3C49: jz      loc_140AC3CD7
 * 0000000140AC3C4F: mov     r12, cr8
 * 0000000140AC3C53: lea     eax, [r9-3Eh]
 * 0000000140AC3C57: mov     cr8, rax
 * 0000000140AC3C5B: mov     r14, rdx
 * 0000000140AC3C5E: lea     rax, [rcx-1]
 * 0000000140AC3C62: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140AC3C69: add     rax, rdx
 * 0000000140AC3C6C: or      rax, 0FFFh
 * 0000000140AC3C72: mov     [rsp+0C30h+var_BC8], rax
 * 0000000140AC3C77: lea     r13, [r14-1]
 * 0000000140AC3C7B: movzx   r15d, r12b
 * 0000000140AC3C7F: mov     rax, [rsi+458h]
 * 0000000140AC3C86: xor     edx, edx
 * 0000000140AC3C88: mov     rcx, r14
 * 0000000140AC3C8B: call    j__guard_dispatch_icall_nop
 * 0000000140AC3C90: cmp     eax, 0C000022Dh
 * 0000000140AC3C95: jnz     short loc_140AC3CBF
 * 0000000140AC3C97: mov     eax, 1
 * 0000000140AC3C9C: cmp     r12b, al
 * 0000000140AC3C9F: ja      loc_140AC3D63
 * 0000000140AC3CA5: movzx   r15d, r12b
 * 0000000140AC3CA9: mov     cr8, r15
 * 0000000140AC3CAD: mov     al, [r14]
 * 0000000140AC3CB0: mov     rax, cr8
 * 0000000140AC3CB4: mov     eax, 2
 * 0000000140AC3CB9: mov     cr8, rax
 * 0000000140AC3CBD: jmp     short loc_140AC3C7F
 * 0000000140AC3CBF: xor     r11d, r11d
 * 0000000140AC3CC2: test    eax, eax
 * 0000000140AC3CC4: jns     loc_140AC3D66
 * 0000000140AC3CCA: mov     cr8, r15
 * 0000000140AC3CCE: mov     r13, [rsp+0C30h+var_BE0]
 * 0000000140AC3CD3: mov     r8d, [r13+14h]
 * 0000000140AC3CD7: cmp     [rsi+8C0h], r11d
 * 0000000140AC3CDE: jnz     loc_140AC3F7C
 * 0000000140AC3CE4: mov     eax, r8d
 * 0000000140AC3CE7: mov     ecx, ebx
 * 0000000140AC3CE9: xor     rcx, rax
 * 0000000140AC3CEC: mov     rax, [rsi+568h]
 * 0000000140AC3CF3: mov     [rax+18h], rcx
 * 0000000140AC3CF7: mov     rcx, [r13+8]
 * 0000000140AC3CFB: cmp     [rsi+8C0h], r11d
 * 0000000140AC3D02: jnz     loc_140AC3F7C
 * 0000000140AC3D08: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC3D12: add     rax, rsi
 * 0000000140AC3D15: mov     [rsi+8C8h], rax
 * 0000000140AC3D1C: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC3D26: add     rax, r13
 * 0000000140AC3D29: mov     [rsi+8D0h], rax
 * 0000000140AC3D30: movsxd  rax, dword ptr [r13+0]
 * 0000000140AC3D34: mov     [rsi+8D8h], rax
 * 0000000140AC3D3B: xor     edx, edx
 * 0000000140AC3D3D: mov     [rsi+8E0h], rcx
 * 0000000140AC3D44: mov     eax, 1
 * 0000000140AC3D49: mov     rcx, rsi
 * 0000000140AC3D4C: mov     [rsi+8C0h], eax
 * 0000000140AC3D52: call    sub_140AD049C
 * 0000000140AC3D57: mov     r10d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140AC3D5E: jmp     loc_140AC3855
 * 0000000140AC3D63: xor     r11d, r11d
 * 0000000140AC3D66: mov     eax, 1000h
 * 0000000140AC3D6B: add     r14, rax
 * 0000000140AC3D6E: add     r13, rax
 * 0000000140AC3D71: cmp     r13, [rsp+0C30h+var_BC8]
 * 0000000140AC3D76: jnz     loc_140AC3C7B
 * 0000000140AC3D7C: jmp     loc_140AC3F78
 * 0000000140AC3D81: mov     r14, [r13+8]
 * 0000000140AC3D85: mov     r8d, [r13+10h]
 * 0000000140AC3D89: mov     r9, r14
 * 0000000140AC3D8C: add     [rsi+7F0h], r8d
 * 0000000140AC3D93: mov     rax, r14
 * 0000000140AC3D96: mov     r10d, [rsi+7DCh]
 * 0000000140AC3D9D: mov     r15, [rsi+7E0h]
 * 0000000140AC3DA4: lea     rcx, [r14+r8]
 * 0000000140AC3DA8: cmp     r14, rcx
 * 0000000140AC3DAB: jnb     short loc_140AC3DBD
 * 0000000140AC3DAD: mov     edx, 40h ; '@'
 * 0000000140AC3DB2: prefetchnta byte ptr [rax]
 * 0000000140AC3DB5: add     rax, rdx
 * 0000000140AC3DB8: cmp     rax, rcx
 * 0000000140AC3DBB: jb      short loc_140AC3DB2
 * 0000000140AC3DBD: mov     r11d, r8d
 * 0000000140AC3DC0: mov     rbx, r15
 * 0000000140AC3DC3: shr     r11d, 7
 * 0000000140AC3DC7: mov     r13d, 0FFFFFFFFh
 * 0000000140AC3DCD: test    r11d, r11d
 * 0000000140AC3DD0: jz      short loc_140AC3E3E
 * 0000000140AC3DD2: mov     rsi, 7010008004002001h
 * 0000000140AC3DDC: mov     r12d, 1
 * 0000000140AC3DE2: mov     edx, 8
 * 0000000140AC3DE7: mov     rax, [r9]
 * 0000000140AC3DEA: mov     ecx, r10d
 * 0000000140AC3DED: xor     rax, rbx
 * 0000000140AC3DF0: mov     rbx, [r9+8]
 * 0000000140AC3DF4: rol     rax, cl
 * 0000000140AC3DF7: add     r9, 10h
 * 0000000140AC3DFB: xor     rbx, rax
 * 0000000140AC3DFE: rol     rbx, cl
 * 0000000140AC3E01: sub     rdx, r12
 * 0000000140AC3E04: jnz     short loc_140AC3DE7
 * 0000000140AC3E06: mov     rcx, r9
 * 0000000140AC3E09: sub     rcx, r14
 * 0000000140AC3E0C: xor     rcx, r15
 * 0000000140AC3E0F: mov     rax, rcx
 * 0000000140AC3E12: rol     rax, 11h
 * 0000000140AC3E16: xor     rcx, rax
 * 0000000140AC3E19: mov     rax, rsi
 * 0000000140AC3E1C: mul     rcx
 * 0000000140AC3E1F: xor     r10d, edx
 * 0000000140AC3E22: mov     [rbp+0B30h+var_5C8], rdx
 * 0000000140AC3E29: xor     r10d, eax
 * 0000000140AC3E2C: and     r10d, 3Fh
 * 0000000140AC3E30: cmovz   r10d, r12d
 * 0000000140AC3E34: add     r11d, r13d
 * 0000000140AC3E37: jnz     short loc_140AC3DE2
 * 0000000140AC3E39: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC3E3E: and     r8d, 7Fh
 * 0000000140AC3E42: mov     r15d, 1
 * 0000000140AC3E48: cmp     r8d, 8
 * 0000000140AC3E4C: jb      short loc_140AC3E6B
 * 0000000140AC3E4E: mov     edx, r8d
 * 0000000140AC3E51: shr     rdx, 3
 * 0000000140AC3E55: xor     rbx, [r9]
 * 0000000140AC3E58: mov     ecx, r10d
 * 0000000140AC3E5B: rol     rbx, cl
 * 0000000140AC3E5E: add     r9, 8
 * 0000000140AC3E62: add     r8d, 0FFFFFFF8h
 * 0000000140AC3E66: sub     rdx, r15
 * 0000000140AC3E69: jnz     short loc_140AC3E55
 * 0000000140AC3E6B: xor     r11d, r11d
 * 0000000140AC3E6E: test    r8d, r8d
 * 0000000140AC3E71: jz      short loc_140AC3E88
 * 0000000140AC3E73: movzx   eax, byte ptr [r9]
 * 0000000140AC3E77: mov     ecx, r10d
 * 0000000140AC3E7A: xor     rbx, rax
 * 0000000140AC3E7D: add     r9, r15
 * 0000000140AC3E80: rol     rbx, cl
 * 0000000140AC3E83: add     r8d, r13d
 * 0000000140AC3E86: jnz     short loc_140AC3E73
 * 0000000140AC3E88: mov     rax, rbx
 * 0000000140AC3E8B: jmp     short loc_140AC3E8F
 * 0000000140AC3E8D: xor     ebx, eax
 * 0000000140AC3E8F: shr     rax, 1Fh
 * 0000000140AC3E93: test    rax, rax
 * 0000000140AC3E96: jnz     short loc_140AC3E8D
 * 0000000140AC3E98: mov     r10, [rsp+0C30h+var_BE0]
 * 0000000140AC3E9D: btr     ebx, 1Fh
 * 0000000140AC3EA1: mov     r13d, r11d
 * 0000000140AC3EA4: cmp     ebx, [r10+14h]
 * 0000000140AC3EA8: jz      loc_140AC3F7C
 * 0000000140AC3EAE: cmp     [r10], r11d
 * 0000000140AC3EB1: jnz     short loc_140AC3EBB
 * 0000000140AC3EB3: cmp     [r10+18h], r11d
 * 0000000140AC3EB7: cmovnz  r13d, r15d
 * 0000000140AC3EBB: mov     ecx, [r10+10h]
 * 0000000140AC3EBF: mov     rdx, [r10+8]
 * 0000000140AC3EC3: test    rcx, rcx
 * 0000000140AC3EC6: jz      loc_140AC3F91
 * 0000000140AC3ECC: mov     eax, [rsi+95Ch]
 * 0000000140AC3ED2: mov     r8d, 40h ; '@'
 * 0000000140AC3ED8: test    r8b, al
 * 0000000140AC3EDB: jz      loc_140AC3F91
 * 0000000140AC3EE1: mov     r12, cr8
 * 0000000140AC3EE5: lea     eax, [r8-3Eh]
 * 0000000140AC3EE9: mov     cr8, rax
 * 0000000140AC3EED: mov     r14, rdx
 * 0000000140AC3EF0: lea     rax, [rcx-1]
 * 0000000140AC3EF4: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140AC3EFB: add     rax, rdx
 * 0000000140AC3EFE: or      rax, 0FFFh
 * 0000000140AC3F04: mov     [rsp+0C30h+var_BC8], rax
 * 0000000140AC3F09: lea     rax, [r14-1]
 * 0000000140AC3F0D: mov     [rsp+0C30h+var_BD8], rax
 * 0000000140AC3F12: movzx   r15d, r12b
 * 0000000140AC3F16: mov     rax, [rsi+458h]
 * 0000000140AC3F1D: xor     edx, edx
 * 0000000140AC3F1F: mov     rcx, r14
 * 0000000140AC3F22: call    j__guard_dispatch_icall_nop
 * 0000000140AC3F27: xor     r11d, r11d
 * 0000000140AC3F2A: cmp     eax, 0C000022Dh
 * 0000000140AC3F2F: jnz     short loc_140AC3F58
 * 0000000140AC3F31: test    r13d, r13d
 * 0000000140AC3F34: jnz     short loc_140AC3F88
 * 0000000140AC3F36: lea     eax, [r11+1]
 * 0000000140AC3F3A: cmp     r12b, al
 * 0000000140AC3F3D: ja      short loc_140AC3F5C
 * 0000000140AC3F3F: movzx   r15d, r12b
 * 0000000140AC3F43: mov     cr8, r15
 * 0000000140AC3F47: mov     al, [r14]
 * 0000000140AC3F4A: mov     rax, cr8
 * 0000000140AC3F4E: lea     eax, [r11+2]
 * 0000000140AC3F52: mov     cr8, rax
 * 0000000140AC3F56: jmp     short loc_140AC3F16
 * 0000000140AC3F58: test    eax, eax
 * 0000000140AC3F5A: js      short loc_140AC3F88
 * 0000000140AC3F5C: mov     rax, [rsp+0C30h+var_BD8]
 * 0000000140AC3F61: mov     ecx, 1000h
 * 0000000140AC3F66: add     rax, rcx
 * 0000000140AC3F69: add     r14, rcx
 * 0000000140AC3F6C: mov     [rsp+0C30h+var_BD8], rax
 * 0000000140AC3F71: cmp     rax, [rsp+0C30h+var_BC8]
 * 0000000140AC3F76: jnz     short loc_140AC3F12
 * 0000000140AC3F78: mov     cr8, r15
 * 0000000140AC3F7C: mov     r10d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140AC3F83: jmp     loc_140AC3858
 * 0000000140AC3F88: mov     cr8, r15
 * 0000000140AC3F8C: mov     r10, [rsp+0C30h+var_BE0]
 * 0000000140AC3F91: mov     eax, [r10+14h]
 * 0000000140AC3F95: cmp     [rsi+8C0h], r11d
 * 0000000140AC3F9C: jnz     short loc_140AC3F7C
 * 0000000140AC3F9E: mov     ecx, eax
 * 0000000140AC3FA0: mov     eax, ebx
 * 0000000140AC3FA2: xor     rcx, rax
 * 0000000140AC3FA5: mov     rax, [rsi+568h]
 * 0000000140AC3FAC: mov     [rax+18h], rcx
 * 0000000140AC3FB0: mov     rcx, [r10+8]
 * 0000000140AC3FB4: cmp     [rsi+8C0h], r11d
 * 0000000140AC3FBB: jnz     short loc_140AC3F7C
 * 0000000140AC3FBD: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC3FC7: add     rax, rsi
 * 0000000140AC3FCA: mov     [rsi+8C8h], rax
 * 0000000140AC3FD1: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC3FDB: add     rax, r10
 * 0000000140AC3FDE: mov     [rsi+8D0h], rax
 * 0000000140AC3FE5: movsxd  rax, dword ptr [r10]
 * 0000000140AC3FE8: jmp     loc_140AC3D34
 * 0000000140AC3FED: xor     ebx, eax
 * 0000000140AC3FEF: shr     rax, 1Fh
 * 0000000140AC3FF3: test    rax, rax
 * 0000000140AC3FF6: jnz     short loc_140AC3FED
 * 0000000140AC3FF8: btr     ebx, 1Fh
 * 0000000140AC3FFC: mov     [rsp+0C30h+var_BD8], rbx
 * 0000000140AC4001: jmp     loc_140AC42A4
 * 0000000140AC4006: mov     r8d, r15d
 * 0000000140AC4009: mov     rdx, r13
 * 0000000140AC400C: mov     rcx, rsi
 * 0000000140AC400F: call    sub_140AD0678
 * 0000000140AC4014: mov     ebx, eax
 * 0000000140AC4016: xor     r11d, r11d
 * 0000000140AC4019: lea     eax, ds:0[r15*8]
 * 0000000140AC4021: mov     [rsp+0C30h+var_BD8], rbx
 * 0000000140AC4026: add     [rsi+7F0h], eax
 * 0000000140AC402C: test    dword ptr [rsi+95Ch], 800h
 * 0000000140AC4036: jz      loc_140AC42A4
 * 0000000140AC403C: lea     r14, [r13-6]
 * 0000000140AC4040: lea     rbx, [r14+5]
 * 0000000140AC4044: mov     al, [rbx]
 * 0000000140AC4046: cmp     byte ptr [r14], 4Ch ; 'L'
 * 0000000140AC404A: jnz     loc_140AC423C
 * 0000000140AC4050: cmp     byte ptr [r14+1], 87h
 * 0000000140AC4055: jnz     loc_140AC423C
 * 0000000140AC405B: cmp     [r14+2], r11b
 * 0000000140AC405F: jnz     loc_140AC423C
 * 0000000140AC4065: cmp     byte ptr [r14+3], 98h
 * 0000000140AC406A: jnz     loc_140AC423C
 * 0000000140AC4070: cmp     byte ptr [r14+4], 0C3h
 * 0000000140AC4075: jnz     loc_140AC423C
 * 0000000140AC407B: cmp     al, 90h
 * 0000000140AC407D: jz      short loc_140AC4087
 * 0000000140AC407F: cmp     al, 0F1h
 * 0000000140AC4081: jnz     loc_140AC423C
 * 0000000140AC4087: mov     rcx, [rsi+4B8h]
 * 0000000140AC408E: cli
 * 0000000140AC408F: mov     eax, [rsi+958h]
 * 0000000140AC4095: shr     eax, 0Ah
 * 0000000140AC4098: and     eax, 1Fh
 * 0000000140AC409B: lock bts [rcx], eax
 * 0000000140AC409F: jnb     short loc_140AC40A6
 * 0000000140AC40A1: sti
 * 0000000140AC40A2: pause
 * 0000000140AC40A4: jmp     short loc_140AC408E
 * 0000000140AC40A6: mov     rdx, [rsi+8A8h]
 * 0000000140AC40AD: mov     r8d, 26h ; '&'
 * 0000000140AC40B3: mov     ecx, 130h
 * 0000000140AC40B8: mov     rax, rdx
 * 0000000140AC40BB: lea     r9d, [r8-25h]
 * 0000000140AC40BF: mov     [rax], r11
 * 0000000140AC40C2: add     ecx, 0FFFFFFF8h
 * 0000000140AC40C5: add     rax, 8
 * 0000000140AC40C9: sub     r8, r9
 * 0000000140AC40CC: jnz     short loc_140AC40BF
 * 0000000140AC40CE: test    ecx, ecx
 * 0000000140AC40D0: jz      short loc_140AC40E3
 * 0000000140AC40D2: mov     r8d, 0FFFFFFFFh
 * 0000000140AC40D8: mov     [rax], r11b
 * 0000000140AC40DB: add     rax, r9
 * 0000000140AC40DE: add     ecx, r8d
 * 0000000140AC40E1: jnz     short loc_140AC40D8
 * 0000000140AC40E3: movups  xmm0, xmmword ptr [rsi+810h]
 * 0000000140AC40EA: mov     eax, 12Fh
 * 0000000140AC40EF: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140AC40F4: movups  xmm1, xmmword ptr [rsi+820h]
 * 0000000140AC40FB: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140AC4100: movups  xmm0, xmmword ptr [rsi+830h]
 * 0000000140AC4107: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140AC410F: mov     word ptr [rbp+0B30h+var_898], ax
 * 0000000140AC4116: lea     rax, [rsi+854h]
 * 0000000140AC411D: mov     [rbp+29Ah], rdx
 * 0000000140AC4124: mov     rcx, rax
 * 0000000140AC4127: mov     [rdx+10h], ax
 * 0000000140AC412B: shr     rcx, 10h
 * 0000000140AC412F: mov     [rbp+0B30h+var_5B8], rax
 * 0000000140AC4136: shr     rax, 20h
 * 0000000140AC413A: mov     [rdx+16h], cx
 * 0000000140AC413E: mov     [rdx+18h], eax
 * 0000000140AC4141: sidt    fword ptr [rbp+0B30h+var_740]
 * 0000000140AC4148: lidt    fword ptr [rbp+0B30h+var_898]
 * 0000000140AC414F: mov     byte ptr [rbx], 0F1h
 * 0000000140AC4152: mov     al, [rbx]
 * 0000000140AC4154: cmp     al, 0F1h
 * 0000000140AC4156: jnz     loc_140AC41F9
 * 0000000140AC415C: test    dword ptr [rsi+95Ch], 20000h
 * 0000000140AC4166: jnz     short loc_140AC41AA
 * 0000000140AC4168: mov     rdx, gs:20h
 * 0000000140AC4171: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140AC417B: mov     rax, [rsi+498h]
 * 0000000140AC4182: add     rcx, rsi
 * 0000000140AC4185: mov     [rax], rcx
 * 0000000140AC4188: mov     rax, [rsi+4A0h]
 * 0000000140AC418F: mov     [rax], rdx
 * 0000000140AC4192: mov     rax, [rsi+4A8h]
 * 0000000140AC4199: mov     [rax], r13
 * 0000000140AC419C: mov     rax, [rsi+4B0h]
 * 0000000140AC41A3: mov     qword ptr [rax], 113h
 * 0000000140AC41AA: mov     rax, rbx
 * 0000000140AC41AD: call    j__guard_dispatch_icall_nop
 * 0000000140AC41B2: xor     r11d, r11d
 * 0000000140AC41B5: test    dword ptr [rsi+95Ch], 20000h
 * 0000000140AC41BF: jnz     short loc_140AC41F3
 * 0000000140AC41C1: mov     rax, [rsi+498h]
 * 0000000140AC41C8: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140AC41D2: mov     [rax], rcx
 * 0000000140AC41D5: mov     rax, [rsi+4A0h]
 * 0000000140AC41DC: mov     [rax], r11
 * 0000000140AC41DF: mov     rax, [rsi+4A8h]
 * 0000000140AC41E6: mov     [rax], r11
 * 0000000140AC41E9: mov     rax, [rsi+4B0h]
 * 0000000140AC41F0: mov     [rax], r11
 * 0000000140AC41F3: mov     al, [rbx]
 * 0000000140AC41F5: cmp     al, 0F1h
 * 0000000140AC41F7: jz      short loc_140AC41FE
 * 0000000140AC41F9: mov     r9d, r11d
 * 0000000140AC41FC: jmp     short loc_140AC420F
 * 0000000140AC41FE: mov     byte ptr [rbx], 90h
 * 0000000140AC4201: mov     r9d, 1
 * 0000000140AC4207: mov     al, [rbx]
 * 0000000140AC4209: cmp     al, 90h
 * 0000000140AC420B: cmovnz  r9d, r11d
 * 0000000140AC420F: lidt    fword ptr [rbp+0B30h+var_740]
 * 0000000140AC4216: mov     ecx, [rsi+958h]
 * 0000000140AC421C: mov     edx, 1
 * 0000000140AC4221: mov     r8, [rsi+4B8h]
 * 0000000140AC4228: shr     ecx, 0Ah
 * 0000000140AC422B: and     ecx, 1Fh
 * 0000000140AC422E: shl     edx, cl
 * 0000000140AC4230: not     edx
 * 0000000140AC4232: lock and [r8], edx
 * 0000000140AC4236: sti
 * 0000000140AC4237: test    r9d, r9d
 * 0000000140AC423A: jnz     short loc_140AC429B
 * 0000000140AC423C: cmp     [rsi+8C0h], r11d
 * 0000000140AC4243: jnz     short loc_140AC429B
 * 0000000140AC4245: mov     rcx, [rsp+0C30h+var_BE0]
 * 0000000140AC424A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC4254: add     rax, rsi
 * 0000000140AC4257: xor     edx, edx
 * 0000000140AC4259: mov     [rsi+8C8h], rax
 * 0000000140AC4260: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC426A: add     rax, rcx
 * 0000000140AC426D: mov     [rsi+8D0h], rax
 * 0000000140AC4274: movsxd  rax, dword ptr [rcx]
 * 0000000140AC4277: mov     rcx, rsi
 * 0000000140AC427A: mov     [rsi+8D8h], rax
 * 0000000140AC4281: mov     eax, 1
 * 0000000140AC4286: mov     [rsi+8E0h], r14
 * 0000000140AC428D: mov     [rsi+8C0h], eax
 * 0000000140AC4293: call    sub_140AD049C
 * 0000000140AC4298: xor     r11d, r11d
 * 0000000140AC429B: mov     rbx, [rsp+0C30h+var_BD8]
 * 0000000140AC42A0: mov     r14, [rbp+0B30h+var_B88]
 * 0000000140AC42A4: mov     ecx, [r12]
 * 0000000140AC42A8: mov     eax, ecx
 * 0000000140AC42AA: btr     eax, 1Fh
 * 0000000140AC42AE: cmp     ebx, eax
 * 0000000140AC42B0: jz      loc_140AC4413
 * 0000000140AC42B6: mov     edx, r15d
 * 0000000140AC42B9: test    r15d, r15d
 * 0000000140AC42BC: jz      loc_140AC4363
 * 0000000140AC42C2: mov     eax, [rsi+95Ch]
 * 0000000140AC42C8: mov     r8d, 40h ; '@'
 * 0000000140AC42CE: test    r8b, al
 * 0000000140AC42D1: jz      loc_140AC4363
 * 0000000140AC42D7: mov     r15, cr8
 * 0000000140AC42DB: lea     eax, [r8-3Eh]
 * 0000000140AC42DF: mov     cr8, rax
 * 0000000140AC42E3: mov     rbx, r13
 * 0000000140AC42E6: dec     r13
 * 0000000140AC42E9: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140AC42F0: add     r13, rdx
 * 0000000140AC42F3: or      r13, 0FFFh
 * 0000000140AC42FA: lea     r12, [rbx-1]
 * 0000000140AC42FE: movzx   r14d, r15b
 * 0000000140AC4302: mov     rax, [rsi+458h]
 * 0000000140AC4309: xor     edx, edx
 * 0000000140AC430B: mov     rcx, rbx
 * 0000000140AC430E: call    j__guard_dispatch_icall_nop
 * 0000000140AC4313: cmp     eax, 0C000022Dh
 * 0000000140AC4318: jnz     short loc_140AC4341
 * 0000000140AC431A: mov     eax, 1
 * 0000000140AC431F: cmp     r15b, al
 * 0000000140AC4322: ja      loc_140AC43EF
 * 0000000140AC4328: movzx   r14d, r15b
 * 0000000140AC432C: mov     cr8, r14
 * 0000000140AC4330: mov     al, [rbx]
 * 0000000140AC4332: mov     rax, cr8
 * 0000000140AC4336: mov     eax, 2
 * 0000000140AC433B: mov     cr8, rax
 * 0000000140AC433F: jmp     short loc_140AC4302
 * 0000000140AC4341: xor     r11d, r11d
 * 0000000140AC4344: test    eax, eax
 * 0000000140AC4346: jns     loc_140AC43F2
 * 0000000140AC434C: mov     cr8, r14
 * 0000000140AC4350: mov     r12, [rsp+0C30h+var_BB8]
 * 0000000140AC4355: mov     rbx, [rsp+0C30h+var_BD8]
 * 0000000140AC435A: mov     r13, [rsp+0C30h+var_BC8]
 * 0000000140AC435F: mov     ecx, [r12]
 * 0000000140AC4363: mov     eax, ecx
 * 0000000140AC4365: btr     eax, 1Fh
 * 0000000140AC4369: cmp     [rsi+8C0h], r11d
 * 0000000140AC4370: jnz     loc_140AC440F
 * 0000000140AC4376: mov     ecx, ebx
 * 0000000140AC4378: mov     rbx, [rsp+0C30h+var_BE0]
 * 0000000140AC437D: xor     rcx, rax
 * 0000000140AC4380: mov     rax, [rsi+568h]
 * 0000000140AC4387: mov     [rax+18h], rcx
 * 0000000140AC438B: cmp     [rsi+8C0h], r11d
 * 0000000140AC4392: jnz     loc_140AC447D
 * 0000000140AC4398: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC43A2: xor     edx, edx
 * 0000000140AC43A4: add     rax, rsi
 * 0000000140AC43A7: mov     rcx, rsi
 * 0000000140AC43AA: mov     [rsi+8C8h], rax
 * 0000000140AC43B1: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC43BB: add     rax, rbx
 * 0000000140AC43BE: mov     [rsi+8D0h], rax
 * 0000000140AC43C5: movsxd  rax, dword ptr [rbx]
 * 0000000140AC43C8: mov     [rsi+8D8h], rax
 * 0000000140AC43CF: mov     eax, 1
 * 0000000140AC43D4: mov     [rsi+8E0h], r13
 * 0000000140AC43DB: mov     [rsi+8C0h], eax
 * 0000000140AC43E1: call    sub_140AD049C
 * 0000000140AC43E6: mov     r14, [rbp+0B30h+var_B88]
 * 0000000140AC43EA: xor     r11d, r11d
 * 0000000140AC43ED: jmp     short loc_140AC4418
 * 0000000140AC43EF: xor     r11d, r11d
 * 0000000140AC43F2: mov     eax, 1000h
 * 0000000140AC43F7: add     rbx, rax
 * 0000000140AC43FA: add     r12, rax
 * 0000000140AC43FD: cmp     r12, r13
 * 0000000140AC4400: jnz     loc_140AC42FE
 * 0000000140AC4406: mov     cr8, r14
 * 0000000140AC440A: mov     r12, [rsp+0C30h+var_BB8]
 * 0000000140AC440F: mov     r14, [rbp+0B30h+var_B88]
 * 0000000140AC4413: mov     rbx, [rsp+0C30h+var_BE0]
 * 0000000140AC4418: add     r12, 4
 * 0000000140AC441C: add     r14, 0Ch
 * 0000000140AC4420: mov     [rsp+0C30h+var_BB8], r12
 * 0000000140AC4425: mov     [rbp+0B30h+var_B88], r14
 * 0000000140AC4429: cmp     r14, rdi
 * 0000000140AC442C: jnb     short loc_140AC4447
 * 0000000140AC442E: mov     rax, [rbp+0B30h+var_B78]
 * 0000000140AC4432: mov     r10d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140AC4439: mov     eax, [rax]
 * 0000000140AC443B: cmp     [rsi+7F0h], eax
 * 0000000140AC4441: jl      loc_140AC38B3
 * 0000000140AC4447: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC444E: cmp     r14, [rbp+0B30h+var_B80]
 * 0000000140AC4452: jz      short loc_140AC4483
 * 0000000140AC4454: sub     r14, [rbp+0B30h+var_BA8]
 * 0000000140AC4458: mov     rax, 2AAAAAAAAAAAAAABh
 * 0000000140AC4462: imul    r14
 * 0000000140AC4465: sar     rdx, 1
 * 0000000140AC4468: mov     rax, rdx
 * 0000000140AC446B: shr     rax, 3Fh
 * 0000000140AC446F: add     rdx, rax
 * 0000000140AC4472: mov     [rsi+7ECh], edx
 * 0000000140AC4478: jmp     loc_140ABA5AF
 * 0000000140AC447D: mov     r14, [rbp+0B30h+var_B88]
 * 0000000140AC4481: jmp     short loc_140AC4418
 * 0000000140AC4483: mov     rcx, [rsi+518h]
 * 0000000140AC448A: mov     r14, cr8
 * 0000000140AC448E: mov     eax, 0Fh
 * 0000000140AC4493: mov     cr8, rax
 * 0000000140AC4497: mov     rax, [rsi+140h]
 * 0000000140AC449E: call    j__guard_dispatch_icall_nop
 * 0000000140AC44A3: mov     rax, [rsi+5E8h]
 * 0000000140AC44AA: mov     r12, [rsp+0C30h+var_BE0]
 * 0000000140AC44AF: mov     rcx, [rax]
 * 0000000140AC44B2: mov     eax, [rcx]
 * 0000000140AC44B4: lea     rbx, [rcx+10h]
 * 0000000140AC44B8: mov     r15b, [rcx+0Ch]
 * 0000000140AC44BC: lea     rcx, [rax+rax*2]
 * 0000000140AC44C0: lea     r13, [rbx+rcx*8]
 * 0000000140AC44C4: mov     r8d, 18h
 * 0000000140AC44CA: lea     r9, [r12+18h]
 * 0000000140AC44CF: mov     r10, rbx
 * 0000000140AC44D2: mov     rcx, [r10]
 * 0000000140AC44D5: add     r10, 8
 * 0000000140AC44D9: mov     rax, [r9]
 * 0000000140AC44DC: add     r9, 8
 * 0000000140AC44E0: cmp     rcx, rax
 * 0000000140AC44E3: jnz     short loc_140AC4519
 * 0000000140AC44E5: add     r8d, 0FFFFFFF8h
 * 0000000140AC44E9: cmp     r8d, 8
 * 0000000140AC44ED: jnb     short loc_140AC44D2
 * 0000000140AC44EF: test    r8d, r8d
 * 0000000140AC44F2: jz      short loc_140AC4522
 * 0000000140AC44F4: mov     r11d, 1
 * 0000000140AC44FA: movzx   edx, byte ptr [r10]
 * 0000000140AC44FE: add     r10, r11
 * 0000000140AC4501: movzx   eax, byte ptr [r9]
 * 0000000140AC4505: add     r9, r11
 * 0000000140AC4508: cmp     rdx, rax
 * 0000000140AC450B: jnz     short loc_140AC4519
 * 0000000140AC450D: mov     eax, 0FFFFFFFFh
 * 0000000140AC4512: add     r8d, eax
 * 0000000140AC4515: jz      short loc_140AC4522
 * 0000000140AC4517: jmp     short loc_140AC44FA
 * 0000000140AC4519: add     rbx, 18h
 * 0000000140AC451D: cmp     rbx, r13
 * 0000000140AC4520: jb      short loc_140AC44C4
 * 0000000140AC4522: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC4527: mov     rcx, [rsi+518h]
 * 0000000140AC452E: mov     rax, [rsi+180h]
 * 0000000140AC4535: call    j__guard_dispatch_icall_nop
 * 0000000140AC453A: movzx   eax, r14b
 * 0000000140AC453E: mov     cr8, rax
 * 0000000140AC4542: xor     r14d, r14d
 * 0000000140AC4545: test    r15b, r15b
 * 0000000140AC4548: jz      short loc_140AC45BF
 * 0000000140AC454A: mov     eax, [rsi+95Ch]
 * 0000000140AC4550: lea     ecx, [r14+10h]
 * 0000000140AC4554: test    cl, al
 * 0000000140AC4556: jz      short loc_140AC45B3
 * 0000000140AC4558: cmp     [rsi+8C0h], r14d
 * 0000000140AC455F: jnz     short loc_140AC45B3
 * 0000000140AC4561: mov     rcx, [rsp+0C30h+var_BE0]
 * 0000000140AC4566: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC4570: add     rax, rsi
 * 0000000140AC4573: xor     edx, edx
 * 0000000140AC4575: mov     [rsi+8C8h], rax
 * 0000000140AC457C: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC4586: add     rax, rcx
 * 0000000140AC4589: mov     [rsi+8D0h], rax
 * 0000000140AC4590: movsxd  rax, dword ptr [rcx]
 * 0000000140AC4593: mov     rcx, rsi
 * 0000000140AC4596: mov     [rsi+8D8h], rax
 * 0000000140AC459D: lea     eax, [r14+1]
 * 0000000140AC45A1: mov     [rsi+8E0h], rax
 * 0000000140AC45A8: mov     [rsi+8C0h], eax
 * 0000000140AC45AE: call    sub_140AD049C
 * 0000000140AC45B3: mov     eax, 1
 * 0000000140AC45B8: cmp     [r12+18h], rax
 * 0000000140AC45BD: jz      short loc_140AC4624
 * 0000000140AC45BF: mov     r12d, 1
 * 0000000140AC45C5: cmp     rbx, r13
 * 0000000140AC45C8: jnz     short loc_140AC4627
 * 0000000140AC45CA: cmp     [rsi+8C0h], r14d
 * 0000000140AC45D1: jnz     short loc_140AC4627
 * 0000000140AC45D3: mov     rcx, [rsp+0C30h+var_BE0]
 * 0000000140AC45D8: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC45E2: add     rax, rsi
 * 0000000140AC45E5: xor     edx, edx
 * 0000000140AC45E7: mov     [rsi+8C8h], rax
 * 0000000140AC45EE: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC45F8: add     rax, rcx
 * 0000000140AC45FB: mov     [rsi+8D0h], rax
 * 0000000140AC4602: movsxd  rax, dword ptr [rcx]
 * 0000000140AC4605: mov     rcx, rsi
 * 0000000140AC4608: mov     [rsi+8D8h], rax
 * 0000000140AC460F: mov     [rsi+8E0h], rbx
 * 0000000140AC4616: mov     [rsi+8C0h], r12d
 * 0000000140AC461D: call    sub_140AD049C
 * 0000000140AC4622: jmp     short loc_140AC4627
 * 0000000140AC4624: mov     r12, rax
 * 0000000140AC4627: mov     [rsi+7ECh], r14d
 * 0000000140AC462E: jmp     loc_140ABA35B
 * 0000000140AC4633: mov     eax, [r13+24h]
 * 0000000140AC4637: add     [rsi+7F0h], eax
 * 0000000140AC463D: mov     r11d, [r13+20h]
 * 0000000140AC4641: mov     r9d, [r13+24h]
 * 0000000140AC4645: add     r11, rsi
 * 0000000140AC4648: mov     r14d, [rsi+7DCh]
 * 0000000140AC464F: mov     r10, r11
 * 0000000140AC4652: mov     r15, [rsi+7E0h]
 * 0000000140AC4659: mov     rax, r11
 * 0000000140AC465C: lea     rcx, [r11+r9]
 * 0000000140AC4660: cmp     r11, rcx
 * 0000000140AC4663: jnb     short loc_140AC4675
 * 0000000140AC4665: mov     edx, 40h ; '@'
 * 0000000140AC466A: prefetchnta byte ptr [rax]
 * 0000000140AC466D: add     rax, rdx
 * 0000000140AC4670: cmp     rax, rcx
 * 0000000140AC4673: jb      short loc_140AC466A
 * 0000000140AC4675: mov     ebx, r9d
 * 0000000140AC4678: mov     r8, r15
 * 0000000140AC467B: shr     ebx, 7
 * 0000000140AC467E: test    ebx, ebx
 * 0000000140AC4680: jz      short loc_140AC46F8
 * 0000000140AC4682: mov     rdi, 7010008004002001h
 * 0000000140AC468C: mov     edx, 8
 * 0000000140AC4691: lea     esi, [rdx-7]
 * 0000000140AC4694: mov     rax, [r10]
 * 0000000140AC4697: mov     ecx, r14d
 * 0000000140AC469A: xor     rax, r8
 * 0000000140AC469D: mov     r8, [r10+8]
 * 0000000140AC46A1: rol     rax, cl
 * 0000000140AC46A4: add     r10, 10h
 * 0000000140AC46A8: xor     r8, rax
 * 0000000140AC46AB: rol     r8, cl
 * 0000000140AC46AE: sub     rdx, rsi
 * 0000000140AC46B1: jnz     short loc_140AC4694
 * 0000000140AC46B3: mov     rcx, r10
 * 0000000140AC46B6: sub     rcx, r11
 * 0000000140AC46B9: xor     rcx, r15
 * 0000000140AC46BC: mov     rax, rcx
 * 0000000140AC46BF: rol     rax, 11h
 * 0000000140AC46C3: xor     rcx, rax
 * 0000000140AC46C6: mov     rax, rdi
 * 0000000140AC46C9: mul     rcx
 * 0000000140AC46CC: mov     [rbp+0B30h+var_5B0], rdx
 * 0000000140AC46D3: xor     edx, eax
 * 0000000140AC46D5: xor     r14d, edx
 * 0000000140AC46D8: mov     rax, rsi
 * 0000000140AC46DB: and     r14d, 3Fh
 * 0000000140AC46DF: cmovz   r14d, eax
 * 0000000140AC46E3: mov     eax, 0FFFFFFFFh
 * 0000000140AC46E8: add     ebx, eax
 * 0000000140AC46EA: jnz     short loc_140AC468C
 * 0000000140AC46EC: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC46F1: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC46F8: and     r9d, 7Fh
 * 0000000140AC46FC: mov     r11d, 1
 * 0000000140AC4702: cmp     r9d, 8
 * 0000000140AC4706: jb      short loc_140AC4725
 * 0000000140AC4708: mov     edx, r9d
 * 0000000140AC470B: shr     rdx, 3
 * 0000000140AC470F: xor     r8, [r10]
 * 0000000140AC4712: mov     ecx, r14d
 * 0000000140AC4715: rol     r8, cl
 * 0000000140AC4718: add     r10, 8
 * 0000000140AC471C: add     r9d, 0FFFFFFF8h
 * 0000000140AC4720: sub     rdx, r11
 * 0000000140AC4723: jnz     short loc_140AC470F
 * 0000000140AC4725: test    r9d, r9d
 * 0000000140AC4728: jz      short loc_140AC4749
 * 0000000140AC472A: mov     esi, 0FFFFFFFFh
 * 0000000140AC472F: movzx   eax, byte ptr [r10]
 * 0000000140AC4733: mov     ecx, r14d
 * 0000000140AC4736: xor     r8, rax
 * 0000000140AC4739: add     r10, r11
 * 0000000140AC473C: rol     r8, cl
 * 0000000140AC473F: add     r9d, esi
 * 0000000140AC4742: jnz     short loc_140AC472F
 * 0000000140AC4744: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC4749: mov     rcx, [r13+18h]
 * 0000000140AC474D: cmp     r8, rcx
 * 0000000140AC4750: jz      loc_140ABA5AF
 * 0000000140AC4756: mov     eax, [rsi+8C0h]
 * 0000000140AC475C: test    eax, eax
 * 0000000140AC475E: jnz     short loc_140AC4774
 * 0000000140AC4760: mov     rax, [rsi+568h]
 * 0000000140AC4767: xor     rcx, r8
 * 0000000140AC476A: mov     [rax+18h], rcx
 * 0000000140AC476E: mov     eax, [rsi+8C0h]
 * 0000000140AC4774: mov     ecx, [r13+20h]
 * 0000000140AC4778: add     rcx, rsi
 * 0000000140AC477B: test    eax, eax
 * 0000000140AC477D: jmp     loc_140AC2264
 * 0000000140AC4782: mov     ebx, 0Fh
 * 0000000140AC4787: sub     r10d, 2
 * 0000000140AC478B: jz      loc_140AC4F58
 * 0000000140AC4791: sub     r10d, 1
 * 0000000140AC4795: jz      loc_140AC4B41
 * 0000000140AC479B: cmp     r10d, 14h
 * 0000000140AC479F: jz      short loc_140AC47EB
 * 0000000140AC47A1: xor     ecx, ecx
 * 0000000140AC47A3: lea     r12d, [rcx+1]
 * 0000000140AC47A7: cmp     [rsi+8C0h], ecx
 * 0000000140AC47AD: jnz     loc_140ABA35B
 * 0000000140AC47B3: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC47BD: add     rax, rsi
 * 0000000140AC47C0: mov     [rsi+8C8h], rax
 * 0000000140AC47C7: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC47D1: add     rax, r13
 * 0000000140AC47D4: mov     [rsi+8D0h], rax
 * 0000000140AC47DB: mov     qword ptr [rsi+8D8h], 101h
 * 0000000140AC47E6: jmp     loc_140ABA62F
 * 0000000140AC47EB: mov     edx, [r13+28h]
 * 0000000140AC47EF: lea     rcx, [rbp+0B30h+var_2E8]
 * 0000000140AC47F6: mov     rax, [rsi+190h]
 * 0000000140AC47FD: call    j__guard_dispatch_icall_nop
 * 0000000140AC4802: mov     rax, [rsi+1C0h]
 * 0000000140AC4809: lea     rdx, [rbp+0B30h+var_2D8]
 * 0000000140AC4810: lea     rcx, [rbp+0B30h+var_2E8]
 * 0000000140AC4817: call    j__guard_dispatch_icall_nop
 * 0000000140AC481C: mov     rbx, [rsi+9D8h]
 * 0000000140AC4823: xor     r15d, r15d
 * 0000000140AC4826: test    rbx, rbx
 * 0000000140AC4829: jz      short loc_140AC4846
 * 0000000140AC482B: mov     ebx, [rbx+320h]
 * 0000000140AC4831: mov     rax, [rsi+9D8h]
 * 0000000140AC4838: test    rax, rax
 * 0000000140AC483B: jz      short loc_140AC4857
 * 0000000140AC483D: mov     r14d, [rax+340h]
 * 0000000140AC4844: jmp     short loc_140AC4868
 * 0000000140AC4846: mov     ecx, 832h
 * 0000000140AC484B: rdmsr
 * 0000000140AC484D: shl     rdx, 20h
 * 0000000140AC4851: or      rax, rdx
 * 0000000140AC4854: mov     rbx, rax
 * 0000000140AC4857: mov     ecx, 834h
 * 0000000140AC485C: rdmsr
 * 0000000140AC485E: shl     rdx, 20h
 * 0000000140AC4862: or      rax, rdx
 * 0000000140AC4865: mov     r14, rax
 * 0000000140AC4868: mov     rax, [rsi+188h]
 * 0000000140AC486F: lea     rcx, [rbp+0B30h+var_2D8]
 * 0000000140AC4876: call    j__guard_dispatch_icall_nop
 * 0000000140AC487B: mov     ecx, 10h
 * 0000000140AC4880: test    [rsi+843h], cl
 * 0000000140AC4886: jz      loc_140AC49D1
 * 0000000140AC488C: cli
 * 0000000140AC488D: mov     rdx, [rsi+8A8h]
 * 0000000140AC4894: mov     r8d, 26h ; '&'
 * 0000000140AC489A: mov     ecx, 130h
 * 0000000140AC489F: mov     rax, rdx
 * 0000000140AC48A2: lea     r12d, [r8-25h]
 * 0000000140AC48A6: mov     [rax], r15
 * 0000000140AC48A9: add     ecx, 0FFFFFFF8h
 * 0000000140AC48AC: add     rax, 8
 * 0000000140AC48B0: sub     r8, r12
 * 0000000140AC48B3: jnz     short loc_140AC48A6
 * 0000000140AC48B5: test    ecx, ecx
 * 0000000140AC48B7: jz      short loc_140AC48CA
 * 0000000140AC48B9: mov     r8d, 0FFFFFFFFh
 * 0000000140AC48BF: mov     [rax], r15b
 * 0000000140AC48C2: add     rax, r12
 * 0000000140AC48C5: add     ecx, r8d
 * 0000000140AC48C8: jnz     short loc_140AC48BF
 * 0000000140AC48CA: movups  xmm0, xmmword ptr [rsi+810h]
 * 0000000140AC48D1: mov     eax, 12Fh
 * 0000000140AC48D6: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140AC48DB: movups  xmm1, xmmword ptr [rsi+820h]
 * 0000000140AC48E2: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140AC48E7: movups  xmm0, xmmword ptr [rsi+830h]
 * 0000000140AC48EE: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140AC48F6: mov     word ptr [rbp+0B30h+var_878], ax
 * 0000000140AC48FD: lea     rax, [rsi+840h]
 * 0000000140AC4904: mov     [rbp+2BAh], rdx
 * 0000000140AC490B: mov     rcx, rax
 * 0000000140AC490E: mov     [rdx+10h], ax
 * 0000000140AC4912: shr     rcx, 10h
 * 0000000140AC4916: mov     [rbp+0B30h+var_5A8], rax
 * 0000000140AC491D: shr     rax, 20h
 * 0000000140AC4921: mov     [rdx+16h], cx
 * 0000000140AC4925: mov     [rdx+18h], eax
 * 0000000140AC4928: sidt    fword ptr [rbp+0B30h+var_760]
 * 0000000140AC492F: lidt    fword ptr [rbp+0B30h+var_878]
 * 0000000140AC4936: test    dword ptr [rsi+95Ch], 20000h
 * 0000000140AC4940: jnz     short loc_140AC4984
 * 0000000140AC4942: mov     rdx, gs:20h
 * 0000000140AC494B: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140AC4955: mov     rax, [rsi+498h]
 * 0000000140AC495C: add     rcx, rsi
 * 0000000140AC495F: mov     [rax], rcx
 * 0000000140AC4962: mov     rax, [rsi+4A0h]
 * 0000000140AC4969: mov     [rax], rdx
 * 0000000140AC496C: mov     rax, [rsi+4A8h]
 * 0000000140AC4973: mov     [rax], r15
 * 0000000140AC4976: mov     rax, [rsi+4B0h]
 * 0000000140AC497D: mov     qword ptr [rax], 115h
 * 0000000140AC4984: call    sub_140AD2020
 * 0000000140AC4989: test    dword ptr [rsi+95Ch], 20000h
 * 0000000140AC4993: jnz     short loc_140AC49C7
 * 0000000140AC4995: mov     rax, [rsi+498h]
 * 0000000140AC499C: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140AC49A6: mov     [rax], rcx
 * 0000000140AC49A9: mov     rax, [rsi+4A0h]
 * 0000000140AC49B0: mov     [rax], r15
 * 0000000140AC49B3: mov     rax, [rsi+4A8h]
 * 0000000140AC49BA: mov     [rax], r15
 * 0000000140AC49BD: mov     rax, [rsi+4B0h]
 * 0000000140AC49C4: mov     [rax], r15
 * 0000000140AC49C7: lidt    fword ptr [rbp+0B30h+var_760]
 * 0000000140AC49CE: sti
 * 0000000140AC49CF: jmp     short loc_140AC49D7
 * 0000000140AC49D1: mov     r12d, 1
 * 0000000140AC49D7: mov     eax, [r13+1Ch]
 * 0000000140AC49DB: mov     r8d, [r13+18h]
 * 0000000140AC49DF: and     eax, ebx
 * 0000000140AC49E1: cmp     eax, r8d
 * 0000000140AC49E4: jnz     short loc_140AC4A05
 * 0000000140AC49E6: bt      ebx, 10h
 * 0000000140AC49EA: jb      loc_140AC4A8D
 * 0000000140AC49F0: cmp     bl, 0D1h
 * 0000000140AC49F3: jz      loc_140AC4A8D
 * 0000000140AC49F9: lea     eax, [rbx+3]
 * 0000000140AC49FC: cmp     al, r12b
 * 0000000140AC49FF: jbe     loc_140AC4A8D
 * 0000000140AC4A05: mov     edx, [r13+28h]
 * 0000000140AC4A09: mov     rax, 32000000000h
 * 0000000140AC4A13: shl     rdx, 30h
 * 0000000140AC4A17: or      rdx, r8
 * 0000000140AC4A1A: or      rdx, rax
 * 0000000140AC4A1D: cmp     [rsi+8C0h], r15d
 * 0000000140AC4A24: jnz     short loc_140AC4A8D
 * 0000000140AC4A26: mov     rax, [rsi+568h]
 * 0000000140AC4A2D: mov     ecx, ebx
 * 0000000140AC4A2F: mov     rbx, 0B3B74BDEE4453415h
 * 0000000140AC4A39: xor     rcx, r8
 * 0000000140AC4A3C: mov     [rax+18h], rcx
 * 0000000140AC4A40: cmp     [rsi+8C0h], r15d
 * 0000000140AC4A47: jnz     short loc_140AC4A97
 * 0000000140AC4A49: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC4A53: mov     rcx, rsi
 * 0000000140AC4A56: add     rax, rsi
 * 0000000140AC4A59: mov     [rsi+8C8h], rax
 * 0000000140AC4A60: lea     rax, [rbx+r13]
 * 0000000140AC4A64: mov     [rsi+8D0h], rax
 * 0000000140AC4A6B: movsxd  rax, dword ptr [r13+0]
 * 0000000140AC4A6F: mov     [rsi+8D8h], rax
 * 0000000140AC4A76: mov     [rsi+8E0h], rdx
 * 0000000140AC4A7D: xor     edx, edx
 * 0000000140AC4A7F: mov     [rsi+8C0h], r12d
 * 0000000140AC4A86: call    sub_140AD049C
 * 0000000140AC4A8B: jmp     short loc_140AC4A97
 * 0000000140AC4A8D: mov     rbx, 0B3B74BDEE4453415h
 * 0000000140AC4A97: mov     eax, [r13+24h]
 * 0000000140AC4A9B: mov     ecx, [r13+20h]
 * 0000000140AC4A9F: and     eax, r14d
 * 0000000140AC4AA2: cmp     eax, ecx
 * 0000000140AC4AA4: jnz     short loc_140AC4AC8
 * 0000000140AC4AA6: bt      r14d, 10h
 * 0000000140AC4AAB: jb      loc_140AC4F44
 * 0000000140AC4AB1: cmp     r14b, 0D1h
 * 0000000140AC4AB5: jz      loc_140AC4F44
 * 0000000140AC4ABB: lea     eax, [r14+3]
 * 0000000140AC4ABF: cmp     al, r12b
 * 0000000140AC4AC2: jbe     loc_140AC4F44
 * 0000000140AC4AC8: mov     edx, [r13+28h]
 * 0000000140AC4ACC: mov     rax, 34000000000h
 * 0000000140AC4AD6: shl     rdx, 30h
 * 0000000140AC4ADA: or      rdx, rcx
 * 0000000140AC4ADD: or      rdx, rax
 * 0000000140AC4AE0: cmp     [rsi+8C0h], r15d
 * 0000000140AC4AE7: jnz     loc_140AC4F44
 * 0000000140AC4AED: mov     eax, r14d
 * 0000000140AC4AF0: xor     rcx, rax
 * 0000000140AC4AF3: mov     rax, [rsi+568h]
 * 0000000140AC4AFA: mov     [rax+18h], rcx
 * 0000000140AC4AFE: cmp     [rsi+8C0h], r15d
 * 0000000140AC4B05: jnz     loc_140AC4F44
 * 0000000140AC4B0B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC4B15: add     rax, rsi
 * 0000000140AC4B18: mov     [rsi+8C8h], rax
 * 0000000140AC4B1F: lea     rax, [rbx+r13]
 * 0000000140AC4B23: mov     [rsi+8D0h], rax
 * 0000000140AC4B2A: movsxd  rax, dword ptr [r13+0]
 * 0000000140AC4B2E: mov     [rsi+8D8h], rax
 * 0000000140AC4B35: mov     [rsi+8E0h], rdx
 * 0000000140AC4B3C: jmp     loc_140AC4F2B
 * 0000000140AC4B41: mov     edx, [r13+28h]
 * 0000000140AC4B45: lea     rcx, [rbp+0B30h+var_2C8]
 * 0000000140AC4B4C: mov     rax, [rsi+190h]
 * 0000000140AC4B53: call    j__guard_dispatch_icall_nop
 * 0000000140AC4B58: mov     rax, [rsi+1C0h]
 * 0000000140AC4B5F: lea     rdx, [rbp+0B30h+var_2B8]
 * 0000000140AC4B66: lea     rcx, [rbp+0B30h+var_2C8]
 * 0000000140AC4B6D: call    j__guard_dispatch_icall_nop
 * 0000000140AC4B72: lea     rdx, [rbp+0B30h+var_1B0]
 * 0000000140AC4B79: lea     rcx, [rbp+0B30h+var_918]
 * 0000000140AC4B80: call    sub_140AD1FE0
 * 0000000140AC4B85: mov     r15, [rbp+0B30h+var_916]
 * 0000000140AC4B8C: mov     ecx, 2
 * 0000000140AC4B91: mov     r14d, [r13+10h]
 * 0000000140AC4B95: test    [rsi+843h], cl
 * 0000000140AC4B9B: jz      loc_140AC4CCD
 * 0000000140AC4BA1: mov     rdx, [rsi+8A8h]
 * 0000000140AC4BA8: mov     r8d, 26h ; '&'
 * 0000000140AC4BAE: mov     ecx, 130h
 * 0000000140AC4BB3: mov     rax, rdx
 * 0000000140AC4BB6: xor     r12d, r12d
 * 0000000140AC4BB9: lea     r9d, [r8-25h]
 * 0000000140AC4BBD: mov     [rax], r12
 * 0000000140AC4BC0: add     ecx, 0FFFFFFF8h
 * 0000000140AC4BC3: add     rax, 8
 * 0000000140AC4BC7: sub     r8, r9
 * 0000000140AC4BCA: jnz     short loc_140AC4BBD
 * 0000000140AC4BCC: test    ecx, ecx
 * 0000000140AC4BCE: jz      short loc_140AC4BE1
 * 0000000140AC4BD0: mov     r8d, 0FFFFFFFFh
 * 0000000140AC4BD6: mov     [rax], r12b
 * 0000000140AC4BD9: add     rax, r9
 * 0000000140AC4BDC: add     ecx, r8d
 * 0000000140AC4BDF: jnz     short loc_140AC4BD6
 * 0000000140AC4BE1: movups  xmm0, xmmword ptr [rsi+810h]
 * 0000000140AC4BE8: mov     eax, 12Fh
 * 0000000140AC4BED: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140AC4BF2: movups  xmm1, xmmword ptr [rsi+820h]
 * 0000000140AC4BF9: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140AC4BFE: movups  xmm0, xmmword ptr [rsi+830h]
 * 0000000140AC4C05: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140AC4C0D: mov     word ptr [rbp+0B30h+var_868], ax
 * 0000000140AC4C14: lea     rax, [rsi+840h]
 * 0000000140AC4C1B: mov     [rbp+2CAh], rdx
 * 0000000140AC4C22: mov     rcx, rax
 * 0000000140AC4C25: mov     [rdx+10h], ax
 * 0000000140AC4C29: shr     rcx, 10h
 * 0000000140AC4C2D: mov     [rbp+0B30h+var_5A0], rax
 * 0000000140AC4C34: shr     rax, 20h
 * 0000000140AC4C38: mov     [rdx+16h], cx
 * 0000000140AC4C3C: mov     [rdx+18h], eax
 * 0000000140AC4C3F: cli
 * 0000000140AC4C40: sidt    fword ptr [rbp+0B30h+var_770]
 * 0000000140AC4C47: lidt    fword ptr [rbp+0B30h+var_868]
 * 0000000140AC4C4E: mov     dr7, r12
 * 0000000140AC4C52: lea     rax, [rsi+846h]
 * 0000000140AC4C59: mov     [rdx+10h], ax
 * 0000000140AC4C5D: mov     rcx, rax
 * 0000000140AC4C60: shr     rcx, 10h
 * 0000000140AC4C64: shr     rax, 20h
 * 0000000140AC4C68: mov     [rdx+16h], cx
 * 0000000140AC4C6C: mov     [rdx+18h], eax
 * 0000000140AC4C6F: test    byte ptr [rsi+843h], 20h
 * 0000000140AC4C76: jnz     short loc_140AC4C86
 * 0000000140AC4C78: call    sub_140AD2050
 * 0000000140AC4C7D: mov     [rsi+8B0h], rax
 * 0000000140AC4C84: jmp     short loc_140AC4CB7
 * 0000000140AC4C86: lea     rbx, [rsi+872h]
 * 0000000140AC4C8D: call    sub_140AD2000
 * 0000000140AC4C92: mov     [rbx], ax
 * 0000000140AC4C95: mov     dr0, rbx
 * 0000000140AC4C98: mov     eax, 70001h
 * 0000000140AC4C9D: mov     dr7, rax
 * 0000000140AC4CA0: mov     rcx, rbx
 * 0000000140AC4CA3: call    sub_140AD2040
 * 0000000140AC4CA8: mov     [rsi+8B0h], rax
 * 0000000140AC4CAF: mov     dr7, r12
 * 0000000140AC4CB3: mov     dr0, r12
 * 0000000140AC4CB7: mov     eax, gs:1A4h
 * 0000000140AC4CBF: mov     [rsi+8B8h], eax
 * 0000000140AC4CC5: lidt    fword ptr [rbp+0B30h+var_770]
 * 0000000140AC4CCC: sti
 * 0000000140AC4CCD: call    sub_140AD1FF0
 * 0000000140AC4CD2: movzx   r12d, ax
 * 0000000140AC4CD6: call    sub_140AD2010
 * 0000000140AC4CDB: add     [rsi+7F0h], r14d
 * 0000000140AC4CE2: lea     rcx, [r15+r14]
 * 0000000140AC4CE6: mov     r9d, [rsi+7DCh]
 * 0000000140AC4CED: mov     r8, r15
 * 0000000140AC4CF0: mov     r11, [rsi+7E0h]
 * 0000000140AC4CF7: movzx   r13d, ax
 * 0000000140AC4CFB: mov     rax, r15
 * 0000000140AC4CFE: cmp     r15, rcx
 * 0000000140AC4D01: jnb     short loc_140AC4D13
 * 0000000140AC4D03: mov     edx, 40h ; '@'
 * 0000000140AC4D08: prefetchnta byte ptr [rax]
 * 0000000140AC4D0B: add     rax, rdx
 * 0000000140AC4D0E: cmp     rax, rcx
 * 0000000140AC4D11: jb      short loc_140AC4D08
 * 0000000140AC4D13: mov     r10d, r14d
 * 0000000140AC4D16: mov     rbx, r11
 * 0000000140AC4D19: shr     r10d, 7
 * 0000000140AC4D1D: test    r10d, r10d
 * 0000000140AC4D20: jz      short loc_140AC4D9A
 * 0000000140AC4D22: mov     rdi, 7010008004002001h
 * 0000000140AC4D2C: mov     edx, 8
 * 0000000140AC4D31: lea     esi, [rdx-7]
 * 0000000140AC4D34: mov     rax, [r8]
 * 0000000140AC4D37: mov     ecx, r9d
 * 0000000140AC4D3A: xor     rax, rbx
 * 0000000140AC4D3D: mov     rbx, [r8+8]
 * 0000000140AC4D41: rol     rax, cl
 * 0000000140AC4D44: add     r8, 10h
 * 0000000140AC4D48: xor     rbx, rax
 * 0000000140AC4D4B: rol     rbx, cl
 * 0000000140AC4D4E: sub     rdx, rsi
 * 0000000140AC4D51: jnz     short loc_140AC4D34
 * 0000000140AC4D53: mov     rcx, r8
 * 0000000140AC4D56: sub     rcx, r15
 * 0000000140AC4D59: xor     rcx, r11
 * 0000000140AC4D5C: mov     rax, rcx
 * 0000000140AC4D5F: rol     rax, 11h
 * 0000000140AC4D63: xor     rcx, rax
 * 0000000140AC4D66: mov     rax, rdi
 * 0000000140AC4D69: mul     rcx
 * 0000000140AC4D6C: xor     r9d, edx
 * 0000000140AC4D6F: mov     [rbp+0B30h+var_598], rdx
 * 0000000140AC4D76: xor     r9d, eax
 * 0000000140AC4D79: mov     rax, rsi
 * 0000000140AC4D7C: and     r9d, 3Fh
 * 0000000140AC4D80: cmovz   r9d, eax
 * 0000000140AC4D84: mov     eax, 0FFFFFFFFh
 * 0000000140AC4D89: add     r10d, eax
 * 0000000140AC4D8C: jnz     short loc_140AC4D2C
 * 0000000140AC4D8E: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC4D93: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC4D9A: and     r14d, 7Fh
 * 0000000140AC4D9E: mov     r10d, 1
 * 0000000140AC4DA4: cmp     r14d, 8
 * 0000000140AC4DA8: jb      short loc_140AC4DC7
 * 0000000140AC4DAA: mov     edx, r14d
 * 0000000140AC4DAD: shr     rdx, 3
 * 0000000140AC4DB1: xor     rbx, [r8]
 * 0000000140AC4DB4: mov     ecx, r9d
 * 0000000140AC4DB7: rol     rbx, cl
 * 0000000140AC4DBA: add     r8, 8
 * 0000000140AC4DBE: add     r14d, 0FFFFFFF8h
 * 0000000140AC4DC2: sub     rdx, r10
 * 0000000140AC4DC5: jnz     short loc_140AC4DB1
 * 0000000140AC4DC7: test    r14d, r14d
 * 0000000140AC4DCA: jz      short loc_140AC4DEB
 * 0000000140AC4DCC: mov     esi, 0FFFFFFFFh
 * 0000000140AC4DD1: movzx   eax, byte ptr [r8]
 * 0000000140AC4DD5: mov     ecx, r9d
 * 0000000140AC4DD8: xor     rbx, rax
 * 0000000140AC4DDB: add     r8, r10
 * 0000000140AC4DDE: rol     rbx, cl
 * 0000000140AC4DE1: add     r14d, esi
 * 0000000140AC4DE4: jnz     short loc_140AC4DD1
 * 0000000140AC4DE6: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC4DEB: mov     rax, rbx
 * 0000000140AC4DEE: jmp     short loc_140AC4DF2
 * 0000000140AC4DF0: xor     ebx, eax
 * 0000000140AC4DF2: shr     rax, 1Fh
 * 0000000140AC4DF6: test    rax, rax
 * 0000000140AC4DF9: jnz     short loc_140AC4DF0
 * 0000000140AC4DFB: mov     rax, [rsi+188h]
 * 0000000140AC4E02: lea     rcx, [rbp+0B30h+var_2B8]
 * 0000000140AC4E09: btr     ebx, 1Fh
 * 0000000140AC4E0D: call    j__guard_dispatch_icall_nop
 * 0000000140AC4E12: mov     r9, [rsp+0C30h+var_BE0]
 * 0000000140AC4E17: mov     r11d, 40h ; '@'
 * 0000000140AC4E1D: cmp     ebx, [r9+14h]
 * 0000000140AC4E21: jnz     short loc_140AC4E41
 * 0000000140AC4E23: movzx   eax, word ptr [r9+2Ch]
 * 0000000140AC4E28: cmp     [rbp+0B30h+var_918], ax
 * 0000000140AC4E2F: jnz     short loc_140AC4E41
 * 0000000140AC4E31: test    r12w, r12w
 * 0000000140AC4E35: jnz     short loc_140AC4E41
 * 0000000140AC4E37: cmp     r13w, r11w
 * 0000000140AC4E3B: jz      loc_140AC4F3E
 * 0000000140AC4E41: test    dword ptr [rsi+958h], 40000000h
 * 0000000140AC4E4B: jz      short loc_140AC4E9B
 * 0000000140AC4E4D: mov     rcx, [rsi+0A48h]
 * 0000000140AC4E54: mov     edx, 30h ; '0'
 * 0000000140AC4E59: lea     r8d, [rdx-2Ah]
 * 0000000140AC4E5D: lea     r10d, [rdx-2Fh]
 * 0000000140AC4E61: mov     rax, [r9]
 * 0000000140AC4E64: add     edx, 0FFFFFFF8h
 * 0000000140AC4E67: mov     [rcx], rax
 * 0000000140AC4E6A: add     r9, 8
 * 0000000140AC4E6E: add     rcx, 8
 * 0000000140AC4E72: sub     r8, r10
 * 0000000140AC4E75: jnz     short loc_140AC4E61
 * 0000000140AC4E77: test    edx, edx
 * 0000000140AC4E79: jz      short loc_140AC4E94
 * 0000000140AC4E7B: mov     esi, 0FFFFFFFFh
 * 0000000140AC4E80: mov     al, [r9]
 * 0000000140AC4E83: add     r9, r10
 * 0000000140AC4E86: mov     [rcx], al
 * 0000000140AC4E88: add     rcx, r10
 * 0000000140AC4E8B: add     edx, esi
 * 0000000140AC4E8D: jnz     short loc_140AC4E80
 * 0000000140AC4E8F: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC4E94: mov     r9, [rsi+0A48h]
 * 0000000140AC4E9B: mov     rax, [rbp+0B30h+var_916]
 * 0000000140AC4EA2: mov     edx, ebx
 * 0000000140AC4EA4: mov     [r9+18h], rax
 * 0000000140AC4EA8: mov     [r9+20h], rdx
 * 0000000140AC4EAC: test    r12w, r12w
 * 0000000140AC4EB0: jz      short loc_140AC4EB8
 * 0000000140AC4EB2: mov     [r9+18h], r12
 * 0000000140AC4EB6: jmp     short loc_140AC4EC2
 * 0000000140AC4EB8: cmp     r13w, r11w
 * 0000000140AC4EBC: jz      short loc_140AC4EC2
 * 0000000140AC4EBE: mov     [r9+18h], r13
 * 0000000140AC4EC2: mov     eax, [rsi+8C0h]
 * 0000000140AC4EC8: mov     ecx, [r9+14h]
 * 0000000140AC4ECC: test    eax, eax
 * 0000000140AC4ECE: jnz     short loc_140AC4EE4
 * 0000000140AC4ED0: mov     rax, [rsi+568h]
 * 0000000140AC4ED7: xor     rcx, rdx
 * 0000000140AC4EDA: mov     [rax+18h], rcx
 * 0000000140AC4EDE: mov     eax, [rsi+8C0h]
 * 0000000140AC4EE4: mov     rcx, [r9+8]
 * 0000000140AC4EE8: mov     r12d, 1
 * 0000000140AC4EEE: test    eax, eax
 * 0000000140AC4EF0: jnz     short loc_140AC4F44
 * 0000000140AC4EF2: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC4EFC: add     rax, rsi
 * 0000000140AC4EFF: mov     [rsi+8C8h], rax
 * 0000000140AC4F06: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC4F10: add     rax, r9
 * 0000000140AC4F13: mov     [rsi+8D0h], rax
 * 0000000140AC4F1A: movsxd  rax, dword ptr [r9]
 * 0000000140AC4F1D: mov     [rsi+8D8h], rax
 * 0000000140AC4F24: mov     [rsi+8E0h], rcx
 * 0000000140AC4F2B: xor     edx, edx
 * 0000000140AC4F2D: mov     [rsi+8C0h], r12d
 * 0000000140AC4F34: mov     rcx, rsi
 * 0000000140AC4F37: call    sub_140AD049C
 * 0000000140AC4F3C: jmp     short loc_140AC4F44
 * 0000000140AC4F3E: mov     r12d, 1
 * 0000000140AC4F44: mov     r14d, 8000h
 * 0000000140AC4F4A: add     [rsi+7F0h], r14d
 * 0000000140AC4F51: xor     eax, eax
 * 0000000140AC4F53: jmp     loc_140ABA363
 * 0000000140AC4F58: mov     edx, [r13+28h]
 * 0000000140AC4F5C: lea     rcx, [rbp+0B30h+var_2A8]
 * 0000000140AC4F63: xor     eax, eax
 * 0000000140AC4F65: mov     [rbp+0B30h+var_BA0], eax
 * 0000000140AC4F68: mov     rax, [rsi+190h]
 * 0000000140AC4F6F: call    j__guard_dispatch_icall_nop
 * 0000000140AC4F74: mov     rax, [rsi+1C0h]
 * 0000000140AC4F7B: lea     rdx, [rbp+0B30h+var_298]
 * 0000000140AC4F82: lea     rcx, [rbp+0B30h+var_2A8]
 * 0000000140AC4F89: call    j__guard_dispatch_icall_nop
 * 0000000140AC4F8E: lea     rdx, [rbp+0B30h+var_858]
 * 0000000140AC4F95: lea     rcx, [rbp+0B30h+var_1A0]
 * 0000000140AC4F9C: call    sub_140AD1FE0
 * 0000000140AC4FA1: mov     rcx, [rbp+0B30h+var_856]
 * 0000000140AC4FA8: xor     r13d, r13d
 * 0000000140AC4FAB: mov     [rsp+0C30h+var_BC8], rcx
 * 0000000140AC4FB0: mov     edi, r13d
 * 0000000140AC4FB3: add     rcx, 4
 * 0000000140AC4FB7: mov     [rsp+0C30h+var_BD8], rcx
 * 0000000140AC4FBC: mov     rax, [rsi+890h]
 * 0000000140AC4FC3: mov     r10, r13
 * 0000000140AC4FC6: mov     [rbp+0B30h+var_A90], rax
 * 0000000140AC4FCD: mov     r14, r13
 * 0000000140AC4FD0: mov     r8, [rsi+898h]
 * 0000000140AC4FD7: xor     eax, eax
 * 0000000140AC4FD9: mov     r12d, [rsi+874h]
 * 0000000140AC4FE0: mov     [rbp+0B30h+var_B90], r13
 * 0000000140AC4FE4: mov     r13d, [rsi+878h]
 * 0000000140AC4FEB: mov     [rsp+0C30h+var_BB8], r8
 * 0000000140AC4FF0: mov     [rbp+0B30h+var_B80], rax
 * 0000000140AC4FF4: mov     r15, cr8
 * 0000000140AC4FF8: mov     cr8, rbx
 * 0000000140AC4FFC: movzx   eax, word ptr [rcx-4]
 * 0000000140AC5000: movzx   r9d, word ptr [rcx]
 * 0000000140AC5004: mov     word ptr [rbp+0B30h+var_B38], ax
 * 0000000140AC5008: movzx   eax, word ptr [rcx+2]
 * 0000000140AC500C: mov     word ptr [rbp+0B30h+var_B38+2], ax
 * 0000000140AC5010: mov     eax, [rcx+4]
 * 0000000140AC5013: mov     rcx, [rsi+5F0h]
 * 0000000140AC501A: mov     dword ptr [rbp+0B30h+var_B38+4], eax
 * 0000000140AC501D: mov     rbx, [rbp+0B30h+var_B38]
 * 0000000140AC5021: mov     eax, edi
 * 0000000140AC5023: mov     word ptr [rbp+0B30h+arg_8], r9w
 * 0000000140AC502B: lea     rdx, [rcx+rax*8]
 * 0000000140AC502F: cmp     rbx, rdx
 * 0000000140AC5032: jnz     short loc_140AC5098
 * 0000000140AC5034: mov     eax, 6000h
 * 0000000140AC5039: test    ax, r9w
 * 0000000140AC503D: jz      short loc_140AC504C
 * 0000000140AC503F: movzx   eax, r15b
 * 0000000140AC5043: mov     cr8, rax
 * 0000000140AC5047: jmp     loc_140AC5430
 * 0000000140AC504C: mov     rax, [rsi+460h]
 * 0000000140AC5053: mov     ecx, edi
 * 0000000140AC5055: call    j__guard_dispatch_icall_nop
 * 0000000140AC505A: mov     r14, [rax]
 * 0000000140AC505D: xor     eax, eax
 * 0000000140AC505F: test    r14, r14
 * 0000000140AC5062: jz      short loc_140AC508A
 * 0000000140AC5064: mov     r12, [r12+r14]
 * 0000000140AC5068: mov     [rbp+0B30h+var_B90], r12
 * 0000000140AC506C: cmp     edi, 30h ; '0'
 * 0000000140AC506F: jnb     short loc_140AC507E
 * 0000000140AC5071: movzx   eax, r15b
 * 0000000140AC5075: mov     cr8, rax
 * 0000000140AC5079: jmp     loc_140AC542C
 * 0000000140AC507E: mov     r13, [r13+r14+0]
 * 0000000140AC5083: mov     r8, [rsp+0C30h+var_BB8]
 * 0000000140AC5088: jmp     short loc_140AC50A0
 * 0000000140AC508A: mov     r8, [rsp+0C30h+var_BB8]
 * 0000000140AC508F: or      r14, 0FFFFFFFFFFFFFFFFh
 * 0000000140AC5093: mov     r13, rax
 * 0000000140AC5096: jmp     short loc_140AC509C
 * 0000000140AC5098: mov     r13, [rbp+0B30h+var_B80]
 * 0000000140AC509C: mov     r12, [rbp+0B30h+var_B90]
 * 0000000140AC50A0: movzx   eax, r15b
 * 0000000140AC50A4: mov     cr8, rax
 * 0000000140AC50A8: test    r14, r14
 * 0000000140AC50AB: jnz     short loc_140AC50F6
 * 0000000140AC50AD: mov     rdx, [rbp+0B30h+var_A90]
 * 0000000140AC50B4: cmp     rbx, rdx
 * 0000000140AC50B7: jb      loc_140AC542C
 * 0000000140AC50BD: cmp     rbx, r8
 * 0000000140AC50C0: ja      loc_140AC542C
 * 0000000140AC50C6: mov     r8d, dword ptr [rbp+0B30h+var_B38]
 * 0000000140AC50CA: mov     rcx, [rsi+8A0h]
 * 0000000140AC50D1: sub     r8d, edx
 * 0000000140AC50D4: mov     rax, [rsi+200h]
 * 0000000140AC50DB: call    j__guard_dispatch_icall_nop
 * 0000000140AC50E0: test    rax, rax
 * 0000000140AC50E3: jz      loc_140AC542C
 * 0000000140AC50E9: mov     eax, [rax+24h]
 * 0000000140AC50EC: bt      eax, 19h
 * 0000000140AC50F0: jb      loc_140AC542C
 * 0000000140AC50F6: mov     rax, [rsp+0C30h+var_BD8]
 * 0000000140AC50FB: mov     ecx, 10h
 * 0000000140AC5100: cmp     [rax-2], cx
 * 0000000140AC5104: jnz     loc_140AC542C
 * 0000000140AC510A: movzx   ecx, word ptr [rax]
 * 0000000140AC510D: mov     edx, 1F00h
 * 0000000140AC5112: movzx   eax, cx
 * 0000000140AC5115: and     ax, dx
 * 0000000140AC5118: mov     edx, 0E00h
 * 0000000140AC511D: cmp     ax, dx
 * 0000000140AC5120: jnz     loc_140AC542C
 * 0000000140AC5126: bt      cx, 0Fh
 * 0000000140AC512B: jnb     loc_140AC542C
 * 0000000140AC5131: mov     rax, [rsi+250h]
 * 0000000140AC5138: lea     rdx, [rbp+0B30h+var_A90]
 * 0000000140AC513F: xor     r8d, r8d
 * 0000000140AC5142: mov     rcx, rbx
 * 0000000140AC5145: call    j__guard_dispatch_icall_nop
 * 0000000140AC514A: test    rax, rax
 * 0000000140AC514D: jz      loc_140AC538F
 * 0000000140AC5153: mov     eax, [rax]
 * 0000000140AC5155: mov     rcx, [rbp+0B30h+var_A90]
 * 0000000140AC515C: add     rax, rcx
 * 0000000140AC515F: cmp     rax, rbx
 * 0000000140AC5162: jnz     loc_140AC538F
 * 0000000140AC5168: cmp     rcx, [rsi+890h]
 * 0000000140AC516F: jnz     loc_140AC538F
 * 0000000140AC5175: test    r14, r14
 * 0000000140AC5178: jnz     loc_140AC5398
 * 0000000140AC517E: xor     r13d, r13d
 * 0000000140AC5181: mov     rcx, [rsp+0C30h+var_BD8]
 * 0000000140AC5186: inc     edi
 * 0000000140AC5188: add     rcx, 10h
 * 0000000140AC518C: mov     ebx, 0Fh
 * 0000000140AC5191: mov     [rsp+0C30h+var_BD8], rcx
 * 0000000140AC5196: cmp     edi, 0FFh
 * 0000000140AC519C: jbe     loc_140AC4FBC
 * 0000000140AC51A2: lea     ecx, [rbx-0Eh]
 * 0000000140AC51A5: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC51AC: test    [rsi+843h], cl
 * 0000000140AC51B2: jz      loc_140AC5282
 * 0000000140AC51B8: cli
 * 0000000140AC51B9: mov     r14d, 0C0000082h
 * 0000000140AC51BF: mov     ecx, r14d
 * 0000000140AC51C2: rdmsr
 * 0000000140AC51C4: shl     rdx, 20h
 * 0000000140AC51C8: or      rax, rdx
 * 0000000140AC51CB: lea     rdx, [rsi+842h]
 * 0000000140AC51D2: mov     rbx, rax
 * 0000000140AC51D5: mov     rax, rdx
 * 0000000140AC51D8: shr     rdx, 20h
 * 0000000140AC51DC: wrmsr
 * 0000000140AC51DE: bt      dword ptr [rsi+95Ch], 11h
 * 0000000140AC51E6: jb      short loc_140AC522A
 * 0000000140AC51E8: mov     rdx, gs:20h
 * 0000000140AC51F1: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140AC51FB: mov     rax, [rsi+498h]
 * 0000000140AC5202: add     rcx, rsi
 * 0000000140AC5205: mov     [rax], rcx
 * 0000000140AC5208: mov     rax, [rsi+4A0h]
 * 0000000140AC520F: mov     [rax], rdx
 * 0000000140AC5212: mov     rax, [rsi+4A8h]
 * 0000000140AC5219: mov     [rax], r14
 * 0000000140AC521C: mov     rax, [rsi+4B0h]
 * 0000000140AC5223: mov     qword ptr [rax], 112h
 * 0000000140AC522A: lea     rax, [rsi+844h]
 * 0000000140AC5231: call    j__guard_dispatch_icall_nop
 * 0000000140AC5236: bt      dword ptr [rsi+95Ch], 11h
 * 0000000140AC523E: jb      short loc_140AC5272
 * 0000000140AC5240: mov     rax, [rsi+498h]
 * 0000000140AC5247: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140AC5251: mov     [rax], rcx
 * 0000000140AC5254: mov     rax, [rsi+4A0h]
 * 0000000140AC525B: mov     [rax], r13
 * 0000000140AC525E: mov     rax, [rsi+4A8h]
 * 0000000140AC5265: mov     [rax], r13
 * 0000000140AC5268: mov     rax, [rsi+4B0h]
 * 0000000140AC526F: mov     [rax], r13
 * 0000000140AC5272: mov     rdx, rbx
 * 0000000140AC5275: mov     rax, rbx
 * 0000000140AC5278: shr     rdx, 20h
 * 0000000140AC527C: mov     ecx, r14d
 * 0000000140AC527F: wrmsr
 * 0000000140AC5281: sti
 * 0000000140AC5282: mov     r15, [rsp+0C30h+var_BC8]
 * 0000000140AC5287: add     dword ptr [rsi+7F0h], 350h
 * 0000000140AC5291: mov     r8, r15
 * 0000000140AC5294: mov     ebx, [rsi+7F0h]
 * 0000000140AC529A: mov     rax, r15
 * 0000000140AC529D: mov     r10d, [rsi+7DCh]
 * 0000000140AC52A4: mov     r11, [rsi+7E0h]
 * 0000000140AC52AB: lea     rcx, [r15+350h]
 * 0000000140AC52B2: cmp     r15, rcx
 * 0000000140AC52B5: jnb     short loc_140AC52C7
 * 0000000140AC52B7: mov     edx, 40h ; '@'
 * 0000000140AC52BC: prefetchnta byte ptr [rax]
 * 0000000140AC52BF: add     rax, rdx
 * 0000000140AC52C2: cmp     rax, rcx
 * 0000000140AC52C5: jb      short loc_140AC52BC
 * 0000000140AC52C7: mov     r14, r11
 * 0000000140AC52CA: mov     rsi, 7010008004002001h
 * 0000000140AC52D4: mov     r9d, 6
 * 0000000140AC52DA: mov     edx, 8
 * 0000000140AC52DF: lea     r12d, [rdx-7]
 * 0000000140AC52E3: mov     rax, [r8]
 * 0000000140AC52E6: mov     ecx, r10d
 * 0000000140AC52E9: xor     rax, r14
 * 0000000140AC52EC: mov     r14, [r8+8]
 * 0000000140AC52F0: rol     rax, cl
 * 0000000140AC52F3: add     r8, 10h
 * 0000000140AC52F7: xor     r14, rax
 * 0000000140AC52FA: rol     r14, cl
 * 0000000140AC52FD: sub     rdx, r12
 * 0000000140AC5300: jnz     short loc_140AC52E3
 * 0000000140AC5302: mov     rcx, r8
 * 0000000140AC5305: sub     rcx, r15
 * 0000000140AC5308: xor     rcx, r11
 * 0000000140AC530B: mov     rax, rcx
 * 0000000140AC530E: rol     rax, 11h
 * 0000000140AC5312: xor     rcx, rax
 * 0000000140AC5315: mov     rax, rsi
 * 0000000140AC5318: mul     rcx
 * 0000000140AC531B: xor     r10d, edx
 * 0000000140AC531E: mov     [rbp+0B30h+var_590], rdx
 * 0000000140AC5325: xor     r10d, eax
 * 0000000140AC5328: mov     rax, r12
 * 0000000140AC532B: and     r10d, 3Fh
 * 0000000140AC532F: cmovz   r10d, eax
 * 0000000140AC5333: mov     eax, 0FFFFFFFFh
 * 0000000140AC5338: add     r9d, eax
 * 0000000140AC533B: jnz     short loc_140AC52DA
 * 0000000140AC533D: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC5342: lea     edx, [r9+50h]
 * 0000000140AC5346: mov     r12d, [rbp+0B30h+var_BA0]
 * 0000000140AC534A: lea     r9d, [rdx-46h]
 * 0000000140AC534E: lea     r11d, [rdx-4Fh]
 * 0000000140AC5352: xor     r14, [r8]
 * 0000000140AC5355: mov     ecx, r10d
 * 0000000140AC5358: rol     r14, cl
 * 0000000140AC535B: add     r8, 8
 * 0000000140AC535F: add     edx, 0FFFFFFF8h
 * 0000000140AC5362: sub     r9, r11
 * 0000000140AC5365: jnz     short loc_140AC5352
 * 0000000140AC5367: test    edx, edx
 * 0000000140AC5369: jz      short loc_140AC5387
 * 0000000140AC536B: mov     rsi, rax
 * 0000000140AC536E: movzx   eax, byte ptr [r8]
 * 0000000140AC5372: mov     ecx, r10d
 * 0000000140AC5375: xor     r14, rax
 * 0000000140AC5378: add     r8, r11
 * 0000000140AC537B: rol     r14, cl
 * 0000000140AC537E: add     edx, esi
 * 0000000140AC5380: jnz     short loc_140AC536E
 * 0000000140AC5382: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC5387: mov     rax, r14
 * 0000000140AC538A: jmp     loc_140AC546A
 * 0000000140AC538F: test    r14, r14
 * 0000000140AC5392: jz      loc_140AC542C
 * 0000000140AC5398: mov     eax, 6000h
 * 0000000140AC539D: test    word ptr [rbp+0B30h+arg_8], ax
 * 0000000140AC53A4: jnz     loc_140AC542C
 * 0000000140AC53AA: cmp     r14, 0FFFFFFFFFFFFFFFFh
 * 0000000140AC53AE: jz      loc_140AC517E
 * 0000000140AC53B4: mov     rax, [rsi+250h]
 * 0000000140AC53BB: lea     rdx, [rbp+0B30h+var_A90]
 * 0000000140AC53C2: xor     r8d, r8d
 * 0000000140AC53C5: mov     rcx, r12
 * 0000000140AC53C8: call    j__guard_dispatch_icall_nop
 * 0000000140AC53CD: test    rax, rax
 * 0000000140AC53D0: jz      short loc_140AC542C
 * 0000000140AC53D2: mov     eax, [rax]
 * 0000000140AC53D4: mov     rdx, [rbp+0B30h+var_A90]
 * 0000000140AC53DB: add     rax, rdx
 * 0000000140AC53DE: cmp     rax, r12
 * 0000000140AC53E1: jnz     short loc_140AC542C
 * 0000000140AC53E3: cmp     rdx, [rsi+890h]
 * 0000000140AC53EA: jnz     short loc_140AC542C
 * 0000000140AC53EC: mov     rcx, [rsi+8A0h]
 * 0000000140AC53F3: mov     r8d, r12d
 * 0000000140AC53F6: mov     rax, [rsi+200h]
 * 0000000140AC53FD: sub     r8d, edx
 * 0000000140AC5400: call    j__guard_dispatch_icall_nop
 * 0000000140AC5405: test    rax, rax
 * 0000000140AC5408: jz      short loc_140AC542C
 * 0000000140AC540A: mov     eax, [rax+24h]
 * 0000000140AC540D: bt      eax, 19h
 * 0000000140AC5411: jb      short loc_140AC542C
 * 0000000140AC5413: cmp     edi, 0FEh
 * 0000000140AC5419: jnz     loc_140AC517E
 * 0000000140AC541F: cmp     r13, [rsi+880h]
 * 0000000140AC5426: jz      loc_140AC517E
 * 0000000140AC542C: mov     r10, [rbp+0B30h+var_B90]
 * 0000000140AC5430: mov     rax, [rsi+568h]
 * 0000000140AC5437: xor     r13d, r13d
 * 0000000140AC543A: mov     [rax], rbx
 * 0000000140AC543D: mov     dword ptr [rax+10h], 80h
 * 0000000140AC5444: test    r10, r10
 * 0000000140AC5447: jz      short loc_140AC545B
 * 0000000140AC5449: mov     rax, [rsi+568h]
 * 0000000140AC5450: mov     [rax+8], r10
 * 0000000140AC5454: mov     dword ptr [rax+14h], 80h
 * 0000000140AC545B: mov     [rbp+0B30h+var_BA0], 1
 * 0000000140AC5462: jmp     loc_140AC5181
 * 0000000140AC5467: xor     r14d, eax
 * 0000000140AC546A: shr     rax, 1Fh
 * 0000000140AC546E: test    rax, rax
 * 0000000140AC5471: jnz     short loc_140AC5467
 * 0000000140AC5473: lea     eax, [rbx+10h]
 * 0000000140AC5476: btr     r14d, 1Fh
 * 0000000140AC547B: mov     [rsi+7F0h], eax
 * 0000000140AC5481: lea     rdx, [r15+0E10h]
 * 0000000140AC5488: mov     r9d, [rsi+7DCh]
 * 0000000140AC548F: lea     rcx, [r15+0E20h]
 * 0000000140AC5496: mov     rbx, [rsi+7E0h]
 * 0000000140AC549D: mov     rax, rdx
 * 0000000140AC54A0: cmp     rdx, rcx
 * 0000000140AC54A3: jnb     short loc_140AC54B6
 * 0000000140AC54A5: mov     r8d, 40h ; '@'
 * 0000000140AC54AB: prefetchnta byte ptr [rax]
 * 0000000140AC54AE: add     rax, r8
 * 0000000140AC54B1: cmp     rax, rcx
 * 0000000140AC54B4: jb      short loc_140AC54AB
 * 0000000140AC54B6: mov     eax, 2
 * 0000000140AC54BB: lea     r8d, [rax+0Eh]
 * 0000000140AC54BF: xor     rbx, [rdx]
 * 0000000140AC54C2: mov     ecx, r9d
 * 0000000140AC54C5: rol     rbx, cl
 * 0000000140AC54C8: add     rdx, 8
 * 0000000140AC54CC: add     r8d, 0FFFFFFF8h
 * 0000000140AC54D0: sub     rax, r11
 * 0000000140AC54D3: jnz     short loc_140AC54BF
 * 0000000140AC54D5: test    r8d, r8d
 * 0000000140AC54D8: jz      short loc_140AC54F8
 * 0000000140AC54DA: mov     r12d, 0FFFFFFFFh
 * 0000000140AC54E0: movzx   eax, byte ptr [rdx]
 * 0000000140AC54E3: mov     ecx, r9d
 * 0000000140AC54E6: xor     rbx, rax
 * 0000000140AC54E9: add     rdx, r11
 * 0000000140AC54EC: rol     rbx, cl
 * 0000000140AC54EF: add     r8d, r12d
 * 0000000140AC54F2: jnz     short loc_140AC54E0
 * 0000000140AC54F4: mov     r12d, [rbp+0B30h+var_BA0]
 * 0000000140AC54F8: mov     rax, rbx
 * 0000000140AC54FB: jmp     short loc_140AC54FF
 * 0000000140AC54FD: xor     ebx, eax
 * 0000000140AC54FF: shr     rax, 1Fh
 * 0000000140AC5503: test    rax, rax
 * 0000000140AC5506: jnz     short loc_140AC54FD
 * 0000000140AC5508: mov     rax, [rsi+188h]
 * 0000000140AC550F: lea     rcx, [rbp+0B30h+var_298]
 * 0000000140AC5516: btr     ebx, 1Fh
 * 0000000140AC551A: call    j__guard_dispatch_icall_nop
 * 0000000140AC551F: mov     r8, [rsp+0C30h+var_BE0]
 * 0000000140AC5524: mov     edx, [r8+14h]
 * 0000000140AC5528: cmp     r14d, edx
 * 0000000140AC552B: jnz     short loc_140AC554C
 * 0000000140AC552D: mov     eax, ebx
 * 0000000140AC552F: cmp     rax, [r8+18h]
 * 0000000140AC5533: jnz     short loc_140AC554C
 * 0000000140AC5535: movzx   eax, word ptr [r8+2Ch]
 * 0000000140AC553A: cmp     [rbp+0B30h+var_858], ax
 * 0000000140AC5541: jnz     short loc_140AC554C
 * 0000000140AC5543: test    r12d, r12d
 * 0000000140AC5546: jz      loc_140AC55E6
 * 0000000140AC554C: test    r12d, r12d
 * 0000000140AC554F: jnz     short loc_140AC5587
 * 0000000140AC5551: mov     eax, ebx
 * 0000000140AC5553: cmp     rax, [r8+18h]
 * 0000000140AC5557: jnz     short loc_140AC556A
 * 0000000140AC5559: cmp     [rsi+8C0h], r13d
 * 0000000140AC5560: jnz     short loc_140AC5587
 * 0000000140AC5562: mov     ecx, r14d
 * 0000000140AC5565: xor     rcx, rdx
 * 0000000140AC5568: jmp     short loc_140AC557C
 * 0000000140AC556A: mov     eax, [r8+18h]
 * 0000000140AC556E: cmp     [rsi+8C0h], r13d
 * 0000000140AC5575: jnz     short loc_140AC5587
 * 0000000140AC5577: mov     ecx, ebx
 * 0000000140AC5579: xor     rcx, rax
 * 0000000140AC557C: mov     rax, [rsi+568h]
 * 0000000140AC5583: mov     [rax+18h], rcx
 * 0000000140AC5587: mov     r12d, 1
 * 0000000140AC558D: mov     rcx, [r8+8]
 * 0000000140AC5591: cmp     [rsi+8C0h], r13d
 * 0000000140AC5598: jnz     short loc_140AC55EC
 * 0000000140AC559A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC55A4: xor     edx, edx
 * 0000000140AC55A6: add     rax, rsi
 * 0000000140AC55A9: mov     [rsi+8C8h], rax
 * 0000000140AC55B0: mov     rax, 0B3B74BDEE4453415h
 * 0000000140AC55BA: add     rax, r8
 * 0000000140AC55BD: mov     [rsi+8D0h], rax
 * 0000000140AC55C4: movsxd  rax, dword ptr [r8]
 * 0000000140AC55C7: mov     [rsi+8D8h], rax
 * 0000000140AC55CE: mov     [rsi+8E0h], rcx
 * 0000000140AC55D5: mov     rcx, rsi
 * 0000000140AC55D8: mov     [rsi+8C0h], r12d
 * 0000000140AC55DF: call    sub_140AD049C
 * 0000000140AC55E4: jmp     short loc_140AC55EC
 * 0000000140AC55E6: mov     r12d, 1
 * 0000000140AC55EC: add     dword ptr [rsi+7F0h], 10000h
 * 0000000140AC55F6: jmp     loc_140ABA35B
 * 0000000140AC55FB: mov     edx, [r13+2Ch]
 * 0000000140AC55FF: lea     rcx, [rbp+0B30h+var_288]
 * 0000000140AC5606: mov     rax, [rsi+190h]
 * 0000000140AC560D: call    j__guard_dispatch_icall_nop
 * 0000000140AC5612: mov     rax, [rsi+1C0h]
 * 0000000140AC5619: lea     rdx, [rbp+0B30h+var_278]
 * 0000000140AC5620: lea     rcx, [rbp+0B30h+var_288]
 * 0000000140AC5627: call    j__guard_dispatch_icall_nop
 * 0000000140AC562C: xor     ecx, ecx
 * 0000000140AC562E: xgetbv
 * 0000000140AC5631: shl     rdx, 20h
 * 0000000140AC5635: lea     rcx, [rbp+0B30h+var_278]
 * 0000000140AC563C: or      rdx, rax
 * 0000000140AC563F: mov     rax, [rsi+188h]
 * 0000000140AC5646: mov     rbx, rdx
 * 0000000140AC5649: call    j__guard_dispatch_icall_nop
 * 0000000140AC564E: mov     r8, [r13+18h]
 * 0000000140AC5652: mov     rdx, [r13+20h]
 * 0000000140AC5656: and     r8, rbx
 * 0000000140AC5659: cmp     r8, rdx
 * 0000000140AC565C: jz      loc_140ABA5AF
 * 0000000140AC5662: mov     ecx, [r13+2Ch]
 * 0000000140AC5666: xor     r9d, r9d
 * 0000000140AC5669: mov     eax, [r13+28h]
 * 0000000140AC566D: shl     rcx, 20h
 * 0000000140AC5671: or      rcx, rax
 * 0000000140AC5674: cmp     [rsi+8C0h], r9d
 * 0000000140AC567B: jnz     loc_140ABA5AF
 * 0000000140AC5681: mov     rax, [rsi+568h]
 * 0000000140AC5688: xor     rdx, r8
 * 0000000140AC568B: mov     [rax+18h], rdx
 * 0000000140AC568F: cmp     [rsi+8C0h], r9d
 * 0000000140AC5696: jmp     loc_140AC2264
 * 0000000140AC569B: mov     r12d, 1
 * 0000000140AC56A1: xor     eax, eax
 * 0000000140AC56A3: mov     [rsi+7E8h], ecx
 * 0000000140AC56A9: cmp     [rbp+0B30h+var_B28], eax
 * 0000000140AC56AC: jz      short loc_140AC571A
 * 0000000140AC56AE: mov     rcx, gs:20h
 * 0000000140AC56B7: mov     rax, [rsi+618h]
 * 0000000140AC56BE: mov     rdx, [rax+rcx]
 * 0000000140AC56C2: lea     rcx, [rbp+0B30h+var_268]
 * 0000000140AC56C9: mov     rax, [rsi+658h]
 * 0000000140AC56D0: add     rdx, [rsi+678h]
 * 0000000140AC56D7: mov     rbx, [rdx+rax]
 * 0000000140AC56DB: mov     rax, [rsi+188h]
 * 0000000140AC56E2: call    j__guard_dispatch_icall_nop
 * 0000000140AC56E7: mov     rax, [rsi+430h]
 * 0000000140AC56EE: lea     rcx, [rbp+0B30h+var_6C0]
 * 0000000140AC56F5: call    j__guard_dispatch_icall_nop
 * 0000000140AC56FA: mov     rax, [rsi+398h]
 * 0000000140AC5701: mov     rcx, rbx
 * 0000000140AC5704: call    j__guard_dispatch_icall_nop
 * 0000000140AC5709: mov     rax, [rsi+3A8h]
 * 0000000140AC5710: mov     rcx, rbx
 * 0000000140AC5713: call    j__guard_dispatch_icall_nop
 * 0000000140AC5718: xor     eax, eax
 * 0000000140AC571A: cmp     [rbp+0B30h+var_BB0], eax
 * 0000000140AC571D: jz      loc_140AC57C8
 * 0000000140AC5723: test    [rsi+958h], r14d
 * 0000000140AC572A: jnz     short loc_140AC573E
 * 0000000140AC572C: xor     r14d, r14d
 * 0000000140AC572F: cmp     [rsi+8C0h], r14d
 * 0000000140AC5736: jnz     loc_140AC57C8
 * 0000000140AC573C: jmp     short loc_140AC5741
 * 0000000140AC573E: xor     r14d, r14d
 * 0000000140AC5741: mov     rbx, [rsi+948h]
 * 0000000140AC5748: lea     rdx, [rbp+0B30h+var_6C0]
 * 0000000140AC574F: mov     [rsi+948h], r14
 * 0000000140AC5756: mov     rcx, rbx
 * 0000000140AC5759: mov     rax, [rsi+288h]
 * 0000000140AC5760: call    j__guard_dispatch_icall_nop
 * 0000000140AC5765: mov     eax, [rsi+958h]
 * 0000000140AC576B: test    r12b, al
 * 0000000140AC576E: jz      short loc_140AC57B4
 * 0000000140AC5770: and     eax, 0FFFFFFFEh
 * 0000000140AC5773: mov     rcx, rbx
 * 0000000140AC5776: mov     [rsi+958h], eax
 * 0000000140AC577C: mov     rax, [rsi+270h]
 * 0000000140AC5783: call    j__guard_dispatch_icall_nop
 * 0000000140AC5788: mov     rbx, rax
 * 0000000140AC578B: test    rax, rax
 * 0000000140AC578E: jz      short loc_140AC57A7
 * 0000000140AC5790: mov     rax, [rsi+290h]
 * 0000000140AC5797: mov     rcx, rbx
 * 0000000140AC579A: call    j__guard_dispatch_icall_nop
 * 0000000140AC579F: mov     [rsi+938h], eax
 * 0000000140AC57A5: jmp     short loc_140AC57B9
 * 0000000140AC57A7: mov     eax, 0FFFFFFFFh
 * 0000000140AC57AC: mov     [rsi+938h], eax
 * 0000000140AC57B2: jmp     short loc_140AC57C8
 * 0000000140AC57B4: test    rbx, rbx
 * 0000000140AC57B7: jz      short loc_140AC57C8
 * 0000000140AC57B9: mov     rax, [rsi+278h]
 * 0000000140AC57C0: mov     rcx, rbx
 * 0000000140AC57C3: call    j__guard_dispatch_icall_nop
 * 0000000140AC57C8: mov     eax, [rsi+958h]
 * 0000000140AC57CE: mov     ecx, 800008h
 * 0000000140AC57D3: and     eax, ecx
 * 0000000140AC57D5: cmp     eax, ecx
 * 0000000140AC57D7: jnz     loc_140AC5BD6
 * 0000000140AC57DD: mov     eax, [rsi+95Ch]
 * 0000000140AC57E3: mov     r11d, [rsi+7D0h]
 * 0000000140AC57EA: and     eax, r12d
 * 0000000140AC57ED: mov     r10, [rsi+0A38h]
 * 0000000140AC57F4: mov     r12, [rsi+9C0h]
 * 0000000140AC57FB: mov     r14d, [rsi+7ACh]
 * 0000000140AC5802: mov     dword ptr [rbp+0B30h+arg_8], r11d
 * 0000000140AC5809: mov     [rsp+0C30h+var_BC8], r10
 * 0000000140AC580E: jz      short loc_140AC5817
 * 0000000140AC5810: mov     r12, [rsi+5B0h]
 * 0000000140AC5817: mov     rax, [rsi+150h]
 * 0000000140AC581E: mov     [rbp+0B30h+var_B98], rax
 * 0000000140AC5822: mov     rax, [rsi+2B8h]
 * 0000000140AC5829: mov     [rbp+0B30h+var_B38], rax
 * 0000000140AC582D: mov     rax, [rsi+330h]
 * 0000000140AC5834: mov     [rbp+0B30h+var_B68], rax
 * 0000000140AC5838: rdtsc
 * 0000000140AC583A: shl     rdx, 20h
 * 0000000140AC583E: mov     rbx, 7010008004002001h
 * 0000000140AC5848: or      rax, rdx
 * 0000000140AC584B: mov     r9, rdi
 * 0000000140AC584E: mov     rcx, rax
 * 0000000140AC5851: ror     rax, 3
 * 0000000140AC5855: xor     rcx, rax
 * 0000000140AC5858: mov     rax, rbx
 * 0000000140AC585B: mul     rcx
 * 0000000140AC585E: mov     rcx, rdx
 * 0000000140AC5861: mov     [rbp+0B30h+var_588], rdx
 * 0000000140AC5868: xor     rcx, rax
 * 0000000140AC586B: mov     rax, 0ABCC77118461CEFDh
 * 0000000140AC5875: mul     rcx
 * 0000000140AC5878: shr     rdx, 1Ah
 * 0000000140AC587C: imul    rax, rdx, 5F5E100h
 * 0000000140AC5883: sub     rcx, rax
 * 0000000140AC5886: sub     r9, rcx
 * 0000000140AC5889: mov     [rbp+0B30h+var_A30], r9
 * 0000000140AC5890: mov     r8d, [rsi+958h]
 * 0000000140AC5897: bt      r8d, 1Ah
 * 0000000140AC589C: jnb     loc_140AC5946
 * 0000000140AC58A2: rdtsc
 * 0000000140AC58A4: shl     rdx, 20h
 * 0000000140AC58A8: mov     r15, 0CCCCCCCCCCCCCCCDh
 * 0000000140AC58B2: or      rax, rdx
 * 0000000140AC58B5: mov     rcx, rax
 * 0000000140AC58B8: ror     rax, 3
 * 0000000140AC58BC: xor     rcx, rax
 * 0000000140AC58BF: mov     rax, rbx
 * 0000000140AC58C2: mul     rcx
 * 0000000140AC58C5: mov     rcx, rdx
 * 0000000140AC58C8: mov     [rbp+0B30h+var_580], rdx
 * 0000000140AC58CF: xor     rcx, rax
 * 0000000140AC58D2: mov     rax, r15
 * 0000000140AC58D5: mul     rcx
 * 0000000140AC58D8: shr     rdx, 3
 * 0000000140AC58DC: lea     rax, [rdx+rdx*4]
 * 0000000140AC58E0: add     rax, rax
 * 0000000140AC58E3: sub     rcx, rax
 * 0000000140AC58E6: mov     eax, 2
 * 0000000140AC58EB: cmp     rcx, rax
 * 0000000140AC58EE: jnb     short loc_140AC5946
 * 0000000140AC58F0: rdtsc
 * 0000000140AC58F2: shl     rdx, 20h
 * 0000000140AC58F6: or      rax, rdx
 * 0000000140AC58F9: mov     rcx, rax
 * 0000000140AC58FC: ror     rax, 3
 * 0000000140AC5900: xor     rcx, rax
 * 0000000140AC5903: mov     rax, rbx
 * 0000000140AC5906: mul     rcx
 * 0000000140AC5909: mov     rcx, rdx
 * 0000000140AC590C: mov     [rbp+0B30h+var_578], rdx
 * 0000000140AC5913: xor     rcx, rax
 * 0000000140AC5916: mov     rax, r15
 * 0000000140AC5919: mul     rcx
 * 0000000140AC591C: shr     rdx, 3
 * 0000000140AC5920: lea     rax, [rdx+rdx*4]
 * 0000000140AC5924: add     rax, rax
 * 0000000140AC5927: sub     rcx, rax
 * 0000000140AC592A: mov     eax, 1
 * 0000000140AC592F: add     rcx, rax
 * 0000000140AC5932: imul    rcx, r9
 * 0000000140AC5936: mov     [rbp+0B30h+var_A30], rcx
 * 0000000140AC593D: mov     r8d, [rsi+958h]
 * 0000000140AC5944: jmp     short loc_140AC594B
 * 0000000140AC5946: mov     eax, 1
 * 0000000140AC594B: xor     r9d, r9d
 * 0000000140AC594E: mov     ebx, r9d
 * 0000000140AC5951: mov     r15d, r9d
 * 0000000140AC5954: lea     ecx, [r9+2]
 * 0000000140AC5958: test    cl, r8b
 * 0000000140AC595B: cmovz   r14d, r11d
 * 0000000140AC595F: test    r8b, r8b
 * 0000000140AC5962: js      short loc_140AC596C
 * 0000000140AC5964: mov     r13d, r9d
 * 0000000140AC5967: jmp     loc_140AC5A3E
 * 0000000140AC596C: mov     r13d, eax
 * 0000000140AC596F: rdtsc
 * 0000000140AC5971: shl     rdx, 20h
 * 0000000140AC5975: or      rax, rdx
 * 0000000140AC5978: mov     rcx, rax
 * 0000000140AC597B: ror     rax, 3
 * 0000000140AC597F: xor     rcx, rax
 * 0000000140AC5982: mov     rax, 7010008004002001h
 * 0000000140AC598C: mul     rcx
 * 0000000140AC598F: mov     ecx, 14Dh
 * 0000000140AC5994: mov     rbx, rdx
 * 0000000140AC5997: mov     [rbp+0B30h+var_570], rdx
 * 0000000140AC599E: xor     rbx, rax
 * 0000000140AC59A1: mov     edx, 1
 * 0000000140AC59A6: mov     r15, rbx
 * 0000000140AC59A9: lea     rax, [rsi+0A60h]
 * 0000000140AC59B0: xor     r15, rsi
 * 0000000140AC59B3: mov     r10, rbx
 * 0000000140AC59B6: xor     [rax], r10
 * 0000000140AC59B9: lea     rax, [rax-8]
 * 0000000140AC59BD: ror     r10, cl
 * 0000000140AC59C0: sub     ecx, edx
 * 0000000140AC59C2: jnz     short loc_140AC59B6
 * 0000000140AC59C4: lea     r8, [r11-0A68h]
 * 0000000140AC59CB: shr     r8, 3
 * 0000000140AC59CF: test    r8d, r8d
 * 0000000140AC59D2: jz      short loc_140AC5A0D
 * 0000000140AC59D4: movsxd  r9, r8d
 * 0000000140AC59D7: add     rsi, 0A60h
 * 0000000140AC59DE: mov     rdi, rdx
 * 0000000140AC59E1: lea     r9, [rsi+r9*8]
 * 0000000140AC59E5: mov     rdx, [r9]
 * 0000000140AC59E8: lea     rax, [r15+r15]
 * 0000000140AC59EC: mov     ecx, r8d
 * 0000000140AC59EF: lea     r9, [r9-8]
 * 0000000140AC59F3: ror     rdx, cl
 * 0000000140AC59F6: mov     r15, rdx
 * 0000000140AC59F9: xor     r15, rax
 * 0000000140AC59FC: sub     r8d, edi
 * 0000000140AC59FF: jnz     short loc_140AC59E5
 * 0000000140AC5A01: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC5A06: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC5A0D: mov     ecx, r14d
 * 0000000140AC5A10: lea     rdx, [r11+rsi]
 * 0000000140AC5A14: sub     ecx, r11d
 * 0000000140AC5A17: shr     ecx, 3
 * 0000000140AC5A1A: test    ecx, ecx
 * 0000000140AC5A1C: jz      short loc_140AC5A39
 * 0000000140AC5A1E: lea     rdx, [rdx+rcx*8]
 * 0000000140AC5A22: mov     eax, 1
 * 0000000140AC5A27: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140AC5A2B: xor     [rdx], r10
 * 0000000140AC5A2E: lea     rdx, [rdx-8]
 * 0000000140AC5A32: ror     r10, cl
 * 0000000140AC5A35: sub     ecx, eax
 * 0000000140AC5A37: jnz     short loc_140AC5A2B
 * 0000000140AC5A39: mov     r10, [rsp+0C30h+var_BC8]
 * 0000000140AC5A3E: test    r10, r10
 * 0000000140AC5A41: jz      short loc_140AC5A64
 * 0000000140AC5A43: mov     r9, [rbp+0B30h+var_B98]
 * 0000000140AC5A47: lea     r8, [rbp+0B30h+var_A30]
 * 0000000140AC5A4E: mov     rax, [rbp+0B30h+var_B68]
 * 0000000140AC5A52: mov     edx, r14d
 * 0000000140AC5A55: mov     rcx, rsi
 * 0000000140AC5A58: mov     [rsp+0C30h+BugCheckParameter4], r10
 * 0000000140AC5A5D: call    j__guard_dispatch_icall_nop
 * 0000000140AC5A62: jmp     short loc_140AC5A9D
 * 0000000140AC5A64: xor     edx, edx
 * 0000000140AC5A66: test    r12, r12
 * 0000000140AC5A69: jnz     short loc_140AC5A7F
 * 0000000140AC5A6B: mov     rax, [rbp+0B30h+var_B98]
 * 0000000140AC5A6F: lea     r8, [rbp+0B30h+var_A30]
 * 0000000140AC5A76: xor     ecx, ecx
 * 0000000140AC5A78: call    j__guard_dispatch_icall_nop
 * 0000000140AC5A7D: jmp     short loc_140AC5A9D
 * 0000000140AC5A7F: lea     rax, [rbp+0B30h+var_A30]
 * 0000000140AC5A86: xor     r9d, r9d
 * 0000000140AC5A89: mov     [rsp+0C30h+BugCheckParameter4], rax
 * 0000000140AC5A8E: xor     r8d, r8d
 * 0000000140AC5A91: mov     rax, [rbp+0B30h+var_B38]
 * 0000000140AC5A95: mov     rcx, r12
 * 0000000140AC5A98: call    j__guard_dispatch_icall_nop
 * 0000000140AC5A9D: xor     r11d, r11d
 * 0000000140AC5AA0: test    r13d, r13d
 * 0000000140AC5AA3: jz      loc_140AC5BD9
 * 0000000140AC5AA9: mov     r9, rbx
 * 0000000140AC5AAC: lea     rax, [rsi+0A60h]
 * 0000000140AC5AB3: xor     r9, rsi
 * 0000000140AC5AB6: lea     r10d, [r11+1]
 * 0000000140AC5ABA: mov     ecx, 14Dh
 * 0000000140AC5ABF: xor     [rax], rbx
 * 0000000140AC5AC2: lea     rax, [rax-8]
 * 0000000140AC5AC6: ror     rbx, cl
 * 0000000140AC5AC9: sub     ecx, r10d
 * 0000000140AC5ACC: jnz     short loc_140AC5ABF
 * 0000000140AC5ACE: mov     r12d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140AC5AD5: mov     r11d, r12d
 * 0000000140AC5AD8: lea     r8, [r12-0A68h]
 * 0000000140AC5AE0: shr     r8, 3
 * 0000000140AC5AE4: test    r8d, r8d
 * 0000000140AC5AE7: jz      short loc_140AC5B1E
 * 0000000140AC5AE9: movsxd  r10, r8d
 * 0000000140AC5AEC: lea     r11d, [rcx+1]
 * 0000000140AC5AF0: add     r10, 14Ch
 * 0000000140AC5AF7: lea     r10, [rsi+r10*8]
 * 0000000140AC5AFB: mov     rdx, [r10]
 * 0000000140AC5AFE: lea     rax, [r9+r9]
 * 0000000140AC5B02: mov     ecx, r8d
 * 0000000140AC5B05: lea     r10, [r10-8]
 * 0000000140AC5B09: ror     rdx, cl
 * 0000000140AC5B0C: mov     r9, rdx
 * 0000000140AC5B0F: xor     r9, rax
 * 0000000140AC5B12: sub     r8d, r11d
 * 0000000140AC5B15: jnz     short loc_140AC5AFB
 * 0000000140AC5B17: mov     r11, r12
 * 0000000140AC5B1A: lea     r10d, [r8+1]
 * 0000000140AC5B1E: sub     r14d, r12d
 * 0000000140AC5B21: lea     rcx, [r11+rsi]
 * 0000000140AC5B25: shr     r14d, 3
 * 0000000140AC5B29: xor     r11d, r11d
 * 0000000140AC5B2C: test    r14d, r14d
 * 0000000140AC5B2F: jz      short loc_140AC5B4D
 * 0000000140AC5B31: mov     edx, r14d
 * 0000000140AC5B34: dec     rdx
 * 0000000140AC5B37: lea     rdx, [rcx+rdx*8]
 * 0000000140AC5B3B: xor     [rdx], rbx
 * 0000000140AC5B3E: mov     ecx, r14d
 * 0000000140AC5B41: ror     rbx, cl
 * 0000000140AC5B44: lea     rdx, [rdx-8]
 * 0000000140AC5B48: sub     r14d, r10d
 * 0000000140AC5B4B: jnz     short loc_140AC5B3B
 * 0000000140AC5B4D: cmp     r9, r15
 * 0000000140AC5B50: jz      loc_140AC5BD9
 * 0000000140AC5B56: mov     rax, [rsi+568h]
 * 0000000140AC5B5D: mov     r13, 0A3A03F5891C8B4E8h
 * 0000000140AC5B67: mov     ecx, [rsi+7ACh]
 * 0000000140AC5B6D: mov     [rax], rsi
 * 0000000140AC5B70: mov     [rax+10h], ecx
 * 0000000140AC5B73: cmp     [rsi+8C0h], r11d
 * 0000000140AC5B7A: jnz     short loc_140AC5BE3
 * 0000000140AC5B7C: mov     rax, [rsi+568h]
 * 0000000140AC5B83: mov     rcx, r9
 * 0000000140AC5B86: xor     rcx, r15
 * 0000000140AC5B89: mov     r15d, 1
 * 0000000140AC5B8F: mov     [rax+18h], rcx
 * 0000000140AC5B93: cmp     [rsi+8C0h], r11d
 * 0000000140AC5B9A: jnz     short loc_140AC5BE9
 * 0000000140AC5B9C: lea     rax, [rsi+r13]
 * 0000000140AC5BA0: xor     edx, edx
 * 0000000140AC5BA2: mov     [rsi+8C8h], rax
 * 0000000140AC5BA9: mov     rcx, rsi
 * 0000000140AC5BAC: mov     [rsi+8D0h], r11
 * 0000000140AC5BB3: mov     qword ptr [rsi+8D8h], 10Eh
 * 0000000140AC5BBE: mov     [rsi+8E0h], r9
 * 0000000140AC5BC5: mov     [rsi+8C0h], r15d
 * 0000000140AC5BCC: call    sub_140AD049C
 * 0000000140AC5BD1: xor     r11d, r11d
 * 0000000140AC5BD4: jmp     short loc_140AC5BE9
 * 0000000140AC5BD6: xor     r11d, r11d
 * 0000000140AC5BD9: mov     r13, 0A3A03F5891C8B4E8h
 * 0000000140AC5BE3: mov     r15d, 1
 * 0000000140AC5BE9: mov     eax, [rsi+920h]
 * 0000000140AC5BEF: cmp     eax, 0Bh
 * 0000000140AC5BF2: jz      loc_140AC5CA3
 * 0000000140AC5BF8: cmp     eax, r15d
 * 0000000140AC5BFB: jz      loc_140AC5CA3
 * 0000000140AC5C01: cmp     [rsi+8C0h], r11d
 * 0000000140AC5C08: jnz     loc_140AC5CA8
 * 0000000140AC5C0E: mov     rax, [rsi+928h]
 * 0000000140AC5C15: mov     rcx, [rax]
 * 0000000140AC5C18: cmp     rcx, [rsi+930h]
 * 0000000140AC5C1F: jz      loc_140ACA310
 * 0000000140AC5C25: mov     ecx, [rsi+938h]
 * 0000000140AC5C2B: mov     r12d, 0FFFFFFFFh
 * 0000000140AC5C31: mov     rbx, rsi
 * 0000000140AC5C34: mov     [rsp+0C30h+var_BB8], rbx
 * 0000000140AC5C39: cmp     ecx, r12d
 * 0000000140AC5C3C: jz      short loc_140AC5C57
 * 0000000140AC5C3E: mov     rax, [rsi+268h]
 * 0000000140AC5C45: call    j__guard_dispatch_icall_nop
 * 0000000140AC5C4A: xor     r15d, r15d
 * 0000000140AC5C4D: mov     r14, rax
 * 0000000140AC5C50: test    rax, rax
 * 0000000140AC5C53: jnz     short loc_140AC5C70
 * 0000000140AC5C55: jmp     short loc_140AC5C5A
 * 0000000140AC5C57: xor     r15d, r15d
 * 0000000140AC5C5A: mov     rax, [rsi+270h]
 * 0000000140AC5C61: xor     ecx, ecx
 * 0000000140AC5C63: call    j__guard_dispatch_icall_nop
 * 0000000140AC5C68: mov     r14, rax
 * 0000000140AC5C6B: test    rax, rax
 * 0000000140AC5C6E: jz      short loc_140AC5C9D
 * 0000000140AC5C70: mov     rax, [rsi+280h]
 * 0000000140AC5C77: lea     rdx, [rbp+0B30h+var_6C0]
 * 0000000140AC5C7E: mov     rcx, r14
 * 0000000140AC5C81: call    j__guard_dispatch_icall_nop
 * 0000000140AC5C86: test    eax, eax
 * 0000000140AC5C88: jns     loc_140AC5D3D
 * 0000000140AC5C8E: mov     rax, [rsi+278h]
 * 0000000140AC5C95: mov     rcx, r14
 * 0000000140AC5C98: call    j__guard_dispatch_icall_nop
 * 0000000140AC5C9D: mov     r15d, 1
 * 0000000140AC5CA3: mov     [rsp+0C30h+var_BD0], rsi
 * 0000000140AC5CA8: test    dword ptr [rsi+958h], 2000000h
 * 0000000140AC5CB2: jz      loc_140ACA538
 * 0000000140AC5CB8: mov     rbx, [rsi+960h]
 * 0000000140AC5CBF: mov     rax, [rsi+380h]
 * 0000000140AC5CC6: mov     rcx, rbx
 * 0000000140AC5CC9: call    j__guard_dispatch_icall_nop
 * 0000000140AC5CCE: xor     r13d, r13d
 * 0000000140AC5CD1: test    eax, eax
 * 0000000140AC5CD3: jz      short loc_140AC5D1C
 * 0000000140AC5CD5: cmp     [rsi+8C0h], r13d
 * 0000000140AC5CDC: jnz     short loc_140AC5D1C
 * 0000000140AC5CDE: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC5CE8: xor     edx, edx
 * 0000000140AC5CEA: add     rax, rsi
 * 0000000140AC5CED: mov     rcx, rsi
 * 0000000140AC5CF0: mov     [rsi+8C8h], rax
 * 0000000140AC5CF7: mov     [rsi+8D0h], r13
 * 0000000140AC5CFE: mov     qword ptr [rsi+8D8h], 110h
 * 0000000140AC5D09: mov     [rsi+8E0h], r13
 * 0000000140AC5D10: mov     [rsi+8C0h], r15d
 * 0000000140AC5D17: call    sub_140AD049C
 * 0000000140AC5D1C: mov     rax, [rsi+378h]
 * 0000000140AC5D23: lea     rdx, sub_140AD1F70
 * 0000000140AC5D2A: xor     r9d, r9d
 * 0000000140AC5D2D: mov     r8, rsi
 * 0000000140AC5D30: mov     rcx, rbx
 * 0000000140AC5D33: call    j__guard_dispatch_icall_nop
 * 0000000140AC5D38: jmp     loc_140ACA53B
 * 0000000140AC5D3D: mov     [rsi+948h], r14
 * 0000000140AC5D44: mov     rax, [rsi+2A8h]
 * 0000000140AC5D4B: call    j__guard_dispatch_icall_nop
 * 0000000140AC5D50: mov     r14, rax
 * 0000000140AC5D53: mov     rax, [rsi+2C8h]
 * 0000000140AC5D5A: mov     rcx, r14
 * 0000000140AC5D5D: call    j__guard_dispatch_icall_nop
 * 0000000140AC5D62: mov     rdx, rax
 * 0000000140AC5D65: test    rax, rax
 * 0000000140AC5D68: jnz     short loc_140AC5D6F
 * 0000000140AC5D6A: lea     ecx, [rax+4]
 * 0000000140AC5D6D: jmp     short loc_140AC5D81
 * 0000000140AC5D6F: mov     rax, [rsi+2D8h]
 * 0000000140AC5D76: mov     rcx, r14
 * 0000000140AC5D79: call    j__guard_dispatch_icall_nop
 * 0000000140AC5D7E: mov     ecx, r15d
 * 0000000140AC5D81: mov     eax, [rsi+95Ch]
 * 0000000140AC5D87: and     eax, 0FFFFFFFBh
 * 0000000140AC5D8A: or      eax, ecx
 * 0000000140AC5D8C: mov     [rsi+95Ch], eax
 * 0000000140AC5D92: add     dword ptr [rsi+7F0h], 10000h
 * 0000000140AC5D9C: mov     rax, [rsi+290h]
 * 0000000140AC5DA3: mov     rcx, [rsi+948h]
 * 0000000140AC5DAA: call    j__guard_dispatch_icall_nop
 * 0000000140AC5DAF: xor     r11d, r11d
 * 0000000140AC5DB2: test    eax, eax
 * 0000000140AC5DB4: jnz     loc_140ACA2DC
 * 0000000140AC5DBA: mov     rax, [rsi+550h]
 * 0000000140AC5DC1: lea     ecx, [r11+20h]
 * 0000000140AC5DC5: add     rax, rcx
 * 0000000140AC5DC8: mov     [rbp+0B30h+var_B98], 2
 * 0000000140AC5DD0: mov     [rbp+0B30h+var_800], rax
 * 0000000140AC5DD7: lea     rdi, [rbp+0B30h+var_800]
 * 0000000140AC5DDE: mov     rax, [rsi+548h]
 * 0000000140AC5DE5: mov     ebx, r11d
 * 0000000140AC5DE8: add     rax, rcx
 * 0000000140AC5DEB: mov     [rbp+0B30h+var_7F8], rax
 * 0000000140AC5DF2: mov     rax, [rsi+928h]
 * 0000000140AC5DF9: mov     [rbp+0B30h+arg_8], rax
 * 0000000140AC5E00: mov     rax, [rsi+930h]
 * 0000000140AC5E07: mov     rsi, [rbp+0B30h+arg_8]
 * 0000000140AC5E0E: mov     [rbp+0B30h+var_B68], rax
 * 0000000140AC5E12: mov     r12, [rdi]
 * 0000000140AC5E15: xor     rbx, rsi
 * 0000000140AC5E18: mov     r11d, ebx
 * 0000000140AC5E1B: mov     [rsp+0C30h+var_BC8], r12
 * 0000000140AC5E20: and     r11d, 3Fh
 * 0000000140AC5E24: mov     r13, [r12]
 * 0000000140AC5E28: mov     r15d, [r12+10h]
 * 0000000140AC5E2D: mov     r9, r13
 * 0000000140AC5E30: mov     [rbp+0B30h+var_B38], r13
 * 0000000140AC5E34: mov     rax, r13
 * 0000000140AC5E37: lea     r10d, ds:0[r15*4]
 * 0000000140AC5E3F: mov     ecx, r10d
 * 0000000140AC5E42: add     rcx, r13
 * 0000000140AC5E45: cmp     r13, rcx
 * 0000000140AC5E48: jnb     short loc_140AC5E5A
 * 0000000140AC5E4A: mov     edx, 40h ; '@'
 * 0000000140AC5E4F: prefetchnta byte ptr [rax]
 * 0000000140AC5E52: add     rax, rdx
 * 0000000140AC5E55: cmp     rax, rcx
 * 0000000140AC5E58: jb      short loc_140AC5E4F
 * 0000000140AC5E5A: mov     r14d, r10d
 * 0000000140AC5E5D: mov     r8, rbx
 * 0000000140AC5E60: shr     r14d, 7
 * 0000000140AC5E64: test    r14d, r14d
 * 0000000140AC5E67: jz      short loc_140AC5EE0
 * 0000000140AC5E69: mov     r12, 7010008004002001h
 * 0000000140AC5E73: mov     edx, 8
 * 0000000140AC5E78: lea     esi, [rdx-7]
 * 0000000140AC5E7B: mov     rax, [r9]
 * 0000000140AC5E7E: mov     ecx, r11d
 * 0000000140AC5E81: xor     rax, r8
 * 0000000140AC5E84: mov     r8, [r9+8]
 * 0000000140AC5E88: rol     rax, cl
 * 0000000140AC5E8B: add     r9, 10h
 * 0000000140AC5E8F: xor     r8, rax
 * 0000000140AC5E92: rol     r8, cl
 * 0000000140AC5E95: sub     rdx, rsi
 * 0000000140AC5E98: jnz     short loc_140AC5E7B
 * 0000000140AC5E9A: mov     rcx, r9
 * 0000000140AC5E9D: sub     rcx, r13
 * 0000000140AC5EA0: xor     rcx, rbx
 * 0000000140AC5EA3: mov     rax, rcx
 * 0000000140AC5EA6: rol     rax, 11h
 * 0000000140AC5EAA: xor     rcx, rax
 * 0000000140AC5EAD: mov     rax, r12
 * 0000000140AC5EB0: mul     rcx
 * 0000000140AC5EB3: mov     [rbp+0B30h+var_568], rdx
 * 0000000140AC5EBA: xor     edx, eax
 * 0000000140AC5EBC: xor     r11d, edx
 * 0000000140AC5EBF: mov     rax, rsi
 * 0000000140AC5EC2: and     r11d, 3Fh
 * 0000000140AC5EC6: cmovz   r11d, eax
 * 0000000140AC5ECA: mov     eax, 0FFFFFFFFh
 * 0000000140AC5ECF: add     r14d, eax
 * 0000000140AC5ED2: jnz     short loc_140AC5E73
 * 0000000140AC5ED4: mov     r12, [rsp+0C30h+var_BC8]
 * 0000000140AC5ED9: mov     rsi, [rbp+0B30h+arg_8]
 * 0000000140AC5EE0: and     r10d, 7Fh
 * 0000000140AC5EE4: mov     ebx, 1
 * 0000000140AC5EE9: cmp     r10d, 8
 * 0000000140AC5EED: jb      short loc_140AC5F0C
 * 0000000140AC5EEF: mov     edx, r10d
 * 0000000140AC5EF2: shr     rdx, 3
 * 0000000140AC5EF6: xor     r8, [r9]
 * 0000000140AC5EF9: mov     ecx, r11d
 * 0000000140AC5EFC: rol     r8, cl
 * 0000000140AC5EFF: add     r9, 8
 * 0000000140AC5F03: add     r10d, 0FFFFFFF8h
 * 0000000140AC5F07: sub     rdx, rbx
 * 0000000140AC5F0A: jnz     short loc_140AC5EF6
 * 0000000140AC5F0C: test    r10d, r10d
 * 0000000140AC5F0F: jz      short loc_140AC5F32
 * 0000000140AC5F11: mov     esi, 0FFFFFFFFh
 * 0000000140AC5F16: movzx   eax, byte ptr [r9]
 * 0000000140AC5F1A: mov     ecx, r11d
 * 0000000140AC5F1D: xor     r8, rax
 * 0000000140AC5F20: add     r9, rbx
 * 0000000140AC5F23: rol     r8, cl
 * 0000000140AC5F26: add     r10d, esi
 * 0000000140AC5F29: jnz     short loc_140AC5F16
 * 0000000140AC5F2B: mov     rsi, [rbp+0B30h+arg_8]
 * 0000000140AC5F32: mov     r12, [r12+18h]
 * 0000000140AC5F37: mov     ebx, 3Fh ; '?'
 * 0000000140AC5F3C: mov     r14, [rbp+0B30h+var_B68]
 * 0000000140AC5F40: mov     r9, r12
 * 0000000140AC5F43: xor     r14, r8
 * 0000000140AC5F46: mov     rax, r12
 * 0000000140AC5F49: mov     r10d, r14d
 * 0000000140AC5F4C: mov     r13, r15
 * 0000000140AC5F4F: and     r10d, ebx
 * 0000000140AC5F52: lea     rcx, [r12+r15]
 * 0000000140AC5F56: cmp     r12, rcx
 * 0000000140AC5F59: jnb     short loc_140AC5F6A
 * 0000000140AC5F5B: lea     r8d, [rbx+1]
 * 0000000140AC5F5F: prefetchnta byte ptr [rax]
 * 0000000140AC5F62: add     rax, r8
 * 0000000140AC5F65: cmp     rax, rcx
 * 0000000140AC5F68: jb      short loc_140AC5F5F
 * 0000000140AC5F6A: mov     r11d, r15d
 * 0000000140AC5F6D: mov     r8, r14
 * 0000000140AC5F70: shr     r11d, 7
 * 0000000140AC5F74: test    r11d, r11d
 * 0000000140AC5F77: jz      short loc_140AC5FED
 * 0000000140AC5F79: mov     r13, 7010008004002001h
 * 0000000140AC5F83: mov     edx, 8
 * 0000000140AC5F88: lea     esi, [rdx-7]
 * 0000000140AC5F8B: mov     rax, [r9]
 * 0000000140AC5F8E: mov     ecx, r10d
 * 0000000140AC5F91: xor     rax, r8
 * 0000000140AC5F94: mov     r8, [r9+8]
 * 0000000140AC5F98: rol     rax, cl
 * 0000000140AC5F9B: add     r9, 10h
 * 0000000140AC5F9F: xor     r8, rax
 * 0000000140AC5FA2: rol     r8, cl
 * 0000000140AC5FA5: sub     rdx, rsi
 * 0000000140AC5FA8: jnz     short loc_140AC5F8B
 * 0000000140AC5FAA: mov     rcx, r9
 * 0000000140AC5FAD: sub     rcx, r12
 * 0000000140AC5FB0: xor     rcx, r14
 * 0000000140AC5FB3: mov     rax, rcx
 * 0000000140AC5FB6: rol     rax, 11h
 * 0000000140AC5FBA: xor     rcx, rax
 * 0000000140AC5FBD: mov     rax, r13
 * 0000000140AC5FC0: mul     rcx
 * 0000000140AC5FC3: mov     [rbp+0B30h+var_560], rdx
 * 0000000140AC5FCA: xor     edx, eax
 * 0000000140AC5FCC: xor     r10d, edx
 * 0000000140AC5FCF: mov     rax, rsi
 * 0000000140AC5FD2: and     r10d, ebx
 * 0000000140AC5FD5: cmovz   r10d, eax
 * 0000000140AC5FD9: mov     eax, 0FFFFFFFFh
 * 0000000140AC5FDE: add     r11d, eax
 * 0000000140AC5FE1: jnz     short loc_140AC5F83
 * 0000000140AC5FE3: mov     rsi, [rbp+0B30h+arg_8]
 * 0000000140AC5FEA: mov     r13, r15
 * 0000000140AC5FED: and     r15d, 7Fh
 * 0000000140AC5FF1: mov     r11d, 1
 * 0000000140AC5FF7: cmp     r15d, 8
 * 0000000140AC5FFB: jb      short loc_140AC601A
 * 0000000140AC5FFD: mov     edx, r15d
 * 0000000140AC6000: shr     rdx, 3
 * 0000000140AC6004: xor     r8, [r9]
 * 0000000140AC6007: mov     ecx, r10d
 * 0000000140AC600A: rol     r8, cl
 * 0000000140AC600D: add     r9, 8
 * 0000000140AC6011: add     r15d, 0FFFFFFF8h
 * 0000000140AC6015: sub     rdx, r11
 * 0000000140AC6018: jnz     short loc_140AC6004
 * 0000000140AC601A: xor     r12d, r12d
 * 0000000140AC601D: test    r15d, r15d
 * 0000000140AC6020: jz      short loc_140AC6043
 * 0000000140AC6022: mov     esi, 0FFFFFFFFh
 * 0000000140AC6027: movzx   eax, byte ptr [r9]
 * 0000000140AC602B: mov     ecx, r10d
 * 0000000140AC602E: xor     r8, rax
 * 0000000140AC6031: add     r9, r11
 * 0000000140AC6034: rol     r8, cl
 * 0000000140AC6037: add     r15d, esi
 * 0000000140AC603A: jnz     short loc_140AC6027
 * 0000000140AC603C: mov     rsi, [rbp+0B30h+arg_8]
 * 0000000140AC6043: mov     rcx, [rbp+0B30h+var_B38]
 * 0000000140AC6047: add     rdi, 8
 * 0000000140AC604B: mov     rbx, rcx
 * 0000000140AC604E: mov     r15d, 1
 * 0000000140AC6054: xor     rbx, r8
 * 0000000140AC6057: xor     rbx, r13
 * 0000000140AC605A: sub     [rbp+0B30h+var_B98], r15
 * 0000000140AC605E: jnz     loc_140AC5E12
 * 0000000140AC6064: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC6069: lea     rdx, [rbp+0B30h+var_908]
 * 0000000140AC6070: mov     [rbp+0B30h+var_B68], rbx
 * 0000000140AC6074: mov     rax, [rsi+1F8h]
 * 0000000140AC607B: call    j__guard_dispatch_icall_nop
 * 0000000140AC6080: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC6087: mov     rbx, [rsp+0C30h+var_BB8]
 * 0000000140AC608C: cmp     [rbp+0B30h+var_908], r12
 * 0000000140AC6093: jz      loc_140AC681C
 * 0000000140AC6099: rdtsc
 * 0000000140AC609B: shl     rdx, 20h
 * 0000000140AC609F: mov     r8, 7010008004002001h
 * 0000000140AC60A9: or      rax, rdx
 * 0000000140AC60AC: mov     rcx, rax
 * 0000000140AC60AF: ror     rax, 3
 * 0000000140AC60B3: xor     rcx, rax
 * 0000000140AC60B6: mov     rax, r8
 * 0000000140AC60B9: mul     rcx
 * 0000000140AC60BC: mov     rcx, rdx
 * 0000000140AC60BF: mov     [rbp+0B30h+var_558], rdx
 * 0000000140AC60C6: xor     rcx, rax
 * 0000000140AC60C9: mov     rax, 2E8BA2E8BA2E8BA3h
 * 0000000140AC60D3: mul     rcx
 * 0000000140AC60D6: shr     rdx, 1
 * 0000000140AC60D9: imul    rax, rdx, 0Bh
 * 0000000140AC60DD: sub     rcx, rax
 * 0000000140AC60E0: lea     eax, [r15+4]
 * 0000000140AC60E4: cmp     ecx, eax
 * 0000000140AC60E6: ja      loc_140AC61A4
 * 0000000140AC60EC: jz      loc_140AC618A
 * 0000000140AC60F2: test    ecx, ecx
 * 0000000140AC60F4: jz      short loc_140AC6170
 * 0000000140AC60F6: sub     ecx, r15d
 * 0000000140AC60F9: jz      short loc_140AC6157
 * 0000000140AC60FB: sub     ecx, r15d
 * 0000000140AC60FE: jz      short loc_140AC613D
 * 0000000140AC6100: cmp     ecx, r15d
 * 0000000140AC6103: jz      short loc_140AC611F
 * 0000000140AC6105: mov     [rbp+0B30h+var_960], 67076494h
 * 0000000140AC610F: mov     r9d, [rbp+0B30h+var_960]
 * 0000000140AC6116: rol     r9d, 4
 * 0000000140AC611A: jmp     loc_140AC62CB
 * 0000000140AC611F: mov     [rbp+0B30h+var_95C], 0A8223938h
 * 0000000140AC6129: mov     r9d, [rbp+0B30h+var_95C]
 * 0000000140AC6130: xor     r9d, 3
 * 0000000140AC6134: ror     r9d, 0Fh
 * 0000000140AC6138: jmp     loc_140AC62CB
 * 0000000140AC613D: mov     [rbp+0B30h+var_958], 85B5910Dh
 * 0000000140AC6147: mov     r9d, [rbp+0B30h+var_958]
 * 0000000140AC614E: ror     r9d, 2
 * 0000000140AC6152: jmp     loc_140AC62CB
 * 0000000140AC6157: mov     [rbp+0B30h+var_954], 0B2AD31A1h
 * 0000000140AC6161: mov     r9d, [rbp+0B30h+var_954]
 * 0000000140AC6168: rol     r9d, 1
 * 0000000140AC616B: jmp     loc_140AC62CB
 * 0000000140AC6170: mov     [rbp+0B30h+var_950], 0D098D0D8h
 * 0000000140AC617A: mov     r9d, [rbp+0B30h+var_950]
 * 0000000140AC6181: ror     r9d, 6
 * 0000000140AC6185: jmp     loc_140AC62CB
 * 0000000140AC618A: mov     [rbp+0B30h+var_A10], 288C49EDh
 * 0000000140AC6194: mov     r9d, [rbp+0B30h+var_A10]
 * 0000000140AC619B: ror     r9d, 5
 * 0000000140AC619F: jmp     loc_140AC62CB
 * 0000000140AC61A4: mov     edx, 6
 * 0000000140AC61A9: sub     ecx, edx
 * 0000000140AC61AB: jz      loc_140AC62B3
 * 0000000140AC61B1: sub     ecx, r15d
 * 0000000140AC61B4: jz      loc_140AC629C
 * 0000000140AC61BA: sub     ecx, r15d
 * 0000000140AC61BD: jz      loc_140AC6285
 * 0000000140AC61C3: cmp     ecx, r15d
 * 0000000140AC61C6: jz      loc_140AC626A
 * 0000000140AC61CC: rdtsc
 * 0000000140AC61CE: shl     rdx, 20h
 * 0000000140AC61D2: mov     r10d, 4EC4EC4Fh
 * 0000000140AC61D8: or      rax, rdx
 * 0000000140AC61DB: mov     rcx, rax
 * 0000000140AC61DE: ror     rax, 3
 * 0000000140AC61E2: xor     rcx, rax
 * 0000000140AC61E5: mov     rax, r8
 * 0000000140AC61E8: mul     rcx
 * 0000000140AC61EB: mov     r9, rdx
 * 0000000140AC61EE: mov     [rbp+0B30h+var_550], rdx
 * 0000000140AC61F5: xor     r9d, eax
 * 0000000140AC61F8: mov     eax, r10d
 * 0000000140AC61FB: mul     r9d
 * 0000000140AC61FE: mov     ecx, r9d
 * 0000000140AC6201: shr     r9d, 5
 * 0000000140AC6205: shr     edx, 3
 * 0000000140AC6208: mov     r8d, r9d
 * 0000000140AC620B: imul    eax, edx, 1Ah
 * 0000000140AC620E: sub     ecx, eax
 * 0000000140AC6210: mov     eax, r10d
 * 0000000140AC6213: mul     r9d
 * 0000000140AC6216: add     ecx, 61h ; 'a'
 * 0000000140AC6219: shr     r9d, 5
 * 0000000140AC621D: shl     ecx, 8
 * 0000000140AC6220: shr     edx, 3
 * 0000000140AC6223: imul    eax, edx, 1Ah
 * 0000000140AC6226: sub     r8d, eax
 * 0000000140AC6229: mov     eax, r10d
 * 0000000140AC622C: mul     r9d
 * 0000000140AC622F: add     r8d, 41h ; 'A'
 * 0000000140AC6233: or      r8d, ecx
 * 0000000140AC6236: shr     edx, 3
 * 0000000140AC6239: imul    eax, edx, 1Ah
 * 0000000140AC623C: mov     ecx, r9d
 * 0000000140AC623F: shr     r9d, 5
 * 0000000140AC6243: shl     r8d, 8
 * 0000000140AC6247: sub     ecx, eax
 * 0000000140AC6249: mov     eax, r10d
 * 0000000140AC624C: mul     r9d
 * 0000000140AC624F: add     ecx, 61h ; 'a'
 * 0000000140AC6252: shr     edx, 3
 * 0000000140AC6255: or      ecx, r8d
 * 0000000140AC6258: imul    eax, edx, 1Ah
 * 0000000140AC625B: shl     ecx, 8
 * 0000000140AC625E: sub     r9d, eax
 * 0000000140AC6261: add     r9d, 41h ; 'A'
 * 0000000140AC6265: or      r9d, ecx
 * 0000000140AC6268: jmp     short loc_140AC62CB
 * 0000000140AC626A: mov     [rbp+0B30h+var_A0C], 0B0869E85h
 * 0000000140AC6274: mov     r9d, [rbp+0B30h+var_A0C]
 * 0000000140AC627B: xor     r9d, 9
 * 0000000140AC627F: ror     r9d, 21h
 * 0000000140AC6283: jmp     short loc_140AC62CB
 * 0000000140AC6285: mov     [rbp+0B30h+var_A08], 64664142h
 * 0000000140AC628F: mov     r9d, [rbp+0B30h+var_A08]
 * 0000000140AC6296: ror     r9d, 8
 * 0000000140AC629A: jmp     short loc_140AC62CB
 * 0000000140AC629C: mov     [rbp+0B30h+var_A04], 82C6A6D8h
 * 0000000140AC62A6: mov     r9d, [rbp+0B30h+var_A04]
 * 0000000140AC62AD: rol     r9d, 7
 * 0000000140AC62B1: jmp     short loc_140AC62CB
 * 0000000140AC62B3: mov     [rbp+0B30h+var_A00], 4E574672h
 * 0000000140AC62BD: mov     r9d, [rbp+0B30h+var_A00]
 * 0000000140AC62C4: xor     r9d, edx
 * 0000000140AC62C7: ror     r9d, 18h
 * 0000000140AC62CB: mov     rax, [rsi+0E8h]
 * 0000000140AC62D2: mov     edx, 80h
 * 0000000140AC62D7: mov     r8d, r9d
 * 0000000140AC62DA: lea     r12d, [rdx-40h]
 * 0000000140AC62DE: mov     ecx, r12d
 * 0000000140AC62E1: call    j__guard_dispatch_icall_nop
 * 0000000140AC62E6: xor     r11d, r11d
 * 0000000140AC62E9: mov     [rbp+0B30h+var_B38], rax
 * 0000000140AC62ED: mov     r9, rax
 * 0000000140AC62F0: test    rax, rax
 * 0000000140AC62F3: jz      loc_140AC7B2A
 * 0000000140AC62F9: mov     rax, [rbp+0B30h+var_908]
 * 0000000140AC6300: mov     r14, [rbp+0B30h+var_B68]
 * 0000000140AC6304: mov     [rbp+0B30h+var_A88], rax
 * 0000000140AC630B: mov     [r9], rax
 * 0000000140AC630E: mov     eax, r11d
 * 0000000140AC6311: mov     [rbp+0B30h+var_B80], rax
 * 0000000140AC6315: mov     [rbp+0B30h+var_B98], r14
 * 0000000140AC6319: mov     dword ptr [rbp+0B30h+arg_8], r11d
 * 0000000140AC6320: mov     rcx, [r9+rax*8]
 * 0000000140AC6324: mov     [rbp+0B30h+var_A88], rcx
 * 0000000140AC632B: test    rcx, rcx
 * 0000000140AC632E: jz      loc_140AC67EC
 * 0000000140AC6334: mov     eax, r14d
 * 0000000140AC6337: and     eax, 3Fh
 * 0000000140AC633A: mov     [rbp+0B30h+var_BAC], eax
 * 0000000140AC633D: mov     rax, [rsi+1E8h]
 * 0000000140AC6344: call    j__guard_dispatch_icall_nop
 * 0000000140AC6349: xor     r11d, r11d
 * 0000000140AC634C: mov     [rsp+0C30h+var_BD8], rax
 * 0000000140AC6351: test    rax, rax
 * 0000000140AC6354: jz      loc_140AC679D
 * 0000000140AC635A: movzx   r14d, word ptr [rax+14h]
 * 0000000140AC635F: mov     ebx, [rbp+0B30h+var_BAC]
 * 0000000140AC6362: add     r14, 18h
 * 0000000140AC6366: mov     rdi, [rbp+0B30h+var_B98]
 * 0000000140AC636A: add     r14, rax
 * 0000000140AC636D: movzx   eax, word ptr [rax+6]
 * 0000000140AC6371: lea     rcx, [rax+rax*4]
 * 0000000140AC6375: lea     rax, [r14+rcx*8]
 * 0000000140AC6379: mov     [rsp+0C30h+var_BC8], rax
 * 0000000140AC637E: test    dword ptr [r14+24h], 2000000h
 * 0000000140AC6386: mov     r13d, r11d
 * 0000000140AC6389: jnz     short loc_140AC63A7
 * 0000000140AC638B: mov     eax, [r14]
 * 0000000140AC638E: cmp     eax, 54494E49h
 * 0000000140AC6393: jnz     loc_140AC65F1
 * 0000000140AC6399: cmp     dword ptr [r14+4], 4742444Bh
 * 0000000140AC63A1: jnz     loc_140AC663D
 * 0000000140AC63A7: mov     r13d, r15d
 * 0000000140AC63AA: cmp     [r14+24h], r11d
 * 0000000140AC63AE: mov     eax, [r14+8]
 * 0000000140AC63B2: mov     r8d, [r14+10h]
 * 0000000140AC63B6: cmovl   r13d, r15d
 * 0000000140AC63BA: cmp     r8d, eax
 * 0000000140AC63BD: cmovbe  r8d, eax
 * 0000000140AC63C1: mov     eax, [r14+0Ch]
 * 0000000140AC63C5: test    r13d, r13d
 * 0000000140AC63C8: jnz     loc_140AC64CF
 * 0000000140AC63CE: mov     r15d, eax
 * 0000000140AC63D1: mov     ecx, r8d
 * 0000000140AC63D4: add     r15, [rbp+0B30h+var_A88]
 * 0000000140AC63DB: mov     r11d, ebx
 * 0000000140AC63DE: add     rcx, r15
 * 0000000140AC63E1: mov     r10, r15
 * 0000000140AC63E4: mov     rax, r15
 * 0000000140AC63E7: cmp     r15, rcx
 * 0000000140AC63EA: jnb     short loc_140AC63F7
 * 0000000140AC63EC: prefetchnta byte ptr [rax]
 * 0000000140AC63EF: add     rax, r12
 * 0000000140AC63F2: cmp     rax, rcx
 * 0000000140AC63F5: jb      short loc_140AC63EC
 * 0000000140AC63F7: mov     r12d, r8d
 * 0000000140AC63FA: mov     r9, rdi
 * 0000000140AC63FD: shr     r12d, 7
 * 0000000140AC6401: test    r12d, r12d
 * 0000000140AC6404: jz      short loc_140AC647A
 * 0000000140AC6406: mov     rbx, 7010008004002001h
 * 0000000140AC6410: mov     edx, 8
 * 0000000140AC6415: lea     esi, [rdx-7]
 * 0000000140AC6418: mov     rax, [r10]
 * 0000000140AC641B: mov     ecx, r11d
 * 0000000140AC641E: xor     rax, r9
 * 0000000140AC6421: mov     r9, [r10+8]
 * 0000000140AC6425: rol     rax, cl
 * 0000000140AC6428: add     r10, 10h
 * 0000000140AC642C: xor     r9, rax
 * 0000000140AC642F: rol     r9, cl
 * 0000000140AC6432: sub     rdx, rsi
 * 0000000140AC6435: jnz     short loc_140AC6418
 * 0000000140AC6437: mov     rcx, r10
 * 0000000140AC643A: sub     rcx, r15
 * 0000000140AC643D: xor     rcx, rdi
 * 0000000140AC6440: mov     rax, rcx
 * 0000000140AC6443: rol     rax, 11h
 * 0000000140AC6447: xor     rcx, rax
 * 0000000140AC644A: mov     rax, rbx
 * 0000000140AC644D: mul     rcx
 * 0000000140AC6450: xor     r11d, edx
 * 0000000140AC6453: mov     [rbp+0B30h+var_548], rdx
 * 0000000140AC645A: xor     r11d, eax
 * 0000000140AC645D: mov     rax, rsi
 * 0000000140AC6460: and     r11d, 3Fh
 * 0000000140AC6464: cmovz   r11d, eax
 * 0000000140AC6468: mov     eax, 0FFFFFFFFh
 * 0000000140AC646D: add     r12d, eax
 * 0000000140AC6470: jnz     short loc_140AC6410
 * 0000000140AC6472: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC6477: mov     ebx, [rbp+0B30h+var_BAC]
 * 0000000140AC647A: and     r8d, 7Fh
 * 0000000140AC647E: mov     r15d, 1
 * 0000000140AC6484: cmp     r8d, 8
 * 0000000140AC6488: jb      short loc_140AC64A7
 * 0000000140AC648A: mov     edx, r8d
 * 0000000140AC648D: shr     rdx, 3
 * 0000000140AC6491: xor     r9, [r10]
 * 0000000140AC6494: mov     ecx, r11d
 * 0000000140AC6497: rol     r9, cl
 * 0000000140AC649A: add     r10, 8
 * 0000000140AC649E: add     r8d, 0FFFFFFF8h
 * 0000000140AC64A2: sub     rdx, r15
 * 0000000140AC64A5: jnz     short loc_140AC6491
 * 0000000140AC64A7: test    r8d, r8d
 * 0000000140AC64AA: jz      short loc_140AC64C9
 * 0000000140AC64AC: mov     ebx, 0FFFFFFFFh
 * 0000000140AC64B1: movzx   eax, byte ptr [r10]
 * 0000000140AC64B5: mov     ecx, r11d
 * 0000000140AC64B8: xor     r9, rax
 * 0000000140AC64BB: add     r10, r15
 * 0000000140AC64BE: rol     r9, cl
 * 0000000140AC64C1: add     r8d, ebx
 * 0000000140AC64C4: jnz     short loc_140AC64B1
 * 0000000140AC64C6: mov     ebx, [rbp+0B30h+var_BAC]
 * 0000000140AC64C9: mov     rdi, r9
 * 0000000140AC64CC: xor     r11d, r11d
 * 0000000140AC64CF: add     r14, 28h ; '('
 * 0000000140AC64D3: mov     r12d, 40h ; '@'
 * 0000000140AC64D9: cmp     r14, [rsp+0C30h+var_BC8]
 * 0000000140AC64DE: jnz     loc_140AC637E
 * 0000000140AC64E4: mov     r8d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140AC64EB: mov     [rbp+0B30h+var_B98], rdi
 * 0000000140AC64EF: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC64F6: test    r8d, r8d
 * 0000000140AC64F9: jnz     loc_140AC676C
 * 0000000140AC64FF: mov     rdx, [rsp+0C30h+var_BD8]
 * 0000000140AC6504: mov     r13, [rbp+0B30h+var_A88]
 * 0000000140AC650B: mov     ecx, [rdx+94h]
 * 0000000140AC6511: cmp     ecx, 14h
 * 0000000140AC6514: jb      loc_140AC676C
 * 0000000140AC651A: mov     eax, [rdx+90h]
 * 0000000140AC6520: lea     r12, [rax+rcx]
 * 0000000140AC6524: add     r12, r13
 * 0000000140AC6527: lea     r15, [rax+r13]
 * 0000000140AC652B: cmp     r15, r12
 * 0000000140AC652E: jz      loc_140AC6766
 * 0000000140AC6534: cmp     [r15+0Ch], r11d
 * 0000000140AC6538: jz      loc_140AC675F
 * 0000000140AC653E: mov     eax, [r15+10h]
 * 0000000140AC6542: test    eax, eax
 * 0000000140AC6544: jz      loc_140AC675F
 * 0000000140AC654A: mov     r14, [rax+r13]
 * 0000000140AC654E: test    r14, r14
 * 0000000140AC6551: jz      loc_140AC6752
 * 0000000140AC6557: cmp     r14, r13
 * 0000000140AC655A: jb      short loc_140AC656B
 * 0000000140AC655C: mov     eax, [rdx+50h]
 * 0000000140AC655F: add     rax, r13
 * 0000000140AC6562: cmp     r14, rax
 * 0000000140AC6565: jb      loc_140AC6752
 * 0000000140AC656B: mov     rax, [rsi+298h]
 * 0000000140AC6572: mov     rcx, r14
 * 0000000140AC6575: call    j__guard_dispatch_icall_nop
 * 0000000140AC657A: xor     r11d, r11d
 * 0000000140AC657D: test    eax, eax
 * 0000000140AC657F: jz      loc_140AC674D
 * 0000000140AC6585: mov     rax, [rsi+1F8h]
 * 0000000140AC658C: lea     rdx, [rbp+0B30h+var_A88]
 * 0000000140AC6593: mov     rcx, r14
 * 0000000140AC6596: call    j__guard_dispatch_icall_nop
 * 0000000140AC659B: mov     rdx, [rbp+0B30h+var_A88]
 * 0000000140AC65A2: xor     r11d, r11d
 * 0000000140AC65A5: test    rdx, rdx
 * 0000000140AC65A8: jz      loc_140AC674D
 * 0000000140AC65AE: mov     r9, [rbp+0B30h+var_B38]
 * 0000000140AC65B2: mov     rcx, r9
 * 0000000140AC65B5: mov     eax, r11d
 * 0000000140AC65B8: mov     r8, [rcx]
 * 0000000140AC65BB: cmp     r8, rdx
 * 0000000140AC65BE: jz      loc_140AC674D
 * 0000000140AC65C4: test    r8, r8
 * 0000000140AC65C7: jz      loc_140AC6749
 * 0000000140AC65CD: inc     eax
 * 0000000140AC65CF: add     rcx, 8
 * 0000000140AC65D3: mov     r8d, 10h
 * 0000000140AC65D9: cmp     eax, r8d
 * 0000000140AC65DC: jb      short loc_140AC65B8
 * 0000000140AC65DE: jnz     loc_140AC674D
 * 0000000140AC65E4: mov     r14, [rbp+0B30h+var_B98]
 * 0000000140AC65E8: lea     r15d, [r8-0Fh]
 * 0000000140AC65EC: jmp     loc_140AC67EC
 * 0000000140AC65F1: cmp     eax, 45474150h
 * 0000000140AC65F6: jnz     short loc_140AC6626
 * 0000000140AC65F8: movzx   eax, word ptr [r14+4]
 * 0000000140AC65FD: mov     ecx, 7877h
 * 0000000140AC6602: cmp     ax, cx
 * 0000000140AC6605: jz      loc_140AC63A7
 * 0000000140AC660B: mov     ecx, 7277h
 * 0000000140AC6610: cmp     ax, cx
 * 0000000140AC6613: jz      loc_140AC63A7
 * 0000000140AC6619: mov     ecx, 7777h
 * 0000000140AC661E: cmp     ax, cx
 * 0000000140AC6621: jmp     loc_140AC63A1
 * 0000000140AC6626: cmp     eax, 41525245h
 * 0000000140AC662B: jnz     short loc_140AC663D
 * 0000000140AC662D: mov     eax, 4154h
 * 0000000140AC6632: cmp     [r14+4], ax
 * 0000000140AC6637: jz      loc_140AC63A7
 * 0000000140AC663D: mov     r8, [rsi+8F8h]
 * 0000000140AC6644: mov     r9, r14
 * 0000000140AC6647: mov     r10, [rsi+900h]
 * 0000000140AC664E: sub     r9, r8
 * 0000000140AC6651: mov     r11, [rsi+908h]
 * 0000000140AC6658: mov     r15d, 7
 * 0000000140AC665E: mov     r12, [rsi+910h]
 * 0000000140AC6665: movzx   edx, byte ptr [r8+r9]
 * 0000000140AC666A: movzx   eax, byte ptr [r8]
 * 0000000140AC666E: inc     r8
 * 0000000140AC6671: cmp     rdx, rax
 * 0000000140AC6674: jnz     short loc_140AC6692
 * 0000000140AC6676: mov     eax, 0FFFFFFFFh
 * 0000000140AC667B: add     r15d, eax
 * 0000000140AC667E: jnz     short loc_140AC6665
 * 0000000140AC6680: mov     r15d, 1
 * 0000000140AC6686: xor     r11d, r11d
 * 0000000140AC6689: lea     r12d, [r11+40h]
 * 0000000140AC668D: jmp     loc_140AC63A7
 * 0000000140AC6692: mov     r8d, 8
 * 0000000140AC6698: mov     r9, r14
 * 0000000140AC669B: mov     rcx, [r9]
 * 0000000140AC669E: add     r9, 8
 * 0000000140AC66A2: mov     rax, [r10]
 * 0000000140AC66A5: add     r10, 8
 * 0000000140AC66A9: cmp     rcx, rax
 * 0000000140AC66AC: jnz     short loc_140AC66E2
 * 0000000140AC66AE: add     r8d, 0FFFFFFF8h
 * 0000000140AC66B2: cmp     r8d, 8
 * 0000000140AC66B6: jnb     short loc_140AC669B
 * 0000000140AC66B8: test    r8d, r8d
 * 0000000140AC66BB: jz      short loc_140AC6680
 * 0000000140AC66BD: mov     r15d, 1
 * 0000000140AC66C3: movzx   edx, byte ptr [r9]
 * 0000000140AC66C7: add     r9, r15
 * 0000000140AC66CA: movzx   eax, byte ptr [r10]
 * 0000000140AC66CE: add     r10, r15
 * 0000000140AC66D1: cmp     rdx, rax
 * 0000000140AC66D4: jnz     short loc_140AC66E8
 * 0000000140AC66D6: mov     eax, 0FFFFFFFFh
 * 0000000140AC66DB: add     r8d, eax
 * 0000000140AC66DE: jnz     short loc_140AC66C3
 * 0000000140AC66E0: jmp     short loc_140AC6686
 * 0000000140AC66E2: mov     r15d, 1
 * 0000000140AC66E8: mov     r8, r14
 * 0000000140AC66EB: mov     r9d, 4
 * 0000000140AC66F1: sub     r8, r11
 * 0000000140AC66F4: mov     r10d, 0FFFFFFFFh
 * 0000000140AC66FA: movzx   edx, byte ptr [r11+r8]
 * 0000000140AC66FF: movzx   eax, byte ptr [r11]
 * 0000000140AC6703: add     r11, r15
 * 0000000140AC6706: cmp     rdx, rax
 * 0000000140AC6709: jnz     short loc_140AC6715
 * 0000000140AC670B: add     r9d, r10d
 * 0000000140AC670E: jnz     short loc_140AC66FA
 * 0000000140AC6710: jmp     loc_140AC6686
 * 0000000140AC6715: mov     r8, r14
 * 0000000140AC6718: mov     r9d, 6
 * 0000000140AC671E: sub     r8, r12
 * 0000000140AC6721: movzx   edx, byte ptr [r12+r8]
 * 0000000140AC6726: movzx   eax, byte ptr [r12]
 * 0000000140AC672B: add     r12, r15
 * 0000000140AC672E: cmp     rdx, rax
 * 0000000140AC6731: jnz     short loc_140AC673D
 * 0000000140AC6733: add     r9d, r10d
 * 0000000140AC6736: jnz     short loc_140AC6721
 * 0000000140AC6738: jmp     loc_140AC6686
 * 0000000140AC673D: xor     r11d, r11d
 * 0000000140AC6740: lea     r12d, [r11+40h]
 * 0000000140AC6744: jmp     loc_140AC63AA
 * 0000000140AC6749: mov     [r9+rax*8], rdx
 * 0000000140AC674D: mov     rdx, [rsp+0C30h+var_BD8]
 * 0000000140AC6752: add     r15, 14h
 * 0000000140AC6756: cmp     r15, r12
 * 0000000140AC6759: jnz     loc_140AC6534
 * 0000000140AC675F: mov     r8d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140AC6766: mov     r15d, 1
 * 0000000140AC676C: mov     rax, [rbp+0B30h+var_B80]
 * 0000000140AC6770: mov     ecx, 10h
 * 0000000140AC6775: mov     r14, [rbp+0B30h+var_B98]
 * 0000000140AC6779: add     rax, r15
 * 0000000140AC677C: mov     r9, [rbp+0B30h+var_B38]
 * 0000000140AC6780: add     r8d, r15d
 * 0000000140AC6783: mov     dword ptr [rbp+0B30h+arg_8], r8d
 * 0000000140AC678A: mov     [rbp+0B30h+var_B80], rax
 * 0000000140AC678E: lea     r12d, [rcx+30h]
 * 0000000140AC6792: cmp     r8d, ecx
 * 0000000140AC6795: jb      loc_140AC6320
 * 0000000140AC679B: jmp     short loc_140AC67EC
 * 0000000140AC679D: cmp     [rsi+8C0h], r11d
 * 0000000140AC67A4: jnz     short loc_140AC67E8
 * 0000000140AC67A6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC67B0: xor     edx, edx
 * 0000000140AC67B2: add     rax, rsi
 * 0000000140AC67B5: mov     rcx, rsi
 * 0000000140AC67B8: mov     [rsi+8C8h], rax
 * 0000000140AC67BF: mov     [rsi+8D0h], r11
 * 0000000140AC67C6: mov     qword ptr [rsi+8D8h], 102h
 * 0000000140AC67D1: mov     qword ptr [rsi+8E0h], 0FFFFFFFFC000007Bh
 * 0000000140AC67DC: mov     [rsi+8C0h], r15d
 * 0000000140AC67E3: call    sub_140AD049C
 * 0000000140AC67E8: mov     r14, [rbp+0B30h+var_B68]
 * 0000000140AC67EC: xor     r12d, r12d
 * 0000000140AC67EF: cmp     r14, [rsi+930h]
 * 0000000140AC67F6: jz      short loc_140AC67FD
 * 0000000140AC67F8: test    r14, r14
 * 0000000140AC67FB: jnz     short loc_140AC680A
 * 0000000140AC67FD: mov     rax, 95EA5DE843D5D824h
 * 0000000140AC6807: xor     r14, rax
 * 0000000140AC680A: mov     rax, [rsi+0F0h]
 * 0000000140AC6811: mov     rcx, [rbp+0B30h+var_B38]
 * 0000000140AC6815: call    j__guard_dispatch_icall_nop
 * 0000000140AC681A: jmp     short loc_140AC6820
 * 0000000140AC681C: mov     r14, [rbp+0B30h+var_B68]
 * 0000000140AC6820: mov     rax, [rsi+928h]
 * 0000000140AC6827: mov     rcx, [rax]
 * 0000000140AC682A: cmp     r14, rcx
 * 0000000140AC682D: jz      short loc_140AC68A9
 * 0000000140AC682F: mov     eax, [rsi+95Ch]
 * 0000000140AC6835: mov     ecx, 40h ; '@'
 * 0000000140AC683A: test    cl, al
 * 0000000140AC683C: jnz     short loc_140AC68A9
 * 0000000140AC683E: mov     rax, [rsi+928h]
 * 0000000140AC6845: mov     rdx, [rax]
 * 0000000140AC6848: cmp     [rsi+8C0h], r12d
 * 0000000140AC684F: jnz     short loc_140AC68A9
 * 0000000140AC6851: mov     rax, [rsi+568h]
 * 0000000140AC6858: mov     rcx, r14
 * 0000000140AC685B: xor     rcx, rdx
 * 0000000140AC685E: mov     [rax+18h], rcx
 * 0000000140AC6862: cmp     [rsi+8C0h], r12d
 * 0000000140AC6869: jnz     short loc_140AC68A9
 * 0000000140AC686B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC6875: xor     edx, edx
 * 0000000140AC6877: add     rax, rsi
 * 0000000140AC687A: mov     rcx, rsi
 * 0000000140AC687D: mov     [rsi+8C8h], rax
 * 0000000140AC6884: mov     [rsi+8D0h], r12
 * 0000000140AC688B: mov     qword ptr [rsi+8D8h], 102h
 * 0000000140AC6896: mov     [rsi+8E0h], r14
 * 0000000140AC689D: mov     [rsi+8C0h], r15d
 * 0000000140AC68A4: call    sub_140AD049C
 * 0000000140AC68A9: mov     r10d, r12d
 * 0000000140AC68AC: lea     r15, [rbp+0B30h+var_7F8]
 * 0000000140AC68B3: mov     r12d, 2
 * 0000000140AC68B9: mov     r14d, 0FFFFFFFFh
 * 0000000140AC68BF: mov     rax, [r15]
 * 0000000140AC68C2: xor     esi, esi
 * 0000000140AC68C4: mov     r9d, esi
 * 0000000140AC68C7: mov     r11, [rax]
 * 0000000140AC68CA: lea     r8d, [r10+rax]
 * 0000000140AC68CE: mov     r13d, [rax+10h]
 * 0000000140AC68D2: add     r8d, r11d
 * 0000000140AC68D5: test    r13d, r13d
 * 0000000140AC68D8: jz      short loc_140AC6906
 * 0000000140AC68DA: mov     r14, r11
 * 0000000140AC68DD: movsxd  rdx, dword ptr [r14]
 * 0000000140AC68E0: inc     r9d
 * 0000000140AC68E3: mov     rax, rdx
 * 0000000140AC68E6: lea     r14, [r14+4]
 * 0000000140AC68EA: sar     rax, 4
 * 0000000140AC68EE: mov     ecx, [rax+r11]
 * 0000000140AC68F2: add     ecx, edx
 * 0000000140AC68F4: xor     r8d, ecx
 * 0000000140AC68F7: imul    r8d, r9d
 * 0000000140AC68FB: cmp     r9d, r13d
 * 0000000140AC68FE: jb      short loc_140AC68DD
 * 0000000140AC6900: mov     r14d, 0FFFFFFFFh
 * 0000000140AC6906: lea     r10d, [r10+r8*2]
 * 0000000140AC690A: sub     r15, 8
 * 0000000140AC690E: add     r8d, r8d
 * 0000000140AC6911: xor     r11d, r11d
 * 0000000140AC6914: add     r12d, r14d
 * 0000000140AC6917: jnz     short loc_140AC68BF
 * 0000000140AC6919: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC691E: mov     rbx, [rsp+0C30h+var_BB8]
 * 0000000140AC6923: mov     rax, [rsi+570h]
 * 0000000140AC692A: mov     edx, [rax]
 * 0000000140AC692C: cmp     r10d, edx
 * 0000000140AC692F: jz      short loc_140AC69A7
 * 0000000140AC6931: test    dword ptr [rsi+958h], 20000h
 * 0000000140AC693B: jz      short loc_140AC69A7
 * 0000000140AC693D: cmp     [rsi+8C0h], r11d
 * 0000000140AC6944: jnz     short loc_140AC69A7
 * 0000000140AC6946: mov     rax, [rsi+568h]
 * 0000000140AC694D: mov     ecx, r8d
 * 0000000140AC6950: xor     rcx, rdx
 * 0000000140AC6953: mov     [rax+18h], rcx
 * 0000000140AC6957: mov     ecx, r8d
 * 0000000140AC695A: cmp     [rsi+8C0h], r11d
 * 0000000140AC6961: jnz     short loc_140AC69A7
 * 0000000140AC6963: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC696D: xor     edx, edx
 * 0000000140AC696F: add     rax, rsi
 * 0000000140AC6972: mov     [rsi+8C8h], rax
 * 0000000140AC6979: lea     eax, [r11+1]
 * 0000000140AC697D: mov     [rsi+8D0h], r11
 * 0000000140AC6984: mov     qword ptr [rsi+8D8h], 107h
 * 0000000140AC698F: mov     [rsi+8E0h], rcx
 * 0000000140AC6996: mov     rcx, rsi
 * 0000000140AC6999: mov     [rsi+8C0h], eax
 * 0000000140AC699F: call    sub_140AD049C
 * 0000000140AC69A4: xor     r11d, r11d
 * 0000000140AC69A7: mov     eax, [rsi+920h]
 * 0000000140AC69AD: cmp     eax, 7
 * 0000000140AC69B0: jl      short loc_140AC69CF
 * 0000000140AC69B2: jz      loc_140AC7BCC
 * 0000000140AC69B8: cmp     eax, 8
 * 0000000140AC69BB: jz      loc_140AC90C5
 * 0000000140AC69C1: cmp     eax, 9
 * 0000000140AC69C4: jz      loc_140AC9DFE
 * 0000000140AC69CA: jmp     loc_140ACA284
 * 0000000140AC69CF: mov     rdx, [rsi+550h]
 * 0000000140AC69D6: mov     rcx, [rsi+548h]
 * 0000000140AC69DD: mov     [rsp+0C30h+var_BD8], rdx
 * 0000000140AC69E2: add     rdx, 20h ; ' '
 * 0000000140AC69E6: mov     [rsp+0C30h+var_BB8], rdx
 * 0000000140AC69EB: mov     edx, 2
 * 0000000140AC69F0: mov     [rbp+0B30h+var_B98], rcx
 * 0000000140AC69F4: lea     r13, [rcx+20h]
 * 0000000140AC69F8: mov     [rbp+0B30h+var_B68], r13
 * 0000000140AC69FC: cmp     eax, edx
 * 0000000140AC69FE: jge     loc_140AC6CA8
 * 0000000140AC6A04: mov     r12, [r13+0]
 * 0000000140AC6A08: mov     r13d, [rsi+7ACh]
 * 0000000140AC6A0F: mov     r15d, [rcx+30h]
 * 0000000140AC6A13: mov     r8d, [rsi+8ECh]
 * 0000000140AC6A1A: shl     r15d, 2
 * 0000000140AC6A1E: lea     eax, [r13+30h]
 * 0000000140AC6A22: mov     dword ptr [rbp+0B30h+arg_8], r15d
 * 0000000140AC6A29: cmp     eax, [rsi+9E4h]
 * 0000000140AC6A2F: jbe     loc_140AC6B0D
 * 0000000140AC6A35: mov     edx, eax
 * 0000000140AC6A37: mov     rcx, rsi
 * 0000000140AC6A3A: call    sub_140ACFC24
 * 0000000140AC6A3F: xor     r11d, r11d
 * 0000000140AC6A42: mov     r14, rax
 * 0000000140AC6A45: test    rax, rax
 * 0000000140AC6A48: jz      loc_140AC7B21
 * 0000000140AC6A4E: mov     ecx, [rsi+958h]
 * 0000000140AC6A54: test    cl, 4
 * 0000000140AC6A57: jnz     loc_140AC6B03
 * 0000000140AC6A5D: mov     eax, [rsi+7ACh]
 * 0000000140AC6A63: lea     r9d, [r11+1]
 * 0000000140AC6A67: mov     r8, [rsi+790h]
 * 0000000140AC6A6E: and     ecx, 20000000h
 * 0000000140AC6A74: neg     ecx
 * 0000000140AC6A76: sbb     edx, edx
 * 0000000140AC6A78: and     edx, [rsi+8ECh]
 * 0000000140AC6A7E: cmp     eax, 8
 * 0000000140AC6A81: jb      short loc_140AC6A98
 * 0000000140AC6A83: mov     ecx, eax
 * 0000000140AC6A85: shr     rcx, 3
 * 0000000140AC6A89: mov     [rsi], r11
 * 0000000140AC6A8C: add     eax, 0FFFFFFF8h
 * 0000000140AC6A8F: add     rsi, 8
 * 0000000140AC6A93: sub     rcx, r9
 * 0000000140AC6A96: jnz     short loc_140AC6A89
 * 0000000140AC6A98: test    eax, eax
 * 0000000140AC6A9A: jz      short loc_140AC6AAB
 * 0000000140AC6A9C: mov     ecx, 0FFFFFFFFh
 * 0000000140AC6AA1: mov     [rsi], r11b
 * 0000000140AC6AA4: add     rsi, r9
 * 0000000140AC6AA7: add     eax, ecx
 * 0000000140AC6AA9: jnz     short loc_140AC6AA1
 * 0000000140AC6AAB: mov     ebx, [r14+8ECh]
 * 0000000140AC6AB2: mov     [r14+8ECh], edx
 * 0000000140AC6AB9: cmp     edx, 3
 * 0000000140AC6ABC: jz      short loc_140AC6AED
 * 0000000140AC6ABE: test    dword ptr [r14+958h], 10000000h
 * 0000000140AC6AC9: jnz     short loc_140AC6AE4
 * 0000000140AC6ACB: test    edx, edx
 * 0000000140AC6ACD: jz      short loc_140AC6AE4
 * 0000000140AC6ACF: mov     rax, [r14+218h]
 * 0000000140AC6AD6: lea     rcx, [r8-8]
 * 0000000140AC6ADA: mov     rdx, [rcx]
 * 0000000140AC6ADD: call    j__guard_dispatch_icall_nop
 * 0000000140AC6AE2: jmp     short loc_140AC6AFC
 * 0000000140AC6AE4: mov     rax, [r14+0F0h]
 * 0000000140AC6AEB: jmp     short loc_140AC6AF4
 * 0000000140AC6AED: mov     rax, [r14+358h]
 * 0000000140AC6AF4: mov     rcx, r8
 * 0000000140AC6AF7: call    j__guard_dispatch_icall_nop
 * 0000000140AC6AFC: mov     [r14+8ECh], ebx
 * 0000000140AC6B03: and     dword ptr [r14+958h], 0FFFFFFFBh
 * 0000000140AC6B0B: jmp     short loc_140AC6B16
 * 0000000140AC6B0D: mov     r14, rsi
 * 0000000140AC6B10: mov     [rsi+7ACh], eax
 * 0000000140AC6B16: lea     rbx, [r14+r13]
 * 0000000140AC6B1A: mov     r8d, 1
 * 0000000140AC6B20: add     [r14+7D4h], r8d
 * 0000000140AC6B27: mov     rax, rbx
 * 0000000140AC6B2A: mov     [rsp+0C30h+var_BC8], rbx
 * 0000000140AC6B2F: xor     r13d, r13d
 * 0000000140AC6B32: lea     ecx, [r8+2Fh]
 * 0000000140AC6B36: lea     edx, [rcx-2Ah]
 * 0000000140AC6B39: mov     [rax], r13
 * 0000000140AC6B3C: add     ecx, 0FFFFFFF8h
 * 0000000140AC6B3F: add     rax, 8
 * 0000000140AC6B43: sub     rdx, r8
 * 0000000140AC6B46: jnz     short loc_140AC6B39
 * 0000000140AC6B48: test    ecx, ecx
 * 0000000140AC6B4A: jz      short loc_140AC6B5B
 * 0000000140AC6B4C: mov     edx, 0FFFFFFFFh
 * 0000000140AC6B51: mov     [rax], r13b
 * 0000000140AC6B54: add     rax, r8
 * 0000000140AC6B57: add     ecx, edx
 * 0000000140AC6B59: jnz     short loc_140AC6B51
 * 0000000140AC6B5B: mov     dword ptr [rbx], 0Bh
 * 0000000140AC6B61: mov     r9, r12
 * 0000000140AC6B64: mov     [rbx+8], r12
 * 0000000140AC6B68: mov     rax, r12
 * 0000000140AC6B6B: mov     [rbx+10h], r15d
 * 0000000140AC6B6F: add     [r14+7F0h], r15d
 * 0000000140AC6B76: mov     r10d, [r14+7DCh]
 * 0000000140AC6B7D: mov     rsi, [r14+7E0h]
 * 0000000140AC6B84: mov     ecx, r15d
 * 0000000140AC6B87: add     rcx, r12
 * 0000000140AC6B8A: cmp     r12, rcx
 * 0000000140AC6B8D: jnb     short loc_140AC6B9F
 * 0000000140AC6B8F: mov     edx, 40h ; '@'
 * 0000000140AC6B94: prefetchnta byte ptr [rax]
 * 0000000140AC6B97: add     rax, rdx
 * 0000000140AC6B9A: cmp     rax, rcx
 * 0000000140AC6B9D: jb      short loc_140AC6B94
 * 0000000140AC6B9F: mov     r11d, r15d
 * 0000000140AC6BA2: mov     r8, rsi
 * 0000000140AC6BA5: shr     r11d, 7
 * 0000000140AC6BA9: mov     r13d, 1
 * 0000000140AC6BAF: test    r11d, r11d
 * 0000000140AC6BB2: jz      short loc_140AC6C27
 * 0000000140AC6BB4: mov     ebx, 0FFFFFFFFh
 * 0000000140AC6BB9: mov     r15, 7010008004002001h
 * 0000000140AC6BC3: mov     eax, 8
 * 0000000140AC6BC8: xor     r8, [r9]
 * 0000000140AC6BCB: mov     ecx, r10d
 * 0000000140AC6BCE: rol     r8, cl
 * 0000000140AC6BD1: xor     r8, [r9+8]
 * 0000000140AC6BD5: add     r9, 10h
 * 0000000140AC6BD9: rol     r8, cl
 * 0000000140AC6BDC: sub     rax, r13
 * 0000000140AC6BDF: jnz     short loc_140AC6BC8
 * 0000000140AC6BE1: mov     rcx, r9
 * 0000000140AC6BE4: sub     rcx, r12
 * 0000000140AC6BE7: xor     rcx, rsi
 * 0000000140AC6BEA: mov     rax, rcx
 * 0000000140AC6BED: rol     rax, 11h
 * 0000000140AC6BF1: xor     rcx, rax
 * 0000000140AC6BF4: mov     rax, r15
 * 0000000140AC6BF7: mul     rcx
 * 0000000140AC6BFA: xor     r10d, edx
 * 0000000140AC6BFD: mov     [rbp+0B30h+var_540], rdx
 * 0000000140AC6C04: xor     r10d, eax
 * 0000000140AC6C07: and     r10d, 3Fh
 * 0000000140AC6C0B: cmovz   r10d, r13d
 * 0000000140AC6C0F: add     r11d, ebx
 * 0000000140AC6C12: jnz     short loc_140AC6BC3
 * 0000000140AC6C14: mov     rbx, [rsp+0C30h+var_BC8]
 * 0000000140AC6C19: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC6C20: mov     r15d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140AC6C27: mov     edx, r15d
 * 0000000140AC6C2A: and     edx, 7Fh
 * 0000000140AC6C2D: cmp     edx, 8
 * 0000000140AC6C30: jb      short loc_140AC6C4D
 * 0000000140AC6C32: mov     eax, edx
 * 0000000140AC6C34: shr     rax, 3
 * 0000000140AC6C38: xor     r8, [r9]
 * 0000000140AC6C3B: mov     ecx, r10d
 * 0000000140AC6C3E: rol     r8, cl
 * 0000000140AC6C41: add     r9, 8
 * 0000000140AC6C45: add     edx, 0FFFFFFF8h
 * 0000000140AC6C48: sub     rax, r13
 * 0000000140AC6C4B: jnz     short loc_140AC6C38
 * 0000000140AC6C4D: xor     r11d, r11d
 * 0000000140AC6C50: test    edx, edx
 * 0000000140AC6C52: jz      short loc_140AC6C74
 * 0000000140AC6C54: mov     edi, 0FFFFFFFFh
 * 0000000140AC6C59: movzx   eax, byte ptr [r9]
 * 0000000140AC6C5D: mov     ecx, r10d
 * 0000000140AC6C60: xor     r8, rax
 * 0000000140AC6C63: add     r9, r13
 * 0000000140AC6C66: rol     r8, cl
 * 0000000140AC6C69: add     edx, edi
 * 0000000140AC6C6B: jnz     short loc_140AC6C59
 * 0000000140AC6C6D: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC6C74: mov     rax, r8
 * 0000000140AC6C77: jmp     short loc_140AC6C7C
 * 0000000140AC6C79: xor     r8d, eax
 * 0000000140AC6C7C: shr     rax, 1Fh
 * 0000000140AC6C80: test    rax, rax
 * 0000000140AC6C83: jnz     short loc_140AC6C79
 * 0000000140AC6C85: mov     r13, [rbp+0B30h+var_B68]
 * 0000000140AC6C89: btr     r8d, 1Fh
 * 0000000140AC6C8E: mov     [rbx+14h], r8d
 * 0000000140AC6C92: mov     eax, 2
 * 0000000140AC6C97: add     [r14+7F0h], r15d
 * 0000000140AC6C9E: mov     rbx, r14
 * 0000000140AC6CA1: mov     [r14+920h], eax
 * 0000000140AC6CA8: cmp     dword ptr [rbx+920h], 3
 * 0000000140AC6CAF: jge     loc_140AC6EE1
 * 0000000140AC6CB5: mov     r14d, [rbx+7ACh]
 * 0000000140AC6CBC: mov     r15d, 20h ; ' '
 * 0000000140AC6CC2: mov     r12d, [rbx+800h]
 * 0000000140AC6CC9: cmp     r12d, 7
 * 0000000140AC6CCD: mov     r8d, [rbx+8ECh]
 * 0000000140AC6CD4: cmovnz  r15d, r11d
 * 0000000140AC6CD8: lea     eax, [r14+30h]
 * 0000000140AC6CDC: cmp     eax, [rbx+9E4h]
 * 0000000140AC6CE2: jbe     loc_140AC6DBE
 * 0000000140AC6CE8: mov     edx, eax
 * 0000000140AC6CEA: mov     rcx, rbx
 * 0000000140AC6CED: call    sub_140ACFC24
 * 0000000140AC6CF2: xor     r11d, r11d
 * 0000000140AC6CF5: mov     rsi, rax
 * 0000000140AC6CF8: test    rax, rax
 * 0000000140AC6CFB: jz      loc_140AC7B21
 * 0000000140AC6D01: mov     ecx, [rbx+958h]
 * 0000000140AC6D07: test    cl, 4
 * 0000000140AC6D0A: jnz     loc_140AC6DB5
 * 0000000140AC6D10: mov     eax, [rbx+7ACh]
 * 0000000140AC6D16: lea     r9d, [r11+1]
 * 0000000140AC6D1A: mov     r8, [rbx+790h]
 * 0000000140AC6D21: and     ecx, 20000000h
 * 0000000140AC6D27: neg     ecx
 * 0000000140AC6D29: sbb     edx, edx
 * 0000000140AC6D2B: and     edx, [rbx+8ECh]
 * 0000000140AC6D31: cmp     eax, 8
 * 0000000140AC6D34: jb      short loc_140AC6D4B
 * 0000000140AC6D36: mov     ecx, eax
 * 0000000140AC6D38: shr     rcx, 3
 * 0000000140AC6D3C: mov     [rbx], r11
 * 0000000140AC6D3F: add     eax, 0FFFFFFF8h
 * 0000000140AC6D42: add     rbx, 8
 * 0000000140AC6D46: sub     rcx, r9
 * 0000000140AC6D49: jnz     short loc_140AC6D3C
 * 0000000140AC6D4B: test    eax, eax
 * 0000000140AC6D4D: jz      short loc_140AC6D5E
 * 0000000140AC6D4F: mov     ecx, 0FFFFFFFFh
 * 0000000140AC6D54: mov     [rbx], r11b
 * 0000000140AC6D57: add     rbx, r9
 * 0000000140AC6D5A: add     eax, ecx
 * 0000000140AC6D5C: jnz     short loc_140AC6D54
 * 0000000140AC6D5E: mov     ebx, [rsi+8ECh]
 * 0000000140AC6D64: mov     [rsi+8ECh], edx
 * 0000000140AC6D6A: cmp     edx, 3
 * 0000000140AC6D6D: jz      short loc_140AC6D9D
 * 0000000140AC6D6F: test    dword ptr [rsi+958h], 10000000h
 * 0000000140AC6D79: jnz     short loc_140AC6D94
 * 0000000140AC6D7B: test    edx, edx
 * 0000000140AC6D7D: jz      short loc_140AC6D94
 * 0000000140AC6D7F: mov     rax, [rsi+218h]
 * 0000000140AC6D86: lea     rcx, [r8-8]
 * 0000000140AC6D8A: mov     rdx, [rcx]
 * 0000000140AC6D8D: call    j__guard_dispatch_icall_nop
 * 0000000140AC6D92: jmp     short loc_140AC6DAC
 * 0000000140AC6D94: mov     rax, [rsi+0F0h]
 * 0000000140AC6D9B: jmp     short loc_140AC6DA4
 * 0000000140AC6D9D: mov     rax, [rsi+358h]
 * 0000000140AC6DA4: mov     rcx, r8
 * 0000000140AC6DA7: call    j__guard_dispatch_icall_nop
 * 0000000140AC6DAC: mov     [rsi+8ECh], ebx
 * 0000000140AC6DB2: xor     r11d, r11d
 * 0000000140AC6DB5: and     dword ptr [rsi+958h], 0FFFFFFFBh
 * 0000000140AC6DBC: jmp     short loc_140AC6DC7
 * 0000000140AC6DBE: mov     rsi, rbx
 * 0000000140AC6DC1: mov     [rbx+7ACh], eax
 * 0000000140AC6DC7: mov     r8d, 1
 * 0000000140AC6DCD: lea     rbx, [rsi+r14]
 * 0000000140AC6DD1: add     [rsi+7D4h], r8d
 * 0000000140AC6DD8: mov     rax, rbx
 * 0000000140AC6DDB: lea     ecx, [r8+2Fh]
 * 0000000140AC6DDF: lea     edx, [rcx-2Ah]
 * 0000000140AC6DE2: mov     [rax], r11
 * 0000000140AC6DE5: add     ecx, 0FFFFFFF8h
 * 0000000140AC6DE8: add     rax, 8
 * 0000000140AC6DEC: sub     rdx, r8
 * 0000000140AC6DEF: jnz     short loc_140AC6DE2
 * 0000000140AC6DF1: test    ecx, ecx
 * 0000000140AC6DF3: jz      short loc_140AC6E04
 * 0000000140AC6DF5: mov     edx, 0FFFFFFFFh
 * 0000000140AC6DFA: mov     [rax], r11b
 * 0000000140AC6DFD: add     rax, r8
 * 0000000140AC6E00: add     ecx, edx
 * 0000000140AC6E02: jnz     short loc_140AC6DFA
 * 0000000140AC6E04: mov     [rbx], r15d
 * 0000000140AC6E07: mov     r14d, 20h ; ' '
 * 0000000140AC6E0D: mov     [rbx+8], r13
 * 0000000140AC6E11: cmp     r12d, 7
 * 0000000140AC6E15: jnz     short loc_140AC6E29
 * 0000000140AC6E17: lea     r9, [rbx+18h]
 * 0000000140AC6E1B: mov     r8d, r14d
 * 0000000140AC6E1E: mov     rdx, r13
 * 0000000140AC6E21: mov     rcx, rsi
 * 0000000140AC6E24: call    sub_1403F966C
 * 0000000140AC6E29: mov     rcx, [rbp+0B30h+var_B98]
 * 0000000140AC6E2D: mov     r8, r13
 * 0000000140AC6E30: mov     [rbx+10h], r14d
 * 0000000140AC6E34: add     rcx, 40h ; '@'
 * 0000000140AC6E38: add     [rsi+7F0h], r14d
 * 0000000140AC6E3F: mov     rax, r13
 * 0000000140AC6E42: mov     r11d, [rsi+7DCh]
 * 0000000140AC6E49: mov     rdx, [rsi+7E0h]
 * 0000000140AC6E50: cmp     r13, rcx
 * 0000000140AC6E53: jnb     short loc_140AC6E66
 * 0000000140AC6E55: mov     r9d, 40h ; '@'
 * 0000000140AC6E5B: prefetchnta byte ptr [rax]
 * 0000000140AC6E5E: add     rax, r9
 * 0000000140AC6E61: cmp     rax, rcx
 * 0000000140AC6E64: jb      short loc_140AC6E5B
 * 0000000140AC6E66: mov     r10d, 4
 * 0000000140AC6E6C: mov     r9d, r14d
 * 0000000140AC6E6F: lea     r15d, [r10-3]
 * 0000000140AC6E73: xor     rdx, [r8]
 * 0000000140AC6E76: mov     ecx, r11d
 * 0000000140AC6E79: rol     rdx, cl
 * 0000000140AC6E7C: add     r8, 8
 * 0000000140AC6E80: add     r9d, 0FFFFFFF8h
 * 0000000140AC6E84: sub     r10, r15
 * 0000000140AC6E87: jnz     short loc_140AC6E73
 * 0000000140AC6E89: test    r9d, r9d
 * 0000000140AC6E8C: jz      short loc_140AC6EAF
 * 0000000140AC6E8E: mov     edi, 0FFFFFFFFh
 * 0000000140AC6E93: movzx   eax, byte ptr [r8]
 * 0000000140AC6E97: mov     ecx, r11d
 * 0000000140AC6E9A: xor     rdx, rax
 * 0000000140AC6E9D: add     r8, r15
 * 0000000140AC6EA0: rol     rdx, cl
 * 0000000140AC6EA3: add     r9d, edi
 * 0000000140AC6EA6: jnz     short loc_140AC6E93
 * 0000000140AC6EA8: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC6EAF: mov     rax, rdx
 * 0000000140AC6EB2: shr     rax, 1Fh
 * 0000000140AC6EB6: xor     r11d, r11d
 * 0000000140AC6EB9: jmp     short loc_140AC6EC1
 * 0000000140AC6EBB: xor     edx, eax
 * 0000000140AC6EBD: shr     rax, 1Fh
 * 0000000140AC6EC1: test    rax, rax
 * 0000000140AC6EC4: jnz     short loc_140AC6EBB
 * 0000000140AC6EC6: btr     edx, 1Fh
 * 0000000140AC6ECA: mov     [rbx+14h], edx
 * 0000000140AC6ECD: mov     rbx, rsi
 * 0000000140AC6ED0: add     [rsi+7F0h], r14d
 * 0000000140AC6ED7: mov     dword ptr [rsi+920h], 3
 * 0000000140AC6EE1: cmp     dword ptr [rbx+920h], 4
 * 0000000140AC6EE8: mov     r13, [rsp+0C30h+var_BB8]
 * 0000000140AC6EED: jge     loc_140AC7193
 * 0000000140AC6EF3: mov     rax, [rsp+0C30h+var_BD8]
 * 0000000140AC6EF8: mov     r14d, [rbx+7ACh]
 * 0000000140AC6EFF: mov     r12, [r13+0]
 * 0000000140AC6F03: mov     r8d, [rbx+8ECh]
 * 0000000140AC6F0A: mov     r15d, [rax+30h]
 * 0000000140AC6F0E: shl     r15d, 2
 * 0000000140AC6F12: lea     eax, [r14+30h]
 * 0000000140AC6F16: cmp     eax, [rbx+9E4h]
 * 0000000140AC6F1C: jbe     loc_140AC6FF5
 * 0000000140AC6F22: mov     edx, eax
 * 0000000140AC6F24: mov     rcx, rbx
 * 0000000140AC6F27: call    sub_140ACFC24
 * 0000000140AC6F2C: xor     r11d, r11d
 * 0000000140AC6F2F: mov     rsi, rax
 * 0000000140AC6F32: test    rax, rax
 * 0000000140AC6F35: jz      loc_140AC7B21
 * 0000000140AC6F3B: mov     ecx, [rbx+958h]
 * 0000000140AC6F41: test    cl, 4
 * 0000000140AC6F44: jnz     loc_140AC6FEC
 * 0000000140AC6F4A: mov     eax, [rbx+7ACh]
 * 0000000140AC6F50: lea     r9d, [r11+1]
 * 0000000140AC6F54: mov     r8, [rbx+790h]
 * 0000000140AC6F5B: and     ecx, 20000000h
 * 0000000140AC6F61: neg     ecx
 * 0000000140AC6F63: sbb     edx, edx
 * 0000000140AC6F65: and     edx, [rbx+8ECh]
 * 0000000140AC6F6B: cmp     eax, 8
 * 0000000140AC6F6E: jb      short loc_140AC6F85
 * 0000000140AC6F70: mov     ecx, eax
 * 0000000140AC6F72: shr     rcx, 3
 * 0000000140AC6F76: mov     [rbx], r11
 * 0000000140AC6F79: add     eax, 0FFFFFFF8h
 * 0000000140AC6F7C: add     rbx, 8
 * 0000000140AC6F80: sub     rcx, r9
 * 0000000140AC6F83: jnz     short loc_140AC6F76
 * 0000000140AC6F85: test    eax, eax
 * 0000000140AC6F87: jz      short loc_140AC6F98
 * 0000000140AC6F89: mov     ecx, 0FFFFFFFFh
 * 0000000140AC6F8E: mov     [rbx], r11b
 * 0000000140AC6F91: add     rbx, r9
 * 0000000140AC6F94: add     eax, ecx
 * 0000000140AC6F96: jnz     short loc_140AC6F8E
 * 0000000140AC6F98: mov     ebx, [rsi+8ECh]
 * 0000000140AC6F9E: mov     [rsi+8ECh], edx
 * 0000000140AC6FA4: cmp     edx, 3
 * 0000000140AC6FA7: jz      short loc_140AC6FD7
 * 0000000140AC6FA9: test    dword ptr [rsi+958h], 10000000h
 * 0000000140AC6FB3: jnz     short loc_140AC6FCE
 * 0000000140AC6FB5: test    edx, edx
 * 0000000140AC6FB7: jz      short loc_140AC6FCE
 * 0000000140AC6FB9: mov     rax, [rsi+218h]
 * 0000000140AC6FC0: lea     rcx, [r8-8]
 * 0000000140AC6FC4: mov     rdx, [rcx]
 * 0000000140AC6FC7: call    j__guard_dispatch_icall_nop
 * 0000000140AC6FCC: jmp     short loc_140AC6FE6
 * 0000000140AC6FCE: mov     rax, [rsi+0F0h]
 * 0000000140AC6FD5: jmp     short loc_140AC6FDE
 * 0000000140AC6FD7: mov     rax, [rsi+358h]
 * 0000000140AC6FDE: mov     rcx, r8
 * 0000000140AC6FE1: call    j__guard_dispatch_icall_nop
 * 0000000140AC6FE6: mov     [rsi+8ECh], ebx
 * 0000000140AC6FEC: and     dword ptr [rsi+958h], 0FFFFFFFBh
 * 0000000140AC6FF3: jmp     short loc_140AC6FFE
 * 0000000140AC6FF5: mov     rsi, rbx
 * 0000000140AC6FF8: mov     [rbx+7ACh], eax
 * 0000000140AC6FFE: mov     r9d, 1
 * 0000000140AC7004: lea     rbx, [rsi+r14]
 * 0000000140AC7008: add     [rsi+7D4h], r9d
 * 0000000140AC700F: mov     rax, rbx
 * 0000000140AC7012: mov     [rbp+0B30h+arg_8], rbx
 * 0000000140AC7019: xor     r8d, r8d
 * 0000000140AC701C: lea     ecx, [r9+2Fh]
 * 0000000140AC7020: lea     edx, [rcx-2Ah]
 * 0000000140AC7023: mov     [rax], r8
 * 0000000140AC7026: add     ecx, 0FFFFFFF8h
 * 0000000140AC7029: add     rax, 8
 * 0000000140AC702D: sub     rdx, r9
 * 0000000140AC7030: jnz     short loc_140AC7023
 * 0000000140AC7032: test    ecx, ecx
 * 0000000140AC7034: jz      short loc_140AC7046
 * 0000000140AC7036: mov     r8d, 0FFFFFFFFh
 * 0000000140AC703C: mov     [rax], dl
 * 0000000140AC703E: add     rax, r9
 * 0000000140AC7041: add     ecx, r8d
 * 0000000140AC7044: jnz     short loc_140AC703C
 * 0000000140AC7046: mov     dword ptr [rbx], 0Bh
 * 0000000140AC704C: mov     r9, r12
 * 0000000140AC704F: mov     [rbx+8], r12
 * 0000000140AC7053: mov     rax, r12
 * 0000000140AC7056: mov     [rbx+10h], r15d
 * 0000000140AC705A: add     [rsi+7F0h], r15d
 * 0000000140AC7061: mov     r10d, [rsi+7DCh]
 * 0000000140AC7068: mov     r14, [rsi+7E0h]
 * 0000000140AC706F: mov     ecx, r15d
 * 0000000140AC7072: add     rcx, r12
 * 0000000140AC7075: cmp     r12, rcx
 * 0000000140AC7078: jnb     short loc_140AC708B
 * 0000000140AC707A: mov     r8d, 40h ; '@'
 * 0000000140AC7080: prefetchnta byte ptr [rax]
 * 0000000140AC7083: add     rax, r8
 * 0000000140AC7086: cmp     rax, rcx
 * 0000000140AC7089: jb      short loc_140AC7080
 * 0000000140AC708B: mov     r11d, r15d
 * 0000000140AC708E: mov     r8, r14
 * 0000000140AC7091: shr     r11d, 7
 * 0000000140AC7095: test    r11d, r11d
 * 0000000140AC7098: jz      short loc_140AC7112
 * 0000000140AC709A: mov     edi, 0FFFFFFFFh
 * 0000000140AC709F: mov     rbx, 7010008004002001h
 * 0000000140AC70A9: mov     r13d, 1
 * 0000000140AC70AF: mov     eax, 8
 * 0000000140AC70B4: xor     r8, [r9]
 * 0000000140AC70B7: mov     ecx, r10d
 * 0000000140AC70BA: rol     r8, cl
 * 0000000140AC70BD: xor     r8, [r9+8]
 * 0000000140AC70C1: add     r9, 10h
 * 0000000140AC70C5: rol     r8, cl
 * 0000000140AC70C8: sub     rax, r13
 * 0000000140AC70CB: jnz     short loc_140AC70B4
 * 0000000140AC70CD: mov     rcx, r9
 * 0000000140AC70D0: sub     rcx, r12
 * 0000000140AC70D3: xor     rcx, r14
 * 0000000140AC70D6: mov     rax, rcx
 * 0000000140AC70D9: rol     rax, 11h
 * 0000000140AC70DD: xor     rcx, rax
 * 0000000140AC70E0: mov     rax, rbx
 * 0000000140AC70E3: mul     rcx
 * 0000000140AC70E6: mov     [rbp+0B30h+var_538], rdx
 * 0000000140AC70ED: xor     edx, eax
 * 0000000140AC70EF: xor     r10d, edx
 * 0000000140AC70F2: and     r10d, 3Fh
 * 0000000140AC70F6: cmovz   r10d, r13d
 * 0000000140AC70FA: add     r11d, edi
 * 0000000140AC70FD: jnz     short loc_140AC70AF
 * 0000000140AC70FF: mov     rbx, [rbp+0B30h+arg_8]
 * 0000000140AC7106: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC710D: mov     r13, [rsp+0C30h+var_BB8]
 * 0000000140AC7112: mov     edx, r15d
 * 0000000140AC7115: mov     r14d, 1
 * 0000000140AC711B: and     edx, 7Fh
 * 0000000140AC711E: cmp     edx, 8
 * 0000000140AC7121: jb      short loc_140AC713E
 * 0000000140AC7123: mov     eax, edx
 * 0000000140AC7125: shr     rax, 3
 * 0000000140AC7129: xor     r8, [r9]
 * 0000000140AC712C: mov     ecx, r10d
 * 0000000140AC712F: rol     r8, cl
 * 0000000140AC7132: add     r9, 8
 * 0000000140AC7136: add     edx, 0FFFFFFF8h
 * 0000000140AC7139: sub     rax, r14
 * 0000000140AC713C: jnz     short loc_140AC7129
 * 0000000140AC713E: xor     r11d, r11d
 * 0000000140AC7141: test    edx, edx
 * 0000000140AC7143: jz      short loc_140AC7165
 * 0000000140AC7145: mov     r13d, 0FFFFFFFFh
 * 0000000140AC714B: movzx   eax, byte ptr [r9]
 * 0000000140AC714F: mov     ecx, r10d
 * 0000000140AC7152: xor     r8, rax
 * 0000000140AC7155: add     r9, r14
 * 0000000140AC7158: rol     r8, cl
 * 0000000140AC715B: add     edx, r13d
 * 0000000140AC715E: jnz     short loc_140AC714B
 * 0000000140AC7160: mov     r13, [rsp+0C30h+var_BB8]
 * 0000000140AC7165: mov     rax, r8
 * 0000000140AC7168: jmp     short loc_140AC716D
 * 0000000140AC716A: xor     r8d, eax
 * 0000000140AC716D: shr     rax, 1Fh
 * 0000000140AC7171: test    rax, rax
 * 0000000140AC7174: jnz     short loc_140AC716A
 * 0000000140AC7176: btr     r8d, 1Fh
 * 0000000140AC717B: mov     [rbx+14h], r8d
 * 0000000140AC717F: mov     rbx, rsi
 * 0000000140AC7182: add     [rsi+7F0h], r15d
 * 0000000140AC7189: mov     dword ptr [rsi+920h], 4
 * 0000000140AC7193: cmp     dword ptr [rbx+920h], 5
 * 0000000140AC719A: jge     loc_140AC73CF
 * 0000000140AC71A0: mov     r14d, [rbx+7ACh]
 * 0000000140AC71A7: mov     r15d, 20h ; ' '
 * 0000000140AC71AD: mov     r12d, [rbx+800h]
 * 0000000140AC71B4: cmp     r12d, 7
 * 0000000140AC71B8: mov     r8d, [rbx+8ECh]
 * 0000000140AC71BF: cmovnz  r15d, r11d
 * 0000000140AC71C3: lea     eax, [r14+30h]
 * 0000000140AC71C7: cmp     eax, [rbx+9E4h]
 * 0000000140AC71CD: jbe     loc_140AC72A9
 * 0000000140AC71D3: mov     edx, eax
 * 0000000140AC71D5: mov     rcx, rbx
 * 0000000140AC71D8: call    sub_140ACFC24
 * 0000000140AC71DD: xor     r11d, r11d
 * 0000000140AC71E0: mov     rsi, rax
 * 0000000140AC71E3: test    rax, rax
 * 0000000140AC71E6: jz      loc_140AC7B21
 * 0000000140AC71EC: mov     ecx, [rbx+958h]
 * 0000000140AC71F2: test    cl, 4
 * 0000000140AC71F5: jnz     loc_140AC72A0
 * 0000000140AC71FB: mov     eax, [rbx+7ACh]
 * 0000000140AC7201: lea     r9d, [r11+1]
 * 0000000140AC7205: mov     r8, [rbx+790h]
 * 0000000140AC720C: and     ecx, 20000000h
 * 0000000140AC7212: neg     ecx
 * 0000000140AC7214: sbb     edx, edx
 * 0000000140AC7216: and     edx, [rbx+8ECh]
 * 0000000140AC721C: cmp     eax, 8
 * 0000000140AC721F: jb      short loc_140AC7236
 * 0000000140AC7221: mov     ecx, eax
 * 0000000140AC7223: shr     rcx, 3
 * 0000000140AC7227: mov     [rbx], r11
 * 0000000140AC722A: add     eax, 0FFFFFFF8h
 * 0000000140AC722D: add     rbx, 8
 * 0000000140AC7231: sub     rcx, r9
 * 0000000140AC7234: jnz     short loc_140AC7227
 * 0000000140AC7236: test    eax, eax
 * 0000000140AC7238: jz      short loc_140AC7249
 * 0000000140AC723A: mov     ecx, 0FFFFFFFFh
 * 0000000140AC723F: mov     [rbx], r11b
 * 0000000140AC7242: add     rbx, r9
 * 0000000140AC7245: add     eax, ecx
 * 0000000140AC7247: jnz     short loc_140AC723F
 * 0000000140AC7249: mov     ebx, [rsi+8ECh]
 * 0000000140AC724F: mov     [rsi+8ECh], edx
 * 0000000140AC7255: cmp     edx, 3
 * 0000000140AC7258: jz      short loc_140AC7288
 * 0000000140AC725A: test    dword ptr [rsi+958h], 10000000h
 * 0000000140AC7264: jnz     short loc_140AC727F
 * 0000000140AC7266: test    edx, edx
 * 0000000140AC7268: jz      short loc_140AC727F
 * 0000000140AC726A: mov     rax, [rsi+218h]
 * 0000000140AC7271: lea     rcx, [r8-8]
 * 0000000140AC7275: mov     rdx, [rcx]
 * 0000000140AC7278: call    j__guard_dispatch_icall_nop
 * 0000000140AC727D: jmp     short loc_140AC7297
 * 0000000140AC727F: mov     rax, [rsi+0F0h]
 * 0000000140AC7286: jmp     short loc_140AC728F
 * 0000000140AC7288: mov     rax, [rsi+358h]
 * 0000000140AC728F: mov     rcx, r8
 * 0000000140AC7292: call    j__guard_dispatch_icall_nop
 * 0000000140AC7297: mov     [rsi+8ECh], ebx
 * 0000000140AC729D: xor     r11d, r11d
 * 0000000140AC72A0: and     dword ptr [rsi+958h], 0FFFFFFFBh
 * 0000000140AC72A7: jmp     short loc_140AC72B2
 * 0000000140AC72A9: mov     rsi, rbx
 * 0000000140AC72AC: mov     [rbx+7ACh], eax
 * 0000000140AC72B2: mov     r8d, 1
 * 0000000140AC72B8: lea     rbx, [rsi+r14]
 * 0000000140AC72BC: add     [rsi+7D4h], r8d
 * 0000000140AC72C3: mov     rax, rbx
 * 0000000140AC72C6: lea     ecx, [r8+2Fh]
 * 0000000140AC72CA: lea     edx, [rcx-2Ah]
 * 0000000140AC72CD: mov     [rax], r11
 * 0000000140AC72D0: add     ecx, 0FFFFFFF8h
 * 0000000140AC72D3: add     rax, 8
 * 0000000140AC72D7: sub     rdx, r8
 * 0000000140AC72DA: jnz     short loc_140AC72CD
 * 0000000140AC72DC: test    ecx, ecx
 * 0000000140AC72DE: jz      short loc_140AC72EF
 * 0000000140AC72E0: mov     edx, 0FFFFFFFFh
 * 0000000140AC72E5: mov     [rax], r11b
 * 0000000140AC72E8: add     rax, r8
 * 0000000140AC72EB: add     ecx, edx
 * 0000000140AC72ED: jnz     short loc_140AC72E5
 * 0000000140AC72EF: mov     [rbx], r15d
 * 0000000140AC72F2: mov     r14d, 20h ; ' '
 * 0000000140AC72F8: mov     [rbx+8], r13
 * 0000000140AC72FC: cmp     r12d, 7
 * 0000000140AC7300: jnz     short loc_140AC7314
 * 0000000140AC7302: lea     r9, [rbx+18h]
 * 0000000140AC7306: mov     r8d, r14d
 * 0000000140AC7309: mov     rdx, r13
 * 0000000140AC730C: mov     rcx, rsi
 * 0000000140AC730F: call    sub_1403F966C
 * 0000000140AC7314: mov     rcx, [rsp+0C30h+var_BD8]
 * 0000000140AC7319: mov     r8, r13
 * 0000000140AC731C: mov     [rbx+10h], r14d
 * 0000000140AC7320: add     rcx, 40h ; '@'
 * 0000000140AC7324: add     [rsi+7F0h], r14d
 * 0000000140AC732B: mov     rax, r13
 * 0000000140AC732E: mov     r11d, [rsi+7DCh]
 * 0000000140AC7335: mov     rdx, [rsi+7E0h]
 * 0000000140AC733C: cmp     r13, rcx
 * 0000000140AC733F: jnb     short loc_140AC7352
 * 0000000140AC7341: mov     r9d, 40h ; '@'
 * 0000000140AC7347: prefetchnta byte ptr [rax]
 * 0000000140AC734A: add     rax, r9
 * 0000000140AC734D: cmp     rax, rcx
 * 0000000140AC7350: jb      short loc_140AC7347
 * 0000000140AC7352: mov     r10d, 4
 * 0000000140AC7358: mov     r9d, r14d
 * 0000000140AC735B: lea     r12d, [r10-3]
 * 0000000140AC735F: xor     rdx, [r8]
 * 0000000140AC7362: mov     ecx, r11d
 * 0000000140AC7365: rol     rdx, cl
 * 0000000140AC7368: add     r8, 8
 * 0000000140AC736C: add     r9d, 0FFFFFFF8h
 * 0000000140AC7370: sub     r10, r12
 * 0000000140AC7373: jnz     short loc_140AC735F
 * 0000000140AC7375: test    r9d, r9d
 * 0000000140AC7378: jz      short loc_140AC739B
 * 0000000140AC737A: mov     edi, 0FFFFFFFFh
 * 0000000140AC737F: movzx   eax, byte ptr [r8]
 * 0000000140AC7383: mov     ecx, r11d
 * 0000000140AC7386: xor     rdx, rax
 * 0000000140AC7389: add     r8, r12
 * 0000000140AC738C: rol     rdx, cl
 * 0000000140AC738F: add     r9d, edi
 * 0000000140AC7392: jnz     short loc_140AC737F
 * 0000000140AC7394: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC739B: mov     rax, rdx
 * 0000000140AC739E: shr     rax, 1Fh
 * 0000000140AC73A2: xor     r11d, r11d
 * 0000000140AC73A5: jmp     short loc_140AC73AD
 * 0000000140AC73A7: xor     edx, eax
 * 0000000140AC73A9: shr     rax, 1Fh
 * 0000000140AC73AD: test    rax, rax
 * 0000000140AC73B0: jnz     short loc_140AC73A7
 * 0000000140AC73B2: btr     edx, 1Fh
 * 0000000140AC73B6: mov     [rbx+14h], edx
 * 0000000140AC73B9: mov     rbx, rsi
 * 0000000140AC73BC: add     [rsi+7F0h], r14d
 * 0000000140AC73C3: mov     dword ptr [rsi+920h], 5
 * 0000000140AC73CD: jmp     short loc_140AC73D5
 * 0000000140AC73CF: mov     r12d, 1
 * 0000000140AC73D5: mov     eax, [rbx+920h]
 * 0000000140AC73DB: mov     r13d, 6
 * 0000000140AC73E1: mov     [rbp+0B30h+var_B78], rbx
 * 0000000140AC73E5: mov     r14, rbx
 * 0000000140AC73E8: cmp     eax, r13d
 * 0000000140AC73EB: jge     loc_140AC777E
 * 0000000140AC73F1: test    dword ptr [rbx+958h], 40000000h
 * 0000000140AC73FB: mov     r13d, r11d
 * 0000000140AC73FE: mov     r15, [rbp+0B30h+var_B98]
 * 0000000140AC7402: mov     rsi, rbx
 * 0000000140AC7405: mov     rax, [r15+20h]
 * 0000000140AC7409: mov     [rbp+0B30h+arg_8], rax
 * 0000000140AC7410: jnz     loc_140AC776C
 * 0000000140AC7416: mov     r14d, r11d
 * 0000000140AC7419: mov     [rbp+0B30h+var_B78], rbx
 * 0000000140AC741D: cmp     [r15+30h], r11d
 * 0000000140AC7421: jbe     loc_140AC776C
 * 0000000140AC7427: mov     rdi, rax
 * 0000000140AC742A: mov     eax, r14d
 * 0000000140AC742D: lea     rdx, [rbp+0B30h+var_7D8]
 * 0000000140AC7434: xor     r8d, r8d
 * 0000000140AC7437: movsxd  rcx, dword ptr [rdi+rax*4]
 * 0000000140AC743B: mov     rax, [rbx+250h]
 * 0000000140AC7442: sar     rcx, 4
 * 0000000140AC7446: add     rcx, rdi
 * 0000000140AC7449: call    j__guard_dispatch_icall_nop
 * 0000000140AC744E: xor     r11d, r11d
 * 0000000140AC7451: test    rax, rax
 * 0000000140AC7454: jnz     short loc_140AC7459
 * 0000000140AC7456: add     r13d, r12d
 * 0000000140AC7459: add     r14d, r12d
 * 0000000140AC745C: cmp     r14d, [r15+30h]
 * 0000000140AC7460: jb      short loc_140AC742A
 * 0000000140AC7462: mov     [rbp+0B30h+var_B78], rbx
 * 0000000140AC7466: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC746D: test    r13d, r13d
 * 0000000140AC7470: jz      loc_140AC776C
 * 0000000140AC7476: mov     r14d, [rbx+7ACh]
 * 0000000140AC747D: mov     ecx, r13d
 * 0000000140AC7480: mov     r8d, [rbx+8ECh]
 * 0000000140AC7487: shl     ecx, 4
 * 0000000140AC748A: add     ecx, 30h ; '0'
 * 0000000140AC748D: add     ecx, r14d
 * 0000000140AC7490: cmp     ecx, [rbx+9E4h]
 * 0000000140AC7496: jbe     loc_140AC7572
 * 0000000140AC749C: mov     edx, ecx
 * 0000000140AC749E: mov     rcx, rbx
 * 0000000140AC74A1: call    sub_140ACFC24
 * 0000000140AC74A6: xor     r11d, r11d
 * 0000000140AC74A9: mov     [rbp+0B30h+var_B78], rax
 * 0000000140AC74AD: mov     rsi, rax
 * 0000000140AC74B0: test    rax, rax
 * 0000000140AC74B3: jz      loc_140AC7B21
 * 0000000140AC74B9: mov     ecx, [rbx+958h]
 * 0000000140AC74BF: test    cl, 4
 * 0000000140AC74C2: jnz     loc_140AC7569
 * 0000000140AC74C8: mov     eax, [rbx+7ACh]
 * 0000000140AC74CE: and     ecx, 20000000h
 * 0000000140AC74D4: mov     r8, [rbx+790h]
 * 0000000140AC74DB: neg     ecx
 * 0000000140AC74DD: sbb     edx, edx
 * 0000000140AC74DF: and     edx, [rbx+8ECh]
 * 0000000140AC74E5: cmp     eax, 8
 * 0000000140AC74E8: jb      short loc_140AC74FF
 * 0000000140AC74EA: mov     ecx, eax
 * 0000000140AC74EC: shr     rcx, 3
 * 0000000140AC74F0: mov     [rbx], r11
 * 0000000140AC74F3: add     eax, 0FFFFFFF8h
 * 0000000140AC74F6: add     rbx, 8
 * 0000000140AC74FA: sub     rcx, r12
 * 0000000140AC74FD: jnz     short loc_140AC74F0
 * 0000000140AC74FF: test    eax, eax
 * 0000000140AC7501: jz      short loc_140AC7512
 * 0000000140AC7503: mov     ecx, 0FFFFFFFFh
 * 0000000140AC7508: mov     [rbx], r11b
 * 0000000140AC750B: add     rbx, r12
 * 0000000140AC750E: add     eax, ecx
 * 0000000140AC7510: jnz     short loc_140AC7508
 * 0000000140AC7512: mov     ebx, [rsi+8ECh]
 * 0000000140AC7518: mov     [rsi+8ECh], edx
 * 0000000140AC751E: cmp     edx, 3
 * 0000000140AC7521: jz      short loc_140AC7551
 * 0000000140AC7523: test    dword ptr [rsi+958h], 10000000h
 * 0000000140AC752D: jnz     short loc_140AC7548
 * 0000000140AC752F: test    edx, edx
 * 0000000140AC7531: jz      short loc_140AC7548
 * 0000000140AC7533: mov     rax, [rsi+218h]
 * 0000000140AC753A: lea     rcx, [r8-8]
 * 0000000140AC753E: mov     rdx, [rcx]
 * 0000000140AC7541: call    j__guard_dispatch_icall_nop
 * 0000000140AC7546: jmp     short loc_140AC7560
 * 0000000140AC7548: mov     rax, [rsi+0F0h]
 * 0000000140AC754F: jmp     short loc_140AC7558
 * 0000000140AC7551: mov     rax, [rsi+358h]
 * 0000000140AC7558: mov     rcx, r8
 * 0000000140AC755B: call    j__guard_dispatch_icall_nop
 * 0000000140AC7560: mov     [rsi+8ECh], ebx
 * 0000000140AC7566: xor     r11d, r11d
 * 0000000140AC7569: and     dword ptr [rsi+958h], 0FFFFFFFBh
 * 0000000140AC7570: jmp     short loc_140AC757C
 * 0000000140AC7572: mov     [rbp+0B30h+var_B78], rbx
 * 0000000140AC7576: mov     [rbx+7ACh], ecx
 * 0000000140AC757C: add     [rsi+7D4h], r12d
 * 0000000140AC7583: lea     rbx, [rsi+r14]
 * 0000000140AC7587: mov     ecx, 30h ; '0'
 * 0000000140AC758C: mov     rax, rbx
 * 0000000140AC758F: lea     edx, [rcx-2Ah]
 * 0000000140AC7592: mov     [rax], r11
 * 0000000140AC7595: add     ecx, 0FFFFFFF8h
 * 0000000140AC7598: add     rax, 8
 * 0000000140AC759C: sub     rdx, r12
 * 0000000140AC759F: jnz     short loc_140AC7592
 * 0000000140AC75A1: test    ecx, ecx
 * 0000000140AC75A3: jz      short loc_140AC75B4
 * 0000000140AC75A5: mov     edx, 0FFFFFFFFh
 * 0000000140AC75AA: mov     [rax], r11b
 * 0000000140AC75AD: add     rax, r12
 * 0000000140AC75B0: add     ecx, edx
 * 0000000140AC75B2: jnz     short loc_140AC75AA
 * 0000000140AC75B4: mov     dword ptr [rbx], 0Ah
 * 0000000140AC75BA: mov     [rbx+8], r11
 * 0000000140AC75BE: mov     [rbx+10h], r11d
 * 0000000140AC75C2: mov     rcx, [rsi+7E0h]
 * 0000000140AC75C9: mov     rax, rcx
 * 0000000140AC75CC: jmp     short loc_140AC75D0
 * 0000000140AC75CE: xor     ecx, eax
 * 0000000140AC75D0: shr     rax, 1Fh
 * 0000000140AC75D4: test    rax, rax
 * 0000000140AC75D7: jnz     short loc_140AC75CE
 * 0000000140AC75D9: btr     ecx, 1Fh
 * 0000000140AC75DD: lea     r15, [rbx+30h]
 * 0000000140AC75E1: mov     [rbx+14h], ecx
 * 0000000140AC75E4: mov     rcx, [rbp+0B30h+var_B98]
 * 0000000140AC75E8: mov     [rbx+18h], r12d
 * 0000000140AC75EC: mov     r12d, r11d
 * 0000000140AC75EF: mov     [rbx+1Ch], r13d
 * 0000000140AC75F3: cmp     [rcx+30h], r11d
 * 0000000140AC75F7: jbe     loc_140AC76F1
 * 0000000140AC75FD: mov     rcx, [rbp+0B30h+arg_8]
 * 0000000140AC7604: lea     rdx, [rbp+0B30h+var_7D8]
 * 0000000140AC760B: mov     eax, r12d
 * 0000000140AC760E: xor     r8d, r8d
 * 0000000140AC7611: movsxd  r14, dword ptr [rcx+rax*4]
 * 0000000140AC7615: mov     rax, [rsi+250h]
 * 0000000140AC761C: sar     r14, 4
 * 0000000140AC7620: add     r14, rcx
 * 0000000140AC7623: mov     rcx, r14
 * 0000000140AC7626: call    j__guard_dispatch_icall_nop
 * 0000000140AC762B: xor     r11d, r11d
 * 0000000140AC762E: test    rax, rax
 * 0000000140AC7631: jnz     loc_140AC76D4
 * 0000000140AC7637: lea     r11d, [rax+4]
 * 0000000140AC763B: mov     r8, r14
 * 0000000140AC763E: add     [rsi+7F0h], r11d
 * 0000000140AC7645: lea     rcx, [r14+4]
 * 0000000140AC7649: mov     r10d, [rsi+7DCh]
 * 0000000140AC7650: mov     rax, r14
 * 0000000140AC7653: mov     rdx, [rsi+7E0h]
 * 0000000140AC765A: cmp     r14, rcx
 * 0000000140AC765D: jnb     short loc_140AC766E
 * 0000000140AC765F: lea     r9d, [r11+3Ch]
 * 0000000140AC7663: prefetchnta byte ptr [rax]
 * 0000000140AC7666: add     rax, r9
 * 0000000140AC7669: cmp     rax, rcx
 * 0000000140AC766C: jb      short loc_140AC7663
 * 0000000140AC766E: mov     r9d, r11d
 * 0000000140AC7671: mov     esi, 1
 * 0000000140AC7676: mov     edi, 0FFFFFFFFh
 * 0000000140AC767B: movzx   eax, byte ptr [r8]
 * 0000000140AC767F: mov     ecx, r10d
 * 0000000140AC7682: xor     rdx, rax
 * 0000000140AC7685: add     r8, rsi
 * 0000000140AC7688: rol     rdx, cl
 * 0000000140AC768B: add     r9d, edi
 * 0000000140AC768E: jnz     short loc_140AC767B
 * 0000000140AC7690: mov     rsi, [rbp+0B30h+var_B78]
 * 0000000140AC7694: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC769B: mov     rax, rdx
 * 0000000140AC769E: jmp     short loc_140AC76A2
 * 0000000140AC76A0: xor     edx, eax
 * 0000000140AC76A2: shr     rax, 1Fh
 * 0000000140AC76A6: test    rax, rax
 * 0000000140AC76A9: jnz     short loc_140AC76A0
 * 0000000140AC76AB: mov     eax, [r15]
 * 0000000140AC76AE: xor     eax, edx
 * 0000000140AC76B0: btr     eax, 1Fh
 * 0000000140AC76B4: xor     [r15], eax
 * 0000000140AC76B7: mov     eax, 0FFFFFFFFh
 * 0000000140AC76BC: mov     [r15+4], r11d
 * 0000000140AC76C0: mov     [r15+8], r14
 * 0000000140AC76C4: add     r15, 10h
 * 0000000140AC76C8: add     r13d, eax
 * 0000000140AC76CB: jz      loc_140AC7769
 * 0000000140AC76D1: xor     r11d, r11d
 * 0000000140AC76D4: mov     rax, [rbp+0B30h+var_B98]
 * 0000000140AC76D8: mov     edx, 1
 * 0000000140AC76DD: add     r12d, edx
 * 0000000140AC76E0: cmp     r12d, [rax+30h]
 * 0000000140AC76E4: jb      loc_140AC75FD
 * 0000000140AC76EA: test    r13d, r13d
 * 0000000140AC76ED: jz      short loc_140AC776C
 * 0000000140AC76EF: jmp     short loc_140AC76F6
 * 0000000140AC76F1: mov     edx, 1
 * 0000000140AC76F6: cmp     [rsi+8C0h], r11d
 * 0000000140AC76FD: jnz     short loc_140AC7761
 * 0000000140AC76FF: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC7709: mov     rcx, 0B3B74BDEE4453415h
 * 0000000140AC7713: add     rax, rsi
 * 0000000140AC7716: add     rcx, rbx
 * 0000000140AC7719: mov     [rsi+8C8h], rax
 * 0000000140AC7720: mov     rax, rbx
 * 0000000140AC7723: neg     rax
 * 0000000140AC7726: sbb     rax, rax
 * 0000000140AC7729: and     rax, rcx
 * 0000000140AC772C: mov     [rsi+8D0h], rax
 * 0000000140AC7733: test    rbx, rbx
 * 0000000140AC7736: jz      short loc_140AC773D
 * 0000000140AC7738: movsxd  rax, dword ptr [rbx]
 * 0000000140AC773B: jmp     short loc_140AC7740
 * 0000000140AC773D: mov     rax, r11
 * 0000000140AC7740: mov     [rsi+8D8h], rax
 * 0000000140AC7747: mov     rcx, rsi
 * 0000000140AC774A: mov     [rsi+8E0h], r11
 * 0000000140AC7751: mov     [rsi+8C0h], edx
 * 0000000140AC7757: xor     edx, edx
 * 0000000140AC7759: call    sub_140AD049C
 * 0000000140AC775E: xor     r11d, r11d
 * 0000000140AC7761: mov     rbx, rsi
 * 0000000140AC7764: jmp     loc_140AC7B21
 * 0000000140AC7769: xor     r11d, r11d
 * 0000000140AC776C: mov     r13d, 6
 * 0000000140AC7772: mov     r14, rsi
 * 0000000140AC7775: mov     [rsi+920h], r13d
 * 0000000140AC777C: jmp     short loc_140AC7787
 * 0000000140AC777E: cmp     eax, 7
 * 0000000140AC7781: jge     loc_140AC7BC6
 * 0000000140AC7787: test    dword ptr [r14+958h], 40000000h
 * 0000000140AC7792: mov     r15d, r11d
 * 0000000140AC7795: mov     rdx, [rsp+0C30h+var_BB8]
 * 0000000140AC779A: mov     rax, [rdx]
 * 0000000140AC779D: mov     [rbp+0B30h+var_B98], rax
 * 0000000140AC77A1: jnz     loc_140AC7BB8
 * 0000000140AC77A7: mov     rax, [rsp+0C30h+var_BD8]
 * 0000000140AC77AC: mov     ebx, r11d
 * 0000000140AC77AF: cmp     [rax+30h], r11d
 * 0000000140AC77B3: jbe     loc_140AC7BB8
 * 0000000140AC77B9: mov     rdi, [rbp+0B30h+var_B98]
 * 0000000140AC77BD: mov     rsi, rax
 * 0000000140AC77C0: mov     eax, ebx
 * 0000000140AC77C2: lea     rdx, [rbp+0B30h+var_848]
 * 0000000140AC77C9: xor     r8d, r8d
 * 0000000140AC77CC: movsxd  rcx, dword ptr [rdi+rax*4]
 * 0000000140AC77D0: mov     rax, [r14+250h]
 * 0000000140AC77D7: sar     rcx, 4
 * 0000000140AC77DB: add     rcx, rdi
 * 0000000140AC77DE: call    j__guard_dispatch_icall_nop
 * 0000000140AC77E3: xor     r11d, r11d
 * 0000000140AC77E6: test    rax, rax
 * 0000000140AC77E9: lea     eax, [r11+1]
 * 0000000140AC77ED: jnz     short loc_140AC77F2
 * 0000000140AC77EF: add     r15d, eax
 * 0000000140AC77F2: add     ebx, eax
 * 0000000140AC77F4: cmp     ebx, [rsi+30h]
 * 0000000140AC77F7: jb      short loc_140AC77C0
 * 0000000140AC77F9: mov     rsi, [rbp+0B30h+var_B78]
 * 0000000140AC77FD: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC7804: mov     dword ptr [rbp+0B30h+arg_8], r15d
 * 0000000140AC780B: test    r15d, r15d
 * 0000000140AC780E: jz      loc_140AC7BB8
 * 0000000140AC7814: mov     r12d, [r14+7ACh]
 * 0000000140AC781B: mov     ecx, r15d
 * 0000000140AC781E: mov     r8d, [r14+8ECh]
 * 0000000140AC7825: shl     ecx, 4
 * 0000000140AC7828: add     ecx, 30h ; '0'
 * 0000000140AC782B: add     ecx, r12d
 * 0000000140AC782E: cmp     ecx, [r14+9E4h]
 * 0000000140AC7835: jbe     loc_140AC7914
 * 0000000140AC783B: mov     edx, ecx
 * 0000000140AC783D: mov     rcx, r14
 * 0000000140AC7840: call    sub_140ACFC24
 * 0000000140AC7845: xor     r11d, r11d
 * 0000000140AC7848: mov     rbx, rax
 * 0000000140AC784B: test    rax, rax
 * 0000000140AC784E: jz      loc_140AC7761
 * 0000000140AC7854: mov     ecx, [r14+958h]
 * 0000000140AC785B: test    cl, 4
 * 0000000140AC785E: jnz     loc_140AC790B
 * 0000000140AC7864: mov     eax, [r14+7ACh]
 * 0000000140AC786B: lea     r9d, [r11+1]
 * 0000000140AC786F: mov     r8, [r14+790h]
 * 0000000140AC7876: and     ecx, 20000000h
 * 0000000140AC787C: neg     ecx
 * 0000000140AC787E: sbb     edx, edx
 * 0000000140AC7880: and     edx, [r14+8ECh]
 * 0000000140AC7887: cmp     eax, 8
 * 0000000140AC788A: jb      short loc_140AC78A1
 * 0000000140AC788C: mov     ecx, eax
 * 0000000140AC788E: shr     rcx, 3
 * 0000000140AC7892: mov     [r14], r11
 * 0000000140AC7895: add     eax, 0FFFFFFF8h
 * 0000000140AC7898: add     r14, 8
 * 0000000140AC789C: sub     rcx, r9
 * 0000000140AC789F: jnz     short loc_140AC7892
 * 0000000140AC78A1: test    eax, eax
 * 0000000140AC78A3: jz      short loc_140AC78B4
 * 0000000140AC78A5: mov     ecx, 0FFFFFFFFh
 * 0000000140AC78AA: mov     [r14], r11b
 * 0000000140AC78AD: add     r14, r9
 * 0000000140AC78B0: add     eax, ecx
 * 0000000140AC78B2: jnz     short loc_140AC78AA
 * 0000000140AC78B4: mov     esi, [rbx+8ECh]
 * 0000000140AC78BA: mov     [rbx+8ECh], edx
 * 0000000140AC78C0: cmp     edx, 3
 * 0000000140AC78C3: jz      short loc_140AC78F3
 * 0000000140AC78C5: test    dword ptr [rbx+958h], 10000000h
 * 0000000140AC78CF: jnz     short loc_140AC78EA
 * 0000000140AC78D1: test    edx, edx
 * 0000000140AC78D3: jz      short loc_140AC78EA
 * 0000000140AC78D5: mov     rax, [rbx+218h]
 * 0000000140AC78DC: lea     rcx, [r8-8]
 * 0000000140AC78E0: mov     rdx, [rcx]
 * 0000000140AC78E3: call    j__guard_dispatch_icall_nop
 * 0000000140AC78E8: jmp     short loc_140AC7902
 * 0000000140AC78EA: mov     rax, [rbx+0F0h]
 * 0000000140AC78F1: jmp     short loc_140AC78FA
 * 0000000140AC78F3: mov     rax, [rbx+358h]
 * 0000000140AC78FA: mov     rcx, r8
 * 0000000140AC78FD: call    j__guard_dispatch_icall_nop
 * 0000000140AC7902: mov     [rbx+8ECh], esi
 * 0000000140AC7908: xor     r11d, r11d
 * 0000000140AC790B: and     dword ptr [rbx+958h], 0FFFFFFFBh
 * 0000000140AC7912: jmp     short loc_140AC791E
 * 0000000140AC7914: mov     rbx, r14
 * 0000000140AC7917: mov     [r14+7ACh], ecx
 * 0000000140AC791E: mov     r8d, 1
 * 0000000140AC7924: lea     rsi, [rbx+r12]
 * 0000000140AC7928: add     [rbx+7D4h], r8d
 * 0000000140AC792F: mov     rax, rsi
 * 0000000140AC7932: mov     [rsp+0C30h+var_BC8], rsi
 * 0000000140AC7937: mov     rdx, r13
 * 0000000140AC793A: lea     ecx, [r8+2Fh]
 * 0000000140AC793E: mov     [rax], r11
 * 0000000140AC7941: add     ecx, 0FFFFFFF8h
 * 0000000140AC7944: add     rax, 8
 * 0000000140AC7948: sub     rdx, r8
 * 0000000140AC794B: jnz     short loc_140AC793E
 * 0000000140AC794D: test    ecx, ecx
 * 0000000140AC794F: jz      short loc_140AC7960
 * 0000000140AC7951: mov     edx, 0FFFFFFFFh
 * 0000000140AC7956: mov     [rax], r11b
 * 0000000140AC7959: add     rax, r8
 * 0000000140AC795C: add     ecx, edx
 * 0000000140AC795E: jnz     short loc_140AC7956
 * 0000000140AC7960: mov     dword ptr [rsi], 0Ah
 * 0000000140AC7966: mov     [rsi+8], r11
 * 0000000140AC796A: mov     [rsi+10h], r11d
 * 0000000140AC796E: mov     rcx, [rbx+7E0h]
 * 0000000140AC7975: mov     rax, rcx
 * 0000000140AC7978: jmp     short loc_140AC797C
 * 0000000140AC797A: xor     ecx, eax
 * 0000000140AC797C: shr     rax, 1Fh
 * 0000000140AC7980: test    rax, rax
 * 0000000140AC7983: jnz     short loc_140AC797A
 * 0000000140AC7985: mov     rax, [rsp+0C30h+var_BD8]
 * 0000000140AC798A: lea     r13, [rsi+30h]
 * 0000000140AC798E: btr     ecx, 1Fh
 * 0000000140AC7992: mov     r14, rbx
 * 0000000140AC7995: mov     [rsi+14h], ecx
 * 0000000140AC7998: mov     r12d, r11d
 * 0000000140AC799B: mov     [rsi+18h], r8d
 * 0000000140AC799F: mov     [rsi+1Ch], r15d
 * 0000000140AC79A3: cmp     [rax+30h], r11d
 * 0000000140AC79A7: jbe     loc_140AC7AAD
 * 0000000140AC79AD: mov     rcx, [rbp+0B30h+var_B98]
 * 0000000140AC79B1: lea     rdx, [rbp+0B30h+var_848]
 * 0000000140AC79B8: mov     eax, r12d
 * 0000000140AC79BB: xor     r8d, r8d
 * 0000000140AC79BE: movsxd  r15, dword ptr [rcx+rax*4]
 * 0000000140AC79C2: mov     rax, [rbx+250h]
 * 0000000140AC79C9: sar     r15, 4
 * 0000000140AC79CD: add     r15, rcx
 * 0000000140AC79D0: mov     rcx, r15
 * 0000000140AC79D3: call    j__guard_dispatch_icall_nop
 * 0000000140AC79D8: xor     r11d, r11d
 * 0000000140AC79DB: test    rax, rax
 * 0000000140AC79DE: jnz     loc_140AC7AF4
 * 0000000140AC79E4: lea     r11d, [rax+4]
 * 0000000140AC79E8: mov     r8, r15
 * 0000000140AC79EB: add     [rbx+7F0h], r11d
 * 0000000140AC79F2: lea     rcx, [r15+4]
 * 0000000140AC79F6: mov     r10d, [rbx+7DCh]
 * 0000000140AC79FD: mov     rax, r15
 * 0000000140AC7A00: mov     rdx, [rbx+7E0h]
 * 0000000140AC7A07: cmp     r15, rcx
 * 0000000140AC7A0A: jnb     short loc_140AC7A1B
 * 0000000140AC7A0C: lea     r9d, [r11+3Ch]
 * 0000000140AC7A10: prefetchnta byte ptr [rax]
 * 0000000140AC7A13: add     rax, r9
 * 0000000140AC7A16: cmp     rax, rcx
 * 0000000140AC7A19: jb      short loc_140AC7A10
 * 0000000140AC7A1B: mov     r9d, r11d
 * 0000000140AC7A1E: mov     edi, 1
 * 0000000140AC7A23: mov     esi, 0FFFFFFFFh
 * 0000000140AC7A28: movzx   eax, byte ptr [r8]
 * 0000000140AC7A2C: mov     ecx, r10d
 * 0000000140AC7A2F: xor     rdx, rax
 * 0000000140AC7A32: add     r8, rdi
 * 0000000140AC7A35: rol     rdx, cl
 * 0000000140AC7A38: add     r9d, esi
 * 0000000140AC7A3B: jnz     short loc_140AC7A28
 * 0000000140AC7A3D: mov     rsi, [rsp+0C30h+var_BC8]
 * 0000000140AC7A42: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC7A49: mov     rax, rdx
 * 0000000140AC7A4C: jmp     short loc_140AC7A50
 * 0000000140AC7A4E: xor     edx, eax
 * 0000000140AC7A50: shr     rax, 1Fh
 * 0000000140AC7A54: test    rax, rax
 * 0000000140AC7A57: jnz     short loc_140AC7A4E
 * 0000000140AC7A59: xor     edx, [r13+0]
 * 0000000140AC7A5D: mov     ecx, 0FFFFFFFFh
 * 0000000140AC7A62: mov     eax, dword ptr [rbp+0B30h+arg_8]
 * 0000000140AC7A68: btr     edx, 1Fh
 * 0000000140AC7A6C: xor     [r13+0], edx
 * 0000000140AC7A70: mov     [r13+4], r11d
 * 0000000140AC7A74: mov     [r13+8], r15
 * 0000000140AC7A78: add     r13, 10h
 * 0000000140AC7A7C: add     eax, ecx
 * 0000000140AC7A7E: mov     dword ptr [rbp+0B30h+arg_8], eax
 * 0000000140AC7A84: jz      loc_140AC7BB8
 * 0000000140AC7A8A: xor     r11d, r11d
 * 0000000140AC7A8D: mov     rcx, [rsp+0C30h+var_BD8]
 * 0000000140AC7A92: mov     r8d, 1
 * 0000000140AC7A98: add     r12d, r8d
 * 0000000140AC7A9B: cmp     r12d, [rcx+30h]
 * 0000000140AC7A9F: jb      loc_140AC79AD
 * 0000000140AC7AA5: test    eax, eax
 * 0000000140AC7AA7: jz      loc_140AC7BB8
 * 0000000140AC7AAD: cmp     [rbx+8C0h], r11d
 * 0000000140AC7AB4: jnz     short loc_140AC7B21
 * 0000000140AC7AB6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC7AC0: mov     rcx, 0B3B74BDEE4453415h
 * 0000000140AC7ACA: add     rax, rbx
 * 0000000140AC7ACD: add     rcx, rsi
 * 0000000140AC7AD0: mov     [rbx+8C8h], rax
 * 0000000140AC7AD7: mov     rax, rsi
 * 0000000140AC7ADA: neg     rax
 * 0000000140AC7ADD: sbb     rax, rax
 * 0000000140AC7AE0: and     rax, rcx
 * 0000000140AC7AE3: mov     [rbx+8D0h], rax
 * 0000000140AC7AEA: test    rsi, rsi
 * 0000000140AC7AED: jz      short loc_140AC7AFC
 * 0000000140AC7AEF: movsxd  rax, dword ptr [rsi]
 * 0000000140AC7AF2: jmp     short loc_140AC7AFF
 * 0000000140AC7AF4: mov     eax, dword ptr [rbp+0B30h+arg_8]
 * 0000000140AC7AFA: jmp     short loc_140AC7A8D
 * 0000000140AC7AFC: mov     rax, r11
 * 0000000140AC7AFF: mov     [rbx+8D8h], rax
 * 0000000140AC7B06: xor     edx, edx
 * 0000000140AC7B08: mov     [rbx+8E0h], r11
 * 0000000140AC7B0F: mov     rcx, rbx
 * 0000000140AC7B12: mov     [rbx+8C0h], r8d
 * 0000000140AC7B19: call    sub_140AD049C
 * 0000000140AC7B1E: xor     r11d, r11d
 * 0000000140AC7B21: mov     rsi, rbx
 * 0000000140AC7B24: mov     r15d, 1
 * 0000000140AC7B2A: mov     r12d, 0FFFFFFFFh
 * 0000000140AC7B30: bt      dword ptr [rbx+958h], 0Fh
 * 0000000140AC7B38: jb      short loc_140AC7B47
 * 0000000140AC7B3A: cmp     [rbx+8C0h], r11d
 * 0000000140AC7B41: jnz     loc_140AC5CA3
 * 0000000140AC7B47: mov     r14, [rbx+948h]
 * 0000000140AC7B4E: lea     rdx, [rbp+0B30h+var_6C0]
 * 0000000140AC7B55: mov     [rbx+948h], r11
 * 0000000140AC7B5C: mov     rcx, r14
 * 0000000140AC7B5F: mov     rax, [rbx+288h]
 * 0000000140AC7B66: call    j__guard_dispatch_icall_nop
 * 0000000140AC7B6B: mov     eax, [rbx+958h]
 * 0000000140AC7B71: test    r15b, al
 * 0000000140AC7B74: jz      loc_140ACA2F3
 * 0000000140AC7B7A: and     eax, 0FFFFFFFEh
 * 0000000140AC7B7D: mov     rcx, r14
 * 0000000140AC7B80: mov     [rbx+958h], eax
 * 0000000140AC7B86: mov     rax, [rbx+270h]
 * 0000000140AC7B8D: call    j__guard_dispatch_icall_nop
 * 0000000140AC7B92: mov     r14, rax
 * 0000000140AC7B95: test    rax, rax
 * 0000000140AC7B98: jz      loc_140ACA2E7
 * 0000000140AC7B9E: mov     rax, [rbx+290h]
 * 0000000140AC7BA5: mov     rcx, r14
 * 0000000140AC7BA8: call    j__guard_dispatch_icall_nop
 * 0000000140AC7BAD: mov     [rbx+938h], eax
 * 0000000140AC7BB3: jmp     loc_140ACA2FC
 * 0000000140AC7BB8: mov     rbx, r14
 * 0000000140AC7BBB: mov     dword ptr [r14+920h], 7
 * 0000000140AC7BC6: mov     r14d, 0FFFFFFFFh
 * 0000000140AC7BCC: mov     rax, [rbx+548h]
 * 0000000140AC7BD3: lea     rdx, [rbp+0B30h+var_218]
 * 0000000140AC7BDA: mov     rsi, rbx
 * 0000000140AC7BDD: mov     [rbp+0B30h+var_B18], rbx
 * 0000000140AC7BE1: mov     rcx, [rax+20h]
 * 0000000140AC7BE5: mov     rax, [rbx+1F0h]
 * 0000000140AC7BEC: mov     [rbp+0B30h+var_B98], rcx
 * 0000000140AC7BF0: call    j__guard_dispatch_icall_nop
 * 0000000140AC7BF5: mov     r13d, [rbp+0B30h+var_204]
 * 0000000140AC7BFC: mov     r12, rax
 * 0000000140AC7BFF: mov     [rbp+0B30h+var_B68], rax
 * 0000000140AC7C03: xor     r11d, r11d
 * 0000000140AC7C06: mov     rax, [rbp+0B30h+var_210]
 * 0000000140AC7C0D: mov     [rbp+0B30h+var_BB0], r13d
 * 0000000140AC7C11: mov     [rbp+0B30h+var_B80], rax
 * 0000000140AC7C15: test    rax, rax
 * 0000000140AC7C18: jnz     short loc_140AC7C2F
 * 0000000140AC7C1A: test    dword ptr [rbx+958h], 200000h
 * 0000000140AC7C24: jz      loc_140ACCAC2
 * 0000000140AC7C2A: jmp     loc_140AC7B24
 * 0000000140AC7C2F: mov     ecx, 4
 * 0000000140AC7C34: mov     [rbp+0B30h+var_A50], r11
 * 0000000140AC7C3B: lea     rax, [rbp+0B30h+var_A48]
 * 0000000140AC7C42: lea     r15d, [rcx-3]
 * 0000000140AC7C46: mov     [rax], r11b
 * 0000000140AC7C49: add     rax, r15
 * 0000000140AC7C4C: add     ecx, r14d
 * 0000000140AC7C4F: jnz     short loc_140AC7C46
 * 0000000140AC7C51: mov     r10d, r11d
 * 0000000140AC7C54: mov     dword ptr [rbp+0B30h+arg_8], r11d
 * 0000000140AC7C5B: cmp     [rbx+7D4h], r11d
 * 0000000140AC7C62: jbe     loc_140AC7E78
 * 0000000140AC7C68: mov     ecx, [rbp+0B30h+var_A48]
 * 0000000140AC7C6E: mov     r9d, dword ptr [rbp+0B30h+var_A50+4]
 * 0000000140AC7C75: mov     r11d, dword ptr [rbp+0B30h+var_A50]
 * 0000000140AC7C7C: mov     rax, [rbx+0A40h]
 * 0000000140AC7C83: xor     edx, edx
 * 0000000140AC7C85: test    rax, rax
 * 0000000140AC7C88: mov     r14, rbx
 * 0000000140AC7C8B: mov     r15d, edx
 * 0000000140AC7C8E: cmovnz  r14, rax
 * 0000000140AC7C92: mov     [rsp+0C30h+var_BC8], r14
 * 0000000140AC7C97: mov     r8d, [r14+7D0h]
 * 0000000140AC7C9E: add     r8, r14
 * 0000000140AC7CA1: test    r11d, r11d
 * 0000000140AC7CA4: jz      short loc_140AC7CB4
 * 0000000140AC7CA6: cmp     r9d, r10d
 * 0000000140AC7CA9: ja      short loc_140AC7CB4
 * 0000000140AC7CAB: mov     r8d, ecx
 * 0000000140AC7CAE: mov     r15d, r9d
 * 0000000140AC7CB1: add     r8, r14
 * 0000000140AC7CB4: cmp     r15d, r10d
 * 0000000140AC7CB7: jz      loc_140AC7DF1
 * 0000000140AC7CBD: mov     r9d, r10d
 * 0000000140AC7CC0: mov     r12d, 2
 * 0000000140AC7CC6: sub     r9d, r15d
 * 0000000140AC7CC9: mov     r15d, r10d
 * 0000000140AC7CCC: mov     r10, 0AAAAAAAAAAAAAAABh
 * 0000000140AC7CD6: lea     r14d, [r12+0Ah]
 * 0000000140AC7CDB: mov     ecx, [r8]
 * 0000000140AC7CDE: cmp     ecx, r14d
 * 0000000140AC7CE1: jg      short loc_140AC7D28
 * 0000000140AC7CE3: jz      short loc_140AC7D45
 * 0000000140AC7CE5: sub     ecx, 1
 * 0000000140AC7CE8: jz      short loc_140AC7D45
 * 0000000140AC7CEA: sub     ecx, 6
 * 0000000140AC7CED: jz      short loc_140AC7D16
 * 0000000140AC7CEF: sub     ecx, 1
 * 0000000140AC7CF2: jz      short loc_140AC7D0C
 * 0000000140AC7CF4: cmp     ecx, r12d
 * 0000000140AC7CF7: jnz     loc_140AC7D84
 * 0000000140AC7CFD: mov     eax, [r8+1Ch]
 * 0000000140AC7D01: add     eax, 3
 * 0000000140AC7D04: shl     eax, 4
 * 0000000140AC7D07: jmp     loc_140AC7DC3
 * 0000000140AC7D0C: movzx   eax, word ptr [r8+20h]
 * 0000000140AC7D11: jmp     loc_140AC7DBD
 * 0000000140AC7D16: mov     eax, [r8+18h]
 * 0000000140AC7D1A: add     eax, r12d
 * 0000000140AC7D1D: lea     eax, [rax+rax*2]
 * 0000000140AC7D20: shl     eax, 3
 * 0000000140AC7D23: jmp     loc_140AC7DC3
 * 0000000140AC7D28: cmp     ecx, 1Ch
 * 0000000140AC7D2B: jz      loc_140AC7DB8
 * 0000000140AC7D31: cmp     ecx, 1Eh
 * 0000000140AC7D34: jz      short loc_140AC7D8B
 * 0000000140AC7D36: cmp     ecx, 20h ; ' '
 * 0000000140AC7D39: jle     short loc_140AC7D84
 * 0000000140AC7D3B: cmp     ecx, 22h ; '"'
 * 0000000140AC7D3E: jle     short loc_140AC7D5C
 * 0000000140AC7D40: cmp     ecx, 2Bh ; '+'
 * 0000000140AC7D43: jnz     short loc_140AC7D84
 * 0000000140AC7D45: mov     ecx, [r8+10h]
 * 0000000140AC7D49: mov     rax, r10
 * 0000000140AC7D4C: mul     rcx
 * 0000000140AC7D4F: shr     rdx, 3
 * 0000000140AC7D53: lea     eax, ds:30h[rdx*4]
 * 0000000140AC7D5A: jmp     short loc_140AC7DC3
 * 0000000140AC7D5C: mov     ecx, [r8+20h]
 * 0000000140AC7D60: mov     edx, [r8+28h]
 * 0000000140AC7D64: and     ecx, 0FFFh
 * 0000000140AC7D6A: add     rdx, 0FFFh
 * 0000000140AC7D71: add     rdx, rcx
 * 0000000140AC7D74: shr     rdx, 0Ch
 * 0000000140AC7D78: lea     eax, [rdx+rdx*4]
 * 0000000140AC7D7B: lea     eax, ds:30h[rax*4]
 * 0000000140AC7D82: jmp     short loc_140AC7DC3
 * 0000000140AC7D84: mov     eax, 30h ; '0'
 * 0000000140AC7D89: jmp     short loc_140AC7DC3
 * 0000000140AC7D8B: mov     eax, [r8+24h]
 * 0000000140AC7D8F: lea     ecx, [rax-1]
 * 0000000140AC7D92: neg     eax
 * 0000000140AC7D94: sbb     eax, eax
 * 0000000140AC7D96: and     ecx, eax
 * 0000000140AC7D98: mov     rax, r10
 * 0000000140AC7D9B: mul     rcx
 * 0000000140AC7D9E: movzx   eax, word ptr [r8+28h]
 * 0000000140AC7DA3: shr     rdx, 3
 * 0000000140AC7DA7: add     edx, 7
 * 0000000140AC7DAA: and     edx, 0FFFFFFF8h
 * 0000000140AC7DAD: add     eax, r12d
 * 0000000140AC7DB0: lea     eax, [rax+rax*2]
 * 0000000140AC7DB3: lea     eax, [rdx+rax*8]
 * 0000000140AC7DB6: jmp     short loc_140AC7DC3
 * 0000000140AC7DB8: movzx   eax, word ptr [r8+28h]
 * 0000000140AC7DBD: add     eax, 37h ; '7'
 * 0000000140AC7DC0: and     eax, 0FFFFFFF8h
 * 0000000140AC7DC3: add     r8, rax
 * 0000000140AC7DC6: mov     eax, 1
 * 0000000140AC7DCB: sub     r9, rax
 * 0000000140AC7DCE: jnz     loc_140AC7CDB
 * 0000000140AC7DD4: mov     r10d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140AC7DDB: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC7DE2: mov     r14, [rsp+0C30h+var_BC8]
 * 0000000140AC7DE7: mov     r12, [rbp+0B30h+var_B68]
 * 0000000140AC7DEB: mov     r13d, [rbp+0B30h+var_BB0]
 * 0000000140AC7DEF: jmp     short loc_140AC7DF6
 * 0000000140AC7DF1: mov     eax, 1
 * 0000000140AC7DF6: mov     ecx, r8d
 * 0000000140AC7DF9: mov     dword ptr [rbp+0B30h+var_A50], eax
 * 0000000140AC7DFF: sub     ecx, r14d
 * 0000000140AC7E02: mov     dword ptr [rbp+0B30h+var_A50+4], r15d
 * 0000000140AC7E09: mov     [rbp+0B30h+var_A48], ecx
 * 0000000140AC7E0F: mov     r11d, eax
 * 0000000140AC7E12: movsxd  rdx, dword ptr [r8]
 * 0000000140AC7E15: mov     r9d, r15d
 * 0000000140AC7E18: cmp     edx, 2Bh ; '+'
 * 0000000140AC7E1B: ja      short loc_140AC7E39
 * 0000000140AC7E1D: mov     r14, 80000001002h
 * 0000000140AC7E27: bt      r14, rdx
 * 0000000140AC7E2B: jnb     short loc_140AC7E39
 * 0000000140AC7E2D: cmp     [r8+8], r12
 * 0000000140AC7E31: jnz     short loc_140AC7E39
 * 0000000140AC7E33: cmp     [r8+10h], r13d
 * 0000000140AC7E37: jz      short loc_140AC7E69
 * 0000000140AC7E39: lea     eax, [rdx-21h]
 * 0000000140AC7E3C: mov     r15d, 1
 * 0000000140AC7E42: cmp     eax, r15d
 * 0000000140AC7E45: ja      short loc_140AC7E51
 * 0000000140AC7E47: mov     rax, [rbp+0B30h+var_B80]
 * 0000000140AC7E4B: cmp     [r8+20h], rax
 * 0000000140AC7E4F: jz      short loc_140AC7E6F
 * 0000000140AC7E51: add     r10d, r15d
 * 0000000140AC7E54: mov     dword ptr [rbp+0B30h+arg_8], r10d
 * 0000000140AC7E5B: cmp     r10d, [rbx+7D4h]
 * 0000000140AC7E62: jnb     short loc_140AC7E78
 * 0000000140AC7E64: jmp     loc_140AC7C7C
 * 0000000140AC7E69: mov     r15d, 1
 * 0000000140AC7E6F: test    r8, r8
 * 0000000140AC7E72: jnz     loc_140AC9062
 * 0000000140AC7E78: mov     r13, [rbp+0B30h+var_B98]
 * 0000000140AC7E7C: lea     rdx, [rbp+0B30h+var_200]
 * 0000000140AC7E83: mov     rax, [rbx+1F0h]
 * 0000000140AC7E8A: mov     rcx, r13
 * 0000000140AC7E8D: mov     [rbp+0B30h+var_B00], rbx
 * 0000000140AC7E91: call    j__guard_dispatch_icall_nop
 * 0000000140AC7E96: mov     r14, [rbp+0B30h+var_1F8]
 * 0000000140AC7E9D: xor     r11d, r11d
 * 0000000140AC7EA0: mov     r12d, [rbp+0B30h+var_1EC]
 * 0000000140AC7EA7: mov     [rbp+0B30h+var_B70], rax
 * 0000000140AC7EAB: mov     [rbp+0B30h+var_BB0], r12d
 * 0000000140AC7EAF: mov     [rbp+0B30h+var_B54], r12d
 * 0000000140AC7EB3: mov     [rsp+0C30h+var_BD0], r14
 * 0000000140AC7EB8: test    r14, r14
 * 0000000140AC7EBB: jnz     short loc_140AC7ED7
 * 0000000140AC7EBD: test    dword ptr [rbx+958h], 200000h
 * 0000000140AC7EC7: jz      loc_140ACCAEE
 * 0000000140AC7ECD: mov     eax, 0C000007Bh
 * 0000000140AC7ED2: jmp     loc_140AC904D
 * 0000000140AC7ED7: mov     [rbp+0B30h+var_A40], r11
 * 0000000140AC7EDE: lea     rax, [rbp+0B30h+var_A38]
 * 0000000140AC7EE5: mov     ecx, 4
 * 0000000140AC7EEA: mov     edx, 0FFFFFFFFh
 * 0000000140AC7EEF: mov     [rax], r11b
 * 0000000140AC7EF2: add     rax, r15
 * 0000000140AC7EF5: add     ecx, edx
 * 0000000140AC7EF7: jnz     short loc_140AC7EEF
 * 0000000140AC7EF9: mov     r10d, r11d
 * 0000000140AC7EFC: mov     dword ptr [rbp+0B30h+arg_8], r11d
 * 0000000140AC7F03: cmp     [rbx+7D4h], r11d
 * 0000000140AC7F0A: jbe     loc_140AC812A
 * 0000000140AC7F10: mov     ecx, [rbp+0B30h+var_A38]
 * 0000000140AC7F16: mov     r9d, dword ptr [rbp+0B30h+var_A40+4]
 * 0000000140AC7F1D: mov     r11d, dword ptr [rbp+0B30h+var_A40]
 * 0000000140AC7F24: mov     rax, [rbx+0A40h]
 * 0000000140AC7F2B: xor     edx, edx
 * 0000000140AC7F2D: test    rax, rax
 * 0000000140AC7F30: mov     r14, rbx
 * 0000000140AC7F33: mov     r15d, edx
 * 0000000140AC7F36: cmovnz  r14, rax
 * 0000000140AC7F3A: mov     [rsp+0C30h+var_BC8], r14
 * 0000000140AC7F3F: mov     r8d, [r14+7D0h]
 * 0000000140AC7F46: add     r8, r14
 * 0000000140AC7F49: test    r11d, r11d
 * 0000000140AC7F4C: jz      short loc_140AC7F5C
 * 0000000140AC7F4E: cmp     r9d, r10d
 * 0000000140AC7F51: ja      short loc_140AC7F5C
 * 0000000140AC7F53: mov     r8d, ecx
 * 0000000140AC7F56: mov     r15d, r9d
 * 0000000140AC7F59: add     r8, r14
 * 0000000140AC7F5C: cmp     r15d, r10d
 * 0000000140AC7F5F: jz      loc_140AC8099
 * 0000000140AC7F65: mov     r9d, r10d
 * 0000000140AC7F68: mov     r12d, 2
 * 0000000140AC7F6E: sub     r9d, r15d
 * 0000000140AC7F71: mov     r15d, r10d
 * 0000000140AC7F74: mov     r10, 0AAAAAAAAAAAAAAABh
 * 0000000140AC7F7E: lea     r14d, [r12+0Ah]
 * 0000000140AC7F83: mov     ecx, [r8]
 * 0000000140AC7F86: cmp     ecx, r14d
 * 0000000140AC7F89: jg      short loc_140AC7FD0
 * 0000000140AC7F8B: jz      short loc_140AC7FED
 * 0000000140AC7F8D: sub     ecx, 1
 * 0000000140AC7F90: jz      short loc_140AC7FED
 * 0000000140AC7F92: sub     ecx, 6
 * 0000000140AC7F95: jz      short loc_140AC7FBE
 * 0000000140AC7F97: sub     ecx, 1
 * 0000000140AC7F9A: jz      short loc_140AC7FB4
 * 0000000140AC7F9C: cmp     ecx, r12d
 * 0000000140AC7F9F: jnz     loc_140AC802C
 * 0000000140AC7FA5: mov     eax, [r8+1Ch]
 * 0000000140AC7FA9: add     eax, 3
 * 0000000140AC7FAC: shl     eax, 4
 * 0000000140AC7FAF: jmp     loc_140AC806B
 * 0000000140AC7FB4: movzx   eax, word ptr [r8+20h]
 * 0000000140AC7FB9: jmp     loc_140AC8065
 * 0000000140AC7FBE: mov     eax, [r8+18h]
 * 0000000140AC7FC2: add     eax, r12d
 * 0000000140AC7FC5: lea     eax, [rax+rax*2]
 * 0000000140AC7FC8: shl     eax, 3
 * 0000000140AC7FCB: jmp     loc_140AC806B
 * 0000000140AC7FD0: cmp     ecx, 1Ch
 * 0000000140AC7FD3: jz      loc_140AC8060
 * 0000000140AC7FD9: cmp     ecx, 1Eh
 * 0000000140AC7FDC: jz      short loc_140AC8033
 * 0000000140AC7FDE: cmp     ecx, 20h ; ' '
 * 0000000140AC7FE1: jle     short loc_140AC802C
 * 0000000140AC7FE3: cmp     ecx, 22h ; '"'
 * 0000000140AC7FE6: jle     short loc_140AC8004
 * 0000000140AC7FE8: cmp     ecx, 2Bh ; '+'
 * 0000000140AC7FEB: jnz     short loc_140AC802C
 * 0000000140AC7FED: mov     ecx, [r8+10h]
 * 0000000140AC7FF1: mov     rax, r10
 * 0000000140AC7FF4: mul     rcx
 * 0000000140AC7FF7: shr     rdx, 3
 * 0000000140AC7FFB: lea     eax, ds:30h[rdx*4]
 * 0000000140AC8002: jmp     short loc_140AC806B
 * 0000000140AC8004: mov     ecx, [r8+20h]
 * 0000000140AC8008: mov     edx, [r8+28h]
 * 0000000140AC800C: and     ecx, 0FFFh
 * 0000000140AC8012: add     rdx, 0FFFh
 * 0000000140AC8019: add     rdx, rcx
 * 0000000140AC801C: shr     rdx, 0Ch
 * 0000000140AC8020: lea     eax, [rdx+rdx*4]
 * 0000000140AC8023: lea     eax, ds:30h[rax*4]
 * 0000000140AC802A: jmp     short loc_140AC806B
 * 0000000140AC802C: mov     eax, 30h ; '0'
 * 0000000140AC8031: jmp     short loc_140AC806B
 * 0000000140AC8033: mov     eax, [r8+24h]
 * 0000000140AC8037: lea     ecx, [rax-1]
 * 0000000140AC803A: neg     eax
 * 0000000140AC803C: sbb     eax, eax
 * 0000000140AC803E: and     ecx, eax
 * 0000000140AC8040: mov     rax, r10
 * 0000000140AC8043: mul     rcx
 * 0000000140AC8046: movzx   eax, word ptr [r8+28h]
 * 0000000140AC804B: shr     rdx, 3
 * 0000000140AC804F: add     edx, 7
 * 0000000140AC8052: and     edx, 0FFFFFFF8h
 * 0000000140AC8055: add     eax, r12d
 * 0000000140AC8058: lea     eax, [rax+rax*2]
 * 0000000140AC805B: lea     eax, [rdx+rax*8]
 * 0000000140AC805E: jmp     short loc_140AC806B
 * 0000000140AC8060: movzx   eax, word ptr [r8+28h]
 * 0000000140AC8065: add     eax, 37h ; '7'
 * 0000000140AC8068: and     eax, 0FFFFFFF8h
 * 0000000140AC806B: add     r8, rax
 * 0000000140AC806E: mov     eax, 1
 * 0000000140AC8073: sub     r9, rax
 * 0000000140AC8076: jnz     loc_140AC7F83
 * 0000000140AC807C: mov     r10d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140AC8083: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC808A: mov     r14, [rsp+0C30h+var_BC8]
 * 0000000140AC808F: mov     r12d, [rbp+0B30h+var_BB0]
 * 0000000140AC8093: mov     r13, [rbp+0B30h+var_B98]
 * 0000000140AC8097: jmp     short loc_140AC809E
 * 0000000140AC8099: mov     eax, 1
 * 0000000140AC809E: mov     ecx, r8d
 * 0000000140AC80A1: mov     dword ptr [rbp+0B30h+var_A40], eax
 * 0000000140AC80A7: sub     ecx, r14d
 * 0000000140AC80AA: mov     dword ptr [rbp+0B30h+var_A40+4], r15d
 * 0000000140AC80B1: mov     [rbp+0B30h+var_A38], ecx
 * 0000000140AC80B7: mov     r11d, eax
 * 0000000140AC80BA: movsxd  rdx, dword ptr [r8]
 * 0000000140AC80BD: mov     r9d, r15d
 * 0000000140AC80C0: cmp     edx, 2Bh ; '+'
 * 0000000140AC80C3: ja      short loc_140AC80E5
 * 0000000140AC80C5: mov     r14, 80000001002h
 * 0000000140AC80CF: bt      r14, rdx
 * 0000000140AC80D3: jnb     short loc_140AC80E5
 * 0000000140AC80D5: mov     rax, [rbp+0B30h+var_B70]
 * 0000000140AC80D9: cmp     [r8+8], rax
 * 0000000140AC80DD: jnz     short loc_140AC80E5
 * 0000000140AC80DF: cmp     [r8+10h], r12d
 * 0000000140AC80E3: jz      short loc_140AC8116
 * 0000000140AC80E5: mov     r14, [rsp+0C30h+var_BD0]
 * 0000000140AC80EA: lea     eax, [rdx-21h]
 * 0000000140AC80ED: mov     r15d, 1
 * 0000000140AC80F3: cmp     eax, r15d
 * 0000000140AC80F6: ja      short loc_140AC80FE
 * 0000000140AC80F8: cmp     [r8+20h], r14
 * 0000000140AC80FC: jz      short loc_140AC8121
 * 0000000140AC80FE: add     r10d, r15d
 * 0000000140AC8101: mov     dword ptr [rbp+0B30h+arg_8], r10d
 * 0000000140AC8108: cmp     r10d, [rbx+7D4h]
 * 0000000140AC810F: jnb     short loc_140AC812A
 * 0000000140AC8111: jmp     loc_140AC7F24
 * 0000000140AC8116: mov     r14, [rsp+0C30h+var_BD0]
 * 0000000140AC811B: mov     r15d, 1
 * 0000000140AC8121: test    r8, r8
 * 0000000140AC8124: jnz     loc_140AC9BBB
 * 0000000140AC812A: mov     rax, [rbx+298h]
 * 0000000140AC8131: mov     rcx, r13
 * 0000000140AC8134: call    j__guard_dispatch_icall_nop
 * 0000000140AC8139: mov     ecx, [rbp+0B30h+var_B54]
 * 0000000140AC813C: xor     r13d, r13d
 * 0000000140AC813F: mov     [rbp+0B30h+var_BAC], eax
 * 0000000140AC8142: mov     dword ptr [rbp+0B30h+var_B90], ecx
 * 0000000140AC8145: test    eax, eax
 * 0000000140AC8147: jz      loc_140AC9BBE
 * 0000000140AC814D: mov     rsi, [rbx+508h]
 * 0000000140AC8154: cli
 * 0000000140AC8155: mov     rcx, gs:20h
 * 0000000140AC815E: mov     rax, [rbx+618h]
 * 0000000140AC8165: mov     rcx, [rcx+rax]
 * 0000000140AC8169: sti
 * 0000000140AC816A: mov     rax, [rbx+158h]
 * 0000000140AC8171: call    j__guard_dispatch_icall_nop
 * 0000000140AC8176: mov     rcx, [rbx+510h]
 * 0000000140AC817D: mov     dl, r15b
 * 0000000140AC8180: mov     rax, [rbx+0E0h]
 * 0000000140AC8187: call    j__guard_dispatch_icall_nop
 * 0000000140AC818C: mov     rdx, [rsi]
 * 0000000140AC818F: cmp     rdx, rsi
 * 0000000140AC8192: jz      short loc_140AC81DD
 * 0000000140AC8194: mov     r9, [rbx+718h]
 * 0000000140AC819B: mov     r10, [rbx+720h]
 * 0000000140AC81A2: mov     r11, [rbx+728h]
 * 0000000140AC81A9: mov     rcx, rdx
 * 0000000140AC81AC: sub     rcx, r9
 * 0000000140AC81AF: mov     rax, [rcx+r10]
 * 0000000140AC81B3: mov     r8d, [r11+rcx]
 * 0000000140AC81B7: add     r8, rax
 * 0000000140AC81BA: cmp     r14, rax
 * 0000000140AC81BD: jb      short loc_140AC81C4
 * 0000000140AC81BF: cmp     r14, r8
 * 0000000140AC81C2: jb      short loc_140AC81CE
 * 0000000140AC81C4: mov     rdx, [rdx]
 * 0000000140AC81C7: cmp     rdx, rsi
 * 0000000140AC81CA: jz      short loc_140AC81DD
 * 0000000140AC81CC: jmp     short loc_140AC81A9
 * 0000000140AC81CE: mov     rax, [rbx+0D0h]
 * 0000000140AC81D5: mov     edx, r15d
 * 0000000140AC81D8: call    j__guard_dispatch_icall_nop
 * 0000000140AC81DD: mov     rcx, [rbx+510h]
 * 0000000140AC81E4: mov     rax, [rbx+108h]
 * 0000000140AC81EB: call    j__guard_dispatch_icall_nop
 * 0000000140AC81F0: mov     rax, [rbx+160h]
 * 0000000140AC81F7: call    j__guard_dispatch_icall_nop
 * 0000000140AC81FC: test    dword ptr [rbx+958h], 40000000h
 * 0000000140AC8206: jz      short loc_140AC8226
 * 0000000140AC8208: mov     r8d, 0Fh
 * 0000000140AC820E: lea     rcx, [rbp+0B30h+var_B18]
 * 0000000140AC8212: mov     rdx, r14
 * 0000000140AC8215: call    sub_140AD6FD0
 * 0000000140AC821A: mov     rsi, [rbp+0B30h+var_B18]
 * 0000000140AC821E: xor     r11d, r11d
 * 0000000140AC8221: jmp     loc_140AC9037
 * 0000000140AC8226: mov     rax, [rbx+1E0h]
 * 0000000140AC822D: lea     r9, [rbp+0B30h+var_B54]
 * 0000000140AC8231: xor     r8d, r8d
 * 0000000140AC8234: mov     [rbp+0B30h+var_780], r13
 * 0000000140AC823B: mov     dl, r15b
 * 0000000140AC823E: mov     [rbp+0B30h+var_938], r13d
 * 0000000140AC8245: mov     rcx, r14
 * 0000000140AC8248: call    j__guard_dispatch_icall_nop
 * 0000000140AC824D: mov     rdx, rax
 * 0000000140AC8250: lea     r9, [rbp+0B30h+var_B54]
 * 0000000140AC8254: neg     rax
 * 0000000140AC8257: mov     [rbp+0B30h+var_798], rdx
 * 0000000140AC825E: mov     r8d, 0Ch
 * 0000000140AC8264: mov     dl, r15b
 * 0000000140AC8267: sbb     ecx, ecx
 * 0000000140AC8269: and     ecx, [rbp+0B30h+var_B54]
 * 0000000140AC826C: mov     [rbp+0B30h+var_B54], ecx
 * 0000000140AC826F: mov     rax, [rbx+1E0h]
 * 0000000140AC8276: mov     [rbp+0B30h+var_944], ecx
 * 0000000140AC827C: mov     rcx, r14
 * 0000000140AC827F: call    j__guard_dispatch_icall_nop
 * 0000000140AC8284: mov     rdx, rax
 * 0000000140AC8287: mov     [rbp+0B30h+var_B68], rax
 * 0000000140AC828B: neg     rax
 * 0000000140AC828E: mov     [rbp+0B30h+var_790], rdx
 * 0000000140AC8295: mov     r12d, 0Ah
 * 0000000140AC829B: lea     r9, [rbp+0B30h+var_B54]
 * 0000000140AC829F: sbb     ecx, ecx
 * 0000000140AC82A1: mov     r8d, r12d
 * 0000000140AC82A4: and     ecx, [rbp+0B30h+var_B54]
 * 0000000140AC82A7: mov     dl, r15b
 * 0000000140AC82AA: mov     [rbp+0B30h+var_B54], ecx
 * 0000000140AC82AD: mov     rax, [rbx+1E0h]
 * 0000000140AC82B4: mov     dword ptr [rbp+0B30h+arg_8], ecx
 * 0000000140AC82BA: mov     [rbp+0B30h+var_940], ecx
 * 0000000140AC82C0: mov     rcx, r14
 * 0000000140AC82C3: call    j__guard_dispatch_icall_nop
 * 0000000140AC82C8: mov     rdx, rax
 * 0000000140AC82CB: neg     rax
 * 0000000140AC82CE: mov     [rbp+0B30h+var_788], rdx
 * 0000000140AC82D5: sbb     ecx, ecx
 * 0000000140AC82D7: and     ecx, [rbp+0B30h+var_B54]
 * 0000000140AC82DA: mov     [rbp+0B30h+var_B54], ecx
 * 0000000140AC82DD: mov     rax, [rbx+1E8h]
 * 0000000140AC82E4: mov     [rbp+0B30h+var_93C], ecx
 * 0000000140AC82EA: mov     rcx, r14
 * 0000000140AC82ED: call    j__guard_dispatch_icall_nop
 * 0000000140AC82F2: xor     r11d, r11d
 * 0000000140AC82F5: mov     rsi, rax
 * 0000000140AC82F8: test    rax, rax
 * 0000000140AC82FB: jnz     short loc_140AC8365
 * 0000000140AC82FD: test    dword ptr [rbx+958h], 200000h
 * 0000000140AC8307: jz      loc_140ACCB19
 * 0000000140AC830D: cmp     [rbx+8C0h], r11d
 * 0000000140AC8314: jnz     short loc_140AC8357
 * 0000000140AC8316: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC8320: xor     edx, edx
 * 0000000140AC8322: add     rax, rbx
 * 0000000140AC8325: mov     rcx, rbx
 * 0000000140AC8328: mov     [rbx+8C8h], rax
 * 0000000140AC832F: mov     [rbx+8D0h], r11
 * 0000000140AC8336: mov     qword ptr [rbx+8D8h], 10Fh
 * 0000000140AC8341: mov     [rbx+8E0h], r14
 * 0000000140AC8348: mov     [rbx+8C0h], r15d
 * 0000000140AC834F: call    sub_140AD049C
 * 0000000140AC8354: xor     r11d, r11d
 * 0000000140AC8357: mov     rsi, [rbp+0B30h+var_B18]
 * 0000000140AC835B: mov     eax, 0C000007Bh
 * 0000000140AC8360: jmp     loc_140AC904D
 * 0000000140AC8365: mov     rax, [rbx+488h]
 * 0000000140AC836C: lea     rdx, [rbp+0B30h+var_840]
 * 0000000140AC8373: mov     rcx, r14
 * 0000000140AC8376: call    j__guard_dispatch_icall_nop
 * 0000000140AC837B: mov     r8d, [rbx+8ECh]
 * 0000000140AC8382: mov     [rbp+0B30h+var_778], rax
 * 0000000140AC8389: mov     eax, [rbp+0B30h+var_840]
 * 0000000140AC838F: mov     [rbp+0B30h+var_934], eax
 * 0000000140AC8395: mov     eax, [rsi+54h]
 * 0000000140AC8398: mov     [rbp+0B30h+var_7A0], r14
 * 0000000140AC839F: mov     r14d, [rbx+7ACh]
 * 0000000140AC83A6: mov     [rbp+0B30h+var_948], eax
 * 0000000140AC83AC: lea     eax, [r14+120h]
 * 0000000140AC83B3: cmp     eax, [rbx+9E4h]
 * 0000000140AC83B9: jbe     loc_140AC849C
 * 0000000140AC83BF: mov     edx, eax
 * 0000000140AC83C1: mov     rcx, rbx
 * 0000000140AC83C4: call    sub_140ACFC24
 * 0000000140AC83C9: xor     r11d, r11d
 * 0000000140AC83CC: mov     rsi, rax
 * 0000000140AC83CF: test    rax, rax
 * 0000000140AC83D2: jnz     short loc_140AC83E6
 * 0000000140AC83D4: mov     rsi, [rbp+0B30h+var_B18]
 * 0000000140AC83D8: mov     [rbp+0B30h+var_B00], r11
 * 0000000140AC83DC: mov     eax, 0C000009Ah
 * 0000000140AC83E1: jmp     loc_140AC904D
 * 0000000140AC83E6: mov     ecx, [rbx+958h]
 * 0000000140AC83EC: test    cl, 4
 * 0000000140AC83EF: jnz     loc_140AC8493
 * 0000000140AC83F5: mov     eax, [rbx+7ACh]
 * 0000000140AC83FB: and     ecx, 20000000h
 * 0000000140AC8401: mov     r8, [rbx+790h]
 * 0000000140AC8408: neg     ecx
 * 0000000140AC840A: sbb     edx, edx
 * 0000000140AC840C: and     edx, [rbx+8ECh]
 * 0000000140AC8412: cmp     eax, 8
 * 0000000140AC8415: jb      short loc_140AC842C
 * 0000000140AC8417: mov     ecx, eax
 * 0000000140AC8419: shr     rcx, 3
 * 0000000140AC841D: mov     [rbx], r11
 * 0000000140AC8420: add     eax, 0FFFFFFF8h
 * 0000000140AC8423: add     rbx, 8
 * 0000000140AC8427: sub     rcx, r15
 * 0000000140AC842A: jnz     short loc_140AC841D
 * 0000000140AC842C: test    eax, eax
 * 0000000140AC842E: jz      short loc_140AC843F
 * 0000000140AC8430: mov     ecx, 0FFFFFFFFh
 * 0000000140AC8435: mov     [rbx], r11b
 * 0000000140AC8438: add     rbx, r15
 * 0000000140AC843B: add     eax, ecx
 * 0000000140AC843D: jnz     short loc_140AC8435
 * 0000000140AC843F: mov     ebx, [rsi+8ECh]
 * 0000000140AC8445: mov     [rsi+8ECh], edx
 * 0000000140AC844B: cmp     edx, 3
 * 0000000140AC844E: jz      short loc_140AC847E
 * 0000000140AC8450: test    dword ptr [rsi+958h], 10000000h
 * 0000000140AC845A: jnz     short loc_140AC8475
 * 0000000140AC845C: test    edx, edx
 * 0000000140AC845E: jz      short loc_140AC8475
 * 0000000140AC8460: mov     rax, [rsi+218h]
 * 0000000140AC8467: lea     rcx, [r8-8]
 * 0000000140AC846B: mov     rdx, [rcx]
 * 0000000140AC846E: call    j__guard_dispatch_icall_nop
 * 0000000140AC8473: jmp     short loc_140AC848D
 * 0000000140AC8475: mov     rax, [rsi+0F0h]
 * 0000000140AC847C: jmp     short loc_140AC8485
 * 0000000140AC847E: mov     rax, [rsi+358h]
 * 0000000140AC8485: mov     rcx, r8
 * 0000000140AC8488: call    j__guard_dispatch_icall_nop
 * 0000000140AC848D: mov     [rsi+8ECh], ebx
 * 0000000140AC8493: and     dword ptr [rsi+958h], 0FFFFFFFBh
 * 0000000140AC849A: jmp     short loc_140AC84A5
 * 0000000140AC849C: mov     rsi, rbx
 * 0000000140AC849F: mov     [rbx+7ACh], eax
 * 0000000140AC84A5: mov     edx, 6
 * 0000000140AC84AA: lea     r11, [rsi+r14]
 * 0000000140AC84AE: add     [rsi+7D4h], edx
 * 0000000140AC84B4: lea     rdi, [rbp+0B30h+var_7A0]
 * 0000000140AC84BB: lea     r12, [rbp+0B30h+var_948]
 * 0000000140AC84C2: mov     [rbp+0B30h+var_B98], r11
 * 0000000140AC84C6: xor     ebx, ebx
 * 0000000140AC84C8: mov     [rsp+0C30h+var_BD8], rdi
 * 0000000140AC84CD: mov     [rbp+0B30h+var_B38], r12
 * 0000000140AC84D1: mov     [rsp+0C30h+var_BB8], rdx
 * 0000000140AC84D6: mov     r15d, [r12]
 * 0000000140AC84DA: mov     ecx, 30h ; '0'
 * 0000000140AC84DF: mov     r14, [rdi]
 * 0000000140AC84E2: mov     rax, r11
 * 0000000140AC84E5: mov     [rbp+0B30h+var_BB0], r15d
 * 0000000140AC84E9: lea     r8d, [rcx-2Fh]
 * 0000000140AC84ED: mov     [rax], rbx
 * 0000000140AC84F0: add     ecx, 0FFFFFFF8h
 * 0000000140AC84F3: add     rax, 8
 * 0000000140AC84F7: sub     rdx, r8
 * 0000000140AC84FA: jnz     short loc_140AC84ED
 * 0000000140AC84FC: mov     rdx, r8
 * 0000000140AC84FF: test    ecx, ecx
 * 0000000140AC8501: jz      short loc_140AC8513
 * 0000000140AC8503: mov     r8d, 0FFFFFFFFh
 * 0000000140AC8509: mov     [rax], bl
 * 0000000140AC850B: add     rax, rdx
 * 0000000140AC850E: add     ecx, r8d
 * 0000000140AC8511: jnz     short loc_140AC8509
 * 0000000140AC8513: mov     dword ptr [r11], 0Bh
 * 0000000140AC851A: lea     rcx, [r14+r15]
 * 0000000140AC851E: mov     [r11+8], r14
 * 0000000140AC8522: mov     r9, r14
 * 0000000140AC8525: mov     [r11+10h], r15d
 * 0000000140AC8529: mov     rax, r14
 * 0000000140AC852C: add     [rsi+7F0h], r15d
 * 0000000140AC8533: mov     r10d, [rsi+7DCh]
 * 0000000140AC853A: mov     r13, [rsi+7E0h]
 * 0000000140AC8541: cmp     r14, rcx
 * 0000000140AC8544: jnb     short loc_140AC8557
 * 0000000140AC8546: mov     r8d, 40h ; '@'
 * 0000000140AC854C: prefetchnta byte ptr [rax]
 * 0000000140AC854F: add     rax, r8
 * 0000000140AC8552: cmp     rax, rcx
 * 0000000140AC8555: jb      short loc_140AC854C
 * 0000000140AC8557: mov     ebx, r15d
 * 0000000140AC855A: mov     r8, r13
 * 0000000140AC855D: shr     ebx, 7
 * 0000000140AC8560: test    ebx, ebx
 * 0000000140AC8562: jz      short loc_140AC85D1
 * 0000000140AC8564: mov     edi, 0FFFFFFFFh
 * 0000000140AC8569: mov     r12, 7010008004002001h
 * 0000000140AC8573: mov     eax, 8
 * 0000000140AC8578: xor     r8, [r9]
 * 0000000140AC857B: mov     ecx, r10d
 * 0000000140AC857E: rol     r8, cl
 * 0000000140AC8581: xor     r8, [r9+8]
 * 0000000140AC8585: add     r9, 10h
 * 0000000140AC8589: rol     r8, cl
 * 0000000140AC858C: sub     rax, rdx
 * 0000000140AC858F: jnz     short loc_140AC8578
 * 0000000140AC8591: mov     rcx, r9
 * 0000000140AC8594: sub     rcx, r14
 * 0000000140AC8597: xor     rcx, r13
 * 0000000140AC859A: mov     rax, rcx
 * 0000000140AC859D: rol     rax, 11h
 * 0000000140AC85A1: xor     rcx, rax
 * 0000000140AC85A4: mov     rax, r12
 * 0000000140AC85A7: mul     rcx
 * 0000000140AC85AA: xor     r10d, edx
 * 0000000140AC85AD: mov     [rbp+0B30h+var_520], rdx
 * 0000000140AC85B4: xor     r10d, eax
 * 0000000140AC85B7: mov     edx, 1
 * 0000000140AC85BC: and     r10d, 3Fh
 * 0000000140AC85C0: cmovz   r10d, edx
 * 0000000140AC85C4: add     ebx, edi
 * 0000000140AC85C6: jnz     short loc_140AC8573
 * 0000000140AC85C8: mov     rdi, [rsp+0C30h+var_BD8]
 * 0000000140AC85CD: mov     r12, [rbp+0B30h+var_B38]
 * 0000000140AC85D1: mov     edx, r15d
 * 0000000140AC85D4: mov     r14d, 1
 * 0000000140AC85DA: and     edx, 7Fh
 * 0000000140AC85DD: cmp     edx, 8
 * 0000000140AC85E0: jb      short loc_140AC85FD
 * 0000000140AC85E2: mov     eax, edx
 * 0000000140AC85E4: shr     rax, 3
 * 0000000140AC85E8: xor     r8, [r9]
 * 0000000140AC85EB: mov     ecx, r10d
 * 0000000140AC85EE: rol     r8, cl
 * 0000000140AC85F1: add     r9, 8
 * 0000000140AC85F5: add     edx, 0FFFFFFF8h
 * 0000000140AC85F8: sub     rax, r14
 * 0000000140AC85FB: jnz     short loc_140AC85E8
 * 0000000140AC85FD: xor     ebx, ebx
 * 0000000140AC85FF: test    edx, edx
 * 0000000140AC8601: jz      short loc_140AC8622
 * 0000000140AC8603: mov     r15d, 0FFFFFFFFh
 * 0000000140AC8609: movzx   eax, byte ptr [r9]
 * 0000000140AC860D: mov     ecx, r10d
 * 0000000140AC8610: xor     r8, rax
 * 0000000140AC8613: add     r9, r14
 * 0000000140AC8616: rol     r8, cl
 * 0000000140AC8619: add     edx, r15d
 * 0000000140AC861C: jnz     short loc_140AC8609
 * 0000000140AC861E: mov     r15d, [rbp+0B30h+var_BB0]
 * 0000000140AC8622: mov     rax, r8
 * 0000000140AC8625: jmp     short loc_140AC862A
 * 0000000140AC8627: xor     r8d, eax
 * 0000000140AC862A: shr     rax, 1Fh
 * 0000000140AC862E: test    rax, rax
 * 0000000140AC8631: jnz     short loc_140AC8627
 * 0000000140AC8633: btr     r8d, 1Fh
 * 0000000140AC8638: lea     edx, [rax+6]
 * 0000000140AC863B: mov     [r11+14h], r8d
 * 0000000140AC863F: add     r12, 4
 * 0000000140AC8643: add     [rsi+7F0h], r15d
 * 0000000140AC864A: add     rdi, 8
 * 0000000140AC864E: lea     r15d, [rax+1]
 * 0000000140AC8652: mov     [rbp+0B30h+var_B38], r12
 * 0000000140AC8656: add     r11, 30h ; '0'
 * 0000000140AC865A: mov     [rsp+0C30h+var_BD8], rdi
 * 0000000140AC865F: sub     [rsp+0C30h+var_BB8], r15
 * 0000000140AC8664: jnz     loc_140AC84D6
 * 0000000140AC866A: mov     r12, [rbp+0B30h+var_B98]
 * 0000000140AC866E: lea     eax, [rdx-4]
 * 0000000140AC8671: mov     r14, [rsp+0C30h+var_BD0]
 * 0000000140AC8676: lea     rcx, [rbp+0B30h+var_B00]
 * 0000000140AC867A: mov     r8d, dword ptr [rbp+0B30h+var_B90]
 * 0000000140AC867E: mov     r9, r14
 * 0000000140AC8681: mov     [rbp+0B30h+var_B00], rsi
 * 0000000140AC8685: mov     dword ptr [r12], 2Ch ; ','
 * 0000000140AC868D: mov     [r12+18h], r14
 * 0000000140AC8692: or      [r12+20h], eax
 * 0000000140AC8697: lea     rax, [rbp+0B30h+var_9F0]
 * 0000000140AC869E: mov     [rsp+0C30h+var_BF8], rax
 * 0000000140AC86A3: lea     rax, [rbp+0B30h+var_A80]
 * 0000000140AC86AA: mov     [rsp+0C30h+var_C00], rax
 * 0000000140AC86AF: lea     eax, [rdx+9]
 * 0000000140AC86B2: mov     rdx, [rbp+0B30h+var_B70]
 * 0000000140AC86B6: mov     dword ptr [rsp+0C30h+var_C08], eax
 * 0000000140AC86BA: mov     eax, [rbp+0B30h+var_BAC]
 * 0000000140AC86BD: mov     dword ptr [rsp+0C30h+BugCheckParameter4], eax
 * 0000000140AC86C1: mov     [rbp+0B30h+var_B18], rsi
 * 0000000140AC86C5: call    sub_140ACF0E0
 * 0000000140AC86CA: xor     r11d, r11d
 * 0000000140AC86CD: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC86D4: test    eax, eax
 * 0000000140AC86D6: jns     short loc_140AC86E0
 * 0000000140AC86D8: mov     rbx, rsi
 * 0000000140AC86DB: jmp     loc_140AC9042
 * 0000000140AC86E0: mov     rbx, [rbp+0B30h+var_B00]
 * 0000000140AC86E4: mov     ecx, 30h ; '0'
 * 0000000140AC86E9: mov     r9d, [rbp+0B30h+var_9F0]
 * 0000000140AC86F0: mov     rax, rbx
 * 0000000140AC86F3: sub     r9d, [rbp+0B30h+var_A80]
 * 0000000140AC86FA: sub     rax, rsi
 * 0000000140AC86FD: mov     esi, [rbp+0B30h+var_A80]
 * 0000000140AC8703: add     r12, rax
 * 0000000140AC8706: mov     [rbp+0B30h+var_B98], r12
 * 0000000140AC870A: lea     edx, [rcx-2Ah]
 * 0000000140AC870D: mov     [rbp+0B30h+var_B18], rbx
 * 0000000140AC8711: add     rsi, r14
 * 0000000140AC8714: lea     r13, [r12+0C0h]
 * 0000000140AC871C: mov     rax, r13
 * 0000000140AC871F: mov     [rax], r11
 * 0000000140AC8722: add     ecx, 0FFFFFFF8h
 * 0000000140AC8725: add     rax, 8
 * 0000000140AC8729: sub     rdx, r15
 * 0000000140AC872C: jnz     short loc_140AC871F
 * 0000000140AC872E: mov     edx, 0FFFFFFFFh
 * 0000000140AC8733: test    ecx, ecx
 * 0000000140AC8735: jz      short loc_140AC8741
 * 0000000140AC8737: mov     [rax], r11b
 * 0000000140AC873A: add     rax, r15
 * 0000000140AC873D: add     ecx, edx
 * 0000000140AC873F: jnz     short loc_140AC8737
 * 0000000140AC8741: mov     dword ptr [r13+0], 0Bh
 * 0000000140AC8749: mov     r10, rsi
 * 0000000140AC874C: mov     [r13+8], rsi
 * 0000000140AC8750: mov     rax, rsi
 * 0000000140AC8753: mov     [r13+10h], r9d
 * 0000000140AC8757: add     [rbx+7F0h], r9d
 * 0000000140AC875E: mov     r11d, [rbx+7DCh]
 * 0000000140AC8765: mov     r15, [rbx+7E0h]
 * 0000000140AC876C: mov     ecx, r9d
 * 0000000140AC876F: add     rcx, rsi
 * 0000000140AC8772: cmp     rsi, rcx
 * 0000000140AC8775: jnb     short loc_140AC8788
 * 0000000140AC8777: mov     r8d, 40h ; '@'
 * 0000000140AC877D: prefetchnta byte ptr [rax]
 * 0000000140AC8780: add     rax, r8
 * 0000000140AC8783: cmp     rax, rcx
 * 0000000140AC8786: jb      short loc_140AC877D
 * 0000000140AC8788: mov     r14d, r9d
 * 0000000140AC878B: mov     r8, r15
 * 0000000140AC878E: shr     r14d, 7
 * 0000000140AC8792: test    r14d, r14d
 * 0000000140AC8795: jz      short loc_140AC8810
 * 0000000140AC8797: mov     r12, 7010008004002001h
 * 0000000140AC87A1: mov     edx, 8
 * 0000000140AC87A6: lea     r13d, [rdx-7]
 * 0000000140AC87AA: mov     rax, [r10]
 * 0000000140AC87AD: mov     ecx, r11d
 * 0000000140AC87B0: xor     rax, r8
 * 0000000140AC87B3: mov     r8, [r10+8]
 * 0000000140AC87B7: rol     rax, cl
 * 0000000140AC87BA: add     r10, 10h
 * 0000000140AC87BE: xor     r8, rax
 * 0000000140AC87C1: rol     r8, cl
 * 0000000140AC87C4: sub     rdx, r13
 * 0000000140AC87C7: jnz     short loc_140AC87AA
 * 0000000140AC87C9: mov     rcx, r10
 * 0000000140AC87CC: sub     rcx, rsi
 * 0000000140AC87CF: xor     rcx, r15
 * 0000000140AC87D2: mov     rax, rcx
 * 0000000140AC87D5: rol     rax, 11h
 * 0000000140AC87D9: xor     rcx, rax
 * 0000000140AC87DC: mov     rax, r12
 * 0000000140AC87DF: mul     rcx
 * 0000000140AC87E2: xor     r11d, edx
 * 0000000140AC87E5: mov     [rbp+0B30h+var_518], rdx
 * 0000000140AC87EC: xor     r11d, eax
 * 0000000140AC87EF: mov     edx, 0FFFFFFFFh
 * 0000000140AC87F4: and     r11d, 3Fh
 * 0000000140AC87F8: mov     rax, r13
 * 0000000140AC87FB: cmovz   r11d, eax
 * 0000000140AC87FF: add     r14d, edx
 * 0000000140AC8802: jnz     short loc_140AC87A1
 * 0000000140AC8804: mov     r12, [rbp+0B30h+var_B98]
 * 0000000140AC8808: lea     r13, [r12+0C0h]
 * 0000000140AC8810: and     r9d, 7Fh
 * 0000000140AC8814: mov     esi, 1
 * 0000000140AC8819: cmp     r9d, 8
 * 0000000140AC881D: jb      short loc_140AC8841
 * 0000000140AC881F: mov     edx, r9d
 * 0000000140AC8822: shr     rdx, 3
 * 0000000140AC8826: xor     r8, [r10]
 * 0000000140AC8829: mov     ecx, r11d
 * 0000000140AC882C: rol     r8, cl
 * 0000000140AC882F: add     r10, 8
 * 0000000140AC8833: add     r9d, 0FFFFFFF8h
 * 0000000140AC8837: sub     rdx, rsi
 * 0000000140AC883A: jnz     short loc_140AC8826
 * 0000000140AC883C: mov     edx, 0FFFFFFFFh
 * 0000000140AC8841: test    r9d, r9d
 * 0000000140AC8844: jz      short loc_140AC885B
 * 0000000140AC8846: movzx   eax, byte ptr [r10]
 * 0000000140AC884A: mov     ecx, r11d
 * 0000000140AC884D: xor     r8, rax
 * 0000000140AC8850: add     r10, rsi
 * 0000000140AC8853: rol     r8, cl
 * 0000000140AC8856: add     r9d, edx
 * 0000000140AC8859: jnz     short loc_140AC8846
 * 0000000140AC885B: mov     rax, r8
 * 0000000140AC885E: shr     rax, 1Fh
 * 0000000140AC8862: xor     r11d, r11d
 * 0000000140AC8865: jmp     short loc_140AC886E
 * 0000000140AC8867: xor     r8d, eax
 * 0000000140AC886A: shr     rax, 1Fh
 * 0000000140AC886E: test    rax, rax
 * 0000000140AC8871: jnz     short loc_140AC8867
 * 0000000140AC8873: btr     r8d, 1Fh
 * 0000000140AC8878: mov     [r13+14h], r8d
 * 0000000140AC887C: mov     dword ptr [r12+0F0h], 30h ; '0'
 * 0000000140AC8888: cmp     [r12+100h], r11d
 * 0000000140AC8890: jz      short loc_140AC889A
 * 0000000140AC8892: or      [r12+108h], esi
 * 0000000140AC889A: lea     r15, [r12+60h]
 * 0000000140AC889F: mov     [rbp+0B30h+var_B18], rbx
 * 0000000140AC88A3: mov     rsi, rbx
 * 0000000140AC88A6: test    r15, r15
 * 0000000140AC88A9: jnz     loc_140AC8B31
 * 0000000140AC88AF: mov     r15d, [rbx+7ACh]
 * 0000000140AC88B6: mov     r8d, [rbx+8ECh]
 * 0000000140AC88BD: lea     eax, [r15+30h]
 * 0000000140AC88C1: cmp     eax, [rbx+9E4h]
 * 0000000140AC88C7: jbe     loc_140AC89A8
 * 0000000140AC88CD: mov     edx, eax
 * 0000000140AC88CF: mov     rcx, rbx
 * 0000000140AC88D2: call    sub_140ACFC24
 * 0000000140AC88D7: xor     r11d, r11d
 * 0000000140AC88DA: mov     r14, rax
 * 0000000140AC88DD: test    rax, rax
 * 0000000140AC88E0: jz      loc_140AC83D8
 * 0000000140AC88E6: mov     ecx, [rbx+958h]
 * 0000000140AC88EC: test    cl, 4
 * 0000000140AC88EF: jnz     loc_140AC899E
 * 0000000140AC88F5: mov     eax, [rbx+7ACh]
 * 0000000140AC88FB: lea     r9d, [r11+1]
 * 0000000140AC88FF: mov     r8, [rbx+790h]
 * 0000000140AC8906: and     ecx, 20000000h
 * 0000000140AC890C: neg     ecx
 * 0000000140AC890E: sbb     edx, edx
 * 0000000140AC8910: and     edx, [rbx+8ECh]
 * 0000000140AC8916: cmp     eax, 8
 * 0000000140AC8919: jb      short loc_140AC8930
 * 0000000140AC891B: mov     ecx, eax
 * 0000000140AC891D: shr     rcx, 3
 * 0000000140AC8921: mov     [rbx], r11
 * 0000000140AC8924: add     eax, 0FFFFFFF8h
 * 0000000140AC8927: add     rbx, 8
 * 0000000140AC892B: sub     rcx, r9
 * 0000000140AC892E: jnz     short loc_140AC8921
 * 0000000140AC8930: test    eax, eax
 * 0000000140AC8932: jz      short loc_140AC8943
 * 0000000140AC8934: mov     ecx, 0FFFFFFFFh
 * 0000000140AC8939: mov     [rbx], r11b
 * 0000000140AC893C: add     rbx, r9
 * 0000000140AC893F: add     eax, ecx
 * 0000000140AC8941: jnz     short loc_140AC8939
 * 0000000140AC8943: mov     ebx, [r14+8ECh]
 * 0000000140AC894A: mov     [r14+8ECh], edx
 * 0000000140AC8951: cmp     edx, 3
 * 0000000140AC8954: jz      short loc_140AC8985
 * 0000000140AC8956: test    dword ptr [r14+958h], 10000000h
 * 0000000140AC8961: jnz     short loc_140AC897C
 * 0000000140AC8963: test    edx, edx
 * 0000000140AC8965: jz      short loc_140AC897C
 * 0000000140AC8967: mov     rax, [r14+218h]
 * 0000000140AC896E: lea     rcx, [r8-8]
 * 0000000140AC8972: mov     rdx, [rcx]
 * 0000000140AC8975: call    j__guard_dispatch_icall_nop
 * 0000000140AC897A: jmp     short loc_140AC8994
 * 0000000140AC897C: mov     rax, [r14+0F0h]
 * 0000000140AC8983: jmp     short loc_140AC898C
 * 0000000140AC8985: mov     rax, [r14+358h]
 * 0000000140AC898C: mov     rcx, r8
 * 0000000140AC898F: call    j__guard_dispatch_icall_nop
 * 0000000140AC8994: mov     [r14+8ECh], ebx
 * 0000000140AC899B: xor     r11d, r11d
 * 0000000140AC899E: and     dword ptr [r14+958h], 0FFFFFFFBh
 * 0000000140AC89A6: jmp     short loc_140AC89B1
 * 0000000140AC89A8: mov     r14, rbx
 * 0000000140AC89AB: mov     [rbx+7ACh], eax
 * 0000000140AC89B1: mov     esi, 1
 * 0000000140AC89B6: add     [r14+7D4h], esi
 * 0000000140AC89BD: add     r15, r14
 * 0000000140AC89C0: mov     [rsp+0C30h+var_BC8], r15
 * 0000000140AC89C5: mov     rax, r15
 * 0000000140AC89C8: lea     ecx, [rsi+2Fh]
 * 0000000140AC89CB: lea     edx, [rsi+5]
 * 0000000140AC89CE: mov     [rax], r11
 * 0000000140AC89D1: add     ecx, 0FFFFFFF8h
 * 0000000140AC89D4: add     rax, 8
 * 0000000140AC89D8: sub     rdx, rsi
 * 0000000140AC89DB: jnz     short loc_140AC89CE
 * 0000000140AC89DD: test    ecx, ecx
 * 0000000140AC89DF: jz      short loc_140AC89F0
 * 0000000140AC89E1: mov     edx, 0FFFFFFFFh
 * 0000000140AC89E6: mov     [rax], r11b
 * 0000000140AC89E9: add     rax, rsi
 * 0000000140AC89EC: add     ecx, edx
 * 0000000140AC89EE: jnz     short loc_140AC89E6
 * 0000000140AC89F0: mov     rax, [rbp+0B30h+var_B68]
 * 0000000140AC89F4: mov     r13d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140AC89FB: mov     r9, rax
 * 0000000140AC89FE: mov     dword ptr [r15], 0Eh
 * 0000000140AC8A05: mov     [r15+8], rax
 * 0000000140AC8A09: mov     [r15+10h], r13d
 * 0000000140AC8A0D: add     [r14+7F0h], r13d
 * 0000000140AC8A14: lea     rcx, [rax+r13]
 * 0000000140AC8A18: mov     r10d, [r14+7DCh]
 * 0000000140AC8A1F: mov     rbx, [r14+7E0h]
 * 0000000140AC8A26: cmp     rax, rcx
 * 0000000140AC8A29: jnb     short loc_140AC8A3B
 * 0000000140AC8A2B: mov     edx, 40h ; '@'
 * 0000000140AC8A30: prefetchnta byte ptr [rax]
 * 0000000140AC8A33: add     rax, rdx
 * 0000000140AC8A36: cmp     rax, rcx
 * 0000000140AC8A39: jb      short loc_140AC8A30
 * 0000000140AC8A3B: mov     r11d, r13d
 * 0000000140AC8A3E: mov     r8, rbx
 * 0000000140AC8A41: shr     r11d, 7
 * 0000000140AC8A45: test    r11d, r11d
 * 0000000140AC8A48: jz      short loc_140AC8ABF
 * 0000000140AC8A4A: mov     r13, [rbp+0B30h+var_B68]
 * 0000000140AC8A4E: mov     r12d, 0FFFFFFFFh
 * 0000000140AC8A54: mov     r15, 7010008004002001h
 * 0000000140AC8A5E: mov     eax, 8
 * 0000000140AC8A63: xor     r8, [r9]
 * 0000000140AC8A66: mov     ecx, r10d
 * 0000000140AC8A69: rol     r8, cl
 * 0000000140AC8A6C: xor     r8, [r9+8]
 * 0000000140AC8A70: add     r9, 10h
 * 0000000140AC8A74: rol     r8, cl
 * 0000000140AC8A77: sub     rax, rsi
 * 0000000140AC8A7A: jnz     short loc_140AC8A63
 * 0000000140AC8A7C: mov     rcx, r9
 * 0000000140AC8A7F: sub     rcx, r13
 * 0000000140AC8A82: xor     rcx, rbx
 * 0000000140AC8A85: mov     rax, rcx
 * 0000000140AC8A88: rol     rax, 11h
 * 0000000140AC8A8C: xor     rcx, rax
 * 0000000140AC8A8F: mov     rax, r15
 * 0000000140AC8A92: mul     rcx
 * 0000000140AC8A95: xor     r10d, edx
 * 0000000140AC8A98: mov     [rbp+0B30h+var_510], rdx
 * 0000000140AC8A9F: xor     r10d, eax
 * 0000000140AC8AA2: and     r10d, 3Fh
 * 0000000140AC8AA6: cmovz   r10d, esi
 * 0000000140AC8AAA: add     r11d, r12d
 * 0000000140AC8AAD: jnz     short loc_140AC8A5E
 * 0000000140AC8AAF: mov     r15, [rsp+0C30h+var_BC8]
 * 0000000140AC8AB4: mov     r12, [rbp+0B30h+var_B98]
 * 0000000140AC8AB8: mov     r13d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140AC8ABF: mov     edx, r13d
 * 0000000140AC8AC2: and     edx, 7Fh
 * 0000000140AC8AC5: cmp     edx, 8
 * 0000000140AC8AC8: jb      short loc_140AC8AE5
 * 0000000140AC8ACA: mov     eax, edx
 * 0000000140AC8ACC: shr     rax, 3
 * 0000000140AC8AD0: xor     r8, [r9]
 * 0000000140AC8AD3: mov     ecx, r10d
 * 0000000140AC8AD6: rol     r8, cl
 * 0000000140AC8AD9: add     r9, 8
 * 0000000140AC8ADD: add     edx, 0FFFFFFF8h
 * 0000000140AC8AE0: sub     rax, rsi
 * 0000000140AC8AE3: jnz     short loc_140AC8AD0
 * 0000000140AC8AE5: test    edx, edx
 * 0000000140AC8AE7: jz      short loc_140AC8B0B
 * 0000000140AC8AE9: mov     r13d, 0FFFFFFFFh
 * 0000000140AC8AEF: movzx   eax, byte ptr [r9]
 * 0000000140AC8AF3: mov     ecx, r10d
 * 0000000140AC8AF6: xor     r8, rax
 * 0000000140AC8AF9: add     r9, rsi
 * 0000000140AC8AFC: rol     r8, cl
 * 0000000140AC8AFF: add     edx, r13d
 * 0000000140AC8B02: jnz     short loc_140AC8AEF
 * 0000000140AC8B04: mov     r13d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140AC8B0B: mov     rax, r8
 * 0000000140AC8B0E: jmp     short loc_140AC8B13
 * 0000000140AC8B10: xor     r8d, eax
 * 0000000140AC8B13: shr     rax, 1Fh
 * 0000000140AC8B17: test    rax, rax
 * 0000000140AC8B1A: jnz     short loc_140AC8B10
 * 0000000140AC8B1C: btr     r8d, 1Fh
 * 0000000140AC8B21: mov     rsi, r14
 * 0000000140AC8B24: mov     [r15+14h], r8d
 * 0000000140AC8B28: add     [r14+7F0h], r13d
 * 0000000140AC8B2F: jmp     short loc_140AC8B3F
 * 0000000140AC8B31: mov     r13d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140AC8B38: mov     dword ptr [r15], 0Eh
 * 0000000140AC8B3F: test    dword ptr [rsi+958h], 40000000h
 * 0000000140AC8B49: jz      short loc_140AC8B63
 * 0000000140AC8B4B: test    r13d, r13d
 * 0000000140AC8B4E: jz      short loc_140AC8B63
 * 0000000140AC8B50: mov     rdx, [rbp+0B30h+var_B68]
 * 0000000140AC8B54: lea     r9, [r15+1Ch]
 * 0000000140AC8B58: mov     r8d, r13d
 * 0000000140AC8B5B: mov     rcx, rsi
 * 0000000140AC8B5E: call    sub_1403F966C
 * 0000000140AC8B63: mov     r13, [rsp+0C30h+var_BD0]
 * 0000000140AC8B68: mov     eax, 1
 * 0000000140AC8B6D: mov     [r15+18h], eax
 * 0000000140AC8B71: mov     r15d, eax
 * 0000000140AC8B74: mov     dword ptr [r12+90h], 23h ; '#'
 * 0000000140AC8B80: or      [r12+0B8h], r15d
 * 0000000140AC8B88: cmp     dword ptr [r12+0A0h], 94h
 * 0000000140AC8B94: mov     [rbp+0B30h+var_B18], rsi
 * 0000000140AC8B98: jb      loc_140AC8C32
 * 0000000140AC8B9E: mov     rax, [rsi+1E8h]
 * 0000000140AC8BA5: mov     rcx, r13
 * 0000000140AC8BA8: mov     rbx, [r12+98h]
 * 0000000140AC8BB0: call    j__guard_dispatch_icall_nop
 * 0000000140AC8BB5: xor     r11d, r11d
 * 0000000140AC8BB8: test    rax, rax
 * 0000000140AC8BBB: jnz     short loc_140AC8BCE
 * 0000000140AC8BBD: mov     [rbp+0B30h+var_B00], r11
 * 0000000140AC8BC1: mov     eax, 0C000009Ah
 * 0000000140AC8BC6: mov     rbx, rsi
 * 0000000140AC8BC9: jmp     loc_140AC9053
 * 0000000140AC8BCE: mov     r8d, [rax+50h]
 * 0000000140AC8BD2: mov     edx, [r12+0B8h]
 * 0000000140AC8BDA: add     r8, r13
 * 0000000140AC8BDD: or      edx, 2
 * 0000000140AC8BE0: mov     [r12+0B8h], edx
 * 0000000140AC8BE8: mov     ecx, edx
 * 0000000140AC8BEA: mov     rax, [rbx+70h]
 * 0000000140AC8BEE: cmp     rax, r13
 * 0000000140AC8BF1: jb      short loc_140AC8C0E
 * 0000000140AC8BF3: cmp     rax, r8
 * 0000000140AC8BF6: jnb     short loc_140AC8C0E
 * 0000000140AC8BF8: mov     rax, [rax]
 * 0000000140AC8BFB: or      ecx, 4
 * 0000000140AC8BFE: mov     [r12+0A8h], rax
 * 0000000140AC8C06: mov     [r12+0B8h], ecx
 * 0000000140AC8C0E: mov     rax, [rbx+78h]
 * 0000000140AC8C12: cmp     rax, r13
 * 0000000140AC8C15: jb      short loc_140AC8C32
 * 0000000140AC8C17: cmp     rax, r8
 * 0000000140AC8C1A: jnb     short loc_140AC8C32
 * 0000000140AC8C1C: mov     rax, [rax]
 * 0000000140AC8C1F: or      ecx, 8
 * 0000000140AC8C22: mov     [r12+0B0h], rax
 * 0000000140AC8C2A: mov     [r12+0B8h], ecx
 * 0000000140AC8C32: test    dword ptr [rsi+958h], 400000h
 * 0000000140AC8C3C: mov     [rbp+0B30h+var_B00], rsi
 * 0000000140AC8C40: jz      loc_140AC9BB4
 * 0000000140AC8C46: mov     rax, [rsi+1E8h]
 * 0000000140AC8C4D: mov     rcx, r13
 * 0000000140AC8C50: call    j__guard_dispatch_icall_nop
 * 0000000140AC8C55: xor     r11d, r11d
 * 0000000140AC8C58: mov     [rsp+0C30h+var_BC8], rax
 * 0000000140AC8C5D: mov     r15, rax
 * 0000000140AC8C60: test    rax, rax
 * 0000000140AC8C63: jnz     short loc_140AC8C6F
 * 0000000140AC8C65: mov     eax, 0C000007Bh
 * 0000000140AC8C6A: jmp     loc_140AC9037
 * 0000000140AC8C6F: movzx   r10d, word ptr [r15+6]
 * 0000000140AC8C74: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140AC8C7E: mov     ecx, dword ptr [rbp+0B30h+var_B90]
 * 0000000140AC8C81: mul     rcx
 * 0000000140AC8C84: mov     word ptr [rbp+0B30h+arg_8], r10w
 * 0000000140AC8C8C: mov     r9, rdx
 * 0000000140AC8C8F: shr     r9, 3
 * 0000000140AC8C93: mov     [rbp+0B30h+var_B68], r9
 * 0000000140AC8C97: test    r10w, r10w
 * 0000000140AC8C9B: jnz     short loc_140AC8D00
 * 0000000140AC8C9D: test    dword ptr [rsi+958h], 200000h
 * 0000000140AC8CA7: jz      loc_140ACCB43
 * 0000000140AC8CAD: cmp     [rsi+8C0h], r11d
 * 0000000140AC8CB4: jnz     short loc_140AC8C65
 * 0000000140AC8CB6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC8CC0: add     rax, rsi
 * 0000000140AC8CC3: mov     [rsi+8C8h], rax
 * 0000000140AC8CCA: mov     eax, 1
 * 0000000140AC8CCF: mov     [rsi+8D0h], r11
 * 0000000140AC8CD6: mov     qword ptr [rsi+8D8h], 10Fh
 * 0000000140AC8CE1: mov     [rsi+8E0h], r13
 * 0000000140AC8CE8: mov     [rsi+8C0h], eax
 * 0000000140AC8CEE: xor     edx, edx
 * 0000000140AC8CF0: mov     rcx, rsi
 * 0000000140AC8CF3: call    sub_140AD049C
 * 0000000140AC8CF8: xor     r11d, r11d
 * 0000000140AC8CFB: jmp     loc_140AC8C65
 * 0000000140AC8D00: mov     rdx, [rbp+0B30h+var_B70]
 * 0000000140AC8D04: lea     r12, [r15+18h]
 * 0000000140AC8D08: mov     eax, r9d
 * 0000000140AC8D0B: mov     rbx, rdx
 * 0000000140AC8D0E: mov     r8d, 1
 * 0000000140AC8D14: lea     rcx, [rax+rax*2]
 * 0000000140AC8D18: lea     rax, [rdx+rcx*4]
 * 0000000140AC8D1C: mov     ecx, r11d
 * 0000000140AC8D1F: mov     [rbp+0B30h+var_BA8], rax
 * 0000000140AC8D23: movzx   eax, word ptr [r15+14h]
 * 0000000140AC8D28: add     r12, rax
 * 0000000140AC8D2B: mov     [rsp+0C30h+var_BC0], ecx
 * 0000000140AC8D2F: mov     [rbp+0B30h+var_B98], r12
 * 0000000140AC8D33: mov     eax, r10d
 * 0000000140AC8D36: test    r10d, r10d
 * 0000000140AC8D39: jz      loc_140AC8F5A
 * 0000000140AC8D3F: add     r12, 8
 * 0000000140AC8D43: mov     r15d, [r12+8]
 * 0000000140AC8D48: mov     eax, [r12]
 * 0000000140AC8D4C: cmp     r15d, eax
 * 0000000140AC8D4F: mov     edx, [r12+4]
 * 0000000140AC8D54: cmovbe  r15d, eax
 * 0000000140AC8D58: mov     [rbp+0B30h+var_BAC], edx
 * 0000000140AC8D5B: add     r15d, edx
 * 0000000140AC8D5E: test    ecx, ecx
 * 0000000140AC8D60: jz      short loc_140AC8D7C
 * 0000000140AC8D62: lea     eax, [rcx-1]
 * 0000000140AC8D65: mov     rcx, [rbp+0B30h+var_B98]
 * 0000000140AC8D69: lea     rax, [rax+rax*4]
 * 0000000140AC8D6D: cmp     r15d, [rcx+rax*8+0Ch]
 * 0000000140AC8D72: jb      loc_140AC8F72
 * 0000000140AC8D78: mov     ecx, [rsp+0C30h+var_BC0]
 * 0000000140AC8D7C: cmp     rbx, [rbp+0B30h+var_BA8]
 * 0000000140AC8D80: jz      loc_140AC8F36
 * 0000000140AC8D86: mov     ecx, [rbx]
 * 0000000140AC8D88: mov     eax, [rbx+4]
 * 0000000140AC8D8B: cmp     ecx, r15d
 * 0000000140AC8D8E: jnb     loc_140AC8F24
 * 0000000140AC8D94: cmp     eax, edx
 * 0000000140AC8D96: jbe     loc_140AC8F24
 * 0000000140AC8D9C: cmp     ecx, edx
 * 0000000140AC8D9E: jb      loc_140AC8FC8
 * 0000000140AC8DA4: cmp     eax, r15d
 * 0000000140AC8DA7: ja      loc_140AC8FC8
 * 0000000140AC8DAD: mov     eax, [rbx+8]
 * 0000000140AC8DB0: mov     ecx, 1
 * 0000000140AC8DB5: test    cl, al
 * 0000000140AC8DB7: jnz     short loc_140AC8DC5
 * 0000000140AC8DB9: mov     al, [rax+r13]
 * 0000000140AC8DBD: test    al, 20h
 * 0000000140AC8DBF: jz      loc_140AC8F16
 * 0000000140AC8DC5: mov     eax, [r12]
 * 0000000140AC8DC9: mov     rdx, r13
 * 0000000140AC8DCC: mov     ecx, [r12+4]
 * 0000000140AC8DD1: mov     r14d, [r12+8]
 * 0000000140AC8DD6: cmp     r14d, eax
 * 0000000140AC8DD9: mov     [rbp+0B30h+var_BB0], ecx
 * 0000000140AC8DDC: cmovbe  r14d, eax
 * 0000000140AC8DE0: mov     rax, [rsi+408h]
 * 0000000140AC8DE7: add     r14d, ecx
 * 0000000140AC8DEA: mov     rcx, rbx
 * 0000000140AC8DED: call    j__guard_dispatch_icall_nop
 * 0000000140AC8DF2: mov     r13, rax
 * 0000000140AC8DF5: mov     eax, [rbp+0B30h+var_BB0]
 * 0000000140AC8DF8: cmp     [r13+0], eax
 * 0000000140AC8DFC: jb      short loc_140AC8E04
 * 0000000140AC8DFE: cmp     [r13+4], r14d
 * 0000000140AC8E02: jbe     short loc_140AC8E70
 * 0000000140AC8E04: mov     r8, [rsp+0C30h+var_BD0]; BugCheckParameter2
 * 0000000140AC8E09: mov     edx, r13d
 * 0000000140AC8E0C: sub     edx, r8d
 * 0000000140AC8E0F: mov     eax, 80000000h
 * 0000000140AC8E14: or      edx, eax
 * 0000000140AC8E16: test    dword ptr [rsi+958h], 200000h
 * 0000000140AC8E20: jz      loc_140ACCBE8
 * 0000000140AC8E26: xor     ecx, ecx
 * 0000000140AC8E28: cmp     [rsi+8C0h], ecx
 * 0000000140AC8E2E: jnz     short loc_140AC8E70
 * 0000000140AC8E30: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC8E3A: xor     edx, edx
 * 0000000140AC8E3C: add     rax, rsi
 * 0000000140AC8E3F: mov     [rsi+8C8h], rax
 * 0000000140AC8E46: lea     eax, [rcx+1]
 * 0000000140AC8E49: mov     [rsi+8D0h], rcx
 * 0000000140AC8E50: mov     rcx, rsi
 * 0000000140AC8E53: mov     qword ptr [rsi+8D8h], 10Fh
 * 0000000140AC8E5E: mov     [rsi+8E0h], r8
 * 0000000140AC8E65: mov     [rsi+8C0h], eax
 * 0000000140AC8E6B: call    sub_140AD049C
 * 0000000140AC8E70: mov     r8d, [r13+0]
 * 0000000140AC8E74: mov     rcx, r13
 * 0000000140AC8E77: add     r8, [rsp+0C30h+var_BD0]
 * 0000000140AC8E7C: mov     rax, [rsi+410h]
 * 0000000140AC8E83: mov     rdx, [rsp+0C30h+var_BD0]
 * 0000000140AC8E88: call    j__guard_dispatch_icall_nop
 * 0000000140AC8E8D: mov     rdx, rax
 * 0000000140AC8E90: mov     eax, [rbp+0B30h+var_BB0]
 * 0000000140AC8E93: cmp     [rdx], eax
 * 0000000140AC8E95: jb      short loc_140AC8E9D
 * 0000000140AC8E97: cmp     [rdx+4], r14d
 * 0000000140AC8E9B: jbe     short loc_140AC8F0B
 * 0000000140AC8E9D: mov     r13, [rsp+0C30h+var_BD0]
 * 0000000140AC8EA2: mov     eax, 80000000h
 * 0000000140AC8EA7: sub     edx, r13d
 * 0000000140AC8EAA: or      edx, eax
 * 0000000140AC8EAC: test    dword ptr [rsi+958h], 200000h
 * 0000000140AC8EB6: jz      loc_140ACCBBF
 * 0000000140AC8EBC: xor     r11d, r11d
 * 0000000140AC8EBF: cmp     [rsi+8C0h], r11d
 * 0000000140AC8EC6: jnz     short loc_140AC8F13
 * 0000000140AC8EC8: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC8ED2: xor     edx, edx
 * 0000000140AC8ED4: add     rax, rsi
 * 0000000140AC8ED7: mov     rcx, rsi
 * 0000000140AC8EDA: mov     [rsi+8C8h], rax
 * 0000000140AC8EE1: lea     eax, [r11+1]
 * 0000000140AC8EE5: mov     [rsi+8D0h], r11
 * 0000000140AC8EEC: mov     qword ptr [rsi+8D8h], 10Fh
 * 0000000140AC8EF7: mov     [rsi+8E0h], r13
 * 0000000140AC8EFE: mov     [rsi+8C0h], eax
 * 0000000140AC8F04: call    sub_140AD049C
 * 0000000140AC8F09: jmp     short loc_140AC8F10
 * 0000000140AC8F0B: mov     r13, [rsp+0C30h+var_BD0]
 * 0000000140AC8F10: xor     r11d, r11d
 * 0000000140AC8F13: mov     edx, [rbp+0B30h+var_BAC]
 * 0000000140AC8F16: add     rbx, 0Ch
 * 0000000140AC8F1A: cmp     rbx, [rbp+0B30h+var_BA8]
 * 0000000140AC8F1E: jnz     loc_140AC8D86
 * 0000000140AC8F24: mov     ecx, [rsp+0C30h+var_BC0]
 * 0000000140AC8F28: mov     r8d, 1
 * 0000000140AC8F2E: movzx   r10d, word ptr [rbp+0B30h+arg_8]
 * 0000000140AC8F36: add     ecx, r8d
 * 0000000140AC8F39: movzx   eax, r10w
 * 0000000140AC8F3D: add     r12, 28h ; '('
 * 0000000140AC8F41: mov     [rsp+0C30h+var_BC0], ecx
 * 0000000140AC8F45: cmp     ecx, eax
 * 0000000140AC8F47: jb      loc_140AC8D43
 * 0000000140AC8F4D: mov     r9, [rbp+0B30h+var_B68]
 * 0000000140AC8F51: mov     r15, [rsp+0C30h+var_BC8]
 * 0000000140AC8F56: mov     r12, [rbp+0B30h+var_B98]
 * 0000000140AC8F5A: cmp     rbx, [rbp+0B30h+var_BA8]
 * 0000000140AC8F5E: jz      short loc_140AC8FDD
 * 0000000140AC8F60: test    dword ptr [rsi+958h], 200000h
 * 0000000140AC8F6A: jz      loc_140ACCB6B
 * 0000000140AC8F70: jmp     short loc_140AC8F82
 * 0000000140AC8F72: test    dword ptr [rsi+958h], 200000h
 * 0000000140AC8F7C: jz      loc_140ACCB96
 * 0000000140AC8F82: cmp     [rsi+8C0h], r11d
 * 0000000140AC8F89: jnz     loc_140AC8C65
 * 0000000140AC8F8F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC8F99: add     rax, rsi
 * 0000000140AC8F9C: mov     [rsi+8C8h], rax
 * 0000000140AC8FA3: mov     [rsi+8D0h], r11
 * 0000000140AC8FAA: mov     qword ptr [rsi+8D8h], 10Fh
 * 0000000140AC8FB5: mov     [rsi+8E0h], r13
 * 0000000140AC8FBC: mov     [rsi+8C0h], r8d
 * 0000000140AC8FC3: jmp     loc_140AC8CEE
 * 0000000140AC8FC8: test    dword ptr [rsi+958h], 200000h
 * 0000000140AC8FD2: jz      loc_140ACCC0E
 * 0000000140AC8FD8: jmp     loc_140AC8CAD
 * 0000000140AC8FDD: test    r9d, r9d
 * 0000000140AC8FE0: jz      short loc_140AC8FEB
 * 0000000140AC8FE2: lea     ecx, [r9+6]
 * 0000000140AC8FE6: and     ecx, 0FFFFFFF8h
 * 0000000140AC8FE9: jmp     short loc_140AC8FEE
 * 0000000140AC8FEB: mov     ecx, r11d
 * 0000000140AC8FEE: mov     r14d, [rsi+7ACh]
 * 0000000140AC8FF5: lea     eax, [rax+rax*2]
 * 0000000140AC8FF8: mov     r8d, [rsi+8ECh]
 * 0000000140AC8FFF: lea     ecx, [rcx+rax*8]
 * 0000000140AC9002: lea     eax, [r14+30h]
 * 0000000140AC9006: add     eax, ecx
 * 0000000140AC9008: cmp     eax, [rsi+9E4h]
 * 0000000140AC900E: jbe     loc_140AC9204
 * 0000000140AC9014: mov     edx, eax
 * 0000000140AC9016: mov     rcx, rsi
 * 0000000140AC9019: call    sub_140ACFC24
 * 0000000140AC901E: xor     r11d, r11d
 * 0000000140AC9021: mov     [rsp+0C30h+var_BB8], rax
 * 0000000140AC9026: mov     rbx, rax
 * 0000000140AC9029: test    rax, rax
 * 0000000140AC902C: jnz     loc_140AC9139
 * 0000000140AC9032: mov     eax, 0C000009Ah
 * 0000000140AC9037: mov     rbx, rsi
 * 0000000140AC903A: test    eax, eax
 * 0000000140AC903C: jns     loc_140AC9BBB
 * 0000000140AC9042: cmp     eax, 0C000010Eh
 * 0000000140AC9047: jz      loc_140AC9BBB
 * 0000000140AC904D: mov     r15d, 1
 * 0000000140AC9053: test    eax, eax
 * 0000000140AC9055: jns     short loc_140AC9062
 * 0000000140AC9057: cmp     eax, 0C000010Eh
 * 0000000140AC905C: jnz     loc_140AC7B2A
 * 0000000140AC9062: mov     rax, [rbx+548h]
 * 0000000140AC9069: lea     rdx, [rbp+0B30h+var_148]
 * 0000000140AC9070: mov     rcx, [rax+20h]
 * 0000000140AC9074: mov     rax, [rbx+1F0h]
 * 0000000140AC907B: call    j__guard_dispatch_icall_nop
 * 0000000140AC9080: mov     rcx, [rbp+0B30h+var_140]
 * 0000000140AC9087: xor     r11d, r11d
 * 0000000140AC908A: test    rcx, rcx
 * 0000000140AC908D: jz      loc_140ACA293
 * 0000000140AC9093: mov     [rbx+940h], rcx
 * 0000000140AC909A: mov     rax, [rbx+1E8h]
 * 0000000140AC90A1: call    j__guard_dispatch_icall_nop
 * 0000000140AC90A6: xor     r11d, r11d
 * 0000000140AC90A9: test    rax, rax
 * 0000000140AC90AC: jz      loc_140ACA293
 * 0000000140AC90B2: mov     eax, [rax+50h]
 * 0000000140AC90B5: mov     [rbx+93Ch], eax
 * 0000000140AC90BB: mov     dword ptr [rbx+920h], 8
 * 0000000140AC90C5: mov     r15, [rbx+5D8h]
 * 0000000140AC90CC: test    r15, r15
 * 0000000140AC90CF: jz      loc_140AC9DF4
 * 0000000140AC90D5: cmp     [r15], r11
 * 0000000140AC90D8: jz      loc_140AC9DF4
 * 0000000140AC90DE: mov     r9d, [rbx+800h]
 * 0000000140AC90E5: mov     r12d, 20h ; ' '
 * 0000000140AC90EB: mov     r13d, [rbx+7ACh]
 * 0000000140AC90F2: cmp     r9d, 7
 * 0000000140AC90F6: mov     r8d, [rbx+8ECh]
 * 0000000140AC90FD: cmovnz  r12d, r11d
 * 0000000140AC9101: mov     dword ptr [rbp+0B30h+arg_8], r9d
 * 0000000140AC9108: lea     eax, [r13+30h]
 * 0000000140AC910C: cmp     eax, [rbx+9E4h]
 * 0000000140AC9112: jbe     loc_140AC9D21
 * 0000000140AC9118: mov     edx, eax
 * 0000000140AC911A: mov     rcx, rbx
 * 0000000140AC911D: call    sub_140ACFC24
 * 0000000140AC9122: xor     r11d, r11d
 * 0000000140AC9125: mov     r14, rax
 * 0000000140AC9128: test    rax, rax
 * 0000000140AC912B: jnz     loc_140AC9C56
 * 0000000140AC9131: mov     rbx, rsi
 * 0000000140AC9134: jmp     loc_140AC7B24
 * 0000000140AC9139: mov     ecx, [rsi+958h]
 * 0000000140AC913F: test    cl, 4
 * 0000000140AC9142: jnz     loc_140AC91EF
 * 0000000140AC9148: mov     eax, [rsi+7ACh]
 * 0000000140AC914E: and     ecx, 20000000h
 * 0000000140AC9154: mov     r8, [rsi+790h]
 * 0000000140AC915B: neg     ecx
 * 0000000140AC915D: mov     r9d, 1
 * 0000000140AC9163: sbb     edx, edx
 * 0000000140AC9165: and     edx, [rsi+8ECh]
 * 0000000140AC916B: cmp     eax, 8
 * 0000000140AC916E: jb      short loc_140AC9185
 * 0000000140AC9170: mov     ecx, eax
 * 0000000140AC9172: shr     rcx, 3
 * 0000000140AC9176: mov     [rsi], r11
 * 0000000140AC9179: add     eax, 0FFFFFFF8h
 * 0000000140AC917C: add     rsi, 8
 * 0000000140AC9180: sub     rcx, r9
 * 0000000140AC9183: jnz     short loc_140AC9176
 * 0000000140AC9185: test    eax, eax
 * 0000000140AC9187: jz      short loc_140AC9198
 * 0000000140AC9189: mov     ecx, 0FFFFFFFFh
 * 0000000140AC918E: mov     [rsi], r11b
 * 0000000140AC9191: add     rsi, r9
 * 0000000140AC9194: add     eax, ecx
 * 0000000140AC9196: jnz     short loc_140AC918E
 * 0000000140AC9198: mov     esi, [rbx+8ECh]
 * 0000000140AC919E: mov     [rbx+8ECh], edx
 * 0000000140AC91A4: cmp     edx, 3
 * 0000000140AC91A7: jz      short loc_140AC91D7
 * 0000000140AC91A9: test    dword ptr [rbx+958h], 10000000h
 * 0000000140AC91B3: jnz     short loc_140AC91CE
 * 0000000140AC91B5: test    edx, edx
 * 0000000140AC91B7: jz      short loc_140AC91CE
 * 0000000140AC91B9: mov     rax, [rbx+218h]
 * 0000000140AC91C0: lea     rcx, [r8-8]
 * 0000000140AC91C4: mov     rdx, [rcx]
 * 0000000140AC91C7: call    j__guard_dispatch_icall_nop
 * 0000000140AC91CC: jmp     short loc_140AC91E6
 * 0000000140AC91CE: mov     rax, [rbx+0F0h]
 * 0000000140AC91D5: jmp     short loc_140AC91DE
 * 0000000140AC91D7: mov     rax, [rbx+358h]
 * 0000000140AC91DE: mov     rcx, r8
 * 0000000140AC91E1: call    j__guard_dispatch_icall_nop
 * 0000000140AC91E6: mov     [rbx+8ECh], esi
 * 0000000140AC91EC: xor     r11d, r11d
 * 0000000140AC91EF: and     dword ptr [rbx+958h], 0FFFFFFFBh
 * 0000000140AC91F6: mov     r9, [rbp+0B30h+var_B68]
 * 0000000140AC91FA: movzx   r10d, word ptr [rbp+0B30h+arg_8]
 * 0000000140AC9202: jmp     short loc_140AC9212
 * 0000000140AC9204: mov     rbx, rsi
 * 0000000140AC9207: mov     [rsi+7ACh], eax
 * 0000000140AC920D: mov     [rsp+0C30h+var_BB8], rbx
 * 0000000140AC9212: mov     esi, 1
 * 0000000140AC9217: lea     rcx, [rbx+r14]
 * 0000000140AC921B: add     [rbx+7D4h], esi
 * 0000000140AC9221: mov     rax, rcx
 * 0000000140AC9224: lea     edx, [rsi+2Fh]
 * 0000000140AC9227: lea     r8d, [rsi+5]
 * 0000000140AC922B: mov     [rax], r11
 * 0000000140AC922E: add     edx, 0FFFFFFF8h
 * 0000000140AC9231: add     rax, 8
 * 0000000140AC9235: sub     r8, rsi
 * 0000000140AC9238: jnz     short loc_140AC922B
 * 0000000140AC923A: test    edx, edx
 * 0000000140AC923C: jz      short loc_140AC924F
 * 0000000140AC923E: mov     r8d, 0FFFFFFFFh
 * 0000000140AC9244: mov     [rax], r11b
 * 0000000140AC9247: add     rax, rsi
 * 0000000140AC924A: add     edx, r8d
 * 0000000140AC924D: jnz     short loc_140AC9244
 * 0000000140AC924F: mov     r14, [rbp+0B30h+var_B70]
 * 0000000140AC9253: mov     dword ptr [rcx], 1Eh
 * 0000000140AC9259: mov     [rcx+8], r14
 * 0000000140AC925D: mov     [rcx+10h], r11d
 * 0000000140AC9261: mov     rdx, [rbx+7E0h]
 * 0000000140AC9268: mov     rax, rdx
 * 0000000140AC926B: jmp     short loc_140AC926F
 * 0000000140AC926D: xor     edx, eax
 * 0000000140AC926F: shr     rax, 1Fh
 * 0000000140AC9273: test    rax, rax
 * 0000000140AC9276: jnz     short loc_140AC926D
 * 0000000140AC9278: btr     edx, 1Fh
 * 0000000140AC927C: mov     [rbp+0B30h+var_B00], rbx
 * 0000000140AC9280: mov     [rcx+14h], edx
 * 0000000140AC9283: mov     rsi, rbx
 * 0000000140AC9286: mov     [rcx+18h], r13
 * 0000000140AC928A: mov     eax, [r15+50h]
 * 0000000140AC928E: mov     r15d, 1
 * 0000000140AC9294: mov     [rcx+20h], eax
 * 0000000140AC9297: mov     eax, dword ptr [rbp+0B30h+var_B90]
 * 0000000140AC929A: mov     [rcx+24h], eax
 * 0000000140AC929D: mov     [rcx+28h], r10w
 * 0000000140AC92A2: or      [rcx+2Ah], r15w
 * 0000000140AC92A7: add     rcx, 30h ; '0'
 * 0000000140AC92AB: mov     [rbp+0B30h+var_B88], rcx
 * 0000000140AC92AF: test    r9d, r9d
 * 0000000140AC92B2: jz      short loc_140AC92C5
 * 0000000140AC92B4: lea     r11d, [r9-1]
 * 0000000140AC92B8: add     r11, 7
 * 0000000140AC92BC: and     r11, 0FFFFFFFFFFFFFFF8h
 * 0000000140AC92C0: add     r11, rcx
 * 0000000140AC92C3: jmp     short loc_140AC92C8
 * 0000000140AC92C5: mov     r11, rcx
 * 0000000140AC92C8: movzx   eax, r10w
 * 0000000140AC92CC: mov     [rbp+0B30h+var_B78], r11
 * 0000000140AC92D0: lea     rcx, [rax+rax*2]
 * 0000000140AC92D4: lea     r8, [r11+rcx*8]
 * 0000000140AC92D8: xor     ecx, ecx
 * 0000000140AC92DA: mov     [rsp+0C30h+var_BC8], r8
 * 0000000140AC92DF: lea     rax, [r14+0Ch]
 * 0000000140AC92E3: test    r9d, r9d
 * 0000000140AC92E6: jnz     short loc_140AC92EC
 * 0000000140AC92E8: mov     rax, [rbp+0B30h+var_BA8]
 * 0000000140AC92EC: mov     [rsp+0C30h+var_BD8], rax
 * 0000000140AC92F1: cmp     cx, r10w
 * 0000000140AC92F5: jnb     short loc_140AC932F
 * 0000000140AC92F7: movzx   edx, r10w
 * 0000000140AC92FB: lea     rax, [r11+8]
 * 0000000140AC92FF: xor     r10d, r10d
 * 0000000140AC9302: mov     r9d, 80000000h
 * 0000000140AC9308: lea     r13d, [r10+2]
 * 0000000140AC930C: mov     rcx, r13
 * 0000000140AC930F: mov     [rax-8], r10d
 * 0000000140AC9313: mov     [rax-4], r10d
 * 0000000140AC9317: mov     [rax], r9d
 * 0000000140AC931A: add     rax, 0Ch
 * 0000000140AC931E: sub     rcx, r15
 * 0000000140AC9321: jnz     short loc_140AC930F
 * 0000000140AC9323: sub     rdx, r15
 * 0000000140AC9326: jnz     short loc_140AC930C
 * 0000000140AC9328: mov     r13, [rsp+0C30h+var_BD0]
 * 0000000140AC932D: jmp     short loc_140AC9332
 * 0000000140AC932F: xor     r10d, r10d
 * 0000000140AC9332: cmp     r11, r8
 * 0000000140AC9335: jz      loc_140AC9BB4
 * 0000000140AC933B: test    dword ptr [r12+24h], 2000000h
 * 0000000140AC9344: mov     dword ptr [rbp+0B30h+arg_8], r10d
 * 0000000140AC934B: jnz     short loc_140AC9363
 * 0000000140AC934D: mov     eax, [r12]
 * 0000000140AC9351: cmp     eax, 54494E49h
 * 0000000140AC9356: jnz     short loc_140AC9371
 * 0000000140AC9358: cmp     dword ptr [r12+4], 4742444Bh
 * 0000000140AC9361: jnz     short loc_140AC939E
 * 0000000140AC9363: mov     edx, r15d
 * 0000000140AC9366: mov     dword ptr [rbp+0B30h+arg_8], edx
 * 0000000140AC936C: jmp     loc_140AC94AB
 * 0000000140AC9371: cmp     eax, 45474150h
 * 0000000140AC9376: jnz     short loc_140AC939E
 * 0000000140AC9378: movzx   eax, word ptr [r12+4]
 * 0000000140AC937E: mov     ecx, 7877h
 * 0000000140AC9383: cmp     ax, cx
 * 0000000140AC9386: jz      short loc_140AC9363
 * 0000000140AC9388: mov     ecx, 7277h
 * 0000000140AC938D: cmp     ax, cx
 * 0000000140AC9390: jz      short loc_140AC9363
 * 0000000140AC9392: mov     ecx, 7777h
 * 0000000140AC9397: cmp     ax, cx
 * 0000000140AC939A: jnz     short loc_140AC93B2
 * 0000000140AC939C: jmp     short loc_140AC9363
 * 0000000140AC939E: cmp     eax, 41525245h
 * 0000000140AC93A3: jnz     short loc_140AC93B2
 * 0000000140AC93A5: mov     eax, 4154h
 * 0000000140AC93AA: cmp     [r12+4], ax
 * 0000000140AC93B0: jz      short loc_140AC9363
 * 0000000140AC93B2: mov     r8, [rbx+8F8h]
 * 0000000140AC93B9: mov     r9, r12
 * 0000000140AC93BC: mov     r10, [rbx+900h]
 * 0000000140AC93C3: sub     r9, r8
 * 0000000140AC93C6: mov     r11, [rbx+908h]
 * 0000000140AC93CD: mov     r14d, 7
 * 0000000140AC93D3: mov     rsi, [rbx+910h]
 * 0000000140AC93DA: movzx   edx, byte ptr [r8+r9]
 * 0000000140AC93DF: movzx   eax, byte ptr [r8]
 * 0000000140AC93E3: add     r8, r15
 * 0000000140AC93E6: cmp     rdx, rax
 * 0000000140AC93E9: jnz     short loc_140AC93FA
 * 0000000140AC93EB: mov     eax, 0FFFFFFFFh
 * 0000000140AC93F0: add     r14d, eax
 * 0000000140AC93F3: jnz     short loc_140AC93DA
 * 0000000140AC93F5: jmp     loc_140AC948F
 * 0000000140AC93FA: mov     r8d, 8
 * 0000000140AC9400: mov     r9, r12
 * 0000000140AC9403: mov     rcx, [r9]
 * 0000000140AC9406: add     r9, 8
 * 0000000140AC940A: mov     rax, [r10]
 * 0000000140AC940D: add     r10, 8
 * 0000000140AC9411: cmp     rcx, rax
 * 0000000140AC9414: jnz     short loc_140AC9444
 * 0000000140AC9416: add     r8d, 0FFFFFFF8h
 * 0000000140AC941A: cmp     r8d, 8
 * 0000000140AC941E: jnb     short loc_140AC9403
 * 0000000140AC9420: test    r8d, r8d
 * 0000000140AC9423: jz      short loc_140AC948F
 * 0000000140AC9425: movzx   edx, byte ptr [r9]
 * 0000000140AC9429: add     r9, r15
 * 0000000140AC942C: movzx   eax, byte ptr [r10]
 * 0000000140AC9430: add     r10, r15
 * 0000000140AC9433: cmp     rdx, rax
 * 0000000140AC9436: jnz     short loc_140AC9444
 * 0000000140AC9438: mov     eax, 0FFFFFFFFh
 * 0000000140AC943D: add     r8d, eax
 * 0000000140AC9440: jnz     short loc_140AC9425
 * 0000000140AC9442: jmp     short loc_140AC948F
 * 0000000140AC9444: mov     r8, r12
 * 0000000140AC9447: mov     r9d, 4
 * 0000000140AC944D: sub     r8, r11
 * 0000000140AC9450: mov     r10d, 0FFFFFFFFh
 * 0000000140AC9456: movzx   edx, byte ptr [r11+r8]
 * 0000000140AC945B: movzx   eax, byte ptr [r11]
 * 0000000140AC945F: add     r11, r15
 * 0000000140AC9462: cmp     rdx, rax
 * 0000000140AC9465: jnz     short loc_140AC946E
 * 0000000140AC9467: add     r9d, r10d
 * 0000000140AC946A: jnz     short loc_140AC9456
 * 0000000140AC946C: jmp     short loc_140AC948F
 * 0000000140AC946E: mov     r8, r12
 * 0000000140AC9471: mov     r9d, 6
 * 0000000140AC9477: sub     r8, rsi
 * 0000000140AC947A: movzx   edx, byte ptr [rsi+r8]
 * 0000000140AC947F: movzx   eax, byte ptr [rsi]
 * 0000000140AC9482: add     rsi, r15
 * 0000000140AC9485: cmp     rdx, rax
 * 0000000140AC9488: jnz     short loc_140AC949A
 * 0000000140AC948A: add     r9d, r10d
 * 0000000140AC948D: jnz     short loc_140AC947A
 * 0000000140AC948F: mov     edx, r15d
 * 0000000140AC9492: mov     dword ptr [rbp+0B30h+arg_8], edx
 * 0000000140AC9498: jmp     short loc_140AC94A0
 * 0000000140AC949A: mov     edx, dword ptr [rbp+0B30h+arg_8]
 * 0000000140AC94A0: mov     r14, [rbp+0B30h+var_B70]
 * 0000000140AC94A4: xor     r10d, r10d
 * 0000000140AC94A7: mov     r11, [rbp+0B30h+var_B78]
 * 0000000140AC94AB: mov     ecx, [r12+24h]
 * 0000000140AC94B0: test    ecx, ecx
 * 0000000140AC94B2: jns     short loc_140AC94BF
 * 0000000140AC94B4: mov     edx, r15d
 * 0000000140AC94B7: mov     dword ptr [rbp+0B30h+arg_8], edx
 * 0000000140AC94BD: jmp     short loc_140AC94C3
 * 0000000140AC94BF: test    edx, edx
 * 0000000140AC94C1: jz      short loc_140AC94EC
 * 0000000140AC94C3: cmp     dword ptr [r12], 54494E49h
 * 0000000140AC94CB: jnz     short loc_140AC94EC
 * 0000000140AC94CD: cmp     dword ptr [r12+4], 4742444Bh
 * 0000000140AC94D6: jnz     short loc_140AC94EC
 * 0000000140AC94D8: test    dword ptr [rbx+95Ch], 2000h
 * 0000000140AC94E2: cmovnz  edx, r10d
 * 0000000140AC94E6: mov     dword ptr [rbp+0B30h+arg_8], edx
 * 0000000140AC94EC: test    dword ptr [rbx+95Ch], 4000h
 * 0000000140AC94F6: jz      short loc_140AC9519
 * 0000000140AC94F8: bt      ecx, 1Dh
 * 0000000140AC94FC: jnb     short loc_140AC9519
 * 0000000140AC94FE: cmp     r13, [rbx+5C0h]
 * 0000000140AC9505: jz      short loc_140AC9510
 * 0000000140AC9507: cmp     r13, [rbx+5C8h]
 * 0000000140AC950E: jnz     short loc_140AC9519
 * 0000000140AC9510: mov     edx, r15d
 * 0000000140AC9513: mov     dword ptr [rbp+0B30h+arg_8], edx
 * 0000000140AC9519: mov     r8d, [r12+0Ch]
 * 0000000140AC951E: mov     r15d, [r12+10h]
 * 0000000140AC9523: mov     r13d, r8d
 * 0000000140AC9526: mov     eax, [r12+8]
 * 0000000140AC952B: cmp     r15d, eax
 * 0000000140AC952E: mov     dword ptr [rbp+0B30h+var_B90], r8d
 * 0000000140AC9532: cmovbe  r15d, eax
 * 0000000140AC9536: add     r15d, r8d
 * 0000000140AC9539: mov     [rbp+0B30h+var_BAC], r15d
 * 0000000140AC953D: cmp     r14, [rbp+0B30h+var_BA8]
 * 0000000140AC9541: jz      loc_140AC96F0
 * 0000000140AC9547: mov     eax, [r14]
 * 0000000140AC954A: mov     ecx, [r14+4]
 * 0000000140AC954E: mov     r12d, ecx
 * 0000000140AC9551: cmp     eax, r8d
 * 0000000140AC9554: jbe     loc_140AC96F9
 * 0000000140AC955A: cmp     ecx, r15d
 * 0000000140AC955D: ja      loc_140AC9711
 * 0000000140AC9563: test    edx, edx
 * 0000000140AC9565: jnz     loc_140AC9727
 * 0000000140AC956B: mov     esi, r8d
 * 0000000140AC956E: mov     [r11], r8d
 * 0000000140AC9571: add     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC9576: lea     rdx, [rbp+0B30h+var_948]
 * 0000000140AC957D: mov     r9d, eax
 * 0000000140AC9580: mov     [r11+4], eax
 * 0000000140AC9584: sub     r9d, r8d
 * 0000000140AC9587: mov     r13d, eax
 * 0000000140AC958A: mov     r14d, r9d
 * 0000000140AC958D: lea     r8, [rbp+0B30h+var_7A0]
 * 0000000140AC9594: add     r14, rsi
 * 0000000140AC9597: mov     rcx, [r8]
 * 0000000140AC959A: mov     eax, [rdx]
 * 0000000140AC959C: add     rax, rcx
 * 0000000140AC959F: cmp     rsi, rax
 * 0000000140AC95A2: jnb     short loc_140AC95AD
 * 0000000140AC95A4: cmp     r14, rcx
 * 0000000140AC95A7: ja      loc_140AC9704
 * 0000000140AC95AD: inc     r10d
 * 0000000140AC95B0: add     r8, 8
 * 0000000140AC95B4: add     rdx, 4
 * 0000000140AC95B8: cmp     r10d, 6
 * 0000000140AC95BC: jb      short loc_140AC9597
 * 0000000140AC95BE: add     [rbx+7F0h], r9d
 * 0000000140AC95C5: mov     r10, rsi
 * 0000000140AC95C8: mov     r11d, [rbx+7DCh]
 * 0000000140AC95CF: mov     rax, rsi
 * 0000000140AC95D2: mov     r15, [rbx+7E0h]
 * 0000000140AC95D9: cmp     rsi, r14
 * 0000000140AC95DC: jnb     short loc_140AC95EE
 * 0000000140AC95DE: mov     ecx, 40h ; '@'
 * 0000000140AC95E3: prefetchnta byte ptr [rax]
 * 0000000140AC95E6: add     rax, rcx
 * 0000000140AC95E9: cmp     rax, r14
 * 0000000140AC95EC: jb      short loc_140AC95E3
 * 0000000140AC95EE: mov     r14d, r9d
 * 0000000140AC95F1: mov     r8, r15
 * 0000000140AC95F4: shr     r14d, 7
 * 0000000140AC95F8: test    r14d, r14d
 * 0000000140AC95FB: jz      short loc_140AC9675
 * 0000000140AC95FD: mov     rbx, 7010008004002001h
 * 0000000140AC9607: mov     edx, 8
 * 0000000140AC960C: lea     edi, [rdx-7]
 * 0000000140AC960F: mov     rax, [r10]
 * 0000000140AC9612: mov     ecx, r11d
 * 0000000140AC9615: xor     rax, r8
 * 0000000140AC9618: mov     r8, [r10+8]
 * 0000000140AC961C: rol     rax, cl
 * 0000000140AC961F: add     r10, 10h
 * 0000000140AC9623: xor     r8, rax
 * 0000000140AC9626: rol     r8, cl
 * 0000000140AC9629: sub     rdx, rdi
 * 0000000140AC962C: jnz     short loc_140AC960F
 * 0000000140AC962E: mov     rcx, r10
 * 0000000140AC9631: sub     rcx, rsi
 * 0000000140AC9634: xor     rcx, r15
 * 0000000140AC9637: mov     rax, rcx
 * 0000000140AC963A: rol     rax, 11h
 * 0000000140AC963E: xor     rcx, rax
 * 0000000140AC9641: mov     rax, rbx
 * 0000000140AC9644: mul     rcx
 * 0000000140AC9647: xor     r11d, eax
 * 0000000140AC964A: mov     [rbp+0B30h+var_4F8], rdx
 * 0000000140AC9651: xor     r11d, edx
 * 0000000140AC9654: mov     rax, rdi
 * 0000000140AC9657: and     r11d, 3Fh
 * 0000000140AC965B: cmovz   r11d, eax
 * 0000000140AC965F: mov     eax, 0FFFFFFFFh
 * 0000000140AC9664: add     r14d, eax
 * 0000000140AC9667: jnz     short loc_140AC9607
 * 0000000140AC9669: mov     rbx, [rsp+0C30h+var_BB8]
 * 0000000140AC966E: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC9675: and     r9d, 7Fh
 * 0000000140AC9679: mov     esi, 1
 * 0000000140AC967E: cmp     r9d, 8
 * 0000000140AC9682: jb      short loc_140AC96A1
 * 0000000140AC9684: mov     edx, r9d
 * 0000000140AC9687: shr     rdx, 3
 * 0000000140AC968B: xor     r8, [r10]
 * 0000000140AC968E: mov     ecx, r11d
 * 0000000140AC9691: rol     r8, cl
 * 0000000140AC9694: add     r10, 8
 * 0000000140AC9698: add     r9d, 0FFFFFFF8h
 * 0000000140AC969C: sub     rdx, rsi
 * 0000000140AC969F: jnz     short loc_140AC968B
 * 0000000140AC96A1: test    r9d, r9d
 * 0000000140AC96A4: jz      short loc_140AC96C5
 * 0000000140AC96A6: mov     ebx, 0FFFFFFFFh
 * 0000000140AC96AB: movzx   eax, byte ptr [r10]
 * 0000000140AC96AF: mov     ecx, r11d
 * 0000000140AC96B2: xor     r8, rax
 * 0000000140AC96B5: add     r10, rsi
 * 0000000140AC96B8: rol     r8, cl
 * 0000000140AC96BB: add     r9d, ebx
 * 0000000140AC96BE: jnz     short loc_140AC96AB
 * 0000000140AC96C0: mov     rbx, [rsp+0C30h+var_BB8]
 * 0000000140AC96C5: mov     rax, r8
 * 0000000140AC96C8: shr     rax, 1Fh
 * 0000000140AC96CC: xor     r10d, r10d
 * 0000000140AC96CF: jmp     short loc_140AC96D8
 * 0000000140AC96D1: xor     r8d, eax
 * 0000000140AC96D4: shr     rax, 1Fh
 * 0000000140AC96D8: test    rax, rax
 * 0000000140AC96DB: jnz     short loc_140AC96D1
 * 0000000140AC96DD: mov     rax, [rbp+0B30h+var_B78]
 * 0000000140AC96E1: btr     r8d, 1Fh
 * 0000000140AC96E6: mov     r15d, [rbp+0B30h+var_BAC]
 * 0000000140AC96EA: mov     [rax+8], r8d
 * 0000000140AC96EE: jmp     short loc_140AC9707
 * 0000000140AC96F0: mov     eax, r10d
 * 0000000140AC96F3: mov     r12d, r10d
 * 0000000140AC96F6: cmp     eax, r8d
 * 0000000140AC96F9: jnb     short loc_140AC9711
 * 0000000140AC96FB: mov     r12, [rbp+0B30h+var_BA8]
 * 0000000140AC96FF: jmp     loc_140AC9994
 * 0000000140AC9704: xor     r10d, r10d
 * 0000000140AC9707: mov     r14, [rbp+0B30h+var_B70]
 * 0000000140AC970B: mov     edx, dword ptr [rbp+0B30h+arg_8]
 * 0000000140AC9711: cmp     r12d, r15d
 * 0000000140AC9714: mov     r12, [rbp+0B30h+var_BA8]
 * 0000000140AC9718: ja      loc_140AC9994
 * 0000000140AC971E: cmp     r14, r12
 * 0000000140AC9721: jz      loc_140AC9994
 * 0000000140AC9727: mov     rax, [rsp+0C30h+var_BD8]
 * 0000000140AC972C: mov     r12d, [rax+4]
 * 0000000140AC9730: mov     [rbp+0B30h+var_BB0], r12d
 * 0000000140AC9734: cmp     r12d, r15d
 * 0000000140AC9737: ja      short loc_140AC96FB
 * 0000000140AC9739: mov     r8, [rbp+0B30h+var_BA8]
 * 0000000140AC973D: mov     ecx, 0Ch
 * 0000000140AC9742: cmp     rax, r8
 * 0000000140AC9745: jz      short loc_140AC96FB
 * 0000000140AC9747: test    edx, edx
 * 0000000140AC9749: jz      short loc_140AC9753
 * 0000000140AC974B: mov     r8b, 80h
 * 0000000140AC974E: jmp     loc_140AC9958
 * 0000000140AC9753: mov     r14d, [r14+4]
 * 0000000140AC9757: mov     r13d, [rax]
 * 0000000140AC975A: cmp     r13d, r14d
 * 0000000140AC975D: jnb     short loc_140AC97C2
 * 0000000140AC975F: test    dword ptr [rbx+958h], 200000h
 * 0000000140AC9769: jz      loc_140ACCC39
 * 0000000140AC976F: cmp     [rbx+8C0h], r10d
 * 0000000140AC9776: jnz     short loc_140AC97C2
 * 0000000140AC9778: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC9782: xor     edx, edx
 * 0000000140AC9784: add     rax, rbx
 * 0000000140AC9787: mov     rcx, rbx
 * 0000000140AC978A: mov     [rbx+8C8h], rax
 * 0000000140AC9791: mov     rax, [rsp+0C30h+var_BD0]
 * 0000000140AC9796: mov     [rbx+8D0h], r10
 * 0000000140AC979D: mov     qword ptr [rbx+8D8h], 10Fh
 * 0000000140AC97A8: mov     [rbx+8E0h], rax
 * 0000000140AC97AF: mov     eax, 1
 * 0000000140AC97B4: mov     [rbx+8C0h], eax
 * 0000000140AC97BA: call    sub_140AD049C
 * 0000000140AC97BF: xor     r10d, r10d
 * 0000000140AC97C2: mov     rsi, r14
 * 0000000140AC97C5: lea     rcx, [rbp+0B30h+var_948]
 * 0000000140AC97CC: add     rsi, [rsp+0C30h+var_BD0]
 * 0000000140AC97D1: lea     rdx, [rbp+0B30h+var_7A0]
 * 0000000140AC97D8: mov     r9d, r13d
 * 0000000140AC97DB: mov     r8d, r10d
 * 0000000140AC97DE: sub     r9d, r14d
 * 0000000140AC97E1: mov     r14d, r9d
 * 0000000140AC97E4: add     r14, rsi
 * 0000000140AC97E7: mov     r10, [rdx]
 * 0000000140AC97EA: mov     eax, [rcx]
 * 0000000140AC97EC: add     rax, r10
 * 0000000140AC97EF: cmp     rsi, rax
 * 0000000140AC97F2: jnb     short loc_140AC97FD
 * 0000000140AC97F4: cmp     r14, r10
 * 0000000140AC97F7: ja      loc_140AC9943
 * 0000000140AC97FD: mov     eax, 4
 * 0000000140AC9802: inc     r8d
 * 0000000140AC9805: add     rcx, rax
 * 0000000140AC9808: add     rdx, 8
 * 0000000140AC980C: cmp     r8d, 6
 * 0000000140AC9810: jb      short loc_140AC97E7
 * 0000000140AC9812: cmp     r9d, eax
 * 0000000140AC9815: jb      loc_140AC9943
 * 0000000140AC981B: add     [rbx+7F0h], r9d
 * 0000000140AC9822: mov     r10, rsi
 * 0000000140AC9825: mov     r11d, [rbx+7DCh]
 * 0000000140AC982C: mov     rax, rsi
 * 0000000140AC982F: mov     r15, [rbx+7E0h]
 * 0000000140AC9836: cmp     rsi, r14
 * 0000000140AC9839: jnb     short loc_140AC984B
 * 0000000140AC983B: mov     ecx, 40h ; '@'
 * 0000000140AC9840: prefetchnta byte ptr [rax]
 * 0000000140AC9843: add     rax, rcx
 * 0000000140AC9846: cmp     rax, r14
 * 0000000140AC9849: jb      short loc_140AC9840
 * 0000000140AC984B: mov     r14d, r9d
 * 0000000140AC984E: mov     r8, r15
 * 0000000140AC9851: shr     r14d, 7
 * 0000000140AC9855: test    r14d, r14d
 * 0000000140AC9858: jz      short loc_140AC98CF
 * 0000000140AC985A: mov     edi, 1
 * 0000000140AC985F: mov     ebx, 0FFFFFFFFh
 * 0000000140AC9864: mov     r12, 7010008004002001h
 * 0000000140AC986E: mov     eax, 8
 * 0000000140AC9873: xor     r8, [r10]
 * 0000000140AC9876: mov     ecx, r11d
 * 0000000140AC9879: rol     r8, cl
 * 0000000140AC987C: xor     r8, [r10+8]
 * 0000000140AC9880: add     r10, 10h
 * 0000000140AC9884: rol     r8, cl
 * 0000000140AC9887: sub     rax, rdi
 * 0000000140AC988A: jnz     short loc_140AC9873
 * 0000000140AC988C: mov     rcx, r10
 * 0000000140AC988F: sub     rcx, rsi
 * 0000000140AC9892: xor     rcx, r15
 * 0000000140AC9895: mov     rax, rcx
 * 0000000140AC9898: rol     rax, 11h
 * 0000000140AC989C: xor     rcx, rax
 * 0000000140AC989F: mov     rax, r12
 * 0000000140AC98A2: mul     rcx
 * 0000000140AC98A5: xor     r11d, eax
 * 0000000140AC98A8: mov     [rbp+0B30h+var_4F0], rdx
 * 0000000140AC98AF: xor     r11d, edx
 * 0000000140AC98B2: and     r11d, 3Fh
 * 0000000140AC98B6: cmovz   r11d, edi
 * 0000000140AC98BA: add     r14d, ebx
 * 0000000140AC98BD: jnz     short loc_140AC986E
 * 0000000140AC98BF: mov     rbx, [rsp+0C30h+var_BB8]
 * 0000000140AC98C4: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC98CB: mov     r12d, [rbp+0B30h+var_BB0]
 * 0000000140AC98CF: and     r9d, 7Fh
 * 0000000140AC98D3: mov     esi, 1
 * 0000000140AC98D8: cmp     r9d, 8
 * 0000000140AC98DC: jb      short loc_140AC98FB
 * 0000000140AC98DE: mov     eax, r9d
 * 0000000140AC98E1: shr     rax, 3
 * 0000000140AC98E5: xor     r8, [r10]
 * 0000000140AC98E8: mov     ecx, r11d
 * 0000000140AC98EB: rol     r8, cl
 * 0000000140AC98EE: add     r10, 8
 * 0000000140AC98F2: add     r9d, 0FFFFFFF8h
 * 0000000140AC98F6: sub     rax, rsi
 * 0000000140AC98F9: jnz     short loc_140AC98E5
 * 0000000140AC98FB: test    r9d, r9d
 * 0000000140AC98FE: jz      short loc_140AC9921
 * 0000000140AC9900: mov     edi, 0FFFFFFFFh
 * 0000000140AC9905: movzx   eax, byte ptr [r10]
 * 0000000140AC9909: mov     ecx, r11d
 * 0000000140AC990C: xor     r8, rax
 * 0000000140AC990F: add     r10, rsi
 * 0000000140AC9912: rol     r8, cl
 * 0000000140AC9915: add     r9d, edi
 * 0000000140AC9918: jnz     short loc_140AC9905
 * 0000000140AC991A: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC9921: mov     rax, r8
 * 0000000140AC9924: shr     rax, 7
 * 0000000140AC9928: xor     r10d, r10d
 * 0000000140AC992B: jmp     short loc_140AC9934
 * 0000000140AC992D: xor     r8b, al
 * 0000000140AC9930: shr     rax, 7
 * 0000000140AC9934: test    rax, rax
 * 0000000140AC9937: jnz     short loc_140AC992D
 * 0000000140AC9939: mov     r15d, [rbp+0B30h+var_BAC]
 * 0000000140AC993D: and     r8b, 7Fh
 * 0000000140AC9941: jmp     short loc_140AC9949
 * 0000000140AC9943: xor     r10d, r10d
 * 0000000140AC9946: mov     r8b, 80h
 * 0000000140AC9949: mov     r14, [rbp+0B30h+var_B70]
 * 0000000140AC994D: mov     ecx, 0Ch
 * 0000000140AC9952: mov     edx, dword ptr [rbp+0B30h+arg_8]
 * 0000000140AC9958: mov     rax, [rbp+0B30h+var_B88]
 * 0000000140AC995C: add     r14, rcx
 * 0000000140AC995F: inc     [rbp+0B30h+var_B88]
 * 0000000140AC9963: mov     [rbp+0B30h+var_B70], r14
 * 0000000140AC9967: mov     [rax], r8b
 * 0000000140AC996A: mov     rax, [rsp+0C30h+var_BD8]
 * 0000000140AC996F: mov     r8, [rbp+0B30h+var_BA8]
 * 0000000140AC9973: add     rax, rcx
 * 0000000140AC9976: mov     [rsp+0C30h+var_BD8], rax
 * 0000000140AC997B: cmp     rax, r8
 * 0000000140AC997E: jz      short loc_140AC9988
 * 0000000140AC9980: mov     r12d, [rax+4]
 * 0000000140AC9984: mov     [rbp+0B30h+var_BB0], r12d
 * 0000000140AC9988: cmp     r12d, r15d
 * 0000000140AC998B: jbe     loc_140AC9742
 * 0000000140AC9991: mov     r12, r8
 * 0000000140AC9994: mov     r11, [rbp+0B30h+var_B78]
 * 0000000140AC9998: test    edx, edx
 * 0000000140AC999A: jnz     loc_140AC9B33
 * 0000000140AC99A0: cmp     r13d, r15d
 * 0000000140AC99A3: jz      loc_140AC9B33
 * 0000000140AC99A9: mov     [r11+0Ch], r13d
 * 0000000140AC99AD: lea     rcx, [rbp+0B30h+var_948]
 * 0000000140AC99B4: mov     r13, [rsp+0C30h+var_BD0]
 * 0000000140AC99B9: lea     rdx, [rbp+0B30h+var_7A0]
 * 0000000140AC99C0: mov     [r11+10h], r15d
 * 0000000140AC99C4: mov     r9d, r15d
 * 0000000140AC99C7: mov     eax, [r11+0Ch]
 * 0000000140AC99CB: mov     r8d, r10d
 * 0000000140AC99CE: sub     r9d, eax
 * 0000000140AC99D1: mov     r14d, r9d
 * 0000000140AC99D4: lea     rsi, [rax+r13]
 * 0000000140AC99D8: add     r14, rsi
 * 0000000140AC99DB: mov     r10, [rdx]
 * 0000000140AC99DE: mov     eax, [rcx]
 * 0000000140AC99E0: add     rax, r10
 * 0000000140AC99E3: cmp     rsi, rax
 * 0000000140AC99E6: jnb     short loc_140AC99F1
 * 0000000140AC99E8: cmp     r14, r10
 * 0000000140AC99EB: ja      loc_140AC9B3A
 * 0000000140AC99F1: inc     r8d
 * 0000000140AC99F4: add     rdx, 8
 * 0000000140AC99F8: add     rcx, 4
 * 0000000140AC99FC: cmp     r8d, 6
 * 0000000140AC9A00: jb      short loc_140AC99DB
 * 0000000140AC9A02: add     [rbx+7F0h], r9d
 * 0000000140AC9A09: mov     r10, rsi
 * 0000000140AC9A0C: mov     r11d, [rbx+7DCh]
 * 0000000140AC9A13: mov     rax, rsi
 * 0000000140AC9A16: mov     r15, [rbx+7E0h]
 * 0000000140AC9A1D: cmp     rsi, r14
 * 0000000140AC9A20: jnb     short loc_140AC9A32
 * 0000000140AC9A22: mov     ecx, 40h ; '@'
 * 0000000140AC9A27: prefetchnta byte ptr [rax]
 * 0000000140AC9A2A: add     rax, rcx
 * 0000000140AC9A2D: cmp     rax, r14
 * 0000000140AC9A30: jb      short loc_140AC9A27
 * 0000000140AC9A32: mov     r14d, r9d
 * 0000000140AC9A35: mov     r8, r15
 * 0000000140AC9A38: shr     r14d, 7
 * 0000000140AC9A3C: test    r14d, r14d
 * 0000000140AC9A3F: jz      short loc_140AC9AB8
 * 0000000140AC9A41: mov     rbx, 7010008004002001h
 * 0000000140AC9A4B: mov     edx, 8
 * 0000000140AC9A50: lea     r13d, [rdx-7]
 * 0000000140AC9A54: mov     rax, [r10]
 * 0000000140AC9A57: mov     ecx, r11d
 * 0000000140AC9A5A: xor     rax, r8
 * 0000000140AC9A5D: mov     r8, [r10+8]
 * 0000000140AC9A61: rol     rax, cl
 * 0000000140AC9A64: add     r10, 10h
 * 0000000140AC9A68: xor     r8, rax
 * 0000000140AC9A6B: rol     r8, cl
 * 0000000140AC9A6E: sub     rdx, r13
 * 0000000140AC9A71: jnz     short loc_140AC9A54
 * 0000000140AC9A73: mov     rcx, r10
 * 0000000140AC9A76: sub     rcx, rsi
 * 0000000140AC9A79: xor     rcx, r15
 * 0000000140AC9A7C: mov     rax, rcx
 * 0000000140AC9A7F: rol     rax, 11h
 * 0000000140AC9A83: xor     rcx, rax
 * 0000000140AC9A86: mov     rax, rbx
 * 0000000140AC9A89: mul     rcx
 * 0000000140AC9A8C: xor     r11d, eax
 * 0000000140AC9A8F: mov     [rbp+0B30h+var_4E8], rdx
 * 0000000140AC9A96: xor     r11d, edx
 * 0000000140AC9A99: mov     rax, r13
 * 0000000140AC9A9C: and     r11d, 3Fh
 * 0000000140AC9AA0: cmovz   r11d, eax
 * 0000000140AC9AA4: mov     eax, 0FFFFFFFFh
 * 0000000140AC9AA9: add     r14d, eax
 * 0000000140AC9AAC: jnz     short loc_140AC9A4B
 * 0000000140AC9AAE: mov     rbx, [rsp+0C30h+var_BB8]
 * 0000000140AC9AB3: mov     r13, [rsp+0C30h+var_BD0]
 * 0000000140AC9AB8: and     r9d, 7Fh
 * 0000000140AC9ABC: mov     esi, 1
 * 0000000140AC9AC1: cmp     r9d, 8
 * 0000000140AC9AC5: jb      short loc_140AC9AE4
 * 0000000140AC9AC7: mov     edx, r9d
 * 0000000140AC9ACA: shr     rdx, 3
 * 0000000140AC9ACE: xor     r8, [r10]
 * 0000000140AC9AD1: mov     ecx, r11d
 * 0000000140AC9AD4: rol     r8, cl
 * 0000000140AC9AD7: add     r10, 8
 * 0000000140AC9ADB: add     r9d, 0FFFFFFF8h
 * 0000000140AC9ADF: sub     rdx, rsi
 * 0000000140AC9AE2: jnz     short loc_140AC9ACE
 * 0000000140AC9AE4: test    r9d, r9d
 * 0000000140AC9AE7: jz      short loc_140AC9B08
 * 0000000140AC9AE9: mov     r12d, 0FFFFFFFFh
 * 0000000140AC9AEF: movzx   eax, byte ptr [r10]
 * 0000000140AC9AF3: mov     ecx, r11d
 * 0000000140AC9AF6: xor     r8, rax
 * 0000000140AC9AF9: add     r10, rsi
 * 0000000140AC9AFC: rol     r8, cl
 * 0000000140AC9AFF: add     r9d, r12d
 * 0000000140AC9B02: jnz     short loc_140AC9AEF
 * 0000000140AC9B04: mov     r12, [rbp+0B30h+var_BA8]
 * 0000000140AC9B08: mov     rax, r8
 * 0000000140AC9B0B: shr     rax, 1Fh
 * 0000000140AC9B0F: xor     r10d, r10d
 * 0000000140AC9B12: jmp     short loc_140AC9B1B
 * 0000000140AC9B14: xor     r8d, eax
 * 0000000140AC9B17: shr     rax, 1Fh
 * 0000000140AC9B1B: test    rax, rax
 * 0000000140AC9B1E: jnz     short loc_140AC9B14
 * 0000000140AC9B20: mov     r11, [rbp+0B30h+var_B78]
 * 0000000140AC9B24: btr     r8d, 1Fh
 * 0000000140AC9B29: mov     r15d, [rbp+0B30h+var_BAC]
 * 0000000140AC9B2D: mov     [r11+14h], r8d
 * 0000000140AC9B31: jmp     short loc_140AC9B3D
 * 0000000140AC9B33: mov     r13, [rsp+0C30h+var_BD0]
 * 0000000140AC9B38: jmp     short loc_140AC9B41
 * 0000000140AC9B3A: xor     r10d, r10d
 * 0000000140AC9B3D: mov     r14, [rbp+0B30h+var_B70]
 * 0000000140AC9B41: cmp     r14, r12
 * 0000000140AC9B44: jz      short loc_140AC9B8A
 * 0000000140AC9B46: mov     eax, [r14]
 * 0000000140AC9B49: mov     ecx, [r14+4]
 * 0000000140AC9B4D: cmp     eax, dword ptr [rbp+0B30h+var_B90]
 * 0000000140AC9B50: jb      short loc_140AC9B8A
 * 0000000140AC9B52: cmp     ecx, r15d
 * 0000000140AC9B55: ja      short loc_140AC9B8A
 * 0000000140AC9B57: mov     r8, [rsp+0C30h+var_BD8]
 * 0000000140AC9B5C: cmp     r8, r12
 * 0000000140AC9B5F: jz      short loc_140AC9B7E
 * 0000000140AC9B61: mov     rax, [rbp+0B30h+var_B88]
 * 0000000140AC9B65: mov     byte ptr [rax], 80h
 * 0000000140AC9B68: inc     rax
 * 0000000140AC9B6B: mov     [rbp+0B30h+var_B88], rax
 * 0000000140AC9B6F: mov     eax, 0Ch
 * 0000000140AC9B74: add     r8, rax
 * 0000000140AC9B77: mov     [rsp+0C30h+var_BD8], r8
 * 0000000140AC9B7C: jmp     short loc_140AC9B83
 * 0000000140AC9B7E: mov     eax, 0Ch
 * 0000000140AC9B83: add     r14, rax
 * 0000000140AC9B86: mov     [rbp+0B30h+var_B70], r14
 * 0000000140AC9B8A: mov     r12, [rbp+0B30h+var_B98]
 * 0000000140AC9B8E: add     r11, 18h
 * 0000000140AC9B92: add     r12, 28h ; '('
 * 0000000140AC9B96: mov     [rbp+0B30h+var_B78], r11
 * 0000000140AC9B9A: mov     [rbp+0B30h+var_B98], r12
 * 0000000140AC9B9E: cmp     r11, [rsp+0C30h+var_BC8]
 * 0000000140AC9BA3: jz      short loc_140AC9BB0
 * 0000000140AC9BA5: mov     r15d, 1
 * 0000000140AC9BAB: jmp     loc_140AC933B
 * 0000000140AC9BB0: mov     rsi, [rbp+0B30h+var_B00]
 * 0000000140AC9BB4: mov     [rbp+0B30h+var_B18], rsi
 * 0000000140AC9BB8: mov     rbx, rsi
 * 0000000140AC9BBB: xor     r13d, r13d
 * 0000000140AC9BBE: mov     r12, [rbp+0B30h+var_B80]
 * 0000000140AC9BC2: mov     rax, [rsi+1E8h]
 * 0000000140AC9BC9: mov     rcx, r12
 * 0000000140AC9BCC: call    j__guard_dispatch_icall_nop
 * 0000000140AC9BD1: mov     ecx, [rax+94h]
 * 0000000140AC9BD7: cmp     ecx, 14h
 * 0000000140AC9BDA: jnb     short loc_140AC9BE4
 * 0000000140AC9BDC: mov     rsi, rbx
 * 0000000140AC9BDF: jmp     loc_140AC9062
 * 0000000140AC9BE4: mov     eax, [rax+90h]
 * 0000000140AC9BEA: lea     r15, [r12+rcx]
 * 0000000140AC9BEE: add     r15, rax
 * 0000000140AC9BF1: lea     r14, [r12+rax]
 * 0000000140AC9BF5: cmp     r14, r15
 * 0000000140AC9BF8: jz      loc_140AC9062
 * 0000000140AC9BFE: cmp     [r14+0Ch], r13d
 * 0000000140AC9C02: jz      loc_140AC9062
 * 0000000140AC9C08: mov     eax, [r14+10h]
 * 0000000140AC9C0C: test    eax, eax
 * 0000000140AC9C0E: jz      loc_140AC9062
 * 0000000140AC9C14: mov     rdx, [rax+r12]
 * 0000000140AC9C18: test    rdx, rdx
 * 0000000140AC9C1B: jz      short loc_140AC9C48
 * 0000000140AC9C1D: mov     r8d, 8000000Fh
 * 0000000140AC9C23: lea     rcx, [rbp+0B30h+var_B18]
 * 0000000140AC9C27: call    sub_140ACD048
 * 0000000140AC9C2C: mov     rsi, [rbp+0B30h+var_B18]
 * 0000000140AC9C30: mov     edx, 80000000h
 * 0000000140AC9C35: mov     ecx, eax
 * 0000000140AC9C37: mov     rbx, rsi
 * 0000000140AC9C3A: add     eax, edx
 * 0000000140AC9C3C: test    edx, eax
 * 0000000140AC9C3E: jnz     short loc_140AC9C48
 * 0000000140AC9C40: cmp     ecx, 0C000010Eh
 * 0000000140AC9C46: jnz     short loc_140AC9C4E
 * 0000000140AC9C48: add     r14, 14h
 * 0000000140AC9C4C: jmp     short loc_140AC9BF5
 * 0000000140AC9C4E: xor     r11d, r11d
 * 0000000140AC9C51: jmp     loc_140AC7B24
 * 0000000140AC9C56: mov     ecx, [rbx+958h]
 * 0000000140AC9C5C: test    cl, 4
 * 0000000140AC9C5F: jnz     loc_140AC9D10
 * 0000000140AC9C65: mov     eax, [rbx+7ACh]
 * 0000000140AC9C6B: and     ecx, 20000000h
 * 0000000140AC9C71: mov     r8, [rbx+790h]
 * 0000000140AC9C78: neg     ecx
 * 0000000140AC9C7A: mov     r9d, 1
 * 0000000140AC9C80: sbb     ecx, ecx
 * 0000000140AC9C82: and     ecx, [rbx+8ECh]
 * 0000000140AC9C88: cmp     eax, 8
 * 0000000140AC9C8B: jb      short loc_140AC9CA2
 * 0000000140AC9C8D: mov     edx, eax
 * 0000000140AC9C8F: shr     rdx, 3
 * 0000000140AC9C93: mov     [rbx], r11
 * 0000000140AC9C96: add     eax, 0FFFFFFF8h
 * 0000000140AC9C99: add     rbx, 8
 * 0000000140AC9C9D: sub     rdx, r9
 * 0000000140AC9CA0: jnz     short loc_140AC9C93
 * 0000000140AC9CA2: test    eax, eax
 * 0000000140AC9CA4: jz      short loc_140AC9CB5
 * 0000000140AC9CA6: mov     edx, 0FFFFFFFFh
 * 0000000140AC9CAB: mov     [rbx], r11b
 * 0000000140AC9CAE: add     rbx, r9
 * 0000000140AC9CB1: add     eax, edx
 * 0000000140AC9CB3: jnz     short loc_140AC9CAB
 * 0000000140AC9CB5: mov     ebx, [r14+8ECh]
 * 0000000140AC9CBC: mov     [r14+8ECh], ecx
 * 0000000140AC9CC3: cmp     ecx, 3
 * 0000000140AC9CC6: jz      short loc_140AC9CF7
 * 0000000140AC9CC8: test    dword ptr [r14+958h], 10000000h
 * 0000000140AC9CD3: jnz     short loc_140AC9CEE
 * 0000000140AC9CD5: test    ecx, ecx
 * 0000000140AC9CD7: jz      short loc_140AC9CEE
 * 0000000140AC9CD9: mov     rax, [r14+218h]
 * 0000000140AC9CE0: lea     rcx, [r8-8]
 * 0000000140AC9CE4: mov     rdx, [rcx]
 * 0000000140AC9CE7: call    j__guard_dispatch_icall_nop
 * 0000000140AC9CEC: jmp     short loc_140AC9D06
 * 0000000140AC9CEE: mov     rax, [r14+0F0h]
 * 0000000140AC9CF5: jmp     short loc_140AC9CFE
 * 0000000140AC9CF7: mov     rax, [r14+358h]
 * 0000000140AC9CFE: mov     rcx, r8
 * 0000000140AC9D01: call    j__guard_dispatch_icall_nop
 * 0000000140AC9D06: mov     [r14+8ECh], ebx
 * 0000000140AC9D0D: xor     r11d, r11d
 * 0000000140AC9D10: and     dword ptr [r14+958h], 0FFFFFFFBh
 * 0000000140AC9D18: mov     r9d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140AC9D1F: jmp     short loc_140AC9D2A
 * 0000000140AC9D21: mov     r14, rbx
 * 0000000140AC9D24: mov     [rbx+7ACh], eax
 * 0000000140AC9D2A: mov     r8d, 1
 * 0000000140AC9D30: lea     rbx, [r14+r13]
 * 0000000140AC9D34: add     [r14+7D4h], r8d
 * 0000000140AC9D3B: mov     rax, rbx
 * 0000000140AC9D3E: lea     ecx, [r8+2Fh]
 * 0000000140AC9D42: lea     edx, [rcx-2Ah]
 * 0000000140AC9D45: mov     [rax], r11
 * 0000000140AC9D48: add     ecx, 0FFFFFFF8h
 * 0000000140AC9D4B: add     rax, 8
 * 0000000140AC9D4F: sub     rdx, r8
 * 0000000140AC9D52: jnz     short loc_140AC9D45
 * 0000000140AC9D54: test    ecx, ecx
 * 0000000140AC9D56: jz      short loc_140AC9D67
 * 0000000140AC9D58: mov     edx, 0FFFFFFFFh
 * 0000000140AC9D5D: mov     [rax], r11b
 * 0000000140AC9D60: add     rax, r8
 * 0000000140AC9D63: add     ecx, edx
 * 0000000140AC9D65: jnz     short loc_140AC9D5D
 * 0000000140AC9D67: mov     [rbx], r12d
 * 0000000140AC9D6A: mov     [rbx+8], r15
 * 0000000140AC9D6E: cmp     r9d, 7
 * 0000000140AC9D72: jnz     short loc_140AC9D8C
 * 0000000140AC9D74: lea     r9, [rbx+18h]
 * 0000000140AC9D78: mov     r8d, 8
 * 0000000140AC9D7E: mov     rdx, r15
 * 0000000140AC9D81: mov     rcx, r14
 * 0000000140AC9D84: call    sub_1403F966C
 * 0000000140AC9D89: xor     r11d, r11d
 * 0000000140AC9D8C: mov     dword ptr [rbx+10h], 8
 * 0000000140AC9D93: lea     rdx, [r15+8]
 * 0000000140AC9D97: add     dword ptr [r14+7F0h], 8
 * 0000000140AC9D9F: mov     rax, r15
 * 0000000140AC9DA2: mov     ecx, [r14+7DCh]
 * 0000000140AC9DA9: mov     r8, [r14+7E0h]
 * 0000000140AC9DB0: cmp     r15, rdx
 * 0000000140AC9DB3: jnb     short loc_140AC9DC6
 * 0000000140AC9DB5: mov     r9d, 40h ; '@'
 * 0000000140AC9DBB: prefetchnta byte ptr [rax]
 * 0000000140AC9DBE: add     rax, r9
 * 0000000140AC9DC1: cmp     rax, rdx
 * 0000000140AC9DC4: jb      short loc_140AC9DBB
 * 0000000140AC9DC6: mov     rax, [r15]
 * 0000000140AC9DC9: xor     rax, r8
 * 0000000140AC9DCC: rol     rax, cl
 * 0000000140AC9DCF: mov     rcx, rax
 * 0000000140AC9DD2: jmp     short loc_140AC9DD6
 * 0000000140AC9DD4: xor     eax, ecx
 * 0000000140AC9DD6: shr     rcx, 1Fh
 * 0000000140AC9DDA: test    rcx, rcx
 * 0000000140AC9DDD: jnz     short loc_140AC9DD4
 * 0000000140AC9DDF: btr     eax, 1Fh
 * 0000000140AC9DE3: mov     rsi, r14
 * 0000000140AC9DE6: mov     [rbx+14h], eax
 * 0000000140AC9DE9: mov     rbx, r14
 * 0000000140AC9DEC: add     dword ptr [r14+7F0h], 8
 * 0000000140AC9DF4: mov     dword ptr [rbx+920h], 9
 * 0000000140AC9DFE: mov     r15, [rbx+5D8h]
 * 0000000140AC9E05: test    r15, r15
 * 0000000140AC9E08: jz      loc_140ACA284
 * 0000000140AC9E0E: mov     r15, [r15]
 * 0000000140AC9E11: test    r15, r15
 * 0000000140AC9E14: jz      loc_140ACA284
 * 0000000140AC9E1A: lock or [rsp+0C30h+var_C30], r11d
 * 0000000140AC9E1F: mov     r12d, [r15+7ACh]
 * 0000000140AC9E26: mov     r10, r15
 * 0000000140AC9E29: mov     r9d, [r15+7DCh]
 * 0000000140AC9E30: mov     rax, r15
 * 0000000140AC9E33: mov     r14, [r15+7E0h]
 * 0000000140AC9E3A: mov     dword ptr [rbp+0B30h+arg_8], r12d
 * 0000000140AC9E41: lea     rcx, [r15+r12]
 * 0000000140AC9E45: cmp     r15, rcx
 * 0000000140AC9E48: jnb     short loc_140AC9E5A
 * 0000000140AC9E4A: mov     edx, 40h ; '@'
 * 0000000140AC9E4F: prefetchnta byte ptr [rax]
 * 0000000140AC9E52: add     rax, rdx
 * 0000000140AC9E55: cmp     rax, rcx
 * 0000000140AC9E58: jb      short loc_140AC9E4F
 * 0000000140AC9E5A: mov     r11d, r12d
 * 0000000140AC9E5D: mov     r8, r14
 * 0000000140AC9E60: shr     r11d, 7
 * 0000000140AC9E64: mov     r13d, 1
 * 0000000140AC9E6A: test    r11d, r11d
 * 0000000140AC9E6D: jz      short loc_140AC9EDC
 * 0000000140AC9E6F: mov     r12, 7010008004002001h
 * 0000000140AC9E79: mov     edx, 8
 * 0000000140AC9E7E: mov     rax, [r10]
 * 0000000140AC9E81: mov     ecx, r9d
 * 0000000140AC9E84: xor     rax, r8
 * 0000000140AC9E87: mov     r8, [r10+8]
 * 0000000140AC9E8B: rol     rax, cl
 * 0000000140AC9E8E: add     r10, 10h
 * 0000000140AC9E92: xor     r8, rax
 * 0000000140AC9E95: rol     r8, cl
 * 0000000140AC9E98: sub     rdx, r13
 * 0000000140AC9E9B: jnz     short loc_140AC9E7E
 * 0000000140AC9E9D: mov     rcx, r10
 * 0000000140AC9EA0: sub     rcx, r15
 * 0000000140AC9EA3: xor     rcx, r14
 * 0000000140AC9EA6: mov     rax, rcx
 * 0000000140AC9EA9: rol     rax, 11h
 * 0000000140AC9EAD: xor     rcx, rax
 * 0000000140AC9EB0: mov     rax, r12
 * 0000000140AC9EB3: mul     rcx
 * 0000000140AC9EB6: xor     r9d, eax
 * 0000000140AC9EB9: mov     [rbp+0B30h+var_4E0], rdx
 * 0000000140AC9EC0: xor     r9d, edx
 * 0000000140AC9EC3: mov     eax, 0FFFFFFFFh
 * 0000000140AC9EC8: and     r9d, 3Fh
 * 0000000140AC9ECC: cmovz   r9d, r13d
 * 0000000140AC9ED0: add     r11d, eax
 * 0000000140AC9ED3: jnz     short loc_140AC9E79
 * 0000000140AC9ED5: mov     r12d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140AC9EDC: mov     edx, r12d
 * 0000000140AC9EDF: and     edx, 7Fh
 * 0000000140AC9EE2: cmp     edx, 8
 * 0000000140AC9EE5: jb      short loc_140AC9F03
 * 0000000140AC9EE7: mov     r11d, edx
 * 0000000140AC9EEA: shr     r11, 3
 * 0000000140AC9EEE: xor     r8, [r10]
 * 0000000140AC9EF1: mov     ecx, r9d
 * 0000000140AC9EF4: rol     r8, cl
 * 0000000140AC9EF7: add     r10, 8
 * 0000000140AC9EFB: add     edx, 0FFFFFFF8h
 * 0000000140AC9EFE: sub     r11, r13
 * 0000000140AC9F01: jnz     short loc_140AC9EEE
 * 0000000140AC9F03: xor     r11d, r11d
 * 0000000140AC9F06: test    edx, edx
 * 0000000140AC9F08: jz      short loc_140AC9F2A
 * 0000000140AC9F0A: mov     edi, 0FFFFFFFFh
 * 0000000140AC9F0F: movzx   eax, byte ptr [r10]
 * 0000000140AC9F13: mov     ecx, r9d
 * 0000000140AC9F16: xor     r8, rax
 * 0000000140AC9F19: add     r10, r13
 * 0000000140AC9F1C: rol     r8, cl
 * 0000000140AC9F1F: add     edx, edi
 * 0000000140AC9F21: jnz     short loc_140AC9F0F
 * 0000000140AC9F23: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140AC9F2A: mov     rax, [rbx+5E0h]
 * 0000000140AC9F31: cmp     r8, [rax]
 * 0000000140AC9F34: jz      loc_140AC9FC6
 * 0000000140AC9F3A: mov     rax, [rbx+568h]
 * 0000000140AC9F41: mov     [rax], r15
 * 0000000140AC9F44: mov     [rax+10h], r12d
 * 0000000140AC9F48: mov     rax, [rbx+5E0h]
 * 0000000140AC9F4F: mov     rcx, [rax]
 * 0000000140AC9F52: cmp     [rbx+8C0h], r11d
 * 0000000140AC9F59: jnz     loc_140AC7B24
 * 0000000140AC9F5F: mov     rax, [rbx+568h]
 * 0000000140AC9F66: xor     rcx, r8
 * 0000000140AC9F69: mov     r15d, 1
 * 0000000140AC9F6F: mov     [rax+18h], rcx
 * 0000000140AC9F73: cmp     [rbx+8C0h], r11d
 * 0000000140AC9F7A: jnz     loc_140AC7B2A
 * 0000000140AC9F80: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140AC9F8A: add     rax, rbx
 * 0000000140AC9F8D: mov     [rbx+8C8h], rax
 * 0000000140AC9F94: mov     [rbx+8D0h], r11
 * 0000000140AC9F9B: mov     qword ptr [rbx+8D8h], 111h
 * 0000000140AC9FA6: mov     [rbx+8E0h], r8
 * 0000000140AC9FAD: xor     edx, edx
 * 0000000140AC9FAF: mov     [rbx+8C0h], r15d
 * 0000000140AC9FB6: mov     rcx, rbx
 * 0000000140AC9FB9: call    sub_140AD049C
 * 0000000140AC9FBE: xor     r11d, r11d
 * 0000000140AC9FC1: jmp     loc_140AC7B2A
 * 0000000140AC9FC6: mov     r9d, [rbx+800h]
 * 0000000140AC9FCD: mov     r13d, 20h ; ' '
 * 0000000140AC9FD3: mov     eax, [rbx+7ACh]
 * 0000000140AC9FD9: cmp     r9d, 7
 * 0000000140AC9FDD: mov     r8d, [rbx+8ECh]
 * 0000000140AC9FE4: cmovnz  r13d, r11d
 * 0000000140AC9FE8: mov     [rbp+0B30h+var_BAC], eax
 * 0000000140AC9FEB: add     eax, 30h ; '0'
 * 0000000140AC9FEE: mov     [rbp+0B30h+var_BB0], r9d
 * 0000000140AC9FF2: cmp     eax, [rbx+9E4h]
 * 0000000140AC9FF8: jbe     loc_140ACA0DD
 * 0000000140AC9FFE: mov     edx, eax
 * 0000000140ACA000: mov     rcx, rbx
 * 0000000140ACA003: call    sub_140ACFC24
 * 0000000140ACA008: xor     r11d, r11d
 * 0000000140ACA00B: mov     r14, rax
 * 0000000140ACA00E: test    rax, rax
 * 0000000140ACA011: jz      loc_140AC9131
 * 0000000140ACA017: mov     ecx, [rbx+958h]
 * 0000000140ACA01D: test    cl, 4
 * 0000000140ACA020: jnz     loc_140ACA0CF
 * 0000000140ACA026: mov     eax, [rbx+7ACh]
 * 0000000140ACA02C: lea     r9d, [r11+1]
 * 0000000140ACA030: mov     r8, [rbx+790h]
 * 0000000140ACA037: and     ecx, 20000000h
 * 0000000140ACA03D: neg     ecx
 * 0000000140ACA03F: sbb     ecx, ecx
 * 0000000140ACA041: and     ecx, [rbx+8ECh]
 * 0000000140ACA047: cmp     eax, 8
 * 0000000140ACA04A: jb      short loc_140ACA061
 * 0000000140ACA04C: mov     edx, eax
 * 0000000140ACA04E: shr     rdx, 3
 * 0000000140ACA052: mov     [rbx], r11
 * 0000000140ACA055: add     eax, 0FFFFFFF8h
 * 0000000140ACA058: add     rbx, 8
 * 0000000140ACA05C: sub     rdx, r9
 * 0000000140ACA05F: jnz     short loc_140ACA052
 * 0000000140ACA061: test    eax, eax
 * 0000000140ACA063: jz      short loc_140ACA074
 * 0000000140ACA065: mov     edx, 0FFFFFFFFh
 * 0000000140ACA06A: mov     [rbx], r11b
 * 0000000140ACA06D: add     rbx, r9
 * 0000000140ACA070: add     eax, edx
 * 0000000140ACA072: jnz     short loc_140ACA06A
 * 0000000140ACA074: mov     ebx, [r14+8ECh]
 * 0000000140ACA07B: mov     [r14+8ECh], ecx
 * 0000000140ACA082: cmp     ecx, 3
 * 0000000140ACA085: jz      short loc_140ACA0B6
 * 0000000140ACA087: test    dword ptr [r14+958h], 10000000h
 * 0000000140ACA092: jnz     short loc_140ACA0AD
 * 0000000140ACA094: test    ecx, ecx
 * 0000000140ACA096: jz      short loc_140ACA0AD
 * 0000000140ACA098: mov     rax, [r14+218h]
 * 0000000140ACA09F: lea     rcx, [r8-8]
 * 0000000140ACA0A3: mov     rdx, [rcx]
 * 0000000140ACA0A6: call    j__guard_dispatch_icall_nop
 * 0000000140ACA0AB: jmp     short loc_140ACA0C5
 * 0000000140ACA0AD: mov     rax, [r14+0F0h]
 * 0000000140ACA0B4: jmp     short loc_140ACA0BD
 * 0000000140ACA0B6: mov     rax, [r14+358h]
 * 0000000140ACA0BD: mov     rcx, r8
 * 0000000140ACA0C0: call    j__guard_dispatch_icall_nop
 * 0000000140ACA0C5: mov     [r14+8ECh], ebx
 * 0000000140ACA0CC: xor     r11d, r11d
 * 0000000140ACA0CF: and     dword ptr [r14+958h], 0FFFFFFFBh
 * 0000000140ACA0D7: mov     r9d, [rbp+0B30h+var_BB0]
 * 0000000140ACA0DB: jmp     short loc_140ACA0E6
 * 0000000140ACA0DD: mov     r14, rbx
 * 0000000140ACA0E0: mov     [rbx+7ACh], eax
 * 0000000140ACA0E6: mov     ebx, [rbp+0B30h+var_BAC]
 * 0000000140ACA0E9: mov     r8d, 1
 * 0000000140ACA0EF: add     [r14+7D4h], r8d
 * 0000000140ACA0F6: add     rbx, r14
 * 0000000140ACA0F9: mov     [rsp+0C30h+var_BC8], rbx
 * 0000000140ACA0FE: mov     rax, rbx
 * 0000000140ACA101: lea     ecx, [r8+2Fh]
 * 0000000140ACA105: lea     edx, [rcx-2Ah]
 * 0000000140ACA108: mov     [rax], r11
 * 0000000140ACA10B: add     ecx, 0FFFFFFF8h
 * 0000000140ACA10E: add     rax, 8
 * 0000000140ACA112: sub     rdx, r8
 * 0000000140ACA115: jnz     short loc_140ACA108
 * 0000000140ACA117: test    ecx, ecx
 * 0000000140ACA119: jz      short loc_140ACA12A
 * 0000000140ACA11B: mov     edx, 0FFFFFFFFh
 * 0000000140ACA120: mov     [rax], r11b
 * 0000000140ACA123: add     rax, r8
 * 0000000140ACA126: add     ecx, edx
 * 0000000140ACA128: jnz     short loc_140ACA120
 * 0000000140ACA12A: mov     [rbx], r13d
 * 0000000140ACA12D: mov     [rbx+8], r15
 * 0000000140ACA131: cmp     r9d, 7
 * 0000000140ACA135: jnz     short loc_140ACA14E
 * 0000000140ACA137: test    r12d, r12d
 * 0000000140ACA13A: jz      short loc_140ACA14E
 * 0000000140ACA13C: lea     r9, [rbx+18h]
 * 0000000140ACA140: mov     r8d, r12d
 * 0000000140ACA143: mov     rdx, r15
 * 0000000140ACA146: mov     rcx, r14
 * 0000000140ACA149: call    sub_1403F966C
 * 0000000140ACA14E: mov     [rbx+10h], r12d
 * 0000000140ACA152: mov     r10, r15
 * 0000000140ACA155: add     [r14+7F0h], r12d
 * 0000000140ACA15C: mov     rax, r15
 * 0000000140ACA15F: mov     r9d, [r14+7DCh]
 * 0000000140ACA166: mov     rsi, [r14+7E0h]
 * 0000000140ACA16D: mov     ecx, r12d
 * 0000000140ACA170: add     rcx, r15
 * 0000000140ACA173: cmp     r15, rcx
 * 0000000140ACA176: jnb     short loc_140ACA188
 * 0000000140ACA178: mov     edx, 40h ; '@'
 * 0000000140ACA17D: prefetchnta byte ptr [rax]
 * 0000000140ACA180: add     rax, rdx
 * 0000000140ACA183: cmp     rax, rcx
 * 0000000140ACA186: jb      short loc_140ACA17D
 * 0000000140ACA188: mov     r11d, r12d
 * 0000000140ACA18B: mov     r8, rsi
 * 0000000140ACA18E: shr     r11d, 7
 * 0000000140ACA192: mov     r13d, 1
 * 0000000140ACA198: test    r11d, r11d
 * 0000000140ACA19B: jz      short loc_140ACA210
 * 0000000140ACA19D: mov     ebx, 0FFFFFFFFh
 * 0000000140ACA1A2: mov     r12, 7010008004002001h
 * 0000000140ACA1AC: mov     eax, 8
 * 0000000140ACA1B1: xor     r8, [r10]
 * 0000000140ACA1B4: mov     ecx, r9d
 * 0000000140ACA1B7: rol     r8, cl
 * 0000000140ACA1BA: xor     r8, [r10+8]
 * 0000000140ACA1BE: add     r10, 10h
 * 0000000140ACA1C2: rol     r8, cl
 * 0000000140ACA1C5: sub     rax, r13
 * 0000000140ACA1C8: jnz     short loc_140ACA1B1
 * 0000000140ACA1CA: mov     rcx, r10
 * 0000000140ACA1CD: sub     rcx, r15
 * 0000000140ACA1D0: xor     rcx, rsi
 * 0000000140ACA1D3: mov     rax, rcx
 * 0000000140ACA1D6: rol     rax, 11h
 * 0000000140ACA1DA: xor     rcx, rax
 * 0000000140ACA1DD: mov     rax, r12
 * 0000000140ACA1E0: mul     rcx
 * 0000000140ACA1E3: xor     r9d, eax
 * 0000000140ACA1E6: mov     [rbp+0B30h+var_4D8], rdx
 * 0000000140ACA1ED: xor     r9d, edx
 * 0000000140ACA1F0: and     r9d, 3Fh
 * 0000000140ACA1F4: cmovz   r9d, r13d
 * 0000000140ACA1F8: add     r11d, ebx
 * 0000000140ACA1FB: jnz     short loc_140ACA1AC
 * 0000000140ACA1FD: mov     r12d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140ACA204: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ACA20B: mov     rbx, [rsp+0C30h+var_BC8]
 * 0000000140ACA210: mov     edx, r12d
 * 0000000140ACA213: and     edx, 7Fh
 * 0000000140ACA216: cmp     edx, 8
 * 0000000140ACA219: jb      short loc_140ACA236
 * 0000000140ACA21B: mov     eax, edx
 * 0000000140ACA21D: shr     rax, 3
 * 0000000140ACA221: xor     r8, [r10]
 * 0000000140ACA224: mov     ecx, r9d
 * 0000000140ACA227: rol     r8, cl
 * 0000000140ACA22A: add     r10, 8
 * 0000000140ACA22E: add     edx, 0FFFFFFF8h
 * 0000000140ACA231: sub     rax, r13
 * 0000000140ACA234: jnz     short loc_140ACA221
 * 0000000140ACA236: xor     r11d, r11d
 * 0000000140ACA239: test    edx, edx
 * 0000000140ACA23B: jz      short loc_140ACA25D
 * 0000000140ACA23D: mov     edi, 0FFFFFFFFh
 * 0000000140ACA242: movzx   eax, byte ptr [r10]
 * 0000000140ACA246: mov     ecx, r9d
 * 0000000140ACA249: xor     r8, rax
 * 0000000140ACA24C: add     r10, r13
 * 0000000140ACA24F: rol     r8, cl
 * 0000000140ACA252: add     edx, edi
 * 0000000140ACA254: jnz     short loc_140ACA242
 * 0000000140ACA256: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ACA25D: mov     rax, r8
 * 0000000140ACA260: jmp     short loc_140ACA265
 * 0000000140ACA262: xor     r8d, eax
 * 0000000140ACA265: shr     rax, 1Fh
 * 0000000140ACA269: test    rax, rax
 * 0000000140ACA26C: jnz     short loc_140ACA262
 * 0000000140ACA26E: btr     r8d, 1Fh
 * 0000000140ACA273: mov     rsi, r14
 * 0000000140ACA276: mov     [rbx+14h], r8d
 * 0000000140ACA27A: mov     rbx, r14
 * 0000000140ACA27D: add     [r14+7F0h], r12d
 * 0000000140ACA284: mov     dword ptr [rbx+920h], 0Bh
 * 0000000140ACA28E: jmp     loc_140AC7B24
 * 0000000140ACA293: mov     r15d, 1
 * 0000000140ACA299: cmp     [rbx+8C0h], r11d
 * 0000000140ACA2A0: jnz     loc_140AC7B2A
 * 0000000140ACA2A6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ACA2B0: add     rax, rbx
 * 0000000140ACA2B3: mov     [rbx+8C8h], rax
 * 0000000140ACA2BA: mov     [rbx+8D0h], r11
 * 0000000140ACA2C1: mov     qword ptr [rbx+8D8h], 105h
 * 0000000140ACA2CC: mov     qword ptr [rbx+8E0h], 0FFFFFFFFC000007Bh
 * 0000000140ACA2D7: jmp     loc_140AC9FAD
 * 0000000140ACA2DC: mov     r15d, 1
 * 0000000140ACA2E2: jmp     loc_140AC7B30
 * 0000000140ACA2E7: mov     [rbx+938h], r12d
 * 0000000140ACA2EE: jmp     loc_140AC5CA3
 * 0000000140ACA2F3: test    r14, r14
 * 0000000140ACA2F6: jz      loc_140AC5CA3
 * 0000000140ACA2FC: mov     rax, [rbx+278h]
 * 0000000140ACA303: mov     rcx, r14
 * 0000000140ACA306: call    j__guard_dispatch_icall_nop
 * 0000000140ACA30B: jmp     loc_140AC5CA3
 * 0000000140ACA310: mov     eax, [rsi+7F8h]
 * 0000000140ACA316: test    r15b, al
 * 0000000140ACA319: jz      loc_140AC5CA3
 * 0000000140ACA31F: mov     ecx, [rsi+938h]
 * 0000000140ACA325: mov     r12d, 0FFFFFFFFh
 * 0000000140ACA32B: cmp     ecx, r12d
 * 0000000140ACA32E: jz      short loc_140ACA349
 * 0000000140ACA330: mov     rax, [rsi+268h]
 * 0000000140ACA337: call    j__guard_dispatch_icall_nop
 * 0000000140ACA33C: xor     r14d, r14d
 * 0000000140ACA33F: mov     rbx, rax
 * 0000000140ACA342: test    rax, rax
 * 0000000140ACA345: jnz     short loc_140ACA366
 * 0000000140ACA347: jmp     short loc_140ACA34C
 * 0000000140ACA349: xor     r14d, r14d
 * 0000000140ACA34C: mov     rax, [rsi+270h]
 * 0000000140ACA353: xor     ecx, ecx
 * 0000000140ACA355: call    j__guard_dispatch_icall_nop
 * 0000000140ACA35A: mov     rbx, rax
 * 0000000140ACA35D: test    rax, rax
 * 0000000140ACA360: jz      loc_140AC5CA3
 * 0000000140ACA366: mov     rax, [rsi+280h]
 * 0000000140ACA36D: lea     rdx, [rbp+0B30h+var_6C0]
 * 0000000140ACA374: mov     rcx, rbx
 * 0000000140ACA377: call    j__guard_dispatch_icall_nop
 * 0000000140ACA37C: test    eax, eax
 * 0000000140ACA37E: jns     short loc_140ACA38F
 * 0000000140ACA380: mov     rax, [rsi+278h]
 * 0000000140ACA387: mov     rcx, rbx
 * 0000000140ACA38A: jmp     loc_140ACA306
 * 0000000140ACA38F: mov     [rsi+948h], rbx
 * 0000000140ACA396: mov     rax, [rsi+2A8h]
 * 0000000140ACA39D: call    j__guard_dispatch_icall_nop
 * 0000000140ACA3A2: mov     rbx, rax
 * 0000000140ACA3A5: mov     rax, [rsi+2C8h]
 * 0000000140ACA3AC: mov     rcx, rbx
 * 0000000140ACA3AF: call    j__guard_dispatch_icall_nop
 * 0000000140ACA3B4: mov     rdx, rax
 * 0000000140ACA3B7: test    rax, rax
 * 0000000140ACA3BA: jnz     short loc_140ACA3C1
 * 0000000140ACA3BC: lea     ecx, [rax+4]
 * 0000000140ACA3BF: jmp     short loc_140ACA3D3
 * 0000000140ACA3C1: mov     rax, [rsi+2D8h]
 * 0000000140ACA3C8: mov     rcx, rbx
 * 0000000140ACA3CB: call    j__guard_dispatch_icall_nop
 * 0000000140ACA3D0: mov     ecx, r14d
 * 0000000140ACA3D3: mov     eax, [rsi+95Ch]
 * 0000000140ACA3D9: and     eax, 0FFFFFFFBh
 * 0000000140ACA3DC: or      eax, ecx
 * 0000000140ACA3DE: mov     [rsi+95Ch], eax
 * 0000000140ACA3E4: add     dword ptr [rsi+7F0h], 10000h
 * 0000000140ACA3EE: mov     rax, [rsi+928h]
 * 0000000140ACA3F5: mov     rcx, [rax]
 * 0000000140ACA3F8: cmp     rcx, [rsi+930h]
 * 0000000140ACA3FF: jnz     loc_140ACA49B
 * 0000000140ACA405: mov     rax, [rsi+548h]
 * 0000000140ACA40C: cmp     [rax+30h], r14d
 * 0000000140ACA410: jz      loc_140ACA49B
 * 0000000140ACA416: lock or [rsp+0C30h+var_C30], r14d
 * 0000000140ACA41B: mov     rax, [rsi+928h]
 * 0000000140ACA422: mov     rcx, [rax]
 * 0000000140ACA425: cmp     rcx, [rsi+930h]
 * 0000000140ACA42C: jnz     short loc_140ACA49B
 * 0000000140ACA42E: mov     rax, [rsi+928h]
 * 0000000140ACA435: mov     rdx, [rax]
 * 0000000140ACA438: mov     rcx, [rsi+930h]
 * 0000000140ACA43F: cmp     [rsi+8C0h], r14d
 * 0000000140ACA446: jnz     short loc_140ACA49B
 * 0000000140ACA448: mov     rax, [rsi+568h]
 * 0000000140ACA44F: xor     rcx, rdx
 * 0000000140ACA452: mov     [rax+18h], rcx
 * 0000000140ACA456: mov     rcx, [rsi+930h]
 * 0000000140ACA45D: cmp     [rsi+8C0h], r14d
 * 0000000140ACA464: jnz     short loc_140ACA49B
 * 0000000140ACA466: lea     rax, [rsi+r13]
 * 0000000140ACA46A: xor     edx, edx
 * 0000000140ACA46C: mov     [rsi+8C8h], rax
 * 0000000140ACA473: mov     [rsi+8D0h], r14
 * 0000000140ACA47A: mov     qword ptr [rsi+8D8h], 103h
 * 0000000140ACA485: mov     [rsi+8E0h], rcx
 * 0000000140ACA48C: mov     rcx, rsi
 * 0000000140ACA48F: mov     [rsi+8C0h], r15d
 * 0000000140ACA496: call    sub_140AD049C
 * 0000000140ACA49B: xor     r11d, r11d
 * 0000000140ACA49E: bt      dword ptr [rsi+958h], 0Fh
 * 0000000140ACA4A6: jb      short loc_140ACA4B5
 * 0000000140ACA4A8: cmp     [rsi+8C0h], r11d
 * 0000000140ACA4AF: jnz     loc_140AC5CA3
 * 0000000140ACA4B5: mov     rbx, [rsi+948h]
 * 0000000140ACA4BC: lea     rdx, [rbp+0B30h+var_6C0]
 * 0000000140ACA4C3: mov     [rsi+948h], r11
 * 0000000140ACA4CA: mov     rcx, rbx
 * 0000000140ACA4CD: mov     rax, [rsi+288h]
 * 0000000140ACA4D4: call    j__guard_dispatch_icall_nop
 * 0000000140ACA4D9: mov     eax, [rsi+958h]
 * 0000000140ACA4DF: test    r15b, al
 * 0000000140ACA4E2: jz      short loc_140ACA52A
 * 0000000140ACA4E4: and     eax, 0FFFFFFFEh
 * 0000000140ACA4E7: mov     rcx, rbx
 * 0000000140ACA4EA: mov     [rsi+958h], eax
 * 0000000140ACA4F0: mov     rax, [rsi+270h]
 * 0000000140ACA4F7: call    j__guard_dispatch_icall_nop
 * 0000000140ACA4FC: mov     rbx, rax
 * 0000000140ACA4FF: test    rax, rax
 * 0000000140ACA502: jz      short loc_140ACA51E
 * 0000000140ACA504: mov     rax, [rsi+290h]
 * 0000000140ACA50B: mov     rcx, rbx
 * 0000000140ACA50E: call    j__guard_dispatch_icall_nop
 * 0000000140ACA513: mov     [rsi+938h], eax
 * 0000000140ACA519: jmp     loc_140ACA380
 * 0000000140ACA51E: mov     [rsi+938h], r12d
 * 0000000140ACA525: jmp     loc_140AC5CA3
 * 0000000140ACA52A: test    rbx, rbx
 * 0000000140ACA52D: jz      loc_140AC5CA3
 * 0000000140ACA533: jmp     loc_140ACA380
 * 0000000140ACA538: xor     r13d, r13d
 * 0000000140ACA53B: mov     edx, r15d
 * 0000000140ACA53E: mov     rcx, rsi
 * 0000000140ACA541: call    sub_140AD049C
 * 0000000140ACA546: test    dword ptr [rsi+95Ch], 100h
 * 0000000140ACA550: jz      short loc_140ACA55D
 * 0000000140ACA552: mov     rax, [rbp+0B30h+var_B48]
 * 0000000140ACA556: mov     [rbp+0B38h], rax
 * 0000000140ACA55D: mov     r9d, [rsi+958h]
 * 0000000140ACA564: mov     r8d, r9d
 * 0000000140ACA567: bt      r9d, 12h
 * 0000000140ACA56C: jnb     loc_140ACA612
 * 0000000140ACA572: rdtsc
 * 0000000140ACA574: shl     rdx, 20h
 * 0000000140ACA578: or      rax, rdx
 * 0000000140ACA57B: mov     rcx, rax
 * 0000000140ACA57E: ror     rax, 3
 * 0000000140ACA582: xor     rcx, rax
 * 0000000140ACA585: mov     rax, 7010008004002001h
 * 0000000140ACA58F: mul     rcx
 * 0000000140ACA592: mov     rcx, rdx
 * 0000000140ACA595: mov     [rbp+0B30h+var_4D0], rdx
 * 0000000140ACA59C: xor     rcx, rax
 * 0000000140ACA59F: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 0000000140ACA5A9: mul     rcx
 * 0000000140ACA5AC: shr     rdx, 3
 * 0000000140ACA5B0: lea     rax, [rdx+rdx*4]
 * 0000000140ACA5B4: add     rax, rax
 * 0000000140ACA5B7: sub     rcx, rax
 * 0000000140ACA5BA: mov     eax, 2
 * 0000000140ACA5BF: cmp     rcx, rax
 * 0000000140ACA5C2: jnb     short loc_140ACA612
 * 0000000140ACA5C4: cmp     [rsi+8C0h], r13d
 * 0000000140ACA5CB: jnz     short loc_140ACA612
 * 0000000140ACA5CD: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ACA5D7: xor     edx, edx
 * 0000000140ACA5D9: add     rax, rsi
 * 0000000140ACA5DC: mov     rcx, rsi
 * 0000000140ACA5DF: mov     [rsi+8C8h], rax
 * 0000000140ACA5E6: mov     [rsi+8D0h], r13
 * 0000000140ACA5ED: mov     qword ptr [rsi+8D8h], 108h
 * 0000000140ACA5F8: mov     [rsi+8E0h], r13
 * 0000000140ACA5FF: mov     [rsi+8C0h], r15d
 * 0000000140ACA606: call    sub_140AD049C
 * 0000000140ACA60B: mov     r8d, [rsi+958h]
 * 0000000140ACA612: mov     r11d, 8000h
 * 0000000140ACA618: bt      r8d, 1Eh
 * 0000000140ACA61D: jb      short loc_140ACA696
 * 0000000140ACA61F: test    r11d, r8d
 * 0000000140ACA622: jnz     short loc_140ACA696
 * 0000000140ACA624: lea     rdx, [rsi+8C0h]
 * 0000000140ACA62B: cmp     [rdx], r13d
 * 0000000140ACA62E: jz      short loc_140ACA696
 * 0000000140ACA630: mov     rcx, [rbp+0B30h+arg_0]
 * 0000000140ACA637: test    [rcx+958h], r11d
 * 0000000140ACA63E: jz      short loc_140ACA649
 * 0000000140ACA640: add     rcx, 8C0h
 * 0000000140ACA647: jmp     short loc_140ACA655
 * 0000000140ACA649: add     rcx, 8C0h
 * 0000000140ACA650: cmp     [rcx], r13d
 * 0000000140ACA653: jnz     short loc_140ACA696
 * 0000000140ACA655: mov     r8d, 28h ; '('
 * 0000000140ACA65B: lea     r9d, [r8-23h]
 * 0000000140ACA65F: mov     rax, [rdx]
 * 0000000140ACA662: add     r8d, 0FFFFFFF8h
 * 0000000140ACA666: mov     [rcx], rax
 * 0000000140ACA669: add     rdx, 8
 * 0000000140ACA66D: add     rcx, 8
 * 0000000140ACA671: sub     r9, r15
 * 0000000140ACA674: jnz     short loc_140ACA65F
 * 0000000140ACA676: test    r8d, r8d
 * 0000000140ACA679: jz      short loc_140ACA696
 * 0000000140ACA67B: mov     edi, 0FFFFFFFFh
 * 0000000140ACA680: mov     al, [rdx]
 * 0000000140ACA682: add     rdx, r15
 * 0000000140ACA685: mov     [rcx], al
 * 0000000140ACA687: add     rcx, r15
 * 0000000140ACA68A: add     r8d, edi
 * 0000000140ACA68D: jnz     short loc_140ACA680
 * 0000000140ACA68F: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ACA696: test    [rsi+958h], r11d
 * 0000000140ACA69D: jnz     short loc_140ACA6AC
 * 0000000140ACA69F: cmp     [rsi+8C0h], r13d
 * 0000000140ACA6A6: jnz     loc_140ACB5BD
 * 0000000140ACA6AC: mov     eax, [rsi+9F0h]
 * 0000000140ACA6B2: test    eax, eax
 * 0000000140ACA6B4: jz      loc_140ACB5BD
 * 0000000140ACA6BA: lea     r14, [rsi+rax]
 * 0000000140ACA6BE: mov     r11, [r14+8]
 * 0000000140ACA6C2: mov     [rbp+0B30h+var_B88], r14
 * 0000000140ACA6C6: test    r11, r11
 * 0000000140ACA6C9: jz      loc_140ACA998
 * 0000000140ACA6CF: mov     r9d, [r14+10h]
 * 0000000140ACA6D3: mov     r8, r11
 * 0000000140ACA6D6: add     [rsi+7F0h], r9d
 * 0000000140ACA6DD: mov     rax, r11
 * 0000000140ACA6E0: mov     r10d, [rsi+7DCh]
 * 0000000140ACA6E7: mov     r12, [rsi+7E0h]
 * 0000000140ACA6EE: lea     rcx, [r11+r9]
 * 0000000140ACA6F2: cmp     r11, rcx
 * 0000000140ACA6F5: jnb     short loc_140ACA707
 * 0000000140ACA6F7: mov     edx, 40h ; '@'
 * 0000000140ACA6FC: prefetchnta byte ptr [rax]
 * 0000000140ACA6FF: add     rax, rdx
 * 0000000140ACA702: cmp     rax, rcx
 * 0000000140ACA705: jb      short loc_140ACA6FC
 * 0000000140ACA707: mov     r15d, r9d
 * 0000000140ACA70A: mov     rbx, r12
 * 0000000140ACA70D: shr     r15d, 7
 * 0000000140ACA711: test    r15d, r15d
 * 0000000140ACA714: jz      short loc_140ACA78D
 * 0000000140ACA716: mov     rdi, 7010008004002001h
 * 0000000140ACA720: mov     edx, 8
 * 0000000140ACA725: lea     r14d, [rdx-7]
 * 0000000140ACA729: mov     rax, [r8]
 * 0000000140ACA72C: mov     ecx, r10d
 * 0000000140ACA72F: xor     rax, rbx
 * 0000000140ACA732: mov     rbx, [r8+8]
 * 0000000140ACA736: rol     rax, cl
 * 0000000140ACA739: add     r8, 10h
 * 0000000140ACA73D: xor     rbx, rax
 * 0000000140ACA740: rol     rbx, cl
 * 0000000140ACA743: sub     rdx, r14
 * 0000000140ACA746: jnz     short loc_140ACA729
 * 0000000140ACA748: mov     rcx, r8
 * 0000000140ACA74B: sub     rcx, r11
 * 0000000140ACA74E: xor     rcx, r12
 * 0000000140ACA751: mov     rax, rcx
 * 0000000140ACA754: rol     rax, 11h
 * 0000000140ACA758: xor     rcx, rax
 * 0000000140ACA75B: mov     rax, rdi
 * 0000000140ACA75E: mul     rcx
 * 0000000140ACA761: xor     eax, edx
 * 0000000140ACA763: mov     [rbp+0B30h+var_4C8], rdx
 * 0000000140ACA76A: xor     r10d, eax
 * 0000000140ACA76D: mov     rax, r14
 * 0000000140ACA770: and     r10d, 3Fh
 * 0000000140ACA774: cmovz   r10d, eax
 * 0000000140ACA778: mov     eax, 0FFFFFFFFh
 * 0000000140ACA77D: add     r15d, eax
 * 0000000140ACA780: jnz     short loc_140ACA720
 * 0000000140ACA782: mov     r14, [rbp+0B30h+var_B88]
 * 0000000140ACA786: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ACA78D: and     r9d, 7Fh
 * 0000000140ACA791: mov     r11d, 1
 * 0000000140ACA797: cmp     r9d, 8
 * 0000000140ACA79B: jb      short loc_140ACA7BA
 * 0000000140ACA79D: mov     edx, r9d
 * 0000000140ACA7A0: shr     rdx, 3
 * 0000000140ACA7A4: xor     rbx, [r8]
 * 0000000140ACA7A7: mov     ecx, r10d
 * 0000000140ACA7AA: rol     rbx, cl
 * 0000000140ACA7AD: add     r8, 8
 * 0000000140ACA7B1: add     r9d, 0FFFFFFF8h
 * 0000000140ACA7B5: sub     rdx, r11
 * 0000000140ACA7B8: jnz     short loc_140ACA7A4
 * 0000000140ACA7BA: test    r9d, r9d
 * 0000000140ACA7BD: jz      short loc_140ACA7DE
 * 0000000140ACA7BF: mov     r14d, 0FFFFFFFFh
 * 0000000140ACA7C5: movzx   eax, byte ptr [r8]
 * 0000000140ACA7C9: mov     ecx, r10d
 * 0000000140ACA7CC: xor     rbx, rax
 * 0000000140ACA7CF: add     r8, r11
 * 0000000140ACA7D2: rol     rbx, cl
 * 0000000140ACA7D5: add     r9d, r14d
 * 0000000140ACA7D8: jnz     short loc_140ACA7C5
 * 0000000140ACA7DA: mov     r14, [rbp+0B30h+var_B88]
 * 0000000140ACA7DE: mov     rax, rbx
 * 0000000140ACA7E1: jmp     short loc_140ACA7E5
 * 0000000140ACA7E3: xor     ebx, eax
 * 0000000140ACA7E5: shr     rax, 1Fh
 * 0000000140ACA7E9: test    rax, rax
 * 0000000140ACA7EC: jnz     short loc_140ACA7E3
 * 0000000140ACA7EE: btr     ebx, 1Fh
 * 0000000140ACA7F2: mov     r12d, r13d
 * 0000000140ACA7F5: cmp     ebx, [r14+14h]
 * 0000000140ACA7F9: jz      loc_140ACA961
 * 0000000140ACA7FF: cmp     [r14], r13d
 * 0000000140ACA802: jnz     short loc_140ACA80C
 * 0000000140ACA804: cmp     [r14+18h], r13d
 * 0000000140ACA808: cmovnz  r12d, r11d
 * 0000000140ACA80C: mov     ecx, [r14+10h]
 * 0000000140ACA810: mov     rdx, [r14+8]
 * 0000000140ACA814: test    rcx, rcx
 * 0000000140ACA817: jz      loc_140ACA8E9
 * 0000000140ACA81D: mov     eax, [rsi+95Ch]
 * 0000000140ACA823: mov     r8d, 40h ; '@'
 * 0000000140ACA829: test    r8b, al
 * 0000000140ACA82C: jz      loc_140ACA8E9
 * 0000000140ACA832: mov     rax, cr8
 * 0000000140ACA836: mov     [rbp+0B30h+arg_8], rax
 * 0000000140ACA83D: mov     r8d, 2
 * 0000000140ACA843: mov     cr8, r8
 * 0000000140ACA847: dec     rcx
 * 0000000140ACA84A: mov     r15, rdx
 * 0000000140ACA84D: and     r15, 0FFFFFFFFFFFFF000h
 * 0000000140ACA854: add     rcx, rdx
 * 0000000140ACA857: or      rcx, 0FFFh
 * 0000000140ACA85E: mov     [rsp+0C30h+var_BC8], rcx
 * 0000000140ACA863: lea     rcx, [r15-1]
 * 0000000140ACA867: mov     [rbp+0B30h+var_B48], rcx
 * 0000000140ACA86B: movzx   r13d, al
 * 0000000140ACA86F: mov     rax, [rsi+458h]
 * 0000000140ACA876: xor     edx, edx
 * 0000000140ACA878: mov     rcx, r15
 * 0000000140ACA87B: call    j__guard_dispatch_icall_nop
 * 0000000140ACA880: cmp     eax, 0C000022Dh
 * 0000000140ACA885: jnz     short loc_140ACA8B4
 * 0000000140ACA887: test    r12d, r12d
 * 0000000140ACA88A: jnz     short loc_140ACA8E2
 * 0000000140ACA88C: mov     rax, [rbp+0B30h+arg_8]
 * 0000000140ACA893: lea     ecx, [r12+1]
 * 0000000140ACA898: cmp     al, cl
 * 0000000140ACA89A: ja      short loc_140ACA8BF
 * 0000000140ACA89C: movzx   r13d, al
 * 0000000140ACA8A0: mov     cr8, r13
 * 0000000140ACA8A4: mov     al, [r15]
 * 0000000140ACA8A7: mov     rax, cr8
 * 0000000140ACA8AB: lea     eax, [rcx+1]
 * 0000000140ACA8AE: mov     cr8, rax
 * 0000000140ACA8B2: jmp     short loc_140ACA86F
 * 0000000140ACA8B4: test    eax, eax
 * 0000000140ACA8B6: js      short loc_140ACA8E2
 * 0000000140ACA8B8: mov     rax, [rbp+0B30h+arg_8]
 * 0000000140ACA8BF: mov     rcx, [rbp+0B30h+var_B48]
 * 0000000140ACA8C3: mov     edx, 1000h
 * 0000000140ACA8C8: add     rcx, rdx
 * 0000000140ACA8CB: add     r15, rdx
 * 0000000140ACA8CE: mov     [rbp+0B30h+var_B48], rcx
 * 0000000140ACA8D2: cmp     rcx, [rsp+0C30h+var_BC8]
 * 0000000140ACA8D7: jnz     short loc_140ACA86B
 * 0000000140ACA8D9: mov     cr8, r13
 * 0000000140ACA8DD: xor     r13d, r13d
 * 0000000140ACA8E0: jmp     short loc_140ACA961
 * 0000000140ACA8E2: mov     cr8, r13
 * 0000000140ACA8E6: xor     r13d, r13d
 * 0000000140ACA8E9: mov     eax, [r14+14h]
 * 0000000140ACA8ED: cmp     [rsi+8C0h], r13d
 * 0000000140ACA8F4: jnz     short loc_140ACA961
 * 0000000140ACA8F6: mov     ecx, ebx
 * 0000000140ACA8F8: xor     rcx, rax
 * 0000000140ACA8FB: mov     rax, [rsi+568h]
 * 0000000140ACA902: mov     [rax+18h], rcx
 * 0000000140ACA906: mov     rcx, [r14+8]
 * 0000000140ACA90A: cmp     [rsi+8C0h], r13d
 * 0000000140ACA911: jnz     short loc_140ACA961
 * 0000000140ACA913: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ACA91D: xor     edx, edx
 * 0000000140ACA91F: add     rax, rsi
 * 0000000140ACA922: mov     [rsi+8C8h], rax
 * 0000000140ACA929: mov     rax, 0B3B74BDEE4453415h
 * 0000000140ACA933: add     rax, r14
 * 0000000140ACA936: mov     [rsi+8D0h], rax
 * 0000000140ACA93D: movsxd  rax, dword ptr [r14]
 * 0000000140ACA940: mov     [rsi+8D8h], rax
 * 0000000140ACA947: mov     eax, 1
 * 0000000140ACA94C: mov     [rsi+8E0h], rcx
 * 0000000140ACA953: mov     rcx, rsi
 * 0000000140ACA956: mov     [rsi+8C0h], eax
 * 0000000140ACA95C: call    sub_140AD049C
 * 0000000140ACA961: mov     rcx, [r14+18h]
 * 0000000140ACA965: mov     rax, [rsi+0F0h]
 * 0000000140ACA96C: call    j__guard_dispatch_icall_nop
 * 0000000140ACA971: mov     [r14+8], r13
 * 0000000140ACA975: mov     [r14+10h], r13d
 * 0000000140ACA979: mov     rcx, [rsi+7E0h]
 * 0000000140ACA980: mov     rax, rcx
 * 0000000140ACA983: jmp     short loc_140ACA987
 * 0000000140ACA985: xor     ecx, eax
 * 0000000140ACA987: shr     rax, 1Fh
 * 0000000140ACA98B: test    rax, rax
 * 0000000140ACA98E: jnz     short loc_140ACA985
 * 0000000140ACA990: btr     ecx, 1Fh
 * 0000000140ACA994: mov     [r14+14h], ecx
 * 0000000140ACA998: rdtsc
 * 0000000140ACA99A: shl     rdx, 20h
 * 0000000140ACA99E: mov     r8, 7010008004002001h
 * 0000000140ACA9A8: or      rax, rdx
 * 0000000140ACA9AB: mov     rcx, rax
 * 0000000140ACA9AE: ror     rax, 3
 * 0000000140ACA9B2: xor     rcx, rax
 * 0000000140ACA9B5: mov     rax, r8
 * 0000000140ACA9B8: mul     rcx
 * 0000000140ACA9BB: mov     rcx, rdx
 * 0000000140ACA9BE: mov     [rbp+0B30h+var_4C0], rdx
 * 0000000140ACA9C5: xor     rcx, rax
 * 0000000140ACA9C8: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140ACA9D2: mul     rcx
 * 0000000140ACA9D5: shr     rdx, 1
 * 0000000140ACA9D8: lea     rax, [rdx+rdx*2]
 * 0000000140ACA9DC: cmp     rcx, rax
 * 0000000140ACA9DF: jnz     loc_140ACB5C8
 * 0000000140ACA9E5: lea     r12, [r14+18h]
 * 0000000140ACA9E9: mov     [rbp+0B30h+arg_8], r12
 * 0000000140ACA9F0: rdtsc
 * 0000000140ACA9F2: shl     rdx, 20h
 * 0000000140ACA9F6: or      rax, rdx
 * 0000000140ACA9F9: mov     rcx, rax
 * 0000000140ACA9FC: ror     rax, 3
 * 0000000140ACAA00: xor     rcx, rax
 * 0000000140ACAA03: mov     rax, r8
 * 0000000140ACAA06: mul     rcx
 * 0000000140ACAA09: mov     rbx, rax
 * 0000000140ACAA0C: mov     [rbp+0B30h+var_4B8], rdx
 * 0000000140ACAA13: xor     ebx, edx
 * 0000000140ACAA15: and     ebx, 7FFh
 * 0000000140ACAA1B: rdtsc
 * 0000000140ACAA1D: shl     rdx, 20h
 * 0000000140ACAA21: or      rax, rdx
 * 0000000140ACAA24: mov     rcx, rax
 * 0000000140ACAA27: ror     rax, 3
 * 0000000140ACAA2B: xor     rcx, rax
 * 0000000140ACAA2E: mov     rax, r8
 * 0000000140ACAA31: mov     r8d, [rsi+7D8h]
 * 0000000140ACAA38: mul     rcx
 * 0000000140ACAA3B: lea     ecx, [rbx+1]
 * 0000000140ACAA3E: xor     rax, rdx
 * 0000000140ACAA41: mov     [rbp+0B30h+var_4B0], rdx
 * 0000000140ACAA48: xor     edx, edx
 * 0000000140ACAA4A: div     rcx
 * 0000000140ACAA4D: mov     eax, [rsi+958h]
 * 0000000140ACAA53: and     eax, 10000000h
 * 0000000140ACAA58: mov     r15, rdx
 * 0000000140ACAA5B: neg     eax
 * 0000000140ACAA5D: lea     edx, [rbx+0A68h]
 * 0000000140ACAA63: mov     rax, [rsi+0E8h]
 * 0000000140ACAA6A: sbb     rcx, rcx
 * 0000000140ACAA6D: and     rcx, 0FFFFFFFFFFFFFFC0h
 * 0000000140ACAA71: add     rcx, 82h
 * 0000000140ACAA78: call    j__guard_dispatch_icall_nop
 * 0000000140ACAA7D: mov     r11, rax
 * 0000000140ACAA80: test    rax, rax
 * 0000000140ACAA83: jnz     loc_140ACAE3C
 * 0000000140ACAA89: lea     r15d, [rax+1]
 * 0000000140ACAA8D: add     [rsi+9E0h], r15d
 * 0000000140ACAA94: mov     r11d, 8000h
 * 0000000140ACAA9A: mov     r8, 7010008004002001h
 * 0000000140ACAAA4: mov     [rbp+0B30h+var_BB0], r13d
 * 0000000140ACAAA8: mov     [rbp+0B30h+var_B98], r13
 * 0000000140ACAAAC: mov     r13d, [rsi+958h]
 * 0000000140ACAAB3: mov     dword ptr [rbp+0B30h+arg_8], r13d
 * 0000000140ACAABA: bt      r13d, 1Eh
 * 0000000140ACAABF: jb      loc_140ACBE9E
 * 0000000140ACAAC5: mov     r14, [rbp+0B30h+arg_0]
 * 0000000140ACAACC: cmp     rsi, r14
 * 0000000140ACAACF: jnz     loc_140ACB9B7
 * 0000000140ACAAD5: xor     r15d, r15d
 * 0000000140ACAAD8: test    r11d, r13d
 * 0000000140ACAADB: jnz     short loc_140ACAAEA
 * 0000000140ACAADD: cmp     [rsi+8C0h], r15d
 * 0000000140ACAAE4: jnz     loc_140ACB771
 * 0000000140ACAAEA: mov     r8d, [r14+8ECh]
 * 0000000140ACAAF1: mov     rcx, r14
 * 0000000140ACAAF4: mov     edx, [r14+7ACh]
 * 0000000140ACAAFB: call    sub_140ACFC24
 * 0000000140ACAB00: mov     rsi, rax
 * 0000000140ACAB03: test    rax, rax
 * 0000000140ACAB06: jz      loc_140ACB771
 * 0000000140ACAB0C: mov     ecx, [rsi+91Ch]
 * 0000000140ACAB12: mov     r12d, [rsi+9F4h]
 * 0000000140ACAB19: mov     rax, [rax+790h]
 * 0000000140ACAB20: add     r12d, 0FFFFFF38h
 * 0000000140ACAB27: mov     dword ptr [rbp+0B30h+var_B90], ecx
 * 0000000140ACAB2A: mov     ecx, [rsi+958h]
 * 0000000140ACAB30: shr     r12d, 3
 * 0000000140ACAB34: mov     [rbp+0B30h+var_BB0], ecx
 * 0000000140ACAB37: mov     rcx, [rsi+4C0h]
 * 0000000140ACAB3E: mov     [rbp+0B30h+var_B68], rcx
 * 0000000140ACAB42: mov     rcx, [rsi+598h]
 * 0000000140ACAB49: mov     [rsi+0C4h], r12d
 * 0000000140ACAB50: mov     dword ptr [rbp+0B30h+arg_8], r12d
 * 0000000140ACAB57: mov     r12, 7010008004002001h
 * 0000000140ACAB61: mov     [rbp+0B30h+var_B48], rcx
 * 0000000140ACAB65: mov     [rbp+0B30h+var_B98], rax
 * 0000000140ACAB69: rdtsc
 * 0000000140ACAB6B: shl     rdx, 20h
 * 0000000140ACAB6F: or      rax, rdx
 * 0000000140ACAB72: mov     rcx, rax
 * 0000000140ACAB75: ror     rax, 3
 * 0000000140ACAB79: xor     rcx, rax
 * 0000000140ACAB7C: mov     rax, r12
 * 0000000140ACAB7F: mul     rcx
 * 0000000140ACAB82: mov     rbx, rdx
 * 0000000140ACAB85: mov     [rbp+0B30h+var_468], rdx
 * 0000000140ACAB8C: xor     rbx, rax
 * 0000000140ACAB8F: jz      short loc_140ACAB69
 * 0000000140ACAB91: mov     rax, [rsi+780h]
 * 0000000140ACAB98: lea     r14, [rsi+760h]
 * 0000000140ACAB9F: mov     r12d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140ACABA6: lea     rdx, [rbp+0B30h+var_F0]
 * 0000000140ACABAD: mov     r11d, 20h ; ' '
 * 0000000140ACABB3: mov     [rsp+0C30h+var_BC8], rax
 * 0000000140ACABB8: mov     eax, [rsi+7F0h]
 * 0000000140ACABBE: mov     r8d, r11d
 * 0000000140ACABC1: mov     [rbp+0B30h+var_BAC], eax
 * 0000000140ACABC4: mov     rcx, r14
 * 0000000140ACABC7: lea     r10d, [r11-1Ch]
 * 0000000140ACABCB: mov     r9d, r10d
 * 0000000140ACABCE: lea     r13d, [r11-1Fh]
 * 0000000140ACABD2: mov     rax, [rcx]
 * 0000000140ACABD5: add     r8d, 0FFFFFFF8h
 * 0000000140ACABD9: mov     [rdx], rax
 * 0000000140ACABDC: add     rcx, 8
 * 0000000140ACABE0: add     rdx, 8
 * 0000000140ACABE4: sub     r9, r13
 * 0000000140ACABE7: jnz     short loc_140ACABD2
 * 0000000140ACABE9: test    r8d, r8d
 * 0000000140ACABEC: jz      short loc_140ACAC0A
 * 0000000140ACABEE: mov     r12d, 0FFFFFFFFh
 * 0000000140ACABF4: mov     al, [rcx]
 * 0000000140ACABF6: add     rcx, r13
 * 0000000140ACABF9: mov     [rdx], al
 * 0000000140ACABFB: add     rdx, r13
 * 0000000140ACABFE: add     r8d, r12d
 * 0000000140ACAC01: jnz     short loc_140ACABF4
 * 0000000140ACAC03: mov     r12d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140ACAC0A: mov     [rsi+780h], r15
 * 0000000140ACAC11: mov     ecx, r11d
 * 0000000140ACAC14: mov     [rsi+7F0h], r15d
 * 0000000140ACAC1B: mov     rax, r14
 * 0000000140ACAC1E: mov     rdx, r10
 * 0000000140ACAC21: mov     [rax], r15
 * 0000000140ACAC24: add     ecx, 0FFFFFFF8h
 * 0000000140ACAC27: add     rax, 8
 * 0000000140ACAC2B: sub     rdx, r13
 * 0000000140ACAC2E: jnz     short loc_140ACAC21
 * 0000000140ACAC30: mov     edx, 0FFFFFFFFh
 * 0000000140ACAC35: test    ecx, ecx
 * 0000000140ACAC37: jz      short loc_140ACAC43
 * 0000000140ACAC39: mov     [rax], r15b
 * 0000000140ACAC3C: add     rax, r13
 * 0000000140ACAC3F: add     ecx, edx
 * 0000000140ACAC41: jnz     short loc_140ACAC39
 * 0000000140ACAC43: mov     r11d, [rsi+7ACh]
 * 0000000140ACAC4A: mov     r10, rsi
 * 0000000140ACAC4D: add     [rsi+7F0h], r11d
 * 0000000140ACAC54: mov     rax, rsi
 * 0000000140ACAC57: mov     r9d, [rsi+7DCh]
 * 0000000140ACAC5E: mov     r13, [rsi+7E0h]
 * 0000000140ACAC65: lea     rcx, [rsi+r11]
 * 0000000140ACAC69: cmp     rsi, rcx
 * 0000000140ACAC6C: jnb     short loc_140ACAC7F
 * 0000000140ACAC6E: mov     r8d, 40h ; '@'
 * 0000000140ACAC74: prefetchnta byte ptr [rax]
 * 0000000140ACAC77: add     rax, r8
 * 0000000140ACAC7A: cmp     rax, rcx
 * 0000000140ACAC7D: jb      short loc_140ACAC74
 * 0000000140ACAC7F: mov     r15d, r11d
 * 0000000140ACAC82: mov     r8, r13
 * 0000000140ACAC85: shr     r15d, 7
 * 0000000140ACAC89: test    r15d, r15d
 * 0000000140ACAC8C: jz      short loc_140ACAD08
 * 0000000140ACAC8E: mov     r12, 7010008004002001h
 * 0000000140ACAC98: mov     edx, 8
 * 0000000140ACAC9D: lea     edi, [rdx-7]
 * 0000000140ACACA0: mov     rax, [r10]
 * 0000000140ACACA3: mov     ecx, r9d
 * 0000000140ACACA6: xor     rax, r8
 * 0000000140ACACA9: mov     r8, [r10+8]
 * 0000000140ACACAD: rol     rax, cl
 * 0000000140ACACB0: add     r10, 10h
 * 0000000140ACACB4: xor     r8, rax
 * 0000000140ACACB7: rol     r8, cl
 * 0000000140ACACBA: sub     rdx, rdi
 * 0000000140ACACBD: jnz     short loc_140ACACA0
 * 0000000140ACACBF: mov     rcx, r10
 * 0000000140ACACC2: sub     rcx, rsi
 * 0000000140ACACC5: xor     rcx, r13
 * 0000000140ACACC8: mov     rax, rcx
 * 0000000140ACACCB: rol     rax, 11h
 * 0000000140ACACCF: xor     rcx, rax
 * 0000000140ACACD2: mov     rax, r12
 * 0000000140ACACD5: mul     rcx
 * 0000000140ACACD8: xor     r9d, eax
 * 0000000140ACACDB: mov     [rbp+0B30h+var_460], rdx
 * 0000000140ACACE2: xor     r9d, edx
 * 0000000140ACACE5: mov     rax, rdi
 * 0000000140ACACE8: and     r9d, 3Fh
 * 0000000140ACACEC: mov     edx, 0FFFFFFFFh
 * 0000000140ACACF1: cmovz   r9d, eax
 * 0000000140ACACF5: add     r15d, edx
 * 0000000140ACACF8: jnz     short loc_140ACAC98
 * 0000000140ACACFA: mov     r12d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140ACAD01: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ACAD08: and     r11d, 7Fh
 * 0000000140ACAD0C: mov     r13d, 1
 * 0000000140ACAD12: cmp     r11d, 8
 * 0000000140ACAD16: jb      short loc_140ACAD3A
 * 0000000140ACAD18: mov     edx, r11d
 * 0000000140ACAD1B: shr     rdx, 3
 * 0000000140ACAD1F: xor     r8, [r10]
 * 0000000140ACAD22: mov     ecx, r9d
 * 0000000140ACAD25: rol     r8, cl
 * 0000000140ACAD28: add     r10, 8
 * 0000000140ACAD2C: add     r11d, 0FFFFFFF8h
 * 0000000140ACAD30: sub     rdx, r13
 * 0000000140ACAD33: jnz     short loc_140ACAD1F
 * 0000000140ACAD35: mov     edx, 0FFFFFFFFh
 * 0000000140ACAD3A: xor     r15d, r15d
 * 0000000140ACAD3D: test    r11d, r11d
 * 0000000140ACAD40: jz      short loc_140ACAD57
 * 0000000140ACAD42: movzx   eax, byte ptr [r10]
 * 0000000140ACAD46: mov     ecx, r9d
 * 0000000140ACAD49: xor     r8, rax
 * 0000000140ACAD4C: add     r10, r13
 * 0000000140ACAD4F: rol     r8, cl
 * 0000000140ACAD52: add     r11d, edx
 * 0000000140ACAD55: jnz     short loc_140ACAD42
 * 0000000140ACAD57: mov     rax, [rsp+0C30h+var_BC8]
 * 0000000140ACAD5C: lea     rcx, [rbp+0B30h+var_F0]
 * 0000000140ACAD63: mov     r9d, 4
 * 0000000140ACAD69: mov     [rsi+780h], rax
 * 0000000140ACAD70: mov     eax, [rbp+0B30h+var_BAC]
 * 0000000140ACAD73: mov     edx, r9d
 * 0000000140ACAD76: add     [rsi+7F0h], eax
 * 0000000140ACAD7C: lea     r10d, [r9+1Ch]
 * 0000000140ACAD80: mov     rax, [rcx]
 * 0000000140ACAD83: add     r10d, 0FFFFFFF8h
 * 0000000140ACAD87: mov     [r14], rax
 * 0000000140ACAD8A: add     rcx, 8
 * 0000000140ACAD8E: add     r14, 8
 * 0000000140ACAD92: sub     rdx, r13
 * 0000000140ACAD95: jnz     short loc_140ACAD80
 * 0000000140ACAD97: test    r10d, r10d
 * 0000000140ACAD9A: jz      short loc_140ACADB9
 * 0000000140ACAD9C: mov     r12d, 0FFFFFFFFh
 * 0000000140ACADA2: mov     al, [rcx]
 * 0000000140ACADA4: add     rcx, r13
 * 0000000140ACADA7: mov     [r14], al
 * 0000000140ACADAA: add     r14, r13
 * 0000000140ACADAD: add     r10d, r12d
 * 0000000140ACADB0: jnz     short loc_140ACADA2
 * 0000000140ACADB2: mov     r12d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140ACADB9: mov     [rsi+780h], r8
 * 0000000140ACADC0: test    dword ptr [rsi+958h], 40000000h
 * 0000000140ACADCA: jnz     loc_140ACBE61
 * 0000000140ACADD0: mov     rcx, rsi
 * 0000000140ACADD3: mov     eax, r15d
 * 0000000140ACADD6: mov     r14d, 19h
 * 0000000140ACADDC: xor     [rcx], rbx
 * 0000000140ACADDF: add     eax, r13d
 * 0000000140ACADE2: lea     rcx, [rcx+8]
 * 0000000140ACADE6: cmp     eax, r14d
 * 0000000140ACADE9: jb      short loc_140ACADDC
 * 0000000140ACADEB: mov     [rbp+0B30h+var_988], rbx
 * 0000000140ACADF2: mov     r8d, r12d
 * 0000000140ACADF5: test    r12d, r12d
 * 0000000140ACADF8: jz      loc_140ACB5D9
 * 0000000140ACADFE: mov     edx, r12d
 * 0000000140ACAE01: dec     rdx
 * 0000000140ACAE04: lea     rdx, [rcx+rdx*8]
 * 0000000140ACAE08: xor     [rdx], rbx
 * 0000000140ACAE0B: lea     rax, [rbp+0B30h+var_988]
 * 0000000140ACAE12: mov     ecx, r8d
 * 0000000140ACAE15: lea     rdx, [rdx-8]
 * 0000000140ACAE19: ror     rbx, cl
 * 0000000140ACAE1C: mov     [rbp+0B30h+var_988], rbx
 * 0000000140ACAE23: and     ebx, 3Fh
 * 0000000140ACAE26: btc     [rax], rbx
 * 0000000140ACAE2A: sub     r8d, r13d
 * 0000000140ACAE2D: jz      loc_140ACB5D9
 * 0000000140ACAE33: mov     rbx, [rbp+0B30h+var_988]
 * 0000000140ACAE3A: jmp     short loc_140ACAE08
 * 0000000140ACAE3C: mov     r9d, r15d
 * 0000000140ACAE3F: mov     r8, r11
 * 0000000140ACAE42: cmp     r15d, 8
 * 0000000140ACAE46: jb      short loc_140ACAE9D
 * 0000000140ACAE48: mov     r10d, r15d
 * 0000000140ACAE4B: mov     r14d, 1
 * 0000000140ACAE51: shr     r10, 3
 * 0000000140ACAE55: mov     r12, 7010008004002001h
 * 0000000140ACAE5F: rdtsc
 * 0000000140ACAE61: shl     rdx, 20h
 * 0000000140ACAE65: add     r9d, 0FFFFFFF8h
 * 0000000140ACAE69: or      rax, rdx
 * 0000000140ACAE6C: mov     rcx, rax
 * 0000000140ACAE6F: ror     rax, 3
 * 0000000140ACAE73: xor     rcx, rax
 * 0000000140ACAE76: mov     rax, r12
 * 0000000140ACAE79: mul     rcx
 * 0000000140ACAE7C: mov     [rbp+0B30h+var_4A8], rdx
 * 0000000140ACAE83: xor     rdx, rax
 * 0000000140ACAE86: mov     [r8], rdx
 * 0000000140ACAE89: add     r8, 8
 * 0000000140ACAE8D: sub     r10, r14
 * 0000000140ACAE90: jnz     short loc_140ACAE5F
 * 0000000140ACAE92: mov     r14, [rbp+0B30h+var_B88]
 * 0000000140ACAE96: mov     r12, [rbp+0B30h+arg_8]
 * 0000000140ACAE9D: test    r9d, r9d
 * 0000000140ACAEA0: jz      short loc_140ACAEE5
 * 0000000140ACAEA2: rdtsc
 * 0000000140ACAEA4: shl     rdx, 20h
 * 0000000140ACAEA8: or      rax, rdx
 * 0000000140ACAEAB: mov     rcx, rax
 * 0000000140ACAEAE: ror     rax, 3
 * 0000000140ACAEB2: xor     rcx, rax
 * 0000000140ACAEB5: mov     rax, 7010008004002001h
 * 0000000140ACAEBF: mul     rcx
 * 0000000140ACAEC2: mov     ecx, 0FFFFFFFFh
 * 0000000140ACAEC7: mov     [rbp+0B30h+var_4A0], rdx
 * 0000000140ACAECE: xor     rdx, rax
 * 0000000140ACAED1: mov     eax, 1
 * 0000000140ACAED6: mov     [r8], dl
 * 0000000140ACAED9: add     r8, rax
 * 0000000140ACAEDC: shr     rdx, 8
 * 0000000140ACAEE0: add     r9d, ecx
 * 0000000140ACAEE3: jnz     short loc_140ACAED6
 * 0000000140ACAEE5: mov     r9d, r15d
 * 0000000140ACAEE8: sub     ebx, r15d
 * 0000000140ACAEEB: add     r9, r11
 * 0000000140ACAEEE: mov     r15d, 1
 * 0000000140ACAEF4: lea     r8, [r9+0A68h]
 * 0000000140ACAEFB: cmp     ebx, 8
 * 0000000140ACAEFE: jb      short loc_140ACAF47
 * 0000000140ACAF00: mov     r10d, ebx
 * 0000000140ACAF03: mov     r12, 7010008004002001h
 * 0000000140ACAF0D: shr     r10, 3
 * 0000000140ACAF11: rdtsc
 * 0000000140ACAF13: shl     rdx, 20h
 * 0000000140ACAF17: add     ebx, 0FFFFFFF8h
 * 0000000140ACAF1A: or      rax, rdx
 * 0000000140ACAF1D: mov     rcx, rax
 * 0000000140ACAF20: ror     rax, 3
 * 0000000140ACAF24: xor     rcx, rax
 * 0000000140ACAF27: mov     rax, r12
 * 0000000140ACAF2A: mul     rcx
 * 0000000140ACAF2D: mov     [rbp+0B30h+var_498], rdx
 * 0000000140ACAF34: xor     rdx, rax
 * 0000000140ACAF37: mov     [r8], rdx
 * 0000000140ACAF3A: add     r8, 8
 * 0000000140ACAF3E: sub     r10, r15
 * 0000000140ACAF41: jnz     short loc_140ACAF11
 * 0000000140ACAF43: lea     r12, [r14+18h]
 * 0000000140ACAF47: test    ebx, ebx
 * 0000000140ACAF49: jz      short loc_140ACAF88
 * 0000000140ACAF4B: rdtsc
 * 0000000140ACAF4D: shl     rdx, 20h
 * 0000000140ACAF51: or      rax, rdx
 * 0000000140ACAF54: mov     rcx, rax
 * 0000000140ACAF57: ror     rax, 3
 * 0000000140ACAF5B: xor     rcx, rax
 * 0000000140ACAF5E: mov     rax, 7010008004002001h
 * 0000000140ACAF68: mul     rcx
 * 0000000140ACAF6B: mov     [rbp+0B30h+var_490], rdx
 * 0000000140ACAF72: xor     rdx, rax
 * 0000000140ACAF75: mov     eax, 0FFFFFFFFh
 * 0000000140ACAF7A: mov     [r8], dl
 * 0000000140ACAF7D: add     r8, r15
 * 0000000140ACAF80: shr     rdx, 8
 * 0000000140ACAF84: add     ebx, eax
 * 0000000140ACAF86: jnz     short loc_140ACAF7A
 * 0000000140ACAF88: test    r12, r12
 * 0000000140ACAF8B: jz      short loc_140ACAF91
 * 0000000140ACAF8D: mov     [r12], r11
 * 0000000140ACAF91: test    r9, r9
 * 0000000140ACAF94: jz      loc_140ACAA94
 * 0000000140ACAF9A: mov     r10d, 0A68h
 * 0000000140ACAFA0: mov     [r14+8], r9
 * 0000000140ACAFA4: mov     [r14+10h], r10d
 * 0000000140ACAFA8: mov     r8d, r10d
 * 0000000140ACAFAB: mov     rcx, rsi
 * 0000000140ACAFAE: mov     rdx, r9
 * 0000000140ACAFB1: mov     edi, 14Dh
 * 0000000140ACAFB6: mov     rax, [rcx]
 * 0000000140ACAFB9: add     r8d, 0FFFFFFF8h
 * 0000000140ACAFBD: mov     [rdx], rax
 * 0000000140ACAFC0: add     rcx, 8
 * 0000000140ACAFC4: add     rdx, 8
 * 0000000140ACAFC8: sub     rdi, r15
 * 0000000140ACAFCB: jnz     short loc_140ACAFB6
 * 0000000140ACAFCD: test    r8d, r8d
 * 0000000140ACAFD0: jz      short loc_140ACAFED
 * 0000000140ACAFD2: mov     r10d, 0FFFFFFFFh
 * 0000000140ACAFD8: mov     al, [rcx]
 * 0000000140ACAFDA: add     rcx, r15
 * 0000000140ACAFDD: mov     [rdx], al
 * 0000000140ACAFDF: add     rdx, r15
 * 0000000140ACAFE2: add     r8d, r10d
 * 0000000140ACAFE5: jnz     short loc_140ACAFD8
 * 0000000140ACAFE7: mov     r10d, 0A68h
 * 0000000140ACAFED: mov     eax, [r9+958h]
 * 0000000140ACAFF4: mov     rdi, 7010008004002001h
 * 0000000140ACAFFE: mov     [r9+7ACh], r10d
 * 0000000140ACB005: and     eax, 0FFFFFFFDh
 * 0000000140ACB008: mov     [r9+7D0h], r10d
 * 0000000140ACB00F: bts     eax, 13h
 * 0000000140ACB013: mov     [r9+958h], eax
 * 0000000140ACB01A: mov     [r9+9F4h], r10d
 * 0000000140ACB021: mov     [rbp+0B30h+var_BAC], eax
 * 0000000140ACB024: mov     eax, [r9+91Ch]
 * 0000000140ACB02B: mov     [rbp+0B30h+var_BB0], eax
 * 0000000140ACB02E: mov     rax, [r9+4C0h]
 * 0000000140ACB035: mov     [rbp+0B30h+var_B68], rax
 * 0000000140ACB039: mov     rax, [r9+598h]
 * 0000000140ACB040: mov     [rbp+0B30h+var_B48], rax
 * 0000000140ACB044: mov     dword ptr [r9+0C4h], 134h
 * 0000000140ACB04F: rdtsc
 * 0000000140ACB051: shl     rdx, 20h
 * 0000000140ACB055: or      rax, rdx
 * 0000000140ACB058: mov     rcx, rax
 * 0000000140ACB05B: ror     rax, 3
 * 0000000140ACB05F: xor     rcx, rax
 * 0000000140ACB062: mov     rax, rdi
 * 0000000140ACB065: mul     rcx
 * 0000000140ACB068: mov     r15, rdx
 * 0000000140ACB06B: mov     [rbp+0B30h+var_488], rdx
 * 0000000140ACB072: xor     r15, rax
 * 0000000140ACB075: jz      short loc_140ACB04F
 * 0000000140ACB077: mov     rax, [r9+780h]
 * 0000000140ACB07E: lea     r12, [r9+760h]
 * 0000000140ACB085: mov     ebx, 20h ; ' '
 * 0000000140ACB08A: mov     [rbp+0B30h+var_B98], rax
 * 0000000140ACB08E: mov     eax, [r9+7F0h]
 * 0000000140ACB095: lea     rdx, [rbp+0B30h+var_110]
 * 0000000140ACB09C: mov     dword ptr [rbp+0B30h+arg_8], eax
 * 0000000140ACB0A2: mov     r8d, ebx
 * 0000000140ACB0A5: mov     rcx, r12
 * 0000000140ACB0A8: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ACB0AF: lea     r11d, [rbx-1Ch]
 * 0000000140ACB0B3: mov     r10d, r11d
 * 0000000140ACB0B6: lea     r14d, [rbx-1Fh]
 * 0000000140ACB0BA: mov     rax, [rcx]
 * 0000000140ACB0BD: add     r8d, 0FFFFFFF8h
 * 0000000140ACB0C1: mov     [rdx], rax
 * 0000000140ACB0C4: add     rcx, 8
 * 0000000140ACB0C8: add     rdx, 8
 * 0000000140ACB0CC: sub     r10, r14
 * 0000000140ACB0CF: jnz     short loc_140ACB0BA
 * 0000000140ACB0D1: mov     r14, [rbp+0B30h+var_B88]
 * 0000000140ACB0D5: mov     r10d, 1
 * 0000000140ACB0DB: test    r8d, r8d
 * 0000000140ACB0DE: jz      short loc_140ACB0F9
 * 0000000140ACB0E0: mov     r14d, 0FFFFFFFFh
 * 0000000140ACB0E6: mov     al, [rcx]
 * 0000000140ACB0E8: add     rcx, r10
 * 0000000140ACB0EB: mov     [rdx], al
 * 0000000140ACB0ED: add     rdx, r10
 * 0000000140ACB0F0: add     r8d, r14d
 * 0000000140ACB0F3: jnz     short loc_140ACB0E6
 * 0000000140ACB0F5: mov     r14, [rbp+0B30h+var_B88]
 * 0000000140ACB0F9: mov     [r9+780h], r13
 * 0000000140ACB100: mov     ecx, ebx
 * 0000000140ACB102: mov     [r9+7F0h], r13d
 * 0000000140ACB109: mov     rax, r12
 * 0000000140ACB10C: mov     rdx, r11
 * 0000000140ACB10F: mov     [rax], r13
 * 0000000140ACB112: add     ecx, 0FFFFFFF8h
 * 0000000140ACB115: add     rax, 8
 * 0000000140ACB119: sub     rdx, r10
 * 0000000140ACB11C: jnz     short loc_140ACB10F
 * 0000000140ACB11E: test    ecx, ecx
 * 0000000140ACB120: jz      short loc_140ACB131
 * 0000000140ACB122: mov     edx, 0FFFFFFFFh
 * 0000000140ACB127: mov     [rax], r13b
 * 0000000140ACB12A: add     rax, r10
 * 0000000140ACB12D: add     ecx, edx
 * 0000000140ACB12F: jnz     short loc_140ACB127
 * 0000000140ACB131: mov     ebx, [r9+7ACh]
 * 0000000140ACB138: mov     r11, r9
 * 0000000140ACB13B: add     [r9+7F0h], ebx
 * 0000000140ACB142: mov     rax, r9
 * 0000000140ACB145: mov     r10d, [r9+7DCh]
 * 0000000140ACB14C: mov     rdx, [r9+7E0h]
 * 0000000140ACB153: lea     rcx, [r9+rbx]
 * 0000000140ACB157: cmp     r9, rcx
 * 0000000140ACB15A: jnb     short loc_140ACB16D
 * 0000000140ACB15C: mov     r8d, 40h ; '@'
 * 0000000140ACB162: prefetchnta byte ptr [rax]
 * 0000000140ACB165: add     rax, r8
 * 0000000140ACB168: cmp     rax, rcx
 * 0000000140ACB16B: jb      short loc_140ACB162
 * 0000000140ACB16D: mov     r13d, ebx
 * 0000000140ACB170: mov     r8, rdx
 * 0000000140ACB173: shr     r13d, 7
 * 0000000140ACB177: test    r13d, r13d
 * 0000000140ACB17A: jz      loc_140ACB202
 * 0000000140ACB180: mov     rdi, rdx
 * 0000000140ACB183: mov     r12, 7010008004002001h
 * 0000000140ACB18D: mov     edx, 8
 * 0000000140ACB192: lea     r14d, [rdx-7]
 * 0000000140ACB196: mov     rax, [r11]
 * 0000000140ACB199: mov     ecx, r10d
 * 0000000140ACB19C: xor     rax, r8
 * 0000000140ACB19F: mov     r8, [r11+8]
 * 0000000140ACB1A3: rol     rax, cl
 * 0000000140ACB1A6: add     r11, 10h
 * 0000000140ACB1AA: xor     r8, rax
 * 0000000140ACB1AD: rol     r8, cl
 * 0000000140ACB1B0: sub     rdx, r14
 * 0000000140ACB1B3: jnz     short loc_140ACB196
 * 0000000140ACB1B5: mov     rcx, r11
 * 0000000140ACB1B8: sub     rcx, r9
 * 0000000140ACB1BB: xor     rcx, rdi
 * 0000000140ACB1BE: mov     rax, rcx
 * 0000000140ACB1C1: rol     rax, 11h
 * 0000000140ACB1C5: xor     rcx, rax
 * 0000000140ACB1C8: mov     rax, r12
 * 0000000140ACB1CB: mul     rcx
 * 0000000140ACB1CE: xor     r10d, eax
 * 0000000140ACB1D1: mov     [rbp+0B30h+var_480], rdx
 * 0000000140ACB1D8: xor     r10d, edx
 * 0000000140ACB1DB: mov     rax, r14
 * 0000000140ACB1DE: and     r10d, 3Fh
 * 0000000140ACB1E2: cmovz   r10d, eax
 * 0000000140ACB1E6: mov     eax, 0FFFFFFFFh
 * 0000000140ACB1EB: add     r13d, eax
 * 0000000140ACB1EE: jnz     short loc_140ACB18D
 * 0000000140ACB1F0: mov     r14, [rbp+0B30h+var_B88]
 * 0000000140ACB1F4: lea     r12, [r9+760h]
 * 0000000140ACB1FB: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ACB202: and     ebx, 7Fh
 * 0000000140ACB205: cmp     ebx, 8
 * 0000000140ACB208: jb      short loc_140ACB22F
 * 0000000140ACB20A: mov     edx, ebx
 * 0000000140ACB20C: mov     r14d, 1
 * 0000000140ACB212: shr     rdx, 3
 * 0000000140ACB216: xor     r8, [r11]
 * 0000000140ACB219: mov     ecx, r10d
 * 0000000140ACB21C: rol     r8, cl
 * 0000000140ACB21F: add     r11, 8
 * 0000000140ACB223: add     ebx, 0FFFFFFF8h
 * 0000000140ACB226: sub     rdx, r14
 * 0000000140ACB229: jnz     short loc_140ACB216
 * 0000000140ACB22B: mov     r14, [rbp+0B30h+var_B88]
 * 0000000140ACB22F: xor     r13d, r13d
 * 0000000140ACB232: test    ebx, ebx
 * 0000000140ACB234: jz      short loc_140ACB260
 * 0000000140ACB236: lea     r14d, [r13+1]
 * 0000000140ACB23A: mov     r12d, 0FFFFFFFFh
 * 0000000140ACB240: movzx   eax, byte ptr [r11]
 * 0000000140ACB244: mov     ecx, r10d
 * 0000000140ACB247: xor     r8, rax
 * 0000000140ACB24A: add     r11, r14
 * 0000000140ACB24D: rol     r8, cl
 * 0000000140ACB250: add     ebx, r12d
 * 0000000140ACB253: jnz     short loc_140ACB240
 * 0000000140ACB255: mov     r14, [rbp+0B30h+var_B88]
 * 0000000140ACB259: lea     r12, [r9+760h]
 * 0000000140ACB260: mov     rax, [rbp+0B30h+var_B98]
 * 0000000140ACB264: lea     rcx, [rbp+0B30h+var_110]
 * 0000000140ACB26B: mov     edx, 20h ; ' '
 * 0000000140ACB270: mov     [r9+780h], rax
 * 0000000140ACB277: mov     eax, dword ptr [rbp+0B30h+arg_8]
 * 0000000140ACB27D: add     [r9+7F0h], eax
 * 0000000140ACB284: lea     r11d, [rdx-1Ch]
 * 0000000140ACB288: mov     r10d, r11d
 * 0000000140ACB28B: lea     ebx, [rdx-1Fh]
 * 0000000140ACB28E: mov     rax, [rcx]
 * 0000000140ACB291: add     edx, 0FFFFFFF8h
 * 0000000140ACB294: mov     [r12], rax
 * 0000000140ACB298: add     rcx, 8
 * 0000000140ACB29C: add     r12, 8
 * 0000000140ACB2A0: sub     r10, rbx
 * 0000000140ACB2A3: jnz     short loc_140ACB28E
 * 0000000140ACB2A5: test    edx, edx
 * 0000000140ACB2A7: jz      short loc_140ACB2C4
 * 0000000140ACB2A9: mov     r14d, 0FFFFFFFFh
 * 0000000140ACB2AF: mov     al, [rcx]
 * 0000000140ACB2B1: add     rcx, rbx
 * 0000000140ACB2B4: mov     [r12], al
 * 0000000140ACB2B8: add     r12, rbx
 * 0000000140ACB2BB: add     edx, r14d
 * 0000000140ACB2BE: jnz     short loc_140ACB2AF
 * 0000000140ACB2C0: mov     r14, [rbp+0B30h+var_B88]
 * 0000000140ACB2C4: mov     [r9+780h], r8
 * 0000000140ACB2CB: test    dword ptr [r9+958h], 40000000h
 * 0000000140ACB2D6: jnz     loc_140ACB497
 * 0000000140ACB2DC: mov     rax, r9
 * 0000000140ACB2DF: mov     ecx, r13d
 * 0000000140ACB2E2: xor     [rax], r15
 * 0000000140ACB2E5: add     ecx, ebx
 * 0000000140ACB2E7: add     rax, 8
 * 0000000140ACB2EB: cmp     ecx, 19h
 * 0000000140ACB2EE: jb      short loc_140ACB2E2
 * 0000000140ACB2F0: add     rax, 998h
 * 0000000140ACB2F6: mov     ecx, 134h
 * 0000000140ACB2FB: xor     [rax], r15
 * 0000000140ACB2FE: lea     rdx, [rbp+0B30h+var_8F8]
 * 0000000140ACB305: ror     r15, cl
 * 0000000140ACB308: lea     rax, [rax-8]
 * 0000000140ACB30C: mov     [rbp+0B30h+var_8F8], r15
 * 0000000140ACB313: and     r15d, 3Fh
 * 0000000140ACB317: btc     [rdx], r15
 * 0000000140ACB31B: sub     ecx, ebx
 * 0000000140ACB31D: jz      short loc_140ACB328
 * 0000000140ACB31F: mov     r15, [rbp+0B30h+var_8F8]
 * 0000000140ACB326: jmp     short loc_140ACB2FB
 * 0000000140ACB328: rdtsc
 * 0000000140ACB32A: shl     rdx, 20h
 * 0000000140ACB32E: or      rax, rdx
 * 0000000140ACB331: mov     rcx, rax
 * 0000000140ACB334: ror     rax, 3
 * 0000000140ACB338: xor     rcx, rax
 * 0000000140ACB33B: mov     rax, 7010008004002001h
 * 0000000140ACB345: mul     rcx
 * 0000000140ACB348: mov     rcx, rdx
 * 0000000140ACB34B: mov     [rbp+0B30h+var_478], rdx
 * 0000000140ACB352: xor     rcx, rax
 * 0000000140ACB355: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140ACB35F: mul     rcx
 * 0000000140ACB362: shr     rdx, 1
 * 0000000140ACB365: lea     rax, [rdx+rdx*2]
 * 0000000140ACB369: cmp     rcx, rax
 * 0000000140ACB36C: jnz     loc_140ACB497
 * 0000000140ACB372: mov     r12d, [rbp+0B30h+var_BB0]
 * 0000000140ACB376: mov     eax, 2
 * 0000000140ACB37B: mov     r15d, [rbp+0B30h+var_BAC]
 * 0000000140ACB37F: mov     ecx, r9d
 * 0000000140ACB382: mov     rdi, [rbp+0B30h+var_B48]
 * 0000000140ACB386: mov     r10, r9
 * 0000000140ACB389: mov     [rbp+0B30h+var_ADB], al
 * 0000000140ACB38C: mov     eax, 0Ch
 * 0000000140ACB391: mov     [rbp+0B30h+var_ADF], al
 * 0000000140ACB394: mov     eax, 0Fh
 * 0000000140ACB399: mov     [rbp+0B30h+var_ADD], bl
 * 0000000140ACB39C: mov     ebx, r13d
 * 0000000140ACB39F: mov     [rbp+0B30h+var_AE0], r13b
 * 0000000140ACB3A3: mov     r13, [rbp+0B30h+var_B68]
 * 0000000140ACB3A7: mov     [rbp+0B30h+var_ADA], r11b
 * 0000000140ACB3AB: lea     esi, [rax+1]
 * 0000000140ACB3AE: mov     [rbp+0B30h+var_AD8], 3
 * 0000000140ACB3B2: mov     r11, r9
 * 0000000140ACB3B5: mov     [rbp+0B30h+var_AD7], 5
 * 0000000140ACB3B9: mov     [rbp+0B30h+var_AD4], 6
 * 0000000140ACB3BD: mov     [rbp+0B30h+var_AD9], 7
 * 0000000140ACB3C1: mov     [rbp+0B30h+var_AD3], 8
 * 0000000140ACB3C5: mov     [rbp+0B30h+var_AD6], 9
 * 0000000140ACB3C9: mov     [rbp+0B30h+var_AD2], 0Ah
 * 0000000140ACB3CD: mov     [rbp+0B30h+var_ADC], 0Bh
 * 0000000140ACB3D1: mov     [rbp+0B30h+var_AD1], 0Dh
 * 0000000140ACB3D5: mov     [rbp+0B30h+var_AD5], 0Eh
 * 0000000140ACB3D9: mov     [rbp+0B30h+var_ADE], al
 * 0000000140ACB3DC: ror     r10, cl
 * 0000000140ACB3DF: test    esi, esi
 * 0000000140ACB3E1: jz      short loc_140ACB418
 * 0000000140ACB3E3: mov     rdx, [r11]
 * 0000000140ACB3E6: mov     edi, 1
 * 0000000140ACB3EB: mov     r8d, esi
 * 0000000140ACB3EE: lea     esi, [rdi+0Eh]
 * 0000000140ACB3F1: movzx   eax, byte ptr [r11]
 * 0000000140ACB3F5: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 0000000140ACB3F9: and     rax, rsi
 * 0000000140ACB3FC: movzx   ecx, [rbp+rax+0B30h+var_AE0]
 * 0000000140ACB401: or      rdx, rcx
 * 0000000140ACB404: ror     rdx, 4
 * 0000000140ACB408: mov     [r11], rdx
 * 0000000140ACB40B: sub     r8, rdi
 * 0000000140ACB40E: jnz     short loc_140ACB3F1
 * 0000000140ACB410: mov     rdi, [rbp+0B30h+var_B48]
 * 0000000140ACB414: lea     esi, [r8+10h]
 * 0000000140ACB418: mov     rdx, [r11]
 * 0000000140ACB41B: mov     eax, ebx
 * 0000000140ACB41D: sub     rdx, rax
 * 0000000140ACB420: sub     rdx, r9
 * 0000000140ACB423: bt      r15d, 9
 * 0000000140ACB428: jb      short loc_140ACB43D
 * 0000000140ACB42A: xor     rdx, r13
 * 0000000140ACB42D: mov     ecx, edi
 * 0000000140ACB42F: bswap   rdx
 * 0000000140ACB432: xor     rdx, r10
 * 0000000140ACB435: ror     rdx, cl
 * 0000000140ACB438: xor     rdx, rdi
 * 0000000140ACB43B: jmp     short loc_140ACB440
 * 0000000140ACB43D: xor     rdx, r10
 * 0000000140ACB440: mov     [r11], rdx
 * 0000000140ACB443: mov     ecx, edx
 * 0000000140ACB445: mov     r8d, edx
 * 0000000140ACB448: mov     eax, ebx
 * 0000000140ACB44A: xor     r8d, 0F09h
 * 0000000140ACB451: mov     edx, 0C8h
 * 0000000140ACB456: sub     edx, ebx
 * 0000000140ACB458: not     ecx
 * 0000000140ACB45A: xor     rdx, rax
 * 0000000140ACB45D: add     r11, 8
 * 0000000140ACB461: ror     rdx, cl
 * 0000000140ACB464: mov     eax, 19h
 * 0000000140ACB469: xor     r10, rdx
 * 0000000140ACB46C: mov     cl, r8b
 * 0000000140ACB46F: rol     r10, cl
 * 0000000140ACB472: add     r10, r9
 * 0000000140ACB475: xor     r10, r12
 * 0000000140ACB478: inc     ebx
 * 0000000140ACB47A: cmp     ebx, eax
 * 0000000140ACB47C: jz      short loc_140ACB484
 * 0000000140ACB47E: jb      loc_140ACB3DF
 * 0000000140ACB484: mov     rsi, [rsp+0C30h+var_BD0]
 * 0000000140ACB489: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ACB490: mov     r14, [rbp+0B30h+var_B88]
 * 0000000140ACB494: xor     r13d, r13d
 * 0000000140ACB497: mov     r15, [r14+8]
 * 0000000140ACB49B: mov     r11d, [r14+10h]
 * 0000000140ACB49F: mov     r10, r15
 * 0000000140ACB4A2: add     [rsi+7F0h], r11d
 * 0000000140ACB4A9: mov     rax, r15
 * 0000000140ACB4AC: mov     r9d, [rsi+7DCh]
 * 0000000140ACB4B3: mov     r12, [rsi+7E0h]
 * 0000000140ACB4BA: lea     rcx, [r15+r11]
 * 0000000140ACB4BE: cmp     r15, rcx
 * 0000000140ACB4C1: jnb     short loc_140ACB4D3
 * 0000000140ACB4C3: mov     edx, 40h ; '@'
 * 0000000140ACB4C8: prefetchnta byte ptr [rax]
 * 0000000140ACB4CB: add     rax, rdx
 * 0000000140ACB4CE: cmp     rax, rcx
 * 0000000140ACB4D1: jb      short loc_140ACB4C8
 * 0000000140ACB4D3: mov     ebx, r11d
 * 0000000140ACB4D6: mov     r8, r12
 * 0000000140ACB4D9: shr     ebx, 7
 * 0000000140ACB4DC: test    ebx, ebx
 * 0000000140ACB4DE: jz      short loc_140ACB552
 * 0000000140ACB4E0: mov     rdi, 7010008004002001h
 * 0000000140ACB4EA: mov     r14d, 1
 * 0000000140ACB4F0: mov     eax, 8
 * 0000000140ACB4F5: xor     r8, [r10]
 * 0000000140ACB4F8: mov     ecx, r9d
 * 0000000140ACB4FB: rol     r8, cl
 * 0000000140ACB4FE: xor     r8, [r10+8]
 * 0000000140ACB502: add     r10, 10h
 * 0000000140ACB506: rol     r8, cl
 * 0000000140ACB509: sub     rax, r14
 * 0000000140ACB50C: jnz     short loc_140ACB4F5
 * 0000000140ACB50E: mov     rcx, r10
 * 0000000140ACB511: sub     rcx, r15
 * 0000000140ACB514: xor     rcx, r12
 * 0000000140ACB517: mov     rax, rcx
 * 0000000140ACB51A: rol     rax, 11h
 * 0000000140ACB51E: xor     rcx, rax
 * 0000000140ACB521: mov     rax, rdi
 * 0000000140ACB524: mul     rcx
 * 0000000140ACB527: xor     r9d, eax
 * 0000000140ACB52A: mov     [rbp+0B30h+var_470], rdx
 * 0000000140ACB531: xor     r9d, edx
 * 0000000140ACB534: mov     edx, 0FFFFFFFFh
 * 0000000140ACB539: and     r9d, 3Fh
 * 0000000140ACB53D: cmovz   r9d, r14d
 * 0000000140ACB541: add     ebx, edx
 * 0000000140ACB543: jnz     short loc_140ACB4F0
 * 0000000140ACB545: mov     r14, [rbp+0B30h+var_B88]
 * 0000000140ACB549: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ACB550: jmp     short loc_140ACB557
 * 0000000140ACB552: mov     edx, 0FFFFFFFFh
 * 0000000140ACB557: and     r11d, 7Fh
 * 0000000140ACB55B: mov     r15d, 1
 * 0000000140ACB561: cmp     r11d, 8
 * 0000000140ACB565: jb      short loc_140ACB584
 * 0000000140ACB567: mov     eax, r11d
 * 0000000140ACB56A: shr     rax, 3
 * 0000000140ACB56E: xor     r8, [r10]
 * 0000000140ACB571: mov     ecx, r9d
 * 0000000140ACB574: rol     r8, cl
 * 0000000140ACB577: add     r10, 8
 * 0000000140ACB57B: add     r11d, 0FFFFFFF8h
 * 0000000140ACB57F: sub     rax, r15
 * 0000000140ACB582: jnz     short loc_140ACB56E
 * 0000000140ACB584: test    r11d, r11d
 * 0000000140ACB587: jz      short loc_140ACB59E
 * 0000000140ACB589: movzx   eax, byte ptr [r10]
 * 0000000140ACB58D: mov     ecx, r9d
 * 0000000140ACB590: xor     r8, rax
 * 0000000140ACB593: add     r10, r15
 * 0000000140ACB596: rol     r8, cl
 * 0000000140ACB599: add     r11d, edx
 * 0000000140ACB59C: jnz     short loc_140ACB589
 * 0000000140ACB59E: mov     rax, r8
 * 0000000140ACB5A1: jmp     short loc_140ACB5A6
 * 0000000140ACB5A3: xor     r8d, eax
 * 0000000140ACB5A6: shr     rax, 1Fh
 * 0000000140ACB5AA: test    rax, rax
 * 0000000140ACB5AD: jnz     short loc_140ACB5A3
 * 0000000140ACB5AF: btr     r8d, 1Fh
 * 0000000140ACB5B4: mov     [r14+14h], r8d
 * 0000000140ACB5B8: jmp     loc_140ACAA94
 * 0000000140ACB5BD: mov     r15d, 1
 * 0000000140ACB5C3: jmp     loc_140ACAA9A
 * 0000000140ACB5C8: mov     r15d, 1
 * 0000000140ACB5CE: mov     r11d, 8000h
 * 0000000140ACB5D4: jmp     loc_140ACAAA4
 * 0000000140ACB5D9: mov     r13d, [rbp+0B30h+var_BB0]
 * 0000000140ACB5DD: bt      r13d, 13h
 * 0000000140ACB5E2: jnb     short loc_140ACB62F
 * 0000000140ACB5E4: rdtsc
 * 0000000140ACB5E6: shl     rdx, 20h
 * 0000000140ACB5EA: or      rax, rdx
 * 0000000140ACB5ED: mov     rcx, rax
 * 0000000140ACB5F0: ror     rax, 3
 * 0000000140ACB5F4: xor     rcx, rax
 * 0000000140ACB5F7: mov     rax, 7010008004002001h
 * 0000000140ACB601: mul     rcx
 * 0000000140ACB604: mov     rcx, rdx
 * 0000000140ACB607: mov     [rbp+0B30h+var_458], rdx
 * 0000000140ACB60E: xor     rcx, rax
 * 0000000140ACB611: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140ACB61B: mul     rcx
 * 0000000140ACB61E: shr     rdx, 1
 * 0000000140ACB621: lea     rax, [rdx+rdx*2]
 * 0000000140ACB625: cmp     rcx, rax
 * 0000000140ACB628: jz      short loc_140ACB63A
 * 0000000140ACB62A: jmp     loc_140ACBE61
 * 0000000140ACB62F: bt      r13d, 8
 * 0000000140ACB634: jb      loc_140ACBE61
 * 0000000140ACB63A: mov     rdi, [rbp+0B30h+var_B48]
 * 0000000140ACB63E: mov     eax, 1
 * 0000000140ACB643: mov     [rbp+0B30h+var_ACD], al
 * 0000000140ACB646: mov     ecx, esi
 * 0000000140ACB648: mov     eax, 2
 * 0000000140ACB64D: mov     [rbp+0B30h+var_ACA], r9b
 * 0000000140ACB651: mov     [rbp+0B30h+var_ACB], al
 * 0000000140ACB654: mov     r9, rsi
 * 0000000140ACB657: mov     eax, 0Ch
 * 0000000140ACB65C: mov     [rbp+0B30h+var_AD0], r15b
 * 0000000140ACB660: mov     [rbp+0B30h+var_ACF], al
 * 0000000140ACB663: mov     r11d, r15d
 * 0000000140ACB666: mov     r15d, dword ptr [rbp+0B30h+var_B90]
 * 0000000140ACB66A: mov     eax, 0Fh
 * 0000000140ACB66F: mov     [rbp+0B30h+var_AC8], 3
 * 0000000140ACB673: mov     r10, rsi
 * 0000000140ACB676: mov     [rbp+0B30h+var_AC7], 5
 * 0000000140ACB67A: mov     [rbp+0B30h+var_AC4], 6
 * 0000000140ACB67E: lea     ebx, [rax+1]
 * 0000000140ACB681: mov     [rbp+0B30h+var_AC9], 7
 * 0000000140ACB685: mov     [rbp+0B30h+var_AC3], 8
 * 0000000140ACB689: mov     [rbp+0B30h+var_AC6], 9
 * 0000000140ACB68D: mov     [rbp+0B30h+var_AC2], 0Ah
 * 0000000140ACB691: mov     [rbp+0B30h+var_ACC], 0Bh
 * 0000000140ACB695: mov     [rbp+0B30h+var_AC1], 0Dh
 * 0000000140ACB699: mov     [rbp+0B30h+var_AC5], 0Eh
 * 0000000140ACB69D: mov     [rbp+0B30h+var_ACE], al
 * 0000000140ACB6A0: ror     r9, cl
 * 0000000140ACB6A3: test    ebx, ebx
 * 0000000140ACB6A5: jz      short loc_140ACB6E1
 * 0000000140ACB6A7: mov     rdx, [r10]
 * 0000000140ACB6AA: mov     r13d, 1
 * 0000000140ACB6B0: mov     r8d, ebx
 * 0000000140ACB6B3: lea     r12d, [r13+0Eh]
 * 0000000140ACB6B7: movzx   eax, byte ptr [r10]
 * 0000000140ACB6BB: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 0000000140ACB6BF: and     rax, r12
 * 0000000140ACB6C2: movzx   ecx, [rbp+rax+0B30h+var_AD0]
 * 0000000140ACB6C7: or      rdx, rcx
 * 0000000140ACB6CA: ror     rdx, 4
 * 0000000140ACB6CE: mov     [r10], rdx
 * 0000000140ACB6D1: sub     r8, r13
 * 0000000140ACB6D4: jnz     short loc_140ACB6B7
 * 0000000140ACB6D6: mov     r12d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140ACB6DD: mov     r13d, [rbp+0B30h+var_BB0]
 * 0000000140ACB6E1: mov     rcx, [r10]
 * 0000000140ACB6E4: mov     eax, r11d
 * 0000000140ACB6E7: sub     rcx, rax
 * 0000000140ACB6EA: sub     rcx, rsi
 * 0000000140ACB6ED: bt      r13d, 9
 * 0000000140ACB6F2: jb      short loc_140ACB70B
 * 0000000140ACB6F4: mov     rax, [rbp+0B30h+var_B68]
 * 0000000140ACB6F8: xor     rax, rcx
 * 0000000140ACB6FB: mov     ecx, edi
 * 0000000140ACB6FD: bswap   rax
 * 0000000140ACB700: xor     rax, r9
 * 0000000140ACB703: ror     rax, cl
 * 0000000140ACB706: xor     rax, rdi
 * 0000000140ACB709: jmp     short loc_140ACB711
 * 0000000140ACB70B: mov     rax, r9
 * 0000000140ACB70E: xor     rax, rcx
 * 0000000140ACB711: mov     edx, 0C8h
 * 0000000140ACB716: mov     [r10], rax
 * 0000000140ACB719: sub     edx, r11d
 * 0000000140ACB71C: mov     ecx, eax
 * 0000000140ACB71E: mov     r8d, eax
 * 0000000140ACB721: not     ecx
 * 0000000140ACB723: xor     r8d, 0F09h
 * 0000000140ACB72A: mov     eax, r11d
 * 0000000140ACB72D: xor     rdx, rax
 * 0000000140ACB730: add     r10, 8
 * 0000000140ACB734: ror     rdx, cl
 * 0000000140ACB737: mov     cl, r8b
 * 0000000140ACB73A: xor     r9, rdx
 * 0000000140ACB73D: rol     r9, cl
 * 0000000140ACB740: add     r9, rsi
 * 0000000140ACB743: xor     r9, r15
 * 0000000140ACB746: inc     r11d
 * 0000000140ACB749: cmp     r11d, 19h
 * 0000000140ACB74D: jnz     short loc_140ACB763
 * 0000000140ACB74F: bt      r13d, 13h
 * 0000000140ACB754: lea     eax, [r11-19h]
 * 0000000140ACB758: lea     ebx, [r11-18h]
 * 0000000140ACB75C: cmovnb  eax, r12d
 * 0000000140ACB760: add     r14d, eax
 * 0000000140ACB763: cmp     r11d, r14d
 * 0000000140ACB766: jb      loc_140ACB6A3
 * 0000000140ACB76C: jmp     loc_140ACBE5A
 * 0000000140ACB771: mov     eax, 1
 * 0000000140ACB776: lea     rbx, [r14+760h]
 * 0000000140ACB77D: mov     [r14+0C4h], eax
 * 0000000140ACB784: lea     rdx, [rbp+0B30h+var_D0]
 * 0000000140ACB78B: mov     r12, [r14+780h]
 * 0000000140ACB792: mov     rsi, r14
 * 0000000140ACB795: mov     r13d, [r14+7F0h]
 * 0000000140ACB79C: mov     rcx, rbx
 * 0000000140ACB79F: lea     r11d, [rax+1Fh]
 * 0000000140ACB7A3: mov     [rbp+0B30h+var_B48], r12
 * 0000000140ACB7A7: lea     r10d, [rax+3]
 * 0000000140ACB7AB: mov     dword ptr [rbp+0B30h+arg_8], r13d
 * 0000000140ACB7B2: mov     r8d, r11d
 * 0000000140ACB7B5: mov     [rsp+0C30h+var_BC8], rbx
 * 0000000140ACB7BA: mov     r9d, r10d
 * 0000000140ACB7BD: mov     r12d, eax
 * 0000000140ACB7C0: mov     rax, [rcx]
 * 0000000140ACB7C3: add     r8d, 0FFFFFFF8h
 * 0000000140ACB7C7: mov     [rdx], rax
 * 0000000140ACB7CA: add     rcx, 8
 * 0000000140ACB7CE: add     rdx, 8
 * 0000000140ACB7D2: sub     r9, r12
 * 0000000140ACB7D5: jnz     short loc_140ACB7C0
 * 0000000140ACB7D7: mov     r12, [rbp+0B30h+var_B48]
 * 0000000140ACB7DB: mov     r9d, 1
 * 0000000140ACB7E1: test    r8d, r8d
 * 0000000140ACB7E4: jz      short loc_140ACB802
 * 0000000140ACB7E6: mov     r13d, 0FFFFFFFFh
 * 0000000140ACB7EC: mov     al, [rcx]
 * 0000000140ACB7EE: add     rcx, r9
 * 0000000140ACB7F1: mov     [rdx], al
 * 0000000140ACB7F3: add     rdx, r9
 * 0000000140ACB7F6: add     r8d, r13d
 * 0000000140ACB7F9: jnz     short loc_140ACB7EC
 * 0000000140ACB7FB: mov     r13d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140ACB802: mov     [r14+780h], r15
 * 0000000140ACB809: mov     ecx, r11d
 * 0000000140ACB80C: mov     [r14+7F0h], r15d
 * 0000000140ACB813: mov     rax, rbx
 * 0000000140ACB816: mov     rdx, r10
 * 0000000140ACB819: mov     [rax], r15
 * 0000000140ACB81C: add     ecx, 0FFFFFFF8h
 * 0000000140ACB81F: add     rax, 8
 * 0000000140ACB823: sub     rdx, r9
 * 0000000140ACB826: jnz     short loc_140ACB819
 * 0000000140ACB828: test    ecx, ecx
 * 0000000140ACB82A: jz      short loc_140ACB83B
 * 0000000140ACB82C: mov     edx, 0FFFFFFFFh
 * 0000000140ACB831: mov     [rax], r15b
 * 0000000140ACB834: add     rax, r9
 * 0000000140ACB837: add     ecx, edx
 * 0000000140ACB839: jnz     short loc_140ACB831
 * 0000000140ACB83B: mov     r11d, [r14+7ACh]
 * 0000000140ACB842: mov     r10, r14
 * 0000000140ACB845: add     [r14+7F0h], r11d
 * 0000000140ACB84C: mov     rax, r14
 * 0000000140ACB84F: mov     r9d, [r14+7DCh]
 * 0000000140ACB856: mov     r15, [r14+7E0h]
 * 0000000140ACB85D: lea     rcx, [r14+r11]
 * 0000000140ACB861: cmp     r14, rcx
 * 0000000140ACB864: jnb     short loc_140ACB876
 * 0000000140ACB866: mov     edx, 40h ; '@'
 * 0000000140ACB86B: prefetchnta byte ptr [rax]
 * 0000000140ACB86E: add     rax, rdx
 * 0000000140ACB871: cmp     rax, rcx
 * 0000000140ACB874: jb      short loc_140ACB86B
 * 0000000140ACB876: mov     r14d, r11d
 * 0000000140ACB879: mov     r8, r15
 * 0000000140ACB87C: shr     r14d, 7
 * 0000000140ACB880: test    r14d, r14d
 * 0000000140ACB883: jz      loc_140ACB90E
 * 0000000140ACB889: mov     rdi, [rbp+0B30h+arg_0]
 * 0000000140ACB890: mov     rbx, 7010008004002001h
 * 0000000140ACB89A: mov     r12d, 1
 * 0000000140ACB8A0: mov     r13d, 0FFFFFFFFh
 * 0000000140ACB8A6: mov     eax, 8
 * 0000000140ACB8AB: xor     r8, [r10]
 * 0000000140ACB8AE: mov     ecx, r9d
 * 0000000140ACB8B1: rol     r8, cl
 * 0000000140ACB8B4: xor     r8, [r10+8]
 * 0000000140ACB8B8: add     r10, 10h
 * 0000000140ACB8BC: rol     r8, cl
 * 0000000140ACB8BF: sub     rax, r12
 * 0000000140ACB8C2: jnz     short loc_140ACB8AB
 * 0000000140ACB8C4: mov     rcx, r10
 * 0000000140ACB8C7: sub     rcx, rdi
 * 0000000140ACB8CA: xor     rcx, r15
 * 0000000140ACB8CD: mov     rax, rcx
 * 0000000140ACB8D0: rol     rax, 11h
 * 0000000140ACB8D4: xor     rcx, rax
 * 0000000140ACB8D7: mov     rax, rbx
 * 0000000140ACB8DA: mul     rcx
 * 0000000140ACB8DD: xor     r9d, eax
 * 0000000140ACB8E0: mov     [rbp+0B30h+var_450], rdx
 * 0000000140ACB8E7: xor     r9d, edx
 * 0000000140ACB8EA: and     r9d, 3Fh
 * 0000000140ACB8EE: cmovz   r9d, r12d
 * 0000000140ACB8F2: add     r14d, r13d
 * 0000000140ACB8F5: jnz     short loc_140ACB8A6
 * 0000000140ACB8F7: mov     rbx, [rsp+0C30h+var_BC8]
 * 0000000140ACB8FC: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ACB903: mov     r12, [rbp+0B30h+var_B48]
 * 0000000140ACB907: mov     r13d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140ACB90E: and     r11d, 7Fh
 * 0000000140ACB912: mov     r15d, 1
 * 0000000140ACB918: cmp     r11d, 8
 * 0000000140ACB91C: jb      short loc_140ACB93B
 * 0000000140ACB91E: mov     eax, r11d
 * 0000000140ACB921: shr     rax, 3
 * 0000000140ACB925: xor     r8, [r10]
 * 0000000140ACB928: mov     ecx, r9d
 * 0000000140ACB92B: rol     r8, cl
 * 0000000140ACB92E: add     r10, 8
 * 0000000140ACB932: add     r11d, 0FFFFFFF8h
 * 0000000140ACB936: sub     rax, r15
 * 0000000140ACB939: jnz     short loc_140ACB925
 * 0000000140ACB93B: mov     r14d, 0FFFFFFFFh
 * 0000000140ACB941: test    r11d, r11d
 * 0000000140ACB944: jz      short loc_140ACB95B
 * 0000000140ACB946: movzx   eax, byte ptr [r10]
 * 0000000140ACB94A: mov     ecx, r9d
 * 0000000140ACB94D: xor     r8, rax
 * 0000000140ACB950: add     r10, r15
 * 0000000140ACB953: rol     r8, cl
 * 0000000140ACB956: add     r11d, r14d
 * 0000000140ACB959: jnz     short loc_140ACB946
 * 0000000140ACB95B: mov     r9, [rbp+0B30h+arg_0]
 * 0000000140ACB962: lea     rcx, [rbp+0B30h+var_D0]
 * 0000000140ACB969: mov     edx, 4
 * 0000000140ACB96E: mov     [r9+780h], r12
 * 0000000140ACB975: add     [r9+7F0h], r13d
 * 0000000140ACB97C: lea     r10d, [rdx+1Ch]
 * 0000000140ACB980: mov     rax, [rcx]
 * 0000000140ACB983: add     r10d, 0FFFFFFF8h
 * 0000000140ACB987: mov     [rbx], rax
 * 0000000140ACB98A: add     rcx, 8
 * 0000000140ACB98E: add     rbx, 8
 * 0000000140ACB992: sub     rdx, r15
 * 0000000140ACB995: jnz     short loc_140ACB980
 * 0000000140ACB997: test    r10d, r10d
 * 0000000140ACB99A: jz      short loc_140ACB9AB
 * 0000000140ACB99C: mov     al, [rcx]
 * 0000000140ACB99E: add     rcx, r15
 * 0000000140ACB9A1: mov     [rbx], al
 * 0000000140ACB9A3: add     rbx, r15
 * 0000000140ACB9A6: add     r10d, r14d
 * 0000000140ACB9A9: jnz     short loc_140ACB99C
 * 0000000140ACB9AB: mov     [r9+780h], r8
 * 0000000140ACB9B2: jmp     loc_140ACBEA0
 * 0000000140ACB9B7: mov     ecx, [rsi+91Ch]
 * 0000000140ACB9BD: mov     r12d, [rsi+9F4h]
 * 0000000140ACB9C4: mov     rax, [rsi+790h]
 * 0000000140ACB9CB: add     r12d, 0FFFFFF38h
 * 0000000140ACB9D2: mov     [rbp+0B30h+var_BAC], ecx
 * 0000000140ACB9D5: mov     rcx, [rsi+4C0h]
 * 0000000140ACB9DC: shr     r12d, 3
 * 0000000140ACB9E0: mov     [rsp+0C30h+var_BD8], rcx
 * 0000000140ACB9E5: mov     rcx, [rsi+598h]
 * 0000000140ACB9EC: mov     [rbp+0B30h+var_B48], rcx
 * 0000000140ACB9F0: mov     [rbp+0B30h+var_B98], rax
 * 0000000140ACB9F4: mov     [rbp+0B30h+var_B50], r12d
 * 0000000140ACB9F8: mov     [rsi+0C4h], r12d
 * 0000000140ACB9FF: rdtsc
 * 0000000140ACBA01: shl     rdx, 20h
 * 0000000140ACBA05: or      rax, rdx
 * 0000000140ACBA08: mov     rcx, rax
 * 0000000140ACBA0B: ror     rax, 3
 * 0000000140ACBA0F: xor     rcx, rax
 * 0000000140ACBA12: mov     rax, r8
 * 0000000140ACBA15: mul     rcx
 * 0000000140ACBA18: mov     r11, rdx
 * 0000000140ACBA1B: mov     [rbp+0B30h+var_448], rdx
 * 0000000140ACBA22: xor     r11, rax
 * 0000000140ACBA25: jz      short loc_140ACB9FF
 * 0000000140ACBA27: mov     rax, [rsi+780h]
 * 0000000140ACBA2E: lea     r14, [rsi+760h]
 * 0000000140ACBA35: mov     ebx, 20h ; ' '
 * 0000000140ACBA3A: mov     [rbp+0B30h+var_B68], rax
 * 0000000140ACBA3E: mov     eax, [rsi+7F0h]
 * 0000000140ACBA44: lea     rdx, [rbp+0B30h+var_B0]
 * 0000000140ACBA4B: mov     [rbp+0B30h+var_BB0], eax
 * 0000000140ACBA4E: mov     r8d, ebx
 * 0000000140ACBA51: mov     rcx, r14
 * 0000000140ACBA54: lea     r10d, [rbx-1Ch]
 * 0000000140ACBA58: mov     r9d, r10d
 * 0000000140ACBA5B: mov     rax, [rcx]
 * 0000000140ACBA5E: add     r8d, 0FFFFFFF8h
 * 0000000140ACBA62: mov     [rdx], rax
 * 0000000140ACBA65: add     rcx, 8
 * 0000000140ACBA69: add     rdx, 8
 * 0000000140ACBA6D: sub     r9, r15
 * 0000000140ACBA70: jnz     short loc_140ACBA5B
 * 0000000140ACBA72: test    r8d, r8d
 * 0000000140ACBA75: jz      short loc_140ACBA90
 * 0000000140ACBA77: mov     r12d, 0FFFFFFFFh
 * 0000000140ACBA7D: mov     al, [rcx]
 * 0000000140ACBA7F: add     rcx, r15
 * 0000000140ACBA82: mov     [rdx], al
 * 0000000140ACBA84: add     rdx, r15
 * 0000000140ACBA87: add     r8d, r12d
 * 0000000140ACBA8A: jnz     short loc_140ACBA7D
 * 0000000140ACBA8C: mov     r12d, [rbp+0B30h+var_B50]
 * 0000000140ACBA90: mov     [rsi+780h], r9
 * 0000000140ACBA97: mov     ecx, ebx
 * 0000000140ACBA99: mov     [rsi+7F0h], r9d
 * 0000000140ACBAA0: mov     rax, r14
 * 0000000140ACBAA3: mov     rdx, r10
 * 0000000140ACBAA6: mov     [rax], r9
 * 0000000140ACBAA9: add     ecx, 0FFFFFFF8h
 * 0000000140ACBAAC: add     rax, 8
 * 0000000140ACBAB0: sub     rdx, r15
 * 0000000140ACBAB3: jnz     short loc_140ACBAA6
 * 0000000140ACBAB5: test    ecx, ecx
 * 0000000140ACBAB7: jz      short loc_140ACBAC8
 * 0000000140ACBAB9: mov     edx, 0FFFFFFFFh
 * 0000000140ACBABE: mov     [rax], r9b
 * 0000000140ACBAC1: add     rax, r15
 * 0000000140ACBAC4: add     ecx, edx
 * 0000000140ACBAC6: jnz     short loc_140ACBABE
 * 0000000140ACBAC8: mov     r10d, [rsi+7ACh]
 * 0000000140ACBACF: mov     r9, rsi
 * 0000000140ACBAD2: add     [rsi+7F0h], r10d
 * 0000000140ACBAD9: mov     rax, rsi
 * 0000000140ACBADC: mov     ebx, [rsi+7DCh]
 * 0000000140ACBAE2: mov     rdx, [rsi+7E0h]
 * 0000000140ACBAE9: lea     rcx, [rsi+r10]
 * 0000000140ACBAED: cmp     rsi, rcx
 * 0000000140ACBAF0: jnb     short loc_140ACBB03
 * 0000000140ACBAF2: mov     r8d, 40h ; '@'
 * 0000000140ACBAF8: prefetchnta byte ptr [rax]
 * 0000000140ACBAFB: add     rax, r8
 * 0000000140ACBAFE: cmp     rax, rcx
 * 0000000140ACBB01: jb      short loc_140ACBAF8
 * 0000000140ACBB03: mov     r15d, r10d
 * 0000000140ACBB06: mov     r8, rdx
 * 0000000140ACBB09: shr     r15d, 7
 * 0000000140ACBB0D: test    r15d, r15d
 * 0000000140ACBB10: jz      short loc_140ACBB8F
 * 0000000140ACBB12: mov     rdi, rdx
 * 0000000140ACBB15: mov     r12, 7010008004002001h
 * 0000000140ACBB1F: mov     edx, 8
 * 0000000140ACBB24: lea     r13d, [rdx-7]
 * 0000000140ACBB28: mov     rax, [r9]
 * 0000000140ACBB2B: mov     ecx, ebx
 * 0000000140ACBB2D: xor     rax, r8
 * 0000000140ACBB30: mov     r8, [r9+8]
 * 0000000140ACBB34: rol     rax, cl
 * 0000000140ACBB37: add     r9, 10h
 * 0000000140ACBB3B: xor     r8, rax
 * 0000000140ACBB3E: rol     r8, cl
 * 0000000140ACBB41: sub     rdx, r13
 * 0000000140ACBB44: jnz     short loc_140ACBB28
 * 0000000140ACBB46: mov     rcx, r9
 * 0000000140ACBB49: sub     rcx, rsi
 * 0000000140ACBB4C: xor     rcx, rdi
 * 0000000140ACBB4F: mov     rax, rcx
 * 0000000140ACBB52: rol     rax, 11h
 * 0000000140ACBB56: xor     rcx, rax
 * 0000000140ACBB59: mov     rax, r12
 * 0000000140ACBB5C: mul     rcx
 * 0000000140ACBB5F: xor     eax, edx
 * 0000000140ACBB61: mov     [rbp+0B30h+var_330], rdx
 * 0000000140ACBB68: xor     ebx, eax
 * 0000000140ACBB6A: mov     rax, r13
 * 0000000140ACBB6D: and     ebx, 3Fh
 * 0000000140ACBB70: cmovz   ebx, eax
 * 0000000140ACBB73: mov     eax, 0FFFFFFFFh
 * 0000000140ACBB78: add     r15d, eax
 * 0000000140ACBB7B: jnz     short loc_140ACBB1F
 * 0000000140ACBB7D: mov     r12d, [rbp+0B30h+var_B50]
 * 0000000140ACBB81: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ACBB88: mov     r13d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140ACBB8F: and     r10d, 7Fh
 * 0000000140ACBB93: cmp     r10d, 8
 * 0000000140ACBB97: jb      short loc_140ACBBC2
 * 0000000140ACBB99: mov     edx, r10d
 * 0000000140ACBB9C: mov     r13d, 1
 * 0000000140ACBBA2: shr     rdx, 3
 * 0000000140ACBBA6: xor     r8, [r9]
 * 0000000140ACBBA9: mov     ecx, ebx
 * 0000000140ACBBAB: rol     r8, cl
 * 0000000140ACBBAE: add     r9, 8
 * 0000000140ACBBB2: add     r10d, 0FFFFFFF8h
 * 0000000140ACBBB6: sub     rdx, r13
 * 0000000140ACBBB9: jnz     short loc_140ACBBA6
 * 0000000140ACBBBB: mov     r13d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140ACBBC2: xor     r15d, r15d
 * 0000000140ACBBC5: test    r10d, r10d
 * 0000000140ACBBC8: jz      short loc_140ACBBF3
 * 0000000140ACBBCA: lea     r13d, [r15+1]
 * 0000000140ACBBCE: mov     r12d, 0FFFFFFFFh
 * 0000000140ACBBD4: movzx   eax, byte ptr [r9]
 * 0000000140ACBBD8: mov     ecx, ebx
 * 0000000140ACBBDA: xor     r8, rax
 * 0000000140ACBBDD: add     r9, r13
 * 0000000140ACBBE0: rol     r8, cl
 * 0000000140ACBBE3: add     r10d, r12d
 * 0000000140ACBBE6: jnz     short loc_140ACBBD4
 * 0000000140ACBBE8: mov     r12d, [rbp+0B30h+var_B50]
 * 0000000140ACBBEC: mov     r13d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140ACBBF3: mov     rax, [rbp+0B30h+var_B68]
 * 0000000140ACBBF7: lea     rcx, [rbp+0B30h+var_B0]
 * 0000000140ACBBFE: mov     r9d, 4
 * 0000000140ACBC04: mov     [rsi+780h], rax
 * 0000000140ACBC0B: mov     eax, [rbp+0B30h+var_BB0]
 * 0000000140ACBC0E: mov     edx, r9d
 * 0000000140ACBC11: add     [rsi+7F0h], eax
 * 0000000140ACBC17: lea     ebx, [r9-3]
 * 0000000140ACBC1B: lea     r10d, [r9+1Ch]
 * 0000000140ACBC1F: mov     rax, [rcx]
 * 0000000140ACBC22: add     r10d, 0FFFFFFF8h
 * 0000000140ACBC26: mov     [r14], rax
 * 0000000140ACBC29: add     rcx, 8
 * 0000000140ACBC2D: add     r14, 8
 * 0000000140ACBC31: sub     rdx, rbx
 * 0000000140ACBC34: jnz     short loc_140ACBC1F
 * 0000000140ACBC36: test    r10d, r10d
 * 0000000140ACBC39: jz      short loc_140ACBC58
 * 0000000140ACBC3B: mov     r13d, 0FFFFFFFFh
 * 0000000140ACBC41: mov     al, [rcx]
 * 0000000140ACBC43: add     rcx, rbx
 * 0000000140ACBC46: mov     [r14], al
 * 0000000140ACBC49: add     r14, rbx
 * 0000000140ACBC4C: add     r10d, r13d
 * 0000000140ACBC4F: jnz     short loc_140ACBC41
 * 0000000140ACBC51: mov     r13d, dword ptr [rbp+0B30h+arg_8]
 * 0000000140ACBC58: mov     [rsi+780h], r8
 * 0000000140ACBC5F: test    dword ptr [rsi+958h], 40000000h
 * 0000000140ACBC69: jnz     loc_140ACBE66
 * 0000000140ACBC6F: mov     rcx, rsi
 * 0000000140ACBC72: mov     eax, r15d
 * 0000000140ACBC75: mov     r14d, 19h
 * 0000000140ACBC7B: xor     [rcx], r11
 * 0000000140ACBC7E: add     eax, ebx
 * 0000000140ACBC80: lea     rcx, [rcx+8]
 * 0000000140ACBC84: cmp     eax, r14d
 * 0000000140ACBC87: jb      short loc_140ACBC7B
 * 0000000140ACBC89: mov     [rbp+0B30h+var_980], r11
 * 0000000140ACBC90: mov     r8d, r12d
 * 0000000140ACBC93: test    r12d, r12d
 * 0000000140ACBC96: jz      short loc_140ACBCD3
 * 0000000140ACBC98: mov     edx, r12d
 * 0000000140ACBC9B: dec     rdx
 * 0000000140ACBC9E: lea     rdx, [rcx+rdx*8]
 * 0000000140ACBCA2: xor     [rdx], r11
 * 0000000140ACBCA5: lea     rax, [rbp+0B30h+var_980]
 * 0000000140ACBCAC: mov     ecx, r8d
 * 0000000140ACBCAF: lea     rdx, [rdx-8]
 * 0000000140ACBCB3: ror     r11, cl
 * 0000000140ACBCB6: mov     [rbp+0B30h+var_980], r11
 * 0000000140ACBCBD: and     r11d, 3Fh
 * 0000000140ACBCC1: btc     [rax], r11
 * 0000000140ACBCC5: sub     r8d, ebx
 * 0000000140ACBCC8: jz      short loc_140ACBCD3
 * 0000000140ACBCCA: mov     r11, [rbp+0B30h+var_980]
 * 0000000140ACBCD1: jmp     short loc_140ACBCA2
 * 0000000140ACBCD3: bt      r13d, 13h
 * 0000000140ACBCD8: jnb     short loc_140ACBD25
 * 0000000140ACBCDA: rdtsc
 * 0000000140ACBCDC: shl     rdx, 20h
 * 0000000140ACBCE0: or      rax, rdx
 * 0000000140ACBCE3: mov     rcx, rax
 * 0000000140ACBCE6: ror     rax, 3
 * 0000000140ACBCEA: xor     rcx, rax
 * 0000000140ACBCED: mov     rax, 7010008004002001h
 * 0000000140ACBCF7: mul     rcx
 * 0000000140ACBCFA: mov     rcx, rdx
 * 0000000140ACBCFD: mov     [rbp+0B30h+var_438], rdx
 * 0000000140ACBD04: xor     rcx, rax
 * 0000000140ACBD07: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140ACBD11: mul     rcx
 * 0000000140ACBD14: shr     rdx, 1
 * 0000000140ACBD17: lea     rax, [rdx+rdx*2]
 * 0000000140ACBD1B: cmp     rcx, rax
 * 0000000140ACBD1E: jz      short loc_140ACBD30
 * 0000000140ACBD20: jmp     loc_140ACBE66
 * 0000000140ACBD25: bt      r13d, 8
 * 0000000140ACBD2A: jb      loc_140ACBE66
 * 0000000140ACBD30: mov     rdi, [rbp+0B30h+var_B48]
 * 0000000140ACBD34: mov     eax, 2
 * 0000000140ACBD39: mov     [rbp+0B30h+var_ABB], al
 * 0000000140ACBD3C: mov     ecx, esi
 * 0000000140ACBD3E: mov     eax, 0Ch
 * 0000000140ACBD43: mov     [rbp+0B30h+var_ABA], r9b
 * 0000000140ACBD47: mov     [rbp+0B30h+var_ABF], al
 * 0000000140ACBD4A: mov     r9, rsi
 * 0000000140ACBD4D: mov     eax, 0Fh
 * 0000000140ACBD52: mov     [rbp+0B30h+var_AC0], r15b
 * 0000000140ACBD56: mov     [rbp+0B30h+var_ABD], bl
 * 0000000140ACBD59: mov     r11d, r15d
 * 0000000140ACBD5C: mov     r15d, [rbp+0B30h+var_BAC]
 * 0000000140ACBD60: mov     r10, rsi
 * 0000000140ACBD63: mov     [rbp+0B30h+var_AB8], 3
 * 0000000140ACBD67: lea     ebx, [rax+1]
 * 0000000140ACBD6A: mov     [rbp+0B30h+var_AB7], 5
 * 0000000140ACBD6E: mov     [rbp+0B30h+var_AB4], 6
 * 0000000140ACBD72: mov     [rbp+0B30h+var_AB9], 7
 * 0000000140ACBD76: mov     [rbp+0B30h+var_AB3], 8
 * 0000000140ACBD7A: mov     [rbp+0B30h+var_AB6], 9
 * 0000000140ACBD7E: mov     [rbp+0B30h+var_AB2], 0Ah
 * 0000000140ACBD82: mov     [rbp+0B30h+var_ABC], 0Bh
 * 0000000140ACBD86: mov     [rbp+0B30h+var_AB1], 0Dh
 * 0000000140ACBD8A: mov     [rbp+0B30h+var_AB5], 0Eh
 * 0000000140ACBD8E: mov     [rbp+0B30h+var_ABE], al
 * 0000000140ACBD91: ror     r9, cl
 * 0000000140ACBD94: test    ebx, ebx
 * 0000000140ACBD96: jz      short loc_140ACBDCE
 * 0000000140ACBD98: mov     rdx, [r10]
 * 0000000140ACBD9B: mov     edi, 1
 * 0000000140ACBDA0: mov     r8d, ebx
 * 0000000140ACBDA3: lea     r12d, [rdi+0Eh]
 * 0000000140ACBDA7: movzx   eax, byte ptr [r10]
 * 0000000140ACBDAB: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 0000000140ACBDAF: and     rax, r12
 * 0000000140ACBDB2: movzx   ecx, [rbp+rax+0B30h+var_AC0]
 * 0000000140ACBDB7: or      rdx, rcx
 * 0000000140ACBDBA: ror     rdx, 4
 * 0000000140ACBDBE: mov     [r10], rdx
 * 0000000140ACBDC1: sub     r8, rdi
 * 0000000140ACBDC4: jnz     short loc_140ACBDA7
 * 0000000140ACBDC6: mov     r12d, [rbp+0B30h+var_B50]
 * 0000000140ACBDCA: mov     rdi, [rbp+0B30h+var_B48]
 * 0000000140ACBDCE: mov     rcx, [r10]
 * 0000000140ACBDD1: mov     eax, r11d
 * 0000000140ACBDD4: sub     rcx, rax
 * 0000000140ACBDD7: sub     rcx, rsi
 * 0000000140ACBDDA: bt      r13d, 9
 * 0000000140ACBDDF: jb      short loc_140ACBDF9
 * 0000000140ACBDE1: mov     rax, [rsp+0C30h+var_BD8]
 * 0000000140ACBDE6: xor     rax, rcx
 * 0000000140ACBDE9: mov     ecx, edi
 * 0000000140ACBDEB: bswap   rax
 * 0000000140ACBDEE: xor     rax, r9
 * 0000000140ACBDF1: ror     rax, cl
 * 0000000140ACBDF4: xor     rax, rdi
 * 0000000140ACBDF7: jmp     short loc_140ACBDFF
 * 0000000140ACBDF9: mov     rax, r9
 * 0000000140ACBDFC: xor     rax, rcx
 * 0000000140ACBDFF: mov     edx, 0C8h
 * 0000000140ACBE04: mov     [r10], rax
 * 0000000140ACBE07: sub     edx, r11d
 * 0000000140ACBE0A: mov     ecx, eax
 * 0000000140ACBE0C: mov     r8d, eax
 * 0000000140ACBE0F: not     ecx
 * 0000000140ACBE11: xor     r8d, 0F09h
 * 0000000140ACBE18: mov     eax, r11d
 * 0000000140ACBE1B: xor     rdx, rax
 * 0000000140ACBE1E: add     r10, 8
 * 0000000140ACBE22: ror     rdx, cl
 * 0000000140ACBE25: mov     cl, r8b
 * 0000000140ACBE28: xor     r9, rdx
 * 0000000140ACBE2B: rol     r9, cl
 * 0000000140ACBE2E: add     r9, rsi
 * 0000000140ACBE31: xor     r9, r15
 * 0000000140ACBE34: inc     r11d
 * 0000000140ACBE37: cmp     r11d, 19h
 * 0000000140ACBE3B: jnz     short loc_140ACBE51
 * 0000000140ACBE3D: bt      r13d, 13h
 * 0000000140ACBE42: lea     eax, [r11-19h]
 * 0000000140ACBE46: lea     ebx, [r11-18h]
 * 0000000140ACBE4A: cmovnb  eax, r12d
 * 0000000140ACBE4E: add     r14d, eax
 * 0000000140ACBE51: cmp     r11d, r14d
 * 0000000140ACBE54: jb      loc_140ACBD94
 * 0000000140ACBE5A: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ACBE61: mov     ebx, 1
 * 0000000140ACBE66: rdtsc
 * 0000000140ACBE68: shl     rdx, 20h
 * 0000000140ACBE6C: mov     r9, 7010008004002001h
 * 0000000140ACBE76: or      rax, rdx
 * 0000000140ACBE79: mov     [rbp+0B30h+var_BB0], ebx
 * 0000000140ACBE7C: mov     rcx, rax
 * 0000000140ACBE7F: ror     rax, 3
 * 0000000140ACBE83: xor     rcx, rax
 * 0000000140ACBE86: mov     rax, r9
 * 0000000140ACBE89: mul     rcx
 * 0000000140ACBE8C: mov     r12, rdx
 * 0000000140ACBE8F: mov     [rbp+0B30h+var_430], rdx
 * 0000000140ACBE96: xor     r12, rax
 * 0000000140ACBE99: jmp     loc_140ACC008
 * 0000000140ACBE9E: xor     edx, edx
 * 0000000140ACBEA0: mov     ebx, [rsi+958h]
 * 0000000140ACBEA6: mov     r12, rdx
 * 0000000140ACBEA9: mov     [rbp+0B30h+arg_8], rdx
 * 0000000140ACBEB0: bt      ebx, 1Eh
 * 0000000140ACBEB4: jb      loc_140ACBFF9
 * 0000000140ACBEBA: bt      ebx, 8
 * 0000000140ACBEBE: jb      loc_140ACBFE6
 * 0000000140ACBEC4: mov     r13d, [rsi+91Ch]
 * 0000000140ACBECB: mov     edi, 1
 * 0000000140ACBED0: mov     r14, [rsi+598h]
 * 0000000140ACBED7: mov     r9, rsi
 * 0000000140ACBEDA: mov     r15, [rsi+4C0h]
 * 0000000140ACBEE1: mov     r10, rsi
 * 0000000140ACBEE4: mov     [rbp+0B30h+var_AF0], dl
 * 0000000140ACBEE7: mov     r11d, edx
 * 0000000140ACBEEA: lea     ecx, [rdi+1]
 * 0000000140ACBEED: mov     [rbp+0B30h+var_AED], dil
 * 0000000140ACBEF1: mov     [rbp+0B30h+var_AEB], cl
 * 0000000140ACBEF4: lea     r12d, [rdi+0Fh]
 * 0000000140ACBEF8: lea     ecx, [rdi+0Bh]
 * 0000000140ACBEFB: mov     [rbp+0B30h+var_AE8], 3
 * 0000000140ACBEFF: mov     [rbp+0B30h+var_AEF], cl
 * 0000000140ACBF02: lea     ecx, [rdi+0Eh]
 * 0000000140ACBF05: mov     [rbp+0B30h+var_AEE], cl
 * 0000000140ACBF08: mov     ecx, esi
 * 0000000140ACBF0A: ror     r9, cl
 * 0000000140ACBF0D: mov     [rbp+0B30h+var_AEA], 4
 * 0000000140ACBF11: mov     [rbp+0B30h+var_AE7], 5
 * 0000000140ACBF15: mov     [rbp+0B30h+var_AE4], 6
 * 0000000140ACBF19: mov     [rbp+0B30h+var_AE9], 7
 * 0000000140ACBF1D: mov     [rbp+0B30h+var_AE3], 8
 * 0000000140ACBF21: mov     [rbp+0B30h+var_AE6], 9
 * 0000000140ACBF25: mov     [rbp+0B30h+var_AE2], 0Ah
 * 0000000140ACBF29: mov     [rbp+0B30h+var_AEC], 0Bh
 * 0000000140ACBF2D: mov     [rbp+0B30h+var_AE1], 0Dh
 * 0000000140ACBF31: mov     [rbp+0B30h+var_AE5], 0Eh
 * 0000000140ACBF35: mov     rdx, [r10]
 * 0000000140ACBF38: mov     r8, r12
 * 0000000140ACBF3B: mov     r12d, 0Fh
 * 0000000140ACBF41: movzx   eax, byte ptr [r10]
 * 0000000140ACBF45: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 0000000140ACBF49: and     rax, r12
 * 0000000140ACBF4C: movzx   ecx, [rbp+rax+0B30h+var_AF0]
 * 0000000140ACBF51: or      rdx, rcx
 * 0000000140ACBF54: ror     rdx, 4
 * 0000000140ACBF58: mov     [r10], rdx
 * 0000000140ACBF5B: sub     r8, rdi
 * 0000000140ACBF5E: jnz     short loc_140ACBF41
 * 0000000140ACBF60: mov     eax, r11d
 * 0000000140ACBF63: lea     r12d, [r8+10h]
 * 0000000140ACBF67: sub     rdx, rax
 * 0000000140ACBF6A: sub     rdx, rsi
 * 0000000140ACBF6D: bt      ebx, 9
 * 0000000140ACBF71: jb      short loc_140ACBF8A
 * 0000000140ACBF73: mov     rax, r15
 * 0000000140ACBF76: mov     ecx, r14d
 * 0000000140ACBF79: xor     rax, rdx
 * 0000000140ACBF7C: bswap   rax
 * 0000000140ACBF7F: xor     rax, r9
 * 0000000140ACBF82: ror     rax, cl
 * 0000000140ACBF85: xor     rax, r14
 * 0000000140ACBF88: jmp     short loc_140ACBF90
 * 0000000140ACBF8A: mov     rax, r9
 * 0000000140ACBF8D: xor     rax, rdx
 * 0000000140ACBF90: mov     [r10], rax
 * 0000000140ACBF93: mov     ecx, eax
 * 0000000140ACBF95: mov     r8d, eax
 * 0000000140ACBF98: mov     edx, 0C8h
 * 0000000140ACBF9D: sub     edx, r11d
 * 0000000140ACBFA0: mov     eax, r11d
 * 0000000140ACBFA3: xor     rdx, rax
 * 0000000140ACBFA6: xor     r8d, 0F09h
 * 0000000140ACBFAD: not     ecx
 * 0000000140ACBFAF: add     r10, 8
 * 0000000140ACBFB3: ror     rdx, cl
 * 0000000140ACBFB6: mov     eax, 19h
 * 0000000140ACBFBB: xor     r9, rdx
 * 0000000140ACBFBE: mov     cl, r8b
 * 0000000140ACBFC1: rol     r9, cl
 * 0000000140ACBFC4: add     r9, rsi
 * 0000000140ACBFC7: xor     r9, r13
 * 0000000140ACBFCA: inc     r11d
 * 0000000140ACBFCD: cmp     r11d, eax
 * 0000000140ACBFD0: jz      short loc_140ACBFD8
 * 0000000140ACBFD2: jb      loc_140ACBF35
 * 0000000140ACBFD8: mov     r12, [rbp+0B30h+arg_8]
 * 0000000140ACBFDF: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140ACBFE6: mov     rax, [rsi+258h]
 * 0000000140ACBFED: lea     rcx, [rsi+7C8h]
 * 0000000140ACBFF4: call    j__guard_dispatch_icall_nop
 * 0000000140ACBFF9: mov     r9, 7010008004002001h
 * 0000000140ACC003: mov     ebx, 1
 * 0000000140ACC008: mov     r11, [rbp+0B30h+arg_0]
 * 0000000140ACC00F: test    dword ptr [r11+958h], 10000000h
 * 0000000140ACC01A: mov     r15, [r11+7A0h]
 * 0000000140ACC021: jz      short loc_140ACC058
 * 0000000140ACC023: rdtsc
 * 0000000140ACC025: shl     rdx, 20h
 * 0000000140ACC029: or      rax, rdx
 * 0000000140ACC02C: mov     rcx, rax
 * 0000000140ACC02F: ror     rax, 3
 * 0000000140ACC033: xor     rcx, rax
 * 0000000140ACC036: mov     rax, r9
 * 0000000140ACC039: mul     rcx
 * 0000000140ACC03C: mov     r15, rdx
 * 0000000140ACC03F: mov     [rbp+0B30h+var_428], rdx
 * 0000000140ACC046: xor     r15, rax
 * 0000000140ACC049: and     r15, 0Fh
 * 0000000140ACC04D: shl     r15, 4
 * 0000000140ACC051: add     r15, [r11+5A8h]
 * 0000000140ACC058: mov     r8d, 28h ; '('
 * 0000000140ACC05E: lea     r14, [r11+8C0h]
 * 0000000140ACC065: mov     rcx, r14
 * 0000000140ACC068: lea     rdx, [rbp+0B30h+var_730]
 * 0000000140ACC06F: lea     r9d, [r8-23h]
 * 0000000140ACC073: mov     rax, [rcx]
 * 0000000140ACC076: add     r8d, 0FFFFFFF8h
 * 0000000140ACC07A: mov     [rdx], rax
 * 0000000140ACC07D: add     rcx, 8
 * 0000000140ACC081: add     rdx, 8
 * 0000000140ACC085: sub     r9, rbx
 * 0000000140ACC088: jnz     short loc_140ACC073
 * 0000000140ACC08A: xor     r13d, r13d
 * 0000000140ACC08D: test    r8d, r8d
 * 0000000140ACC090: jz      short loc_140ACC0AE
 * 0000000140ACC092: mov     r11d, 0FFFFFFFFh
 * 0000000140ACC098: mov     al, [rcx]
 * 0000000140ACC09A: add     rcx, rbx
 * 0000000140ACC09D: mov     [rdx], al
 * 0000000140ACC09F: add     rdx, rbx
 * 0000000140ACC0A2: add     r8d, r11d
 * 0000000140ACC0A5: jnz     short loc_140ACC098
 * 0000000140ACC0A7: mov     r11, [rbp+0B30h+arg_0]
 * 0000000140ACC0AE: mov     eax, [r11+958h]
 * 0000000140ACC0B5: mov     ecx, 8000h
 * 0000000140ACC0BA: test    ecx, eax
 * 0000000140ACC0BC: jnz     short loc_140ACC0C7
 * 0000000140ACC0BE: cmp     [r14], r13d
 * 0000000140ACC0C1: jnz     loc_140ACC70F
 * 0000000140ACC0C7: bt      eax, 1Eh
 * 0000000140ACC0CB: jb      loc_140ACC8DC
 * 0000000140ACC0D1: mov     al, [r11+8E8h]
 * 0000000140ACC0D8: mov     r8, r12
 * 0000000140ACC0DB: sub     al, bl
 * 0000000140ACC0DD: xor     r8, rsi
 * 0000000140ACC0E0: movzx   r10d, al
 * 0000000140ACC0E4: mov     r11d, 3Fh ; '?'
 * 0000000140ACC0EA: sub     r11d, r10d
 * 0000000140ACC0ED: rdtsc
 * 0000000140ACC0EF: shl     rdx, 20h
 * 0000000140ACC0F3: mov     rbx, 7010008004002001h
 * 0000000140ACC0FD: or      rax, rdx
 * 0000000140ACC100: mov     rcx, rax
 * 0000000140ACC103: ror     rax, 3
 * 0000000140ACC107: xor     rcx, rax
 * 0000000140ACC10A: mov     rax, rbx
 * 0000000140ACC10D: mul     rcx
 * 0000000140ACC110: mov     [rbp+0B30h+var_420], rdx
 * 0000000140ACC117: xor     rax, rdx
 * 0000000140ACC11A: xor     edx, edx
 * 0000000140ACC11C: div     r11
 * 0000000140ACC11F: lea     r9d, [r10+rdx]
 * 0000000140ACC123: rdtsc
 * 0000000140ACC125: shl     rdx, 20h
 * 0000000140ACC129: or      rax, rdx
 * 0000000140ACC12C: mov     rcx, rax
 * 0000000140ACC12F: ror     rax, 3
 * 0000000140ACC133: xor     rcx, rax
 * 0000000140ACC136: mov     rax, rbx
 * 0000000140ACC139: mul     rcx
 * 0000000140ACC13C: xor     rax, rdx
 * 0000000140ACC13F: mov     [rbp+0B30h+var_418], rdx
 * 0000000140ACC146: xor     edx, edx
 * 0000000140ACC148: div     r11
 * 0000000140ACC14B: add     edx, r10d
 * 0000000140ACC14E: cmp     edx, r9d
 * 0000000140ACC151: jz      short loc_140ACC123
 * 0000000140ACC153: mov     r11, [rbp+0B30h+arg_0]
 * 0000000140ACC15A: mov     eax, r9d
 * 0000000140ACC15D: bts     r8, rax
 * 0000000140ACC161: mov     eax, edx
 * 0000000140ACC163: btr     r8, rax
 * 0000000140ACC167: cmp     dword ptr [r11+8ECh], 3
 * 0000000140ACC16F: mov     rbx, [r11+758h]
 * 0000000140ACC176: mov     rsi, [r11+750h]
 * 0000000140ACC17D: jnz     loc_140ACC307
 * 0000000140ACC183: mov     r13, [rbp+0B30h+var_B98]
 * 0000000140ACC187: xor     ecx, ecx
 * 0000000140ACC189: test    r13, r13
 * 0000000140ACC18C: jz      loc_140ACC307
 * 0000000140ACC192: mov     rax, [r11+360h]
 * 0000000140ACC199: lea     edx, [rcx+1]
 * 0000000140ACC19C: mov     byte ptr [rbx], 13h
 * 0000000140ACC19F: mov     [rbx+1], dl
 * 0000000140ACC1A2: mov     [rbx+2], cx
 * 0000000140ACC1A6: mov     [rbx+18h], rax
 * 0000000140ACC1AA: mov     [rbx+20h], r13
 * 0000000140ACC1AE: mov     [rbx+38h], rcx
 * 0000000140ACC1B2: mov     [rbx+10h], rcx
 * 0000000140ACC1B6: mov     [rbx+28h], r8
 * 0000000140ACC1BA: mov     rax, [r11+350h]
 * 0000000140ACC1C1: mov     r8, [r13+0]
 * 0000000140ACC1C5: mov     edx, [r13+10h]
 * 0000000140ACC1C9: mov     rcx, [r13+8]
 * 0000000140ACC1CD: call    j__guard_dispatch_icall_nop
 * 0000000140ACC1D2: mov     r9, [r13+0]
 * 0000000140ACC1D6: mov     rcx, r13
 * 0000000140ACC1D9: rol     rcx, 11h
 * 0000000140ACC1DD: mov     rax, 7010008004002001h
 * 0000000140ACC1E7: xor     rcx, r13
 * 0000000140ACC1EA: mov     r10d, 4
 * 0000000140ACC1F0: mul     rcx
 * 0000000140ACC1F3: lea     r11d, [r10-3]
 * 0000000140ACC1F7: mov     [rbp+0B30h+var_410], rdx
 * 0000000140ACC1FE: xor     rdx, rax
 * 0000000140ACC201: lea     rax, [r13+18h]
 * 0000000140ACC205: mov     r8, rdx
 * 0000000140ACC208: xor     r13d, r13d
 * 0000000140ACC20B: xor     [rax], r8
 * 0000000140ACC20E: mov     ecx, r10d
 * 0000000140ACC211: rol     r8, cl
 * 0000000140ACC214: lea     rax, [rax-8]
 * 0000000140ACC218: sub     r10d, r11d
 * 0000000140ACC21B: jnz     short loc_140ACC20B
 * 0000000140ACC21D: and     dl, 0Fh
 * 0000000140ACC220: cmp     dl, 7
 * 0000000140ACC223: jnb     short loc_140ACC292
 * 0000000140ACC225: mov     rcx, r9
 * 0000000140ACC228: mov     rax, 7010008004002001h
 * 0000000140ACC232: rol     rcx, 11h
 * 0000000140ACC236: mov     r10d, 6
 * 0000000140ACC23C: xor     rcx, r9
 * 0000000140ACC23F: mul     rcx
 * 0000000140ACC242: mov     [rbp+0B30h+var_408], rdx
 * 0000000140ACC249: xor     rdx, rax
 * 0000000140ACC24C: add     r8, rdx
 * 0000000140ACC24F: lea     rax, [r9+28h]
 * 0000000140ACC253: movsx   edx, word ptr [r9+8]
 * 0000000140ACC258: xor     [rax], r8
 * 0000000140ACC25B: mov     ecx, r10d
 * 0000000140ACC25E: rol     r8, cl
 * 0000000140ACC261: lea     rax, [rax-8]
 * 0000000140ACC265: sub     r10d, r11d
 * 0000000140ACC268: jnz     short loc_140ACC258
 * 0000000140ACC26A: sub     rdx, 30h ; '0'
 * 0000000140ACC26E: shr     rdx, 3
 * 0000000140ACC272: test    edx, edx
 * 0000000140ACC274: jz      short loc_140ACC292
 * 0000000140ACC276: movsxd  r10, edx
 * 0000000140ACC279: add     r10, 5
 * 0000000140ACC27D: lea     r10, [r9+r10*8]
 * 0000000140ACC281: xor     [r10], r8
 * 0000000140ACC284: mov     ecx, edx
 * 0000000140ACC286: rol     r8, cl
 * 0000000140ACC289: lea     r10, [r10-8]
 * 0000000140ACC28D: sub     edx, r11d
 * 0000000140ACC290: jnz     short loc_140ACC281
 * 0000000140ACC292: mov     r11, [rbp+0B30h+arg_0]
 * 0000000140ACC299: mov     [rbx+40h], r12
 * 0000000140ACC29D: mov     r12, 7010008004002001h
 * 0000000140ACC2A7: test    dword ptr [r11+958h], 100h
 * 0000000140ACC2B2: jz      short loc_140ACC32C
 * 0000000140ACC2B4: lea     r9, [r15-48h]
 * 0000000140ACC2B8: mov     [r9+40h], rbx
 * 0000000140ACC2BC: rdtsc
 * 0000000140ACC2BE: shl     rdx, 20h
 * 0000000140ACC2C2: mov     r8d, 19h
 * 0000000140ACC2C8: or      rax, rdx
 * 0000000140ACC2CB: mov     rcx, rax
 * 0000000140ACC2CE: ror     rax, 3
 * 0000000140ACC2D2: xor     rcx, rax
 * 0000000140ACC2D5: mov     rax, r12
 * 0000000140ACC2D8: mul     rcx
 * 0000000140ACC2DB: lea     r15d, [r8-18h]
 * 0000000140ACC2DF: mov     [rbp+0B30h+var_400], rdx
 * 0000000140ACC2E6: xor     rdx, rax
 * 0000000140ACC2E9: lea     rax, [r9+48h]
 * 0000000140ACC2ED: xor     [rax], rdx
 * 0000000140ACC2F0: lea     rax, [rax+8]
 * 0000000140ACC2F4: sub     r8, r15
 * 0000000140ACC2F7: jnz     short loc_140ACC2ED
 * 0000000140ACC2F9: mov     dword ptr [r9+48h], 48513148h
 * 0000000140ACC301: mov     [r9+20h], rdx
 * 0000000140ACC305: jmp     short loc_140ACC335
 * 0000000140ACC307: mov     byte ptr [rbx], 13h
 * 0000000140ACC30A: mov     eax, 1
 * 0000000140ACC30F: mov     [rbx+1], al
 * 0000000140ACC312: mov     [rbx+2], r13w
 * 0000000140ACC317: mov     [rbx+18h], r15
 * 0000000140ACC31B: mov     [rbx+20h], r8
 * 0000000140ACC31F: mov     [rbx+38h], r13
 * 0000000140ACC323: mov     [rbx+10h], r13
 * 0000000140ACC327: jmp     loc_140ACC299
 * 0000000140ACC32C: mov     r9, rbx
 * 0000000140ACC32F: mov     r15d, 1
 * 0000000140ACC335: mov     rdx, [r11+0A60h]
 * 0000000140ACC33C: test    rdx, rdx
 * 0000000140ACC33F: jz      loc_140ACC3C8
 * 0000000140ACC345: mov     rdx, [rdx+20h]
 * 0000000140ACC349: mov     eax, 0E20E5100h
 * 0000000140ACC34E: mov     rcx, rdx
 * 0000000140ACC351: mov     r12d, 0Fh
 * 0000000140ACC357: xor     rcx, rax
 * 0000000140ACC35A: shr     rcx, 4
 * 0000000140ACC35E: xor     rcx, rdx
 * 0000000140ACC361: shr     rcx, 4
 * 0000000140ACC365: xor     rcx, [r11+568h]
 * 0000000140ACC36C: mov     r10b, cl
 * 0000000140ACC36F: mov     r11, rcx
 * 0000000140ACC372: and     r10b, r12b
 * 0000000140ACC375: jnz     short loc_140ACC37A
 * 0000000140ACC377: mov     r10b, r15b
 * 0000000140ACC37A: mov     r8, rcx
 * 0000000140ACC37D: and     r8, r12
 * 0000000140ACC380: add     r8, rdx
 * 0000000140ACC383: mov     rdx, [r8]
 * 0000000140ACC386: mov     rax, rdx
 * 0000000140ACC389: xor     rax, 1E1200h
 * 0000000140ACC38F: shr     rax, 4
 * 0000000140ACC393: xor     rax, rdx
 * 0000000140ACC396: shr     rax, 4
 * 0000000140ACC39A: xor     rcx, rax
 * 0000000140ACC39D: add     r10b, 0FFh
 * 0000000140ACC3A1: jnz     short loc_140ACC37A
 * 0000000140ACC3A3: mov     r12, 7010008004002001h
 * 0000000140ACC3AD: bt      r11, 0Ch
 * 0000000140ACC3B2: jnb     short loc_140ACC3B7
 * 0000000140ACC3B4: xor     r9, r11
 * 0000000140ACC3B7: mov     r11, [rbp+0B30h+arg_0]
 * 0000000140ACC3BE: mov     [r8], r9
 * 0000000140ACC3C1: mov     r9, [r11+0A60h]
 * 0000000140ACC3C8: lock or [rsp+0C30h+var_C30], r13d
 * 0000000140ACC3CD: mov     ecx, [r11+800h]
 * 0000000140ACC3D4: test    ecx, ecx
 * 0000000140ACC3D6: jz      loc_140ACC65B
 * 0000000140ACC3DC: sub     ecx, 1
 * 0000000140ACC3DF: jz      loc_140ACC644
 * 0000000140ACC3E5: sub     ecx, 1
 * 0000000140ACC3E8: jz      loc_140ACC631
 * 0000000140ACC3EE: sub     ecx, 1
 * 0000000140ACC3F1: jz      loc_140ACC574
 * 0000000140ACC3F7: cmp     ecx, 1
 * 0000000140ACC3FA: jz      loc_140ACC481
 * 0000000140ACC400: mov     r8, [r11+960h]
 * 0000000140ACC407: mov     [r8+48h], r9
 * 0000000140ACC40B: lock or [rsp+0C30h+var_C30], r13d
 * 0000000140ACC410: rdtsc
 * 0000000140ACC412: shl     rdx, 20h
 * 0000000140ACC416: or      rax, rdx
 * 0000000140ACC419: mov     rcx, rax
 * 0000000140ACC41C: mov     rdx, rax
 * 0000000140ACC41F: ror     rcx, 3
 * 0000000140ACC423: mov     rax, r12
 * 0000000140ACC426: xor     rdx, rcx
 * 0000000140ACC429: mul     rdx
 * 0000000140ACC42C: mov     rcx, rdx
 * 0000000140ACC42F: mov     [rbp+0B30h+var_3F8], rdx
 * 0000000140ACC436: xor     rcx, rax
 * 0000000140ACC439: mov     rax, 0ABCC77118461CEFDh
 * 0000000140ACC443: mul     rcx
 * 0000000140ACC446: shr     rdx, 1Ah
 * 0000000140ACC44A: imul    rax, rdx, 5F5E100h
 * 0000000140ACC451: sub     rcx, rax
 * 0000000140ACC454: mov     rax, 0D6BF94D5E57A42BDh
 * 0000000140ACC45E: add     rcx, 47868C00h
 * 0000000140ACC465: imul    rcx
 * 0000000140ACC468: add     rdx, rcx
 * 0000000140ACC46B: sar     rdx, 17h
 * 0000000140ACC46F: mov     rax, rdx
 * 0000000140ACC472: shr     rax, 3Fh
 * 0000000140ACC476: add     rdx, rax
 * 0000000140ACC479: mov     [r8], edx
 * 0000000140ACC47C: jmp     loc_140ACC70A
 * 0000000140ACC481: mov     r8, [r11+9A8h]
 * 0000000140ACC488: xor     r9d, r9d
 * 0000000140ACC48B: mov     rcx, [r11+9B8h]
 * 0000000140ACC492: mov     rdx, rbx
 * 0000000140ACC495: mov     rax, [r11+9B0h]
 * 0000000140ACC49C: mov     rdi, [r11+960h]
 * 0000000140ACC4A3: mov     byte ptr [r8], 12h
 * 0000000140ACC4A7: mov     byte ptr [r8+2], 58h ; 'X'
 * 0000000140ACC4AC: mov     [r8+50h], r13b
 * 0000000140ACC4B0: mov     [r8+8], rdi
 * 0000000140ACC4B4: mov     [r8+20h], rax
 * 0000000140ACC4B8: mov     [r8+28h], r13
 * 0000000140ACC4BC: mov     [r8+30h], rcx
 * 0000000140ACC4C0: mov     [r8+51h], r13b
 * 0000000140ACC4C4: mov     [r8+38h], r13
 * 0000000140ACC4C8: mov     [r8+52h], r13b
 * 0000000140ACC4CC: xor     r8d, r8d
 * 0000000140ACC4CF: mov     rax, [r11+2B0h]
 * 0000000140ACC4D6: mov     rcx, [r11+9A8h]
 * 0000000140ACC4DD: call    j__guard_dispatch_icall_nop
 * 0000000140ACC4E2: test    al, al
 * 0000000140ACC4E4: jnz     loc_140ACC703
 * 0000000140ACC4EA: cmp     [r14], r13d
 * 0000000140ACC4ED: jnz     short loc_140ACC52D
 * 0000000140ACC4EF: mov     rcx, [rbp+0B30h+arg_0]
 * 0000000140ACC4F6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ACC500: add     rax, rcx
 * 0000000140ACC503: xor     edx, edx
 * 0000000140ACC505: mov     [rcx+8C8h], rax
 * 0000000140ACC50C: mov     [rcx+8D0h], r13
 * 0000000140ACC513: mov     qword ptr [rcx+8D8h], 104h
 * 0000000140ACC51E: mov     [rcx+8E0h], rdi
 * 0000000140ACC525: mov     [r14], r15d
 * 0000000140ACC528: call    sub_140AD049C
 * 0000000140ACC52D: lea     rcx, [rbp+0B30h+var_730]
 * 0000000140ACC534: mov     edx, 28h ; '('
 * 0000000140ACC539: mov     rax, [r14]
 * 0000000140ACC53C: add     edx, 0FFFFFFF8h
 * 0000000140ACC53F: mov     [rcx], rax
 * 0000000140ACC542: add     r14, 8
 * 0000000140ACC546: add     rcx, 8
 * 0000000140ACC54A: sub     [rbp+0B30h+var_AA8], r15
 * 0000000140ACC551: jnz     short loc_140ACC539
 * 0000000140ACC553: test    edx, edx
 * 0000000140ACC555: jz      loc_140ACC703
 * 0000000140ACC55B: mov     al, [r14]
 * 0000000140ACC55E: add     r14, r15
 * 0000000140ACC561: mov     [rcx], al
 * 0000000140ACC563: add     rcx, r15
 * 0000000140ACC566: mov     eax, 0FFFFFFFFh
 * 0000000140ACC56B: add     edx, eax
 * 0000000140ACC56D: jnz     short loc_140ACC55B
 * 0000000140ACC56F: jmp     loc_140ACC703
 * 0000000140ACC574: mov     rdi, [r11+960h]
 * 0000000140ACC57B: mov     rax, [r11+668h]
 * 0000000140ACC582: mov     rcx, [rdi+rax]
 * 0000000140ACC586: test    rcx, rcx
 * 0000000140ACC589: jz      loc_140ACC61C
 * 0000000140ACC58F: cmp     [r14], r13d
 * 0000000140ACC592: jnz     short loc_140ACC5CE
 * 0000000140ACC594: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140ACC59E: xor     edx, edx
 * 0000000140ACC5A0: add     rax, r11
 * 0000000140ACC5A3: mov     [r11+8C8h], rax
 * 0000000140ACC5AA: mov     [r11+8D0h], r13
 * 0000000140ACC5B1: mov     qword ptr [r11+8D8h], 104h
 * 0000000140ACC5BC: mov     [r11+8E0h], rcx
 * 0000000140ACC5C3: mov     rcx, r11
 * 0000000140ACC5C6: mov     [r14], r15d
 * 0000000140ACC5C9: call    sub_140AD049C
 * 0000000140ACC5CE: mov     edx, 28h ; '('
 * 0000000140ACC5D3: lea     rcx, [rbp+0B30h+var_730]
 * 0000000140ACC5DA: lea     r11d, [rdx-23h]
 * 0000000140ACC5DE: mov     rax, [r14]
 * 0000000140ACC5E1: add     edx, 0FFFFFFF8h
 * 0000000140ACC5E4: mov     [rcx], rax
 * 0000000140ACC5E7: add     r14, 8
 * 0000000140ACC5EB: add     rcx, 8
 * 0000000140ACC5EF: sub     r11, r15
 * 0000000140ACC5F2: jnz     short loc_140ACC5DE
 * 0000000140ACC5F4: mov     r11, [rbp+0B30h+arg_0]
 * 0000000140ACC5FB: test    edx, edx
 * 0000000140ACC5FD: jz      short loc_140ACC61C
 * 0000000140ACC5FF: mov     r11d, 0FFFFFFFFh
 * 0000000140ACC605: mov     al, [r14]
 * 0000000140ACC608: add     r14, r15
 * 0000000140ACC60B: mov     [rcx], al
 * 0000000140ACC60D: add     rcx, r15
 * 0000000140ACC610: add     edx, r11d
 * 0000000140ACC613: jnz     short loc_140ACC605
 * 0000000140ACC615: mov     r11, [rbp+0B30h+arg_0]
 * 0000000140ACC61C: lock or [rsp+0C30h+var_C30], r13d
 * 0000000140ACC621: mov     rax, [r11+668h]
 * 0000000140ACC628: mov     [rdi+rax], rbx
 * 0000000140ACC62C: jmp     loc_140ACC70A
 * 0000000140ACC631: mov     rax, [r11+788h]
 * 0000000140ACC638: mov     [rax+80h], r9
 * 0000000140ACC63F: jmp     loc_140ACC70A
 * 0000000140ACC644: mov     rcx, [r11+788h]
 * 0000000140ACC64B: mov     rax, [r11+600h]
 * 0000000140ACC652: mov     [rcx+rax], r9
 * 0000000140ACC656: jmp     loc_140ACC70A
 * 0000000140ACC65B: rdtsc
 * 0000000140ACC65D: shl     rdx, 20h
 * 0000000140ACC661: or      rax, rdx
 * 0000000140ACC664: mov     rcx, rax
 * 0000000140ACC667: mov     rdx, rax
 * 0000000140ACC66A: ror     rcx, 3
 * 0000000140ACC66E: mov     rax, r12
 * 0000000140ACC671: xor     rdx, rcx
 * 0000000140ACC674: mul     rdx
 * 0000000140ACC677: mov     rcx, rdx
 * 0000000140ACC67A: mov     [rbp+0B30h+var_3F0], rdx
 * 0000000140ACC681: xor     rcx, rax
 * 0000000140ACC684: mov     rax, 0ABCC77118461CEFDh
 * 0000000140ACC68E: mul     rcx
 * 0000000140ACC691: shr     rdx, 1Ah
 * 0000000140ACC695: imul    rax, rdx, 5F5E100h
 * 0000000140ACC69C: sub     rcx, rax
 * 0000000140ACC69F: sub     rdi, rcx
 * 0000000140ACC6A2: rdtsc
 * 0000000140ACC6A4: shl     rdx, 20h
 * 0000000140ACC6A8: or      rax, rdx
 * 0000000140ACC6AB: mov     [rsp+0C30h+BugCheckParameter4], r9
 * 0000000140ACC6B0: mov     rcx, rax
 * 0000000140ACC6B3: mov     rdx, rax
 * 0000000140ACC6B6: ror     rcx, 3
 * 0000000140ACC6BA: mov     rax, r12
 * 0000000140ACC6BD: xor     rdx, rcx
 * 0000000140ACC6C0: mov     rcx, rsi
 * 0000000140ACC6C3: mul     rdx
 * 0000000140ACC6C6: mov     r8, rdx
 * 0000000140ACC6C9: mov     [rbp+0B30h+var_3E8], rdx
 * 0000000140ACC6D0: xor     r8, rax
 * 0000000140ACC6D3: mov     rax, 346DC5D63886594Bh
 * 0000000140ACC6DD: mul     r8
 * 0000000140ACC6E0: shr     rdx, 0Bh
 * 0000000140ACC6E4: imul    rax, rdx, 2710h
 * 0000000140ACC6EB: mov     rdx, rdi
 * 0000000140ACC6EE: sub     r8, rax
 * 0000000140ACC6F1: mov     rax, [r11+1C8h]
 * 0000000140ACC6F8: mov     r9d, r8d
 * 0000000140ACC6FB: xor     r8d, r8d
 * 0000000140ACC6FE: call    j__guard_dispatch_icall_nop
 * 0000000140ACC703: mov     r11, [rbp+0B30h+arg_0]
 * 0000000140ACC70A: mov     ecx, 8000h
 * 0000000140ACC70F: cmp     [rbp+0B30h+var_730], r13d
 * 0000000140ACC716: jz      loc_140ACC8DC
 * 0000000140ACC71C: mov     r8d, [r11+958h]
 * 0000000140ACC723: test    ecx, r8d
 * 0000000140ACC726: jnz     loc_140ACC8DC
 * 0000000140ACC72C: mov     r12, [rbp+0B30h+var_718]
 * 0000000140ACC733: mov     r13, [rbp+0B30h+var_710]
 * 0000000140ACC73A: mov     rbx, [rbp+0B30h+var_720]
 * 0000000140ACC741: mov     rdi, [rbp+0B30h+var_728]
 * 0000000140ACC748: mov     [rbp+0B30h+arg_8], r12
 * 0000000140ACC74F: mov     [rbp+0B30h+var_AA8], r13
 * 0000000140ACC756: mov     [rbp+0B30h+var_B48], rbx
 * 0000000140ACC75A: mov     [rbp+0B30h+var_B98], rdi
 * 0000000140ACC75E: mov     rax, cr8
 * 0000000140ACC762: mov     r9d, 2
 * 0000000140ACC768: cmp     al, r9b
 * 0000000140ACC76B: jnb     short loc_140ACC77C
 * 0000000140ACC76D: mov     rax, cr8
 * 0000000140ACC771: mov     cr8, r9
 * 0000000140ACC775: mov     r8d, [r11+958h]
 * 0000000140ACC77C: mov     rdx, gs:20h
 * 0000000140ACC785: xor     r10d, r10d
 * 0000000140ACC788: mov     rcx, gs:20h
 * 0000000140ACC791: mov     rax, [r11+608h]
 * 0000000140ACC798: mov     rsi, [rdx+rax]
 * 0000000140ACC79C: mov     rax, [r11+618h]
 * 0000000140ACC7A3: mov     r14, [rcx+rax]
 * 0000000140ACC7A7: mov     rax, [r11+610h]
 * 0000000140ACC7AE: mov     [rsp+0C30h+var_BC8], r14
 * 0000000140ACC7B3: cmp     [rdx+rax], r10b
 * 0000000140ACC7B7: jz      short loc_140ACC7D8
 * 0000000140ACC7B9: lea     rax, [rbp+0B30h+var_8E8]
 * 0000000140ACC7C0: cmp     rax, rsi
 * 0000000140ACC7C3: ja      short loc_140ACC7D8
 * 0000000140ACC7C5: lea     rax, [rsi-6000h]
 * 0000000140ACC7CC: lea     rcx, [rbp+0B30h+var_8E8]
 * 0000000140ACC7D3: cmp     rcx, rax
 * 0000000140ACC7D6: jnb     short loc_140ACC7E3
 * 0000000140ACC7D8: mov     rax, [r11+648h]
 * 0000000140ACC7DF: mov     rsi, [r14+rax]
 * 0000000140ACC7E3: bt      r8d, 1Bh
 * 0000000140ACC7E8: jb      loc_140ACCC9D
 * 0000000140ACC7EE: mov     r15, cr0
 * 0000000140ACC7F2: mov     rax, r15
 * 0000000140ACC7F5: btr     rax, 10h
 * 0000000140ACC7FA: mov     cr0, rax
 * 0000000140ACC7FD: mov     r9d, [r11+0A68h]
 * 0000000140ACC804: lea     rdx, [r11+0A70h]
 * 0000000140ACC80B: shl     r9, 4
 * 0000000140ACC80F: xor     eax, eax
 * 0000000140ACC811: add     r9, rdx
 * 0000000140ACC814: mov     r8, r9
 * 0000000140ACC817: cmp     [r11+0A6Ch], eax
 * 0000000140ACC81E: jbe     short loc_140ACC871
 * 0000000140ACC820: lea     r12d, [rax+1]
 * 0000000140ACC824: lea     r13d, [rax+10h]
 * 0000000140ACC828: mov     rcx, [r8]
 * 0000000140ACC82B: mov     rax, [r8+8]
 * 0000000140ACC82F: mov     [rcx], rax
 * 0000000140ACC832: mov     rcx, cr4
 * 0000000140ACC835: test    rcx, 20080h
 * 0000000140ACC83C: jz      short loc_140ACC84E
 * 0000000140ACC83E: mov     rax, rcx
 * 0000000140ACC841: btc     rax, 7
 * 0000000140ACC846: mov     cr4, rax
 * 0000000140ACC849: mov     cr4, rcx
 * 0000000140ACC84C: jmp     short loc_140ACC854
 * 0000000140ACC84E: mov     rax, cr3
 * 0000000140ACC851: mov     cr3, rax
 * 0000000140ACC854: add     r8, r13
 * 0000000140ACC857: add     r10d, r12d
 * 0000000140ACC85A: cmp     r10d, [r11+0A6Ch]
 * 0000000140ACC861: jb      short loc_140ACC828
 * 0000000140ACC863: mov     r12, [rbp+0B30h+arg_8]
 * 0000000140ACC86A: mov     r13, [rbp+0B30h+var_AA8]
 * 0000000140ACC871: cmp     rdx, r9
 * 0000000140ACC874: jnb     loc_140ACCC88
 * 0000000140ACC87A: mov     r13d, 1
 * 0000000140ACC880: mov     r14d, 0FFFFFFFFh
 * 0000000140ACC886: mov     edi, [rdx+8]
 * 0000000140ACC889: mov     rcx, r8
 * 0000000140ACC88C: mov     r10, [rdx]
 * 0000000140ACC88F: mov     r11d, edi
 * 0000000140ACC892: cmp     edi, 8
 * 0000000140ACC895: jb      short loc_140ACC8B4
 * 0000000140ACC897: mov     ebx, edi
 * 0000000140ACC899: shr     rbx, 3
 * 0000000140ACC89D: mov     rax, [rcx]
 * 0000000140ACC8A0: add     r11d, 0FFFFFFF8h
 * 0000000140ACC8A4: mov     [r10], rax
 * 0000000140ACC8A7: add     rcx, 8
 * 0000000140ACC8AB: add     r10, 8
 * 0000000140ACC8AF: sub     rbx, r13
 * 0000000140ACC8B2: jnz     short loc_140ACC89D
 * 0000000140ACC8B4: test    r11d, r11d
 * 0000000140ACC8B7: jz      short loc_140ACC8CA
 * 0000000140ACC8B9: sub     r10, rcx
 * 0000000140ACC8BC: mov     al, [rcx]
 * 0000000140ACC8BE: mov     [r10+rcx], al
 * 0000000140ACC8C2: add     rcx, r13
 * 0000000140ACC8C5: add     r11d, r14d
 * 0000000140ACC8C8: jnz     short loc_140ACC8BC
 * 0000000140ACC8CA: add     r8, rdi
 * 0000000140ACC8CD: add     rdx, 10h
 * 0000000140ACC8D1: cmp     rdx, r9
 * 0000000140ACC8D4: jnb     loc_140ACCC66
 * 0000000140ACC8DA: jmp     short loc_140ACC886
 * 0000000140ACC8DC: test    dword ptr [r11+958h], 40000000h
 * 0000000140ACC8E7: jnz     short loc_140ACC933
 * 0000000140ACC8E9: cmp     [rbp+0B30h+var_BB0], r13d
 * 0000000140ACC8ED: jz      short loc_140ACC933
 * 0000000140ACC8EF: mov     ecx, [r11+8ECh]
 * 0000000140ACC8F6: sub     ecx, 1
 * 0000000140ACC8F9: jz      short loc_140ACC90D
 * 0000000140ACC8FB: mov     eax, 2
 * 0000000140ACC900: cmp     ecx, eax
 * 0000000140ACC902: jnz     short loc_140ACC933
 * 0000000140ACC904: mov     rax, [r11+358h]
 * 0000000140ACC90B: jmp     short loc_140ACC92C
 * 0000000140ACC90D: add     qword ptr [r11+790h], 0FFFFFFFFFFFFFFF8h
 * 0000000140ACC915: mov     rax, [r11+790h]
 * 0000000140ACC91C: mov     ecx, [rax]
 * 0000000140ACC91E: mov     [r11+798h], ecx
 * 0000000140ACC925: mov     rax, [r11+218h]
 * 0000000140ACC92C: mov     [r11+0F0h], rax
 * 0000000140ACC933: mov     rax, r11
 * 0000000140ACC936: add     rsp, 0BF8h
 * 0000000140ACC93D: pop     r15
 * 0000000140ACC93F: pop     r14
 * 0000000140ACC941: pop     r13
 * 0000000140ACC943: pop     r12
 * 0000000140ACC945: pop     rdi
 * 0000000140ACC946: pop     rsi
 * 0000000140ACC947: pop     rbx
 * 0000000140ACC948: pop     rbp
 * 0000000140ACC949: retn
 * 0000000140ACC94B: mov     r9d, 5; BugCheckParameter3
 * 0000000140ACC951: mov     [rbp+0B30h+var_9A4], 27A00000h
 * 0000000140ACC95B: mov     ecx, [rbp+0B30h+var_9A4]
 * 0000000140ACC961: mov     r8, rbx; BugCheckParameter2
 * 0000000140ACC964: ror     ecx, 95h; BugCheckCode
 * 0000000140ACC967: mov     [rsp+0C30h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140ACC96C: lea     edx, [r9+5]; BugCheckParameter1
 * 0000000140ACC970: call    KeBugCheckEx
 * 0000000140ACC976: mov     [rbp+0B30h+var_9A0], 27A00000h
 * 0000000140ACC980: mov     r9d, 7; BugCheckParameter3
 * 0000000140ACC986: mov     ecx, [rbp+0B30h+var_9A0]
 * 0000000140ACC98C: mov     r8, r12; BugCheckParameter2
 * 0000000140ACC98F: ror     ecx, 95h; BugCheckCode
 * 0000000140ACC992: mov     rdx, r15; BugCheckParameter1
 * 0000000140ACC995: mov     [rsp+0C30h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140ACC99A: call    KeBugCheckEx
 * 0000000140ACC9A0: xor     r9d, r9d; BugCheckParameter3
 * 0000000140ACC9A3: mov     [rbp+0B30h+var_978], 27A00000h
 * 0000000140ACC9AD: mov     ecx, [rbp+0B30h+var_978]
 * 0000000140ACC9B3: mov     r8, r12; BugCheckParameter2
 * 0000000140ACC9B6: ror     ecx, 95h; BugCheckCode
 * 0000000140ACC9B9: mov     [rsp+0C30h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140ACC9BE: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 0000000140ACC9C2: call    KeBugCheckEx
 * 0000000140ACC9C8: mov     [rbp+0B30h+var_974], 27A00000h
 * 0000000140ACC9D2: mov     r9, r15; BugCheckParameter3
 * 0000000140ACC9D5: mov     ecx, [rbp+0B30h+var_974]
 * 0000000140ACC9DB: mov     r8, r12; BugCheckParameter2
 * 0000000140ACC9DE: ror     ecx, 95h; BugCheckCode
 * 0000000140ACC9E1: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140ACC9E6: mov     [rsp+0C30h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140ACC9EB: call    KeBugCheckEx
 * 0000000140ACC9F1: mov     r9d, edx; BugCheckParameter3
 * 0000000140ACC9F4: mov     r8, r12; BugCheckParameter2
 * 0000000140ACC9F7: mov     [rbp+0B30h+var_970], 27A00000h
 * 0000000140ACCA01: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140ACCA06: mov     ecx, [rbp+0B30h+var_970]
 * 0000000140ACCA0C: ror     ecx, 95h; BugCheckCode
 * 0000000140ACCA0F: mov     [rsp+0C30h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140ACCA14: call    KeBugCheckEx
 * 0000000140ACCA1A: mov     r9d, edx; BugCheckParameter3
 * 0000000140ACCA1D: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140ACCA22: mov     [rbp+0B30h+var_99C], 27A00000h
 * 0000000140ACCA2C: mov     ecx, [rbp+0B30h+var_99C]
 * 0000000140ACCA32: ror     ecx, 95h; BugCheckCode
 * 0000000140ACCA35: mov     [rsp+0C30h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140ACCA3A: call    KeBugCheckEx
 * 0000000140ACCA40: mov     r9d, 2; BugCheckParameter3
 * 0000000140ACCA46: mov     [rbp+0B30h+var_96C], 27A00000h
 * 0000000140ACCA50: mov     ecx, [rbp+0B30h+var_96C]
 * 0000000140ACCA56: mov     r8, r12; BugCheckParameter2
 * 0000000140ACCA59: ror     ecx, 95h; BugCheckCode
 * 0000000140ACCA5C: mov     [rsp+0C30h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140ACCA61: lea     edx, [r9+8]; BugCheckParameter1
 * 0000000140ACCA65: call    KeBugCheckEx
 * 0000000140ACCA6B: mov     r9d, 3; BugCheckParameter3
 * 0000000140ACCA71: mov     [rsp+0C30h+BugCheckParameter4], rdx; BugCheckParameter4
 * 0000000140ACCA76: mov     [rbp+0B30h+var_968], 27A00000h
 * 0000000140ACCA80: mov     r8, r12; BugCheckParameter2
 * 0000000140ACCA83: mov     ecx, [rbp+0B30h+var_968]
 * 0000000140ACCA89: ror     ecx, 95h; BugCheckCode
 * 0000000140ACCA8C: lea     edx, [r9+7]; BugCheckParameter1
 * 0000000140ACCA90: call    KeBugCheckEx
 * 0000000140ACCA96: mov     r8, [rbp+0B30h+var_B70]; BugCheckParameter2
 * 0000000140ACCA9A: mov     r9d, 6; BugCheckParameter3
 * 0000000140ACCAA0: mov     [rbp+0B30h+var_964], 27A00000h
 * 0000000140ACCAAA: mov     ecx, [rbp+0B30h+var_964]
 * 0000000140ACCAB0: ror     ecx, 95h; BugCheckCode
 * 0000000140ACCAB3: lea     edx, [r9+4]; BugCheckParameter1
 * 0000000140ACCAB7: mov     [rsp+0C30h+BugCheckParameter4], r10; BugCheckParameter4
 * 0000000140ACCABC: call    KeBugCheckEx
 * 0000000140ACCAC2: mov     r8, [rbp+0B30h+var_B98]; BugCheckParameter2
 * 0000000140ACCAC6: mov     r9d, 5; BugCheckParameter3
 * 0000000140ACCACC: mov     [rbp+0B30h+var_9FC], 27A00000h
 * 0000000140ACCAD6: mov     ecx, [rbp+0B30h+var_9FC]
 * 0000000140ACCADC: ror     ecx, 95h; BugCheckCode
 * 0000000140ACCADF: lea     edx, [r9+5]; BugCheckParameter1
 * 0000000140ACCAE3: mov     [rsp+0C30h+BugCheckParameter4], r11; BugCheckParameter4
 * 0000000140ACCAE8: call    KeBugCheckEx
 * 0000000140ACCAEE: mov     r9d, 5; BugCheckParameter3
 * 0000000140ACCAF4: mov     [rbp+0B30h+var_9F8], 27A00000h
 * 0000000140ACCAFE: mov     ecx, [rbp+0B30h+var_9F8]
 * 0000000140ACCB04: mov     r8, r13; BugCheckParameter2
 * 0000000140ACCB07: ror     ecx, 95h; BugCheckCode
 * 0000000140ACCB0A: mov     [rsp+0C30h+BugCheckParameter4], r11; BugCheckParameter4
 * 0000000140ACCB0F: lea     edx, [r9+5]; BugCheckParameter1
 * 0000000140ACCB13: call    KeBugCheckEx
 * 0000000140ACCB19: mov     [rbp+0B30h+var_9F4], 27A00000h
 * 0000000140ACCB23: mov     r9d, 7; BugCheckParameter3
 * 0000000140ACCB29: mov     ecx, [rbp+0B30h+var_9F4]
 * 0000000140ACCB2F: mov     r8, r14; BugCheckParameter2
 * 0000000140ACCB32: ror     ecx, 95h; BugCheckCode
 * 0000000140ACCB35: mov     rdx, r12; BugCheckParameter1
 * 0000000140ACCB38: mov     [rsp+0C30h+BugCheckParameter4], r11; BugCheckParameter4
 * 0000000140ACCB3D: call    KeBugCheckEx
 * 0000000140ACCB43: xor     r9d, r9d; BugCheckParameter3
 * 0000000140ACCB46: mov     [rbp+0B30h+var_9D4], 27A00000h
 * 0000000140ACCB50: mov     ecx, [rbp+0B30h+var_9D4]
 * 0000000140ACCB56: mov     r8, r13; BugCheckParameter2
 * 0000000140ACCB59: ror     ecx, 95h; BugCheckCode
 * 0000000140ACCB5C: mov     [rsp+0C30h+BugCheckParameter4], r11; BugCheckParameter4
 * 0000000140ACCB61: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 0000000140ACCB65: call    KeBugCheckEx
 * 0000000140ACCB6B: mov     r9d, 3; BugCheckParameter3
 * 0000000140ACCB71: mov     [rbp+0B30h+var_9DC], 27A00000h
 * 0000000140ACCB7B: mov     ecx, [rbp+0B30h+var_9DC]
 * 0000000140ACCB81: mov     r8, r13; BugCheckParameter2
 * 0000000140ACCB84: ror     ecx, 95h; BugCheckCode
 * 0000000140ACCB87: mov     [rsp+0C30h+BugCheckParameter4], r11; BugCheckParameter4
 * 0000000140ACCB8C: lea     edx, [r9+7]; BugCheckParameter1
 * 0000000140ACCB90: call    KeBugCheckEx
 * 0000000140ACCB96: mov     r9, r8; BugCheckParameter3
 * 0000000140ACCB99: mov     [rbp+0B30h+var_9EC], 27A00000h
 * 0000000140ACCBA3: mov     ecx, [rbp+0B30h+var_9EC]
 * 0000000140ACCBA9: mov     r8, r13; BugCheckParameter2
 * 0000000140ACCBAC: ror     ecx, 95h; BugCheckCode
 * 0000000140ACCBAF: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140ACCBB4: mov     [rsp+0C30h+BugCheckParameter4], r11; BugCheckParameter4
 * 0000000140ACCBB9: call    KeBugCheckEx
 * 0000000140ACCBBF: xor     eax, eax
 * 0000000140ACCBC1: mov     r9d, edx; BugCheckParameter3
 * 0000000140ACCBC4: mov     [rbp+0B30h+var_9E8], 27A00000h
 * 0000000140ACCBCE: mov     r8, r13; BugCheckParameter2
 * 0000000140ACCBD1: mov     ecx, [rbp+0B30h+var_9E8]
 * 0000000140ACCBD7: ror     ecx, 95h; BugCheckCode
 * 0000000140ACCBDA: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140ACCBDD: mov     [rsp+0C30h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140ACCBE2: call    KeBugCheckEx
 * 0000000140ACCBE8: xor     eax, eax
 * 0000000140ACCBEA: mov     r9d, edx; BugCheckParameter3
 * 0000000140ACCBED: mov     [rbp+0B30h+var_9E4], 27A00000h
 * 0000000140ACCBF7: mov     ecx, [rbp+0B30h+var_9E4]
 * 0000000140ACCBFD: ror     ecx, 95h; BugCheckCode
 * 0000000140ACCC00: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140ACCC03: mov     [rsp+0C30h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140ACCC08: call    KeBugCheckEx
 * 0000000140ACCC0E: mov     r9d, 2; BugCheckParameter3
 * 0000000140ACCC14: mov     [rbp+0B30h+var_9E0], 27A00000h
 * 0000000140ACCC1E: mov     ecx, [rbp+0B30h+var_9E0]
 * 0000000140ACCC24: mov     r8, r13; BugCheckParameter2
 * 0000000140ACCC27: ror     ecx, 95h; BugCheckCode
 * 0000000140ACCC2A: mov     [rsp+0C30h+BugCheckParameter4], r11; BugCheckParameter4
 * 0000000140ACCC2F: lea     edx, [r9+8]; BugCheckParameter1
 * 0000000140ACCC33: call    KeBugCheckEx
 * 0000000140ACCC39: mov     r8, [rsp+0C30h+var_BD0]; BugCheckParameter2
 * 0000000140ACCC3E: mov     r9d, 6; BugCheckParameter3
 * 0000000140ACCC44: mov     [rbp+0B30h+var_9D8], 27A00000h
 * 0000000140ACCC4E: mov     ecx, [rbp+0B30h+var_9D8]
 * 0000000140ACCC54: ror     ecx, 95h; BugCheckCode
 * 0000000140ACCC57: lea     edx, [r9+4]; BugCheckParameter1
 * 0000000140ACCC5B: mov     [rsp+0C30h+BugCheckParameter4], r10; BugCheckParameter4
 * 0000000140ACCC60: call    KeBugCheckEx
 * 0000000140ACCC66: mov     r14, [rsp+0C30h+var_BC8]
 * 0000000140ACCC6B: mov     r12, [rbp+0B30h+arg_8]
 * 0000000140ACCC72: mov     r13, [rbp+0B30h+var_AA8]
 * 0000000140ACCC79: mov     rbx, [rbp+0B30h+var_B48]
 * 0000000140ACCC7D: mov     rdi, [rbp+0B30h+var_B98]
 * 0000000140ACCC81: mov     r11, [rbp+0B30h+arg_0]
 * 0000000140ACCC88: mov     rax, [r11+208h]
 * 0000000140ACCC8F: mov     byte ptr [rax], 0C3h
 * 0000000140ACCC92: mov     cr0, r15
 * 0000000140ACCC96: xor     r10d, r10d
 * 0000000140ACCC99: lea     r9d, [r10+2]
 * 0000000140ACCC9D: mov     ecx, [r11+8F0h]
 * 0000000140ACCCA4: test    ecx, ecx
 * 0000000140ACCCA6: jz      loc_140ACCD8C
 * 0000000140ACCCAC: mov     rax, cr8
 * 0000000140ACCCB0: cmp     al, r9b
 * 0000000140ACCCB3: jnb     short loc_140ACCCC4
 * 0000000140ACCCB5: mov     rax, cr8
 * 0000000140ACCCB9: mov     cr8, r9
 * 0000000140ACCCBD: mov     ecx, [r11+8F0h]
 * 0000000140ACCCC4: test    ecx, ecx
 * 0000000140ACCCC6: jz      loc_140ACCD8C
 * 0000000140ACCCCC: sub     ecx, 1
 * 0000000140ACCCCF: jz      loc_140ACCD7F
 * 0000000140ACCCD5: sub     ecx, 1
 * 0000000140ACCCD8: jz      loc_140ACCD76
 * 0000000140ACCCDE: sub     ecx, 1
 * 0000000140ACCCE1: jz      loc_140ACCD6D
 * 0000000140ACCCE7: sub     ecx, 1
 * 0000000140ACCCEA: jz      short loc_140ACCD31
 * 0000000140ACCCEC: cmp     ecx, 1
 * 0000000140ACCCEF: jz      short loc_140ACCD0A
 * 0000000140ACCCF1: mov     rax, [r11+590h]
 * 0000000140ACCCF8: mov     ecx, 1
 * 0000000140ACCCFD: lock or [rax+340h], rcx
 * 0000000140ACCD05: jmp     loc_140ACCD8C
 * 0000000140ACCD0A: mov     rcx, gs:20h
 * 0000000140ACCD13: mov     rax, [r11+618h]
 * 0000000140ACCD1A: mov     edx, [r11+958h]
 * 0000000140ACCD21: shr     edx, 0Ah
 * 0000000140ACCD24: and     edx, 1Fh
 * 0000000140ACCD27: mov     rcx, [rax+rcx]
 * 0000000140ACCD2B: lock bts [rcx], edx
 * 0000000140ACCD2F: jmp     short loc_140ACCD8C
 * 0000000140ACCD31: mov     rcx, gs:20h
 * 0000000140ACCD3A: mov     rax, [r11+618h]
 * 0000000140ACCD41: mov     r8d, [r11+958h]
 * 0000000140ACCD48: shr     r8d, 0Ah
 * 0000000140ACCD4C: and     r8d, 1Fh
 * 0000000140ACCD50: mov     rcx, [rax+rcx]
 * 0000000140ACCD54: add     rcx, [r11+678h]
 * 0000000140ACCD5B: mov     rax, [r11+658h]
 * 0000000140ACCD62: mov     rdx, [rcx+rax]
 * 0000000140ACCD66: lock bts [rdx], r8d
 * 0000000140ACCD6B: jmp     short loc_140ACCD8C
 * 0000000140ACCD6D: mov     rax, [r11+538h]
 * 0000000140ACCD74: jmp     short loc_140ACCD86
 * 0000000140ACCD76: mov     rax, [r11+530h]
 * 0000000140ACCD7D: jmp     short loc_140ACCD86
 * 0000000140ACCD7F: mov     rax, [r11+520h]
 * 0000000140ACCD86: lock bts qword ptr [rax], 0
 * 0000000140ACCD8C: mov     rax, [r11+660h]
 * 0000000140ACCD93: mov     [r14+rax], r10
 * 0000000140ACCD97: mov     rax, [r11+670h]
 * 0000000140ACCD9E: mov     [r14+rax], r10
 * 0000000140ACCDA2: mov     rcx, [r11+148h]
 * 0000000140ACCDA9: call    sub_140AD23C0
 * 0000000140ACCDAE: mov     rax, [rbp+0B30h+arg_0]
 * 0000000140ACCDB5: mov     r9, r13
 * 0000000140ACCDB8: mov     [rsp+0C30h+var_C00], rsi
 * 0000000140ACCDBD: mov     r8, rbx
 * 0000000140ACCDC0: mov     rdx, rdi
 * 0000000140ACCDC3: mov     ecx, 109h
 * 0000000140ACCDC8: mov     rax, [rax+148h]
 * 0000000140ACCDCF: mov     [rsp+0C30h+var_C08], rax
 * 0000000140ACCDD4: mov     [rsp+0C30h+BugCheckParameter4], r12
 * 0000000140ACCDD9: call    sub_140AD2100
 */
