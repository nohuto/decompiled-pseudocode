/*
 * XREFs of WPP_RECORDER_SF_ddqqq @ 0x1C003DA44
 * Callers:
 *     Endpoint_EvtEndpointCleanupCallback @ 0x1C003A420 (Endpoint_EvtEndpointCleanupCallback.c)
 *     Endpoint_EvtStaticStreamsCleanupCallback @ 0x1C003A5C0 (Endpoint_EvtStaticStreamsCleanupCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddqqq @ 0x1C003DA44
 * Reason: Hex-Rays returned no pseudocode for 0x1C003DA44
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003DA44: mov     r11, rsp
 * 00000001C003DA47: mov     [r11+8], rbx
 * 00000001C003DA4B: mov     [r11+10h], rbp
 * 00000001C003DA4F: mov     [r11+18h], rsi
 * 00000001C003DA53: push    rdi
 * 00000001C003DA54: sub     rsp, 80h
 * 00000001C003DA5B: mov     rdi, rcx
 * 00000001C003DA5E: movzx   ebx, r9w
 * 00000001C003DA62: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003DA69: mov     esi, 4
 * 00000001C003DA6E: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C003DA75: lea     ebp, [rsi+4]
 * 00000001C003DA78: jz      short loc_1C003DADF
 * 00000001C003DA7A: cmp     [rcx+29h], sil
 * 00000001C003DA7E: jb      short loc_1C003DADF
 * 00000001C003DA80: and     qword ptr [r11-18h], 0
 * 00000001C003DA85: lea     rdx, [r11+50h]
 * 00000001C003DA89: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003DA90: lea     r8, WPP_54015396503830aea6e7f220ba327c55_Traceguids
 * 00000001C003DA97: mov     rcx, [rcx+18h]
 * 00000001C003DA9B: mov     r9d, ebx
 * 00000001C003DA9E: mov     [r11-20h], rbp
 * 00000001C003DAA2: mov     [r11-28h], rdx
 * 00000001C003DAA6: lea     rdx, [r11+48h]
 * 00000001C003DAAA: mov     [r11-30h], rbp
 * 00000001C003DAAE: mov     [r11-38h], rdx
 * 00000001C003DAB2: lea     rdx, [r11+40h]
 * 00000001C003DAB6: mov     [r11-40h], rbp
 * 00000001C003DABA: mov     [r11-48h], rdx
 * 00000001C003DABE: lea     rdx, [r11+38h]
 * 00000001C003DAC2: mov     [r11-50h], rsi
 * 00000001C003DAC6: mov     [r11-58h], rdx
 * 00000001C003DACA: lea     rdx, [r11+30h]
 * 00000001C003DACE: mov     [r11-60h], rsi
 * 00000001C003DAD2: mov     [r11-68h], rdx
 * 00000001C003DAD6: lea     edx, [rsi+27h]
 * 00000001C003DAD9: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003DADF: and     [rsp+88h+var_10], 0
 * 00000001C003DAE5: lea     rax, [rsp+88h+arg_48]
 * 00000001C003DAED: mov     [rsp+88h+var_18], rbp
 * 00000001C003DAF2: lea     r9, WPP_54015396503830aea6e7f220ba327c55_Traceguids
 * 00000001C003DAF9: mov     [rsp+88h+var_20], rax
 * 00000001C003DAFE: mov     r8d, 0Dh
 * 00000001C003DB04: mov     [rsp+88h+var_28], rbp
 * 00000001C003DB09: lea     rax, [rsp+88h+arg_40]
 * 00000001C003DB11: mov     [rsp+88h+var_30], rax
 * 00000001C003DB16: mov     edx, esi
 * 00000001C003DB18: mov     [rsp+88h+var_38], rbp
 * 00000001C003DB1D: lea     rax, [rsp+88h+arg_38]
 * 00000001C003DB25: mov     [rsp+88h+var_40], rax
 * 00000001C003DB2A: mov     rcx, rdi
 * 00000001C003DB2D: mov     [rsp+88h+var_48], rsi
 * 00000001C003DB32: lea     rax, [rsp+88h+arg_30]
 * 00000001C003DB3A: mov     [rsp+88h+var_50], rax
 * 00000001C003DB3F: lea     rax, [rsp+88h+arg_28]
 * 00000001C003DB47: mov     [rsp+88h+var_58], rsi
 * 00000001C003DB4C: mov     [rsp+88h+var_60], rax
 * 00000001C003DB51: mov     [rsp+88h+var_68], bx
 * 00000001C003DB56: call    cs:__imp_WppAutoLogTrace
 * 00000001C003DB5D: nop     dword ptr [rax+rax+00h]
 * 00000001C003DB62: lea     r11, [rsp+88h+var_8]
 * 00000001C003DB6A: mov     rbx, [r11+10h]
 * 00000001C003DB6E: mov     rbp, [r11+18h]
 * 00000001C003DB72: mov     rsi, [r11+20h]
 * 00000001C003DB76: mov     rsp, r11
 * 00000001C003DB79: pop     rdi
 * 00000001C003DB7A: retn
 */
