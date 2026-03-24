/*
 * XREFs of WPP_RECORDER_SF_II @ 0x1C0037184
 * Callers:
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C0035660 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0035BA0 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0036270 (Controller_UcxEvtStopTrackingForTimeSync.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_II @ 0x1C0037184
 * Reason: Hex-Rays returned no pseudocode for 0x1C0037184
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0037184: mov     r11, rsp
 * 00000001C0037187: mov     [r11+8], rbx
 * 00000001C003718B: mov     [r11+10h], rsi
 * 00000001C003718F: push    rdi
 * 00000001C0037190: sub     rsp, 50h
 * 00000001C0037194: mov     rdi, rcx
 * 00000001C0037197: movzx   ebx, r9w
 * 00000001C003719B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00371A2: mov     esi, 8
 * 00000001C00371A7: mov     eax, [rcx+2Ch]
 * 00000001C00371AA: test    sil, al
 * 00000001C00371AD: jz      short loc_1C00371F0
 * 00000001C00371AF: cmp     byte ptr [rcx+29h], 2
 * 00000001C00371B3: jb      short loc_1C00371F0
 * 00000001C00371B5: and     qword ptr [r11-18h], 0
 * 00000001C00371BA: lea     rdx, [r11+38h]
 * 00000001C00371BE: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00371C5: lea     r8, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C00371CC: mov     rcx, [rcx+18h]
 * 00000001C00371D0: mov     r9d, ebx
 * 00000001C00371D3: mov     [r11-20h], rsi
 * 00000001C00371D7: mov     [r11-28h], rdx
 * 00000001C00371DB: lea     rdx, [r11+30h]
 * 00000001C00371DF: mov     [r11-30h], rsi
 * 00000001C00371E3: mov     [r11-38h], rdx
 * 00000001C00371E7: lea     edx, [rsi+23h]
 * 00000001C00371EA: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00371F0: and     [rsp+58h+var_10], 0
 * 00000001C00371F6: lea     rax, [rsp+58h+arg_30]
 * 00000001C00371FE: mov     [rsp+58h+var_18], rsi
 * 00000001C0037203: lea     r9, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C003720A: mov     [rsp+58h+var_20], rax
 * 00000001C003720F: mov     edx, 2
 * 00000001C0037214: lea     rax, [rsp+58h+arg_28]
 * 00000001C003721C: mov     [rsp+58h+var_28], rsi
 * 00000001C0037221: mov     [rsp+58h+var_30], rax
 * 00000001C0037226: mov     rcx, rdi
 * 00000001C0037229: mov     [rsp+58h+var_38], bx
 * 00000001C003722E: lea     r8d, [rdx+2]
 * 00000001C0037232: call    cs:__imp_WppAutoLogTrace
 * 00000001C0037239: nop     dword ptr [rax+rax+00h]
 * 00000001C003723E: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0037243: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0037248: add     rsp, 50h
 * 00000001C003724C: pop     rdi
 * 00000001C003724D: retn
 */
