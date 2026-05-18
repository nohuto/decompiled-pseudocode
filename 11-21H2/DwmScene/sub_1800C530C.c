/*
 * XREFs of sub_1800C530C @ 0x1800C530C
 * Callers:
 *     sub_180002160 @ 0x180002160 (sub_180002160.c)
 *     sub_1800022E0 @ 0x1800022E0 (sub_1800022E0.c)
 *     sub_180002350 @ 0x180002350 (sub_180002350.c)
 *     sub_1800023C0 @ 0x1800023C0 (sub_1800023C0.c)
 *     sub_180002430 @ 0x180002430 (sub_180002430.c)
 *     sub_1800024A0 @ 0x1800024A0 (sub_1800024A0.c)
 *     sub_180002510 @ 0x180002510 (sub_180002510.c)
 *     sub_180002580 @ 0x180002580 (sub_180002580.c)
 *     sub_1800025F0 @ 0x1800025F0 (sub_1800025F0.c)
 *     sub_180002660 @ 0x180002660 (sub_180002660.c)
 *     sub_1800026D0 @ 0x1800026D0 (sub_1800026D0.c)
 *     sub_180002740 @ 0x180002740 (sub_180002740.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000C548 @ 0x18000C548 (sub_18000C548.c)
 *     sub_18000C5B0 @ 0x18000C5B0 (sub_18000C5B0.c)
 *     sub_180011570 @ 0x180011570 (sub_180011570.c)
 *     sub_18001DC84 @ 0x18001DC84 (sub_18001DC84.c)
 *     sub_18001DD3C @ 0x18001DD3C (sub_18001DD3C.c)
 *     sub_180088448 @ 0x180088448 (sub_180088448.c)
 *     sub_180088528 @ 0x180088528 (sub_180088528.c)
 *     sub_1800A8E0C @ 0x1800A8E0C (sub_1800A8E0C.c)
 *     sub_1800A8E40 @ 0x1800A8E40 (sub_1800A8E40.c)
 *     sub_1800A8E58 @ 0x1800A8E58 (sub_1800A8E58.c)
 *     sub_1800C27B8 @ 0x1800C27B8 (sub_1800C27B8.c)
 *     sub_1800C2828 @ 0x1800C2828 (sub_1800C2828.c)
 *     sub_1800C4FBC @ 0x1800C4FBC (sub_1800C4FBC.c)
 *     sub_1800C4FCC @ 0x1800C4FCC (sub_1800C4FCC.c)
 *     sub_1800C4FDC @ 0x1800C4FDC (sub_1800C4FDC.c)
 *     sub_1800C4FEC @ 0x1800C4FEC (sub_1800C4FEC.c)
 *     sub_1800C4FFC @ 0x1800C4FFC (sub_1800C4FFC.c)
 *     sub_1800C500C @ 0x1800C500C (sub_1800C500C.c)
 *     sub_1800C501C @ 0x1800C501C (sub_1800C501C.c)
 *     sub_1800C502C @ 0x1800C502C (sub_1800C502C.c)
 *     sub_1800C503C @ 0x1800C503C (sub_1800C503C.c)
 *     sub_1800C504C @ 0x1800C504C (sub_1800C504C.c)
 *     sub_1800C505C @ 0x1800C505C (sub_1800C505C.c)
 *     sub_1800C506C @ 0x1800C506C (sub_1800C506C.c)
 *     sub_1800C507C @ 0x1800C507C (sub_1800C507C.c)
 *     sub_1800C508C @ 0x1800C508C (sub_1800C508C.c)
 *     sub_1800C509C @ 0x1800C509C (sub_1800C509C.c)
 *     sub_1800C50AC @ 0x1800C50AC (sub_1800C50AC.c)
 *     sub_1800C50BC @ 0x1800C50BC (sub_1800C50BC.c)
 *     sub_1800C50CC @ 0x1800C50CC (sub_1800C50CC.c)
 *     sub_1800C50DC @ 0x1800C50DC (sub_1800C50DC.c)
 *     sub_1800C50EC @ 0x1800C50EC (sub_1800C50EC.c)
 *     sub_1800C50FC @ 0x1800C50FC (sub_1800C50FC.c)
 *     _alloca_probe @ 0x1800FEE40 (_alloca_probe.c)
 */

/*
 * Hex-Rays decompilation failed for sub_1800C530C @ 0x1800C530C
 * Reason: Hex-Rays returned no pseudocode for 0x1800C530C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800C530C: mov     rax, rsp
 * 00000001800C530F: mov     [rax+8], rbx
 * 00000001800C5313: mov     [rax+10h], rsi
 * 00000001800C5317: mov     [rax+18h], rdi
 * 00000001800C531B: push    rbp
 * 00000001800C531C: push    r12
 * 00000001800C531E: push    r13
 * 00000001800C5320: push    r14
 * 00000001800C5322: push    r15
 * 00000001800C5324: lea     rbp, [rax-9F68h]
 * 00000001800C532B: mov     eax, 0A040h
 * 00000001800C5330: call    _alloca_probe
 * 00000001800C5335: sub     rsp, rax
 * 00000001800C5338: movaps  [rsp+0A060h+var_30], xmm6
 * 00000001800C5340: movaps  [rsp+0A060h+var_40], xmm7
 * 00000001800C5348: mov     rax, cs:__security_cookie
 * 00000001800C534F: xor     rax, rsp
 * 00000001800C5352: mov     [rbp+9F60h+var_50], rax
 * 00000001800C5359: mov     edi, cs:TlsIndex
 * 00000001800C535F: mov     rsi, gs:58h
 * 00000001800C5368: mov     r15d, 10h
 * 00000001800C536E: mov     rax, [rsi+rdi*8]
 * 00000001800C5372: or      r14d, 0FFFFFFFFh
 * 00000001800C5376: lea     r12d, [r14+2]
 * 00000001800C537A: lea     r13d, [r14+0Ah]
 * 00000001800C537E: mov     eax, [r15+rax]
 * 00000001800C5382: cmp     cs:dword_1801FB1B4, eax
 * 00000001800C5388: jle     loc_1800C547C
 * 00000001800C538E: lea     rcx, dword_1801FB1B4
 * 00000001800C5395: call    sub_18000C5B0
 * 00000001800C539A: cmp     cs:dword_1801FB1B4, r14d
 * 00000001800C53A1: jnz     loc_1800C547C
 * 00000001800C53A7: xor     edx, edx
 * 00000001800C53A9: lea     rcx, [rbp+9F60h+var_9F3D]
 * 00000001800C53AD: call    sub_1800A8E58
 * 00000001800C53B2: mov     bl, [rax]
 * 00000001800C53B4: call    sub_1800C4FBC
 * 00000001800C53B9: mov     rdx, rax
 * 00000001800C53BC: mov     r8d, 63E4h
 * 00000001800C53C2: lea     rcx, [rbp+9F60h+var_9EF0]
 * 00000001800C53C6: call    sub_1800A8E40
 * 00000001800C53CB: movups  xmm0, xmmword ptr [rax]
 * 00000001800C53CE: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C53D4: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C53D8: mov     r9d, r12d
 * 00000001800C53DB: lea     r8d, [r14+6]
 * 00000001800C53DF: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C53E4: lea     rcx, [rbp+9F60h+var_69F0]
 * 00000001800C53EB: call    sub_1800A8E0C
 * 00000001800C53F0: movups  xmm6, xmmword ptr [rax]
 * 00000001800C53F3: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C53F7: call    sub_1800C50FC
 * 00000001800C53FC: mov     r8, rax
 * 00000001800C53FF: mov     r9d, r13d
 * 00000001800C5402: xor     edx, edx
 * 00000001800C5404: lea     rcx, [rbp+9F60h+Src]; Src
 * 00000001800C540B: call    sub_180088448
 * 00000001800C5410: nop
 * 00000001800C5411: mov     r8, rax
 * 00000001800C5414: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C541B: lea     rcx, [rbp+9F60h+var_2450]
 * 00000001800C5422: call    sub_18001DD3C
 * 00000001800C5427: nop
 * 00000001800C5428: lea     r8, aPixel; "/Pixel"
 * 00000001800C542F: mov     rdx, rax
 * 00000001800C5432: lea     rcx, [rbp+9F60h+var_8D50]
 * 00000001800C5439: call    sub_18001DC84
 * 00000001800C543E: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C5443: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C5448: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C544D: mov     rcx, rax
 * 00000001800C5450: call    sub_180088528
 * 00000001800C5455: nop
 * 00000001800C5456: lea     rcx, [rbp+9F60h+var_2450]
 * 00000001800C545D: call    sub_180011570
 * 00000001800C5462: nop
 * 00000001800C5463: lea     rcx, [rbp+9F60h+Src]
 * 00000001800C546A: call    sub_180011570
 * 00000001800C546F: nop
 * 00000001800C5470: lea     rcx, dword_1801FB1B4
 * 00000001800C5477: call    sub_18000C548
 * 00000001800C547C: mov     rax, [rsi+rdi*8]
 * 00000001800C5480: mov     eax, [r15+rax]
 * 00000001800C5484: cmp     cs:dword_1801FB1B8, eax
 * 00000001800C548A: jle     loc_1800C5585
 * 00000001800C5490: lea     rcx, dword_1801FB1B8
 * 00000001800C5497: call    sub_18000C5B0
 * 00000001800C549C: cmp     cs:dword_1801FB1B8, r14d
 * 00000001800C54A3: jnz     loc_1800C5585
 * 00000001800C54A9: xor     edx, edx
 * 00000001800C54AB: lea     rcx, [rsp+0A060h+var_A010]
 * 00000001800C54B0: call    sub_1800A8E58
 * 00000001800C54B5: mov     bl, [rax]
 * 00000001800C54B7: call    sub_1800C4FDC
 * 00000001800C54BC: mov     rdx, rax
 * 00000001800C54BF: mov     r8d, 9F8h
 * 00000001800C54C5: lea     rcx, [rbp+9F60h+var_9EE0]
 * 00000001800C54CC: call    sub_1800A8E40
 * 00000001800C54D1: movups  xmm0, xmmword ptr [rax]
 * 00000001800C54D4: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C54DA: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C54DE: mov     r9d, r12d
 * 00000001800C54E1: mov     r8d, 5
 * 00000001800C54E7: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C54EC: lea     rcx, [rbp+9F60h+var_69D0]
 * 00000001800C54F3: call    sub_1800A8E0C
 * 00000001800C54F8: movups  xmm6, xmmword ptr [rax]
 * 00000001800C54FB: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C54FF: call    sub_1800C50FC
 * 00000001800C5504: mov     r8, rax
 * 00000001800C5507: mov     r9d, r13d
 * 00000001800C550A: mov     rdx, r12
 * 00000001800C550D: lea     rcx, [rbp+9F60h+var_2570]; Src
 * 00000001800C5514: call    sub_180088448
 * 00000001800C5519: nop
 * 00000001800C551A: mov     r8, rax
 * 00000001800C551D: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C5524: lea     rcx, [rbp+9F60h+var_2510]
 * 00000001800C552B: call    sub_18001DD3C
 * 00000001800C5530: nop
 * 00000001800C5531: lea     r8, aPixel; "/Pixel"
 * 00000001800C5538: mov     rdx, rax
 * 00000001800C553B: lea     rcx, [rbp+9F60h+var_8CF0]
 * 00000001800C5542: call    sub_18001DC84
 * 00000001800C5547: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C554C: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C5551: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C5556: mov     rcx, rax
 * 00000001800C5559: call    sub_180088528
 * 00000001800C555E: nop
 * 00000001800C555F: lea     rcx, [rbp+9F60h+var_2510]
 * 00000001800C5566: call    sub_180011570
 * 00000001800C556B: nop
 * 00000001800C556C: lea     rcx, [rbp+9F60h+var_2570]
 * 00000001800C5573: call    sub_180011570
 * 00000001800C5578: nop
 * 00000001800C5579: lea     rcx, dword_1801FB1B8
 * 00000001800C5580: call    sub_18000C548
 * 00000001800C5585: mov     rax, [rsi+rdi*8]
 * 00000001800C5589: mov     eax, [r15+rax]
 * 00000001800C558D: cmp     cs:dword_1801FB1BC, eax
 * 00000001800C5593: jle     loc_1800C5690
 * 00000001800C5599: lea     rcx, dword_1801FB1BC
 * 00000001800C55A0: call    sub_18000C5B0
 * 00000001800C55A5: cmp     cs:dword_1801FB1BC, r14d
 * 00000001800C55AC: jnz     loc_1800C5690
 * 00000001800C55B2: xor     edx, edx
 * 00000001800C55B4: lea     rcx, [rsp+0A060h+var_A00F]
 * 00000001800C55B9: call    sub_1800A8E58
 * 00000001800C55BE: mov     bl, [rax]
 * 00000001800C55C0: call    sub_1800C4FBC
 * 00000001800C55C5: mov     rdx, rax
 * 00000001800C55C8: mov     r8d, 63E4h
 * 00000001800C55CE: lea     rcx, [rbp+9F60h+var_9ED0]
 * 00000001800C55D5: call    sub_1800A8E40
 * 00000001800C55DA: movups  xmm0, xmmword ptr [rax]
 * 00000001800C55DD: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C55E3: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C55E7: mov     r9d, r12d
 * 00000001800C55EA: mov     r8d, 5
 * 00000001800C55F0: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C55F5: lea     rcx, [rbp+9F60h+var_69B0]
 * 00000001800C55FC: call    sub_1800A8E0C
 * 00000001800C5601: movups  xmm6, xmmword ptr [rax]
 * 00000001800C5604: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C5608: call    sub_1800C50FC
 * 00000001800C560D: mov     r8, rax
 * 00000001800C5610: mov     r9d, r13d
 * 00000001800C5613: mov     edx, 2
 * 00000001800C5618: lea     rcx, [rbp+9F60h+var_2630]; Src
 * 00000001800C561F: call    sub_180088448
 * 00000001800C5624: nop
 * 00000001800C5625: mov     r8, rax
 * 00000001800C5628: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C562F: lea     rcx, [rbp+9F60h+var_25D0]
 * 00000001800C5636: call    sub_18001DD3C
 * 00000001800C563B: nop
 * 00000001800C563C: lea     r8, aPixel; "/Pixel"
 * 00000001800C5643: mov     rdx, rax
 * 00000001800C5646: lea     rcx, [rbp+9F60h+var_8C90]
 * 00000001800C564D: call    sub_18001DC84
 * 00000001800C5652: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C5657: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C565C: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C5661: mov     rcx, rax
 * 00000001800C5664: call    sub_180088528
 * 00000001800C5669: nop
 * 00000001800C566A: lea     rcx, [rbp+9F60h+var_25D0]
 * 00000001800C5671: call    sub_180011570
 * 00000001800C5676: nop
 * 00000001800C5677: lea     rcx, [rbp+9F60h+var_2630]
 * 00000001800C567E: call    sub_180011570
 * 00000001800C5683: nop
 * 00000001800C5684: lea     rcx, dword_1801FB1BC
 * 00000001800C568B: call    sub_18000C548
 * 00000001800C5690: mov     rax, [rsi+rdi*8]
 * 00000001800C5694: mov     eax, [r15+rax]
 * 00000001800C5698: cmp     cs:dword_1801FB1C0, eax
 * 00000001800C569E: jle     loc_1800C579B
 * 00000001800C56A4: lea     rcx, dword_1801FB1C0
 * 00000001800C56AB: call    sub_18000C5B0
 * 00000001800C56B0: cmp     cs:dword_1801FB1C0, r14d
 * 00000001800C56B7: jnz     loc_1800C579B
 * 00000001800C56BD: xor     edx, edx
 * 00000001800C56BF: lea     rcx, [rsp+0A060h+var_A00E]
 * 00000001800C56C4: call    sub_1800A8E58
 * 00000001800C56C9: mov     bl, [rax]
 * 00000001800C56CB: call    sub_1800C4FEC
 * 00000001800C56D0: mov     rdx, rax
 * 00000001800C56D3: mov     r8d, 31A4h
 * 00000001800C56D9: lea     rcx, [rbp+9F60h+var_9EC0]
 * 00000001800C56E0: call    sub_1800A8E40
 * 00000001800C56E5: movups  xmm0, xmmword ptr [rax]
 * 00000001800C56E8: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C56EE: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C56F2: mov     r9d, r12d
 * 00000001800C56F5: mov     r8d, 5
 * 00000001800C56FB: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C5700: lea     rcx, [rbp+9F60h+var_6990]
 * 00000001800C5707: call    sub_1800A8E0C
 * 00000001800C570C: movups  xmm6, xmmword ptr [rax]
 * 00000001800C570F: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C5713: call    sub_1800C50FC
 * 00000001800C5718: mov     r8, rax
 * 00000001800C571B: mov     r9d, r13d
 * 00000001800C571E: mov     edx, 4
 * 00000001800C5723: lea     rcx, [rbp+9F60h+var_26F0]; Src
 * 00000001800C572A: call    sub_180088448
 * 00000001800C572F: nop
 * 00000001800C5730: mov     r8, rax
 * 00000001800C5733: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C573A: lea     rcx, [rbp+9F60h+var_2690]
 * 00000001800C5741: call    sub_18001DD3C
 * 00000001800C5746: nop
 * 00000001800C5747: lea     r8, aPixel; "/Pixel"
 * 00000001800C574E: mov     rdx, rax
 * 00000001800C5751: lea     rcx, [rbp+9F60h+var_8C30]
 * 00000001800C5758: call    sub_18001DC84
 * 00000001800C575D: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C5762: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C5767: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C576C: mov     rcx, rax
 * 00000001800C576F: call    sub_180088528
 * 00000001800C5774: nop
 * 00000001800C5775: lea     rcx, [rbp+9F60h+var_2690]
 * 00000001800C577C: call    sub_180011570
 * 00000001800C5781: nop
 * 00000001800C5782: lea     rcx, [rbp+9F60h+var_26F0]
 * 00000001800C5789: call    sub_180011570
 * 00000001800C578E: nop
 * 00000001800C578F: lea     rcx, dword_1801FB1C0
 * 00000001800C5796: call    sub_18000C548
 * 00000001800C579B: mov     rax, [rsi+rdi*8]
 * 00000001800C579F: mov     ecx, [r15+rax]
 * 00000001800C57A3: cmp     cs:dword_1801FB1C4, ecx
 * 00000001800C57A9: jle     loc_1800C58A5
 * 00000001800C57AF: lea     rcx, dword_1801FB1C4
 * 00000001800C57B6: call    sub_18000C5B0
 * 00000001800C57BB: cmp     cs:dword_1801FB1C4, r14d
 * 00000001800C57C2: jnz     loc_1800C58A5
 * 00000001800C57C8: xor     edx, edx
 * 00000001800C57CA: lea     rcx, [rsp+0A060h+var_A00D]
 * 00000001800C57CF: call    sub_1800A8E58
 * 00000001800C57D4: mov     bl, [rax]
 * 00000001800C57D6: call    sub_1800C4FDC
 * 00000001800C57DB: mov     rdx, rax
 * 00000001800C57DE: mov     r8d, 9F8h
 * 00000001800C57E4: lea     rcx, [rbp+9F60h+var_9EB0]
 * 00000001800C57EB: call    sub_1800A8E40
 * 00000001800C57F0: movups  xmm0, xmmword ptr [rax]
 * 00000001800C57F3: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C57F9: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C57FD: mov     r9d, r12d
 * 00000001800C5800: mov     ebx, 5
 * 00000001800C5805: mov     r8d, ebx
 * 00000001800C5808: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C580D: lea     rcx, [rbp+9F60h+var_6970]
 * 00000001800C5814: call    sub_1800A8E0C
 * 00000001800C5819: movups  xmm6, xmmword ptr [rax]
 * 00000001800C581C: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C5820: call    sub_1800C50FC
 * 00000001800C5825: mov     r8, rax
 * 00000001800C5828: mov     r9d, r13d
 * 00000001800C582B: mov     edx, ebx
 * 00000001800C582D: lea     rcx, [rbp+9F60h+var_27B0]; Src
 * 00000001800C5834: call    sub_180088448
 * 00000001800C5839: nop
 * 00000001800C583A: mov     r8, rax
 * 00000001800C583D: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C5844: lea     rcx, [rbp+9F60h+var_2750]
 * 00000001800C584B: call    sub_18001DD3C
 * 00000001800C5850: nop
 * 00000001800C5851: lea     r8, aPixel; "/Pixel"
 * 00000001800C5858: mov     rdx, rax
 * 00000001800C585B: lea     rcx, [rbp+9F60h+var_8BD0]
 * 00000001800C5862: call    sub_18001DC84
 * 00000001800C5867: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C586C: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C5871: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C5876: mov     rcx, rax
 * 00000001800C5879: call    sub_180088528
 * 00000001800C587E: nop
 * 00000001800C587F: lea     rcx, [rbp+9F60h+var_2750]
 * 00000001800C5886: call    sub_180011570
 * 00000001800C588B: nop
 * 00000001800C588C: lea     rcx, [rbp+9F60h+var_27B0]
 * 00000001800C5893: call    sub_180011570
 * 00000001800C5898: nop
 * 00000001800C5899: lea     rcx, dword_1801FB1C4
 * 00000001800C58A0: call    sub_18000C548
 * 00000001800C58A5: mov     rax, [rsi+rdi*8]
 * 00000001800C58A9: mov     eax, [r15+rax]
 * 00000001800C58AD: cmp     cs:dword_1801FB1C8, eax
 * 00000001800C58B3: jle     loc_1800C59B0
 * 00000001800C58B9: lea     rcx, dword_1801FB1C8
 * 00000001800C58C0: call    sub_18000C5B0
 * 00000001800C58C5: cmp     cs:dword_1801FB1C8, r14d
 * 00000001800C58CC: jnz     loc_1800C59B0
 * 00000001800C58D2: xor     edx, edx
 * 00000001800C58D4: lea     rcx, [rsp+0A060h+var_A00C]
 * 00000001800C58D9: call    sub_1800A8E58
 * 00000001800C58DE: mov     bl, [rax]
 * 00000001800C58E0: call    sub_1800C4FEC
 * 00000001800C58E5: mov     rdx, rax
 * 00000001800C58E8: mov     r8d, 31A4h
 * 00000001800C58EE: lea     rcx, [rbp+9F60h+var_9EA0]
 * 00000001800C58F5: call    sub_1800A8E40
 * 00000001800C58FA: movups  xmm0, xmmword ptr [rax]
 * 00000001800C58FD: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C5903: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C5907: mov     r9d, r12d
 * 00000001800C590A: mov     r8d, 5
 * 00000001800C5910: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C5915: lea     rcx, [rbp+9F60h+var_6950]
 * 00000001800C591C: call    sub_1800A8E0C
 * 00000001800C5921: movups  xmm6, xmmword ptr [rax]
 * 00000001800C5924: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C5928: call    sub_1800C50FC
 * 00000001800C592D: mov     r8, rax
 * 00000001800C5930: mov     r9d, r13d
 * 00000001800C5933: mov     edx, 6
 * 00000001800C5938: lea     rcx, [rbp+9F60h+var_2870]; Src
 * 00000001800C593F: call    sub_180088448
 * 00000001800C5944: nop
 * 00000001800C5945: mov     r8, rax
 * 00000001800C5948: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C594F: lea     rcx, [rbp+9F60h+var_2810]
 * 00000001800C5956: call    sub_18001DD3C
 * 00000001800C595B: nop
 * 00000001800C595C: lea     r8, aPixel; "/Pixel"
 * 00000001800C5963: mov     rdx, rax
 * 00000001800C5966: lea     rcx, [rbp+9F60h+var_8B70]
 * 00000001800C596D: call    sub_18001DC84
 * 00000001800C5972: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C5977: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C597C: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C5981: mov     rcx, rax
 * 00000001800C5984: call    sub_180088528
 * 00000001800C5989: nop
 * 00000001800C598A: lea     rcx, [rbp+9F60h+var_2810]
 * 00000001800C5991: call    sub_180011570
 * 00000001800C5996: nop
 * 00000001800C5997: lea     rcx, [rbp+9F60h+var_2870]
 * 00000001800C599E: call    sub_180011570
 * 00000001800C59A3: nop
 * 00000001800C59A4: lea     rcx, dword_1801FB1C8
 * 00000001800C59AB: call    sub_18000C548
 * 00000001800C59B0: mov     rax, [rsi+rdi*8]
 * 00000001800C59B4: mov     eax, [r15+rax]
 * 00000001800C59B8: cmp     cs:dword_1801FB1CC, eax
 * 00000001800C59BE: jle     loc_1800C5ABB
 * 00000001800C59C4: lea     rcx, dword_1801FB1CC
 * 00000001800C59CB: call    sub_18000C5B0
 * 00000001800C59D0: cmp     cs:dword_1801FB1CC, r14d
 * 00000001800C59D7: jnz     loc_1800C5ABB
 * 00000001800C59DD: xor     edx, edx
 * 00000001800C59DF: lea     rcx, [rsp+0A060h+var_A00B]
 * 00000001800C59E4: call    sub_1800A8E58
 * 00000001800C59E9: mov     bl, [rax]
 * 00000001800C59EB: call    sub_1800C4FFC
 * 00000001800C59F0: mov     rdx, rax
 * 00000001800C59F3: mov     r8d, 658Ch
 * 00000001800C59F9: lea     rcx, [rbp+9F60h+var_9E90]
 * 00000001800C5A00: call    sub_1800A8E40
 * 00000001800C5A05: movups  xmm0, xmmword ptr [rax]
 * 00000001800C5A08: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C5A0E: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C5A12: mov     r9d, r12d
 * 00000001800C5A15: mov     r8d, 5
 * 00000001800C5A1B: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C5A20: lea     rcx, [rbp+9F60h+var_6930]
 * 00000001800C5A27: call    sub_1800A8E0C
 * 00000001800C5A2C: movups  xmm6, xmmword ptr [rax]
 * 00000001800C5A2F: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C5A33: call    sub_1800C50FC
 * 00000001800C5A38: mov     r8, rax
 * 00000001800C5A3B: mov     r9d, r13d
 * 00000001800C5A3E: mov     edx, 8
 * 00000001800C5A43: lea     rcx, [rbp+9F60h+var_2930]; Src
 * 00000001800C5A4A: call    sub_180088448
 * 00000001800C5A4F: nop
 * 00000001800C5A50: mov     r8, rax
 * 00000001800C5A53: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C5A5A: lea     rcx, [rbp+9F60h+var_28D0]
 * 00000001800C5A61: call    sub_18001DD3C
 * 00000001800C5A66: nop
 * 00000001800C5A67: lea     r8, aPixel; "/Pixel"
 * 00000001800C5A6E: mov     rdx, rax
 * 00000001800C5A71: lea     rcx, [rbp+9F60h+var_8B10]
 * 00000001800C5A78: call    sub_18001DC84
 * 00000001800C5A7D: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C5A82: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C5A87: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C5A8C: mov     rcx, rax
 * 00000001800C5A8F: call    sub_180088528
 * 00000001800C5A94: nop
 * 00000001800C5A95: lea     rcx, [rbp+9F60h+var_28D0]
 * 00000001800C5A9C: call    sub_180011570
 * 00000001800C5AA1: nop
 * 00000001800C5AA2: lea     rcx, [rbp+9F60h+var_2930]
 * 00000001800C5AA9: call    sub_180011570
 * 00000001800C5AAE: nop
 * 00000001800C5AAF: lea     rcx, dword_1801FB1CC
 * 00000001800C5AB6: call    sub_18000C548
 * 00000001800C5ABB: mov     rax, [rsi+rdi*8]
 * 00000001800C5ABF: mov     eax, [r15+rax]
 * 00000001800C5AC3: cmp     cs:dword_1801FB1D0, eax
 * 00000001800C5AC9: jle     loc_1800C5BC4
 * 00000001800C5ACF: lea     rcx, dword_1801FB1D0
 * 00000001800C5AD6: call    sub_18000C5B0
 * 00000001800C5ADB: cmp     cs:dword_1801FB1D0, r14d
 * 00000001800C5AE2: jnz     loc_1800C5BC4
 * 00000001800C5AE8: xor     edx, edx
 * 00000001800C5AEA: lea     rcx, [rsp+0A060h+var_A00A]
 * 00000001800C5AEF: call    sub_1800A8E58
 * 00000001800C5AF4: mov     bl, [rax]
 * 00000001800C5AF6: call    sub_1800C500C
 * 00000001800C5AFB: mov     rdx, rax
 * 00000001800C5AFE: mov     r8d, 10C8h
 * 00000001800C5B04: lea     rcx, [rbp+9F60h+var_9E80]
 * 00000001800C5B0B: call    sub_1800A8E40
 * 00000001800C5B10: movups  xmm0, xmmword ptr [rax]
 * 00000001800C5B13: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C5B19: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C5B1D: mov     r9d, r12d
 * 00000001800C5B20: mov     r8d, 5
 * 00000001800C5B26: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C5B2B: lea     rcx, [rbp+9F60h+var_6910]
 * 00000001800C5B32: call    sub_1800A8E0C
 * 00000001800C5B37: movups  xmm6, xmmword ptr [rax]
 * 00000001800C5B3A: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C5B3E: call    sub_1800C50FC
 * 00000001800C5B43: mov     r8, rax
 * 00000001800C5B46: mov     r9d, r13d
 * 00000001800C5B49: mov     rdx, r13
 * 00000001800C5B4C: lea     rcx, [rbp+9F60h+var_29F0]; Src
 * 00000001800C5B53: call    sub_180088448
 * 00000001800C5B58: nop
 * 00000001800C5B59: mov     r8, rax
 * 00000001800C5B5C: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C5B63: lea     rcx, [rbp+9F60h+var_2990]
 * 00000001800C5B6A: call    sub_18001DD3C
 * 00000001800C5B6F: nop
 * 00000001800C5B70: lea     r8, aPixel; "/Pixel"
 * 00000001800C5B77: mov     rdx, rax
 * 00000001800C5B7A: lea     rcx, [rbp+9F60h+var_8AB0]
 * 00000001800C5B81: call    sub_18001DC84
 * 00000001800C5B86: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C5B8B: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C5B90: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C5B95: mov     rcx, rax
 * 00000001800C5B98: call    sub_180088528
 * 00000001800C5B9D: nop
 * 00000001800C5B9E: lea     rcx, [rbp+9F60h+var_2990]
 * 00000001800C5BA5: call    sub_180011570
 * 00000001800C5BAA: nop
 * 00000001800C5BAB: lea     rcx, [rbp+9F60h+var_29F0]
 * 00000001800C5BB2: call    sub_180011570
 * 00000001800C5BB7: nop
 * 00000001800C5BB8: lea     rcx, dword_1801FB1D0
 * 00000001800C5BBF: call    sub_18000C548
 * 00000001800C5BC4: mov     rax, [rsi+rdi*8]
 * 00000001800C5BC8: mov     eax, [r15+rax]
 * 00000001800C5BCC: cmp     cs:dword_1801FB1D4, eax
 * 00000001800C5BD2: jle     loc_1800C5CCF
 * 00000001800C5BD8: lea     rcx, dword_1801FB1D4
 * 00000001800C5BDF: call    sub_18000C5B0
 * 00000001800C5BE4: cmp     cs:dword_1801FB1D4, r14d
 * 00000001800C5BEB: jnz     loc_1800C5CCF
 * 00000001800C5BF1: xor     edx, edx
 * 00000001800C5BF3: lea     rcx, [rsp+0A060h+var_A009]
 * 00000001800C5BF8: call    sub_1800A8E58
 * 00000001800C5BFD: mov     bl, [rax]
 * 00000001800C5BFF: call    sub_1800C4FFC
 * 00000001800C5C04: mov     rdx, rax
 * 00000001800C5C07: mov     r8d, 658Ch
 * 00000001800C5C0D: lea     rcx, [rbp+9F60h+var_9E70]
 * 00000001800C5C14: call    sub_1800A8E40
 * 00000001800C5C19: movups  xmm0, xmmword ptr [rax]
 * 00000001800C5C1C: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C5C22: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C5C26: mov     r9d, r12d
 * 00000001800C5C29: mov     r8d, 5
 * 00000001800C5C2F: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C5C34: lea     rcx, [rbp+9F60h+var_68F0]
 * 00000001800C5C3B: call    sub_1800A8E0C
 * 00000001800C5C40: movups  xmm6, xmmword ptr [rax]
 * 00000001800C5C43: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C5C47: call    sub_1800C50FC
 * 00000001800C5C4C: mov     r8, rax
 * 00000001800C5C4F: mov     r9d, r13d
 * 00000001800C5C52: mov     edx, 0Ah
 * 00000001800C5C57: lea     rcx, [rbp+9F60h+var_2AB0]; Src
 * 00000001800C5C5E: call    sub_180088448
 * 00000001800C5C63: nop
 * 00000001800C5C64: mov     r8, rax
 * 00000001800C5C67: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C5C6E: lea     rcx, [rbp+9F60h+var_2A50]
 * 00000001800C5C75: call    sub_18001DD3C
 * 00000001800C5C7A: nop
 * 00000001800C5C7B: lea     r8, aPixel; "/Pixel"
 * 00000001800C5C82: mov     rdx, rax
 * 00000001800C5C85: lea     rcx, [rbp+9F60h+var_8A50]
 * 00000001800C5C8C: call    sub_18001DC84
 * 00000001800C5C91: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C5C96: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C5C9B: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C5CA0: mov     rcx, rax
 * 00000001800C5CA3: call    sub_180088528
 * 00000001800C5CA8: nop
 * 00000001800C5CA9: lea     rcx, [rbp+9F60h+var_2A50]
 * 00000001800C5CB0: call    sub_180011570
 * 00000001800C5CB5: nop
 * 00000001800C5CB6: lea     rcx, [rbp+9F60h+var_2AB0]
 * 00000001800C5CBD: call    sub_180011570
 * 00000001800C5CC2: nop
 * 00000001800C5CC3: lea     rcx, dword_1801FB1D4
 * 00000001800C5CCA: call    sub_18000C548
 * 00000001800C5CCF: mov     rax, [rsi+rdi*8]
 * 00000001800C5CD3: mov     eax, [r15+rax]
 * 00000001800C5CD7: cmp     cs:dword_1801FB1D8, eax
 * 00000001800C5CDD: jle     loc_1800C5DDA
 * 00000001800C5CE3: lea     rcx, dword_1801FB1D8
 * 00000001800C5CEA: call    sub_18000C5B0
 * 00000001800C5CEF: cmp     cs:dword_1801FB1D8, r14d
 * 00000001800C5CF6: jnz     loc_1800C5DDA
 * 00000001800C5CFC: xor     edx, edx
 * 00000001800C5CFE: lea     rcx, [rsp+0A060h+var_A008]
 * 00000001800C5D03: call    sub_1800A8E58
 * 00000001800C5D08: mov     bl, [rax]
 * 00000001800C5D0A: call    sub_1800C502C
 * 00000001800C5D0F: mov     rdx, rax
 * 00000001800C5D12: mov     r8d, 65B8h
 * 00000001800C5D18: lea     rcx, [rbp+9F60h+var_9E60]
 * 00000001800C5D1F: call    sub_1800A8E40
 * 00000001800C5D24: movups  xmm0, xmmword ptr [rax]
 * 00000001800C5D27: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C5D2D: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C5D31: mov     r9d, r12d
 * 00000001800C5D34: mov     r8d, 5
 * 00000001800C5D3A: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C5D3F: lea     rcx, [rbp+9F60h+var_68D0]
 * 00000001800C5D46: call    sub_1800A8E0C
 * 00000001800C5D4B: movups  xmm6, xmmword ptr [rax]
 * 00000001800C5D4E: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C5D52: call    sub_1800C50FC
 * 00000001800C5D57: mov     r8, rax
 * 00000001800C5D5A: mov     r9d, r13d
 * 00000001800C5D5D: mov     edx, 10h
 * 00000001800C5D62: lea     rcx, [rbp+9F60h+var_2B70]; Src
 * 00000001800C5D69: call    sub_180088448
 * 00000001800C5D6E: nop
 * 00000001800C5D6F: mov     r8, rax
 * 00000001800C5D72: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C5D79: lea     rcx, [rbp+9F60h+var_2B10]
 * 00000001800C5D80: call    sub_18001DD3C
 * 00000001800C5D85: nop
 * 00000001800C5D86: lea     r8, aPixel; "/Pixel"
 * 00000001800C5D8D: mov     rdx, rax
 * 00000001800C5D90: lea     rcx, [rbp+9F60h+var_89F0]
 * 00000001800C5D97: call    sub_18001DC84
 * 00000001800C5D9C: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C5DA1: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C5DA6: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C5DAB: mov     rcx, rax
 * 00000001800C5DAE: call    sub_180088528
 * 00000001800C5DB3: nop
 * 00000001800C5DB4: lea     rcx, [rbp+9F60h+var_2B10]
 * 00000001800C5DBB: call    sub_180011570
 * 00000001800C5DC0: nop
 * 00000001800C5DC1: lea     rcx, [rbp+9F60h+var_2B70]
 * 00000001800C5DC8: call    sub_180011570
 * 00000001800C5DCD: nop
 * 00000001800C5DCE: lea     rcx, dword_1801FB1D8
 * 00000001800C5DD5: call    sub_18000C548
 * 00000001800C5DDA: mov     rax, [rsi+rdi*8]
 * 00000001800C5DDE: mov     eax, [r15+rax]
 * 00000001800C5DE2: cmp     cs:dword_1801FB1DC, eax
 * 00000001800C5DE8: jle     loc_1800C5EE5
 * 00000001800C5DEE: lea     rcx, dword_1801FB1DC
 * 00000001800C5DF5: call    sub_18000C5B0
 * 00000001800C5DFA: cmp     cs:dword_1801FB1DC, r14d
 * 00000001800C5E01: jnz     loc_1800C5EE5
 * 00000001800C5E07: xor     edx, edx
 * 00000001800C5E09: lea     rcx, [rsp+0A060h+var_A007]
 * 00000001800C5E0E: call    sub_1800A8E58
 * 00000001800C5E13: mov     bl, [rax]
 * 00000001800C5E15: call    sub_1800C502C
 * 00000001800C5E1A: mov     rdx, rax
 * 00000001800C5E1D: mov     r8d, 65B8h
 * 00000001800C5E23: lea     rcx, [rbp+9F60h+var_9E50]
 * 00000001800C5E2A: call    sub_1800A8E40
 * 00000001800C5E2F: movups  xmm0, xmmword ptr [rax]
 * 00000001800C5E32: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C5E38: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C5E3C: mov     r9d, r12d
 * 00000001800C5E3F: mov     r8d, 5
 * 00000001800C5E45: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C5E4A: lea     rcx, [rbp+9F60h+var_68B0]
 * 00000001800C5E51: call    sub_1800A8E0C
 * 00000001800C5E56: movups  xmm6, xmmword ptr [rax]
 * 00000001800C5E59: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C5E5D: call    sub_1800C50FC
 * 00000001800C5E62: mov     r8, rax
 * 00000001800C5E65: mov     r9d, r13d
 * 00000001800C5E68: mov     edx, 12h
 * 00000001800C5E6D: lea     rcx, [rbp+9F60h+var_2C30]; Src
 * 00000001800C5E74: call    sub_180088448
 * 00000001800C5E79: nop
 * 00000001800C5E7A: mov     r8, rax
 * 00000001800C5E7D: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C5E84: lea     rcx, [rbp+9F60h+var_2BD0]
 * 00000001800C5E8B: call    sub_18001DD3C
 * 00000001800C5E90: nop
 * 00000001800C5E91: lea     r8, aPixel; "/Pixel"
 * 00000001800C5E98: mov     rdx, rax
 * 00000001800C5E9B: lea     rcx, [rbp+9F60h+var_8990]
 * 00000001800C5EA2: call    sub_18001DC84
 * 00000001800C5EA7: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C5EAC: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C5EB1: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C5EB6: mov     rcx, rax
 * 00000001800C5EB9: call    sub_180088528
 * 00000001800C5EBE: nop
 * 00000001800C5EBF: lea     rcx, [rbp+9F60h+var_2BD0]
 * 00000001800C5EC6: call    sub_180011570
 * 00000001800C5ECB: nop
 * 00000001800C5ECC: lea     rcx, [rbp+9F60h+var_2C30]
 * 00000001800C5ED3: call    sub_180011570
 * 00000001800C5ED8: nop
 * 00000001800C5ED9: lea     rcx, dword_1801FB1DC
 * 00000001800C5EE0: call    sub_18000C548
 * 00000001800C5EE5: mov     rax, [rsi+rdi*8]
 * 00000001800C5EE9: mov     eax, [r15+rax]
 * 00000001800C5EED: cmp     cs:dword_1801FB1E0, eax
 * 00000001800C5EF3: jle     loc_1800C5FF0
 * 00000001800C5EF9: lea     rcx, dword_1801FB1E0
 * 00000001800C5F00: call    sub_18000C5B0
 * 00000001800C5F05: cmp     cs:dword_1801FB1E0, r14d
 * 00000001800C5F0C: jnz     loc_1800C5FF0
 * 00000001800C5F12: xor     edx, edx
 * 00000001800C5F14: lea     rcx, [rsp+0A060h+var_A006]
 * 00000001800C5F19: call    sub_1800A8E58
 * 00000001800C5F1E: mov     bl, [rax]
 * 00000001800C5F20: call    sub_1800C503C
 * 00000001800C5F25: mov     rdx, rax
 * 00000001800C5F28: mov     r8d, 32F8h
 * 00000001800C5F2E: lea     rcx, [rbp+9F60h+var_9E40]
 * 00000001800C5F35: call    sub_1800A8E40
 * 00000001800C5F3A: movups  xmm0, xmmword ptr [rax]
 * 00000001800C5F3D: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C5F43: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C5F47: mov     r9d, r12d
 * 00000001800C5F4A: mov     r8d, 5
 * 00000001800C5F50: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C5F55: lea     rcx, [rbp+9F60h+var_6890]
 * 00000001800C5F5C: call    sub_1800A8E0C
 * 00000001800C5F61: movups  xmm6, xmmword ptr [rax]
 * 00000001800C5F64: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C5F68: call    sub_1800C50FC
 * 00000001800C5F6D: mov     r8, rax
 * 00000001800C5F70: mov     r9d, r13d
 * 00000001800C5F73: mov     edx, 14h
 * 00000001800C5F78: lea     rcx, [rbp+9F60h+var_2CF0]; Src
 * 00000001800C5F7F: call    sub_180088448
 * 00000001800C5F84: nop
 * 00000001800C5F85: mov     r8, rax
 * 00000001800C5F88: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C5F8F: lea     rcx, [rbp+9F60h+var_2C90]
 * 00000001800C5F96: call    sub_18001DD3C
 * 00000001800C5F9B: nop
 * 00000001800C5F9C: lea     r8, aPixel; "/Pixel"
 * 00000001800C5FA3: mov     rdx, rax
 * 00000001800C5FA6: lea     rcx, [rbp+9F60h+var_8930]
 * 00000001800C5FAD: call    sub_18001DC84
 * 00000001800C5FB2: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C5FB7: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C5FBC: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C5FC1: mov     rcx, rax
 * 00000001800C5FC4: call    sub_180088528
 * 00000001800C5FC9: nop
 * 00000001800C5FCA: lea     rcx, [rbp+9F60h+var_2C90]
 * 00000001800C5FD1: call    sub_180011570
 * 00000001800C5FD6: nop
 * 00000001800C5FD7: lea     rcx, [rbp+9F60h+var_2CF0]
 * 00000001800C5FDE: call    sub_180011570
 * 00000001800C5FE3: nop
 * 00000001800C5FE4: lea     rcx, dword_1801FB1E0
 * 00000001800C5FEB: call    sub_18000C548
 * 00000001800C5FF0: mov     rax, [rsi+rdi*8]
 * 00000001800C5FF4: mov     eax, [r15+rax]
 * 00000001800C5FF8: cmp     cs:dword_1801FB1E4, eax
 * 00000001800C5FFE: jle     loc_1800C60FB
 * 00000001800C6004: lea     rcx, dword_1801FB1E4
 * 00000001800C600B: call    sub_18000C5B0
 * 00000001800C6010: cmp     cs:dword_1801FB1E4, r14d
 * 00000001800C6017: jnz     loc_1800C60FB
 * 00000001800C601D: xor     edx, edx
 * 00000001800C601F: lea     rcx, [rsp+0A060h+var_A005]
 * 00000001800C6024: call    sub_1800A8E58
 * 00000001800C6029: mov     bl, [rax]
 * 00000001800C602B: call    sub_1800C503C
 * 00000001800C6030: mov     rdx, rax
 * 00000001800C6033: mov     r8d, 32F8h
 * 00000001800C6039: lea     rcx, [rbp+9F60h+var_9E30]
 * 00000001800C6040: call    sub_1800A8E40
 * 00000001800C6045: movups  xmm0, xmmword ptr [rax]
 * 00000001800C6048: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C604E: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C6052: mov     r9d, r12d
 * 00000001800C6055: mov     r8d, 5
 * 00000001800C605B: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C6060: lea     rcx, [rbp+9F60h+var_6870]
 * 00000001800C6067: call    sub_1800A8E0C
 * 00000001800C606C: movups  xmm6, xmmword ptr [rax]
 * 00000001800C606F: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C6073: call    sub_1800C50FC
 * 00000001800C6078: mov     r8, rax
 * 00000001800C607B: mov     r9d, r13d
 * 00000001800C607E: mov     edx, 16h
 * 00000001800C6083: lea     rcx, [rbp+9F60h+var_2DB0]; Src
 * 00000001800C608A: call    sub_180088448
 * 00000001800C608F: nop
 * 00000001800C6090: mov     r8, rax
 * 00000001800C6093: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C609A: lea     rcx, [rbp+9F60h+var_2D50]
 * 00000001800C60A1: call    sub_18001DD3C
 * 00000001800C60A6: nop
 * 00000001800C60A7: lea     r8, aPixel; "/Pixel"
 * 00000001800C60AE: mov     rdx, rax
 * 00000001800C60B1: lea     rcx, [rbp+9F60h+var_88D0]
 * 00000001800C60B8: call    sub_18001DC84
 * 00000001800C60BD: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C60C2: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C60C7: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C60CC: mov     rcx, rax
 * 00000001800C60CF: call    sub_180088528
 * 00000001800C60D4: nop
 * 00000001800C60D5: lea     rcx, [rbp+9F60h+var_2D50]
 * 00000001800C60DC: call    sub_180011570
 * 00000001800C60E1: nop
 * 00000001800C60E2: lea     rcx, [rbp+9F60h+var_2DB0]
 * 00000001800C60E9: call    sub_180011570
 * 00000001800C60EE: nop
 * 00000001800C60EF: lea     rcx, dword_1801FB1E4
 * 00000001800C60F6: call    sub_18000C548
 * 00000001800C60FB: mov     rax, [rsi+rdi*8]
 * 00000001800C60FF: mov     eax, [r15+rax]
 * 00000001800C6103: cmp     cs:dword_1801FB1E8, eax
 * 00000001800C6109: jle     loc_1800C6206
 * 00000001800C610F: lea     rcx, dword_1801FB1E8
 * 00000001800C6116: call    sub_18000C5B0
 * 00000001800C611B: cmp     cs:dword_1801FB1E8, r14d
 * 00000001800C6122: jnz     loc_1800C6206
 * 00000001800C6128: xor     edx, edx
 * 00000001800C612A: lea     rcx, [rsp+0A060h+var_A004]
 * 00000001800C612F: call    sub_1800A8E58
 * 00000001800C6134: mov     bl, [rax]
 * 00000001800C6136: call    sub_1800C504C
 * 00000001800C613B: mov     rdx, rax
 * 00000001800C613E: mov     r8d, 678Ch
 * 00000001800C6144: lea     rcx, [rbp+9F60h+var_9E20]
 * 00000001800C614B: call    sub_1800A8E40
 * 00000001800C6150: movups  xmm0, xmmword ptr [rax]
 * 00000001800C6153: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C6159: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C615D: mov     r9d, r12d
 * 00000001800C6160: mov     r8d, 5
 * 00000001800C6166: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C616B: lea     rcx, [rbp+9F60h+var_6850]
 * 00000001800C6172: call    sub_1800A8E0C
 * 00000001800C6177: movups  xmm6, xmmword ptr [rax]
 * 00000001800C617A: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C617E: call    sub_1800C50FC
 * 00000001800C6183: mov     r8, rax
 * 00000001800C6186: mov     r9d, r13d
 * 00000001800C6189: mov     edx, 18h
 * 00000001800C618E: lea     rcx, [rbp+9F60h+var_2E70]; Src
 * 00000001800C6195: call    sub_180088448
 * 00000001800C619A: nop
 * 00000001800C619B: mov     r8, rax
 * 00000001800C619E: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C61A5: lea     rcx, [rbp+9F60h+var_2E10]
 * 00000001800C61AC: call    sub_18001DD3C
 * 00000001800C61B1: nop
 * 00000001800C61B2: lea     r8, aPixel; "/Pixel"
 * 00000001800C61B9: mov     rdx, rax
 * 00000001800C61BC: lea     rcx, [rbp+9F60h+var_8870]
 * 00000001800C61C3: call    sub_18001DC84
 * 00000001800C61C8: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C61CD: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C61D2: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C61D7: mov     rcx, rax
 * 00000001800C61DA: call    sub_180088528
 * 00000001800C61DF: nop
 * 00000001800C61E0: lea     rcx, [rbp+9F60h+var_2E10]
 * 00000001800C61E7: call    sub_180011570
 * 00000001800C61EC: nop
 * 00000001800C61ED: lea     rcx, [rbp+9F60h+var_2E70]
 * 00000001800C61F4: call    sub_180011570
 * 00000001800C61F9: nop
 * 00000001800C61FA: lea     rcx, dword_1801FB1E8
 * 00000001800C6201: call    sub_18000C548
 * 00000001800C6206: mov     rax, [rsi+rdi*8]
 * 00000001800C620A: mov     eax, [r15+rax]
 * 00000001800C620E: cmp     cs:dword_1801FB1EC, eax
 * 00000001800C6214: jle     loc_1800C6311
 * 00000001800C621A: lea     rcx, dword_1801FB1EC
 * 00000001800C6221: call    sub_18000C5B0
 * 00000001800C6226: cmp     cs:dword_1801FB1EC, r14d
 * 00000001800C622D: jnz     loc_1800C6311
 * 00000001800C6233: xor     edx, edx
 * 00000001800C6235: lea     rcx, [rsp+0A060h+var_A003]
 * 00000001800C623A: call    sub_1800A8E58
 * 00000001800C623F: mov     bl, [rax]
 * 00000001800C6241: call    sub_1800C504C
 * 00000001800C6246: mov     rdx, rax
 * 00000001800C6249: mov     r8d, 678Ch
 * 00000001800C624F: lea     rcx, [rbp+9F60h+var_9E10]
 * 00000001800C6256: call    sub_1800A8E40
 * 00000001800C625B: movups  xmm0, xmmword ptr [rax]
 * 00000001800C625E: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C6264: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C6268: mov     r9d, r12d
 * 00000001800C626B: mov     r8d, 5
 * 00000001800C6271: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C6276: lea     rcx, [rbp+9F60h+var_6830]
 * 00000001800C627D: call    sub_1800A8E0C
 * 00000001800C6282: movups  xmm6, xmmword ptr [rax]
 * 00000001800C6285: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C6289: call    sub_1800C50FC
 * 00000001800C628E: mov     r8, rax
 * 00000001800C6291: mov     r9d, r13d
 * 00000001800C6294: mov     edx, 1Ah
 * 00000001800C6299: lea     rcx, [rbp+9F60h+var_2F30]; Src
 * 00000001800C62A0: call    sub_180088448
 * 00000001800C62A5: nop
 * 00000001800C62A6: mov     r8, rax
 * 00000001800C62A9: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C62B0: lea     rcx, [rbp+9F60h+var_2ED0]
 * 00000001800C62B7: call    sub_18001DD3C
 * 00000001800C62BC: nop
 * 00000001800C62BD: lea     r8, aPixel; "/Pixel"
 * 00000001800C62C4: mov     rdx, rax
 * 00000001800C62C7: lea     rcx, [rbp+9F60h+var_8810]
 * 00000001800C62CE: call    sub_18001DC84
 * 00000001800C62D3: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C62D8: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C62DD: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C62E2: mov     rcx, rax
 * 00000001800C62E5: call    sub_180088528
 * 00000001800C62EA: nop
 * 00000001800C62EB: lea     rcx, [rbp+9F60h+var_2ED0]
 * 00000001800C62F2: call    sub_180011570
 * 00000001800C62F7: nop
 * 00000001800C62F8: lea     rcx, [rbp+9F60h+var_2F30]
 * 00000001800C62FF: call    sub_180011570
 * 00000001800C6304: nop
 * 00000001800C6305: lea     rcx, dword_1801FB1EC
 * 00000001800C630C: call    sub_18000C548
 * 00000001800C6311: mov     rax, [rsi+rdi*8]
 * 00000001800C6315: mov     eax, [r15+rax]
 * 00000001800C6319: cmp     cs:dword_1801FB1F0, eax
 * 00000001800C631F: jle     loc_1800C641C
 * 00000001800C6325: lea     rcx, dword_1801FB1F0
 * 00000001800C632C: call    sub_18000C5B0
 * 00000001800C6331: cmp     cs:dword_1801FB1F0, r14d
 * 00000001800C6338: jnz     loc_1800C641C
 * 00000001800C633E: xor     edx, edx
 * 00000001800C6340: lea     rcx, [rsp+0A060h+var_A002]
 * 00000001800C6345: call    sub_1800A8E58
 * 00000001800C634A: mov     bl, [rax]
 * 00000001800C634C: call    sub_1800C4FBC
 * 00000001800C6351: mov     rdx, rax
 * 00000001800C6354: mov     r8d, 63E4h
 * 00000001800C635A: lea     rcx, [rbp+9F60h+var_9E00]
 * 00000001800C6361: call    sub_1800A8E40
 * 00000001800C6366: movups  xmm0, xmmword ptr [rax]
 * 00000001800C6369: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C636F: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C6373: mov     r9d, r12d
 * 00000001800C6376: mov     r8d, 5
 * 00000001800C637C: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C6381: lea     rcx, [rbp+9F60h+var_6810]
 * 00000001800C6388: call    sub_1800A8E0C
 * 00000001800C638D: movups  xmm6, xmmword ptr [rax]
 * 00000001800C6390: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C6394: call    sub_1800C50FC
 * 00000001800C6399: mov     r8, rax
 * 00000001800C639C: mov     r9d, r13d
 * 00000001800C639F: mov     edx, 20h ; ' '
 * 00000001800C63A4: lea     rcx, [rbp+9F60h+var_2FF0]; Src
 * 00000001800C63AB: call    sub_180088448
 * 00000001800C63B0: nop
 * 00000001800C63B1: mov     r8, rax
 * 00000001800C63B4: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C63BB: lea     rcx, [rbp+9F60h+var_2F90]
 * 00000001800C63C2: call    sub_18001DD3C
 * 00000001800C63C7: nop
 * 00000001800C63C8: lea     r8, aPixel; "/Pixel"
 * 00000001800C63CF: mov     rdx, rax
 * 00000001800C63D2: lea     rcx, [rbp+9F60h+var_87B0]
 * 00000001800C63D9: call    sub_18001DC84
 * 00000001800C63DE: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C63E3: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C63E8: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C63ED: mov     rcx, rax
 * 00000001800C63F0: call    sub_180088528
 * 00000001800C63F5: nop
 * 00000001800C63F6: lea     rcx, [rbp+9F60h+var_2F90]
 * 00000001800C63FD: call    sub_180011570
 * 00000001800C6402: nop
 * 00000001800C6403: lea     rcx, [rbp+9F60h+var_2FF0]
 * 00000001800C640A: call    sub_180011570
 * 00000001800C640F: nop
 * 00000001800C6410: lea     rcx, dword_1801FB1F0
 * 00000001800C6417: call    sub_18000C548
 * 00000001800C641C: mov     rax, [rsi+rdi*8]
 * 00000001800C6420: mov     eax, [r15+rax]
 * 00000001800C6424: cmp     cs:dword_1801FB1F4, eax
 * 00000001800C642A: jle     loc_1800C6527
 * 00000001800C6430: lea     rcx, dword_1801FB1F4
 * 00000001800C6437: call    sub_18000C5B0
 * 00000001800C643C: cmp     cs:dword_1801FB1F4, r14d
 * 00000001800C6443: jnz     loc_1800C6527
 * 00000001800C6449: xor     edx, edx
 * 00000001800C644B: lea     rcx, [rsp+0A060h+var_A001]
 * 00000001800C6450: call    sub_1800A8E58
 * 00000001800C6455: mov     bl, [rax]
 * 00000001800C6457: call    sub_1800C4FDC
 * 00000001800C645C: mov     rdx, rax
 * 00000001800C645F: mov     r8d, 9F8h
 * 00000001800C6465: lea     rcx, [rbp+9F60h+var_9DF0]
 * 00000001800C646C: call    sub_1800A8E40
 * 00000001800C6471: movups  xmm0, xmmword ptr [rax]
 * 00000001800C6474: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C647A: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C647E: mov     r9d, r12d
 * 00000001800C6481: mov     r8d, 5
 * 00000001800C6487: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C648C: lea     rcx, [rbp+9F60h+var_67F0]
 * 00000001800C6493: call    sub_1800A8E0C
 * 00000001800C6498: movups  xmm6, xmmword ptr [rax]
 * 00000001800C649B: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C649F: call    sub_1800C50FC
 * 00000001800C64A4: mov     r8, rax
 * 00000001800C64A7: mov     r9d, r13d
 * 00000001800C64AA: mov     edx, 21h ; '!'
 * 00000001800C64AF: lea     rcx, [rbp+9F60h+var_30B0]; Src
 * 00000001800C64B6: call    sub_180088448
 * 00000001800C64BB: nop
 * 00000001800C64BC: mov     r8, rax
 * 00000001800C64BF: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C64C6: lea     rcx, [rbp+9F60h+var_3050]
 * 00000001800C64CD: call    sub_18001DD3C
 * 00000001800C64D2: nop
 * 00000001800C64D3: lea     r8, aPixel; "/Pixel"
 * 00000001800C64DA: mov     rdx, rax
 * 00000001800C64DD: lea     rcx, [rbp+9F60h+var_8750]
 * 00000001800C64E4: call    sub_18001DC84
 * 00000001800C64E9: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C64EE: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C64F3: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C64F8: mov     rcx, rax
 * 00000001800C64FB: call    sub_180088528
 * 00000001800C6500: nop
 * 00000001800C6501: lea     rcx, [rbp+9F60h+var_3050]
 * 00000001800C6508: call    sub_180011570
 * 00000001800C650D: nop
 * 00000001800C650E: lea     rcx, [rbp+9F60h+var_30B0]
 * 00000001800C6515: call    sub_180011570
 * 00000001800C651A: nop
 * 00000001800C651B: lea     rcx, dword_1801FB1F4
 * 00000001800C6522: call    sub_18000C548
 * 00000001800C6527: mov     rax, [rsi+rdi*8]
 * 00000001800C652B: mov     eax, [r15+rax]
 * 00000001800C652F: cmp     cs:dword_1801FB1F8, eax
 * 00000001800C6535: jle     loc_1800C6632
 * 00000001800C653B: lea     rcx, dword_1801FB1F8
 * 00000001800C6542: call    sub_18000C5B0
 * 00000001800C6547: cmp     cs:dword_1801FB1F8, r14d
 * 00000001800C654E: jnz     loc_1800C6632
 * 00000001800C6554: xor     edx, edx
 * 00000001800C6556: lea     rcx, [rsp+0A060h+var_A000]
 * 00000001800C655B: call    sub_1800A8E58
 * 00000001800C6560: mov     bl, [rax]
 * 00000001800C6562: call    sub_1800C4FBC
 * 00000001800C6567: mov     rdx, rax
 * 00000001800C656A: mov     r8d, 63E4h
 * 00000001800C6570: lea     rcx, [rbp+9F60h+var_9DE0]
 * 00000001800C6577: call    sub_1800A8E40
 * 00000001800C657C: movups  xmm0, xmmword ptr [rax]
 * 00000001800C657F: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C6585: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C6589: mov     r9d, r12d
 * 00000001800C658C: mov     r8d, 5
 * 00000001800C6592: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C6597: lea     rcx, [rbp+9F60h+var_67D0]
 * 00000001800C659E: call    sub_1800A8E0C
 * 00000001800C65A3: movups  xmm6, xmmword ptr [rax]
 * 00000001800C65A6: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C65AA: call    sub_1800C50FC
 * 00000001800C65AF: mov     r8, rax
 * 00000001800C65B2: mov     r9d, r13d
 * 00000001800C65B5: mov     edx, 22h ; '"'
 * 00000001800C65BA: lea     rcx, [rbp+9F60h+var_3170]; Src
 * 00000001800C65C1: call    sub_180088448
 * 00000001800C65C6: nop
 * 00000001800C65C7: mov     r8, rax
 * 00000001800C65CA: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C65D1: lea     rcx, [rbp+9F60h+var_3110]
 * 00000001800C65D8: call    sub_18001DD3C
 * 00000001800C65DD: nop
 * 00000001800C65DE: lea     r8, aPixel; "/Pixel"
 * 00000001800C65E5: mov     rdx, rax
 * 00000001800C65E8: lea     rcx, [rbp+9F60h+var_86F0]
 * 00000001800C65EF: call    sub_18001DC84
 * 00000001800C65F4: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C65F9: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C65FE: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C6603: mov     rcx, rax
 * 00000001800C6606: call    sub_180088528
 * 00000001800C660B: nop
 * 00000001800C660C: lea     rcx, [rbp+9F60h+var_3110]
 * 00000001800C6613: call    sub_180011570
 * 00000001800C6618: nop
 * 00000001800C6619: lea     rcx, [rbp+9F60h+var_3170]
 * 00000001800C6620: call    sub_180011570
 * 00000001800C6625: nop
 * 00000001800C6626: lea     rcx, dword_1801FB1F8
 * 00000001800C662D: call    sub_18000C548
 * 00000001800C6632: mov     rax, [rsi+rdi*8]
 * 00000001800C6636: mov     eax, [r15+rax]
 * 00000001800C663A: cmp     cs:dword_1801FB1FC, eax
 * 00000001800C6640: jle     loc_1800C673D
 * 00000001800C6646: lea     rcx, dword_1801FB1FC
 * 00000001800C664D: call    sub_18000C5B0
 * 00000001800C6652: cmp     cs:dword_1801FB1FC, r14d
 * 00000001800C6659: jnz     loc_1800C673D
 * 00000001800C665F: xor     edx, edx
 * 00000001800C6661: lea     rcx, [rsp+0A060h+var_9FFF]
 * 00000001800C6666: call    sub_1800A8E58
 * 00000001800C666B: mov     bl, [rax]
 * 00000001800C666D: call    sub_1800C4FFC
 * 00000001800C6672: mov     rdx, rax
 * 00000001800C6675: mov     r8d, 658Ch
 * 00000001800C667B: lea     rcx, [rbp+9F60h+var_9DD0]
 * 00000001800C6682: call    sub_1800A8E40
 * 00000001800C6687: movups  xmm0, xmmword ptr [rax]
 * 00000001800C668A: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C6690: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C6694: mov     r9d, r12d
 * 00000001800C6697: mov     r8d, 5
 * 00000001800C669D: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C66A2: lea     rcx, [rbp+9F60h+var_67B0]
 * 00000001800C66A9: call    sub_1800A8E0C
 * 00000001800C66AE: movups  xmm6, xmmword ptr [rax]
 * 00000001800C66B1: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C66B5: call    sub_1800C50FC
 * 00000001800C66BA: mov     r8, rax
 * 00000001800C66BD: mov     r9d, r13d
 * 00000001800C66C0: mov     edx, 28h ; '('
 * 00000001800C66C5: lea     rcx, [rbp+9F60h+var_3230]; Src
 * 00000001800C66CC: call    sub_180088448
 * 00000001800C66D1: nop
 * 00000001800C66D2: mov     r8, rax
 * 00000001800C66D5: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C66DC: lea     rcx, [rbp+9F60h+var_31D0]
 * 00000001800C66E3: call    sub_18001DD3C
 * 00000001800C66E8: nop
 * 00000001800C66E9: lea     r8, aPixel; "/Pixel"
 * 00000001800C66F0: mov     rdx, rax
 * 00000001800C66F3: lea     rcx, [rbp+9F60h+var_8690]
 * 00000001800C66FA: call    sub_18001DC84
 * 00000001800C66FF: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C6704: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C6709: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C670E: mov     rcx, rax
 * 00000001800C6711: call    sub_180088528
 * 00000001800C6716: nop
 * 00000001800C6717: lea     rcx, [rbp+9F60h+var_31D0]
 * 00000001800C671E: call    sub_180011570
 * 00000001800C6723: nop
 * 00000001800C6724: lea     rcx, [rbp+9F60h+var_3230]
 * 00000001800C672B: call    sub_180011570
 * 00000001800C6730: nop
 * 00000001800C6731: lea     rcx, dword_1801FB1FC
 * 00000001800C6738: call    sub_18000C548
 * 00000001800C673D: mov     rax, [rsi+rdi*8]
 * 00000001800C6741: mov     eax, [r15+rax]
 * 00000001800C6745: cmp     cs:dword_1801FB200, eax
 * 00000001800C674B: jle     loc_1800C6848
 * 00000001800C6751: lea     rcx, dword_1801FB200
 * 00000001800C6758: call    sub_18000C5B0
 * 00000001800C675D: cmp     cs:dword_1801FB200, r14d
 * 00000001800C6764: jnz     loc_1800C6848
 * 00000001800C676A: xor     edx, edx
 * 00000001800C676C: lea     rcx, [rsp+0A060h+var_9FFE]
 * 00000001800C6771: call    sub_1800A8E58
 * 00000001800C6776: mov     bl, [rax]
 * 00000001800C6778: call    sub_1800C500C
 * 00000001800C677D: mov     rdx, rax
 * 00000001800C6780: mov     r8d, 10C8h
 * 00000001800C6786: lea     rcx, [rbp+9F60h+var_9DC0]
 * 00000001800C678D: call    sub_1800A8E40
 * 00000001800C6792: movups  xmm0, xmmword ptr [rax]
 * 00000001800C6795: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C679B: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C679F: mov     r9d, r12d
 * 00000001800C67A2: mov     r8d, 5
 * 00000001800C67A8: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C67AD: lea     rcx, [rbp+9F60h+var_6790]
 * 00000001800C67B4: call    sub_1800A8E0C
 * 00000001800C67B9: movups  xmm6, xmmword ptr [rax]
 * 00000001800C67BC: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C67C0: call    sub_1800C50FC
 * 00000001800C67C5: mov     r8, rax
 * 00000001800C67C8: mov     r9d, r13d
 * 00000001800C67CB: mov     edx, 29h ; ')'
 * 00000001800C67D0: lea     rcx, [rbp+9F60h+var_32F0]; Src
 * 00000001800C67D7: call    sub_180088448
 * 00000001800C67DC: nop
 * 00000001800C67DD: mov     r8, rax
 * 00000001800C67E0: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C67E7: lea     rcx, [rbp+9F60h+var_3290]
 * 00000001800C67EE: call    sub_18001DD3C
 * 00000001800C67F3: nop
 * 00000001800C67F4: lea     r8, aPixel; "/Pixel"
 * 00000001800C67FB: mov     rdx, rax
 * 00000001800C67FE: lea     rcx, [rbp+9F60h+var_8630]
 * 00000001800C6805: call    sub_18001DC84
 * 00000001800C680A: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C680F: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C6814: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C6819: mov     rcx, rax
 * 00000001800C681C: call    sub_180088528
 * 00000001800C6821: nop
 * 00000001800C6822: lea     rcx, [rbp+9F60h+var_3290]
 * 00000001800C6829: call    sub_180011570
 * 00000001800C682E: nop
 * 00000001800C682F: lea     rcx, [rbp+9F60h+var_32F0]
 * 00000001800C6836: call    sub_180011570
 * 00000001800C683B: nop
 * 00000001800C683C: lea     rcx, dword_1801FB200
 * 00000001800C6843: call    sub_18000C548
 * 00000001800C6848: mov     rax, [rsi+rdi*8]
 * 00000001800C684C: mov     eax, [r15+rax]
 * 00000001800C6850: cmp     cs:dword_1801FB204, eax
 * 00000001800C6856: jle     loc_1800C6953
 * 00000001800C685C: lea     rcx, dword_1801FB204
 * 00000001800C6863: call    sub_18000C5B0
 * 00000001800C6868: cmp     cs:dword_1801FB204, r14d
 * 00000001800C686F: jnz     loc_1800C6953
 * 00000001800C6875: xor     edx, edx
 * 00000001800C6877: lea     rcx, [rsp+0A060h+var_9FFD]
 * 00000001800C687C: call    sub_1800A8E58
 * 00000001800C6881: mov     bl, [rax]
 * 00000001800C6883: call    sub_1800C4FFC
 * 00000001800C6888: mov     rdx, rax
 * 00000001800C688B: mov     r8d, 658Ch
 * 00000001800C6891: lea     rcx, [rbp+9F60h+var_9DB0]
 * 00000001800C6898: call    sub_1800A8E40
 * 00000001800C689D: movups  xmm0, xmmword ptr [rax]
 * 00000001800C68A0: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C68A6: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C68AA: mov     r9d, r12d
 * 00000001800C68AD: mov     r8d, 5
 * 00000001800C68B3: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C68B8: lea     rcx, [rbp+9F60h+var_6770]
 * 00000001800C68BF: call    sub_1800A8E0C
 * 00000001800C68C4: movups  xmm6, xmmword ptr [rax]
 * 00000001800C68C7: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C68CB: call    sub_1800C50FC
 * 00000001800C68D0: mov     r8, rax
 * 00000001800C68D3: mov     r9d, r13d
 * 00000001800C68D6: mov     edx, 2Ah ; '*'
 * 00000001800C68DB: lea     rcx, [rbp+9F60h+var_33B0]; Src
 * 00000001800C68E2: call    sub_180088448
 * 00000001800C68E7: nop
 * 00000001800C68E8: mov     r8, rax
 * 00000001800C68EB: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C68F2: lea     rcx, [rbp+9F60h+var_3350]
 * 00000001800C68F9: call    sub_18001DD3C
 * 00000001800C68FE: nop
 * 00000001800C68FF: lea     r8, aPixel; "/Pixel"
 * 00000001800C6906: mov     rdx, rax
 * 00000001800C6909: lea     rcx, [rbp+9F60h+var_85D0]
 * 00000001800C6910: call    sub_18001DC84
 * 00000001800C6915: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C691A: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C691F: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C6924: mov     rcx, rax
 * 00000001800C6927: call    sub_180088528
 * 00000001800C692C: nop
 * 00000001800C692D: lea     rcx, [rbp+9F60h+var_3350]
 * 00000001800C6934: call    sub_180011570
 * 00000001800C6939: nop
 * 00000001800C693A: lea     rcx, [rbp+9F60h+var_33B0]
 * 00000001800C6941: call    sub_180011570
 * 00000001800C6946: nop
 * 00000001800C6947: lea     rcx, dword_1801FB204
 * 00000001800C694E: call    sub_18000C548
 * 00000001800C6953: mov     rax, [rsi+rdi*8]
 * 00000001800C6957: mov     eax, [r15+rax]
 * 00000001800C695B: cmp     cs:dword_1801FB208, eax
 * 00000001800C6961: jle     loc_1800C6A5E
 * 00000001800C6967: lea     rcx, dword_1801FB208
 * 00000001800C696E: call    sub_18000C5B0
 * 00000001800C6973: cmp     cs:dword_1801FB208, r14d
 * 00000001800C697A: jnz     loc_1800C6A5E
 * 00000001800C6980: xor     edx, edx
 * 00000001800C6982: lea     rcx, [rsp+0A060h+var_9FFC]
 * 00000001800C6987: call    sub_1800A8E58
 * 00000001800C698C: mov     bl, [rax]
 * 00000001800C698E: call    sub_1800C502C
 * 00000001800C6993: mov     rdx, rax
 * 00000001800C6996: mov     r8d, 65B8h
 * 00000001800C699C: lea     rcx, [rbp+9F60h+var_9DA0]
 * 00000001800C69A3: call    sub_1800A8E40
 * 00000001800C69A8: movups  xmm0, xmmword ptr [rax]
 * 00000001800C69AB: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C69B1: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C69B5: mov     r9d, r12d
 * 00000001800C69B8: mov     r8d, 5
 * 00000001800C69BE: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C69C3: lea     rcx, [rbp+9F60h+var_6750]
 * 00000001800C69CA: call    sub_1800A8E0C
 * 00000001800C69CF: movups  xmm6, xmmword ptr [rax]
 * 00000001800C69D2: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C69D6: call    sub_1800C50FC
 * 00000001800C69DB: mov     r8, rax
 * 00000001800C69DE: mov     r9d, r13d
 * 00000001800C69E1: mov     edx, 30h ; '0'
 * 00000001800C69E6: lea     rcx, [rbp+9F60h+var_3470]; Src
 * 00000001800C69ED: call    sub_180088448
 * 00000001800C69F2: nop
 * 00000001800C69F3: mov     r8, rax
 * 00000001800C69F6: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C69FD: lea     rcx, [rbp+9F60h+var_3410]
 * 00000001800C6A04: call    sub_18001DD3C
 * 00000001800C6A09: nop
 * 00000001800C6A0A: lea     r8, aPixel; "/Pixel"
 * 00000001800C6A11: mov     rdx, rax
 * 00000001800C6A14: lea     rcx, [rbp+9F60h+var_8570]
 * 00000001800C6A1B: call    sub_18001DC84
 * 00000001800C6A20: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C6A25: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C6A2A: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C6A2F: mov     rcx, rax
 * 00000001800C6A32: call    sub_180088528
 * 00000001800C6A37: nop
 * 00000001800C6A38: lea     rcx, [rbp+9F60h+var_3410]
 * 00000001800C6A3F: call    sub_180011570
 * 00000001800C6A44: nop
 * 00000001800C6A45: lea     rcx, [rbp+9F60h+var_3470]
 * 00000001800C6A4C: call    sub_180011570
 * 00000001800C6A51: nop
 * 00000001800C6A52: lea     rcx, dword_1801FB208
 * 00000001800C6A59: call    sub_18000C548
 * 00000001800C6A5E: mov     rax, [rsi+rdi*8]
 * 00000001800C6A62: mov     eax, [r15+rax]
 * 00000001800C6A66: cmp     cs:dword_1801FB20C, eax
 * 00000001800C6A6C: jle     loc_1800C6B69
 * 00000001800C6A72: lea     rcx, dword_1801FB20C
 * 00000001800C6A79: call    sub_18000C5B0
 * 00000001800C6A7E: cmp     cs:dword_1801FB20C, r14d
 * 00000001800C6A85: jnz     loc_1800C6B69
 * 00000001800C6A8B: xor     edx, edx
 * 00000001800C6A8D: lea     rcx, [rsp+0A060h+var_9FFB]
 * 00000001800C6A92: call    sub_1800A8E58
 * 00000001800C6A97: mov     bl, [rax]
 * 00000001800C6A99: call    sub_1800C502C
 * 00000001800C6A9E: mov     rdx, rax
 * 00000001800C6AA1: mov     r8d, 65B8h
 * 00000001800C6AA7: lea     rcx, [rbp+9F60h+var_9D90]
 * 00000001800C6AAE: call    sub_1800A8E40
 * 00000001800C6AB3: movups  xmm0, xmmword ptr [rax]
 * 00000001800C6AB6: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C6ABC: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C6AC0: mov     r9d, r12d
 * 00000001800C6AC3: mov     r8d, 5
 * 00000001800C6AC9: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C6ACE: lea     rcx, [rbp+9F60h+var_6730]
 * 00000001800C6AD5: call    sub_1800A8E0C
 * 00000001800C6ADA: movups  xmm6, xmmword ptr [rax]
 * 00000001800C6ADD: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C6AE1: call    sub_1800C50FC
 * 00000001800C6AE6: mov     r8, rax
 * 00000001800C6AE9: mov     r9d, r13d
 * 00000001800C6AEC: mov     edx, 32h ; '2'
 * 00000001800C6AF1: lea     rcx, [rbp+9F60h+var_3530]; Src
 * 00000001800C6AF8: call    sub_180088448
 * 00000001800C6AFD: nop
 * 00000001800C6AFE: mov     r8, rax
 * 00000001800C6B01: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C6B08: lea     rcx, [rbp+9F60h+var_34D0]
 * 00000001800C6B0F: call    sub_18001DD3C
 * 00000001800C6B14: nop
 * 00000001800C6B15: lea     r8, aPixel; "/Pixel"
 * 00000001800C6B1C: mov     rdx, rax
 * 00000001800C6B1F: lea     rcx, [rbp+9F60h+var_8510]
 * 00000001800C6B26: call    sub_18001DC84
 * 00000001800C6B2B: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C6B30: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C6B35: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C6B3A: mov     rcx, rax
 * 00000001800C6B3D: call    sub_180088528
 * 00000001800C6B42: nop
 * 00000001800C6B43: lea     rcx, [rbp+9F60h+var_34D0]
 * 00000001800C6B4A: call    sub_180011570
 * 00000001800C6B4F: nop
 * 00000001800C6B50: lea     rcx, [rbp+9F60h+var_3530]
 * 00000001800C6B57: call    sub_180011570
 * 00000001800C6B5C: nop
 * 00000001800C6B5D: lea     rcx, dword_1801FB20C
 * 00000001800C6B64: call    sub_18000C548
 * 00000001800C6B69: mov     rax, [rsi+rdi*8]
 * 00000001800C6B6D: mov     eax, [r15+rax]
 * 00000001800C6B71: cmp     cs:dword_1801FB210, eax
 * 00000001800C6B77: jle     loc_1800C6C74
 * 00000001800C6B7D: lea     rcx, dword_1801FB210
 * 00000001800C6B84: call    sub_18000C5B0
 * 00000001800C6B89: cmp     cs:dword_1801FB210, r14d
 * 00000001800C6B90: jnz     loc_1800C6C74
 * 00000001800C6B96: xor     edx, edx
 * 00000001800C6B98: lea     rcx, [rsp+0A060h+var_9FFA]
 * 00000001800C6B9D: call    sub_1800A8E58
 * 00000001800C6BA2: mov     bl, [rax]
 * 00000001800C6BA4: call    sub_1800C504C
 * 00000001800C6BA9: mov     rdx, rax
 * 00000001800C6BAC: mov     r8d, 678Ch
 * 00000001800C6BB2: lea     rcx, [rbp+9F60h+var_9D80]
 * 00000001800C6BB9: call    sub_1800A8E40
 * 00000001800C6BBE: movups  xmm0, xmmword ptr [rax]
 * 00000001800C6BC1: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C6BC7: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C6BCB: mov     r9d, r12d
 * 00000001800C6BCE: mov     r8d, 5
 * 00000001800C6BD4: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C6BD9: lea     rcx, [rbp+9F60h+var_6710]
 * 00000001800C6BE0: call    sub_1800A8E0C
 * 00000001800C6BE5: movups  xmm6, xmmword ptr [rax]
 * 00000001800C6BE8: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C6BEC: call    sub_1800C50FC
 * 00000001800C6BF1: mov     r8, rax
 * 00000001800C6BF4: mov     r9d, r13d
 * 00000001800C6BF7: mov     edx, 38h ; '8'
 * 00000001800C6BFC: lea     rcx, [rbp+9F60h+var_3590]; Src
 * 00000001800C6C03: call    sub_180088448
 * 00000001800C6C08: nop
 * 00000001800C6C09: mov     r8, rax
 * 00000001800C6C0C: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C6C13: lea     rcx, [rbp+9F60h+var_1AD0]
 * 00000001800C6C1A: call    sub_18001DD3C
 * 00000001800C6C1F: nop
 * 00000001800C6C20: lea     r8, aPixel; "/Pixel"
 * 00000001800C6C27: mov     rdx, rax
 * 00000001800C6C2A: lea     rcx, [rbp+9F60h+var_84B0]
 * 00000001800C6C31: call    sub_18001DC84
 * 00000001800C6C36: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C6C3B: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C6C40: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C6C45: mov     rcx, rax
 * 00000001800C6C48: call    sub_180088528
 * 00000001800C6C4D: nop
 * 00000001800C6C4E: lea     rcx, [rbp+9F60h+var_1AD0]
 * 00000001800C6C55: call    sub_180011570
 * 00000001800C6C5A: nop
 * 00000001800C6C5B: lea     rcx, [rbp+9F60h+var_3590]
 * 00000001800C6C62: call    sub_180011570
 * 00000001800C6C67: nop
 * 00000001800C6C68: lea     rcx, dword_1801FB210
 * 00000001800C6C6F: call    sub_18000C548
 * 00000001800C6C74: mov     rax, [rsi+rdi*8]
 * 00000001800C6C78: mov     eax, [r15+rax]
 * 00000001800C6C7C: cmp     cs:dword_1801FB214, eax
 * 00000001800C6C82: jle     loc_1800C6D7F
 * 00000001800C6C88: lea     rcx, dword_1801FB214
 * 00000001800C6C8F: call    sub_18000C5B0
 * 00000001800C6C94: cmp     cs:dword_1801FB214, r14d
 * 00000001800C6C9B: jnz     loc_1800C6D7F
 * 00000001800C6CA1: xor     edx, edx
 * 00000001800C6CA3: lea     rcx, [rsp+0A060h+var_9FF9]
 * 00000001800C6CA8: call    sub_1800A8E58
 * 00000001800C6CAD: mov     bl, [rax]
 * 00000001800C6CAF: call    sub_1800C504C
 * 00000001800C6CB4: mov     rdx, rax
 * 00000001800C6CB7: mov     r8d, 678Ch
 * 00000001800C6CBD: lea     rcx, [rbp+9F60h+var_9D70]
 * 00000001800C6CC4: call    sub_1800A8E40
 * 00000001800C6CC9: movups  xmm0, xmmword ptr [rax]
 * 00000001800C6CCC: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C6CD2: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C6CD6: mov     r9d, r12d
 * 00000001800C6CD9: mov     r8d, 5
 * 00000001800C6CDF: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C6CE4: lea     rcx, [rbp+9F60h+var_66F0]
 * 00000001800C6CEB: call    sub_1800A8E0C
 * 00000001800C6CF0: movups  xmm6, xmmword ptr [rax]
 * 00000001800C6CF3: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C6CF7: call    sub_1800C50FC
 * 00000001800C6CFC: mov     r8, rax
 * 00000001800C6CFF: mov     r9d, r13d
 * 00000001800C6D02: mov     edx, 3Ah ; ':'
 * 00000001800C6D07: lea     rcx, [rbp+9F60h+var_3650]; Src
 * 00000001800C6D0E: call    sub_180088448
 * 00000001800C6D13: nop
 * 00000001800C6D14: mov     r8, rax
 * 00000001800C6D17: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C6D1E: lea     rcx, [rbp+9F60h+var_35F0]
 * 00000001800C6D25: call    sub_18001DD3C
 * 00000001800C6D2A: nop
 * 00000001800C6D2B: lea     r8, aPixel; "/Pixel"
 * 00000001800C6D32: mov     rdx, rax
 * 00000001800C6D35: lea     rcx, [rbp+9F60h+var_8450]
 * 00000001800C6D3C: call    sub_18001DC84
 * 00000001800C6D41: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C6D46: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C6D4B: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C6D50: mov     rcx, rax
 * 00000001800C6D53: call    sub_180088528
 * 00000001800C6D58: nop
 * 00000001800C6D59: lea     rcx, [rbp+9F60h+var_35F0]
 * 00000001800C6D60: call    sub_180011570
 * 00000001800C6D65: nop
 * 00000001800C6D66: lea     rcx, [rbp+9F60h+var_3650]
 * 00000001800C6D6D: call    sub_180011570
 * 00000001800C6D72: nop
 * 00000001800C6D73: lea     rcx, dword_1801FB214
 * 00000001800C6D7A: call    sub_18000C548
 * 00000001800C6D7F: mov     rax, [rsi+rdi*8]
 * 00000001800C6D83: mov     eax, [r15+rax]
 * 00000001800C6D87: cmp     cs:dword_1801FB218, eax
 * 00000001800C6D8D: jle     loc_1800C6E8A
 * 00000001800C6D93: lea     rcx, dword_1801FB218
 * 00000001800C6D9A: call    sub_18000C5B0
 * 00000001800C6D9F: cmp     cs:dword_1801FB218, r14d
 * 00000001800C6DA6: jnz     loc_1800C6E8A
 * 00000001800C6DAC: xor     edx, edx
 * 00000001800C6DAE: lea     rcx, [rsp+0A060h+var_9FF8]
 * 00000001800C6DB3: call    sub_1800A8E58
 * 00000001800C6DB8: mov     bl, [rax]
 * 00000001800C6DBA: call    sub_1800C4FBC
 * 00000001800C6DBF: mov     rdx, rax
 * 00000001800C6DC2: mov     r8d, 63E4h
 * 00000001800C6DC8: lea     rcx, [rbp+9F60h+var_9D60]
 * 00000001800C6DCF: call    sub_1800A8E40
 * 00000001800C6DD4: movups  xmm0, xmmword ptr [rax]
 * 00000001800C6DD7: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C6DDD: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C6DE1: mov     r9d, r12d
 * 00000001800C6DE4: mov     r8d, 5
 * 00000001800C6DEA: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C6DEF: lea     rcx, [rbp+9F60h+var_66D0]
 * 00000001800C6DF6: call    sub_1800A8E0C
 * 00000001800C6DFB: movups  xmm6, xmmword ptr [rax]
 * 00000001800C6DFE: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C6E02: call    sub_1800C50FC
 * 00000001800C6E07: mov     r8, rax
 * 00000001800C6E0A: mov     r9d, r13d
 * 00000001800C6E0D: mov     edx, 40h ; '@'
 * 00000001800C6E12: lea     rcx, [rbp+9F60h+var_3710]; Src
 * 00000001800C6E19: call    sub_180088448
 * 00000001800C6E1E: nop
 * 00000001800C6E1F: mov     r8, rax
 * 00000001800C6E22: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C6E29: lea     rcx, [rbp+9F60h+var_36B0]
 * 00000001800C6E30: call    sub_18001DD3C
 * 00000001800C6E35: nop
 * 00000001800C6E36: lea     r8, aPixel; "/Pixel"
 * 00000001800C6E3D: mov     rdx, rax
 * 00000001800C6E40: lea     rcx, [rbp+9F60h+var_83F0]
 * 00000001800C6E47: call    sub_18001DC84
 * 00000001800C6E4C: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C6E51: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C6E56: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C6E5B: mov     rcx, rax
 * 00000001800C6E5E: call    sub_180088528
 * 00000001800C6E63: nop
 * 00000001800C6E64: lea     rcx, [rbp+9F60h+var_36B0]
 * 00000001800C6E6B: call    sub_180011570
 * 00000001800C6E70: nop
 * 00000001800C6E71: lea     rcx, [rbp+9F60h+var_3710]
 * 00000001800C6E78: call    sub_180011570
 * 00000001800C6E7D: nop
 * 00000001800C6E7E: lea     rcx, dword_1801FB218
 * 00000001800C6E85: call    sub_18000C548
 * 00000001800C6E8A: mov     rax, [rsi+rdi*8]
 * 00000001800C6E8E: mov     eax, [r15+rax]
 * 00000001800C6E92: cmp     cs:dword_1801FB21C, eax
 * 00000001800C6E98: jle     loc_1800C6F95
 * 00000001800C6E9E: lea     rcx, dword_1801FB21C
 * 00000001800C6EA5: call    sub_18000C5B0
 * 00000001800C6EAA: cmp     cs:dword_1801FB21C, r14d
 * 00000001800C6EB1: jnz     loc_1800C6F95
 * 00000001800C6EB7: xor     edx, edx
 * 00000001800C6EB9: lea     rcx, [rsp+0A060h+var_9FF7]
 * 00000001800C6EBE: call    sub_1800A8E58
 * 00000001800C6EC3: mov     bl, [rax]
 * 00000001800C6EC5: call    sub_1800C4FBC
 * 00000001800C6ECA: mov     rdx, rax
 * 00000001800C6ECD: mov     r8d, 63E4h
 * 00000001800C6ED3: lea     rcx, [rbp+9F60h+var_9D50]
 * 00000001800C6EDA: call    sub_1800A8E40
 * 00000001800C6EDF: movups  xmm0, xmmword ptr [rax]
 * 00000001800C6EE2: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C6EE8: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C6EEC: mov     r9d, r12d
 * 00000001800C6EEF: mov     r8d, 5
 * 00000001800C6EF5: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C6EFA: lea     rcx, [rbp+9F60h+var_66B0]
 * 00000001800C6F01: call    sub_1800A8E0C
 * 00000001800C6F06: movups  xmm6, xmmword ptr [rax]
 * 00000001800C6F09: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C6F0D: call    sub_1800C50FC
 * 00000001800C6F12: mov     r8, rax
 * 00000001800C6F15: mov     r9d, r13d
 * 00000001800C6F18: mov     edx, 42h ; 'B'
 * 00000001800C6F1D: lea     rcx, [rbp+9F60h+var_37D0]; Src
 * 00000001800C6F24: call    sub_180088448
 * 00000001800C6F29: nop
 * 00000001800C6F2A: mov     r8, rax
 * 00000001800C6F2D: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C6F34: lea     rcx, [rbp+9F60h+var_3770]
 * 00000001800C6F3B: call    sub_18001DD3C
 * 00000001800C6F40: nop
 * 00000001800C6F41: lea     r8, aPixel; "/Pixel"
 * 00000001800C6F48: mov     rdx, rax
 * 00000001800C6F4B: lea     rcx, [rbp+9F60h+var_8390]
 * 00000001800C6F52: call    sub_18001DC84
 * 00000001800C6F57: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C6F5C: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C6F61: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C6F66: mov     rcx, rax
 * 00000001800C6F69: call    sub_180088528
 * 00000001800C6F6E: nop
 * 00000001800C6F6F: lea     rcx, [rbp+9F60h+var_3770]
 * 00000001800C6F76: call    sub_180011570
 * 00000001800C6F7B: nop
 * 00000001800C6F7C: lea     rcx, [rbp+9F60h+var_37D0]
 * 00000001800C6F83: call    sub_180011570
 * 00000001800C6F88: nop
 * 00000001800C6F89: lea     rcx, dword_1801FB21C
 * 00000001800C6F90: call    sub_18000C548
 * 00000001800C6F95: mov     rax, [rsi+rdi*8]
 * 00000001800C6F99: mov     eax, [r15+rax]
 * 00000001800C6F9D: cmp     cs:dword_1801FB220, eax
 * 00000001800C6FA3: jle     loc_1800C70A0
 * 00000001800C6FA9: lea     rcx, dword_1801FB220
 * 00000001800C6FB0: call    sub_18000C5B0
 * 00000001800C6FB5: cmp     cs:dword_1801FB220, r14d
 * 00000001800C6FBC: jnz     loc_1800C70A0
 * 00000001800C6FC2: xor     edx, edx
 * 00000001800C6FC4: lea     rcx, [rsp+0A060h+var_9FF6]
 * 00000001800C6FC9: call    sub_1800A8E58
 * 00000001800C6FCE: mov     bl, [rax]
 * 00000001800C6FD0: call    sub_1800C4FFC
 * 00000001800C6FD5: mov     rdx, rax
 * 00000001800C6FD8: mov     r8d, 658Ch
 * 00000001800C6FDE: lea     rcx, [rbp+9F60h+var_9D40]
 * 00000001800C6FE5: call    sub_1800A8E40
 * 00000001800C6FEA: movups  xmm0, xmmword ptr [rax]
 * 00000001800C6FED: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C6FF3: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C6FF7: mov     r9d, r12d
 * 00000001800C6FFA: mov     r8d, 5
 * 00000001800C7000: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C7005: lea     rcx, [rbp+9F60h+var_6690]
 * 00000001800C700C: call    sub_1800A8E0C
 * 00000001800C7011: movups  xmm6, xmmword ptr [rax]
 * 00000001800C7014: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C7018: call    sub_1800C50FC
 * 00000001800C701D: mov     r8, rax
 * 00000001800C7020: mov     r9d, r13d
 * 00000001800C7023: mov     edx, 48h ; 'H'
 * 00000001800C7028: lea     rcx, [rbp+9F60h+var_3890]; Src
 * 00000001800C702F: call    sub_180088448
 * 00000001800C7034: nop
 * 00000001800C7035: mov     r8, rax
 * 00000001800C7038: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C703F: lea     rcx, [rbp+9F60h+var_3830]
 * 00000001800C7046: call    sub_18001DD3C
 * 00000001800C704B: nop
 * 00000001800C704C: lea     r8, aPixel; "/Pixel"
 * 00000001800C7053: mov     rdx, rax
 * 00000001800C7056: lea     rcx, [rbp+9F60h+var_8330]
 * 00000001800C705D: call    sub_18001DC84
 * 00000001800C7062: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C7067: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C706C: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C7071: mov     rcx, rax
 * 00000001800C7074: call    sub_180088528
 * 00000001800C7079: nop
 * 00000001800C707A: lea     rcx, [rbp+9F60h+var_3830]
 * 00000001800C7081: call    sub_180011570
 * 00000001800C7086: nop
 * 00000001800C7087: lea     rcx, [rbp+9F60h+var_3890]
 * 00000001800C708E: call    sub_180011570
 * 00000001800C7093: nop
 * 00000001800C7094: lea     rcx, dword_1801FB220
 * 00000001800C709B: call    sub_18000C548
 * 00000001800C70A0: mov     rax, [rsi+rdi*8]
 * 00000001800C70A4: mov     eax, [r15+rax]
 * 00000001800C70A8: cmp     cs:dword_1801FB224, eax
 * 00000001800C70AE: jle     loc_1800C71AB
 * 00000001800C70B4: lea     rcx, dword_1801FB224
 * 00000001800C70BB: call    sub_18000C5B0
 * 00000001800C70C0: cmp     cs:dword_1801FB224, r14d
 * 00000001800C70C7: jnz     loc_1800C71AB
 * 00000001800C70CD: xor     edx, edx
 * 00000001800C70CF: lea     rcx, [rsp+0A060h+var_9FF5]
 * 00000001800C70D4: call    sub_1800A8E58
 * 00000001800C70D9: mov     bl, [rax]
 * 00000001800C70DB: call    sub_1800C4FFC
 * 00000001800C70E0: mov     rdx, rax
 * 00000001800C70E3: mov     r8d, 658Ch
 * 00000001800C70E9: lea     rcx, [rbp+9F60h+var_9D30]
 * 00000001800C70F0: call    sub_1800A8E40
 * 00000001800C70F5: movups  xmm0, xmmword ptr [rax]
 * 00000001800C70F8: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C70FE: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C7102: mov     r9d, r12d
 * 00000001800C7105: mov     r8d, 5
 * 00000001800C710B: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C7110: lea     rcx, [rbp+9F60h+var_6670]
 * 00000001800C7117: call    sub_1800A8E0C
 * 00000001800C711C: movups  xmm6, xmmword ptr [rax]
 * 00000001800C711F: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C7123: call    sub_1800C50FC
 * 00000001800C7128: mov     r8, rax
 * 00000001800C712B: mov     r9d, r13d
 * 00000001800C712E: mov     edx, 4Ah ; 'J'
 * 00000001800C7133: lea     rcx, [rbp+9F60h+var_3950]; Src
 * 00000001800C713A: call    sub_180088448
 * 00000001800C713F: nop
 * 00000001800C7140: mov     r8, rax
 * 00000001800C7143: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C714A: lea     rcx, [rbp+9F60h+var_38F0]
 * 00000001800C7151: call    sub_18001DD3C
 * 00000001800C7156: nop
 * 00000001800C7157: lea     r8, aPixel; "/Pixel"
 * 00000001800C715E: mov     rdx, rax
 * 00000001800C7161: lea     rcx, [rbp+9F60h+var_82D0]
 * 00000001800C7168: call    sub_18001DC84
 * 00000001800C716D: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C7172: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C7177: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C717C: mov     rcx, rax
 * 00000001800C717F: call    sub_180088528
 * 00000001800C7184: nop
 * 00000001800C7185: lea     rcx, [rbp+9F60h+var_38F0]
 * 00000001800C718C: call    sub_180011570
 * 00000001800C7191: nop
 * 00000001800C7192: lea     rcx, [rbp+9F60h+var_3950]
 * 00000001800C7199: call    sub_180011570
 * 00000001800C719E: nop
 * 00000001800C719F: lea     rcx, dword_1801FB224
 * 00000001800C71A6: call    sub_18000C548
 * 00000001800C71AB: mov     rax, [rsi+rdi*8]
 * 00000001800C71AF: mov     eax, [r15+rax]
 * 00000001800C71B3: cmp     cs:dword_1801FB228, eax
 * 00000001800C71B9: jle     loc_1800C72B6
 * 00000001800C71BF: lea     rcx, dword_1801FB228
 * 00000001800C71C6: call    sub_18000C5B0
 * 00000001800C71CB: cmp     cs:dword_1801FB228, r14d
 * 00000001800C71D2: jnz     loc_1800C72B6
 * 00000001800C71D8: xor     edx, edx
 * 00000001800C71DA: lea     rcx, [rsp+0A060h+var_9FF4]
 * 00000001800C71DF: call    sub_1800A8E58
 * 00000001800C71E4: mov     bl, [rax]
 * 00000001800C71E6: call    sub_1800C502C
 * 00000001800C71EB: mov     rdx, rax
 * 00000001800C71EE: mov     r8d, 65B8h
 * 00000001800C71F4: lea     rcx, [rbp+9F60h+var_9D20]
 * 00000001800C71FB: call    sub_1800A8E40
 * 00000001800C7200: movups  xmm0, xmmword ptr [rax]
 * 00000001800C7203: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C7209: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C720D: mov     r9d, r12d
 * 00000001800C7210: mov     r8d, 5
 * 00000001800C7216: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C721B: lea     rcx, [rbp+9F60h+var_6650]
 * 00000001800C7222: call    sub_1800A8E0C
 * 00000001800C7227: movups  xmm6, xmmword ptr [rax]
 * 00000001800C722A: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C722E: call    sub_1800C50FC
 * 00000001800C7233: mov     r8, rax
 * 00000001800C7236: mov     r9d, r13d
 * 00000001800C7239: mov     edx, 50h ; 'P'
 * 00000001800C723E: lea     rcx, [rbp+9F60h+var_3A10]; Src
 * 00000001800C7245: call    sub_180088448
 * 00000001800C724A: nop
 * 00000001800C724B: mov     r8, rax
 * 00000001800C724E: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C7255: lea     rcx, [rbp+9F60h+var_39B0]
 * 00000001800C725C: call    sub_18001DD3C
 * 00000001800C7261: nop
 * 00000001800C7262: lea     r8, aPixel; "/Pixel"
 * 00000001800C7269: mov     rdx, rax
 * 00000001800C726C: lea     rcx, [rbp+9F60h+var_8270]
 * 00000001800C7273: call    sub_18001DC84
 * 00000001800C7278: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C727D: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C7282: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C7287: mov     rcx, rax
 * 00000001800C728A: call    sub_180088528
 * 00000001800C728F: nop
 * 00000001800C7290: lea     rcx, [rbp+9F60h+var_39B0]
 * 00000001800C7297: call    sub_180011570
 * 00000001800C729C: nop
 * 00000001800C729D: lea     rcx, [rbp+9F60h+var_3A10]
 * 00000001800C72A4: call    sub_180011570
 * 00000001800C72A9: nop
 * 00000001800C72AA: lea     rcx, dword_1801FB228
 * 00000001800C72B1: call    sub_18000C548
 * 00000001800C72B6: mov     rax, [rsi+rdi*8]
 * 00000001800C72BA: mov     eax, [r15+rax]
 * 00000001800C72BE: cmp     cs:dword_1801FB22C, eax
 * 00000001800C72C4: jle     loc_1800C73C1
 * 00000001800C72CA: lea     rcx, dword_1801FB22C
 * 00000001800C72D1: call    sub_18000C5B0
 * 00000001800C72D6: cmp     cs:dword_1801FB22C, r14d
 * 00000001800C72DD: jnz     loc_1800C73C1
 * 00000001800C72E3: xor     edx, edx
 * 00000001800C72E5: lea     rcx, [rsp+0A060h+var_9FF3]
 * 00000001800C72EA: call    sub_1800A8E58
 * 00000001800C72EF: mov     bl, [rax]
 * 00000001800C72F1: call    sub_1800C502C
 * 00000001800C72F6: mov     rdx, rax
 * 00000001800C72F9: mov     r8d, 65B8h
 * 00000001800C72FF: lea     rcx, [rbp+9F60h+var_9D10]
 * 00000001800C7306: call    sub_1800A8E40
 * 00000001800C730B: movups  xmm0, xmmword ptr [rax]
 * 00000001800C730E: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C7314: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C7318: mov     r9d, r12d
 * 00000001800C731B: mov     r8d, 5
 * 00000001800C7321: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C7326: lea     rcx, [rbp+9F60h+var_6630]
 * 00000001800C732D: call    sub_1800A8E0C
 * 00000001800C7332: movups  xmm6, xmmword ptr [rax]
 * 00000001800C7335: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C7339: call    sub_1800C50FC
 * 00000001800C733E: mov     r8, rax
 * 00000001800C7341: mov     r9d, r13d
 * 00000001800C7344: mov     edx, 52h ; 'R'
 * 00000001800C7349: lea     rcx, [rbp+9F60h+var_3AD0]; Src
 * 00000001800C7350: call    sub_180088448
 * 00000001800C7355: nop
 * 00000001800C7356: mov     r8, rax
 * 00000001800C7359: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C7360: lea     rcx, [rbp+9F60h+var_3A70]
 * 00000001800C7367: call    sub_18001DD3C
 * 00000001800C736C: nop
 * 00000001800C736D: lea     r8, aPixel; "/Pixel"
 * 00000001800C7374: mov     rdx, rax
 * 00000001800C7377: lea     rcx, [rbp+9F60h+var_8210]
 * 00000001800C737E: call    sub_18001DC84
 * 00000001800C7383: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C7388: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C738D: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C7392: mov     rcx, rax
 * 00000001800C7395: call    sub_180088528
 * 00000001800C739A: nop
 * 00000001800C739B: lea     rcx, [rbp+9F60h+var_3A70]
 * 00000001800C73A2: call    sub_180011570
 * 00000001800C73A7: nop
 * 00000001800C73A8: lea     rcx, [rbp+9F60h+var_3AD0]
 * 00000001800C73AF: call    sub_180011570
 * 00000001800C73B4: nop
 * 00000001800C73B5: lea     rcx, dword_1801FB22C
 * 00000001800C73BC: call    sub_18000C548
 * 00000001800C73C1: mov     rax, [rsi+rdi*8]
 * 00000001800C73C5: mov     eax, [r15+rax]
 * 00000001800C73C9: cmp     cs:dword_1801FB230, eax
 * 00000001800C73CF: jle     loc_1800C74CC
 * 00000001800C73D5: lea     rcx, dword_1801FB230
 * 00000001800C73DC: call    sub_18000C5B0
 * 00000001800C73E1: cmp     cs:dword_1801FB230, r14d
 * 00000001800C73E8: jnz     loc_1800C74CC
 * 00000001800C73EE: xor     edx, edx
 * 00000001800C73F0: lea     rcx, [rsp+0A060h+var_9FF2]
 * 00000001800C73F5: call    sub_1800A8E58
 * 00000001800C73FA: mov     bl, [rax]
 * 00000001800C73FC: call    sub_1800C504C
 * 00000001800C7401: mov     rdx, rax
 * 00000001800C7404: mov     r8d, 678Ch
 * 00000001800C740A: lea     rcx, [rbp+9F60h+var_9D00]
 * 00000001800C7411: call    sub_1800A8E40
 * 00000001800C7416: movups  xmm0, xmmword ptr [rax]
 * 00000001800C7419: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C741F: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C7423: mov     r9d, r12d
 * 00000001800C7426: mov     r8d, 5
 * 00000001800C742C: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C7431: lea     rcx, [rbp+9F60h+var_6610]
 * 00000001800C7438: call    sub_1800A8E0C
 * 00000001800C743D: movups  xmm6, xmmword ptr [rax]
 * 00000001800C7440: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C7444: call    sub_1800C50FC
 * 00000001800C7449: mov     r8, rax
 * 00000001800C744C: mov     r9d, r13d
 * 00000001800C744F: mov     edx, 58h ; 'X'
 * 00000001800C7454: lea     rcx, [rbp+9F60h+var_3B90]; Src
 * 00000001800C745B: call    sub_180088448
 * 00000001800C7460: nop
 * 00000001800C7461: mov     r8, rax
 * 00000001800C7464: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C746B: lea     rcx, [rbp+9F60h+var_3B30]
 * 00000001800C7472: call    sub_18001DD3C
 * 00000001800C7477: nop
 * 00000001800C7478: lea     r8, aPixel; "/Pixel"
 * 00000001800C747F: mov     rdx, rax
 * 00000001800C7482: lea     rcx, [rbp+9F60h+var_81B0]
 * 00000001800C7489: call    sub_18001DC84
 * 00000001800C748E: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C7493: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C7498: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C749D: mov     rcx, rax
 * 00000001800C74A0: call    sub_180088528
 * 00000001800C74A5: nop
 * 00000001800C74A6: lea     rcx, [rbp+9F60h+var_3B30]
 * 00000001800C74AD: call    sub_180011570
 * 00000001800C74B2: nop
 * 00000001800C74B3: lea     rcx, [rbp+9F60h+var_3B90]
 * 00000001800C74BA: call    sub_180011570
 * 00000001800C74BF: nop
 * 00000001800C74C0: lea     rcx, dword_1801FB230
 * 00000001800C74C7: call    sub_18000C548
 * 00000001800C74CC: mov     rax, [rsi+rdi*8]
 * 00000001800C74D0: mov     eax, [r15+rax]
 * 00000001800C74D4: cmp     cs:dword_1801FB234, eax
 * 00000001800C74DA: jle     loc_1800C75D7
 * 00000001800C74E0: lea     rcx, dword_1801FB234
 * 00000001800C74E7: call    sub_18000C5B0
 * 00000001800C74EC: cmp     cs:dword_1801FB234, r14d
 * 00000001800C74F3: jnz     loc_1800C75D7
 * 00000001800C74F9: xor     edx, edx
 * 00000001800C74FB: lea     rcx, [rsp+0A060h+var_9FF1]
 * 00000001800C7500: call    sub_1800A8E58
 * 00000001800C7505: mov     bl, [rax]
 * 00000001800C7507: call    sub_1800C504C
 * 00000001800C750C: mov     rdx, rax
 * 00000001800C750F: mov     r8d, 678Ch
 * 00000001800C7515: lea     rcx, [rbp+9F60h+var_9CF0]
 * 00000001800C751C: call    sub_1800A8E40
 * 00000001800C7521: movups  xmm0, xmmword ptr [rax]
 * 00000001800C7524: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C752A: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C752E: mov     r9d, r12d
 * 00000001800C7531: mov     r8d, 5
 * 00000001800C7537: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C753C: lea     rcx, [rbp+9F60h+var_65F0]
 * 00000001800C7543: call    sub_1800A8E0C
 * 00000001800C7548: movups  xmm6, xmmword ptr [rax]
 * 00000001800C754B: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C754F: call    sub_1800C50FC
 * 00000001800C7554: mov     r8, rax
 * 00000001800C7557: mov     r9d, r13d
 * 00000001800C755A: mov     edx, 5Ah ; 'Z'
 * 00000001800C755F: lea     rcx, [rbp+9F60h+var_3C50]; Src
 * 00000001800C7566: call    sub_180088448
 * 00000001800C756B: nop
 * 00000001800C756C: mov     r8, rax
 * 00000001800C756F: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C7576: lea     rcx, [rbp+9F60h+var_3BF0]
 * 00000001800C757D: call    sub_18001DD3C
 * 00000001800C7582: nop
 * 00000001800C7583: lea     r8, aPixel; "/Pixel"
 * 00000001800C758A: mov     rdx, rax
 * 00000001800C758D: lea     rcx, [rbp+9F60h+var_8150]
 * 00000001800C7594: call    sub_18001DC84
 * 00000001800C7599: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C759E: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C75A3: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C75A8: mov     rcx, rax
 * 00000001800C75AB: call    sub_180088528
 * 00000001800C75B0: nop
 * 00000001800C75B1: lea     rcx, [rbp+9F60h+var_3BF0]
 * 00000001800C75B8: call    sub_180011570
 * 00000001800C75BD: nop
 * 00000001800C75BE: lea     rcx, [rbp+9F60h+var_3C50]
 * 00000001800C75C5: call    sub_180011570
 * 00000001800C75CA: nop
 * 00000001800C75CB: lea     rcx, dword_1801FB234
 * 00000001800C75D2: call    sub_18000C548
 * 00000001800C75D7: mov     rax, [rsi+rdi*8]
 * 00000001800C75DB: mov     eax, [r15+rax]
 * 00000001800C75DF: cmp     cs:dword_1801FB238, eax
 * 00000001800C75E5: jle     loc_1800C76E2
 * 00000001800C75EB: lea     rcx, dword_1801FB238
 * 00000001800C75F2: call    sub_18000C5B0
 * 00000001800C75F7: cmp     cs:dword_1801FB238, r14d
 * 00000001800C75FE: jnz     loc_1800C76E2
 * 00000001800C7604: xor     edx, edx
 * 00000001800C7606: lea     rcx, [rsp+0A060h+var_9FF0]
 * 00000001800C760B: call    sub_1800A8E58
 * 00000001800C7610: mov     bl, [rax]
 * 00000001800C7612: call    sub_1800C4FBC
 * 00000001800C7617: mov     rdx, rax
 * 00000001800C761A: mov     r8d, 63E4h
 * 00000001800C7620: lea     rcx, [rbp+9F60h+var_9CE0]
 * 00000001800C7627: call    sub_1800A8E40
 * 00000001800C762C: movups  xmm0, xmmword ptr [rax]
 * 00000001800C762F: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C7635: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C7639: mov     r9d, r12d
 * 00000001800C763C: mov     r8d, 5
 * 00000001800C7642: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C7647: lea     rcx, [rbp+9F60h+var_65D0]
 * 00000001800C764E: call    sub_1800A8E0C
 * 00000001800C7653: movups  xmm6, xmmword ptr [rax]
 * 00000001800C7656: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C765A: call    sub_1800C50FC
 * 00000001800C765F: mov     r8, rax
 * 00000001800C7662: mov     r9d, r13d
 * 00000001800C7665: mov     edx, 60h ; '`'
 * 00000001800C766A: lea     rcx, [rbp+9F60h+var_3D10]; Src
 * 00000001800C7671: call    sub_180088448
 * 00000001800C7676: nop
 * 00000001800C7677: mov     r8, rax
 * 00000001800C767A: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C7681: lea     rcx, [rbp+9F60h+var_3CB0]
 * 00000001800C7688: call    sub_18001DD3C
 * 00000001800C768D: nop
 * 00000001800C768E: lea     r8, aPixel; "/Pixel"
 * 00000001800C7695: mov     rdx, rax
 * 00000001800C7698: lea     rcx, [rbp+9F60h+var_80F0]
 * 00000001800C769F: call    sub_18001DC84
 * 00000001800C76A4: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C76A9: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C76AE: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C76B3: mov     rcx, rax
 * 00000001800C76B6: call    sub_180088528
 * 00000001800C76BB: nop
 * 00000001800C76BC: lea     rcx, [rbp+9F60h+var_3CB0]
 * 00000001800C76C3: call    sub_180011570
 * 00000001800C76C8: nop
 * 00000001800C76C9: lea     rcx, [rbp+9F60h+var_3D10]
 * 00000001800C76D0: call    sub_180011570
 * 00000001800C76D5: nop
 * 00000001800C76D6: lea     rcx, dword_1801FB238
 * 00000001800C76DD: call    sub_18000C548
 * 00000001800C76E2: mov     rax, [rsi+rdi*8]
 * 00000001800C76E6: mov     eax, [r15+rax]
 * 00000001800C76EA: cmp     cs:dword_1801FB23C, eax
 * 00000001800C76F0: jle     loc_1800C77ED
 * 00000001800C76F6: lea     rcx, dword_1801FB23C
 * 00000001800C76FD: call    sub_18000C5B0
 * 00000001800C7702: cmp     cs:dword_1801FB23C, r14d
 * 00000001800C7709: jnz     loc_1800C77ED
 * 00000001800C770F: xor     edx, edx
 * 00000001800C7711: lea     rcx, [rsp+0A060h+var_9FEF]
 * 00000001800C7716: call    sub_1800A8E58
 * 00000001800C771B: mov     bl, [rax]
 * 00000001800C771D: call    sub_1800C4FBC
 * 00000001800C7722: mov     rdx, rax
 * 00000001800C7725: mov     r8d, 63E4h
 * 00000001800C772B: lea     rcx, [rbp+9F60h+var_9CD0]
 * 00000001800C7732: call    sub_1800A8E40
 * 00000001800C7737: movups  xmm0, xmmword ptr [rax]
 * 00000001800C773A: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C7740: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C7744: mov     r9d, r12d
 * 00000001800C7747: mov     r8d, 5
 * 00000001800C774D: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C7752: lea     rcx, [rbp+9F60h+var_65B0]
 * 00000001800C7759: call    sub_1800A8E0C
 * 00000001800C775E: movups  xmm6, xmmword ptr [rax]
 * 00000001800C7761: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C7765: call    sub_1800C50FC
 * 00000001800C776A: mov     r8, rax
 * 00000001800C776D: mov     r9d, r13d
 * 00000001800C7770: mov     edx, 62h ; 'b'
 * 00000001800C7775: lea     rcx, [rbp+9F60h+var_3DD0]; Src
 * 00000001800C777C: call    sub_180088448
 * 00000001800C7781: nop
 * 00000001800C7782: mov     r8, rax
 * 00000001800C7785: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C778C: lea     rcx, [rbp+9F60h+var_3D70]
 * 00000001800C7793: call    sub_18001DD3C
 * 00000001800C7798: nop
 * 00000001800C7799: lea     r8, aPixel; "/Pixel"
 * 00000001800C77A0: mov     rdx, rax
 * 00000001800C77A3: lea     rcx, [rbp+9F60h+var_8090]
 * 00000001800C77AA: call    sub_18001DC84
 * 00000001800C77AF: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C77B4: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C77B9: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C77BE: mov     rcx, rax
 * 00000001800C77C1: call    sub_180088528
 * 00000001800C77C6: nop
 * 00000001800C77C7: lea     rcx, [rbp+9F60h+var_3D70]
 * 00000001800C77CE: call    sub_180011570
 * 00000001800C77D3: nop
 * 00000001800C77D4: lea     rcx, [rbp+9F60h+var_3DD0]
 * 00000001800C77DB: call    sub_180011570
 * 00000001800C77E0: nop
 * 00000001800C77E1: lea     rcx, dword_1801FB23C
 * 00000001800C77E8: call    sub_18000C548
 * 00000001800C77ED: mov     rax, [rsi+rdi*8]
 * 00000001800C77F1: mov     eax, [r15+rax]
 * 00000001800C77F5: cmp     cs:dword_1801FB240, eax
 * 00000001800C77FB: jle     loc_1800C78F8
 * 00000001800C7801: lea     rcx, dword_1801FB240
 * 00000001800C7808: call    sub_18000C5B0
 * 00000001800C780D: cmp     cs:dword_1801FB240, r14d
 * 00000001800C7814: jnz     loc_1800C78F8
 * 00000001800C781A: xor     edx, edx
 * 00000001800C781C: lea     rcx, [rsp+0A060h+var_9FEE]
 * 00000001800C7821: call    sub_1800A8E58
 * 00000001800C7826: mov     bl, [rax]
 * 00000001800C7828: call    sub_1800C4FFC
 * 00000001800C782D: mov     rdx, rax
 * 00000001800C7830: mov     r8d, 658Ch
 * 00000001800C7836: lea     rcx, [rbp+9F60h+var_9CC0]
 * 00000001800C783D: call    sub_1800A8E40
 * 00000001800C7842: movups  xmm0, xmmword ptr [rax]
 * 00000001800C7845: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C784B: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C784F: mov     r9d, r12d
 * 00000001800C7852: mov     r8d, 5
 * 00000001800C7858: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C785D: lea     rcx, [rbp+9F60h+var_6590]
 * 00000001800C7864: call    sub_1800A8E0C
 * 00000001800C7869: movups  xmm6, xmmword ptr [rax]
 * 00000001800C786C: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C7870: call    sub_1800C50FC
 * 00000001800C7875: mov     r8, rax
 * 00000001800C7878: mov     r9d, r13d
 * 00000001800C787B: mov     edx, 68h ; 'h'
 * 00000001800C7880: lea     rcx, [rbp+9F60h+var_3E90]; Src
 * 00000001800C7887: call    sub_180088448
 * 00000001800C788C: nop
 * 00000001800C788D: mov     r8, rax
 * 00000001800C7890: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C7897: lea     rcx, [rbp+9F60h+var_3E30]
 * 00000001800C789E: call    sub_18001DD3C
 * 00000001800C78A3: nop
 * 00000001800C78A4: lea     r8, aPixel; "/Pixel"
 * 00000001800C78AB: mov     rdx, rax
 * 00000001800C78AE: lea     rcx, [rbp+9F60h+var_8030]
 * 00000001800C78B5: call    sub_18001DC84
 * 00000001800C78BA: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C78BF: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C78C4: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C78C9: mov     rcx, rax
 * 00000001800C78CC: call    sub_180088528
 * 00000001800C78D1: nop
 * 00000001800C78D2: lea     rcx, [rbp+9F60h+var_3E30]
 * 00000001800C78D9: call    sub_180011570
 * 00000001800C78DE: nop
 * 00000001800C78DF: lea     rcx, [rbp+9F60h+var_3E90]
 * 00000001800C78E6: call    sub_180011570
 * 00000001800C78EB: nop
 * 00000001800C78EC: lea     rcx, dword_1801FB240
 * 00000001800C78F3: call    sub_18000C548
 * 00000001800C78F8: mov     rax, [rsi+rdi*8]
 * 00000001800C78FC: mov     eax, [r15+rax]
 * 00000001800C7900: cmp     cs:dword_1801FB244, eax
 * 00000001800C7906: jle     loc_1800C7A03
 * 00000001800C790C: lea     rcx, dword_1801FB244
 * 00000001800C7913: call    sub_18000C5B0
 * 00000001800C7918: cmp     cs:dword_1801FB244, r14d
 * 00000001800C791F: jnz     loc_1800C7A03
 * 00000001800C7925: xor     edx, edx
 * 00000001800C7927: lea     rcx, [rsp+0A060h+var_9FED]
 * 00000001800C792C: call    sub_1800A8E58
 * 00000001800C7931: mov     bl, [rax]
 * 00000001800C7933: call    sub_1800C4FFC
 * 00000001800C7938: mov     rdx, rax
 * 00000001800C793B: mov     r8d, 658Ch
 * 00000001800C7941: lea     rcx, [rbp+9F60h+var_9CB0]
 * 00000001800C7948: call    sub_1800A8E40
 * 00000001800C794D: movups  xmm0, xmmword ptr [rax]
 * 00000001800C7950: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C7956: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C795A: mov     r9d, r12d
 * 00000001800C795D: mov     r8d, 5
 * 00000001800C7963: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C7968: lea     rcx, [rbp+9F60h+var_6570]
 * 00000001800C796F: call    sub_1800A8E0C
 * 00000001800C7974: movups  xmm6, xmmword ptr [rax]
 * 00000001800C7977: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C797B: call    sub_1800C50FC
 * 00000001800C7980: mov     r8, rax
 * 00000001800C7983: mov     r9d, r13d
 * 00000001800C7986: mov     edx, 6Ah ; 'j'
 * 00000001800C798B: lea     rcx, [rbp+9F60h+var_3F50]; Src
 * 00000001800C7992: call    sub_180088448
 * 00000001800C7997: nop
 * 00000001800C7998: mov     r8, rax
 * 00000001800C799B: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C79A2: lea     rcx, [rbp+9F60h+var_3EF0]
 * 00000001800C79A9: call    sub_18001DD3C
 * 00000001800C79AE: nop
 * 00000001800C79AF: lea     r8, aPixel; "/Pixel"
 * 00000001800C79B6: mov     rdx, rax
 * 00000001800C79B9: lea     rcx, [rbp+9F60h+var_7FD0]
 * 00000001800C79C0: call    sub_18001DC84
 * 00000001800C79C5: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C79CA: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C79CF: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C79D4: mov     rcx, rax
 * 00000001800C79D7: call    sub_180088528
 * 00000001800C79DC: nop
 * 00000001800C79DD: lea     rcx, [rbp+9F60h+var_3EF0]
 * 00000001800C79E4: call    sub_180011570
 * 00000001800C79E9: nop
 * 00000001800C79EA: lea     rcx, [rbp+9F60h+var_3F50]
 * 00000001800C79F1: call    sub_180011570
 * 00000001800C79F6: nop
 * 00000001800C79F7: lea     rcx, dword_1801FB244
 * 00000001800C79FE: call    sub_18000C548
 * 00000001800C7A03: mov     rax, [rsi+rdi*8]
 * 00000001800C7A07: mov     eax, [r15+rax]
 * 00000001800C7A0B: cmp     cs:dword_1801FB248, eax
 * 00000001800C7A11: jle     loc_1800C7B0E
 * 00000001800C7A17: lea     rcx, dword_1801FB248
 * 00000001800C7A1E: call    sub_18000C5B0
 * 00000001800C7A23: cmp     cs:dword_1801FB248, r14d
 * 00000001800C7A2A: jnz     loc_1800C7B0E
 * 00000001800C7A30: xor     edx, edx
 * 00000001800C7A32: lea     rcx, [rsp+0A060h+var_9FEC]
 * 00000001800C7A37: call    sub_1800A8E58
 * 00000001800C7A3C: mov     bl, [rax]
 * 00000001800C7A3E: call    sub_1800C502C
 * 00000001800C7A43: mov     rdx, rax
 * 00000001800C7A46: mov     r8d, 65B8h
 * 00000001800C7A4C: lea     rcx, [rbp+9F60h+var_9CA0]
 * 00000001800C7A53: call    sub_1800A8E40
 * 00000001800C7A58: movups  xmm0, xmmword ptr [rax]
 * 00000001800C7A5B: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C7A61: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C7A65: mov     r9d, r12d
 * 00000001800C7A68: mov     r8d, 5
 * 00000001800C7A6E: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C7A73: lea     rcx, [rbp+9F60h+var_6550]
 * 00000001800C7A7A: call    sub_1800A8E0C
 * 00000001800C7A7F: movups  xmm6, xmmword ptr [rax]
 * 00000001800C7A82: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C7A86: call    sub_1800C50FC
 * 00000001800C7A8B: mov     r8, rax
 * 00000001800C7A8E: mov     r9d, r13d
 * 00000001800C7A91: mov     edx, 70h ; 'p'
 * 00000001800C7A96: lea     rcx, [rbp+9F60h+var_4010]; Src
 * 00000001800C7A9D: call    sub_180088448
 * 00000001800C7AA2: nop
 * 00000001800C7AA3: mov     r8, rax
 * 00000001800C7AA6: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C7AAD: lea     rcx, [rbp+9F60h+var_3FB0]
 * 00000001800C7AB4: call    sub_18001DD3C
 * 00000001800C7AB9: nop
 * 00000001800C7ABA: lea     r8, aPixel; "/Pixel"
 * 00000001800C7AC1: mov     rdx, rax
 * 00000001800C7AC4: lea     rcx, [rbp+9F60h+var_7F70]
 * 00000001800C7ACB: call    sub_18001DC84
 * 00000001800C7AD0: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C7AD5: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C7ADA: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C7ADF: mov     rcx, rax
 * 00000001800C7AE2: call    sub_180088528
 * 00000001800C7AE7: nop
 * 00000001800C7AE8: lea     rcx, [rbp+9F60h+var_3FB0]
 * 00000001800C7AEF: call    sub_180011570
 * 00000001800C7AF4: nop
 * 00000001800C7AF5: lea     rcx, [rbp+9F60h+var_4010]
 * 00000001800C7AFC: call    sub_180011570
 * 00000001800C7B01: nop
 * 00000001800C7B02: lea     rcx, dword_1801FB248
 * 00000001800C7B09: call    sub_18000C548
 * 00000001800C7B0E: mov     rax, [rsi+rdi*8]
 * 00000001800C7B12: mov     eax, [r15+rax]
 * 00000001800C7B16: cmp     cs:dword_1801FB24C, eax
 * 00000001800C7B1C: jle     loc_1800C7C19
 * 00000001800C7B22: lea     rcx, dword_1801FB24C
 * 00000001800C7B29: call    sub_18000C5B0
 * 00000001800C7B2E: cmp     cs:dword_1801FB24C, r14d
 * 00000001800C7B35: jnz     loc_1800C7C19
 * 00000001800C7B3B: xor     edx, edx
 * 00000001800C7B3D: lea     rcx, [rsp+0A060h+var_9FEB]
 * 00000001800C7B42: call    sub_1800A8E58
 * 00000001800C7B47: mov     bl, [rax]
 * 00000001800C7B49: call    sub_1800C502C
 * 00000001800C7B4E: mov     rdx, rax
 * 00000001800C7B51: mov     r8d, 65B8h
 * 00000001800C7B57: lea     rcx, [rbp+9F60h+var_9C90]
 * 00000001800C7B5E: call    sub_1800A8E40
 * 00000001800C7B63: movups  xmm0, xmmword ptr [rax]
 * 00000001800C7B66: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C7B6C: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C7B70: mov     r9d, r12d
 * 00000001800C7B73: mov     r8d, 5
 * 00000001800C7B79: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C7B7E: lea     rcx, [rbp+9F60h+var_6530]
 * 00000001800C7B85: call    sub_1800A8E0C
 * 00000001800C7B8A: movups  xmm6, xmmword ptr [rax]
 * 00000001800C7B8D: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C7B91: call    sub_1800C50FC
 * 00000001800C7B96: mov     r8, rax
 * 00000001800C7B99: mov     r9d, r13d
 * 00000001800C7B9C: mov     edx, 72h ; 'r'
 * 00000001800C7BA1: lea     rcx, [rbp+9F60h+var_40D0]; Src
 * 00000001800C7BA8: call    sub_180088448
 * 00000001800C7BAD: nop
 * 00000001800C7BAE: mov     r8, rax
 * 00000001800C7BB1: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C7BB8: lea     rcx, [rbp+9F60h+var_4070]
 * 00000001800C7BBF: call    sub_18001DD3C
 * 00000001800C7BC4: nop
 * 00000001800C7BC5: lea     r8, aPixel; "/Pixel"
 * 00000001800C7BCC: mov     rdx, rax
 * 00000001800C7BCF: lea     rcx, [rbp+9F60h+var_7F10]
 * 00000001800C7BD6: call    sub_18001DC84
 * 00000001800C7BDB: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C7BE0: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C7BE5: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C7BEA: mov     rcx, rax
 * 00000001800C7BED: call    sub_180088528
 * 00000001800C7BF2: nop
 * 00000001800C7BF3: lea     rcx, [rbp+9F60h+var_4070]
 * 00000001800C7BFA: call    sub_180011570
 * 00000001800C7BFF: nop
 * 00000001800C7C00: lea     rcx, [rbp+9F60h+var_40D0]
 * 00000001800C7C07: call    sub_180011570
 * 00000001800C7C0C: nop
 * 00000001800C7C0D: lea     rcx, dword_1801FB24C
 * 00000001800C7C14: call    sub_18000C548
 * 00000001800C7C19: mov     rax, [rsi+rdi*8]
 * 00000001800C7C1D: mov     eax, [r15+rax]
 * 00000001800C7C21: cmp     cs:dword_1801FB250, eax
 * 00000001800C7C27: jle     loc_1800C7D24
 * 00000001800C7C2D: lea     rcx, dword_1801FB250
 * 00000001800C7C34: call    sub_18000C5B0
 * 00000001800C7C39: cmp     cs:dword_1801FB250, r14d
 * 00000001800C7C40: jnz     loc_1800C7D24
 * 00000001800C7C46: xor     edx, edx
 * 00000001800C7C48: lea     rcx, [rsp+0A060h+var_9FEA]
 * 00000001800C7C4D: call    sub_1800A8E58
 * 00000001800C7C52: mov     bl, [rax]
 * 00000001800C7C54: call    sub_1800C504C
 * 00000001800C7C59: mov     rdx, rax
 * 00000001800C7C5C: mov     r8d, 678Ch
 * 00000001800C7C62: lea     rcx, [rbp+9F60h+var_9C80]
 * 00000001800C7C69: call    sub_1800A8E40
 * 00000001800C7C6E: movups  xmm0, xmmword ptr [rax]
 * 00000001800C7C71: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C7C77: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C7C7B: mov     r9d, r12d
 * 00000001800C7C7E: mov     r8d, 5
 * 00000001800C7C84: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C7C89: lea     rcx, [rbp+9F60h+var_6510]
 * 00000001800C7C90: call    sub_1800A8E0C
 * 00000001800C7C95: movups  xmm6, xmmword ptr [rax]
 * 00000001800C7C98: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C7C9C: call    sub_1800C50FC
 * 00000001800C7CA1: mov     r8, rax
 * 00000001800C7CA4: mov     r9d, r13d
 * 00000001800C7CA7: mov     edx, 78h ; 'x'
 * 00000001800C7CAC: lea     rcx, [rbp+9F60h+var_4190]; Src
 * 00000001800C7CB3: call    sub_180088448
 * 00000001800C7CB8: nop
 * 00000001800C7CB9: mov     r8, rax
 * 00000001800C7CBC: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C7CC3: lea     rcx, [rbp+9F60h+var_4130]
 * 00000001800C7CCA: call    sub_18001DD3C
 * 00000001800C7CCF: nop
 * 00000001800C7CD0: lea     r8, aPixel; "/Pixel"
 * 00000001800C7CD7: mov     rdx, rax
 * 00000001800C7CDA: lea     rcx, [rbp+9F60h+var_7EB0]
 * 00000001800C7CE1: call    sub_18001DC84
 * 00000001800C7CE6: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C7CEB: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C7CF0: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C7CF5: mov     rcx, rax
 * 00000001800C7CF8: call    sub_180088528
 * 00000001800C7CFD: nop
 * 00000001800C7CFE: lea     rcx, [rbp+9F60h+var_4130]
 * 00000001800C7D05: call    sub_180011570
 * 00000001800C7D0A: nop
 * 00000001800C7D0B: lea     rcx, [rbp+9F60h+var_4190]
 * 00000001800C7D12: call    sub_180011570
 * 00000001800C7D17: nop
 * 00000001800C7D18: lea     rcx, dword_1801FB250
 * 00000001800C7D1F: call    sub_18000C548
 * 00000001800C7D24: mov     rax, [rsi+rdi*8]
 * 00000001800C7D28: mov     eax, [r15+rax]
 * 00000001800C7D2C: cmp     cs:dword_1801FB254, eax
 * 00000001800C7D32: jle     loc_1800C7E2F
 * 00000001800C7D38: lea     rcx, dword_1801FB254
 * 00000001800C7D3F: call    sub_18000C5B0
 * 00000001800C7D44: cmp     cs:dword_1801FB254, r14d
 * 00000001800C7D4B: jnz     loc_1800C7E2F
 * 00000001800C7D51: xor     edx, edx
 * 00000001800C7D53: lea     rcx, [rsp+0A060h+var_9FE9]
 * 00000001800C7D58: call    sub_1800A8E58
 * 00000001800C7D5D: mov     bl, [rax]
 * 00000001800C7D5F: call    sub_1800C504C
 * 00000001800C7D64: mov     rdx, rax
 * 00000001800C7D67: mov     r8d, 678Ch
 * 00000001800C7D6D: lea     rcx, [rbp+9F60h+var_9C70]
 * 00000001800C7D74: call    sub_1800A8E40
 * 00000001800C7D79: movups  xmm0, xmmword ptr [rax]
 * 00000001800C7D7C: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C7D82: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C7D86: mov     r9d, r12d
 * 00000001800C7D89: mov     r8d, 5
 * 00000001800C7D8F: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C7D94: lea     rcx, [rbp+9F60h+var_64F0]
 * 00000001800C7D9B: call    sub_1800A8E0C
 * 00000001800C7DA0: movups  xmm6, xmmword ptr [rax]
 * 00000001800C7DA3: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C7DA7: call    sub_1800C50FC
 * 00000001800C7DAC: mov     r8, rax
 * 00000001800C7DAF: mov     r9d, r13d
 * 00000001800C7DB2: mov     edx, 7Ah ; 'z'
 * 00000001800C7DB7: lea     rcx, [rbp+9F60h+var_4250]; Src
 * 00000001800C7DBE: call    sub_180088448
 * 00000001800C7DC3: nop
 * 00000001800C7DC4: mov     r8, rax
 * 00000001800C7DC7: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C7DCE: lea     rcx, [rbp+9F60h+var_41F0]
 * 00000001800C7DD5: call    sub_18001DD3C
 * 00000001800C7DDA: nop
 * 00000001800C7DDB: lea     r8, aPixel; "/Pixel"
 * 00000001800C7DE2: mov     rdx, rax
 * 00000001800C7DE5: lea     rcx, [rbp+9F60h+var_7E50]
 * 00000001800C7DEC: call    sub_18001DC84
 * 00000001800C7DF1: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C7DF6: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C7DFB: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C7E00: mov     rcx, rax
 * 00000001800C7E03: call    sub_180088528
 * 00000001800C7E08: nop
 * 00000001800C7E09: lea     rcx, [rbp+9F60h+var_41F0]
 * 00000001800C7E10: call    sub_180011570
 * 00000001800C7E15: nop
 * 00000001800C7E16: lea     rcx, [rbp+9F60h+var_4250]
 * 00000001800C7E1D: call    sub_180011570
 * 00000001800C7E22: nop
 * 00000001800C7E23: lea     rcx, dword_1801FB254
 * 00000001800C7E2A: call    sub_18000C548
 * 00000001800C7E2F: mov     rax, [rsi+rdi*8]
 * 00000001800C7E33: mov     eax, [r15+rax]
 * 00000001800C7E37: cmp     cs:dword_1801FB258, eax
 * 00000001800C7E3D: jle     loc_1800C7F3A
 * 00000001800C7E43: lea     rcx, dword_1801FB258
 * 00000001800C7E4A: call    sub_18000C5B0
 * 00000001800C7E4F: cmp     cs:dword_1801FB258, r14d
 * 00000001800C7E56: jnz     loc_1800C7F3A
 * 00000001800C7E5C: xor     edx, edx
 * 00000001800C7E5E: lea     rcx, [rsp+0A060h+var_9FE8]
 * 00000001800C7E63: call    sub_1800A8E58
 * 00000001800C7E68: mov     bl, [rax]
 * 00000001800C7E6A: call    sub_1800C4FBC
 * 00000001800C7E6F: mov     rdx, rax
 * 00000001800C7E72: mov     r8d, 63E4h
 * 00000001800C7E78: lea     rcx, [rbp+9F60h+var_9C60]
 * 00000001800C7E7F: call    sub_1800A8E40
 * 00000001800C7E84: movups  xmm0, xmmword ptr [rax]
 * 00000001800C7E87: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C7E8D: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C7E91: mov     r9d, r12d
 * 00000001800C7E94: mov     r8d, 5
 * 00000001800C7E9A: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C7E9F: lea     rcx, [rbp+9F60h+var_64D0]
 * 00000001800C7EA6: call    sub_1800A8E0C
 * 00000001800C7EAB: movups  xmm6, xmmword ptr [rax]
 * 00000001800C7EAE: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C7EB2: call    sub_1800C50FC
 * 00000001800C7EB7: mov     r8, rax
 * 00000001800C7EBA: mov     r9d, r13d
 * 00000001800C7EBD: mov     edx, 80h
 * 00000001800C7EC2: lea     rcx, [rbp+9F60h+var_4310]; Src
 * 00000001800C7EC9: call    sub_180088448
 * 00000001800C7ECE: nop
 * 00000001800C7ECF: mov     r8, rax
 * 00000001800C7ED2: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C7ED9: lea     rcx, [rbp+9F60h+var_42B0]
 * 00000001800C7EE0: call    sub_18001DD3C
 * 00000001800C7EE5: nop
 * 00000001800C7EE6: lea     r8, aPixel; "/Pixel"
 * 00000001800C7EED: mov     rdx, rax
 * 00000001800C7EF0: lea     rcx, [rbp+9F60h+var_7DF0]
 * 00000001800C7EF7: call    sub_18001DC84
 * 00000001800C7EFC: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C7F01: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C7F06: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C7F0B: mov     rcx, rax
 * 00000001800C7F0E: call    sub_180088528
 * 00000001800C7F13: nop
 * 00000001800C7F14: lea     rcx, [rbp+9F60h+var_42B0]
 * 00000001800C7F1B: call    sub_180011570
 * 00000001800C7F20: nop
 * 00000001800C7F21: lea     rcx, [rbp+9F60h+var_4310]
 * 00000001800C7F28: call    sub_180011570
 * 00000001800C7F2D: nop
 * 00000001800C7F2E: lea     rcx, dword_1801FB258
 * 00000001800C7F35: call    sub_18000C548
 * 00000001800C7F3A: mov     rax, [rsi+rdi*8]
 * 00000001800C7F3E: mov     eax, [r15+rax]
 * 00000001800C7F42: cmp     cs:dword_1801FB25C, eax
 * 00000001800C7F48: jle     loc_1800C8045
 * 00000001800C7F4E: lea     rcx, dword_1801FB25C
 * 00000001800C7F55: call    sub_18000C5B0
 * 00000001800C7F5A: cmp     cs:dword_1801FB25C, r14d
 * 00000001800C7F61: jnz     loc_1800C8045
 * 00000001800C7F67: xor     edx, edx
 * 00000001800C7F69: lea     rcx, [rsp+0A060h+var_9FE7]
 * 00000001800C7F6E: call    sub_1800A8E58
 * 00000001800C7F73: mov     bl, [rax]
 * 00000001800C7F75: call    sub_1800C4FBC
 * 00000001800C7F7A: mov     rdx, rax
 * 00000001800C7F7D: mov     r8d, 63E4h
 * 00000001800C7F83: lea     rcx, [rbp+9F60h+var_9C50]
 * 00000001800C7F8A: call    sub_1800A8E40
 * 00000001800C7F8F: movups  xmm0, xmmword ptr [rax]
 * 00000001800C7F92: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C7F98: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C7F9C: mov     r9d, r12d
 * 00000001800C7F9F: mov     r8d, 5
 * 00000001800C7FA5: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C7FAA: lea     rcx, [rbp+9F60h+var_64B0]
 * 00000001800C7FB1: call    sub_1800A8E0C
 * 00000001800C7FB6: movups  xmm6, xmmword ptr [rax]
 * 00000001800C7FB9: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C7FBD: call    sub_1800C50FC
 * 00000001800C7FC2: mov     r8, rax
 * 00000001800C7FC5: mov     r9d, r13d
 * 00000001800C7FC8: mov     edx, 82h
 * 00000001800C7FCD: lea     rcx, [rbp+9F60h+var_43D0]; Src
 * 00000001800C7FD4: call    sub_180088448
 * 00000001800C7FD9: nop
 * 00000001800C7FDA: mov     r8, rax
 * 00000001800C7FDD: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C7FE4: lea     rcx, [rbp+9F60h+var_4370]
 * 00000001800C7FEB: call    sub_18001DD3C
 * 00000001800C7FF0: nop
 * 00000001800C7FF1: lea     r8, aPixel; "/Pixel"
 * 00000001800C7FF8: mov     rdx, rax
 * 00000001800C7FFB: lea     rcx, [rbp+9F60h+var_7D90]
 * 00000001800C8002: call    sub_18001DC84
 * 00000001800C8007: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C800C: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C8011: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C8016: mov     rcx, rax
 * 00000001800C8019: call    sub_180088528
 * 00000001800C801E: nop
 * 00000001800C801F: lea     rcx, [rbp+9F60h+var_4370]
 * 00000001800C8026: call    sub_180011570
 * 00000001800C802B: nop
 * 00000001800C802C: lea     rcx, [rbp+9F60h+var_43D0]
 * 00000001800C8033: call    sub_180011570
 * 00000001800C8038: nop
 * 00000001800C8039: lea     rcx, dword_1801FB25C
 * 00000001800C8040: call    sub_18000C548
 * 00000001800C8045: mov     rax, [rsi+rdi*8]
 * 00000001800C8049: mov     eax, [r15+rax]
 * 00000001800C804D: cmp     cs:dword_1801FB260, eax
 * 00000001800C8053: jle     loc_1800C8150
 * 00000001800C8059: lea     rcx, dword_1801FB260
 * 00000001800C8060: call    sub_18000C5B0
 * 00000001800C8065: cmp     cs:dword_1801FB260, r14d
 * 00000001800C806C: jnz     loc_1800C8150
 * 00000001800C8072: xor     edx, edx
 * 00000001800C8074: lea     rcx, [rsp+0A060h+var_9FE6]
 * 00000001800C8079: call    sub_1800A8E58
 * 00000001800C807E: mov     bl, [rax]
 * 00000001800C8080: call    sub_1800C4FFC
 * 00000001800C8085: mov     rdx, rax
 * 00000001800C8088: mov     r8d, 658Ch
 * 00000001800C808E: lea     rcx, [rbp+9F60h+var_9C40]
 * 00000001800C8095: call    sub_1800A8E40
 * 00000001800C809A: movups  xmm0, xmmword ptr [rax]
 * 00000001800C809D: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C80A3: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C80A7: mov     r9d, r12d
 * 00000001800C80AA: mov     r8d, 5
 * 00000001800C80B0: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C80B5: lea     rcx, [rbp+9F60h+var_6490]
 * 00000001800C80BC: call    sub_1800A8E0C
 * 00000001800C80C1: movups  xmm6, xmmword ptr [rax]
 * 00000001800C80C4: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C80C8: call    sub_1800C50FC
 * 00000001800C80CD: mov     r8, rax
 * 00000001800C80D0: mov     r9d, r13d
 * 00000001800C80D3: mov     edx, 88h
 * 00000001800C80D8: lea     rcx, [rbp+9F60h+var_4490]; Src
 * 00000001800C80DF: call    sub_180088448
 * 00000001800C80E4: nop
 * 00000001800C80E5: mov     r8, rax
 * 00000001800C80E8: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C80EF: lea     rcx, [rbp+9F60h+var_4430]
 * 00000001800C80F6: call    sub_18001DD3C
 * 00000001800C80FB: nop
 * 00000001800C80FC: lea     r8, aPixel; "/Pixel"
 * 00000001800C8103: mov     rdx, rax
 * 00000001800C8106: lea     rcx, [rbp+9F60h+var_7D30]
 * 00000001800C810D: call    sub_18001DC84
 * 00000001800C8112: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C8117: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C811C: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C8121: mov     rcx, rax
 * 00000001800C8124: call    sub_180088528
 * 00000001800C8129: nop
 * 00000001800C812A: lea     rcx, [rbp+9F60h+var_4430]
 * 00000001800C8131: call    sub_180011570
 * 00000001800C8136: nop
 * 00000001800C8137: lea     rcx, [rbp+9F60h+var_4490]
 * 00000001800C813E: call    sub_180011570
 * 00000001800C8143: nop
 * 00000001800C8144: lea     rcx, dword_1801FB260
 * 00000001800C814B: call    sub_18000C548
 * 00000001800C8150: mov     rax, [rsi+rdi*8]
 * 00000001800C8154: mov     eax, [r15+rax]
 * 00000001800C8158: cmp     cs:dword_1801FB264, eax
 * 00000001800C815E: jle     loc_1800C825B
 * 00000001800C8164: lea     rcx, dword_1801FB264
 * 00000001800C816B: call    sub_18000C5B0
 * 00000001800C8170: cmp     cs:dword_1801FB264, r14d
 * 00000001800C8177: jnz     loc_1800C825B
 * 00000001800C817D: xor     edx, edx
 * 00000001800C817F: lea     rcx, [rsp+0A060h+var_9FE5]
 * 00000001800C8184: call    sub_1800A8E58
 * 00000001800C8189: mov     bl, [rax]
 * 00000001800C818B: call    sub_1800C4FFC
 * 00000001800C8190: mov     rdx, rax
 * 00000001800C8193: mov     r8d, 658Ch
 * 00000001800C8199: lea     rcx, [rbp+9F60h+var_9C30]
 * 00000001800C81A0: call    sub_1800A8E40
 * 00000001800C81A5: movups  xmm0, xmmword ptr [rax]
 * 00000001800C81A8: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C81AE: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C81B2: mov     r9d, r12d
 * 00000001800C81B5: mov     r8d, 5
 * 00000001800C81BB: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C81C0: lea     rcx, [rbp+9F60h+var_6470]
 * 00000001800C81C7: call    sub_1800A8E0C
 * 00000001800C81CC: movups  xmm6, xmmword ptr [rax]
 * 00000001800C81CF: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C81D3: call    sub_1800C50FC
 * 00000001800C81D8: mov     r8, rax
 * 00000001800C81DB: mov     r9d, r13d
 * 00000001800C81DE: mov     edx, 8Ah
 * 00000001800C81E3: lea     rcx, [rbp+9F60h+var_4550]; Src
 * 00000001800C81EA: call    sub_180088448
 * 00000001800C81EF: nop
 * 00000001800C81F0: mov     r8, rax
 * 00000001800C81F3: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C81FA: lea     rcx, [rbp+9F60h+var_44F0]
 * 00000001800C8201: call    sub_18001DD3C
 * 00000001800C8206: nop
 * 00000001800C8207: lea     r8, aPixel; "/Pixel"
 * 00000001800C820E: mov     rdx, rax
 * 00000001800C8211: lea     rcx, [rbp+9F60h+var_7CD0]
 * 00000001800C8218: call    sub_18001DC84
 * 00000001800C821D: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C8222: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C8227: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C822C: mov     rcx, rax
 * 00000001800C822F: call    sub_180088528
 * 00000001800C8234: nop
 * 00000001800C8235: lea     rcx, [rbp+9F60h+var_44F0]
 * 00000001800C823C: call    sub_180011570
 * 00000001800C8241: nop
 * 00000001800C8242: lea     rcx, [rbp+9F60h+var_4550]
 * 00000001800C8249: call    sub_180011570
 * 00000001800C824E: nop
 * 00000001800C824F: lea     rcx, dword_1801FB264
 * 00000001800C8256: call    sub_18000C548
 * 00000001800C825B: mov     rax, [rsi+rdi*8]
 * 00000001800C825F: mov     eax, [r15+rax]
 * 00000001800C8263: cmp     cs:dword_1801FB268, eax
 * 00000001800C8269: jle     loc_1800C8366
 * 00000001800C826F: lea     rcx, dword_1801FB268
 * 00000001800C8276: call    sub_18000C5B0
 * 00000001800C827B: cmp     cs:dword_1801FB268, r14d
 * 00000001800C8282: jnz     loc_1800C8366
 * 00000001800C8288: xor     edx, edx
 * 00000001800C828A: lea     rcx, [rsp+0A060h+var_9FE4]
 * 00000001800C828F: call    sub_1800A8E58
 * 00000001800C8294: mov     bl, [rax]
 * 00000001800C8296: call    sub_1800C502C
 * 00000001800C829B: mov     rdx, rax
 * 00000001800C829E: mov     r8d, 65B8h
 * 00000001800C82A4: lea     rcx, [rbp+9F60h+var_9C20]
 * 00000001800C82AB: call    sub_1800A8E40
 * 00000001800C82B0: movups  xmm0, xmmword ptr [rax]
 * 00000001800C82B3: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C82B9: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C82BD: mov     r9d, r12d
 * 00000001800C82C0: mov     r8d, 5
 * 00000001800C82C6: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C82CB: lea     rcx, [rbp+9F60h+var_6450]
 * 00000001800C82D2: call    sub_1800A8E0C
 * 00000001800C82D7: movups  xmm6, xmmword ptr [rax]
 * 00000001800C82DA: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C82DE: call    sub_1800C50FC
 * 00000001800C82E3: mov     r8, rax
 * 00000001800C82E6: mov     r9d, r13d
 * 00000001800C82E9: mov     edx, 90h
 * 00000001800C82EE: lea     rcx, [rbp+9F60h+var_4610]; Src
 * 00000001800C82F5: call    sub_180088448
 * 00000001800C82FA: nop
 * 00000001800C82FB: mov     r8, rax
 * 00000001800C82FE: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C8305: lea     rcx, [rbp+9F60h+var_45B0]
 * 00000001800C830C: call    sub_18001DD3C
 * 00000001800C8311: nop
 * 00000001800C8312: lea     r8, aPixel; "/Pixel"
 * 00000001800C8319: mov     rdx, rax
 * 00000001800C831C: lea     rcx, [rbp+9F60h+var_7C70]
 * 00000001800C8323: call    sub_18001DC84
 * 00000001800C8328: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C832D: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C8332: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C8337: mov     rcx, rax
 * 00000001800C833A: call    sub_180088528
 * 00000001800C833F: nop
 * 00000001800C8340: lea     rcx, [rbp+9F60h+var_45B0]
 * 00000001800C8347: call    sub_180011570
 * 00000001800C834C: nop
 * 00000001800C834D: lea     rcx, [rbp+9F60h+var_4610]
 * 00000001800C8354: call    sub_180011570
 * 00000001800C8359: nop
 * 00000001800C835A: lea     rcx, dword_1801FB268
 * 00000001800C8361: call    sub_18000C548
 * 00000001800C8366: mov     rax, [rsi+rdi*8]
 * 00000001800C836A: mov     eax, [r15+rax]
 * 00000001800C836E: cmp     cs:dword_1801FB26C, eax
 * 00000001800C8374: jle     loc_1800C8471
 * 00000001800C837A: lea     rcx, dword_1801FB26C
 * 00000001800C8381: call    sub_18000C5B0
 * 00000001800C8386: cmp     cs:dword_1801FB26C, r14d
 * 00000001800C838D: jnz     loc_1800C8471
 * 00000001800C8393: xor     edx, edx
 * 00000001800C8395: lea     rcx, [rsp+0A060h+var_9FE3]
 * 00000001800C839A: call    sub_1800A8E58
 * 00000001800C839F: mov     bl, [rax]
 * 00000001800C83A1: call    sub_1800C502C
 * 00000001800C83A6: mov     rdx, rax
 * 00000001800C83A9: mov     r8d, 65B8h
 * 00000001800C83AF: lea     rcx, [rbp+9F60h+var_9C10]
 * 00000001800C83B6: call    sub_1800A8E40
 * 00000001800C83BB: movups  xmm0, xmmword ptr [rax]
 * 00000001800C83BE: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C83C4: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C83C8: mov     r9d, r12d
 * 00000001800C83CB: mov     r8d, 5
 * 00000001800C83D1: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C83D6: lea     rcx, [rbp+9F60h+var_6430]
 * 00000001800C83DD: call    sub_1800A8E0C
 * 00000001800C83E2: movups  xmm6, xmmword ptr [rax]
 * 00000001800C83E5: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C83E9: call    sub_1800C50FC
 * 00000001800C83EE: mov     r8, rax
 * 00000001800C83F1: mov     r9d, r13d
 * 00000001800C83F4: mov     edx, 92h
 * 00000001800C83F9: lea     rcx, [rbp+9F60h+var_46D0]; Src
 * 00000001800C8400: call    sub_180088448
 * 00000001800C8405: nop
 * 00000001800C8406: mov     r8, rax
 * 00000001800C8409: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C8410: lea     rcx, [rbp+9F60h+var_4670]
 * 00000001800C8417: call    sub_18001DD3C
 * 00000001800C841C: nop
 * 00000001800C841D: lea     r8, aPixel; "/Pixel"
 * 00000001800C8424: mov     rdx, rax
 * 00000001800C8427: lea     rcx, [rbp+9F60h+var_7C10]
 * 00000001800C842E: call    sub_18001DC84
 * 00000001800C8433: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C8438: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C843D: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C8442: mov     rcx, rax
 * 00000001800C8445: call    sub_180088528
 * 00000001800C844A: nop
 * 00000001800C844B: lea     rcx, [rbp+9F60h+var_4670]
 * 00000001800C8452: call    sub_180011570
 * 00000001800C8457: nop
 * 00000001800C8458: lea     rcx, [rbp+9F60h+var_46D0]
 * 00000001800C845F: call    sub_180011570
 * 00000001800C8464: nop
 * 00000001800C8465: lea     rcx, dword_1801FB26C
 * 00000001800C846C: call    sub_18000C548
 * 00000001800C8471: mov     rax, [rsi+rdi*8]
 * 00000001800C8475: mov     eax, [r15+rax]
 * 00000001800C8479: cmp     cs:dword_1801FB270, eax
 * 00000001800C847F: jle     loc_1800C857C
 * 00000001800C8485: lea     rcx, dword_1801FB270
 * 00000001800C848C: call    sub_18000C5B0
 * 00000001800C8491: cmp     cs:dword_1801FB270, r14d
 * 00000001800C8498: jnz     loc_1800C857C
 * 00000001800C849E: xor     edx, edx
 * 00000001800C84A0: lea     rcx, [rsp+0A060h+var_9FE2]
 * 00000001800C84A5: call    sub_1800A8E58
 * 00000001800C84AA: mov     bl, [rax]
 * 00000001800C84AC: call    sub_1800C504C
 * 00000001800C84B1: mov     rdx, rax
 * 00000001800C84B4: mov     r8d, 678Ch
 * 00000001800C84BA: lea     rcx, [rbp+9F60h+var_9C00]
 * 00000001800C84C1: call    sub_1800A8E40
 * 00000001800C84C6: movups  xmm0, xmmword ptr [rax]
 * 00000001800C84C9: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C84CF: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C84D3: mov     r9d, r12d
 * 00000001800C84D6: mov     r8d, 5
 * 00000001800C84DC: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C84E1: lea     rcx, [rbp+9F60h+var_6410]
 * 00000001800C84E8: call    sub_1800A8E0C
 * 00000001800C84ED: movups  xmm6, xmmword ptr [rax]
 * 00000001800C84F0: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C84F4: call    sub_1800C50FC
 * 00000001800C84F9: mov     r8, rax
 * 00000001800C84FC: mov     r9d, r13d
 * 00000001800C84FF: mov     edx, 98h
 * 00000001800C8504: lea     rcx, [rbp+9F60h+var_110]; Src
 * 00000001800C850B: call    sub_180088448
 * 00000001800C8510: nop
 * 00000001800C8511: mov     r8, rax
 * 00000001800C8514: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C851B: lea     rcx, [rbp+9F60h+var_B0]
 * 00000001800C8522: call    sub_18001DD3C
 * 00000001800C8527: nop
 * 00000001800C8528: lea     r8, aPixel; "/Pixel"
 * 00000001800C852F: mov     rdx, rax
 * 00000001800C8532: lea     rcx, [rbp+9F60h+var_7BB0]
 * 00000001800C8539: call    sub_18001DC84
 * 00000001800C853E: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C8543: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C8548: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C854D: mov     rcx, rax
 * 00000001800C8550: call    sub_180088528
 * 00000001800C8555: nop
 * 00000001800C8556: lea     rcx, [rbp+9F60h+var_B0]
 * 00000001800C855D: call    sub_180011570
 * 00000001800C8562: nop
 * 00000001800C8563: lea     rcx, [rbp+9F60h+var_110]
 * 00000001800C856A: call    sub_180011570
 * 00000001800C856F: nop
 * 00000001800C8570: lea     rcx, dword_1801FB270
 * 00000001800C8577: call    sub_18000C548
 * 00000001800C857C: mov     rax, [rsi+rdi*8]
 * 00000001800C8580: mov     eax, [r15+rax]
 * 00000001800C8584: cmp     cs:dword_1801FB274, eax
 * 00000001800C858A: jle     loc_1800C8687
 * 00000001800C8590: lea     rcx, dword_1801FB274
 * 00000001800C8597: call    sub_18000C5B0
 * 00000001800C859C: cmp     cs:dword_1801FB274, r14d
 * 00000001800C85A3: jnz     loc_1800C8687
 * 00000001800C85A9: xor     edx, edx
 * 00000001800C85AB: lea     rcx, [rsp+0A060h+var_9FE1]
 * 00000001800C85B0: call    sub_1800A8E58
 * 00000001800C85B5: mov     bl, [rax]
 * 00000001800C85B7: call    sub_1800C504C
 * 00000001800C85BC: mov     rdx, rax
 * 00000001800C85BF: mov     r8d, 678Ch
 * 00000001800C85C5: lea     rcx, [rbp+9F60h+var_9BF0]
 * 00000001800C85CC: call    sub_1800A8E40
 * 00000001800C85D1: movups  xmm0, xmmword ptr [rax]
 * 00000001800C85D4: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C85DA: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C85DE: mov     r9d, r12d
 * 00000001800C85E1: mov     r8d, 5
 * 00000001800C85E7: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C85EC: lea     rcx, [rbp+9F60h+var_63F0]
 * 00000001800C85F3: call    sub_1800A8E0C
 * 00000001800C85F8: movups  xmm6, xmmword ptr [rax]
 * 00000001800C85FB: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C85FF: call    sub_1800C50FC
 * 00000001800C8604: mov     r8, rax
 * 00000001800C8607: mov     r9d, r13d
 * 00000001800C860A: mov     edx, 9Ah
 * 00000001800C860F: lea     rcx, [rbp+9F60h+var_1D0]; Src
 * 00000001800C8616: call    sub_180088448
 * 00000001800C861B: nop
 * 00000001800C861C: mov     r8, rax
 * 00000001800C861F: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C8626: lea     rcx, [rbp+9F60h+var_170]
 * 00000001800C862D: call    sub_18001DD3C
 * 00000001800C8632: nop
 * 00000001800C8633: lea     r8, aPixel; "/Pixel"
 * 00000001800C863A: mov     rdx, rax
 * 00000001800C863D: lea     rcx, [rbp+9F60h+var_7B50]
 * 00000001800C8644: call    sub_18001DC84
 * 00000001800C8649: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C864E: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C8653: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C8658: mov     rcx, rax
 * 00000001800C865B: call    sub_180088528
 * 00000001800C8660: nop
 * 00000001800C8661: lea     rcx, [rbp+9F60h+var_170]
 * 00000001800C8668: call    sub_180011570
 * 00000001800C866D: nop
 * 00000001800C866E: lea     rcx, [rbp+9F60h+var_1D0]
 * 00000001800C8675: call    sub_180011570
 * 00000001800C867A: nop
 * 00000001800C867B: lea     rcx, dword_1801FB274
 * 00000001800C8682: call    sub_18000C548
 * 00000001800C8687: mov     rax, [rsi+rdi*8]
 * 00000001800C868B: mov     eax, [r15+rax]
 * 00000001800C868F: cmp     cs:dword_1801FB278, eax
 * 00000001800C8695: jle     loc_1800C8791
 * 00000001800C869B: lea     rcx, dword_1801FB278
 * 00000001800C86A2: call    sub_18000C5B0
 * 00000001800C86A7: cmp     cs:dword_1801FB278, r14d
 * 00000001800C86AE: jnz     loc_1800C8791
 * 00000001800C86B4: xor     edx, edx
 * 00000001800C86B6: lea     rcx, [rbp+9F60h+var_9FE0]
 * 00000001800C86BA: call    sub_1800A8E58
 * 00000001800C86BF: mov     bl, [rax]
 * 00000001800C86C1: call    sub_1800C4FBC
 * 00000001800C86C6: mov     rdx, rax
 * 00000001800C86C9: mov     r8d, 63E4h
 * 00000001800C86CF: lea     rcx, [rbp+9F60h+var_9BE0]
 * 00000001800C86D6: call    sub_1800A8E40
 * 00000001800C86DB: movups  xmm0, xmmword ptr [rax]
 * 00000001800C86DE: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C86E4: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C86E8: mov     r9d, r12d
 * 00000001800C86EB: mov     r8d, 5
 * 00000001800C86F1: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C86F6: lea     rcx, [rbp+9F60h+var_63D0]
 * 00000001800C86FD: call    sub_1800A8E0C
 * 00000001800C8702: movups  xmm6, xmmword ptr [rax]
 * 00000001800C8705: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C8709: call    sub_1800C50FC
 * 00000001800C870E: mov     r8, rax
 * 00000001800C8711: mov     r9d, r13d
 * 00000001800C8714: mov     edx, 0A0h
 * 00000001800C8719: lea     rcx, [rbp+9F60h+var_290]; Src
 * 00000001800C8720: call    sub_180088448
 * 00000001800C8725: nop
 * 00000001800C8726: mov     r8, rax
 * 00000001800C8729: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C8730: lea     rcx, [rbp+9F60h+var_230]
 * 00000001800C8737: call    sub_18001DD3C
 * 00000001800C873C: nop
 * 00000001800C873D: lea     r8, aPixel; "/Pixel"
 * 00000001800C8744: mov     rdx, rax
 * 00000001800C8747: lea     rcx, [rbp+9F60h+var_7AF0]
 * 00000001800C874E: call    sub_18001DC84
 * 00000001800C8753: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C8758: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C875D: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C8762: mov     rcx, rax
 * 00000001800C8765: call    sub_180088528
 * 00000001800C876A: nop
 * 00000001800C876B: lea     rcx, [rbp+9F60h+var_230]
 * 00000001800C8772: call    sub_180011570
 * 00000001800C8777: nop
 * 00000001800C8778: lea     rcx, [rbp+9F60h+var_290]
 * 00000001800C877F: call    sub_180011570
 * 00000001800C8784: nop
 * 00000001800C8785: lea     rcx, dword_1801FB278
 * 00000001800C878C: call    sub_18000C548
 * 00000001800C8791: mov     rax, [rsi+rdi*8]
 * 00000001800C8795: mov     eax, [r15+rax]
 * 00000001800C8799: cmp     cs:dword_1801FB27C, eax
 * 00000001800C879F: jle     loc_1800C889B
 * 00000001800C87A5: lea     rcx, dword_1801FB27C
 * 00000001800C87AC: call    sub_18000C5B0
 * 00000001800C87B1: cmp     cs:dword_1801FB27C, r14d
 * 00000001800C87B8: jnz     loc_1800C889B
 * 00000001800C87BE: xor     edx, edx
 * 00000001800C87C0: lea     rcx, [rbp+9F60h+var_9FDF]
 * 00000001800C87C4: call    sub_1800A8E58
 * 00000001800C87C9: mov     bl, [rax]
 * 00000001800C87CB: call    sub_1800C4FBC
 * 00000001800C87D0: mov     rdx, rax
 * 00000001800C87D3: mov     r8d, 63E4h
 * 00000001800C87D9: lea     rcx, [rbp+9F60h+var_9BD0]
 * 00000001800C87E0: call    sub_1800A8E40
 * 00000001800C87E5: movups  xmm0, xmmword ptr [rax]
 * 00000001800C87E8: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C87EE: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C87F2: mov     r9d, r12d
 * 00000001800C87F5: mov     r8d, 5
 * 00000001800C87FB: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C8800: lea     rcx, [rbp+9F60h+var_63B0]
 * 00000001800C8807: call    sub_1800A8E0C
 * 00000001800C880C: movups  xmm6, xmmword ptr [rax]
 * 00000001800C880F: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C8813: call    sub_1800C50FC
 * 00000001800C8818: mov     r8, rax
 * 00000001800C881B: mov     r9d, r13d
 * 00000001800C881E: mov     edx, 0A2h
 * 00000001800C8823: lea     rcx, [rbp+9F60h+var_350]; Src
 * 00000001800C882A: call    sub_180088448
 * 00000001800C882F: nop
 * 00000001800C8830: mov     r8, rax
 * 00000001800C8833: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C883A: lea     rcx, [rbp+9F60h+var_2F0]
 * 00000001800C8841: call    sub_18001DD3C
 * 00000001800C8846: nop
 * 00000001800C8847: lea     r8, aPixel; "/Pixel"
 * 00000001800C884E: mov     rdx, rax
 * 00000001800C8851: lea     rcx, [rbp+9F60h+var_7A90]
 * 00000001800C8858: call    sub_18001DC84
 * 00000001800C885D: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C8862: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C8867: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C886C: mov     rcx, rax
 * 00000001800C886F: call    sub_180088528
 * 00000001800C8874: nop
 * 00000001800C8875: lea     rcx, [rbp+9F60h+var_2F0]
 * 00000001800C887C: call    sub_180011570
 * 00000001800C8881: nop
 * 00000001800C8882: lea     rcx, [rbp+9F60h+var_350]
 * 00000001800C8889: call    sub_180011570
 * 00000001800C888E: nop
 * 00000001800C888F: lea     rcx, dword_1801FB27C
 * 00000001800C8896: call    sub_18000C548
 * 00000001800C889B: mov     rax, [rsi+rdi*8]
 * 00000001800C889F: mov     eax, [r15+rax]
 * 00000001800C88A3: cmp     cs:dword_1801FB280, eax
 * 00000001800C88A9: jle     loc_1800C89A5
 * 00000001800C88AF: lea     rcx, dword_1801FB280
 * 00000001800C88B6: call    sub_18000C5B0
 * 00000001800C88BB: cmp     cs:dword_1801FB280, r14d
 * 00000001800C88C2: jnz     loc_1800C89A5
 * 00000001800C88C8: xor     edx, edx
 * 00000001800C88CA: lea     rcx, [rbp+9F60h+var_9FDE]
 * 00000001800C88CE: call    sub_1800A8E58
 * 00000001800C88D3: mov     bl, [rax]
 * 00000001800C88D5: call    sub_1800C4FFC
 * 00000001800C88DA: mov     rdx, rax
 * 00000001800C88DD: mov     r8d, 658Ch
 * 00000001800C88E3: lea     rcx, [rbp+9F60h+var_9BC0]
 * 00000001800C88EA: call    sub_1800A8E40
 * 00000001800C88EF: movups  xmm0, xmmword ptr [rax]
 * 00000001800C88F2: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C88F8: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C88FC: mov     r9d, r12d
 * 00000001800C88FF: mov     r8d, 5
 * 00000001800C8905: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C890A: lea     rcx, [rbp+9F60h+var_6390]
 * 00000001800C8911: call    sub_1800A8E0C
 * 00000001800C8916: movups  xmm6, xmmword ptr [rax]
 * 00000001800C8919: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C891D: call    sub_1800C50FC
 * 00000001800C8922: mov     r8, rax
 * 00000001800C8925: mov     r9d, r13d
 * 00000001800C8928: mov     edx, 0A8h
 * 00000001800C892D: lea     rcx, [rbp+9F60h+var_410]; Src
 * 00000001800C8934: call    sub_180088448
 * 00000001800C8939: nop
 * 00000001800C893A: mov     r8, rax
 * 00000001800C893D: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C8944: lea     rcx, [rbp+9F60h+var_3B0]
 * 00000001800C894B: call    sub_18001DD3C
 * 00000001800C8950: nop
 * 00000001800C8951: lea     r8, aPixel; "/Pixel"
 * 00000001800C8958: mov     rdx, rax
 * 00000001800C895B: lea     rcx, [rbp+9F60h+var_7A30]
 * 00000001800C8962: call    sub_18001DC84
 * 00000001800C8967: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C896C: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C8971: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C8976: mov     rcx, rax
 * 00000001800C8979: call    sub_180088528
 * 00000001800C897E: nop
 * 00000001800C897F: lea     rcx, [rbp+9F60h+var_3B0]
 * 00000001800C8986: call    sub_180011570
 * 00000001800C898B: nop
 * 00000001800C898C: lea     rcx, [rbp+9F60h+var_410]
 * 00000001800C8993: call    sub_180011570
 * 00000001800C8998: nop
 * 00000001800C8999: lea     rcx, dword_1801FB280
 * 00000001800C89A0: call    sub_18000C548
 * 00000001800C89A5: mov     rax, [rsi+rdi*8]
 * 00000001800C89A9: mov     eax, [r15+rax]
 * 00000001800C89AD: cmp     cs:dword_1801FB284, eax
 * 00000001800C89B3: jle     loc_1800C8AAF
 * 00000001800C89B9: lea     rcx, dword_1801FB284
 * 00000001800C89C0: call    sub_18000C5B0
 * 00000001800C89C5: cmp     cs:dword_1801FB284, r14d
 * 00000001800C89CC: jnz     loc_1800C8AAF
 * 00000001800C89D2: xor     edx, edx
 * 00000001800C89D4: lea     rcx, [rbp+9F60h+var_9FDD]
 * 00000001800C89D8: call    sub_1800A8E58
 * 00000001800C89DD: mov     bl, [rax]
 * 00000001800C89DF: call    sub_1800C4FFC
 * 00000001800C89E4: mov     rdx, rax
 * 00000001800C89E7: mov     r8d, 658Ch
 * 00000001800C89ED: lea     rcx, [rbp+9F60h+var_9BB0]
 * 00000001800C89F4: call    sub_1800A8E40
 * 00000001800C89F9: movups  xmm0, xmmword ptr [rax]
 * 00000001800C89FC: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C8A02: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C8A06: mov     r9d, r12d
 * 00000001800C8A09: mov     r8d, 5
 * 00000001800C8A0F: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C8A14: lea     rcx, [rbp+9F60h+var_6370]
 * 00000001800C8A1B: call    sub_1800A8E0C
 * 00000001800C8A20: movups  xmm6, xmmword ptr [rax]
 * 00000001800C8A23: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C8A27: call    sub_1800C50FC
 * 00000001800C8A2C: mov     r8, rax
 * 00000001800C8A2F: mov     r9d, r13d
 * 00000001800C8A32: mov     edx, 0AAh
 * 00000001800C8A37: lea     rcx, [rbp+9F60h+var_4D0]; Src
 * 00000001800C8A3E: call    sub_180088448
 * 00000001800C8A43: nop
 * 00000001800C8A44: mov     r8, rax
 * 00000001800C8A47: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C8A4E: lea     rcx, [rbp+9F60h+var_470]
 * 00000001800C8A55: call    sub_18001DD3C
 * 00000001800C8A5A: nop
 * 00000001800C8A5B: lea     r8, aPixel; "/Pixel"
 * 00000001800C8A62: mov     rdx, rax
 * 00000001800C8A65: lea     rcx, [rbp+9F60h+var_79D0]
 * 00000001800C8A6C: call    sub_18001DC84
 * 00000001800C8A71: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C8A76: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C8A7B: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C8A80: mov     rcx, rax
 * 00000001800C8A83: call    sub_180088528
 * 00000001800C8A88: nop
 * 00000001800C8A89: lea     rcx, [rbp+9F60h+var_470]
 * 00000001800C8A90: call    sub_180011570
 * 00000001800C8A95: nop
 * 00000001800C8A96: lea     rcx, [rbp+9F60h+var_4D0]
 * 00000001800C8A9D: call    sub_180011570
 * 00000001800C8AA2: nop
 * 00000001800C8AA3: lea     rcx, dword_1801FB284
 * 00000001800C8AAA: call    sub_18000C548
 * 00000001800C8AAF: mov     rax, [rsi+rdi*8]
 * 00000001800C8AB3: mov     eax, [r15+rax]
 * 00000001800C8AB7: cmp     cs:dword_1801FB288, eax
 * 00000001800C8ABD: jle     loc_1800C8BB9
 * 00000001800C8AC3: lea     rcx, dword_1801FB288
 * 00000001800C8ACA: call    sub_18000C5B0
 * 00000001800C8ACF: cmp     cs:dword_1801FB288, r14d
 * 00000001800C8AD6: jnz     loc_1800C8BB9
 * 00000001800C8ADC: xor     edx, edx
 * 00000001800C8ADE: lea     rcx, [rbp+9F60h+var_9FDC]
 * 00000001800C8AE2: call    sub_1800A8E58
 * 00000001800C8AE7: mov     bl, [rax]
 * 00000001800C8AE9: call    sub_1800C502C
 * 00000001800C8AEE: mov     rdx, rax
 * 00000001800C8AF1: mov     r8d, 65B8h
 * 00000001800C8AF7: lea     rcx, [rbp+9F60h+var_9BA0]
 * 00000001800C8AFE: call    sub_1800A8E40
 * 00000001800C8B03: movups  xmm0, xmmword ptr [rax]
 * 00000001800C8B06: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C8B0C: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C8B10: mov     r9d, r12d
 * 00000001800C8B13: mov     r8d, 5
 * 00000001800C8B19: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C8B1E: lea     rcx, [rbp+9F60h+var_6350]
 * 00000001800C8B25: call    sub_1800A8E0C
 * 00000001800C8B2A: movups  xmm6, xmmword ptr [rax]
 * 00000001800C8B2D: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C8B31: call    sub_1800C50FC
 * 00000001800C8B36: mov     r8, rax
 * 00000001800C8B39: mov     r9d, r13d
 * 00000001800C8B3C: mov     edx, 0B0h
 * 00000001800C8B41: lea     rcx, [rbp+9F60h+var_590]; Src
 * 00000001800C8B48: call    sub_180088448
 * 00000001800C8B4D: nop
 * 00000001800C8B4E: mov     r8, rax
 * 00000001800C8B51: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C8B58: lea     rcx, [rbp+9F60h+var_530]
 * 00000001800C8B5F: call    sub_18001DD3C
 * 00000001800C8B64: nop
 * 00000001800C8B65: lea     r8, aPixel; "/Pixel"
 * 00000001800C8B6C: mov     rdx, rax
 * 00000001800C8B6F: lea     rcx, [rbp+9F60h+var_7970]
 * 00000001800C8B76: call    sub_18001DC84
 * 00000001800C8B7B: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C8B80: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C8B85: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C8B8A: mov     rcx, rax
 * 00000001800C8B8D: call    sub_180088528
 * 00000001800C8B92: nop
 * 00000001800C8B93: lea     rcx, [rbp+9F60h+var_530]
 * 00000001800C8B9A: call    sub_180011570
 * 00000001800C8B9F: nop
 * 00000001800C8BA0: lea     rcx, [rbp+9F60h+var_590]
 * 00000001800C8BA7: call    sub_180011570
 * 00000001800C8BAC: nop
 * 00000001800C8BAD: lea     rcx, dword_1801FB288
 * 00000001800C8BB4: call    sub_18000C548
 * 00000001800C8BB9: mov     rax, [rsi+rdi*8]
 * 00000001800C8BBD: mov     eax, [r15+rax]
 * 00000001800C8BC1: cmp     cs:dword_1801FB28C, eax
 * 00000001800C8BC7: jle     loc_1800C8CC3
 * 00000001800C8BCD: lea     rcx, dword_1801FB28C
 * 00000001800C8BD4: call    sub_18000C5B0
 * 00000001800C8BD9: cmp     cs:dword_1801FB28C, r14d
 * 00000001800C8BE0: jnz     loc_1800C8CC3
 * 00000001800C8BE6: xor     edx, edx
 * 00000001800C8BE8: lea     rcx, [rbp+9F60h+var_9FDB]
 * 00000001800C8BEC: call    sub_1800A8E58
 * 00000001800C8BF1: mov     bl, [rax]
 * 00000001800C8BF3: call    sub_1800C502C
 * 00000001800C8BF8: mov     rdx, rax
 * 00000001800C8BFB: mov     r8d, 65B8h
 * 00000001800C8C01: lea     rcx, [rbp+9F60h+var_9B90]
 * 00000001800C8C08: call    sub_1800A8E40
 * 00000001800C8C0D: movups  xmm0, xmmword ptr [rax]
 * 00000001800C8C10: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C8C16: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C8C1A: mov     r9d, r12d
 * 00000001800C8C1D: mov     r8d, 5
 * 00000001800C8C23: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C8C28: lea     rcx, [rbp+9F60h+var_6330]
 * 00000001800C8C2F: call    sub_1800A8E0C
 * 00000001800C8C34: movups  xmm6, xmmword ptr [rax]
 * 00000001800C8C37: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C8C3B: call    sub_1800C50FC
 * 00000001800C8C40: mov     r8, rax
 * 00000001800C8C43: mov     r9d, r13d
 * 00000001800C8C46: mov     edx, 0B2h
 * 00000001800C8C4B: lea     rcx, [rbp+9F60h+var_650]; Src
 * 00000001800C8C52: call    sub_180088448
 * 00000001800C8C57: nop
 * 00000001800C8C58: mov     r8, rax
 * 00000001800C8C5B: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C8C62: lea     rcx, [rbp+9F60h+var_5F0]
 * 00000001800C8C69: call    sub_18001DD3C
 * 00000001800C8C6E: nop
 * 00000001800C8C6F: lea     r8, aPixel; "/Pixel"
 * 00000001800C8C76: mov     rdx, rax
 * 00000001800C8C79: lea     rcx, [rbp+9F60h+var_7910]
 * 00000001800C8C80: call    sub_18001DC84
 * 00000001800C8C85: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C8C8A: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C8C8F: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C8C94: mov     rcx, rax
 * 00000001800C8C97: call    sub_180088528
 * 00000001800C8C9C: nop
 * 00000001800C8C9D: lea     rcx, [rbp+9F60h+var_5F0]
 * 00000001800C8CA4: call    sub_180011570
 * 00000001800C8CA9: nop
 * 00000001800C8CAA: lea     rcx, [rbp+9F60h+var_650]
 * 00000001800C8CB1: call    sub_180011570
 * 00000001800C8CB6: nop
 * 00000001800C8CB7: lea     rcx, dword_1801FB28C
 * 00000001800C8CBE: call    sub_18000C548
 * 00000001800C8CC3: mov     rax, [rsi+rdi*8]
 * 00000001800C8CC7: mov     eax, [r15+rax]
 * 00000001800C8CCB: cmp     cs:dword_1801FB290, eax
 * 00000001800C8CD1: jle     loc_1800C8DCD
 * 00000001800C8CD7: lea     rcx, dword_1801FB290
 * 00000001800C8CDE: call    sub_18000C5B0
 * 00000001800C8CE3: cmp     cs:dword_1801FB290, r14d
 * 00000001800C8CEA: jnz     loc_1800C8DCD
 * 00000001800C8CF0: xor     edx, edx
 * 00000001800C8CF2: lea     rcx, [rbp+9F60h+var_9FDA]
 * 00000001800C8CF6: call    sub_1800A8E58
 * 00000001800C8CFB: mov     bl, [rax]
 * 00000001800C8CFD: call    sub_1800C504C
 * 00000001800C8D02: mov     rdx, rax
 * 00000001800C8D05: mov     r8d, 678Ch
 * 00000001800C8D0B: lea     rcx, [rbp+9F60h+var_9B80]
 * 00000001800C8D12: call    sub_1800A8E40
 * 00000001800C8D17: movups  xmm0, xmmword ptr [rax]
 * 00000001800C8D1A: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C8D20: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C8D24: mov     r9d, r12d
 * 00000001800C8D27: mov     r8d, 5
 * 00000001800C8D2D: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C8D32: lea     rcx, [rbp+9F60h+var_6310]
 * 00000001800C8D39: call    sub_1800A8E0C
 * 00000001800C8D3E: movups  xmm6, xmmword ptr [rax]
 * 00000001800C8D41: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C8D45: call    sub_1800C50FC
 * 00000001800C8D4A: mov     r8, rax
 * 00000001800C8D4D: mov     r9d, r13d
 * 00000001800C8D50: mov     edx, 0B8h
 * 00000001800C8D55: lea     rcx, [rbp+9F60h+var_710]; Src
 * 00000001800C8D5C: call    sub_180088448
 * 00000001800C8D61: nop
 * 00000001800C8D62: mov     r8, rax
 * 00000001800C8D65: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C8D6C: lea     rcx, [rbp+9F60h+var_6B0]
 * 00000001800C8D73: call    sub_18001DD3C
 * 00000001800C8D78: nop
 * 00000001800C8D79: lea     r8, aPixel; "/Pixel"
 * 00000001800C8D80: mov     rdx, rax
 * 00000001800C8D83: lea     rcx, [rbp+9F60h+var_78B0]
 * 00000001800C8D8A: call    sub_18001DC84
 * 00000001800C8D8F: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C8D94: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C8D99: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C8D9E: mov     rcx, rax
 * 00000001800C8DA1: call    sub_180088528
 * 00000001800C8DA6: nop
 * 00000001800C8DA7: lea     rcx, [rbp+9F60h+var_6B0]
 * 00000001800C8DAE: call    sub_180011570
 * 00000001800C8DB3: nop
 * 00000001800C8DB4: lea     rcx, [rbp+9F60h+var_710]
 * 00000001800C8DBB: call    sub_180011570
 * 00000001800C8DC0: nop
 * 00000001800C8DC1: lea     rcx, dword_1801FB290
 * 00000001800C8DC8: call    sub_18000C548
 * 00000001800C8DCD: mov     rax, [rsi+rdi*8]
 * 00000001800C8DD1: mov     eax, [r15+rax]
 * 00000001800C8DD5: cmp     cs:dword_1801FB294, eax
 * 00000001800C8DDB: jle     loc_1800C8ED7
 * 00000001800C8DE1: lea     rcx, dword_1801FB294
 * 00000001800C8DE8: call    sub_18000C5B0
 * 00000001800C8DED: cmp     cs:dword_1801FB294, r14d
 * 00000001800C8DF4: jnz     loc_1800C8ED7
 * 00000001800C8DFA: xor     edx, edx
 * 00000001800C8DFC: lea     rcx, [rbp+9F60h+var_9FD9]
 * 00000001800C8E00: call    sub_1800A8E58
 * 00000001800C8E05: mov     bl, [rax]
 * 00000001800C8E07: call    sub_1800C504C
 * 00000001800C8E0C: mov     rdx, rax
 * 00000001800C8E0F: mov     r8d, 678Ch
 * 00000001800C8E15: lea     rcx, [rbp+9F60h+var_9B70]
 * 00000001800C8E1C: call    sub_1800A8E40
 * 00000001800C8E21: movups  xmm0, xmmword ptr [rax]
 * 00000001800C8E24: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C8E2A: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C8E2E: mov     r9d, r12d
 * 00000001800C8E31: mov     r8d, 5
 * 00000001800C8E37: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C8E3C: lea     rcx, [rbp+9F60h+var_62F0]
 * 00000001800C8E43: call    sub_1800A8E0C
 * 00000001800C8E48: movups  xmm6, xmmword ptr [rax]
 * 00000001800C8E4B: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C8E4F: call    sub_1800C50FC
 * 00000001800C8E54: mov     r8, rax
 * 00000001800C8E57: mov     r9d, r13d
 * 00000001800C8E5A: mov     edx, 0BAh
 * 00000001800C8E5F: lea     rcx, [rbp+9F60h+var_7D0]; Src
 * 00000001800C8E66: call    sub_180088448
 * 00000001800C8E6B: nop
 * 00000001800C8E6C: mov     r8, rax
 * 00000001800C8E6F: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C8E76: lea     rcx, [rbp+9F60h+var_770]
 * 00000001800C8E7D: call    sub_18001DD3C
 * 00000001800C8E82: nop
 * 00000001800C8E83: lea     r8, aPixel; "/Pixel"
 * 00000001800C8E8A: mov     rdx, rax
 * 00000001800C8E8D: lea     rcx, [rbp+9F60h+var_7850]
 * 00000001800C8E94: call    sub_18001DC84
 * 00000001800C8E99: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C8E9E: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C8EA3: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C8EA8: mov     rcx, rax
 * 00000001800C8EAB: call    sub_180088528
 * 00000001800C8EB0: nop
 * 00000001800C8EB1: lea     rcx, [rbp+9F60h+var_770]
 * 00000001800C8EB8: call    sub_180011570
 * 00000001800C8EBD: nop
 * 00000001800C8EBE: lea     rcx, [rbp+9F60h+var_7D0]
 * 00000001800C8EC5: call    sub_180011570
 * 00000001800C8ECA: nop
 * 00000001800C8ECB: lea     rcx, dword_1801FB294
 * 00000001800C8ED2: call    sub_18000C548
 * 00000001800C8ED7: mov     rax, [rsi+rdi*8]
 * 00000001800C8EDB: mov     eax, [r15+rax]
 * 00000001800C8EDF: cmp     cs:dword_1801FB298, eax
 * 00000001800C8EE5: jle     loc_1800C8FE1
 * 00000001800C8EEB: lea     rcx, dword_1801FB298
 * 00000001800C8EF2: call    sub_18000C5B0
 * 00000001800C8EF7: cmp     cs:dword_1801FB298, r14d
 * 00000001800C8EFE: jnz     loc_1800C8FE1
 * 00000001800C8F04: xor     edx, edx
 * 00000001800C8F06: lea     rcx, [rbp+9F60h+var_9FD8]
 * 00000001800C8F0A: call    sub_1800A8E58
 * 00000001800C8F0F: mov     bl, [rax]
 * 00000001800C8F11: call    sub_1800C4FBC
 * 00000001800C8F16: mov     rdx, rax
 * 00000001800C8F19: mov     r8d, 63E4h
 * 00000001800C8F1F: lea     rcx, [rbp+9F60h+var_9B60]
 * 00000001800C8F26: call    sub_1800A8E40
 * 00000001800C8F2B: movups  xmm0, xmmword ptr [rax]
 * 00000001800C8F2E: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C8F34: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C8F38: mov     r9d, r12d
 * 00000001800C8F3B: mov     r8d, 5
 * 00000001800C8F41: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C8F46: lea     rcx, [rbp+9F60h+var_62D0]
 * 00000001800C8F4D: call    sub_1800A8E0C
 * 00000001800C8F52: movups  xmm6, xmmword ptr [rax]
 * 00000001800C8F55: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C8F59: call    sub_1800C50FC
 * 00000001800C8F5E: mov     r8, rax
 * 00000001800C8F61: mov     r9d, r13d
 * 00000001800C8F64: mov     edx, 0C0h
 * 00000001800C8F69: lea     rcx, [rbp+9F60h+var_890]; Src
 * 00000001800C8F70: call    sub_180088448
 * 00000001800C8F75: nop
 * 00000001800C8F76: mov     r8, rax
 * 00000001800C8F79: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C8F80: lea     rcx, [rbp+9F60h+var_830]
 * 00000001800C8F87: call    sub_18001DD3C
 * 00000001800C8F8C: nop
 * 00000001800C8F8D: lea     r8, aPixel; "/Pixel"
 * 00000001800C8F94: mov     rdx, rax
 * 00000001800C8F97: lea     rcx, [rbp+9F60h+var_77F0]
 * 00000001800C8F9E: call    sub_18001DC84
 * 00000001800C8FA3: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C8FA8: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C8FAD: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C8FB2: mov     rcx, rax
 * 00000001800C8FB5: call    sub_180088528
 * 00000001800C8FBA: nop
 * 00000001800C8FBB: lea     rcx, [rbp+9F60h+var_830]
 * 00000001800C8FC2: call    sub_180011570
 * 00000001800C8FC7: nop
 * 00000001800C8FC8: lea     rcx, [rbp+9F60h+var_890]
 * 00000001800C8FCF: call    sub_180011570
 * 00000001800C8FD4: nop
 * 00000001800C8FD5: lea     rcx, dword_1801FB298
 * 00000001800C8FDC: call    sub_18000C548
 * 00000001800C8FE1: mov     rax, [rsi+rdi*8]
 * 00000001800C8FE5: mov     eax, [r15+rax]
 * 00000001800C8FE9: cmp     cs:dword_1801FB29C, eax
 * 00000001800C8FEF: jle     loc_1800C90EB
 * 00000001800C8FF5: lea     rcx, dword_1801FB29C
 * 00000001800C8FFC: call    sub_18000C5B0
 * 00000001800C9001: cmp     cs:dword_1801FB29C, r14d
 * 00000001800C9008: jnz     loc_1800C90EB
 * 00000001800C900E: xor     edx, edx
 * 00000001800C9010: lea     rcx, [rbp+9F60h+var_9FD7]
 * 00000001800C9014: call    sub_1800A8E58
 * 00000001800C9019: mov     bl, [rax]
 * 00000001800C901B: call    sub_1800C4FBC
 * 00000001800C9020: mov     rdx, rax
 * 00000001800C9023: mov     r8d, 63E4h
 * 00000001800C9029: lea     rcx, [rbp+9F60h+var_9B50]
 * 00000001800C9030: call    sub_1800A8E40
 * 00000001800C9035: movups  xmm0, xmmword ptr [rax]
 * 00000001800C9038: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C903E: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C9042: mov     r9d, r12d
 * 00000001800C9045: mov     r8d, 5
 * 00000001800C904B: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C9050: lea     rcx, [rbp+9F60h+var_62B0]
 * 00000001800C9057: call    sub_1800A8E0C
 * 00000001800C905C: movups  xmm6, xmmword ptr [rax]
 * 00000001800C905F: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C9063: call    sub_1800C50FC
 * 00000001800C9068: mov     r8, rax
 * 00000001800C906B: mov     r9d, r13d
 * 00000001800C906E: mov     edx, 0C2h
 * 00000001800C9073: lea     rcx, [rbp+9F60h+var_9B0]; Src
 * 00000001800C907A: call    sub_180088448
 * 00000001800C907F: nop
 * 00000001800C9080: mov     r8, rax
 * 00000001800C9083: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C908A: lea     rcx, [rbp+9F60h+var_8F0]
 * 00000001800C9091: call    sub_18001DD3C
 * 00000001800C9096: nop
 * 00000001800C9097: lea     r8, aPixel; "/Pixel"
 * 00000001800C909E: mov     rdx, rax
 * 00000001800C90A1: lea     rcx, [rbp+9F60h+var_7790]
 * 00000001800C90A8: call    sub_18001DC84
 * 00000001800C90AD: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C90B2: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C90B7: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C90BC: mov     rcx, rax
 * 00000001800C90BF: call    sub_180088528
 * 00000001800C90C4: nop
 * 00000001800C90C5: lea     rcx, [rbp+9F60h+var_8F0]
 * 00000001800C90CC: call    sub_180011570
 * 00000001800C90D1: nop
 * 00000001800C90D2: lea     rcx, [rbp+9F60h+var_9B0]
 * 00000001800C90D9: call    sub_180011570
 * 00000001800C90DE: nop
 * 00000001800C90DF: lea     rcx, dword_1801FB29C
 * 00000001800C90E6: call    sub_18000C548
 * 00000001800C90EB: mov     rax, [rsi+rdi*8]
 * 00000001800C90EF: mov     eax, [r15+rax]
 * 00000001800C90F3: cmp     cs:dword_1801FB2A0, eax
 * 00000001800C90F9: jle     loc_1800C91F5
 * 00000001800C90FF: lea     rcx, dword_1801FB2A0
 * 00000001800C9106: call    sub_18000C5B0
 * 00000001800C910B: cmp     cs:dword_1801FB2A0, r14d
 * 00000001800C9112: jnz     loc_1800C91F5
 * 00000001800C9118: xor     edx, edx
 * 00000001800C911A: lea     rcx, [rbp+9F60h+var_9FD6]
 * 00000001800C911E: call    sub_1800A8E58
 * 00000001800C9123: mov     bl, [rax]
 * 00000001800C9125: call    sub_1800C4FFC
 * 00000001800C912A: mov     rdx, rax
 * 00000001800C912D: mov     r8d, 658Ch
 * 00000001800C9133: lea     rcx, [rbp+9F60h+var_9B40]
 * 00000001800C913A: call    sub_1800A8E40
 * 00000001800C913F: movups  xmm0, xmmword ptr [rax]
 * 00000001800C9142: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C9148: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C914C: mov     r9d, r12d
 * 00000001800C914F: mov     r8d, 5
 * 00000001800C9155: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C915A: lea     rcx, [rbp+9F60h+var_6290]
 * 00000001800C9161: call    sub_1800A8E0C
 * 00000001800C9166: movups  xmm6, xmmword ptr [rax]
 * 00000001800C9169: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C916D: call    sub_1800C50FC
 * 00000001800C9172: mov     r8, rax
 * 00000001800C9175: mov     r9d, r13d
 * 00000001800C9178: mov     edx, 0C8h
 * 00000001800C917D: lea     rcx, [rbp+9F60h+var_A70]; Src
 * 00000001800C9184: call    sub_180088448
 * 00000001800C9189: nop
 * 00000001800C918A: mov     r8, rax
 * 00000001800C918D: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C9194: lea     rcx, [rbp+9F60h+var_A10]
 * 00000001800C919B: call    sub_18001DD3C
 * 00000001800C91A0: nop
 * 00000001800C91A1: lea     r8, aPixel; "/Pixel"
 * 00000001800C91A8: mov     rdx, rax
 * 00000001800C91AB: lea     rcx, [rbp+9F60h+var_7730]
 * 00000001800C91B2: call    sub_18001DC84
 * 00000001800C91B7: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C91BC: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C91C1: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C91C6: mov     rcx, rax
 * 00000001800C91C9: call    sub_180088528
 * 00000001800C91CE: nop
 * 00000001800C91CF: lea     rcx, [rbp+9F60h+var_A10]
 * 00000001800C91D6: call    sub_180011570
 * 00000001800C91DB: nop
 * 00000001800C91DC: lea     rcx, [rbp+9F60h+var_A70]
 * 00000001800C91E3: call    sub_180011570
 * 00000001800C91E8: nop
 * 00000001800C91E9: lea     rcx, dword_1801FB2A0
 * 00000001800C91F0: call    sub_18000C548
 * 00000001800C91F5: mov     rax, [rsi+rdi*8]
 * 00000001800C91F9: mov     eax, [r15+rax]
 * 00000001800C91FD: cmp     cs:dword_1801FB2A4, eax
 * 00000001800C9203: jle     loc_1800C92FF
 * 00000001800C9209: lea     rcx, dword_1801FB2A4
 * 00000001800C9210: call    sub_18000C5B0
 * 00000001800C9215: cmp     cs:dword_1801FB2A4, r14d
 * 00000001800C921C: jnz     loc_1800C92FF
 * 00000001800C9222: xor     edx, edx
 * 00000001800C9224: lea     rcx, [rbp+9F60h+var_9FD5]
 * 00000001800C9228: call    sub_1800A8E58
 * 00000001800C922D: mov     bl, [rax]
 * 00000001800C922F: call    sub_1800C4FFC
 * 00000001800C9234: mov     rdx, rax
 * 00000001800C9237: mov     r8d, 658Ch
 * 00000001800C923D: lea     rcx, [rbp+9F60h+var_9B30]
 * 00000001800C9244: call    sub_1800A8E40
 * 00000001800C9249: movups  xmm0, xmmword ptr [rax]
 * 00000001800C924C: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C9252: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C9256: mov     r9d, r12d
 * 00000001800C9259: mov     r8d, 5
 * 00000001800C925F: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C9264: lea     rcx, [rbp+9F60h+var_6270]
 * 00000001800C926B: call    sub_1800A8E0C
 * 00000001800C9270: movups  xmm6, xmmword ptr [rax]
 * 00000001800C9273: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C9277: call    sub_1800C50FC
 * 00000001800C927C: mov     r8, rax
 * 00000001800C927F: mov     r9d, r13d
 * 00000001800C9282: mov     edx, 0CAh
 * 00000001800C9287: lea     rcx, [rbp+9F60h+var_B30]; Src
 * 00000001800C928E: call    sub_180088448
 * 00000001800C9293: nop
 * 00000001800C9294: mov     r8, rax
 * 00000001800C9297: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C929E: lea     rcx, [rbp+9F60h+var_AD0]
 * 00000001800C92A5: call    sub_18001DD3C
 * 00000001800C92AA: nop
 * 00000001800C92AB: lea     r8, aPixel; "/Pixel"
 * 00000001800C92B2: mov     rdx, rax
 * 00000001800C92B5: lea     rcx, [rbp+9F60h+var_76D0]
 * 00000001800C92BC: call    sub_18001DC84
 * 00000001800C92C1: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C92C6: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C92CB: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C92D0: mov     rcx, rax
 * 00000001800C92D3: call    sub_180088528
 * 00000001800C92D8: nop
 * 00000001800C92D9: lea     rcx, [rbp+9F60h+var_AD0]
 * 00000001800C92E0: call    sub_180011570
 * 00000001800C92E5: nop
 * 00000001800C92E6: lea     rcx, [rbp+9F60h+var_B30]
 * 00000001800C92ED: call    sub_180011570
 * 00000001800C92F2: nop
 * 00000001800C92F3: lea     rcx, dword_1801FB2A4
 * 00000001800C92FA: call    sub_18000C548
 * 00000001800C92FF: mov     rax, [rsi+rdi*8]
 * 00000001800C9303: mov     eax, [r15+rax]
 * 00000001800C9307: cmp     cs:dword_1801FB2A8, eax
 * 00000001800C930D: jle     loc_1800C9409
 * 00000001800C9313: lea     rcx, dword_1801FB2A8
 * 00000001800C931A: call    sub_18000C5B0
 * 00000001800C931F: cmp     cs:dword_1801FB2A8, r14d
 * 00000001800C9326: jnz     loc_1800C9409
 * 00000001800C932C: xor     edx, edx
 * 00000001800C932E: lea     rcx, [rbp+9F60h+var_9FD4]
 * 00000001800C9332: call    sub_1800A8E58
 * 00000001800C9337: mov     bl, [rax]
 * 00000001800C9339: call    sub_1800C502C
 * 00000001800C933E: mov     rdx, rax
 * 00000001800C9341: mov     r8d, 65B8h
 * 00000001800C9347: lea     rcx, [rbp+9F60h+var_9B20]
 * 00000001800C934E: call    sub_1800A8E40
 * 00000001800C9353: movups  xmm0, xmmword ptr [rax]
 * 00000001800C9356: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C935C: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C9360: mov     r9d, r12d
 * 00000001800C9363: mov     r8d, 5
 * 00000001800C9369: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C936E: lea     rcx, [rbp+9F60h+var_6250]
 * 00000001800C9375: call    sub_1800A8E0C
 * 00000001800C937A: movups  xmm6, xmmword ptr [rax]
 * 00000001800C937D: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C9381: call    sub_1800C50FC
 * 00000001800C9386: mov     r8, rax
 * 00000001800C9389: mov     r9d, r13d
 * 00000001800C938C: mov     edx, 0D0h
 * 00000001800C9391: lea     rcx, [rbp+9F60h+var_BF0]; Src
 * 00000001800C9398: call    sub_180088448
 * 00000001800C939D: nop
 * 00000001800C939E: mov     r8, rax
 * 00000001800C93A1: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C93A8: lea     rcx, [rbp+9F60h+var_B90]
 * 00000001800C93AF: call    sub_18001DD3C
 * 00000001800C93B4: nop
 * 00000001800C93B5: lea     r8, aPixel; "/Pixel"
 * 00000001800C93BC: mov     rdx, rax
 * 00000001800C93BF: lea     rcx, [rbp+9F60h+var_7670]
 * 00000001800C93C6: call    sub_18001DC84
 * 00000001800C93CB: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C93D0: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C93D5: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C93DA: mov     rcx, rax
 * 00000001800C93DD: call    sub_180088528
 * 00000001800C93E2: nop
 * 00000001800C93E3: lea     rcx, [rbp+9F60h+var_B90]
 * 00000001800C93EA: call    sub_180011570
 * 00000001800C93EF: nop
 * 00000001800C93F0: lea     rcx, [rbp+9F60h+var_BF0]
 * 00000001800C93F7: call    sub_180011570
 * 00000001800C93FC: nop
 * 00000001800C93FD: lea     rcx, dword_1801FB2A8
 * 00000001800C9404: call    sub_18000C548
 * 00000001800C9409: mov     rax, [rsi+rdi*8]
 * 00000001800C940D: mov     eax, [r15+rax]
 * 00000001800C9411: cmp     cs:dword_1801FB2AC, eax
 * 00000001800C9417: jle     loc_1800C9513
 * 00000001800C941D: lea     rcx, dword_1801FB2AC
 * 00000001800C9424: call    sub_18000C5B0
 * 00000001800C9429: cmp     cs:dword_1801FB2AC, r14d
 * 00000001800C9430: jnz     loc_1800C9513
 * 00000001800C9436: xor     edx, edx
 * 00000001800C9438: lea     rcx, [rbp+9F60h+var_9FD3]
 * 00000001800C943C: call    sub_1800A8E58
 * 00000001800C9441: mov     bl, [rax]
 * 00000001800C9443: call    sub_1800C502C
 * 00000001800C9448: mov     rdx, rax
 * 00000001800C944B: mov     r8d, 65B8h
 * 00000001800C9451: lea     rcx, [rbp+9F60h+var_9B10]
 * 00000001800C9458: call    sub_1800A8E40
 * 00000001800C945D: movups  xmm0, xmmword ptr [rax]
 * 00000001800C9460: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C9466: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C946A: mov     r9d, r12d
 * 00000001800C946D: mov     r8d, 5
 * 00000001800C9473: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C9478: lea     rcx, [rbp+9F60h+var_6230]
 * 00000001800C947F: call    sub_1800A8E0C
 * 00000001800C9484: movups  xmm6, xmmword ptr [rax]
 * 00000001800C9487: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C948B: call    sub_1800C50FC
 * 00000001800C9490: mov     r8, rax
 * 00000001800C9493: mov     r9d, r13d
 * 00000001800C9496: mov     edx, 0D2h
 * 00000001800C949B: lea     rcx, [rbp+9F60h+var_CB0]; Src
 * 00000001800C94A2: call    sub_180088448
 * 00000001800C94A7: nop
 * 00000001800C94A8: mov     r8, rax
 * 00000001800C94AB: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C94B2: lea     rcx, [rbp+9F60h+var_C50]
 * 00000001800C94B9: call    sub_18001DD3C
 * 00000001800C94BE: nop
 * 00000001800C94BF: lea     r8, aPixel; "/Pixel"
 * 00000001800C94C6: mov     rdx, rax
 * 00000001800C94C9: lea     rcx, [rbp+9F60h+var_7610]
 * 00000001800C94D0: call    sub_18001DC84
 * 00000001800C94D5: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C94DA: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C94DF: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C94E4: mov     rcx, rax
 * 00000001800C94E7: call    sub_180088528
 * 00000001800C94EC: nop
 * 00000001800C94ED: lea     rcx, [rbp+9F60h+var_C50]
 * 00000001800C94F4: call    sub_180011570
 * 00000001800C94F9: nop
 * 00000001800C94FA: lea     rcx, [rbp+9F60h+var_CB0]
 * 00000001800C9501: call    sub_180011570
 * 00000001800C9506: nop
 * 00000001800C9507: lea     rcx, dword_1801FB2AC
 * 00000001800C950E: call    sub_18000C548
 * 00000001800C9513: mov     rax, [rsi+rdi*8]
 * 00000001800C9517: mov     eax, [r15+rax]
 * 00000001800C951B: cmp     cs:dword_1801FB2B0, eax
 * 00000001800C9521: jle     loc_1800C961D
 * 00000001800C9527: lea     rcx, dword_1801FB2B0
 * 00000001800C952E: call    sub_18000C5B0
 * 00000001800C9533: cmp     cs:dword_1801FB2B0, r14d
 * 00000001800C953A: jnz     loc_1800C961D
 * 00000001800C9540: xor     edx, edx
 * 00000001800C9542: lea     rcx, [rbp+9F60h+var_9FD2]
 * 00000001800C9546: call    sub_1800A8E58
 * 00000001800C954B: mov     bl, [rax]
 * 00000001800C954D: call    sub_1800C504C
 * 00000001800C9552: mov     rdx, rax
 * 00000001800C9555: mov     r8d, 678Ch
 * 00000001800C955B: lea     rcx, [rbp+9F60h+var_9B00]
 * 00000001800C9562: call    sub_1800A8E40
 * 00000001800C9567: movups  xmm0, xmmword ptr [rax]
 * 00000001800C956A: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C9570: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C9574: mov     r9d, r12d
 * 00000001800C9577: mov     r8d, 5
 * 00000001800C957D: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C9582: lea     rcx, [rbp+9F60h+var_6210]
 * 00000001800C9589: call    sub_1800A8E0C
 * 00000001800C958E: movups  xmm6, xmmword ptr [rax]
 * 00000001800C9591: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C9595: call    sub_1800C50FC
 * 00000001800C959A: mov     r8, rax
 * 00000001800C959D: mov     r9d, r13d
 * 00000001800C95A0: mov     edx, 0D8h
 * 00000001800C95A5: lea     rcx, [rbp+9F60h+var_D70]; Src
 * 00000001800C95AC: call    sub_180088448
 * 00000001800C95B1: nop
 * 00000001800C95B2: mov     r8, rax
 * 00000001800C95B5: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C95BC: lea     rcx, [rbp+9F60h+var_D10]
 * 00000001800C95C3: call    sub_18001DD3C
 * 00000001800C95C8: nop
 * 00000001800C95C9: lea     r8, aPixel; "/Pixel"
 * 00000001800C95D0: mov     rdx, rax
 * 00000001800C95D3: lea     rcx, [rbp+9F60h+var_75B0]
 * 00000001800C95DA: call    sub_18001DC84
 * 00000001800C95DF: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C95E4: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C95E9: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C95EE: mov     rcx, rax
 * 00000001800C95F1: call    sub_180088528
 * 00000001800C95F6: nop
 * 00000001800C95F7: lea     rcx, [rbp+9F60h+var_D10]
 * 00000001800C95FE: call    sub_180011570
 * 00000001800C9603: nop
 * 00000001800C9604: lea     rcx, [rbp+9F60h+var_D70]
 * 00000001800C960B: call    sub_180011570
 * 00000001800C9610: nop
 * 00000001800C9611: lea     rcx, dword_1801FB2B0
 * 00000001800C9618: call    sub_18000C548
 * 00000001800C961D: mov     rax, [rsi+rdi*8]
 * 00000001800C9621: mov     eax, [r15+rax]
 * 00000001800C9625: cmp     cs:dword_1801FB2B4, eax
 * 00000001800C962B: jle     loc_1800C9727
 * 00000001800C9631: lea     rcx, dword_1801FB2B4
 * 00000001800C9638: call    sub_18000C5B0
 * 00000001800C963D: cmp     cs:dword_1801FB2B4, r14d
 * 00000001800C9644: jnz     loc_1800C9727
 * 00000001800C964A: xor     edx, edx
 * 00000001800C964C: lea     rcx, [rbp+9F60h+var_9FD1]
 * 00000001800C9650: call    sub_1800A8E58
 * 00000001800C9655: mov     bl, [rax]
 * 00000001800C9657: call    sub_1800C504C
 * 00000001800C965C: mov     rdx, rax
 * 00000001800C965F: mov     r8d, 678Ch
 * 00000001800C9665: lea     rcx, [rbp+9F60h+var_9AF0]
 * 00000001800C966C: call    sub_1800A8E40
 * 00000001800C9671: movups  xmm0, xmmword ptr [rax]
 * 00000001800C9674: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C967A: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C967E: mov     r9d, r12d
 * 00000001800C9681: mov     r8d, 5
 * 00000001800C9687: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C968C: lea     rcx, [rbp+9F60h+var_61F0]
 * 00000001800C9693: call    sub_1800A8E0C
 * 00000001800C9698: movups  xmm6, xmmword ptr [rax]
 * 00000001800C969B: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C969F: call    sub_1800C50FC
 * 00000001800C96A4: mov     r8, rax
 * 00000001800C96A7: mov     r9d, r13d
 * 00000001800C96AA: mov     edx, 0DAh
 * 00000001800C96AF: lea     rcx, [rbp+9F60h+var_E30]; Src
 * 00000001800C96B6: call    sub_180088448
 * 00000001800C96BB: nop
 * 00000001800C96BC: mov     r8, rax
 * 00000001800C96BF: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C96C6: lea     rcx, [rbp+9F60h+var_DD0]
 * 00000001800C96CD: call    sub_18001DD3C
 * 00000001800C96D2: nop
 * 00000001800C96D3: lea     r8, aPixel; "/Pixel"
 * 00000001800C96DA: mov     rdx, rax
 * 00000001800C96DD: lea     rcx, [rbp+9F60h+var_7550]
 * 00000001800C96E4: call    sub_18001DC84
 * 00000001800C96E9: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C96EE: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C96F3: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C96F8: mov     rcx, rax
 * 00000001800C96FB: call    sub_180088528
 * 00000001800C9700: nop
 * 00000001800C9701: lea     rcx, [rbp+9F60h+var_DD0]
 * 00000001800C9708: call    sub_180011570
 * 00000001800C970D: nop
 * 00000001800C970E: lea     rcx, [rbp+9F60h+var_E30]
 * 00000001800C9715: call    sub_180011570
 * 00000001800C971A: nop
 * 00000001800C971B: lea     rcx, dword_1801FB2B4
 * 00000001800C9722: call    sub_18000C548
 * 00000001800C9727: mov     rax, [rsi+rdi*8]
 * 00000001800C972B: mov     eax, [r15+rax]
 * 00000001800C972F: cmp     cs:dword_1801FB2B8, eax
 * 00000001800C9735: jle     loc_1800C9831
 * 00000001800C973B: lea     rcx, dword_1801FB2B8
 * 00000001800C9742: call    sub_18000C5B0
 * 00000001800C9747: cmp     cs:dword_1801FB2B8, r14d
 * 00000001800C974E: jnz     loc_1800C9831
 * 00000001800C9754: xor     edx, edx
 * 00000001800C9756: lea     rcx, [rbp+9F60h+var_9FD0]
 * 00000001800C975A: call    sub_1800A8E58
 * 00000001800C975F: mov     bl, [rax]
 * 00000001800C9761: call    sub_1800C4FBC
 * 00000001800C9766: mov     rdx, rax
 * 00000001800C9769: mov     r8d, 63E4h
 * 00000001800C976F: lea     rcx, [rbp+9F60h+var_9AE0]
 * 00000001800C9776: call    sub_1800A8E40
 * 00000001800C977B: movups  xmm0, xmmword ptr [rax]
 * 00000001800C977E: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C9784: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C9788: mov     r9d, r12d
 * 00000001800C978B: mov     r8d, 5
 * 00000001800C9791: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C9796: lea     rcx, [rbp+9F60h+var_61D0]
 * 00000001800C979D: call    sub_1800A8E0C
 * 00000001800C97A2: movups  xmm6, xmmword ptr [rax]
 * 00000001800C97A5: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C97A9: call    sub_1800C50FC
 * 00000001800C97AE: mov     r8, rax
 * 00000001800C97B1: mov     r9d, r13d
 * 00000001800C97B4: mov     edx, 0E0h
 * 00000001800C97B9: lea     rcx, [rbp+9F60h+var_EF0]; Src
 * 00000001800C97C0: call    sub_180088448
 * 00000001800C97C5: nop
 * 00000001800C97C6: mov     r8, rax
 * 00000001800C97C9: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C97D0: lea     rcx, [rbp+9F60h+var_E90]
 * 00000001800C97D7: call    sub_18001DD3C
 * 00000001800C97DC: nop
 * 00000001800C97DD: lea     r8, aPixel; "/Pixel"
 * 00000001800C97E4: mov     rdx, rax
 * 00000001800C97E7: lea     rcx, [rbp+9F60h+var_74F0]
 * 00000001800C97EE: call    sub_18001DC84
 * 00000001800C97F3: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C97F8: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C97FD: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C9802: mov     rcx, rax
 * 00000001800C9805: call    sub_180088528
 * 00000001800C980A: nop
 * 00000001800C980B: lea     rcx, [rbp+9F60h+var_E90]
 * 00000001800C9812: call    sub_180011570
 * 00000001800C9817: nop
 * 00000001800C9818: lea     rcx, [rbp+9F60h+var_EF0]
 * 00000001800C981F: call    sub_180011570
 * 00000001800C9824: nop
 * 00000001800C9825: lea     rcx, dword_1801FB2B8
 * 00000001800C982C: call    sub_18000C548
 * 00000001800C9831: mov     rax, [rsi+rdi*8]
 * 00000001800C9835: mov     eax, [r15+rax]
 * 00000001800C9839: cmp     cs:dword_1801FB2BC, eax
 * 00000001800C983F: jle     loc_1800C993B
 * 00000001800C9845: lea     rcx, dword_1801FB2BC
 * 00000001800C984C: call    sub_18000C5B0
 * 00000001800C9851: cmp     cs:dword_1801FB2BC, r14d
 * 00000001800C9858: jnz     loc_1800C993B
 * 00000001800C985E: xor     edx, edx
 * 00000001800C9860: lea     rcx, [rbp+9F60h+var_9FCF]
 * 00000001800C9864: call    sub_1800A8E58
 * 00000001800C9869: mov     bl, [rax]
 * 00000001800C986B: call    sub_1800C4FBC
 * 00000001800C9870: mov     rdx, rax
 * 00000001800C9873: mov     r8d, 63E4h
 * 00000001800C9879: lea     rcx, [rbp+9F60h+var_9AD0]
 * 00000001800C9880: call    sub_1800A8E40
 * 00000001800C9885: movups  xmm0, xmmword ptr [rax]
 * 00000001800C9888: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C988E: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C9892: mov     r9d, r12d
 * 00000001800C9895: mov     r8d, 5
 * 00000001800C989B: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C98A0: lea     rcx, [rbp+9F60h+var_61B0]
 * 00000001800C98A7: call    sub_1800A8E0C
 * 00000001800C98AC: movups  xmm6, xmmword ptr [rax]
 * 00000001800C98AF: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C98B3: call    sub_1800C50FC
 * 00000001800C98B8: mov     r8, rax
 * 00000001800C98BB: mov     r9d, r13d
 * 00000001800C98BE: mov     edx, 0E2h
 * 00000001800C98C3: lea     rcx, [rbp+9F60h+var_FB0]; Src
 * 00000001800C98CA: call    sub_180088448
 * 00000001800C98CF: nop
 * 00000001800C98D0: mov     r8, rax
 * 00000001800C98D3: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C98DA: lea     rcx, [rbp+9F60h+var_F50]
 * 00000001800C98E1: call    sub_18001DD3C
 * 00000001800C98E6: nop
 * 00000001800C98E7: lea     r8, aPixel; "/Pixel"
 * 00000001800C98EE: mov     rdx, rax
 * 00000001800C98F1: lea     rcx, [rbp+9F60h+var_7490]
 * 00000001800C98F8: call    sub_18001DC84
 * 00000001800C98FD: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C9902: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C9907: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C990C: mov     rcx, rax
 * 00000001800C990F: call    sub_180088528
 * 00000001800C9914: nop
 * 00000001800C9915: lea     rcx, [rbp+9F60h+var_F50]
 * 00000001800C991C: call    sub_180011570
 * 00000001800C9921: nop
 * 00000001800C9922: lea     rcx, [rbp+9F60h+var_FB0]
 * 00000001800C9929: call    sub_180011570
 * 00000001800C992E: nop
 * 00000001800C992F: lea     rcx, dword_1801FB2BC
 * 00000001800C9936: call    sub_18000C548
 * 00000001800C993B: mov     rax, [rsi+rdi*8]
 * 00000001800C993F: mov     eax, [r15+rax]
 * 00000001800C9943: cmp     cs:dword_1801FB2C0, eax
 * 00000001800C9949: jle     loc_1800C9A45
 * 00000001800C994F: lea     rcx, dword_1801FB2C0
 * 00000001800C9956: call    sub_18000C5B0
 * 00000001800C995B: cmp     cs:dword_1801FB2C0, r14d
 * 00000001800C9962: jnz     loc_1800C9A45
 * 00000001800C9968: xor     edx, edx
 * 00000001800C996A: lea     rcx, [rbp+9F60h+var_9FCE]
 * 00000001800C996E: call    sub_1800A8E58
 * 00000001800C9973: mov     bl, [rax]
 * 00000001800C9975: call    sub_1800C4FFC
 * 00000001800C997A: mov     rdx, rax
 * 00000001800C997D: mov     r8d, 658Ch
 * 00000001800C9983: lea     rcx, [rbp+9F60h+var_9AC0]
 * 00000001800C998A: call    sub_1800A8E40
 * 00000001800C998F: movups  xmm0, xmmword ptr [rax]
 * 00000001800C9992: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C9998: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C999C: mov     r9d, r12d
 * 00000001800C999F: mov     r8d, 5
 * 00000001800C99A5: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C99AA: lea     rcx, [rbp+9F60h+var_6190]
 * 00000001800C99B1: call    sub_1800A8E0C
 * 00000001800C99B6: movups  xmm6, xmmword ptr [rax]
 * 00000001800C99B9: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C99BD: call    sub_1800C50FC
 * 00000001800C99C2: mov     r8, rax
 * 00000001800C99C5: mov     r9d, r13d
 * 00000001800C99C8: mov     edx, 0E8h
 * 00000001800C99CD: lea     rcx, [rbp+9F60h+var_1070]; Src
 * 00000001800C99D4: call    sub_180088448
 * 00000001800C99D9: nop
 * 00000001800C99DA: mov     r8, rax
 * 00000001800C99DD: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C99E4: lea     rcx, [rbp+9F60h+var_1010]
 * 00000001800C99EB: call    sub_18001DD3C
 * 00000001800C99F0: nop
 * 00000001800C99F1: lea     r8, aPixel; "/Pixel"
 * 00000001800C99F8: mov     rdx, rax
 * 00000001800C99FB: lea     rcx, [rbp+9F60h+var_7430]
 * 00000001800C9A02: call    sub_18001DC84
 * 00000001800C9A07: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C9A0C: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C9A11: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C9A16: mov     rcx, rax
 * 00000001800C9A19: call    sub_180088528
 * 00000001800C9A1E: nop
 * 00000001800C9A1F: lea     rcx, [rbp+9F60h+var_1010]
 * 00000001800C9A26: call    sub_180011570
 * 00000001800C9A2B: nop
 * 00000001800C9A2C: lea     rcx, [rbp+9F60h+var_1070]
 * 00000001800C9A33: call    sub_180011570
 * 00000001800C9A38: nop
 * 00000001800C9A39: lea     rcx, dword_1801FB2C0
 * 00000001800C9A40: call    sub_18000C548
 * 00000001800C9A45: mov     rax, [rsi+rdi*8]
 * 00000001800C9A49: mov     eax, [r15+rax]
 * 00000001800C9A4D: cmp     cs:dword_1801FB2C4, eax
 * 00000001800C9A53: jle     loc_1800C9B4F
 * 00000001800C9A59: lea     rcx, dword_1801FB2C4
 * 00000001800C9A60: call    sub_18000C5B0
 * 00000001800C9A65: cmp     cs:dword_1801FB2C4, r14d
 * 00000001800C9A6C: jnz     loc_1800C9B4F
 * 00000001800C9A72: xor     edx, edx
 * 00000001800C9A74: lea     rcx, [rbp+9F60h+var_9FCD]
 * 00000001800C9A78: call    sub_1800A8E58
 * 00000001800C9A7D: mov     bl, [rax]
 * 00000001800C9A7F: call    sub_1800C4FFC
 * 00000001800C9A84: mov     rdx, rax
 * 00000001800C9A87: mov     r8d, 658Ch
 * 00000001800C9A8D: lea     rcx, [rbp+9F60h+var_9AB0]
 * 00000001800C9A94: call    sub_1800A8E40
 * 00000001800C9A99: movups  xmm0, xmmword ptr [rax]
 * 00000001800C9A9C: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C9AA2: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C9AA6: mov     r9d, r12d
 * 00000001800C9AA9: mov     r8d, 5
 * 00000001800C9AAF: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C9AB4: lea     rcx, [rbp+9F60h+var_6170]
 * 00000001800C9ABB: call    sub_1800A8E0C
 * 00000001800C9AC0: movups  xmm6, xmmword ptr [rax]
 * 00000001800C9AC3: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C9AC7: call    sub_1800C50FC
 * 00000001800C9ACC: mov     r8, rax
 * 00000001800C9ACF: mov     r9d, r13d
 * 00000001800C9AD2: mov     edx, 0EAh
 * 00000001800C9AD7: lea     rcx, [rbp+9F60h+var_1130]; Src
 * 00000001800C9ADE: call    sub_180088448
 * 00000001800C9AE3: nop
 * 00000001800C9AE4: mov     r8, rax
 * 00000001800C9AE7: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C9AEE: lea     rcx, [rbp+9F60h+var_10D0]
 * 00000001800C9AF5: call    sub_18001DD3C
 * 00000001800C9AFA: nop
 * 00000001800C9AFB: lea     r8, aPixel; "/Pixel"
 * 00000001800C9B02: mov     rdx, rax
 * 00000001800C9B05: lea     rcx, [rbp+9F60h+var_73D0]
 * 00000001800C9B0C: call    sub_18001DC84
 * 00000001800C9B11: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C9B16: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C9B1B: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C9B20: mov     rcx, rax
 * 00000001800C9B23: call    sub_180088528
 * 00000001800C9B28: nop
 * 00000001800C9B29: lea     rcx, [rbp+9F60h+var_10D0]
 * 00000001800C9B30: call    sub_180011570
 * 00000001800C9B35: nop
 * 00000001800C9B36: lea     rcx, [rbp+9F60h+var_1130]
 * 00000001800C9B3D: call    sub_180011570
 * 00000001800C9B42: nop
 * 00000001800C9B43: lea     rcx, dword_1801FB2C4
 * 00000001800C9B4A: call    sub_18000C548
 * 00000001800C9B4F: mov     rax, [rsi+rdi*8]
 * 00000001800C9B53: mov     eax, [r15+rax]
 * 00000001800C9B57: cmp     cs:dword_1801FB2C8, eax
 * 00000001800C9B5D: jle     loc_1800C9C59
 * 00000001800C9B63: lea     rcx, dword_1801FB2C8
 * 00000001800C9B6A: call    sub_18000C5B0
 * 00000001800C9B6F: cmp     cs:dword_1801FB2C8, r14d
 * 00000001800C9B76: jnz     loc_1800C9C59
 * 00000001800C9B7C: xor     edx, edx
 * 00000001800C9B7E: lea     rcx, [rbp+9F60h+var_9FCC]
 * 00000001800C9B82: call    sub_1800A8E58
 * 00000001800C9B87: mov     bl, [rax]
 * 00000001800C9B89: call    sub_1800C502C
 * 00000001800C9B8E: mov     rdx, rax
 * 00000001800C9B91: mov     r8d, 65B8h
 * 00000001800C9B97: lea     rcx, [rbp+9F60h+var_9AA0]
 * 00000001800C9B9E: call    sub_1800A8E40
 * 00000001800C9BA3: movups  xmm0, xmmword ptr [rax]
 * 00000001800C9BA6: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C9BAC: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C9BB0: mov     r9d, r12d
 * 00000001800C9BB3: mov     r8d, 5
 * 00000001800C9BB9: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C9BBE: lea     rcx, [rbp+9F60h+var_6150]
 * 00000001800C9BC5: call    sub_1800A8E0C
 * 00000001800C9BCA: movups  xmm6, xmmword ptr [rax]
 * 00000001800C9BCD: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C9BD1: call    sub_1800C50FC
 * 00000001800C9BD6: mov     r8, rax
 * 00000001800C9BD9: mov     r9d, r13d
 * 00000001800C9BDC: mov     edx, 0F0h
 * 00000001800C9BE1: lea     rcx, [rbp+9F60h+var_11F0]; Src
 * 00000001800C9BE8: call    sub_180088448
 * 00000001800C9BED: nop
 * 00000001800C9BEE: mov     r8, rax
 * 00000001800C9BF1: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C9BF8: lea     rcx, [rbp+9F60h+var_1190]
 * 00000001800C9BFF: call    sub_18001DD3C
 * 00000001800C9C04: nop
 * 00000001800C9C05: lea     r8, aPixel; "/Pixel"
 * 00000001800C9C0C: mov     rdx, rax
 * 00000001800C9C0F: lea     rcx, [rbp+9F60h+var_7370]
 * 00000001800C9C16: call    sub_18001DC84
 * 00000001800C9C1B: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C9C20: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C9C25: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C9C2A: mov     rcx, rax
 * 00000001800C9C2D: call    sub_180088528
 * 00000001800C9C32: nop
 * 00000001800C9C33: lea     rcx, [rbp+9F60h+var_1190]
 * 00000001800C9C3A: call    sub_180011570
 * 00000001800C9C3F: nop
 * 00000001800C9C40: lea     rcx, [rbp+9F60h+var_11F0]
 * 00000001800C9C47: call    sub_180011570
 * 00000001800C9C4C: nop
 * 00000001800C9C4D: lea     rcx, dword_1801FB2C8
 * 00000001800C9C54: call    sub_18000C548
 * 00000001800C9C59: mov     rax, [rsi+rdi*8]
 * 00000001800C9C5D: mov     eax, [r15+rax]
 * 00000001800C9C61: cmp     cs:dword_1801FB2CC, eax
 * 00000001800C9C67: jle     loc_1800C9D63
 * 00000001800C9C6D: lea     rcx, dword_1801FB2CC
 * 00000001800C9C74: call    sub_18000C5B0
 * 00000001800C9C79: cmp     cs:dword_1801FB2CC, r14d
 * 00000001800C9C80: jnz     loc_1800C9D63
 * 00000001800C9C86: xor     edx, edx
 * 00000001800C9C88: lea     rcx, [rbp+9F60h+var_9FCB]
 * 00000001800C9C8C: call    sub_1800A8E58
 * 00000001800C9C91: mov     bl, [rax]
 * 00000001800C9C93: call    sub_1800C502C
 * 00000001800C9C98: mov     rdx, rax
 * 00000001800C9C9B: mov     r8d, 65B8h
 * 00000001800C9CA1: lea     rcx, [rbp+9F60h+var_9A90]
 * 00000001800C9CA8: call    sub_1800A8E40
 * 00000001800C9CAD: movups  xmm0, xmmword ptr [rax]
 * 00000001800C9CB0: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C9CB6: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C9CBA: mov     r9d, r12d
 * 00000001800C9CBD: mov     r8d, 5
 * 00000001800C9CC3: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C9CC8: lea     rcx, [rbp+9F60h+var_6A10]
 * 00000001800C9CCF: call    sub_1800A8E0C
 * 00000001800C9CD4: movups  xmm6, xmmword ptr [rax]
 * 00000001800C9CD7: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C9CDB: call    sub_1800C50FC
 * 00000001800C9CE0: mov     r8, rax
 * 00000001800C9CE3: mov     r9d, r13d
 * 00000001800C9CE6: mov     edx, 0F2h
 * 00000001800C9CEB: lea     rcx, [rbp+9F60h+var_12B0]; Src
 * 00000001800C9CF2: call    sub_180088448
 * 00000001800C9CF7: nop
 * 00000001800C9CF8: mov     r8, rax
 * 00000001800C9CFB: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C9D02: lea     rcx, [rbp+9F60h+var_1250]
 * 00000001800C9D09: call    sub_18001DD3C
 * 00000001800C9D0E: nop
 * 00000001800C9D0F: lea     r8, aPixel; "/Pixel"
 * 00000001800C9D16: mov     rdx, rax
 * 00000001800C9D19: lea     rcx, [rbp+9F60h+var_7310]
 * 00000001800C9D20: call    sub_18001DC84
 * 00000001800C9D25: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C9D2A: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C9D2F: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C9D34: mov     rcx, rax
 * 00000001800C9D37: call    sub_180088528
 * 00000001800C9D3C: nop
 * 00000001800C9D3D: lea     rcx, [rbp+9F60h+var_1250]
 * 00000001800C9D44: call    sub_180011570
 * 00000001800C9D49: nop
 * 00000001800C9D4A: lea     rcx, [rbp+9F60h+var_12B0]
 * 00000001800C9D51: call    sub_180011570
 * 00000001800C9D56: nop
 * 00000001800C9D57: lea     rcx, dword_1801FB2CC
 * 00000001800C9D5E: call    sub_18000C548
 * 00000001800C9D63: mov     rax, [rsi+rdi*8]
 * 00000001800C9D67: mov     eax, [r15+rax]
 * 00000001800C9D6B: cmp     cs:dword_1801FB2D0, eax
 * 00000001800C9D71: jle     loc_1800C9E6D
 * 00000001800C9D77: lea     rcx, dword_1801FB2D0
 * 00000001800C9D7E: call    sub_18000C5B0
 * 00000001800C9D83: cmp     cs:dword_1801FB2D0, r14d
 * 00000001800C9D8A: jnz     loc_1800C9E6D
 * 00000001800C9D90: xor     edx, edx
 * 00000001800C9D92: lea     rcx, [rbp+9F60h+var_9FCA]
 * 00000001800C9D96: call    sub_1800A8E58
 * 00000001800C9D9B: mov     bl, [rax]
 * 00000001800C9D9D: call    sub_1800C504C
 * 00000001800C9DA2: mov     rdx, rax
 * 00000001800C9DA5: mov     r8d, 678Ch
 * 00000001800C9DAB: lea     rcx, [rbp+9F60h+var_9A80]
 * 00000001800C9DB2: call    sub_1800A8E40
 * 00000001800C9DB7: movups  xmm0, xmmword ptr [rax]
 * 00000001800C9DBA: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C9DC0: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C9DC4: mov     r9d, r12d
 * 00000001800C9DC7: mov     r8d, 5
 * 00000001800C9DCD: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C9DD2: lea     rcx, [rbp+9F60h+var_6130]
 * 00000001800C9DD9: call    sub_1800A8E0C
 * 00000001800C9DDE: movups  xmm6, xmmword ptr [rax]
 * 00000001800C9DE1: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C9DE5: call    sub_1800C50FC
 * 00000001800C9DEA: mov     r8, rax
 * 00000001800C9DED: mov     r9d, r13d
 * 00000001800C9DF0: mov     edx, 0F8h
 * 00000001800C9DF5: lea     rcx, [rbp+9F60h+var_1370]; Src
 * 00000001800C9DFC: call    sub_180088448
 * 00000001800C9E01: nop
 * 00000001800C9E02: mov     r8, rax
 * 00000001800C9E05: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C9E0C: lea     rcx, [rbp+9F60h+var_1310]
 * 00000001800C9E13: call    sub_18001DD3C
 * 00000001800C9E18: nop
 * 00000001800C9E19: lea     r8, aPixel; "/Pixel"
 * 00000001800C9E20: mov     rdx, rax
 * 00000001800C9E23: lea     rcx, [rbp+9F60h+var_72B0]
 * 00000001800C9E2A: call    sub_18001DC84
 * 00000001800C9E2F: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C9E34: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C9E39: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C9E3E: mov     rcx, rax
 * 00000001800C9E41: call    sub_180088528
 * 00000001800C9E46: nop
 * 00000001800C9E47: lea     rcx, [rbp+9F60h+var_1310]
 * 00000001800C9E4E: call    sub_180011570
 * 00000001800C9E53: nop
 * 00000001800C9E54: lea     rcx, [rbp+9F60h+var_1370]
 * 00000001800C9E5B: call    sub_180011570
 * 00000001800C9E60: nop
 * 00000001800C9E61: lea     rcx, dword_1801FB2D0
 * 00000001800C9E68: call    sub_18000C548
 * 00000001800C9E6D: mov     rax, [rsi+rdi*8]
 * 00000001800C9E71: mov     eax, [r15+rax]
 * 00000001800C9E75: cmp     cs:dword_1801FB2D4, eax
 * 00000001800C9E7B: jle     loc_1800C9F77
 * 00000001800C9E81: lea     rcx, dword_1801FB2D4
 * 00000001800C9E88: call    sub_18000C5B0
 * 00000001800C9E8D: cmp     cs:dword_1801FB2D4, r14d
 * 00000001800C9E94: jnz     loc_1800C9F77
 * 00000001800C9E9A: xor     edx, edx
 * 00000001800C9E9C: lea     rcx, [rbp+9F60h+var_9FC9]
 * 00000001800C9EA0: call    sub_1800A8E58
 * 00000001800C9EA5: mov     bl, [rax]
 * 00000001800C9EA7: call    sub_1800C504C
 * 00000001800C9EAC: mov     rdx, rax
 * 00000001800C9EAF: mov     r8d, 678Ch
 * 00000001800C9EB5: lea     rcx, [rbp+9F60h+var_9A70]
 * 00000001800C9EBC: call    sub_1800A8E40
 * 00000001800C9EC1: movups  xmm0, xmmword ptr [rax]
 * 00000001800C9EC4: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C9ECA: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C9ECE: mov     r9d, r12d
 * 00000001800C9ED1: mov     r8d, 5
 * 00000001800C9ED7: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C9EDC: lea     rcx, [rbp+9F60h+var_6110]
 * 00000001800C9EE3: call    sub_1800A8E0C
 * 00000001800C9EE8: movups  xmm6, xmmword ptr [rax]
 * 00000001800C9EEB: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C9EEF: call    sub_1800C50FC
 * 00000001800C9EF4: mov     r8, rax
 * 00000001800C9EF7: mov     r9d, r13d
 * 00000001800C9EFA: mov     edx, 0FAh
 * 00000001800C9EFF: lea     rcx, [rbp+9F60h+var_1430]; Src
 * 00000001800C9F06: call    sub_180088448
 * 00000001800C9F0B: nop
 * 00000001800C9F0C: mov     r8, rax
 * 00000001800C9F0F: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800C9F16: lea     rcx, [rbp+9F60h+var_13D0]
 * 00000001800C9F1D: call    sub_18001DD3C
 * 00000001800C9F22: nop
 * 00000001800C9F23: lea     r8, aPixel; "/Pixel"
 * 00000001800C9F2A: mov     rdx, rax
 * 00000001800C9F2D: lea     rcx, [rbp+9F60h+var_7250]
 * 00000001800C9F34: call    sub_18001DC84
 * 00000001800C9F39: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800C9F3E: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800C9F43: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C9F48: mov     rcx, rax
 * 00000001800C9F4B: call    sub_180088528
 * 00000001800C9F50: nop
 * 00000001800C9F51: lea     rcx, [rbp+9F60h+var_13D0]
 * 00000001800C9F58: call    sub_180011570
 * 00000001800C9F5D: nop
 * 00000001800C9F5E: lea     rcx, [rbp+9F60h+var_1430]
 * 00000001800C9F65: call    sub_180011570
 * 00000001800C9F6A: nop
 * 00000001800C9F6B: lea     rcx, dword_1801FB2D4
 * 00000001800C9F72: call    sub_18000C548
 * 00000001800C9F77: mov     rax, [rsi+rdi*8]
 * 00000001800C9F7B: mov     eax, [r15+rax]
 * 00000001800C9F7F: cmp     cs:dword_1801FB2D8, eax
 * 00000001800C9F85: jle     loc_1800CA081
 * 00000001800C9F8B: lea     rcx, dword_1801FB2D8
 * 00000001800C9F92: call    sub_18000C5B0
 * 00000001800C9F97: cmp     cs:dword_1801FB2D8, r14d
 * 00000001800C9F9E: jnz     loc_1800CA081
 * 00000001800C9FA4: xor     edx, edx
 * 00000001800C9FA6: lea     rcx, [rbp+9F60h+var_9FC8]
 * 00000001800C9FAA: call    sub_1800A8E58
 * 00000001800C9FAF: mov     bl, [rax]
 * 00000001800C9FB1: call    sub_1800C509C
 * 00000001800C9FB6: mov     rdx, rax
 * 00000001800C9FB9: mov     r8d, 672Ch
 * 00000001800C9FBF: lea     rcx, [rbp+9F60h+var_9A60]
 * 00000001800C9FC6: call    sub_1800A8E40
 * 00000001800C9FCB: movups  xmm0, xmmword ptr [rax]
 * 00000001800C9FCE: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800C9FD4: mov     [rsp+0A060h+var_A040], bl
 * 00000001800C9FD8: mov     r9d, r12d
 * 00000001800C9FDB: mov     r8d, 5
 * 00000001800C9FE1: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800C9FE6: lea     rcx, [rbp+9F60h+var_60F0]
 * 00000001800C9FED: call    sub_1800A8E0C
 * 00000001800C9FF2: movups  xmm6, xmmword ptr [rax]
 * 00000001800C9FF5: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800C9FF9: call    sub_1800C50FC
 * 00000001800C9FFE: mov     r8, rax
 * 00000001800CA001: mov     r9d, r13d
 * 00000001800CA004: mov     edx, 100h
 * 00000001800CA009: lea     rcx, [rbp+9F60h+var_14F0]; Src
 * 00000001800CA010: call    sub_180088448
 * 00000001800CA015: nop
 * 00000001800CA016: mov     r8, rax
 * 00000001800CA019: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CA020: lea     rcx, [rbp+9F60h+var_1490]
 * 00000001800CA027: call    sub_18001DD3C
 * 00000001800CA02C: nop
 * 00000001800CA02D: lea     r8, aPixel; "/Pixel"
 * 00000001800CA034: mov     rdx, rax
 * 00000001800CA037: lea     rcx, [rbp+9F60h+var_71F0]
 * 00000001800CA03E: call    sub_18001DC84
 * 00000001800CA043: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CA048: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CA04D: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CA052: mov     rcx, rax
 * 00000001800CA055: call    sub_180088528
 * 00000001800CA05A: nop
 * 00000001800CA05B: lea     rcx, [rbp+9F60h+var_1490]
 * 00000001800CA062: call    sub_180011570
 * 00000001800CA067: nop
 * 00000001800CA068: lea     rcx, [rbp+9F60h+var_14F0]
 * 00000001800CA06F: call    sub_180011570
 * 00000001800CA074: nop
 * 00000001800CA075: lea     rcx, dword_1801FB2D8
 * 00000001800CA07C: call    sub_18000C548
 * 00000001800CA081: mov     rax, [rsi+rdi*8]
 * 00000001800CA085: mov     eax, [r15+rax]
 * 00000001800CA089: cmp     cs:dword_1801FB2DC, eax
 * 00000001800CA08F: jle     loc_1800CA18B
 * 00000001800CA095: lea     rcx, dword_1801FB2DC
 * 00000001800CA09C: call    sub_18000C5B0
 * 00000001800CA0A1: cmp     cs:dword_1801FB2DC, r14d
 * 00000001800CA0A8: jnz     loc_1800CA18B
 * 00000001800CA0AE: xor     edx, edx
 * 00000001800CA0B0: lea     rcx, [rbp+9F60h+var_9FC7]
 * 00000001800CA0B4: call    sub_1800A8E58
 * 00000001800CA0B9: mov     bl, [rax]
 * 00000001800CA0BB: call    sub_1800C509C
 * 00000001800CA0C0: mov     rdx, rax
 * 00000001800CA0C3: mov     r8d, 672Ch
 * 00000001800CA0C9: lea     rcx, [rbp+9F60h+var_9A50]
 * 00000001800CA0D0: call    sub_1800A8E40
 * 00000001800CA0D5: movups  xmm0, xmmword ptr [rax]
 * 00000001800CA0D8: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CA0DE: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CA0E2: mov     r9d, r12d
 * 00000001800CA0E5: mov     r8d, 5
 * 00000001800CA0EB: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CA0F0: lea     rcx, [rbp+9F60h+var_60D0]
 * 00000001800CA0F7: call    sub_1800A8E0C
 * 00000001800CA0FC: movups  xmm6, xmmword ptr [rax]
 * 00000001800CA0FF: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CA103: call    sub_1800C50FC
 * 00000001800CA108: mov     r8, rax
 * 00000001800CA10B: mov     r9d, r13d
 * 00000001800CA10E: mov     edx, 102h
 * 00000001800CA113: lea     rcx, [rbp+9F60h+var_15B0]; Src
 * 00000001800CA11A: call    sub_180088448
 * 00000001800CA11F: nop
 * 00000001800CA120: mov     r8, rax
 * 00000001800CA123: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CA12A: lea     rcx, [rbp+9F60h+var_1550]
 * 00000001800CA131: call    sub_18001DD3C
 * 00000001800CA136: nop
 * 00000001800CA137: lea     r8, aPixel; "/Pixel"
 * 00000001800CA13E: mov     rdx, rax
 * 00000001800CA141: lea     rcx, [rbp+9F60h+var_7190]
 * 00000001800CA148: call    sub_18001DC84
 * 00000001800CA14D: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CA152: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CA157: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CA15C: mov     rcx, rax
 * 00000001800CA15F: call    sub_180088528
 * 00000001800CA164: nop
 * 00000001800CA165: lea     rcx, [rbp+9F60h+var_1550]
 * 00000001800CA16C: call    sub_180011570
 * 00000001800CA171: nop
 * 00000001800CA172: lea     rcx, [rbp+9F60h+var_15B0]
 * 00000001800CA179: call    sub_180011570
 * 00000001800CA17E: nop
 * 00000001800CA17F: lea     rcx, dword_1801FB2DC
 * 00000001800CA186: call    sub_18000C548
 * 00000001800CA18B: mov     rax, [rsi+rdi*8]
 * 00000001800CA18F: mov     eax, [r15+rax]
 * 00000001800CA193: cmp     cs:dword_1801FB2E0, eax
 * 00000001800CA199: jle     loc_1800CA295
 * 00000001800CA19F: lea     rcx, dword_1801FB2E0
 * 00000001800CA1A6: call    sub_18000C5B0
 * 00000001800CA1AB: cmp     cs:dword_1801FB2E0, r14d
 * 00000001800CA1B2: jnz     loc_1800CA295
 * 00000001800CA1B8: xor     edx, edx
 * 00000001800CA1BA: lea     rcx, [rbp+9F60h+var_9FC6]
 * 00000001800CA1BE: call    sub_1800A8E58
 * 00000001800CA1C3: mov     bl, [rax]
 * 00000001800CA1C5: call    sub_1800C50AC
 * 00000001800CA1CA: mov     rdx, rax
 * 00000001800CA1CD: mov     r8d, 34E0h
 * 00000001800CA1D3: lea     rcx, [rbp+9F60h+var_9A40]
 * 00000001800CA1DA: call    sub_1800A8E40
 * 00000001800CA1DF: movups  xmm0, xmmword ptr [rax]
 * 00000001800CA1E2: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CA1E8: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CA1EC: mov     r9d, r12d
 * 00000001800CA1EF: mov     r8d, 5
 * 00000001800CA1F5: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CA1FA: lea     rcx, [rbp+9F60h+var_60B0]
 * 00000001800CA201: call    sub_1800A8E0C
 * 00000001800CA206: movups  xmm6, xmmword ptr [rax]
 * 00000001800CA209: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CA20D: call    sub_1800C50FC
 * 00000001800CA212: mov     r8, rax
 * 00000001800CA215: mov     r9d, r13d
 * 00000001800CA218: mov     edx, 104h
 * 00000001800CA21D: lea     rcx, [rbp+9F60h+var_1670]; Src
 * 00000001800CA224: call    sub_180088448
 * 00000001800CA229: nop
 * 00000001800CA22A: mov     r8, rax
 * 00000001800CA22D: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CA234: lea     rcx, [rbp+9F60h+var_1610]
 * 00000001800CA23B: call    sub_18001DD3C
 * 00000001800CA240: nop
 * 00000001800CA241: lea     r8, aPixel; "/Pixel"
 * 00000001800CA248: mov     rdx, rax
 * 00000001800CA24B: lea     rcx, [rbp+9F60h+var_7130]
 * 00000001800CA252: call    sub_18001DC84
 * 00000001800CA257: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CA25C: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CA261: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CA266: mov     rcx, rax
 * 00000001800CA269: call    sub_180088528
 * 00000001800CA26E: nop
 * 00000001800CA26F: lea     rcx, [rbp+9F60h+var_1610]
 * 00000001800CA276: call    sub_180011570
 * 00000001800CA27B: nop
 * 00000001800CA27C: lea     rcx, [rbp+9F60h+var_1670]
 * 00000001800CA283: call    sub_180011570
 * 00000001800CA288: nop
 * 00000001800CA289: lea     rcx, dword_1801FB2E0
 * 00000001800CA290: call    sub_18000C548
 * 00000001800CA295: mov     rax, [rsi+rdi*8]
 * 00000001800CA299: mov     eax, [r15+rax]
 * 00000001800CA29D: cmp     cs:dword_1801FB2E4, eax
 * 00000001800CA2A3: jle     loc_1800CA39F
 * 00000001800CA2A9: lea     rcx, dword_1801FB2E4
 * 00000001800CA2B0: call    sub_18000C5B0
 * 00000001800CA2B5: cmp     cs:dword_1801FB2E4, r14d
 * 00000001800CA2BC: jnz     loc_1800CA39F
 * 00000001800CA2C2: xor     edx, edx
 * 00000001800CA2C4: lea     rcx, [rbp+9F60h+var_9FC5]
 * 00000001800CA2C8: call    sub_1800A8E58
 * 00000001800CA2CD: mov     bl, [rax]
 * 00000001800CA2CF: call    sub_1800C50AC
 * 00000001800CA2D4: mov     rdx, rax
 * 00000001800CA2D7: mov     r8d, 34E0h
 * 00000001800CA2DD: lea     rcx, [rbp+9F60h+var_9A30]
 * 00000001800CA2E4: call    sub_1800A8E40
 * 00000001800CA2E9: movups  xmm0, xmmword ptr [rax]
 * 00000001800CA2EC: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CA2F2: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CA2F6: mov     r9d, r12d
 * 00000001800CA2F9: mov     r8d, 5
 * 00000001800CA2FF: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CA304: lea     rcx, [rbp+9F60h+var_6090]
 * 00000001800CA30B: call    sub_1800A8E0C
 * 00000001800CA310: movups  xmm6, xmmword ptr [rax]
 * 00000001800CA313: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CA317: call    sub_1800C50FC
 * 00000001800CA31C: mov     r8, rax
 * 00000001800CA31F: mov     r9d, r13d
 * 00000001800CA322: mov     edx, 106h
 * 00000001800CA327: lea     rcx, [rbp+9F60h+var_1730]; Src
 * 00000001800CA32E: call    sub_180088448
 * 00000001800CA333: nop
 * 00000001800CA334: mov     r8, rax
 * 00000001800CA337: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CA33E: lea     rcx, [rbp+9F60h+var_16D0]
 * 00000001800CA345: call    sub_18001DD3C
 * 00000001800CA34A: nop
 * 00000001800CA34B: lea     r8, aPixel; "/Pixel"
 * 00000001800CA352: mov     rdx, rax
 * 00000001800CA355: lea     rcx, [rbp+9F60h+var_70D0]
 * 00000001800CA35C: call    sub_18001DC84
 * 00000001800CA361: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CA366: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CA36B: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CA370: mov     rcx, rax
 * 00000001800CA373: call    sub_180088528
 * 00000001800CA378: nop
 * 00000001800CA379: lea     rcx, [rbp+9F60h+var_16D0]
 * 00000001800CA380: call    sub_180011570
 * 00000001800CA385: nop
 * 00000001800CA386: lea     rcx, [rbp+9F60h+var_1730]
 * 00000001800CA38D: call    sub_180011570
 * 00000001800CA392: nop
 * 00000001800CA393: lea     rcx, dword_1801FB2E4
 * 00000001800CA39A: call    sub_18000C548
 * 00000001800CA39F: mov     rax, [rsi+rdi*8]
 * 00000001800CA3A3: mov     eax, [r15+rax]
 * 00000001800CA3A7: cmp     cs:dword_1801FB2E8, eax
 * 00000001800CA3AD: jle     loc_1800CA4A9
 * 00000001800CA3B3: lea     rcx, dword_1801FB2E8
 * 00000001800CA3BA: call    sub_18000C5B0
 * 00000001800CA3BF: cmp     cs:dword_1801FB2E8, r14d
 * 00000001800CA3C6: jnz     loc_1800CA4A9
 * 00000001800CA3CC: xor     edx, edx
 * 00000001800CA3CE: lea     rcx, [rbp+9F60h+var_9FC4]
 * 00000001800CA3D2: call    sub_1800A8E58
 * 00000001800CA3D7: mov     bl, [rax]
 * 00000001800CA3D9: call    sub_1800C50BC
 * 00000001800CA3DE: mov     rdx, rax
 * 00000001800CA3E1: mov     r8d, 68BCh
 * 00000001800CA3E7: lea     rcx, [rbp+9F60h+var_9A20]
 * 00000001800CA3EE: call    sub_1800A8E40
 * 00000001800CA3F3: movups  xmm0, xmmword ptr [rax]
 * 00000001800CA3F6: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CA3FC: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CA400: mov     r9d, r12d
 * 00000001800CA403: mov     r8d, 5
 * 00000001800CA409: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CA40E: lea     rcx, [rbp+9F60h+var_6070]
 * 00000001800CA415: call    sub_1800A8E0C
 * 00000001800CA41A: movups  xmm6, xmmword ptr [rax]
 * 00000001800CA41D: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CA421: call    sub_1800C50FC
 * 00000001800CA426: mov     r8, rax
 * 00000001800CA429: mov     r9d, r13d
 * 00000001800CA42C: mov     edx, 108h
 * 00000001800CA431: lea     rcx, [rbp+9F60h+var_17F0]; Src
 * 00000001800CA438: call    sub_180088448
 * 00000001800CA43D: nop
 * 00000001800CA43E: mov     r8, rax
 * 00000001800CA441: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CA448: lea     rcx, [rbp+9F60h+var_1790]
 * 00000001800CA44F: call    sub_18001DD3C
 * 00000001800CA454: nop
 * 00000001800CA455: lea     r8, aPixel; "/Pixel"
 * 00000001800CA45C: mov     rdx, rax
 * 00000001800CA45F: lea     rcx, [rbp+9F60h+var_7070]
 * 00000001800CA466: call    sub_18001DC84
 * 00000001800CA46B: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CA470: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CA475: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CA47A: mov     rcx, rax
 * 00000001800CA47D: call    sub_180088528
 * 00000001800CA482: nop
 * 00000001800CA483: lea     rcx, [rbp+9F60h+var_1790]
 * 00000001800CA48A: call    sub_180011570
 * 00000001800CA48F: nop
 * 00000001800CA490: lea     rcx, [rbp+9F60h+var_17F0]
 * 00000001800CA497: call    sub_180011570
 * 00000001800CA49C: nop
 * 00000001800CA49D: lea     rcx, dword_1801FB2E8
 * 00000001800CA4A4: call    sub_18000C548
 * 00000001800CA4A9: mov     rax, [rsi+rdi*8]
 * 00000001800CA4AD: mov     eax, [r15+rax]
 * 00000001800CA4B1: cmp     cs:dword_1801FB2EC, eax
 * 00000001800CA4B7: jle     loc_1800CA5B3
 * 00000001800CA4BD: lea     rcx, dword_1801FB2EC
 * 00000001800CA4C4: call    sub_18000C5B0
 * 00000001800CA4C9: cmp     cs:dword_1801FB2EC, r14d
 * 00000001800CA4D0: jnz     loc_1800CA5B3
 * 00000001800CA4D6: xor     edx, edx
 * 00000001800CA4D8: lea     rcx, [rbp+9F60h+var_9FC3]
 * 00000001800CA4DC: call    sub_1800A8E58
 * 00000001800CA4E1: mov     bl, [rax]
 * 00000001800CA4E3: call    sub_1800C50BC
 * 00000001800CA4E8: mov     rdx, rax
 * 00000001800CA4EB: mov     r8d, 68BCh
 * 00000001800CA4F1: lea     rcx, [rbp+9F60h+var_9A10]
 * 00000001800CA4F8: call    sub_1800A8E40
 * 00000001800CA4FD: movups  xmm0, xmmword ptr [rax]
 * 00000001800CA500: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CA506: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CA50A: mov     r9d, r12d
 * 00000001800CA50D: mov     r8d, 5
 * 00000001800CA513: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CA518: lea     rcx, [rbp+9F60h+var_6050]
 * 00000001800CA51F: call    sub_1800A8E0C
 * 00000001800CA524: movups  xmm6, xmmword ptr [rax]
 * 00000001800CA527: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CA52B: call    sub_1800C50FC
 * 00000001800CA530: mov     r8, rax
 * 00000001800CA533: mov     r9d, r13d
 * 00000001800CA536: mov     edx, 10Ah
 * 00000001800CA53B: lea     rcx, [rbp+9F60h+var_18B0]; Src
 * 00000001800CA542: call    sub_180088448
 * 00000001800CA547: nop
 * 00000001800CA548: mov     r8, rax
 * 00000001800CA54B: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CA552: lea     rcx, [rbp+9F60h+var_1850]
 * 00000001800CA559: call    sub_18001DD3C
 * 00000001800CA55E: nop
 * 00000001800CA55F: lea     r8, aPixel; "/Pixel"
 * 00000001800CA566: mov     rdx, rax
 * 00000001800CA569: lea     rcx, [rbp+9F60h+var_7010]
 * 00000001800CA570: call    sub_18001DC84
 * 00000001800CA575: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CA57A: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CA57F: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CA584: mov     rcx, rax
 * 00000001800CA587: call    sub_180088528
 * 00000001800CA58C: nop
 * 00000001800CA58D: lea     rcx, [rbp+9F60h+var_1850]
 * 00000001800CA594: call    sub_180011570
 * 00000001800CA599: nop
 * 00000001800CA59A: lea     rcx, [rbp+9F60h+var_18B0]
 * 00000001800CA5A1: call    sub_180011570
 * 00000001800CA5A6: nop
 * 00000001800CA5A7: lea     rcx, dword_1801FB2EC
 * 00000001800CA5AE: call    sub_18000C548
 * 00000001800CA5B3: mov     rax, [rsi+rdi*8]
 * 00000001800CA5B7: mov     eax, [r15+rax]
 * 00000001800CA5BB: cmp     cs:dword_1801FB2F0, eax
 * 00000001800CA5C1: jle     loc_1800CA6BD
 * 00000001800CA5C7: lea     rcx, dword_1801FB2F0
 * 00000001800CA5CE: call    sub_18000C5B0
 * 00000001800CA5D3: cmp     cs:dword_1801FB2F0, r14d
 * 00000001800CA5DA: jnz     loc_1800CA6BD
 * 00000001800CA5E0: xor     edx, edx
 * 00000001800CA5E2: lea     rcx, [rbp+9F60h+var_9FC2]
 * 00000001800CA5E6: call    sub_1800A8E58
 * 00000001800CA5EB: mov     bl, [rax]
 * 00000001800CA5ED: call    sub_1800C50CC
 * 00000001800CA5F2: mov     rdx, rax
 * 00000001800CA5F5: mov     r8d, 6908h
 * 00000001800CA5FB: lea     rcx, [rbp+9F60h+var_9A00]
 * 00000001800CA602: call    sub_1800A8E40
 * 00000001800CA607: movups  xmm0, xmmword ptr [rax]
 * 00000001800CA60A: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CA610: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CA614: mov     r9d, r12d
 * 00000001800CA617: mov     r8d, 5
 * 00000001800CA61D: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CA622: lea     rcx, [rbp+9F60h+var_6030]
 * 00000001800CA629: call    sub_1800A8E0C
 * 00000001800CA62E: movups  xmm6, xmmword ptr [rax]
 * 00000001800CA631: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CA635: call    sub_1800C50FC
 * 00000001800CA63A: mov     r8, rax
 * 00000001800CA63D: mov     r9d, r13d
 * 00000001800CA640: mov     edx, 110h
 * 00000001800CA645: lea     rcx, [rbp+9F60h+var_1970]; Src
 * 00000001800CA64C: call    sub_180088448
 * 00000001800CA651: nop
 * 00000001800CA652: mov     r8, rax
 * 00000001800CA655: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CA65C: lea     rcx, [rbp+9F60h+var_1910]
 * 00000001800CA663: call    sub_18001DD3C
 * 00000001800CA668: nop
 * 00000001800CA669: lea     r8, aPixel; "/Pixel"
 * 00000001800CA670: mov     rdx, rax
 * 00000001800CA673: lea     rcx, [rbp+9F60h+var_6FB0]
 * 00000001800CA67A: call    sub_18001DC84
 * 00000001800CA67F: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CA684: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CA689: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CA68E: mov     rcx, rax
 * 00000001800CA691: call    sub_180088528
 * 00000001800CA696: nop
 * 00000001800CA697: lea     rcx, [rbp+9F60h+var_1910]
 * 00000001800CA69E: call    sub_180011570
 * 00000001800CA6A3: nop
 * 00000001800CA6A4: lea     rcx, [rbp+9F60h+var_1970]
 * 00000001800CA6AB: call    sub_180011570
 * 00000001800CA6B0: nop
 * 00000001800CA6B1: lea     rcx, dword_1801FB2F0
 * 00000001800CA6B8: call    sub_18000C548
 * 00000001800CA6BD: mov     rax, [rsi+rdi*8]
 * 00000001800CA6C1: mov     eax, [r15+rax]
 * 00000001800CA6C5: cmp     cs:dword_1801FB2F4, eax
 * 00000001800CA6CB: jle     loc_1800CA7C7
 * 00000001800CA6D1: lea     rcx, dword_1801FB2F4
 * 00000001800CA6D8: call    sub_18000C5B0
 * 00000001800CA6DD: cmp     cs:dword_1801FB2F4, r14d
 * 00000001800CA6E4: jnz     loc_1800CA7C7
 * 00000001800CA6EA: xor     edx, edx
 * 00000001800CA6EC: lea     rcx, [rbp+9F60h+var_9FC1]
 * 00000001800CA6F0: call    sub_1800A8E58
 * 00000001800CA6F5: mov     bl, [rax]
 * 00000001800CA6F7: call    sub_1800C50CC
 * 00000001800CA6FC: mov     rdx, rax
 * 00000001800CA6FF: mov     r8d, 6908h
 * 00000001800CA705: lea     rcx, [rbp+9F60h+var_99F0]
 * 00000001800CA70C: call    sub_1800A8E40
 * 00000001800CA711: movups  xmm0, xmmword ptr [rax]
 * 00000001800CA714: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CA71A: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CA71E: mov     r9d, r12d
 * 00000001800CA721: mov     r8d, 5
 * 00000001800CA727: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CA72C: lea     rcx, [rbp+9F60h+var_6010]
 * 00000001800CA733: call    sub_1800A8E0C
 * 00000001800CA738: movups  xmm6, xmmword ptr [rax]
 * 00000001800CA73B: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CA73F: call    sub_1800C50FC
 * 00000001800CA744: mov     r8, rax
 * 00000001800CA747: mov     r9d, r13d
 * 00000001800CA74A: mov     edx, 112h
 * 00000001800CA74F: lea     rcx, [rbp+9F60h+var_1A30]; Src
 * 00000001800CA756: call    sub_180088448
 * 00000001800CA75B: nop
 * 00000001800CA75C: mov     r8, rax
 * 00000001800CA75F: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CA766: lea     rcx, [rbp+9F60h+var_19D0]
 * 00000001800CA76D: call    sub_18001DD3C
 * 00000001800CA772: nop
 * 00000001800CA773: lea     r8, aPixel; "/Pixel"
 * 00000001800CA77A: mov     rdx, rax
 * 00000001800CA77D: lea     rcx, [rbp+9F60h+var_6F50]
 * 00000001800CA784: call    sub_18001DC84
 * 00000001800CA789: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CA78E: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CA793: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CA798: mov     rcx, rax
 * 00000001800CA79B: call    sub_180088528
 * 00000001800CA7A0: nop
 * 00000001800CA7A1: lea     rcx, [rbp+9F60h+var_19D0]
 * 00000001800CA7A8: call    sub_180011570
 * 00000001800CA7AD: nop
 * 00000001800CA7AE: lea     rcx, [rbp+9F60h+var_1A30]
 * 00000001800CA7B5: call    sub_180011570
 * 00000001800CA7BA: nop
 * 00000001800CA7BB: lea     rcx, dword_1801FB2F4
 * 00000001800CA7C2: call    sub_18000C548
 * 00000001800CA7C7: mov     rax, [rsi+rdi*8]
 * 00000001800CA7CB: mov     eax, [r15+rax]
 * 00000001800CA7CF: cmp     cs:dword_1801FB2F8, eax
 * 00000001800CA7D5: jle     loc_1800CA8D1
 * 00000001800CA7DB: lea     rcx, dword_1801FB2F8
 * 00000001800CA7E2: call    sub_18000C5B0
 * 00000001800CA7E7: cmp     cs:dword_1801FB2F8, r14d
 * 00000001800CA7EE: jnz     loc_1800CA8D1
 * 00000001800CA7F4: xor     edx, edx
 * 00000001800CA7F6: lea     rcx, [rbp+9F60h+var_9FC0]
 * 00000001800CA7FA: call    sub_1800A8E58
 * 00000001800CA7FF: mov     bl, [rax]
 * 00000001800CA801: call    sub_1800C50DC
 * 00000001800CA806: mov     rdx, rax
 * 00000001800CA809: mov     r8d, 361Ch
 * 00000001800CA80F: lea     rcx, [rbp+9F60h+var_99E0]
 * 00000001800CA816: call    sub_1800A8E40
 * 00000001800CA81B: movups  xmm0, xmmword ptr [rax]
 * 00000001800CA81E: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CA824: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CA828: mov     r9d, r12d
 * 00000001800CA82B: mov     r8d, 5
 * 00000001800CA831: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CA836: lea     rcx, [rbp+9F60h+var_5FF0]
 * 00000001800CA83D: call    sub_1800A8E0C
 * 00000001800CA842: movups  xmm6, xmmword ptr [rax]
 * 00000001800CA845: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CA849: call    sub_1800C50FC
 * 00000001800CA84E: mov     r8, rax
 * 00000001800CA851: mov     r9d, r13d
 * 00000001800CA854: mov     edx, 114h
 * 00000001800CA859: lea     rcx, [rbp+9F60h+var_1B10]; Src
 * 00000001800CA860: call    sub_180088448
 * 00000001800CA865: nop
 * 00000001800CA866: mov     r8, rax
 * 00000001800CA869: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CA870: lea     rcx, [rbp+9F60h+var_1A90]
 * 00000001800CA877: call    sub_18001DD3C
 * 00000001800CA87C: nop
 * 00000001800CA87D: lea     r8, aPixel; "/Pixel"
 * 00000001800CA884: mov     rdx, rax
 * 00000001800CA887: lea     rcx, [rbp+9F60h+var_6EF0]
 * 00000001800CA88E: call    sub_18001DC84
 * 00000001800CA893: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CA898: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CA89D: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CA8A2: mov     rcx, rax
 * 00000001800CA8A5: call    sub_180088528
 * 00000001800CA8AA: nop
 * 00000001800CA8AB: lea     rcx, [rbp+9F60h+var_1A90]
 * 00000001800CA8B2: call    sub_180011570
 * 00000001800CA8B7: nop
 * 00000001800CA8B8: lea     rcx, [rbp+9F60h+var_1B10]
 * 00000001800CA8BF: call    sub_180011570
 * 00000001800CA8C4: nop
 * 00000001800CA8C5: lea     rcx, dword_1801FB2F8
 * 00000001800CA8CC: call    sub_18000C548
 * 00000001800CA8D1: mov     rax, [rsi+rdi*8]
 * 00000001800CA8D5: mov     eax, [r15+rax]
 * 00000001800CA8D9: cmp     cs:dword_1801FB2FC, eax
 * 00000001800CA8DF: jle     loc_1800CA9DB
 * 00000001800CA8E5: lea     rcx, dword_1801FB2FC
 * 00000001800CA8EC: call    sub_18000C5B0
 * 00000001800CA8F1: cmp     cs:dword_1801FB2FC, r14d
 * 00000001800CA8F8: jnz     loc_1800CA9DB
 * 00000001800CA8FE: xor     edx, edx
 * 00000001800CA900: lea     rcx, [rbp+9F60h+var_9FBF]
 * 00000001800CA904: call    sub_1800A8E58
 * 00000001800CA909: mov     bl, [rax]
 * 00000001800CA90B: call    sub_1800C50DC
 * 00000001800CA910: mov     rdx, rax
 * 00000001800CA913: mov     r8d, 361Ch
 * 00000001800CA919: lea     rcx, [rbp+9F60h+var_99D0]
 * 00000001800CA920: call    sub_1800A8E40
 * 00000001800CA925: movups  xmm0, xmmword ptr [rax]
 * 00000001800CA928: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CA92E: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CA932: mov     r9d, r12d
 * 00000001800CA935: mov     r8d, 5
 * 00000001800CA93B: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CA940: lea     rcx, [rbp+9F60h+var_5FD0]
 * 00000001800CA947: call    sub_1800A8E0C
 * 00000001800CA94C: movups  xmm6, xmmword ptr [rax]
 * 00000001800CA94F: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CA953: call    sub_1800C50FC
 * 00000001800CA958: mov     r8, rax
 * 00000001800CA95B: mov     r9d, r13d
 * 00000001800CA95E: mov     edx, 116h
 * 00000001800CA963: lea     rcx, [rbp+9F60h+var_1BD0]; Src
 * 00000001800CA96A: call    sub_180088448
 * 00000001800CA96F: nop
 * 00000001800CA970: mov     r8, rax
 * 00000001800CA973: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CA97A: lea     rcx, [rbp+9F60h+var_1B70]
 * 00000001800CA981: call    sub_18001DD3C
 * 00000001800CA986: nop
 * 00000001800CA987: lea     r8, aPixel; "/Pixel"
 * 00000001800CA98E: mov     rdx, rax
 * 00000001800CA991: lea     rcx, [rbp+9F60h+var_6E90]
 * 00000001800CA998: call    sub_18001DC84
 * 00000001800CA99D: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CA9A2: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CA9A7: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CA9AC: mov     rcx, rax
 * 00000001800CA9AF: call    sub_180088528
 * 00000001800CA9B4: nop
 * 00000001800CA9B5: lea     rcx, [rbp+9F60h+var_1B70]
 * 00000001800CA9BC: call    sub_180011570
 * 00000001800CA9C1: nop
 * 00000001800CA9C2: lea     rcx, [rbp+9F60h+var_1BD0]
 * 00000001800CA9C9: call    sub_180011570
 * 00000001800CA9CE: nop
 * 00000001800CA9CF: lea     rcx, dword_1801FB2FC
 * 00000001800CA9D6: call    sub_18000C548
 * 00000001800CA9DB: mov     rax, [rsi+rdi*8]
 * 00000001800CA9DF: mov     eax, [r15+rax]
 * 00000001800CA9E3: cmp     cs:dword_1801FB300, eax
 * 00000001800CA9E9: jle     loc_1800CAAE5
 * 00000001800CA9EF: lea     rcx, dword_1801FB300
 * 00000001800CA9F6: call    sub_18000C5B0
 * 00000001800CA9FB: cmp     cs:dword_1801FB300, r14d
 * 00000001800CAA02: jnz     loc_1800CAAE5
 * 00000001800CAA08: xor     edx, edx
 * 00000001800CAA0A: lea     rcx, [rbp+9F60h+var_9FBE]
 * 00000001800CAA0E: call    sub_1800A8E58
 * 00000001800CAA13: mov     bl, [rax]
 * 00000001800CAA15: call    sub_1800C50EC
 * 00000001800CAA1A: mov     rdx, rax
 * 00000001800CAA1D: mov     r8d, 6ABCh
 * 00000001800CAA23: lea     rcx, [rbp+9F60h+var_99C0]
 * 00000001800CAA2A: call    sub_1800A8E40
 * 00000001800CAA2F: movups  xmm0, xmmword ptr [rax]
 * 00000001800CAA32: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CAA38: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CAA3C: mov     r9d, r12d
 * 00000001800CAA3F: mov     r8d, 5
 * 00000001800CAA45: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CAA4A: lea     rcx, [rbp+9F60h+var_5FB0]
 * 00000001800CAA51: call    sub_1800A8E0C
 * 00000001800CAA56: movups  xmm6, xmmword ptr [rax]
 * 00000001800CAA59: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CAA5D: call    sub_1800C50FC
 * 00000001800CAA62: mov     r8, rax
 * 00000001800CAA65: mov     r9d, r13d
 * 00000001800CAA68: mov     edx, 118h
 * 00000001800CAA6D: lea     rcx, [rbp+9F60h+var_1C90]; Src
 * 00000001800CAA74: call    sub_180088448
 * 00000001800CAA79: nop
 * 00000001800CAA7A: mov     r8, rax
 * 00000001800CAA7D: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CAA84: lea     rcx, [rbp+9F60h+var_1C30]
 * 00000001800CAA8B: call    sub_18001DD3C
 * 00000001800CAA90: nop
 * 00000001800CAA91: lea     r8, aPixel; "/Pixel"
 * 00000001800CAA98: mov     rdx, rax
 * 00000001800CAA9B: lea     rcx, [rbp+9F60h+var_6E30]
 * 00000001800CAAA2: call    sub_18001DC84
 * 00000001800CAAA7: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CAAAC: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CAAB1: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CAAB6: mov     rcx, rax
 * 00000001800CAAB9: call    sub_180088528
 * 00000001800CAABE: nop
 * 00000001800CAABF: lea     rcx, [rbp+9F60h+var_1C30]
 * 00000001800CAAC6: call    sub_180011570
 * 00000001800CAACB: nop
 * 00000001800CAACC: lea     rcx, [rbp+9F60h+var_1C90]
 * 00000001800CAAD3: call    sub_180011570
 * 00000001800CAAD8: nop
 * 00000001800CAAD9: lea     rcx, dword_1801FB300
 * 00000001800CAAE0: call    sub_18000C548
 * 00000001800CAAE5: mov     rax, [rsi+rdi*8]
 * 00000001800CAAE9: mov     eax, [r15+rax]
 * 00000001800CAAED: cmp     cs:dword_1801FB304, eax
 * 00000001800CAAF3: jle     loc_1800CABEF
 * 00000001800CAAF9: lea     rcx, dword_1801FB304
 * 00000001800CAB00: call    sub_18000C5B0
 * 00000001800CAB05: cmp     cs:dword_1801FB304, r14d
 * 00000001800CAB0C: jnz     loc_1800CABEF
 * 00000001800CAB12: xor     edx, edx
 * 00000001800CAB14: lea     rcx, [rbp+9F60h+var_9FBD]
 * 00000001800CAB18: call    sub_1800A8E58
 * 00000001800CAB1D: mov     bl, [rax]
 * 00000001800CAB1F: call    sub_1800C50EC
 * 00000001800CAB24: mov     rdx, rax
 * 00000001800CAB27: mov     r8d, 6ABCh
 * 00000001800CAB2D: lea     rcx, [rbp+9F60h+var_99B0]
 * 00000001800CAB34: call    sub_1800A8E40
 * 00000001800CAB39: movups  xmm0, xmmword ptr [rax]
 * 00000001800CAB3C: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CAB42: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CAB46: mov     r9d, r12d
 * 00000001800CAB49: mov     r8d, 5
 * 00000001800CAB4F: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CAB54: lea     rcx, [rbp+9F60h+var_5F90]
 * 00000001800CAB5B: call    sub_1800A8E0C
 * 00000001800CAB60: movups  xmm6, xmmword ptr [rax]
 * 00000001800CAB63: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CAB67: call    sub_1800C50FC
 * 00000001800CAB6C: mov     r8, rax
 * 00000001800CAB6F: mov     r9d, r13d
 * 00000001800CAB72: mov     edx, 11Ah
 * 00000001800CAB77: lea     rcx, [rbp+9F60h+var_1D50]; Src
 * 00000001800CAB7E: call    sub_180088448
 * 00000001800CAB83: nop
 * 00000001800CAB84: mov     r8, rax
 * 00000001800CAB87: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CAB8E: lea     rcx, [rbp+9F60h+var_1CF0]
 * 00000001800CAB95: call    sub_18001DD3C
 * 00000001800CAB9A: nop
 * 00000001800CAB9B: lea     r8, aPixel; "/Pixel"
 * 00000001800CABA2: mov     rdx, rax
 * 00000001800CABA5: lea     rcx, [rbp+9F60h+var_6DD0]
 * 00000001800CABAC: call    sub_18001DC84
 * 00000001800CABB1: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CABB6: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CABBB: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CABC0: mov     rcx, rax
 * 00000001800CABC3: call    sub_180088528
 * 00000001800CABC8: nop
 * 00000001800CABC9: lea     rcx, [rbp+9F60h+var_1CF0]
 * 00000001800CABD0: call    sub_180011570
 * 00000001800CABD5: nop
 * 00000001800CABD6: lea     rcx, [rbp+9F60h+var_1D50]
 * 00000001800CABDD: call    sub_180011570
 * 00000001800CABE2: nop
 * 00000001800CABE3: lea     rcx, dword_1801FB304
 * 00000001800CABEA: call    sub_18000C548
 * 00000001800CABEF: mov     rax, [rsi+rdi*8]
 * 00000001800CABF3: mov     eax, [r15+rax]
 * 00000001800CABF7: cmp     cs:dword_1801FB308, eax
 * 00000001800CABFD: jle     loc_1800CACF9
 * 00000001800CAC03: lea     rcx, dword_1801FB308
 * 00000001800CAC0A: call    sub_18000C5B0
 * 00000001800CAC0F: cmp     cs:dword_1801FB308, r14d
 * 00000001800CAC16: jnz     loc_1800CACF9
 * 00000001800CAC1C: xor     edx, edx
 * 00000001800CAC1E: lea     rcx, [rbp+9F60h+var_9FBC]
 * 00000001800CAC22: call    sub_1800A8E58
 * 00000001800CAC27: mov     bl, [rax]
 * 00000001800CAC29: call    sub_1800C509C
 * 00000001800CAC2E: mov     rdx, rax
 * 00000001800CAC31: mov     r8d, 672Ch
 * 00000001800CAC37: lea     rcx, [rbp+9F60h+var_99A0]
 * 00000001800CAC3E: call    sub_1800A8E40
 * 00000001800CAC43: movups  xmm0, xmmword ptr [rax]
 * 00000001800CAC46: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CAC4C: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CAC50: mov     r9d, r12d
 * 00000001800CAC53: mov     r8d, 5
 * 00000001800CAC59: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CAC5E: lea     rcx, [rbp+9F60h+var_5F70]
 * 00000001800CAC65: call    sub_1800A8E0C
 * 00000001800CAC6A: movups  xmm6, xmmword ptr [rax]
 * 00000001800CAC6D: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CAC71: call    sub_1800C50FC
 * 00000001800CAC76: mov     r8, rax
 * 00000001800CAC79: mov     r9d, r13d
 * 00000001800CAC7C: mov     edx, 120h
 * 00000001800CAC81: lea     rcx, [rbp+9F60h+var_1E10]; Src
 * 00000001800CAC88: call    sub_180088448
 * 00000001800CAC8D: nop
 * 00000001800CAC8E: mov     r8, rax
 * 00000001800CAC91: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CAC98: lea     rcx, [rbp+9F60h+var_1DB0]
 * 00000001800CAC9F: call    sub_18001DD3C
 * 00000001800CACA4: nop
 * 00000001800CACA5: lea     r8, aPixel; "/Pixel"
 * 00000001800CACAC: mov     rdx, rax
 * 00000001800CACAF: lea     rcx, [rbp+9F60h+var_6D70]
 * 00000001800CACB6: call    sub_18001DC84
 * 00000001800CACBB: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CACC0: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CACC5: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CACCA: mov     rcx, rax
 * 00000001800CACCD: call    sub_180088528
 * 00000001800CACD2: nop
 * 00000001800CACD3: lea     rcx, [rbp+9F60h+var_1DB0]
 * 00000001800CACDA: call    sub_180011570
 * 00000001800CACDF: nop
 * 00000001800CACE0: lea     rcx, [rbp+9F60h+var_1E10]
 * 00000001800CACE7: call    sub_180011570
 * 00000001800CACEC: nop
 * 00000001800CACED: lea     rcx, dword_1801FB308
 * 00000001800CACF4: call    sub_18000C548
 * 00000001800CACF9: mov     rax, [rsi+rdi*8]
 * 00000001800CACFD: mov     eax, [r15+rax]
 * 00000001800CAD01: cmp     cs:dword_1801FB30C, eax
 * 00000001800CAD07: jle     loc_1800CAE03
 * 00000001800CAD0D: lea     rcx, dword_1801FB30C
 * 00000001800CAD14: call    sub_18000C5B0
 * 00000001800CAD19: cmp     cs:dword_1801FB30C, r14d
 * 00000001800CAD20: jnz     loc_1800CAE03
 * 00000001800CAD26: xor     edx, edx
 * 00000001800CAD28: lea     rcx, [rbp+9F60h+var_9FBB]
 * 00000001800CAD2C: call    sub_1800A8E58
 * 00000001800CAD31: mov     bl, [rax]
 * 00000001800CAD33: call    sub_1800C509C
 * 00000001800CAD38: mov     rdx, rax
 * 00000001800CAD3B: mov     r8d, 672Ch
 * 00000001800CAD41: lea     rcx, [rbp+9F60h+var_9990]
 * 00000001800CAD48: call    sub_1800A8E40
 * 00000001800CAD4D: movups  xmm0, xmmword ptr [rax]
 * 00000001800CAD50: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CAD56: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CAD5A: mov     r9d, r12d
 * 00000001800CAD5D: mov     r8d, 5
 * 00000001800CAD63: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CAD68: lea     rcx, [rbp+9F60h+var_5F50]
 * 00000001800CAD6F: call    sub_1800A8E0C
 * 00000001800CAD74: movups  xmm6, xmmword ptr [rax]
 * 00000001800CAD77: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CAD7B: call    sub_1800C50FC
 * 00000001800CAD80: mov     r8, rax
 * 00000001800CAD83: mov     r9d, r13d
 * 00000001800CAD86: mov     edx, 122h
 * 00000001800CAD8B: lea     rcx, [rbp+9F60h+var_1ED0]; Src
 * 00000001800CAD92: call    sub_180088448
 * 00000001800CAD97: nop
 * 00000001800CAD98: mov     r8, rax
 * 00000001800CAD9B: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CADA2: lea     rcx, [rbp+9F60h+var_1E70]
 * 00000001800CADA9: call    sub_18001DD3C
 * 00000001800CADAE: nop
 * 00000001800CADAF: lea     r8, aPixel; "/Pixel"
 * 00000001800CADB6: mov     rdx, rax
 * 00000001800CADB9: lea     rcx, [rbp+9F60h+var_6D10]
 * 00000001800CADC0: call    sub_18001DC84
 * 00000001800CADC5: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CADCA: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CADCF: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CADD4: mov     rcx, rax
 * 00000001800CADD7: call    sub_180088528
 * 00000001800CADDC: nop
 * 00000001800CADDD: lea     rcx, [rbp+9F60h+var_1E70]
 * 00000001800CADE4: call    sub_180011570
 * 00000001800CADE9: nop
 * 00000001800CADEA: lea     rcx, [rbp+9F60h+var_1ED0]
 * 00000001800CADF1: call    sub_180011570
 * 00000001800CADF6: nop
 * 00000001800CADF7: lea     rcx, dword_1801FB30C
 * 00000001800CADFE: call    sub_18000C548
 * 00000001800CAE03: mov     rax, [rsi+rdi*8]
 * 00000001800CAE07: mov     eax, [r15+rax]
 * 00000001800CAE0B: cmp     cs:dword_1801FB310, eax
 * 00000001800CAE11: jle     loc_1800CAF0D
 * 00000001800CAE17: lea     rcx, dword_1801FB310
 * 00000001800CAE1E: call    sub_18000C5B0
 * 00000001800CAE23: cmp     cs:dword_1801FB310, r14d
 * 00000001800CAE2A: jnz     loc_1800CAF0D
 * 00000001800CAE30: xor     edx, edx
 * 00000001800CAE32: lea     rcx, [rbp+9F60h+var_9FBA]
 * 00000001800CAE36: call    sub_1800A8E58
 * 00000001800CAE3B: mov     bl, [rax]
 * 00000001800CAE3D: call    sub_1800C50BC
 * 00000001800CAE42: mov     rdx, rax
 * 00000001800CAE45: mov     r8d, 68BCh
 * 00000001800CAE4B: lea     rcx, [rbp+9F60h+var_9980]
 * 00000001800CAE52: call    sub_1800A8E40
 * 00000001800CAE57: movups  xmm0, xmmword ptr [rax]
 * 00000001800CAE5A: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CAE60: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CAE64: mov     r9d, r12d
 * 00000001800CAE67: mov     r8d, 5
 * 00000001800CAE6D: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CAE72: lea     rcx, [rbp+9F60h+var_5F30]
 * 00000001800CAE79: call    sub_1800A8E0C
 * 00000001800CAE7E: movups  xmm6, xmmword ptr [rax]
 * 00000001800CAE81: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CAE85: call    sub_1800C50FC
 * 00000001800CAE8A: mov     r8, rax
 * 00000001800CAE8D: mov     r9d, r13d
 * 00000001800CAE90: mov     edx, 128h
 * 00000001800CAE95: lea     rcx, [rbp+9F60h+var_1F90]; Src
 * 00000001800CAE9C: call    sub_180088448
 * 00000001800CAEA1: nop
 * 00000001800CAEA2: mov     r8, rax
 * 00000001800CAEA5: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CAEAC: lea     rcx, [rbp+9F60h+var_1F30]
 * 00000001800CAEB3: call    sub_18001DD3C
 * 00000001800CAEB8: nop
 * 00000001800CAEB9: lea     r8, aPixel; "/Pixel"
 * 00000001800CAEC0: mov     rdx, rax
 * 00000001800CAEC3: lea     rcx, [rbp+9F60h+var_6CB0]
 * 00000001800CAECA: call    sub_18001DC84
 * 00000001800CAECF: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CAED4: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CAED9: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CAEDE: mov     rcx, rax
 * 00000001800CAEE1: call    sub_180088528
 * 00000001800CAEE6: nop
 * 00000001800CAEE7: lea     rcx, [rbp+9F60h+var_1F30]
 * 00000001800CAEEE: call    sub_180011570
 * 00000001800CAEF3: nop
 * 00000001800CAEF4: lea     rcx, [rbp+9F60h+var_1F90]
 * 00000001800CAEFB: call    sub_180011570
 * 00000001800CAF00: nop
 * 00000001800CAF01: lea     rcx, dword_1801FB310
 * 00000001800CAF08: call    sub_18000C548
 * 00000001800CAF0D: mov     rax, [rsi+rdi*8]
 * 00000001800CAF11: mov     eax, [r15+rax]
 * 00000001800CAF15: cmp     cs:dword_1801FB314, eax
 * 00000001800CAF1B: jle     loc_1800CB017
 * 00000001800CAF21: lea     rcx, dword_1801FB314
 * 00000001800CAF28: call    sub_18000C5B0
 * 00000001800CAF2D: cmp     cs:dword_1801FB314, r14d
 * 00000001800CAF34: jnz     loc_1800CB017
 * 00000001800CAF3A: xor     edx, edx
 * 00000001800CAF3C: lea     rcx, [rbp+9F60h+var_9FB9]
 * 00000001800CAF40: call    sub_1800A8E58
 * 00000001800CAF45: mov     bl, [rax]
 * 00000001800CAF47: call    sub_1800C50BC
 * 00000001800CAF4C: mov     rdx, rax
 * 00000001800CAF4F: mov     r8d, 68BCh
 * 00000001800CAF55: lea     rcx, [rbp+9F60h+var_9970]
 * 00000001800CAF5C: call    sub_1800A8E40
 * 00000001800CAF61: movups  xmm0, xmmword ptr [rax]
 * 00000001800CAF64: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CAF6A: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CAF6E: mov     r9d, r12d
 * 00000001800CAF71: mov     r8d, 5
 * 00000001800CAF77: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CAF7C: lea     rcx, [rbp+9F60h+var_5F10]
 * 00000001800CAF83: call    sub_1800A8E0C
 * 00000001800CAF88: movups  xmm6, xmmword ptr [rax]
 * 00000001800CAF8B: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CAF8F: call    sub_1800C50FC
 * 00000001800CAF94: mov     r8, rax
 * 00000001800CAF97: mov     r9d, r13d
 * 00000001800CAF9A: mov     edx, 12Ah
 * 00000001800CAF9F: lea     rcx, [rbp+9F60h+var_2050]; Src
 * 00000001800CAFA6: call    sub_180088448
 * 00000001800CAFAB: nop
 * 00000001800CAFAC: mov     r8, rax
 * 00000001800CAFAF: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CAFB6: lea     rcx, [rbp+9F60h+var_1FF0]
 * 00000001800CAFBD: call    sub_18001DD3C
 * 00000001800CAFC2: nop
 * 00000001800CAFC3: lea     r8, aPixel; "/Pixel"
 * 00000001800CAFCA: mov     rdx, rax
 * 00000001800CAFCD: lea     rcx, [rbp+9F60h+var_6C50]
 * 00000001800CAFD4: call    sub_18001DC84
 * 00000001800CAFD9: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CAFDE: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CAFE3: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CAFE8: mov     rcx, rax
 * 00000001800CAFEB: call    sub_180088528
 * 00000001800CAFF0: nop
 * 00000001800CAFF1: lea     rcx, [rbp+9F60h+var_1FF0]
 * 00000001800CAFF8: call    sub_180011570
 * 00000001800CAFFD: nop
 * 00000001800CAFFE: lea     rcx, [rbp+9F60h+var_2050]
 * 00000001800CB005: call    sub_180011570
 * 00000001800CB00A: nop
 * 00000001800CB00B: lea     rcx, dword_1801FB314
 * 00000001800CB012: call    sub_18000C548
 * 00000001800CB017: mov     rax, [rsi+rdi*8]
 * 00000001800CB01B: mov     eax, [r15+rax]
 * 00000001800CB01F: cmp     cs:dword_1801FB318, eax
 * 00000001800CB025: jle     loc_1800CB121
 * 00000001800CB02B: lea     rcx, dword_1801FB318
 * 00000001800CB032: call    sub_18000C5B0
 * 00000001800CB037: cmp     cs:dword_1801FB318, r14d
 * 00000001800CB03E: jnz     loc_1800CB121
 * 00000001800CB044: xor     edx, edx
 * 00000001800CB046: lea     rcx, [rbp+9F60h+var_9FB8]
 * 00000001800CB04A: call    sub_1800A8E58
 * 00000001800CB04F: mov     bl, [rax]
 * 00000001800CB051: call    sub_1800C50CC
 * 00000001800CB056: mov     rdx, rax
 * 00000001800CB059: mov     r8d, 6908h
 * 00000001800CB05F: lea     rcx, [rbp+9F60h+var_9960]
 * 00000001800CB066: call    sub_1800A8E40
 * 00000001800CB06B: movups  xmm0, xmmword ptr [rax]
 * 00000001800CB06E: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CB074: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CB078: mov     r9d, r12d
 * 00000001800CB07B: mov     r8d, 5
 * 00000001800CB081: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CB086: lea     rcx, [rbp+9F60h+var_5EF0]
 * 00000001800CB08D: call    sub_1800A8E0C
 * 00000001800CB092: movups  xmm6, xmmword ptr [rax]
 * 00000001800CB095: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CB099: call    sub_1800C50FC
 * 00000001800CB09E: mov     r8, rax
 * 00000001800CB0A1: mov     r9d, r13d
 * 00000001800CB0A4: mov     edx, 130h
 * 00000001800CB0A9: lea     rcx, [rbp+9F60h+var_2110]; Src
 * 00000001800CB0B0: call    sub_180088448
 * 00000001800CB0B5: nop
 * 00000001800CB0B6: mov     r8, rax
 * 00000001800CB0B9: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CB0C0: lea     rcx, [rbp+9F60h+var_20B0]
 * 00000001800CB0C7: call    sub_18001DD3C
 * 00000001800CB0CC: nop
 * 00000001800CB0CD: lea     r8, aPixel; "/Pixel"
 * 00000001800CB0D4: mov     rdx, rax
 * 00000001800CB0D7: lea     rcx, [rbp+9F60h+var_6BF0]
 * 00000001800CB0DE: call    sub_18001DC84
 * 00000001800CB0E3: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CB0E8: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CB0ED: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CB0F2: mov     rcx, rax
 * 00000001800CB0F5: call    sub_180088528
 * 00000001800CB0FA: nop
 * 00000001800CB0FB: lea     rcx, [rbp+9F60h+var_20B0]
 * 00000001800CB102: call    sub_180011570
 * 00000001800CB107: nop
 * 00000001800CB108: lea     rcx, [rbp+9F60h+var_2110]
 * 00000001800CB10F: call    sub_180011570
 * 00000001800CB114: nop
 * 00000001800CB115: lea     rcx, dword_1801FB318
 * 00000001800CB11C: call    sub_18000C548
 * 00000001800CB121: mov     rax, [rsi+rdi*8]
 * 00000001800CB125: mov     eax, [r15+rax]
 * 00000001800CB129: cmp     cs:dword_1801FB31C, eax
 * 00000001800CB12F: jle     loc_1800CB22B
 * 00000001800CB135: lea     rcx, dword_1801FB31C
 * 00000001800CB13C: call    sub_18000C5B0
 * 00000001800CB141: cmp     cs:dword_1801FB31C, r14d
 * 00000001800CB148: jnz     loc_1800CB22B
 * 00000001800CB14E: xor     edx, edx
 * 00000001800CB150: lea     rcx, [rbp+9F60h+var_9FB7]
 * 00000001800CB154: call    sub_1800A8E58
 * 00000001800CB159: mov     bl, [rax]
 * 00000001800CB15B: call    sub_1800C50CC
 * 00000001800CB160: mov     rdx, rax
 * 00000001800CB163: mov     r8d, 6908h
 * 00000001800CB169: lea     rcx, [rbp+9F60h+var_9950]
 * 00000001800CB170: call    sub_1800A8E40
 * 00000001800CB175: movups  xmm0, xmmword ptr [rax]
 * 00000001800CB178: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CB17E: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CB182: mov     r9d, r12d
 * 00000001800CB185: mov     r8d, 5
 * 00000001800CB18B: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CB190: lea     rcx, [rbp+9F60h+var_5ED0]
 * 00000001800CB197: call    sub_1800A8E0C
 * 00000001800CB19C: movups  xmm6, xmmword ptr [rax]
 * 00000001800CB19F: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CB1A3: call    sub_1800C50FC
 * 00000001800CB1A8: mov     r8, rax
 * 00000001800CB1AB: mov     r9d, r13d
 * 00000001800CB1AE: mov     edx, 132h
 * 00000001800CB1B3: lea     rcx, [rbp+9F60h+var_21D0]; Src
 * 00000001800CB1BA: call    sub_180088448
 * 00000001800CB1BF: nop
 * 00000001800CB1C0: mov     r8, rax
 * 00000001800CB1C3: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CB1CA: lea     rcx, [rbp+9F60h+var_2170]
 * 00000001800CB1D1: call    sub_18001DD3C
 * 00000001800CB1D6: nop
 * 00000001800CB1D7: lea     r8, aPixel; "/Pixel"
 * 00000001800CB1DE: mov     rdx, rax
 * 00000001800CB1E1: lea     rcx, [rbp+9F60h+var_6B90]
 * 00000001800CB1E8: call    sub_18001DC84
 * 00000001800CB1ED: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CB1F2: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CB1F7: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CB1FC: mov     rcx, rax
 * 00000001800CB1FF: call    sub_180088528
 * 00000001800CB204: nop
 * 00000001800CB205: lea     rcx, [rbp+9F60h+var_2170]
 * 00000001800CB20C: call    sub_180011570
 * 00000001800CB211: nop
 * 00000001800CB212: lea     rcx, [rbp+9F60h+var_21D0]
 * 00000001800CB219: call    sub_180011570
 * 00000001800CB21E: nop
 * 00000001800CB21F: lea     rcx, dword_1801FB31C
 * 00000001800CB226: call    sub_18000C548
 * 00000001800CB22B: mov     rax, [rsi+rdi*8]
 * 00000001800CB22F: mov     eax, [r15+rax]
 * 00000001800CB233: cmp     cs:dword_1801FB320, eax
 * 00000001800CB239: jle     loc_1800CB335
 * 00000001800CB23F: lea     rcx, dword_1801FB320
 * 00000001800CB246: call    sub_18000C5B0
 * 00000001800CB24B: cmp     cs:dword_1801FB320, r14d
 * 00000001800CB252: jnz     loc_1800CB335
 * 00000001800CB258: xor     edx, edx
 * 00000001800CB25A: lea     rcx, [rbp+9F60h+var_9FB6]
 * 00000001800CB25E: call    sub_1800A8E58
 * 00000001800CB263: mov     bl, [rax]
 * 00000001800CB265: call    sub_1800C50EC
 * 00000001800CB26A: mov     rdx, rax
 * 00000001800CB26D: mov     r8d, 6ABCh
 * 00000001800CB273: lea     rcx, [rbp+9F60h+var_9940]
 * 00000001800CB27A: call    sub_1800A8E40
 * 00000001800CB27F: movups  xmm0, xmmword ptr [rax]
 * 00000001800CB282: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CB288: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CB28C: mov     r9d, r12d
 * 00000001800CB28F: mov     r8d, 5
 * 00000001800CB295: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CB29A: lea     rcx, [rbp+9F60h+var_5EB0]
 * 00000001800CB2A1: call    sub_1800A8E0C
 * 00000001800CB2A6: movups  xmm6, xmmword ptr [rax]
 * 00000001800CB2A9: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CB2AD: call    sub_1800C50FC
 * 00000001800CB2B2: mov     r8, rax
 * 00000001800CB2B5: mov     r9d, r13d
 * 00000001800CB2B8: mov     edx, 138h
 * 00000001800CB2BD: lea     rcx, [rbp+9F60h+var_2290]; Src
 * 00000001800CB2C4: call    sub_180088448
 * 00000001800CB2C9: nop
 * 00000001800CB2CA: mov     r8, rax
 * 00000001800CB2CD: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CB2D4: lea     rcx, [rbp+9F60h+var_2230]
 * 00000001800CB2DB: call    sub_18001DD3C
 * 00000001800CB2E0: nop
 * 00000001800CB2E1: lea     r8, aPixel; "/Pixel"
 * 00000001800CB2E8: mov     rdx, rax
 * 00000001800CB2EB: lea     rcx, [rbp+9F60h+var_6B30]
 * 00000001800CB2F2: call    sub_18001DC84
 * 00000001800CB2F7: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CB2FC: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CB301: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CB306: mov     rcx, rax
 * 00000001800CB309: call    sub_180088528
 * 00000001800CB30E: nop
 * 00000001800CB30F: lea     rcx, [rbp+9F60h+var_2230]
 * 00000001800CB316: call    sub_180011570
 * 00000001800CB31B: nop
 * 00000001800CB31C: lea     rcx, [rbp+9F60h+var_2290]
 * 00000001800CB323: call    sub_180011570
 * 00000001800CB328: nop
 * 00000001800CB329: lea     rcx, dword_1801FB320
 * 00000001800CB330: call    sub_18000C548
 * 00000001800CB335: mov     rax, [rsi+rdi*8]
 * 00000001800CB339: mov     eax, [r15+rax]
 * 00000001800CB33D: cmp     cs:dword_1801FB324, eax
 * 00000001800CB343: jle     loc_1800CB43F
 * 00000001800CB349: lea     rcx, dword_1801FB324
 * 00000001800CB350: call    sub_18000C5B0
 * 00000001800CB355: cmp     cs:dword_1801FB324, r14d
 * 00000001800CB35C: jnz     loc_1800CB43F
 * 00000001800CB362: xor     edx, edx
 * 00000001800CB364: lea     rcx, [rbp+9F60h+var_9FB5]
 * 00000001800CB368: call    sub_1800A8E58
 * 00000001800CB36D: mov     bl, [rax]
 * 00000001800CB36F: call    sub_1800C50EC
 * 00000001800CB374: mov     rdx, rax
 * 00000001800CB377: mov     r8d, 6ABCh
 * 00000001800CB37D: lea     rcx, [rbp+9F60h+var_9930]
 * 00000001800CB384: call    sub_1800A8E40
 * 00000001800CB389: movups  xmm0, xmmword ptr [rax]
 * 00000001800CB38C: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CB392: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CB396: mov     r9d, r12d
 * 00000001800CB399: mov     r8d, 5
 * 00000001800CB39F: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CB3A4: lea     rcx, [rbp+9F60h+var_5E90]
 * 00000001800CB3AB: call    sub_1800A8E0C
 * 00000001800CB3B0: movups  xmm6, xmmword ptr [rax]
 * 00000001800CB3B3: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CB3B7: call    sub_1800C50FC
 * 00000001800CB3BC: mov     r8, rax
 * 00000001800CB3BF: mov     r9d, r13d
 * 00000001800CB3C2: mov     edx, 13Ah
 * 00000001800CB3C7: lea     rcx, [rbp+9F60h+var_2350]; Src
 * 00000001800CB3CE: call    sub_180088448
 * 00000001800CB3D3: nop
 * 00000001800CB3D4: mov     r8, rax
 * 00000001800CB3D7: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CB3DE: lea     rcx, [rbp+9F60h+var_22F0]
 * 00000001800CB3E5: call    sub_18001DD3C
 * 00000001800CB3EA: nop
 * 00000001800CB3EB: lea     r8, aPixel; "/Pixel"
 * 00000001800CB3F2: mov     rdx, rax
 * 00000001800CB3F5: lea     rcx, [rbp+9F60h+var_6AD0]
 * 00000001800CB3FC: call    sub_18001DC84
 * 00000001800CB401: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CB406: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CB40B: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CB410: mov     rcx, rax
 * 00000001800CB413: call    sub_180088528
 * 00000001800CB418: nop
 * 00000001800CB419: lea     rcx, [rbp+9F60h+var_22F0]
 * 00000001800CB420: call    sub_180011570
 * 00000001800CB425: nop
 * 00000001800CB426: lea     rcx, [rbp+9F60h+var_2350]
 * 00000001800CB42D: call    sub_180011570
 * 00000001800CB432: nop
 * 00000001800CB433: lea     rcx, dword_1801FB324
 * 00000001800CB43A: call    sub_18000C548
 * 00000001800CB43F: mov     rax, [rsi+rdi*8]
 * 00000001800CB443: mov     eax, [r15+rax]
 * 00000001800CB447: cmp     cs:dword_1801FB328, eax
 * 00000001800CB44D: jle     loc_1800CB549
 * 00000001800CB453: lea     rcx, dword_1801FB328
 * 00000001800CB45A: call    sub_18000C5B0
 * 00000001800CB45F: cmp     cs:dword_1801FB328, r14d
 * 00000001800CB466: jnz     loc_1800CB549
 * 00000001800CB46C: xor     edx, edx
 * 00000001800CB46E: lea     rcx, [rbp+9F60h+var_9FB4]
 * 00000001800CB472: call    sub_1800A8E58
 * 00000001800CB477: mov     bl, [rax]
 * 00000001800CB479: call    sub_1800C509C
 * 00000001800CB47E: mov     rdx, rax
 * 00000001800CB481: mov     r8d, 672Ch
 * 00000001800CB487: lea     rcx, [rbp+9F60h+var_9920]
 * 00000001800CB48E: call    sub_1800A8E40
 * 00000001800CB493: movups  xmm0, xmmword ptr [rax]
 * 00000001800CB496: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CB49C: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CB4A0: mov     r9d, r12d
 * 00000001800CB4A3: mov     r8d, 5
 * 00000001800CB4A9: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CB4AE: lea     rcx, [rbp+9F60h+var_5E70]
 * 00000001800CB4B5: call    sub_1800A8E0C
 * 00000001800CB4BA: movups  xmm6, xmmword ptr [rax]
 * 00000001800CB4BD: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CB4C1: call    sub_1800C50FC
 * 00000001800CB4C6: mov     r8, rax
 * 00000001800CB4C9: mov     r9d, r13d
 * 00000001800CB4CC: mov     edx, 140h
 * 00000001800CB4D1: lea     rcx, [rbp+9F60h+var_950]; Src
 * 00000001800CB4D8: call    sub_180088448
 * 00000001800CB4DD: nop
 * 00000001800CB4DE: mov     r8, rax
 * 00000001800CB4E1: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CB4E8: lea     rcx, [rbp+9F60h+var_23F0]
 * 00000001800CB4EF: call    sub_18001DD3C
 * 00000001800CB4F4: nop
 * 00000001800CB4F5: lea     r8, aPixel; "/Pixel"
 * 00000001800CB4FC: mov     rdx, rax
 * 00000001800CB4FF: lea     rcx, [rbp+9F60h+var_6A70]
 * 00000001800CB506: call    sub_18001DC84
 * 00000001800CB50B: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CB510: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CB515: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CB51A: mov     rcx, rax
 * 00000001800CB51D: call    sub_180088528
 * 00000001800CB522: nop
 * 00000001800CB523: lea     rcx, [rbp+9F60h+var_23F0]
 * 00000001800CB52A: call    sub_180011570
 * 00000001800CB52F: nop
 * 00000001800CB530: lea     rcx, [rbp+9F60h+var_950]
 * 00000001800CB537: call    sub_180011570
 * 00000001800CB53C: nop
 * 00000001800CB53D: lea     rcx, dword_1801FB328
 * 00000001800CB544: call    sub_18000C548
 * 00000001800CB549: mov     rax, [rsi+rdi*8]
 * 00000001800CB54D: mov     eax, [r15+rax]
 * 00000001800CB551: cmp     cs:dword_1801FB32C, eax
 * 00000001800CB557: jle     loc_1800CB653
 * 00000001800CB55D: lea     rcx, dword_1801FB32C
 * 00000001800CB564: call    sub_18000C5B0
 * 00000001800CB569: cmp     cs:dword_1801FB32C, r14d
 * 00000001800CB570: jnz     loc_1800CB653
 * 00000001800CB576: xor     edx, edx
 * 00000001800CB578: lea     rcx, [rbp+9F60h+var_9FB3]
 * 00000001800CB57C: call    sub_1800A8E58
 * 00000001800CB581: mov     bl, [rax]
 * 00000001800CB583: call    sub_1800C509C
 * 00000001800CB588: mov     rdx, rax
 * 00000001800CB58B: mov     r8d, 672Ch
 * 00000001800CB591: lea     rcx, [rbp+9F60h+var_9910]
 * 00000001800CB598: call    sub_1800A8E40
 * 00000001800CB59D: movups  xmm0, xmmword ptr [rax]
 * 00000001800CB5A0: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CB5A6: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CB5AA: mov     r9d, r12d
 * 00000001800CB5AD: mov     r8d, 5
 * 00000001800CB5B3: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CB5B8: lea     rcx, [rbp+9F60h+var_5E50]
 * 00000001800CB5BF: call    sub_1800A8E0C
 * 00000001800CB5C4: movups  xmm6, xmmword ptr [rax]
 * 00000001800CB5C7: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CB5CB: call    sub_1800C50FC
 * 00000001800CB5D0: mov     r8, rax
 * 00000001800CB5D3: mov     r9d, r13d
 * 00000001800CB5D6: mov     edx, 142h
 * 00000001800CB5DB: lea     rcx, [rbp+9F60h+var_2370]; Src
 * 00000001800CB5E2: call    sub_180088448
 * 00000001800CB5E7: nop
 * 00000001800CB5E8: mov     r8, rax
 * 00000001800CB5EB: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CB5F2: lea     rcx, [rbp+9F60h+var_2390]
 * 00000001800CB5F9: call    sub_18001DD3C
 * 00000001800CB5FE: nop
 * 00000001800CB5FF: lea     r8, aPixel; "/Pixel"
 * 00000001800CB606: mov     rdx, rax
 * 00000001800CB609: lea     rcx, [rbp+9F60h+var_6A50]
 * 00000001800CB610: call    sub_18001DC84
 * 00000001800CB615: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CB61A: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CB61F: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CB624: mov     rcx, rax
 * 00000001800CB627: call    sub_180088528
 * 00000001800CB62C: nop
 * 00000001800CB62D: lea     rcx, [rbp+9F60h+var_2390]
 * 00000001800CB634: call    sub_180011570
 * 00000001800CB639: nop
 * 00000001800CB63A: lea     rcx, [rbp+9F60h+var_2370]
 * 00000001800CB641: call    sub_180011570
 * 00000001800CB646: nop
 * 00000001800CB647: lea     rcx, dword_1801FB32C
 * 00000001800CB64E: call    sub_18000C548
 * 00000001800CB653: mov     rax, [rsi+rdi*8]
 * 00000001800CB657: mov     eax, [r15+rax]
 * 00000001800CB65B: cmp     cs:dword_1801FB330, eax
 * 00000001800CB661: jle     loc_1800CB75D
 * 00000001800CB667: lea     rcx, dword_1801FB330
 * 00000001800CB66E: call    sub_18000C5B0
 * 00000001800CB673: cmp     cs:dword_1801FB330, r14d
 * 00000001800CB67A: jnz     loc_1800CB75D
 * 00000001800CB680: xor     edx, edx
 * 00000001800CB682: lea     rcx, [rbp+9F60h+var_9FB2]
 * 00000001800CB686: call    sub_1800A8E58
 * 00000001800CB68B: mov     bl, [rax]
 * 00000001800CB68D: call    sub_1800C50BC
 * 00000001800CB692: mov     rdx, rax
 * 00000001800CB695: mov     r8d, 68BCh
 * 00000001800CB69B: lea     rcx, [rbp+9F60h+var_9900]
 * 00000001800CB6A2: call    sub_1800A8E40
 * 00000001800CB6A7: movups  xmm0, xmmword ptr [rax]
 * 00000001800CB6AA: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CB6B0: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CB6B4: mov     r9d, r12d
 * 00000001800CB6B7: mov     r8d, 5
 * 00000001800CB6BD: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CB6C2: lea     rcx, [rbp+9F60h+var_5E30]
 * 00000001800CB6C9: call    sub_1800A8E0C
 * 00000001800CB6CE: movups  xmm6, xmmword ptr [rax]
 * 00000001800CB6D1: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CB6D5: call    sub_1800C50FC
 * 00000001800CB6DA: mov     r8, rax
 * 00000001800CB6DD: mov     r9d, r13d
 * 00000001800CB6E0: mov     edx, 148h
 * 00000001800CB6E5: lea     rcx, [rbp+9F60h+var_2310]; Src
 * 00000001800CB6EC: call    sub_180088448
 * 00000001800CB6F1: nop
 * 00000001800CB6F2: mov     r8, rax
 * 00000001800CB6F5: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CB6FC: lea     rcx, [rbp+9F60h+var_2330]
 * 00000001800CB703: call    sub_18001DD3C
 * 00000001800CB708: nop
 * 00000001800CB709: lea     r8, aPixel; "/Pixel"
 * 00000001800CB710: mov     rdx, rax
 * 00000001800CB713: lea     rcx, [rbp+9F60h+var_6A90]
 * 00000001800CB71A: call    sub_18001DC84
 * 00000001800CB71F: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CB724: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CB729: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CB72E: mov     rcx, rax
 * 00000001800CB731: call    sub_180088528
 * 00000001800CB736: nop
 * 00000001800CB737: lea     rcx, [rbp+9F60h+var_2330]
 * 00000001800CB73E: call    sub_180011570
 * 00000001800CB743: nop
 * 00000001800CB744: lea     rcx, [rbp+9F60h+var_2310]
 * 00000001800CB74B: call    sub_180011570
 * 00000001800CB750: nop
 * 00000001800CB751: lea     rcx, dword_1801FB330
 * 00000001800CB758: call    sub_18000C548
 * 00000001800CB75D: mov     rax, [rsi+rdi*8]
 * 00000001800CB761: mov     eax, [r15+rax]
 * 00000001800CB765: cmp     cs:dword_1801FB334, eax
 * 00000001800CB76B: jle     loc_1800CB867
 * 00000001800CB771: lea     rcx, dword_1801FB334
 * 00000001800CB778: call    sub_18000C5B0
 * 00000001800CB77D: cmp     cs:dword_1801FB334, r14d
 * 00000001800CB784: jnz     loc_1800CB867
 * 00000001800CB78A: xor     edx, edx
 * 00000001800CB78C: lea     rcx, [rbp+9F60h+var_9FB1]
 * 00000001800CB790: call    sub_1800A8E58
 * 00000001800CB795: mov     bl, [rax]
 * 00000001800CB797: call    sub_1800C50BC
 * 00000001800CB79C: mov     rdx, rax
 * 00000001800CB79F: mov     r8d, 68BCh
 * 00000001800CB7A5: lea     rcx, [rbp+9F60h+var_98F0]
 * 00000001800CB7AC: call    sub_1800A8E40
 * 00000001800CB7B1: movups  xmm0, xmmword ptr [rax]
 * 00000001800CB7B4: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CB7BA: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CB7BE: mov     r9d, r12d
 * 00000001800CB7C1: mov     r8d, 5
 * 00000001800CB7C7: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CB7CC: lea     rcx, [rbp+9F60h+var_5E10]
 * 00000001800CB7D3: call    sub_1800A8E0C
 * 00000001800CB7D8: movups  xmm6, xmmword ptr [rax]
 * 00000001800CB7DB: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CB7DF: call    sub_1800C50FC
 * 00000001800CB7E4: mov     r8, rax
 * 00000001800CB7E7: mov     r9d, r13d
 * 00000001800CB7EA: mov     edx, 14Ah
 * 00000001800CB7EF: lea     rcx, [rbp+9F60h+var_22B0]; Src
 * 00000001800CB7F6: call    sub_180088448
 * 00000001800CB7FB: nop
 * 00000001800CB7FC: mov     r8, rax
 * 00000001800CB7FF: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CB806: lea     rcx, [rbp+9F60h+var_22D0]
 * 00000001800CB80D: call    sub_18001DD3C
 * 00000001800CB812: nop
 * 00000001800CB813: lea     r8, aPixel; "/Pixel"
 * 00000001800CB81A: mov     rdx, rax
 * 00000001800CB81D: lea     rcx, [rbp+9F60h+var_6AB0]
 * 00000001800CB824: call    sub_18001DC84
 * 00000001800CB829: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CB82E: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CB833: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CB838: mov     rcx, rax
 * 00000001800CB83B: call    sub_180088528
 * 00000001800CB840: nop
 * 00000001800CB841: lea     rcx, [rbp+9F60h+var_22D0]
 * 00000001800CB848: call    sub_180011570
 * 00000001800CB84D: nop
 * 00000001800CB84E: lea     rcx, [rbp+9F60h+var_22B0]
 * 00000001800CB855: call    sub_180011570
 * 00000001800CB85A: nop
 * 00000001800CB85B: lea     rcx, dword_1801FB334
 * 00000001800CB862: call    sub_18000C548
 * 00000001800CB867: mov     rax, [rsi+rdi*8]
 * 00000001800CB86B: mov     eax, [r15+rax]
 * 00000001800CB86F: cmp     cs:dword_1801FB338, eax
 * 00000001800CB875: jle     loc_1800CB971
 * 00000001800CB87B: lea     rcx, dword_1801FB338
 * 00000001800CB882: call    sub_18000C5B0
 * 00000001800CB887: cmp     cs:dword_1801FB338, r14d
 * 00000001800CB88E: jnz     loc_1800CB971
 * 00000001800CB894: xor     edx, edx
 * 00000001800CB896: lea     rcx, [rbp+9F60h+var_9FB0]
 * 00000001800CB89A: call    sub_1800A8E58
 * 00000001800CB89F: mov     bl, [rax]
 * 00000001800CB8A1: call    sub_1800C50CC
 * 00000001800CB8A6: mov     rdx, rax
 * 00000001800CB8A9: mov     r8d, 6908h
 * 00000001800CB8AF: lea     rcx, [rbp+9F60h+var_98E0]
 * 00000001800CB8B6: call    sub_1800A8E40
 * 00000001800CB8BB: movups  xmm0, xmmword ptr [rax]
 * 00000001800CB8BE: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CB8C4: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CB8C8: mov     r9d, r12d
 * 00000001800CB8CB: mov     r8d, 5
 * 00000001800CB8D1: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CB8D6: lea     rcx, [rbp+9F60h+var_5DF0]
 * 00000001800CB8DD: call    sub_1800A8E0C
 * 00000001800CB8E2: movups  xmm6, xmmword ptr [rax]
 * 00000001800CB8E5: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CB8E9: call    sub_1800C50FC
 * 00000001800CB8EE: mov     r8, rax
 * 00000001800CB8F1: mov     r9d, r13d
 * 00000001800CB8F4: mov     edx, 150h
 * 00000001800CB8F9: lea     rcx, [rbp+9F60h+var_2250]; Src
 * 00000001800CB900: call    sub_180088448
 * 00000001800CB905: nop
 * 00000001800CB906: mov     r8, rax
 * 00000001800CB909: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CB910: lea     rcx, [rbp+9F60h+var_2270]
 * 00000001800CB917: call    sub_18001DD3C
 * 00000001800CB91C: nop
 * 00000001800CB91D: lea     r8, aPixel; "/Pixel"
 * 00000001800CB924: mov     rdx, rax
 * 00000001800CB927: lea     rcx, [rbp+9F60h+var_6AF0]
 * 00000001800CB92E: call    sub_18001DC84
 * 00000001800CB933: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CB938: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CB93D: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CB942: mov     rcx, rax
 * 00000001800CB945: call    sub_180088528
 * 00000001800CB94A: nop
 * 00000001800CB94B: lea     rcx, [rbp+9F60h+var_2270]
 * 00000001800CB952: call    sub_180011570
 * 00000001800CB957: nop
 * 00000001800CB958: lea     rcx, [rbp+9F60h+var_2250]
 * 00000001800CB95F: call    sub_180011570
 * 00000001800CB964: nop
 * 00000001800CB965: lea     rcx, dword_1801FB338
 * 00000001800CB96C: call    sub_18000C548
 * 00000001800CB971: mov     rax, [rsi+rdi*8]
 * 00000001800CB975: mov     eax, [r15+rax]
 * 00000001800CB979: cmp     cs:dword_1801FB33C, eax
 * 00000001800CB97F: jle     loc_1800CBA7B
 * 00000001800CB985: lea     rcx, dword_1801FB33C
 * 00000001800CB98C: call    sub_18000C5B0
 * 00000001800CB991: cmp     cs:dword_1801FB33C, r14d
 * 00000001800CB998: jnz     loc_1800CBA7B
 * 00000001800CB99E: xor     edx, edx
 * 00000001800CB9A0: lea     rcx, [rbp+9F60h+var_9FAF]
 * 00000001800CB9A4: call    sub_1800A8E58
 * 00000001800CB9A9: mov     bl, [rax]
 * 00000001800CB9AB: call    sub_1800C50CC
 * 00000001800CB9B0: mov     rdx, rax
 * 00000001800CB9B3: mov     r8d, 6908h
 * 00000001800CB9B9: lea     rcx, [rbp+9F60h+var_98D0]
 * 00000001800CB9C0: call    sub_1800A8E40
 * 00000001800CB9C5: movups  xmm0, xmmword ptr [rax]
 * 00000001800CB9C8: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CB9CE: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CB9D2: mov     r9d, r12d
 * 00000001800CB9D5: mov     r8d, 5
 * 00000001800CB9DB: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CB9E0: lea     rcx, [rbp+9F60h+var_5DD0]
 * 00000001800CB9E7: call    sub_1800A8E0C
 * 00000001800CB9EC: movups  xmm6, xmmword ptr [rax]
 * 00000001800CB9EF: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CB9F3: call    sub_1800C50FC
 * 00000001800CB9F8: mov     r8, rax
 * 00000001800CB9FB: mov     r9d, r13d
 * 00000001800CB9FE: mov     edx, 152h
 * 00000001800CBA03: lea     rcx, [rbp+9F60h+var_21F0]; Src
 * 00000001800CBA0A: call    sub_180088448
 * 00000001800CBA0F: nop
 * 00000001800CBA10: mov     r8, rax
 * 00000001800CBA13: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CBA1A: lea     rcx, [rbp+9F60h+var_2210]
 * 00000001800CBA21: call    sub_18001DD3C
 * 00000001800CBA26: nop
 * 00000001800CBA27: lea     r8, aPixel; "/Pixel"
 * 00000001800CBA2E: mov     rdx, rax
 * 00000001800CBA31: lea     rcx, [rbp+9F60h+var_6B10]
 * 00000001800CBA38: call    sub_18001DC84
 * 00000001800CBA3D: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CBA42: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CBA47: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CBA4C: mov     rcx, rax
 * 00000001800CBA4F: call    sub_180088528
 * 00000001800CBA54: nop
 * 00000001800CBA55: lea     rcx, [rbp+9F60h+var_2210]
 * 00000001800CBA5C: call    sub_180011570
 * 00000001800CBA61: nop
 * 00000001800CBA62: lea     rcx, [rbp+9F60h+var_21F0]
 * 00000001800CBA69: call    sub_180011570
 * 00000001800CBA6E: nop
 * 00000001800CBA6F: lea     rcx, dword_1801FB33C
 * 00000001800CBA76: call    sub_18000C548
 * 00000001800CBA7B: mov     rax, [rsi+rdi*8]
 * 00000001800CBA7F: mov     eax, [r15+rax]
 * 00000001800CBA83: cmp     cs:dword_1801FB340, eax
 * 00000001800CBA89: jle     loc_1800CBB85
 * 00000001800CBA8F: lea     rcx, dword_1801FB340
 * 00000001800CBA96: call    sub_18000C5B0
 * 00000001800CBA9B: cmp     cs:dword_1801FB340, r14d
 * 00000001800CBAA2: jnz     loc_1800CBB85
 * 00000001800CBAA8: xor     edx, edx
 * 00000001800CBAAA: lea     rcx, [rbp+9F60h+var_9FAE]
 * 00000001800CBAAE: call    sub_1800A8E58
 * 00000001800CBAB3: mov     bl, [rax]
 * 00000001800CBAB5: call    sub_1800C50EC
 * 00000001800CBABA: mov     rdx, rax
 * 00000001800CBABD: mov     r8d, 6ABCh
 * 00000001800CBAC3: lea     rcx, [rbp+9F60h+var_98C0]
 * 00000001800CBACA: call    sub_1800A8E40
 * 00000001800CBACF: movups  xmm0, xmmword ptr [rax]
 * 00000001800CBAD2: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CBAD8: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CBADC: mov     r9d, r12d
 * 00000001800CBADF: mov     r8d, 5
 * 00000001800CBAE5: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CBAEA: lea     rcx, [rbp+9F60h+var_5DB0]
 * 00000001800CBAF1: call    sub_1800A8E0C
 * 00000001800CBAF6: movups  xmm6, xmmword ptr [rax]
 * 00000001800CBAF9: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CBAFD: call    sub_1800C50FC
 * 00000001800CBB02: mov     r8, rax
 * 00000001800CBB05: mov     r9d, r13d
 * 00000001800CBB08: mov     edx, 158h
 * 00000001800CBB0D: lea     rcx, [rbp+9F60h+var_2190]; Src
 * 00000001800CBB14: call    sub_180088448
 * 00000001800CBB19: nop
 * 00000001800CBB1A: mov     r8, rax
 * 00000001800CBB1D: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CBB24: lea     rcx, [rbp+9F60h+var_21B0]
 * 00000001800CBB2B: call    sub_18001DD3C
 * 00000001800CBB30: nop
 * 00000001800CBB31: lea     r8, aPixel; "/Pixel"
 * 00000001800CBB38: mov     rdx, rax
 * 00000001800CBB3B: lea     rcx, [rbp+9F60h+var_6B50]
 * 00000001800CBB42: call    sub_18001DC84
 * 00000001800CBB47: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CBB4C: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CBB51: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CBB56: mov     rcx, rax
 * 00000001800CBB59: call    sub_180088528
 * 00000001800CBB5E: nop
 * 00000001800CBB5F: lea     rcx, [rbp+9F60h+var_21B0]
 * 00000001800CBB66: call    sub_180011570
 * 00000001800CBB6B: nop
 * 00000001800CBB6C: lea     rcx, [rbp+9F60h+var_2190]
 * 00000001800CBB73: call    sub_180011570
 * 00000001800CBB78: nop
 * 00000001800CBB79: lea     rcx, dword_1801FB340
 * 00000001800CBB80: call    sub_18000C548
 * 00000001800CBB85: mov     rax, [rsi+rdi*8]
 * 00000001800CBB89: mov     eax, [r15+rax]
 * 00000001800CBB8D: cmp     cs:dword_1801FB344, eax
 * 00000001800CBB93: jle     loc_1800CBC8F
 * 00000001800CBB99: lea     rcx, dword_1801FB344
 * 00000001800CBBA0: call    sub_18000C5B0
 * 00000001800CBBA5: cmp     cs:dword_1801FB344, r14d
 * 00000001800CBBAC: jnz     loc_1800CBC8F
 * 00000001800CBBB2: xor     edx, edx
 * 00000001800CBBB4: lea     rcx, [rbp+9F60h+var_9FAD]
 * 00000001800CBBB8: call    sub_1800A8E58
 * 00000001800CBBBD: mov     bl, [rax]
 * 00000001800CBBBF: call    sub_1800C50EC
 * 00000001800CBBC4: mov     rdx, rax
 * 00000001800CBBC7: mov     r8d, 6ABCh
 * 00000001800CBBCD: lea     rcx, [rbp+9F60h+var_98B0]
 * 00000001800CBBD4: call    sub_1800A8E40
 * 00000001800CBBD9: movups  xmm0, xmmword ptr [rax]
 * 00000001800CBBDC: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CBBE2: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CBBE6: mov     r9d, r12d
 * 00000001800CBBE9: mov     r8d, 5
 * 00000001800CBBEF: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CBBF4: lea     rcx, [rbp+9F60h+var_5D90]
 * 00000001800CBBFB: call    sub_1800A8E0C
 * 00000001800CBC00: movups  xmm6, xmmword ptr [rax]
 * 00000001800CBC03: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CBC07: call    sub_1800C50FC
 * 00000001800CBC0C: mov     r8, rax
 * 00000001800CBC0F: mov     r9d, r13d
 * 00000001800CBC12: mov     edx, 15Ah
 * 00000001800CBC17: lea     rcx, [rbp+9F60h+var_2130]; Src
 * 00000001800CBC1E: call    sub_180088448
 * 00000001800CBC23: nop
 * 00000001800CBC24: mov     r8, rax
 * 00000001800CBC27: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CBC2E: lea     rcx, [rbp+9F60h+var_2150]
 * 00000001800CBC35: call    sub_18001DD3C
 * 00000001800CBC3A: nop
 * 00000001800CBC3B: lea     r8, aPixel; "/Pixel"
 * 00000001800CBC42: mov     rdx, rax
 * 00000001800CBC45: lea     rcx, [rbp+9F60h+var_6B70]
 * 00000001800CBC4C: call    sub_18001DC84
 * 00000001800CBC51: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CBC56: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CBC5B: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CBC60: mov     rcx, rax
 * 00000001800CBC63: call    sub_180088528
 * 00000001800CBC68: nop
 * 00000001800CBC69: lea     rcx, [rbp+9F60h+var_2150]
 * 00000001800CBC70: call    sub_180011570
 * 00000001800CBC75: nop
 * 00000001800CBC76: lea     rcx, [rbp+9F60h+var_2130]
 * 00000001800CBC7D: call    sub_180011570
 * 00000001800CBC82: nop
 * 00000001800CBC83: lea     rcx, dword_1801FB344
 * 00000001800CBC8A: call    sub_18000C548
 * 00000001800CBC8F: mov     rax, [rsi+rdi*8]
 * 00000001800CBC93: mov     eax, [r15+rax]
 * 00000001800CBC97: cmp     cs:dword_1801FB348, eax
 * 00000001800CBC9D: jle     loc_1800CBD99
 * 00000001800CBCA3: lea     rcx, dword_1801FB348
 * 00000001800CBCAA: call    sub_18000C5B0
 * 00000001800CBCAF: cmp     cs:dword_1801FB348, r14d
 * 00000001800CBCB6: jnz     loc_1800CBD99
 * 00000001800CBCBC: xor     edx, edx
 * 00000001800CBCBE: lea     rcx, [rbp+9F60h+var_9FAC]
 * 00000001800CBCC2: call    sub_1800A8E58
 * 00000001800CBCC7: mov     bl, [rax]
 * 00000001800CBCC9: call    sub_1800C509C
 * 00000001800CBCCE: mov     rdx, rax
 * 00000001800CBCD1: mov     r8d, 672Ch
 * 00000001800CBCD7: lea     rcx, [rbp+9F60h+var_98A0]
 * 00000001800CBCDE: call    sub_1800A8E40
 * 00000001800CBCE3: movups  xmm0, xmmword ptr [rax]
 * 00000001800CBCE6: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CBCEC: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CBCF0: mov     r9d, r12d
 * 00000001800CBCF3: mov     r8d, 5
 * 00000001800CBCF9: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CBCFE: lea     rcx, [rbp+9F60h+var_5D70]
 * 00000001800CBD05: call    sub_1800A8E0C
 * 00000001800CBD0A: movups  xmm6, xmmword ptr [rax]
 * 00000001800CBD0D: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CBD11: call    sub_1800C50FC
 * 00000001800CBD16: mov     r8, rax
 * 00000001800CBD19: mov     r9d, r13d
 * 00000001800CBD1C: mov     edx, 160h
 * 00000001800CBD21: lea     rcx, [rbp+9F60h+var_20D0]; Src
 * 00000001800CBD28: call    sub_180088448
 * 00000001800CBD2D: nop
 * 00000001800CBD2E: mov     r8, rax
 * 00000001800CBD31: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CBD38: lea     rcx, [rbp+9F60h+var_20F0]
 * 00000001800CBD3F: call    sub_18001DD3C
 * 00000001800CBD44: nop
 * 00000001800CBD45: lea     r8, aPixel; "/Pixel"
 * 00000001800CBD4C: mov     rdx, rax
 * 00000001800CBD4F: lea     rcx, [rbp+9F60h+var_6BB0]
 * 00000001800CBD56: call    sub_18001DC84
 * 00000001800CBD5B: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CBD60: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CBD65: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CBD6A: mov     rcx, rax
 * 00000001800CBD6D: call    sub_180088528
 * 00000001800CBD72: nop
 * 00000001800CBD73: lea     rcx, [rbp+9F60h+var_20F0]
 * 00000001800CBD7A: call    sub_180011570
 * 00000001800CBD7F: nop
 * 00000001800CBD80: lea     rcx, [rbp+9F60h+var_20D0]
 * 00000001800CBD87: call    sub_180011570
 * 00000001800CBD8C: nop
 * 00000001800CBD8D: lea     rcx, dword_1801FB348
 * 00000001800CBD94: call    sub_18000C548
 * 00000001800CBD99: mov     rax, [rsi+rdi*8]
 * 00000001800CBD9D: mov     eax, [r15+rax]
 * 00000001800CBDA1: cmp     cs:dword_1801FB34C, eax
 * 00000001800CBDA7: jle     loc_1800CBEA3
 * 00000001800CBDAD: lea     rcx, dword_1801FB34C
 * 00000001800CBDB4: call    sub_18000C5B0
 * 00000001800CBDB9: cmp     cs:dword_1801FB34C, r14d
 * 00000001800CBDC0: jnz     loc_1800CBEA3
 * 00000001800CBDC6: xor     edx, edx
 * 00000001800CBDC8: lea     rcx, [rbp+9F60h+var_9FAB]
 * 00000001800CBDCC: call    sub_1800A8E58
 * 00000001800CBDD1: mov     bl, [rax]
 * 00000001800CBDD3: call    sub_1800C509C
 * 00000001800CBDD8: mov     rdx, rax
 * 00000001800CBDDB: mov     r8d, 672Ch
 * 00000001800CBDE1: lea     rcx, [rbp+9F60h+var_9890]
 * 00000001800CBDE8: call    sub_1800A8E40
 * 00000001800CBDED: movups  xmm0, xmmword ptr [rax]
 * 00000001800CBDF0: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CBDF6: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CBDFA: mov     r9d, r12d
 * 00000001800CBDFD: mov     r8d, 5
 * 00000001800CBE03: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CBE08: lea     rcx, [rbp+9F60h+var_5D50]
 * 00000001800CBE0F: call    sub_1800A8E0C
 * 00000001800CBE14: movups  xmm6, xmmword ptr [rax]
 * 00000001800CBE17: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CBE1B: call    sub_1800C50FC
 * 00000001800CBE20: mov     r8, rax
 * 00000001800CBE23: mov     r9d, r13d
 * 00000001800CBE26: mov     edx, 162h
 * 00000001800CBE2B: lea     rcx, [rbp+9F60h+var_2070]; Src
 * 00000001800CBE32: call    sub_180088448
 * 00000001800CBE37: nop
 * 00000001800CBE38: mov     r8, rax
 * 00000001800CBE3B: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CBE42: lea     rcx, [rbp+9F60h+var_2090]
 * 00000001800CBE49: call    sub_18001DD3C
 * 00000001800CBE4E: nop
 * 00000001800CBE4F: lea     r8, aPixel; "/Pixel"
 * 00000001800CBE56: mov     rdx, rax
 * 00000001800CBE59: lea     rcx, [rbp+9F60h+var_6BD0]
 * 00000001800CBE60: call    sub_18001DC84
 * 00000001800CBE65: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CBE6A: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CBE6F: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CBE74: mov     rcx, rax
 * 00000001800CBE77: call    sub_180088528
 * 00000001800CBE7C: nop
 * 00000001800CBE7D: lea     rcx, [rbp+9F60h+var_2090]
 * 00000001800CBE84: call    sub_180011570
 * 00000001800CBE89: nop
 * 00000001800CBE8A: lea     rcx, [rbp+9F60h+var_2070]
 * 00000001800CBE91: call    sub_180011570
 * 00000001800CBE96: nop
 * 00000001800CBE97: lea     rcx, dword_1801FB34C
 * 00000001800CBE9E: call    sub_18000C548
 * 00000001800CBEA3: mov     rax, [rsi+rdi*8]
 * 00000001800CBEA7: mov     eax, [r15+rax]
 * 00000001800CBEAB: cmp     cs:dword_1801FB350, eax
 * 00000001800CBEB1: jle     loc_1800CBFAD
 * 00000001800CBEB7: lea     rcx, dword_1801FB350
 * 00000001800CBEBE: call    sub_18000C5B0
 * 00000001800CBEC3: cmp     cs:dword_1801FB350, r14d
 * 00000001800CBECA: jnz     loc_1800CBFAD
 * 00000001800CBED0: xor     edx, edx
 * 00000001800CBED2: lea     rcx, [rbp+9F60h+var_9FAA]
 * 00000001800CBED6: call    sub_1800A8E58
 * 00000001800CBEDB: mov     bl, [rax]
 * 00000001800CBEDD: call    sub_1800C50BC
 * 00000001800CBEE2: mov     rdx, rax
 * 00000001800CBEE5: mov     r8d, 68BCh
 * 00000001800CBEEB: lea     rcx, [rbp+9F60h+var_9880]
 * 00000001800CBEF2: call    sub_1800A8E40
 * 00000001800CBEF7: movups  xmm0, xmmword ptr [rax]
 * 00000001800CBEFA: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CBF00: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CBF04: mov     r9d, r12d
 * 00000001800CBF07: mov     r8d, 5
 * 00000001800CBF0D: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CBF12: lea     rcx, [rbp+9F60h+var_5D30]
 * 00000001800CBF19: call    sub_1800A8E0C
 * 00000001800CBF1E: movups  xmm6, xmmword ptr [rax]
 * 00000001800CBF21: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CBF25: call    sub_1800C50FC
 * 00000001800CBF2A: mov     r8, rax
 * 00000001800CBF2D: mov     r9d, r13d
 * 00000001800CBF30: mov     edx, 168h
 * 00000001800CBF35: lea     rcx, [rbp+9F60h+var_2010]; Src
 * 00000001800CBF3C: call    sub_180088448
 * 00000001800CBF41: nop
 * 00000001800CBF42: mov     r8, rax
 * 00000001800CBF45: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CBF4C: lea     rcx, [rbp+9F60h+var_2030]
 * 00000001800CBF53: call    sub_18001DD3C
 * 00000001800CBF58: nop
 * 00000001800CBF59: lea     r8, aPixel; "/Pixel"
 * 00000001800CBF60: mov     rdx, rax
 * 00000001800CBF63: lea     rcx, [rbp+9F60h+var_6C10]
 * 00000001800CBF6A: call    sub_18001DC84
 * 00000001800CBF6F: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CBF74: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CBF79: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CBF7E: mov     rcx, rax
 * 00000001800CBF81: call    sub_180088528
 * 00000001800CBF86: nop
 * 00000001800CBF87: lea     rcx, [rbp+9F60h+var_2030]
 * 00000001800CBF8E: call    sub_180011570
 * 00000001800CBF93: nop
 * 00000001800CBF94: lea     rcx, [rbp+9F60h+var_2010]
 * 00000001800CBF9B: call    sub_180011570
 * 00000001800CBFA0: nop
 * 00000001800CBFA1: lea     rcx, dword_1801FB350
 * 00000001800CBFA8: call    sub_18000C548
 * 00000001800CBFAD: mov     rax, [rsi+rdi*8]
 * 00000001800CBFB1: mov     eax, [r15+rax]
 * 00000001800CBFB5: cmp     cs:dword_1801FB354, eax
 * 00000001800CBFBB: jle     loc_1800CC0B7
 * 00000001800CBFC1: lea     rcx, dword_1801FB354
 * 00000001800CBFC8: call    sub_18000C5B0
 * 00000001800CBFCD: cmp     cs:dword_1801FB354, r14d
 * 00000001800CBFD4: jnz     loc_1800CC0B7
 * 00000001800CBFDA: xor     edx, edx
 * 00000001800CBFDC: lea     rcx, [rbp+9F60h+var_9FA9]
 * 00000001800CBFE0: call    sub_1800A8E58
 * 00000001800CBFE5: mov     bl, [rax]
 * 00000001800CBFE7: call    sub_1800C50BC
 * 00000001800CBFEC: mov     rdx, rax
 * 00000001800CBFEF: mov     r8d, 68BCh
 * 00000001800CBFF5: lea     rcx, [rbp+9F60h+var_9870]
 * 00000001800CBFFC: call    sub_1800A8E40
 * 00000001800CC001: movups  xmm0, xmmword ptr [rax]
 * 00000001800CC004: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CC00A: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CC00E: mov     r9d, r12d
 * 00000001800CC011: mov     r8d, 5
 * 00000001800CC017: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CC01C: lea     rcx, [rbp+9F60h+var_5D10]
 * 00000001800CC023: call    sub_1800A8E0C
 * 00000001800CC028: movups  xmm6, xmmword ptr [rax]
 * 00000001800CC02B: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CC02F: call    sub_1800C50FC
 * 00000001800CC034: mov     r8, rax
 * 00000001800CC037: mov     r9d, r13d
 * 00000001800CC03A: mov     edx, 16Ah
 * 00000001800CC03F: lea     rcx, [rbp+9F60h+var_1FB0]; Src
 * 00000001800CC046: call    sub_180088448
 * 00000001800CC04B: nop
 * 00000001800CC04C: mov     r8, rax
 * 00000001800CC04F: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CC056: lea     rcx, [rbp+9F60h+var_1FD0]
 * 00000001800CC05D: call    sub_18001DD3C
 * 00000001800CC062: nop
 * 00000001800CC063: lea     r8, aPixel; "/Pixel"
 * 00000001800CC06A: mov     rdx, rax
 * 00000001800CC06D: lea     rcx, [rbp+9F60h+var_6C30]
 * 00000001800CC074: call    sub_18001DC84
 * 00000001800CC079: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CC07E: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CC083: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CC088: mov     rcx, rax
 * 00000001800CC08B: call    sub_180088528
 * 00000001800CC090: nop
 * 00000001800CC091: lea     rcx, [rbp+9F60h+var_1FD0]
 * 00000001800CC098: call    sub_180011570
 * 00000001800CC09D: nop
 * 00000001800CC09E: lea     rcx, [rbp+9F60h+var_1FB0]
 * 00000001800CC0A5: call    sub_180011570
 * 00000001800CC0AA: nop
 * 00000001800CC0AB: lea     rcx, dword_1801FB354
 * 00000001800CC0B2: call    sub_18000C548
 * 00000001800CC0B7: mov     rax, [rsi+rdi*8]
 * 00000001800CC0BB: mov     eax, [r15+rax]
 * 00000001800CC0BF: cmp     cs:dword_1801FB358, eax
 * 00000001800CC0C5: jle     loc_1800CC1C1
 * 00000001800CC0CB: lea     rcx, dword_1801FB358
 * 00000001800CC0D2: call    sub_18000C5B0
 * 00000001800CC0D7: cmp     cs:dword_1801FB358, r14d
 * 00000001800CC0DE: jnz     loc_1800CC1C1
 * 00000001800CC0E4: xor     edx, edx
 * 00000001800CC0E6: lea     rcx, [rbp+9F60h+var_9FA8]
 * 00000001800CC0EA: call    sub_1800A8E58
 * 00000001800CC0EF: mov     bl, [rax]
 * 00000001800CC0F1: call    sub_1800C50CC
 * 00000001800CC0F6: mov     rdx, rax
 * 00000001800CC0F9: mov     r8d, 6908h
 * 00000001800CC0FF: lea     rcx, [rbp+9F60h+var_9860]
 * 00000001800CC106: call    sub_1800A8E40
 * 00000001800CC10B: movups  xmm0, xmmword ptr [rax]
 * 00000001800CC10E: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CC114: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CC118: mov     r9d, r12d
 * 00000001800CC11B: mov     r8d, 5
 * 00000001800CC121: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CC126: lea     rcx, [rbp+9F60h+var_5CF0]
 * 00000001800CC12D: call    sub_1800A8E0C
 * 00000001800CC132: movups  xmm6, xmmword ptr [rax]
 * 00000001800CC135: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CC139: call    sub_1800C50FC
 * 00000001800CC13E: mov     r8, rax
 * 00000001800CC141: mov     r9d, r13d
 * 00000001800CC144: mov     edx, 170h
 * 00000001800CC149: lea     rcx, [rbp+9F60h+var_1F50]; Src
 * 00000001800CC150: call    sub_180088448
 * 00000001800CC155: nop
 * 00000001800CC156: mov     r8, rax
 * 00000001800CC159: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CC160: lea     rcx, [rbp+9F60h+var_1F70]
 * 00000001800CC167: call    sub_18001DD3C
 * 00000001800CC16C: nop
 * 00000001800CC16D: lea     r8, aPixel; "/Pixel"
 * 00000001800CC174: mov     rdx, rax
 * 00000001800CC177: lea     rcx, [rbp+9F60h+var_6C70]
 * 00000001800CC17E: call    sub_18001DC84
 * 00000001800CC183: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CC188: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CC18D: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CC192: mov     rcx, rax
 * 00000001800CC195: call    sub_180088528
 * 00000001800CC19A: nop
 * 00000001800CC19B: lea     rcx, [rbp+9F60h+var_1F70]
 * 00000001800CC1A2: call    sub_180011570
 * 00000001800CC1A7: nop
 * 00000001800CC1A8: lea     rcx, [rbp+9F60h+var_1F50]
 * 00000001800CC1AF: call    sub_180011570
 * 00000001800CC1B4: nop
 * 00000001800CC1B5: lea     rcx, dword_1801FB358
 * 00000001800CC1BC: call    sub_18000C548
 * 00000001800CC1C1: mov     rax, [rsi+rdi*8]
 * 00000001800CC1C5: mov     eax, [r15+rax]
 * 00000001800CC1C9: cmp     cs:dword_1801FB35C, eax
 * 00000001800CC1CF: jle     loc_1800CC2CB
 * 00000001800CC1D5: lea     rcx, dword_1801FB35C
 * 00000001800CC1DC: call    sub_18000C5B0
 * 00000001800CC1E1: cmp     cs:dword_1801FB35C, r14d
 * 00000001800CC1E8: jnz     loc_1800CC2CB
 * 00000001800CC1EE: xor     edx, edx
 * 00000001800CC1F0: lea     rcx, [rbp+9F60h+var_9FA7]
 * 00000001800CC1F4: call    sub_1800A8E58
 * 00000001800CC1F9: mov     bl, [rax]
 * 00000001800CC1FB: call    sub_1800C50CC
 * 00000001800CC200: mov     rdx, rax
 * 00000001800CC203: mov     r8d, 6908h
 * 00000001800CC209: lea     rcx, [rbp+9F60h+var_9850]
 * 00000001800CC210: call    sub_1800A8E40
 * 00000001800CC215: movups  xmm0, xmmword ptr [rax]
 * 00000001800CC218: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CC21E: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CC222: mov     r9d, r12d
 * 00000001800CC225: mov     r8d, 5
 * 00000001800CC22B: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CC230: lea     rcx, [rbp+9F60h+var_5CD0]
 * 00000001800CC237: call    sub_1800A8E0C
 * 00000001800CC23C: movups  xmm6, xmmword ptr [rax]
 * 00000001800CC23F: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CC243: call    sub_1800C50FC
 * 00000001800CC248: mov     r8, rax
 * 00000001800CC24B: mov     r9d, r13d
 * 00000001800CC24E: mov     edx, 172h
 * 00000001800CC253: lea     rcx, [rbp+9F60h+var_1EF0]; Src
 * 00000001800CC25A: call    sub_180088448
 * 00000001800CC25F: nop
 * 00000001800CC260: mov     r8, rax
 * 00000001800CC263: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CC26A: lea     rcx, [rbp+9F60h+var_1F10]
 * 00000001800CC271: call    sub_18001DD3C
 * 00000001800CC276: nop
 * 00000001800CC277: lea     r8, aPixel; "/Pixel"
 * 00000001800CC27E: mov     rdx, rax
 * 00000001800CC281: lea     rcx, [rbp+9F60h+var_6C90]
 * 00000001800CC288: call    sub_18001DC84
 * 00000001800CC28D: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CC292: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CC297: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CC29C: mov     rcx, rax
 * 00000001800CC29F: call    sub_180088528
 * 00000001800CC2A4: nop
 * 00000001800CC2A5: lea     rcx, [rbp+9F60h+var_1F10]
 * 00000001800CC2AC: call    sub_180011570
 * 00000001800CC2B1: nop
 * 00000001800CC2B2: lea     rcx, [rbp+9F60h+var_1EF0]
 * 00000001800CC2B9: call    sub_180011570
 * 00000001800CC2BE: nop
 * 00000001800CC2BF: lea     rcx, dword_1801FB35C
 * 00000001800CC2C6: call    sub_18000C548
 * 00000001800CC2CB: mov     rax, [rsi+rdi*8]
 * 00000001800CC2CF: mov     eax, [r15+rax]
 * 00000001800CC2D3: cmp     cs:dword_1801FB360, eax
 * 00000001800CC2D9: jle     loc_1800CC3D5
 * 00000001800CC2DF: lea     rcx, dword_1801FB360
 * 00000001800CC2E6: call    sub_18000C5B0
 * 00000001800CC2EB: cmp     cs:dword_1801FB360, r14d
 * 00000001800CC2F2: jnz     loc_1800CC3D5
 * 00000001800CC2F8: xor     edx, edx
 * 00000001800CC2FA: lea     rcx, [rbp+9F60h+var_9FA6]
 * 00000001800CC2FE: call    sub_1800A8E58
 * 00000001800CC303: mov     bl, [rax]
 * 00000001800CC305: call    sub_1800C50EC
 * 00000001800CC30A: mov     rdx, rax
 * 00000001800CC30D: mov     r8d, 6ABCh
 * 00000001800CC313: lea     rcx, [rbp+9F60h+var_9840]
 * 00000001800CC31A: call    sub_1800A8E40
 * 00000001800CC31F: movups  xmm0, xmmword ptr [rax]
 * 00000001800CC322: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CC328: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CC32C: mov     r9d, r12d
 * 00000001800CC32F: mov     r8d, 5
 * 00000001800CC335: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CC33A: lea     rcx, [rbp+9F60h+var_5CB0]
 * 00000001800CC341: call    sub_1800A8E0C
 * 00000001800CC346: movups  xmm6, xmmword ptr [rax]
 * 00000001800CC349: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CC34D: call    sub_1800C50FC
 * 00000001800CC352: mov     r8, rax
 * 00000001800CC355: mov     r9d, r13d
 * 00000001800CC358: mov     edx, 178h
 * 00000001800CC35D: lea     rcx, [rbp+9F60h+var_1E90]; Src
 * 00000001800CC364: call    sub_180088448
 * 00000001800CC369: nop
 * 00000001800CC36A: mov     r8, rax
 * 00000001800CC36D: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CC374: lea     rcx, [rbp+9F60h+var_1EB0]
 * 00000001800CC37B: call    sub_18001DD3C
 * 00000001800CC380: nop
 * 00000001800CC381: lea     r8, aPixel; "/Pixel"
 * 00000001800CC388: mov     rdx, rax
 * 00000001800CC38B: lea     rcx, [rbp+9F60h+var_6CD0]
 * 00000001800CC392: call    sub_18001DC84
 * 00000001800CC397: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CC39C: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CC3A1: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CC3A6: mov     rcx, rax
 * 00000001800CC3A9: call    sub_180088528
 * 00000001800CC3AE: nop
 * 00000001800CC3AF: lea     rcx, [rbp+9F60h+var_1EB0]
 * 00000001800CC3B6: call    sub_180011570
 * 00000001800CC3BB: nop
 * 00000001800CC3BC: lea     rcx, [rbp+9F60h+var_1E90]
 * 00000001800CC3C3: call    sub_180011570
 * 00000001800CC3C8: nop
 * 00000001800CC3C9: lea     rcx, dword_1801FB360
 * 00000001800CC3D0: call    sub_18000C548
 * 00000001800CC3D5: mov     rax, [rsi+rdi*8]
 * 00000001800CC3D9: mov     eax, [r15+rax]
 * 00000001800CC3DD: cmp     cs:dword_1801FB364, eax
 * 00000001800CC3E3: jle     loc_1800CC4DF
 * 00000001800CC3E9: lea     rcx, dword_1801FB364
 * 00000001800CC3F0: call    sub_18000C5B0
 * 00000001800CC3F5: cmp     cs:dword_1801FB364, r14d
 * 00000001800CC3FC: jnz     loc_1800CC4DF
 * 00000001800CC402: xor     edx, edx
 * 00000001800CC404: lea     rcx, [rbp+9F60h+var_9FA5]
 * 00000001800CC408: call    sub_1800A8E58
 * 00000001800CC40D: mov     bl, [rax]
 * 00000001800CC40F: call    sub_1800C50EC
 * 00000001800CC414: mov     rdx, rax
 * 00000001800CC417: mov     r8d, 6ABCh
 * 00000001800CC41D: lea     rcx, [rbp+9F60h+var_9830]
 * 00000001800CC424: call    sub_1800A8E40
 * 00000001800CC429: movups  xmm0, xmmword ptr [rax]
 * 00000001800CC42C: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CC432: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CC436: mov     r9d, r12d
 * 00000001800CC439: mov     r8d, 5
 * 00000001800CC43F: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CC444: lea     rcx, [rbp+9F60h+var_5C90]
 * 00000001800CC44B: call    sub_1800A8E0C
 * 00000001800CC450: movups  xmm6, xmmword ptr [rax]
 * 00000001800CC453: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CC457: call    sub_1800C50FC
 * 00000001800CC45C: mov     r8, rax
 * 00000001800CC45F: mov     r9d, r13d
 * 00000001800CC462: mov     edx, 17Ah
 * 00000001800CC467: lea     rcx, [rbp+9F60h+var_1E30]; Src
 * 00000001800CC46E: call    sub_180088448
 * 00000001800CC473: nop
 * 00000001800CC474: mov     r8, rax
 * 00000001800CC477: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CC47E: lea     rcx, [rbp+9F60h+var_1E50]
 * 00000001800CC485: call    sub_18001DD3C
 * 00000001800CC48A: nop
 * 00000001800CC48B: lea     r8, aPixel; "/Pixel"
 * 00000001800CC492: mov     rdx, rax
 * 00000001800CC495: lea     rcx, [rbp+9F60h+var_6CF0]
 * 00000001800CC49C: call    sub_18001DC84
 * 00000001800CC4A1: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CC4A6: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CC4AB: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CC4B0: mov     rcx, rax
 * 00000001800CC4B3: call    sub_180088528
 * 00000001800CC4B8: nop
 * 00000001800CC4B9: lea     rcx, [rbp+9F60h+var_1E50]
 * 00000001800CC4C0: call    sub_180011570
 * 00000001800CC4C5: nop
 * 00000001800CC4C6: lea     rcx, [rbp+9F60h+var_1E30]
 * 00000001800CC4CD: call    sub_180011570
 * 00000001800CC4D2: nop
 * 00000001800CC4D3: lea     rcx, dword_1801FB364
 * 00000001800CC4DA: call    sub_18000C548
 * 00000001800CC4DF: mov     rax, [rsi+rdi*8]
 * 00000001800CC4E3: mov     eax, [r15+rax]
 * 00000001800CC4E7: cmp     cs:dword_1801FB368, eax
 * 00000001800CC4ED: jle     loc_1800CC5E9
 * 00000001800CC4F3: lea     rcx, dword_1801FB368
 * 00000001800CC4FA: call    sub_18000C5B0
 * 00000001800CC4FF: cmp     cs:dword_1801FB368, r14d
 * 00000001800CC506: jnz     loc_1800CC5E9
 * 00000001800CC50C: xor     edx, edx
 * 00000001800CC50E: lea     rcx, [rbp+9F60h+var_9FA4]
 * 00000001800CC512: call    sub_1800A8E58
 * 00000001800CC517: mov     bl, [rax]
 * 00000001800CC519: call    sub_1800C509C
 * 00000001800CC51E: mov     rdx, rax
 * 00000001800CC521: mov     r8d, 672Ch
 * 00000001800CC527: lea     rcx, [rbp+9F60h+var_9820]
 * 00000001800CC52E: call    sub_1800A8E40
 * 00000001800CC533: movups  xmm0, xmmword ptr [rax]
 * 00000001800CC536: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CC53C: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CC540: mov     r9d, r12d
 * 00000001800CC543: mov     r8d, 5
 * 00000001800CC549: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CC54E: lea     rcx, [rbp+9F60h+var_5C70]
 * 00000001800CC555: call    sub_1800A8E0C
 * 00000001800CC55A: movups  xmm6, xmmword ptr [rax]
 * 00000001800CC55D: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CC561: call    sub_1800C50FC
 * 00000001800CC566: mov     r8, rax
 * 00000001800CC569: mov     r9d, r13d
 * 00000001800CC56C: mov     edx, 180h
 * 00000001800CC571: lea     rcx, [rbp+9F60h+var_1DD0]; Src
 * 00000001800CC578: call    sub_180088448
 * 00000001800CC57D: nop
 * 00000001800CC57E: mov     r8, rax
 * 00000001800CC581: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CC588: lea     rcx, [rbp+9F60h+var_1DF0]
 * 00000001800CC58F: call    sub_18001DD3C
 * 00000001800CC594: nop
 * 00000001800CC595: lea     r8, aPixel; "/Pixel"
 * 00000001800CC59C: mov     rdx, rax
 * 00000001800CC59F: lea     rcx, [rbp+9F60h+var_6D30]
 * 00000001800CC5A6: call    sub_18001DC84
 * 00000001800CC5AB: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CC5B0: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CC5B5: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CC5BA: mov     rcx, rax
 * 00000001800CC5BD: call    sub_180088528
 * 00000001800CC5C2: nop
 * 00000001800CC5C3: lea     rcx, [rbp+9F60h+var_1DF0]
 * 00000001800CC5CA: call    sub_180011570
 * 00000001800CC5CF: nop
 * 00000001800CC5D0: lea     rcx, [rbp+9F60h+var_1DD0]
 * 00000001800CC5D7: call    sub_180011570
 * 00000001800CC5DC: nop
 * 00000001800CC5DD: lea     rcx, dword_1801FB368
 * 00000001800CC5E4: call    sub_18000C548
 * 00000001800CC5E9: mov     rax, [rsi+rdi*8]
 * 00000001800CC5ED: mov     eax, [r15+rax]
 * 00000001800CC5F1: cmp     cs:dword_1801FB36C, eax
 * 00000001800CC5F7: jle     loc_1800CC6F3
 * 00000001800CC5FD: lea     rcx, dword_1801FB36C
 * 00000001800CC604: call    sub_18000C5B0
 * 00000001800CC609: cmp     cs:dword_1801FB36C, r14d
 * 00000001800CC610: jnz     loc_1800CC6F3
 * 00000001800CC616: xor     edx, edx
 * 00000001800CC618: lea     rcx, [rbp+9F60h+var_9FA3]
 * 00000001800CC61C: call    sub_1800A8E58
 * 00000001800CC621: mov     bl, [rax]
 * 00000001800CC623: call    sub_1800C509C
 * 00000001800CC628: mov     rdx, rax
 * 00000001800CC62B: mov     r8d, 672Ch
 * 00000001800CC631: lea     rcx, [rbp+9F60h+var_9810]
 * 00000001800CC638: call    sub_1800A8E40
 * 00000001800CC63D: movups  xmm0, xmmword ptr [rax]
 * 00000001800CC640: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CC646: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CC64A: mov     r9d, r12d
 * 00000001800CC64D: mov     r8d, 5
 * 00000001800CC653: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CC658: lea     rcx, [rbp+9F60h+var_5C50]
 * 00000001800CC65F: call    sub_1800A8E0C
 * 00000001800CC664: movups  xmm6, xmmword ptr [rax]
 * 00000001800CC667: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CC66B: call    sub_1800C50FC
 * 00000001800CC670: mov     r8, rax
 * 00000001800CC673: mov     r9d, r13d
 * 00000001800CC676: mov     edx, 182h
 * 00000001800CC67B: lea     rcx, [rbp+9F60h+var_1D70]; Src
 * 00000001800CC682: call    sub_180088448
 * 00000001800CC687: nop
 * 00000001800CC688: mov     r8, rax
 * 00000001800CC68B: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CC692: lea     rcx, [rbp+9F60h+var_1D90]
 * 00000001800CC699: call    sub_18001DD3C
 * 00000001800CC69E: nop
 * 00000001800CC69F: lea     r8, aPixel; "/Pixel"
 * 00000001800CC6A6: mov     rdx, rax
 * 00000001800CC6A9: lea     rcx, [rbp+9F60h+var_6D50]
 * 00000001800CC6B0: call    sub_18001DC84
 * 00000001800CC6B5: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CC6BA: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CC6BF: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CC6C4: mov     rcx, rax
 * 00000001800CC6C7: call    sub_180088528
 * 00000001800CC6CC: nop
 * 00000001800CC6CD: lea     rcx, [rbp+9F60h+var_1D90]
 * 00000001800CC6D4: call    sub_180011570
 * 00000001800CC6D9: nop
 * 00000001800CC6DA: lea     rcx, [rbp+9F60h+var_1D70]
 * 00000001800CC6E1: call    sub_180011570
 * 00000001800CC6E6: nop
 * 00000001800CC6E7: lea     rcx, dword_1801FB36C
 * 00000001800CC6EE: call    sub_18000C548
 * 00000001800CC6F3: mov     rax, [rsi+rdi*8]
 * 00000001800CC6F7: mov     eax, [r15+rax]
 * 00000001800CC6FB: cmp     cs:dword_1801FB370, eax
 * 00000001800CC701: jle     loc_1800CC7FD
 * 00000001800CC707: lea     rcx, dword_1801FB370
 * 00000001800CC70E: call    sub_18000C5B0
 * 00000001800CC713: cmp     cs:dword_1801FB370, r14d
 * 00000001800CC71A: jnz     loc_1800CC7FD
 * 00000001800CC720: xor     edx, edx
 * 00000001800CC722: lea     rcx, [rbp+9F60h+var_9FA2]
 * 00000001800CC726: call    sub_1800A8E58
 * 00000001800CC72B: mov     bl, [rax]
 * 00000001800CC72D: call    sub_1800C50BC
 * 00000001800CC732: mov     rdx, rax
 * 00000001800CC735: mov     r8d, 68BCh
 * 00000001800CC73B: lea     rcx, [rbp+9F60h+var_9800]
 * 00000001800CC742: call    sub_1800A8E40
 * 00000001800CC747: movups  xmm0, xmmword ptr [rax]
 * 00000001800CC74A: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CC750: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CC754: mov     r9d, r12d
 * 00000001800CC757: mov     r8d, 5
 * 00000001800CC75D: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CC762: lea     rcx, [rbp+9F60h+var_5C30]
 * 00000001800CC769: call    sub_1800A8E0C
 * 00000001800CC76E: movups  xmm6, xmmword ptr [rax]
 * 00000001800CC771: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CC775: call    sub_1800C50FC
 * 00000001800CC77A: mov     r8, rax
 * 00000001800CC77D: mov     r9d, r13d
 * 00000001800CC780: mov     edx, 188h
 * 00000001800CC785: lea     rcx, [rbp+9F60h+var_1D10]; Src
 * 00000001800CC78C: call    sub_180088448
 * 00000001800CC791: nop
 * 00000001800CC792: mov     r8, rax
 * 00000001800CC795: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CC79C: lea     rcx, [rbp+9F60h+var_1D30]
 * 00000001800CC7A3: call    sub_18001DD3C
 * 00000001800CC7A8: nop
 * 00000001800CC7A9: lea     r8, aPixel; "/Pixel"
 * 00000001800CC7B0: mov     rdx, rax
 * 00000001800CC7B3: lea     rcx, [rbp+9F60h+var_6D90]
 * 00000001800CC7BA: call    sub_18001DC84
 * 00000001800CC7BF: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CC7C4: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CC7C9: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CC7CE: mov     rcx, rax
 * 00000001800CC7D1: call    sub_180088528
 * 00000001800CC7D6: nop
 * 00000001800CC7D7: lea     rcx, [rbp+9F60h+var_1D30]
 * 00000001800CC7DE: call    sub_180011570
 * 00000001800CC7E3: nop
 * 00000001800CC7E4: lea     rcx, [rbp+9F60h+var_1D10]
 * 00000001800CC7EB: call    sub_180011570
 * 00000001800CC7F0: nop
 * 00000001800CC7F1: lea     rcx, dword_1801FB370
 * 00000001800CC7F8: call    sub_18000C548
 * 00000001800CC7FD: mov     rax, [rsi+rdi*8]
 * 00000001800CC801: mov     eax, [r15+rax]
 * 00000001800CC805: cmp     cs:dword_1801FB374, eax
 * 00000001800CC80B: jle     loc_1800CC907
 * 00000001800CC811: lea     rcx, dword_1801FB374
 * 00000001800CC818: call    sub_18000C5B0
 * 00000001800CC81D: cmp     cs:dword_1801FB374, r14d
 * 00000001800CC824: jnz     loc_1800CC907
 * 00000001800CC82A: xor     edx, edx
 * 00000001800CC82C: lea     rcx, [rbp+9F60h+var_9FA1]
 * 00000001800CC830: call    sub_1800A8E58
 * 00000001800CC835: mov     bl, [rax]
 * 00000001800CC837: call    sub_1800C50BC
 * 00000001800CC83C: mov     rdx, rax
 * 00000001800CC83F: mov     r8d, 68BCh
 * 00000001800CC845: lea     rcx, [rbp+9F60h+var_97F0]
 * 00000001800CC84C: call    sub_1800A8E40
 * 00000001800CC851: movups  xmm0, xmmword ptr [rax]
 * 00000001800CC854: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CC85A: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CC85E: mov     r9d, r12d
 * 00000001800CC861: mov     r8d, 5
 * 00000001800CC867: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CC86C: lea     rcx, [rbp+9F60h+var_5C10]
 * 00000001800CC873: call    sub_1800A8E0C
 * 00000001800CC878: movups  xmm6, xmmword ptr [rax]
 * 00000001800CC87B: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CC87F: call    sub_1800C50FC
 * 00000001800CC884: mov     r8, rax
 * 00000001800CC887: mov     r9d, r13d
 * 00000001800CC88A: mov     edx, 18Ah
 * 00000001800CC88F: lea     rcx, [rbp+9F60h+var_1CB0]; Src
 * 00000001800CC896: call    sub_180088448
 * 00000001800CC89B: nop
 * 00000001800CC89C: mov     r8, rax
 * 00000001800CC89F: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CC8A6: lea     rcx, [rbp+9F60h+var_1CD0]
 * 00000001800CC8AD: call    sub_18001DD3C
 * 00000001800CC8B2: nop
 * 00000001800CC8B3: lea     r8, aPixel; "/Pixel"
 * 00000001800CC8BA: mov     rdx, rax
 * 00000001800CC8BD: lea     rcx, [rbp+9F60h+var_6DB0]
 * 00000001800CC8C4: call    sub_18001DC84
 * 00000001800CC8C9: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CC8CE: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CC8D3: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CC8D8: mov     rcx, rax
 * 00000001800CC8DB: call    sub_180088528
 * 00000001800CC8E0: nop
 * 00000001800CC8E1: lea     rcx, [rbp+9F60h+var_1CD0]
 * 00000001800CC8E8: call    sub_180011570
 * 00000001800CC8ED: nop
 * 00000001800CC8EE: lea     rcx, [rbp+9F60h+var_1CB0]
 * 00000001800CC8F5: call    sub_180011570
 * 00000001800CC8FA: nop
 * 00000001800CC8FB: lea     rcx, dword_1801FB374
 * 00000001800CC902: call    sub_18000C548
 * 00000001800CC907: mov     rax, [rsi+rdi*8]
 * 00000001800CC90B: mov     eax, [r15+rax]
 * 00000001800CC90F: cmp     cs:dword_1801FB378, eax
 * 00000001800CC915: jle     loc_1800CCA11
 * 00000001800CC91B: lea     rcx, dword_1801FB378
 * 00000001800CC922: call    sub_18000C5B0
 * 00000001800CC927: cmp     cs:dword_1801FB378, r14d
 * 00000001800CC92E: jnz     loc_1800CCA11
 * 00000001800CC934: xor     edx, edx
 * 00000001800CC936: lea     rcx, [rbp+9F60h+var_9FA0]
 * 00000001800CC93A: call    sub_1800A8E58
 * 00000001800CC93F: mov     bl, [rax]
 * 00000001800CC941: call    sub_1800C50CC
 * 00000001800CC946: mov     rdx, rax
 * 00000001800CC949: mov     r8d, 6908h
 * 00000001800CC94F: lea     rcx, [rbp+9F60h+var_97E0]
 * 00000001800CC956: call    sub_1800A8E40
 * 00000001800CC95B: movups  xmm0, xmmword ptr [rax]
 * 00000001800CC95E: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CC964: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CC968: mov     r9d, r12d
 * 00000001800CC96B: mov     r8d, 5
 * 00000001800CC971: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CC976: lea     rcx, [rbp+9F60h+var_5BF0]
 * 00000001800CC97D: call    sub_1800A8E0C
 * 00000001800CC982: movups  xmm6, xmmword ptr [rax]
 * 00000001800CC985: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CC989: call    sub_1800C50FC
 * 00000001800CC98E: mov     r8, rax
 * 00000001800CC991: mov     r9d, r13d
 * 00000001800CC994: mov     edx, 190h
 * 00000001800CC999: lea     rcx, [rbp+9F60h+var_1C50]; Src
 * 00000001800CC9A0: call    sub_180088448
 * 00000001800CC9A5: nop
 * 00000001800CC9A6: mov     r8, rax
 * 00000001800CC9A9: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CC9B0: lea     rcx, [rbp+9F60h+var_1C70]
 * 00000001800CC9B7: call    sub_18001DD3C
 * 00000001800CC9BC: nop
 * 00000001800CC9BD: lea     r8, aPixel; "/Pixel"
 * 00000001800CC9C4: mov     rdx, rax
 * 00000001800CC9C7: lea     rcx, [rbp+9F60h+var_6DF0]
 * 00000001800CC9CE: call    sub_18001DC84
 * 00000001800CC9D3: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CC9D8: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CC9DD: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CC9E2: mov     rcx, rax
 * 00000001800CC9E5: call    sub_180088528
 * 00000001800CC9EA: nop
 * 00000001800CC9EB: lea     rcx, [rbp+9F60h+var_1C70]
 * 00000001800CC9F2: call    sub_180011570
 * 00000001800CC9F7: nop
 * 00000001800CC9F8: lea     rcx, [rbp+9F60h+var_1C50]
 * 00000001800CC9FF: call    sub_180011570
 * 00000001800CCA04: nop
 * 00000001800CCA05: lea     rcx, dword_1801FB378
 * 00000001800CCA0C: call    sub_18000C548
 * 00000001800CCA11: mov     rax, [rsi+rdi*8]
 * 00000001800CCA15: mov     eax, [r15+rax]
 * 00000001800CCA19: cmp     cs:dword_1801FB37C, eax
 * 00000001800CCA1F: jle     loc_1800CCB1B
 * 00000001800CCA25: lea     rcx, dword_1801FB37C
 * 00000001800CCA2C: call    sub_18000C5B0
 * 00000001800CCA31: cmp     cs:dword_1801FB37C, r14d
 * 00000001800CCA38: jnz     loc_1800CCB1B
 * 00000001800CCA3E: xor     edx, edx
 * 00000001800CCA40: lea     rcx, [rbp+9F60h+var_9F9F]
 * 00000001800CCA44: call    sub_1800A8E58
 * 00000001800CCA49: mov     bl, [rax]
 * 00000001800CCA4B: call    sub_1800C50CC
 * 00000001800CCA50: mov     rdx, rax
 * 00000001800CCA53: mov     r8d, 6908h
 * 00000001800CCA59: lea     rcx, [rbp+9F60h+var_97D0]
 * 00000001800CCA60: call    sub_1800A8E40
 * 00000001800CCA65: movups  xmm0, xmmword ptr [rax]
 * 00000001800CCA68: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CCA6E: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CCA72: mov     r9d, r12d
 * 00000001800CCA75: mov     r8d, 5
 * 00000001800CCA7B: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CCA80: lea     rcx, [rbp+9F60h+var_5BD0]
 * 00000001800CCA87: call    sub_1800A8E0C
 * 00000001800CCA8C: movups  xmm6, xmmword ptr [rax]
 * 00000001800CCA8F: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CCA93: call    sub_1800C50FC
 * 00000001800CCA98: mov     r8, rax
 * 00000001800CCA9B: mov     r9d, r13d
 * 00000001800CCA9E: mov     edx, 192h
 * 00000001800CCAA3: lea     rcx, [rbp+9F60h+var_1BF0]; Src
 * 00000001800CCAAA: call    sub_180088448
 * 00000001800CCAAF: nop
 * 00000001800CCAB0: mov     r8, rax
 * 00000001800CCAB3: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CCABA: lea     rcx, [rbp+9F60h+var_1C10]
 * 00000001800CCAC1: call    sub_18001DD3C
 * 00000001800CCAC6: nop
 * 00000001800CCAC7: lea     r8, aPixel; "/Pixel"
 * 00000001800CCACE: mov     rdx, rax
 * 00000001800CCAD1: lea     rcx, [rbp+9F60h+var_6E10]
 * 00000001800CCAD8: call    sub_18001DC84
 * 00000001800CCADD: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CCAE2: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CCAE7: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CCAEC: mov     rcx, rax
 * 00000001800CCAEF: call    sub_180088528
 * 00000001800CCAF4: nop
 * 00000001800CCAF5: lea     rcx, [rbp+9F60h+var_1C10]
 * 00000001800CCAFC: call    sub_180011570
 * 00000001800CCB01: nop
 * 00000001800CCB02: lea     rcx, [rbp+9F60h+var_1BF0]
 * 00000001800CCB09: call    sub_180011570
 * 00000001800CCB0E: nop
 * 00000001800CCB0F: lea     rcx, dword_1801FB37C
 * 00000001800CCB16: call    sub_18000C548
 * 00000001800CCB1B: mov     rax, [rsi+rdi*8]
 * 00000001800CCB1F: mov     eax, [r15+rax]
 * 00000001800CCB23: cmp     cs:dword_1801FB380, eax
 * 00000001800CCB29: jle     loc_1800CCC25
 * 00000001800CCB2F: lea     rcx, dword_1801FB380
 * 00000001800CCB36: call    sub_18000C5B0
 * 00000001800CCB3B: cmp     cs:dword_1801FB380, r14d
 * 00000001800CCB42: jnz     loc_1800CCC25
 * 00000001800CCB48: xor     edx, edx
 * 00000001800CCB4A: lea     rcx, [rbp+9F60h+var_9F9E]
 * 00000001800CCB4E: call    sub_1800A8E58
 * 00000001800CCB53: mov     bl, [rax]
 * 00000001800CCB55: call    sub_1800C50EC
 * 00000001800CCB5A: mov     rdx, rax
 * 00000001800CCB5D: mov     r8d, 6ABCh
 * 00000001800CCB63: lea     rcx, [rbp+9F60h+var_97C0]
 * 00000001800CCB6A: call    sub_1800A8E40
 * 00000001800CCB6F: movups  xmm0, xmmword ptr [rax]
 * 00000001800CCB72: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CCB78: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CCB7C: mov     r9d, r12d
 * 00000001800CCB7F: mov     r8d, 5
 * 00000001800CCB85: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CCB8A: lea     rcx, [rbp+9F60h+var_5BB0]
 * 00000001800CCB91: call    sub_1800A8E0C
 * 00000001800CCB96: movups  xmm6, xmmword ptr [rax]
 * 00000001800CCB99: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CCB9D: call    sub_1800C50FC
 * 00000001800CCBA2: mov     r8, rax
 * 00000001800CCBA5: mov     r9d, r13d
 * 00000001800CCBA8: mov     edx, 198h
 * 00000001800CCBAD: lea     rcx, [rbp+9F60h+var_1B90]; Src
 * 00000001800CCBB4: call    sub_180088448
 * 00000001800CCBB9: nop
 * 00000001800CCBBA: mov     r8, rax
 * 00000001800CCBBD: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CCBC4: lea     rcx, [rbp+9F60h+var_1BB0]
 * 00000001800CCBCB: call    sub_18001DD3C
 * 00000001800CCBD0: nop
 * 00000001800CCBD1: lea     r8, aPixel; "/Pixel"
 * 00000001800CCBD8: mov     rdx, rax
 * 00000001800CCBDB: lea     rcx, [rbp+9F60h+var_6E50]
 * 00000001800CCBE2: call    sub_18001DC84
 * 00000001800CCBE7: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CCBEC: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CCBF1: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CCBF6: mov     rcx, rax
 * 00000001800CCBF9: call    sub_180088528
 * 00000001800CCBFE: nop
 * 00000001800CCBFF: lea     rcx, [rbp+9F60h+var_1BB0]
 * 00000001800CCC06: call    sub_180011570
 * 00000001800CCC0B: nop
 * 00000001800CCC0C: lea     rcx, [rbp+9F60h+var_1B90]
 * 00000001800CCC13: call    sub_180011570
 * 00000001800CCC18: nop
 * 00000001800CCC19: lea     rcx, dword_1801FB380
 * 00000001800CCC20: call    sub_18000C548
 * 00000001800CCC25: mov     rax, [rsi+rdi*8]
 * 00000001800CCC29: mov     eax, [r15+rax]
 * 00000001800CCC2D: cmp     cs:dword_1801FB384, eax
 * 00000001800CCC33: jle     loc_1800CCD2F
 * 00000001800CCC39: lea     rcx, dword_1801FB384
 * 00000001800CCC40: call    sub_18000C5B0
 * 00000001800CCC45: cmp     cs:dword_1801FB384, r14d
 * 00000001800CCC4C: jnz     loc_1800CCD2F
 * 00000001800CCC52: xor     edx, edx
 * 00000001800CCC54: lea     rcx, [rbp+9F60h+var_9F9D]
 * 00000001800CCC58: call    sub_1800A8E58
 * 00000001800CCC5D: mov     bl, [rax]
 * 00000001800CCC5F: call    sub_1800C50EC
 * 00000001800CCC64: mov     rdx, rax
 * 00000001800CCC67: mov     r8d, 6ABCh
 * 00000001800CCC6D: lea     rcx, [rbp+9F60h+var_97B0]
 * 00000001800CCC74: call    sub_1800A8E40
 * 00000001800CCC79: movups  xmm0, xmmword ptr [rax]
 * 00000001800CCC7C: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CCC82: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CCC86: mov     r9d, r12d
 * 00000001800CCC89: mov     r8d, 5
 * 00000001800CCC8F: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CCC94: lea     rcx, [rbp+9F60h+var_5B90]
 * 00000001800CCC9B: call    sub_1800A8E0C
 * 00000001800CCCA0: movups  xmm6, xmmword ptr [rax]
 * 00000001800CCCA3: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CCCA7: call    sub_1800C50FC
 * 00000001800CCCAC: mov     r8, rax
 * 00000001800CCCAF: mov     r9d, r13d
 * 00000001800CCCB2: mov     edx, 19Ah
 * 00000001800CCCB7: lea     rcx, [rbp+9F60h+var_1B30]; Src
 * 00000001800CCCBE: call    sub_180088448
 * 00000001800CCCC3: nop
 * 00000001800CCCC4: mov     r8, rax
 * 00000001800CCCC7: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CCCCE: lea     rcx, [rbp+9F60h+var_1B50]
 * 00000001800CCCD5: call    sub_18001DD3C
 * 00000001800CCCDA: nop
 * 00000001800CCCDB: lea     r8, aPixel; "/Pixel"
 * 00000001800CCCE2: mov     rdx, rax
 * 00000001800CCCE5: lea     rcx, [rbp+9F60h+var_6E70]
 * 00000001800CCCEC: call    sub_18001DC84
 * 00000001800CCCF1: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CCCF6: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CCCFB: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CCD00: mov     rcx, rax
 * 00000001800CCD03: call    sub_180088528
 * 00000001800CCD08: nop
 * 00000001800CCD09: lea     rcx, [rbp+9F60h+var_1B50]
 * 00000001800CCD10: call    sub_180011570
 * 00000001800CCD15: nop
 * 00000001800CCD16: lea     rcx, [rbp+9F60h+var_1B30]
 * 00000001800CCD1D: call    sub_180011570
 * 00000001800CCD22: nop
 * 00000001800CCD23: lea     rcx, dword_1801FB384
 * 00000001800CCD2A: call    sub_18000C548
 * 00000001800CCD2F: mov     rax, [rsi+rdi*8]
 * 00000001800CCD33: mov     eax, [r15+rax]
 * 00000001800CCD37: cmp     cs:dword_1801FB388, eax
 * 00000001800CCD3D: jle     loc_1800CCE39
 * 00000001800CCD43: lea     rcx, dword_1801FB388
 * 00000001800CCD4A: call    sub_18000C5B0
 * 00000001800CCD4F: cmp     cs:dword_1801FB388, r14d
 * 00000001800CCD56: jnz     loc_1800CCE39
 * 00000001800CCD5C: xor     edx, edx
 * 00000001800CCD5E: lea     rcx, [rbp+9F60h+var_9F9C]
 * 00000001800CCD62: call    sub_1800A8E58
 * 00000001800CCD67: mov     bl, [rax]
 * 00000001800CCD69: call    sub_1800C509C
 * 00000001800CCD6E: mov     rdx, rax
 * 00000001800CCD71: mov     r8d, 672Ch
 * 00000001800CCD77: lea     rcx, [rbp+9F60h+var_97A0]
 * 00000001800CCD7E: call    sub_1800A8E40
 * 00000001800CCD83: movups  xmm0, xmmword ptr [rax]
 * 00000001800CCD86: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CCD8C: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CCD90: mov     r9d, r12d
 * 00000001800CCD93: mov     r8d, 5
 * 00000001800CCD99: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CCD9E: lea     rcx, [rbp+9F60h+var_5B70]
 * 00000001800CCDA5: call    sub_1800A8E0C
 * 00000001800CCDAA: movups  xmm6, xmmword ptr [rax]
 * 00000001800CCDAD: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CCDB1: call    sub_1800C50FC
 * 00000001800CCDB6: mov     r8, rax
 * 00000001800CCDB9: mov     r9d, r13d
 * 00000001800CCDBC: mov     edx, 1A0h
 * 00000001800CCDC1: lea     rcx, [rbp+9F60h+var_1AB0]; Src
 * 00000001800CCDC8: call    sub_180088448
 * 00000001800CCDCD: nop
 * 00000001800CCDCE: mov     r8, rax
 * 00000001800CCDD1: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CCDD8: lea     rcx, [rbp+9F60h+var_1AF0]
 * 00000001800CCDDF: call    sub_18001DD3C
 * 00000001800CCDE4: nop
 * 00000001800CCDE5: lea     r8, aPixel; "/Pixel"
 * 00000001800CCDEC: mov     rdx, rax
 * 00000001800CCDEF: lea     rcx, [rbp+9F60h+var_6EB0]
 * 00000001800CCDF6: call    sub_18001DC84
 * 00000001800CCDFB: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CCE00: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CCE05: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CCE0A: mov     rcx, rax
 * 00000001800CCE0D: call    sub_180088528
 * 00000001800CCE12: nop
 * 00000001800CCE13: lea     rcx, [rbp+9F60h+var_1AF0]
 * 00000001800CCE1A: call    sub_180011570
 * 00000001800CCE1F: nop
 * 00000001800CCE20: lea     rcx, [rbp+9F60h+var_1AB0]
 * 00000001800CCE27: call    sub_180011570
 * 00000001800CCE2C: nop
 * 00000001800CCE2D: lea     rcx, dword_1801FB388
 * 00000001800CCE34: call    sub_18000C548
 * 00000001800CCE39: mov     rax, [rsi+rdi*8]
 * 00000001800CCE3D: mov     eax, [r15+rax]
 * 00000001800CCE41: cmp     cs:dword_1801FB38C, eax
 * 00000001800CCE47: jle     loc_1800CCF43
 * 00000001800CCE4D: lea     rcx, dword_1801FB38C
 * 00000001800CCE54: call    sub_18000C5B0
 * 00000001800CCE59: cmp     cs:dword_1801FB38C, r14d
 * 00000001800CCE60: jnz     loc_1800CCF43
 * 00000001800CCE66: xor     edx, edx
 * 00000001800CCE68: lea     rcx, [rbp+9F60h+var_9F9B]
 * 00000001800CCE6C: call    sub_1800A8E58
 * 00000001800CCE71: mov     bl, [rax]
 * 00000001800CCE73: call    sub_1800C509C
 * 00000001800CCE78: mov     rdx, rax
 * 00000001800CCE7B: mov     r8d, 672Ch
 * 00000001800CCE81: lea     rcx, [rbp+9F60h+var_9790]
 * 00000001800CCE88: call    sub_1800A8E40
 * 00000001800CCE8D: movups  xmm0, xmmword ptr [rax]
 * 00000001800CCE90: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CCE96: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CCE9A: mov     r9d, r12d
 * 00000001800CCE9D: mov     r8d, 5
 * 00000001800CCEA3: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CCEA8: lea     rcx, [rbp+9F60h+var_5B50]
 * 00000001800CCEAF: call    sub_1800A8E0C
 * 00000001800CCEB4: movups  xmm6, xmmword ptr [rax]
 * 00000001800CCEB7: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CCEBB: call    sub_1800C50FC
 * 00000001800CCEC0: mov     r8, rax
 * 00000001800CCEC3: mov     r9d, r13d
 * 00000001800CCEC6: mov     edx, 1A2h
 * 00000001800CCECB: lea     rcx, [rbp+9F60h+var_1A50]; Src
 * 00000001800CCED2: call    sub_180088448
 * 00000001800CCED7: nop
 * 00000001800CCED8: mov     r8, rax
 * 00000001800CCEDB: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CCEE2: lea     rcx, [rbp+9F60h+var_1A70]
 * 00000001800CCEE9: call    sub_18001DD3C
 * 00000001800CCEEE: nop
 * 00000001800CCEEF: lea     r8, aPixel; "/Pixel"
 * 00000001800CCEF6: mov     rdx, rax
 * 00000001800CCEF9: lea     rcx, [rbp+9F60h+var_6ED0]
 * 00000001800CCF00: call    sub_18001DC84
 * 00000001800CCF05: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CCF0A: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CCF0F: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CCF14: mov     rcx, rax
 * 00000001800CCF17: call    sub_180088528
 * 00000001800CCF1C: nop
 * 00000001800CCF1D: lea     rcx, [rbp+9F60h+var_1A70]
 * 00000001800CCF24: call    sub_180011570
 * 00000001800CCF29: nop
 * 00000001800CCF2A: lea     rcx, [rbp+9F60h+var_1A50]
 * 00000001800CCF31: call    sub_180011570
 * 00000001800CCF36: nop
 * 00000001800CCF37: lea     rcx, dword_1801FB38C
 * 00000001800CCF3E: call    sub_18000C548
 * 00000001800CCF43: mov     rax, [rsi+rdi*8]
 * 00000001800CCF47: mov     eax, [r15+rax]
 * 00000001800CCF4B: cmp     cs:dword_1801FB390, eax
 * 00000001800CCF51: jle     loc_1800CD04D
 * 00000001800CCF57: lea     rcx, dword_1801FB390
 * 00000001800CCF5E: call    sub_18000C5B0
 * 00000001800CCF63: cmp     cs:dword_1801FB390, r14d
 * 00000001800CCF6A: jnz     loc_1800CD04D
 * 00000001800CCF70: xor     edx, edx
 * 00000001800CCF72: lea     rcx, [rbp+9F60h+var_9F9A]
 * 00000001800CCF76: call    sub_1800A8E58
 * 00000001800CCF7B: mov     bl, [rax]
 * 00000001800CCF7D: call    sub_1800C50BC
 * 00000001800CCF82: mov     rdx, rax
 * 00000001800CCF85: mov     r8d, 68BCh
 * 00000001800CCF8B: lea     rcx, [rbp+9F60h+var_9780]
 * 00000001800CCF92: call    sub_1800A8E40
 * 00000001800CCF97: movups  xmm0, xmmword ptr [rax]
 * 00000001800CCF9A: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CCFA0: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CCFA4: mov     r9d, r12d
 * 00000001800CCFA7: mov     r8d, 5
 * 00000001800CCFAD: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CCFB2: lea     rcx, [rbp+9F60h+var_5B30]
 * 00000001800CCFB9: call    sub_1800A8E0C
 * 00000001800CCFBE: movups  xmm6, xmmword ptr [rax]
 * 00000001800CCFC1: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CCFC5: call    sub_1800C50FC
 * 00000001800CCFCA: mov     r8, rax
 * 00000001800CCFCD: mov     r9d, r13d
 * 00000001800CCFD0: mov     edx, 1A8h
 * 00000001800CCFD5: lea     rcx, [rbp+9F60h+var_19F0]; Src
 * 00000001800CCFDC: call    sub_180088448
 * 00000001800CCFE1: nop
 * 00000001800CCFE2: mov     r8, rax
 * 00000001800CCFE5: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CCFEC: lea     rcx, [rbp+9F60h+var_1A10]
 * 00000001800CCFF3: call    sub_18001DD3C
 * 00000001800CCFF8: nop
 * 00000001800CCFF9: lea     r8, aPixel; "/Pixel"
 * 00000001800CD000: mov     rdx, rax
 * 00000001800CD003: lea     rcx, [rbp+9F60h+var_6F10]
 * 00000001800CD00A: call    sub_18001DC84
 * 00000001800CD00F: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CD014: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CD019: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CD01E: mov     rcx, rax
 * 00000001800CD021: call    sub_180088528
 * 00000001800CD026: nop
 * 00000001800CD027: lea     rcx, [rbp+9F60h+var_1A10]
 * 00000001800CD02E: call    sub_180011570
 * 00000001800CD033: nop
 * 00000001800CD034: lea     rcx, [rbp+9F60h+var_19F0]
 * 00000001800CD03B: call    sub_180011570
 * 00000001800CD040: nop
 * 00000001800CD041: lea     rcx, dword_1801FB390
 * 00000001800CD048: call    sub_18000C548
 * 00000001800CD04D: mov     rax, [rsi+rdi*8]
 * 00000001800CD051: mov     eax, [r15+rax]
 * 00000001800CD055: cmp     cs:dword_1801FB394, eax
 * 00000001800CD05B: jle     loc_1800CD157
 * 00000001800CD061: lea     rcx, dword_1801FB394
 * 00000001800CD068: call    sub_18000C5B0
 * 00000001800CD06D: cmp     cs:dword_1801FB394, r14d
 * 00000001800CD074: jnz     loc_1800CD157
 * 00000001800CD07A: xor     edx, edx
 * 00000001800CD07C: lea     rcx, [rbp+9F60h+var_9F99]
 * 00000001800CD080: call    sub_1800A8E58
 * 00000001800CD085: mov     bl, [rax]
 * 00000001800CD087: call    sub_1800C50BC
 * 00000001800CD08C: mov     rdx, rax
 * 00000001800CD08F: mov     r8d, 68BCh
 * 00000001800CD095: lea     rcx, [rbp+9F60h+var_9770]
 * 00000001800CD09C: call    sub_1800A8E40
 * 00000001800CD0A1: movups  xmm0, xmmword ptr [rax]
 * 00000001800CD0A4: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CD0AA: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CD0AE: mov     r9d, r12d
 * 00000001800CD0B1: mov     r8d, 5
 * 00000001800CD0B7: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CD0BC: lea     rcx, [rbp+9F60h+var_5B10]
 * 00000001800CD0C3: call    sub_1800A8E0C
 * 00000001800CD0C8: movups  xmm6, xmmword ptr [rax]
 * 00000001800CD0CB: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CD0CF: call    sub_1800C50FC
 * 00000001800CD0D4: mov     r8, rax
 * 00000001800CD0D7: mov     r9d, r13d
 * 00000001800CD0DA: mov     edx, 1AAh
 * 00000001800CD0DF: lea     rcx, [rbp+9F60h+var_1990]; Src
 * 00000001800CD0E6: call    sub_180088448
 * 00000001800CD0EB: nop
 * 00000001800CD0EC: mov     r8, rax
 * 00000001800CD0EF: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CD0F6: lea     rcx, [rbp+9F60h+var_19B0]
 * 00000001800CD0FD: call    sub_18001DD3C
 * 00000001800CD102: nop
 * 00000001800CD103: lea     r8, aPixel; "/Pixel"
 * 00000001800CD10A: mov     rdx, rax
 * 00000001800CD10D: lea     rcx, [rbp+9F60h+var_6F30]
 * 00000001800CD114: call    sub_18001DC84
 * 00000001800CD119: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CD11E: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CD123: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CD128: mov     rcx, rax
 * 00000001800CD12B: call    sub_180088528
 * 00000001800CD130: nop
 * 00000001800CD131: lea     rcx, [rbp+9F60h+var_19B0]
 * 00000001800CD138: call    sub_180011570
 * 00000001800CD13D: nop
 * 00000001800CD13E: lea     rcx, [rbp+9F60h+var_1990]
 * 00000001800CD145: call    sub_180011570
 * 00000001800CD14A: nop
 * 00000001800CD14B: lea     rcx, dword_1801FB394
 * 00000001800CD152: call    sub_18000C548
 * 00000001800CD157: mov     rax, [rsi+rdi*8]
 * 00000001800CD15B: mov     eax, [r15+rax]
 * 00000001800CD15F: cmp     cs:dword_1801FB398, eax
 * 00000001800CD165: jle     loc_1800CD261
 * 00000001800CD16B: lea     rcx, dword_1801FB398
 * 00000001800CD172: call    sub_18000C5B0
 * 00000001800CD177: cmp     cs:dword_1801FB398, r14d
 * 00000001800CD17E: jnz     loc_1800CD261
 * 00000001800CD184: xor     edx, edx
 * 00000001800CD186: lea     rcx, [rbp+9F60h+var_9F98]
 * 00000001800CD18A: call    sub_1800A8E58
 * 00000001800CD18F: mov     bl, [rax]
 * 00000001800CD191: call    sub_1800C50CC
 * 00000001800CD196: mov     rdx, rax
 * 00000001800CD199: mov     r8d, 6908h
 * 00000001800CD19F: lea     rcx, [rbp+9F60h+var_9760]
 * 00000001800CD1A6: call    sub_1800A8E40
 * 00000001800CD1AB: movups  xmm0, xmmword ptr [rax]
 * 00000001800CD1AE: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CD1B4: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CD1B8: mov     r9d, r12d
 * 00000001800CD1BB: mov     r8d, 5
 * 00000001800CD1C1: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CD1C6: lea     rcx, [rbp+9F60h+var_5AF0]
 * 00000001800CD1CD: call    sub_1800A8E0C
 * 00000001800CD1D2: movups  xmm6, xmmword ptr [rax]
 * 00000001800CD1D5: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CD1D9: call    sub_1800C50FC
 * 00000001800CD1DE: mov     r8, rax
 * 00000001800CD1E1: mov     r9d, r13d
 * 00000001800CD1E4: mov     edx, 1B0h
 * 00000001800CD1E9: lea     rcx, [rbp+9F60h+var_1930]; Src
 * 00000001800CD1F0: call    sub_180088448
 * 00000001800CD1F5: nop
 * 00000001800CD1F6: mov     r8, rax
 * 00000001800CD1F9: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CD200: lea     rcx, [rbp+9F60h+var_1950]
 * 00000001800CD207: call    sub_18001DD3C
 * 00000001800CD20C: nop
 * 00000001800CD20D: lea     r8, aPixel; "/Pixel"
 * 00000001800CD214: mov     rdx, rax
 * 00000001800CD217: lea     rcx, [rbp+9F60h+var_6F70]
 * 00000001800CD21E: call    sub_18001DC84
 * 00000001800CD223: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CD228: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CD22D: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CD232: mov     rcx, rax
 * 00000001800CD235: call    sub_180088528
 * 00000001800CD23A: nop
 * 00000001800CD23B: lea     rcx, [rbp+9F60h+var_1950]
 * 00000001800CD242: call    sub_180011570
 * 00000001800CD247: nop
 * 00000001800CD248: lea     rcx, [rbp+9F60h+var_1930]
 * 00000001800CD24F: call    sub_180011570
 * 00000001800CD254: nop
 * 00000001800CD255: lea     rcx, dword_1801FB398
 * 00000001800CD25C: call    sub_18000C548
 * 00000001800CD261: mov     rax, [rsi+rdi*8]
 * 00000001800CD265: mov     eax, [r15+rax]
 * 00000001800CD269: cmp     cs:dword_1801FB39C, eax
 * 00000001800CD26F: jle     loc_1800CD36B
 * 00000001800CD275: lea     rcx, dword_1801FB39C
 * 00000001800CD27C: call    sub_18000C5B0
 * 00000001800CD281: cmp     cs:dword_1801FB39C, r14d
 * 00000001800CD288: jnz     loc_1800CD36B
 * 00000001800CD28E: xor     edx, edx
 * 00000001800CD290: lea     rcx, [rbp+9F60h+var_9F97]
 * 00000001800CD294: call    sub_1800A8E58
 * 00000001800CD299: mov     bl, [rax]
 * 00000001800CD29B: call    sub_1800C50CC
 * 00000001800CD2A0: mov     rdx, rax
 * 00000001800CD2A3: mov     r8d, 6908h
 * 00000001800CD2A9: lea     rcx, [rbp+9F60h+var_9750]
 * 00000001800CD2B0: call    sub_1800A8E40
 * 00000001800CD2B5: movups  xmm0, xmmword ptr [rax]
 * 00000001800CD2B8: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CD2BE: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CD2C2: mov     r9d, r12d
 * 00000001800CD2C5: mov     r8d, 5
 * 00000001800CD2CB: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CD2D0: lea     rcx, [rbp+9F60h+var_5AD0]
 * 00000001800CD2D7: call    sub_1800A8E0C
 * 00000001800CD2DC: movups  xmm6, xmmword ptr [rax]
 * 00000001800CD2DF: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CD2E3: call    sub_1800C50FC
 * 00000001800CD2E8: mov     r8, rax
 * 00000001800CD2EB: mov     r9d, r13d
 * 00000001800CD2EE: mov     edx, 1B2h
 * 00000001800CD2F3: lea     rcx, [rbp+9F60h+var_18D0]; Src
 * 00000001800CD2FA: call    sub_180088448
 * 00000001800CD2FF: nop
 * 00000001800CD300: mov     r8, rax
 * 00000001800CD303: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CD30A: lea     rcx, [rbp+9F60h+var_18F0]
 * 00000001800CD311: call    sub_18001DD3C
 * 00000001800CD316: nop
 * 00000001800CD317: lea     r8, aPixel; "/Pixel"
 * 00000001800CD31E: mov     rdx, rax
 * 00000001800CD321: lea     rcx, [rbp+9F60h+var_6F90]
 * 00000001800CD328: call    sub_18001DC84
 * 00000001800CD32D: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CD332: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CD337: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CD33C: mov     rcx, rax
 * 00000001800CD33F: call    sub_180088528
 * 00000001800CD344: nop
 * 00000001800CD345: lea     rcx, [rbp+9F60h+var_18F0]
 * 00000001800CD34C: call    sub_180011570
 * 00000001800CD351: nop
 * 00000001800CD352: lea     rcx, [rbp+9F60h+var_18D0]
 * 00000001800CD359: call    sub_180011570
 * 00000001800CD35E: nop
 * 00000001800CD35F: lea     rcx, dword_1801FB39C
 * 00000001800CD366: call    sub_18000C548
 * 00000001800CD36B: mov     rax, [rsi+rdi*8]
 * 00000001800CD36F: mov     eax, [r15+rax]
 * 00000001800CD373: cmp     cs:dword_1801FB3A0, eax
 * 00000001800CD379: jle     loc_1800CD475
 * 00000001800CD37F: lea     rcx, dword_1801FB3A0
 * 00000001800CD386: call    sub_18000C5B0
 * 00000001800CD38B: cmp     cs:dword_1801FB3A0, r14d
 * 00000001800CD392: jnz     loc_1800CD475
 * 00000001800CD398: xor     edx, edx
 * 00000001800CD39A: lea     rcx, [rbp+9F60h+var_9F96]
 * 00000001800CD39E: call    sub_1800A8E58
 * 00000001800CD3A3: mov     bl, [rax]
 * 00000001800CD3A5: call    sub_1800C50EC
 * 00000001800CD3AA: mov     rdx, rax
 * 00000001800CD3AD: mov     r8d, 6ABCh
 * 00000001800CD3B3: lea     rcx, [rbp+9F60h+var_9740]
 * 00000001800CD3BA: call    sub_1800A8E40
 * 00000001800CD3BF: movups  xmm0, xmmword ptr [rax]
 * 00000001800CD3C2: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CD3C8: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CD3CC: mov     r9d, r12d
 * 00000001800CD3CF: mov     r8d, 5
 * 00000001800CD3D5: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CD3DA: lea     rcx, [rbp+9F60h+var_5AB0]
 * 00000001800CD3E1: call    sub_1800A8E0C
 * 00000001800CD3E6: movups  xmm6, xmmword ptr [rax]
 * 00000001800CD3E9: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CD3ED: call    sub_1800C50FC
 * 00000001800CD3F2: mov     r8, rax
 * 00000001800CD3F5: mov     r9d, r13d
 * 00000001800CD3F8: mov     edx, 1B8h
 * 00000001800CD3FD: lea     rcx, [rbp+9F60h+var_1870]; Src
 * 00000001800CD404: call    sub_180088448
 * 00000001800CD409: nop
 * 00000001800CD40A: mov     r8, rax
 * 00000001800CD40D: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CD414: lea     rcx, [rbp+9F60h+var_1890]
 * 00000001800CD41B: call    sub_18001DD3C
 * 00000001800CD420: nop
 * 00000001800CD421: lea     r8, aPixel; "/Pixel"
 * 00000001800CD428: mov     rdx, rax
 * 00000001800CD42B: lea     rcx, [rbp+9F60h+var_6FD0]
 * 00000001800CD432: call    sub_18001DC84
 * 00000001800CD437: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CD43C: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CD441: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CD446: mov     rcx, rax
 * 00000001800CD449: call    sub_180088528
 * 00000001800CD44E: nop
 * 00000001800CD44F: lea     rcx, [rbp+9F60h+var_1890]
 * 00000001800CD456: call    sub_180011570
 * 00000001800CD45B: nop
 * 00000001800CD45C: lea     rcx, [rbp+9F60h+var_1870]
 * 00000001800CD463: call    sub_180011570
 * 00000001800CD468: nop
 * 00000001800CD469: lea     rcx, dword_1801FB3A0
 * 00000001800CD470: call    sub_18000C548
 * 00000001800CD475: mov     rax, [rsi+rdi*8]
 * 00000001800CD479: mov     eax, [r15+rax]
 * 00000001800CD47D: cmp     cs:dword_1801FB3A4, eax
 * 00000001800CD483: jle     loc_1800CD57F
 * 00000001800CD489: lea     rcx, dword_1801FB3A4
 * 00000001800CD490: call    sub_18000C5B0
 * 00000001800CD495: cmp     cs:dword_1801FB3A4, r14d
 * 00000001800CD49C: jnz     loc_1800CD57F
 * 00000001800CD4A2: xor     edx, edx
 * 00000001800CD4A4: lea     rcx, [rbp+9F60h+var_9F95]
 * 00000001800CD4A8: call    sub_1800A8E58
 * 00000001800CD4AD: mov     bl, [rax]
 * 00000001800CD4AF: call    sub_1800C50EC
 * 00000001800CD4B4: mov     rdx, rax
 * 00000001800CD4B7: mov     r8d, 6ABCh
 * 00000001800CD4BD: lea     rcx, [rbp+9F60h+var_9730]
 * 00000001800CD4C4: call    sub_1800A8E40
 * 00000001800CD4C9: movups  xmm0, xmmword ptr [rax]
 * 00000001800CD4CC: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CD4D2: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CD4D6: mov     r9d, r12d
 * 00000001800CD4D9: mov     r8d, 5
 * 00000001800CD4DF: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CD4E4: lea     rcx, [rbp+9F60h+var_5A90]
 * 00000001800CD4EB: call    sub_1800A8E0C
 * 00000001800CD4F0: movups  xmm6, xmmword ptr [rax]
 * 00000001800CD4F3: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CD4F7: call    sub_1800C50FC
 * 00000001800CD4FC: mov     r8, rax
 * 00000001800CD4FF: mov     r9d, r13d
 * 00000001800CD502: mov     edx, 1BAh
 * 00000001800CD507: lea     rcx, [rbp+9F60h+var_1810]; Src
 * 00000001800CD50E: call    sub_180088448
 * 00000001800CD513: nop
 * 00000001800CD514: mov     r8, rax
 * 00000001800CD517: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CD51E: lea     rcx, [rbp+9F60h+var_1830]
 * 00000001800CD525: call    sub_18001DD3C
 * 00000001800CD52A: nop
 * 00000001800CD52B: lea     r8, aPixel; "/Pixel"
 * 00000001800CD532: mov     rdx, rax
 * 00000001800CD535: lea     rcx, [rbp+9F60h+var_6FF0]
 * 00000001800CD53C: call    sub_18001DC84
 * 00000001800CD541: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CD546: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CD54B: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CD550: mov     rcx, rax
 * 00000001800CD553: call    sub_180088528
 * 00000001800CD558: nop
 * 00000001800CD559: lea     rcx, [rbp+9F60h+var_1830]
 * 00000001800CD560: call    sub_180011570
 * 00000001800CD565: nop
 * 00000001800CD566: lea     rcx, [rbp+9F60h+var_1810]
 * 00000001800CD56D: call    sub_180011570
 * 00000001800CD572: nop
 * 00000001800CD573: lea     rcx, dword_1801FB3A4
 * 00000001800CD57A: call    sub_18000C548
 * 00000001800CD57F: mov     rax, [rsi+rdi*8]
 * 00000001800CD583: mov     eax, [r15+rax]
 * 00000001800CD587: cmp     cs:dword_1801FB3A8, eax
 * 00000001800CD58D: jle     loc_1800CD689
 * 00000001800CD593: lea     rcx, dword_1801FB3A8
 * 00000001800CD59A: call    sub_18000C5B0
 * 00000001800CD59F: cmp     cs:dword_1801FB3A8, r14d
 * 00000001800CD5A6: jnz     loc_1800CD689
 * 00000001800CD5AC: xor     edx, edx
 * 00000001800CD5AE: lea     rcx, [rbp+9F60h+var_9F94]
 * 00000001800CD5B2: call    sub_1800A8E58
 * 00000001800CD5B7: mov     bl, [rax]
 * 00000001800CD5B9: call    sub_1800C509C
 * 00000001800CD5BE: mov     rdx, rax
 * 00000001800CD5C1: mov     r8d, 672Ch
 * 00000001800CD5C7: lea     rcx, [rbp+9F60h+var_9720]
 * 00000001800CD5CE: call    sub_1800A8E40
 * 00000001800CD5D3: movups  xmm0, xmmword ptr [rax]
 * 00000001800CD5D6: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CD5DC: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CD5E0: mov     r9d, r12d
 * 00000001800CD5E3: mov     r8d, 5
 * 00000001800CD5E9: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CD5EE: lea     rcx, [rbp+9F60h+var_5A70]
 * 00000001800CD5F5: call    sub_1800A8E0C
 * 00000001800CD5FA: movups  xmm6, xmmword ptr [rax]
 * 00000001800CD5FD: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CD601: call    sub_1800C50FC
 * 00000001800CD606: mov     r8, rax
 * 00000001800CD609: mov     r9d, r13d
 * 00000001800CD60C: mov     edx, 1C0h
 * 00000001800CD611: lea     rcx, [rbp+9F60h+var_17B0]; Src
 * 00000001800CD618: call    sub_180088448
 * 00000001800CD61D: nop
 * 00000001800CD61E: mov     r8, rax
 * 00000001800CD621: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CD628: lea     rcx, [rbp+9F60h+var_17D0]
 * 00000001800CD62F: call    sub_18001DD3C
 * 00000001800CD634: nop
 * 00000001800CD635: lea     r8, aPixel; "/Pixel"
 * 00000001800CD63C: mov     rdx, rax
 * 00000001800CD63F: lea     rcx, [rbp+9F60h+var_7030]
 * 00000001800CD646: call    sub_18001DC84
 * 00000001800CD64B: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CD650: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CD655: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CD65A: mov     rcx, rax
 * 00000001800CD65D: call    sub_180088528
 * 00000001800CD662: nop
 * 00000001800CD663: lea     rcx, [rbp+9F60h+var_17D0]
 * 00000001800CD66A: call    sub_180011570
 * 00000001800CD66F: nop
 * 00000001800CD670: lea     rcx, [rbp+9F60h+var_17B0]
 * 00000001800CD677: call    sub_180011570
 * 00000001800CD67C: nop
 * 00000001800CD67D: lea     rcx, dword_1801FB3A8
 * 00000001800CD684: call    sub_18000C548
 * 00000001800CD689: mov     rax, [rsi+rdi*8]
 * 00000001800CD68D: mov     eax, [r15+rax]
 * 00000001800CD691: cmp     cs:dword_1801FB3AC, eax
 * 00000001800CD697: jle     loc_1800CD793
 * 00000001800CD69D: lea     rcx, dword_1801FB3AC
 * 00000001800CD6A4: call    sub_18000C5B0
 * 00000001800CD6A9: cmp     cs:dword_1801FB3AC, r14d
 * 00000001800CD6B0: jnz     loc_1800CD793
 * 00000001800CD6B6: xor     edx, edx
 * 00000001800CD6B8: lea     rcx, [rbp+9F60h+var_9F93]
 * 00000001800CD6BC: call    sub_1800A8E58
 * 00000001800CD6C1: mov     bl, [rax]
 * 00000001800CD6C3: call    sub_1800C509C
 * 00000001800CD6C8: mov     rdx, rax
 * 00000001800CD6CB: mov     r8d, 672Ch
 * 00000001800CD6D1: lea     rcx, [rbp+9F60h+var_9710]
 * 00000001800CD6D8: call    sub_1800A8E40
 * 00000001800CD6DD: movups  xmm0, xmmword ptr [rax]
 * 00000001800CD6E0: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CD6E6: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CD6EA: mov     r9d, r12d
 * 00000001800CD6ED: mov     r8d, 5
 * 00000001800CD6F3: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CD6F8: lea     rcx, [rbp+9F60h+var_5A50]
 * 00000001800CD6FF: call    sub_1800A8E0C
 * 00000001800CD704: movups  xmm6, xmmword ptr [rax]
 * 00000001800CD707: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CD70B: call    sub_1800C50FC
 * 00000001800CD710: mov     r8, rax
 * 00000001800CD713: mov     r9d, r13d
 * 00000001800CD716: mov     edx, 1C2h
 * 00000001800CD71B: lea     rcx, [rbp+9F60h+var_1750]; Src
 * 00000001800CD722: call    sub_180088448
 * 00000001800CD727: nop
 * 00000001800CD728: mov     r8, rax
 * 00000001800CD72B: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CD732: lea     rcx, [rbp+9F60h+var_1770]
 * 00000001800CD739: call    sub_18001DD3C
 * 00000001800CD73E: nop
 * 00000001800CD73F: lea     r8, aPixel; "/Pixel"
 * 00000001800CD746: mov     rdx, rax
 * 00000001800CD749: lea     rcx, [rbp+9F60h+var_7050]
 * 00000001800CD750: call    sub_18001DC84
 * 00000001800CD755: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CD75A: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CD75F: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CD764: mov     rcx, rax
 * 00000001800CD767: call    sub_180088528
 * 00000001800CD76C: nop
 * 00000001800CD76D: lea     rcx, [rbp+9F60h+var_1770]
 * 00000001800CD774: call    sub_180011570
 * 00000001800CD779: nop
 * 00000001800CD77A: lea     rcx, [rbp+9F60h+var_1750]
 * 00000001800CD781: call    sub_180011570
 * 00000001800CD786: nop
 * 00000001800CD787: lea     rcx, dword_1801FB3AC
 * 00000001800CD78E: call    sub_18000C548
 * 00000001800CD793: mov     rax, [rsi+rdi*8]
 * 00000001800CD797: mov     eax, [r15+rax]
 * 00000001800CD79B: cmp     cs:dword_1801FB3B0, eax
 * 00000001800CD7A1: jle     loc_1800CD89D
 * 00000001800CD7A7: lea     rcx, dword_1801FB3B0
 * 00000001800CD7AE: call    sub_18000C5B0
 * 00000001800CD7B3: cmp     cs:dword_1801FB3B0, r14d
 * 00000001800CD7BA: jnz     loc_1800CD89D
 * 00000001800CD7C0: xor     edx, edx
 * 00000001800CD7C2: lea     rcx, [rbp+9F60h+var_9F92]
 * 00000001800CD7C6: call    sub_1800A8E58
 * 00000001800CD7CB: mov     bl, [rax]
 * 00000001800CD7CD: call    sub_1800C50BC
 * 00000001800CD7D2: mov     rdx, rax
 * 00000001800CD7D5: mov     r8d, 68BCh
 * 00000001800CD7DB: lea     rcx, [rbp+9F60h+var_9700]
 * 00000001800CD7E2: call    sub_1800A8E40
 * 00000001800CD7E7: movups  xmm0, xmmword ptr [rax]
 * 00000001800CD7EA: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CD7F0: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CD7F4: mov     r9d, r12d
 * 00000001800CD7F7: mov     r8d, 5
 * 00000001800CD7FD: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CD802: lea     rcx, [rbp+9F60h+var_5A30]
 * 00000001800CD809: call    sub_1800A8E0C
 * 00000001800CD80E: movups  xmm6, xmmword ptr [rax]
 * 00000001800CD811: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CD815: call    sub_1800C50FC
 * 00000001800CD81A: mov     r8, rax
 * 00000001800CD81D: mov     r9d, r13d
 * 00000001800CD820: mov     edx, 1C8h
 * 00000001800CD825: lea     rcx, [rbp+9F60h+var_16F0]; Src
 * 00000001800CD82C: call    sub_180088448
 * 00000001800CD831: nop
 * 00000001800CD832: mov     r8, rax
 * 00000001800CD835: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CD83C: lea     rcx, [rbp+9F60h+var_1710]
 * 00000001800CD843: call    sub_18001DD3C
 * 00000001800CD848: nop
 * 00000001800CD849: lea     r8, aPixel; "/Pixel"
 * 00000001800CD850: mov     rdx, rax
 * 00000001800CD853: lea     rcx, [rbp+9F60h+var_7090]
 * 00000001800CD85A: call    sub_18001DC84
 * 00000001800CD85F: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CD864: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CD869: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CD86E: mov     rcx, rax
 * 00000001800CD871: call    sub_180088528
 * 00000001800CD876: nop
 * 00000001800CD877: lea     rcx, [rbp+9F60h+var_1710]
 * 00000001800CD87E: call    sub_180011570
 * 00000001800CD883: nop
 * 00000001800CD884: lea     rcx, [rbp+9F60h+var_16F0]
 * 00000001800CD88B: call    sub_180011570
 * 00000001800CD890: nop
 * 00000001800CD891: lea     rcx, dword_1801FB3B0
 * 00000001800CD898: call    sub_18000C548
 * 00000001800CD89D: mov     rax, [rsi+rdi*8]
 * 00000001800CD8A1: mov     eax, [r15+rax]
 * 00000001800CD8A5: cmp     cs:dword_1801FB3B4, eax
 * 00000001800CD8AB: jle     loc_1800CD9A7
 * 00000001800CD8B1: lea     rcx, dword_1801FB3B4
 * 00000001800CD8B8: call    sub_18000C5B0
 * 00000001800CD8BD: cmp     cs:dword_1801FB3B4, r14d
 * 00000001800CD8C4: jnz     loc_1800CD9A7
 * 00000001800CD8CA: xor     edx, edx
 * 00000001800CD8CC: lea     rcx, [rbp+9F60h+var_9F91]
 * 00000001800CD8D0: call    sub_1800A8E58
 * 00000001800CD8D5: mov     bl, [rax]
 * 00000001800CD8D7: call    sub_1800C50BC
 * 00000001800CD8DC: mov     rdx, rax
 * 00000001800CD8DF: mov     r8d, 68BCh
 * 00000001800CD8E5: lea     rcx, [rbp+9F60h+var_96F0]
 * 00000001800CD8EC: call    sub_1800A8E40
 * 00000001800CD8F1: movups  xmm0, xmmword ptr [rax]
 * 00000001800CD8F4: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CD8FA: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CD8FE: mov     r9d, r12d
 * 00000001800CD901: mov     r8d, 5
 * 00000001800CD907: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CD90C: lea     rcx, [rbp+9F60h+var_5A10]
 * 00000001800CD913: call    sub_1800A8E0C
 * 00000001800CD918: movups  xmm6, xmmword ptr [rax]
 * 00000001800CD91B: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CD91F: call    sub_1800C50FC
 * 00000001800CD924: mov     r8, rax
 * 00000001800CD927: mov     r9d, r13d
 * 00000001800CD92A: mov     edx, 1CAh
 * 00000001800CD92F: lea     rcx, [rbp+9F60h+var_1690]; Src
 * 00000001800CD936: call    sub_180088448
 * 00000001800CD93B: nop
 * 00000001800CD93C: mov     r8, rax
 * 00000001800CD93F: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CD946: lea     rcx, [rbp+9F60h+var_16B0]
 * 00000001800CD94D: call    sub_18001DD3C
 * 00000001800CD952: nop
 * 00000001800CD953: lea     r8, aPixel; "/Pixel"
 * 00000001800CD95A: mov     rdx, rax
 * 00000001800CD95D: lea     rcx, [rbp+9F60h+var_70B0]
 * 00000001800CD964: call    sub_18001DC84
 * 00000001800CD969: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CD96E: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CD973: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CD978: mov     rcx, rax
 * 00000001800CD97B: call    sub_180088528
 * 00000001800CD980: nop
 * 00000001800CD981: lea     rcx, [rbp+9F60h+var_16B0]
 * 00000001800CD988: call    sub_180011570
 * 00000001800CD98D: nop
 * 00000001800CD98E: lea     rcx, [rbp+9F60h+var_1690]
 * 00000001800CD995: call    sub_180011570
 * 00000001800CD99A: nop
 * 00000001800CD99B: lea     rcx, dword_1801FB3B4
 * 00000001800CD9A2: call    sub_18000C548
 * 00000001800CD9A7: mov     rax, [rsi+rdi*8]
 * 00000001800CD9AB: mov     eax, [r15+rax]
 * 00000001800CD9AF: cmp     cs:dword_1801FB3B8, eax
 * 00000001800CD9B5: jle     loc_1800CDAB1
 * 00000001800CD9BB: lea     rcx, dword_1801FB3B8
 * 00000001800CD9C2: call    sub_18000C5B0
 * 00000001800CD9C7: cmp     cs:dword_1801FB3B8, r14d
 * 00000001800CD9CE: jnz     loc_1800CDAB1
 * 00000001800CD9D4: xor     edx, edx
 * 00000001800CD9D6: lea     rcx, [rbp+9F60h+var_9F90]
 * 00000001800CD9DA: call    sub_1800A8E58
 * 00000001800CD9DF: mov     bl, [rax]
 * 00000001800CD9E1: call    sub_1800C50CC
 * 00000001800CD9E6: mov     rdx, rax
 * 00000001800CD9E9: mov     r8d, 6908h
 * 00000001800CD9EF: lea     rcx, [rbp+9F60h+var_96E0]
 * 00000001800CD9F6: call    sub_1800A8E40
 * 00000001800CD9FB: movups  xmm0, xmmword ptr [rax]
 * 00000001800CD9FE: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CDA04: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CDA08: mov     r9d, r12d
 * 00000001800CDA0B: mov     r8d, 5
 * 00000001800CDA11: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CDA16: lea     rcx, [rbp+9F60h+var_59F0]
 * 00000001800CDA1D: call    sub_1800A8E0C
 * 00000001800CDA22: movups  xmm6, xmmword ptr [rax]
 * 00000001800CDA25: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CDA29: call    sub_1800C50FC
 * 00000001800CDA2E: mov     r8, rax
 * 00000001800CDA31: mov     r9d, r13d
 * 00000001800CDA34: mov     edx, 1D0h
 * 00000001800CDA39: lea     rcx, [rbp+9F60h+var_1630]; Src
 * 00000001800CDA40: call    sub_180088448
 * 00000001800CDA45: nop
 * 00000001800CDA46: mov     r8, rax
 * 00000001800CDA49: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CDA50: lea     rcx, [rbp+9F60h+var_1650]
 * 00000001800CDA57: call    sub_18001DD3C
 * 00000001800CDA5C: nop
 * 00000001800CDA5D: lea     r8, aPixel; "/Pixel"
 * 00000001800CDA64: mov     rdx, rax
 * 00000001800CDA67: lea     rcx, [rbp+9F60h+var_70F0]
 * 00000001800CDA6E: call    sub_18001DC84
 * 00000001800CDA73: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CDA78: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CDA7D: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CDA82: mov     rcx, rax
 * 00000001800CDA85: call    sub_180088528
 * 00000001800CDA8A: nop
 * 00000001800CDA8B: lea     rcx, [rbp+9F60h+var_1650]
 * 00000001800CDA92: call    sub_180011570
 * 00000001800CDA97: nop
 * 00000001800CDA98: lea     rcx, [rbp+9F60h+var_1630]
 * 00000001800CDA9F: call    sub_180011570
 * 00000001800CDAA4: nop
 * 00000001800CDAA5: lea     rcx, dword_1801FB3B8
 * 00000001800CDAAC: call    sub_18000C548
 * 00000001800CDAB1: mov     rax, [rsi+rdi*8]
 * 00000001800CDAB5: mov     eax, [r15+rax]
 * 00000001800CDAB9: cmp     cs:dword_1801FB3BC, eax
 * 00000001800CDABF: jle     loc_1800CDBBB
 * 00000001800CDAC5: lea     rcx, dword_1801FB3BC
 * 00000001800CDACC: call    sub_18000C5B0
 * 00000001800CDAD1: cmp     cs:dword_1801FB3BC, r14d
 * 00000001800CDAD8: jnz     loc_1800CDBBB
 * 00000001800CDADE: xor     edx, edx
 * 00000001800CDAE0: lea     rcx, [rbp+9F60h+var_9F8F]
 * 00000001800CDAE4: call    sub_1800A8E58
 * 00000001800CDAE9: mov     bl, [rax]
 * 00000001800CDAEB: call    sub_1800C50CC
 * 00000001800CDAF0: mov     rdx, rax
 * 00000001800CDAF3: mov     r8d, 6908h
 * 00000001800CDAF9: lea     rcx, [rbp+9F60h+var_96D0]
 * 00000001800CDB00: call    sub_1800A8E40
 * 00000001800CDB05: movups  xmm0, xmmword ptr [rax]
 * 00000001800CDB08: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CDB0E: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CDB12: mov     r9d, r12d
 * 00000001800CDB15: mov     r8d, 5
 * 00000001800CDB1B: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CDB20: lea     rcx, [rbp+9F60h+var_59D0]
 * 00000001800CDB27: call    sub_1800A8E0C
 * 00000001800CDB2C: movups  xmm6, xmmword ptr [rax]
 * 00000001800CDB2F: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CDB33: call    sub_1800C50FC
 * 00000001800CDB38: mov     r8, rax
 * 00000001800CDB3B: mov     r9d, r13d
 * 00000001800CDB3E: mov     edx, 1D2h
 * 00000001800CDB43: lea     rcx, [rbp+9F60h+var_15D0]; Src
 * 00000001800CDB4A: call    sub_180088448
 * 00000001800CDB4F: nop
 * 00000001800CDB50: mov     r8, rax
 * 00000001800CDB53: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CDB5A: lea     rcx, [rbp+9F60h+var_15F0]
 * 00000001800CDB61: call    sub_18001DD3C
 * 00000001800CDB66: nop
 * 00000001800CDB67: lea     r8, aPixel; "/Pixel"
 * 00000001800CDB6E: mov     rdx, rax
 * 00000001800CDB71: lea     rcx, [rbp+9F60h+var_7110]
 * 00000001800CDB78: call    sub_18001DC84
 * 00000001800CDB7D: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CDB82: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CDB87: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CDB8C: mov     rcx, rax
 * 00000001800CDB8F: call    sub_180088528
 * 00000001800CDB94: nop
 * 00000001800CDB95: lea     rcx, [rbp+9F60h+var_15F0]
 * 00000001800CDB9C: call    sub_180011570
 * 00000001800CDBA1: nop
 * 00000001800CDBA2: lea     rcx, [rbp+9F60h+var_15D0]
 * 00000001800CDBA9: call    sub_180011570
 * 00000001800CDBAE: nop
 * 00000001800CDBAF: lea     rcx, dword_1801FB3BC
 * 00000001800CDBB6: call    sub_18000C548
 * 00000001800CDBBB: mov     rax, [rsi+rdi*8]
 * 00000001800CDBBF: mov     eax, [r15+rax]
 * 00000001800CDBC3: cmp     cs:dword_1801FB3C0, eax
 * 00000001800CDBC9: jle     loc_1800CDCC5
 * 00000001800CDBCF: lea     rcx, dword_1801FB3C0
 * 00000001800CDBD6: call    sub_18000C5B0
 * 00000001800CDBDB: cmp     cs:dword_1801FB3C0, r14d
 * 00000001800CDBE2: jnz     loc_1800CDCC5
 * 00000001800CDBE8: xor     edx, edx
 * 00000001800CDBEA: lea     rcx, [rbp+9F60h+var_9F8E]
 * 00000001800CDBEE: call    sub_1800A8E58
 * 00000001800CDBF3: mov     bl, [rax]
 * 00000001800CDBF5: call    sub_1800C50EC
 * 00000001800CDBFA: mov     rdx, rax
 * 00000001800CDBFD: mov     r8d, 6ABCh
 * 00000001800CDC03: lea     rcx, [rbp+9F60h+var_96C0]
 * 00000001800CDC0A: call    sub_1800A8E40
 * 00000001800CDC0F: movups  xmm0, xmmword ptr [rax]
 * 00000001800CDC12: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CDC18: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CDC1C: mov     r9d, r12d
 * 00000001800CDC1F: mov     r8d, 5
 * 00000001800CDC25: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CDC2A: lea     rcx, [rbp+9F60h+var_59B0]
 * 00000001800CDC31: call    sub_1800A8E0C
 * 00000001800CDC36: movups  xmm6, xmmword ptr [rax]
 * 00000001800CDC39: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CDC3D: call    sub_1800C50FC
 * 00000001800CDC42: mov     r8, rax
 * 00000001800CDC45: mov     r9d, r13d
 * 00000001800CDC48: mov     edx, 1D8h
 * 00000001800CDC4D: lea     rcx, [rbp+9F60h+var_1570]; Src
 * 00000001800CDC54: call    sub_180088448
 * 00000001800CDC59: nop
 * 00000001800CDC5A: mov     r8, rax
 * 00000001800CDC5D: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CDC64: lea     rcx, [rbp+9F60h+var_1590]
 * 00000001800CDC6B: call    sub_18001DD3C
 * 00000001800CDC70: nop
 * 00000001800CDC71: lea     r8, aPixel; "/Pixel"
 * 00000001800CDC78: mov     rdx, rax
 * 00000001800CDC7B: lea     rcx, [rbp+9F60h+var_7150]
 * 00000001800CDC82: call    sub_18001DC84
 * 00000001800CDC87: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CDC8C: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CDC91: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CDC96: mov     rcx, rax
 * 00000001800CDC99: call    sub_180088528
 * 00000001800CDC9E: nop
 * 00000001800CDC9F: lea     rcx, [rbp+9F60h+var_1590]
 * 00000001800CDCA6: call    sub_180011570
 * 00000001800CDCAB: nop
 * 00000001800CDCAC: lea     rcx, [rbp+9F60h+var_1570]
 * 00000001800CDCB3: call    sub_180011570
 * 00000001800CDCB8: nop
 * 00000001800CDCB9: lea     rcx, dword_1801FB3C0
 * 00000001800CDCC0: call    sub_18000C548
 * 00000001800CDCC5: mov     rax, [rsi+rdi*8]
 * 00000001800CDCC9: mov     eax, [r15+rax]
 * 00000001800CDCCD: cmp     cs:dword_1801FB3C4, eax
 * 00000001800CDCD3: jle     loc_1800CDDCF
 * 00000001800CDCD9: lea     rcx, dword_1801FB3C4
 * 00000001800CDCE0: call    sub_18000C5B0
 * 00000001800CDCE5: cmp     cs:dword_1801FB3C4, r14d
 * 00000001800CDCEC: jnz     loc_1800CDDCF
 * 00000001800CDCF2: xor     edx, edx
 * 00000001800CDCF4: lea     rcx, [rbp+9F60h+var_9F8D]
 * 00000001800CDCF8: call    sub_1800A8E58
 * 00000001800CDCFD: mov     bl, [rax]
 * 00000001800CDCFF: call    sub_1800C50EC
 * 00000001800CDD04: mov     rdx, rax
 * 00000001800CDD07: mov     r8d, 6ABCh
 * 00000001800CDD0D: lea     rcx, [rbp+9F60h+var_96B0]
 * 00000001800CDD14: call    sub_1800A8E40
 * 00000001800CDD19: movups  xmm0, xmmword ptr [rax]
 * 00000001800CDD1C: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CDD22: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CDD26: mov     r9d, r12d
 * 00000001800CDD29: mov     r8d, 5
 * 00000001800CDD2F: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CDD34: lea     rcx, [rbp+9F60h+var_5990]
 * 00000001800CDD3B: call    sub_1800A8E0C
 * 00000001800CDD40: movups  xmm6, xmmword ptr [rax]
 * 00000001800CDD43: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CDD47: call    sub_1800C50FC
 * 00000001800CDD4C: mov     r8, rax
 * 00000001800CDD4F: mov     r9d, r13d
 * 00000001800CDD52: mov     edx, 1DAh
 * 00000001800CDD57: lea     rcx, [rbp+9F60h+var_1510]; Src
 * 00000001800CDD5E: call    sub_180088448
 * 00000001800CDD63: nop
 * 00000001800CDD64: mov     r8, rax
 * 00000001800CDD67: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CDD6E: lea     rcx, [rbp+9F60h+var_1530]
 * 00000001800CDD75: call    sub_18001DD3C
 * 00000001800CDD7A: nop
 * 00000001800CDD7B: lea     r8, aPixel; "/Pixel"
 * 00000001800CDD82: mov     rdx, rax
 * 00000001800CDD85: lea     rcx, [rbp+9F60h+var_7170]
 * 00000001800CDD8C: call    sub_18001DC84
 * 00000001800CDD91: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CDD96: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CDD9B: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CDDA0: mov     rcx, rax
 * 00000001800CDDA3: call    sub_180088528
 * 00000001800CDDA8: nop
 * 00000001800CDDA9: lea     rcx, [rbp+9F60h+var_1530]
 * 00000001800CDDB0: call    sub_180011570
 * 00000001800CDDB5: nop
 * 00000001800CDDB6: lea     rcx, [rbp+9F60h+var_1510]
 * 00000001800CDDBD: call    sub_180011570
 * 00000001800CDDC2: nop
 * 00000001800CDDC3: lea     rcx, dword_1801FB3C4
 * 00000001800CDDCA: call    sub_18000C548
 * 00000001800CDDCF: mov     rax, [rsi+rdi*8]
 * 00000001800CDDD3: mov     eax, [r15+rax]
 * 00000001800CDDD7: cmp     cs:dword_1801FB3C8, eax
 * 00000001800CDDDD: jle     loc_1800CDED9
 * 00000001800CDDE3: lea     rcx, dword_1801FB3C8
 * 00000001800CDDEA: call    sub_18000C5B0
 * 00000001800CDDEF: cmp     cs:dword_1801FB3C8, r14d
 * 00000001800CDDF6: jnz     loc_1800CDED9
 * 00000001800CDDFC: xor     edx, edx
 * 00000001800CDDFE: lea     rcx, [rbp+9F60h+var_9F8C]
 * 00000001800CDE02: call    sub_1800A8E58
 * 00000001800CDE07: mov     bl, [rax]
 * 00000001800CDE09: call    sub_1800C509C
 * 00000001800CDE0E: mov     rdx, rax
 * 00000001800CDE11: mov     r8d, 672Ch
 * 00000001800CDE17: lea     rcx, [rbp+9F60h+var_96A0]
 * 00000001800CDE1E: call    sub_1800A8E40
 * 00000001800CDE23: movups  xmm0, xmmword ptr [rax]
 * 00000001800CDE26: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CDE2C: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CDE30: mov     r9d, r12d
 * 00000001800CDE33: mov     r8d, 5
 * 00000001800CDE39: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CDE3E: lea     rcx, [rbp+9F60h+var_5970]
 * 00000001800CDE45: call    sub_1800A8E0C
 * 00000001800CDE4A: movups  xmm6, xmmword ptr [rax]
 * 00000001800CDE4D: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CDE51: call    sub_1800C50FC
 * 00000001800CDE56: mov     r8, rax
 * 00000001800CDE59: mov     r9d, r13d
 * 00000001800CDE5C: mov     edx, 1E0h
 * 00000001800CDE61: lea     rcx, [rbp+9F60h+var_14B0]; Src
 * 00000001800CDE68: call    sub_180088448
 * 00000001800CDE6D: nop
 * 00000001800CDE6E: mov     r8, rax
 * 00000001800CDE71: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CDE78: lea     rcx, [rbp+9F60h+var_14D0]
 * 00000001800CDE7F: call    sub_18001DD3C
 * 00000001800CDE84: nop
 * 00000001800CDE85: lea     r8, aPixel; "/Pixel"
 * 00000001800CDE8C: mov     rdx, rax
 * 00000001800CDE8F: lea     rcx, [rbp+9F60h+var_71B0]
 * 00000001800CDE96: call    sub_18001DC84
 * 00000001800CDE9B: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CDEA0: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CDEA5: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CDEAA: mov     rcx, rax
 * 00000001800CDEAD: call    sub_180088528
 * 00000001800CDEB2: nop
 * 00000001800CDEB3: lea     rcx, [rbp+9F60h+var_14D0]
 * 00000001800CDEBA: call    sub_180011570
 * 00000001800CDEBF: nop
 * 00000001800CDEC0: lea     rcx, [rbp+9F60h+var_14B0]
 * 00000001800CDEC7: call    sub_180011570
 * 00000001800CDECC: nop
 * 00000001800CDECD: lea     rcx, dword_1801FB3C8
 * 00000001800CDED4: call    sub_18000C548
 * 00000001800CDED9: mov     rax, [rsi+rdi*8]
 * 00000001800CDEDD: mov     eax, [r15+rax]
 * 00000001800CDEE1: cmp     cs:dword_1801FB3CC, eax
 * 00000001800CDEE7: jle     loc_1800CDFE3
 * 00000001800CDEED: lea     rcx, dword_1801FB3CC
 * 00000001800CDEF4: call    sub_18000C5B0
 * 00000001800CDEF9: cmp     cs:dword_1801FB3CC, r14d
 * 00000001800CDF00: jnz     loc_1800CDFE3
 * 00000001800CDF06: xor     edx, edx
 * 00000001800CDF08: lea     rcx, [rbp+9F60h+var_9F8B]
 * 00000001800CDF0C: call    sub_1800A8E58
 * 00000001800CDF11: mov     bl, [rax]
 * 00000001800CDF13: call    sub_1800C509C
 * 00000001800CDF18: mov     rdx, rax
 * 00000001800CDF1B: mov     r8d, 672Ch
 * 00000001800CDF21: lea     rcx, [rbp+9F60h+var_9690]
 * 00000001800CDF28: call    sub_1800A8E40
 * 00000001800CDF2D: movups  xmm0, xmmword ptr [rax]
 * 00000001800CDF30: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CDF36: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CDF3A: mov     r9d, r12d
 * 00000001800CDF3D: mov     r8d, 5
 * 00000001800CDF43: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CDF48: lea     rcx, [rbp+9F60h+var_5950]
 * 00000001800CDF4F: call    sub_1800A8E0C
 * 00000001800CDF54: movups  xmm6, xmmword ptr [rax]
 * 00000001800CDF57: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CDF5B: call    sub_1800C50FC
 * 00000001800CDF60: mov     r8, rax
 * 00000001800CDF63: mov     r9d, r13d
 * 00000001800CDF66: mov     edx, 1E2h
 * 00000001800CDF6B: lea     rcx, [rbp+9F60h+var_1450]; Src
 * 00000001800CDF72: call    sub_180088448
 * 00000001800CDF77: nop
 * 00000001800CDF78: mov     r8, rax
 * 00000001800CDF7B: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CDF82: lea     rcx, [rbp+9F60h+var_1470]
 * 00000001800CDF89: call    sub_18001DD3C
 * 00000001800CDF8E: nop
 * 00000001800CDF8F: lea     r8, aPixel; "/Pixel"
 * 00000001800CDF96: mov     rdx, rax
 * 00000001800CDF99: lea     rcx, [rbp+9F60h+var_71D0]
 * 00000001800CDFA0: call    sub_18001DC84
 * 00000001800CDFA5: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CDFAA: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CDFAF: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CDFB4: mov     rcx, rax
 * 00000001800CDFB7: call    sub_180088528
 * 00000001800CDFBC: nop
 * 00000001800CDFBD: lea     rcx, [rbp+9F60h+var_1470]
 * 00000001800CDFC4: call    sub_180011570
 * 00000001800CDFC9: nop
 * 00000001800CDFCA: lea     rcx, [rbp+9F60h+var_1450]
 * 00000001800CDFD1: call    sub_180011570
 * 00000001800CDFD6: nop
 * 00000001800CDFD7: lea     rcx, dword_1801FB3CC
 * 00000001800CDFDE: call    sub_18000C548
 * 00000001800CDFE3: mov     rax, [rsi+rdi*8]
 * 00000001800CDFE7: mov     eax, [r15+rax]
 * 00000001800CDFEB: cmp     cs:dword_1801FB3D0, eax
 * 00000001800CDFF1: jle     loc_1800CE0ED
 * 00000001800CDFF7: lea     rcx, dword_1801FB3D0
 * 00000001800CDFFE: call    sub_18000C5B0
 * 00000001800CE003: cmp     cs:dword_1801FB3D0, r14d
 * 00000001800CE00A: jnz     loc_1800CE0ED
 * 00000001800CE010: xor     edx, edx
 * 00000001800CE012: lea     rcx, [rbp+9F60h+var_9F8A]
 * 00000001800CE016: call    sub_1800A8E58
 * 00000001800CE01B: mov     bl, [rax]
 * 00000001800CE01D: call    sub_1800C50BC
 * 00000001800CE022: mov     rdx, rax
 * 00000001800CE025: mov     r8d, 68BCh
 * 00000001800CE02B: lea     rcx, [rbp+9F60h+var_9680]
 * 00000001800CE032: call    sub_1800A8E40
 * 00000001800CE037: movups  xmm0, xmmword ptr [rax]
 * 00000001800CE03A: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CE040: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CE044: mov     r9d, r12d
 * 00000001800CE047: mov     r8d, 5
 * 00000001800CE04D: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CE052: lea     rcx, [rbp+9F60h+var_5930]
 * 00000001800CE059: call    sub_1800A8E0C
 * 00000001800CE05E: movups  xmm6, xmmword ptr [rax]
 * 00000001800CE061: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CE065: call    sub_1800C50FC
 * 00000001800CE06A: mov     r8, rax
 * 00000001800CE06D: mov     r9d, r13d
 * 00000001800CE070: mov     edx, 1E8h
 * 00000001800CE075: lea     rcx, [rbp+9F60h+var_13F0]; Src
 * 00000001800CE07C: call    sub_180088448
 * 00000001800CE081: nop
 * 00000001800CE082: mov     r8, rax
 * 00000001800CE085: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CE08C: lea     rcx, [rbp+9F60h+var_1410]
 * 00000001800CE093: call    sub_18001DD3C
 * 00000001800CE098: nop
 * 00000001800CE099: lea     r8, aPixel; "/Pixel"
 * 00000001800CE0A0: mov     rdx, rax
 * 00000001800CE0A3: lea     rcx, [rbp+9F60h+var_7210]
 * 00000001800CE0AA: call    sub_18001DC84
 * 00000001800CE0AF: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CE0B4: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CE0B9: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CE0BE: mov     rcx, rax
 * 00000001800CE0C1: call    sub_180088528
 * 00000001800CE0C6: nop
 * 00000001800CE0C7: lea     rcx, [rbp+9F60h+var_1410]
 * 00000001800CE0CE: call    sub_180011570
 * 00000001800CE0D3: nop
 * 00000001800CE0D4: lea     rcx, [rbp+9F60h+var_13F0]
 * 00000001800CE0DB: call    sub_180011570
 * 00000001800CE0E0: nop
 * 00000001800CE0E1: lea     rcx, dword_1801FB3D0
 * 00000001800CE0E8: call    sub_18000C548
 * 00000001800CE0ED: mov     rax, [rsi+rdi*8]
 * 00000001800CE0F1: mov     eax, [r15+rax]
 * 00000001800CE0F5: cmp     cs:dword_1801FB3D4, eax
 * 00000001800CE0FB: jle     loc_1800CE1F7
 * 00000001800CE101: lea     rcx, dword_1801FB3D4
 * 00000001800CE108: call    sub_18000C5B0
 * 00000001800CE10D: cmp     cs:dword_1801FB3D4, r14d
 * 00000001800CE114: jnz     loc_1800CE1F7
 * 00000001800CE11A: xor     edx, edx
 * 00000001800CE11C: lea     rcx, [rbp+9F60h+var_9F89]
 * 00000001800CE120: call    sub_1800A8E58
 * 00000001800CE125: mov     bl, [rax]
 * 00000001800CE127: call    sub_1800C50BC
 * 00000001800CE12C: mov     rdx, rax
 * 00000001800CE12F: mov     r8d, 68BCh
 * 00000001800CE135: lea     rcx, [rbp+9F60h+var_9670]
 * 00000001800CE13C: call    sub_1800A8E40
 * 00000001800CE141: movups  xmm0, xmmword ptr [rax]
 * 00000001800CE144: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CE14A: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CE14E: mov     r9d, r12d
 * 00000001800CE151: mov     r8d, 5
 * 00000001800CE157: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CE15C: lea     rcx, [rbp+9F60h+var_5910]
 * 00000001800CE163: call    sub_1800A8E0C
 * 00000001800CE168: movups  xmm6, xmmword ptr [rax]
 * 00000001800CE16B: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CE16F: call    sub_1800C50FC
 * 00000001800CE174: mov     r8, rax
 * 00000001800CE177: mov     r9d, r13d
 * 00000001800CE17A: mov     edx, 1EAh
 * 00000001800CE17F: lea     rcx, [rbp+9F60h+var_1390]; Src
 * 00000001800CE186: call    sub_180088448
 * 00000001800CE18B: nop
 * 00000001800CE18C: mov     r8, rax
 * 00000001800CE18F: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CE196: lea     rcx, [rbp+9F60h+var_13B0]
 * 00000001800CE19D: call    sub_18001DD3C
 * 00000001800CE1A2: nop
 * 00000001800CE1A3: lea     r8, aPixel; "/Pixel"
 * 00000001800CE1AA: mov     rdx, rax
 * 00000001800CE1AD: lea     rcx, [rbp+9F60h+var_7230]
 * 00000001800CE1B4: call    sub_18001DC84
 * 00000001800CE1B9: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CE1BE: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CE1C3: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CE1C8: mov     rcx, rax
 * 00000001800CE1CB: call    sub_180088528
 * 00000001800CE1D0: nop
 * 00000001800CE1D1: lea     rcx, [rbp+9F60h+var_13B0]
 * 00000001800CE1D8: call    sub_180011570
 * 00000001800CE1DD: nop
 * 00000001800CE1DE: lea     rcx, [rbp+9F60h+var_1390]
 * 00000001800CE1E5: call    sub_180011570
 * 00000001800CE1EA: nop
 * 00000001800CE1EB: lea     rcx, dword_1801FB3D4
 * 00000001800CE1F2: call    sub_18000C548
 * 00000001800CE1F7: mov     rax, [rsi+rdi*8]
 * 00000001800CE1FB: mov     eax, [r15+rax]
 * 00000001800CE1FF: cmp     cs:dword_1801FB3D8, eax
 * 00000001800CE205: jle     loc_1800CE301
 * 00000001800CE20B: lea     rcx, dword_1801FB3D8
 * 00000001800CE212: call    sub_18000C5B0
 * 00000001800CE217: cmp     cs:dword_1801FB3D8, r14d
 * 00000001800CE21E: jnz     loc_1800CE301
 * 00000001800CE224: xor     edx, edx
 * 00000001800CE226: lea     rcx, [rbp+9F60h+var_9F88]
 * 00000001800CE22A: call    sub_1800A8E58
 * 00000001800CE22F: mov     bl, [rax]
 * 00000001800CE231: call    sub_1800C50CC
 * 00000001800CE236: mov     rdx, rax
 * 00000001800CE239: mov     r8d, 6908h
 * 00000001800CE23F: lea     rcx, [rbp+9F60h+var_9660]
 * 00000001800CE246: call    sub_1800A8E40
 * 00000001800CE24B: movups  xmm0, xmmword ptr [rax]
 * 00000001800CE24E: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CE254: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CE258: mov     r9d, r12d
 * 00000001800CE25B: mov     r8d, 5
 * 00000001800CE261: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CE266: lea     rcx, [rbp+9F60h+var_58F0]
 * 00000001800CE26D: call    sub_1800A8E0C
 * 00000001800CE272: movups  xmm6, xmmword ptr [rax]
 * 00000001800CE275: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CE279: call    sub_1800C50FC
 * 00000001800CE27E: mov     r8, rax
 * 00000001800CE281: mov     r9d, r13d
 * 00000001800CE284: mov     edx, 1F0h
 * 00000001800CE289: lea     rcx, [rbp+9F60h+var_1330]; Src
 * 00000001800CE290: call    sub_180088448
 * 00000001800CE295: nop
 * 00000001800CE296: mov     r8, rax
 * 00000001800CE299: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CE2A0: lea     rcx, [rbp+9F60h+var_1350]
 * 00000001800CE2A7: call    sub_18001DD3C
 * 00000001800CE2AC: nop
 * 00000001800CE2AD: lea     r8, aPixel; "/Pixel"
 * 00000001800CE2B4: mov     rdx, rax
 * 00000001800CE2B7: lea     rcx, [rbp+9F60h+var_7270]
 * 00000001800CE2BE: call    sub_18001DC84
 * 00000001800CE2C3: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CE2C8: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CE2CD: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CE2D2: mov     rcx, rax
 * 00000001800CE2D5: call    sub_180088528
 * 00000001800CE2DA: nop
 * 00000001800CE2DB: lea     rcx, [rbp+9F60h+var_1350]
 * 00000001800CE2E2: call    sub_180011570
 * 00000001800CE2E7: nop
 * 00000001800CE2E8: lea     rcx, [rbp+9F60h+var_1330]
 * 00000001800CE2EF: call    sub_180011570
 * 00000001800CE2F4: nop
 * 00000001800CE2F5: lea     rcx, dword_1801FB3D8
 * 00000001800CE2FC: call    sub_18000C548
 * 00000001800CE301: mov     rax, [rsi+rdi*8]
 * 00000001800CE305: mov     eax, [r15+rax]
 * 00000001800CE309: cmp     cs:dword_1801FB3DC, eax
 * 00000001800CE30F: jle     loc_1800CE40B
 * 00000001800CE315: lea     rcx, dword_1801FB3DC
 * 00000001800CE31C: call    sub_18000C5B0
 * 00000001800CE321: cmp     cs:dword_1801FB3DC, r14d
 * 00000001800CE328: jnz     loc_1800CE40B
 * 00000001800CE32E: xor     edx, edx
 * 00000001800CE330: lea     rcx, [rbp+9F60h+var_9F87]
 * 00000001800CE334: call    sub_1800A8E58
 * 00000001800CE339: mov     bl, [rax]
 * 00000001800CE33B: call    sub_1800C50CC
 * 00000001800CE340: mov     rdx, rax
 * 00000001800CE343: mov     r8d, 6908h
 * 00000001800CE349: lea     rcx, [rbp+9F60h+var_9650]
 * 00000001800CE350: call    sub_1800A8E40
 * 00000001800CE355: movups  xmm0, xmmword ptr [rax]
 * 00000001800CE358: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CE35E: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CE362: mov     r9d, r12d
 * 00000001800CE365: mov     r8d, 5
 * 00000001800CE36B: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CE370: lea     rcx, [rbp+9F60h+var_58D0]
 * 00000001800CE377: call    sub_1800A8E0C
 * 00000001800CE37C: movups  xmm6, xmmword ptr [rax]
 * 00000001800CE37F: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CE383: call    sub_1800C50FC
 * 00000001800CE388: mov     r8, rax
 * 00000001800CE38B: mov     r9d, r13d
 * 00000001800CE38E: mov     edx, 1F2h
 * 00000001800CE393: lea     rcx, [rbp+9F60h+var_12D0]; Src
 * 00000001800CE39A: call    sub_180088448
 * 00000001800CE39F: nop
 * 00000001800CE3A0: mov     r8, rax
 * 00000001800CE3A3: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CE3AA: lea     rcx, [rbp+9F60h+var_12F0]
 * 00000001800CE3B1: call    sub_18001DD3C
 * 00000001800CE3B6: nop
 * 00000001800CE3B7: lea     r8, aPixel; "/Pixel"
 * 00000001800CE3BE: mov     rdx, rax
 * 00000001800CE3C1: lea     rcx, [rbp+9F60h+var_7290]
 * 00000001800CE3C8: call    sub_18001DC84
 * 00000001800CE3CD: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CE3D2: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CE3D7: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CE3DC: mov     rcx, rax
 * 00000001800CE3DF: call    sub_180088528
 * 00000001800CE3E4: nop
 * 00000001800CE3E5: lea     rcx, [rbp+9F60h+var_12F0]
 * 00000001800CE3EC: call    sub_180011570
 * 00000001800CE3F1: nop
 * 00000001800CE3F2: lea     rcx, [rbp+9F60h+var_12D0]
 * 00000001800CE3F9: call    sub_180011570
 * 00000001800CE3FE: nop
 * 00000001800CE3FF: lea     rcx, dword_1801FB3DC
 * 00000001800CE406: call    sub_18000C548
 * 00000001800CE40B: mov     rax, [rsi+rdi*8]
 * 00000001800CE40F: mov     eax, [r15+rax]
 * 00000001800CE413: cmp     cs:dword_1801FB3E0, eax
 * 00000001800CE419: jle     loc_1800CE515
 * 00000001800CE41F: lea     rcx, dword_1801FB3E0
 * 00000001800CE426: call    sub_18000C5B0
 * 00000001800CE42B: cmp     cs:dword_1801FB3E0, r14d
 * 00000001800CE432: jnz     loc_1800CE515
 * 00000001800CE438: xor     edx, edx
 * 00000001800CE43A: lea     rcx, [rbp+9F60h+var_9F86]
 * 00000001800CE43E: call    sub_1800A8E58
 * 00000001800CE443: mov     bl, [rax]
 * 00000001800CE445: call    sub_1800C50EC
 * 00000001800CE44A: mov     rdx, rax
 * 00000001800CE44D: mov     r8d, 6ABCh
 * 00000001800CE453: lea     rcx, [rbp+9F60h+var_9640]
 * 00000001800CE45A: call    sub_1800A8E40
 * 00000001800CE45F: movups  xmm0, xmmword ptr [rax]
 * 00000001800CE462: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CE468: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CE46C: mov     r9d, r12d
 * 00000001800CE46F: mov     r8d, 5
 * 00000001800CE475: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CE47A: lea     rcx, [rbp+9F60h+var_58B0]
 * 00000001800CE481: call    sub_1800A8E0C
 * 00000001800CE486: movups  xmm6, xmmword ptr [rax]
 * 00000001800CE489: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CE48D: call    sub_1800C50FC
 * 00000001800CE492: mov     r8, rax
 * 00000001800CE495: mov     r9d, r13d
 * 00000001800CE498: mov     edx, 1F8h
 * 00000001800CE49D: lea     rcx, [rbp+9F60h+var_1270]; Src
 * 00000001800CE4A4: call    sub_180088448
 * 00000001800CE4A9: nop
 * 00000001800CE4AA: mov     r8, rax
 * 00000001800CE4AD: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CE4B4: lea     rcx, [rbp+9F60h+var_1290]
 * 00000001800CE4BB: call    sub_18001DD3C
 * 00000001800CE4C0: nop
 * 00000001800CE4C1: lea     r8, aPixel; "/Pixel"
 * 00000001800CE4C8: mov     rdx, rax
 * 00000001800CE4CB: lea     rcx, [rbp+9F60h+var_72D0]
 * 00000001800CE4D2: call    sub_18001DC84
 * 00000001800CE4D7: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CE4DC: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CE4E1: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CE4E6: mov     rcx, rax
 * 00000001800CE4E9: call    sub_180088528
 * 00000001800CE4EE: nop
 * 00000001800CE4EF: lea     rcx, [rbp+9F60h+var_1290]
 * 00000001800CE4F6: call    sub_180011570
 * 00000001800CE4FB: nop
 * 00000001800CE4FC: lea     rcx, [rbp+9F60h+var_1270]
 * 00000001800CE503: call    sub_180011570
 * 00000001800CE508: nop
 * 00000001800CE509: lea     rcx, dword_1801FB3E0
 * 00000001800CE510: call    sub_18000C548
 * 00000001800CE515: mov     rax, [rsi+rdi*8]
 * 00000001800CE519: mov     eax, [r15+rax]
 * 00000001800CE51D: cmp     cs:dword_1801FB3E4, eax
 * 00000001800CE523: jle     loc_1800CE61F
 * 00000001800CE529: lea     rcx, dword_1801FB3E4
 * 00000001800CE530: call    sub_18000C5B0
 * 00000001800CE535: cmp     cs:dword_1801FB3E4, r14d
 * 00000001800CE53C: jnz     loc_1800CE61F
 * 00000001800CE542: xor     edx, edx
 * 00000001800CE544: lea     rcx, [rbp+9F60h+var_9F85]
 * 00000001800CE548: call    sub_1800A8E58
 * 00000001800CE54D: mov     bl, [rax]
 * 00000001800CE54F: call    sub_1800C50EC
 * 00000001800CE554: mov     rdx, rax
 * 00000001800CE557: mov     r8d, 6ABCh
 * 00000001800CE55D: lea     rcx, [rbp+9F60h+var_9630]
 * 00000001800CE564: call    sub_1800A8E40
 * 00000001800CE569: movups  xmm0, xmmword ptr [rax]
 * 00000001800CE56C: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CE572: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CE576: mov     r9d, r12d
 * 00000001800CE579: mov     r8d, 5
 * 00000001800CE57F: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CE584: lea     rcx, [rbp+9F60h+var_5890]
 * 00000001800CE58B: call    sub_1800A8E0C
 * 00000001800CE590: movups  xmm6, xmmword ptr [rax]
 * 00000001800CE593: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CE597: call    sub_1800C50FC
 * 00000001800CE59C: mov     r8, rax
 * 00000001800CE59F: mov     r9d, r13d
 * 00000001800CE5A2: mov     edx, 1FAh
 * 00000001800CE5A7: lea     rcx, [rbp+9F60h+var_1210]; Src
 * 00000001800CE5AE: call    sub_180088448
 * 00000001800CE5B3: nop
 * 00000001800CE5B4: mov     r8, rax
 * 00000001800CE5B7: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CE5BE: lea     rcx, [rbp+9F60h+var_1230]
 * 00000001800CE5C5: call    sub_18001DD3C
 * 00000001800CE5CA: nop
 * 00000001800CE5CB: lea     r8, aPixel; "/Pixel"
 * 00000001800CE5D2: mov     rdx, rax
 * 00000001800CE5D5: lea     rcx, [rbp+9F60h+var_72F0]
 * 00000001800CE5DC: call    sub_18001DC84
 * 00000001800CE5E1: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CE5E6: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CE5EB: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CE5F0: mov     rcx, rax
 * 00000001800CE5F3: call    sub_180088528
 * 00000001800CE5F8: nop
 * 00000001800CE5F9: lea     rcx, [rbp+9F60h+var_1230]
 * 00000001800CE600: call    sub_180011570
 * 00000001800CE605: nop
 * 00000001800CE606: lea     rcx, [rbp+9F60h+var_1210]
 * 00000001800CE60D: call    sub_180011570
 * 00000001800CE612: nop
 * 00000001800CE613: lea     rcx, dword_1801FB3E4
 * 00000001800CE61A: call    sub_18000C548
 * 00000001800CE61F: mov     rax, [rsi+rdi*8]
 * 00000001800CE623: mov     eax, [r15+rax]
 * 00000001800CE627: cmp     cs:dword_1801FB3E8, eax
 * 00000001800CE62D: jle     loc_1800CE723
 * 00000001800CE633: lea     rcx, dword_1801FB3E8
 * 00000001800CE63A: call    sub_18000C5B0
 * 00000001800CE63F: cmp     cs:dword_1801FB3E8, r14d
 * 00000001800CE646: jnz     loc_1800CE723
 * 00000001800CE64C: xor     edx, edx
 * 00000001800CE64E: lea     rcx, [rbp+9F60h+var_9F84]
 * 00000001800CE652: call    sub_1800A8E58
 * 00000001800CE657: mov     bl, [rax]
 * 00000001800CE659: call    sub_1800C4FCC
 * 00000001800CE65E: mov     rdx, rax
 * 00000001800CE661: mov     r8d, 1018h
 * 00000001800CE667: lea     rcx, [rbp+9F60h+var_9620]
 * 00000001800CE66E: call    sub_1800A8E40
 * 00000001800CE673: movups  xmm0, xmmword ptr [rax]
 * 00000001800CE676: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CE67C: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CE680: mov     r9d, r12d
 * 00000001800CE683: mov     r8d, r12d
 * 00000001800CE686: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CE68B: lea     rcx, [rbp+9F60h+var_5870]
 * 00000001800CE692: call    sub_1800A8E0C
 * 00000001800CE697: movups  xmm6, xmmword ptr [rax]
 * 00000001800CE69A: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CE69E: call    sub_1800C50FC
 * 00000001800CE6A3: mov     r8, rax
 * 00000001800CE6A6: mov     r9d, r13d
 * 00000001800CE6A9: xor     edx, edx
 * 00000001800CE6AB: lea     rcx, [rbp+9F60h+var_11B0]; Src
 * 00000001800CE6B2: call    sub_180088448
 * 00000001800CE6B7: nop
 * 00000001800CE6B8: mov     r8, rax
 * 00000001800CE6BB: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CE6C2: lea     rcx, [rbp+9F60h+var_11D0]
 * 00000001800CE6C9: call    sub_18001DD3C
 * 00000001800CE6CE: nop
 * 00000001800CE6CF: lea     r8, aVertex; "/Vertex"
 * 00000001800CE6D6: mov     rdx, rax
 * 00000001800CE6D9: lea     rcx, [rbp+9F60h+var_7330]
 * 00000001800CE6E0: call    sub_18001DC84
 * 00000001800CE6E5: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CE6EA: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CE6EF: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CE6F4: mov     rcx, rax
 * 00000001800CE6F7: call    sub_180088528
 * 00000001800CE6FC: nop
 * 00000001800CE6FD: lea     rcx, [rbp+9F60h+var_11D0]
 * 00000001800CE704: call    sub_180011570
 * 00000001800CE709: nop
 * 00000001800CE70A: lea     rcx, [rbp+9F60h+var_11B0]
 * 00000001800CE711: call    sub_180011570
 * 00000001800CE716: nop
 * 00000001800CE717: lea     rcx, dword_1801FB3E8
 * 00000001800CE71E: call    sub_18000C548
 * 00000001800CE723: mov     rax, [rsi+rdi*8]
 * 00000001800CE727: mov     eax, [r15+rax]
 * 00000001800CE72B: cmp     cs:dword_1801FB3EC, eax
 * 00000001800CE731: jle     loc_1800CE828
 * 00000001800CE737: lea     rcx, dword_1801FB3EC
 * 00000001800CE73E: call    sub_18000C5B0
 * 00000001800CE743: cmp     cs:dword_1801FB3EC, r14d
 * 00000001800CE74A: jnz     loc_1800CE828
 * 00000001800CE750: xor     edx, edx
 * 00000001800CE752: lea     rcx, [rbp+9F60h+var_9F83]
 * 00000001800CE756: call    sub_1800A8E58
 * 00000001800CE75B: mov     bl, [rax]
 * 00000001800CE75D: call    sub_1800C27B8
 * 00000001800CE762: mov     rdx, rax
 * 00000001800CE765: mov     r8d, 584h
 * 00000001800CE76B: lea     rcx, [rbp+9F60h+var_9610]
 * 00000001800CE772: call    sub_1800A8E40
 * 00000001800CE777: movups  xmm0, xmmword ptr [rax]
 * 00000001800CE77A: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CE780: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CE784: mov     r9d, r12d
 * 00000001800CE787: mov     r8d, r12d
 * 00000001800CE78A: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CE78F: lea     rcx, [rbp+9F60h+var_5850]
 * 00000001800CE796: call    sub_1800A8E0C
 * 00000001800CE79B: movups  xmm6, xmmword ptr [rax]
 * 00000001800CE79E: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CE7A2: call    sub_1800C50FC
 * 00000001800CE7A7: mov     r8, rax
 * 00000001800CE7AA: mov     r9d, r13d
 * 00000001800CE7AD: mov     rdx, r12
 * 00000001800CE7B0: lea     rcx, [rbp+9F60h+var_1150]; Src
 * 00000001800CE7B7: call    sub_180088448
 * 00000001800CE7BC: nop
 * 00000001800CE7BD: mov     r8, rax
 * 00000001800CE7C0: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CE7C7: lea     rcx, [rbp+9F60h+var_1170]
 * 00000001800CE7CE: call    sub_18001DD3C
 * 00000001800CE7D3: nop
 * 00000001800CE7D4: lea     r8, aVertex; "/Vertex"
 * 00000001800CE7DB: mov     rdx, rax
 * 00000001800CE7DE: lea     rcx, [rbp+9F60h+var_7350]
 * 00000001800CE7E5: call    sub_18001DC84
 * 00000001800CE7EA: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CE7EF: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CE7F4: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CE7F9: mov     rcx, rax
 * 00000001800CE7FC: call    sub_180088528
 * 00000001800CE801: nop
 * 00000001800CE802: lea     rcx, [rbp+9F60h+var_1170]
 * 00000001800CE809: call    sub_180011570
 * 00000001800CE80E: nop
 * 00000001800CE80F: lea     rcx, [rbp+9F60h+var_1150]
 * 00000001800CE816: call    sub_180011570
 * 00000001800CE81B: nop
 * 00000001800CE81C: lea     rcx, dword_1801FB3EC
 * 00000001800CE823: call    sub_18000C548
 * 00000001800CE828: mov     rax, [rsi+rdi*8]
 * 00000001800CE82C: mov     ecx, [r15+rax]
 * 00000001800CE830: cmp     cs:dword_1801FB3F0, ecx
 * 00000001800CE836: jle     loc_1800CE92F
 * 00000001800CE83C: lea     rcx, dword_1801FB3F0
 * 00000001800CE843: call    sub_18000C5B0
 * 00000001800CE848: cmp     cs:dword_1801FB3F0, r14d
 * 00000001800CE84F: jnz     loc_1800CE92F
 * 00000001800CE855: xor     edx, edx
 * 00000001800CE857: lea     rcx, [rbp+9F60h+var_9F82]
 * 00000001800CE85B: call    sub_1800A8E58
 * 00000001800CE860: mov     bl, [rax]
 * 00000001800CE862: call    sub_1800C4FCC
 * 00000001800CE867: mov     rdx, rax
 * 00000001800CE86A: mov     r8d, 1018h
 * 00000001800CE870: lea     rcx, [rbp+9F60h+var_9600]
 * 00000001800CE877: call    sub_1800A8E40
 * 00000001800CE87C: movups  xmm0, xmmword ptr [rax]
 * 00000001800CE87F: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CE885: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CE889: mov     r9d, r12d
 * 00000001800CE88C: mov     r8d, r12d
 * 00000001800CE88F: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CE894: lea     rcx, [rbp+9F60h+var_5830]
 * 00000001800CE89B: call    sub_1800A8E0C
 * 00000001800CE8A0: movups  xmm6, xmmword ptr [rax]
 * 00000001800CE8A3: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CE8A7: call    sub_1800C50FC
 * 00000001800CE8AC: mov     r8, rax
 * 00000001800CE8AF: mov     r9d, r13d
 * 00000001800CE8B2: mov     edx, 2
 * 00000001800CE8B7: lea     rcx, [rbp+9F60h+var_10F0]; Src
 * 00000001800CE8BE: call    sub_180088448
 * 00000001800CE8C3: nop
 * 00000001800CE8C4: mov     r8, rax
 * 00000001800CE8C7: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CE8CE: lea     rcx, [rbp+9F60h+var_1110]
 * 00000001800CE8D5: call    sub_18001DD3C
 * 00000001800CE8DA: nop
 * 00000001800CE8DB: lea     r8, aVertex; "/Vertex"
 * 00000001800CE8E2: mov     rdx, rax
 * 00000001800CE8E5: lea     rcx, [rbp+9F60h+var_7390]
 * 00000001800CE8EC: call    sub_18001DC84
 * 00000001800CE8F1: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CE8F6: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CE8FB: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CE900: mov     rcx, rax
 * 00000001800CE903: call    sub_180088528
 * 00000001800CE908: nop
 * 00000001800CE909: lea     rcx, [rbp+9F60h+var_1110]
 * 00000001800CE910: call    sub_180011570
 * 00000001800CE915: nop
 * 00000001800CE916: lea     rcx, [rbp+9F60h+var_10F0]
 * 00000001800CE91D: call    sub_180011570
 * 00000001800CE922: nop
 * 00000001800CE923: lea     rcx, dword_1801FB3F0
 * 00000001800CE92A: call    sub_18000C548
 * 00000001800CE92F: mov     rax, [rsi+rdi*8]
 * 00000001800CE933: mov     ecx, [r15+rax]
 * 00000001800CE937: cmp     cs:dword_1801FB3F4, ecx
 * 00000001800CE93D: jle     loc_1800CEA36
 * 00000001800CE943: lea     rcx, dword_1801FB3F4
 * 00000001800CE94A: call    sub_18000C5B0
 * 00000001800CE94F: cmp     cs:dword_1801FB3F4, r14d
 * 00000001800CE956: jnz     loc_1800CEA36
 * 00000001800CE95C: xor     edx, edx
 * 00000001800CE95E: lea     rcx, [rbp+9F60h+var_9F81]
 * 00000001800CE962: call    sub_1800A8E58
 * 00000001800CE967: mov     bl, [rax]
 * 00000001800CE969: call    sub_1800C4FCC
 * 00000001800CE96E: mov     rdx, rax
 * 00000001800CE971: mov     r8d, 1018h
 * 00000001800CE977: lea     rcx, [rbp+9F60h+var_95F0]
 * 00000001800CE97E: call    sub_1800A8E40
 * 00000001800CE983: movups  xmm0, xmmword ptr [rax]
 * 00000001800CE986: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CE98C: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CE990: mov     r9d, r12d
 * 00000001800CE993: mov     r8d, r12d
 * 00000001800CE996: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CE99B: lea     rcx, [rbp+9F60h+var_5810]
 * 00000001800CE9A2: call    sub_1800A8E0C
 * 00000001800CE9A7: movups  xmm6, xmmword ptr [rax]
 * 00000001800CE9AA: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CE9AE: call    sub_1800C50FC
 * 00000001800CE9B3: mov     r8, rax
 * 00000001800CE9B6: mov     r9d, r13d
 * 00000001800CE9B9: mov     edx, 4
 * 00000001800CE9BE: lea     rcx, [rbp+9F60h+var_1090]; Src
 * 00000001800CE9C5: call    sub_180088448
 * 00000001800CE9CA: nop
 * 00000001800CE9CB: mov     r8, rax
 * 00000001800CE9CE: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CE9D5: lea     rcx, [rbp+9F60h+var_10B0]
 * 00000001800CE9DC: call    sub_18001DD3C
 * 00000001800CE9E1: nop
 * 00000001800CE9E2: lea     r8, aVertex; "/Vertex"
 * 00000001800CE9E9: mov     rdx, rax
 * 00000001800CE9EC: lea     rcx, [rbp+9F60h+var_73B0]
 * 00000001800CE9F3: call    sub_18001DC84
 * 00000001800CE9F8: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CE9FD: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CEA02: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CEA07: mov     rcx, rax
 * 00000001800CEA0A: call    sub_180088528
 * 00000001800CEA0F: nop
 * 00000001800CEA10: lea     rcx, [rbp+9F60h+var_10B0]
 * 00000001800CEA17: call    sub_180011570
 * 00000001800CEA1C: nop
 * 00000001800CEA1D: lea     rcx, [rbp+9F60h+var_1090]
 * 00000001800CEA24: call    sub_180011570
 * 00000001800CEA29: nop
 * 00000001800CEA2A: lea     rcx, dword_1801FB3F4
 * 00000001800CEA31: call    sub_18000C548
 * 00000001800CEA36: mov     rax, [rsi+rdi*8]
 * 00000001800CEA3A: mov     ecx, [r15+rax]
 * 00000001800CEA3E: cmp     cs:dword_1801FB3F8, ecx
 * 00000001800CEA44: jle     loc_1800CEB3D
 * 00000001800CEA4A: lea     rcx, dword_1801FB3F8
 * 00000001800CEA51: call    sub_18000C5B0
 * 00000001800CEA56: cmp     cs:dword_1801FB3F8, r14d
 * 00000001800CEA5D: jnz     loc_1800CEB3D
 * 00000001800CEA63: xor     edx, edx
 * 00000001800CEA65: lea     rcx, [rbp+9F60h+var_9F80]
 * 00000001800CEA69: call    sub_1800A8E58
 * 00000001800CEA6E: mov     bl, [rax]
 * 00000001800CEA70: call    sub_1800C27B8
 * 00000001800CEA75: mov     rdx, rax
 * 00000001800CEA78: mov     r8d, 584h
 * 00000001800CEA7E: lea     rcx, [rbp+9F60h+var_95E0]
 * 00000001800CEA85: call    sub_1800A8E40
 * 00000001800CEA8A: movups  xmm0, xmmword ptr [rax]
 * 00000001800CEA8D: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CEA93: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CEA97: mov     r9d, r12d
 * 00000001800CEA9A: mov     r8d, r12d
 * 00000001800CEA9D: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CEAA2: lea     rcx, [rbp+9F60h+var_57F0]
 * 00000001800CEAA9: call    sub_1800A8E0C
 * 00000001800CEAAE: movups  xmm6, xmmword ptr [rax]
 * 00000001800CEAB1: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CEAB5: call    sub_1800C50FC
 * 00000001800CEABA: mov     r8, rax
 * 00000001800CEABD: mov     r9d, r13d
 * 00000001800CEAC0: mov     edx, 5
 * 00000001800CEAC5: lea     rcx, [rbp+9F60h+var_1030]; Src
 * 00000001800CEACC: call    sub_180088448
 * 00000001800CEAD1: nop
 * 00000001800CEAD2: mov     r8, rax
 * 00000001800CEAD5: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CEADC: lea     rcx, [rbp+9F60h+var_1050]
 * 00000001800CEAE3: call    sub_18001DD3C
 * 00000001800CEAE8: nop
 * 00000001800CEAE9: lea     r8, aVertex; "/Vertex"
 * 00000001800CEAF0: mov     rdx, rax
 * 00000001800CEAF3: lea     rcx, [rbp+9F60h+var_73F0]
 * 00000001800CEAFA: call    sub_18001DC84
 * 00000001800CEAFF: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CEB04: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CEB09: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CEB0E: mov     rcx, rax
 * 00000001800CEB11: call    sub_180088528
 * 00000001800CEB16: nop
 * 00000001800CEB17: lea     rcx, [rbp+9F60h+var_1050]
 * 00000001800CEB1E: call    sub_180011570
 * 00000001800CEB23: nop
 * 00000001800CEB24: lea     rcx, [rbp+9F60h+var_1030]
 * 00000001800CEB2B: call    sub_180011570
 * 00000001800CEB30: nop
 * 00000001800CEB31: lea     rcx, dword_1801FB3F8
 * 00000001800CEB38: call    sub_18000C548
 * 00000001800CEB3D: mov     rax, [rsi+rdi*8]
 * 00000001800CEB41: mov     ecx, [r15+rax]
 * 00000001800CEB45: cmp     cs:dword_1801FB3FC, ecx
 * 00000001800CEB4B: jle     loc_1800CEC44
 * 00000001800CEB51: lea     rcx, dword_1801FB3FC
 * 00000001800CEB58: call    sub_18000C5B0
 * 00000001800CEB5D: cmp     cs:dword_1801FB3FC, r14d
 * 00000001800CEB64: jnz     loc_1800CEC44
 * 00000001800CEB6A: xor     edx, edx
 * 00000001800CEB6C: lea     rcx, [rbp+9F60h+var_9F7F]
 * 00000001800CEB70: call    sub_1800A8E58
 * 00000001800CEB75: mov     bl, [rax]
 * 00000001800CEB77: call    sub_1800C4FCC
 * 00000001800CEB7C: mov     rdx, rax
 * 00000001800CEB7F: mov     r8d, 1018h
 * 00000001800CEB85: lea     rcx, [rbp+9F60h+var_95D0]
 * 00000001800CEB8C: call    sub_1800A8E40
 * 00000001800CEB91: movups  xmm0, xmmword ptr [rax]
 * 00000001800CEB94: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CEB9A: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CEB9E: mov     r9d, r12d
 * 00000001800CEBA1: mov     r8d, r12d
 * 00000001800CEBA4: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CEBA9: lea     rcx, [rbp+9F60h+var_57D0]
 * 00000001800CEBB0: call    sub_1800A8E0C
 * 00000001800CEBB5: movups  xmm6, xmmword ptr [rax]
 * 00000001800CEBB8: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CEBBC: call    sub_1800C50FC
 * 00000001800CEBC1: mov     r8, rax
 * 00000001800CEBC4: mov     r9d, r13d
 * 00000001800CEBC7: mov     edx, 6
 * 00000001800CEBCC: lea     rcx, [rbp+9F60h+var_FD0]; Src
 * 00000001800CEBD3: call    sub_180088448
 * 00000001800CEBD8: nop
 * 00000001800CEBD9: mov     r8, rax
 * 00000001800CEBDC: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CEBE3: lea     rcx, [rbp+9F60h+var_FF0]
 * 00000001800CEBEA: call    sub_18001DD3C
 * 00000001800CEBEF: nop
 * 00000001800CEBF0: lea     r8, aVertex; "/Vertex"
 * 00000001800CEBF7: mov     rdx, rax
 * 00000001800CEBFA: lea     rcx, [rbp+9F60h+var_7410]
 * 00000001800CEC01: call    sub_18001DC84
 * 00000001800CEC06: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CEC0B: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CEC10: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CEC15: mov     rcx, rax
 * 00000001800CEC18: call    sub_180088528
 * 00000001800CEC1D: nop
 * 00000001800CEC1E: lea     rcx, [rbp+9F60h+var_FF0]
 * 00000001800CEC25: call    sub_180011570
 * 00000001800CEC2A: nop
 * 00000001800CEC2B: lea     rcx, [rbp+9F60h+var_FD0]
 * 00000001800CEC32: call    sub_180011570
 * 00000001800CEC37: nop
 * 00000001800CEC38: lea     rcx, dword_1801FB3FC
 * 00000001800CEC3F: call    sub_18000C548
 * 00000001800CEC44: mov     rax, [rsi+rdi*8]
 * 00000001800CEC48: mov     ecx, [r15+rax]
 * 00000001800CEC4C: cmp     cs:dword_1801FB400, ecx
 * 00000001800CEC52: jle     loc_1800CED4B
 * 00000001800CEC58: lea     rcx, dword_1801FB400
 * 00000001800CEC5F: call    sub_18000C5B0
 * 00000001800CEC64: cmp     cs:dword_1801FB400, r14d
 * 00000001800CEC6B: jnz     loc_1800CED4B
 * 00000001800CEC71: xor     edx, edx
 * 00000001800CEC73: lea     rcx, [rbp+9F60h+var_9F7E]
 * 00000001800CEC77: call    sub_1800A8E58
 * 00000001800CEC7C: mov     bl, [rax]
 * 00000001800CEC7E: call    sub_1800C4FCC
 * 00000001800CEC83: mov     rdx, rax
 * 00000001800CEC86: mov     r8d, 1018h
 * 00000001800CEC8C: lea     rcx, [rbp+9F60h+var_95C0]
 * 00000001800CEC93: call    sub_1800A8E40
 * 00000001800CEC98: movups  xmm0, xmmword ptr [rax]
 * 00000001800CEC9B: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CECA1: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CECA5: mov     r9d, r12d
 * 00000001800CECA8: mov     r8d, r12d
 * 00000001800CECAB: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CECB0: lea     rcx, [rbp+9F60h+var_57B0]
 * 00000001800CECB7: call    sub_1800A8E0C
 * 00000001800CECBC: movups  xmm6, xmmword ptr [rax]
 * 00000001800CECBF: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CECC3: call    sub_1800C50FC
 * 00000001800CECC8: mov     r8, rax
 * 00000001800CECCB: mov     r9d, r13d
 * 00000001800CECCE: mov     edx, 8
 * 00000001800CECD3: lea     rcx, [rbp+9F60h+var_F70]; Src
 * 00000001800CECDA: call    sub_180088448
 * 00000001800CECDF: nop
 * 00000001800CECE0: mov     r8, rax
 * 00000001800CECE3: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CECEA: lea     rcx, [rbp+9F60h+var_F90]
 * 00000001800CECF1: call    sub_18001DD3C
 * 00000001800CECF6: nop
 * 00000001800CECF7: lea     r8, aVertex; "/Vertex"
 * 00000001800CECFE: mov     rdx, rax
 * 00000001800CED01: lea     rcx, [rbp+9F60h+var_7450]
 * 00000001800CED08: call    sub_18001DC84
 * 00000001800CED0D: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CED12: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CED17: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CED1C: mov     rcx, rax
 * 00000001800CED1F: call    sub_180088528
 * 00000001800CED24: nop
 * 00000001800CED25: lea     rcx, [rbp+9F60h+var_F90]
 * 00000001800CED2C: call    sub_180011570
 * 00000001800CED31: nop
 * 00000001800CED32: lea     rcx, [rbp+9F60h+var_F70]
 * 00000001800CED39: call    sub_180011570
 * 00000001800CED3E: nop
 * 00000001800CED3F: lea     rcx, dword_1801FB400
 * 00000001800CED46: call    sub_18000C548
 * 00000001800CED4B: mov     rax, [rsi+rdi*8]
 * 00000001800CED4F: mov     ecx, [r15+rax]
 * 00000001800CED53: cmp     cs:dword_1801FB404, ecx
 * 00000001800CED59: jle     loc_1800CEE50
 * 00000001800CED5F: lea     rcx, dword_1801FB404
 * 00000001800CED66: call    sub_18000C5B0
 * 00000001800CED6B: cmp     cs:dword_1801FB404, r14d
 * 00000001800CED72: jnz     loc_1800CEE50
 * 00000001800CED78: xor     edx, edx
 * 00000001800CED7A: lea     rcx, [rbp+9F60h+var_9F7D]
 * 00000001800CED7E: call    sub_1800A8E58
 * 00000001800CED83: mov     bl, [rax]
 * 00000001800CED85: call    sub_1800C501C
 * 00000001800CED8A: mov     rdx, rax
 * 00000001800CED8D: mov     r8d, 70Ch
 * 00000001800CED93: lea     rcx, [rbp+9F60h+var_95B0]
 * 00000001800CED9A: call    sub_1800A8E40
 * 00000001800CED9F: movups  xmm0, xmmword ptr [rax]
 * 00000001800CEDA2: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CEDA8: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CEDAC: mov     r9d, r12d
 * 00000001800CEDAF: mov     r8d, r12d
 * 00000001800CEDB2: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CEDB7: lea     rcx, [rbp+9F60h+var_5790]
 * 00000001800CEDBE: call    sub_1800A8E0C
 * 00000001800CEDC3: movups  xmm6, xmmword ptr [rax]
 * 00000001800CEDC6: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CEDCA: call    sub_1800C50FC
 * 00000001800CEDCF: mov     r8, rax
 * 00000001800CEDD2: mov     r9d, r13d
 * 00000001800CEDD5: mov     rdx, r13
 * 00000001800CEDD8: lea     rcx, [rbp+9F60h+var_F10]; Src
 * 00000001800CEDDF: call    sub_180088448
 * 00000001800CEDE4: nop
 * 00000001800CEDE5: mov     r8, rax
 * 00000001800CEDE8: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CEDEF: lea     rcx, [rbp+9F60h+var_F30]
 * 00000001800CEDF6: call    sub_18001DD3C
 * 00000001800CEDFB: nop
 * 00000001800CEDFC: lea     r8, aVertex; "/Vertex"
 * 00000001800CEE03: mov     rdx, rax
 * 00000001800CEE06: lea     rcx, [rbp+9F60h+var_7470]
 * 00000001800CEE0D: call    sub_18001DC84
 * 00000001800CEE12: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CEE17: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CEE1C: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CEE21: mov     rcx, rax
 * 00000001800CEE24: call    sub_180088528
 * 00000001800CEE29: nop
 * 00000001800CEE2A: lea     rcx, [rbp+9F60h+var_F30]
 * 00000001800CEE31: call    sub_180011570
 * 00000001800CEE36: nop
 * 00000001800CEE37: lea     rcx, [rbp+9F60h+var_F10]
 * 00000001800CEE3E: call    sub_180011570
 * 00000001800CEE43: nop
 * 00000001800CEE44: lea     rcx, dword_1801FB404
 * 00000001800CEE4B: call    sub_18000C548
 * 00000001800CEE50: mov     rax, [rsi+rdi*8]
 * 00000001800CEE54: mov     ecx, [r15+rax]
 * 00000001800CEE58: cmp     cs:dword_1801FB408, ecx
 * 00000001800CEE5E: jle     loc_1800CEF57
 * 00000001800CEE64: lea     rcx, dword_1801FB408
 * 00000001800CEE6B: call    sub_18000C5B0
 * 00000001800CEE70: cmp     cs:dword_1801FB408, r14d
 * 00000001800CEE77: jnz     loc_1800CEF57
 * 00000001800CEE7D: xor     edx, edx
 * 00000001800CEE7F: lea     rcx, [rbp+9F60h+var_9F7C]
 * 00000001800CEE83: call    sub_1800A8E58
 * 00000001800CEE88: mov     bl, [rax]
 * 00000001800CEE8A: call    sub_1800C4FCC
 * 00000001800CEE8F: mov     rdx, rax
 * 00000001800CEE92: mov     r8d, 1018h
 * 00000001800CEE98: lea     rcx, [rbp+9F60h+var_95A0]
 * 00000001800CEE9F: call    sub_1800A8E40
 * 00000001800CEEA4: movups  xmm0, xmmword ptr [rax]
 * 00000001800CEEA7: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CEEAD: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CEEB1: mov     r9d, r12d
 * 00000001800CEEB4: mov     r8d, r12d
 * 00000001800CEEB7: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CEEBC: lea     rcx, [rbp+9F60h+var_5770]
 * 00000001800CEEC3: call    sub_1800A8E0C
 * 00000001800CEEC8: movups  xmm6, xmmword ptr [rax]
 * 00000001800CEECB: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CEECF: call    sub_1800C50FC
 * 00000001800CEED4: mov     r8, rax
 * 00000001800CEED7: mov     r9d, r13d
 * 00000001800CEEDA: mov     edx, 0Ah
 * 00000001800CEEDF: lea     rcx, [rbp+9F60h+var_EB0]; Src
 * 00000001800CEEE6: call    sub_180088448
 * 00000001800CEEEB: nop
 * 00000001800CEEEC: mov     r8, rax
 * 00000001800CEEEF: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CEEF6: lea     rcx, [rbp+9F60h+var_ED0]
 * 00000001800CEEFD: call    sub_18001DD3C
 * 00000001800CEF02: nop
 * 00000001800CEF03: lea     r8, aVertex; "/Vertex"
 * 00000001800CEF0A: mov     rdx, rax
 * 00000001800CEF0D: lea     rcx, [rbp+9F60h+var_74B0]
 * 00000001800CEF14: call    sub_18001DC84
 * 00000001800CEF19: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CEF1E: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CEF23: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CEF28: mov     rcx, rax
 * 00000001800CEF2B: call    sub_180088528
 * 00000001800CEF30: nop
 * 00000001800CEF31: lea     rcx, [rbp+9F60h+var_ED0]
 * 00000001800CEF38: call    sub_180011570
 * 00000001800CEF3D: nop
 * 00000001800CEF3E: lea     rcx, [rbp+9F60h+var_EB0]
 * 00000001800CEF45: call    sub_180011570
 * 00000001800CEF4A: nop
 * 00000001800CEF4B: lea     rcx, dword_1801FB408
 * 00000001800CEF52: call    sub_18000C548
 * 00000001800CEF57: mov     rax, [rsi+rdi*8]
 * 00000001800CEF5B: mov     ecx, [r15+rax]
 * 00000001800CEF5F: cmp     cs:dword_1801FB40C, ecx
 * 00000001800CEF65: jle     loc_1800CF05E
 * 00000001800CEF6B: lea     rcx, dword_1801FB40C
 * 00000001800CEF72: call    sub_18000C5B0
 * 00000001800CEF77: cmp     cs:dword_1801FB40C, r14d
 * 00000001800CEF7E: jnz     loc_1800CF05E
 * 00000001800CEF84: xor     edx, edx
 * 00000001800CEF86: lea     rcx, [rbp+9F60h+var_9F7B]
 * 00000001800CEF8A: call    sub_1800A8E58
 * 00000001800CEF8F: mov     bl, [rax]
 * 00000001800CEF91: call    sub_1800C4FCC
 * 00000001800CEF96: mov     rdx, rax
 * 00000001800CEF99: mov     r8d, 1018h
 * 00000001800CEF9F: lea     rcx, [rbp+9F60h+var_9590]
 * 00000001800CEFA6: call    sub_1800A8E40
 * 00000001800CEFAB: movups  xmm0, xmmword ptr [rax]
 * 00000001800CEFAE: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CEFB4: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CEFB8: mov     r9d, r12d
 * 00000001800CEFBB: mov     r8d, r12d
 * 00000001800CEFBE: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CEFC3: lea     rcx, [rbp+9F60h+var_5750]
 * 00000001800CEFCA: call    sub_1800A8E0C
 * 00000001800CEFCF: movups  xmm6, xmmword ptr [rax]
 * 00000001800CEFD2: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CEFD6: call    sub_1800C50FC
 * 00000001800CEFDB: mov     r8, rax
 * 00000001800CEFDE: mov     r9d, r13d
 * 00000001800CEFE1: mov     edx, 10h
 * 00000001800CEFE6: lea     rcx, [rbp+9F60h+var_E50]; Src
 * 00000001800CEFED: call    sub_180088448
 * 00000001800CEFF2: nop
 * 00000001800CEFF3: mov     r8, rax
 * 00000001800CEFF6: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CEFFD: lea     rcx, [rbp+9F60h+var_E70]
 * 00000001800CF004: call    sub_18001DD3C
 * 00000001800CF009: nop
 * 00000001800CF00A: lea     r8, aVertex; "/Vertex"
 * 00000001800CF011: mov     rdx, rax
 * 00000001800CF014: lea     rcx, [rbp+9F60h+var_74D0]
 * 00000001800CF01B: call    sub_18001DC84
 * 00000001800CF020: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CF025: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CF02A: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CF02F: mov     rcx, rax
 * 00000001800CF032: call    sub_180088528
 * 00000001800CF037: nop
 * 00000001800CF038: lea     rcx, [rbp+9F60h+var_E70]
 * 00000001800CF03F: call    sub_180011570
 * 00000001800CF044: nop
 * 00000001800CF045: lea     rcx, [rbp+9F60h+var_E50]
 * 00000001800CF04C: call    sub_180011570
 * 00000001800CF051: nop
 * 00000001800CF052: lea     rcx, dword_1801FB40C
 * 00000001800CF059: call    sub_18000C548
 * 00000001800CF05E: mov     rax, [rsi+rdi*8]
 * 00000001800CF062: mov     ecx, [r15+rax]
 * 00000001800CF066: cmp     cs:dword_1801FB410, ecx
 * 00000001800CF06C: jle     loc_1800CF165
 * 00000001800CF072: lea     rcx, dword_1801FB410
 * 00000001800CF079: call    sub_18000C5B0
 * 00000001800CF07E: cmp     cs:dword_1801FB410, r14d
 * 00000001800CF085: jnz     loc_1800CF165
 * 00000001800CF08B: xor     edx, edx
 * 00000001800CF08D: lea     rcx, [rbp+9F60h+var_9F7A]
 * 00000001800CF091: call    sub_1800A8E58
 * 00000001800CF096: mov     bl, [rax]
 * 00000001800CF098: call    sub_1800C4FCC
 * 00000001800CF09D: mov     rdx, rax
 * 00000001800CF0A0: mov     r8d, 1018h
 * 00000001800CF0A6: lea     rcx, [rbp+9F60h+var_9580]
 * 00000001800CF0AD: call    sub_1800A8E40
 * 00000001800CF0B2: movups  xmm0, xmmword ptr [rax]
 * 00000001800CF0B5: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CF0BB: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CF0BF: mov     r9d, r12d
 * 00000001800CF0C2: mov     r8d, r12d
 * 00000001800CF0C5: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CF0CA: lea     rcx, [rbp+9F60h+var_5730]
 * 00000001800CF0D1: call    sub_1800A8E0C
 * 00000001800CF0D6: movups  xmm6, xmmword ptr [rax]
 * 00000001800CF0D9: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CF0DD: call    sub_1800C50FC
 * 00000001800CF0E2: mov     r8, rax
 * 00000001800CF0E5: mov     r9d, r13d
 * 00000001800CF0E8: mov     edx, 12h
 * 00000001800CF0ED: lea     rcx, [rbp+9F60h+var_DF0]; Src
 * 00000001800CF0F4: call    sub_180088448
 * 00000001800CF0F9: nop
 * 00000001800CF0FA: mov     r8, rax
 * 00000001800CF0FD: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CF104: lea     rcx, [rbp+9F60h+var_E10]
 * 00000001800CF10B: call    sub_18001DD3C
 * 00000001800CF110: nop
 * 00000001800CF111: lea     r8, aVertex; "/Vertex"
 * 00000001800CF118: mov     rdx, rax
 * 00000001800CF11B: lea     rcx, [rbp+9F60h+var_7510]
 * 00000001800CF122: call    sub_18001DC84
 * 00000001800CF127: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CF12C: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CF131: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CF136: mov     rcx, rax
 * 00000001800CF139: call    sub_180088528
 * 00000001800CF13E: nop
 * 00000001800CF13F: lea     rcx, [rbp+9F60h+var_E10]
 * 00000001800CF146: call    sub_180011570
 * 00000001800CF14B: nop
 * 00000001800CF14C: lea     rcx, [rbp+9F60h+var_DF0]
 * 00000001800CF153: call    sub_180011570
 * 00000001800CF158: nop
 * 00000001800CF159: lea     rcx, dword_1801FB410
 * 00000001800CF160: call    sub_18000C548
 * 00000001800CF165: mov     rax, [rsi+rdi*8]
 * 00000001800CF169: mov     ecx, [r15+rax]
 * 00000001800CF16D: cmp     cs:dword_1801FB414, ecx
 * 00000001800CF173: jle     loc_1800CF26C
 * 00000001800CF179: lea     rcx, dword_1801FB414
 * 00000001800CF180: call    sub_18000C5B0
 * 00000001800CF185: cmp     cs:dword_1801FB414, r14d
 * 00000001800CF18C: jnz     loc_1800CF26C
 * 00000001800CF192: xor     edx, edx
 * 00000001800CF194: lea     rcx, [rbp+9F60h+var_9F79]
 * 00000001800CF198: call    sub_1800A8E58
 * 00000001800CF19D: mov     bl, [rax]
 * 00000001800CF19F: call    sub_1800C4FCC
 * 00000001800CF1A4: mov     rdx, rax
 * 00000001800CF1A7: mov     r8d, 1018h
 * 00000001800CF1AD: lea     rcx, [rbp+9F60h+var_9570]
 * 00000001800CF1B4: call    sub_1800A8E40
 * 00000001800CF1B9: movups  xmm0, xmmword ptr [rax]
 * 00000001800CF1BC: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CF1C2: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CF1C6: mov     r9d, r12d
 * 00000001800CF1C9: mov     r8d, r12d
 * 00000001800CF1CC: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CF1D1: lea     rcx, [rbp+9F60h+var_5710]
 * 00000001800CF1D8: call    sub_1800A8E0C
 * 00000001800CF1DD: movups  xmm6, xmmword ptr [rax]
 * 00000001800CF1E0: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CF1E4: call    sub_1800C50FC
 * 00000001800CF1E9: mov     r8, rax
 * 00000001800CF1EC: mov     r9d, r13d
 * 00000001800CF1EF: mov     edx, 14h
 * 00000001800CF1F4: lea     rcx, [rbp+9F60h+var_D90]; Src
 * 00000001800CF1FB: call    sub_180088448
 * 00000001800CF200: nop
 * 00000001800CF201: mov     r8, rax
 * 00000001800CF204: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CF20B: lea     rcx, [rbp+9F60h+var_DB0]
 * 00000001800CF212: call    sub_18001DD3C
 * 00000001800CF217: nop
 * 00000001800CF218: lea     r8, aVertex; "/Vertex"
 * 00000001800CF21F: mov     rdx, rax
 * 00000001800CF222: lea     rcx, [rbp+9F60h+var_7530]
 * 00000001800CF229: call    sub_18001DC84
 * 00000001800CF22E: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CF233: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CF238: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CF23D: mov     rcx, rax
 * 00000001800CF240: call    sub_180088528
 * 00000001800CF245: nop
 * 00000001800CF246: lea     rcx, [rbp+9F60h+var_DB0]
 * 00000001800CF24D: call    sub_180011570
 * 00000001800CF252: nop
 * 00000001800CF253: lea     rcx, [rbp+9F60h+var_D90]
 * 00000001800CF25A: call    sub_180011570
 * 00000001800CF25F: nop
 * 00000001800CF260: lea     rcx, dword_1801FB414
 * 00000001800CF267: call    sub_18000C548
 * 00000001800CF26C: mov     rax, [rsi+rdi*8]
 * 00000001800CF270: mov     ecx, [r15+rax]
 * 00000001800CF274: cmp     cs:dword_1801FB418, ecx
 * 00000001800CF27A: jle     loc_1800CF373
 * 00000001800CF280: lea     rcx, dword_1801FB418
 * 00000001800CF287: call    sub_18000C5B0
 * 00000001800CF28C: cmp     cs:dword_1801FB418, r14d
 * 00000001800CF293: jnz     loc_1800CF373
 * 00000001800CF299: xor     edx, edx
 * 00000001800CF29B: lea     rcx, [rbp+9F60h+var_9F78]
 * 00000001800CF29F: call    sub_1800A8E58
 * 00000001800CF2A4: mov     bl, [rax]
 * 00000001800CF2A6: call    sub_1800C4FCC
 * 00000001800CF2AB: mov     rdx, rax
 * 00000001800CF2AE: mov     r8d, 1018h
 * 00000001800CF2B4: lea     rcx, [rbp+9F60h+var_9560]
 * 00000001800CF2BB: call    sub_1800A8E40
 * 00000001800CF2C0: movups  xmm0, xmmword ptr [rax]
 * 00000001800CF2C3: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CF2C9: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CF2CD: mov     r9d, r12d
 * 00000001800CF2D0: mov     r8d, r12d
 * 00000001800CF2D3: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CF2D8: lea     rcx, [rbp+9F60h+var_56F0]
 * 00000001800CF2DF: call    sub_1800A8E0C
 * 00000001800CF2E4: movups  xmm6, xmmword ptr [rax]
 * 00000001800CF2E7: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CF2EB: call    sub_1800C50FC
 * 00000001800CF2F0: mov     r8, rax
 * 00000001800CF2F3: mov     r9d, r13d
 * 00000001800CF2F6: mov     edx, 16h
 * 00000001800CF2FB: lea     rcx, [rbp+9F60h+var_D30]; Src
 * 00000001800CF302: call    sub_180088448
 * 00000001800CF307: nop
 * 00000001800CF308: mov     r8, rax
 * 00000001800CF30B: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CF312: lea     rcx, [rbp+9F60h+var_D50]
 * 00000001800CF319: call    sub_18001DD3C
 * 00000001800CF31E: nop
 * 00000001800CF31F: lea     r8, aVertex; "/Vertex"
 * 00000001800CF326: mov     rdx, rax
 * 00000001800CF329: lea     rcx, [rbp+9F60h+var_7570]
 * 00000001800CF330: call    sub_18001DC84
 * 00000001800CF335: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CF33A: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CF33F: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CF344: mov     rcx, rax
 * 00000001800CF347: call    sub_180088528
 * 00000001800CF34C: nop
 * 00000001800CF34D: lea     rcx, [rbp+9F60h+var_D50]
 * 00000001800CF354: call    sub_180011570
 * 00000001800CF359: nop
 * 00000001800CF35A: lea     rcx, [rbp+9F60h+var_D30]
 * 00000001800CF361: call    sub_180011570
 * 00000001800CF366: nop
 * 00000001800CF367: lea     rcx, dword_1801FB418
 * 00000001800CF36E: call    sub_18000C548
 * 00000001800CF373: mov     rax, [rsi+rdi*8]
 * 00000001800CF377: mov     ecx, [r15+rax]
 * 00000001800CF37B: cmp     cs:dword_1801FB41C, ecx
 * 00000001800CF381: jle     loc_1800CF47A
 * 00000001800CF387: lea     rcx, dword_1801FB41C
 * 00000001800CF38E: call    sub_18000C5B0
 * 00000001800CF393: cmp     cs:dword_1801FB41C, r14d
 * 00000001800CF39A: jnz     loc_1800CF47A
 * 00000001800CF3A0: xor     edx, edx
 * 00000001800CF3A2: lea     rcx, [rbp+9F60h+var_9F77]
 * 00000001800CF3A6: call    sub_1800A8E58
 * 00000001800CF3AB: mov     bl, [rax]
 * 00000001800CF3AD: call    sub_1800C4FCC
 * 00000001800CF3B2: mov     rdx, rax
 * 00000001800CF3B5: mov     r8d, 1018h
 * 00000001800CF3BB: lea     rcx, [rbp+9F60h+var_9550]
 * 00000001800CF3C2: call    sub_1800A8E40
 * 00000001800CF3C7: movups  xmm0, xmmword ptr [rax]
 * 00000001800CF3CA: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CF3D0: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CF3D4: mov     r9d, r12d
 * 00000001800CF3D7: mov     r8d, r12d
 * 00000001800CF3DA: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CF3DF: lea     rcx, [rbp+9F60h+var_56D0]
 * 00000001800CF3E6: call    sub_1800A8E0C
 * 00000001800CF3EB: movups  xmm6, xmmword ptr [rax]
 * 00000001800CF3EE: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CF3F2: call    sub_1800C50FC
 * 00000001800CF3F7: mov     r8, rax
 * 00000001800CF3FA: mov     r9d, r13d
 * 00000001800CF3FD: mov     edx, 18h
 * 00000001800CF402: lea     rcx, [rbp+9F60h+var_CD0]; Src
 * 00000001800CF409: call    sub_180088448
 * 00000001800CF40E: nop
 * 00000001800CF40F: mov     r8, rax
 * 00000001800CF412: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CF419: lea     rcx, [rbp+9F60h+var_CF0]
 * 00000001800CF420: call    sub_18001DD3C
 * 00000001800CF425: nop
 * 00000001800CF426: lea     r8, aVertex; "/Vertex"
 * 00000001800CF42D: mov     rdx, rax
 * 00000001800CF430: lea     rcx, [rbp+9F60h+var_7590]
 * 00000001800CF437: call    sub_18001DC84
 * 00000001800CF43C: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CF441: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CF446: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CF44B: mov     rcx, rax
 * 00000001800CF44E: call    sub_180088528
 * 00000001800CF453: nop
 * 00000001800CF454: lea     rcx, [rbp+9F60h+var_CF0]
 * 00000001800CF45B: call    sub_180011570
 * 00000001800CF460: nop
 * 00000001800CF461: lea     rcx, [rbp+9F60h+var_CD0]
 * 00000001800CF468: call    sub_180011570
 * 00000001800CF46D: nop
 * 00000001800CF46E: lea     rcx, dword_1801FB41C
 * 00000001800CF475: call    sub_18000C548
 * 00000001800CF47A: mov     rax, [rsi+rdi*8]
 * 00000001800CF47E: mov     ecx, [r15+rax]
 * 00000001800CF482: cmp     cs:dword_1801FB420, ecx
 * 00000001800CF488: jle     loc_1800CF581
 * 00000001800CF48E: lea     rcx, dword_1801FB420
 * 00000001800CF495: call    sub_18000C5B0
 * 00000001800CF49A: cmp     cs:dword_1801FB420, r14d
 * 00000001800CF4A1: jnz     loc_1800CF581
 * 00000001800CF4A7: xor     edx, edx
 * 00000001800CF4A9: lea     rcx, [rbp+9F60h+var_9F76]
 * 00000001800CF4AD: call    sub_1800A8E58
 * 00000001800CF4B2: mov     bl, [rax]
 * 00000001800CF4B4: call    sub_1800C4FCC
 * 00000001800CF4B9: mov     rdx, rax
 * 00000001800CF4BC: mov     r8d, 1018h
 * 00000001800CF4C2: lea     rcx, [rbp+9F60h+var_9540]
 * 00000001800CF4C9: call    sub_1800A8E40
 * 00000001800CF4CE: movups  xmm0, xmmword ptr [rax]
 * 00000001800CF4D1: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CF4D7: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CF4DB: mov     r9d, r12d
 * 00000001800CF4DE: mov     r8d, r12d
 * 00000001800CF4E1: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CF4E6: lea     rcx, [rbp+9F60h+var_56B0]
 * 00000001800CF4ED: call    sub_1800A8E0C
 * 00000001800CF4F2: movups  xmm6, xmmword ptr [rax]
 * 00000001800CF4F5: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CF4F9: call    sub_1800C50FC
 * 00000001800CF4FE: mov     r8, rax
 * 00000001800CF501: mov     r9d, r13d
 * 00000001800CF504: mov     edx, 1Ah
 * 00000001800CF509: lea     rcx, [rbp+9F60h+var_C70]; Src
 * 00000001800CF510: call    sub_180088448
 * 00000001800CF515: nop
 * 00000001800CF516: mov     r8, rax
 * 00000001800CF519: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CF520: lea     rcx, [rbp+9F60h+var_C90]
 * 00000001800CF527: call    sub_18001DD3C
 * 00000001800CF52C: nop
 * 00000001800CF52D: lea     r8, aVertex; "/Vertex"
 * 00000001800CF534: mov     rdx, rax
 * 00000001800CF537: lea     rcx, [rbp+9F60h+var_75D0]
 * 00000001800CF53E: call    sub_18001DC84
 * 00000001800CF543: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CF548: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CF54D: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CF552: mov     rcx, rax
 * 00000001800CF555: call    sub_180088528
 * 00000001800CF55A: nop
 * 00000001800CF55B: lea     rcx, [rbp+9F60h+var_C90]
 * 00000001800CF562: call    sub_180011570
 * 00000001800CF567: nop
 * 00000001800CF568: lea     rcx, [rbp+9F60h+var_C70]
 * 00000001800CF56F: call    sub_180011570
 * 00000001800CF574: nop
 * 00000001800CF575: lea     rcx, dword_1801FB420
 * 00000001800CF57C: call    sub_18000C548
 * 00000001800CF581: mov     rax, [rsi+rdi*8]
 * 00000001800CF585: mov     eax, [r15+rax]
 * 00000001800CF589: cmp     cs:dword_1801FB424, eax
 * 00000001800CF58F: jle     loc_1800CF688
 * 00000001800CF595: lea     rcx, dword_1801FB424
 * 00000001800CF59C: call    sub_18000C5B0
 * 00000001800CF5A1: cmp     cs:dword_1801FB424, r14d
 * 00000001800CF5A8: jnz     loc_1800CF688
 * 00000001800CF5AE: xor     edx, edx
 * 00000001800CF5B0: lea     rcx, [rbp+9F60h+var_9F75]
 * 00000001800CF5B4: call    sub_1800A8E58
 * 00000001800CF5B9: mov     bl, [rax]
 * 00000001800CF5BB: call    sub_1800C505C
 * 00000001800CF5C0: mov     rdx, rax
 * 00000001800CF5C3: mov     r8d, 1A18h
 * 00000001800CF5C9: lea     rcx, [rbp+9F60h+var_9530]
 * 00000001800CF5D0: call    sub_1800A8E40
 * 00000001800CF5D5: movups  xmm0, xmmword ptr [rax]
 * 00000001800CF5D8: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CF5DE: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CF5E2: mov     r9d, r12d
 * 00000001800CF5E5: mov     r8d, r12d
 * 00000001800CF5E8: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CF5ED: lea     rcx, [rbp+9F60h+var_5690]
 * 00000001800CF5F4: call    sub_1800A8E0C
 * 00000001800CF5F9: movups  xmm6, xmmword ptr [rax]
 * 00000001800CF5FC: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CF600: call    sub_1800C50FC
 * 00000001800CF605: mov     r8, rax
 * 00000001800CF608: mov     r9d, r13d
 * 00000001800CF60B: mov     edx, 20h ; ' '
 * 00000001800CF610: lea     rcx, [rbp+9F60h+var_C10]; Src
 * 00000001800CF617: call    sub_180088448
 * 00000001800CF61C: nop
 * 00000001800CF61D: mov     r8, rax
 * 00000001800CF620: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CF627: lea     rcx, [rbp+9F60h+var_C30]
 * 00000001800CF62E: call    sub_18001DD3C
 * 00000001800CF633: nop
 * 00000001800CF634: lea     r8, aVertex; "/Vertex"
 * 00000001800CF63B: mov     rdx, rax
 * 00000001800CF63E: lea     rcx, [rbp+9F60h+var_75F0]
 * 00000001800CF645: call    sub_18001DC84
 * 00000001800CF64A: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CF64F: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CF654: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CF659: mov     rcx, rax
 * 00000001800CF65C: call    sub_180088528
 * 00000001800CF661: nop
 * 00000001800CF662: lea     rcx, [rbp+9F60h+var_C30]
 * 00000001800CF669: call    sub_180011570
 * 00000001800CF66E: nop
 * 00000001800CF66F: lea     rcx, [rbp+9F60h+var_C10]
 * 00000001800CF676: call    sub_180011570
 * 00000001800CF67B: nop
 * 00000001800CF67C: lea     rcx, dword_1801FB424
 * 00000001800CF683: call    sub_18000C548
 * 00000001800CF688: mov     rax, [rsi+rdi*8]
 * 00000001800CF68C: mov     ecx, [r15+rax]
 * 00000001800CF690: cmp     cs:dword_1801FB428, ecx
 * 00000001800CF696: jle     loc_1800CF78F
 * 00000001800CF69C: lea     rcx, dword_1801FB428
 * 00000001800CF6A3: call    sub_18000C5B0
 * 00000001800CF6A8: cmp     cs:dword_1801FB428, r14d
 * 00000001800CF6AF: jnz     loc_1800CF78F
 * 00000001800CF6B5: xor     edx, edx
 * 00000001800CF6B7: lea     rcx, [rbp+9F60h+var_9F74]
 * 00000001800CF6BB: call    sub_1800A8E58
 * 00000001800CF6C0: mov     bl, [rax]
 * 00000001800CF6C2: call    sub_1800C2828
 * 00000001800CF6C7: mov     rdx, rax
 * 00000001800CF6CA: mov     r8d, 9A8h
 * 00000001800CF6D0: lea     rcx, [rbp+9F60h+var_9520]
 * 00000001800CF6D7: call    sub_1800A8E40
 * 00000001800CF6DC: movups  xmm0, xmmword ptr [rax]
 * 00000001800CF6DF: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CF6E5: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CF6E9: mov     r9d, r12d
 * 00000001800CF6EC: mov     r8d, r12d
 * 00000001800CF6EF: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CF6F4: lea     rcx, [rbp+9F60h+var_5670]
 * 00000001800CF6FB: call    sub_1800A8E0C
 * 00000001800CF700: movups  xmm6, xmmword ptr [rax]
 * 00000001800CF703: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CF707: call    sub_1800C50FC
 * 00000001800CF70C: mov     r8, rax
 * 00000001800CF70F: mov     r9d, r13d
 * 00000001800CF712: mov     edx, 21h ; '!'
 * 00000001800CF717: lea     rcx, [rbp+9F60h+var_BB0]; Src
 * 00000001800CF71E: call    sub_180088448
 * 00000001800CF723: nop
 * 00000001800CF724: mov     r8, rax
 * 00000001800CF727: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CF72E: lea     rcx, [rbp+9F60h+var_BD0]
 * 00000001800CF735: call    sub_18001DD3C
 * 00000001800CF73A: nop
 * 00000001800CF73B: lea     r8, aVertex; "/Vertex"
 * 00000001800CF742: mov     rdx, rax
 * 00000001800CF745: lea     rcx, [rbp+9F60h+var_7630]
 * 00000001800CF74C: call    sub_18001DC84
 * 00000001800CF751: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CF756: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CF75B: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CF760: mov     rcx, rax
 * 00000001800CF763: call    sub_180088528
 * 00000001800CF768: nop
 * 00000001800CF769: lea     rcx, [rbp+9F60h+var_BD0]
 * 00000001800CF770: call    sub_180011570
 * 00000001800CF775: nop
 * 00000001800CF776: lea     rcx, [rbp+9F60h+var_BB0]
 * 00000001800CF77D: call    sub_180011570
 * 00000001800CF782: nop
 * 00000001800CF783: lea     rcx, dword_1801FB428
 * 00000001800CF78A: call    sub_18000C548
 * 00000001800CF78F: mov     rax, [rsi+rdi*8]
 * 00000001800CF793: mov     ecx, [r15+rax]
 * 00000001800CF797: cmp     cs:dword_1801FB42C, ecx
 * 00000001800CF79D: jle     loc_1800CF896
 * 00000001800CF7A3: lea     rcx, dword_1801FB42C
 * 00000001800CF7AA: call    sub_18000C5B0
 * 00000001800CF7AF: cmp     cs:dword_1801FB42C, r14d
 * 00000001800CF7B6: jnz     loc_1800CF896
 * 00000001800CF7BC: xor     edx, edx
 * 00000001800CF7BE: lea     rcx, [rbp+9F60h+var_9F73]
 * 00000001800CF7C2: call    sub_1800A8E58
 * 00000001800CF7C7: mov     bl, [rax]
 * 00000001800CF7C9: call    sub_1800C505C
 * 00000001800CF7CE: mov     rdx, rax
 * 00000001800CF7D1: mov     r8d, 1A18h
 * 00000001800CF7D7: lea     rcx, [rbp+9F60h+var_9510]
 * 00000001800CF7DE: call    sub_1800A8E40
 * 00000001800CF7E3: movups  xmm0, xmmword ptr [rax]
 * 00000001800CF7E6: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CF7EC: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CF7F0: mov     r9d, r12d
 * 00000001800CF7F3: mov     r8d, r12d
 * 00000001800CF7F6: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CF7FB: lea     rcx, [rbp+9F60h+var_5650]
 * 00000001800CF802: call    sub_1800A8E0C
 * 00000001800CF807: movups  xmm6, xmmword ptr [rax]
 * 00000001800CF80A: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CF80E: call    sub_1800C50FC
 * 00000001800CF813: mov     r8, rax
 * 00000001800CF816: mov     r9d, r13d
 * 00000001800CF819: mov     edx, 22h ; '"'
 * 00000001800CF81E: lea     rcx, [rbp+9F60h+var_B50]; Src
 * 00000001800CF825: call    sub_180088448
 * 00000001800CF82A: nop
 * 00000001800CF82B: mov     r8, rax
 * 00000001800CF82E: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CF835: lea     rcx, [rbp+9F60h+var_B70]
 * 00000001800CF83C: call    sub_18001DD3C
 * 00000001800CF841: nop
 * 00000001800CF842: lea     r8, aVertex; "/Vertex"
 * 00000001800CF849: mov     rdx, rax
 * 00000001800CF84C: lea     rcx, [rbp+9F60h+var_7650]
 * 00000001800CF853: call    sub_18001DC84
 * 00000001800CF858: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CF85D: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CF862: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CF867: mov     rcx, rax
 * 00000001800CF86A: call    sub_180088528
 * 00000001800CF86F: nop
 * 00000001800CF870: lea     rcx, [rbp+9F60h+var_B70]
 * 00000001800CF877: call    sub_180011570
 * 00000001800CF87C: nop
 * 00000001800CF87D: lea     rcx, [rbp+9F60h+var_B50]
 * 00000001800CF884: call    sub_180011570
 * 00000001800CF889: nop
 * 00000001800CF88A: lea     rcx, dword_1801FB42C
 * 00000001800CF891: call    sub_18000C548
 * 00000001800CF896: mov     rax, [rsi+rdi*8]
 * 00000001800CF89A: mov     ecx, [r15+rax]
 * 00000001800CF89E: cmp     cs:dword_1801FB430, ecx
 * 00000001800CF8A4: jle     loc_1800CF99D
 * 00000001800CF8AA: lea     rcx, dword_1801FB430
 * 00000001800CF8B1: call    sub_18000C5B0
 * 00000001800CF8B6: cmp     cs:dword_1801FB430, r14d
 * 00000001800CF8BD: jnz     loc_1800CF99D
 * 00000001800CF8C3: xor     edx, edx
 * 00000001800CF8C5: lea     rcx, [rbp+9F60h+var_9F72]
 * 00000001800CF8C9: call    sub_1800A8E58
 * 00000001800CF8CE: mov     bl, [rax]
 * 00000001800CF8D0: call    sub_1800C505C
 * 00000001800CF8D5: mov     rdx, rax
 * 00000001800CF8D8: mov     r8d, 1A18h
 * 00000001800CF8DE: lea     rcx, [rbp+9F60h+var_9500]
 * 00000001800CF8E5: call    sub_1800A8E40
 * 00000001800CF8EA: movups  xmm0, xmmword ptr [rax]
 * 00000001800CF8ED: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CF8F3: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CF8F7: mov     r9d, r12d
 * 00000001800CF8FA: mov     r8d, r12d
 * 00000001800CF8FD: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CF902: lea     rcx, [rbp+9F60h+var_5630]
 * 00000001800CF909: call    sub_1800A8E0C
 * 00000001800CF90E: movups  xmm6, xmmword ptr [rax]
 * 00000001800CF911: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CF915: call    sub_1800C50FC
 * 00000001800CF91A: mov     r8, rax
 * 00000001800CF91D: mov     r9d, r13d
 * 00000001800CF920: mov     edx, 28h ; '('
 * 00000001800CF925: lea     rcx, [rbp+9F60h+var_AF0]; Src
 * 00000001800CF92C: call    sub_180088448
 * 00000001800CF931: nop
 * 00000001800CF932: mov     r8, rax
 * 00000001800CF935: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CF93C: lea     rcx, [rbp+9F60h+var_B10]
 * 00000001800CF943: call    sub_18001DD3C
 * 00000001800CF948: nop
 * 00000001800CF949: lea     r8, aVertex; "/Vertex"
 * 00000001800CF950: mov     rdx, rax
 * 00000001800CF953: lea     rcx, [rbp+9F60h+var_7690]
 * 00000001800CF95A: call    sub_18001DC84
 * 00000001800CF95F: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CF964: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CF969: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CF96E: mov     rcx, rax
 * 00000001800CF971: call    sub_180088528
 * 00000001800CF976: nop
 * 00000001800CF977: lea     rcx, [rbp+9F60h+var_B10]
 * 00000001800CF97E: call    sub_180011570
 * 00000001800CF983: nop
 * 00000001800CF984: lea     rcx, [rbp+9F60h+var_AF0]
 * 00000001800CF98B: call    sub_180011570
 * 00000001800CF990: nop
 * 00000001800CF991: lea     rcx, dword_1801FB430
 * 00000001800CF998: call    sub_18000C548
 * 00000001800CF99D: mov     rax, [rsi+rdi*8]
 * 00000001800CF9A1: mov     ecx, [r15+rax]
 * 00000001800CF9A5: cmp     cs:dword_1801FB434, ecx
 * 00000001800CF9AB: jle     loc_1800CFAA4
 * 00000001800CF9B1: lea     rcx, dword_1801FB434
 * 00000001800CF9B8: call    sub_18000C5B0
 * 00000001800CF9BD: cmp     cs:dword_1801FB434, r14d
 * 00000001800CF9C4: jnz     loc_1800CFAA4
 * 00000001800CF9CA: xor     edx, edx
 * 00000001800CF9CC: lea     rcx, [rbp+9F60h+var_9F71]
 * 00000001800CF9D0: call    sub_1800A8E58
 * 00000001800CF9D5: mov     bl, [rax]
 * 00000001800CF9D7: call    sub_1800C506C
 * 00000001800CF9DC: mov     rdx, rax
 * 00000001800CF9DF: mov     r8d, 0B3Ch
 * 00000001800CF9E5: lea     rcx, [rbp+9F60h+var_94F0]
 * 00000001800CF9EC: call    sub_1800A8E40
 * 00000001800CF9F1: movups  xmm0, xmmword ptr [rax]
 * 00000001800CF9F4: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CF9FA: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CF9FE: mov     r9d, r12d
 * 00000001800CFA01: mov     r8d, r12d
 * 00000001800CFA04: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CFA09: lea     rcx, [rbp+9F60h+var_5610]
 * 00000001800CFA10: call    sub_1800A8E0C
 * 00000001800CFA15: movups  xmm6, xmmword ptr [rax]
 * 00000001800CFA18: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CFA1C: call    sub_1800C50FC
 * 00000001800CFA21: mov     r8, rax
 * 00000001800CFA24: mov     r9d, r13d
 * 00000001800CFA27: mov     edx, 29h ; ')'
 * 00000001800CFA2C: lea     rcx, [rbp+9F60h+var_A90]; Src
 * 00000001800CFA33: call    sub_180088448
 * 00000001800CFA38: nop
 * 00000001800CFA39: mov     r8, rax
 * 00000001800CFA3C: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CFA43: lea     rcx, [rbp+9F60h+var_AB0]
 * 00000001800CFA4A: call    sub_18001DD3C
 * 00000001800CFA4F: nop
 * 00000001800CFA50: lea     r8, aVertex; "/Vertex"
 * 00000001800CFA57: mov     rdx, rax
 * 00000001800CFA5A: lea     rcx, [rbp+9F60h+var_76B0]
 * 00000001800CFA61: call    sub_18001DC84
 * 00000001800CFA66: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CFA6B: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CFA70: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CFA75: mov     rcx, rax
 * 00000001800CFA78: call    sub_180088528
 * 00000001800CFA7D: nop
 * 00000001800CFA7E: lea     rcx, [rbp+9F60h+var_AB0]
 * 00000001800CFA85: call    sub_180011570
 * 00000001800CFA8A: nop
 * 00000001800CFA8B: lea     rcx, [rbp+9F60h+var_A90]
 * 00000001800CFA92: call    sub_180011570
 * 00000001800CFA97: nop
 * 00000001800CFA98: lea     rcx, dword_1801FB434
 * 00000001800CFA9F: call    sub_18000C548
 * 00000001800CFAA4: mov     rax, [rsi+rdi*8]
 * 00000001800CFAA8: mov     ecx, [r15+rax]
 * 00000001800CFAAC: cmp     cs:dword_1801FB438, ecx
 * 00000001800CFAB2: jle     loc_1800CFBAB
 * 00000001800CFAB8: lea     rcx, dword_1801FB438
 * 00000001800CFABF: call    sub_18000C5B0
 * 00000001800CFAC4: cmp     cs:dword_1801FB438, r14d
 * 00000001800CFACB: jnz     loc_1800CFBAB
 * 00000001800CFAD1: xor     edx, edx
 * 00000001800CFAD3: lea     rcx, [rbp+9F60h+var_9F70]
 * 00000001800CFAD7: call    sub_1800A8E58
 * 00000001800CFADC: mov     bl, [rax]
 * 00000001800CFADE: call    sub_1800C505C
 * 00000001800CFAE3: mov     rdx, rax
 * 00000001800CFAE6: mov     r8d, 1A18h
 * 00000001800CFAEC: lea     rcx, [rbp+9F60h+var_94E0]
 * 00000001800CFAF3: call    sub_1800A8E40
 * 00000001800CFAF8: movups  xmm0, xmmword ptr [rax]
 * 00000001800CFAFB: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CFB01: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CFB05: mov     r9d, r12d
 * 00000001800CFB08: mov     r8d, r12d
 * 00000001800CFB0B: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CFB10: lea     rcx, [rbp+9F60h+var_55F0]
 * 00000001800CFB17: call    sub_1800A8E0C
 * 00000001800CFB1C: movups  xmm6, xmmword ptr [rax]
 * 00000001800CFB1F: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CFB23: call    sub_1800C50FC
 * 00000001800CFB28: mov     r8, rax
 * 00000001800CFB2B: mov     r9d, r13d
 * 00000001800CFB2E: mov     edx, 2Ah ; '*'
 * 00000001800CFB33: lea     rcx, [rbp+9F60h+var_A30]; Src
 * 00000001800CFB3A: call    sub_180088448
 * 00000001800CFB3F: nop
 * 00000001800CFB40: mov     r8, rax
 * 00000001800CFB43: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CFB4A: lea     rcx, [rbp+9F60h+var_A50]
 * 00000001800CFB51: call    sub_18001DD3C
 * 00000001800CFB56: nop
 * 00000001800CFB57: lea     r8, aVertex; "/Vertex"
 * 00000001800CFB5E: mov     rdx, rax
 * 00000001800CFB61: lea     rcx, [rbp+9F60h+var_76F0]
 * 00000001800CFB68: call    sub_18001DC84
 * 00000001800CFB6D: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CFB72: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CFB77: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CFB7C: mov     rcx, rax
 * 00000001800CFB7F: call    sub_180088528
 * 00000001800CFB84: nop
 * 00000001800CFB85: lea     rcx, [rbp+9F60h+var_A50]
 * 00000001800CFB8C: call    sub_180011570
 * 00000001800CFB91: nop
 * 00000001800CFB92: lea     rcx, [rbp+9F60h+var_A30]
 * 00000001800CFB99: call    sub_180011570
 * 00000001800CFB9E: nop
 * 00000001800CFB9F: lea     rcx, dword_1801FB438
 * 00000001800CFBA6: call    sub_18000C548
 * 00000001800CFBAB: mov     rax, [rsi+rdi*8]
 * 00000001800CFBAF: mov     ecx, [r15+rax]
 * 00000001800CFBB3: cmp     cs:dword_1801FB43C, ecx
 * 00000001800CFBB9: jle     loc_1800CFCB2
 * 00000001800CFBBF: lea     rcx, dword_1801FB43C
 * 00000001800CFBC6: call    sub_18000C5B0
 * 00000001800CFBCB: cmp     cs:dword_1801FB43C, r14d
 * 00000001800CFBD2: jnz     loc_1800CFCB2
 * 00000001800CFBD8: xor     edx, edx
 * 00000001800CFBDA: lea     rcx, [rbp+9F60h+var_9F6F]
 * 00000001800CFBDE: call    sub_1800A8E58
 * 00000001800CFBE3: mov     bl, [rax]
 * 00000001800CFBE5: call    sub_1800C505C
 * 00000001800CFBEA: mov     rdx, rax
 * 00000001800CFBED: mov     r8d, 1A18h
 * 00000001800CFBF3: lea     rcx, [rbp+9F60h+var_94D0]
 * 00000001800CFBFA: call    sub_1800A8E40
 * 00000001800CFBFF: movups  xmm0, xmmword ptr [rax]
 * 00000001800CFC02: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CFC08: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CFC0C: mov     r9d, r12d
 * 00000001800CFC0F: mov     r8d, r12d
 * 00000001800CFC12: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CFC17: lea     rcx, [rbp+9F60h+var_55D0]
 * 00000001800CFC1E: call    sub_1800A8E0C
 * 00000001800CFC23: movups  xmm6, xmmword ptr [rax]
 * 00000001800CFC26: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CFC2A: call    sub_1800C50FC
 * 00000001800CFC2F: mov     r8, rax
 * 00000001800CFC32: mov     r9d, r13d
 * 00000001800CFC35: mov     edx, 30h ; '0'
 * 00000001800CFC3A: lea     rcx, [rbp+9F60h+var_9D0]; Src
 * 00000001800CFC41: call    sub_180088448
 * 00000001800CFC46: nop
 * 00000001800CFC47: mov     r8, rax
 * 00000001800CFC4A: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CFC51: lea     rcx, [rbp+9F60h+var_9F0]
 * 00000001800CFC58: call    sub_18001DD3C
 * 00000001800CFC5D: nop
 * 00000001800CFC5E: lea     r8, aVertex; "/Vertex"
 * 00000001800CFC65: mov     rdx, rax
 * 00000001800CFC68: lea     rcx, [rbp+9F60h+var_7710]
 * 00000001800CFC6F: call    sub_18001DC84
 * 00000001800CFC74: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CFC79: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CFC7E: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CFC83: mov     rcx, rax
 * 00000001800CFC86: call    sub_180088528
 * 00000001800CFC8B: nop
 * 00000001800CFC8C: lea     rcx, [rbp+9F60h+var_9F0]
 * 00000001800CFC93: call    sub_180011570
 * 00000001800CFC98: nop
 * 00000001800CFC99: lea     rcx, [rbp+9F60h+var_9D0]
 * 00000001800CFCA0: call    sub_180011570
 * 00000001800CFCA5: nop
 * 00000001800CFCA6: lea     rcx, dword_1801FB43C
 * 00000001800CFCAD: call    sub_18000C548
 * 00000001800CFCB2: mov     rax, [rsi+rdi*8]
 * 00000001800CFCB6: mov     ecx, [r15+rax]
 * 00000001800CFCBA: cmp     cs:dword_1801FB440, ecx
 * 00000001800CFCC0: jle     loc_1800CFDB9
 * 00000001800CFCC6: lea     rcx, dword_1801FB440
 * 00000001800CFCCD: call    sub_18000C5B0
 * 00000001800CFCD2: cmp     cs:dword_1801FB440, r14d
 * 00000001800CFCD9: jnz     loc_1800CFDB9
 * 00000001800CFCDF: xor     edx, edx
 * 00000001800CFCE1: lea     rcx, [rbp+9F60h+var_9F6E]
 * 00000001800CFCE5: call    sub_1800A8E58
 * 00000001800CFCEA: mov     bl, [rax]
 * 00000001800CFCEC: call    sub_1800C505C
 * 00000001800CFCF1: mov     rdx, rax
 * 00000001800CFCF4: mov     r8d, 1A18h
 * 00000001800CFCFA: lea     rcx, [rbp+9F60h+var_94C0]
 * 00000001800CFD01: call    sub_1800A8E40
 * 00000001800CFD06: movups  xmm0, xmmword ptr [rax]
 * 00000001800CFD09: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CFD0F: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CFD13: mov     r9d, r12d
 * 00000001800CFD16: mov     r8d, r12d
 * 00000001800CFD19: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CFD1E: lea     rcx, [rbp+9F60h+var_55B0]
 * 00000001800CFD25: call    sub_1800A8E0C
 * 00000001800CFD2A: movups  xmm6, xmmword ptr [rax]
 * 00000001800CFD2D: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CFD31: call    sub_1800C50FC
 * 00000001800CFD36: mov     r8, rax
 * 00000001800CFD39: mov     r9d, r13d
 * 00000001800CFD3C: mov     edx, 32h ; '2'
 * 00000001800CFD41: lea     rcx, [rbp+9F60h+var_970]; Src
 * 00000001800CFD48: call    sub_180088448
 * 00000001800CFD4D: nop
 * 00000001800CFD4E: mov     r8, rax
 * 00000001800CFD51: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CFD58: lea     rcx, [rbp+9F60h+var_990]
 * 00000001800CFD5F: call    sub_18001DD3C
 * 00000001800CFD64: nop
 * 00000001800CFD65: lea     r8, aVertex; "/Vertex"
 * 00000001800CFD6C: mov     rdx, rax
 * 00000001800CFD6F: lea     rcx, [rbp+9F60h+var_7750]
 * 00000001800CFD76: call    sub_18001DC84
 * 00000001800CFD7B: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CFD80: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CFD85: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CFD8A: mov     rcx, rax
 * 00000001800CFD8D: call    sub_180088528
 * 00000001800CFD92: nop
 * 00000001800CFD93: lea     rcx, [rbp+9F60h+var_990]
 * 00000001800CFD9A: call    sub_180011570
 * 00000001800CFD9F: nop
 * 00000001800CFDA0: lea     rcx, [rbp+9F60h+var_970]
 * 00000001800CFDA7: call    sub_180011570
 * 00000001800CFDAC: nop
 * 00000001800CFDAD: lea     rcx, dword_1801FB440
 * 00000001800CFDB4: call    sub_18000C548
 * 00000001800CFDB9: mov     rax, [rsi+rdi*8]
 * 00000001800CFDBD: mov     ecx, [r15+rax]
 * 00000001800CFDC1: cmp     cs:dword_1801FB444, ecx
 * 00000001800CFDC7: jle     loc_1800CFEC0
 * 00000001800CFDCD: lea     rcx, dword_1801FB444
 * 00000001800CFDD4: call    sub_18000C5B0
 * 00000001800CFDD9: cmp     cs:dword_1801FB444, r14d
 * 00000001800CFDE0: jnz     loc_1800CFEC0
 * 00000001800CFDE6: xor     edx, edx
 * 00000001800CFDE8: lea     rcx, [rbp+9F60h+var_9F6D]
 * 00000001800CFDEC: call    sub_1800A8E58
 * 00000001800CFDF1: mov     bl, [rax]
 * 00000001800CFDF3: call    sub_1800C505C
 * 00000001800CFDF8: mov     rdx, rax
 * 00000001800CFDFB: mov     r8d, 1A18h
 * 00000001800CFE01: lea     rcx, [rbp+9F60h+var_94B0]
 * 00000001800CFE08: call    sub_1800A8E40
 * 00000001800CFE0D: movups  xmm0, xmmword ptr [rax]
 * 00000001800CFE10: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CFE16: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CFE1A: mov     r9d, r12d
 * 00000001800CFE1D: mov     r8d, r12d
 * 00000001800CFE20: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CFE25: lea     rcx, [rbp+9F60h+var_5590]
 * 00000001800CFE2C: call    sub_1800A8E0C
 * 00000001800CFE31: movups  xmm6, xmmword ptr [rax]
 * 00000001800CFE34: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CFE38: call    sub_1800C50FC
 * 00000001800CFE3D: mov     r8, rax
 * 00000001800CFE40: mov     r9d, r13d
 * 00000001800CFE43: mov     edx, 38h ; '8'
 * 00000001800CFE48: lea     rcx, [rbp+9F60h+var_910]; Src
 * 00000001800CFE4F: call    sub_180088448
 * 00000001800CFE54: nop
 * 00000001800CFE55: mov     r8, rax
 * 00000001800CFE58: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CFE5F: lea     rcx, [rbp+9F60h+var_930]
 * 00000001800CFE66: call    sub_18001DD3C
 * 00000001800CFE6B: nop
 * 00000001800CFE6C: lea     r8, aVertex; "/Vertex"
 * 00000001800CFE73: mov     rdx, rax
 * 00000001800CFE76: lea     rcx, [rbp+9F60h+var_8490]
 * 00000001800CFE7D: call    sub_18001DC84
 * 00000001800CFE82: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CFE87: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CFE8C: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CFE91: mov     rcx, rax
 * 00000001800CFE94: call    sub_180088528
 * 00000001800CFE99: nop
 * 00000001800CFE9A: lea     rcx, [rbp+9F60h+var_930]
 * 00000001800CFEA1: call    sub_180011570
 * 00000001800CFEA6: nop
 * 00000001800CFEA7: lea     rcx, [rbp+9F60h+var_910]
 * 00000001800CFEAE: call    sub_180011570
 * 00000001800CFEB3: nop
 * 00000001800CFEB4: lea     rcx, dword_1801FB444
 * 00000001800CFEBB: call    sub_18000C548
 * 00000001800CFEC0: mov     rax, [rsi+rdi*8]
 * 00000001800CFEC4: mov     ecx, [r15+rax]
 * 00000001800CFEC8: cmp     cs:dword_1801FB448, ecx
 * 00000001800CFECE: jle     loc_1800CFFC7
 * 00000001800CFED4: lea     rcx, dword_1801FB448
 * 00000001800CFEDB: call    sub_18000C5B0
 * 00000001800CFEE0: cmp     cs:dword_1801FB448, r14d
 * 00000001800CFEE7: jnz     loc_1800CFFC7
 * 00000001800CFEED: xor     edx, edx
 * 00000001800CFEEF: lea     rcx, [rbp+9F60h+var_9F6C]
 * 00000001800CFEF3: call    sub_1800A8E58
 * 00000001800CFEF8: mov     bl, [rax]
 * 00000001800CFEFA: call    sub_1800C505C
 * 00000001800CFEFF: mov     rdx, rax
 * 00000001800CFF02: mov     r8d, 1A18h
 * 00000001800CFF08: lea     rcx, [rbp+9F60h+var_94A0]
 * 00000001800CFF0F: call    sub_1800A8E40
 * 00000001800CFF14: movups  xmm0, xmmword ptr [rax]
 * 00000001800CFF17: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800CFF1D: mov     [rsp+0A060h+var_A040], bl
 * 00000001800CFF21: mov     r9d, r12d
 * 00000001800CFF24: mov     r8d, r12d
 * 00000001800CFF27: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CFF2C: lea     rcx, [rbp+9F60h+var_5570]
 * 00000001800CFF33: call    sub_1800A8E0C
 * 00000001800CFF38: movups  xmm6, xmmword ptr [rax]
 * 00000001800CFF3B: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800CFF3F: call    sub_1800C50FC
 * 00000001800CFF44: mov     r8, rax
 * 00000001800CFF47: mov     r9d, r13d
 * 00000001800CFF4A: mov     edx, 3Ah ; ':'
 * 00000001800CFF4F: lea     rcx, [rbp+9F60h+var_8B0]; Src
 * 00000001800CFF56: call    sub_180088448
 * 00000001800CFF5B: nop
 * 00000001800CFF5C: mov     r8, rax
 * 00000001800CFF5F: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800CFF66: lea     rcx, [rbp+9F60h+var_8D0]
 * 00000001800CFF6D: call    sub_18001DD3C
 * 00000001800CFF72: nop
 * 00000001800CFF73: lea     r8, aVertex; "/Vertex"
 * 00000001800CFF7A: mov     rdx, rax
 * 00000001800CFF7D: lea     rcx, [rbp+9F60h+var_7770]
 * 00000001800CFF84: call    sub_18001DC84
 * 00000001800CFF89: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800CFF8E: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800CFF93: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800CFF98: mov     rcx, rax
 * 00000001800CFF9B: call    sub_180088528
 * 00000001800CFFA0: nop
 * 00000001800CFFA1: lea     rcx, [rbp+9F60h+var_8D0]
 * 00000001800CFFA8: call    sub_180011570
 * 00000001800CFFAD: nop
 * 00000001800CFFAE: lea     rcx, [rbp+9F60h+var_8B0]
 * 00000001800CFFB5: call    sub_180011570
 * 00000001800CFFBA: nop
 * 00000001800CFFBB: lea     rcx, dword_1801FB448
 * 00000001800CFFC2: call    sub_18000C548
 * 00000001800CFFC7: mov     rax, [rsi+rdi*8]
 * 00000001800CFFCB: mov     eax, [r15+rax]
 * 00000001800CFFCF: cmp     cs:dword_1801FB44C, eax
 * 00000001800CFFD5: jle     loc_1800D00CE
 * 00000001800CFFDB: lea     rcx, dword_1801FB44C
 * 00000001800CFFE2: call    sub_18000C5B0
 * 00000001800CFFE7: cmp     cs:dword_1801FB44C, r14d
 * 00000001800CFFEE: jnz     loc_1800D00CE
 * 00000001800CFFF4: xor     edx, edx
 * 00000001800CFFF6: lea     rcx, [rbp+9F60h+var_9F6B]
 * 00000001800CFFFA: call    sub_1800A8E58
 * 00000001800CFFFF: mov     bl, [rax]
 * 00000001800D0001: call    sub_1800C507C
 * 00000001800D0006: mov     rdx, rax
 * 00000001800D0009: mov     r8d, 1050h
 * 00000001800D000F: lea     rcx, [rbp+9F60h+var_9490]
 * 00000001800D0016: call    sub_1800A8E40
 * 00000001800D001B: movups  xmm0, xmmword ptr [rax]
 * 00000001800D001E: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D0024: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D0028: mov     r9d, r12d
 * 00000001800D002B: mov     r8d, r12d
 * 00000001800D002E: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D0033: lea     rcx, [rbp+9F60h+var_5550]
 * 00000001800D003A: call    sub_1800A8E0C
 * 00000001800D003F: movups  xmm6, xmmword ptr [rax]
 * 00000001800D0042: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D0046: call    sub_1800C50FC
 * 00000001800D004B: mov     r8, rax
 * 00000001800D004E: mov     r9d, r13d
 * 00000001800D0051: mov     edx, 40h ; '@'
 * 00000001800D0056: lea     rcx, [rbp+9F60h+var_850]; Src
 * 00000001800D005D: call    sub_180088448
 * 00000001800D0062: nop
 * 00000001800D0063: mov     r8, rax
 * 00000001800D0066: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D006D: lea     rcx, [rbp+9F60h+var_870]
 * 00000001800D0074: call    sub_18001DD3C
 * 00000001800D0079: nop
 * 00000001800D007A: lea     r8, aVertex; "/Vertex"
 * 00000001800D0081: mov     rdx, rax
 * 00000001800D0084: lea     rcx, [rbp+9F60h+var_77B0]
 * 00000001800D008B: call    sub_18001DC84
 * 00000001800D0090: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D0095: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D009A: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D009F: mov     rcx, rax
 * 00000001800D00A2: call    sub_180088528
 * 00000001800D00A7: nop
 * 00000001800D00A8: lea     rcx, [rbp+9F60h+var_870]
 * 00000001800D00AF: call    sub_180011570
 * 00000001800D00B4: nop
 * 00000001800D00B5: lea     rcx, [rbp+9F60h+var_850]
 * 00000001800D00BC: call    sub_180011570
 * 00000001800D00C1: nop
 * 00000001800D00C2: lea     rcx, dword_1801FB44C
 * 00000001800D00C9: call    sub_18000C548
 * 00000001800D00CE: mov     rax, [rsi+rdi*8]
 * 00000001800D00D2: mov     ecx, [r15+rax]
 * 00000001800D00D6: cmp     cs:dword_1801FB450, ecx
 * 00000001800D00DC: jle     loc_1800D01D5
 * 00000001800D00E2: lea     rcx, dword_1801FB450
 * 00000001800D00E9: call    sub_18000C5B0
 * 00000001800D00EE: cmp     cs:dword_1801FB450, r14d
 * 00000001800D00F5: jnz     loc_1800D01D5
 * 00000001800D00FB: xor     edx, edx
 * 00000001800D00FD: lea     rcx, [rbp+9F60h+var_9F6A]
 * 00000001800D0101: call    sub_1800A8E58
 * 00000001800D0106: mov     bl, [rax]
 * 00000001800D0108: call    sub_1800C507C
 * 00000001800D010D: mov     rdx, rax
 * 00000001800D0110: mov     r8d, 1050h
 * 00000001800D0116: lea     rcx, [rbp+9F60h+var_9480]
 * 00000001800D011D: call    sub_1800A8E40
 * 00000001800D0122: movups  xmm0, xmmword ptr [rax]
 * 00000001800D0125: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D012B: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D012F: mov     r9d, r12d
 * 00000001800D0132: mov     r8d, r12d
 * 00000001800D0135: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D013A: lea     rcx, [rbp+9F60h+var_5530]
 * 00000001800D0141: call    sub_1800A8E0C
 * 00000001800D0146: movups  xmm6, xmmword ptr [rax]
 * 00000001800D0149: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D014D: call    sub_1800C50FC
 * 00000001800D0152: mov     r8, rax
 * 00000001800D0155: mov     r9d, r13d
 * 00000001800D0158: mov     edx, 42h ; 'B'
 * 00000001800D015D: lea     rcx, [rbp+9F60h+var_7F0]; Src
 * 00000001800D0164: call    sub_180088448
 * 00000001800D0169: nop
 * 00000001800D016A: mov     r8, rax
 * 00000001800D016D: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D0174: lea     rcx, [rbp+9F60h+var_810]
 * 00000001800D017B: call    sub_18001DD3C
 * 00000001800D0180: nop
 * 00000001800D0181: lea     r8, aVertex; "/Vertex"
 * 00000001800D0188: mov     rdx, rax
 * 00000001800D018B: lea     rcx, [rbp+9F60h+var_77D0]
 * 00000001800D0192: call    sub_18001DC84
 * 00000001800D0197: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D019C: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D01A1: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D01A6: mov     rcx, rax
 * 00000001800D01A9: call    sub_180088528
 * 00000001800D01AE: nop
 * 00000001800D01AF: lea     rcx, [rbp+9F60h+var_810]
 * 00000001800D01B6: call    sub_180011570
 * 00000001800D01BB: nop
 * 00000001800D01BC: lea     rcx, [rbp+9F60h+var_7F0]
 * 00000001800D01C3: call    sub_180011570
 * 00000001800D01C8: nop
 * 00000001800D01C9: lea     rcx, dword_1801FB450
 * 00000001800D01D0: call    sub_18000C548
 * 00000001800D01D5: mov     rax, [rsi+rdi*8]
 * 00000001800D01D9: mov     ecx, [r15+rax]
 * 00000001800D01DD: cmp     cs:dword_1801FB454, ecx
 * 00000001800D01E3: jle     loc_1800D02DC
 * 00000001800D01E9: lea     rcx, dword_1801FB454
 * 00000001800D01F0: call    sub_18000C5B0
 * 00000001800D01F5: cmp     cs:dword_1801FB454, r14d
 * 00000001800D01FC: jnz     loc_1800D02DC
 * 00000001800D0202: xor     edx, edx
 * 00000001800D0204: lea     rcx, [rbp+9F60h+var_9F69]
 * 00000001800D0208: call    sub_1800A8E58
 * 00000001800D020D: mov     bl, [rax]
 * 00000001800D020F: call    sub_1800C507C
 * 00000001800D0214: mov     rdx, rax
 * 00000001800D0217: mov     r8d, 1050h
 * 00000001800D021D: lea     rcx, [rbp+9F60h+var_9470]
 * 00000001800D0224: call    sub_1800A8E40
 * 00000001800D0229: movups  xmm0, xmmword ptr [rax]
 * 00000001800D022C: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D0232: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D0236: mov     r9d, r12d
 * 00000001800D0239: mov     r8d, r12d
 * 00000001800D023C: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D0241: lea     rcx, [rbp+9F60h+var_5510]
 * 00000001800D0248: call    sub_1800A8E0C
 * 00000001800D024D: movups  xmm6, xmmword ptr [rax]
 * 00000001800D0250: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D0254: call    sub_1800C50FC
 * 00000001800D0259: mov     r8, rax
 * 00000001800D025C: mov     r9d, r13d
 * 00000001800D025F: mov     edx, 48h ; 'H'
 * 00000001800D0264: lea     rcx, [rbp+9F60h+var_790]; Src
 * 00000001800D026B: call    sub_180088448
 * 00000001800D0270: nop
 * 00000001800D0271: mov     r8, rax
 * 00000001800D0274: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D027B: lea     rcx, [rbp+9F60h+var_7B0]
 * 00000001800D0282: call    sub_18001DD3C
 * 00000001800D0287: nop
 * 00000001800D0288: lea     r8, aVertex; "/Vertex"
 * 00000001800D028F: mov     rdx, rax
 * 00000001800D0292: lea     rcx, [rbp+9F60h+var_7810]
 * 00000001800D0299: call    sub_18001DC84
 * 00000001800D029E: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D02A3: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D02A8: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D02AD: mov     rcx, rax
 * 00000001800D02B0: call    sub_180088528
 * 00000001800D02B5: nop
 * 00000001800D02B6: lea     rcx, [rbp+9F60h+var_7B0]
 * 00000001800D02BD: call    sub_180011570
 * 00000001800D02C2: nop
 * 00000001800D02C3: lea     rcx, [rbp+9F60h+var_790]
 * 00000001800D02CA: call    sub_180011570
 * 00000001800D02CF: nop
 * 00000001800D02D0: lea     rcx, dword_1801FB454
 * 00000001800D02D7: call    sub_18000C548
 * 00000001800D02DC: mov     rax, [rsi+rdi*8]
 * 00000001800D02E0: mov     ecx, [r15+rax]
 * 00000001800D02E4: cmp     cs:dword_1801FB458, ecx
 * 00000001800D02EA: jle     loc_1800D03E3
 * 00000001800D02F0: lea     rcx, dword_1801FB458
 * 00000001800D02F7: call    sub_18000C5B0
 * 00000001800D02FC: cmp     cs:dword_1801FB458, r14d
 * 00000001800D0303: jnz     loc_1800D03E3
 * 00000001800D0309: xor     edx, edx
 * 00000001800D030B: lea     rcx, [rbp+9F60h+var_9F68]
 * 00000001800D030F: call    sub_1800A8E58
 * 00000001800D0314: mov     bl, [rax]
 * 00000001800D0316: call    sub_1800C507C
 * 00000001800D031B: mov     rdx, rax
 * 00000001800D031E: mov     r8d, 1050h
 * 00000001800D0324: lea     rcx, [rbp+9F60h+var_9460]
 * 00000001800D032B: call    sub_1800A8E40
 * 00000001800D0330: movups  xmm0, xmmword ptr [rax]
 * 00000001800D0333: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D0339: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D033D: mov     r9d, r12d
 * 00000001800D0340: mov     r8d, r12d
 * 00000001800D0343: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D0348: lea     rcx, [rbp+9F60h+var_54F0]
 * 00000001800D034F: call    sub_1800A8E0C
 * 00000001800D0354: movups  xmm6, xmmword ptr [rax]
 * 00000001800D0357: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D035B: call    sub_1800C50FC
 * 00000001800D0360: mov     r8, rax
 * 00000001800D0363: mov     r9d, r13d
 * 00000001800D0366: mov     edx, 4Ah ; 'J'
 * 00000001800D036B: lea     rcx, [rbp+9F60h+var_730]; Src
 * 00000001800D0372: call    sub_180088448
 * 00000001800D0377: nop
 * 00000001800D0378: mov     r8, rax
 * 00000001800D037B: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D0382: lea     rcx, [rbp+9F60h+var_750]
 * 00000001800D0389: call    sub_18001DD3C
 * 00000001800D038E: nop
 * 00000001800D038F: lea     r8, aVertex; "/Vertex"
 * 00000001800D0396: mov     rdx, rax
 * 00000001800D0399: lea     rcx, [rbp+9F60h+var_7830]
 * 00000001800D03A0: call    sub_18001DC84
 * 00000001800D03A5: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D03AA: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D03AF: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D03B4: mov     rcx, rax
 * 00000001800D03B7: call    sub_180088528
 * 00000001800D03BC: nop
 * 00000001800D03BD: lea     rcx, [rbp+9F60h+var_750]
 * 00000001800D03C4: call    sub_180011570
 * 00000001800D03C9: nop
 * 00000001800D03CA: lea     rcx, [rbp+9F60h+var_730]
 * 00000001800D03D1: call    sub_180011570
 * 00000001800D03D6: nop
 * 00000001800D03D7: lea     rcx, dword_1801FB458
 * 00000001800D03DE: call    sub_18000C548
 * 00000001800D03E3: mov     rax, [rsi+rdi*8]
 * 00000001800D03E7: mov     ecx, [r15+rax]
 * 00000001800D03EB: cmp     cs:dword_1801FB45C, ecx
 * 00000001800D03F1: jle     loc_1800D04EA
 * 00000001800D03F7: lea     rcx, dword_1801FB45C
 * 00000001800D03FE: call    sub_18000C5B0
 * 00000001800D0403: cmp     cs:dword_1801FB45C, r14d
 * 00000001800D040A: jnz     loc_1800D04EA
 * 00000001800D0410: xor     edx, edx
 * 00000001800D0412: lea     rcx, [rbp+9F60h+var_9F67]
 * 00000001800D0416: call    sub_1800A8E58
 * 00000001800D041B: mov     bl, [rax]
 * 00000001800D041D: call    sub_1800C507C
 * 00000001800D0422: mov     rdx, rax
 * 00000001800D0425: mov     r8d, 1050h
 * 00000001800D042B: lea     rcx, [rbp+9F60h+var_9450]
 * 00000001800D0432: call    sub_1800A8E40
 * 00000001800D0437: movups  xmm0, xmmword ptr [rax]
 * 00000001800D043A: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D0440: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D0444: mov     r9d, r12d
 * 00000001800D0447: mov     r8d, r12d
 * 00000001800D044A: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D044F: lea     rcx, [rbp+9F60h+var_54D0]
 * 00000001800D0456: call    sub_1800A8E0C
 * 00000001800D045B: movups  xmm6, xmmword ptr [rax]
 * 00000001800D045E: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D0462: call    sub_1800C50FC
 * 00000001800D0467: mov     r8, rax
 * 00000001800D046A: mov     r9d, r13d
 * 00000001800D046D: mov     edx, 50h ; 'P'
 * 00000001800D0472: lea     rcx, [rbp+9F60h+var_6D0]; Src
 * 00000001800D0479: call    sub_180088448
 * 00000001800D047E: nop
 * 00000001800D047F: mov     r8, rax
 * 00000001800D0482: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D0489: lea     rcx, [rbp+9F60h+var_6F0]
 * 00000001800D0490: call    sub_18001DD3C
 * 00000001800D0495: nop
 * 00000001800D0496: lea     r8, aVertex; "/Vertex"
 * 00000001800D049D: mov     rdx, rax
 * 00000001800D04A0: lea     rcx, [rbp+9F60h+var_7870]
 * 00000001800D04A7: call    sub_18001DC84
 * 00000001800D04AC: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D04B1: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D04B6: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D04BB: mov     rcx, rax
 * 00000001800D04BE: call    sub_180088528
 * 00000001800D04C3: nop
 * 00000001800D04C4: lea     rcx, [rbp+9F60h+var_6F0]
 * 00000001800D04CB: call    sub_180011570
 * 00000001800D04D0: nop
 * 00000001800D04D1: lea     rcx, [rbp+9F60h+var_6D0]
 * 00000001800D04D8: call    sub_180011570
 * 00000001800D04DD: nop
 * 00000001800D04DE: lea     rcx, dword_1801FB45C
 * 00000001800D04E5: call    sub_18000C548
 * 00000001800D04EA: mov     rax, [rsi+rdi*8]
 * 00000001800D04EE: mov     ecx, [r15+rax]
 * 00000001800D04F2: cmp     cs:dword_1801FB460, ecx
 * 00000001800D04F8: jle     loc_1800D05F1
 * 00000001800D04FE: lea     rcx, dword_1801FB460
 * 00000001800D0505: call    sub_18000C5B0
 * 00000001800D050A: cmp     cs:dword_1801FB460, r14d
 * 00000001800D0511: jnz     loc_1800D05F1
 * 00000001800D0517: xor     edx, edx
 * 00000001800D0519: lea     rcx, [rbp+9F60h+var_9F66]
 * 00000001800D051D: call    sub_1800A8E58
 * 00000001800D0522: mov     bl, [rax]
 * 00000001800D0524: call    sub_1800C507C
 * 00000001800D0529: mov     rdx, rax
 * 00000001800D052C: mov     r8d, 1050h
 * 00000001800D0532: lea     rcx, [rbp+9F60h+var_9440]
 * 00000001800D0539: call    sub_1800A8E40
 * 00000001800D053E: movups  xmm0, xmmword ptr [rax]
 * 00000001800D0541: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D0547: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D054B: mov     r9d, r12d
 * 00000001800D054E: mov     r8d, r12d
 * 00000001800D0551: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D0556: lea     rcx, [rbp+9F60h+var_54B0]
 * 00000001800D055D: call    sub_1800A8E0C
 * 00000001800D0562: movups  xmm6, xmmword ptr [rax]
 * 00000001800D0565: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D0569: call    sub_1800C50FC
 * 00000001800D056E: mov     r8, rax
 * 00000001800D0571: mov     r9d, r13d
 * 00000001800D0574: mov     edx, 52h ; 'R'
 * 00000001800D0579: lea     rcx, [rbp+9F60h+var_670]; Src
 * 00000001800D0580: call    sub_180088448
 * 00000001800D0585: nop
 * 00000001800D0586: mov     r8, rax
 * 00000001800D0589: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D0590: lea     rcx, [rbp+9F60h+var_690]
 * 00000001800D0597: call    sub_18001DD3C
 * 00000001800D059C: nop
 * 00000001800D059D: lea     r8, aVertex; "/Vertex"
 * 00000001800D05A4: mov     rdx, rax
 * 00000001800D05A7: lea     rcx, [rbp+9F60h+var_7890]
 * 00000001800D05AE: call    sub_18001DC84
 * 00000001800D05B3: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D05B8: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D05BD: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D05C2: mov     rcx, rax
 * 00000001800D05C5: call    sub_180088528
 * 00000001800D05CA: nop
 * 00000001800D05CB: lea     rcx, [rbp+9F60h+var_690]
 * 00000001800D05D2: call    sub_180011570
 * 00000001800D05D7: nop
 * 00000001800D05D8: lea     rcx, [rbp+9F60h+var_670]
 * 00000001800D05DF: call    sub_180011570
 * 00000001800D05E4: nop
 * 00000001800D05E5: lea     rcx, dword_1801FB460
 * 00000001800D05EC: call    sub_18000C548
 * 00000001800D05F1: mov     rax, [rsi+rdi*8]
 * 00000001800D05F5: mov     ecx, [r15+rax]
 * 00000001800D05F9: cmp     cs:dword_1801FB464, ecx
 * 00000001800D05FF: jle     loc_1800D06F8
 * 00000001800D0605: lea     rcx, dword_1801FB464
 * 00000001800D060C: call    sub_18000C5B0
 * 00000001800D0611: cmp     cs:dword_1801FB464, r14d
 * 00000001800D0618: jnz     loc_1800D06F8
 * 00000001800D061E: xor     edx, edx
 * 00000001800D0620: lea     rcx, [rbp+9F60h+var_9F65]
 * 00000001800D0624: call    sub_1800A8E58
 * 00000001800D0629: mov     bl, [rax]
 * 00000001800D062B: call    sub_1800C507C
 * 00000001800D0630: mov     rdx, rax
 * 00000001800D0633: mov     r8d, 1050h
 * 00000001800D0639: lea     rcx, [rbp+9F60h+var_9430]
 * 00000001800D0640: call    sub_1800A8E40
 * 00000001800D0645: movups  xmm0, xmmword ptr [rax]
 * 00000001800D0648: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D064E: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D0652: mov     r9d, r12d
 * 00000001800D0655: mov     r8d, r12d
 * 00000001800D0658: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D065D: lea     rcx, [rbp+9F60h+var_5490]
 * 00000001800D0664: call    sub_1800A8E0C
 * 00000001800D0669: movups  xmm6, xmmword ptr [rax]
 * 00000001800D066C: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D0670: call    sub_1800C50FC
 * 00000001800D0675: mov     r8, rax
 * 00000001800D0678: mov     r9d, r13d
 * 00000001800D067B: mov     edx, 58h ; 'X'
 * 00000001800D0680: lea     rcx, [rbp+9F60h+var_610]; Src
 * 00000001800D0687: call    sub_180088448
 * 00000001800D068C: nop
 * 00000001800D068D: mov     r8, rax
 * 00000001800D0690: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D0697: lea     rcx, [rbp+9F60h+var_630]
 * 00000001800D069E: call    sub_18001DD3C
 * 00000001800D06A3: nop
 * 00000001800D06A4: lea     r8, aVertex; "/Vertex"
 * 00000001800D06AB: mov     rdx, rax
 * 00000001800D06AE: lea     rcx, [rbp+9F60h+var_78D0]
 * 00000001800D06B5: call    sub_18001DC84
 * 00000001800D06BA: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D06BF: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D06C4: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D06C9: mov     rcx, rax
 * 00000001800D06CC: call    sub_180088528
 * 00000001800D06D1: nop
 * 00000001800D06D2: lea     rcx, [rbp+9F60h+var_630]
 * 00000001800D06D9: call    sub_180011570
 * 00000001800D06DE: nop
 * 00000001800D06DF: lea     rcx, [rbp+9F60h+var_610]
 * 00000001800D06E6: call    sub_180011570
 * 00000001800D06EB: nop
 * 00000001800D06EC: lea     rcx, dword_1801FB464
 * 00000001800D06F3: call    sub_18000C548
 * 00000001800D06F8: mov     rax, [rsi+rdi*8]
 * 00000001800D06FC: mov     ecx, [r15+rax]
 * 00000001800D0700: cmp     cs:dword_1801FB468, ecx
 * 00000001800D0706: jle     loc_1800D07FF
 * 00000001800D070C: lea     rcx, dword_1801FB468
 * 00000001800D0713: call    sub_18000C5B0
 * 00000001800D0718: cmp     cs:dword_1801FB468, r14d
 * 00000001800D071F: jnz     loc_1800D07FF
 * 00000001800D0725: xor     edx, edx
 * 00000001800D0727: lea     rcx, [rbp+9F60h+var_9F64]
 * 00000001800D072B: call    sub_1800A8E58
 * 00000001800D0730: mov     bl, [rax]
 * 00000001800D0732: call    sub_1800C507C
 * 00000001800D0737: mov     rdx, rax
 * 00000001800D073A: mov     r8d, 1050h
 * 00000001800D0740: lea     rcx, [rbp+9F60h+var_9420]
 * 00000001800D0747: call    sub_1800A8E40
 * 00000001800D074C: movups  xmm0, xmmword ptr [rax]
 * 00000001800D074F: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D0755: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D0759: mov     r9d, r12d
 * 00000001800D075C: mov     r8d, r12d
 * 00000001800D075F: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D0764: lea     rcx, [rbp+9F60h+var_5470]
 * 00000001800D076B: call    sub_1800A8E0C
 * 00000001800D0770: movups  xmm6, xmmword ptr [rax]
 * 00000001800D0773: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D0777: call    sub_1800C50FC
 * 00000001800D077C: mov     r8, rax
 * 00000001800D077F: mov     r9d, r13d
 * 00000001800D0782: mov     edx, 5Ah ; 'Z'
 * 00000001800D0787: lea     rcx, [rbp+9F60h+var_5B0]; Src
 * 00000001800D078E: call    sub_180088448
 * 00000001800D0793: nop
 * 00000001800D0794: mov     r8, rax
 * 00000001800D0797: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D079E: lea     rcx, [rbp+9F60h+var_5D0]
 * 00000001800D07A5: call    sub_18001DD3C
 * 00000001800D07AA: nop
 * 00000001800D07AB: lea     r8, aVertex; "/Vertex"
 * 00000001800D07B2: mov     rdx, rax
 * 00000001800D07B5: lea     rcx, [rbp+9F60h+var_78F0]
 * 00000001800D07BC: call    sub_18001DC84
 * 00000001800D07C1: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D07C6: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D07CB: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D07D0: mov     rcx, rax
 * 00000001800D07D3: call    sub_180088528
 * 00000001800D07D8: nop
 * 00000001800D07D9: lea     rcx, [rbp+9F60h+var_5D0]
 * 00000001800D07E0: call    sub_180011570
 * 00000001800D07E5: nop
 * 00000001800D07E6: lea     rcx, [rbp+9F60h+var_5B0]
 * 00000001800D07ED: call    sub_180011570
 * 00000001800D07F2: nop
 * 00000001800D07F3: lea     rcx, dword_1801FB468
 * 00000001800D07FA: call    sub_18000C548
 * 00000001800D07FF: mov     rax, [rsi+rdi*8]
 * 00000001800D0803: mov     eax, [r15+rax]
 * 00000001800D0807: cmp     cs:dword_1801FB46C, eax
 * 00000001800D080D: jle     loc_1800D0906
 * 00000001800D0813: lea     rcx, dword_1801FB46C
 * 00000001800D081A: call    sub_18000C5B0
 * 00000001800D081F: cmp     cs:dword_1801FB46C, r14d
 * 00000001800D0826: jnz     loc_1800D0906
 * 00000001800D082C: xor     edx, edx
 * 00000001800D082E: lea     rcx, [rbp+9F60h+var_9F63]
 * 00000001800D0832: call    sub_1800A8E58
 * 00000001800D0837: mov     bl, [rax]
 * 00000001800D0839: call    sub_1800C508C
 * 00000001800D083E: mov     rdx, rax
 * 00000001800D0841: mov     r8d, 1A50h
 * 00000001800D0847: lea     rcx, [rbp+9F60h+var_9410]
 * 00000001800D084E: call    sub_1800A8E40
 * 00000001800D0853: movups  xmm0, xmmword ptr [rax]
 * 00000001800D0856: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D085C: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D0860: mov     r9d, r12d
 * 00000001800D0863: mov     r8d, r12d
 * 00000001800D0866: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D086B: lea     rcx, [rbp+9F60h+var_5450]
 * 00000001800D0872: call    sub_1800A8E0C
 * 00000001800D0877: movups  xmm6, xmmword ptr [rax]
 * 00000001800D087A: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D087E: call    sub_1800C50FC
 * 00000001800D0883: mov     r8, rax
 * 00000001800D0886: mov     r9d, r13d
 * 00000001800D0889: mov     edx, 60h ; '`'
 * 00000001800D088E: lea     rcx, [rbp+9F60h+var_550]; Src
 * 00000001800D0895: call    sub_180088448
 * 00000001800D089A: nop
 * 00000001800D089B: mov     r8, rax
 * 00000001800D089E: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D08A5: lea     rcx, [rbp+9F60h+var_570]
 * 00000001800D08AC: call    sub_18001DD3C
 * 00000001800D08B1: nop
 * 00000001800D08B2: lea     r8, aVertex; "/Vertex"
 * 00000001800D08B9: mov     rdx, rax
 * 00000001800D08BC: lea     rcx, [rbp+9F60h+var_7930]
 * 00000001800D08C3: call    sub_18001DC84
 * 00000001800D08C8: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D08CD: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D08D2: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D08D7: mov     rcx, rax
 * 00000001800D08DA: call    sub_180088528
 * 00000001800D08DF: nop
 * 00000001800D08E0: lea     rcx, [rbp+9F60h+var_570]
 * 00000001800D08E7: call    sub_180011570
 * 00000001800D08EC: nop
 * 00000001800D08ED: lea     rcx, [rbp+9F60h+var_550]
 * 00000001800D08F4: call    sub_180011570
 * 00000001800D08F9: nop
 * 00000001800D08FA: lea     rcx, dword_1801FB46C
 * 00000001800D0901: call    sub_18000C548
 * 00000001800D0906: mov     rax, [rsi+rdi*8]
 * 00000001800D090A: mov     ecx, [r15+rax]
 * 00000001800D090E: cmp     cs:dword_1801FB470, ecx
 * 00000001800D0914: jle     loc_1800D0A0D
 * 00000001800D091A: lea     rcx, dword_1801FB470
 * 00000001800D0921: call    sub_18000C5B0
 * 00000001800D0926: cmp     cs:dword_1801FB470, r14d
 * 00000001800D092D: jnz     loc_1800D0A0D
 * 00000001800D0933: xor     edx, edx
 * 00000001800D0935: lea     rcx, [rbp+9F60h+var_9F62]
 * 00000001800D0939: call    sub_1800A8E58
 * 00000001800D093E: mov     bl, [rax]
 * 00000001800D0940: call    sub_1800C508C
 * 00000001800D0945: mov     rdx, rax
 * 00000001800D0948: mov     r8d, 1A50h
 * 00000001800D094E: lea     rcx, [rbp+9F60h+var_9400]
 * 00000001800D0955: call    sub_1800A8E40
 * 00000001800D095A: movups  xmm0, xmmword ptr [rax]
 * 00000001800D095D: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D0963: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D0967: mov     r9d, r12d
 * 00000001800D096A: mov     r8d, r12d
 * 00000001800D096D: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D0972: lea     rcx, [rbp+9F60h+var_5430]
 * 00000001800D0979: call    sub_1800A8E0C
 * 00000001800D097E: movups  xmm6, xmmword ptr [rax]
 * 00000001800D0981: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D0985: call    sub_1800C50FC
 * 00000001800D098A: mov     r8, rax
 * 00000001800D098D: mov     r9d, r13d
 * 00000001800D0990: mov     edx, 62h ; 'b'
 * 00000001800D0995: lea     rcx, [rbp+9F60h+var_4F0]; Src
 * 00000001800D099C: call    sub_180088448
 * 00000001800D09A1: nop
 * 00000001800D09A2: mov     r8, rax
 * 00000001800D09A5: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D09AC: lea     rcx, [rbp+9F60h+var_510]
 * 00000001800D09B3: call    sub_18001DD3C
 * 00000001800D09B8: nop
 * 00000001800D09B9: lea     r8, aVertex; "/Vertex"
 * 00000001800D09C0: mov     rdx, rax
 * 00000001800D09C3: lea     rcx, [rbp+9F60h+var_7950]
 * 00000001800D09CA: call    sub_18001DC84
 * 00000001800D09CF: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D09D4: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D09D9: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D09DE: mov     rcx, rax
 * 00000001800D09E1: call    sub_180088528
 * 00000001800D09E6: nop
 * 00000001800D09E7: lea     rcx, [rbp+9F60h+var_510]
 * 00000001800D09EE: call    sub_180011570
 * 00000001800D09F3: nop
 * 00000001800D09F4: lea     rcx, [rbp+9F60h+var_4F0]
 * 00000001800D09FB: call    sub_180011570
 * 00000001800D0A00: nop
 * 00000001800D0A01: lea     rcx, dword_1801FB470
 * 00000001800D0A08: call    sub_18000C548
 * 00000001800D0A0D: mov     rax, [rsi+rdi*8]
 * 00000001800D0A11: mov     ecx, [r15+rax]
 * 00000001800D0A15: cmp     cs:dword_1801FB474, ecx
 * 00000001800D0A1B: jle     loc_1800D0B14
 * 00000001800D0A21: lea     rcx, dword_1801FB474
 * 00000001800D0A28: call    sub_18000C5B0
 * 00000001800D0A2D: cmp     cs:dword_1801FB474, r14d
 * 00000001800D0A34: jnz     loc_1800D0B14
 * 00000001800D0A3A: xor     edx, edx
 * 00000001800D0A3C: lea     rcx, [rbp+9F60h+var_9F61]
 * 00000001800D0A40: call    sub_1800A8E58
 * 00000001800D0A45: mov     bl, [rax]
 * 00000001800D0A47: call    sub_1800C508C
 * 00000001800D0A4C: mov     rdx, rax
 * 00000001800D0A4F: mov     r8d, 1A50h
 * 00000001800D0A55: lea     rcx, [rbp+9F60h+var_93F0]
 * 00000001800D0A5C: call    sub_1800A8E40
 * 00000001800D0A61: movups  xmm0, xmmword ptr [rax]
 * 00000001800D0A64: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D0A6A: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D0A6E: mov     r9d, r12d
 * 00000001800D0A71: mov     r8d, r12d
 * 00000001800D0A74: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D0A79: lea     rcx, [rbp+9F60h+var_5410]
 * 00000001800D0A80: call    sub_1800A8E0C
 * 00000001800D0A85: movups  xmm6, xmmword ptr [rax]
 * 00000001800D0A88: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D0A8C: call    sub_1800C50FC
 * 00000001800D0A91: mov     r8, rax
 * 00000001800D0A94: mov     r9d, r13d
 * 00000001800D0A97: mov     edx, 68h ; 'h'
 * 00000001800D0A9C: lea     rcx, [rbp+9F60h+var_490]; Src
 * 00000001800D0AA3: call    sub_180088448
 * 00000001800D0AA8: nop
 * 00000001800D0AA9: mov     r8, rax
 * 00000001800D0AAC: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D0AB3: lea     rcx, [rbp+9F60h+var_4B0]
 * 00000001800D0ABA: call    sub_18001DD3C
 * 00000001800D0ABF: nop
 * 00000001800D0AC0: lea     r8, aVertex; "/Vertex"
 * 00000001800D0AC7: mov     rdx, rax
 * 00000001800D0ACA: lea     rcx, [rbp+9F60h+var_7990]
 * 00000001800D0AD1: call    sub_18001DC84
 * 00000001800D0AD6: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D0ADB: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D0AE0: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D0AE5: mov     rcx, rax
 * 00000001800D0AE8: call    sub_180088528
 * 00000001800D0AED: nop
 * 00000001800D0AEE: lea     rcx, [rbp+9F60h+var_4B0]
 * 00000001800D0AF5: call    sub_180011570
 * 00000001800D0AFA: nop
 * 00000001800D0AFB: lea     rcx, [rbp+9F60h+var_490]
 * 00000001800D0B02: call    sub_180011570
 * 00000001800D0B07: nop
 * 00000001800D0B08: lea     rcx, dword_1801FB474
 * 00000001800D0B0F: call    sub_18000C548
 * 00000001800D0B14: mov     rax, [rsi+rdi*8]
 * 00000001800D0B18: mov     ecx, [r15+rax]
 * 00000001800D0B1C: cmp     cs:dword_1801FB478, ecx
 * 00000001800D0B22: jle     loc_1800D0C1B
 * 00000001800D0B28: lea     rcx, dword_1801FB478
 * 00000001800D0B2F: call    sub_18000C5B0
 * 00000001800D0B34: cmp     cs:dword_1801FB478, r14d
 * 00000001800D0B3B: jnz     loc_1800D0C1B
 * 00000001800D0B41: xor     edx, edx
 * 00000001800D0B43: lea     rcx, [rbp+9F60h+var_9F60]
 * 00000001800D0B47: call    sub_1800A8E58
 * 00000001800D0B4C: mov     bl, [rax]
 * 00000001800D0B4E: call    sub_1800C508C
 * 00000001800D0B53: mov     rdx, rax
 * 00000001800D0B56: mov     r8d, 1A50h
 * 00000001800D0B5C: lea     rcx, [rbp+9F60h+var_93E0]
 * 00000001800D0B63: call    sub_1800A8E40
 * 00000001800D0B68: movups  xmm0, xmmword ptr [rax]
 * 00000001800D0B6B: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D0B71: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D0B75: mov     r9d, r12d
 * 00000001800D0B78: mov     r8d, r12d
 * 00000001800D0B7B: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D0B80: lea     rcx, [rbp+9F60h+var_53F0]
 * 00000001800D0B87: call    sub_1800A8E0C
 * 00000001800D0B8C: movups  xmm6, xmmword ptr [rax]
 * 00000001800D0B8F: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D0B93: call    sub_1800C50FC
 * 00000001800D0B98: mov     r8, rax
 * 00000001800D0B9B: mov     r9d, r13d
 * 00000001800D0B9E: mov     edx, 6Ah ; 'j'
 * 00000001800D0BA3: lea     rcx, [rbp+9F60h+var_430]; Src
 * 00000001800D0BAA: call    sub_180088448
 * 00000001800D0BAF: nop
 * 00000001800D0BB0: mov     r8, rax
 * 00000001800D0BB3: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D0BBA: lea     rcx, [rbp+9F60h+var_450]
 * 00000001800D0BC1: call    sub_18001DD3C
 * 00000001800D0BC6: nop
 * 00000001800D0BC7: lea     r8, aVertex; "/Vertex"
 * 00000001800D0BCE: mov     rdx, rax
 * 00000001800D0BD1: lea     rcx, [rbp+9F60h+var_79B0]
 * 00000001800D0BD8: call    sub_18001DC84
 * 00000001800D0BDD: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D0BE2: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D0BE7: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D0BEC: mov     rcx, rax
 * 00000001800D0BEF: call    sub_180088528
 * 00000001800D0BF4: nop
 * 00000001800D0BF5: lea     rcx, [rbp+9F60h+var_450]
 * 00000001800D0BFC: call    sub_180011570
 * 00000001800D0C01: nop
 * 00000001800D0C02: lea     rcx, [rbp+9F60h+var_430]
 * 00000001800D0C09: call    sub_180011570
 * 00000001800D0C0E: nop
 * 00000001800D0C0F: lea     rcx, dword_1801FB478
 * 00000001800D0C16: call    sub_18000C548
 * 00000001800D0C1B: mov     rax, [rsi+rdi*8]
 * 00000001800D0C1F: mov     ecx, [r15+rax]
 * 00000001800D0C23: cmp     cs:dword_1801FB47C, ecx
 * 00000001800D0C29: jle     loc_1800D0D22
 * 00000001800D0C2F: lea     rcx, dword_1801FB47C
 * 00000001800D0C36: call    sub_18000C5B0
 * 00000001800D0C3B: cmp     cs:dword_1801FB47C, r14d
 * 00000001800D0C42: jnz     loc_1800D0D22
 * 00000001800D0C48: xor     edx, edx
 * 00000001800D0C4A: lea     rcx, [rbp+9F60h+var_9F5F]
 * 00000001800D0C4E: call    sub_1800A8E58
 * 00000001800D0C53: mov     bl, [rax]
 * 00000001800D0C55: call    sub_1800C508C
 * 00000001800D0C5A: mov     rdx, rax
 * 00000001800D0C5D: mov     r8d, 1A50h
 * 00000001800D0C63: lea     rcx, [rbp+9F60h+var_93D0]
 * 00000001800D0C6A: call    sub_1800A8E40
 * 00000001800D0C6F: movups  xmm0, xmmword ptr [rax]
 * 00000001800D0C72: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D0C78: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D0C7C: mov     r9d, r12d
 * 00000001800D0C7F: mov     r8d, r12d
 * 00000001800D0C82: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D0C87: lea     rcx, [rbp+9F60h+var_53D0]
 * 00000001800D0C8E: call    sub_1800A8E0C
 * 00000001800D0C93: movups  xmm6, xmmword ptr [rax]
 * 00000001800D0C96: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D0C9A: call    sub_1800C50FC
 * 00000001800D0C9F: mov     r8, rax
 * 00000001800D0CA2: mov     r9d, r13d
 * 00000001800D0CA5: mov     edx, 70h ; 'p'
 * 00000001800D0CAA: lea     rcx, [rbp+9F60h+var_3D0]; Src
 * 00000001800D0CB1: call    sub_180088448
 * 00000001800D0CB6: nop
 * 00000001800D0CB7: mov     r8, rax
 * 00000001800D0CBA: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D0CC1: lea     rcx, [rbp+9F60h+var_3F0]
 * 00000001800D0CC8: call    sub_18001DD3C
 * 00000001800D0CCD: nop
 * 00000001800D0CCE: lea     r8, aVertex; "/Vertex"
 * 00000001800D0CD5: mov     rdx, rax
 * 00000001800D0CD8: lea     rcx, [rbp+9F60h+var_79F0]
 * 00000001800D0CDF: call    sub_18001DC84
 * 00000001800D0CE4: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D0CE9: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D0CEE: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D0CF3: mov     rcx, rax
 * 00000001800D0CF6: call    sub_180088528
 * 00000001800D0CFB: nop
 * 00000001800D0CFC: lea     rcx, [rbp+9F60h+var_3F0]
 * 00000001800D0D03: call    sub_180011570
 * 00000001800D0D08: nop
 * 00000001800D0D09: lea     rcx, [rbp+9F60h+var_3D0]
 * 00000001800D0D10: call    sub_180011570
 * 00000001800D0D15: nop
 * 00000001800D0D16: lea     rcx, dword_1801FB47C
 * 00000001800D0D1D: call    sub_18000C548
 * 00000001800D0D22: mov     rax, [rsi+rdi*8]
 * 00000001800D0D26: mov     ecx, [r15+rax]
 * 00000001800D0D2A: cmp     cs:dword_1801FB480, ecx
 * 00000001800D0D30: jle     loc_1800D0E29
 * 00000001800D0D36: lea     rcx, dword_1801FB480
 * 00000001800D0D3D: call    sub_18000C5B0
 * 00000001800D0D42: cmp     cs:dword_1801FB480, r14d
 * 00000001800D0D49: jnz     loc_1800D0E29
 * 00000001800D0D4F: xor     edx, edx
 * 00000001800D0D51: lea     rcx, [rbp+9F60h+var_9F5E]
 * 00000001800D0D55: call    sub_1800A8E58
 * 00000001800D0D5A: mov     bl, [rax]
 * 00000001800D0D5C: call    sub_1800C508C
 * 00000001800D0D61: mov     rdx, rax
 * 00000001800D0D64: mov     r8d, 1A50h
 * 00000001800D0D6A: lea     rcx, [rbp+9F60h+var_93C0]
 * 00000001800D0D71: call    sub_1800A8E40
 * 00000001800D0D76: movups  xmm0, xmmword ptr [rax]
 * 00000001800D0D79: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D0D7F: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D0D83: mov     r9d, r12d
 * 00000001800D0D86: mov     r8d, r12d
 * 00000001800D0D89: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D0D8E: lea     rcx, [rbp+9F60h+var_53B0]
 * 00000001800D0D95: call    sub_1800A8E0C
 * 00000001800D0D9A: movups  xmm6, xmmword ptr [rax]
 * 00000001800D0D9D: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D0DA1: call    sub_1800C50FC
 * 00000001800D0DA6: mov     r8, rax
 * 00000001800D0DA9: mov     r9d, r13d
 * 00000001800D0DAC: mov     edx, 72h ; 'r'
 * 00000001800D0DB1: lea     rcx, [rbp+9F60h+var_370]; Src
 * 00000001800D0DB8: call    sub_180088448
 * 00000001800D0DBD: nop
 * 00000001800D0DBE: mov     r8, rax
 * 00000001800D0DC1: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D0DC8: lea     rcx, [rbp+9F60h+var_390]
 * 00000001800D0DCF: call    sub_18001DD3C
 * 00000001800D0DD4: nop
 * 00000001800D0DD5: lea     r8, aVertex; "/Vertex"
 * 00000001800D0DDC: mov     rdx, rax
 * 00000001800D0DDF: lea     rcx, [rbp+9F60h+var_7A10]
 * 00000001800D0DE6: call    sub_18001DC84
 * 00000001800D0DEB: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D0DF0: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D0DF5: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D0DFA: mov     rcx, rax
 * 00000001800D0DFD: call    sub_180088528
 * 00000001800D0E02: nop
 * 00000001800D0E03: lea     rcx, [rbp+9F60h+var_390]
 * 00000001800D0E0A: call    sub_180011570
 * 00000001800D0E0F: nop
 * 00000001800D0E10: lea     rcx, [rbp+9F60h+var_370]
 * 00000001800D0E17: call    sub_180011570
 * 00000001800D0E1C: nop
 * 00000001800D0E1D: lea     rcx, dword_1801FB480
 * 00000001800D0E24: call    sub_18000C548
 * 00000001800D0E29: mov     rax, [rsi+rdi*8]
 * 00000001800D0E2D: mov     ecx, [r15+rax]
 * 00000001800D0E31: cmp     cs:dword_1801FB484, ecx
 * 00000001800D0E37: jle     loc_1800D0F30
 * 00000001800D0E3D: lea     rcx, dword_1801FB484
 * 00000001800D0E44: call    sub_18000C5B0
 * 00000001800D0E49: cmp     cs:dword_1801FB484, r14d
 * 00000001800D0E50: jnz     loc_1800D0F30
 * 00000001800D0E56: xor     edx, edx
 * 00000001800D0E58: lea     rcx, [rbp+9F60h+var_9F5D]
 * 00000001800D0E5C: call    sub_1800A8E58
 * 00000001800D0E61: mov     bl, [rax]
 * 00000001800D0E63: call    sub_1800C508C
 * 00000001800D0E68: mov     rdx, rax
 * 00000001800D0E6B: mov     r8d, 1A50h
 * 00000001800D0E71: lea     rcx, [rbp+9F60h+var_93B0]
 * 00000001800D0E78: call    sub_1800A8E40
 * 00000001800D0E7D: movups  xmm0, xmmword ptr [rax]
 * 00000001800D0E80: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D0E86: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D0E8A: mov     r9d, r12d
 * 00000001800D0E8D: mov     r8d, r12d
 * 00000001800D0E90: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D0E95: lea     rcx, [rbp+9F60h+var_5390]
 * 00000001800D0E9C: call    sub_1800A8E0C
 * 00000001800D0EA1: movups  xmm6, xmmword ptr [rax]
 * 00000001800D0EA4: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D0EA8: call    sub_1800C50FC
 * 00000001800D0EAD: mov     r8, rax
 * 00000001800D0EB0: mov     r9d, r13d
 * 00000001800D0EB3: mov     edx, 78h ; 'x'
 * 00000001800D0EB8: lea     rcx, [rbp+9F60h+var_310]; Src
 * 00000001800D0EBF: call    sub_180088448
 * 00000001800D0EC4: nop
 * 00000001800D0EC5: mov     r8, rax
 * 00000001800D0EC8: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D0ECF: lea     rcx, [rbp+9F60h+var_330]
 * 00000001800D0ED6: call    sub_18001DD3C
 * 00000001800D0EDB: nop
 * 00000001800D0EDC: lea     r8, aVertex; "/Vertex"
 * 00000001800D0EE3: mov     rdx, rax
 * 00000001800D0EE6: lea     rcx, [rbp+9F60h+var_7A50]
 * 00000001800D0EED: call    sub_18001DC84
 * 00000001800D0EF2: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D0EF7: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D0EFC: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D0F01: mov     rcx, rax
 * 00000001800D0F04: call    sub_180088528
 * 00000001800D0F09: nop
 * 00000001800D0F0A: lea     rcx, [rbp+9F60h+var_330]
 * 00000001800D0F11: call    sub_180011570
 * 00000001800D0F16: nop
 * 00000001800D0F17: lea     rcx, [rbp+9F60h+var_310]
 * 00000001800D0F1E: call    sub_180011570
 * 00000001800D0F23: nop
 * 00000001800D0F24: lea     rcx, dword_1801FB484
 * 00000001800D0F2B: call    sub_18000C548
 * 00000001800D0F30: mov     rax, [rsi+rdi*8]
 * 00000001800D0F34: mov     ecx, [r15+rax]
 * 00000001800D0F38: cmp     cs:dword_1801FB488, ecx
 * 00000001800D0F3E: jle     loc_1800D1037
 * 00000001800D0F44: lea     rcx, dword_1801FB488
 * 00000001800D0F4B: call    sub_18000C5B0
 * 00000001800D0F50: cmp     cs:dword_1801FB488, r14d
 * 00000001800D0F57: jnz     loc_1800D1037
 * 00000001800D0F5D: xor     edx, edx
 * 00000001800D0F5F: lea     rcx, [rbp+9F60h+var_9F5C]
 * 00000001800D0F63: call    sub_1800A8E58
 * 00000001800D0F68: mov     bl, [rax]
 * 00000001800D0F6A: call    sub_1800C508C
 * 00000001800D0F6F: mov     rdx, rax
 * 00000001800D0F72: mov     r8d, 1A50h
 * 00000001800D0F78: lea     rcx, [rbp+9F60h+var_93A0]
 * 00000001800D0F7F: call    sub_1800A8E40
 * 00000001800D0F84: movups  xmm0, xmmword ptr [rax]
 * 00000001800D0F87: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D0F8D: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D0F91: mov     r9d, r12d
 * 00000001800D0F94: mov     r8d, r12d
 * 00000001800D0F97: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D0F9C: lea     rcx, [rbp+9F60h+var_5370]
 * 00000001800D0FA3: call    sub_1800A8E0C
 * 00000001800D0FA8: movups  xmm6, xmmword ptr [rax]
 * 00000001800D0FAB: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D0FAF: call    sub_1800C50FC
 * 00000001800D0FB4: mov     r8, rax
 * 00000001800D0FB7: mov     r9d, r13d
 * 00000001800D0FBA: mov     edx, 7Ah ; 'z'
 * 00000001800D0FBF: lea     rcx, [rbp+9F60h+var_2B0]; Src
 * 00000001800D0FC6: call    sub_180088448
 * 00000001800D0FCB: nop
 * 00000001800D0FCC: mov     r8, rax
 * 00000001800D0FCF: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D0FD6: lea     rcx, [rbp+9F60h+var_2D0]
 * 00000001800D0FDD: call    sub_18001DD3C
 * 00000001800D0FE2: nop
 * 00000001800D0FE3: lea     r8, aVertex; "/Vertex"
 * 00000001800D0FEA: mov     rdx, rax
 * 00000001800D0FED: lea     rcx, [rbp+9F60h+var_7A70]
 * 00000001800D0FF4: call    sub_18001DC84
 * 00000001800D0FF9: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D0FFE: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D1003: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D1008: mov     rcx, rax
 * 00000001800D100B: call    sub_180088528
 * 00000001800D1010: nop
 * 00000001800D1011: lea     rcx, [rbp+9F60h+var_2D0]
 * 00000001800D1018: call    sub_180011570
 * 00000001800D101D: nop
 * 00000001800D101E: lea     rcx, [rbp+9F60h+var_2B0]
 * 00000001800D1025: call    sub_180011570
 * 00000001800D102A: nop
 * 00000001800D102B: lea     rcx, dword_1801FB488
 * 00000001800D1032: call    sub_18000C548
 * 00000001800D1037: mov     rax, [rsi+rdi*8]
 * 00000001800D103B: mov     ecx, [r15+rax]
 * 00000001800D103F: cmp     cs:dword_1801FB48C, ecx
 * 00000001800D1045: jle     loc_1800D113E
 * 00000001800D104B: lea     rcx, dword_1801FB48C
 * 00000001800D1052: call    sub_18000C5B0
 * 00000001800D1057: cmp     cs:dword_1801FB48C, r14d
 * 00000001800D105E: jnz     loc_1800D113E
 * 00000001800D1064: xor     edx, edx
 * 00000001800D1066: lea     rcx, [rbp+9F60h+var_9F5B]
 * 00000001800D106A: call    sub_1800A8E58
 * 00000001800D106F: mov     bl, [rax]
 * 00000001800D1071: call    sub_1800C507C
 * 00000001800D1076: mov     rdx, rax
 * 00000001800D1079: mov     r8d, 1050h
 * 00000001800D107F: lea     rcx, [rbp+9F60h+var_9390]
 * 00000001800D1086: call    sub_1800A8E40
 * 00000001800D108B: movups  xmm0, xmmword ptr [rax]
 * 00000001800D108E: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D1094: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D1098: mov     r9d, r12d
 * 00000001800D109B: mov     r8d, r12d
 * 00000001800D109E: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D10A3: lea     rcx, [rbp+9F60h+var_5350]
 * 00000001800D10AA: call    sub_1800A8E0C
 * 00000001800D10AF: movups  xmm6, xmmword ptr [rax]
 * 00000001800D10B2: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D10B6: call    sub_1800C50FC
 * 00000001800D10BB: mov     r8, rax
 * 00000001800D10BE: mov     r9d, r13d
 * 00000001800D10C1: mov     edx, 80h
 * 00000001800D10C6: lea     rcx, [rbp+9F60h+var_250]; Src
 * 00000001800D10CD: call    sub_180088448
 * 00000001800D10D2: nop
 * 00000001800D10D3: mov     r8, rax
 * 00000001800D10D6: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D10DD: lea     rcx, [rbp+9F60h+var_270]
 * 00000001800D10E4: call    sub_18001DD3C
 * 00000001800D10E9: nop
 * 00000001800D10EA: lea     r8, aVertex; "/Vertex"
 * 00000001800D10F1: mov     rdx, rax
 * 00000001800D10F4: lea     rcx, [rbp+9F60h+var_7AB0]
 * 00000001800D10FB: call    sub_18001DC84
 * 00000001800D1100: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D1105: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D110A: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D110F: mov     rcx, rax
 * 00000001800D1112: call    sub_180088528
 * 00000001800D1117: nop
 * 00000001800D1118: lea     rcx, [rbp+9F60h+var_270]
 * 00000001800D111F: call    sub_180011570
 * 00000001800D1124: nop
 * 00000001800D1125: lea     rcx, [rbp+9F60h+var_250]
 * 00000001800D112C: call    sub_180011570
 * 00000001800D1131: nop
 * 00000001800D1132: lea     rcx, dword_1801FB48C
 * 00000001800D1139: call    sub_18000C548
 * 00000001800D113E: mov     rax, [rsi+rdi*8]
 * 00000001800D1142: mov     ecx, [r15+rax]
 * 00000001800D1146: cmp     cs:dword_1801FB490, ecx
 * 00000001800D114C: jle     loc_1800D1245
 * 00000001800D1152: lea     rcx, dword_1801FB490
 * 00000001800D1159: call    sub_18000C5B0
 * 00000001800D115E: cmp     cs:dword_1801FB490, r14d
 * 00000001800D1165: jnz     loc_1800D1245
 * 00000001800D116B: xor     edx, edx
 * 00000001800D116D: lea     rcx, [rbp+9F60h+var_9F5A]
 * 00000001800D1171: call    sub_1800A8E58
 * 00000001800D1176: mov     bl, [rax]
 * 00000001800D1178: call    sub_1800C507C
 * 00000001800D117D: mov     rdx, rax
 * 00000001800D1180: mov     r8d, 1050h
 * 00000001800D1186: lea     rcx, [rbp+9F60h+var_9380]
 * 00000001800D118D: call    sub_1800A8E40
 * 00000001800D1192: movups  xmm0, xmmword ptr [rax]
 * 00000001800D1195: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D119B: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D119F: mov     r9d, r12d
 * 00000001800D11A2: mov     r8d, r12d
 * 00000001800D11A5: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D11AA: lea     rcx, [rbp+9F60h+var_5330]
 * 00000001800D11B1: call    sub_1800A8E0C
 * 00000001800D11B6: movups  xmm6, xmmword ptr [rax]
 * 00000001800D11B9: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D11BD: call    sub_1800C50FC
 * 00000001800D11C2: mov     r8, rax
 * 00000001800D11C5: mov     r9d, r13d
 * 00000001800D11C8: mov     edx, 82h
 * 00000001800D11CD: lea     rcx, [rbp+9F60h+var_1F0]; Src
 * 00000001800D11D4: call    sub_180088448
 * 00000001800D11D9: nop
 * 00000001800D11DA: mov     r8, rax
 * 00000001800D11DD: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D11E4: lea     rcx, [rbp+9F60h+var_210]
 * 00000001800D11EB: call    sub_18001DD3C
 * 00000001800D11F0: nop
 * 00000001800D11F1: lea     r8, aVertex; "/Vertex"
 * 00000001800D11F8: mov     rdx, rax
 * 00000001800D11FB: lea     rcx, [rbp+9F60h+var_7AD0]
 * 00000001800D1202: call    sub_18001DC84
 * 00000001800D1207: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D120C: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D1211: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D1216: mov     rcx, rax
 * 00000001800D1219: call    sub_180088528
 * 00000001800D121E: nop
 * 00000001800D121F: lea     rcx, [rbp+9F60h+var_210]
 * 00000001800D1226: call    sub_180011570
 * 00000001800D122B: nop
 * 00000001800D122C: lea     rcx, [rbp+9F60h+var_1F0]
 * 00000001800D1233: call    sub_180011570
 * 00000001800D1238: nop
 * 00000001800D1239: lea     rcx, dword_1801FB490
 * 00000001800D1240: call    sub_18000C548
 * 00000001800D1245: mov     rax, [rsi+rdi*8]
 * 00000001800D1249: mov     ecx, [r15+rax]
 * 00000001800D124D: cmp     cs:dword_1801FB494, ecx
 * 00000001800D1253: jle     loc_1800D134C
 * 00000001800D1259: lea     rcx, dword_1801FB494
 * 00000001800D1260: call    sub_18000C5B0
 * 00000001800D1265: cmp     cs:dword_1801FB494, r14d
 * 00000001800D126C: jnz     loc_1800D134C
 * 00000001800D1272: xor     edx, edx
 * 00000001800D1274: lea     rcx, [rbp+9F60h+var_9F59]
 * 00000001800D1278: call    sub_1800A8E58
 * 00000001800D127D: mov     bl, [rax]
 * 00000001800D127F: call    sub_1800C507C
 * 00000001800D1284: mov     rdx, rax
 * 00000001800D1287: mov     r8d, 1050h
 * 00000001800D128D: lea     rcx, [rbp+9F60h+var_9370]
 * 00000001800D1294: call    sub_1800A8E40
 * 00000001800D1299: movups  xmm0, xmmword ptr [rax]
 * 00000001800D129C: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D12A2: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D12A6: mov     r9d, r12d
 * 00000001800D12A9: mov     r8d, r12d
 * 00000001800D12AC: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D12B1: lea     rcx, [rbp+9F60h+var_5310]
 * 00000001800D12B8: call    sub_1800A8E0C
 * 00000001800D12BD: movups  xmm6, xmmword ptr [rax]
 * 00000001800D12C0: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D12C4: call    sub_1800C50FC
 * 00000001800D12C9: mov     r8, rax
 * 00000001800D12CC: mov     r9d, r13d
 * 00000001800D12CF: mov     edx, 88h
 * 00000001800D12D4: lea     rcx, [rbp+9F60h+var_190]; Src
 * 00000001800D12DB: call    sub_180088448
 * 00000001800D12E0: nop
 * 00000001800D12E1: mov     r8, rax
 * 00000001800D12E4: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D12EB: lea     rcx, [rbp+9F60h+var_1B0]
 * 00000001800D12F2: call    sub_18001DD3C
 * 00000001800D12F7: nop
 * 00000001800D12F8: lea     r8, aVertex; "/Vertex"
 * 00000001800D12FF: mov     rdx, rax
 * 00000001800D1302: lea     rcx, [rbp+9F60h+var_7B10]
 * 00000001800D1309: call    sub_18001DC84
 * 00000001800D130E: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D1313: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D1318: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D131D: mov     rcx, rax
 * 00000001800D1320: call    sub_180088528
 * 00000001800D1325: nop
 * 00000001800D1326: lea     rcx, [rbp+9F60h+var_1B0]
 * 00000001800D132D: call    sub_180011570
 * 00000001800D1332: nop
 * 00000001800D1333: lea     rcx, [rbp+9F60h+var_190]
 * 00000001800D133A: call    sub_180011570
 * 00000001800D133F: nop
 * 00000001800D1340: lea     rcx, dword_1801FB494
 * 00000001800D1347: call    sub_18000C548
 * 00000001800D134C: mov     rax, [rsi+rdi*8]
 * 00000001800D1350: mov     ecx, [r15+rax]
 * 00000001800D1354: cmp     cs:dword_1801FB498, ecx
 * 00000001800D135A: jle     loc_1800D1453
 * 00000001800D1360: lea     rcx, dword_1801FB498
 * 00000001800D1367: call    sub_18000C5B0
 * 00000001800D136C: cmp     cs:dword_1801FB498, r14d
 * 00000001800D1373: jnz     loc_1800D1453
 * 00000001800D1379: xor     edx, edx
 * 00000001800D137B: lea     rcx, [rbp+9F60h+var_9F58]
 * 00000001800D137F: call    sub_1800A8E58
 * 00000001800D1384: mov     bl, [rax]
 * 00000001800D1386: call    sub_1800C507C
 * 00000001800D138B: mov     rdx, rax
 * 00000001800D138E: mov     r8d, 1050h
 * 00000001800D1394: lea     rcx, [rbp+9F60h+var_9360]
 * 00000001800D139B: call    sub_1800A8E40
 * 00000001800D13A0: movups  xmm0, xmmword ptr [rax]
 * 00000001800D13A3: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D13A9: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D13AD: mov     r9d, r12d
 * 00000001800D13B0: mov     r8d, r12d
 * 00000001800D13B3: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D13B8: lea     rcx, [rbp+9F60h+var_52F0]
 * 00000001800D13BF: call    sub_1800A8E0C
 * 00000001800D13C4: movups  xmm6, xmmword ptr [rax]
 * 00000001800D13C7: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D13CB: call    sub_1800C50FC
 * 00000001800D13D0: mov     r8, rax
 * 00000001800D13D3: mov     r9d, r13d
 * 00000001800D13D6: mov     edx, 8Ah
 * 00000001800D13DB: lea     rcx, [rbp+9F60h+var_130]; Src
 * 00000001800D13E2: call    sub_180088448
 * 00000001800D13E7: nop
 * 00000001800D13E8: mov     r8, rax
 * 00000001800D13EB: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D13F2: lea     rcx, [rbp+9F60h+var_150]
 * 00000001800D13F9: call    sub_18001DD3C
 * 00000001800D13FE: nop
 * 00000001800D13FF: lea     r8, aVertex; "/Vertex"
 * 00000001800D1406: mov     rdx, rax
 * 00000001800D1409: lea     rcx, [rbp+9F60h+var_7B30]
 * 00000001800D1410: call    sub_18001DC84
 * 00000001800D1415: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D141A: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D141F: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D1424: mov     rcx, rax
 * 00000001800D1427: call    sub_180088528
 * 00000001800D142C: nop
 * 00000001800D142D: lea     rcx, [rbp+9F60h+var_150]
 * 00000001800D1434: call    sub_180011570
 * 00000001800D1439: nop
 * 00000001800D143A: lea     rcx, [rbp+9F60h+var_130]
 * 00000001800D1441: call    sub_180011570
 * 00000001800D1446: nop
 * 00000001800D1447: lea     rcx, dword_1801FB498
 * 00000001800D144E: call    sub_18000C548
 * 00000001800D1453: mov     rax, [rsi+rdi*8]
 * 00000001800D1457: mov     ecx, [r15+rax]
 * 00000001800D145B: cmp     cs:dword_1801FB49C, ecx
 * 00000001800D1461: jle     loc_1800D155A
 * 00000001800D1467: lea     rcx, dword_1801FB49C
 * 00000001800D146E: call    sub_18000C5B0
 * 00000001800D1473: cmp     cs:dword_1801FB49C, r14d
 * 00000001800D147A: jnz     loc_1800D155A
 * 00000001800D1480: xor     edx, edx
 * 00000001800D1482: lea     rcx, [rbp+9F60h+var_9F57]
 * 00000001800D1486: call    sub_1800A8E58
 * 00000001800D148B: mov     bl, [rax]
 * 00000001800D148D: call    sub_1800C507C
 * 00000001800D1492: mov     rdx, rax
 * 00000001800D1495: mov     r8d, 1050h
 * 00000001800D149B: lea     rcx, [rbp+9F60h+var_9350]
 * 00000001800D14A2: call    sub_1800A8E40
 * 00000001800D14A7: movups  xmm0, xmmword ptr [rax]
 * 00000001800D14AA: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D14B0: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D14B4: mov     r9d, r12d
 * 00000001800D14B7: mov     r8d, r12d
 * 00000001800D14BA: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D14BF: lea     rcx, [rbp+9F60h+var_52D0]
 * 00000001800D14C6: call    sub_1800A8E0C
 * 00000001800D14CB: movups  xmm6, xmmword ptr [rax]
 * 00000001800D14CE: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D14D2: call    sub_1800C50FC
 * 00000001800D14D7: mov     r8, rax
 * 00000001800D14DA: mov     r9d, r13d
 * 00000001800D14DD: mov     edx, 90h
 * 00000001800D14E2: lea     rcx, [rbp+9F60h+var_D0]; Src
 * 00000001800D14E9: call    sub_180088448
 * 00000001800D14EE: nop
 * 00000001800D14EF: mov     r8, rax
 * 00000001800D14F2: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D14F9: lea     rcx, [rbp+9F60h+var_F0]
 * 00000001800D1500: call    sub_18001DD3C
 * 00000001800D1505: nop
 * 00000001800D1506: lea     r8, aVertex; "/Vertex"
 * 00000001800D150D: mov     rdx, rax
 * 00000001800D1510: lea     rcx, [rbp+9F60h+var_7B70]
 * 00000001800D1517: call    sub_18001DC84
 * 00000001800D151C: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D1521: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D1526: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D152B: mov     rcx, rax
 * 00000001800D152E: call    sub_180088528
 * 00000001800D1533: nop
 * 00000001800D1534: lea     rcx, [rbp+9F60h+var_F0]
 * 00000001800D153B: call    sub_180011570
 * 00000001800D1540: nop
 * 00000001800D1541: lea     rcx, [rbp+9F60h+var_D0]
 * 00000001800D1548: call    sub_180011570
 * 00000001800D154D: nop
 * 00000001800D154E: lea     rcx, dword_1801FB49C
 * 00000001800D1555: call    sub_18000C548
 * 00000001800D155A: mov     rax, [rsi+rdi*8]
 * 00000001800D155E: mov     ecx, [r15+rax]
 * 00000001800D1562: cmp     cs:dword_1801FB4A0, ecx
 * 00000001800D1568: jle     loc_1800D1661
 * 00000001800D156E: lea     rcx, dword_1801FB4A0
 * 00000001800D1575: call    sub_18000C5B0
 * 00000001800D157A: cmp     cs:dword_1801FB4A0, r14d
 * 00000001800D1581: jnz     loc_1800D1661
 * 00000001800D1587: xor     edx, edx
 * 00000001800D1589: lea     rcx, [rbp+9F60h+var_9F56]
 * 00000001800D158D: call    sub_1800A8E58
 * 00000001800D1592: mov     bl, [rax]
 * 00000001800D1594: call    sub_1800C507C
 * 00000001800D1599: mov     rdx, rax
 * 00000001800D159C: mov     r8d, 1050h
 * 00000001800D15A2: lea     rcx, [rbp+9F60h+var_9340]
 * 00000001800D15A9: call    sub_1800A8E40
 * 00000001800D15AE: movups  xmm0, xmmword ptr [rax]
 * 00000001800D15B1: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D15B7: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D15BB: mov     r9d, r12d
 * 00000001800D15BE: mov     r8d, r12d
 * 00000001800D15C1: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D15C6: lea     rcx, [rbp+9F60h+var_52B0]
 * 00000001800D15CD: call    sub_1800A8E0C
 * 00000001800D15D2: movups  xmm6, xmmword ptr [rax]
 * 00000001800D15D5: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D15D9: call    sub_1800C50FC
 * 00000001800D15DE: mov     r8, rax
 * 00000001800D15E1: mov     r9d, r13d
 * 00000001800D15E4: mov     edx, 92h
 * 00000001800D15E9: lea     rcx, [rbp+9F60h+var_70]; Src
 * 00000001800D15F0: call    sub_180088448
 * 00000001800D15F5: nop
 * 00000001800D15F6: mov     r8, rax
 * 00000001800D15F9: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D1600: lea     rcx, [rbp+9F60h+var_90]
 * 00000001800D1607: call    sub_18001DD3C
 * 00000001800D160C: nop
 * 00000001800D160D: lea     r8, aVertex; "/Vertex"
 * 00000001800D1614: mov     rdx, rax
 * 00000001800D1617: lea     rcx, [rbp+9F60h+var_7B90]
 * 00000001800D161E: call    sub_18001DC84
 * 00000001800D1623: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D1628: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D162D: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D1632: mov     rcx, rax
 * 00000001800D1635: call    sub_180088528
 * 00000001800D163A: nop
 * 00000001800D163B: lea     rcx, [rbp+9F60h+var_90]
 * 00000001800D1642: call    sub_180011570
 * 00000001800D1647: nop
 * 00000001800D1648: lea     rcx, [rbp+9F60h+var_70]
 * 00000001800D164F: call    sub_180011570
 * 00000001800D1654: nop
 * 00000001800D1655: lea     rcx, dword_1801FB4A0
 * 00000001800D165C: call    sub_18000C548
 * 00000001800D1661: mov     rax, [rsi+rdi*8]
 * 00000001800D1665: mov     ecx, [r15+rax]
 * 00000001800D1669: cmp     cs:dword_1801FB4A4, ecx
 * 00000001800D166F: jle     loc_1800D1768
 * 00000001800D1675: lea     rcx, dword_1801FB4A4
 * 00000001800D167C: call    sub_18000C5B0
 * 00000001800D1681: cmp     cs:dword_1801FB4A4, r14d
 * 00000001800D1688: jnz     loc_1800D1768
 * 00000001800D168E: xor     edx, edx
 * 00000001800D1690: lea     rcx, [rbp+9F60h+var_9F55]
 * 00000001800D1694: call    sub_1800A8E58
 * 00000001800D1699: mov     bl, [rax]
 * 00000001800D169B: call    sub_1800C507C
 * 00000001800D16A0: mov     rdx, rax
 * 00000001800D16A3: mov     r8d, 1050h
 * 00000001800D16A9: lea     rcx, [rbp+9F60h+var_9330]
 * 00000001800D16B0: call    sub_1800A8E40
 * 00000001800D16B5: movups  xmm0, xmmword ptr [rax]
 * 00000001800D16B8: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D16BE: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D16C2: mov     r9d, r12d
 * 00000001800D16C5: mov     r8d, r12d
 * 00000001800D16C8: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D16CD: lea     rcx, [rbp+9F60h+var_5290]
 * 00000001800D16D4: call    sub_1800A8E0C
 * 00000001800D16D9: movups  xmm6, xmmword ptr [rax]
 * 00000001800D16DC: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D16E0: call    sub_1800C50FC
 * 00000001800D16E5: mov     r8, rax
 * 00000001800D16E8: mov     r9d, r13d
 * 00000001800D16EB: mov     edx, 98h
 * 00000001800D16F0: lea     rcx, [rbp+9F60h+var_4690]; Src
 * 00000001800D16F7: call    sub_180088448
 * 00000001800D16FC: nop
 * 00000001800D16FD: mov     r8, rax
 * 00000001800D1700: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D1707: lea     rcx, [rbp+9F60h+var_46B0]
 * 00000001800D170E: call    sub_18001DD3C
 * 00000001800D1713: nop
 * 00000001800D1714: lea     r8, aVertex; "/Vertex"
 * 00000001800D171B: mov     rdx, rax
 * 00000001800D171E: lea     rcx, [rbp+9F60h+var_7BD0]
 * 00000001800D1725: call    sub_18001DC84
 * 00000001800D172A: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D172F: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D1734: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D1739: mov     rcx, rax
 * 00000001800D173C: call    sub_180088528
 * 00000001800D1741: nop
 * 00000001800D1742: lea     rcx, [rbp+9F60h+var_46B0]
 * 00000001800D1749: call    sub_180011570
 * 00000001800D174E: nop
 * 00000001800D174F: lea     rcx, [rbp+9F60h+var_4690]
 * 00000001800D1756: call    sub_180011570
 * 00000001800D175B: nop
 * 00000001800D175C: lea     rcx, dword_1801FB4A4
 * 00000001800D1763: call    sub_18000C548
 * 00000001800D1768: mov     rax, [rsi+rdi*8]
 * 00000001800D176C: mov     ecx, [r15+rax]
 * 00000001800D1770: cmp     cs:dword_1801FB4A8, ecx
 * 00000001800D1776: jle     loc_1800D186F
 * 00000001800D177C: lea     rcx, dword_1801FB4A8
 * 00000001800D1783: call    sub_18000C5B0
 * 00000001800D1788: cmp     cs:dword_1801FB4A8, r14d
 * 00000001800D178F: jnz     loc_1800D186F
 * 00000001800D1795: xor     edx, edx
 * 00000001800D1797: lea     rcx, [rbp+9F60h+var_9F54]
 * 00000001800D179B: call    sub_1800A8E58
 * 00000001800D17A0: mov     bl, [rax]
 * 00000001800D17A2: call    sub_1800C507C
 * 00000001800D17A7: mov     rdx, rax
 * 00000001800D17AA: mov     r8d, 1050h
 * 00000001800D17B0: lea     rcx, [rbp+9F60h+var_9320]
 * 00000001800D17B7: call    sub_1800A8E40
 * 00000001800D17BC: movups  xmm0, xmmword ptr [rax]
 * 00000001800D17BF: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D17C5: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D17C9: mov     r9d, r12d
 * 00000001800D17CC: mov     r8d, r12d
 * 00000001800D17CF: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D17D4: lea     rcx, [rbp+9F60h+var_5270]
 * 00000001800D17DB: call    sub_1800A8E0C
 * 00000001800D17E0: movups  xmm6, xmmword ptr [rax]
 * 00000001800D17E3: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D17E7: call    sub_1800C50FC
 * 00000001800D17EC: mov     r8, rax
 * 00000001800D17EF: mov     r9d, r13d
 * 00000001800D17F2: mov     edx, 9Ah
 * 00000001800D17F7: lea     rcx, [rbp+9F60h+var_4630]; Src
 * 00000001800D17FE: call    sub_180088448
 * 00000001800D1803: nop
 * 00000001800D1804: mov     r8, rax
 * 00000001800D1807: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D180E: lea     rcx, [rbp+9F60h+var_4650]
 * 00000001800D1815: call    sub_18001DD3C
 * 00000001800D181A: nop
 * 00000001800D181B: lea     r8, aVertex; "/Vertex"
 * 00000001800D1822: mov     rdx, rax
 * 00000001800D1825: lea     rcx, [rbp+9F60h+var_7BF0]
 * 00000001800D182C: call    sub_18001DC84
 * 00000001800D1831: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D1836: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D183B: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D1840: mov     rcx, rax
 * 00000001800D1843: call    sub_180088528
 * 00000001800D1848: nop
 * 00000001800D1849: lea     rcx, [rbp+9F60h+var_4650]
 * 00000001800D1850: call    sub_180011570
 * 00000001800D1855: nop
 * 00000001800D1856: lea     rcx, [rbp+9F60h+var_4630]
 * 00000001800D185D: call    sub_180011570
 * 00000001800D1862: nop
 * 00000001800D1863: lea     rcx, dword_1801FB4A8
 * 00000001800D186A: call    sub_18000C548
 * 00000001800D186F: mov     rax, [rsi+rdi*8]
 * 00000001800D1873: mov     ecx, [r15+rax]
 * 00000001800D1877: cmp     cs:dword_1801FB4AC, ecx
 * 00000001800D187D: jle     loc_1800D1976
 * 00000001800D1883: lea     rcx, dword_1801FB4AC
 * 00000001800D188A: call    sub_18000C5B0
 * 00000001800D188F: cmp     cs:dword_1801FB4AC, r14d
 * 00000001800D1896: jnz     loc_1800D1976
 * 00000001800D189C: xor     edx, edx
 * 00000001800D189E: lea     rcx, [rbp+9F60h+var_9F53]
 * 00000001800D18A2: call    sub_1800A8E58
 * 00000001800D18A7: mov     bl, [rax]
 * 00000001800D18A9: call    sub_1800C508C
 * 00000001800D18AE: mov     rdx, rax
 * 00000001800D18B1: mov     r8d, 1A50h
 * 00000001800D18B7: lea     rcx, [rbp+9F60h+var_9310]
 * 00000001800D18BE: call    sub_1800A8E40
 * 00000001800D18C3: movups  xmm0, xmmword ptr [rax]
 * 00000001800D18C6: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D18CC: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D18D0: mov     r9d, r12d
 * 00000001800D18D3: mov     r8d, r12d
 * 00000001800D18D6: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D18DB: lea     rcx, [rbp+9F60h+var_5250]
 * 00000001800D18E2: call    sub_1800A8E0C
 * 00000001800D18E7: movups  xmm6, xmmword ptr [rax]
 * 00000001800D18EA: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D18EE: call    sub_1800C50FC
 * 00000001800D18F3: mov     r8, rax
 * 00000001800D18F6: mov     r9d, r13d
 * 00000001800D18F9: mov     edx, 0A0h
 * 00000001800D18FE: lea     rcx, [rbp+9F60h+var_45D0]; Src
 * 00000001800D1905: call    sub_180088448
 * 00000001800D190A: nop
 * 00000001800D190B: mov     r8, rax
 * 00000001800D190E: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D1915: lea     rcx, [rbp+9F60h+var_45F0]
 * 00000001800D191C: call    sub_18001DD3C
 * 00000001800D1921: nop
 * 00000001800D1922: lea     r8, aVertex; "/Vertex"
 * 00000001800D1929: mov     rdx, rax
 * 00000001800D192C: lea     rcx, [rbp+9F60h+var_7C30]
 * 00000001800D1933: call    sub_18001DC84
 * 00000001800D1938: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D193D: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D1942: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D1947: mov     rcx, rax
 * 00000001800D194A: call    sub_180088528
 * 00000001800D194F: nop
 * 00000001800D1950: lea     rcx, [rbp+9F60h+var_45F0]
 * 00000001800D1957: call    sub_180011570
 * 00000001800D195C: nop
 * 00000001800D195D: lea     rcx, [rbp+9F60h+var_45D0]
 * 00000001800D1964: call    sub_180011570
 * 00000001800D1969: nop
 * 00000001800D196A: lea     rcx, dword_1801FB4AC
 * 00000001800D1971: call    sub_18000C548
 * 00000001800D1976: mov     rax, [rsi+rdi*8]
 * 00000001800D197A: mov     ecx, [r15+rax]
 * 00000001800D197E: cmp     cs:dword_1801FB4B0, ecx
 * 00000001800D1984: jle     loc_1800D1A7D
 * 00000001800D198A: lea     rcx, dword_1801FB4B0
 * 00000001800D1991: call    sub_18000C5B0
 * 00000001800D1996: cmp     cs:dword_1801FB4B0, r14d
 * 00000001800D199D: jnz     loc_1800D1A7D
 * 00000001800D19A3: xor     edx, edx
 * 00000001800D19A5: lea     rcx, [rbp+9F60h+var_9F52]
 * 00000001800D19A9: call    sub_1800A8E58
 * 00000001800D19AE: mov     bl, [rax]
 * 00000001800D19B0: call    sub_1800C508C
 * 00000001800D19B5: mov     rdx, rax
 * 00000001800D19B8: mov     r8d, 1A50h
 * 00000001800D19BE: lea     rcx, [rbp+9F60h+var_9300]
 * 00000001800D19C5: call    sub_1800A8E40
 * 00000001800D19CA: movups  xmm0, xmmword ptr [rax]
 * 00000001800D19CD: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D19D3: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D19D7: mov     r9d, r12d
 * 00000001800D19DA: mov     r8d, r12d
 * 00000001800D19DD: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D19E2: lea     rcx, [rbp+9F60h+var_5230]
 * 00000001800D19E9: call    sub_1800A8E0C
 * 00000001800D19EE: movups  xmm6, xmmword ptr [rax]
 * 00000001800D19F1: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D19F5: call    sub_1800C50FC
 * 00000001800D19FA: mov     r8, rax
 * 00000001800D19FD: mov     r9d, r13d
 * 00000001800D1A00: mov     edx, 0A2h
 * 00000001800D1A05: lea     rcx, [rbp+9F60h+var_4570]; Src
 * 00000001800D1A0C: call    sub_180088448
 * 00000001800D1A11: nop
 * 00000001800D1A12: mov     r8, rax
 * 00000001800D1A15: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D1A1C: lea     rcx, [rbp+9F60h+var_4590]
 * 00000001800D1A23: call    sub_18001DD3C
 * 00000001800D1A28: nop
 * 00000001800D1A29: lea     r8, aVertex; "/Vertex"
 * 00000001800D1A30: mov     rdx, rax
 * 00000001800D1A33: lea     rcx, [rbp+9F60h+var_7C50]
 * 00000001800D1A3A: call    sub_18001DC84
 * 00000001800D1A3F: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D1A44: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D1A49: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D1A4E: mov     rcx, rax
 * 00000001800D1A51: call    sub_180088528
 * 00000001800D1A56: nop
 * 00000001800D1A57: lea     rcx, [rbp+9F60h+var_4590]
 * 00000001800D1A5E: call    sub_180011570
 * 00000001800D1A63: nop
 * 00000001800D1A64: lea     rcx, [rbp+9F60h+var_4570]
 * 00000001800D1A6B: call    sub_180011570
 * 00000001800D1A70: nop
 * 00000001800D1A71: lea     rcx, dword_1801FB4B0
 * 00000001800D1A78: call    sub_18000C548
 * 00000001800D1A7D: mov     rax, [rsi+rdi*8]
 * 00000001800D1A81: mov     ecx, [r15+rax]
 * 00000001800D1A85: cmp     cs:dword_1801FB4B4, ecx
 * 00000001800D1A8B: jle     loc_1800D1B84
 * 00000001800D1A91: lea     rcx, dword_1801FB4B4
 * 00000001800D1A98: call    sub_18000C5B0
 * 00000001800D1A9D: cmp     cs:dword_1801FB4B4, r14d
 * 00000001800D1AA4: jnz     loc_1800D1B84
 * 00000001800D1AAA: xor     edx, edx
 * 00000001800D1AAC: lea     rcx, [rbp+9F60h+var_9F51]
 * 00000001800D1AB0: call    sub_1800A8E58
 * 00000001800D1AB5: mov     bl, [rax]
 * 00000001800D1AB7: call    sub_1800C508C
 * 00000001800D1ABC: mov     rdx, rax
 * 00000001800D1ABF: mov     r8d, 1A50h
 * 00000001800D1AC5: lea     rcx, [rbp+9F60h+var_92F0]
 * 00000001800D1ACC: call    sub_1800A8E40
 * 00000001800D1AD1: movups  xmm0, xmmword ptr [rax]
 * 00000001800D1AD4: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D1ADA: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D1ADE: mov     r9d, r12d
 * 00000001800D1AE1: mov     r8d, r12d
 * 00000001800D1AE4: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D1AE9: lea     rcx, [rbp+9F60h+var_5210]
 * 00000001800D1AF0: call    sub_1800A8E0C
 * 00000001800D1AF5: movups  xmm6, xmmword ptr [rax]
 * 00000001800D1AF8: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D1AFC: call    sub_1800C50FC
 * 00000001800D1B01: mov     r8, rax
 * 00000001800D1B04: mov     r9d, r13d
 * 00000001800D1B07: mov     edx, 0A8h
 * 00000001800D1B0C: lea     rcx, [rbp+9F60h+var_4510]; Src
 * 00000001800D1B13: call    sub_180088448
 * 00000001800D1B18: nop
 * 00000001800D1B19: mov     r8, rax
 * 00000001800D1B1C: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D1B23: lea     rcx, [rbp+9F60h+var_4530]
 * 00000001800D1B2A: call    sub_18001DD3C
 * 00000001800D1B2F: nop
 * 00000001800D1B30: lea     r8, aVertex; "/Vertex"
 * 00000001800D1B37: mov     rdx, rax
 * 00000001800D1B3A: lea     rcx, [rbp+9F60h+var_7C90]
 * 00000001800D1B41: call    sub_18001DC84
 * 00000001800D1B46: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D1B4B: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D1B50: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D1B55: mov     rcx, rax
 * 00000001800D1B58: call    sub_180088528
 * 00000001800D1B5D: nop
 * 00000001800D1B5E: lea     rcx, [rbp+9F60h+var_4530]
 * 00000001800D1B65: call    sub_180011570
 * 00000001800D1B6A: nop
 * 00000001800D1B6B: lea     rcx, [rbp+9F60h+var_4510]
 * 00000001800D1B72: call    sub_180011570
 * 00000001800D1B77: nop
 * 00000001800D1B78: lea     rcx, dword_1801FB4B4
 * 00000001800D1B7F: call    sub_18000C548
 * 00000001800D1B84: mov     rax, [rsi+rdi*8]
 * 00000001800D1B88: mov     ecx, [r15+rax]
 * 00000001800D1B8C: cmp     cs:dword_1801FB4B8, ecx
 * 00000001800D1B92: jle     loc_1800D1C8B
 * 00000001800D1B98: lea     rcx, dword_1801FB4B8
 * 00000001800D1B9F: call    sub_18000C5B0
 * 00000001800D1BA4: cmp     cs:dword_1801FB4B8, r14d
 * 00000001800D1BAB: jnz     loc_1800D1C8B
 * 00000001800D1BB1: xor     edx, edx
 * 00000001800D1BB3: lea     rcx, [rbp+9F60h+var_9F50]
 * 00000001800D1BB7: call    sub_1800A8E58
 * 00000001800D1BBC: mov     bl, [rax]
 * 00000001800D1BBE: call    sub_1800C508C
 * 00000001800D1BC3: mov     rdx, rax
 * 00000001800D1BC6: mov     r8d, 1A50h
 * 00000001800D1BCC: lea     rcx, [rbp+9F60h+var_92E0]
 * 00000001800D1BD3: call    sub_1800A8E40
 * 00000001800D1BD8: movups  xmm0, xmmword ptr [rax]
 * 00000001800D1BDB: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D1BE1: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D1BE5: mov     r9d, r12d
 * 00000001800D1BE8: mov     r8d, r12d
 * 00000001800D1BEB: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D1BF0: lea     rcx, [rbp+9F60h+var_51F0]
 * 00000001800D1BF7: call    sub_1800A8E0C
 * 00000001800D1BFC: movups  xmm6, xmmword ptr [rax]
 * 00000001800D1BFF: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D1C03: call    sub_1800C50FC
 * 00000001800D1C08: mov     r8, rax
 * 00000001800D1C0B: mov     r9d, r13d
 * 00000001800D1C0E: mov     edx, 0AAh
 * 00000001800D1C13: lea     rcx, [rbp+9F60h+var_44B0]; Src
 * 00000001800D1C1A: call    sub_180088448
 * 00000001800D1C1F: nop
 * 00000001800D1C20: mov     r8, rax
 * 00000001800D1C23: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D1C2A: lea     rcx, [rbp+9F60h+var_44D0]
 * 00000001800D1C31: call    sub_18001DD3C
 * 00000001800D1C36: nop
 * 00000001800D1C37: lea     r8, aVertex; "/Vertex"
 * 00000001800D1C3E: mov     rdx, rax
 * 00000001800D1C41: lea     rcx, [rbp+9F60h+var_7CB0]
 * 00000001800D1C48: call    sub_18001DC84
 * 00000001800D1C4D: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D1C52: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D1C57: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D1C5C: mov     rcx, rax
 * 00000001800D1C5F: call    sub_180088528
 * 00000001800D1C64: nop
 * 00000001800D1C65: lea     rcx, [rbp+9F60h+var_44D0]
 * 00000001800D1C6C: call    sub_180011570
 * 00000001800D1C71: nop
 * 00000001800D1C72: lea     rcx, [rbp+9F60h+var_44B0]
 * 00000001800D1C79: call    sub_180011570
 * 00000001800D1C7E: nop
 * 00000001800D1C7F: lea     rcx, dword_1801FB4B8
 * 00000001800D1C86: call    sub_18000C548
 * 00000001800D1C8B: mov     rax, [rsi+rdi*8]
 * 00000001800D1C8F: mov     ecx, [r15+rax]
 * 00000001800D1C93: cmp     cs:dword_1801FB4BC, ecx
 * 00000001800D1C99: jle     loc_1800D1D92
 * 00000001800D1C9F: lea     rcx, dword_1801FB4BC
 * 00000001800D1CA6: call    sub_18000C5B0
 * 00000001800D1CAB: cmp     cs:dword_1801FB4BC, r14d
 * 00000001800D1CB2: jnz     loc_1800D1D92
 * 00000001800D1CB8: xor     edx, edx
 * 00000001800D1CBA: lea     rcx, [rbp+9F60h+var_9F4F]
 * 00000001800D1CBE: call    sub_1800A8E58
 * 00000001800D1CC3: mov     bl, [rax]
 * 00000001800D1CC5: call    sub_1800C508C
 * 00000001800D1CCA: mov     rdx, rax
 * 00000001800D1CCD: mov     r8d, 1A50h
 * 00000001800D1CD3: lea     rcx, [rbp+9F60h+var_92D0]
 * 00000001800D1CDA: call    sub_1800A8E40
 * 00000001800D1CDF: movups  xmm0, xmmword ptr [rax]
 * 00000001800D1CE2: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D1CE8: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D1CEC: mov     r9d, r12d
 * 00000001800D1CEF: mov     r8d, r12d
 * 00000001800D1CF2: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D1CF7: lea     rcx, [rbp+9F60h+var_51D0]
 * 00000001800D1CFE: call    sub_1800A8E0C
 * 00000001800D1D03: movups  xmm6, xmmword ptr [rax]
 * 00000001800D1D06: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D1D0A: call    sub_1800C50FC
 * 00000001800D1D0F: mov     r8, rax
 * 00000001800D1D12: mov     r9d, r13d
 * 00000001800D1D15: mov     edx, 0B0h
 * 00000001800D1D1A: lea     rcx, [rbp+9F60h+var_4450]; Src
 * 00000001800D1D21: call    sub_180088448
 * 00000001800D1D26: nop
 * 00000001800D1D27: mov     r8, rax
 * 00000001800D1D2A: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D1D31: lea     rcx, [rbp+9F60h+var_4470]
 * 00000001800D1D38: call    sub_18001DD3C
 * 00000001800D1D3D: nop
 * 00000001800D1D3E: lea     r8, aVertex; "/Vertex"
 * 00000001800D1D45: mov     rdx, rax
 * 00000001800D1D48: lea     rcx, [rbp+9F60h+var_7CF0]
 * 00000001800D1D4F: call    sub_18001DC84
 * 00000001800D1D54: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D1D59: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D1D5E: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D1D63: mov     rcx, rax
 * 00000001800D1D66: call    sub_180088528
 * 00000001800D1D6B: nop
 * 00000001800D1D6C: lea     rcx, [rbp+9F60h+var_4470]
 * 00000001800D1D73: call    sub_180011570
 * 00000001800D1D78: nop
 * 00000001800D1D79: lea     rcx, [rbp+9F60h+var_4450]
 * 00000001800D1D80: call    sub_180011570
 * 00000001800D1D85: nop
 * 00000001800D1D86: lea     rcx, dword_1801FB4BC
 * 00000001800D1D8D: call    sub_18000C548
 * 00000001800D1D92: mov     rax, [rsi+rdi*8]
 * 00000001800D1D96: mov     ecx, [r15+rax]
 * 00000001800D1D9A: cmp     cs:dword_1801FB4C0, ecx
 * 00000001800D1DA0: jle     loc_1800D1E99
 * 00000001800D1DA6: lea     rcx, dword_1801FB4C0
 * 00000001800D1DAD: call    sub_18000C5B0
 * 00000001800D1DB2: cmp     cs:dword_1801FB4C0, r14d
 * 00000001800D1DB9: jnz     loc_1800D1E99
 * 00000001800D1DBF: xor     edx, edx
 * 00000001800D1DC1: lea     rcx, [rbp+9F60h+var_9F4E]
 * 00000001800D1DC5: call    sub_1800A8E58
 * 00000001800D1DCA: mov     bl, [rax]
 * 00000001800D1DCC: call    sub_1800C508C
 * 00000001800D1DD1: mov     rdx, rax
 * 00000001800D1DD4: mov     r8d, 1A50h
 * 00000001800D1DDA: lea     rcx, [rbp+9F60h+var_92C0]
 * 00000001800D1DE1: call    sub_1800A8E40
 * 00000001800D1DE6: movups  xmm0, xmmword ptr [rax]
 * 00000001800D1DE9: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D1DEF: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D1DF3: mov     r9d, r12d
 * 00000001800D1DF6: mov     r8d, r12d
 * 00000001800D1DF9: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D1DFE: lea     rcx, [rbp+9F60h+var_51B0]
 * 00000001800D1E05: call    sub_1800A8E0C
 * 00000001800D1E0A: movups  xmm6, xmmword ptr [rax]
 * 00000001800D1E0D: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D1E11: call    sub_1800C50FC
 * 00000001800D1E16: mov     r8, rax
 * 00000001800D1E19: mov     r9d, r13d
 * 00000001800D1E1C: mov     edx, 0B2h
 * 00000001800D1E21: lea     rcx, [rbp+9F60h+var_43F0]; Src
 * 00000001800D1E28: call    sub_180088448
 * 00000001800D1E2D: nop
 * 00000001800D1E2E: mov     r8, rax
 * 00000001800D1E31: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D1E38: lea     rcx, [rbp+9F60h+var_4410]
 * 00000001800D1E3F: call    sub_18001DD3C
 * 00000001800D1E44: nop
 * 00000001800D1E45: lea     r8, aVertex; "/Vertex"
 * 00000001800D1E4C: mov     rdx, rax
 * 00000001800D1E4F: lea     rcx, [rbp+9F60h+var_7D10]
 * 00000001800D1E56: call    sub_18001DC84
 * 00000001800D1E5B: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D1E60: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D1E65: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D1E6A: mov     rcx, rax
 * 00000001800D1E6D: call    sub_180088528
 * 00000001800D1E72: nop
 * 00000001800D1E73: lea     rcx, [rbp+9F60h+var_4410]
 * 00000001800D1E7A: call    sub_180011570
 * 00000001800D1E7F: nop
 * 00000001800D1E80: lea     rcx, [rbp+9F60h+var_43F0]
 * 00000001800D1E87: call    sub_180011570
 * 00000001800D1E8C: nop
 * 00000001800D1E8D: lea     rcx, dword_1801FB4C0
 * 00000001800D1E94: call    sub_18000C548
 * 00000001800D1E99: mov     rax, [rsi+rdi*8]
 * 00000001800D1E9D: mov     ecx, [r15+rax]
 * 00000001800D1EA1: cmp     cs:dword_1801FB4C4, ecx
 * 00000001800D1EA7: jle     loc_1800D1FA0
 * 00000001800D1EAD: lea     rcx, dword_1801FB4C4
 * 00000001800D1EB4: call    sub_18000C5B0
 * 00000001800D1EB9: cmp     cs:dword_1801FB4C4, r14d
 * 00000001800D1EC0: jnz     loc_1800D1FA0
 * 00000001800D1EC6: xor     edx, edx
 * 00000001800D1EC8: lea     rcx, [rbp+9F60h+var_9F4D]
 * 00000001800D1ECC: call    sub_1800A8E58
 * 00000001800D1ED1: mov     bl, [rax]
 * 00000001800D1ED3: call    sub_1800C508C
 * 00000001800D1ED8: mov     rdx, rax
 * 00000001800D1EDB: mov     r8d, 1A50h
 * 00000001800D1EE1: lea     rcx, [rbp+9F60h+var_92B0]
 * 00000001800D1EE8: call    sub_1800A8E40
 * 00000001800D1EED: movups  xmm0, xmmword ptr [rax]
 * 00000001800D1EF0: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D1EF6: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D1EFA: mov     r9d, r12d
 * 00000001800D1EFD: mov     r8d, r12d
 * 00000001800D1F00: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D1F05: lea     rcx, [rbp+9F60h+var_5190]
 * 00000001800D1F0C: call    sub_1800A8E0C
 * 00000001800D1F11: movups  xmm6, xmmword ptr [rax]
 * 00000001800D1F14: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D1F18: call    sub_1800C50FC
 * 00000001800D1F1D: mov     r8, rax
 * 00000001800D1F20: mov     r9d, r13d
 * 00000001800D1F23: mov     edx, 0B8h
 * 00000001800D1F28: lea     rcx, [rbp+9F60h+var_4390]; Src
 * 00000001800D1F2F: call    sub_180088448
 * 00000001800D1F34: nop
 * 00000001800D1F35: mov     r8, rax
 * 00000001800D1F38: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D1F3F: lea     rcx, [rbp+9F60h+var_43B0]
 * 00000001800D1F46: call    sub_18001DD3C
 * 00000001800D1F4B: nop
 * 00000001800D1F4C: lea     r8, aVertex; "/Vertex"
 * 00000001800D1F53: mov     rdx, rax
 * 00000001800D1F56: lea     rcx, [rbp+9F60h+var_7D50]
 * 00000001800D1F5D: call    sub_18001DC84
 * 00000001800D1F62: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D1F67: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D1F6C: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D1F71: mov     rcx, rax
 * 00000001800D1F74: call    sub_180088528
 * 00000001800D1F79: nop
 * 00000001800D1F7A: lea     rcx, [rbp+9F60h+var_43B0]
 * 00000001800D1F81: call    sub_180011570
 * 00000001800D1F86: nop
 * 00000001800D1F87: lea     rcx, [rbp+9F60h+var_4390]
 * 00000001800D1F8E: call    sub_180011570
 * 00000001800D1F93: nop
 * 00000001800D1F94: lea     rcx, dword_1801FB4C4
 * 00000001800D1F9B: call    sub_18000C548
 * 00000001800D1FA0: mov     rax, [rsi+rdi*8]
 * 00000001800D1FA4: mov     ecx, [r15+rax]
 * 00000001800D1FA8: cmp     cs:dword_1801FB4C8, ecx
 * 00000001800D1FAE: jle     loc_1800D20A7
 * 00000001800D1FB4: lea     rcx, dword_1801FB4C8
 * 00000001800D1FBB: call    sub_18000C5B0
 * 00000001800D1FC0: cmp     cs:dword_1801FB4C8, r14d
 * 00000001800D1FC7: jnz     loc_1800D20A7
 * 00000001800D1FCD: xor     edx, edx
 * 00000001800D1FCF: lea     rcx, [rbp+9F60h+var_9F4C]
 * 00000001800D1FD3: call    sub_1800A8E58
 * 00000001800D1FD8: mov     bl, [rax]
 * 00000001800D1FDA: call    sub_1800C508C
 * 00000001800D1FDF: mov     rdx, rax
 * 00000001800D1FE2: mov     r8d, 1A50h
 * 00000001800D1FE8: lea     rcx, [rbp+9F60h+var_92A0]
 * 00000001800D1FEF: call    sub_1800A8E40
 * 00000001800D1FF4: movups  xmm0, xmmword ptr [rax]
 * 00000001800D1FF7: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D1FFD: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D2001: mov     r9d, r12d
 * 00000001800D2004: mov     r8d, r12d
 * 00000001800D2007: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D200C: lea     rcx, [rbp+9F60h+var_5170]
 * 00000001800D2013: call    sub_1800A8E0C
 * 00000001800D2018: movups  xmm6, xmmword ptr [rax]
 * 00000001800D201B: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D201F: call    sub_1800C50FC
 * 00000001800D2024: mov     r8, rax
 * 00000001800D2027: mov     r9d, r13d
 * 00000001800D202A: mov     edx, 0BAh
 * 00000001800D202F: lea     rcx, [rbp+9F60h+var_4330]; Src
 * 00000001800D2036: call    sub_180088448
 * 00000001800D203B: nop
 * 00000001800D203C: mov     r8, rax
 * 00000001800D203F: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D2046: lea     rcx, [rbp+9F60h+var_4350]
 * 00000001800D204D: call    sub_18001DD3C
 * 00000001800D2052: nop
 * 00000001800D2053: lea     r8, aVertex; "/Vertex"
 * 00000001800D205A: mov     rdx, rax
 * 00000001800D205D: lea     rcx, [rbp+9F60h+var_7D70]
 * 00000001800D2064: call    sub_18001DC84
 * 00000001800D2069: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D206E: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D2073: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D2078: mov     rcx, rax
 * 00000001800D207B: call    sub_180088528
 * 00000001800D2080: nop
 * 00000001800D2081: lea     rcx, [rbp+9F60h+var_4350]
 * 00000001800D2088: call    sub_180011570
 * 00000001800D208D: nop
 * 00000001800D208E: lea     rcx, [rbp+9F60h+var_4330]
 * 00000001800D2095: call    sub_180011570
 * 00000001800D209A: nop
 * 00000001800D209B: lea     rcx, dword_1801FB4C8
 * 00000001800D20A2: call    sub_18000C548
 * 00000001800D20A7: mov     rax, [rsi+rdi*8]
 * 00000001800D20AB: mov     ecx, [r15+rax]
 * 00000001800D20AF: cmp     cs:dword_1801FB4CC, ecx
 * 00000001800D20B5: jle     loc_1800D21AE
 * 00000001800D20BB: lea     rcx, dword_1801FB4CC
 * 00000001800D20C2: call    sub_18000C5B0
 * 00000001800D20C7: cmp     cs:dword_1801FB4CC, r14d
 * 00000001800D20CE: jnz     loc_1800D21AE
 * 00000001800D20D4: xor     edx, edx
 * 00000001800D20D6: lea     rcx, [rbp+9F60h+var_9F4B]
 * 00000001800D20DA: call    sub_1800A8E58
 * 00000001800D20DF: mov     bl, [rax]
 * 00000001800D20E1: call    sub_1800C507C
 * 00000001800D20E6: mov     rdx, rax
 * 00000001800D20E9: mov     r8d, 1050h
 * 00000001800D20EF: lea     rcx, [rbp+9F60h+var_9290]
 * 00000001800D20F6: call    sub_1800A8E40
 * 00000001800D20FB: movups  xmm0, xmmword ptr [rax]
 * 00000001800D20FE: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D2104: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D2108: mov     r9d, r12d
 * 00000001800D210B: mov     r8d, r12d
 * 00000001800D210E: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D2113: lea     rcx, [rbp+9F60h+var_5150]
 * 00000001800D211A: call    sub_1800A8E0C
 * 00000001800D211F: movups  xmm6, xmmword ptr [rax]
 * 00000001800D2122: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D2126: call    sub_1800C50FC
 * 00000001800D212B: mov     r8, rax
 * 00000001800D212E: mov     r9d, r13d
 * 00000001800D2131: mov     edx, 0C0h
 * 00000001800D2136: lea     rcx, [rbp+9F60h+var_42D0]; Src
 * 00000001800D213D: call    sub_180088448
 * 00000001800D2142: nop
 * 00000001800D2143: mov     r8, rax
 * 00000001800D2146: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D214D: lea     rcx, [rbp+9F60h+var_42F0]
 * 00000001800D2154: call    sub_18001DD3C
 * 00000001800D2159: nop
 * 00000001800D215A: lea     r8, aVertex; "/Vertex"
 * 00000001800D2161: mov     rdx, rax
 * 00000001800D2164: lea     rcx, [rbp+9F60h+var_7DB0]
 * 00000001800D216B: call    sub_18001DC84
 * 00000001800D2170: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D2175: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D217A: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D217F: mov     rcx, rax
 * 00000001800D2182: call    sub_180088528
 * 00000001800D2187: nop
 * 00000001800D2188: lea     rcx, [rbp+9F60h+var_42F0]
 * 00000001800D218F: call    sub_180011570
 * 00000001800D2194: nop
 * 00000001800D2195: lea     rcx, [rbp+9F60h+var_42D0]
 * 00000001800D219C: call    sub_180011570
 * 00000001800D21A1: nop
 * 00000001800D21A2: lea     rcx, dword_1801FB4CC
 * 00000001800D21A9: call    sub_18000C548
 * 00000001800D21AE: mov     rax, [rsi+rdi*8]
 * 00000001800D21B2: mov     ecx, [r15+rax]
 * 00000001800D21B6: cmp     cs:dword_1801FB4D0, ecx
 * 00000001800D21BC: jle     loc_1800D22B5
 * 00000001800D21C2: lea     rcx, dword_1801FB4D0
 * 00000001800D21C9: call    sub_18000C5B0
 * 00000001800D21CE: cmp     cs:dword_1801FB4D0, r14d
 * 00000001800D21D5: jnz     loc_1800D22B5
 * 00000001800D21DB: xor     edx, edx
 * 00000001800D21DD: lea     rcx, [rbp+9F60h+var_9F4A]
 * 00000001800D21E1: call    sub_1800A8E58
 * 00000001800D21E6: mov     bl, [rax]
 * 00000001800D21E8: call    sub_1800C507C
 * 00000001800D21ED: mov     rdx, rax
 * 00000001800D21F0: mov     r8d, 1050h
 * 00000001800D21F6: lea     rcx, [rbp+9F60h+var_9280]
 * 00000001800D21FD: call    sub_1800A8E40
 * 00000001800D2202: movups  xmm0, xmmword ptr [rax]
 * 00000001800D2205: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D220B: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D220F: mov     r9d, r12d
 * 00000001800D2212: mov     r8d, r12d
 * 00000001800D2215: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D221A: lea     rcx, [rbp+9F60h+var_5130]
 * 00000001800D2221: call    sub_1800A8E0C
 * 00000001800D2226: movups  xmm6, xmmword ptr [rax]
 * 00000001800D2229: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D222D: call    sub_1800C50FC
 * 00000001800D2232: mov     r8, rax
 * 00000001800D2235: mov     r9d, r13d
 * 00000001800D2238: mov     edx, 0C2h
 * 00000001800D223D: lea     rcx, [rbp+9F60h+var_4270]; Src
 * 00000001800D2244: call    sub_180088448
 * 00000001800D2249: nop
 * 00000001800D224A: mov     r8, rax
 * 00000001800D224D: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D2254: lea     rcx, [rbp+9F60h+var_4290]
 * 00000001800D225B: call    sub_18001DD3C
 * 00000001800D2260: nop
 * 00000001800D2261: lea     r8, aVertex; "/Vertex"
 * 00000001800D2268: mov     rdx, rax
 * 00000001800D226B: lea     rcx, [rbp+9F60h+var_7DD0]
 * 00000001800D2272: call    sub_18001DC84
 * 00000001800D2277: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D227C: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D2281: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D2286: mov     rcx, rax
 * 00000001800D2289: call    sub_180088528
 * 00000001800D228E: nop
 * 00000001800D228F: lea     rcx, [rbp+9F60h+var_4290]
 * 00000001800D2296: call    sub_180011570
 * 00000001800D229B: nop
 * 00000001800D229C: lea     rcx, [rbp+9F60h+var_4270]
 * 00000001800D22A3: call    sub_180011570
 * 00000001800D22A8: nop
 * 00000001800D22A9: lea     rcx, dword_1801FB4D0
 * 00000001800D22B0: call    sub_18000C548
 * 00000001800D22B5: mov     rax, [rsi+rdi*8]
 * 00000001800D22B9: mov     ecx, [r15+rax]
 * 00000001800D22BD: cmp     cs:dword_1801FB4D4, ecx
 * 00000001800D22C3: jle     loc_1800D23BC
 * 00000001800D22C9: lea     rcx, dword_1801FB4D4
 * 00000001800D22D0: call    sub_18000C5B0
 * 00000001800D22D5: cmp     cs:dword_1801FB4D4, r14d
 * 00000001800D22DC: jnz     loc_1800D23BC
 * 00000001800D22E2: xor     edx, edx
 * 00000001800D22E4: lea     rcx, [rbp+9F60h+var_9F49]
 * 00000001800D22E8: call    sub_1800A8E58
 * 00000001800D22ED: mov     bl, [rax]
 * 00000001800D22EF: call    sub_1800C507C
 * 00000001800D22F4: mov     rdx, rax
 * 00000001800D22F7: mov     r8d, 1050h
 * 00000001800D22FD: lea     rcx, [rbp+9F60h+var_9270]
 * 00000001800D2304: call    sub_1800A8E40
 * 00000001800D2309: movups  xmm0, xmmword ptr [rax]
 * 00000001800D230C: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D2312: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D2316: mov     r9d, r12d
 * 00000001800D2319: mov     r8d, r12d
 * 00000001800D231C: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D2321: lea     rcx, [rbp+9F60h+var_5110]
 * 00000001800D2328: call    sub_1800A8E0C
 * 00000001800D232D: movups  xmm6, xmmword ptr [rax]
 * 00000001800D2330: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D2334: call    sub_1800C50FC
 * 00000001800D2339: mov     r8, rax
 * 00000001800D233C: mov     r9d, r13d
 * 00000001800D233F: mov     edx, 0C8h
 * 00000001800D2344: lea     rcx, [rbp+9F60h+var_4210]; Src
 * 00000001800D234B: call    sub_180088448
 * 00000001800D2350: nop
 * 00000001800D2351: mov     r8, rax
 * 00000001800D2354: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D235B: lea     rcx, [rbp+9F60h+var_4230]
 * 00000001800D2362: call    sub_18001DD3C
 * 00000001800D2367: nop
 * 00000001800D2368: lea     r8, aVertex; "/Vertex"
 * 00000001800D236F: mov     rdx, rax
 * 00000001800D2372: lea     rcx, [rbp+9F60h+var_7E10]
 * 00000001800D2379: call    sub_18001DC84
 * 00000001800D237E: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D2383: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D2388: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D238D: mov     rcx, rax
 * 00000001800D2390: call    sub_180088528
 * 00000001800D2395: nop
 * 00000001800D2396: lea     rcx, [rbp+9F60h+var_4230]
 * 00000001800D239D: call    sub_180011570
 * 00000001800D23A2: nop
 * 00000001800D23A3: lea     rcx, [rbp+9F60h+var_4210]
 * 00000001800D23AA: call    sub_180011570
 * 00000001800D23AF: nop
 * 00000001800D23B0: lea     rcx, dword_1801FB4D4
 * 00000001800D23B7: call    sub_18000C548
 * 00000001800D23BC: mov     rax, [rsi+rdi*8]
 * 00000001800D23C0: mov     ecx, [r15+rax]
 * 00000001800D23C4: cmp     cs:dword_1801FB4D8, ecx
 * 00000001800D23CA: jle     loc_1800D24C3
 * 00000001800D23D0: lea     rcx, dword_1801FB4D8
 * 00000001800D23D7: call    sub_18000C5B0
 * 00000001800D23DC: cmp     cs:dword_1801FB4D8, r14d
 * 00000001800D23E3: jnz     loc_1800D24C3
 * 00000001800D23E9: xor     edx, edx
 * 00000001800D23EB: lea     rcx, [rbp+9F60h+var_9F48]
 * 00000001800D23EF: call    sub_1800A8E58
 * 00000001800D23F4: mov     bl, [rax]
 * 00000001800D23F6: call    sub_1800C507C
 * 00000001800D23FB: mov     rdx, rax
 * 00000001800D23FE: mov     r8d, 1050h
 * 00000001800D2404: lea     rcx, [rbp+9F60h+var_9260]
 * 00000001800D240B: call    sub_1800A8E40
 * 00000001800D2410: movups  xmm0, xmmword ptr [rax]
 * 00000001800D2413: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D2419: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D241D: mov     r9d, r12d
 * 00000001800D2420: mov     r8d, r12d
 * 00000001800D2423: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D2428: lea     rcx, [rbp+9F60h+var_50F0]
 * 00000001800D242F: call    sub_1800A8E0C
 * 00000001800D2434: movups  xmm6, xmmword ptr [rax]
 * 00000001800D2437: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D243B: call    sub_1800C50FC
 * 00000001800D2440: mov     r8, rax
 * 00000001800D2443: mov     r9d, r13d
 * 00000001800D2446: mov     edx, 0CAh
 * 00000001800D244B: lea     rcx, [rbp+9F60h+var_41B0]; Src
 * 00000001800D2452: call    sub_180088448
 * 00000001800D2457: nop
 * 00000001800D2458: mov     r8, rax
 * 00000001800D245B: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D2462: lea     rcx, [rbp+9F60h+var_41D0]
 * 00000001800D2469: call    sub_18001DD3C
 * 00000001800D246E: nop
 * 00000001800D246F: lea     r8, aVertex; "/Vertex"
 * 00000001800D2476: mov     rdx, rax
 * 00000001800D2479: lea     rcx, [rbp+9F60h+var_7E30]
 * 00000001800D2480: call    sub_18001DC84
 * 00000001800D2485: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D248A: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D248F: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D2494: mov     rcx, rax
 * 00000001800D2497: call    sub_180088528
 * 00000001800D249C: nop
 * 00000001800D249D: lea     rcx, [rbp+9F60h+var_41D0]
 * 00000001800D24A4: call    sub_180011570
 * 00000001800D24A9: nop
 * 00000001800D24AA: lea     rcx, [rbp+9F60h+var_41B0]
 * 00000001800D24B1: call    sub_180011570
 * 00000001800D24B6: nop
 * 00000001800D24B7: lea     rcx, dword_1801FB4D8
 * 00000001800D24BE: call    sub_18000C548
 * 00000001800D24C3: mov     rax, [rsi+rdi*8]
 * 00000001800D24C7: mov     ecx, [r15+rax]
 * 00000001800D24CB: cmp     cs:dword_1801FB4DC, ecx
 * 00000001800D24D1: jle     loc_1800D25CA
 * 00000001800D24D7: lea     rcx, dword_1801FB4DC
 * 00000001800D24DE: call    sub_18000C5B0
 * 00000001800D24E3: cmp     cs:dword_1801FB4DC, r14d
 * 00000001800D24EA: jnz     loc_1800D25CA
 * 00000001800D24F0: xor     edx, edx
 * 00000001800D24F2: lea     rcx, [rbp+9F60h+var_9F47]
 * 00000001800D24F6: call    sub_1800A8E58
 * 00000001800D24FB: mov     bl, [rax]
 * 00000001800D24FD: call    sub_1800C507C
 * 00000001800D2502: mov     rdx, rax
 * 00000001800D2505: mov     r8d, 1050h
 * 00000001800D250B: lea     rcx, [rbp+9F60h+var_9250]
 * 00000001800D2512: call    sub_1800A8E40
 * 00000001800D2517: movups  xmm0, xmmword ptr [rax]
 * 00000001800D251A: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D2520: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D2524: mov     r9d, r12d
 * 00000001800D2527: mov     r8d, r12d
 * 00000001800D252A: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D252F: lea     rcx, [rbp+9F60h+var_50D0]
 * 00000001800D2536: call    sub_1800A8E0C
 * 00000001800D253B: movups  xmm6, xmmword ptr [rax]
 * 00000001800D253E: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D2542: call    sub_1800C50FC
 * 00000001800D2547: mov     r8, rax
 * 00000001800D254A: mov     r9d, r13d
 * 00000001800D254D: mov     edx, 0D0h
 * 00000001800D2552: lea     rcx, [rbp+9F60h+var_4150]; Src
 * 00000001800D2559: call    sub_180088448
 * 00000001800D255E: nop
 * 00000001800D255F: mov     r8, rax
 * 00000001800D2562: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D2569: lea     rcx, [rbp+9F60h+var_4170]
 * 00000001800D2570: call    sub_18001DD3C
 * 00000001800D2575: nop
 * 00000001800D2576: lea     r8, aVertex; "/Vertex"
 * 00000001800D257D: mov     rdx, rax
 * 00000001800D2580: lea     rcx, [rbp+9F60h+var_7E70]
 * 00000001800D2587: call    sub_18001DC84
 * 00000001800D258C: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D2591: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D2596: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D259B: mov     rcx, rax
 * 00000001800D259E: call    sub_180088528
 * 00000001800D25A3: nop
 * 00000001800D25A4: lea     rcx, [rbp+9F60h+var_4170]
 * 00000001800D25AB: call    sub_180011570
 * 00000001800D25B0: nop
 * 00000001800D25B1: lea     rcx, [rbp+9F60h+var_4150]
 * 00000001800D25B8: call    sub_180011570
 * 00000001800D25BD: nop
 * 00000001800D25BE: lea     rcx, dword_1801FB4DC
 * 00000001800D25C5: call    sub_18000C548
 * 00000001800D25CA: mov     rax, [rsi+rdi*8]
 * 00000001800D25CE: mov     ecx, [r15+rax]
 * 00000001800D25D2: cmp     cs:dword_1801FB4E0, ecx
 * 00000001800D25D8: jle     loc_1800D26D1
 * 00000001800D25DE: lea     rcx, dword_1801FB4E0
 * 00000001800D25E5: call    sub_18000C5B0
 * 00000001800D25EA: cmp     cs:dword_1801FB4E0, r14d
 * 00000001800D25F1: jnz     loc_1800D26D1
 * 00000001800D25F7: xor     edx, edx
 * 00000001800D25F9: lea     rcx, [rbp+9F60h+var_9F46]
 * 00000001800D25FD: call    sub_1800A8E58
 * 00000001800D2602: mov     bl, [rax]
 * 00000001800D2604: call    sub_1800C507C
 * 00000001800D2609: mov     rdx, rax
 * 00000001800D260C: mov     r8d, 1050h
 * 00000001800D2612: lea     rcx, [rbp+9F60h+var_9240]
 * 00000001800D2619: call    sub_1800A8E40
 * 00000001800D261E: movups  xmm0, xmmword ptr [rax]
 * 00000001800D2621: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D2627: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D262B: mov     r9d, r12d
 * 00000001800D262E: mov     r8d, r12d
 * 00000001800D2631: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D2636: lea     rcx, [rbp+9F60h+var_50B0]
 * 00000001800D263D: call    sub_1800A8E0C
 * 00000001800D2642: movups  xmm6, xmmword ptr [rax]
 * 00000001800D2645: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D2649: call    sub_1800C50FC
 * 00000001800D264E: mov     r8, rax
 * 00000001800D2651: mov     r9d, r13d
 * 00000001800D2654: mov     edx, 0D2h
 * 00000001800D2659: lea     rcx, [rbp+9F60h+var_40F0]; Src
 * 00000001800D2660: call    sub_180088448
 * 00000001800D2665: nop
 * 00000001800D2666: mov     r8, rax
 * 00000001800D2669: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D2670: lea     rcx, [rbp+9F60h+var_4110]
 * 00000001800D2677: call    sub_18001DD3C
 * 00000001800D267C: nop
 * 00000001800D267D: lea     r8, aVertex; "/Vertex"
 * 00000001800D2684: mov     rdx, rax
 * 00000001800D2687: lea     rcx, [rbp+9F60h+var_7E90]
 * 00000001800D268E: call    sub_18001DC84
 * 00000001800D2693: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D2698: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D269D: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D26A2: mov     rcx, rax
 * 00000001800D26A5: call    sub_180088528
 * 00000001800D26AA: nop
 * 00000001800D26AB: lea     rcx, [rbp+9F60h+var_4110]
 * 00000001800D26B2: call    sub_180011570
 * 00000001800D26B7: nop
 * 00000001800D26B8: lea     rcx, [rbp+9F60h+var_40F0]
 * 00000001800D26BF: call    sub_180011570
 * 00000001800D26C4: nop
 * 00000001800D26C5: lea     rcx, dword_1801FB4E0
 * 00000001800D26CC: call    sub_18000C548
 * 00000001800D26D1: mov     rax, [rsi+rdi*8]
 * 00000001800D26D5: mov     ecx, [r15+rax]
 * 00000001800D26D9: cmp     cs:dword_1801FB4E4, ecx
 * 00000001800D26DF: jle     loc_1800D27D8
 * 00000001800D26E5: lea     rcx, dword_1801FB4E4
 * 00000001800D26EC: call    sub_18000C5B0
 * 00000001800D26F1: cmp     cs:dword_1801FB4E4, r14d
 * 00000001800D26F8: jnz     loc_1800D27D8
 * 00000001800D26FE: xor     edx, edx
 * 00000001800D2700: lea     rcx, [rbp+9F60h+var_9F45]
 * 00000001800D2704: call    sub_1800A8E58
 * 00000001800D2709: mov     bl, [rax]
 * 00000001800D270B: call    sub_1800C507C
 * 00000001800D2710: mov     rdx, rax
 * 00000001800D2713: mov     r8d, 1050h
 * 00000001800D2719: lea     rcx, [rbp+9F60h+var_9230]
 * 00000001800D2720: call    sub_1800A8E40
 * 00000001800D2725: movups  xmm0, xmmword ptr [rax]
 * 00000001800D2728: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D272E: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D2732: mov     r9d, r12d
 * 00000001800D2735: mov     r8d, r12d
 * 00000001800D2738: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D273D: lea     rcx, [rbp+9F60h+var_5090]
 * 00000001800D2744: call    sub_1800A8E0C
 * 00000001800D2749: movups  xmm6, xmmword ptr [rax]
 * 00000001800D274C: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D2750: call    sub_1800C50FC
 * 00000001800D2755: mov     r8, rax
 * 00000001800D2758: mov     r9d, r13d
 * 00000001800D275B: mov     edx, 0D8h
 * 00000001800D2760: lea     rcx, [rbp+9F60h+var_4090]; Src
 * 00000001800D2767: call    sub_180088448
 * 00000001800D276C: nop
 * 00000001800D276D: mov     r8, rax
 * 00000001800D2770: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D2777: lea     rcx, [rbp+9F60h+var_40B0]
 * 00000001800D277E: call    sub_18001DD3C
 * 00000001800D2783: nop
 * 00000001800D2784: lea     r8, aVertex; "/Vertex"
 * 00000001800D278B: mov     rdx, rax
 * 00000001800D278E: lea     rcx, [rbp+9F60h+var_7ED0]
 * 00000001800D2795: call    sub_18001DC84
 * 00000001800D279A: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D279F: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D27A4: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D27A9: mov     rcx, rax
 * 00000001800D27AC: call    sub_180088528
 * 00000001800D27B1: nop
 * 00000001800D27B2: lea     rcx, [rbp+9F60h+var_40B0]
 * 00000001800D27B9: call    sub_180011570
 * 00000001800D27BE: nop
 * 00000001800D27BF: lea     rcx, [rbp+9F60h+var_4090]
 * 00000001800D27C6: call    sub_180011570
 * 00000001800D27CB: nop
 * 00000001800D27CC: lea     rcx, dword_1801FB4E4
 * 00000001800D27D3: call    sub_18000C548
 * 00000001800D27D8: mov     rax, [rsi+rdi*8]
 * 00000001800D27DC: mov     ecx, [r15+rax]
 * 00000001800D27E0: cmp     cs:dword_1801FB4E8, ecx
 * 00000001800D27E6: jle     loc_1800D28DF
 * 00000001800D27EC: lea     rcx, dword_1801FB4E8
 * 00000001800D27F3: call    sub_18000C5B0
 * 00000001800D27F8: cmp     cs:dword_1801FB4E8, r14d
 * 00000001800D27FF: jnz     loc_1800D28DF
 * 00000001800D2805: xor     edx, edx
 * 00000001800D2807: lea     rcx, [rbp+9F60h+var_9F44]
 * 00000001800D280B: call    sub_1800A8E58
 * 00000001800D2810: mov     bl, [rax]
 * 00000001800D2812: call    sub_1800C507C
 * 00000001800D2817: mov     rdx, rax
 * 00000001800D281A: mov     r8d, 1050h
 * 00000001800D2820: lea     rcx, [rbp+9F60h+var_9220]
 * 00000001800D2827: call    sub_1800A8E40
 * 00000001800D282C: movups  xmm0, xmmword ptr [rax]
 * 00000001800D282F: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D2835: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D2839: mov     r9d, r12d
 * 00000001800D283C: mov     r8d, r12d
 * 00000001800D283F: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D2844: lea     rcx, [rbp+9F60h+var_5070]
 * 00000001800D284B: call    sub_1800A8E0C
 * 00000001800D2850: movups  xmm6, xmmword ptr [rax]
 * 00000001800D2853: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D2857: call    sub_1800C50FC
 * 00000001800D285C: mov     r8, rax
 * 00000001800D285F: mov     r9d, r13d
 * 00000001800D2862: mov     edx, 0DAh
 * 00000001800D2867: lea     rcx, [rbp+9F60h+var_4030]; Src
 * 00000001800D286E: call    sub_180088448
 * 00000001800D2873: nop
 * 00000001800D2874: mov     r8, rax
 * 00000001800D2877: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D287E: lea     rcx, [rbp+9F60h+var_4050]
 * 00000001800D2885: call    sub_18001DD3C
 * 00000001800D288A: nop
 * 00000001800D288B: lea     r8, aVertex; "/Vertex"
 * 00000001800D2892: mov     rdx, rax
 * 00000001800D2895: lea     rcx, [rbp+9F60h+var_7EF0]
 * 00000001800D289C: call    sub_18001DC84
 * 00000001800D28A1: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D28A6: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D28AB: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D28B0: mov     rcx, rax
 * 00000001800D28B3: call    sub_180088528
 * 00000001800D28B8: nop
 * 00000001800D28B9: lea     rcx, [rbp+9F60h+var_4050]
 * 00000001800D28C0: call    sub_180011570
 * 00000001800D28C5: nop
 * 00000001800D28C6: lea     rcx, [rbp+9F60h+var_4030]
 * 00000001800D28CD: call    sub_180011570
 * 00000001800D28D2: nop
 * 00000001800D28D3: lea     rcx, dword_1801FB4E8
 * 00000001800D28DA: call    sub_18000C548
 * 00000001800D28DF: mov     rax, [rsi+rdi*8]
 * 00000001800D28E3: mov     ecx, [r15+rax]
 * 00000001800D28E7: cmp     cs:dword_1801FB4EC, ecx
 * 00000001800D28ED: jle     loc_1800D29E6
 * 00000001800D28F3: lea     rcx, dword_1801FB4EC
 * 00000001800D28FA: call    sub_18000C5B0
 * 00000001800D28FF: cmp     cs:dword_1801FB4EC, r14d
 * 00000001800D2906: jnz     loc_1800D29E6
 * 00000001800D290C: xor     edx, edx
 * 00000001800D290E: lea     rcx, [rbp+9F60h+var_9F43]
 * 00000001800D2912: call    sub_1800A8E58
 * 00000001800D2917: mov     bl, [rax]
 * 00000001800D2919: call    sub_1800C508C
 * 00000001800D291E: mov     rdx, rax
 * 00000001800D2921: mov     r8d, 1A50h
 * 00000001800D2927: lea     rcx, [rbp+9F60h+var_9210]
 * 00000001800D292E: call    sub_1800A8E40
 * 00000001800D2933: movups  xmm0, xmmword ptr [rax]
 * 00000001800D2936: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D293C: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D2940: mov     r9d, r12d
 * 00000001800D2943: mov     r8d, r12d
 * 00000001800D2946: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D294B: lea     rcx, [rbp+9F60h+var_5050]
 * 00000001800D2952: call    sub_1800A8E0C
 * 00000001800D2957: movups  xmm6, xmmword ptr [rax]
 * 00000001800D295A: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D295E: call    sub_1800C50FC
 * 00000001800D2963: mov     r8, rax
 * 00000001800D2966: mov     r9d, r13d
 * 00000001800D2969: mov     edx, 0E0h
 * 00000001800D296E: lea     rcx, [rbp+9F60h+var_3FD0]; Src
 * 00000001800D2975: call    sub_180088448
 * 00000001800D297A: nop
 * 00000001800D297B: mov     r8, rax
 * 00000001800D297E: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D2985: lea     rcx, [rbp+9F60h+var_3FF0]
 * 00000001800D298C: call    sub_18001DD3C
 * 00000001800D2991: nop
 * 00000001800D2992: lea     r8, aVertex; "/Vertex"
 * 00000001800D2999: mov     rdx, rax
 * 00000001800D299C: lea     rcx, [rbp+9F60h+var_7F30]
 * 00000001800D29A3: call    sub_18001DC84
 * 00000001800D29A8: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D29AD: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D29B2: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D29B7: mov     rcx, rax
 * 00000001800D29BA: call    sub_180088528
 * 00000001800D29BF: nop
 * 00000001800D29C0: lea     rcx, [rbp+9F60h+var_3FF0]
 * 00000001800D29C7: call    sub_180011570
 * 00000001800D29CC: nop
 * 00000001800D29CD: lea     rcx, [rbp+9F60h+var_3FD0]
 * 00000001800D29D4: call    sub_180011570
 * 00000001800D29D9: nop
 * 00000001800D29DA: lea     rcx, dword_1801FB4EC
 * 00000001800D29E1: call    sub_18000C548
 * 00000001800D29E6: mov     rax, [rsi+rdi*8]
 * 00000001800D29EA: mov     ecx, [r15+rax]
 * 00000001800D29EE: cmp     cs:dword_1801FB4F0, ecx
 * 00000001800D29F4: jle     loc_1800D2AED
 * 00000001800D29FA: lea     rcx, dword_1801FB4F0
 * 00000001800D2A01: call    sub_18000C5B0
 * 00000001800D2A06: cmp     cs:dword_1801FB4F0, r14d
 * 00000001800D2A0D: jnz     loc_1800D2AED
 * 00000001800D2A13: xor     edx, edx
 * 00000001800D2A15: lea     rcx, [rbp+9F60h+var_9F42]
 * 00000001800D2A19: call    sub_1800A8E58
 * 00000001800D2A1E: mov     bl, [rax]
 * 00000001800D2A20: call    sub_1800C508C
 * 00000001800D2A25: mov     rdx, rax
 * 00000001800D2A28: mov     r8d, 1A50h
 * 00000001800D2A2E: lea     rcx, [rbp+9F60h+var_9200]
 * 00000001800D2A35: call    sub_1800A8E40
 * 00000001800D2A3A: movups  xmm0, xmmword ptr [rax]
 * 00000001800D2A3D: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D2A43: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D2A47: mov     r9d, r12d
 * 00000001800D2A4A: mov     r8d, r12d
 * 00000001800D2A4D: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D2A52: lea     rcx, [rbp+9F60h+var_5030]
 * 00000001800D2A59: call    sub_1800A8E0C
 * 00000001800D2A5E: movups  xmm6, xmmword ptr [rax]
 * 00000001800D2A61: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D2A65: call    sub_1800C50FC
 * 00000001800D2A6A: mov     r8, rax
 * 00000001800D2A6D: mov     r9d, r13d
 * 00000001800D2A70: mov     edx, 0E2h
 * 00000001800D2A75: lea     rcx, [rbp+9F60h+var_3F70]; Src
 * 00000001800D2A7C: call    sub_180088448
 * 00000001800D2A81: nop
 * 00000001800D2A82: mov     r8, rax
 * 00000001800D2A85: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D2A8C: lea     rcx, [rbp+9F60h+var_3F90]
 * 00000001800D2A93: call    sub_18001DD3C
 * 00000001800D2A98: nop
 * 00000001800D2A99: lea     r8, aVertex; "/Vertex"
 * 00000001800D2AA0: mov     rdx, rax
 * 00000001800D2AA3: lea     rcx, [rbp+9F60h+var_7F50]
 * 00000001800D2AAA: call    sub_18001DC84
 * 00000001800D2AAF: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D2AB4: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D2AB9: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D2ABE: mov     rcx, rax
 * 00000001800D2AC1: call    sub_180088528
 * 00000001800D2AC6: nop
 * 00000001800D2AC7: lea     rcx, [rbp+9F60h+var_3F90]
 * 00000001800D2ACE: call    sub_180011570
 * 00000001800D2AD3: nop
 * 00000001800D2AD4: lea     rcx, [rbp+9F60h+var_3F70]
 * 00000001800D2ADB: call    sub_180011570
 * 00000001800D2AE0: nop
 * 00000001800D2AE1: lea     rcx, dword_1801FB4F0
 * 00000001800D2AE8: call    sub_18000C548
 * 00000001800D2AED: mov     rax, [rsi+rdi*8]
 * 00000001800D2AF1: mov     ecx, [r15+rax]
 * 00000001800D2AF5: cmp     cs:dword_1801FB4F4, ecx
 * 00000001800D2AFB: jle     loc_1800D2BF4
 * 00000001800D2B01: lea     rcx, dword_1801FB4F4
 * 00000001800D2B08: call    sub_18000C5B0
 * 00000001800D2B0D: cmp     cs:dword_1801FB4F4, r14d
 * 00000001800D2B14: jnz     loc_1800D2BF4
 * 00000001800D2B1A: xor     edx, edx
 * 00000001800D2B1C: lea     rcx, [rbp+9F60h+var_9F41]
 * 00000001800D2B20: call    sub_1800A8E58
 * 00000001800D2B25: mov     bl, [rax]
 * 00000001800D2B27: call    sub_1800C508C
 * 00000001800D2B2C: mov     rdx, rax
 * 00000001800D2B2F: mov     r8d, 1A50h
 * 00000001800D2B35: lea     rcx, [rbp+9F60h+var_91F0]
 * 00000001800D2B3C: call    sub_1800A8E40
 * 00000001800D2B41: movups  xmm0, xmmword ptr [rax]
 * 00000001800D2B44: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D2B4A: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D2B4E: mov     r9d, r12d
 * 00000001800D2B51: mov     r8d, r12d
 * 00000001800D2B54: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D2B59: lea     rcx, [rbp+9F60h+var_5010]
 * 00000001800D2B60: call    sub_1800A8E0C
 * 00000001800D2B65: movups  xmm6, xmmword ptr [rax]
 * 00000001800D2B68: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D2B6C: call    sub_1800C50FC
 * 00000001800D2B71: mov     r8, rax
 * 00000001800D2B74: mov     r9d, r13d
 * 00000001800D2B77: mov     edx, 0E8h
 * 00000001800D2B7C: lea     rcx, [rbp+9F60h+var_3F10]; Src
 * 00000001800D2B83: call    sub_180088448
 * 00000001800D2B88: nop
 * 00000001800D2B89: mov     r8, rax
 * 00000001800D2B8C: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D2B93: lea     rcx, [rbp+9F60h+var_3F30]
 * 00000001800D2B9A: call    sub_18001DD3C
 * 00000001800D2B9F: nop
 * 00000001800D2BA0: lea     r8, aVertex; "/Vertex"
 * 00000001800D2BA7: mov     rdx, rax
 * 00000001800D2BAA: lea     rcx, [rbp+9F60h+var_7F90]
 * 00000001800D2BB1: call    sub_18001DC84
 * 00000001800D2BB6: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D2BBB: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D2BC0: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D2BC5: mov     rcx, rax
 * 00000001800D2BC8: call    sub_180088528
 * 00000001800D2BCD: nop
 * 00000001800D2BCE: lea     rcx, [rbp+9F60h+var_3F30]
 * 00000001800D2BD5: call    sub_180011570
 * 00000001800D2BDA: nop
 * 00000001800D2BDB: lea     rcx, [rbp+9F60h+var_3F10]
 * 00000001800D2BE2: call    sub_180011570
 * 00000001800D2BE7: nop
 * 00000001800D2BE8: lea     rcx, dword_1801FB4F4
 * 00000001800D2BEF: call    sub_18000C548
 * 00000001800D2BF4: mov     rax, [rsi+rdi*8]
 * 00000001800D2BF8: mov     ecx, [r15+rax]
 * 00000001800D2BFC: cmp     cs:dword_1801FB4F8, ecx
 * 00000001800D2C02: jle     loc_1800D2CFB
 * 00000001800D2C08: lea     rcx, dword_1801FB4F8
 * 00000001800D2C0F: call    sub_18000C5B0
 * 00000001800D2C14: cmp     cs:dword_1801FB4F8, r14d
 * 00000001800D2C1B: jnz     loc_1800D2CFB
 * 00000001800D2C21: xor     edx, edx
 * 00000001800D2C23: lea     rcx, [rbp+9F60h+var_9F40]
 * 00000001800D2C27: call    sub_1800A8E58
 * 00000001800D2C2C: mov     bl, [rax]
 * 00000001800D2C2E: call    sub_1800C508C
 * 00000001800D2C33: mov     rdx, rax
 * 00000001800D2C36: mov     r8d, 1A50h
 * 00000001800D2C3C: lea     rcx, [rbp+9F60h+var_91E0]
 * 00000001800D2C43: call    sub_1800A8E40
 * 00000001800D2C48: movups  xmm0, xmmword ptr [rax]
 * 00000001800D2C4B: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D2C51: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D2C55: mov     r9d, r12d
 * 00000001800D2C58: mov     r8d, r12d
 * 00000001800D2C5B: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D2C60: lea     rcx, [rbp+9F60h+var_4FF0]
 * 00000001800D2C67: call    sub_1800A8E0C
 * 00000001800D2C6C: movups  xmm6, xmmword ptr [rax]
 * 00000001800D2C6F: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D2C73: call    sub_1800C50FC
 * 00000001800D2C78: mov     r8, rax
 * 00000001800D2C7B: mov     r9d, r13d
 * 00000001800D2C7E: mov     edx, 0EAh
 * 00000001800D2C83: lea     rcx, [rbp+9F60h+var_3EB0]; Src
 * 00000001800D2C8A: call    sub_180088448
 * 00000001800D2C8F: nop
 * 00000001800D2C90: mov     r8, rax
 * 00000001800D2C93: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D2C9A: lea     rcx, [rbp+9F60h+var_3ED0]
 * 00000001800D2CA1: call    sub_18001DD3C
 * 00000001800D2CA6: nop
 * 00000001800D2CA7: lea     r8, aVertex; "/Vertex"
 * 00000001800D2CAE: mov     rdx, rax
 * 00000001800D2CB1: lea     rcx, [rbp+9F60h+var_7FB0]
 * 00000001800D2CB8: call    sub_18001DC84
 * 00000001800D2CBD: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D2CC2: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D2CC7: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D2CCC: mov     rcx, rax
 * 00000001800D2CCF: call    sub_180088528
 * 00000001800D2CD4: nop
 * 00000001800D2CD5: lea     rcx, [rbp+9F60h+var_3ED0]
 * 00000001800D2CDC: call    sub_180011570
 * 00000001800D2CE1: nop
 * 00000001800D2CE2: lea     rcx, [rbp+9F60h+var_3EB0]
 * 00000001800D2CE9: call    sub_180011570
 * 00000001800D2CEE: nop
 * 00000001800D2CEF: lea     rcx, dword_1801FB4F8
 * 00000001800D2CF6: call    sub_18000C548
 * 00000001800D2CFB: mov     rax, [rsi+rdi*8]
 * 00000001800D2CFF: mov     ecx, [r15+rax]
 * 00000001800D2D03: cmp     cs:dword_1801FB4FC, ecx
 * 00000001800D2D09: jle     loc_1800D2E02
 * 00000001800D2D0F: lea     rcx, dword_1801FB4FC
 * 00000001800D2D16: call    sub_18000C5B0
 * 00000001800D2D1B: cmp     cs:dword_1801FB4FC, r14d
 * 00000001800D2D22: jnz     loc_1800D2E02
 * 00000001800D2D28: xor     edx, edx
 * 00000001800D2D2A: lea     rcx, [rbp+9F60h+var_9F3F]
 * 00000001800D2D2E: call    sub_1800A8E58
 * 00000001800D2D33: mov     bl, [rax]
 * 00000001800D2D35: call    sub_1800C508C
 * 00000001800D2D3A: mov     rdx, rax
 * 00000001800D2D3D: mov     r8d, 1A50h
 * 00000001800D2D43: lea     rcx, [rbp+9F60h+var_91D0]
 * 00000001800D2D4A: call    sub_1800A8E40
 * 00000001800D2D4F: movups  xmm0, xmmword ptr [rax]
 * 00000001800D2D52: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D2D58: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D2D5C: mov     r9d, r12d
 * 00000001800D2D5F: mov     r8d, r12d
 * 00000001800D2D62: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D2D67: lea     rcx, [rbp+9F60h+var_4FD0]
 * 00000001800D2D6E: call    sub_1800A8E0C
 * 00000001800D2D73: movups  xmm6, xmmword ptr [rax]
 * 00000001800D2D76: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D2D7A: call    sub_1800C50FC
 * 00000001800D2D7F: mov     r8, rax
 * 00000001800D2D82: mov     r9d, r13d
 * 00000001800D2D85: mov     edx, 0F0h
 * 00000001800D2D8A: lea     rcx, [rbp+9F60h+var_3E50]; Src
 * 00000001800D2D91: call    sub_180088448
 * 00000001800D2D96: nop
 * 00000001800D2D97: mov     r8, rax
 * 00000001800D2D9A: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D2DA1: lea     rcx, [rbp+9F60h+var_3E70]
 * 00000001800D2DA8: call    sub_18001DD3C
 * 00000001800D2DAD: nop
 * 00000001800D2DAE: lea     r8, aVertex; "/Vertex"
 * 00000001800D2DB5: mov     rdx, rax
 * 00000001800D2DB8: lea     rcx, [rbp+9F60h+var_7FF0]
 * 00000001800D2DBF: call    sub_18001DC84
 * 00000001800D2DC4: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D2DC9: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D2DCE: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D2DD3: mov     rcx, rax
 * 00000001800D2DD6: call    sub_180088528
 * 00000001800D2DDB: nop
 * 00000001800D2DDC: lea     rcx, [rbp+9F60h+var_3E70]
 * 00000001800D2DE3: call    sub_180011570
 * 00000001800D2DE8: nop
 * 00000001800D2DE9: lea     rcx, [rbp+9F60h+var_3E50]
 * 00000001800D2DF0: call    sub_180011570
 * 00000001800D2DF5: nop
 * 00000001800D2DF6: lea     rcx, dword_1801FB4FC
 * 00000001800D2DFD: call    sub_18000C548
 * 00000001800D2E02: mov     rax, [rsi+rdi*8]
 * 00000001800D2E06: mov     ecx, [r15+rax]
 * 00000001800D2E0A: cmp     cs:dword_1801FB500, ecx
 * 00000001800D2E10: jle     loc_1800D2F09
 * 00000001800D2E16: lea     rcx, dword_1801FB500
 * 00000001800D2E1D: call    sub_18000C5B0
 * 00000001800D2E22: cmp     cs:dword_1801FB500, r14d
 * 00000001800D2E29: jnz     loc_1800D2F09
 * 00000001800D2E2F: xor     edx, edx
 * 00000001800D2E31: lea     rcx, [rbp+9F60h+var_9F3E]
 * 00000001800D2E35: call    sub_1800A8E58
 * 00000001800D2E3A: mov     bl, [rax]
 * 00000001800D2E3C: call    sub_1800C508C
 * 00000001800D2E41: mov     rdx, rax
 * 00000001800D2E44: mov     r8d, 1A50h
 * 00000001800D2E4A: lea     rcx, [rbp+9F60h+var_91C0]
 * 00000001800D2E51: call    sub_1800A8E40
 * 00000001800D2E56: movups  xmm0, xmmword ptr [rax]
 * 00000001800D2E59: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D2E5F: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D2E63: mov     r9d, r12d
 * 00000001800D2E66: mov     r8d, r12d
 * 00000001800D2E69: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D2E6E: lea     rcx, [rbp+9F60h+var_4FB0]
 * 00000001800D2E75: call    sub_1800A8E0C
 * 00000001800D2E7A: movups  xmm6, xmmword ptr [rax]
 * 00000001800D2E7D: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D2E81: call    sub_1800C50FC
 * 00000001800D2E86: mov     r8, rax
 * 00000001800D2E89: mov     r9d, r13d
 * 00000001800D2E8C: mov     edx, 0F2h
 * 00000001800D2E91: lea     rcx, [rbp+9F60h+var_3DF0]; Src
 * 00000001800D2E98: call    sub_180088448
 * 00000001800D2E9D: nop
 * 00000001800D2E9E: mov     r8, rax
 * 00000001800D2EA1: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D2EA8: lea     rcx, [rbp+9F60h+var_3E10]
 * 00000001800D2EAF: call    sub_18001DD3C
 * 00000001800D2EB4: nop
 * 00000001800D2EB5: lea     r8, aVertex; "/Vertex"
 * 00000001800D2EBC: mov     rdx, rax
 * 00000001800D2EBF: lea     rcx, [rbp+9F60h+var_8010]
 * 00000001800D2EC6: call    sub_18001DC84
 * 00000001800D2ECB: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D2ED0: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D2ED5: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D2EDA: mov     rcx, rax
 * 00000001800D2EDD: call    sub_180088528
 * 00000001800D2EE2: nop
 * 00000001800D2EE3: lea     rcx, [rbp+9F60h+var_3E10]
 * 00000001800D2EEA: call    sub_180011570
 * 00000001800D2EEF: nop
 * 00000001800D2EF0: lea     rcx, [rbp+9F60h+var_3DF0]
 * 00000001800D2EF7: call    sub_180011570
 * 00000001800D2EFC: nop
 * 00000001800D2EFD: lea     rcx, dword_1801FB500
 * 00000001800D2F04: call    sub_18000C548
 * 00000001800D2F09: mov     rax, [rsi+rdi*8]
 * 00000001800D2F0D: mov     ecx, [r15+rax]
 * 00000001800D2F11: cmp     cs:dword_1801FB504, ecx
 * 00000001800D2F17: jle     loc_1800D3010
 * 00000001800D2F1D: lea     rcx, dword_1801FB504
 * 00000001800D2F24: call    sub_18000C5B0
 * 00000001800D2F29: cmp     cs:dword_1801FB504, r14d
 * 00000001800D2F30: jnz     loc_1800D3010
 * 00000001800D2F36: xor     edx, edx
 * 00000001800D2F38: lea     rcx, [rbp+9F60h+var_9F1A]
 * 00000001800D2F3C: call    sub_1800A8E58
 * 00000001800D2F41: mov     bl, [rax]
 * 00000001800D2F43: call    sub_1800C508C
 * 00000001800D2F48: mov     rdx, rax
 * 00000001800D2F4B: mov     r8d, 1A50h
 * 00000001800D2F51: lea     rcx, [rbp+9F60h+var_91B0]
 * 00000001800D2F58: call    sub_1800A8E40
 * 00000001800D2F5D: movups  xmm0, xmmword ptr [rax]
 * 00000001800D2F60: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D2F66: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D2F6A: mov     r9d, r12d
 * 00000001800D2F6D: mov     r8d, r12d
 * 00000001800D2F70: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D2F75: lea     rcx, [rbp+9F60h+var_4F90]
 * 00000001800D2F7C: call    sub_1800A8E0C
 * 00000001800D2F81: movups  xmm6, xmmword ptr [rax]
 * 00000001800D2F84: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D2F88: call    sub_1800C50FC
 * 00000001800D2F8D: mov     r8, rax
 * 00000001800D2F90: mov     r9d, r13d
 * 00000001800D2F93: mov     edx, 0F8h
 * 00000001800D2F98: lea     rcx, [rbp+9F60h+var_3D90]; Src
 * 00000001800D2F9F: call    sub_180088448
 * 00000001800D2FA4: nop
 * 00000001800D2FA5: mov     r8, rax
 * 00000001800D2FA8: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D2FAF: lea     rcx, [rbp+9F60h+var_3DB0]
 * 00000001800D2FB6: call    sub_18001DD3C
 * 00000001800D2FBB: nop
 * 00000001800D2FBC: lea     r8, aVertex; "/Vertex"
 * 00000001800D2FC3: mov     rdx, rax
 * 00000001800D2FC6: lea     rcx, [rbp+9F60h+var_8050]
 * 00000001800D2FCD: call    sub_18001DC84
 * 00000001800D2FD2: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D2FD7: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D2FDC: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D2FE1: mov     rcx, rax
 * 00000001800D2FE4: call    sub_180088528
 * 00000001800D2FE9: nop
 * 00000001800D2FEA: lea     rcx, [rbp+9F60h+var_3DB0]
 * 00000001800D2FF1: call    sub_180011570
 * 00000001800D2FF6: nop
 * 00000001800D2FF7: lea     rcx, [rbp+9F60h+var_3D90]
 * 00000001800D2FFE: call    sub_180011570
 * 00000001800D3003: nop
 * 00000001800D3004: lea     rcx, dword_1801FB504
 * 00000001800D300B: call    sub_18000C548
 * 00000001800D3010: mov     rax, [rsi+rdi*8]
 * 00000001800D3014: mov     ecx, [r15+rax]
 * 00000001800D3018: cmp     cs:dword_1801FB508, ecx
 * 00000001800D301E: jle     loc_1800D3117
 * 00000001800D3024: lea     rcx, dword_1801FB508
 * 00000001800D302B: call    sub_18000C5B0
 * 00000001800D3030: cmp     cs:dword_1801FB508, r14d
 * 00000001800D3037: jnz     loc_1800D3117
 * 00000001800D303D: xor     edx, edx
 * 00000001800D303F: lea     rcx, [rbp+9F60h+var_9F3C]
 * 00000001800D3043: call    sub_1800A8E58
 * 00000001800D3048: mov     bl, [rax]
 * 00000001800D304A: call    sub_1800C508C
 * 00000001800D304F: mov     rdx, rax
 * 00000001800D3052: mov     r8d, 1A50h
 * 00000001800D3058: lea     rcx, [rbp+9F60h+var_91A0]
 * 00000001800D305F: call    sub_1800A8E40
 * 00000001800D3064: movups  xmm0, xmmword ptr [rax]
 * 00000001800D3067: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D306D: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D3071: mov     r9d, r12d
 * 00000001800D3074: mov     r8d, r12d
 * 00000001800D3077: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D307C: lea     rcx, [rbp+9F60h+var_4F70]
 * 00000001800D3083: call    sub_1800A8E0C
 * 00000001800D3088: movups  xmm6, xmmword ptr [rax]
 * 00000001800D308B: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D308F: call    sub_1800C50FC
 * 00000001800D3094: mov     r8, rax
 * 00000001800D3097: mov     r9d, r13d
 * 00000001800D309A: mov     edx, 0FAh
 * 00000001800D309F: lea     rcx, [rbp+9F60h+var_3D30]; Src
 * 00000001800D30A6: call    sub_180088448
 * 00000001800D30AB: nop
 * 00000001800D30AC: mov     r8, rax
 * 00000001800D30AF: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D30B6: lea     rcx, [rbp+9F60h+var_3D50]
 * 00000001800D30BD: call    sub_18001DD3C
 * 00000001800D30C2: nop
 * 00000001800D30C3: lea     r8, aVertex; "/Vertex"
 * 00000001800D30CA: mov     rdx, rax
 * 00000001800D30CD: lea     rcx, [rbp+9F60h+var_8070]
 * 00000001800D30D4: call    sub_18001DC84
 * 00000001800D30D9: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D30DE: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D30E3: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D30E8: mov     rcx, rax
 * 00000001800D30EB: call    sub_180088528
 * 00000001800D30F0: nop
 * 00000001800D30F1: lea     rcx, [rbp+9F60h+var_3D50]
 * 00000001800D30F8: call    sub_180011570
 * 00000001800D30FD: nop
 * 00000001800D30FE: lea     rcx, [rbp+9F60h+var_3D30]
 * 00000001800D3105: call    sub_180011570
 * 00000001800D310A: nop
 * 00000001800D310B: lea     rcx, dword_1801FB508
 * 00000001800D3112: call    sub_18000C548
 * 00000001800D3117: mov     rax, [rsi+rdi*8]
 * 00000001800D311B: mov     ecx, [r15+rax]
 * 00000001800D311F: cmp     cs:dword_1801FB50C, ecx
 * 00000001800D3125: jle     loc_1800D321E
 * 00000001800D312B: lea     rcx, dword_1801FB50C
 * 00000001800D3132: call    sub_18000C5B0
 * 00000001800D3137: cmp     cs:dword_1801FB50C, r14d
 * 00000001800D313E: jnz     loc_1800D321E
 * 00000001800D3144: xor     edx, edx
 * 00000001800D3146: lea     rcx, [rbp+9F60h+var_9F3B]
 * 00000001800D314A: call    sub_1800A8E58
 * 00000001800D314F: mov     bl, [rax]
 * 00000001800D3151: call    sub_1800C4FCC
 * 00000001800D3156: mov     rdx, rax
 * 00000001800D3159: mov     r8d, 1018h
 * 00000001800D315F: lea     rcx, [rbp+9F60h+var_9190]
 * 00000001800D3166: call    sub_1800A8E40
 * 00000001800D316B: movups  xmm0, xmmword ptr [rax]
 * 00000001800D316E: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D3174: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D3178: mov     r9d, r12d
 * 00000001800D317B: mov     r8d, r12d
 * 00000001800D317E: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D3183: lea     rcx, [rbp+9F60h+var_4F50]
 * 00000001800D318A: call    sub_1800A8E0C
 * 00000001800D318F: movups  xmm6, xmmword ptr [rax]
 * 00000001800D3192: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D3196: call    sub_1800C50FC
 * 00000001800D319B: mov     r8, rax
 * 00000001800D319E: mov     r9d, r13d
 * 00000001800D31A1: mov     edx, 100h
 * 00000001800D31A6: lea     rcx, [rbp+9F60h+var_3CD0]; Src
 * 00000001800D31AD: call    sub_180088448
 * 00000001800D31B2: nop
 * 00000001800D31B3: mov     r8, rax
 * 00000001800D31B6: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D31BD: lea     rcx, [rbp+9F60h+var_3CF0]
 * 00000001800D31C4: call    sub_18001DD3C
 * 00000001800D31C9: nop
 * 00000001800D31CA: lea     r8, aVertex; "/Vertex"
 * 00000001800D31D1: mov     rdx, rax
 * 00000001800D31D4: lea     rcx, [rbp+9F60h+var_80B0]
 * 00000001800D31DB: call    sub_18001DC84
 * 00000001800D31E0: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D31E5: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D31EA: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D31EF: mov     rcx, rax
 * 00000001800D31F2: call    sub_180088528
 * 00000001800D31F7: nop
 * 00000001800D31F8: lea     rcx, [rbp+9F60h+var_3CF0]
 * 00000001800D31FF: call    sub_180011570
 * 00000001800D3204: nop
 * 00000001800D3205: lea     rcx, [rbp+9F60h+var_3CD0]
 * 00000001800D320C: call    sub_180011570
 * 00000001800D3211: nop
 * 00000001800D3212: lea     rcx, dword_1801FB50C
 * 00000001800D3219: call    sub_18000C548
 * 00000001800D321E: mov     rax, [rsi+rdi*8]
 * 00000001800D3222: mov     ecx, [r15+rax]
 * 00000001800D3226: cmp     cs:dword_1801FB510, ecx
 * 00000001800D322C: jle     loc_1800D3325
 * 00000001800D3232: lea     rcx, dword_1801FB510
 * 00000001800D3239: call    sub_18000C5B0
 * 00000001800D323E: cmp     cs:dword_1801FB510, r14d
 * 00000001800D3245: jnz     loc_1800D3325
 * 00000001800D324B: xor     edx, edx
 * 00000001800D324D: lea     rcx, [rbp+9F60h+var_9F3A]
 * 00000001800D3251: call    sub_1800A8E58
 * 00000001800D3256: mov     bl, [rax]
 * 00000001800D3258: call    sub_1800C4FCC
 * 00000001800D325D: mov     rdx, rax
 * 00000001800D3260: mov     r8d, 1018h
 * 00000001800D3266: lea     rcx, [rbp+9F60h+var_9180]
 * 00000001800D326D: call    sub_1800A8E40
 * 00000001800D3272: movups  xmm0, xmmword ptr [rax]
 * 00000001800D3275: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D327B: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D327F: mov     r9d, r12d
 * 00000001800D3282: mov     r8d, r12d
 * 00000001800D3285: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D328A: lea     rcx, [rbp+9F60h+var_4F30]
 * 00000001800D3291: call    sub_1800A8E0C
 * 00000001800D3296: movups  xmm6, xmmword ptr [rax]
 * 00000001800D3299: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D329D: call    sub_1800C50FC
 * 00000001800D32A2: mov     r8, rax
 * 00000001800D32A5: mov     r9d, r13d
 * 00000001800D32A8: mov     edx, 102h
 * 00000001800D32AD: lea     rcx, [rbp+9F60h+var_3C70]; Src
 * 00000001800D32B4: call    sub_180088448
 * 00000001800D32B9: nop
 * 00000001800D32BA: mov     r8, rax
 * 00000001800D32BD: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D32C4: lea     rcx, [rbp+9F60h+var_3C90]
 * 00000001800D32CB: call    sub_18001DD3C
 * 00000001800D32D0: nop
 * 00000001800D32D1: lea     r8, aVertex; "/Vertex"
 * 00000001800D32D8: mov     rdx, rax
 * 00000001800D32DB: lea     rcx, [rbp+9F60h+var_80D0]
 * 00000001800D32E2: call    sub_18001DC84
 * 00000001800D32E7: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D32EC: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D32F1: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D32F6: mov     rcx, rax
 * 00000001800D32F9: call    sub_180088528
 * 00000001800D32FE: nop
 * 00000001800D32FF: lea     rcx, [rbp+9F60h+var_3C90]
 * 00000001800D3306: call    sub_180011570
 * 00000001800D330B: nop
 * 00000001800D330C: lea     rcx, [rbp+9F60h+var_3C70]
 * 00000001800D3313: call    sub_180011570
 * 00000001800D3318: nop
 * 00000001800D3319: lea     rcx, dword_1801FB510
 * 00000001800D3320: call    sub_18000C548
 * 00000001800D3325: mov     rax, [rsi+rdi*8]
 * 00000001800D3329: mov     ecx, [r15+rax]
 * 00000001800D332D: cmp     cs:dword_1801FB514, ecx
 * 00000001800D3333: jle     loc_1800D342C
 * 00000001800D3339: lea     rcx, dword_1801FB514
 * 00000001800D3340: call    sub_18000C5B0
 * 00000001800D3345: cmp     cs:dword_1801FB514, r14d
 * 00000001800D334C: jnz     loc_1800D342C
 * 00000001800D3352: xor     edx, edx
 * 00000001800D3354: lea     rcx, [rbp+9F60h+var_9F39]
 * 00000001800D3358: call    sub_1800A8E58
 * 00000001800D335D: mov     bl, [rax]
 * 00000001800D335F: call    sub_1800C4FCC
 * 00000001800D3364: mov     rdx, rax
 * 00000001800D3367: mov     r8d, 1018h
 * 00000001800D336D: lea     rcx, [rbp+9F60h+var_9170]
 * 00000001800D3374: call    sub_1800A8E40
 * 00000001800D3379: movups  xmm0, xmmword ptr [rax]
 * 00000001800D337C: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D3382: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D3386: mov     r9d, r12d
 * 00000001800D3389: mov     r8d, r12d
 * 00000001800D338C: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D3391: lea     rcx, [rbp+9F60h+var_4F10]
 * 00000001800D3398: call    sub_1800A8E0C
 * 00000001800D339D: movups  xmm6, xmmword ptr [rax]
 * 00000001800D33A0: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D33A4: call    sub_1800C50FC
 * 00000001800D33A9: mov     r8, rax
 * 00000001800D33AC: mov     r9d, r13d
 * 00000001800D33AF: mov     edx, 104h
 * 00000001800D33B4: lea     rcx, [rbp+9F60h+var_3C10]; Src
 * 00000001800D33BB: call    sub_180088448
 * 00000001800D33C0: nop
 * 00000001800D33C1: mov     r8, rax
 * 00000001800D33C4: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D33CB: lea     rcx, [rbp+9F60h+var_3C30]
 * 00000001800D33D2: call    sub_18001DD3C
 * 00000001800D33D7: nop
 * 00000001800D33D8: lea     r8, aVertex; "/Vertex"
 * 00000001800D33DF: mov     rdx, rax
 * 00000001800D33E2: lea     rcx, [rbp+9F60h+var_8110]
 * 00000001800D33E9: call    sub_18001DC84
 * 00000001800D33EE: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D33F3: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D33F8: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D33FD: mov     rcx, rax
 * 00000001800D3400: call    sub_180088528
 * 00000001800D3405: nop
 * 00000001800D3406: lea     rcx, [rbp+9F60h+var_3C30]
 * 00000001800D340D: call    sub_180011570
 * 00000001800D3412: nop
 * 00000001800D3413: lea     rcx, [rbp+9F60h+var_3C10]
 * 00000001800D341A: call    sub_180011570
 * 00000001800D341F: nop
 * 00000001800D3420: lea     rcx, dword_1801FB514
 * 00000001800D3427: call    sub_18000C548
 * 00000001800D342C: mov     rax, [rsi+rdi*8]
 * 00000001800D3430: mov     ecx, [r15+rax]
 * 00000001800D3434: cmp     cs:dword_1801FB518, ecx
 * 00000001800D343A: jle     loc_1800D3533
 * 00000001800D3440: lea     rcx, dword_1801FB518
 * 00000001800D3447: call    sub_18000C5B0
 * 00000001800D344C: cmp     cs:dword_1801FB518, r14d
 * 00000001800D3453: jnz     loc_1800D3533
 * 00000001800D3459: xor     edx, edx
 * 00000001800D345B: lea     rcx, [rbp+9F60h+var_9F38]
 * 00000001800D345F: call    sub_1800A8E58
 * 00000001800D3464: mov     bl, [rax]
 * 00000001800D3466: call    sub_1800C4FCC
 * 00000001800D346B: mov     rdx, rax
 * 00000001800D346E: mov     r8d, 1018h
 * 00000001800D3474: lea     rcx, [rbp+9F60h+var_9160]
 * 00000001800D347B: call    sub_1800A8E40
 * 00000001800D3480: movups  xmm0, xmmword ptr [rax]
 * 00000001800D3483: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D3489: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D348D: mov     r9d, r12d
 * 00000001800D3490: mov     r8d, r12d
 * 00000001800D3493: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D3498: lea     rcx, [rbp+9F60h+var_4EF0]
 * 00000001800D349F: call    sub_1800A8E0C
 * 00000001800D34A4: movups  xmm6, xmmword ptr [rax]
 * 00000001800D34A7: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D34AB: call    sub_1800C50FC
 * 00000001800D34B0: mov     r8, rax
 * 00000001800D34B3: mov     r9d, r13d
 * 00000001800D34B6: mov     edx, 106h
 * 00000001800D34BB: lea     rcx, [rbp+9F60h+var_3BB0]; Src
 * 00000001800D34C2: call    sub_180088448
 * 00000001800D34C7: nop
 * 00000001800D34C8: mov     r8, rax
 * 00000001800D34CB: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D34D2: lea     rcx, [rbp+9F60h+var_3BD0]
 * 00000001800D34D9: call    sub_18001DD3C
 * 00000001800D34DE: nop
 * 00000001800D34DF: lea     r8, aVertex; "/Vertex"
 * 00000001800D34E6: mov     rdx, rax
 * 00000001800D34E9: lea     rcx, [rbp+9F60h+var_8130]
 * 00000001800D34F0: call    sub_18001DC84
 * 00000001800D34F5: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D34FA: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D34FF: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D3504: mov     rcx, rax
 * 00000001800D3507: call    sub_180088528
 * 00000001800D350C: nop
 * 00000001800D350D: lea     rcx, [rbp+9F60h+var_3BD0]
 * 00000001800D3514: call    sub_180011570
 * 00000001800D3519: nop
 * 00000001800D351A: lea     rcx, [rbp+9F60h+var_3BB0]
 * 00000001800D3521: call    sub_180011570
 * 00000001800D3526: nop
 * 00000001800D3527: lea     rcx, dword_1801FB518
 * 00000001800D352E: call    sub_18000C548
 * 00000001800D3533: mov     rax, [rsi+rdi*8]
 * 00000001800D3537: mov     ecx, [r15+rax]
 * 00000001800D353B: cmp     cs:dword_1801FB51C, ecx
 * 00000001800D3541: jle     loc_1800D363A
 * 00000001800D3547: lea     rcx, dword_1801FB51C
 * 00000001800D354E: call    sub_18000C5B0
 * 00000001800D3553: cmp     cs:dword_1801FB51C, r14d
 * 00000001800D355A: jnz     loc_1800D363A
 * 00000001800D3560: xor     edx, edx
 * 00000001800D3562: lea     rcx, [rbp+9F60h+var_9F37]
 * 00000001800D3566: call    sub_1800A8E58
 * 00000001800D356B: mov     bl, [rax]
 * 00000001800D356D: call    sub_1800C4FCC
 * 00000001800D3572: mov     rdx, rax
 * 00000001800D3575: mov     r8d, 1018h
 * 00000001800D357B: lea     rcx, [rbp+9F60h+var_9150]
 * 00000001800D3582: call    sub_1800A8E40
 * 00000001800D3587: movups  xmm0, xmmword ptr [rax]
 * 00000001800D358A: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D3590: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D3594: mov     r9d, r12d
 * 00000001800D3597: mov     r8d, r12d
 * 00000001800D359A: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D359F: lea     rcx, [rbp+9F60h+var_4ED0]
 * 00000001800D35A6: call    sub_1800A8E0C
 * 00000001800D35AB: movups  xmm6, xmmword ptr [rax]
 * 00000001800D35AE: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D35B2: call    sub_1800C50FC
 * 00000001800D35B7: mov     r8, rax
 * 00000001800D35BA: mov     r9d, r13d
 * 00000001800D35BD: mov     edx, 108h
 * 00000001800D35C2: lea     rcx, [rbp+9F60h+var_3B50]; Src
 * 00000001800D35C9: call    sub_180088448
 * 00000001800D35CE: nop
 * 00000001800D35CF: mov     r8, rax
 * 00000001800D35D2: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D35D9: lea     rcx, [rbp+9F60h+var_3B70]
 * 00000001800D35E0: call    sub_18001DD3C
 * 00000001800D35E5: nop
 * 00000001800D35E6: lea     r8, aVertex; "/Vertex"
 * 00000001800D35ED: mov     rdx, rax
 * 00000001800D35F0: lea     rcx, [rbp+9F60h+var_8170]
 * 00000001800D35F7: call    sub_18001DC84
 * 00000001800D35FC: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D3601: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D3606: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D360B: mov     rcx, rax
 * 00000001800D360E: call    sub_180088528
 * 00000001800D3613: nop
 * 00000001800D3614: lea     rcx, [rbp+9F60h+var_3B70]
 * 00000001800D361B: call    sub_180011570
 * 00000001800D3620: nop
 * 00000001800D3621: lea     rcx, [rbp+9F60h+var_3B50]
 * 00000001800D3628: call    sub_180011570
 * 00000001800D362D: nop
 * 00000001800D362E: lea     rcx, dword_1801FB51C
 * 00000001800D3635: call    sub_18000C548
 * 00000001800D363A: mov     rax, [rsi+rdi*8]
 * 00000001800D363E: mov     ecx, [r15+rax]
 * 00000001800D3642: cmp     cs:dword_1801FB520, ecx
 * 00000001800D3648: jle     loc_1800D3741
 * 00000001800D364E: lea     rcx, dword_1801FB520
 * 00000001800D3655: call    sub_18000C5B0
 * 00000001800D365A: cmp     cs:dword_1801FB520, r14d
 * 00000001800D3661: jnz     loc_1800D3741
 * 00000001800D3667: xor     edx, edx
 * 00000001800D3669: lea     rcx, [rbp+9F60h+var_9F36]
 * 00000001800D366D: call    sub_1800A8E58
 * 00000001800D3672: mov     bl, [rax]
 * 00000001800D3674: call    sub_1800C4FCC
 * 00000001800D3679: mov     rdx, rax
 * 00000001800D367C: mov     r8d, 1018h
 * 00000001800D3682: lea     rcx, [rbp+9F60h+var_9140]
 * 00000001800D3689: call    sub_1800A8E40
 * 00000001800D368E: movups  xmm0, xmmword ptr [rax]
 * 00000001800D3691: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D3697: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D369B: mov     r9d, r12d
 * 00000001800D369E: mov     r8d, r12d
 * 00000001800D36A1: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D36A6: lea     rcx, [rbp+9F60h+var_4EB0]
 * 00000001800D36AD: call    sub_1800A8E0C
 * 00000001800D36B2: movups  xmm6, xmmword ptr [rax]
 * 00000001800D36B5: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D36B9: call    sub_1800C50FC
 * 00000001800D36BE: mov     r8, rax
 * 00000001800D36C1: mov     r9d, r13d
 * 00000001800D36C4: mov     edx, 10Ah
 * 00000001800D36C9: lea     rcx, [rbp+9F60h+var_3AF0]; Src
 * 00000001800D36D0: call    sub_180088448
 * 00000001800D36D5: nop
 * 00000001800D36D6: mov     r8, rax
 * 00000001800D36D9: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D36E0: lea     rcx, [rbp+9F60h+var_3B10]
 * 00000001800D36E7: call    sub_18001DD3C
 * 00000001800D36EC: nop
 * 00000001800D36ED: lea     r8, aVertex; "/Vertex"
 * 00000001800D36F4: mov     rdx, rax
 * 00000001800D36F7: lea     rcx, [rbp+9F60h+var_8190]
 * 00000001800D36FE: call    sub_18001DC84
 * 00000001800D3703: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D3708: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D370D: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D3712: mov     rcx, rax
 * 00000001800D3715: call    sub_180088528
 * 00000001800D371A: nop
 * 00000001800D371B: lea     rcx, [rbp+9F60h+var_3B10]
 * 00000001800D3722: call    sub_180011570
 * 00000001800D3727: nop
 * 00000001800D3728: lea     rcx, [rbp+9F60h+var_3AF0]
 * 00000001800D372F: call    sub_180011570
 * 00000001800D3734: nop
 * 00000001800D3735: lea     rcx, dword_1801FB520
 * 00000001800D373C: call    sub_18000C548
 * 00000001800D3741: mov     rax, [rsi+rdi*8]
 * 00000001800D3745: mov     ecx, [r15+rax]
 * 00000001800D3749: cmp     cs:dword_1801FB524, ecx
 * 00000001800D374F: jle     loc_1800D3848
 * 00000001800D3755: lea     rcx, dword_1801FB524
 * 00000001800D375C: call    sub_18000C5B0
 * 00000001800D3761: cmp     cs:dword_1801FB524, r14d
 * 00000001800D3768: jnz     loc_1800D3848
 * 00000001800D376E: xor     edx, edx
 * 00000001800D3770: lea     rcx, [rbp+9F60h+var_9F35]
 * 00000001800D3774: call    sub_1800A8E58
 * 00000001800D3779: mov     bl, [rax]
 * 00000001800D377B: call    sub_1800C4FCC
 * 00000001800D3780: mov     rdx, rax
 * 00000001800D3783: mov     r8d, 1018h
 * 00000001800D3789: lea     rcx, [rbp+9F60h+var_9130]
 * 00000001800D3790: call    sub_1800A8E40
 * 00000001800D3795: movups  xmm0, xmmword ptr [rax]
 * 00000001800D3798: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D379E: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D37A2: mov     r9d, r12d
 * 00000001800D37A5: mov     r8d, r12d
 * 00000001800D37A8: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D37AD: lea     rcx, [rbp+9F60h+var_4E90]
 * 00000001800D37B4: call    sub_1800A8E0C
 * 00000001800D37B9: movups  xmm6, xmmword ptr [rax]
 * 00000001800D37BC: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D37C0: call    sub_1800C50FC
 * 00000001800D37C5: mov     r8, rax
 * 00000001800D37C8: mov     r9d, r13d
 * 00000001800D37CB: mov     edx, 110h
 * 00000001800D37D0: lea     rcx, [rbp+9F60h+var_3A90]; Src
 * 00000001800D37D7: call    sub_180088448
 * 00000001800D37DC: nop
 * 00000001800D37DD: mov     r8, rax
 * 00000001800D37E0: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D37E7: lea     rcx, [rbp+9F60h+var_3AB0]
 * 00000001800D37EE: call    sub_18001DD3C
 * 00000001800D37F3: nop
 * 00000001800D37F4: lea     r8, aVertex; "/Vertex"
 * 00000001800D37FB: mov     rdx, rax
 * 00000001800D37FE: lea     rcx, [rbp+9F60h+var_81D0]
 * 00000001800D3805: call    sub_18001DC84
 * 00000001800D380A: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D380F: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D3814: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D3819: mov     rcx, rax
 * 00000001800D381C: call    sub_180088528
 * 00000001800D3821: nop
 * 00000001800D3822: lea     rcx, [rbp+9F60h+var_3AB0]
 * 00000001800D3829: call    sub_180011570
 * 00000001800D382E: nop
 * 00000001800D382F: lea     rcx, [rbp+9F60h+var_3A90]
 * 00000001800D3836: call    sub_180011570
 * 00000001800D383B: nop
 * 00000001800D383C: lea     rcx, dword_1801FB524
 * 00000001800D3843: call    sub_18000C548
 * 00000001800D3848: mov     rax, [rsi+rdi*8]
 * 00000001800D384C: mov     ecx, [r15+rax]
 * 00000001800D3850: cmp     cs:dword_1801FB528, ecx
 * 00000001800D3856: jle     loc_1800D394F
 * 00000001800D385C: lea     rcx, dword_1801FB528
 * 00000001800D3863: call    sub_18000C5B0
 * 00000001800D3868: cmp     cs:dword_1801FB528, r14d
 * 00000001800D386F: jnz     loc_1800D394F
 * 00000001800D3875: xor     edx, edx
 * 00000001800D3877: lea     rcx, [rbp+9F60h+var_9F34]
 * 00000001800D387B: call    sub_1800A8E58
 * 00000001800D3880: mov     bl, [rax]
 * 00000001800D3882: call    sub_1800C4FCC
 * 00000001800D3887: mov     rdx, rax
 * 00000001800D388A: mov     r8d, 1018h
 * 00000001800D3890: lea     rcx, [rbp+9F60h+var_9120]
 * 00000001800D3897: call    sub_1800A8E40
 * 00000001800D389C: movups  xmm0, xmmword ptr [rax]
 * 00000001800D389F: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D38A5: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D38A9: mov     r9d, r12d
 * 00000001800D38AC: mov     r8d, r12d
 * 00000001800D38AF: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D38B4: lea     rcx, [rbp+9F60h+var_4E70]
 * 00000001800D38BB: call    sub_1800A8E0C
 * 00000001800D38C0: movups  xmm6, xmmword ptr [rax]
 * 00000001800D38C3: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D38C7: call    sub_1800C50FC
 * 00000001800D38CC: mov     r8, rax
 * 00000001800D38CF: mov     r9d, r13d
 * 00000001800D38D2: mov     edx, 112h
 * 00000001800D38D7: lea     rcx, [rbp+9F60h+var_3A30]; Src
 * 00000001800D38DE: call    sub_180088448
 * 00000001800D38E3: nop
 * 00000001800D38E4: mov     r8, rax
 * 00000001800D38E7: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D38EE: lea     rcx, [rbp+9F60h+var_3A50]
 * 00000001800D38F5: call    sub_18001DD3C
 * 00000001800D38FA: nop
 * 00000001800D38FB: lea     r8, aVertex; "/Vertex"
 * 00000001800D3902: mov     rdx, rax
 * 00000001800D3905: lea     rcx, [rbp+9F60h+var_81F0]
 * 00000001800D390C: call    sub_18001DC84
 * 00000001800D3911: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D3916: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D391B: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D3920: mov     rcx, rax
 * 00000001800D3923: call    sub_180088528
 * 00000001800D3928: nop
 * 00000001800D3929: lea     rcx, [rbp+9F60h+var_3A50]
 * 00000001800D3930: call    sub_180011570
 * 00000001800D3935: nop
 * 00000001800D3936: lea     rcx, [rbp+9F60h+var_3A30]
 * 00000001800D393D: call    sub_180011570
 * 00000001800D3942: nop
 * 00000001800D3943: lea     rcx, dword_1801FB528
 * 00000001800D394A: call    sub_18000C548
 * 00000001800D394F: mov     rax, [rsi+rdi*8]
 * 00000001800D3953: mov     ecx, [r15+rax]
 * 00000001800D3957: cmp     cs:dword_1801FB52C, ecx
 * 00000001800D395D: jle     loc_1800D3A56
 * 00000001800D3963: lea     rcx, dword_1801FB52C
 * 00000001800D396A: call    sub_18000C5B0
 * 00000001800D396F: cmp     cs:dword_1801FB52C, r14d
 * 00000001800D3976: jnz     loc_1800D3A56
 * 00000001800D397C: xor     edx, edx
 * 00000001800D397E: lea     rcx, [rbp+9F60h+var_9F33]
 * 00000001800D3982: call    sub_1800A8E58
 * 00000001800D3987: mov     bl, [rax]
 * 00000001800D3989: call    sub_1800C4FCC
 * 00000001800D398E: mov     rdx, rax
 * 00000001800D3991: mov     r8d, 1018h
 * 00000001800D3997: lea     rcx, [rbp+9F60h+var_9110]
 * 00000001800D399E: call    sub_1800A8E40
 * 00000001800D39A3: movups  xmm0, xmmword ptr [rax]
 * 00000001800D39A6: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D39AC: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D39B0: mov     r9d, r12d
 * 00000001800D39B3: mov     r8d, r12d
 * 00000001800D39B6: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D39BB: lea     rcx, [rbp+9F60h+var_4E50]
 * 00000001800D39C2: call    sub_1800A8E0C
 * 00000001800D39C7: movups  xmm6, xmmword ptr [rax]
 * 00000001800D39CA: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D39CE: call    sub_1800C50FC
 * 00000001800D39D3: mov     r8, rax
 * 00000001800D39D6: mov     r9d, r13d
 * 00000001800D39D9: mov     edx, 114h
 * 00000001800D39DE: lea     rcx, [rbp+9F60h+var_39D0]; Src
 * 00000001800D39E5: call    sub_180088448
 * 00000001800D39EA: nop
 * 00000001800D39EB: mov     r8, rax
 * 00000001800D39EE: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D39F5: lea     rcx, [rbp+9F60h+var_39F0]
 * 00000001800D39FC: call    sub_18001DD3C
 * 00000001800D3A01: nop
 * 00000001800D3A02: lea     r8, aVertex; "/Vertex"
 * 00000001800D3A09: mov     rdx, rax
 * 00000001800D3A0C: lea     rcx, [rbp+9F60h+var_8230]
 * 00000001800D3A13: call    sub_18001DC84
 * 00000001800D3A18: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D3A1D: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D3A22: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D3A27: mov     rcx, rax
 * 00000001800D3A2A: call    sub_180088528
 * 00000001800D3A2F: nop
 * 00000001800D3A30: lea     rcx, [rbp+9F60h+var_39F0]
 * 00000001800D3A37: call    sub_180011570
 * 00000001800D3A3C: nop
 * 00000001800D3A3D: lea     rcx, [rbp+9F60h+var_39D0]
 * 00000001800D3A44: call    sub_180011570
 * 00000001800D3A49: nop
 * 00000001800D3A4A: lea     rcx, dword_1801FB52C
 * 00000001800D3A51: call    sub_18000C548
 * 00000001800D3A56: mov     rax, [rsi+rdi*8]
 * 00000001800D3A5A: mov     ecx, [r15+rax]
 * 00000001800D3A5E: cmp     cs:dword_1801FB530, ecx
 * 00000001800D3A64: jle     loc_1800D3B5D
 * 00000001800D3A6A: lea     rcx, dword_1801FB530
 * 00000001800D3A71: call    sub_18000C5B0
 * 00000001800D3A76: cmp     cs:dword_1801FB530, r14d
 * 00000001800D3A7D: jnz     loc_1800D3B5D
 * 00000001800D3A83: xor     edx, edx
 * 00000001800D3A85: lea     rcx, [rbp+9F60h+var_9F32]
 * 00000001800D3A89: call    sub_1800A8E58
 * 00000001800D3A8E: mov     bl, [rax]
 * 00000001800D3A90: call    sub_1800C4FCC
 * 00000001800D3A95: mov     rdx, rax
 * 00000001800D3A98: mov     r8d, 1018h
 * 00000001800D3A9E: lea     rcx, [rbp+9F60h+var_9100]
 * 00000001800D3AA5: call    sub_1800A8E40
 * 00000001800D3AAA: movups  xmm0, xmmword ptr [rax]
 * 00000001800D3AAD: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D3AB3: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D3AB7: mov     r9d, r12d
 * 00000001800D3ABA: mov     r8d, r12d
 * 00000001800D3ABD: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D3AC2: lea     rcx, [rbp+9F60h+var_4E30]
 * 00000001800D3AC9: call    sub_1800A8E0C
 * 00000001800D3ACE: movups  xmm6, xmmword ptr [rax]
 * 00000001800D3AD1: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D3AD5: call    sub_1800C50FC
 * 00000001800D3ADA: mov     r8, rax
 * 00000001800D3ADD: mov     r9d, r13d
 * 00000001800D3AE0: mov     edx, 116h
 * 00000001800D3AE5: lea     rcx, [rbp+9F60h+var_3970]; Src
 * 00000001800D3AEC: call    sub_180088448
 * 00000001800D3AF1: nop
 * 00000001800D3AF2: mov     r8, rax
 * 00000001800D3AF5: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D3AFC: lea     rcx, [rbp+9F60h+var_3990]
 * 00000001800D3B03: call    sub_18001DD3C
 * 00000001800D3B08: nop
 * 00000001800D3B09: lea     r8, aVertex; "/Vertex"
 * 00000001800D3B10: mov     rdx, rax
 * 00000001800D3B13: lea     rcx, [rbp+9F60h+var_8250]
 * 00000001800D3B1A: call    sub_18001DC84
 * 00000001800D3B1F: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D3B24: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D3B29: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D3B2E: mov     rcx, rax
 * 00000001800D3B31: call    sub_180088528
 * 00000001800D3B36: nop
 * 00000001800D3B37: lea     rcx, [rbp+9F60h+var_3990]
 * 00000001800D3B3E: call    sub_180011570
 * 00000001800D3B43: nop
 * 00000001800D3B44: lea     rcx, [rbp+9F60h+var_3970]
 * 00000001800D3B4B: call    sub_180011570
 * 00000001800D3B50: nop
 * 00000001800D3B51: lea     rcx, dword_1801FB530
 * 00000001800D3B58: call    sub_18000C548
 * 00000001800D3B5D: mov     rax, [rsi+rdi*8]
 * 00000001800D3B61: mov     ecx, [r15+rax]
 * 00000001800D3B65: cmp     cs:dword_1801FB534, ecx
 * 00000001800D3B6B: jle     loc_1800D3C64
 * 00000001800D3B71: lea     rcx, dword_1801FB534
 * 00000001800D3B78: call    sub_18000C5B0
 * 00000001800D3B7D: cmp     cs:dword_1801FB534, r14d
 * 00000001800D3B84: jnz     loc_1800D3C64
 * 00000001800D3B8A: xor     edx, edx
 * 00000001800D3B8C: lea     rcx, [rbp+9F60h+var_9F31]
 * 00000001800D3B90: call    sub_1800A8E58
 * 00000001800D3B95: mov     bl, [rax]
 * 00000001800D3B97: call    sub_1800C4FCC
 * 00000001800D3B9C: mov     rdx, rax
 * 00000001800D3B9F: mov     r8d, 1018h
 * 00000001800D3BA5: lea     rcx, [rbp+9F60h+var_90F0]
 * 00000001800D3BAC: call    sub_1800A8E40
 * 00000001800D3BB1: movups  xmm0, xmmword ptr [rax]
 * 00000001800D3BB4: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D3BBA: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D3BBE: mov     r9d, r12d
 * 00000001800D3BC1: mov     r8d, r12d
 * 00000001800D3BC4: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D3BC9: lea     rcx, [rbp+9F60h+var_4E10]
 * 00000001800D3BD0: call    sub_1800A8E0C
 * 00000001800D3BD5: movups  xmm6, xmmword ptr [rax]
 * 00000001800D3BD8: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D3BDC: call    sub_1800C50FC
 * 00000001800D3BE1: mov     r8, rax
 * 00000001800D3BE4: mov     r9d, r13d
 * 00000001800D3BE7: mov     edx, 118h
 * 00000001800D3BEC: lea     rcx, [rbp+9F60h+var_3910]; Src
 * 00000001800D3BF3: call    sub_180088448
 * 00000001800D3BF8: nop
 * 00000001800D3BF9: mov     r8, rax
 * 00000001800D3BFC: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D3C03: lea     rcx, [rbp+9F60h+var_3930]
 * 00000001800D3C0A: call    sub_18001DD3C
 * 00000001800D3C0F: nop
 * 00000001800D3C10: lea     r8, aVertex; "/Vertex"
 * 00000001800D3C17: mov     rdx, rax
 * 00000001800D3C1A: lea     rcx, [rbp+9F60h+var_8290]
 * 00000001800D3C21: call    sub_18001DC84
 * 00000001800D3C26: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D3C2B: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D3C30: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D3C35: mov     rcx, rax
 * 00000001800D3C38: call    sub_180088528
 * 00000001800D3C3D: nop
 * 00000001800D3C3E: lea     rcx, [rbp+9F60h+var_3930]
 * 00000001800D3C45: call    sub_180011570
 * 00000001800D3C4A: nop
 * 00000001800D3C4B: lea     rcx, [rbp+9F60h+var_3910]
 * 00000001800D3C52: call    sub_180011570
 * 00000001800D3C57: nop
 * 00000001800D3C58: lea     rcx, dword_1801FB534
 * 00000001800D3C5F: call    sub_18000C548
 * 00000001800D3C64: mov     rax, [rsi+rdi*8]
 * 00000001800D3C68: mov     ecx, [r15+rax]
 * 00000001800D3C6C: cmp     cs:dword_1801FB538, ecx
 * 00000001800D3C72: jle     loc_1800D3D6B
 * 00000001800D3C78: lea     rcx, dword_1801FB538
 * 00000001800D3C7F: call    sub_18000C5B0
 * 00000001800D3C84: cmp     cs:dword_1801FB538, r14d
 * 00000001800D3C8B: jnz     loc_1800D3D6B
 * 00000001800D3C91: xor     edx, edx
 * 00000001800D3C93: lea     rcx, [rbp+9F60h+var_9F30]
 * 00000001800D3C97: call    sub_1800A8E58
 * 00000001800D3C9C: mov     bl, [rax]
 * 00000001800D3C9E: call    sub_1800C4FCC
 * 00000001800D3CA3: mov     rdx, rax
 * 00000001800D3CA6: mov     r8d, 1018h
 * 00000001800D3CAC: lea     rcx, [rbp+9F60h+var_90E0]
 * 00000001800D3CB3: call    sub_1800A8E40
 * 00000001800D3CB8: movups  xmm0, xmmword ptr [rax]
 * 00000001800D3CBB: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D3CC1: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D3CC5: mov     r9d, r12d
 * 00000001800D3CC8: mov     r8d, r12d
 * 00000001800D3CCB: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D3CD0: lea     rcx, [rbp+9F60h+var_4DF0]
 * 00000001800D3CD7: call    sub_1800A8E0C
 * 00000001800D3CDC: movups  xmm6, xmmword ptr [rax]
 * 00000001800D3CDF: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D3CE3: call    sub_1800C50FC
 * 00000001800D3CE8: mov     r8, rax
 * 00000001800D3CEB: mov     r9d, r13d
 * 00000001800D3CEE: mov     edx, 11Ah
 * 00000001800D3CF3: lea     rcx, [rbp+9F60h+var_38B0]; Src
 * 00000001800D3CFA: call    sub_180088448
 * 00000001800D3CFF: nop
 * 00000001800D3D00: mov     r8, rax
 * 00000001800D3D03: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D3D0A: lea     rcx, [rbp+9F60h+var_38D0]
 * 00000001800D3D11: call    sub_18001DD3C
 * 00000001800D3D16: nop
 * 00000001800D3D17: lea     r8, aVertex; "/Vertex"
 * 00000001800D3D1E: mov     rdx, rax
 * 00000001800D3D21: lea     rcx, [rbp+9F60h+var_82B0]
 * 00000001800D3D28: call    sub_18001DC84
 * 00000001800D3D2D: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D3D32: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D3D37: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D3D3C: mov     rcx, rax
 * 00000001800D3D3F: call    sub_180088528
 * 00000001800D3D44: nop
 * 00000001800D3D45: lea     rcx, [rbp+9F60h+var_38D0]
 * 00000001800D3D4C: call    sub_180011570
 * 00000001800D3D51: nop
 * 00000001800D3D52: lea     rcx, [rbp+9F60h+var_38B0]
 * 00000001800D3D59: call    sub_180011570
 * 00000001800D3D5E: nop
 * 00000001800D3D5F: lea     rcx, dword_1801FB538
 * 00000001800D3D66: call    sub_18000C548
 * 00000001800D3D6B: mov     rax, [rsi+rdi*8]
 * 00000001800D3D6F: mov     ecx, [r15+rax]
 * 00000001800D3D73: cmp     cs:dword_1801FB53C, ecx
 * 00000001800D3D79: jle     loc_1800D3E72
 * 00000001800D3D7F: lea     rcx, dword_1801FB53C
 * 00000001800D3D86: call    sub_18000C5B0
 * 00000001800D3D8B: cmp     cs:dword_1801FB53C, r14d
 * 00000001800D3D92: jnz     loc_1800D3E72
 * 00000001800D3D98: xor     edx, edx
 * 00000001800D3D9A: lea     rcx, [rbp+9F60h+var_9F2F]
 * 00000001800D3D9E: call    sub_1800A8E58
 * 00000001800D3DA3: mov     bl, [rax]
 * 00000001800D3DA5: call    sub_1800C505C
 * 00000001800D3DAA: mov     rdx, rax
 * 00000001800D3DAD: mov     r8d, 1A18h
 * 00000001800D3DB3: lea     rcx, [rbp+9F60h+var_90D0]
 * 00000001800D3DBA: call    sub_1800A8E40
 * 00000001800D3DBF: movups  xmm0, xmmword ptr [rax]
 * 00000001800D3DC2: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D3DC8: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D3DCC: mov     r9d, r12d
 * 00000001800D3DCF: mov     r8d, r12d
 * 00000001800D3DD2: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D3DD7: lea     rcx, [rbp+9F60h+var_4DD0]
 * 00000001800D3DDE: call    sub_1800A8E0C
 * 00000001800D3DE3: movups  xmm6, xmmword ptr [rax]
 * 00000001800D3DE6: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D3DEA: call    sub_1800C50FC
 * 00000001800D3DEF: mov     r8, rax
 * 00000001800D3DF2: mov     r9d, r13d
 * 00000001800D3DF5: mov     edx, 120h
 * 00000001800D3DFA: lea     rcx, [rbp+9F60h+var_3850]; Src
 * 00000001800D3E01: call    sub_180088448
 * 00000001800D3E06: nop
 * 00000001800D3E07: mov     r8, rax
 * 00000001800D3E0A: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D3E11: lea     rcx, [rbp+9F60h+var_3870]
 * 00000001800D3E18: call    sub_18001DD3C
 * 00000001800D3E1D: nop
 * 00000001800D3E1E: lea     r8, aVertex; "/Vertex"
 * 00000001800D3E25: mov     rdx, rax
 * 00000001800D3E28: lea     rcx, [rbp+9F60h+var_82F0]
 * 00000001800D3E2F: call    sub_18001DC84
 * 00000001800D3E34: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D3E39: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D3E3E: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D3E43: mov     rcx, rax
 * 00000001800D3E46: call    sub_180088528
 * 00000001800D3E4B: nop
 * 00000001800D3E4C: lea     rcx, [rbp+9F60h+var_3870]
 * 00000001800D3E53: call    sub_180011570
 * 00000001800D3E58: nop
 * 00000001800D3E59: lea     rcx, [rbp+9F60h+var_3850]
 * 00000001800D3E60: call    sub_180011570
 * 00000001800D3E65: nop
 * 00000001800D3E66: lea     rcx, dword_1801FB53C
 * 00000001800D3E6D: call    sub_18000C548
 * 00000001800D3E72: mov     rax, [rsi+rdi*8]
 * 00000001800D3E76: mov     ecx, [r15+rax]
 * 00000001800D3E7A: cmp     cs:dword_1801FB540, ecx
 * 00000001800D3E80: jle     loc_1800D3F79
 * 00000001800D3E86: lea     rcx, dword_1801FB540
 * 00000001800D3E8D: call    sub_18000C5B0
 * 00000001800D3E92: cmp     cs:dword_1801FB540, r14d
 * 00000001800D3E99: jnz     loc_1800D3F79
 * 00000001800D3E9F: xor     edx, edx
 * 00000001800D3EA1: lea     rcx, [rbp+9F60h+var_9F2E]
 * 00000001800D3EA5: call    sub_1800A8E58
 * 00000001800D3EAA: mov     bl, [rax]
 * 00000001800D3EAC: call    sub_1800C505C
 * 00000001800D3EB1: mov     rdx, rax
 * 00000001800D3EB4: mov     r8d, 1A18h
 * 00000001800D3EBA: lea     rcx, [rbp+9F60h+var_90C0]
 * 00000001800D3EC1: call    sub_1800A8E40
 * 00000001800D3EC6: movups  xmm0, xmmword ptr [rax]
 * 00000001800D3EC9: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D3ECF: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D3ED3: mov     r9d, r12d
 * 00000001800D3ED6: mov     r8d, r12d
 * 00000001800D3ED9: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D3EDE: lea     rcx, [rbp+9F60h+var_4DB0]
 * 00000001800D3EE5: call    sub_1800A8E0C
 * 00000001800D3EEA: movups  xmm6, xmmword ptr [rax]
 * 00000001800D3EED: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D3EF1: call    sub_1800C50FC
 * 00000001800D3EF6: mov     r8, rax
 * 00000001800D3EF9: mov     r9d, r13d
 * 00000001800D3EFC: mov     edx, 122h
 * 00000001800D3F01: lea     rcx, [rbp+9F60h+var_37F0]; Src
 * 00000001800D3F08: call    sub_180088448
 * 00000001800D3F0D: nop
 * 00000001800D3F0E: mov     r8, rax
 * 00000001800D3F11: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D3F18: lea     rcx, [rbp+9F60h+var_3810]
 * 00000001800D3F1F: call    sub_18001DD3C
 * 00000001800D3F24: nop
 * 00000001800D3F25: lea     r8, aVertex; "/Vertex"
 * 00000001800D3F2C: mov     rdx, rax
 * 00000001800D3F2F: lea     rcx, [rbp+9F60h+var_8310]
 * 00000001800D3F36: call    sub_18001DC84
 * 00000001800D3F3B: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D3F40: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D3F45: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D3F4A: mov     rcx, rax
 * 00000001800D3F4D: call    sub_180088528
 * 00000001800D3F52: nop
 * 00000001800D3F53: lea     rcx, [rbp+9F60h+var_3810]
 * 00000001800D3F5A: call    sub_180011570
 * 00000001800D3F5F: nop
 * 00000001800D3F60: lea     rcx, [rbp+9F60h+var_37F0]
 * 00000001800D3F67: call    sub_180011570
 * 00000001800D3F6C: nop
 * 00000001800D3F6D: lea     rcx, dword_1801FB540
 * 00000001800D3F74: call    sub_18000C548
 * 00000001800D3F79: mov     rax, [rsi+rdi*8]
 * 00000001800D3F7D: mov     ecx, [r15+rax]
 * 00000001800D3F81: cmp     cs:dword_1801FB544, ecx
 * 00000001800D3F87: jle     loc_1800D4080
 * 00000001800D3F8D: lea     rcx, dword_1801FB544
 * 00000001800D3F94: call    sub_18000C5B0
 * 00000001800D3F99: cmp     cs:dword_1801FB544, r14d
 * 00000001800D3FA0: jnz     loc_1800D4080
 * 00000001800D3FA6: xor     edx, edx
 * 00000001800D3FA8: lea     rcx, [rbp+9F60h+var_9F2D]
 * 00000001800D3FAC: call    sub_1800A8E58
 * 00000001800D3FB1: mov     bl, [rax]
 * 00000001800D3FB3: call    sub_1800C505C
 * 00000001800D3FB8: mov     rdx, rax
 * 00000001800D3FBB: mov     r8d, 1A18h
 * 00000001800D3FC1: lea     rcx, [rbp+9F60h+var_90B0]
 * 00000001800D3FC8: call    sub_1800A8E40
 * 00000001800D3FCD: movups  xmm0, xmmword ptr [rax]
 * 00000001800D3FD0: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D3FD6: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D3FDA: mov     r9d, r12d
 * 00000001800D3FDD: mov     r8d, r12d
 * 00000001800D3FE0: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D3FE5: lea     rcx, [rbp+9F60h+var_4D90]
 * 00000001800D3FEC: call    sub_1800A8E0C
 * 00000001800D3FF1: movups  xmm6, xmmword ptr [rax]
 * 00000001800D3FF4: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D3FF8: call    sub_1800C50FC
 * 00000001800D3FFD: mov     r8, rax
 * 00000001800D4000: mov     r9d, r13d
 * 00000001800D4003: mov     edx, 128h
 * 00000001800D4008: lea     rcx, [rbp+9F60h+var_3790]; Src
 * 00000001800D400F: call    sub_180088448
 * 00000001800D4014: nop
 * 00000001800D4015: mov     r8, rax
 * 00000001800D4018: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D401F: lea     rcx, [rbp+9F60h+var_37B0]
 * 00000001800D4026: call    sub_18001DD3C
 * 00000001800D402B: nop
 * 00000001800D402C: lea     r8, aVertex; "/Vertex"
 * 00000001800D4033: mov     rdx, rax
 * 00000001800D4036: lea     rcx, [rbp+9F60h+var_8350]
 * 00000001800D403D: call    sub_18001DC84
 * 00000001800D4042: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D4047: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D404C: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D4051: mov     rcx, rax
 * 00000001800D4054: call    sub_180088528
 * 00000001800D4059: nop
 * 00000001800D405A: lea     rcx, [rbp+9F60h+var_37B0]
 * 00000001800D4061: call    sub_180011570
 * 00000001800D4066: nop
 * 00000001800D4067: lea     rcx, [rbp+9F60h+var_3790]
 * 00000001800D406E: call    sub_180011570
 * 00000001800D4073: nop
 * 00000001800D4074: lea     rcx, dword_1801FB544
 * 00000001800D407B: call    sub_18000C548
 * 00000001800D4080: mov     rax, [rsi+rdi*8]
 * 00000001800D4084: mov     ecx, [r15+rax]
 * 00000001800D4088: cmp     cs:dword_1801FB548, ecx
 * 00000001800D408E: jle     loc_1800D4187
 * 00000001800D4094: lea     rcx, dword_1801FB548
 * 00000001800D409B: call    sub_18000C5B0
 * 00000001800D40A0: cmp     cs:dword_1801FB548, r14d
 * 00000001800D40A7: jnz     loc_1800D4187
 * 00000001800D40AD: xor     edx, edx
 * 00000001800D40AF: lea     rcx, [rbp+9F60h+var_9F2C]
 * 00000001800D40B3: call    sub_1800A8E58
 * 00000001800D40B8: mov     bl, [rax]
 * 00000001800D40BA: call    sub_1800C505C
 * 00000001800D40BF: mov     rdx, rax
 * 00000001800D40C2: mov     r8d, 1A18h
 * 00000001800D40C8: lea     rcx, [rbp+9F60h+var_90A0]
 * 00000001800D40CF: call    sub_1800A8E40
 * 00000001800D40D4: movups  xmm0, xmmword ptr [rax]
 * 00000001800D40D7: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D40DD: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D40E1: mov     r9d, r12d
 * 00000001800D40E4: mov     r8d, r12d
 * 00000001800D40E7: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D40EC: lea     rcx, [rbp+9F60h+var_4D70]
 * 00000001800D40F3: call    sub_1800A8E0C
 * 00000001800D40F8: movups  xmm6, xmmword ptr [rax]
 * 00000001800D40FB: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D40FF: call    sub_1800C50FC
 * 00000001800D4104: mov     r8, rax
 * 00000001800D4107: mov     r9d, r13d
 * 00000001800D410A: mov     edx, 12Ah
 * 00000001800D410F: lea     rcx, [rbp+9F60h+var_3730]; Src
 * 00000001800D4116: call    sub_180088448
 * 00000001800D411B: nop
 * 00000001800D411C: mov     r8, rax
 * 00000001800D411F: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D4126: lea     rcx, [rbp+9F60h+var_3750]
 * 00000001800D412D: call    sub_18001DD3C
 * 00000001800D4132: nop
 * 00000001800D4133: lea     r8, aVertex; "/Vertex"
 * 00000001800D413A: mov     rdx, rax
 * 00000001800D413D: lea     rcx, [rbp+9F60h+var_8370]
 * 00000001800D4144: call    sub_18001DC84
 * 00000001800D4149: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D414E: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D4153: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D4158: mov     rcx, rax
 * 00000001800D415B: call    sub_180088528
 * 00000001800D4160: nop
 * 00000001800D4161: lea     rcx, [rbp+9F60h+var_3750]
 * 00000001800D4168: call    sub_180011570
 * 00000001800D416D: nop
 * 00000001800D416E: lea     rcx, [rbp+9F60h+var_3730]
 * 00000001800D4175: call    sub_180011570
 * 00000001800D417A: nop
 * 00000001800D417B: lea     rcx, dword_1801FB548
 * 00000001800D4182: call    sub_18000C548
 * 00000001800D4187: mov     rax, [rsi+rdi*8]
 * 00000001800D418B: mov     ecx, [r15+rax]
 * 00000001800D418F: cmp     cs:dword_1801FB54C, ecx
 * 00000001800D4195: jle     loc_1800D428E
 * 00000001800D419B: lea     rcx, dword_1801FB54C
 * 00000001800D41A2: call    sub_18000C5B0
 * 00000001800D41A7: cmp     cs:dword_1801FB54C, r14d
 * 00000001800D41AE: jnz     loc_1800D428E
 * 00000001800D41B4: xor     edx, edx
 * 00000001800D41B6: lea     rcx, [rbp+9F60h+var_9F2B]
 * 00000001800D41BA: call    sub_1800A8E58
 * 00000001800D41BF: mov     bl, [rax]
 * 00000001800D41C1: call    sub_1800C505C
 * 00000001800D41C6: mov     rdx, rax
 * 00000001800D41C9: mov     r8d, 1A18h
 * 00000001800D41CF: lea     rcx, [rbp+9F60h+var_9090]
 * 00000001800D41D6: call    sub_1800A8E40
 * 00000001800D41DB: movups  xmm0, xmmword ptr [rax]
 * 00000001800D41DE: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D41E4: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D41E8: mov     r9d, r12d
 * 00000001800D41EB: mov     r8d, r12d
 * 00000001800D41EE: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D41F3: lea     rcx, [rbp+9F60h+var_4D50]
 * 00000001800D41FA: call    sub_1800A8E0C
 * 00000001800D41FF: movups  xmm6, xmmword ptr [rax]
 * 00000001800D4202: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D4206: call    sub_1800C50FC
 * 00000001800D420B: mov     r8, rax
 * 00000001800D420E: mov     r9d, r13d
 * 00000001800D4211: mov     edx, 130h
 * 00000001800D4216: lea     rcx, [rbp+9F60h+var_36D0]; Src
 * 00000001800D421D: call    sub_180088448
 * 00000001800D4222: nop
 * 00000001800D4223: mov     r8, rax
 * 00000001800D4226: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D422D: lea     rcx, [rbp+9F60h+var_36F0]
 * 00000001800D4234: call    sub_18001DD3C
 * 00000001800D4239: nop
 * 00000001800D423A: lea     r8, aVertex; "/Vertex"
 * 00000001800D4241: mov     rdx, rax
 * 00000001800D4244: lea     rcx, [rbp+9F60h+var_83B0]
 * 00000001800D424B: call    sub_18001DC84
 * 00000001800D4250: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D4255: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D425A: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D425F: mov     rcx, rax
 * 00000001800D4262: call    sub_180088528
 * 00000001800D4267: nop
 * 00000001800D4268: lea     rcx, [rbp+9F60h+var_36F0]
 * 00000001800D426F: call    sub_180011570
 * 00000001800D4274: nop
 * 00000001800D4275: lea     rcx, [rbp+9F60h+var_36D0]
 * 00000001800D427C: call    sub_180011570
 * 00000001800D4281: nop
 * 00000001800D4282: lea     rcx, dword_1801FB54C
 * 00000001800D4289: call    sub_18000C548
 * 00000001800D428E: mov     rax, [rsi+rdi*8]
 * 00000001800D4292: mov     ecx, [r15+rax]
 * 00000001800D4296: cmp     cs:dword_1801FB550, ecx
 * 00000001800D429C: jle     loc_1800D4395
 * 00000001800D42A2: lea     rcx, dword_1801FB550
 * 00000001800D42A9: call    sub_18000C5B0
 * 00000001800D42AE: cmp     cs:dword_1801FB550, r14d
 * 00000001800D42B5: jnz     loc_1800D4395
 * 00000001800D42BB: xor     edx, edx
 * 00000001800D42BD: lea     rcx, [rbp+9F60h+var_9F2A]
 * 00000001800D42C1: call    sub_1800A8E58
 * 00000001800D42C6: mov     bl, [rax]
 * 00000001800D42C8: call    sub_1800C505C
 * 00000001800D42CD: mov     rdx, rax
 * 00000001800D42D0: mov     r8d, 1A18h
 * 00000001800D42D6: lea     rcx, [rbp+9F60h+var_9080]
 * 00000001800D42DD: call    sub_1800A8E40
 * 00000001800D42E2: movups  xmm0, xmmword ptr [rax]
 * 00000001800D42E5: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D42EB: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D42EF: mov     r9d, r12d
 * 00000001800D42F2: mov     r8d, r12d
 * 00000001800D42F5: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D42FA: lea     rcx, [rbp+9F60h+var_4D30]
 * 00000001800D4301: call    sub_1800A8E0C
 * 00000001800D4306: movups  xmm6, xmmword ptr [rax]
 * 00000001800D4309: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D430D: call    sub_1800C50FC
 * 00000001800D4312: mov     r8, rax
 * 00000001800D4315: mov     r9d, r13d
 * 00000001800D4318: mov     edx, 132h
 * 00000001800D431D: lea     rcx, [rbp+9F60h+var_3670]; Src
 * 00000001800D4324: call    sub_180088448
 * 00000001800D4329: nop
 * 00000001800D432A: mov     r8, rax
 * 00000001800D432D: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D4334: lea     rcx, [rbp+9F60h+var_3690]
 * 00000001800D433B: call    sub_18001DD3C
 * 00000001800D4340: nop
 * 00000001800D4341: lea     r8, aVertex; "/Vertex"
 * 00000001800D4348: mov     rdx, rax
 * 00000001800D434B: lea     rcx, [rbp+9F60h+var_83D0]
 * 00000001800D4352: call    sub_18001DC84
 * 00000001800D4357: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D435C: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D4361: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D4366: mov     rcx, rax
 * 00000001800D4369: call    sub_180088528
 * 00000001800D436E: nop
 * 00000001800D436F: lea     rcx, [rbp+9F60h+var_3690]
 * 00000001800D4376: call    sub_180011570
 * 00000001800D437B: nop
 * 00000001800D437C: lea     rcx, [rbp+9F60h+var_3670]
 * 00000001800D4383: call    sub_180011570
 * 00000001800D4388: nop
 * 00000001800D4389: lea     rcx, dword_1801FB550
 * 00000001800D4390: call    sub_18000C548
 * 00000001800D4395: mov     rax, [rsi+rdi*8]
 * 00000001800D4399: mov     ecx, [r15+rax]
 * 00000001800D439D: cmp     cs:dword_1801FB554, ecx
 * 00000001800D43A3: jle     loc_1800D449C
 * 00000001800D43A9: lea     rcx, dword_1801FB554
 * 00000001800D43B0: call    sub_18000C5B0
 * 00000001800D43B5: cmp     cs:dword_1801FB554, r14d
 * 00000001800D43BC: jnz     loc_1800D449C
 * 00000001800D43C2: xor     edx, edx
 * 00000001800D43C4: lea     rcx, [rbp+9F60h+var_9F29]
 * 00000001800D43C8: call    sub_1800A8E58
 * 00000001800D43CD: mov     bl, [rax]
 * 00000001800D43CF: call    sub_1800C505C
 * 00000001800D43D4: mov     rdx, rax
 * 00000001800D43D7: mov     r8d, 1A18h
 * 00000001800D43DD: lea     rcx, [rbp+9F60h+var_9070]
 * 00000001800D43E4: call    sub_1800A8E40
 * 00000001800D43E9: movups  xmm0, xmmword ptr [rax]
 * 00000001800D43EC: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D43F2: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D43F6: mov     r9d, r12d
 * 00000001800D43F9: mov     r8d, r12d
 * 00000001800D43FC: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D4401: lea     rcx, [rbp+9F60h+var_4D10]
 * 00000001800D4408: call    sub_1800A8E0C
 * 00000001800D440D: movups  xmm6, xmmword ptr [rax]
 * 00000001800D4410: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D4414: call    sub_1800C50FC
 * 00000001800D4419: mov     r8, rax
 * 00000001800D441C: mov     r9d, r13d
 * 00000001800D441F: mov     edx, 138h
 * 00000001800D4424: lea     rcx, [rbp+9F60h+var_3610]; Src
 * 00000001800D442B: call    sub_180088448
 * 00000001800D4430: nop
 * 00000001800D4431: mov     r8, rax
 * 00000001800D4434: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D443B: lea     rcx, [rbp+9F60h+var_3630]
 * 00000001800D4442: call    sub_18001DD3C
 * 00000001800D4447: nop
 * 00000001800D4448: lea     r8, aVertex; "/Vertex"
 * 00000001800D444F: mov     rdx, rax
 * 00000001800D4452: lea     rcx, [rbp+9F60h+var_8410]
 * 00000001800D4459: call    sub_18001DC84
 * 00000001800D445E: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D4463: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D4468: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D446D: mov     rcx, rax
 * 00000001800D4470: call    sub_180088528
 * 00000001800D4475: nop
 * 00000001800D4476: lea     rcx, [rbp+9F60h+var_3630]
 * 00000001800D447D: call    sub_180011570
 * 00000001800D4482: nop
 * 00000001800D4483: lea     rcx, [rbp+9F60h+var_3610]
 * 00000001800D448A: call    sub_180011570
 * 00000001800D448F: nop
 * 00000001800D4490: lea     rcx, dword_1801FB554
 * 00000001800D4497: call    sub_18000C548
 * 00000001800D449C: mov     rax, [rsi+rdi*8]
 * 00000001800D44A0: mov     ecx, [r15+rax]
 * 00000001800D44A4: cmp     cs:dword_1801FB558, ecx
 * 00000001800D44AA: jle     loc_1800D45A3
 * 00000001800D44B0: lea     rcx, dword_1801FB558
 * 00000001800D44B7: call    sub_18000C5B0
 * 00000001800D44BC: cmp     cs:dword_1801FB558, r14d
 * 00000001800D44C3: jnz     loc_1800D45A3
 * 00000001800D44C9: xor     edx, edx
 * 00000001800D44CB: lea     rcx, [rbp+9F60h+var_9F28]
 * 00000001800D44CF: call    sub_1800A8E58
 * 00000001800D44D4: mov     bl, [rax]
 * 00000001800D44D6: call    sub_1800C505C
 * 00000001800D44DB: mov     rdx, rax
 * 00000001800D44DE: mov     r8d, 1A18h
 * 00000001800D44E4: lea     rcx, [rbp+9F60h+var_9060]
 * 00000001800D44EB: call    sub_1800A8E40
 * 00000001800D44F0: movups  xmm0, xmmword ptr [rax]
 * 00000001800D44F3: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D44F9: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D44FD: mov     r9d, r12d
 * 00000001800D4500: mov     r8d, r12d
 * 00000001800D4503: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D4508: lea     rcx, [rbp+9F60h+var_4CF0]
 * 00000001800D450F: call    sub_1800A8E0C
 * 00000001800D4514: movups  xmm6, xmmword ptr [rax]
 * 00000001800D4517: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D451B: call    sub_1800C50FC
 * 00000001800D4520: mov     r8, rax
 * 00000001800D4523: mov     r9d, r13d
 * 00000001800D4526: mov     edx, 13Ah
 * 00000001800D452B: lea     rcx, [rbp+9F60h+var_35B0]; Src
 * 00000001800D4532: call    sub_180088448
 * 00000001800D4537: nop
 * 00000001800D4538: mov     r8, rax
 * 00000001800D453B: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D4542: lea     rcx, [rbp+9F60h+var_35D0]
 * 00000001800D4549: call    sub_18001DD3C
 * 00000001800D454E: nop
 * 00000001800D454F: lea     r8, aVertex; "/Vertex"
 * 00000001800D4556: mov     rdx, rax
 * 00000001800D4559: lea     rcx, [rbp+9F60h+var_8430]
 * 00000001800D4560: call    sub_18001DC84
 * 00000001800D4565: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D456A: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D456F: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D4574: mov     rcx, rax
 * 00000001800D4577: call    sub_180088528
 * 00000001800D457C: nop
 * 00000001800D457D: lea     rcx, [rbp+9F60h+var_35D0]
 * 00000001800D4584: call    sub_180011570
 * 00000001800D4589: nop
 * 00000001800D458A: lea     rcx, [rbp+9F60h+var_35B0]
 * 00000001800D4591: call    sub_180011570
 * 00000001800D4596: nop
 * 00000001800D4597: lea     rcx, dword_1801FB558
 * 00000001800D459E: call    sub_18000C548
 * 00000001800D45A3: mov     rax, [rsi+rdi*8]
 * 00000001800D45A7: mov     ecx, [r15+rax]
 * 00000001800D45AB: cmp     cs:dword_1801FB55C, ecx
 * 00000001800D45B1: jle     loc_1800D46AA
 * 00000001800D45B7: lea     rcx, dword_1801FB55C
 * 00000001800D45BE: call    sub_18000C5B0
 * 00000001800D45C3: cmp     cs:dword_1801FB55C, r14d
 * 00000001800D45CA: jnz     loc_1800D46AA
 * 00000001800D45D0: xor     edx, edx
 * 00000001800D45D2: lea     rcx, [rbp+9F60h+var_9F27]
 * 00000001800D45D6: call    sub_1800A8E58
 * 00000001800D45DB: mov     bl, [rax]
 * 00000001800D45DD: call    sub_1800C507C
 * 00000001800D45E2: mov     rdx, rax
 * 00000001800D45E5: mov     r8d, 1050h
 * 00000001800D45EB: lea     rcx, [rbp+9F60h+var_9050]
 * 00000001800D45F2: call    sub_1800A8E40
 * 00000001800D45F7: movups  xmm0, xmmword ptr [rax]
 * 00000001800D45FA: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D4600: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D4604: mov     r9d, r12d
 * 00000001800D4607: mov     r8d, r12d
 * 00000001800D460A: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D460F: lea     rcx, [rbp+9F60h+var_4CD0]
 * 00000001800D4616: call    sub_1800A8E0C
 * 00000001800D461B: movups  xmm6, xmmword ptr [rax]
 * 00000001800D461E: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D4622: call    sub_1800C50FC
 * 00000001800D4627: mov     r8, rax
 * 00000001800D462A: mov     r9d, r13d
 * 00000001800D462D: mov     edx, 140h
 * 00000001800D4632: lea     rcx, [rbp+9F60h+var_3550]; Src
 * 00000001800D4639: call    sub_180088448
 * 00000001800D463E: nop
 * 00000001800D463F: mov     r8, rax
 * 00000001800D4642: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D4649: lea     rcx, [rbp+9F60h+var_3570]
 * 00000001800D4650: call    sub_18001DD3C
 * 00000001800D4655: nop
 * 00000001800D4656: lea     r8, aVertex; "/Vertex"
 * 00000001800D465D: mov     rdx, rax
 * 00000001800D4660: lea     rcx, [rbp+9F60h+var_8470]
 * 00000001800D4667: call    sub_18001DC84
 * 00000001800D466C: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D4671: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D4676: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D467B: mov     rcx, rax
 * 00000001800D467E: call    sub_180088528
 * 00000001800D4683: nop
 * 00000001800D4684: lea     rcx, [rbp+9F60h+var_3570]
 * 00000001800D468B: call    sub_180011570
 * 00000001800D4690: nop
 * 00000001800D4691: lea     rcx, [rbp+9F60h+var_3550]
 * 00000001800D4698: call    sub_180011570
 * 00000001800D469D: nop
 * 00000001800D469E: lea     rcx, dword_1801FB55C
 * 00000001800D46A5: call    sub_18000C548
 * 00000001800D46AA: mov     rax, [rsi+rdi*8]
 * 00000001800D46AE: mov     ecx, [r15+rax]
 * 00000001800D46B2: cmp     cs:dword_1801FB560, ecx
 * 00000001800D46B8: jle     loc_1800D47B1
 * 00000001800D46BE: lea     rcx, dword_1801FB560
 * 00000001800D46C5: call    sub_18000C5B0
 * 00000001800D46CA: cmp     cs:dword_1801FB560, r14d
 * 00000001800D46D1: jnz     loc_1800D47B1
 * 00000001800D46D7: xor     edx, edx
 * 00000001800D46D9: lea     rcx, [rbp+9F60h+var_9F26]
 * 00000001800D46DD: call    sub_1800A8E58
 * 00000001800D46E2: mov     bl, [rax]
 * 00000001800D46E4: call    sub_1800C507C
 * 00000001800D46E9: mov     rdx, rax
 * 00000001800D46EC: mov     r8d, 1050h
 * 00000001800D46F2: lea     rcx, [rbp+9F60h+var_9040]
 * 00000001800D46F9: call    sub_1800A8E40
 * 00000001800D46FE: movups  xmm0, xmmword ptr [rax]
 * 00000001800D4701: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D4707: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D470B: mov     r9d, r12d
 * 00000001800D470E: mov     r8d, r12d
 * 00000001800D4711: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D4716: lea     rcx, [rbp+9F60h+var_4CB0]
 * 00000001800D471D: call    sub_1800A8E0C
 * 00000001800D4722: movups  xmm6, xmmword ptr [rax]
 * 00000001800D4725: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D4729: call    sub_1800C50FC
 * 00000001800D472E: mov     r8, rax
 * 00000001800D4731: mov     r9d, r13d
 * 00000001800D4734: mov     edx, 142h
 * 00000001800D4739: lea     rcx, [rbp+9F60h+var_34F0]; Src
 * 00000001800D4740: call    sub_180088448
 * 00000001800D4745: nop
 * 00000001800D4746: mov     r8, rax
 * 00000001800D4749: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D4750: lea     rcx, [rbp+9F60h+var_3510]
 * 00000001800D4757: call    sub_18001DD3C
 * 00000001800D475C: nop
 * 00000001800D475D: lea     r8, aVertex; "/Vertex"
 * 00000001800D4764: mov     rdx, rax
 * 00000001800D4767: lea     rcx, [rbp+9F60h+var_84D0]
 * 00000001800D476E: call    sub_18001DC84
 * 00000001800D4773: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D4778: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D477D: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D4782: mov     rcx, rax
 * 00000001800D4785: call    sub_180088528
 * 00000001800D478A: nop
 * 00000001800D478B: lea     rcx, [rbp+9F60h+var_3510]
 * 00000001800D4792: call    sub_180011570
 * 00000001800D4797: nop
 * 00000001800D4798: lea     rcx, [rbp+9F60h+var_34F0]
 * 00000001800D479F: call    sub_180011570
 * 00000001800D47A4: nop
 * 00000001800D47A5: lea     rcx, dword_1801FB560
 * 00000001800D47AC: call    sub_18000C548
 * 00000001800D47B1: mov     rax, [rsi+rdi*8]
 * 00000001800D47B5: mov     ecx, [r15+rax]
 * 00000001800D47B9: cmp     cs:dword_1801FB564, ecx
 * 00000001800D47BF: jle     loc_1800D48B8
 * 00000001800D47C5: lea     rcx, dword_1801FB564
 * 00000001800D47CC: call    sub_18000C5B0
 * 00000001800D47D1: cmp     cs:dword_1801FB564, r14d
 * 00000001800D47D8: jnz     loc_1800D48B8
 * 00000001800D47DE: xor     edx, edx
 * 00000001800D47E0: lea     rcx, [rbp+9F60h+var_9F25]
 * 00000001800D47E4: call    sub_1800A8E58
 * 00000001800D47E9: mov     bl, [rax]
 * 00000001800D47EB: call    sub_1800C507C
 * 00000001800D47F0: mov     rdx, rax
 * 00000001800D47F3: mov     r8d, 1050h
 * 00000001800D47F9: lea     rcx, [rbp+9F60h+var_9030]
 * 00000001800D4800: call    sub_1800A8E40
 * 00000001800D4805: movups  xmm0, xmmword ptr [rax]
 * 00000001800D4808: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D480E: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D4812: mov     r9d, r12d
 * 00000001800D4815: mov     r8d, r12d
 * 00000001800D4818: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D481D: lea     rcx, [rbp+9F60h+var_4C90]
 * 00000001800D4824: call    sub_1800A8E0C
 * 00000001800D4829: movups  xmm6, xmmword ptr [rax]
 * 00000001800D482C: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D4830: call    sub_1800C50FC
 * 00000001800D4835: mov     r8, rax
 * 00000001800D4838: mov     r9d, r13d
 * 00000001800D483B: mov     edx, 148h
 * 00000001800D4840: lea     rcx, [rbp+9F60h+var_3490]; Src
 * 00000001800D4847: call    sub_180088448
 * 00000001800D484C: nop
 * 00000001800D484D: mov     r8, rax
 * 00000001800D4850: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D4857: lea     rcx, [rbp+9F60h+var_34B0]
 * 00000001800D485E: call    sub_18001DD3C
 * 00000001800D4863: nop
 * 00000001800D4864: lea     r8, aVertex; "/Vertex"
 * 00000001800D486B: mov     rdx, rax
 * 00000001800D486E: lea     rcx, [rbp+9F60h+var_84F0]
 * 00000001800D4875: call    sub_18001DC84
 * 00000001800D487A: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D487F: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D4884: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D4889: mov     rcx, rax
 * 00000001800D488C: call    sub_180088528
 * 00000001800D4891: nop
 * 00000001800D4892: lea     rcx, [rbp+9F60h+var_34B0]
 * 00000001800D4899: call    sub_180011570
 * 00000001800D489E: nop
 * 00000001800D489F: lea     rcx, [rbp+9F60h+var_3490]
 * 00000001800D48A6: call    sub_180011570
 * 00000001800D48AB: nop
 * 00000001800D48AC: lea     rcx, dword_1801FB564
 * 00000001800D48B3: call    sub_18000C548
 * 00000001800D48B8: mov     rax, [rsi+rdi*8]
 * 00000001800D48BC: mov     ecx, [r15+rax]
 * 00000001800D48C0: cmp     cs:dword_1801FB568, ecx
 * 00000001800D48C6: jle     loc_1800D49BF
 * 00000001800D48CC: lea     rcx, dword_1801FB568
 * 00000001800D48D3: call    sub_18000C5B0
 * 00000001800D48D8: cmp     cs:dword_1801FB568, r14d
 * 00000001800D48DF: jnz     loc_1800D49BF
 * 00000001800D48E5: xor     edx, edx
 * 00000001800D48E7: lea     rcx, [rbp+9F60h+var_9F24]
 * 00000001800D48EB: call    sub_1800A8E58
 * 00000001800D48F0: mov     bl, [rax]
 * 00000001800D48F2: call    sub_1800C507C
 * 00000001800D48F7: mov     rdx, rax
 * 00000001800D48FA: mov     r8d, 1050h
 * 00000001800D4900: lea     rcx, [rbp+9F60h+var_9020]
 * 00000001800D4907: call    sub_1800A8E40
 * 00000001800D490C: movups  xmm0, xmmword ptr [rax]
 * 00000001800D490F: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D4915: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D4919: mov     r9d, r12d
 * 00000001800D491C: mov     r8d, r12d
 * 00000001800D491F: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D4924: lea     rcx, [rbp+9F60h+var_4C70]
 * 00000001800D492B: call    sub_1800A8E0C
 * 00000001800D4930: movups  xmm6, xmmword ptr [rax]
 * 00000001800D4933: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D4937: call    sub_1800C50FC
 * 00000001800D493C: mov     r8, rax
 * 00000001800D493F: mov     r9d, r13d
 * 00000001800D4942: mov     edx, 14Ah
 * 00000001800D4947: lea     rcx, [rbp+9F60h+var_3430]; Src
 * 00000001800D494E: call    sub_180088448
 * 00000001800D4953: nop
 * 00000001800D4954: mov     r8, rax
 * 00000001800D4957: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D495E: lea     rcx, [rbp+9F60h+var_3450]
 * 00000001800D4965: call    sub_18001DD3C
 * 00000001800D496A: nop
 * 00000001800D496B: lea     r8, aVertex; "/Vertex"
 * 00000001800D4972: mov     rdx, rax
 * 00000001800D4975: lea     rcx, [rbp+9F60h+var_8530]
 * 00000001800D497C: call    sub_18001DC84
 * 00000001800D4981: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D4986: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D498B: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D4990: mov     rcx, rax
 * 00000001800D4993: call    sub_180088528
 * 00000001800D4998: nop
 * 00000001800D4999: lea     rcx, [rbp+9F60h+var_3450]
 * 00000001800D49A0: call    sub_180011570
 * 00000001800D49A5: nop
 * 00000001800D49A6: lea     rcx, [rbp+9F60h+var_3430]
 * 00000001800D49AD: call    sub_180011570
 * 00000001800D49B2: nop
 * 00000001800D49B3: lea     rcx, dword_1801FB568
 * 00000001800D49BA: call    sub_18000C548
 * 00000001800D49BF: mov     rax, [rsi+rdi*8]
 * 00000001800D49C3: mov     ecx, [r15+rax]
 * 00000001800D49C7: cmp     cs:dword_1801FB56C, ecx
 * 00000001800D49CD: jle     loc_1800D4AC6
 * 00000001800D49D3: lea     rcx, dword_1801FB56C
 * 00000001800D49DA: call    sub_18000C5B0
 * 00000001800D49DF: cmp     cs:dword_1801FB56C, r14d
 * 00000001800D49E6: jnz     loc_1800D4AC6
 * 00000001800D49EC: xor     edx, edx
 * 00000001800D49EE: lea     rcx, [rbp+9F60h+var_9F23]
 * 00000001800D49F2: call    sub_1800A8E58
 * 00000001800D49F7: mov     bl, [rax]
 * 00000001800D49F9: call    sub_1800C507C
 * 00000001800D49FE: mov     rdx, rax
 * 00000001800D4A01: mov     r8d, 1050h
 * 00000001800D4A07: lea     rcx, [rbp+9F60h+var_9010]
 * 00000001800D4A0E: call    sub_1800A8E40
 * 00000001800D4A13: movups  xmm0, xmmword ptr [rax]
 * 00000001800D4A16: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D4A1C: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D4A20: mov     r9d, r12d
 * 00000001800D4A23: mov     r8d, r12d
 * 00000001800D4A26: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D4A2B: lea     rcx, [rbp+9F60h+var_4C50]
 * 00000001800D4A32: call    sub_1800A8E0C
 * 00000001800D4A37: movups  xmm6, xmmword ptr [rax]
 * 00000001800D4A3A: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D4A3E: call    sub_1800C50FC
 * 00000001800D4A43: mov     r8, rax
 * 00000001800D4A46: mov     r9d, r13d
 * 00000001800D4A49: mov     edx, 150h
 * 00000001800D4A4E: lea     rcx, [rbp+9F60h+var_33D0]; Src
 * 00000001800D4A55: call    sub_180088448
 * 00000001800D4A5A: nop
 * 00000001800D4A5B: mov     r8, rax
 * 00000001800D4A5E: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D4A65: lea     rcx, [rbp+9F60h+var_33F0]
 * 00000001800D4A6C: call    sub_18001DD3C
 * 00000001800D4A71: nop
 * 00000001800D4A72: lea     r8, aVertex; "/Vertex"
 * 00000001800D4A79: mov     rdx, rax
 * 00000001800D4A7C: lea     rcx, [rbp+9F60h+var_8550]
 * 00000001800D4A83: call    sub_18001DC84
 * 00000001800D4A88: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D4A8D: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D4A92: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D4A97: mov     rcx, rax
 * 00000001800D4A9A: call    sub_180088528
 * 00000001800D4A9F: nop
 * 00000001800D4AA0: lea     rcx, [rbp+9F60h+var_33F0]
 * 00000001800D4AA7: call    sub_180011570
 * 00000001800D4AAC: nop
 * 00000001800D4AAD: lea     rcx, [rbp+9F60h+var_33D0]
 * 00000001800D4AB4: call    sub_180011570
 * 00000001800D4AB9: nop
 * 00000001800D4ABA: lea     rcx, dword_1801FB56C
 * 00000001800D4AC1: call    sub_18000C548
 * 00000001800D4AC6: mov     rax, [rsi+rdi*8]
 * 00000001800D4ACA: mov     ecx, [r15+rax]
 * 00000001800D4ACE: cmp     cs:dword_1801FB570, ecx
 * 00000001800D4AD4: jle     loc_1800D4BCD
 * 00000001800D4ADA: lea     rcx, dword_1801FB570
 * 00000001800D4AE1: call    sub_18000C5B0
 * 00000001800D4AE6: cmp     cs:dword_1801FB570, r14d
 * 00000001800D4AED: jnz     loc_1800D4BCD
 * 00000001800D4AF3: xor     edx, edx
 * 00000001800D4AF5: lea     rcx, [rbp+9F60h+var_9F22]
 * 00000001800D4AF9: call    sub_1800A8E58
 * 00000001800D4AFE: mov     bl, [rax]
 * 00000001800D4B00: call    sub_1800C507C
 * 00000001800D4B05: mov     rdx, rax
 * 00000001800D4B08: mov     r8d, 1050h
 * 00000001800D4B0E: lea     rcx, [rbp+9F60h+var_9000]
 * 00000001800D4B15: call    sub_1800A8E40
 * 00000001800D4B1A: movups  xmm0, xmmword ptr [rax]
 * 00000001800D4B1D: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D4B23: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D4B27: mov     r9d, r12d
 * 00000001800D4B2A: mov     r8d, r12d
 * 00000001800D4B2D: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D4B32: lea     rcx, [rbp+9F60h+var_4C30]
 * 00000001800D4B39: call    sub_1800A8E0C
 * 00000001800D4B3E: movups  xmm6, xmmword ptr [rax]
 * 00000001800D4B41: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D4B45: call    sub_1800C50FC
 * 00000001800D4B4A: mov     r8, rax
 * 00000001800D4B4D: mov     r9d, r13d
 * 00000001800D4B50: mov     edx, 152h
 * 00000001800D4B55: lea     rcx, [rbp+9F60h+var_3370]; Src
 * 00000001800D4B5C: call    sub_180088448
 * 00000001800D4B61: nop
 * 00000001800D4B62: mov     r8, rax
 * 00000001800D4B65: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D4B6C: lea     rcx, [rbp+9F60h+var_3390]
 * 00000001800D4B73: call    sub_18001DD3C
 * 00000001800D4B78: nop
 * 00000001800D4B79: lea     r8, aVertex; "/Vertex"
 * 00000001800D4B80: mov     rdx, rax
 * 00000001800D4B83: lea     rcx, [rbp+9F60h+var_8590]
 * 00000001800D4B8A: call    sub_18001DC84
 * 00000001800D4B8F: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D4B94: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D4B99: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D4B9E: mov     rcx, rax
 * 00000001800D4BA1: call    sub_180088528
 * 00000001800D4BA6: nop
 * 00000001800D4BA7: lea     rcx, [rbp+9F60h+var_3390]
 * 00000001800D4BAE: call    sub_180011570
 * 00000001800D4BB3: nop
 * 00000001800D4BB4: lea     rcx, [rbp+9F60h+var_3370]
 * 00000001800D4BBB: call    sub_180011570
 * 00000001800D4BC0: nop
 * 00000001800D4BC1: lea     rcx, dword_1801FB570
 * 00000001800D4BC8: call    sub_18000C548
 * 00000001800D4BCD: mov     rax, [rsi+rdi*8]
 * 00000001800D4BD1: mov     ecx, [r15+rax]
 * 00000001800D4BD5: cmp     cs:dword_1801FB574, ecx
 * 00000001800D4BDB: jle     loc_1800D4CD4
 * 00000001800D4BE1: lea     rcx, dword_1801FB574
 * 00000001800D4BE8: call    sub_18000C5B0
 * 00000001800D4BED: cmp     cs:dword_1801FB574, r14d
 * 00000001800D4BF4: jnz     loc_1800D4CD4
 * 00000001800D4BFA: xor     edx, edx
 * 00000001800D4BFC: lea     rcx, [rbp+9F60h+var_9F21]
 * 00000001800D4C00: call    sub_1800A8E58
 * 00000001800D4C05: mov     bl, [rax]
 * 00000001800D4C07: call    sub_1800C507C
 * 00000001800D4C0C: mov     rdx, rax
 * 00000001800D4C0F: mov     r8d, 1050h
 * 00000001800D4C15: lea     rcx, [rbp+9F60h+var_8FF0]
 * 00000001800D4C1C: call    sub_1800A8E40
 * 00000001800D4C21: movups  xmm0, xmmword ptr [rax]
 * 00000001800D4C24: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D4C2A: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D4C2E: mov     r9d, r12d
 * 00000001800D4C31: mov     r8d, r12d
 * 00000001800D4C34: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D4C39: lea     rcx, [rbp+9F60h+var_4C10]
 * 00000001800D4C40: call    sub_1800A8E0C
 * 00000001800D4C45: movups  xmm6, xmmword ptr [rax]
 * 00000001800D4C48: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D4C4C: call    sub_1800C50FC
 * 00000001800D4C51: mov     r8, rax
 * 00000001800D4C54: mov     r9d, r13d
 * 00000001800D4C57: mov     edx, 158h
 * 00000001800D4C5C: lea     rcx, [rbp+9F60h+var_3310]; Src
 * 00000001800D4C63: call    sub_180088448
 * 00000001800D4C68: nop
 * 00000001800D4C69: mov     r8, rax
 * 00000001800D4C6C: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D4C73: lea     rcx, [rbp+9F60h+var_3330]
 * 00000001800D4C7A: call    sub_18001DD3C
 * 00000001800D4C7F: nop
 * 00000001800D4C80: lea     r8, aVertex; "/Vertex"
 * 00000001800D4C87: mov     rdx, rax
 * 00000001800D4C8A: lea     rcx, [rbp+9F60h+var_85B0]
 * 00000001800D4C91: call    sub_18001DC84
 * 00000001800D4C96: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D4C9B: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D4CA0: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D4CA5: mov     rcx, rax
 * 00000001800D4CA8: call    sub_180088528
 * 00000001800D4CAD: nop
 * 00000001800D4CAE: lea     rcx, [rbp+9F60h+var_3330]
 * 00000001800D4CB5: call    sub_180011570
 * 00000001800D4CBA: nop
 * 00000001800D4CBB: lea     rcx, [rbp+9F60h+var_3310]
 * 00000001800D4CC2: call    sub_180011570
 * 00000001800D4CC7: nop
 * 00000001800D4CC8: lea     rcx, dword_1801FB574
 * 00000001800D4CCF: call    sub_18000C548
 * 00000001800D4CD4: mov     rax, [rsi+rdi*8]
 * 00000001800D4CD8: mov     ecx, [r15+rax]
 * 00000001800D4CDC: cmp     cs:dword_1801FB578, ecx
 * 00000001800D4CE2: jle     loc_1800D4DDB
 * 00000001800D4CE8: lea     rcx, dword_1801FB578
 * 00000001800D4CEF: call    sub_18000C5B0
 * 00000001800D4CF4: cmp     cs:dword_1801FB578, r14d
 * 00000001800D4CFB: jnz     loc_1800D4DDB
 * 00000001800D4D01: xor     edx, edx
 * 00000001800D4D03: lea     rcx, [rbp+9F60h+var_9F20]
 * 00000001800D4D07: call    sub_1800A8E58
 * 00000001800D4D0C: mov     bl, [rax]
 * 00000001800D4D0E: call    sub_1800C507C
 * 00000001800D4D13: mov     rdx, rax
 * 00000001800D4D16: mov     r8d, 1050h
 * 00000001800D4D1C: lea     rcx, [rbp+9F60h+var_8FE0]
 * 00000001800D4D23: call    sub_1800A8E40
 * 00000001800D4D28: movups  xmm0, xmmword ptr [rax]
 * 00000001800D4D2B: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D4D31: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D4D35: mov     r9d, r12d
 * 00000001800D4D38: mov     r8d, r12d
 * 00000001800D4D3B: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D4D40: lea     rcx, [rbp+9F60h+var_4BF0]
 * 00000001800D4D47: call    sub_1800A8E0C
 * 00000001800D4D4C: movups  xmm6, xmmword ptr [rax]
 * 00000001800D4D4F: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D4D53: call    sub_1800C50FC
 * 00000001800D4D58: mov     r8, rax
 * 00000001800D4D5B: mov     r9d, r13d
 * 00000001800D4D5E: mov     edx, 15Ah
 * 00000001800D4D63: lea     rcx, [rbp+9F60h+var_32B0]; Src
 * 00000001800D4D6A: call    sub_180088448
 * 00000001800D4D6F: nop
 * 00000001800D4D70: mov     r8, rax
 * 00000001800D4D73: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D4D7A: lea     rcx, [rbp+9F60h+var_32D0]
 * 00000001800D4D81: call    sub_18001DD3C
 * 00000001800D4D86: nop
 * 00000001800D4D87: lea     r8, aVertex; "/Vertex"
 * 00000001800D4D8E: mov     rdx, rax
 * 00000001800D4D91: lea     rcx, [rbp+9F60h+var_85F0]
 * 00000001800D4D98: call    sub_18001DC84
 * 00000001800D4D9D: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D4DA2: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D4DA7: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D4DAC: mov     rcx, rax
 * 00000001800D4DAF: call    sub_180088528
 * 00000001800D4DB4: nop
 * 00000001800D4DB5: lea     rcx, [rbp+9F60h+var_32D0]
 * 00000001800D4DBC: call    sub_180011570
 * 00000001800D4DC1: nop
 * 00000001800D4DC2: lea     rcx, [rbp+9F60h+var_32B0]
 * 00000001800D4DC9: call    sub_180011570
 * 00000001800D4DCE: nop
 * 00000001800D4DCF: lea     rcx, dword_1801FB578
 * 00000001800D4DD6: call    sub_18000C548
 * 00000001800D4DDB: mov     rax, [rsi+rdi*8]
 * 00000001800D4DDF: mov     ecx, [r15+rax]
 * 00000001800D4DE3: cmp     cs:dword_1801FB57C, ecx
 * 00000001800D4DE9: jle     loc_1800D4EE2
 * 00000001800D4DEF: lea     rcx, dword_1801FB57C
 * 00000001800D4DF6: call    sub_18000C5B0
 * 00000001800D4DFB: cmp     cs:dword_1801FB57C, r14d
 * 00000001800D4E02: jnz     loc_1800D4EE2
 * 00000001800D4E08: xor     edx, edx
 * 00000001800D4E0A: lea     rcx, [rbp+9F60h+var_9F1F]
 * 00000001800D4E0E: call    sub_1800A8E58
 * 00000001800D4E13: mov     bl, [rax]
 * 00000001800D4E15: call    sub_1800C508C
 * 00000001800D4E1A: mov     rdx, rax
 * 00000001800D4E1D: mov     r8d, 1A50h
 * 00000001800D4E23: lea     rcx, [rbp+9F60h+var_8FD0]
 * 00000001800D4E2A: call    sub_1800A8E40
 * 00000001800D4E2F: movups  xmm0, xmmword ptr [rax]
 * 00000001800D4E32: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D4E38: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D4E3C: mov     r9d, r12d
 * 00000001800D4E3F: mov     r8d, r12d
 * 00000001800D4E42: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D4E47: lea     rcx, [rbp+9F60h+var_4BD0]
 * 00000001800D4E4E: call    sub_1800A8E0C
 * 00000001800D4E53: movups  xmm6, xmmword ptr [rax]
 * 00000001800D4E56: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D4E5A: call    sub_1800C50FC
 * 00000001800D4E5F: mov     r8, rax
 * 00000001800D4E62: mov     r9d, r13d
 * 00000001800D4E65: mov     edx, 160h
 * 00000001800D4E6A: lea     rcx, [rbp+9F60h+var_3250]; Src
 * 00000001800D4E71: call    sub_180088448
 * 00000001800D4E76: nop
 * 00000001800D4E77: mov     r8, rax
 * 00000001800D4E7A: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D4E81: lea     rcx, [rbp+9F60h+var_3270]
 * 00000001800D4E88: call    sub_18001DD3C
 * 00000001800D4E8D: nop
 * 00000001800D4E8E: lea     r8, aVertex; "/Vertex"
 * 00000001800D4E95: mov     rdx, rax
 * 00000001800D4E98: lea     rcx, [rbp+9F60h+var_8610]
 * 00000001800D4E9F: call    sub_18001DC84
 * 00000001800D4EA4: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D4EA9: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D4EAE: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D4EB3: mov     rcx, rax
 * 00000001800D4EB6: call    sub_180088528
 * 00000001800D4EBB: nop
 * 00000001800D4EBC: lea     rcx, [rbp+9F60h+var_3270]
 * 00000001800D4EC3: call    sub_180011570
 * 00000001800D4EC8: nop
 * 00000001800D4EC9: lea     rcx, [rbp+9F60h+var_3250]
 * 00000001800D4ED0: call    sub_180011570
 * 00000001800D4ED5: nop
 * 00000001800D4ED6: lea     rcx, dword_1801FB57C
 * 00000001800D4EDD: call    sub_18000C548
 * 00000001800D4EE2: mov     rax, [rsi+rdi*8]
 * 00000001800D4EE6: mov     ecx, [r15+rax]
 * 00000001800D4EEA: cmp     cs:dword_1801FB580, ecx
 * 00000001800D4EF0: jle     loc_1800D4FE9
 * 00000001800D4EF6: lea     rcx, dword_1801FB580
 * 00000001800D4EFD: call    sub_18000C5B0
 * 00000001800D4F02: cmp     cs:dword_1801FB580, r14d
 * 00000001800D4F09: jnz     loc_1800D4FE9
 * 00000001800D4F0F: xor     edx, edx
 * 00000001800D4F11: lea     rcx, [rbp+9F60h+var_9F1E]
 * 00000001800D4F15: call    sub_1800A8E58
 * 00000001800D4F1A: mov     bl, [rax]
 * 00000001800D4F1C: call    sub_1800C508C
 * 00000001800D4F21: mov     rdx, rax
 * 00000001800D4F24: mov     r8d, 1A50h
 * 00000001800D4F2A: lea     rcx, [rbp+9F60h+var_8FC0]
 * 00000001800D4F31: call    sub_1800A8E40
 * 00000001800D4F36: movups  xmm0, xmmword ptr [rax]
 * 00000001800D4F39: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D4F3F: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D4F43: mov     r9d, r12d
 * 00000001800D4F46: mov     r8d, r12d
 * 00000001800D4F49: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D4F4E: lea     rcx, [rbp+9F60h+var_4BB0]
 * 00000001800D4F55: call    sub_1800A8E0C
 * 00000001800D4F5A: movups  xmm6, xmmword ptr [rax]
 * 00000001800D4F5D: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D4F61: call    sub_1800C50FC
 * 00000001800D4F66: mov     r8, rax
 * 00000001800D4F69: mov     r9d, r13d
 * 00000001800D4F6C: mov     edx, 162h
 * 00000001800D4F71: lea     rcx, [rbp+9F60h+var_31F0]; Src
 * 00000001800D4F78: call    sub_180088448
 * 00000001800D4F7D: nop
 * 00000001800D4F7E: mov     r8, rax
 * 00000001800D4F81: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D4F88: lea     rcx, [rbp+9F60h+var_3210]
 * 00000001800D4F8F: call    sub_18001DD3C
 * 00000001800D4F94: nop
 * 00000001800D4F95: lea     r8, aVertex; "/Vertex"
 * 00000001800D4F9C: mov     rdx, rax
 * 00000001800D4F9F: lea     rcx, [rbp+9F60h+var_8650]
 * 00000001800D4FA6: call    sub_18001DC84
 * 00000001800D4FAB: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D4FB0: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D4FB5: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D4FBA: mov     rcx, rax
 * 00000001800D4FBD: call    sub_180088528
 * 00000001800D4FC2: nop
 * 00000001800D4FC3: lea     rcx, [rbp+9F60h+var_3210]
 * 00000001800D4FCA: call    sub_180011570
 * 00000001800D4FCF: nop
 * 00000001800D4FD0: lea     rcx, [rbp+9F60h+var_31F0]
 * 00000001800D4FD7: call    sub_180011570
 * 00000001800D4FDC: nop
 * 00000001800D4FDD: lea     rcx, dword_1801FB580
 * 00000001800D4FE4: call    sub_18000C548
 * 00000001800D4FE9: mov     rax, [rsi+rdi*8]
 * 00000001800D4FED: mov     ecx, [r15+rax]
 * 00000001800D4FF1: cmp     cs:dword_1801FB584, ecx
 * 00000001800D4FF7: jle     loc_1800D50F0
 * 00000001800D4FFD: lea     rcx, dword_1801FB584
 * 00000001800D5004: call    sub_18000C5B0
 * 00000001800D5009: cmp     cs:dword_1801FB584, r14d
 * 00000001800D5010: jnz     loc_1800D50F0
 * 00000001800D5016: xor     edx, edx
 * 00000001800D5018: lea     rcx, [rbp+9F60h+var_9F1D]
 * 00000001800D501C: call    sub_1800A8E58
 * 00000001800D5021: mov     bl, [rax]
 * 00000001800D5023: call    sub_1800C508C
 * 00000001800D5028: mov     rdx, rax
 * 00000001800D502B: mov     r8d, 1A50h
 * 00000001800D5031: lea     rcx, [rbp+9F60h+var_8FB0]
 * 00000001800D5038: call    sub_1800A8E40
 * 00000001800D503D: movups  xmm0, xmmword ptr [rax]
 * 00000001800D5040: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D5046: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D504A: mov     r9d, r12d
 * 00000001800D504D: mov     r8d, r12d
 * 00000001800D5050: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D5055: lea     rcx, [rbp+9F60h+var_4B90]
 * 00000001800D505C: call    sub_1800A8E0C
 * 00000001800D5061: movups  xmm6, xmmword ptr [rax]
 * 00000001800D5064: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D5068: call    sub_1800C50FC
 * 00000001800D506D: mov     r8, rax
 * 00000001800D5070: mov     r9d, r13d
 * 00000001800D5073: mov     edx, 168h
 * 00000001800D5078: lea     rcx, [rbp+9F60h+var_3190]; Src
 * 00000001800D507F: call    sub_180088448
 * 00000001800D5084: nop
 * 00000001800D5085: mov     r8, rax
 * 00000001800D5088: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D508F: lea     rcx, [rbp+9F60h+var_31B0]
 * 00000001800D5096: call    sub_18001DD3C
 * 00000001800D509B: nop
 * 00000001800D509C: lea     r8, aVertex; "/Vertex"
 * 00000001800D50A3: mov     rdx, rax
 * 00000001800D50A6: lea     rcx, [rbp+9F60h+var_8670]
 * 00000001800D50AD: call    sub_18001DC84
 * 00000001800D50B2: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D50B7: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D50BC: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D50C1: mov     rcx, rax
 * 00000001800D50C4: call    sub_180088528
 * 00000001800D50C9: nop
 * 00000001800D50CA: lea     rcx, [rbp+9F60h+var_31B0]
 * 00000001800D50D1: call    sub_180011570
 * 00000001800D50D6: nop
 * 00000001800D50D7: lea     rcx, [rbp+9F60h+var_3190]
 * 00000001800D50DE: call    sub_180011570
 * 00000001800D50E3: nop
 * 00000001800D50E4: lea     rcx, dword_1801FB584
 * 00000001800D50EB: call    sub_18000C548
 * 00000001800D50F0: mov     rax, [rsi+rdi*8]
 * 00000001800D50F4: mov     ecx, [r15+rax]
 * 00000001800D50F8: cmp     cs:dword_1801FB588, ecx
 * 00000001800D50FE: jle     loc_1800D51F7
 * 00000001800D5104: lea     rcx, dword_1801FB588
 * 00000001800D510B: call    sub_18000C5B0
 * 00000001800D5110: cmp     cs:dword_1801FB588, r14d
 * 00000001800D5117: jnz     loc_1800D51F7
 * 00000001800D511D: xor     edx, edx
 * 00000001800D511F: lea     rcx, [rbp+9F60h+var_9F1C]
 * 00000001800D5123: call    sub_1800A8E58
 * 00000001800D5128: mov     bl, [rax]
 * 00000001800D512A: call    sub_1800C508C
 * 00000001800D512F: mov     rdx, rax
 * 00000001800D5132: mov     r8d, 1A50h
 * 00000001800D5138: lea     rcx, [rbp+9F60h+var_8FA0]
 * 00000001800D513F: call    sub_1800A8E40
 * 00000001800D5144: movups  xmm0, xmmword ptr [rax]
 * 00000001800D5147: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D514D: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D5151: mov     r9d, r12d
 * 00000001800D5154: mov     r8d, r12d
 * 00000001800D5157: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D515C: lea     rcx, [rbp+9F60h+var_4B70]
 * 00000001800D5163: call    sub_1800A8E0C
 * 00000001800D5168: movups  xmm6, xmmword ptr [rax]
 * 00000001800D516B: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D516F: call    sub_1800C50FC
 * 00000001800D5174: mov     r8, rax
 * 00000001800D5177: mov     r9d, r13d
 * 00000001800D517A: mov     edx, 16Ah
 * 00000001800D517F: lea     rcx, [rbp+9F60h+var_3130]; Src
 * 00000001800D5186: call    sub_180088448
 * 00000001800D518B: nop
 * 00000001800D518C: mov     r8, rax
 * 00000001800D518F: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D5196: lea     rcx, [rbp+9F60h+var_3150]
 * 00000001800D519D: call    sub_18001DD3C
 * 00000001800D51A2: nop
 * 00000001800D51A3: lea     r8, aVertex; "/Vertex"
 * 00000001800D51AA: mov     rdx, rax
 * 00000001800D51AD: lea     rcx, [rbp+9F60h+var_86B0]
 * 00000001800D51B4: call    sub_18001DC84
 * 00000001800D51B9: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D51BE: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D51C3: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D51C8: mov     rcx, rax
 * 00000001800D51CB: call    sub_180088528
 * 00000001800D51D0: nop
 * 00000001800D51D1: lea     rcx, [rbp+9F60h+var_3150]
 * 00000001800D51D8: call    sub_180011570
 * 00000001800D51DD: nop
 * 00000001800D51DE: lea     rcx, [rbp+9F60h+var_3130]
 * 00000001800D51E5: call    sub_180011570
 * 00000001800D51EA: nop
 * 00000001800D51EB: lea     rcx, dword_1801FB588
 * 00000001800D51F2: call    sub_18000C548
 * 00000001800D51F7: mov     rax, [rsi+rdi*8]
 * 00000001800D51FB: mov     ecx, [r15+rax]
 * 00000001800D51FF: cmp     cs:dword_1801FB58C, ecx
 * 00000001800D5205: jle     loc_1800D52FE
 * 00000001800D520B: lea     rcx, dword_1801FB58C
 * 00000001800D5212: call    sub_18000C5B0
 * 00000001800D5217: cmp     cs:dword_1801FB58C, r14d
 * 00000001800D521E: jnz     loc_1800D52FE
 * 00000001800D5224: xor     edx, edx
 * 00000001800D5226: lea     rcx, [rbp+9F60h+var_9F1B]
 * 00000001800D522A: call    sub_1800A8E58
 * 00000001800D522F: mov     bl, [rax]
 * 00000001800D5231: call    sub_1800C508C
 * 00000001800D5236: mov     rdx, rax
 * 00000001800D5239: mov     r8d, 1A50h
 * 00000001800D523F: lea     rcx, [rbp+9F60h+var_8F90]
 * 00000001800D5246: call    sub_1800A8E40
 * 00000001800D524B: movups  xmm0, xmmword ptr [rax]
 * 00000001800D524E: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D5254: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D5258: mov     r9d, r12d
 * 00000001800D525B: mov     r8d, r12d
 * 00000001800D525E: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D5263: lea     rcx, [rbp+9F60h+var_4B50]
 * 00000001800D526A: call    sub_1800A8E0C
 * 00000001800D526F: movups  xmm6, xmmword ptr [rax]
 * 00000001800D5272: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D5276: call    sub_1800C50FC
 * 00000001800D527B: mov     r8, rax
 * 00000001800D527E: mov     r9d, r13d
 * 00000001800D5281: mov     edx, 170h
 * 00000001800D5286: lea     rcx, [rbp+9F60h+var_30D0]; Src
 * 00000001800D528D: call    sub_180088448
 * 00000001800D5292: nop
 * 00000001800D5293: mov     r8, rax
 * 00000001800D5296: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D529D: lea     rcx, [rbp+9F60h+var_30F0]
 * 00000001800D52A4: call    sub_18001DD3C
 * 00000001800D52A9: nop
 * 00000001800D52AA: lea     r8, aVertex; "/Vertex"
 * 00000001800D52B1: mov     rdx, rax
 * 00000001800D52B4: lea     rcx, [rbp+9F60h+var_86D0]
 * 00000001800D52BB: call    sub_18001DC84
 * 00000001800D52C0: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D52C5: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D52CA: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D52CF: mov     rcx, rax
 * 00000001800D52D2: call    sub_180088528
 * 00000001800D52D7: nop
 * 00000001800D52D8: lea     rcx, [rbp+9F60h+var_30F0]
 * 00000001800D52DF: call    sub_180011570
 * 00000001800D52E4: nop
 * 00000001800D52E5: lea     rcx, [rbp+9F60h+var_30D0]
 * 00000001800D52EC: call    sub_180011570
 * 00000001800D52F1: nop
 * 00000001800D52F2: lea     rcx, dword_1801FB58C
 * 00000001800D52F9: call    sub_18000C548
 * 00000001800D52FE: mov     rax, [rsi+rdi*8]
 * 00000001800D5302: mov     ecx, [r15+rax]
 * 00000001800D5306: cmp     cs:dword_1801FB590, ecx
 * 00000001800D530C: jle     loc_1800D5405
 * 00000001800D5312: lea     rcx, dword_1801FB590
 * 00000001800D5319: call    sub_18000C5B0
 * 00000001800D531E: cmp     cs:dword_1801FB590, r14d
 * 00000001800D5325: jnz     loc_1800D5405
 * 00000001800D532B: xor     edx, edx
 * 00000001800D532D: lea     rcx, [rbp+9F60h+var_9EF7]
 * 00000001800D5331: call    sub_1800A8E58
 * 00000001800D5336: mov     bl, [rax]
 * 00000001800D5338: call    sub_1800C508C
 * 00000001800D533D: mov     rdx, rax
 * 00000001800D5340: mov     r8d, 1A50h
 * 00000001800D5346: lea     rcx, [rbp+9F60h+var_8F80]
 * 00000001800D534D: call    sub_1800A8E40
 * 00000001800D5352: movups  xmm0, xmmword ptr [rax]
 * 00000001800D5355: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D535B: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D535F: mov     r9d, r12d
 * 00000001800D5362: mov     r8d, r12d
 * 00000001800D5365: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D536A: lea     rcx, [rbp+9F60h+var_4B30]
 * 00000001800D5371: call    sub_1800A8E0C
 * 00000001800D5376: movups  xmm6, xmmword ptr [rax]
 * 00000001800D5379: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D537D: call    sub_1800C50FC
 * 00000001800D5382: mov     r8, rax
 * 00000001800D5385: mov     r9d, r13d
 * 00000001800D5388: mov     edx, 172h
 * 00000001800D538D: lea     rcx, [rbp+9F60h+var_3070]; Src
 * 00000001800D5394: call    sub_180088448
 * 00000001800D5399: nop
 * 00000001800D539A: mov     r8, rax
 * 00000001800D539D: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D53A4: lea     rcx, [rbp+9F60h+var_3090]
 * 00000001800D53AB: call    sub_18001DD3C
 * 00000001800D53B0: nop
 * 00000001800D53B1: lea     r8, aVertex; "/Vertex"
 * 00000001800D53B8: mov     rdx, rax
 * 00000001800D53BB: lea     rcx, [rbp+9F60h+var_8710]
 * 00000001800D53C2: call    sub_18001DC84
 * 00000001800D53C7: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D53CC: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D53D1: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D53D6: mov     rcx, rax
 * 00000001800D53D9: call    sub_180088528
 * 00000001800D53DE: nop
 * 00000001800D53DF: lea     rcx, [rbp+9F60h+var_3090]
 * 00000001800D53E6: call    sub_180011570
 * 00000001800D53EB: nop
 * 00000001800D53EC: lea     rcx, [rbp+9F60h+var_3070]
 * 00000001800D53F3: call    sub_180011570
 * 00000001800D53F8: nop
 * 00000001800D53F9: lea     rcx, dword_1801FB590
 * 00000001800D5400: call    sub_18000C548
 * 00000001800D5405: mov     rax, [rsi+rdi*8]
 * 00000001800D5409: mov     ecx, [r15+rax]
 * 00000001800D540D: cmp     cs:dword_1801FB594, ecx
 * 00000001800D5413: jle     loc_1800D550C
 * 00000001800D5419: lea     rcx, dword_1801FB594
 * 00000001800D5420: call    sub_18000C5B0
 * 00000001800D5425: cmp     cs:dword_1801FB594, r14d
 * 00000001800D542C: jnz     loc_1800D550C
 * 00000001800D5432: xor     edx, edx
 * 00000001800D5434: lea     rcx, [rbp+9F60h+var_9F19]
 * 00000001800D5438: call    sub_1800A8E58
 * 00000001800D543D: mov     bl, [rax]
 * 00000001800D543F: call    sub_1800C508C
 * 00000001800D5444: mov     rdx, rax
 * 00000001800D5447: mov     r8d, 1A50h
 * 00000001800D544D: lea     rcx, [rbp+9F60h+var_8F70]
 * 00000001800D5454: call    sub_1800A8E40
 * 00000001800D5459: movups  xmm0, xmmword ptr [rax]
 * 00000001800D545C: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D5462: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D5466: mov     r9d, r12d
 * 00000001800D5469: mov     r8d, r12d
 * 00000001800D546C: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D5471: lea     rcx, [rbp+9F60h+var_4B10]
 * 00000001800D5478: call    sub_1800A8E0C
 * 00000001800D547D: movups  xmm6, xmmword ptr [rax]
 * 00000001800D5480: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D5484: call    sub_1800C50FC
 * 00000001800D5489: mov     r8, rax
 * 00000001800D548C: mov     r9d, r13d
 * 00000001800D548F: mov     edx, 178h
 * 00000001800D5494: lea     rcx, [rbp+9F60h+var_3010]; Src
 * 00000001800D549B: call    sub_180088448
 * 00000001800D54A0: nop
 * 00000001800D54A1: mov     r8, rax
 * 00000001800D54A4: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D54AB: lea     rcx, [rbp+9F60h+var_3030]
 * 00000001800D54B2: call    sub_18001DD3C
 * 00000001800D54B7: nop
 * 00000001800D54B8: lea     r8, aVertex; "/Vertex"
 * 00000001800D54BF: mov     rdx, rax
 * 00000001800D54C2: lea     rcx, [rbp+9F60h+var_8730]
 * 00000001800D54C9: call    sub_18001DC84
 * 00000001800D54CE: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D54D3: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D54D8: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D54DD: mov     rcx, rax
 * 00000001800D54E0: call    sub_180088528
 * 00000001800D54E5: nop
 * 00000001800D54E6: lea     rcx, [rbp+9F60h+var_3030]
 * 00000001800D54ED: call    sub_180011570
 * 00000001800D54F2: nop
 * 00000001800D54F3: lea     rcx, [rbp+9F60h+var_3010]
 * 00000001800D54FA: call    sub_180011570
 * 00000001800D54FF: nop
 * 00000001800D5500: lea     rcx, dword_1801FB594
 * 00000001800D5507: call    sub_18000C548
 * 00000001800D550C: mov     rax, [rsi+rdi*8]
 * 00000001800D5510: mov     ecx, [r15+rax]
 * 00000001800D5514: cmp     cs:dword_1801FB598, ecx
 * 00000001800D551A: jle     loc_1800D5613
 * 00000001800D5520: lea     rcx, dword_1801FB598
 * 00000001800D5527: call    sub_18000C5B0
 * 00000001800D552C: cmp     cs:dword_1801FB598, r14d
 * 00000001800D5533: jnz     loc_1800D5613
 * 00000001800D5539: xor     edx, edx
 * 00000001800D553B: lea     rcx, [rbp+9F60h+var_9F18]
 * 00000001800D553F: call    sub_1800A8E58
 * 00000001800D5544: mov     bl, [rax]
 * 00000001800D5546: call    sub_1800C508C
 * 00000001800D554B: mov     rdx, rax
 * 00000001800D554E: mov     r8d, 1A50h
 * 00000001800D5554: lea     rcx, [rbp+9F60h+var_8F60]
 * 00000001800D555B: call    sub_1800A8E40
 * 00000001800D5560: movups  xmm0, xmmword ptr [rax]
 * 00000001800D5563: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D5569: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D556D: mov     r9d, r12d
 * 00000001800D5570: mov     r8d, r12d
 * 00000001800D5573: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D5578: lea     rcx, [rbp+9F60h+var_4AF0]
 * 00000001800D557F: call    sub_1800A8E0C
 * 00000001800D5584: movups  xmm6, xmmword ptr [rax]
 * 00000001800D5587: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D558B: call    sub_1800C50FC
 * 00000001800D5590: mov     r8, rax
 * 00000001800D5593: mov     r9d, r13d
 * 00000001800D5596: mov     edx, 17Ah
 * 00000001800D559B: lea     rcx, [rbp+9F60h+var_2FB0]; Src
 * 00000001800D55A2: call    sub_180088448
 * 00000001800D55A7: nop
 * 00000001800D55A8: mov     r8, rax
 * 00000001800D55AB: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D55B2: lea     rcx, [rbp+9F60h+var_2FD0]
 * 00000001800D55B9: call    sub_18001DD3C
 * 00000001800D55BE: nop
 * 00000001800D55BF: lea     r8, aVertex; "/Vertex"
 * 00000001800D55C6: mov     rdx, rax
 * 00000001800D55C9: lea     rcx, [rbp+9F60h+var_8770]
 * 00000001800D55D0: call    sub_18001DC84
 * 00000001800D55D5: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D55DA: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D55DF: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D55E4: mov     rcx, rax
 * 00000001800D55E7: call    sub_180088528
 * 00000001800D55EC: nop
 * 00000001800D55ED: lea     rcx, [rbp+9F60h+var_2FD0]
 * 00000001800D55F4: call    sub_180011570
 * 00000001800D55F9: nop
 * 00000001800D55FA: lea     rcx, [rbp+9F60h+var_2FB0]
 * 00000001800D5601: call    sub_180011570
 * 00000001800D5606: nop
 * 00000001800D5607: lea     rcx, dword_1801FB598
 * 00000001800D560E: call    sub_18000C548
 * 00000001800D5613: mov     rax, [rsi+rdi*8]
 * 00000001800D5617: mov     ecx, [r15+rax]
 * 00000001800D561B: cmp     cs:dword_1801FB59C, ecx
 * 00000001800D5621: jle     loc_1800D571A
 * 00000001800D5627: lea     rcx, dword_1801FB59C
 * 00000001800D562E: call    sub_18000C5B0
 * 00000001800D5633: cmp     cs:dword_1801FB59C, r14d
 * 00000001800D563A: jnz     loc_1800D571A
 * 00000001800D5640: xor     edx, edx
 * 00000001800D5642: lea     rcx, [rbp+9F60h+var_9F17]
 * 00000001800D5646: call    sub_1800A8E58
 * 00000001800D564B: mov     bl, [rax]
 * 00000001800D564D: call    sub_1800C507C
 * 00000001800D5652: mov     rdx, rax
 * 00000001800D5655: mov     r8d, 1050h
 * 00000001800D565B: lea     rcx, [rbp+9F60h+var_8F50]
 * 00000001800D5662: call    sub_1800A8E40
 * 00000001800D5667: movups  xmm0, xmmword ptr [rax]
 * 00000001800D566A: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D5670: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D5674: mov     r9d, r12d
 * 00000001800D5677: mov     r8d, r12d
 * 00000001800D567A: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D567F: lea     rcx, [rbp+9F60h+var_4AD0]
 * 00000001800D5686: call    sub_1800A8E0C
 * 00000001800D568B: movups  xmm6, xmmword ptr [rax]
 * 00000001800D568E: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D5692: call    sub_1800C50FC
 * 00000001800D5697: mov     r8, rax
 * 00000001800D569A: mov     r9d, r13d
 * 00000001800D569D: mov     edx, 180h
 * 00000001800D56A2: lea     rcx, [rbp+9F60h+var_2F50]; Src
 * 00000001800D56A9: call    sub_180088448
 * 00000001800D56AE: nop
 * 00000001800D56AF: mov     r8, rax
 * 00000001800D56B2: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D56B9: lea     rcx, [rbp+9F60h+var_2F70]
 * 00000001800D56C0: call    sub_18001DD3C
 * 00000001800D56C5: nop
 * 00000001800D56C6: lea     r8, aVertex; "/Vertex"
 * 00000001800D56CD: mov     rdx, rax
 * 00000001800D56D0: lea     rcx, [rbp+9F60h+var_8790]
 * 00000001800D56D7: call    sub_18001DC84
 * 00000001800D56DC: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D56E1: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D56E6: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D56EB: mov     rcx, rax
 * 00000001800D56EE: call    sub_180088528
 * 00000001800D56F3: nop
 * 00000001800D56F4: lea     rcx, [rbp+9F60h+var_2F70]
 * 00000001800D56FB: call    sub_180011570
 * 00000001800D5700: nop
 * 00000001800D5701: lea     rcx, [rbp+9F60h+var_2F50]
 * 00000001800D5708: call    sub_180011570
 * 00000001800D570D: nop
 * 00000001800D570E: lea     rcx, dword_1801FB59C
 * 00000001800D5715: call    sub_18000C548
 * 00000001800D571A: mov     rax, [rsi+rdi*8]
 * 00000001800D571E: mov     ecx, [r15+rax]
 * 00000001800D5722: cmp     cs:dword_1801FB5A0, ecx
 * 00000001800D5728: jle     loc_1800D5821
 * 00000001800D572E: lea     rcx, dword_1801FB5A0
 * 00000001800D5735: call    sub_18000C5B0
 * 00000001800D573A: cmp     cs:dword_1801FB5A0, r14d
 * 00000001800D5741: jnz     loc_1800D5821
 * 00000001800D5747: xor     edx, edx
 * 00000001800D5749: lea     rcx, [rbp+9F60h+var_9F16]
 * 00000001800D574D: call    sub_1800A8E58
 * 00000001800D5752: mov     bl, [rax]
 * 00000001800D5754: call    sub_1800C507C
 * 00000001800D5759: mov     rdx, rax
 * 00000001800D575C: mov     r8d, 1050h
 * 00000001800D5762: lea     rcx, [rbp+9F60h+var_8F40]
 * 00000001800D5769: call    sub_1800A8E40
 * 00000001800D576E: movups  xmm0, xmmword ptr [rax]
 * 00000001800D5771: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D5777: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D577B: mov     r9d, r12d
 * 00000001800D577E: mov     r8d, r12d
 * 00000001800D5781: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D5786: lea     rcx, [rbp+9F60h+var_4AB0]
 * 00000001800D578D: call    sub_1800A8E0C
 * 00000001800D5792: movups  xmm6, xmmword ptr [rax]
 * 00000001800D5795: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D5799: call    sub_1800C50FC
 * 00000001800D579E: mov     r8, rax
 * 00000001800D57A1: mov     r9d, r13d
 * 00000001800D57A4: mov     edx, 182h
 * 00000001800D57A9: lea     rcx, [rbp+9F60h+var_2EF0]; Src
 * 00000001800D57B0: call    sub_180088448
 * 00000001800D57B5: nop
 * 00000001800D57B6: mov     r8, rax
 * 00000001800D57B9: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D57C0: lea     rcx, [rbp+9F60h+var_2F10]
 * 00000001800D57C7: call    sub_18001DD3C
 * 00000001800D57CC: nop
 * 00000001800D57CD: lea     r8, aVertex; "/Vertex"
 * 00000001800D57D4: mov     rdx, rax
 * 00000001800D57D7: lea     rcx, [rbp+9F60h+var_87D0]
 * 00000001800D57DE: call    sub_18001DC84
 * 00000001800D57E3: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D57E8: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D57ED: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D57F2: mov     rcx, rax
 * 00000001800D57F5: call    sub_180088528
 * 00000001800D57FA: nop
 * 00000001800D57FB: lea     rcx, [rbp+9F60h+var_2F10]
 * 00000001800D5802: call    sub_180011570
 * 00000001800D5807: nop
 * 00000001800D5808: lea     rcx, [rbp+9F60h+var_2EF0]
 * 00000001800D580F: call    sub_180011570
 * 00000001800D5814: nop
 * 00000001800D5815: lea     rcx, dword_1801FB5A0
 * 00000001800D581C: call    sub_18000C548
 * 00000001800D5821: mov     rax, [rsi+rdi*8]
 * 00000001800D5825: mov     ecx, [r15+rax]
 * 00000001800D5829: cmp     cs:dword_1801FB5A4, ecx
 * 00000001800D582F: jle     loc_1800D5928
 * 00000001800D5835: lea     rcx, dword_1801FB5A4
 * 00000001800D583C: call    sub_18000C5B0
 * 00000001800D5841: cmp     cs:dword_1801FB5A4, r14d
 * 00000001800D5848: jnz     loc_1800D5928
 * 00000001800D584E: xor     edx, edx
 * 00000001800D5850: lea     rcx, [rbp+9F60h+var_9F15]
 * 00000001800D5854: call    sub_1800A8E58
 * 00000001800D5859: mov     bl, [rax]
 * 00000001800D585B: call    sub_1800C507C
 * 00000001800D5860: mov     rdx, rax
 * 00000001800D5863: mov     r8d, 1050h
 * 00000001800D5869: lea     rcx, [rbp+9F60h+var_8F30]
 * 00000001800D5870: call    sub_1800A8E40
 * 00000001800D5875: movups  xmm0, xmmword ptr [rax]
 * 00000001800D5878: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D587E: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D5882: mov     r9d, r12d
 * 00000001800D5885: mov     r8d, r12d
 * 00000001800D5888: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D588D: lea     rcx, [rbp+9F60h+var_4A90]
 * 00000001800D5894: call    sub_1800A8E0C
 * 00000001800D5899: movups  xmm6, xmmword ptr [rax]
 * 00000001800D589C: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D58A0: call    sub_1800C50FC
 * 00000001800D58A5: mov     r8, rax
 * 00000001800D58A8: mov     r9d, r13d
 * 00000001800D58AB: mov     edx, 188h
 * 00000001800D58B0: lea     rcx, [rbp+9F60h+var_2E90]; Src
 * 00000001800D58B7: call    sub_180088448
 * 00000001800D58BC: nop
 * 00000001800D58BD: mov     r8, rax
 * 00000001800D58C0: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D58C7: lea     rcx, [rbp+9F60h+var_2EB0]
 * 00000001800D58CE: call    sub_18001DD3C
 * 00000001800D58D3: nop
 * 00000001800D58D4: lea     r8, aVertex; "/Vertex"
 * 00000001800D58DB: mov     rdx, rax
 * 00000001800D58DE: lea     rcx, [rbp+9F60h+var_87F0]
 * 00000001800D58E5: call    sub_18001DC84
 * 00000001800D58EA: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D58EF: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D58F4: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D58F9: mov     rcx, rax
 * 00000001800D58FC: call    sub_180088528
 * 00000001800D5901: nop
 * 00000001800D5902: lea     rcx, [rbp+9F60h+var_2EB0]
 * 00000001800D5909: call    sub_180011570
 * 00000001800D590E: nop
 * 00000001800D590F: lea     rcx, [rbp+9F60h+var_2E90]
 * 00000001800D5916: call    sub_180011570
 * 00000001800D591B: nop
 * 00000001800D591C: lea     rcx, dword_1801FB5A4
 * 00000001800D5923: call    sub_18000C548
 * 00000001800D5928: mov     rax, [rsi+rdi*8]
 * 00000001800D592C: mov     ecx, [r15+rax]
 * 00000001800D5930: cmp     cs:dword_1801FB5A8, ecx
 * 00000001800D5936: jle     loc_1800D5A2F
 * 00000001800D593C: lea     rcx, dword_1801FB5A8
 * 00000001800D5943: call    sub_18000C5B0
 * 00000001800D5948: cmp     cs:dword_1801FB5A8, r14d
 * 00000001800D594F: jnz     loc_1800D5A2F
 * 00000001800D5955: xor     edx, edx
 * 00000001800D5957: lea     rcx, [rbp+9F60h+var_9F14]
 * 00000001800D595B: call    sub_1800A8E58
 * 00000001800D5960: mov     bl, [rax]
 * 00000001800D5962: call    sub_1800C507C
 * 00000001800D5967: mov     rdx, rax
 * 00000001800D596A: mov     r8d, 1050h
 * 00000001800D5970: lea     rcx, [rbp+9F60h+var_8F20]
 * 00000001800D5977: call    sub_1800A8E40
 * 00000001800D597C: movups  xmm0, xmmword ptr [rax]
 * 00000001800D597F: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D5985: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D5989: mov     r9d, r12d
 * 00000001800D598C: mov     r8d, r12d
 * 00000001800D598F: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D5994: lea     rcx, [rbp+9F60h+var_4A70]
 * 00000001800D599B: call    sub_1800A8E0C
 * 00000001800D59A0: movups  xmm6, xmmword ptr [rax]
 * 00000001800D59A3: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D59A7: call    sub_1800C50FC
 * 00000001800D59AC: mov     r8, rax
 * 00000001800D59AF: mov     r9d, r13d
 * 00000001800D59B2: mov     edx, 18Ah
 * 00000001800D59B7: lea     rcx, [rbp+9F60h+var_2E30]; Src
 * 00000001800D59BE: call    sub_180088448
 * 00000001800D59C3: nop
 * 00000001800D59C4: mov     r8, rax
 * 00000001800D59C7: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D59CE: lea     rcx, [rbp+9F60h+var_2E50]
 * 00000001800D59D5: call    sub_18001DD3C
 * 00000001800D59DA: nop
 * 00000001800D59DB: lea     r8, aVertex; "/Vertex"
 * 00000001800D59E2: mov     rdx, rax
 * 00000001800D59E5: lea     rcx, [rbp+9F60h+var_8830]
 * 00000001800D59EC: call    sub_18001DC84
 * 00000001800D59F1: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D59F6: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D59FB: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D5A00: mov     rcx, rax
 * 00000001800D5A03: call    sub_180088528
 * 00000001800D5A08: nop
 * 00000001800D5A09: lea     rcx, [rbp+9F60h+var_2E50]
 * 00000001800D5A10: call    sub_180011570
 * 00000001800D5A15: nop
 * 00000001800D5A16: lea     rcx, [rbp+9F60h+var_2E30]
 * 00000001800D5A1D: call    sub_180011570
 * 00000001800D5A22: nop
 * 00000001800D5A23: lea     rcx, dword_1801FB5A8
 * 00000001800D5A2A: call    sub_18000C548
 * 00000001800D5A2F: mov     rax, [rsi+rdi*8]
 * 00000001800D5A33: mov     ecx, [r15+rax]
 * 00000001800D5A37: cmp     cs:dword_1801FB5AC, ecx
 * 00000001800D5A3D: jle     loc_1800D5B36
 * 00000001800D5A43: lea     rcx, dword_1801FB5AC
 * 00000001800D5A4A: call    sub_18000C5B0
 * 00000001800D5A4F: cmp     cs:dword_1801FB5AC, r14d
 * 00000001800D5A56: jnz     loc_1800D5B36
 * 00000001800D5A5C: xor     edx, edx
 * 00000001800D5A5E: lea     rcx, [rbp+9F60h+var_9F13]
 * 00000001800D5A62: call    sub_1800A8E58
 * 00000001800D5A67: mov     bl, [rax]
 * 00000001800D5A69: call    sub_1800C507C
 * 00000001800D5A6E: mov     rdx, rax
 * 00000001800D5A71: mov     r8d, 1050h
 * 00000001800D5A77: lea     rcx, [rbp+9F60h+var_8F10]
 * 00000001800D5A7E: call    sub_1800A8E40
 * 00000001800D5A83: movups  xmm0, xmmword ptr [rax]
 * 00000001800D5A86: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D5A8C: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D5A90: mov     r9d, r12d
 * 00000001800D5A93: mov     r8d, r12d
 * 00000001800D5A96: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D5A9B: lea     rcx, [rbp+9F60h+var_4A50]
 * 00000001800D5AA2: call    sub_1800A8E0C
 * 00000001800D5AA7: movups  xmm6, xmmword ptr [rax]
 * 00000001800D5AAA: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D5AAE: call    sub_1800C50FC
 * 00000001800D5AB3: mov     r8, rax
 * 00000001800D5AB6: mov     r9d, r13d
 * 00000001800D5AB9: mov     edx, 190h
 * 00000001800D5ABE: lea     rcx, [rbp+9F60h+var_2DD0]; Src
 * 00000001800D5AC5: call    sub_180088448
 * 00000001800D5ACA: nop
 * 00000001800D5ACB: mov     r8, rax
 * 00000001800D5ACE: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D5AD5: lea     rcx, [rbp+9F60h+var_2DF0]
 * 00000001800D5ADC: call    sub_18001DD3C
 * 00000001800D5AE1: nop
 * 00000001800D5AE2: lea     r8, aVertex; "/Vertex"
 * 00000001800D5AE9: mov     rdx, rax
 * 00000001800D5AEC: lea     rcx, [rbp+9F60h+var_8850]
 * 00000001800D5AF3: call    sub_18001DC84
 * 00000001800D5AF8: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D5AFD: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D5B02: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D5B07: mov     rcx, rax
 * 00000001800D5B0A: call    sub_180088528
 * 00000001800D5B0F: nop
 * 00000001800D5B10: lea     rcx, [rbp+9F60h+var_2DF0]
 * 00000001800D5B17: call    sub_180011570
 * 00000001800D5B1C: nop
 * 00000001800D5B1D: lea     rcx, [rbp+9F60h+var_2DD0]
 * 00000001800D5B24: call    sub_180011570
 * 00000001800D5B29: nop
 * 00000001800D5B2A: lea     rcx, dword_1801FB5AC
 * 00000001800D5B31: call    sub_18000C548
 * 00000001800D5B36: mov     rax, [rsi+rdi*8]
 * 00000001800D5B3A: mov     ecx, [r15+rax]
 * 00000001800D5B3E: cmp     cs:dword_1801FB5B0, ecx
 * 00000001800D5B44: jle     loc_1800D5C3D
 * 00000001800D5B4A: lea     rcx, dword_1801FB5B0
 * 00000001800D5B51: call    sub_18000C5B0
 * 00000001800D5B56: cmp     cs:dword_1801FB5B0, r14d
 * 00000001800D5B5D: jnz     loc_1800D5C3D
 * 00000001800D5B63: xor     edx, edx
 * 00000001800D5B65: lea     rcx, [rbp+9F60h+var_9F12]
 * 00000001800D5B69: call    sub_1800A8E58
 * 00000001800D5B6E: mov     bl, [rax]
 * 00000001800D5B70: call    sub_1800C507C
 * 00000001800D5B75: mov     rdx, rax
 * 00000001800D5B78: mov     r8d, 1050h
 * 00000001800D5B7E: lea     rcx, [rbp+9F60h+var_8F00]
 * 00000001800D5B85: call    sub_1800A8E40
 * 00000001800D5B8A: movups  xmm0, xmmword ptr [rax]
 * 00000001800D5B8D: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D5B93: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D5B97: mov     r9d, r12d
 * 00000001800D5B9A: mov     r8d, r12d
 * 00000001800D5B9D: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D5BA2: lea     rcx, [rbp+9F60h+var_4A30]
 * 00000001800D5BA9: call    sub_1800A8E0C
 * 00000001800D5BAE: movups  xmm6, xmmword ptr [rax]
 * 00000001800D5BB1: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D5BB5: call    sub_1800C50FC
 * 00000001800D5BBA: mov     r8, rax
 * 00000001800D5BBD: mov     r9d, r13d
 * 00000001800D5BC0: mov     edx, 192h
 * 00000001800D5BC5: lea     rcx, [rbp+9F60h+var_2D70]; Src
 * 00000001800D5BCC: call    sub_180088448
 * 00000001800D5BD1: nop
 * 00000001800D5BD2: mov     r8, rax
 * 00000001800D5BD5: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D5BDC: lea     rcx, [rbp+9F60h+var_2D90]
 * 00000001800D5BE3: call    sub_18001DD3C
 * 00000001800D5BE8: nop
 * 00000001800D5BE9: lea     r8, aVertex; "/Vertex"
 * 00000001800D5BF0: mov     rdx, rax
 * 00000001800D5BF3: lea     rcx, [rbp+9F60h+var_8890]
 * 00000001800D5BFA: call    sub_18001DC84
 * 00000001800D5BFF: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D5C04: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D5C09: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D5C0E: mov     rcx, rax
 * 00000001800D5C11: call    sub_180088528
 * 00000001800D5C16: nop
 * 00000001800D5C17: lea     rcx, [rbp+9F60h+var_2D90]
 * 00000001800D5C1E: call    sub_180011570
 * 00000001800D5C23: nop
 * 00000001800D5C24: lea     rcx, [rbp+9F60h+var_2D70]
 * 00000001800D5C2B: call    sub_180011570
 * 00000001800D5C30: nop
 * 00000001800D5C31: lea     rcx, dword_1801FB5B0
 * 00000001800D5C38: call    sub_18000C548
 * 00000001800D5C3D: mov     rax, [rsi+rdi*8]
 * 00000001800D5C41: mov     ecx, [r15+rax]
 * 00000001800D5C45: cmp     cs:dword_1801FB5B4, ecx
 * 00000001800D5C4B: jle     loc_1800D5D44
 * 00000001800D5C51: lea     rcx, dword_1801FB5B4
 * 00000001800D5C58: call    sub_18000C5B0
 * 00000001800D5C5D: cmp     cs:dword_1801FB5B4, r14d
 * 00000001800D5C64: jnz     loc_1800D5D44
 * 00000001800D5C6A: xor     edx, edx
 * 00000001800D5C6C: lea     rcx, [rbp+9F60h+var_9F11]
 * 00000001800D5C70: call    sub_1800A8E58
 * 00000001800D5C75: mov     bl, [rax]
 * 00000001800D5C77: call    sub_1800C507C
 * 00000001800D5C7C: mov     rdx, rax
 * 00000001800D5C7F: mov     r8d, 1050h
 * 00000001800D5C85: lea     rcx, [rbp+9F60h+var_8EF0]
 * 00000001800D5C8C: call    sub_1800A8E40
 * 00000001800D5C91: movups  xmm0, xmmword ptr [rax]
 * 00000001800D5C94: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D5C9A: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D5C9E: mov     r9d, r12d
 * 00000001800D5CA1: mov     r8d, r12d
 * 00000001800D5CA4: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D5CA9: lea     rcx, [rbp+9F60h+var_4A10]
 * 00000001800D5CB0: call    sub_1800A8E0C
 * 00000001800D5CB5: movups  xmm6, xmmword ptr [rax]
 * 00000001800D5CB8: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D5CBC: call    sub_1800C50FC
 * 00000001800D5CC1: mov     r8, rax
 * 00000001800D5CC4: mov     r9d, r13d
 * 00000001800D5CC7: mov     edx, 198h
 * 00000001800D5CCC: lea     rcx, [rbp+9F60h+var_2D10]; Src
 * 00000001800D5CD3: call    sub_180088448
 * 00000001800D5CD8: nop
 * 00000001800D5CD9: mov     r8, rax
 * 00000001800D5CDC: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D5CE3: lea     rcx, [rbp+9F60h+var_2D30]
 * 00000001800D5CEA: call    sub_18001DD3C
 * 00000001800D5CEF: nop
 * 00000001800D5CF0: lea     r8, aVertex; "/Vertex"
 * 00000001800D5CF7: mov     rdx, rax
 * 00000001800D5CFA: lea     rcx, [rbp+9F60h+var_88B0]
 * 00000001800D5D01: call    sub_18001DC84
 * 00000001800D5D06: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D5D0B: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D5D10: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D5D15: mov     rcx, rax
 * 00000001800D5D18: call    sub_180088528
 * 00000001800D5D1D: nop
 * 00000001800D5D1E: lea     rcx, [rbp+9F60h+var_2D30]
 * 00000001800D5D25: call    sub_180011570
 * 00000001800D5D2A: nop
 * 00000001800D5D2B: lea     rcx, [rbp+9F60h+var_2D10]
 * 00000001800D5D32: call    sub_180011570
 * 00000001800D5D37: nop
 * 00000001800D5D38: lea     rcx, dword_1801FB5B4
 * 00000001800D5D3F: call    sub_18000C548
 * 00000001800D5D44: mov     rax, [rsi+rdi*8]
 * 00000001800D5D48: mov     ecx, [r15+rax]
 * 00000001800D5D4C: cmp     cs:dword_1801FB5B8, ecx
 * 00000001800D5D52: jle     loc_1800D5E4B
 * 00000001800D5D58: lea     rcx, dword_1801FB5B8
 * 00000001800D5D5F: call    sub_18000C5B0
 * 00000001800D5D64: cmp     cs:dword_1801FB5B8, r14d
 * 00000001800D5D6B: jnz     loc_1800D5E4B
 * 00000001800D5D71: xor     edx, edx
 * 00000001800D5D73: lea     rcx, [rbp+9F60h+var_9F10]
 * 00000001800D5D77: call    sub_1800A8E58
 * 00000001800D5D7C: mov     bl, [rax]
 * 00000001800D5D7E: call    sub_1800C507C
 * 00000001800D5D83: mov     rdx, rax
 * 00000001800D5D86: mov     r8d, 1050h
 * 00000001800D5D8C: lea     rcx, [rbp+9F60h+var_8EE0]
 * 00000001800D5D93: call    sub_1800A8E40
 * 00000001800D5D98: movups  xmm0, xmmword ptr [rax]
 * 00000001800D5D9B: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D5DA1: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D5DA5: mov     r9d, r12d
 * 00000001800D5DA8: mov     r8d, r12d
 * 00000001800D5DAB: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D5DB0: lea     rcx, [rbp+9F60h+var_49F0]
 * 00000001800D5DB7: call    sub_1800A8E0C
 * 00000001800D5DBC: movups  xmm6, xmmword ptr [rax]
 * 00000001800D5DBF: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D5DC3: call    sub_1800C50FC
 * 00000001800D5DC8: mov     r8, rax
 * 00000001800D5DCB: mov     r9d, r13d
 * 00000001800D5DCE: mov     edx, 19Ah
 * 00000001800D5DD3: lea     rcx, [rbp+9F60h+var_2CB0]; Src
 * 00000001800D5DDA: call    sub_180088448
 * 00000001800D5DDF: nop
 * 00000001800D5DE0: mov     r8, rax
 * 00000001800D5DE3: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D5DEA: lea     rcx, [rbp+9F60h+var_2CD0]
 * 00000001800D5DF1: call    sub_18001DD3C
 * 00000001800D5DF6: nop
 * 00000001800D5DF7: lea     r8, aVertex; "/Vertex"
 * 00000001800D5DFE: mov     rdx, rax
 * 00000001800D5E01: lea     rcx, [rbp+9F60h+var_88F0]
 * 00000001800D5E08: call    sub_18001DC84
 * 00000001800D5E0D: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D5E12: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D5E17: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D5E1C: mov     rcx, rax
 * 00000001800D5E1F: call    sub_180088528
 * 00000001800D5E24: nop
 * 00000001800D5E25: lea     rcx, [rbp+9F60h+var_2CD0]
 * 00000001800D5E2C: call    sub_180011570
 * 00000001800D5E31: nop
 * 00000001800D5E32: lea     rcx, [rbp+9F60h+var_2CB0]
 * 00000001800D5E39: call    sub_180011570
 * 00000001800D5E3E: nop
 * 00000001800D5E3F: lea     rcx, dword_1801FB5B8
 * 00000001800D5E46: call    sub_18000C548
 * 00000001800D5E4B: mov     rax, [rsi+rdi*8]
 * 00000001800D5E4F: mov     ecx, [r15+rax]
 * 00000001800D5E53: cmp     cs:dword_1801FB5BC, ecx
 * 00000001800D5E59: jle     loc_1800D5F52
 * 00000001800D5E5F: lea     rcx, dword_1801FB5BC
 * 00000001800D5E66: call    sub_18000C5B0
 * 00000001800D5E6B: cmp     cs:dword_1801FB5BC, r14d
 * 00000001800D5E72: jnz     loc_1800D5F52
 * 00000001800D5E78: xor     edx, edx
 * 00000001800D5E7A: lea     rcx, [rbp+9F60h+var_9F0F]
 * 00000001800D5E7E: call    sub_1800A8E58
 * 00000001800D5E83: mov     bl, [rax]
 * 00000001800D5E85: call    sub_1800C508C
 * 00000001800D5E8A: mov     rdx, rax
 * 00000001800D5E8D: mov     r8d, 1A50h
 * 00000001800D5E93: lea     rcx, [rbp+9F60h+var_8ED0]
 * 00000001800D5E9A: call    sub_1800A8E40
 * 00000001800D5E9F: movups  xmm0, xmmword ptr [rax]
 * 00000001800D5EA2: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D5EA8: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D5EAC: mov     r9d, r12d
 * 00000001800D5EAF: mov     r8d, r12d
 * 00000001800D5EB2: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D5EB7: lea     rcx, [rbp+9F60h+var_49D0]
 * 00000001800D5EBE: call    sub_1800A8E0C
 * 00000001800D5EC3: movups  xmm6, xmmword ptr [rax]
 * 00000001800D5EC6: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D5ECA: call    sub_1800C50FC
 * 00000001800D5ECF: mov     r8, rax
 * 00000001800D5ED2: mov     r9d, r13d
 * 00000001800D5ED5: mov     edx, 1A0h
 * 00000001800D5EDA: lea     rcx, [rbp+9F60h+var_2C50]; Src
 * 00000001800D5EE1: call    sub_180088448
 * 00000001800D5EE6: nop
 * 00000001800D5EE7: mov     r8, rax
 * 00000001800D5EEA: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D5EF1: lea     rcx, [rbp+9F60h+var_2C70]
 * 00000001800D5EF8: call    sub_18001DD3C
 * 00000001800D5EFD: nop
 * 00000001800D5EFE: lea     r8, aVertex; "/Vertex"
 * 00000001800D5F05: mov     rdx, rax
 * 00000001800D5F08: lea     rcx, [rbp+9F60h+var_8910]
 * 00000001800D5F0F: call    sub_18001DC84
 * 00000001800D5F14: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D5F19: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D5F1E: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D5F23: mov     rcx, rax
 * 00000001800D5F26: call    sub_180088528
 * 00000001800D5F2B: nop
 * 00000001800D5F2C: lea     rcx, [rbp+9F60h+var_2C70]
 * 00000001800D5F33: call    sub_180011570
 * 00000001800D5F38: nop
 * 00000001800D5F39: lea     rcx, [rbp+9F60h+var_2C50]
 * 00000001800D5F40: call    sub_180011570
 * 00000001800D5F45: nop
 * 00000001800D5F46: lea     rcx, dword_1801FB5BC
 * 00000001800D5F4D: call    sub_18000C548
 * 00000001800D5F52: mov     rax, [rsi+rdi*8]
 * 00000001800D5F56: mov     ecx, [r15+rax]
 * 00000001800D5F5A: cmp     cs:dword_1801FB5C0, ecx
 * 00000001800D5F60: jle     loc_1800D6059
 * 00000001800D5F66: lea     rcx, dword_1801FB5C0
 * 00000001800D5F6D: call    sub_18000C5B0
 * 00000001800D5F72: cmp     cs:dword_1801FB5C0, r14d
 * 00000001800D5F79: jnz     loc_1800D6059
 * 00000001800D5F7F: xor     edx, edx
 * 00000001800D5F81: lea     rcx, [rbp+9F60h+var_9F0E]
 * 00000001800D5F85: call    sub_1800A8E58
 * 00000001800D5F8A: mov     bl, [rax]
 * 00000001800D5F8C: call    sub_1800C508C
 * 00000001800D5F91: mov     rdx, rax
 * 00000001800D5F94: mov     r8d, 1A50h
 * 00000001800D5F9A: lea     rcx, [rbp+9F60h+var_8EC0]
 * 00000001800D5FA1: call    sub_1800A8E40
 * 00000001800D5FA6: movups  xmm0, xmmword ptr [rax]
 * 00000001800D5FA9: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D5FAF: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D5FB3: mov     r9d, r12d
 * 00000001800D5FB6: mov     r8d, r12d
 * 00000001800D5FB9: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D5FBE: lea     rcx, [rbp+9F60h+var_49B0]
 * 00000001800D5FC5: call    sub_1800A8E0C
 * 00000001800D5FCA: movups  xmm6, xmmword ptr [rax]
 * 00000001800D5FCD: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D5FD1: call    sub_1800C50FC
 * 00000001800D5FD6: mov     r8, rax
 * 00000001800D5FD9: mov     r9d, r13d
 * 00000001800D5FDC: mov     edx, 1A2h
 * 00000001800D5FE1: lea     rcx, [rbp+9F60h+var_2BF0]; Src
 * 00000001800D5FE8: call    sub_180088448
 * 00000001800D5FED: nop
 * 00000001800D5FEE: mov     r8, rax
 * 00000001800D5FF1: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D5FF8: lea     rcx, [rbp+9F60h+var_2C10]
 * 00000001800D5FFF: call    sub_18001DD3C
 * 00000001800D6004: nop
 * 00000001800D6005: lea     r8, aVertex; "/Vertex"
 * 00000001800D600C: mov     rdx, rax
 * 00000001800D600F: lea     rcx, [rbp+9F60h+var_8950]
 * 00000001800D6016: call    sub_18001DC84
 * 00000001800D601B: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D6020: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D6025: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D602A: mov     rcx, rax
 * 00000001800D602D: call    sub_180088528
 * 00000001800D6032: nop
 * 00000001800D6033: lea     rcx, [rbp+9F60h+var_2C10]
 * 00000001800D603A: call    sub_180011570
 * 00000001800D603F: nop
 * 00000001800D6040: lea     rcx, [rbp+9F60h+var_2BF0]
 * 00000001800D6047: call    sub_180011570
 * 00000001800D604C: nop
 * 00000001800D604D: lea     rcx, dword_1801FB5C0
 * 00000001800D6054: call    sub_18000C548
 * 00000001800D6059: mov     rax, [rsi+rdi*8]
 * 00000001800D605D: mov     ecx, [r15+rax]
 * 00000001800D6061: cmp     cs:dword_1801FB5C4, ecx
 * 00000001800D6067: jle     loc_1800D6160
 * 00000001800D606D: lea     rcx, dword_1801FB5C4
 * 00000001800D6074: call    sub_18000C5B0
 * 00000001800D6079: cmp     cs:dword_1801FB5C4, r14d
 * 00000001800D6080: jnz     loc_1800D6160
 * 00000001800D6086: xor     edx, edx
 * 00000001800D6088: lea     rcx, [rbp+9F60h+var_9F0D]
 * 00000001800D608C: call    sub_1800A8E58
 * 00000001800D6091: mov     bl, [rax]
 * 00000001800D6093: call    sub_1800C508C
 * 00000001800D6098: mov     rdx, rax
 * 00000001800D609B: mov     r8d, 1A50h
 * 00000001800D60A1: lea     rcx, [rbp+9F60h+var_8EB0]
 * 00000001800D60A8: call    sub_1800A8E40
 * 00000001800D60AD: movups  xmm0, xmmword ptr [rax]
 * 00000001800D60B0: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D60B6: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D60BA: mov     r9d, r12d
 * 00000001800D60BD: mov     r8d, r12d
 * 00000001800D60C0: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D60C5: lea     rcx, [rbp+9F60h+var_4990]
 * 00000001800D60CC: call    sub_1800A8E0C
 * 00000001800D60D1: movups  xmm6, xmmword ptr [rax]
 * 00000001800D60D4: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D60D8: call    sub_1800C50FC
 * 00000001800D60DD: mov     r8, rax
 * 00000001800D60E0: mov     r9d, r13d
 * 00000001800D60E3: mov     edx, 1A8h
 * 00000001800D60E8: lea     rcx, [rbp+9F60h+var_2B90]; Src
 * 00000001800D60EF: call    sub_180088448
 * 00000001800D60F4: nop
 * 00000001800D60F5: mov     r8, rax
 * 00000001800D60F8: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D60FF: lea     rcx, [rbp+9F60h+var_2BB0]
 * 00000001800D6106: call    sub_18001DD3C
 * 00000001800D610B: nop
 * 00000001800D610C: lea     r8, aVertex; "/Vertex"
 * 00000001800D6113: mov     rdx, rax
 * 00000001800D6116: lea     rcx, [rbp+9F60h+var_8970]
 * 00000001800D611D: call    sub_18001DC84
 * 00000001800D6122: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D6127: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D612C: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D6131: mov     rcx, rax
 * 00000001800D6134: call    sub_180088528
 * 00000001800D6139: nop
 * 00000001800D613A: lea     rcx, [rbp+9F60h+var_2BB0]
 * 00000001800D6141: call    sub_180011570
 * 00000001800D6146: nop
 * 00000001800D6147: lea     rcx, [rbp+9F60h+var_2B90]
 * 00000001800D614E: call    sub_180011570
 * 00000001800D6153: nop
 * 00000001800D6154: lea     rcx, dword_1801FB5C4
 * 00000001800D615B: call    sub_18000C548
 * 00000001800D6160: mov     rax, [rsi+rdi*8]
 * 00000001800D6164: mov     ecx, [r15+rax]
 * 00000001800D6168: cmp     cs:dword_1801FB5C8, ecx
 * 00000001800D616E: jle     loc_1800D6267
 * 00000001800D6174: lea     rcx, dword_1801FB5C8
 * 00000001800D617B: call    sub_18000C5B0
 * 00000001800D6180: cmp     cs:dword_1801FB5C8, r14d
 * 00000001800D6187: jnz     loc_1800D6267
 * 00000001800D618D: xor     edx, edx
 * 00000001800D618F: lea     rcx, [rbp+9F60h+var_9F0C]
 * 00000001800D6193: call    sub_1800A8E58
 * 00000001800D6198: mov     bl, [rax]
 * 00000001800D619A: call    sub_1800C508C
 * 00000001800D619F: mov     rdx, rax
 * 00000001800D61A2: mov     r8d, 1A50h
 * 00000001800D61A8: lea     rcx, [rbp+9F60h+var_8EA0]
 * 00000001800D61AF: call    sub_1800A8E40
 * 00000001800D61B4: movups  xmm0, xmmword ptr [rax]
 * 00000001800D61B7: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D61BD: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D61C1: mov     r9d, r12d
 * 00000001800D61C4: mov     r8d, r12d
 * 00000001800D61C7: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D61CC: lea     rcx, [rbp+9F60h+var_4970]
 * 00000001800D61D3: call    sub_1800A8E0C
 * 00000001800D61D8: movups  xmm6, xmmword ptr [rax]
 * 00000001800D61DB: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D61DF: call    sub_1800C50FC
 * 00000001800D61E4: mov     r8, rax
 * 00000001800D61E7: mov     r9d, r13d
 * 00000001800D61EA: mov     edx, 1AAh
 * 00000001800D61EF: lea     rcx, [rbp+9F60h+var_2B30]; Src
 * 00000001800D61F6: call    sub_180088448
 * 00000001800D61FB: nop
 * 00000001800D61FC: mov     r8, rax
 * 00000001800D61FF: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D6206: lea     rcx, [rbp+9F60h+var_2B50]
 * 00000001800D620D: call    sub_18001DD3C
 * 00000001800D6212: nop
 * 00000001800D6213: lea     r8, aVertex; "/Vertex"
 * 00000001800D621A: mov     rdx, rax
 * 00000001800D621D: lea     rcx, [rbp+9F60h+var_89B0]
 * 00000001800D6224: call    sub_18001DC84
 * 00000001800D6229: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D622E: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D6233: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D6238: mov     rcx, rax
 * 00000001800D623B: call    sub_180088528
 * 00000001800D6240: nop
 * 00000001800D6241: lea     rcx, [rbp+9F60h+var_2B50]
 * 00000001800D6248: call    sub_180011570
 * 00000001800D624D: nop
 * 00000001800D624E: lea     rcx, [rbp+9F60h+var_2B30]
 * 00000001800D6255: call    sub_180011570
 * 00000001800D625A: nop
 * 00000001800D625B: lea     rcx, dword_1801FB5C8
 * 00000001800D6262: call    sub_18000C548
 * 00000001800D6267: mov     rax, [rsi+rdi*8]
 * 00000001800D626B: mov     ecx, [r15+rax]
 * 00000001800D626F: cmp     cs:dword_1801FB5CC, ecx
 * 00000001800D6275: jle     loc_1800D636E
 * 00000001800D627B: lea     rcx, dword_1801FB5CC
 * 00000001800D6282: call    sub_18000C5B0
 * 00000001800D6287: cmp     cs:dword_1801FB5CC, r14d
 * 00000001800D628E: jnz     loc_1800D636E
 * 00000001800D6294: xor     edx, edx
 * 00000001800D6296: lea     rcx, [rbp+9F60h+var_9F0B]
 * 00000001800D629A: call    sub_1800A8E58
 * 00000001800D629F: mov     bl, [rax]
 * 00000001800D62A1: call    sub_1800C508C
 * 00000001800D62A6: mov     rdx, rax
 * 00000001800D62A9: mov     r8d, 1A50h
 * 00000001800D62AF: lea     rcx, [rbp+9F60h+var_8E90]
 * 00000001800D62B6: call    sub_1800A8E40
 * 00000001800D62BB: movups  xmm0, xmmword ptr [rax]
 * 00000001800D62BE: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D62C4: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D62C8: mov     r9d, r12d
 * 00000001800D62CB: mov     r8d, r12d
 * 00000001800D62CE: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D62D3: lea     rcx, [rbp+9F60h+var_4950]
 * 00000001800D62DA: call    sub_1800A8E0C
 * 00000001800D62DF: movups  xmm6, xmmword ptr [rax]
 * 00000001800D62E2: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D62E6: call    sub_1800C50FC
 * 00000001800D62EB: mov     r8, rax
 * 00000001800D62EE: mov     r9d, r13d
 * 00000001800D62F1: mov     edx, 1B0h
 * 00000001800D62F6: lea     rcx, [rbp+9F60h+var_2AD0]; Src
 * 00000001800D62FD: call    sub_180088448
 * 00000001800D6302: nop
 * 00000001800D6303: mov     r8, rax
 * 00000001800D6306: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D630D: lea     rcx, [rbp+9F60h+var_2AF0]
 * 00000001800D6314: call    sub_18001DD3C
 * 00000001800D6319: nop
 * 00000001800D631A: lea     r8, aVertex; "/Vertex"
 * 00000001800D6321: mov     rdx, rax
 * 00000001800D6324: lea     rcx, [rbp+9F60h+var_89D0]
 * 00000001800D632B: call    sub_18001DC84
 * 00000001800D6330: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D6335: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D633A: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D633F: mov     rcx, rax
 * 00000001800D6342: call    sub_180088528
 * 00000001800D6347: nop
 * 00000001800D6348: lea     rcx, [rbp+9F60h+var_2AF0]
 * 00000001800D634F: call    sub_180011570
 * 00000001800D6354: nop
 * 00000001800D6355: lea     rcx, [rbp+9F60h+var_2AD0]
 * 00000001800D635C: call    sub_180011570
 * 00000001800D6361: nop
 * 00000001800D6362: lea     rcx, dword_1801FB5CC
 * 00000001800D6369: call    sub_18000C548
 * 00000001800D636E: mov     rax, [rsi+rdi*8]
 * 00000001800D6372: mov     ecx, [r15+rax]
 * 00000001800D6376: cmp     cs:dword_1801FB5D0, ecx
 * 00000001800D637C: jle     loc_1800D6475
 * 00000001800D6382: lea     rcx, dword_1801FB5D0
 * 00000001800D6389: call    sub_18000C5B0
 * 00000001800D638E: cmp     cs:dword_1801FB5D0, r14d
 * 00000001800D6395: jnz     loc_1800D6475
 * 00000001800D639B: xor     edx, edx
 * 00000001800D639D: lea     rcx, [rbp+9F60h+var_9F0A]
 * 00000001800D63A1: call    sub_1800A8E58
 * 00000001800D63A6: mov     bl, [rax]
 * 00000001800D63A8: call    sub_1800C508C
 * 00000001800D63AD: mov     rdx, rax
 * 00000001800D63B0: mov     r8d, 1A50h
 * 00000001800D63B6: lea     rcx, [rbp+9F60h+var_8E80]
 * 00000001800D63BD: call    sub_1800A8E40
 * 00000001800D63C2: movups  xmm0, xmmword ptr [rax]
 * 00000001800D63C5: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D63CB: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D63CF: mov     r9d, r12d
 * 00000001800D63D2: mov     r8d, r12d
 * 00000001800D63D5: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D63DA: lea     rcx, [rbp+9F60h+var_4930]
 * 00000001800D63E1: call    sub_1800A8E0C
 * 00000001800D63E6: movups  xmm6, xmmword ptr [rax]
 * 00000001800D63E9: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D63ED: call    sub_1800C50FC
 * 00000001800D63F2: mov     r8, rax
 * 00000001800D63F5: mov     r9d, r13d
 * 00000001800D63F8: mov     edx, 1B2h
 * 00000001800D63FD: lea     rcx, [rbp+9F60h+var_2A70]; Src
 * 00000001800D6404: call    sub_180088448
 * 00000001800D6409: nop
 * 00000001800D640A: mov     r8, rax
 * 00000001800D640D: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D6414: lea     rcx, [rbp+9F60h+var_2A90]
 * 00000001800D641B: call    sub_18001DD3C
 * 00000001800D6420: nop
 * 00000001800D6421: lea     r8, aVertex; "/Vertex"
 * 00000001800D6428: mov     rdx, rax
 * 00000001800D642B: lea     rcx, [rbp+9F60h+var_8A10]
 * 00000001800D6432: call    sub_18001DC84
 * 00000001800D6437: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D643C: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D6441: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D6446: mov     rcx, rax
 * 00000001800D6449: call    sub_180088528
 * 00000001800D644E: nop
 * 00000001800D644F: lea     rcx, [rbp+9F60h+var_2A90]
 * 00000001800D6456: call    sub_180011570
 * 00000001800D645B: nop
 * 00000001800D645C: lea     rcx, [rbp+9F60h+var_2A70]
 * 00000001800D6463: call    sub_180011570
 * 00000001800D6468: nop
 * 00000001800D6469: lea     rcx, dword_1801FB5D0
 * 00000001800D6470: call    sub_18000C548
 * 00000001800D6475: mov     rax, [rsi+rdi*8]
 * 00000001800D6479: mov     ecx, [r15+rax]
 * 00000001800D647D: cmp     cs:dword_1801FB5D4, ecx
 * 00000001800D6483: jle     loc_1800D657C
 * 00000001800D6489: lea     rcx, dword_1801FB5D4
 * 00000001800D6490: call    sub_18000C5B0
 * 00000001800D6495: cmp     cs:dword_1801FB5D4, r14d
 * 00000001800D649C: jnz     loc_1800D657C
 * 00000001800D64A2: xor     edx, edx
 * 00000001800D64A4: lea     rcx, [rbp+9F60h+var_9F09]
 * 00000001800D64A8: call    sub_1800A8E58
 * 00000001800D64AD: mov     bl, [rax]
 * 00000001800D64AF: call    sub_1800C508C
 * 00000001800D64B4: mov     rdx, rax
 * 00000001800D64B7: mov     r8d, 1A50h
 * 00000001800D64BD: lea     rcx, [rbp+9F60h+var_8E70]
 * 00000001800D64C4: call    sub_1800A8E40
 * 00000001800D64C9: movups  xmm0, xmmword ptr [rax]
 * 00000001800D64CC: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D64D2: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D64D6: mov     r9d, r12d
 * 00000001800D64D9: mov     r8d, r12d
 * 00000001800D64DC: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D64E1: lea     rcx, [rbp+9F60h+var_4910]
 * 00000001800D64E8: call    sub_1800A8E0C
 * 00000001800D64ED: movups  xmm6, xmmword ptr [rax]
 * 00000001800D64F0: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D64F4: call    sub_1800C50FC
 * 00000001800D64F9: mov     r8, rax
 * 00000001800D64FC: mov     r9d, r13d
 * 00000001800D64FF: mov     edx, 1B8h
 * 00000001800D6504: lea     rcx, [rbp+9F60h+var_2A10]; Src
 * 00000001800D650B: call    sub_180088448
 * 00000001800D6510: nop
 * 00000001800D6511: mov     r8, rax
 * 00000001800D6514: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D651B: lea     rcx, [rbp+9F60h+var_2A30]
 * 00000001800D6522: call    sub_18001DD3C
 * 00000001800D6527: nop
 * 00000001800D6528: lea     r8, aVertex; "/Vertex"
 * 00000001800D652F: mov     rdx, rax
 * 00000001800D6532: lea     rcx, [rbp+9F60h+var_8A30]
 * 00000001800D6539: call    sub_18001DC84
 * 00000001800D653E: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D6543: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D6548: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D654D: mov     rcx, rax
 * 00000001800D6550: call    sub_180088528
 * 00000001800D6555: nop
 * 00000001800D6556: lea     rcx, [rbp+9F60h+var_2A30]
 * 00000001800D655D: call    sub_180011570
 * 00000001800D6562: nop
 * 00000001800D6563: lea     rcx, [rbp+9F60h+var_2A10]
 * 00000001800D656A: call    sub_180011570
 * 00000001800D656F: nop
 * 00000001800D6570: lea     rcx, dword_1801FB5D4
 * 00000001800D6577: call    sub_18000C548
 * 00000001800D657C: mov     rax, [rsi+rdi*8]
 * 00000001800D6580: mov     ecx, [r15+rax]
 * 00000001800D6584: cmp     cs:dword_1801FB5D8, ecx
 * 00000001800D658A: jle     loc_1800D6683
 * 00000001800D6590: lea     rcx, dword_1801FB5D8
 * 00000001800D6597: call    sub_18000C5B0
 * 00000001800D659C: cmp     cs:dword_1801FB5D8, r14d
 * 00000001800D65A3: jnz     loc_1800D6683
 * 00000001800D65A9: xor     edx, edx
 * 00000001800D65AB: lea     rcx, [rbp+9F60h+var_9F08]
 * 00000001800D65AF: call    sub_1800A8E58
 * 00000001800D65B4: mov     bl, [rax]
 * 00000001800D65B6: call    sub_1800C508C
 * 00000001800D65BB: mov     rdx, rax
 * 00000001800D65BE: mov     r8d, 1A50h
 * 00000001800D65C4: lea     rcx, [rbp+9F60h+var_8E60]
 * 00000001800D65CB: call    sub_1800A8E40
 * 00000001800D65D0: movups  xmm0, xmmword ptr [rax]
 * 00000001800D65D3: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D65D9: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D65DD: mov     r9d, r12d
 * 00000001800D65E0: mov     r8d, r12d
 * 00000001800D65E3: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D65E8: lea     rcx, [rbp+9F60h+var_48F0]
 * 00000001800D65EF: call    sub_1800A8E0C
 * 00000001800D65F4: movups  xmm6, xmmword ptr [rax]
 * 00000001800D65F7: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D65FB: call    sub_1800C50FC
 * 00000001800D6600: mov     r8, rax
 * 00000001800D6603: mov     r9d, r13d
 * 00000001800D6606: mov     edx, 1BAh
 * 00000001800D660B: lea     rcx, [rbp+9F60h+var_29B0]; Src
 * 00000001800D6612: call    sub_180088448
 * 00000001800D6617: nop
 * 00000001800D6618: mov     r8, rax
 * 00000001800D661B: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D6622: lea     rcx, [rbp+9F60h+var_29D0]
 * 00000001800D6629: call    sub_18001DD3C
 * 00000001800D662E: nop
 * 00000001800D662F: lea     r8, aVertex; "/Vertex"
 * 00000001800D6636: mov     rdx, rax
 * 00000001800D6639: lea     rcx, [rbp+9F60h+var_8A70]
 * 00000001800D6640: call    sub_18001DC84
 * 00000001800D6645: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D664A: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D664F: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D6654: mov     rcx, rax
 * 00000001800D6657: call    sub_180088528
 * 00000001800D665C: nop
 * 00000001800D665D: lea     rcx, [rbp+9F60h+var_29D0]
 * 00000001800D6664: call    sub_180011570
 * 00000001800D6669: nop
 * 00000001800D666A: lea     rcx, [rbp+9F60h+var_29B0]
 * 00000001800D6671: call    sub_180011570
 * 00000001800D6676: nop
 * 00000001800D6677: lea     rcx, dword_1801FB5D8
 * 00000001800D667E: call    sub_18000C548
 * 00000001800D6683: mov     rax, [rsi+rdi*8]
 * 00000001800D6687: mov     ecx, [r15+rax]
 * 00000001800D668B: cmp     cs:dword_1801FB5DC, ecx
 * 00000001800D6691: jle     loc_1800D678A
 * 00000001800D6697: lea     rcx, dword_1801FB5DC
 * 00000001800D669E: call    sub_18000C5B0
 * 00000001800D66A3: cmp     cs:dword_1801FB5DC, r14d
 * 00000001800D66AA: jnz     loc_1800D678A
 * 00000001800D66B0: xor     edx, edx
 * 00000001800D66B2: lea     rcx, [rbp+9F60h+var_9F07]
 * 00000001800D66B6: call    sub_1800A8E58
 * 00000001800D66BB: mov     bl, [rax]
 * 00000001800D66BD: call    sub_1800C507C
 * 00000001800D66C2: mov     rdx, rax
 * 00000001800D66C5: mov     r8d, 1050h
 * 00000001800D66CB: lea     rcx, [rbp+9F60h+var_8E50]
 * 00000001800D66D2: call    sub_1800A8E40
 * 00000001800D66D7: movups  xmm0, xmmword ptr [rax]
 * 00000001800D66DA: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D66E0: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D66E4: mov     r9d, r12d
 * 00000001800D66E7: mov     r8d, r12d
 * 00000001800D66EA: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D66EF: lea     rcx, [rbp+9F60h+var_48D0]
 * 00000001800D66F6: call    sub_1800A8E0C
 * 00000001800D66FB: movups  xmm6, xmmword ptr [rax]
 * 00000001800D66FE: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D6702: call    sub_1800C50FC
 * 00000001800D6707: mov     r8, rax
 * 00000001800D670A: mov     r9d, r13d
 * 00000001800D670D: mov     edx, 1C0h
 * 00000001800D6712: lea     rcx, [rbp+9F60h+var_2950]; Src
 * 00000001800D6719: call    sub_180088448
 * 00000001800D671E: nop
 * 00000001800D671F: mov     r8, rax
 * 00000001800D6722: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D6729: lea     rcx, [rbp+9F60h+var_2970]
 * 00000001800D6730: call    sub_18001DD3C
 * 00000001800D6735: nop
 * 00000001800D6736: lea     r8, aVertex; "/Vertex"
 * 00000001800D673D: mov     rdx, rax
 * 00000001800D6740: lea     rcx, [rbp+9F60h+var_8A90]
 * 00000001800D6747: call    sub_18001DC84
 * 00000001800D674C: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D6751: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D6756: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D675B: mov     rcx, rax
 * 00000001800D675E: call    sub_180088528
 * 00000001800D6763: nop
 * 00000001800D6764: lea     rcx, [rbp+9F60h+var_2970]
 * 00000001800D676B: call    sub_180011570
 * 00000001800D6770: nop
 * 00000001800D6771: lea     rcx, [rbp+9F60h+var_2950]
 * 00000001800D6778: call    sub_180011570
 * 00000001800D677D: nop
 * 00000001800D677E: lea     rcx, dword_1801FB5DC
 * 00000001800D6785: call    sub_18000C548
 * 00000001800D678A: mov     rax, [rsi+rdi*8]
 * 00000001800D678E: mov     ecx, [r15+rax]
 * 00000001800D6792: cmp     cs:dword_1801FB5E0, ecx
 * 00000001800D6798: jle     loc_1800D6891
 * 00000001800D679E: lea     rcx, dword_1801FB5E0
 * 00000001800D67A5: call    sub_18000C5B0
 * 00000001800D67AA: cmp     cs:dword_1801FB5E0, r14d
 * 00000001800D67B1: jnz     loc_1800D6891
 * 00000001800D67B7: xor     edx, edx
 * 00000001800D67B9: lea     rcx, [rbp+9F60h+var_9F06]
 * 00000001800D67BD: call    sub_1800A8E58
 * 00000001800D67C2: mov     bl, [rax]
 * 00000001800D67C4: call    sub_1800C507C
 * 00000001800D67C9: mov     rdx, rax
 * 00000001800D67CC: mov     r8d, 1050h
 * 00000001800D67D2: lea     rcx, [rbp+9F60h+var_8E40]
 * 00000001800D67D9: call    sub_1800A8E40
 * 00000001800D67DE: movups  xmm0, xmmword ptr [rax]
 * 00000001800D67E1: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D67E7: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D67EB: mov     r9d, r12d
 * 00000001800D67EE: mov     r8d, r12d
 * 00000001800D67F1: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D67F6: lea     rcx, [rbp+9F60h+var_48B0]
 * 00000001800D67FD: call    sub_1800A8E0C
 * 00000001800D6802: movups  xmm6, xmmword ptr [rax]
 * 00000001800D6805: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D6809: call    sub_1800C50FC
 * 00000001800D680E: mov     r8, rax
 * 00000001800D6811: mov     r9d, r13d
 * 00000001800D6814: mov     edx, 1C2h
 * 00000001800D6819: lea     rcx, [rbp+9F60h+var_28F0]; Src
 * 00000001800D6820: call    sub_180088448
 * 00000001800D6825: nop
 * 00000001800D6826: mov     r8, rax
 * 00000001800D6829: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D6830: lea     rcx, [rbp+9F60h+var_2910]
 * 00000001800D6837: call    sub_18001DD3C
 * 00000001800D683C: nop
 * 00000001800D683D: lea     r8, aVertex; "/Vertex"
 * 00000001800D6844: mov     rdx, rax
 * 00000001800D6847: lea     rcx, [rbp+9F60h+var_8AD0]
 * 00000001800D684E: call    sub_18001DC84
 * 00000001800D6853: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D6858: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D685D: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D6862: mov     rcx, rax
 * 00000001800D6865: call    sub_180088528
 * 00000001800D686A: nop
 * 00000001800D686B: lea     rcx, [rbp+9F60h+var_2910]
 * 00000001800D6872: call    sub_180011570
 * 00000001800D6877: nop
 * 00000001800D6878: lea     rcx, [rbp+9F60h+var_28F0]
 * 00000001800D687F: call    sub_180011570
 * 00000001800D6884: nop
 * 00000001800D6885: lea     rcx, dword_1801FB5E0
 * 00000001800D688C: call    sub_18000C548
 * 00000001800D6891: mov     rax, [rsi+rdi*8]
 * 00000001800D6895: mov     ecx, [r15+rax]
 * 00000001800D6899: cmp     cs:dword_1801FB5E4, ecx
 * 00000001800D689F: jle     loc_1800D6998
 * 00000001800D68A5: lea     rcx, dword_1801FB5E4
 * 00000001800D68AC: call    sub_18000C5B0
 * 00000001800D68B1: cmp     cs:dword_1801FB5E4, r14d
 * 00000001800D68B8: jnz     loc_1800D6998
 * 00000001800D68BE: xor     edx, edx
 * 00000001800D68C0: lea     rcx, [rbp+9F60h+var_9F05]
 * 00000001800D68C4: call    sub_1800A8E58
 * 00000001800D68C9: mov     bl, [rax]
 * 00000001800D68CB: call    sub_1800C507C
 * 00000001800D68D0: mov     rdx, rax
 * 00000001800D68D3: mov     r8d, 1050h
 * 00000001800D68D9: lea     rcx, [rbp+9F60h+var_8E30]
 * 00000001800D68E0: call    sub_1800A8E40
 * 00000001800D68E5: movups  xmm0, xmmword ptr [rax]
 * 00000001800D68E8: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D68EE: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D68F2: mov     r9d, r12d
 * 00000001800D68F5: mov     r8d, r12d
 * 00000001800D68F8: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D68FD: lea     rcx, [rbp+9F60h+var_4890]
 * 00000001800D6904: call    sub_1800A8E0C
 * 00000001800D6909: movups  xmm6, xmmword ptr [rax]
 * 00000001800D690C: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D6910: call    sub_1800C50FC
 * 00000001800D6915: mov     r8, rax
 * 00000001800D6918: mov     r9d, r13d
 * 00000001800D691B: mov     edx, 1C8h
 * 00000001800D6920: lea     rcx, [rbp+9F60h+var_2890]; Src
 * 00000001800D6927: call    sub_180088448
 * 00000001800D692C: nop
 * 00000001800D692D: mov     r8, rax
 * 00000001800D6930: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D6937: lea     rcx, [rbp+9F60h+var_28B0]
 * 00000001800D693E: call    sub_18001DD3C
 * 00000001800D6943: nop
 * 00000001800D6944: lea     r8, aVertex; "/Vertex"
 * 00000001800D694B: mov     rdx, rax
 * 00000001800D694E: lea     rcx, [rbp+9F60h+var_8AF0]
 * 00000001800D6955: call    sub_18001DC84
 * 00000001800D695A: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D695F: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D6964: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D6969: mov     rcx, rax
 * 00000001800D696C: call    sub_180088528
 * 00000001800D6971: nop
 * 00000001800D6972: lea     rcx, [rbp+9F60h+var_28B0]
 * 00000001800D6979: call    sub_180011570
 * 00000001800D697E: nop
 * 00000001800D697F: lea     rcx, [rbp+9F60h+var_2890]
 * 00000001800D6986: call    sub_180011570
 * 00000001800D698B: nop
 * 00000001800D698C: lea     rcx, dword_1801FB5E4
 * 00000001800D6993: call    sub_18000C548
 * 00000001800D6998: mov     rax, [rsi+rdi*8]
 * 00000001800D699C: mov     ecx, [r15+rax]
 * 00000001800D69A0: cmp     cs:dword_1801FB5E8, ecx
 * 00000001800D69A6: jle     loc_1800D6A9F
 * 00000001800D69AC: lea     rcx, dword_1801FB5E8
 * 00000001800D69B3: call    sub_18000C5B0
 * 00000001800D69B8: cmp     cs:dword_1801FB5E8, r14d
 * 00000001800D69BF: jnz     loc_1800D6A9F
 * 00000001800D69C5: xor     edx, edx
 * 00000001800D69C7: lea     rcx, [rbp+9F60h+var_9F04]
 * 00000001800D69CB: call    sub_1800A8E58
 * 00000001800D69D0: mov     bl, [rax]
 * 00000001800D69D2: call    sub_1800C507C
 * 00000001800D69D7: mov     rdx, rax
 * 00000001800D69DA: mov     r8d, 1050h
 * 00000001800D69E0: lea     rcx, [rbp+9F60h+var_8E20]
 * 00000001800D69E7: call    sub_1800A8E40
 * 00000001800D69EC: movups  xmm0, xmmword ptr [rax]
 * 00000001800D69EF: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D69F5: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D69F9: mov     r9d, r12d
 * 00000001800D69FC: mov     r8d, r12d
 * 00000001800D69FF: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D6A04: lea     rcx, [rbp+9F60h+var_4870]
 * 00000001800D6A0B: call    sub_1800A8E0C
 * 00000001800D6A10: movups  xmm6, xmmword ptr [rax]
 * 00000001800D6A13: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D6A17: call    sub_1800C50FC
 * 00000001800D6A1C: mov     r8, rax
 * 00000001800D6A1F: mov     r9d, r13d
 * 00000001800D6A22: mov     edx, 1CAh
 * 00000001800D6A27: lea     rcx, [rbp+9F60h+var_2830]; Src
 * 00000001800D6A2E: call    sub_180088448
 * 00000001800D6A33: nop
 * 00000001800D6A34: mov     r8, rax
 * 00000001800D6A37: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D6A3E: lea     rcx, [rbp+9F60h+var_2850]
 * 00000001800D6A45: call    sub_18001DD3C
 * 00000001800D6A4A: nop
 * 00000001800D6A4B: lea     r8, aVertex; "/Vertex"
 * 00000001800D6A52: mov     rdx, rax
 * 00000001800D6A55: lea     rcx, [rbp+9F60h+var_8B30]
 * 00000001800D6A5C: call    sub_18001DC84
 * 00000001800D6A61: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D6A66: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D6A6B: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D6A70: mov     rcx, rax
 * 00000001800D6A73: call    sub_180088528
 * 00000001800D6A78: nop
 * 00000001800D6A79: lea     rcx, [rbp+9F60h+var_2850]
 * 00000001800D6A80: call    sub_180011570
 * 00000001800D6A85: nop
 * 00000001800D6A86: lea     rcx, [rbp+9F60h+var_2830]
 * 00000001800D6A8D: call    sub_180011570
 * 00000001800D6A92: nop
 * 00000001800D6A93: lea     rcx, dword_1801FB5E8
 * 00000001800D6A9A: call    sub_18000C548
 * 00000001800D6A9F: mov     rax, [rsi+rdi*8]
 * 00000001800D6AA3: mov     ecx, [r15+rax]
 * 00000001800D6AA7: cmp     cs:dword_1801FB5EC, ecx
 * 00000001800D6AAD: jle     loc_1800D6BA6
 * 00000001800D6AB3: lea     rcx, dword_1801FB5EC
 * 00000001800D6ABA: call    sub_18000C5B0
 * 00000001800D6ABF: cmp     cs:dword_1801FB5EC, r14d
 * 00000001800D6AC6: jnz     loc_1800D6BA6
 * 00000001800D6ACC: xor     edx, edx
 * 00000001800D6ACE: lea     rcx, [rbp+9F60h+var_9F03]
 * 00000001800D6AD2: call    sub_1800A8E58
 * 00000001800D6AD7: mov     bl, [rax]
 * 00000001800D6AD9: call    sub_1800C507C
 * 00000001800D6ADE: mov     rdx, rax
 * 00000001800D6AE1: mov     r8d, 1050h
 * 00000001800D6AE7: lea     rcx, [rbp+9F60h+var_8E10]
 * 00000001800D6AEE: call    sub_1800A8E40
 * 00000001800D6AF3: movups  xmm0, xmmword ptr [rax]
 * 00000001800D6AF6: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D6AFC: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D6B00: mov     r9d, r12d
 * 00000001800D6B03: mov     r8d, r12d
 * 00000001800D6B06: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D6B0B: lea     rcx, [rbp+9F60h+var_4850]
 * 00000001800D6B12: call    sub_1800A8E0C
 * 00000001800D6B17: movups  xmm6, xmmword ptr [rax]
 * 00000001800D6B1A: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D6B1E: call    sub_1800C50FC
 * 00000001800D6B23: mov     r8, rax
 * 00000001800D6B26: mov     r9d, r13d
 * 00000001800D6B29: mov     edx, 1D0h
 * 00000001800D6B2E: lea     rcx, [rbp+9F60h+var_27D0]; Src
 * 00000001800D6B35: call    sub_180088448
 * 00000001800D6B3A: nop
 * 00000001800D6B3B: mov     r8, rax
 * 00000001800D6B3E: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D6B45: lea     rcx, [rbp+9F60h+var_27F0]
 * 00000001800D6B4C: call    sub_18001DD3C
 * 00000001800D6B51: nop
 * 00000001800D6B52: lea     r8, aVertex; "/Vertex"
 * 00000001800D6B59: mov     rdx, rax
 * 00000001800D6B5C: lea     rcx, [rbp+9F60h+var_8B50]
 * 00000001800D6B63: call    sub_18001DC84
 * 00000001800D6B68: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D6B6D: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D6B72: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D6B77: mov     rcx, rax
 * 00000001800D6B7A: call    sub_180088528
 * 00000001800D6B7F: nop
 * 00000001800D6B80: lea     rcx, [rbp+9F60h+var_27F0]
 * 00000001800D6B87: call    sub_180011570
 * 00000001800D6B8C: nop
 * 00000001800D6B8D: lea     rcx, [rbp+9F60h+var_27D0]
 * 00000001800D6B94: call    sub_180011570
 * 00000001800D6B99: nop
 * 00000001800D6B9A: lea     rcx, dword_1801FB5EC
 * 00000001800D6BA1: call    sub_18000C548
 * 00000001800D6BA6: mov     rax, [rsi+rdi*8]
 * 00000001800D6BAA: mov     ecx, [r15+rax]
 * 00000001800D6BAE: cmp     cs:dword_1801FB5F0, ecx
 * 00000001800D6BB4: jle     loc_1800D6CAD
 * 00000001800D6BBA: lea     rcx, dword_1801FB5F0
 * 00000001800D6BC1: call    sub_18000C5B0
 * 00000001800D6BC6: cmp     cs:dword_1801FB5F0, r14d
 * 00000001800D6BCD: jnz     loc_1800D6CAD
 * 00000001800D6BD3: xor     edx, edx
 * 00000001800D6BD5: lea     rcx, [rbp+9F60h+var_9F02]
 * 00000001800D6BD9: call    sub_1800A8E58
 * 00000001800D6BDE: mov     bl, [rax]
 * 00000001800D6BE0: call    sub_1800C507C
 * 00000001800D6BE5: mov     rdx, rax
 * 00000001800D6BE8: mov     r8d, 1050h
 * 00000001800D6BEE: lea     rcx, [rbp+9F60h+var_8E00]
 * 00000001800D6BF5: call    sub_1800A8E40
 * 00000001800D6BFA: movups  xmm0, xmmword ptr [rax]
 * 00000001800D6BFD: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D6C03: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D6C07: mov     r9d, r12d
 * 00000001800D6C0A: mov     r8d, r12d
 * 00000001800D6C0D: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D6C12: lea     rcx, [rbp+9F60h+var_4830]
 * 00000001800D6C19: call    sub_1800A8E0C
 * 00000001800D6C1E: movups  xmm6, xmmword ptr [rax]
 * 00000001800D6C21: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D6C25: call    sub_1800C50FC
 * 00000001800D6C2A: mov     r8, rax
 * 00000001800D6C2D: mov     r9d, r13d
 * 00000001800D6C30: mov     edx, 1D2h
 * 00000001800D6C35: lea     rcx, [rbp+9F60h+var_2770]; Src
 * 00000001800D6C3C: call    sub_180088448
 * 00000001800D6C41: nop
 * 00000001800D6C42: mov     r8, rax
 * 00000001800D6C45: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D6C4C: lea     rcx, [rbp+9F60h+var_2790]
 * 00000001800D6C53: call    sub_18001DD3C
 * 00000001800D6C58: nop
 * 00000001800D6C59: lea     r8, aVertex; "/Vertex"
 * 00000001800D6C60: mov     rdx, rax
 * 00000001800D6C63: lea     rcx, [rbp+9F60h+var_8B90]
 * 00000001800D6C6A: call    sub_18001DC84
 * 00000001800D6C6F: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D6C74: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D6C79: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D6C7E: mov     rcx, rax
 * 00000001800D6C81: call    sub_180088528
 * 00000001800D6C86: nop
 * 00000001800D6C87: lea     rcx, [rbp+9F60h+var_2790]
 * 00000001800D6C8E: call    sub_180011570
 * 00000001800D6C93: nop
 * 00000001800D6C94: lea     rcx, [rbp+9F60h+var_2770]
 * 00000001800D6C9B: call    sub_180011570
 * 00000001800D6CA0: nop
 * 00000001800D6CA1: lea     rcx, dword_1801FB5F0
 * 00000001800D6CA8: call    sub_18000C548
 * 00000001800D6CAD: mov     rax, [rsi+rdi*8]
 * 00000001800D6CB1: mov     ecx, [r15+rax]
 * 00000001800D6CB5: cmp     cs:dword_1801FB5F4, ecx
 * 00000001800D6CBB: jle     loc_1800D6DB4
 * 00000001800D6CC1: lea     rcx, dword_1801FB5F4
 * 00000001800D6CC8: call    sub_18000C5B0
 * 00000001800D6CCD: cmp     cs:dword_1801FB5F4, r14d
 * 00000001800D6CD4: jnz     loc_1800D6DB4
 * 00000001800D6CDA: xor     edx, edx
 * 00000001800D6CDC: lea     rcx, [rbp+9F60h+var_9F01]
 * 00000001800D6CE0: call    sub_1800A8E58
 * 00000001800D6CE5: mov     bl, [rax]
 * 00000001800D6CE7: call    sub_1800C507C
 * 00000001800D6CEC: mov     rdx, rax
 * 00000001800D6CEF: mov     r8d, 1050h
 * 00000001800D6CF5: lea     rcx, [rbp+9F60h+var_8DF0]
 * 00000001800D6CFC: call    sub_1800A8E40
 * 00000001800D6D01: movups  xmm0, xmmword ptr [rax]
 * 00000001800D6D04: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D6D0A: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D6D0E: mov     r9d, r12d
 * 00000001800D6D11: mov     r8d, r12d
 * 00000001800D6D14: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D6D19: lea     rcx, [rbp+9F60h+var_4810]
 * 00000001800D6D20: call    sub_1800A8E0C
 * 00000001800D6D25: movups  xmm6, xmmword ptr [rax]
 * 00000001800D6D28: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D6D2C: call    sub_1800C50FC
 * 00000001800D6D31: mov     r8, rax
 * 00000001800D6D34: mov     r9d, r13d
 * 00000001800D6D37: mov     edx, 1D8h
 * 00000001800D6D3C: lea     rcx, [rbp+9F60h+var_2710]; Src
 * 00000001800D6D43: call    sub_180088448
 * 00000001800D6D48: nop
 * 00000001800D6D49: mov     r8, rax
 * 00000001800D6D4C: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D6D53: lea     rcx, [rbp+9F60h+var_2730]
 * 00000001800D6D5A: call    sub_18001DD3C
 * 00000001800D6D5F: nop
 * 00000001800D6D60: lea     r8, aVertex; "/Vertex"
 * 00000001800D6D67: mov     rdx, rax
 * 00000001800D6D6A: lea     rcx, [rbp+9F60h+var_8BB0]
 * 00000001800D6D71: call    sub_18001DC84
 * 00000001800D6D76: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D6D7B: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D6D80: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D6D85: mov     rcx, rax
 * 00000001800D6D88: call    sub_180088528
 * 00000001800D6D8D: nop
 * 00000001800D6D8E: lea     rcx, [rbp+9F60h+var_2730]
 * 00000001800D6D95: call    sub_180011570
 * 00000001800D6D9A: nop
 * 00000001800D6D9B: lea     rcx, [rbp+9F60h+var_2710]
 * 00000001800D6DA2: call    sub_180011570
 * 00000001800D6DA7: nop
 * 00000001800D6DA8: lea     rcx, dword_1801FB5F4
 * 00000001800D6DAF: call    sub_18000C548
 * 00000001800D6DB4: mov     rax, [rsi+rdi*8]
 * 00000001800D6DB8: mov     ecx, [r15+rax]
 * 00000001800D6DBC: cmp     cs:dword_1801FB5F8, ecx
 * 00000001800D6DC2: jle     loc_1800D6EBB
 * 00000001800D6DC8: lea     rcx, dword_1801FB5F8
 * 00000001800D6DCF: call    sub_18000C5B0
 * 00000001800D6DD4: cmp     cs:dword_1801FB5F8, r14d
 * 00000001800D6DDB: jnz     loc_1800D6EBB
 * 00000001800D6DE1: xor     edx, edx
 * 00000001800D6DE3: lea     rcx, [rbp+9F60h+var_9F00]
 * 00000001800D6DE7: call    sub_1800A8E58
 * 00000001800D6DEC: mov     bl, [rax]
 * 00000001800D6DEE: call    sub_1800C507C
 * 00000001800D6DF3: mov     rdx, rax
 * 00000001800D6DF6: mov     r8d, 1050h
 * 00000001800D6DFC: lea     rcx, [rbp+9F60h+var_8DE0]
 * 00000001800D6E03: call    sub_1800A8E40
 * 00000001800D6E08: movups  xmm0, xmmword ptr [rax]
 * 00000001800D6E0B: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D6E11: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D6E15: mov     r9d, r12d
 * 00000001800D6E18: mov     r8d, r12d
 * 00000001800D6E1B: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D6E20: lea     rcx, [rbp+9F60h+var_47F0]
 * 00000001800D6E27: call    sub_1800A8E0C
 * 00000001800D6E2C: movups  xmm6, xmmword ptr [rax]
 * 00000001800D6E2F: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D6E33: call    sub_1800C50FC
 * 00000001800D6E38: mov     r8, rax
 * 00000001800D6E3B: mov     r9d, r13d
 * 00000001800D6E3E: mov     edx, 1DAh
 * 00000001800D6E43: lea     rcx, [rbp+9F60h+var_26B0]; Src
 * 00000001800D6E4A: call    sub_180088448
 * 00000001800D6E4F: nop
 * 00000001800D6E50: mov     r8, rax
 * 00000001800D6E53: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D6E5A: lea     rcx, [rbp+9F60h+var_26D0]
 * 00000001800D6E61: call    sub_18001DD3C
 * 00000001800D6E66: nop
 * 00000001800D6E67: lea     r8, aVertex; "/Vertex"
 * 00000001800D6E6E: mov     rdx, rax
 * 00000001800D6E71: lea     rcx, [rbp+9F60h+var_8BF0]
 * 00000001800D6E78: call    sub_18001DC84
 * 00000001800D6E7D: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D6E82: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D6E87: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D6E8C: mov     rcx, rax
 * 00000001800D6E8F: call    sub_180088528
 * 00000001800D6E94: nop
 * 00000001800D6E95: lea     rcx, [rbp+9F60h+var_26D0]
 * 00000001800D6E9C: call    sub_180011570
 * 00000001800D6EA1: nop
 * 00000001800D6EA2: lea     rcx, [rbp+9F60h+var_26B0]
 * 00000001800D6EA9: call    sub_180011570
 * 00000001800D6EAE: nop
 * 00000001800D6EAF: lea     rcx, dword_1801FB5F8
 * 00000001800D6EB6: call    sub_18000C548
 * 00000001800D6EBB: mov     rax, [rsi+rdi*8]
 * 00000001800D6EBF: mov     ecx, [r15+rax]
 * 00000001800D6EC3: cmp     cs:dword_1801FB5FC, ecx
 * 00000001800D6EC9: jle     loc_1800D6FC2
 * 00000001800D6ECF: lea     rcx, dword_1801FB5FC
 * 00000001800D6ED6: call    sub_18000C5B0
 * 00000001800D6EDB: cmp     cs:dword_1801FB5FC, r14d
 * 00000001800D6EE2: jnz     loc_1800D6FC2
 * 00000001800D6EE8: xor     edx, edx
 * 00000001800D6EEA: lea     rcx, [rbp+9F60h+var_9EFF]
 * 00000001800D6EEE: call    sub_1800A8E58
 * 00000001800D6EF3: mov     bl, [rax]
 * 00000001800D6EF5: call    sub_1800C508C
 * 00000001800D6EFA: mov     rdx, rax
 * 00000001800D6EFD: mov     r8d, 1A50h
 * 00000001800D6F03: lea     rcx, [rbp+9F60h+var_8DD0]
 * 00000001800D6F0A: call    sub_1800A8E40
 * 00000001800D6F0F: movups  xmm0, xmmword ptr [rax]
 * 00000001800D6F12: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D6F18: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D6F1C: mov     r9d, r12d
 * 00000001800D6F1F: mov     r8d, r12d
 * 00000001800D6F22: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D6F27: lea     rcx, [rbp+9F60h+var_47D0]
 * 00000001800D6F2E: call    sub_1800A8E0C
 * 00000001800D6F33: movups  xmm6, xmmword ptr [rax]
 * 00000001800D6F36: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D6F3A: call    sub_1800C50FC
 * 00000001800D6F3F: mov     r8, rax
 * 00000001800D6F42: mov     r9d, r13d
 * 00000001800D6F45: mov     edx, 1E0h
 * 00000001800D6F4A: lea     rcx, [rbp+9F60h+var_2650]; Src
 * 00000001800D6F51: call    sub_180088448
 * 00000001800D6F56: nop
 * 00000001800D6F57: mov     r8, rax
 * 00000001800D6F5A: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D6F61: lea     rcx, [rbp+9F60h+var_2670]
 * 00000001800D6F68: call    sub_18001DD3C
 * 00000001800D6F6D: nop
 * 00000001800D6F6E: lea     r8, aVertex; "/Vertex"
 * 00000001800D6F75: mov     rdx, rax
 * 00000001800D6F78: lea     rcx, [rbp+9F60h+var_8C10]
 * 00000001800D6F7F: call    sub_18001DC84
 * 00000001800D6F84: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D6F89: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D6F8E: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D6F93: mov     rcx, rax
 * 00000001800D6F96: call    sub_180088528
 * 00000001800D6F9B: nop
 * 00000001800D6F9C: lea     rcx, [rbp+9F60h+var_2670]
 * 00000001800D6FA3: call    sub_180011570
 * 00000001800D6FA8: nop
 * 00000001800D6FA9: lea     rcx, [rbp+9F60h+var_2650]
 * 00000001800D6FB0: call    sub_180011570
 * 00000001800D6FB5: nop
 * 00000001800D6FB6: lea     rcx, dword_1801FB5FC
 * 00000001800D6FBD: call    sub_18000C548
 * 00000001800D6FC2: mov     rax, [rsi+rdi*8]
 * 00000001800D6FC6: mov     ecx, [r15+rax]
 * 00000001800D6FCA: cmp     cs:dword_1801FB600, ecx
 * 00000001800D6FD0: jle     loc_1800D70C9
 * 00000001800D6FD6: lea     rcx, dword_1801FB600
 * 00000001800D6FDD: call    sub_18000C5B0
 * 00000001800D6FE2: cmp     cs:dword_1801FB600, r14d
 * 00000001800D6FE9: jnz     loc_1800D70C9
 * 00000001800D6FEF: xor     edx, edx
 * 00000001800D6FF1: lea     rcx, [rbp+9F60h+var_9EFE]
 * 00000001800D6FF5: call    sub_1800A8E58
 * 00000001800D6FFA: mov     bl, [rax]
 * 00000001800D6FFC: call    sub_1800C508C
 * 00000001800D7001: mov     rdx, rax
 * 00000001800D7004: mov     r8d, 1A50h
 * 00000001800D700A: lea     rcx, [rbp+9F60h+var_8DC0]
 * 00000001800D7011: call    sub_1800A8E40
 * 00000001800D7016: movups  xmm0, xmmword ptr [rax]
 * 00000001800D7019: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D701F: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D7023: mov     r9d, r12d
 * 00000001800D7026: mov     r8d, r12d
 * 00000001800D7029: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D702E: lea     rcx, [rbp+9F60h+var_47B0]
 * 00000001800D7035: call    sub_1800A8E0C
 * 00000001800D703A: movups  xmm6, xmmword ptr [rax]
 * 00000001800D703D: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D7041: call    sub_1800C50FC
 * 00000001800D7046: mov     r8, rax
 * 00000001800D7049: mov     r9d, r13d
 * 00000001800D704C: mov     edx, 1E2h
 * 00000001800D7051: lea     rcx, [rbp+9F60h+var_25F0]; Src
 * 00000001800D7058: call    sub_180088448
 * 00000001800D705D: nop
 * 00000001800D705E: mov     r8, rax
 * 00000001800D7061: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D7068: lea     rcx, [rbp+9F60h+var_2610]
 * 00000001800D706F: call    sub_18001DD3C
 * 00000001800D7074: nop
 * 00000001800D7075: lea     r8, aVertex; "/Vertex"
 * 00000001800D707C: mov     rdx, rax
 * 00000001800D707F: lea     rcx, [rbp+9F60h+var_8C50]
 * 00000001800D7086: call    sub_18001DC84
 * 00000001800D708B: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D7090: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D7095: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D709A: mov     rcx, rax
 * 00000001800D709D: call    sub_180088528
 * 00000001800D70A2: nop
 * 00000001800D70A3: lea     rcx, [rbp+9F60h+var_2610]
 * 00000001800D70AA: call    sub_180011570
 * 00000001800D70AF: nop
 * 00000001800D70B0: lea     rcx, [rbp+9F60h+var_25F0]
 * 00000001800D70B7: call    sub_180011570
 * 00000001800D70BC: nop
 * 00000001800D70BD: lea     rcx, dword_1801FB600
 * 00000001800D70C4: call    sub_18000C548
 * 00000001800D70C9: mov     rax, [rsi+rdi*8]
 * 00000001800D70CD: mov     ecx, [r15+rax]
 * 00000001800D70D1: cmp     cs:dword_1801FB604, ecx
 * 00000001800D70D7: jle     loc_1800D71D0
 * 00000001800D70DD: lea     rcx, dword_1801FB604
 * 00000001800D70E4: call    sub_18000C5B0
 * 00000001800D70E9: cmp     cs:dword_1801FB604, r14d
 * 00000001800D70F0: jnz     loc_1800D71D0
 * 00000001800D70F6: xor     edx, edx
 * 00000001800D70F8: lea     rcx, [rbp+9F60h+var_9EFD]
 * 00000001800D70FC: call    sub_1800A8E58
 * 00000001800D7101: mov     bl, [rax]
 * 00000001800D7103: call    sub_1800C508C
 * 00000001800D7108: mov     rdx, rax
 * 00000001800D710B: mov     r8d, 1A50h
 * 00000001800D7111: lea     rcx, [rbp+9F60h+var_8DB0]
 * 00000001800D7118: call    sub_1800A8E40
 * 00000001800D711D: movups  xmm0, xmmword ptr [rax]
 * 00000001800D7120: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D7126: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D712A: mov     r9d, r12d
 * 00000001800D712D: mov     r8d, r12d
 * 00000001800D7130: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D7135: lea     rcx, [rbp+9F60h+var_4790]
 * 00000001800D713C: call    sub_1800A8E0C
 * 00000001800D7141: movups  xmm6, xmmword ptr [rax]
 * 00000001800D7144: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D7148: call    sub_1800C50FC
 * 00000001800D714D: mov     r8, rax
 * 00000001800D7150: mov     r9d, r13d
 * 00000001800D7153: mov     edx, 1E8h
 * 00000001800D7158: lea     rcx, [rbp+9F60h+var_2590]; Src
 * 00000001800D715F: call    sub_180088448
 * 00000001800D7164: nop
 * 00000001800D7165: mov     r8, rax
 * 00000001800D7168: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D716F: lea     rcx, [rbp+9F60h+var_25B0]
 * 00000001800D7176: call    sub_18001DD3C
 * 00000001800D717B: nop
 * 00000001800D717C: lea     r8, aVertex; "/Vertex"
 * 00000001800D7183: mov     rdx, rax
 * 00000001800D7186: lea     rcx, [rbp+9F60h+var_8C70]
 * 00000001800D718D: call    sub_18001DC84
 * 00000001800D7192: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D7197: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D719C: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D71A1: mov     rcx, rax
 * 00000001800D71A4: call    sub_180088528
 * 00000001800D71A9: nop
 * 00000001800D71AA: lea     rcx, [rbp+9F60h+var_25B0]
 * 00000001800D71B1: call    sub_180011570
 * 00000001800D71B6: nop
 * 00000001800D71B7: lea     rcx, [rbp+9F60h+var_2590]
 * 00000001800D71BE: call    sub_180011570
 * 00000001800D71C3: nop
 * 00000001800D71C4: lea     rcx, dword_1801FB604
 * 00000001800D71CB: call    sub_18000C548
 * 00000001800D71D0: mov     rax, [rsi+rdi*8]
 * 00000001800D71D4: mov     ecx, [r15+rax]
 * 00000001800D71D8: cmp     cs:dword_1801FB608, ecx
 * 00000001800D71DE: jle     loc_1800D72D7
 * 00000001800D71E4: lea     rcx, dword_1801FB608
 * 00000001800D71EB: call    sub_18000C5B0
 * 00000001800D71F0: cmp     cs:dword_1801FB608, r14d
 * 00000001800D71F7: jnz     loc_1800D72D7
 * 00000001800D71FD: xor     edx, edx
 * 00000001800D71FF: lea     rcx, [rbp+9F60h+var_9EFC]
 * 00000001800D7203: call    sub_1800A8E58
 * 00000001800D7208: mov     bl, [rax]
 * 00000001800D720A: call    sub_1800C508C
 * 00000001800D720F: mov     rdx, rax
 * 00000001800D7212: mov     r8d, 1A50h
 * 00000001800D7218: lea     rcx, [rbp+9F60h+var_8DA0]
 * 00000001800D721F: call    sub_1800A8E40
 * 00000001800D7224: movups  xmm0, xmmword ptr [rax]
 * 00000001800D7227: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D722D: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D7231: mov     r9d, r12d
 * 00000001800D7234: mov     r8d, r12d
 * 00000001800D7237: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D723C: lea     rcx, [rbp+9F60h+var_4770]
 * 00000001800D7243: call    sub_1800A8E0C
 * 00000001800D7248: movups  xmm6, xmmword ptr [rax]
 * 00000001800D724B: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D724F: call    sub_1800C50FC
 * 00000001800D7254: mov     r8, rax
 * 00000001800D7257: mov     r9d, r13d
 * 00000001800D725A: mov     edx, 1EAh
 * 00000001800D725F: lea     rcx, [rbp+9F60h+var_2530]; Src
 * 00000001800D7266: call    sub_180088448
 * 00000001800D726B: nop
 * 00000001800D726C: mov     r8, rax
 * 00000001800D726F: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D7276: lea     rcx, [rbp+9F60h+var_2550]
 * 00000001800D727D: call    sub_18001DD3C
 * 00000001800D7282: nop
 * 00000001800D7283: lea     r8, aVertex; "/Vertex"
 * 00000001800D728A: mov     rdx, rax
 * 00000001800D728D: lea     rcx, [rbp+9F60h+var_8CB0]
 * 00000001800D7294: call    sub_18001DC84
 * 00000001800D7299: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D729E: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D72A3: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D72A8: mov     rcx, rax
 * 00000001800D72AB: call    sub_180088528
 * 00000001800D72B0: nop
 * 00000001800D72B1: lea     rcx, [rbp+9F60h+var_2550]
 * 00000001800D72B8: call    sub_180011570
 * 00000001800D72BD: nop
 * 00000001800D72BE: lea     rcx, [rbp+9F60h+var_2530]
 * 00000001800D72C5: call    sub_180011570
 * 00000001800D72CA: nop
 * 00000001800D72CB: lea     rcx, dword_1801FB608
 * 00000001800D72D2: call    sub_18000C548
 * 00000001800D72D7: mov     rax, [rsi+rdi*8]
 * 00000001800D72DB: mov     ecx, [r15+rax]
 * 00000001800D72DF: cmp     cs:dword_1801FB60C, ecx
 * 00000001800D72E5: jle     loc_1800D73DE
 * 00000001800D72EB: lea     rcx, dword_1801FB60C
 * 00000001800D72F2: call    sub_18000C5B0
 * 00000001800D72F7: cmp     cs:dword_1801FB60C, r14d
 * 00000001800D72FE: jnz     loc_1800D73DE
 * 00000001800D7304: xor     edx, edx
 * 00000001800D7306: lea     rcx, [rbp+9F60h+var_9EFB]
 * 00000001800D730A: call    sub_1800A8E58
 * 00000001800D730F: mov     bl, [rax]
 * 00000001800D7311: call    sub_1800C508C
 * 00000001800D7316: mov     rdx, rax
 * 00000001800D7319: mov     r8d, 1A50h
 * 00000001800D731F: lea     rcx, [rbp+9F60h+var_8D90]
 * 00000001800D7326: call    sub_1800A8E40
 * 00000001800D732B: movups  xmm0, xmmword ptr [rax]
 * 00000001800D732E: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D7334: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D7338: mov     r9d, r12d
 * 00000001800D733B: mov     r8d, r12d
 * 00000001800D733E: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D7343: lea     rcx, [rbp+9F60h+var_4750]
 * 00000001800D734A: call    sub_1800A8E0C
 * 00000001800D734F: movups  xmm6, xmmword ptr [rax]
 * 00000001800D7352: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D7356: call    sub_1800C50FC
 * 00000001800D735B: mov     r8, rax
 * 00000001800D735E: mov     r9d, r13d
 * 00000001800D7361: mov     edx, 1F0h
 * 00000001800D7366: lea     rcx, [rbp+9F60h+var_24D0]; Src
 * 00000001800D736D: call    sub_180088448
 * 00000001800D7372: nop
 * 00000001800D7373: mov     r8, rax
 * 00000001800D7376: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D737D: lea     rcx, [rbp+9F60h+var_24F0]
 * 00000001800D7384: call    sub_18001DD3C
 * 00000001800D7389: nop
 * 00000001800D738A: lea     r8, aVertex; "/Vertex"
 * 00000001800D7391: mov     rdx, rax
 * 00000001800D7394: lea     rcx, [rbp+9F60h+var_8CD0]
 * 00000001800D739B: call    sub_18001DC84
 * 00000001800D73A0: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D73A5: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D73AA: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D73AF: mov     rcx, rax
 * 00000001800D73B2: call    sub_180088528
 * 00000001800D73B7: nop
 * 00000001800D73B8: lea     rcx, [rbp+9F60h+var_24F0]
 * 00000001800D73BF: call    sub_180011570
 * 00000001800D73C4: nop
 * 00000001800D73C5: lea     rcx, [rbp+9F60h+var_24D0]
 * 00000001800D73CC: call    sub_180011570
 * 00000001800D73D1: nop
 * 00000001800D73D2: lea     rcx, dword_1801FB60C
 * 00000001800D73D9: call    sub_18000C548
 * 00000001800D73DE: mov     rax, [rsi+rdi*8]
 * 00000001800D73E2: mov     ecx, [r15+rax]
 * 00000001800D73E6: cmp     cs:dword_1801FB610, ecx
 * 00000001800D73EC: jle     loc_1800D74E5
 * 00000001800D73F2: lea     rcx, dword_1801FB610
 * 00000001800D73F9: call    sub_18000C5B0
 * 00000001800D73FE: cmp     cs:dword_1801FB610, r14d
 * 00000001800D7405: jnz     loc_1800D74E5
 * 00000001800D740B: xor     edx, edx
 * 00000001800D740D: lea     rcx, [rbp+9F60h+var_9EFA]
 * 00000001800D7411: call    sub_1800A8E58
 * 00000001800D7416: mov     bl, [rax]
 * 00000001800D7418: call    sub_1800C508C
 * 00000001800D741D: mov     rdx, rax
 * 00000001800D7420: mov     r8d, 1A50h
 * 00000001800D7426: lea     rcx, [rbp+9F60h+var_8D80]
 * 00000001800D742D: call    sub_1800A8E40
 * 00000001800D7432: movups  xmm0, xmmword ptr [rax]
 * 00000001800D7435: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D743B: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D743F: mov     r9d, r12d
 * 00000001800D7442: mov     r8d, r12d
 * 00000001800D7445: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D744A: lea     rcx, [rbp+9F60h+var_4730]
 * 00000001800D7451: call    sub_1800A8E0C
 * 00000001800D7456: movups  xmm6, xmmword ptr [rax]
 * 00000001800D7459: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D745D: call    sub_1800C50FC
 * 00000001800D7462: mov     r8, rax
 * 00000001800D7465: mov     r9d, r13d
 * 00000001800D7468: mov     edx, 1F2h
 * 00000001800D746D: lea     rcx, [rbp+9F60h+var_2470]; Src
 * 00000001800D7474: call    sub_180088448
 * 00000001800D7479: nop
 * 00000001800D747A: mov     r8, rax
 * 00000001800D747D: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D7484: lea     rcx, [rbp+9F60h+var_2490]
 * 00000001800D748B: call    sub_18001DD3C
 * 00000001800D7490: nop
 * 00000001800D7491: lea     r8, aVertex; "/Vertex"
 * 00000001800D7498: mov     rdx, rax
 * 00000001800D749B: lea     rcx, [rbp+9F60h+var_8D10]
 * 00000001800D74A2: call    sub_18001DC84
 * 00000001800D74A7: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D74AC: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D74B1: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D74B6: mov     rcx, rax
 * 00000001800D74B9: call    sub_180088528
 * 00000001800D74BE: nop
 * 00000001800D74BF: lea     rcx, [rbp+9F60h+var_2490]
 * 00000001800D74C6: call    sub_180011570
 * 00000001800D74CB: nop
 * 00000001800D74CC: lea     rcx, [rbp+9F60h+var_2470]
 * 00000001800D74D3: call    sub_180011570
 * 00000001800D74D8: nop
 * 00000001800D74D9: lea     rcx, dword_1801FB610
 * 00000001800D74E0: call    sub_18000C548
 * 00000001800D74E5: mov     rax, [rsi+rdi*8]
 * 00000001800D74E9: mov     ecx, [r15+rax]
 * 00000001800D74ED: cmp     cs:dword_1801FB614, ecx
 * 00000001800D74F3: jle     loc_1800D75EC
 * 00000001800D74F9: lea     rcx, dword_1801FB614
 * 00000001800D7500: call    sub_18000C5B0
 * 00000001800D7505: cmp     cs:dword_1801FB614, r14d
 * 00000001800D750C: jnz     loc_1800D75EC
 * 00000001800D7512: xor     edx, edx
 * 00000001800D7514: lea     rcx, [rbp+9F60h+var_9EF9]
 * 00000001800D7518: call    sub_1800A8E58
 * 00000001800D751D: mov     bl, [rax]
 * 00000001800D751F: call    sub_1800C508C
 * 00000001800D7524: mov     rdx, rax
 * 00000001800D7527: mov     r8d, 1A50h
 * 00000001800D752D: lea     rcx, [rbp+9F60h+var_8D70]
 * 00000001800D7534: call    sub_1800A8E40
 * 00000001800D7539: movups  xmm0, xmmword ptr [rax]
 * 00000001800D753C: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D7542: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D7546: mov     r9d, r12d
 * 00000001800D7549: mov     r8d, r12d
 * 00000001800D754C: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D7551: lea     rcx, [rbp+9F60h+var_4710]
 * 00000001800D7558: call    sub_1800A8E0C
 * 00000001800D755D: movups  xmm6, xmmword ptr [rax]
 * 00000001800D7560: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D7564: call    sub_1800C50FC
 * 00000001800D7569: mov     r8, rax
 * 00000001800D756C: mov     r9d, r13d
 * 00000001800D756F: mov     edx, 1F8h
 * 00000001800D7574: lea     rcx, [rbp+9F60h+var_2410]; Src
 * 00000001800D757B: call    sub_180088448
 * 00000001800D7580: nop
 * 00000001800D7581: mov     r8, rax
 * 00000001800D7584: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D758B: lea     rcx, [rbp+9F60h+var_2430]
 * 00000001800D7592: call    sub_18001DD3C
 * 00000001800D7597: nop
 * 00000001800D7598: lea     r8, aVertex; "/Vertex"
 * 00000001800D759F: mov     rdx, rax
 * 00000001800D75A2: lea     rcx, [rbp+9F60h+var_8D30]
 * 00000001800D75A9: call    sub_18001DC84
 * 00000001800D75AE: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D75B3: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D75B8: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D75BD: mov     rcx, rax
 * 00000001800D75C0: call    sub_180088528
 * 00000001800D75C5: nop
 * 00000001800D75C6: lea     rcx, [rbp+9F60h+var_2430]
 * 00000001800D75CD: call    sub_180011570
 * 00000001800D75D2: nop
 * 00000001800D75D3: lea     rcx, [rbp+9F60h+var_2410]
 * 00000001800D75DA: call    sub_180011570
 * 00000001800D75DF: nop
 * 00000001800D75E0: lea     rcx, dword_1801FB614
 * 00000001800D75E7: call    sub_18000C548
 * 00000001800D75EC: mov     rax, [rsi+rdi*8]
 * 00000001800D75F0: mov     ecx, [r15+rax]
 * 00000001800D75F4: cmp     cs:dword_1801FB618, ecx
 * 00000001800D75FA: jle     loc_1800D76F3
 * 00000001800D7600: lea     rcx, dword_1801FB618
 * 00000001800D7607: call    sub_18000C5B0
 * 00000001800D760C: cmp     cs:dword_1801FB618, r14d
 * 00000001800D7613: jnz     loc_1800D76F3
 * 00000001800D7619: xor     edx, edx
 * 00000001800D761B: lea     rcx, [rbp+9F60h+var_9EF8]
 * 00000001800D761F: call    sub_1800A8E58
 * 00000001800D7624: mov     bl, [rax]
 * 00000001800D7626: call    sub_1800C508C
 * 00000001800D762B: mov     rdx, rax
 * 00000001800D762E: mov     r8d, 1A50h
 * 00000001800D7634: lea     rcx, [rbp+9F60h+var_8D60]
 * 00000001800D763B: call    sub_1800A8E40
 * 00000001800D7640: movups  xmm0, xmmword ptr [rax]
 * 00000001800D7643: movdqu  [rsp+0A060h+var_A030], xmm0
 * 00000001800D7649: mov     [rsp+0A060h+var_A040], bl
 * 00000001800D764D: mov     r9d, r12d
 * 00000001800D7650: mov     r8d, r12d
 * 00000001800D7653: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D7658: lea     rcx, [rbp+9F60h+var_46F0]
 * 00000001800D765F: call    sub_1800A8E0C
 * 00000001800D7664: movups  xmm6, xmmword ptr [rax]
 * 00000001800D7667: movups  xmm7, xmmword ptr [rax+10h]
 * 00000001800D766B: call    sub_1800C50FC
 * 00000001800D7670: mov     r8, rax
 * 00000001800D7673: mov     r9d, r13d
 * 00000001800D7676: mov     edx, 1FAh
 * 00000001800D767B: lea     rcx, [rbp+9F60h+var_23B0]; Src
 * 00000001800D7682: call    sub_180088448
 * 00000001800D7687: nop
 * 00000001800D7688: mov     r8, rax
 * 00000001800D768B: lea     rdx, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800D7692: lea     rcx, [rbp+9F60h+var_23D0]
 * 00000001800D7699: call    sub_18001DD3C
 * 00000001800D769E: nop
 * 00000001800D769F: lea     r8, aVertex; "/Vertex"
 * 00000001800D76A6: mov     rdx, rax
 * 00000001800D76A9: lea     rcx, [rbp+9F60h+var_6A30]
 * 00000001800D76B0: call    sub_18001DC84
 * 00000001800D76B5: movaps  [rsp+0A060h+var_A030], xmm6
 * 00000001800D76BA: movaps  [rsp+0A060h+var_A020], xmm7
 * 00000001800D76BF: lea     rdx, [rsp+0A060h+var_A030]
 * 00000001800D76C4: mov     rcx, rax
 * 00000001800D76C7: call    sub_180088528
 * 00000001800D76CC: nop
 * 00000001800D76CD: lea     rcx, [rbp+9F60h+var_23D0]
 * 00000001800D76D4: call    sub_180011570
 * 00000001800D76D9: nop
 * 00000001800D76DA: lea     rcx, [rbp+9F60h+var_23B0]
 * 00000001800D76E1: call    sub_180011570
 * 00000001800D76E6: nop
 * 00000001800D76E7: lea     rcx, dword_1801FB618
 * 00000001800D76EE: call    sub_18000C548
 * 00000001800D76F3: xor     eax, eax
 * 00000001800D76F5: mov     rcx, [rbp+9F60h+var_50]
 * 00000001800D76FC: xor     rcx, rsp; StackCookie
 * 00000001800D76FF: call    __security_check_cookie
 * 00000001800D7704: lea     r11, [rsp+0A060h+var_20]
 * 00000001800D770C: mov     rbx, [r11+30h]
 * 00000001800D7710: mov     rsi, [r11+38h]
 * 00000001800D7714: mov     rdi, [r11+40h]
 * 00000001800D7718: movaps  xmm6, xmmword ptr [r11-10h]
 * 00000001800D771D: movaps  xmm7, xmmword ptr [r11-20h]
 * 00000001800D7722: mov     rsp, r11
 * 00000001800D7725: pop     r15
 * 00000001800D7727: pop     r14
 * 00000001800D7729: pop     r13
 * 00000001800D772B: pop     r12
 * 00000001800D772D: pop     rbp
 * 00000001800D772E: retn
 */
