/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_HL @ 0x1C01DA700
 * Callers:
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C01C8094 (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C01C89F4 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C01CF4BC (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_HL @ 0x1C01DA700
 * Reason: Hex-Rays returned no pseudocode for 0x1C01DA700
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01DA700: mov     r11, rsp
 * 00000001C01DA703: mov     [r11+8], rbx
 * 00000001C01DA707: mov     [r11+10h], rsi
 * 00000001C01DA70B: push    rdi
 * 00000001C01DA70C: sub     rsp, 50h
 * 00000001C01DA710: mov     rsi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C01DA717: mov     dil, r8b
 * 00000001C01DA71A: movzx   ebx, [rsp+58h+arg_30]
 * 00000001C01DA722: test    dl, dl
 * 00000001C01DA724: jz      short loc_1C01DA767
 * 00000001C01DA726: and     qword ptr [r11-18h], 0
 * 00000001C01DA72B: lea     rdx, [r11+50h]
 * 00000001C01DA72F: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01DA736: lea     r8, WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids
 * 00000001C01DA73D: mov     qword ptr [r11-20h], 4
 * 00000001C01DA745: mov     r9d, ebx
 * 00000001C01DA748: mov     [r11-28h], rdx
 * 00000001C01DA74C: lea     rdx, [r11+48h]
 * 00000001C01DA750: mov     qword ptr [r11-30h], 2
 * 00000001C01DA758: mov     [r11-38h], rdx
 * 00000001C01DA75C: mov     edx, 2Bh ; '+'
 * 00000001C01DA761: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01DA767: test    dil, dil
 * 00000001C01DA76A: jz      short loc_1C01DA7C7
 * 00000001C01DA76C: and     [rsp+58h+var_10], 0
 * 00000001C01DA772: lea     rax, [rsp+58h+arg_48]
 * 00000001C01DA77A: movzx   edx, [rsp+58h+arg_20]
 * 00000001C01DA782: lea     r9, WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids
 * 00000001C01DA789: mov     [rsp+58h+var_18], 4
 * 00000001C01DA792: mov     r8d, 7
 * 00000001C01DA798: mov     [rsp+58h+var_20], rax
 * 00000001C01DA79D: mov     rcx, rsi
 * 00000001C01DA7A0: lea     rax, [rsp+58h+arg_40]
 * 00000001C01DA7A8: mov     [rsp+58h+var_28], 2
 * 00000001C01DA7B1: mov     [rsp+58h+var_30], rax
 * 00000001C01DA7B6: mov     [rsp+58h+var_38], bx
 * 00000001C01DA7BB: call    cs:__imp_WppAutoLogTrace
 * 00000001C01DA7C2: nop     dword ptr [rax+rax+00h]
 * 00000001C01DA7C7: mov     rbx, [rsp+58h+arg_0]
 * 00000001C01DA7CC: mov     rsi, [rsp+58h+arg_8]
 * 00000001C01DA7D1: add     rsp, 50h
 * 00000001C01DA7D5: pop     rdi
 * 00000001C01DA7D6: retn
 */
