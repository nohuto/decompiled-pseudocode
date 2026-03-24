/*
 * XREFs of WPP_RECORDER_SF_DDDDD @ 0x1C0041E60
 * Callers:
 *     Isoch_Stage_Find @ 0x1C0002870 (Isoch_Stage_Find.c)
 *     TR_EnsureSegments @ 0x1C000B240 (TR_EnsureSegments.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C000DAC4 (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C0011324 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_Stage_EstimateRequiredTrbs @ 0x1C00125B8 (Bulk_Stage_EstimateRequiredTrbs.c)
 *     Bulk_Stage_EstimateRequiredSegments @ 0x1C0012734 (Bulk_Stage_EstimateRequiredSegments.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDDD @ 0x1C0041E60
 * Reason: Hex-Rays returned no pseudocode for 0x1C0041E60
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0041E60: mov     r11, rsp
 * 00000001C0041E63: mov     [r11+8], rbx
 * 00000001C0041E67: mov     [r11+10h], rbp
 * 00000001C0041E6B: mov     [r11+18h], rsi
 * 00000001C0041E6F: push    rdi
 * 00000001C0041E70: sub     rsp, 80h
 * 00000001C0041E77: mov     rsi, rcx
 * 00000001C0041E7A: movzx   edi, r9w
 * 00000001C0041E7E: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0041E85: mov     ebp, 4
 * 00000001C0041E8A: movzx   ebx, dl
 * 00000001C0041E8D: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0041E94: jz      short loc_1C0041EFB
 * 00000001C0041E96: cmp     [rcx+29h], bl
 * 00000001C0041E99: jb      short loc_1C0041EFB
 * 00000001C0041E9B: and     qword ptr [r11-18h], 0
 * 00000001C0041EA0: lea     rdx, [r11+50h]
 * 00000001C0041EA4: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0041EAB: mov     r9d, edi
 * 00000001C0041EAE: mov     r8, [rsp+88h+arg_20]
 * 00000001C0041EB6: mov     rcx, [rcx+18h]
 * 00000001C0041EBA: mov     [r11-20h], rbp
 * 00000001C0041EBE: mov     [r11-28h], rdx
 * 00000001C0041EC2: lea     rdx, [r11+48h]
 * 00000001C0041EC6: mov     [r11-30h], rbp
 * 00000001C0041ECA: mov     [r11-38h], rdx
 * 00000001C0041ECE: lea     rdx, [r11+40h]
 * 00000001C0041ED2: mov     [r11-40h], rbp
 * 00000001C0041ED6: mov     [r11-48h], rdx
 * 00000001C0041EDA: lea     rdx, [r11+38h]
 * 00000001C0041EDE: mov     [r11-50h], rbp
 * 00000001C0041EE2: mov     [r11-58h], rdx
 * 00000001C0041EE6: lea     rdx, [r11+30h]
 * 00000001C0041EEA: mov     [r11-60h], rbp
 * 00000001C0041EEE: mov     [r11-68h], rdx
 * 00000001C0041EF2: lea     edx, [rbp+27h]
 * 00000001C0041EF5: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0041EFB: and     [rsp+88h+var_10], 0
 * 00000001C0041F01: lea     rax, [rsp+88h+arg_48]
 * 00000001C0041F09: mov     r9, [rsp+88h+arg_20]
 * 00000001C0041F11: mov     r8d, 0Eh
 * 00000001C0041F17: mov     [rsp+88h+var_18], rbp
 * 00000001C0041F1C: mov     edx, ebx
 * 00000001C0041F1E: mov     [rsp+88h+var_20], rax
 * 00000001C0041F23: mov     rcx, rsi
 * 00000001C0041F26: mov     [rsp+88h+var_28], rbp
 * 00000001C0041F2B: lea     rax, [rsp+88h+arg_40]
 * 00000001C0041F33: mov     [rsp+88h+var_30], rax
 * 00000001C0041F38: lea     rax, [rsp+88h+arg_38]
 * 00000001C0041F40: mov     [rsp+88h+var_38], rbp
 * 00000001C0041F45: mov     [rsp+88h+var_40], rax
 * 00000001C0041F4A: lea     rax, [rsp+88h+arg_30]
 * 00000001C0041F52: mov     [rsp+88h+var_48], rbp
 * 00000001C0041F57: mov     [rsp+88h+var_50], rax
 * 00000001C0041F5C: lea     rax, [rsp+88h+arg_28]
 * 00000001C0041F64: mov     [rsp+88h+var_58], rbp
 * 00000001C0041F69: mov     [rsp+88h+var_60], rax
 * 00000001C0041F6E: mov     [rsp+88h+var_68], di
 * 00000001C0041F73: call    cs:__imp_WppAutoLogTrace
 * 00000001C0041F7A: nop     dword ptr [rax+rax+00h]
 * 00000001C0041F7F: lea     r11, [rsp+88h+var_8]
 * 00000001C0041F87: mov     rbx, [r11+10h]
 * 00000001C0041F8B: mov     rbp, [r11+18h]
 * 00000001C0041F8F: mov     rsi, [r11+20h]
 * 00000001C0041F93: mov     rsp, r11
 * 00000001C0041F96: pop     rdi
 * 00000001C0041F97: retn
 */
