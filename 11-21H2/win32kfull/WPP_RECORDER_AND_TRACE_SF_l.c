/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_L @ 0x1C01EA870
 * Callers:
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01E9DA0 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_L @ 0x1C01EA870
 * Reason: Hex-Rays returned no pseudocode for 0x1C01EA870
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01EA870: mov     r11, rsp
 * 00000001C01EA873: mov     [r11+8], rbx
 * 00000001C01EA877: mov     [r11+10h], rbp
 * 00000001C01EA87B: push    rdi
 * 00000001C01EA87C: sub     rsp, 40h
 * 00000001C01EA880: mov     rdi, r9
 * 00000001C01EA883: mov     bl, r8b
 * 00000001C01EA886: mov     ebp, 0Eh
 * 00000001C01EA88B: test    dl, dl
 * 00000001C01EA88D: jz      short loc_1C01EA8BF
 * 00000001C01EA88F: and     qword ptr [r11-18h], 0
 * 00000001C01EA894: lea     rdx, [r11+48h]
 * 00000001C01EA898: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01EA89F: lea     r8, WPP_94b4deb4f8103cc2d3486d23bf68d8c9_Traceguids
 * 00000001C01EA8A6: mov     qword ptr [r11-20h], 4
 * 00000001C01EA8AE: mov     [r11-28h], rdx
 * 00000001C01EA8B2: lea     edx, [rbp+1Dh]
 * 00000001C01EA8B5: movzx   r9d, bp
 * 00000001C01EA8B9: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01EA8BF: test    bl, bl
 * 00000001C01EA8C1: jz      short loc_1C01EA903
 * 00000001C01EA8C3: and     [rsp+48h+var_10], 0
 * 00000001C01EA8C9: lea     rax, [rsp+48h+arg_40]
 * 00000001C01EA8D1: mov     edx, 4
 * 00000001C01EA8D6: mov     [rsp+48h+var_18], 4
 * 00000001C01EA8DF: mov     [rsp+48h+var_20], rax
 * 00000001C01EA8E4: lea     r9, WPP_94b4deb4f8103cc2d3486d23bf68d8c9_Traceguids
 * 00000001C01EA8EB: mov     rcx, rdi
 * 00000001C01EA8EE: mov     [rsp+48h+var_28], bp
 * 00000001C01EA8F3: lea     r8d, [rdx+0Fh]
 * 00000001C01EA8F7: call    cs:__imp_WppAutoLogTrace
 * 00000001C01EA8FE: nop     dword ptr [rax+rax+00h]
 * 00000001C01EA903: mov     rbx, [rsp+48h+arg_0]
 * 00000001C01EA908: mov     rbp, [rsp+48h+arg_8]
 * 00000001C01EA90D: add     rsp, 40h
 * 00000001C01EA911: pop     rdi
 * 00000001C01EA912: retn
 */
