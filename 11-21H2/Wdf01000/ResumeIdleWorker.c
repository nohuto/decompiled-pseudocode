/*
 * XREFs of ResumeIdleWorker @ 0x1C0011760
 * Callers:
 *     imp_WdfDeviceResumeIdleNoTrack @ 0x1C0011710 (imp_WdfDeviceResumeIdleNoTrack.c)
 *     imp_WdfDeviceResumeIdleActual @ 0x1C0011740 (imp_WdfDeviceResumeIdleActual.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x1C0017128 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ResumeIdleWorker(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        void *Tag,
        int Line,
        char *File)
{
  FxPkgPnp *m_PkgPnp; // rax
  FxPkgPnp *v8; // rcx
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rax
  FxDevice *pDevice; // [rsp+30h] [rbp-18h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_PkgPnp = pDevice->m_PkgPnp;
  if ( m_PkgPnp->m_PowerPolicyMachine.m_Owner )
  {
    FxPowerIdleMachine::IoDecrement(&m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine, Tag, Line, File);
    v8 = pDevice->m_PkgPnp;
    if ( v8->m_SleepStudyTrackReferences == 1
      && _InterlockedExchangeAdd(&v8->m_SleepStudyPowerRefIoCount, 0xFFFFFFFF) == 1 )
    {
      m_SleepStudy = v8->m_SleepStudy;
      if ( m_SleepStudy )
      {
        if ( m_SleepStudy->ComponentPowerRef )
        {
          if ( unk_1C00AB338 )
            unk_1C00AB338();
        }
      }
    }
  }
  else
  {
    WPP_IFR_SF_(pDevice->m_Globals, 2u, 0x12u, 0x27u, WPP_FxDeviceApi_cpp_Traceguids);
  }
}
