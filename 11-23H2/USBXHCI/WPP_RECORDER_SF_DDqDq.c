/*
 * XREFs of WPP_RECORDER_SF_DDqDq @ 0x1C00060E0
 * Callers:
 *     Control_WdfEvtIoDefault @ 0x1C0005C60 (Control_WdfEvtIoDefault.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqDq @ 0x1C00060E0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00060E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00060E0: mov     [rsp+arg_0], rbx
 * 00000001C00060E5: mov     [rsp+arg_8], rbp
 * 00000001C00060EA: mov     [rsp+arg_10], rsi
 * 00000001C00060EF: push    rdi
 * 00000001C00060F0: sub     rsp, 80h
 * 00000001C00060F7: mov     edi, 4
 * 00000001C00060FC: mov     rbx, rcx
 * 00000001C00060FF: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0006106: lea     ebp, [rdi+21h]
 * 00000001C0006109: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0006110: lea     esi, [rdi+4]
 * 00000001C0006113: jnz     loc_1C00233CE
 * 00000001C0006119: and     [rsp+88h+var_10], 0
 * 00000001C000611F: lea     rax, [rsp+88h+arg_48]
 * 00000001C0006127: mov     [rsp+88h+var_18], rsi
 * 00000001C000612C: lea     r9, WPP_1132998d7a983e6252cacd8244985166_Traceguids
 * 00000001C0006133: mov     [rsp+88h+var_20], rax
 * 00000001C0006138: mov     r8d, 0Eh
 * 00000001C000613E: mov     [rsp+88h+var_28], rdi
 * 00000001C0006143: lea     rax, [rsp+88h+arg_40]
 * 00000001C000614B: mov     [rsp+88h+var_30], rax
 * 00000001C0006150: mov     edx, edi
 * 00000001C0006152: mov     [rsp+88h+var_38], rsi
 * 00000001C0006157: lea     rax, [rsp+88h+arg_38]
 * 00000001C000615F: mov     [rsp+88h+var_40], rax
 * 00000001C0006164: mov     rcx, rbx
 * 00000001C0006167: mov     [rsp+88h+var_48], rdi
 * 00000001C000616C: lea     rax, [rsp+88h+arg_30]
 * 00000001C0006174: mov     [rsp+88h+var_50], rax
 * 00000001C0006179: lea     rax, [rsp+88h+arg_28]
 * 00000001C0006181: mov     [rsp+88h+var_58], rdi
 * 00000001C0006186: mov     [rsp+88h+var_60], rax
 * 00000001C000618B: mov     word ptr [rsp+88h+var_68], bp
 * 00000001C0006190: call    cs:__imp_WppAutoLogTrace
 * 00000001C0006197: nop     dword ptr [rax+rax+00h]
 * 00000001C000619C: lea     r11, [rsp+88h+var_8]
 * 00000001C00061A4: mov     rbx, [r11+10h]
 * 00000001C00061A8: mov     rbp, [r11+18h]
 * 00000001C00061AC: mov     rsi, [r11+20h]
 * 00000001C00061B0: mov     rsp, r11
 * 00000001C00061B3: pop     rdi
 * 00000001C00061B4: retn
 * 00000001C00233CE: cmp     [rcx+29h], dil
 * 00000001C00233D2: jb      loc_1C0006119
 * 00000001C00233D8: and     [rsp+88h+var_18], 0
 * 00000001C00233DE: lea     rdx, [rsp+88h+arg_48]
 * 00000001C00233E6: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00233ED: lea     r8, WPP_1132998d7a983e6252cacd8244985166_Traceguids
 * 00000001C00233F4: mov     rcx, [rcx+18h]
 * 00000001C00233F8: mov     r9d, ebp
 * 00000001C00233FB: mov     [rsp+88h+var_20], rsi
 * 00000001C0023400: mov     [rsp+88h+var_28], rdx
 * 00000001C0023405: lea     rdx, [rsp+88h+arg_40]
 * 00000001C002340D: mov     [rsp+88h+var_30], rdi
 * 00000001C0023412: mov     [rsp+88h+var_38], rdx
 * 00000001C0023417: lea     rdx, [rsp+88h+arg_38]
 * 00000001C002341F: mov     [rsp+88h+var_40], rsi
 * 00000001C0023424: mov     [rsp+88h+var_48], rdx
 * 00000001C0023429: lea     rdx, [rsp+88h+arg_30]
 * 00000001C0023431: mov     [rsp+88h+var_50], rdi
 * 00000001C0023436: mov     [rsp+88h+var_58], rdx
 * 00000001C002343B: lea     rdx, [rsp+88h+arg_28]
 * 00000001C0023443: mov     [rsp+88h+var_60], rdi
 * 00000001C0023448: mov     [rsp+88h+var_68], rdx
 * 00000001C002344D: mov     edx, 2Bh ; '+'
 * 00000001C0023452: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0023458: nop
 * 00000001C0023459: jmp     loc_1C0006119
 */
