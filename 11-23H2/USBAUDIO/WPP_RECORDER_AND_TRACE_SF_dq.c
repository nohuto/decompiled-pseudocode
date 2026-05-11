/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dq @ 0x1C0017D28
 * Callers:
 *     ?GetMutePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0013FC4 (-GetMutePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00144D4 (-GetSidetoneVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00157F4 (-GetVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_dq @ 0x1C0017D28
 * Reason: Hex-Rays returned no pseudocode for 0x1C0017D28
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0017D28: mov     r11, rsp
 * 00000001C0017D2B: mov     [r11+8], rbx
 * 00000001C0017D2F: mov     [r11+10h], rsi
 * 00000001C0017D33: push    rdi
 * 00000001C0017D34: sub     rsp, 50h
 * 00000001C0017D38: movzx   ebx, [rsp+58h+arg_30]
 * 00000001C0017D40: mov     rsi, r9
 * 00000001C0017D43: mov     dil, r8b
 * 00000001C0017D46: test    dl, dl
 * 00000001C0017D48: jz      short loc_1C0017D8B
 * 00000001C0017D4A: and     qword ptr [r11-18h], 0
 * 00000001C0017D4F: lea     rdx, [r11+50h]
 * 00000001C0017D53: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0017D5A: lea     r8, WPP_e329219d3dc83e7ef4f1a166489f6e61_Traceguids
 * 00000001C0017D61: mov     qword ptr [r11-20h], 8
 * 00000001C0017D69: mov     r9d, ebx
 * 00000001C0017D6C: mov     [r11-28h], rdx
 * 00000001C0017D70: lea     rdx, [r11+48h]
 * 00000001C0017D74: mov     qword ptr [r11-30h], 4
 * 00000001C0017D7C: mov     [r11-38h], rdx
 * 00000001C0017D80: mov     edx, 2Bh ; '+'
 * 00000001C0017D85: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0017D8B: test    dil, dil
 * 00000001C0017D8E: jz      short loc_1C0017DE3
 * 00000001C0017D90: and     [rsp+58h+var_10], 0
 * 00000001C0017D96: lea     rax, [rsp+58h+arg_48]
 * 00000001C0017D9E: mov     [rsp+58h+var_18], 8
 * 00000001C0017DA7: lea     r9, WPP_e329219d3dc83e7ef4f1a166489f6e61_Traceguids
 * 00000001C0017DAE: mov     [rsp+58h+var_20], rax
 * 00000001C0017DB3: xor     edx, edx
 * 00000001C0017DB5: lea     rax, [rsp+58h+arg_40]
 * 00000001C0017DBD: mov     [rsp+58h+var_28], 4
 * 00000001C0017DC6: mov     [rsp+58h+var_30], rax
 * 00000001C0017DCB: mov     rcx, rsi
 * 00000001C0017DCE: mov     [rsp+58h+var_38], bx
 * 00000001C0017DD3: lea     r8d, [rdx+9]
 * 00000001C0017DD7: call    cs:__imp_WppAutoLogTrace
 * 00000001C0017DDE: nop     dword ptr [rax+rax+00h]
 * 00000001C0017DE3: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0017DE8: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0017DED: add     rsp, 50h
 * 00000001C0017DF1: pop     rdi
 * 00000001C0017DF2: retn
 */
