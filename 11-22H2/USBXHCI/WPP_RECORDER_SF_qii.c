/*
 * XREFs of WPP_RECORDER_SF_qii @ 0x1C0031198
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x1C000A2E4 (Command_HandleCommandCompletionEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qii @ 0x1C0031198
 * Reason: Hex-Rays returned no pseudocode for 0x1C0031198
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0031198: mov     r11, rsp
 * 00000001C003119B: mov     [r11+8], rbx
 * 00000001C003119F: mov     [r11+10h], rsi
 * 00000001C00311A3: push    rdi
 * 00000001C00311A4: sub     rsp, 60h
 * 00000001C00311A8: mov     rbx, rcx
 * 00000001C00311AB: mov     esi, 2Ch ; ','
 * 00000001C00311B0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00311B7: lea     edi, [rsi-24h]
 * 00000001C00311BA: mov     eax, [rcx+2Ch]
 * 00000001C00311BD: test    al, 40h
 * 00000001C00311BF: jz      short loc_1C003120E
 * 00000001C00311C1: cmp     byte ptr [rcx+29h], 5
 * 00000001C00311C5: jb      short loc_1C003120E
 * 00000001C00311C7: and     qword ptr [r11-18h], 0
 * 00000001C00311CC: lea     rdx, [r11+40h]
 * 00000001C00311D0: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00311D7: lea     r8, WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids
 * 00000001C00311DE: mov     rcx, [rcx+18h]
 * 00000001C00311E2: mov     r9d, esi
 * 00000001C00311E5: mov     [r11-20h], rdi
 * 00000001C00311E9: mov     [r11-28h], rdx
 * 00000001C00311ED: lea     rdx, [r11+38h]
 * 00000001C00311F1: mov     [r11-30h], rdi
 * 00000001C00311F5: mov     [r11-38h], rdx
 * 00000001C00311F9: lea     rdx, [r11+30h]
 * 00000001C00311FD: mov     [r11-40h], rdi
 * 00000001C0031201: mov     [r11-48h], rdx
 * 00000001C0031205: lea     edx, [rsi-1]
 * 00000001C0031208: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003120E: and     [rsp+68h+var_10], 0
 * 00000001C0031214: lea     rax, [rsp+68h+arg_38]
 * 00000001C003121C: mov     [rsp+68h+var_18], rdi
 * 00000001C0031221: lea     r9, WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids
 * 00000001C0031228: mov     [rsp+68h+var_20], rax
 * 00000001C003122D: mov     edx, 5
 * 00000001C0031232: mov     [rsp+68h+var_28], rdi
 * 00000001C0031237: lea     rax, [rsp+68h+arg_30]
 * 00000001C003123F: mov     [rsp+68h+var_30], rax
 * 00000001C0031244: mov     rcx, rbx
 * 00000001C0031247: lea     rax, [rsp+68h+arg_28]
 * 00000001C003124F: mov     [rsp+68h+var_38], rdi
 * 00000001C0031254: mov     [rsp+68h+var_40], rax
 * 00000001C0031259: lea     r8d, [rdx+2]
 * 00000001C003125D: mov     [rsp+68h+var_48], si
 * 00000001C0031262: call    cs:__imp_WppAutoLogTrace
 * 00000001C0031269: nop     dword ptr [rax+rax+00h]
 * 00000001C003126E: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0031273: mov     rsi, [rsp+68h+arg_8]
 * 00000001C0031278: add     rsp, 60h
 * 00000001C003127C: pop     rdi
 * 00000001C003127D: retn
 */
