/*
 * XREFs of WPP_RECORDER_SF_ddqqD @ 0x1C003DA44
 * Callers:
 *     Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted @ 0x1C003BD30 (Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddqqD @ 0x1C003DA44
 * Reason: Hex-Rays returned no pseudocode for 0x1C003DA44
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003DA44: mov     r11, rsp
 * 00000001C003DA47: mov     [r11+8], rbx
 * 00000001C003DA4B: mov     [r11+10h], rbp
 * 00000001C003DA4F: mov     [r11+18h], rsi
 * 00000001C003DA53: push    rdi
 * 00000001C003DA54: sub     rsp, 80h
 * 00000001C003DA5B: mov     edi, 4
 * 00000001C003DA60: mov     rbx, rcx
 * 00000001C003DA63: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003DA6A: lea     ebp, [rdi+71h]
 * 00000001C003DA6D: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C003DA74: lea     esi, [rdi+4]
 * 00000001C003DA77: jz      short loc_1C003DADE
 * 00000001C003DA79: cmp     [rcx+29h], dil
 * 00000001C003DA7D: jb      short loc_1C003DADE
 * 00000001C003DA7F: and     qword ptr [r11-18h], 0
 * 00000001C003DA84: lea     rdx, [r11+50h]
 * 00000001C003DA88: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003DA8F: lea     r8, WPP_54015396503830aea6e7f220ba327c55_Traceguids
 * 00000001C003DA96: mov     rcx, [rcx+18h]
 * 00000001C003DA9A: mov     r9d, ebp
 * 00000001C003DA9D: mov     [r11-20h], rdi
 * 00000001C003DAA1: mov     [r11-28h], rdx
 * 00000001C003DAA5: lea     rdx, [r11+48h]
 * 00000001C003DAA9: mov     [r11-30h], rsi
 * 00000001C003DAAD: mov     [r11-38h], rdx
 * 00000001C003DAB1: lea     rdx, [r11+40h]
 * 00000001C003DAB5: mov     [r11-40h], rsi
 * 00000001C003DAB9: mov     [r11-48h], rdx
 * 00000001C003DABD: lea     rdx, [r11+38h]
 * 00000001C003DAC1: mov     [r11-50h], rdi
 * 00000001C003DAC5: mov     [r11-58h], rdx
 * 00000001C003DAC9: lea     rdx, [r11+30h]
 * 00000001C003DACD: mov     [r11-60h], rdi
 * 00000001C003DAD1: mov     [r11-68h], rdx
 * 00000001C003DAD5: lea     edx, [rdi+27h]
 * 00000001C003DAD8: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003DADE: and     [rsp+88h+var_10], 0
 * 00000001C003DAE4: lea     rax, [rsp+88h+arg_48]
 * 00000001C003DAEC: mov     [rsp+88h+var_18], rdi
 * 00000001C003DAF1: lea     r9, WPP_54015396503830aea6e7f220ba327c55_Traceguids
 * 00000001C003DAF8: mov     [rsp+88h+var_20], rax
 * 00000001C003DAFD: mov     r8d, 0Dh
 * 00000001C003DB03: mov     [rsp+88h+var_28], rsi
 * 00000001C003DB08: lea     rax, [rsp+88h+arg_40]
 * 00000001C003DB10: mov     [rsp+88h+var_30], rax
 * 00000001C003DB15: mov     edx, edi
 * 00000001C003DB17: mov     [rsp+88h+var_38], rsi
 * 00000001C003DB1C: lea     rax, [rsp+88h+arg_38]
 * 00000001C003DB24: mov     [rsp+88h+var_40], rax
 * 00000001C003DB29: mov     rcx, rbx
 * 00000001C003DB2C: mov     [rsp+88h+var_48], rdi
 * 00000001C003DB31: lea     rax, [rsp+88h+arg_30]
 * 00000001C003DB39: mov     [rsp+88h+var_50], rax
 * 00000001C003DB3E: lea     rax, [rsp+88h+arg_28]
 * 00000001C003DB46: mov     [rsp+88h+var_58], rdi
 * 00000001C003DB4B: mov     [rsp+88h+var_60], rax
 * 00000001C003DB50: mov     [rsp+88h+var_68], bp
 * 00000001C003DB55: call    cs:__imp_WppAutoLogTrace
 * 00000001C003DB5C: nop     dword ptr [rax+rax+00h]
 * 00000001C003DB61: lea     r11, [rsp+88h+var_8]
 * 00000001C003DB69: mov     rbx, [r11+10h]
 * 00000001C003DB6D: mov     rbp, [r11+18h]
 * 00000001C003DB71: mov     rsi, [r11+20h]
 * 00000001C003DB75: mov     rsp, r11
 * 00000001C003DB78: pop     rdi
 * 00000001C003DB79: retn
 */
