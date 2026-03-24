/*
 * XREFs of WPP_RECORDER_SF_q_guid_L @ 0x1C00374C4
 * Callers:
 *     Controller_ExecuteDSM @ 0x1C006E4E4 (Controller_ExecuteDSM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q_guid_L @ 0x1C00374C4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00374C4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00374C4: mov     r11, rsp
 * 00000001C00374C7: mov     [r11+8], rbx
 * 00000001C00374CB: mov     [r11+10h], rsi
 * 00000001C00374CF: mov     [r11+18h], rdi
 * 00000001C00374D3: push    r15
 * 00000001C00374D5: sub     rsp, 60h
 * 00000001C00374D9: mov     rbx, [rsp+68h+arg_30]
 * 00000001C00374E1: mov     rdi, rcx
 * 00000001C00374E4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00374EB: mov     esi, 4
 * 00000001C00374F0: mov     r15d, 105h
 * 00000001C00374F6: mov     eax, [rcx+2Ch]
 * 00000001C00374F9: test    al, 8
 * 00000001C00374FB: jz      short loc_1C003754E
 * 00000001C00374FD: cmp     [rcx+29h], sil
 * 00000001C0037501: jb      short loc_1C003754E
 * 00000001C0037503: and     qword ptr [r11-18h], 0
 * 00000001C0037508: lea     rdx, [r11+40h]
 * 00000001C003750C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0037513: lea     r8, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C003751A: mov     rcx, [rcx+18h]
 * 00000001C003751E: mov     r9d, r15d
 * 00000001C0037521: mov     [r11-20h], rsi
 * 00000001C0037525: mov     [r11-28h], rdx
 * 00000001C0037529: lea     rdx, [r11+30h]
 * 00000001C003752D: mov     qword ptr [r11-30h], 10h
 * 00000001C0037535: mov     [r11-38h], rbx
 * 00000001C0037539: mov     qword ptr [r11-40h], 8
 * 00000001C0037541: mov     [r11-48h], rdx
 * 00000001C0037545: lea     edx, [rsi+27h]
 * 00000001C0037548: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003754E: and     [rsp+68h+var_10], 0
 * 00000001C0037554: lea     rax, [rsp+68h+arg_38]
 * 00000001C003755C: mov     [rsp+68h+var_18], rsi
 * 00000001C0037561: lea     r9, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C0037568: mov     [rsp+68h+var_20], rax
 * 00000001C003756D: mov     r8d, esi
 * 00000001C0037570: mov     [rsp+68h+var_28], 10h
 * 00000001C0037579: lea     rax, [rsp+68h+arg_28]
 * 00000001C0037581: mov     [rsp+68h+var_30], rbx
 * 00000001C0037586: mov     edx, esi
 * 00000001C0037588: mov     [rsp+68h+var_38], 8
 * 00000001C0037591: mov     rcx, rdi
 * 00000001C0037594: mov     [rsp+68h+var_40], rax
 * 00000001C0037599: mov     [rsp+68h+var_48], r15w
 * 00000001C003759F: call    cs:__imp_WppAutoLogTrace
 * 00000001C00375A6: nop     dword ptr [rax+rax+00h]
 * 00000001C00375AB: lea     r11, [rsp+68h+var_8]
 * 00000001C00375B0: mov     rbx, [r11+10h]
 * 00000001C00375B4: mov     rsi, [r11+18h]
 * 00000001C00375B8: mov     rdi, [r11+20h]
 * 00000001C00375BC: mov     rsp, r11
 * 00000001C00375BF: pop     r15
 * 00000001C00375C1: retn
 */
