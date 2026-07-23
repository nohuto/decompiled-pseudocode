/*
 * XREFs of NtCallEnclave @ 0x14042A080
 * Callers:
 *     <none>
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14041F2B0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1404200D0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1404251B0 (KiInitiateUserApc.c)
 *     NtCallEnclave @ 0x14042A080 (NtCallEnclave.c)
 *     KiUpdateStibpPairing @ 0x140461220 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x1405746E0 (KiCopyCounters.c)
 *     PsCallEnclave @ 0x1409B6A00 (PsCallEnclave.c)
 */

/*
 * Hex-Rays decompilation failed for NtCallEnclave @ 0x14042A080
 * Reason: Hex-Rays returned no pseudocode for 0x14042A080
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042A080: sub     rsp, 28h
 * 000000014042A084: xor     eax, eax
 * 000000014042A086: xorps   xmm0, xmm0
 * 000000014042A089: mov     [rbp-48h], eax
 * 000000014042A08C: mov     [rbp-40h], eax
 * 000000014042A08F: mov     [rbp-38h], eax
 * 000000014042A092: mov     [rbp-30h], eax
 * 000000014042A095: mov     [rbp-28h], eax
 * 000000014042A098: mov     [rbp-20h], eax
 * 000000014042A09B: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014042A09F: movaps  xmmword ptr [rbp+0], xmm0
 * 000000014042A0A3: movaps  xmmword ptr [rbp+10h], xmm0
 * 000000014042A0A7: movaps  xmmword ptr [rbp+20h], xmm0
 * 000000014042A0AB: movaps  xmmword ptr [rbp+30h], xmm0
 * 000000014042A0AF: movaps  xmmword ptr [rbp+40h], xmm0
 * 000000014042A0B3: call    PsCallEnclave
 * 000000014042A0B8: mov     [rbp-50h], rax
 * 000000014042A0BC: mov     rbx, [rbp+0C0h]
 * 000000014042A0C3: mov     rdi, [rbp+0C8h]
 * 000000014042A0CA: mov     rsi, [rbp+0D0h]
 * 000000014042A0D1: cli
 * 000000014042A0D2: xor     ecx, ecx
 * 000000014042A0D4: rdsspq  rcx
 * 000000014042A0D9: test    rcx, rcx
 * 000000014042A0DC: jz      short loc_14042A0E8
 * 000000014042A0DE: mov     ecx, 1
 * 000000014042A0E3: incsspq rcx
 * 000000014042A0E8: test    byte ptr [rbp+0F0h], 1
 * 000000014042A0EF: jz      loc_14042A3DD
 * 000000014042A0F5: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042A0FC: jz      short loc_14042A101
 * 000000014042A0FE: stac
 * 000000014042A101: mov     rcx, gs:188h
 * 000000014042A10A: test    byte ptr [rcx+0C2h], 3
 * 000000014042A111: jz      short loc_14042A12E
 * 000000014042A113: mov     ecx, 1
 * 000000014042A118: mov     cr8, rcx
 * 000000014042A11C: sti
 * 000000014042A11D: call    KiInitiateUserApc
 * 000000014042A122: cli
 * 000000014042A123: mov     ecx, 0
 * 000000014042A128: mov     cr8, rcx
 * 000000014042A12C: jmp     short loc_14042A101
 * 000000014042A12E: test    byte ptr gs:86Ch, 2
 * 000000014042A137: jz      short loc_14042A140
 * 000000014042A139: xor     ecx, ecx
 * 000000014042A13B: call    KiUpdateStibpPairing
 * 000000014042A140: mov     rcx, gs:188h
 * 000000014042A149: test    dword ptr [rcx], 8000000h
 * 000000014042A14F: jz      short loc_14042A156
 * 000000014042A151: call    KiRestoreSetContextState
 * 000000014042A156: mov     rcx, gs:188h
 * 000000014042A15F: test    dword ptr [rcx], 10000h
 * 000000014042A165: jz      short loc_14042A17B
 * 000000014042A167: test    byte ptr [rcx+2], 1
 * 000000014042A16B: jz      short loc_14042A17B
 * 000000014042A16D: call    KiCopyCounters
 * 000000014042A172: mov     rcx, gs:188h
 * 000000014042A17B: ldmxcsr dword ptr [rbp-54h]
 * 000000014042A17F: cmp     word ptr [rbp+80h], 0
 * 000000014042A187: jz      short loc_14042A18E
 * 000000014042A189: call    KiRestoreDebugRegisterState
 * 000000014042A18E: mov     rcx, gs:188h
 * 000000014042A197: bt      dword ptr [rcx+74h], 16h
 * 000000014042A19C: jnb     short loc_14042A1C8
 * 000000014042A19E: xor     ecx, ecx
 * 000000014042A1A0: rdsspq  rcx
 * 000000014042A1A5: mov     r8, gs:95A8h
 * 000000014042A1AE: add     r8, 8
 * 000000014042A1B2: cmp     rcx, r8
 * 000000014042A1B5: jnz     short loc_14042A1C8
 * 000000014042A1B7: mov     rcx, gs:95A0h
 * 000000014042A1C0: rstorssp qword ptr [rcx]
 * 000000014042A1C4: saveprevssp
 * 000000014042A1C8: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014042A1CC: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014042A1D0: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014042A1D4: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014042A1D8: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014042A1DC: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014042A1E0: mov     r11, [rbp-20h]
 * 000000014042A1E4: mov     r10, [rbp-28h]
 * 000000014042A1E8: mov     r9, [rbp-30h]
 * 000000014042A1EC: mov     r8, [rbp-38h]
 * 000000014042A1F0: mov     byte ptr gs:856h, 0
 * 000000014042A1F9: movzx   eax, word ptr gs:86Ah
 * 000000014042A202: cmp     gs:864h, ax
 * 000000014042A20B: jz      short loc_14042A21F
 * 000000014042A20D: mov     gs:864h, ax
 * 000000014042A216: mov     ecx, 48h ; 'H'
 * 000000014042A21B: xor     edx, edx
 * 000000014042A21D: wrmsr
 * 000000014042A21F: btr     word ptr gs:860h, 2
 * 000000014042A22A: jnb     short loc_14042A23A
 * 000000014042A22C: mov     eax, 1
 * 000000014042A231: xor     edx, edx
 * 000000014042A233: mov     ecx, 49h ; 'I'
 * 000000014042A238: wrmsr
 * 000000014042A23A: btr     word ptr gs:860h, 5
 * 000000014042A245: jnb     loc_14042A382
 * 000000014042A24B: call    loc_14042A35E
 * 000000014042A250: add     rsp, 8
 * 000000014042A254: call    loc_14042A367
 * 000000014042A259: add     rsp, 8
 * 000000014042A25D: call    loc_14042A250
 * 000000014042A262: add     rsp, 8
 * 000000014042A266: call    loc_14042A259
 * 000000014042A26B: add     rsp, 8
 * 000000014042A26F: call    loc_14042A262
 * 000000014042A274: add     rsp, 8
 * 000000014042A278: call    loc_14042A26B
 * 000000014042A27D: add     rsp, 8
 * 000000014042A281: call    loc_14042A274
 * 000000014042A286: add     rsp, 8
 * 000000014042A28A: call    loc_14042A27D
 * 000000014042A28F: add     rsp, 8
 * 000000014042A293: call    loc_14042A286
 * 000000014042A298: add     rsp, 8
 * 000000014042A29C: call    loc_14042A28F
 * 000000014042A2A1: add     rsp, 8
 * 000000014042A2A5: call    loc_14042A298
 * 000000014042A2AA: add     rsp, 8
 * 000000014042A2AE: call    loc_14042A2A1
 * 000000014042A2B3: add     rsp, 8
 * 000000014042A2B7: call    loc_14042A2AA
 * 000000014042A2BC: add     rsp, 8
 * 000000014042A2C0: call    loc_14042A2B3
 * 000000014042A2C5: add     rsp, 8
 * 000000014042A2C9: call    loc_14042A2BC
 * 000000014042A2CE: add     rsp, 8
 * 000000014042A2D2: call    loc_14042A2C5
 * 000000014042A2D7: add     rsp, 8
 * 000000014042A2DB: call    loc_14042A2CE
 * 000000014042A2E0: add     rsp, 8
 * 000000014042A2E4: call    loc_14042A2D7
 * 000000014042A2E9: add     rsp, 8
 * 000000014042A2ED: call    loc_14042A2E0
 * 000000014042A2F2: add     rsp, 8
 * 000000014042A2F6: call    loc_14042A2E9
 * 000000014042A2FB: add     rsp, 8
 * 000000014042A2FF: call    loc_14042A2F2
 * 000000014042A304: add     rsp, 8
 * 000000014042A308: call    loc_14042A2FB
 * 000000014042A30D: add     rsp, 8
 * 000000014042A311: call    loc_14042A304
 * 000000014042A316: add     rsp, 8
 * 000000014042A31A: call    loc_14042A30D
 * 000000014042A31F: add     rsp, 8
 * 000000014042A323: call    loc_14042A316
 * 000000014042A328: add     rsp, 8
 * 000000014042A32C: call    loc_14042A31F
 * 000000014042A331: add     rsp, 8
 * 000000014042A335: call    loc_14042A328
 * 000000014042A33A: add     rsp, 8
 * 000000014042A33E: call    loc_14042A331
 * 000000014042A343: add     rsp, 8
 * 000000014042A347: call    loc_14042A33A
 * 000000014042A34C: add     rsp, 8
 * 000000014042A350: call    loc_14042A343
 * 000000014042A355: add     rsp, 8
 * 000000014042A359: call    loc_14042A34C
 * 000000014042A35E: add     rsp, 8
 * 000000014042A362: call    loc_14042A355
 * 000000014042A367: add     rsp, 8
 * 000000014042A36B: mov     eax, 0DADAh
 * 000000014042A370: test    byte ptr gs:862h, 8
 * 000000014042A379: jz      short loc_14042A382
 * 000000014042A37B: mov     al, 20h ; ' '
 * 000000014042A37D: incsspq rax
 * 000000014042A382: test    word ptr gs:860h, 80h
 * 000000014042A38D: jz      short loc_14042A39B
 * 000000014042A38F: xor     eax, eax
 * 000000014042A391: xor     edx, edx
 * 000000014042A393: mov     ecx, 1
 * 000000014042A398: div     rcx
 * 000000014042A39B: mov     rdx, [rbp-40h]
 * 000000014042A39F: mov     rcx, [rbp-48h]
 * 000000014042A3A3: mov     rax, [rbp-50h]
 * 000000014042A3A7: mov     rsp, rbp
 * 000000014042A3AA: mov     rbp, [rbp+0D8h]
 * 000000014042A3B1: add     rsp, 0E8h
 * 000000014042A3B8: test    cs:KiKvaShadow, 1
 * 000000014042A3BF: jz      short loc_14042A3C6
 * 000000014042A3C1: jmp     KiKernelExit
 * 000000014042A3C6: test    word ptr gs:860h, 100h
 * 000000014042A3D1: jz      short loc_14042A3D8
 * 000000014042A3D3: verw    [rsp-1E8h+arg_200]
 * 000000014042A3D8: swapgs
 * 000000014042A3DB: iretq
 * 000000014042A3DD: ldmxcsr dword ptr [rbp-54h]
 * 000000014042A3E1: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014042A3E5: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014042A3E9: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014042A3ED: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014042A3F1: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014042A3F5: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014042A3F9: mov     r11, [rbp-20h]
 * 000000014042A3FD: mov     r10, [rbp-28h]
 * 000000014042A401: mov     r9, [rbp-30h]
 * 000000014042A405: mov     r8, [rbp-38h]
 * 000000014042A409: mov     rdx, [rbp-40h]
 * 000000014042A40D: mov     rcx, [rbp-48h]
 * 000000014042A411: mov     rax, [rbp-50h]
 * 000000014042A415: mov     rsp, rbp
 * 000000014042A418: mov     rbp, [rbp+0D8h]
 * 000000014042A41F: add     rsp, 0E8h
 * 000000014042A426: iretq
 */
