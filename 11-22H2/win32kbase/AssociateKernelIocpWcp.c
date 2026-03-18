/*
 * XREFs of AssociateKernelIocpWcp @ 0x1C00578C0
 * Callers:
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x1C0057838 (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AssociateKernelIocpWcp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  return ZwAssociateWaitCompletionPacket(a1, a2, a3, a4, a5, a6, 0LL, a7);
}
