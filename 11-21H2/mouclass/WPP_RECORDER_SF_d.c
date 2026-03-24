/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C0005AA4
 * Callers:
 *     MouConfiguration @ 0x1C000F080 (MouConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002F10 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_D @ 0x1C0005AA4
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005AA4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005AA4: mov     r11, rsp
 * 00000001C0005AA7: mov     [r11+8], rbx
 * 00000001C0005AAB: push    rsi
 * 00000001C0005AAC: sub     rsp, 40h
 * 00000001C0005AB0: mov     rbx, rcx
 * 00000001C0005AB3: mov     esi, 41h ; 'A'
 * 00000001C0005AB8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0005ABF: mov     eax, [rcx+2Ch]
 * 00000001C0005AC2: test    al, 1
 * 00000001C0005AC4: jz      short loc_1C0005B00
 * 00000001C0005AC6: cmp     byte ptr [rcx+29h], 4
 * 00000001C0005ACA: jb      short loc_1C0005B00
 * 00000001C0005ACC: and     qword ptr [r11-18h], 0
 * 00000001C0005AD1: lea     rdx, [r11+30h]
 * 00000001C0005AD5: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0005ADC: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0005AE3: mov     rcx, [rcx+18h]
 * 00000001C0005AE7: mov     qword ptr [r11-20h], 4
 * 00000001C0005AEF: mov     [r11-28h], rdx
 * 00000001C0005AF3: lea     edx, [rsi-16h]
 * 00000001C0005AF6: movzx   r9d, si
 * 00000001C0005AFA: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005B00: and     [rsp+48h+var_10], 0
 * 00000001C0005B06: lea     rax, [rsp+48h+arg_28]
 * 00000001C0005B0B: mov     edx, 4
 * 00000001C0005B10: mov     [rsp+48h+var_18], 4
 * 00000001C0005B19: mov     [rsp+48h+var_20], rax
 * 00000001C0005B1E: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0005B25: mov     rcx, rbx
 * 00000001C0005B28: mov     [rsp+48h+var_28], si
 * 00000001C0005B2D: lea     r8d, [rdx-3]
 * 00000001C0005B31: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005B38: nop     dword ptr [rax+rax+00h]
 * 00000001C0005B3D: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0005B42: add     rsp, 40h
 * 00000001C0005B46: pop     rsi
 * 00000001C0005B47: retn
 */
