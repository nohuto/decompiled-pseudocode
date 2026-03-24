/*
 * XREFs of WPP_RECORDER_SF_L @ 0x1C0013710
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008C10 (Interrupter_DeferredWorkProcessor.c)
 *     Controller_WdfEvtPreprocessSetPowerIrp @ 0x1C000F0B0 (Controller_WdfEvtPreprocessSetPowerIrp.c)
 *     UsbDevice_EnableCompletion @ 0x1C00195B0 (UsbDevice_EnableCompletion.c)
 *     Command_GetSupportedExtendedCapabilityCommandCompletion @ 0x1C002FBC0 (Command_GetSupportedExtendedCapabilityCommandCompletion.c)
 *     Register_ReadSecureMmio @ 0x1C003ED08 (Register_ReadSecureMmio.c)
 *     Isoch_CommonBufferCallback @ 0x1C0043A30 (Isoch_CommonBufferCallback.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C006ECBC (Controller_ConfigureS0IdleSettings.c)
 *     Controller_GetDeviceEnumerator @ 0x1C007534C (Controller_GetDeviceEnumerator.c)
 *     Controller_TelemetryOkToGenerateReport @ 0x1C0078D14 (Controller_TelemetryOkToGenerateReport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_L @ 0x1C0013710
 * Reason: Hex-Rays returned no pseudocode for 0x1C0013710
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0013710: mov     [rsp+arg_0], rbx
 * 00000001C0013715: mov     [rsp+arg_8], rbp
 * 00000001C001371A: mov     [rsp+arg_10], rsi
 * 00000001C001371F: push    rdi
 * 00000001C0013720: push    r14
 * 00000001C0013722: push    r15
 * 00000001C0013724: sub     rsp, 40h
 * 00000001C0013728: mov     r14d, r8d
 * 00000001C001372B: mov     r15, rcx
 * 00000001C001372E: mov     edi, r8d
 * 00000001C0013731: shr     rdi, 10h
 * 00000001C0013735: movzx   esi, dl
 * 00000001C0013738: lea     ebx, [r14-1]
 * 00000001C001373C: movzx   ebp, r9w
 * 00000001C0013740: mov     r10d, ebx
 * 00000001C0013743: and     ebx, 1Fh
 * 00000001C0013746: shr     r10, 5
 * 00000001C001374A: lea     rax, [rdi+rdi*4]
 * 00000001C001374E: and     r10d, 7FFh
 * 00000001C0013755: mov     edx, ebx
 * 00000001C0013757: mov     ebx, 4
 * 00000001C001375C: lea     r11, [r10+rax*4]
 * 00000001C0013760: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0013767: mov     eax, [r10+r11*4+2Ch]
 * 00000001C001376C: bt      eax, edx
 * 00000001C001376F: jb      loc_1C00265A2
 * 00000001C0013775: and     [rsp+58h+var_20], 0
 * 00000001C001377B: lea     rax, [rsp+58h+arg_28]
 * 00000001C0013783: mov     r9, [rsp+58h+arg_20]
 * 00000001C001378B: mov     r8d, r14d
 * 00000001C001378E: mov     [rsp+58h+var_28], rbx
 * 00000001C0013793: mov     edx, esi
 * 00000001C0013795: mov     [rsp+58h+var_30], rax
 * 00000001C001379A: mov     rcx, r15
 * 00000001C001379D: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C00137A2: call    cs:__imp_WppAutoLogTrace
 * 00000001C00137A9: nop     dword ptr [rax+rax+00h]
 * 00000001C00137AE: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00137B3: mov     rbp, [rsp+58h+arg_8]
 * 00000001C00137B8: mov     rsi, [rsp+58h+arg_10]
 * 00000001C00137BD: add     rsp, 40h
 * 00000001C00137C1: pop     r15
 * 00000001C00137C3: pop     r14
 * 00000001C00137C5: pop     rdi
 * 00000001C00137C6: retn
 * 00000001C00265A2: lea     rcx, [rdi+rdi*4]
 * 00000001C00265A6: add     rcx, rcx
 * 00000001C00265A9: cmp     [r10+rcx*8+29h], sil
 * 00000001C00265AE: jb      loc_1C0013775
 * 00000001C00265B4: and     [rsp+58h+var_28], 0
 * 00000001C00265BA: lea     rdx, [rsp+58h+arg_28]
 * 00000001C00265C2: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00265C9: mov     r9d, ebp
 * 00000001C00265CC: mov     r8, [rsp+58h+arg_20]
 * 00000001C00265D4: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00265D9: mov     [rsp+58h+var_30], rbx
 * 00000001C00265DE: mov     [rsp+58h+var_38], rdx
 * 00000001C00265E3: mov     edx, 2Bh ; '+'
 * 00000001C00265E8: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00265EE: nop
 * 00000001C00265EF: jmp     loc_1C0013775
 */
