/*
 * XREFs of ?RmpPolicyDigestCompute@@YA?AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180008630
 * Callers:
 *     ?RmpActivityHostComputeDigest@@YA?AT_RM_POLICY_DIGEST@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800500D0 (-RmpActivityHostComputeDigest@@YA-AT_RM_POLICY_DIGEST@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x1800086E8 (-RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x180008710 (-IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 */

__int16 __fastcall RmpPolicyDigestCompute(__int64 a1)
{
  __int64 v1; // r11
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  __int16 v4; // r10
  __int64 v5; // r11

  v1 = a1;
  if ( (*(_BYTE *)(a1 + 1378) & 8) == 0 )
  {
    v2 = *(int *)(a1 + 1336);
    if ( (unsigned int)v2 > 0x27 || (v3 = 0x8800001000LL, !_bittest64(&v3, v2)) )
      ExecutionModel::_ResourceSetInfo::IsFrozen((ExecutionModel::_ResourceSetInfo *)(v1 + 1336));
  }
  if ( !RmpResourceSetIsCommitSaveEligible((const struct ExecutionModel::_ResourceSetInfo *)(v1 + 1336)) )
    v4 |= 8u;
  return v4 | (8
             * (*(_WORD *)(v5 + 1376) & 8 | (2
                                           * (*(_WORD *)(v5 + 1376) & 3 | (8 * ((*(_DWORD *)(v5 + 1332) >> 3) & 1 | 2))))));
}
