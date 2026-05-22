/*
 * XREFs of ?Thunk_UpdateSuppressionPolicy_16@?$ICursorSuppressionPolicyObjectProxy_Receive@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180118D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ICursorSuppressionPolicyObjectProxy_Receive<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::Thunk_UpdateSuppressionPolicy_16(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int *v2; // rax

  v2 = *a2;
  LOBYTE(a2) = 1;
  return BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl::UpdateSuppressionPolicy(a1, a2, *v2);
}
