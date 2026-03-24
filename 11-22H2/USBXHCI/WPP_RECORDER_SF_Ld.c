/*
 * XREFs of WPP_RECORDER_SF_Ld @ 0x1C005277C
 * Callers:
 *     SecureChannel_SendRequestSynchronously @ 0x1C0052370 (SecureChannel_SendRequestSynchronously.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Ld @ 0x1C005277C
 * Reason: Hex-Rays returned no pseudocode for 0x1C005277C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C005277C: mov     r11, rsp
 * 00000001C005277F: mov     [r11+8], rbx
 * 00000001C0052783: mov     [r11+10h], rsi
 * 00000001C0052787: push    rdi
 * 00000001C0052788: sub     rsp, 50h
 * 00000001C005278C: mov     rbx, rcx
 * 00000001C005278F: mov     esi, 10h
 * 00000001C0052794: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C005279B: lea     edi, [rsi-0Ch]
 * 00000001C005279E: test    dword ptr [rcx+2Ch], 40000h
 * 00000001C00527A5: jz      short loc_1C00527E8
 * 00000001C00527A7: cmp     byte ptr [rcx+29h], 2
 * 00000001C00527AB: jb      short loc_1C00527E8
 * 00000001C00527AD: and     qword ptr [r11-18h], 0
 * 00000001C00527B2: lea     rdx, [r11+38h]
 * 00000001C00527B6: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00527BD: lea     r8, WPP_6c69e57299f2371bca16af19cce5473c_Traceguids
 * 00000001C00527C4: mov     rcx, [rcx+18h]
 * 00000001C00527C8: mov     r9d, esi
 * 00000001C00527CB: mov     [r11-20h], rdi
 * 00000001C00527CF: mov     [r11-28h], rdx
 * 00000001C00527D3: lea     rdx, [r11+30h]
 * 00000001C00527D7: mov     [r11-30h], rdi
 * 00000001C00527DB: mov     [r11-38h], rdx
 * 00000001C00527DF: lea     edx, [rsi+1Bh]
 * 00000001C00527E2: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00527E8: and     [rsp+58h+var_10], 0
 * 00000001C00527EE: lea     rax, [rsp+58h+arg_30]
 * 00000001C00527F6: mov     [rsp+58h+var_18], rdi
 * 00000001C00527FB: lea     r9, WPP_6c69e57299f2371bca16af19cce5473c_Traceguids
 * 00000001C0052802: mov     [rsp+58h+var_20], rax
 * 00000001C0052807: mov     edx, 2
 * 00000001C005280C: lea     rax, [rsp+58h+arg_28]
 * 00000001C0052814: mov     [rsp+58h+var_28], rdi
 * 00000001C0052819: mov     [rsp+58h+var_30], rax
 * 00000001C005281E: mov     rcx, rbx
 * 00000001C0052821: mov     [rsp+58h+var_38], si
 * 00000001C0052826: lea     r8d, [rdx+11h]
 * 00000001C005282A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0052831: nop     dword ptr [rax+rax+00h]
 * 00000001C0052836: mov     rbx, [rsp+58h+arg_0]
 * 00000001C005283B: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0052840: add     rsp, 50h
 * 00000001C0052844: pop     rdi
 * 00000001C0052845: retn
 */
