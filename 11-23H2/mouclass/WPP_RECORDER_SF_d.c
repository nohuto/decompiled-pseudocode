/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C0005DA4
 * Callers:
 *     MouConfiguration @ 0x1C0011080 (MouConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002B60 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_D @ 0x1C0005DA4
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005DA4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005DA4: mov     r11, rsp
 * 00000001C0005DA7: mov     [r11+8], rbx
 * 00000001C0005DAB: push    rsi
 * 00000001C0005DAC: sub     rsp, 40h
 * 00000001C0005DB0: mov     rbx, rcx
 * 00000001C0005DB3: mov     esi, 41h ; 'A'
 * 00000001C0005DB8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0005DBF: mov     eax, [rcx+2Ch]
 * 00000001C0005DC2: test    al, 1
 * 00000001C0005DC4: jz      short loc_1C0005DFF
 * 00000001C0005DC6: cmp     byte ptr [rcx+29h], 4
 * 00000001C0005DCA: jb      short loc_1C0005DFF
 * 00000001C0005DCC: and     qword ptr [r11-18h], 0
 * 00000001C0005DD1: lea     rdx, [r11+30h]
 * 00000001C0005DD5: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0005DDC: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0005DE3: mov     rcx, [rcx+18h]
 * 00000001C0005DE7: mov     r9d, esi
 * 00000001C0005DEA: mov     qword ptr [r11-20h], 4
 * 00000001C0005DF2: mov     [r11-28h], rdx
 * 00000001C0005DF6: lea     edx, [rsi-16h]
 * 00000001C0005DF9: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005DFF: and     [rsp+48h+var_10], 0
 * 00000001C0005E05: lea     rax, [rsp+48h+arg_28]
 * 00000001C0005E0A: mov     edx, 4
 * 00000001C0005E0F: mov     [rsp+48h+var_18], 4
 * 00000001C0005E18: mov     [rsp+48h+var_20], rax
 * 00000001C0005E1D: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0005E24: mov     rcx, rbx
 * 00000001C0005E27: mov     [rsp+48h+var_28], si
 * 00000001C0005E2C: lea     r8d, [rdx-3]
 * 00000001C0005E30: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005E37: nop     dword ptr [rax+rax+00h]
 * 00000001C0005E3C: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0005E41: add     rsp, 40h
 * 00000001C0005E45: pop     rsi
 * 00000001C0005E46: retn
 */
