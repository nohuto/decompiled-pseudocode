/*
 * XREFs of ??1ShellHandwritingProcessor@@UEAA@XZ @ 0x180063F5C
 * Callers:
 *     ??_EShellHandwritingProcessor@@UEAAPEAXI@Z @ 0x180063F90 (--_EShellHandwritingProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VShellHandwritingHostServer@@@WRL@Microsoft@@IEAAKXZ @ 0x1800623A4 (-InternalRelease@-$ComPtr@VShellHandwritingHostServer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VBamoShellHandwritingHostClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180064260 (-InternalRelease@-$ComPtr@VBamoShellHandwritingHostClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall ShellHandwritingProcessor::~ShellHandwritingProcessor(BamoInputSystemPrincipal **this)
{
  Microsoft::WRL::ComPtr<BamoShellHandwritingHostClientProxy>::InternalRelease(this + 5);
  Microsoft::WRL::ComPtr<ShellHandwritingHostServer>::InternalRelease(this + 3);
  *((_DWORD *)this + 5) = -1073741823;
}
