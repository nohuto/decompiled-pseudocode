/*
 * XREFs of SmStoreResize @ 0x1409D7F10
 * Callers:
 *     SmcStoreResize @ 0x1409DB974 (SmcStoreResize.c)
 * Callees:
 *     ZwSetSystemInformation @ 0x14041E810 (ZwSetSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x1409D7DB0 (SmStorePhysicalRequestIssue.c)
 */

/*
 * Hex-Rays decompilation failed for SmStoreResize @ 0x1409D7F10
 * Reason: Hex-Rays returned no pseudocode for 0x1409D7F10
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001409D7F10: mov     [rsp-8+arg_0], rbx
 * 00000001409D7F15: push    rbp
 * 00000001409D7F16: mov     rbp, rsp
 * 00000001409D7F19: sub     rsp, 60h
 * 00000001409D7F1D: mov     rbx, [rbp+arg_20]
 * 00000001409D7F21: lea     rax, [rbp+var_30]
 * 00000001409D7F25: xor     r10d, r10d
 * 00000001409D7F28: mov     [rbp+var_10], rax
 * 00000001409D7F2C: neg     [rbp+arg_28]
 * 00000001409D7F2F: mov     [rbp+arg_18], r10
 * 00000001409D7F33: sbb     eax, eax
 * 00000001409D7F35: mov     [rbp+var_8], 18h
 * 00000001409D7F3D: and     eax, 100h
 * 00000001409D7F42: mov     [rbp+SystemInformation], 1
 * 00000001409D7F49: add     eax, 6
 * 00000001409D7F4C: mov     [rbp+var_14], 11h
 * 00000001409D7F53: mov     [rbp+var_30], eax
 * 00000001409D7F56: lea     r11d, [r10+18h]
 * 00000001409D7F5A: mov     eax, [rbx]
 * 00000001409D7F5C: mov     [rbp+var_28], eax
 * 00000001409D7F5F: mov     [rbp+var_24], r10d
 * 00000001409D7F63: mov     [rbp+var_2C], r8d
 * 00000001409D7F67: mov     [rbp+var_20], r9
 * 00000001409D7F6B: test    edx, edx
 * 00000001409D7F6D: jnz     short loc_1409D7F97
 * 00000001409D7F6F: mov     rcx, [rcx+770h]; DeviceObject
 * 00000001409D7F76: lea     rax, [rbp+arg_18]
 * 00000001409D7F7A: mov     [rsp+60h+var_38], rax; __int64
 * 00000001409D7F7F: lea     r8, [rbp+var_30]
 * 00000001409D7F83: mov     r9d, r11d
 * 00000001409D7F86: mov     [rsp+60h+var_40], r11d; int
 * 00000001409D7F8B: mov     edx, 2281CCh
 * 00000001409D7F90: call    SmStorePhysicalRequestIssue
 * 00000001409D7F95: jmp     short loc_1409D7FAD
 * 00000001409D7F97: cmp     edx, 1
 * 00000001409D7F9A: jnz     short loc_1409D7FB6
 * 00000001409D7F9C: mov     r8d, r11d; SystemInformationLength
 * 00000001409D7F9F: lea     rdx, [rbp+SystemInformation]; SystemInformation
 * 00000001409D7FA3: mov     ecx, 6Dh ; 'm'; SystemInformationClass
 * 00000001409D7FA8: call    ZwSetSystemInformation
 * 00000001409D7FAD: mov     ecx, eax
 * 00000001409D7FAF: mov     eax, [rbp+var_28]
 * 00000001409D7FB2: mov     [rbx], eax
 * 00000001409D7FB4: jmp     short loc_1409D7FBB
 * 00000001409D7FB6: mov     ecx, 0C000000Dh
 * 00000001409D7FBB: mov     rbx, [rsp+60h+arg_0]
 * 00000001409D7FC0: mov     eax, ecx
 * 00000001409D7FC2: add     rsp, 60h
 * 00000001409D7FC6: pop     rbp
 * 00000001409D7FC7: retn
 */
