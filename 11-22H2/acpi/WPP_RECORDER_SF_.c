/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C000ABD8
 * Callers:
 *     ACPIDeviceDiscoverDependencies @ 0x1C001CD24 (ACPIDeviceDiscoverDependencies.c)
 *     ACPIDevicePowerDpc @ 0x1C001E5E0 (ACPIDevicePowerDpc.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x1C001FEC4 (ACPIDevicePowerProcessPhase3.c)
 *     ACPIDevicePowerProcessPhase4 @ 0x1C002041C (ACPIDevicePowerProcessPhase4.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x1C0022448 (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIDispatchAddDevice @ 0x1C0023F50 (ACPIDispatchAddDevice.c)
 *     ACPIUnload @ 0x1C0024810 (ACPIUnload.c)
 *     ACPIWriteEventLogEntry @ 0x1C0025F7C (ACPIWriteEventLogEntry.c)
 *     OSNotifyDeviceCheck @ 0x1C0032CA0 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C00332A0 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C00334AC (OSNotifyDeviceWakeByInterrupt.c)
 *     ACPIEnableEnterACPIMode @ 0x1C00367B8 (ACPIEnableEnterACPIMode.c)
 *     ACPIStartNextGlobalLockRequest @ 0x1C0039524 (ACPIStartNextGlobalLockRequest.c)
 *     ACPIIgnoreResourceMapValidation @ 0x1C003AF34 (ACPIIgnoreResourceMapValidation.c)
 *     ACPIRangeValidatePciResources @ 0x1C003B3C4 (ACPIRangeValidatePciResources.c)
 *     ACPIRootIrpRemoveDevice @ 0x1C003D2A0 (ACPIRootIrpRemoveDevice.c)
 *     ACPITableNotifyFreeObject @ 0x1C003F560 (ACPITableNotifyFreeObject.c)
 *     ACPIVectorConnect @ 0x1C0043E60 (ACPIVectorConnect.c)
 *     ACPIVectorDisconnect @ 0x1C0044060 (ACPIVectorDisconnect.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C0083DB0 (AcpiExternalTranslateBiosToNtResources.c)
 *     ACPIInterruptInitialize @ 0x1C0087E78 (ACPIInterruptInitialize.c)
 *     ACPIEnumerateTables @ 0x1C00888EC (ACPIEnumerateTables.c)
 *     ACPIProcessHardwareInformation @ 0x1C00889C0 (ACPIProcessHardwareInformation.c)
 *     ACPIPccInitialize @ 0x1C00894E8 (ACPIPccInitialize.c)
 *     ACPIPccLegacyInitialize @ 0x1C00897B8 (ACPIPccLegacyInitialize.c)
 *     ACPIProcessorBuildBootApicIds @ 0x1C008C390 (ACPIProcessorBuildBootApicIds.c)
 *     ACPIProcessorBuildHiddenApicIds @ 0x1C008C470 (ACPIProcessorBuildHiddenApicIds.c)
 *     PnpBiosResourcesToNtResources @ 0x1C008EFEC (PnpBiosResourcesToNtResources.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C00904B0 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C0090840 (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C0090EBC (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C00912DC (PnpiBiosAddressToIoDescriptor.c)
 *     PnpCmResourcesToBiosResources @ 0x1C0092830 (PnpCmResourcesToBiosResources.c)
 *     ACPIRootInitialize @ 0x1C0093778 (ACPIRootInitialize.c)
 *     IrqArbAddAllocation @ 0x1C009C4C0 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C009E1B4 (IrqArbpFindSuitableRangePci.c)
 *     IcCheckIrqConflict @ 0x1C009ECEC (IcCheckIrqConflict.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00A7C0C (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 *     ACPIInitStartACPI @ 0x1C00A8DF0 (ACPIInitStartACPI.c)
 *     ACPIInitialize @ 0x1C00A8F88 (ACPIInitialize.c)
 *     ACPIInitializeDDBs @ 0x1C00A94B0 (ACPIInitializeDDBs.c)
 *     ACPILoadFindRSDT @ 0x1C00A967C (ACPILoadFindRSDT.c)
 *     ACPILoadProcessDSDT @ 0x1C00A9710 (ACPILoadProcessDSDT.c)
 *     ACPILoadProcessFACS @ 0x1C00A9850 (ACPILoadProcessFACS.c)
 *     ACPILoadProcessFADT @ 0x1C00A99AC (ACPILoadProcessFADT.c)
 *     ACPILoadProcessRSDT @ 0x1C00A9AD4 (ACPILoadProcessRSDT.c)
 *     ACPIRegDumpAcpiTables @ 0x1C00AA18C (ACPIRegDumpAcpiTables.c)
 *     OSReadAcpiConfigurationData @ 0x1C00AA304 (OSReadAcpiConfigurationData.c)
 *     ACPIWmiInitLog @ 0x1C00AA8D0 (ACPIWmiInitLog.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C000ABD8
 * Reason: Hex-Rays returned no pseudocode for 0x1C000ABD8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000ABD8: mov     [rsp+arg_0], rbx
 * 00000001C000ABDD: mov     [rsp+arg_8], rbp
 * 00000001C000ABE2: mov     [rsp+arg_10], rsi
 * 00000001C000ABE7: push    rdi
 * 00000001C000ABE8: push    r14
 * 00000001C000ABEA: push    r15
 * 00000001C000ABEC: sub     rsp, 30h
 * 00000001C000ABF0: mov     r14d, r8d
 * 00000001C000ABF3: mov     r15, rcx
 * 00000001C000ABF6: mov     edi, r8d
 * 00000001C000ABF9: shr     rdi, 10h
 * 00000001C000ABFD: movzx   ebp, r9w
 * 00000001C000AC01: lea     ebx, [r14-1]
 * 00000001C000AC05: movzx   esi, dl
 * 00000001C000AC08: mov     r10d, ebx
 * 00000001C000AC0B: and     ebx, 1Fh
 * 00000001C000AC0E: shr     r10, 5
 * 00000001C000AC12: lea     rax, [rdi+rdi*4]
 * 00000001C000AC16: and     r10d, 7FFh
 * 00000001C000AC1D: lea     r11, [r10+rax*4]
 * 00000001C000AC21: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C000AC28: mov     eax, [r10+r11*4+2Ch]
 * 00000001C000AC2D: bt      eax, ebx
 * 00000001C000AC30: jnb     short loc_1C000AC65
 * 00000001C000AC32: lea     rcx, [rdi+rdi*4]
 * 00000001C000AC36: add     rcx, rcx
 * 00000001C000AC39: cmp     [r10+rcx*8+29h], sil
 * 00000001C000AC3E: jb      short loc_1C000AC65
 * 00000001C000AC40: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000AC47: mov     r9d, ebp
 * 00000001C000AC4A: and     [rsp+48h+var_28], 0
 * 00000001C000AC50: mov     edx, 2Bh ; '+'
 * 00000001C000AC55: mov     r8, [rsp+48h+arg_20]
 * 00000001C000AC5A: mov     rcx, [r10+rcx*8+18h]
 * 00000001C000AC5F: call    cs:__guard_dispatch_icall_fptr
 * 00000001C000AC65: and     [rsp+48h+var_20], 0
 * 00000001C000AC6B: mov     r8d, r14d
 * 00000001C000AC6E: mov     r9, [rsp+48h+arg_20]
 * 00000001C000AC73: mov     edx, esi
 * 00000001C000AC75: mov     rcx, r15
 * 00000001C000AC78: mov     word ptr [rsp+48h+var_28], bp
 * 00000001C000AC7D: call    cs:__imp_WppAutoLogTrace
 * 00000001C000AC84: nop     dword ptr [rax+rax+00h]
 * 00000001C000AC89: mov     rbx, [rsp+48h+arg_0]
 * 00000001C000AC8E: mov     rbp, [rsp+48h+arg_8]
 * 00000001C000AC93: mov     rsi, [rsp+48h+arg_10]
 * 00000001C000AC98: add     rsp, 30h
 * 00000001C000AC9C: pop     r15
 * 00000001C000AC9E: pop     r14
 * 00000001C000ACA0: pop     rdi
 * 00000001C000ACA1: retn
 */
