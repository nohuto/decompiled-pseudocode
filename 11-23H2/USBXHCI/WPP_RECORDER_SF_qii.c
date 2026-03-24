/*
 * XREFs of WPP_RECORDER_SF_qii @ 0x1C00312D8
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x1C000A2B4 (Command_HandleCommandCompletionEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qii @ 0x1C00312D8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00312D8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00312D8: mov     r11, rsp
 * 00000001C00312DB: mov     [r11+8], rbx
 * 00000001C00312DF: mov     [r11+10h], rsi
 * 00000001C00312E3: push    rdi
 * 00000001C00312E4: sub     rsp, 60h
 * 00000001C00312E8: mov     rbx, rcx
 * 00000001C00312EB: mov     esi, 2Ch ; ','
 * 00000001C00312F0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00312F7: lea     edi, [rsi-24h]
 * 00000001C00312FA: mov     eax, [rcx+2Ch]
 * 00000001C00312FD: test    al, 40h
 * 00000001C00312FF: jz      short loc_1C003134E
 * 00000001C0031301: cmp     byte ptr [rcx+29h], 5
 * 00000001C0031305: jb      short loc_1C003134E
 * 00000001C0031307: and     qword ptr [r11-18h], 0
 * 00000001C003130C: lea     rdx, [r11+40h]
 * 00000001C0031310: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0031317: lea     r8, WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids
 * 00000001C003131E: mov     rcx, [rcx+18h]
 * 00000001C0031322: mov     r9d, esi
 * 00000001C0031325: mov     [r11-20h], rdi
 * 00000001C0031329: mov     [r11-28h], rdx
 * 00000001C003132D: lea     rdx, [r11+38h]
 * 00000001C0031331: mov     [r11-30h], rdi
 * 00000001C0031335: mov     [r11-38h], rdx
 * 00000001C0031339: lea     rdx, [r11+30h]
 * 00000001C003133D: mov     [r11-40h], rdi
 * 00000001C0031341: mov     [r11-48h], rdx
 * 00000001C0031345: lea     edx, [rsi-1]
 * 00000001C0031348: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003134E: and     [rsp+68h+var_10], 0
 * 00000001C0031354: lea     rax, [rsp+68h+arg_38]
 * 00000001C003135C: mov     [rsp+68h+var_18], rdi
 * 00000001C0031361: lea     r9, WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids
 * 00000001C0031368: mov     [rsp+68h+var_20], rax
 * 00000001C003136D: mov     edx, 5
 * 00000001C0031372: mov     [rsp+68h+var_28], rdi
 * 00000001C0031377: lea     rax, [rsp+68h+arg_30]
 * 00000001C003137F: mov     [rsp+68h+var_30], rax
 * 00000001C0031384: mov     rcx, rbx
 * 00000001C0031387: lea     rax, [rsp+68h+arg_28]
 * 00000001C003138F: mov     [rsp+68h+var_38], rdi
 * 00000001C0031394: mov     [rsp+68h+var_40], rax
 * 00000001C0031399: lea     r8d, [rdx+2]
 * 00000001C003139D: mov     [rsp+68h+var_48], si
 * 00000001C00313A2: call    cs:__imp_WppAutoLogTrace
 * 00000001C00313A9: nop     dword ptr [rax+rax+00h]
 * 00000001C00313AE: mov     rbx, [rsp+68h+arg_0]
 * 00000001C00313B3: mov     rsi, [rsp+68h+arg_8]
 * 00000001C00313B8: add     rsp, 60h
 * 00000001C00313BC: pop     rdi
 * 00000001C00313BD: retn
 */
