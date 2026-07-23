/*
 * XREFs of __guard_retpoline_exit @ 0x140AF9580
 * Callers:
 *     KeExitRetpoline @ 0x14034C27C (KeExitRetpoline.c)
 *     __guard_retpoline_exit_indirect_rax @ 0x140AF93A0 (__guard_retpoline_exit_indirect_rax.c)
 *     __guard_retpoline_import_r10 @ 0x140AF9420 (__guard_retpoline_import_r10.c)
 * Callees:
 *     __guard_retpoline_exit @ 0x140AF9580 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_exit @ 0x140AF9580
 * Reason: Hex-Rays returned no pseudocode for 0x140AF9580
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140AF9580: pushfq
 * 0000000140AF9582: sub     rsp, 18h
 * 0000000140AF9586: mov     [rsp+20h+var_20], rax
 * 0000000140AF958A: mov     [rsp+20h+var_18], rcx
 * 0000000140AF958F: mov     [rsp+20h+var_10], rdx
 * 0000000140AF9594: cli
 * 0000000140AF9595: movzx   eax, word ptr gs:852h
 * 0000000140AF959E: cmp     gs:864h, ax
 * 0000000140AF95A7: jz      short loc_140AF95BB
 * 0000000140AF95A9: mov     gs:864h, ax
 * 0000000140AF95B2: mov     ecx, 48h ; 'H'
 * 0000000140AF95B7: xor     edx, edx
 * 0000000140AF95B9: wrmsr
 * 0000000140AF95BB: movzx   edx, byte ptr gs:854h
 * 0000000140AF95C4: test    edx, 10h
 * 0000000140AF95CA: jz      short loc_140AF95E3
 * 0000000140AF95CC: mov     eax, 1
 * 0000000140AF95D1: xor     edx, edx
 * 0000000140AF95D3: mov     ecx, 49h ; 'I'
 * 0000000140AF95D8: wrmsr
 * 0000000140AF95DA: movzx   edx, byte ptr gs:854h
 * 0000000140AF95E3: test    edx, 40h
 * 0000000140AF95E9: jz      loc_140AF9726
 * 0000000140AF95EF: call    loc_140AF9702
 * 0000000140AF95F4: add     rsp, 8
 * 0000000140AF95F8: call    loc_140AF970B
 * 0000000140AF95FD: add     rsp, 8
 * 0000000140AF9601: call    loc_140AF95F4
 * 0000000140AF9606: add     rsp, 8
 * 0000000140AF960A: call    loc_140AF95FD
 * 0000000140AF960F: add     rsp, 8
 * 0000000140AF9613: call    loc_140AF9606
 * 0000000140AF9618: add     rsp, 8
 * 0000000140AF961C: call    loc_140AF960F
 * 0000000140AF9621: add     rsp, 8
 * 0000000140AF9625: call    loc_140AF9618
 * 0000000140AF962A: add     rsp, 8
 * 0000000140AF962E: call    loc_140AF9621
 * 0000000140AF9633: add     rsp, 8
 * 0000000140AF9637: call    loc_140AF962A
 * 0000000140AF963C: add     rsp, 8
 * 0000000140AF9640: call    loc_140AF9633
 * 0000000140AF9645: add     rsp, 8
 * 0000000140AF9649: call    loc_140AF963C
 * 0000000140AF964E: add     rsp, 8
 * 0000000140AF9652: call    loc_140AF9645
 * 0000000140AF9657: add     rsp, 8
 * 0000000140AF965B: call    loc_140AF964E
 * 0000000140AF9660: add     rsp, 8
 * 0000000140AF9664: call    loc_140AF9657
 * 0000000140AF9669: add     rsp, 8
 * 0000000140AF966D: call    loc_140AF9660
 * 0000000140AF9672: add     rsp, 8
 * 0000000140AF9676: call    loc_140AF9669
 * 0000000140AF967B: add     rsp, 8
 * 0000000140AF967F: call    loc_140AF9672
 * 0000000140AF9684: add     rsp, 8
 * 0000000140AF9688: call    loc_140AF967B
 * 0000000140AF968D: add     rsp, 8
 * 0000000140AF9691: call    loc_140AF9684
 * 0000000140AF9696: add     rsp, 8
 * 0000000140AF969A: call    loc_140AF968D
 * 0000000140AF969F: add     rsp, 8
 * 0000000140AF96A3: call    loc_140AF9696
 * 0000000140AF96A8: add     rsp, 8
 * 0000000140AF96AC: call    loc_140AF969F
 * 0000000140AF96B1: add     rsp, 8
 * 0000000140AF96B5: call    loc_140AF96A8
 * 0000000140AF96BA: add     rsp, 8
 * 0000000140AF96BE: call    loc_140AF96B1
 * 0000000140AF96C3: add     rsp, 8
 * 0000000140AF96C7: call    loc_140AF96BA
 * 0000000140AF96CC: add     rsp, 8
 * 0000000140AF96D0: call    loc_140AF96C3
 * 0000000140AF96D5: add     rsp, 8
 * 0000000140AF96D9: call    loc_140AF96CC
 * 0000000140AF96DE: add     rsp, 8
 * 0000000140AF96E2: call    loc_140AF96D5
 * 0000000140AF96E7: add     rsp, 8
 * 0000000140AF96EB: call    loc_140AF96DE
 * 0000000140AF96F0: add     rsp, 8
 * 0000000140AF96F4: call    loc_140AF96E7
 * 0000000140AF96F9: add     rsp, 8
 * 0000000140AF96FD: call    loc_140AF96F0
 * 0000000140AF9702: add     rsp, 8
 * 0000000140AF9706: call    loc_140AF96F9
 * 0000000140AF970B: add     rsp, 8
 * 0000000140AF970F: mov     eax, 0DADAh
 * 0000000140AF9714: test    byte ptr gs:862h, 8
 * 0000000140AF971D: jz      short loc_140AF9726
 * 0000000140AF971F: mov     al, 20h ; ' '
 * 0000000140AF9721: incsspq rax
 * 0000000140AF9726: lfence
 * 0000000140AF9729: or      byte ptr gs:856h, 2
 * 0000000140AF9732: bt      [rsp-0E0h+arg_F0], 9
 * 0000000140AF9739: jnb     short loc_140AF973C
 * 0000000140AF973B: sti
 * 0000000140AF973C: mov     rax, [rsp-0E0h+arg_D8]
 * 0000000140AF9740: mov     rcx, [rsp-0E0h+arg_E0]
 * 0000000140AF9745: mov     rdx, [rsp-0E0h+arg_E8]
 * 0000000140AF974A: add     rsp, 20h
 * 0000000140AF974E: retn
 */
