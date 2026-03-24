/*
 * XREFs of WPP_RECORDER_SF_P @ 0x1C0037380
 * Callers:
 *     Controller_AllocateIrqlTrackingArray @ 0x1C001E644 (Controller_AllocateIrqlTrackingArray.c)
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x1C00333B4 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_RetrieveUrsData @ 0x1C007882C (Controller_RetrieveUrsData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_P @ 0x1C0037380
 * Reason: Hex-Rays returned no pseudocode for 0x1C0037380
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0037380: mov     r11, rsp
 * 00000001C0037383: mov     [r11+8], rbx
 * 00000001C0037387: push    rdi
 * 00000001C0037388: sub     rsp, 40h
 * 00000001C003738C: mov     rdi, rcx
 * 00000001C003738F: movzx   ebx, r9w
 * 00000001C0037393: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003739A: mov     eax, [rcx+2Ch]
 * 00000001C003739D: test    al, 8
 * 00000001C003739F: jz      short loc_1C00373DC
 * 00000001C00373A1: cmp     byte ptr [rcx+29h], 2
 * 00000001C00373A5: jb      short loc_1C00373DC
 * 00000001C00373A7: and     qword ptr [r11-18h], 0
 * 00000001C00373AC: lea     rdx, [r11+30h]
 * 00000001C00373B0: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00373B7: lea     r8, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C00373BE: mov     rcx, [rcx+18h]
 * 00000001C00373C2: mov     r9d, ebx
 * 00000001C00373C5: mov     qword ptr [r11-20h], 8
 * 00000001C00373CD: mov     [r11-28h], rdx
 * 00000001C00373D1: mov     edx, 2Bh ; '+'
 * 00000001C00373D6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00373DC: and     [rsp+48h+var_10], 0
 * 00000001C00373E2: lea     rax, [rsp+48h+arg_28]
 * 00000001C00373E7: mov     edx, 2
 * 00000001C00373EC: mov     [rsp+48h+var_18], 8
 * 00000001C00373F5: mov     [rsp+48h+var_20], rax
 * 00000001C00373FA: lea     r9, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C0037401: mov     rcx, rdi
 * 00000001C0037404: mov     [rsp+48h+var_28], bx
 * 00000001C0037409: lea     r8d, [rdx+2]
 * 00000001C003740D: call    cs:__imp_WppAutoLogTrace
 * 00000001C0037414: nop     dword ptr [rax+rax+00h]
 * 00000001C0037419: mov     rbx, [rsp+48h+arg_0]
 * 00000001C003741E: add     rsp, 40h
 * 00000001C0037422: pop     rdi
 * 00000001C0037423: retn
 */
