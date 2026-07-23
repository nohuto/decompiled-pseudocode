/*
 * XREFs of sub_140433880 @ 0x140433880
 * Callers:
 *     sub_140AB5EC0 @ 0x140AB5EC0 (sub_140AB5EC0.c)
 * Callees:
 *     sub_140433880 @ 0x140433880 (sub_140433880.c)
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140433880 @ 0x140433880
 * Reason: Hex-Rays returned no pseudocode for 0x140433880
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140433880: cmp     [rsp+arg_0], 23h ; '#'
 * 0000000140433886: jz      loc_140433B37
 * 000000014043388C: test    cs:byte_140E01840, 1
 * 0000000140433893: jnz     short loc_140433898
 * 0000000140433895: swapgs
 * 0000000140433898: lfence
 * 000000014043389B: mov     rcx, gs:9828h
 * 00000001404338A4: test    rcx, rcx
 * 00000001404338A7: jz      short loc_1404338B1
 * 00000001404338A9: rstorssp qword ptr [rcx]
 * 00000001404338AD: saveprevssp
 * 00000001404338B1: mov     rcx, r10
 * 00000001404338B4: sub     rsp, 8
 * 00000001404338B8: push    rbp
 * 00000001404338B9: sub     rsp, 158h
 * 00000001404338C0: lea     rbp, [rsp+168h+var_E8]
 * 00000001404338C8: mov     [rbp+0C0h], rbx
 * 00000001404338CF: mov     [rbp+0C8h], rdi
 * 00000001404338D6: mov     [rbp+0D0h], rsi
 * 00000001404338DD: test    byte ptr cs:dword_140D069F0, 0FFh
 * 00000001404338E4: jz      short loc_1404338F2
 * 00000001404338E6: test    byte ptr [rbp+0F0h], 1
 * 00000001404338ED: jz      short loc_1404338F2
 * 00000001404338EF: stac
 * 00000001404338F2: mov     [rbp-50h], rax
 * 00000001404338F6: mov     [rbp-48h], rcx
 * 00000001404338FA: mov     [rbp-40h], rdx
 * 00000001404338FE: mov     rcx, gs:188h
 * 0000000140433907: mov     rcx, [rcx+220h]
 * 000000014043390E: mov     rcx, [rcx+9E0h]
 * 0000000140433915: mov     gs:858h, rcx
 * 000000014043391E: mov     cx, gs:850h
 * 0000000140433927: mov     gs:852h, cx
 * 0000000140433930: mov     cx, gs:860h
 * 0000000140433939: mov     gs:854h, cx
 * 0000000140433942: movzx   eax, word ptr gs:866h
 * 000000014043394B: cmp     gs:864h, ax
 * 0000000140433954: jz      short loc_140433968
 * 0000000140433956: mov     gs:864h, ax
 * 000000014043395F: mov     ecx, 48h ; 'H'
 * 0000000140433964: xor     edx, edx
 * 0000000140433966: wrmsr
 * 0000000140433968: movzx   edx, word ptr gs:860h
 * 0000000140433971: test    edx, 8
 * 0000000140433977: jz      short loc_140433990
 * 0000000140433979: mov     eax, 1
 * 000000014043397E: xor     edx, edx
 * 0000000140433980: mov     ecx, 49h ; 'I'
 * 0000000140433985: wrmsr
 * 0000000140433987: movzx   edx, word ptr gs:860h
 * 0000000140433990: test    edx, 2
 * 0000000140433996: jz      loc_140433AD3
 * 000000014043399C: call    loc_140433AAF
 * 00000001404339A1: add     rsp, 8
 * 00000001404339A5: call    loc_140433AB8
 * 00000001404339AA: add     rsp, 8
 * 00000001404339AE: call    loc_1404339A1
 * 00000001404339B3: add     rsp, 8
 * 00000001404339B7: call    loc_1404339AA
 * 00000001404339BC: add     rsp, 8
 * 00000001404339C0: call    loc_1404339B3
 * 00000001404339C5: add     rsp, 8
 * 00000001404339C9: call    loc_1404339BC
 * 00000001404339CE: add     rsp, 8
 * 00000001404339D2: call    loc_1404339C5
 * 00000001404339D7: add     rsp, 8
 * 00000001404339DB: call    loc_1404339CE
 * 00000001404339E0: add     rsp, 8
 * 00000001404339E4: call    loc_1404339D7
 * 00000001404339E9: add     rsp, 8
 * 00000001404339ED: call    loc_1404339E0
 * 00000001404339F2: add     rsp, 8
 * 00000001404339F6: call    loc_1404339E9
 * 00000001404339FB: add     rsp, 8
 * 00000001404339FF: call    loc_1404339F2
 * 0000000140433A04: add     rsp, 8
 * 0000000140433A08: call    loc_1404339FB
 * 0000000140433A0D: add     rsp, 8
 * 0000000140433A11: call    loc_140433A04
 * 0000000140433A16: add     rsp, 8
 * 0000000140433A1A: call    loc_140433A0D
 * 0000000140433A1F: add     rsp, 8
 * 0000000140433A23: call    loc_140433A16
 * 0000000140433A28: add     rsp, 8
 * 0000000140433A2C: call    loc_140433A1F
 * 0000000140433A31: add     rsp, 8
 * 0000000140433A35: call    loc_140433A28
 * 0000000140433A3A: add     rsp, 8
 * 0000000140433A3E: call    loc_140433A31
 * 0000000140433A43: add     rsp, 8
 * 0000000140433A47: call    loc_140433A3A
 * 0000000140433A4C: add     rsp, 8
 * 0000000140433A50: call    loc_140433A43
 * 0000000140433A55: add     rsp, 8
 * 0000000140433A59: call    loc_140433A4C
 * 0000000140433A5E: add     rsp, 8
 * 0000000140433A62: call    loc_140433A55
 * 0000000140433A67: add     rsp, 8
 * 0000000140433A6B: call    loc_140433A5E
 * 0000000140433A70: add     rsp, 8
 * 0000000140433A74: call    loc_140433A67
 * 0000000140433A79: add     rsp, 8
 * 0000000140433A7D: call    loc_140433A70
 * 0000000140433A82: add     rsp, 8
 * 0000000140433A86: call    loc_140433A79
 * 0000000140433A8B: add     rsp, 8
 * 0000000140433A8F: call    loc_140433A82
 * 0000000140433A94: add     rsp, 8
 * 0000000140433A98: call    loc_140433A8B
 * 0000000140433A9D: add     rsp, 8
 * 0000000140433AA1: call    loc_140433A94
 * 0000000140433AA6: add     rsp, 8
 * 0000000140433AAA: call    loc_140433A9D
 * 0000000140433AAF: add     rsp, 8
 * 0000000140433AB3: call    loc_140433AA6
 * 0000000140433AB8: add     rsp, 8
 * 0000000140433ABC: mov     eax, 0DADAh
 * 0000000140433AC1: test    byte ptr gs:862h, 8
 * 0000000140433ACA: jz      short loc_140433AD3
 * 0000000140433ACC: mov     al, 20h ; ' '
 * 0000000140433ACE: incsspq rax
 * 0000000140433AD3: test    edx, 200h
 * 0000000140433AD9: jz      short loc_140433AE0
 * 0000000140433ADB: call    sub_1404357C0
 * 0000000140433AE0: lfence
 * 0000000140433AE3: mov     byte ptr gs:856h, 0
 * 0000000140433AEC: jmp     loc_140434279
 * 0000000140433AF1: retn
 */
