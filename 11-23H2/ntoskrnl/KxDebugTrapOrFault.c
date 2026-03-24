/*
 * XREFs of KxDebugTrapOrFault @ 0x14042C140
 * Callers:
 *     KiDebugTrapOrFault @ 0x14042BF80 (KiDebugTrapOrFault.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041EFA0 (KiSaveDebugRegisterState.c)
 *     KxDebugTrapOrFault @ 0x14042C140 (KxDebugTrapOrFault.c)
 *     KiExceptionDispatch @ 0x140434940 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435300 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KxDebugTrapOrFault @ 0x14042C140
 * Reason: Hex-Rays returned no pseudocode for 0x14042C140
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042C140: sub     rsp, 8
 * 000000014042C144: push    rbp
 * 000000014042C145: sub     rsp, 158h
 * 000000014042C14C: lea     rbp, [rsp+80h]
 * 000000014042C154: mov     [rbp+0E8h+var_13D], 1
 * 000000014042C158: mov     [rbp+0E8h+var_138], rax
 * 000000014042C15C: mov     [rbp+0E8h+var_130], rcx
 * 000000014042C160: mov     [rbp+0E8h+var_128], rdx
 * 000000014042C164: mov     [rbp+0E8h+var_120], r8
 * 000000014042C168: mov     [rbp+0E8h+var_118], r9
 * 000000014042C16C: mov     [rbp+0E8h+var_110], r10
 * 000000014042C170: mov     [rbp+0E8h+var_108], r11
 * 000000014042C174: test    [rbp+0E8h+arg_0], 1
 * 000000014042C17B: jnz     short loc_14042C1B7
 * 000000014042C17D: xor     edx, edx
 * 000000014042C17F: rdsspq  rdx
 * 000000014042C184: mov     [rbp+0E8h+var_90], rdx
 * 000000014042C188: lfence
 * 000000014042C18B: test    word ptr gs:860h, 1
 * 000000014042C196: jnz     short loc_14042C1A0
 * 000000014042C198: lfence
 * 000000014042C19B: jmp     loc_14042C427
 * 000000014042C1A0: movzx   eax, word ptr gs:864h
 * 000000014042C1A9: mov     ecx, 48h ; 'H'
 * 000000014042C1AE: xor     edx, edx
 * 000000014042C1B0: wrmsr
 * 000000014042C1B2: jmp     loc_14042C427
 * 000000014042C1B7: test    cs:KiKvaShadow, 1
 * 000000014042C1BE: jnz     short loc_14042C1C3
 * 000000014042C1C0: swapgs
 * 000000014042C1C3: lfence
 * 000000014042C1C6: mov     rcx, gs:95A8h
 * 000000014042C1CF: test    rcx, rcx
 * 000000014042C1D2: jz      short loc_14042C1F3
 * 000000014042C1D4: rdsspq  rdx
 * 000000014042C1D9: mov     r10, gs:95A0h
 * 000000014042C1E2: add     r10, 8
 * 000000014042C1E6: cmp     rdx, r10
 * 000000014042C1E9: jnz     short loc_14042C1F3
 * 000000014042C1EB: rstorssp qword ptr [rcx]
 * 000000014042C1EF: saveprevssp
 * 000000014042C1F3: mov     r10, gs:188h
 * 000000014042C1FC: mov     rcx, gs:188h
 * 000000014042C205: mov     rcx, [rcx+220h]
 * 000000014042C20C: mov     rcx, [rcx+9E0h]
 * 000000014042C213: mov     gs:858h, rcx
 * 000000014042C21C: mov     cx, gs:850h
 * 000000014042C225: mov     gs:852h, cx
 * 000000014042C22E: mov     cx, gs:860h
 * 000000014042C237: mov     gs:854h, cx
 * 000000014042C240: movzx   eax, word ptr gs:866h
 * 000000014042C249: cmp     gs:864h, ax
 * 000000014042C252: jz      short loc_14042C266
 * 000000014042C254: mov     gs:864h, ax
 * 000000014042C25D: mov     ecx, 48h ; 'H'
 * 000000014042C262: xor     edx, edx
 * 000000014042C264: wrmsr
 * 000000014042C266: movzx   edx, word ptr gs:860h
 * 000000014042C26F: test    edx, 8
 * 000000014042C275: jz      short loc_14042C28E
 * 000000014042C277: mov     eax, 1
 * 000000014042C27C: xor     edx, edx
 * 000000014042C27E: mov     ecx, 49h ; 'I'
 * 000000014042C283: wrmsr
 * 000000014042C285: movzx   edx, word ptr gs:860h
 * 000000014042C28E: test    edx, 2
 * 000000014042C294: jz      loc_14042C3D1
 * 000000014042C29A: call    loc_14042C3AD
 * 000000014042C29F: add     rsp, 8
 * 000000014042C2A3: call    loc_14042C3B6
 * 000000014042C2A8: add     rsp, 8
 * 000000014042C2AC: call    loc_14042C29F
 * 000000014042C2B1: add     rsp, 8
 * 000000014042C2B5: call    loc_14042C2A8
 * 000000014042C2BA: add     rsp, 8
 * 000000014042C2BE: call    loc_14042C2B1
 * 000000014042C2C3: add     rsp, 8
 * 000000014042C2C7: call    loc_14042C2BA
 * 000000014042C2CC: add     rsp, 8
 * 000000014042C2D0: call    loc_14042C2C3
 * 000000014042C2D5: add     rsp, 8
 * 000000014042C2D9: call    loc_14042C2CC
 * 000000014042C2DE: add     rsp, 8
 * 000000014042C2E2: call    loc_14042C2D5
 * 000000014042C2E7: add     rsp, 8
 * 000000014042C2EB: call    loc_14042C2DE
 * 000000014042C2F0: add     rsp, 8
 * 000000014042C2F4: call    loc_14042C2E7
 * 000000014042C2F9: add     rsp, 8
 * 000000014042C2FD: call    loc_14042C2F0
 * 000000014042C302: add     rsp, 8
 * 000000014042C306: call    loc_14042C2F9
 * 000000014042C30B: add     rsp, 8
 * 000000014042C30F: call    loc_14042C302
 * 000000014042C314: add     rsp, 8
 * 000000014042C318: call    loc_14042C30B
 * 000000014042C31D: add     rsp, 8
 * 000000014042C321: call    loc_14042C314
 * 000000014042C326: add     rsp, 8
 * 000000014042C32A: call    loc_14042C31D
 * 000000014042C32F: add     rsp, 8
 * 000000014042C333: call    loc_14042C326
 * 000000014042C338: add     rsp, 8
 * 000000014042C33C: call    loc_14042C32F
 * 000000014042C341: add     rsp, 8
 * 000000014042C345: call    loc_14042C338
 * 000000014042C34A: add     rsp, 8
 * 000000014042C34E: call    loc_14042C341
 * 000000014042C353: add     rsp, 8
 * 000000014042C357: call    loc_14042C34A
 * 000000014042C35C: add     rsp, 8
 * 000000014042C360: call    loc_14042C353
 * 000000014042C365: add     rsp, 8
 * 000000014042C369: call    loc_14042C35C
 * 000000014042C36E: add     rsp, 8
 * 000000014042C372: call    loc_14042C365
 * 000000014042C377: add     rsp, 8
 * 000000014042C37B: call    loc_14042C36E
 * 000000014042C380: add     rsp, 8
 * 000000014042C384: call    loc_14042C377
 * 000000014042C389: add     rsp, 8
 * 000000014042C38D: call    loc_14042C380
 * 000000014042C392: add     rsp, 8
 * 000000014042C396: call    loc_14042C389
 * 000000014042C39B: add     rsp, 8
 * 000000014042C39F: call    loc_14042C392
 * 000000014042C3A4: add     rsp, 8
 * 000000014042C3A8: call    loc_14042C39B
 * 000000014042C3AD: add     rsp, 8
 * 000000014042C3B1: call    loc_14042C3A4
 * 000000014042C3B6: add     rsp, 8
 * 000000014042C3BA: mov     eax, 0DADAh
 * 000000014042C3BF: test    byte ptr gs:862h, 8
 * 000000014042C3C8: jz      short loc_14042C3D1
 * 000000014042C3CA: mov     al, 20h ; ' '
 * 000000014042C3CC: incsspq rax
 * 000000014042C3D1: test    edx, 200h
 * 000000014042C3D7: jz      short loc_14042C3DE
 * 000000014042C3D9: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042C3DE: lfence
 * 000000014042C3E1: mov     byte ptr gs:856h, 0
 * 000000014042C3EA: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014042C3F1: jz      short loc_14042C412
 * 000000014042C3F3: mov     ecx, 6A7h
 * 000000014042C3F8: rdmsr
 * 000000014042C3FA: cmp     edx, 0
 * 000000014042C3FD: jz      short loc_14042C412
 * 000000014042C3FF: mov     ecx, edx
 * 000000014042C401: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014042C407: cmp     edx, ecx
 * 000000014042C409: jz      short loc_14042C412
 * 000000014042C40B: mov     ecx, 6A7h
 * 000000014042C410: wrmsr
 * 000000014042C412: test    byte ptr [r10+3], 3
 * 000000014042C417: mov     [rbp+0E8h+var_68], 0
 * 000000014042C420: jz      short loc_14042C427
 * 000000014042C422: call    KiSaveDebugRegisterState
 * 000000014042C427: cld
 * 000000014042C428: stmxcsr [rbp+0E8h+var_13C]
 * 000000014042C42C: ldmxcsr dword ptr gs:180h
 * 000000014042C435: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014042C439: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014042C43D: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014042C441: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014042C445: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014042C449: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014042C44D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042C454: jz      short loc_14042C462
 * 000000014042C456: test    [rbp+0E8h+arg_0], 1
 * 000000014042C45D: jz      short loc_14042C462
 * 000000014042C45F: stac
 * 000000014042C462: test    [rbp+0E8h+arg_8], 200h
 * 000000014042C46C: jz      short loc_14042C46F
 * 000000014042C46E: sti
 * 000000014042C46F: test    cs:KiCpuTracingFlags, 2
 * 000000014042C479: jz      short loc_14042C48E
 * 000000014042C47B: mov     ecx, 1D9h
 * 000000014042C480: rdmsr
 * 000000014042C482: or      eax, 1
 * 000000014042C485: wrmsr
 * 000000014042C487: xor     edx, edx
 * 000000014042C489: jmp     loc_14042C55D
 * 000000014042C48E: xor     edx, edx
 * 000000014042C490: test    [rbp+0E8h+arg_8], 100h
 * 000000014042C49A: jz      loc_14042C55D
 * 000000014042C4A0: test    byte ptr gs:8B22h, 2
 * 000000014042C4A9: jz      loc_14042C55D
 * 000000014042C4AF: test    [rbp+0E8h+arg_0], 1
 * 000000014042C4B6: jnz     short loc_14042C50F
 * 000000014042C4B8: mov     rax, dr7
 * 000000014042C4BB: test    ax, 200h
 * 000000014042C4BF: jz      loc_14042C55D
 * 000000014042C4C5: test    ax, 100h
 * 000000014042C4C9: jz      loc_14042C55D
 * 000000014042C4CF: mov     r8d, cs:KiLastBranchTOSMSR
 * 000000014042C4D6: or      r8d, r8d
 * 000000014042C4D9: jz      short loc_14042C4E3
 * 000000014042C4DB: mov     ecx, r8d
 * 000000014042C4DE: rdmsr
 * 000000014042C4E0: mov     r8d, eax
 * 000000014042C4E3: mov     ecx, cs:KiLastBranchFromBaseMSR
 * 000000014042C4E9: add     ecx, r8d
 * 000000014042C4EC: rdmsr
 * 000000014042C4EE: mov     r9d, eax
 * 000000014042C4F1: shl     rdx, 20h
 * 000000014042C4F5: mov     ecx, cs:KiLastBranchToBaseMSR
 * 000000014042C4FB: or      r9, rdx
 * 000000014042C4FE: add     ecx, r8d
 * 000000014042C501: rdmsr
 * 000000014042C503: mov     r10d, eax
 * 000000014042C506: shl     rdx, 20h
 * 000000014042C50A: or      r10, rdx
 * 000000014042C50D: jmp     short loc_14042C558
 * 000000014042C50F: test    [rbp+0E8h+var_68], 200h
 * 000000014042C518: jz      short loc_14042C55D
 * 000000014042C51A: test    [rbp+0E8h+var_68], 100h
 * 000000014042C523: jz      short loc_14042C55D
 * 000000014042C525: and     [rbp+0E8h+var_40], 0
 * 000000014042C52D: and     [rbp+0E8h+var_48], 0
 * 000000014042C535: mov     rcx, cs:MmUserProbeAddress
 * 000000014042C53C: mov     r9, [rbp+0E8h+var_50]
 * 000000014042C543: cmp     r9, rcx
 * 000000014042C546: cmovnb  r9, rcx
 * 000000014042C54A: mov     r10, [rbp+0E8h+var_58]
 * 000000014042C551: cmp     r10, rcx
 * 000000014042C554: cmovnb  r10, rcx
 * 000000014042C558: mov     edx, 2
 * 000000014042C55D: mov     ecx, 80000004h
 * 000000014042C562: and     [rbp+0E8h+arg_8], 0FFFFFEFFh
 * 000000014042C56C: mov     r8, [rbp+0E8h]
 * 000000014042C573: call    KiExceptionDispatch
 * 000000014042C578: nop
 * 000000014042C579: retn
 */
