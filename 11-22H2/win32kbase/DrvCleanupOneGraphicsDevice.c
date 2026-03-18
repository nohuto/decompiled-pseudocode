/*
 * XREFs of DrvCleanupOneGraphicsDevice @ 0x1C0018720
 * Callers:
 *     ?DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00186C8 (-DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C001CDB0 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C001F34C (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     DrvAddMirrorDriversToRemoteList @ 0x1C00CAEC4 (DrvAddMirrorDriversToRemoteList.c)
 *     DrvCleanupGraphicsDevices @ 0x1C0165C94 (DrvCleanupGraphicsDevices.c)
 * Callees:
 *     bSetDeviceSessionUsage @ 0x1C001CCE0 (bSetDeviceSessionUsage.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DrvCleanupOneGraphicsDevice(void *a1)
{
  void *v1; // rdx
  void *v3; // rdx
  void *v4; // rdx
  void *v5; // rdx
  void *v6; // rdx

  v1 = (void *)*((_QWORD *)a1 + 22);
  if ( v1 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
  v3 = (void *)*((_QWORD *)a1 + 24);
  if ( v3 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
  v4 = (void *)*((_QWORD *)a1 + 26);
  if ( v4 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
  v5 = (void *)*((_QWORD *)a1 + 25);
  if ( v5 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v5);
  if ( *((_QWORD *)a1 + 28) )
  {
    if ( (*((_DWORD *)a1 + 41) & 2) != 0 )
      bSetDeviceSessionUsage(a1, 0LL);
    ObfDereferenceObject(*((PVOID *)a1 + 28));
  }
  v6 = (void *)*((_QWORD *)a1 + 33);
  if ( v6 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v6);
    *((_QWORD *)a1 + 33) = 0LL;
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, a1);
}
