/*
 * XREFs of WPP_RECORDER_SF_q_guid_L @ 0x1C0037604
 * Callers:
 *     Controller_ExecuteDSM @ 0x1C006E4A4 (Controller_ExecuteDSM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q_guid_L @ 0x1C0037604
 * Reason: Hex-Rays returned no pseudocode for 0x1C0037604
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0037604: mov     r11, rsp
 * 00000001C0037607: mov     [r11+8], rbx
 * 00000001C003760B: mov     [r11+10h], rsi
 * 00000001C003760F: mov     [r11+18h], rdi
 * 00000001C0037613: push    r15
 * 00000001C0037615: sub     rsp, 60h
 * 00000001C0037619: mov     rbx, [rsp+68h+arg_30]
 * 00000001C0037621: mov     rdi, rcx
 * 00000001C0037624: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003762B: mov     esi, 4
 * 00000001C0037630: mov     r15d, 105h
 * 00000001C0037636: mov     eax, [rcx+2Ch]
 * 00000001C0037639: test    al, 8
 * 00000001C003763B: jz      short loc_1C003768E
 * 00000001C003763D: cmp     [rcx+29h], sil
 * 00000001C0037641: jb      short loc_1C003768E
 * 00000001C0037643: and     qword ptr [r11-18h], 0
 * 00000001C0037648: lea     rdx, [r11+40h]
 * 00000001C003764C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0037653: lea     r8, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C003765A: mov     rcx, [rcx+18h]
 * 00000001C003765E: mov     r9d, r15d
 * 00000001C0037661: mov     [r11-20h], rsi
 * 00000001C0037665: mov     [r11-28h], rdx
 * 00000001C0037669: lea     rdx, [r11+30h]
 * 00000001C003766D: mov     qword ptr [r11-30h], 10h
 * 00000001C0037675: mov     [r11-38h], rbx
 * 00000001C0037679: mov     qword ptr [r11-40h], 8
 * 00000001C0037681: mov     [r11-48h], rdx
 * 00000001C0037685: lea     edx, [rsi+27h]
 * 00000001C0037688: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003768E: and     [rsp+68h+var_10], 0
 * 00000001C0037694: lea     rax, [rsp+68h+arg_38]
 * 00000001C003769C: mov     [rsp+68h+var_18], rsi
 * 00000001C00376A1: lea     r9, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C00376A8: mov     [rsp+68h+var_20], rax
 * 00000001C00376AD: mov     r8d, esi
 * 00000001C00376B0: mov     [rsp+68h+var_28], 10h
 * 00000001C00376B9: lea     rax, [rsp+68h+arg_28]
 * 00000001C00376C1: mov     [rsp+68h+var_30], rbx
 * 00000001C00376C6: mov     edx, esi
 * 00000001C00376C8: mov     [rsp+68h+var_38], 8
 * 00000001C00376D1: mov     rcx, rdi
 * 00000001C00376D4: mov     [rsp+68h+var_40], rax
 * 00000001C00376D9: mov     [rsp+68h+var_48], r15w
 * 00000001C00376DF: call    cs:__imp_WppAutoLogTrace
 * 00000001C00376E6: nop     dword ptr [rax+rax+00h]
 * 00000001C00376EB: lea     r11, [rsp+68h+var_8]
 * 00000001C00376F0: mov     rbx, [r11+10h]
 * 00000001C00376F4: mov     rsi, [r11+18h]
 * 00000001C00376F8: mov     rdi, [r11+20h]
 * 00000001C00376FC: mov     rsp, r11
 * 00000001C00376FF: pop     r15
 * 00000001C0037701: retn
 */
