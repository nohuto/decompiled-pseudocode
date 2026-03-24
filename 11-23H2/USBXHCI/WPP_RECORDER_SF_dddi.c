/*
 * XREFs of WPP_RECORDER_SF_DDDi @ 0x1C00479D8
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C0011324 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_ValidateED0TrbPointerOnMismatch @ 0x1C0047228 (Bulk_ValidateED0TrbPointerOnMismatch.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDi @ 0x1C00479D8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00479D8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00479D8: mov     r11, rsp
 * 00000001C00479DB: mov     [r11+8], rbx
 * 00000001C00479DF: mov     [r11+10h], rbp
 * 00000001C00479E3: mov     [r11+18h], rsi
 * 00000001C00479E7: push    rdi
 * 00000001C00479E8: sub     rsp, 70h
 * 00000001C00479EC: mov     rsi, rcx
 * 00000001C00479EF: movzx   edi, r9w
 * 00000001C00479F3: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00479FA: mov     ebp, 4
 * 00000001C00479FF: movzx   ebx, dl
 * 00000001C0047A02: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0047A09: jz      short loc_1C0047A67
 * 00000001C0047A0B: cmp     [rcx+29h], bl
 * 00000001C0047A0E: jb      short loc_1C0047A67
 * 00000001C0047A10: and     qword ptr [r11-18h], 0
 * 00000001C0047A15: lea     rdx, [r11+48h]
 * 00000001C0047A19: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0047A20: lea     r8, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C0047A27: mov     rcx, [rcx+18h]
 * 00000001C0047A2B: mov     r9d, edi
 * 00000001C0047A2E: mov     qword ptr [r11-20h], 8
 * 00000001C0047A36: mov     [r11-28h], rdx
 * 00000001C0047A3A: lea     rdx, [r11+40h]
 * 00000001C0047A3E: mov     [r11-30h], rbp
 * 00000001C0047A42: mov     [r11-38h], rdx
 * 00000001C0047A46: lea     rdx, [r11+38h]
 * 00000001C0047A4A: mov     [r11-40h], rbp
 * 00000001C0047A4E: mov     [r11-48h], rdx
 * 00000001C0047A52: lea     rdx, [r11+30h]
 * 00000001C0047A56: mov     [r11-50h], rbp
 * 00000001C0047A5A: mov     [r11-58h], rdx
 * 00000001C0047A5E: lea     edx, [rbp+27h]
 * 00000001C0047A61: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0047A67: and     [rsp+78h+var_10], 0
 * 00000001C0047A6D: lea     rax, [rsp+78h+arg_40]
 * 00000001C0047A75: mov     [rsp+78h+var_18], 8
 * 00000001C0047A7E: lea     r9, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C0047A85: mov     [rsp+78h+var_20], rax
 * 00000001C0047A8A: mov     r8d, 0Eh
 * 00000001C0047A90: mov     [rsp+78h+var_28], rbp
 * 00000001C0047A95: lea     rax, [rsp+78h+arg_38]
 * 00000001C0047A9D: mov     [rsp+78h+var_30], rax
 * 00000001C0047AA2: mov     edx, ebx
 * 00000001C0047AA4: mov     [rsp+78h+var_38], rbp
 * 00000001C0047AA9: lea     rax, [rsp+78h+arg_30]
 * 00000001C0047AB1: mov     [rsp+78h+var_40], rax
 * 00000001C0047AB6: mov     rcx, rsi
 * 00000001C0047AB9: lea     rax, [rsp+78h+arg_28]
 * 00000001C0047AC1: mov     [rsp+78h+var_48], rbp
 * 00000001C0047AC6: mov     [rsp+78h+var_50], rax
 * 00000001C0047ACB: mov     [rsp+78h+var_58], di
 * 00000001C0047AD0: call    cs:__imp_WppAutoLogTrace
 * 00000001C0047AD7: nop     dword ptr [rax+rax+00h]
 * 00000001C0047ADC: lea     r11, [rsp+78h+var_8]
 * 00000001C0047AE1: mov     rbx, [r11+10h]
 * 00000001C0047AE5: mov     rbp, [r11+18h]
 * 00000001C0047AE9: mov     rsi, [r11+20h]
 * 00000001C0047AED: mov     rsp, r11
 * 00000001C0047AF0: pop     rdi
 * 00000001C0047AF1: retn
 */
