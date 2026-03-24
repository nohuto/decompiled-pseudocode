/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C0005E50
 * Callers:
 *     MouseClassPoRequestComplete @ 0x1C00011F0 (MouseClassPoRequestComplete.c)
 *     MouseClassWWPowerUpComplete @ 0x1C0005670 (MouseClassWWPowerUpComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002B60 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C0005E50
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005E50
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005E50: mov     r11, rsp
 * 00000001C0005E53: mov     [r11+8], rbx
 * 00000001C0005E57: push    rdi
 * 00000001C0005E58: sub     rsp, 40h
 * 00000001C0005E5C: mov     rdi, rcx
 * 00000001C0005E5F: movzx   ebx, r9w
 * 00000001C0005E63: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0005E6A: mov     eax, [rcx+2Ch]
 * 00000001C0005E6D: test    al, 10h
 * 00000001C0005E6F: jz      short loc_1C0005EAC
 * 00000001C0005E71: cmp     byte ptr [rcx+29h], 2
 * 00000001C0005E75: jb      short loc_1C0005EAC
 * 00000001C0005E77: and     qword ptr [r11-18h], 0
 * 00000001C0005E7C: lea     rdx, [r11+30h]
 * 00000001C0005E80: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0005E87: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0005E8E: mov     rcx, [rcx+18h]
 * 00000001C0005E92: mov     r9d, ebx
 * 00000001C0005E95: mov     qword ptr [r11-20h], 8
 * 00000001C0005E9D: mov     [r11-28h], rdx
 * 00000001C0005EA1: mov     edx, 2Bh ; '+'
 * 00000001C0005EA6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005EAC: and     [rsp+48h+var_10], 0
 * 00000001C0005EB2: lea     rax, [rsp+48h+arg_28]
 * 00000001C0005EB7: mov     edx, 2
 * 00000001C0005EBC: mov     [rsp+48h+var_18], 8
 * 00000001C0005EC5: mov     [rsp+48h+var_20], rax
 * 00000001C0005ECA: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0005ED1: mov     rcx, rdi
 * 00000001C0005ED4: mov     [rsp+48h+var_28], bx
 * 00000001C0005ED9: lea     r8d, [rdx+3]
 * 00000001C0005EDD: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005EE4: nop     dword ptr [rax+rax+00h]
 * 00000001C0005EE9: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0005EEE: add     rsp, 40h
 * 00000001C0005EF2: pop     rdi
 * 00000001C0005EF3: retn
 */
