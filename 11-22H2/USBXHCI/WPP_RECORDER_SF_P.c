/*
 * XREFs of WPP_RECORDER_SF_P @ 0x1C0037240
 * Callers:
 *     Controller_AllocateIrqlTrackingArray @ 0x1C001E694 (Controller_AllocateIrqlTrackingArray.c)
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x1C0033274 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_RetrieveUrsData @ 0x1C007886C (Controller_RetrieveUrsData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_P @ 0x1C0037240
 * Reason: Hex-Rays returned no pseudocode for 0x1C0037240
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0037240: mov     r11, rsp
 * 00000001C0037243: mov     [r11+8], rbx
 * 00000001C0037247: push    rdi
 * 00000001C0037248: sub     rsp, 40h
 * 00000001C003724C: mov     rdi, rcx
 * 00000001C003724F: movzx   ebx, r9w
 * 00000001C0037253: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003725A: mov     eax, [rcx+2Ch]
 * 00000001C003725D: test    al, 8
 * 00000001C003725F: jz      short loc_1C003729C
 * 00000001C0037261: cmp     byte ptr [rcx+29h], 2
 * 00000001C0037265: jb      short loc_1C003729C
 * 00000001C0037267: and     qword ptr [r11-18h], 0
 * 00000001C003726C: lea     rdx, [r11+30h]
 * 00000001C0037270: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0037277: lea     r8, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C003727E: mov     rcx, [rcx+18h]
 * 00000001C0037282: mov     r9d, ebx
 * 00000001C0037285: mov     qword ptr [r11-20h], 8
 * 00000001C003728D: mov     [r11-28h], rdx
 * 00000001C0037291: mov     edx, 2Bh ; '+'
 * 00000001C0037296: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003729C: and     [rsp+48h+var_10], 0
 * 00000001C00372A2: lea     rax, [rsp+48h+arg_28]
 * 00000001C00372A7: mov     edx, 2
 * 00000001C00372AC: mov     [rsp+48h+var_18], 8
 * 00000001C00372B5: mov     [rsp+48h+var_20], rax
 * 00000001C00372BA: lea     r9, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C00372C1: mov     rcx, rdi
 * 00000001C00372C4: mov     [rsp+48h+var_28], bx
 * 00000001C00372C9: lea     r8d, [rdx+2]
 * 00000001C00372CD: call    cs:__imp_WppAutoLogTrace
 * 00000001C00372D4: nop     dword ptr [rax+rax+00h]
 * 00000001C00372D9: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00372DE: add     rsp, 40h
 * 00000001C00372E2: pop     rdi
 * 00000001C00372E3: retn
 */
