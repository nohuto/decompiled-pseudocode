/*
 * XREFs of imp_WdfChildListCreate @ 0x1C0020D40
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00020FC (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KPEAVFxDevice@@PEAU_WDF_CHILD_LIST_CONFIG@@E@Z @ 0x1C00268E8 (-_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KP.c)
 *     ?_ValidateConfig@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z @ 0x1C00269D4 (-_ValidateConfig@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

int __fastcall imp_WdfChildListCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_CHILD_LIST_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *DeviceListAttributes,
        WDFCHILDLIST__ **DeviceList)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  void **v9; // rdi
  int result; // eax
  int v11; // esi
  FxChildList *v12; // rsi
  signed int v13; // eax
  signed int v14; // edi
  FxChildList *pList; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+78h] [rbp+28h]
  FxDevice *pDevice; // [rsp+80h] [rbp+30h] BYREF
  unsigned __int64 totalDescriptionSize; // [rsp+90h] [rbp+40h] BYREF

  pDevice = 0LL;
  pList = 0LL;
  totalDescriptionSize = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0xAu, WPP_FxChildListAPI_cpp_Traceguids, Device);
  if ( !Config )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v9 = (void **)DeviceList;
  if ( !DeviceList )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *DeviceList = 0LL;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( result >= 0 )
  {
    v11 = FxChildList::_ValidateConfig(m_Globals, Config, &totalDescriptionSize);
    if ( v11 >= 0 )
    {
      result = FxValidateObjectAttributes(m_Globals, DeviceListAttributes, 1);
      if ( result >= 0 )
      {
        result = pDevice->AllocateEnumInfo(pDevice);
        if ( result >= 0 )
        {
          result = FxChildList::_CreateAndInit(
                     &pList,
                     m_Globals,
                     DeviceListAttributes,
                     totalDescriptionSize,
                     pDevice,
                     Config,
                     0);
          if ( result >= 0 )
          {
            v12 = pList;
            v13 = FxObject::Commit(pList, DeviceListAttributes, v9, (_FX_DRIVER_GLOBALS *)pDevice, 1u);
            v14 = v13;
            if ( v13 >= 0 )
            {
              pDevice->SetDeviceTelemetryInfoFlags(pDevice, DeviceInfoHasDynamicChildren);
            }
            else
            {
              WPP_IFR_SF_D(m_Globals, 2u, 0xCu, 0xCu, WPP_FxChildListAPI_cpp_Traceguids, v13);
              FxObject::ClearEvtCallbacks(v12);
              ((void (*)(void))v12->DeleteObject)();
            }
            return v14;
          }
        }
      }
    }
    else
    {
      WPP_IFR_SF_q(m_Globals, 2u, 0xCu, 0xBu, WPP_FxChildListAPI_cpp_Traceguids, Device);
      return v11;
    }
  }
  return result;
}
