/*
 * XREFs of FsRtlGetSupportedFeatures @ 0x140337860
 * Callers:
 *     IopQueryInformation @ 0x1407ABAF0 (IopQueryInformation.c)
 *     IopCopyOffloadCapable @ 0x140875C88 (IopCopyOffloadCapable.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FsRtlGetSupportedFeatures(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = 0;
  if ( FltMgrCallbacks )
    return (*(__int64 (**)(void))(FltMgrCallbacks + 16))();
  return result;
}
