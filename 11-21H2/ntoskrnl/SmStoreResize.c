/*
 * XREFs of SmStoreResize @ 0x1409D4A38
 * Callers:
 *     SmcStoreResize @ 0x1409D8588 (SmcStoreResize.c)
 * Callees:
 *     ZwSetSystemInformation @ 0x14041EE00 (ZwSetSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x1409D48D8 (SmStorePhysicalRequestIssue.c)
 */

/*
 * Hex-Rays decompilation failed for SmStoreResize @ 0x1409D4A38
 * Reason: Hex-Rays returned no pseudocode for 0x1409D4A38
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001409D4A38: mov     [rsp-8+arg_0], rbx
 * 00000001409D4A3D: push    rbp
 * 00000001409D4A3E: mov     rbp, rsp
 * 00000001409D4A41: sub     rsp, 60h
 * 00000001409D4A45: xor     r10d, r10d
 * 00000001409D4A48: mov     [rbp+var_8], 18h
 * 00000001409D4A50: neg     [rbp+arg_20]
 * 00000001409D4A53: lea     rax, [rbp+var_30]
 * 00000001409D4A57: mov     [rbp+var_10], rax
 * 00000001409D4A5B: mov     rbx, r9
 * 00000001409D4A5E: sbb     eax, eax
 * 00000001409D4A60: mov     [rbp+arg_10], r10
 * 00000001409D4A64: and     eax, 100h
 * 00000001409D4A69: mov     [rbp+var_18], 1
 * 00000001409D4A70: add     eax, 6
 * 00000001409D4A73: mov     [rbp+var_14], 11h
 * 00000001409D4A7A: mov     [rbp+var_30], eax
 * 00000001409D4A7D: lea     r9d, [r10+18h]
 * 00000001409D4A81: mov     eax, [rbx]
 * 00000001409D4A83: mov     [rbp+var_28], eax
 * 00000001409D4A86: mov     [rbp+var_24], r10d
 * 00000001409D4A8A: mov     [rbp+var_2C], edx
 * 00000001409D4A8D: mov     [rbp+var_20], r8
 * 00000001409D4A91: test    ecx, ecx
 * 00000001409D4A93: jnz     short loc_1409D4ABA
 * 00000001409D4A95: mov     rcx, cs:DeviceObject; DeviceObject
 * 00000001409D4A9C: lea     rax, [rbp+arg_10]
 * 00000001409D4AA0: mov     [rsp+60h+var_38], rax; __int64
 * 00000001409D4AA5: lea     r8, [rbp+var_30]
 * 00000001409D4AA9: mov     edx, 2281CCh
 * 00000001409D4AAE: mov     [rsp+60h+var_40], r9d; int
 * 00000001409D4AB3: call    SmStorePhysicalRequestIssue
 * 00000001409D4AB8: jmp     short loc_1409D4AD0
 * 00000001409D4ABA: cmp     ecx, 1
 * 00000001409D4ABD: jnz     short loc_1409D4AD9
 * 00000001409D4ABF: mov     r8d, r9d
 * 00000001409D4AC2: lea     rdx, [rbp+var_18]
 * 00000001409D4AC6: mov     ecx, 6Dh ; 'm'
 * 00000001409D4ACB: call    ZwSetSystemInformation
 * 00000001409D4AD0: mov     ecx, eax
 * 00000001409D4AD2: mov     eax, [rbp+var_28]
 * 00000001409D4AD5: mov     [rbx], eax
 * 00000001409D4AD7: jmp     short loc_1409D4ADE
 * 00000001409D4AD9: mov     ecx, 0C000000Dh
 * 00000001409D4ADE: mov     rbx, [rsp+60h+arg_0]
 * 00000001409D4AE3: mov     eax, ecx
 * 00000001409D4AE5: add     rsp, 60h
 * 00000001409D4AE9: pop     rbp
 * 00000001409D4AEA: retn
 */
