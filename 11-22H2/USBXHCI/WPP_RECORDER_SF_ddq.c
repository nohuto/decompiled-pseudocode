/*
 * XREFs of WPP_RECORDER_SF_ddq @ 0x1C000C330
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008C10 (Interrupter_DeferredWorkProcessor.c)
 *     Endpoint_Enable @ 0x1C000BDF0 (Endpoint_Enable.c)
 *     Endpoint_WdfEvtPurgeComplete @ 0x1C0018B40 (Endpoint_WdfEvtPurgeComplete.c)
 *     Endpoint_UcxEvtEndpointPurge @ 0x1C0018BF0 (Endpoint_UcxEvtEndpointPurge.c)
 *     Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted @ 0x1C003BBF0 (Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted.c)
 *     Endpoint_SendClearStallTransfer @ 0x1C003BD6C (Endpoint_SendClearStallTransfer.c)
 *     Endpoint_UcxEvtEndpointAbort @ 0x1C003C490 (Endpoint_UcxEvtEndpointAbort.c)
 *     Endpoint_WdfEvtAbortComplete @ 0x1C003D480 (Endpoint_WdfEvtAbortComplete.c)
 *     Endpoint_Create @ 0x1C006D664 (Endpoint_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddq @ 0x1C000C330
 * Reason: Hex-Rays returned no pseudocode for 0x1C000C330
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000C330: mov     [rsp+arg_0], rbx
 * 00000001C000C335: mov     [rsp+arg_8], rbp
 * 00000001C000C33A: mov     [rsp+arg_10], rsi
 * 00000001C000C33F: push    rdi
 * 00000001C000C340: push    r14
 * 00000001C000C342: push    r15
 * 00000001C000C344: sub     rsp, 60h
 * 00000001C000C348: mov     r14d, r8d
 * 00000001C000C34B: mov     r15, rcx
 * 00000001C000C34E: mov     edi, r8d
 * 00000001C000C351: shr     rdi, 10h
 * 00000001C000C355: movzx   esi, dl
 * 00000001C000C358: lea     ebx, [r14-1]
 * 00000001C000C35C: movzx   ebp, r9w
 * 00000001C000C360: mov     r10d, ebx
 * 00000001C000C363: and     ebx, 1Fh
 * 00000001C000C366: shr     r10, 5
 * 00000001C000C36A: lea     rax, [rdi+rdi*4]
 * 00000001C000C36E: and     r10d, 7FFh
 * 00000001C000C375: mov     edx, ebx
 * 00000001C000C377: mov     ebx, 4
 * 00000001C000C37C: lea     r11, [r10+rax*4]
 * 00000001C000C380: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C000C387: mov     eax, [r10+r11*4+2Ch]
 * 00000001C000C38C: bt      eax, edx
 * 00000001C000C38F: jb      loc_1C002CF0C
 * 00000001C000C395: and     [rsp+78h+var_20], 0
 * 00000001C000C39B: lea     rax, [rsp+78h+arg_38]
 * 00000001C000C3A3: mov     r9, [rsp+78h+arg_20]
 * 00000001C000C3AB: mov     r8d, r14d
 * 00000001C000C3AE: mov     [rsp+78h+var_28], 8
 * 00000001C000C3B7: mov     edx, esi
 * 00000001C000C3B9: mov     [rsp+78h+var_30], rax
 * 00000001C000C3BE: mov     rcx, r15
 * 00000001C000C3C1: mov     [rsp+78h+var_38], rbx
 * 00000001C000C3C6: lea     rax, [rsp+78h+arg_30]
 * 00000001C000C3CE: mov     [rsp+78h+var_40], rax
 * 00000001C000C3D3: lea     rax, [rsp+78h+arg_28]
 * 00000001C000C3DB: mov     [rsp+78h+var_48], rbx
 * 00000001C000C3E0: mov     [rsp+78h+var_50], rax
 * 00000001C000C3E5: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C000C3EA: call    cs:__imp_WppAutoLogTrace
 * 00000001C000C3F1: nop     dword ptr [rax+rax+00h]
 * 00000001C000C3F6: lea     r11, [rsp+78h+var_18]
 * 00000001C000C3FB: mov     rbx, [r11+20h]
 * 00000001C000C3FF: mov     rbp, [r11+28h]
 * 00000001C000C403: mov     rsi, [r11+30h]
 * 00000001C000C407: mov     rsp, r11
 * 00000001C000C40A: pop     r15
 * 00000001C000C40C: pop     r14
 * 00000001C000C40E: pop     rdi
 * 00000001C000C40F: retn
 * 00000001C002CF0C: lea     rcx, [rdi+rdi*4]
 * 00000001C002CF10: add     rcx, rcx
 * 00000001C002CF13: cmp     [r10+rcx*8+29h], sil
 * 00000001C002CF18: jb      loc_1C000C395
 * 00000001C002CF1E: and     [rsp+78h+var_28], 0
 * 00000001C002CF24: lea     rdx, [rsp+78h+arg_38]
 * 00000001C002CF2C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002CF33: mov     r9d, ebp
 * 00000001C002CF36: mov     r8, [rsp+78h+arg_20]
 * 00000001C002CF3E: mov     rcx, [r10+rcx*8+18h]
 * 00000001C002CF43: mov     [rsp+78h+var_30], 8
 * 00000001C002CF4C: mov     [rsp+78h+var_38], rdx
 * 00000001C002CF51: lea     rdx, [rsp+78h+arg_30]
 * 00000001C002CF59: mov     [rsp+78h+var_40], rbx
 * 00000001C002CF5E: mov     [rsp+78h+var_48], rdx
 * 00000001C002CF63: lea     rdx, [rsp+78h+arg_28]
 * 00000001C002CF6B: mov     [rsp+78h+var_50], rbx
 * 00000001C002CF70: mov     [rsp+78h+var_58], rdx
 * 00000001C002CF75: mov     edx, 2Bh ; '+'
 * 00000001C002CF7A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002CF80: nop
 * 00000001C002CF81: jmp     loc_1C000C395
 */
