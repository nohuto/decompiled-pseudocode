/*
 * XREFs of WPP_RECORDER_SF_dqqq @ 0x1C004A650
 * Callers:
 *     UsbDevice_EvtUsbDeviceCleanupCallback @ 0x1C0048BB0 (UsbDevice_EvtUsbDeviceCleanupCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqqq @ 0x1C004A650
 * Reason: Hex-Rays returned no pseudocode for 0x1C004A650
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004A650: mov     r11, rsp
 * 00000001C004A653: mov     [r11+8], rbx
 * 00000001C004A657: mov     [r11+10h], rbp
 * 00000001C004A65B: push    rsi
 * 00000001C004A65C: sub     rsp, 70h
 * 00000001C004A660: mov     rbx, rcx
 * 00000001C004A663: mov     ebp, 0Dh
 * 00000001C004A668: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004A66F: lea     esi, [rbp-5]
 * 00000001C004A672: test    dword ptr [rcx+2Ch], 800h
 * 00000001C004A679: jz      short loc_1C004A6D8
 * 00000001C004A67B: cmp     byte ptr [rcx+29h], 4
 * 00000001C004A67F: jb      short loc_1C004A6D8
 * 00000001C004A681: and     qword ptr [r11-18h], 0
 * 00000001C004A686: lea     rdx, [r11+48h]
 * 00000001C004A68A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004A691: lea     r8, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C004A698: mov     rcx, [rcx+18h]
 * 00000001C004A69C: mov     r9d, ebp
 * 00000001C004A69F: mov     [r11-20h], rsi
 * 00000001C004A6A3: mov     [r11-28h], rdx
 * 00000001C004A6A7: lea     rdx, [r11+40h]
 * 00000001C004A6AB: mov     [r11-30h], rsi
 * 00000001C004A6AF: mov     [r11-38h], rdx
 * 00000001C004A6B3: lea     rdx, [r11+38h]
 * 00000001C004A6B7: mov     [r11-40h], rsi
 * 00000001C004A6BB: mov     [r11-48h], rdx
 * 00000001C004A6BF: lea     rdx, [r11+30h]
 * 00000001C004A6C3: mov     qword ptr [r11-50h], 4
 * 00000001C004A6CB: mov     [r11-58h], rdx
 * 00000001C004A6CF: lea     edx, [rbp+1Eh]
 * 00000001C004A6D2: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004A6D8: and     [rsp+78h+var_10], 0
 * 00000001C004A6DE: lea     rax, [rsp+78h+arg_40]
 * 00000001C004A6E6: mov     [rsp+78h+var_18], rsi
 * 00000001C004A6EB: lea     r9, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C004A6F2: mov     [rsp+78h+var_20], rax
 * 00000001C004A6F7: mov     edx, 4
 * 00000001C004A6FC: mov     [rsp+78h+var_28], rsi
 * 00000001C004A701: lea     rax, [rsp+78h+arg_38]
 * 00000001C004A709: mov     [rsp+78h+var_30], rax
 * 00000001C004A70E: mov     rcx, rbx
 * 00000001C004A711: mov     [rsp+78h+var_38], rsi
 * 00000001C004A716: lea     rax, [rsp+78h+arg_30]
 * 00000001C004A71E: mov     [rsp+78h+var_40], rax
 * 00000001C004A723: lea     r8d, [rdx+8]
 * 00000001C004A727: lea     rax, [rsp+78h+arg_28]
 * 00000001C004A72F: mov     [rsp+78h+var_48], 4
 * 00000001C004A738: mov     [rsp+78h+var_50], rax
 * 00000001C004A73D: mov     [rsp+78h+var_58], bp
 * 00000001C004A742: call    cs:__imp_WppAutoLogTrace
 * 00000001C004A749: nop     dword ptr [rax+rax+00h]
 * 00000001C004A74E: lea     r11, [rsp+78h+var_8]
 * 00000001C004A753: mov     rbx, [r11+10h]
 * 00000001C004A757: mov     rbp, [r11+18h]
 * 00000001C004A75B: mov     rsp, r11
 * 00000001C004A75E: pop     rsi
 * 00000001C004A75F: retn
 */
