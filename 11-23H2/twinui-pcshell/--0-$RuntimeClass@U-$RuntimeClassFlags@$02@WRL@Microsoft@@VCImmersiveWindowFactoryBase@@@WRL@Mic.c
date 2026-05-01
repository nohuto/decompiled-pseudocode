/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveWindowFactoryBase@@@WRL@Microsoft@@QEAA@XZ @ 0x1800ED2EC
 * Callers:
 *     ??0CImmersiveWindowFactory@@QEAA@XZ @ 0x1800ED238 (--0CImmersiveWindowFactory@@QEAA@XZ.c)
 * Callees:
 *     ??0ILaunchTargetMonitor@@QEAA@XZ @ 0x1800EB7AC (--0ILaunchTargetMonitor@@QEAA@XZ.c)
 *     ??0CImmersiveWindowFactoryBase@@QEAA@XZ @ 0x1800ED390 (--0CImmersiveWindowFactoryBase@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveWindowFactoryBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveWindowFactoryBase>(
        _QWORD *a1)
{
  CImmersiveWindowFactoryBase::CImmersiveWindowFactoryBase((CImmersiveWindowFactoryBase *)a1);
  ILaunchTargetMonitor::ILaunchTargetMonitor((ILaunchTargetMonitor *)(a1 + 22));
  a1[24] = 1LL;
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveWindowFactoryBase>::`vftable'{for `Microsoft::WRL::Details::Selector<CImmersiveWindowFactoryBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveWindowFactoryBase>,IWeakReferenceSource>>'};
  a1[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveWindowFactoryBase>::`vftable'{for `Microsoft::WRL::Details::Selector<CWrlLightweightHandlerBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWrlLightweightHandlerBase>,Microsoft::WRL::CloakedIid<IStdMarshalInfo>>>'};
  a1[6] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveWindowFactoryBase>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::CloakedIid<IStdMarshalInfo>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWrlLightweightHandlerBase>,Microsoft::WRL::CloakedIid<IStdMarshalInfo>>>'};
  a1[9] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveWindowFactoryBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IConfigureWindowFactory>'};
  a1[10] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveWindowFactoryBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<ICoreWindowFactoryPriv>>'};
  a1[22] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveWindowFactoryBase>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveWindowFactoryBase>,IWeakReferenceSource>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
