/*
 * XREFs of WPP_RECORDER_SF_qqL @ 0x1C0001A10
 * Callers:
 *     MouseClassReadCopyData @ 0x1C0004D78 (MouseClassReadCopyData.c)
 *     MouseClassDeviceControl @ 0x1C000D010 (MouseClassDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002B60 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqL @ 0x1C0001A10
 * Reason: Hex-Rays returned no pseudocode for 0x1C0001A10
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0001A10: mov     [rsp+arg_0], rbx
 * 00000001C0001A15: mov     [rsp+arg_8], rbp
 * 00000001C0001A1A: mov     [rsp+arg_10], rsi
 * 00000001C0001A1F: mov     [rsp+arg_18], rdi
 * 00000001C0001A24: push    r14
 * 00000001C0001A26: sub     rsp, 60h
 * 00000001C0001A2A: mov     ebx, r8d
 * 00000001C0001A2D: mov     r14, rcx
 * 00000001C0001A30: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0001A37: mov     edi, r8d
 * 00000001C0001A3A: shr     rdi, 10h
 * 00000001C0001A3E: lea     r11d, [rbx-1]
 * 00000001C0001A42: movzx   ebp, r9w
 * 00000001C0001A46: mov     r8d, r11d
 * 00000001C0001A49: movzx   esi, dl
 * 00000001C0001A4C: shr     r8, 5
 * 00000001C0001A50: and     r11d, 1Fh
 * 00000001C0001A54: and     r8d, 7FFh
 * 00000001C0001A5B: lea     rax, [rdi+rdi*4]
 * 00000001C0001A5F: lea     r10, [r8+rax*4]
 * 00000001C0001A63: mov     eax, [rcx+r10*4+2Ch]
 * 00000001C0001A68: bt      eax, r11d
 * 00000001C0001A6C: jb      loc_1C0003A9E
 * 00000001C0001A72: mov     [rsp+68h+var_10], 0
 * 00000001C0001A7B: lea     rax, [rsp+68h+arg_38]
 * 00000001C0001A83: mov     [rsp+68h+var_18], 4
 * 00000001C0001A8C: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0001A93: mov     [rsp+68h+var_20], rax
 * 00000001C0001A98: mov     r8d, ebx
 * 00000001C0001A9B: mov     [rsp+68h+var_28], 8
 * 00000001C0001AA4: lea     rax, [rsp+68h+arg_30]
 * 00000001C0001AAC: mov     [rsp+68h+var_30], rax
 * 00000001C0001AB1: mov     edx, esi
 * 00000001C0001AB3: lea     rax, [rsp+68h+arg_28]
 * 00000001C0001ABB: mov     [rsp+68h+var_38], 8
 * 00000001C0001AC4: mov     [rsp+68h+var_40], rax
 * 00000001C0001AC9: mov     rcx, r14
 * 00000001C0001ACC: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0001AD1: call    cs:__imp_WppAutoLogTrace
 * 00000001C0001AD8: nop     dword ptr [rax+rax+00h]
 * 00000001C0001ADD: lea     r11, [rsp+68h+var_8]
 * 00000001C0001AE2: mov     rbx, [r11+10h]
 * 00000001C0001AE6: mov     rbp, [r11+18h]
 * 00000001C0001AEA: mov     rsi, [r11+20h]
 * 00000001C0001AEE: mov     rdi, [r11+28h]
 * 00000001C0001AF2: mov     rsp, r11
 * 00000001C0001AF5: pop     r14
 * 00000001C0001AF7: retn
 * 00000001C0003A9E: lea     rax, [rdi+rdi*4]
 * 00000001C0003AA2: shl     rax, 4
 * 00000001C0003AA6: add     rcx, rax
 * 00000001C0003AA9: cmp     [rcx+29h], sil
 * 00000001C0003AAD: jb      loc_1C0001A72
 * 00000001C0003AB3: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0003ABA: lea     rdx, [rsp+68h+arg_38]
 * 00000001C0003AC2: mov     rcx, [rcx+18h]
 * 00000001C0003AC6: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0003ACD: mov     [rsp+68h+var_18], 0
 * 00000001C0003AD6: mov     r9d, ebp
 * 00000001C0003AD9: mov     [rsp+68h+var_20], 4
 * 00000001C0003AE2: mov     [rsp+68h+var_28], rdx
 * 00000001C0003AE7: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0003AEF: mov     [rsp+68h+var_30], 8
 * 00000001C0003AF8: mov     [rsp+68h+var_38], rdx
 * 00000001C0003AFD: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0003B05: mov     [rsp+68h+var_40], 8
 * 00000001C0003B0E: mov     [rsp+68h+var_48], rdx
 * 00000001C0003B13: mov     edx, 2Bh ; '+'
 * 00000001C0003B18: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0003B1E: nop
 * 00000001C0003B1F: jmp     loc_1C0001A72
 */
