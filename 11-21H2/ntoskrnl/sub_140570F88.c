/*
 * XREFs of sub_140570F88 @ 0x140570F88
 * Callers:
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 * Callees:
 *     sub_1402F38C4 @ 0x1402F38C4 (sub_1402F38C4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1404359C0 @ 0x1404359C0 (sub_1404359C0.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140570F88 @ 0x140570F88
 * Reason: Hex-Rays returned no pseudocode for 0x140570F88
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140570F88: mov     [rsp+arg_0], rbx
 * 0000000140570F8D: push    rdi
 * 0000000140570F8E: sub     rsp, 30h
 * 0000000140570F92: mov     rbx, cr8
 * 0000000140570F96: mov     eax, 0Ch
 * 0000000140570F9B: mov     cr8, rax
 * 0000000140570F9F: mov     eax, cs:dword_140D06B08
 * 0000000140570FA5: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 0000000140570FA9: test    eax, eax
 * 0000000140570FAB: jz      short loc_140570FE2
 * 0000000140570FAD: test    al, 1
 * 0000000140570FAF: jz      short loc_140570FE2
 * 0000000140570FB1: cmp     bl, 0Fh
 * 0000000140570FB4: ja      short loc_140570FE2
 * 0000000140570FB6: mov     rax, gs:20h
 * 0000000140570FBF: mov     rdx, rdi
 * 0000000140570FC2: movzx   ecx, bl
 * 0000000140570FC5: inc     ecx
 * 0000000140570FC7: shl     rdx, cl
 * 0000000140570FCA: mov     r9, [rax+88B8h]
 * 0000000140570FD1: and     edx, 1FFCh
 * 0000000140570FD7: mov     r8d, [r9+14h]
 * 0000000140570FDB: or      r8d, edx
 * 0000000140570FDE: mov     [r9+14h], r8d
 * 0000000140570FE2: and     [rsp+38h+var_10], 0
 * 0000000140570FE8: lea     r8, sub_140571420
 * 0000000140570FEF: and     [rsp+38h+var_18], 0
 * 0000000140570FF5: xor     edx, edx
 * 0000000140570FF7: xor     r9d, r9d
 * 0000000140570FFA: lea     ecx, [rdx+1]
 * 0000000140570FFD: call    sub_1402F38C4
 * 0000000140571002: mov     rcx, gs:20h
 * 000000014057100B: mov     eax, [rcx+2D80h]
 * 0000000140571011: test    eax, eax
 * 0000000140571013: jz      short loc_140571019
 * 0000000140571015: pause
 * 0000000140571017: jmp     short loc_14057100B
 * 0000000140571019: call    sub_1404359C0
 * 000000014057101E: mov     eax, cs:dword_140D06B08
 * 0000000140571024: test    eax, eax
 * 0000000140571026: jz      short loc_14057106E
 * 0000000140571028: test    al, 1
 * 000000014057102A: jz      short loc_14057106E
 * 000000014057102C: mov     rax, cr8
 * 0000000140571030: cmp     al, 0Fh
 * 0000000140571032: ja      short loc_14057106E
 * 0000000140571034: cmp     bl, 0Fh
 * 0000000140571037: ja      short loc_14057106E
 * 0000000140571039: cmp     al, 2
 * 000000014057103B: jb      short loc_14057106E
 * 000000014057103D: mov     r9, gs:20h
 * 0000000140571046: movzx   ecx, bl
 * 0000000140571049: inc     ecx
 * 000000014057104B: shl     rdi, cl
 * 000000014057104E: mov     r8, [r9+88B8h]
 * 0000000140571055: movzx   eax, di
 * 0000000140571058: not     eax
 * 000000014057105A: mov     edx, [r8+14h]
 * 000000014057105E: and     edx, eax
 * 0000000140571060: mov     [r8+14h], edx
 * 0000000140571064: jnz     short loc_14057106E
 * 0000000140571066: mov     rcx, r9
 * 0000000140571069: call    sub_140418E4C
 * 000000014057106E: movzx   eax, bl
 * 0000000140571071: mov     cr8, rax
 * 0000000140571075: mov     rbx, [rsp+38h+arg_0]
 * 000000014057107A: add     rsp, 30h
 * 000000014057107E: pop     rdi
 * 000000014057107F: retn
 */
