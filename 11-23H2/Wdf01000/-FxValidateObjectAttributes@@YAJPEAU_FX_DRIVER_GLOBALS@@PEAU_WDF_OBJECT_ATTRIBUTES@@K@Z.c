/*
 * XREFs of ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00020FC
 * Callers:
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x1C00016F0 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     imp_WdfMemoryCreate @ 0x1C0001970 (imp_WdfMemoryCreate.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C0002AFC (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     imp_WdfDmaEnablerCreate @ 0x1C0018680 (imp_WdfDmaEnablerCreate.c)
 *     imp_WdfDmaTransactionCreate @ 0x1C0019950 (imp_WdfDmaTransactionCreate.c)
 *     imp_WdfCommonBufferCreate @ 0x1C001A4E0 (imp_WdfCommonBufferCreate.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C001A680 (imp_WdfCommonBufferCreateWithConfig.c)
 *     imp_WdfDpcCreate @ 0x1C0020600 (imp_WdfDpcCreate.c)
 *     imp_WdfChildListCreate @ 0x1C0020D40 (imp_WdfChildListCreate.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C002862C (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C0029294 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     imp_WdfDeviceInitSetFileObjectConfig @ 0x1C002F5C0 (imp_WdfDeviceInitSetFileObjectConfig.c)
 *     imp_WdfDeviceInitSetRequestAttributes @ 0x1C002FCD0 (imp_WdfDeviceInitSetRequestAttributes.c)
 *     imp_WdfFdoInitAllocAndQueryProperty @ 0x1C002FD80 (imp_WdfFdoInitAllocAndQueryProperty.c)
 *     imp_WdfFdoInitAllocAndQueryPropertyEx @ 0x1C002FEA0 (imp_WdfFdoInitAllocAndQueryPropertyEx.c)
 *     imp_WdfFdoInitOpenRegistryKey @ 0x1C0030020 (imp_WdfFdoInitOpenRegistryKey.c)
 *     imp_WdfFdoInitSetDefaultChildListConfig @ 0x1C0030370 (imp_WdfFdoInitSetDefaultChildListConfig.c)
 *     imp_WdfDeviceAllocAndQueryProperty @ 0x1C0031C30 (imp_WdfDeviceAllocAndQueryProperty.c)
 *     imp_WdfDeviceAllocAndQueryPropertyEx @ 0x1C0031DA0 (imp_WdfDeviceAllocAndQueryPropertyEx.c)
 *     imp_WdfDeviceCreate @ 0x1C0032640 (imp_WdfDeviceCreate.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1C0032C40 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfDeviceOpenRegistryKey @ 0x1C0032E10 (imp_WdfDeviceOpenRegistryKey.c)
 *     imp_WdfMemoryCreatePreallocated @ 0x1C0034950 (imp_WdfMemoryCreatePreallocated.c)
 *     imp_WdfCxDeviceInitSetFileObjectConfig @ 0x1C0036570 (imp_WdfCxDeviceInitSetFileObjectConfig.c)
 *     imp_WdfCxDeviceInitSetRequestAttributes @ 0x1C0036B60 (imp_WdfCxDeviceInitSetRequestAttributes.c)
 *     imp_WdfDriverCreate @ 0x1C0037350 (imp_WdfDriverCreate.c)
 *     imp_WdfWorkItemCreate @ 0x1C0037C00 (imp_WdfWorkItemCreate.c)
 *     imp_WdfTimerCreate @ 0x1C0037D90 (imp_WdfTimerCreate.c)
 *     imp_WdfLookasideListCreate @ 0x1C0038110 (imp_WdfLookasideListCreate.c)
 *     imp_WdfDeviceMiniportCreate @ 0x1C0038600 (imp_WdfDeviceMiniportCreate.c)
 *     imp_WdfDriverOpenPersistentStateRegistryKey @ 0x1C0038820 (imp_WdfDriverOpenPersistentStateRegistryKey.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C003CED4 (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0043354 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     imp_WdfObjectCreate @ 0x1C00454A0 (imp_WdfObjectCreate.c)
 *     imp_WdfIoResourceListCreate @ 0x1C00491C0 (imp_WdfIoResourceListCreate.c)
 *     imp_WdfRegistryCreateKey @ 0x1C004ACD0 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryOpenKey @ 0x1C004AF50 (imp_WdfRegistryOpenKey.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C004B1B0 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C004B470 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfWaitLockCreate @ 0x1C004BFF0 (imp_WdfWaitLockCreate.c)
 *     imp_WdfCollectionCreate @ 0x1C004C2A0 (imp_WdfCollectionCreate.c)
 *     imp_WdfSpinLockCreate @ 0x1C004C760 (imp_WdfSpinLockCreate.c)
 *     imp_WdfStringCreate @ 0x1C004C8C0 (imp_WdfStringCreate.c)
 *     imp_WdfIoTargetCreate @ 0x1C0051180 (imp_WdfIoTargetCreate.c)
 *     imp_WdfIoTargetAllocAndQueryTargetProperty @ 0x1C0051FC0 (imp_WdfIoTargetAllocAndQueryTargetProperty.c)
 *     imp_WdfUsbTargetPipeConfigContinuousReader @ 0x1C00567B0 (imp_WdfUsbTargetPipeConfigContinuousReader.c)
 *     imp_WdfUsbInterfaceSelectSetting @ 0x1C0057D80 (imp_WdfUsbInterfaceSelectSetting.c)
 *     FxUsbTargetDeviceCreate @ 0x1C0057F20 (FxUsbTargetDeviceCreate.c)
 *     imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x1C0058490 (imp_WdfUsbTargetDeviceAllocAndQueryString.c)
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x1C0058FF0 (imp_WdfUsbTargetDeviceSelectConfig.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C005CDE0 (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C005D024 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     imp_WdfIoQueueCreate @ 0x1C0061710 (imp_WdfIoQueueCreate.c)
 *     imp_WdfInterruptCreate @ 0x1C0067D20 (imp_WdfInterruptCreate.c)
 *     VfAllocateContext @ 0x1C00B83E0 (VfAllocateContext.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00183B0 (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_qDd @ 0x1C0018F98 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qddd @ 0x1C0019200 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qdd @ 0x1C0026A80 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qqddd @ 0x1C0045C24 (WPP_IFR_SF_qqddd.c)
 */

