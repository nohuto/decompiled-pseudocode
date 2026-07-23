/*
 * XREFs of SmStoreResize @ 0x1409D7DC0
 * Callers:
 *     SmcStoreResize @ 0x1409DB824 (SmcStoreResize.c)
 * Callees:
 *     ZwSetSystemInformation @ 0x14041DDC0 (ZwSetSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x1409D7C60 (SmStorePhysicalRequestIssue.c)
 */

/*
 * Hex-Rays decompilation failed for SmStoreResize @ 0x1409D7DC0
 * Reason: Hex-Rays returned no pseudocode for 0x1409D7DC0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001409D7DC0: mov     [rsp-8+arg_0], rbx
 * 00000001409D7DC5: push    rbp
 * 00000001409D7DC6: mov     rbp, rsp
 * 00000001409D7DC9: sub     rsp, 60h
 * 00000001409D7DCD: mov     rbx, [rbp+arg_20]
 * 00000001409D7DD1: lea     rax, [rbp+var_30]
 * 00000001409D7DD5: xor     r10d, r10d
 * 00000001409D7DD8: mov     [rbp+var_10], rax
 * 00000001409D7DDC: neg     [rbp+arg_28]
 * 00000001409D7DDF: mov     [rbp+arg_18], r10
 * 00000001409D7DE3: sbb     eax, eax
 * 00000001409D7DE5: mov     [rbp+var_8], 18h
 * 00000001409D7DED: and     eax, 100h
 * 00000001409D7DF2: mov     [rbp+SystemInformation], 1
 * 00000001409D7DF9: add     eax, 6
 * 00000001409D7DFC: mov     [rbp+var_14], 11h
 * 00000001409D7E03: mov     [rbp+var_30], eax
 * 00000001409D7E06: lea     r11d, [r10+18h]
 * 00000001409D7E0A: mov     eax, [rbx]
 * 00000001409D7E0C: mov     [rbp+var_28], eax
 * 00000001409D7E0F: mov     [rbp+var_24], r10d
 * 00000001409D7E13: mov     [rbp+var_2C], r8d
 * 00000001409D7E17: mov     [rbp+var_20], r9
 * 00000001409D7E1B: test    edx, edx
 * 00000001409D7E1D: jnz     short loc_1409D7E47
 * 00000001409D7E1F: mov     rcx, [rcx+770h]; DeviceObject
 * 00000001409D7E26: lea     rax, [rbp+arg_18]
 * 00000001409D7E2A: mov     [rsp+60h+var_38], rax; __int64
 * 00000001409D7E2F: lea     r8, [rbp+var_30]
 * 00000001409D7E33: mov     r9d, r11d
 * 00000001409D7E36: mov     [rsp+60h+var_40], r11d; int
 * 00000001409D7E3B: mov     edx, 2281CCh
 * 00000001409D7E40: call    SmStorePhysicalRequestIssue
 * 00000001409D7E45: jmp     short loc_1409D7E5D
 * 00000001409D7E47: cmp     edx, 1
 * 00000001409D7E4A: jnz     short loc_1409D7E66
 * 00000001409D7E4C: mov     r8d, r11d; SystemInformationLength
 * 00000001409D7E4F: lea     rdx, [rbp+SystemInformation]; SystemInformation
 * 00000001409D7E53: mov     ecx, 6Dh ; 'm'; SystemInformationClass
 * 00000001409D7E58: call    ZwSetSystemInformation
 * 00000001409D7E5D: mov     ecx, eax
 * 00000001409D7E5F: mov     eax, [rbp+var_28]
 * 00000001409D7E62: mov     [rbx], eax
 * 00000001409D7E64: jmp     short loc_1409D7E6B
 * 00000001409D7E66: mov     ecx, 0C000000Dh
 * 00000001409D7E6B: mov     rbx, [rsp+60h+arg_0]
 * 00000001409D7E70: mov     eax, ecx
 * 00000001409D7E72: add     rsp, 60h
 * 00000001409D7E76: pop     rbp
 * 00000001409D7E77: retn
 */
