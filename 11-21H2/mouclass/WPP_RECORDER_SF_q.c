/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C0005B50
 * Callers:
 *     MouseClassPoRequestComplete @ 0x1C0001900 (MouseClassPoRequestComplete.c)
 *     MouseClassWWPowerUpComplete @ 0x1C0005370 (MouseClassWWPowerUpComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002F10 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C0005B50
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005B50
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005B50: mov     r11, rsp
 * 00000001C0005B53: mov     [r11+8], rbx
 * 00000001C0005B57: push    rdi
 * 00000001C0005B58: sub     rsp, 40h
 * 00000001C0005B5C: mov     rdi, rcx
 * 00000001C0005B5F: movzx   ebx, r9w
 * 00000001C0005B63: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0005B6A: mov     eax, [rcx+2Ch]
 * 00000001C0005B6D: test    al, 10h
 * 00000001C0005B6F: jz      short loc_1C0005BAC
 * 00000001C0005B71: cmp     byte ptr [rcx+29h], 2
 * 00000001C0005B75: jb      short loc_1C0005BAC
 * 00000001C0005B77: and     qword ptr [r11-18h], 0
 * 00000001C0005B7C: lea     rdx, [r11+30h]
 * 00000001C0005B80: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0005B87: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0005B8E: mov     rcx, [rcx+18h]
 * 00000001C0005B92: mov     r9d, ebx
 * 00000001C0005B95: mov     qword ptr [r11-20h], 8
 * 00000001C0005B9D: mov     [r11-28h], rdx
 * 00000001C0005BA1: mov     edx, 2Bh ; '+'
 * 00000001C0005BA6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005BAC: and     [rsp+48h+var_10], 0
 * 00000001C0005BB2: lea     rax, [rsp+48h+arg_28]
 * 00000001C0005BB7: mov     edx, 2
 * 00000001C0005BBC: mov     [rsp+48h+var_18], 8
 * 00000001C0005BC5: mov     [rsp+48h+var_20], rax
 * 00000001C0005BCA: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0005BD1: mov     rcx, rdi
 * 00000001C0005BD4: mov     [rsp+48h+var_28], bx
 * 00000001C0005BD9: lea     r8d, [rdx+3]
 * 00000001C0005BDD: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005BE4: nop     dword ptr [rax+rax+00h]
 * 00000001C0005BE9: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0005BEE: add     rsp, 40h
 * 00000001C0005BF2: pop     rdi
 * 00000001C0005BF3: retn
 */
