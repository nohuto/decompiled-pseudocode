/*
 * XREFs of WPP_RECORDER_SF_Dd @ 0x1C003E428
 * Callers:
 *     Interrupter_PrepareHardware @ 0x1C0072C28 (Interrupter_PrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dd @ 0x1C003E428
 * Reason: Hex-Rays returned no pseudocode for 0x1C003E428
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003E428: mov     r11, rsp
 * 00000001C003E42B: mov     [r11+8], rbx
 * 00000001C003E42F: mov     [r11+10h], rsi
 * 00000001C003E433: push    rdi
 * 00000001C003E434: sub     rsp, 50h
 * 00000001C003E438: mov     rdi, rcx
 * 00000001C003E43B: movzx   ebx, r9w
 * 00000001C003E43F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003E446: mov     esi, 4
 * 00000001C003E44B: test    dword ptr [rcx+2Ch], 100h
 * 00000001C003E452: jz      short loc_1C003E495
 * 00000001C003E454: cmp     byte ptr [rcx+29h], 2
 * 00000001C003E458: jb      short loc_1C003E495
 * 00000001C003E45A: and     qword ptr [r11-18h], 0
 * 00000001C003E45F: lea     rdx, [r11+38h]
 * 00000001C003E463: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003E46A: lea     r8, WPP_89e87cee83d7332425398286600bed19_Traceguids
 * 00000001C003E471: mov     rcx, [rcx+18h]
 * 00000001C003E475: mov     r9d, ebx
 * 00000001C003E478: mov     [r11-20h], rsi
 * 00000001C003E47C: mov     [r11-28h], rdx
 * 00000001C003E480: lea     rdx, [r11+30h]
 * 00000001C003E484: mov     [r11-30h], rsi
 * 00000001C003E488: mov     [r11-38h], rdx
 * 00000001C003E48C: lea     edx, [rsi+27h]
 * 00000001C003E48F: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003E495: and     [rsp+58h+var_10], 0
 * 00000001C003E49B: lea     rax, [rsp+58h+arg_30]
 * 00000001C003E4A3: mov     [rsp+58h+var_18], rsi
 * 00000001C003E4A8: lea     r9, WPP_89e87cee83d7332425398286600bed19_Traceguids
 * 00000001C003E4AF: mov     [rsp+58h+var_20], rax
 * 00000001C003E4B4: mov     edx, 2
 * 00000001C003E4B9: lea     rax, [rsp+58h+arg_28]
 * 00000001C003E4C1: mov     [rsp+58h+var_28], rsi
 * 00000001C003E4C6: mov     [rsp+58h+var_30], rax
 * 00000001C003E4CB: mov     rcx, rdi
 * 00000001C003E4CE: mov     [rsp+58h+var_38], bx
 * 00000001C003E4D3: lea     r8d, [rdx+7]
 * 00000001C003E4D7: call    cs:__imp_WppAutoLogTrace
 * 00000001C003E4DE: nop     dword ptr [rax+rax+00h]
 * 00000001C003E4E3: mov     rbx, [rsp+58h+arg_0]
 * 00000001C003E4E8: mov     rsi, [rsp+58h+arg_8]
 * 00000001C003E4ED: add     rsp, 50h
 * 00000001C003E4F1: pop     rdi
 * 00000001C003E4F2: retn
 */
