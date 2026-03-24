/*
 * XREFs of WPP_RECORDER_SF_ddqqq @ 0x1C003DB84
 * Callers:
 *     Endpoint_EvtEndpointCleanupCallback @ 0x1C003A560 (Endpoint_EvtEndpointCleanupCallback.c)
 *     Endpoint_EvtStaticStreamsCleanupCallback @ 0x1C003A700 (Endpoint_EvtStaticStreamsCleanupCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddqqq @ 0x1C003DB84
 * Reason: Hex-Rays returned no pseudocode for 0x1C003DB84
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003DB84: mov     r11, rsp
 * 00000001C003DB87: mov     [r11+8], rbx
 * 00000001C003DB8B: mov     [r11+10h], rbp
 * 00000001C003DB8F: mov     [r11+18h], rsi
 * 00000001C003DB93: push    rdi
 * 00000001C003DB94: sub     rsp, 80h
 * 00000001C003DB9B: mov     rdi, rcx
 * 00000001C003DB9E: movzx   ebx, r9w
 * 00000001C003DBA2: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003DBA9: mov     esi, 4
 * 00000001C003DBAE: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C003DBB5: lea     ebp, [rsi+4]
 * 00000001C003DBB8: jz      short loc_1C003DC1F
 * 00000001C003DBBA: cmp     [rcx+29h], sil
 * 00000001C003DBBE: jb      short loc_1C003DC1F
 * 00000001C003DBC0: and     qword ptr [r11-18h], 0
 * 00000001C003DBC5: lea     rdx, [r11+50h]
 * 00000001C003DBC9: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003DBD0: lea     r8, WPP_54015396503830aea6e7f220ba327c55_Traceguids
 * 00000001C003DBD7: mov     rcx, [rcx+18h]
 * 00000001C003DBDB: mov     r9d, ebx
 * 00000001C003DBDE: mov     [r11-20h], rbp
 * 00000001C003DBE2: mov     [r11-28h], rdx
 * 00000001C003DBE6: lea     rdx, [r11+48h]
 * 00000001C003DBEA: mov     [r11-30h], rbp
 * 00000001C003DBEE: mov     [r11-38h], rdx
 * 00000001C003DBF2: lea     rdx, [r11+40h]
 * 00000001C003DBF6: mov     [r11-40h], rbp
 * 00000001C003DBFA: mov     [r11-48h], rdx
 * 00000001C003DBFE: lea     rdx, [r11+38h]
 * 00000001C003DC02: mov     [r11-50h], rsi
 * 00000001C003DC06: mov     [r11-58h], rdx
 * 00000001C003DC0A: lea     rdx, [r11+30h]
 * 00000001C003DC0E: mov     [r11-60h], rsi
 * 00000001C003DC12: mov     [r11-68h], rdx
 * 00000001C003DC16: lea     edx, [rsi+27h]
 * 00000001C003DC19: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003DC1F: and     [rsp+88h+var_10], 0
 * 00000001C003DC25: lea     rax, [rsp+88h+arg_48]
 * 00000001C003DC2D: mov     [rsp+88h+var_18], rbp
 * 00000001C003DC32: lea     r9, WPP_54015396503830aea6e7f220ba327c55_Traceguids
 * 00000001C003DC39: mov     [rsp+88h+var_20], rax
 * 00000001C003DC3E: mov     r8d, 0Dh
 * 00000001C003DC44: mov     [rsp+88h+var_28], rbp
 * 00000001C003DC49: lea     rax, [rsp+88h+arg_40]
 * 00000001C003DC51: mov     [rsp+88h+var_30], rax
 * 00000001C003DC56: mov     edx, esi
 * 00000001C003DC58: mov     [rsp+88h+var_38], rbp
 * 00000001C003DC5D: lea     rax, [rsp+88h+arg_38]
 * 00000001C003DC65: mov     [rsp+88h+var_40], rax
 * 00000001C003DC6A: mov     rcx, rdi
 * 00000001C003DC6D: mov     [rsp+88h+var_48], rsi
 * 00000001C003DC72: lea     rax, [rsp+88h+arg_30]
 * 00000001C003DC7A: mov     [rsp+88h+var_50], rax
 * 00000001C003DC7F: lea     rax, [rsp+88h+arg_28]
 * 00000001C003DC87: mov     [rsp+88h+var_58], rsi
 * 00000001C003DC8C: mov     [rsp+88h+var_60], rax
 * 00000001C003DC91: mov     [rsp+88h+var_68], bx
 * 00000001C003DC96: call    cs:__imp_WppAutoLogTrace
 * 00000001C003DC9D: nop     dword ptr [rax+rax+00h]
 * 00000001C003DCA2: lea     r11, [rsp+88h+var_8]
 * 00000001C003DCAA: mov     rbx, [r11+10h]
 * 00000001C003DCAE: mov     rbp, [r11+18h]
 * 00000001C003DCB2: mov     rsi, [r11+20h]
 * 00000001C003DCB6: mov     rsp, r11
 * 00000001C003DCB9: pop     rdi
 * 00000001C003DCBA: retn
 */
