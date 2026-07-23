/*
 * XREFs of MiAreChargesNeededToLockPage @ 0x1402CE220
 * Callers:
 *     MiCanBatchHardFaultPages @ 0x1402CDEF0 (MiCanBatchHardFaultPages.c)
 *     MiMakePageAvoidRead @ 0x1402CE290 (MiMakePageAvoidRead.c)
 *     MiFinishHardFault @ 0x1402D9590 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x1402DB270 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x1402DC0C0 (MiCheckProtoPtePageState.c)
 *     MiLockProtoPoolPage @ 0x1402DD490 (MiLockProtoPoolPage.c)
 *     MiFinishMdlForMappedFileFault @ 0x1402E1DD0 (MiFinishMdlForMappedFileFault.c)
 *     MiAddLockedPageCharge @ 0x1402EF5F8 (MiAddLockedPageCharge.c)
 *     MiReferenceDriverPage @ 0x140325E2C (MiReferenceDriverPage.c)
 *     MiMakeFaultPfnActive @ 0x140335170 (MiMakeFaultPfnActive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAreChargesNeededToLockPage(__int64 a1)
{
  __int64 v1; // rax
  __int16 v2; // r8
  __int64 v3; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( (v1 & 0x10000000000LL) != 0 || (v1 & 0x20000000000000LL) != 0 )
    return 0LL;
  v2 = *(_WORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  result = 0LL;
  if ( !v2 )
    return 1LL;
  if ( v2 == 1 )
  {
    if ( v3 || (*(_BYTE *)(a1 + 34) & 8) != 0 )
      return 1LL;
  }
  else if ( v2 == 2 && v3 && (*(_BYTE *)(a1 + 34) & 8) != 0 )
  {
    return 1LL;
  }
  return result;
}
