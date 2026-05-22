/*
 * XREFs of ?AddRef@BamoInputObserverManagerPrincipal@@UEAAKXZ @ 0x18001A3E0
 * Callers:
 *     ?AddRef@GestureServices@@UEAAKXZ @ 0x180060340 (-AddRef@GestureServices@@UEAAKXZ.c)
 *     ??0ShellHandwritingClientProxy@@QEAA@AEBV?$ComPtr@VShellHandwritingHostServer@@@WRL@Microsoft@@@Z @ 0x1800621A0 (--0ShellHandwritingClientProxy@@QEAA@AEBV-$ComPtr@VShellHandwritingHostServer@@@WRL@Microsoft@@@.c)
 *     ?CreateShellHandwritingClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoShellHandwritingHostClientProxy@@@Z @ 0x18006230C (-CreateShellHandwritingClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoShellHandwrit.c)
 *     ?RuntimeClassInitialize@ShellHandwritingProcessor@@QEAAJXZ @ 0x180064740 (-RuntimeClassInitialize@ShellHandwritingProcessor@@QEAAJXZ.c)
 *     ?AddRef@BamoInputProcessManagerPrincipal@@W7EAAKXZ @ 0x180065B50 (-AddRef@BamoInputProcessManagerPrincipal@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoInputObserverManagerPrincipal::AddRef(BamoInputObserverManagerPrincipal *this)
{
  return (**((__int64 (__fastcall ***)(char *))this + 2))((char *)this + 16);
}
