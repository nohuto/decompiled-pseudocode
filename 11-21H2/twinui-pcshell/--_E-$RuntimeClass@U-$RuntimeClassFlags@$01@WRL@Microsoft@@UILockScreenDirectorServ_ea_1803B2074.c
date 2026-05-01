/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UILockScreenDirectorServiceProvider@@VCImmersiveShellComponentWithGITSite@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1803B2074
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UILockScreenDirectorServiceProvider@@VCImmersiveShellComponentWithGITSite@@@WRL@Microsoft@@WDA@EAAPEAXI@Z @ 0x1801F6BB0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UILockScreenDirectorServiceProvider@@.c)
 * Callees:
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1800D2460 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x1800EF978 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ILockScreenDirectorServiceProvider,CImmersiveShellComponentWithGITSite>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[31] = -1073741823;
  CImmersiveShellComponent::~CImmersiveShellComponent((CImmersiveShellComponent *)(a1 + 12));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite((CWRLObjectWithGITSite *)(a1 + 2));
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
