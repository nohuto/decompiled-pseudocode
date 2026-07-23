/*
 * XREFs of KxDebugTrapOrFault @ 0x14042C540
 * Callers:
 *     KiDebugTrapOrFault @ 0x14042C380 (KiDebugTrapOrFault.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041F330 (KiSaveDebugRegisterState.c)
 *     KxDebugTrapOrFault @ 0x14042C540 (KxDebugTrapOrFault.c)
 *     KiExceptionDispatch @ 0x140434D40 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KxDebugTrapOrFault @ 0x14042C540
 * Reason: Hex-Rays returned no pseudocode for 0x14042C540
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042C540: sub     rsp, 8
 * 000000014042C544: push    rbp
 * 000000014042C545: sub     rsp, 158h
 * 000000014042C54C: lea     rbp, [rsp+80h]
 * 000000014042C554: mov     [rbp+0E8h+var_13D], 1
 * 000000014042C558: mov     [rbp+0E8h+var_138], rax
 * 000000014042C55C: mov     [rbp+0E8h+var_130], rcx
 * 000000014042C560: mov     [rbp+0E8h+var_128], rdx
 * 000000014042C564: mov     [rbp+0E8h+var_120], r8
 * 000000014042C568: mov     [rbp+0E8h+var_118], r9
 * 000000014042C56C: mov     [rbp+0E8h+var_110], r10
 * 000000014042C570: mov     [rbp+0E8h+var_108], r11
 * 000000014042C574: test    [rbp+0E8h+arg_0], 1
 * 000000014042C57B: jnz     short loc_14042C5B7
 * 000000014042C57D: xor     edx, edx
 * 000000014042C57F: rdsspq  rdx
 * 000000014042C584: mov     [rbp+0E8h+var_90], rdx
 * 000000014042C588: lfence
 * 000000014042C58B: test    word ptr gs:860h, 1
 * 000000014042C596: jnz     short loc_14042C5A0
 * 000000014042C598: lfence
 * 000000014042C59B: jmp     loc_14042C827
 * 000000014042C5A0: movzx   eax, word ptr gs:864h
 * 000000014042C5A9: mov     ecx, 48h ; 'H'
 * 000000014042C5AE: xor     edx, edx
 * 000000014042C5B0: wrmsr
 * 000000014042C5B2: jmp     loc_14042C827
 * 000000014042C5B7: test    cs:KiKvaShadow, 1
 * 000000014042C5BE: jnz     short loc_14042C5C3
 * 000000014042C5C0: swapgs
 * 000000014042C5C3: lfence
 * 000000014042C5C6: mov     rcx, gs:95A8h
 * 000000014042C5CF: test    rcx, rcx
 * 000000014042C5D2: jz      short loc_14042C5F3
 * 000000014042C5D4: rdsspq  rdx
 * 000000014042C5D9: mov     r10, gs:95A0h
 * 000000014042C5E2: add     r10, 8
 * 000000014042C5E6: cmp     rdx, r10
 * 000000014042C5E9: jnz     short loc_14042C5F3
 * 000000014042C5EB: rstorssp qword ptr [rcx]
 * 000000014042C5EF: saveprevssp
 * 000000014042C5F3: mov     r10, gs:188h
 * 000000014042C5FC: mov     rcx, gs:188h
 * 000000014042C605: mov     rcx, [rcx+220h]
 * 000000014042C60C: mov     rcx, [rcx+9E0h]
 * 000000014042C613: mov     gs:858h, rcx
 * 000000014042C61C: mov     cx, gs:850h
 * 000000014042C625: mov     gs:852h, cx
 * 000000014042C62E: mov     cx, gs:860h
 * 000000014042C637: mov     gs:854h, cx
 * 000000014042C640: movzx   eax, word ptr gs:866h
 * 000000014042C649: cmp     gs:864h, ax
 * 000000014042C652: jz      short loc_14042C666
 * 000000014042C654: mov     gs:864h, ax
 * 000000014042C65D: mov     ecx, 48h ; 'H'
 * 000000014042C662: xor     edx, edx
 * 000000014042C664: wrmsr
 * 000000014042C666: movzx   edx, word ptr gs:860h
 * 000000014042C66F: test    edx, 8
 * 000000014042C675: jz      short loc_14042C68E
 * 000000014042C677: mov     eax, 1
 * 000000014042C67C: xor     edx, edx
 * 000000014042C67E: mov     ecx, 49h ; 'I'
 * 000000014042C683: wrmsr
 * 000000014042C685: movzx   edx, word ptr gs:860h
 * 000000014042C68E: test    edx, 2
 * 000000014042C694: jz      loc_14042C7D1
 * 000000014042C69A: call    loc_14042C7AD
 * 000000014042C69F: add     rsp, 8
 * 000000014042C6A3: call    loc_14042C7B6
 * 000000014042C6A8: add     rsp, 8
 * 000000014042C6AC: call    loc_14042C69F
 * 000000014042C6B1: add     rsp, 8
 * 000000014042C6B5: call    loc_14042C6A8
 * 000000014042C6BA: add     rsp, 8
 * 000000014042C6BE: call    loc_14042C6B1
 * 000000014042C6C3: add     rsp, 8
 * 000000014042C6C7: call    loc_14042C6BA
 * 000000014042C6CC: add     rsp, 8
 * 000000014042C6D0: call    loc_14042C6C3
 * 000000014042C6D5: add     rsp, 8
 * 000000014042C6D9: call    loc_14042C6CC
 * 000000014042C6DE: add     rsp, 8
 * 000000014042C6E2: call    loc_14042C6D5
 * 000000014042C6E7: add     rsp, 8
 * 000000014042C6EB: call    loc_14042C6DE
 * 000000014042C6F0: add     rsp, 8
 * 000000014042C6F4: call    loc_14042C6E7
 * 000000014042C6F9: add     rsp, 8
 * 000000014042C6FD: call    loc_14042C6F0
 * 000000014042C702: add     rsp, 8
 * 000000014042C706: call    loc_14042C6F9
 * 000000014042C70B: add     rsp, 8
 * 000000014042C70F: call    loc_14042C702
 * 000000014042C714: add     rsp, 8
 * 000000014042C718: call    loc_14042C70B
 * 000000014042C71D: add     rsp, 8
 * 000000014042C721: call    loc_14042C714
 * 000000014042C726: add     rsp, 8
 * 000000014042C72A: call    loc_14042C71D
 * 000000014042C72F: add     rsp, 8
 * 000000014042C733: call    loc_14042C726
 * 000000014042C738: add     rsp, 8
 * 000000014042C73C: call    loc_14042C72F
 * 000000014042C741: add     rsp, 8
 * 000000014042C745: call    loc_14042C738
 * 000000014042C74A: add     rsp, 8
 * 000000014042C74E: call    loc_14042C741
 * 000000014042C753: add     rsp, 8
 * 000000014042C757: call    loc_14042C74A
 * 000000014042C75C: add     rsp, 8
 * 000000014042C760: call    loc_14042C753
 * 000000014042C765: add     rsp, 8
 * 000000014042C769: call    loc_14042C75C
 * 000000014042C76E: add     rsp, 8
 * 000000014042C772: call    loc_14042C765
 * 000000014042C777: add     rsp, 8
 * 000000014042C77B: call    loc_14042C76E
 * 000000014042C780: add     rsp, 8
 * 000000014042C784: call    loc_14042C777
 * 000000014042C789: add     rsp, 8
 * 000000014042C78D: call    loc_14042C780
 * 000000014042C792: add     rsp, 8
 * 000000014042C796: call    loc_14042C789
 * 000000014042C79B: add     rsp, 8
 * 000000014042C79F: call    loc_14042C792
 * 000000014042C7A4: add     rsp, 8
 * 000000014042C7A8: call    loc_14042C79B
 * 000000014042C7AD: add     rsp, 8
 * 000000014042C7B1: call    loc_14042C7A4
 * 000000014042C7B6: add     rsp, 8
 * 000000014042C7BA: mov     eax, 0DADAh
 * 000000014042C7BF: test    byte ptr gs:862h, 8
 * 000000014042C7C8: jz      short loc_14042C7D1
 * 000000014042C7CA: mov     al, 20h ; ' '
 * 000000014042C7CC: incsspq rax
 * 000000014042C7D1: test    edx, 200h
 * 000000014042C7D7: jz      short loc_14042C7DE
 * 000000014042C7D9: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042C7DE: lfence
 * 000000014042C7E1: mov     byte ptr gs:856h, 0
 * 000000014042C7EA: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014042C7F1: jz      short loc_14042C812
 * 000000014042C7F3: mov     ecx, 6A7h
 * 000000014042C7F8: rdmsr
 * 000000014042C7FA: cmp     edx, 0
 * 000000014042C7FD: jz      short loc_14042C812
 * 000000014042C7FF: mov     ecx, edx
 * 000000014042C801: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014042C807: cmp     edx, ecx
 * 000000014042C809: jz      short loc_14042C812
 * 000000014042C80B: mov     ecx, 6A7h
 * 000000014042C810: wrmsr
 * 000000014042C812: test    byte ptr [r10+3], 3
 * 000000014042C817: mov     [rbp+0E8h+var_68], 0
 * 000000014042C820: jz      short loc_14042C827
 * 000000014042C822: call    KiSaveDebugRegisterState
 * 000000014042C827: cld
 * 000000014042C828: stmxcsr [rbp+0E8h+var_13C]
 * 000000014042C82C: ldmxcsr dword ptr gs:180h
 * 000000014042C835: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014042C839: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014042C83D: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014042C841: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014042C845: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014042C849: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014042C84D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042C854: jz      short loc_14042C862
 * 000000014042C856: test    [rbp+0E8h+arg_0], 1
 * 000000014042C85D: jz      short loc_14042C862
 * 000000014042C85F: stac
 * 000000014042C862: test    [rbp+0E8h+arg_8], 200h
 * 000000014042C86C: jz      short loc_14042C86F
 * 000000014042C86E: sti
 * 000000014042C86F: test    cs:KiCpuTracingFlags, 2
 * 000000014042C879: jz      short loc_14042C88E
 * 000000014042C87B: mov     ecx, 1D9h
 * 000000014042C880: rdmsr
 * 000000014042C882: or      eax, 1
 * 000000014042C885: wrmsr
 * 000000014042C887: xor     edx, edx
 * 000000014042C889: jmp     loc_14042C95D
 * 000000014042C88E: xor     edx, edx
 * 000000014042C890: test    [rbp+0E8h+arg_8], 100h
 * 000000014042C89A: jz      loc_14042C95D
 * 000000014042C8A0: test    byte ptr gs:8B22h, 2
 * 000000014042C8A9: jz      loc_14042C95D
 * 000000014042C8AF: test    [rbp+0E8h+arg_0], 1
 * 000000014042C8B6: jnz     short loc_14042C90F
 * 000000014042C8B8: mov     rax, dr7
 * 000000014042C8BB: test    ax, 200h
 * 000000014042C8BF: jz      loc_14042C95D
 * 000000014042C8C5: test    ax, 100h
 * 000000014042C8C9: jz      loc_14042C95D
 * 000000014042C8CF: mov     r8d, cs:KiLastBranchTOSMSR
 * 000000014042C8D6: or      r8d, r8d
 * 000000014042C8D9: jz      short loc_14042C8E3
 * 000000014042C8DB: mov     ecx, r8d
 * 000000014042C8DE: rdmsr
 * 000000014042C8E0: mov     r8d, eax
 * 000000014042C8E3: mov     ecx, cs:KiLastBranchFromBaseMSR
 * 000000014042C8E9: add     ecx, r8d
 * 000000014042C8EC: rdmsr
 * 000000014042C8EE: mov     r9d, eax
 * 000000014042C8F1: shl     rdx, 20h
 * 000000014042C8F5: mov     ecx, cs:KiLastBranchToBaseMSR
 * 000000014042C8FB: or      r9, rdx
 * 000000014042C8FE: add     ecx, r8d
 * 000000014042C901: rdmsr
 * 000000014042C903: mov     r10d, eax
 * 000000014042C906: shl     rdx, 20h
 * 000000014042C90A: or      r10, rdx
 * 000000014042C90D: jmp     short loc_14042C958
 * 000000014042C90F: test    [rbp+0E8h+var_68], 200h
 * 000000014042C918: jz      short loc_14042C95D
 * 000000014042C91A: test    [rbp+0E8h+var_68], 100h
 * 000000014042C923: jz      short loc_14042C95D
 * 000000014042C925: and     [rbp+0E8h+var_40], 0
 * 000000014042C92D: and     [rbp+0E8h+var_48], 0
 * 000000014042C935: mov     rcx, cs:MmUserProbeAddress
 * 000000014042C93C: mov     r9, [rbp+0E8h+var_50]
 * 000000014042C943: cmp     r9, rcx
 * 000000014042C946: cmovnb  r9, rcx
 * 000000014042C94A: mov     r10, [rbp+0E8h+var_58]
 * 000000014042C951: cmp     r10, rcx
 * 000000014042C954: cmovnb  r10, rcx
 * 000000014042C958: mov     edx, 2
 * 000000014042C95D: mov     ecx, 80000004h
 * 000000014042C962: and     [rbp+0E8h+arg_8], 0FFFFFEFFh
 * 000000014042C96C: mov     r8, [rbp+0E8h]
 * 000000014042C973: call    KiExceptionDispatch
 * 000000014042C978: nop
 * 000000014042C979: retn
 */
