/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C000ACAC
 * Callers:
 *     ACPIInterruptDispatchEventDpc @ 0x1C0003670 (ACPIInterruptDispatchEventDpc.c)
 *     ReadIoMemRaw @ 0x1C0004968 (ReadIoMemRaw.c)
 *     ACPIVectorDisable @ 0x1C0004FF0 (ACPIVectorDisable.c)
 *     ACPIVectorEnable @ 0x1C00050C0 (ACPIVectorEnable.c)
 *     ACPIBuildDeviceExtension @ 0x1C000C314 (ACPIBuildDeviceExtension.c)
 *     ACPIBuildDockExtension @ 0x1C000CEDC (ACPIBuildDockExtension.c)
 *     ACPIBuildPowerResourceExtension @ 0x1C000DFDC (ACPIBuildPowerResourceExtension.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C00146C0 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIDeviceDiscoverDependencies @ 0x1C001CD24 (ACPIDeviceDiscoverDependencies.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x1C0022448 (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIDispatchAddDevice @ 0x1C0023F50 (ACPIDispatchAddDevice.c)
 *     ACPIGpeBuildEventMasks @ 0x1C002BE64 (ACPIGpeBuildEventMasks.c)
 *     OSNotifyCreate @ 0x1C0032600 (OSNotifyCreate.c)
 *     OSNotifyCreateProcessor @ 0x1C0032ADC (OSNotifyCreateProcessor.c)
 *     WriteIoMemRaw @ 0x1C0034508 (WriteIoMemRaw.c)
 *     InternalOpRegionHandler @ 0x1C0039C20 (InternalOpRegionHandler.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C0039CE0 (InternalRawAccessOpRegionHandler.c)
 *     ACPIRangeValidatePciMemoryResource @ 0x1C003B10C (ACPIRangeValidatePciMemoryResource.c)
 *     ACPIVectorBuildVectorMasks @ 0x1C0043D64 (ACPIVectorBuildVectorMasks.c)
 *     LinkNodeCrackPrt @ 0x1C005CEBC (LinkNodeCrackPrt.c)
 *     ACPIBusIrpStartDevice @ 0x1C0081500 (ACPIBusIrpStartDevice.c)
 *     QueryExternalTranslatorInterface @ 0x1C00844A4 (QueryExternalTranslatorInterface.c)
 *     ACPIFilterIrpStartDevice @ 0x1C00867B0 (ACPIFilterIrpStartDevice.c)
 *     ACPIProcessHardwareInformation @ 0x1C00889C0 (ACPIProcessHardwareInformation.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C008D16C (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008D3EC (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C008D6AC (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C008D930 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSCreateHandle @ 0x1C008DB64 (OSCreateHandle.c)
 *     OSOpenHandle @ 0x1C008DF20 (OSOpenHandle.c)
 *     OSOpenNextSubkey @ 0x1C008E1A8 (OSOpenNextSubkey.c)
 *     OSOpenUnicodeHandle @ 0x1C008E3EC (OSOpenUnicodeHandle.c)
 *     OSReadNextRegValue @ 0x1C008E48C (OSReadNextRegValue.c)
 *     OSReadRegValue @ 0x1C008E6B0 (OSReadRegValue.c)
 *     OSWriteRegValue @ 0x1C008EC40 (OSWriteRegValue.c)
 *     PnpBiosResourcesToNtResources @ 0x1C008EFEC (PnpBiosResourcesToNtResources.c)
 *     PnpBiosUpdateResourceListWithSidebandResources @ 0x1C008FBD8 (PnpBiosUpdateResourceListWithSidebandResources.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C00904B0 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C0090840 (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressHandleMemoryFlags @ 0x1C0090E14 (PnpiBiosAddressHandleMemoryFlags.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C0090EBC (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C00912DC (PnpiBiosAddressToIoDescriptor.c)
 *     PnpCmResourcesToBiosResources @ 0x1C0092830 (PnpCmResourcesToBiosResources.c)
 *     IrqArbAddAllocation @ 0x1C009C4C0 (IrqArbAddAllocation.c)
 *     IrqArbGetNextAllocationRange @ 0x1C009D3C0 (IrqArbGetNextAllocationRange.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C009DB1C (IrqArbpAssignIrqFromLinkNode.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C009E1B4 (IrqArbpFindSuitableRangePci.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C009E8A0 (IrqArbpUnreferenceArbitrationList.c)
 *     OSInterruptVector @ 0x1C00A8324 (OSInterruptVector.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00A89A8 (ACPIInitReadRegistryKeys.c)
 *     ACPIInitialize @ 0x1C00A8F88 (ACPIInitialize.c)
 *     ACPIInitializeAMLI @ 0x1C00A92E4 (ACPIInitializeAMLI.c)
 *     ACPIInitializeDDB @ 0x1C00A93D4 (ACPIInitializeDDB.c)
 *     ACPILoadProcessFACS @ 0x1C00A9850 (ACPILoadProcessFACS.c)
 *     ACPILoadProcessRSDT @ 0x1C00A9AD4 (ACPILoadProcessRSDT.c)
 *     OSReadAcpiConfigurationData @ 0x1C00AA304 (OSReadAcpiConfigurationData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_d @ 0x1C000ACAC
 * Reason: Hex-Rays returned no pseudocode for 0x1C000ACAC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000ACAC: mov     [rsp+arg_0], rbx
 * 00000001C000ACB1: mov     [rsp+arg_8], rbp
 * 00000001C000ACB6: mov     [rsp+arg_10], rsi
 * 00000001C000ACBB: push    rdi
 * 00000001C000ACBC: push    r14
 * 00000001C000ACBE: push    r15
 * 00000001C000ACC0: sub     rsp, 40h
 * 00000001C000ACC4: mov     r14d, r8d
 * 00000001C000ACC7: mov     r15, rcx
 * 00000001C000ACCA: mov     edi, r8d
 * 00000001C000ACCD: shr     rdi, 10h
 * 00000001C000ACD1: movzx   esi, dl
 * 00000001C000ACD4: lea     ebx, [r14-1]
 * 00000001C000ACD8: movzx   ebp, r9w
 * 00000001C000ACDC: mov     r10d, ebx
 * 00000001C000ACDF: and     ebx, 1Fh
 * 00000001C000ACE2: shr     r10, 5
 * 00000001C000ACE6: lea     rax, [rdi+rdi*4]
 * 00000001C000ACEA: and     r10d, 7FFh
 * 00000001C000ACF1: mov     edx, ebx
 * 00000001C000ACF3: mov     ebx, 4
 * 00000001C000ACF8: lea     r11, [r10+rax*4]
 * 00000001C000ACFC: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C000AD03: mov     eax, [r10+r11*4+2Ch]
 * 00000001C000AD08: bt      eax, edx
 * 00000001C000AD0B: jnb     short loc_1C000AD53
 * 00000001C000AD0D: lea     rcx, [rdi+rdi*4]
 * 00000001C000AD11: add     rcx, rcx
 * 00000001C000AD14: cmp     [r10+rcx*8+29h], sil
 * 00000001C000AD19: jb      short loc_1C000AD53
 * 00000001C000AD1B: and     [rsp+58h+var_28], 0
 * 00000001C000AD21: lea     rdx, [rsp+58h+arg_28]
 * 00000001C000AD29: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000AD30: mov     r9d, ebp
 * 00000001C000AD33: mov     r8, [rsp+58h+arg_20]
 * 00000001C000AD3B: mov     rcx, [r10+rcx*8+18h]
 * 00000001C000AD40: mov     [rsp+58h+var_30], rbx
 * 00000001C000AD45: mov     [rsp+58h+var_38], rdx
 * 00000001C000AD4A: lea     edx, [rbx+27h]
 * 00000001C000AD4D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C000AD53: and     [rsp+58h+var_20], 0
 * 00000001C000AD59: lea     rax, [rsp+58h+arg_28]
 * 00000001C000AD61: mov     r9, [rsp+58h+arg_20]
 * 00000001C000AD69: mov     r8d, r14d
 * 00000001C000AD6C: mov     [rsp+58h+var_28], rbx
 * 00000001C000AD71: mov     edx, esi
 * 00000001C000AD73: mov     [rsp+58h+var_30], rax
 * 00000001C000AD78: mov     rcx, r15
 * 00000001C000AD7B: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C000AD80: call    cs:__imp_WppAutoLogTrace
 * 00000001C000AD87: nop     dword ptr [rax+rax+00h]
 * 00000001C000AD8C: mov     rbx, [rsp+58h+arg_0]
 * 00000001C000AD91: mov     rbp, [rsp+58h+arg_8]
 * 00000001C000AD96: mov     rsi, [rsp+58h+arg_10]
 * 00000001C000AD9B: add     rsp, 40h
 * 00000001C000AD9F: pop     r15
 * 00000001C000ADA1: pop     r14
 * 00000001C000ADA3: pop     rdi
 * 00000001C000ADA4: retn
 */