__int64 __fastcall FxValidateObjectAttributes(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        char Flags)
{
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *_a3; // rcx
  const void *ContextSizeOverride; // rax
  _WDF_EXECUTION_LEVEL ExecutionLevel; // eax
  _WDF_SYNCHRONIZATION_SCOPE SynchronizationScope; // ecx
  unsigned int v9; // ebx
  __int64 ContextSize; // rax
  unsigned __int64 v11; // r11
  void *ParentObject; // rcx

  if ( Attributes )
  {
    if ( Attributes->Size == 56 )
    {
      _a3 = Attributes->ContextTypeInfo;
      if ( _a3 )
      {
        if ( ((_a3->Size - 24) & 0xFFFFFFEF) != 0 )
        {
          v9 = -1073741820;
          WPP_IFR_SF_qqddd(
            FxDriverGlobals,
            (unsigned __int8)WPP_FxValidateFunctions_cpp_Traceguids,
            6u,
            0xCu,
            WPP_FxValidateFunctions_cpp_Traceguids,
            Attributes,
            _a3,
            _a3->Size,
            40,
            -1073741820);
          return v9;
        }
        ContextSize = _a3->ContextSize;
        if ( ContextSize && !_a3->ContextName )
        {
          v9 = -1071644151;
          WPP_IFR_SF_qqqd(
            FxDriverGlobals,
            2u,
            6u,
            0xDu,
            WPP_FxValidateFunctions_cpp_Traceguids,
            Attributes,
            _a3,
            ContextSize,
            -1071644151);
          return v9;
        }
      }
      ContextSizeOverride = (const void *)Attributes->ContextSizeOverride;
      if ( ContextSizeOverride )
      {
        if ( !_a3 )
        {
          v9 = -1071644151;
          WPP_IFR_SF_qid(
            FxDriverGlobals,
            2u,
            6u,
            0xEu,
            WPP_FxValidateFunctions_cpp_Traceguids,
            Attributes,
            (__int64)ContextSizeOverride,
            -1071644151);
          return v9;
        }
        v11 = _a3->ContextSize;
        if ( (unsigned __int64)ContextSizeOverride < v11 )
        {
          v9 = -1071644151;
          WPP_IFR_SF_qqqd(
            FxDriverGlobals,
            2u,
            6u,
            0xFu,
            WPP_FxValidateFunctions_cpp_Traceguids,
            Attributes,
            ContextSizeOverride,
            v11,
            -1071644151);
          return v9;
        }
      }
      if ( (Flags & 1) == 0 )
      {
        if ( (Flags & 0x10) != 0 && !Attributes->ParentObject )
        {
          v9 = -1071644142;
          WPP_IFR_SF_qd(
            FxDriverGlobals,
            2u,
            0x12u,
            0x11u,
            WPP_FxValidateFunctions_cpp_Traceguids,
            Attributes,
            -1071644142);
          return v9;
        }
        goto LABEL_7;
      }
      ParentObject = Attributes->ParentObject;
      if ( !ParentObject )
      {
LABEL_7:
        ExecutionLevel = Attributes->ExecutionLevel;
        if ( ExecutionLevel == WdfExecutionLevelInvalid || ExecutionLevel > WdfExecutionLevelDispatch )
        {
          v9 = -1071644151;
          WPP_IFR_SF_qdd(
            FxDriverGlobals,
            2u,
            6u,
            0x12u,
            WPP_FxValidateFunctions_cpp_Traceguids,
            Attributes,
            ExecutionLevel,
            0xC0200209);
          return v9;
        }
        SynchronizationScope = Attributes->SynchronizationScope;
        if ( SynchronizationScope == WdfSynchronizationScopeInvalid
          || SynchronizationScope > WdfSynchronizationScopeNone )
        {
          v9 = -1071644151;
          WPP_IFR_SF_qdd(
            FxDriverGlobals,
            2u,
            6u,
            0x13u,
            WPP_FxValidateFunctions_cpp_Traceguids,
            Attributes,
            SynchronizationScope,
            0xC0200209);
          return v9;
        }
        if ( (Flags & 4) == 0
          && SynchronizationScope != WdfSynchronizationScopeInheritFromParent
          && SynchronizationScope != WdfSynchronizationScopeNone )
        {
          v9 = -1071644144;
          WPP_IFR_SF_qDd(
            FxDriverGlobals,
            (unsigned __int8)WPP_FxValidateFunctions_cpp_Traceguids,
            6u,
            0x14u,
            WPP_FxValidateFunctions_cpp_Traceguids,
            Attributes,
            SynchronizationScope,
            0xC0200210);
          return v9;
        }
        if ( (Flags & 2) == 0 && ExecutionLevel != WdfExecutionLevelInheritFromParent )
        {
          v9 = -1071644143;
          WPP_IFR_SF_qDd(
            FxDriverGlobals,
            (unsigned __int8)WPP_FxValidateFunctions_cpp_Traceguids,
            6u,
            0x15u,
            WPP_FxValidateFunctions_cpp_Traceguids,
            Attributes,
            ExecutionLevel,
            0xC0200211);
          return v9;
        }
        return 0LL;
      }
      v9 = -1071644145;
      WPP_IFR_SF_qid(
        FxDriverGlobals,
        2u,
        6u,
        0x10u,
        WPP_FxValidateFunctions_cpp_Traceguids,
        Attributes,
        (__int64)ParentObject,
        -1071644145);
    }
    else
    {
      v9 = -1073741820;
      WPP_IFR_SF_qddd(
        FxDriverGlobals,
        (unsigned __int8)WPP_FxValidateFunctions_cpp_Traceguids,
        6u,
        0xBu,
        WPP_FxValidateFunctions_cpp_Traceguids,
        Attributes,
        56,
        Attributes->Size,
        -1073741820);
    }
  }
  else
  {
    if ( (Flags & 8) == 0 )
      return 0LL;
    v9 = -1071644142;
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0x12u, 0xAu, WPP_FxValidateFunctions_cpp_Traceguids, 0xC0200212);
  }
  return v9;
}
