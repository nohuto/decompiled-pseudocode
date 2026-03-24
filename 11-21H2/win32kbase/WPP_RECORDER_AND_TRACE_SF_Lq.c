/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_Lq @ 0x1C01DAB60
 * Callers:
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D3598 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D8878 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_Lq @ 0x1C01DAB60
 * Reason: Hex-Rays returned no pseudocode for 0x1C01DAB60
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01DAB60: mov     r11, rsp
 * 00000001C01DAB63: mov     [r11+8], rbx
 * 00000001C01DAB67: mov     [r11+10h], rsi
 * 00000001C01DAB6B: push    rdi
 * 00000001C01DAB6C: sub     rsp, 50h
 * 00000001C01DAB70: mov     rsi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C01DAB77: mov     dil, r8b
 * 00000001C01DAB7A: movzx   ebx, [rsp+58h+arg_30]
 * 00000001C01DAB82: test    dl, dl
 * 00000001C01DAB84: jz      short loc_1C01DABC7
 * 00000001C01DAB86: and     qword ptr [r11-18h], 0
 * 00000001C01DAB8B: lea     rdx, [r11+50h]
 * 00000001C01DAB8F: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01DAB96: lea     r8, WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids
 * 00000001C01DAB9D: mov     qword ptr [r11-20h], 8
 * 00000001C01DABA5: mov     r9d, ebx
 * 00000001C01DABA8: mov     [r11-28h], rdx
 * 00000001C01DABAC: lea     rdx, [r11+48h]
 * 00000001C01DABB0: mov     qword ptr [r11-30h], 4
 * 00000001C01DABB8: mov     [r11-38h], rdx
 * 00000001C01DABBC: mov     edx, 2Bh ; '+'
 * 00000001C01DABC1: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01DABC7: test    dil, dil
 * 00000001C01DABCA: jz      short loc_1C01DAC22
 * 00000001C01DABCC: and     [rsp+58h+var_10], 0
 * 00000001C01DABD2: lea     rax, [rsp+58h+arg_48]
 * 00000001C01DABDA: mov     [rsp+58h+var_18], 8
 * 00000001C01DABE3: lea     r9, WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids
 * 00000001C01DABEA: mov     [rsp+58h+var_20], rax
 * 00000001C01DABEF: mov     edx, 2
 * 00000001C01DABF4: lea     rax, [rsp+58h+arg_40]
 * 00000001C01DABFC: mov     [rsp+58h+var_28], 4
 * 00000001C01DAC05: mov     [rsp+58h+var_30], rax
 * 00000001C01DAC0A: mov     rcx, rsi
 * 00000001C01DAC0D: mov     [rsp+58h+var_38], bx
 * 00000001C01DAC12: lea     r8d, [rdx+5]
 * 00000001C01DAC16: call    cs:__imp_WppAutoLogTrace
 * 00000001C01DAC1D: nop     dword ptr [rax+rax+00h]
 * 00000001C01DAC22: mov     rbx, [rsp+58h+arg_0]
 * 00000001C01DAC27: mov     rsi, [rsp+58h+arg_8]
 * 00000001C01DAC2C: add     rsp, 50h
 * 00000001C01DAC30: pop     rdi
 * 00000001C01DAC31: retn
 */
