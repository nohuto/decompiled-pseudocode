/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0005CCC
 * Callers:
 *     MouseClassCleanup @ 0x1C00016D0 (MouseClassCleanup.c)
 *     MouseClassRead @ 0x1C0001850 (MouseClassRead.c)
 *     MouseClassClose @ 0x1C0001B00 (MouseClassClose.c)
 *     MouseClassCreate @ 0x1C0001C70 (MouseClassCreate.c)
 *     MouInitializeDataQueue @ 0x1C00022F0 (MouInitializeDataQueue.c)
 *     MouseClassFlush @ 0x1C0004AB0 (MouseClassFlush.c)
 *     MouseClassServiceCallback @ 0x1C0005190 (MouseClassServiceCallback.c)
 *     MouseClassDeviceControl @ 0x1C000D010 (MouseClassDeviceControl.c)
 *     MouEnableDisablePort @ 0x1C000D230 (MouEnableDisablePort.c)
 *     MouSendConnectRequest @ 0x1C000D660 (MouSendConnectRequest.c)
 *     MouCreateClassObject @ 0x1C000D790 (MouCreateClassObject.c)
 *     MouDeterminePortsServiced @ 0x1C000DAE0 (MouDeterminePortsServiced.c)
 *     MouseClassFindMorePorts @ 0x1C000DD10 (MouseClassFindMorePorts.c)
 *     MouConfiguration @ 0x1C0011080 (MouConfiguration.c)
 *     DriverEntry @ 0x1C00112E0 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002B60 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C0005CCC
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005CCC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005CCC: mov     [rsp+arg_0], rbx
 * 00000001C0005CD1: mov     [rsp+arg_8], rbp
 * 00000001C0005CD6: mov     [rsp+arg_10], rsi
 * 00000001C0005CDB: push    rdi
 * 00000001C0005CDC: push    r14
 * 00000001C0005CDE: push    r15
 * 00000001C0005CE0: sub     rsp, 30h
 * 00000001C0005CE4: mov     r14d, r8d
 * 00000001C0005CE7: mov     r15, rcx
 * 00000001C0005CEA: mov     edi, r8d
 * 00000001C0005CED: shr     rdi, 10h
 * 00000001C0005CF1: movzx   ebp, r9w
 * 00000001C0005CF5: lea     ebx, [r14-1]
 * 00000001C0005CF9: movzx   esi, dl
 * 00000001C0005CFC: mov     r10d, ebx
 * 00000001C0005CFF: and     ebx, 1Fh
 * 00000001C0005D02: shr     r10, 5
 * 00000001C0005D06: lea     rax, [rdi+rdi*4]
 * 00000001C0005D0A: and     r10d, 7FFh
 * 00000001C0005D11: lea     r11, [r10+rax*4]
 * 00000001C0005D15: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0005D1C: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0005D21: bt      eax, ebx
 * 00000001C0005D24: jnb     short loc_1C0005D5B
 * 00000001C0005D26: lea     rcx, [rdi+rdi*4]
 * 00000001C0005D2A: add     rcx, rcx
 * 00000001C0005D2D: cmp     [r10+rcx*8+29h], sil
 * 00000001C0005D32: jb      short loc_1C0005D5B
 * 00000001C0005D34: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0005D3B: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0005D42: and     [rsp+48h+var_28], 0
 * 00000001C0005D48: mov     r9d, ebp
 * 00000001C0005D4B: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0005D50: mov     edx, 2Bh ; '+'
 * 00000001C0005D55: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005D5B: and     [rsp+48h+var_20], 0
 * 00000001C0005D61: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0005D68: mov     r8d, r14d
 * 00000001C0005D6B: mov     word ptr [rsp+48h+var_28], bp
 * 00000001C0005D70: mov     edx, esi
 * 00000001C0005D72: mov     rcx, r15
 * 00000001C0005D75: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005D7C: nop     dword ptr [rax+rax+00h]
 * 00000001C0005D81: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0005D86: mov     rbp, [rsp+48h+arg_8]
 * 00000001C0005D8B: mov     rsi, [rsp+48h+arg_10]
 * 00000001C0005D90: add     rsp, 30h
 * 00000001C0005D94: pop     r15
 * 00000001C0005D96: pop     r14
 * 00000001C0005D98: pop     rdi
 * 00000001C0005D99: retn
 */
