/*
 * XREFs of ??$ReleaseInterface@VCDynamicPoolSet@DirectComposition@@@@YAXAEAPEAVCDynamicPoolSet@DirectComposition@@@Z @ 0x18001BC1C
 * Callers:
 *     ??1CSurfaceManager@DirectComposition@@EEAA@XZ @ 0x18001B464 (--1CSurfaceManager@DirectComposition@@EEAA@XZ.c)
 *     ?PreallocateDynamicPools@CSurfaceManager@DirectComposition@@QEAAJXZ @ 0x18001BB98 (-PreallocateDynamicPools@CSurfaceManager@DirectComposition@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18002AEB8 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<DirectComposition::CDynamicPoolSet>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CMILRefCountBaseT<IUnknown>::InternalRelease(v2);
    *a1 = 0LL;
  }
  return result;
}
