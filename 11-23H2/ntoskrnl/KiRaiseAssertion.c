/*
 * XREFs of KiRaiseAssertion @ 0x140433000
 * Callers:
 *     KiRaiseAssertionShadow @ 0x140AF6DC0 (KiRaiseAssertionShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041F330 (KiSaveDebugRegisterState.c)
 *     KiRaiseAssertion @ 0x140433000 (KiRaiseAssertion.c)
 *     KiExceptionDispatch @ 0x140434D40 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseAssertion @ 0x140433000
 * Reason: Hex-Rays returned no pseudocode for 0x140433000
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140433000: sub     qword ptr [rsp+0], 2
 * 0000000140433005: cmp     [rsp+arg_0], 23h ; '#'
 * 000000014043300B: jnz     short loc_140433012
 * 000000014043300D: and     dword ptr [rsp+4], 0
 * 0000000140433012: sub     rsp, 8
 * 0000000140433016: push    rbp
 * 0000000140433017: sub     rsp, 158h
 * 000000014043301E: lea     rbp, [rsp+168h+var_E8]
 * 0000000140433026: mov     byte ptr [rbp-55h], 1
 * 000000014043302A: mov     [rbp-50h], rax
 * 000000014043302E: mov     [rbp-48h], rcx
 * 0000000140433032: mov     [rbp-40h], rdx
 * 0000000140433036: mov     [rbp-38h], r8
 * 000000014043303A: mov     [rbp-30h], r9
 * 000000014043303E: mov     [rbp-28h], r10
 * 0000000140433042: mov     [rbp-20h], r11
 * 0000000140433046: test    byte ptr [rbp+0F0h], 1
 * 000000014043304D: jnz     short loc_140433089
 * 000000014043304F: xor     edx, edx
 * 0000000140433051: rdsspq  rdx
 * 0000000140433056: mov     [rbp+58h], rdx
 * 000000014043305A: lfence
 * 000000014043305D: test    word ptr gs:860h, 1
 * 0000000140433068: jnz     short loc_140433072
 * 000000014043306A: lfence
 * 000000014043306D: jmp     loc_1404332F9
 * 0000000140433072: movzx   eax, word ptr gs:864h
 * 000000014043307B: mov     ecx, 48h ; 'H'
 * 0000000140433080: xor     edx, edx
 * 0000000140433082: wrmsr
 * 0000000140433084: jmp     loc_1404332F9
 * 0000000140433089: test    cs:KiKvaShadow, 1
 * 0000000140433090: jnz     short loc_140433095
 * 0000000140433092: swapgs
 * 0000000140433095: lfence
 * 0000000140433098: mov     rcx, gs:95A8h
 * 00000001404330A1: test    rcx, rcx
 * 00000001404330A4: jz      short loc_1404330C5
 * 00000001404330A6: rdsspq  rdx
 * 00000001404330AB: mov     r10, gs:95A0h
 * 00000001404330B4: add     r10, 8
 * 00000001404330B8: cmp     rdx, r10
 * 00000001404330BB: jnz     short loc_1404330C5
 * 00000001404330BD: rstorssp qword ptr [rcx]
 * 00000001404330C1: saveprevssp
 * 00000001404330C5: mov     r10, gs:188h
 * 00000001404330CE: mov     rcx, gs:188h
 * 00000001404330D7: mov     rcx, [rcx+220h]
 * 00000001404330DE: mov     rcx, [rcx+9E0h]
 * 00000001404330E5: mov     gs:858h, rcx
 * 00000001404330EE: mov     cx, gs:850h
 * 00000001404330F7: mov     gs:852h, cx
 * 0000000140433100: mov     cx, gs:860h
 * 0000000140433109: mov     gs:854h, cx
 * 0000000140433112: movzx   eax, word ptr gs:866h
 * 000000014043311B: cmp     gs:864h, ax
 * 0000000140433124: jz      short loc_140433138
 * 0000000140433126: mov     gs:864h, ax
 * 000000014043312F: mov     ecx, 48h ; 'H'
 * 0000000140433134: xor     edx, edx
 * 0000000140433136: wrmsr
 * 0000000140433138: movzx   edx, word ptr gs:860h
 * 0000000140433141: test    edx, 8
 * 0000000140433147: jz      short loc_140433160
 * 0000000140433149: mov     eax, 1
 * 000000014043314E: xor     edx, edx
 * 0000000140433150: mov     ecx, 49h ; 'I'
 * 0000000140433155: wrmsr
 * 0000000140433157: movzx   edx, word ptr gs:860h
 * 0000000140433160: test    edx, 2
 * 0000000140433166: jz      loc_1404332A3
 * 000000014043316C: call    loc_14043327F
 * 0000000140433171: add     rsp, 8
 * 0000000140433175: call    loc_140433288
 * 000000014043317A: add     rsp, 8
 * 000000014043317E: call    loc_140433171
 * 0000000140433183: add     rsp, 8
 * 0000000140433187: call    loc_14043317A
 * 000000014043318C: add     rsp, 8
 * 0000000140433190: call    loc_140433183
 * 0000000140433195: add     rsp, 8
 * 0000000140433199: call    loc_14043318C
 * 000000014043319E: add     rsp, 8
 * 00000001404331A2: call    loc_140433195
 * 00000001404331A7: add     rsp, 8
 * 00000001404331AB: call    loc_14043319E
 * 00000001404331B0: add     rsp, 8
 * 00000001404331B4: call    loc_1404331A7
 * 00000001404331B9: add     rsp, 8
 * 00000001404331BD: call    loc_1404331B0
 * 00000001404331C2: add     rsp, 8
 * 00000001404331C6: call    loc_1404331B9
 * 00000001404331CB: add     rsp, 8
 * 00000001404331CF: call    loc_1404331C2
 * 00000001404331D4: add     rsp, 8
 * 00000001404331D8: call    loc_1404331CB
 * 00000001404331DD: add     rsp, 8
 * 00000001404331E1: call    loc_1404331D4
 * 00000001404331E6: add     rsp, 8
 * 00000001404331EA: call    loc_1404331DD
 * 00000001404331EF: add     rsp, 8
 * 00000001404331F3: call    loc_1404331E6
 * 00000001404331F8: add     rsp, 8
 * 00000001404331FC: call    loc_1404331EF
 * 0000000140433201: add     rsp, 8
 * 0000000140433205: call    loc_1404331F8
 * 000000014043320A: add     rsp, 8
 * 000000014043320E: call    loc_140433201
 * 0000000140433213: add     rsp, 8
 * 0000000140433217: call    loc_14043320A
 * 000000014043321C: add     rsp, 8
 * 0000000140433220: call    loc_140433213
 * 0000000140433225: add     rsp, 8
 * 0000000140433229: call    loc_14043321C
 * 000000014043322E: add     rsp, 8
 * 0000000140433232: call    loc_140433225
 * 0000000140433237: add     rsp, 8
 * 000000014043323B: call    loc_14043322E
 * 0000000140433240: add     rsp, 8
 * 0000000140433244: call    loc_140433237
 * 0000000140433249: add     rsp, 8
 * 000000014043324D: call    loc_140433240
 * 0000000140433252: add     rsp, 8
 * 0000000140433256: call    loc_140433249
 * 000000014043325B: add     rsp, 8
 * 000000014043325F: call    loc_140433252
 * 0000000140433264: add     rsp, 8
 * 0000000140433268: call    loc_14043325B
 * 000000014043326D: add     rsp, 8
 * 0000000140433271: call    loc_140433264
 * 0000000140433276: add     rsp, 8
 * 000000014043327A: call    loc_14043326D
 * 000000014043327F: add     rsp, 8
 * 0000000140433283: call    loc_140433276
 * 0000000140433288: add     rsp, 8
 * 000000014043328C: mov     eax, 0DADAh
 * 0000000140433291: test    byte ptr gs:862h, 8
 * 000000014043329A: jz      short loc_1404332A3
 * 000000014043329C: mov     al, 20h ; ' '
 * 000000014043329E: incsspq rax
 * 00000001404332A3: test    edx, 200h
 * 00000001404332A9: jz      short loc_1404332B0
 * 00000001404332AB: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001404332B0: lfence
 * 00000001404332B3: mov     byte ptr gs:856h, 0
 * 00000001404332BC: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001404332C3: jz      short loc_1404332E4
 * 00000001404332C5: mov     ecx, 6A7h
 * 00000001404332CA: rdmsr
 * 00000001404332CC: cmp     edx, 0
 * 00000001404332CF: jz      short loc_1404332E4
 * 00000001404332D1: mov     ecx, edx
 * 00000001404332D3: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001404332D9: cmp     edx, ecx
 * 00000001404332DB: jz      short loc_1404332E4
 * 00000001404332DD: mov     ecx, 6A7h
 * 00000001404332E2: wrmsr
 * 00000001404332E4: test    byte ptr [r10+3], 3
 * 00000001404332E9: mov     word ptr [rbp+80h], 0
 * 00000001404332F2: jz      short loc_1404332F9
 * 00000001404332F4: call    KiSaveDebugRegisterState
 * 00000001404332F9: cld
 * 00000001404332FA: stmxcsr dword ptr [rbp-54h]
 * 00000001404332FE: ldmxcsr dword ptr gs:180h
 * 0000000140433307: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014043330B: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014043330F: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140433313: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140433317: movaps  xmmword ptr [rbp+30h], xmm4
 * 000000014043331B: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014043331F: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140433326: jz      short loc_140433334
 * 0000000140433328: test    byte ptr [rbp+0F0h], 1
 * 000000014043332F: jz      short loc_140433334
 * 0000000140433331: stac
 * 0000000140433334: test    dword ptr [rbp+0F8h], 200h
 * 000000014043333E: jz      short loc_140433341
 * 0000000140433340: sti
 * 0000000140433341: mov     ecx, 0C0000420h
 * 0000000140433346: xor     edx, edx
 * 0000000140433348: mov     r8, [rbp+0E8h]
 * 000000014043334F: call    KiExceptionDispatch
 * 0000000140433354: nop
 * 0000000140433355: retn
 */
