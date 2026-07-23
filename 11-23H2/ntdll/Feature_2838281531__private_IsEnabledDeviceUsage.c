/*
 * XREFs of Feature_2838281531__private_IsEnabledDeviceUsage @ 0x1800A08AC
 * Callers:
 *     PsspDuplicateSnapshotLocalToRemote @ 0x18012BECC (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18012C488 (PsspDuplicateSnapshotRemoteToRemote.c)
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
