/*
 * XREFs of WPP_RECORDER_SF_dqdL @ 0x1C004A678
 * Callers:
 *     UsbDevice_SetAddressCompletion @ 0x1C0019A00 (UsbDevice_SetAddressCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqdL @ 0x1C004A678
 * Reason: Hex-Rays returned no pseudocode for 0x1C004A678
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004A678: mov     r11, rsp
 * 00000001C004A67B: mov     [r11+8], rbx
 * 00000001C004A67F: mov     [r11+10h], rbp
 * 00000001C004A683: push    rdi
 * 00000001C004A684: sub     rsp, 70h
 * 00000001C004A688: mov     rbx, rcx
 * 00000001C004A68B: mov     ebp, 19h
 * 00000001C004A690: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004A697: lea     edi, [rbp-15h]
 * 00000001C004A69A: test    dword ptr [rcx+2Ch], 800h
 * 00000001C004A6A1: jz      short loc_1C004A700
 * 00000001C004A6A3: cmp     byte ptr [rcx+29h], 2
 * 00000001C004A6A7: jb      short loc_1C004A700
 * 00000001C004A6A9: and     qword ptr [r11-18h], 0
 * 00000001C004A6AE: lea     rdx, [r11+48h]
 * 00000001C004A6B2: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004A6B9: lea     r8, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C004A6C0: mov     rcx, [rcx+18h]
 * 00000001C004A6C4: mov     r9d, ebp
 * 00000001C004A6C7: mov     [r11-20h], rdi
 * 00000001C004A6CB: mov     [r11-28h], rdx
 * 00000001C004A6CF: lea     rdx, [r11+40h]
 * 00000001C004A6D3: mov     [r11-30h], rdi
 * 00000001C004A6D7: mov     [r11-38h], rdx
 * 00000001C004A6DB: lea     rdx, [r11+38h]
 * 00000001C004A6DF: mov     qword ptr [r11-40h], 8
 * 00000001C004A6E7: mov     [r11-48h], rdx
 * 00000001C004A6EB: lea     rdx, [r11+30h]
 * 00000001C004A6EF: mov     [r11-50h], rdi
 * 00000001C004A6F3: mov     [r11-58h], rdx
 * 00000001C004A6F7: lea     edx, [rbp+12h]
 * 00000001C004A6FA: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004A700: and     [rsp+78h+var_10], 0
 * 00000001C004A706: lea     rax, [rsp+78h+arg_40]
 * 00000001C004A70E: mov     [rsp+78h+var_18], rdi
 * 00000001C004A713: lea     r9, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C004A71A: mov     [rsp+78h+var_20], rax
 * 00000001C004A71F: mov     edx, 2
 * 00000001C004A724: mov     [rsp+78h+var_28], rdi
 * 00000001C004A729: lea     rax, [rsp+78h+arg_38]
 * 00000001C004A731: mov     [rsp+78h+var_30], rax
 * 00000001C004A736: mov     rcx, rbx
 * 00000001C004A739: mov     [rsp+78h+var_38], 8
 * 00000001C004A742: lea     rax, [rsp+78h+arg_30]
 * 00000001C004A74A: mov     [rsp+78h+var_40], rax
 * 00000001C004A74F: lea     r8d, [rdx+0Ah]
 * 00000001C004A753: lea     rax, [rsp+78h+arg_28]
 * 00000001C004A75B: mov     [rsp+78h+var_48], rdi
 * 00000001C004A760: mov     [rsp+78h+var_50], rax
 * 00000001C004A765: mov     [rsp+78h+var_58], bp
 * 00000001C004A76A: call    cs:__imp_WppAutoLogTrace
 * 00000001C004A771: nop     dword ptr [rax+rax+00h]
 * 00000001C004A776: lea     r11, [rsp+78h+var_8]
 * 00000001C004A77B: mov     rbx, [r11+10h]
 * 00000001C004A77F: mov     rbp, [r11+18h]
 * 00000001C004A783: mov     rsp, r11
 * 00000001C004A786: pop     rdi
 * 00000001C004A787: retn
 */
