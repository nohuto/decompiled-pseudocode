/*
 * XREFs of ?CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x1800064A8
 * Callers:
 *     ?SetWindowId@BamoActivatableEntityPrincipal@@UEAAX_K@Z @ 0x180005F30 (-SetWindowId@BamoActivatableEntityPrincipal@@UEAAX_K@Z.c)
 *     ?SetLuid@BamoActivatableEntityPrincipal@@UEAAXAEBU_LUID@@@Z @ 0x180006040 (-SetLuid@BamoActivatableEntityPrincipal@@UEAAXAEBU_LUID@@@Z.c)
 *     ?SetProcessId@BamoActivatableEntityPrincipal@@UEAAXI@Z @ 0x180006150 (-SetProcessId@BamoActivatableEntityPrincipal@@UEAAXI@Z.c)
 *     ?SetThreadId@BamoActivatableEntityPrincipal@@UEAAXI@Z @ 0x180006260 (-SetThreadId@BamoActivatableEntityPrincipal@@UEAAXI@Z.c)
 *     ??0?$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800870CC (--0-$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QE.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x18008D4B8 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::CurrentThreadHasLock(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  return *((_DWORD *)this + 46) == GetCurrentThreadId();
}
