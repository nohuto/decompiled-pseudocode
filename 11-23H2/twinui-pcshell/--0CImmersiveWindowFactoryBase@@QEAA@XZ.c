/*
 * XREFs of ??0CImmersiveWindowFactoryBase@@QEAA@XZ @ 0x1800ED390
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveWindowFactoryBase@@@WRL@Microsoft@@QEAA@XZ @ 0x1800ED2EC (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveWindowFactoryBase@@@WRL@Mic.c)
 * Callees:
 *     ??0ILaunchTargetMonitor@@QEAA@XZ @ 0x1800EB7AC (--0ILaunchTargetMonitor@@QEAA@XZ.c)
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$CloakedIid@UIConfigureWindowFactory@@@23@U?$CloakedIid@UICoreWindowFactoryPriv@@@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ED51C (--0-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$CloakedIid@UIConfigureWindow.c)
 */

CImmersiveWindowFactoryBase *__fastcall CImmersiveWindowFactoryBase::CImmersiveWindowFactoryBase(
        CImmersiveWindowFactoryBase *this)
{
  CImmersiveWindowFactoryBase *result; // rax

  ILaunchTargetMonitor::ILaunchTargetMonitor(this);
  ILaunchTargetMonitor::ILaunchTargetMonitor((CImmersiveWindowFactoryBase *)((char *)this + 8));
  *((_QWORD *)this + 1) = &CWrlLightweightHandlerBase::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 6) = 0;
  InitializeSRWLock((PSRWLOCK)this + 4);
  ILaunchTargetMonitor::ILaunchTargetMonitor((CImmersiveWindowFactoryBase *)((char *)this + 48));
  *((_QWORD *)this + 1) = &CWrlLightweightHandlerServer::`vftable'{for `Microsoft::WRL::Details::Selector<CWrlLightweightHandlerBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWrlLightweightHandlerBase>,Microsoft::WRL::CloakedIid<IStdMarshalInfo>>>'};
  *((_QWORD *)this + 6) = &CWrlLightweightHandlerServer::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::CloakedIid<IStdMarshalInfo>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWrlLightweightHandlerBase>,Microsoft::WRL::CloakedIid<IStdMarshalInfo>>>'};
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<IConfigureWindowFactory>,Microsoft::WRL::CloakedIid<ICoreWindowFactoryPriv>>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<IConfigureWindowFactory>,Microsoft::WRL::CloakedIid<ICoreWindowFactoryPriv>>((char *)this + 72);
  *(_QWORD *)this = &CImmersiveWindowFactoryBase::`vftable';
  *((_QWORD *)this + 1) = &CImmersiveWindowFactoryBase::`vftable'{for `Microsoft::WRL::Details::Selector<CWrlLightweightHandlerBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWrlLightweightHandlerBase>,Microsoft::WRL::CloakedIid<IStdMarshalInfo>>>'};
  *((_QWORD *)this + 6) = &CWrlLightweightHandlerServer::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::CloakedIid<IStdMarshalInfo>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWrlLightweightHandlerBase>,Microsoft::WRL::CloakedIid<IStdMarshalInfo>>>'};
  *((_QWORD *)this + 9) = &CImmersiveWindowFactoryBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IConfigureWindowFactory>'};
  *((_QWORD *)this + 10) = &CImmersiveWindowFactoryBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<ICoreWindowFactoryPriv>>'};
  result = this;
  *((_QWORD *)this + 12) = 0LL;
  *(_QWORD *)((char *)this + 108) = 0LL;
  *((_WORD *)this + 52) = 257;
  *(_OWORD *)((char *)this + 116) = xmmword_180834AA8;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 33) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_BYTE *)this + 144) = 0;
  *((_DWORD *)this + 37) = 0;
  *((_BYTE *)this + 152) = 0;
  *((_DWORD *)this + 39) = 0;
  *((_BYTE *)this + 168) = 0;
  return result;
}
