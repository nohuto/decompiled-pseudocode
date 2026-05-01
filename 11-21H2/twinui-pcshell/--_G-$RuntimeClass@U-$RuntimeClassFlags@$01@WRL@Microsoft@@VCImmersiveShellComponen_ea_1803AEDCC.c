/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIRemoteLauncherForegroundHandler@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1803AEDCC
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIRemoteLauncherForegroundHandler@@VFtmBase@23@@WRL@Microsoft@@WCI@EAAPEAXI@Z @ 0x1801F6770 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponen_ea_1801F6770.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1800D2460 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x1800EF978 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180188D28 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=6
CWRLObjectWithGITSite *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IRemoteLauncherForegroundHandler,Microsoft::WRL::FtmBase>::`scalar deleting destructor'(
        CWRLObjectWithGITSite *this,
        char a2)
{
  *((_DWORD *)this + 39) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 18);
  CImmersiveShellComponent::~CImmersiveShellComponent((CWRLObjectWithGITSite *)((char *)this + 40));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
