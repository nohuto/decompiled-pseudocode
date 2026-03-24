/*
 * XREFs of WPP_RECORDER_SF_L @ 0x1C00136C0
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008BE0 (Interrupter_DeferredWorkProcessor.c)
 *     Controller_WdfEvtPreprocessSetPowerIrp @ 0x1C000F080 (Controller_WdfEvtPreprocessSetPowerIrp.c)
 *     UsbDevice_EnableCompletion @ 0x1C0019560 (UsbDevice_EnableCompletion.c)
 *     Command_GetSupportedExtendedCapabilityCommandCompletion @ 0x1C002FD00 (Command_GetSupportedExtendedCapabilityCommandCompletion.c)
 *     Register_ReadSecureMmio @ 0x1C003EE48 (Register_ReadSecureMmio.c)
 *     Isoch_CommonBufferCallback @ 0x1C0043B70 (Isoch_CommonBufferCallback.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C006EC7C (Controller_ConfigureS0IdleSettings.c)
 *     Controller_GetDeviceEnumerator @ 0x1C007530C (Controller_GetDeviceEnumerator.c)
 *     Controller_TelemetryOkToGenerateReport @ 0x1C0078CD4 (Controller_TelemetryOkToGenerateReport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_L @ 0x1C00136C0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00136C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00136C0: mov     [rsp+arg_0], rbx
 * 00000001C00136C5: mov     [rsp+arg_8], rbp
 * 00000001C00136CA: mov     [rsp+arg_10], rsi
 * 00000001C00136CF: push    rdi
 * 00000001C00136D0: push    r14
 * 00000001C00136D2: push    r15
 * 00000001C00136D4: sub     rsp, 40h
 * 00000001C00136D8: mov     r14d, r8d
 * 00000001C00136DB: mov     r15, rcx
 * 00000001C00136DE: mov     edi, r8d
 * 00000001C00136E1: shr     rdi, 10h
 * 00000001C00136E5: movzx   esi, dl
 * 00000001C00136E8: lea     ebx, [r14-1]
 * 00000001C00136EC: movzx   ebp, r9w
 * 00000001C00136F0: mov     r10d, ebx
 * 00000001C00136F3: and     ebx, 1Fh
 * 00000001C00136F6: shr     r10, 5
 * 00000001C00136FA: lea     rax, [rdi+rdi*4]
 * 00000001C00136FE: and     r10d, 7FFh
 * 00000001C0013705: mov     edx, ebx
 * 00000001C0013707: mov     ebx, 4
 * 00000001C001370C: lea     r11, [r10+rax*4]
 * 00000001C0013710: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0013717: mov     eax, [r10+r11*4+2Ch]
 * 00000001C001371C: bt      eax, edx
 * 00000001C001371F: jb      loc_1C00266E2
 * 00000001C0013725: and     [rsp+58h+var_20], 0
 * 00000001C001372B: lea     rax, [rsp+58h+arg_28]
 * 00000001C0013733: mov     r9, [rsp+58h+arg_20]
 * 00000001C001373B: mov     r8d, r14d
 * 00000001C001373E: mov     [rsp+58h+var_28], rbx
 * 00000001C0013743: mov     edx, esi
 * 00000001C0013745: mov     [rsp+58h+var_30], rax
 * 00000001C001374A: mov     rcx, r15
 * 00000001C001374D: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C0013752: call    cs:__imp_WppAutoLogTrace
 * 00000001C0013759: nop     dword ptr [rax+rax+00h]
 * 00000001C001375E: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0013763: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0013768: mov     rsi, [rsp+58h+arg_10]
 * 00000001C001376D: add     rsp, 40h
 * 00000001C0013771: pop     r15
 * 00000001C0013773: pop     r14
 * 00000001C0013775: pop     rdi
 * 00000001C0013776: retn
 * 00000001C00266E2: lea     rcx, [rdi+rdi*4]
 * 00000001C00266E6: add     rcx, rcx
 * 00000001C00266E9: cmp     [r10+rcx*8+29h], sil
 * 00000001C00266EE: jb      loc_1C0013725
 * 00000001C00266F4: and     [rsp+58h+var_28], 0
 * 00000001C00266FA: lea     rdx, [rsp+58h+arg_28]
 * 00000001C0026702: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0026709: mov     r9d, ebp
 * 00000001C002670C: mov     r8, [rsp+58h+arg_20]
 * 00000001C0026714: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0026719: mov     [rsp+58h+var_30], rbx
 * 00000001C002671E: mov     [rsp+58h+var_38], rdx
 * 00000001C0026723: mov     edx, 2Bh ; '+'
 * 00000001C0026728: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002672E: nop
 * 00000001C002672F: jmp     loc_1C0013725
 */
