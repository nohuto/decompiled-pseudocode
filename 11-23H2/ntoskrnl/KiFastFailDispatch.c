/*
 * XREFs of KiFastFailDispatch @ 0x140435240
 * Callers:
 *     KiBoundFault @ 0x14042D600 (KiBoundFault.c)
 *     KiControlProtectionFault @ 0x140432540 (KiControlProtectionFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x140432C80 (KiRaiseSecurityCheckFailure.c)
 * Callees:
 *     KiDispatchException @ 0x14030CF30 (KiDispatchException.c)
 *     KiRestoreDebugRegisterState @ 0x14041F2B0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1404200D0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1404251B0 (KiInitiateUserApc.c)
 *     KiBugCheckDispatch @ 0x140434CC0 (KiBugCheckDispatch.c)
 *     KiFastFailDispatch @ 0x140435240 (KiFastFailDispatch.c)
 *     KiUpdateStibpPairing @ 0x140461220 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x1405746E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiFastFailDispatch @ 0x140435240
 * Reason: Hex-Rays returned no pseudocode for 0x140435240
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140435240: sub     rsp, 1D8h
 * 0000000140435247: lea     rax, [rsp+1D8h+var_D8]
 * 000000014043524F: movaps  [rsp+1D8h+var_1A8], xmm6
 * 0000000140435254: movaps  [rsp+1D8h+var_198], xmm7
 * 0000000140435259: movaps  [rsp+1D8h+var_188], xmm8
 * 000000014043525F: movaps  [rsp+1D8h+var_178], xmm9
 * 0000000140435265: movaps  [rsp+1D8h+var_168], xmm10
 * 000000014043526B: movaps  xmmword ptr [rax-80h], xmm11
 * 0000000140435270: movaps  xmmword ptr [rax-70h], xmm12
 * 0000000140435275: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014043527A: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014043527F: movaps  xmmword ptr [rax-40h], xmm15
 * 0000000140435284: mov     [rax], rbx
 * 0000000140435287: mov     [rax+8], rdi
 * 000000014043528B: mov     [rax+10h], rsi
 * 000000014043528F: mov     [rax+18h], r12
 * 0000000140435293: mov     [rax+20h], r13
 * 0000000140435297: mov     [rax+28h], r14
 * 000000014043529B: mov     [rax+30h], r15
 * 000000014043529F: lea     rax, [rsp+1D8h+ExceptionRecord]
 * 00000001404352A7: mov     [rax], ecx
 * 00000001404352A9: xor     ecx, ecx
 * 00000001404352AB: mov     dword ptr [rax+4], 1
 * 00000001404352B2: mov     [rax+8], rcx
 * 00000001404352B6: mov     [rax+10h], r8
 * 00000001404352BA: mov     [rax+18h], edx
 * 00000001404352BD: mov     [rax+20h], r9
 * 00000001404352C1: mov     [rax+28h], r10
 * 00000001404352C5: mov     [rax+30h], r11
 * 00000001404352C9: mov     r9b, [rbp+0F0h]
 * 00000001404352D0: and     r9b, 1
 * 00000001404352D4: cmp     r9b, 0
 * 00000001404352D8: jnz     short loc_1404352F2
 * 00000001404352DA: mov     rdx, [rax+20h]
 * 00000001404352DE: xor     r10, r10
 * 00000001404352E1: mov     r9, rax
 * 00000001404352E4: lea     r8, [rbp-80h]
 * 00000001404352E8: mov     ecx, 139h
 * 00000001404352ED: call    KiBugCheckDispatch
 * 00000001404352F2: mov     [rsp+1D8h+var_1B8], 0; char
 * 00000001404352F7: lea     r8, [rbp-80h]
 * 00000001404352FB: mov     rdx, rsp
 * 00000001404352FE: mov     rcx, rax; ExceptionRecord
 * 0000000140435301: call    KiDispatchException
 * 0000000140435306: lea     rcx, [rsp+1D8h+var_D8]
 * 000000014043530E: movaps  xmm6, [rsp+1D8h+var_1A8]
 * 0000000140435313: movaps  xmm7, [rsp+1D8h+var_198]
 * 0000000140435318: movaps  xmm8, [rsp+1D8h+var_188]
 * 000000014043531E: movaps  xmm9, [rsp+1D8h+var_178]
 * 0000000140435324: movaps  xmm10, [rsp+1D8h+var_168]
 * 000000014043532A: movaps  xmm11, xmmword ptr [rcx-80h]
 * 000000014043532F: movaps  xmm12, xmmword ptr [rcx-70h]
 * 0000000140435334: movaps  xmm13, xmmword ptr [rcx-60h]
 * 0000000140435339: movaps  xmm14, xmmword ptr [rcx-50h]
 * 000000014043533E: movaps  xmm15, xmmword ptr [rcx-40h]
 * 0000000140435343: mov     rbx, [rcx]
 * 0000000140435346: mov     rdi, [rcx+8]
 * 000000014043534A: mov     rsi, [rcx+10h]
 * 000000014043534E: mov     r12, [rcx+18h]
 * 0000000140435352: mov     r13, [rcx+20h]
 * 0000000140435356: mov     r14, [rcx+28h]
 * 000000014043535A: mov     r15, [rcx+30h]
 * 000000014043535E: cli
 * 000000014043535F: xor     ecx, ecx
 * 0000000140435361: rdsspq  rcx
 * 0000000140435366: test    rcx, rcx
 * 0000000140435369: jz      short loc_140435375
 * 000000014043536B: mov     ecx, 1
 * 0000000140435370: incsspq rcx
 * 0000000140435375: test    byte ptr [rbp+0F0h], 1
 * 000000014043537C: jz      loc_14043566A
 * 0000000140435382: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140435389: jz      short loc_14043538E
 * 000000014043538B: stac
 * 000000014043538E: mov     rcx, gs:188h
 * 0000000140435397: test    byte ptr [rcx+0C2h], 3
 * 000000014043539E: jz      short loc_1404353BB
 * 00000001404353A0: mov     ecx, 1
 * 00000001404353A5: mov     cr8, rcx
 * 00000001404353A9: sti
 * 00000001404353AA: call    KiInitiateUserApc
 * 00000001404353AF: cli
 * 00000001404353B0: mov     ecx, 0
 * 00000001404353B5: mov     cr8, rcx
 * 00000001404353B9: jmp     short loc_14043538E
 * 00000001404353BB: test    byte ptr gs:86Ch, 2
 * 00000001404353C4: jz      short loc_1404353CD
 * 00000001404353C6: xor     ecx, ecx
 * 00000001404353C8: call    KiUpdateStibpPairing
 * 00000001404353CD: mov     rcx, gs:188h
 * 00000001404353D6: test    dword ptr [rcx], 8000000h
 * 00000001404353DC: jz      short loc_1404353E3
 * 00000001404353DE: call    KiRestoreSetContextState
 * 00000001404353E3: mov     rcx, gs:188h
 * 00000001404353EC: test    dword ptr [rcx], 10000h
 * 00000001404353F2: jz      short loc_140435408
 * 00000001404353F4: test    byte ptr [rcx+2], 1
 * 00000001404353F8: jz      short loc_140435408
 * 00000001404353FA: call    KiCopyCounters
 * 00000001404353FF: mov     rcx, gs:188h
 * 0000000140435408: ldmxcsr dword ptr [rbp-54h]
 * 000000014043540C: cmp     word ptr [rbp+80h], 0
 * 0000000140435414: jz      short loc_14043541B
 * 0000000140435416: call    KiRestoreDebugRegisterState
 * 000000014043541B: mov     rcx, gs:188h
 * 0000000140435424: bt      dword ptr [rcx+74h], 16h
 * 0000000140435429: jnb     short loc_140435455
 * 000000014043542B: xor     ecx, ecx
 * 000000014043542D: rdsspq  rcx
 * 0000000140435432: mov     r8, gs:95A8h
 * 000000014043543B: add     r8, 8
 * 000000014043543F: cmp     rcx, r8
 * 0000000140435442: jnz     short loc_140435455
 * 0000000140435444: mov     rcx, gs:95A0h
 * 000000014043544D: rstorssp qword ptr [rcx]
 * 0000000140435451: saveprevssp
 * 0000000140435455: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140435459: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014043545D: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140435461: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140435465: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140435469: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014043546D: mov     r11, [rbp-20h]
 * 0000000140435471: mov     r10, [rbp-28h]
 * 0000000140435475: mov     r9, [rbp-30h]
 * 0000000140435479: mov     r8, [rbp-38h]
 * 000000014043547D: mov     byte ptr gs:856h, 0
 * 0000000140435486: movzx   eax, word ptr gs:86Ah
 * 000000014043548F: cmp     gs:864h, ax
 * 0000000140435498: jz      short loc_1404354AC
 * 000000014043549A: mov     gs:864h, ax
 * 00000001404354A3: mov     ecx, 48h ; 'H'
 * 00000001404354A8: xor     edx, edx
 * 00000001404354AA: wrmsr
 * 00000001404354AC: btr     word ptr gs:860h, 2
 * 00000001404354B7: jnb     short loc_1404354C7
 * 00000001404354B9: mov     eax, 1
 * 00000001404354BE: xor     edx, edx
 * 00000001404354C0: mov     ecx, 49h ; 'I'
 * 00000001404354C5: wrmsr
 * 00000001404354C7: btr     word ptr gs:860h, 5
 * 00000001404354D2: jnb     loc_14043560F
 * 00000001404354D8: call    loc_1404355EB
 * 00000001404354DD: add     rsp, 8
 * 00000001404354E1: call    loc_1404355F4
 * 00000001404354E6: add     rsp, 8
 * 00000001404354EA: call    loc_1404354DD
 * 00000001404354EF: add     rsp, 8
 * 00000001404354F3: call    loc_1404354E6
 * 00000001404354F8: add     rsp, 8
 * 00000001404354FC: call    loc_1404354EF
 * 0000000140435501: add     rsp, 8
 * 0000000140435505: call    loc_1404354F8
 * 000000014043550A: add     rsp, 8
 * 000000014043550E: call    loc_140435501
 * 0000000140435513: add     rsp, 8
 * 0000000140435517: call    loc_14043550A
 * 000000014043551C: add     rsp, 8
 * 0000000140435520: call    loc_140435513
 * 0000000140435525: add     rsp, 8
 * 0000000140435529: call    loc_14043551C
 * 000000014043552E: add     rsp, 8
 * 0000000140435532: call    loc_140435525
 * 0000000140435537: add     rsp, 8
 * 000000014043553B: call    loc_14043552E
 * 0000000140435540: add     rsp, 8
 * 0000000140435544: call    loc_140435537
 * 0000000140435549: add     rsp, 8
 * 000000014043554D: call    loc_140435540
 * 0000000140435552: add     rsp, 8
 * 0000000140435556: call    loc_140435549
 * 000000014043555B: add     rsp, 8
 * 000000014043555F: call    loc_140435552
 * 0000000140435564: add     rsp, 8
 * 0000000140435568: call    loc_14043555B
 * 000000014043556D: add     rsp, 8
 * 0000000140435571: call    loc_140435564
 * 0000000140435576: add     rsp, 8
 * 000000014043557A: call    loc_14043556D
 * 000000014043557F: add     rsp, 8
 * 0000000140435583: call    loc_140435576
 * 0000000140435588: add     rsp, 8
 * 000000014043558C: call    loc_14043557F
 * 0000000140435591: add     rsp, 8
 * 0000000140435595: call    loc_140435588
 * 000000014043559A: add     rsp, 8
 * 000000014043559E: call    loc_140435591
 * 00000001404355A3: add     rsp, 8
 * 00000001404355A7: call    loc_14043559A
 * 00000001404355AC: add     rsp, 8
 * 00000001404355B0: call    loc_1404355A3
 * 00000001404355B5: add     rsp, 8
 * 00000001404355B9: call    loc_1404355AC
 * 00000001404355BE: add     rsp, 8
 * 00000001404355C2: call    loc_1404355B5
 * 00000001404355C7: add     rsp, 8
 * 00000001404355CB: call    loc_1404355BE
 * 00000001404355D0: add     rsp, 8
 * 00000001404355D4: call    loc_1404355C7
 * 00000001404355D9: add     rsp, 8
 * 00000001404355DD: call    loc_1404355D0
 * 00000001404355E2: add     rsp, 8
 * 00000001404355E6: call    loc_1404355D9
 * 00000001404355EB: add     rsp, 8
 * 00000001404355EF: call    loc_1404355E2
 * 00000001404355F4: add     rsp, 8
 * 00000001404355F8: mov     eax, 0DADAh
 * 00000001404355FD: test    byte ptr gs:862h, 8
 * 0000000140435606: jz      short loc_14043560F
 * 0000000140435608: mov     al, 20h ; ' '
 * 000000014043560A: incsspq rax
 * 000000014043560F: test    word ptr gs:860h, 80h
 * 000000014043561A: jz      short loc_140435628
 * 000000014043561C: xor     eax, eax
 * 000000014043561E: xor     edx, edx
 * 0000000140435620: mov     ecx, 1
 * 0000000140435625: div     rcx
 * 0000000140435628: mov     rdx, [rbp-40h]
 * 000000014043562C: mov     rcx, [rbp-48h]
 * 0000000140435630: mov     rax, [rbp-50h]
 * 0000000140435634: mov     rsp, rbp
 * 0000000140435637: mov     rbp, [rbp+0D8h]
 * 000000014043563E: add     rsp, 0E8h
 * 0000000140435645: test    cs:KiKvaShadow, 1
 * 000000014043564C: jz      short loc_140435653
 * 000000014043564E: jmp     KiKernelExit
 * 0000000140435653: test    word ptr gs:860h, 100h
 * 000000014043565E: jz      short loc_140435665
 * 0000000140435660: verw    [rsp-1E8h+arg_200]
 * 0000000140435665: swapgs
 * 0000000140435668: iretq
 * 000000014043566A: ldmxcsr dword ptr [rbp-54h]
 * 000000014043566E: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140435672: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140435676: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014043567A: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014043567E: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140435682: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140435686: mov     r11, [rbp-20h]
 * 000000014043568A: mov     r10, [rbp-28h]
 * 000000014043568E: mov     r9, [rbp-30h]
 * 0000000140435692: mov     r8, [rbp-38h]
 * 0000000140435696: mov     rdx, [rbp-40h]
 * 000000014043569A: mov     rcx, [rbp-48h]
 * 000000014043569E: mov     rax, [rbp-50h]
 * 00000001404356A2: mov     rsp, rbp
 * 00000001404356A5: mov     rbp, [rbp+0D8h]
 * 00000001404356AC: add     rsp, 0E8h
 * 00000001404356B3: iretq
 */
