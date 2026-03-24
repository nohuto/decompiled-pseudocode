/*
 * XREFs of WPP_RECORDER_SF_qqqd @ 0x1C0037830
 * Callers:
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C0035660 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqqd @ 0x1C0037830
 * Reason: Hex-Rays returned no pseudocode for 0x1C0037830
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0037830: mov     r11, rsp
 * 00000001C0037833: mov     [r11+8], rbx
 * 00000001C0037837: mov     [r11+10h], rbp
 * 00000001C003783B: push    rdi
 * 00000001C003783C: sub     rsp, 70h
 * 00000001C0037840: mov     rbx, rcx
 * 00000001C0037843: mov     edi, 8
 * 00000001C0037848: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003784F: mov     ebp, 138h
 * 00000001C0037854: mov     eax, [rcx+2Ch]
 * 00000001C0037857: test    dil, al
 * 00000001C003785A: jz      short loc_1C00378B9
 * 00000001C003785C: cmp     byte ptr [rcx+29h], 5
 * 00000001C0037860: jb      short loc_1C00378B9
 * 00000001C0037862: and     qword ptr [r11-18h], 0
 * 00000001C0037867: lea     rdx, [r11+48h]
 * 00000001C003786B: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0037872: lea     r8, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C0037879: mov     rcx, [rcx+18h]
 * 00000001C003787D: mov     r9d, ebp
 * 00000001C0037880: mov     qword ptr [r11-20h], 4
 * 00000001C0037888: mov     [r11-28h], rdx
 * 00000001C003788C: lea     rdx, [r11+40h]
 * 00000001C0037890: mov     [r11-30h], rdi
 * 00000001C0037894: mov     [r11-38h], rdx
 * 00000001C0037898: lea     rdx, [r11+38h]
 * 00000001C003789C: mov     [r11-40h], rdi
 * 00000001C00378A0: mov     [r11-48h], rdx
 * 00000001C00378A4: lea     rdx, [r11+30h]
 * 00000001C00378A8: mov     [r11-50h], rdi
 * 00000001C00378AC: mov     [r11-58h], rdx
 * 00000001C00378B0: lea     edx, [rdi+23h]
 * 00000001C00378B3: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00378B9: and     [rsp+78h+var_10], 0
 * 00000001C00378BF: lea     rax, [rsp+78h+arg_40]
 * 00000001C00378C7: mov     [rsp+78h+var_18], 4
 * 00000001C00378D0: lea     r9, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C00378D7: mov     [rsp+78h+var_20], rax
 * 00000001C00378DC: mov     edx, 5
 * 00000001C00378E1: mov     [rsp+78h+var_28], rdi
 * 00000001C00378E6: lea     rax, [rsp+78h+arg_38]
 * 00000001C00378EE: mov     [rsp+78h+var_30], rax
 * 00000001C00378F3: mov     rcx, rbx
 * 00000001C00378F6: mov     [rsp+78h+var_38], rdi
 * 00000001C00378FB: lea     rax, [rsp+78h+arg_30]
 * 00000001C0037903: mov     [rsp+78h+var_40], rax
 * 00000001C0037908: lea     r8d, [rdx-1]
 * 00000001C003790C: lea     rax, [rsp+78h+arg_28]
 * 00000001C0037914: mov     [rsp+78h+var_48], rdi
 * 00000001C0037919: mov     [rsp+78h+var_50], rax
 * 00000001C003791E: mov     [rsp+78h+var_58], bp
 * 00000001C0037923: call    cs:__imp_WppAutoLogTrace
 * 00000001C003792A: nop     dword ptr [rax+rax+00h]
 * 00000001C003792F: lea     r11, [rsp+78h+var_8]
 * 00000001C0037934: mov     rbx, [r11+10h]
 * 00000001C0037938: mov     rbp, [r11+18h]
 * 00000001C003793C: mov     rsp, r11
 * 00000001C003793F: pop     rdi
 * 00000001C0037940: retn
 */
