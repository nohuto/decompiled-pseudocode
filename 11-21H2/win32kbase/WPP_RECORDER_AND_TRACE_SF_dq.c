/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dq @ 0x1C01E521C
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0001CF8 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_dq @ 0x1C01E521C
 * Reason: Hex-Rays returned no pseudocode for 0x1C01E521C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01E521C: mov     r11, rsp
 * 00000001C01E521F: mov     [r11+8], rbx
 * 00000001C01E5223: mov     [r11+10h], rdi
 * 00000001C01E5227: push    r14
 * 00000001C01E5229: sub     rsp, 50h
 * 00000001C01E522D: mov     rdi, r9
 * 00000001C01E5230: mov     bl, r8b
 * 00000001C01E5233: mov     r14d, 1Fh
 * 00000001C01E5239: test    dl, dl
 * 00000001C01E523B: jz      short loc_1C01E527E
 * 00000001C01E523D: and     qword ptr [r11-18h], 0
 * 00000001C01E5242: lea     rdx, [r11+50h]
 * 00000001C01E5246: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01E524D: lea     r8, WPP_aa8d325859863bdf9fbc8a93402e51ff_Traceguids
 * 00000001C01E5254: mov     qword ptr [r11-20h], 8
 * 00000001C01E525C: mov     [r11-28h], rdx
 * 00000001C01E5260: lea     rdx, [r11+48h]
 * 00000001C01E5264: mov     qword ptr [r11-30h], 4
 * 00000001C01E526C: mov     [r11-38h], rdx
 * 00000001C01E5270: lea     edx, [r14+0Ch]
 * 00000001C01E5274: movzx   r9d, r14w
 * 00000001C01E5278: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01E527E: test    bl, bl
 * 00000001C01E5280: jz      short loc_1C01E52D9
 * 00000001C01E5282: and     [rsp+58h+var_10], 0
 * 00000001C01E5288: lea     rax, [rsp+58h+arg_48]
 * 00000001C01E5290: mov     [rsp+58h+var_18], 8
 * 00000001C01E5299: lea     r9, WPP_aa8d325859863bdf9fbc8a93402e51ff_Traceguids
 * 00000001C01E52A0: mov     [rsp+58h+var_20], rax
 * 00000001C01E52A5: mov     edx, 2
 * 00000001C01E52AA: lea     rax, [rsp+58h+arg_40]
 * 00000001C01E52B2: mov     [rsp+58h+var_28], 4
 * 00000001C01E52BB: mov     [rsp+58h+var_30], rax
 * 00000001C01E52C0: mov     rcx, rdi
 * 00000001C01E52C3: mov     [rsp+58h+var_38], r14w
 * 00000001C01E52C9: lea     r8d, [rdx+3]
 * 00000001C01E52CD: call    cs:__imp_WppAutoLogTrace
 * 00000001C01E52D4: nop     dword ptr [rax+rax+00h]
 * 00000001C01E52D9: mov     rbx, [rsp+58h+arg_0]
 * 00000001C01E52DE: mov     rdi, [rsp+58h+arg_8]
 * 00000001C01E52E3: add     rsp, 50h
 * 00000001C01E52E7: pop     r14
 * 00000001C01E52E9: retn
 */
