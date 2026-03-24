/*
 * XREFs of WPP_RECORDER_SF_ddq @ 0x1C000C300
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008BE0 (Interrupter_DeferredWorkProcessor.c)
 *     Endpoint_Enable @ 0x1C000BDC0 (Endpoint_Enable.c)
 *     Endpoint_WdfEvtPurgeComplete @ 0x1C0018AF0 (Endpoint_WdfEvtPurgeComplete.c)
 *     Endpoint_UcxEvtEndpointPurge @ 0x1C0018BA0 (Endpoint_UcxEvtEndpointPurge.c)
 *     Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted @ 0x1C003BD30 (Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted.c)
 *     Endpoint_SendClearStallTransfer @ 0x1C003BEAC (Endpoint_SendClearStallTransfer.c)
 *     Endpoint_UcxEvtEndpointAbort @ 0x1C003C5D0 (Endpoint_UcxEvtEndpointAbort.c)
 *     Endpoint_WdfEvtAbortComplete @ 0x1C003D5C0 (Endpoint_WdfEvtAbortComplete.c)
 *     Endpoint_Create @ 0x1C006D624 (Endpoint_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddq @ 0x1C000C300
 * Reason: Hex-Rays returned no pseudocode for 0x1C000C300
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000C300: mov     [rsp+arg_0], rbx
 * 00000001C000C305: mov     [rsp+arg_8], rbp
 * 00000001C000C30A: mov     [rsp+arg_10], rsi
 * 00000001C000C30F: push    rdi
 * 00000001C000C310: push    r14
 * 00000001C000C312: push    r15
 * 00000001C000C314: sub     rsp, 60h
 * 00000001C000C318: mov     r14d, r8d
 * 00000001C000C31B: mov     r15, rcx
 * 00000001C000C31E: mov     edi, r8d
 * 00000001C000C321: shr     rdi, 10h
 * 00000001C000C325: movzx   esi, dl
 * 00000001C000C328: lea     ebx, [r14-1]
 * 00000001C000C32C: movzx   ebp, r9w
 * 00000001C000C330: mov     r10d, ebx
 * 00000001C000C333: and     ebx, 1Fh
 * 00000001C000C336: shr     r10, 5
 * 00000001C000C33A: lea     rax, [rdi+rdi*4]
 * 00000001C000C33E: and     r10d, 7FFh
 * 00000001C000C345: mov     edx, ebx
 * 00000001C000C347: mov     ebx, 4
 * 00000001C000C34C: lea     r11, [r10+rax*4]
 * 00000001C000C350: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C000C357: mov     eax, [r10+r11*4+2Ch]
 * 00000001C000C35C: bt      eax, edx
 * 00000001C000C35F: jb      loc_1C002D04C
 * 00000001C000C365: and     [rsp+78h+var_20], 0
 * 00000001C000C36B: lea     rax, [rsp+78h+arg_38]
 * 00000001C000C373: mov     r9, [rsp+78h+arg_20]
 * 00000001C000C37B: mov     r8d, r14d
 * 00000001C000C37E: mov     [rsp+78h+var_28], 8
 * 00000001C000C387: mov     edx, esi
 * 00000001C000C389: mov     [rsp+78h+var_30], rax
 * 00000001C000C38E: mov     rcx, r15
 * 00000001C000C391: mov     [rsp+78h+var_38], rbx
 * 00000001C000C396: lea     rax, [rsp+78h+arg_30]
 * 00000001C000C39E: mov     [rsp+78h+var_40], rax
 * 00000001C000C3A3: lea     rax, [rsp+78h+arg_28]
 * 00000001C000C3AB: mov     [rsp+78h+var_48], rbx
 * 00000001C000C3B0: mov     [rsp+78h+var_50], rax
 * 00000001C000C3B5: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C000C3BA: call    cs:__imp_WppAutoLogTrace
 * 00000001C000C3C1: nop     dword ptr [rax+rax+00h]
 * 00000001C000C3C6: lea     r11, [rsp+78h+var_18]
 * 00000001C000C3CB: mov     rbx, [r11+20h]
 * 00000001C000C3CF: mov     rbp, [r11+28h]
 * 00000001C000C3D3: mov     rsi, [r11+30h]
 * 00000001C000C3D7: mov     rsp, r11
 * 00000001C000C3DA: pop     r15
 * 00000001C000C3DC: pop     r14
 * 00000001C000C3DE: pop     rdi
 * 00000001C000C3DF: retn
 * 00000001C002D04C: lea     rcx, [rdi+rdi*4]
 * 00000001C002D050: add     rcx, rcx
 * 00000001C002D053: cmp     [r10+rcx*8+29h], sil
 * 00000001C002D058: jb      loc_1C000C365
 * 00000001C002D05E: and     [rsp+78h+var_28], 0
 * 00000001C002D064: lea     rdx, [rsp+78h+arg_38]
 * 00000001C002D06C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002D073: mov     r9d, ebp
 * 00000001C002D076: mov     r8, [rsp+78h+arg_20]
 * 00000001C002D07E: mov     rcx, [r10+rcx*8+18h]
 * 00000001C002D083: mov     [rsp+78h+var_30], 8
 * 00000001C002D08C: mov     [rsp+78h+var_38], rdx
 * 00000001C002D091: lea     rdx, [rsp+78h+arg_30]
 * 00000001C002D099: mov     [rsp+78h+var_40], rbx
 * 00000001C002D09E: mov     [rsp+78h+var_48], rdx
 * 00000001C002D0A3: lea     rdx, [rsp+78h+arg_28]
 * 00000001C002D0AB: mov     [rsp+78h+var_50], rbx
 * 00000001C002D0B0: mov     [rsp+78h+var_58], rdx
 * 00000001C002D0B5: mov     edx, 2Bh ; '+'
 * 00000001C002D0BA: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002D0C0: nop
 * 00000001C002D0C1: jmp     loc_1C000C365
 */
