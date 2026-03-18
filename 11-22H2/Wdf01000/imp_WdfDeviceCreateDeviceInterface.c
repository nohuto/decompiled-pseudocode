/*
 * XREFs of imp_WdfDeviceCreateDeviceInterface @ 0x1C0049C90
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000134C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000153C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C00207E8 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ??_GFxDeviceInterface@@QEAAPEAXI@Z @ 0x1C0049AB4 (--_GFxDeviceInterface@@QEAAPEAXI@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C004F4B8 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ?Register@FxDeviceInterface@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C004FF10 (-Register@FxDeviceInterface@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall imp_WdfDeviceCreateDeviceInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _GUID *InterfaceClassGUID,
        const _UNICODE_STRING *ReferenceString)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  unsigned int v9; // edi
  unsigned __int16 v10; // r9
  bool v11; // zf
  ULONG Tag; // ecx
  void *v13; // rax
  FX_POOL **v14; // rax
  _FX_DRIVER_GLOBALS *v15; // rdx
  FxDeviceInterface *v16; // rdi
  int _a2; // eax
  int v18; // esi
  FxDeviceInterface *v19; // rbx
  FxPkgPnp *m_PkgPnp; // r14
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  _SINGLE_LIST_ENTRY *p_m_DeviceInterfaceHead; // rcx
  _SINGLE_LIST_ENTRY *i; // rax
  __m128i v24; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR retaddr; // [rsp+68h] [rbp+0h]
  FxDevice *pDevice; // [rsp+80h] [rbp+18h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !InterfaceClassGUID )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    if ( !ReferenceString || (result = FxValidateUnicodeString(m_Globals, ReferenceString), (int)result >= 0) )
    {
      if ( pDevice->m_Legacy )
      {
        v9 = -1073741808;
        v10 = 10;
LABEL_27:
        WPP_IFR_SF_qd(m_Globals, 2u, 2u, v10, WPP_FxDeviceInterfaceAPI_cpp_Traceguids, Device, v9);
        return v9;
      }
      v11 = m_Globals->FxPoolTrackingOn == 0;
      Tag = m_Globals->Tag;
      v24.m128i_i64[0] = 0LL;
      v24.m128i_i64[1] = 256LL;
      if ( v11 )
        v13 = 0LL;
      else
        v13 = (void *)retaddr;
      v14 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v24, 0x40uLL, Tag, v13);
      v16 = (FxDeviceInterface *)v14;
      if ( !v14 )
      {
        v9 = -1073741670;
        v10 = 11;
        goto LABEL_27;
      }
      *(_OWORD *)v14 = 0LL;
      *((_OWORD *)v14 + 2) = 0LL;
      *((_OWORD *)v14 + 1) = 0LL;
      v14[6] = 0LL;
      *((_WORD *)v14 + 28) = 256;
      *(_GUID *)v14 = *InterfaceClassGUID;
      if ( ReferenceString )
      {
        _a2 = FxDuplicateUnicodeString(m_Globals, ReferenceString, (_UNICODE_STRING *)v14 + 1);
        v18 = _a2;
        if ( _a2 < 0 )
        {
          WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0xCu, WPP_FxDeviceInterfaceAPI_cpp_Traceguids, Device, _a2);
          v19 = v16;
          goto LABEL_24;
        }
      }
      m_PkgPnp = pDevice->m_PkgPnp;
      FxWaitLockInternal::AcquireLock(&m_PkgPnp->m_DeviceInterfaceLock, v15, 0LL);
      SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(pDevice);
      if ( SafePhysicalDevice )
      {
        v18 = FxDeviceInterface::Register(v16, SafePhysicalDevice);
        v19 = v16;
        if ( v18 < 0 )
          goto LABEL_23;
      }
      else
      {
        v18 = 0;
      }
      p_m_DeviceInterfaceHead = &m_PkgPnp->m_DeviceInterfaceHead;
      v19 = v16;
      for ( i = m_PkgPnp->m_DeviceInterfaceHead.Next; i; i = i->Next )
        p_m_DeviceInterfaceHead = i;
      p_m_DeviceInterfaceHead->Next = &v16->m_Entry;
LABEL_23:
      m_PkgPnp->m_DeviceInterfaceLock.m_OwningThread = 0LL;
      KeSetEvent(&m_PkgPnp->m_DeviceInterfaceLock.m_Event.m_Event, 0, 0);
      KeLeaveCriticalRegion();
      if ( v18 >= 0 )
        return (unsigned int)v18;
LABEL_24:
      FxDeviceInterface::`scalar deleting destructor'(v19);
      return (unsigned int)v18;
    }
  }
  return result;
}
