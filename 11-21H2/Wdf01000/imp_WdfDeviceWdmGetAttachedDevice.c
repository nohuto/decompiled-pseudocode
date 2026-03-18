/*
 * XREFs of imp_WdfDeviceWdmGetAttachedDevice @ 0x1C0001200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qDqD @ 0x1C006B478 (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

_DEVICE_OBJECT *__fastcall imp_WdfDeviceWdmGetAttachedDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device)
{
  __int64 v3; // rcx
  FxDeviceBase *flags; // rdi
  FxDeviceBase_vtbl *v5; // rax
  unsigned __int8 v6; // dl
  unsigned int v7; // r8d
  unsigned __int16 v8; // r9
  const _GUID *v10; // [rsp+20h] [rbp-48h]
  FxDeviceBase **p_pDevice; // [rsp+50h] [rbp-18h] BYREF
  __int16 v12; // [rsp+58h] [rbp-10h]
  __int16 v13; // [rsp+5Ah] [rbp-Eh]
  int v14; // [rsp+5Ch] [rbp-Ch]
  FxDeviceBase *pDevice; // [rsp+78h] [rbp+10h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1030uLL);
  LOWORD(v3) = 0;
  flags = (FxDeviceBase *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    v3 = LOWORD(flags->FxNonPagedObject::FxObject::__vftable);
    flags = (FxDeviceBase *)((char *)flags - v3);
  }
  if ( flags->m_Type == 4144 )
  {
    pDevice = flags;
  }
  else
  {
    pDevice = 0LL;
    p_pDevice = &pDevice;
    v13 = v3;
    v14 = 0;
    v5 = flags->FxNonPagedObject::FxObject::__vftable;
    v12 = 4144;
    if ( v5->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pDevice) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v6, v7, v8, v10, (const void *)Device, 0x1030u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Device, 0x1030uLL);
    }
    flags = pDevice;
  }
  return flags->m_AttachedDevice.m_DeviceObject;
}
