/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_LLL @ 0x1C01DAA6C
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01C7310 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_LLL @ 0x1C01DAA6C
 * Reason: Hex-Rays returned no pseudocode for 0x1C01DAA6C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01DAA6C: mov     r11, rsp
 * 00000001C01DAA6F: mov     [r11+8], rbx
 * 00000001C01DAA73: mov     [r11+10h], rbp
 * 00000001C01DAA77: mov     [r11+18h], rsi
 * 00000001C01DAA7B: push    rdi
 * 00000001C01DAA7C: sub     rsp, 60h
 * 00000001C01DAA80: mov     rsi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C01DAA87: mov     bl, r8b
 * 00000001C01DAA8A: movzx   edi, [rsp+68h+arg_30]
 * 00000001C01DAA92: mov     ebp, 4
 * 00000001C01DAA97: test    dl, dl
 * 00000001C01DAA99: jz      short loc_1C01DAADE
 * 00000001C01DAA9B: and     qword ptr [r11-18h], 0
 * 00000001C01DAAA0: lea     rdx, [r11+58h]
 * 00000001C01DAAA4: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01DAAAB: lea     r8, WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids
 * 00000001C01DAAB2: mov     [r11-20h], rbp
 * 00000001C01DAAB6: mov     r9d, edi
 * 00000001C01DAAB9: mov     [r11-28h], rdx
 * 00000001C01DAABD: lea     rdx, [r11+50h]
 * 00000001C01DAAC1: mov     [r11-30h], rbp
 * 00000001C01DAAC5: mov     [r11-38h], rdx
 * 00000001C01DAAC9: lea     rdx, [r11+48h]
 * 00000001C01DAACD: mov     [r11-40h], rbp
 * 00000001C01DAAD1: mov     [r11-48h], rdx
 * 00000001C01DAAD5: lea     edx, [rbp+27h]
 * 00000001C01DAAD8: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01DAADE: test    bl, bl
 * 00000001C01DAAE0: jz      short loc_1C01DAB42
 * 00000001C01DAAE2: and     [rsp+68h+var_10], 0
 * 00000001C01DAAE8: lea     rax, [rsp+68h+arg_50]
 * 00000001C01DAAF0: mov     [rsp+68h+var_18], rbp
 * 00000001C01DAAF5: lea     r9, WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids
 * 00000001C01DAAFC: mov     [rsp+68h+var_20], rax
 * 00000001C01DAB01: mov     edx, 5
 * 00000001C01DAB06: mov     [rsp+68h+var_28], rbp
 * 00000001C01DAB0B: lea     rax, [rsp+68h+arg_48]
 * 00000001C01DAB13: mov     [rsp+68h+var_30], rax
 * 00000001C01DAB18: mov     rcx, rsi
 * 00000001C01DAB1B: lea     rax, [rsp+68h+arg_40]
 * 00000001C01DAB23: mov     [rsp+68h+var_38], rbp
 * 00000001C01DAB28: mov     [rsp+68h+var_40], rax
 * 00000001C01DAB2D: lea     r8d, [rdx+2]
 * 00000001C01DAB31: mov     [rsp+68h+var_48], di
 * 00000001C01DAB36: call    cs:__imp_WppAutoLogTrace
 * 00000001C01DAB3D: nop     dword ptr [rax+rax+00h]
 * 00000001C01DAB42: lea     r11, [rsp+68h+var_8]
 * 00000001C01DAB47: mov     rbx, [r11+10h]
 * 00000001C01DAB4B: mov     rbp, [r11+18h]
 * 00000001C01DAB4F: mov     rsi, [r11+20h]
 * 00000001C01DAB53: mov     rsp, r11
 * 00000001C01DAB56: pop     rdi
 * 00000001C01DAB57: retn
 */
