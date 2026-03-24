/*
 * XREFs of WPP_RECORDER_SF_dddddd @ 0x1C004A1E0
 * Callers:
 *     UsbDevice_InitializeInputContextForDropEndpoints @ 0x1C000CFF4 (UsbDevice_InitializeInputContextForDropEndpoints.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dddddd @ 0x1C004A1E0
 * Reason: Hex-Rays returned no pseudocode for 0x1C004A1E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004A1E0: mov     r11, rsp
 * 00000001C004A1E3: mov     [r11+8], rbx
 * 00000001C004A1E7: mov     [r11+10h], rsi
 * 00000001C004A1EB: mov     [r11+18h], rdi
 * 00000001C004A1EF: push    rbp
 * 00000001C004A1F0: lea     rbp, [r11-27h]
 * 00000001C004A1F4: sub     rsp, 90h
 * 00000001C004A1FB: mov     rbx, rcx
 * 00000001C004A1FE: mov     edi, 4
 * 00000001C004A203: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004A20A: lea     esi, [rdi+27h]
 * 00000001C004A20D: test    dword ptr [rcx+2Ch], 800h
 * 00000001C004A214: jz      short loc_1C004A286
 * 00000001C004A216: cmp     [rcx+29h], dil
 * 00000001C004A21A: jb      short loc_1C004A286
 * 00000001C004A21C: and     qword ptr [r11-18h], 0
 * 00000001C004A221: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C004A225: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004A22C: lea     r8, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C004A233: mov     rcx, [rcx+18h]
 * 00000001C004A237: mov     r9d, esi
 * 00000001C004A23A: mov     [r11-20h], rdi
 * 00000001C004A23E: mov     [r11-28h], rdx
 * 00000001C004A242: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C004A246: mov     [r11-30h], rdi
 * 00000001C004A24A: mov     [r11-38h], rdx
 * 00000001C004A24E: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C004A252: mov     [r11-40h], rdi
 * 00000001C004A256: mov     [r11-48h], rdx
 * 00000001C004A25A: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C004A25E: mov     [r11-50h], rdi
 * 00000001C004A262: mov     [r11-58h], rdx
 * 00000001C004A266: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C004A26A: mov     [r11-60h], rdi
 * 00000001C004A26E: mov     [r11-68h], rdx
 * 00000001C004A272: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C004A276: mov     [r11-70h], rdi
 * 00000001C004A27A: mov     [r11-78h], rdx
 * 00000001C004A27E: mov     edx, esi
 * 00000001C004A280: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004A286: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C004A28F: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C004A293: mov     [rsp+90h+var_10], rdi
 * 00000001C004A29B: lea     r9, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C004A2A2: mov     [rsp+90h+var_18], rax
 * 00000001C004A2A7: mov     r8d, 0Ch
 * 00000001C004A2AD: mov     [rsp+90h+var_20], rdi
 * 00000001C004A2B2: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C004A2B6: mov     [rsp+90h+var_28], rax
 * 00000001C004A2BB: mov     edx, edi
 * 00000001C004A2BD: mov     [rsp+90h+var_30], rdi
 * 00000001C004A2C2: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C004A2C6: mov     [rsp+90h+var_38], rax
 * 00000001C004A2CB: mov     rcx, rbx
 * 00000001C004A2CE: mov     [rsp+90h+var_40], rdi
 * 00000001C004A2D3: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C004A2D7: mov     [rsp+90h+var_48], rax
 * 00000001C004A2DC: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C004A2E0: mov     [rsp+90h+var_50], rdi
 * 00000001C004A2E5: mov     [rsp+90h+var_58], rax
 * 00000001C004A2EA: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C004A2EE: mov     [rsp+90h+var_60], rdi
 * 00000001C004A2F3: mov     [rsp+90h+var_68], rax
 * 00000001C004A2F8: mov     word ptr [rsp+90h+var_70], si
 * 00000001C004A2FD: call    cs:__imp_WppAutoLogTrace
 * 00000001C004A304: nop     dword ptr [rax+rax+00h]
 * 00000001C004A309: lea     r11, [rsp+90h+var_s0]
 * 00000001C004A311: mov     rbx, [r11+10h]
 * 00000001C004A315: mov     rsi, [r11+18h]
 * 00000001C004A319: mov     rdi, [r11+20h]
 * 00000001C004A31D: mov     rsp, r11
 * 00000001C004A320: pop     rbp
 * 00000001C004A321: retn
 */
