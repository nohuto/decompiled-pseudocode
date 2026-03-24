/*
 * XREFs of WPP_RECORDER_SF_qqd @ 0x1C0006B2C
 * Callers:
 *     MouseClassWaitWakeComplete @ 0x1C00057D0 (MouseClassWaitWakeComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002B60 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqd @ 0x1C0006B2C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0006B2C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0006B2C: mov     r11, rsp
 * 00000001C0006B2F: mov     [r11+8], rbx
 * 00000001C0006B33: mov     [r11+10h], rbp
 * 00000001C0006B37: mov     [r11+18h], rsi
 * 00000001C0006B3B: push    rdi
 * 00000001C0006B3C: sub     rsp, 60h
 * 00000001C0006B40: mov     rsi, rcx
 * 00000001C0006B43: movzx   edi, r9w
 * 00000001C0006B47: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0006B4E: mov     ebp, 8
 * 00000001C0006B53: movzx   ebx, dl
 * 00000001C0006B56: mov     eax, [rcx+2Ch]
 * 00000001C0006B59: test    al, 10h
 * 00000001C0006B5B: jz      short loc_1C0006BAD
 * 00000001C0006B5D: cmp     [rcx+29h], bl
 * 00000001C0006B60: jb      short loc_1C0006BAD
 * 00000001C0006B62: and     qword ptr [r11-18h], 0
 * 00000001C0006B67: lea     rdx, [r11+40h]
 * 00000001C0006B6B: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0006B72: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0006B79: mov     rcx, [rcx+18h]
 * 00000001C0006B7D: mov     r9d, edi
 * 00000001C0006B80: mov     qword ptr [r11-20h], 4
 * 00000001C0006B88: mov     [r11-28h], rdx
 * 00000001C0006B8C: lea     rdx, [r11+38h]
 * 00000001C0006B90: mov     [r11-30h], rbp
 * 00000001C0006B94: mov     [r11-38h], rdx
 * 00000001C0006B98: lea     rdx, [r11+30h]
 * 00000001C0006B9C: mov     [r11-40h], rbp
 * 00000001C0006BA0: mov     [r11-48h], rdx
 * 00000001C0006BA4: lea     edx, [rbp+23h]
 * 00000001C0006BA7: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0006BAD: and     [rsp+68h+var_10], 0
 * 00000001C0006BB3: lea     rax, [rsp+68h+arg_38]
 * 00000001C0006BBB: mov     [rsp+68h+var_18], 4
 * 00000001C0006BC4: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0006BCB: mov     [rsp+68h+var_20], rax
 * 00000001C0006BD0: mov     r8d, 5
 * 00000001C0006BD6: mov     [rsp+68h+var_28], rbp
 * 00000001C0006BDB: lea     rax, [rsp+68h+arg_30]
 * 00000001C0006BE3: mov     [rsp+68h+var_30], rax
 * 00000001C0006BE8: mov     edx, ebx
 * 00000001C0006BEA: lea     rax, [rsp+68h+arg_28]
 * 00000001C0006BF2: mov     [rsp+68h+var_38], rbp
 * 00000001C0006BF7: mov     [rsp+68h+var_40], rax
 * 00000001C0006BFC: mov     rcx, rsi
 * 00000001C0006BFF: mov     [rsp+68h+var_48], di
 * 00000001C0006C04: call    cs:__imp_WppAutoLogTrace
 * 00000001C0006C0B: nop     dword ptr [rax+rax+00h]
 * 00000001C0006C10: lea     r11, [rsp+68h+var_8]
 * 00000001C0006C15: mov     rbx, [r11+10h]
 * 00000001C0006C19: mov     rbp, [r11+18h]
 * 00000001C0006C1D: mov     rsi, [r11+20h]
 * 00000001C0006C21: mov     rsp, r11
 * 00000001C0006C24: pop     rdi
 * 00000001C0006C25: retn
 */
