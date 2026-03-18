/*
 * XREFs of ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0082840
 * Callers:
 *     <none>
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0006470 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000AC00 (memset.c)
 *     ?_ComputeTotalDescriptionSize@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z @ 0x1C002680C (-_ComputeTotalDescriptionSize@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG.c)
 *     ?_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KPEAVFxDevice@@PEAU_WDF_CHILD_LIST_CONFIG@@E@Z @ 0x1C00268E8 (-_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KP.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?AllocateEnumInfo@FxPkgPnp@@QEAAJXZ @ 0x1C00716EC (-AllocateEnumInfo@FxPkgPnp@@QEAAJXZ.c)
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0073160 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 */

int __fastcall FxPkgFdo::Initialize(FxPkgFdo *this, WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int result; // eax
  __int64 v5; // rdx
  unsigned __int8 v6; // r8
  FxObject **p_m_StaticDeviceList; // rsi
  int v8; // eax
  FxObject *v9; // rcx
  int v10; // edi
  __int64 v11; // rcx
  _WDF_CHILD_LIST_CONFIG config; // [rsp+40h] [rbp-68h] BYREF
  WDFCHILDLIST__ *hList; // [rsp+B0h] [rbp+8h] BYREF

  hList = 0LL;
  m_Globals = this->m_Globals;
  result = FxPkgPnp::Initialize(this, DeviceInit);
  if ( result >= 0 )
  {
    result = FxPkgPnp::AllocateEnumInfo(this, v5, v6);
    if ( result >= 0 )
    {
      memset(&config, 0, sizeof(config));
      config.EvtChildListCreateDevice = 0LL;
      config.Size = 96;
      config.IdentificationDescriptionSize = 16;
      result = FxChildList::_ComputeTotalDescriptionSize(m_Globals, &config, (unsigned __int64 *)&hList);
      if ( result >= 0 )
      {
        p_m_StaticDeviceList = &this->m_StaticDeviceList;
        result = FxChildList::_CreateAndInit(
                   &this->m_StaticDeviceList,
                   m_Globals,
                   0LL,
                   (unsigned __int64)hList,
                   this->m_Device,
                   &config,
                   1u);
        if ( result >= 0 )
        {
          v8 = FxObject::Commit(
                 *p_m_StaticDeviceList,
                 0LL,
                 (void **)&hList,
                 (_FX_DRIVER_GLOBALS *)this->m_DeviceBase,
                 1u);
          v9 = *p_m_StaticDeviceList;
          v10 = v8;
          if ( v8 >= 0 )
          {
            FxObject::AddRef(v9, this, 447, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\km\\fxpkgfdokm.cpp");
          }
          else
          {
            FxObject::ClearEvtCallbacks(v9);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 48LL))(v11);
            *p_m_StaticDeviceList = 0LL;
          }
          return v10;
        }
      }
    }
  }
  return result;
}
