/*
 * XREFs of WPP_RECORDER_SF_DDqDq @ 0x1C0006110
 * Callers:
 *     Control_WdfEvtIoDefault @ 0x1C0005C90 (Control_WdfEvtIoDefault.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqDq @ 0x1C0006110
 * Reason: Hex-Rays returned no pseudocode for 0x1C0006110
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0006110: mov     [rsp+arg_0], rbx
 * 00000001C0006115: mov     [rsp+arg_8], rbp
 * 00000001C000611A: mov     [rsp+arg_10], rsi
 * 00000001C000611F: push    rdi
 * 00000001C0006120: sub     rsp, 80h
 * 00000001C0006127: mov     edi, 4
 * 00000001C000612C: mov     rbx, rcx
 * 00000001C000612F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0006136: lea     ebp, [rdi+21h]
 * 00000001C0006139: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0006140: lea     esi, [rdi+4]
 * 00000001C0006143: jnz     loc_1C002328E
 * 00000001C0006149: and     [rsp+88h+var_10], 0
 * 00000001C000614F: lea     rax, [rsp+88h+arg_48]
 * 00000001C0006157: mov     [rsp+88h+var_18], rsi
 * 00000001C000615C: lea     r9, WPP_1132998d7a983e6252cacd8244985166_Traceguids
 * 00000001C0006163: mov     [rsp+88h+var_20], rax
 * 00000001C0006168: mov     r8d, 0Eh
 * 00000001C000616E: mov     [rsp+88h+var_28], rdi
 * 00000001C0006173: lea     rax, [rsp+88h+arg_40]
 * 00000001C000617B: mov     [rsp+88h+var_30], rax
 * 00000001C0006180: mov     edx, edi
 * 00000001C0006182: mov     [rsp+88h+var_38], rsi
 * 00000001C0006187: lea     rax, [rsp+88h+arg_38]
 * 00000001C000618F: mov     [rsp+88h+var_40], rax
 * 00000001C0006194: mov     rcx, rbx
 * 00000001C0006197: mov     [rsp+88h+var_48], rdi
 * 00000001C000619C: lea     rax, [rsp+88h+arg_30]
 * 00000001C00061A4: mov     [rsp+88h+var_50], rax
 * 00000001C00061A9: lea     rax, [rsp+88h+arg_28]
 * 00000001C00061B1: mov     [rsp+88h+var_58], rdi
 * 00000001C00061B6: mov     [rsp+88h+var_60], rax
 * 00000001C00061BB: mov     word ptr [rsp+88h+var_68], bp
 * 00000001C00061C0: call    cs:__imp_WppAutoLogTrace
 * 00000001C00061C7: nop     dword ptr [rax+rax+00h]
 * 00000001C00061CC: lea     r11, [rsp+88h+var_8]
 * 00000001C00061D4: mov     rbx, [r11+10h]
 * 00000001C00061D8: mov     rbp, [r11+18h]
 * 00000001C00061DC: mov     rsi, [r11+20h]
 * 00000001C00061E0: mov     rsp, r11
 * 00000001C00061E3: pop     rdi
 * 00000001C00061E4: retn
 * 00000001C002328E: cmp     [rcx+29h], dil
 * 00000001C0023292: jb      loc_1C0006149
 * 00000001C0023298: and     [rsp+88h+var_18], 0
 * 00000001C002329E: lea     rdx, [rsp+88h+arg_48]
 * 00000001C00232A6: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00232AD: lea     r8, WPP_1132998d7a983e6252cacd8244985166_Traceguids
 * 00000001C00232B4: mov     rcx, [rcx+18h]
 * 00000001C00232B8: mov     r9d, ebp
 * 00000001C00232BB: mov     [rsp+88h+var_20], rsi
 * 00000001C00232C0: mov     [rsp+88h+var_28], rdx
 * 00000001C00232C5: lea     rdx, [rsp+88h+arg_40]
 * 00000001C00232CD: mov     [rsp+88h+var_30], rdi
 * 00000001C00232D2: mov     [rsp+88h+var_38], rdx
 * 00000001C00232D7: lea     rdx, [rsp+88h+arg_38]
 * 00000001C00232DF: mov     [rsp+88h+var_40], rsi
 * 00000001C00232E4: mov     [rsp+88h+var_48], rdx
 * 00000001C00232E9: lea     rdx, [rsp+88h+arg_30]
 * 00000001C00232F1: mov     [rsp+88h+var_50], rdi
 * 00000001C00232F6: mov     [rsp+88h+var_58], rdx
 * 00000001C00232FB: lea     rdx, [rsp+88h+arg_28]
 * 00000001C0023303: mov     [rsp+88h+var_60], rdi
 * 00000001C0023308: mov     [rsp+88h+var_68], rdx
 * 00000001C002330D: mov     edx, 2Bh ; '+'
 * 00000001C0023312: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0023318: nop
 * 00000001C0023319: jmp     loc_1C0006149
 */
