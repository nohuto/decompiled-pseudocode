/*
 * XREFs of WPP_RECORDER_SF_qLD @ 0x1C00373D0
 * Callers:
 *     Controller_WdfEvtDeviceUsageNotification @ 0x1C0079800 (Controller_WdfEvtDeviceUsageNotification.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qLD @ 0x1C00373D0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00373D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00373D0: mov     r11, rsp
 * 00000001C00373D3: mov     [r11+8], rbx
 * 00000001C00373D7: mov     [r11+10h], rbp
 * 00000001C00373DB: push    rdi
 * 00000001C00373DC: sub     rsp, 60h
 * 00000001C00373E0: mov     rbx, rcx
 * 00000001C00373E3: mov     edi, 4
 * 00000001C00373E8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00373EF: lea     ebp, [rdi+31h]
 * 00000001C00373F2: mov     eax, [rcx+2Ch]
 * 00000001C00373F5: test    al, 8
 * 00000001C00373F7: jz      short loc_1C003744A
 * 00000001C00373F9: cmp     [rcx+29h], dil
 * 00000001C00373FD: jb      short loc_1C003744A
 * 00000001C00373FF: and     qword ptr [r11-18h], 0
 * 00000001C0037404: lea     rdx, [r11+40h]
 * 00000001C0037408: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003740F: lea     r8, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C0037416: mov     rcx, [rcx+18h]
 * 00000001C003741A: mov     r9d, ebp
 * 00000001C003741D: mov     [r11-20h], rdi
 * 00000001C0037421: mov     [r11-28h], rdx
 * 00000001C0037425: lea     rdx, [r11+38h]
 * 00000001C0037429: mov     [r11-30h], rdi
 * 00000001C003742D: mov     [r11-38h], rdx
 * 00000001C0037431: lea     rdx, [r11+30h]
 * 00000001C0037435: mov     qword ptr [r11-40h], 8
 * 00000001C003743D: mov     [r11-48h], rdx
 * 00000001C0037441: lea     edx, [rdi+27h]
 * 00000001C0037444: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003744A: and     [rsp+68h+var_10], 0
 * 00000001C0037450: lea     rax, [rsp+68h+arg_38]
 * 00000001C0037458: mov     [rsp+68h+var_18], rdi
 * 00000001C003745D: lea     r9, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C0037464: mov     [rsp+68h+var_20], rax
 * 00000001C0037469: mov     r8d, edi
 * 00000001C003746C: mov     [rsp+68h+var_28], rdi
 * 00000001C0037471: lea     rax, [rsp+68h+arg_30]
 * 00000001C0037479: mov     [rsp+68h+var_30], rax
 * 00000001C003747E: mov     edx, edi
 * 00000001C0037480: lea     rax, [rsp+68h+arg_28]
 * 00000001C0037488: mov     [rsp+68h+var_38], 8
 * 00000001C0037491: mov     [rsp+68h+var_40], rax
 * 00000001C0037496: mov     rcx, rbx
 * 00000001C0037499: mov     [rsp+68h+var_48], bp
 * 00000001C003749E: call    cs:__imp_WppAutoLogTrace
 * 00000001C00374A5: nop     dword ptr [rax+rax+00h]
 * 00000001C00374AA: mov     rbx, [rsp+68h+arg_0]
 * 00000001C00374AF: mov     rbp, [rsp+68h+arg_8]
 * 00000001C00374B4: add     rsp, 60h
 * 00000001C00374B8: pop     rdi
 * 00000001C00374B9: retn
 */
