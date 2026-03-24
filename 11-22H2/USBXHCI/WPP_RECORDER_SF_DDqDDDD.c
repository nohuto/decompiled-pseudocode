/*
 * XREFs of WPP_RECORDER_SF_ddqDddd @ 0x1C0052A6C
 * Callers:
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C0007A54 (XilCoreCommonBuffer_AllocateBuffers.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddqDddd @ 0x1C0052A6C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0052A6C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0052A6C: mov     r11, rsp
 * 00000001C0052A6F: mov     [r11+8], rbx
 * 00000001C0052A73: mov     [r11+10h], rdi
 * 00000001C0052A77: mov     [r11+18h], r14
 * 00000001C0052A7B: push    rbp
 * 00000001C0052A7C: lea     rbp, [r11-1Fh]
 * 00000001C0052A80: sub     rsp, 0A0h
 * 00000001C0052A87: mov     rbx, rcx
 * 00000001C0052A8A: mov     edi, 4
 * 00000001C0052A8F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0052A96: lea     r14d, [rdi+0Ah]
 * 00000001C0052A9A: mov     eax, [rcx+2Ch]
 * 00000001C0052A9D: test    al, al
 * 00000001C0052A9F: jns     loc_1C0052B27
 * 00000001C0052AA5: cmp     byte ptr [rcx+29h], 5
 * 00000001C0052AA9: jb      short loc_1C0052B27
 * 00000001C0052AAB: and     qword ptr [r11-18h], 0
 * 00000001C0052AB0: lea     rdx, [rbp+17h+arg_58]
 * 00000001C0052AB4: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0052ABB: lea     r8, WPP_eecfbef36d1a35cfffa7ec1ff8c060f3_Traceguids
 * 00000001C0052AC2: mov     rcx, [rcx+18h]
 * 00000001C0052AC6: mov     r9d, r14d
 * 00000001C0052AC9: mov     [r11-20h], rdi
 * 00000001C0052ACD: mov     [r11-28h], rdx
 * 00000001C0052AD1: lea     rdx, [rbp+17h+arg_50]
 * 00000001C0052AD5: mov     [r11-30h], rdi
 * 00000001C0052AD9: mov     [r11-38h], rdx
 * 00000001C0052ADD: lea     rdx, [rbp+17h+arg_48]
 * 00000001C0052AE1: mov     [r11-40h], rdi
 * 00000001C0052AE5: mov     [r11-48h], rdx
 * 00000001C0052AE9: lea     rdx, [rbp+17h+arg_40]
 * 00000001C0052AED: mov     [r11-50h], rdi
 * 00000001C0052AF1: mov     [r11-58h], rdx
 * 00000001C0052AF5: lea     rdx, [rbp+17h+arg_38]
 * 00000001C0052AF9: mov     qword ptr [r11-60h], 8
 * 00000001C0052B01: mov     [r11-68h], rdx
 * 00000001C0052B05: lea     rdx, [rbp+17h+arg_30]
 * 00000001C0052B09: mov     [r11-70h], rdi
 * 00000001C0052B0D: mov     [r11-78h], rdx
 * 00000001C0052B11: lea     rdx, [rbp+17h+arg_28]
 * 00000001C0052B15: mov     [r11-80h], rdi
 * 00000001C0052B19: mov     [rsp+0A0h+var_80], rdx
 * 00000001C0052B1E: lea     edx, [rdi+27h]
 * 00000001C0052B21: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0052B27: and     qword ptr [rsp+0A0h+var_8], 0
 * 00000001C0052B30: lea     rax, [rbp+17h+arg_58]
 * 00000001C0052B34: mov     [rsp+0A0h+var_10], rdi
 * 00000001C0052B3C: lea     r9, WPP_eecfbef36d1a35cfffa7ec1ff8c060f3_Traceguids
 * 00000001C0052B43: mov     [rsp+0A0h+var_18], rax
 * 00000001C0052B4B: mov     edx, 5
 * 00000001C0052B50: mov     [rsp+0A0h+var_20], rdi
 * 00000001C0052B58: lea     rax, [rbp+17h+arg_50]
 * 00000001C0052B5C: mov     [rsp+0A0h+var_28], rax
 * 00000001C0052B61: mov     rcx, rbx
 * 00000001C0052B64: mov     [rsp+0A0h+var_30], rdi
 * 00000001C0052B69: lea     rax, [rbp+17h+arg_48]
 * 00000001C0052B6D: mov     [rsp+0A0h+var_38], rax
 * 00000001C0052B72: lea     r8d, [rdx+3]
 * 00000001C0052B76: mov     [rsp+0A0h+var_40], rdi
 * 00000001C0052B7B: lea     rax, [rbp+17h+arg_40]
 * 00000001C0052B7F: mov     [rsp+0A0h+var_48], rax
 * 00000001C0052B84: lea     rax, [rbp+17h+arg_38]
 * 00000001C0052B88: mov     [rsp+0A0h+var_50], 8
 * 00000001C0052B91: mov     [rsp+0A0h+var_58], rax
 * 00000001C0052B96: lea     rax, [rbp+17h+arg_30]
 * 00000001C0052B9A: mov     [rsp+0A0h+var_60], rdi
 * 00000001C0052B9F: mov     [rsp+0A0h+var_68], rax
 * 00000001C0052BA4: lea     rax, [rbp+17h+arg_28]
 * 00000001C0052BA8: mov     [rsp+0A0h+var_70], rdi
 * 00000001C0052BAD: mov     [rsp+0A0h+var_78], rax
 * 00000001C0052BB2: mov     word ptr [rsp+0A0h+var_80], r14w
 * 00000001C0052BB8: call    cs:__imp_WppAutoLogTrace
 * 00000001C0052BBF: nop     dword ptr [rax+rax+00h]
 * 00000001C0052BC4: lea     r11, [rsp+0A0h+var_s0]
 * 00000001C0052BCC: mov     rbx, [r11+10h]
 * 00000001C0052BD0: mov     rdi, [r11+18h]
 * 00000001C0052BD4: mov     r14, [r11+20h]
 * 00000001C0052BD8: mov     rsp, r11
 * 00000001C0052BDB: pop     rbp
 * 00000001C0052BDC: retn
 */
