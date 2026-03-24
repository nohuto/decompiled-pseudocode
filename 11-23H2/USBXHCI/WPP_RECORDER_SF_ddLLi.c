/*
 * XREFs of WPP_RECORDER_SF_ddLLi @ 0x1C00109A0
 * Callers:
 *     Endpoint_OnCancelStopCompletion @ 0x1C0010D70 (Endpoint_OnCancelStopCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddLLi @ 0x1C00109A0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00109A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00109A0: mov     [rsp+arg_0], rbx
 * 00000001C00109A5: mov     [rsp+arg_8], rbp
 * 00000001C00109AA: push    rdi
 * 00000001C00109AB: sub     rsp, 80h
 * 00000001C00109B2: mov     rbx, rcx
 * 00000001C00109B5: mov     edi, 4
 * 00000001C00109BA: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00109C1: lea     ebp, [rdi+4Ah]
 * 00000001C00109C4: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C00109CB: jnz     loc_1C002DEB6
 * 00000001C00109D1: and     [rsp+88h+var_10], 0
 * 00000001C00109D7: lea     rax, [rsp+88h+arg_48]
 * 00000001C00109DF: mov     [rsp+88h+var_18], 8
 * 00000001C00109E8: lea     r9, WPP_54015396503830aea6e7f220ba327c55_Traceguids
 * 00000001C00109EF: mov     [rsp+88h+var_20], rax
 * 00000001C00109F4: mov     r8d, 0Dh
 * 00000001C00109FA: mov     [rsp+88h+var_28], rdi
 * 00000001C00109FF: lea     rax, [rsp+88h+arg_40]
 * 00000001C0010A07: mov     [rsp+88h+var_30], rax
 * 00000001C0010A0C: mov     edx, edi
 * 00000001C0010A0E: mov     [rsp+88h+var_38], rdi
 * 00000001C0010A13: lea     rax, [rsp+88h+arg_38]
 * 00000001C0010A1B: mov     [rsp+88h+var_40], rax
 * 00000001C0010A20: mov     rcx, rbx
 * 00000001C0010A23: mov     [rsp+88h+var_48], rdi
 * 00000001C0010A28: lea     rax, [rsp+88h+arg_30]
 * 00000001C0010A30: mov     [rsp+88h+var_50], rax
 * 00000001C0010A35: lea     rax, [rsp+88h+arg_28]
 * 00000001C0010A3D: mov     [rsp+88h+var_58], rdi
 * 00000001C0010A42: mov     [rsp+88h+var_60], rax
 * 00000001C0010A47: mov     word ptr [rsp+88h+var_68], bp
 * 00000001C0010A4C: call    cs:__imp_WppAutoLogTrace
 * 00000001C0010A53: nop     dword ptr [rax+rax+00h]
 * 00000001C0010A58: lea     r11, [rsp+88h+var_8]
 * 00000001C0010A60: mov     rbx, [r11+10h]
 * 00000001C0010A64: mov     rbp, [r11+18h]
 * 00000001C0010A68: mov     rsp, r11
 * 00000001C0010A6B: pop     rdi
 * 00000001C0010A6C: retn
 * 00000001C002DEB6: cmp     [rcx+29h], dil
 * 00000001C002DEBA: jb      loc_1C00109D1
 * 00000001C002DEC0: and     [rsp+88h+var_18], 0
 * 00000001C002DEC6: lea     rdx, [rsp+88h+arg_48]
 * 00000001C002DECE: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002DED5: lea     r8, WPP_54015396503830aea6e7f220ba327c55_Traceguids
 * 00000001C002DEDC: mov     rcx, [rcx+18h]
 * 00000001C002DEE0: mov     r9d, ebp
 * 00000001C002DEE3: mov     [rsp+88h+var_20], 8
 * 00000001C002DEEC: mov     [rsp+88h+var_28], rdx
 * 00000001C002DEF1: lea     rdx, [rsp+88h+arg_40]
 * 00000001C002DEF9: mov     [rsp+88h+var_30], rdi
 * 00000001C002DEFE: mov     [rsp+88h+var_38], rdx
 * 00000001C002DF03: lea     rdx, [rsp+88h+arg_38]
 * 00000001C002DF0B: mov     [rsp+88h+var_40], rdi
 * 00000001C002DF10: mov     [rsp+88h+var_48], rdx
 * 00000001C002DF15: lea     rdx, [rsp+88h+arg_30]
 * 00000001C002DF1D: mov     [rsp+88h+var_50], rdi
 * 00000001C002DF22: mov     [rsp+88h+var_58], rdx
 * 00000001C002DF27: lea     rdx, [rsp+88h+arg_28]
 * 00000001C002DF2F: mov     [rsp+88h+var_60], rdi
 * 00000001C002DF34: mov     [rsp+88h+var_68], rdx
 * 00000001C002DF39: mov     edx, 2Bh ; '+'
 * 00000001C002DF3E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002DF44: nop
 * 00000001C002DF45: jmp     loc_1C00109D1
 */
