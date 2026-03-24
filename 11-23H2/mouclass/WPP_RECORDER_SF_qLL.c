/*
 * XREFs of WPP_RECORDER_SF_qLL @ 0x1C0005FD0
 * Callers:
 *     MouseClassServiceCallback @ 0x1C0005190 (MouseClassServiceCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002B60 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qLL @ 0x1C0005FD0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005FD0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005FD0: mov     r11, rsp
 * 00000001C0005FD3: mov     [r11+8], rbx
 * 00000001C0005FD7: mov     [r11+10h], rsi
 * 00000001C0005FDB: push    rdi
 * 00000001C0005FDC: sub     rsp, 60h
 * 00000001C0005FE0: mov     rdi, rcx
 * 00000001C0005FE3: movzx   ebx, r9w
 * 00000001C0005FE7: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0005FEE: mov     esi, 4
 * 00000001C0005FF3: mov     eax, [rcx+2Ch]
 * 00000001C0005FF6: test    sil, al
 * 00000001C0005FF9: jz      short loc_1C000604C
 * 00000001C0005FFB: cmp     byte ptr [rcx+29h], 5
 * 00000001C0005FFF: jb      short loc_1C000604C
 * 00000001C0006001: and     qword ptr [r11-18h], 0
 * 00000001C0006006: lea     rdx, [r11+40h]
 * 00000001C000600A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0006011: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0006018: mov     rcx, [rcx+18h]
 * 00000001C000601C: mov     r9d, ebx
 * 00000001C000601F: mov     [r11-20h], rsi
 * 00000001C0006023: mov     [r11-28h], rdx
 * 00000001C0006027: lea     rdx, [r11+38h]
 * 00000001C000602B: mov     [r11-30h], rsi
 * 00000001C000602F: mov     [r11-38h], rdx
 * 00000001C0006033: lea     rdx, [r11+30h]
 * 00000001C0006037: mov     qword ptr [r11-40h], 8
 * 00000001C000603F: mov     [r11-48h], rdx
 * 00000001C0006043: lea     edx, [rsi+27h]
 * 00000001C0006046: call    cs:__guard_dispatch_icall_fptr
 * 00000001C000604C: and     [rsp+68h+var_10], 0
 * 00000001C0006052: lea     rax, [rsp+68h+arg_38]
 * 00000001C000605A: mov     [rsp+68h+var_18], rsi
 * 00000001C000605F: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0006066: mov     [rsp+68h+var_20], rax
 * 00000001C000606B: mov     edx, 5
 * 00000001C0006070: mov     [rsp+68h+var_28], rsi
 * 00000001C0006075: lea     rax, [rsp+68h+arg_30]
 * 00000001C000607D: mov     [rsp+68h+var_30], rax
 * 00000001C0006082: mov     rcx, rdi
 * 00000001C0006085: lea     rax, [rsp+68h+arg_28]
 * 00000001C000608D: mov     [rsp+68h+var_38], 8
 * 00000001C0006096: mov     [rsp+68h+var_40], rax
 * 00000001C000609B: lea     r8d, [rdx-2]
 * 00000001C000609F: mov     [rsp+68h+var_48], bx
 * 00000001C00060A4: call    cs:__imp_WppAutoLogTrace
 * 00000001C00060AB: nop     dword ptr [rax+rax+00h]
 * 00000001C00060B0: mov     rbx, [rsp+68h+arg_0]
 * 00000001C00060B5: mov     rsi, [rsp+68h+arg_8]
 * 00000001C00060BA: add     rsp, 60h
 * 00000001C00060BE: pop     rdi
 * 00000001C00060BF: retn
 */
