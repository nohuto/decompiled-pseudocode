/*
 * XREFs of WPP_RECORDER_SF_Ld @ 0x1C003BEF8
 * Callers:
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008D3EC (ACPIRegReadAMLRegistryEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Ld @ 0x1C003BEF8
 * Reason: Hex-Rays returned no pseudocode for 0x1C003BEF8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003BEF8: mov     r11, rsp
 * 00000001C003BEFB: mov     [r11+8], rbx
 * 00000001C003BEFF: mov     [r11+10h], rsi
 * 00000001C003BF03: push    rdi
 * 00000001C003BF04: sub     rsp, 50h
 * 00000001C003BF08: mov     rbx, rcx
 * 00000001C003BF0B: mov     esi, 21h ; '!'
 * 00000001C003BF10: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003BF17: lea     edi, [rsi-1Dh]
 * 00000001C003BF1A: test    dword ptr [rcx+2Ch], 400h
 * 00000001C003BF21: jz      short loc_1C003BF64
 * 00000001C003BF23: cmp     byte ptr [rcx+29h], 2
 * 00000001C003BF27: jb      short loc_1C003BF64
 * 00000001C003BF29: and     qword ptr [r11-18h], 0
 * 00000001C003BF2E: lea     rdx, [r11+38h]
 * 00000001C003BF32: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003BF39: lea     r8, WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids
 * 00000001C003BF40: mov     rcx, [rcx+18h]
 * 00000001C003BF44: mov     r9d, esi
 * 00000001C003BF47: mov     [r11-20h], rdi
 * 00000001C003BF4B: mov     [r11-28h], rdx
 * 00000001C003BF4F: lea     rdx, [r11+30h]
 * 00000001C003BF53: mov     [r11-30h], rdi
 * 00000001C003BF57: mov     [r11-38h], rdx
 * 00000001C003BF5B: lea     edx, [rsi+0Ah]
 * 00000001C003BF5E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003BF64: and     [rsp+58h+var_10], 0
 * 00000001C003BF6A: lea     rax, [rsp+58h+arg_30]
 * 00000001C003BF72: mov     [rsp+58h+var_18], rdi
 * 00000001C003BF77: lea     r9, WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids
 * 00000001C003BF7E: mov     [rsp+58h+var_20], rax
 * 00000001C003BF83: mov     edx, 2
 * 00000001C003BF88: lea     rax, [rsp+58h+arg_28]
 * 00000001C003BF90: mov     [rsp+58h+var_28], rdi
 * 00000001C003BF95: mov     [rsp+58h+var_30], rax
 * 00000001C003BF9A: mov     rcx, rbx
 * 00000001C003BF9D: mov     [rsp+58h+var_38], si
 * 00000001C003BFA2: lea     r8d, [rdx+9]
 * 00000001C003BFA6: call    cs:__imp_WppAutoLogTrace
 * 00000001C003BFAD: nop     dword ptr [rax+rax+00h]
 * 00000001C003BFB2: mov     rbx, [rsp+58h+arg_0]
 * 00000001C003BFB7: mov     rsi, [rsp+58h+arg_8]
 * 00000001C003BFBC: add     rsp, 50h
 * 00000001C003BFC0: pop     rdi
 * 00000001C003BFC1: retn
 */
