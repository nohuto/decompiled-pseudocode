/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dqd @ 0x1C01DB01C
 * Callers:
 *     ?TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C01D7FC4 (-TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 *     ?TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C01D807C (-TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01E625C (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_dqd @ 0x1C01DB01C
 * Reason: Hex-Rays returned no pseudocode for 0x1C01DB01C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01DB01C: mov     r11, rsp
 * 00000001C01DB01F: mov     [r11+8], rbx
 * 00000001C01DB023: mov     [r11+10h], rbp
 * 00000001C01DB027: mov     [r11+18h], rsi
 * 00000001C01DB02B: push    rdi
 * 00000001C01DB02C: sub     rsp, 60h
 * 00000001C01DB030: mov     rsi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C01DB037: mov     bl, r8b
 * 00000001C01DB03A: movzx   edi, [rsp+68h+arg_30]
 * 00000001C01DB042: mov     ebp, 4
 * 00000001C01DB047: test    dl, dl
 * 00000001C01DB049: jz      short loc_1C01DB093
 * 00000001C01DB04B: and     qword ptr [r11-18h], 0
 * 00000001C01DB050: lea     rdx, [r11+58h]
 * 00000001C01DB054: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01DB05B: mov     r9d, edi
 * 00000001C01DB05E: mov     r8, [rsp+68h+arg_38]
 * 00000001C01DB066: mov     [r11-20h], rbp
 * 00000001C01DB06A: mov     [r11-28h], rdx
 * 00000001C01DB06E: lea     rdx, [r11+50h]
 * 00000001C01DB072: mov     qword ptr [r11-30h], 8
 * 00000001C01DB07A: mov     [r11-38h], rdx
 * 00000001C01DB07E: lea     rdx, [r11+48h]
 * 00000001C01DB082: mov     [r11-40h], rbp
 * 00000001C01DB086: mov     [r11-48h], rdx
 * 00000001C01DB08A: lea     edx, [rbp+27h]
 * 00000001C01DB08D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01DB093: test    bl, bl
 * 00000001C01DB095: jz      short loc_1C01DB103
 * 00000001C01DB097: and     [rsp+68h+var_10], 0
 * 00000001C01DB09D: lea     rax, [rsp+68h+arg_50]
 * 00000001C01DB0A5: mov     r9, [rsp+68h+arg_38]
 * 00000001C01DB0AD: mov     rcx, rsi
 * 00000001C01DB0B0: mov     r8d, [rsp+68h+arg_28]
 * 00000001C01DB0B8: movzx   edx, [rsp+68h+arg_20]
 * 00000001C01DB0C0: mov     [rsp+68h+var_18], rbp
 * 00000001C01DB0C5: mov     [rsp+68h+var_20], rax
 * 00000001C01DB0CA: lea     rax, [rsp+68h+arg_48]
 * 00000001C01DB0D2: mov     [rsp+68h+var_28], 8
 * 00000001C01DB0DB: mov     [rsp+68h+var_30], rax
 * 00000001C01DB0E0: lea     rax, [rsp+68h+arg_40]
 * 00000001C01DB0E8: mov     [rsp+68h+var_38], rbp
 * 00000001C01DB0ED: mov     [rsp+68h+var_40], rax
 * 00000001C01DB0F2: mov     [rsp+68h+var_48], di
 * 00000001C01DB0F7: call    cs:__imp_WppAutoLogTrace
 * 00000001C01DB0FE: nop     dword ptr [rax+rax+00h]
 * 00000001C01DB103: lea     r11, [rsp+68h+var_8]
 * 00000001C01DB108: mov     rbx, [r11+10h]
 * 00000001C01DB10C: mov     rbp, [r11+18h]
 * 00000001C01DB110: mov     rsi, [r11+20h]
 * 00000001C01DB114: mov     rsp, r11
 * 00000001C01DB117: pop     rdi
 * 00000001C01DB118: retn
 */
