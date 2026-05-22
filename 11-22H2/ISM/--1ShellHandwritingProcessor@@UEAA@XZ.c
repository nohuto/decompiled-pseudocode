/*
 * XREFs of ??1ShellHandwritingProcessor@@UEAA@XZ @ 0x1800779FC
 * Callers:
 *     ??_EShellHandwritingProcessor@@UEAAPEAXI@Z @ 0x180077A30 (--_EShellHandwritingProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VShellHandwritingHostServer@@@WRL@Microsoft@@IEAAKXZ @ 0x180075174 (-InternalRelease@-$ComPtr@VShellHandwritingHostServer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VBamoShellHandwritingHostClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180077D10 (-InternalRelease@-$ComPtr@VBamoShellHandwritingHostClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall ShellHandwritingProcessor::~ShellHandwritingProcessor(BamoInputSystemPrincipal **this)
{
  Microsoft::WRL::ComPtr<BamoShellHandwritingHostClientProxy>::InternalRelease(this + 5);
  Microsoft::WRL::ComPtr<ShellHandwritingHostServer>::InternalRelease(this + 3);
  *((_DWORD *)this + 5) = -1073741823;
}
