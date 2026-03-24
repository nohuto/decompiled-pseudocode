/*
 * XREFs of WPP_RECORDER_SF_ddqDddd @ 0x1C0052BAC
 * Callers:
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C0007A24 (XilCoreCommonBuffer_AllocateBuffers.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddqDddd @ 0x1C0052BAC
 * Reason: Hex-Rays returned no pseudocode for 0x1C0052BAC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0052BAC: mov     r11, rsp
 * 00000001C0052BAF: mov     [r11+8], rbx
 * 00000001C0052BB3: mov     [r11+10h], rdi
 * 00000001C0052BB7: mov     [r11+18h], r14
 * 00000001C0052BBB: push    rbp
 * 00000001C0052BBC: lea     rbp, [r11-1Fh]
 * 00000001C0052BC0: sub     rsp, 0A0h
 * 00000001C0052BC7: mov     rbx, rcx
 * 00000001C0052BCA: mov     edi, 4
 * 00000001C0052BCF: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0052BD6: lea     r14d, [rdi+0Ah]
 * 00000001C0052BDA: mov     eax, [rcx+2Ch]
 * 00000001C0052BDD: test    al, al
 * 00000001C0052BDF: jns     loc_1C0052C67
 * 00000001C0052BE5: cmp     byte ptr [rcx+29h], 5
 * 00000001C0052BE9: jb      short loc_1C0052C67
 * 00000001C0052BEB: and     qword ptr [r11-18h], 0
 * 00000001C0052BF0: lea     rdx, [rbp+17h+arg_58]
 * 00000001C0052BF4: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0052BFB: lea     r8, WPP_eecfbef36d1a35cfffa7ec1ff8c060f3_Traceguids
 * 00000001C0052C02: mov     rcx, [rcx+18h]
 * 00000001C0052C06: mov     r9d, r14d
 * 00000001C0052C09: mov     [r11-20h], rdi
 * 00000001C0052C0D: mov     [r11-28h], rdx
 * 00000001C0052C11: lea     rdx, [rbp+17h+arg_50]
 * 00000001C0052C15: mov     [r11-30h], rdi
 * 00000001C0052C19: mov     [r11-38h], rdx
 * 00000001C0052C1D: lea     rdx, [rbp+17h+arg_48]
 * 00000001C0052C21: mov     [r11-40h], rdi
 * 00000001C0052C25: mov     [r11-48h], rdx
 * 00000001C0052C29: lea     rdx, [rbp+17h+arg_40]
 * 00000001C0052C2D: mov     [r11-50h], rdi
 * 00000001C0052C31: mov     [r11-58h], rdx
 * 00000001C0052C35: lea     rdx, [rbp+17h+arg_38]
 * 00000001C0052C39: mov     qword ptr [r11-60h], 8
 * 00000001C0052C41: mov     [r11-68h], rdx
 * 00000001C0052C45: lea     rdx, [rbp+17h+arg_30]
 * 00000001C0052C49: mov     [r11-70h], rdi
 * 00000001C0052C4D: mov     [r11-78h], rdx
 * 00000001C0052C51: lea     rdx, [rbp+17h+arg_28]
 * 00000001C0052C55: mov     [r11-80h], rdi
 * 00000001C0052C59: mov     [rsp+0A0h+var_80], rdx
 * 00000001C0052C5E: lea     edx, [rdi+27h]
 * 00000001C0052C61: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0052C67: and     qword ptr [rsp+0A0h+var_8], 0
 * 00000001C0052C70: lea     rax, [rbp+17h+arg_58]
 * 00000001C0052C74: mov     [rsp+0A0h+var_10], rdi
 * 00000001C0052C7C: lea     r9, WPP_eecfbef36d1a35cfffa7ec1ff8c060f3_Traceguids
 * 00000001C0052C83: mov     [rsp+0A0h+var_18], rax
 * 00000001C0052C8B: mov     edx, 5
 * 00000001C0052C90: mov     [rsp+0A0h+var_20], rdi
 * 00000001C0052C98: lea     rax, [rbp+17h+arg_50]
 * 00000001C0052C9C: mov     [rsp+0A0h+var_28], rax
 * 00000001C0052CA1: mov     rcx, rbx
 * 00000001C0052CA4: mov     [rsp+0A0h+var_30], rdi
 * 00000001C0052CA9: lea     rax, [rbp+17h+arg_48]
 * 00000001C0052CAD: mov     [rsp+0A0h+var_38], rax
 * 00000001C0052CB2: lea     r8d, [rdx+3]
 * 00000001C0052CB6: mov     [rsp+0A0h+var_40], rdi
 * 00000001C0052CBB: lea     rax, [rbp+17h+arg_40]
 * 00000001C0052CBF: mov     [rsp+0A0h+var_48], rax
 * 00000001C0052CC4: lea     rax, [rbp+17h+arg_38]
 * 00000001C0052CC8: mov     [rsp+0A0h+var_50], 8
 * 00000001C0052CD1: mov     [rsp+0A0h+var_58], rax
 * 00000001C0052CD6: lea     rax, [rbp+17h+arg_30]
 * 00000001C0052CDA: mov     [rsp+0A0h+var_60], rdi
 * 00000001C0052CDF: mov     [rsp+0A0h+var_68], rax
 * 00000001C0052CE4: lea     rax, [rbp+17h+arg_28]
 * 00000001C0052CE8: mov     [rsp+0A0h+var_70], rdi
 * 00000001C0052CED: mov     [rsp+0A0h+var_78], rax
 * 00000001C0052CF2: mov     word ptr [rsp+0A0h+var_80], r14w
 * 00000001C0052CF8: call    cs:__imp_WppAutoLogTrace
 * 00000001C0052CFF: nop     dword ptr [rax+rax+00h]
 * 00000001C0052D04: lea     r11, [rsp+0A0h+var_s0]
 * 00000001C0052D0C: mov     rbx, [r11+10h]
 * 00000001C0052D10: mov     rdi, [r11+18h]
 * 00000001C0052D14: mov     r14, [r11+20h]
 * 00000001C0052D18: mov     rsp, r11
 * 00000001C0052D1B: pop     rbp
 * 00000001C0052D1C: retn
 */
