/*
 * XREFs of ??_GCImmersiveShellComponentWithSite@@UEAAPEAXI@Z @ 0x18031E858
 * Callers:
 *     ??_ECImmersiveShellComponentWithSite@@WBI@EAAPEAXI@Z @ 0x1801EFDA0 (--_ECImmersiveShellComponentWithSite@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1800D2460 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

CImmersiveShellComponentWithSite *__fastcall CImmersiveShellComponentWithSite::`scalar deleting destructor'(
        CImmersiveShellComponentWithSite *this,
        char a2)
{
  CImmersiveShellComponent::~CImmersiveShellComponent((CImmersiveShellComponentWithSite *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
