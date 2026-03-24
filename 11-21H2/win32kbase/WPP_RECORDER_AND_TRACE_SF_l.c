/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_L @ 0x1C01DA7E0
 * Callers:
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01CCE84 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C01CF204 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C01CF4BC (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C01D447C (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C01D50CC (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01E625C (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_L @ 0x1C01DA7E0
 * Reason: Hex-Rays returned no pseudocode for 0x1C01DA7E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01DA7E0: mov     r11, rsp
 * 00000001C01DA7E3: mov     [r11+8], rbx
 * 00000001C01DA7E7: mov     [r11+10h], rsi
 * 00000001C01DA7EB: push    rdi
 * 00000001C01DA7EC: sub     rsp, 40h
 * 00000001C01DA7F0: mov     rsi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C01DA7F7: mov     dil, r8b
 * 00000001C01DA7FA: movzx   ebx, [rsp+48h+arg_30]
 * 00000001C01DA802: test    dl, dl
 * 00000001C01DA804: jz      short loc_1C01DA838
 * 00000001C01DA806: and     qword ptr [r11-18h], 0
 * 00000001C01DA80B: lea     rdx, [r11+48h]
 * 00000001C01DA80F: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01DA816: mov     r9d, ebx
 * 00000001C01DA819: mov     r8, [rsp+48h+arg_38]
 * 00000001C01DA821: mov     qword ptr [r11-20h], 4
 * 00000001C01DA829: mov     [r11-28h], rdx
 * 00000001C01DA82D: mov     edx, 2Bh ; '+'
 * 00000001C01DA832: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01DA838: test    dil, dil
 * 00000001C01DA83B: jz      short loc_1C01DA87F
 * 00000001C01DA83D: and     [rsp+48h+var_10], 0
 * 00000001C01DA843: lea     rax, [rsp+48h+arg_40]
 * 00000001C01DA84B: mov     r9, [rsp+48h+arg_38]
 * 00000001C01DA853: mov     rcx, rsi
 * 00000001C01DA856: mov     r8d, [rsp+48h+arg_28]
 * 00000001C01DA85B: movzx   edx, [rsp+48h+arg_20]
 * 00000001C01DA860: mov     [rsp+48h+var_18], 4
 * 00000001C01DA869: mov     [rsp+48h+var_20], rax
 * 00000001C01DA86E: mov     [rsp+48h+var_28], bx
 * 00000001C01DA873: call    cs:__imp_WppAutoLogTrace
 * 00000001C01DA87A: nop     dword ptr [rax+rax+00h]
 * 00000001C01DA87F: mov     rbx, [rsp+48h+arg_0]
 * 00000001C01DA884: mov     rsi, [rsp+48h+arg_8]
 * 00000001C01DA889: add     rsp, 40h
 * 00000001C01DA88D: pop     rdi
 * 00000001C01DA88E: retn
 */
