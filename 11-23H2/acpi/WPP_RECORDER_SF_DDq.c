/*
 * XREFs of WPP_RECORDER_SF_DDq @ 0x1C005E980
 * Callers:
 *     IrqArbpUnreferenceArbitrationList @ 0x1C009E8A0 (IrqArbpUnreferenceArbitrationList.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDq @ 0x1C005E980
 * Reason: Hex-Rays returned no pseudocode for 0x1C005E980
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C005E980: mov     r11, rsp
 * 00000001C005E983: mov     [r11+8], rbx
 * 00000001C005E987: mov     [r11+10h], rbp
 * 00000001C005E98B: push    rdi
 * 00000001C005E98C: sub     rsp, 60h
 * 00000001C005E990: mov     rbx, rcx
 * 00000001C005E993: mov     edi, 4
 * 00000001C005E998: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C005E99F: lea     ebp, [rdi+0Fh]
 * 00000001C005E9A2: test    dword ptr [rcx+2Ch], 80000h
 * 00000001C005E9A9: jz      short loc_1C005E9FC
 * 00000001C005E9AB: cmp     [rcx+29h], dil
 * 00000001C005E9AF: jb      short loc_1C005E9FC
 * 00000001C005E9B1: and     qword ptr [r11-18h], 0
 * 00000001C005E9B6: lea     rdx, [r11+40h]
 * 00000001C005E9BA: mov     rax, cs:pfnWppTraceMessage
 * 00000001C005E9C1: lea     r8, WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids
 * 00000001C005E9C8: mov     rcx, [rcx+18h]
 * 00000001C005E9CC: mov     r9d, ebp
 * 00000001C005E9CF: mov     qword ptr [r11-20h], 8
 * 00000001C005E9D7: mov     [r11-28h], rdx
 * 00000001C005E9DB: lea     rdx, [r11+38h]
 * 00000001C005E9DF: mov     [r11-30h], rdi
 * 00000001C005E9E3: mov     [r11-38h], rdx
 * 00000001C005E9E7: lea     rdx, [r11+30h]
 * 00000001C005E9EB: mov     [r11-40h], rdi
 * 00000001C005E9EF: mov     [r11-48h], rdx
 * 00000001C005E9F3: lea     edx, [rdi+27h]
 * 00000001C005E9F6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C005E9FC: and     [rsp+68h+var_10], 0
 * 00000001C005EA02: lea     rax, [rsp+68h+arg_38]
 * 00000001C005EA0A: mov     [rsp+68h+var_18], 8
 * 00000001C005EA13: lea     r9, WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids
 * 00000001C005EA1A: mov     [rsp+68h+var_20], rax
 * 00000001C005EA1F: mov     r8d, 14h
 * 00000001C005EA25: mov     [rsp+68h+var_28], rdi
 * 00000001C005EA2A: lea     rax, [rsp+68h+arg_30]
 * 00000001C005EA32: mov     [rsp+68h+var_30], rax
 * 00000001C005EA37: mov     edx, edi
 * 00000001C005EA39: lea     rax, [rsp+68h+arg_28]
 * 00000001C005EA41: mov     [rsp+68h+var_38], rdi
 * 00000001C005EA46: mov     [rsp+68h+var_40], rax
 * 00000001C005EA4B: mov     rcx, rbx
 * 00000001C005EA4E: mov     [rsp+68h+var_48], bp
 * 00000001C005EA53: call    cs:__imp_WppAutoLogTrace
 * 00000001C005EA5A: nop     dword ptr [rax+rax+00h]
 * 00000001C005EA5F: mov     rbx, [rsp+68h+arg_0]
 * 00000001C005EA64: mov     rbp, [rsp+68h+arg_8]
 * 00000001C005EA69: add     rsp, 60h
 * 00000001C005EA6D: pop     rdi
 * 00000001C005EA6E: retn
 */
