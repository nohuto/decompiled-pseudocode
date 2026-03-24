/*
 * XREFs of WPP_RECORDER_SF_PP @ 0x1C003CCE8
 * Callers:
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C003C700 (IoControl_WdfEvtIoDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_PP @ 0x1C003CCE8
 * Reason: Hex-Rays returned no pseudocode for 0x1C003CCE8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003CCE8: mov     r11, rsp
 * 00000001C003CCEB: mov     [r11+8], rbx
 * 00000001C003CCEF: mov     [r11+10h], rsi
 * 00000001C003CCF3: push    rdi
 * 00000001C003CCF4: sub     rsp, 50h
 * 00000001C003CCF8: mov     rbx, rcx
 * 00000001C003CCFB: mov     esi, 0Ch
 * 00000001C003CD00: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003CD07: lea     edi, [rsi-4]
 * 00000001C003CD0A: mov     eax, [rcx+2Ch]
 * 00000001C003CD0D: test    al, 10h
 * 00000001C003CD0F: jz      short loc_1C003CD53
 * 00000001C003CD11: cmp     byte ptr [rcx+29h], 3
 * 00000001C003CD15: jb      short loc_1C003CD53
 * 00000001C003CD17: and     qword ptr [r11-18h], 0
 * 00000001C003CD1C: lea     rdx, [r11+38h]
 * 00000001C003CD20: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003CD27: lea     r8, WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids
 * 00000001C003CD2E: mov     rcx, [rcx+18h]
 * 00000001C003CD32: mov     [r11-20h], rdi
 * 00000001C003CD36: mov     [r11-28h], rdx
 * 00000001C003CD3A: lea     rdx, [r11+30h]
 * 00000001C003CD3E: mov     [r11-30h], rdi
 * 00000001C003CD42: mov     [r11-38h], rdx
 * 00000001C003CD46: lea     edx, [rsi+1Fh]
 * 00000001C003CD49: movzx   r9d, si
 * 00000001C003CD4D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003CD53: and     [rsp+58h+var_10], 0
 * 00000001C003CD59: lea     rax, [rsp+58h+arg_30]
 * 00000001C003CD61: mov     [rsp+58h+var_18], rdi
 * 00000001C003CD66: lea     r9, WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids
 * 00000001C003CD6D: mov     [rsp+58h+var_20], rax
 * 00000001C003CD72: mov     edx, 3
 * 00000001C003CD77: lea     rax, [rsp+58h+arg_28]
 * 00000001C003CD7F: mov     [rsp+58h+var_28], rdi
 * 00000001C003CD84: mov     [rsp+58h+var_30], rax
 * 00000001C003CD89: mov     rcx, rbx
 * 00000001C003CD8C: mov     [rsp+58h+var_38], si
 * 00000001C003CD91: lea     r8d, [rdx+2]
 * 00000001C003CD95: call    cs:__imp_WppAutoLogTrace
 * 00000001C003CD9C: nop     dword ptr [rax+rax+00h]
 * 00000001C003CDA1: mov     rbx, [rsp+58h+arg_0]
 * 00000001C003CDA6: mov     rsi, [rsp+58h+arg_8]
 * 00000001C003CDAB: add     rsp, 50h
 * 00000001C003CDAF: pop     rdi
 * 00000001C003CDB0: retn
 */
