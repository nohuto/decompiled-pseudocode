/*
 * XREFs of WPP_RECORDER_SF_Dd @ 0x1C003C62C
 * Callers:
 *     Interrupter_PrepareHardware @ 0x1C006ED2C (Interrupter_PrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dd @ 0x1C003C62C
 * Reason: Hex-Rays returned no pseudocode for 0x1C003C62C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003C62C: mov     r11, rsp
 * 00000001C003C62F: mov     [r11+8], rbx
 * 00000001C003C633: mov     [r11+10h], rsi
 * 00000001C003C637: push    rdi
 * 00000001C003C638: sub     rsp, 50h
 * 00000001C003C63C: mov     rdi, rcx
 * 00000001C003C63F: movzx   ebx, r9w
 * 00000001C003C643: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003C64A: mov     esi, 4
 * 00000001C003C64F: test    dword ptr [rcx+2Ch], 100h
 * 00000001C003C656: jz      short loc_1C003C699
 * 00000001C003C658: cmp     byte ptr [rcx+29h], 2
 * 00000001C003C65C: jb      short loc_1C003C699
 * 00000001C003C65E: and     qword ptr [r11-18h], 0
 * 00000001C003C663: lea     rdx, [r11+38h]
 * 00000001C003C667: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003C66E: lea     r8, WPP_84765f96df013c20a94fd65d5e9532b8_Traceguids
 * 00000001C003C675: mov     rcx, [rcx+18h]
 * 00000001C003C679: mov     r9d, ebx
 * 00000001C003C67C: mov     [r11-20h], rsi
 * 00000001C003C680: mov     [r11-28h], rdx
 * 00000001C003C684: lea     rdx, [r11+30h]
 * 00000001C003C688: mov     [r11-30h], rsi
 * 00000001C003C68C: mov     [r11-38h], rdx
 * 00000001C003C690: lea     edx, [rsi+27h]
 * 00000001C003C693: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003C699: and     [rsp+58h+var_10], 0
 * 00000001C003C69F: lea     rax, [rsp+58h+arg_30]
 * 00000001C003C6A7: mov     [rsp+58h+var_18], rsi
 * 00000001C003C6AC: lea     r9, WPP_84765f96df013c20a94fd65d5e9532b8_Traceguids
 * 00000001C003C6B3: mov     [rsp+58h+var_20], rax
 * 00000001C003C6B8: mov     edx, 2
 * 00000001C003C6BD: lea     rax, [rsp+58h+arg_28]
 * 00000001C003C6C5: mov     [rsp+58h+var_28], rsi
 * 00000001C003C6CA: mov     [rsp+58h+var_30], rax
 * 00000001C003C6CF: mov     rcx, rdi
 * 00000001C003C6D2: mov     [rsp+58h+var_38], bx
 * 00000001C003C6D7: lea     r8d, [rdx+7]
 * 00000001C003C6DB: call    cs:__imp_WppAutoLogTrace
 * 00000001C003C6E2: nop     dword ptr [rax+rax+00h]
 * 00000001C003C6E7: mov     rbx, [rsp+58h+arg_0]
 * 00000001C003C6EC: mov     rsi, [rsp+58h+arg_8]
 * 00000001C003C6F1: add     rsp, 50h
 * 00000001C003C6F5: pop     rdi
 * 00000001C003C6F6: retn
 */
