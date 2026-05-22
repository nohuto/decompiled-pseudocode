/*
 * XREFs of ?AddRef@BamoInputObserverManagerPrincipal@@UEAAKXZ @ 0x18001AC10
 * Callers:
 *     ?AddRef@GestureServices@@UEAAKXZ @ 0x180072B70 (-AddRef@GestureServices@@UEAAKXZ.c)
 *     ??0ShellHandwritingClientProxy@@QEAA@AEBV?$ComPtr@VShellHandwritingHostServer@@@WRL@Microsoft@@@Z @ 0x180074F74 (--0ShellHandwritingClientProxy@@QEAA@AEBV-$ComPtr@VShellHandwritingHostServer@@@WRL@Microsoft@@@.c)
 *     ?CreateShellHandwritingClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoShellHandwritingHostClientProxy@@@Z @ 0x1800750DC (-CreateShellHandwritingClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoShellHandwrit.c)
 *     ?RuntimeClassInitialize@ShellHandwritingProcessor@@QEAAJXZ @ 0x1800781C0 (-RuntimeClassInitialize@ShellHandwritingProcessor@@QEAAJXZ.c)
 *     ?AddRef@BamoInputProcessManagerPrincipal@@W7EAAKXZ @ 0x1800795D0 (-AddRef@BamoInputProcessManagerPrincipal@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoInputObserverManagerPrincipal::AddRef(BamoInputObserverManagerPrincipal *this)
{
  return (**((__int64 (__fastcall ***)(char *))this + 2))((char *)this + 16);
}
