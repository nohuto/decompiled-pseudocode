/*
 * XREFs of RtlFlushFeatureUsage @ 0x14067EE10
 * Callers:
 *     <none>
 * Callees:
 *     CmFcManagerFlushFeatureUsage @ 0x14067F5CC (CmFcManagerFlushFeatureUsage.c)
 */

__int64 __fastcall RtlFlushFeatureUsage(__int64 a1, __int64 a2)
{
  return CmFcManagerFlushFeatureUsage(a1, (unsigned int)a1, a2);
}
