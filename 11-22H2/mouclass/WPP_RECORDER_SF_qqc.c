/*
 * XREFs of WPP_RECORDER_SF_qqc @ 0x1C0002100
 * Callers:
 *     MousePnP @ 0x1C0001EE0 (MousePnP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002B60 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqc @ 0x1C0002100
 * Reason: Hex-Rays returned no pseudocode for 0x1C0002100
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0002100: mov     [rsp+arg_0], rbx
 * 00000001C0002105: push    rsi
 * 00000001C0002106: sub     rsp, 60h
 * 00000001C000210A: mov     rbx, rcx
 * 00000001C000210D: mov     esi, 53h ; 'S'
 * 00000001C0002112: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0002119: mov     eax, [rcx+2Ch]
 * 00000001C000211C: test    al, 20h
 * 00000001C000211E: jnz     loc_1C0004664
 * 00000001C0002124: mov     [rsp+68h+var_10], 0
 * 00000001C000212D: lea     rax, [rsp+68h+arg_38]
 * 00000001C0002135: mov     [rsp+68h+var_18], 1
 * 00000001C000213E: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0002145: mov     [rsp+68h+var_20], rax
 * 00000001C000214A: mov     edx, 4
 * 00000001C000214F: mov     [rsp+68h+var_28], 8
 * 00000001C0002158: lea     rax, [rsp+68h+arg_30]
 * 00000001C0002160: mov     [rsp+68h+var_30], rax
 * 00000001C0002165: mov     rcx, rbx
 * 00000001C0002168: lea     rax, [rsp+68h+arg_28]
 * 00000001C0002170: mov     [rsp+68h+var_38], 8
 * 00000001C0002179: mov     [rsp+68h+var_40], rax
 * 00000001C000217E: lea     r8d, [rdx+2]
 * 00000001C0002182: mov     word ptr [rsp+68h+var_48], si
 * 00000001C0002187: call    cs:__imp_WppAutoLogTrace
 * 00000001C000218E: nop     dword ptr [rax+rax+00h]
 * 00000001C0002193: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0002198: add     rsp, 60h
 * 00000001C000219C: pop     rsi
 * 00000001C000219D: retn
 * 00000001C0004664: cmp     byte ptr [rcx+29h], 4
 * 00000001C0004668: jb      loc_1C0002124
 * 00000001C000466E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0004675: lea     rdx, [rsp+68h+arg_38]
 * 00000001C000467D: mov     rcx, [rcx+18h]
 * 00000001C0004681: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0004688: mov     [rsp+68h+var_18], 0
 * 00000001C0004691: mov     r9d, esi
 * 00000001C0004694: mov     [rsp+68h+var_20], 1
 * 00000001C000469D: mov     [rsp+68h+var_28], rdx
 * 00000001C00046A2: lea     rdx, [rsp+68h+arg_30]
 * 00000001C00046AA: mov     [rsp+68h+var_30], 8
 * 00000001C00046B3: mov     [rsp+68h+var_38], rdx
 * 00000001C00046B8: lea     rdx, [rsp+68h+arg_28]
 * 00000001C00046C0: mov     [rsp+68h+var_40], 8
 * 00000001C00046C9: mov     [rsp+68h+var_48], rdx
 * 00000001C00046CE: mov     edx, 2Bh ; '+'
 * 00000001C00046D3: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00046D9: nop
 * 00000001C00046DA: jmp     loc_1C0002124
 */
