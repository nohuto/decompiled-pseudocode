/*
 * XREFs of ?Release@BamoInputSystemPrincipal@@UEAAKXZ @ 0x18001ADE0
 * Callers:
 *     ?Release@GestureServices@@UEAAKXZ @ 0x180073660 (-Release@GestureServices@@UEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VShellHandwritingHostServer@@@WRL@Microsoft@@IEAAKXZ @ 0x180075174 (-InternalRelease@-$ComPtr@VShellHandwritingHostServer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@BamoHeatGripServicePrincipal@@W7EAAKXZ @ 0x180079650 (-Release@BamoHeatGripServicePrincipal@@W7EAAKXZ.c)
 *     ??1OneCoreUAPInputHost@@MEAA@XZ @ 0x1800A923C (--1OneCoreUAPInputHost@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoInputSystemPrincipal::Release(BamoInputSystemPrincipal *this)
{
  return (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 8LL))((char *)this + 16);
}
