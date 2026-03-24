/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C00061CC
 * Callers:
 *     KeyboardClassCleanup @ 0x1C0001990 (KeyboardClassCleanup.c)
 *     KeyboardClassRead @ 0x1C0001AE0 (KeyboardClassRead.c)
 *     KeyboardClassClose @ 0x1C0001C90 (KeyboardClassClose.c)
 *     KeyboardClassCreate @ 0x1C0001E00 (KeyboardClassCreate.c)
 *     KbdInitializeDataQueue @ 0x1C0002900 (KbdInitializeDataQueue.c)
 *     KeyboardClassFlush @ 0x1C0004FB0 (KeyboardClassFlush.c)
 *     KeyboardClassServiceCallback @ 0x1C0005680 (KeyboardClassServiceCallback.c)
 *     KeyboardClassDeviceControl @ 0x1C000D110 (KeyboardClassDeviceControl.c)
 *     KbdEnableDisablePort @ 0x1C000D3D0 (KbdEnableDisablePort.c)
 *     KeyboardClassFindMorePorts @ 0x1C000D5A0 (KeyboardClassFindMorePorts.c)
 *     KeyboardAddDeviceEx @ 0x1C000D9F0 (KeyboardAddDeviceEx.c)
 *     KbdDeterminePortsServiced @ 0x1C000DBF0 (KbdDeterminePortsServiced.c)
 *     KbdCreateClassObject @ 0x1C000DD20 (KbdCreateClassObject.c)
 *     KbdSendConnectRequest @ 0x1C000F340 (KbdSendConnectRequest.c)
 *     DriverEntry @ 0x1C0010080 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002EE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C00061CC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00061CC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00061CC: mov     [rsp+arg_0], rbx
 * 00000001C00061D1: mov     [rsp+arg_8], rbp
 * 00000001C00061D6: mov     [rsp+arg_10], rsi
 * 00000001C00061DB: push    rdi
 * 00000001C00061DC: push    r14
 * 00000001C00061DE: push    r15
 * 00000001C00061E0: sub     rsp, 30h
 * 00000001C00061E4: mov     r14d, r8d
 * 00000001C00061E7: mov     r15, rcx
 * 00000001C00061EA: mov     edi, r8d
 * 00000001C00061ED: shr     rdi, 10h
 * 00000001C00061F1: movzx   ebp, r9w
 * 00000001C00061F5: lea     ebx, [r14-1]
 * 00000001C00061F9: movzx   esi, dl
 * 00000001C00061FC: mov     r10d, ebx
 * 00000001C00061FF: and     ebx, 1Fh
 * 00000001C0006202: shr     r10, 5
 * 00000001C0006206: lea     rax, [rdi+rdi*4]
 * 00000001C000620A: and     r10d, 7FFh
 * 00000001C0006211: lea     r11, [r10+rax*4]
 * 00000001C0006215: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C000621C: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0006221: bt      eax, ebx
 * 00000001C0006224: jnb     short loc_1C000625B
 * 00000001C0006226: lea     rcx, [rdi+rdi*4]
 * 00000001C000622A: add     rcx, rcx
 * 00000001C000622D: cmp     [r10+rcx*8+29h], sil
 * 00000001C0006232: jb      short loc_1C000625B
 * 00000001C0006234: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000623B: lea     r8, WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids
 * 00000001C0006242: and     [rsp+48h+var_28], 0
 * 00000001C0006248: mov     r9d, ebp
 * 00000001C000624B: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0006250: mov     edx, 2Bh ; '+'
 * 00000001C0006255: call    cs:__guard_dispatch_icall_fptr
 * 00000001C000625B: and     [rsp+48h+var_20], 0
 * 00000001C0006261: lea     r9, WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids
 * 00000001C0006268: mov     r8d, r14d
 * 00000001C000626B: mov     word ptr [rsp+48h+var_28], bp
 * 00000001C0006270: mov     edx, esi
 * 00000001C0006272: mov     rcx, r15
 * 00000001C0006275: call    cs:__imp_WppAutoLogTrace
 * 00000001C000627C: nop     dword ptr [rax+rax+00h]
 * 00000001C0006281: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0006286: mov     rbp, [rsp+48h+arg_8]
 * 00000001C000628B: mov     rsi, [rsp+48h+arg_10]
 * 00000001C0006290: add     rsp, 30h
 * 00000001C0006294: pop     r15
 * 00000001C0006296: pop     r14
 * 00000001C0006298: pop     rdi
 * 00000001C0006299: retn
 */
