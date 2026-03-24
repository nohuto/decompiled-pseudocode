/*
 * XREFs of WPP_RECORDER_SF_DDDi @ 0x1C0047898
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C0011354 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_ValidateED0TrbPointerOnMismatch @ 0x1C00470E8 (Bulk_ValidateED0TrbPointerOnMismatch.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDi @ 0x1C0047898
 * Reason: Hex-Rays returned no pseudocode for 0x1C0047898
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0047898: mov     r11, rsp
 * 00000001C004789B: mov     [r11+8], rbx
 * 00000001C004789F: mov     [r11+10h], rbp
 * 00000001C00478A3: mov     [r11+18h], rsi
 * 00000001C00478A7: push    rdi
 * 00000001C00478A8: sub     rsp, 70h
 * 00000001C00478AC: mov     rsi, rcx
 * 00000001C00478AF: movzx   edi, r9w
 * 00000001C00478B3: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00478BA: mov     ebp, 4
 * 00000001C00478BF: movzx   ebx, dl
 * 00000001C00478C2: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00478C9: jz      short loc_1C0047927
 * 00000001C00478CB: cmp     [rcx+29h], bl
 * 00000001C00478CE: jb      short loc_1C0047927
 * 00000001C00478D0: and     qword ptr [r11-18h], 0
 * 00000001C00478D5: lea     rdx, [r11+48h]
 * 00000001C00478D9: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00478E0: lea     r8, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C00478E7: mov     rcx, [rcx+18h]
 * 00000001C00478EB: mov     r9d, edi
 * 00000001C00478EE: mov     qword ptr [r11-20h], 8
 * 00000001C00478F6: mov     [r11-28h], rdx
 * 00000001C00478FA: lea     rdx, [r11+40h]
 * 00000001C00478FE: mov     [r11-30h], rbp
 * 00000001C0047902: mov     [r11-38h], rdx
 * 00000001C0047906: lea     rdx, [r11+38h]
 * 00000001C004790A: mov     [r11-40h], rbp
 * 00000001C004790E: mov     [r11-48h], rdx
 * 00000001C0047912: lea     rdx, [r11+30h]
 * 00000001C0047916: mov     [r11-50h], rbp
 * 00000001C004791A: mov     [r11-58h], rdx
 * 00000001C004791E: lea     edx, [rbp+27h]
 * 00000001C0047921: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0047927: and     [rsp+78h+var_10], 0
 * 00000001C004792D: lea     rax, [rsp+78h+arg_40]
 * 00000001C0047935: mov     [rsp+78h+var_18], 8
 * 00000001C004793E: lea     r9, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C0047945: mov     [rsp+78h+var_20], rax
 * 00000001C004794A: mov     r8d, 0Eh
 * 00000001C0047950: mov     [rsp+78h+var_28], rbp
 * 00000001C0047955: lea     rax, [rsp+78h+arg_38]
 * 00000001C004795D: mov     [rsp+78h+var_30], rax
 * 00000001C0047962: mov     edx, ebx
 * 00000001C0047964: mov     [rsp+78h+var_38], rbp
 * 00000001C0047969: lea     rax, [rsp+78h+arg_30]
 * 00000001C0047971: mov     [rsp+78h+var_40], rax
 * 00000001C0047976: mov     rcx, rsi
 * 00000001C0047979: lea     rax, [rsp+78h+arg_28]
 * 00000001C0047981: mov     [rsp+78h+var_48], rbp
 * 00000001C0047986: mov     [rsp+78h+var_50], rax
 * 00000001C004798B: mov     [rsp+78h+var_58], di
 * 00000001C0047990: call    cs:__imp_WppAutoLogTrace
 * 00000001C0047997: nop     dword ptr [rax+rax+00h]
 * 00000001C004799C: lea     r11, [rsp+78h+var_8]
 * 00000001C00479A1: mov     rbx, [r11+10h]
 * 00000001C00479A5: mov     rbp, [r11+18h]
 * 00000001C00479A9: mov     rsi, [r11+20h]
 * 00000001C00479AD: mov     rsp, r11
 * 00000001C00479B0: pop     rdi
 * 00000001C00479B1: retn
 */
