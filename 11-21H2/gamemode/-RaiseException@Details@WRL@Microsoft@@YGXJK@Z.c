/*
 * XREFs of ?RaiseException@Details@WRL@Microsoft@@YGXJK@Z @ 0x10005A81
 * Callers:
 *     _MsixvcAddPackageAsync@20 @ 0x10004D20 (_MsixvcAddPackageAsync@20.c)
 *     _MsixvcUpdatePolicyInternal@24 @ 0x10004DEE (_MsixvcUpdatePolicyInternal@24.c)
 *     _MsixvcRemediateMutablePackagesForVolumeAsync@8 @ 0x10005400 (_MsixvcRemediateMutablePackagesForVolumeAsync@8.c)
 *     _MsixvcAddGameToGCS@4 @ 0x100054C0 (_MsixvcAddGameToGCS@4.c)
 *     ??$?0PB_W@HStringReference@Wrappers@WRL@Microsoft@@QAE@ABQB_WUDummy@Details@23@@Z @ 0x1000595B (--$-0PB_W@HStringReference@Wrappers@WRL@Microsoft@@QAE@ABQB_WUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AAEXPB_WII@Z @ 0x10005A95 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AAEXPB_WII@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall Microsoft::WRL::Details::RaiseException(void *ecx0)
{
  RaiseException((DWORD)ecx0, 1u, 0, 0);
}
