/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C000652C
 * Callers:
 *     KeyboardClassRead @ 0x1C0001990 (KeyboardClassRead.c)
 *     KeyboardClassClose @ 0x1C0001C20 (KeyboardClassClose.c)
 *     KeyboardClassCreate @ 0x1C0001D90 (KeyboardClassCreate.c)
 *     KeyboardClassCleanup @ 0x1C00027A0 (KeyboardClassCleanup.c)
 *     KbdInitializeDataQueue @ 0x1C00029A0 (KbdInitializeDataQueue.c)
 *     KeyboardClassFlush @ 0x1C0005320 (KeyboardClassFlush.c)
 *     KeyboardClassServiceCallback @ 0x1C00059F0 (KeyboardClassServiceCallback.c)
 *     KbdEnableDisablePort @ 0x1C000D010 (KbdEnableDisablePort.c)
 *     KeyboardClassDeviceControl @ 0x1C000D190 (KeyboardClassDeviceControl.c)
 *     KeyboardAddDeviceEx @ 0x1C000DBB0 (KeyboardAddDeviceEx.c)
 *     KbdCreateClassObject @ 0x1C000DDB0 (KbdCreateClassObject.c)
 *     KeyboardClassFindMorePorts @ 0x1C000E0D0 (KeyboardClassFindMorePorts.c)
 *     KbdDeterminePortsServiced @ 0x1C000E370 (KbdDeterminePortsServiced.c)
 *     KbdSendConnectRequest @ 0x1C000F2F0 (KbdSendConnectRequest.c)
 *     DriverEntry @ 0x1C0011080 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00031C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C000652C
 * Reason: Hex-Rays returned no pseudocode for 0x1C000652C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000652C: mov     [rsp+arg_0], rbx
 * 00000001C0006531: mov     [rsp+arg_8], rbp
 * 00000001C0006536: mov     [rsp+arg_10], rsi
 * 00000001C000653B: push    rdi
 * 00000001C000653C: push    r14
 * 00000001C000653E: push    r15
 * 00000001C0006540: sub     rsp, 30h
 * 00000001C0006544: mov     r14d, r8d
 * 00000001C0006547: mov     r15, rcx
 * 00000001C000654A: mov     edi, r8d
 * 00000001C000654D: shr     rdi, 10h
 * 00000001C0006551: movzx   ebp, r9w
 * 00000001C0006555: lea     ebx, [r14-1]
 * 00000001C0006559: movzx   esi, dl
 * 00000001C000655C: mov     r10d, ebx
 * 00000001C000655F: and     ebx, 1Fh
 * 00000001C0006562: shr     r10, 5
 * 00000001C0006566: lea     rax, [rdi+rdi*4]
 * 00000001C000656A: and     r10d, 7FFh
 * 00000001C0006571: lea     r11, [r10+rax*4]
 * 00000001C0006575: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C000657C: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0006581: bt      eax, ebx
 * 00000001C0006584: jnb     short loc_1C00065BB
 * 00000001C0006586: lea     rcx, [rdi+rdi*4]
 * 00000001C000658A: add     rcx, rcx
 * 00000001C000658D: cmp     [r10+rcx*8+29h], sil
 * 00000001C0006592: jb      short loc_1C00065BB
 * 00000001C0006594: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000659B: lea     r8, WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids
 * 00000001C00065A2: and     [rsp+48h+var_28], 0
 * 00000001C00065A8: mov     r9d, ebp
 * 00000001C00065AB: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00065B0: mov     edx, 2Bh ; '+'
 * 00000001C00065B5: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00065BB: and     [rsp+48h+var_20], 0
 * 00000001C00065C1: lea     r9, WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids
 * 00000001C00065C8: mov     r8d, r14d
 * 00000001C00065CB: mov     word ptr [rsp+48h+var_28], bp
 * 00000001C00065D0: mov     edx, esi
 * 00000001C00065D2: mov     rcx, r15
 * 00000001C00065D5: call    cs:__imp_WppAutoLogTrace
 * 00000001C00065DC: nop     dword ptr [rax+rax+00h]
 * 00000001C00065E1: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00065E6: mov     rbp, [rsp+48h+arg_8]
 * 00000001C00065EB: mov     rsi, [rsp+48h+arg_10]
 * 00000001C00065F0: add     rsp, 30h
 * 00000001C00065F4: pop     r15
 * 00000001C00065F6: pop     r14
 * 00000001C00065F8: pop     rdi
 * 00000001C00065F9: retn
 */
