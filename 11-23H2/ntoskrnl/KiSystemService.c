/*
 * XREFs of KiSystemService @ 0x140433300
 * Callers:
 *     KiSystemServiceShadow @ 0x140AF6EC0 (KiSystemServiceShadow.c)
 * Callees:
 *     KiSystemService @ 0x140433300 (KiSystemService.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435300 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemService @ 0x140433300
 * Reason: Hex-Rays returned no pseudocode for 0x140433300
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140433300: cmp     [rsp+arg_0], 23h ; '#'
 * 0000000140433306: jz      KiSystemService32User
 * 000000014043330C: test    cs:KiKvaShadow, 1
 * 0000000140433313: jnz     short loc_140433318
 * 0000000140433315: swapgs
 * 0000000140433318: lfence
 * 000000014043331B: mov     rcx, gs:95A8h
 * 0000000140433324: test    rcx, rcx
 * 0000000140433327: jz      short loc_140433331
 * 0000000140433329: rstorssp qword ptr [rcx]
 * 000000014043332D: saveprevssp
 * 0000000140433331: mov     rcx, r10
 * 0000000140433334: sub     rsp, 8
 * 0000000140433338: push    rbp
 * 0000000140433339: sub     rsp, 158h
 * 0000000140433340: lea     rbp, [rsp+168h+var_E8]
 * 0000000140433348: mov     [rbp+0C0h], rbx
 * 000000014043334F: mov     [rbp+0C8h], rdi
 * 0000000140433356: mov     [rbp+0D0h], rsi
 * 000000014043335D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140433364: jz      short loc_140433372
 * 0000000140433366: test    byte ptr [rbp+0F0h], 1
 * 000000014043336D: jz      short loc_140433372
 * 000000014043336F: stac
 * 0000000140433372: mov     [rbp-50h], rax
 * 0000000140433376: mov     [rbp-48h], rcx
 * 000000014043337A: mov     [rbp-40h], rdx
 * 000000014043337E: mov     rcx, gs:188h
 * 0000000140433387: mov     rcx, [rcx+220h]
 * 000000014043338E: mov     rcx, [rcx+9E0h]
 * 0000000140433395: mov     gs:858h, rcx
 * 000000014043339E: mov     cx, gs:850h
 * 00000001404333A7: mov     gs:852h, cx
 * 00000001404333B0: mov     cx, gs:860h
 * 00000001404333B9: mov     gs:854h, cx
 * 00000001404333C2: movzx   eax, word ptr gs:866h
 * 00000001404333CB: cmp     gs:864h, ax
 * 00000001404333D4: jz      short loc_1404333E8
 * 00000001404333D6: mov     gs:864h, ax
 * 00000001404333DF: mov     ecx, 48h ; 'H'
 * 00000001404333E4: xor     edx, edx
 * 00000001404333E6: wrmsr
 * 00000001404333E8: movzx   edx, word ptr gs:860h
 * 00000001404333F1: test    edx, 8
 * 00000001404333F7: jz      short loc_140433410
 * 00000001404333F9: mov     eax, 1
 * 00000001404333FE: xor     edx, edx
 * 0000000140433400: mov     ecx, 49h ; 'I'
 * 0000000140433405: wrmsr
 * 0000000140433407: movzx   edx, word ptr gs:860h
 * 0000000140433410: test    edx, 2
 * 0000000140433416: jz      loc_140433553
 * 000000014043341C: call    loc_14043352F
 * 0000000140433421: add     rsp, 8
 * 0000000140433425: call    loc_140433538
 * 000000014043342A: add     rsp, 8
 * 000000014043342E: call    loc_140433421
 * 0000000140433433: add     rsp, 8
 * 0000000140433437: call    loc_14043342A
 * 000000014043343C: add     rsp, 8
 * 0000000140433440: call    loc_140433433
 * 0000000140433445: add     rsp, 8
 * 0000000140433449: call    loc_14043343C
 * 000000014043344E: add     rsp, 8
 * 0000000140433452: call    loc_140433445
 * 0000000140433457: add     rsp, 8
 * 000000014043345B: call    loc_14043344E
 * 0000000140433460: add     rsp, 8
 * 0000000140433464: call    loc_140433457
 * 0000000140433469: add     rsp, 8
 * 000000014043346D: call    loc_140433460
 * 0000000140433472: add     rsp, 8
 * 0000000140433476: call    loc_140433469
 * 000000014043347B: add     rsp, 8
 * 000000014043347F: call    loc_140433472
 * 0000000140433484: add     rsp, 8
 * 0000000140433488: call    loc_14043347B
 * 000000014043348D: add     rsp, 8
 * 0000000140433491: call    loc_140433484
 * 0000000140433496: add     rsp, 8
 * 000000014043349A: call    loc_14043348D
 * 000000014043349F: add     rsp, 8
 * 00000001404334A3: call    loc_140433496
 * 00000001404334A8: add     rsp, 8
 * 00000001404334AC: call    loc_14043349F
 * 00000001404334B1: add     rsp, 8
 * 00000001404334B5: call    loc_1404334A8
 * 00000001404334BA: add     rsp, 8
 * 00000001404334BE: call    loc_1404334B1
 * 00000001404334C3: add     rsp, 8
 * 00000001404334C7: call    loc_1404334BA
 * 00000001404334CC: add     rsp, 8
 * 00000001404334D0: call    loc_1404334C3
 * 00000001404334D5: add     rsp, 8
 * 00000001404334D9: call    loc_1404334CC
 * 00000001404334DE: add     rsp, 8
 * 00000001404334E2: call    loc_1404334D5
 * 00000001404334E7: add     rsp, 8
 * 00000001404334EB: call    loc_1404334DE
 * 00000001404334F0: add     rsp, 8
 * 00000001404334F4: call    loc_1404334E7
 * 00000001404334F9: add     rsp, 8
 * 00000001404334FD: call    loc_1404334F0
 * 0000000140433502: add     rsp, 8
 * 0000000140433506: call    loc_1404334F9
 * 000000014043350B: add     rsp, 8
 * 000000014043350F: call    loc_140433502
 * 0000000140433514: add     rsp, 8
 * 0000000140433518: call    loc_14043350B
 * 000000014043351D: add     rsp, 8
 * 0000000140433521: call    loc_140433514
 * 0000000140433526: add     rsp, 8
 * 000000014043352A: call    loc_14043351D
 * 000000014043352F: add     rsp, 8
 * 0000000140433533: call    loc_140433526
 * 0000000140433538: add     rsp, 8
 * 000000014043353C: mov     eax, 0DADAh
 * 0000000140433541: test    byte ptr gs:862h, 8
 * 000000014043354A: jz      short loc_140433553
 * 000000014043354C: mov     al, 20h ; ' '
 * 000000014043354E: incsspq rax
 * 0000000140433553: test    edx, 200h
 * 0000000140433559: jz      short loc_140433560
 * 000000014043355B: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140433560: lfence
 * 0000000140433563: mov     byte ptr gs:856h, 0
 * 000000014043356C: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140433573: jz      short loc_140433594
 * 0000000140433575: mov     ecx, 6A7h
 * 000000014043357A: rdmsr
 * 000000014043357C: cmp     edx, 0
 * 000000014043357F: jz      short loc_140433594
 * 0000000140433581: mov     ecx, edx
 * 0000000140433583: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140433589: cmp     edx, ecx
 * 000000014043358B: jz      short loc_140433594
 * 000000014043358D: mov     ecx, 6A7h
 * 0000000140433592: wrmsr
 * 0000000140433594: jmp     KiSystemServiceUser
 * 0000000140433599: retn
 */
