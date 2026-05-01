/*
 * XREFs of ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180005C50
 * Callers:
 *     MsixvcAddPackageAsync @ 0x180004C80 (MsixvcAddPackageAsync.c)
 *     MsixvcUpdatePolicyInternal @ 0x180004DC4 (MsixvcUpdatePolicyInternal.c)
 *     MsixvcRemediateMutablePackagesForVolumeAsync @ 0x180005580 (MsixvcRemediateMutablePackagesForVolumeAsync.c)
 *     MsixvcAddGameToGCS @ 0x1800056A0 (MsixvcAddGameToGCS.c)
 *     ??$?0PEB_W@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEB_WUDummy@Details@23@@Z @ 0x180005BD0 (--$-0PEB_W@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEB_WUDummy@Details@23@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Details::RaiseException(Microsoft::WRL::Details *this)
{
  RaiseException((DWORD)this, 1u, 0, 0LL);
}
