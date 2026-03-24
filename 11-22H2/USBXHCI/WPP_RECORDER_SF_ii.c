/*
 * XREFs of WPP_RECORDER_SF_II @ 0x1C0037044
 * Callers:
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C0035520 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0035A60 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0036130 (Controller_UcxEvtStopTrackingForTimeSync.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_II @ 0x1C0037044
 * Reason: Hex-Rays returned no pseudocode for 0x1C0037044
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0037044: mov     r11, rsp
 * 00000001C0037047: mov     [r11+8], rbx
 * 00000001C003704B: mov     [r11+10h], rsi
 * 00000001C003704F: push    rdi
 * 00000001C0037050: sub     rsp, 50h
 * 00000001C0037054: mov     rdi, rcx
 * 00000001C0037057: movzx   ebx, r9w
 * 00000001C003705B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0037062: mov     esi, 8
 * 00000001C0037067: mov     eax, [rcx+2Ch]
 * 00000001C003706A: test    sil, al
 * 00000001C003706D: jz      short loc_1C00370B0
 * 00000001C003706F: cmp     byte ptr [rcx+29h], 2
 * 00000001C0037073: jb      short loc_1C00370B0
 * 00000001C0037075: and     qword ptr [r11-18h], 0
 * 00000001C003707A: lea     rdx, [r11+38h]
 * 00000001C003707E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0037085: lea     r8, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C003708C: mov     rcx, [rcx+18h]
 * 00000001C0037090: mov     r9d, ebx
 * 00000001C0037093: mov     [r11-20h], rsi
 * 00000001C0037097: mov     [r11-28h], rdx
 * 00000001C003709B: lea     rdx, [r11+30h]
 * 00000001C003709F: mov     [r11-30h], rsi
 * 00000001C00370A3: mov     [r11-38h], rdx
 * 00000001C00370A7: lea     edx, [rsi+23h]
 * 00000001C00370AA: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00370B0: and     [rsp+58h+var_10], 0
 * 00000001C00370B6: lea     rax, [rsp+58h+arg_30]
 * 00000001C00370BE: mov     [rsp+58h+var_18], rsi
 * 00000001C00370C3: lea     r9, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C00370CA: mov     [rsp+58h+var_20], rax
 * 00000001C00370CF: mov     edx, 2
 * 00000001C00370D4: lea     rax, [rsp+58h+arg_28]
 * 00000001C00370DC: mov     [rsp+58h+var_28], rsi
 * 00000001C00370E1: mov     [rsp+58h+var_30], rax
 * 00000001C00370E6: mov     rcx, rdi
 * 00000001C00370E9: mov     [rsp+58h+var_38], bx
 * 00000001C00370EE: lea     r8d, [rdx+2]
 * 00000001C00370F2: call    cs:__imp_WppAutoLogTrace
 * 00000001C00370F9: nop     dword ptr [rax+rax+00h]
 * 00000001C00370FE: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0037103: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0037108: add     rsp, 50h
 * 00000001C003710C: pop     rdi
 * 00000001C003710D: retn
 */
