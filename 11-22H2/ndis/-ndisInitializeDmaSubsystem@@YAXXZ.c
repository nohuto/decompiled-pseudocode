/*
 * XREFs of ?ndisInitializeDmaSubsystem@@YAXXZ @ 0x1C0162AA4
 * Callers:
 *     DriverEntry @ 0x1C01608CC (DriverEntry.c)
 * Callees:
 *     ndisDmaTelemetryUpdateBucketSchema @ 0x1C0032D04 (ndisDmaTelemetryUpdateBucketSchema.c)
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C010C6D4 (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x1C0120F4C (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 */

void __fastcall ndisInitializeDmaSubsystem(
        __int64 a1,
        __int64 a2,
        unsigned __int8 (*a3)(void *, const struct KnobDescriptor *, unsigned __int64 *))
{
  unsigned __int8 (*v3)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8

  ndisRegisterKnobs(&stru_1C00D5648, 1LL, a3, 0LL);
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&unk_1C00F7210);
  ndisDmaTelemetryUpdateBucketSchema(0x4210900080204uLL);
  ndisRegisterKnobs(
    &stru_1C00D5618,
    1LL,
    v3,
    (int (*)(void *, const struct KnobDescriptor *, unsigned __int64))ndisDmaTelemetryKnobsUpdateRoutine);
}
