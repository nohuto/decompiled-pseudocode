/*
 * XREFs of ?HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ @ 0x1C006FBA8
 * Callers:
 *     ?RegisterInputDispatcherObjects@LegacyInputDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z @ 0x1C006E7C0 (-RegisterInputDispatcherObjects@LegacyInputDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z.c)
 *     ?Dispatch@LegacyInputDispatcher@@QEBAJI@Z @ 0x1C006FB18 (-Dispatch@LegacyInputDispatcher@@QEBAJI@Z.c)
 *     ?PurgeInputDispatcherObjects@LegacyInputDispatcher@@QEAAXXZ @ 0x1C00C39A0 (-PurgeInputDispatcherObjects@LegacyInputDispatcher@@QEAAXXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall LegacyInputDispatcher::HasInputDispatcherObjects(LegacyInputDispatcher *this)
{
  unsigned int v1; // eax

  v1 = *((_DWORD *)this + 10);
  if ( v1 >= *((_DWORD *)this + 13) && v1 != 64 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3241LL);
  return *((_DWORD *)this + 10) != 64;
}
