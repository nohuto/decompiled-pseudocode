/*
 * XREFs of Feature_1940347194__private_IsEnabledDeviceUsage @ 0x14040FEC0
 * Callers:
 *     NtAssociateWaitCompletionPacket @ 0x140250530 (NtAssociateWaitCompletionPacket.c)
 *     IopCloseWaitCompletionPacket @ 0x140349830 (IopCloseWaitCompletionPacket.c)
 *     NtCancelWaitCompletionPacket @ 0x140349A30 (NtCancelWaitCompletionPacket.c)
 *     NtCreateWaitCompletionPacket @ 0x1407BA760 (NtCreateWaitCompletionPacket.c)
 * Callees:
 *     Feature_1940347194__private_IsEnabledFallback @ 0x14040FEF8 (Feature_1940347194__private_IsEnabledFallback.c)
 */

__int64 Feature_1940347194__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1940347194__private_featureState & 0x10) != 0 )
    return Feature_1940347194__private_featureState & 1;
  else
    return Feature_1940347194__private_IsEnabledFallback((unsigned int)Feature_1940347194__private_featureState, 3LL);
}
