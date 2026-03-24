/*
 * XREFs of KiSystemCall32 @ 0x140432FC0
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041E8E0 (KiSaveDebugRegisterState.c)
 *     KiSystemCall32 @ 0x140432FC0 (KiSystemCall32.c)
 *     KiExceptionDispatch @ 0x140434340 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32 @ 0x140432FC0
 * Reason: Hex-Rays returned no pseudocode for 0x140432FC0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140432FC0: swapgs
 * 0000000140432FC3: mov     gs:10h, rsp
 * 0000000140432FCC: mov     rsp, gs:1A8h
 * 0000000140432FD5: push    2Bh ; '+'
 * 0000000140432FD7: push    qword ptr gs:10h
 * 0000000140432FDF: push    r11
 * 0000000140432FE1: push    23h ; '#'
 * 0000000140432FE3: push    rcx
 * 0000000140432FE4: cmp     qword ptr gs:95A8h, 0
 * 0000000140432FEE: jz      short loc_140432FF4
 * 0000000140432FF0: setssbsy
 * 0000000140432FF4: swapgs
 * 0000000140432FF7: lfence
 * 0000000140432FFA: sub     rsp, 8
 * 0000000140432FFE: push    rbp
 * 0000000140432FFF: sub     rsp, 158h
 * 0000000140433006: lea     rbp, [rsp+190h+var_110]
 * 000000014043300E: mov     byte ptr [rbp-55h], 1
 * 0000000140433012: mov     [rbp-50h], rax
 * 0000000140433016: mov     [rbp-48h], rcx
 * 000000014043301A: mov     [rbp-40h], rdx
 * 000000014043301E: mov     [rbp-38h], r8
 * 0000000140433022: mov     [rbp-30h], r9
 * 0000000140433026: mov     [rbp-28h], r10
 * 000000014043302A: mov     [rbp-20h], r11
 * 000000014043302E: test    byte ptr [rbp+0F0h], 1
 * 0000000140433035: jnz     short loc_140433071
 * 0000000140433037: xor     edx, edx
 * 0000000140433039: rdsspq  rdx
 * 000000014043303E: mov     [rbp+58h], rdx
 * 0000000140433042: lfence
 * 0000000140433045: test    word ptr gs:860h, 1
 * 0000000140433050: jnz     short loc_14043305A
 * 0000000140433052: lfence
 * 0000000140433055: jmp     loc_1404332E1
 * 000000014043305A: movzx   eax, word ptr gs:864h
 * 0000000140433063: mov     ecx, 48h ; 'H'
 * 0000000140433068: xor     edx, edx
 * 000000014043306A: wrmsr
 * 000000014043306C: jmp     loc_1404332E1
 * 0000000140433071: test    cs:KiKvaShadow, 1
 * 0000000140433078: jnz     short loc_14043307D
 * 000000014043307A: swapgs
 * 000000014043307D: lfence
 * 0000000140433080: mov     rcx, gs:95A8h
 * 0000000140433089: test    rcx, rcx
 * 000000014043308C: jz      short loc_1404330AD
 * 000000014043308E: rdsspq  rdx
 * 0000000140433093: mov     r10, gs:95A0h
 * 000000014043309C: add     r10, 8
 * 00000001404330A0: cmp     rdx, r10
 * 00000001404330A3: jnz     short loc_1404330AD
 * 00000001404330A5: rstorssp qword ptr [rcx]
 * 00000001404330A9: saveprevssp
 * 00000001404330AD: mov     r10, gs:188h
 * 00000001404330B6: mov     rcx, gs:188h
 * 00000001404330BF: mov     rcx, [rcx+220h]
 * 00000001404330C6: mov     rcx, [rcx+9E0h]
 * 00000001404330CD: mov     gs:858h, rcx
 * 00000001404330D6: mov     cx, gs:850h
 * 00000001404330DF: mov     gs:852h, cx
 * 00000001404330E8: mov     cx, gs:860h
 * 00000001404330F1: mov     gs:854h, cx
 * 00000001404330FA: movzx   eax, word ptr gs:866h
 * 0000000140433103: cmp     gs:864h, ax
 * 000000014043310C: jz      short loc_140433120
 * 000000014043310E: mov     gs:864h, ax
 * 0000000140433117: mov     ecx, 48h ; 'H'
 * 000000014043311C: xor     edx, edx
 * 000000014043311E: wrmsr
 * 0000000140433120: movzx   edx, word ptr gs:860h
 * 0000000140433129: test    edx, 8
 * 000000014043312F: jz      short loc_140433148
 * 0000000140433131: mov     eax, 1
 * 0000000140433136: xor     edx, edx
 * 0000000140433138: mov     ecx, 49h ; 'I'
 * 000000014043313D: wrmsr
 * 000000014043313F: movzx   edx, word ptr gs:860h
 * 0000000140433148: test    edx, 2
 * 000000014043314E: jz      loc_14043328B
 * 0000000140433154: call    loc_140433267
 * 0000000140433159: add     rsp, 8
 * 000000014043315D: call    loc_140433270
 * 0000000140433162: add     rsp, 8
 * 0000000140433166: call    loc_140433159
 * 000000014043316B: add     rsp, 8
 * 000000014043316F: call    loc_140433162
 * 0000000140433174: add     rsp, 8
 * 0000000140433178: call    loc_14043316B
 * 000000014043317D: add     rsp, 8
 * 0000000140433181: call    loc_140433174
 * 0000000140433186: add     rsp, 8
 * 000000014043318A: call    loc_14043317D
 * 000000014043318F: add     rsp, 8
 * 0000000140433193: call    loc_140433186
 * 0000000140433198: add     rsp, 8
 * 000000014043319C: call    loc_14043318F
 * 00000001404331A1: add     rsp, 8
 * 00000001404331A5: call    loc_140433198
 * 00000001404331AA: add     rsp, 8
 * 00000001404331AE: call    loc_1404331A1
 * 00000001404331B3: add     rsp, 8
 * 00000001404331B7: call    loc_1404331AA
 * 00000001404331BC: add     rsp, 8
 * 00000001404331C0: call    loc_1404331B3
 * 00000001404331C5: add     rsp, 8
 * 00000001404331C9: call    loc_1404331BC
 * 00000001404331CE: add     rsp, 8
 * 00000001404331D2: call    loc_1404331C5
 * 00000001404331D7: add     rsp, 8
 * 00000001404331DB: call    loc_1404331CE
 * 00000001404331E0: add     rsp, 8
 * 00000001404331E4: call    loc_1404331D7
 * 00000001404331E9: add     rsp, 8
 * 00000001404331ED: call    loc_1404331E0
 * 00000001404331F2: add     rsp, 8
 * 00000001404331F6: call    loc_1404331E9
 * 00000001404331FB: add     rsp, 8
 * 00000001404331FF: call    loc_1404331F2
 * 0000000140433204: add     rsp, 8
 * 0000000140433208: call    loc_1404331FB
 * 000000014043320D: add     rsp, 8
 * 0000000140433211: call    loc_140433204
 * 0000000140433216: add     rsp, 8
 * 000000014043321A: call    loc_14043320D
 * 000000014043321F: add     rsp, 8
 * 0000000140433223: call    loc_140433216
 * 0000000140433228: add     rsp, 8
 * 000000014043322C: call    loc_14043321F
 * 0000000140433231: add     rsp, 8
 * 0000000140433235: call    loc_140433228
 * 000000014043323A: add     rsp, 8
 * 000000014043323E: call    loc_140433231
 * 0000000140433243: add     rsp, 8
 * 0000000140433247: call    loc_14043323A
 * 000000014043324C: add     rsp, 8
 * 0000000140433250: call    loc_140433243
 * 0000000140433255: add     rsp, 8
 * 0000000140433259: call    loc_14043324C
 * 000000014043325E: add     rsp, 8
 * 0000000140433262: call    loc_140433255
 * 0000000140433267: add     rsp, 8
 * 000000014043326B: call    loc_14043325E
 * 0000000140433270: add     rsp, 8
 * 0000000140433274: mov     eax, 0DADAh
 * 0000000140433279: test    byte ptr gs:862h, 8
 * 0000000140433282: jz      short loc_14043328B
 * 0000000140433284: mov     al, 20h ; ' '
 * 0000000140433286: incsspq rax
 * 000000014043328B: test    edx, 200h
 * 0000000140433291: jz      short loc_140433298
 * 0000000140433293: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140433298: lfence
 * 000000014043329B: mov     byte ptr gs:856h, 0
 * 00000001404332A4: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001404332AB: jz      short loc_1404332CC
 * 00000001404332AD: mov     ecx, 6A7h
 * 00000001404332B2: rdmsr
 * 00000001404332B4: cmp     edx, 0
 * 00000001404332B7: jz      short loc_1404332CC
 * 00000001404332B9: mov     ecx, edx
 * 00000001404332BB: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001404332C1: cmp     edx, ecx
 * 00000001404332C3: jz      short loc_1404332CC
 * 00000001404332C5: mov     ecx, 6A7h
 * 00000001404332CA: wrmsr
 * 00000001404332CC: test    byte ptr [r10+3], 3
 * 00000001404332D1: mov     word ptr [rbp+80h], 0
 * 00000001404332DA: jz      short loc_1404332E1
 * 00000001404332DC: call    KiSaveDebugRegisterState
 * 00000001404332E1: cld
 * 00000001404332E2: stmxcsr dword ptr [rbp-54h]
 * 00000001404332E6: ldmxcsr dword ptr gs:180h
 * 00000001404332EF: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001404332F3: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001404332F7: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001404332FB: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001404332FF: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140433303: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140433307: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014043330E: jz      short loc_14043331C
 * 0000000140433310: test    byte ptr [rbp+0F0h], 1
 * 0000000140433317: jz      short loc_14043331C
 * 0000000140433319: stac
 * 000000014043331C: sub     qword ptr [rbp+0E8h], 2
 * 0000000140433324: and     dword ptr [rbp+0ECh], 0
 * 000000014043332B: sti
 * 000000014043332C: mov     ecx, 0C000001Dh
 * 0000000140433331: xor     edx, edx
 * 0000000140433333: mov     r8, [rbp+0E8h]
 * 000000014043333A: call    KiExceptionDispatch
 * 000000014043333F: nop
 * 0000000140433340: retn
 */
