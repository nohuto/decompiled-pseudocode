/*
 * XREFs of WPP_RECORDER_SF_II @ 0x1C00357B8
 * Callers:
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C0033C20 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0034160 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0034840 (Controller_UcxEvtStopTrackingForTimeSync.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_II @ 0x1C00357B8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00357B8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00357B8: mov     r11, rsp
 * 00000001C00357BB: mov     [r11+8], rbx
 * 00000001C00357BF: mov     [r11+10h], rsi
 * 00000001C00357C3: push    rdi
 * 00000001C00357C4: sub     rsp, 50h
 * 00000001C00357C8: mov     rdi, rcx
 * 00000001C00357CB: movzx   ebx, r9w
 * 00000001C00357CF: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00357D6: mov     esi, 8
 * 00000001C00357DB: mov     eax, [rcx+2Ch]
 * 00000001C00357DE: test    sil, al
 * 00000001C00357E1: jz      short loc_1C0035824
 * 00000001C00357E3: cmp     byte ptr [rcx+29h], 2
 * 00000001C00357E7: jb      short loc_1C0035824
 * 00000001C00357E9: and     qword ptr [r11-18h], 0
 * 00000001C00357EE: lea     rdx, [r11+38h]
 * 00000001C00357F2: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00357F9: lea     r8, WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids
 * 00000001C0035800: mov     rcx, [rcx+18h]
 * 00000001C0035804: mov     r9d, ebx
 * 00000001C0035807: mov     [r11-20h], rsi
 * 00000001C003580B: mov     [r11-28h], rdx
 * 00000001C003580F: lea     rdx, [r11+30h]
 * 00000001C0035813: mov     [r11-30h], rsi
 * 00000001C0035817: mov     [r11-38h], rdx
 * 00000001C003581B: lea     edx, [rsi+23h]
 * 00000001C003581E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0035824: and     [rsp+58h+var_10], 0
 * 00000001C003582A: lea     rax, [rsp+58h+arg_30]
 * 00000001C0035832: mov     [rsp+58h+var_18], rsi
 * 00000001C0035837: lea     r9, WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids
 * 00000001C003583E: mov     [rsp+58h+var_20], rax
 * 00000001C0035843: mov     edx, 2
 * 00000001C0035848: lea     rax, [rsp+58h+arg_28]
 * 00000001C0035850: mov     [rsp+58h+var_28], rsi
 * 00000001C0035855: mov     [rsp+58h+var_30], rax
 * 00000001C003585A: mov     rcx, rdi
 * 00000001C003585D: mov     [rsp+58h+var_38], bx
 * 00000001C0035862: lea     r8d, [rdx+2]
 * 00000001C0035866: call    cs:__imp_WppAutoLogTrace
 * 00000001C003586D: nop     dword ptr [rax+rax+00h]
 * 00000001C0035872: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0035877: mov     rsi, [rsp+58h+arg_8]
 * 00000001C003587C: add     rsp, 50h
 * 00000001C0035880: pop     rdi
 * 00000001C0035881: retn
 */
