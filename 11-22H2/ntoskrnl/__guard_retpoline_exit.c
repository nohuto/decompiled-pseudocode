/*
 * XREFs of __guard_retpoline_exit @ 0x140AFA580
 * Callers:
 *     KeExitRetpoline @ 0x14034BADC (KeExitRetpoline.c)
 *     __guard_retpoline_exit_indirect_rax @ 0x140AFA3A0 (__guard_retpoline_exit_indirect_rax.c)
 *     __guard_retpoline_import_r10 @ 0x140AFA420 (__guard_retpoline_import_r10.c)
 * Callees:
 *     __guard_retpoline_exit @ 0x140AFA580 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_exit @ 0x140AFA580
 * Reason: Hex-Rays returned no pseudocode for 0x140AFA580
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140AFA580: pushfq
 * 0000000140AFA582: sub     rsp, 18h
 * 0000000140AFA586: mov     [rsp+20h+var_20], rax
 * 0000000140AFA58A: mov     [rsp+20h+var_18], rcx
 * 0000000140AFA58F: mov     [rsp+20h+var_10], rdx
 * 0000000140AFA594: cli
 * 0000000140AFA595: movzx   eax, word ptr gs:852h
 * 0000000140AFA59E: cmp     gs:864h, ax
 * 0000000140AFA5A7: jz      short loc_140AFA5BB
 * 0000000140AFA5A9: mov     gs:864h, ax
 * 0000000140AFA5B2: mov     ecx, 48h ; 'H'
 * 0000000140AFA5B7: xor     edx, edx
 * 0000000140AFA5B9: wrmsr
 * 0000000140AFA5BB: movzx   edx, byte ptr gs:854h
 * 0000000140AFA5C4: test    edx, 10h
 * 0000000140AFA5CA: jz      short loc_140AFA5E3
 * 0000000140AFA5CC: mov     eax, 1
 * 0000000140AFA5D1: xor     edx, edx
 * 0000000140AFA5D3: mov     ecx, 49h ; 'I'
 * 0000000140AFA5D8: wrmsr
 * 0000000140AFA5DA: movzx   edx, byte ptr gs:854h
 * 0000000140AFA5E3: test    edx, 40h
 * 0000000140AFA5E9: jz      loc_140AFA726
 * 0000000140AFA5EF: call    loc_140AFA702
 * 0000000140AFA5F4: add     rsp, 8
 * 0000000140AFA5F8: call    loc_140AFA70B
 * 0000000140AFA5FD: add     rsp, 8
 * 0000000140AFA601: call    loc_140AFA5F4
 * 0000000140AFA606: add     rsp, 8
 * 0000000140AFA60A: call    loc_140AFA5FD
 * 0000000140AFA60F: add     rsp, 8
 * 0000000140AFA613: call    loc_140AFA606
 * 0000000140AFA618: add     rsp, 8
 * 0000000140AFA61C: call    loc_140AFA60F
 * 0000000140AFA621: add     rsp, 8
 * 0000000140AFA625: call    loc_140AFA618
 * 0000000140AFA62A: add     rsp, 8
 * 0000000140AFA62E: call    loc_140AFA621
 * 0000000140AFA633: add     rsp, 8
 * 0000000140AFA637: call    loc_140AFA62A
 * 0000000140AFA63C: add     rsp, 8
 * 0000000140AFA640: call    loc_140AFA633
 * 0000000140AFA645: add     rsp, 8
 * 0000000140AFA649: call    loc_140AFA63C
 * 0000000140AFA64E: add     rsp, 8
 * 0000000140AFA652: call    loc_140AFA645
 * 0000000140AFA657: add     rsp, 8
 * 0000000140AFA65B: call    loc_140AFA64E
 * 0000000140AFA660: add     rsp, 8
 * 0000000140AFA664: call    loc_140AFA657
 * 0000000140AFA669: add     rsp, 8
 * 0000000140AFA66D: call    loc_140AFA660
 * 0000000140AFA672: add     rsp, 8
 * 0000000140AFA676: call    loc_140AFA669
 * 0000000140AFA67B: add     rsp, 8
 * 0000000140AFA67F: call    loc_140AFA672
 * 0000000140AFA684: add     rsp, 8
 * 0000000140AFA688: call    loc_140AFA67B
 * 0000000140AFA68D: add     rsp, 8
 * 0000000140AFA691: call    loc_140AFA684
 * 0000000140AFA696: add     rsp, 8
 * 0000000140AFA69A: call    loc_140AFA68D
 * 0000000140AFA69F: add     rsp, 8
 * 0000000140AFA6A3: call    loc_140AFA696
 * 0000000140AFA6A8: add     rsp, 8
 * 0000000140AFA6AC: call    loc_140AFA69F
 * 0000000140AFA6B1: add     rsp, 8
 * 0000000140AFA6B5: call    loc_140AFA6A8
 * 0000000140AFA6BA: add     rsp, 8
 * 0000000140AFA6BE: call    loc_140AFA6B1
 * 0000000140AFA6C3: add     rsp, 8
 * 0000000140AFA6C7: call    loc_140AFA6BA
 * 0000000140AFA6CC: add     rsp, 8
 * 0000000140AFA6D0: call    loc_140AFA6C3
 * 0000000140AFA6D5: add     rsp, 8
 * 0000000140AFA6D9: call    loc_140AFA6CC
 * 0000000140AFA6DE: add     rsp, 8
 * 0000000140AFA6E2: call    loc_140AFA6D5
 * 0000000140AFA6E7: add     rsp, 8
 * 0000000140AFA6EB: call    loc_140AFA6DE
 * 0000000140AFA6F0: add     rsp, 8
 * 0000000140AFA6F4: call    loc_140AFA6E7
 * 0000000140AFA6F9: add     rsp, 8
 * 0000000140AFA6FD: call    loc_140AFA6F0
 * 0000000140AFA702: add     rsp, 8
 * 0000000140AFA706: call    loc_140AFA6F9
 * 0000000140AFA70B: add     rsp, 8
 * 0000000140AFA70F: mov     eax, 0DADAh
 * 0000000140AFA714: test    byte ptr gs:862h, 8
 * 0000000140AFA71D: jz      short loc_140AFA726
 * 0000000140AFA71F: mov     al, 20h ; ' '
 * 0000000140AFA721: incsspq rax
 * 0000000140AFA726: lfence
 * 0000000140AFA729: or      byte ptr gs:856h, 2
 * 0000000140AFA732: bt      [rsp-0E0h+arg_F0], 9
 * 0000000140AFA739: jnb     short loc_140AFA73C
 * 0000000140AFA73B: sti
 * 0000000140AFA73C: mov     rax, [rsp-0E0h+arg_D8]
 * 0000000140AFA740: mov     rcx, [rsp-0E0h+arg_E0]
 * 0000000140AFA745: mov     rdx, [rsp-0E0h+arg_E8]
 * 0000000140AFA74A: add     rsp, 20h
 * 0000000140AFA74E: retn
 */
