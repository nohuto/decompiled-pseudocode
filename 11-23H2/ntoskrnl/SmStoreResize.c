/*
 * XREFs of SmStoreResize @ 0x1409D7D10
 * Callers:
 *     SmcStoreResize @ 0x1409DB774 (SmcStoreResize.c)
 * Callees:
 *     ZwSetSystemInformation @ 0x14041E480 (ZwSetSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x1409D7BB0 (SmStorePhysicalRequestIssue.c)
 */

/*
 * Hex-Rays decompilation failed for SmStoreResize @ 0x1409D7D10
 * Reason: Hex-Rays returned no pseudocode for 0x1409D7D10
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001409D7D10: mov     [rsp-8+arg_0], rbx
 * 00000001409D7D15: push    rbp
 * 00000001409D7D16: mov     rbp, rsp
 * 00000001409D7D19: sub     rsp, 60h
 * 00000001409D7D1D: mov     rbx, [rbp+arg_20]
 * 00000001409D7D21: lea     rax, [rbp+var_30]
 * 00000001409D7D25: xor     r10d, r10d
 * 00000001409D7D28: mov     [rbp+var_10], rax
 * 00000001409D7D2C: neg     [rbp+arg_28]
 * 00000001409D7D2F: mov     [rbp+arg_18], r10
 * 00000001409D7D33: sbb     eax, eax
 * 00000001409D7D35: mov     [rbp+var_8], 18h
 * 00000001409D7D3D: and     eax, 100h
 * 00000001409D7D42: mov     [rbp+var_18], 1
 * 00000001409D7D49: add     eax, 6
 * 00000001409D7D4C: mov     [rbp+var_14], 11h
 * 00000001409D7D53: mov     [rbp+var_30], eax
 * 00000001409D7D56: lea     r11d, [r10+18h]
 * 00000001409D7D5A: mov     eax, [rbx]
 * 00000001409D7D5C: mov     [rbp+var_28], eax
 * 00000001409D7D5F: mov     [rbp+var_24], r10d
 * 00000001409D7D63: mov     [rbp+var_2C], r8d
 * 00000001409D7D67: mov     [rbp+var_20], r9
 * 00000001409D7D6B: test    edx, edx
 * 00000001409D7D6D: jnz     short loc_1409D7D97
 * 00000001409D7D6F: mov     rcx, [rcx+770h]; DeviceObject
 * 00000001409D7D76: lea     rax, [rbp+arg_18]
 * 00000001409D7D7A: mov     [rsp+60h+var_38], rax; __int64
 * 00000001409D7D7F: lea     r8, [rbp+var_30]
 * 00000001409D7D83: mov     r9d, r11d
 * 00000001409D7D86: mov     [rsp+60h+var_40], r11d; int
 * 00000001409D7D8B: mov     edx, 2281CCh
 * 00000001409D7D90: call    SmStorePhysicalRequestIssue
 * 00000001409D7D95: jmp     short loc_1409D7DAD
 * 00000001409D7D97: cmp     edx, 1
 * 00000001409D7D9A: jnz     short loc_1409D7DB6
 * 00000001409D7D9C: mov     r8d, r11d
 * 00000001409D7D9F: lea     rdx, [rbp+var_18]
 * 00000001409D7DA3: mov     ecx, 6Dh ; 'm'
 * 00000001409D7DA8: call    ZwSetSystemInformation
 * 00000001409D7DAD: mov     ecx, eax
 * 00000001409D7DAF: mov     eax, [rbp+var_28]
 * 00000001409D7DB2: mov     [rbx], eax
 * 00000001409D7DB4: jmp     short loc_1409D7DBB
 * 00000001409D7DB6: mov     ecx, 0C000000Dh
 * 00000001409D7DBB: mov     rbx, [rsp+60h+arg_0]
 * 00000001409D7DC0: mov     eax, ecx
 * 00000001409D7DC2: add     rsp, 60h
 * 00000001409D7DC6: pop     rbp
 * 00000001409D7DC7: retn
 */
