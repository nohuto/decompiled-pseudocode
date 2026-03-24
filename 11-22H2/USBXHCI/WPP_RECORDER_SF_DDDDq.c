/*
 * XREFs of WPP_RECORDER_SF_DDDDq @ 0x1C00475E0
 * Callers:
 *     Bulk_Stage_MapIntoRing @ 0x1C0012A58 (Bulk_Stage_MapIntoRing.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDDq @ 0x1C00475E0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00475E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00475E0: mov     r11, rsp
 * 00000001C00475E3: mov     [r11+8], rbx
 * 00000001C00475E7: mov     [r11+10h], rsi
 * 00000001C00475EB: push    rdi
 * 00000001C00475EC: sub     rsp, 80h
 * 00000001C00475F3: mov     rdi, rcx
 * 00000001C00475F6: movzx   ebx, r9w
 * 00000001C00475FA: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0047601: mov     esi, 4
 * 00000001C0047606: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C004760D: jz      short loc_1C0047678
 * 00000001C004760F: cmp     byte ptr [rcx+29h], 5
 * 00000001C0047613: jb      short loc_1C0047678
 * 00000001C0047615: and     qword ptr [r11-18h], 0
 * 00000001C004761A: lea     rdx, [r11+50h]
 * 00000001C004761E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0047625: lea     r8, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C004762C: mov     rcx, [rcx+18h]
 * 00000001C0047630: mov     r9d, ebx
 * 00000001C0047633: mov     qword ptr [r11-20h], 8
 * 00000001C004763B: mov     [r11-28h], rdx
 * 00000001C004763F: lea     rdx, [r11+48h]
 * 00000001C0047643: mov     [r11-30h], rsi
 * 00000001C0047647: mov     [r11-38h], rdx
 * 00000001C004764B: lea     rdx, [r11+40h]
 * 00000001C004764F: mov     [r11-40h], rsi
 * 00000001C0047653: mov     [r11-48h], rdx
 * 00000001C0047657: lea     rdx, [r11+38h]
 * 00000001C004765B: mov     [r11-50h], rsi
 * 00000001C004765F: mov     [r11-58h], rdx
 * 00000001C0047663: lea     rdx, [r11+30h]
 * 00000001C0047667: mov     [r11-60h], rsi
 * 00000001C004766B: mov     [r11-68h], rdx
 * 00000001C004766F: lea     edx, [rsi+27h]
 * 00000001C0047672: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0047678: and     [rsp+88h+var_10], 0
 * 00000001C004767E: lea     rax, [rsp+88h+arg_48]
 * 00000001C0047686: mov     [rsp+88h+var_18], 8
 * 00000001C004768F: lea     r9, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C0047696: mov     [rsp+88h+var_20], rax
 * 00000001C004769B: mov     edx, 5
 * 00000001C00476A0: mov     [rsp+88h+var_28], rsi
 * 00000001C00476A5: lea     rax, [rsp+88h+arg_40]
 * 00000001C00476AD: mov     [rsp+88h+var_30], rax
 * 00000001C00476B2: mov     rcx, rdi
 * 00000001C00476B5: mov     [rsp+88h+var_38], rsi
 * 00000001C00476BA: lea     rax, [rsp+88h+arg_38]
 * 00000001C00476C2: mov     [rsp+88h+var_40], rax
 * 00000001C00476C7: lea     r8d, [rdx+9]
 * 00000001C00476CB: mov     [rsp+88h+var_48], rsi
 * 00000001C00476D0: lea     rax, [rsp+88h+arg_30]
 * 00000001C00476D8: mov     [rsp+88h+var_50], rax
 * 00000001C00476DD: lea     rax, [rsp+88h+arg_28]
 * 00000001C00476E5: mov     [rsp+88h+var_58], rsi
 * 00000001C00476EA: mov     [rsp+88h+var_60], rax
 * 00000001C00476EF: mov     [rsp+88h+var_68], bx
 * 00000001C00476F4: call    cs:__imp_WppAutoLogTrace
 * 00000001C00476FB: nop     dword ptr [rax+rax+00h]
 * 00000001C0047700: lea     r11, [rsp+88h+var_8]
 * 00000001C0047708: mov     rbx, [r11+10h]
 * 00000001C004770C: mov     rsi, [r11+18h]
 * 00000001C0047710: mov     rsp, r11
 * 00000001C0047713: pop     rdi
 * 00000001C0047714: retn
 */
