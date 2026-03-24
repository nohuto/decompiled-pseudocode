/*
 * XREFs of WPP_RECORDER_SF_Dd @ 0x1C003E2E8
 * Callers:
 *     Interrupter_PrepareHardware @ 0x1C0072C68 (Interrupter_PrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dd @ 0x1C003E2E8
 * Reason: Hex-Rays returned no pseudocode for 0x1C003E2E8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003E2E8: mov     r11, rsp
 * 00000001C003E2EB: mov     [r11+8], rbx
 * 00000001C003E2EF: mov     [r11+10h], rsi
 * 00000001C003E2F3: push    rdi
 * 00000001C003E2F4: sub     rsp, 50h
 * 00000001C003E2F8: mov     rdi, rcx
 * 00000001C003E2FB: movzx   ebx, r9w
 * 00000001C003E2FF: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003E306: mov     esi, 4
 * 00000001C003E30B: test    dword ptr [rcx+2Ch], 100h
 * 00000001C003E312: jz      short loc_1C003E355
 * 00000001C003E314: cmp     byte ptr [rcx+29h], 2
 * 00000001C003E318: jb      short loc_1C003E355
 * 00000001C003E31A: and     qword ptr [r11-18h], 0
 * 00000001C003E31F: lea     rdx, [r11+38h]
 * 00000001C003E323: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003E32A: lea     r8, WPP_89e87cee83d7332425398286600bed19_Traceguids
 * 00000001C003E331: mov     rcx, [rcx+18h]
 * 00000001C003E335: mov     r9d, ebx
 * 00000001C003E338: mov     [r11-20h], rsi
 * 00000001C003E33C: mov     [r11-28h], rdx
 * 00000001C003E340: lea     rdx, [r11+30h]
 * 00000001C003E344: mov     [r11-30h], rsi
 * 00000001C003E348: mov     [r11-38h], rdx
 * 00000001C003E34C: lea     edx, [rsi+27h]
 * 00000001C003E34F: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003E355: and     [rsp+58h+var_10], 0
 * 00000001C003E35B: lea     rax, [rsp+58h+arg_30]
 * 00000001C003E363: mov     [rsp+58h+var_18], rsi
 * 00000001C003E368: lea     r9, WPP_89e87cee83d7332425398286600bed19_Traceguids
 * 00000001C003E36F: mov     [rsp+58h+var_20], rax
 * 00000001C003E374: mov     edx, 2
 * 00000001C003E379: lea     rax, [rsp+58h+arg_28]
 * 00000001C003E381: mov     [rsp+58h+var_28], rsi
 * 00000001C003E386: mov     [rsp+58h+var_30], rax
 * 00000001C003E38B: mov     rcx, rdi
 * 00000001C003E38E: mov     [rsp+58h+var_38], bx
 * 00000001C003E393: lea     r8d, [rdx+7]
 * 00000001C003E397: call    cs:__imp_WppAutoLogTrace
 * 00000001C003E39E: nop     dword ptr [rax+rax+00h]
 * 00000001C003E3A3: mov     rbx, [rsp+58h+arg_0]
 * 00000001C003E3A8: mov     rsi, [rsp+58h+arg_8]
 * 00000001C003E3AD: add     rsp, 50h
 * 00000001C003E3B1: pop     rdi
 * 00000001C003E3B2: retn
 */
