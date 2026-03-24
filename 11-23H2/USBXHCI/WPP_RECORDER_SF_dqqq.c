/*
 * XREFs of WPP_RECORDER_SF_dqqq @ 0x1C004A790
 * Callers:
 *     UsbDevice_EvtUsbDeviceCleanupCallback @ 0x1C0048CF0 (UsbDevice_EvtUsbDeviceCleanupCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqqq @ 0x1C004A790
 * Reason: Hex-Rays returned no pseudocode for 0x1C004A790
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004A790: mov     r11, rsp
 * 00000001C004A793: mov     [r11+8], rbx
 * 00000001C004A797: mov     [r11+10h], rbp
 * 00000001C004A79B: push    rsi
 * 00000001C004A79C: sub     rsp, 70h
 * 00000001C004A7A0: mov     rbx, rcx
 * 00000001C004A7A3: mov     ebp, 0Dh
 * 00000001C004A7A8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004A7AF: lea     esi, [rbp-5]
 * 00000001C004A7B2: test    dword ptr [rcx+2Ch], 800h
 * 00000001C004A7B9: jz      short loc_1C004A818
 * 00000001C004A7BB: cmp     byte ptr [rcx+29h], 4
 * 00000001C004A7BF: jb      short loc_1C004A818
 * 00000001C004A7C1: and     qword ptr [r11-18h], 0
 * 00000001C004A7C6: lea     rdx, [r11+48h]
 * 00000001C004A7CA: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004A7D1: lea     r8, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C004A7D8: mov     rcx, [rcx+18h]
 * 00000001C004A7DC: mov     r9d, ebp
 * 00000001C004A7DF: mov     [r11-20h], rsi
 * 00000001C004A7E3: mov     [r11-28h], rdx
 * 00000001C004A7E7: lea     rdx, [r11+40h]
 * 00000001C004A7EB: mov     [r11-30h], rsi
 * 00000001C004A7EF: mov     [r11-38h], rdx
 * 00000001C004A7F3: lea     rdx, [r11+38h]
 * 00000001C004A7F7: mov     [r11-40h], rsi
 * 00000001C004A7FB: mov     [r11-48h], rdx
 * 00000001C004A7FF: lea     rdx, [r11+30h]
 * 00000001C004A803: mov     qword ptr [r11-50h], 4
 * 00000001C004A80B: mov     [r11-58h], rdx
 * 00000001C004A80F: lea     edx, [rbp+1Eh]
 * 00000001C004A812: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004A818: and     [rsp+78h+var_10], 0
 * 00000001C004A81E: lea     rax, [rsp+78h+arg_40]
 * 00000001C004A826: mov     [rsp+78h+var_18], rsi
 * 00000001C004A82B: lea     r9, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C004A832: mov     [rsp+78h+var_20], rax
 * 00000001C004A837: mov     edx, 4
 * 00000001C004A83C: mov     [rsp+78h+var_28], rsi
 * 00000001C004A841: lea     rax, [rsp+78h+arg_38]
 * 00000001C004A849: mov     [rsp+78h+var_30], rax
 * 00000001C004A84E: mov     rcx, rbx
 * 00000001C004A851: mov     [rsp+78h+var_38], rsi
 * 00000001C004A856: lea     rax, [rsp+78h+arg_30]
 * 00000001C004A85E: mov     [rsp+78h+var_40], rax
 * 00000001C004A863: lea     r8d, [rdx+8]
 * 00000001C004A867: lea     rax, [rsp+78h+arg_28]
 * 00000001C004A86F: mov     [rsp+78h+var_48], 4
 * 00000001C004A878: mov     [rsp+78h+var_50], rax
 * 00000001C004A87D: mov     [rsp+78h+var_58], bp
 * 00000001C004A882: call    cs:__imp_WppAutoLogTrace
 * 00000001C004A889: nop     dword ptr [rax+rax+00h]
 * 00000001C004A88E: lea     r11, [rsp+78h+var_8]
 * 00000001C004A893: mov     rbx, [r11+10h]
 * 00000001C004A897: mov     rbp, [r11+18h]
 * 00000001C004A89B: mov     rsp, r11
 * 00000001C004A89E: pop     rsi
 * 00000001C004A89F: retn
 */
