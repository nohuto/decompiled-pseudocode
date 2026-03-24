/*
 * XREFs of WPP_RECORDER_SF_dddddd @ 0x1C004A0A0
 * Callers:
 *     UsbDevice_InitializeInputContextForDropEndpoints @ 0x1C000D024 (UsbDevice_InitializeInputContextForDropEndpoints.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dddddd @ 0x1C004A0A0
 * Reason: Hex-Rays returned no pseudocode for 0x1C004A0A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004A0A0: mov     r11, rsp
 * 00000001C004A0A3: mov     [r11+8], rbx
 * 00000001C004A0A7: mov     [r11+10h], rsi
 * 00000001C004A0AB: mov     [r11+18h], rdi
 * 00000001C004A0AF: push    rbp
 * 00000001C004A0B0: lea     rbp, [r11-27h]
 * 00000001C004A0B4: sub     rsp, 90h
 * 00000001C004A0BB: mov     rbx, rcx
 * 00000001C004A0BE: mov     edi, 4
 * 00000001C004A0C3: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004A0CA: lea     esi, [rdi+27h]
 * 00000001C004A0CD: test    dword ptr [rcx+2Ch], 800h
 * 00000001C004A0D4: jz      short loc_1C004A146
 * 00000001C004A0D6: cmp     [rcx+29h], dil
 * 00000001C004A0DA: jb      short loc_1C004A146
 * 00000001C004A0DC: and     qword ptr [r11-18h], 0
 * 00000001C004A0E1: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C004A0E5: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004A0EC: lea     r8, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C004A0F3: mov     rcx, [rcx+18h]
 * 00000001C004A0F7: mov     r9d, esi
 * 00000001C004A0FA: mov     [r11-20h], rdi
 * 00000001C004A0FE: mov     [r11-28h], rdx
 * 00000001C004A102: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C004A106: mov     [r11-30h], rdi
 * 00000001C004A10A: mov     [r11-38h], rdx
 * 00000001C004A10E: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C004A112: mov     [r11-40h], rdi
 * 00000001C004A116: mov     [r11-48h], rdx
 * 00000001C004A11A: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C004A11E: mov     [r11-50h], rdi
 * 00000001C004A122: mov     [r11-58h], rdx
 * 00000001C004A126: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C004A12A: mov     [r11-60h], rdi
 * 00000001C004A12E: mov     [r11-68h], rdx
 * 00000001C004A132: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C004A136: mov     [r11-70h], rdi
 * 00000001C004A13A: mov     [r11-78h], rdx
 * 00000001C004A13E: mov     edx, esi
 * 00000001C004A140: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004A146: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C004A14F: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C004A153: mov     [rsp+90h+var_10], rdi
 * 00000001C004A15B: lea     r9, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C004A162: mov     [rsp+90h+var_18], rax
 * 00000001C004A167: mov     r8d, 0Ch
 * 00000001C004A16D: mov     [rsp+90h+var_20], rdi
 * 00000001C004A172: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C004A176: mov     [rsp+90h+var_28], rax
 * 00000001C004A17B: mov     edx, edi
 * 00000001C004A17D: mov     [rsp+90h+var_30], rdi
 * 00000001C004A182: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C004A186: mov     [rsp+90h+var_38], rax
 * 00000001C004A18B: mov     rcx, rbx
 * 00000001C004A18E: mov     [rsp+90h+var_40], rdi
 * 00000001C004A193: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C004A197: mov     [rsp+90h+var_48], rax
 * 00000001C004A19C: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C004A1A0: mov     [rsp+90h+var_50], rdi
 * 00000001C004A1A5: mov     [rsp+90h+var_58], rax
 * 00000001C004A1AA: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C004A1AE: mov     [rsp+90h+var_60], rdi
 * 00000001C004A1B3: mov     [rsp+90h+var_68], rax
 * 00000001C004A1B8: mov     word ptr [rsp+90h+var_70], si
 * 00000001C004A1BD: call    cs:__imp_WppAutoLogTrace
 * 00000001C004A1C4: nop     dword ptr [rax+rax+00h]
 * 00000001C004A1C9: lea     r11, [rsp+90h+var_s0]
 * 00000001C004A1D1: mov     rbx, [r11+10h]
 * 00000001C004A1D5: mov     rsi, [r11+18h]
 * 00000001C004A1D9: mov     rdi, [r11+20h]
 * 00000001C004A1DD: mov     rsp, r11
 * 00000001C004A1E0: pop     rbp
 * 00000001C004A1E1: retn
 */
