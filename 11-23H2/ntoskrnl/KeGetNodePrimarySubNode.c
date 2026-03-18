/*
 * XREFs of KeGetNodePrimarySubNode @ 0x140305A04
 * Callers:
 *     KeQueryNodeActiveAffinity @ 0x1403059B0 (KeQueryNodeActiveAffinity.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140305FB0 (KeQueryLogicalProcessorRelationship.c)
 *     KiComputeNumaCosts @ 0x140B75D24 (KiComputeNumaCosts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetNodePrimarySubNode(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 16) )
    return *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a1 + 12) + 24);
  else
    return 0LL;
}
