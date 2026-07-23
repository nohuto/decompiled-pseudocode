/*
 * XREFs of sub_140432EC0 @ 0x140432EC0
 * Callers:
 *     sub_140AB5D40 @ 0x140AB5D40 (sub_140AB5D40.c)
 * Callees:
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_140432EC0 @ 0x140432EC0 (sub_140432EC0.c)
 *     sub_140435300 @ 0x140435300 (sub_140435300.c)
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140432EC0 @ 0x140432EC0
 * Reason: Hex-Rays returned no pseudocode for 0x140432EC0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140432EC0: sub     qword ptr [rsp+0], 2
 * 0000000140432EC5: cmp     [rsp+arg_0], 23h ; '#'
 * 0000000140432ECB: jnz     short loc_140432ED2
 * 0000000140432ECD: and     dword ptr [rsp+4], 0
 * 0000000140432ED2: sub     rsp, 8
 * 0000000140432ED6: push    rbp
 * 0000000140432ED7: sub     rsp, 158h
 * 0000000140432EDE: lea     rbp, [rsp+168h+var_E8]
 * 0000000140432EE6: mov     byte ptr [rbp-55h], 1
 * 0000000140432EEA: mov     [rbp-50h], rax
 * 0000000140432EEE: mov     [rbp-48h], rcx
 * 0000000140432EF2: mov     [rbp-40h], rdx
 * 0000000140432EF6: mov     [rbp-38h], r8
 * 0000000140432EFA: mov     [rbp-30h], r9
 * 0000000140432EFE: mov     [rbp-28h], r10
 * 0000000140432F02: mov     [rbp-20h], r11
 * 0000000140432F06: test    byte ptr [rbp+0F0h], 1
 * 0000000140432F0D: jnz     short loc_140432F49
 * 0000000140432F0F: xor     edx, edx
 * 0000000140432F11: rdsspq  rdx
 * 0000000140432F16: mov     [rbp+58h], rdx
 * 0000000140432F1A: lfence
 * 0000000140432F1D: test    word ptr gs:860h, 1
 * 0000000140432F28: jnz     short loc_140432F32
 * 0000000140432F2A: lfence
 * 0000000140432F2D: jmp     loc_140433191
 * 0000000140432F32: movzx   eax, word ptr gs:864h
 * 0000000140432F3B: mov     ecx, 48h ; 'H'
 * 0000000140432F40: xor     edx, edx
 * 0000000140432F42: wrmsr
 * 0000000140432F44: jmp     loc_140433191
 * 0000000140432F49: test    cs:byte_140E01840, 1
 * 0000000140432F50: jnz     short loc_140432F55
 * 0000000140432F52: swapgs
 * 0000000140432F55: lfence
 * 0000000140432F58: mov     rcx, gs:9828h
 * 0000000140432F61: test    rcx, rcx
 * 0000000140432F64: jz      short loc_140432F85
 * 0000000140432F66: rdsspq  rdx
 * 0000000140432F6B: mov     r10, gs:9820h
 * 0000000140432F74: add     r10, 8
 * 0000000140432F78: cmp     rdx, r10
 * 0000000140432F7B: jnz     short loc_140432F85
 * 0000000140432F7D: rstorssp qword ptr [rcx]
 * 0000000140432F81: saveprevssp
 * 0000000140432F85: mov     r10, gs:188h
 * 0000000140432F8E: mov     rcx, gs:188h
 * 0000000140432F97: mov     rcx, [rcx+220h]
 * 0000000140432F9E: mov     rcx, [rcx+9E0h]
 * 0000000140432FA5: mov     gs:858h, rcx
 * 0000000140432FAE: mov     cx, gs:850h
 * 0000000140432FB7: mov     gs:852h, cx
 * 0000000140432FC0: mov     cx, gs:860h
 * 0000000140432FC9: mov     gs:854h, cx
 * 0000000140432FD2: movzx   eax, word ptr gs:866h
 * 0000000140432FDB: cmp     gs:864h, ax
 * 0000000140432FE4: jz      short loc_140432FF8
 * 0000000140432FE6: mov     gs:864h, ax
 * 0000000140432FEF: mov     ecx, 48h ; 'H'
 * 0000000140432FF4: xor     edx, edx
 * 0000000140432FF6: wrmsr
 * 0000000140432FF8: movzx   edx, word ptr gs:860h
 * 0000000140433001: test    edx, 8
 * 0000000140433007: jz      short loc_140433020
 * 0000000140433009: mov     eax, 1
 * 000000014043300E: xor     edx, edx
 * 0000000140433010: mov     ecx, 49h ; 'I'
 * 0000000140433015: wrmsr
 * 0000000140433017: movzx   edx, word ptr gs:860h
 * 0000000140433020: test    edx, 2
 * 0000000140433026: jz      loc_140433163
 * 000000014043302C: call    loc_14043313F
 * 0000000140433031: add     rsp, 8
 * 0000000140433035: call    loc_140433148
 * 000000014043303A: add     rsp, 8
 * 000000014043303E: call    loc_140433031
 * 0000000140433043: add     rsp, 8
 * 0000000140433047: call    loc_14043303A
 * 000000014043304C: add     rsp, 8
 * 0000000140433050: call    loc_140433043
 * 0000000140433055: add     rsp, 8
 * 0000000140433059: call    loc_14043304C
 * 000000014043305E: add     rsp, 8
 * 0000000140433062: call    loc_140433055
 * 0000000140433067: add     rsp, 8
 * 000000014043306B: call    loc_14043305E
 * 0000000140433070: add     rsp, 8
 * 0000000140433074: call    loc_140433067
 * 0000000140433079: add     rsp, 8
 * 000000014043307D: call    loc_140433070
 * 0000000140433082: add     rsp, 8
 * 0000000140433086: call    loc_140433079
 * 000000014043308B: add     rsp, 8
 * 000000014043308F: call    loc_140433082
 * 0000000140433094: add     rsp, 8
 * 0000000140433098: call    loc_14043308B
 * 000000014043309D: add     rsp, 8
 * 00000001404330A1: call    loc_140433094
 * 00000001404330A6: add     rsp, 8
 * 00000001404330AA: call    loc_14043309D
 * 00000001404330AF: add     rsp, 8
 * 00000001404330B3: call    loc_1404330A6
 * 00000001404330B8: add     rsp, 8
 * 00000001404330BC: call    loc_1404330AF
 * 00000001404330C1: add     rsp, 8
 * 00000001404330C5: call    loc_1404330B8
 * 00000001404330CA: add     rsp, 8
 * 00000001404330CE: call    loc_1404330C1
 * 00000001404330D3: add     rsp, 8
 * 00000001404330D7: call    loc_1404330CA
 * 00000001404330DC: add     rsp, 8
 * 00000001404330E0: call    loc_1404330D3
 * 00000001404330E5: add     rsp, 8
 * 00000001404330E9: call    loc_1404330DC
 * 00000001404330EE: add     rsp, 8
 * 00000001404330F2: call    loc_1404330E5
 * 00000001404330F7: add     rsp, 8
 * 00000001404330FB: call    loc_1404330EE
 * 0000000140433100: add     rsp, 8
 * 0000000140433104: call    loc_1404330F7
 * 0000000140433109: add     rsp, 8
 * 000000014043310D: call    loc_140433100
 * 0000000140433112: add     rsp, 8
 * 0000000140433116: call    loc_140433109
 * 000000014043311B: add     rsp, 8
 * 000000014043311F: call    loc_140433112
 * 0000000140433124: add     rsp, 8
 * 0000000140433128: call    loc_14043311B
 * 000000014043312D: add     rsp, 8
 * 0000000140433131: call    loc_140433124
 * 0000000140433136: add     rsp, 8
 * 000000014043313A: call    loc_14043312D
 * 000000014043313F: add     rsp, 8
 * 0000000140433143: call    loc_140433136
 * 0000000140433148: add     rsp, 8
 * 000000014043314C: mov     eax, 0DADAh
 * 0000000140433151: test    byte ptr gs:862h, 8
 * 000000014043315A: jz      short loc_140433163
 * 000000014043315C: mov     al, 20h ; ' '
 * 000000014043315E: incsspq rax
 * 0000000140433163: test    edx, 200h
 * 0000000140433169: jz      short loc_140433170
 * 000000014043316B: call    sub_1404357C0
 * 0000000140433170: lfence
 * 0000000140433173: mov     byte ptr gs:856h, 0
 * 000000014043317C: test    byte ptr [r10+3], 3
 * 0000000140433181: mov     word ptr [rbp+80h], 0
 * 000000014043318A: jz      short loc_140433191
 * 000000014043318C: call    sub_14041F920
 * 0000000140433191: cld
 * 0000000140433192: stmxcsr dword ptr [rbp-54h]
 * 0000000140433196: ldmxcsr dword ptr gs:180h
 * 000000014043319F: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001404331A3: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001404331A7: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001404331AB: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001404331AF: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001404331B3: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001404331B7: test    byte ptr cs:dword_140D069F0, 0FFh
 * 00000001404331BE: jz      short loc_1404331CC
 * 00000001404331C0: test    byte ptr [rbp+0F0h], 1
 * 00000001404331C7: jz      short loc_1404331CC
 * 00000001404331C9: stac
 * 00000001404331CC: test    dword ptr [rbp+0F8h], 200h
 * 00000001404331D6: jz      short loc_1404331D9
 * 00000001404331D8: sti
 * 00000001404331D9: mov     r9, [rbp-48h]
 * 00000001404331DD: mov     ecx, 0C0000409h
 * 00000001404331E2: mov     edx, 1
 * 00000001404331E7: mov     r8, [rbp+0E8h]
 * 00000001404331EE: call    sub_140435300
 * 00000001404331F3: nop
 * 00000001404331F4: retn
 */
