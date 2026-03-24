/*
 * XREFs of WPP_RECORDER_SF_qLD @ 0x1C0037510
 * Callers:
 *     Controller_WdfEvtDeviceUsageNotification @ 0x1C00797C0 (Controller_WdfEvtDeviceUsageNotification.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qLD @ 0x1C0037510
 * Reason: Hex-Rays returned no pseudocode for 0x1C0037510
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0037510: mov     r11, rsp
 * 00000001C0037513: mov     [r11+8], rbx
 * 00000001C0037517: mov     [r11+10h], rbp
 * 00000001C003751B: push    rdi
 * 00000001C003751C: sub     rsp, 60h
 * 00000001C0037520: mov     rbx, rcx
 * 00000001C0037523: mov     edi, 4
 * 00000001C0037528: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003752F: lea     ebp, [rdi+31h]
 * 00000001C0037532: mov     eax, [rcx+2Ch]
 * 00000001C0037535: test    al, 8
 * 00000001C0037537: jz      short loc_1C003758A
 * 00000001C0037539: cmp     [rcx+29h], dil
 * 00000001C003753D: jb      short loc_1C003758A
 * 00000001C003753F: and     qword ptr [r11-18h], 0
 * 00000001C0037544: lea     rdx, [r11+40h]
 * 00000001C0037548: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003754F: lea     r8, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C0037556: mov     rcx, [rcx+18h]
 * 00000001C003755A: mov     r9d, ebp
 * 00000001C003755D: mov     [r11-20h], rdi
 * 00000001C0037561: mov     [r11-28h], rdx
 * 00000001C0037565: lea     rdx, [r11+38h]
 * 00000001C0037569: mov     [r11-30h], rdi
 * 00000001C003756D: mov     [r11-38h], rdx
 * 00000001C0037571: lea     rdx, [r11+30h]
 * 00000001C0037575: mov     qword ptr [r11-40h], 8
 * 00000001C003757D: mov     [r11-48h], rdx
 * 00000001C0037581: lea     edx, [rdi+27h]
 * 00000001C0037584: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003758A: and     [rsp+68h+var_10], 0
 * 00000001C0037590: lea     rax, [rsp+68h+arg_38]
 * 00000001C0037598: mov     [rsp+68h+var_18], rdi
 * 00000001C003759D: lea     r9, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C00375A4: mov     [rsp+68h+var_20], rax
 * 00000001C00375A9: mov     r8d, edi
 * 00000001C00375AC: mov     [rsp+68h+var_28], rdi
 * 00000001C00375B1: lea     rax, [rsp+68h+arg_30]
 * 00000001C00375B9: mov     [rsp+68h+var_30], rax
 * 00000001C00375BE: mov     edx, edi
 * 00000001C00375C0: lea     rax, [rsp+68h+arg_28]
 * 00000001C00375C8: mov     [rsp+68h+var_38], 8
 * 00000001C00375D1: mov     [rsp+68h+var_40], rax
 * 00000001C00375D6: mov     rcx, rbx
 * 00000001C00375D9: mov     [rsp+68h+var_48], bp
 * 00000001C00375DE: call    cs:__imp_WppAutoLogTrace
 * 00000001C00375E5: nop     dword ptr [rax+rax+00h]
 * 00000001C00375EA: mov     rbx, [rsp+68h+arg_0]
 * 00000001C00375EF: mov     rbp, [rsp+68h+arg_8]
 * 00000001C00375F4: add     rsp, 60h
 * 00000001C00375F8: pop     rdi
 * 00000001C00375F9: retn
 */
