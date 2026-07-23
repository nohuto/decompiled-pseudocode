/*
 * XREFs of sub_1407C4460 @ 0x1407C4460
 * Callers:
 *     sub_1407C4180 @ 0x1407C4180 (sub_1407C4180.c)
 *     sub_1407C5F80 @ 0x1407C5F80 (sub_1407C5F80.c)
 *     sub_1407C8AE0 @ 0x1407C8AE0 (sub_1407C8AE0.c)
 *     sub_1407CD270 @ 0x1407CD270 (sub_1407CD270.c)
 *     sub_1407FB158 @ 0x1407FB158 (sub_1407FB158.c)
 *     sub_14082F314 @ 0x14082F314 (sub_14082F314.c)
 * Callees:
 *     sub_14065C57C @ 0x14065C57C (sub_14065C57C.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C45A0 @ 0x1407C45A0 (sub_1407C45A0.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     RtlCompareUnicodeString @ 0x1407CAA80 (RtlCompareUnicodeString.c)
 */

/*
 * Hex-Rays decompilation failed for sub_1407C4460 @ 0x1407C4460
 * Reason: Hex-Rays returned no pseudocode for 0x1407C4460
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407C4460: mov     [rsp+arg_8], rbx
 * 00000001407C4465: mov     [rsp+arg_10], rsi
 * 00000001407C446A: push    rdi
 * 00000001407C446B: sub     rsp, 30h
 * 00000001407C446F: xor     eax, eax
 * 00000001407C4471: mov     [rsp+38h+arg_0], 0FFFFFFFFh
 * 00000001407C4479: test    byte ptr [rcx+8Ch], 1
 * 00000001407C4480: xorps   xmm0, xmm0
 * 00000001407C4483: mov     rbx, r8
 * 00000001407C4486: mov     [rsp+38h+arg_4], eax
 * 00000001407C448A: mov     rsi, rdx
 * 00000001407C448D: lea     r8, [rsp+38h+arg_0]
 * 00000001407C4492: mov     rdi, rcx
 * 00000001407C4495: mov     edx, r9d; BugCheckParameter4
 * 00000001407C4498: movups  xmmword ptr [rsp+38h+String2.Length], xmm0
 * 00000001407C449D: jz      short loc_1407C44A6
 * 00000001407C449F: call    sub_1406BF400
 * 00000001407C44A4: jmp     short loc_1407C44AB
 * 00000001407C44A6: call    sub_1407C9820
 * 00000001407C44AB: test    rax, rax
 * 00000001407C44AE: jnz     short loc_1407C44C6
 * 00000001407C44B0: mov     eax, 2
 * 00000001407C44B5: mov     rbx, [rsp+38h+arg_8]
 * 00000001407C44BA: mov     rsi, [rsp+38h+arg_10]
 * 00000001407C44BF: add     rsp, 30h
 * 00000001407C44C3: pop     rdi
 * 00000001407C44C4: retn
 * 00000001407C44C6: movzx   ecx, word ptr [rax+48h]
 * 00000001407C44CA: lea     r10, [rax+4Ch]
 * 00000001407C44CE: movzx   eax, byte ptr [rax+2]
 * 00000001407C44D2: test    al, 20h
 * 00000001407C44D4: jz      short loc_1407C4502
 * 00000001407C44D6: mov     r8d, ecx
 * 00000001407C44D9: test    rbx, rbx
 * 00000001407C44DC: jz      short loc_1407C44F2
 * 00000001407C44DE: movzx   edx, word ptr [rbx]
 * 00000001407C44E1: mov     r9d, ecx
 * 00000001407C44E4: mov     rcx, [rbx+8]
 * 00000001407C44E8: mov     r8, r10
 * 00000001407C44EB: call    sub_14065C57C
 * 00000001407C44F0: jmp     short loc_1407C4541
 * 00000001407C44F2: xor     r9d, r9d
 * 00000001407C44F5: mov     rdx, r10
 * 00000001407C44F8: mov     rcx, rsi
 * 00000001407C44FB: call    sub_1407C45A0
 * 00000001407C4500: jmp     short loc_1407C4541
 * 00000001407C4502: mov     [rsp+38h+String2.Buffer], r10
 * 00000001407C4507: mov     [rsp+38h+String2.Length], cx
 * 00000001407C450C: mov     [rsp+38h+String2.MaximumLength], cx
 * 00000001407C4511: test    rbx, rbx
 * 00000001407C4514: jz      short loc_1407C4531
 * 00000001407C4516: movzx   r8d, word ptr [rbx]
 * 00000001407C451A: lea     rcx, [rsp+38h+String2]
 * 00000001407C451F: mov     rdx, [rbx+8]
 * 00000001407C4523: xor     r9d, r9d
 * 00000001407C4526: call    sub_1407C45A0
 * 00000001407C452B: mov     ebx, eax
 * 00000001407C452D: neg     ebx
 * 00000001407C452F: jmp     short loc_1407C4543
 * 00000001407C4531: mov     r8b, 1; CaseInSensitive
 * 00000001407C4534: lea     rdx, [rsp+38h+String2]; String2
 * 00000001407C4539: mov     rcx, rsi; String1
 * 00000001407C453C: call    RtlCompareUnicodeString
 * 00000001407C4541: mov     ebx, eax
 * 00000001407C4543: test    byte ptr [rdi+8Ch], 1
 * 00000001407C454A: lea     rdx, [rsp+38h+arg_0]
 * 00000001407C454F: mov     rcx, rdi
 * 00000001407C4552: jz      short loc_1407C455B
 * 00000001407C4554: call    sub_1406BF450
 * 00000001407C4559: jmp     short loc_1407C4560
 * 00000001407C455B: call    sub_1407C97C0
 * 00000001407C4560: test    ebx, ebx
 * 00000001407C4562: jnz     short loc_1407C4577
 * 00000001407C4564: xor     eax, eax
 * 00000001407C4566: mov     rbx, [rsp+38h+arg_8]
 * 00000001407C456B: mov     rsi, [rsp+38h+arg_10]
 * 00000001407C4570: add     rsp, 30h
 * 00000001407C4574: pop     rdi
 * 00000001407C4575: retn
 * 00000001407C4577: mov     rsi, [rsp+38h+arg_10]
 * 00000001407C457C: sar     ebx, 1Fh
 * 00000001407C457F: and     ebx, 0FFFFFFFEh
 * 00000001407C4582: lea     eax, [rbx+1]
 * 00000001407C4585: mov     rbx, [rsp+38h+arg_8]
 * 00000001407C458A: add     rsp, 30h
 * 00000001407C458E: pop     rdi
 * 00000001407C458F: retn
 */
