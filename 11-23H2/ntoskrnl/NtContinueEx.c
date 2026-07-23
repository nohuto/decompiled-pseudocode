/*
 * XREFs of NtContinueEx @ 0x14041F520
 * Callers:
 *     NtContinue @ 0x14041F510 (NtContinue.c)
 *     RtlContinue @ 0x1405B2568 (RtlContinue.c)
 *     RtlContinueLongJump @ 0x1405B2580 (RtlContinueLongJump.c)
 * Callees:
 *     KiContinueEx @ 0x14030D1A0 (KiContinueEx.c)
 *     KiRestoreDebugRegisterState @ 0x14041F2B0 (KiRestoreDebugRegisterState.c)
 *     NtContinueEx @ 0x14041F520 (NtContinueEx.c)
 *     KiRestoreSetContextState @ 0x1404200D0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1404251B0 (KiInitiateUserApc.c)
 *     KiUpdateStibpPairing @ 0x140461220 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x1405746E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for NtContinueEx @ 0x14041F520
 * Reason: Hex-Rays returned no pseudocode for 0x14041F520
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014041F520: mov     rbx, [rbp+0C0h]
 * 000000014041F527: mov     rdi, [rbp+0C8h]
 * 000000014041F52E: mov     rsi, [rbp+0D0h]
 * 000000014041F535: xor     eax, eax
 * 000000014041F537: mov     [rbp-50h], rax
 * 000000014041F53B: sub     rsp, 138h
 * 000000014041F542: lea     rax, [rsp+138h+var_38]
 * 000000014041F54A: movaps  [rsp+138h+var_108], xmm6
 * 000000014041F54F: movaps  [rsp+138h+var_F8], xmm7
 * 000000014041F554: movaps  [rsp+138h+var_E8], xmm8
 * 000000014041F55A: movaps  [rsp+138h+var_D8], xmm9
 * 000000014041F560: movaps  [rsp+138h+var_C8], xmm10
 * 000000014041F566: movaps  xmmword ptr [rax-80h], xmm11
 * 000000014041F56B: movaps  xmmword ptr [rax-70h], xmm12
 * 000000014041F570: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014041F575: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014041F57A: movaps  xmmword ptr [rax-40h], xmm15
 * 000000014041F57F: mov     [rax], rbx
 * 000000014041F582: mov     [rax+8], rdi
 * 000000014041F586: mov     [rax+10h], rsi
 * 000000014041F58A: mov     [rax+18h], r12
 * 000000014041F58E: mov     [rax+20h], r13
 * 000000014041F592: mov     [rax+28h], r14
 * 000000014041F596: mov     [rax+30h], r15
 * 000000014041F59A: mov     r8, rsp
 * 000000014041F59D: lea     r9, [rbp-80h]
 * 000000014041F5A1: call    KiContinueEx
 * 000000014041F5A6: test    eax, eax
 * 000000014041F5A8: jle     loc_14041F986
 * 000000014041F5AE: mov     rcx, gs:188h
 * 000000014041F5B7: test    byte ptr [rbp+0F0h], 1
 * 000000014041F5BE: jnz     short loc_14041F5D7
 * 000000014041F5C0: mov     rdx, [rbp+0B8h]
 * 000000014041F5C7: mov     [rcx+90h], rdx
 * 000000014041F5CE: mov     dl, [rbp-58h]
 * 000000014041F5D1: mov     [rcx+232h], dl
 * 000000014041F5D7: lea     rcx, [rsp+138h+var_38]
 * 000000014041F5DF: movaps  xmm6, [rsp+138h+var_108]
 * 000000014041F5E4: movaps  xmm7, [rsp+138h+var_F8]
 * 000000014041F5E9: movaps  xmm8, [rsp+138h+var_E8]
 * 000000014041F5EF: movaps  xmm9, [rsp+138h+var_D8]
 * 000000014041F5F5: movaps  xmm10, [rsp+138h+var_C8]
 * 000000014041F5FB: movaps  xmm11, xmmword ptr [rcx-80h]
 * 000000014041F600: movaps  xmm12, xmmword ptr [rcx-70h]
 * 000000014041F605: movaps  xmm13, xmmword ptr [rcx-60h]
 * 000000014041F60A: movaps  xmm14, xmmword ptr [rcx-50h]
 * 000000014041F60F: movaps  xmm15, xmmword ptr [rcx-40h]
 * 000000014041F614: mov     rbx, [rcx]
 * 000000014041F617: mov     rdi, [rcx+8]
 * 000000014041F61B: mov     rsi, [rcx+10h]
 * 000000014041F61F: mov     r12, [rcx+18h]
 * 000000014041F623: mov     r13, [rcx+20h]
 * 000000014041F627: mov     r14, [rcx+28h]
 * 000000014041F62B: mov     r15, [rcx+30h]
 * 000000014041F62F: cli
 * 000000014041F630: xor     ecx, ecx
 * 000000014041F632: rdsspq  rcx
 * 000000014041F637: test    rcx, rcx
 * 000000014041F63A: jz      short loc_14041F646
 * 000000014041F63C: mov     ecx, 1
 * 000000014041F641: incsspq rcx
 * 000000014041F646: test    byte ptr [rbp+0F0h], 1
 * 000000014041F64D: jz      loc_14041F93B
 * 000000014041F653: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014041F65A: jz      short loc_14041F65F
 * 000000014041F65C: stac
 * 000000014041F65F: mov     rcx, gs:188h
 * 000000014041F668: test    byte ptr [rcx+0C2h], 3
 * 000000014041F66F: jz      short loc_14041F68C
 * 000000014041F671: mov     ecx, 1
 * 000000014041F676: mov     cr8, rcx
 * 000000014041F67A: sti
 * 000000014041F67B: call    KiInitiateUserApc
 * 000000014041F680: cli
 * 000000014041F681: mov     ecx, 0
 * 000000014041F686: mov     cr8, rcx
 * 000000014041F68A: jmp     short loc_14041F65F
 * 000000014041F68C: test    byte ptr gs:86Ch, 2
 * 000000014041F695: jz      short loc_14041F69E
 * 000000014041F697: xor     ecx, ecx
 * 000000014041F699: call    KiUpdateStibpPairing
 * 000000014041F69E: mov     rcx, gs:188h
 * 000000014041F6A7: test    dword ptr [rcx], 8000000h
 * 000000014041F6AD: jz      short loc_14041F6B4
 * 000000014041F6AF: call    KiRestoreSetContextState
 * 000000014041F6B4: mov     rcx, gs:188h
 * 000000014041F6BD: test    dword ptr [rcx], 10000h
 * 000000014041F6C3: jz      short loc_14041F6D9
 * 000000014041F6C5: test    byte ptr [rcx+2], 1
 * 000000014041F6C9: jz      short loc_14041F6D9
 * 000000014041F6CB: call    KiCopyCounters
 * 000000014041F6D0: mov     rcx, gs:188h
 * 000000014041F6D9: ldmxcsr dword ptr [rbp-54h]
 * 000000014041F6DD: cmp     word ptr [rbp+80h], 0
 * 000000014041F6E5: jz      short loc_14041F6EC
 * 000000014041F6E7: call    KiRestoreDebugRegisterState
 * 000000014041F6EC: mov     rcx, gs:188h
 * 000000014041F6F5: bt      dword ptr [rcx+74h], 16h
 * 000000014041F6FA: jnb     short loc_14041F726
 * 000000014041F6FC: xor     ecx, ecx
 * 000000014041F6FE: rdsspq  rcx
 * 000000014041F703: mov     r8, gs:95A8h
 * 000000014041F70C: add     r8, 8
 * 000000014041F710: cmp     rcx, r8
 * 000000014041F713: jnz     short loc_14041F726
 * 000000014041F715: mov     rcx, gs:95A0h
 * 000000014041F71E: rstorssp qword ptr [rcx]
 * 000000014041F722: saveprevssp
 * 000000014041F726: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014041F72A: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014041F72E: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014041F732: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014041F736: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014041F73A: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014041F73E: mov     r11, [rbp-20h]
 * 000000014041F742: mov     r10, [rbp-28h]
 * 000000014041F746: mov     r9, [rbp-30h]
 * 000000014041F74A: mov     r8, [rbp-38h]
 * 000000014041F74E: mov     byte ptr gs:856h, 0
 * 000000014041F757: movzx   eax, word ptr gs:86Ah
 * 000000014041F760: cmp     gs:864h, ax
 * 000000014041F769: jz      short loc_14041F77D
 * 000000014041F76B: mov     gs:864h, ax
 * 000000014041F774: mov     ecx, 48h ; 'H'
 * 000000014041F779: xor     edx, edx
 * 000000014041F77B: wrmsr
 * 000000014041F77D: btr     word ptr gs:860h, 2
 * 000000014041F788: jnb     short loc_14041F798
 * 000000014041F78A: mov     eax, 1
 * 000000014041F78F: xor     edx, edx
 * 000000014041F791: mov     ecx, 49h ; 'I'
 * 000000014041F796: wrmsr
 * 000000014041F798: btr     word ptr gs:860h, 5
 * 000000014041F7A3: jnb     loc_14041F8E0
 * 000000014041F7A9: call    loc_14041F8BC
 * 000000014041F7AE: add     rsp, 8
 * 000000014041F7B2: call    loc_14041F8C5
 * 000000014041F7B7: add     rsp, 8
 * 000000014041F7BB: call    loc_14041F7AE
 * 000000014041F7C0: add     rsp, 8
 * 000000014041F7C4: call    loc_14041F7B7
 * 000000014041F7C9: add     rsp, 8
 * 000000014041F7CD: call    loc_14041F7C0
 * 000000014041F7D2: add     rsp, 8
 * 000000014041F7D6: call    loc_14041F7C9
 * 000000014041F7DB: add     rsp, 8
 * 000000014041F7DF: call    loc_14041F7D2
 * 000000014041F7E4: add     rsp, 8
 * 000000014041F7E8: call    loc_14041F7DB
 * 000000014041F7ED: add     rsp, 8
 * 000000014041F7F1: call    loc_14041F7E4
 * 000000014041F7F6: add     rsp, 8
 * 000000014041F7FA: call    loc_14041F7ED
 * 000000014041F7FF: add     rsp, 8
 * 000000014041F803: call    loc_14041F7F6
 * 000000014041F808: add     rsp, 8
 * 000000014041F80C: call    loc_14041F7FF
 * 000000014041F811: add     rsp, 8
 * 000000014041F815: call    loc_14041F808
 * 000000014041F81A: add     rsp, 8
 * 000000014041F81E: call    loc_14041F811
 * 000000014041F823: add     rsp, 8
 * 000000014041F827: call    loc_14041F81A
 * 000000014041F82C: add     rsp, 8
 * 000000014041F830: call    loc_14041F823
 * 000000014041F835: add     rsp, 8
 * 000000014041F839: call    loc_14041F82C
 * 000000014041F83E: add     rsp, 8
 * 000000014041F842: call    loc_14041F835
 * 000000014041F847: add     rsp, 8
 * 000000014041F84B: call    loc_14041F83E
 * 000000014041F850: add     rsp, 8
 * 000000014041F854: call    loc_14041F847
 * 000000014041F859: add     rsp, 8
 * 000000014041F85D: call    loc_14041F850
 * 000000014041F862: add     rsp, 8
 * 000000014041F866: call    loc_14041F859
 * 000000014041F86B: add     rsp, 8
 * 000000014041F86F: call    loc_14041F862
 * 000000014041F874: add     rsp, 8
 * 000000014041F878: call    loc_14041F86B
 * 000000014041F87D: add     rsp, 8
 * 000000014041F881: call    loc_14041F874
 * 000000014041F886: add     rsp, 8
 * 000000014041F88A: call    loc_14041F87D
 * 000000014041F88F: add     rsp, 8
 * 000000014041F893: call    loc_14041F886
 * 000000014041F898: add     rsp, 8
 * 000000014041F89C: call    loc_14041F88F
 * 000000014041F8A1: add     rsp, 8
 * 000000014041F8A5: call    loc_14041F898
 * 000000014041F8AA: add     rsp, 8
 * 000000014041F8AE: call    loc_14041F8A1
 * 000000014041F8B3: add     rsp, 8
 * 000000014041F8B7: call    loc_14041F8AA
 * 000000014041F8BC: add     rsp, 8
 * 000000014041F8C0: call    loc_14041F8B3
 * 000000014041F8C5: add     rsp, 8
 * 000000014041F8C9: mov     eax, 0DADAh
 * 000000014041F8CE: test    byte ptr gs:862h, 8
 * 000000014041F8D7: jz      short loc_14041F8E0
 * 000000014041F8D9: mov     al, 20h ; ' '
 * 000000014041F8DB: incsspq rax
 * 000000014041F8E0: test    word ptr gs:860h, 80h
 * 000000014041F8EB: jz      short loc_14041F8F9
 * 000000014041F8ED: xor     eax, eax
 * 000000014041F8EF: xor     edx, edx
 * 000000014041F8F1: mov     ecx, 1
 * 000000014041F8F6: div     rcx
 * 000000014041F8F9: mov     rdx, [rbp-40h]
 * 000000014041F8FD: mov     rcx, [rbp-48h]
 * 000000014041F901: mov     rax, [rbp-50h]
 * 000000014041F905: mov     rsp, rbp
 * 000000014041F908: mov     rbp, [rbp+0D8h]
 * 000000014041F90F: add     rsp, 0E8h
 * 000000014041F916: test    cs:KiKvaShadow, 1
 * 000000014041F91D: jz      short loc_14041F924
 * 000000014041F91F: jmp     KiKernelExit
 * 000000014041F924: test    word ptr gs:860h, 100h
 * 000000014041F92F: jz      short loc_14041F936
 * 000000014041F931: verw    [rsp-1E8h+arg_200]
 * 000000014041F936: swapgs
 * 000000014041F939: iretq
 * 000000014041F93B: ldmxcsr dword ptr [rbp-54h]
 * 000000014041F93F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014041F943: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014041F947: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014041F94B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014041F94F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014041F953: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014041F957: mov     r11, [rbp-20h]
 * 000000014041F95B: mov     r10, [rbp-28h]
 * 000000014041F95F: mov     r9, [rbp-30h]
 * 000000014041F963: mov     r8, [rbp-38h]
 * 000000014041F967: mov     rdx, [rbp-40h]
 * 000000014041F96B: mov     rcx, [rbp-48h]
 * 000000014041F96F: mov     rax, [rbp-50h]
 * 000000014041F973: mov     rsp, rbp
 * 000000014041F976: mov     rbp, [rbp+0D8h]
 * 000000014041F97D: add     rsp, 0E8h
 * 000000014041F984: iretq
 * 000000014041F986: add     rsp, 138h
 * 000000014041F98D: retn
 */
