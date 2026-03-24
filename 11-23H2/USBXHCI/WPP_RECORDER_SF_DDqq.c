/*
 * XREFs of WPP_RECORDER_SF_ddqq @ 0x1C004A32C
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008BE0 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddqq @ 0x1C004A32C
 * Reason: Hex-Rays returned no pseudocode for 0x1C004A32C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004A32C: mov     r11, rsp
 * 00000001C004A32F: mov     [r11+8], rbx
 * 00000001C004A333: mov     [r11+10h], rbp
 * 00000001C004A337: mov     [r11+18h], rsi
 * 00000001C004A33B: push    rdi
 * 00000001C004A33C: sub     rsp, 70h
 * 00000001C004A340: mov     ebp, 42h ; 'B'
 * 00000001C004A345: mov     rbx, rcx
 * 00000001C004A348: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004A34F: lea     edi, [rbp-3Ah]
 * 00000001C004A352: test    dword ptr [rcx+2Ch], 800h
 * 00000001C004A359: lea     esi, [rbp-3Eh]
 * 00000001C004A35C: jz      short loc_1C004A3B7
 * 00000001C004A35E: cmp     byte ptr [rcx+29h], 5
 * 00000001C004A362: jb      short loc_1C004A3B7
 * 00000001C004A364: and     qword ptr [r11-18h], 0
 * 00000001C004A369: lea     rdx, [r11+48h]
 * 00000001C004A36D: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004A374: lea     r8, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C004A37B: mov     rcx, [rcx+18h]
 * 00000001C004A37F: mov     r9d, ebp
 * 00000001C004A382: mov     [r11-20h], rdi
 * 00000001C004A386: mov     [r11-28h], rdx
 * 00000001C004A38A: lea     rdx, [r11+40h]
 * 00000001C004A38E: mov     [r11-30h], rdi
 * 00000001C004A392: mov     [r11-38h], rdx
 * 00000001C004A396: lea     rdx, [r11+38h]
 * 00000001C004A39A: mov     [r11-40h], rsi
 * 00000001C004A39E: mov     [r11-48h], rdx
 * 00000001C004A3A2: lea     rdx, [r11+30h]
 * 00000001C004A3A6: mov     [r11-50h], rsi
 * 00000001C004A3AA: mov     [r11-58h], rdx
 * 00000001C004A3AE: lea     edx, [rbp-17h]
 * 00000001C004A3B1: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004A3B7: and     [rsp+78h+var_10], 0
 * 00000001C004A3BD: lea     rax, [rsp+78h+arg_40]
 * 00000001C004A3C5: mov     [rsp+78h+var_18], rdi
 * 00000001C004A3CA: lea     r9, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C004A3D1: mov     [rsp+78h+var_20], rax
 * 00000001C004A3D6: mov     edx, 5
 * 00000001C004A3DB: mov     [rsp+78h+var_28], rdi
 * 00000001C004A3E0: lea     rax, [rsp+78h+arg_38]
 * 00000001C004A3E8: mov     [rsp+78h+var_30], rax
 * 00000001C004A3ED: mov     rcx, rbx
 * 00000001C004A3F0: mov     [rsp+78h+var_38], rsi
 * 00000001C004A3F5: lea     rax, [rsp+78h+arg_30]
 * 00000001C004A3FD: mov     [rsp+78h+var_40], rax
 * 00000001C004A402: lea     r8d, [rdx+7]
 * 00000001C004A406: lea     rax, [rsp+78h+arg_28]
 * 00000001C004A40E: mov     [rsp+78h+var_48], rsi
 * 00000001C004A413: mov     [rsp+78h+var_50], rax
 * 00000001C004A418: mov     [rsp+78h+var_58], bp
 * 00000001C004A41D: call    cs:__imp_WppAutoLogTrace
 * 00000001C004A424: nop     dword ptr [rax+rax+00h]
 * 00000001C004A429: lea     r11, [rsp+78h+var_8]
 * 00000001C004A42E: mov     rbx, [r11+10h]
 * 00000001C004A432: mov     rbp, [r11+18h]
 * 00000001C004A436: mov     rsi, [r11+20h]
 * 00000001C004A43A: mov     rsp, r11
 * 00000001C004A43D: pop     rdi
 * 00000001C004A43E: retn
 */
