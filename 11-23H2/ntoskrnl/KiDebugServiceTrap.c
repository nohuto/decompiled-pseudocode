/*
 * XREFs of KiDebugServiceTrap @ 0x140432F80
 * Callers:
 *     KiDebugServiceTrapShadow @ 0x140AF6E40 (KiDebugServiceTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041EFA0 (KiSaveDebugRegisterState.c)
 *     KiDebugServiceTrap @ 0x140432F80 (KiDebugServiceTrap.c)
 *     KiExceptionDispatch @ 0x140434940 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435300 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDebugServiceTrap @ 0x140432F80
 * Reason: Hex-Rays returned no pseudocode for 0x140432F80
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140432F80: inc     qword ptr [rsp+0]
 * 0000000140432F84: cmp     [rsp+arg_0], 23h ; '#'
 * 0000000140432F8A: jnz     short loc_140432F91
 * 0000000140432F8C: and     dword ptr [rsp+4], 0
 * 0000000140432F91: sub     rsp, 8
 * 0000000140432F95: push    rbp
 * 0000000140432F96: sub     rsp, 158h
 * 0000000140432F9D: lea     rbp, [rsp+168h+var_E8]
 * 0000000140432FA5: mov     byte ptr [rbp-55h], 1
 * 0000000140432FA9: mov     [rbp-50h], rax
 * 0000000140432FAD: mov     [rbp-48h], rcx
 * 0000000140432FB1: mov     [rbp-40h], rdx
 * 0000000140432FB5: mov     [rbp-38h], r8
 * 0000000140432FB9: mov     [rbp-30h], r9
 * 0000000140432FBD: mov     [rbp-28h], r10
 * 0000000140432FC1: mov     [rbp-20h], r11
 * 0000000140432FC5: test    byte ptr [rbp+0F0h], 1
 * 0000000140432FCC: jnz     short loc_140433008
 * 0000000140432FCE: xor     edx, edx
 * 0000000140432FD0: rdsspq  rdx
 * 0000000140432FD5: mov     [rbp+58h], rdx
 * 0000000140432FD9: lfence
 * 0000000140432FDC: test    word ptr gs:860h, 1
 * 0000000140432FE7: jnz     short loc_140432FF1
 * 0000000140432FE9: lfence
 * 0000000140432FEC: jmp     loc_140433278
 * 0000000140432FF1: movzx   eax, word ptr gs:864h
 * 0000000140432FFA: mov     ecx, 48h ; 'H'
 * 0000000140432FFF: xor     edx, edx
 * 0000000140433001: wrmsr
 * 0000000140433003: jmp     loc_140433278
 * 0000000140433008: test    cs:KiKvaShadow, 1
 * 000000014043300F: jnz     short loc_140433014
 * 0000000140433011: swapgs
 * 0000000140433014: lfence
 * 0000000140433017: mov     rcx, gs:95A8h
 * 0000000140433020: test    rcx, rcx
 * 0000000140433023: jz      short loc_140433044
 * 0000000140433025: rdsspq  rdx
 * 000000014043302A: mov     r10, gs:95A0h
 * 0000000140433033: add     r10, 8
 * 0000000140433037: cmp     rdx, r10
 * 000000014043303A: jnz     short loc_140433044
 * 000000014043303C: rstorssp qword ptr [rcx]
 * 0000000140433040: saveprevssp
 * 0000000140433044: mov     r10, gs:188h
 * 000000014043304D: mov     rcx, gs:188h
 * 0000000140433056: mov     rcx, [rcx+220h]
 * 000000014043305D: mov     rcx, [rcx+9E0h]
 * 0000000140433064: mov     gs:858h, rcx
 * 000000014043306D: mov     cx, gs:850h
 * 0000000140433076: mov     gs:852h, cx
 * 000000014043307F: mov     cx, gs:860h
 * 0000000140433088: mov     gs:854h, cx
 * 0000000140433091: movzx   eax, word ptr gs:866h
 * 000000014043309A: cmp     gs:864h, ax
 * 00000001404330A3: jz      short loc_1404330B7
 * 00000001404330A5: mov     gs:864h, ax
 * 00000001404330AE: mov     ecx, 48h ; 'H'
 * 00000001404330B3: xor     edx, edx
 * 00000001404330B5: wrmsr
 * 00000001404330B7: movzx   edx, word ptr gs:860h
 * 00000001404330C0: test    edx, 8
 * 00000001404330C6: jz      short loc_1404330DF
 * 00000001404330C8: mov     eax, 1
 * 00000001404330CD: xor     edx, edx
 * 00000001404330CF: mov     ecx, 49h ; 'I'
 * 00000001404330D4: wrmsr
 * 00000001404330D6: movzx   edx, word ptr gs:860h
 * 00000001404330DF: test    edx, 2
 * 00000001404330E5: jz      loc_140433222
 * 00000001404330EB: call    loc_1404331FE
 * 00000001404330F0: add     rsp, 8
 * 00000001404330F4: call    loc_140433207
 * 00000001404330F9: add     rsp, 8
 * 00000001404330FD: call    loc_1404330F0
 * 0000000140433102: add     rsp, 8
 * 0000000140433106: call    loc_1404330F9
 * 000000014043310B: add     rsp, 8
 * 000000014043310F: call    loc_140433102
 * 0000000140433114: add     rsp, 8
 * 0000000140433118: call    loc_14043310B
 * 000000014043311D: add     rsp, 8
 * 0000000140433121: call    loc_140433114
 * 0000000140433126: add     rsp, 8
 * 000000014043312A: call    loc_14043311D
 * 000000014043312F: add     rsp, 8
 * 0000000140433133: call    loc_140433126
 * 0000000140433138: add     rsp, 8
 * 000000014043313C: call    loc_14043312F
 * 0000000140433141: add     rsp, 8
 * 0000000140433145: call    loc_140433138
 * 000000014043314A: add     rsp, 8
 * 000000014043314E: call    loc_140433141
 * 0000000140433153: add     rsp, 8
 * 0000000140433157: call    loc_14043314A
 * 000000014043315C: add     rsp, 8
 * 0000000140433160: call    loc_140433153
 * 0000000140433165: add     rsp, 8
 * 0000000140433169: call    loc_14043315C
 * 000000014043316E: add     rsp, 8
 * 0000000140433172: call    loc_140433165
 * 0000000140433177: add     rsp, 8
 * 000000014043317B: call    loc_14043316E
 * 0000000140433180: add     rsp, 8
 * 0000000140433184: call    loc_140433177
 * 0000000140433189: add     rsp, 8
 * 000000014043318D: call    loc_140433180
 * 0000000140433192: add     rsp, 8
 * 0000000140433196: call    loc_140433189
 * 000000014043319B: add     rsp, 8
 * 000000014043319F: call    loc_140433192
 * 00000001404331A4: add     rsp, 8
 * 00000001404331A8: call    loc_14043319B
 * 00000001404331AD: add     rsp, 8
 * 00000001404331B1: call    loc_1404331A4
 * 00000001404331B6: add     rsp, 8
 * 00000001404331BA: call    loc_1404331AD
 * 00000001404331BF: add     rsp, 8
 * 00000001404331C3: call    loc_1404331B6
 * 00000001404331C8: add     rsp, 8
 * 00000001404331CC: call    loc_1404331BF
 * 00000001404331D1: add     rsp, 8
 * 00000001404331D5: call    loc_1404331C8
 * 00000001404331DA: add     rsp, 8
 * 00000001404331DE: call    loc_1404331D1
 * 00000001404331E3: add     rsp, 8
 * 00000001404331E7: call    loc_1404331DA
 * 00000001404331EC: add     rsp, 8
 * 00000001404331F0: call    loc_1404331E3
 * 00000001404331F5: add     rsp, 8
 * 00000001404331F9: call    loc_1404331EC
 * 00000001404331FE: add     rsp, 8
 * 0000000140433202: call    loc_1404331F5
 * 0000000140433207: add     rsp, 8
 * 000000014043320B: mov     eax, 0DADAh
 * 0000000140433210: test    byte ptr gs:862h, 8
 * 0000000140433219: jz      short loc_140433222
 * 000000014043321B: mov     al, 20h ; ' '
 * 000000014043321D: incsspq rax
 * 0000000140433222: test    edx, 200h
 * 0000000140433228: jz      short loc_14043322F
 * 000000014043322A: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014043322F: lfence
 * 0000000140433232: mov     byte ptr gs:856h, 0
 * 000000014043323B: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140433242: jz      short loc_140433263
 * 0000000140433244: mov     ecx, 6A7h
 * 0000000140433249: rdmsr
 * 000000014043324B: cmp     edx, 0
 * 000000014043324E: jz      short loc_140433263
 * 0000000140433250: mov     ecx, edx
 * 0000000140433252: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140433258: cmp     edx, ecx
 * 000000014043325A: jz      short loc_140433263
 * 000000014043325C: mov     ecx, 6A7h
 * 0000000140433261: wrmsr
 * 0000000140433263: test    byte ptr [r10+3], 3
 * 0000000140433268: mov     word ptr [rbp+80h], 0
 * 0000000140433271: jz      short loc_140433278
 * 0000000140433273: call    KiSaveDebugRegisterState
 * 0000000140433278: cld
 * 0000000140433279: stmxcsr dword ptr [rbp-54h]
 * 000000014043327D: ldmxcsr dword ptr gs:180h
 * 0000000140433286: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014043328A: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014043328E: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140433292: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140433296: movaps  xmmword ptr [rbp+30h], xmm4
 * 000000014043329A: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014043329E: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404332A5: jz      short loc_1404332B3
 * 00000001404332A7: test    byte ptr [rbp+0F0h], 1
 * 00000001404332AE: jz      short loc_1404332B3
 * 00000001404332B0: stac
 * 00000001404332B3: test    dword ptr [rbp+0F8h], 200h
 * 00000001404332BD: jz      short loc_1404332C0
 * 00000001404332BF: sti
 * 00000001404332C0: mov     ecx, 80000003h
 * 00000001404332C5: mov     edx, 1
 * 00000001404332CA: mov     r9, [rbp-50h]
 * 00000001404332CE: mov     r8, [rbp+0E8h]
 * 00000001404332D5: call    KiExceptionDispatch
 * 00000001404332DA: nop
 * 00000001404332DB: retn
 */
