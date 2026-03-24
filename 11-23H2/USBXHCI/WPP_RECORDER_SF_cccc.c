/*
 * XREFs of WPP_RECORDER_SF_cccc @ 0x1C0040C70
 * Callers:
 *     RootHub_PrepareHardware @ 0x1C00706C0 (RootHub_PrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_cccc @ 0x1C0040C70
 * Reason: Hex-Rays returned no pseudocode for 0x1C0040C70
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0040C70: mov     r11, rsp
 * 00000001C0040C73: mov     [r11+8], rbx
 * 00000001C0040C77: mov     [r11+10h], rsi
 * 00000001C0040C7B: push    rdi
 * 00000001C0040C7C: sub     rsp, 70h
 * 00000001C0040C80: mov     rbx, rcx
 * 00000001C0040C83: mov     esi, 19h
 * 00000001C0040C88: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0040C8F: lea     edi, [rsi-18h]
 * 00000001C0040C92: test    dword ptr [rcx+2Ch], 400h
 * 00000001C0040C99: jz      short loc_1C0040CF4
 * 00000001C0040C9B: cmp     byte ptr [rcx+29h], 2
 * 00000001C0040C9F: jb      short loc_1C0040CF4
 * 00000001C0040CA1: and     qword ptr [r11-18h], 0
 * 00000001C0040CA6: lea     rdx, [r11+48h]
 * 00000001C0040CAA: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0040CB1: lea     r8, WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids
 * 00000001C0040CB8: mov     rcx, [rcx+18h]
 * 00000001C0040CBC: mov     r9d, esi
 * 00000001C0040CBF: mov     [r11-20h], rdi
 * 00000001C0040CC3: mov     [r11-28h], rdx
 * 00000001C0040CC7: lea     rdx, [r11+40h]
 * 00000001C0040CCB: mov     [r11-30h], rdi
 * 00000001C0040CCF: mov     [r11-38h], rdx
 * 00000001C0040CD3: lea     rdx, [r11+38h]
 * 00000001C0040CD7: mov     [r11-40h], rdi
 * 00000001C0040CDB: mov     [r11-48h], rdx
 * 00000001C0040CDF: lea     rdx, [r11+30h]
 * 00000001C0040CE3: mov     [r11-50h], rdi
 * 00000001C0040CE7: mov     [r11-58h], rdx
 * 00000001C0040CEB: lea     edx, [rsi+12h]
 * 00000001C0040CEE: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0040CF4: and     [rsp+78h+var_10], 0
 * 00000001C0040CFA: lea     rax, [rsp+78h+arg_40]
 * 00000001C0040D02: mov     [rsp+78h+var_18], rdi
 * 00000001C0040D07: lea     r9, WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids
 * 00000001C0040D0E: mov     [rsp+78h+var_20], rax
 * 00000001C0040D13: mov     edx, 2
 * 00000001C0040D18: mov     [rsp+78h+var_28], rdi
 * 00000001C0040D1D: lea     rax, [rsp+78h+arg_38]
 * 00000001C0040D25: mov     [rsp+78h+var_30], rax
 * 00000001C0040D2A: mov     rcx, rbx
 * 00000001C0040D2D: mov     [rsp+78h+var_38], rdi
 * 00000001C0040D32: lea     rax, [rsp+78h+arg_30]
 * 00000001C0040D3A: mov     [rsp+78h+var_40], rax
 * 00000001C0040D3F: lea     r8d, [rdx+9]
 * 00000001C0040D43: lea     rax, [rsp+78h+arg_28]
 * 00000001C0040D4B: mov     [rsp+78h+var_48], rdi
 * 00000001C0040D50: mov     [rsp+78h+var_50], rax
 * 00000001C0040D55: mov     [rsp+78h+var_58], si
 * 00000001C0040D5A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0040D61: nop     dword ptr [rax+rax+00h]
 * 00000001C0040D66: lea     r11, [rsp+78h+var_8]
 * 00000001C0040D6B: mov     rbx, [r11+10h]
 * 00000001C0040D6F: mov     rsi, [r11+18h]
 * 00000001C0040D73: mov     rsp, r11
 * 00000001C0040D76: pop     rdi
 * 00000001C0040D77: retn
 */
