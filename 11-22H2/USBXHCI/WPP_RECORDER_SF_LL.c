/*
 * XREFs of WPP_RECORDER_SF_LL @ 0x1C0037118
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008C10 (Interrupter_DeferredWorkProcessor.c)
 *     Controller_ReportFatalErrorEx @ 0x1C001EBDC (Controller_ReportFatalErrorEx.c)
 *     Controller_ExecuteHSICDisconnectInU3WorkaroundDirect @ 0x1C0078144 (Controller_ExecuteHSICDisconnectInU3WorkaroundDirect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LL @ 0x1C0037118
 * Reason: Hex-Rays returned no pseudocode for 0x1C0037118
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0037118: mov     [rsp+arg_0], rbx
 * 00000001C003711D: mov     [rsp+arg_8], rbp
 * 00000001C0037122: mov     [rsp+arg_10], rsi
 * 00000001C0037127: push    rdi
 * 00000001C0037128: push    r14
 * 00000001C003712A: push    r15
 * 00000001C003712C: sub     rsp, 50h
 * 00000001C0037130: mov     r14d, r8d
 * 00000001C0037133: mov     r15, rcx
 * 00000001C0037136: mov     edi, r8d
 * 00000001C0037139: shr     rdi, 10h
 * 00000001C003713D: movzx   esi, dl
 * 00000001C0037140: lea     ebx, [r14-1]
 * 00000001C0037144: movzx   ebp, r9w
 * 00000001C0037148: mov     r10d, ebx
 * 00000001C003714B: and     ebx, 1Fh
 * 00000001C003714E: shr     r10, 5
 * 00000001C0037152: lea     rax, [rdi+rdi*4]
 * 00000001C0037156: and     r10d, 7FFh
 * 00000001C003715D: mov     edx, ebx
 * 00000001C003715F: mov     ebx, 4
 * 00000001C0037164: lea     r11, [r10+rax*4]
 * 00000001C0037168: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C003716F: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0037174: bt      eax, edx
 * 00000001C0037177: jnb     short loc_1C00371D1
 * 00000001C0037179: lea     rcx, [rdi+rdi*4]
 * 00000001C003717D: add     rcx, rcx
 * 00000001C0037180: cmp     [r10+rcx*8+29h], sil
 * 00000001C0037185: jb      short loc_1C00371D1
 * 00000001C0037187: and     [rsp+68h+var_28], 0
 * 00000001C003718D: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0037195: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003719C: mov     r9d, ebp
 * 00000001C003719F: mov     r8, [rsp+68h+arg_20]
 * 00000001C00371A7: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00371AC: mov     [rsp+68h+var_30], rbx
 * 00000001C00371B1: mov     [rsp+68h+var_38], rdx
 * 00000001C00371B6: lea     rdx, [rsp+68h+arg_28]
 * 00000001C00371BE: mov     [rsp+68h+var_40], rbx
 * 00000001C00371C3: mov     [rsp+68h+var_48], rdx
 * 00000001C00371C8: lea     edx, [rbx+27h]
 * 00000001C00371CB: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00371D1: and     [rsp+68h+var_20], 0
 * 00000001C00371D7: lea     rax, [rsp+68h+arg_30]
 * 00000001C00371DF: mov     r9, [rsp+68h+arg_20]
 * 00000001C00371E7: mov     r8d, r14d
 * 00000001C00371EA: mov     [rsp+68h+var_28], rbx
 * 00000001C00371EF: mov     edx, esi
 * 00000001C00371F1: mov     [rsp+68h+var_30], rax
 * 00000001C00371F6: mov     rcx, r15
 * 00000001C00371F9: lea     rax, [rsp+68h+arg_28]
 * 00000001C0037201: mov     [rsp+68h+var_38], rbx
 * 00000001C0037206: mov     [rsp+68h+var_40], rax
 * 00000001C003720B: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0037210: call    cs:__imp_WppAutoLogTrace
 * 00000001C0037217: nop     dword ptr [rax+rax+00h]
 * 00000001C003721C: lea     r11, [rsp+68h+var_18]
 * 00000001C0037221: mov     rbx, [r11+20h]
 * 00000001C0037225: mov     rbp, [r11+28h]
 * 00000001C0037229: mov     rsi, [r11+30h]
 * 00000001C003722D: mov     rsp, r11
 * 00000001C0037230: pop     r15
 * 00000001C0037232: pop     r14
 * 00000001C0037234: pop     rdi
 * 00000001C0037235: retn
 */
