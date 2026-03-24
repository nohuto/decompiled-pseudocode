/*
 * XREFs of WPP_RECORDER_SF_dDD @ 0x1C002C758
 * Callers:
 *     ACPIGpeInstallRemoveIndex @ 0x1C002C418 (ACPIGpeInstallRemoveIndex.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dDD @ 0x1C002C758
 * Reason: Hex-Rays returned no pseudocode for 0x1C002C758
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C002C758: mov     r11, rsp
 * 00000001C002C75B: mov     [r11+8], rbx
 * 00000001C002C75F: mov     [r11+10h], rsi
 * 00000001C002C763: push    rdi
 * 00000001C002C764: sub     rsp, 60h
 * 00000001C002C768: mov     rdi, rcx
 * 00000001C002C76B: movzx   ebx, r9w
 * 00000001C002C76F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C002C776: mov     esi, 4
 * 00000001C002C77B: mov     eax, [rcx+2Ch]
 * 00000001C002C77E: test    al, 2
 * 00000001C002C780: jz      short loc_1C002C7CF
 * 00000001C002C782: cmp     [rcx+29h], sil
 * 00000001C002C786: jb      short loc_1C002C7CF
 * 00000001C002C788: and     qword ptr [r11-18h], 0
 * 00000001C002C78D: lea     rdx, [r11+40h]
 * 00000001C002C791: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002C798: lea     r8, WPP_3d35ab1e3a8c30c2a397092d9bf7b300_Traceguids
 * 00000001C002C79F: mov     rcx, [rcx+18h]
 * 00000001C002C7A3: mov     r9d, ebx
 * 00000001C002C7A6: mov     [r11-20h], rsi
 * 00000001C002C7AA: mov     [r11-28h], rdx
 * 00000001C002C7AE: lea     rdx, [r11+38h]
 * 00000001C002C7B2: mov     [r11-30h], rsi
 * 00000001C002C7B6: mov     [r11-38h], rdx
 * 00000001C002C7BA: lea     rdx, [r11+30h]
 * 00000001C002C7BE: mov     [r11-40h], rsi
 * 00000001C002C7C2: mov     [r11-48h], rdx
 * 00000001C002C7C6: lea     edx, [rsi+27h]
 * 00000001C002C7C9: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002C7CF: and     [rsp+68h+var_10], 0
 * 00000001C002C7D5: lea     rax, [rsp+68h+arg_38]
 * 00000001C002C7DD: mov     [rsp+68h+var_18], rsi
 * 00000001C002C7E2: lea     r9, WPP_3d35ab1e3a8c30c2a397092d9bf7b300_Traceguids
 * 00000001C002C7E9: mov     [rsp+68h+var_20], rax
 * 00000001C002C7EE: mov     r8d, 2
 * 00000001C002C7F4: mov     [rsp+68h+var_28], rsi
 * 00000001C002C7F9: lea     rax, [rsp+68h+arg_30]
 * 00000001C002C801: mov     [rsp+68h+var_30], rax
 * 00000001C002C806: mov     edx, esi
 * 00000001C002C808: lea     rax, [rsp+68h+arg_28]
 * 00000001C002C810: mov     [rsp+68h+var_38], rsi
 * 00000001C002C815: mov     [rsp+68h+var_40], rax
 * 00000001C002C81A: mov     rcx, rdi
 * 00000001C002C81D: mov     [rsp+68h+var_48], bx
 * 00000001C002C822: call    cs:__imp_WppAutoLogTrace
 * 00000001C002C829: nop     dword ptr [rax+rax+00h]
 * 00000001C002C82E: mov     rbx, [rsp+68h+arg_0]
 * 00000001C002C833: mov     rsi, [rsp+68h+arg_8]
 * 00000001C002C838: add     rsp, 60h
 * 00000001C002C83C: pop     rdi
 * 00000001C002C83D: retn
 */
