/*
 * XREFs of WPP_RECORDER_SF_LL @ 0x1C0037258
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008BE0 (Interrupter_DeferredWorkProcessor.c)
 *     Controller_ReportFatalErrorEx @ 0x1C001EB8C (Controller_ReportFatalErrorEx.c)
 *     Controller_ExecuteHSICDisconnectInU3WorkaroundDirect @ 0x1C0078104 (Controller_ExecuteHSICDisconnectInU3WorkaroundDirect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LL @ 0x1C0037258
 * Reason: Hex-Rays returned no pseudocode for 0x1C0037258
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0037258: mov     [rsp+arg_0], rbx
 * 00000001C003725D: mov     [rsp+arg_8], rbp
 * 00000001C0037262: mov     [rsp+arg_10], rsi
 * 00000001C0037267: push    rdi
 * 00000001C0037268: push    r14
 * 00000001C003726A: push    r15
 * 00000001C003726C: sub     rsp, 50h
 * 00000001C0037270: mov     r14d, r8d
 * 00000001C0037273: mov     r15, rcx
 * 00000001C0037276: mov     edi, r8d
 * 00000001C0037279: shr     rdi, 10h
 * 00000001C003727D: movzx   esi, dl
 * 00000001C0037280: lea     ebx, [r14-1]
 * 00000001C0037284: movzx   ebp, r9w
 * 00000001C0037288: mov     r10d, ebx
 * 00000001C003728B: and     ebx, 1Fh
 * 00000001C003728E: shr     r10, 5
 * 00000001C0037292: lea     rax, [rdi+rdi*4]
 * 00000001C0037296: and     r10d, 7FFh
 * 00000001C003729D: mov     edx, ebx
 * 00000001C003729F: mov     ebx, 4
 * 00000001C00372A4: lea     r11, [r10+rax*4]
 * 00000001C00372A8: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00372AF: mov     eax, [r10+r11*4+2Ch]
 * 00000001C00372B4: bt      eax, edx
 * 00000001C00372B7: jnb     short loc_1C0037311
 * 00000001C00372B9: lea     rcx, [rdi+rdi*4]
 * 00000001C00372BD: add     rcx, rcx
 * 00000001C00372C0: cmp     [r10+rcx*8+29h], sil
 * 00000001C00372C5: jb      short loc_1C0037311
 * 00000001C00372C7: and     [rsp+68h+var_28], 0
 * 00000001C00372CD: lea     rdx, [rsp+68h+arg_30]
 * 00000001C00372D5: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00372DC: mov     r9d, ebp
 * 00000001C00372DF: mov     r8, [rsp+68h+arg_20]
 * 00000001C00372E7: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00372EC: mov     [rsp+68h+var_30], rbx
 * 00000001C00372F1: mov     [rsp+68h+var_38], rdx
 * 00000001C00372F6: lea     rdx, [rsp+68h+arg_28]
 * 00000001C00372FE: mov     [rsp+68h+var_40], rbx
 * 00000001C0037303: mov     [rsp+68h+var_48], rdx
 * 00000001C0037308: lea     edx, [rbx+27h]
 * 00000001C003730B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0037311: and     [rsp+68h+var_20], 0
 * 00000001C0037317: lea     rax, [rsp+68h+arg_30]
 * 00000001C003731F: mov     r9, [rsp+68h+arg_20]
 * 00000001C0037327: mov     r8d, r14d
 * 00000001C003732A: mov     [rsp+68h+var_28], rbx
 * 00000001C003732F: mov     edx, esi
 * 00000001C0037331: mov     [rsp+68h+var_30], rax
 * 00000001C0037336: mov     rcx, r15
 * 00000001C0037339: lea     rax, [rsp+68h+arg_28]
 * 00000001C0037341: mov     [rsp+68h+var_38], rbx
 * 00000001C0037346: mov     [rsp+68h+var_40], rax
 * 00000001C003734B: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0037350: call    cs:__imp_WppAutoLogTrace
 * 00000001C0037357: nop     dword ptr [rax+rax+00h]
 * 00000001C003735C: lea     r11, [rsp+68h+var_18]
 * 00000001C0037361: mov     rbx, [r11+20h]
 * 00000001C0037365: mov     rbp, [r11+28h]
 * 00000001C0037369: mov     rsi, [r11+30h]
 * 00000001C003736D: mov     rsp, r11
 * 00000001C0037370: pop     r15
 * 00000001C0037372: pop     r14
 * 00000001C0037374: pop     rdi
 * 00000001C0037375: retn
 */
