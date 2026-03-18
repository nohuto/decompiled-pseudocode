/*
 * XREFs of Feature_Servicing_CopyMoveFileEventObjectLeak__private_IsEnabledDeviceUsage @ 0x14040FF80
 * Callers:
 *     IopCopyCompleteReadRequest @ 0x14028C5D0 (IopCopyCompleteReadRequest.c)
 * Callees:
 *     Feature_Servicing_CopyMoveFileEventObjectLeak__private_IsEnabledFallback @ 0x14040FFB8 (Feature_Servicing_CopyMoveFileEventObjectLeak__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_CopyMoveFileEventObjectLeak__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_CopyMoveFileEventObjectLeak__private_featureState & 0x10) != 0 )
    return Feature_Servicing_CopyMoveFileEventObjectLeak__private_featureState & 1;
  else
    return Feature_Servicing_CopyMoveFileEventObjectLeak__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_CopyMoveFileEventObjectLeak__private_featureState,
             3LL);
}
