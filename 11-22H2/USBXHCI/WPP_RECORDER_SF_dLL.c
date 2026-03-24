/*
 * XREFs of WPP_RECORDER_SF_dLL @ 0x1C0049FB0
 * Callers:
 *     UsbDevice_DeviceResetCompletion @ 0x1C0048520 (UsbDevice_DeviceResetCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dLL @ 0x1C0049FB0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0049FB0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0049FB0: mov     r11, rsp
 * 00000001C0049FB3: mov     [r11+8], rbx
 * 00000001C0049FB7: mov     [r11+10h], rsi
 * 00000001C0049FBB: push    rdi
 * 00000001C0049FBC: sub     rsp, 60h
 * 00000001C0049FC0: mov     rbx, rcx
 * 00000001C0049FC3: mov     esi, 40h ; '@'
 * 00000001C0049FC8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0049FCF: lea     edi, [rsi-3Ch]
 * 00000001C0049FD2: test    dword ptr [rcx+2Ch], 800h
 * 00000001C0049FD9: jz      short loc_1C004A028
 * 00000001C0049FDB: cmp     byte ptr [rcx+29h], 2
 * 00000001C0049FDF: jb      short loc_1C004A028
 * 00000001C0049FE1: and     qword ptr [r11-18h], 0
 * 00000001C0049FE6: lea     rdx, [r11+40h]
 * 00000001C0049FEA: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0049FF1: lea     r8, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C0049FF8: mov     rcx, [rcx+18h]
 * 00000001C0049FFC: mov     r9d, esi
 * 00000001C0049FFF: mov     [r11-20h], rdi
 * 00000001C004A003: mov     [r11-28h], rdx
 * 00000001C004A007: lea     rdx, [r11+38h]
 * 00000001C004A00B: mov     [r11-30h], rdi
 * 00000001C004A00F: mov     [r11-38h], rdx
 * 00000001C004A013: lea     rdx, [r11+30h]
 * 00000001C004A017: mov     [r11-40h], rdi
 * 00000001C004A01B: mov     [r11-48h], rdx
 * 00000001C004A01F: lea     edx, [rsi-15h]
 * 00000001C004A022: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004A028: and     [rsp+68h+var_10], 0
 * 00000001C004A02E: lea     rax, [rsp+68h+arg_38]
 * 00000001C004A036: mov     [rsp+68h+var_18], rdi
 * 00000001C004A03B: lea     r9, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C004A042: mov     [rsp+68h+var_20], rax
 * 00000001C004A047: mov     edx, 2
 * 00000001C004A04C: mov     [rsp+68h+var_28], rdi
 * 00000001C004A051: lea     rax, [rsp+68h+arg_30]
 * 00000001C004A059: mov     [rsp+68h+var_30], rax
 * 00000001C004A05E: mov     rcx, rbx
 * 00000001C004A061: lea     rax, [rsp+68h+arg_28]
 * 00000001C004A069: mov     [rsp+68h+var_38], rdi
 * 00000001C004A06E: mov     [rsp+68h+var_40], rax
 * 00000001C004A073: lea     r8d, [rdx+0Ah]
 * 00000001C004A077: mov     [rsp+68h+var_48], si
 * 00000001C004A07C: call    cs:__imp_WppAutoLogTrace
 * 00000001C004A083: nop     dword ptr [rax+rax+00h]
 * 00000001C004A088: mov     rbx, [rsp+68h+arg_0]
 * 00000001C004A08D: mov     rsi, [rsp+68h+arg_8]
 * 00000001C004A092: add     rsp, 60h
 * 00000001C004A096: pop     rdi
 * 00000001C004A097: retn
 */
