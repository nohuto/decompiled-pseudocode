/*
 * XREFs of ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C009E810
 * Callers:
 *     ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x1C0053CD4 (-Initialize@InputExtensibilityCallout@@SAJXZ.c)
 *     UnInitializeInputComponents @ 0x1C009EA30 (UnInitializeInputComponents.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ @ 0x1C009E864 (-CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall InputExtensibilityCallout::UnInitialize(InputExtensibilityCallout *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  char *v4; // rbx

  if ( gpInputExtensibilityCallout )
  {
    InputExtensibilityCallout::CloseCoreMsgPort(a1);
    v4 = (char *)gpInputExtensibilityCallout;
    if ( gpInputExtensibilityCallout )
    {
      if ( *((_QWORD *)gpInputExtensibilityCallout + 2) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v3);
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v4);
    }
    gpInputExtensibilityCallout = 0LL;
  }
}
