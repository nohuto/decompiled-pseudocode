/*
 * XREFs of NtCallEnclave @ 0x140429CF0
 * Callers:
 *     <none>
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14041EF20 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041FD40 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424E20 (KiInitiateUserApc.c)
 *     NtCallEnclave @ 0x140429CF0 (NtCallEnclave.c)
 *     KiUpdateStibpPairing @ 0x140460E20 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x1405741A0 (KiCopyCounters.c)
 *     PsCallEnclave @ 0x1409B6800 (PsCallEnclave.c)
 */

/*
 * Hex-Rays decompilation failed for NtCallEnclave @ 0x140429CF0
 * Reason: Hex-Rays returned no pseudocode for 0x140429CF0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140429CF0: sub     rsp, 28h
 * 0000000140429CF4: xor     eax, eax
 * 0000000140429CF6: xorps   xmm0, xmm0
 * 0000000140429CF9: mov     [rbp-48h], eax
 * 0000000140429CFC: mov     [rbp-40h], eax
 * 0000000140429CFF: mov     [rbp-38h], eax
 * 0000000140429D02: mov     [rbp-30h], eax
 * 0000000140429D05: mov     [rbp-28h], eax
 * 0000000140429D08: mov     [rbp-20h], eax
 * 0000000140429D0B: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140429D0F: movaps  xmmword ptr [rbp+0], xmm0
 * 0000000140429D13: movaps  xmmword ptr [rbp+10h], xmm0
 * 0000000140429D17: movaps  xmmword ptr [rbp+20h], xmm0
 * 0000000140429D1B: movaps  xmmword ptr [rbp+30h], xmm0
 * 0000000140429D1F: movaps  xmmword ptr [rbp+40h], xmm0
 * 0000000140429D23: call    PsCallEnclave
 * 0000000140429D28: mov     [rbp-50h], rax
 * 0000000140429D2C: mov     rbx, [rbp+0C0h]
 * 0000000140429D33: mov     rdi, [rbp+0C8h]
 * 0000000140429D3A: mov     rsi, [rbp+0D0h]
 * 0000000140429D41: cli
 * 0000000140429D42: xor     ecx, ecx
 * 0000000140429D44: rdsspq  rcx
 * 0000000140429D49: test    rcx, rcx
 * 0000000140429D4C: jz      short loc_140429D58
 * 0000000140429D4E: mov     ecx, 1
 * 0000000140429D53: incsspq rcx
 * 0000000140429D58: test    byte ptr [rbp+0F0h], 1
 * 0000000140429D5F: jz      loc_14042A04D
 * 0000000140429D65: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140429D6C: jz      short loc_140429D71
 * 0000000140429D6E: stac
 * 0000000140429D71: mov     rcx, gs:188h
 * 0000000140429D7A: test    byte ptr [rcx+0C2h], 3
 * 0000000140429D81: jz      short loc_140429D9E
 * 0000000140429D83: mov     ecx, 1
 * 0000000140429D88: mov     cr8, rcx
 * 0000000140429D8C: sti
 * 0000000140429D8D: call    KiInitiateUserApc
 * 0000000140429D92: cli
 * 0000000140429D93: mov     ecx, 0
 * 0000000140429D98: mov     cr8, rcx
 * 0000000140429D9C: jmp     short loc_140429D71
 * 0000000140429D9E: test    byte ptr gs:86Ch, 2
 * 0000000140429DA7: jz      short loc_140429DB0
 * 0000000140429DA9: xor     ecx, ecx
 * 0000000140429DAB: call    KiUpdateStibpPairing
 * 0000000140429DB0: mov     rcx, gs:188h
 * 0000000140429DB9: test    dword ptr [rcx], 8000000h
 * 0000000140429DBF: jz      short loc_140429DC6
 * 0000000140429DC1: call    KiRestoreSetContextState
 * 0000000140429DC6: mov     rcx, gs:188h
 * 0000000140429DCF: test    dword ptr [rcx], 10000h
 * 0000000140429DD5: jz      short loc_140429DEB
 * 0000000140429DD7: test    byte ptr [rcx+2], 1
 * 0000000140429DDB: jz      short loc_140429DEB
 * 0000000140429DDD: call    KiCopyCounters
 * 0000000140429DE2: mov     rcx, gs:188h
 * 0000000140429DEB: ldmxcsr dword ptr [rbp-54h]
 * 0000000140429DEF: cmp     word ptr [rbp+80h], 0
 * 0000000140429DF7: jz      short loc_140429DFE
 * 0000000140429DF9: call    KiRestoreDebugRegisterState
 * 0000000140429DFE: mov     rcx, gs:188h
 * 0000000140429E07: bt      dword ptr [rcx+74h], 16h
 * 0000000140429E0C: jnb     short loc_140429E38
 * 0000000140429E0E: xor     ecx, ecx
 * 0000000140429E10: rdsspq  rcx
 * 0000000140429E15: mov     r8, gs:95A8h
 * 0000000140429E1E: add     r8, 8
 * 0000000140429E22: cmp     rcx, r8
 * 0000000140429E25: jnz     short loc_140429E38
 * 0000000140429E27: mov     rcx, gs:95A0h
 * 0000000140429E30: rstorssp qword ptr [rcx]
 * 0000000140429E34: saveprevssp
 * 0000000140429E38: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140429E3C: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140429E40: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140429E44: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140429E48: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140429E4C: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140429E50: mov     r11, [rbp-20h]
 * 0000000140429E54: mov     r10, [rbp-28h]
 * 0000000140429E58: mov     r9, [rbp-30h]
 * 0000000140429E5C: mov     r8, [rbp-38h]
 * 0000000140429E60: mov     byte ptr gs:856h, 0
 * 0000000140429E69: movzx   eax, word ptr gs:86Ah
 * 0000000140429E72: cmp     gs:864h, ax
 * 0000000140429E7B: jz      short loc_140429E8F
 * 0000000140429E7D: mov     gs:864h, ax
 * 0000000140429E86: mov     ecx, 48h ; 'H'
 * 0000000140429E8B: xor     edx, edx
 * 0000000140429E8D: wrmsr
 * 0000000140429E8F: btr     word ptr gs:860h, 2
 * 0000000140429E9A: jnb     short loc_140429EAA
 * 0000000140429E9C: mov     eax, 1
 * 0000000140429EA1: xor     edx, edx
 * 0000000140429EA3: mov     ecx, 49h ; 'I'
 * 0000000140429EA8: wrmsr
 * 0000000140429EAA: btr     word ptr gs:860h, 5
 * 0000000140429EB5: jnb     loc_140429FF2
 * 0000000140429EBB: call    loc_140429FCE
 * 0000000140429EC0: add     rsp, 8
 * 0000000140429EC4: call    loc_140429FD7
 * 0000000140429EC9: add     rsp, 8
 * 0000000140429ECD: call    loc_140429EC0
 * 0000000140429ED2: add     rsp, 8
 * 0000000140429ED6: call    loc_140429EC9
 * 0000000140429EDB: add     rsp, 8
 * 0000000140429EDF: call    loc_140429ED2
 * 0000000140429EE4: add     rsp, 8
 * 0000000140429EE8: call    loc_140429EDB
 * 0000000140429EED: add     rsp, 8
 * 0000000140429EF1: call    loc_140429EE4
 * 0000000140429EF6: add     rsp, 8
 * 0000000140429EFA: call    loc_140429EED
 * 0000000140429EFF: add     rsp, 8
 * 0000000140429F03: call    loc_140429EF6
 * 0000000140429F08: add     rsp, 8
 * 0000000140429F0C: call    loc_140429EFF
 * 0000000140429F11: add     rsp, 8
 * 0000000140429F15: call    loc_140429F08
 * 0000000140429F1A: add     rsp, 8
 * 0000000140429F1E: call    loc_140429F11
 * 0000000140429F23: add     rsp, 8
 * 0000000140429F27: call    loc_140429F1A
 * 0000000140429F2C: add     rsp, 8
 * 0000000140429F30: call    loc_140429F23
 * 0000000140429F35: add     rsp, 8
 * 0000000140429F39: call    loc_140429F2C
 * 0000000140429F3E: add     rsp, 8
 * 0000000140429F42: call    loc_140429F35
 * 0000000140429F47: add     rsp, 8
 * 0000000140429F4B: call    loc_140429F3E
 * 0000000140429F50: add     rsp, 8
 * 0000000140429F54: call    loc_140429F47
 * 0000000140429F59: add     rsp, 8
 * 0000000140429F5D: call    loc_140429F50
 * 0000000140429F62: add     rsp, 8
 * 0000000140429F66: call    loc_140429F59
 * 0000000140429F6B: add     rsp, 8
 * 0000000140429F6F: call    loc_140429F62
 * 0000000140429F74: add     rsp, 8
 * 0000000140429F78: call    loc_140429F6B
 * 0000000140429F7D: add     rsp, 8
 * 0000000140429F81: call    loc_140429F74
 * 0000000140429F86: add     rsp, 8
 * 0000000140429F8A: call    loc_140429F7D
 * 0000000140429F8F: add     rsp, 8
 * 0000000140429F93: call    loc_140429F86
 * 0000000140429F98: add     rsp, 8
 * 0000000140429F9C: call    loc_140429F8F
 * 0000000140429FA1: add     rsp, 8
 * 0000000140429FA5: call    loc_140429F98
 * 0000000140429FAA: add     rsp, 8
 * 0000000140429FAE: call    loc_140429FA1
 * 0000000140429FB3: add     rsp, 8
 * 0000000140429FB7: call    loc_140429FAA
 * 0000000140429FBC: add     rsp, 8
 * 0000000140429FC0: call    loc_140429FB3
 * 0000000140429FC5: add     rsp, 8
 * 0000000140429FC9: call    loc_140429FBC
 * 0000000140429FCE: add     rsp, 8
 * 0000000140429FD2: call    loc_140429FC5
 * 0000000140429FD7: add     rsp, 8
 * 0000000140429FDB: mov     eax, 0DADAh
 * 0000000140429FE0: test    byte ptr gs:862h, 8
 * 0000000140429FE9: jz      short loc_140429FF2
 * 0000000140429FEB: mov     al, 20h ; ' '
 * 0000000140429FED: incsspq rax
 * 0000000140429FF2: test    word ptr gs:860h, 80h
 * 0000000140429FFD: jz      short loc_14042A00B
 * 0000000140429FFF: xor     eax, eax
 * 000000014042A001: xor     edx, edx
 * 000000014042A003: mov     ecx, 1
 * 000000014042A008: div     rcx
 * 000000014042A00B: mov     rdx, [rbp-40h]
 * 000000014042A00F: mov     rcx, [rbp-48h]
 * 000000014042A013: mov     rax, [rbp-50h]
 * 000000014042A017: mov     rsp, rbp
 * 000000014042A01A: mov     rbp, [rbp+0D8h]
 * 000000014042A021: add     rsp, 0E8h
 * 000000014042A028: test    cs:KiKvaShadow, 1
 * 000000014042A02F: jz      short loc_14042A036
 * 000000014042A031: jmp     KiKernelExit
 * 000000014042A036: test    word ptr gs:860h, 100h
 * 000000014042A041: jz      short loc_14042A048
 * 000000014042A043: verw    [rsp-1E8h+arg_200]
 * 000000014042A048: swapgs
 * 000000014042A04B: iretq
 * 000000014042A04D: ldmxcsr dword ptr [rbp-54h]
 * 000000014042A051: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014042A055: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014042A059: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014042A05D: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014042A061: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014042A065: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014042A069: mov     r11, [rbp-20h]
 * 000000014042A06D: mov     r10, [rbp-28h]
 * 000000014042A071: mov     r9, [rbp-30h]
 * 000000014042A075: mov     r8, [rbp-38h]
 * 000000014042A079: mov     rdx, [rbp-40h]
 * 000000014042A07D: mov     rcx, [rbp-48h]
 * 000000014042A081: mov     rax, [rbp-50h]
 * 000000014042A085: mov     rsp, rbp
 * 000000014042A088: mov     rbp, [rbp+0D8h]
 * 000000014042A08F: add     rsp, 0E8h
 * 000000014042A096: iretq
 */
