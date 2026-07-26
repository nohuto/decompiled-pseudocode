/*
 * XREFs of GetGlobalNamespace @ 0x1C0006D7C
 * Callers:
 *     ?ndisReinitializeHistograms@@YAJXZ @ 0x1C012081C (-ndisReinitializeHistograms@@YAJXZ.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x1C0120F0C (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 * Callees:
 *     <none>
 */

KnobNamespace *GetGlobalNamespace()
{
  return &stru_1C00F5D38;
}
