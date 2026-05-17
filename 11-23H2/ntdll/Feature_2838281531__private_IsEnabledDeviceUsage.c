/*
 * XREFs of Feature_2838281531__private_IsEnabledDeviceUsage @ 0x1800A08EC
 * Callers:
 *     PsspDuplicateSnapshotLocalToRemote @ 0x18012BEFC (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18012C484 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

__int64 Feature_2838281531__private_IsEnabledDeviceUsage()
{
  __int64 v1; // [rsp+8h] [rbp+8h]

  LODWORD(v1) = Feature_2838281531__private_featureState;
  if ( (Feature_2838281531__private_featureState & 0x10) != 0 )
    return Feature_2838281531__private_featureState & 1;
  else
    return Feature_2838281531__private_IsEnabledFallback(v1, 3LL);
}
