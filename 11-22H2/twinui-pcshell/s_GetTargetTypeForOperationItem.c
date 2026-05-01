/*
 * XREFs of s_GetTargetTypeForOperationItem @ 0x18059C0C4
 * Callers:
 *     ?PrepareTaggingInfoForApp@CAppTransitionTargetManager@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x18059ABD0 (-PrepareTaggingInfoForApp@CAppTransitionTargetManager@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITe.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall s_GetTargetTypeForOperationItem(int a1, __int64 a2)
{
  unsigned int v3; // edi
  int v4; // eax
  int v5; // ebx
  int v6; // ebx

  v3 = -1;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 96LL))(a2);
  switch ( v4 )
  {
    case 7:
      return 3;
    case 8:
      return 4;
    case 9:
      return 5;
  }
  if ( !a1 )
    return 1;
  v5 = a1 - 1;
  if ( !v5 )
    return 2;
  v6 = v5 - 1;
  if ( !v6 )
    return 1;
  if ( v6 == 1 )
    return 2;
  return v3;
}
