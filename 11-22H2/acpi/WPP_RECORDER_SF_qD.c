/*
 * XREFs of WPP_RECORDER_SF_qD @ 0x1C001B528
 * Callers:
 *     ACPIDetectDockDevices @ 0x1C0019FF0 (ACPIDetectDockDevices.c)
 *     ACPIDetectEjectDevices @ 0x1C001A6E0 (ACPIDetectEjectDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C001AE54 (ACPIDetectPdoDevices.c)
 *     ACPIDeviceCompletePhase3Off @ 0x1C001C6E0 (ACPIDeviceCompletePhase3Off.c)
 *     ACPIDeviceCompletePhase3On @ 0x1C001C800 (ACPIDeviceCompletePhase3On.c)
 *     ACPIDeviceCompletePhase3Reset @ 0x1C001C8E0 (ACPIDeviceCompletePhase3Reset.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C001F7A0 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase2 @ 0x1C001FAC0 (ACPIDevicePowerProcessPhase2SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase3 @ 0x1C001FB60 (ACPIDevicePowerProcessPhase2SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase4 @ 0x1C001FC80 (ACPIDevicePowerProcessPhase2SystemSubPhase4.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x1C001FEC4 (ACPIDevicePowerProcessPhase3.c)
 *     OSNotifyCreateDevice @ 0x1C0032758 (OSNotifyCreateDevice.c)
 *     OSNotifyCreateOperationRegion @ 0x1C003287C (OSNotifyCreateOperationRegion.c)
 *     OSNotifyCreatePowerResource @ 0x1C0032A34 (OSNotifyCreatePowerResource.c)
 *     OSNotifyCreateProcessor @ 0x1C0032ADC (OSNotifyCreateProcessor.c)
 *     OSNotifyCreateThermalZone @ 0x1C0032BE0 (OSNotifyCreateThermalZone.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C00334AC (OSNotifyDeviceWakeByInterrupt.c)
 *     AcpiAllocateNativeMethodOutputBuffer @ 0x1C0036B60 (AcpiAllocateNativeMethodOutputBuffer.c)
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C0036CC4 (AcpiConvertMethodArgumentsToObjData.c)
 *     AcpiNotifyPlExtDeleteDeviceAsync @ 0x1C0037810 (AcpiNotifyPlExtDeleteDeviceAsync.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0037A7C (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     AcpiSetupNativeMethodContext @ 0x1C0037EC0 (AcpiSetupNativeMethodContext.c)
 *     ACPIAsyncAcquireGlobalLock @ 0x1C0039150 (ACPIAsyncAcquireGlobalLock.c)
 *     ACPIReleaseGlobalLock @ 0x1C003939C (ACPIReleaseGlobalLock.c)
 *     ACPIRootDeviceDiscoverDeviceCompletion @ 0x1C003CE20 (ACPIRootDeviceDiscoverDeviceCompletion.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C0083DB0 (AcpiExternalTranslateBiosToNtResources.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C008823C (ACPIInternalSendSynchronousIrp.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C008B630 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 *     PnpBiosResourcesToNtResources @ 0x1C008EFEC (PnpBiosResourcesToNtResources.c)
 *     ACPILoadTableCheckSum @ 0x1C00A9F08 (ACPILoadTableCheckSum.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qD @ 0x1C001B528
 * Reason: Hex-Rays returned no pseudocode for 0x1C001B528
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C001B528: mov     [rsp+arg_0], rbx
 * 00000001C001B52D: mov     [rsp+arg_8], rbp
 * 00000001C001B532: mov     [rsp+arg_10], rsi
 * 00000001C001B537: push    rdi
 * 00000001C001B538: push    r14
 * 00000001C001B53A: push    r15
 * 00000001C001B53C: sub     rsp, 50h
 * 00000001C001B540: mov     r14d, r8d
 * 00000001C001B543: mov     r15, rcx
 * 00000001C001B546: mov     edi, r8d
 * 00000001C001B549: shr     rdi, 10h
 * 00000001C001B54D: movzx   esi, dl
 * 00000001C001B550: lea     ebx, [r14-1]
 * 00000001C001B554: movzx   ebp, r9w
 * 00000001C001B558: mov     r10d, ebx
 * 00000001C001B55B: and     ebx, 1Fh
 * 00000001C001B55E: shr     r10, 5
 * 00000001C001B562: lea     rax, [rdi+rdi*4]
 * 00000001C001B566: and     r10d, 7FFh
 * 00000001C001B56D: mov     edx, ebx
 * 00000001C001B56F: mov     ebx, 4
 * 00000001C001B574: lea     r11, [r10+rax*4]
 * 00000001C001B578: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C001B57F: mov     eax, [r10+r11*4+2Ch]
 * 00000001C001B584: bt      eax, edx
 * 00000001C001B587: jnb     short loc_1C001B5E5
 * 00000001C001B589: lea     rcx, [rdi+rdi*4]
 * 00000001C001B58D: add     rcx, rcx
 * 00000001C001B590: cmp     [r10+rcx*8+29h], sil
 * 00000001C001B595: jb      short loc_1C001B5E5
 * 00000001C001B597: and     [rsp+68h+var_28], 0
 * 00000001C001B59D: lea     rdx, [rsp+68h+arg_30]
 * 00000001C001B5A5: mov     rax, cs:pfnWppTraceMessage
 * 00000001C001B5AC: mov     r9d, ebp
 * 00000001C001B5AF: mov     r8, [rsp+68h+arg_20]
 * 00000001C001B5B7: mov     rcx, [r10+rcx*8+18h]
 * 00000001C001B5BC: mov     [rsp+68h+var_30], rbx
 * 00000001C001B5C1: mov     [rsp+68h+var_38], rdx
 * 00000001C001B5C6: lea     rdx, [rsp+68h+arg_28]
 * 00000001C001B5CE: mov     [rsp+68h+var_40], 8
 * 00000001C001B5D7: mov     [rsp+68h+var_48], rdx
 * 00000001C001B5DC: lea     edx, [rbx+27h]
 * 00000001C001B5DF: call    cs:__guard_dispatch_icall_fptr
 * 00000001C001B5E5: and     [rsp+68h+var_20], 0
 * 00000001C001B5EB: lea     rax, [rsp+68h+arg_30]
 * 00000001C001B5F3: mov     r9, [rsp+68h+arg_20]
 * 00000001C001B5FB: mov     r8d, r14d
 * 00000001C001B5FE: mov     [rsp+68h+var_28], rbx
 * 00000001C001B603: mov     edx, esi
 * 00000001C001B605: mov     [rsp+68h+var_30], rax
 * 00000001C001B60A: mov     rcx, r15
 * 00000001C001B60D: lea     rax, [rsp+68h+arg_28]
 * 00000001C001B615: mov     [rsp+68h+var_38], 8
 * 00000001C001B61E: mov     [rsp+68h+var_40], rax
 * 00000001C001B623: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C001B628: call    cs:__imp_WppAutoLogTrace
 * 00000001C001B62F: nop     dword ptr [rax+rax+00h]
 * 00000001C001B634: lea     r11, [rsp+68h+var_18]
 * 00000001C001B639: mov     rbx, [r11+20h]
 * 00000001C001B63D: mov     rbp, [r11+28h]
 * 00000001C001B641: mov     rsi, [r11+30h]
 * 00000001C001B645: mov     rsp, r11
 * 00000001C001B648: pop     r15
 * 00000001C001B64A: pop     r14
 * 00000001C001B64C: pop     rdi
 * 00000001C001B64D: retn
 */
