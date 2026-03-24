/*
 * XREFs of WPP_RECORDER_SF_DDiqq @ 0x1C00436B0
 * Callers:
 *     Control_ProcessTransferEventWithED1 @ 0x1C0006840 (Control_ProcessTransferEventWithED1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDiqq @ 0x1C00436B0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00436B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00436B0: mov     r11, rsp
 * 00000001C00436B3: mov     [r11+8], rbx
 * 00000001C00436B7: mov     [r11+10h], rbp
 * 00000001C00436BB: mov     [r11+18h], rsi
 * 00000001C00436BF: push    rdi
 * 00000001C00436C0: sub     rsp, 80h
 * 00000001C00436C7: mov     rdi, rcx
 * 00000001C00436CA: movzx   ebx, r9w
 * 00000001C00436CE: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00436D5: mov     esi, 8
 * 00000001C00436DA: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00436E1: lea     ebp, [rsi-4]
 * 00000001C00436E4: jz      short loc_1C004374B
 * 00000001C00436E6: cmp     byte ptr [rcx+29h], 2
 * 00000001C00436EA: jb      short loc_1C004374B
 * 00000001C00436EC: and     qword ptr [r11-18h], 0
 * 00000001C00436F1: lea     rdx, [r11+50h]
 * 00000001C00436F5: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00436FC: lea     r8, WPP_1132998d7a983e6252cacd8244985166_Traceguids
 * 00000001C0043703: mov     rcx, [rcx+18h]
 * 00000001C0043707: mov     r9d, ebx
 * 00000001C004370A: mov     [r11-20h], rsi
 * 00000001C004370E: mov     [r11-28h], rdx
 * 00000001C0043712: lea     rdx, [r11+48h]
 * 00000001C0043716: mov     [r11-30h], rsi
 * 00000001C004371A: mov     [r11-38h], rdx
 * 00000001C004371E: lea     rdx, [r11+40h]
 * 00000001C0043722: mov     [r11-40h], rsi
 * 00000001C0043726: mov     [r11-48h], rdx
 * 00000001C004372A: lea     rdx, [r11+38h]
 * 00000001C004372E: mov     [r11-50h], rbp
 * 00000001C0043732: mov     [r11-58h], rdx
 * 00000001C0043736: lea     rdx, [r11+30h]
 * 00000001C004373A: mov     [r11-60h], rbp
 * 00000001C004373E: mov     [r11-68h], rdx
 * 00000001C0043742: lea     edx, [rsi+23h]
 * 00000001C0043745: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004374B: and     [rsp+88h+var_10], 0
 * 00000001C0043751: lea     rax, [rsp+88h+arg_48]
 * 00000001C0043759: mov     [rsp+88h+var_18], rsi
 * 00000001C004375E: lea     r9, WPP_1132998d7a983e6252cacd8244985166_Traceguids
 * 00000001C0043765: mov     [rsp+88h+var_20], rax
 * 00000001C004376A: mov     edx, 2
 * 00000001C004376F: mov     [rsp+88h+var_28], rsi
 * 00000001C0043774: lea     rax, [rsp+88h+arg_40]
 * 00000001C004377C: mov     [rsp+88h+var_30], rax
 * 00000001C0043781: mov     rcx, rdi
 * 00000001C0043784: mov     [rsp+88h+var_38], rsi
 * 00000001C0043789: lea     rax, [rsp+88h+arg_38]
 * 00000001C0043791: mov     [rsp+88h+var_40], rax
 * 00000001C0043796: lea     r8d, [rdx+0Ch]
 * 00000001C004379A: mov     [rsp+88h+var_48], rbp
 * 00000001C004379F: lea     rax, [rsp+88h+arg_30]
 * 00000001C00437A7: mov     [rsp+88h+var_50], rax
 * 00000001C00437AC: lea     rax, [rsp+88h+arg_28]
 * 00000001C00437B4: mov     [rsp+88h+var_58], rbp
 * 00000001C00437B9: mov     [rsp+88h+var_60], rax
 * 00000001C00437BE: mov     [rsp+88h+var_68], bx
 * 00000001C00437C3: call    cs:__imp_WppAutoLogTrace
 * 00000001C00437CA: nop     dword ptr [rax+rax+00h]
 * 00000001C00437CF: lea     r11, [rsp+88h+var_8]
 * 00000001C00437D7: mov     rbx, [r11+10h]
 * 00000001C00437DB: mov     rbp, [r11+18h]
 * 00000001C00437DF: mov     rsi, [r11+20h]
 * 00000001C00437E3: mov     rsp, r11
 * 00000001C00437E6: pop     rdi
 * 00000001C00437E7: retn
 */
