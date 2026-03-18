/*
 * XREFs of ACPIInitialize @ 0x1C00BE48C
 * Callers:
 *     ACPIInitStartACPI @ 0x1C00BEC40 (ACPIInitStartACPI.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_D @ 0x1C0001C0C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C00234AC (WPP_RECORDER_SF_.c)
 *     ACPIInitializeKernelTableHandler @ 0x1C00241DC (ACPIInitializeKernelTableHandler.c)
 *     ACPIEnableInitializeACPI @ 0x1C00244C0 (ACPIEnableInitializeACPI.c)
 *     ACPIKsrSupportInitialize @ 0x1C0024810 (ACPIKsrSupportInitialize.c)
 *     ACPIInternalInterruptHonorBiosPolarities @ 0x1C002486C (ACPIInternalInterruptHonorBiosPolarities.c)
 *     ACPIGetTableVersion @ 0x1C00248C0 (ACPIGetTableVersion.c)
 *     ACPIQueryPhysicalDeviceLocation @ 0x1C00939F8 (ACPIQueryPhysicalDeviceLocation.c)
 *     ACPIInterruptInitialize @ 0x1C009E0C8 (ACPIInterruptInitialize.c)
 *     ACPIInitializeAMLI @ 0x1C00BCD04 (ACPIInitializeAMLI.c)
 *     ACPIInitializeDDBs @ 0x1C00BD6E4 (ACPIInitializeDDBs.c)
 *     ACPILoadProcessRSDT @ 0x1C00BD9F8 (ACPILoadProcessRSDT.c)
 *     AcpiIrqLibConfigureLibrary @ 0x1C00BE048 (AcpiIrqLibConfigureLibrary.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00BE654 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 *     AcpiIrqLibInitializeGlobalState @ 0x1C00BEA3C (AcpiIrqLibInitializeGlobalState.c)
 */

char __fastcall ACPIInitialize(ULONG_PTR BugCheckParameter3)
{
  int v2; // eax
  int v3; // eax
  _QWORD *v4; // rax
  int v5; // eax
  __int64 v6; // rdx
  int v7; // eax
  ULONG_PTR BugCheckParameter4; // rbx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  ULONG_PTR v12; // rbx
  __int64 DeviceExtension; // rax
  __int64 v15; // [rsp+28h] [rbp-20h]
  unsigned int v16; // [rsp+58h] [rbp+10h] BYREF
  int v17; // [rsp+60h] [rbp+18h] BYREF

  v16 = 0;
  v17 = 0;
  v2 = EmProviderRegister(AcpiDriverObject, &EntryReg, 3LL, &CallbackReg, 3, &AcpiEmProviderHandle);
  if ( v2 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v15) = v2;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x1Fu,
      (__int64)&WPP_786589887d18386d1941a386bf041506_Traceguids,
      v15);
  }
  v3 = ACPIInitializeAMLI();
  if ( v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v15) = v3;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x20u,
        (__int64)&WPP_786589887d18386d1941a386bf041506_Traceguids,
        v15);
    }
    KeBugCheckEx(0xA5u, 0x11uLL, 0LL, 0LL, 0LL);
  }
  AcpiIrqLibInitializeGlobalState(BugCheckParameter3);
  KeInitializeSpinLock(&GpeTableLock);
  KeInitializeSpinLock(&NotifyHandlerLock);
  qword_1C0082768 = (__int64)&AcpiDynamicDataBlockTableList;
  AcpiDynamicDataBlockTableList = (__int64)&AcpiDynamicDataBlockTableList;
  KeInitializeSpinLock((PKSPIN_LOCK)AcpiInformation + 8);
  v4 = (_QWORD *)((char *)AcpiInformation + 48);
  *((_QWORD *)AcpiInformation + 7) = (char *)AcpiInformation + 48;
  *v4 = v4;
  *((_QWORD *)AcpiInformation + 9) = 0LL;
  *((_DWORD *)AcpiInformation + 20) = 0;
  v5 = ACPILoadProcessRSDT();
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v15) = v5;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x21u,
        (__int64)&WPP_786589887d18386d1941a386bf041506_Traceguids,
        v15);
    }
    KeBugCheckEx(0xA5u, 0x11uLL, 3uLL, 0LL, 0LL);
  }
  gAcpiHonorBiosPolarities = ACPIInternalInterruptHonorBiosPolarities();
  if ( (int)ACPIGetTableVersion(1346584902, &v16) >= 0 && v16 >= 5 )
    AcpiRetainDebugDeviceInD0 = 1;
  ACPIKsrSupportInitialize();
  ACPIEnableInitializeACPI(0LL, v6);
  v7 = ACPIInitializeDDBs();
  BugCheckParameter4 = v7;
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v15) = v7;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x22u,
        (__int64)&WPP_786589887d18386d1941a386bf041506_Traceguids,
        v15);
    }
    KeBugCheckEx(0xA5u, 0x11uLL, 4uLL, 0LL, BugCheckParameter4);
  }
  v9 = NotifyHalWithMachineStatesAndRetrieveInterruptModel(&v17);
  if ( v9 < 0 )
    KeBugCheckEx(0xA5u, 0x11uLL, 5uLL, 0LL, v9);
  v10 = AcpiIrqLibConfigureLibrary(v17, *((_QWORD *)AcpiInformation + 4));
  if ( v10 < 0 )
    KeBugCheckEx(0xA5u, 0x11uLL, 6uLL, 0LL, v10);
  v11 = ACPIInterruptInitialize(BugCheckParameter3);
  v12 = v11;
  if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0x23u,
        (__int64)&WPP_786589887d18386d1941a386bf041506_Traceguids);
    KeBugCheckEx(0xA5u, 0x11uLL, 7uLL, 0LL, v12);
  }
  ACPIInitializeKernelTableHandler(1, *(_QWORD *)(BugCheckParameter3 + 8));
  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  if ( DeviceExtension )
    ACPIQueryPhysicalDeviceLocation(DeviceExtension);
  return 1;
}
