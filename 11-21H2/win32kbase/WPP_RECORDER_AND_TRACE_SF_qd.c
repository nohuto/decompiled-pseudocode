/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qD @ 0x1C01B2FAC
 * Callers:
 *     rimObsUpdateInputObserverRegistration @ 0x1C01B59EC (rimObsUpdateInputObserverRegistration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qD @ 0x1C01B2FAC
 * Reason: Hex-Rays returned no pseudocode for 0x1C01B2FAC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01B2FAC: mov     r11, rsp
 * 00000001C01B2FAF: mov     [r11+8], rbx
 * 00000001C01B2FB3: mov     [r11+10h], rdi
 * 00000001C01B2FB7: push    r14
 * 00000001C01B2FB9: sub     rsp, 50h
 * 00000001C01B2FBD: mov     rdi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C01B2FC4: mov     bl, r8b
 * 00000001C01B2FC7: mov     r14d, 27h ; '''
 * 00000001C01B2FCD: test    dl, dl
 * 00000001C01B2FCF: jz      short loc_1C01B3012
 * 00000001C01B2FD1: and     qword ptr [r11-18h], 0
 * 00000001C01B2FD6: lea     rdx, [r11+50h]
 * 00000001C01B2FDA: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01B2FE1: lea     r8, WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids
 * 00000001C01B2FE8: mov     qword ptr [r11-20h], 4
 * 00000001C01B2FF0: mov     [r11-28h], rdx
 * 00000001C01B2FF4: lea     rdx, [r11+48h]
 * 00000001C01B2FF8: mov     qword ptr [r11-30h], 8
 * 00000001C01B3000: mov     [r11-38h], rdx
 * 00000001C01B3004: lea     edx, [r14+4]
 * 00000001C01B3008: movzx   r9d, r14w
 * 00000001C01B300C: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01B3012: test    bl, bl
 * 00000001C01B3014: jz      short loc_1C01B306D
 * 00000001C01B3016: and     [rsp+58h+var_10], 0
 * 00000001C01B301C: lea     rax, [rsp+58h+arg_48]
 * 00000001C01B3024: mov     [rsp+58h+var_18], 4
 * 00000001C01B302D: lea     r9, WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids
 * 00000001C01B3034: mov     [rsp+58h+var_20], rax
 * 00000001C01B3039: mov     edx, 4
 * 00000001C01B303E: lea     rax, [rsp+58h+arg_40]
 * 00000001C01B3046: mov     [rsp+58h+var_28], 8
 * 00000001C01B304F: mov     [rsp+58h+var_30], rax
 * 00000001C01B3054: mov     rcx, rdi
 * 00000001C01B3057: mov     [rsp+58h+var_38], r14w
 * 00000001C01B305D: lea     r8d, [rdx+13h]
 * 00000001C01B3061: call    cs:__imp_WppAutoLogTrace
 * 00000001C01B3068: nop     dword ptr [rax+rax+00h]
 * 00000001C01B306D: mov     rbx, [rsp+58h+arg_0]
 * 00000001C01B3072: mov     rdi, [rsp+58h+arg_8]
 * 00000001C01B3077: add     rsp, 50h
 * 00000001C01B307B: pop     r14
 * 00000001C01B307D: retn
 */
