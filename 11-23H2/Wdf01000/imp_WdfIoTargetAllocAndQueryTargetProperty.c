/*
 * XREFs of imp_WdfIoTargetAllocAndQueryTargetProperty @ 0x1C0051FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00020FC (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0026A80 (WPP_IFR_SF_qdd.c)
 *     ?_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@@Z @ 0x1C003EB40 (-_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVI.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfIoTargetAllocAndQueryTargetProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        __int32 DeviceProperty,
        _POOL_TYPE PoolType,
        _WDF_OBJECT_ATTRIBUTES *PropertyMemoryAttributes,
        WDFMEMORY__ **PropertyMemory)
{
  WDFMEMORY__ **v9; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  _WDF_OBJECT_ATTRIBUTES *v12; // rdi
  _DEVICE_OBJECT *m_TargetPdo; // r9
  unsigned int v14; // edi
  unsigned int Property; // eax
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]
  FxIoTarget *pTarget; // [rsp+60h] [rbp+8h] BYREF

  pTarget = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)IoTarget, 0x1200u, (void **)&pTarget);
  v9 = PropertyMemory;
  m_Globals = pTarget->m_Globals;
  if ( !PropertyMemory )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *PropertyMemory = 0LL;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    if ( m_Globals->FxVerifierOn )
      VfCheckNxPoolType((unsigned int)PoolType, retaddr, m_Globals->Tag);
    v12 = PropertyMemoryAttributes;
    result = FxValidateObjectAttributes(m_Globals, PropertyMemoryAttributes, 0);
    if ( (int)result >= 0 )
    {
      m_TargetPdo = pTarget->m_TargetPdo;
      if ( m_TargetPdo )
      {
        Property = FxDevice::_AllocAndQueryProperty(
                     m_Globals,
                     0LL,
                     0LL,
                     m_TargetPdo,
                     (DEVICE_REGISTRY_PROPERTY)DeviceProperty,
                     PoolType,
                     v12,
                     v9);
        v14 = Property;
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_qdd(
            m_Globals,
            5u,
            0xEu,
            0x13u,
            WPP_FxIoTargetAPIKm_cpp_Traceguids,
            IoTarget,
            DeviceProperty,
            Property);
      }
      else
      {
        v14 = -1073741808;
        WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x12u, WPP_FxIoTargetAPIKm_cpp_Traceguids, IoTarget, -1073741808);
      }
      return v14;
    }
  }
  return result;
}
