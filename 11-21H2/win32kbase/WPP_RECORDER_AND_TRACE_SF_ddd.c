/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dDD @ 0x1C0189090
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0187718 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0187C10 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C0187FE0 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMIDEInjectDeviceInput @ 0x1C019D008 (RIMIDEInjectDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01AF120 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessPointerDeviceContact @ 0x1C01B2140 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_dDD @ 0x1C0189090
 * Reason: Hex-Rays returned no pseudocode for 0x1C0189090
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0189090: mov     r11, rsp
 * 00000001C0189093: mov     [r11+8], rbx
 * 00000001C0189097: mov     [r11+10h], rbp
 * 00000001C018909B: mov     [r11+18h], rsi
 * 00000001C018909F: push    rdi
 * 00000001C01890A0: sub     rsp, 60h
 * 00000001C01890A4: mov     rsi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C01890AB: mov     bl, r8b
 * 00000001C01890AE: movzx   edi, [rsp+68h+arg_30]
 * 00000001C01890B6: mov     ebp, 4
 * 00000001C01890BB: test    dl, dl
 * 00000001C01890BD: jz      short loc_1C0189103
 * 00000001C01890BF: and     qword ptr [r11-18h], 0
 * 00000001C01890C4: lea     rdx, [r11+58h]
 * 00000001C01890C8: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01890CF: mov     r9d, edi
 * 00000001C01890D2: mov     r8, [rsp+68h+arg_38]
 * 00000001C01890DA: mov     [r11-20h], rbp
 * 00000001C01890DE: mov     [r11-28h], rdx
 * 00000001C01890E2: lea     rdx, [r11+50h]
 * 00000001C01890E6: mov     [r11-30h], rbp
 * 00000001C01890EA: mov     [r11-38h], rdx
 * 00000001C01890EE: lea     rdx, [r11+48h]
 * 00000001C01890F2: mov     [r11-40h], rbp
 * 00000001C01890F6: mov     [r11-48h], rdx
 * 00000001C01890FA: lea     edx, [rbp+27h]
 * 00000001C01890FD: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0189103: test    bl, bl
 * 00000001C0189105: jz      short loc_1C018916D
 * 00000001C0189107: and     [rsp+68h+var_10], 0
 * 00000001C018910D: lea     rax, [rsp+68h+arg_50]
 * 00000001C0189115: mov     r9, [rsp+68h+arg_38]
 * 00000001C018911D: mov     r8d, 1
 * 00000001C0189123: movzx   edx, [rsp+68h+arg_20]
 * 00000001C018912B: mov     rcx, rsi
 * 00000001C018912E: mov     [rsp+68h+var_18], rbp
 * 00000001C0189133: mov     [rsp+68h+var_20], rax
 * 00000001C0189138: lea     rax, [rsp+68h+arg_48]
 * 00000001C0189140: mov     [rsp+68h+var_28], rbp
 * 00000001C0189145: mov     [rsp+68h+var_30], rax
 * 00000001C018914A: lea     rax, [rsp+68h+arg_40]
 * 00000001C0189152: mov     [rsp+68h+var_38], rbp
 * 00000001C0189157: mov     [rsp+68h+var_40], rax
 * 00000001C018915C: mov     [rsp+68h+var_48], di
 * 00000001C0189161: call    cs:__imp_WppAutoLogTrace
 * 00000001C0189168: nop     dword ptr [rax+rax+00h]
 * 00000001C018916D: lea     r11, [rsp+68h+var_8]
 * 00000001C0189172: mov     rbx, [r11+10h]
 * 00000001C0189176: mov     rbp, [r11+18h]
 * 00000001C018917A: mov     rsi, [r11+20h]
 * 00000001C018917E: mov     rsp, r11
 * 00000001C0189181: pop     rdi
 * 00000001C0189182: retn
 */
