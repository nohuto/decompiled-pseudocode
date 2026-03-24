/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_LHH @ 0x1C01DA898
 * Callers:
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C01BF98C (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_LHH @ 0x1C01DA898
 * Reason: Hex-Rays returned no pseudocode for 0x1C01DA898
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01DA898: mov     r11, rsp
 * 00000001C01DA89B: mov     [r11+8], rbx
 * 00000001C01DA89F: mov     [r11+10h], rsi
 * 00000001C01DA8A3: mov     [r11+18h], rdi
 * 00000001C01DA8A7: push    r14
 * 00000001C01DA8A9: sub     rsp, 60h
 * 00000001C01DA8AD: mov     rdi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C01DA8B4: mov     bl, r8b
 * 00000001C01DA8B7: mov     esi, 2
 * 00000001C01DA8BC: mov     r14d, 146h
 * 00000001C01DA8C2: test    dl, dl
 * 00000001C01DA8C4: jz      short loc_1C01DA90E
 * 00000001C01DA8C6: and     qword ptr [r11-18h], 0
 * 00000001C01DA8CB: lea     rdx, [r11+58h]
 * 00000001C01DA8CF: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01DA8D6: lea     r8, WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids
 * 00000001C01DA8DD: mov     [r11-20h], rsi
 * 00000001C01DA8E1: mov     [r11-28h], rdx
 * 00000001C01DA8E5: lea     rdx, [r11+50h]
 * 00000001C01DA8E9: mov     [r11-30h], rsi
 * 00000001C01DA8ED: mov     [r11-38h], rdx
 * 00000001C01DA8F1: lea     rdx, [r11+48h]
 * 00000001C01DA8F5: mov     qword ptr [r11-40h], 4
 * 00000001C01DA8FD: mov     [r11-48h], rdx
 * 00000001C01DA901: lea     edx, [rsi+29h]
 * 00000001C01DA904: movzx   r9d, r14w
 * 00000001C01DA908: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01DA90E: test    bl, bl
 * 00000001C01DA910: jz      short loc_1C01DA976
 * 00000001C01DA912: and     [rsp+68h+var_10], 0
 * 00000001C01DA918: lea     rax, [rsp+68h+arg_50]
 * 00000001C01DA920: mov     [rsp+68h+var_18], rsi
 * 00000001C01DA925: lea     r9, WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids
 * 00000001C01DA92C: mov     [rsp+68h+var_20], rax
 * 00000001C01DA931: mov     r8d, 7
 * 00000001C01DA937: mov     [rsp+68h+var_28], rsi
 * 00000001C01DA93C: lea     rax, [rsp+68h+arg_48]
 * 00000001C01DA944: mov     [rsp+68h+var_30], rax
 * 00000001C01DA949: mov     edx, esi
 * 00000001C01DA94B: lea     rax, [rsp+68h+arg_40]
 * 00000001C01DA953: mov     [rsp+68h+var_38], 4
 * 00000001C01DA95C: mov     [rsp+68h+var_40], rax
 * 00000001C01DA961: mov     rcx, rdi
 * 00000001C01DA964: mov     [rsp+68h+var_48], r14w
 * 00000001C01DA96A: call    cs:__imp_WppAutoLogTrace
 * 00000001C01DA971: nop     dword ptr [rax+rax+00h]
 * 00000001C01DA976: lea     r11, [rsp+68h+var_8]
 * 00000001C01DA97B: mov     rbx, [r11+10h]
 * 00000001C01DA97F: mov     rsi, [r11+18h]
 * 00000001C01DA983: mov     rdi, [r11+20h]
 * 00000001C01DA987: mov     rsp, r11
 * 00000001C01DA98A: pop     r14
 * 00000001C01DA98C: retn
 */
