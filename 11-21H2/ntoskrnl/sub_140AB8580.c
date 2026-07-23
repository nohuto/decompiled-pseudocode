/*
 * XREFs of sub_140AB8580 @ 0x140AB8580
 * Callers:
 *     sub_14024B6F8 @ 0x14024B6F8 (sub_14024B6F8.c)
 *     sub_140AB83A0 @ 0x140AB83A0 (sub_140AB83A0.c)
 *     sub_140AB8420 @ 0x140AB8420 (sub_140AB8420.c)
 * Callees:
 *     sub_140AB8580 @ 0x140AB8580 (sub_140AB8580.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140AB8580 @ 0x140AB8580
 * Reason: Hex-Rays returned no pseudocode for 0x140AB8580
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140AB8580: pushfq
 * 0000000140AB8582: sub     rsp, 18h
 * 0000000140AB8586: mov     [rsp+20h+var_20], rax
 * 0000000140AB858A: mov     [rsp+20h+var_18], rcx
 * 0000000140AB858F: mov     [rsp+20h+var_10], rdx
 * 0000000140AB8594: cli
 * 0000000140AB8595: movzx   eax, word ptr gs:852h
 * 0000000140AB859E: cmp     gs:864h, ax
 * 0000000140AB85A7: jz      short loc_140AB85BB
 * 0000000140AB85A9: mov     gs:864h, ax
 * 0000000140AB85B2: mov     ecx, 48h ; 'H'
 * 0000000140AB85B7: xor     edx, edx
 * 0000000140AB85B9: wrmsr
 * 0000000140AB85BB: movzx   edx, byte ptr gs:854h
 * 0000000140AB85C4: test    edx, 10h
 * 0000000140AB85CA: jz      short loc_140AB85E3
 * 0000000140AB85CC: mov     eax, 1
 * 0000000140AB85D1: xor     edx, edx
 * 0000000140AB85D3: mov     ecx, 49h ; 'I'
 * 0000000140AB85D8: wrmsr
 * 0000000140AB85DA: movzx   edx, byte ptr gs:854h
 * 0000000140AB85E3: test    edx, 40h
 * 0000000140AB85E9: jz      loc_140AB8726
 * 0000000140AB85EF: call    loc_140AB8702
 * 0000000140AB85F4: add     rsp, 8
 * 0000000140AB85F8: call    loc_140AB870B
 * 0000000140AB85FD: add     rsp, 8
 * 0000000140AB8601: call    loc_140AB85F4
 * 0000000140AB8606: add     rsp, 8
 * 0000000140AB860A: call    loc_140AB85FD
 * 0000000140AB860F: add     rsp, 8
 * 0000000140AB8613: call    loc_140AB8606
 * 0000000140AB8618: add     rsp, 8
 * 0000000140AB861C: call    loc_140AB860F
 * 0000000140AB8621: add     rsp, 8
 * 0000000140AB8625: call    loc_140AB8618
 * 0000000140AB862A: add     rsp, 8
 * 0000000140AB862E: call    loc_140AB8621
 * 0000000140AB8633: add     rsp, 8
 * 0000000140AB8637: call    loc_140AB862A
 * 0000000140AB863C: add     rsp, 8
 * 0000000140AB8640: call    loc_140AB8633
 * 0000000140AB8645: add     rsp, 8
 * 0000000140AB8649: call    loc_140AB863C
 * 0000000140AB864E: add     rsp, 8
 * 0000000140AB8652: call    loc_140AB8645
 * 0000000140AB8657: add     rsp, 8
 * 0000000140AB865B: call    loc_140AB864E
 * 0000000140AB8660: add     rsp, 8
 * 0000000140AB8664: call    loc_140AB8657
 * 0000000140AB8669: add     rsp, 8
 * 0000000140AB866D: call    loc_140AB8660
 * 0000000140AB8672: add     rsp, 8
 * 0000000140AB8676: call    loc_140AB8669
 * 0000000140AB867B: add     rsp, 8
 * 0000000140AB867F: call    loc_140AB8672
 * 0000000140AB8684: add     rsp, 8
 * 0000000140AB8688: call    loc_140AB867B
 * 0000000140AB868D: add     rsp, 8
 * 0000000140AB8691: call    loc_140AB8684
 * 0000000140AB8696: add     rsp, 8
 * 0000000140AB869A: call    loc_140AB868D
 * 0000000140AB869F: add     rsp, 8
 * 0000000140AB86A3: call    loc_140AB8696
 * 0000000140AB86A8: add     rsp, 8
 * 0000000140AB86AC: call    loc_140AB869F
 * 0000000140AB86B1: add     rsp, 8
 * 0000000140AB86B5: call    loc_140AB86A8
 * 0000000140AB86BA: add     rsp, 8
 * 0000000140AB86BE: call    loc_140AB86B1
 * 0000000140AB86C3: add     rsp, 8
 * 0000000140AB86C7: call    loc_140AB86BA
 * 0000000140AB86CC: add     rsp, 8
 * 0000000140AB86D0: call    loc_140AB86C3
 * 0000000140AB86D5: add     rsp, 8
 * 0000000140AB86D9: call    loc_140AB86CC
 * 0000000140AB86DE: add     rsp, 8
 * 0000000140AB86E2: call    loc_140AB86D5
 * 0000000140AB86E7: add     rsp, 8
 * 0000000140AB86EB: call    loc_140AB86DE
 * 0000000140AB86F0: add     rsp, 8
 * 0000000140AB86F4: call    loc_140AB86E7
 * 0000000140AB86F9: add     rsp, 8
 * 0000000140AB86FD: call    loc_140AB86F0
 * 0000000140AB8702: add     rsp, 8
 * 0000000140AB8706: call    loc_140AB86F9
 * 0000000140AB870B: add     rsp, 8
 * 0000000140AB870F: mov     eax, 0DADAh
 * 0000000140AB8714: test    byte ptr gs:862h, 8
 * 0000000140AB871D: jz      short loc_140AB8726
 * 0000000140AB871F: mov     al, 20h ; ' '
 * 0000000140AB8721: incsspq rax
 * 0000000140AB8726: lfence
 * 0000000140AB8729: or      byte ptr gs:856h, 2
 * 0000000140AB8732: bt      [rsp-0E0h+arg_F0], 9
 * 0000000140AB8739: jnb     short loc_140AB873C
 * 0000000140AB873B: sti
 * 0000000140AB873C: mov     rax, [rsp-0E0h+arg_D8]
 * 0000000140AB8740: mov     rcx, [rsp-0E0h+arg_E0]
 * 0000000140AB8745: mov     rdx, [rsp-0E0h+arg_E8]
 * 0000000140AB874A: add     rsp, 20h
 * 0000000140AB874E: retn
 */
