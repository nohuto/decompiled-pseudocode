/*
 * XREFs of KiOverflowTrap @ 0x14042D280
 * Callers:
 *     KiOverflowTrapShadow @ 0x140AF6340 (KiOverflowTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041F330 (KiSaveDebugRegisterState.c)
 *     KiOverflowTrap @ 0x14042D280 (KiOverflowTrap.c)
 *     KiExceptionDispatch @ 0x140434D40 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiOverflowTrap @ 0x14042D280
 * Reason: Hex-Rays returned no pseudocode for 0x14042D280
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042D280: sub     rsp, 8
 * 000000014042D284: push    rbp
 * 000000014042D285: sub     rsp, 158h
 * 000000014042D28C: lea     rbp, [rsp+80h]
 * 000000014042D294: mov     [rbp+0E8h+var_13D], 1
 * 000000014042D298: mov     [rbp+0E8h+var_138], rax
 * 000000014042D29C: mov     [rbp+0E8h+var_130], rcx
 * 000000014042D2A0: mov     [rbp+0E8h+var_128], rdx
 * 000000014042D2A4: mov     [rbp+0E8h+var_120], r8
 * 000000014042D2A8: mov     [rbp+0E8h+var_118], r9
 * 000000014042D2AC: mov     [rbp+0E8h+var_110], r10
 * 000000014042D2B0: mov     [rbp+0E8h+var_108], r11
 * 000000014042D2B4: test    [rbp+0E8h+arg_0], 1
 * 000000014042D2BB: jnz     short loc_14042D2F7
 * 000000014042D2BD: xor     edx, edx
 * 000000014042D2BF: rdsspq  rdx
 * 000000014042D2C4: mov     [rbp+0E8h+var_90], rdx
 * 000000014042D2C8: lfence
 * 000000014042D2CB: test    word ptr gs:860h, 1
 * 000000014042D2D6: jnz     short loc_14042D2E0
 * 000000014042D2D8: lfence
 * 000000014042D2DB: jmp     loc_14042D567
 * 000000014042D2E0: movzx   eax, word ptr gs:864h
 * 000000014042D2E9: mov     ecx, 48h ; 'H'
 * 000000014042D2EE: xor     edx, edx
 * 000000014042D2F0: wrmsr
 * 000000014042D2F2: jmp     loc_14042D567
 * 000000014042D2F7: test    cs:KiKvaShadow, 1
 * 000000014042D2FE: jnz     short loc_14042D303
 * 000000014042D300: swapgs
 * 000000014042D303: lfence
 * 000000014042D306: mov     rcx, gs:95A8h
 * 000000014042D30F: test    rcx, rcx
 * 000000014042D312: jz      short loc_14042D333
 * 000000014042D314: rdsspq  rdx
 * 000000014042D319: mov     r10, gs:95A0h
 * 000000014042D322: add     r10, 8
 * 000000014042D326: cmp     rdx, r10
 * 000000014042D329: jnz     short loc_14042D333
 * 000000014042D32B: rstorssp qword ptr [rcx]
 * 000000014042D32F: saveprevssp
 * 000000014042D333: mov     r10, gs:188h
 * 000000014042D33C: mov     rcx, gs:188h
 * 000000014042D345: mov     rcx, [rcx+220h]
 * 000000014042D34C: mov     rcx, [rcx+9E0h]
 * 000000014042D353: mov     gs:858h, rcx
 * 000000014042D35C: mov     cx, gs:850h
 * 000000014042D365: mov     gs:852h, cx
 * 000000014042D36E: mov     cx, gs:860h
 * 000000014042D377: mov     gs:854h, cx
 * 000000014042D380: movzx   eax, word ptr gs:866h
 * 000000014042D389: cmp     gs:864h, ax
 * 000000014042D392: jz      short loc_14042D3A6
 * 000000014042D394: mov     gs:864h, ax
 * 000000014042D39D: mov     ecx, 48h ; 'H'
 * 000000014042D3A2: xor     edx, edx
 * 000000014042D3A4: wrmsr
 * 000000014042D3A6: movzx   edx, word ptr gs:860h
 * 000000014042D3AF: test    edx, 8
 * 000000014042D3B5: jz      short loc_14042D3CE
 * 000000014042D3B7: mov     eax, 1
 * 000000014042D3BC: xor     edx, edx
 * 000000014042D3BE: mov     ecx, 49h ; 'I'
 * 000000014042D3C3: wrmsr
 * 000000014042D3C5: movzx   edx, word ptr gs:860h
 * 000000014042D3CE: test    edx, 2
 * 000000014042D3D4: jz      loc_14042D511
 * 000000014042D3DA: call    loc_14042D4ED
 * 000000014042D3DF: add     rsp, 8
 * 000000014042D3E3: call    loc_14042D4F6
 * 000000014042D3E8: add     rsp, 8
 * 000000014042D3EC: call    loc_14042D3DF
 * 000000014042D3F1: add     rsp, 8
 * 000000014042D3F5: call    loc_14042D3E8
 * 000000014042D3FA: add     rsp, 8
 * 000000014042D3FE: call    loc_14042D3F1
 * 000000014042D403: add     rsp, 8
 * 000000014042D407: call    loc_14042D3FA
 * 000000014042D40C: add     rsp, 8
 * 000000014042D410: call    loc_14042D403
 * 000000014042D415: add     rsp, 8
 * 000000014042D419: call    loc_14042D40C
 * 000000014042D41E: add     rsp, 8
 * 000000014042D422: call    loc_14042D415
 * 000000014042D427: add     rsp, 8
 * 000000014042D42B: call    loc_14042D41E
 * 000000014042D430: add     rsp, 8
 * 000000014042D434: call    loc_14042D427
 * 000000014042D439: add     rsp, 8
 * 000000014042D43D: call    loc_14042D430
 * 000000014042D442: add     rsp, 8
 * 000000014042D446: call    loc_14042D439
 * 000000014042D44B: add     rsp, 8
 * 000000014042D44F: call    loc_14042D442
 * 000000014042D454: add     rsp, 8
 * 000000014042D458: call    loc_14042D44B
 * 000000014042D45D: add     rsp, 8
 * 000000014042D461: call    loc_14042D454
 * 000000014042D466: add     rsp, 8
 * 000000014042D46A: call    loc_14042D45D
 * 000000014042D46F: add     rsp, 8
 * 000000014042D473: call    loc_14042D466
 * 000000014042D478: add     rsp, 8
 * 000000014042D47C: call    loc_14042D46F
 * 000000014042D481: add     rsp, 8
 * 000000014042D485: call    loc_14042D478
 * 000000014042D48A: add     rsp, 8
 * 000000014042D48E: call    loc_14042D481
 * 000000014042D493: add     rsp, 8
 * 000000014042D497: call    loc_14042D48A
 * 000000014042D49C: add     rsp, 8
 * 000000014042D4A0: call    loc_14042D493
 * 000000014042D4A5: add     rsp, 8
 * 000000014042D4A9: call    loc_14042D49C
 * 000000014042D4AE: add     rsp, 8
 * 000000014042D4B2: call    loc_14042D4A5
 * 000000014042D4B7: add     rsp, 8
 * 000000014042D4BB: call    loc_14042D4AE
 * 000000014042D4C0: add     rsp, 8
 * 000000014042D4C4: call    loc_14042D4B7
 * 000000014042D4C9: add     rsp, 8
 * 000000014042D4CD: call    loc_14042D4C0
 * 000000014042D4D2: add     rsp, 8
 * 000000014042D4D6: call    loc_14042D4C9
 * 000000014042D4DB: add     rsp, 8
 * 000000014042D4DF: call    loc_14042D4D2
 * 000000014042D4E4: add     rsp, 8
 * 000000014042D4E8: call    loc_14042D4DB
 * 000000014042D4ED: add     rsp, 8
 * 000000014042D4F1: call    loc_14042D4E4
 * 000000014042D4F6: add     rsp, 8
 * 000000014042D4FA: mov     eax, 0DADAh
 * 000000014042D4FF: test    byte ptr gs:862h, 8
 * 000000014042D508: jz      short loc_14042D511
 * 000000014042D50A: mov     al, 20h ; ' '
 * 000000014042D50C: incsspq rax
 * 000000014042D511: test    edx, 200h
 * 000000014042D517: jz      short loc_14042D51E
 * 000000014042D519: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042D51E: lfence
 * 000000014042D521: mov     byte ptr gs:856h, 0
 * 000000014042D52A: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014042D531: jz      short loc_14042D552
 * 000000014042D533: mov     ecx, 6A7h
 * 000000014042D538: rdmsr
 * 000000014042D53A: cmp     edx, 0
 * 000000014042D53D: jz      short loc_14042D552
 * 000000014042D53F: mov     ecx, edx
 * 000000014042D541: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014042D547: cmp     edx, ecx
 * 000000014042D549: jz      short loc_14042D552
 * 000000014042D54B: mov     ecx, 6A7h
 * 000000014042D550: wrmsr
 * 000000014042D552: test    byte ptr [r10+3], 3
 * 000000014042D557: mov     [rbp+0E8h+var_68], 0
 * 000000014042D560: jz      short loc_14042D567
 * 000000014042D562: call    KiSaveDebugRegisterState
 * 000000014042D567: cld
 * 000000014042D568: stmxcsr [rbp+0E8h+var_13C]
 * 000000014042D56C: ldmxcsr dword ptr gs:180h
 * 000000014042D575: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014042D579: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014042D57D: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014042D581: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014042D585: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014042D589: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014042D58D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042D594: jz      short loc_14042D5A2
 * 000000014042D596: test    [rbp+0E8h+arg_0], 1
 * 000000014042D59D: jz      short loc_14042D5A2
 * 000000014042D59F: stac
 * 000000014042D5A2: test    [rbp+0E8h+arg_8], 200h
 * 000000014042D5AC: jz      short loc_14042D5AF
 * 000000014042D5AE: sti
 * 000000014042D5AF: mov     ecx, 0C0000095h
 * 000000014042D5B4: xor     edx, edx
 * 000000014042D5B6: mov     r8, [rbp+0E8h]
 * 000000014042D5BD: dec     r8
 * 000000014042D5C0: call    KiExceptionDispatch
 * 000000014042D5C5: nop
 * 000000014042D5C6: retn
 */
