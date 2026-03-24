/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C00059CC
 * Callers:
 *     MouseClassCleanup @ 0x1C0001010 (MouseClassCleanup.c)
 *     MouseClassClose @ 0x1C0001180 (MouseClassClose.c)
 *     MouseClassCreate @ 0x1C00012F0 (MouseClassCreate.c)
 *     MouseClassServiceCallback @ 0x1C0001AC0 (MouseClassServiceCallback.c)
 *     MouseClassRead @ 0x1C0001F40 (MouseClassRead.c)
 *     MouInitializeDataQueue @ 0x1C0002830 (MouInitializeDataQueue.c)
 *     MouseClassFlush @ 0x1C0004C90 (MouseClassFlush.c)
 *     MouEnableDisablePort @ 0x1C000C010 (MouEnableDisablePort.c)
 *     MouseClassDeviceControl @ 0x1C000C1D0 (MouseClassDeviceControl.c)
 *     MouseClassFindMorePorts @ 0x1C000C3B0 (MouseClassFindMorePorts.c)
 *     MouDeterminePortsServiced @ 0x1C000C910 (MouDeterminePortsServiced.c)
 *     MouCreateClassObject @ 0x1C000CA40 (MouCreateClassObject.c)
 *     MouSendConnectRequest @ 0x1C000CD90 (MouSendConnectRequest.c)
 *     MouConfiguration @ 0x1C000F080 (MouConfiguration.c)
 *     DriverEntry @ 0x1C000F2D0 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002F10 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C00059CC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00059CC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00059CC: mov     [rsp+arg_0], rbx
 * 00000001C00059D1: mov     [rsp+arg_8], rbp
 * 00000001C00059D6: mov     [rsp+arg_10], rsi
 * 00000001C00059DB: push    rdi
 * 00000001C00059DC: push    r14
 * 00000001C00059DE: push    r15
 * 00000001C00059E0: sub     rsp, 30h
 * 00000001C00059E4: mov     r14d, r8d
 * 00000001C00059E7: mov     r15, rcx
 * 00000001C00059EA: mov     edi, r8d
 * 00000001C00059ED: shr     rdi, 10h
 * 00000001C00059F1: movzx   ebp, r9w
 * 00000001C00059F5: lea     ebx, [r14-1]
 * 00000001C00059F9: movzx   esi, dl
 * 00000001C00059FC: mov     r10d, ebx
 * 00000001C00059FF: and     ebx, 1Fh
 * 00000001C0005A02: shr     r10, 5
 * 00000001C0005A06: lea     rax, [rdi+rdi*4]
 * 00000001C0005A0A: and     r10d, 7FFh
 * 00000001C0005A11: lea     r11, [r10+rax*4]
 * 00000001C0005A15: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0005A1C: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0005A21: bt      eax, ebx
 * 00000001C0005A24: jnb     short loc_1C0005A5B
 * 00000001C0005A26: lea     rcx, [rdi+rdi*4]
 * 00000001C0005A2A: add     rcx, rcx
 * 00000001C0005A2D: cmp     [r10+rcx*8+29h], sil
 * 00000001C0005A32: jb      short loc_1C0005A5B
 * 00000001C0005A34: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0005A3B: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0005A42: and     [rsp+48h+var_28], 0
 * 00000001C0005A48: mov     r9d, ebp
 * 00000001C0005A4B: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0005A50: mov     edx, 2Bh ; '+'
 * 00000001C0005A55: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005A5B: and     [rsp+48h+var_20], 0
 * 00000001C0005A61: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0005A68: mov     r8d, r14d
 * 00000001C0005A6B: mov     word ptr [rsp+48h+var_28], bp
 * 00000001C0005A70: mov     edx, esi
 * 00000001C0005A72: mov     rcx, r15
 * 00000001C0005A75: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005A7C: nop     dword ptr [rax+rax+00h]
 * 00000001C0005A81: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0005A86: mov     rbp, [rsp+48h+arg_8]
 * 00000001C0005A8B: mov     rsi, [rsp+48h+arg_10]
 * 00000001C0005A90: add     rsp, 30h
 * 00000001C0005A94: pop     r15
 * 00000001C0005A96: pop     r14
 * 00000001C0005A98: pop     rdi
 * 00000001C0005A99: retn
 */
