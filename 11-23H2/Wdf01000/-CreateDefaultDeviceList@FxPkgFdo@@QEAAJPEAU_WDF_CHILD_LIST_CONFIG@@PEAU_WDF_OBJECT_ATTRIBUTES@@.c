/*
 * XREFs of ?CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0077B10
 * Callers:
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C003C710 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0006470 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 *     ?_ComputeTotalDescriptionSize@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z @ 0x1C002680C (-_ComputeTotalDescriptionSize@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG.c)
 *     ?_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KPEAVFxDevice@@PEAU_WDF_CHILD_LIST_CONFIG@@E@Z @ 0x1C00268E8 (-_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KP.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgFdo::CreateDefaultDeviceList(
        FxPkgFdo *this,
        _WDF_CHILD_LIST_CONFIG *ListConfig,
        _WDF_OBJECT_ATTRIBUTES *ListAttributes)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  __int64 result; // rax
  FxObject **p_m_DefaultDeviceList; // rdi
  int v9; // esi
  __int64 v10; // rcx
  WDFCHILDLIST__ *hList; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  hList = 0LL;
  result = FxChildList::_ComputeTotalDescriptionSize(m_Globals, ListConfig, (unsigned __int64 *)&hList);
  if ( (int)result >= 0 )
  {
    p_m_DefaultDeviceList = &this->m_DefaultDeviceList;
    result = FxChildList::_CreateAndInit(
               &this->m_DefaultDeviceList,
               m_Globals,
               ListAttributes,
               (unsigned __int64)hList,
               this->m_Device,
               ListConfig,
               0);
    if ( (int)result >= 0 )
    {
      v9 = FxObject::Commit(
             *p_m_DefaultDeviceList,
             ListAttributes,
             (void **)&hList,
             (_FX_DRIVER_GLOBALS *)this->m_DeviceBase,
             1u);
      if ( v9 >= 0 )
      {
        FxObject::AddRef(
          *p_m_DefaultDeviceList,
          this,
          882,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgfdo.cpp");
      }
      else
      {
        WPP_IFR_SF_(m_Globals, 2u, 0xCu, 0x16u, WPP_fxpkgfdo_cpp_Traceguids);
        FxObject::ClearEvtCallbacks(*p_m_DefaultDeviceList);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 48LL))(v10);
        *p_m_DefaultDeviceList = 0LL;
      }
      return (unsigned int)v9;
    }
  }
  return result;
}
