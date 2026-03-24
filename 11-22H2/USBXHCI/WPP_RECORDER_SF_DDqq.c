/*
 * XREFs of WPP_RECORDER_SF_ddqq @ 0x1C004A1EC
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008C10 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddqq @ 0x1C004A1EC
 * Reason: Hex-Rays returned no pseudocode for 0x1C004A1EC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004A1EC: mov     r11, rsp
 * 00000001C004A1EF: mov     [r11+8], rbx
 * 00000001C004A1F3: mov     [r11+10h], rbp
 * 00000001C004A1F7: mov     [r11+18h], rsi
 * 00000001C004A1FB: push    rdi
 * 00000001C004A1FC: sub     rsp, 70h
 * 00000001C004A200: mov     ebp, 42h ; 'B'
 * 00000001C004A205: mov     rbx, rcx
 * 00000001C004A208: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004A20F: lea     edi, [rbp-3Ah]
 * 00000001C004A212: test    dword ptr [rcx+2Ch], 800h
 * 00000001C004A219: lea     esi, [rbp-3Eh]
 * 00000001C004A21C: jz      short loc_1C004A277
 * 00000001C004A21E: cmp     byte ptr [rcx+29h], 5
 * 00000001C004A222: jb      short loc_1C004A277
 * 00000001C004A224: and     qword ptr [r11-18h], 0
 * 00000001C004A229: lea     rdx, [r11+48h]
 * 00000001C004A22D: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004A234: lea     r8, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C004A23B: mov     rcx, [rcx+18h]
 * 00000001C004A23F: mov     r9d, ebp
 * 00000001C004A242: mov     [r11-20h], rdi
 * 00000001C004A246: mov     [r11-28h], rdx
 * 00000001C004A24A: lea     rdx, [r11+40h]
 * 00000001C004A24E: mov     [r11-30h], rdi
 * 00000001C004A252: mov     [r11-38h], rdx
 * 00000001C004A256: lea     rdx, [r11+38h]
 * 00000001C004A25A: mov     [r11-40h], rsi
 * 00000001C004A25E: mov     [r11-48h], rdx
 * 00000001C004A262: lea     rdx, [r11+30h]
 * 00000001C004A266: mov     [r11-50h], rsi
 * 00000001C004A26A: mov     [r11-58h], rdx
 * 00000001C004A26E: lea     edx, [rbp-17h]
 * 00000001C004A271: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004A277: and     [rsp+78h+var_10], 0
 * 00000001C004A27D: lea     rax, [rsp+78h+arg_40]
 * 00000001C004A285: mov     [rsp+78h+var_18], rdi
 * 00000001C004A28A: lea     r9, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C004A291: mov     [rsp+78h+var_20], rax
 * 00000001C004A296: mov     edx, 5
 * 00000001C004A29B: mov     [rsp+78h+var_28], rdi
 * 00000001C004A2A0: lea     rax, [rsp+78h+arg_38]
 * 00000001C004A2A8: mov     [rsp+78h+var_30], rax
 * 00000001C004A2AD: mov     rcx, rbx
 * 00000001C004A2B0: mov     [rsp+78h+var_38], rsi
 * 00000001C004A2B5: lea     rax, [rsp+78h+arg_30]
 * 00000001C004A2BD: mov     [rsp+78h+var_40], rax
 * 00000001C004A2C2: lea     r8d, [rdx+7]
 * 00000001C004A2C6: lea     rax, [rsp+78h+arg_28]
 * 00000001C004A2CE: mov     [rsp+78h+var_48], rsi
 * 00000001C004A2D3: mov     [rsp+78h+var_50], rax
 * 00000001C004A2D8: mov     [rsp+78h+var_58], bp
 * 00000001C004A2DD: call    cs:__imp_WppAutoLogTrace
 * 00000001C004A2E4: nop     dword ptr [rax+rax+00h]
 * 00000001C004A2E9: lea     r11, [rsp+78h+var_8]
 * 00000001C004A2EE: mov     rbx, [r11+10h]
 * 00000001C004A2F2: mov     rbp, [r11+18h]
 * 00000001C004A2F6: mov     rsi, [r11+20h]
 * 00000001C004A2FA: mov     rsp, r11
 * 00000001C004A2FD: pop     rdi
 * 00000001C004A2FE: retn
 */
