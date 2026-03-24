/*
 * XREFs of WPP_RECORDER_SF_qsD @ 0x1C002629C
 * Callers:
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C00842E4 (ExternalRequestBiosNameDeviceAssociation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qsD @ 0x1C002629C
 * Reason: Hex-Rays returned no pseudocode for 0x1C002629C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C002629C: mov     [rsp+arg_0], rbx
 * 00000001C00262A1: mov     [rsp+arg_8], rsi
 * 00000001C00262A6: mov     [rsp+arg_10], rdi
 * 00000001C00262AB: push    r13
 * 00000001C00262AD: sub     rsp, 60h
 * 00000001C00262B1: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C00262B8: lea     r13, aNull; "NULL"
 * 00000001C00262BF: mov     rdi, [rsp+68h+arg_30]
 * 00000001C00262C7: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C00262CB: mov     rsi, rcx
 * 00000001C00262CE: test    dword ptr [rdx+2Ch], 100000h
 * 00000001C00262D5: lea     r9d, [rbx+0Eh]
 * 00000001C00262D9: jz      loc_1C0026374
 * 00000001C00262DF: cmp     byte ptr [rdx+29h], 2
 * 00000001C00262E3: jb      loc_1C0026374
 * 00000001C00262E9: test    rdi, rdi
 * 00000001C00262EC: jz      short loc_1C00262FF
 * 00000001C00262EE: mov     rdx, rbx
 * 00000001C00262F1: inc     rdx
 * 00000001C00262F4: cmp     byte ptr [rdi+rdx], 0
 * 00000001C00262F8: jnz     short loc_1C00262F1
 * 00000001C00262FA: inc     rdx
 * 00000001C00262FD: jmp     short loc_1C0026304
 * 00000001C00262FF: mov     edx, 5
 * 00000001C0026304: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002630B: lea     r8, [rsp+68h+arg_38]
 * 00000001C0026313: test    rdi, rdi
 * 00000001C0026316: mov     rcx, rdi
 * 00000001C0026319: cmovz   rcx, r13
 * 00000001C002631D: and     [rsp+68h+var_18], 0
 * 00000001C0026323: mov     [rsp+68h+var_20], 4
 * 00000001C002632C: mov     [rsp+68h+var_28], r8
 * 00000001C0026331: lea     r8, WPP_8cd4999731163fb3621cd0c511e30926_Traceguids
 * 00000001C0026338: mov     [rsp+68h+var_30], rdx
 * 00000001C002633D: mov     edx, 2Bh ; '+'
 * 00000001C0026342: mov     [rsp+68h+var_38], rcx
 * 00000001C0026347: lea     rcx, [rsp+68h+arg_28]
 * 00000001C002634F: mov     [rsp+68h+var_40], 8
 * 00000001C0026358: mov     [rsp+68h+var_48], rcx
 * 00000001C002635D: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0026364: mov     rcx, [rcx+18h]
 * 00000001C0026368: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002636E: mov     r9d, 0Dh
 * 00000001C0026374: test    rdi, rdi
 * 00000001C0026377: jz      short loc_1C0026387
 * 00000001C0026379: inc     rbx
 * 00000001C002637C: cmp     byte ptr [rdi+rbx], 0
 * 00000001C0026380: jnz     short loc_1C0026379
 * 00000001C0026382: inc     rbx
 * 00000001C0026385: jmp     short loc_1C002638C
 * 00000001C0026387: mov     ebx, 5
 * 00000001C002638C: test    rdi, rdi
 * 00000001C002638F: lea     rax, [rsp+68h+arg_38]
 * 00000001C0026397: mov     edx, 2
 * 00000001C002639C: mov     rcx, rsi
 * 00000001C002639F: cmovz   rdi, r13
 * 00000001C00263A3: and     [rsp+68h+var_10], 0
 * 00000001C00263A9: mov     [rsp+68h+var_18], 4
 * 00000001C00263B2: mov     [rsp+68h+var_20], rax
 * 00000001C00263B7: lea     rax, [rsp+68h+arg_28]
 * 00000001C00263BF: mov     [rsp+68h+var_28], rbx
 * 00000001C00263C4: lea     r8d, [rdx+13h]
 * 00000001C00263C8: mov     [rsp+68h+var_30], rdi
 * 00000001C00263CD: mov     [rsp+68h+var_38], 8
 * 00000001C00263D6: mov     [rsp+68h+var_40], rax
 * 00000001C00263DB: mov     word ptr [rsp+68h+var_48], r9w
 * 00000001C00263E1: lea     r9, WPP_8cd4999731163fb3621cd0c511e30926_Traceguids
 * 00000001C00263E8: call    cs:__imp_WppAutoLogTrace
 * 00000001C00263EF: nop     dword ptr [rax+rax+00h]
 * 00000001C00263F4: lea     r11, [rsp+68h+var_8]
 * 00000001C00263F9: mov     rbx, [r11+10h]
 * 00000001C00263FD: mov     rsi, [r11+18h]
 * 00000001C0026401: mov     rdi, [r11+20h]
 * 00000001C0026405: mov     rsp, r11
 * 00000001C0026408: pop     r13
 * 00000001C002640A: retn
 */
