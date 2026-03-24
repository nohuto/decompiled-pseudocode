/*
 * XREFs of WPP_RECORDER_SF_DDDDD @ 0x1C0041D20
 * Callers:
 *     Isoch_Stage_Find @ 0x1C0002870 (Isoch_Stage_Find.c)
 *     TR_EnsureSegments @ 0x1C000B270 (TR_EnsureSegments.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C000DAF4 (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C0011354 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_Stage_EstimateRequiredTrbs @ 0x1C0012610 (Bulk_Stage_EstimateRequiredTrbs.c)
 *     Bulk_Stage_EstimateRequiredSegments @ 0x1C001278C (Bulk_Stage_EstimateRequiredSegments.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDDD @ 0x1C0041D20
 * Reason: Hex-Rays returned no pseudocode for 0x1C0041D20
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0041D20: mov     r11, rsp
 * 00000001C0041D23: mov     [r11+8], rbx
 * 00000001C0041D27: mov     [r11+10h], rbp
 * 00000001C0041D2B: mov     [r11+18h], rsi
 * 00000001C0041D2F: push    rdi
 * 00000001C0041D30: sub     rsp, 80h
 * 00000001C0041D37: mov     rsi, rcx
 * 00000001C0041D3A: movzx   edi, r9w
 * 00000001C0041D3E: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0041D45: mov     ebp, 4
 * 00000001C0041D4A: movzx   ebx, dl
 * 00000001C0041D4D: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0041D54: jz      short loc_1C0041DBB
 * 00000001C0041D56: cmp     [rcx+29h], bl
 * 00000001C0041D59: jb      short loc_1C0041DBB
 * 00000001C0041D5B: and     qword ptr [r11-18h], 0
 * 00000001C0041D60: lea     rdx, [r11+50h]
 * 00000001C0041D64: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0041D6B: mov     r9d, edi
 * 00000001C0041D6E: mov     r8, [rsp+88h+arg_20]
 * 00000001C0041D76: mov     rcx, [rcx+18h]
 * 00000001C0041D7A: mov     [r11-20h], rbp
 * 00000001C0041D7E: mov     [r11-28h], rdx
 * 00000001C0041D82: lea     rdx, [r11+48h]
 * 00000001C0041D86: mov     [r11-30h], rbp
 * 00000001C0041D8A: mov     [r11-38h], rdx
 * 00000001C0041D8E: lea     rdx, [r11+40h]
 * 00000001C0041D92: mov     [r11-40h], rbp
 * 00000001C0041D96: mov     [r11-48h], rdx
 * 00000001C0041D9A: lea     rdx, [r11+38h]
 * 00000001C0041D9E: mov     [r11-50h], rbp
 * 00000001C0041DA2: mov     [r11-58h], rdx
 * 00000001C0041DA6: lea     rdx, [r11+30h]
 * 00000001C0041DAA: mov     [r11-60h], rbp
 * 00000001C0041DAE: mov     [r11-68h], rdx
 * 00000001C0041DB2: lea     edx, [rbp+27h]
 * 00000001C0041DB5: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0041DBB: and     [rsp+88h+var_10], 0
 * 00000001C0041DC1: lea     rax, [rsp+88h+arg_48]
 * 00000001C0041DC9: mov     r9, [rsp+88h+arg_20]
 * 00000001C0041DD1: mov     r8d, 0Eh
 * 00000001C0041DD7: mov     [rsp+88h+var_18], rbp
 * 00000001C0041DDC: mov     edx, ebx
 * 00000001C0041DDE: mov     [rsp+88h+var_20], rax
 * 00000001C0041DE3: mov     rcx, rsi
 * 00000001C0041DE6: mov     [rsp+88h+var_28], rbp
 * 00000001C0041DEB: lea     rax, [rsp+88h+arg_40]
 * 00000001C0041DF3: mov     [rsp+88h+var_30], rax
 * 00000001C0041DF8: lea     rax, [rsp+88h+arg_38]
 * 00000001C0041E00: mov     [rsp+88h+var_38], rbp
 * 00000001C0041E05: mov     [rsp+88h+var_40], rax
 * 00000001C0041E0A: lea     rax, [rsp+88h+arg_30]
 * 00000001C0041E12: mov     [rsp+88h+var_48], rbp
 * 00000001C0041E17: mov     [rsp+88h+var_50], rax
 * 00000001C0041E1C: lea     rax, [rsp+88h+arg_28]
 * 00000001C0041E24: mov     [rsp+88h+var_58], rbp
 * 00000001C0041E29: mov     [rsp+88h+var_60], rax
 * 00000001C0041E2E: mov     [rsp+88h+var_68], di
 * 00000001C0041E33: call    cs:__imp_WppAutoLogTrace
 * 00000001C0041E3A: nop     dword ptr [rax+rax+00h]
 * 00000001C0041E3F: lea     r11, [rsp+88h+var_8]
 * 00000001C0041E47: mov     rbx, [r11+10h]
 * 00000001C0041E4B: mov     rbp, [r11+18h]
 * 00000001C0041E4F: mov     rsi, [r11+20h]
 * 00000001C0041E53: mov     rsp, r11
 * 00000001C0041E56: pop     rdi
 * 00000001C0041E57: retn
 */
