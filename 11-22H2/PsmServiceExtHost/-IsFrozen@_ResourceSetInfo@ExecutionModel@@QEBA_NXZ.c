/*
 * XREFs of ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x180008710
 * Callers:
 *     ?RmpPolicyDigestCompute@@YA?AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180008630 (-RmpPolicyDigestCompute@@YA-AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x1800086E8 (-RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExecutionModel::_ResourceSetInfo::IsFrozen(ExecutionModel::_ResourceSetInfo *this)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx
  bool result; // al

  result = 1;
  if ( (*((_BYTE *)this + 40) & 0x10) == 0 )
  {
    v1 = *(int *)this;
    if ( (unsigned int)v1 > 0x28 )
      return 0;
    v2 = 0x11000002000LL;
    if ( !_bittest64(&v2, v1) )
      return 0;
  }
  return result;
}
