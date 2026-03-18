/*
 * XREFs of ?PurgeInputDispatcherObjects@LegacyInputDispatcher@@QEAAXXZ @ 0x1C00B7AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ @ 0x1C00B7C94 (-HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall LegacyInputDispatcher::PurgeInputDispatcherObjects(LegacyInputDispatcher *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx
  unsigned int v5; // edi

  if ( LegacyInputDispatcher::HasInputDispatcherObjects(this) )
  {
    v4 = *((unsigned int *)this + 10);
    v5 = *((_DWORD *)this + 13) - v4;
    if ( !v5 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v2, v3);
      v4 = *((unsigned int *)this + 10);
    }
    memset((void *)(*((_QWORD *)this + 1) + 8 * v4), 0, 8LL * v5);
    memset((void *)(*((_QWORD *)this + 4) + 16LL * *((unsigned int *)this + 10)), 0, 16LL * v5);
    *((_DWORD *)this + 13) = *((_DWORD *)this + 10);
    *((_DWORD *)this + 10) = 64;
  }
}
