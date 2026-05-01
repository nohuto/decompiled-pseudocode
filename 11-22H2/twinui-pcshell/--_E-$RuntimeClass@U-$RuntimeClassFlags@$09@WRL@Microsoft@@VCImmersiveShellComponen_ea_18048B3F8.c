/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$09@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIImmersiveShellStressTool@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18048B3F8
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$09@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIImmersiveShellStressTool@@@WRL@Microsoft@@WBI@EAAPEAXI@Z @ 0x18029A430 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$09@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UI.c)
 * Callees:
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801026C4 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

char *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<10>,CImmersiveShellComponentWithSite,IImmersiveShellStressTool>::`vector deleting destructor'(
        char *a1,
        char a2)
{
  *((_DWORD *)a1 + 25) = -1073741823;
  CImmersiveShellComponent::~CImmersiveShellComponent((CImmersiveShellComponent *)(a1 + 24));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)a1 + 2);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
