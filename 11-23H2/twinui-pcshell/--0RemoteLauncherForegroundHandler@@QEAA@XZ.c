/*
 * XREFs of ??0RemoteLauncherForegroundHandler@@QEAA@XZ @ 0x18017F4A8
 * Callers:
 *     ??$MakeAndInitialize@VRemoteLauncherForegroundHandler@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18017F2BC (--$MakeAndInitialize@VRemoteLauncherForegroundHandler@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIRemoteLauncherForegroundHandler@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180100824 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponent_ea_180100824.c)
 */

RemoteLauncherForegroundHandler *__fastcall RemoteLauncherForegroundHandler::RemoteLauncherForegroundHandler(
        RemoteLauncherForegroundHandler *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IRemoteLauncherForegroundHandler,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IRemoteLauncherForegroundHandler,Microsoft::WRL::FtmBase>((__int64)this);
  *(_QWORD *)this = &RemoteLauncherForegroundHandler::`vftable'{for `Microsoft::WRL::Details::Selector<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IPrivilegedOperationsConsumer,IRemoteLauncherForegroundHandler,Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 5) = &RemoteLauncherForegroundHandler::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IRemoteLauncherForegroundHandler,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 13) = &RemoteLauncherForegroundHandler::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPrivilegedOperationsConsumer,IRemoteLauncherForegroundHandler,Microsoft::WRL::FtmBase>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IPrivilegedOperationsConsumer,IRemoteLauncherForegroundHandler,Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 14) = &RemoteLauncherForegroundHandler::`vftable'{for `IRemoteLauncherForegroundHandler'};
  *((_QWORD *)this + 15) = &RemoteLauncherForegroundHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return this;
}
