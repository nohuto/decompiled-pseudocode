/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_LL @ 0x1C01DA994
 * Callers:
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01C649C (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01C6724 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C01C7D8C (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C01C8518 (-GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01C8770 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C01CC260 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C01D50CC (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C01D8E38 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCIn.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_LL @ 0x1C01DA994
 * Reason: Hex-Rays returned no pseudocode for 0x1C01DA994
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01DA994: mov     r11, rsp
 * 00000001C01DA997: mov     [r11+8], rbx
 * 00000001C01DA99B: mov     [r11+10h], rbp
 * 00000001C01DA99F: mov     [r11+18h], rsi
 * 00000001C01DA9A3: push    rdi
 * 00000001C01DA9A4: sub     rsp, 50h
 * 00000001C01DA9A8: movzx   ebx, [rsp+58h+arg_30]
 * 00000001C01DA9B0: mov     rsi, r9
 * 00000001C01DA9B3: mov     dil, r8b
 * 00000001C01DA9B6: mov     ebp, 4
 * 00000001C01DA9BB: test    dl, dl
 * 00000001C01DA9BD: jz      short loc_1C01DA9F6
 * 00000001C01DA9BF: and     qword ptr [r11-18h], 0
 * 00000001C01DA9C4: lea     rdx, [r11+50h]
 * 00000001C01DA9C8: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01DA9CF: lea     r8, WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids
 * 00000001C01DA9D6: mov     [r11-20h], rbp
 * 00000001C01DA9DA: mov     r9d, ebx
 * 00000001C01DA9DD: mov     [r11-28h], rdx
 * 00000001C01DA9E1: lea     rdx, [r11+48h]
 * 00000001C01DA9E5: mov     [r11-30h], rbp
 * 00000001C01DA9E9: mov     [r11-38h], rdx
 * 00000001C01DA9ED: lea     edx, [rbp+27h]
 * 00000001C01DA9F0: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01DA9F6: test    dil, dil
 * 00000001C01DA9F9: jz      short loc_1C01DAA4E
 * 00000001C01DA9FB: and     [rsp+58h+var_10], 0
 * 00000001C01DAA01: lea     rax, [rsp+58h+arg_48]
 * 00000001C01DAA09: movzx   edx, [rsp+58h+arg_20]
 * 00000001C01DAA11: lea     r9, WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids
 * 00000001C01DAA18: mov     [rsp+58h+var_18], rbp
 * 00000001C01DAA1D: mov     r8d, 7
 * 00000001C01DAA23: mov     [rsp+58h+var_20], rax
 * 00000001C01DAA28: mov     rcx, rsi
 * 00000001C01DAA2B: lea     rax, [rsp+58h+arg_40]
 * 00000001C01DAA33: mov     [rsp+58h+var_28], rbp
 * 00000001C01DAA38: mov     [rsp+58h+var_30], rax
 * 00000001C01DAA3D: mov     [rsp+58h+var_38], bx
 * 00000001C01DAA42: call    cs:__imp_WppAutoLogTrace
 * 00000001C01DAA49: nop     dword ptr [rax+rax+00h]
 * 00000001C01DAA4E: mov     rbx, [rsp+58h+arg_0]
 * 00000001C01DAA53: mov     rbp, [rsp+58h+arg_8]
 * 00000001C01DAA58: mov     rsi, [rsp+58h+arg_10]
 * 00000001C01DAA5D: add     rsp, 50h
 * 00000001C01DAA61: pop     rdi
 * 00000001C01DAA62: retn
 */
