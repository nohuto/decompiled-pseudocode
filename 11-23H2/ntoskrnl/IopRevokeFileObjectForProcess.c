/*
 * XREFs of IopRevokeFileObjectForProcess @ 0x140558ACC
 * Callers:
 *     IopCheckHandleForRevocation @ 0x1405586E0 (IopCheckHandleForRevocation.c)
 * Callees:
 *     IopCancelIrpsInFileObjectList @ 0x1402AFB50 (IopCancelIrpsInFileObjectList.c)
 *     IopSetFileObjectExtensionFlag @ 0x140302B0C (IopSetFileObjectExtensionFlag.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x1407C1A18 (IopCancelIrpsInThreadListForCurrentProcess.c)
 */

__int64 __fastcall IopRevokeFileObjectForProcess(__int64 a1, int a2)
{
  if ( (unsigned int)IopSetFileObjectExtensionFlag(a1, 4, 1) == -1073741670 )
    *(_QWORD *)(a1 + 208) = IopRevocationExtension;
  IopCancelIrpsInFileObjectList(a1, a2, 0, 0, 0, 0);
  return IopCancelIrpsInThreadListForCurrentProcess(a1, 0LL);
}
