/*
 * XREFs of imp_WdfDeviceInitSetFileObjectConfig @ 0x1C002F5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00020FC (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C0017D64 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceInitSetFileObjectConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_FILEOBJECT_CONFIG *FileObjectConfig,
        _WDF_OBJECT_ATTRIBUTES *FileObjectAttributes)
{
  _FX_DRIVER_GLOBALS *v7; // rbx
  _WDF_TRI_STATE AutoForwardCleanupClose; // ecx
  _WDF_FILEOBJECT_CLASS FileObjectClass; // esi
  int _a1; // ecx
  int v11; // ecx
  unsigned __int16 v12; // r9
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v7 = DeviceInit->DriverGlobals;
  if ( !FileObjectConfig )
    FxVerifierNullBugCheck(v7, retaddr);
  if ( FileObjectConfig->Size != 40 )
  {
    WPP_IFR_SF_dd(v7, 2u, 0x12u, 0xBu, WPP_FxDeviceInitApi_cpp_Traceguids, FileObjectConfig->Size, 40);
LABEL_25:
    FxVerifierDbgBreakPoint(v7);
    return;
  }
  if ( (int)FxValidateObjectAttributes(v7, FileObjectAttributes, 7) < 0 )
    goto LABEL_25;
  AutoForwardCleanupClose = FileObjectConfig->AutoForwardCleanupClose;
  if ( AutoForwardCleanupClose && (unsigned int)(AutoForwardCleanupClose - 1) >= 2 )
  {
    WPP_IFR_SF_D(v7, 2u, 0x12u, 0xCu, WPP_FxDeviceInitApi_cpp_Traceguids, FileObjectConfig->AutoForwardCleanupClose);
    goto LABEL_25;
  }
  DeviceInit->FileObject.Set = 1;
  DeviceInit->FileObject.AutoForwardCleanupClose = FileObjectConfig->AutoForwardCleanupClose;
  FileObjectClass = FileObjectConfig->FileObjectClass;
  _a1 = FileObjectClass & 0x7FFFFFFF;
  if ( (FileObjectClass & 0x7FFFFFFFu) - 1 > 3 )
  {
    v12 = 13;
    goto LABEL_24;
  }
  if ( v7->IsUserModeDriver && (unsigned int)(_a1 - 2) <= 1 )
  {
    FileObjectClass = ((FileObjectClass >= WdfFileObjectInvalid) << 31) - 2147483644;
    if ( v7->FxVerboseOn )
      WPP_IFR_SF_dd(v7, 5u, 0x12u, 0xEu, WPP_FxDeviceInitApi_cpp_Traceguids, _a1, 4);
    _a1 = FileObjectClass & 0x7FFFFFFF;
  }
  if ( FileObjectClass < WdfFileObjectInvalid )
  {
    v11 = _a1 - 2;
    if ( v11 )
    {
      if ( (unsigned int)(v11 - 1) >= 2 )
      {
        v12 = 15;
LABEL_24:
        WPP_IFR_SF_D(v7, 2u, 0x12u, v12, WPP_FxDeviceInitApi_cpp_Traceguids, FileObjectClass);
        goto LABEL_25;
      }
    }
  }
  DeviceInit->FileObject.Class = FileObjectClass;
  *(_OWORD *)&DeviceInit->FileObject.Callbacks.Size = *(_OWORD *)&FileObjectConfig->Size;
  *(_OWORD *)&DeviceInit->FileObject.Callbacks.EvtFileClose = *(_OWORD *)&FileObjectConfig->EvtFileClose;
  *(_QWORD *)&DeviceInit->FileObject.Callbacks.AutoForwardCleanupClose = *(_QWORD *)&FileObjectConfig->AutoForwardCleanupClose;
  if ( FileObjectAttributes )
  {
    *(_OWORD *)&DeviceInit->FileObject.Attributes.Size = *(_OWORD *)&FileObjectAttributes->Size;
    *(_OWORD *)&DeviceInit->FileObject.Attributes.EvtDestroyCallback = *(_OWORD *)&FileObjectAttributes->EvtDestroyCallback;
    *(_OWORD *)&DeviceInit->FileObject.Attributes.ParentObject = *(_OWORD *)&FileObjectAttributes->ParentObject;
    DeviceInit->FileObject.Attributes.ContextTypeInfo = FileObjectAttributes->ContextTypeInfo;
  }
}
