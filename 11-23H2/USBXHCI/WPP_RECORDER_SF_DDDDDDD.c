/*
 * XREFs of WPP_RECORDER_SF_DDDDDDD @ 0x1C00475B4
 * Callers:
 *     Bulk_Stage_EstimateRequiredSegments @ 0x1C0012734 (Bulk_Stage_EstimateRequiredSegments.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDDDDD @ 0x1C00475B4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00475B4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00475B4: mov     r11, rsp
 * 00000001C00475B7: mov     [r11+8], rbx
 * 00000001C00475BB: mov     [r11+10h], rsi
 * 00000001C00475BF: mov     [r11+18h], rdi
 * 00000001C00475C3: push    rbp
 * 00000001C00475C4: lea     rbp, [r11-1Fh]
 * 00000001C00475C8: sub     rsp, 0A0h
 * 00000001C00475CF: mov     rbx, rcx
 * 00000001C00475D2: mov     esi, 20h ; ' '
 * 00000001C00475D7: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00475DE: lea     edi, [rsi-1Ch]
 * 00000001C00475E1: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00475E8: jz      short loc_1C0047668
 * 00000001C00475EA: cmp     byte ptr [rcx+29h], 5
 * 00000001C00475EE: jb      short loc_1C0047668
 * 00000001C00475F0: and     qword ptr [r11-18h], 0
 * 00000001C00475F5: lea     rdx, [rbp+17h+arg_58]
 * 00000001C00475F9: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0047600: lea     r8, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C0047607: mov     rcx, [rcx+18h]
 * 00000001C004760B: mov     r9d, esi
 * 00000001C004760E: mov     [r11-20h], rdi
 * 00000001C0047612: mov     [r11-28h], rdx
 * 00000001C0047616: lea     rdx, [rbp+17h+arg_50]
 * 00000001C004761A: mov     [r11-30h], rdi
 * 00000001C004761E: mov     [r11-38h], rdx
 * 00000001C0047622: lea     rdx, [rbp+17h+arg_48]
 * 00000001C0047626: mov     [r11-40h], rdi
 * 00000001C004762A: mov     [r11-48h], rdx
 * 00000001C004762E: lea     rdx, [rbp+17h+arg_40]
 * 00000001C0047632: mov     [r11-50h], rdi
 * 00000001C0047636: mov     [r11-58h], rdx
 * 00000001C004763A: lea     rdx, [rbp+17h+arg_38]
 * 00000001C004763E: mov     [r11-60h], rdi
 * 00000001C0047642: mov     [r11-68h], rdx
 * 00000001C0047646: lea     rdx, [rbp+17h+arg_30]
 * 00000001C004764A: mov     [r11-70h], rdi
 * 00000001C004764E: mov     [r11-78h], rdx
 * 00000001C0047652: lea     rdx, [rbp+17h+arg_28]
 * 00000001C0047656: mov     [r11-80h], rdi
 * 00000001C004765A: mov     [rsp+0A0h+var_80], rdx
 * 00000001C004765F: lea     edx, [rsi+0Bh]
 * 00000001C0047662: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0047668: and     qword ptr [rsp+0A0h+var_8], 0
 * 00000001C0047671: lea     rax, [rbp+17h+arg_58]
 * 00000001C0047675: mov     [rsp+0A0h+var_10], rdi
 * 00000001C004767D: lea     r9, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C0047684: mov     [rsp+0A0h+var_18], rax
 * 00000001C004768C: mov     edx, 5
 * 00000001C0047691: mov     [rsp+0A0h+var_20], rdi
 * 00000001C0047699: lea     rax, [rbp+17h+arg_50]
 * 00000001C004769D: mov     [rsp+0A0h+var_28], rax
 * 00000001C00476A2: mov     rcx, rbx
 * 00000001C00476A5: mov     [rsp+0A0h+var_30], rdi
 * 00000001C00476AA: lea     rax, [rbp+17h+arg_48]
 * 00000001C00476AE: mov     [rsp+0A0h+var_38], rax
 * 00000001C00476B3: lea     r8d, [rdx+9]
 * 00000001C00476B7: mov     [rsp+0A0h+var_40], rdi
 * 00000001C00476BC: lea     rax, [rbp+17h+arg_40]
 * 00000001C00476C0: mov     [rsp+0A0h+var_48], rax
 * 00000001C00476C5: lea     rax, [rbp+17h+arg_38]
 * 00000001C00476C9: mov     [rsp+0A0h+var_50], rdi
 * 00000001C00476CE: mov     [rsp+0A0h+var_58], rax
 * 00000001C00476D3: lea     rax, [rbp+17h+arg_30]
 * 00000001C00476D7: mov     [rsp+0A0h+var_60], rdi
 * 00000001C00476DC: mov     [rsp+0A0h+var_68], rax
 * 00000001C00476E1: lea     rax, [rbp+17h+arg_28]
 * 00000001C00476E5: mov     [rsp+0A0h+var_70], rdi
 * 00000001C00476EA: mov     [rsp+0A0h+var_78], rax
 * 00000001C00476EF: mov     word ptr [rsp+0A0h+var_80], si
 * 00000001C00476F4: call    cs:__imp_WppAutoLogTrace
 * 00000001C00476FB: nop     dword ptr [rax+rax+00h]
 * 00000001C0047700: lea     r11, [rsp+0A0h+var_s0]
 * 00000001C0047708: mov     rbx, [r11+10h]
 * 00000001C004770C: mov     rsi, [r11+18h]
 * 00000001C0047710: mov     rdi, [r11+20h]
 * 00000001C0047714: mov     rsp, r11
 * 00000001C0047717: pop     rbp
 * 00000001C0047718: retn
 */
