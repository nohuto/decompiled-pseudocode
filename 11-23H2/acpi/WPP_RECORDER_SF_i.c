/*
 * XREFs of WPP_RECORDER_SF_i @ 0x1C002295C
 * Callers:
 *     ACPIMapNamedTable @ 0x1C00018A0 (ACPIMapNamedTable.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase4 @ 0x1C001FC80 (ACPIDevicePowerProcessPhase2SystemSubPhase4.c)
 *     OSNotifyDeviceWakeCallBack @ 0x1C0033690 (OSNotifyDeviceWakeCallBack.c)
 *     ACPIAsyncAcquireGlobalLock @ 0x1C0039150 (ACPIAsyncAcquireGlobalLock.c)
 *     ACPIReleaseGlobalLock @ 0x1C003939C (ACPIReleaseGlobalLock.c)
 *     ACPIVerifyUSB4Presence @ 0x1C003D87C (ACPIVerifyUSB4Presence.c)
 *     LinkNodeCrackPrt @ 0x1C005CEBC (LinkNodeCrackPrt.c)
 *     LinkNodepRunSrsWorker @ 0x1C005DB60 (LinkNodepRunSrsWorker.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C0090840 (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C0090EBC (PnpiBiosAddressQuadToIoDescriptor.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C009DB1C (IrqArbpAssignIrqFromLinkNode.c)
 *     IrqArbpFindSuitableRangeMsi @ 0x1C009E038 (IrqArbpFindSuitableRangeMsi.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C009E8A0 (IrqArbpUnreferenceArbitrationList.c)
 *     ACPIGlobalInitialize @ 0x1C00A8478 (ACPIGlobalInitialize.c)
 *     ACPILoadProcessDSDT @ 0x1C00A9710 (ACPILoadProcessDSDT.c)
 *     ACPILoadProcessFACS @ 0x1C00A9850 (ACPILoadProcessFACS.c)
 *     ACPILoadProcessRSDT @ 0x1C00A9AD4 (ACPILoadProcessRSDT.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_i @ 0x1C002295C
 * Reason: Hex-Rays returned no pseudocode for 0x1C002295C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C002295C: mov     [rsp+arg_0], rbx
 * 00000001C0022961: mov     [rsp+arg_8], rbp
 * 00000001C0022966: mov     [rsp+arg_10], rsi
 * 00000001C002296B: push    rdi
 * 00000001C002296C: push    r14
 * 00000001C002296E: push    r15
 * 00000001C0022970: sub     rsp, 40h
 * 00000001C0022974: mov     r14d, r8d
 * 00000001C0022977: mov     r15, rcx
 * 00000001C002297A: mov     edi, r8d
 * 00000001C002297D: shr     rdi, 10h
 * 00000001C0022981: movzx   esi, dl
 * 00000001C0022984: lea     ebx, [r14-1]
 * 00000001C0022988: movzx   ebp, r9w
 * 00000001C002298C: mov     r10d, ebx
 * 00000001C002298F: and     ebx, 1Fh
 * 00000001C0022992: shr     r10, 5
 * 00000001C0022996: lea     rax, [rdi+rdi*4]
 * 00000001C002299A: and     r10d, 7FFh
 * 00000001C00229A1: mov     edx, ebx
 * 00000001C00229A3: mov     ebx, 8
 * 00000001C00229A8: lea     r11, [r10+rax*4]
 * 00000001C00229AC: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00229B3: mov     eax, [r10+r11*4+2Ch]
 * 00000001C00229B8: bt      eax, edx
 * 00000001C00229BB: jnb     short loc_1C0022A03
 * 00000001C00229BD: lea     rcx, [rdi+rdi*4]
 * 00000001C00229C1: add     rcx, rcx
 * 00000001C00229C4: cmp     [r10+rcx*8+29h], sil
 * 00000001C00229C9: jb      short loc_1C0022A03
 * 00000001C00229CB: and     [rsp+58h+var_28], 0
 * 00000001C00229D1: lea     rdx, [rsp+58h+arg_28]
 * 00000001C00229D9: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00229E0: mov     r9d, ebp
 * 00000001C00229E3: mov     r8, [rsp+58h+arg_20]
 * 00000001C00229EB: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00229F0: mov     [rsp+58h+var_30], rbx
 * 00000001C00229F5: mov     [rsp+58h+var_38], rdx
 * 00000001C00229FA: lea     edx, [rbx+23h]
 * 00000001C00229FD: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0022A03: and     [rsp+58h+var_20], 0
 * 00000001C0022A09: lea     rax, [rsp+58h+arg_28]
 * 00000001C0022A11: mov     r9, [rsp+58h+arg_20]
 * 00000001C0022A19: mov     r8d, r14d
 * 00000001C0022A1C: mov     [rsp+58h+var_28], rbx
 * 00000001C0022A21: mov     edx, esi
 * 00000001C0022A23: mov     [rsp+58h+var_30], rax
 * 00000001C0022A28: mov     rcx, r15
 * 00000001C0022A2B: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C0022A30: call    cs:__imp_WppAutoLogTrace
 * 00000001C0022A37: nop     dword ptr [rax+rax+00h]
 * 00000001C0022A3C: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0022A41: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0022A46: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0022A4B: add     rsp, 40h
 * 00000001C0022A4F: pop     r15
 * 00000001C0022A51: pop     r14
 * 00000001C0022A53: pop     rdi
 * 00000001C0022A54: retn
 */
