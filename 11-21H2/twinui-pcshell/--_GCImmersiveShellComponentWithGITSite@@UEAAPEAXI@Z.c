/*
 * XREFs of ??_GCImmersiveShellComponentWithGITSite@@UEAAPEAXI@Z @ 0x1802DB4AC
 * Callers:
 *     ??_ECImmersiveShellComponentWithGITSite@@WCI@EAAPEAXI@Z @ 0x1801EAE90 (--_ECImmersiveShellComponentWithGITSite@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1800D2460 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x1800EF978 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

CImmersiveShellComponentWithGITSite *__fastcall CImmersiveShellComponentWithGITSite::`scalar deleting destructor'(
        CImmersiveShellComponentWithGITSite *this,
        char a2)
{
  CImmersiveShellComponent::~CImmersiveShellComponent((CImmersiveShellComponentWithGITSite *)((char *)this + 40));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
